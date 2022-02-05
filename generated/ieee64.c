// This file is auto-generated. DO NOT EDIT IT.

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#else
#include <stdbool.h>
#endif

typedef struct {
  bool    negative;
  int32_t exponent;
  uint64_t mantissa;
} ieee64_t;

typedef uint64_t suint_t;
typedef __uint128_t duint_t;
typedef ieee64_t rep_t;

static uint32_t const mantissa_size    = 52;
static int32_t  const bin_exponent_min = -1074;

#define AMARU_SHIFT 56
#define AMARU_USE_COMPACT_TBL

static struct {
  suint_t  const upper;
  suint_t  const lower;
} const multipliers[] = {
  { 0x013c33b72569c637, 0x52d80f4584d5068e }, // -324
  { 0x01f9ec583bdc7058, 0x848ce53c07bb3db0 }, // -323
  { 0x0194bd136316c046, 0xd070b763396297c0 }, // -322
  { 0x0143ca75e8df0038, 0xa6c092b5c7821300 }, // -321
  { 0x0103085e53e599c6, 0xebcd422b0601a8cd }, // -320
  { 0x019e73ca1fd5c2d7, 0xdfaed044d6690e15 }, // -319
  { 0x014b8fd4e6449bdf, 0xe625736a4520d811 }, // -318
  { 0x01093fdd8503afe6, 0x51b78f88374d79a7 }, // -317
  { 0x01a8662f3b391970, 0x82bf4c0d2548c2a4 }, // -316
  { 0x015384f295c7478d, 0x3565d670eaa09bb7 }, // -315
  { 0x010f9d8ede39060a, 0x911e4527221a162c }, // -314
  { 0x01b295b1638e7010, 0xe8306ea5035cf046 }, // -313
  { 0x015baaf44fa52673, 0xecf38bb735e3f36b }, // -312
  { 0x0116225d0c841ec3, 0x23f6095f5e4ff5f0 }, // -311
  { 0x01bd03c81406979e, 0x9ff00efefd4cbcb2 }, // -310
  { 0x01640306766bac7e, 0xe659a598caa3ca28 }, // -309
  { 0x011ccf385ebc89ff, 0x1eae1e13d54fd4ed }, // -308
  { 0x01c7b1f3cac74331, 0xcab0301fbbb2ee48 }, // -307
  { 0x016c8e5ca239028e, 0x3bc0267fc95bf1d3 }, // -306
  { 0x0123a516e82d9ba4, 0xfc99b8663aaff4a9 }, // -305
  { 0x01d2a1be4048f907, 0xfa8f8d705de65441 }, // -304
  { 0x01754e31cd072d9f, 0xfba60ac04b1ea9ce }, // -303
  { 0x012aa4f4a405be19, 0x961e6f003c1887d8 }, // -302
  { 0x01ddd4baa0093028, 0xf030b199f9c0d959 }, // -301
  { 0x017e43c8800759ba, 0x59c08e14c7cd7aae }, // -300
  { 0x0131cfd3999f7afb, 0x7b0071aa39712ef2 }, // -299
  { 0x01e94c85c298c4c5, 0x919a4f76c24eb182 }, // -298
  { 0x0187706b0213d09e, 0x0e150c5f01d88e02 }, // -297
  { 0x013926bc01a973b1, 0xa4dda37f34ad3e68 }, // -296
  { 0x01f50ac6690f1f82, 0xa1629f31ede1fd73 }, // -295
  { 0x0190d56b873f4c68, 0x811bb28e57e7fdf6 }, // -294
  { 0x0140aabc6c32a386, 0xcdafc20b798664c5 }, // -293
  { 0x01008896bcf54f9f, 0x0af301a2c79eb704 }, // -292
  { 0x019a742461887f64, 0xde519c37a5cabe6c }, // -291
  { 0x01485ce9e7a065ea, 0x4b747cf9516efebd }, // -290
  { 0x0106b0bb1fb384bb, 0x6f9063faa78bfefe }, // -289
  { 0x01a44df832b8d45f, 0x18e7065dd8dffe63 }, // -288
  { 0x01503e602893dd18, 0xe0b8d1e4ad7ffeb5 }, // -287
  { 0x010cfeb353a97dad, 0x8093db1d57999891 }, // -286
  { 0x01ae64521f7595e2, 0x6752f82ef28f5a82 }, // -285
  { 0x01585041b2c477e8, 0x52a8c68bf53f7b9b }, // -284
  { 0x01137367c236c653, 0x7553d20990ff9616 }, // -283
  { 0x01b8b8a6038ad6eb, 0xeeec83428198f022 }, // -282
  { 0x016093b802d578bc, 0xbf239c35347a59b5 }, // -281
  { 0x011a0fc668aac6fd, 0x65b61690f6c847c4 }, // -280
  { 0x01c34c70a777a4c8, 0xa2bcf0e7f14072d3 }, // -279
  { 0x016909f3b92c83d3, 0xb563f3ecc1005bdc }, // -278
  { 0x0120d4c2fa8a030f, 0xc44ff65700cd164a }, // -277
  { 0x01ce2137f7433819, 0x3a198a24ce14f076 }, // -276
  { 0x0171b42cc5cf6014, 0x2e7ad4ea3e7726c5 }, // -275
  { 0x0127c35704a5e676, 0x8b957721cb92856b }, // -274
  { 0x01d9388b3aa30a57, 0x45bbf1cfac1da244 }, // -273
  { 0x017a93a2954f3b79, 0x04965b0c89b14e9d }, // -272
  { 0x012edc82110c2f94, 0x03ab7c0a07c10bb1 }, // -271
  { 0x01e494034e79e5b9, 0x9f78c67672ce791a }, // -270
  { 0x0183a99c3ec7eafa, 0xe5fa385ec23ec748 }, // -269
  { 0x01362149cbd32262, 0x5194f9e568323907 }, // -268
  { 0x01f03542dfb83703, 0xb5bb296f0d1d280b }, // -267
  { 0x018cf768b2f9c59c, 0x9162878c0a7db9a2 }, // -266
  { 0x013d92ba28c7d14a, 0x0de86c7008649482 }, // -265
  { 0x01fc1df6a7a61ba9, 0xafda4719a7075403 }, // -264
  { 0x01967e5eec84e2ee, 0x264838e1526c4335 }, // -263
  { 0x014531e58a03e8be, 0x850693e7752368f8 }, // -262
  { 0x010427ead4cfed65, 0x37387652c41c53f9 }, // -261
  { 0x01a03fde214caf08, 0x585a56ead360865c }, // -260
  { 0x014cffe4e7708c06, 0xad15125575e6d1e3 }, // -259
  { 0x010a6650b926d66b, 0xbdaa75112b1f0e4f }, // -258
  { 0x01aa3d4df50af0ac, 0x62aa54e844fe7d4b }, // -257
  { 0x0154fdd7f73bf3bd, 0x1bbb77203731fdd6 }, // -256
  { 0x0110cb132c2ff630, 0xe2fc5f4cf8f4cb12 }, // -255
  { 0x01b4781ead1989e7, 0xd193cbae5b2144e9 }, // -254
  { 0x015d2ce55747a186, 0x4143095848e76a54 }, // -253
  { 0x0117571ddf6c8138, 0x3435a1136d85eeaa }, // -252
  { 0x01bef1c9657a6859, 0xed229b5248d64aa9 }, // -251
  { 0x01658e3ab7952047, 0xf0e87c41d3dea221 }, // -250
  { 0x011e0b622c774d06, 0x5a53969b0fe54e81 }, // -249
  { 0x01c9abd04725480a, 0x2a1f575e7fd54a67 }, // -248
  { 0x016e230d05b76cd4, 0xee7f791866443b86 }, // -247
  { 0x0124e8d737c5f0aa, 0x5865fa79eb69c938 }, // -246
  { 0x01d4a7bebfa31aaa, 0x270990c31242db8c }, // -245
  { 0x0176ec98994f4888, 0x1f3ada35a8357c70 }, // -244
  { 0x012bf07a143f6d39, 0xb2957b5e202ac9f4 }, // -243
  { 0x01dfe729b9ff1529, 0x1dbbf89699de0fec }, // -242
  { 0x017fec216198ddba, 0x7e2ffa1214b1a656 }, // -241
  { 0x0133234de7ad7e2e, 0xcb5994db43c151df }, // -240
  { 0x01eb6bafd91596b1, 0x455c215ed2cee964 }, // -239
  { 0x018922f31411455a, 0x9de34de575725450 }, // -238
  { 0x013a825c100dd115, 0x4b1c3e512ac1dd0d }, // -237
  { 0x01f736f9b3494e88, 0x782d3081de02fb48 }, // -236
  { 0x019292615c3aa539, 0xf9bdc067e4cf2f6d }, // -235
  { 0x01420eb449c8842e, 0x616499ecb70c25f1 }, // -234
  { 0x0101a55d07d39cf1, 0xe783ae56f8d684c1 }, // -233
  { 0x019c3bc80c85c7e9, 0x726c4a24c1573ace }, // -232
  { 0x0149c96cd6d16cba, 0xc1f03b509aac2f0b }, // -231
  { 0x0107d457124123c8, 0x9b2695da15568c09 }, // -230
  { 0x01a6208b50683940, 0xf83dbc9022241341 }, // -229
  { 0x0151b3a2a6b9c767, 0x2cfe30734e83429b }, // -228
  { 0x010e294eebc7d2b8, 0xf0cb59f5d8690215 }, // -227
  { 0x01b04217dfa61df4, 0xb4788fefc0a80355 }, // -226
  { 0x0159ce797fb817f6, 0xf6c6d98c9a2002ab }, // -225
  { 0x0114a52dffc67992, 0x5f057ad6e1b33555 }, // -224
  { 0x01baa1e332d728ea, 0x31a25e249c51eeef }, // -223
  { 0x01621b1c28ac20bb, 0x5ae84b507d0e58bf }, // -222
  { 0x011b48e353bce6fc, 0x48b9d5d9fda513cc }, // -221
  { 0x01c5416bb92e3e60, 0x745c895cc9081fad }, // -220
  { 0x016a9abc9424feb3, 0x904a077d6da01957 }, // -219
  { 0x01221563a9b73229, 0x403b393124801446 }, // -218
  { 0x01d022390f8b8375, 0x3391f51b6d99ba09 }, // -217
  { 0x01734e940c6f9c5d, 0xc2db2a7c57ae2e6e }, // -216
  { 0x01290ba9a38c7d17, 0xcf15bb96ac8b5858 }, // -215
  { 0x01db45dc38e0c826, 0x1822c5bde0def3bf }, // -214
  { 0x017c37e360b3d351, 0xace89e3180b25c99 }, // -213
  { 0x01302cb5e6f642a7, 0xbd86e4f466f516e1 }, // -212
  { 0x01e6adefd7f06aa5, 0xfc0b07ed7188249b }, // -211
  { 0x018557f31326bbb7, 0xfcd59ff127a01d49 }, // -210
  { 0x0137798f428562f9, 0x97114cc0ec80176e }, // -209
  { 0x01f25c186a6f04c2, 0x8b4ee134ad99bf16 }, // -208
  { 0x018eb0138858d09b, 0xa2a580f6f147cc11 }, // -207
  { 0x013ef342d37a407c, 0x821e00c58dd309a8 }, // -206
  { 0x01fe52048590672d, 0x9cfcce08e2eb42a5 }, // -205
  { 0x0198419d37a6b8f1, 0x4a63d8071bef6884 }, // -204
  { 0x01469ae42c8560c1, 0x084fe005aff2ba04 }, // -203
  { 0x010548b68a044d67, 0x39d980048cc22e69 }, // -202
  { 0x01a20df0dcd3af0b, 0x8fc2666dae037d75 }, // -201
  { 0x014e718d7d7625a2, 0xd96851f15802cac4 }, // -200
  { 0x010b8e0acac4eae8, 0xaded0e5aaccf089d }, // -199
  { 0x01ac1677aad4ab0d, 0xe314e3c447b1a761 }, // -198
  { 0x0156785fbbdd55a4, 0xb5aa4fd0395aec4e }, // -197
  { 0x0111f9e62fe44483, 0xc4883fd9c77bf03f }, // -196
  { 0x01b65ca37fd3a0d2, 0xd40d32f60bf98064 }, // -195
  { 0x015eb082cca94d75, 0x7670f591a32e0050 }, // -194
  { 0x01188d357087712a, 0xc5272adae8f199da }, // -193
  { 0x01c0e1ef1a724eaa, 0xd50b77c4a7e8f629 }, // -192
  { 0x01671b25aec1d888, 0xaa6f9303b9872b54 }, // -191
  { 0x011f48eaf234ad3a, 0x21f2dc02fad28910 }, // -190
  { 0x01cba7de5054485d, 0x031e2cd19150db4c }, // -189
  { 0x016fb97ea6a9d37d, 0x9c1823dadaa715d7 }, // -188
  { 0x01262dfeebbb0f97, 0xb0134fe24885ab12 }, // -187
  { 0x01d6affe45f818f2, 0xb352196a0da2ab50 }, // -186
  { 0x01788ccb6b2ce0c2, 0x290e7abb3e1bbc40 }, // -185
  { 0x012d3d6f88f0b3ce, 0x873ec895cb496367 }, // -184
  { 0x01e1fbe5a7e78617, 0x3ecada89454238a4 }, // -183
  { 0x01819651531f9e78, 0xff08aed437682d50 }, // -182
  { 0x013478410f4c7ec7, 0x326d58a9c5ecf10d }, // -181
  { 0x01ed8d34e547313e, 0xb7155aa93cae4e7b }, // -180
  { 0x018ad75d8438f432, 0x2c111554308b71fc }, // -179
  { 0x013bdf7e0360c35b, 0x5674111026d5f4ca }, // -178
  { 0x01f965966bce055e, 0xf0b9b4e6a48987a9 }, // -177
  { 0x01945145230b377f, 0x26faf71eea079fba }, // -176
  { 0x014374374f3c2c65, 0xb8c8c5b254d2e62f }, // -175
  { 0x0102c35f729689ea, 0xfa3a37c1dd7584f2 }, // -174
  { 0x019e056584240fde, 0x5d29f2cfc8bc07ea }, // -173
  { 0x014b378469b67318, 0x4a87f57306fcd322 }, // -172
  { 0x0108f936baf85c13, 0x6ed32ac26bfd75b5 }, // -171
  { 0x01a7f5245e5a2ceb, 0xe4851137132f22ba }, // -170
  { 0x01532a837eae8a56, 0x506a742c0f58e895 }, // -169
  { 0x010f5535fef20845, 0x0d21f689a5e0ba11 }, // -168
  { 0x01b221effe500d3b, 0x48365742a30129b5 }, // -167
  { 0x015b4e5998400a95, 0xd35eac354f34215d }, // -166
  { 0x0115d847ad000877, 0xdc4bbcf772901ab1 }, // -165
  { 0x01bc8d3f7b3340bf, 0xc6df94bf1db35de8 }, // -164
  { 0x0163a432c8f5cd66, 0x38b2dd65b15c4b20 }, // -163
  { 0x011c835bd3f7d784, 0xfa28b11e277d08e7 }, // -162
  { 0x01c73892ecbfbf3b, 0x29dab4fd0bfb4171 }, // -161
  { 0x016c2d4256ffcc2f, 0x54aef730d6629ac1 }, // -160
  { 0x0123576845997025, 0xdd58c5c0ab821567 }, // -159
  { 0x01d22573a28f19d6, 0x2ef46f9aac035571 }, // -158
  { 0x0174eac2e8727b11, 0xbf29f2e22335ddf4 }, // -157
  { 0x012a5568b9f52f41, 0x65bb28b4e8f7e4c4 }, // -156
  { 0x01dd55745cbb7ecf, 0x092b7454a7f3079f }, // -155
  { 0x017dddf6b095ff0c, 0x0755f6aa1ff59fb2 }, // -154
  { 0x01317e5ef3ab3270, 0x05de5eee7ff7b2f5 }, // -153
  { 0x01e8ca3185deb719, 0xa2fd64b0ccbf84bb }, // -152
  { 0x018708279e4bc5ae, 0x1bfdea270a32d096 }, // -151
  { 0x0138d352e5096af1, 0xaffe54ec0828a6de }, // -150
  { 0x01f485516e7577e9, 0x1996ee4673743e30 }, // -149
  { 0x01906aa78b912cba, 0x7adf25052929cb5a }, // -148
  { 0x01405552d60dbd61, 0xfbe5b73754216f7b }, // -147
  { 0x0100444244d7cab4, 0xc9849292a9b45930 }, // -146
  { 0x019a06d06e261121, 0x426db7510f86f519 }, // -145
  { 0x014805738b51a74d, 0xcebe2c40d938c414 }, // -144
  { 0x01066ac2d5daec3e, 0x3efe89cd7a93d010 }, // -143
  { 0x01a3de04895e46c9, 0xfe640faf2a8619b3 }, // -142
  { 0x014fe4d06de5056e, 0x651cd958eed1ae29 }, // -141
  { 0x010cb70d24b7378b, 0x8417144725748b54 }, // -140
  { 0x01adf1aea12525ac, 0x068b53a508ba7886 }, // -139
  { 0x0157f48bb41db7bc, 0xd2090fb73a2ec6d2 }, // -138
  { 0x01132a095ce492fd, 0x74d40c9294f238a8 }, // -137
  { 0x01b843422e3a84c8, 0xbaece0ea87e9f43f }, // -136
  { 0x016035ce8b6203d3, 0xc8bd80bb9fee5d00 }, // -135
  { 0x0119c4a53c4e6976, 0x3a3133c94cbeb0cd }, // -134
  { 0x01c2d43b93b0a8bd, 0x29e852dbadfde7ad }, // -133
  { 0x0168a9c942f3ba30, 0xee53757c8b318624 }, // -132
  { 0x012087d4358fc827, 0x250f91306f5ad1b7 }, // -131
  { 0x01cda62055b2d9d8, 0x3b4c1b80b22ae924 }, // -130
  { 0x017151b377c247e0, 0x2f7016008e88ba84 }, // -129
  { 0x0127748f9301d319, 0xbf8cde66d86d6203 }, // -128
  { 0x01d8ba7f519c84f5, 0xff47ca3e2715699e }, // -127
  { 0x017a2ecc414a03f7, 0xff6ca1cb527787b2 }, // -126
  { 0x012e8bd69aa19cc6, 0x65f0816f752c6c8e }, // -125
  { 0x01e412f0f768fad7, 0x0980cf18bb7a474a }, // -124
  { 0x0183425a5f872f12, 0x6e00a5ad62c83908 }, // -123
  { 0x0135ceaeb2d28c0e, 0xbe66eaf11bd360d3 }, // -122
  { 0x01efb1178484134a, 0xca3e44b4f9523485 }, // -121
  { 0x018c8dac6a0342a2, 0x3b6503c3faa82a04 }, // -120
  { 0x013d3e2388029bb4, 0xfc50cfcffbb9bb36 }, // -119
  { 0x01fb969f40042c54, 0xc6e7b2e65f8f91f0 }, // -118
  { 0x01961219000356aa, 0x38b95beb7fa60e5a }, // -117
  { 0x0144db473335deee, 0x93c77cbc661e71e2 }, // -116
  { 0x0103e29f5c2b18be, 0xdc9f96fd1e7ec181 }, // -115
  { 0x019fd0fef9de8dfe, 0x2dcc24c830cacf35 }, // -114
  { 0x014ca732617ed7fe, 0x8b09b7068d6f0c2b }, // -113
  { 0x010a1f5b81324665, 0x3c07c59ed78c09bc }, // -112
  { 0x01a9cbc59b83a3d5, 0x2cd93c3158e00f93 }, // -111
  { 0x0154a3047c694fdd, 0xbd7a968de0b33fa9 }, // -110
  { 0x01108269fd210cb1, 0x6462120b1a28ffba }, // -109
  { 0x01b403dcc834e11b, 0xd3d01cde9041992a }, // -108
  { 0x015ccfe3d35d80e3, 0x0fd9b0b20d014755 }, // -107
  { 0x01170cb642b133e8, 0xd97af3c1a40105dd }, // -106
  { 0x01be7abd3781eca7, 0xc25e52cf6cce6fc8 }, // -105
  { 0x01652efdc6018a1f, 0xceb1dbd923d8596d }, // -104
  { 0x011dbf316b346e7f, 0xd88e497a83137abe }, // -103
  { 0x01c931e8ab871732, 0xf416dbf7381f2ac9 }, // -102
  { 0x016dc186ef9f45c2, 0x5cdf165f6018ef07 }, // -101
  { 0x01249ad2594c37ce, 0xb0b2784c4ce0bf39 }, // -100
  { 0x01d42aea2879f2e4, 0x4dea5a13ae346528 }, // -99
  { 0x017688bb5394c250, 0x3e5514dc8b5d1dba }, // -98
  { 0x012ba095dc7701d9, 0xcb7743e3a2b0e495 }, // -97
  { 0x01df67562d8b3629, 0x458b9fd29de7d421 }, // -96
  { 0x017f85de8ad5c4ed, 0xd13c7fdbb186434d }, // -95
  { 0x0132d17ed577d0be, 0x40fd3316279e9c3e }, // -94
  { 0x01eae8caef261aca, 0x01951e89d8fdc6c9 }, // -93
  { 0x0188ba3bf284e23b, 0x34774ba17a649f08 }, // -92
  { 0x013a2e965b9d81c8, 0xf6c5d61ac8507f39 }, // -91
  { 0x01f6b0f092959c74, 0xbe0956914080cb8f }, // -90
  { 0x01922726dbaae390, 0x98077874339a3c72 }, // -89
  { 0x0141b8ebe2ef1c73, 0xacd2c6c35c7b638f }, // -88
  { 0x010160bcb58c16c2, 0xf0a89f02b062b60c }, // -87
  { 0x019bcdfabc13579e, 0x4dda98044d6abce0 }, // -86
  { 0x014971956342ac7e, 0xa4aee003712230b3 }, // -85
  { 0x01078e111c3556cb, 0xb6f24ccf8db4f3c2 }, // -84
  { 0x01a5b01b605557ac, 0x57ea147f49218604 }, // -83
  { 0x015159af80444623, 0x79881065d41ad19d }, // -82
  { 0x010de1593369d1b5, 0xfad34051767bdae4 }, // -81
  { 0x01afcef51f0fb5ef, 0xf7b866e8bd92f7d3 }, // -80
  { 0x0159725db272f7f3, 0x2c938586fe0f2ca9 }, // -79
  { 0x01145b7e285bf98f, 0x56dc6ad264d8f087 }, // -78
  { 0x01ba2bfd0d5ff5b2, 0x2493de1d6e27e73e }, // -77
  { 0x0161bcca7119915b, 0x50764b4abe865298 }, // -76
  { 0x011afd6ec0e14115, 0xd9f83c3bcb9ea87a }, // -75
  { 0x01c4c8b1349b9b56, 0x298d2d2c78fdda5c }, // -74
  { 0x016a3a275d494911, 0xbad75756c7317b7d }, // -73
  { 0x0121c81f7dd43a74, 0x957912abd28dfc64 }, // -72
  { 0x01cfa698c95390ba, 0x88c1b77950e32d6d }, // -71
  { 0x0172ebad6ddc73c8, 0x6d67c5faa71c2457 }, // -70
  { 0x0128bc8abe49f639, 0xf11fd195527ce9df }, // -69
  { 0x01dac74463a989f6, 0x4e994f5550c7dc98 }, // -68
  { 0x017bd29d1c87a191, 0xd87aa5ddda397d47 }, // -67
  { 0x012fdbb0e39fb474, 0xad2eeb17e1c7976c }, // -66
  { 0x01e62c4e38ff8721, 0x1517de8c9c728bdf }, // -65
  { 0x0184f03e93ff9f4d, 0xaa797ed6e38ed64c }, // -64
  { 0x013726987666190a, 0xeec798abe93f11d7 }, // -63
  { 0x01f1d75a5709c1ab, 0x17a5c1130ecb4fbe }, // -62
  { 0x018e45e1df3b0155, 0xac849a75a56f72fe }, // -61
  { 0x013e9e4e4c2f3444, 0x8a03aec4845928cc }, // -60
  { 0x01fdca16e04b86d4, 0x1005e46da08ea7ac }, // -59
  { 0x0197d4df19d60576, 0x7337e9f14d3eec8a }, // -58
  { 0x014643e5ae44d12b, 0x8f5fee5aa43256d5 }, // -57
  { 0x0105031e2503da89, 0x3f7ff1e21cf51244 }, // -56
  { 0x01a19e96a19fc40e, 0xcbffe969c7ee839f }, // -55
  { 0x014e1878814c9cd8, 0xa33321216cbecfb3 }, // -54
  { 0x010b46c6cdd6e3e0, 0x828f4db456ff0c8f }, // -53
  { 0x01aba4714957d300, 0xd0e549208b31adb2 }, // -52
  { 0x01561d276ddfdc00, 0xa71dd41a08f48af5 }, // -51
  { 0x0111b0ec57e6499a, 0x1f4b1014d3f6d591 }, // -50
  { 0x01b5e7e08ca3a8f6, 0x987819baecbe2281 }, // -49
  { 0x015e531a0a1c872b, 0xad2ce16256fe8201 }, // -48
  { 0x0118427b3b4a05bc, 0x8a8a4de845986801 }, // -47
  { 0x01c06a5ec5433c60, 0xddaa16406f5a4001 }, // -46
  { 0x0166bb7f0435c9e7, 0x17bb450059150001 }, // -45
  { 0x011efc659cf7d4b8, 0xdfc9040047440001 }, // -44
  { 0x01cb2d6f618c878e, 0x32db399a0ba00001 }, // -43
  { 0x016f578c4e0a060b, 0x5be2947b3c800001 }, // -42
  { 0x0125dfa371a19e6f, 0x7cb54395ca000001 }, // -41
  { 0x01d6329f1c35ca4b, 0xfabb9f5610000001 }, // -40
  { 0x0178287f49c4a1d6, 0x622fb2ab40000001 }, // -39
  { 0x012ced32a16a1b11, 0xe826288900000001 }, // -38
  { 0x01e17b84357691b6, 0x403d0da800000001 }, // -37
  { 0x01812f9cf7920e2b, 0x66973e2000000001 }, // -36
  { 0x013426172c74d822, 0xb878fe8000000001 }, // -35
  { 0x01ed09bead87c037, 0x8d8e640000000001 }, // -34
  { 0x018a6e32246c99c6, 0x0ad8500000000001 }, // -33
  { 0x013b8b5b5056e16b, 0x3be0400000000001 }, // -32
  { 0x01f8def8808b0245, 0x2c9a000000000001 }, // -31
  { 0x0193e5939a08ce9d, 0xbd48000000000001 }, // -30
  { 0x01431e0fae6d7217, 0xcaa0000000000001 }, // -29
  { 0x01027e72f1f12813, 0x0880000000000001 }, // -28
  { 0x019d971e4fe8401e, 0x7400000000000001 }, // -27
  { 0x014adf4b7320334b, 0x9000000000000001 }, // -26
  { 0x0108b2a2c2802909, 0x4000000000000001 }, // -25
  { 0x01a784379d99db42, 0x0000000000000001 }, // -24
  { 0x0152d02c7e14af68, 0x0000000000000001 }, // -23
  { 0x010f0cf064dd5920, 0x0000000000000001 }, // -22
  { 0x01b1ae4d6e2ef500, 0x0000000000000001 }, // -21
  { 0x015af1d78b58c400, 0x0000000000000001 }, // -20
  { 0x01158e460913d000, 0x0000000000000001 }, // -19
  { 0x01bc16d674ec8000, 0x0000000000000001 }, // -18
  { 0x016345785d8a0000, 0x0000000000000001 }, // -17
  { 0x011c37937e080000, 0x0000000000000001 }, // -16
  { 0x01c6bf5263400000, 0x0000000000000001 }, // -15
  { 0x016bcc41e9000000, 0x0000000000000001 }, // -14
  { 0x012309ce54000000, 0x0000000000000001 }, // -13
  { 0x01d1a94a20000000, 0x0000000000000001 }, // -12
  { 0x0174876e80000000, 0x0000000000000001 }, // -11
  { 0x012a05f200000000, 0x0000000000000001 }, // -10
  { 0x01dcd65000000000, 0x0000000000000001 }, // -9
  { 0x017d784000000000, 0x0000000000000001 }, // -8
  { 0x01312d0000000000, 0x0000000000000001 }, // -7
  { 0x01e8480000000000, 0x0000000000000001 }, // -6
  { 0x0186a00000000000, 0x0000000000000001 }, // -5
  { 0x0138800000000000, 0x0000000000000001 }, // -4
  { 0x01f4000000000000, 0x0000000000000001 }, // -3
  { 0x0190000000000000, 0x0000000000000001 }, // -2
  { 0x0140000000000000, 0x0000000000000001 }, // -1
  { 0x0100000000000000, 0x0000000000000001 }, // 0
  { 0x0199999999999999, 0x999999999999999a }, // 1
  { 0x0147ae147ae147ae, 0x147ae147ae147ae2 }, // 2
  { 0x010624dd2f1a9fbe, 0x76c8b4395810624e }, // 3
  { 0x01a36e2eb1c432ca, 0x57a786c226809d4a }, // 4
  { 0x014f8b588e368f08, 0x461f9f01b866e43b }, // 5
  { 0x010c6f7a0b5ed8d3, 0x6b4c7f3493858363 }, // 6
  { 0x01ad7f29abcaf485, 0x787a6520ec08d237 }, // 7
  { 0x015798ee2308c39d, 0xf9fb841a566d74f9 }, // 8
  { 0x0112e0be826d694b, 0x2e62d01511f12a61 }, // 9
  { 0x01b7cdfd9d7bdbab, 0x7d6ae6881cb5109b }, // 10
  { 0x015fd7fe17964955, 0xfdef1ed34a2a73af }, // 11
  { 0x0119799812dea111, 0x97f27f0f6e885c8c }, // 12
  { 0x01c25c268497681c, 0x2650cb4be40d60e0 }, // 13
  { 0x016849b86a12b9b0, 0x1ea70909833de71a }, // 14
  { 0x01203af9ee756159, 0xb21f3a6e0297ec15 }, // 15
  { 0x01cd2b297d889bc2, 0xb6985d7cd0f31354 }, // 16
  { 0x0170ef54646d4968, 0x92137dfd73f5a910 }, // 17
  { 0x012725dd1d243aba, 0x0e75fe645cc48740 }, // 18
  { 0x01d83c94fb6d2ac3, 0x4a5663d3c7a0d866 }, // 19
  { 0x0179ca10c9242235, 0xd511e976394d79ec }, // 20
  { 0x012e3b40a0e9b4f7, 0xdda7edf82dd794bd }, // 21
  { 0x01e392010175ee59, 0x62a6498d1625bac7 }, // 22
  { 0x0182db34012b2514, 0x4eeb6e0a781e2f06 }, // 23
  { 0x01357c299a88ea76, 0xa58924d52ce4f26b }, // 24
  { 0x01ef2d0f5da7dd8a, 0xa27507bb7b07ea45 }, // 25
  { 0x018c240c4aecb13b, 0xb52a6c95fc065504 }, // 26
  { 0x013ce9a36f23c0fc, 0x90eebd44c99eaa69 }, // 27
  { 0x01fb0f6be5060194, 0x1b17953adc3110a8 }, // 28
  { 0x0195a5efea6b3476, 0x7c12ddc8b0274087 }, // 29
  { 0x014484bfeebc29f8, 0x63424b06f3529a06 }, // 30
  { 0x01039d66589687f9, 0xe901d59f290ee19e }, // 31
  { 0x019f623d5a8a7329, 0x74cfbc31db4b0296 }, // 32
  { 0x014c4e977ba1f5ba, 0xc3d9635b15d59bac }, // 33
  { 0x0109d8792fb4c495, 0x697ab5e277de1623 }, // 34
  { 0x01a95a5b7f87a0ef, 0x0f2abc9d8c9689d1 }, // 35
  { 0x0154484932d2e725, 0xa5bbca17a3aba174 }, // 36
  { 0x011039d428a8b8ea, 0xeafca1ac82efb45d }, // 37
  { 0x01b38fb9daa78e44, 0xab2dcf7a6b192095 }, // 38
  { 0x015c72fb1552d836, 0xef57d92ebc141a11 }, // 39
  { 0x0116c262777579c5, 0x8c46475896767b41 }, // 40
  { 0x01be03d0bf225c6f, 0x46d6d88dbd8a5ece }, // 41
  { 0x0164cfda3281e38c, 0x38abe071646eb23e }, // 42
  { 0x011d7314f534b609, 0xc6efe6c11d255b65 }, // 43
  { 0x01c8b82188545676, 0x0b197134fb6ef8a1 }, // 44
  { 0x016d601ad376ab91, 0xa27ac0f72f8bfa1b }, // 45
  { 0x01244ce242c5560e, 0x1b95672c260994e2 }, // 46
  { 0x01d3ae36d13bbce3, 0x5f5571e03cdc216a }, // 47
  { 0x017624f8a762fd82, 0xb2aac18030b01abb }, // 48
  { 0x012b50c6ec4f3135, 0x5bbbce0026f34896 }, // 49
  { 0x01dee7a4ad4b81ee, 0xf92c7ccd0b1eda89 }, // 50
  { 0x017f1fb6f10934bf, 0x2dbd30a408e57ba1 }, // 51
  { 0x01327fc58da0f6ff, 0x57ca8d50071dfc81 }, // 52
  { 0x01ea6608e29b24cb, 0xbfaa7bb33e9660ce }, // 53
  { 0x018851a0b548ea3c, 0x99552fc298784d72 }, // 54
  { 0x0139dae6f76d8830, 0x7aaa8c9bad2d0ac1 }, // 55
  { 0x01f62b0b257c0d1a, 0x5dddadc5e1e1aacf }, // 56
  { 0x0191bc08eac9a415, 0x17e48b04b4b488a5 }, // 57
  { 0x0141633a556e1cdd, 0xacb6d59d5d5d3a1e }, // 58
  { 0x01011c2eaabe7d7e, 0x23c577b1177dc818 }, // 59
  { 0x019b604aaaca6263, 0x6c6f25e825960cf3 }, // 60
  { 0x014919d5556eb51c, 0x56bf518684780a5c }, // 61
  { 0x010747ddddf22a7d, 0x1232a79ed060084a }, // 62
  { 0x01a53fc9631d10c8, 0x1d1dd8fe1a334076 }, // 63
  { 0x0150ffd44f4a73d3, 0x4a7e4731ae8f66c5 }, // 64
  { 0x010d9976a5d52975, 0xd531d28e253f856a }, // 65
  { 0x01af5bf109550f22, 0xeeb61db03b98d577 }, // 66
  { 0x0159165a6ddda5b5, 0x8bc4e48cfc7a445f }, // 67
  { 0x011411e1f17e1e2a, 0xd6371d3d96c836b2 }, // 68
  { 0x01b9b6364f303044, 0x89f1c8628ad9f11d }, // 69
  { 0x01615e91d8f359d0, 0x6e5b06b53be18db1 }, // 70
  { 0x011ab20e472914a6, 0xbeaf3890fcb4715b }, // 71
  { 0x01c45016d841baa4, 0x644b8db4c7871bc4 }, // 72
  { 0x0169d9abe0349550, 0x503c715d6c6c1636 }, // 73
  { 0x01217aefe6907773, 0x73638de456bcde92 }, // 74
  { 0x01cf2b1970e72585, 0x856c163a2461641d }, // 75
  { 0x017288e1271f5137, 0x9df011c81d1ab67d }, // 76
  { 0x01286d80ec190dc6, 0x17f3416ce4155ecb }, // 77
  { 0x01da48ce468e7c70, 0x26520247d3556477 }, // 78
  { 0x017b6d71d20b96c0, 0x1ea801d30f778393 }, // 79
  { 0x012f8ac174d61233, 0x4bb99b0f3f92cfa9 }, // 80
  { 0x01e5aacf21568385, 0x45f5c4e532847f74 }, // 81
  { 0x018488a5b4453604, 0x37f7d0b75b9d32c3 }, // 82
  { 0x0136d3b7c36a919c, 0xf9930d5f7c7dc236 }, // 83
  { 0x01f152bf9f10e8fb, 0x28eb4898c72f9d23 }, // 84
  { 0x018ddbcc7f40ba62, 0x8722a07a38f2e41c }, // 85
  { 0x013e497065cd61e8, 0x6c1bb394fa5be9b0 }, // 86
  { 0x01fd424d6faf030d, 0x79c5ec2190930f80 }, // 87
  { 0x0197683df2f268d7, 0x949e56814075a600 }, // 88
  { 0x0145ecfe5bf520ac, 0x76e51201005e1e66 }, // 89
  { 0x0104bd984990e6f0, 0x5f1da800cd181852 }, // 90
  { 0x01a12f5a0f4e3e4d, 0x64fc400148268d50 }, // 91
  { 0x014dbf7b3f71cb71, 0x1d96999aa01ed773 }, // 92
  { 0x010aff95cc5b0927, 0x4adee1488018ac5c }, // 93
  { 0x01ab328946f80ea5, 0x4497ceda668de093 }, // 94
  { 0x0155c2076bf9a551, 0x03aca57b853e4d43 }, // 95
  { 0x01116805effaeaa7, 0x3623b7960431d769 }, // 96
  { 0x01b5733cb32b110b, 0x89d2bf566d1c8bda }, // 97
  { 0x015df5ca28ef40d6, 0x07dbcc452416d648 }, // 98
  { 0x0117f7d4ed8c33de, 0x6cafd69db678ab6d }, // 99
  { 0x01bff2ee48e052fd, 0x7ab2f0fc572778ae }, // 100
  { 0x01665bf1d3e6a8ca, 0xc88f273045b92d58 }, // 101
  { 0x011eaff4a98553d5, 0x6d3f528d04942447 }, // 102
  { 0x01cab3210f3bb955, 0x7b988414d4203a0b }, // 103
  { 0x016ef5b40c2fc777, 0x96139cdd76802e6f }, // 104
  { 0x0125915cd68c9f92, 0xde76171792002526 }, // 105
  { 0x01d5b561574765b7, 0xca568b58e999d509 }, // 106
  { 0x0177c44ddf6c515f, 0xd5120913ee14aa6e }, // 107
  { 0x012c9d0b1923744c, 0xaa74d40ff1aa21f1 }, // 108
  { 0x01e0fb44f50586e1, 0x10baece64f769cb5 }, // 109
  { 0x0180c903f7379f1a, 0x73c8bd850c5ee3c4 }, // 110
  { 0x0133d4032c2c7f48, 0x5ca0979da37f1c9d }, // 111
  { 0x01ec866b79e0cba6, 0xfa9a8c2f6bfe942e }, // 112
  { 0x018a0522c7e70952, 0x62153cf2bccba9bf }, // 113
  { 0x013b374f06526ddb, 0x81aa972897095499 }, // 114
  { 0x01f8587e7083e2f8, 0xcf775840f1a8875a }, // 115
  { 0x019379fec0698260, 0xa5f9136727ba05e2 }, // 116
  { 0x0142c7ff0054684d, 0x51940f85b9619e4e }, // 117
  { 0x01023998cd105371, 0x0e100c6afab47ea5 }, // 118
  { 0x019d28f47b4d524e, 0x7ce67a44c453fdd5 }, // 119
  { 0x014a8729fc3ddb71, 0xfd852e9d69dccb11 }, // 120
  { 0x01086c219697e2c1, 0x979dbee454b0a274 }, // 121
  { 0x01a71368f0f30468, 0xf295fe3a211a9d86 }, // 122
  { 0x015275ed8d8f36ba, 0x5bab31c81a7bb138 }, // 123
  { 0x010ec4be0ad8f895, 0x16228e39aec95a93 }, // 124
  { 0x01b13ac9aaf4c0ee, 0x89d0e38f7e0ef752 }, // 125
  { 0x015a956e225d6725, 0x3b0d82d931a592a8 }, // 126
  { 0x011544581b7dec1d, 0xc8d79be0f4847553 }, // 127
  { 0x01bba08cf8c979c9, 0x4158f967eda0bbb8 }, // 128
  { 0x0162e6d72d6dfb07, 0x677a611ff14d62fa }, // 129
  { 0x011bebdf578b2f39, 0x1f951a7ff43de8c8 }, // 130
  { 0x01c6463225ab7ec1, 0xcc21c3ffed2fdad9 }, // 131
  { 0x016b6b5b5155ff01, 0x701b0333242648ae }, // 132
  { 0x0122bc490dde659a, 0xc0159c28e9b83a25 }, // 133
  { 0x01d12d41afca3c2a, 0xccef604175f3903b }, // 134
  { 0x017424348ca1c9bb, 0xd725e69ac4c2d9c9 }, // 135
  { 0x0129b69070816e2f, 0xdf5185489d68ae3a }, // 136
  { 0x01dc574d80cf16b2, 0xfee8d540fbdab05d }, // 137
  { 0x017d12a4670c1228, 0xcbed77672fe226b1 }, // 138
  { 0x0130dbb6b8d674ed, 0x6ff12c528cb4ebc1 }, // 139
  { 0x01e7c5f127bd87e2, 0x4cb513b74787df9a }, // 140
  { 0x018637f41fcad31b, 0x7090dc929f9fe615 }, // 141
  { 0x01382cc34ca2427c, 0x5a0d7d42194cb811 }, // 142
  { 0x01f37ad21436d0c6, 0xf67bfb9cf5478ce8 }, // 143
  { 0x018f9574dcf8a705, 0x91fcc94a5dd2d720 }, // 144
  { 0x013faac3e3fa1f37, 0xa7fd6dd517dbdf4d }, // 145
  { 0x01ff779fd329cb8c, 0x3ffbe2ee8c92fee1 }, // 146
  { 0x01992c7fdc216fa3, 0x66631bf20a0f324e }, // 147
  { 0x014756ccb01abfb5, 0xeb827cc1a1a5c1d8 }, // 148
  { 0x0105df0a267bcc91, 0x8935309ae7b7ce46 }, // 149
  { 0x01a2fe76a3f9474f, 0x41eeb42b0c594a0a }, // 150
  { 0x014f31f8832dd2a5, 0xce58902270476e6f }, // 151
  { 0x010c27fa028b0eeb, 0x0b7a0ce859d2bebf }, // 152
  { 0x01ad0cc33744e4ab, 0x459014a6f61dfdfe }, // 153
  { 0x01573d68f903ea22, 0x9e0cdd525e7e64cb }, // 154
  { 0x011297872d9cbb4e, 0xe4d7177518651d70 }, // 155
  { 0x01b758d848fac54b, 0x07be8bee8d6e957f }, // 156
  { 0x015f7a46a0c89dd5, 0x9fcba3253df21132 }, // 157
  { 0x01192e9ee706e4aa, 0xe63c8284318e7428 }, // 158
  { 0x01c1e43171a4a111, 0x7060d0d3827d86a7 }, // 159
  { 0x0167e9c127b6e741, 0x26b3da42cecad21f }, // 160
  { 0x011fee341fc585cd, 0xb88fe1cf0bd574e6 }, // 161
  { 0x01ccb0536608d615, 0xf419694b462254a3 }, // 162
  { 0x01708d0f84d3de77, 0xf67abaa29e81dd4f }, // 163
  { 0x0126d73f9d764b93, 0x2b95621bb2017dd9 }, // 164
  { 0x01d7becc2f23ac1e, 0xac223692b668c95b }, // 165
  { 0x0179657025b6234b, 0xbce82ba891ed6de2 }, // 166
  { 0x012deac01e2b4f6f, 0xca53562074bdf182 }, // 167
  { 0x01e3113363787f19, 0x43b889cd87964f36 }, // 168
  { 0x018274291c6065ad, 0xcfc6d4a46c783f5f }, // 169
  { 0x013529ba7d19eaf1, 0x730576e9f06032b2 }, // 170
  { 0x01eea92a61c31182, 0x51a257dcb3cd1de9 }, // 171
  { 0x018bba884e35a79b, 0x7481dfe3c30a7e54 }, // 172
  { 0x013c9539d82aec7c, 0x5d34b31c9c086510 }, // 173
  { 0x01fa885c8d117a60, 0x95211e942cda3b4d }, // 174
  { 0x019539e3a40dfb80, 0x774db21023e1c90b }, // 175
  { 0x01442e4fb6719600, 0x5f715b401cb4a0d5 }, // 176
  { 0x0103583fc527ab33, 0x7f8de299b09080ab }, // 177
  { 0x019ef3993b72ab85, 0x98e304291a80cdde }, // 178
  { 0x014bf6142f8eef9e, 0x13e8d020e200a4b2 }, // 179
  { 0x010991a9bfa58c7e, 0x7653d9b3e80083c1 }, // 180
  { 0x01a8e90f9908e0ca, 0x56ec8f864000d2cf }, // 181
  { 0x0153eda614071a3b, 0x78bd3f9e999a423f }, // 182
  { 0x010ff151a99f482f, 0x93ca994bae1501cc }, // 183
  { 0x01b31bb5dc320d18, 0xec775bac49bb3613 }, // 184
  { 0x015c162b168e70e0, 0xbd2c4956a16291a9 }, // 185
  { 0x011678227871f3e6, 0xfdbd0778811ba7bb }, // 186
  { 0x01bd8d03f3e9863e, 0x62c80bf401c5d92a }, // 187
  { 0x016470cff6546b65, 0x1bd33cc3349e4755 }, // 188
  { 0x011d270cc51055ea, 0x7ca8fd68f6e505de }, // 189
  { 0x01c83e7ad4e6efdd, 0x94419574be3b3c96 }, // 190
  { 0x016cfec8aa52597e, 0x10347790982f63ab }, // 191
  { 0x0123ff06eea84798, 0x0cf6c60d468c4fbc }, // 192
  { 0x01d331a4b10d3f59, 0xae57a34870e07f93 }, // 193
  { 0x0175c1508da432ae, 0x2512e906c0b39943 }, // 194
  { 0x012b010d3e1cf558, 0x1da8ba6bcd5c7a9c }, // 195
  { 0x01de6815302e5559, 0xc90df712e22d90f9 }, // 196
  { 0x017eb9aa8cf1dde1, 0x6da4c5a8b4f140c7 }, // 197
  { 0x01322e220a5b17e7, 0x8aea37ba2a5a9a39 }, // 198
  { 0x01e9e369aa2b5972, 0x77dd25f6aa2a905b }, // 199
  { 0x0187e92154ef7ac1, 0xf97db7f888220d16 }, // 200
  { 0x0139874ddd8c6234, 0xc797c6606ce80a78 }, // 201
  { 0x01f5a549627a36ba, 0xd8f2d700ae4010c0 }, // 202
  { 0x0191510781fb5efb, 0xe0c2459a25000d66 }, // 203
  { 0x01410d9f9b2f7f2f, 0xe701d1481d99a452 }, // 204
  { 0x0100d7b2e28c65bf, 0xec017439b147b6a8 }, // 205
  { 0x019af2b7d0e0a2cc, 0xaccf205c4ed92440 }, // 206
  { 0x0148c22ca71a1bd6, 0xf0a5b37d0be0e9cd }, // 207
  { 0x010701bd527b4978, 0xc0848f973cb3ee3d }, // 208
  { 0x01a4cf9550c5425a, 0xcda0e5bec78649fb }, // 209
  { 0x0150a6110d6a9b7b, 0xd7b3eaff060507fc }, // 210
  { 0x010d51a73deee2c9, 0x795cbbff38040664 }, // 211
  { 0x01aee90b964b0475, 0x8efac665266cd706 }, // 212
  { 0x0158ba6fab6f36c4, 0x72623850eb8a459e }, // 213
  { 0x0113c85955f29236, 0xc1e82d0d893b6ae5 }, // 214
  { 0x01b9408eefea838a, 0xcfd9e1af41f8ab08 }, // 215
  { 0x016100725988693b, 0xd97b1af29b2d55a0 }, // 216
  { 0x011a66c1e139edc9, 0x7ac8e25baf5777b3 }, // 217
  { 0x01c3d79c9b8fe2db, 0xf7a7d092b2258c52 }, // 218
  { 0x0169794a160cb57c, 0xc61fda0ef4ead6a8 }, // 219
  { 0x01212dd4de709130, 0x9e7fe1a590bbdeed }, // 220
  { 0x01ceafbafd80e84d, 0xca6635d5b45fcb14 }, // 221
  { 0x0172262f3133ed0b, 0x0851c4aaf6b308dd }, // 222
  { 0x01281e8c275cbda2, 0x6d0e36ef2bc26d7e }, // 223
  { 0x01d9ca79d894629d, 0x7b49f17eac6a48c9 }, // 224
  { 0x017b08617a104ee4, 0x62a18dfef0550707 }, // 225
  { 0x012f39e794d9d8b6, 0xb54e0b3259dd9f39 }, // 226
  { 0x01e5297287c2f457, 0x887cdeb6f62f6528 }, // 227
  { 0x018421286c9bf6ac, 0x6d30b22bf825ea86 }, // 228
  { 0x013680ed23aff889, 0xf0f3c1bcc684bb9f }, // 229
  { 0x01f0ce4839198da9, 0x818602c7a4079297 }, // 230
  { 0x018d71d360e13e21, 0x346b356c83394213 }, // 231
  { 0x013df4a91a4dcb4d, 0xc388f78a029434dc }, // 232
  { 0x01fcbaa82a161216, 0x05a7f2766a86baf9 }, // 233
  { 0x0196fbb9bb44db44, 0xd153285ebb9efbfb }, // 234
  { 0x0145962e2f6a4903, 0xdaa8ed189618c995 }, // 235
  { 0x01047824f2bb6d9c, 0xaeed8a7a11ad6e11 }, // 236
  { 0x01a0c03b1df8af61, 0x17e27729b5e249b5 }, // 237
  { 0x014d6695b193bf80, 0xdfe85f549181d491 }, // 238
  { 0x010ab877c142ff9a, 0x4cb9e5dd4134aa0d }, // 239
  { 0x01aac0bf9b9e65c3, 0xadf63c9535211015 }, // 240
  { 0x015566ffafb1eb02, 0xf191ca10f74da678 }, // 241
  { 0x01111f32f2f4bc02, 0x5adb080d92a4852d }, // 242
  { 0x01b4feb7eb212cd0, 0x915e7348eaa0d514 }, // 243
  { 0x015d98932280f0a6, 0xdab1f5d3eee710dd }, // 244
  { 0x0117ad428200c085, 0x7bc1917658b8da4a }, // 245
  { 0x01bf7b9d9cce00d5, 0x92cf4f23c127c3aa }, // 246
  { 0x0165fc7e170b33de, 0x0f0c3f4fcdb96955 }, // 247
  { 0x011e6398126f5cb1, 0xa5a365d971612111 }, // 248
  { 0x01ca38f350b22de9, 0x09056fc24f01ce81 }, // 249
  { 0x016e93f5da2824ba, 0x6d9df301d8ce3ecd }, // 250
  { 0x0125432b14ecea2e, 0xbe17f59b13d8323e }, // 251
  { 0x01d53844ee47dd17, 0x968cbc2b52f38396 }, // 252
  { 0x0177603725064a79, 0x453d6355dbf602df }, // 253
  { 0x012c4cf8ea6b6ec7, 0x6a9782ab165e68b2 }, // 254
  { 0x01e07b27dd78b13f, 0x10f26aab56fd7450 }, // 255
  { 0x018062864ac6f432, 0x73f52222abfdf6a7 }, // 256
  { 0x01338205089f29c1, 0xf65db4e88997f885 }, // 257
  { 0x01ec033b40fea936, 0x56fc54a7428cc0d5 }, // 258
  { 0x01899c2f673220f8, 0x4596aa1f68709a44 }, // 259
  { 0x013ae3591f5b4d93, 0x6adeee7f86c07b6a }, // 260
  { 0x01f7d228322baf52, 0x4497e3ff3e00c576 }, // 261
  { 0x01930e868e89590e, 0x9d464fff64cd6ac5 }, // 262
  { 0x014272053ed4473e, 0xe4383fff83d7889e }, // 263
  { 0x0101f4d0ff1038ff, 0x1cf9cccc69793a18 }, // 264
  { 0x019cbae7fe805b31, 0xc7f6147a425b9026 }, // 265
  { 0x014a2f1ffecd15c1, 0x6cc4dd2e9b7c7351 }, // 266
  { 0x010825b3323dab01, 0x23d0b0f215fd290e }, // 267
  { 0x01a6a2b85062ab35, 0x061ab4b689950e7d }, // 268
  { 0x01521bc6a6b555c4, 0x04e22a2ba1440b97 }, // 269
  { 0x010e7c9eebc4449c, 0xd0b4ee894dd00946 }, // 270
  { 0x01b0c764ac6d3a94, 0x81217da87c800ed6 }, // 271
  { 0x015a391d56bdc876, 0xcdb46486ca000bde }, // 272
  { 0x0114fa7ddefe39f8, 0xa490506bd4ccd64b }, // 273
  { 0x01bb2a62fe638ff4, 0x3a8080ac87ae23ac }, // 274
  { 0x0162884f31e93ff6, 0x95339a239fbe82f0 }, // 275
  { 0x011ba03f5b20fff8, 0x775c7b4fb2fecf26 }, // 276
  { 0x01c5cd322b67fff3, 0xf22d92191e647ea3 }, // 277
  { 0x016b0a8e891ffff6, 0x5b57a81418506550 }, // 278
  { 0x01226ed86db3332b, 0x7c46201013738440 }, // 279
  { 0x01d0b15a491eb845, 0x93a366801f1f39ff }, // 280
  { 0x0173c115074bc69e, 0x0fb5eb99b27f6199 }, // 281
  { 0x0129674405d6387e, 0x72f7efae2865e7ae }, // 282
  { 0x01dbd86cd6238d97, 0x1e597f7d0d6fd916 }, // 283
  { 0x017cad23de82d7ac, 0x18479930d78cadab }, // 284
  { 0x01308a831868ac89, 0xad06142712d6f156 }, // 285
  { 0x01e74404f3daada9, 0x14d686a4eaf18223 }, // 286
  { 0x0185d003f6488aed, 0xaa453883ef279b4f }, // 287
  { 0x0137d99cc506d58a, 0xee9dc6cff28615d9 }, // 288
  { 0x01f2f5c7a1a488de, 0x4a960ae650d6895b }, // 289
  { 0x018f2b061aea0718, 0x3bab3beb73ded449 }, // 290
  { 0x013f559e7bee6c13, 0x62ef6322c318a9d4 }, // 291
  { 0x01feef63f97d79b8, 0x9e4bd1d13827761f }, // 292
};

static struct {
  suint_t const multiplier;
  suint_t const bound;
} const minverse[] = {
  { 0x0000000000000001, 0xffffffffffffffff },
  { 0xcccccccccccccccd, 0x3333333333333333 },
  { 0x8f5c28f5c28f5c29, 0x0a3d70a3d70a3d70 },
  { 0x1cac083126e978d5, 0x020c49ba5e353f7c },
  { 0xd288ce703afb7e91, 0x0068db8bac710cb2 },
  { 0x5d4e8fb00bcbe61d, 0x0014f8b588e368f0 },
  { 0x790fb65668c26139, 0x000431bde82d7b63 },
  { 0xe5032477ae8d46a5, 0x0000d6bf94d5e57a },
  { 0xc767074b22e90e21, 0x00002af31dc46118 },
  { 0x8e47ce423a2e9c6d, 0x0000089705f4136b },
  { 0x4fa7f60d3ed61f49, 0x000001b7cdfd9d7b },
  { 0x0fee64690c913975, 0x00000057f5ff85e5 },
  { 0x3662e0e1cf503eb1, 0x000000119799812d },
  { 0xa47a2cf9f6433fbd, 0x0000000384b84d09 },
  { 0x54186f653140a659, 0x00000000b424dc35 },
  { 0x7738164770402145, 0x0000000024075f3d },
  { 0xe4a4d1417cd9a041, 0x000000000734aca5 },
  { 0xc75429d9e5c5200d, 0x000000000170ef54 },
  { 0xc1773b91fac10669, 0x000000000049c977 },
  { 0x26b172506559ce15, 0x00000000000ec1e4 },
  { 0xd489e3a9addec2d1, 0x000000000002f394 },
  { 0x90e860bb892c8d5d, 0x000000000000971d },
  { 0x502e79bf1b6f4f79, 0x0000000000001e39 },
};

#ifdef __cplusplus
}
#endif

#define AMARU_IMPL amaru_ieee64
#include "../include/amaru_impl.h"

#undef AMARU_IMPL
#undef AMARU_SHIFT
#undef AMARU_USE_COMPACT_TBL
