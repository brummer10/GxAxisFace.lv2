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
	0.0,0.529274388401,101.97,100, {
	0.0,5.07268415298e-09,0.00707071213823,0.0141414192022,0.021212126264,0.028282833323,
	0.0353535403784,0.042424247429,0.0494949544733,0.0565656615094,0.0636363685347,
	0.0707070755457,0.0777777825382,0.0848484895061,0.0919191964419,0.0989899033356,
	0.106060610174,0.11313131694,0.12020202361,0.127272730155,0.134343436537,
	0.141414142702,0.148484848585,0.155555554096,0.162626259121,0.169696963505,
	0.17676766705,0.183838369494,0.190909070491,0.19797976959,0.205050466198,
	0.212121159536,0.219191848582,0.226262531995,0.233333208015,0.240403874331,
	0.24747452791,0.254545164773,0.261615779695,0.26868636582,0.275756914149,
	0.282827412871,0.289897846487,0.296968194653,0.304038430674,0.311108519516,
	0.318178415207,0.325248057424,0.332317367023,0.339386240175,0.346454540689,
	0.35352208995,0.360588653763,0.367653925127,0.374717501723,0.381778856475,
	0.388837299052,0.395891925408,0.402941551381,0.409984624488,0.417019104833,
	0.424042299754,0.431050624286,0.438039233719,0.445001421427,0.451927567528,
	0.45880321454,0.465605473867,0.47229644717,0.478812196756,0.48504826727,
	0.490852647387,0.496051950536,0.500521958812,0.504248667252,0.507316495632,
	0.509849870267,0.511967636146,0.51376589247,0.515317261632,0.516675427326,
	0.517880056582,0.518960739677,0.51993985446,0.52083458091,0.521658307997,
	0.522421620886,0.523133000893,0.523799328124,0.524426247518,0.525018438942,
	0.525579819271,0.526113695471,0.526622881976,0.527109791692,0.52757650732,
	0.528024837797,0.528456363369,0.528872471908,0.529274388401
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
	double 	fConst12;
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
	double 	fRec3[6];
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
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
	double 	fRec0[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec4[2];
	double 	fConst84;

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
	for (int i=0; i<6; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.08289939595918e-05 * fConst0);
	fConst2 = (0.000208289939595918 + fConst1);
	fConst3 = ((0.000208289939595918 - fConst1) / fConst2);
	fConst4 = (1.67496176467643e-24 * fConst0);
	fConst5 = ((fConst0 * ((fConst0 * (0 - (7.23162209081385e-19 + fConst4))) - 9.28534565039927e-15)) - 4.40924415876607e-12);
	fConst6 = (1.8681253327449e-24 * fConst0);
	fConst7 = (4.68006214997263e-12 + (fConst0 * (9.42887947833283e-15 + (fConst0 * (7.35503343181516e-19 + fConst6)))));
	fConst8 = (1.42244293272172e-24 * fConst0);
	fConst9 = (4.40768077966523e-12 + (fConst0 * (9.28027286391653e-15 + (fConst0 * (7.19180674871062e-19 + fConst8)))));
	fConst10 = (1.45827706933699e-24 * fConst0);
	fConst11 = ((fConst0 * ((fConst0 * (0 - (7.29035413281055e-19 + fConst10))) - 9.42055565156942e-15)) - 4.67740943194575e-12);
	fConst12 = (1.67496176467643e-25 * fConst0);
	fConst13 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (7.2372052966961e-20 + fConst12))) - 9.52639972009307e-16)) - 7.50435937556583e-13)) - 1.46974805292202e-10);
	fConst14 = (1.8681253327449e-25 * fConst0);
	fConst15 = (1.66023081117495e-10 + (fConst0 * (7.82302197608357e-13 + (fConst0 * (9.67404725939333e-16 + (fConst0 * (7.36126051625764e-20 + fConst14)))))));
	fConst16 = (2.19108247626258e-21 * fConst0);
	fConst17 = (1.06188946444071e-14 + fConst16);
	fConst18 = (2.10270394333013e-21 * fConst0);
	fConst19 = (1.0548727377151e-16 + fConst18);
	fConst20 = (2.19108247626258e-22 * fConst0);
	fConst21 = (0 - (1.06181642835817e-15 + fConst20));
	fConst22 = ((fConst0 * (9.28534565039927e-15 + (fConst0 * (fConst4 - 7.23162209081385e-19)))) - 4.40924415876607e-12);
	fConst23 = (4.68006214997263e-12 + (fConst0 * ((fConst0 * (7.35503343181516e-19 - fConst6)) - 9.42887947833283e-15)));
	fConst24 = (4.40768077966523e-12 + (fConst0 * ((fConst0 * (7.19180674871062e-19 - fConst8)) - 9.28027286391653e-15)));
	fConst25 = ((fConst0 * (9.42055565156942e-15 + (fConst0 * (fConst10 - 7.29035413281055e-19)))) - 4.67740943194575e-12);
	fConst26 = (1.46974805292202e-10 + (fConst0 * ((fConst0 * (9.52639972009307e-16 + (fConst0 * (fConst12 - 7.2372052966961e-20)))) - 7.50435937556583e-13)));
	fConst27 = ((fConst0 * (7.82302197608357e-13 + (fConst0 * ((fConst0 * (7.36126051625764e-20 - fConst14)) - 9.67404725939333e-16)))) - 1.66023081117495e-10);
	fConst28 = (8.37480882338214e-24 * fConst0);
	fConst29 = ((fConst0 * ((fConst0 * (2.16948662724415e-18 - fConst28)) - 9.28534565039927e-15)) - 4.40924415876607e-12);
	fConst30 = (9.34062666372448e-24 * fConst0);
	fConst31 = (4.68006214997263e-12 + (fConst0 * (9.42887947833283e-15 + (fConst0 * (fConst30 - 2.20651002954455e-18)))));
	fConst32 = (7.11221466360861e-24 * fConst0);
	fConst33 = (4.40768077966523e-12 + (fConst0 * (9.28027286391653e-15 + (fConst0 * (fConst32 - 2.15754202461319e-18)))));
	fConst34 = (7.29138534668497e-24 * fConst0);
	fConst35 = ((fConst0 * ((fConst0 * (2.18710623984316e-18 - fConst34)) - 9.42055565156942e-15)) - 4.67740943194575e-12);
	fConst36 = (8.37480882338214e-25 * fConst0);
	fConst37 = (4.40924415876607e-10 + (fConst0 * ((fConst0 * ((fConst0 * (2.17116158900883e-19 - fConst36)) - 9.52639972009307e-16)) - 7.50435937556583e-13)));
	fConst38 = (9.34062666372448e-25 * fConst0);
	fConst39 = ((fConst0 * (7.82302197608357e-13 + (fConst0 * (9.67404725939333e-16 + (fConst0 * (fConst38 - 2.20837815487729e-19)))))) - 4.98069243352486e-10);
	fConst40 = (1.67496176467643e-23 * fConst0);
	fConst41 = (8.81848831753214e-12 + (fConst0 * ((fConst0 * (fConst40 - 1.44632441816277e-18)) - 1.85706913007985e-14)));
	fConst42 = (1.8681253327449e-23 * fConst0);
	fConst43 = ((fConst0 * (1.88577589566657e-14 + (fConst0 * (1.47100668636303e-18 - fConst42)))) - 9.36012429994526e-12);
	fConst44 = (1.42244293272172e-23 * fConst0);
	fConst45 = ((fConst0 * (1.85605457278331e-14 + (fConst0 * (1.43836134974212e-18 - fConst44)))) - 8.81536155933045e-12);
	fConst46 = (1.45827706933699e-23 * fConst0);
	fConst47 = (9.35481886389151e-12 + (fConst0 * ((fConst0 * (fConst46 - 1.45807082656211e-18)) - 1.88411113031388e-14)));
	fConst48 = (2.93949610584405e-10 + (fConst0 * (1.50087187511317e-12 + (fConst0 * ((fConst0 * (fConst4 - 1.44744105933922e-19)) - 1.90527994401861e-15)))));
	fConst49 = ((fConst0 * ((fConst0 * (1.93480945187867e-15 + (fConst0 * (1.47225210325153e-19 - fConst6)))) - 1.56460439521671e-12)) - 3.32046162234991e-10);
	fConst50 = (8.81848831753214e-12 + (fConst0 * (1.85706913007985e-14 + (fConst0 * (0 - (1.44632441816277e-18 + fConst40))))));
	fConst51 = ((fConst0 * ((fConst0 * (1.47100668636303e-18 + fConst42)) - 1.88577589566657e-14)) - 9.36012429994526e-12);
	fConst52 = ((fConst0 * ((fConst0 * (1.43836134974212e-18 + fConst44)) - 1.85605457278331e-14)) - 8.81536155933045e-12);
	fConst53 = (9.35481886389151e-12 + (fConst0 * (1.88411113031388e-14 + (fConst0 * (0 - (1.45807082656211e-18 + fConst46))))));
	fConst54 = ((fConst0 * (1.50087187511317e-12 + (fConst0 * (1.90527994401861e-15 + (fConst0 * (0 - (1.44744105933922e-19 + fConst4))))))) - 2.93949610584405e-10);
	fConst55 = (3.32046162234991e-10 + (fConst0 * ((fConst0 * ((fConst0 * (1.47225210325153e-19 + fConst6)) - 1.93480945187867e-15)) - 1.56460439521671e-12)));
	fConst56 = ((fConst0 * (9.28534565039927e-15 + (fConst0 * (2.16948662724415e-18 + fConst28)))) - 4.40924415876607e-12);
	fConst57 = (4.68006214997263e-12 + (fConst0 * ((fConst0 * (0 - (2.20651002954455e-18 + fConst30))) - 9.42887947833283e-15)));
	fConst58 = (4.40768077966523e-12 + (fConst0 * ((fConst0 * (0 - (2.15754202461319e-18 + fConst32))) - 9.28027286391653e-15)));
	fConst59 = ((fConst0 * (9.42055565156942e-15 + (fConst0 * (2.18710623984316e-18 + fConst34)))) - 4.67740943194575e-12);
	fConst60 = ((fConst0 * ((fConst0 * (9.52639972009307e-16 + (fConst0 * (2.17116158900883e-19 + fConst36)))) - 7.50435937556583e-13)) - 4.40924415876607e-10);
	fConst61 = (4.98069243352486e-10 + (fConst0 * (7.82302197608357e-13 + (fConst0 * ((fConst0 * (0 - (2.20837815487729e-19 + fConst38))) - 9.67404725939333e-16)))));
	fConst62 = (6.30811182999038e-21 * fConst0);
	fConst63 = (0 - (1.0548727377151e-16 + fConst62));
	fConst64 = (6.57324742878773e-21 * fConst0);
	fConst65 = (1.06188946444071e-14 + fConst64);
	fConst66 = (6.57324742878772e-22 * fConst0);
	fConst67 = (1.06181642835817e-15 + fConst66);
	fConst68 = (4.20540788666026e-21 * fConst0);
	fConst69 = (fConst68 - 2.1097454754302e-16);
	fConst70 = (4.38216495252515e-21 * fConst0);
	fConst71 = (2.12377892888142e-14 - fConst70);
	fConst72 = (4.38216495252515e-22 * fConst0);
	fConst73 = (2.12363285671633e-15 - fConst72);
	fConst74 = (2.12377892888142e-14 + fConst70);
	fConst75 = (2.1097454754302e-16 + fConst68);
	fConst76 = (0 - (2.12363285671633e-15 + fConst72));
	fConst77 = (1.0548727377151e-16 - fConst62);
	fConst78 = (fConst64 - 1.06188946444071e-14);
	fConst79 = (fConst66 - 1.06181642835817e-15);
	fConst80 = (fConst18 - 1.0548727377151e-16);
	fConst81 = (1.06188946444071e-14 - fConst16);
	fConst82 = (1.06181642835817e-15 - fConst20);
	fConst83 = faustpower<2>(fConst0);
	fConst84 = (fConst0 / fConst2);
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
		double fTemp0 = (3.34033648391369e-09 + (fConst0 * (fConst15 + ((fConst13 * fRec1[0]) + (fRec2[0] * (1.00210094517411e-10 + ((fRec2[0] * ((fConst0 * (fConst11 + (fConst9 * fRec1[0]))) - 1.0017456317421e-10)) + (fConst0 * (fConst7 + (fConst5 * fRec1[0]))))))))));
		fRec3[0] = ((double)input0[i] - ((((((fRec3[1] * (1.67016824195685e-08 + (fConst0 * (fConst61 + ((fConst60 * fRec1[0]) + (fRec2[0] * (3.00630283552232e-10 + ((fRec2[0] * ((fConst0 * (fConst59 + (fConst58 * fRec1[0]))) - 3.00523689522629e-10)) + (fConst0 * (fConst57 + (fConst56 * fRec1[0]))))))))))) + (fRec3[2] * (3.34033648391369e-08 + (fConst0 * (fConst55 + ((fConst54 * fRec1[0]) + (fRec2[0] * (2.00420189034821e-10 + ((fRec2[0] * ((fConst0 * (fConst53 + (fConst52 * fRec1[0]))) - 2.00349126348419e-10)) + (fConst0 * (fConst51 + (fConst50 * fRec1[0])))))))))))) + (fRec3[3] * (3.34033648391369e-08 + (fConst0 * (fConst49 + ((fConst48 * fRec1[0]) + (fRec2[0] * (((fRec2[0] * (2.00349126348419e-10 + (fConst0 * (fConst47 + (fConst45 * fRec1[0]))))) + (fConst0 * (fConst43 + (fConst41 * fRec1[0])))) - 2.00420189034821e-10)))))))) + (fRec3[4] * (1.67016824195685e-08 + (fConst0 * (fConst39 + ((fConst37 * fRec1[0]) + (fRec2[0] * (((fRec2[0] * (3.00523689522629e-10 + (fConst0 * (fConst35 + (fConst33 * fRec1[0]))))) + (fConst0 * (fConst31 + (fConst29 * fRec1[0])))) - 3.00630283552232e-10)))))))) + (fRec3[5] * (3.34033648391369e-09 + (fConst0 * (fConst27 + ((fConst26 * fRec1[0]) + (fRec2[0] * (((fRec2[0] * (1.0017456317421e-10 + (fConst0 * (fConst25 + (fConst24 * fRec1[0]))))) + (fConst0 * (fConst23 + (fConst22 * fRec1[0])))) - 1.00210094517411e-10)))))))) / fTemp0));
		fRec0[0] = (symclip((fConst83 * (((((((fRec3[0] * (3.5396315481357e-13 + (fConst0 * (fConst82 + (fRec2[0] * (fConst81 + (fConst80 * fRec2[0]))))))) + (fRec3[1] * (3.5396315481357e-13 + (fConst0 * (fConst79 + (fRec2[0] * (fConst78 + (fConst77 * fRec2[0])))))))) + (fRec3[2] * ((fConst0 * (fConst76 + (fRec2[0] * ((fConst75 * fRec2[0]) - fConst74)))) - 7.07926309627139e-13))) + (fRec3[3] * ((fConst0 * (fConst73 + (fRec2[0] * (fConst71 + (fConst69 * fRec2[0]))))) - 7.07926309627139e-13))) + (fRec3[4] * (3.5396315481357e-13 + (fConst0 * (fConst67 + (fRec2[0] * (fConst65 + (fConst63 * fRec2[0])))))))) + (fRec3[5] * (3.5396315481357e-13 + (fConst0 * (fConst21 + (fRec2[0] * ((fConst19 * fRec2[0]) - fConst17))))))) / fTemp0))) - (fConst3 * fRec0[1]));
		fRec4[0] = (fSlow2 + (0.993 * fRec4[1]));
		output0[i] = (FAUSTFLOAT)(fConst84 * ((fRec0[1] * (0 - (2.08289939595918e-05 * fRec4[0]))) + (2.08289939595918e-05 * (fRec4[0] * fRec0[0]))));
		// post processing
		fRec4[1] = fRec4[0];
		fRec0[1] = fRec0[0];
		for (int i=5; i>0; i--) fRec3[i] = fRec3[i-1];
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
