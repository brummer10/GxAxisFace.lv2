/*
 * Copyright (C) 2014 Guitarix project MOD project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */


#include <cstdlib>
#include <cmath>
#include <iostream>
#include <cstring>
#include <unistd.h>

///////////////////////// MACRO SUPPORT ////////////////////////////////

#define __rt_func __attribute__((section(".rt.text")))
#define __rt_data __attribute__((section(".rt.data")))

///////////////////////// FAUST SUPPORT ////////////////////////////////

#define FAUSTFLOAT float
#ifndef N_
#define N_(String) (String)
#endif
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

#define always_inline inline __attribute__((always_inline))

template <int32_t N> inline float faustpower(float x)
{
  return powf(x, N);
}
template <int32_t N> inline double faustpower(double x)
{
  return pow(x, N);
}
template <int32_t N> inline int32_t faustpower(int32_t x)
{
  return faustpower<N/2>(x) * faustpower<N-N/2>(x);
}
template <>      inline int32_t faustpower<0>(int32_t x)
{
  return 1;
}
template <>      inline int32_t faustpower<1>(int32_t x)
{
  return x;
}

////////////////////////////// LOCAL INCLUDES //////////////////////////

#include "gx_AxisFace.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "AxisFace.cc"    // dsp class generated by faust -> dsp2cc

////////////////////////////// PLUG-IN CLASS ///////////////////////////

namespace AxisFace {

class Gx_AxisFace_
{
private:
  // pointer to buffer
  float*          output;
  float*          input;
  // pointer to dsp class
  PluginLV2*      AxisFace;

  // bypass ramping
  float*          bypass;
  uint32_t        bypass_;
 
  bool            needs_ramp_down;
  bool            needs_ramp_up;
  float           ramp_down;
  float           ramp_up;
  float           ramp_up_step;
  float           ramp_down_step;
  bool            bypassed;

  // private functions
  inline void run_dsp_(uint32_t n_samples);
  inline void connect_(uint32_t port,void* data);
  inline void init_dsp_(uint32_t rate);
  inline void connect_all__ports(uint32_t port, void* data);
  inline void activate_f();
  inline void clean_up();
  inline void deactivate_f();

public:
  // LV2 Descriptor
  static const LV2_Descriptor descriptor;
  // static wrapper to private functions
  static void deactivate(LV2_Handle instance);
  static void cleanup(LV2_Handle instance);
  static void run(LV2_Handle instance, uint32_t n_samples);
  static void activate(LV2_Handle instance);
  static void connect_port(LV2_Handle instance, uint32_t port, void* data);
  static LV2_Handle instantiate(const LV2_Descriptor* descriptor,
                                double rate, const char* bundle_path,
                                const LV2_Feature* const* features);
  Gx_AxisFace_();
  ~Gx_AxisFace_();
};

// constructor
Gx_AxisFace_::Gx_AxisFace_() :
  output(NULL),
  input(NULL),
  AxisFace(AxisFace::plugin()),
  bypass(0),
  bypass_(0),
  needs_ramp_down(false),
  needs_ramp_up(false),
  bypassed(false) {};

// destructor
Gx_AxisFace_::~Gx_AxisFace_()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (AxisFace->activate_plugin !=0)
    AxisFace->activate_plugin(false, AxisFace);
  // delete DSP class
  AxisFace->delete_instance(AxisFace);
};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_AxisFace_::init_dsp_(uint32_t rate)
{
  // set values for internal ramping
  ramp_down_step = 32 * (256 * rate) / 48000; 
  ramp_up_step = ramp_down_step;
  ramp_down = ramp_down_step;
  ramp_up = 0.0;

  AxisFace->set_samplerate(rate, AxisFace); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_AxisFace_::connect_(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    case BYPASS: 
      bypass = static_cast<float*>(data); // , 0.0, 0.0, 1.0, 1.0 
      break;
    default:
      break;
    }
}

void Gx_AxisFace_::activate_f()
{
  // allocate the internal DSP mem
  if (AxisFace->activate_plugin !=0)
    AxisFace->activate_plugin(true, AxisFace);
}

void Gx_AxisFace_::clean_up()
{
  // delete the internal DSP mem
  if (AxisFace->activate_plugin !=0)
    AxisFace->activate_plugin(false, AxisFace);
}

void Gx_AxisFace_::deactivate_f()
{
  // delete the internal DSP mem
  if (AxisFace->activate_plugin !=0)
    AxisFace->activate_plugin(false, AxisFace);
}

void Gx_AxisFace_::run_dsp_(uint32_t n_samples)
{
  // do inplace processing at default
  memcpy(output, input, n_samples*sizeof(float));
  // check if bypass is pressed
  if (bypass_ != static_cast<uint32_t>(*(bypass))) {
    bypass_ = static_cast<uint32_t>(*(bypass));
    ramp_down = ramp_down_step;
    ramp_up = 0.0;    
    if (!bypass_) needs_ramp_down = true;
    else needs_ramp_up = true;
  }
  // check if raming is needed
  if (needs_ramp_down) {
    for (uint32_t i=0; i<n_samples; i++) {
      if (ramp_down >= 0.0) {
        --ramp_down;
      }
      output[i] = (output[i] * ramp_down) /ramp_down_step ;
    }

    if (ramp_down <= 0.0) {
      // when ramped down, clear buffer from AxisFace class
      AxisFace->clear_state(AxisFace);
      needs_ramp_down = false;
      bypassed = true;
      //needs_ramp_up = true;
      //ramp_down = ramp_down_step;
    }
  } else if (needs_ramp_up) {
    bypassed = false;
    for (uint32_t i=0; i<n_samples; i++) {
      if (ramp_up <= ramp_up_step) {
        ++ramp_up;
      }
      output[i] = (output[i] * ramp_up) /ramp_up_step;
    }
    if (ramp_up >= ramp_up_step) {
      needs_ramp_up = false;
     //ramp_up = 0.0;
    }
  }
  if (!bypassed) AxisFace->mono_audio(static_cast<int>(n_samples), output, output, AxisFace);
}

void Gx_AxisFace_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  AxisFace->connect_ports(port,  data, AxisFace);
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_AxisFace_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_AxisFace_ *self = new Gx_AxisFace_();
  if (!self) {
    return NULL;
  }

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_AxisFace_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_AxisFace_*>(instance)->connect_all__ports(port, data);
}

void Gx_AxisFace_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_AxisFace_*>(instance)->activate_f();
}

void Gx_AxisFace_::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_AxisFace_*>(instance)->run_dsp_(n_samples);
}

void Gx_AxisFace_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_AxisFace_*>(instance)->deactivate_f();
}

void Gx_AxisFace_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_AxisFace_* self = static_cast<Gx_AxisFace_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_AxisFace_::descriptor =
{
  GXPLUGIN_URI "#_AxisFace_",
  Gx_AxisFace_::instantiate,
  Gx_AxisFace_::connect_port,
  Gx_AxisFace_::activate,
  Gx_AxisFace_::run,
  Gx_AxisFace_::deactivate,
  Gx_AxisFace_::cleanup,
  NULL
};


} // end namespace AxisFace

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

extern "C"
LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &AxisFace::Gx_AxisFace_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
