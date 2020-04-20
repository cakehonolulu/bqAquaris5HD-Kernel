#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif


#define Q_MAX_POS_50	2187
#define Q_MAX_POS_25	2193
#define Q_MAX_POS_0		2197
#define Q_MAX_NEG_10	2197

#define Q_MAX_POS_50_H_CURRENT	2172
#define Q_MAX_POS_25_H_CURRENT	2174
#define Q_MAX_POS_0_H_CURRENT	  2159
#define Q_MAX_NEG_10_H_CURRENT	2079

#define R_FG_VALUE 				20 // mOhm, base is 20
#define CURRENT_DETECT_R_FG	10  //1mA

#define OSR_SELECT_7			0

#define CAR_TUNE_VALUE			93 //1.00

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0  , 4199},
	{1  , 4176},
	{3  , 4159},
	{4  , 4145},
	{6  , 4131},
	{7  , 4118},
	{9  , 4106},
	{10 , 4098},
	{12 , 4092},
	{13 , 4084},
	{15 , 4066},
	{16 , 4037},
	{18 , 4010},
	{19 , 3991},
	{21 , 3976},
	{22 , 3964},
	{24 , 3954},
	{25 , 3946},
	{27 , 3939},
	{28 , 3933},
	{30 , 3925},
	{31 , 3918},
	{33 , 3911},
	{34 , 3902},
	{36 , 3894},
	{37 , 3885},
	{39 , 3877},
	{40 , 3870},
	{42 , 3862},
	{43 , 3856},
	{45 , 3849},
	{46 , 3843},
	{48 , 3837},
	{49 , 3832},
	{51 , 3827},
	{52 , 3822},
	{54 , 3817},
	{55 , 3812},
	{57 , 3808},
	{58 , 3804},
	{60 , 3800},
	{61 , 3796},
	{63 , 3793},
	{64 , 3790},
	{66 , 3787},
	{67 , 3785},
	{69 , 3783},
	{70 , 3781},
	{72 , 3779},
	{73 , 3778},
	{75 , 3776},
	{76 , 3774},
	{78 , 3771},
	{79 , 3769},
	{81 , 3766},
	{82 , 3763},
	{84 , 3760},
	{85 , 3756},
	{87 , 3752},
	{88 , 3748},
	{90 , 3742},
	{91 , 3736},
	{93 , 3730},
	{94 , 3726},
	{96 , 3721},
	{97 , 3717},
	{99 , 3713},
	{100, 3709},
	{100, 3703},
	{100, 3692},
	{100, 3670},
	{100, 3632},
	{100, 3571},
	{100, 3473},
	{100, 3400}
};      
        
// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0    , 4190},
	{1    , 4169},
	{3    , 4152},
	{4    , 4138},
	{6    , 4124},
	{7    , 4111},
	{9    , 4100},
	{10  , 4094},
	{12  , 4087},
	{13  , 4078},
	{15  , 4056},
	{16  , 4029},
	{18  , 4008},
	{19  , 3993},
	{21  , 3982},
	{22  , 3974},
	{24  , 3967},
	{25  , 3962},
	{27  , 3956},
	{28  , 3950},
	{30  , 3943},
	{31  , 3934},
	{33  , 3924},
	{34  , 3914},
	{36  , 3904},
	{37  , 3893},
	{39  , 3884},
	{40  , 3874},
	{42  , 3865},
	{43  , 3857},
	{45  , 3850},
	{46  , 3843},
	{48  , 3836},
	{49  , 3830},
	{51  , 3825},
	{52  , 3820},
	{54  , 3815},
	{55  , 3811},
	{57  , 3807},
	{58  , 3804},
	{60  , 3800},
	{61  , 3797},
	{63  , 3794},
	{64  , 3792},
	{66  , 3789},
	{67  , 3788},
	{69  , 3786},
	{70  , 3785},
	{72  , 3784},
	{73  , 3783},
	{75  , 3781},
	{76  , 3780},
	{78  , 3778},
	{79  , 3776},
	{81  , 3774},
	{82  , 3771},
	{84  , 3768},
	{85  , 3765},
	{87  , 3760},
	{88  , 3755},
	{90  , 3748},
	{91  , 3742},
	{93  , 3735},
	{94  , 3728},
	{96  , 3718},
	{97  , 3710},
	{99  , 3706},
	{100, 3703},
	{100, 3701},
	{100, 3697},
	{100, 3684},
	{100, 3635},
	{100, 3555},
	{100, 3429},
	{100, 3400}
}; 

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0    , 4183},
	{1    , 4162},
	{3    , 4144},
	{4    , 4129},
	{5    , 4116},
	{7    , 4102},
	{8    , 4090},
	{10  , 4082},
	{11  , 4074},
	{12  , 4064},
	{14  , 4045},
	{15  , 4025},
	{16  , 4009},
	{18  , 3998},
	{19  , 3990},
	{21  , 3982},
	{22  , 3975},
	{23  , 3969},
	{25  , 3961},
	{26  , 3953},
	{27  , 3944},
	{29  , 3936},
	{30  , 3929},
	{32  , 3921},
	{33  , 3913},
	{34  , 3905},
	{36  , 3896},
	{37  , 3887},
	{38  , 3877},
	{40  , 3867},
	{41  , 3856},
	{43  , 3847},
	{44  , 3838},
	{45  , 3831},
	{47  , 3824},
	{48  , 3818},
	{49  , 3813},
	{51  , 3809},
	{52  , 3805},
	{54  , 3801},
	{55  , 3797},
	{56  , 3794},
	{58  , 3791},
	{59  , 3789},
	{60  , 3786},
	{62  , 3784},
	{63  , 3782},
	{65  , 3780},
	{66  , 3779},
	{67  , 3778},
	{69  , 3777},
	{70  , 3775},
	{71  , 3772},
	{73  , 3769},
	{74  , 3765},
	{75  , 3760},
	{77  , 3755},
	{78  , 3750},
	{80  , 3746},
	{81  , 3742},
	{82  , 3735},
	{84  , 3727},
	{85  , 3720},
	{86  , 3712},
	{88  , 3702},
	{89  , 3694},
	{91  , 3692},
	{92  , 3691},
	{93  , 3689},
	{95  , 3684},
	{96  , 3662},
	{97  , 3604},
	{99  , 3518},
	{100, 3382},
	{100, 3382}
}; 

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0  , 4178},
	{1  , 4159},
	{3  , 4142},
	{4  , 4127},
	{6  , 4114},
	{7  , 4100},
	{8  , 4088},
	{10 , 4075},
	{11 , 4064},
	{12 , 4054},
	{14 , 4041},
	{15 , 4029},
	{17 , 4016},
	{18 , 4006},
	{19 , 3997},
	{21 , 3987},
	{22 , 3978},
	{23 , 3968},
	{25 , 3959},
	{26 , 3951},
	{28 , 3942},
	{29 , 3934},
	{30 , 3926},
	{32 , 3918},
	{33 , 3910},
	{34 , 3902},
	{36 , 3894},
	{37 , 3886},
	{39 , 3877},
	{40 , 3867},
	{41 , 3858},
	{43 , 3848},
	{44 , 3838},
	{45 , 3829},
	{47 , 3822},
	{48 , 3816},
	{50 , 3811},
	{51 , 3806},
	{52 , 3802},
	{54 , 3798},
	{55 , 3795},
	{56 , 3791},
	{58 , 3788},
	{59 , 3785},
	{61 , 3782},
	{62 , 3780},
	{63 , 3777},
	{65 , 3775},
	{66 , 3773},
	{67 , 3771},
	{69 , 3770},
	{70 , 3766},
	{72 , 3758},
	{73 , 3751},
	{74 , 3747},
	{76 , 3743},
	{77 , 3738},
	{78 , 3733},
	{80 , 3728},
	{81 , 3724},
	{83 , 3719},
	{84 , 3710},
	{85 , 3703},
	{87 , 3695},
	{88 , 3684},
	{89 , 3679},
	{91 , 3677},
	{92 , 3676},
	{94 , 3674},
	{95 , 3668},
	{96 , 3637},
	{98 , 3577},
	{99 , 3491},
	{100, 3354},
	{100, 3031}
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};


/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;


// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{603 , 4199},
	{603 , 4176},
	{608 , 4159},
	{618 , 4145},
	{620 , 4131},
	{623 , 4118},
	{625 , 4106},
	{630 , 4098},
	{635 , 4092},
	{640 , 4084},
	{640 , 4066},
	{635 , 4037},
	{630 , 4010},
	{628 , 3991},
	{623 , 3976},
	{618 , 3964},
	{615 , 3954},
	{613 , 3946},
	{608 , 3939},
	{610 , 3933},
	{603 , 3925},
	{603 , 3918},
	{600 , 3911},
	{595 , 3902},
	{593 , 3894},
	{590 , 3885},
	{588 , 3877},
	{588 , 3870},
	{588 , 3862},
	{588 , 3856},
	{588 , 3849},
	{588 , 3843},
	{588 , 3837},
	{590 , 3832},
	{590 , 3827},
	{593 , 3822},
	{593 , 3817},
	{588 , 3812},
	{593 , 3808},
	{593 , 3804},
	{593 , 3800},
	{590 , 3796},
	{590 , 3793},
	{593 , 3790},
	{593 , 3787},
	{593 , 3785},
	{593 , 3783},
	{593 , 3781},
	{593 , 3779},
	{595 , 3778},
	{595 , 3776},
	{598 , 3774},
	{595 , 3771},
	{598 , 3769},
	{598 , 3766},
	{598 , 3763},
	{598 , 3760},
	{598 , 3756},
	{600 , 3752},
	{600 , 3748},
	{598 , 3742},
	{598 , 3736},
	{595 , 3730},
	{600 , 3726},
	{603 , 3721},
	{610 , 3717},
	{623 , 3713},
	{645 , 3709},
	{675 , 3703},
	{723 , 3692},
	{780 , 3670},
	{900 , 3632},
	{1190, 3571},
	{1935, 3473},
	{1753, 3400}
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{338, 4190},
	{338, 4169},
	{343, 4152},
	{348, 4138},
	{353, 4124},
	{358, 4111},
	{360, 4100},
	{370, 4094},
	{373, 4087},
	{383, 4078},
	{383, 4056},
	{383, 4029},
	{385, 4008},
	{385, 3993},
	{388, 3982},
	{390, 3974},
	{390, 3967},
	{393, 3962},
	{393, 3956},
	{393, 3950},
	{390, 3943},
	{385, 3934},
	{380, 3924},
	{375, 3914},
	{370, 3904},
	{360, 3893},
	{355, 3884},
	{350, 3874},
	{345, 3865},
	{340, 3857},
	{338, 3850},
	{338, 3843},
	{333, 3836},
	{333, 3830},
	{333, 3825},
	{333, 3820},
	{333, 3815},
	{333, 3811},
	{333, 3807},
	{335, 3804},
	{335, 3800},
	{338, 3797},
	{338, 3794},
	{340, 3792},
	{340, 3789},
	{343, 3788},
	{343, 3786},
	{343, 3785},
	{343, 3784},
	{345, 3783},
	{345, 3781},
	{348, 3780},
	{345, 3778},
	{345, 3776},
	{345, 3774},
	{345, 3771},
	{345, 3768},
	{348, 3765},
	{345, 3760},
	{345, 3755},
	{343, 3748},
	{340, 3742},
	{340, 3735},
	{343, 3728},
	{338, 3718},
	{335, 3710},
	{338, 3706},
	{343, 3703},
	{355, 3701},
	{375, 3697},
	{400, 3684},
	{405, 3635},
	{458, 3555},
	{668, 3429},
	{595, 3400}
}; 

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{175, 4183},
	{175, 4162},
	{175, 4144},
	{175, 4129},
	{178, 4116},
	{178, 4102},
	{180, 4090},
	{183, 4082},
	{185, 4074},
	{188, 4064},
	{185, 4045},
	{185, 4025},
	{188, 4009},
	{190, 3998},
	{193, 3990},
	{193, 3982},
	{195, 3975},
	{200, 3969},
	{200, 3961},
	{203, 3953},
	{205, 3944},
	{210, 3936},
	{215, 3929},
	{218, 3921},
	{220, 3913},
	{223, 3905},
	{220, 3896},
	{220, 3887},
	{213, 3877},
	{208, 3867},
	{198, 3856},
	{193, 3847},
	{185, 3838},
	{183, 3831},
	{178, 3824},
	{175, 3818},
	{175, 3813},
	{175, 3809},
	{178, 3805},
	{175, 3801},
	{175, 3797},
	{175, 3794},
	{175, 3791},
	{178, 3789},
	{178, 3786},
	{180, 3784},
	{180, 3782},
	{180, 3780},
	{180, 3779},
	{180, 3778},
	{183, 3777},
	{180, 3775},
	{180, 3772},
	{178, 3769},
	{175, 3765},
	{173, 3760},
	{173, 3755},
	{173, 3750},
	{173, 3746},
	{175, 3742},
	{175, 3735},
	{173, 3727},
	{175, 3720},
	{175, 3712},
	{175, 3702},
	{170, 3694},
	{173, 3692},
	{178, 3691},
	{183, 3689},
	{188, 3684},
	{190, 3662},
	{193, 3604},
	{205, 3518},
	{245, 3382},
	{245, 3382}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{143 , 4178},
	{143 , 4159},
	{143 , 4142},
	{140 , 4127},
	{143 , 4114},
	{140 , 4100},
	{143 , 4088},
	{143 , 4075},
	{145 , 4064},
	{148 , 4054},
	{145 , 4041},
	{148 , 4029},
	{145 , 4016},
	{148 , 4006},
	{150 , 3997},
	{150 , 3987},
	{153 , 3978},
	{153 , 3968},
	{153 , 3959},
	{155 , 3951},
	{158 , 3942},
	{160 , 3934},
	{163 , 3926},
	{165 , 3918},
	{165 , 3910},
	{168 , 3902},
	{170 , 3894},
	{173 , 3886},
	{173 , 3877},
	{168 , 3867},
	{165 , 3858},
	{160 , 3848},
	{153 , 3838},
	{148 , 3829},
	{145 , 3822},
	{145 , 3816},
	{145 , 3811},
	{145 , 3806},
	{145 , 3802},
	{145 , 3798},
	{148 , 3795},
	{148 , 3791},
	{148 , 3788},
	{150 , 3785},
	{150 , 3782},
	{153 , 3780},
	{150 , 3777},
	{153 , 3775},
	{155 , 3773},
	{155 , 3771},
	{158 , 3770},
	{153 , 3766},
	{143 , 3758},
	{143 , 3751},
	{145 , 3747},
	{148 , 3743},
	{145 , 3738},
	{145 , 3733},
	{143 , 3728},
	{145 , 3724},
	{148 , 3719},
	{145 , 3710},
	{145 , 3703},
	{145 , 3695},
	{143 , 3684},
	{143 , 3679},
	{145 , 3677},
	{150 , 3676},
	{155 , 3674},
	{160 , 3668},
	{155 , 3637},
	{160 , 3577},
	{173 , 3491},
	{198 , 3354},
	{1385, 3031}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};    

int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY