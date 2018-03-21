// generated from file './/AxisFace.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace AxisFace {

struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};

static table1d_imp<100> clip __rt_data = {
	0.0,0.526832502723,101.97,100, {
	0.0,3.06926826735e-09,0.012121214608,0.0242424258007,0.036363636442,0.0484848462043,
	0.0606060545656,0.0727272606938,0.0848484632626,0.096969660158,0.10909084801,
	0.121212021449,0.133333171914,0.14545428576,0.157575341242,0.169696303699,
	0.181817117892,0.193937695795,0.206057897142,0.21817749848,0.230296143934,
	0.24241326701,0.254527966658,0.26663881146,0.278743531957,0.290838541285,
	0.302918198578,0.314973702183,0.326991486939,0.338951043912,0.350822268415,
	0.362562897447,0.374117368579,0.385419157115,0.396398203427,0.406992145518,
	0.417155404968,0.42685683003,0.436055411346,0.444644265766,0.452387762225,
	0.458998285084,0.464402140366,0.468797387188,0.472450821205,0.475572745931,
	0.478305852736,0.480744781352,0.482953606207,0.484977152582,0.486847856207,
	0.488589927389,0.49022193761,0.491758474043,0.493211230512,0.494589747447,
	0.495901927507,0.497154403538,0.49835280696,0.499501967412,0.500606063913,
	0.501668741162,0.502693200312,0.503682270752,0.504638467555,0.50556403794,
	0.506460999368,0.507331170275,0.508176196943,0.508997574667,0.509796666279,
	0.510574717731,0.511332871397,0.5120721775,0.512793603963,0.51349804496,
	0.514186328356,0.514859222215,0.515517440521,0.516161648211,0.516792465629,
	0.517410472483,0.518016211356,0.51861019085,0.519192888397,0.519764752775,
	0.520326206385,0.52087764729,0.521419451068,0.521951972486,0.522475547022,
	0.522990492247,0.523497109083,0.523995682956,0.524486484848,0.524969772257,
	0.525445790084,0.525914771445,0.526376938416,0.526832502723
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fVec0[2];
	double 	fConst70;
	double 	fRec5[2];
	double 	fRec4[3];
	double 	fRec3[6];
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fRec0[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec6[2];
	double 	fConst93;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "AxisFace";
	name = N_("AxisFace");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<6; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = min(1.92e+05, max(1.0, (double)fSamplingFreq));
	fConst1 = double(fConst0);
	fConst2 = (2.08289939595918e-05 * fConst1);
	fConst3 = (0.000208289939595918 + fConst2);
	fConst4 = ((0.000208289939595918 - fConst2) / fConst3);
	fConst5 = (2.07927769027201e-24 * fConst1);
	fConst6 = ((fConst1 * ((fConst1 * (0 - (6.94157938525403e-19 + fConst5))) - 8.82453968702234e-15)) - 4.1888033884483e-12);
	fConst7 = (2.26603975311827e-24 * fConst1);
	fConst8 = (4.44756470313924e-12 + (fConst1 * (8.96403837970426e-15 + (fConst1 * (7.0616347428183e-19 + fConst7)))));
	fConst9 = (1.39664091959708e-24 * fConst1);
	fConst10 = (4.17739238100875e-12 + (fConst1 * (8.79571543750362e-15 + (fConst1 * (6.82256449404161e-19 + fConst9)))));
	fConst11 = (1.43093990375045e-24 * fConst1);
	fConst12 = ((fConst1 * ((fConst1 * (0 - (6.91588340112496e-19 + fConst11))) - 8.9285059079804e-15)) - 4.43295001486532e-12);
	fConst13 = (2.07927769027201e-25 * fConst1);
	fConst14 = ((fConst1 * ((fConst1 * ((fConst1 * (0 - (6.94851031088827e-20 + fConst13))) - 9.05592566653081e-16)) - 7.13031661745574e-13)) - 1.39626779614943e-10);
	fConst15 = (2.26603975311827e-25 * fConst1);
	fConst16 = (1.57772164472327e-10 + (fConst1 * (7.43557749637399e-13 + (fConst1 * (9.19942620446487e-16 + (fConst1 * (7.06918820866203e-20 + fConst15)))))));
	fConst17 = (2.05335490485147e-21 * fConst1);
	fConst18 = (9.92796993472258e-15 + fConst17);
	fConst19 = (1.97254241634318e-21 * fConst1);
	fConst20 = (9.86246566332384e-17 + fConst19);
	fConst21 = (2.05335490485147e-22 * fConst1);
	fConst22 = (0 - (9.92728548308763e-16 + fConst21));
	fConst23 = ((fConst1 * (8.82453968702234e-15 + (fConst1 * (fConst5 - 6.94157938525403e-19)))) - 4.1888033884483e-12);
	fConst24 = (4.44756470313924e-12 + (fConst1 * ((fConst1 * (7.0616347428183e-19 - fConst7)) - 8.96403837970426e-15)));
	fConst25 = (4.17739238100875e-12 + (fConst1 * ((fConst1 * (6.82256449404161e-19 - fConst9)) - 8.79571543750362e-15)));
	fConst26 = ((fConst1 * (8.9285059079804e-15 + (fConst1 * (fConst11 - 6.91588340112496e-19)))) - 4.43295001486532e-12);
	fConst27 = (1.39626779614943e-10 + (fConst1 * ((fConst1 * (9.05592566653081e-16 + (fConst1 * (fConst13 - 6.94851031088827e-20)))) - 7.13031661745574e-13)));
	fConst28 = ((fConst1 * (7.43557749637399e-13 + (fConst1 * ((fConst1 * (7.06918820866203e-20 - fConst15)) - 9.19942620446487e-16)))) - 1.57772164472327e-10);
	fConst29 = (1.039638845136e-23 * fConst1);
	fConst30 = ((fConst1 * ((fConst1 * (2.08247381557621e-18 - fConst29)) - 8.82453968702234e-15)) - 4.1888033884483e-12);
	fConst31 = (1.13301987655914e-23 * fConst1);
	fConst32 = (4.44756470313924e-12 + (fConst1 * (8.96403837970426e-15 + (fConst1 * (fConst31 - 2.11849042284549e-18)))));
	fConst33 = (6.98320459798539e-24 * fConst1);
	fConst34 = (4.17739238100875e-12 + (fConst1 * (8.79571543750362e-15 + (fConst1 * (fConst33 - 2.04676934821248e-18)))));
	fConst35 = (7.15469951875225e-24 * fConst1);
	fConst36 = ((fConst1 * ((fConst1 * (2.07476502033749e-18 - fConst35)) - 8.9285059079804e-15)) - 4.43295001486532e-12);
	fConst37 = (1.039638845136e-24 * fConst1);
	fConst38 = (4.1888033884483e-10 + (fConst1 * ((fConst1 * ((fConst1 * (2.08455309326648e-19 - fConst37)) - 9.05592566653081e-16)) - 7.13031661745574e-13)));
	fConst39 = (1.13301987655914e-24 * fConst1);
	fConst40 = ((fConst1 * (7.43557749637399e-13 + (fConst1 * (9.19942620446487e-16 + (fConst1 * (fConst39 - 2.12075646259861e-19)))))) - 4.7331649341698e-10);
	fConst41 = (2.07927769027201e-23 * fConst1);
	fConst42 = (8.37760677689659e-12 + (fConst1 * ((fConst1 * (fConst41 - 1.38831587705081e-18)) - 1.76490793740447e-14)));
	fConst43 = (2.26603975311827e-23 * fConst1);
	fConst44 = ((fConst1 * (1.79280767594085e-14 + (fConst1 * (1.41232694856366e-18 - fConst43)))) - 8.89512940627848e-12);
	fConst45 = (1.39664091959708e-23 * fConst1);
	fConst46 = ((fConst1 * (1.75914308750072e-14 + (fConst1 * (1.36451289880832e-18 - fConst45)))) - 8.3547847620175e-12);
	fConst47 = (1.43093990375045e-23 * fConst1);
	fConst48 = (8.86590002973064e-12 + (fConst1 * ((fConst1 * (fConst47 - 1.38317668022499e-18)) - 1.78570118159608e-14)));
	fConst49 = (2.79253559229886e-10 + (fConst1 * (1.42606332349115e-12 + (fConst1 * ((fConst1 * (fConst5 - 1.38970206217765e-19)) - 1.81118513330616e-15)))));
	fConst50 = ((fConst1 * ((fConst1 * (1.83988524089297e-15 + (fConst1 * (1.41383764173241e-19 - fConst7)))) - 1.4871154992748e-12)) - 3.15544328944654e-10);
	fConst51 = (8.37760677689659e-12 + (fConst1 * (1.76490793740447e-14 + (fConst1 * (0 - (1.38831587705081e-18 + fConst41))))));
	fConst52 = ((fConst1 * ((fConst1 * (1.41232694856366e-18 + fConst43)) - 1.79280767594085e-14)) - 8.89512940627848e-12);
	fConst53 = ((fConst1 * ((fConst1 * (1.36451289880832e-18 + fConst45)) - 1.75914308750072e-14)) - 8.3547847620175e-12);
	fConst54 = (8.86590002973064e-12 + (fConst1 * (1.78570118159608e-14 + (fConst1 * (0 - (1.38317668022499e-18 + fConst47))))));
	fConst55 = ((fConst1 * (1.42606332349115e-12 + (fConst1 * (1.81118513330616e-15 + (fConst1 * (0 - (1.38970206217765e-19 + fConst5))))))) - 2.79253559229886e-10);
	fConst56 = (3.15544328944654e-10 + (fConst1 * ((fConst1 * ((fConst1 * (1.41383764173241e-19 + fConst7)) - 1.83988524089297e-15)) - 1.4871154992748e-12)));
	fConst57 = ((fConst1 * (8.82453968702234e-15 + (fConst1 * (2.08247381557621e-18 + fConst29)))) - 4.1888033884483e-12);
	fConst58 = (4.44756470313924e-12 + (fConst1 * ((fConst1 * (0 - (2.11849042284549e-18 + fConst31))) - 8.96403837970426e-15)));
	fConst59 = (4.17739238100875e-12 + (fConst1 * ((fConst1 * (0 - (2.04676934821248e-18 + fConst33))) - 8.79571543750362e-15)));
	fConst60 = ((fConst1 * (8.9285059079804e-15 + (fConst1 * (2.07476502033749e-18 + fConst35)))) - 4.43295001486532e-12);
	fConst61 = ((fConst1 * ((fConst1 * (9.05592566653081e-16 + (fConst1 * (2.08455309326648e-19 + fConst37)))) - 7.13031661745574e-13)) - 4.1888033884483e-10);
	fConst62 = (4.7331649341698e-10 + (fConst1 * (7.43557749637399e-13 + (fConst1 * ((fConst1 * (0 - (2.12075646259861e-19 + fConst39))) - 9.19942620446487e-16)))));
	fConst63 = tan((37699.11184307752 / fConst0));
	fConst64 = (2 * (1 - (1.0 / faustpower<2>(fConst63))));
	fConst65 = (1.0 / fConst63);
	fConst66 = (1 + ((fConst65 - 1.0000000000000004) / fConst63));
	fConst67 = (1.0 / (1 + ((1.0000000000000004 + fConst65) / fConst63)));
	fConst68 = (1 + fConst65);
	fConst69 = (0 - ((1 - fConst65) / fConst68));
	fConst70 = (1.0 / fConst68);
	fConst71 = (5.91762724902955e-21 * fConst1);
	fConst72 = (0 - (9.86246566332384e-17 + fConst71));
	fConst73 = (6.16006471455442e-21 * fConst1);
	fConst74 = (9.92796993472258e-15 + fConst73);
	fConst75 = (6.16006471455442e-22 * fConst1);
	fConst76 = (9.92728548308763e-16 + fConst75);
	fConst77 = (3.94508483268637e-21 * fConst1);
	fConst78 = (fConst77 - 1.97249313266477e-16);
	fConst79 = (4.10670980970295e-21 * fConst1);
	fConst80 = (1.98559398694452e-14 - fConst79);
	fConst81 = (4.10670980970295e-22 * fConst1);
	fConst82 = (1.98545709661753e-15 - fConst81);
	fConst83 = (1.98559398694452e-14 + fConst79);
	fConst84 = (1.97249313266477e-16 + fConst77);
	fConst85 = (0 - (1.98545709661753e-15 + fConst81));
	fConst86 = (9.86246566332384e-17 - fConst71);
	fConst87 = (fConst73 - 9.92796993472258e-15);
	fConst88 = (fConst75 - 9.92728548308763e-16);
	fConst89 = (fConst19 - 9.86246566332384e-17);
	fConst90 = (9.92796993472258e-15 - fConst17);
	fConst91 = (9.92728548308763e-16 - fConst21);
	fConst92 = faustpower<2>(fConst1);
	fConst93 = (fConst1 / fConst3);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = f * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		fRec2[0] = (fSlow1 + (0.993 * fRec2[1]));
		double fTemp0 = (3.17333590033962e-09 + (fConst1 * (fConst16 + ((fConst14 * fRec1[0]) + (fRec2[0] * (9.52000770101885e-11 + ((fRec2[0] * ((fConst1 * (fConst12 + (fConst10 * fRec1[0]))) - 9.49407359320171e-11)) + (fConst1 * (fConst8 + (fConst6 * fRec1[0]))))))))));
		double fTemp1 = (double)input0[i];
		fVec0[0] = fTemp1;
		fRec5[0] = ((fConst70 * (fVec0[0] + fVec0[1])) + (fConst69 * fRec5[1]));
		fRec4[0] = (fRec5[0] - (fConst67 * ((fConst66 * fRec4[2]) + (fConst64 * fRec4[1]))));
		fRec3[0] = ((fConst67 * (fRec4[0] + (fRec4[2] + (2 * fRec4[1])))) - ((((((fRec3[1] * (1.58666795016981e-08 + (fConst1 * (fConst62 + ((fConst61 * fRec1[0]) + (fRec2[0] * (2.85600231030566e-10 + ((fRec2[0] * ((fConst1 * (fConst60 + (fConst59 * fRec1[0]))) - 2.84822207796051e-10)) + (fConst1 * (fConst58 + (fConst57 * fRec1[0]))))))))))) + (fRec3[2] * (3.17333590033962e-08 + (fConst1 * (fConst56 + ((fConst55 * fRec1[0]) + (fRec2[0] * (1.90400154020377e-10 + ((fRec2[0] * ((fConst1 * (fConst54 + (fConst53 * fRec1[0]))) - 1.89881471864034e-10)) + (fConst1 * (fConst52 + (fConst51 * fRec1[0])))))))))))) + (fRec3[3] * (3.17333590033962e-08 + (fConst1 * (fConst50 + ((fConst49 * fRec1[0]) + (fRec2[0] * (((fRec2[0] * (1.89881471864034e-10 + (fConst1 * (fConst48 + (fConst46 * fRec1[0]))))) + (fConst1 * (fConst44 + (fConst42 * fRec1[0])))) - 1.90400154020377e-10)))))))) + (fRec3[4] * (1.58666795016981e-08 + (fConst1 * (fConst40 + ((fConst38 * fRec1[0]) + (fRec2[0] * (((fRec2[0] * (2.84822207796051e-10 + (fConst1 * (fConst36 + (fConst34 * fRec1[0]))))) + (fConst1 * (fConst32 + (fConst30 * fRec1[0])))) - 2.85600231030566e-10)))))))) + (fRec3[5] * (3.17333590033962e-09 + (fConst1 * (fConst28 + ((fConst27 * fRec1[0]) + (fRec2[0] * (((fRec2[0] * (9.49407359320171e-11 + (fConst1 * (fConst26 + (fConst25 * fRec1[0]))))) + (fConst1 * (fConst24 + (fConst23 * fRec1[0])))) - 9.52000770101885e-11)))))))) / fTemp0));
		fRec0[0] = (symclip((fConst92 * (((((((fRec3[0] * (3.30932331157419e-13 + (fConst1 * (fConst91 + (fRec2[0] * (fConst90 + (fConst89 * fRec2[0]))))))) + (fRec3[1] * (3.30932331157419e-13 + (fConst1 * (fConst88 + (fRec2[0] * (fConst87 + (fConst86 * fRec2[0])))))))) + (fRec3[2] * ((fConst1 * (fConst85 + (fRec2[0] * ((fConst84 * fRec2[0]) - fConst83)))) - 6.61864662314839e-13))) + (fRec3[3] * ((fConst1 * (fConst82 + (fRec2[0] * (fConst80 + (fConst78 * fRec2[0]))))) - 6.61864662314839e-13))) + (fRec3[4] * (3.30932331157419e-13 + (fConst1 * (fConst76 + (fRec2[0] * (fConst74 + (fConst72 * fRec2[0])))))))) + (fRec3[5] * (3.30932331157419e-13 + (fConst1 * (fConst22 + (fRec2[0] * ((fConst20 * fRec2[0]) - fConst18))))))) / fTemp0))) - (fConst4 * fRec0[1]));
		fRec6[0] = (fSlow2 + (0.993 * fRec6[1]));
		output0[i] = (FAUSTFLOAT)(fConst93 * ((fRec0[1] * (0 - (2.08289939595918e-05 * fRec6[0]))) + (2.08289939595918e-05 * (fRec6[0] * fRec0[0]))));
		// post processing
		fRec6[1] = fRec6[0];
		fRec0[1] = fRec0[0];
		for (int i=5; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec5[1] = fRec5[0];
		fVec0[1] = fVec0[0];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case ATTACK: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case SMOOTH: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   ATTACK, 
   SMOOTH, 
   VOLUME, 
} PortIndex;
*/

} // end namespace AxisFace
