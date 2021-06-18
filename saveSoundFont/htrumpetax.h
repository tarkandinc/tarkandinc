#define SAMPLE_COUNT 896
#define RANGE 127

#define FILE_NAME "htrumpetax.tsf"

uint32_t soundSample[SAMPLE_COUNT] = {
0x00000000,0x002c002e,0x0029002c,0x00290029,0x00280029,0x00290029,0x00290028,0x0029002a,
0x00290029,0x00260028,0x00260028,0x00280028,0x00250027,0x00260020,0x0020001f,0x001f0020,
0x00220025,0x002f002e,0x002f002c,0x002b002e,0x001d0027,0x00040010,0x0026000f,0x0045003b,
0x00310041,0x002e0028,0x00190021,0x0023001c,0x00230025,0x002a002a,0x0031002e,0x00200031,
0x00290026,0x0000000f,0x00150006,0x00390025,0x0466019f,0x02e50450,0xfdbd00a5,0xf8c3f994,
0xf62bf574,0x01bafb4a,0x15500c2b,0x10201b37,0xee64f978,0xf1d9ef0c,0xf2fdf431,0xfb60f4b8,
0x0eb80562,0x37da1dba,0xf0be1018,0xe977e50b,0xec47f06c,0xf3a9f1dd,0x02d2fdef,0x13910f46,
0x238245b1,0xebcee9de,0xed56df64,0xf2e8e821,0xfa07f5fb,0x085a02eb,0x29800f22,0xf2e3513c,
0xe25de95a,0xee7de391,0xfc49e872,0x0258f435,0x0ef603aa,0x4e11112b,0xe0862179,0xde02ec84,
0xe8a1efe8,0xf870f5e9,0x02d8f7ff,0x0f2f0657,0x550f23e4,0xe6a9f7fc,0xe455e5f4,0xe7acf03a,
0xf365f9dd,0x029a011a,0x0c0e0f24,0x3d4e4487,0xed18dfcb,0xeaaddd2e,0xeddee9e6,0xf5aafa9d,
0x03fc05b4,0x148c106d,0x12136828,0xe852dad2,0xed75d4c7,0xf714e0b6,0xfe50f77a,0x0d050816,
0x349b0e47,0xe81162dd,0xd78ee4df,0xe8b5d830,0xfffae205,0x0a05f7bc,0x12fb070b,0x56800c33,
0xd2424403,0xc9b2e645,0xe45ae250,0x0367ee84,0x0d60fb14,0x136b062a,0x6c690ff7,0xcd131d1b,
0xc84ae0b6,0xe27aec11,0xfdd2faa6,0x0c1bfedf,0x12d806da,0x7237168f,0xcbb8fe23,0xcbb6ddac,
0xe451f2cc,0xf97b001c,0x08ca00b4,0x10b105b8,0x72371883,0xcb86f0b8,0xcfc6dcf0,0xe5f7f7c5,
0xf6d20174,0x07e30081,0x110d03e0,0x72371341,0xc7ecf6b4,0xd34adedf,0xe7dbfca9,0xf7fa015f,
0x076afdb3,0x149cfe1f,0x6c8302f7,0xbf751ccf,0xd4b2e373,0xead9011d,0xfcc3fa3f,0x07a5f6c5,
0x145ef9cd,0x54c4fe1f,0xc09842e5,0xd6c3e3d3,0xf08a0127,0x0186f0fc,0x06e5f179,0x0f0ef8d0,
0x357d016d,0xcf1065aa,0xda3be02f,0xf739fba6,0x05e1e699,0x0334ef16,0x0beaf78b,0x21210806,
0xdf367103,0xdeb1dd80,0xf965f65b,0x05d3e39e,0x0037ec1c,0x08aefa9e,0x19c10c2f,0xe8847098,
0xe1c5dc5f,0xf827f2ff,0x02fae395,0xfeb5ecde,0x07a6fd18,0x18d40e10,0xe8f07237,0xe2ecd998,
0xf7a5eff4,0x021fe491,0xff81eb35,0x0b5afe60,0x1c110dd3,0xe2ff717c,0xe1a2d911,0xf727eef1,
0x0197e6fb,0x0172ec17,0x0a5fff4a,0x1ed10c0c,0xde6770da,0xe0f6d8db,0xf8ddedee,0x0141e740,
0x0365ecc7,0x0912ffa8,0x18440c6f,0xe45e7237,0xdfe3d45c,0xfe16eaad,0x0170e3fb,0x0145edb7,
0x05820421,0x0a2710d6,0xf8e47237,0xe319cd53,0x009ae33f,0xfeb2e04a,0x008ff400,0xff110949,
0xfdfb132d,0x1be06c49,0xe5dac686,0x0167dd0b,0xf89ae09b,0xfc8ef9fe,0xfd3e0b46,0xfb201384,
0x466f504f,0xe433c772,0xfa9edb6c,0xefd6e47c,0xf9ae02c9,0xfc480cc0,0x00060e98,0x67853091,
0xdf65d439,0xef43dbfd,0xe8d0ec71,0xf6d20872,0xfe770a45,0x07ec0941,0x72371a30,0xd702e810,
0xe6bedf2a,0xe490f159,0xf8940838,0x029e0843,0x0c3104c8,0x72370bfa,0xce53f934,0xe09ee47e,
0xe3d7f3ee,0xf9ed0786,0x05fe02e0,0x114f033e,0x7237048d,0xcab20108,0xdd74e683,0xe3f0f697,
0xfb98058f,0x08d4028f,0x10d800dd,0x70a90319,0xc8c70399,0xdc68e5eb,0xe622f91b,0xfc940556,
0x082fff75,0x11870135,0x723704a6,0xc7c300ec,0xdc56e483,0xe70cfb27,0xfafc0553,0x0937feae,
0x12650115,0x6fa204c2,0xc52d0405,0xdbfae404,0xe8c5fe07,0xfb8402df,0x089afd4c,0x146b01a1,
0x6edf01e4,0xc2d60caa,0xdbc9e3fe,0xe84b015f,0xfb43009d,0x0a63fa8e,0x15fbffbe,0x6327faac,
0xbf1d275a,0xdab7e660,0xe9b801e4,0xfd9bf9ca,0x0c83f682,0x1439fd19,0x52ecf815,0xc0804300,
0xda19e84b,0xeb40fe9a,0x01f2f32a,0x0cfbf3b3,0x0f4bfc72,0x3635f9e6,0xce6d6397,0xdc09e3bd,
0xf0fbf7bf,0x043fe979,0x0a1cf2ee,0x07c3fc1a,0x1fc801d7,0xe5097237,0xe110db94,0xf31feedb,
0x049de27a,0x04b5f3b7,0x00fd00ea,0x107c0b27,0xfa197237,0xe5c2d48a,0xf50ee698,0x0317df5d,
0x00b5f508,0xfedd03cd,0x06a710eb,0x0a0d7237,0xe748cdf1,0xf578df98,0x01f9e01e,0xfe33f788,
0xfef00650,0x022213b6,0x15df7237,0xe6c8c864,0xf76bdc1f,0xfff0e271,0xfdb1fa20,0xfedc0955,
0x01a012e3,0x18836ed0,0xe545c520,0xfb0bdba3,0x001ee587,0xfc39fbd7,0xfdc90aba,0xfea6132a,
0x244767f5,0xe63cc0a6,0xfc51da95,0xfdf0e891,0xf9c1fedd,0xfca50ae5,0xfc8a1556,0x2be861a3,
0xe69fbe66,0xffdbd990,0xfbfaea2f,0xf7c2fff2,0xfabc0d43,0xf9ab1667,0x3a0f58e5,0xe5dbbbfc,
0x0128d8be,0xf8baed51,0xf73e024e,0xf7ed0e7a,0xf83614ff,0x5001480f,0xe438bddb,0x00c8d948,
0xf34eef32,0xf35e0600,0xf7cb0fe6,0xf9ca1086,0x653d32f8,0xe1aec698,0xfbd8dc67,0xecd1f367,
0xf1e807eb,0xf9a90e98,0xff0e0a51,0x72372012,0xdc7dd417,0xf7b5dfe1,0xe63ef880,0xf25608b9,
0xfbe90a02,0x0749024c,0x72370c7c,0xd4a6ede6,0xee67e712,0xe06dfc48,0xf4270565,0x007901f2,
0x0e53fd8b,0x72370335,0xcd300687,0xe88bea65,0xddfffd35,0xf5ed00d7,0x0369fc93,0x133cfb0e,
0x72370114,0xc9691637,0xe25cea75,0xde0dfd80,0xf70afc56,0x085dfaea,0x1530fa87,0x6d8000dd,
0xc49b1fc7,0xdff8eb4d,0xdff3fd35,0xf97bf94c,0x0934f7b3,0x15e2fae3,0x68df01f0,0xc4082628,
0xde3ee961,0xe190fdaf,0xf7bff5df,0x0b2cf892,0x17e9fb51,0x663d01b4,0xc2932ba2,0xdb4ae892,
0xe195fdb4,0xf9c1f3ff,0x0d93f6f5,0x19d2fc48,0x609c0161,0xbff634dd,0xda89e698,0xe291fd35,
0xfb18f25e,0x1046f7f3,0x19fdfb02,0x57eafe9d,0xbfa1409e,0xd8d8e5ed,0xe3e4fdd6,0xfe50ef9f,
0x1203f60d,0x18c3faca,0x4b89ff66,0xc0334f48,0xd730e3e0,0xe7b3fbc3,0x0357ec54,0x117bf422,
0x146efd28,0x3c0a00f8,0xc56b5fad,0xd8c6e1a1,0xed9af714,0x0643e77d,0x0fedf2b1,0x0fb5fef4,
0x32000429,0xcb8066a0,0xdac1e03c,0xf14af425,0x0822e4f1,0x0d4cf251,0x090c0082,0x254807d9,
0xd78b6ff4,0xddafdb3e,0xf649ee9f,0x084de1b2,0x08e0f27d,0x05140347,0x1f7e0a48,0xdf4c7237,
0xe094d8e9,0xf954eaf2,0x0593e15e,0x0686f33d,0x033503cd,0x19520ad5,0xea5f7237,0xe246d555,
0xfaf3e85e,0x03bfe17c,0x015df3bf,0x014804f6,0x16ef0c7c,0xf3fa7237,0xe20bd2ea,0xfac9e357,
0x01bbe31d,0x0102f287,0x023b066c,0x13c50e94,0xf5407237,0xe173d167,0xfe27e0d7,0x0094e403,
0xff10f3bc,0x0273060c,0x14910f56,0xf6627237,0xdfd8d1b7,0xfe4ddfb1,0x0102e368,0xff43f45c,
0x01a8079a,0x11b711c7,0xfa2b7237,0xdfdfce75,0x003fddec,0xff97e4ea,0xfe53f556,0x00cf0924,
0x0cdc135e,0x02ff7237,0xe11dcab7,0x0146dc35,0xfe7de4ea,0xfc8df6e3,0x01110aa6,0x0ab8134f,
0x09887237,0xe318c817,0x0214d8d5,0xfd77e64c,0xfab5f8a2,0x003c0d7b,0x07d812b9,0x12006d9f,
0xe403c65c,0x00a3d7f2,0xfcd7e83b,0xf976fa2e,0x00df0d72,0x060810f9,0x14bf6eb9,0xe565c6e3,
0xffdfd728,0xfbe9e9d1,0xf834fd66,0x01aa0c4e,0x01d60eef,0x1de469e7,0xe610c644,0xfe9fd718,
0xfaedebe7,0xf85ffd35,0x00260c0b,0xffac0e79,0x21856940,0xe6a0c87e,0xfdb2d863,0xfaaeec69,
0xf9e4fc9f,0xff950913,0xfbd70e78,0x2d84642a,0xe894c85b,0xfb5ed7f0,0xf93aeeb1,0xf695fbfb,
0xfee80994,0xfc820eea,0x2be3643c,0xea18c94c,0xfad2d67f,0xfa99ee00,0xf75cfb82,0xfd8208ec,
0xfbe10e93,0x2f7562d7,0xeb11c96b,0xf965d593,0xf99feeca,0xf6affba4,0xfd9b088b,0xfc790e9d,
0x3031633d,0xebb4c84e,0xfa3fd5d5,0xf93eef75,0xf5dbfaea,0xfbc907da,0xfd210fba,0x310860f8,
0xec1ac78b,0xf984d631,0xf95eefba,0xf41afb27,0xfc830806,0xfd330fa8,0x32126239,0xed23c738,
0xf887d5b5,0xf8d1ee05,0xf524fc77,0xfd720743,0xfad01079,0x356f5ede,0xecf0c785,0xf797d66a,
0xf801ee1e,0xf4a5fd0f,0xfd2408d7,0xf96b1199,0x34735f4a,0xedeac756,0xf6c0d5b3,0xf949ecea,
0xf421fdeb,0xfcb309de,0xf85b1357,0x3ac05ae2,0xef30c5bb,0xf646d4bc,0xf9c7ecdb,0xf43fff76,
0xfb97095c,0xf77e1385,0x35245dff,0xf14fc750,0xf6f8d431,0xfacceaf0,0xf405fe06,0xfbbb0bd4,
0xf8131499,0x31445fc6,0xf1e0c617,0xf7fad4a1,0xfc5eea7d,0xf4c7feb3,0xf9a80be7,0xf75813e9,
0x35045f28,0xf19bc6ca,0xf792d4fc,0xfabce985,0xf2e70048,0xf9890cde,0xf95f1360,0x33f1608e,
0xf236c4e7,0xf685d674,0xfbcee938,0xf39a010e,0xf9da0c95,0xf9f511be,0x2c0f6318,0xf1adc658,
0xf827d6a3,0xfd78e9be,0xf342fff2,0xf9bd0aa6,0xf8fe11bf,0x32dc61af,0xf20ec538,0xf69bd685,
0xfb3ee92e,0xf34500bd,0xfa880a8f,0xfc781150,0x28896732,0xf06fc694,0xf797d6f1,0xfdf2e87b,
0xf37ffe65,0xfb0809f9,0xfc681337,0x29df6792,0xf14dc492,0xf795d62b,0xfc82e817,0xf488ff1c,
0xfc360a42,0xfe94143f,0x20b569cb,0xf06ec68f,0xf7f5d812,0xfe1de68a,0xf44dfe9c,0xfd1e0a79,
0xfff51412,0x1e886a2b,0xefc3c633,0xf6e3d79b,0xfe6ce5d6,0xf5f4007a,0xff0c0b55,0x0105144b,
0x15126d4e,0xefc6c7ab,0xf8e3d8dc,0xfffee52a,0xf776fee3,0xfff509ed,0x01271464,0x13346cc1,
0xefd7c8d7,0xf7abd947,0x000fe450,0xf6f9ff7a,0x02320ac8,0x04731204,0x0a5c6f1f,0xee7ccb89,
0xf7c5da6d,0x00cee467,0xf953fd38,0x033f0b17,0x06521128,0x03e26fe3,0xec9ccc63,0xf8c2db3a,
0x0148e407,0xfb9afcb9,0x04c408bb,0x07db10b1,0xfbd17237,0xead9ce95,0xf902dcf1,0x02d9e37e,
0xfebbfafc,0x05a70872,0x0d020e69,0xf2477237,0xe802d208,0xf871dfd1,0x0463e398,0xfffefab8,
0x05d7067f,0x0f3f0e3b,0xee887230,0xe7a5d2c4,0xf8c3e076,0x046ae403,0x0078fa4b,0x057506d1,
0x14360d49,0xe7bd7237,0xe667d5cb,0xf849e201,0x04bee3ce,0x0203f91c,0x077105e0,0x1b550c73,
0xdf4a6fe2,0xe4d4d90a,0xf723e3b1,0x051ae473,0x0221f9b6,0x093f05ea,0x1f830af8,0xdac46f35,
0xe4bfda50,0xf614e483,0x05a3e43c,0x02dff9ac,0x0b2e05a3,0x293a09ff,0xcfa96b3a,0xe1f4dfd8,
0xf4a4e874,0x0618e550,0x0669f8bb,0x0d0c0321,0x30610776,0xcb12664d,0xdef9e120,0xf353eb52,
0x05b0e616,0x0a0ef879,0x0f5901f1,0x337b0673,0xc6e66148,0xdd9ae421,0xf19aeea8,0x0670e7fe,
0x09faf880,0x10df003e,0x3b110468,0xc4115c26,0xda8be4c8,0xf01af227,0x04d0ea0b,0x0b21f87d,
0x1238ffac,0x3ebc036e,0xc2c45ae2,0xd9bde50f,0xef1ef221,0x0572ea2a,0x0a42f8a8,0x141c0071,
0x4bdd014d,0xbd834dd5,0xd77ce90e,0xec02f548,0x04b7eca5,0x0d14f97a,0x14ccff8c,0x5329002e,
0xbcbc4117,0xd6deea3c,0xe988f82e,0x02baf006,0x0df5fac0,0x15ddfe26,0x5b0cfff4,0xbb2336a9,
0xd567eb92,0xe80bf969,0x01b2f267,0x0e8bfbf2,0x1614fdf5,0x5e46ff82,0xbbaa333c,0xd567eb83,
0xe80bf969,0x01b2f267,0x0e8bfbf2,0x1614fdf5,0x5e46ff82,0xbbaa333c,0xd567eb83,0xe80bf969,
0x01b2f267,0x0e8bfbf2,0x1614fdf5,0x5e46ff82,0xbbaa333c,0xd567eb83,0xe80bf969,0x01b2f267,
0x0e8bfbf2,0x1614fdf5,0x5e46ff82,0xbbaa333c,0xd515eb83,0xe769fa52,0x0000f368,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

struct sample_data sample = {
    (int16_t*)soundSample, // sample
    true, // LOOP
    11, // LENGTH_BITS
    (1 << (32 - 11)) * CENTS_SHIFT(-4) * 44100.0 / NOTE(103) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
    ((uint32_t)1662 - 1) << (32 - 11), // MAX_PHASE
    ((uint32_t)1658 - 1) << (32 - 11), // LOOP_PHASE_END
    (((uint32_t)1658 - 1) << (32 - 11)) - (((uint32_t)1602 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
    uint16_t(UINT16_MAX * DECIBEL_SHIFT(-5.2)), // INITIAL_ATTENUATION_SCALAR
    uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
    uint32_t(6.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
    uint32_t(20.01 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
    uint32_t(11993.38 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
    uint32_t(536.20 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
    int32_t((1.0 - DECIBEL_SHIFT(-2.3)) * UNITY_GAIN), // SUSTAIN_MULT
    uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
    uint32_t(0.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
    (CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
    (1.0 - CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
    uint32_t(260.01 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
    uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
    (CENTS_SHIFT(9) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
    (1.0 - CENTS_SHIFT(-9)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
    int32_t(UINT16_MAX * (DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
    int32_t(UINT16_MAX * (1.0 - DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
};
