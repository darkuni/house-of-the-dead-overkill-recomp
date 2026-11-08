#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800BEF94
void f_800BEF94(Ctx* __restrict c) {
  trace_call(0x800BEF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEF94
  c->r[0]=c->lr; // 800BEF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEFA0
  c->r[31]=c->r[3]|c->r[3]; // 800BEFA4
  c->lr=0x800BEFACu; f_800BE634(c); // 800BEFA8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BEFAC
  c->r[3]=0u+0x80420000u; // 800BEFB0
  c->r[3]=c->r[3]+0xFFFFA170u; // 800BEFB4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800BEFB8
  c->r[0]=c->r[0]|0x80000000u; // 800BEFBC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800BEFC0
  c->r[3]=c->r[31]|c->r[31]; // 800BEFC4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800BEFC8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800BEFCC
  c->ctr=c->r[12]; // 800BEFD0
  if (true) { c->lr=0x800BEFD8u; dispatch(c,c->ctr); } // 800BEFD4
  c->r[3]=c->r[31]|c->r[31]; // 800BEFD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEFDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEFE0
  c->lr=c->r[0]; // 800BEFE4
  c->r[1]=c->r[1]+0x00000010u; // 800BEFE8
  return; // 800BEFEC
}

// fn_800BEFF0
void f_800BEFF0(Ctx* __restrict c) {
  trace_call(0x800BEFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEFF0
  c->r[0]=c->lr; // 800BEFF4
  cmps(c,0,(int32_t)c->r[3],0); // 800BEFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEFFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF000
  c->r[30]=c->r[3]|c->r[3]; // 800BF004
  c->r[31]=c->r[4]|c->r[4]; // 800BF008
  if (crb(c,2)) { goto L_800BF028; } // 800BF00C
  c->r[4]=0u+0x00000000u; // 800BF010
  c->lr=0x800BF018u; f_802B1180(c); // 800BF014
  cmps(c,0,(int32_t)c->r[31],0); // 800BF018
  if (!crb(c,1)) { goto L_800BF028; } // 800BF01C
  c->r[3]=c->r[30]|c->r[30]; // 800BF020
  c->lr=0x800BF028u; f_80244DC0(c); // 800BF024
L_800BF028:;
  c->r[3]=c->r[30]|c->r[30]; // 800BF028
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF02C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF030
  c->lr=c->r[0]; // 800BF034
  c->r[1]=c->r[1]+0x00000010u; // 800BF038
  return; // 800BF03C
}

// fn_800BF040
void f_800BF040(Ctx* __restrict c) {
  trace_call(0x800BF040u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF040
  c->r[0]=c->lr; // 800BF044
  c->r[3]=0u+0x00000110u; // 800BF048
  c->r[4]=c->r[13]+0xFFFFAD9Bu; // 800BF04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF050
  c->r[5]=0u+0x00000000u; // 800BF054
  c->r[6]=0u+0x00001001u; // 800BF058
  c->lr=0x800BF060u; f_80244D20(c); // 800BF05C
  cmps(c,0,(int32_t)c->r[3],0); // 800BF060
  if (crb(c,2)) { goto L_800BF06C; } // 800BF064
  c->lr=0x800BF06Cu; f_800BEF94(c); // 800BF068
L_800BF06C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF06C
  c->lr=c->r[0]; // 800BF070
  c->r[1]=c->r[1]+0x00000010u; // 800BF074
  return; // 800BF078
}

// fn_800BF07C
void f_800BF07C(Ctx* __restrict c) {
  trace_call(0x800BF07Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF07C
  c->r[0]=c->lr; // 800BF080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF088
  c->r[31]=c->r[3]|c->r[3]; // 800BF08C
  c->lr=0x800BF094u; f_80244520(c); // 800BF090
  c->r[7]=c->r[3]|c->r[3]; // 800BF094
  c->r[9]=c->r[31]|c->r[31]; // 800BF098
  c->r[3]=0u+0x00000110u; // 800BF09C
  c->r[4]=c->r[13]+0xFFFFADA0u; // 800BF0A0
  c->r[5]=0u+0x00000000u; // 800BF0A4
  c->r[6]=0u+0x00002001u; // 800BF0A8
  c->r[8]=0u+0x00000000u; // 800BF0AC
  c->lr=0x800BF0B4u; f_80242DF0(c); // 800BF0B0
  c->r[4]=c->r[3]|c->r[3]; // 800BF0B4
  c->r[3]=0u+0x00000110u; // 800BF0B8
  c->r[5]=c->r[13]+0xFFFFADA5u; // 800BF0BC
  c->r[6]=0u+0x00000000u; // 800BF0C0
  c->r[7]=0u+0x00001001u; // 800BF0C4
  c->lr=0x800BF0CCu; f_80244DB0(c); // 800BF0C8
  cmps(c,0,(int32_t)c->r[3],0); // 800BF0CC
  if (crb(c,2)) { goto L_800BF0D8; } // 800BF0D0
  c->lr=0x800BF0D8u; f_800BEF94(c); // 800BF0D4
L_800BF0D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF0D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF0DC
  c->lr=c->r[0]; // 800BF0E0
  c->r[1]=c->r[1]+0x00000010u; // 800BF0E4
  return; // 800BF0E8
}

// fn_800BF0EC
void f_800BF0EC(Ctx* __restrict c) {
  trace_call(0x800BF0ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF0EC
  c->r[0]=c->lr; // 800BF0F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF0F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF0F8
  c->r[31]=c->r[3]|c->r[3]; // 800BF0FC
  c->lr=0x800BF104u; f_802B1168(c); // 800BF100
  c->r[7]=0u+0x80420000u; // 800BF104
  c->r[5]=0u+0x80410000u; // 800BF108
  c->r[6]=0u+0x00000000u; // 800BF10C
  c->r[4]=0u+0x8E700000u; // 800BF110
  c->r[3]=0u+0xC1DF0000u; // 800BF114
  c->r[7]=c->r[7]+0xFFFFA134u; // 800BF118
  c->r[0]=c->r[3]+0xFFFFC0A4u; // 800BF11C
  c->r[5]=c->r[5]+0xFFFFCCBEu; // 800BF120
  c->r[4]=c->r[4]+0x0000326Cu; // 800BF124
  W32(c->r[31]+0x00000018u,c->r[7]); // 800BF128
  c->r[3]=c->r[31]|c->r[31]; // 800BF12C
  W32(c->r[31]+0x000000F4u,c->r[6]); // 800BF130
  W32(c->r[31]+0x00000000u,c->r[5]); // 800BF134
  W32(c->r[31]+0x00000008u,c->r[6]); // 800BF138
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800BF13C
  W32(c->r[31]+0x00000010u,c->r[6]); // 800BF140
  W32(c->r[31]+0x00000004u,c->r[0]); // 800BF144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF148
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF14C
  c->lr=c->r[0]; // 800BF150
  c->r[1]=c->r[1]+0x00000010u; // 800BF154
  return; // 800BF158
}

// fn_800BF15C
void f_800BF15C(Ctx* __restrict c) {
  trace_call(0x800BF15Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF15C
  c->r[0]=c->lr; // 800BF160
  cmps(c,0,(int32_t)c->r[4],0); // 800BF164
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF168
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF16C
  c->r[30]=c->r[3]|c->r[3]; // 800BF170
  c->r[31]=c->r[4]|c->r[4]; // 800BF174
  if (crb(c,2)) { goto L_800BF1CC; } // 800BF178
  c->r[3]=c->r[31]|c->r[31]; // 800BF17C
  c->lr=0x800BF184u; f_80244520(c); // 800BF180
  c->r[7]=c->r[3]|c->r[3]; // 800BF184
  c->r[9]=c->r[31]|c->r[31]; // 800BF188
  c->r[3]=0u+0x000000F8u; // 800BF18C
  c->r[4]=c->r[13]+0xFFFFADAAu; // 800BF190
  c->r[5]=0u+0x00000000u; // 800BF194
  c->r[6]=0u+0x00002001u; // 800BF198
  c->r[8]=0u+0x00000000u; // 800BF19C
  c->lr=0x800BF1A4u; f_80242DF0(c); // 800BF1A0
  c->r[4]=c->r[3]|c->r[3]; // 800BF1A4
  c->r[3]=0u+0x000000F8u; // 800BF1A8
  c->r[5]=c->r[13]+0xFFFFADAFu; // 800BF1AC
  c->r[6]=0u+0x00000000u; // 800BF1B0
  c->r[7]=0u+0x00001001u; // 800BF1B4
  c->lr=0x800BF1BCu; f_80244DB0(c); // 800BF1B8
  cmps(c,0,(int32_t)c->r[3],0); // 800BF1BC
  if (crb(c,2)) { goto L_800BF1EC; } // 800BF1C0
  c->lr=0x800BF1C8u; f_800BF0EC(c); // 800BF1C4
  goto L_800BF1EC; // 800BF1C8
L_800BF1CC:;
  c->r[3]=0u+0x000000F8u; // 800BF1CC
  c->r[4]=c->r[13]+0xFFFFADB4u; // 800BF1D0
  c->r[5]=0u+0x00000000u; // 800BF1D4
  c->r[6]=0u+0x00001001u; // 800BF1D8
  c->lr=0x800BF1E0u; f_80244D20(c); // 800BF1DC
  cmps(c,0,(int32_t)c->r[3],0); // 800BF1E0
  if (crb(c,2)) { goto L_800BF1EC; } // 800BF1E4
  c->lr=0x800BF1ECu; f_800BF0EC(c); // 800BF1E8
L_800BF1EC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800BF1EC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800BF1F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF1F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF1F8
  c->lr=c->r[0]; // 800BF1FC
  c->r[1]=c->r[1]+0x00000010u; // 800BF200
  return; // 800BF204
}

// fn_800BF208
void f_800BF208(Ctx* __restrict c) {
  trace_call(0x800BF208u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF208
  c->r[0]=c->lr; // 800BF20C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF210
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF214
  c->r[31]=c->r[4]|c->r[4]; // 800BF218
  c->r[30]=c->r[3]|c->r[3]; // 800BF21C
  c->r[4]=0u+0x00000000u; // 800BF220
  c->r[3]=c->r[31]|c->r[31]; // 800BF224
  c->lr=0x800BF22Cu; f_8030BE30(c); // 800BF228
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800BF22C
  c->r[3]=c->r[31]|c->r[31]; // 800BF230
  c->lr=0x800BF238u; f_8030BD1C(c); // 800BF234
  W32(c->r[30]+0x00000020u,c->r[3]); // 800BF238
  c->r[3]=c->r[31]|c->r[31]; // 800BF23C
  c->r[4]=0u+0x00000000u; // 800BF240
  c->lr=0x800BF248u; f_8030BE30(c); // 800BF244
  W32(c->r[30]+0x00000028u,c->r[3]); // 800BF248
  c->r[3]=c->r[31]|c->r[31]; // 800BF24C
  c->lr=0x800BF254u; f_8030BD1C(c); // 800BF250
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800BF254
  c->r[3]=c->r[31]|c->r[31]; // 800BF258
  c->r[4]=0u+0x00000000u; // 800BF25C
  c->lr=0x800BF264u; f_8030BE30(c); // 800BF260
  W32(c->r[30]+0x00000034u,c->r[3]); // 800BF264
  c->r[3]=c->r[31]|c->r[31]; // 800BF268
  c->lr=0x800BF270u; f_8030BD1C(c); // 800BF26C
  W32(c->r[30]+0x00000038u,c->r[3]); // 800BF270
  c->r[3]=c->r[31]|c->r[31]; // 800BF274
  c->r[4]=0u+0x00000000u; // 800BF278
  c->lr=0x800BF280u; f_8030BE30(c); // 800BF27C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800BF280
  c->r[3]=c->r[31]|c->r[31]; // 800BF284
  c->lr=0x800BF28Cu; f_8030BD1C(c); // 800BF288
  W32(c->r[30]+0x00000044u,c->r[3]); // 800BF28C
  c->r[3]=c->r[31]|c->r[31]; // 800BF290
  c->r[4]=0u+0x00000000u; // 800BF294
  c->lr=0x800BF29Cu; f_8030BE30(c); // 800BF298
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800BF29C
  c->r[3]=c->r[31]|c->r[31]; // 800BF2A0
  c->lr=0x800BF2A8u; f_8030BD1C(c); // 800BF2A4
  W32(c->r[30]+0x00000050u,c->r[3]); // 800BF2A8
  c->r[3]=c->r[31]|c->r[31]; // 800BF2AC
  c->r[4]=0u+0x00000000u; // 800BF2B0
  c->lr=0x800BF2B8u; f_8030BE30(c); // 800BF2B4
  W32(c->r[30]+0x00000058u,c->r[3]); // 800BF2B8
  c->r[3]=c->r[31]|c->r[31]; // 800BF2BC
  c->lr=0x800BF2C4u; f_8030BD1C(c); // 800BF2C0
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800BF2C4
  c->r[3]=c->r[31]|c->r[31]; // 800BF2C8
  c->r[4]=0u+0x00000000u; // 800BF2CC
  c->lr=0x800BF2D4u; f_8030BE30(c); // 800BF2D0
  W32(c->r[30]+0x00000064u,c->r[3]); // 800BF2D4
  c->r[3]=c->r[31]|c->r[31]; // 800BF2D8
  c->lr=0x800BF2E0u; f_8030BD1C(c); // 800BF2DC
  W32(c->r[30]+0x00000068u,c->r[3]); // 800BF2E0
  c->r[3]=c->r[31]|c->r[31]; // 800BF2E4
  c->r[4]=0u+0x00000000u; // 800BF2E8
  c->lr=0x800BF2F0u; f_8030BE30(c); // 800BF2EC
  W32(c->r[30]+0x00000070u,c->r[3]); // 800BF2F0
  c->r[3]=c->r[31]|c->r[31]; // 800BF2F4
  c->lr=0x800BF2FCu; f_8030BD1C(c); // 800BF2F8
  W32(c->r[30]+0x00000074u,c->r[3]); // 800BF2FC
  c->r[3]=c->r[31]|c->r[31]; // 800BF300
  c->r[4]=0u+0x00000000u; // 800BF304
  c->lr=0x800BF30Cu; f_8030BE30(c); // 800BF308
  W32(c->r[30]+0x0000007Cu,c->r[3]); // 800BF30C
  c->r[3]=c->r[31]|c->r[31]; // 800BF310
  c->lr=0x800BF318u; f_8030BD1C(c); // 800BF314
  W32(c->r[30]+0x00000080u,c->r[3]); // 800BF318
  c->r[3]=c->r[31]|c->r[31]; // 800BF31C
  c->r[4]=0u+0x00000000u; // 800BF320
  c->lr=0x800BF328u; f_8030BE30(c); // 800BF324
  W32(c->r[30]+0x00000088u,c->r[3]); // 800BF328
  c->r[3]=c->r[31]|c->r[31]; // 800BF32C
  c->lr=0x800BF334u; f_8030BD1C(c); // 800BF330
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800BF334
  c->r[3]=c->r[31]|c->r[31]; // 800BF338
  c->r[4]=0u+0x00000000u; // 800BF33C
  c->lr=0x800BF344u; f_8030BE30(c); // 800BF340
  W32(c->r[30]+0x00000094u,c->r[3]); // 800BF344
  c->r[3]=c->r[31]|c->r[31]; // 800BF348
  c->lr=0x800BF350u; f_8030BD1C(c); // 800BF34C
  W32(c->r[30]+0x00000098u,c->r[3]); // 800BF350
  c->r[3]=c->r[31]|c->r[31]; // 800BF354
  c->r[4]=0u+0x00000000u; // 800BF358
  c->lr=0x800BF360u; f_8030BE30(c); // 800BF35C
  W32(c->r[30]+0x000000A0u,c->r[3]); // 800BF360
  c->r[3]=c->r[31]|c->r[31]; // 800BF364
  c->lr=0x800BF36Cu; f_8030BD1C(c); // 800BF368
  W32(c->r[30]+0x000000A4u,c->r[3]); // 800BF36C
  c->r[3]=c->r[31]|c->r[31]; // 800BF370
  c->r[4]=0u+0x00000000u; // 800BF374
  c->lr=0x800BF37Cu; f_8030BE30(c); // 800BF378
  W32(c->r[30]+0x000000ACu,c->r[3]); // 800BF37C
  c->r[3]=c->r[31]|c->r[31]; // 800BF380
  c->lr=0x800BF388u; f_8030BD1C(c); // 800BF384
  W32(c->r[30]+0x000000B0u,c->r[3]); // 800BF388
  c->r[3]=c->r[31]|c->r[31]; // 800BF38C
  c->r[4]=0u+0x00000000u; // 800BF390
  c->lr=0x800BF398u; f_8030BE30(c); // 800BF394
  W32(c->r[30]+0x000000B8u,c->r[3]); // 800BF398
  c->r[3]=c->r[31]|c->r[31]; // 800BF39C
  c->lr=0x800BF3A4u; f_8030BD1C(c); // 800BF3A0
  W32(c->r[30]+0x000000BCu,c->r[3]); // 800BF3A4
  c->r[3]=c->r[31]|c->r[31]; // 800BF3A8
  c->r[4]=0u+0x00000000u; // 800BF3AC
  c->lr=0x800BF3B4u; f_8030BE30(c); // 800BF3B0
  W32(c->r[30]+0x000000C4u,c->r[3]); // 800BF3B4
  c->r[3]=c->r[31]|c->r[31]; // 800BF3B8
  c->lr=0x800BF3C0u; f_8030BD1C(c); // 800BF3BC
  W32(c->r[30]+0x000000C8u,c->r[3]); // 800BF3C0
  c->r[3]=c->r[31]|c->r[31]; // 800BF3C4
  c->r[4]=0u+0x00000000u; // 800BF3C8
  c->lr=0x800BF3D0u; f_8030BE30(c); // 800BF3CC
  W32(c->r[30]+0x000000D0u,c->r[3]); // 800BF3D0
  c->r[3]=c->r[31]|c->r[31]; // 800BF3D4
  c->lr=0x800BF3DCu; f_8030BD1C(c); // 800BF3D8
  W32(c->r[30]+0x000000D4u,c->r[3]); // 800BF3DC
  c->r[3]=c->r[31]|c->r[31]; // 800BF3E0
  c->r[4]=0u+0x00000000u; // 800BF3E4
  c->lr=0x800BF3ECu; f_8030BE30(c); // 800BF3E8
  W32(c->r[30]+0x000000DCu,c->r[3]); // 800BF3EC
  c->r[3]=c->r[31]|c->r[31]; // 800BF3F0
  c->lr=0x800BF3F8u; f_8030BD1C(c); // 800BF3F4
  W32(c->r[30]+0x000000E0u,c->r[3]); // 800BF3F8
  c->r[3]=c->r[31]|c->r[31]; // 800BF3FC
  c->r[4]=0u+0x00000000u; // 800BF400
  c->lr=0x800BF408u; f_8030BE30(c); // 800BF404
  W32(c->r[30]+0x000000E8u,c->r[3]); // 800BF408
  c->r[0]=0u+0x00000000u; // 800BF40C
  c->r[3]=c->r[31]|c->r[31]; // 800BF410
  W32(c->r[30]+0x000000ECu,c->r[0]); // 800BF414
  c->lr=0x800BF41Cu; f_8030BD1C(c); // 800BF418
  W32(c->r[30]+0x000000F0u,c->r[3]); // 800BF41C
  c->r[3]=0u+0x00000000u; // 800BF420
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF424
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF428
  c->lr=c->r[0]; // 800BF42C
  c->r[1]=c->r[1]+0x00000010u; // 800BF430
  return; // 800BF434
}

// fn_800BF438
void f_800BF438(Ctx* __restrict c) {
  trace_call(0x800BF438u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF438
  c->r[0]=c->lr; // 800BF43C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BF440
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF444
  c->r[27]=c->r[3]|c->r[3]; // 800BF448
  c->r[28]=c->r[4]|c->r[4]; // 800BF44C
  c->r[29]=c->r[5]|c->r[5]; // 800BF450
  c->r[30]=c->r[6]|c->r[6]; // 800BF454
  c->r[7]=R32(c->r[3]+0x000000F4u); // 800BF458
  cmps(c,0,(int32_t)c->r[7],0); // 800BF45C
  if (!crb(c,0)) { goto L_800BF470; } // 800BF460
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800BF464
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800BF468
  goto L_800BF480; // 800BF46C
L_800BF470:;
  c->r[0]=c->r[7]+0x00000001u; // 800BF470
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800BF474
  cmps(c,0,(int32_t)c->r[0],1); // 800BF478
  if (crb(c,1)) { goto L_800BF53C; } // 800BF47C
L_800BF480:;
  c->r[3]=c->r[27]|c->r[27]; // 800BF480
  c->r[4]=c->r[28]|c->r[28]; // 800BF484
  c->r[5]=c->r[29]|c->r[29]; // 800BF488
  c->r[6]=c->r[30]|c->r[30]; // 800BF48C
  c->lr=0x800BF494u; f_802B11C0(c); // 800BF490
  c->r[4]=R32(c->r[27]+0x000000E8u); // 800BF494
  cmps(c,0,(int32_t)c->r[4],0); // 800BF498
  if (crb(c,2)) { goto L_800BF53C; } // 800BF49C
  c->r[0]=0u+0x00000000u; // 800BF4A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BF4A4
  c->r[6]=c->r[28]|c->r[28]; // 800BF4A8
  c->r[7]=c->r[29]|c->r[29]; // 800BF4AC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800BF4B0
  c->r[8]=c->r[30]|c->r[30]; // 800BF4B4
  c->r[9]=R32(c->r[27]+0x000000F0u); // 800BF4B8
  c->r[5]=0u+0x00000004u; // 800BF4BC
  c->r[10]=0u+0x00000001u; // 800BF4C0
  c->lr=0x800BF4C8u; f_80281A84(c); // 800BF4C4
  cmps(c,0,(int32_t)c->r[3],0); // 800BF4C8
  W32(c->r[27]+0x000000ECu,c->r[3]); // 800BF4CC
  if (crb(c,2)) { goto L_800BF4DC; } // 800BF4D0
  c->lr=0x800BF4D8u; f_80295B6C(c); // 800BF4D4
  goto L_800BF53C; // 800BF4D8
L_800BF4DC:;
  c->r[3]=R32(c->r[27]+0x000000F0u); // 800BF4DC
  c->r[4]=c->r[30]|c->r[30]; // 800BF4E0
  c->r[5]=c->r[29]|c->r[29]; // 800BF4E4
  c->lr=0x800BF4ECu; f_802C0F98(c); // 800BF4E8
  c->r[31]=c->r[3]|c->r[3]; // 800BF4EC
  c->r[3]=0u+0x00000044u; // 800BF4F0
  c->r[4]=c->r[13]+0xFFFFADB9u; // 800BF4F4
  c->r[5]=0u+0x00000000u; // 800BF4F8
  c->r[6]=0u+0x00001001u; // 800BF4FC
  c->lr=0x800BF504u; f_80244D20(c); // 800BF500
  cmps(c,0,(int32_t)c->r[3],0); // 800BF504
  if (crb(c,2)) { goto L_800BF518; } // 800BF508
  c->r[5]=R32(c->r[27]+0x000000E8u); // 800BF50C
  c->r[4]=c->r[31]|c->r[31]; // 800BF510
  c->lr=0x800BF518u; f_802972CC(c); // 800BF514
L_800BF518:;
  W32(c->r[27]+0x000000ECu,c->r[3]); // 800BF518
  c->r[4]=c->r[28]|c->r[28]; // 800BF51C
  c->r[7]=R32(c->r[27]+0x000000F0u); // 800BF520
  c->r[5]=c->r[29]|c->r[29]; // 800BF524
  c->r[6]=c->r[30]|c->r[30]; // 800BF528
  c->r[8]=0u+0x00000001u; // 800BF52C
  c->r[9]=0u+0x00000000u; // 800BF530
  c->lr=0x800BF538u; f_8027FFF4(c); // 800BF534
  W32(c->r[27]+0x000000ECu,c->r[3]); // 800BF538
L_800BF53C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF53C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BF540
  c->lr=c->r[0]; // 800BF544
  c->r[1]=c->r[1]+0x00000030u; // 800BF548
  return; // 800BF54C
}

// fn_800BF550
void f_800BF550(Ctx* __restrict c) {
  trace_call(0x800BF550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF550
  c->r[0]=c->lr; // 800BF554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF55C
  c->r[31]=c->r[3]|c->r[3]; // 800BF560
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800BF564
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800BF568
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800BF56C
  if (!crb(c,2)) { goto L_800BF590; } // 800BF570
  c->lr=0x800BF578u; f_802B11D0(c); // 800BF574
  c->r[3]=R32(c->r[31]+0x000000ECu); // 800BF578
  cmps(c,0,(int32_t)c->r[3],0); // 800BF57C
  if (crb(c,2)) { goto L_800BF590; } // 800BF580
  c->lr=0x800BF588u; f_80295B7C(c); // 800BF584
  c->r[0]=0u+0x00000000u; // 800BF588
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800BF58C
L_800BF590:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF590
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF594
  c->lr=c->r[0]; // 800BF598
  c->r[1]=c->r[1]+0x00000010u; // 800BF59C
  return; // 800BF5A0
}

// fn_800BF5A4
void f_800BF5A4(Ctx* __restrict c) {
  trace_call(0x800BF5A4u);
  return; // 800BF5A4
}

// fn_800BF5A8
void f_800BF5A8(Ctx* __restrict c) {
  trace_call(0x800BF5A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF5A8
  c->r[0]=c->lr; // 800BF5AC
  cmps(c,0,(int32_t)c->r[6],0); // 800BF5B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF5B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF5B8
  c->r[30]=c->r[3]|c->r[3]; // 800BF5BC
  c->r[31]=c->r[5]|c->r[5]; // 800BF5C0
  if (!crb(c,2)) { goto L_800BF760; } // 800BF5C4
  c->r[0]=R32(c->r[3]+0x00000020u); // 800BF5C8
  cmps(c,0,(int32_t)c->r[0],7); // 800BF5CC
  if (!crb(c,0)) { goto L_800BF5E0; } // 800BF5D0
  c->r[4]=c->r[31]|c->r[31]; // 800BF5D4
  c->r[3]=c->r[3]+0x0000001Cu; // 800BF5D8
  c->lr=0x800BF5E0u; f_8003A994(c); // 800BF5DC
L_800BF5E0:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800BF5E0
  cmps(c,0,(int32_t)c->r[0],7); // 800BF5E4
  if (!crb(c,0)) { goto L_800BF5F8; } // 800BF5E8
  c->r[4]=c->r[31]|c->r[31]; // 800BF5EC
  c->r[3]=c->r[30]+0x00000028u; // 800BF5F0
  c->lr=0x800BF5F8u; f_8003A994(c); // 800BF5F4
L_800BF5F8:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 800BF5F8
  cmps(c,0,(int32_t)c->r[0],7); // 800BF5FC
  if (!crb(c,0)) { goto L_800BF610; } // 800BF600
  c->r[4]=c->r[31]|c->r[31]; // 800BF604
  c->r[3]=c->r[30]+0x00000034u; // 800BF608
  c->lr=0x800BF610u; f_8003A994(c); // 800BF60C
L_800BF610:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 800BF610
  cmps(c,0,(int32_t)c->r[0],7); // 800BF614
  if (!crb(c,0)) { goto L_800BF628; } // 800BF618
  c->r[4]=c->r[31]|c->r[31]; // 800BF61C
  c->r[3]=c->r[30]+0x00000040u; // 800BF620
  c->lr=0x800BF628u; f_8003A994(c); // 800BF624
L_800BF628:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 800BF628
  cmps(c,0,(int32_t)c->r[0],7); // 800BF62C
  if (!crb(c,0)) { goto L_800BF640; } // 800BF630
  c->r[4]=c->r[31]|c->r[31]; // 800BF634
  c->r[3]=c->r[30]+0x0000004Cu; // 800BF638
  c->lr=0x800BF640u; f_8003A994(c); // 800BF63C
L_800BF640:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 800BF640
  cmps(c,0,(int32_t)c->r[0],7); // 800BF644
  if (!crb(c,0)) { goto L_800BF658; } // 800BF648
  c->r[4]=c->r[31]|c->r[31]; // 800BF64C
  c->r[3]=c->r[30]+0x00000058u; // 800BF650
  c->lr=0x800BF658u; f_8003A994(c); // 800BF654
L_800BF658:;
  c->r[0]=R32(c->r[30]+0x00000068u); // 800BF658
  cmps(c,0,(int32_t)c->r[0],7); // 800BF65C
  if (!crb(c,0)) { goto L_800BF670; } // 800BF660
  c->r[4]=c->r[31]|c->r[31]; // 800BF664
  c->r[3]=c->r[30]+0x00000064u; // 800BF668
  c->lr=0x800BF670u; f_8003A994(c); // 800BF66C
L_800BF670:;
  c->r[0]=R32(c->r[30]+0x00000074u); // 800BF670
  cmps(c,0,(int32_t)c->r[0],7); // 800BF674
  if (!crb(c,0)) { goto L_800BF688; } // 800BF678
  c->r[4]=c->r[31]|c->r[31]; // 800BF67C
  c->r[3]=c->r[30]+0x00000070u; // 800BF680
  c->lr=0x800BF688u; f_8003A994(c); // 800BF684
L_800BF688:;
  c->r[0]=R32(c->r[30]+0x00000080u); // 800BF688
  cmps(c,0,(int32_t)c->r[0],7); // 800BF68C
  if (!crb(c,0)) { goto L_800BF6A0; } // 800BF690
  c->r[4]=c->r[31]|c->r[31]; // 800BF694
  c->r[3]=c->r[30]+0x0000007Cu; // 800BF698
  c->lr=0x800BF6A0u; f_8003A994(c); // 800BF69C
L_800BF6A0:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 800BF6A0
  cmps(c,0,(int32_t)c->r[0],7); // 800BF6A4
  if (!crb(c,0)) { goto L_800BF6B8; } // 800BF6A8
  c->r[4]=c->r[31]|c->r[31]; // 800BF6AC
  c->r[3]=c->r[30]+0x00000088u; // 800BF6B0
  c->lr=0x800BF6B8u; f_8003A994(c); // 800BF6B4
L_800BF6B8:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 800BF6B8
  cmps(c,0,(int32_t)c->r[0],7); // 800BF6BC
  if (!crb(c,0)) { goto L_800BF6D0; } // 800BF6C0
  c->r[4]=c->r[31]|c->r[31]; // 800BF6C4
  c->r[3]=c->r[30]+0x00000094u; // 800BF6C8
  c->lr=0x800BF6D0u; f_8003A994(c); // 800BF6CC
L_800BF6D0:;
  c->r[0]=R32(c->r[30]+0x000000A4u); // 800BF6D0
  cmps(c,0,(int32_t)c->r[0],7); // 800BF6D4
  if (!crb(c,0)) { goto L_800BF6E8; } // 800BF6D8
  c->r[4]=c->r[31]|c->r[31]; // 800BF6DC
  c->r[3]=c->r[30]+0x000000A0u; // 800BF6E0
  c->lr=0x800BF6E8u; f_8003A994(c); // 800BF6E4
L_800BF6E8:;
  c->r[0]=R32(c->r[30]+0x000000B0u); // 800BF6E8
  cmps(c,0,(int32_t)c->r[0],7); // 800BF6EC
  if (!crb(c,0)) { goto L_800BF700; } // 800BF6F0
  c->r[4]=c->r[31]|c->r[31]; // 800BF6F4
  c->r[3]=c->r[30]+0x000000ACu; // 800BF6F8
  c->lr=0x800BF700u; f_8003A994(c); // 800BF6FC
L_800BF700:;
  c->r[0]=R32(c->r[30]+0x000000BCu); // 800BF700
  cmps(c,0,(int32_t)c->r[0],7); // 800BF704
  if (!crb(c,0)) { goto L_800BF718; } // 800BF708
  c->r[4]=c->r[31]|c->r[31]; // 800BF70C
  c->r[3]=c->r[30]+0x000000B8u; // 800BF710
  c->lr=0x800BF718u; f_8003A994(c); // 800BF714
L_800BF718:;
  c->r[0]=R32(c->r[30]+0x000000C8u); // 800BF718
  cmps(c,0,(int32_t)c->r[0],7); // 800BF71C
  if (!crb(c,0)) { goto L_800BF730; } // 800BF720
  c->r[4]=c->r[31]|c->r[31]; // 800BF724
  c->r[3]=c->r[30]+0x000000C4u; // 800BF728
  c->lr=0x800BF730u; f_8003A994(c); // 800BF72C
L_800BF730:;
  c->r[0]=R32(c->r[30]+0x000000D4u); // 800BF730
  cmps(c,0,(int32_t)c->r[0],7); // 800BF734
  if (!crb(c,0)) { goto L_800BF748; } // 800BF738
  c->r[4]=c->r[31]|c->r[31]; // 800BF73C
  c->r[3]=c->r[30]+0x000000D0u; // 800BF740
  c->lr=0x800BF748u; f_8003A994(c); // 800BF744
L_800BF748:;
  c->r[0]=R32(c->r[30]+0x000000E0u); // 800BF748
  cmps(c,0,(int32_t)c->r[0],7); // 800BF74C
  if (!crb(c,0)) { goto L_800BF760; } // 800BF750
  c->r[4]=c->r[31]|c->r[31]; // 800BF754
  c->r[3]=c->r[30]+0x000000DCu; // 800BF758
  c->lr=0x800BF760u; f_8003A994(c); // 800BF75C
L_800BF760:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF760
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF764
  c->lr=c->r[0]; // 800BF768
  c->r[1]=c->r[1]+0x00000010u; // 800BF76C
  return; // 800BF770
}

// fn_800BF774
void f_800BF774(Ctx* __restrict c) {
  trace_call(0x800BF774u);
  c->r[4]=0u+0x00200000u; // 800BF774
  c->r[5]=0u+0x00000000u; // 800BF778
  c->r[4]=c->r[4]+0xFFFFA816u; // 800BF77C
  c->r[0]=0u+0x00000004u; // 800BF780
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 800BF784
  W32(c->r[3]+0x00000024u,c->r[5]); // 800BF788
  W32(c->r[3]+0x00000020u,c->r[5]); // 800BF78C
  W32(c->r[3]+0x00000028u,c->r[5]); // 800BF790
  W32(c->r[3]+0x00000030u,c->r[5]); // 800BF794
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 800BF798
  W32(c->r[3]+0x00000034u,c->r[5]); // 800BF79C
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 800BF7A0
  W32(c->r[3]+0x00000038u,c->r[5]); // 800BF7A4
  W32(c->r[3]+0x00000040u,c->r[5]); // 800BF7A8
  W32(c->r[3]+0x00000048u,c->r[5]); // 800BF7AC
  W32(c->r[3]+0x00000044u,c->r[5]); // 800BF7B0
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 800BF7B4
  W32(c->r[3]+0x00000054u,c->r[5]); // 800BF7B8
  W32(c->r[3]+0x00000050u,c->r[5]); // 800BF7BC
  W32(c->r[3]+0x00000058u,c->r[5]); // 800BF7C0
  W32(c->r[3]+0x00000060u,c->r[5]); // 800BF7C4
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 800BF7C8
  W32(c->r[3]+0x00000064u,c->r[5]); // 800BF7CC
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 800BF7D0
  W32(c->r[3]+0x00000068u,c->r[5]); // 800BF7D4
  W32(c->r[3]+0x00000070u,c->r[5]); // 800BF7D8
  W32(c->r[3]+0x00000078u,c->r[5]); // 800BF7DC
  W32(c->r[3]+0x00000074u,c->r[5]); // 800BF7E0
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800BF7E4
  W32(c->r[3]+0x00000084u,c->r[5]); // 800BF7E8
  W32(c->r[3]+0x00000080u,c->r[5]); // 800BF7EC
  W32(c->r[3]+0x00000088u,c->r[5]); // 800BF7F0
  W32(c->r[3]+0x00000090u,c->r[5]); // 800BF7F4
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 800BF7F8
  W32(c->r[3]+0x00000094u,c->r[5]); // 800BF7FC
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 800BF800
  W32(c->r[3]+0x00000098u,c->r[5]); // 800BF804
  W32(c->r[3]+0x000000A0u,c->r[5]); // 800BF808
  W32(c->r[3]+0x000000A8u,c->r[5]); // 800BF80C
  W32(c->r[3]+0x000000A4u,c->r[5]); // 800BF810
  W32(c->r[3]+0x000000ACu,c->r[5]); // 800BF814
  W32(c->r[3]+0x000000B4u,c->r[5]); // 800BF818
  W32(c->r[3]+0x000000B0u,c->r[5]); // 800BF81C
  W32(c->r[3]+0x000000B8u,c->r[5]); // 800BF820
  W32(c->r[3]+0x000000C0u,c->r[5]); // 800BF824
  W32(c->r[3]+0x000000BCu,c->r[5]); // 800BF828
  W32(c->r[3]+0x000000C4u,c->r[5]); // 800BF82C
  W32(c->r[3]+0x000000CCu,c->r[5]); // 800BF830
  W32(c->r[3]+0x000000C8u,c->r[5]); // 800BF834
  W32(c->r[3]+0x000000D0u,c->r[5]); // 800BF838
  W32(c->r[3]+0x000000D8u,c->r[5]); // 800BF83C
  W32(c->r[3]+0x000000D4u,c->r[5]); // 800BF840
  W32(c->r[3]+0x000000DCu,c->r[5]); // 800BF844
  W32(c->r[3]+0x000000E4u,c->r[5]); // 800BF848
  W32(c->r[3]+0x000000E0u,c->r[5]); // 800BF84C
  W32(c->r[3]+0x000000E8u,c->r[4]); // 800BF850
  W32(c->r[3]+0x000000ECu,c->r[5]); // 800BF854
  W32(c->r[3]+0x000000F0u,c->r[0]); // 800BF858
  return; // 800BF85C
}

// fn_800BF860
void f_800BF860(Ctx* __restrict c) {
  trace_call(0x800BF860u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF860
  c->r[0]=c->lr; // 800BF864
  cmps(c,0,(int32_t)c->r[5],0); // 800BF868
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BF86C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF870
  c->r[28]=c->r[3]|c->r[3]; // 800BF874
  c->r[29]=c->r[4]|c->r[4]; // 800BF878
  c->r[30]=c->r[7]|c->r[7]; // 800BF87C
  if (crb(c,2)) { goto L_800BF88C; } // 800BF880
  c->r[31]=c->r[5]|c->r[5]; // 800BF884
  goto L_800BF890; // 800BF888
L_800BF88C:;
  c->r[31]=c->r[28]|c->r[28]; // 800BF88C
L_800BF890:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800BF890
  c->r[4]=c->r[4]+0x0000001Cu; // 800BF894
  c->lr=0x800BF89Cu; f_8003AB48(c); // 800BF898
  c->r[3]=c->r[31]+0x00000028u; // 800BF89C
  c->r[4]=c->r[29]+0x00000028u; // 800BF8A0
  c->lr=0x800BF8A8u; f_8003AB48(c); // 800BF8A4
  c->r[3]=c->r[31]+0x00000034u; // 800BF8A8
  c->r[4]=c->r[29]+0x00000034u; // 800BF8AC
  c->lr=0x800BF8B4u; f_8003AB48(c); // 800BF8B0
  c->r[3]=c->r[31]+0x00000040u; // 800BF8B4
  c->r[4]=c->r[29]+0x00000040u; // 800BF8B8
  c->lr=0x800BF8C0u; f_8003AB48(c); // 800BF8BC
  c->r[3]=c->r[31]+0x0000004Cu; // 800BF8C0
  c->r[4]=c->r[29]+0x0000004Cu; // 800BF8C4
  c->lr=0x800BF8CCu; f_8003AB48(c); // 800BF8C8
  c->r[3]=c->r[31]+0x00000058u; // 800BF8CC
  c->r[4]=c->r[29]+0x00000058u; // 800BF8D0
  c->lr=0x800BF8D8u; f_8003AB48(c); // 800BF8D4
  c->r[3]=c->r[31]+0x00000064u; // 800BF8D8
  c->r[4]=c->r[29]+0x00000064u; // 800BF8DC
  c->lr=0x800BF8E4u; f_8003AB48(c); // 800BF8E0
  c->r[3]=c->r[31]+0x00000070u; // 800BF8E4
  c->r[4]=c->r[29]+0x00000070u; // 800BF8E8
  c->lr=0x800BF8F0u; f_8003AB48(c); // 800BF8EC
  c->r[3]=c->r[31]+0x0000007Cu; // 800BF8F0
  c->r[4]=c->r[29]+0x0000007Cu; // 800BF8F4
  c->lr=0x800BF8FCu; f_8003AB48(c); // 800BF8F8
  c->r[3]=c->r[31]+0x00000088u; // 800BF8FC
  c->r[4]=c->r[29]+0x00000088u; // 800BF900
  c->lr=0x800BF908u; f_8003AB48(c); // 800BF904
  c->r[3]=c->r[31]+0x00000094u; // 800BF908
  c->r[4]=c->r[29]+0x00000094u; // 800BF90C
  c->lr=0x800BF914u; f_8003AB48(c); // 800BF910
  c->r[3]=c->r[31]+0x000000A0u; // 800BF914
  c->r[4]=c->r[29]+0x000000A0u; // 800BF918
  c->lr=0x800BF920u; f_8003AB48(c); // 800BF91C
  c->r[3]=c->r[31]+0x000000ACu; // 800BF920
  c->r[4]=c->r[29]+0x000000ACu; // 800BF924
  c->lr=0x800BF92Cu; f_8003AB48(c); // 800BF928
  c->r[3]=c->r[31]+0x000000B8u; // 800BF92C
  c->r[4]=c->r[29]+0x000000B8u; // 800BF930
  c->lr=0x800BF938u; f_8003AB48(c); // 800BF934
  c->r[3]=c->r[31]+0x000000C4u; // 800BF938
  c->r[4]=c->r[29]+0x000000C4u; // 800BF93C
  c->lr=0x800BF944u; f_8003AB48(c); // 800BF940
  c->r[3]=c->r[31]+0x000000D0u; // 800BF944
  c->r[4]=c->r[29]+0x000000D0u; // 800BF948
  c->lr=0x800BF950u; f_8003AB48(c); // 800BF94C
  c->r[3]=c->r[31]+0x000000DCu; // 800BF950
  c->r[4]=c->r[29]+0x000000DCu; // 800BF954
  c->lr=0x800BF95Cu; f_8003AB48(c); // 800BF958
  c->r[3]=c->r[31]+0x000000E8u; // 800BF95C
  c->r[4]=c->r[29]+0x000000E8u; // 800BF960
  c->lr=0x800BF968u; f_8003BDD0(c); // 800BF964
  cmps(c,0,(int32_t)c->r[30],0); // 800BF968
  if (crb(c,2)) { goto L_800BF990; } // 800BF96C
  c->r[3]=R32(c->r[28]+0x000000F4u); // 800BF970
  cmps(c,0,(int32_t)c->r[3],0); // 800BF974
  if (crb(c,1)) { goto L_800BF988; } // 800BF978
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BF97C
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800BF980
  goto L_800BF990; // 800BF984
L_800BF988:;
  c->r[0]=c->r[3]+0x00000001u; // 800BF988
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800BF98C
L_800BF990:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF990
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF994
  c->lr=c->r[0]; // 800BF998
  c->r[1]=c->r[1]+0x00000020u; // 800BF99C
  return; // 800BF9A0
}

// fn_800BF9A4
void f_800BF9A4(Ctx* __restrict c) {
  trace_call(0x800BF9A4u);
  c->r[3]=0u+0x00000000u; // 800BF9A4
  return; // 800BF9A8
}

// fn_800BF9AC
void f_800BF9AC(Ctx* __restrict c) {
  trace_call(0x800BF9ACu);
  c->r[3]=0u+0x000000F8u; // 800BF9AC
  return; // 800BF9B0
}

// fn_800BF9B4
void f_800BF9B4(Ctx* __restrict c) {
  trace_call(0x800BF9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF9B4
  c->r[0]=c->lr; // 800BF9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF9BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF9C0
  c->r[31]=c->r[3]|c->r[3]; // 800BF9C4
  c->lr=0x800BF9CCu; f_800BF0EC(c); // 800BF9C8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BF9CC
  c->r[3]=0u+0x80420000u; // 800BF9D0
  c->r[3]=c->r[3]+0xFFFFA0F4u; // 800BF9D4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800BF9D8
  c->r[0]=c->r[0]|0x80000000u; // 800BF9DC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800BF9E0
  c->r[3]=c->r[31]|c->r[31]; // 800BF9E4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800BF9E8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800BF9EC
  c->ctr=c->r[12]; // 800BF9F0
  if (true) { c->lr=0x800BF9F8u; dispatch(c,c->ctr); } // 800BF9F4
  c->r[3]=c->r[31]|c->r[31]; // 800BF9F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF9FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFA00
  c->lr=c->r[0]; // 800BFA04
  c->r[1]=c->r[1]+0x00000010u; // 800BFA08
  return; // 800BFA0C
}

// fn_800BFA10
void f_800BFA10(Ctx* __restrict c) {
  trace_call(0x800BFA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFA10
  c->r[0]=c->lr; // 800BFA14
  cmps(c,0,(int32_t)c->r[3],0); // 800BFA18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFA1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BFA20
  c->r[30]=c->r[3]|c->r[3]; // 800BFA24
  c->r[31]=c->r[4]|c->r[4]; // 800BFA28
  if (crb(c,2)) { goto L_800BFA48; } // 800BFA2C
  c->r[4]=0u+0x00000000u; // 800BFA30
  c->lr=0x800BFA38u; f_802B1180(c); // 800BFA34
  cmps(c,0,(int32_t)c->r[31],0); // 800BFA38
  if (!crb(c,1)) { goto L_800BFA48; } // 800BFA3C
  c->r[3]=c->r[30]|c->r[30]; // 800BFA40
  c->lr=0x800BFA48u; f_80244DC0(c); // 800BFA44
L_800BFA48:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFA48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BFA4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFA50
  c->lr=c->r[0]; // 800BFA54
  c->r[1]=c->r[1]+0x00000010u; // 800BFA58
  return; // 800BFA5C
}

// fn_800BFA60
void f_800BFA60(Ctx* __restrict c) {
  trace_call(0x800BFA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFA60
  c->r[0]=c->lr; // 800BFA64
  c->r[3]=0u+0x000000F8u; // 800BFA68
  c->r[4]=c->r[13]+0xFFFFADBEu; // 800BFA6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFA70
  c->r[5]=0u+0x00000000u; // 800BFA74
  c->r[6]=0u+0x00001001u; // 800BFA78
  c->lr=0x800BFA80u; f_80244D20(c); // 800BFA7C
  cmps(c,0,(int32_t)c->r[3],0); // 800BFA80
  if (crb(c,2)) { goto L_800BFA8C; } // 800BFA84
  c->lr=0x800BFA8Cu; f_800BF9B4(c); // 800BFA88
L_800BFA8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFA8C
  c->lr=c->r[0]; // 800BFA90
  c->r[1]=c->r[1]+0x00000010u; // 800BFA94
  return; // 800BFA98
}

// fn_800BFA9C
void f_800BFA9C(Ctx* __restrict c) {
  trace_call(0x800BFA9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFA9C
  c->r[0]=c->lr; // 800BFAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFAA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFAA8
  c->r[31]=c->r[3]|c->r[3]; // 800BFAAC
  c->lr=0x800BFAB4u; f_80244520(c); // 800BFAB0
  c->r[7]=c->r[3]|c->r[3]; // 800BFAB4
  c->r[9]=c->r[31]|c->r[31]; // 800BFAB8
  c->r[3]=0u+0x000000F8u; // 800BFABC
  c->r[4]=c->r[13]+0xFFFFADC3u; // 800BFAC0
  c->r[5]=0u+0x00000000u; // 800BFAC4
  c->r[6]=0u+0x00002001u; // 800BFAC8
  c->r[8]=0u+0x00000000u; // 800BFACC
  c->lr=0x800BFAD4u; f_80242DF0(c); // 800BFAD0
  c->r[4]=c->r[3]|c->r[3]; // 800BFAD4
  c->r[3]=0u+0x000000F8u; // 800BFAD8
  c->r[5]=c->r[13]+0xFFFFADC8u; // 800BFADC
  c->r[6]=0u+0x00000000u; // 800BFAE0
  c->r[7]=0u+0x00001001u; // 800BFAE4
  c->lr=0x800BFAECu; f_80244DB0(c); // 800BFAE8
  cmps(c,0,(int32_t)c->r[3],0); // 800BFAEC
  if (crb(c,2)) { goto L_800BFAF8; } // 800BFAF0
  c->lr=0x800BFAF8u; f_800BF9B4(c); // 800BFAF4
L_800BFAF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFAF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFAFC
  c->lr=c->r[0]; // 800BFB00
  c->r[1]=c->r[1]+0x00000010u; // 800BFB04
  return; // 800BFB08
}

// fn_800BFB0C
void f_800BFB0C(Ctx* __restrict c) {
  trace_call(0x800BFB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFB0C
  c->r[0]=c->lr; // 800BFB10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFB14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFB18
  c->r[31]=c->r[3]|c->r[3]; // 800BFB1C
  c->lr=0x800BFB24u; f_802B1168(c); // 800BFB20
  c->r[7]=0u+0x80420000u; // 800BFB24
  c->r[5]=0u+0x80410000u; // 800BFB28
  c->r[6]=0u+0x00000000u; // 800BFB2C
  c->r[4]=0u+0x94D50000u; // 800BFB30
  c->r[3]=0u+0xFDEB0000u; // 800BFB34
  c->r[7]=c->r[7]+0xFFFFA0B8u; // 800BFB38
  c->r[0]=c->r[3]+0x00001155u; // 800BFB3C
  c->r[5]=c->r[5]+0xFFFFCCD6u; // 800BFB40
  c->r[4]=c->r[4]+0x000009A7u; // 800BFB44
  W32(c->r[31]+0x00000018u,c->r[7]); // 800BFB48
  c->r[3]=c->r[31]|c->r[31]; // 800BFB4C
  W32(c->r[31]+0x00000100u,c->r[6]); // 800BFB50
  W32(c->r[31]+0x00000000u,c->r[5]); // 800BFB54
  W32(c->r[31]+0x00000008u,c->r[6]); // 800BFB58
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800BFB5C
  W32(c->r[31]+0x00000010u,c->r[6]); // 800BFB60
  W32(c->r[31]+0x00000004u,c->r[0]); // 800BFB64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFB68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFB6C
  c->lr=c->r[0]; // 800BFB70
  c->r[1]=c->r[1]+0x00000010u; // 800BFB74
  return; // 800BFB78
}

// fn_800BFB7C
void f_800BFB7C(Ctx* __restrict c) {
  trace_call(0x800BFB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFB7C
  c->r[0]=c->lr; // 800BFB80
  cmps(c,0,(int32_t)c->r[4],0); // 800BFB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFB88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BFB8C
  c->r[30]=c->r[3]|c->r[3]; // 800BFB90
  c->r[31]=c->r[4]|c->r[4]; // 800BFB94
  if (crb(c,2)) { goto L_800BFBEC; } // 800BFB98
  c->r[3]=c->r[31]|c->r[31]; // 800BFB9C
  c->lr=0x800BFBA4u; f_80244520(c); // 800BFBA0
  c->r[7]=c->r[3]|c->r[3]; // 800BFBA4
  c->r[9]=c->r[31]|c->r[31]; // 800BFBA8
  c->r[3]=0u+0x00000104u; // 800BFBAC
  c->r[4]=c->r[13]+0xFFFFADCDu; // 800BFBB0
  c->r[5]=0u+0x00000000u; // 800BFBB4
  c->r[6]=0u+0x00002001u; // 800BFBB8
  c->r[8]=0u+0x00000000u; // 800BFBBC
  c->lr=0x800BFBC4u; f_80242DF0(c); // 800BFBC0
  c->r[4]=c->r[3]|c->r[3]; // 800BFBC4
  c->r[3]=0u+0x00000104u; // 800BFBC8
  c->r[5]=c->r[13]+0xFFFFADD2u; // 800BFBCC
  c->r[6]=0u+0x00000000u; // 800BFBD0
  c->r[7]=0u+0x00001001u; // 800BFBD4
  c->lr=0x800BFBDCu; f_80244DB0(c); // 800BFBD8
  cmps(c,0,(int32_t)c->r[3],0); // 800BFBDC
  if (crb(c,2)) { goto L_800BFC0C; } // 800BFBE0
  c->lr=0x800BFBE8u; f_800BFB0C(c); // 800BFBE4
  goto L_800BFC0C; // 800BFBE8
L_800BFBEC:;
  c->r[3]=0u+0x00000104u; // 800BFBEC
  c->r[4]=c->r[13]+0xFFFFADD7u; // 800BFBF0
  c->r[5]=0u+0x00000000u; // 800BFBF4
  c->r[6]=0u+0x00001001u; // 800BFBF8
  c->lr=0x800BFC00u; f_80244D20(c); // 800BFBFC
  cmps(c,0,(int32_t)c->r[3],0); // 800BFC00
  if (crb(c,2)) { goto L_800BFC0C; } // 800BFC04
  c->lr=0x800BFC0Cu; f_800BFB0C(c); // 800BFC08
L_800BFC0C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800BFC0C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800BFC10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BFC14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFC18
  c->lr=c->r[0]; // 800BFC1C
  c->r[1]=c->r[1]+0x00000010u; // 800BFC20
  return; // 800BFC24
}

// fn_800BFC28
void f_800BFC28(Ctx* __restrict c) {
  trace_call(0x800BFC28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFC28
  c->r[0]=c->lr; // 800BFC2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFC30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BFC34
  c->r[31]=c->r[4]|c->r[4]; // 800BFC38
  c->r[30]=c->r[3]|c->r[3]; // 800BFC3C
  c->r[4]=0u+0x00000000u; // 800BFC40
  c->r[3]=c->r[31]|c->r[31]; // 800BFC44
  c->lr=0x800BFC4Cu; f_8030BE30(c); // 800BFC48
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800BFC4C
  c->r[3]=c->r[31]|c->r[31]; // 800BFC50
  c->lr=0x800BFC58u; f_8030BD1C(c); // 800BFC54
  W32(c->r[30]+0x00000020u,c->r[3]); // 800BFC58
  c->r[3]=c->r[31]|c->r[31]; // 800BFC5C
  c->r[4]=0u+0x00000000u; // 800BFC60
  c->lr=0x800BFC68u; f_8030BE30(c); // 800BFC64
  W32(c->r[30]+0x00000028u,c->r[3]); // 800BFC68
  c->r[3]=c->r[31]|c->r[31]; // 800BFC6C
  c->lr=0x800BFC74u; f_8030BD1C(c); // 800BFC70
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800BFC74
  c->r[3]=c->r[31]|c->r[31]; // 800BFC78
  c->r[4]=0u+0x00000000u; // 800BFC7C
  c->lr=0x800BFC84u; f_8030BE30(c); // 800BFC80
  W32(c->r[30]+0x00000034u,c->r[3]); // 800BFC84
  c->r[3]=c->r[31]|c->r[31]; // 800BFC88
  c->lr=0x800BFC90u; f_8030BD1C(c); // 800BFC8C
  W32(c->r[30]+0x00000038u,c->r[3]); // 800BFC90
  c->r[3]=c->r[31]|c->r[31]; // 800BFC94
  c->r[4]=0u+0x00000000u; // 800BFC98
  c->lr=0x800BFCA0u; f_8030BE30(c); // 800BFC9C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800BFCA0
  c->r[3]=c->r[31]|c->r[31]; // 800BFCA4
  c->lr=0x800BFCACu; f_8030BD1C(c); // 800BFCA8
  W32(c->r[30]+0x00000044u,c->r[3]); // 800BFCAC
  c->r[3]=c->r[31]|c->r[31]; // 800BFCB0
  c->r[4]=0u+0x00000000u; // 800BFCB4
  c->lr=0x800BFCBCu; f_8030BE30(c); // 800BFCB8
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800BFCBC
  c->r[3]=c->r[31]|c->r[31]; // 800BFCC0
  c->lr=0x800BFCC8u; f_8030BD1C(c); // 800BFCC4
  W32(c->r[30]+0x00000050u,c->r[3]); // 800BFCC8
  c->r[3]=c->r[31]|c->r[31]; // 800BFCCC
  c->r[4]=0u+0x00000000u; // 800BFCD0
  c->lr=0x800BFCD8u; f_8030BE30(c); // 800BFCD4
  W32(c->r[30]+0x00000058u,c->r[3]); // 800BFCD8
  c->r[3]=c->r[31]|c->r[31]; // 800BFCDC
  c->lr=0x800BFCE4u; f_8030BD1C(c); // 800BFCE0
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800BFCE4
  c->r[3]=c->r[31]|c->r[31]; // 800BFCE8
  c->r[4]=0u+0x00000000u; // 800BFCEC
  c->lr=0x800BFCF4u; f_8030BE30(c); // 800BFCF0
  W32(c->r[30]+0x00000064u,c->r[3]); // 800BFCF4
  c->r[3]=c->r[31]|c->r[31]; // 800BFCF8
  c->lr=0x800BFD00u; f_8030BD1C(c); // 800BFCFC
  W32(c->r[30]+0x00000068u,c->r[3]); // 800BFD00
  c->r[3]=c->r[31]|c->r[31]; // 800BFD04
  c->r[4]=0u+0x00000000u; // 800BFD08
  c->lr=0x800BFD10u; f_8030BE30(c); // 800BFD0C
  W32(c->r[30]+0x00000070u,c->r[3]); // 800BFD10
  c->r[3]=c->r[31]|c->r[31]; // 800BFD14
  c->lr=0x800BFD1Cu; f_8030BD1C(c); // 800BFD18
  W32(c->r[30]+0x00000074u,c->r[3]); // 800BFD1C
  c->r[3]=c->r[31]|c->r[31]; // 800BFD20
  c->r[4]=0u+0x00000000u; // 800BFD24
  c->lr=0x800BFD2Cu; f_8030BE30(c); // 800BFD28
  W32(c->r[30]+0x0000007Cu,c->r[3]); // 800BFD2C
  c->r[3]=c->r[31]|c->r[31]; // 800BFD30
  c->lr=0x800BFD38u; f_8030BD1C(c); // 800BFD34
  W32(c->r[30]+0x00000080u,c->r[3]); // 800BFD38
  c->r[3]=c->r[31]|c->r[31]; // 800BFD3C
  c->r[4]=0u+0x00000000u; // 800BFD40
  c->lr=0x800BFD48u; f_8030BE30(c); // 800BFD44
  W32(c->r[30]+0x00000088u,c->r[3]); // 800BFD48
  c->r[3]=c->r[31]|c->r[31]; // 800BFD4C
  c->lr=0x800BFD54u; f_8030BD1C(c); // 800BFD50
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800BFD54
  c->r[3]=c->r[31]|c->r[31]; // 800BFD58
  c->r[4]=0u+0x00000000u; // 800BFD5C
  c->lr=0x800BFD64u; f_8030BE30(c); // 800BFD60
  W32(c->r[30]+0x00000094u,c->r[3]); // 800BFD64
  c->r[3]=c->r[31]|c->r[31]; // 800BFD68
  c->lr=0x800BFD70u; f_8030BD1C(c); // 800BFD6C
  W32(c->r[30]+0x00000098u,c->r[3]); // 800BFD70
  c->r[3]=c->r[31]|c->r[31]; // 800BFD74
  c->r[4]=0u+0x00000000u; // 800BFD78
  c->lr=0x800BFD80u; f_8030BE30(c); // 800BFD7C
  W32(c->r[30]+0x000000A0u,c->r[3]); // 800BFD80
  c->r[3]=c->r[31]|c->r[31]; // 800BFD84
  c->lr=0x800BFD8Cu; f_8030BD1C(c); // 800BFD88
  W32(c->r[30]+0x000000A4u,c->r[3]); // 800BFD8C
  c->r[3]=c->r[31]|c->r[31]; // 800BFD90
  c->r[4]=0u+0x00000000u; // 800BFD94
  c->lr=0x800BFD9Cu; f_8030BE30(c); // 800BFD98
  W32(c->r[30]+0x000000ACu,c->r[3]); // 800BFD9C
  c->r[3]=c->r[31]|c->r[31]; // 800BFDA0
  c->lr=0x800BFDA8u; f_8030BD1C(c); // 800BFDA4
  W32(c->r[30]+0x000000B0u,c->r[3]); // 800BFDA8
  c->r[3]=c->r[31]|c->r[31]; // 800BFDAC
  c->r[4]=0u+0x00000000u; // 800BFDB0
  c->lr=0x800BFDB8u; f_8030BE30(c); // 800BFDB4
  W32(c->r[30]+0x000000B8u,c->r[3]); // 800BFDB8
  c->r[3]=c->r[31]|c->r[31]; // 800BFDBC
  c->lr=0x800BFDC4u; f_8030BD1C(c); // 800BFDC0
  W32(c->r[30]+0x000000BCu,c->r[3]); // 800BFDC4
  c->r[3]=c->r[31]|c->r[31]; // 800BFDC8
  c->r[4]=0u+0x00000000u; // 800BFDCC
  c->lr=0x800BFDD4u; f_8030BE30(c); // 800BFDD0
  W32(c->r[30]+0x000000C4u,c->r[3]); // 800BFDD4
  c->r[3]=c->r[31]|c->r[31]; // 800BFDD8
  c->lr=0x800BFDE0u; f_8030BD1C(c); // 800BFDDC
  W32(c->r[30]+0x000000C8u,c->r[3]); // 800BFDE0
  c->r[3]=c->r[31]|c->r[31]; // 800BFDE4
  c->r[4]=0u+0x00000000u; // 800BFDE8
  c->lr=0x800BFDF0u; f_8030BE30(c); // 800BFDEC
  W32(c->r[30]+0x000000D0u,c->r[3]); // 800BFDF0
  c->r[3]=c->r[31]|c->r[31]; // 800BFDF4
  c->lr=0x800BFDFCu; f_8030BD1C(c); // 800BFDF8
  W32(c->r[30]+0x000000D4u,c->r[3]); // 800BFDFC
  c->r[3]=c->r[31]|c->r[31]; // 800BFE00
  c->r[4]=0u+0x00000000u; // 800BFE04
  c->lr=0x800BFE0Cu; f_8030BE30(c); // 800BFE08
  W32(c->r[30]+0x000000DCu,c->r[3]); // 800BFE0C
  c->r[3]=c->r[31]|c->r[31]; // 800BFE10
  c->lr=0x800BFE18u; f_8030BD1C(c); // 800BFE14
  W32(c->r[30]+0x000000E0u,c->r[3]); // 800BFE18
  c->r[3]=c->r[31]|c->r[31]; // 800BFE1C
  c->r[4]=0u+0x00000000u; // 800BFE20
  c->lr=0x800BFE28u; f_8030BE30(c); // 800BFE24
  W32(c->r[30]+0x000000E8u,c->r[3]); // 800BFE28
  c->r[3]=c->r[31]|c->r[31]; // 800BFE2C
  c->lr=0x800BFE34u; f_8030BD1C(c); // 800BFE30
  W32(c->r[30]+0x000000ECu,c->r[3]); // 800BFE34
  c->r[3]=c->r[31]|c->r[31]; // 800BFE38
  c->r[4]=0u+0x00000000u; // 800BFE3C
  c->lr=0x800BFE44u; f_8030BE30(c); // 800BFE40
  W32(c->r[30]+0x000000F4u,c->r[3]); // 800BFE44
  c->r[0]=0u+0x00000000u; // 800BFE48
  c->r[3]=c->r[31]|c->r[31]; // 800BFE4C
  W32(c->r[30]+0x000000F8u,c->r[0]); // 800BFE50
  c->lr=0x800BFE58u; f_8030BD1C(c); // 800BFE54
  W32(c->r[30]+0x000000FCu,c->r[3]); // 800BFE58
  c->r[3]=0u+0x00000000u; // 800BFE5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BFE60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFE64
  c->lr=c->r[0]; // 800BFE68
  c->r[1]=c->r[1]+0x00000010u; // 800BFE6C
  return; // 800BFE70
}

// fn_800BFE74
void f_800BFE74(Ctx* __restrict c) {
  trace_call(0x800BFE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFE74
  c->r[0]=c->lr; // 800BFE78
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BFE7C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BFE80
  c->r[27]=c->r[3]|c->r[3]; // 800BFE84
  c->r[28]=c->r[4]|c->r[4]; // 800BFE88
  c->r[29]=c->r[5]|c->r[5]; // 800BFE8C
  c->r[30]=c->r[6]|c->r[6]; // 800BFE90
  c->r[7]=R32(c->r[3]+0x00000100u); // 800BFE94
  cmps(c,0,(int32_t)c->r[7],0); // 800BFE98
  if (!crb(c,0)) { goto L_800BFEAC; } // 800BFE9C
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800BFEA0
  W32(c->r[3]+0x00000100u,c->r[0]); // 800BFEA4
  goto L_800BFEBC; // 800BFEA8
L_800BFEAC:;
  c->r[0]=c->r[7]+0x00000001u; // 800BFEAC
  W32(c->r[3]+0x00000100u,c->r[0]); // 800BFEB0
  cmps(c,0,(int32_t)c->r[0],1); // 800BFEB4
  if (crb(c,1)) { goto L_800BFF78; } // 800BFEB8
L_800BFEBC:;
  c->r[3]=c->r[27]|c->r[27]; // 800BFEBC
  c->r[4]=c->r[28]|c->r[28]; // 800BFEC0
  c->r[5]=c->r[29]|c->r[29]; // 800BFEC4
  c->r[6]=c->r[30]|c->r[30]; // 800BFEC8
  c->lr=0x800BFED0u; f_802B11C0(c); // 800BFECC
  c->r[4]=R32(c->r[27]+0x000000F4u); // 800BFED0
  cmps(c,0,(int32_t)c->r[4],0); // 800BFED4
  if (crb(c,2)) { goto L_800BFF78; } // 800BFED8
  c->r[0]=0u+0x00000000u; // 800BFEDC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BFEE0
  c->r[6]=c->r[28]|c->r[28]; // 800BFEE4
  c->r[7]=c->r[29]|c->r[29]; // 800BFEE8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800BFEEC
  c->r[8]=c->r[30]|c->r[30]; // 800BFEF0
  c->r[9]=R32(c->r[27]+0x000000FCu); // 800BFEF4
  c->r[5]=0u+0x00000004u; // 800BFEF8
  c->r[10]=0u+0x00000001u; // 800BFEFC
  c->lr=0x800BFF04u; f_80281A84(c); // 800BFF00
  cmps(c,0,(int32_t)c->r[3],0); // 800BFF04
  W32(c->r[27]+0x000000F8u,c->r[3]); // 800BFF08
  if (crb(c,2)) { goto L_800BFF18; } // 800BFF0C
  c->lr=0x800BFF14u; f_80295B6C(c); // 800BFF10
  goto L_800BFF78; // 800BFF14
L_800BFF18:;
  c->r[3]=R32(c->r[27]+0x000000FCu); // 800BFF18
  c->r[4]=c->r[30]|c->r[30]; // 800BFF1C
  c->r[5]=c->r[29]|c->r[29]; // 800BFF20
  c->lr=0x800BFF28u; f_802C0F98(c); // 800BFF24
  c->r[31]=c->r[3]|c->r[3]; // 800BFF28
  c->r[3]=0u+0x00000044u; // 800BFF2C
  c->r[4]=c->r[13]+0xFFFFADDCu; // 800BFF30
  c->r[5]=0u+0x00000000u; // 800BFF34
  c->r[6]=0u+0x00001001u; // 800BFF38
  c->lr=0x800BFF40u; f_80244D20(c); // 800BFF3C
  cmps(c,0,(int32_t)c->r[3],0); // 800BFF40
  if (crb(c,2)) { goto L_800BFF54; } // 800BFF44
  c->r[5]=R32(c->r[27]+0x000000F4u); // 800BFF48
  c->r[4]=c->r[31]|c->r[31]; // 800BFF4C
  c->lr=0x800BFF54u; f_802972CC(c); // 800BFF50
L_800BFF54:;
  W32(c->r[27]+0x000000F8u,c->r[3]); // 800BFF54
  c->r[4]=c->r[28]|c->r[28]; // 800BFF58
  c->r[7]=R32(c->r[27]+0x000000FCu); // 800BFF5C
  c->r[5]=c->r[29]|c->r[29]; // 800BFF60
  c->r[6]=c->r[30]|c->r[30]; // 800BFF64
  c->r[8]=0u+0x00000001u; // 800BFF68
  c->r[9]=0u+0x00000000u; // 800BFF6C
  c->lr=0x800BFF74u; f_8027FFF4(c); // 800BFF70
  W32(c->r[27]+0x000000F8u,c->r[3]); // 800BFF74
L_800BFF78:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BFF78
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BFF7C
  c->lr=c->r[0]; // 800BFF80
  c->r[1]=c->r[1]+0x00000030u; // 800BFF84
  return; // 800BFF88
}

// fn_800BFF8C
void f_800BFF8C(Ctx* __restrict c) {
  trace_call(0x800BFF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFF8C
  c->r[0]=c->lr; // 800BFF90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFF94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFF98
  c->r[31]=c->r[3]|c->r[3]; // 800BFF9C
  c->r[0]=R32(c->r[3]+0x00000100u); // 800BFFA0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800BFFA4
  W32(c->r[3]+0x00000100u,c->r[0]); // 800BFFA8
  if (!crb(c,2)) { goto L_800BFFCC; } // 800BFFAC
  c->lr=0x800BFFB4u; f_802B11D0(c); // 800BFFB0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 800BFFB4
  cmps(c,0,(int32_t)c->r[3],0); // 800BFFB8
  if (crb(c,2)) { goto L_800BFFCC; } // 800BFFBC
  c->lr=0x800BFFC4u; f_80295B7C(c); // 800BFFC0
  c->r[0]=0u+0x00000000u; // 800BFFC4
  W32(c->r[31]+0x000000F8u,c->r[0]); // 800BFFC8
L_800BFFCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFFCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BFFD0
  c->lr=c->r[0]; // 800BFFD4
  c->r[1]=c->r[1]+0x00000010u; // 800BFFD8
  return; // 800BFFDC
}

// fn_800BFFE0
void f_800BFFE0(Ctx* __restrict c) {
  trace_call(0x800BFFE0u);
  return; // 800BFFE0
}

// fn_800BFFE4
void f_800BFFE4(Ctx* __restrict c) {
  trace_call(0x800BFFE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFFE4
  c->r[0]=c->lr; // 800BFFE8
  cmps(c,0,(int32_t)c->r[6],0); // 800BFFEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFFF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BFFF4
  c->r[30]=c->r[3]|c->r[3]; // 800BFFF8
  c->r[31]=c->r[5]|c->r[5]; // 800BFFFC
  if (!crb(c,2)) { goto L_800C01B4; } // 800C0000
  c->r[0]=R32(c->r[3]+0x00000020u); // 800C0004
  cmps(c,0,(int32_t)c->r[0],7); // 800C0008
  if (!crb(c,0)) { goto L_800C001C; } // 800C000C
  c->r[4]=c->r[31]|c->r[31]; // 800C0010
  c->r[3]=c->r[3]+0x0000001Cu; // 800C0014
  c->lr=0x800C001Cu; f_8003A994(c); // 800C0018
L_800C001C:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800C001C
  cmps(c,0,(int32_t)c->r[0],7); // 800C0020
  if (!crb(c,0)) { goto L_800C0034; } // 800C0024
  c->r[4]=c->r[31]|c->r[31]; // 800C0028
  c->r[3]=c->r[30]+0x00000028u; // 800C002C
  c->lr=0x800C0034u; f_8003A994(c); // 800C0030
L_800C0034:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 800C0034
  cmps(c,0,(int32_t)c->r[0],7); // 800C0038
  if (!crb(c,0)) { goto L_800C004C; } // 800C003C
  c->r[4]=c->r[31]|c->r[31]; // 800C0040
  c->r[3]=c->r[30]+0x00000034u; // 800C0044
  c->lr=0x800C004Cu; f_8003A994(c); // 800C0048
L_800C004C:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 800C004C
  cmps(c,0,(int32_t)c->r[0],7); // 800C0050
  if (!crb(c,0)) { goto L_800C0064; } // 800C0054
  c->r[4]=c->r[31]|c->r[31]; // 800C0058
  c->r[3]=c->r[30]+0x00000040u; // 800C005C
  c->lr=0x800C0064u; f_8003A994(c); // 800C0060
L_800C0064:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 800C0064
  cmps(c,0,(int32_t)c->r[0],7); // 800C0068
  if (!crb(c,0)) { goto L_800C007C; } // 800C006C
  c->r[4]=c->r[31]|c->r[31]; // 800C0070
  c->r[3]=c->r[30]+0x0000004Cu; // 800C0074
  c->lr=0x800C007Cu; f_8003A994(c); // 800C0078
L_800C007C:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 800C007C
  cmps(c,0,(int32_t)c->r[0],7); // 800C0080
  if (!crb(c,0)) { goto L_800C0094; } // 800C0084
  c->r[4]=c->r[31]|c->r[31]; // 800C0088
  c->r[3]=c->r[30]+0x00000058u; // 800C008C
  c->lr=0x800C0094u; f_8003A994(c); // 800C0090
L_800C0094:;
  c->r[0]=R32(c->r[30]+0x00000068u); // 800C0094
  cmps(c,0,(int32_t)c->r[0],7); // 800C0098
  if (!crb(c,0)) { goto L_800C00AC; } // 800C009C
  c->r[4]=c->r[31]|c->r[31]; // 800C00A0
  c->r[3]=c->r[30]+0x00000064u; // 800C00A4
  c->lr=0x800C00ACu; f_8003A994(c); // 800C00A8
L_800C00AC:;
  c->r[0]=R32(c->r[30]+0x00000074u); // 800C00AC
  cmps(c,0,(int32_t)c->r[0],7); // 800C00B0
  if (!crb(c,0)) { goto L_800C00C4; } // 800C00B4
  c->r[4]=c->r[31]|c->r[31]; // 800C00B8
  c->r[3]=c->r[30]+0x00000070u; // 800C00BC
  c->lr=0x800C00C4u; f_8003A994(c); // 800C00C0
L_800C00C4:;
  c->r[0]=R32(c->r[30]+0x00000080u); // 800C00C4
  cmps(c,0,(int32_t)c->r[0],7); // 800C00C8
  if (!crb(c,0)) { goto L_800C00DC; } // 800C00CC
  c->r[4]=c->r[31]|c->r[31]; // 800C00D0
  c->r[3]=c->r[30]+0x0000007Cu; // 800C00D4
  c->lr=0x800C00DCu; f_8003A994(c); // 800C00D8
L_800C00DC:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 800C00DC
  cmps(c,0,(int32_t)c->r[0],7); // 800C00E0
  if (!crb(c,0)) { goto L_800C00F4; } // 800C00E4
  c->r[4]=c->r[31]|c->r[31]; // 800C00E8
  c->r[3]=c->r[30]+0x00000088u; // 800C00EC
  c->lr=0x800C00F4u; f_8003A994(c); // 800C00F0
L_800C00F4:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 800C00F4
  cmps(c,0,(int32_t)c->r[0],7); // 800C00F8
  if (!crb(c,0)) { goto L_800C010C; } // 800C00FC
  c->r[4]=c->r[31]|c->r[31]; // 800C0100
  c->r[3]=c->r[30]+0x00000094u; // 800C0104
  c->lr=0x800C010Cu; f_8003A994(c); // 800C0108
L_800C010C:;
  c->r[0]=R32(c->r[30]+0x000000A4u); // 800C010C
  cmps(c,0,(int32_t)c->r[0],7); // 800C0110
  if (!crb(c,0)) { goto L_800C0124; } // 800C0114
  c->r[4]=c->r[31]|c->r[31]; // 800C0118
  c->r[3]=c->r[30]+0x000000A0u; // 800C011C
  c->lr=0x800C0124u; f_8003A994(c); // 800C0120
L_800C0124:;
  c->r[0]=R32(c->r[30]+0x000000B0u); // 800C0124
  cmps(c,0,(int32_t)c->r[0],7); // 800C0128
  if (!crb(c,0)) { goto L_800C013C; } // 800C012C
  c->r[4]=c->r[31]|c->r[31]; // 800C0130
  c->r[3]=c->r[30]+0x000000ACu; // 800C0134
  c->lr=0x800C013Cu; f_8003A994(c); // 800C0138
L_800C013C:;
  c->r[0]=R32(c->r[30]+0x000000BCu); // 800C013C
  cmps(c,0,(int32_t)c->r[0],7); // 800C0140
  if (!crb(c,0)) { goto L_800C0154; } // 800C0144
  c->r[4]=c->r[31]|c->r[31]; // 800C0148
  c->r[3]=c->r[30]+0x000000B8u; // 800C014C
  c->lr=0x800C0154u; f_8003A994(c); // 800C0150
L_800C0154:;
  c->r[0]=R32(c->r[30]+0x000000C8u); // 800C0154
  cmps(c,0,(int32_t)c->r[0],7); // 800C0158
  if (!crb(c,0)) { goto L_800C016C; } // 800C015C
  c->r[4]=c->r[31]|c->r[31]; // 800C0160
  c->r[3]=c->r[30]+0x000000C4u; // 800C0164
  c->lr=0x800C016Cu; f_8003A994(c); // 800C0168
L_800C016C:;
  c->r[0]=R32(c->r[30]+0x000000D4u); // 800C016C
  cmps(c,0,(int32_t)c->r[0],7); // 800C0170
  if (!crb(c,0)) { goto L_800C0184; } // 800C0174
  c->r[4]=c->r[31]|c->r[31]; // 800C0178
  c->r[3]=c->r[30]+0x000000D0u; // 800C017C
  c->lr=0x800C0184u; f_8003A994(c); // 800C0180
L_800C0184:;
  c->r[0]=R32(c->r[30]+0x000000E0u); // 800C0184
  cmps(c,0,(int32_t)c->r[0],7); // 800C0188
  if (!crb(c,0)) { goto L_800C019C; } // 800C018C
  c->r[4]=c->r[31]|c->r[31]; // 800C0190
  c->r[3]=c->r[30]+0x000000DCu; // 800C0194
  c->lr=0x800C019Cu; f_8003A994(c); // 800C0198
L_800C019C:;
  c->r[0]=R32(c->r[30]+0x000000ECu); // 800C019C
  cmps(c,0,(int32_t)c->r[0],7); // 800C01A0
  if (!crb(c,0)) { goto L_800C01B4; } // 800C01A4
  c->r[4]=c->r[31]|c->r[31]; // 800C01A8
  c->r[3]=c->r[30]+0x000000E8u; // 800C01AC
  c->lr=0x800C01B4u; f_8003A994(c); // 800C01B0
L_800C01B4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C01B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C01B8
  c->lr=c->r[0]; // 800C01BC
  c->r[1]=c->r[1]+0x00000010u; // 800C01C0
  return; // 800C01C4
}

// fn_800C01C8
void f_800C01C8(Ctx* __restrict c) {
  trace_call(0x800C01C8u);
  c->r[4]=0u+0x00200000u; // 800C01C8
  c->r[5]=0u+0x00000000u; // 800C01CC
  c->r[4]=c->r[4]+0xFFFFA816u; // 800C01D0
  c->r[0]=0u+0x00000004u; // 800C01D4
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 800C01D8
  W32(c->r[3]+0x00000024u,c->r[5]); // 800C01DC
  W32(c->r[3]+0x00000020u,c->r[5]); // 800C01E0
  W32(c->r[3]+0x00000028u,c->r[5]); // 800C01E4
  W32(c->r[3]+0x00000030u,c->r[5]); // 800C01E8
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 800C01EC
  W32(c->r[3]+0x00000034u,c->r[5]); // 800C01F0
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 800C01F4
  W32(c->r[3]+0x00000038u,c->r[5]); // 800C01F8
  W32(c->r[3]+0x00000040u,c->r[5]); // 800C01FC
  W32(c->r[3]+0x00000048u,c->r[5]); // 800C0200
  W32(c->r[3]+0x00000044u,c->r[5]); // 800C0204
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 800C0208
  W32(c->r[3]+0x00000054u,c->r[5]); // 800C020C
  W32(c->r[3]+0x00000050u,c->r[5]); // 800C0210
  W32(c->r[3]+0x00000058u,c->r[5]); // 800C0214
  W32(c->r[3]+0x00000060u,c->r[5]); // 800C0218
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 800C021C
  W32(c->r[3]+0x00000064u,c->r[5]); // 800C0220
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 800C0224
  W32(c->r[3]+0x00000068u,c->r[5]); // 800C0228
  W32(c->r[3]+0x00000070u,c->r[5]); // 800C022C
  W32(c->r[3]+0x00000078u,c->r[5]); // 800C0230
  W32(c->r[3]+0x00000074u,c->r[5]); // 800C0234
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800C0238
  W32(c->r[3]+0x00000084u,c->r[5]); // 800C023C
  W32(c->r[3]+0x00000080u,c->r[5]); // 800C0240
  W32(c->r[3]+0x00000088u,c->r[5]); // 800C0244
  W32(c->r[3]+0x00000090u,c->r[5]); // 800C0248
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 800C024C
  W32(c->r[3]+0x00000094u,c->r[5]); // 800C0250
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 800C0254
  W32(c->r[3]+0x00000098u,c->r[5]); // 800C0258
  W32(c->r[3]+0x000000A0u,c->r[5]); // 800C025C
  W32(c->r[3]+0x000000A8u,c->r[5]); // 800C0260
  W32(c->r[3]+0x000000A4u,c->r[5]); // 800C0264
  W32(c->r[3]+0x000000ACu,c->r[5]); // 800C0268
  W32(c->r[3]+0x000000B4u,c->r[5]); // 800C026C
  W32(c->r[3]+0x000000B0u,c->r[5]); // 800C0270
  W32(c->r[3]+0x000000B8u,c->r[5]); // 800C0274
  W32(c->r[3]+0x000000C0u,c->r[5]); // 800C0278
  W32(c->r[3]+0x000000BCu,c->r[5]); // 800C027C
  W32(c->r[3]+0x000000C4u,c->r[5]); // 800C0280
  W32(c->r[3]+0x000000CCu,c->r[5]); // 800C0284
  W32(c->r[3]+0x000000C8u,c->r[5]); // 800C0288
  W32(c->r[3]+0x000000D0u,c->r[5]); // 800C028C
  W32(c->r[3]+0x000000D8u,c->r[5]); // 800C0290
  W32(c->r[3]+0x000000D4u,c->r[5]); // 800C0294
  W32(c->r[3]+0x000000DCu,c->r[5]); // 800C0298
  W32(c->r[3]+0x000000E4u,c->r[5]); // 800C029C
  W32(c->r[3]+0x000000E0u,c->r[5]); // 800C02A0
  W32(c->r[3]+0x000000E8u,c->r[5]); // 800C02A4
  W32(c->r[3]+0x000000F0u,c->r[5]); // 800C02A8
  W32(c->r[3]+0x000000ECu,c->r[5]); // 800C02AC
  W32(c->r[3]+0x000000F4u,c->r[4]); // 800C02B0
  W32(c->r[3]+0x000000F8u,c->r[5]); // 800C02B4
  W32(c->r[3]+0x000000FCu,c->r[0]); // 800C02B8
  return; // 800C02BC
}

// fn_800C02C0
void f_800C02C0(Ctx* __restrict c) {
  trace_call(0x800C02C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C02C0
  c->r[0]=c->lr; // 800C02C4
  cmps(c,0,(int32_t)c->r[5],0); // 800C02C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C02CC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C02D0
  c->r[28]=c->r[3]|c->r[3]; // 800C02D4
  c->r[29]=c->r[4]|c->r[4]; // 800C02D8
  c->r[30]=c->r[7]|c->r[7]; // 800C02DC
  if (crb(c,2)) { goto L_800C02EC; } // 800C02E0
  c->r[31]=c->r[5]|c->r[5]; // 800C02E4
  goto L_800C02F0; // 800C02E8
L_800C02EC:;
  c->r[31]=c->r[28]|c->r[28]; // 800C02EC
L_800C02F0:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800C02F0
  c->r[4]=c->r[4]+0x0000001Cu; // 800C02F4
  c->lr=0x800C02FCu; f_8003AB48(c); // 800C02F8
  c->r[3]=c->r[31]+0x00000028u; // 800C02FC
  c->r[4]=c->r[29]+0x00000028u; // 800C0300
  c->lr=0x800C0308u; f_8003AB48(c); // 800C0304
  c->r[3]=c->r[31]+0x00000034u; // 800C0308
  c->r[4]=c->r[29]+0x00000034u; // 800C030C
  c->lr=0x800C0314u; f_8003AB48(c); // 800C0310
  c->r[3]=c->r[31]+0x00000040u; // 800C0314
  c->r[4]=c->r[29]+0x00000040u; // 800C0318
  c->lr=0x800C0320u; f_8003AB48(c); // 800C031C
  c->r[3]=c->r[31]+0x0000004Cu; // 800C0320
  c->r[4]=c->r[29]+0x0000004Cu; // 800C0324
  c->lr=0x800C032Cu; f_8003AB48(c); // 800C0328
  c->r[3]=c->r[31]+0x00000058u; // 800C032C
  c->r[4]=c->r[29]+0x00000058u; // 800C0330
  c->lr=0x800C0338u; f_8003AB48(c); // 800C0334
  c->r[3]=c->r[31]+0x00000064u; // 800C0338
  c->r[4]=c->r[29]+0x00000064u; // 800C033C
  c->lr=0x800C0344u; f_8003AB48(c); // 800C0340
  c->r[3]=c->r[31]+0x00000070u; // 800C0344
  c->r[4]=c->r[29]+0x00000070u; // 800C0348
  c->lr=0x800C0350u; f_8003AB48(c); // 800C034C
  c->r[3]=c->r[31]+0x0000007Cu; // 800C0350
  c->r[4]=c->r[29]+0x0000007Cu; // 800C0354
  c->lr=0x800C035Cu; f_8003AB48(c); // 800C0358
  c->r[3]=c->r[31]+0x00000088u; // 800C035C
  c->r[4]=c->r[29]+0x00000088u; // 800C0360
  c->lr=0x800C0368u; f_8003AB48(c); // 800C0364
  c->r[3]=c->r[31]+0x00000094u; // 800C0368
  c->r[4]=c->r[29]+0x00000094u; // 800C036C
  c->lr=0x800C0374u; f_8003AB48(c); // 800C0370
  c->r[3]=c->r[31]+0x000000A0u; // 800C0374
  c->r[4]=c->r[29]+0x000000A0u; // 800C0378
  c->lr=0x800C0380u; f_8003AB48(c); // 800C037C
  c->r[3]=c->r[31]+0x000000ACu; // 800C0380
  c->r[4]=c->r[29]+0x000000ACu; // 800C0384
  c->lr=0x800C038Cu; f_8003AB48(c); // 800C0388
  c->r[3]=c->r[31]+0x000000B8u; // 800C038C
  c->r[4]=c->r[29]+0x000000B8u; // 800C0390
  c->lr=0x800C0398u; f_8003AB48(c); // 800C0394
  c->r[3]=c->r[31]+0x000000C4u; // 800C0398
  c->r[4]=c->r[29]+0x000000C4u; // 800C039C
  c->lr=0x800C03A4u; f_8003AB48(c); // 800C03A0
  c->r[3]=c->r[31]+0x000000D0u; // 800C03A4
  c->r[4]=c->r[29]+0x000000D0u; // 800C03A8
  c->lr=0x800C03B0u; f_8003AB48(c); // 800C03AC
  c->r[3]=c->r[31]+0x000000DCu; // 800C03B0
  c->r[4]=c->r[29]+0x000000DCu; // 800C03B4
  c->lr=0x800C03BCu; f_8003AB48(c); // 800C03B8
  c->r[3]=c->r[31]+0x000000E8u; // 800C03BC
  c->r[4]=c->r[29]+0x000000E8u; // 800C03C0
  c->lr=0x800C03C8u; f_8003AB48(c); // 800C03C4
  c->r[3]=c->r[31]+0x000000F4u; // 800C03C8
  c->r[4]=c->r[29]+0x000000F4u; // 800C03CC
  c->lr=0x800C03D4u; f_8003BDD0(c); // 800C03D0
  cmps(c,0,(int32_t)c->r[30],0); // 800C03D4
  if (crb(c,2)) { goto L_800C03FC; } // 800C03D8
  c->r[3]=R32(c->r[28]+0x00000100u); // 800C03DC
  cmps(c,0,(int32_t)c->r[3],0); // 800C03E0
  if (crb(c,1)) { goto L_800C03F4; } // 800C03E4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C03E8
  W32(c->r[28]+0x00000100u,c->r[0]); // 800C03EC
  goto L_800C03FC; // 800C03F0
L_800C03F4:;
  c->r[0]=c->r[3]+0x00000001u; // 800C03F4
  W32(c->r[28]+0x00000100u,c->r[0]); // 800C03F8
L_800C03FC:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C03FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0400
  c->lr=c->r[0]; // 800C0404
  c->r[1]=c->r[1]+0x00000020u; // 800C0408
  return; // 800C040C
}

// fn_800C0410
void f_800C0410(Ctx* __restrict c) {
  trace_call(0x800C0410u);
  c->r[3]=0u+0x00000000u; // 800C0410
  return; // 800C0414
}

// fn_800C0418
void f_800C0418(Ctx* __restrict c) {
  trace_call(0x800C0418u);
  c->r[3]=0u+0x00000104u; // 800C0418
  return; // 800C041C
}

// fn_800C0420
void f_800C0420(Ctx* __restrict c) {
  trace_call(0x800C0420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0420
  c->r[0]=c->lr; // 800C0424
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C042C
  c->r[31]=c->r[3]|c->r[3]; // 800C0430
  c->lr=0x800C0438u; f_800BFB0C(c); // 800C0434
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C0438
  c->r[3]=0u+0x80420000u; // 800C043C
  c->r[3]=c->r[3]+0xFFFFA078u; // 800C0440
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C0444
  c->r[0]=c->r[0]|0x80000000u; // 800C0448
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C044C
  c->r[3]=c->r[31]|c->r[31]; // 800C0450
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C0454
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C0458
  c->ctr=c->r[12]; // 800C045C
  if (true) { c->lr=0x800C0464u; dispatch(c,c->ctr); } // 800C0460
  c->r[3]=c->r[31]|c->r[31]; // 800C0464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0468
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C046C
  c->lr=c->r[0]; // 800C0470
  c->r[1]=c->r[1]+0x00000010u; // 800C0474
  return; // 800C0478
}

// fn_800C047C
void f_800C047C(Ctx* __restrict c) {
  trace_call(0x800C047Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C047C
  c->r[0]=c->lr; // 800C0480
  cmps(c,0,(int32_t)c->r[3],0); // 800C0484
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0488
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C048C
  c->r[30]=c->r[3]|c->r[3]; // 800C0490
  c->r[31]=c->r[4]|c->r[4]; // 800C0494
  if (crb(c,2)) { goto L_800C04B4; } // 800C0498
  c->r[4]=0u+0x00000000u; // 800C049C
  c->lr=0x800C04A4u; f_802B1180(c); // 800C04A0
  cmps(c,0,(int32_t)c->r[31],0); // 800C04A4
  if (!crb(c,1)) { goto L_800C04B4; } // 800C04A8
  c->r[3]=c->r[30]|c->r[30]; // 800C04AC
  c->lr=0x800C04B4u; f_80244DC0(c); // 800C04B0
L_800C04B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800C04B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C04B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C04BC
  c->lr=c->r[0]; // 800C04C0
  c->r[1]=c->r[1]+0x00000010u; // 800C04C4
  return; // 800C04C8
}

// fn_800C04CC
void f_800C04CC(Ctx* __restrict c) {
  trace_call(0x800C04CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C04CC
  c->r[0]=c->lr; // 800C04D0
  c->r[3]=0u+0x00000104u; // 800C04D4
  c->r[4]=c->r[13]+0xFFFFADE1u; // 800C04D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C04DC
  c->r[5]=0u+0x00000000u; // 800C04E0
  c->r[6]=0u+0x00001001u; // 800C04E4
  c->lr=0x800C04ECu; f_80244D20(c); // 800C04E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C04EC
  if (crb(c,2)) { goto L_800C04F8; } // 800C04F0
  c->lr=0x800C04F8u; f_800C0420(c); // 800C04F4
L_800C04F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C04F8
  c->lr=c->r[0]; // 800C04FC
  c->r[1]=c->r[1]+0x00000010u; // 800C0500
  return; // 800C0504
}

// fn_800C0508
void f_800C0508(Ctx* __restrict c) {
  trace_call(0x800C0508u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0508
  c->r[0]=c->lr; // 800C050C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0514
  c->r[31]=c->r[3]|c->r[3]; // 800C0518
  c->lr=0x800C0520u; f_80244520(c); // 800C051C
  c->r[7]=c->r[3]|c->r[3]; // 800C0520
  c->r[9]=c->r[31]|c->r[31]; // 800C0524
  c->r[3]=0u+0x00000104u; // 800C0528
  c->r[4]=c->r[13]+0xFFFFADE6u; // 800C052C
  c->r[5]=0u+0x00000000u; // 800C0530
  c->r[6]=0u+0x00002001u; // 800C0534
  c->r[8]=0u+0x00000000u; // 800C0538
  c->lr=0x800C0540u; f_80242DF0(c); // 800C053C
  c->r[4]=c->r[3]|c->r[3]; // 800C0540
  c->r[3]=0u+0x00000104u; // 800C0544
  c->r[5]=c->r[13]+0xFFFFADEBu; // 800C0548
  c->r[6]=0u+0x00000000u; // 800C054C
  c->r[7]=0u+0x00001001u; // 800C0550
  c->lr=0x800C0558u; f_80244DB0(c); // 800C0554
  cmps(c,0,(int32_t)c->r[3],0); // 800C0558
  if (crb(c,2)) { goto L_800C0564; } // 800C055C
  c->lr=0x800C0564u; f_800C0420(c); // 800C0560
L_800C0564:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0568
  c->lr=c->r[0]; // 800C056C
  c->r[1]=c->r[1]+0x00000010u; // 800C0570
  return; // 800C0574
}

// fn_800C0578
void f_800C0578(Ctx* __restrict c) {
  trace_call(0x800C0578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0578
  c->r[0]=c->lr; // 800C057C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0584
  c->r[31]=c->r[3]|c->r[3]; // 800C0588
  c->lr=0x800C0590u; f_802B1168(c); // 800C058C
  c->r[7]=0u+0x80420000u; // 800C0590
  c->r[5]=0u+0x80410000u; // 800C0594
  c->r[6]=0u+0x00000000u; // 800C0598
  c->r[4]=0u+0xEBDF0000u; // 800C059C
  c->r[3]=0u+0x2E650000u; // 800C05A0
  c->r[7]=c->r[7]+0xFFFFA03Cu; // 800C05A4
  c->r[0]=c->r[3]+0xFFFF90A1u; // 800C05A8
  c->r[5]=c->r[5]+0xFFFFCCECu; // 800C05AC
  c->r[4]=c->r[4]+0xFFFFBF33u; // 800C05B0
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C05B4
  c->r[3]=c->r[31]|c->r[31]; // 800C05B8
  W32(c->r[31]+0x00000190u,c->r[6]); // 800C05BC
  W32(c->r[31]+0x00000000u,c->r[5]); // 800C05C0
  W32(c->r[31]+0x00000008u,c->r[6]); // 800C05C4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C05C8
  W32(c->r[31]+0x00000010u,c->r[6]); // 800C05CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C05D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C05D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C05D8
  c->lr=c->r[0]; // 800C05DC
  c->r[1]=c->r[1]+0x00000010u; // 800C05E0
  return; // 800C05E4
}

// fn_800C05E8
void f_800C05E8(Ctx* __restrict c) {
  trace_call(0x800C05E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C05E8
  c->r[0]=c->lr; // 800C05EC
  cmps(c,0,(int32_t)c->r[4],0); // 800C05F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C05F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C05F8
  c->r[30]=c->r[3]|c->r[3]; // 800C05FC
  c->r[31]=c->r[4]|c->r[4]; // 800C0600
  if (crb(c,2)) { goto L_800C0658; } // 800C0604
  c->r[3]=c->r[31]|c->r[31]; // 800C0608
  c->lr=0x800C0610u; f_80244520(c); // 800C060C
  c->r[7]=c->r[3]|c->r[3]; // 800C0610
  c->r[9]=c->r[31]|c->r[31]; // 800C0614
  c->r[3]=0u+0x00000194u; // 800C0618
  c->r[4]=c->r[13]+0xFFFFADF0u; // 800C061C
  c->r[5]=0u+0x00000000u; // 800C0620
  c->r[6]=0u+0x00002001u; // 800C0624
  c->r[8]=0u+0x00000000u; // 800C0628
  c->lr=0x800C0630u; f_80242DF0(c); // 800C062C
  c->r[4]=c->r[3]|c->r[3]; // 800C0630
  c->r[3]=0u+0x00000194u; // 800C0634
  c->r[5]=c->r[13]+0xFFFFADF5u; // 800C0638
  c->r[6]=0u+0x00000000u; // 800C063C
  c->r[7]=0u+0x00001001u; // 800C0640
  c->lr=0x800C0648u; f_80244DB0(c); // 800C0644
  cmps(c,0,(int32_t)c->r[3],0); // 800C0648
  if (crb(c,2)) { goto L_800C0678; } // 800C064C
  c->lr=0x800C0654u; f_800C0578(c); // 800C0650
  goto L_800C0678; // 800C0654
L_800C0658:;
  c->r[3]=0u+0x00000194u; // 800C0658
  c->r[4]=c->r[13]+0xFFFFADFAu; // 800C065C
  c->r[5]=0u+0x00000000u; // 800C0660
  c->r[6]=0u+0x00001001u; // 800C0664
  c->lr=0x800C066Cu; f_80244D20(c); // 800C0668
  cmps(c,0,(int32_t)c->r[3],0); // 800C066C
  if (crb(c,2)) { goto L_800C0678; } // 800C0670
  c->lr=0x800C0678u; f_800C0578(c); // 800C0674
L_800C0678:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C0678
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C067C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C0680
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C0684
  c->lr=c->r[0]; // 800C0688
  c->r[1]=c->r[1]+0x00000010u; // 800C068C
  return; // 800C0690
}

// fn_800C0694
void f_800C0694(Ctx* __restrict c) {
  trace_call(0x800C0694u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0694
  c->r[0]=c->lr; // 800C0698
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C069C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C06A0
  c->r[30]=c->r[4]|c->r[4]; // 800C06A4
  c->r[29]=c->r[3]|c->r[3]; // 800C06A8
  c->r[4]=0u+0x00000000u; // 800C06AC
  c->r[3]=c->r[30]|c->r[30]; // 800C06B0
  c->lr=0x800C06B8u; f_8030BE30(c); // 800C06B4
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 800C06B8
  c->r[31]=0u+0x00000000u; // 800C06BC
  c->r[3]=c->r[30]|c->r[30]; // 800C06C0
  W32(c->r[29]+0x00000020u,c->r[31]); // 800C06C4
  c->lr=0x800C06CCu; f_8030BD1C(c); // 800C06C8
  W32(c->r[29]+0x00000024u,c->r[3]); // 800C06CC
  c->r[3]=c->r[30]|c->r[30]; // 800C06D0
  c->r[4]=0u+0x00000000u; // 800C06D4
  c->lr=0x800C06DCu; f_8030BE30(c); // 800C06D8
  W32(c->r[29]+0x00000028u,c->r[3]); // 800C06DC
  c->r[3]=c->r[30]|c->r[30]; // 800C06E0
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 800C06E4
  c->lr=0x800C06ECu; f_8030BD1C(c); // 800C06E8
  W32(c->r[29]+0x00000030u,c->r[3]); // 800C06EC
  c->r[3]=c->r[30]|c->r[30]; // 800C06F0
  c->r[4]=0u+0x00000000u; // 800C06F4
  c->lr=0x800C06FCu; f_8030BE30(c); // 800C06F8
  W32(c->r[29]+0x00000034u,c->r[3]); // 800C06FC
  c->r[3]=c->r[30]|c->r[30]; // 800C0700
  W32(c->r[29]+0x00000038u,c->r[31]); // 800C0704
  c->lr=0x800C070Cu; f_8030BD1C(c); // 800C0708
  W32(c->r[29]+0x0000003Cu,c->r[3]); // 800C070C
  c->r[3]=c->r[30]|c->r[30]; // 800C0710
  c->r[4]=0u+0x00000000u; // 800C0714
  c->lr=0x800C071Cu; f_8030BE30(c); // 800C0718
  W32(c->r[29]+0x00000040u,c->r[3]); // 800C071C
  c->r[3]=c->r[30]|c->r[30]; // 800C0720
  W32(c->r[29]+0x00000044u,c->r[31]); // 800C0724
  c->lr=0x800C072Cu; f_8030BD1C(c); // 800C0728
  W32(c->r[29]+0x00000048u,c->r[3]); // 800C072C
  c->r[3]=c->r[30]|c->r[30]; // 800C0730
  c->r[4]=0u+0x00000000u; // 800C0734
  c->lr=0x800C073Cu; f_8030BE30(c); // 800C0738
  W32(c->r[29]+0x0000004Cu,c->r[3]); // 800C073C
  c->r[3]=c->r[30]|c->r[30]; // 800C0740
  W32(c->r[29]+0x00000050u,c->r[31]); // 800C0744
  c->lr=0x800C074Cu; f_8030BD1C(c); // 800C0748
  W32(c->r[29]+0x00000054u,c->r[3]); // 800C074C
  c->r[3]=c->r[30]|c->r[30]; // 800C0750
  c->r[4]=0u+0x00000000u; // 800C0754
  c->lr=0x800C075Cu; f_8030BE30(c); // 800C0758
  W32(c->r[29]+0x00000058u,c->r[3]); // 800C075C
  c->r[3]=c->r[30]|c->r[30]; // 800C0760
  W32(c->r[29]+0x0000005Cu,c->r[31]); // 800C0764
  c->lr=0x800C076Cu; f_8030BD1C(c); // 800C0768
  W32(c->r[29]+0x00000060u,c->r[3]); // 800C076C
  c->r[3]=c->r[30]|c->r[30]; // 800C0770
  c->r[4]=0u+0x00000000u; // 800C0774
  c->lr=0x800C077Cu; f_8030BE30(c); // 800C0778
  W32(c->r[29]+0x00000064u,c->r[3]); // 800C077C
  c->r[3]=c->r[30]|c->r[30]; // 800C0780
  W32(c->r[29]+0x00000068u,c->r[31]); // 800C0784
  c->lr=0x800C078Cu; f_8030BD1C(c); // 800C0788
  W32(c->r[29]+0x0000006Cu,c->r[3]); // 800C078C
  c->r[3]=c->r[30]|c->r[30]; // 800C0790
  c->r[4]=0u+0x00000000u; // 800C0794
  c->lr=0x800C079Cu; f_8030BE30(c); // 800C0798
  W32(c->r[29]+0x00000070u,c->r[3]); // 800C079C
  c->r[3]=c->r[30]|c->r[30]; // 800C07A0
  W32(c->r[29]+0x00000074u,c->r[31]); // 800C07A4
  c->lr=0x800C07ACu; f_8030BD1C(c); // 800C07A8
  W32(c->r[29]+0x00000078u,c->r[3]); // 800C07AC
  c->r[3]=c->r[30]|c->r[30]; // 800C07B0
  c->r[4]=0u+0x00000000u; // 800C07B4
  c->lr=0x800C07BCu; f_8030BE30(c); // 800C07B8
  W32(c->r[29]+0x0000007Cu,c->r[3]); // 800C07BC
  c->r[3]=c->r[30]|c->r[30]; // 800C07C0
  W32(c->r[29]+0x00000080u,c->r[31]); // 800C07C4
  c->lr=0x800C07CCu; f_8030BD1C(c); // 800C07C8
  W32(c->r[29]+0x00000084u,c->r[3]); // 800C07CC
  c->r[3]=c->r[30]|c->r[30]; // 800C07D0
  c->r[4]=0u+0x00000000u; // 800C07D4
  c->lr=0x800C07DCu; f_8030BE30(c); // 800C07D8
  W32(c->r[29]+0x00000088u,c->r[3]); // 800C07DC
  c->r[3]=c->r[30]|c->r[30]; // 800C07E0
  W32(c->r[29]+0x0000008Cu,c->r[31]); // 800C07E4
  c->lr=0x800C07ECu; f_8030BD1C(c); // 800C07E8
  W32(c->r[29]+0x00000090u,c->r[3]); // 800C07EC
  c->r[3]=c->r[30]|c->r[30]; // 800C07F0
  c->r[4]=0u+0x00000000u; // 800C07F4
  c->lr=0x800C07FCu; f_8030BE30(c); // 800C07F8
  W32(c->r[29]+0x00000094u,c->r[3]); // 800C07FC
  c->r[3]=c->r[30]|c->r[30]; // 800C0800
  W32(c->r[29]+0x00000098u,c->r[31]); // 800C0804
  c->lr=0x800C080Cu; f_8030BD1C(c); // 800C0808
  W32(c->r[29]+0x0000009Cu,c->r[3]); // 800C080C
  c->r[3]=c->r[30]|c->r[30]; // 800C0810
  c->r[4]=0u+0x00000000u; // 800C0814
  c->lr=0x800C081Cu; f_8030BE30(c); // 800C0818
  W32(c->r[29]+0x000000A0u,c->r[3]); // 800C081C
  c->r[3]=c->r[30]|c->r[30]; // 800C0820
  W32(c->r[29]+0x000000A4u,c->r[31]); // 800C0824
  c->lr=0x800C082Cu; f_8030BD1C(c); // 800C0828
  W32(c->r[29]+0x000000A8u,c->r[3]); // 800C082C
  c->r[3]=c->r[30]|c->r[30]; // 800C0830
  c->r[4]=0u+0x00000000u; // 800C0834
  c->lr=0x800C083Cu; f_8030BE30(c); // 800C0838
  W32(c->r[29]+0x000000ACu,c->r[3]); // 800C083C
  c->r[3]=c->r[30]|c->r[30]; // 800C0840
  W32(c->r[29]+0x000000B0u,c->r[31]); // 800C0844
  c->lr=0x800C084Cu; f_8030BD1C(c); // 800C0848
  W32(c->r[29]+0x000000B4u,c->r[3]); // 800C084C
  c->r[3]=c->r[30]|c->r[30]; // 800C0850
  c->r[4]=0u+0x00000000u; // 800C0854
  c->lr=0x800C085Cu; f_8030BE30(c); // 800C0858
  W32(c->r[29]+0x000000B8u,c->r[3]); // 800C085C
  c->r[3]=c->r[30]|c->r[30]; // 800C0860
  W32(c->r[29]+0x000000BCu,c->r[31]); // 800C0864
  c->lr=0x800C086Cu; f_8030BD1C(c); // 800C0868
  W32(c->r[29]+0x000000C0u,c->r[3]); // 800C086C
  c->r[3]=c->r[30]|c->r[30]; // 800C0870
  c->r[4]=0u+0x00000000u; // 800C0874
  c->lr=0x800C087Cu; f_8030BE30(c); // 800C0878
  W32(c->r[29]+0x000000C4u,c->r[3]); // 800C087C
  c->r[3]=c->r[30]|c->r[30]; // 800C0880
  W32(c->r[29]+0x000000C8u,c->r[31]); // 800C0884
  c->lr=0x800C088Cu; f_8030BD1C(c); // 800C0888
  W32(c->r[29]+0x000000CCu,c->r[3]); // 800C088C
  c->r[3]=c->r[30]|c->r[30]; // 800C0890
  c->r[4]=0u+0x00000000u; // 800C0894
  c->lr=0x800C089Cu; f_8030BE30(c); // 800C0898
  W32(c->r[29]+0x000000D0u,c->r[3]); // 800C089C
  c->r[3]=c->r[30]|c->r[30]; // 800C08A0
  W32(c->r[29]+0x000000D4u,c->r[31]); // 800C08A4
  c->lr=0x800C08ACu; f_8030BD1C(c); // 800C08A8
  W32(c->r[29]+0x000000D8u,c->r[3]); // 800C08AC
  c->r[3]=c->r[30]|c->r[30]; // 800C08B0
  c->r[4]=0u+0x00000000u; // 800C08B4
  c->lr=0x800C08BCu; f_8030BE30(c); // 800C08B8
  W32(c->r[29]+0x000000DCu,c->r[3]); // 800C08BC
  c->r[3]=c->r[30]|c->r[30]; // 800C08C0
  W32(c->r[29]+0x000000E0u,c->r[31]); // 800C08C4
  c->lr=0x800C08CCu; f_8030BD1C(c); // 800C08C8
  W32(c->r[29]+0x000000E4u,c->r[3]); // 800C08CC
  c->r[3]=c->r[30]|c->r[30]; // 800C08D0
  c->r[4]=0u+0x00000000u; // 800C08D4
  c->lr=0x800C08DCu; f_8030BE30(c); // 800C08D8
  W32(c->r[29]+0x000000E8u,c->r[3]); // 800C08DC
  c->r[3]=c->r[30]|c->r[30]; // 800C08E0
  W32(c->r[29]+0x000000ECu,c->r[31]); // 800C08E4
  c->lr=0x800C08ECu; f_8030BD1C(c); // 800C08E8
  W32(c->r[29]+0x000000F0u,c->r[3]); // 800C08EC
  c->r[3]=c->r[30]|c->r[30]; // 800C08F0
  c->r[4]=0u+0x00000000u; // 800C08F4
  c->lr=0x800C08FCu; f_8030BE30(c); // 800C08F8
  W32(c->r[29]+0x000000F4u,c->r[3]); // 800C08FC
  c->r[3]=c->r[30]|c->r[30]; // 800C0900
  W32(c->r[29]+0x000000F8u,c->r[31]); // 800C0904
  c->lr=0x800C090Cu; f_8030BD1C(c); // 800C0908
  W32(c->r[29]+0x000000FCu,c->r[3]); // 800C090C
  c->r[3]=c->r[30]|c->r[30]; // 800C0910
  c->r[4]=0u+0x00000000u; // 800C0914
  c->lr=0x800C091Cu; f_8030BE30(c); // 800C0918
  W32(c->r[29]+0x00000100u,c->r[3]); // 800C091C
  c->r[3]=c->r[30]|c->r[30]; // 800C0920
  W32(c->r[29]+0x00000104u,c->r[31]); // 800C0924
  c->lr=0x800C092Cu; f_8030BD1C(c); // 800C0928
  W32(c->r[29]+0x00000108u,c->r[3]); // 800C092C
  c->r[3]=c->r[30]|c->r[30]; // 800C0930
  c->r[4]=0u+0x00000000u; // 800C0934
  c->lr=0x800C093Cu; f_8030BE30(c); // 800C0938
  W32(c->r[29]+0x0000010Cu,c->r[3]); // 800C093C
  c->r[3]=c->r[30]|c->r[30]; // 800C0940
  W32(c->r[29]+0x00000110u,c->r[31]); // 800C0944
  c->lr=0x800C094Cu; f_8030BD1C(c); // 800C0948
  W32(c->r[29]+0x00000114u,c->r[3]); // 800C094C
  c->r[3]=c->r[30]|c->r[30]; // 800C0950
  c->r[4]=0u+0x00000000u; // 800C0954
  c->lr=0x800C095Cu; f_8030BE30(c); // 800C0958
  W32(c->r[29]+0x00000118u,c->r[3]); // 800C095C
  c->r[3]=c->r[30]|c->r[30]; // 800C0960
  W32(c->r[29]+0x0000011Cu,c->r[31]); // 800C0964
  c->lr=0x800C096Cu; f_8030BD1C(c); // 800C0968
  W32(c->r[29]+0x00000120u,c->r[3]); // 800C096C
  c->r[3]=c->r[30]|c->r[30]; // 800C0970
  c->r[4]=0u+0x00000000u; // 800C0974
  c->lr=0x800C097Cu; f_8030BE30(c); // 800C0978
  W32(c->r[29]+0x00000124u,c->r[3]); // 800C097C
  c->r[3]=c->r[30]|c->r[30]; // 800C0980
  W32(c->r[29]+0x00000128u,c->r[31]); // 800C0984
  c->lr=0x800C098Cu; f_8030BD1C(c); // 800C0988
  W32(c->r[29]+0x0000012Cu,c->r[3]); // 800C098C
  c->r[3]=c->r[30]|c->r[30]; // 800C0990
  c->r[4]=0u+0x00000000u; // 800C0994
  c->lr=0x800C099Cu; f_8030BE30(c); // 800C0998
  W32(c->r[29]+0x00000130u,c->r[3]); // 800C099C
  c->r[3]=c->r[30]|c->r[30]; // 800C09A0
  W32(c->r[29]+0x00000134u,c->r[31]); // 800C09A4
  c->lr=0x800C09ACu; f_8030BD1C(c); // 800C09A8
  W32(c->r[29]+0x00000138u,c->r[3]); // 800C09AC
  c->r[3]=c->r[30]|c->r[30]; // 800C09B0
  c->r[4]=0u+0x00000000u; // 800C09B4
  c->lr=0x800C09BCu; f_8030BE30(c); // 800C09B8
  W32(c->r[29]+0x0000013Cu,c->r[3]); // 800C09BC
  c->r[3]=c->r[30]|c->r[30]; // 800C09C0
  W32(c->r[29]+0x00000140u,c->r[31]); // 800C09C4
  c->lr=0x800C09CCu; f_8030BD1C(c); // 800C09C8
  W32(c->r[29]+0x00000144u,c->r[3]); // 800C09CC
  c->r[3]=c->r[30]|c->r[30]; // 800C09D0
  c->r[4]=0u+0x00000000u; // 800C09D4
  c->lr=0x800C09DCu; f_8030BE30(c); // 800C09D8
  W32(c->r[29]+0x00000148u,c->r[3]); // 800C09DC
  c->r[3]=c->r[30]|c->r[30]; // 800C09E0
  W32(c->r[29]+0x0000014Cu,c->r[31]); // 800C09E4
  c->lr=0x800C09ECu; f_8030BD1C(c); // 800C09E8
  W32(c->r[29]+0x00000150u,c->r[3]); // 800C09EC
  c->r[3]=c->r[30]|c->r[30]; // 800C09F0
  c->r[4]=0u+0x00000000u; // 800C09F4
  c->lr=0x800C09FCu; f_8030BE30(c); // 800C09F8
  W32(c->r[29]+0x00000154u,c->r[3]); // 800C09FC
  c->r[3]=c->r[30]|c->r[30]; // 800C0A00
  W32(c->r[29]+0x00000158u,c->r[31]); // 800C0A04
  c->lr=0x800C0A0Cu; f_8030BD1C(c); // 800C0A08
  W32(c->r[29]+0x0000015Cu,c->r[3]); // 800C0A0C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A10
  c->r[4]=0u+0x00000000u; // 800C0A14
  c->lr=0x800C0A1Cu; f_8030BE30(c); // 800C0A18
  W32(c->r[29]+0x00000160u,c->r[3]); // 800C0A1C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A20
  W32(c->r[29]+0x00000164u,c->r[31]); // 800C0A24
  c->lr=0x800C0A2Cu; f_8030BD1C(c); // 800C0A28
  W32(c->r[29]+0x00000168u,c->r[3]); // 800C0A2C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A30
  c->r[4]=0u+0x00000000u; // 800C0A34
  c->lr=0x800C0A3Cu; f_8030BE30(c); // 800C0A38
  W32(c->r[29]+0x0000016Cu,c->r[3]); // 800C0A3C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A40
  W32(c->r[29]+0x00000170u,c->r[31]); // 800C0A44
  c->lr=0x800C0A4Cu; f_8030BD1C(c); // 800C0A48
  W32(c->r[29]+0x00000174u,c->r[3]); // 800C0A4C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A50
  c->r[4]=0u+0x00000000u; // 800C0A54
  c->lr=0x800C0A5Cu; f_8030BE30(c); // 800C0A58
  W32(c->r[29]+0x00000178u,c->r[3]); // 800C0A5C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A60
  W32(c->r[29]+0x0000017Cu,c->r[31]); // 800C0A64
  c->lr=0x800C0A6Cu; f_8030BD1C(c); // 800C0A68
  W32(c->r[29]+0x00000180u,c->r[3]); // 800C0A6C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A70
  c->r[4]=0u+0x00000000u; // 800C0A74
  c->lr=0x800C0A7Cu; f_8030BE30(c); // 800C0A78
  W32(c->r[29]+0x00000184u,c->r[3]); // 800C0A7C
  c->r[3]=c->r[30]|c->r[30]; // 800C0A80
  W32(c->r[29]+0x00000188u,c->r[31]); // 800C0A84
  c->lr=0x800C0A8Cu; f_8030BD1C(c); // 800C0A88
  W32(c->r[29]+0x0000018Cu,c->r[3]); // 800C0A8C
  c->r[3]=0u+0x00000000u; // 800C0A90
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C0A94
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0A98
  c->lr=c->r[0]; // 800C0A9C
  c->r[1]=c->r[1]+0x00000020u; // 800C0AA0
  return; // 800C0AA4
}

// fn_800C0AA8
void f_800C0AA8(Ctx* __restrict c) {
  trace_call(0x800C0AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0AA8
  c->r[0]=c->lr; // 800C0AAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C0AB0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C0AB4
  c->r[28]=c->r[3]|c->r[3]; // 800C0AB8
  c->r[29]=c->r[4]|c->r[4]; // 800C0ABC
  c->r[30]=c->r[5]|c->r[5]; // 800C0AC0
  c->r[31]=c->r[6]|c->r[6]; // 800C0AC4
  c->r[7]=R32(c->r[3]+0x00000190u); // 800C0AC8
  cmps(c,0,(int32_t)c->r[7],0); // 800C0ACC
  if (!crb(c,0)) { goto L_800C0AE0; } // 800C0AD0
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800C0AD4
  W32(c->r[3]+0x00000190u,c->r[0]); // 800C0AD8
  goto L_800C0AF0; // 800C0ADC
L_800C0AE0:;
  c->r[0]=c->r[7]+0x00000001u; // 800C0AE0
  W32(c->r[3]+0x00000190u,c->r[0]); // 800C0AE4
  cmps(c,0,(int32_t)c->r[0],1); // 800C0AE8
  if (crb(c,1)) { goto L_800C1908; } // 800C0AEC
L_800C0AF0:;
  c->r[3]=c->r[28]|c->r[28]; // 800C0AF0
  c->r[4]=c->r[29]|c->r[29]; // 800C0AF4
  c->r[5]=c->r[30]|c->r[30]; // 800C0AF8
  c->r[6]=c->r[31]|c->r[31]; // 800C0AFC
  c->lr=0x800C0B04u; f_802B11C0(c); // 800C0B00
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800C0B04
  cmps(c,0,(int32_t)c->r[4],0); // 800C0B08
  if (crb(c,2)) { goto L_800C0BAC; } // 800C0B0C
  c->r[0]=0u+0x00000000u; // 800C0B10
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C0B14
  c->r[6]=c->r[29]|c->r[29]; // 800C0B18
  c->r[7]=c->r[30]|c->r[30]; // 800C0B1C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C0B20
  c->r[8]=c->r[31]|c->r[31]; // 800C0B24
  c->r[9]=R32(c->r[28]+0x00000024u); // 800C0B28
  c->r[5]=0u+0x00000000u; // 800C0B2C
  c->r[10]=0u+0x00000001u; // 800C0B30
  c->lr=0x800C0B38u; f_80281A84(c); // 800C0B34
  cmps(c,0,(int32_t)c->r[3],0); // 800C0B38
  W32(c->r[28]+0x00000020u,c->r[3]); // 800C0B3C
  if (crb(c,2)) { goto L_800C0B4C; } // 800C0B40
  c->lr=0x800C0B48u; f_80295B6C(c); // 800C0B44
  goto L_800C0BAC; // 800C0B48
L_800C0B4C:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 800C0B4C
  c->r[4]=c->r[31]|c->r[31]; // 800C0B50
  c->r[5]=c->r[30]|c->r[30]; // 800C0B54
  c->lr=0x800C0B5Cu; f_802C0F98(c); // 800C0B58
  c->r[27]=c->r[3]|c->r[3]; // 800C0B5C
  c->r[3]=0u+0x00000050u; // 800C0B60
  c->r[4]=c->r[13]+0xFFFFADFFu; // 800C0B64
  c->r[5]=0u+0x00000000u; // 800C0B68
  c->r[6]=0u+0x00001001u; // 800C0B6C
  c->lr=0x800C0B74u; f_80244D20(c); // 800C0B70
  cmps(c,0,(int32_t)c->r[3],0); // 800C0B74
  if (crb(c,2)) { goto L_800C0B88; } // 800C0B78
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 800C0B7C
  c->r[4]=c->r[27]|c->r[27]; // 800C0B80
  c->lr=0x800C0B88u; f_80297BA8(c); // 800C0B84
L_800C0B88:;
  W32(c->r[28]+0x00000020u,c->r[3]); // 800C0B88
  c->r[4]=c->r[29]|c->r[29]; // 800C0B8C
  c->r[7]=R32(c->r[28]+0x00000024u); // 800C0B90
  c->r[5]=c->r[30]|c->r[30]; // 800C0B94
  c->r[6]=c->r[31]|c->r[31]; // 800C0B98
  c->r[8]=0u+0x00000001u; // 800C0B9C
  c->r[9]=0u+0x00000000u; // 800C0BA0
  c->lr=0x800C0BA8u; f_8027FFF4(c); // 800C0BA4
  W32(c->r[28]+0x00000020u,c->r[3]); // 800C0BA8
L_800C0BAC:;
  c->r[4]=R32(c->r[28]+0x00000028u); // 800C0BAC
  cmps(c,0,(int32_t)c->r[4],0); // 800C0BB0
  if (crb(c,2)) { goto L_800C0C54; } // 800C0BB4
  c->r[0]=0u+0x00000000u; // 800C0BB8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C0BBC
  c->r[6]=c->r[29]|c->r[29]; // 800C0BC0
  c->r[7]=c->r[30]|c->r[30]; // 800C0BC4
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C0BC8
  c->r[8]=c->r[31]|c->r[31]; // 800C0BCC
  c->r[9]=R32(c->r[28]+0x00000030u); // 800C0BD0
  c->r[5]=0u+0x00000000u; // 800C0BD4
  c->r[10]=0u+0x00000001u; // 800C0BD8
  c->lr=0x800C0BE0u; f_80281A84(c); // 800C0BDC
  cmps(c,0,(int32_t)c->r[3],0); // 800C0BE0
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 800C0BE4
  if (crb(c,2)) { goto L_800C0BF4; } // 800C0BE8
  c->lr=0x800C0BF0u; f_80295B6C(c); // 800C0BEC
  goto L_800C0C54; // 800C0BF0
L_800C0BF4:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 800C0BF4
  c->r[4]=c->r[31]|c->r[31]; // 800C0BF8
  c->r[5]=c->r[30]|c->r[30]; // 800C0BFC
  c->lr=0x800C0C04u; f_802C0F98(c); // 800C0C00
  c->r[27]=c->r[3]|c->r[3]; // 800C0C04
  c->r[3]=0u+0x00000050u; // 800C0C08
  c->r[4]=c->r[13]+0xFFFFAE04u; // 800C0C0C
  c->r[5]=0u+0x00000000u; // 800C0C10
  c->r[6]=0u+0x00001001u; // 800C0C14
  c->lr=0x800C0C1Cu; f_80244D20(c); // 800C0C18
  cmps(c,0,(int32_t)c->r[3],0); // 800C0C1C
  if (crb(c,2)) { goto L_800C0C30; } // 800C0C20
  c->r[5]=R32(c->r[28]+0x00000028u); // 800C0C24
  c->r[4]=c->r[27]|c->r[27]; // 800C0C28
  c->lr=0x800C0C30u; f_80297BA8(c); // 800C0C2C
L_800C0C30:;
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 800C0C30
  c->r[4]=c->r[29]|c->r[29]; // 800C0C34
  c->r[7]=R32(c->r[28]+0x00000030u); // 800C0C38
  c->r[5]=c->r[30]|c->r[30]; // 800C0C3C
  c->r[6]=c->r[31]|c->r[31]; // 800C0C40
  c->r[8]=0u+0x00000001u; // 800C0C44
  c->r[9]=0u+0x00000000u; // 800C0C48
  c->lr=0x800C0C50u; f_8027FFF4(c); // 800C0C4C
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 800C0C50
L_800C0C54:;
  c->r[4]=R32(c->r[28]+0x00000034u); // 800C0C54
  cmps(c,0,(int32_t)c->r[4],0); // 800C0C58
  if (crb(c,2)) { goto L_800C0CFC; } // 800C0C5C
  c->r[0]=0u+0x00000000u; // 800C0C60
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C0C64
  c->r[6]=c->r[29]|c->r[29]; // 800C0C68
  c->r[7]=c->r[30]|c->r[30]; // 800C0C6C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C0C70
  c->r[8]=c->r[31]|c->r[31]; // 800C0C74
  c->r[9]=R32(c->r[28]+0x0000003Cu); // 800C0C78
  c->r[5]=0u+0x00000000u; // 800C0C7C
  c->r[10]=0u+0x00000001u; // 800C0C80
  c->lr=0x800C0C88u; f_80281A84(c); // 800C0C84
  cmps(c,0,(int32_t)c->r[3],0); // 800C0C88
  W32(c->r[28]+0x00000038u,c->r[3]); // 800C0C8C
  if (crb(c,2)) { goto L_800C0C9C; } // 800C0C90
  c->lr=0x800C0C98u; f_80295B6C(c); // 800C0C94
  goto L_800C0CFC; // 800C0C98
L_800C0C9C:;
  c->r[3]=R32(c->r[28]+0x0000003Cu); // 800C0C9C
  c->r[4]=c->r[31]|c->r[31]; // 800C0CA0
  c->r[5]=c->r[30]|c->r[30]; // 800C0CA4
  c->lr=0x800C0CACu; f_802C0F98(c); // 800C0CA8
  c->r[27]=c->r[3]|c->r[3]; // 800C0CAC
  c->r[3]=0u+0x00000050u; // 800C0CB0
  c->r[4]=c->r[13]+0xFFFFAE09u; // 800C0CB4
  c->r[5]=0u+0x00000000u; // 800C0CB8
  c->r[6]=0u+0x00001001u; // 800C0CBC
  c->lr=0x800C0CC4u; f_80244D20(c); // 800C0CC0
  cmps(c,0,(int32_t)c->r[3],0); // 800C0CC4
  if (crb(c,2)) { goto L_800C0CD8; } // 800C0CC8
  c->r[5]=R32(c->r[28]+0x00000034u); // 800C0CCC
  c->r[4]=c->r[27]|c->r[27]; // 800C0CD0
  c->lr=0x800C0CD8u; f_80297BA8(c); // 800C0CD4
L_800C0CD8:;
  W32(c->r[28]+0x00000038u,c->r[3]); // 800C0CD8
  c->r[4]=c->r[29]|c->r[29]; // 800C0CDC
  c->r[7]=R32(c->r[28]+0x0000003Cu); // 800C0CE0
  c->r[5]=c->r[30]|c->r[30]; // 800C0CE4
  c->r[6]=c->r[31]|c->r[31]; // 800C0CE8
  c->r[8]=0u+0x00000001u; // 800C0CEC
  c->r[9]=0u+0x00000000u; // 800C0CF0
  c->lr=0x800C0CF8u; f_8027FFF4(c); // 800C0CF4
  W32(c->r[28]+0x00000038u,c->r[3]); // 800C0CF8
L_800C0CFC:;
  c->r[4]=R32(c->r[28]+0x00000040u); // 800C0CFC
  cmps(c,0,(int32_t)c->r[4],0); // 800C0D00
  if (crb(c,2)) { goto L_800C0DA4; } // 800C0D04
  c->r[0]=0u+0x00000000u; // 800C0D08
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C0D0C
  c->r[6]=c->r[29]|c->r[29]; // 800C0D10
  c->r[7]=c->r[30]|c->r[30]; // 800C0D14
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C0D18
  c->r[8]=c->r[31]|c->r[31]; // 800C0D1C
  c->r[9]=R32(c->r[28]+0x00000048u); // 800C0D20
  c->r[5]=0u+0x00000000u; // 800C0D24
  c->r[10]=0u+0x00000001u; // 800C0D28
  c->lr=0x800C0D30u; f_80281A84(c); // 800C0D2C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0D30
  W32(c->r[28]+0x00000044u,c->r[3]); // 800C0D34
  if (crb(c,2)) { goto L_800C0D44; } // 800C0D38
  c->lr=0x800C0D40u; f_80295B6C(c); // 800C0D3C
  goto L_800C0DA4; // 800C0D40
L_800C0D44:;
  c->r[3]=R32(c->r[28]+0x00000048u); // 800C0D44
  c->r[4]=c->r[31]|c->r[31]; // 800C0D48
  c->r[5]=c->r[30]|c->r[30]; // 800C0D4C
  c->lr=0x800C0D54u; f_802C0F98(c); // 800C0D50
  c->r[27]=c->r[3]|c->r[3]; // 800C0D54
  c->r[3]=0u+0x00000050u; // 800C0D58
  c->r[4]=c->r[13]+0xFFFFAE0Eu; // 800C0D5C
  c->r[5]=0u+0x00000000u; // 800C0D60
  c->r[6]=0u+0x00001001u; // 800C0D64
  c->lr=0x800C0D6Cu; f_80244D20(c); // 800C0D68
  cmps(c,0,(int32_t)c->r[3],0); // 800C0D6C
  if (crb(c,2)) { goto L_800C0D80; } // 800C0D70
  c->r[5]=R32(c->r[28]+0x00000040u); // 800C0D74
  c->r[4]=c->r[27]|c->r[27]; // 800C0D78
  c->lr=0x800C0D80u; f_80297BA8(c); // 800C0D7C
L_800C0D80:;
  W32(c->r[28]+0x00000044u,c->r[3]); // 800C0D80
  c->r[4]=c->r[29]|c->r[29]; // 800C0D84
  c->r[7]=R32(c->r[28]+0x00000048u); // 800C0D88
  c->r[5]=c->r[30]|c->r[30]; // 800C0D8C
  c->r[6]=c->r[31]|c->r[31]; // 800C0D90
  c->r[8]=0u+0x00000001u; // 800C0D94
  c->r[9]=0u+0x00000000u; // 800C0D98
  c->lr=0x800C0DA0u; f_8027FFF4(c); // 800C0D9C
  W32(c->r[28]+0x00000044u,c->r[3]); // 800C0DA0
L_800C0DA4:;
  c->r[0]=R32(c->r[28]+0x0000004Cu); // 800C0DA4
  cmps(c,0,(int32_t)c->r[0],0); // 800C0DA8
  if (crb(c,2)) { goto L_800C0E10; } // 800C0DAC
  c->r[3]=R32(c->r[28]+0x00000054u); // 800C0DB0
  c->r[4]=c->r[31]|c->r[31]; // 800C0DB4
  c->r[5]=c->r[30]|c->r[30]; // 800C0DB8
  c->lr=0x800C0DC0u; f_802C0F98(c); // 800C0DBC
  c->r[27]=c->r[3]|c->r[3]; // 800C0DC0
  c->r[3]=0u+0x00000050u; // 800C0DC4
  c->r[4]=c->r[13]+0xFFFFAE13u; // 800C0DC8
  c->r[5]=0u+0x00000000u; // 800C0DCC
  c->r[6]=0u+0x00001001u; // 800C0DD0
  c->lr=0x800C0DD8u; f_80244D20(c); // 800C0DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C0DD8
  if (crb(c,2)) { goto L_800C0DEC; } // 800C0DDC
  c->r[5]=R32(c->r[28]+0x0000004Cu); // 800C0DE0
  c->r[4]=c->r[27]|c->r[27]; // 800C0DE4
  c->lr=0x800C0DECu; f_80297BA8(c); // 800C0DE8
L_800C0DEC:;
  W32(c->r[28]+0x00000050u,c->r[3]); // 800C0DEC
  c->r[4]=c->r[29]|c->r[29]; // 800C0DF0
  c->r[7]=R32(c->r[28]+0x00000054u); // 800C0DF4
  c->r[5]=c->r[30]|c->r[30]; // 800C0DF8
  c->r[6]=c->r[31]|c->r[31]; // 800C0DFC
  c->r[8]=0u+0x00000000u; // 800C0E00
  c->r[9]=0u+0x00000000u; // 800C0E04
  c->lr=0x800C0E0Cu; f_8027FFF4(c); // 800C0E08
  W32(c->r[28]+0x00000050u,c->r[3]); // 800C0E0C
L_800C0E10:;
  c->r[0]=R32(c->r[28]+0x00000058u); // 800C0E10
  cmps(c,0,(int32_t)c->r[0],0); // 800C0E14
  if (crb(c,2)) { goto L_800C0E7C; } // 800C0E18
  c->r[3]=R32(c->r[28]+0x00000060u); // 800C0E1C
  c->r[4]=c->r[31]|c->r[31]; // 800C0E20
  c->r[5]=c->r[30]|c->r[30]; // 800C0E24
  c->lr=0x800C0E2Cu; f_802C0F98(c); // 800C0E28
  c->r[27]=c->r[3]|c->r[3]; // 800C0E2C
  c->r[3]=0u+0x00000050u; // 800C0E30
  c->r[4]=c->r[13]+0xFFFFAE18u; // 800C0E34
  c->r[5]=0u+0x00000000u; // 800C0E38
  c->r[6]=0u+0x00001001u; // 800C0E3C
  c->lr=0x800C0E44u; f_80244D20(c); // 800C0E40
  cmps(c,0,(int32_t)c->r[3],0); // 800C0E44
  if (crb(c,2)) { goto L_800C0E58; } // 800C0E48
  c->r[5]=R32(c->r[28]+0x00000058u); // 800C0E4C
  c->r[4]=c->r[27]|c->r[27]; // 800C0E50
  c->lr=0x800C0E58u; f_80297BA8(c); // 800C0E54
L_800C0E58:;
  W32(c->r[28]+0x0000005Cu,c->r[3]); // 800C0E58
  c->r[4]=c->r[29]|c->r[29]; // 800C0E5C
  c->r[7]=R32(c->r[28]+0x00000060u); // 800C0E60
  c->r[5]=c->r[30]|c->r[30]; // 800C0E64
  c->r[6]=c->r[31]|c->r[31]; // 800C0E68
  c->r[8]=0u+0x00000000u; // 800C0E6C
  c->r[9]=0u+0x00000000u; // 800C0E70
  c->lr=0x800C0E78u; f_8027FFF4(c); // 800C0E74
  W32(c->r[28]+0x0000005Cu,c->r[3]); // 800C0E78
L_800C0E7C:;
  c->r[0]=R32(c->r[28]+0x00000064u); // 800C0E7C
  cmps(c,0,(int32_t)c->r[0],0); // 800C0E80
  if (crb(c,2)) { goto L_800C0EE8; } // 800C0E84
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 800C0E88
  c->r[4]=c->r[31]|c->r[31]; // 800C0E8C
  c->r[5]=c->r[30]|c->r[30]; // 800C0E90
  c->lr=0x800C0E98u; f_802C0F98(c); // 800C0E94
  c->r[27]=c->r[3]|c->r[3]; // 800C0E98
  c->r[3]=0u+0x00000050u; // 800C0E9C
  c->r[4]=c->r[13]+0xFFFFAE1Du; // 800C0EA0
  c->r[5]=0u+0x00000000u; // 800C0EA4
  c->r[6]=0u+0x00001001u; // 800C0EA8
  c->lr=0x800C0EB0u; f_80244D20(c); // 800C0EAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C0EB0
  if (crb(c,2)) { goto L_800C0EC4; } // 800C0EB4
  c->r[5]=R32(c->r[28]+0x00000064u); // 800C0EB8
  c->r[4]=c->r[27]|c->r[27]; // 800C0EBC
  c->lr=0x800C0EC4u; f_80297BA8(c); // 800C0EC0
L_800C0EC4:;
  W32(c->r[28]+0x00000068u,c->r[3]); // 800C0EC4
  c->r[4]=c->r[29]|c->r[29]; // 800C0EC8
  c->r[7]=R32(c->r[28]+0x0000006Cu); // 800C0ECC
  c->r[5]=c->r[30]|c->r[30]; // 800C0ED0
  c->r[6]=c->r[31]|c->r[31]; // 800C0ED4
  c->r[8]=0u+0x00000000u; // 800C0ED8
  c->r[9]=0u+0x00000000u; // 800C0EDC
  c->lr=0x800C0EE4u; f_8027FFF4(c); // 800C0EE0
  W32(c->r[28]+0x00000068u,c->r[3]); // 800C0EE4
L_800C0EE8:;
  c->r[0]=R32(c->r[28]+0x00000070u); // 800C0EE8
  cmps(c,0,(int32_t)c->r[0],0); // 800C0EEC
  if (crb(c,2)) { goto L_800C0F54; } // 800C0EF0
  c->r[3]=R32(c->r[28]+0x00000078u); // 800C0EF4
  c->r[4]=c->r[31]|c->r[31]; // 800C0EF8
  c->r[5]=c->r[30]|c->r[30]; // 800C0EFC
  c->lr=0x800C0F04u; f_802C0F98(c); // 800C0F00
  c->r[27]=c->r[3]|c->r[3]; // 800C0F04
  c->r[3]=0u+0x00000050u; // 800C0F08
  c->r[4]=c->r[13]+0xFFFFAE22u; // 800C0F0C
  c->r[5]=0u+0x00000000u; // 800C0F10
  c->r[6]=0u+0x00001001u; // 800C0F14
  c->lr=0x800C0F1Cu; f_80244D20(c); // 800C0F18
  cmps(c,0,(int32_t)c->r[3],0); // 800C0F1C
  if (crb(c,2)) { goto L_800C0F30; } // 800C0F20
  c->r[5]=R32(c->r[28]+0x00000070u); // 800C0F24
  c->r[4]=c->r[27]|c->r[27]; // 800C0F28
  c->lr=0x800C0F30u; f_80297BA8(c); // 800C0F2C
L_800C0F30:;
  W32(c->r[28]+0x00000074u,c->r[3]); // 800C0F30
  c->r[4]=c->r[29]|c->r[29]; // 800C0F34
  c->r[7]=R32(c->r[28]+0x00000078u); // 800C0F38
  c->r[5]=c->r[30]|c->r[30]; // 800C0F3C
  c->r[6]=c->r[31]|c->r[31]; // 800C0F40
  c->r[8]=0u+0x00000000u; // 800C0F44
  c->r[9]=0u+0x00000000u; // 800C0F48
  c->lr=0x800C0F50u; f_8027FFF4(c); // 800C0F4C
  W32(c->r[28]+0x00000074u,c->r[3]); // 800C0F50
L_800C0F54:;
  c->r[0]=R32(c->r[28]+0x0000007Cu); // 800C0F54
  cmps(c,0,(int32_t)c->r[0],0); // 800C0F58
  if (crb(c,2)) { goto L_800C0FC0; } // 800C0F5C
  c->r[3]=R32(c->r[28]+0x00000084u); // 800C0F60
  c->r[4]=c->r[31]|c->r[31]; // 800C0F64
  c->r[5]=c->r[30]|c->r[30]; // 800C0F68
  c->lr=0x800C0F70u; f_802C0F98(c); // 800C0F6C
  c->r[27]=c->r[3]|c->r[3]; // 800C0F70
  c->r[3]=0u+0x00000050u; // 800C0F74
  c->r[4]=c->r[13]+0xFFFFAE27u; // 800C0F78
  c->r[5]=0u+0x00000000u; // 800C0F7C
  c->r[6]=0u+0x00001001u; // 800C0F80
  c->lr=0x800C0F88u; f_80244D20(c); // 800C0F84
  cmps(c,0,(int32_t)c->r[3],0); // 800C0F88
  if (crb(c,2)) { goto L_800C0F9C; } // 800C0F8C
  c->r[5]=R32(c->r[28]+0x0000007Cu); // 800C0F90
  c->r[4]=c->r[27]|c->r[27]; // 800C0F94
  c->lr=0x800C0F9Cu; f_80297BA8(c); // 800C0F98
L_800C0F9C:;
  W32(c->r[28]+0x00000080u,c->r[3]); // 800C0F9C
  c->r[4]=c->r[29]|c->r[29]; // 800C0FA0
  c->r[7]=R32(c->r[28]+0x00000084u); // 800C0FA4
  c->r[5]=c->r[30]|c->r[30]; // 800C0FA8
  c->r[6]=c->r[31]|c->r[31]; // 800C0FAC
  c->r[8]=0u+0x00000000u; // 800C0FB0
  c->r[9]=0u+0x00000000u; // 800C0FB4
  c->lr=0x800C0FBCu; f_8027FFF4(c); // 800C0FB8
  W32(c->r[28]+0x00000080u,c->r[3]); // 800C0FBC
L_800C0FC0:;
  c->r[0]=R32(c->r[28]+0x00000088u); // 800C0FC0
  cmps(c,0,(int32_t)c->r[0],0); // 800C0FC4
  if (crb(c,2)) { goto L_800C102C; } // 800C0FC8
  c->r[3]=R32(c->r[28]+0x00000090u); // 800C0FCC
  c->r[4]=c->r[31]|c->r[31]; // 800C0FD0
  c->r[5]=c->r[30]|c->r[30]; // 800C0FD4
  c->lr=0x800C0FDCu; f_802C0F98(c); // 800C0FD8
  c->r[27]=c->r[3]|c->r[3]; // 800C0FDC
  c->r[3]=0u+0x00000050u; // 800C0FE0
  c->r[4]=c->r[13]+0xFFFFAE2Cu; // 800C0FE4
  c->r[5]=0u+0x00000000u; // 800C0FE8
  c->r[6]=0u+0x00001001u; // 800C0FEC
  c->lr=0x800C0FF4u; f_80244D20(c); // 800C0FF0
  cmps(c,0,(int32_t)c->r[3],0); // 800C0FF4
  if (crb(c,2)) { goto L_800C1008; } // 800C0FF8
  c->r[5]=R32(c->r[28]+0x00000088u); // 800C0FFC
  c->r[4]=c->r[27]|c->r[27]; // 800C1000
  c->lr=0x800C1008u; f_80297BA8(c); // 800C1004
L_800C1008:;
  W32(c->r[28]+0x0000008Cu,c->r[3]); // 800C1008
  c->r[4]=c->r[29]|c->r[29]; // 800C100C
  c->r[7]=R32(c->r[28]+0x00000090u); // 800C1010
  c->r[5]=c->r[30]|c->r[30]; // 800C1014
  c->r[6]=c->r[31]|c->r[31]; // 800C1018
  c->r[8]=0u+0x00000000u; // 800C101C
  c->r[9]=0u+0x00000000u; // 800C1020
  c->lr=0x800C1028u; f_8027FFF4(c); // 800C1024
  W32(c->r[28]+0x0000008Cu,c->r[3]); // 800C1028
L_800C102C:;
  c->r[0]=R32(c->r[28]+0x00000094u); // 800C102C
  cmps(c,0,(int32_t)c->r[0],0); // 800C1030
  if (crb(c,2)) { goto L_800C1098; } // 800C1034
  c->r[3]=R32(c->r[28]+0x0000009Cu); // 800C1038
  c->r[4]=c->r[31]|c->r[31]; // 800C103C
  c->r[5]=c->r[30]|c->r[30]; // 800C1040
  c->lr=0x800C1048u; f_802C0F98(c); // 800C1044
  c->r[27]=c->r[3]|c->r[3]; // 800C1048
  c->r[3]=0u+0x00000050u; // 800C104C
  c->r[4]=c->r[13]+0xFFFFAE31u; // 800C1050
  c->r[5]=0u+0x00000000u; // 800C1054
  c->r[6]=0u+0x00001001u; // 800C1058
  c->lr=0x800C1060u; f_80244D20(c); // 800C105C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1060
  if (crb(c,2)) { goto L_800C1074; } // 800C1064
  c->r[5]=R32(c->r[28]+0x00000094u); // 800C1068
  c->r[4]=c->r[27]|c->r[27]; // 800C106C
  c->lr=0x800C1074u; f_80297BA8(c); // 800C1070
L_800C1074:;
  W32(c->r[28]+0x00000098u,c->r[3]); // 800C1074
  c->r[4]=c->r[29]|c->r[29]; // 800C1078
  c->r[7]=R32(c->r[28]+0x0000009Cu); // 800C107C
  c->r[5]=c->r[30]|c->r[30]; // 800C1080
  c->r[6]=c->r[31]|c->r[31]; // 800C1084
  c->r[8]=0u+0x00000000u; // 800C1088
  c->r[9]=0u+0x00000000u; // 800C108C
  c->lr=0x800C1094u; f_8027FFF4(c); // 800C1090
  W32(c->r[28]+0x00000098u,c->r[3]); // 800C1094
L_800C1098:;
  c->r[0]=R32(c->r[28]+0x000000A0u); // 800C1098
  cmps(c,0,(int32_t)c->r[0],0); // 800C109C
  if (crb(c,2)) { goto L_800C1104; } // 800C10A0
  c->r[3]=R32(c->r[28]+0x000000A8u); // 800C10A4
  c->r[4]=c->r[31]|c->r[31]; // 800C10A8
  c->r[5]=c->r[30]|c->r[30]; // 800C10AC
  c->lr=0x800C10B4u; f_802C0F98(c); // 800C10B0
  c->r[27]=c->r[3]|c->r[3]; // 800C10B4
  c->r[3]=0u+0x00000050u; // 800C10B8
  c->r[4]=c->r[13]+0xFFFFAE36u; // 800C10BC
  c->r[5]=0u+0x00000000u; // 800C10C0
  c->r[6]=0u+0x00001001u; // 800C10C4
  c->lr=0x800C10CCu; f_80244D20(c); // 800C10C8
  cmps(c,0,(int32_t)c->r[3],0); // 800C10CC
  if (crb(c,2)) { goto L_800C10E0; } // 800C10D0
  c->r[5]=R32(c->r[28]+0x000000A0u); // 800C10D4
  c->r[4]=c->r[27]|c->r[27]; // 800C10D8
  c->lr=0x800C10E0u; f_80297BA8(c); // 800C10DC
L_800C10E0:;
  W32(c->r[28]+0x000000A4u,c->r[3]); // 800C10E0
  c->r[4]=c->r[29]|c->r[29]; // 800C10E4
  c->r[7]=R32(c->r[28]+0x000000A8u); // 800C10E8
  c->r[5]=c->r[30]|c->r[30]; // 800C10EC
  c->r[6]=c->r[31]|c->r[31]; // 800C10F0
  c->r[8]=0u+0x00000000u; // 800C10F4
  c->r[9]=0u+0x00000000u; // 800C10F8
  c->lr=0x800C1100u; f_8027FFF4(c); // 800C10FC
  W32(c->r[28]+0x000000A4u,c->r[3]); // 800C1100
L_800C1104:;
  c->r[0]=R32(c->r[28]+0x000000ACu); // 800C1104
  cmps(c,0,(int32_t)c->r[0],0); // 800C1108
  if (crb(c,2)) { goto L_800C1170; } // 800C110C
  c->r[3]=R32(c->r[28]+0x000000B4u); // 800C1110
  c->r[4]=c->r[31]|c->r[31]; // 800C1114
  c->r[5]=c->r[30]|c->r[30]; // 800C1118
  c->lr=0x800C1120u; f_802C0F98(c); // 800C111C
  c->r[27]=c->r[3]|c->r[3]; // 800C1120
  c->r[3]=0u+0x00000050u; // 800C1124
  c->r[4]=c->r[13]+0xFFFFAE3Bu; // 800C1128
  c->r[5]=0u+0x00000000u; // 800C112C
  c->r[6]=0u+0x00001001u; // 800C1130
  c->lr=0x800C1138u; f_80244D20(c); // 800C1134
  cmps(c,0,(int32_t)c->r[3],0); // 800C1138
  if (crb(c,2)) { goto L_800C114C; } // 800C113C
  c->r[5]=R32(c->r[28]+0x000000ACu); // 800C1140
  c->r[4]=c->r[27]|c->r[27]; // 800C1144
  c->lr=0x800C114Cu; f_80297BA8(c); // 800C1148
L_800C114C:;
  W32(c->r[28]+0x000000B0u,c->r[3]); // 800C114C
  c->r[4]=c->r[29]|c->r[29]; // 800C1150
  c->r[7]=R32(c->r[28]+0x000000B4u); // 800C1154
  c->r[5]=c->r[30]|c->r[30]; // 800C1158
  c->r[6]=c->r[31]|c->r[31]; // 800C115C
  c->r[8]=0u+0x00000000u; // 800C1160
  c->r[9]=0u+0x00000000u; // 800C1164
  c->lr=0x800C116Cu; f_8027FFF4(c); // 800C1168
  W32(c->r[28]+0x000000B0u,c->r[3]); // 800C116C
L_800C1170:;
  c->r[0]=R32(c->r[28]+0x000000B8u); // 800C1170
  cmps(c,0,(int32_t)c->r[0],0); // 800C1174
  if (crb(c,2)) { goto L_800C11DC; } // 800C1178
  c->r[3]=R32(c->r[28]+0x000000C0u); // 800C117C
  c->r[4]=c->r[31]|c->r[31]; // 800C1180
  c->r[5]=c->r[30]|c->r[30]; // 800C1184
  c->lr=0x800C118Cu; f_802C0F98(c); // 800C1188
  c->r[27]=c->r[3]|c->r[3]; // 800C118C
  c->r[3]=0u+0x00000050u; // 800C1190
  c->r[4]=c->r[13]+0xFFFFAE40u; // 800C1194
  c->r[5]=0u+0x00000000u; // 800C1198
  c->r[6]=0u+0x00001001u; // 800C119C
  c->lr=0x800C11A4u; f_80244D20(c); // 800C11A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C11A4
  if (crb(c,2)) { goto L_800C11B8; } // 800C11A8
  c->r[5]=R32(c->r[28]+0x000000B8u); // 800C11AC
  c->r[4]=c->r[27]|c->r[27]; // 800C11B0
  c->lr=0x800C11B8u; f_80297BA8(c); // 800C11B4
L_800C11B8:;
  W32(c->r[28]+0x000000BCu,c->r[3]); // 800C11B8
  c->r[4]=c->r[29]|c->r[29]; // 800C11BC
  c->r[7]=R32(c->r[28]+0x000000C0u); // 800C11C0
  c->r[5]=c->r[30]|c->r[30]; // 800C11C4
  c->r[6]=c->r[31]|c->r[31]; // 800C11C8
  c->r[8]=0u+0x00000000u; // 800C11CC
  c->r[9]=0u+0x00000000u; // 800C11D0
  c->lr=0x800C11D8u; f_8027FFF4(c); // 800C11D4
  W32(c->r[28]+0x000000BCu,c->r[3]); // 800C11D8
L_800C11DC:;
  c->r[0]=R32(c->r[28]+0x000000C4u); // 800C11DC
  cmps(c,0,(int32_t)c->r[0],0); // 800C11E0
  if (crb(c,2)) { goto L_800C1248; } // 800C11E4
  c->r[3]=R32(c->r[28]+0x000000CCu); // 800C11E8
  c->r[4]=c->r[31]|c->r[31]; // 800C11EC
  c->r[5]=c->r[30]|c->r[30]; // 800C11F0
  c->lr=0x800C11F8u; f_802C0F98(c); // 800C11F4
  c->r[27]=c->r[3]|c->r[3]; // 800C11F8
  c->r[3]=0u+0x00000050u; // 800C11FC
  c->r[4]=c->r[13]+0xFFFFAE45u; // 800C1200
  c->r[5]=0u+0x00000000u; // 800C1204
  c->r[6]=0u+0x00001001u; // 800C1208
  c->lr=0x800C1210u; f_80244D20(c); // 800C120C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1210
  if (crb(c,2)) { goto L_800C1224; } // 800C1214
  c->r[5]=R32(c->r[28]+0x000000C4u); // 800C1218
  c->r[4]=c->r[27]|c->r[27]; // 800C121C
  c->lr=0x800C1224u; f_80297BA8(c); // 800C1220
L_800C1224:;
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800C1224
  c->r[4]=c->r[29]|c->r[29]; // 800C1228
  c->r[7]=R32(c->r[28]+0x000000CCu); // 800C122C
  c->r[5]=c->r[30]|c->r[30]; // 800C1230
  c->r[6]=c->r[31]|c->r[31]; // 800C1234
  c->r[8]=0u+0x00000000u; // 800C1238
  c->r[9]=0u+0x00000000u; // 800C123C
  c->lr=0x800C1244u; f_8027FFF4(c); // 800C1240
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800C1244
L_800C1248:;
  c->r[0]=R32(c->r[28]+0x000000D0u); // 800C1248
  cmps(c,0,(int32_t)c->r[0],0); // 800C124C
  if (crb(c,2)) { goto L_800C12B4; } // 800C1250
  c->r[3]=R32(c->r[28]+0x000000D8u); // 800C1254
  c->r[4]=c->r[31]|c->r[31]; // 800C1258
  c->r[5]=c->r[30]|c->r[30]; // 800C125C
  c->lr=0x800C1264u; f_802C0F98(c); // 800C1260
  c->r[27]=c->r[3]|c->r[3]; // 800C1264
  c->r[3]=0u+0x00000050u; // 800C1268
  c->r[4]=c->r[13]+0xFFFFAE4Au; // 800C126C
  c->r[5]=0u+0x00000000u; // 800C1270
  c->r[6]=0u+0x00001001u; // 800C1274
  c->lr=0x800C127Cu; f_80244D20(c); // 800C1278
  cmps(c,0,(int32_t)c->r[3],0); // 800C127C
  if (crb(c,2)) { goto L_800C1290; } // 800C1280
  c->r[5]=R32(c->r[28]+0x000000D0u); // 800C1284
  c->r[4]=c->r[27]|c->r[27]; // 800C1288
  c->lr=0x800C1290u; f_80297BA8(c); // 800C128C
L_800C1290:;
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800C1290
  c->r[4]=c->r[29]|c->r[29]; // 800C1294
  c->r[7]=R32(c->r[28]+0x000000D8u); // 800C1298
  c->r[5]=c->r[30]|c->r[30]; // 800C129C
  c->r[6]=c->r[31]|c->r[31]; // 800C12A0
  c->r[8]=0u+0x00000000u; // 800C12A4
  c->r[9]=0u+0x00000000u; // 800C12A8
  c->lr=0x800C12B0u; f_8027FFF4(c); // 800C12AC
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800C12B0
L_800C12B4:;
  c->r[0]=R32(c->r[28]+0x000000DCu); // 800C12B4
  cmps(c,0,(int32_t)c->r[0],0); // 800C12B8
  if (crb(c,2)) { goto L_800C1320; } // 800C12BC
  c->r[3]=R32(c->r[28]+0x000000E4u); // 800C12C0
  c->r[4]=c->r[31]|c->r[31]; // 800C12C4
  c->r[5]=c->r[30]|c->r[30]; // 800C12C8
  c->lr=0x800C12D0u; f_802C0F98(c); // 800C12CC
  c->r[27]=c->r[3]|c->r[3]; // 800C12D0
  c->r[3]=0u+0x00000050u; // 800C12D4
  c->r[4]=c->r[13]+0xFFFFAE4Fu; // 800C12D8
  c->r[5]=0u+0x00000000u; // 800C12DC
  c->r[6]=0u+0x00001001u; // 800C12E0
  c->lr=0x800C12E8u; f_80244D20(c); // 800C12E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C12E8
  if (crb(c,2)) { goto L_800C12FC; } // 800C12EC
  c->r[5]=R32(c->r[28]+0x000000DCu); // 800C12F0
  c->r[4]=c->r[27]|c->r[27]; // 800C12F4
  c->lr=0x800C12FCu; f_80297BA8(c); // 800C12F8
L_800C12FC:;
  W32(c->r[28]+0x000000E0u,c->r[3]); // 800C12FC
  c->r[4]=c->r[29]|c->r[29]; // 800C1300
  c->r[7]=R32(c->r[28]+0x000000E4u); // 800C1304
  c->r[5]=c->r[30]|c->r[30]; // 800C1308
  c->r[6]=c->r[31]|c->r[31]; // 800C130C
  c->r[8]=0u+0x00000000u; // 800C1310
  c->r[9]=0u+0x00000000u; // 800C1314
  c->lr=0x800C131Cu; f_8027FFF4(c); // 800C1318
  W32(c->r[28]+0x000000E0u,c->r[3]); // 800C131C
L_800C1320:;
  c->r[0]=R32(c->r[28]+0x000000E8u); // 800C1320
  cmps(c,0,(int32_t)c->r[0],0); // 800C1324
  if (crb(c,2)) { goto L_800C138C; } // 800C1328
  c->r[3]=R32(c->r[28]+0x000000F0u); // 800C132C
  c->r[4]=c->r[31]|c->r[31]; // 800C1330
  c->r[5]=c->r[30]|c->r[30]; // 800C1334
  c->lr=0x800C133Cu; f_802C0F98(c); // 800C1338
  c->r[27]=c->r[3]|c->r[3]; // 800C133C
  c->r[3]=0u+0x00000050u; // 800C1340
  c->r[4]=c->r[13]+0xFFFFAE54u; // 800C1344
  c->r[5]=0u+0x00000000u; // 800C1348
  c->r[6]=0u+0x00001001u; // 800C134C
  c->lr=0x800C1354u; f_80244D20(c); // 800C1350
  cmps(c,0,(int32_t)c->r[3],0); // 800C1354
  if (crb(c,2)) { goto L_800C1368; } // 800C1358
  c->r[5]=R32(c->r[28]+0x000000E8u); // 800C135C
  c->r[4]=c->r[27]|c->r[27]; // 800C1360
  c->lr=0x800C1368u; f_80297BA8(c); // 800C1364
L_800C1368:;
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800C1368
  c->r[4]=c->r[29]|c->r[29]; // 800C136C
  c->r[7]=R32(c->r[28]+0x000000F0u); // 800C1370
  c->r[5]=c->r[30]|c->r[30]; // 800C1374
  c->r[6]=c->r[31]|c->r[31]; // 800C1378
  c->r[8]=0u+0x00000000u; // 800C137C
  c->r[9]=0u+0x00000000u; // 800C1380
  c->lr=0x800C1388u; f_8027FFF4(c); // 800C1384
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800C1388
L_800C138C:;
  c->r[0]=R32(c->r[28]+0x000000F4u); // 800C138C
  cmps(c,0,(int32_t)c->r[0],0); // 800C1390
  if (crb(c,2)) { goto L_800C13F8; } // 800C1394
  c->r[3]=R32(c->r[28]+0x000000FCu); // 800C1398
  c->r[4]=c->r[31]|c->r[31]; // 800C139C
  c->r[5]=c->r[30]|c->r[30]; // 800C13A0
  c->lr=0x800C13A8u; f_802C0F98(c); // 800C13A4
  c->r[27]=c->r[3]|c->r[3]; // 800C13A8
  c->r[3]=0u+0x00000050u; // 800C13AC
  c->r[4]=c->r[13]+0xFFFFAE59u; // 800C13B0
  c->r[5]=0u+0x00000000u; // 800C13B4
  c->r[6]=0u+0x00001001u; // 800C13B8
  c->lr=0x800C13C0u; f_80244D20(c); // 800C13BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C13C0
  if (crb(c,2)) { goto L_800C13D4; } // 800C13C4
  c->r[5]=R32(c->r[28]+0x000000F4u); // 800C13C8
  c->r[4]=c->r[27]|c->r[27]; // 800C13CC
  c->lr=0x800C13D4u; f_80297BA8(c); // 800C13D0
L_800C13D4:;
  W32(c->r[28]+0x000000F8u,c->r[3]); // 800C13D4
  c->r[4]=c->r[29]|c->r[29]; // 800C13D8
  c->r[7]=R32(c->r[28]+0x000000FCu); // 800C13DC
  c->r[5]=c->r[30]|c->r[30]; // 800C13E0
  c->r[6]=c->r[31]|c->r[31]; // 800C13E4
  c->r[8]=0u+0x00000000u; // 800C13E8
  c->r[9]=0u+0x00000000u; // 800C13EC
  c->lr=0x800C13F4u; f_8027FFF4(c); // 800C13F0
  W32(c->r[28]+0x000000F8u,c->r[3]); // 800C13F4
L_800C13F8:;
  c->r[0]=R32(c->r[28]+0x00000100u); // 800C13F8
  cmps(c,0,(int32_t)c->r[0],0); // 800C13FC
  if (crb(c,2)) { goto L_800C1464; } // 800C1400
  c->r[3]=R32(c->r[28]+0x00000108u); // 800C1404
  c->r[4]=c->r[31]|c->r[31]; // 800C1408
  c->r[5]=c->r[30]|c->r[30]; // 800C140C
  c->lr=0x800C1414u; f_802C0F98(c); // 800C1410
  c->r[27]=c->r[3]|c->r[3]; // 800C1414
  c->r[3]=0u+0x00000050u; // 800C1418
  c->r[4]=c->r[13]+0xFFFFAE5Eu; // 800C141C
  c->r[5]=0u+0x00000000u; // 800C1420
  c->r[6]=0u+0x00001001u; // 800C1424
  c->lr=0x800C142Cu; f_80244D20(c); // 800C1428
  cmps(c,0,(int32_t)c->r[3],0); // 800C142C
  if (crb(c,2)) { goto L_800C1440; } // 800C1430
  c->r[5]=R32(c->r[28]+0x00000100u); // 800C1434
  c->r[4]=c->r[27]|c->r[27]; // 800C1438
  c->lr=0x800C1440u; f_80297BA8(c); // 800C143C
L_800C1440:;
  W32(c->r[28]+0x00000104u,c->r[3]); // 800C1440
  c->r[4]=c->r[29]|c->r[29]; // 800C1444
  c->r[7]=R32(c->r[28]+0x00000108u); // 800C1448
  c->r[5]=c->r[30]|c->r[30]; // 800C144C
  c->r[6]=c->r[31]|c->r[31]; // 800C1450
  c->r[8]=0u+0x00000000u; // 800C1454
  c->r[9]=0u+0x00000000u; // 800C1458
  c->lr=0x800C1460u; f_8027FFF4(c); // 800C145C
  W32(c->r[28]+0x00000104u,c->r[3]); // 800C1460
L_800C1464:;
  c->r[0]=R32(c->r[28]+0x0000010Cu); // 800C1464
  cmps(c,0,(int32_t)c->r[0],0); // 800C1468
  if (crb(c,2)) { goto L_800C14D0; } // 800C146C
  c->r[3]=R32(c->r[28]+0x00000114u); // 800C1470
  c->r[4]=c->r[31]|c->r[31]; // 800C1474
  c->r[5]=c->r[30]|c->r[30]; // 800C1478
  c->lr=0x800C1480u; f_802C0F98(c); // 800C147C
  c->r[27]=c->r[3]|c->r[3]; // 800C1480
  c->r[3]=0u+0x00000050u; // 800C1484
  c->r[4]=c->r[13]+0xFFFFAE63u; // 800C1488
  c->r[5]=0u+0x00000000u; // 800C148C
  c->r[6]=0u+0x00001001u; // 800C1490
  c->lr=0x800C1498u; f_80244D20(c); // 800C1494
  cmps(c,0,(int32_t)c->r[3],0); // 800C1498
  if (crb(c,2)) { goto L_800C14AC; } // 800C149C
  c->r[5]=R32(c->r[28]+0x0000010Cu); // 800C14A0
  c->r[4]=c->r[27]|c->r[27]; // 800C14A4
  c->lr=0x800C14ACu; f_80297BA8(c); // 800C14A8
L_800C14AC:;
  W32(c->r[28]+0x00000110u,c->r[3]); // 800C14AC
  c->r[4]=c->r[29]|c->r[29]; // 800C14B0
  c->r[7]=R32(c->r[28]+0x00000114u); // 800C14B4
  c->r[5]=c->r[30]|c->r[30]; // 800C14B8
  c->r[6]=c->r[31]|c->r[31]; // 800C14BC
  c->r[8]=0u+0x00000000u; // 800C14C0
  c->r[9]=0u+0x00000000u; // 800C14C4
  c->lr=0x800C14CCu; f_8027FFF4(c); // 800C14C8
  W32(c->r[28]+0x00000110u,c->r[3]); // 800C14CC
L_800C14D0:;
  c->r[0]=R32(c->r[28]+0x00000118u); // 800C14D0
  cmps(c,0,(int32_t)c->r[0],0); // 800C14D4
  if (crb(c,2)) { goto L_800C153C; } // 800C14D8
  c->r[3]=R32(c->r[28]+0x00000120u); // 800C14DC
  c->r[4]=c->r[31]|c->r[31]; // 800C14E0
  c->r[5]=c->r[30]|c->r[30]; // 800C14E4
  c->lr=0x800C14ECu; f_802C0F98(c); // 800C14E8
  c->r[27]=c->r[3]|c->r[3]; // 800C14EC
  c->r[3]=0u+0x00000050u; // 800C14F0
  c->r[4]=c->r[13]+0xFFFFAE68u; // 800C14F4
  c->r[5]=0u+0x00000000u; // 800C14F8
  c->r[6]=0u+0x00001001u; // 800C14FC
  c->lr=0x800C1504u; f_80244D20(c); // 800C1500
  cmps(c,0,(int32_t)c->r[3],0); // 800C1504
  if (crb(c,2)) { goto L_800C1518; } // 800C1508
  c->r[5]=R32(c->r[28]+0x00000118u); // 800C150C
  c->r[4]=c->r[27]|c->r[27]; // 800C1510
  c->lr=0x800C1518u; f_80297BA8(c); // 800C1514
L_800C1518:;
  W32(c->r[28]+0x0000011Cu,c->r[3]); // 800C1518
  c->r[4]=c->r[29]|c->r[29]; // 800C151C
  c->r[7]=R32(c->r[28]+0x00000120u); // 800C1520
  c->r[5]=c->r[30]|c->r[30]; // 800C1524
  c->r[6]=c->r[31]|c->r[31]; // 800C1528
  c->r[8]=0u+0x00000000u; // 800C152C
  c->r[9]=0u+0x00000000u; // 800C1530
  c->lr=0x800C1538u; f_8027FFF4(c); // 800C1534
  W32(c->r[28]+0x0000011Cu,c->r[3]); // 800C1538
L_800C153C:;
  c->r[0]=R32(c->r[28]+0x00000124u); // 800C153C
  cmps(c,0,(int32_t)c->r[0],0); // 800C1540
  if (crb(c,2)) { goto L_800C15A8; } // 800C1544
  c->r[3]=R32(c->r[28]+0x0000012Cu); // 800C1548
  c->r[4]=c->r[31]|c->r[31]; // 800C154C
  c->r[5]=c->r[30]|c->r[30]; // 800C1550
  c->lr=0x800C1558u; f_802C0F98(c); // 800C1554
  c->r[27]=c->r[3]|c->r[3]; // 800C1558
  c->r[3]=0u+0x00000050u; // 800C155C
  c->r[4]=c->r[13]+0xFFFFAE6Du; // 800C1560
  c->r[5]=0u+0x00000000u; // 800C1564
  c->r[6]=0u+0x00001001u; // 800C1568
  c->lr=0x800C1570u; f_80244D20(c); // 800C156C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1570
  if (crb(c,2)) { goto L_800C1584; } // 800C1574
  c->r[5]=R32(c->r[28]+0x00000124u); // 800C1578
  c->r[4]=c->r[27]|c->r[27]; // 800C157C
  c->lr=0x800C1584u; f_80297BA8(c); // 800C1580
L_800C1584:;
  W32(c->r[28]+0x00000128u,c->r[3]); // 800C1584
  c->r[4]=c->r[29]|c->r[29]; // 800C1588
  c->r[7]=R32(c->r[28]+0x0000012Cu); // 800C158C
  c->r[5]=c->r[30]|c->r[30]; // 800C1590
  c->r[6]=c->r[31]|c->r[31]; // 800C1594
  c->r[8]=0u+0x00000000u; // 800C1598
  c->r[9]=0u+0x00000000u; // 800C159C
  c->lr=0x800C15A4u; f_8027FFF4(c); // 800C15A0
  W32(c->r[28]+0x00000128u,c->r[3]); // 800C15A4
L_800C15A8:;
  c->r[0]=R32(c->r[28]+0x00000130u); // 800C15A8
  cmps(c,0,(int32_t)c->r[0],0); // 800C15AC
  if (crb(c,2)) { goto L_800C1614; } // 800C15B0
  c->r[3]=R32(c->r[28]+0x00000138u); // 800C15B4
  c->r[4]=c->r[31]|c->r[31]; // 800C15B8
  c->r[5]=c->r[30]|c->r[30]; // 800C15BC
  c->lr=0x800C15C4u; f_802C0F98(c); // 800C15C0
  c->r[27]=c->r[3]|c->r[3]; // 800C15C4
  c->r[3]=0u+0x00000050u; // 800C15C8
  c->r[4]=c->r[13]+0xFFFFAE72u; // 800C15CC
  c->r[5]=0u+0x00000000u; // 800C15D0
  c->r[6]=0u+0x00001001u; // 800C15D4
  c->lr=0x800C15DCu; f_80244D20(c); // 800C15D8
  cmps(c,0,(int32_t)c->r[3],0); // 800C15DC
  if (crb(c,2)) { goto L_800C15F0; } // 800C15E0
  c->r[5]=R32(c->r[28]+0x00000130u); // 800C15E4
  c->r[4]=c->r[27]|c->r[27]; // 800C15E8
  c->lr=0x800C15F0u; f_80297BA8(c); // 800C15EC
L_800C15F0:;
  W32(c->r[28]+0x00000134u,c->r[3]); // 800C15F0
  c->r[4]=c->r[29]|c->r[29]; // 800C15F4
  c->r[7]=R32(c->r[28]+0x00000138u); // 800C15F8
  c->r[5]=c->r[30]|c->r[30]; // 800C15FC
  c->r[6]=c->r[31]|c->r[31]; // 800C1600
  c->r[8]=0u+0x00000000u; // 800C1604
  c->r[9]=0u+0x00000000u; // 800C1608
  c->lr=0x800C1610u; f_8027FFF4(c); // 800C160C
  W32(c->r[28]+0x00000134u,c->r[3]); // 800C1610
L_800C1614:;
  c->r[0]=R32(c->r[28]+0x0000013Cu); // 800C1614
  cmps(c,0,(int32_t)c->r[0],0); // 800C1618
  if (crb(c,2)) { goto L_800C1680; } // 800C161C
  c->r[3]=R32(c->r[28]+0x00000144u); // 800C1620
  c->r[4]=c->r[31]|c->r[31]; // 800C1624
  c->r[5]=c->r[30]|c->r[30]; // 800C1628
  c->lr=0x800C1630u; f_802C0F98(c); // 800C162C
  c->r[27]=c->r[3]|c->r[3]; // 800C1630
  c->r[3]=0u+0x00000050u; // 800C1634
  c->r[4]=c->r[13]+0xFFFFAE77u; // 800C1638
  c->r[5]=0u+0x00000000u; // 800C163C
  c->r[6]=0u+0x00001001u; // 800C1640
  c->lr=0x800C1648u; f_80244D20(c); // 800C1644
  cmps(c,0,(int32_t)c->r[3],0); // 800C1648
  if (crb(c,2)) { goto L_800C165C; } // 800C164C
  c->r[5]=R32(c->r[28]+0x0000013Cu); // 800C1650
  c->r[4]=c->r[27]|c->r[27]; // 800C1654
  c->lr=0x800C165Cu; f_80297BA8(c); // 800C1658
L_800C165C:;
  W32(c->r[28]+0x00000140u,c->r[3]); // 800C165C
  c->r[4]=c->r[29]|c->r[29]; // 800C1660
  c->r[7]=R32(c->r[28]+0x00000144u); // 800C1664
  c->r[5]=c->r[30]|c->r[30]; // 800C1668
  c->r[6]=c->r[31]|c->r[31]; // 800C166C
  c->r[8]=0u+0x00000000u; // 800C1670
  c->r[9]=0u+0x00000000u; // 800C1674
  c->lr=0x800C167Cu; f_8027FFF4(c); // 800C1678
  W32(c->r[28]+0x00000140u,c->r[3]); // 800C167C
L_800C1680:;
  c->r[0]=R32(c->r[28]+0x00000148u); // 800C1680
  cmps(c,0,(int32_t)c->r[0],0); // 800C1684
  if (crb(c,2)) { goto L_800C16EC; } // 800C1688
  c->r[3]=R32(c->r[28]+0x00000150u); // 800C168C
  c->r[4]=c->r[31]|c->r[31]; // 800C1690
  c->r[5]=c->r[30]|c->r[30]; // 800C1694
  c->lr=0x800C169Cu; f_802C0F98(c); // 800C1698
  c->r[27]=c->r[3]|c->r[3]; // 800C169C
  c->r[3]=0u+0x00000050u; // 800C16A0
  c->r[4]=c->r[13]+0xFFFFAE7Cu; // 800C16A4
  c->r[5]=0u+0x00000000u; // 800C16A8
  c->r[6]=0u+0x00001001u; // 800C16AC
  c->lr=0x800C16B4u; f_80244D20(c); // 800C16B0
  cmps(c,0,(int32_t)c->r[3],0); // 800C16B4
  if (crb(c,2)) { goto L_800C16C8; } // 800C16B8
  c->r[5]=R32(c->r[28]+0x00000148u); // 800C16BC
  c->r[4]=c->r[27]|c->r[27]; // 800C16C0
  c->lr=0x800C16C8u; f_80297BA8(c); // 800C16C4
L_800C16C8:;
  W32(c->r[28]+0x0000014Cu,c->r[3]); // 800C16C8
  c->r[4]=c->r[29]|c->r[29]; // 800C16CC
  c->r[7]=R32(c->r[28]+0x00000150u); // 800C16D0
  c->r[5]=c->r[30]|c->r[30]; // 800C16D4
  c->r[6]=c->r[31]|c->r[31]; // 800C16D8
  c->r[8]=0u+0x00000000u; // 800C16DC
  c->r[9]=0u+0x00000000u; // 800C16E0
  c->lr=0x800C16E8u; f_8027FFF4(c); // 800C16E4
  W32(c->r[28]+0x0000014Cu,c->r[3]); // 800C16E8
L_800C16EC:;
  c->r[0]=R32(c->r[28]+0x00000154u); // 800C16EC
  cmps(c,0,(int32_t)c->r[0],0); // 800C16F0
  if (crb(c,2)) { goto L_800C1758; } // 800C16F4
  c->r[3]=R32(c->r[28]+0x0000015Cu); // 800C16F8
  c->r[4]=c->r[31]|c->r[31]; // 800C16FC
  c->r[5]=c->r[30]|c->r[30]; // 800C1700
  c->lr=0x800C1708u; f_802C0F98(c); // 800C1704
  c->r[27]=c->r[3]|c->r[3]; // 800C1708
  c->r[3]=0u+0x00000050u; // 800C170C
  c->r[4]=c->r[13]+0xFFFFAE81u; // 800C1710
  c->r[5]=0u+0x00000000u; // 800C1714
  c->r[6]=0u+0x00001001u; // 800C1718
  c->lr=0x800C1720u; f_80244D20(c); // 800C171C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1720
  if (crb(c,2)) { goto L_800C1734; } // 800C1724
  c->r[5]=R32(c->r[28]+0x00000154u); // 800C1728
  c->r[4]=c->r[27]|c->r[27]; // 800C172C
  c->lr=0x800C1734u; f_80297BA8(c); // 800C1730
L_800C1734:;
  W32(c->r[28]+0x00000158u,c->r[3]); // 800C1734
  c->r[4]=c->r[29]|c->r[29]; // 800C1738
  c->r[7]=R32(c->r[28]+0x0000015Cu); // 800C173C
  c->r[5]=c->r[30]|c->r[30]; // 800C1740
  c->r[6]=c->r[31]|c->r[31]; // 800C1744
  c->r[8]=0u+0x00000000u; // 800C1748
  c->r[9]=0u+0x00000000u; // 800C174C
  c->lr=0x800C1754u; f_8027FFF4(c); // 800C1750
  W32(c->r[28]+0x00000158u,c->r[3]); // 800C1754
L_800C1758:;
  c->r[0]=R32(c->r[28]+0x00000160u); // 800C1758
  cmps(c,0,(int32_t)c->r[0],0); // 800C175C
  if (crb(c,2)) { goto L_800C17C4; } // 800C1760
  c->r[3]=R32(c->r[28]+0x00000168u); // 800C1764
  c->r[4]=c->r[31]|c->r[31]; // 800C1768
  c->r[5]=c->r[30]|c->r[30]; // 800C176C
  c->lr=0x800C1774u; f_802C0F98(c); // 800C1770
  c->r[27]=c->r[3]|c->r[3]; // 800C1774
  c->r[3]=0u+0x00000050u; // 800C1778
  c->r[4]=c->r[13]+0xFFFFAE86u; // 800C177C
  c->r[5]=0u+0x00000000u; // 800C1780
  c->r[6]=0u+0x00001001u; // 800C1784
  c->lr=0x800C178Cu; f_80244D20(c); // 800C1788
  cmps(c,0,(int32_t)c->r[3],0); // 800C178C
  if (crb(c,2)) { goto L_800C17A0; } // 800C1790
  c->r[5]=R32(c->r[28]+0x00000160u); // 800C1794
  c->r[4]=c->r[27]|c->r[27]; // 800C1798
  c->lr=0x800C17A0u; f_80297BA8(c); // 800C179C
L_800C17A0:;
  W32(c->r[28]+0x00000164u,c->r[3]); // 800C17A0
  c->r[4]=c->r[29]|c->r[29]; // 800C17A4
  c->r[7]=R32(c->r[28]+0x00000168u); // 800C17A8
  c->r[5]=c->r[30]|c->r[30]; // 800C17AC
  c->r[6]=c->r[31]|c->r[31]; // 800C17B0
  c->r[8]=0u+0x00000000u; // 800C17B4
  c->r[9]=0u+0x00000000u; // 800C17B8
  c->lr=0x800C17C0u; f_8027FFF4(c); // 800C17BC
  W32(c->r[28]+0x00000164u,c->r[3]); // 800C17C0
L_800C17C4:;
  c->r[0]=R32(c->r[28]+0x0000016Cu); // 800C17C4
  cmps(c,0,(int32_t)c->r[0],0); // 800C17C8
  if (crb(c,2)) { goto L_800C1830; } // 800C17CC
  c->r[3]=R32(c->r[28]+0x00000174u); // 800C17D0
  c->r[4]=c->r[31]|c->r[31]; // 800C17D4
  c->r[5]=c->r[30]|c->r[30]; // 800C17D8
  c->lr=0x800C17E0u; f_802C0F98(c); // 800C17DC
  c->r[27]=c->r[3]|c->r[3]; // 800C17E0
  c->r[3]=0u+0x00000050u; // 800C17E4
  c->r[4]=c->r[13]+0xFFFFAE8Bu; // 800C17E8
  c->r[5]=0u+0x00000000u; // 800C17EC
  c->r[6]=0u+0x00001001u; // 800C17F0
  c->lr=0x800C17F8u; f_80244D20(c); // 800C17F4
  cmps(c,0,(int32_t)c->r[3],0); // 800C17F8
  if (crb(c,2)) { goto L_800C180C; } // 800C17FC
  c->r[5]=R32(c->r[28]+0x0000016Cu); // 800C1800
  c->r[4]=c->r[27]|c->r[27]; // 800C1804
  c->lr=0x800C180Cu; f_80297BA8(c); // 800C1808
L_800C180C:;
  W32(c->r[28]+0x00000170u,c->r[3]); // 800C180C
  c->r[4]=c->r[29]|c->r[29]; // 800C1810
  c->r[7]=R32(c->r[28]+0x00000174u); // 800C1814
  c->r[5]=c->r[30]|c->r[30]; // 800C1818
  c->r[6]=c->r[31]|c->r[31]; // 800C181C
  c->r[8]=0u+0x00000000u; // 800C1820
  c->r[9]=0u+0x00000000u; // 800C1824
  c->lr=0x800C182Cu; f_8027FFF4(c); // 800C1828
  W32(c->r[28]+0x00000170u,c->r[3]); // 800C182C
L_800C1830:;
  c->r[0]=R32(c->r[28]+0x00000178u); // 800C1830
  cmps(c,0,(int32_t)c->r[0],0); // 800C1834
  if (crb(c,2)) { goto L_800C189C; } // 800C1838
  c->r[3]=R32(c->r[28]+0x00000180u); // 800C183C
  c->r[4]=c->r[31]|c->r[31]; // 800C1840
  c->r[5]=c->r[30]|c->r[30]; // 800C1844
  c->lr=0x800C184Cu; f_802C0F98(c); // 800C1848
  c->r[27]=c->r[3]|c->r[3]; // 800C184C
  c->r[3]=0u+0x00000050u; // 800C1850
  c->r[4]=c->r[13]+0xFFFFAE90u; // 800C1854
  c->r[5]=0u+0x00000000u; // 800C1858
  c->r[6]=0u+0x00001001u; // 800C185C
  c->lr=0x800C1864u; f_80244D20(c); // 800C1860
  cmps(c,0,(int32_t)c->r[3],0); // 800C1864
  if (crb(c,2)) { goto L_800C1878; } // 800C1868
  c->r[5]=R32(c->r[28]+0x00000178u); // 800C186C
  c->r[4]=c->r[27]|c->r[27]; // 800C1870
  c->lr=0x800C1878u; f_80297BA8(c); // 800C1874
L_800C1878:;
  W32(c->r[28]+0x0000017Cu,c->r[3]); // 800C1878
  c->r[4]=c->r[29]|c->r[29]; // 800C187C
  c->r[7]=R32(c->r[28]+0x00000180u); // 800C1880
  c->r[5]=c->r[30]|c->r[30]; // 800C1884
  c->r[6]=c->r[31]|c->r[31]; // 800C1888
  c->r[8]=0u+0x00000000u; // 800C188C
  c->r[9]=0u+0x00000000u; // 800C1890
  c->lr=0x800C1898u; f_8027FFF4(c); // 800C1894
  W32(c->r[28]+0x0000017Cu,c->r[3]); // 800C1898
L_800C189C:;
  c->r[0]=R32(c->r[28]+0x00000184u); // 800C189C
  cmps(c,0,(int32_t)c->r[0],0); // 800C18A0
  if (crb(c,2)) { goto L_800C1908; } // 800C18A4
  c->r[3]=R32(c->r[28]+0x0000018Cu); // 800C18A8
  c->r[4]=c->r[31]|c->r[31]; // 800C18AC
  c->r[5]=c->r[30]|c->r[30]; // 800C18B0
  c->lr=0x800C18B8u; f_802C0F98(c); // 800C18B4
  c->r[27]=c->r[3]|c->r[3]; // 800C18B8
  c->r[3]=0u+0x00000050u; // 800C18BC
  c->r[4]=c->r[13]+0xFFFFAE95u; // 800C18C0
  c->r[5]=0u+0x00000000u; // 800C18C4
  c->r[6]=0u+0x00001001u; // 800C18C8
  c->lr=0x800C18D0u; f_80244D20(c); // 800C18CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C18D0
  if (crb(c,2)) { goto L_800C18E4; } // 800C18D4
  c->r[5]=R32(c->r[28]+0x00000184u); // 800C18D8
  c->r[4]=c->r[27]|c->r[27]; // 800C18DC
  c->lr=0x800C18E4u; f_80297BA8(c); // 800C18E0
L_800C18E4:;
  W32(c->r[28]+0x00000188u,c->r[3]); // 800C18E4
  c->r[4]=c->r[29]|c->r[29]; // 800C18E8
  c->r[7]=R32(c->r[28]+0x0000018Cu); // 800C18EC
  c->r[5]=c->r[30]|c->r[30]; // 800C18F0
  c->r[6]=c->r[31]|c->r[31]; // 800C18F4
  c->r[8]=0u+0x00000000u; // 800C18F8
  c->r[9]=0u+0x00000000u; // 800C18FC
  c->lr=0x800C1904u; f_8027FFF4(c); // 800C1900
  W32(c->r[28]+0x00000188u,c->r[3]); // 800C1904
L_800C1908:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1908
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C190C
  c->lr=c->r[0]; // 800C1910
  c->r[1]=c->r[1]+0x00000030u; // 800C1914
  return; // 800C1918
}

// fn_800C191C
void f_800C191C(Ctx* __restrict c) {
  trace_call(0x800C191Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C191C
  c->r[0]=c->lr; // 800C1920
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C1928
  c->r[31]=c->r[3]|c->r[3]; // 800C192C
  c->r[0]=R32(c->r[3]+0x00000190u); // 800C1930
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800C1934
  W32(c->r[3]+0x00000190u,c->r[0]); // 800C1938
  if (!crb(c,2)) { goto L_800C1C2C; } // 800C193C
  c->lr=0x800C1944u; f_802B11D0(c); // 800C1940
  c->r[3]=R32(c->r[31]+0x00000020u); // 800C1944
  cmps(c,0,(int32_t)c->r[3],0); // 800C1948
  if (crb(c,2)) { goto L_800C195C; } // 800C194C
  c->lr=0x800C1954u; f_80295B7C(c); // 800C1950
  c->r[0]=0u+0x00000000u; // 800C1954
  W32(c->r[31]+0x00000020u,c->r[0]); // 800C1958
L_800C195C:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800C195C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1960
  if (crb(c,2)) { goto L_800C1974; } // 800C1964
  c->lr=0x800C196Cu; f_80295B7C(c); // 800C1968
  c->r[0]=0u+0x00000000u; // 800C196C
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800C1970
L_800C1974:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 800C1974
  cmps(c,0,(int32_t)c->r[3],0); // 800C1978
  if (crb(c,2)) { goto L_800C198C; } // 800C197C
  c->lr=0x800C1984u; f_80295B7C(c); // 800C1980
  c->r[0]=0u+0x00000000u; // 800C1984
  W32(c->r[31]+0x00000038u,c->r[0]); // 800C1988
L_800C198C:;
  c->r[3]=R32(c->r[31]+0x00000044u); // 800C198C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1990
  if (crb(c,2)) { goto L_800C19A4; } // 800C1994
  c->lr=0x800C199Cu; f_80295B7C(c); // 800C1998
  c->r[0]=0u+0x00000000u; // 800C199C
  W32(c->r[31]+0x00000044u,c->r[0]); // 800C19A0
L_800C19A4:;
  c->r[3]=R32(c->r[31]+0x00000050u); // 800C19A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C19A8
  if (crb(c,2)) { goto L_800C19BC; } // 800C19AC
  c->lr=0x800C19B4u; f_80295B7C(c); // 800C19B0
  c->r[0]=0u+0x00000000u; // 800C19B4
  W32(c->r[31]+0x00000050u,c->r[0]); // 800C19B8
L_800C19BC:;
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800C19BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C19C0
  if (crb(c,2)) { goto L_800C19D4; } // 800C19C4
  c->lr=0x800C19CCu; f_80295B7C(c); // 800C19C8
  c->r[0]=0u+0x00000000u; // 800C19CC
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800C19D0
L_800C19D4:;
  c->r[3]=R32(c->r[31]+0x00000068u); // 800C19D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C19D8
  if (crb(c,2)) { goto L_800C19EC; } // 800C19DC
  c->lr=0x800C19E4u; f_80295B7C(c); // 800C19E0
  c->r[0]=0u+0x00000000u; // 800C19E4
  W32(c->r[31]+0x00000068u,c->r[0]); // 800C19E8
L_800C19EC:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800C19EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C19F0
  if (crb(c,2)) { goto L_800C1A04; } // 800C19F4
  c->lr=0x800C19FCu; f_80295B7C(c); // 800C19F8
  c->r[0]=0u+0x00000000u; // 800C19FC
  W32(c->r[31]+0x00000074u,c->r[0]); // 800C1A00
L_800C1A04:;
  c->r[3]=R32(c->r[31]+0x00000080u); // 800C1A04
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A08
  if (crb(c,2)) { goto L_800C1A1C; } // 800C1A0C
  c->lr=0x800C1A14u; f_80295B7C(c); // 800C1A10
  c->r[0]=0u+0x00000000u; // 800C1A14
  W32(c->r[31]+0x00000080u,c->r[0]); // 800C1A18
L_800C1A1C:;
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 800C1A1C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A20
  if (crb(c,2)) { goto L_800C1A34; } // 800C1A24
  c->lr=0x800C1A2Cu; f_80295B7C(c); // 800C1A28
  c->r[0]=0u+0x00000000u; // 800C1A2C
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 800C1A30
L_800C1A34:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 800C1A34
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A38
  if (crb(c,2)) { goto L_800C1A4C; } // 800C1A3C
  c->lr=0x800C1A44u; f_80295B7C(c); // 800C1A40
  c->r[0]=0u+0x00000000u; // 800C1A44
  W32(c->r[31]+0x00000098u,c->r[0]); // 800C1A48
L_800C1A4C:;
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800C1A4C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A50
  if (crb(c,2)) { goto L_800C1A64; } // 800C1A54
  c->lr=0x800C1A5Cu; f_80295B7C(c); // 800C1A58
  c->r[0]=0u+0x00000000u; // 800C1A5C
  W32(c->r[31]+0x000000A4u,c->r[0]); // 800C1A60
L_800C1A64:;
  c->r[3]=R32(c->r[31]+0x000000B0u); // 800C1A64
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A68
  if (crb(c,2)) { goto L_800C1A7C; } // 800C1A6C
  c->lr=0x800C1A74u; f_80295B7C(c); // 800C1A70
  c->r[0]=0u+0x00000000u; // 800C1A74
  W32(c->r[31]+0x000000B0u,c->r[0]); // 800C1A78
L_800C1A7C:;
  c->r[3]=R32(c->r[31]+0x000000BCu); // 800C1A7C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A80
  if (crb(c,2)) { goto L_800C1A94; } // 800C1A84
  c->lr=0x800C1A8Cu; f_80295B7C(c); // 800C1A88
  c->r[0]=0u+0x00000000u; // 800C1A8C
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800C1A90
L_800C1A94:;
  c->r[3]=R32(c->r[31]+0x000000C8u); // 800C1A94
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A98
  if (crb(c,2)) { goto L_800C1AAC; } // 800C1A9C
  c->lr=0x800C1AA4u; f_80295B7C(c); // 800C1AA0
  c->r[0]=0u+0x00000000u; // 800C1AA4
  W32(c->r[31]+0x000000C8u,c->r[0]); // 800C1AA8
L_800C1AAC:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 800C1AAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C1AB0
  if (crb(c,2)) { goto L_800C1AC4; } // 800C1AB4
  c->lr=0x800C1ABCu; f_80295B7C(c); // 800C1AB8
  c->r[0]=0u+0x00000000u; // 800C1ABC
  W32(c->r[31]+0x000000D4u,c->r[0]); // 800C1AC0
L_800C1AC4:;
  c->r[3]=R32(c->r[31]+0x000000E0u); // 800C1AC4
  cmps(c,0,(int32_t)c->r[3],0); // 800C1AC8
  if (crb(c,2)) { goto L_800C1ADC; } // 800C1ACC
  c->lr=0x800C1AD4u; f_80295B7C(c); // 800C1AD0
  c->r[0]=0u+0x00000000u; // 800C1AD4
  W32(c->r[31]+0x000000E0u,c->r[0]); // 800C1AD8
L_800C1ADC:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 800C1ADC
  cmps(c,0,(int32_t)c->r[3],0); // 800C1AE0
  if (crb(c,2)) { goto L_800C1AF4; } // 800C1AE4
  c->lr=0x800C1AECu; f_80295B7C(c); // 800C1AE8
  c->r[0]=0u+0x00000000u; // 800C1AEC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800C1AF0
L_800C1AF4:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 800C1AF4
  cmps(c,0,(int32_t)c->r[3],0); // 800C1AF8
  if (crb(c,2)) { goto L_800C1B0C; } // 800C1AFC
  c->lr=0x800C1B04u; f_80295B7C(c); // 800C1B00
  c->r[0]=0u+0x00000000u; // 800C1B04
  W32(c->r[31]+0x000000F8u,c->r[0]); // 800C1B08
L_800C1B0C:;
  c->r[3]=R32(c->r[31]+0x00000104u); // 800C1B0C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1B10
  if (crb(c,2)) { goto L_800C1B24; } // 800C1B14
  c->lr=0x800C1B1Cu; f_80295B7C(c); // 800C1B18
  c->r[0]=0u+0x00000000u; // 800C1B1C
  W32(c->r[31]+0x00000104u,c->r[0]); // 800C1B20
L_800C1B24:;
  c->r[3]=R32(c->r[31]+0x00000110u); // 800C1B24
  cmps(c,0,(int32_t)c->r[3],0); // 800C1B28
  if (crb(c,2)) { goto L_800C1B3C; } // 800C1B2C
  c->lr=0x800C1B34u; f_80295B7C(c); // 800C1B30
  c->r[0]=0u+0x00000000u; // 800C1B34
  W32(c->r[31]+0x00000110u,c->r[0]); // 800C1B38
L_800C1B3C:;
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 800C1B3C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1B40
  if (crb(c,2)) { goto L_800C1B54; } // 800C1B44
  c->lr=0x800C1B4Cu; f_80295B7C(c); // 800C1B48
  c->r[0]=0u+0x00000000u; // 800C1B4C
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800C1B50
L_800C1B54:;
  c->r[3]=R32(c->r[31]+0x00000128u); // 800C1B54
  cmps(c,0,(int32_t)c->r[3],0); // 800C1B58
  if (crb(c,2)) { goto L_800C1B6C; } // 800C1B5C
  c->lr=0x800C1B64u; f_80295B7C(c); // 800C1B60
  c->r[0]=0u+0x00000000u; // 800C1B64
  W32(c->r[31]+0x00000128u,c->r[0]); // 800C1B68
L_800C1B6C:;
  c->r[3]=R32(c->r[31]+0x00000134u); // 800C1B6C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1B70
  if (crb(c,2)) { goto L_800C1B84; } // 800C1B74
  c->lr=0x800C1B7Cu; f_80295B7C(c); // 800C1B78
  c->r[0]=0u+0x00000000u; // 800C1B7C
  W32(c->r[31]+0x00000134u,c->r[0]); // 800C1B80
L_800C1B84:;
  c->r[3]=R32(c->r[31]+0x00000140u); // 800C1B84
  cmps(c,0,(int32_t)c->r[3],0); // 800C1B88
  if (crb(c,2)) { goto L_800C1B9C; } // 800C1B8C
  c->lr=0x800C1B94u; f_80295B7C(c); // 800C1B90
  c->r[0]=0u+0x00000000u; // 800C1B94
  W32(c->r[31]+0x00000140u,c->r[0]); // 800C1B98
L_800C1B9C:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800C1B9C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1BA0
  if (crb(c,2)) { goto L_800C1BB4; } // 800C1BA4
  c->lr=0x800C1BACu; f_80295B7C(c); // 800C1BA8
  c->r[0]=0u+0x00000000u; // 800C1BAC
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 800C1BB0
L_800C1BB4:;
  c->r[3]=R32(c->r[31]+0x00000158u); // 800C1BB4
  cmps(c,0,(int32_t)c->r[3],0); // 800C1BB8
  if (crb(c,2)) { goto L_800C1BCC; } // 800C1BBC
  c->lr=0x800C1BC4u; f_80295B7C(c); // 800C1BC0
  c->r[0]=0u+0x00000000u; // 800C1BC4
  W32(c->r[31]+0x00000158u,c->r[0]); // 800C1BC8
L_800C1BCC:;
  c->r[3]=R32(c->r[31]+0x00000164u); // 800C1BCC
  cmps(c,0,(int32_t)c->r[3],0); // 800C1BD0
  if (crb(c,2)) { goto L_800C1BE4; } // 800C1BD4
  c->lr=0x800C1BDCu; f_80295B7C(c); // 800C1BD8
  c->r[0]=0u+0x00000000u; // 800C1BDC
  W32(c->r[31]+0x00000164u,c->r[0]); // 800C1BE0
L_800C1BE4:;
  c->r[3]=R32(c->r[31]+0x00000170u); // 800C1BE4
  cmps(c,0,(int32_t)c->r[3],0); // 800C1BE8
  if (crb(c,2)) { goto L_800C1BFC; } // 800C1BEC
  c->lr=0x800C1BF4u; f_80295B7C(c); // 800C1BF0
  c->r[0]=0u+0x00000000u; // 800C1BF4
  W32(c->r[31]+0x00000170u,c->r[0]); // 800C1BF8
L_800C1BFC:;
  c->r[3]=R32(c->r[31]+0x0000017Cu); // 800C1BFC
  cmps(c,0,(int32_t)c->r[3],0); // 800C1C00
  if (crb(c,2)) { goto L_800C1C14; } // 800C1C04
  c->lr=0x800C1C0Cu; f_80295B7C(c); // 800C1C08
  c->r[0]=0u+0x00000000u; // 800C1C0C
  W32(c->r[31]+0x0000017Cu,c->r[0]); // 800C1C10
L_800C1C14:;
  c->r[3]=R32(c->r[31]+0x00000188u); // 800C1C14
  cmps(c,0,(int32_t)c->r[3],0); // 800C1C18
  if (crb(c,2)) { goto L_800C1C2C; } // 800C1C1C
  c->lr=0x800C1C24u; f_80295B7C(c); // 800C1C20
  c->r[0]=0u+0x00000000u; // 800C1C24
  W32(c->r[31]+0x00000188u,c->r[0]); // 800C1C28
L_800C1C2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1C2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C1C30
  c->lr=c->r[0]; // 800C1C34
  c->r[1]=c->r[1]+0x00000010u; // 800C1C38
  return; // 800C1C3C
}

// fn_800C1C40
void f_800C1C40(Ctx* __restrict c) {
  trace_call(0x800C1C40u);
  return; // 800C1C40
}

// fn_800C1C44
void f_800C1C44(Ctx* __restrict c) {
  trace_call(0x800C1C44u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1C44
  c->r[6]=0u+0x8B440000u; // 800C1C48
  c->r[5]=0u+0xCAF20000u; // 800C1C4C
  c->r[4]=0u+0xB2CC0000u; // 800C1C50
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C1C54
  c->r[10]=0u+0x00000000u; // 800C1C58
  c->r[9]=0u+0x00000004u; // 800C1C5C
  c->r[30]=0u+0x93190000u; // 800C1C60
  c->r[29]=0u+0xA9800000u; // 800C1C64
  c->r[28]=0u+0x74D50000u; // 800C1C68
  c->r[27]=0u+0x8FA70000u; // 800C1C6C
  c->r[26]=0u+0xE70B0000u; // 800C1C70
  c->r[25]=0u+0x59920000u; // 800C1C74
  c->r[24]=0u+0xAF710000u; // 800C1C78
  c->r[23]=0u+0x87B70000u; // 800C1C7C
  c->r[12]=0u+0x8C130000u; // 800C1C80
  c->r[11]=0u+0xB7800000u; // 800C1C84
  c->r[8]=0u+0x25610000u; // 800C1C88
  c->r[7]=0u+0x294F0000u; // 800C1C8C
  c->r[6]=c->r[6]+0xFFFFD436u; // 800C1C90
  c->r[5]=c->r[5]+0x00000999u; // 800C1C94
  c->r[4]=c->r[4]+0xFFFFF202u; // 800C1C98
  c->r[0]=c->r[30]+0x00007805u; // 800C1C9C
  c->r[29]=c->r[29]+0x000051A6u; // 800C1CA0
  c->r[28]=c->r[28]+0xFFFF915Du; // 800C1CA4
  c->r[27]=c->r[27]+0xFFFFC559u; // 800C1CA8
  c->r[26]=c->r[26]+0xFFFFCCCAu; // 800C1CAC
  c->r[25]=c->r[25]+0x00002509u; // 800C1CB0
  c->r[24]=c->r[24]+0xFFFFF917u; // 800C1CB4
  c->r[23]=c->r[23]+0xFFFF8F81u; // 800C1CB8
  c->r[12]=c->r[12]+0x0000569Fu; // 800C1CBC
  c->r[11]=c->r[11]+0x00003395u; // 800C1CC0
  c->r[8]=c->r[8]+0xFFFF99C4u; // 800C1CC4
  c->r[7]=c->r[7]+0xFFFFD475u; // 800C1CC8
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800C1CCC
  W32(c->r[3]+0x00000020u,c->r[10]); // 800C1CD0
  W32(c->r[3]+0x00000024u,c->r[9]); // 800C1CD4
  W32(c->r[3]+0x00000028u,c->r[5]); // 800C1CD8
  W32(c->r[3]+0x0000002Cu,c->r[10]); // 800C1CDC
  W32(c->r[3]+0x00000030u,c->r[9]); // 800C1CE0
  W32(c->r[3]+0x00000034u,c->r[4]); // 800C1CE4
  W32(c->r[3]+0x00000038u,c->r[10]); // 800C1CE8
  W32(c->r[3]+0x0000003Cu,c->r[9]); // 800C1CEC
  W32(c->r[3]+0x00000040u,c->r[0]); // 800C1CF0
  W32(c->r[3]+0x00000044u,c->r[10]); // 800C1CF4
  W32(c->r[3]+0x00000048u,c->r[9]); // 800C1CF8
  W32(c->r[3]+0x0000004Cu,c->r[29]); // 800C1CFC
  W32(c->r[3]+0x00000050u,c->r[10]); // 800C1D00
  W32(c->r[3]+0x00000054u,c->r[9]); // 800C1D04
  W32(c->r[3]+0x00000058u,c->r[28]); // 800C1D08
  W32(c->r[3]+0x0000005Cu,c->r[10]); // 800C1D0C
  W32(c->r[3]+0x00000060u,c->r[9]); // 800C1D10
  W32(c->r[3]+0x00000064u,c->r[27]); // 800C1D14
  W32(c->r[3]+0x00000068u,c->r[10]); // 800C1D18
  W32(c->r[3]+0x0000006Cu,c->r[9]); // 800C1D1C
  W32(c->r[3]+0x00000070u,c->r[26]); // 800C1D20
  W32(c->r[3]+0x00000074u,c->r[10]); // 800C1D24
  W32(c->r[3]+0x00000078u,c->r[9]); // 800C1D28
  W32(c->r[3]+0x0000007Cu,c->r[25]); // 800C1D2C
  W32(c->r[3]+0x00000080u,c->r[10]); // 800C1D30
  W32(c->r[3]+0x00000084u,c->r[9]); // 800C1D34
  W32(c->r[3]+0x00000088u,c->r[24]); // 800C1D38
  W32(c->r[3]+0x0000008Cu,c->r[10]); // 800C1D3C
  W32(c->r[3]+0x00000090u,c->r[9]); // 800C1D40
  W32(c->r[3]+0x00000094u,c->r[23]); // 800C1D44
  W32(c->r[3]+0x00000098u,c->r[10]); // 800C1D48
  W32(c->r[3]+0x0000009Cu,c->r[9]); // 800C1D4C
  W32(c->r[3]+0x000000A0u,c->r[12]); // 800C1D50
  W32(c->r[3]+0x000000A4u,c->r[10]); // 800C1D54
  W32(c->r[3]+0x000000A8u,c->r[9]); // 800C1D58
  W32(c->r[3]+0x000000ACu,c->r[11]); // 800C1D5C
  W32(c->r[3]+0x000000B0u,c->r[10]); // 800C1D60
  W32(c->r[3]+0x000000B4u,c->r[9]); // 800C1D64
  W32(c->r[3]+0x000000B8u,c->r[8]); // 800C1D68
  W32(c->r[3]+0x000000BCu,c->r[10]); // 800C1D6C
  W32(c->r[3]+0x000000C0u,c->r[9]); // 800C1D70
  W32(c->r[3]+0x000000C4u,c->r[7]); // 800C1D74
  c->r[8]=0u+0xCD560000u; // 800C1D78
  c->r[7]=0u+0xCF3C0000u; // 800C1D7C
  c->r[6]=0u+0xCEE50000u; // 800C1D80
  c->r[5]=0u+0xA82E0000u; // 800C1D84
  c->r[4]=0u+0x1C3A0000u; // 800C1D88
  c->r[23]=0u+0x37720000u; // 800C1D8C
  c->r[24]=0u+0x7D5B0000u; // 800C1D90
  c->r[25]=0u+0xF8200000u; // 800C1D94
  c->r[26]=0u+0xF4D60000u; // 800C1D98
  c->r[27]=0u+0x9A500000u; // 800C1D9C
  c->r[28]=0u+0xA8D80000u; // 800C1DA0
  c->r[29]=0u+0xAA090000u; // 800C1DA4
  c->r[30]=0u+0x5F3D0000u; // 800C1DA8
  c->r[31]=0u+0x05EB0000u; // 800C1DAC
  c->r[12]=0u+0x91BD0000u; // 800C1DB0
  c->r[11]=0u+0xDAA30000u; // 800C1DB4
  c->r[8]=c->r[8]+0xFFFFA0BBu; // 800C1DB8
  c->r[7]=c->r[7]+0x00005532u; // 800C1DBC
  c->r[6]=c->r[6]+0xFFFFF9B5u; // 800C1DC0
  c->r[5]=c->r[5]+0x00000681u; // 800C1DC4
  c->r[4]=c->r[4]+0x000037D0u; // 800C1DC8
  c->r[0]=c->r[23]+0xFFFFFCB1u; // 800C1DCC
  c->r[24]=c->r[24]+0x00005C89u; // 800C1DD0
  c->r[25]=c->r[25]+0xFFFFDCE2u; // 800C1DD4
  c->r[26]=c->r[26]+0xFFFF81C4u; // 800C1DD8
  c->r[27]=c->r[27]+0x00005544u; // 800C1DDC
  c->r[28]=c->r[28]+0xFFFFB0EFu; // 800C1DE0
  c->r[29]=c->r[29]+0xFFFFD83Au; // 800C1DE4
  c->r[30]=c->r[30]+0x00006269u; // 800C1DE8
  c->r[31]=c->r[31]+0xFFFFDCC4u; // 800C1DEC
  c->r[12]=c->r[12]+0x00006D0Au; // 800C1DF0
  c->r[11]=c->r[11]+0x00002272u; // 800C1DF4
  W32(c->r[3]+0x000000C8u,c->r[10]); // 800C1DF8
  W32(c->r[3]+0x000000CCu,c->r[9]); // 800C1DFC
  W32(c->r[3]+0x000000D0u,c->r[8]); // 800C1E00
  W32(c->r[3]+0x000000D4u,c->r[10]); // 800C1E04
  W32(c->r[3]+0x000000D8u,c->r[9]); // 800C1E08
  W32(c->r[3]+0x000000DCu,c->r[7]); // 800C1E0C
  W32(c->r[3]+0x000000E0u,c->r[10]); // 800C1E10
  W32(c->r[3]+0x000000E4u,c->r[9]); // 800C1E14
  W32(c->r[3]+0x000000E8u,c->r[6]); // 800C1E18
  W32(c->r[3]+0x000000ECu,c->r[10]); // 800C1E1C
  W32(c->r[3]+0x000000F0u,c->r[9]); // 800C1E20
  W32(c->r[3]+0x000000F4u,c->r[5]); // 800C1E24
  W32(c->r[3]+0x000000F8u,c->r[10]); // 800C1E28
  W32(c->r[3]+0x000000FCu,c->r[9]); // 800C1E2C
  W32(c->r[3]+0x00000100u,c->r[4]); // 800C1E30
  W32(c->r[3]+0x00000104u,c->r[10]); // 800C1E34
  W32(c->r[3]+0x00000108u,c->r[9]); // 800C1E38
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 800C1E3C
  W32(c->r[3]+0x00000110u,c->r[10]); // 800C1E40
  W32(c->r[3]+0x00000114u,c->r[9]); // 800C1E44
  W32(c->r[3]+0x00000118u,c->r[24]); // 800C1E48
  W32(c->r[3]+0x0000011Cu,c->r[10]); // 800C1E4C
  W32(c->r[3]+0x00000120u,c->r[9]); // 800C1E50
  W32(c->r[3]+0x00000124u,c->r[25]); // 800C1E54
  W32(c->r[3]+0x00000128u,c->r[10]); // 800C1E58
  W32(c->r[3]+0x0000012Cu,c->r[9]); // 800C1E5C
  W32(c->r[3]+0x00000130u,c->r[26]); // 800C1E60
  W32(c->r[3]+0x00000134u,c->r[10]); // 800C1E64
  W32(c->r[3]+0x00000138u,c->r[9]); // 800C1E68
  W32(c->r[3]+0x0000013Cu,c->r[27]); // 800C1E6C
  W32(c->r[3]+0x00000140u,c->r[10]); // 800C1E70
  W32(c->r[3]+0x00000144u,c->r[9]); // 800C1E74
  W32(c->r[3]+0x00000148u,c->r[28]); // 800C1E78
  W32(c->r[3]+0x0000014Cu,c->r[10]); // 800C1E7C
  W32(c->r[3]+0x00000150u,c->r[9]); // 800C1E80
  W32(c->r[3]+0x00000154u,c->r[29]); // 800C1E84
  W32(c->r[3]+0x00000158u,c->r[10]); // 800C1E88
  W32(c->r[3]+0x0000015Cu,c->r[9]); // 800C1E8C
  W32(c->r[3]+0x00000160u,c->r[30]); // 800C1E90
  W32(c->r[3]+0x00000164u,c->r[10]); // 800C1E94
  W32(c->r[3]+0x00000168u,c->r[9]); // 800C1E98
  W32(c->r[3]+0x0000016Cu,c->r[31]); // 800C1E9C
  W32(c->r[3]+0x00000170u,c->r[10]); // 800C1EA0
  W32(c->r[3]+0x00000174u,c->r[9]); // 800C1EA4
  W32(c->r[3]+0x00000178u,c->r[12]); // 800C1EA8
  W32(c->r[3]+0x0000017Cu,c->r[10]); // 800C1EAC
  W32(c->r[3]+0x00000180u,c->r[9]); // 800C1EB0
  W32(c->r[3]+0x00000184u,c->r[11]); // 800C1EB4
  W32(c->r[3]+0x00000188u,c->r[10]); // 800C1EB8
  W32(c->r[3]+0x0000018Cu,c->r[9]); // 800C1EBC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1EC0
  c->r[1]=c->r[1]+0x00000030u; // 800C1EC4
  return; // 800C1EC8
}

// fn_800C1ECC
void f_800C1ECC(Ctx* __restrict c) {
  trace_call(0x800C1ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1ECC
  c->r[0]=c->lr; // 800C1ED0
  cmps(c,0,(int32_t)c->r[5],0); // 800C1ED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C1ED8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C1EDC
  c->r[28]=c->r[3]|c->r[3]; // 800C1EE0
  c->r[29]=c->r[4]|c->r[4]; // 800C1EE4
  c->r[30]=c->r[7]|c->r[7]; // 800C1EE8
  if (crb(c,2)) { goto L_800C1EF8; } // 800C1EEC
  c->r[31]=c->r[5]|c->r[5]; // 800C1EF0
  goto L_800C1EFC; // 800C1EF4
L_800C1EF8:;
  c->r[31]=c->r[28]|c->r[28]; // 800C1EF8
L_800C1EFC:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800C1EFC
  c->r[4]=c->r[4]+0x0000001Cu; // 800C1F00
  c->lr=0x800C1F08u; f_8003BDD0(c); // 800C1F04
  c->r[3]=c->r[31]+0x00000028u; // 800C1F08
  c->r[4]=c->r[29]+0x00000028u; // 800C1F0C
  c->lr=0x800C1F14u; f_8003BDD0(c); // 800C1F10
  c->r[3]=c->r[31]+0x00000034u; // 800C1F14
  c->r[4]=c->r[29]+0x00000034u; // 800C1F18
  c->lr=0x800C1F20u; f_8003BDD0(c); // 800C1F1C
  c->r[3]=c->r[31]+0x00000040u; // 800C1F20
  c->r[4]=c->r[29]+0x00000040u; // 800C1F24
  c->lr=0x800C1F2Cu; f_8003BDD0(c); // 800C1F28
  c->r[3]=c->r[31]+0x0000004Cu; // 800C1F2C
  c->r[4]=c->r[29]+0x0000004Cu; // 800C1F30
  c->lr=0x800C1F38u; f_8003BDD0(c); // 800C1F34
  c->r[3]=c->r[31]+0x00000058u; // 800C1F38
  c->r[4]=c->r[29]+0x00000058u; // 800C1F3C
  c->lr=0x800C1F44u; f_8003BDD0(c); // 800C1F40
  c->r[3]=c->r[31]+0x00000064u; // 800C1F44
  c->r[4]=c->r[29]+0x00000064u; // 800C1F48
  c->lr=0x800C1F50u; f_8003BDD0(c); // 800C1F4C
  c->r[3]=c->r[31]+0x00000070u; // 800C1F50
  c->r[4]=c->r[29]+0x00000070u; // 800C1F54
  c->lr=0x800C1F5Cu; f_8003BDD0(c); // 800C1F58
  c->r[3]=c->r[31]+0x0000007Cu; // 800C1F5C
  c->r[4]=c->r[29]+0x0000007Cu; // 800C1F60
  c->lr=0x800C1F68u; f_8003BDD0(c); // 800C1F64
  c->r[3]=c->r[31]+0x00000088u; // 800C1F68
  c->r[4]=c->r[29]+0x00000088u; // 800C1F6C
  c->lr=0x800C1F74u; f_8003BDD0(c); // 800C1F70
  c->r[3]=c->r[31]+0x00000094u; // 800C1F74
  c->r[4]=c->r[29]+0x00000094u; // 800C1F78
  c->lr=0x800C1F80u; f_8003BDD0(c); // 800C1F7C
  c->r[3]=c->r[31]+0x000000A0u; // 800C1F80
  c->r[4]=c->r[29]+0x000000A0u; // 800C1F84
  c->lr=0x800C1F8Cu; f_8003BDD0(c); // 800C1F88
  c->r[3]=c->r[31]+0x000000ACu; // 800C1F8C
  c->r[4]=c->r[29]+0x000000ACu; // 800C1F90
  c->lr=0x800C1F98u; f_8003BDD0(c); // 800C1F94
  c->r[3]=c->r[31]+0x000000B8u; // 800C1F98
  c->r[4]=c->r[29]+0x000000B8u; // 800C1F9C
  c->lr=0x800C1FA4u; f_8003BDD0(c); // 800C1FA0
  c->r[3]=c->r[31]+0x000000C4u; // 800C1FA4
  c->r[4]=c->r[29]+0x000000C4u; // 800C1FA8
  c->lr=0x800C1FB0u; f_8003BDD0(c); // 800C1FAC
  c->r[3]=c->r[31]+0x000000D0u; // 800C1FB0
  c->r[4]=c->r[29]+0x000000D0u; // 800C1FB4
  c->lr=0x800C1FBCu; f_8003BDD0(c); // 800C1FB8
  c->r[3]=c->r[31]+0x000000DCu; // 800C1FBC
  c->r[4]=c->r[29]+0x000000DCu; // 800C1FC0
  c->lr=0x800C1FC8u; f_8003BDD0(c); // 800C1FC4
  c->r[3]=c->r[31]+0x000000E8u; // 800C1FC8
  c->r[4]=c->r[29]+0x000000E8u; // 800C1FCC
  c->lr=0x800C1FD4u; f_8003BDD0(c); // 800C1FD0
  c->r[3]=c->r[31]+0x000000F4u; // 800C1FD4
  c->r[4]=c->r[29]+0x000000F4u; // 800C1FD8
  c->lr=0x800C1FE0u; f_8003BDD0(c); // 800C1FDC
  c->r[3]=c->r[31]+0x00000100u; // 800C1FE0
  c->r[4]=c->r[29]+0x00000100u; // 800C1FE4
  c->lr=0x800C1FECu; f_8003BDD0(c); // 800C1FE8
  c->r[3]=c->r[31]+0x0000010Cu; // 800C1FEC
  c->r[4]=c->r[29]+0x0000010Cu; // 800C1FF0
  c->lr=0x800C1FF8u; f_8003BDD0(c); // 800C1FF4
  c->r[3]=c->r[31]+0x00000118u; // 800C1FF8
  c->r[4]=c->r[29]+0x00000118u; // 800C1FFC
  c->lr=0x800C2004u; f_8003BDD0(c); // 800C2000
  c->r[3]=c->r[31]+0x00000124u; // 800C2004
  c->r[4]=c->r[29]+0x00000124u; // 800C2008
  c->lr=0x800C2010u; f_8003BDD0(c); // 800C200C
  c->r[3]=c->r[31]+0x00000130u; // 800C2010
  c->r[4]=c->r[29]+0x00000130u; // 800C2014
  c->lr=0x800C201Cu; f_8003BDD0(c); // 800C2018
  c->r[3]=c->r[31]+0x0000013Cu; // 800C201C
  c->r[4]=c->r[29]+0x0000013Cu; // 800C2020
  c->lr=0x800C2028u; f_8003BDD0(c); // 800C2024
  c->r[3]=c->r[31]+0x00000148u; // 800C2028
  c->r[4]=c->r[29]+0x00000148u; // 800C202C
  c->lr=0x800C2034u; f_8003BDD0(c); // 800C2030
  c->r[3]=c->r[31]+0x00000154u; // 800C2034
  c->r[4]=c->r[29]+0x00000154u; // 800C2038
  c->lr=0x800C2040u; f_8003BDD0(c); // 800C203C
  c->r[3]=c->r[31]+0x00000160u; // 800C2040
  c->r[4]=c->r[29]+0x00000160u; // 800C2044
  c->lr=0x800C204Cu; f_8003BDD0(c); // 800C2048
  c->r[3]=c->r[31]+0x0000016Cu; // 800C204C
  c->r[4]=c->r[29]+0x0000016Cu; // 800C2050
  c->lr=0x800C2058u; f_8003BDD0(c); // 800C2054
  c->r[3]=c->r[31]+0x00000178u; // 800C2058
  c->r[4]=c->r[29]+0x00000178u; // 800C205C
  c->lr=0x800C2064u; f_8003BDD0(c); // 800C2060
  c->r[3]=c->r[31]+0x00000184u; // 800C2064
  c->r[4]=c->r[29]+0x00000184u; // 800C2068
  c->lr=0x800C2070u; f_8003BDD0(c); // 800C206C
  cmps(c,0,(int32_t)c->r[30],0); // 800C2070
  if (crb(c,2)) { goto L_800C2098; } // 800C2074
  c->r[3]=R32(c->r[28]+0x00000190u); // 800C2078
  cmps(c,0,(int32_t)c->r[3],0); // 800C207C
  if (crb(c,1)) { goto L_800C2090; } // 800C2080
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C2084
  W32(c->r[28]+0x00000190u,c->r[0]); // 800C2088
  goto L_800C2098; // 800C208C
L_800C2090:;
  c->r[0]=c->r[3]+0x00000001u; // 800C2090
  W32(c->r[28]+0x00000190u,c->r[0]); // 800C2094
L_800C2098:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2098
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C209C
  c->lr=c->r[0]; // 800C20A0
  c->r[1]=c->r[1]+0x00000020u; // 800C20A4
  return; // 800C20A8
}

// fn_800C20AC
void f_800C20AC(Ctx* __restrict c) {
  trace_call(0x800C20ACu);
  c->r[3]=0u+0x00000000u; // 800C20AC
  return; // 800C20B0
}

// fn_800C20B4
void f_800C20B4(Ctx* __restrict c) {
  trace_call(0x800C20B4u);
  c->r[3]=0u+0x00000194u; // 800C20B4
  return; // 800C20B8
}

// fn_800C20BC
void f_800C20BC(Ctx* __restrict c) {
  trace_call(0x800C20BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C20BC
  c->r[0]=c->lr; // 800C20C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C20C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C20C8
  c->r[31]=c->r[3]|c->r[3]; // 800C20CC
  c->lr=0x800C20D4u; f_800C0578(c); // 800C20D0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C20D4
  c->r[3]=0u+0x80420000u; // 800C20D8
  c->r[3]=c->r[3]+0xFFFF9FFCu; // 800C20DC
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C20E0
  c->r[0]=c->r[0]|0x80000000u; // 800C20E4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C20E8
  c->r[3]=c->r[31]|c->r[31]; // 800C20EC
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C20F0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C20F4
  c->ctr=c->r[12]; // 800C20F8
  if (true) { c->lr=0x800C2100u; dispatch(c,c->ctr); } // 800C20FC
  c->r[3]=c->r[31]|c->r[31]; // 800C2100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2104
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2108
  c->lr=c->r[0]; // 800C210C
  c->r[1]=c->r[1]+0x00000010u; // 800C2110
  return; // 800C2114
}

// fn_800C2118
void f_800C2118(Ctx* __restrict c) {
  trace_call(0x800C2118u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2118
  c->r[0]=c->lr; // 800C211C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2120
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2124
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2128
  c->r[30]=c->r[3]|c->r[3]; // 800C212C
  c->r[31]=c->r[4]|c->r[4]; // 800C2130
  if (crb(c,2)) { goto L_800C2150; } // 800C2134
  c->r[4]=0u+0x00000000u; // 800C2138
  c->lr=0x800C2140u; f_802B1180(c); // 800C213C
  cmps(c,0,(int32_t)c->r[31],0); // 800C2140
  if (!crb(c,1)) { goto L_800C2150; } // 800C2144
  c->r[3]=c->r[30]|c->r[30]; // 800C2148
  c->lr=0x800C2150u; f_80244DC0(c); // 800C214C
L_800C2150:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2150
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2154
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2158
  c->lr=c->r[0]; // 800C215C
  c->r[1]=c->r[1]+0x00000010u; // 800C2160
  return; // 800C2164
}

// fn_800C2168
void f_800C2168(Ctx* __restrict c) {
  trace_call(0x800C2168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2168
  c->r[0]=c->lr; // 800C216C
  c->r[3]=0u+0x00000194u; // 800C2170
  c->r[4]=c->r[13]+0xFFFFAE9Au; // 800C2174
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2178
  c->r[5]=0u+0x00000000u; // 800C217C
  c->r[6]=0u+0x00001001u; // 800C2180
  c->lr=0x800C2188u; f_80244D20(c); // 800C2184
  cmps(c,0,(int32_t)c->r[3],0); // 800C2188
  if (crb(c,2)) { goto L_800C2194; } // 800C218C
  c->lr=0x800C2194u; f_800C20BC(c); // 800C2190
L_800C2194:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2194
  c->lr=c->r[0]; // 800C2198
  c->r[1]=c->r[1]+0x00000010u; // 800C219C
  return; // 800C21A0
}

// fn_800C21A4
void f_800C21A4(Ctx* __restrict c) {
  trace_call(0x800C21A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C21A4
  c->r[0]=c->lr; // 800C21A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C21AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C21B0
  c->r[31]=c->r[3]|c->r[3]; // 800C21B4
  c->lr=0x800C21BCu; f_80244520(c); // 800C21B8
  c->r[7]=c->r[3]|c->r[3]; // 800C21BC
  c->r[9]=c->r[31]|c->r[31]; // 800C21C0
  c->r[3]=0u+0x00000194u; // 800C21C4
  c->r[4]=c->r[13]+0xFFFFAE9Fu; // 800C21C8
  c->r[5]=0u+0x00000000u; // 800C21CC
  c->r[6]=0u+0x00002001u; // 800C21D0
  c->r[8]=0u+0x00000000u; // 800C21D4
  c->lr=0x800C21DCu; f_80242DF0(c); // 800C21D8
  c->r[4]=c->r[3]|c->r[3]; // 800C21DC
  c->r[3]=0u+0x00000194u; // 800C21E0
  c->r[5]=c->r[13]+0xFFFFAEA4u; // 800C21E4
  c->r[6]=0u+0x00000000u; // 800C21E8
  c->r[7]=0u+0x00001001u; // 800C21EC
  c->lr=0x800C21F4u; f_80244DB0(c); // 800C21F0
  cmps(c,0,(int32_t)c->r[3],0); // 800C21F4
  if (crb(c,2)) { goto L_800C2200; } // 800C21F8
  c->lr=0x800C2200u; f_800C20BC(c); // 800C21FC
L_800C2200:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2204
  c->lr=c->r[0]; // 800C2208
  c->r[1]=c->r[1]+0x00000010u; // 800C220C
  return; // 800C2210
}

// fn_800C2214
void f_800C2214(Ctx* __restrict c) {
  trace_call(0x800C2214u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2214
  c->r[0]=c->lr; // 800C2218
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C221C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C2220
  c->r[31]=c->r[3]|c->r[3]; // 800C2224
  c->lr=0x800C222Cu; f_802B1168(c); // 800C2228
  c->r[7]=0u+0x80420000u; // 800C222C
  c->r[5]=0u+0x80410000u; // 800C2230
  c->r[6]=0u+0x00000000u; // 800C2234
  c->r[4]=0u+0xD7870000u; // 800C2238
  c->r[3]=0u+0x472F0000u; // 800C223C
  c->r[7]=c->r[7]+0xFFFF9FC0u; // 800C2240
  c->r[0]=c->r[3]+0x000055E9u; // 800C2244
  c->r[5]=c->r[5]+0xFFFFCD0Au; // 800C2248
  c->r[4]=c->r[4]+0x00003713u; // 800C224C
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C2250
  c->r[3]=c->r[31]|c->r[31]; // 800C2254
  W32(c->r[31]+0x0000052Cu,c->r[6]); // 800C2258
  W32(c->r[31]+0x00000000u,c->r[5]); // 800C225C
  W32(c->r[31]+0x00000008u,c->r[6]); // 800C2260
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C2264
  W32(c->r[31]+0x00000010u,c->r[6]); // 800C2268
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C226C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2270
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2274
  c->lr=c->r[0]; // 800C2278
  c->r[1]=c->r[1]+0x00000010u; // 800C227C
  return; // 800C2280
}

// fn_800C2284
void f_800C2284(Ctx* __restrict c) {
  trace_call(0x800C2284u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2284
  c->r[0]=c->lr; // 800C2288
  cmps(c,0,(int32_t)c->r[4],0); // 800C228C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C2290
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2294
  c->r[30]=c->r[3]|c->r[3]; // 800C2298
  c->r[31]=c->r[4]|c->r[4]; // 800C229C
  if (crb(c,2)) { goto L_800C22F4; } // 800C22A0
  c->r[3]=c->r[31]|c->r[31]; // 800C22A4
  c->lr=0x800C22ACu; f_80244520(c); // 800C22A8
  c->r[7]=c->r[3]|c->r[3]; // 800C22AC
  c->r[9]=c->r[31]|c->r[31]; // 800C22B0
  c->r[3]=0u+0x00000530u; // 800C22B4
  c->r[4]=c->r[13]+0xFFFFAEA9u; // 800C22B8
  c->r[5]=0u+0x00000000u; // 800C22BC
  c->r[6]=0u+0x00002001u; // 800C22C0
  c->r[8]=0u+0x00000000u; // 800C22C4
  c->lr=0x800C22CCu; f_80242DF0(c); // 800C22C8
  c->r[4]=c->r[3]|c->r[3]; // 800C22CC
  c->r[3]=0u+0x00000530u; // 800C22D0
  c->r[5]=c->r[13]+0xFFFFAEAEu; // 800C22D4
  c->r[6]=0u+0x00000000u; // 800C22D8
  c->r[7]=0u+0x00001001u; // 800C22DC
  c->lr=0x800C22E4u; f_80244DB0(c); // 800C22E0
  cmps(c,0,(int32_t)c->r[3],0); // 800C22E4
  if (crb(c,2)) { goto L_800C2314; } // 800C22E8
  c->lr=0x800C22F0u; f_800C2214(c); // 800C22EC
  goto L_800C2314; // 800C22F0
L_800C22F4:;
  c->r[3]=0u+0x00000530u; // 800C22F4
  c->r[4]=c->r[13]+0xFFFFAEB3u; // 800C22F8
  c->r[5]=0u+0x00000000u; // 800C22FC
  c->r[6]=0u+0x00001001u; // 800C2300
  c->lr=0x800C2308u; f_80244D20(c); // 800C2304
  cmps(c,0,(int32_t)c->r[3],0); // 800C2308
  if (crb(c,2)) { goto L_800C2314; } // 800C230C
  c->lr=0x800C2314u; f_800C2214(c); // 800C2310
L_800C2314:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C2314
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C2318
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C231C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2320
  c->lr=c->r[0]; // 800C2324
  c->r[1]=c->r[1]+0x00000010u; // 800C2328
  return; // 800C232C
}

// fn_800C2330
void f_800C2330(Ctx* __restrict c) {
  trace_call(0x800C2330u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2330
  c->r[0]=c->lr; // 800C2334
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C2338
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C233C
  c->r[31]=c->r[4]|c->r[4]; // 800C2340
  c->r[30]=c->r[3]|c->r[3]; // 800C2344
  c->r[4]=0u+0x00000000u; // 800C2348
  c->r[3]=c->r[31]|c->r[31]; // 800C234C
  c->lr=0x800C2354u; f_8030BE30(c); // 800C2350
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C2354
  c->r[29]=0u+0x00000000u; // 800C2358
  c->r[3]=c->r[31]|c->r[31]; // 800C235C
  W32(c->r[30]+0x00000020u,c->r[29]); // 800C2360
  c->lr=0x800C2368u; f_8030BD1C(c); // 800C2364
  W32(c->r[30]+0x00000024u,c->r[3]); // 800C2368
  c->r[3]=c->r[31]|c->r[31]; // 800C236C
  c->r[4]=0u+0x00000000u; // 800C2370
  c->lr=0x800C2378u; f_8030BE30(c); // 800C2374
  W32(c->r[30]+0x00000028u,c->r[3]); // 800C2378
  c->r[3]=c->r[31]|c->r[31]; // 800C237C
  c->r[4]=c->r[30]+0x00000034u; // 800C2380
  c->r[5]=0u+0x00000020u; // 800C2384
  W32(c->r[30]+0x0000002Cu,c->r[29]); // 800C2388
  c->lr=0x800C2390u; f_8030B7F0(c); // 800C238C
  c->r[3]=c->r[31]|c->r[31]; // 800C2390
  c->lr=0x800C2398u; f_8030BD1C(c); // 800C2394
  W32(c->r[30]+0x00000030u,c->r[3]); // 800C2398
  c->r[3]=c->r[31]|c->r[31]; // 800C239C
  c->r[4]=0u+0x00000000u; // 800C23A0
  c->lr=0x800C23A8u; f_8030BE30(c); // 800C23A4
  W32(c->r[30]+0x00000054u,c->r[3]); // 800C23A8
  c->r[3]=c->r[31]|c->r[31]; // 800C23AC
  W32(c->r[30]+0x00000058u,c->r[29]); // 800C23B0
  c->lr=0x800C23B8u; f_8030BD1C(c); // 800C23B4
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800C23B8
  c->r[3]=c->r[31]|c->r[31]; // 800C23BC
  c->r[4]=0u+0x00000000u; // 800C23C0
  c->lr=0x800C23C8u; f_8030BE30(c); // 800C23C4
  W32(c->r[30]+0x00000060u,c->r[3]); // 800C23C8
  c->r[3]=c->r[31]|c->r[31]; // 800C23CC
  W32(c->r[30]+0x00000064u,c->r[29]); // 800C23D0
  c->lr=0x800C23D8u; f_8030BD1C(c); // 800C23D4
  W32(c->r[30]+0x00000068u,c->r[3]); // 800C23D8
  c->r[3]=c->r[31]|c->r[31]; // 800C23DC
  c->r[4]=0u+0x00000000u; // 800C23E0
  c->lr=0x800C23E8u; f_8030BE30(c); // 800C23E4
  W32(c->r[30]+0x0000006Cu,c->r[3]); // 800C23E8
  c->r[3]=c->r[31]|c->r[31]; // 800C23EC
  c->r[4]=c->r[30]+0x00000078u; // 800C23F0
  c->r[5]=0u+0x00000020u; // 800C23F4
  W32(c->r[30]+0x00000070u,c->r[29]); // 800C23F8
  c->lr=0x800C2400u; f_8030B7F0(c); // 800C23FC
  c->r[3]=c->r[31]|c->r[31]; // 800C2400
  c->lr=0x800C2408u; f_8030BD1C(c); // 800C2404
  W32(c->r[30]+0x00000074u,c->r[3]); // 800C2408
  c->r[3]=c->r[31]|c->r[31]; // 800C240C
  c->r[4]=0u+0x00000000u; // 800C2410
  c->lr=0x800C2418u; f_8030BE30(c); // 800C2414
  W32(c->r[30]+0x00000098u,c->r[3]); // 800C2418
  c->r[3]=c->r[31]|c->r[31]; // 800C241C
  W32(c->r[30]+0x0000009Cu,c->r[29]); // 800C2420
  c->lr=0x800C2428u; f_8030BD1C(c); // 800C2424
  W32(c->r[30]+0x000000A0u,c->r[3]); // 800C2428
  c->r[3]=c->r[31]|c->r[31]; // 800C242C
  c->r[4]=0u+0x00000000u; // 800C2430
  c->lr=0x800C2438u; f_8030BE30(c); // 800C2434
  W32(c->r[30]+0x000000C4u,c->r[3]); // 800C2438
  c->r[3]=c->r[31]|c->r[31]; // 800C243C
  W32(c->r[30]+0x000000C8u,c->r[29]); // 800C2440
  c->lr=0x800C2448u; f_8030BD1C(c); // 800C2444
  W32(c->r[30]+0x000000CCu,c->r[3]); // 800C2448
  c->r[3]=c->r[31]|c->r[31]; // 800C244C
  c->r[4]=0u+0x00000000u; // 800C2450
  c->lr=0x800C2458u; f_8030BE30(c); // 800C2454
  W32(c->r[30]+0x000000D0u,c->r[3]); // 800C2458
  c->r[3]=c->r[31]|c->r[31]; // 800C245C
  W32(c->r[30]+0x000000D4u,c->r[29]); // 800C2460
  c->lr=0x800C2468u; f_8030BD1C(c); // 800C2464
  W32(c->r[30]+0x000000D8u,c->r[3]); // 800C2468
  c->r[3]=c->r[31]|c->r[31]; // 800C246C
  c->lr=0x800C2474u; f_8030BD1C(c); // 800C2470
  W32(c->r[30]+0x000000DCu,c->r[3]); // 800C2474
  c->r[27]=0u+0x00000000u; // 800C2478
  goto L_800C24A8; // 800C247C
L_800C2480:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2480
  c->r[28]=c->r[30]+c->r[29]; // 800C2484
  c->lr=0x800C248Cu; f_8030C0A0(c); // 800C2488
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[1]);} // 800C248C
  c->r[3]=c->r[31]|c->r[31]; // 800C2490
  c->r[4]=0u+0x00000000u; // 800C2494
  c->lr=0x800C249Cu; f_8030BE30(c); // 800C2498
  W32(c->r[28]+0x000000E0u,c->r[3]); // 800C249C
  c->r[27]=c->r[27]+0x00000001u; // 800C24A0
  c->r[29]=c->r[29]+0x00000004u; // 800C24A4
L_800C24A8:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 800C24A8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C24AC
  if (crb(c,0)) { IRQCHK(c); goto L_800C2480; } // 800C24B0
  c->r[3]=c->r[31]|c->r[31]; // 800C24B4
  c->r[4]=0u+0x00000000u; // 800C24B8
  c->lr=0x800C24C0u; f_8030BE30(c); // 800C24BC
  W32(c->r[30]+0x00000108u,c->r[3]); // 800C24C0
  c->r[0]=0u+0x00000000u; // 800C24C4
  c->r[3]=c->r[31]|c->r[31]; // 800C24C8
  c->r[4]=c->r[30]+0x00000114u; // 800C24CC
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 800C24D0
  c->r[5]=0u+0x00000020u; // 800C24D4
  c->lr=0x800C24DCu; f_8030B7F0(c); // 800C24D8
  c->r[3]=c->r[31]|c->r[31]; // 800C24DC
  c->lr=0x800C24E4u; f_8030BD1C(c); // 800C24E0
  W32(c->r[30]+0x00000110u,c->r[3]); // 800C24E4
  c->r[3]=c->r[31]|c->r[31]; // 800C24E8
  c->lr=0x800C24F0u; f_8030BD1C(c); // 800C24EC
  W32(c->r[30]+0x00000134u,c->r[3]); // 800C24F0
  c->r[27]=0u+0x00000000u; // 800C24F4
  c->r[29]=0u+0x00000000u; // 800C24F8
  goto L_800C2528; // 800C24FC
L_800C2500:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2500
  c->r[28]=c->r[30]+c->r[29]; // 800C2504
  c->lr=0x800C250Cu; f_8030C0A0(c); // 800C2508
  {uint32_t ea=c->r[28]+0x0000014Cu; WF32(ea,c->f[1]);} // 800C250C
  c->r[3]=c->r[31]|c->r[31]; // 800C2510
  c->r[4]=0u+0x00000000u; // 800C2514
  c->lr=0x800C251Cu; f_8030BE30(c); // 800C2518
  W32(c->r[28]+0x00000138u,c->r[3]); // 800C251C
  c->r[27]=c->r[27]+0x00000001u; // 800C2520
  c->r[29]=c->r[29]+0x00000004u; // 800C2524
L_800C2528:;
  c->r[0]=R32(c->r[30]+0x00000134u); // 800C2528
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C252C
  if (crb(c,0)) { IRQCHK(c); goto L_800C2500; } // 800C2530
  c->r[3]=c->r[31]|c->r[31]; // 800C2534
  c->r[4]=0u+0x00000000u; // 800C2538
  c->lr=0x800C2540u; f_8030BE30(c); // 800C253C
  W32(c->r[30]+0x00000160u,c->r[3]); // 800C2540
  c->r[29]=0u+0x00000000u; // 800C2544
  c->r[3]=c->r[31]|c->r[31]; // 800C2548
  W32(c->r[30]+0x00000164u,c->r[29]); // 800C254C
  c->lr=0x800C2554u; f_8030BD1C(c); // 800C2550
  W32(c->r[30]+0x00000168u,c->r[3]); // 800C2554
  c->r[3]=c->r[31]|c->r[31]; // 800C2558
  c->r[4]=0u+0x00000000u; // 800C255C
  c->lr=0x800C2564u; f_8030BE30(c); // 800C2560
  W32(c->r[30]+0x0000016Cu,c->r[3]); // 800C2564
  c->r[3]=c->r[31]|c->r[31]; // 800C2568
  W32(c->r[30]+0x00000170u,c->r[29]); // 800C256C
  c->lr=0x800C2574u; f_8030BD1C(c); // 800C2570
  W32(c->r[30]+0x00000174u,c->r[3]); // 800C2574
  c->r[3]=c->r[31]|c->r[31]; // 800C2578
  c->r[4]=0u+0x00000000u; // 800C257C
  c->lr=0x800C2584u; f_8030BE30(c); // 800C2580
  W32(c->r[30]+0x00000178u,c->r[3]); // 800C2584
  c->r[3]=c->r[31]|c->r[31]; // 800C2588
  W32(c->r[30]+0x0000017Cu,c->r[29]); // 800C258C
  c->lr=0x800C2594u; f_8030BD1C(c); // 800C2590
  W32(c->r[30]+0x00000180u,c->r[3]); // 800C2594
  c->r[3]=c->r[31]|c->r[31]; // 800C2598
  c->r[4]=0u+0x00000000u; // 800C259C
  c->lr=0x800C25A4u; f_8030BE30(c); // 800C25A0
  W32(c->r[30]+0x00000184u,c->r[3]); // 800C25A4
  c->r[3]=c->r[31]|c->r[31]; // 800C25A8
  c->r[4]=c->r[30]+0x00000190u; // 800C25AC
  c->r[5]=0u+0x00000020u; // 800C25B0
  W32(c->r[30]+0x00000188u,c->r[29]); // 800C25B4
  c->lr=0x800C25BCu; f_8030B7F0(c); // 800C25B8
  c->r[3]=c->r[31]|c->r[31]; // 800C25BC
  c->lr=0x800C25C4u; f_8030BD1C(c); // 800C25C0
  W32(c->r[30]+0x0000018Cu,c->r[3]); // 800C25C4
  c->r[3]=c->r[31]|c->r[31]; // 800C25C8
  c->r[4]=0u+0x00000000u; // 800C25CC
  c->lr=0x800C25D4u; f_8030BE30(c); // 800C25D0
  W32(c->r[30]+0x000001B0u,c->r[3]); // 800C25D4
  c->r[3]=c->r[31]|c->r[31]; // 800C25D8
  c->r[4]=c->r[30]+0x000001BCu; // 800C25DC
  c->r[5]=0u+0x00000020u; // 800C25E0
  W32(c->r[30]+0x000001B4u,c->r[29]); // 800C25E4
  c->lr=0x800C25ECu; f_8030B7F0(c); // 800C25E8
  c->r[3]=c->r[31]|c->r[31]; // 800C25EC
  c->lr=0x800C25F4u; f_8030BD1C(c); // 800C25F0
  W32(c->r[30]+0x000001B8u,c->r[3]); // 800C25F4
  c->r[3]=c->r[31]|c->r[31]; // 800C25F8
  c->r[4]=0u+0x00000000u; // 800C25FC
  c->lr=0x800C2604u; f_8030BE30(c); // 800C2600
  W32(c->r[30]+0x000001DCu,c->r[3]); // 800C2604
  c->r[3]=c->r[31]|c->r[31]; // 800C2608
  c->r[4]=c->r[30]+0x000001E8u; // 800C260C
  c->r[5]=0u+0x00000020u; // 800C2610
  W32(c->r[30]+0x000001E0u,c->r[29]); // 800C2614
  c->lr=0x800C261Cu; f_8030B7F0(c); // 800C2618
  c->r[3]=c->r[31]|c->r[31]; // 800C261C
  c->lr=0x800C2624u; f_8030BD1C(c); // 800C2620
  W32(c->r[30]+0x000001E4u,c->r[3]); // 800C2624
  c->r[3]=c->r[31]|c->r[31]; // 800C2628
  c->r[4]=0u+0x00000000u; // 800C262C
  c->lr=0x800C2634u; f_8030BE30(c); // 800C2630
  W32(c->r[30]+0x00000208u,c->r[3]); // 800C2634
  c->r[3]=c->r[31]|c->r[31]; // 800C2638
  W32(c->r[30]+0x0000020Cu,c->r[29]); // 800C263C
  c->lr=0x800C2644u; f_8030BD1C(c); // 800C2640
  W32(c->r[30]+0x00000210u,c->r[3]); // 800C2644
  c->r[3]=c->r[31]|c->r[31]; // 800C2648
  c->r[4]=0u+0x00000000u; // 800C264C
  c->lr=0x800C2654u; f_8030BE30(c); // 800C2650
  W32(c->r[30]+0x00000214u,c->r[3]); // 800C2654
  c->r[3]=c->r[31]|c->r[31]; // 800C2658
  W32(c->r[30]+0x00000218u,c->r[29]); // 800C265C
  c->lr=0x800C2664u; f_8030BD1C(c); // 800C2660
  W32(c->r[30]+0x0000021Cu,c->r[3]); // 800C2664
  c->r[3]=c->r[31]|c->r[31]; // 800C2668
  c->r[4]=0u+0x00000000u; // 800C266C
  c->lr=0x800C2674u; f_8030BE30(c); // 800C2670
  W32(c->r[30]+0x00000220u,c->r[3]); // 800C2674
  c->r[3]=c->r[31]|c->r[31]; // 800C2678
  W32(c->r[30]+0x00000224u,c->r[29]); // 800C267C
  c->lr=0x800C2684u; f_8030BD1C(c); // 800C2680
  W32(c->r[30]+0x00000228u,c->r[3]); // 800C2684
  c->r[3]=c->r[31]|c->r[31]; // 800C2688
  c->r[4]=0u+0x00000000u; // 800C268C
  c->lr=0x800C2694u; f_8030BE30(c); // 800C2690
  W32(c->r[30]+0x0000022Cu,c->r[3]); // 800C2694
  c->r[3]=c->r[31]|c->r[31]; // 800C2698
  W32(c->r[30]+0x00000230u,c->r[29]); // 800C269C
  c->lr=0x800C26A4u; f_8030BD1C(c); // 800C26A0
  W32(c->r[30]+0x00000234u,c->r[3]); // 800C26A4
  c->r[3]=c->r[31]|c->r[31]; // 800C26A8
  c->r[4]=0u+0x00000000u; // 800C26AC
  c->lr=0x800C26B4u; f_8030BE30(c); // 800C26B0
  W32(c->r[30]+0x00000238u,c->r[3]); // 800C26B4
  c->r[3]=c->r[31]|c->r[31]; // 800C26B8
  W32(c->r[30]+0x0000023Cu,c->r[29]); // 800C26BC
  c->lr=0x800C26C4u; f_8030BD1C(c); // 800C26C0
  W32(c->r[30]+0x00000240u,c->r[3]); // 800C26C4
  c->r[3]=c->r[31]|c->r[31]; // 800C26C8
  c->r[4]=0u+0x00000000u; // 800C26CC
  c->lr=0x800C26D4u; f_8030BE30(c); // 800C26D0
  W32(c->r[30]+0x00000244u,c->r[3]); // 800C26D4
  c->r[3]=c->r[31]|c->r[31]; // 800C26D8
  W32(c->r[30]+0x00000248u,c->r[29]); // 800C26DC
  c->lr=0x800C26E4u; f_8030BD1C(c); // 800C26E0
  W32(c->r[30]+0x0000024Cu,c->r[3]); // 800C26E4
  c->r[3]=c->r[31]|c->r[31]; // 800C26E8
  c->r[4]=0u+0x00000000u; // 800C26EC
  c->lr=0x800C26F4u; f_8030BE30(c); // 800C26F0
  W32(c->r[30]+0x00000250u,c->r[3]); // 800C26F4
  c->r[3]=c->r[31]|c->r[31]; // 800C26F8
  c->r[4]=c->r[30]+0x0000025Cu; // 800C26FC
  c->r[5]=0u+0x00000020u; // 800C2700
  W32(c->r[30]+0x00000254u,c->r[29]); // 800C2704
  c->lr=0x800C270Cu; f_8030B7F0(c); // 800C2708
  c->r[3]=c->r[31]|c->r[31]; // 800C270C
  c->lr=0x800C2714u; f_8030BD1C(c); // 800C2710
  W32(c->r[30]+0x00000258u,c->r[3]); // 800C2714
  c->r[3]=c->r[31]|c->r[31]; // 800C2718
  c->r[4]=0u+0x00000000u; // 800C271C
  c->lr=0x800C2724u; f_8030BE30(c); // 800C2720
  W32(c->r[30]+0x0000027Cu,c->r[3]); // 800C2724
  c->r[3]=c->r[31]|c->r[31]; // 800C2728
  W32(c->r[30]+0x00000280u,c->r[29]); // 800C272C
  c->lr=0x800C2734u; f_8030BD1C(c); // 800C2730
  W32(c->r[30]+0x00000284u,c->r[3]); // 800C2734
  c->r[3]=c->r[31]|c->r[31]; // 800C2738
  c->r[4]=0u+0x00000000u; // 800C273C
  c->lr=0x800C2744u; f_8030BE30(c); // 800C2740
  W32(c->r[30]+0x000002A8u,c->r[3]); // 800C2744
  c->r[3]=c->r[31]|c->r[31]; // 800C2748
  c->r[4]=c->r[30]+0x000002B4u; // 800C274C
  c->r[5]=0u+0x00000020u; // 800C2750
  W32(c->r[30]+0x000002ACu,c->r[29]); // 800C2754
  c->lr=0x800C275Cu; f_8030B7F0(c); // 800C2758
  c->r[3]=c->r[31]|c->r[31]; // 800C275C
  c->lr=0x800C2764u; f_8030BD1C(c); // 800C2760
  W32(c->r[30]+0x000002B0u,c->r[3]); // 800C2764
  c->r[3]=c->r[31]|c->r[31]; // 800C2768
  c->r[4]=0u+0x00000000u; // 800C276C
  c->lr=0x800C2774u; f_8030BE30(c); // 800C2770
  W32(c->r[30]+0x000002D4u,c->r[3]); // 800C2774
  c->r[3]=c->r[31]|c->r[31]; // 800C2778
  W32(c->r[30]+0x000002D8u,c->r[29]); // 800C277C
  c->lr=0x800C2784u; f_8030BD1C(c); // 800C2780
  W32(c->r[30]+0x000002DCu,c->r[3]); // 800C2784
  c->r[3]=c->r[31]|c->r[31]; // 800C2788
  c->r[4]=0u+0x00000000u; // 800C278C
  c->lr=0x800C2794u; f_8030BE30(c); // 800C2790
  W32(c->r[30]+0x00000300u,c->r[3]); // 800C2794
  c->r[3]=c->r[31]|c->r[31]; // 800C2798
  c->r[4]=c->r[30]+0x0000030Cu; // 800C279C
  c->r[5]=0u+0x00000020u; // 800C27A0
  W32(c->r[30]+0x00000304u,c->r[29]); // 800C27A4
  c->lr=0x800C27ACu; f_8030B7F0(c); // 800C27A8
  c->r[3]=c->r[31]|c->r[31]; // 800C27AC
  c->lr=0x800C27B4u; f_8030BD1C(c); // 800C27B0
  W32(c->r[30]+0x00000308u,c->r[3]); // 800C27B4
  c->r[3]=c->r[31]|c->r[31]; // 800C27B8
  c->r[4]=0u+0x00000000u; // 800C27BC
  c->lr=0x800C27C4u; f_8030BE30(c); // 800C27C0
  W32(c->r[30]+0x0000032Cu,c->r[3]); // 800C27C4
  c->r[3]=c->r[31]|c->r[31]; // 800C27C8
  W32(c->r[30]+0x00000330u,c->r[29]); // 800C27CC
  c->lr=0x800C27D4u; f_8030BD1C(c); // 800C27D0
  W32(c->r[30]+0x00000334u,c->r[3]); // 800C27D4
  c->r[3]=c->r[31]|c->r[31]; // 800C27D8
  c->r[4]=0u+0x00000000u; // 800C27DC
  c->lr=0x800C27E4u; f_8030BE30(c); // 800C27E0
  W32(c->r[30]+0x00000358u,c->r[3]); // 800C27E4
  c->r[3]=c->r[31]|c->r[31]; // 800C27E8
  W32(c->r[30]+0x0000035Cu,c->r[29]); // 800C27EC
  c->lr=0x800C27F4u; f_8030BD1C(c); // 800C27F0
  W32(c->r[30]+0x00000360u,c->r[3]); // 800C27F4
  c->r[3]=c->r[31]|c->r[31]; // 800C27F8
  c->r[4]=0u+0x00000000u; // 800C27FC
  c->lr=0x800C2804u; f_8030BE30(c); // 800C2800
  W32(c->r[30]+0x00000364u,c->r[3]); // 800C2804
  c->r[3]=c->r[31]|c->r[31]; // 800C2808
  W32(c->r[30]+0x00000368u,c->r[29]); // 800C280C
  c->lr=0x800C2814u; f_8030BD1C(c); // 800C2810
  W32(c->r[30]+0x0000036Cu,c->r[3]); // 800C2814
  c->r[3]=c->r[31]|c->r[31]; // 800C2818
  c->r[4]=0u+0x00000000u; // 800C281C
  c->lr=0x800C2824u; f_8030BE30(c); // 800C2820
  W32(c->r[30]+0x00000370u,c->r[3]); // 800C2824
  c->r[3]=c->r[31]|c->r[31]; // 800C2828
  W32(c->r[30]+0x00000374u,c->r[29]); // 800C282C
  c->lr=0x800C2834u; f_8030BD1C(c); // 800C2830
  W32(c->r[30]+0x00000378u,c->r[3]); // 800C2834
  c->r[3]=c->r[31]|c->r[31]; // 800C2838
  c->r[4]=0u+0x00000000u; // 800C283C
  c->lr=0x800C2844u; f_8030BE30(c); // 800C2840
  W32(c->r[30]+0x0000037Cu,c->r[3]); // 800C2844
  c->r[3]=c->r[31]|c->r[31]; // 800C2848
  c->r[4]=c->r[30]+0x00000388u; // 800C284C
  c->r[5]=0u+0x00000020u; // 800C2850
  W32(c->r[30]+0x00000380u,c->r[29]); // 800C2854
  c->lr=0x800C285Cu; f_8030B7F0(c); // 800C2858
  c->r[3]=c->r[31]|c->r[31]; // 800C285C
  c->lr=0x800C2864u; f_8030BD1C(c); // 800C2860
  W32(c->r[30]+0x00000384u,c->r[3]); // 800C2864
  c->r[3]=c->r[31]|c->r[31]; // 800C2868
  c->lr=0x800C2870u; f_8030BD1C(c); // 800C286C
  W32(c->r[30]+0x000003A8u,c->r[3]); // 800C2870
  c->r[27]=0u+0x00000000u; // 800C2874
  c->r[29]=0u+0x00000000u; // 800C2878
  goto L_800C28A8; // 800C287C
L_800C2880:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2880
  c->r[28]=c->r[30]+c->r[29]; // 800C2884
  c->lr=0x800C288Cu; f_8030C0A0(c); // 800C2888
  {uint32_t ea=c->r[28]+0x000003C0u; WF32(ea,c->f[1]);} // 800C288C
  c->r[3]=c->r[31]|c->r[31]; // 800C2890
  c->r[4]=0u+0x00000000u; // 800C2894
  c->lr=0x800C289Cu; f_8030BE30(c); // 800C2898
  W32(c->r[28]+0x000003ACu,c->r[3]); // 800C289C
  c->r[27]=c->r[27]+0x00000001u; // 800C28A0
  c->r[29]=c->r[29]+0x00000004u; // 800C28A4
L_800C28A8:;
  c->r[0]=R32(c->r[30]+0x000003A8u); // 800C28A8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C28AC
  if (crb(c,0)) { IRQCHK(c); goto L_800C2880; } // 800C28B0
  c->r[3]=c->r[31]|c->r[31]; // 800C28B4
  c->r[4]=0u+0x00000000u; // 800C28B8
  c->lr=0x800C28C0u; f_8030BE30(c); // 800C28BC
  W32(c->r[30]+0x000003D4u,c->r[3]); // 800C28C0
  c->r[0]=0u+0x00000000u; // 800C28C4
  c->r[3]=c->r[31]|c->r[31]; // 800C28C8
  c->r[4]=c->r[30]+0x000003E0u; // 800C28CC
  W32(c->r[30]+0x000003D8u,c->r[0]); // 800C28D0
  c->r[5]=0u+0x00000020u; // 800C28D4
  c->lr=0x800C28DCu; f_8030B7F0(c); // 800C28D8
  c->r[3]=c->r[31]|c->r[31]; // 800C28DC
  c->lr=0x800C28E4u; f_8030BD1C(c); // 800C28E0
  W32(c->r[30]+0x000003DCu,c->r[3]); // 800C28E4
  c->r[3]=c->r[31]|c->r[31]; // 800C28E8
  c->lr=0x800C28F0u; f_8030BD1C(c); // 800C28EC
  W32(c->r[30]+0x00000400u,c->r[3]); // 800C28F0
  c->r[27]=0u+0x00000000u; // 800C28F4
  c->r[29]=0u+0x00000000u; // 800C28F8
  goto L_800C2928; // 800C28FC
L_800C2900:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2900
  c->r[28]=c->r[30]+c->r[29]; // 800C2904
  c->lr=0x800C290Cu; f_8030C0A0(c); // 800C2908
  {uint32_t ea=c->r[28]+0x00000418u; WF32(ea,c->f[1]);} // 800C290C
  c->r[3]=c->r[31]|c->r[31]; // 800C2910
  c->r[4]=0u+0x00000000u; // 800C2914
  c->lr=0x800C291Cu; f_8030BE30(c); // 800C2918
  W32(c->r[28]+0x00000404u,c->r[3]); // 800C291C
  c->r[27]=c->r[27]+0x00000001u; // 800C2920
  c->r[29]=c->r[29]+0x00000004u; // 800C2924
L_800C2928:;
  c->r[0]=R32(c->r[30]+0x00000400u); // 800C2928
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C292C
  if (crb(c,0)) { IRQCHK(c); goto L_800C2900; } // 800C2930
  c->r[3]=c->r[31]|c->r[31]; // 800C2934
  c->r[4]=0u+0x00000000u; // 800C2938
  c->lr=0x800C2940u; f_8030BE30(c); // 800C293C
  W32(c->r[30]+0x0000042Cu,c->r[3]); // 800C2940
  c->r[0]=0u+0x00000000u; // 800C2944
  c->r[3]=c->r[31]|c->r[31]; // 800C2948
  c->r[4]=c->r[30]+0x00000438u; // 800C294C
  W32(c->r[30]+0x00000430u,c->r[0]); // 800C2950
  c->r[5]=0u+0x00000020u; // 800C2954
  c->lr=0x800C295Cu; f_8030B7F0(c); // 800C2958
  c->r[3]=c->r[31]|c->r[31]; // 800C295C
  c->lr=0x800C2964u; f_8030BD1C(c); // 800C2960
  W32(c->r[30]+0x00000434u,c->r[3]); // 800C2964
  c->r[3]=c->r[31]|c->r[31]; // 800C2968
  c->lr=0x800C2970u; f_8030BD1C(c); // 800C296C
  W32(c->r[30]+0x00000458u,c->r[3]); // 800C2970
  c->r[27]=0u+0x00000000u; // 800C2974
  c->r[29]=0u+0x00000000u; // 800C2978
  goto L_800C29A8; // 800C297C
L_800C2980:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2980
  c->r[28]=c->r[30]+c->r[29]; // 800C2984
  c->lr=0x800C298Cu; f_8030C0A0(c); // 800C2988
  {uint32_t ea=c->r[28]+0x00000470u; WF32(ea,c->f[1]);} // 800C298C
  c->r[3]=c->r[31]|c->r[31]; // 800C2990
  c->r[4]=0u+0x00000000u; // 800C2994
  c->lr=0x800C299Cu; f_8030BE30(c); // 800C2998
  W32(c->r[28]+0x0000045Cu,c->r[3]); // 800C299C
  c->r[27]=c->r[27]+0x00000001u; // 800C29A0
  c->r[29]=c->r[29]+0x00000004u; // 800C29A4
L_800C29A8:;
  c->r[0]=R32(c->r[30]+0x00000458u); // 800C29A8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C29AC
  if (crb(c,0)) { IRQCHK(c); goto L_800C2980; } // 800C29B0
  c->r[3]=c->r[31]|c->r[31]; // 800C29B4
  c->r[4]=0u+0x00000000u; // 800C29B8
  c->lr=0x800C29C0u; f_8030BE30(c); // 800C29BC
  W32(c->r[30]+0x00000484u,c->r[3]); // 800C29C0
  c->r[0]=0u+0x00000000u; // 800C29C4
  c->r[3]=c->r[31]|c->r[31]; // 800C29C8
  W32(c->r[30]+0x00000488u,c->r[0]); // 800C29CC
  c->lr=0x800C29D4u; f_8030BD1C(c); // 800C29D0
  W32(c->r[30]+0x0000048Cu,c->r[3]); // 800C29D4
  c->r[3]=c->r[31]|c->r[31]; // 800C29D8
  c->lr=0x800C29E0u; f_8030BD1C(c); // 800C29DC
  W32(c->r[30]+0x00000490u,c->r[3]); // 800C29E0
  c->r[27]=0u+0x00000000u; // 800C29E4
  c->r[29]=0u+0x00000000u; // 800C29E8
  goto L_800C2A18; // 800C29EC
L_800C29F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C29F0
  c->r[28]=c->r[30]+c->r[29]; // 800C29F4
  c->lr=0x800C29FCu; f_8030C0A0(c); // 800C29F8
  {uint32_t ea=c->r[28]+0x000004A8u; WF32(ea,c->f[1]);} // 800C29FC
  c->r[3]=c->r[31]|c->r[31]; // 800C2A00
  c->r[4]=0u+0x00000000u; // 800C2A04
  c->lr=0x800C2A0Cu; f_8030BE30(c); // 800C2A08
  W32(c->r[28]+0x00000494u,c->r[3]); // 800C2A0C
  c->r[27]=c->r[27]+0x00000001u; // 800C2A10
  c->r[29]=c->r[29]+0x00000004u; // 800C2A14
L_800C2A18:;
  c->r[0]=R32(c->r[30]+0x00000490u); // 800C2A18
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C2A1C
  if (crb(c,0)) { IRQCHK(c); goto L_800C29F0; } // 800C2A20
  c->r[3]=c->r[31]|c->r[31]; // 800C2A24
  c->r[4]=0u+0x00000000u; // 800C2A28
  c->lr=0x800C2A30u; f_8030BE30(c); // 800C2A2C
  W32(c->r[30]+0x000004BCu,c->r[3]); // 800C2A30
  c->r[0]=0u+0x00000000u; // 800C2A34
  c->r[3]=c->r[31]|c->r[31]; // 800C2A38
  W32(c->r[30]+0x000004C0u,c->r[0]); // 800C2A3C
  c->lr=0x800C2A44u; f_8030BD1C(c); // 800C2A40
  W32(c->r[30]+0x000004C4u,c->r[3]); // 800C2A44
  c->r[3]=c->r[31]|c->r[31]; // 800C2A48
  c->lr=0x800C2A50u; f_8030BD1C(c); // 800C2A4C
  W32(c->r[30]+0x000004C8u,c->r[3]); // 800C2A50
  c->r[27]=0u+0x00000000u; // 800C2A54
  c->r[29]=0u+0x00000000u; // 800C2A58
  goto L_800C2A88; // 800C2A5C
L_800C2A60:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2A60
  c->r[28]=c->r[30]+c->r[29]; // 800C2A64
  c->lr=0x800C2A6Cu; f_8030C0A0(c); // 800C2A68
  {uint32_t ea=c->r[28]+0x000004E0u; WF32(ea,c->f[1]);} // 800C2A6C
  c->r[3]=c->r[31]|c->r[31]; // 800C2A70
  c->r[4]=0u+0x00000000u; // 800C2A74
  c->lr=0x800C2A7Cu; f_8030BE30(c); // 800C2A78
  W32(c->r[28]+0x000004CCu,c->r[3]); // 800C2A7C
  c->r[27]=c->r[27]+0x00000001u; // 800C2A80
  c->r[29]=c->r[29]+0x00000004u; // 800C2A84
L_800C2A88:;
  c->r[0]=R32(c->r[30]+0x000004C8u); // 800C2A88
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C2A8C
  if (crb(c,0)) { IRQCHK(c); goto L_800C2A60; } // 800C2A90
  c->r[3]=c->r[31]|c->r[31]; // 800C2A94
  c->r[4]=0u+0x00000000u; // 800C2A98
  c->lr=0x800C2AA0u; f_8030BE30(c); // 800C2A9C
  W32(c->r[30]+0x000004F4u,c->r[3]); // 800C2AA0
  c->r[0]=0u+0x00000000u; // 800C2AA4
  c->r[3]=c->r[31]|c->r[31]; // 800C2AA8
  W32(c->r[30]+0x000004F8u,c->r[0]); // 800C2AAC
  c->lr=0x800C2AB4u; f_8030BD1C(c); // 800C2AB0
  W32(c->r[30]+0x000004FCu,c->r[3]); // 800C2AB4
  c->r[3]=c->r[31]|c->r[31]; // 800C2AB8
  c->lr=0x800C2AC0u; f_8030BD1C(c); // 800C2ABC
  W32(c->r[30]+0x00000500u,c->r[3]); // 800C2AC0
  c->r[27]=0u+0x00000000u; // 800C2AC4
  c->r[29]=0u+0x00000000u; // 800C2AC8
  goto L_800C2AF8; // 800C2ACC
L_800C2AD0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C2AD0
  c->r[28]=c->r[30]+c->r[29]; // 800C2AD4
  c->lr=0x800C2ADCu; f_8030C0A0(c); // 800C2AD8
  {uint32_t ea=c->r[28]+0x00000518u; WF32(ea,c->f[1]);} // 800C2ADC
  c->r[3]=c->r[31]|c->r[31]; // 800C2AE0
  c->r[4]=0u+0x00000000u; // 800C2AE4
  c->lr=0x800C2AECu; f_8030BE30(c); // 800C2AE8
  W32(c->r[28]+0x00000504u,c->r[3]); // 800C2AEC
  c->r[27]=c->r[27]+0x00000001u; // 800C2AF0
  c->r[29]=c->r[29]+0x00000004u; // 800C2AF4
L_800C2AF8:;
  c->r[0]=R32(c->r[30]+0x00000500u); // 800C2AF8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C2AFC
  if (crb(c,0)) { IRQCHK(c); goto L_800C2AD0; } // 800C2B00
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2B04
  c->r[3]=0u+0x00000000u; // 800C2B08
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C2B0C
  c->lr=c->r[0]; // 800C2B10
  c->r[1]=c->r[1]+0x00000020u; // 800C2B14
  return; // 800C2B18
}

// fn_800C2B1C
void f_800C2B1C(Ctx* __restrict c) {
  trace_call(0x800C2B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2B1C
  c->r[0]=c->lr; // 800C2B20
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C2B24
  c->r[11]=c->r[1]+0x00000030u; // 800C2B28
  c->lr=0x800C2B30u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2B2C
  c->r[7]=R32(c->r[3]+0x0000052Cu); // 800C2B30
  c->r[28]=c->r[3]|c->r[3]; // 800C2B34
  c->r[29]=c->r[4]|c->r[4]; // 800C2B38
  c->r[30]=c->r[5]|c->r[5]; // 800C2B3C
  cmps(c,0,(int32_t)c->r[7],0); // 800C2B40
  c->r[31]=c->r[6]|c->r[6]; // 800C2B44
  if (!crb(c,0)) { goto L_800C2B58; } // 800C2B48
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800C2B4C
  W32(c->r[3]+0x0000052Cu,c->r[0]); // 800C2B50
  goto L_800C2B68; // 800C2B54
L_800C2B58:;
  c->r[0]=c->r[7]+0x00000001u; // 800C2B58
  W32(c->r[3]+0x0000052Cu,c->r[0]); // 800C2B5C
  cmps(c,0,(int32_t)c->r[0],1); // 800C2B60
  if (crb(c,1)) { goto L_800C44CC; } // 800C2B64
L_800C2B68:;
  c->r[3]=c->r[28]|c->r[28]; // 800C2B68
  c->r[4]=c->r[29]|c->r[29]; // 800C2B6C
  c->r[5]=c->r[30]|c->r[30]; // 800C2B70
  c->r[6]=c->r[31]|c->r[31]; // 800C2B74
  c->lr=0x800C2B7Cu; f_802B11C0(c); // 800C2B78
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 800C2B7C
  cmps(c,0,(int32_t)c->r[4],0); // 800C2B80
  if (crb(c,2)) { goto L_800C2C28; } // 800C2B84
  c->r[0]=0u+0x00000001u; // 800C2B88
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2B8C
  c->r[6]=c->r[29]|c->r[29]; // 800C2B90
  c->r[7]=c->r[30]|c->r[30]; // 800C2B94
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C2B98
  c->r[8]=c->r[31]|c->r[31]; // 800C2B9C
  c->r[9]=R32(c->r[28]+0x00000024u); // 800C2BA0
  c->r[5]=0u+0x00000000u; // 800C2BA4
  c->r[10]=0u+0x00000001u; // 800C2BA8
  c->lr=0x800C2BB0u; f_80281A84(c); // 800C2BAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C2BB0
  W32(c->r[28]+0x00000020u,c->r[3]); // 800C2BB4
  if (crb(c,2)) { goto L_800C2BC4; } // 800C2BB8
  c->lr=0x800C2BC0u; f_80295B6C(c); // 800C2BBC
  goto L_800C2C28; // 800C2BC0
L_800C2BC4:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 800C2BC4
  c->r[4]=c->r[31]|c->r[31]; // 800C2BC8
  c->r[5]=c->r[30]|c->r[30]; // 800C2BCC
  c->lr=0x800C2BD4u; f_802C0F98(c); // 800C2BD0
  c->r[27]=c->r[3]|c->r[3]; // 800C2BD4
  c->r[3]=0u+0x00000044u; // 800C2BD8
  c->r[4]=c->r[13]+0xFFFFAEB8u; // 800C2BDC
  c->r[5]=0u+0x00000000u; // 800C2BE0
  c->r[6]=0u+0x00001001u; // 800C2BE4
  c->lr=0x800C2BECu; f_80244D20(c); // 800C2BE8
  cmps(c,0,(int32_t)c->r[3],0); // 800C2BEC
  if (crb(c,2)) { goto L_800C2C04; } // 800C2BF0
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 800C2BF4
  c->r[4]=c->r[27]|c->r[27]; // 800C2BF8
  c->r[6]=0u+0x00000000u; // 800C2BFC
  c->lr=0x800C2C04u; f_8029316C(c); // 800C2C00
L_800C2C04:;
  W32(c->r[28]+0x00000020u,c->r[3]); // 800C2C04
  c->r[4]=c->r[29]|c->r[29]; // 800C2C08
  c->r[7]=R32(c->r[28]+0x00000024u); // 800C2C0C
  c->r[5]=c->r[30]|c->r[30]; // 800C2C10
  c->r[6]=c->r[31]|c->r[31]; // 800C2C14
  c->r[8]=0u+0x00000001u; // 800C2C18
  c->r[9]=0u+0x00000000u; // 800C2C1C
  c->lr=0x800C2C24u; f_8027FFF4(c); // 800C2C20
  W32(c->r[28]+0x00000020u,c->r[3]); // 800C2C24
L_800C2C28:;
  c->r[4]=R32(c->r[28]+0x00000028u); // 800C2C28
  cmps(c,0,(int32_t)c->r[4],0); // 800C2C2C
  if (crb(c,2)) { goto L_800C2CD4; } // 800C2C30
  c->r[0]=0u+0x00000001u; // 800C2C34
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2C38
  c->r[6]=c->r[29]|c->r[29]; // 800C2C3C
  c->r[7]=c->r[30]|c->r[30]; // 800C2C40
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C2C44
  c->r[8]=c->r[31]|c->r[31]; // 800C2C48
  c->r[9]=R32(c->r[28]+0x00000030u); // 800C2C4C
  c->r[5]=0u+0x00000000u; // 800C2C50
  c->r[10]=0u+0x00000001u; // 800C2C54
  c->lr=0x800C2C5Cu; f_80281A84(c); // 800C2C58
  cmps(c,0,(int32_t)c->r[3],0); // 800C2C5C
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 800C2C60
  if (crb(c,2)) { goto L_800C2C70; } // 800C2C64
  c->lr=0x800C2C6Cu; f_80295B6C(c); // 800C2C68
  goto L_800C2CD4; // 800C2C6C
L_800C2C70:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 800C2C70
  c->r[4]=c->r[31]|c->r[31]; // 800C2C74
  c->r[5]=c->r[30]|c->r[30]; // 800C2C78
  c->lr=0x800C2C80u; f_802C0F98(c); // 800C2C7C
  c->r[27]=c->r[3]|c->r[3]; // 800C2C80
  c->r[3]=0u+0x00000044u; // 800C2C84
  c->r[4]=c->r[13]+0xFFFFAEBDu; // 800C2C88
  c->r[5]=0u+0x00000000u; // 800C2C8C
  c->r[6]=0u+0x00001001u; // 800C2C90
  c->lr=0x800C2C98u; f_80244D20(c); // 800C2C94
  cmps(c,0,(int32_t)c->r[3],0); // 800C2C98
  if (crb(c,2)) { goto L_800C2CB0; } // 800C2C9C
  c->r[5]=R32(c->r[28]+0x00000028u); // 800C2CA0
  c->r[4]=c->r[27]|c->r[27]; // 800C2CA4
  c->r[6]=0u+0x00000000u; // 800C2CA8
  c->lr=0x800C2CB0u; f_8029316C(c); // 800C2CAC
L_800C2CB0:;
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 800C2CB0
  c->r[4]=c->r[29]|c->r[29]; // 800C2CB4
  c->r[7]=R32(c->r[28]+0x00000030u); // 800C2CB8
  c->r[5]=c->r[30]|c->r[30]; // 800C2CBC
  c->r[6]=c->r[31]|c->r[31]; // 800C2CC0
  c->r[8]=0u+0x00000001u; // 800C2CC4
  c->r[9]=0u+0x00000000u; // 800C2CC8
  c->lr=0x800C2CD0u; f_8027FFF4(c); // 800C2CCC
  W32(c->r[28]+0x0000002Cu,c->r[3]); // 800C2CD0
L_800C2CD4:;
  c->r[4]=R32(c->r[28]+0x00000054u); // 800C2CD4
  cmps(c,0,(int32_t)c->r[4],0); // 800C2CD8
  if (crb(c,2)) { goto L_800C2E10; } // 800C2CDC
  c->r[0]=0u+0x00000001u; // 800C2CE0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2CE4
  c->r[6]=c->r[29]|c->r[29]; // 800C2CE8
  c->r[7]=c->r[30]|c->r[30]; // 800C2CEC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C2CF0
  c->r[8]=c->r[31]|c->r[31]; // 800C2CF4
  c->r[9]=R32(c->r[28]+0x0000005Cu); // 800C2CF8
  c->r[5]=0u+0x00000000u; // 800C2CFC
  c->r[10]=0u+0x00000001u; // 800C2D00
  c->lr=0x800C2D08u; f_80281A84(c); // 800C2D04
  cmps(c,0,(int32_t)c->r[3],0); // 800C2D08
  W32(c->r[28]+0x00000058u,c->r[3]); // 800C2D0C
  if (crb(c,2)) { goto L_800C2D1C; } // 800C2D10
  c->lr=0x800C2D18u; f_80295B6C(c); // 800C2D14
  goto L_800C2D80; // 800C2D18
L_800C2D1C:;
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 800C2D1C
  c->r[4]=c->r[31]|c->r[31]; // 800C2D20
  c->r[5]=c->r[30]|c->r[30]; // 800C2D24
  c->lr=0x800C2D2Cu; f_802C0F98(c); // 800C2D28
  c->r[27]=c->r[3]|c->r[3]; // 800C2D2C
  c->r[3]=0u+0x00000044u; // 800C2D30
  c->r[4]=c->r[13]+0xFFFFAEC2u; // 800C2D34
  c->r[5]=0u+0x00000000u; // 800C2D38
  c->r[6]=0u+0x00001001u; // 800C2D3C
  c->lr=0x800C2D44u; f_80244D20(c); // 800C2D40
  cmps(c,0,(int32_t)c->r[3],0); // 800C2D44
  if (crb(c,2)) { goto L_800C2D5C; } // 800C2D48
  c->r[5]=R32(c->r[28]+0x00000054u); // 800C2D4C
  c->r[4]=c->r[27]|c->r[27]; // 800C2D50
  c->r[6]=0u+0x00000000u; // 800C2D54
  c->lr=0x800C2D5Cu; f_8029316C(c); // 800C2D58
L_800C2D5C:;
  W32(c->r[28]+0x00000058u,c->r[3]); // 800C2D5C
  c->r[4]=c->r[29]|c->r[29]; // 800C2D60
  c->r[7]=R32(c->r[28]+0x0000005Cu); // 800C2D64
  c->r[5]=c->r[30]|c->r[30]; // 800C2D68
  c->r[6]=c->r[31]|c->r[31]; // 800C2D6C
  c->r[8]=0u+0x00000001u; // 800C2D70
  c->r[9]=0u+0x00000000u; // 800C2D74
  c->lr=0x800C2D7Cu; f_8027FFF4(c); // 800C2D78
  W32(c->r[28]+0x00000058u,c->r[3]); // 800C2D7C
L_800C2D80:;
  c->r[0]=0u+0x00000001u; // 800C2D80
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2D84
  c->r[6]=c->r[29]|c->r[29]; // 800C2D88
  c->r[7]=c->r[30]|c->r[30]; // 800C2D8C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C2D90
  c->r[8]=c->r[31]|c->r[31]; // 800C2D94
  c->r[4]=R32(c->r[28]+0x00000060u); // 800C2D98
  c->r[5]=0u+0x00000010u; // 800C2D9C
  c->r[9]=R32(c->r[28]+0x00000068u); // 800C2DA0
  c->r[10]=0u+0x00000001u; // 800C2DA4
  c->lr=0x800C2DACu; f_80281A84(c); // 800C2DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800C2DAC
  W32(c->r[28]+0x00000064u,c->r[3]); // 800C2DB0
  if (crb(c,2)) { goto L_800C2DC0; } // 800C2DB4
  c->lr=0x800C2DBCu; f_80295B6C(c); // 800C2DB8
  goto L_800C2E10; // 800C2DBC
L_800C2DC0:;
  c->r[3]=0u+0x00000044u; // 800C2DC0
  c->r[4]=c->r[13]+0xFFFFAEC7u; // 800C2DC4
  c->r[5]=0u+0x00000000u; // 800C2DC8
  c->r[6]=0u+0x00001001u; // 800C2DCC
  c->lr=0x800C2DD4u; f_80244D20(c); // 800C2DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800C2DD4
  if (crb(c,2)) { goto L_800C2DEC; } // 800C2DD8
  c->r[5]=R32(c->r[28]+0x00000060u); // 800C2DDC
  c->r[4]=0u+0x00000000u; // 800C2DE0
  c->r[6]=0u+0x00000010u; // 800C2DE4
  c->lr=0x800C2DECu; f_8029316C(c); // 800C2DE8
L_800C2DEC:;
  W32(c->r[28]+0x00000064u,c->r[3]); // 800C2DEC
  c->r[4]=c->r[29]|c->r[29]; // 800C2DF0
  c->r[7]=R32(c->r[28]+0x00000068u); // 800C2DF4
  c->r[5]=c->r[30]|c->r[30]; // 800C2DF8
  c->r[6]=c->r[31]|c->r[31]; // 800C2DFC
  c->r[8]=0u+0x00000001u; // 800C2E00
  c->r[9]=0u+0x00000000u; // 800C2E04
  c->lr=0x800C2E0Cu; f_8027FFF4(c); // 800C2E08
  W32(c->r[28]+0x00000064u,c->r[3]); // 800C2E0C
L_800C2E10:;
  c->r[4]=R32(c->r[28]+0x0000006Cu); // 800C2E10
  cmps(c,0,(int32_t)c->r[4],0); // 800C2E14
  if (crb(c,2)) { goto L_800C2F4C; } // 800C2E18
  c->r[0]=0u+0x00000001u; // 800C2E1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2E20
  c->r[6]=c->r[29]|c->r[29]; // 800C2E24
  c->r[7]=c->r[30]|c->r[30]; // 800C2E28
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C2E2C
  c->r[8]=c->r[31]|c->r[31]; // 800C2E30
  c->r[9]=R32(c->r[28]+0x00000074u); // 800C2E34
  c->r[5]=0u+0x00000000u; // 800C2E38
  c->r[10]=0u+0x00000001u; // 800C2E3C
  c->lr=0x800C2E44u; f_80281A84(c); // 800C2E40
  cmps(c,0,(int32_t)c->r[3],0); // 800C2E44
  W32(c->r[28]+0x00000070u,c->r[3]); // 800C2E48
  if (crb(c,2)) { goto L_800C2E58; } // 800C2E4C
  c->lr=0x800C2E54u; f_80295B6C(c); // 800C2E50
  goto L_800C2EBC; // 800C2E54
L_800C2E58:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 800C2E58
  c->r[4]=c->r[31]|c->r[31]; // 800C2E5C
  c->r[5]=c->r[30]|c->r[30]; // 800C2E60
  c->lr=0x800C2E68u; f_802C0F98(c); // 800C2E64
  c->r[27]=c->r[3]|c->r[3]; // 800C2E68
  c->r[3]=0u+0x00000044u; // 800C2E6C
  c->r[4]=c->r[13]+0xFFFFAECCu; // 800C2E70
  c->r[5]=0u+0x00000000u; // 800C2E74
  c->r[6]=0u+0x00001001u; // 800C2E78
  c->lr=0x800C2E80u; f_80244D20(c); // 800C2E7C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2E80
  if (crb(c,2)) { goto L_800C2E98; } // 800C2E84
  c->r[5]=R32(c->r[28]+0x0000006Cu); // 800C2E88
  c->r[4]=c->r[27]|c->r[27]; // 800C2E8C
  c->r[6]=0u+0x00000000u; // 800C2E90
  c->lr=0x800C2E98u; f_8029316C(c); // 800C2E94
L_800C2E98:;
  W32(c->r[28]+0x00000070u,c->r[3]); // 800C2E98
  c->r[4]=c->r[29]|c->r[29]; // 800C2E9C
  c->r[7]=R32(c->r[28]+0x00000074u); // 800C2EA0
  c->r[5]=c->r[30]|c->r[30]; // 800C2EA4
  c->r[6]=c->r[31]|c->r[31]; // 800C2EA8
  c->r[8]=0u+0x00000001u; // 800C2EAC
  c->r[9]=0u+0x00000000u; // 800C2EB0
  c->lr=0x800C2EB8u; f_8027FFF4(c); // 800C2EB4
  W32(c->r[28]+0x00000070u,c->r[3]); // 800C2EB8
L_800C2EBC:;
  c->r[0]=0u+0x00000001u; // 800C2EBC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2EC0
  c->r[6]=c->r[29]|c->r[29]; // 800C2EC4
  c->r[7]=c->r[30]|c->r[30]; // 800C2EC8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C2ECC
  c->r[8]=c->r[31]|c->r[31]; // 800C2ED0
  c->r[4]=R32(c->r[28]+0x00000098u); // 800C2ED4
  c->r[5]=0u+0x00000010u; // 800C2ED8
  c->r[9]=R32(c->r[28]+0x000000A0u); // 800C2EDC
  c->r[10]=0u+0x00000001u; // 800C2EE0
  c->lr=0x800C2EE8u; f_80281A84(c); // 800C2EE4
  cmps(c,0,(int32_t)c->r[3],0); // 800C2EE8
  W32(c->r[28]+0x0000009Cu,c->r[3]); // 800C2EEC
  if (crb(c,2)) { goto L_800C2EFC; } // 800C2EF0
  c->lr=0x800C2EF8u; f_80295B6C(c); // 800C2EF4
  goto L_800C2F4C; // 800C2EF8
L_800C2EFC:;
  c->r[3]=0u+0x00000044u; // 800C2EFC
  c->r[4]=c->r[13]+0xFFFFAED1u; // 800C2F00
  c->r[5]=0u+0x00000000u; // 800C2F04
  c->r[6]=0u+0x00001001u; // 800C2F08
  c->lr=0x800C2F10u; f_80244D20(c); // 800C2F0C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2F10
  if (crb(c,2)) { goto L_800C2F28; } // 800C2F14
  c->r[5]=R32(c->r[28]+0x00000098u); // 800C2F18
  c->r[4]=0u+0x00000000u; // 800C2F1C
  c->r[6]=0u+0x00000010u; // 800C2F20
  c->lr=0x800C2F28u; f_8029316C(c); // 800C2F24
L_800C2F28:;
  W32(c->r[28]+0x0000009Cu,c->r[3]); // 800C2F28
  c->r[4]=c->r[29]|c->r[29]; // 800C2F2C
  c->r[7]=R32(c->r[28]+0x000000A0u); // 800C2F30
  c->r[5]=c->r[30]|c->r[30]; // 800C2F34
  c->r[6]=c->r[31]|c->r[31]; // 800C2F38
  c->r[8]=0u+0x00000001u; // 800C2F3C
  c->r[9]=0u+0x00000000u; // 800C2F40
  c->lr=0x800C2F48u; f_8027FFF4(c); // 800C2F44
  W32(c->r[28]+0x0000009Cu,c->r[3]); // 800C2F48
L_800C2F4C:;
  c->r[4]=R32(c->r[28]+0x000000C4u); // 800C2F4C
  cmps(c,0,(int32_t)c->r[4],0); // 800C2F50
  if (crb(c,2)) { goto L_800C2FF8; } // 800C2F54
  c->r[0]=0u+0x00000001u; // 800C2F58
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2F5C
  c->r[6]=c->r[29]|c->r[29]; // 800C2F60
  c->r[7]=c->r[30]|c->r[30]; // 800C2F64
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C2F68
  c->r[8]=c->r[31]|c->r[31]; // 800C2F6C
  c->r[9]=R32(c->r[28]+0x000000CCu); // 800C2F70
  c->r[5]=0u+0x00000001u; // 800C2F74
  c->r[10]=0u+0x00000001u; // 800C2F78
  c->lr=0x800C2F80u; f_80281A84(c); // 800C2F7C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2F80
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800C2F84
  if (crb(c,2)) { goto L_800C2F94; } // 800C2F88
  c->lr=0x800C2F90u; f_80295B6C(c); // 800C2F8C
  goto L_800C2FF8; // 800C2F90
L_800C2F94:;
  c->r[3]=R32(c->r[28]+0x000000CCu); // 800C2F94
  c->r[4]=c->r[31]|c->r[31]; // 800C2F98
  c->r[5]=c->r[30]|c->r[30]; // 800C2F9C
  c->lr=0x800C2FA4u; f_802C0F98(c); // 800C2FA0
  c->r[27]=c->r[3]|c->r[3]; // 800C2FA4
  c->r[3]=0u+0x00000044u; // 800C2FA8
  c->r[4]=c->r[13]+0xFFFFAED6u; // 800C2FAC
  c->r[5]=0u+0x00000000u; // 800C2FB0
  c->r[6]=0u+0x00001001u; // 800C2FB4
  c->lr=0x800C2FBCu; f_80244D20(c); // 800C2FB8
  cmps(c,0,(int32_t)c->r[3],0); // 800C2FBC
  if (crb(c,2)) { goto L_800C2FD4; } // 800C2FC0
  c->r[5]=R32(c->r[28]+0x000000C4u); // 800C2FC4
  c->r[4]=c->r[27]|c->r[27]; // 800C2FC8
  c->r[6]=0u+0x00000001u; // 800C2FCC
  c->lr=0x800C2FD4u; f_8029316C(c); // 800C2FD0
L_800C2FD4:;
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800C2FD4
  c->r[4]=c->r[29]|c->r[29]; // 800C2FD8
  c->r[7]=R32(c->r[28]+0x000000CCu); // 800C2FDC
  c->r[5]=c->r[30]|c->r[30]; // 800C2FE0
  c->r[6]=c->r[31]|c->r[31]; // 800C2FE4
  c->r[8]=0u+0x00000001u; // 800C2FE8
  c->r[9]=0u+0x00000000u; // 800C2FEC
  c->lr=0x800C2FF4u; f_8027FFF4(c); // 800C2FF0
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800C2FF4
L_800C2FF8:;
  c->r[4]=R32(c->r[28]+0x000000D0u); // 800C2FF8
  cmps(c,0,(int32_t)c->r[4],0); // 800C2FFC
  if (crb(c,2)) { goto L_800C30E4; } // 800C3000
  c->r[0]=0u+0x00000000u; // 800C3004
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3008
  c->r[6]=c->r[29]|c->r[29]; // 800C300C
  c->r[7]=c->r[30]|c->r[30]; // 800C3010
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3014
  c->r[8]=c->r[31]|c->r[31]; // 800C3018
  c->r[9]=R32(c->r[28]+0x000000D8u); // 800C301C
  c->r[5]=0u+0x00000001u; // 800C3020
  c->r[10]=0u+0x00000001u; // 800C3024
  c->lr=0x800C302Cu; f_80281A84(c); // 800C3028
  cmps(c,0,(int32_t)c->r[3],0); // 800C302C
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800C3030
  if (crb(c,2)) { goto L_800C3040; } // 800C3034
  c->lr=0x800C303Cu; f_80295B6C(c); // 800C3038
  goto L_800C30E4; // 800C303C
L_800C3040:;
  c->r[3]=R32(c->r[28]+0x000000D8u); // 800C3040
  c->r[4]=c->r[31]|c->r[31]; // 800C3044
  c->r[5]=c->r[30]|c->r[30]; // 800C3048
  c->lr=0x800C3050u; f_802C0F98(c); // 800C304C
  c->r[27]=c->r[3]|c->r[3]; // 800C3050
  c->r[3]=0u+0x000000DCu; // 800C3054
  c->r[4]=c->r[13]+0xFFFFAEDBu; // 800C3058
  c->r[5]=0u+0x00000000u; // 800C305C
  c->r[6]=0u+0x00001001u; // 800C3060
  c->lr=0x800C3068u; f_80244D20(c); // 800C3064
  cmps(c,0,(int32_t)c->r[3],0); // 800C3068
  if (crb(c,2)) { goto L_800C3088; } // 800C306C
  c->r[7]=0u+0x28080000u; // 800C3070
  c->r[5]=R32(c->r[28]+0x000000D0u); // 800C3074
  c->r[4]=c->r[27]|c->r[27]; // 800C3078
  c->r[6]=0u+0x00000000u; // 800C307C
  c->r[7]=c->r[7]+0x00000080u; // 800C3080
  c->lr=0x800C3088u; f_80283710(c); // 800C3084
L_800C3088:;
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800C3088
  c->r[26]=0u+0x00000000u; // 800C308C
  c->r[27]=0u+0x00000000u; // 800C3090
  goto L_800C30B4; // 800C3094
L_800C3098:;
  c->r[5]=c->r[28]+c->r[27]; // 800C3098
  c->r[3]=R32(c->r[28]+0x000000D4u); // 800C309C
  c->r[4]=R32(c->r[5]+0x000000E0u); // 800C30A0
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C30A4
  c->lr=0x800C30ACu; f_802840CC(c); // 800C30A8
  c->r[26]=c->r[26]+0x00000001u; // 800C30AC
  c->r[27]=c->r[27]+0x00000004u; // 800C30B0
L_800C30B4:;
  c->r[0]=R32(c->r[28]+0x000000DCu); // 800C30B4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C30B8
  if (crb(c,0)) { IRQCHK(c); goto L_800C3098; } // 800C30BC
  c->r[3]=R32(c->r[28]+0x000000D4u); // 800C30C0
  c->r[4]=c->r[29]|c->r[29]; // 800C30C4
  c->r[7]=R32(c->r[28]+0x000000D8u); // 800C30C8
  c->r[5]=c->r[30]|c->r[30]; // 800C30CC
  c->r[6]=c->r[31]|c->r[31]; // 800C30D0
  c->r[8]=0u+0x00000001u; // 800C30D4
  c->r[9]=0u+0x00000000u; // 800C30D8
  c->lr=0x800C30E0u; f_8027FFF4(c); // 800C30DC
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800C30E0
L_800C30E4:;
  c->r[4]=R32(c->r[28]+0x00000108u); // 800C30E4
  cmps(c,0,(int32_t)c->r[4],0); // 800C30E8
  if (crb(c,2)) { goto L_800C31D0; } // 800C30EC
  c->r[0]=0u+0x00000000u; // 800C30F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C30F4
  c->r[6]=c->r[29]|c->r[29]; // 800C30F8
  c->r[7]=c->r[30]|c->r[30]; // 800C30FC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3100
  c->r[8]=c->r[31]|c->r[31]; // 800C3104
  c->r[9]=R32(c->r[28]+0x00000110u); // 800C3108
  c->r[5]=0u+0x00000001u; // 800C310C
  c->r[10]=0u+0x00000001u; // 800C3110
  c->lr=0x800C3118u; f_80281A84(c); // 800C3114
  cmps(c,0,(int32_t)c->r[3],0); // 800C3118
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 800C311C
  if (crb(c,2)) { goto L_800C312C; } // 800C3120
  c->lr=0x800C3128u; f_80295B6C(c); // 800C3124
  goto L_800C31D0; // 800C3128
L_800C312C:;
  c->r[3]=R32(c->r[28]+0x00000110u); // 800C312C
  c->r[4]=c->r[31]|c->r[31]; // 800C3130
  c->r[5]=c->r[30]|c->r[30]; // 800C3134
  c->lr=0x800C313Cu; f_802C0F98(c); // 800C3138
  c->r[26]=c->r[3]|c->r[3]; // 800C313C
  c->r[3]=0u+0x000000DCu; // 800C3140
  c->r[4]=c->r[13]+0xFFFFAEE0u; // 800C3144
  c->r[5]=0u+0x00000000u; // 800C3148
  c->r[6]=0u+0x00001001u; // 800C314C
  c->lr=0x800C3154u; f_80244D20(c); // 800C3150
  cmps(c,0,(int32_t)c->r[3],0); // 800C3154
  if (crb(c,2)) { goto L_800C3174; } // 800C3158
  c->r[7]=0u+0x28080000u; // 800C315C
  c->r[5]=R32(c->r[28]+0x00000108u); // 800C3160
  c->r[4]=c->r[26]|c->r[26]; // 800C3164
  c->r[6]=0u+0x00000000u; // 800C3168
  c->r[7]=c->r[7]+0x00000080u; // 800C316C
  c->lr=0x800C3174u; f_80283710(c); // 800C3170
L_800C3174:;
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 800C3174
  c->r[26]=0u+0x00000000u; // 800C3178
  c->r[27]=0u+0x00000000u; // 800C317C
  goto L_800C31A0; // 800C3180
L_800C3184:;
  c->r[5]=c->r[28]+c->r[27]; // 800C3184
  c->r[3]=R32(c->r[28]+0x0000010Cu); // 800C3188
  c->r[4]=R32(c->r[5]+0x00000138u); // 800C318C
  {uint32_t ea=c->r[5]+0x0000014Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3190
  c->lr=0x800C3198u; f_802840CC(c); // 800C3194
  c->r[26]=c->r[26]+0x00000001u; // 800C3198
  c->r[27]=c->r[27]+0x00000004u; // 800C319C
L_800C31A0:;
  c->r[0]=R32(c->r[28]+0x00000134u); // 800C31A0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C31A4
  if (crb(c,0)) { IRQCHK(c); goto L_800C3184; } // 800C31A8
  c->r[3]=R32(c->r[28]+0x0000010Cu); // 800C31AC
  c->r[4]=c->r[29]|c->r[29]; // 800C31B0
  c->r[7]=R32(c->r[28]+0x00000110u); // 800C31B4
  c->r[5]=c->r[30]|c->r[30]; // 800C31B8
  c->r[6]=c->r[31]|c->r[31]; // 800C31BC
  c->r[8]=0u+0x00000001u; // 800C31C0
  c->r[9]=0u+0x00000000u; // 800C31C4
  c->lr=0x800C31CCu; f_8027FFF4(c); // 800C31C8
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 800C31CC
L_800C31D0:;
  c->r[4]=R32(c->r[28]+0x00000160u); // 800C31D0
  cmps(c,0,(int32_t)c->r[4],0); // 800C31D4
  if (crb(c,2)) { goto L_800C327C; } // 800C31D8
  c->r[0]=0u+0x00000001u; // 800C31DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C31E0
  c->r[6]=c->r[29]|c->r[29]; // 800C31E4
  c->r[7]=c->r[30]|c->r[30]; // 800C31E8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C31EC
  c->r[8]=c->r[31]|c->r[31]; // 800C31F0
  c->r[9]=R32(c->r[28]+0x00000168u); // 800C31F4
  c->r[5]=0u+0x00000000u; // 800C31F8
  c->r[10]=0u+0x00000001u; // 800C31FC
  c->lr=0x800C3204u; f_80281A84(c); // 800C3200
  cmps(c,0,(int32_t)c->r[3],0); // 800C3204
  W32(c->r[28]+0x00000164u,c->r[3]); // 800C3208
  if (crb(c,2)) { goto L_800C3218; } // 800C320C
  c->lr=0x800C3214u; f_80295B6C(c); // 800C3210
  goto L_800C327C; // 800C3214
L_800C3218:;
  c->r[3]=R32(c->r[28]+0x00000168u); // 800C3218
  c->r[4]=c->r[31]|c->r[31]; // 800C321C
  c->r[5]=c->r[30]|c->r[30]; // 800C3220
  c->lr=0x800C3228u; f_802C0F98(c); // 800C3224
  c->r[26]=c->r[3]|c->r[3]; // 800C3228
  c->r[3]=0u+0x00000044u; // 800C322C
  c->r[4]=c->r[13]+0xFFFFAEE5u; // 800C3230
  c->r[5]=0u+0x00000000u; // 800C3234
  c->r[6]=0u+0x00001001u; // 800C3238
  c->lr=0x800C3240u; f_80244D20(c); // 800C323C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3240
  if (crb(c,2)) { goto L_800C3258; } // 800C3244
  c->r[5]=R32(c->r[28]+0x00000160u); // 800C3248
  c->r[4]=c->r[26]|c->r[26]; // 800C324C
  c->r[6]=0u+0x00000000u; // 800C3250
  c->lr=0x800C3258u; f_8029316C(c); // 800C3254
L_800C3258:;
  W32(c->r[28]+0x00000164u,c->r[3]); // 800C3258
  c->r[4]=c->r[29]|c->r[29]; // 800C325C
  c->r[7]=R32(c->r[28]+0x00000168u); // 800C3260
  c->r[5]=c->r[30]|c->r[30]; // 800C3264
  c->r[6]=c->r[31]|c->r[31]; // 800C3268
  c->r[8]=0u+0x00000001u; // 800C326C
  c->r[9]=0u+0x00000000u; // 800C3270
  c->lr=0x800C3278u; f_8027FFF4(c); // 800C3274
  W32(c->r[28]+0x00000164u,c->r[3]); // 800C3278
L_800C327C:;
  c->r[4]=R32(c->r[28]+0x0000016Cu); // 800C327C
  cmps(c,0,(int32_t)c->r[4],0); // 800C3280
  if (crb(c,2)) { goto L_800C3328; } // 800C3284
  c->r[0]=0u+0x00000001u; // 800C3288
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C328C
  c->r[6]=c->r[29]|c->r[29]; // 800C3290
  c->r[7]=c->r[30]|c->r[30]; // 800C3294
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3298
  c->r[8]=c->r[31]|c->r[31]; // 800C329C
  c->r[9]=R32(c->r[28]+0x00000174u); // 800C32A0
  c->r[5]=0u+0x00000000u; // 800C32A4
  c->r[10]=0u+0x00000001u; // 800C32A8
  c->lr=0x800C32B0u; f_80281A84(c); // 800C32AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C32B0
  W32(c->r[28]+0x00000170u,c->r[3]); // 800C32B4
  if (crb(c,2)) { goto L_800C32C4; } // 800C32B8
  c->lr=0x800C32C0u; f_80295B6C(c); // 800C32BC
  goto L_800C3328; // 800C32C0
L_800C32C4:;
  c->r[3]=R32(c->r[28]+0x00000174u); // 800C32C4
  c->r[4]=c->r[31]|c->r[31]; // 800C32C8
  c->r[5]=c->r[30]|c->r[30]; // 800C32CC
  c->lr=0x800C32D4u; f_802C0F98(c); // 800C32D0
  c->r[26]=c->r[3]|c->r[3]; // 800C32D4
  c->r[3]=0u+0x00000044u; // 800C32D8
  c->r[4]=c->r[13]+0xFFFFAEEAu; // 800C32DC
  c->r[5]=0u+0x00000000u; // 800C32E0
  c->r[6]=0u+0x00001001u; // 800C32E4
  c->lr=0x800C32ECu; f_80244D20(c); // 800C32E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C32EC
  if (crb(c,2)) { goto L_800C3304; } // 800C32F0
  c->r[5]=R32(c->r[28]+0x0000016Cu); // 800C32F4
  c->r[4]=c->r[26]|c->r[26]; // 800C32F8
  c->r[6]=0u+0x00000000u; // 800C32FC
  c->lr=0x800C3304u; f_8029316C(c); // 800C3300
L_800C3304:;
  W32(c->r[28]+0x00000170u,c->r[3]); // 800C3304
  c->r[4]=c->r[29]|c->r[29]; // 800C3308
  c->r[7]=R32(c->r[28]+0x00000174u); // 800C330C
  c->r[5]=c->r[30]|c->r[30]; // 800C3310
  c->r[6]=c->r[31]|c->r[31]; // 800C3314
  c->r[8]=0u+0x00000001u; // 800C3318
  c->r[9]=0u+0x00000000u; // 800C331C
  c->lr=0x800C3324u; f_8027FFF4(c); // 800C3320
  W32(c->r[28]+0x00000170u,c->r[3]); // 800C3324
L_800C3328:;
  c->r[4]=R32(c->r[28]+0x00000178u); // 800C3328
  cmps(c,0,(int32_t)c->r[4],0); // 800C332C
  if (crb(c,2)) { goto L_800C33D4; } // 800C3330
  c->r[0]=0u+0x00000001u; // 800C3334
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3338
  c->r[6]=c->r[29]|c->r[29]; // 800C333C
  c->r[7]=c->r[30]|c->r[30]; // 800C3340
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3344
  c->r[8]=c->r[31]|c->r[31]; // 800C3348
  c->r[9]=R32(c->r[28]+0x00000180u); // 800C334C
  c->r[5]=0u+0x00000000u; // 800C3350
  c->r[10]=0u+0x00000001u; // 800C3354
  c->lr=0x800C335Cu; f_80281A84(c); // 800C3358
  cmps(c,0,(int32_t)c->r[3],0); // 800C335C
  W32(c->r[28]+0x0000017Cu,c->r[3]); // 800C3360
  if (crb(c,2)) { goto L_800C3370; } // 800C3364
  c->lr=0x800C336Cu; f_80295B6C(c); // 800C3368
  goto L_800C33D4; // 800C336C
L_800C3370:;
  c->r[3]=R32(c->r[28]+0x00000180u); // 800C3370
  c->r[4]=c->r[31]|c->r[31]; // 800C3374
  c->r[5]=c->r[30]|c->r[30]; // 800C3378
  c->lr=0x800C3380u; f_802C0F98(c); // 800C337C
  c->r[26]=c->r[3]|c->r[3]; // 800C3380
  c->r[3]=0u+0x00000044u; // 800C3384
  c->r[4]=c->r[13]+0xFFFFAEEFu; // 800C3388
  c->r[5]=0u+0x00000000u; // 800C338C
  c->r[6]=0u+0x00001001u; // 800C3390
  c->lr=0x800C3398u; f_80244D20(c); // 800C3394
  cmps(c,0,(int32_t)c->r[3],0); // 800C3398
  if (crb(c,2)) { goto L_800C33B0; } // 800C339C
  c->r[5]=R32(c->r[28]+0x00000178u); // 800C33A0
  c->r[4]=c->r[26]|c->r[26]; // 800C33A4
  c->r[6]=0u+0x00000000u; // 800C33A8
  c->lr=0x800C33B0u; f_8029316C(c); // 800C33AC
L_800C33B0:;
  W32(c->r[28]+0x0000017Cu,c->r[3]); // 800C33B0
  c->r[4]=c->r[29]|c->r[29]; // 800C33B4
  c->r[7]=R32(c->r[28]+0x00000180u); // 800C33B8
  c->r[5]=c->r[30]|c->r[30]; // 800C33BC
  c->r[6]=c->r[31]|c->r[31]; // 800C33C0
  c->r[8]=0u+0x00000001u; // 800C33C4
  c->r[9]=0u+0x00000000u; // 800C33C8
  c->lr=0x800C33D0u; f_8027FFF4(c); // 800C33CC
  W32(c->r[28]+0x0000017Cu,c->r[3]); // 800C33D0
L_800C33D4:;
  c->r[4]=R32(c->r[28]+0x00000184u); // 800C33D4
  cmps(c,0,(int32_t)c->r[4],0); // 800C33D8
  if (crb(c,2)) { goto L_800C3480; } // 800C33DC
  c->r[0]=0u+0x00000001u; // 800C33E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C33E4
  c->r[6]=c->r[29]|c->r[29]; // 800C33E8
  c->r[7]=c->r[30]|c->r[30]; // 800C33EC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C33F0
  c->r[8]=c->r[31]|c->r[31]; // 800C33F4
  c->r[9]=R32(c->r[28]+0x0000018Cu); // 800C33F8
  c->r[5]=0u+0x00000000u; // 800C33FC
  c->r[10]=0u+0x00000001u; // 800C3400
  c->lr=0x800C3408u; f_80281A84(c); // 800C3404
  cmps(c,0,(int32_t)c->r[3],0); // 800C3408
  W32(c->r[28]+0x00000188u,c->r[3]); // 800C340C
  if (crb(c,2)) { goto L_800C341C; } // 800C3410
  c->lr=0x800C3418u; f_80295B6C(c); // 800C3414
  goto L_800C3480; // 800C3418
L_800C341C:;
  c->r[3]=R32(c->r[28]+0x0000018Cu); // 800C341C
  c->r[4]=c->r[31]|c->r[31]; // 800C3420
  c->r[5]=c->r[30]|c->r[30]; // 800C3424
  c->lr=0x800C342Cu; f_802C0F98(c); // 800C3428
  c->r[26]=c->r[3]|c->r[3]; // 800C342C
  c->r[3]=0u+0x00000044u; // 800C3430
  c->r[4]=c->r[13]+0xFFFFAEF4u; // 800C3434
  c->r[5]=0u+0x00000000u; // 800C3438
  c->r[6]=0u+0x00001001u; // 800C343C
  c->lr=0x800C3444u; f_80244D20(c); // 800C3440
  cmps(c,0,(int32_t)c->r[3],0); // 800C3444
  if (crb(c,2)) { goto L_800C345C; } // 800C3448
  c->r[5]=R32(c->r[28]+0x00000184u); // 800C344C
  c->r[4]=c->r[26]|c->r[26]; // 800C3450
  c->r[6]=0u+0x00000000u; // 800C3454
  c->lr=0x800C345Cu; f_8029316C(c); // 800C3458
L_800C345C:;
  W32(c->r[28]+0x00000188u,c->r[3]); // 800C345C
  c->r[4]=c->r[29]|c->r[29]; // 800C3460
  c->r[7]=R32(c->r[28]+0x0000018Cu); // 800C3464
  c->r[5]=c->r[30]|c->r[30]; // 800C3468
  c->r[6]=c->r[31]|c->r[31]; // 800C346C
  c->r[8]=0u+0x00000001u; // 800C3470
  c->r[9]=0u+0x00000000u; // 800C3474
  c->lr=0x800C347Cu; f_8027FFF4(c); // 800C3478
  W32(c->r[28]+0x00000188u,c->r[3]); // 800C347C
L_800C3480:;
  c->r[4]=R32(c->r[28]+0x000001B0u); // 800C3480
  cmps(c,0,(int32_t)c->r[4],0); // 800C3484
  if (crb(c,2)) { goto L_800C352C; } // 800C3488
  c->r[0]=0u+0x00000001u; // 800C348C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3490
  c->r[6]=c->r[29]|c->r[29]; // 800C3494
  c->r[7]=c->r[30]|c->r[30]; // 800C3498
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C349C
  c->r[8]=c->r[31]|c->r[31]; // 800C34A0
  c->r[9]=R32(c->r[28]+0x000001B8u); // 800C34A4
  c->r[5]=0u+0x00000000u; // 800C34A8
  c->r[10]=0u+0x00000001u; // 800C34AC
  c->lr=0x800C34B4u; f_80281A84(c); // 800C34B0
  cmps(c,0,(int32_t)c->r[3],0); // 800C34B4
  W32(c->r[28]+0x000001B4u,c->r[3]); // 800C34B8
  if (crb(c,2)) { goto L_800C34C8; } // 800C34BC
  c->lr=0x800C34C4u; f_80295B6C(c); // 800C34C0
  goto L_800C352C; // 800C34C4
L_800C34C8:;
  c->r[3]=R32(c->r[28]+0x000001B8u); // 800C34C8
  c->r[4]=c->r[31]|c->r[31]; // 800C34CC
  c->r[5]=c->r[30]|c->r[30]; // 800C34D0
  c->lr=0x800C34D8u; f_802C0F98(c); // 800C34D4
  c->r[26]=c->r[3]|c->r[3]; // 800C34D8
  c->r[3]=0u+0x00000044u; // 800C34DC
  c->r[4]=c->r[13]+0xFFFFAEF9u; // 800C34E0
  c->r[5]=0u+0x00000000u; // 800C34E4
  c->r[6]=0u+0x00001001u; // 800C34E8
  c->lr=0x800C34F0u; f_80244D20(c); // 800C34EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C34F0
  if (crb(c,2)) { goto L_800C3508; } // 800C34F4
  c->r[5]=R32(c->r[28]+0x000001B0u); // 800C34F8
  c->r[4]=c->r[26]|c->r[26]; // 800C34FC
  c->r[6]=0u+0x00000000u; // 800C3500
  c->lr=0x800C3508u; f_8029316C(c); // 800C3504
L_800C3508:;
  W32(c->r[28]+0x000001B4u,c->r[3]); // 800C3508
  c->r[4]=c->r[29]|c->r[29]; // 800C350C
  c->r[7]=R32(c->r[28]+0x000001B8u); // 800C3510
  c->r[5]=c->r[30]|c->r[30]; // 800C3514
  c->r[6]=c->r[31]|c->r[31]; // 800C3518
  c->r[8]=0u+0x00000001u; // 800C351C
  c->r[9]=0u+0x00000000u; // 800C3520
  c->lr=0x800C3528u; f_8027FFF4(c); // 800C3524
  W32(c->r[28]+0x000001B4u,c->r[3]); // 800C3528
L_800C352C:;
  c->r[4]=R32(c->r[28]+0x000001DCu); // 800C352C
  cmps(c,0,(int32_t)c->r[4],0); // 800C3530
  if (crb(c,2)) { goto L_800C35D8; } // 800C3534
  c->r[0]=0u+0x00000001u; // 800C3538
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C353C
  c->r[6]=c->r[29]|c->r[29]; // 800C3540
  c->r[7]=c->r[30]|c->r[30]; // 800C3544
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3548
  c->r[8]=c->r[31]|c->r[31]; // 800C354C
  c->r[9]=R32(c->r[28]+0x000001E4u); // 800C3550
  c->r[5]=0u+0x00000000u; // 800C3554
  c->r[10]=0u+0x00000001u; // 800C3558
  c->lr=0x800C3560u; f_80281A84(c); // 800C355C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3560
  W32(c->r[28]+0x000001E0u,c->r[3]); // 800C3564
  if (crb(c,2)) { goto L_800C3574; } // 800C3568
  c->lr=0x800C3570u; f_80295B6C(c); // 800C356C
  goto L_800C35D8; // 800C3570
L_800C3574:;
  c->r[3]=R32(c->r[28]+0x000001E4u); // 800C3574
  c->r[4]=c->r[31]|c->r[31]; // 800C3578
  c->r[5]=c->r[30]|c->r[30]; // 800C357C
  c->lr=0x800C3584u; f_802C0F98(c); // 800C3580
  c->r[26]=c->r[3]|c->r[3]; // 800C3584
  c->r[3]=0u+0x00000044u; // 800C3588
  c->r[4]=c->r[13]+0xFFFFAEFEu; // 800C358C
  c->r[5]=0u+0x00000000u; // 800C3590
  c->r[6]=0u+0x00001001u; // 800C3594
  c->lr=0x800C359Cu; f_80244D20(c); // 800C3598
  cmps(c,0,(int32_t)c->r[3],0); // 800C359C
  if (crb(c,2)) { goto L_800C35B4; } // 800C35A0
  c->r[5]=R32(c->r[28]+0x000001DCu); // 800C35A4
  c->r[4]=c->r[26]|c->r[26]; // 800C35A8
  c->r[6]=0u+0x00000000u; // 800C35AC
  c->lr=0x800C35B4u; f_8029316C(c); // 800C35B0
L_800C35B4:;
  W32(c->r[28]+0x000001E0u,c->r[3]); // 800C35B4
  c->r[4]=c->r[29]|c->r[29]; // 800C35B8
  c->r[7]=R32(c->r[28]+0x000001E4u); // 800C35BC
  c->r[5]=c->r[30]|c->r[30]; // 800C35C0
  c->r[6]=c->r[31]|c->r[31]; // 800C35C4
  c->r[8]=0u+0x00000001u; // 800C35C8
  c->r[9]=0u+0x00000000u; // 800C35CC
  c->lr=0x800C35D4u; f_8027FFF4(c); // 800C35D0
  W32(c->r[28]+0x000001E0u,c->r[3]); // 800C35D4
L_800C35D8:;
  c->r[4]=R32(c->r[28]+0x00000208u); // 800C35D8
  cmps(c,0,(int32_t)c->r[4],0); // 800C35DC
  if (crb(c,2)) { goto L_800C3714; } // 800C35E0
  c->r[0]=0u+0x00000001u; // 800C35E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C35E8
  c->r[6]=c->r[29]|c->r[29]; // 800C35EC
  c->r[7]=c->r[30]|c->r[30]; // 800C35F0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C35F4
  c->r[8]=c->r[31]|c->r[31]; // 800C35F8
  c->r[9]=R32(c->r[28]+0x00000210u); // 800C35FC
  c->r[5]=0u+0x00000000u; // 800C3600
  c->r[10]=0u+0x00000001u; // 800C3604
  c->lr=0x800C360Cu; f_80281A84(c); // 800C3608
  cmps(c,0,(int32_t)c->r[3],0); // 800C360C
  W32(c->r[28]+0x0000020Cu,c->r[3]); // 800C3610
  if (crb(c,2)) { goto L_800C3620; } // 800C3614
  c->lr=0x800C361Cu; f_80295B6C(c); // 800C3618
  goto L_800C3684; // 800C361C
L_800C3620:;
  c->r[3]=R32(c->r[28]+0x00000210u); // 800C3620
  c->r[4]=c->r[31]|c->r[31]; // 800C3624
  c->r[5]=c->r[30]|c->r[30]; // 800C3628
  c->lr=0x800C3630u; f_802C0F98(c); // 800C362C
  c->r[26]=c->r[3]|c->r[3]; // 800C3630
  c->r[3]=0u+0x00000044u; // 800C3634
  c->r[4]=c->r[13]+0xFFFFAF03u; // 800C3638
  c->r[5]=0u+0x00000000u; // 800C363C
  c->r[6]=0u+0x00001001u; // 800C3640
  c->lr=0x800C3648u; f_80244D20(c); // 800C3644
  cmps(c,0,(int32_t)c->r[3],0); // 800C3648
  if (crb(c,2)) { goto L_800C3660; } // 800C364C
  c->r[5]=R32(c->r[28]+0x00000208u); // 800C3650
  c->r[4]=c->r[26]|c->r[26]; // 800C3654
  c->r[6]=0u+0x00000000u; // 800C3658
  c->lr=0x800C3660u; f_8029316C(c); // 800C365C
L_800C3660:;
  W32(c->r[28]+0x0000020Cu,c->r[3]); // 800C3660
  c->r[4]=c->r[29]|c->r[29]; // 800C3664
  c->r[7]=R32(c->r[28]+0x00000210u); // 800C3668
  c->r[5]=c->r[30]|c->r[30]; // 800C366C
  c->r[6]=c->r[31]|c->r[31]; // 800C3670
  c->r[8]=0u+0x00000001u; // 800C3674
  c->r[9]=0u+0x00000000u; // 800C3678
  c->lr=0x800C3680u; f_8027FFF4(c); // 800C367C
  W32(c->r[28]+0x0000020Cu,c->r[3]); // 800C3680
L_800C3684:;
  c->r[0]=0u+0x00000001u; // 800C3684
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3688
  c->r[6]=c->r[29]|c->r[29]; // 800C368C
  c->r[7]=c->r[30]|c->r[30]; // 800C3690
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3694
  c->r[8]=c->r[31]|c->r[31]; // 800C3698
  c->r[4]=R32(c->r[28]+0x00000214u); // 800C369C
  c->r[5]=0u+0x00000010u; // 800C36A0
  c->r[9]=R32(c->r[28]+0x0000021Cu); // 800C36A4
  c->r[10]=0u+0x00000001u; // 800C36A8
  c->lr=0x800C36B0u; f_80281A84(c); // 800C36AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C36B0
  W32(c->r[28]+0x00000218u,c->r[3]); // 800C36B4
  if (crb(c,2)) { goto L_800C36C4; } // 800C36B8
  c->lr=0x800C36C0u; f_80295B6C(c); // 800C36BC
  goto L_800C3714; // 800C36C0
L_800C36C4:;
  c->r[3]=0u+0x00000044u; // 800C36C4
  c->r[4]=c->r[13]+0xFFFFAF08u; // 800C36C8
  c->r[5]=0u+0x00000000u; // 800C36CC
  c->r[6]=0u+0x00001001u; // 800C36D0
  c->lr=0x800C36D8u; f_80244D20(c); // 800C36D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C36D8
  if (crb(c,2)) { goto L_800C36F0; } // 800C36DC
  c->r[5]=R32(c->r[28]+0x00000214u); // 800C36E0
  c->r[4]=0u+0x00000000u; // 800C36E4
  c->r[6]=0u+0x00000010u; // 800C36E8
  c->lr=0x800C36F0u; f_8029316C(c); // 800C36EC
L_800C36F0:;
  W32(c->r[28]+0x00000218u,c->r[3]); // 800C36F0
  c->r[4]=c->r[29]|c->r[29]; // 800C36F4
  c->r[7]=R32(c->r[28]+0x0000021Cu); // 800C36F8
  c->r[5]=c->r[30]|c->r[30]; // 800C36FC
  c->r[6]=c->r[31]|c->r[31]; // 800C3700
  c->r[8]=0u+0x00000001u; // 800C3704
  c->r[9]=0u+0x00000000u; // 800C3708
  c->lr=0x800C3710u; f_8027FFF4(c); // 800C370C
  W32(c->r[28]+0x00000218u,c->r[3]); // 800C3710
L_800C3714:;
  c->r[4]=R32(c->r[28]+0x00000220u); // 800C3714
  cmps(c,0,(int32_t)c->r[4],0); // 800C3718
  if (crb(c,2)) { goto L_800C3850; } // 800C371C
  c->r[0]=0u+0x00000001u; // 800C3720
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3724
  c->r[6]=c->r[29]|c->r[29]; // 800C3728
  c->r[7]=c->r[30]|c->r[30]; // 800C372C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3730
  c->r[8]=c->r[31]|c->r[31]; // 800C3734
  c->r[9]=R32(c->r[28]+0x00000228u); // 800C3738
  c->r[5]=0u+0x00000000u; // 800C373C
  c->r[10]=0u+0x00000001u; // 800C3740
  c->lr=0x800C3748u; f_80281A84(c); // 800C3744
  cmps(c,0,(int32_t)c->r[3],0); // 800C3748
  W32(c->r[28]+0x00000224u,c->r[3]); // 800C374C
  if (crb(c,2)) { goto L_800C375C; } // 800C3750
  c->lr=0x800C3758u; f_80295B6C(c); // 800C3754
  goto L_800C37C0; // 800C3758
L_800C375C:;
  c->r[3]=R32(c->r[28]+0x00000228u); // 800C375C
  c->r[4]=c->r[31]|c->r[31]; // 800C3760
  c->r[5]=c->r[30]|c->r[30]; // 800C3764
  c->lr=0x800C376Cu; f_802C0F98(c); // 800C3768
  c->r[26]=c->r[3]|c->r[3]; // 800C376C
  c->r[3]=0u+0x00000044u; // 800C3770
  c->r[4]=c->r[13]+0xFFFFAF0Du; // 800C3774
  c->r[5]=0u+0x00000000u; // 800C3778
  c->r[6]=0u+0x00001001u; // 800C377C
  c->lr=0x800C3784u; f_80244D20(c); // 800C3780
  cmps(c,0,(int32_t)c->r[3],0); // 800C3784
  if (crb(c,2)) { goto L_800C379C; } // 800C3788
  c->r[5]=R32(c->r[28]+0x00000220u); // 800C378C
  c->r[4]=c->r[26]|c->r[26]; // 800C3790
  c->r[6]=0u+0x00000000u; // 800C3794
  c->lr=0x800C379Cu; f_8029316C(c); // 800C3798
L_800C379C:;
  W32(c->r[28]+0x00000224u,c->r[3]); // 800C379C
  c->r[4]=c->r[29]|c->r[29]; // 800C37A0
  c->r[7]=R32(c->r[28]+0x00000228u); // 800C37A4
  c->r[5]=c->r[30]|c->r[30]; // 800C37A8
  c->r[6]=c->r[31]|c->r[31]; // 800C37AC
  c->r[8]=0u+0x00000001u; // 800C37B0
  c->r[9]=0u+0x00000000u; // 800C37B4
  c->lr=0x800C37BCu; f_8027FFF4(c); // 800C37B8
  W32(c->r[28]+0x00000224u,c->r[3]); // 800C37BC
L_800C37C0:;
  c->r[0]=0u+0x00000001u; // 800C37C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C37C4
  c->r[6]=c->r[29]|c->r[29]; // 800C37C8
  c->r[7]=c->r[30]|c->r[30]; // 800C37CC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C37D0
  c->r[8]=c->r[31]|c->r[31]; // 800C37D4
  c->r[4]=R32(c->r[28]+0x0000022Cu); // 800C37D8
  c->r[5]=0u+0x00000010u; // 800C37DC
  c->r[9]=R32(c->r[28]+0x00000234u); // 800C37E0
  c->r[10]=0u+0x00000001u; // 800C37E4
  c->lr=0x800C37ECu; f_80281A84(c); // 800C37E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C37EC
  W32(c->r[28]+0x00000230u,c->r[3]); // 800C37F0
  if (crb(c,2)) { goto L_800C3800; } // 800C37F4
  c->lr=0x800C37FCu; f_80295B6C(c); // 800C37F8
  goto L_800C3850; // 800C37FC
L_800C3800:;
  c->r[3]=0u+0x00000044u; // 800C3800
  c->r[4]=c->r[13]+0xFFFFAF12u; // 800C3804
  c->r[5]=0u+0x00000000u; // 800C3808
  c->r[6]=0u+0x00001001u; // 800C380C
  c->lr=0x800C3814u; f_80244D20(c); // 800C3810
  cmps(c,0,(int32_t)c->r[3],0); // 800C3814
  if (crb(c,2)) { goto L_800C382C; } // 800C3818
  c->r[5]=R32(c->r[28]+0x0000022Cu); // 800C381C
  c->r[4]=0u+0x00000000u; // 800C3820
  c->r[6]=0u+0x00000010u; // 800C3824
  c->lr=0x800C382Cu; f_8029316C(c); // 800C3828
L_800C382C:;
  W32(c->r[28]+0x00000230u,c->r[3]); // 800C382C
  c->r[4]=c->r[29]|c->r[29]; // 800C3830
  c->r[7]=R32(c->r[28]+0x00000234u); // 800C3834
  c->r[5]=c->r[30]|c->r[30]; // 800C3838
  c->r[6]=c->r[31]|c->r[31]; // 800C383C
  c->r[8]=0u+0x00000001u; // 800C3840
  c->r[9]=0u+0x00000000u; // 800C3844
  c->lr=0x800C384Cu; f_8027FFF4(c); // 800C3848
  W32(c->r[28]+0x00000230u,c->r[3]); // 800C384C
L_800C3850:;
  c->r[4]=R32(c->r[28]+0x00000238u); // 800C3850
  cmps(c,0,(int32_t)c->r[4],0); // 800C3854
  if (crb(c,2)) { goto L_800C398C; } // 800C3858
  c->r[0]=0u+0x00000001u; // 800C385C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3860
  c->r[6]=c->r[29]|c->r[29]; // 800C3864
  c->r[7]=c->r[30]|c->r[30]; // 800C3868
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C386C
  c->r[8]=c->r[31]|c->r[31]; // 800C3870
  c->r[9]=R32(c->r[28]+0x00000240u); // 800C3874
  c->r[5]=0u+0x00000000u; // 800C3878
  c->r[10]=0u+0x00000001u; // 800C387C
  c->lr=0x800C3884u; f_80281A84(c); // 800C3880
  cmps(c,0,(int32_t)c->r[3],0); // 800C3884
  W32(c->r[28]+0x0000023Cu,c->r[3]); // 800C3888
  if (crb(c,2)) { goto L_800C3898; } // 800C388C
  c->lr=0x800C3894u; f_80295B6C(c); // 800C3890
  goto L_800C38FC; // 800C3894
L_800C3898:;
  c->r[3]=R32(c->r[28]+0x00000240u); // 800C3898
  c->r[4]=c->r[31]|c->r[31]; // 800C389C
  c->r[5]=c->r[30]|c->r[30]; // 800C38A0
  c->lr=0x800C38A8u; f_802C0F98(c); // 800C38A4
  c->r[26]=c->r[3]|c->r[3]; // 800C38A8
  c->r[3]=0u+0x00000044u; // 800C38AC
  c->r[4]=c->r[13]+0xFFFFAF17u; // 800C38B0
  c->r[5]=0u+0x00000000u; // 800C38B4
  c->r[6]=0u+0x00001001u; // 800C38B8
  c->lr=0x800C38C0u; f_80244D20(c); // 800C38BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C38C0
  if (crb(c,2)) { goto L_800C38D8; } // 800C38C4
  c->r[5]=R32(c->r[28]+0x00000238u); // 800C38C8
  c->r[4]=c->r[26]|c->r[26]; // 800C38CC
  c->r[6]=0u+0x00000000u; // 800C38D0
  c->lr=0x800C38D8u; f_8029316C(c); // 800C38D4
L_800C38D8:;
  W32(c->r[28]+0x0000023Cu,c->r[3]); // 800C38D8
  c->r[4]=c->r[29]|c->r[29]; // 800C38DC
  c->r[7]=R32(c->r[28]+0x00000240u); // 800C38E0
  c->r[5]=c->r[30]|c->r[30]; // 800C38E4
  c->r[6]=c->r[31]|c->r[31]; // 800C38E8
  c->r[8]=0u+0x00000001u; // 800C38EC
  c->r[9]=0u+0x00000000u; // 800C38F0
  c->lr=0x800C38F8u; f_8027FFF4(c); // 800C38F4
  W32(c->r[28]+0x0000023Cu,c->r[3]); // 800C38F8
L_800C38FC:;
  c->r[0]=0u+0x00000001u; // 800C38FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3900
  c->r[6]=c->r[29]|c->r[29]; // 800C3904
  c->r[7]=c->r[30]|c->r[30]; // 800C3908
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C390C
  c->r[8]=c->r[31]|c->r[31]; // 800C3910
  c->r[4]=R32(c->r[28]+0x00000244u); // 800C3914
  c->r[5]=0u+0x00000010u; // 800C3918
  c->r[9]=R32(c->r[28]+0x0000024Cu); // 800C391C
  c->r[10]=0u+0x00000001u; // 800C3920
  c->lr=0x800C3928u; f_80281A84(c); // 800C3924
  cmps(c,0,(int32_t)c->r[3],0); // 800C3928
  W32(c->r[28]+0x00000248u,c->r[3]); // 800C392C
  if (crb(c,2)) { goto L_800C393C; } // 800C3930
  c->lr=0x800C3938u; f_80295B6C(c); // 800C3934
  goto L_800C398C; // 800C3938
L_800C393C:;
  c->r[3]=0u+0x00000044u; // 800C393C
  c->r[4]=c->r[13]+0xFFFFAF1Cu; // 800C3940
  c->r[5]=0u+0x00000000u; // 800C3944
  c->r[6]=0u+0x00001001u; // 800C3948
  c->lr=0x800C3950u; f_80244D20(c); // 800C394C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3950
  if (crb(c,2)) { goto L_800C3968; } // 800C3954
  c->r[5]=R32(c->r[28]+0x00000244u); // 800C3958
  c->r[4]=0u+0x00000000u; // 800C395C
  c->r[6]=0u+0x00000010u; // 800C3960
  c->lr=0x800C3968u; f_8029316C(c); // 800C3964
L_800C3968:;
  W32(c->r[28]+0x00000248u,c->r[3]); // 800C3968
  c->r[4]=c->r[29]|c->r[29]; // 800C396C
  c->r[7]=R32(c->r[28]+0x0000024Cu); // 800C3970
  c->r[5]=c->r[30]|c->r[30]; // 800C3974
  c->r[6]=c->r[31]|c->r[31]; // 800C3978
  c->r[8]=0u+0x00000001u; // 800C397C
  c->r[9]=0u+0x00000000u; // 800C3980
  c->lr=0x800C3988u; f_8027FFF4(c); // 800C3984
  W32(c->r[28]+0x00000248u,c->r[3]); // 800C3988
L_800C398C:;
  c->r[4]=R32(c->r[28]+0x00000250u); // 800C398C
  cmps(c,0,(int32_t)c->r[4],0); // 800C3990
  if (crb(c,2)) { goto L_800C3AC8; } // 800C3994
  c->r[0]=0u+0x00000001u; // 800C3998
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C399C
  c->r[6]=c->r[29]|c->r[29]; // 800C39A0
  c->r[7]=c->r[30]|c->r[30]; // 800C39A4
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C39A8
  c->r[8]=c->r[31]|c->r[31]; // 800C39AC
  c->r[9]=R32(c->r[28]+0x00000258u); // 800C39B0
  c->r[5]=0u+0x00000000u; // 800C39B4
  c->r[10]=0u+0x00000001u; // 800C39B8
  c->lr=0x800C39C0u; f_80281A84(c); // 800C39BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C39C0
  W32(c->r[28]+0x00000254u,c->r[3]); // 800C39C4
  if (crb(c,2)) { goto L_800C39D4; } // 800C39C8
  c->lr=0x800C39D0u; f_80295B6C(c); // 800C39CC
  goto L_800C3A38; // 800C39D0
L_800C39D4:;
  c->r[3]=R32(c->r[28]+0x00000258u); // 800C39D4
  c->r[4]=c->r[31]|c->r[31]; // 800C39D8
  c->r[5]=c->r[30]|c->r[30]; // 800C39DC
  c->lr=0x800C39E4u; f_802C0F98(c); // 800C39E0
  c->r[26]=c->r[3]|c->r[3]; // 800C39E4
  c->r[3]=0u+0x00000044u; // 800C39E8
  c->r[4]=c->r[13]+0xFFFFAF21u; // 800C39EC
  c->r[5]=0u+0x00000000u; // 800C39F0
  c->r[6]=0u+0x00001001u; // 800C39F4
  c->lr=0x800C39FCu; f_80244D20(c); // 800C39F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C39FC
  if (crb(c,2)) { goto L_800C3A14; } // 800C3A00
  c->r[5]=R32(c->r[28]+0x00000250u); // 800C3A04
  c->r[4]=c->r[26]|c->r[26]; // 800C3A08
  c->r[6]=0u+0x00000000u; // 800C3A0C
  c->lr=0x800C3A14u; f_8029316C(c); // 800C3A10
L_800C3A14:;
  W32(c->r[28]+0x00000254u,c->r[3]); // 800C3A14
  c->r[4]=c->r[29]|c->r[29]; // 800C3A18
  c->r[7]=R32(c->r[28]+0x00000258u); // 800C3A1C
  c->r[5]=c->r[30]|c->r[30]; // 800C3A20
  c->r[6]=c->r[31]|c->r[31]; // 800C3A24
  c->r[8]=0u+0x00000001u; // 800C3A28
  c->r[9]=0u+0x00000000u; // 800C3A2C
  c->lr=0x800C3A34u; f_8027FFF4(c); // 800C3A30
  W32(c->r[28]+0x00000254u,c->r[3]); // 800C3A34
L_800C3A38:;
  c->r[0]=0u+0x00000001u; // 800C3A38
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3A3C
  c->r[6]=c->r[29]|c->r[29]; // 800C3A40
  c->r[7]=c->r[30]|c->r[30]; // 800C3A44
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3A48
  c->r[8]=c->r[31]|c->r[31]; // 800C3A4C
  c->r[4]=R32(c->r[28]+0x0000027Cu); // 800C3A50
  c->r[5]=0u+0x00000010u; // 800C3A54
  c->r[9]=R32(c->r[28]+0x00000284u); // 800C3A58
  c->r[10]=0u+0x00000001u; // 800C3A5C
  c->lr=0x800C3A64u; f_80281A84(c); // 800C3A60
  cmps(c,0,(int32_t)c->r[3],0); // 800C3A64
  W32(c->r[28]+0x00000280u,c->r[3]); // 800C3A68
  if (crb(c,2)) { goto L_800C3A78; } // 800C3A6C
  c->lr=0x800C3A74u; f_80295B6C(c); // 800C3A70
  goto L_800C3AC8; // 800C3A74
L_800C3A78:;
  c->r[3]=0u+0x00000044u; // 800C3A78
  c->r[4]=c->r[13]+0xFFFFAF26u; // 800C3A7C
  c->r[5]=0u+0x00000000u; // 800C3A80
  c->r[6]=0u+0x00001001u; // 800C3A84
  c->lr=0x800C3A8Cu; f_80244D20(c); // 800C3A88
  cmps(c,0,(int32_t)c->r[3],0); // 800C3A8C
  if (crb(c,2)) { goto L_800C3AA4; } // 800C3A90
  c->r[5]=R32(c->r[28]+0x0000027Cu); // 800C3A94
  c->r[4]=0u+0x00000000u; // 800C3A98
  c->r[6]=0u+0x00000010u; // 800C3A9C
  c->lr=0x800C3AA4u; f_8029316C(c); // 800C3AA0
L_800C3AA4:;
  W32(c->r[28]+0x00000280u,c->r[3]); // 800C3AA4
  c->r[4]=c->r[29]|c->r[29]; // 800C3AA8
  c->r[7]=R32(c->r[28]+0x00000284u); // 800C3AAC
  c->r[5]=c->r[30]|c->r[30]; // 800C3AB0
  c->r[6]=c->r[31]|c->r[31]; // 800C3AB4
  c->r[8]=0u+0x00000001u; // 800C3AB8
  c->r[9]=0u+0x00000000u; // 800C3ABC
  c->lr=0x800C3AC4u; f_8027FFF4(c); // 800C3AC0
  W32(c->r[28]+0x00000280u,c->r[3]); // 800C3AC4
L_800C3AC8:;
  c->r[4]=R32(c->r[28]+0x000002A8u); // 800C3AC8
  cmps(c,0,(int32_t)c->r[4],0); // 800C3ACC
  if (crb(c,2)) { goto L_800C3C04; } // 800C3AD0
  c->r[0]=0u+0x00000001u; // 800C3AD4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3AD8
  c->r[6]=c->r[29]|c->r[29]; // 800C3ADC
  c->r[7]=c->r[30]|c->r[30]; // 800C3AE0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3AE4
  c->r[8]=c->r[31]|c->r[31]; // 800C3AE8
  c->r[9]=R32(c->r[28]+0x000002B0u); // 800C3AEC
  c->r[5]=0u+0x00000000u; // 800C3AF0
  c->r[10]=0u+0x00000001u; // 800C3AF4
  c->lr=0x800C3AFCu; f_80281A84(c); // 800C3AF8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3AFC
  W32(c->r[28]+0x000002ACu,c->r[3]); // 800C3B00
  if (crb(c,2)) { goto L_800C3B10; } // 800C3B04
  c->lr=0x800C3B0Cu; f_80295B6C(c); // 800C3B08
  goto L_800C3B74; // 800C3B0C
L_800C3B10:;
  c->r[3]=R32(c->r[28]+0x000002B0u); // 800C3B10
  c->r[4]=c->r[31]|c->r[31]; // 800C3B14
  c->r[5]=c->r[30]|c->r[30]; // 800C3B18
  c->lr=0x800C3B20u; f_802C0F98(c); // 800C3B1C
  c->r[26]=c->r[3]|c->r[3]; // 800C3B20
  c->r[3]=0u+0x00000044u; // 800C3B24
  c->r[4]=c->r[13]+0xFFFFAF2Bu; // 800C3B28
  c->r[5]=0u+0x00000000u; // 800C3B2C
  c->r[6]=0u+0x00001001u; // 800C3B30
  c->lr=0x800C3B38u; f_80244D20(c); // 800C3B34
  cmps(c,0,(int32_t)c->r[3],0); // 800C3B38
  if (crb(c,2)) { goto L_800C3B50; } // 800C3B3C
  c->r[5]=R32(c->r[28]+0x000002A8u); // 800C3B40
  c->r[4]=c->r[26]|c->r[26]; // 800C3B44
  c->r[6]=0u+0x00000000u; // 800C3B48
  c->lr=0x800C3B50u; f_8029316C(c); // 800C3B4C
L_800C3B50:;
  W32(c->r[28]+0x000002ACu,c->r[3]); // 800C3B50
  c->r[4]=c->r[29]|c->r[29]; // 800C3B54
  c->r[7]=R32(c->r[28]+0x000002B0u); // 800C3B58
  c->r[5]=c->r[30]|c->r[30]; // 800C3B5C
  c->r[6]=c->r[31]|c->r[31]; // 800C3B60
  c->r[8]=0u+0x00000001u; // 800C3B64
  c->r[9]=0u+0x00000000u; // 800C3B68
  c->lr=0x800C3B70u; f_8027FFF4(c); // 800C3B6C
  W32(c->r[28]+0x000002ACu,c->r[3]); // 800C3B70
L_800C3B74:;
  c->r[0]=0u+0x00000001u; // 800C3B74
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3B78
  c->r[6]=c->r[29]|c->r[29]; // 800C3B7C
  c->r[7]=c->r[30]|c->r[30]; // 800C3B80
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3B84
  c->r[8]=c->r[31]|c->r[31]; // 800C3B88
  c->r[4]=R32(c->r[28]+0x000002D4u); // 800C3B8C
  c->r[5]=0u+0x00000010u; // 800C3B90
  c->r[9]=R32(c->r[28]+0x000002DCu); // 800C3B94
  c->r[10]=0u+0x00000001u; // 800C3B98
  c->lr=0x800C3BA0u; f_80281A84(c); // 800C3B9C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3BA0
  W32(c->r[28]+0x000002D8u,c->r[3]); // 800C3BA4
  if (crb(c,2)) { goto L_800C3BB4; } // 800C3BA8
  c->lr=0x800C3BB0u; f_80295B6C(c); // 800C3BAC
  goto L_800C3C04; // 800C3BB0
L_800C3BB4:;
  c->r[3]=0u+0x00000044u; // 800C3BB4
  c->r[4]=c->r[13]+0xFFFFAF30u; // 800C3BB8
  c->r[5]=0u+0x00000000u; // 800C3BBC
  c->r[6]=0u+0x00001001u; // 800C3BC0
  c->lr=0x800C3BC8u; f_80244D20(c); // 800C3BC4
  cmps(c,0,(int32_t)c->r[3],0); // 800C3BC8
  if (crb(c,2)) { goto L_800C3BE0; } // 800C3BCC
  c->r[5]=R32(c->r[28]+0x000002D4u); // 800C3BD0
  c->r[4]=0u+0x00000000u; // 800C3BD4
  c->r[6]=0u+0x00000010u; // 800C3BD8
  c->lr=0x800C3BE0u; f_8029316C(c); // 800C3BDC
L_800C3BE0:;
  W32(c->r[28]+0x000002D8u,c->r[3]); // 800C3BE0
  c->r[4]=c->r[29]|c->r[29]; // 800C3BE4
  c->r[7]=R32(c->r[28]+0x000002DCu); // 800C3BE8
  c->r[5]=c->r[30]|c->r[30]; // 800C3BEC
  c->r[6]=c->r[31]|c->r[31]; // 800C3BF0
  c->r[8]=0u+0x00000001u; // 800C3BF4
  c->r[9]=0u+0x00000000u; // 800C3BF8
  c->lr=0x800C3C00u; f_8027FFF4(c); // 800C3BFC
  W32(c->r[28]+0x000002D8u,c->r[3]); // 800C3C00
L_800C3C04:;
  c->r[4]=R32(c->r[28]+0x00000300u); // 800C3C04
  cmps(c,0,(int32_t)c->r[4],0); // 800C3C08
  if (crb(c,2)) { goto L_800C3D40; } // 800C3C0C
  c->r[0]=0u+0x00000001u; // 800C3C10
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3C14
  c->r[6]=c->r[29]|c->r[29]; // 800C3C18
  c->r[7]=c->r[30]|c->r[30]; // 800C3C1C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3C20
  c->r[8]=c->r[31]|c->r[31]; // 800C3C24
  c->r[9]=R32(c->r[28]+0x00000308u); // 800C3C28
  c->r[5]=0u+0x00000000u; // 800C3C2C
  c->r[10]=0u+0x00000001u; // 800C3C30
  c->lr=0x800C3C38u; f_80281A84(c); // 800C3C34
  cmps(c,0,(int32_t)c->r[3],0); // 800C3C38
  W32(c->r[28]+0x00000304u,c->r[3]); // 800C3C3C
  if (crb(c,2)) { goto L_800C3C4C; } // 800C3C40
  c->lr=0x800C3C48u; f_80295B6C(c); // 800C3C44
  goto L_800C3CB0; // 800C3C48
L_800C3C4C:;
  c->r[3]=R32(c->r[28]+0x00000308u); // 800C3C4C
  c->r[4]=c->r[31]|c->r[31]; // 800C3C50
  c->r[5]=c->r[30]|c->r[30]; // 800C3C54
  c->lr=0x800C3C5Cu; f_802C0F98(c); // 800C3C58
  c->r[26]=c->r[3]|c->r[3]; // 800C3C5C
  c->r[3]=0u+0x00000044u; // 800C3C60
  c->r[4]=c->r[13]+0xFFFFAF35u; // 800C3C64
  c->r[5]=0u+0x00000000u; // 800C3C68
  c->r[6]=0u+0x00001001u; // 800C3C6C
  c->lr=0x800C3C74u; f_80244D20(c); // 800C3C70
  cmps(c,0,(int32_t)c->r[3],0); // 800C3C74
  if (crb(c,2)) { goto L_800C3C8C; } // 800C3C78
  c->r[5]=R32(c->r[28]+0x00000300u); // 800C3C7C
  c->r[4]=c->r[26]|c->r[26]; // 800C3C80
  c->r[6]=0u+0x00000000u; // 800C3C84
  c->lr=0x800C3C8Cu; f_8029316C(c); // 800C3C88
L_800C3C8C:;
  W32(c->r[28]+0x00000304u,c->r[3]); // 800C3C8C
  c->r[4]=c->r[29]|c->r[29]; // 800C3C90
  c->r[7]=R32(c->r[28]+0x00000308u); // 800C3C94
  c->r[5]=c->r[30]|c->r[30]; // 800C3C98
  c->r[6]=c->r[31]|c->r[31]; // 800C3C9C
  c->r[8]=0u+0x00000001u; // 800C3CA0
  c->r[9]=0u+0x00000000u; // 800C3CA4
  c->lr=0x800C3CACu; f_8027FFF4(c); // 800C3CA8
  W32(c->r[28]+0x00000304u,c->r[3]); // 800C3CAC
L_800C3CB0:;
  c->r[0]=0u+0x00000001u; // 800C3CB0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3CB4
  c->r[6]=c->r[29]|c->r[29]; // 800C3CB8
  c->r[7]=c->r[30]|c->r[30]; // 800C3CBC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3CC0
  c->r[8]=c->r[31]|c->r[31]; // 800C3CC4
  c->r[4]=R32(c->r[28]+0x0000032Cu); // 800C3CC8
  c->r[5]=0u+0x00000010u; // 800C3CCC
  c->r[9]=R32(c->r[28]+0x00000334u); // 800C3CD0
  c->r[10]=0u+0x00000001u; // 800C3CD4
  c->lr=0x800C3CDCu; f_80281A84(c); // 800C3CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3CDC
  W32(c->r[28]+0x00000330u,c->r[3]); // 800C3CE0
  if (crb(c,2)) { goto L_800C3CF0; } // 800C3CE4
  c->lr=0x800C3CECu; f_80295B6C(c); // 800C3CE8
  goto L_800C3D40; // 800C3CEC
L_800C3CF0:;
  c->r[3]=0u+0x00000044u; // 800C3CF0
  c->r[4]=c->r[13]+0xFFFFAF3Au; // 800C3CF4
  c->r[5]=0u+0x00000000u; // 800C3CF8
  c->r[6]=0u+0x00001001u; // 800C3CFC
  c->lr=0x800C3D04u; f_80244D20(c); // 800C3D00
  cmps(c,0,(int32_t)c->r[3],0); // 800C3D04
  if (crb(c,2)) { goto L_800C3D1C; } // 800C3D08
  c->r[5]=R32(c->r[28]+0x0000032Cu); // 800C3D0C
  c->r[4]=0u+0x00000000u; // 800C3D10
  c->r[6]=0u+0x00000010u; // 800C3D14
  c->lr=0x800C3D1Cu; f_8029316C(c); // 800C3D18
L_800C3D1C:;
  W32(c->r[28]+0x00000330u,c->r[3]); // 800C3D1C
  c->r[4]=c->r[29]|c->r[29]; // 800C3D20
  c->r[7]=R32(c->r[28]+0x00000334u); // 800C3D24
  c->r[5]=c->r[30]|c->r[30]; // 800C3D28
  c->r[6]=c->r[31]|c->r[31]; // 800C3D2C
  c->r[8]=0u+0x00000001u; // 800C3D30
  c->r[9]=0u+0x00000000u; // 800C3D34
  c->lr=0x800C3D3Cu; f_8027FFF4(c); // 800C3D38
  W32(c->r[28]+0x00000330u,c->r[3]); // 800C3D3C
L_800C3D40:;
  c->r[4]=R32(c->r[28]+0x00000358u); // 800C3D40
  cmps(c,0,(int32_t)c->r[4],0); // 800C3D44
  if (crb(c,2)) { goto L_800C3DEC; } // 800C3D48
  c->r[0]=0u+0x00000001u; // 800C3D4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3D50
  c->r[6]=c->r[29]|c->r[29]; // 800C3D54
  c->r[7]=c->r[30]|c->r[30]; // 800C3D58
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3D5C
  c->r[8]=c->r[31]|c->r[31]; // 800C3D60
  c->r[9]=R32(c->r[28]+0x00000360u); // 800C3D64
  c->r[5]=0u+0x00000001u; // 800C3D68
  c->r[10]=0u+0x00000001u; // 800C3D6C
  c->lr=0x800C3D74u; f_80281A84(c); // 800C3D70
  cmps(c,0,(int32_t)c->r[3],0); // 800C3D74
  W32(c->r[28]+0x0000035Cu,c->r[3]); // 800C3D78
  if (crb(c,2)) { goto L_800C3D88; } // 800C3D7C
  c->lr=0x800C3D84u; f_80295B6C(c); // 800C3D80
  goto L_800C3DEC; // 800C3D84
L_800C3D88:;
  c->r[3]=R32(c->r[28]+0x00000360u); // 800C3D88
  c->r[4]=c->r[31]|c->r[31]; // 800C3D8C
  c->r[5]=c->r[30]|c->r[30]; // 800C3D90
  c->lr=0x800C3D98u; f_802C0F98(c); // 800C3D94
  c->r[26]=c->r[3]|c->r[3]; // 800C3D98
  c->r[3]=0u+0x00000044u; // 800C3D9C
  c->r[4]=c->r[13]+0xFFFFAF3Fu; // 800C3DA0
  c->r[5]=0u+0x00000000u; // 800C3DA4
  c->r[6]=0u+0x00001001u; // 800C3DA8
  c->lr=0x800C3DB0u; f_80244D20(c); // 800C3DAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C3DB0
  if (crb(c,2)) { goto L_800C3DC8; } // 800C3DB4
  c->r[5]=R32(c->r[28]+0x00000358u); // 800C3DB8
  c->r[4]=c->r[26]|c->r[26]; // 800C3DBC
  c->r[6]=0u+0x00000001u; // 800C3DC0
  c->lr=0x800C3DC8u; f_8029316C(c); // 800C3DC4
L_800C3DC8:;
  W32(c->r[28]+0x0000035Cu,c->r[3]); // 800C3DC8
  c->r[4]=c->r[29]|c->r[29]; // 800C3DCC
  c->r[7]=R32(c->r[28]+0x00000360u); // 800C3DD0
  c->r[5]=c->r[30]|c->r[30]; // 800C3DD4
  c->r[6]=c->r[31]|c->r[31]; // 800C3DD8
  c->r[8]=0u+0x00000001u; // 800C3DDC
  c->r[9]=0u+0x00000000u; // 800C3DE0
  c->lr=0x800C3DE8u; f_8027FFF4(c); // 800C3DE4
  W32(c->r[28]+0x0000035Cu,c->r[3]); // 800C3DE8
L_800C3DEC:;
  c->r[4]=R32(c->r[28]+0x00000364u); // 800C3DEC
  cmps(c,0,(int32_t)c->r[4],0); // 800C3DF0
  if (crb(c,2)) { goto L_800C3E98; } // 800C3DF4
  c->r[0]=0u+0x00000001u; // 800C3DF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3DFC
  c->r[6]=c->r[29]|c->r[29]; // 800C3E00
  c->r[7]=c->r[30]|c->r[30]; // 800C3E04
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3E08
  c->r[8]=c->r[31]|c->r[31]; // 800C3E0C
  c->r[9]=R32(c->r[28]+0x0000036Cu); // 800C3E10
  c->r[5]=0u+0x00000001u; // 800C3E14
  c->r[10]=0u+0x00000001u; // 800C3E18
  c->lr=0x800C3E20u; f_80281A84(c); // 800C3E1C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3E20
  W32(c->r[28]+0x00000368u,c->r[3]); // 800C3E24
  if (crb(c,2)) { goto L_800C3E34; } // 800C3E28
  c->lr=0x800C3E30u; f_80295B6C(c); // 800C3E2C
  goto L_800C3E98; // 800C3E30
L_800C3E34:;
  c->r[3]=R32(c->r[28]+0x0000036Cu); // 800C3E34
  c->r[4]=c->r[31]|c->r[31]; // 800C3E38
  c->r[5]=c->r[30]|c->r[30]; // 800C3E3C
  c->lr=0x800C3E44u; f_802C0F98(c); // 800C3E40
  c->r[26]=c->r[3]|c->r[3]; // 800C3E44
  c->r[3]=0u+0x00000044u; // 800C3E48
  c->r[4]=c->r[13]+0xFFFFAF44u; // 800C3E4C
  c->r[5]=0u+0x00000000u; // 800C3E50
  c->r[6]=0u+0x00001001u; // 800C3E54
  c->lr=0x800C3E5Cu; f_80244D20(c); // 800C3E58
  cmps(c,0,(int32_t)c->r[3],0); // 800C3E5C
  if (crb(c,2)) { goto L_800C3E74; } // 800C3E60
  c->r[5]=R32(c->r[28]+0x00000364u); // 800C3E64
  c->r[4]=c->r[26]|c->r[26]; // 800C3E68
  c->r[6]=0u+0x00000001u; // 800C3E6C
  c->lr=0x800C3E74u; f_8029316C(c); // 800C3E70
L_800C3E74:;
  W32(c->r[28]+0x00000368u,c->r[3]); // 800C3E74
  c->r[4]=c->r[29]|c->r[29]; // 800C3E78
  c->r[7]=R32(c->r[28]+0x0000036Cu); // 800C3E7C
  c->r[5]=c->r[30]|c->r[30]; // 800C3E80
  c->r[6]=c->r[31]|c->r[31]; // 800C3E84
  c->r[8]=0u+0x00000001u; // 800C3E88
  c->r[9]=0u+0x00000000u; // 800C3E8C
  c->lr=0x800C3E94u; f_8027FFF4(c); // 800C3E90
  W32(c->r[28]+0x00000368u,c->r[3]); // 800C3E94
L_800C3E98:;
  c->r[4]=R32(c->r[28]+0x00000370u); // 800C3E98
  cmps(c,0,(int32_t)c->r[4],0); // 800C3E9C
  if (crb(c,2)) { goto L_800C3F44; } // 800C3EA0
  c->r[0]=0u+0x00000001u; // 800C3EA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3EA8
  c->r[6]=c->r[29]|c->r[29]; // 800C3EAC
  c->r[7]=c->r[30]|c->r[30]; // 800C3EB0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3EB4
  c->r[8]=c->r[31]|c->r[31]; // 800C3EB8
  c->r[9]=R32(c->r[28]+0x00000378u); // 800C3EBC
  c->r[5]=0u+0x00000001u; // 800C3EC0
  c->r[10]=0u+0x00000001u; // 800C3EC4
  c->lr=0x800C3ECCu; f_80281A84(c); // 800C3EC8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3ECC
  W32(c->r[28]+0x00000374u,c->r[3]); // 800C3ED0
  if (crb(c,2)) { goto L_800C3EE0; } // 800C3ED4
  c->lr=0x800C3EDCu; f_80295B6C(c); // 800C3ED8
  goto L_800C3F44; // 800C3EDC
L_800C3EE0:;
  c->r[3]=R32(c->r[28]+0x00000378u); // 800C3EE0
  c->r[4]=c->r[31]|c->r[31]; // 800C3EE4
  c->r[5]=c->r[30]|c->r[30]; // 800C3EE8
  c->lr=0x800C3EF0u; f_802C0F98(c); // 800C3EEC
  c->r[26]=c->r[3]|c->r[3]; // 800C3EF0
  c->r[3]=0u+0x00000044u; // 800C3EF4
  c->r[4]=c->r[13]+0xFFFFAF49u; // 800C3EF8
  c->r[5]=0u+0x00000000u; // 800C3EFC
  c->r[6]=0u+0x00001001u; // 800C3F00
  c->lr=0x800C3F08u; f_80244D20(c); // 800C3F04
  cmps(c,0,(int32_t)c->r[3],0); // 800C3F08
  if (crb(c,2)) { goto L_800C3F20; } // 800C3F0C
  c->r[5]=R32(c->r[28]+0x00000370u); // 800C3F10
  c->r[4]=c->r[26]|c->r[26]; // 800C3F14
  c->r[6]=0u+0x00000001u; // 800C3F18
  c->lr=0x800C3F20u; f_8029316C(c); // 800C3F1C
L_800C3F20:;
  W32(c->r[28]+0x00000374u,c->r[3]); // 800C3F20
  c->r[4]=c->r[29]|c->r[29]; // 800C3F24
  c->r[7]=R32(c->r[28]+0x00000378u); // 800C3F28
  c->r[5]=c->r[30]|c->r[30]; // 800C3F2C
  c->r[6]=c->r[31]|c->r[31]; // 800C3F30
  c->r[8]=0u+0x00000001u; // 800C3F34
  c->r[9]=0u+0x00000000u; // 800C3F38
  c->lr=0x800C3F40u; f_8027FFF4(c); // 800C3F3C
  W32(c->r[28]+0x00000374u,c->r[3]); // 800C3F40
L_800C3F44:;
  c->r[4]=R32(c->r[28]+0x0000037Cu); // 800C3F44
  cmps(c,0,(int32_t)c->r[4],0); // 800C3F48
  if (crb(c,2)) { goto L_800C4030; } // 800C3F4C
  c->r[0]=0u+0x00000000u; // 800C3F50
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C3F54
  c->r[6]=c->r[29]|c->r[29]; // 800C3F58
  c->r[7]=c->r[30]|c->r[30]; // 800C3F5C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C3F60
  c->r[8]=c->r[31]|c->r[31]; // 800C3F64
  c->r[9]=R32(c->r[28]+0x00000384u); // 800C3F68
  c->r[5]=0u+0x00000001u; // 800C3F6C
  c->r[10]=0u+0x00000001u; // 800C3F70
  c->lr=0x800C3F78u; f_80281A84(c); // 800C3F74
  cmps(c,0,(int32_t)c->r[3],0); // 800C3F78
  W32(c->r[28]+0x00000380u,c->r[3]); // 800C3F7C
  if (crb(c,2)) { goto L_800C3F8C; } // 800C3F80
  c->lr=0x800C3F88u; f_80295B6C(c); // 800C3F84
  goto L_800C4030; // 800C3F88
L_800C3F8C:;
  c->r[3]=R32(c->r[28]+0x00000384u); // 800C3F8C
  c->r[4]=c->r[31]|c->r[31]; // 800C3F90
  c->r[5]=c->r[30]|c->r[30]; // 800C3F94
  c->lr=0x800C3F9Cu; f_802C0F98(c); // 800C3F98
  c->r[26]=c->r[3]|c->r[3]; // 800C3F9C
  c->r[3]=0u+0x000000DCu; // 800C3FA0
  c->r[4]=c->r[13]+0xFFFFAF4Eu; // 800C3FA4
  c->r[5]=0u+0x00000000u; // 800C3FA8
  c->r[6]=0u+0x00001001u; // 800C3FAC
  c->lr=0x800C3FB4u; f_80244D20(c); // 800C3FB0
  cmps(c,0,(int32_t)c->r[3],0); // 800C3FB4
  if (crb(c,2)) { goto L_800C3FD4; } // 800C3FB8
  c->r[7]=0u+0x28080000u; // 800C3FBC
  c->r[5]=R32(c->r[28]+0x0000037Cu); // 800C3FC0
  c->r[4]=c->r[26]|c->r[26]; // 800C3FC4
  c->r[6]=0u+0x00000000u; // 800C3FC8
  c->r[7]=c->r[7]+0x00000080u; // 800C3FCC
  c->lr=0x800C3FD4u; f_80283710(c); // 800C3FD0
L_800C3FD4:;
  W32(c->r[28]+0x00000380u,c->r[3]); // 800C3FD4
  c->r[26]=0u+0x00000000u; // 800C3FD8
  c->r[27]=0u+0x00000000u; // 800C3FDC
  goto L_800C4000; // 800C3FE0
L_800C3FE4:;
  c->r[5]=c->r[28]+c->r[27]; // 800C3FE4
  c->r[3]=R32(c->r[28]+0x00000380u); // 800C3FE8
  c->r[4]=R32(c->r[5]+0x000003ACu); // 800C3FEC
  {uint32_t ea=c->r[5]+0x000003C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3FF0
  c->lr=0x800C3FF8u; f_802840CC(c); // 800C3FF4
  c->r[26]=c->r[26]+0x00000001u; // 800C3FF8
  c->r[27]=c->r[27]+0x00000004u; // 800C3FFC
L_800C4000:;
  c->r[0]=R32(c->r[28]+0x000003A8u); // 800C4000
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C4004
  if (crb(c,0)) { IRQCHK(c); goto L_800C3FE4; } // 800C4008
  c->r[3]=R32(c->r[28]+0x00000380u); // 800C400C
  c->r[4]=c->r[29]|c->r[29]; // 800C4010
  c->r[7]=R32(c->r[28]+0x00000384u); // 800C4014
  c->r[5]=c->r[30]|c->r[30]; // 800C4018
  c->r[6]=c->r[31]|c->r[31]; // 800C401C
  c->r[8]=0u+0x00000001u; // 800C4020
  c->r[9]=0u+0x00000000u; // 800C4024
  c->lr=0x800C402Cu; f_8027FFF4(c); // 800C4028
  W32(c->r[28]+0x00000380u,c->r[3]); // 800C402C
L_800C4030:;
  c->r[4]=R32(c->r[28]+0x000003D4u); // 800C4030
  cmps(c,0,(int32_t)c->r[4],0); // 800C4034
  if (crb(c,2)) { goto L_800C411C; } // 800C4038
  c->r[0]=0u+0x00000000u; // 800C403C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C4040
  c->r[6]=c->r[29]|c->r[29]; // 800C4044
  c->r[7]=c->r[30]|c->r[30]; // 800C4048
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C404C
  c->r[8]=c->r[31]|c->r[31]; // 800C4050
  c->r[9]=R32(c->r[28]+0x000003DCu); // 800C4054
  c->r[5]=0u+0x00000001u; // 800C4058
  c->r[10]=0u+0x00000001u; // 800C405C
  c->lr=0x800C4064u; f_80281A84(c); // 800C4060
  cmps(c,0,(int32_t)c->r[3],0); // 800C4064
  W32(c->r[28]+0x000003D8u,c->r[3]); // 800C4068
  if (crb(c,2)) { goto L_800C4078; } // 800C406C
  c->lr=0x800C4074u; f_80295B6C(c); // 800C4070
  goto L_800C411C; // 800C4074
L_800C4078:;
  c->r[3]=R32(c->r[28]+0x000003DCu); // 800C4078
  c->r[4]=c->r[31]|c->r[31]; // 800C407C
  c->r[5]=c->r[30]|c->r[30]; // 800C4080
  c->lr=0x800C4088u; f_802C0F98(c); // 800C4084
  c->r[26]=c->r[3]|c->r[3]; // 800C4088
  c->r[3]=0u+0x000000DCu; // 800C408C
  c->r[4]=c->r[13]+0xFFFFAF53u; // 800C4090
  c->r[5]=0u+0x00000000u; // 800C4094
  c->r[6]=0u+0x00001001u; // 800C4098
  c->lr=0x800C40A0u; f_80244D20(c); // 800C409C
  cmps(c,0,(int32_t)c->r[3],0); // 800C40A0
  if (crb(c,2)) { goto L_800C40C0; } // 800C40A4
  c->r[7]=0u+0x28080000u; // 800C40A8
  c->r[5]=R32(c->r[28]+0x000003D4u); // 800C40AC
  c->r[4]=c->r[26]|c->r[26]; // 800C40B0
  c->r[6]=0u+0x00000000u; // 800C40B4
  c->r[7]=c->r[7]+0x00000080u; // 800C40B8
  c->lr=0x800C40C0u; f_80283710(c); // 800C40BC
L_800C40C0:;
  W32(c->r[28]+0x000003D8u,c->r[3]); // 800C40C0
  c->r[26]=0u+0x00000000u; // 800C40C4
  c->r[27]=0u+0x00000000u; // 800C40C8
  goto L_800C40EC; // 800C40CC
L_800C40D0:;
  c->r[5]=c->r[28]+c->r[27]; // 800C40D0
  c->r[3]=R32(c->r[28]+0x000003D8u); // 800C40D4
  c->r[4]=R32(c->r[5]+0x00000404u); // 800C40D8
  {uint32_t ea=c->r[5]+0x00000418u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C40DC
  c->lr=0x800C40E4u; f_802840CC(c); // 800C40E0
  c->r[26]=c->r[26]+0x00000001u; // 800C40E4
  c->r[27]=c->r[27]+0x00000004u; // 800C40E8
L_800C40EC:;
  c->r[0]=R32(c->r[28]+0x00000400u); // 800C40EC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C40F0
  if (crb(c,0)) { IRQCHK(c); goto L_800C40D0; } // 800C40F4
  c->r[3]=R32(c->r[28]+0x000003D8u); // 800C40F8
  c->r[4]=c->r[29]|c->r[29]; // 800C40FC
  c->r[7]=R32(c->r[28]+0x000003DCu); // 800C4100
  c->r[5]=c->r[30]|c->r[30]; // 800C4104
  c->r[6]=c->r[31]|c->r[31]; // 800C4108
  c->r[8]=0u+0x00000001u; // 800C410C
  c->r[9]=0u+0x00000000u; // 800C4110
  c->lr=0x800C4118u; f_8027FFF4(c); // 800C4114
  W32(c->r[28]+0x000003D8u,c->r[3]); // 800C4118
L_800C411C:;
  c->r[4]=R32(c->r[28]+0x0000042Cu); // 800C411C
  cmps(c,0,(int32_t)c->r[4],0); // 800C4120
  if (crb(c,2)) { goto L_800C4208; } // 800C4124
  c->r[0]=0u+0x00000000u; // 800C4128
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C412C
  c->r[6]=c->r[29]|c->r[29]; // 800C4130
  c->r[7]=c->r[30]|c->r[30]; // 800C4134
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C4138
  c->r[8]=c->r[31]|c->r[31]; // 800C413C
  c->r[9]=R32(c->r[28]+0x00000434u); // 800C4140
  c->r[5]=0u+0x00000001u; // 800C4144
  c->r[10]=0u+0x00000001u; // 800C4148
  c->lr=0x800C4150u; f_80281A84(c); // 800C414C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4150
  W32(c->r[28]+0x00000430u,c->r[3]); // 800C4154
  if (crb(c,2)) { goto L_800C4164; } // 800C4158
  c->lr=0x800C4160u; f_80295B6C(c); // 800C415C
  goto L_800C4208; // 800C4160
L_800C4164:;
  c->r[3]=R32(c->r[28]+0x00000434u); // 800C4164
  c->r[4]=c->r[31]|c->r[31]; // 800C4168
  c->r[5]=c->r[30]|c->r[30]; // 800C416C
  c->lr=0x800C4174u; f_802C0F98(c); // 800C4170
  c->r[26]=c->r[3]|c->r[3]; // 800C4174
  c->r[3]=0u+0x000000DCu; // 800C4178
  c->r[4]=c->r[13]+0xFFFFAF58u; // 800C417C
  c->r[5]=0u+0x00000000u; // 800C4180
  c->r[6]=0u+0x00001001u; // 800C4184
  c->lr=0x800C418Cu; f_80244D20(c); // 800C4188
  cmps(c,0,(int32_t)c->r[3],0); // 800C418C
  if (crb(c,2)) { goto L_800C41AC; } // 800C4190
  c->r[7]=0u+0x28080000u; // 800C4194
  c->r[5]=R32(c->r[28]+0x0000042Cu); // 800C4198
  c->r[4]=c->r[26]|c->r[26]; // 800C419C
  c->r[6]=0u+0x00000000u; // 800C41A0
  c->r[7]=c->r[7]+0x00000080u; // 800C41A4
  c->lr=0x800C41ACu; f_80283710(c); // 800C41A8
L_800C41AC:;
  W32(c->r[28]+0x00000430u,c->r[3]); // 800C41AC
  c->r[26]=0u+0x00000000u; // 800C41B0
  c->r[27]=0u+0x00000000u; // 800C41B4
  goto L_800C41D8; // 800C41B8
L_800C41BC:;
  c->r[5]=c->r[28]+c->r[27]; // 800C41BC
  c->r[3]=R32(c->r[28]+0x00000430u); // 800C41C0
  c->r[4]=R32(c->r[5]+0x0000045Cu); // 800C41C4
  {uint32_t ea=c->r[5]+0x00000470u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C41C8
  c->lr=0x800C41D0u; f_802840CC(c); // 800C41CC
  c->r[26]=c->r[26]+0x00000001u; // 800C41D0
  c->r[27]=c->r[27]+0x00000004u; // 800C41D4
L_800C41D8:;
  c->r[0]=R32(c->r[28]+0x00000458u); // 800C41D8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C41DC
  if (crb(c,0)) { IRQCHK(c); goto L_800C41BC; } // 800C41E0
  c->r[3]=R32(c->r[28]+0x00000430u); // 800C41E4
  c->r[4]=c->r[29]|c->r[29]; // 800C41E8
  c->r[7]=R32(c->r[28]+0x00000434u); // 800C41EC
  c->r[5]=c->r[30]|c->r[30]; // 800C41F0
  c->r[6]=c->r[31]|c->r[31]; // 800C41F4
  c->r[8]=0u+0x00000001u; // 800C41F8
  c->r[9]=0u+0x00000000u; // 800C41FC
  c->lr=0x800C4204u; f_8027FFF4(c); // 800C4200
  W32(c->r[28]+0x00000430u,c->r[3]); // 800C4204
L_800C4208:;
  c->r[4]=R32(c->r[28]+0x00000484u); // 800C4208
  cmps(c,0,(int32_t)c->r[4],0); // 800C420C
  if (crb(c,2)) { goto L_800C42F4; } // 800C4210
  c->r[0]=0u+0x00000000u; // 800C4214
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C4218
  c->r[6]=c->r[29]|c->r[29]; // 800C421C
  c->r[7]=c->r[30]|c->r[30]; // 800C4220
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C4224
  c->r[8]=c->r[31]|c->r[31]; // 800C4228
  c->r[9]=R32(c->r[28]+0x0000048Cu); // 800C422C
  c->r[5]=0u+0x00000001u; // 800C4230
  c->r[10]=0u+0x00000001u; // 800C4234
  c->lr=0x800C423Cu; f_80281A84(c); // 800C4238
  cmps(c,0,(int32_t)c->r[3],0); // 800C423C
  W32(c->r[28]+0x00000488u,c->r[3]); // 800C4240
  if (crb(c,2)) { goto L_800C4250; } // 800C4244
  c->lr=0x800C424Cu; f_80295B6C(c); // 800C4248
  goto L_800C42F4; // 800C424C
L_800C4250:;
  c->r[3]=R32(c->r[28]+0x0000048Cu); // 800C4250
  c->r[4]=c->r[31]|c->r[31]; // 800C4254
  c->r[5]=c->r[30]|c->r[30]; // 800C4258
  c->lr=0x800C4260u; f_802C0F98(c); // 800C425C
  c->r[26]=c->r[3]|c->r[3]; // 800C4260
  c->r[3]=0u+0x000000DCu; // 800C4264
  c->r[4]=c->r[13]+0xFFFFAF5Du; // 800C4268
  c->r[5]=0u+0x00000000u; // 800C426C
  c->r[6]=0u+0x00001001u; // 800C4270
  c->lr=0x800C4278u; f_80244D20(c); // 800C4274
  cmps(c,0,(int32_t)c->r[3],0); // 800C4278
  if (crb(c,2)) { goto L_800C4298; } // 800C427C
  c->r[7]=0u+0x28080000u; // 800C4280
  c->r[5]=R32(c->r[28]+0x00000484u); // 800C4284
  c->r[4]=c->r[26]|c->r[26]; // 800C4288
  c->r[6]=0u+0x00000000u; // 800C428C
  c->r[7]=c->r[7]+0x00000080u; // 800C4290
  c->lr=0x800C4298u; f_80283710(c); // 800C4294
L_800C4298:;
  W32(c->r[28]+0x00000488u,c->r[3]); // 800C4298
  c->r[26]=0u+0x00000000u; // 800C429C
  c->r[27]=0u+0x00000000u; // 800C42A0
  goto L_800C42C4; // 800C42A4
L_800C42A8:;
  c->r[5]=c->r[28]+c->r[27]; // 800C42A8
  c->r[3]=R32(c->r[28]+0x00000488u); // 800C42AC
  c->r[4]=R32(c->r[5]+0x00000494u); // 800C42B0
  {uint32_t ea=c->r[5]+0x000004A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C42B4
  c->lr=0x800C42BCu; f_802840CC(c); // 800C42B8
  c->r[26]=c->r[26]+0x00000001u; // 800C42BC
  c->r[27]=c->r[27]+0x00000004u; // 800C42C0
L_800C42C4:;
  c->r[0]=R32(c->r[28]+0x00000490u); // 800C42C4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C42C8
  if (crb(c,0)) { IRQCHK(c); goto L_800C42A8; } // 800C42CC
  c->r[3]=R32(c->r[28]+0x00000488u); // 800C42D0
  c->r[4]=c->r[29]|c->r[29]; // 800C42D4
  c->r[7]=R32(c->r[28]+0x0000048Cu); // 800C42D8
  c->r[5]=c->r[30]|c->r[30]; // 800C42DC
  c->r[6]=c->r[31]|c->r[31]; // 800C42E0
  c->r[8]=0u+0x00000001u; // 800C42E4
  c->r[9]=0u+0x00000000u; // 800C42E8
  c->lr=0x800C42F0u; f_8027FFF4(c); // 800C42EC
  W32(c->r[28]+0x00000488u,c->r[3]); // 800C42F0
L_800C42F4:;
  c->r[4]=R32(c->r[28]+0x000004BCu); // 800C42F4
  cmps(c,0,(int32_t)c->r[4],0); // 800C42F8
  if (crb(c,2)) { goto L_800C43E0; } // 800C42FC
  c->r[0]=0u+0x00000000u; // 800C4300
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C4304
  c->r[6]=c->r[29]|c->r[29]; // 800C4308
  c->r[7]=c->r[30]|c->r[30]; // 800C430C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C4310
  c->r[8]=c->r[31]|c->r[31]; // 800C4314
  c->r[9]=R32(c->r[28]+0x000004C4u); // 800C4318
  c->r[5]=0u+0x00000001u; // 800C431C
  c->r[10]=0u+0x00000001u; // 800C4320
  c->lr=0x800C4328u; f_80281A84(c); // 800C4324
  cmps(c,0,(int32_t)c->r[3],0); // 800C4328
  W32(c->r[28]+0x000004C0u,c->r[3]); // 800C432C
  if (crb(c,2)) { goto L_800C433C; } // 800C4330
  c->lr=0x800C4338u; f_80295B6C(c); // 800C4334
  goto L_800C43E0; // 800C4338
L_800C433C:;
  c->r[3]=R32(c->r[28]+0x000004C4u); // 800C433C
  c->r[4]=c->r[31]|c->r[31]; // 800C4340
  c->r[5]=c->r[30]|c->r[30]; // 800C4344
  c->lr=0x800C434Cu; f_802C0F98(c); // 800C4348
  c->r[26]=c->r[3]|c->r[3]; // 800C434C
  c->r[3]=0u+0x000000DCu; // 800C4350
  c->r[4]=c->r[13]+0xFFFFAF62u; // 800C4354
  c->r[5]=0u+0x00000000u; // 800C4358
  c->r[6]=0u+0x00001001u; // 800C435C
  c->lr=0x800C4364u; f_80244D20(c); // 800C4360
  cmps(c,0,(int32_t)c->r[3],0); // 800C4364
  if (crb(c,2)) { goto L_800C4384; } // 800C4368
  c->r[7]=0u+0x28080000u; // 800C436C
  c->r[5]=R32(c->r[28]+0x000004BCu); // 800C4370
  c->r[4]=c->r[26]|c->r[26]; // 800C4374
  c->r[6]=0u+0x00000000u; // 800C4378
  c->r[7]=c->r[7]+0x00000080u; // 800C437C
  c->lr=0x800C4384u; f_80283710(c); // 800C4380
L_800C4384:;
  W32(c->r[28]+0x000004C0u,c->r[3]); // 800C4384
  c->r[26]=0u+0x00000000u; // 800C4388
  c->r[27]=0u+0x00000000u; // 800C438C
  goto L_800C43B0; // 800C4390
L_800C4394:;
  c->r[5]=c->r[28]+c->r[27]; // 800C4394
  c->r[3]=R32(c->r[28]+0x000004C0u); // 800C4398
  c->r[4]=R32(c->r[5]+0x000004CCu); // 800C439C
  {uint32_t ea=c->r[5]+0x000004E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C43A0
  c->lr=0x800C43A8u; f_802840CC(c); // 800C43A4
  c->r[26]=c->r[26]+0x00000001u; // 800C43A8
  c->r[27]=c->r[27]+0x00000004u; // 800C43AC
L_800C43B0:;
  c->r[0]=R32(c->r[28]+0x000004C8u); // 800C43B0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C43B4
  if (crb(c,0)) { IRQCHK(c); goto L_800C4394; } // 800C43B8
  c->r[3]=R32(c->r[28]+0x000004C0u); // 800C43BC
  c->r[4]=c->r[29]|c->r[29]; // 800C43C0
  c->r[7]=R32(c->r[28]+0x000004C4u); // 800C43C4
  c->r[5]=c->r[30]|c->r[30]; // 800C43C8
  c->r[6]=c->r[31]|c->r[31]; // 800C43CC
  c->r[8]=0u+0x00000001u; // 800C43D0
  c->r[9]=0u+0x00000000u; // 800C43D4
  c->lr=0x800C43DCu; f_8027FFF4(c); // 800C43D8
  W32(c->r[28]+0x000004C0u,c->r[3]); // 800C43DC
L_800C43E0:;
  c->r[4]=R32(c->r[28]+0x000004F4u); // 800C43E0
  cmps(c,0,(int32_t)c->r[4],0); // 800C43E4
  if (crb(c,2)) { goto L_800C44CC; } // 800C43E8
  c->r[0]=0u+0x00000000u; // 800C43EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C43F0
  c->r[6]=c->r[29]|c->r[29]; // 800C43F4
  c->r[7]=c->r[30]|c->r[30]; // 800C43F8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C43FC
  c->r[8]=c->r[31]|c->r[31]; // 800C4400
  c->r[9]=R32(c->r[28]+0x000004FCu); // 800C4404
  c->r[5]=0u+0x00000001u; // 800C4408
  c->r[10]=0u+0x00000001u; // 800C440C
  c->lr=0x800C4414u; f_80281A84(c); // 800C4410
  cmps(c,0,(int32_t)c->r[3],0); // 800C4414
  W32(c->r[28]+0x000004F8u,c->r[3]); // 800C4418
  if (crb(c,2)) { goto L_800C4428; } // 800C441C
  c->lr=0x800C4424u; f_80295B6C(c); // 800C4420
  goto L_800C44CC; // 800C4424
L_800C4428:;
  c->r[3]=R32(c->r[28]+0x000004FCu); // 800C4428
  c->r[4]=c->r[31]|c->r[31]; // 800C442C
  c->r[5]=c->r[30]|c->r[30]; // 800C4430
  c->lr=0x800C4438u; f_802C0F98(c); // 800C4434
  c->r[26]=c->r[3]|c->r[3]; // 800C4438
  c->r[3]=0u+0x000000DCu; // 800C443C
  c->r[4]=c->r[13]+0xFFFFAF67u; // 800C4440
  c->r[5]=0u+0x00000000u; // 800C4444
  c->r[6]=0u+0x00001001u; // 800C4448
  c->lr=0x800C4450u; f_80244D20(c); // 800C444C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4450
  if (crb(c,2)) { goto L_800C4470; } // 800C4454
  c->r[7]=0u+0x28080000u; // 800C4458
  c->r[5]=R32(c->r[28]+0x000004F4u); // 800C445C
  c->r[4]=c->r[26]|c->r[26]; // 800C4460
  c->r[6]=0u+0x00000000u; // 800C4464
  c->r[7]=c->r[7]+0x00000080u; // 800C4468
  c->lr=0x800C4470u; f_80283710(c); // 800C446C
L_800C4470:;
  W32(c->r[28]+0x000004F8u,c->r[3]); // 800C4470
  c->r[26]=0u+0x00000000u; // 800C4474
  c->r[27]=0u+0x00000000u; // 800C4478
  goto L_800C449C; // 800C447C
L_800C4480:;
  c->r[5]=c->r[28]+c->r[27]; // 800C4480
  c->r[3]=R32(c->r[28]+0x000004F8u); // 800C4484
  c->r[4]=R32(c->r[5]+0x00000504u); // 800C4488
  {uint32_t ea=c->r[5]+0x00000518u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C448C
  c->lr=0x800C4494u; f_802840CC(c); // 800C4490
  c->r[26]=c->r[26]+0x00000001u; // 800C4494
  c->r[27]=c->r[27]+0x00000004u; // 800C4498
L_800C449C:;
  c->r[0]=R32(c->r[28]+0x00000500u); // 800C449C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C44A0
  if (crb(c,0)) { IRQCHK(c); goto L_800C4480; } // 800C44A4
  c->r[3]=R32(c->r[28]+0x000004F8u); // 800C44A8
  c->r[4]=c->r[29]|c->r[29]; // 800C44AC
  c->r[7]=R32(c->r[28]+0x000004FCu); // 800C44B0
  c->r[5]=c->r[30]|c->r[30]; // 800C44B4
  c->r[6]=c->r[31]|c->r[31]; // 800C44B8
  c->r[8]=0u+0x00000001u; // 800C44BC
  c->r[9]=0u+0x00000000u; // 800C44C0
  c->lr=0x800C44C8u; f_8027FFF4(c); // 800C44C4
  W32(c->r[28]+0x000004F8u,c->r[3]); // 800C44C8
L_800C44CC:;
  c->r[11]=c->r[1]+0x00000030u; // 800C44CC
  c->lr=0x800C44D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C44D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C44D4
  c->lr=c->r[0]; // 800C44D8
  c->r[1]=c->r[1]+0x00000030u; // 800C44DC
  return; // 800C44E0
}

// fn_800C44E4
void f_800C44E4(Ctx* __restrict c) {
  trace_call(0x800C44E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C44E4
  c->r[0]=c->lr; // 800C44E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C44EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C44F0
  c->r[31]=c->r[3]|c->r[3]; // 800C44F4
  c->r[0]=R32(c->r[3]+0x0000052Cu); // 800C44F8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800C44FC
  W32(c->r[3]+0x0000052Cu,c->r[0]); // 800C4500
  if (!crb(c,2)) { goto L_800C486C; } // 800C4504
  c->lr=0x800C450Cu; f_802B11D0(c); // 800C4508
  c->r[3]=R32(c->r[31]+0x00000020u); // 800C450C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4510
  if (crb(c,2)) { goto L_800C4524; } // 800C4514
  c->lr=0x800C451Cu; f_80295B7C(c); // 800C4518
  c->r[0]=0u+0x00000000u; // 800C451C
  W32(c->r[31]+0x00000020u,c->r[0]); // 800C4520
L_800C4524:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800C4524
  cmps(c,0,(int32_t)c->r[3],0); // 800C4528
  if (crb(c,2)) { goto L_800C453C; } // 800C452C
  c->lr=0x800C4534u; f_80295B7C(c); // 800C4530
  c->r[0]=0u+0x00000000u; // 800C4534
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800C4538
L_800C453C:;
  c->r[3]=R32(c->r[31]+0x00000058u); // 800C453C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4540
  if (crb(c,2)) { goto L_800C4554; } // 800C4544
  c->lr=0x800C454Cu; f_80295B7C(c); // 800C4548
  c->r[0]=0u+0x00000000u; // 800C454C
  W32(c->r[31]+0x00000058u,c->r[0]); // 800C4550
L_800C4554:;
  c->r[3]=R32(c->r[31]+0x00000064u); // 800C4554
  cmps(c,0,(int32_t)c->r[3],0); // 800C4558
  if (crb(c,2)) { goto L_800C456C; } // 800C455C
  c->lr=0x800C4564u; f_80295B7C(c); // 800C4560
  c->r[0]=0u+0x00000000u; // 800C4564
  W32(c->r[31]+0x00000064u,c->r[0]); // 800C4568
L_800C456C:;
  c->r[3]=R32(c->r[31]+0x00000070u); // 800C456C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4570
  if (crb(c,2)) { goto L_800C4584; } // 800C4574
  c->lr=0x800C457Cu; f_80295B7C(c); // 800C4578
  c->r[0]=0u+0x00000000u; // 800C457C
  W32(c->r[31]+0x00000070u,c->r[0]); // 800C4580
L_800C4584:;
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 800C4584
  cmps(c,0,(int32_t)c->r[3],0); // 800C4588
  if (crb(c,2)) { goto L_800C459C; } // 800C458C
  c->lr=0x800C4594u; f_80295B7C(c); // 800C4590
  c->r[0]=0u+0x00000000u; // 800C4594
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 800C4598
L_800C459C:;
  c->r[3]=R32(c->r[31]+0x000000C8u); // 800C459C
  cmps(c,0,(int32_t)c->r[3],0); // 800C45A0
  if (crb(c,2)) { goto L_800C45B4; } // 800C45A4
  c->lr=0x800C45ACu; f_80295B7C(c); // 800C45A8
  c->r[0]=0u+0x00000000u; // 800C45AC
  W32(c->r[31]+0x000000C8u,c->r[0]); // 800C45B0
L_800C45B4:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 800C45B4
  cmps(c,0,(int32_t)c->r[3],0); // 800C45B8
  if (crb(c,2)) { goto L_800C45CC; } // 800C45BC
  c->lr=0x800C45C4u; f_80295B7C(c); // 800C45C0
  c->r[0]=0u+0x00000000u; // 800C45C4
  W32(c->r[31]+0x000000D4u,c->r[0]); // 800C45C8
L_800C45CC:;
  c->r[3]=R32(c->r[31]+0x0000010Cu); // 800C45CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C45D0
  if (crb(c,2)) { goto L_800C45E4; } // 800C45D4
  c->lr=0x800C45DCu; f_80295B7C(c); // 800C45D8
  c->r[0]=0u+0x00000000u; // 800C45DC
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 800C45E0
L_800C45E4:;
  c->r[3]=R32(c->r[31]+0x00000164u); // 800C45E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C45E8
  if (crb(c,2)) { goto L_800C45FC; } // 800C45EC
  c->lr=0x800C45F4u; f_80295B7C(c); // 800C45F0
  c->r[0]=0u+0x00000000u; // 800C45F4
  W32(c->r[31]+0x00000164u,c->r[0]); // 800C45F8
L_800C45FC:;
  c->r[3]=R32(c->r[31]+0x00000170u); // 800C45FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C4600
  if (crb(c,2)) { goto L_800C4614; } // 800C4604
  c->lr=0x800C460Cu; f_80295B7C(c); // 800C4608
  c->r[0]=0u+0x00000000u; // 800C460C
  W32(c->r[31]+0x00000170u,c->r[0]); // 800C4610
L_800C4614:;
  c->r[3]=R32(c->r[31]+0x0000017Cu); // 800C4614
  cmps(c,0,(int32_t)c->r[3],0); // 800C4618
  if (crb(c,2)) { goto L_800C462C; } // 800C461C
  c->lr=0x800C4624u; f_80295B7C(c); // 800C4620
  c->r[0]=0u+0x00000000u; // 800C4624
  W32(c->r[31]+0x0000017Cu,c->r[0]); // 800C4628
L_800C462C:;
  c->r[3]=R32(c->r[31]+0x00000188u); // 800C462C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4630
  if (crb(c,2)) { goto L_800C4644; } // 800C4634
  c->lr=0x800C463Cu; f_80295B7C(c); // 800C4638
  c->r[0]=0u+0x00000000u; // 800C463C
  W32(c->r[31]+0x00000188u,c->r[0]); // 800C4640
L_800C4644:;
  c->r[3]=R32(c->r[31]+0x000001B4u); // 800C4644
  cmps(c,0,(int32_t)c->r[3],0); // 800C4648
  if (crb(c,2)) { goto L_800C465C; } // 800C464C
  c->lr=0x800C4654u; f_80295B7C(c); // 800C4650
  c->r[0]=0u+0x00000000u; // 800C4654
  W32(c->r[31]+0x000001B4u,c->r[0]); // 800C4658
L_800C465C:;
  c->r[3]=R32(c->r[31]+0x000001E0u); // 800C465C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4660
  if (crb(c,2)) { goto L_800C4674; } // 800C4664
  c->lr=0x800C466Cu; f_80295B7C(c); // 800C4668
  c->r[0]=0u+0x00000000u; // 800C466C
  W32(c->r[31]+0x000001E0u,c->r[0]); // 800C4670
L_800C4674:;
  c->r[3]=R32(c->r[31]+0x0000020Cu); // 800C4674
  cmps(c,0,(int32_t)c->r[3],0); // 800C4678
  if (crb(c,2)) { goto L_800C468C; } // 800C467C
  c->lr=0x800C4684u; f_80295B7C(c); // 800C4680
  c->r[0]=0u+0x00000000u; // 800C4684
  W32(c->r[31]+0x0000020Cu,c->r[0]); // 800C4688
L_800C468C:;
  c->r[3]=R32(c->r[31]+0x00000218u); // 800C468C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4690
  if (crb(c,2)) { goto L_800C46A4; } // 800C4694
  c->lr=0x800C469Cu; f_80295B7C(c); // 800C4698
  c->r[0]=0u+0x00000000u; // 800C469C
  W32(c->r[31]+0x00000218u,c->r[0]); // 800C46A0
L_800C46A4:;
  c->r[3]=R32(c->r[31]+0x00000224u); // 800C46A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C46A8
  if (crb(c,2)) { goto L_800C46BC; } // 800C46AC
  c->lr=0x800C46B4u; f_80295B7C(c); // 800C46B0
  c->r[0]=0u+0x00000000u; // 800C46B4
  W32(c->r[31]+0x00000224u,c->r[0]); // 800C46B8
L_800C46BC:;
  c->r[3]=R32(c->r[31]+0x00000230u); // 800C46BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C46C0
  if (crb(c,2)) { goto L_800C46D4; } // 800C46C4
  c->lr=0x800C46CCu; f_80295B7C(c); // 800C46C8
  c->r[0]=0u+0x00000000u; // 800C46CC
  W32(c->r[31]+0x00000230u,c->r[0]); // 800C46D0
L_800C46D4:;
  c->r[3]=R32(c->r[31]+0x0000023Cu); // 800C46D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C46D8
  if (crb(c,2)) { goto L_800C46EC; } // 800C46DC
  c->lr=0x800C46E4u; f_80295B7C(c); // 800C46E0
  c->r[0]=0u+0x00000000u; // 800C46E4
  W32(c->r[31]+0x0000023Cu,c->r[0]); // 800C46E8
L_800C46EC:;
  c->r[3]=R32(c->r[31]+0x00000248u); // 800C46EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C46F0
  if (crb(c,2)) { goto L_800C4704; } // 800C46F4
  c->lr=0x800C46FCu; f_80295B7C(c); // 800C46F8
  c->r[0]=0u+0x00000000u; // 800C46FC
  W32(c->r[31]+0x00000248u,c->r[0]); // 800C4700
L_800C4704:;
  c->r[3]=R32(c->r[31]+0x00000254u); // 800C4704
  cmps(c,0,(int32_t)c->r[3],0); // 800C4708
  if (crb(c,2)) { goto L_800C471C; } // 800C470C
  c->lr=0x800C4714u; f_80295B7C(c); // 800C4710
  c->r[0]=0u+0x00000000u; // 800C4714
  W32(c->r[31]+0x00000254u,c->r[0]); // 800C4718
L_800C471C:;
  c->r[3]=R32(c->r[31]+0x00000280u); // 800C471C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4720
  if (crb(c,2)) { goto L_800C4734; } // 800C4724
  c->lr=0x800C472Cu; f_80295B7C(c); // 800C4728
  c->r[0]=0u+0x00000000u; // 800C472C
  W32(c->r[31]+0x00000280u,c->r[0]); // 800C4730
L_800C4734:;
  c->r[3]=R32(c->r[31]+0x000002ACu); // 800C4734
  cmps(c,0,(int32_t)c->r[3],0); // 800C4738
  if (crb(c,2)) { goto L_800C474C; } // 800C473C
  c->lr=0x800C4744u; f_80295B7C(c); // 800C4740
  c->r[0]=0u+0x00000000u; // 800C4744
  W32(c->r[31]+0x000002ACu,c->r[0]); // 800C4748
L_800C474C:;
  c->r[3]=R32(c->r[31]+0x000002D8u); // 800C474C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4750
  if (crb(c,2)) { goto L_800C4764; } // 800C4754
  c->lr=0x800C475Cu; f_80295B7C(c); // 800C4758
  c->r[0]=0u+0x00000000u; // 800C475C
  W32(c->r[31]+0x000002D8u,c->r[0]); // 800C4760
L_800C4764:;
  c->r[3]=R32(c->r[31]+0x00000304u); // 800C4764
  cmps(c,0,(int32_t)c->r[3],0); // 800C4768
  if (crb(c,2)) { goto L_800C477C; } // 800C476C
  c->lr=0x800C4774u; f_80295B7C(c); // 800C4770
  c->r[0]=0u+0x00000000u; // 800C4774
  W32(c->r[31]+0x00000304u,c->r[0]); // 800C4778
L_800C477C:;
  c->r[3]=R32(c->r[31]+0x00000330u); // 800C477C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4780
  if (crb(c,2)) { goto L_800C4794; } // 800C4784
  c->lr=0x800C478Cu; f_80295B7C(c); // 800C4788
  c->r[0]=0u+0x00000000u; // 800C478C
  W32(c->r[31]+0x00000330u,c->r[0]); // 800C4790
L_800C4794:;
  c->r[3]=R32(c->r[31]+0x0000035Cu); // 800C4794
  cmps(c,0,(int32_t)c->r[3],0); // 800C4798
  if (crb(c,2)) { goto L_800C47AC; } // 800C479C
  c->lr=0x800C47A4u; f_80295B7C(c); // 800C47A0
  c->r[0]=0u+0x00000000u; // 800C47A4
  W32(c->r[31]+0x0000035Cu,c->r[0]); // 800C47A8
L_800C47AC:;
  c->r[3]=R32(c->r[31]+0x00000368u); // 800C47AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C47B0
  if (crb(c,2)) { goto L_800C47C4; } // 800C47B4
  c->lr=0x800C47BCu; f_80295B7C(c); // 800C47B8
  c->r[0]=0u+0x00000000u; // 800C47BC
  W32(c->r[31]+0x00000368u,c->r[0]); // 800C47C0
L_800C47C4:;
  c->r[3]=R32(c->r[31]+0x00000374u); // 800C47C4
  cmps(c,0,(int32_t)c->r[3],0); // 800C47C8
  if (crb(c,2)) { goto L_800C47DC; } // 800C47CC
  c->lr=0x800C47D4u; f_80295B7C(c); // 800C47D0
  c->r[0]=0u+0x00000000u; // 800C47D4
  W32(c->r[31]+0x00000374u,c->r[0]); // 800C47D8
L_800C47DC:;
  c->r[3]=R32(c->r[31]+0x00000380u); // 800C47DC
  cmps(c,0,(int32_t)c->r[3],0); // 800C47E0
  if (crb(c,2)) { goto L_800C47F4; } // 800C47E4
  c->lr=0x800C47ECu; f_80295B7C(c); // 800C47E8
  c->r[0]=0u+0x00000000u; // 800C47EC
  W32(c->r[31]+0x00000380u,c->r[0]); // 800C47F0
L_800C47F4:;
  c->r[3]=R32(c->r[31]+0x000003D8u); // 800C47F4
  cmps(c,0,(int32_t)c->r[3],0); // 800C47F8
  if (crb(c,2)) { goto L_800C480C; } // 800C47FC
  c->lr=0x800C4804u; f_80295B7C(c); // 800C4800
  c->r[0]=0u+0x00000000u; // 800C4804
  W32(c->r[31]+0x000003D8u,c->r[0]); // 800C4808
L_800C480C:;
  c->r[3]=R32(c->r[31]+0x00000430u); // 800C480C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4810
  if (crb(c,2)) { goto L_800C4824; } // 800C4814
  c->lr=0x800C481Cu; f_80295B7C(c); // 800C4818
  c->r[0]=0u+0x00000000u; // 800C481C
  W32(c->r[31]+0x00000430u,c->r[0]); // 800C4820
L_800C4824:;
  c->r[3]=R32(c->r[31]+0x00000488u); // 800C4824
  cmps(c,0,(int32_t)c->r[3],0); // 800C4828
  if (crb(c,2)) { goto L_800C483C; } // 800C482C
  c->lr=0x800C4834u; f_80295B7C(c); // 800C4830
  c->r[0]=0u+0x00000000u; // 800C4834
  W32(c->r[31]+0x00000488u,c->r[0]); // 800C4838
L_800C483C:;
  c->r[3]=R32(c->r[31]+0x000004C0u); // 800C483C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4840
  if (crb(c,2)) { goto L_800C4854; } // 800C4844
  c->lr=0x800C484Cu; f_80295B7C(c); // 800C4848
  c->r[0]=0u+0x00000000u; // 800C484C
  W32(c->r[31]+0x000004C0u,c->r[0]); // 800C4850
L_800C4854:;
  c->r[3]=R32(c->r[31]+0x000004F8u); // 800C4854
  cmps(c,0,(int32_t)c->r[3],0); // 800C4858
  if (crb(c,2)) { goto L_800C486C; } // 800C485C
  c->lr=0x800C4864u; f_80295B7C(c); // 800C4860
  c->r[0]=0u+0x00000000u; // 800C4864
  W32(c->r[31]+0x000004F8u,c->r[0]); // 800C4868
L_800C486C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C486C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4870
  c->lr=c->r[0]; // 800C4874
  c->r[1]=c->r[1]+0x00000010u; // 800C4878
  return; // 800C487C
}

// fn_800C4880
void f_800C4880(Ctx* __restrict c) {
  trace_call(0x800C4880u);
  return; // 800C4880
}

// fn_800C4884
void f_800C4884(Ctx* __restrict c) {
  trace_call(0x800C4884u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4884
  c->r[0]=c->lr; // 800C4888
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C488C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4890
  c->r[27]=0u+0x00000000u; // 800C4894
  c->r[28]=0u+0x00000004u; // 800C4898
  c->r[31]=0u+0x80410000u; // 800C489C
  c->r[26]=0u+0xE9F20000u; // 800C48A0
  c->r[30]=c->r[3]|c->r[3]; // 800C48A4
  c->r[0]=c->r[26]+0x00003360u; // 800C48A8
  c->r[31]=c->r[31]+0xFFFFABC8u; // 800C48AC
  c->r[4]=c->r[31]+0x00002161u; // 800C48B0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800C48B4
  W32(c->r[3]+0x00000020u,c->r[27]); // 800C48B8
  W32(c->r[3]+0x00000024u,c->r[28]); // 800C48BC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C48C0
  W32(c->r[3]+0x0000002Cu,c->r[27]); // 800C48C4
  W32(c->r[3]+0x00000030u,c->r[28]); // 800C48C8
  c->r[3]=c->r[3]+0x00000034u; // 800C48CC
  c->lr=0x800C48D4u; f_803A6F10(c); // 800C48D0
  c->r[0]=c->r[26]+0x00003360u; // 800C48D4
  W32(c->r[30]+0x00000054u,c->r[0]); // 800C48D8
  c->r[3]=c->r[30]+0x00000078u; // 800C48DC
  c->r[4]=c->r[31]+0x0000217Eu; // 800C48E0
  W32(c->r[30]+0x00000058u,c->r[27]); // 800C48E4
  W32(c->r[30]+0x0000005Cu,c->r[28]); // 800C48E8
  W32(c->r[30]+0x00000060u,c->r[27]); // 800C48EC
  W32(c->r[30]+0x00000064u,c->r[27]); // 800C48F0
  W32(c->r[30]+0x00000068u,c->r[28]); // 800C48F4
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 800C48F8
  W32(c->r[30]+0x00000070u,c->r[27]); // 800C48FC
  W32(c->r[30]+0x00000074u,c->r[28]); // 800C4900
  c->lr=0x800C4908u; f_803A6F10(c); // 800C4904
  c->r[29]=0u+0xEE2D0000u; // 800C4908
  W32(c->r[30]+0x00000098u,c->r[27]); // 800C490C
  c->r[0]=c->r[29]+0x000054A7u; // 800C4910
  c->r[3]=c->r[30]+0x00000114u; // 800C4914
  W32(c->r[30]+0x0000009Cu,c->r[27]); // 800C4918
  c->r[4]=c->r[31]+0x0000219Bu; // 800C491C
  W32(c->r[30]+0x000000A0u,c->r[28]); // 800C4920
  W32(c->r[30]+0x000000C4u,c->r[0]); // 800C4924
  W32(c->r[30]+0x000000C8u,c->r[27]); // 800C4928
  W32(c->r[30]+0x000000CCu,c->r[28]); // 800C492C
  W32(c->r[30]+0x000000D0u,c->r[0]); // 800C4930
  W32(c->r[30]+0x000000D4u,c->r[27]); // 800C4934
  W32(c->r[30]+0x000000D8u,c->r[28]); // 800C4938
  W32(c->r[30]+0x00000108u,c->r[0]); // 800C493C
  W32(c->r[30]+0x0000010Cu,c->r[27]); // 800C4940
  W32(c->r[30]+0x00000110u,c->r[28]); // 800C4944
  c->lr=0x800C494Cu; f_803A6F10(c); // 800C4948
  c->r[0]=c->r[26]+0x00003360u; // 800C494C
  W32(c->r[30]+0x00000160u,c->r[0]); // 800C4950
  c->r[3]=c->r[30]+0x00000190u; // 800C4954
  c->r[4]=c->r[31]+0x000021A7u; // 800C4958
  W32(c->r[30]+0x00000164u,c->r[27]); // 800C495C
  W32(c->r[30]+0x00000168u,c->r[28]); // 800C4960
  W32(c->r[30]+0x0000016Cu,c->r[0]); // 800C4964
  W32(c->r[30]+0x00000170u,c->r[27]); // 800C4968
  W32(c->r[30]+0x00000174u,c->r[28]); // 800C496C
  W32(c->r[30]+0x00000178u,c->r[0]); // 800C4970
  W32(c->r[30]+0x0000017Cu,c->r[27]); // 800C4974
  W32(c->r[30]+0x00000180u,c->r[28]); // 800C4978
  W32(c->r[30]+0x00000184u,c->r[0]); // 800C497C
  W32(c->r[30]+0x00000188u,c->r[27]); // 800C4980
  W32(c->r[30]+0x0000018Cu,c->r[28]); // 800C4984
  c->lr=0x800C498Cu; f_803A6F10(c); // 800C4988
  c->r[0]=c->r[26]+0x00003360u; // 800C498C
  W32(c->r[30]+0x000001B0u,c->r[0]); // 800C4990
  c->r[3]=c->r[30]+0x000001BCu; // 800C4994
  c->r[4]=c->r[31]+0x000021C4u; // 800C4998
  W32(c->r[30]+0x000001B4u,c->r[27]); // 800C499C
  W32(c->r[30]+0x000001B8u,c->r[28]); // 800C49A0
  c->lr=0x800C49A8u; f_803A6F10(c); // 800C49A4
  c->r[0]=c->r[26]+0x00003360u; // 800C49A8
  W32(c->r[30]+0x000001DCu,c->r[0]); // 800C49AC
  c->r[3]=c->r[30]+0x000001E8u; // 800C49B0
  c->r[4]=c->r[31]+0x000021E1u; // 800C49B4
  W32(c->r[30]+0x000001E0u,c->r[27]); // 800C49B8
  W32(c->r[30]+0x000001E4u,c->r[28]); // 800C49BC
  c->lr=0x800C49C4u; f_803A6F10(c); // 800C49C0
  c->r[0]=c->r[26]+0x00003360u; // 800C49C4
  W32(c->r[30]+0x00000208u,c->r[0]); // 800C49C8
  c->r[3]=c->r[30]+0x0000025Cu; // 800C49CC
  c->r[4]=c->r[31]+0x000021FEu; // 800C49D0
  W32(c->r[30]+0x0000020Cu,c->r[27]); // 800C49D4
  W32(c->r[30]+0x00000210u,c->r[28]); // 800C49D8
  W32(c->r[30]+0x00000214u,c->r[27]); // 800C49DC
  W32(c->r[30]+0x00000218u,c->r[27]); // 800C49E0
  W32(c->r[30]+0x0000021Cu,c->r[28]); // 800C49E4
  W32(c->r[30]+0x00000220u,c->r[0]); // 800C49E8
  W32(c->r[30]+0x00000224u,c->r[27]); // 800C49EC
  W32(c->r[30]+0x00000228u,c->r[28]); // 800C49F0
  W32(c->r[30]+0x0000022Cu,c->r[27]); // 800C49F4
  W32(c->r[30]+0x00000230u,c->r[27]); // 800C49F8
  W32(c->r[30]+0x00000234u,c->r[28]); // 800C49FC
  W32(c->r[30]+0x00000238u,c->r[0]); // 800C4A00
  W32(c->r[30]+0x0000023Cu,c->r[27]); // 800C4A04
  W32(c->r[30]+0x00000240u,c->r[28]); // 800C4A08
  W32(c->r[30]+0x00000244u,c->r[27]); // 800C4A0C
  W32(c->r[30]+0x00000248u,c->r[27]); // 800C4A10
  W32(c->r[30]+0x0000024Cu,c->r[28]); // 800C4A14
  W32(c->r[30]+0x00000250u,c->r[0]); // 800C4A18
  W32(c->r[30]+0x00000254u,c->r[27]); // 800C4A1C
  W32(c->r[30]+0x00000258u,c->r[28]); // 800C4A20
  c->lr=0x800C4A28u; f_803A6F10(c); // 800C4A24
  c->r[0]=c->r[26]+0x00003360u; // 800C4A28
  W32(c->r[30]+0x0000027Cu,c->r[27]); // 800C4A2C
  c->r[3]=c->r[30]+0x000002B4u; // 800C4A30
  c->r[4]=c->r[31]+0x0000221Bu; // 800C4A34
  W32(c->r[30]+0x00000280u,c->r[27]); // 800C4A38
  W32(c->r[30]+0x00000284u,c->r[28]); // 800C4A3C
  W32(c->r[30]+0x000002A8u,c->r[0]); // 800C4A40
  W32(c->r[30]+0x000002ACu,c->r[27]); // 800C4A44
  W32(c->r[30]+0x000002B0u,c->r[28]); // 800C4A48
  c->lr=0x800C4A50u; f_803A6F10(c); // 800C4A4C
  c->r[0]=c->r[26]+0x00003360u; // 800C4A50
  W32(c->r[30]+0x000002D4u,c->r[27]); // 800C4A54
  c->r[3]=c->r[30]+0x0000030Cu; // 800C4A58
  c->r[4]=c->r[31]+0x00002238u; // 800C4A5C
  W32(c->r[30]+0x000002D8u,c->r[27]); // 800C4A60
  W32(c->r[30]+0x000002DCu,c->r[28]); // 800C4A64
  W32(c->r[30]+0x00000300u,c->r[0]); // 800C4A68
  W32(c->r[30]+0x00000304u,c->r[27]); // 800C4A6C
  W32(c->r[30]+0x00000308u,c->r[28]); // 800C4A70
  c->lr=0x800C4A78u; f_803A6F10(c); // 800C4A74
  c->r[0]=c->r[29]+0x000054A7u; // 800C4A78
  W32(c->r[30]+0x0000032Cu,c->r[27]); // 800C4A7C
  c->r[3]=c->r[30]+0x00000388u; // 800C4A80
  c->r[4]=c->r[31]+0x00002255u; // 800C4A84
  W32(c->r[30]+0x00000330u,c->r[27]); // 800C4A88
  W32(c->r[30]+0x00000334u,c->r[28]); // 800C4A8C
  W32(c->r[30]+0x00000358u,c->r[0]); // 800C4A90
  W32(c->r[30]+0x0000035Cu,c->r[27]); // 800C4A94
  W32(c->r[30]+0x00000360u,c->r[28]); // 800C4A98
  W32(c->r[30]+0x00000364u,c->r[0]); // 800C4A9C
  W32(c->r[30]+0x00000368u,c->r[27]); // 800C4AA0
  W32(c->r[30]+0x0000036Cu,c->r[28]); // 800C4AA4
  W32(c->r[30]+0x00000370u,c->r[0]); // 800C4AA8
  W32(c->r[30]+0x00000374u,c->r[27]); // 800C4AAC
  W32(c->r[30]+0x00000378u,c->r[28]); // 800C4AB0
  W32(c->r[30]+0x0000037Cu,c->r[0]); // 800C4AB4
  W32(c->r[30]+0x00000380u,c->r[27]); // 800C4AB8
  W32(c->r[30]+0x00000384u,c->r[28]); // 800C4ABC
  c->lr=0x800C4AC4u; f_803A6F10(c); // 800C4AC0
  c->r[0]=c->r[29]+0x000054A7u; // 800C4AC4
  W32(c->r[30]+0x000003D4u,c->r[0]); // 800C4AC8
  c->r[3]=c->r[30]+0x000003E0u; // 800C4ACC
  c->r[4]=c->r[31]+0x00002261u; // 800C4AD0
  W32(c->r[30]+0x000003D8u,c->r[27]); // 800C4AD4
  W32(c->r[30]+0x000003DCu,c->r[28]); // 800C4AD8
  c->lr=0x800C4AE0u; f_803A6F10(c); // 800C4ADC
  c->r[0]=c->r[29]+0x000054A7u; // 800C4AE0
  W32(c->r[30]+0x0000042Cu,c->r[0]); // 800C4AE4
  c->r[3]=c->r[30]+0x00000438u; // 800C4AE8
  c->r[4]=c->r[31]+0x0000226Du; // 800C4AEC
  W32(c->r[30]+0x00000430u,c->r[27]); // 800C4AF0
  W32(c->r[30]+0x00000434u,c->r[28]); // 800C4AF4
  c->lr=0x800C4AFCu; f_803A6F10(c); // 800C4AF8
  c->r[0]=c->r[29]+0x000054A7u; // 800C4AFC
  W32(c->r[30]+0x00000484u,c->r[0]); // 800C4B00
  W32(c->r[30]+0x00000488u,c->r[27]); // 800C4B04
  W32(c->r[30]+0x0000048Cu,c->r[28]); // 800C4B08
  W32(c->r[30]+0x000004BCu,c->r[0]); // 800C4B0C
  W32(c->r[30]+0x000004C0u,c->r[27]); // 800C4B10
  W32(c->r[30]+0x000004C4u,c->r[28]); // 800C4B14
  W32(c->r[30]+0x000004F4u,c->r[0]); // 800C4B18
  W32(c->r[30]+0x000004F8u,c->r[27]); // 800C4B1C
  W32(c->r[30]+0x000004FCu,c->r[28]); // 800C4B20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C4B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4B28
  c->lr=c->r[0]; // 800C4B2C
  c->r[1]=c->r[1]+0x00000020u; // 800C4B30
  return; // 800C4B34
}

// fn_800C4B38
void f_800C4B38(Ctx* __restrict c) {
  trace_call(0x800C4B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4B38
  c->r[0]=c->lr; // 800C4B3C
  cmps(c,0,(int32_t)c->r[5],0); // 800C4B40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4B44
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4B48
  c->r[28]=c->r[3]|c->r[3]; // 800C4B4C
  c->r[29]=c->r[4]|c->r[4]; // 800C4B50
  c->r[30]=c->r[7]|c->r[7]; // 800C4B54
  if (crb(c,2)) { goto L_800C4B64; } // 800C4B58
  c->r[31]=c->r[5]|c->r[5]; // 800C4B5C
  goto L_800C4B68; // 800C4B60
L_800C4B64:;
  c->r[31]=c->r[28]|c->r[28]; // 800C4B64
L_800C4B68:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800C4B68
  c->r[4]=c->r[4]+0x0000001Cu; // 800C4B6C
  c->lr=0x800C4B74u; f_8003BDD0(c); // 800C4B70
  c->r[3]=c->r[31]+0x00000028u; // 800C4B74
  c->r[4]=c->r[29]+0x00000028u; // 800C4B78
  c->lr=0x800C4B80u; f_800C4E14(c); // 800C4B7C
  c->r[3]=c->r[31]+0x00000034u; // 800C4B80
  c->r[4]=c->r[29]+0x00000034u; // 800C4B84
  c->r[5]=0u+0x00000020u; // 800C4B88
  c->lr=0x800C4B90u; f_8024FA70(c); // 800C4B8C
  c->r[3]=c->r[31]+0x00000054u; // 800C4B90
  c->r[4]=c->r[29]+0x00000054u; // 800C4B94
  c->lr=0x800C4B9Cu; f_800C4E54(c); // 800C4B98
  c->r[3]=c->r[31]+0x00000060u; // 800C4B9C
  c->r[4]=c->r[29]+0x00000060u; // 800C4BA0
  c->lr=0x800C4BA8u; f_8003BDD0(c); // 800C4BA4
  c->r[3]=c->r[31]+0x0000006Cu; // 800C4BA8
  c->r[4]=c->r[29]+0x0000006Cu; // 800C4BAC
  c->lr=0x800C4BB4u; f_800C4EA0(c); // 800C4BB0
  c->r[3]=c->r[31]+0x00000078u; // 800C4BB4
  c->r[4]=c->r[29]+0x00000078u; // 800C4BB8
  c->r[5]=0u+0x00000020u; // 800C4BBC
  c->lr=0x800C4BC4u; f_8024FA70(c); // 800C4BC0
  c->r[3]=c->r[31]+0x00000098u; // 800C4BC4
  c->r[4]=c->r[29]+0x00000098u; // 800C4BC8
  c->lr=0x800C4BD0u; f_800C4E14(c); // 800C4BCC
  c->r[3]=c->r[31]+0x000000C4u; // 800C4BD0
  c->r[4]=c->r[29]+0x000000C4u; // 800C4BD4
  c->lr=0x800C4BDCu; f_8003BDD0(c); // 800C4BD8
  c->r[3]=c->r[31]+0x000000D0u; // 800C4BDC
  c->r[4]=c->r[29]+0x000000D0u; // 800C4BE0
  c->lr=0x800C4BE8u; f_800C4F00(c); // 800C4BE4
  c->r[3]=c->r[31]+0x00000108u; // 800C4BE8
  c->r[4]=c->r[29]+0x00000108u; // 800C4BEC
  c->lr=0x800C4BF4u; f_800C4F94(c); // 800C4BF0
  c->r[3]=c->r[31]+0x00000114u; // 800C4BF4
  c->r[4]=c->r[29]+0x00000114u; // 800C4BF8
  c->r[5]=0u+0x00000020u; // 800C4BFC
  c->lr=0x800C4C04u; f_8024FA70(c); // 800C4C00
  c->r[3]=c->r[31]+0x00000160u; // 800C4C04
  c->r[4]=c->r[29]+0x00000160u; // 800C4C08
  c->lr=0x800C4C10u; f_8003BDD0(c); // 800C4C0C
  c->r[3]=c->r[31]+0x0000016Cu; // 800C4C10
  c->r[4]=c->r[29]+0x0000016Cu; // 800C4C14
  c->lr=0x800C4C1Cu; f_8003BDD0(c); // 800C4C18
  c->r[3]=c->r[31]+0x00000178u; // 800C4C1C
  c->r[4]=c->r[29]+0x00000178u; // 800C4C20
  c->lr=0x800C4C28u; f_8003BDD0(c); // 800C4C24
  c->r[3]=c->r[31]+0x00000184u; // 800C4C28
  c->r[4]=c->r[29]+0x00000184u; // 800C4C2C
  c->lr=0x800C4C34u; f_800C4E14(c); // 800C4C30
  c->r[3]=c->r[31]+0x00000190u; // 800C4C34
  c->r[4]=c->r[29]+0x00000190u; // 800C4C38
  c->r[5]=0u+0x00000020u; // 800C4C3C
  c->lr=0x800C4C44u; f_8024FA70(c); // 800C4C40
  c->r[3]=c->r[31]+0x000001B0u; // 800C4C44
  c->r[4]=c->r[29]+0x000001B0u; // 800C4C48
  c->lr=0x800C4C50u; f_800C4E14(c); // 800C4C4C
  c->r[3]=c->r[31]+0x000001BCu; // 800C4C50
  c->r[4]=c->r[29]+0x000001BCu; // 800C4C54
  c->r[5]=0u+0x00000020u; // 800C4C58
  c->lr=0x800C4C60u; f_8024FA70(c); // 800C4C5C
  c->r[3]=c->r[31]+0x000001DCu; // 800C4C60
  c->r[4]=c->r[29]+0x000001DCu; // 800C4C64
  c->lr=0x800C4C6Cu; f_800C4E14(c); // 800C4C68
  c->r[3]=c->r[31]+0x000001E8u; // 800C4C6C
  c->r[4]=c->r[29]+0x000001E8u; // 800C4C70
  c->r[5]=0u+0x00000020u; // 800C4C74
  c->lr=0x800C4C7Cu; f_8024FA70(c); // 800C4C78
  c->r[3]=c->r[31]+0x00000208u; // 800C4C7C
  c->r[4]=c->r[29]+0x00000208u; // 800C4C80
  c->lr=0x800C4C88u; f_800C4E54(c); // 800C4C84
  c->r[3]=c->r[31]+0x00000214u; // 800C4C88
  c->r[4]=c->r[29]+0x00000214u; // 800C4C8C
  c->lr=0x800C4C94u; f_8003BDD0(c); // 800C4C90
  c->r[3]=c->r[31]+0x00000220u; // 800C4C94
  c->r[4]=c->r[29]+0x00000220u; // 800C4C98
  c->lr=0x800C4CA0u; f_800C4E54(c); // 800C4C9C
  c->r[3]=c->r[31]+0x0000022Cu; // 800C4CA0
  c->r[4]=c->r[29]+0x0000022Cu; // 800C4CA4
  c->lr=0x800C4CACu; f_8003BDD0(c); // 800C4CA8
  c->r[3]=c->r[31]+0x00000238u; // 800C4CAC
  c->r[4]=c->r[29]+0x00000238u; // 800C4CB0
  c->lr=0x800C4CB8u; f_800C4E54(c); // 800C4CB4
  c->r[3]=c->r[31]+0x00000244u; // 800C4CB8
  c->r[4]=c->r[29]+0x00000244u; // 800C4CBC
  c->lr=0x800C4CC4u; f_8003BDD0(c); // 800C4CC0
  c->r[3]=c->r[31]+0x00000250u; // 800C4CC4
  c->r[4]=c->r[29]+0x00000250u; // 800C4CC8
  c->lr=0x800C4CD0u; f_800C4EA0(c); // 800C4CCC
  c->r[3]=c->r[31]+0x0000025Cu; // 800C4CD0
  c->r[4]=c->r[29]+0x0000025Cu; // 800C4CD4
  c->r[5]=0u+0x00000020u; // 800C4CD8
  c->lr=0x800C4CE0u; f_8024FA70(c); // 800C4CDC
  c->r[3]=c->r[31]+0x0000027Cu; // 800C4CE0
  c->r[4]=c->r[29]+0x0000027Cu; // 800C4CE4
  c->lr=0x800C4CECu; f_800C4E14(c); // 800C4CE8
  c->r[3]=c->r[31]+0x000002A8u; // 800C4CEC
  c->r[4]=c->r[29]+0x000002A8u; // 800C4CF0
  c->lr=0x800C4CF8u; f_800C4EA0(c); // 800C4CF4
  c->r[3]=c->r[31]+0x000002B4u; // 800C4CF8
  c->r[4]=c->r[29]+0x000002B4u; // 800C4CFC
  c->r[5]=0u+0x00000020u; // 800C4D00
  c->lr=0x800C4D08u; f_8024FA70(c); // 800C4D04
  c->r[3]=c->r[31]+0x000002D4u; // 800C4D08
  c->r[4]=c->r[29]+0x000002D4u; // 800C4D0C
  c->lr=0x800C4D14u; f_800C4E14(c); // 800C4D10
  c->r[3]=c->r[31]+0x00000300u; // 800C4D14
  c->r[4]=c->r[29]+0x00000300u; // 800C4D18
  c->lr=0x800C4D20u; f_800C4EA0(c); // 800C4D1C
  c->r[3]=c->r[31]+0x0000030Cu; // 800C4D20
  c->r[4]=c->r[29]+0x0000030Cu; // 800C4D24
  c->r[5]=0u+0x00000020u; // 800C4D28
  c->lr=0x800C4D30u; f_8024FA70(c); // 800C4D2C
  c->r[3]=c->r[31]+0x0000032Cu; // 800C4D30
  c->r[4]=c->r[29]+0x0000032Cu; // 800C4D34
  c->lr=0x800C4D3Cu; f_800C4E14(c); // 800C4D38
  c->r[3]=c->r[31]+0x00000358u; // 800C4D3C
  c->r[4]=c->r[29]+0x00000358u; // 800C4D40
  c->lr=0x800C4D48u; f_8003BDD0(c); // 800C4D44
  c->r[3]=c->r[31]+0x00000364u; // 800C4D48
  c->r[4]=c->r[29]+0x00000364u; // 800C4D4C
  c->lr=0x800C4D54u; f_8003BDD0(c); // 800C4D50
  c->r[3]=c->r[31]+0x00000370u; // 800C4D54
  c->r[4]=c->r[29]+0x00000370u; // 800C4D58
  c->lr=0x800C4D60u; f_8003BDD0(c); // 800C4D5C
  c->r[3]=c->r[31]+0x0000037Cu; // 800C4D60
  c->r[4]=c->r[29]+0x0000037Cu; // 800C4D64
  c->lr=0x800C4D6Cu; f_800C4F94(c); // 800C4D68
  c->r[3]=c->r[31]+0x00000388u; // 800C4D6C
  c->r[4]=c->r[29]+0x00000388u; // 800C4D70
  c->r[5]=0u+0x00000020u; // 800C4D74
  c->lr=0x800C4D7Cu; f_8024FA70(c); // 800C4D78
  c->r[3]=c->r[31]+0x000003D4u; // 800C4D7C
  c->r[4]=c->r[29]+0x000003D4u; // 800C4D80
  c->lr=0x800C4D88u; f_800C4F94(c); // 800C4D84
  c->r[3]=c->r[31]+0x000003E0u; // 800C4D88
  c->r[4]=c->r[29]+0x000003E0u; // 800C4D8C
  c->r[5]=0u+0x00000020u; // 800C4D90
  c->lr=0x800C4D98u; f_8024FA70(c); // 800C4D94
  c->r[3]=c->r[31]+0x0000042Cu; // 800C4D98
  c->r[4]=c->r[29]+0x0000042Cu; // 800C4D9C
  c->lr=0x800C4DA4u; f_800C4F94(c); // 800C4DA0
  c->r[3]=c->r[31]+0x00000438u; // 800C4DA4
  c->r[4]=c->r[29]+0x00000438u; // 800C4DA8
  c->r[5]=0u+0x00000020u; // 800C4DAC
  c->lr=0x800C4DB4u; f_8024FA70(c); // 800C4DB0
  c->r[3]=c->r[31]+0x00000484u; // 800C4DB4
  c->r[4]=c->r[29]+0x00000484u; // 800C4DB8
  c->lr=0x800C4DC0u; f_800C4F00(c); // 800C4DBC
  c->r[3]=c->r[31]+0x000004BCu; // 800C4DC0
  c->r[4]=c->r[29]+0x000004BCu; // 800C4DC4
  c->lr=0x800C4DCCu; f_800C4F00(c); // 800C4DC8
  c->r[3]=c->r[31]+0x000004F4u; // 800C4DCC
  c->r[4]=c->r[29]+0x000004F4u; // 800C4DD0
  c->lr=0x800C4DD8u; f_800C4F00(c); // 800C4DD4
  cmps(c,0,(int32_t)c->r[30],0); // 800C4DD8
  if (crb(c,2)) { goto L_800C4E00; } // 800C4DDC
  c->r[3]=R32(c->r[28]+0x0000052Cu); // 800C4DE0
  cmps(c,0,(int32_t)c->r[3],0); // 800C4DE4
  if (crb(c,1)) { goto L_800C4DF8; } // 800C4DE8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C4DEC
  W32(c->r[28]+0x0000052Cu,c->r[0]); // 800C4DF0
  goto L_800C4E00; // 800C4DF4
L_800C4DF8:;
  c->r[0]=c->r[3]+0x00000001u; // 800C4DF8
  W32(c->r[28]+0x0000052Cu,c->r[0]); // 800C4DFC
L_800C4E00:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C4E00
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4E04
  c->lr=c->r[0]; // 800C4E08
  c->r[1]=c->r[1]+0x00000020u; // 800C4E0C
  return; // 800C4E10
}

// fn_800C4E14
void f_800C4E14(Ctx* __restrict c) {
  trace_call(0x800C4E14u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 800C4E14
  c->r[0]=0u+0x00000010u; // 800C4E18
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C4E1C
  c->r[5]=c->r[4]+0x0000000Bu; // 800C4E20
  c->r[6]=c->r[3]+0x0000000Bu; // 800C4E24
  c->r[7]=R32(c->r[4]+0x00000004u); // 800C4E28
  W32(c->r[3]+0x00000004u,c->r[7]); // 800C4E2C
  c->r[4]=R32(c->r[4]+0x00000008u); // 800C4E30
  W32(c->r[3]+0x00000008u,c->r[4]); // 800C4E34
  c->ctr=c->r[0]; // 800C4E38
L_800C4E3C:;
  c->r[4]=R8(c->r[5]+0x00000001u); // 800C4E3C
  {uint32_t ea=c->r[5]+0x00000002u; c->r[0]=R8(ea); c->r[5]=ea;} // 800C4E40
  W8(c->r[6]+0x00000001u,c->r[4]); // 800C4E44
  {uint32_t ea=c->r[6]+0x00000002u; W8(ea,c->r[0]); c->r[6]=ea;} // 800C4E48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4E3C; } // 800C4E4C
  return; // 800C4E50
}

// fn_800C4E54
void f_800C4E54(Ctx* __restrict c) {
  trace_call(0x800C4E54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4E54
  c->r[0]=c->lr; // 800C4E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4E5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4E60
  c->r[30]=c->r[3]|c->r[3]; // 800C4E64
  c->r[31]=c->r[4]|c->r[4]; // 800C4E68
  c->lr=0x800C4E70u; f_8003BDD0(c); // 800C4E6C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800C4E70
  c->r[3]=c->r[30]|c->r[30]; // 800C4E74
  c->r[0]=R32(c->r[31]+0x00000010u); // 800C4E78
  W32(c->r[30]+0x00000010u,c->r[0]); // 800C4E7C
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800C4E80
  c->r[0]=R32(c->r[31]+0x00000014u); // 800C4E84
  W32(c->r[30]+0x00000014u,c->r[0]); // 800C4E88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C4E8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4E90
  c->lr=c->r[0]; // 800C4E94
  c->r[1]=c->r[1]+0x00000010u; // 800C4E98
  return; // 800C4E9C
}

// fn_800C4EA0
void f_800C4EA0(Ctx* __restrict c) {
  trace_call(0x800C4EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4EA0
  c->r[0]=c->lr; // 800C4EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4EA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4EAC
  c->r[30]=c->r[3]|c->r[3]; // 800C4EB0
  c->r[31]=c->r[4]|c->r[4]; // 800C4EB4
  c->lr=0x800C4EBCu; f_800C4E14(c); // 800C4EB8
  c->r[0]=0u+0x00000005u; // 800C4EBC
  c->r[5]=c->r[30]+0x00000028u; // 800C4EC0
  c->r[4]=c->r[31]+0x00000028u; // 800C4EC4
  c->ctr=c->r[0]; // 800C4EC8
L_800C4ECC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4ECC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4ED0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4ED4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4ED8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4ECC; } // 800C4EDC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4EE0
  c->r[3]=c->r[30]|c->r[30]; // 800C4EE4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4EE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C4EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4EF0
  c->lr=c->r[0]; // 800C4EF4
  c->r[1]=c->r[1]+0x00000010u; // 800C4EF8
  return; // 800C4EFC
}

// fn_800C4F00
void f_800C4F00(Ctx* __restrict c) {
  trace_call(0x800C4F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4F00
  c->r[0]=c->lr; // 800C4F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4F08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4F0C
  c->r[30]=c->r[3]|c->r[3]; // 800C4F10
  c->r[31]=c->r[4]|c->r[4]; // 800C4F14
  c->lr=0x800C4F1Cu; f_8003BDD0(c); // 800C4F18
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800C4F1C
  c->r[0]=0u+0x00000002u; // 800C4F20
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800C4F24
  c->r[5]=c->r[30]+0x0000000Cu; // 800C4F28
  c->r[4]=c->r[31]+0x0000000Cu; // 800C4F2C
  c->ctr=c->r[0]; // 800C4F30
L_800C4F34:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4F34
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4F38
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4F3C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4F40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4F34; } // 800C4F44
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4F48
  c->r[0]=0u+0x00000002u; // 800C4F4C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4F50
  c->r[5]=c->r[30]+0x00000020u; // 800C4F54
  c->r[4]=c->r[31]+0x00000020u; // 800C4F58
  c->ctr=c->r[0]; // 800C4F5C
L_800C4F60:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4F60
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4F64
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4F68
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4F6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4F60; } // 800C4F70
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4F74
  c->r[3]=c->r[30]|c->r[30]; // 800C4F78
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4F7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C4F80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4F84
  c->lr=c->r[0]; // 800C4F88
  c->r[1]=c->r[1]+0x00000010u; // 800C4F8C
  return; // 800C4F90
}

// fn_800C4F94
void f_800C4F94(Ctx* __restrict c) {
  trace_call(0x800C4F94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4F94
  c->r[0]=c->lr; // 800C4F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4F9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4FA0
  c->r[30]=c->r[3]|c->r[3]; // 800C4FA4
  c->r[31]=c->r[4]|c->r[4]; // 800C4FA8
  c->lr=0x800C4FB0u; f_800C4E14(c); // 800C4FAC
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800C4FB0
  c->r[0]=0u+0x00000002u; // 800C4FB4
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800C4FB8
  c->r[5]=c->r[30]+0x0000002Cu; // 800C4FBC
  c->r[4]=c->r[31]+0x0000002Cu; // 800C4FC0
  c->ctr=c->r[0]; // 800C4FC4
L_800C4FC8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4FC8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4FCC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4FD0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4FD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4FC8; } // 800C4FD8
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4FDC
  c->r[0]=0u+0x00000002u; // 800C4FE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4FE4
  c->r[5]=c->r[30]+0x00000040u; // 800C4FE8
  c->r[4]=c->r[31]+0x00000040u; // 800C4FEC
  c->ctr=c->r[0]; // 800C4FF0
L_800C4FF4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4FF4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4FF8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4FFC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5000
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4FF4; } // 800C5004
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5008
  c->r[3]=c->r[30]|c->r[30]; // 800C500C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5010
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5014
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5018
  c->lr=c->r[0]; // 800C501C
  c->r[1]=c->r[1]+0x00000010u; // 800C5020
  return; // 800C5024
}

// fn_800C5028
void f_800C5028(Ctx* __restrict c) {
  trace_call(0x800C5028u);
  c->r[3]=0u+0x00000000u; // 800C5028
  return; // 800C502C
}

// fn_800C5030
void f_800C5030(Ctx* __restrict c) {
  trace_call(0x800C5030u);
  c->r[3]=0u+0x00000530u; // 800C5030
  return; // 800C5034
}

// fn_800C5038
void f_800C5038(Ctx* __restrict c) {
  trace_call(0x800C5038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5038
  c->r[0]=c->lr; // 800C503C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5044
  c->r[31]=c->r[3]|c->r[3]; // 800C5048
  c->lr=0x800C5050u; f_800C2214(c); // 800C504C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C5050
  c->r[3]=0u+0x80420000u; // 800C5054
  c->r[3]=c->r[3]+0xFFFF9F80u; // 800C5058
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C505C
  c->r[0]=c->r[0]|0x80000000u; // 800C5060
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C5064
  c->r[3]=c->r[31]|c->r[31]; // 800C5068
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C506C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C5070
  c->ctr=c->r[12]; // 800C5074
  if (true) { c->lr=0x800C507Cu; dispatch(c,c->ctr); } // 800C5078
  c->r[3]=c->r[31]|c->r[31]; // 800C507C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5080
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5084
  c->lr=c->r[0]; // 800C5088
  c->r[1]=c->r[1]+0x00000010u; // 800C508C
  return; // 800C5090
}

// fn_800C5094
void f_800C5094(Ctx* __restrict c) {
  trace_call(0x800C5094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5094
  c->r[0]=c->lr; // 800C5098
  cmps(c,0,(int32_t)c->r[3],0); // 800C509C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C50A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C50A4
  c->r[30]=c->r[3]|c->r[3]; // 800C50A8
  c->r[31]=c->r[4]|c->r[4]; // 800C50AC
  if (crb(c,2)) { goto L_800C50CC; } // 800C50B0
  c->r[4]=0u+0x00000000u; // 800C50B4
  c->lr=0x800C50BCu; f_802B1180(c); // 800C50B8
  cmps(c,0,(int32_t)c->r[31],0); // 800C50BC
  if (!crb(c,1)) { goto L_800C50CC; } // 800C50C0
  c->r[3]=c->r[30]|c->r[30]; // 800C50C4
  c->lr=0x800C50CCu; f_80244DC0(c); // 800C50C8
L_800C50CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800C50CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C50D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C50D4
  c->lr=c->r[0]; // 800C50D8
  c->r[1]=c->r[1]+0x00000010u; // 800C50DC
  return; // 800C50E0
}

// fn_800C50E4
void f_800C50E4(Ctx* __restrict c) {
  trace_call(0x800C50E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C50E4
  c->r[0]=c->lr; // 800C50E8
  c->r[3]=0u+0x00000530u; // 800C50EC
  c->r[4]=c->r[13]+0xFFFFAF6Cu; // 800C50F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C50F4
  c->r[5]=0u+0x00000000u; // 800C50F8
  c->r[6]=0u+0x00001001u; // 800C50FC
  c->lr=0x800C5104u; f_80244D20(c); // 800C5100
  cmps(c,0,(int32_t)c->r[3],0); // 800C5104
  if (crb(c,2)) { goto L_800C5110; } // 800C5108
  c->lr=0x800C5110u; f_800C5038(c); // 800C510C
L_800C5110:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5110
  c->lr=c->r[0]; // 800C5114
  c->r[1]=c->r[1]+0x00000010u; // 800C5118
  return; // 800C511C
}

// fn_800C5120
void f_800C5120(Ctx* __restrict c) {
  trace_call(0x800C5120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5120
  c->r[0]=c->lr; // 800C5124
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C512C
  c->r[31]=c->r[3]|c->r[3]; // 800C5130
  c->lr=0x800C5138u; f_80244520(c); // 800C5134
  c->r[7]=c->r[3]|c->r[3]; // 800C5138
  c->r[9]=c->r[31]|c->r[31]; // 800C513C
  c->r[3]=0u+0x00000530u; // 800C5140
  c->r[4]=c->r[13]+0xFFFFAF71u; // 800C5144
  c->r[5]=0u+0x00000000u; // 800C5148
  c->r[6]=0u+0x00002001u; // 800C514C
  c->r[8]=0u+0x00000000u; // 800C5150
  c->lr=0x800C5158u; f_80242DF0(c); // 800C5154
  c->r[4]=c->r[3]|c->r[3]; // 800C5158
  c->r[3]=0u+0x00000530u; // 800C515C
  c->r[5]=c->r[13]+0xFFFFAF76u; // 800C5160
  c->r[6]=0u+0x00000000u; // 800C5164
  c->r[7]=0u+0x00001001u; // 800C5168
  c->lr=0x800C5170u; f_80244DB0(c); // 800C516C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5170
  if (crb(c,2)) { goto L_800C517C; } // 800C5174
  c->lr=0x800C517Cu; f_800C5038(c); // 800C5178
L_800C517C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C517C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5180
  c->lr=c->r[0]; // 800C5184
  c->r[1]=c->r[1]+0x00000010u; // 800C5188
  return; // 800C518C
}

// fn_800C5190
void f_800C5190(Ctx* __restrict c) {
  trace_call(0x800C5190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5190
  c->r[0]=c->lr; // 800C5194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C519C
  c->r[31]=c->r[3]|c->r[3]; // 800C51A0
  c->lr=0x800C51A8u; f_802B1168(c); // 800C51A4
  c->r[7]=0u+0x80420000u; // 800C51A8
  c->r[6]=0u+0x80410000u; // 800C51AC
  c->r[5]=0u+0x00000000u; // 800C51B0
  c->r[4]=0u+0xF5A10000u; // 800C51B4
  c->r[3]=0u+0x62FB0000u; // 800C51B8
  c->r[7]=c->r[7]+0xFFFF9F44u; // 800C51BC
  c->r[0]=c->r[3]+0x00006BDEu; // 800C51C0
  c->r[6]=c->r[6]+0xFFFFCE41u; // 800C51C4
  c->r[4]=c->r[4]+0xFFFFFFDCu; // 800C51C8
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C51CC
  c->r[3]=c->r[31]|c->r[31]; // 800C51D0
  W32(c->r[31]+0x00000000u,c->r[6]); // 800C51D4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800C51D8
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C51DC
  W32(c->r[31]+0x00000010u,c->r[5]); // 800C51E0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C51E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C51E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C51EC
  c->lr=c->r[0]; // 800C51F0
  c->r[1]=c->r[1]+0x00000010u; // 800C51F4
  return; // 800C51F8
}

// fn_800C51FC
void f_800C51FC(Ctx* __restrict c) {
  trace_call(0x800C51FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C51FC
  c->r[0]=c->lr; // 800C5200
  cmps(c,0,(int32_t)c->r[4],0); // 800C5204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5208
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C520C
  c->r[30]=c->r[3]|c->r[3]; // 800C5210
  c->r[31]=c->r[4]|c->r[4]; // 800C5214
  if (crb(c,2)) { goto L_800C526C; } // 800C5218
  c->r[3]=c->r[31]|c->r[31]; // 800C521C
  c->lr=0x800C5224u; f_80244520(c); // 800C5220
  c->r[7]=c->r[3]|c->r[3]; // 800C5224
  c->r[9]=c->r[31]|c->r[31]; // 800C5228
  c->r[3]=0u+0x000000B8u; // 800C522C
  c->r[4]=c->r[13]+0xFFFFAF7Bu; // 800C5230
  c->r[5]=0u+0x00000000u; // 800C5234
  c->r[6]=0u+0x00002001u; // 800C5238
  c->r[8]=0u+0x00000000u; // 800C523C
  c->lr=0x800C5244u; f_80242DF0(c); // 800C5240
  c->r[4]=c->r[3]|c->r[3]; // 800C5244
  c->r[3]=0u+0x000000B8u; // 800C5248
  c->r[5]=c->r[13]+0xFFFFAF80u; // 800C524C
  c->r[6]=0u+0x00000000u; // 800C5250
  c->r[7]=0u+0x00001001u; // 800C5254
  c->lr=0x800C525Cu; f_80244DB0(c); // 800C5258
  cmps(c,0,(int32_t)c->r[3],0); // 800C525C
  if (crb(c,2)) { goto L_800C528C; } // 800C5260
  c->lr=0x800C5268u; f_800C5190(c); // 800C5264
  goto L_800C528C; // 800C5268
L_800C526C:;
  c->r[3]=0u+0x000000B8u; // 800C526C
  c->r[4]=c->r[13]+0xFFFFAF85u; // 800C5270
  c->r[5]=0u+0x00000000u; // 800C5274
  c->r[6]=0u+0x00001001u; // 800C5278
  c->lr=0x800C5280u; f_80244D20(c); // 800C527C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5280
  if (crb(c,2)) { goto L_800C528C; } // 800C5284
  c->lr=0x800C528Cu; f_800C5190(c); // 800C5288
L_800C528C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C528C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C5290
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5294
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5298
  c->lr=c->r[0]; // 800C529C
  c->r[1]=c->r[1]+0x00000010u; // 800C52A0
  return; // 800C52A4
}

// fn_800C52A8
void f_800C52A8(Ctx* __restrict c) {
  trace_call(0x800C52A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C52A8
  c->r[0]=c->lr; // 800C52AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C52B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C52B4
  c->r[31]=c->r[4]|c->r[4]; // 800C52B8
  c->r[30]=c->r[3]|c->r[3]; // 800C52BC
  c->r[4]=0u+0x00000000u; // 800C52C0
  c->r[3]=c->r[31]|c->r[31]; // 800C52C4
  c->lr=0x800C52CCu; f_8030BE30(c); // 800C52C8
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C52CC
  c->r[3]=c->r[31]|c->r[31]; // 800C52D0
  c->lr=0x800C52D8u; f_8030BD1C(c); // 800C52D4
  W32(c->r[30]+0x00000020u,c->r[3]); // 800C52D8
  c->r[3]=c->r[31]|c->r[31]; // 800C52DC
  c->r[4]=0u+0x00000000u; // 800C52E0
  c->lr=0x800C52E8u; f_8030BE30(c); // 800C52E4
  W32(c->r[30]+0x00000028u,c->r[3]); // 800C52E8
  c->r[3]=c->r[31]|c->r[31]; // 800C52EC
  c->lr=0x800C52F4u; f_8030BD1C(c); // 800C52F0
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800C52F4
  c->r[3]=c->r[31]|c->r[31]; // 800C52F8
  c->r[4]=0u+0x00000000u; // 800C52FC
  c->lr=0x800C5304u; f_8030BE30(c); // 800C5300
  W32(c->r[30]+0x00000034u,c->r[3]); // 800C5304
  c->r[3]=c->r[31]|c->r[31]; // 800C5308
  c->lr=0x800C5310u; f_8030BD1C(c); // 800C530C
  W32(c->r[30]+0x00000038u,c->r[3]); // 800C5310
  c->r[3]=c->r[31]|c->r[31]; // 800C5314
  c->r[4]=0u+0x00000000u; // 800C5318
  c->lr=0x800C5320u; f_8030BE30(c); // 800C531C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800C5320
  c->r[3]=c->r[31]|c->r[31]; // 800C5324
  c->lr=0x800C532Cu; f_8030BD1C(c); // 800C5328
  W32(c->r[30]+0x00000044u,c->r[3]); // 800C532C
  c->r[3]=c->r[31]|c->r[31]; // 800C5330
  c->r[4]=0u+0x00000000u; // 800C5334
  c->lr=0x800C533Cu; f_8030BE30(c); // 800C5338
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800C533C
  c->r[3]=c->r[31]|c->r[31]; // 800C5340
  c->lr=0x800C5348u; f_8030BD1C(c); // 800C5344
  W32(c->r[30]+0x00000050u,c->r[3]); // 800C5348
  c->r[3]=c->r[31]|c->r[31]; // 800C534C
  c->r[4]=0u+0x00000000u; // 800C5350
  c->lr=0x800C5358u; f_8030BE30(c); // 800C5354
  W32(c->r[30]+0x00000058u,c->r[3]); // 800C5358
  c->r[3]=c->r[31]|c->r[31]; // 800C535C
  c->lr=0x800C5364u; f_8030BD1C(c); // 800C5360
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800C5364
  c->r[3]=c->r[31]|c->r[31]; // 800C5368
  c->r[4]=0u+0x00000000u; // 800C536C
  c->lr=0x800C5374u; f_8030BE30(c); // 800C5370
  W32(c->r[30]+0x00000064u,c->r[3]); // 800C5374
  c->r[3]=c->r[31]|c->r[31]; // 800C5378
  c->lr=0x800C5380u; f_8030BD1C(c); // 800C537C
  W32(c->r[30]+0x00000068u,c->r[3]); // 800C5380
  c->r[3]=c->r[31]|c->r[31]; // 800C5384
  c->r[4]=0u+0x00000000u; // 800C5388
  c->lr=0x800C5390u; f_8030BE30(c); // 800C538C
  W32(c->r[30]+0x00000070u,c->r[3]); // 800C5390
  c->r[3]=c->r[31]|c->r[31]; // 800C5394
  c->lr=0x800C539Cu; f_8030BD1C(c); // 800C5398
  W32(c->r[30]+0x00000074u,c->r[3]); // 800C539C
  c->r[3]=c->r[31]|c->r[31]; // 800C53A0
  c->r[4]=0u+0x00000000u; // 800C53A4
  c->lr=0x800C53ACu; f_8030BE30(c); // 800C53A8
  W32(c->r[30]+0x0000007Cu,c->r[3]); // 800C53AC
  c->r[3]=c->r[31]|c->r[31]; // 800C53B0
  c->lr=0x800C53B8u; f_8030BD1C(c); // 800C53B4
  W32(c->r[30]+0x00000080u,c->r[3]); // 800C53B8
  c->r[3]=c->r[31]|c->r[31]; // 800C53BC
  c->r[4]=0u+0x00000000u; // 800C53C0
  c->lr=0x800C53C8u; f_8030BE30(c); // 800C53C4
  W32(c->r[30]+0x00000088u,c->r[3]); // 800C53C8
  c->r[3]=c->r[31]|c->r[31]; // 800C53CC
  c->lr=0x800C53D4u; f_8030BD1C(c); // 800C53D0
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800C53D4
  c->r[3]=c->r[31]|c->r[31]; // 800C53D8
  c->r[4]=0u+0x00000000u; // 800C53DC
  c->lr=0x800C53E4u; f_8030BE30(c); // 800C53E0
  W32(c->r[30]+0x00000094u,c->r[3]); // 800C53E4
  c->r[3]=c->r[31]|c->r[31]; // 800C53E8
  c->lr=0x800C53F0u; f_8030BD1C(c); // 800C53EC
  W32(c->r[30]+0x00000098u,c->r[3]); // 800C53F0
  c->r[3]=c->r[31]|c->r[31]; // 800C53F4
  c->r[4]=0u+0x00000000u; // 800C53F8
  c->lr=0x800C5400u; f_8030BE30(c); // 800C53FC
  W32(c->r[30]+0x000000A0u,c->r[3]); // 800C5400
  c->r[3]=c->r[31]|c->r[31]; // 800C5404
  c->lr=0x800C540Cu; f_8030BD1C(c); // 800C5408
  W32(c->r[30]+0x000000A4u,c->r[3]); // 800C540C
  c->r[3]=c->r[31]|c->r[31]; // 800C5410
  c->r[4]=0u+0x00000000u; // 800C5414
  c->lr=0x800C541Cu; f_8030BE30(c); // 800C5418
  W32(c->r[30]+0x000000ACu,c->r[3]); // 800C541C
  c->r[3]=c->r[31]|c->r[31]; // 800C5420
  c->lr=0x800C5428u; f_8030BD1C(c); // 800C5424
  W32(c->r[30]+0x000000B0u,c->r[3]); // 800C5428
  c->r[3]=0u+0x00000000u; // 800C542C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5430
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5434
  c->lr=c->r[0]; // 800C5438
  c->r[1]=c->r[1]+0x00000010u; // 800C543C
  return; // 800C5440
}

// fn_800C5444
void f_800C5444(Ctx* __restrict c) {
  trace_call(0x800C5444u);
  return; // 800C5444
}

// fn_800C5448
void f_800C5448(Ctx* __restrict c) {
  trace_call(0x800C5448u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5448
  c->r[0]=c->lr; // 800C544C
  cmps(c,0,(int32_t)c->r[6],0); // 800C5450
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5454
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C5458
  c->r[30]=c->r[3]|c->r[3]; // 800C545C
  c->r[31]=c->r[5]|c->r[5]; // 800C5460
  if (!crb(c,2)) { goto L_800C55A0; } // 800C5464
  c->r[0]=R32(c->r[3]+0x00000020u); // 800C5468
  cmps(c,0,(int32_t)c->r[0],7); // 800C546C
  if (!crb(c,0)) { goto L_800C5480; } // 800C5470
  c->r[4]=c->r[31]|c->r[31]; // 800C5474
  c->r[3]=c->r[3]+0x0000001Cu; // 800C5478
  c->lr=0x800C5480u; f_8003A994(c); // 800C547C
L_800C5480:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800C5480
  cmps(c,0,(int32_t)c->r[0],7); // 800C5484
  if (!crb(c,0)) { goto L_800C5498; } // 800C5488
  c->r[4]=c->r[31]|c->r[31]; // 800C548C
  c->r[3]=c->r[30]+0x00000028u; // 800C5490
  c->lr=0x800C5498u; f_8003A994(c); // 800C5494
L_800C5498:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 800C5498
  cmps(c,0,(int32_t)c->r[0],7); // 800C549C
  if (!crb(c,0)) { goto L_800C54B0; } // 800C54A0
  c->r[4]=c->r[31]|c->r[31]; // 800C54A4
  c->r[3]=c->r[30]+0x00000034u; // 800C54A8
  c->lr=0x800C54B0u; f_8003A994(c); // 800C54AC
L_800C54B0:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 800C54B0
  cmps(c,0,(int32_t)c->r[0],7); // 800C54B4
  if (!crb(c,0)) { goto L_800C54C8; } // 800C54B8
  c->r[4]=c->r[31]|c->r[31]; // 800C54BC
  c->r[3]=c->r[30]+0x00000040u; // 800C54C0
  c->lr=0x800C54C8u; f_8003A994(c); // 800C54C4
L_800C54C8:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 800C54C8
  cmps(c,0,(int32_t)c->r[0],7); // 800C54CC
  if (!crb(c,0)) { goto L_800C54E0; } // 800C54D0
  c->r[4]=c->r[31]|c->r[31]; // 800C54D4
  c->r[3]=c->r[30]+0x0000004Cu; // 800C54D8
  c->lr=0x800C54E0u; f_8003A994(c); // 800C54DC
L_800C54E0:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 800C54E0
  cmps(c,0,(int32_t)c->r[0],7); // 800C54E4
  if (!crb(c,0)) { goto L_800C54F8; } // 800C54E8
  c->r[4]=c->r[31]|c->r[31]; // 800C54EC
  c->r[3]=c->r[30]+0x00000058u; // 800C54F0
  c->lr=0x800C54F8u; f_8003A994(c); // 800C54F4
L_800C54F8:;
  c->r[0]=R32(c->r[30]+0x00000068u); // 800C54F8
  cmps(c,0,(int32_t)c->r[0],7); // 800C54FC
  if (!crb(c,0)) { goto L_800C5510; } // 800C5500
  c->r[4]=c->r[31]|c->r[31]; // 800C5504
  c->r[3]=c->r[30]+0x00000064u; // 800C5508
  c->lr=0x800C5510u; f_8003A994(c); // 800C550C
L_800C5510:;
  c->r[0]=R32(c->r[30]+0x00000074u); // 800C5510
  cmps(c,0,(int32_t)c->r[0],7); // 800C5514
  if (!crb(c,0)) { goto L_800C5528; } // 800C5518
  c->r[4]=c->r[31]|c->r[31]; // 800C551C
  c->r[3]=c->r[30]+0x00000070u; // 800C5520
  c->lr=0x800C5528u; f_8003A994(c); // 800C5524
L_800C5528:;
  c->r[0]=R32(c->r[30]+0x00000080u); // 800C5528
  cmps(c,0,(int32_t)c->r[0],7); // 800C552C
  if (!crb(c,0)) { goto L_800C5540; } // 800C5530
  c->r[4]=c->r[31]|c->r[31]; // 800C5534
  c->r[3]=c->r[30]+0x0000007Cu; // 800C5538
  c->lr=0x800C5540u; f_8003A994(c); // 800C553C
L_800C5540:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 800C5540
  cmps(c,0,(int32_t)c->r[0],7); // 800C5544
  if (!crb(c,0)) { goto L_800C5558; } // 800C5548
  c->r[4]=c->r[31]|c->r[31]; // 800C554C
  c->r[3]=c->r[30]+0x00000088u; // 800C5550
  c->lr=0x800C5558u; f_8003A994(c); // 800C5554
L_800C5558:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 800C5558
  cmps(c,0,(int32_t)c->r[0],7); // 800C555C
  if (!crb(c,0)) { goto L_800C5570; } // 800C5560
  c->r[4]=c->r[31]|c->r[31]; // 800C5564
  c->r[3]=c->r[30]+0x00000094u; // 800C5568
  c->lr=0x800C5570u; f_8003A994(c); // 800C556C
L_800C5570:;
  c->r[0]=R32(c->r[30]+0x000000A4u); // 800C5570
  cmps(c,0,(int32_t)c->r[0],7); // 800C5574
  if (!crb(c,0)) { goto L_800C5588; } // 800C5578
  c->r[4]=c->r[31]|c->r[31]; // 800C557C
  c->r[3]=c->r[30]+0x000000A0u; // 800C5580
  c->lr=0x800C5588u; f_8003A994(c); // 800C5584
L_800C5588:;
  c->r[0]=R32(c->r[30]+0x000000B0u); // 800C5588
  cmps(c,0,(int32_t)c->r[0],7); // 800C558C
  if (!crb(c,0)) { goto L_800C55A0; } // 800C5590
  c->r[4]=c->r[31]|c->r[31]; // 800C5594
  c->r[3]=c->r[30]+0x000000ACu; // 800C5598
  c->lr=0x800C55A0u; f_8003A994(c); // 800C559C
L_800C55A0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C55A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C55A4
  c->lr=c->r[0]; // 800C55A8
  c->r[1]=c->r[1]+0x00000010u; // 800C55AC
  return; // 800C55B0
}

// fn_800C55B4
void f_800C55B4(Ctx* __restrict c) {
  trace_call(0x800C55B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C55B4
  c->r[9]=0u+0x4B420000u; // 800C55B8
  c->r[7]=0u+0x02DB0000u; // 800C55BC
  c->r[6]=0u+0x75280000u; // 800C55C0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C55C4
  c->r[8]=0u+0x00000000u; // 800C55C8
  c->r[5]=0u+0xF8140000u; // 800C55CC
  c->r[4]=0u+0xDC270000u; // 800C55D0
  c->r[20]=0u+0x8C180000u; // 800C55D4
  c->r[22]=0u+0x21970000u; // 800C55D8
  c->r[0]=c->r[20]+0xFFFFDB9Du; // 800C55DC
  c->r[24]=0u+0xE0670000u; // 800C55E0
  c->r[21]=c->r[22]+0x0000339Au; // 800C55E4
  c->r[26]=0u+0xF34A0000u; // 800C55E8
  c->r[23]=c->r[24]+0x0000036Cu; // 800C55EC
  c->r[28]=0u+0x980C0000u; // 800C55F0
  c->r[25]=c->r[26]+0x0000177Du; // 800C55F4
  c->r[12]=0u+0x80AC0000u; // 800C55F8
  c->r[27]=c->r[28]+0x00000940u; // 800C55FC
  c->r[11]=0u+0xD09D0000u; // 800C5600
  c->r[29]=c->r[12]+0x000023D0u; // 800C5604
  c->r[9]=c->r[9]+0xFFFFA9B4u; // 800C5608
  c->r[7]=c->r[7]+0xFFFFD5B3u; // 800C560C
  c->r[6]=c->r[6]+0xFFFFCB3Cu; // 800C5610
  c->r[5]=c->r[5]+0x00004C44u; // 800C5614
  c->r[4]=c->r[4]+0xFFFFD74Au; // 800C5618
  c->r[31]=c->r[11]+0x00002F07u; // 800C561C
  c->r[10]=0u+0x02D50000u; // 800C5620
  c->r[11]=c->r[10]+0xFFFFBFD6u; // 800C5624
  c->r[15]=0u+0x00000003u; // 800C5628
  c->r[16]=0u+0x00000009u; // 800C562C
  c->r[17]=0u+0x00000002u; // 800C5630
  c->r[18]=0u+0x00000008u; // 800C5634
  c->r[19]=0u+0x00000001u; // 800C5638
  c->r[20]=0u+0x00000007u; // 800C563C
  c->r[22]=0u+0x00000006u; // 800C5640
  c->r[24]=0u+0x0000000Cu; // 800C5644
  c->r[26]=0u+0x00000005u; // 800C5648
  c->r[28]=0u+0x0000000Bu; // 800C564C
  c->r[30]=0u+0x00000004u; // 800C5650
  c->r[12]=0u+0x0000000Au; // 800C5654
  c->r[10]=0u+0x0000000Du; // 800C5658
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 800C565C
  W32(c->r[3]+0x00000024u,c->r[8]); // 800C5660
  W32(c->r[3]+0x00000020u,c->r[15]); // 800C5664
  W32(c->r[3]+0x00000028u,c->r[7]); // 800C5668
  W32(c->r[3]+0x00000030u,c->r[8]); // 800C566C
  W32(c->r[3]+0x0000002Cu,c->r[16]); // 800C5670
  W32(c->r[3]+0x00000034u,c->r[6]); // 800C5674
  W32(c->r[3]+0x0000003Cu,c->r[8]); // 800C5678
  W32(c->r[3]+0x00000038u,c->r[17]); // 800C567C
  W32(c->r[3]+0x00000040u,c->r[5]); // 800C5680
  W32(c->r[3]+0x00000048u,c->r[8]); // 800C5684
  W32(c->r[3]+0x00000044u,c->r[18]); // 800C5688
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 800C568C
  W32(c->r[3]+0x00000054u,c->r[8]); // 800C5690
  W32(c->r[3]+0x00000050u,c->r[19]); // 800C5694
  W32(c->r[3]+0x00000058u,c->r[0]); // 800C5698
  W32(c->r[3]+0x00000060u,c->r[8]); // 800C569C
  W32(c->r[3]+0x0000005Cu,c->r[20]); // 800C56A0
  W32(c->r[3]+0x00000064u,c->r[21]); // 800C56A4
  W32(c->r[3]+0x0000006Cu,c->r[8]); // 800C56A8
  W32(c->r[3]+0x00000068u,c->r[22]); // 800C56AC
  W32(c->r[3]+0x00000070u,c->r[23]); // 800C56B0
  W32(c->r[3]+0x00000078u,c->r[8]); // 800C56B4
  W32(c->r[3]+0x00000074u,c->r[24]); // 800C56B8
  W32(c->r[3]+0x0000007Cu,c->r[25]); // 800C56BC
  W32(c->r[3]+0x00000084u,c->r[8]); // 800C56C0
  W32(c->r[3]+0x00000080u,c->r[26]); // 800C56C4
  W32(c->r[3]+0x00000088u,c->r[27]); // 800C56C8
  W32(c->r[3]+0x00000090u,c->r[8]); // 800C56CC
  W32(c->r[3]+0x0000008Cu,c->r[28]); // 800C56D0
  W32(c->r[3]+0x00000094u,c->r[29]); // 800C56D4
  W32(c->r[3]+0x0000009Cu,c->r[8]); // 800C56D8
  W32(c->r[3]+0x00000098u,c->r[30]); // 800C56DC
  W32(c->r[3]+0x000000A0u,c->r[31]); // 800C56E0
  W32(c->r[3]+0x000000A8u,c->r[8]); // 800C56E4
  W32(c->r[3]+0x000000A4u,c->r[12]); // 800C56E8
  W32(c->r[3]+0x000000ACu,c->r[11]); // 800C56EC
  W32(c->r[3]+0x000000B4u,c->r[8]); // 800C56F0
  W32(c->r[3]+0x000000B0u,c->r[10]); // 800C56F4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=15;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C56F8
  c->r[1]=c->r[1]+0x00000050u; // 800C56FC
  return; // 800C5700
}

// fn_800C5704
void f_800C5704(Ctx* __restrict c) {
  trace_call(0x800C5704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5704
  c->r[0]=c->lr; // 800C5708
  cmps(c,0,(int32_t)c->r[5],0); // 800C570C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5710
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C5714
  c->r[30]=c->r[4]|c->r[4]; // 800C5718
  if (crb(c,2)) { goto L_800C5728; } // 800C571C
  c->r[31]=c->r[5]|c->r[5]; // 800C5720
  goto L_800C572C; // 800C5724
L_800C5728:;
  c->r[31]=c->r[3]|c->r[3]; // 800C5728
L_800C572C:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800C572C
  c->r[4]=c->r[4]+0x0000001Cu; // 800C5730
  c->lr=0x800C5738u; f_8003AB48(c); // 800C5734
  c->r[3]=c->r[31]+0x00000028u; // 800C5738
  c->r[4]=c->r[30]+0x00000028u; // 800C573C
  c->lr=0x800C5744u; f_8003AB48(c); // 800C5740
  c->r[3]=c->r[31]+0x00000034u; // 800C5744
  c->r[4]=c->r[30]+0x00000034u; // 800C5748
  c->lr=0x800C5750u; f_8003AB48(c); // 800C574C
  c->r[3]=c->r[31]+0x00000040u; // 800C5750
  c->r[4]=c->r[30]+0x00000040u; // 800C5754
  c->lr=0x800C575Cu; f_8003AB48(c); // 800C5758
  c->r[3]=c->r[31]+0x0000004Cu; // 800C575C
  c->r[4]=c->r[30]+0x0000004Cu; // 800C5760
  c->lr=0x800C5768u; f_8003AB48(c); // 800C5764
  c->r[3]=c->r[31]+0x00000058u; // 800C5768
  c->r[4]=c->r[30]+0x00000058u; // 800C576C
  c->lr=0x800C5774u; f_8003AB48(c); // 800C5770
  c->r[3]=c->r[31]+0x00000064u; // 800C5774
  c->r[4]=c->r[30]+0x00000064u; // 800C5778
  c->lr=0x800C5780u; f_8003AB48(c); // 800C577C
  c->r[3]=c->r[31]+0x00000070u; // 800C5780
  c->r[4]=c->r[30]+0x00000070u; // 800C5784
  c->lr=0x800C578Cu; f_8003AB48(c); // 800C5788
  c->r[3]=c->r[31]+0x0000007Cu; // 800C578C
  c->r[4]=c->r[30]+0x0000007Cu; // 800C5790
  c->lr=0x800C5798u; f_8003AB48(c); // 800C5794
  c->r[3]=c->r[31]+0x00000088u; // 800C5798
  c->r[4]=c->r[30]+0x00000088u; // 800C579C
  c->lr=0x800C57A4u; f_8003AB48(c); // 800C57A0
  c->r[3]=c->r[31]+0x00000094u; // 800C57A4
  c->r[4]=c->r[30]+0x00000094u; // 800C57A8
  c->lr=0x800C57B0u; f_8003AB48(c); // 800C57AC
  c->r[3]=c->r[31]+0x000000A0u; // 800C57B0
  c->r[4]=c->r[30]+0x000000A0u; // 800C57B4
  c->lr=0x800C57BCu; f_8003AB48(c); // 800C57B8
  c->r[3]=c->r[31]+0x000000ACu; // 800C57BC
  c->r[4]=c->r[30]+0x000000ACu; // 800C57C0
  c->lr=0x800C57C8u; f_8003AB48(c); // 800C57C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C57C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C57CC
  c->lr=c->r[0]; // 800C57D0
  c->r[1]=c->r[1]+0x00000010u; // 800C57D4
  return; // 800C57D8
}

// fn_800C57DC
void f_800C57DC(Ctx* __restrict c) {
  trace_call(0x800C57DCu);
  c->r[3]=0u+0x00000000u; // 800C57DC
  return; // 800C57E0
}

// fn_800C57E4
void f_800C57E4(Ctx* __restrict c) {
  trace_call(0x800C57E4u);
  c->r[3]=0u+0x000000B8u; // 800C57E4
  return; // 800C57E8
}

// fn_800C57EC
void f_800C57EC(Ctx* __restrict c) {
  trace_call(0x800C57ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C57EC
  c->r[0]=c->lr; // 800C57F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C57F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C57F8
  c->r[31]=c->r[3]|c->r[3]; // 800C57FC
  c->lr=0x800C5804u; f_800C5190(c); // 800C5800
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C5804
  c->r[3]=0u+0x80420000u; // 800C5808
  c->r[3]=c->r[3]+0xFFFF9F04u; // 800C580C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C5810
  c->r[0]=c->r[0]|0x80000000u; // 800C5814
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C5818
  c->r[3]=c->r[31]|c->r[31]; // 800C581C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C5820
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C5824
  c->ctr=c->r[12]; // 800C5828
  if (true) { c->lr=0x800C5830u; dispatch(c,c->ctr); } // 800C582C
  c->r[3]=c->r[31]|c->r[31]; // 800C5830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5838
  c->lr=c->r[0]; // 800C583C
  c->r[1]=c->r[1]+0x00000010u; // 800C5840
  return; // 800C5844
}

// fn_800C5848
void f_800C5848(Ctx* __restrict c) {
  trace_call(0x800C5848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5848
  c->r[0]=c->lr; // 800C584C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5854
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C5858
  c->r[30]=c->r[3]|c->r[3]; // 800C585C
  c->r[31]=c->r[4]|c->r[4]; // 800C5860
  if (crb(c,2)) { goto L_800C5880; } // 800C5864
  c->r[4]=0u+0x00000000u; // 800C5868
  c->lr=0x800C5870u; f_802B1180(c); // 800C586C
  cmps(c,0,(int32_t)c->r[31],0); // 800C5870
  if (!crb(c,1)) { goto L_800C5880; } // 800C5874
  c->r[3]=c->r[30]|c->r[30]; // 800C5878
  c->lr=0x800C5880u; f_80244DC0(c); // 800C587C
L_800C5880:;
  c->r[3]=c->r[30]|c->r[30]; // 800C5880
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5884
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5888
  c->lr=c->r[0]; // 800C588C
  c->r[1]=c->r[1]+0x00000010u; // 800C5890
  return; // 800C5894
}

// fn_800C5898
void f_800C5898(Ctx* __restrict c) {
  trace_call(0x800C5898u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5898
  c->r[0]=c->lr; // 800C589C
  c->r[3]=0u+0x000000B8u; // 800C58A0
  c->r[4]=c->r[13]+0xFFFFAF8Au; // 800C58A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C58A8
  c->r[5]=0u+0x00000000u; // 800C58AC
  c->r[6]=0u+0x00001001u; // 800C58B0
  c->lr=0x800C58B8u; f_80244D20(c); // 800C58B4
  cmps(c,0,(int32_t)c->r[3],0); // 800C58B8
  if (crb(c,2)) { goto L_800C58C4; } // 800C58BC
  c->lr=0x800C58C4u; f_800C57EC(c); // 800C58C0
L_800C58C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C58C4
  c->lr=c->r[0]; // 800C58C8
  c->r[1]=c->r[1]+0x00000010u; // 800C58CC
  return; // 800C58D0
}

// fn_800C58D4
void f_800C58D4(Ctx* __restrict c) {
  trace_call(0x800C58D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C58D4
  c->r[0]=c->lr; // 800C58D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C58DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C58E0
  c->r[31]=c->r[3]|c->r[3]; // 800C58E4
  c->lr=0x800C58ECu; f_80244520(c); // 800C58E8
  c->r[7]=c->r[3]|c->r[3]; // 800C58EC
  c->r[9]=c->r[31]|c->r[31]; // 800C58F0
  c->r[3]=0u+0x000000B8u; // 800C58F4
  c->r[4]=c->r[13]+0xFFFFAF8Fu; // 800C58F8
  c->r[5]=0u+0x00000000u; // 800C58FC
  c->r[6]=0u+0x00002001u; // 800C5900
  c->r[8]=0u+0x00000000u; // 800C5904
  c->lr=0x800C590Cu; f_80242DF0(c); // 800C5908
  c->r[4]=c->r[3]|c->r[3]; // 800C590C
  c->r[3]=0u+0x000000B8u; // 800C5910
  c->r[5]=c->r[13]+0xFFFFAF94u; // 800C5914
  c->r[6]=0u+0x00000000u; // 800C5918
  c->r[7]=0u+0x00001001u; // 800C591C
  c->lr=0x800C5924u; f_80244DB0(c); // 800C5920
  cmps(c,0,(int32_t)c->r[3],0); // 800C5924
  if (crb(c,2)) { goto L_800C5930; } // 800C5928
  c->lr=0x800C5930u; f_800C57EC(c); // 800C592C
L_800C5930:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5930
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5934
  c->lr=c->r[0]; // 800C5938
  c->r[1]=c->r[1]+0x00000010u; // 800C593C
  return; // 800C5940
}

// fn_800C5944
void f_800C5944(Ctx* __restrict c) {
  trace_call(0x800C5944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5944
  c->r[0]=c->lr; // 800C5948
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C594C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5950
  c->r[31]=c->r[3]|c->r[3]; // 800C5954
  c->lr=0x800C595Cu; f_802B1168(c); // 800C5958
  c->r[7]=0u+0x80420000u; // 800C595C
  c->r[5]=0u+0x80410000u; // 800C5960
  c->r[6]=0u+0x00000000u; // 800C5964
  c->r[4]=0u+0x90F60000u; // 800C5968
  c->r[3]=0u+0xF7350000u; // 800C596C
  c->r[7]=c->r[7]+0xFFFF9EC8u; // 800C5970
  c->r[0]=c->r[3]+0xFFFFD0B9u; // 800C5974
  c->r[5]=c->r[5]+0xFFFFCE5Bu; // 800C5978
  c->r[4]=c->r[4]+0xFFFFFC66u; // 800C597C
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C5980
  c->r[3]=c->r[31]|c->r[31]; // 800C5984
  W32(c->r[31]+0x00000190u,c->r[6]); // 800C5988
  W32(c->r[31]+0x00000000u,c->r[5]); // 800C598C
  W32(c->r[31]+0x00000008u,c->r[6]); // 800C5990
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C5994
  W32(c->r[31]+0x00000010u,c->r[6]); // 800C5998
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C599C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C59A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C59A4
  c->lr=c->r[0]; // 800C59A8
  c->r[1]=c->r[1]+0x00000010u; // 800C59AC
  return; // 800C59B0
}

// fn_800C59B4
void f_800C59B4(Ctx* __restrict c) {
  trace_call(0x800C59B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C59B4
  c->r[0]=c->lr; // 800C59B8
  cmps(c,0,(int32_t)c->r[4],0); // 800C59BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C59C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C59C4
  c->r[30]=c->r[3]|c->r[3]; // 800C59C8
  c->r[31]=c->r[4]|c->r[4]; // 800C59CC
  if (crb(c,2)) { goto L_800C5A24; } // 800C59D0
  c->r[3]=c->r[31]|c->r[31]; // 800C59D4
  c->lr=0x800C59DCu; f_80244520(c); // 800C59D8
  c->r[7]=c->r[3]|c->r[3]; // 800C59DC
  c->r[9]=c->r[31]|c->r[31]; // 800C59E0
  c->r[3]=0u+0x00000194u; // 800C59E4
  c->r[4]=c->r[13]+0xFFFFAF99u; // 800C59E8
  c->r[5]=0u+0x00000000u; // 800C59EC
  c->r[6]=0u+0x00002001u; // 800C59F0
  c->r[8]=0u+0x00000000u; // 800C59F4
  c->lr=0x800C59FCu; f_80242DF0(c); // 800C59F8
  c->r[4]=c->r[3]|c->r[3]; // 800C59FC
  c->r[3]=0u+0x00000194u; // 800C5A00
  c->r[5]=c->r[13]+0xFFFFAF9Eu; // 800C5A04
  c->r[6]=0u+0x00000000u; // 800C5A08
  c->r[7]=0u+0x00001001u; // 800C5A0C
  c->lr=0x800C5A14u; f_80244DB0(c); // 800C5A10
  cmps(c,0,(int32_t)c->r[3],0); // 800C5A14
  if (crb(c,2)) { goto L_800C5A44; } // 800C5A18
  c->lr=0x800C5A20u; f_800C5944(c); // 800C5A1C
  goto L_800C5A44; // 800C5A20
L_800C5A24:;
  c->r[3]=0u+0x00000194u; // 800C5A24
  c->r[4]=c->r[13]+0xFFFFAFA3u; // 800C5A28
  c->r[5]=0u+0x00000000u; // 800C5A2C
  c->r[6]=0u+0x00001001u; // 800C5A30
  c->lr=0x800C5A38u; f_80244D20(c); // 800C5A34
  cmps(c,0,(int32_t)c->r[3],0); // 800C5A38
  if (crb(c,2)) { goto L_800C5A44; } // 800C5A3C
  c->lr=0x800C5A44u; f_800C5944(c); // 800C5A40
L_800C5A44:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C5A44
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C5A48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5A4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C5A50
  c->lr=c->r[0]; // 800C5A54
  c->r[1]=c->r[1]+0x00000010u; // 800C5A58
  return; // 800C5A5C
}

// fn_800C5A60
void f_800C5A60(Ctx* __restrict c) {
  trace_call(0x800C5A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5A60
  c->r[0]=c->lr; // 800C5A64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C5A68
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C5A6C
  c->r[31]=c->r[4]|c->r[4]; // 800C5A70
  c->r[30]=c->r[3]|c->r[3]; // 800C5A74
  c->r[3]=c->r[31]|c->r[31]; // 800C5A78
  c->lr=0x800C5A80u; f_8030C0A0(c); // 800C5A7C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800C5A80
  c->r[3]=c->r[31]|c->r[31]; // 800C5A84
  c->lr=0x800C5A8Cu; f_8030BD1C(c); // 800C5A88
  W32(c->r[30]+0x00000020u,c->r[3]); // 800C5A8C
  c->r[3]=c->r[31]|c->r[31]; // 800C5A90
  c->lr=0x800C5A98u; f_8030BD1C(c); // 800C5A94
  W32(c->r[30]+0x00000024u,c->r[3]); // 800C5A98
  c->r[3]=c->r[31]|c->r[31]; // 800C5A9C
  c->lr=0x800C5AA4u; f_8030BD1C(c); // 800C5AA0
  W32(c->r[30]+0x00000028u,c->r[3]); // 800C5AA4
  c->r[3]=c->r[31]|c->r[31]; // 800C5AA8
  c->lr=0x800C5AB0u; f_8030BD1C(c); // 800C5AAC
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800C5AB0
  c->r[3]=c->r[31]|c->r[31]; // 800C5AB4
  c->lr=0x800C5ABCu; f_8030BD1C(c); // 800C5AB8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800C5ABC
  c->r[3]=c->r[31]|c->r[31]; // 800C5AC0
  c->lr=0x800C5AC8u; f_8030C0A0(c); // 800C5AC4
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800C5AC8
  c->r[3]=c->r[31]|c->r[31]; // 800C5ACC
  c->lr=0x800C5AD4u; f_8030C0A0(c); // 800C5AD0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800C5AD4
  c->r[3]=c->r[31]|c->r[31]; // 800C5AD8
  c->lr=0x800C5AE0u; f_8030C0A0(c); // 800C5ADC
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800C5AE0
  c->r[3]=c->r[31]|c->r[31]; // 800C5AE4
  c->lr=0x800C5AECu; f_8030BD1C(c); // 800C5AE8
  W32(c->r[30]+0x00000040u,c->r[3]); // 800C5AEC
  c->r[3]=c->r[31]|c->r[31]; // 800C5AF0
  c->lr=0x800C5AF8u; f_8030BD1C(c); // 800C5AF4
  W32(c->r[30]+0x00000044u,c->r[3]); // 800C5AF8
  c->r[3]=c->r[31]|c->r[31]; // 800C5AFC
  c->lr=0x800C5B04u; f_8030BD1C(c); // 800C5B00
  W32(c->r[30]+0x00000048u,c->r[3]); // 800C5B04
  c->r[3]=c->r[31]|c->r[31]; // 800C5B08
  c->lr=0x800C5B10u; f_8030C0A0(c); // 800C5B0C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800C5B10
  c->r[3]=c->r[31]|c->r[31]; // 800C5B14
  c->r[4]=0u+0x00000000u; // 800C5B18
  c->lr=0x800C5B20u; f_8030BE30(c); // 800C5B1C
  W32(c->r[30]+0x00000050u,c->r[3]); // 800C5B20
  c->r[29]=0u+0x00000000u; // 800C5B24
  c->r[3]=c->r[31]|c->r[31]; // 800C5B28
  W32(c->r[30]+0x00000054u,c->r[29]); // 800C5B2C
  c->lr=0x800C5B34u; f_8030BD1C(c); // 800C5B30
  W32(c->r[30]+0x00000058u,c->r[3]); // 800C5B34
  c->r[3]=c->r[31]|c->r[31]; // 800C5B38
  c->r[4]=0u+0x00000000u; // 800C5B3C
  c->lr=0x800C5B44u; f_8030BE30(c); // 800C5B40
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800C5B44
  c->r[3]=c->r[31]|c->r[31]; // 800C5B48
  W32(c->r[30]+0x00000060u,c->r[29]); // 800C5B4C
  c->lr=0x800C5B54u; f_8030BD1C(c); // 800C5B50
  W32(c->r[30]+0x00000064u,c->r[3]); // 800C5B54
  c->r[3]=c->r[31]|c->r[31]; // 800C5B58
  c->r[4]=0u+0x00000000u; // 800C5B5C
  c->lr=0x800C5B64u; f_8030BE30(c); // 800C5B60
  W32(c->r[30]+0x00000068u,c->r[3]); // 800C5B64
  c->r[3]=c->r[31]|c->r[31]; // 800C5B68
  W32(c->r[30]+0x0000006Cu,c->r[29]); // 800C5B6C
  c->lr=0x800C5B74u; f_8030BD1C(c); // 800C5B70
  W32(c->r[30]+0x00000070u,c->r[3]); // 800C5B74
  c->r[3]=c->r[31]|c->r[31]; // 800C5B78
  c->r[4]=0u+0x00000000u; // 800C5B7C
  c->lr=0x800C5B84u; f_8030BE30(c); // 800C5B80
  W32(c->r[30]+0x00000074u,c->r[3]); // 800C5B84
  c->r[3]=c->r[31]|c->r[31]; // 800C5B88
  W32(c->r[30]+0x00000078u,c->r[29]); // 800C5B8C
  c->lr=0x800C5B94u; f_8030BD1C(c); // 800C5B90
  W32(c->r[30]+0x0000007Cu,c->r[3]); // 800C5B94
  c->r[3]=c->r[31]|c->r[31]; // 800C5B98
  c->r[4]=0u+0x00000000u; // 800C5B9C
  c->lr=0x800C5BA4u; f_8030BE30(c); // 800C5BA0
  W32(c->r[30]+0x00000080u,c->r[3]); // 800C5BA4
  c->r[3]=c->r[31]|c->r[31]; // 800C5BA8
  W32(c->r[30]+0x00000084u,c->r[29]); // 800C5BAC
  c->lr=0x800C5BB4u; f_8030BD1C(c); // 800C5BB0
  W32(c->r[30]+0x00000088u,c->r[3]); // 800C5BB4
  c->r[3]=c->r[31]|c->r[31]; // 800C5BB8
  c->r[4]=0u+0x00000000u; // 800C5BBC
  c->lr=0x800C5BC4u; f_8030BE30(c); // 800C5BC0
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800C5BC4
  c->r[3]=c->r[31]|c->r[31]; // 800C5BC8
  W32(c->r[30]+0x00000090u,c->r[29]); // 800C5BCC
  c->lr=0x800C5BD4u; f_8030BD1C(c); // 800C5BD0
  W32(c->r[30]+0x00000094u,c->r[3]); // 800C5BD4
  c->r[3]=c->r[31]|c->r[31]; // 800C5BD8
  c->r[4]=0u+0x00000000u; // 800C5BDC
  c->lr=0x800C5BE4u; f_8030BE30(c); // 800C5BE0
  W32(c->r[30]+0x000000B0u,c->r[3]); // 800C5BE4
  c->r[3]=c->r[31]|c->r[31]; // 800C5BE8
  W32(c->r[30]+0x000000B4u,c->r[29]); // 800C5BEC
  c->lr=0x800C5BF4u; f_8030BD1C(c); // 800C5BF0
  W32(c->r[30]+0x000000B8u,c->r[3]); // 800C5BF4
  c->r[3]=c->r[31]|c->r[31]; // 800C5BF8
  c->lr=0x800C5C00u; f_8030BD1C(c); // 800C5BFC
  W32(c->r[30]+0x000000BCu,c->r[3]); // 800C5C00
  c->r[27]=0u+0x00000000u; // 800C5C04
  goto L_800C5C34; // 800C5C08
L_800C5C0C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C5C0C
  c->r[28]=c->r[30]+c->r[29]; // 800C5C10
  c->lr=0x800C5C18u; f_8030C0A0(c); // 800C5C14
  {uint32_t ea=c->r[28]+0x000000D4u; WF32(ea,c->f[1]);} // 800C5C18
  c->r[3]=c->r[31]|c->r[31]; // 800C5C1C
  c->r[4]=0u+0x00000000u; // 800C5C20
  c->lr=0x800C5C28u; f_8030BE30(c); // 800C5C24
  W32(c->r[28]+0x000000C0u,c->r[3]); // 800C5C28
  c->r[27]=c->r[27]+0x00000001u; // 800C5C2C
  c->r[29]=c->r[29]+0x00000004u; // 800C5C30
L_800C5C34:;
  c->r[0]=R32(c->r[30]+0x000000BCu); // 800C5C34
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C5C38
  if (crb(c,0)) { IRQCHK(c); goto L_800C5C0C; } // 800C5C3C
  c->r[3]=c->r[31]|c->r[31]; // 800C5C40
  c->r[4]=0u+0x00000000u; // 800C5C44
  c->lr=0x800C5C4Cu; f_8030BE30(c); // 800C5C48
  W32(c->r[30]+0x000000E8u,c->r[3]); // 800C5C4C
  c->r[0]=0u+0x00000000u; // 800C5C50
  c->r[3]=c->r[31]|c->r[31]; // 800C5C54
  W32(c->r[30]+0x000000ECu,c->r[0]); // 800C5C58
  c->lr=0x800C5C60u; f_8030BD1C(c); // 800C5C5C
  W32(c->r[30]+0x000000F0u,c->r[3]); // 800C5C60
  c->r[3]=c->r[31]|c->r[31]; // 800C5C64
  c->lr=0x800C5C6Cu; f_8030BD1C(c); // 800C5C68
  W32(c->r[30]+0x000000F4u,c->r[3]); // 800C5C6C
  c->r[27]=0u+0x00000000u; // 800C5C70
  c->r[29]=0u+0x00000000u; // 800C5C74
  goto L_800C5CA4; // 800C5C78
L_800C5C7C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C5C7C
  c->r[28]=c->r[30]+c->r[29]; // 800C5C80
  c->lr=0x800C5C88u; f_8030C0A0(c); // 800C5C84
  {uint32_t ea=c->r[28]+0x0000010Cu; WF32(ea,c->f[1]);} // 800C5C88
  c->r[3]=c->r[31]|c->r[31]; // 800C5C8C
  c->r[4]=0u+0x00000000u; // 800C5C90
  c->lr=0x800C5C98u; f_8030BE30(c); // 800C5C94
  W32(c->r[28]+0x000000F8u,c->r[3]); // 800C5C98
  c->r[27]=c->r[27]+0x00000001u; // 800C5C9C
  c->r[29]=c->r[29]+0x00000004u; // 800C5CA0
L_800C5CA4:;
  c->r[0]=R32(c->r[30]+0x000000F4u); // 800C5CA4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C5CA8
  if (crb(c,0)) { IRQCHK(c); goto L_800C5C7C; } // 800C5CAC
  c->r[3]=c->r[31]|c->r[31]; // 800C5CB0
  c->r[4]=0u+0x00000000u; // 800C5CB4
  c->lr=0x800C5CBCu; f_8030BE30(c); // 800C5CB8
  W32(c->r[30]+0x00000120u,c->r[3]); // 800C5CBC
  c->r[0]=0u+0x00000000u; // 800C5CC0
  c->r[3]=c->r[31]|c->r[31]; // 800C5CC4
  W32(c->r[30]+0x00000124u,c->r[0]); // 800C5CC8
  c->lr=0x800C5CD0u; f_8030BD1C(c); // 800C5CCC
  W32(c->r[30]+0x00000128u,c->r[3]); // 800C5CD0
  c->r[3]=c->r[31]|c->r[31]; // 800C5CD4
  c->lr=0x800C5CDCu; f_8030BD1C(c); // 800C5CD8
  W32(c->r[30]+0x0000012Cu,c->r[3]); // 800C5CDC
  c->r[27]=0u+0x00000000u; // 800C5CE0
  c->r[29]=0u+0x00000000u; // 800C5CE4
  goto L_800C5D14; // 800C5CE8
L_800C5CEC:;
  c->r[3]=c->r[31]|c->r[31]; // 800C5CEC
  c->r[28]=c->r[30]+c->r[29]; // 800C5CF0
  c->lr=0x800C5CF8u; f_8030C0A0(c); // 800C5CF4
  {uint32_t ea=c->r[28]+0x00000144u; WF32(ea,c->f[1]);} // 800C5CF8
  c->r[3]=c->r[31]|c->r[31]; // 800C5CFC
  c->r[4]=0u+0x00000000u; // 800C5D00
  c->lr=0x800C5D08u; f_8030BE30(c); // 800C5D04
  W32(c->r[28]+0x00000130u,c->r[3]); // 800C5D08
  c->r[27]=c->r[27]+0x00000001u; // 800C5D0C
  c->r[29]=c->r[29]+0x00000004u; // 800C5D10
L_800C5D14:;
  c->r[0]=R32(c->r[30]+0x0000012Cu); // 800C5D14
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C5D18
  if (crb(c,0)) { IRQCHK(c); goto L_800C5CEC; } // 800C5D1C
  c->r[3]=c->r[31]|c->r[31]; // 800C5D20
  c->r[4]=0u+0x00000000u; // 800C5D24
  c->lr=0x800C5D2Cu; f_8030BE30(c); // 800C5D28
  W32(c->r[30]+0x00000158u,c->r[3]); // 800C5D2C
  c->r[0]=0u+0x00000000u; // 800C5D30
  c->r[3]=c->r[31]|c->r[31]; // 800C5D34
  W32(c->r[30]+0x0000015Cu,c->r[0]); // 800C5D38
  c->lr=0x800C5D40u; f_8030BD1C(c); // 800C5D3C
  W32(c->r[30]+0x00000160u,c->r[3]); // 800C5D40
  c->r[3]=c->r[31]|c->r[31]; // 800C5D44
  c->lr=0x800C5D4Cu; f_8030BD1C(c); // 800C5D48
  W32(c->r[30]+0x00000164u,c->r[3]); // 800C5D4C
  c->r[27]=0u+0x00000000u; // 800C5D50
  c->r[29]=0u+0x00000000u; // 800C5D54
  goto L_800C5D84; // 800C5D58
L_800C5D5C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C5D5C
  c->r[28]=c->r[30]+c->r[29]; // 800C5D60
  c->lr=0x800C5D68u; f_8030C0A0(c); // 800C5D64
  {uint32_t ea=c->r[28]+0x0000017Cu; WF32(ea,c->f[1]);} // 800C5D68
  c->r[3]=c->r[31]|c->r[31]; // 800C5D6C
  c->r[4]=0u+0x00000000u; // 800C5D70
  c->lr=0x800C5D78u; f_8030BE30(c); // 800C5D74
  W32(c->r[28]+0x00000168u,c->r[3]); // 800C5D78
  c->r[27]=c->r[27]+0x00000001u; // 800C5D7C
  c->r[29]=c->r[29]+0x00000004u; // 800C5D80
L_800C5D84:;
  c->r[0]=R32(c->r[30]+0x00000164u); // 800C5D84
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C5D88
  if (crb(c,0)) { IRQCHK(c); goto L_800C5D5C; } // 800C5D8C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5D90
  c->r[3]=0u+0x00000000u; // 800C5D94
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C5D98
  c->lr=c->r[0]; // 800C5D9C
  c->r[1]=c->r[1]+0x00000020u; // 800C5DA0
  return; // 800C5DA4
}

// fn_800C5DA8
void f_800C5DA8(Ctx* __restrict c) {
  trace_call(0x800C5DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5DA8
  c->r[0]=c->lr; // 800C5DAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C5DB0
  c->r[11]=c->r[1]+0x00000030u; // 800C5DB4
  c->lr=0x800C5DBCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5DB8
  c->r[7]=R32(c->r[3]+0x00000190u); // 800C5DBC
  c->r[28]=c->r[3]|c->r[3]; // 800C5DC0
  c->r[29]=c->r[4]|c->r[4]; // 800C5DC4
  c->r[30]=c->r[5]|c->r[5]; // 800C5DC8
  cmps(c,0,(int32_t)c->r[7],0); // 800C5DCC
  c->r[31]=c->r[6]|c->r[6]; // 800C5DD0
  if (!crb(c,0)) { goto L_800C5DE4; } // 800C5DD4
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800C5DD8
  W32(c->r[3]+0x00000190u,c->r[0]); // 800C5DDC
  goto L_800C5DF4; // 800C5DE0
L_800C5DE4:;
  c->r[0]=c->r[7]+0x00000001u; // 800C5DE4
  W32(c->r[3]+0x00000190u,c->r[0]); // 800C5DE8
  cmps(c,0,(int32_t)c->r[0],1); // 800C5DEC
  if (crb(c,1)) { goto L_800C657C; } // 800C5DF0
L_800C5DF4:;
  c->r[3]=c->r[28]|c->r[28]; // 800C5DF4
  c->r[4]=c->r[29]|c->r[29]; // 800C5DF8
  c->r[5]=c->r[30]|c->r[30]; // 800C5DFC
  c->r[6]=c->r[31]|c->r[31]; // 800C5E00
  c->lr=0x800C5E08u; f_802B11C0(c); // 800C5E04
  c->r[4]=R32(c->r[28]+0x00000050u); // 800C5E08
  cmps(c,0,(int32_t)c->r[4],0); // 800C5E0C
  if (crb(c,2)) { goto L_800C5F44; } // 800C5E10
  c->r[0]=0u+0x00000001u; // 800C5E14
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C5E18
  c->r[6]=c->r[29]|c->r[29]; // 800C5E1C
  c->r[7]=c->r[30]|c->r[30]; // 800C5E20
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C5E24
  c->r[8]=c->r[31]|c->r[31]; // 800C5E28
  c->r[9]=R32(c->r[28]+0x00000058u); // 800C5E2C
  c->r[5]=0u+0x00000000u; // 800C5E30
  c->r[10]=0u+0x00000001u; // 800C5E34
  c->lr=0x800C5E3Cu; f_80281A84(c); // 800C5E38
  cmps(c,0,(int32_t)c->r[3],0); // 800C5E3C
  W32(c->r[28]+0x00000054u,c->r[3]); // 800C5E40
  if (crb(c,2)) { goto L_800C5E50; } // 800C5E44
  c->lr=0x800C5E4Cu; f_80295B6C(c); // 800C5E48
  goto L_800C5EB4; // 800C5E4C
L_800C5E50:;
  c->r[3]=R32(c->r[28]+0x00000058u); // 800C5E50
  c->r[4]=c->r[31]|c->r[31]; // 800C5E54
  c->r[5]=c->r[30]|c->r[30]; // 800C5E58
  c->lr=0x800C5E60u; f_802C0F98(c); // 800C5E5C
  c->r[27]=c->r[3]|c->r[3]; // 800C5E60
  c->r[3]=0u+0x00000044u; // 800C5E64
  c->r[4]=c->r[13]+0xFFFFAFA8u; // 800C5E68
  c->r[5]=0u+0x00000000u; // 800C5E6C
  c->r[6]=0u+0x00001001u; // 800C5E70
  c->lr=0x800C5E78u; f_80244D20(c); // 800C5E74
  cmps(c,0,(int32_t)c->r[3],0); // 800C5E78
  if (crb(c,2)) { goto L_800C5E90; } // 800C5E7C
  c->r[5]=R32(c->r[28]+0x00000050u); // 800C5E80
  c->r[4]=c->r[27]|c->r[27]; // 800C5E84
  c->r[6]=0u+0x00000000u; // 800C5E88
  c->lr=0x800C5E90u; f_8029316C(c); // 800C5E8C
L_800C5E90:;
  W32(c->r[28]+0x00000054u,c->r[3]); // 800C5E90
  c->r[4]=c->r[29]|c->r[29]; // 800C5E94
  c->r[7]=R32(c->r[28]+0x00000058u); // 800C5E98
  c->r[5]=c->r[30]|c->r[30]; // 800C5E9C
  c->r[6]=c->r[31]|c->r[31]; // 800C5EA0
  c->r[8]=0u+0x00000001u; // 800C5EA4
  c->r[9]=0u+0x00000000u; // 800C5EA8
  c->lr=0x800C5EB0u; f_8027FFF4(c); // 800C5EAC
  W32(c->r[28]+0x00000054u,c->r[3]); // 800C5EB0
L_800C5EB4:;
  c->r[0]=0u+0x00000001u; // 800C5EB4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C5EB8
  c->r[6]=c->r[29]|c->r[29]; // 800C5EBC
  c->r[7]=c->r[30]|c->r[30]; // 800C5EC0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C5EC4
  c->r[8]=c->r[31]|c->r[31]; // 800C5EC8
  c->r[4]=R32(c->r[28]+0x0000005Cu); // 800C5ECC
  c->r[5]=0u+0x00000010u; // 800C5ED0
  c->r[9]=R32(c->r[28]+0x00000064u); // 800C5ED4
  c->r[10]=0u+0x00000001u; // 800C5ED8
  c->lr=0x800C5EE0u; f_80281A84(c); // 800C5EDC
  cmps(c,0,(int32_t)c->r[3],0); // 800C5EE0
  W32(c->r[28]+0x00000060u,c->r[3]); // 800C5EE4
  if (crb(c,2)) { goto L_800C5EF4; } // 800C5EE8
  c->lr=0x800C5EF0u; f_80295B6C(c); // 800C5EEC
  goto L_800C5F44; // 800C5EF0
L_800C5EF4:;
  c->r[3]=0u+0x00000044u; // 800C5EF4
  c->r[4]=c->r[13]+0xFFFFAFADu; // 800C5EF8
  c->r[5]=0u+0x00000000u; // 800C5EFC
  c->r[6]=0u+0x00001001u; // 800C5F00
  c->lr=0x800C5F08u; f_80244D20(c); // 800C5F04
  cmps(c,0,(int32_t)c->r[3],0); // 800C5F08
  if (crb(c,2)) { goto L_800C5F20; } // 800C5F0C
  c->r[5]=R32(c->r[28]+0x0000005Cu); // 800C5F10
  c->r[4]=0u+0x00000000u; // 800C5F14
  c->r[6]=0u+0x00000010u; // 800C5F18
  c->lr=0x800C5F20u; f_8029316C(c); // 800C5F1C
L_800C5F20:;
  W32(c->r[28]+0x00000060u,c->r[3]); // 800C5F20
  c->r[4]=c->r[29]|c->r[29]; // 800C5F24
  c->r[7]=R32(c->r[28]+0x00000064u); // 800C5F28
  c->r[5]=c->r[30]|c->r[30]; // 800C5F2C
  c->r[6]=c->r[31]|c->r[31]; // 800C5F30
  c->r[8]=0u+0x00000001u; // 800C5F34
  c->r[9]=0u+0x00000000u; // 800C5F38
  c->lr=0x800C5F40u; f_8027FFF4(c); // 800C5F3C
  W32(c->r[28]+0x00000060u,c->r[3]); // 800C5F40
L_800C5F44:;
  c->r[4]=R32(c->r[28]+0x00000068u); // 800C5F44
  cmps(c,0,(int32_t)c->r[4],0); // 800C5F48
  if (crb(c,2)) { goto L_800C607C; } // 800C5F4C
  c->r[0]=0u+0x00000000u; // 800C5F50
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C5F54
  c->r[6]=c->r[29]|c->r[29]; // 800C5F58
  c->r[7]=c->r[30]|c->r[30]; // 800C5F5C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C5F60
  c->r[8]=c->r[31]|c->r[31]; // 800C5F64
  c->r[9]=R32(c->r[28]+0x00000070u); // 800C5F68
  c->r[5]=0u+0x00000000u; // 800C5F6C
  c->r[10]=0u+0x00000001u; // 800C5F70
  c->lr=0x800C5F78u; f_80281A84(c); // 800C5F74
  cmps(c,0,(int32_t)c->r[3],0); // 800C5F78
  W32(c->r[28]+0x0000006Cu,c->r[3]); // 800C5F7C
  if (crb(c,2)) { goto L_800C5F8C; } // 800C5F80
  c->lr=0x800C5F88u; f_80295B6C(c); // 800C5F84
  goto L_800C5FEC; // 800C5F88
L_800C5F8C:;
  c->r[3]=R32(c->r[28]+0x00000070u); // 800C5F8C
  c->r[4]=c->r[31]|c->r[31]; // 800C5F90
  c->r[5]=c->r[30]|c->r[30]; // 800C5F94
  c->lr=0x800C5F9Cu; f_802C0F98(c); // 800C5F98
  c->r[27]=c->r[3]|c->r[3]; // 800C5F9C
  c->r[3]=0u+0x00000050u; // 800C5FA0
  c->r[4]=c->r[13]+0xFFFFAFB2u; // 800C5FA4
  c->r[5]=0u+0x00000000u; // 800C5FA8
  c->r[6]=0u+0x00001001u; // 800C5FAC
  c->lr=0x800C5FB4u; f_80244D20(c); // 800C5FB0
  cmps(c,0,(int32_t)c->r[3],0); // 800C5FB4
  if (crb(c,2)) { goto L_800C5FC8; } // 800C5FB8
  c->r[5]=R32(c->r[28]+0x00000068u); // 800C5FBC
  c->r[4]=c->r[27]|c->r[27]; // 800C5FC0
  c->lr=0x800C5FC8u; f_80297BA8(c); // 800C5FC4
L_800C5FC8:;
  W32(c->r[28]+0x0000006Cu,c->r[3]); // 800C5FC8
  c->r[4]=c->r[29]|c->r[29]; // 800C5FCC
  c->r[7]=R32(c->r[28]+0x00000070u); // 800C5FD0
  c->r[5]=c->r[30]|c->r[30]; // 800C5FD4
  c->r[6]=c->r[31]|c->r[31]; // 800C5FD8
  c->r[8]=0u+0x00000001u; // 800C5FDC
  c->r[9]=0u+0x00000000u; // 800C5FE0
  c->lr=0x800C5FE8u; f_8027FFF4(c); // 800C5FE4
  W32(c->r[28]+0x0000006Cu,c->r[3]); // 800C5FE8
L_800C5FEC:;
  c->r[0]=0u+0x00000001u; // 800C5FEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C5FF0
  c->r[6]=c->r[29]|c->r[29]; // 800C5FF4
  c->r[7]=c->r[30]|c->r[30]; // 800C5FF8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C5FFC
  c->r[8]=c->r[31]|c->r[31]; // 800C6000
  c->r[4]=R32(c->r[28]+0x00000074u); // 800C6004
  c->r[5]=0u+0x00000010u; // 800C6008
  c->r[9]=R32(c->r[28]+0x0000007Cu); // 800C600C
  c->r[10]=0u+0x00000001u; // 800C6010
  c->lr=0x800C6018u; f_80281A84(c); // 800C6014
  cmps(c,0,(int32_t)c->r[3],0); // 800C6018
  W32(c->r[28]+0x00000078u,c->r[3]); // 800C601C
  if (crb(c,2)) { goto L_800C602C; } // 800C6020
  c->lr=0x800C6028u; f_80295B6C(c); // 800C6024
  goto L_800C607C; // 800C6028
L_800C602C:;
  c->r[3]=0u+0x00000044u; // 800C602C
  c->r[4]=c->r[13]+0xFFFFAFB7u; // 800C6030
  c->r[5]=0u+0x00000000u; // 800C6034
  c->r[6]=0u+0x00001001u; // 800C6038
  c->lr=0x800C6040u; f_80244D20(c); // 800C603C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6040
  if (crb(c,2)) { goto L_800C6058; } // 800C6044
  c->r[5]=R32(c->r[28]+0x00000074u); // 800C6048
  c->r[4]=0u+0x00000000u; // 800C604C
  c->r[6]=0u+0x00000010u; // 800C6050
  c->lr=0x800C6058u; f_8029316C(c); // 800C6054
L_800C6058:;
  W32(c->r[28]+0x00000078u,c->r[3]); // 800C6058
  c->r[4]=c->r[29]|c->r[29]; // 800C605C
  c->r[7]=R32(c->r[28]+0x0000007Cu); // 800C6060
  c->r[5]=c->r[30]|c->r[30]; // 800C6064
  c->r[6]=c->r[31]|c->r[31]; // 800C6068
  c->r[8]=0u+0x00000001u; // 800C606C
  c->r[9]=0u+0x00000000u; // 800C6070
  c->lr=0x800C6078u; f_8027FFF4(c); // 800C6074
  W32(c->r[28]+0x00000078u,c->r[3]); // 800C6078
L_800C607C:;
  c->r[4]=R32(c->r[28]+0x00000080u); // 800C607C
  cmps(c,0,(int32_t)c->r[4],0); // 800C6080
  if (crb(c,2)) { goto L_800C6124; } // 800C6084
  c->r[0]=0u+0x00000000u; // 800C6088
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C608C
  c->r[6]=c->r[29]|c->r[29]; // 800C6090
  c->r[7]=c->r[30]|c->r[30]; // 800C6094
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C6098
  c->r[8]=c->r[31]|c->r[31]; // 800C609C
  c->r[9]=R32(c->r[28]+0x00000088u); // 800C60A0
  c->r[5]=0u+0x00000000u; // 800C60A4
  c->r[10]=0u+0x00000001u; // 800C60A8
  c->lr=0x800C60B0u; f_80281A84(c); // 800C60AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C60B0
  W32(c->r[28]+0x00000084u,c->r[3]); // 800C60B4
  if (crb(c,2)) { goto L_800C60C4; } // 800C60B8
  c->lr=0x800C60C0u; f_80295B6C(c); // 800C60BC
  goto L_800C6124; // 800C60C0
L_800C60C4:;
  c->r[3]=R32(c->r[28]+0x00000088u); // 800C60C4
  c->r[4]=c->r[31]|c->r[31]; // 800C60C8
  c->r[5]=c->r[30]|c->r[30]; // 800C60CC
  c->lr=0x800C60D4u; f_802C0F98(c); // 800C60D0
  c->r[27]=c->r[3]|c->r[3]; // 800C60D4
  c->r[3]=0u+0x00000050u; // 800C60D8
  c->r[4]=c->r[13]+0xFFFFAFBCu; // 800C60DC
  c->r[5]=0u+0x00000000u; // 800C60E0
  c->r[6]=0u+0x00001001u; // 800C60E4
  c->lr=0x800C60ECu; f_80244D20(c); // 800C60E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C60EC
  if (crb(c,2)) { goto L_800C6100; } // 800C60F0
  c->r[5]=R32(c->r[28]+0x00000080u); // 800C60F4
  c->r[4]=c->r[27]|c->r[27]; // 800C60F8
  c->lr=0x800C6100u; f_80297BA8(c); // 800C60FC
L_800C6100:;
  W32(c->r[28]+0x00000084u,c->r[3]); // 800C6100
  c->r[4]=c->r[29]|c->r[29]; // 800C6104
  c->r[7]=R32(c->r[28]+0x00000088u); // 800C6108
  c->r[5]=c->r[30]|c->r[30]; // 800C610C
  c->r[6]=c->r[31]|c->r[31]; // 800C6110
  c->r[8]=0u+0x00000001u; // 800C6114
  c->r[9]=0u+0x00000000u; // 800C6118
  c->lr=0x800C6120u; f_8027FFF4(c); // 800C611C
  W32(c->r[28]+0x00000084u,c->r[3]); // 800C6120
L_800C6124:;
  c->r[4]=R32(c->r[28]+0x0000008Cu); // 800C6124
  cmps(c,0,(int32_t)c->r[4],0); // 800C6128
  if (crb(c,2)) { goto L_800C61CC; } // 800C612C
  c->r[0]=0u+0x00000000u; // 800C6130
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C6134
  c->r[6]=c->r[29]|c->r[29]; // 800C6138
  c->r[7]=c->r[30]|c->r[30]; // 800C613C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C6140
  c->r[8]=c->r[31]|c->r[31]; // 800C6144
  c->r[9]=R32(c->r[28]+0x00000094u); // 800C6148
  c->r[5]=0u+0x00000000u; // 800C614C
  c->r[10]=0u+0x00000001u; // 800C6150
  c->lr=0x800C6158u; f_80281A84(c); // 800C6154
  cmps(c,0,(int32_t)c->r[3],0); // 800C6158
  W32(c->r[28]+0x00000090u,c->r[3]); // 800C615C
  if (crb(c,2)) { goto L_800C616C; } // 800C6160
  c->lr=0x800C6168u; f_80295B6C(c); // 800C6164
  goto L_800C61CC; // 800C6168
L_800C616C:;
  c->r[3]=R32(c->r[28]+0x00000094u); // 800C616C
  c->r[4]=c->r[31]|c->r[31]; // 800C6170
  c->r[5]=c->r[30]|c->r[30]; // 800C6174
  c->lr=0x800C617Cu; f_802C0F98(c); // 800C6178
  c->r[27]=c->r[3]|c->r[3]; // 800C617C
  c->r[3]=0u+0x00000050u; // 800C6180
  c->r[4]=c->r[13]+0xFFFFAFC1u; // 800C6184
  c->r[5]=0u+0x00000000u; // 800C6188
  c->r[6]=0u+0x00001001u; // 800C618C
  c->lr=0x800C6194u; f_80244D20(c); // 800C6190
  cmps(c,0,(int32_t)c->r[3],0); // 800C6194
  if (crb(c,2)) { goto L_800C61A8; } // 800C6198
  c->r[5]=R32(c->r[28]+0x0000008Cu); // 800C619C
  c->r[4]=c->r[27]|c->r[27]; // 800C61A0
  c->lr=0x800C61A8u; f_80297BA8(c); // 800C61A4
L_800C61A8:;
  W32(c->r[28]+0x00000090u,c->r[3]); // 800C61A8
  c->r[4]=c->r[29]|c->r[29]; // 800C61AC
  c->r[7]=R32(c->r[28]+0x00000094u); // 800C61B0
  c->r[5]=c->r[30]|c->r[30]; // 800C61B4
  c->r[6]=c->r[31]|c->r[31]; // 800C61B8
  c->r[8]=0u+0x00000001u; // 800C61BC
  c->r[9]=0u+0x00000000u; // 800C61C0
  c->lr=0x800C61C8u; f_8027FFF4(c); // 800C61C4
  W32(c->r[28]+0x00000090u,c->r[3]); // 800C61C8
L_800C61CC:;
  c->r[4]=R32(c->r[28]+0x000000B0u); // 800C61CC
  cmps(c,0,(int32_t)c->r[4],0); // 800C61D0
  if (crb(c,2)) { goto L_800C62B8; } // 800C61D4
  c->r[0]=0u+0x00000000u; // 800C61D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C61DC
  c->r[6]=c->r[29]|c->r[29]; // 800C61E0
  c->r[7]=c->r[30]|c->r[30]; // 800C61E4
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C61E8
  c->r[8]=c->r[31]|c->r[31]; // 800C61EC
  c->r[9]=R32(c->r[28]+0x000000B8u); // 800C61F0
  c->r[5]=0u+0x00000001u; // 800C61F4
  c->r[10]=0u+0x00000001u; // 800C61F8
  c->lr=0x800C6200u; f_80281A84(c); // 800C61FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C6200
  W32(c->r[28]+0x000000B4u,c->r[3]); // 800C6204
  if (crb(c,2)) { goto L_800C6214; } // 800C6208
  c->lr=0x800C6210u; f_80295B6C(c); // 800C620C
  goto L_800C62B8; // 800C6210
L_800C6214:;
  c->r[3]=R32(c->r[28]+0x000000B8u); // 800C6214
  c->r[4]=c->r[31]|c->r[31]; // 800C6218
  c->r[5]=c->r[30]|c->r[30]; // 800C621C
  c->lr=0x800C6224u; f_802C0F98(c); // 800C6220
  c->r[27]=c->r[3]|c->r[3]; // 800C6224
  c->r[3]=0u+0x000000DCu; // 800C6228
  c->r[4]=c->r[13]+0xFFFFAFC6u; // 800C622C
  c->r[5]=0u+0x00000000u; // 800C6230
  c->r[6]=0u+0x00001001u; // 800C6234
  c->lr=0x800C623Cu; f_80244D20(c); // 800C6238
  cmps(c,0,(int32_t)c->r[3],0); // 800C623C
  if (crb(c,2)) { goto L_800C625C; } // 800C6240
  c->r[7]=0u+0x28080000u; // 800C6244
  c->r[5]=R32(c->r[28]+0x000000B0u); // 800C6248
  c->r[4]=c->r[27]|c->r[27]; // 800C624C
  c->r[6]=0u+0x00000000u; // 800C6250
  c->r[7]=c->r[7]+0x00000080u; // 800C6254
  c->lr=0x800C625Cu; f_80283710(c); // 800C6258
L_800C625C:;
  W32(c->r[28]+0x000000B4u,c->r[3]); // 800C625C
  c->r[26]=0u+0x00000000u; // 800C6260
  c->r[27]=0u+0x00000000u; // 800C6264
  goto L_800C6288; // 800C6268
L_800C626C:;
  c->r[5]=c->r[28]+c->r[27]; // 800C626C
  c->r[3]=R32(c->r[28]+0x000000B4u); // 800C6270
  c->r[4]=R32(c->r[5]+0x000000C0u); // 800C6274
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6278
  c->lr=0x800C6280u; f_802840CC(c); // 800C627C
  c->r[26]=c->r[26]+0x00000001u; // 800C6280
  c->r[27]=c->r[27]+0x00000004u; // 800C6284
L_800C6288:;
  c->r[0]=R32(c->r[28]+0x000000BCu); // 800C6288
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C628C
  if (crb(c,0)) { IRQCHK(c); goto L_800C626C; } // 800C6290
  c->r[3]=R32(c->r[28]+0x000000B4u); // 800C6294
  c->r[4]=c->r[29]|c->r[29]; // 800C6298
  c->r[7]=R32(c->r[28]+0x000000B8u); // 800C629C
  c->r[5]=c->r[30]|c->r[30]; // 800C62A0
  c->r[6]=c->r[31]|c->r[31]; // 800C62A4
  c->r[8]=0u+0x00000001u; // 800C62A8
  c->r[9]=0u+0x00000000u; // 800C62AC
  c->lr=0x800C62B4u; f_8027FFF4(c); // 800C62B0
  W32(c->r[28]+0x000000B4u,c->r[3]); // 800C62B4
L_800C62B8:;
  c->r[4]=R32(c->r[28]+0x000000E8u); // 800C62B8
  cmps(c,0,(int32_t)c->r[4],0); // 800C62BC
  if (crb(c,2)) { goto L_800C63A4; } // 800C62C0
  c->r[0]=0u+0x00000000u; // 800C62C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C62C8
  c->r[6]=c->r[29]|c->r[29]; // 800C62CC
  c->r[7]=c->r[30]|c->r[30]; // 800C62D0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C62D4
  c->r[8]=c->r[31]|c->r[31]; // 800C62D8
  c->r[9]=R32(c->r[28]+0x000000F0u); // 800C62DC
  c->r[5]=0u+0x00000001u; // 800C62E0
  c->r[10]=0u+0x00000001u; // 800C62E4
  c->lr=0x800C62ECu; f_80281A84(c); // 800C62E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C62EC
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800C62F0
  if (crb(c,2)) { goto L_800C6300; } // 800C62F4
  c->lr=0x800C62FCu; f_80295B6C(c); // 800C62F8
  goto L_800C63A4; // 800C62FC
L_800C6300:;
  c->r[3]=R32(c->r[28]+0x000000F0u); // 800C6300
  c->r[4]=c->r[31]|c->r[31]; // 800C6304
  c->r[5]=c->r[30]|c->r[30]; // 800C6308
  c->lr=0x800C6310u; f_802C0F98(c); // 800C630C
  c->r[26]=c->r[3]|c->r[3]; // 800C6310
  c->r[3]=0u+0x000000DCu; // 800C6314
  c->r[4]=c->r[13]+0xFFFFAFCBu; // 800C6318
  c->r[5]=0u+0x00000000u; // 800C631C
  c->r[6]=0u+0x00001001u; // 800C6320
  c->lr=0x800C6328u; f_80244D20(c); // 800C6324
  cmps(c,0,(int32_t)c->r[3],0); // 800C6328
  if (crb(c,2)) { goto L_800C6348; } // 800C632C
  c->r[7]=0u+0x28080000u; // 800C6330
  c->r[5]=R32(c->r[28]+0x000000E8u); // 800C6334
  c->r[4]=c->r[26]|c->r[26]; // 800C6338
  c->r[6]=0u+0x00000000u; // 800C633C
  c->r[7]=c->r[7]+0x00000080u; // 800C6340
  c->lr=0x800C6348u; f_80283710(c); // 800C6344
L_800C6348:;
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800C6348
  c->r[26]=0u+0x00000000u; // 800C634C
  c->r[27]=0u+0x00000000u; // 800C6350
  goto L_800C6374; // 800C6354
L_800C6358:;
  c->r[5]=c->r[28]+c->r[27]; // 800C6358
  c->r[3]=R32(c->r[28]+0x000000ECu); // 800C635C
  c->r[4]=R32(c->r[5]+0x000000F8u); // 800C6360
  {uint32_t ea=c->r[5]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6364
  c->lr=0x800C636Cu; f_802840CC(c); // 800C6368
  c->r[26]=c->r[26]+0x00000001u; // 800C636C
  c->r[27]=c->r[27]+0x00000004u; // 800C6370
L_800C6374:;
  c->r[0]=R32(c->r[28]+0x000000F4u); // 800C6374
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C6378
  if (crb(c,0)) { IRQCHK(c); goto L_800C6358; } // 800C637C
  c->r[3]=R32(c->r[28]+0x000000ECu); // 800C6380
  c->r[4]=c->r[29]|c->r[29]; // 800C6384
  c->r[7]=R32(c->r[28]+0x000000F0u); // 800C6388
  c->r[5]=c->r[30]|c->r[30]; // 800C638C
  c->r[6]=c->r[31]|c->r[31]; // 800C6390
  c->r[8]=0u+0x00000001u; // 800C6394
  c->r[9]=0u+0x00000000u; // 800C6398
  c->lr=0x800C63A0u; f_8027FFF4(c); // 800C639C
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800C63A0
L_800C63A4:;
  c->r[4]=R32(c->r[28]+0x00000120u); // 800C63A4
  cmps(c,0,(int32_t)c->r[4],0); // 800C63A8
  if (crb(c,2)) { goto L_800C6490; } // 800C63AC
  c->r[0]=0u+0x00000000u; // 800C63B0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C63B4
  c->r[6]=c->r[29]|c->r[29]; // 800C63B8
  c->r[7]=c->r[30]|c->r[30]; // 800C63BC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C63C0
  c->r[8]=c->r[31]|c->r[31]; // 800C63C4
  c->r[9]=R32(c->r[28]+0x00000128u); // 800C63C8
  c->r[5]=0u+0x00000001u; // 800C63CC
  c->r[10]=0u+0x00000001u; // 800C63D0
  c->lr=0x800C63D8u; f_80281A84(c); // 800C63D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C63D8
  W32(c->r[28]+0x00000124u,c->r[3]); // 800C63DC
  if (crb(c,2)) { goto L_800C63EC; } // 800C63E0
  c->lr=0x800C63E8u; f_80295B6C(c); // 800C63E4
  goto L_800C6490; // 800C63E8
L_800C63EC:;
  c->r[3]=R32(c->r[28]+0x00000128u); // 800C63EC
  c->r[4]=c->r[31]|c->r[31]; // 800C63F0
  c->r[5]=c->r[30]|c->r[30]; // 800C63F4
  c->lr=0x800C63FCu; f_802C0F98(c); // 800C63F8
  c->r[26]=c->r[3]|c->r[3]; // 800C63FC
  c->r[3]=0u+0x000000DCu; // 800C6400
  c->r[4]=c->r[13]+0xFFFFAFD0u; // 800C6404
  c->r[5]=0u+0x00000000u; // 800C6408
  c->r[6]=0u+0x00001001u; // 800C640C
  c->lr=0x800C6414u; f_80244D20(c); // 800C6410
  cmps(c,0,(int32_t)c->r[3],0); // 800C6414
  if (crb(c,2)) { goto L_800C6434; } // 800C6418
  c->r[7]=0u+0x28080000u; // 800C641C
  c->r[5]=R32(c->r[28]+0x00000120u); // 800C6420
  c->r[4]=c->r[26]|c->r[26]; // 800C6424
  c->r[6]=0u+0x00000000u; // 800C6428
  c->r[7]=c->r[7]+0x00000080u; // 800C642C
  c->lr=0x800C6434u; f_80283710(c); // 800C6430
L_800C6434:;
  W32(c->r[28]+0x00000124u,c->r[3]); // 800C6434
  c->r[26]=0u+0x00000000u; // 800C6438
  c->r[27]=0u+0x00000000u; // 800C643C
  goto L_800C6460; // 800C6440
L_800C6444:;
  c->r[5]=c->r[28]+c->r[27]; // 800C6444
  c->r[3]=R32(c->r[28]+0x00000124u); // 800C6448
  c->r[4]=R32(c->r[5]+0x00000130u); // 800C644C
  {uint32_t ea=c->r[5]+0x00000144u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6450
  c->lr=0x800C6458u; f_802840CC(c); // 800C6454
  c->r[26]=c->r[26]+0x00000001u; // 800C6458
  c->r[27]=c->r[27]+0x00000004u; // 800C645C
L_800C6460:;
  c->r[0]=R32(c->r[28]+0x0000012Cu); // 800C6460
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C6464
  if (crb(c,0)) { IRQCHK(c); goto L_800C6444; } // 800C6468
  c->r[3]=R32(c->r[28]+0x00000124u); // 800C646C
  c->r[4]=c->r[29]|c->r[29]; // 800C6470
  c->r[7]=R32(c->r[28]+0x00000128u); // 800C6474
  c->r[5]=c->r[30]|c->r[30]; // 800C6478
  c->r[6]=c->r[31]|c->r[31]; // 800C647C
  c->r[8]=0u+0x00000001u; // 800C6480
  c->r[9]=0u+0x00000000u; // 800C6484
  c->lr=0x800C648Cu; f_8027FFF4(c); // 800C6488
  W32(c->r[28]+0x00000124u,c->r[3]); // 800C648C
L_800C6490:;
  c->r[4]=R32(c->r[28]+0x00000158u); // 800C6490
  cmps(c,0,(int32_t)c->r[4],0); // 800C6494
  if (crb(c,2)) { goto L_800C657C; } // 800C6498
  c->r[0]=0u+0x00000000u; // 800C649C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C64A0
  c->r[6]=c->r[29]|c->r[29]; // 800C64A4
  c->r[7]=c->r[30]|c->r[30]; // 800C64A8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C64AC
  c->r[8]=c->r[31]|c->r[31]; // 800C64B0
  c->r[9]=R32(c->r[28]+0x00000160u); // 800C64B4
  c->r[5]=0u+0x00000001u; // 800C64B8
  c->r[10]=0u+0x00000001u; // 800C64BC
  c->lr=0x800C64C4u; f_80281A84(c); // 800C64C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C64C4
  W32(c->r[28]+0x0000015Cu,c->r[3]); // 800C64C8
  if (crb(c,2)) { goto L_800C64D8; } // 800C64CC
  c->lr=0x800C64D4u; f_80295B6C(c); // 800C64D0
  goto L_800C657C; // 800C64D4
L_800C64D8:;
  c->r[3]=R32(c->r[28]+0x00000160u); // 800C64D8
  c->r[4]=c->r[31]|c->r[31]; // 800C64DC
  c->r[5]=c->r[30]|c->r[30]; // 800C64E0
  c->lr=0x800C64E8u; f_802C0F98(c); // 800C64E4
  c->r[26]=c->r[3]|c->r[3]; // 800C64E8
  c->r[3]=0u+0x00000100u; // 800C64EC
  c->r[4]=c->r[13]+0xFFFFAFD5u; // 800C64F0
  c->r[5]=0u+0x00000000u; // 800C64F4
  c->r[6]=0u+0x00001001u; // 800C64F8
  c->lr=0x800C6500u; f_80244D20(c); // 800C64FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C6500
  if (crb(c,2)) { goto L_800C6520; } // 800C6504
  c->r[7]=0u+0x10280000u; // 800C6508
  c->r[5]=R32(c->r[28]+0x00000158u); // 800C650C
  c->r[4]=c->r[26]|c->r[26]; // 800C6510
  c->r[6]=0u+0x00000002u; // 800C6514
  c->r[7]=c->r[7]+0x00000080u; // 800C6518
  c->lr=0x800C6520u; f_8028738C(c); // 800C651C
L_800C6520:;
  W32(c->r[28]+0x0000015Cu,c->r[3]); // 800C6520
  c->r[26]=0u+0x00000000u; // 800C6524
  c->r[27]=0u+0x00000000u; // 800C6528
  goto L_800C654C; // 800C652C
L_800C6530:;
  c->r[5]=c->r[28]+c->r[27]; // 800C6530
  c->r[3]=R32(c->r[28]+0x0000015Cu); // 800C6534
  c->r[4]=R32(c->r[5]+0x00000168u); // 800C6538
  {uint32_t ea=c->r[5]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C653C
  c->lr=0x800C6544u; f_802840CC(c); // 800C6540
  c->r[26]=c->r[26]+0x00000001u; // 800C6544
  c->r[27]=c->r[27]+0x00000004u; // 800C6548
L_800C654C:;
  c->r[0]=R32(c->r[28]+0x00000164u); // 800C654C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C6550
  if (crb(c,0)) { IRQCHK(c); goto L_800C6530; } // 800C6554
  c->r[3]=R32(c->r[28]+0x0000015Cu); // 800C6558
  c->r[4]=c->r[29]|c->r[29]; // 800C655C
  c->r[7]=R32(c->r[28]+0x00000160u); // 800C6560
  c->r[5]=c->r[30]|c->r[30]; // 800C6564
  c->r[6]=c->r[31]|c->r[31]; // 800C6568
  c->r[8]=0u+0x00000001u; // 800C656C
  c->r[9]=0u+0x00000000u; // 800C6570
  c->lr=0x800C6578u; f_8027FFF4(c); // 800C6574
  W32(c->r[28]+0x0000015Cu,c->r[3]); // 800C6578
L_800C657C:;
  c->r[11]=c->r[1]+0x00000030u; // 800C657C
  c->lr=0x800C6584u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6580
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C6584
  c->lr=c->r[0]; // 800C6588
  c->r[1]=c->r[1]+0x00000030u; // 800C658C
  return; // 800C6590
}

// fn_800C6594
void f_800C6594(Ctx* __restrict c) {
  trace_call(0x800C6594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6594
  c->r[0]=c->lr; // 800C6598
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C659C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C65A0
  c->r[31]=c->r[3]|c->r[3]; // 800C65A4
  c->r[0]=R32(c->r[3]+0x00000190u); // 800C65A8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800C65AC
  W32(c->r[3]+0x00000190u,c->r[0]); // 800C65B0
  if (!crb(c,2)) { goto L_800C66AC; } // 800C65B4
  c->lr=0x800C65BCu; f_802B11D0(c); // 800C65B8
  c->r[3]=R32(c->r[31]+0x00000054u); // 800C65BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C65C0
  if (crb(c,2)) { goto L_800C65D4; } // 800C65C4
  c->lr=0x800C65CCu; f_80295B7C(c); // 800C65C8
  c->r[0]=0u+0x00000000u; // 800C65CC
  W32(c->r[31]+0x00000054u,c->r[0]); // 800C65D0
L_800C65D4:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 800C65D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C65D8
  if (crb(c,2)) { goto L_800C65EC; } // 800C65DC
  c->lr=0x800C65E4u; f_80295B7C(c); // 800C65E0
  c->r[0]=0u+0x00000000u; // 800C65E4
  W32(c->r[31]+0x00000060u,c->r[0]); // 800C65E8
L_800C65EC:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800C65EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C65F0
  if (crb(c,2)) { goto L_800C6604; } // 800C65F4
  c->lr=0x800C65FCu; f_80295B7C(c); // 800C65F8
  c->r[0]=0u+0x00000000u; // 800C65FC
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800C6600
L_800C6604:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800C6604
  cmps(c,0,(int32_t)c->r[3],0); // 800C6608
  if (crb(c,2)) { goto L_800C661C; } // 800C660C
  c->lr=0x800C6614u; f_80295B7C(c); // 800C6610
  c->r[0]=0u+0x00000000u; // 800C6614
  W32(c->r[31]+0x00000078u,c->r[0]); // 800C6618
L_800C661C:;
  c->r[3]=R32(c->r[31]+0x00000084u); // 800C661C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6620
  if (crb(c,2)) { goto L_800C6634; } // 800C6624
  c->lr=0x800C662Cu; f_80295B7C(c); // 800C6628
  c->r[0]=0u+0x00000000u; // 800C662C
  W32(c->r[31]+0x00000084u,c->r[0]); // 800C6630
L_800C6634:;
  c->r[3]=R32(c->r[31]+0x00000090u); // 800C6634
  cmps(c,0,(int32_t)c->r[3],0); // 800C6638
  if (crb(c,2)) { goto L_800C664C; } // 800C663C
  c->lr=0x800C6644u; f_80295B7C(c); // 800C6640
  c->r[0]=0u+0x00000000u; // 800C6644
  W32(c->r[31]+0x00000090u,c->r[0]); // 800C6648
L_800C664C:;
  c->r[3]=R32(c->r[31]+0x000000B4u); // 800C664C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6650
  if (crb(c,2)) { goto L_800C6664; } // 800C6654
  c->lr=0x800C665Cu; f_80295B7C(c); // 800C6658
  c->r[0]=0u+0x00000000u; // 800C665C
  W32(c->r[31]+0x000000B4u,c->r[0]); // 800C6660
L_800C6664:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 800C6664
  cmps(c,0,(int32_t)c->r[3],0); // 800C6668
  if (crb(c,2)) { goto L_800C667C; } // 800C666C
  c->lr=0x800C6674u; f_80295B7C(c); // 800C6670
  c->r[0]=0u+0x00000000u; // 800C6674
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800C6678
L_800C667C:;
  c->r[3]=R32(c->r[31]+0x00000124u); // 800C667C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6680
  if (crb(c,2)) { goto L_800C6694; } // 800C6684
  c->lr=0x800C668Cu; f_80295B7C(c); // 800C6688
  c->r[0]=0u+0x00000000u; // 800C668C
  W32(c->r[31]+0x00000124u,c->r[0]); // 800C6690
L_800C6694:;
  c->r[3]=R32(c->r[31]+0x0000015Cu); // 800C6694
  cmps(c,0,(int32_t)c->r[3],0); // 800C6698
  if (crb(c,2)) { goto L_800C66AC; } // 800C669C
  c->lr=0x800C66A4u; f_80295B7C(c); // 800C66A0
  c->r[0]=0u+0x00000000u; // 800C66A4
  W32(c->r[31]+0x0000015Cu,c->r[0]); // 800C66A8
L_800C66AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C66AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C66B0
  c->lr=c->r[0]; // 800C66B4
  c->r[1]=c->r[1]+0x00000010u; // 800C66B8
  return; // 800C66BC
}

// fn_800C66C0
void f_800C66C0(Ctx* __restrict c) {
  trace_call(0x800C66C0u);
  return; // 800C66C0
}

// fn_800C66C4
void f_800C66C4(Ctx* __restrict c) {
  trace_call(0x800C66C4u);
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C66C4
  c->r[4]=0u+0x00000000u; // 800C66C8
  c->r[0]=0u+0x00000004u; // 800C66CC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C66D0
  W32(c->r[3]+0x00000020u,c->r[4]); // 800C66D4
  W32(c->r[3]+0x00000024u,c->r[4]); // 800C66D8
  W32(c->r[3]+0x00000028u,c->r[4]); // 800C66DC
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800C66E0
  W32(c->r[3]+0x00000030u,c->r[4]); // 800C66E4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800C66E8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800C66EC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 800C66F0
  W32(c->r[3]+0x00000040u,c->r[4]); // 800C66F4
  W32(c->r[3]+0x00000044u,c->r[4]); // 800C66F8
  W32(c->r[3]+0x00000048u,c->r[4]); // 800C66FC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C6700
  W32(c->r[3]+0x00000050u,c->r[4]); // 800C6704
  W32(c->r[3]+0x00000054u,c->r[4]); // 800C6708
  W32(c->r[3]+0x00000058u,c->r[0]); // 800C670C
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 800C6710
  W32(c->r[3]+0x00000060u,c->r[4]); // 800C6714
  W32(c->r[3]+0x00000064u,c->r[0]); // 800C6718
  W32(c->r[3]+0x00000068u,c->r[4]); // 800C671C
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 800C6720
  W32(c->r[3]+0x00000070u,c->r[0]); // 800C6724
  W32(c->r[3]+0x00000074u,c->r[4]); // 800C6728
  W32(c->r[3]+0x00000078u,c->r[4]); // 800C672C
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800C6730
  W32(c->r[3]+0x00000080u,c->r[4]); // 800C6734
  W32(c->r[3]+0x00000084u,c->r[4]); // 800C6738
  W32(c->r[3]+0x00000088u,c->r[0]); // 800C673C
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 800C6740
  W32(c->r[3]+0x00000090u,c->r[4]); // 800C6744
  W32(c->r[3]+0x00000094u,c->r[0]); // 800C6748
  W32(c->r[3]+0x000000B0u,c->r[4]); // 800C674C
  W32(c->r[3]+0x000000B4u,c->r[4]); // 800C6750
  W32(c->r[3]+0x000000B8u,c->r[0]); // 800C6754
  W32(c->r[3]+0x000000E8u,c->r[4]); // 800C6758
  W32(c->r[3]+0x000000ECu,c->r[4]); // 800C675C
  W32(c->r[3]+0x000000F0u,c->r[0]); // 800C6760
  W32(c->r[3]+0x00000120u,c->r[4]); // 800C6764
  W32(c->r[3]+0x00000124u,c->r[4]); // 800C6768
  W32(c->r[3]+0x00000128u,c->r[0]); // 800C676C
  W32(c->r[3]+0x00000158u,c->r[4]); // 800C6770
  W32(c->r[3]+0x0000015Cu,c->r[4]); // 800C6774
  W32(c->r[3]+0x00000160u,c->r[0]); // 800C6778
  return; // 800C677C
}

// fn_800C6780
void f_800C6780(Ctx* __restrict c) {
  trace_call(0x800C6780u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6780
  c->r[0]=c->lr; // 800C6784
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C6788
  c->r[11]=c->r[1]+0x00000020u; // 800C678C
  c->lr=0x800C6794u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6790
  cmps(c,0,(int32_t)c->r[5],0); // 800C6794
  c->r[28]=c->r[3]|c->r[3]; // 800C6798
  c->r[29]=c->r[4]|c->r[4]; // 800C679C
  c->r[30]=c->r[7]|c->r[7]; // 800C67A0
  if (crb(c,2)) { goto L_800C67B0; } // 800C67A4
  c->r[31]=c->r[5]|c->r[5]; // 800C67A8
  goto L_800C67B4; // 800C67AC
L_800C67B0:;
  c->r[31]=c->r[28]|c->r[28]; // 800C67B0
L_800C67B4:;
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C67B4
  c->r[3]=c->r[31]+0x00000050u; // 800C67B8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C67BC
  c->r[0]=R32(c->r[4]+0x00000020u); // 800C67C0
  W32(c->r[31]+0x00000020u,c->r[0]); // 800C67C4
  c->r[0]=R32(c->r[4]+0x00000024u); // 800C67C8
  W32(c->r[31]+0x00000024u,c->r[0]); // 800C67CC
  c->r[0]=R32(c->r[4]+0x00000028u); // 800C67D0
  W32(c->r[31]+0x00000028u,c->r[0]); // 800C67D4
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 800C67D8
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800C67DC
  c->r[0]=R32(c->r[4]+0x00000030u); // 800C67E0
  W32(c->r[31]+0x00000030u,c->r[0]); // 800C67E4
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C67E8
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800C67EC
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C67F0
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800C67F4
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C67F8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800C67FC
  c->r[0]=R32(c->r[4]+0x00000040u); // 800C6800
  W32(c->r[31]+0x00000040u,c->r[0]); // 800C6804
  c->r[0]=R32(c->r[4]+0x00000044u); // 800C6808
  W32(c->r[31]+0x00000044u,c->r[0]); // 800C680C
  c->r[0]=R32(c->r[4]+0x00000048u); // 800C6810
  W32(c->r[31]+0x00000048u,c->r[0]); // 800C6814
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6818
  c->r[4]=c->r[4]+0x00000050u; // 800C681C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C6820
  c->lr=0x800C6828u; f_800C4E54(c); // 800C6824
  c->r[3]=c->r[31]+0x0000005Cu; // 800C6828
  c->r[4]=c->r[29]+0x0000005Cu; // 800C682C
  c->lr=0x800C6834u; f_8003BDD0(c); // 800C6830
  c->r[3]=c->r[31]+0x00000068u; // 800C6834
  c->r[4]=c->r[29]+0x00000068u; // 800C6838
  c->lr=0x800C6840u; f_800C4E54(c); // 800C683C
  c->r[3]=c->r[31]+0x00000074u; // 800C6840
  c->r[4]=c->r[29]+0x00000074u; // 800C6844
  c->lr=0x800C684Cu; f_8003BDD0(c); // 800C6848
  c->r[3]=c->r[31]+0x00000080u; // 800C684C
  c->r[4]=c->r[29]+0x00000080u; // 800C6850
  c->lr=0x800C6858u; f_8003BDD0(c); // 800C6854
  c->r[3]=c->r[31]+0x0000008Cu; // 800C6858
  c->r[4]=c->r[29]+0x0000008Cu; // 800C685C
  c->lr=0x800C6864u; f_8003BDD0(c); // 800C6860
  c->r[3]=c->r[31]+0x000000B0u; // 800C6864
  c->r[4]=c->r[29]+0x000000B0u; // 800C6868
  c->lr=0x800C6870u; f_800C4F00(c); // 800C686C
  c->r[3]=c->r[31]+0x000000E8u; // 800C6870
  c->r[4]=c->r[29]+0x000000E8u; // 800C6874
  c->lr=0x800C687Cu; f_800C4F00(c); // 800C6878
  c->r[3]=c->r[31]+0x00000120u; // 800C687C
  c->r[4]=c->r[29]+0x00000120u; // 800C6880
  c->lr=0x800C6888u; f_800C4F00(c); // 800C6884
  c->r[3]=c->r[31]+0x00000158u; // 800C6888
  c->r[4]=c->r[29]+0x00000158u; // 800C688C
  c->lr=0x800C6894u; f_800C4F00(c); // 800C6890
  cmps(c,0,(int32_t)c->r[30],0); // 800C6894
  if (crb(c,2)) { goto L_800C68BC; } // 800C6898
  c->r[3]=R32(c->r[28]+0x00000190u); // 800C689C
  cmps(c,0,(int32_t)c->r[3],0); // 800C68A0
  if (crb(c,1)) { goto L_800C68B4; } // 800C68A4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C68A8
  W32(c->r[28]+0x00000190u,c->r[0]); // 800C68AC
  goto L_800C68BC; // 800C68B0
L_800C68B4:;
  c->r[0]=c->r[3]+0x00000001u; // 800C68B4
  W32(c->r[28]+0x00000190u,c->r[0]); // 800C68B8
L_800C68BC:;
  c->r[11]=c->r[1]+0x00000020u; // 800C68BC
  c->lr=0x800C68C4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C68C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C68C4
  c->lr=c->r[0]; // 800C68C8
  c->r[1]=c->r[1]+0x00000020u; // 800C68CC
  return; // 800C68D0
}

// fn_800C68D4
void f_800C68D4(Ctx* __restrict c) {
  trace_call(0x800C68D4u);
  c->r[3]=0u+0x00000000u; // 800C68D4
  return; // 800C68D8
}

// fn_800C68DC
void f_800C68DC(Ctx* __restrict c) {
  trace_call(0x800C68DCu);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C68DC
  c->r[0]=0u+0x43300000u; // 800C68E0
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C68E4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800C68E8
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C68EC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800C68F0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 800C68F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C68F8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C68FC
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[0]=RF64(ea);} // 800C6900
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C6904
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6908
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[3]);} // 800C690C
  c->r[6]=R32(c->r[4]+0x00000020u); // 800C6910
  c->r[0]=R32(c->r[5]+0x00000020u); // 800C6914
  c->r[6]=c->r[6]^0x80000000u; // 800C6918
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C691C
  c->r[0]=c->r[0]^0x80000000u; // 800C6920
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6924
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C6928
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C692C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C6930
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C6934
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6938
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C693C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6940
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C6944
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 800C6948
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C694C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800C6950
  c->r[6]=R32(c->r[4]+0x00000024u); // 800C6954
  c->r[0]=R32(c->r[5]+0x00000024u); // 800C6958
  c->r[6]=c->r[6]^0x80000000u; // 800C695C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C6960
  c->r[0]=c->r[0]^0x80000000u; // 800C6964
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6968
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C696C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C6970
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C6974
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C6978
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C697C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6980
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6984
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C6988
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[3]);} // 800C698C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6990
  W32(c->r[3]+0x00000024u,c->r[0]); // 800C6994
  c->r[6]=R32(c->r[4]+0x00000028u); // 800C6998
  c->r[0]=R32(c->r[5]+0x00000028u); // 800C699C
  c->r[6]=c->r[6]^0x80000000u; // 800C69A0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C69A4
  c->r[0]=c->r[0]^0x80000000u; // 800C69A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C69AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C69B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C69B4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C69B8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C69BC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C69C0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C69C4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C69C8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C69CC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[3]);} // 800C69D0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C69D4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C69D8
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 800C69DC
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 800C69E0
  c->r[6]=c->r[6]^0x80000000u; // 800C69E4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C69E8
  c->r[0]=c->r[0]^0x80000000u; // 800C69EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C69F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C69F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C69F8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C69FC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C6A00
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6A04
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6A08
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6A0C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C6A10
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[3]);} // 800C6A14
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C6A18
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800C6A1C
  c->r[6]=R32(c->r[4]+0x00000030u); // 800C6A20
  c->r[0]=R32(c->r[5]+0x00000030u); // 800C6A24
  c->r[6]=c->r[6]^0x80000000u; // 800C6A28
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C6A2C
  c->r[0]=c->r[0]^0x80000000u; // 800C6A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6A34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C6A38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C6A3C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C6A40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C6A44
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6A48
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6A4C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6A50
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C6A54
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800C6A58
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800C6A5C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800C6A60
  {uint32_t ea=c->r[4]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C6A64
  {uint32_t ea=c->r[5]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6A68
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6A6C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6A70
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6A74
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[3]);} // 800C6A78
  {uint32_t ea=c->r[4]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C6A7C
  {uint32_t ea=c->r[5]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6A80
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6A84
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6A88
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6A8C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[3]);} // 800C6A90
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800C6A94
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6A98
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6A9C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6AA0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6AA4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[3]);} // 800C6AA8
  c->r[6]=R32(c->r[4]+0x00000040u); // 800C6AAC
  c->r[0]=R32(c->r[5]+0x00000040u); // 800C6AB0
  c->r[6]=c->r[6]^0x80000000u; // 800C6AB4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C6AB8
  c->r[0]=c->r[0]^0x80000000u; // 800C6ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6AC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C6AC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C6AC8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C6ACC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C6AD0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6AD4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6AD8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6ADC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C6AE0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 800C6AE4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C6AE8
  W32(c->r[3]+0x00000040u,c->r[0]); // 800C6AEC
  c->r[6]=R32(c->r[4]+0x00000044u); // 800C6AF0
  c->r[0]=R32(c->r[5]+0x00000044u); // 800C6AF4
  c->r[6]=c->r[6]^0x80000000u; // 800C6AF8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C6AFC
  c->r[0]=c->r[0]^0x80000000u; // 800C6B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6B04
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C6B08
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C6B0C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C6B10
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C6B14
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800C6B18
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C6B1C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C6B20
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C6B24
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[3]);} // 800C6B28
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C6B2C
  W32(c->r[3]+0x00000044u,c->r[0]); // 800C6B30
  c->r[6]=R32(c->r[4]+0x00000048u); // 800C6B34
  c->r[0]=R32(c->r[5]+0x00000048u); // 800C6B38
  c->r[6]=c->r[6]^0x80000000u; // 800C6B3C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C6B40
  c->r[0]=c->r[0]^0x80000000u; // 800C6B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6B48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C6B4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C6B50
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C6B54
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800C6B58
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[4]); // 800C6B5C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C6B60
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800C6B64
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C6B68
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800C6B6C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C6B70
  W32(c->r[3]+0x00000048u,c->r[0]); // 800C6B74
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6B78
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6B7C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800C6B80
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C6B84
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C6B88
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C6B8C
  c->r[1]=c->r[1]+0x00000060u; // 800C6B90
  return; // 800C6B94
}

// fn_800C6B98
void f_800C6B98(Ctx* __restrict c) {
  trace_call(0x800C6B98u);
  c->r[3]=0u+0x00000194u; // 800C6B98
  return; // 800C6B9C
}

// fn_800C6BA0
void f_800C6BA0(Ctx* __restrict c) {
  trace_call(0x800C6BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6BA0
  c->r[0]=c->lr; // 800C6BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6BAC
  c->r[31]=c->r[3]|c->r[3]; // 800C6BB0
  c->lr=0x800C6BB8u; f_800C5944(c); // 800C6BB4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C6BB8
  c->r[3]=0u+0x80420000u; // 800C6BBC
  c->r[3]=c->r[3]+0xFFFF9E88u; // 800C6BC0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C6BC4
  c->r[0]=c->r[0]|0x80000000u; // 800C6BC8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C6BCC
  c->r[3]=c->r[31]|c->r[31]; // 800C6BD0
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C6BD4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C6BD8
  c->ctr=c->r[12]; // 800C6BDC
  if (true) { c->lr=0x800C6BE4u; dispatch(c,c->ctr); } // 800C6BE0
  c->r[3]=c->r[31]|c->r[31]; // 800C6BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6BE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6BEC
  c->lr=c->r[0]; // 800C6BF0
  c->r[1]=c->r[1]+0x00000010u; // 800C6BF4
  return; // 800C6BF8
}

// fn_800C6BFC
void f_800C6BFC(Ctx* __restrict c) {
  trace_call(0x800C6BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6BFC
  c->r[0]=c->lr; // 800C6C00
  cmps(c,0,(int32_t)c->r[3],0); // 800C6C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6C08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6C0C
  c->r[30]=c->r[3]|c->r[3]; // 800C6C10
  c->r[31]=c->r[4]|c->r[4]; // 800C6C14
  if (crb(c,2)) { goto L_800C6C34; } // 800C6C18
  c->r[4]=0u+0x00000000u; // 800C6C1C
  c->lr=0x800C6C24u; f_802B1180(c); // 800C6C20
  cmps(c,0,(int32_t)c->r[31],0); // 800C6C24
  if (!crb(c,1)) { goto L_800C6C34; } // 800C6C28
  c->r[3]=c->r[30]|c->r[30]; // 800C6C2C
  c->lr=0x800C6C34u; f_80244DC0(c); // 800C6C30
L_800C6C34:;
  c->r[3]=c->r[30]|c->r[30]; // 800C6C34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6C38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6C3C
  c->lr=c->r[0]; // 800C6C40
  c->r[1]=c->r[1]+0x00000010u; // 800C6C44
  return; // 800C6C48
}

// fn_800C6C4C
void f_800C6C4C(Ctx* __restrict c) {
  trace_call(0x800C6C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6C4C
  c->r[0]=c->lr; // 800C6C50
  c->r[3]=0u+0x00000194u; // 800C6C54
  c->r[4]=c->r[13]+0xFFFFAFDAu; // 800C6C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6C5C
  c->r[5]=0u+0x00000000u; // 800C6C60
  c->r[6]=0u+0x00001001u; // 800C6C64
  c->lr=0x800C6C6Cu; f_80244D20(c); // 800C6C68
  cmps(c,0,(int32_t)c->r[3],0); // 800C6C6C
  if (crb(c,2)) { goto L_800C6C78; } // 800C6C70
  c->lr=0x800C6C78u; f_800C6BA0(c); // 800C6C74
L_800C6C78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6C78
  c->lr=c->r[0]; // 800C6C7C
  c->r[1]=c->r[1]+0x00000010u; // 800C6C80
  return; // 800C6C84
}

// fn_800C6C88
void f_800C6C88(Ctx* __restrict c) {
  trace_call(0x800C6C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6C88
  c->r[0]=c->lr; // 800C6C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6C90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6C94
  c->r[31]=c->r[3]|c->r[3]; // 800C6C98
  c->lr=0x800C6CA0u; f_80244520(c); // 800C6C9C
  c->r[7]=c->r[3]|c->r[3]; // 800C6CA0
  c->r[9]=c->r[31]|c->r[31]; // 800C6CA4
  c->r[3]=0u+0x00000194u; // 800C6CA8
  c->r[4]=c->r[13]+0xFFFFAFDFu; // 800C6CAC
  c->r[5]=0u+0x00000000u; // 800C6CB0
  c->r[6]=0u+0x00002001u; // 800C6CB4
  c->r[8]=0u+0x00000000u; // 800C6CB8
  c->lr=0x800C6CC0u; f_80242DF0(c); // 800C6CBC
  c->r[4]=c->r[3]|c->r[3]; // 800C6CC0
  c->r[3]=0u+0x00000194u; // 800C6CC4
  c->r[5]=c->r[13]+0xFFFFAFE4u; // 800C6CC8
  c->r[6]=0u+0x00000000u; // 800C6CCC
  c->r[7]=0u+0x00001001u; // 800C6CD0
  c->lr=0x800C6CD8u; f_80244DB0(c); // 800C6CD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C6CD8
  if (crb(c,2)) { goto L_800C6CE4; } // 800C6CDC
  c->lr=0x800C6CE4u; f_800C6BA0(c); // 800C6CE0
L_800C6CE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6CE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6CE8
  c->lr=c->r[0]; // 800C6CEC
  c->r[1]=c->r[1]+0x00000010u; // 800C6CF0
  return; // 800C6CF4
}

// fn_800C6CF8
void f_800C6CF8(Ctx* __restrict c) {
  trace_call(0x800C6CF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6CF8
  c->r[0]=c->lr; // 800C6CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6D04
  c->r[31]=c->r[3]|c->r[3]; // 800C6D08
  c->lr=0x800C6D10u; f_802B1168(c); // 800C6D0C
  c->r[7]=0u+0x80420000u; // 800C6D10
  c->r[6]=0u+0x80410000u; // 800C6D14
  c->r[5]=0u+0x00000000u; // 800C6D18
  c->r[4]=0u+0x7F5F0000u; // 800C6D1C
  c->r[3]=0u+0x355F0000u; // 800C6D20
  c->r[7]=c->r[7]+0xFFFF9E4Cu; // 800C6D24
  c->r[0]=c->r[3]+0xFFFFB82Au; // 800C6D28
  c->r[6]=c->r[6]+0xFFFFCE74u; // 800C6D2C
  c->r[4]=c->r[4]+0x0000595Au; // 800C6D30
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C6D34
  c->r[3]=c->r[31]|c->r[31]; // 800C6D38
  W32(c->r[31]+0x00000000u,c->r[6]); // 800C6D3C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800C6D40
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C6D44
  W32(c->r[31]+0x00000010u,c->r[5]); // 800C6D48
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C6D4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6D50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6D54
  c->lr=c->r[0]; // 800C6D58
  c->r[1]=c->r[1]+0x00000010u; // 800C6D5C
  return; // 800C6D60
}

// fn_800C6D64
void f_800C6D64(Ctx* __restrict c) {
  trace_call(0x800C6D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6D64
  c->r[0]=c->lr; // 800C6D68
  cmps(c,0,(int32_t)c->r[4],0); // 800C6D6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6D70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6D74
  c->r[30]=c->r[3]|c->r[3]; // 800C6D78
  c->r[31]=c->r[4]|c->r[4]; // 800C6D7C
  if (crb(c,2)) { goto L_800C6DD4; } // 800C6D80
  c->r[3]=c->r[31]|c->r[31]; // 800C6D84
  c->lr=0x800C6D8Cu; f_80244520(c); // 800C6D88
  c->r[7]=c->r[3]|c->r[3]; // 800C6D8C
  c->r[9]=c->r[31]|c->r[31]; // 800C6D90
  c->r[3]=0u+0x00000038u; // 800C6D94
  c->r[4]=c->r[13]+0xFFFFAFE9u; // 800C6D98
  c->r[5]=0u+0x00000000u; // 800C6D9C
  c->r[6]=0u+0x00002001u; // 800C6DA0
  c->r[8]=0u+0x00000000u; // 800C6DA4
  c->lr=0x800C6DACu; f_80242DF0(c); // 800C6DA8
  c->r[4]=c->r[3]|c->r[3]; // 800C6DAC
  c->r[3]=0u+0x00000038u; // 800C6DB0
  c->r[5]=c->r[13]+0xFFFFAFEEu; // 800C6DB4
  c->r[6]=0u+0x00000000u; // 800C6DB8
  c->r[7]=0u+0x00001001u; // 800C6DBC
  c->lr=0x800C6DC4u; f_80244DB0(c); // 800C6DC0
  cmps(c,0,(int32_t)c->r[3],0); // 800C6DC4
  if (crb(c,2)) { goto L_800C6DF4; } // 800C6DC8
  c->lr=0x800C6DD0u; f_800C6CF8(c); // 800C6DCC
  goto L_800C6DF4; // 800C6DD0
L_800C6DD4:;
  c->r[3]=0u+0x00000038u; // 800C6DD4
  c->r[4]=c->r[13]+0xFFFFAFF3u; // 800C6DD8
  c->r[5]=0u+0x00000000u; // 800C6DDC
  c->r[6]=0u+0x00001001u; // 800C6DE0
  c->lr=0x800C6DE8u; f_80244D20(c); // 800C6DE4
  cmps(c,0,(int32_t)c->r[3],0); // 800C6DE8
  if (crb(c,2)) { goto L_800C6DF4; } // 800C6DEC
  c->lr=0x800C6DF4u; f_800C6CF8(c); // 800C6DF0
L_800C6DF4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C6DF4
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C6DF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6DFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6E00
  c->lr=c->r[0]; // 800C6E04
  c->r[1]=c->r[1]+0x00000010u; // 800C6E08
  return; // 800C6E0C
}

// fn_800C6E10
void f_800C6E10(Ctx* __restrict c) {
  trace_call(0x800C6E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6E10
  c->r[0]=c->lr; // 800C6E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6E18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6E1C
  c->r[31]=c->r[4]|c->r[4]; // 800C6E20
  c->r[30]=c->r[3]|c->r[3]; // 800C6E24
  c->r[3]=c->r[31]|c->r[31]; // 800C6E28
  c->lr=0x800C6E30u; f_8030BD1C(c); // 800C6E2C
  c->r[4]=c->r[3]|c->r[3]; // 800C6E30
  c->r[3]=c->r[31]|c->r[31]; // 800C6E34
  c->lr=0x800C6E3Cu; f_8030C2D8(c); // 800C6E38
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C6E3C
  c->r[3]=c->r[31]|c->r[31]; // 800C6E40
  c->r[4]=c->r[30]+0x00000020u; // 800C6E44
  c->lr=0x800C6E4Cu; f_8030CC74(c); // 800C6E48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6E4C
  c->r[3]=0u+0x00000000u; // 800C6E50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6E54
  c->lr=c->r[0]; // 800C6E58
  c->r[1]=c->r[1]+0x00000010u; // 800C6E5C
  return; // 800C6E60
}

// fn_800C6E64
void f_800C6E64(Ctx* __restrict c) {
  trace_call(0x800C6E64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6E64
  c->r[0]=c->lr; // 800C6E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6E6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6E70
  c->r[31]=c->r[3]|c->r[3]; // 800C6E74
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800C6E78
  cmps(c,0,(int32_t)c->r[0],0); // 800C6E7C
  if (crb(c,2)) { goto L_800C6E94; } // 800C6E80
  c->r[3]=c->r[0]|c->r[0]; // 800C6E84
  c->lr=0x800C6E8Cu; f_800416A8(c); // 800C6E88
  c->r[0]=0u+0x00000000u; // 800C6E8C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800C6E90
L_800C6E94:;
  c->r[3]=c->r[31]+0x00000020u; // 800C6E94
  c->lr=0x800C6E9Cu; f_8030C9D8(c); // 800C6E98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6E9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6EA0
  c->lr=c->r[0]; // 800C6EA4
  c->r[1]=c->r[1]+0x00000010u; // 800C6EA8
  return; // 800C6EAC
}

// fn_800C6EB0
void f_800C6EB0(Ctx* __restrict c) {
  trace_call(0x800C6EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6EB0
  c->r[0]=c->lr; // 800C6EB4
  cmps(c,0,(int32_t)c->r[6],0); // 800C6EB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C6EBC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6EC0
  c->r[29]=c->r[3]|c->r[3]; // 800C6EC4
  c->r[30]=c->r[4]|c->r[4]; // 800C6EC8
  c->r[31]=c->r[5]|c->r[5]; // 800C6ECC
  if (!crb(c,2)) { goto L_800C6EF4; } // 800C6ED0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800C6ED4
  cmps(c,0,(int32_t)c->r[3],0); // 800C6ED8
  if (crb(c,2)) { goto L_800C6EE4; } // 800C6EDC
  c->lr=0x800C6EE4u; f_8030D100(c); // 800C6EE0
L_800C6EE4:;
  c->r[4]=c->r[30]|c->r[30]; // 800C6EE4
  c->r[5]=c->r[31]|c->r[31]; // 800C6EE8
  c->r[3]=c->r[29]+0x00000020u; // 800C6EEC
  c->lr=0x800C6EF4u; f_8030CECC(c); // 800C6EF0
L_800C6EF4:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6EF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6EF8
  c->lr=c->r[0]; // 800C6EFC
  c->r[1]=c->r[1]+0x00000020u; // 800C6F00
  return; // 800C6F04
}

// fn_800C6F08
void f_800C6F08(Ctx* __restrict c) {
  trace_call(0x800C6F08u);
  c->r[0]=0u+0x00000000u; // 800C6F08
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800C6F0C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C6F10
  return; // 800C6F14
}

// fn_800C6F18
void f_800C6F18(Ctx* __restrict c) {
  trace_call(0x800C6F18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6F18
  c->r[0]=c->lr; // 800C6F1C
  cmps(c,0,(int32_t)c->r[5],0); // 800C6F20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C6F24
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6F28
  c->r[29]=c->r[4]|c->r[4]; // 800C6F2C
  c->r[30]=c->r[6]|c->r[6]; // 800C6F30
  if (crb(c,2)) { goto L_800C6F40; } // 800C6F34
  c->r[31]=c->r[5]|c->r[5]; // 800C6F38
  goto L_800C6F44; // 800C6F3C
L_800C6F40:;
  c->r[31]=c->r[3]|c->r[3]; // 800C6F40
L_800C6F44:;
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 800C6F44
  c->r[4]=c->r[30]|c->r[30]; // 800C6F48
  c->lr=0x800C6F50u; f_8030D5B4(c); // 800C6F4C
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800C6F50
  c->r[5]=c->r[30]|c->r[30]; // 800C6F54
  c->r[3]=c->r[29]+0x00000020u; // 800C6F58
  c->r[4]=c->r[31]+0x00000020u; // 800C6F5C
  c->lr=0x800C6F64u; f_8030CAD0(c); // 800C6F60
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6F64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6F68
  c->lr=c->r[0]; // 800C6F6C
  c->r[1]=c->r[1]+0x00000020u; // 800C6F70
  return; // 800C6F74
}

// fn_800C6F78
void f_800C6F78(Ctx* __restrict c) {
  trace_call(0x800C6F78u);
  c->r[3]=0u+0x00000000u; // 800C6F78
  return; // 800C6F7C
}

// fn_800C6F80
void f_800C6F80(Ctx* __restrict c) {
  trace_call(0x800C6F80u);
  c->r[3]=0u+0x00000038u; // 800C6F80
  return; // 800C6F84
}

// fn_800C6F88
void f_800C6F88(Ctx* __restrict c) {
  trace_call(0x800C6F88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6F88
  c->r[0]=c->lr; // 800C6F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6F94
  c->r[31]=c->r[3]|c->r[3]; // 800C6F98
  c->lr=0x800C6FA0u; f_800C6CF8(c); // 800C6F9C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C6FA0
  c->r[3]=0u+0x80420000u; // 800C6FA4
  c->r[3]=c->r[3]+0xFFFF9E0Cu; // 800C6FA8
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C6FAC
  c->r[0]=c->r[0]|0x80000000u; // 800C6FB0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C6FB4
  c->r[3]=c->r[31]|c->r[31]; // 800C6FB8
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C6FBC
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C6FC0
  c->ctr=c->r[12]; // 800C6FC4
  if (true) { c->lr=0x800C6FCCu; dispatch(c,c->ctr); } // 800C6FC8
  c->r[3]=c->r[31]|c->r[31]; // 800C6FCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6FD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6FD4
  c->lr=c->r[0]; // 800C6FD8
  c->r[1]=c->r[1]+0x00000010u; // 800C6FDC
  return; // 800C6FE0
}

// fn_800C6FE4
void f_800C6FE4(Ctx* __restrict c) {
  trace_call(0x800C6FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6FE4
  c->r[0]=c->lr; // 800C6FE8
  cmps(c,0,(int32_t)c->r[3],0); // 800C6FEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6FF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6FF4
  c->r[30]=c->r[3]|c->r[3]; // 800C6FF8
  c->r[31]=c->r[4]|c->r[4]; // 800C6FFC
  if (crb(c,2)) { goto L_800C701C; } // 800C7000
  c->r[4]=0u+0x00000000u; // 800C7004
  c->lr=0x800C700Cu; f_802B1180(c); // 800C7008
  cmps(c,0,(int32_t)c->r[31],0); // 800C700C
  if (!crb(c,1)) { goto L_800C701C; } // 800C7010
  c->r[3]=c->r[30]|c->r[30]; // 800C7014
  c->lr=0x800C701Cu; f_80244DC0(c); // 800C7018
L_800C701C:;
  c->r[3]=c->r[30]|c->r[30]; // 800C701C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7020
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7024
  c->lr=c->r[0]; // 800C7028
  c->r[1]=c->r[1]+0x00000010u; // 800C702C
  return; // 800C7030
}

// fn_800C7034
void f_800C7034(Ctx* __restrict c) {
  trace_call(0x800C7034u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7034
  c->r[0]=c->lr; // 800C7038
  c->r[3]=0u+0x00000038u; // 800C703C
  c->r[4]=c->r[13]+0xFFFFAFF8u; // 800C7040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7044
  c->r[5]=0u+0x00000000u; // 800C7048
  c->r[6]=0u+0x00001001u; // 800C704C
  c->lr=0x800C7054u; f_80244D20(c); // 800C7050
  cmps(c,0,(int32_t)c->r[3],0); // 800C7054
  if (crb(c,2)) { goto L_800C7060; } // 800C7058
  c->lr=0x800C7060u; f_800C6F88(c); // 800C705C
L_800C7060:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7060
  c->lr=c->r[0]; // 800C7064
  c->r[1]=c->r[1]+0x00000010u; // 800C7068
  return; // 800C706C
}

// fn_800C7070
void f_800C7070(Ctx* __restrict c) {
  trace_call(0x800C7070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7070
  c->r[0]=c->lr; // 800C7074
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C707C
  c->r[31]=c->r[3]|c->r[3]; // 800C7080
  c->lr=0x800C7088u; f_80244520(c); // 800C7084
  c->r[7]=c->r[3]|c->r[3]; // 800C7088
  c->r[9]=c->r[31]|c->r[31]; // 800C708C
  c->r[3]=0u+0x00000038u; // 800C7090
  c->r[4]=c->r[13]+0xFFFFAFFDu; // 800C7094
  c->r[5]=0u+0x00000000u; // 800C7098
  c->r[6]=0u+0x00002001u; // 800C709C
  c->r[8]=0u+0x00000000u; // 800C70A0
  c->lr=0x800C70A8u; f_80242DF0(c); // 800C70A4
  c->r[4]=c->r[3]|c->r[3]; // 800C70A8
  c->r[3]=0u+0x00000038u; // 800C70AC
  c->r[5]=c->r[13]+0xFFFFB002u; // 800C70B0
  c->r[6]=0u+0x00000000u; // 800C70B4
  c->r[7]=0u+0x00001001u; // 800C70B8
  c->lr=0x800C70C0u; f_80244DB0(c); // 800C70BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C70C0
  if (crb(c,2)) { goto L_800C70CC; } // 800C70C4
  c->lr=0x800C70CCu; f_800C6F88(c); // 800C70C8
L_800C70CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C70CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C70D0
  c->lr=c->r[0]; // 800C70D4
  c->r[1]=c->r[1]+0x00000010u; // 800C70D8
  return; // 800C70DC
}

// fn_800C70E0
void f_800C70E0(Ctx* __restrict c) {
  trace_call(0x800C70E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C70E0
  c->r[0]=c->lr; // 800C70E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C70E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C70EC
  c->r[31]=c->r[3]|c->r[3]; // 800C70F0
  c->lr=0x800C70F8u; f_802B1168(c); // 800C70F4
  c->r[7]=0u+0x80420000u; // 800C70F8
  c->r[6]=0u+0x80410000u; // 800C70FC
  c->r[5]=0u+0x00000000u; // 800C7100
  c->r[4]=0u+0xAD860000u; // 800C7104
  c->r[3]=0u+0x657D0000u; // 800C7108
  c->r[7]=c->r[7]+0xFFFF9DD0u; // 800C710C
  c->r[0]=c->r[3]+0xFFFFA016u; // 800C7110
  c->r[6]=c->r[6]+0xFFFFCE8Eu; // 800C7114
  c->r[4]=c->r[4]+0xFFFF80FCu; // 800C7118
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C711C
  c->r[3]=c->r[31]|c->r[31]; // 800C7120
  W32(c->r[31]+0x00000000u,c->r[6]); // 800C7124
  W32(c->r[31]+0x00000008u,c->r[5]); // 800C7128
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C712C
  W32(c->r[31]+0x00000010u,c->r[5]); // 800C7130
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C7134
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7138
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C713C
  c->lr=c->r[0]; // 800C7140
  c->r[1]=c->r[1]+0x00000010u; // 800C7144
  return; // 800C7148
}

// fn_800C714C
void f_800C714C(Ctx* __restrict c) {
  trace_call(0x800C714Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C714C
  c->r[0]=c->lr; // 800C7150
  cmps(c,0,(int32_t)c->r[4],0); // 800C7154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7158
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C715C
  c->r[30]=c->r[3]|c->r[3]; // 800C7160
  c->r[31]=c->r[4]|c->r[4]; // 800C7164
  if (crb(c,2)) { goto L_800C71BC; } // 800C7168
  c->r[3]=c->r[31]|c->r[31]; // 800C716C
  c->lr=0x800C7174u; f_80244520(c); // 800C7170
  c->r[7]=c->r[3]|c->r[3]; // 800C7174
  c->r[9]=c->r[31]|c->r[31]; // 800C7178
  c->r[3]=0u+0x00000304u; // 800C717C
  c->r[4]=c->r[13]+0xFFFFB007u; // 800C7180
  c->r[5]=0u+0x00000000u; // 800C7184
  c->r[6]=0u+0x00002001u; // 800C7188
  c->r[8]=0u+0x00000000u; // 800C718C
  c->lr=0x800C7194u; f_80242DF0(c); // 800C7190
  c->r[4]=c->r[3]|c->r[3]; // 800C7194
  c->r[3]=0u+0x00000304u; // 800C7198
  c->r[5]=c->r[13]+0xFFFFB00Cu; // 800C719C
  c->r[6]=0u+0x00000000u; // 800C71A0
  c->r[7]=0u+0x00001001u; // 800C71A4
  c->lr=0x800C71ACu; f_80244DB0(c); // 800C71A8
  cmps(c,0,(int32_t)c->r[3],0); // 800C71AC
  if (crb(c,2)) { goto L_800C71DC; } // 800C71B0
  c->lr=0x800C71B8u; f_800C70E0(c); // 800C71B4
  goto L_800C71DC; // 800C71B8
L_800C71BC:;
  c->r[3]=0u+0x00000304u; // 800C71BC
  c->r[4]=c->r[13]+0xFFFFB011u; // 800C71C0
  c->r[5]=0u+0x00000000u; // 800C71C4
  c->r[6]=0u+0x00001001u; // 800C71C8
  c->lr=0x800C71D0u; f_80244D20(c); // 800C71CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C71D0
  if (crb(c,2)) { goto L_800C71DC; } // 800C71D4
  c->lr=0x800C71DCu; f_800C70E0(c); // 800C71D8
L_800C71DC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C71DC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C71E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C71E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C71E8
  c->lr=c->r[0]; // 800C71EC
  c->r[1]=c->r[1]+0x00000010u; // 800C71F0
  return; // 800C71F4
}

// fn_800C71F8
void f_800C71F8(Ctx* __restrict c) {
  trace_call(0x800C71F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C71F8
  c->r[0]=c->lr; // 800C71FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7200
  c->r[0]=0u+0x00000000u; // 800C7204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7208
  c->r[31]=c->r[4]|c->r[4]; // 800C720C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C7210
  c->r[30]=c->r[3]|c->r[3]; // 800C7214
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800C7218
  W32(c->r[3]+0x00000120u,c->r[0]); // 800C721C
  W32(c->r[3]+0x00000214u,c->r[0]); // 800C7220
  W32(c->r[3]+0x00000300u,c->r[0]); // 800C7224
  c->r[3]=c->r[31]|c->r[31]; // 800C7228
  c->lr=0x800C7230u; f_8030C0A0(c); // 800C722C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800C7230
  c->r[3]=c->r[31]|c->r[31]; // 800C7234
  c->lr=0x800C723Cu; f_8030BD1C(c); // 800C7238
  W8(c->r[30]+0x00000020u,c->r[3]); // 800C723C
  c->r[3]=c->r[31]|c->r[31]; // 800C7240
  c->lr=0x800C7248u; f_8030BD1C(c); // 800C7244
  W8(c->r[30]+0x00000021u,c->r[3]); // 800C7248
  c->r[3]=c->r[31]|c->r[31]; // 800C724C
  c->lr=0x800C7254u; f_8030BD1C(c); // 800C7250
  W8(c->r[30]+0x00000022u,c->r[3]); // 800C7254
  c->r[3]=c->r[31]|c->r[31]; // 800C7258
  c->lr=0x800C7260u; f_8030BD1C(c); // 800C725C
  W8(c->r[30]+0x00000023u,c->r[3]); // 800C7260
  c->r[3]=c->r[31]|c->r[31]; // 800C7264
  c->lr=0x800C726Cu; f_8030BD1C(c); // 800C7268
  W8(c->r[30]+0x00000024u,c->r[3]); // 800C726C
  c->r[3]=c->r[31]|c->r[31]; // 800C7270
  c->lr=0x800C7278u; f_8030BD1C(c); // 800C7274
  W8(c->r[30]+0x00000025u,c->r[3]); // 800C7278
  c->r[3]=c->r[31]|c->r[31]; // 800C727C
  c->lr=0x800C7284u; f_8030BD1C(c); // 800C7280
  W8(c->r[30]+0x00000026u,c->r[3]); // 800C7284
  c->r[3]=c->r[31]|c->r[31]; // 800C7288
  c->lr=0x800C7290u; f_8030BD1C(c); // 800C728C
  W8(c->r[30]+0x00000027u,c->r[3]); // 800C7290
  c->r[3]=c->r[31]|c->r[31]; // 800C7294
  c->lr=0x800C729Cu; f_8030BD1C(c); // 800C7298
  W8(c->r[30]+0x00000028u,c->r[3]); // 800C729C
  c->r[3]=c->r[31]|c->r[31]; // 800C72A0
  c->lr=0x800C72A8u; f_8030BD1C(c); // 800C72A4
  W8(c->r[30]+0x00000029u,c->r[3]); // 800C72A8
  c->r[3]=c->r[31]|c->r[31]; // 800C72AC
  c->lr=0x800C72B4u; f_8030BD1C(c); // 800C72B0
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800C72B4
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800C72B8
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800C72BC
  c->r[3]=c->r[31]|c->r[31]; // 800C72C0
  c->lr=0x800C72C8u; f_8030BD1C(c); // 800C72C4
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800C72C8
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800C72CC
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800C72D0
  c->r[3]=c->r[31]|c->r[31]; // 800C72D4
  c->lr=0x800C72DCu; f_8030BD1C(c); // 800C72D8
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800C72DC
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800C72E0
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800C72E4
  c->r[3]=c->r[31]|c->r[31]; // 800C72E8
  c->lr=0x800C72F0u; f_8030BD1C(c); // 800C72EC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800C72F0
  c->r[3]=c->r[31]|c->r[31]; // 800C72F4
  c->lr=0x800C72FCu; f_8030C0A0(c); // 800C72F8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800C72FC
  c->r[3]=c->r[31]|c->r[31]; // 800C7300
  c->lr=0x800C7308u; f_8030C0A0(c); // 800C7304
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800C7308
  c->r[3]=c->r[31]|c->r[31]; // 800C730C
  c->lr=0x800C7314u; f_8030C0A0(c); // 800C7310
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800C7314
  c->r[3]=c->r[31]|c->r[31]; // 800C7318
  c->lr=0x800C7320u; f_8030C0A0(c); // 800C731C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7320
  c->r[3]=c->r[31]|c->r[31]; // 800C7324
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800C7328
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800C732C
  c->lr=0x800C7334u; f_8030BD1C(c); // 800C7330
  W16(c->r[30]+0x00000048u,c->r[3]); // 800C7334
  c->r[3]=c->r[31]|c->r[31]; // 800C7338
  c->r[4]=0u+0x00000000u; // 800C733C
  c->lr=0x800C7344u; f_8030BE30(c); // 800C7340
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800C7344
  c->r[3]=c->r[31]|c->r[31]; // 800C7348
  c->lr=0x800C7350u; f_8030BD1C(c); // 800C734C
  W32(c->r[30]+0x00000050u,c->r[3]); // 800C7350
  c->r[3]=c->r[31]|c->r[31]; // 800C7354
  c->r[4]=0u+0x00000000u; // 800C7358
  c->lr=0x800C7360u; f_8030BE30(c); // 800C735C
  W32(c->r[30]+0x00000058u,c->r[3]); // 800C7360
  c->r[3]=c->r[31]|c->r[31]; // 800C7364
  c->r[4]=0u+0x00000000u; // 800C7368
  c->lr=0x800C7370u; f_8030BE30(c); // 800C736C
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800C7370
  c->r[3]=c->r[31]|c->r[31]; // 800C7374
  c->lr=0x800C737Cu; f_8030C0A0(c); // 800C7378
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800C737C
  c->r[3]=c->r[31]|c->r[31]; // 800C7380
  c->r[4]=c->r[30]+0x00000064u; // 800C7384
  c->r[5]=0u+0x00000000u; // 800C7388
  c->lr=0x800C7390u; f_8030B7F0(c); // 800C738C
  c->r[3]=c->r[31]|c->r[31]; // 800C7390
  c->r[4]=0u+0x00000001u; // 800C7394
  c->lr=0x800C739Cu; f_8030BE30(c); // 800C7398
  W32(c->r[30]+0x000000E4u,c->r[3]); // 800C739C
  c->r[3]=c->r[31]|c->r[31]; // 800C73A0
  c->r[4]=0u+0x00000001u; // 800C73A4
  c->lr=0x800C73ACu; f_8030BE30(c); // 800C73A8
  W32(c->r[30]+0x000000E8u,c->r[3]); // 800C73AC
  c->r[3]=c->r[31]|c->r[31]; // 800C73B0
  c->r[4]=0u+0x00000001u; // 800C73B4
  c->lr=0x800C73BCu; f_8030BE30(c); // 800C73B8
  W32(c->r[30]+0x000000ECu,c->r[3]); // 800C73BC
  c->r[3]=c->r[31]|c->r[31]; // 800C73C0
  c->r[4]=0u+0x00000001u; // 800C73C4
  c->lr=0x800C73CCu; f_8030BE30(c); // 800C73C8
  W32(c->r[30]+0x000000F0u,c->r[3]); // 800C73CC
  c->r[3]=c->r[31]|c->r[31]; // 800C73D0
  c->r[4]=0u+0x00000001u; // 800C73D4
  c->lr=0x800C73DCu; f_8030BE30(c); // 800C73D8
  W32(c->r[30]+0x000000F4u,c->r[3]); // 800C73DC
  c->r[3]=c->r[31]|c->r[31]; // 800C73E0
  c->r[4]=0u+0x00000001u; // 800C73E4
  c->lr=0x800C73ECu; f_8030BE30(c); // 800C73E8
  W32(c->r[30]+0x000000F8u,c->r[3]); // 800C73EC
  c->r[3]=c->r[31]|c->r[31]; // 800C73F0
  c->r[4]=0u+0x00000001u; // 800C73F4
  c->lr=0x800C73FCu; f_8030BE30(c); // 800C73F8
  W32(c->r[30]+0x000000FCu,c->r[3]); // 800C73FC
  c->r[3]=c->r[31]|c->r[31]; // 800C7400
  c->r[4]=0u+0x00000001u; // 800C7404
  c->lr=0x800C740Cu; f_8030BE30(c); // 800C7408
  W32(c->r[30]+0x00000100u,c->r[3]); // 800C740C
  c->r[3]=c->r[31]|c->r[31]; // 800C7410
  c->r[4]=0u+0x00000001u; // 800C7414
  c->lr=0x800C741Cu; f_8030BE30(c); // 800C7418
  W32(c->r[30]+0x00000104u,c->r[3]); // 800C741C
  c->r[3]=c->r[31]|c->r[31]; // 800C7420
  c->r[4]=0u+0x00000001u; // 800C7424
  c->lr=0x800C742Cu; f_8030BE30(c); // 800C7428
  W32(c->r[30]+0x00000108u,c->r[3]); // 800C742C
  c->r[3]=c->r[31]|c->r[31]; // 800C7430
  c->r[4]=0u+0x00000001u; // 800C7434
  c->lr=0x800C743Cu; f_8030BE30(c); // 800C7438
  W32(c->r[30]+0x0000010Cu,c->r[3]); // 800C743C
  c->r[3]=c->r[31]|c->r[31]; // 800C7440
  c->r[4]=0u+0x00000001u; // 800C7444
  c->lr=0x800C744Cu; f_8030BE30(c); // 800C7448
  W32(c->r[30]+0x00000110u,c->r[3]); // 800C744C
  c->r[3]=c->r[31]|c->r[31]; // 800C7450
  c->lr=0x800C7458u; f_8030BD1C(c); // 800C7454
  W8(c->r[30]+0x00000114u,c->r[3]); // 800C7458
  c->r[3]=c->r[31]|c->r[31]; // 800C745C
  c->lr=0x800C7464u; f_8030BD1C(c); // 800C7460
  W8(c->r[30]+0x00000115u,c->r[3]); // 800C7464
  c->r[3]=c->r[31]|c->r[31]; // 800C7468
  c->lr=0x800C7470u; f_8030BD1C(c); // 800C746C
  W8(c->r[30]+0x00000116u,c->r[3]); // 800C7470
  c->r[3]=c->r[31]|c->r[31]; // 800C7474
  c->lr=0x800C747Cu; f_8030BD1C(c); // 800C7478
  W8(c->r[30]+0x00000117u,c->r[3]); // 800C747C
  c->r[3]=c->r[31]|c->r[31]; // 800C7480
  c->lr=0x800C7488u; f_8030BD1C(c); // 800C7484
  W8(c->r[30]+0x00000118u,c->r[3]); // 800C7488
  c->r[3]=c->r[31]|c->r[31]; // 800C748C
  c->lr=0x800C7494u; f_8030BD1C(c); // 800C7490
  W8(c->r[30]+0x00000119u,c->r[3]); // 800C7494
  c->r[3]=c->r[31]|c->r[31]; // 800C7498
  c->lr=0x800C74A0u; f_8030BD1C(c); // 800C749C
  W8(c->r[30]+0x0000011Au,c->r[3]); // 800C74A0
  c->r[3]=c->r[31]|c->r[31]; // 800C74A4
  c->lr=0x800C74ACu; f_8030BD1C(c); // 800C74A8
  W8(c->r[30]+0x0000011Bu,c->r[3]); // 800C74AC
  c->r[3]=c->r[31]|c->r[31]; // 800C74B0
  c->lr=0x800C74B8u; f_8030BD1C(c); // 800C74B4
  W8(c->r[30]+0x0000011Cu,c->r[3]); // 800C74B8
  c->r[3]=c->r[31]|c->r[31]; // 800C74BC
  c->lr=0x800C74C4u; f_8030BD1C(c); // 800C74C0
  W8(c->r[30]+0x0000011Du,c->r[3]); // 800C74C4
  c->r[3]=c->r[31]|c->r[31]; // 800C74C8
  c->lr=0x800C74D0u; f_8030BD1C(c); // 800C74CC
  c->r[0]=R32(c->r[30]+0x00000120u); // 800C74D0
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800C74D4
  W32(c->r[30]+0x00000120u,c->r[0]); // 800C74D8
  c->r[3]=c->r[31]|c->r[31]; // 800C74DC
  c->lr=0x800C74E4u; f_8030BD1C(c); // 800C74E0
  c->r[0]=R32(c->r[30]+0x00000120u); // 800C74E4
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800C74E8
  W32(c->r[30]+0x00000120u,c->r[0]); // 800C74EC
  c->r[3]=c->r[31]|c->r[31]; // 800C74F0
  c->lr=0x800C74F8u; f_8030BD1C(c); // 800C74F4
  c->r[0]=R32(c->r[30]+0x00000120u); // 800C74F8
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800C74FC
  W32(c->r[30]+0x00000120u,c->r[0]); // 800C7500
  c->r[3]=c->r[31]|c->r[31]; // 800C7504
  c->lr=0x800C750Cu; f_8030BD1C(c); // 800C7508
  W32(c->r[30]+0x00000124u,c->r[3]); // 800C750C
  c->r[3]=c->r[31]|c->r[31]; // 800C7510
  c->lr=0x800C7518u; f_8030C0A0(c); // 800C7514
  {uint32_t ea=c->r[30]+0x00000128u; WF32(ea,c->f[1]);} // 800C7518
  c->r[3]=c->r[31]|c->r[31]; // 800C751C
  c->lr=0x800C7524u; f_8030C0A0(c); // 800C7520
  {uint32_t ea=c->r[30]+0x0000012Cu; WF32(ea,c->f[1]);} // 800C7524
  c->r[3]=c->r[31]|c->r[31]; // 800C7528
  c->lr=0x800C7530u; f_8030C0A0(c); // 800C752C
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[1]);} // 800C7530
  c->r[3]=c->r[31]|c->r[31]; // 800C7534
  c->lr=0x800C753Cu; f_8030C0A0(c); // 800C7538
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C753C
  c->r[3]=c->r[31]|c->r[31]; // 800C7540
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[1]);} // 800C7544
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[0]);} // 800C7548
  c->lr=0x800C7550u; f_8030BD1C(c); // 800C754C
  W16(c->r[30]+0x0000013Cu,c->r[3]); // 800C7550
  c->r[3]=c->r[31]|c->r[31]; // 800C7554
  c->r[4]=0u+0x00000000u; // 800C7558
  c->lr=0x800C7560u; f_8030BE30(c); // 800C755C
  W32(c->r[30]+0x00000140u,c->r[3]); // 800C7560
  c->r[3]=c->r[31]|c->r[31]; // 800C7564
  c->lr=0x800C756Cu; f_8030BD1C(c); // 800C7568
  W32(c->r[30]+0x00000144u,c->r[3]); // 800C756C
  c->r[3]=c->r[31]|c->r[31]; // 800C7570
  c->r[4]=0u+0x00000000u; // 800C7574
  c->lr=0x800C757Cu; f_8030BE30(c); // 800C7578
  W32(c->r[30]+0x0000014Cu,c->r[3]); // 800C757C
  c->r[3]=c->r[31]|c->r[31]; // 800C7580
  c->r[4]=0u+0x00000000u; // 800C7584
  c->lr=0x800C758Cu; f_8030BE30(c); // 800C7588
  W32(c->r[30]+0x00000150u,c->r[3]); // 800C758C
  c->r[3]=c->r[31]|c->r[31]; // 800C7590
  c->lr=0x800C7598u; f_8030C0A0(c); // 800C7594
  {uint32_t ea=c->r[30]+0x00000154u; WF32(ea,c->f[1]);} // 800C7598
  c->r[3]=c->r[31]|c->r[31]; // 800C759C
  c->r[4]=c->r[30]+0x00000158u; // 800C75A0
  c->r[5]=0u+0x00000000u; // 800C75A4
  c->lr=0x800C75ACu; f_8030B7F0(c); // 800C75A8
  c->r[3]=c->r[31]|c->r[31]; // 800C75AC
  c->r[4]=0u+0x00000001u; // 800C75B0
  c->lr=0x800C75B8u; f_8030BE30(c); // 800C75B4
  W32(c->r[30]+0x000001D8u,c->r[3]); // 800C75B8
  c->r[3]=c->r[31]|c->r[31]; // 800C75BC
  c->r[4]=0u+0x00000001u; // 800C75C0
  c->lr=0x800C75C8u; f_8030BE30(c); // 800C75C4
  W32(c->r[30]+0x000001DCu,c->r[3]); // 800C75C8
  c->r[3]=c->r[31]|c->r[31]; // 800C75CC
  c->r[4]=0u+0x00000001u; // 800C75D0
  c->lr=0x800C75D8u; f_8030BE30(c); // 800C75D4
  W32(c->r[30]+0x000001E0u,c->r[3]); // 800C75D8
  c->r[3]=c->r[31]|c->r[31]; // 800C75DC
  c->r[4]=0u+0x00000001u; // 800C75E0
  c->lr=0x800C75E8u; f_8030BE30(c); // 800C75E4
  W32(c->r[30]+0x000001E4u,c->r[3]); // 800C75E8
  c->r[3]=c->r[31]|c->r[31]; // 800C75EC
  c->r[4]=0u+0x00000001u; // 800C75F0
  c->lr=0x800C75F8u; f_8030BE30(c); // 800C75F4
  W32(c->r[30]+0x000001E8u,c->r[3]); // 800C75F8
  c->r[3]=c->r[31]|c->r[31]; // 800C75FC
  c->r[4]=0u+0x00000001u; // 800C7600
  c->lr=0x800C7608u; f_8030BE30(c); // 800C7604
  W32(c->r[30]+0x000001ECu,c->r[3]); // 800C7608
  c->r[3]=c->r[31]|c->r[31]; // 800C760C
  c->r[4]=0u+0x00000001u; // 800C7610
  c->lr=0x800C7618u; f_8030BE30(c); // 800C7614
  W32(c->r[30]+0x000001F0u,c->r[3]); // 800C7618
  c->r[3]=c->r[31]|c->r[31]; // 800C761C
  c->r[4]=0u+0x00000001u; // 800C7620
  c->lr=0x800C7628u; f_8030BE30(c); // 800C7624
  W32(c->r[30]+0x000001F4u,c->r[3]); // 800C7628
  c->r[3]=c->r[31]|c->r[31]; // 800C762C
  c->r[4]=0u+0x00000001u; // 800C7630
  c->lr=0x800C7638u; f_8030BE30(c); // 800C7634
  W32(c->r[30]+0x000001F8u,c->r[3]); // 800C7638
  c->r[3]=c->r[31]|c->r[31]; // 800C763C
  c->r[4]=0u+0x00000001u; // 800C7640
  c->lr=0x800C7648u; f_8030BE30(c); // 800C7644
  W32(c->r[30]+0x000001FCu,c->r[3]); // 800C7648
  c->r[3]=c->r[31]|c->r[31]; // 800C764C
  c->r[4]=0u+0x00000001u; // 800C7650
  c->lr=0x800C7658u; f_8030BE30(c); // 800C7654
  W32(c->r[30]+0x00000200u,c->r[3]); // 800C7658
  c->r[3]=c->r[31]|c->r[31]; // 800C765C
  c->r[4]=0u+0x00000001u; // 800C7660
  c->lr=0x800C7668u; f_8030BE30(c); // 800C7664
  W32(c->r[30]+0x00000204u,c->r[3]); // 800C7668
  c->r[3]=c->r[31]|c->r[31]; // 800C766C
  c->lr=0x800C7674u; f_8030BD1C(c); // 800C7670
  W8(c->r[30]+0x00000208u,c->r[3]); // 800C7674
  c->r[3]=c->r[31]|c->r[31]; // 800C7678
  c->lr=0x800C7680u; f_8030BD1C(c); // 800C767C
  W8(c->r[30]+0x00000209u,c->r[3]); // 800C7680
  c->r[3]=c->r[31]|c->r[31]; // 800C7684
  c->lr=0x800C768Cu; f_8030BD1C(c); // 800C7688
  W8(c->r[30]+0x0000020Au,c->r[3]); // 800C768C
  c->r[3]=c->r[31]|c->r[31]; // 800C7690
  c->lr=0x800C7698u; f_8030BD1C(c); // 800C7694
  W8(c->r[30]+0x0000020Bu,c->r[3]); // 800C7698
  c->r[3]=c->r[31]|c->r[31]; // 800C769C
  c->lr=0x800C76A4u; f_8030BD1C(c); // 800C76A0
  W8(c->r[30]+0x0000020Cu,c->r[3]); // 800C76A4
  c->r[3]=c->r[31]|c->r[31]; // 800C76A8
  c->lr=0x800C76B0u; f_8030BD1C(c); // 800C76AC
  W8(c->r[30]+0x0000020Du,c->r[3]); // 800C76B0
  c->r[3]=c->r[31]|c->r[31]; // 800C76B4
  c->lr=0x800C76BCu; f_8030BD1C(c); // 800C76B8
  W8(c->r[30]+0x0000020Eu,c->r[3]); // 800C76BC
  c->r[3]=c->r[31]|c->r[31]; // 800C76C0
  c->lr=0x800C76C8u; f_8030BD1C(c); // 800C76C4
  W8(c->r[30]+0x0000020Fu,c->r[3]); // 800C76C8
  c->r[3]=c->r[31]|c->r[31]; // 800C76CC
  c->lr=0x800C76D4u; f_8030BD1C(c); // 800C76D0
  W8(c->r[30]+0x00000210u,c->r[3]); // 800C76D4
  c->r[3]=c->r[31]|c->r[31]; // 800C76D8
  c->lr=0x800C76E0u; f_8030BD1C(c); // 800C76DC
  W8(c->r[30]+0x00000211u,c->r[3]); // 800C76E0
  c->r[3]=c->r[31]|c->r[31]; // 800C76E4
  c->lr=0x800C76ECu; f_8030BD1C(c); // 800C76E8
  c->r[0]=R32(c->r[30]+0x00000214u); // 800C76EC
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800C76F0
  W32(c->r[30]+0x00000214u,c->r[0]); // 800C76F4
  c->r[3]=c->r[31]|c->r[31]; // 800C76F8
  c->lr=0x800C7700u; f_8030BD1C(c); // 800C76FC
  c->r[0]=R32(c->r[30]+0x00000214u); // 800C7700
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800C7704
  W32(c->r[30]+0x00000214u,c->r[0]); // 800C7708
  c->r[3]=c->r[31]|c->r[31]; // 800C770C
  c->lr=0x800C7714u; f_8030BD1C(c); // 800C7710
  c->r[0]=R32(c->r[30]+0x00000214u); // 800C7714
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800C7718
  W32(c->r[30]+0x00000214u,c->r[0]); // 800C771C
  c->r[3]=c->r[31]|c->r[31]; // 800C7720
  c->lr=0x800C7728u; f_8030BD1C(c); // 800C7724
  W32(c->r[30]+0x00000218u,c->r[3]); // 800C7728
  c->r[3]=c->r[31]|c->r[31]; // 800C772C
  c->lr=0x800C7734u; f_8030C0A0(c); // 800C7730
  {uint32_t ea=c->r[30]+0x0000021Cu; WF32(ea,c->f[1]);} // 800C7734
  c->r[3]=c->r[31]|c->r[31]; // 800C7738
  c->lr=0x800C7740u; f_8030C0A0(c); // 800C773C
  {uint32_t ea=c->r[30]+0x00000220u; WF32(ea,c->f[1]);} // 800C7740
  c->r[3]=c->r[31]|c->r[31]; // 800C7744
  c->lr=0x800C774Cu; f_8030C0A0(c); // 800C7748
  {uint32_t ea=c->r[30]+0x00000224u; WF32(ea,c->f[1]);} // 800C774C
  c->r[3]=c->r[31]|c->r[31]; // 800C7750
  c->lr=0x800C7758u; f_8030C0A0(c); // 800C7754
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7758
  c->r[3]=c->r[31]|c->r[31]; // 800C775C
  {uint32_t ea=c->r[30]+0x00000228u; WF32(ea,c->f[1]);} // 800C7760
  {uint32_t ea=c->r[30]+0x0000022Cu; WF32(ea,c->f[0]);} // 800C7764
  c->lr=0x800C776Cu; f_8030BD1C(c); // 800C7768
  W16(c->r[30]+0x00000230u,c->r[3]); // 800C776C
  c->r[3]=c->r[31]|c->r[31]; // 800C7770
  c->r[4]=0u+0x00000000u; // 800C7774
  c->lr=0x800C777Cu; f_8030BE30(c); // 800C7778
  W32(c->r[30]+0x00000234u,c->r[3]); // 800C777C
  c->r[3]=c->r[31]|c->r[31]; // 800C7780
  c->lr=0x800C7788u; f_8030BD1C(c); // 800C7784
  W32(c->r[30]+0x00000238u,c->r[3]); // 800C7788
  c->r[3]=c->r[31]|c->r[31]; // 800C778C
  c->r[4]=0u+0x00000000u; // 800C7790
  c->lr=0x800C7798u; f_8030BE30(c); // 800C7794
  W32(c->r[30]+0x00000240u,c->r[3]); // 800C7798
  c->r[3]=c->r[31]|c->r[31]; // 800C779C
  c->r[4]=0u+0x00000000u; // 800C77A0
  c->lr=0x800C77A8u; f_8030BE30(c); // 800C77A4
  W32(c->r[30]+0x00000244u,c->r[3]); // 800C77A8
  c->r[3]=c->r[31]|c->r[31]; // 800C77AC
  c->lr=0x800C77B4u; f_8030C0A0(c); // 800C77B0
  {uint32_t ea=c->r[30]+0x00000248u; WF32(ea,c->f[1]);} // 800C77B4
  c->r[3]=c->r[31]|c->r[31]; // 800C77B8
  c->r[4]=c->r[30]+0x0000024Cu; // 800C77BC
  c->r[5]=0u+0x00000000u; // 800C77C0
  c->lr=0x800C77C8u; f_8030B7F0(c); // 800C77C4
  c->r[3]=c->r[31]|c->r[31]; // 800C77C8
  c->r[4]=0u+0x00000001u; // 800C77CC
  c->lr=0x800C77D4u; f_8030BE30(c); // 800C77D0
  W32(c->r[30]+0x000002CCu,c->r[3]); // 800C77D4
  c->r[3]=c->r[31]|c->r[31]; // 800C77D8
  c->r[4]=0u+0x00000001u; // 800C77DC
  c->lr=0x800C77E4u; f_8030BE30(c); // 800C77E0
  W32(c->r[30]+0x000002D0u,c->r[3]); // 800C77E4
  c->r[3]=c->r[31]|c->r[31]; // 800C77E8
  c->r[4]=0u+0x00000001u; // 800C77EC
  c->lr=0x800C77F4u; f_8030BE30(c); // 800C77F0
  W32(c->r[30]+0x000002D4u,c->r[3]); // 800C77F4
  c->r[3]=c->r[31]|c->r[31]; // 800C77F8
  c->r[4]=0u+0x00000001u; // 800C77FC
  c->lr=0x800C7804u; f_8030BE30(c); // 800C7800
  W32(c->r[30]+0x000002D8u,c->r[3]); // 800C7804
  c->r[3]=c->r[31]|c->r[31]; // 800C7808
  c->r[4]=0u+0x00000001u; // 800C780C
  c->lr=0x800C7814u; f_8030BE30(c); // 800C7810
  W32(c->r[30]+0x000002DCu,c->r[3]); // 800C7814
  c->r[3]=c->r[31]|c->r[31]; // 800C7818
  c->r[4]=0u+0x00000001u; // 800C781C
  c->lr=0x800C7824u; f_8030BE30(c); // 800C7820
  W32(c->r[30]+0x000002E0u,c->r[3]); // 800C7824
  c->r[3]=c->r[31]|c->r[31]; // 800C7828
  c->r[4]=0u+0x00000001u; // 800C782C
  c->lr=0x800C7834u; f_8030BE30(c); // 800C7830
  W32(c->r[30]+0x000002E4u,c->r[3]); // 800C7834
  c->r[3]=c->r[31]|c->r[31]; // 800C7838
  c->r[4]=0u+0x00000001u; // 800C783C
  c->lr=0x800C7844u; f_8030BE30(c); // 800C7840
  W32(c->r[30]+0x000002E8u,c->r[3]); // 800C7844
  c->r[3]=c->r[31]|c->r[31]; // 800C7848
  c->r[4]=0u+0x00000001u; // 800C784C
  c->lr=0x800C7854u; f_8030BE30(c); // 800C7850
  W32(c->r[30]+0x000002ECu,c->r[3]); // 800C7854
  c->r[3]=c->r[31]|c->r[31]; // 800C7858
  c->r[4]=0u+0x00000001u; // 800C785C
  c->lr=0x800C7864u; f_8030BE30(c); // 800C7860
  W32(c->r[30]+0x000002F0u,c->r[3]); // 800C7864
  c->r[3]=c->r[31]|c->r[31]; // 800C7868
  c->r[4]=0u+0x00000001u; // 800C786C
  c->lr=0x800C7874u; f_8030BE30(c); // 800C7870
  W32(c->r[30]+0x000002F4u,c->r[3]); // 800C7874
  c->r[3]=c->r[31]|c->r[31]; // 800C7878
  c->r[4]=0u+0x00000001u; // 800C787C
  c->lr=0x800C7884u; f_8030BE30(c); // 800C7880
  W32(c->r[30]+0x000002F8u,c->r[3]); // 800C7884
  c->r[3]=c->r[31]|c->r[31]; // 800C7888
  c->lr=0x800C7890u; f_8030BD1C(c); // 800C788C
  W8(c->r[30]+0x000002FCu,c->r[3]); // 800C7890
  c->r[3]=c->r[31]|c->r[31]; // 800C7894
  c->lr=0x800C789Cu; f_8030BD1C(c); // 800C7898
  c->r[0]=R32(c->r[30]+0x00000300u); // 800C789C
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800C78A0
  W32(c->r[30]+0x00000300u,c->r[0]); // 800C78A4
  c->r[3]=c->r[31]|c->r[31]; // 800C78A8
  c->lr=0x800C78B0u; f_8030BD1C(c); // 800C78AC
  c->r[0]=R32(c->r[30]+0x00000300u); // 800C78B0
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800C78B4
  W32(c->r[30]+0x00000300u,c->r[0]); // 800C78B8
  c->r[3]=0u+0x00000000u; // 800C78BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C78C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C78C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C78C8
  c->lr=c->r[0]; // 800C78CC
  c->r[1]=c->r[1]+0x00000010u; // 800C78D0
  return; // 800C78D4
}

// fn_800C78D8
void f_800C78D8(Ctx* __restrict c) {
  trace_call(0x800C78D8u);
  return; // 800C78D8
}

// fn_800C78DC
void f_800C78DC(Ctx* __restrict c) {
  trace_call(0x800C78DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C78DC
  c->r[0]=c->lr; // 800C78E0
  cmps(c,0,(int32_t)c->r[6],0); // 800C78E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C78E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C78EC
  c->r[30]=c->r[3]|c->r[3]; // 800C78F0
  c->r[31]=c->r[5]|c->r[5]; // 800C78F4
  if (!crb(c,2)) { goto L_800C7944; } // 800C78F8
  c->r[0]=R32(c->r[3]+0x00000050u); // 800C78FC
  cmps(c,0,(int32_t)c->r[0],7); // 800C7900
  if (!crb(c,0)) { goto L_800C7914; } // 800C7904
  c->r[4]=c->r[31]|c->r[31]; // 800C7908
  c->r[3]=c->r[3]+0x0000004Cu; // 800C790C
  c->lr=0x800C7914u; f_8003A994(c); // 800C7910
L_800C7914:;
  c->r[0]=R32(c->r[30]+0x00000144u); // 800C7914
  cmps(c,0,(int32_t)c->r[0],7); // 800C7918
  if (!crb(c,0)) { goto L_800C792C; } // 800C791C
  c->r[4]=c->r[31]|c->r[31]; // 800C7920
  c->r[3]=c->r[30]+0x00000140u; // 800C7924
  c->lr=0x800C792Cu; f_8003A994(c); // 800C7928
L_800C792C:;
  c->r[0]=R32(c->r[30]+0x00000238u); // 800C792C
  cmps(c,0,(int32_t)c->r[0],7); // 800C7930
  if (!crb(c,0)) { goto L_800C7944; } // 800C7934
  c->r[4]=c->r[31]|c->r[31]; // 800C7938
  c->r[3]=c->r[30]+0x00000234u; // 800C793C
  c->lr=0x800C7944u; f_8003A994(c); // 800C7940
L_800C7944:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7944
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7948
  c->lr=c->r[0]; // 800C794C
  c->r[1]=c->r[1]+0x00000010u; // 800C7950
  return; // 800C7954
}

// fn_800C7958
void f_800C7958(Ctx* __restrict c) {
  trace_call(0x800C7958u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7958
  c->r[0]=c->lr; // 800C795C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C7960
  c->r[11]=c->r[1]+0x00000030u; // 800C7964
  c->lr=0x800C796Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C7968
  c->r[27]=0u+0x00000000u; // 800C796C
  W32(c->r[3]+0x0000002Cu,c->r[27]); // 800C7970
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7974
  c->r[24]=0u+0x87700000u; // 800C7978
  c->r[31]=0u+0x000000FFu; // 800C797C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7980
  c->r[5]=c->r[27]|0x80000000u; // 800C7984
  c->r[0]=c->r[24]+0x00003295u; // 800C7988
  c->r[28]=0u+0x00000040u; // 800C798C
  c->r[29]=0u+0x00000052u; // 800C7990
  c->r[30]=0u+0x0000009Bu; // 800C7994
  c->r[23]=0u+0x0000001Eu; // 800C7998
  W32(c->r[3]+0x00000120u,c->r[27]); // 800C799C
  c->r[26]=c->r[3]|c->r[3]; // 800C79A0
  c->r[4]=c->r[13]+0xFFFFB016u; // 800C79A4
  W32(c->r[3]+0x00000214u,c->r[27]); // 800C79A8
  W32(c->r[3]+0x00000300u,c->r[27]); // 800C79AC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 800C79B0
  W8(c->r[3]+0x00000020u,c->r[28]); // 800C79B4
  W8(c->r[3]+0x00000021u,c->r[29]); // 800C79B8
  W8(c->r[3]+0x00000022u,c->r[30]); // 800C79BC
  W8(c->r[3]+0x00000023u,c->r[31]); // 800C79C0
  W8(c->r[3]+0x00000024u,c->r[31]); // 800C79C4
  W8(c->r[3]+0x00000025u,c->r[31]); // 800C79C8
  W8(c->r[3]+0x00000026u,c->r[31]); // 800C79CC
  W8(c->r[3]+0x00000027u,c->r[31]); // 800C79D0
  W8(c->r[3]+0x00000028u,c->r[27]); // 800C79D4
  W8(c->r[3]+0x00000029u,c->r[27]); // 800C79D8
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 800C79DC
  W32(c->r[3]+0x00000030u,c->r[23]); // 800C79E0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 800C79E4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 800C79E8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 800C79EC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800C79F0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800C79F4
  W16(c->r[3]+0x00000048u,c->r[27]); // 800C79F8
  W32(c->r[3]+0x0000004Cu,c->r[27]); // 800C79FC
  W32(c->r[3]+0x00000054u,c->r[27]); // 800C7A00
  W32(c->r[3]+0x00000050u,c->r[27]); // 800C7A04
  W32(c->r[3]+0x00000058u,c->r[27]); // 800C7A08
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800C7A0C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800C7A10
  c->r[3]=c->r[3]+0x00000064u; // 800C7A14
  c->lr=0x800C7A1Cu; f_803A6F10(c); // 800C7A18
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A1C
  c->lr=0x800C7A24u; f_80248E40(c); // 800C7A20
  W32(c->r[26]+0x000000E4u,c->r[3]); // 800C7A24
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A28
  c->lr=0x800C7A30u; f_80248E40(c); // 800C7A2C
  W32(c->r[26]+0x000000E8u,c->r[3]); // 800C7A30
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A34
  c->lr=0x800C7A3Cu; f_80248E40(c); // 800C7A38
  W32(c->r[26]+0x000000ECu,c->r[3]); // 800C7A3C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A40
  c->lr=0x800C7A48u; f_80248E40(c); // 800C7A44
  W32(c->r[26]+0x000000F0u,c->r[3]); // 800C7A48
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A4C
  c->lr=0x800C7A54u; f_80248E40(c); // 800C7A50
  W32(c->r[26]+0x000000F4u,c->r[3]); // 800C7A54
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A58
  c->lr=0x800C7A60u; f_80248E40(c); // 800C7A5C
  W32(c->r[26]+0x000000F8u,c->r[3]); // 800C7A60
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A64
  c->lr=0x800C7A6Cu; f_80248E40(c); // 800C7A68
  W32(c->r[26]+0x000000FCu,c->r[3]); // 800C7A6C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A70
  c->lr=0x800C7A78u; f_80248E40(c); // 800C7A74
  W32(c->r[26]+0x00000100u,c->r[3]); // 800C7A78
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A7C
  c->lr=0x800C7A84u; f_80248E40(c); // 800C7A80
  W32(c->r[26]+0x00000104u,c->r[3]); // 800C7A84
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A88
  c->lr=0x800C7A90u; f_80248E40(c); // 800C7A8C
  W32(c->r[26]+0x00000108u,c->r[3]); // 800C7A90
  c->r[3]=0u+0xFFFFFFFFu; // 800C7A94
  c->lr=0x800C7A9Cu; f_80248E40(c); // 800C7A98
  W32(c->r[26]+0x0000010Cu,c->r[3]); // 800C7A9C
  c->r[25]=0u+0x00080000u; // 800C7AA0
  c->r[3]=c->r[25]+0xFFFFFFFFu; // 800C7AA4
  c->lr=0x800C7AACu; f_80248E40(c); // 800C7AA8
  c->r[4]=R32(c->r[26]+0x00000120u); // 800C7AAC
  c->r[0]=c->r[24]+0x00003295u; // 800C7AB0
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7AB4
  c->r[4]=rotl(c->r[4],0)&0x7FFFFFFFu; // 800C7AB8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7ABC
  c->r[4]=c->r[4]|0x40000000u; // 800C7AC0
  W32(c->r[26]+0x00000110u,c->r[3]); // 800C7AC4
  c->r[5]=rotl(c->r[4],0)&0xDFFFFFFFu; // 800C7AC8
  c->r[3]=c->r[26]+0x00000158u; // 800C7ACC
  W8(c->r[26]+0x00000114u,c->r[28]); // 800C7AD0
  c->r[4]=c->r[13]+0xFFFFB017u; // 800C7AD4
  W8(c->r[26]+0x00000115u,c->r[29]); // 800C7AD8
  W8(c->r[26]+0x00000116u,c->r[30]); // 800C7ADC
  W8(c->r[26]+0x00000117u,c->r[31]); // 800C7AE0
  W8(c->r[26]+0x00000118u,c->r[31]); // 800C7AE4
  W8(c->r[26]+0x00000119u,c->r[31]); // 800C7AE8
  W8(c->r[26]+0x0000011Au,c->r[31]); // 800C7AEC
  W8(c->r[26]+0x0000011Bu,c->r[31]); // 800C7AF0
  W8(c->r[26]+0x0000011Cu,c->r[27]); // 800C7AF4
  W8(c->r[26]+0x0000011Du,c->r[27]); // 800C7AF8
  W32(c->r[26]+0x00000120u,c->r[5]); // 800C7AFC
  W32(c->r[26]+0x00000124u,c->r[23]); // 800C7B00
  {uint32_t ea=c->r[26]+0x00000128u; WF32(ea,c->f[1]);} // 800C7B04
  {uint32_t ea=c->r[26]+0x0000012Cu; WF32(ea,c->f[1]);} // 800C7B08
  {uint32_t ea=c->r[26]+0x00000130u; WF32(ea,c->f[1]);} // 800C7B0C
  {uint32_t ea=c->r[26]+0x00000134u; WF32(ea,c->f[1]);} // 800C7B10
  {uint32_t ea=c->r[26]+0x00000138u; WF32(ea,c->f[0]);} // 800C7B14
  W16(c->r[26]+0x0000013Cu,c->r[27]); // 800C7B18
  W32(c->r[26]+0x00000140u,c->r[27]); // 800C7B1C
  W32(c->r[26]+0x00000148u,c->r[27]); // 800C7B20
  W32(c->r[26]+0x00000144u,c->r[27]); // 800C7B24
  W32(c->r[26]+0x0000014Cu,c->r[27]); // 800C7B28
  W32(c->r[26]+0x00000150u,c->r[0]); // 800C7B2C
  {uint32_t ea=c->r[26]+0x00000154u; WF32(ea,c->f[1]);} // 800C7B30
  c->lr=0x800C7B38u; f_803A6F10(c); // 800C7B34
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B38
  c->lr=0x800C7B40u; f_80248E40(c); // 800C7B3C
  W32(c->r[26]+0x000001D8u,c->r[3]); // 800C7B40
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B44
  c->lr=0x800C7B4Cu; f_80248E40(c); // 800C7B48
  W32(c->r[26]+0x000001DCu,c->r[3]); // 800C7B4C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B50
  c->lr=0x800C7B58u; f_80248E40(c); // 800C7B54
  W32(c->r[26]+0x000001E0u,c->r[3]); // 800C7B58
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B5C
  c->lr=0x800C7B64u; f_80248E40(c); // 800C7B60
  W32(c->r[26]+0x000001E4u,c->r[3]); // 800C7B64
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B68
  c->lr=0x800C7B70u; f_80248E40(c); // 800C7B6C
  W32(c->r[26]+0x000001E8u,c->r[3]); // 800C7B70
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B74
  c->lr=0x800C7B7Cu; f_80248E40(c); // 800C7B78
  W32(c->r[26]+0x000001ECu,c->r[3]); // 800C7B7C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B80
  c->lr=0x800C7B88u; f_80248E40(c); // 800C7B84
  W32(c->r[26]+0x000001F0u,c->r[3]); // 800C7B88
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B8C
  c->lr=0x800C7B94u; f_80248E40(c); // 800C7B90
  W32(c->r[26]+0x000001F4u,c->r[3]); // 800C7B94
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B98
  c->lr=0x800C7BA0u; f_80248E40(c); // 800C7B9C
  W32(c->r[26]+0x000001F8u,c->r[3]); // 800C7BA0
  c->r[3]=0u+0xFFFFFFFFu; // 800C7BA4
  c->lr=0x800C7BACu; f_80248E40(c); // 800C7BA8
  W32(c->r[26]+0x000001FCu,c->r[3]); // 800C7BAC
  c->r[3]=0u+0xFFFFFFFFu; // 800C7BB0
  c->lr=0x800C7BB8u; f_80248E40(c); // 800C7BB4
  W32(c->r[26]+0x00000200u,c->r[3]); // 800C7BB8
  c->r[3]=c->r[25]+0xFFFFFFFFu; // 800C7BBC
  c->lr=0x800C7BC4u; f_80248E40(c); // 800C7BC0
  c->r[4]=R32(c->r[26]+0x00000214u); // 800C7BC4
  c->r[0]=c->r[24]+0x00003295u; // 800C7BC8
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7BCC
  c->r[5]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800C7BD0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7BD4
  W32(c->r[26]+0x00000204u,c->r[3]); // 800C7BD8
  c->r[5]=c->r[5]|0x20000000u; // 800C7BDC
  c->r[3]=c->r[26]+0x0000024Cu; // 800C7BE0
  c->r[4]=c->r[13]+0xFFFFB018u; // 800C7BE4
  W8(c->r[26]+0x00000208u,c->r[28]); // 800C7BE8
  W8(c->r[26]+0x00000209u,c->r[29]); // 800C7BEC
  W8(c->r[26]+0x0000020Au,c->r[30]); // 800C7BF0
  W8(c->r[26]+0x0000020Bu,c->r[31]); // 800C7BF4
  W8(c->r[26]+0x0000020Cu,c->r[31]); // 800C7BF8
  W8(c->r[26]+0x0000020Du,c->r[31]); // 800C7BFC
  W8(c->r[26]+0x0000020Eu,c->r[31]); // 800C7C00
  W8(c->r[26]+0x0000020Fu,c->r[31]); // 800C7C04
  W8(c->r[26]+0x00000210u,c->r[27]); // 800C7C08
  W8(c->r[26]+0x00000211u,c->r[27]); // 800C7C0C
  W32(c->r[26]+0x00000214u,c->r[5]); // 800C7C10
  W32(c->r[26]+0x00000218u,c->r[23]); // 800C7C14
  {uint32_t ea=c->r[26]+0x0000021Cu; WF32(ea,c->f[1]);} // 800C7C18
  {uint32_t ea=c->r[26]+0x00000220u; WF32(ea,c->f[1]);} // 800C7C1C
  {uint32_t ea=c->r[26]+0x00000224u; WF32(ea,c->f[1]);} // 800C7C20
  {uint32_t ea=c->r[26]+0x00000228u; WF32(ea,c->f[1]);} // 800C7C24
  {uint32_t ea=c->r[26]+0x0000022Cu; WF32(ea,c->f[0]);} // 800C7C28
  W16(c->r[26]+0x00000230u,c->r[27]); // 800C7C2C
  W32(c->r[26]+0x00000234u,c->r[27]); // 800C7C30
  W32(c->r[26]+0x0000023Cu,c->r[27]); // 800C7C34
  W32(c->r[26]+0x00000238u,c->r[27]); // 800C7C38
  W32(c->r[26]+0x00000240u,c->r[27]); // 800C7C3C
  W32(c->r[26]+0x00000244u,c->r[0]); // 800C7C40
  {uint32_t ea=c->r[26]+0x00000248u; WF32(ea,c->f[1]);} // 800C7C44
  c->lr=0x800C7C4Cu; f_803A6F10(c); // 800C7C48
  c->r[3]=0u+0xFFFFFFFFu; // 800C7C4C
  c->lr=0x800C7C54u; f_80248E40(c); // 800C7C50
  W32(c->r[26]+0x000002CCu,c->r[3]); // 800C7C54
  c->r[3]=0u+0xFFFFFFFFu; // 800C7C58
  c->lr=0x800C7C60u; f_80248E40(c); // 800C7C5C
  W32(c->r[26]+0x000002D0u,c->r[3]); // 800C7C60
  c->r[3]=0u+0xFFFFFFFFu; // 800C7C64
  c->lr=0x800C7C6Cu; f_80248E40(c); // 800C7C68
  W32(c->r[26]+0x000002D4u,c->r[3]); // 800C7C6C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7C70
  c->lr=0x800C7C78u; f_80248E40(c); // 800C7C74
  W32(c->r[26]+0x000002D8u,c->r[3]); // 800C7C78
  c->r[3]=0u+0xFFFFFFFFu; // 800C7C7C
  c->lr=0x800C7C84u; f_80248E40(c); // 800C7C80
  W32(c->r[26]+0x000002DCu,c->r[3]); // 800C7C84
  c->r[3]=0u+0xFFFFFFFFu; // 800C7C88
  c->lr=0x800C7C90u; f_80248E40(c); // 800C7C8C
  W32(c->r[26]+0x000002E0u,c->r[3]); // 800C7C90
  c->r[3]=0u+0xFFFFFFFFu; // 800C7C94
  c->lr=0x800C7C9Cu; f_80248E40(c); // 800C7C98
  W32(c->r[26]+0x000002E4u,c->r[3]); // 800C7C9C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7CA0
  c->lr=0x800C7CA8u; f_80248E40(c); // 800C7CA4
  W32(c->r[26]+0x000002E8u,c->r[3]); // 800C7CA8
  c->r[3]=0u+0xFFFFFFFFu; // 800C7CAC
  c->lr=0x800C7CB4u; f_80248E40(c); // 800C7CB0
  W32(c->r[26]+0x000002ECu,c->r[3]); // 800C7CB4
  c->r[3]=0u+0xFFFFFFFFu; // 800C7CB8
  c->lr=0x800C7CC0u; f_80248E40(c); // 800C7CBC
  W32(c->r[26]+0x000002F0u,c->r[3]); // 800C7CC0
  c->r[3]=0u+0xFFFFFFFFu; // 800C7CC4
  c->lr=0x800C7CCCu; f_80248E40(c); // 800C7CC8
  W32(c->r[26]+0x000002F4u,c->r[3]); // 800C7CCC
  c->r[3]=c->r[25]+0xFFFFFFFFu; // 800C7CD0
  c->lr=0x800C7CD8u; f_80248E40(c); // 800C7CD4
  c->r[0]=R32(c->r[26]+0x00000300u); // 800C7CD8
  c->r[4]=0u+0x00000001u; // 800C7CDC
  W32(c->r[26]+0x000002F8u,c->r[3]); // 800C7CE0
  c->r[11]=c->r[1]+0x00000030u; // 800C7CE4
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800C7CE8
  c->r[0]=c->r[0]|0x08000000u; // 800C7CEC
  W8(c->r[26]+0x000002FCu,c->r[4]); // 800C7CF0
  W32(c->r[26]+0x00000300u,c->r[0]); // 800C7CF4
  c->lr=0x800C7CFCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C7CF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C7CFC
  c->lr=c->r[0]; // 800C7D00
  c->r[1]=c->r[1]+0x00000030u; // 800C7D04
  return; // 800C7D08
}

// fn_800C7D0C
void f_800C7D0C(Ctx* __restrict c) {
  trace_call(0x800C7D0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7D0C
  c->r[0]=c->lr; // 800C7D10
  cmps(c,0,(int32_t)c->r[5],0); // 800C7D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7D18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7D1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C7D20
  c->r[30]=c->r[4]|c->r[4]; // 800C7D24
  if (crb(c,2)) { goto L_800C7D34; } // 800C7D28
  c->r[31]=c->r[5]|c->r[5]; // 800C7D2C
  goto L_800C7D38; // 800C7D30
L_800C7D34:;
  c->r[31]=c->r[3]|c->r[3]; // 800C7D34
L_800C7D38:;
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7D38
  c->r[3]=c->r[31]+0x0000004Cu; // 800C7D3C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C7D40
  c->r[0]=R8(c->r[4]+0x00000020u); // 800C7D44
  W8(c->r[31]+0x00000020u,c->r[0]); // 800C7D48
  c->r[0]=R8(c->r[4]+0x00000021u); // 800C7D4C
  W8(c->r[31]+0x00000021u,c->r[0]); // 800C7D50
  c->r[0]=R8(c->r[4]+0x00000022u); // 800C7D54
  W8(c->r[31]+0x00000022u,c->r[0]); // 800C7D58
  c->r[0]=R8(c->r[4]+0x00000023u); // 800C7D5C
  W8(c->r[31]+0x00000023u,c->r[0]); // 800C7D60
  c->r[0]=R8(c->r[4]+0x00000024u); // 800C7D64
  W8(c->r[31]+0x00000024u,c->r[0]); // 800C7D68
  c->r[0]=R8(c->r[4]+0x00000025u); // 800C7D6C
  W8(c->r[31]+0x00000025u,c->r[0]); // 800C7D70
  c->r[0]=R8(c->r[4]+0x00000026u); // 800C7D74
  W8(c->r[31]+0x00000026u,c->r[0]); // 800C7D78
  c->r[0]=R8(c->r[4]+0x00000027u); // 800C7D7C
  W8(c->r[31]+0x00000027u,c->r[0]); // 800C7D80
  c->r[0]=R8(c->r[4]+0x00000028u); // 800C7D84
  W8(c->r[31]+0x00000028u,c->r[0]); // 800C7D88
  c->r[0]=R8(c->r[4]+0x00000029u); // 800C7D8C
  W8(c->r[31]+0x00000029u,c->r[0]); // 800C7D90
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 800C7D94
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800C7D98
  c->r[0]=R32(c->r[4]+0x00000030u); // 800C7D9C
  W32(c->r[31]+0x00000030u,c->r[0]); // 800C7DA0
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7DA4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800C7DA8
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7DAC
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800C7DB0
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7DB4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800C7DB8
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7DBC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800C7DC0
  c->r[0]=R16(c->r[4]+0x00000048u); // 800C7DC4
  c->r[4]=c->r[4]+0x0000004Cu; // 800C7DC8
  W16(c->r[31]+0x00000048u,c->r[0]); // 800C7DCC
  c->lr=0x800C7DD4u; f_8003AB48(c); // 800C7DD0
  c->r[3]=c->r[31]+0x00000058u; // 800C7DD4
  c->r[4]=c->r[30]+0x00000058u; // 800C7DD8
  c->lr=0x800C7DE0u; f_8003F6E4(c); // 800C7DDC
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7DE0
  c->r[3]=c->r[31]+0x00000064u; // 800C7DE4
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800C7DE8
  c->r[4]=c->r[30]+0x00000064u; // 800C7DEC
  c->lr=0x800C7DF4u; f_803A6F10(c); // 800C7DF0
  c->r[0]=0u+0x00000006u; // 800C7DF4
  c->r[5]=c->r[31]+0x000000E0u; // 800C7DF8
  c->r[4]=c->r[30]+0x000000E0u; // 800C7DFC
  c->ctr=c->r[0]; // 800C7E00
L_800C7E04:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7E04
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7E08
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7E0C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7E10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7E04; } // 800C7E14
  c->r[0]=R8(c->r[30]+0x00000114u); // 800C7E18
  c->r[3]=c->r[31]+0x00000140u; // 800C7E1C
  W8(c->r[31]+0x00000114u,c->r[0]); // 800C7E20
  c->r[4]=c->r[30]+0x00000140u; // 800C7E24
  c->r[0]=R8(c->r[30]+0x00000115u); // 800C7E28
  W8(c->r[31]+0x00000115u,c->r[0]); // 800C7E2C
  c->r[0]=R8(c->r[30]+0x00000116u); // 800C7E30
  W8(c->r[31]+0x00000116u,c->r[0]); // 800C7E34
  c->r[0]=R8(c->r[30]+0x00000117u); // 800C7E38
  W8(c->r[31]+0x00000117u,c->r[0]); // 800C7E3C
  c->r[0]=R8(c->r[30]+0x00000118u); // 800C7E40
  W8(c->r[31]+0x00000118u,c->r[0]); // 800C7E44
  c->r[0]=R8(c->r[30]+0x00000119u); // 800C7E48
  W8(c->r[31]+0x00000119u,c->r[0]); // 800C7E4C
  c->r[0]=R8(c->r[30]+0x0000011Au); // 800C7E50
  W8(c->r[31]+0x0000011Au,c->r[0]); // 800C7E54
  c->r[0]=R8(c->r[30]+0x0000011Bu); // 800C7E58
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 800C7E5C
  c->r[0]=R8(c->r[30]+0x0000011Cu); // 800C7E60
  W8(c->r[31]+0x0000011Cu,c->r[0]); // 800C7E64
  c->r[0]=R8(c->r[30]+0x0000011Du); // 800C7E68
  W8(c->r[31]+0x0000011Du,c->r[0]); // 800C7E6C
  c->r[0]=R32(c->r[30]+0x00000120u); // 800C7E70
  W32(c->r[31]+0x00000120u,c->r[0]); // 800C7E74
  c->r[0]=R32(c->r[30]+0x00000124u); // 800C7E78
  W32(c->r[31]+0x00000124u,c->r[0]); // 800C7E7C
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7E80
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 800C7E84
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7E88
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[0]);} // 800C7E8C
  {uint32_t ea=c->r[30]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7E90
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[0]);} // 800C7E94
  {uint32_t ea=c->r[30]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7E98
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[0]);} // 800C7E9C
  c->r[0]=R16(c->r[30]+0x0000013Cu); // 800C7EA0
  W16(c->r[31]+0x0000013Cu,c->r[0]); // 800C7EA4
  c->lr=0x800C7EACu; f_8003AB48(c); // 800C7EA8
  c->r[3]=c->r[31]+0x0000014Cu; // 800C7EAC
  c->r[4]=c->r[30]+0x0000014Cu; // 800C7EB0
  c->lr=0x800C7EB8u; f_8003F6E4(c); // 800C7EB4
  {uint32_t ea=c->r[30]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7EB8
  c->r[3]=c->r[31]+0x00000158u; // 800C7EBC
  {uint32_t ea=c->r[31]+0x00000154u; WF32(ea,c->f[0]);} // 800C7EC0
  c->r[4]=c->r[30]+0x00000158u; // 800C7EC4
  c->lr=0x800C7ECCu; f_803A6F10(c); // 800C7EC8
  c->r[0]=0u+0x00000006u; // 800C7ECC
  c->r[5]=c->r[31]+0x000001D4u; // 800C7ED0
  c->r[4]=c->r[30]+0x000001D4u; // 800C7ED4
  c->ctr=c->r[0]; // 800C7ED8
L_800C7EDC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7EDC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7EE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7EE4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7EE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7EDC; } // 800C7EEC
  c->r[0]=R8(c->r[30]+0x00000208u); // 800C7EF0
  c->r[3]=c->r[31]+0x00000234u; // 800C7EF4
  W8(c->r[31]+0x00000208u,c->r[0]); // 800C7EF8
  c->r[4]=c->r[30]+0x00000234u; // 800C7EFC
  c->r[0]=R8(c->r[30]+0x00000209u); // 800C7F00
  W8(c->r[31]+0x00000209u,c->r[0]); // 800C7F04
  c->r[0]=R8(c->r[30]+0x0000020Au); // 800C7F08
  W8(c->r[31]+0x0000020Au,c->r[0]); // 800C7F0C
  c->r[0]=R8(c->r[30]+0x0000020Bu); // 800C7F10
  W8(c->r[31]+0x0000020Bu,c->r[0]); // 800C7F14
  c->r[0]=R8(c->r[30]+0x0000020Cu); // 800C7F18
  W8(c->r[31]+0x0000020Cu,c->r[0]); // 800C7F1C
  c->r[0]=R8(c->r[30]+0x0000020Du); // 800C7F20
  W8(c->r[31]+0x0000020Du,c->r[0]); // 800C7F24
  c->r[0]=R8(c->r[30]+0x0000020Eu); // 800C7F28
  W8(c->r[31]+0x0000020Eu,c->r[0]); // 800C7F2C
  c->r[0]=R8(c->r[30]+0x0000020Fu); // 800C7F30
  W8(c->r[31]+0x0000020Fu,c->r[0]); // 800C7F34
  c->r[0]=R8(c->r[30]+0x00000210u); // 800C7F38
  W8(c->r[31]+0x00000210u,c->r[0]); // 800C7F3C
  c->r[0]=R8(c->r[30]+0x00000211u); // 800C7F40
  W8(c->r[31]+0x00000211u,c->r[0]); // 800C7F44
  c->r[0]=R32(c->r[30]+0x00000214u); // 800C7F48
  W32(c->r[31]+0x00000214u,c->r[0]); // 800C7F4C
  c->r[0]=R32(c->r[30]+0x00000218u); // 800C7F50
  W32(c->r[31]+0x00000218u,c->r[0]); // 800C7F54
  {uint32_t ea=c->r[30]+0x0000021Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F58
  {uint32_t ea=c->r[31]+0x0000021Cu; WF32(ea,c->f[0]);} // 800C7F5C
  {uint32_t ea=c->r[30]+0x00000220u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F60
  {uint32_t ea=c->r[31]+0x00000220u; WF32(ea,c->f[0]);} // 800C7F64
  {uint32_t ea=c->r[30]+0x00000224u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F68
  {uint32_t ea=c->r[31]+0x00000224u; WF32(ea,c->f[0]);} // 800C7F6C
  {uint32_t ea=c->r[30]+0x00000228u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F70
  {uint32_t ea=c->r[31]+0x00000228u; WF32(ea,c->f[0]);} // 800C7F74
  c->r[0]=R16(c->r[30]+0x00000230u); // 800C7F78
  W16(c->r[31]+0x00000230u,c->r[0]); // 800C7F7C
  c->lr=0x800C7F84u; f_8003AB48(c); // 800C7F80
  c->r[3]=c->r[31]+0x00000240u; // 800C7F84
  c->r[4]=c->r[30]+0x00000240u; // 800C7F88
  c->lr=0x800C7F90u; f_8003F6E4(c); // 800C7F8C
  {uint32_t ea=c->r[30]+0x00000248u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F90
  c->r[3]=c->r[31]+0x0000024Cu; // 800C7F94
  {uint32_t ea=c->r[31]+0x00000248u; WF32(ea,c->f[0]);} // 800C7F98
  c->r[4]=c->r[30]+0x0000024Cu; // 800C7F9C
  c->lr=0x800C7FA4u; f_803A6F10(c); // 800C7FA0
  c->r[0]=0u+0x00000006u; // 800C7FA4
  c->r[5]=c->r[31]+0x000002C8u; // 800C7FA8
  c->r[4]=c->r[30]+0x000002C8u; // 800C7FAC
  c->ctr=c->r[0]; // 800C7FB0
L_800C7FB4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7FB4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7FB8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7FBC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7FC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7FB4; } // 800C7FC4
  c->r[0]=R8(c->r[30]+0x000002FCu); // 800C7FC8
  W8(c->r[31]+0x000002FCu,c->r[0]); // 800C7FCC
  c->r[0]=R32(c->r[30]+0x00000300u); // 800C7FD0
  W32(c->r[31]+0x00000300u,c->r[0]); // 800C7FD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7FD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C7FDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7FE0
  c->lr=c->r[0]; // 800C7FE4
  c->r[1]=c->r[1]+0x00000010u; // 800C7FE8
  return; // 800C7FEC
}

// fn_800C7FF0
void f_800C7FF0(Ctx* __restrict c) {
  trace_call(0x800C7FF0u);
  c->r[3]=0u+0x00000000u; // 800C7FF0
  return; // 800C7FF4
}

// fn_800C7FF8
void f_800C7FF8(Ctx* __restrict c) {
  trace_call(0x800C7FF8u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7FF8
  c->r[0]=c->lr; // 800C7FFC
  W32(c->r[1]+0x00000114u,c->r[0]); // 800C8000
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800C8004
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800C8008
  c->r[11]=c->r[1]+0x00000100u; // 800C800C
  c->lr=0x800C8014u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C8010
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8014
  c->r[0]=0u+0x43300000u; // 800C8018
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C801C
  c->f[31]=c->f[1]; // 800C8020
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 800C8024
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800C8028
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 800C802C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C8030
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 800C8034
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800C8038
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C803C
  c->r[29]=c->r[3]|c->r[3]; // 800C8040
  c->r[30]=c->r[4]|c->r[4]; // 800C8044
  c->r[31]=c->r[5]|c->r[5]; // 800C8048
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800C804C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 800C8050
  c->r[6]=R8(c->r[4]+0x00000020u); // 800C8054
  c->r[0]=R8(c->r[5]+0x00000020u); // 800C8058
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C805C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8060
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C8064
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C8068
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C806C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C8070
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800C8074
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800C8078
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800C807C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C8080
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800C8084
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C8088
  W8(c->r[3]+0x00000020u,c->r[0]); // 800C808C
  c->r[6]=R8(c->r[4]+0x00000021u); // 800C8090
  c->r[0]=R8(c->r[5]+0x00000021u); // 800C8094
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8098
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C809C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C80A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C80A4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C80A8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C80AC
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800C80B0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800C80B4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800C80B8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C80BC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800C80C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C80C4
  W8(c->r[3]+0x00000021u,c->r[0]); // 800C80C8
  c->r[6]=R8(c->r[4]+0x00000022u); // 800C80CC
  c->r[0]=R8(c->r[5]+0x00000022u); // 800C80D0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C80D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C80D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C80DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C80E0
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C80E4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C80E8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800C80EC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800C80F0
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800C80F4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C80F8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 800C80FC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C8100
  W8(c->r[3]+0x00000022u,c->r[0]); // 800C8104
  c->r[6]=R8(c->r[4]+0x00000023u); // 800C8108
  c->r[0]=R8(c->r[5]+0x00000023u); // 800C810C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8110
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8114
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C8118
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C811C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C8120
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C8124
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800C8128
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800C812C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800C8130
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C8134
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800C8138
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C813C
  W8(c->r[3]+0x00000023u,c->r[0]); // 800C8140
  c->r[6]=R8(c->r[4]+0x00000024u); // 800C8144
  c->r[0]=R8(c->r[5]+0x00000024u); // 800C8148
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C814C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8150
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C8154
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C8158
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C815C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C8160
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800C8164
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800C8168
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800C816C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C8170
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800C8174
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800C8178
  W8(c->r[3]+0x00000024u,c->r[0]); // 800C817C
  c->r[6]=R8(c->r[4]+0x00000025u); // 800C8180
  c->f[2]=c->f[31]; // 800C8184
  c->r[0]=R8(c->r[5]+0x00000025u); // 800C8188
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C818C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8190
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800C8194
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800C8198
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800C819C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C81A0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800C81A4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C81A8
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800C81AC
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800C81B0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800C81B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C81B8
  W8(c->r[3]+0x00000025u,c->r[0]); // 800C81BC
  c->r[6]=R8(c->r[4]+0x00000026u); // 800C81C0
  c->r[0]=R8(c->r[5]+0x00000026u); // 800C81C4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C81C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C81CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800C81D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800C81D4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800C81D8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C81DC
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800C81E0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C81E4
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800C81E8
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800C81EC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[4]);} // 800C81F0
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C81F4
  W8(c->r[3]+0x00000026u,c->r[0]); // 800C81F8
  c->r[6]=R8(c->r[4]+0x00000027u); // 800C81FC
  c->r[0]=R8(c->r[5]+0x00000027u); // 800C8200
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8208
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800C820C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800C8210
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800C8214
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 800C8218
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[5]); // 800C821C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C8220
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800C8224
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C8228
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800C822C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C8230
  W8(c->r[3]+0x00000027u,c->r[0]); // 800C8234
  {uint32_t ea=c->r[4]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C8238
  c->r[4]=c->r[4]+0x00000038u; // 800C823C
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8240
  c->r[5]=c->r[5]+0x00000038u; // 800C8244
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800C8248
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C824C
  c->f[1]=c->f[3]; // 800C8250
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800C8254
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800C8258
  c->r[3]=c->r[3]+0x00000038u; // 800C825C
  c->lr=0x800C8264u; f_8025E410(c); // 800C8260
  c->r[3]=R16(c->r[30]+0x00000048u); // 800C8264
  c->r[0]=R16(c->r[31]+0x00000048u); // 800C8268
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C826C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8270
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8274
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 800C8278
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800C827C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C8280
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C8284
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8288
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C828C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C8290
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8294
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C8298
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C829C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 800C82A0
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C82A4
  W16(c->r[29]+0x00000048u,c->r[0]); // 800C82A8
  {uint32_t ea=c->r[30]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C82AC
  {uint32_t ea=c->r[31]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C82B0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C82B4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C82B8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C82BC
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[2]);} // 800C82C0
  c->r[3]=R8(c->r[30]+0x00000114u); // 800C82C4
  c->r[0]=R8(c->r[31]+0x00000114u); // 800C82C8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C82CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C82D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C82D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C82D8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C82DC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C82E0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C82E4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C82E8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C82EC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C82F0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[2]);} // 800C82F4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C82F8
  W8(c->r[29]+0x00000114u,c->r[0]); // 800C82FC
  c->r[3]=R8(c->r[30]+0x00000115u); // 800C8300
  c->r[0]=R8(c->r[31]+0x00000115u); // 800C8304
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C8308
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C830C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C8310
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C8314
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8318
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C831C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C8320
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8324
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C8328
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C832C
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[2]);} // 800C8330
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800C8334
  W8(c->r[29]+0x00000115u,c->r[0]); // 800C8338
  c->r[3]=R8(c->r[30]+0x00000116u); // 800C833C
  c->r[0]=R8(c->r[31]+0x00000116u); // 800C8340
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C8344
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8348
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C834C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C8350
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8354
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C8358
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C835C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8360
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C8364
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C8368
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[2]);} // 800C836C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C8370
  W8(c->r[29]+0x00000116u,c->r[0]); // 800C8374
  c->r[3]=R8(c->r[30]+0x00000117u); // 800C8378
  c->r[0]=R8(c->r[31]+0x00000117u); // 800C837C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C8380
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8384
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C8388
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C838C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8390
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C8394
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C8398
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C839C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C83A0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C83A4
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[2]);} // 800C83A8
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C83AC
  W8(c->r[29]+0x00000117u,c->r[0]); // 800C83B0
  c->r[3]=R8(c->r[30]+0x00000118u); // 800C83B4
  c->f[2]=c->f[31]; // 800C83B8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C83BC
  c->r[3]=c->r[29]+0x0000012Cu; // 800C83C0
  c->r[0]=R8(c->r[31]+0x00000118u); // 800C83C4
  c->r[4]=c->r[30]+0x0000012Cu; // 800C83C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C83CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C83D0
  c->r[5]=c->r[31]+0x0000012Cu; // 800C83D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C83D8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C83DC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C83E0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C83E4
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 800C83E8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C83EC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C83F0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[3]);} // 800C83F4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C83F8
  W8(c->r[29]+0x00000118u,c->r[0]); // 800C83FC
  c->r[6]=R8(c->r[30]+0x00000119u); // 800C8400
  c->r[0]=R8(c->r[31]+0x00000119u); // 800C8404
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8408
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C840C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C8410
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C8414
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C8418
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C841C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C8420
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 800C8424
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C8428
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C842C
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[3]);} // 800C8430
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 800C8434
  W8(c->r[29]+0x00000119u,c->r[0]); // 800C8438
  c->r[6]=R8(c->r[30]+0x0000011Au); // 800C843C
  c->r[0]=R8(c->r[31]+0x0000011Au); // 800C8440
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8444
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8448
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C844C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C8450
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C8454
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8458
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C845C
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 800C8460
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C8464
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C8468
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[3]);} // 800C846C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C8470
  W8(c->r[29]+0x0000011Au,c->r[0]); // 800C8474
  c->r[6]=R8(c->r[30]+0x0000011Bu); // 800C8478
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 800C847C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8480
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8484
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C8488
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C848C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C8490
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800C8494
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[4]); // 800C8498
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800C849C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800C84A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C84A4
  {uint32_t ea=c->r[1]+0x00000098u; WF64(ea,c->f[0]);} // 800C84A8
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 800C84AC
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 800C84B0
  {uint32_t ea=c->r[30]+0x00000128u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C84B4
  {uint32_t ea=c->r[31]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C84B8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C84BC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800C84C0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800C84C4
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[0]);} // 800C84C8
  c->lr=0x800C84D0u; f_8025E410(c); // 800C84CC
  c->r[3]=R16(c->r[30]+0x0000013Cu); // 800C84D0
  c->r[0]=R16(c->r[31]+0x0000013Cu); // 800C84D4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C84D8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C84DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C84E0
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 800C84E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800C84E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C84EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C84F0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C84F4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C84F8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C84FC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8500
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C8504
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C8508
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[2]);} // 800C850C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C8510
  W16(c->r[29]+0x0000013Cu,c->r[0]); // 800C8514
  {uint32_t ea=c->r[30]+0x00000154u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C8518
  {uint32_t ea=c->r[31]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C851C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C8520
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8524
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C8528
  {uint32_t ea=c->r[29]+0x00000154u; WF32(ea,c->f[2]);} // 800C852C
  c->r[3]=R8(c->r[30]+0x00000208u); // 800C8530
  c->r[0]=R8(c->r[31]+0x00000208u); // 800C8534
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C8538
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C853C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C8540
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C8544
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8548
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C854C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C8550
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8554
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C8558
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C855C
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[2]);} // 800C8560
  c->r[0]=R32(c->r[1]+0x000000ACu); // 800C8564
  W8(c->r[29]+0x00000208u,c->r[0]); // 800C8568
  c->r[3]=R8(c->r[30]+0x00000209u); // 800C856C
  c->r[0]=R8(c->r[31]+0x00000209u); // 800C8570
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C8574
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8578
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C857C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C8580
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8584
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C8588
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C858C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8590
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C8594
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C8598
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[2]);} // 800C859C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800C85A0
  W8(c->r[29]+0x00000209u,c->r[0]); // 800C85A4
  c->r[3]=R8(c->r[30]+0x0000020Au); // 800C85A8
  c->r[0]=R8(c->r[31]+0x0000020Au); // 800C85AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C85B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C85B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C85B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C85BC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C85C0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C85C4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C85C8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C85CC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C85D0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C85D4
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[2]);} // 800C85D8
  c->r[0]=R32(c->r[1]+0x000000BCu); // 800C85DC
  W8(c->r[29]+0x0000020Au,c->r[0]); // 800C85E0
  c->r[3]=R8(c->r[30]+0x0000020Bu); // 800C85E4
  c->r[0]=R8(c->r[31]+0x0000020Bu); // 800C85E8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C85EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C85F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800C85F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800C85F8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C85FC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800C8600
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C8604
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800C8608
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800C860C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C8610
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[2]);} // 800C8614
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800C8618
  W8(c->r[29]+0x0000020Bu,c->r[0]); // 800C861C
  c->r[3]=R8(c->r[30]+0x0000020Cu); // 800C8620
  c->f[2]=c->f[31]; // 800C8624
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C8628
  c->r[3]=c->r[29]+0x00000220u; // 800C862C
  c->r[0]=R8(c->r[31]+0x0000020Cu); // 800C8630
  c->r[4]=c->r[30]+0x00000220u; // 800C8634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8638
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C863C
  c->r[5]=c->r[31]+0x00000220u; // 800C8640
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C8644
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C8648
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C864C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C8650
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 800C8654
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C8658
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C865C
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[3]);} // 800C8660
  c->r[0]=R32(c->r[1]+0x000000CCu); // 800C8664
  W8(c->r[29]+0x0000020Cu,c->r[0]); // 800C8668
  c->r[6]=R8(c->r[30]+0x0000020Du); // 800C866C
  c->r[0]=R8(c->r[31]+0x0000020Du); // 800C8670
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8678
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C867C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C8680
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C8684
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C8688
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C868C
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 800C8690
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C8694
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C8698
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[3]);} // 800C869C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800C86A0
  W8(c->r[29]+0x0000020Du,c->r[0]); // 800C86A4
  c->r[6]=R8(c->r[30]+0x0000020Eu); // 800C86A8
  c->r[0]=R8(c->r[31]+0x0000020Eu); // 800C86AC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C86B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C86B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C86B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C86BC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C86C0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800C86C4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800C86C8
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 800C86CC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800C86D0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800C86D4
  {uint32_t ea=c->r[1]+0x000000D8u; WF64(ea,c->f[3]);} // 800C86D8
  c->r[0]=R32(c->r[1]+0x000000DCu); // 800C86DC
  W8(c->r[29]+0x0000020Eu,c->r[0]); // 800C86E0
  c->r[6]=R8(c->r[30]+0x0000020Fu); // 800C86E4
  c->r[0]=R8(c->r[31]+0x0000020Fu); // 800C86E8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C86EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C86F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800C86F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800C86F8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800C86FC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800C8700
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[4]); // 800C8704
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800C8708
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800C870C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C8710
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[0]);} // 800C8714
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800C8718
  W8(c->r[29]+0x0000020Fu,c->r[0]); // 800C871C
  {uint32_t ea=c->r[30]+0x0000021Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C8720
  {uint32_t ea=c->r[31]+0x0000021Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8724
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800C8728
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800C872C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800C8730
  {uint32_t ea=c->r[29]+0x0000021Cu; WF32(ea,c->f[0]);} // 800C8734
  c->lr=0x800C873Cu; f_8025E410(c); // 800C8738
  c->r[3]=R16(c->r[30]+0x00000230u); // 800C873C
  c->r[0]=R16(c->r[31]+0x00000230u); // 800C8740
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C8744
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8748
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C874C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 800C8750
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[2]=RF64(ea);} // 800C8754
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800C8758
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800C875C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C8760
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800C8764
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800C8768
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800C876C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C8770
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C8774
  {uint32_t ea=c->r[1]+0x000000E8u; WF64(ea,c->f[0]);} // 800C8778
  c->r[0]=R32(c->r[1]+0x000000ECu); // 800C877C
  W16(c->r[29]+0x00000230u,c->r[0]); // 800C8780
  {uint32_t ea=c->r[30]+0x00000248u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8784
  {uint32_t ea=c->r[31]+0x00000248u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8788
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800C878C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800C8790
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C8794
  {uint32_t ea=c->r[29]+0x00000248u; WF32(ea,c->f[0]);} // 800C8798
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800C879C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800C87A0
  c->r[11]=c->r[1]+0x00000100u; // 800C87A4
  c->lr=0x800C87ACu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C87A8
  c->r[0]=R32(c->r[1]+0x00000114u); // 800C87AC
  c->lr=c->r[0]; // 800C87B0
  c->r[1]=c->r[1]+0x00000110u; // 800C87B4
  return; // 800C87B8
}

// fn_800C87BC
void f_800C87BC(Ctx* __restrict c) {
  trace_call(0x800C87BCu);
  c->r[3]=0u+0x00000304u; // 800C87BC
  return; // 800C87C0
}

// fn_800C87C4
void f_800C87C4(Ctx* __restrict c) {
  trace_call(0x800C87C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C87C4
  c->r[0]=c->lr; // 800C87C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C87CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C87D0
  c->r[31]=c->r[3]|c->r[3]; // 800C87D4
  c->lr=0x800C87DCu; f_800C70E0(c); // 800C87D8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C87DC
  c->r[3]=0u+0x80420000u; // 800C87E0
  c->r[3]=c->r[3]+0xFFFF9D90u; // 800C87E4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C87E8
  c->r[0]=c->r[0]|0x80000000u; // 800C87EC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C87F0
  c->r[3]=c->r[31]|c->r[31]; // 800C87F4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C87F8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C87FC
  c->ctr=c->r[12]; // 800C8800
  if (true) { c->lr=0x800C8808u; dispatch(c,c->ctr); } // 800C8804
  c->r[3]=c->r[31]|c->r[31]; // 800C8808
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C880C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8810
  c->lr=c->r[0]; // 800C8814
  c->r[1]=c->r[1]+0x00000010u; // 800C8818
  return; // 800C881C
}

// fn_800C8820
void f_800C8820(Ctx* __restrict c) {
  trace_call(0x800C8820u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8820
  c->r[0]=c->lr; // 800C8824
  cmps(c,0,(int32_t)c->r[3],0); // 800C8828
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C882C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8830
  c->r[30]=c->r[3]|c->r[3]; // 800C8834
  c->r[31]=c->r[4]|c->r[4]; // 800C8838
  if (crb(c,2)) { goto L_800C8858; } // 800C883C
  c->r[4]=0u+0x00000000u; // 800C8840
  c->lr=0x800C8848u; f_802B1180(c); // 800C8844
  cmps(c,0,(int32_t)c->r[31],0); // 800C8848
  if (!crb(c,1)) { goto L_800C8858; } // 800C884C
  c->r[3]=c->r[30]|c->r[30]; // 800C8850
  c->lr=0x800C8858u; f_80244DC0(c); // 800C8854
L_800C8858:;
  c->r[3]=c->r[30]|c->r[30]; // 800C8858
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C885C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8860
  c->lr=c->r[0]; // 800C8864
  c->r[1]=c->r[1]+0x00000010u; // 800C8868
  return; // 800C886C
}

// fn_800C8870
void f_800C8870(Ctx* __restrict c) {
  trace_call(0x800C8870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8870
  c->r[0]=c->lr; // 800C8874
  c->r[3]=0u+0x00000304u; // 800C8878
  c->r[4]=c->r[13]+0xFFFFB019u; // 800C887C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8880
  c->r[5]=0u+0x00000000u; // 800C8884
  c->r[6]=0u+0x00001001u; // 800C8888
  c->lr=0x800C8890u; f_80244D20(c); // 800C888C
  cmps(c,0,(int32_t)c->r[3],0); // 800C8890
  if (crb(c,2)) { goto L_800C889C; } // 800C8894
  c->lr=0x800C889Cu; f_800C87C4(c); // 800C8898
L_800C889C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C889C
  c->lr=c->r[0]; // 800C88A0
  c->r[1]=c->r[1]+0x00000010u; // 800C88A4
  return; // 800C88A8
}

// fn_800C88AC
void f_800C88AC(Ctx* __restrict c) {
  trace_call(0x800C88ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C88AC
  c->r[0]=c->lr; // 800C88B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C88B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C88B8
  c->r[31]=c->r[3]|c->r[3]; // 800C88BC
  c->lr=0x800C88C4u; f_80244520(c); // 800C88C0
  c->r[7]=c->r[3]|c->r[3]; // 800C88C4
  c->r[9]=c->r[31]|c->r[31]; // 800C88C8
  c->r[3]=0u+0x00000304u; // 800C88CC
  c->r[4]=c->r[13]+0xFFFFB01Eu; // 800C88D0
  c->r[5]=0u+0x00000000u; // 800C88D4
  c->r[6]=0u+0x00002001u; // 800C88D8
  c->r[8]=0u+0x00000000u; // 800C88DC
  c->lr=0x800C88E4u; f_80242DF0(c); // 800C88E0
  c->r[4]=c->r[3]|c->r[3]; // 800C88E4
  c->r[3]=0u+0x00000304u; // 800C88E8
  c->r[5]=c->r[13]+0xFFFFB023u; // 800C88EC
  c->r[6]=0u+0x00000000u; // 800C88F0
  c->r[7]=0u+0x00001001u; // 800C88F4
  c->lr=0x800C88FCu; f_80244DB0(c); // 800C88F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C88FC
  if (crb(c,2)) { goto L_800C8908; } // 800C8900
  c->lr=0x800C8908u; f_800C87C4(c); // 800C8904
L_800C8908:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C890C
  c->lr=c->r[0]; // 800C8910
  c->r[1]=c->r[1]+0x00000010u; // 800C8914
  return; // 800C8918
}

// fn_800C891C
void f_800C891C(Ctx* __restrict c) {
  trace_call(0x800C891Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C891C
  c->r[0]=c->lr; // 800C8920
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C8928
  c->r[31]=c->r[3]|c->r[3]; // 800C892C
  c->lr=0x800C8934u; f_802B1168(c); // 800C8930
  c->r[8]=0u+0x80420000u; // 800C8934
  c->r[7]=0u+0x80410000u; // 800C8938
  c->r[5]=0u+0x25870000u; // 800C893C
  c->r[4]=0u+0xFCFB0000u; // 800C8940
  c->r[3]=0u+0x9C1C0000u; // 800C8944
  c->r[8]=c->r[8]+0xFFFF9D54u; // 800C8948
  c->r[0]=c->r[3]+0x00005F14u; // 800C894C
  c->r[7]=c->r[7]+0xFFFFCEA5u; // 800C8950
  c->r[5]=c->r[5]+0x000002BDu; // 800C8954
  c->r[4]=c->r[4]+0x00002719u; // 800C8958
  c->r[6]=0u+0x00000000u; // 800C895C
  W32(c->r[31]+0x00000018u,c->r[8]); // 800C8960
  c->r[3]=c->r[31]|c->r[31]; // 800C8964
  W32(c->r[31]+0x00000000u,c->r[7]); // 800C8968
  W32(c->r[31]+0x00000008u,c->r[6]); // 800C896C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800C8970
  W32(c->r[31]+0x00000010u,c->r[4]); // 800C8974
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C8978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C897C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8980
  c->lr=c->r[0]; // 800C8984
  c->r[1]=c->r[1]+0x00000010u; // 800C8988
  return; // 800C898C
}

// fn_800C8990
void f_800C8990(Ctx* __restrict c) {
  trace_call(0x800C8990u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8990
  c->r[0]=c->lr; // 800C8994
  cmps(c,0,(int32_t)c->r[4],0); // 800C8998
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C899C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C89A0
  c->r[30]=c->r[3]|c->r[3]; // 800C89A4
  c->r[31]=c->r[4]|c->r[4]; // 800C89A8
  if (crb(c,2)) { goto L_800C8A00; } // 800C89AC
  c->r[3]=c->r[31]|c->r[31]; // 800C89B0
  c->lr=0x800C89B8u; f_80244520(c); // 800C89B4
  c->r[7]=c->r[3]|c->r[3]; // 800C89B8
  c->r[9]=c->r[31]|c->r[31]; // 800C89BC
  c->r[3]=0u+0x0000005Cu; // 800C89C0
  c->r[4]=c->r[13]+0xFFFFB028u; // 800C89C4
  c->r[5]=0u+0x00000000u; // 800C89C8
  c->r[6]=0u+0x00002001u; // 800C89CC
  c->r[8]=0u+0x00000000u; // 800C89D0
  c->lr=0x800C89D8u; f_80242DF0(c); // 800C89D4
  c->r[4]=c->r[3]|c->r[3]; // 800C89D8
  c->r[3]=0u+0x0000005Cu; // 800C89DC
  c->r[5]=c->r[13]+0xFFFFB02Du; // 800C89E0
  c->r[6]=0u+0x00000000u; // 800C89E4
  c->r[7]=0u+0x00001001u; // 800C89E8
  c->lr=0x800C89F0u; f_80244DB0(c); // 800C89EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C89F0
  if (crb(c,2)) { goto L_800C8A20; } // 800C89F4
  c->lr=0x800C89FCu; f_800C891C(c); // 800C89F8
  goto L_800C8A20; // 800C89FC
L_800C8A00:;
  c->r[3]=0u+0x0000005Cu; // 800C8A00
  c->r[4]=c->r[13]+0xFFFFB032u; // 800C8A04
  c->r[5]=0u+0x00000000u; // 800C8A08
  c->r[6]=0u+0x00001001u; // 800C8A0C
  c->lr=0x800C8A14u; f_80244D20(c); // 800C8A10
  cmps(c,0,(int32_t)c->r[3],0); // 800C8A14
  if (crb(c,2)) { goto L_800C8A20; } // 800C8A18
  c->lr=0x800C8A20u; f_800C891C(c); // 800C8A1C
L_800C8A20:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C8A20
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C8A24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C8A28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8A2C
  c->lr=c->r[0]; // 800C8A30
  c->r[1]=c->r[1]+0x00000010u; // 800C8A34
  return; // 800C8A38
}

// fn_800C8A3C
void f_800C8A3C(Ctx* __restrict c) {
  trace_call(0x800C8A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8A3C
  c->r[0]=c->lr; // 800C8A40
  c->r[5]=c->r[3]|c->r[3]; // 800C8A44
  c->r[3]=c->r[4]|c->r[4]; // 800C8A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8A4C
  c->r[4]=c->r[5]+0x0000001Cu; // 800C8A50
  c->r[5]=0u+0x00000000u; // 800C8A54
  c->lr=0x800C8A5Cu; f_8030B7F0(c); // 800C8A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8A5C
  c->r[3]=0u+0x00000000u; // 800C8A60
  c->lr=c->r[0]; // 800C8A64
  c->r[1]=c->r[1]+0x00000010u; // 800C8A68
  return; // 800C8A6C
}

// fn_800C8A70
void f_800C8A70(Ctx* __restrict c) {
  trace_call(0x800C8A70u);
  return; // 800C8A70
}

// fn_800C8A74
void f_800C8A74(Ctx* __restrict c) {
  trace_call(0x800C8A74u);
  c->r[4]=c->r[13]+0xFFFFB037u; // 800C8A74
  c->r[3]=c->r[3]+0x0000001Cu; // 800C8A78
  f_803A6F10(c); return; // 800C8A7C
}

// fn_800C8A80
void f_800C8A80(Ctx* __restrict c) {
  trace_call(0x800C8A80u);
  cmps(c,0,(int32_t)c->r[5],0); // 800C8A80
  if (crb(c,2)) { goto L_800C8A8C; } // 800C8A84
  goto L_800C8A90; // 800C8A88
L_800C8A8C:;
  c->r[5]=c->r[3]|c->r[3]; // 800C8A8C
L_800C8A90:;
  c->r[3]=c->r[5]+0x0000001Cu; // 800C8A90
  c->r[4]=c->r[4]+0x0000001Cu; // 800C8A94
  f_803A6F10(c); return; // 800C8A98
}

// fn_800C8A9C
void f_800C8A9C(Ctx* __restrict c) {
  trace_call(0x800C8A9Cu);
  c->r[3]=0u+0x00000000u; // 800C8A9C
  return; // 800C8AA0
}

// fn_800C8AA4
void f_800C8AA4(Ctx* __restrict c) {
  trace_call(0x800C8AA4u);
  c->r[3]=0u+0x0000005Cu; // 800C8AA4
  return; // 800C8AA8
}

// fn_800C8AAC
void f_800C8AAC(Ctx* __restrict c) {
  trace_call(0x800C8AACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8AAC
  c->r[0]=c->lr; // 800C8AB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C8AB8
  c->r[31]=c->r[3]|c->r[3]; // 800C8ABC
  c->lr=0x800C8AC4u; f_800C891C(c); // 800C8AC0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C8AC4
  c->r[3]=0u+0x80420000u; // 800C8AC8
  c->r[3]=c->r[3]+0xFFFF9D14u; // 800C8ACC
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C8AD0
  c->r[0]=c->r[0]|0x80000000u; // 800C8AD4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C8AD8
  c->r[3]=c->r[31]|c->r[31]; // 800C8ADC
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C8AE0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C8AE4
  c->ctr=c->r[12]; // 800C8AE8
  if (true) { c->lr=0x800C8AF0u; dispatch(c,c->ctr); } // 800C8AEC
  c->r[3]=c->r[31]|c->r[31]; // 800C8AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C8AF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8AF8
  c->lr=c->r[0]; // 800C8AFC
  c->r[1]=c->r[1]+0x00000010u; // 800C8B00
  return; // 800C8B04
}

// fn_800C8B08
void f_800C8B08(Ctx* __restrict c) {
  trace_call(0x800C8B08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8B08
  c->r[0]=c->lr; // 800C8B0C
  cmps(c,0,(int32_t)c->r[3],0); // 800C8B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8B14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8B18
  c->r[30]=c->r[3]|c->r[3]; // 800C8B1C
  c->r[31]=c->r[4]|c->r[4]; // 800C8B20
  if (crb(c,2)) { goto L_800C8B40; } // 800C8B24
  c->r[4]=0u+0x00000000u; // 800C8B28
  c->lr=0x800C8B30u; f_802B1180(c); // 800C8B2C
  cmps(c,0,(int32_t)c->r[31],0); // 800C8B30
  if (!crb(c,1)) { goto L_800C8B40; } // 800C8B34
  c->r[3]=c->r[30]|c->r[30]; // 800C8B38
  c->lr=0x800C8B40u; f_80244DC0(c); // 800C8B3C
L_800C8B40:;
  c->r[3]=c->r[30]|c->r[30]; // 800C8B40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C8B44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8B48
  c->lr=c->r[0]; // 800C8B4C
  c->r[1]=c->r[1]+0x00000010u; // 800C8B50
  return; // 800C8B54
}

// fn_800C8B58
void f_800C8B58(Ctx* __restrict c) {
  trace_call(0x800C8B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8B58
  c->r[0]=c->lr; // 800C8B5C
  c->r[3]=0u+0x0000005Cu; // 800C8B60
  c->r[4]=c->r[13]+0xFFFFB038u; // 800C8B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8B68
  c->r[5]=0u+0x00000000u; // 800C8B6C
  c->r[6]=0u+0x00001001u; // 800C8B70
  c->lr=0x800C8B78u; f_80244D20(c); // 800C8B74
  cmps(c,0,(int32_t)c->r[3],0); // 800C8B78
  if (crb(c,2)) { goto L_800C8B84; } // 800C8B7C
  c->lr=0x800C8B84u; f_800C8AAC(c); // 800C8B80
L_800C8B84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8B84
  c->lr=c->r[0]; // 800C8B88
  c->r[1]=c->r[1]+0x00000010u; // 800C8B8C
  return; // 800C8B90
}

// fn_800C8B94
void f_800C8B94(Ctx* __restrict c) {
  trace_call(0x800C8B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8B94
  c->r[0]=c->lr; // 800C8B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C8BA0
  c->r[31]=c->r[3]|c->r[3]; // 800C8BA4
  c->lr=0x800C8BACu; f_80244520(c); // 800C8BA8
  c->r[7]=c->r[3]|c->r[3]; // 800C8BAC
  c->r[9]=c->r[31]|c->r[31]; // 800C8BB0
  c->r[3]=0u+0x0000005Cu; // 800C8BB4
  c->r[4]=c->r[13]+0xFFFFB03Du; // 800C8BB8
  c->r[5]=0u+0x00000000u; // 800C8BBC
  c->r[6]=0u+0x00002001u; // 800C8BC0
  c->r[8]=0u+0x00000000u; // 800C8BC4
  c->lr=0x800C8BCCu; f_80242DF0(c); // 800C8BC8
  c->r[4]=c->r[3]|c->r[3]; // 800C8BCC
  c->r[3]=0u+0x0000005Cu; // 800C8BD0
  c->r[5]=c->r[13]+0xFFFFB042u; // 800C8BD4
  c->r[6]=0u+0x00000000u; // 800C8BD8
  c->r[7]=0u+0x00001001u; // 800C8BDC
  c->lr=0x800C8BE4u; f_80244DB0(c); // 800C8BE0
  cmps(c,0,(int32_t)c->r[3],0); // 800C8BE4
  if (crb(c,2)) { goto L_800C8BF0; } // 800C8BE8
  c->lr=0x800C8BF0u; f_800C8AAC(c); // 800C8BEC
L_800C8BF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8BF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C8BF4
  c->lr=c->r[0]; // 800C8BF8
  c->r[1]=c->r[1]+0x00000010u; // 800C8BFC
  return; // 800C8C00
}

// fn_800C8C04
void f_800C8C04(Ctx* __restrict c) {
  trace_call(0x800C8C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8C04
  c->r[0]=c->lr; // 800C8C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8C0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C8C10
  c->r[31]=c->r[3]|c->r[3]; // 800C8C14
  c->lr=0x800C8C1Cu; f_802B1168(c); // 800C8C18
  c->r[8]=0u+0x80420000u; // 800C8C1C
  c->r[7]=0u+0x80410000u; // 800C8C20
  c->r[5]=0u+0x94DB0000u; // 800C8C24
  c->r[4]=0u+0x3EA20000u; // 800C8C28
  c->r[3]=0u+0xA1180000u; // 800C8C2C
  c->r[8]=c->r[8]+0xFFFF9CD8u; // 800C8C30
  c->r[0]=c->r[3]+0xFFFFC4D3u; // 800C8C34
  c->r[7]=c->r[7]+0xFFFFCEB9u; // 800C8C38
  c->r[5]=c->r[5]+0x00004909u; // 800C8C3C
  c->r[4]=c->r[4]+0x00002A28u; // 800C8C40
  c->r[6]=0u+0x00000000u; // 800C8C44
  W32(c->r[31]+0x00000018u,c->r[8]); // 800C8C48
  c->r[3]=c->r[31]|c->r[31]; // 800C8C4C
  W32(c->r[31]+0x00000000u,c->r[7]); // 800C8C50
  W32(c->r[31]+0x00000008u,c->r[6]); // 800C8C54
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800C8C58
  W32(c->r[31]+0x00000010u,c->r[4]); // 800C8C5C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C8C60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C8C64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8C68
  c->lr=c->r[0]; // 800C8C6C
  c->r[1]=c->r[1]+0x00000010u; // 800C8C70
  return; // 800C8C74
}

// fn_800C8C78
void f_800C8C78(Ctx* __restrict c) {
  trace_call(0x800C8C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8C78
  c->r[0]=c->lr; // 800C8C7C
  cmps(c,0,(int32_t)c->r[4],0); // 800C8C80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8C84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8C88
  c->r[30]=c->r[3]|c->r[3]; // 800C8C8C
  c->r[31]=c->r[4]|c->r[4]; // 800C8C90
  if (crb(c,2)) { goto L_800C8CE8; } // 800C8C94
  c->r[3]=c->r[31]|c->r[31]; // 800C8C98
  c->lr=0x800C8CA0u; f_80244520(c); // 800C8C9C
  c->r[7]=c->r[3]|c->r[3]; // 800C8CA0
  c->r[9]=c->r[31]|c->r[31]; // 800C8CA4
  c->r[3]=0u+0x000000A0u; // 800C8CA8
  c->r[4]=c->r[13]+0xFFFFB047u; // 800C8CAC
  c->r[5]=0u+0x00000000u; // 800C8CB0
  c->r[6]=0u+0x00002001u; // 800C8CB4
  c->r[8]=0u+0x00000000u; // 800C8CB8
  c->lr=0x800C8CC0u; f_80242DF0(c); // 800C8CBC
  c->r[4]=c->r[3]|c->r[3]; // 800C8CC0
  c->r[3]=0u+0x000000A0u; // 800C8CC4
  c->r[5]=c->r[13]+0xFFFFB04Cu; // 800C8CC8
  c->r[6]=0u+0x00000000u; // 800C8CCC
  c->r[7]=0u+0x00001001u; // 800C8CD0
  c->lr=0x800C8CD8u; f_80244DB0(c); // 800C8CD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C8CD8
  if (crb(c,2)) { goto L_800C8D08; } // 800C8CDC
  c->lr=0x800C8CE4u; f_800C8C04(c); // 800C8CE0
  goto L_800C8D08; // 800C8CE4
L_800C8CE8:;
  c->r[3]=0u+0x000000A0u; // 800C8CE8
  c->r[4]=c->r[13]+0xFFFFB051u; // 800C8CEC
  c->r[5]=0u+0x00000000u; // 800C8CF0
  c->r[6]=0u+0x00001001u; // 800C8CF4
  c->lr=0x800C8CFCu; f_80244D20(c); // 800C8CF8
  cmps(c,0,(int32_t)c->r[3],0); // 800C8CFC
  if (crb(c,2)) { goto L_800C8D08; } // 800C8D00
  c->lr=0x800C8D08u; f_800C8C04(c); // 800C8D04
L_800C8D08:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C8D08
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C8D0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C8D10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8D14
  c->lr=c->r[0]; // 800C8D18
  c->r[1]=c->r[1]+0x00000010u; // 800C8D1C
  return; // 800C8D20
}

// fn_800C8D24
void f_800C8D24(Ctx* __restrict c) {
  trace_call(0x800C8D24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8D24
  c->r[0]=c->lr; // 800C8D28
  c->r[5]=0u+0x00000000u; // 800C8D2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8D30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8D34
  c->r[30]=c->r[3]|c->r[3]; // 800C8D38
  c->r[31]=c->r[4]|c->r[4]; // 800C8D3C
  c->r[3]=c->r[31]|c->r[31]; // 800C8D40
  c->r[4]=c->r[30]+0x0000001Cu; // 800C8D44
  c->lr=0x800C8D4Cu; f_8030B7F0(c); // 800C8D48
  c->r[3]=c->r[31]|c->r[31]; // 800C8D4C
  c->lr=0x800C8D54u; f_8030BD1C(c); // 800C8D50
  W8(c->r[30]+0x0000009Cu,c->r[3]); // 800C8D54
  c->r[3]=c->r[31]|c->r[31]; // 800C8D58
  c->lr=0x800C8D60u; f_8030BD1C(c); // 800C8D5C
  W8(c->r[30]+0x0000009Du,c->r[3]); // 800C8D60
  c->r[3]=c->r[31]|c->r[31]; // 800C8D64
  c->lr=0x800C8D6Cu; f_8030BD1C(c); // 800C8D68
  W8(c->r[30]+0x0000009Eu,c->r[3]); // 800C8D6C
  c->r[3]=c->r[31]|c->r[31]; // 800C8D70
  c->lr=0x800C8D78u; f_8030BD1C(c); // 800C8D74
  W8(c->r[30]+0x0000009Fu,c->r[3]); // 800C8D78
  c->r[3]=0u+0x00000000u; // 800C8D7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C8D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8D84
  c->lr=c->r[0]; // 800C8D88
  c->r[1]=c->r[1]+0x00000010u; // 800C8D8C
  return; // 800C8D90
}

// fn_800C8D94
void f_800C8D94(Ctx* __restrict c) {
  trace_call(0x800C8D94u);
  return; // 800C8D94
}

// fn_800C8D98
void f_800C8D98(Ctx* __restrict c) {
  trace_call(0x800C8D98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8D98
  c->r[0]=c->lr; // 800C8D9C
  c->r[4]=c->r[13]+0xFFFFB056u; // 800C8DA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8DA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C8DA8
  c->r[31]=c->r[3]|c->r[3]; // 800C8DAC
  c->r[3]=c->r[3]+0x0000001Cu; // 800C8DB0
  c->lr=0x800C8DB8u; f_803A6F10(c); // 800C8DB4
  c->r[0]=0u+0x0000007Fu; // 800C8DB8
  W8(c->r[31]+0x0000009Cu,c->r[0]); // 800C8DBC
  W8(c->r[31]+0x0000009Du,c->r[0]); // 800C8DC0
  W8(c->r[31]+0x0000009Eu,c->r[0]); // 800C8DC4
  W8(c->r[31]+0x0000009Fu,c->r[0]); // 800C8DC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C8DCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8DD0
  c->lr=c->r[0]; // 800C8DD4
  c->r[1]=c->r[1]+0x00000010u; // 800C8DD8
  return; // 800C8DDC
}

// fn_800C8DE0
void f_800C8DE0(Ctx* __restrict c) {
  trace_call(0x800C8DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8DE0
  c->r[0]=c->lr; // 800C8DE4
  cmps(c,0,(int32_t)c->r[5],0); // 800C8DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8DEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8DF0
  c->r[30]=c->r[4]|c->r[4]; // 800C8DF4
  if (crb(c,2)) { goto L_800C8E04; } // 800C8DF8
  c->r[31]=c->r[5]|c->r[5]; // 800C8DFC
  goto L_800C8E08; // 800C8E00
L_800C8E04:;
  c->r[31]=c->r[3]|c->r[3]; // 800C8E04
L_800C8E08:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800C8E08
  c->r[4]=c->r[4]+0x0000001Cu; // 800C8E0C
  c->lr=0x800C8E14u; f_803A6F10(c); // 800C8E10
  c->r[0]=R8(c->r[30]+0x0000009Cu); // 800C8E14
  W8(c->r[31]+0x0000009Cu,c->r[0]); // 800C8E18
  c->r[0]=R8(c->r[30]+0x0000009Du); // 800C8E1C
  W8(c->r[31]+0x0000009Du,c->r[0]); // 800C8E20
  c->r[0]=R8(c->r[30]+0x0000009Eu); // 800C8E24
  W8(c->r[31]+0x0000009Eu,c->r[0]); // 800C8E28
  c->r[0]=R8(c->r[30]+0x0000009Fu); // 800C8E2C
  W8(c->r[31]+0x0000009Fu,c->r[0]); // 800C8E30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C8E34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8E38
  c->lr=c->r[0]; // 800C8E3C
  c->r[1]=c->r[1]+0x00000010u; // 800C8E40
  return; // 800C8E44
}

// fn_800C8E48
void f_800C8E48(Ctx* __restrict c) {
  trace_call(0x800C8E48u);
  c->r[3]=0u+0x00000000u; // 800C8E48
  return; // 800C8E4C
}

// fn_800C8E50
void f_800C8E50(Ctx* __restrict c) {
  trace_call(0x800C8E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8E50
  c->r[7]=0u+0x43300000u; // 800C8E54
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8E58
  c->r[6]=R8(c->r[4]+0x0000009Cu); // 800C8E5C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800C8E60
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 800C8E64
  c->r[0]=R8(c->r[5]+0x0000009Cu); // 800C8E68
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8E6C
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[3]=RF64(ea);} // 800C8E70
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800C8E74
  W32(c->r[1]+0x00000010u,c->r[7]); // 800C8E78
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800C8E7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8E80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800C8E84
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C8E88
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800C8E8C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C8E90
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C8E94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C8E98
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800C8E9C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C8EA0
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 800C8EA4
  c->r[6]=R8(c->r[4]+0x0000009Du); // 800C8EA8
  c->r[0]=R8(c->r[5]+0x0000009Du); // 800C8EAC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8EB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8EB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800C8EB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800C8EBC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C8EC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800C8EC4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C8EC8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C8ECC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C8ED0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C8ED4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800C8ED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C8EDC
  W8(c->r[3]+0x0000009Du,c->r[0]); // 800C8EE0
  c->r[6]=R8(c->r[4]+0x0000009Eu); // 800C8EE4
  c->r[0]=R8(c->r[5]+0x0000009Eu); // 800C8EE8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C8EEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8EF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800C8EF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800C8EF8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C8EFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800C8F00
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C8F04
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C8F08
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C8F0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C8F10
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800C8F14
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C8F18
  W8(c->r[3]+0x0000009Eu,c->r[0]); // 800C8F1C
  c->r[4]=R8(c->r[4]+0x0000009Fu); // 800C8F20
  c->r[0]=R8(c->r[5]+0x0000009Fu); // 800C8F24
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C8F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8F2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800C8F30
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800C8F34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C8F38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800C8F3C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C8F40
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C8F44
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C8F48
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C8F4C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800C8F50
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C8F54
  W8(c->r[3]+0x0000009Fu,c->r[0]); // 800C8F58
  c->r[1]=c->r[1]+0x00000040u; // 800C8F5C
  return; // 800C8F60
}

// fn_800C8F64
void f_800C8F64(Ctx* __restrict c) {
  trace_call(0x800C8F64u);
  c->r[3]=0u+0x000000A0u; // 800C8F64
  return; // 800C8F68
}

// fn_800C8F6C
void f_800C8F6C(Ctx* __restrict c) {
  trace_call(0x800C8F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8F6C
  c->r[0]=c->lr; // 800C8F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8F74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C8F78
  c->r[31]=c->r[3]|c->r[3]; // 800C8F7C
  c->lr=0x800C8F84u; f_800C8C04(c); // 800C8F80
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C8F84
  c->r[3]=0u+0x80420000u; // 800C8F88
  c->r[3]=c->r[3]+0xFFFF9C98u; // 800C8F8C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C8F90
  c->r[0]=c->r[0]|0x80000000u; // 800C8F94
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C8F98
  c->r[3]=c->r[31]|c->r[31]; // 800C8F9C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C8FA0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C8FA4
  c->ctr=c->r[12]; // 800C8FA8
  if (true) { c->lr=0x800C8FB0u; dispatch(c,c->ctr); } // 800C8FAC
  c->r[3]=c->r[31]|c->r[31]; // 800C8FB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C8FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8FB8
  c->lr=c->r[0]; // 800C8FBC
  c->r[1]=c->r[1]+0x00000010u; // 800C8FC0
  return; // 800C8FC4
}

// fn_800C8FC8
void f_800C8FC8(Ctx* __restrict c) {
  trace_call(0x800C8FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8FC8
  c->r[0]=c->lr; // 800C8FCC
  cmps(c,0,(int32_t)c->r[3],0); // 800C8FD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8FD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8FD8
  c->r[30]=c->r[3]|c->r[3]; // 800C8FDC
  c->r[31]=c->r[4]|c->r[4]; // 800C8FE0
  if (crb(c,2)) { goto L_800C9000; } // 800C8FE4
  c->r[4]=0u+0x00000000u; // 800C8FE8
  c->lr=0x800C8FF0u; f_802B1180(c); // 800C8FEC
  cmps(c,0,(int32_t)c->r[31],0); // 800C8FF0
  if (!crb(c,1)) { goto L_800C9000; } // 800C8FF4
  c->r[3]=c->r[30]|c->r[30]; // 800C8FF8
  c->lr=0x800C9000u; f_80244DC0(c); // 800C8FFC
L_800C9000:;
  c->r[3]=c->r[30]|c->r[30]; // 800C9000
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9004
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9008
  c->lr=c->r[0]; // 800C900C
  c->r[1]=c->r[1]+0x00000010u; // 800C9010
  return; // 800C9014
}

// fn_800C9018
void f_800C9018(Ctx* __restrict c) {
  trace_call(0x800C9018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9018
  c->r[0]=c->lr; // 800C901C
  c->r[3]=0u+0x000000A0u; // 800C9020
  c->r[4]=c->r[13]+0xFFFFB057u; // 800C9024
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9028
  c->r[5]=0u+0x00000000u; // 800C902C
  c->r[6]=0u+0x00001001u; // 800C9030
  c->lr=0x800C9038u; f_80244D20(c); // 800C9034
  cmps(c,0,(int32_t)c->r[3],0); // 800C9038
  if (crb(c,2)) { goto L_800C9044; } // 800C903C
  c->lr=0x800C9044u; f_800C8F6C(c); // 800C9040
L_800C9044:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9044
  c->lr=c->r[0]; // 800C9048
  c->r[1]=c->r[1]+0x00000010u; // 800C904C
  return; // 800C9050
}

// fn_800C9054
void f_800C9054(Ctx* __restrict c) {
  trace_call(0x800C9054u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9054
  c->r[0]=c->lr; // 800C9058
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C905C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9060
  c->r[31]=c->r[3]|c->r[3]; // 800C9064
  c->lr=0x800C906Cu; f_80244520(c); // 800C9068
  c->r[7]=c->r[3]|c->r[3]; // 800C906C
  c->r[9]=c->r[31]|c->r[31]; // 800C9070
  c->r[3]=0u+0x000000A0u; // 800C9074
  c->r[4]=c->r[13]+0xFFFFB05Cu; // 800C9078
  c->r[5]=0u+0x00000000u; // 800C907C
  c->r[6]=0u+0x00002001u; // 800C9080
  c->r[8]=0u+0x00000000u; // 800C9084
  c->lr=0x800C908Cu; f_80242DF0(c); // 800C9088
  c->r[4]=c->r[3]|c->r[3]; // 800C908C
  c->r[3]=0u+0x000000A0u; // 800C9090
  c->r[5]=c->r[13]+0xFFFFB061u; // 800C9094
  c->r[6]=0u+0x00000000u; // 800C9098
  c->r[7]=0u+0x00001001u; // 800C909C
  c->lr=0x800C90A4u; f_80244DB0(c); // 800C90A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C90A4
  if (crb(c,2)) { goto L_800C90B0; } // 800C90A8
  c->lr=0x800C90B0u; f_800C8F6C(c); // 800C90AC
L_800C90B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C90B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C90B4
  c->lr=c->r[0]; // 800C90B8
  c->r[1]=c->r[1]+0x00000010u; // 800C90BC
  return; // 800C90C0
}

// fn_800C90C4
void f_800C90C4(Ctx* __restrict c) {
  trace_call(0x800C90C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C90C4
  c->r[0]=c->lr; // 800C90C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C90CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C90D0
  c->r[31]=c->r[3]|c->r[3]; // 800C90D4
  c->lr=0x800C90DCu; f_802B1168(c); // 800C90D8
  c->r[8]=0u+0x80420000u; // 800C90DC
  c->r[7]=0u+0x80410000u; // 800C90E0
  c->r[5]=0u+0xAB450000u; // 800C90E4
  c->r[4]=0u+0x152B0000u; // 800C90E8
  c->r[3]=0u+0x420C0000u; // 800C90EC
  c->r[8]=c->r[8]+0xFFFF9C5Cu; // 800C90F0
  c->r[0]=c->r[3]+0xFFFFE15Du; // 800C90F4
  c->r[7]=c->r[7]+0xFFFFCED5u; // 800C90F8
  c->r[5]=c->r[5]+0x0000007Bu; // 800C90FC
  c->r[4]=c->r[4]+0x00002902u; // 800C9100
  c->r[6]=0u+0x00000000u; // 800C9104
  W32(c->r[31]+0x00000018u,c->r[8]); // 800C9108
  c->r[3]=c->r[31]|c->r[31]; // 800C910C
  W32(c->r[31]+0x00000000u,c->r[7]); // 800C9110
  W32(c->r[31]+0x00000008u,c->r[6]); // 800C9114
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800C9118
  W32(c->r[31]+0x00000010u,c->r[4]); // 800C911C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C9120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9124
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9128
  c->lr=c->r[0]; // 800C912C
  c->r[1]=c->r[1]+0x00000010u; // 800C9130
  return; // 800C9134
}

// fn_800C9138
void f_800C9138(Ctx* __restrict c) {
  trace_call(0x800C9138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9138
  c->r[0]=c->lr; // 800C913C
  cmps(c,0,(int32_t)c->r[4],0); // 800C9140
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9144
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9148
  c->r[30]=c->r[3]|c->r[3]; // 800C914C
  c->r[31]=c->r[4]|c->r[4]; // 800C9150
  if (crb(c,2)) { goto L_800C91A8; } // 800C9154
  c->r[3]=c->r[31]|c->r[31]; // 800C9158
  c->lr=0x800C9160u; f_80244520(c); // 800C915C
  c->r[7]=c->r[3]|c->r[3]; // 800C9160
  c->r[9]=c->r[31]|c->r[31]; // 800C9164
  c->r[3]=0u+0x00000028u; // 800C9168
  c->r[4]=c->r[13]+0xFFFFB066u; // 800C916C
  c->r[5]=0u+0x00000000u; // 800C9170
  c->r[6]=0u+0x00002001u; // 800C9174
  c->r[8]=0u+0x00000000u; // 800C9178
  c->lr=0x800C9180u; f_80242DF0(c); // 800C917C
  c->r[4]=c->r[3]|c->r[3]; // 800C9180
  c->r[3]=0u+0x00000028u; // 800C9184
  c->r[5]=c->r[13]+0xFFFFB06Bu; // 800C9188
  c->r[6]=0u+0x00000000u; // 800C918C
  c->r[7]=0u+0x00001001u; // 800C9190
  c->lr=0x800C9198u; f_80244DB0(c); // 800C9194
  cmps(c,0,(int32_t)c->r[3],0); // 800C9198
  if (crb(c,2)) { goto L_800C91C8; } // 800C919C
  c->lr=0x800C91A4u; f_800C90C4(c); // 800C91A0
  goto L_800C91C8; // 800C91A4
L_800C91A8:;
  c->r[3]=0u+0x00000028u; // 800C91A8
  c->r[4]=c->r[13]+0xFFFFB070u; // 800C91AC
  c->r[5]=0u+0x00000000u; // 800C91B0
  c->r[6]=0u+0x00001001u; // 800C91B4
  c->lr=0x800C91BCu; f_80244D20(c); // 800C91B8
  cmps(c,0,(int32_t)c->r[3],0); // 800C91BC
  if (crb(c,2)) { goto L_800C91C8; } // 800C91C0
  c->lr=0x800C91C8u; f_800C90C4(c); // 800C91C4
L_800C91C8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C91C8
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C91CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C91D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C91D4
  c->lr=c->r[0]; // 800C91D8
  c->r[1]=c->r[1]+0x00000010u; // 800C91DC
  return; // 800C91E0
}

// fn_800C91E4
void f_800C91E4(Ctx* __restrict c) {
  trace_call(0x800C91E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C91E4
  c->r[0]=c->lr; // 800C91E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C91EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C91F0
  c->r[31]=c->r[4]|c->r[4]; // 800C91F4
  c->r[30]=c->r[3]|c->r[3]; // 800C91F8
  c->r[3]=c->r[31]|c->r[31]; // 800C91FC
  c->lr=0x800C9204u; f_8030C0A0(c); // 800C9200
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800C9204
  c->r[3]=c->r[31]|c->r[31]; // 800C9208
  c->lr=0x800C9210u; f_8030BD1C(c); // 800C920C
  c->r[4]=c->r[3]|c->r[3]; // 800C9210
  c->r[3]=c->r[31]|c->r[31]; // 800C9214
  c->lr=0x800C921Cu; f_8030C2D8(c); // 800C9218
  W32(c->r[30]+0x00000020u,c->r[3]); // 800C921C
  c->r[3]=c->r[31]|c->r[31]; // 800C9220
  c->r[4]=0u+0x00000000u; // 800C9224
  c->lr=0x800C922Cu; f_8030BE30(c); // 800C9228
  W32(c->r[30]+0x00000024u,c->r[3]); // 800C922C
  c->r[3]=0u+0x00000000u; // 800C9230
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9234
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9238
  c->lr=c->r[0]; // 800C923C
  c->r[1]=c->r[1]+0x00000010u; // 800C9240
  return; // 800C9244
}

// fn_800C9248
void f_800C9248(Ctx* __restrict c) {
  trace_call(0x800C9248u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9248
  c->r[0]=c->lr; // 800C924C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9250
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9254
  c->r[31]=c->r[3]|c->r[3]; // 800C9258
  c->r[0]=R32(c->r[3]+0x00000020u); // 800C925C
  cmps(c,0,(int32_t)c->r[0],0); // 800C9260
  if (crb(c,2)) { goto L_800C9278; } // 800C9264
  c->r[3]=c->r[0]|c->r[0]; // 800C9268
  c->lr=0x800C9270u; f_800416A8(c); // 800C926C
  c->r[0]=0u+0x00000000u; // 800C9270
  W32(c->r[31]+0x00000020u,c->r[0]); // 800C9274
L_800C9278:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C927C
  c->lr=c->r[0]; // 800C9280
  c->r[1]=c->r[1]+0x00000010u; // 800C9284
  return; // 800C9288
}

// fn_800C928C
void f_800C928C(Ctx* __restrict c) {
  trace_call(0x800C928Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 800C928C
  if (!crb(c,2)) return; // 800C9290
  c->r[3]=R32(c->r[3]+0x00000020u); // 800C9294
  cmps(c,0,(int32_t)c->r[3],0); // 800C9298
  if (crb(c,2)) return; // 800C929C
  f_8030D100(c); return; // 800C92A0
  return; // 800C92A4
}

// fn_800C92A8
void f_800C92A8(Ctx* __restrict c) {
  trace_call(0x800C92A8u);
  {uint32_t ea=c->r[2]+0xFFFF87E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C92A8
  c->r[4]=0u+0x00000000u; // 800C92AC
  c->r[0]=0u+0x000001F4u; // 800C92B0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C92B4
  W32(c->r[3]+0x00000020u,c->r[4]); // 800C92B8
  W32(c->r[3]+0x00000024u,c->r[0]); // 800C92BC
  return; // 800C92C0
}

// fn_800C92C4
void f_800C92C4(Ctx* __restrict c) {
  trace_call(0x800C92C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C92C4
  c->r[0]=c->lr; // 800C92C8
  cmps(c,0,(int32_t)c->r[5],0); // 800C92CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C92D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C92D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C92D8
  c->r[30]=c->r[4]|c->r[4]; // 800C92DC
  if (crb(c,2)) { goto L_800C92EC; } // 800C92E0
  c->r[31]=c->r[5]|c->r[5]; // 800C92E4
  goto L_800C92F0; // 800C92E8
L_800C92EC:;
  c->r[31]=c->r[3]|c->r[3]; // 800C92EC
L_800C92F0:;
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C92F0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C92F4
  c->r[3]=R32(c->r[4]+0x00000020u); // 800C92F8
  c->r[4]=c->r[6]|c->r[6]; // 800C92FC
  c->lr=0x800C9304u; f_8030D5B4(c); // 800C9300
  W32(c->r[31]+0x00000020u,c->r[3]); // 800C9304
  c->r[0]=R32(c->r[30]+0x00000024u); // 800C9308
  W32(c->r[31]+0x00000024u,c->r[0]); // 800C930C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9310
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C9314
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9318
  c->lr=c->r[0]; // 800C931C
  c->r[1]=c->r[1]+0x00000010u; // 800C9320
  return; // 800C9324
}

// fn_800C9328
void f_800C9328(Ctx* __restrict c) {
  trace_call(0x800C9328u);
  c->r[3]=0u+0x00000000u; // 800C9328
  return; // 800C932C
}

// fn_800C9330
void f_800C9330(Ctx* __restrict c) {
  trace_call(0x800C9330u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9330
  c->r[0]=c->lr; // 800C9334
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9338
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C933C
  c->r[0]=0u+0x43300000u; // 800C9340
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 800C9344
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[3]=RF64(ea);} // 800C9348
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C934C
  c->r[31]=c->r[3]|c->r[3]; // 800C9350
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9354
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C9358
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C935C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C9360
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C9364
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C9368
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800C936C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C9370
  c->r[3]=R32(c->r[4]+0x00000024u); // 800C9374
  c->r[0]=R32(c->r[5]+0x00000024u); // 800C9378
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C937C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9380
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800C9384
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800C9388
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C938C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800C9390
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800C9394
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C9398
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 800C939C
  c->lr=0x800C93A4u; f_803ADC14(c); // 800C93A0
  W32(c->r[31]+0x00000024u,c->r[3]); // 800C93A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C93A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C93AC
  c->lr=c->r[0]; // 800C93B0
  c->r[1]=c->r[1]+0x00000020u; // 800C93B4
  return; // 800C93B8
}

// fn_800C93BC
void f_800C93BC(Ctx* __restrict c) {
  trace_call(0x800C93BCu);
  c->r[3]=0u+0x00000028u; // 800C93BC
  return; // 800C93C0
}

// fn_800C93C4
void f_800C93C4(Ctx* __restrict c) {
  trace_call(0x800C93C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C93C4
  c->r[0]=c->lr; // 800C93C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C93CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C93D0
  c->r[31]=c->r[3]|c->r[3]; // 800C93D4
  c->lr=0x800C93DCu; f_800C90C4(c); // 800C93D8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C93DC
  c->r[3]=0u+0x80420000u; // 800C93E0
  c->r[3]=c->r[3]+0xFFFF9C1Cu; // 800C93E4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C93E8
  c->r[0]=c->r[0]|0x80000000u; // 800C93EC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C93F0
  c->r[3]=c->r[31]|c->r[31]; // 800C93F4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C93F8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C93FC
  c->ctr=c->r[12]; // 800C9400
  if (true) { c->lr=0x800C9408u; dispatch(c,c->ctr); } // 800C9404
  c->r[3]=c->r[31]|c->r[31]; // 800C9408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C940C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9410
  c->lr=c->r[0]; // 800C9414
  c->r[1]=c->r[1]+0x00000010u; // 800C9418
  return; // 800C941C
}

// fn_800C9420
void f_800C9420(Ctx* __restrict c) {
  trace_call(0x800C9420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9420
  c->r[0]=c->lr; // 800C9424
  cmps(c,0,(int32_t)c->r[3],0); // 800C9428
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C942C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9430
  c->r[30]=c->r[3]|c->r[3]; // 800C9434
  c->r[31]=c->r[4]|c->r[4]; // 800C9438
  if (crb(c,2)) { goto L_800C9458; } // 800C943C
  c->r[4]=0u+0x00000000u; // 800C9440
  c->lr=0x800C9448u; f_802B1180(c); // 800C9444
  cmps(c,0,(int32_t)c->r[31],0); // 800C9448
  if (!crb(c,1)) { goto L_800C9458; } // 800C944C
  c->r[3]=c->r[30]|c->r[30]; // 800C9450
  c->lr=0x800C9458u; f_80244DC0(c); // 800C9454
L_800C9458:;
  c->r[3]=c->r[30]|c->r[30]; // 800C9458
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C945C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9460
  c->lr=c->r[0]; // 800C9464
  c->r[1]=c->r[1]+0x00000010u; // 800C9468
  return; // 800C946C
}

// fn_800C9470
void f_800C9470(Ctx* __restrict c) {
  trace_call(0x800C9470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9470
  c->r[0]=c->lr; // 800C9474
  c->r[3]=0u+0x00000028u; // 800C9478
  c->r[4]=c->r[13]+0xFFFFB075u; // 800C947C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9480
  c->r[5]=0u+0x00000000u; // 800C9484
  c->r[6]=0u+0x00001001u; // 800C9488
  c->lr=0x800C9490u; f_80244D20(c); // 800C948C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9490
  if (crb(c,2)) { goto L_800C949C; } // 800C9494
  c->lr=0x800C949Cu; f_800C93C4(c); // 800C9498
L_800C949C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C949C
  c->lr=c->r[0]; // 800C94A0
  c->r[1]=c->r[1]+0x00000010u; // 800C94A4
  return; // 800C94A8
}

// fn_800C94AC
void f_800C94AC(Ctx* __restrict c) {
  trace_call(0x800C94ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C94AC
  c->r[0]=c->lr; // 800C94B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C94B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C94B8
  c->r[31]=c->r[3]|c->r[3]; // 800C94BC
  c->lr=0x800C94C4u; f_80244520(c); // 800C94C0
  c->r[7]=c->r[3]|c->r[3]; // 800C94C4
  c->r[9]=c->r[31]|c->r[31]; // 800C94C8
  c->r[3]=0u+0x00000028u; // 800C94CC
  c->r[4]=c->r[13]+0xFFFFB07Au; // 800C94D0
  c->r[5]=0u+0x00000000u; // 800C94D4
  c->r[6]=0u+0x00002001u; // 800C94D8
  c->r[8]=0u+0x00000000u; // 800C94DC
  c->lr=0x800C94E4u; f_80242DF0(c); // 800C94E0
  c->r[4]=c->r[3]|c->r[3]; // 800C94E4
  c->r[3]=0u+0x00000028u; // 800C94E8
  c->r[5]=c->r[13]+0xFFFFB07Fu; // 800C94EC
  c->r[6]=0u+0x00000000u; // 800C94F0
  c->r[7]=0u+0x00001001u; // 800C94F4
  c->lr=0x800C94FCu; f_80244DB0(c); // 800C94F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C94FC
  if (crb(c,2)) { goto L_800C9508; } // 800C9500
  c->lr=0x800C9508u; f_800C93C4(c); // 800C9504
L_800C9508:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9508
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C950C
  c->lr=c->r[0]; // 800C9510
  c->r[1]=c->r[1]+0x00000010u; // 800C9514
  return; // 800C9518
}

// fn_800C951C
void f_800C951C(Ctx* __restrict c) {
  trace_call(0x800C951Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C951C
  c->r[0]=c->lr; // 800C9520
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9528
  c->r[31]=c->r[3]|c->r[3]; // 800C952C
  c->lr=0x800C9534u; f_802B1168(c); // 800C9530
  c->r[8]=0u+0x80420000u; // 800C9534
  c->r[6]=0u+0x80410000u; // 800C9538
  c->r[7]=0u+0x00000000u; // 800C953C
  c->r[5]=0u+0x40E10000u; // 800C9540
  c->r[4]=0u+0x2CDE0000u; // 800C9544
  c->r[3]=0u+0x2B130000u; // 800C9548
  c->r[0]=c->r[3]+0xFFFFE260u; // 800C954C
  c->r[8]=c->r[8]+0xFFFF9BE0u; // 800C9550
  c->r[6]=c->r[6]+0xFFFFCEEFu; // 800C9554
  c->r[5]=c->r[5]+0x000044C5u; // 800C9558
  c->r[4]=c->r[4]+0xFFFFBBDFu; // 800C955C
  W32(c->r[31]+0x00000018u,c->r[8]); // 800C9560
  c->r[3]=c->r[31]|c->r[31]; // 800C9564
  W32(c->r[31]+0x0000004Cu,c->r[7]); // 800C9568
  W32(c->r[31]+0x00000000u,c->r[6]); // 800C956C
  W32(c->r[31]+0x00000008u,c->r[7]); // 800C9570
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800C9574
  W32(c->r[31]+0x00000010u,c->r[4]); // 800C9578
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C957C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9580
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9584
  c->lr=c->r[0]; // 800C9588
  c->r[1]=c->r[1]+0x00000010u; // 800C958C
  return; // 800C9590
}

// fn_800C9594
void f_800C9594(Ctx* __restrict c) {
  trace_call(0x800C9594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9594
  c->r[0]=c->lr; // 800C9598
  cmps(c,0,(int32_t)c->r[4],0); // 800C959C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C95A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C95A4
  c->r[30]=c->r[3]|c->r[3]; // 800C95A8
  c->r[31]=c->r[4]|c->r[4]; // 800C95AC
  if (crb(c,2)) { goto L_800C9604; } // 800C95B0
  c->r[3]=c->r[31]|c->r[31]; // 800C95B4
  c->lr=0x800C95BCu; f_80244520(c); // 800C95B8
  c->r[7]=c->r[3]|c->r[3]; // 800C95BC
  c->r[9]=c->r[31]|c->r[31]; // 800C95C0
  c->r[3]=0u+0x00000050u; // 800C95C4
  c->r[4]=c->r[13]+0xFFFFB084u; // 800C95C8
  c->r[5]=0u+0x00000000u; // 800C95CC
  c->r[6]=0u+0x00002001u; // 800C95D0
  c->r[8]=0u+0x00000000u; // 800C95D4
  c->lr=0x800C95DCu; f_80242DF0(c); // 800C95D8
  c->r[4]=c->r[3]|c->r[3]; // 800C95DC
  c->r[3]=0u+0x00000050u; // 800C95E0
  c->r[5]=c->r[13]+0xFFFFB089u; // 800C95E4
  c->r[6]=0u+0x00000000u; // 800C95E8
  c->r[7]=0u+0x00001001u; // 800C95EC
  c->lr=0x800C95F4u; f_80244DB0(c); // 800C95F0
  cmps(c,0,(int32_t)c->r[3],0); // 800C95F4
  if (crb(c,2)) { goto L_800C9624; } // 800C95F8
  c->lr=0x800C9600u; f_800C951C(c); // 800C95FC
  goto L_800C9624; // 800C9600
L_800C9604:;
  c->r[3]=0u+0x00000050u; // 800C9604
  c->r[4]=c->r[13]+0xFFFFB08Eu; // 800C9608
  c->r[5]=0u+0x00000000u; // 800C960C
  c->r[6]=0u+0x00001001u; // 800C9610
  c->lr=0x800C9618u; f_80244D20(c); // 800C9614
  cmps(c,0,(int32_t)c->r[3],0); // 800C9618
  if (crb(c,2)) { goto L_800C9624; } // 800C961C
  c->lr=0x800C9624u; f_800C951C(c); // 800C9620
L_800C9624:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C9624
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C9628
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C962C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9630
  c->lr=c->r[0]; // 800C9634
  c->r[1]=c->r[1]+0x00000010u; // 800C9638
  return; // 800C963C
}

// fn_800C9640
void f_800C9640(Ctx* __restrict c) {
  trace_call(0x800C9640u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9640
  c->r[0]=c->lr; // 800C9644
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9648
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C964C
  c->r[31]=c->r[4]|c->r[4]; // 800C9650
  c->r[30]=c->r[3]|c->r[3]; // 800C9654
  c->r[4]=0u+0x00000000u; // 800C9658
  c->r[3]=c->r[31]|c->r[31]; // 800C965C
  c->lr=0x800C9664u; f_8030BE30(c); // 800C9660
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800C9664
  c->r[0]=0u+0x00000000u; // 800C9668
  c->r[3]=c->r[31]|c->r[31]; // 800C966C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800C9670
  c->lr=0x800C9678u; f_8030BD1C(c); // 800C9674
  W32(c->r[30]+0x00000024u,c->r[3]); // 800C9678
  c->r[3]=c->r[31]|c->r[31]; // 800C967C
  c->r[4]=c->r[30]+0x00000028u; // 800C9680
  c->r[5]=0u+0x00000000u; // 800C9684
  c->lr=0x800C968Cu; f_8030B7F0(c); // 800C9688
  c->r[3]=c->r[31]|c->r[31]; // 800C968C
  c->lr=0x800C9694u; f_8030BD1C(c); // 800C9690
  W8(c->r[30]+0x00000048u,c->r[3]); // 800C9694
  c->r[3]=0u+0x00000000u; // 800C9698
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C969C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C96A0
  c->lr=c->r[0]; // 800C96A4
  c->r[1]=c->r[1]+0x00000010u; // 800C96A8
  return; // 800C96AC
}

// fn_800C96B0
void f_800C96B0(Ctx* __restrict c) {
  trace_call(0x800C96B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C96B0
  c->r[0]=c->lr; // 800C96B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C96B8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C96BC
  c->r[27]=c->r[3]|c->r[3]; // 800C96C0
  c->r[28]=c->r[4]|c->r[4]; // 800C96C4
  c->r[29]=c->r[5]|c->r[5]; // 800C96C8
  c->r[30]=c->r[6]|c->r[6]; // 800C96CC
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 800C96D0
  cmps(c,0,(int32_t)c->r[7],0); // 800C96D4
  if (!crb(c,0)) { goto L_800C96E8; } // 800C96D8
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800C96DC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800C96E0
  goto L_800C96F8; // 800C96E4
L_800C96E8:;
  c->r[0]=c->r[7]+0x00000001u; // 800C96E8
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800C96EC
  cmps(c,0,(int32_t)c->r[0],1); // 800C96F0
  if (crb(c,1)) { goto L_800C97B4; } // 800C96F4
L_800C96F8:;
  c->r[3]=c->r[27]|c->r[27]; // 800C96F8
  c->r[4]=c->r[28]|c->r[28]; // 800C96FC
  c->r[5]=c->r[29]|c->r[29]; // 800C9700
  c->r[6]=c->r[30]|c->r[30]; // 800C9704
  c->lr=0x800C970Cu; f_802B11C0(c); // 800C9708
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 800C970C
  cmps(c,0,(int32_t)c->r[4],0); // 800C9710
  if (crb(c,2)) { goto L_800C97B4; } // 800C9714
  c->r[0]=0u+0x00000000u; // 800C9718
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C971C
  c->r[6]=c->r[28]|c->r[28]; // 800C9720
  c->r[7]=c->r[29]|c->r[29]; // 800C9724
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800C9728
  c->r[8]=c->r[30]|c->r[30]; // 800C972C
  c->r[9]=R32(c->r[27]+0x00000024u); // 800C9730
  c->r[5]=0u+0x00000016u; // 800C9734
  c->r[10]=0u+0x00000001u; // 800C9738
  c->lr=0x800C9740u; f_80281A84(c); // 800C973C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9740
  W32(c->r[27]+0x00000020u,c->r[3]); // 800C9744
  if (crb(c,2)) { goto L_800C9754; } // 800C9748
  c->lr=0x800C9750u; f_80295B6C(c); // 800C974C
  goto L_800C97B4; // 800C9750
L_800C9754:;
  c->r[3]=R32(c->r[27]+0x00000024u); // 800C9754
  c->r[4]=c->r[30]|c->r[30]; // 800C9758
  c->r[5]=c->r[29]|c->r[29]; // 800C975C
  c->lr=0x800C9764u; f_802C0F98(c); // 800C9760
  c->r[31]=c->r[3]|c->r[3]; // 800C9764
  c->r[3]=0u+0x00000048u; // 800C9768
  c->r[4]=c->r[13]+0xFFFFB093u; // 800C976C
  c->r[5]=0u+0x00000000u; // 800C9770
  c->r[6]=0u+0x00001001u; // 800C9774
  c->lr=0x800C977Cu; f_80244D20(c); // 800C9778
  cmps(c,0,(int32_t)c->r[3],0); // 800C977C
  if (crb(c,2)) { goto L_800C9790; } // 800C9780
  c->r[5]=R32(c->r[27]+0x0000001Cu); // 800C9784
  c->r[4]=c->r[31]|c->r[31]; // 800C9788
  c->lr=0x800C9790u; f_80292840(c); // 800C978C
L_800C9790:;
  W32(c->r[27]+0x00000020u,c->r[3]); // 800C9790
  c->r[4]=c->r[28]|c->r[28]; // 800C9794
  c->r[7]=R32(c->r[27]+0x00000024u); // 800C9798
  c->r[5]=c->r[29]|c->r[29]; // 800C979C
  c->r[6]=c->r[30]|c->r[30]; // 800C97A0
  c->r[8]=0u+0x00000001u; // 800C97A4
  c->r[9]=0u+0x00000000u; // 800C97A8
  c->lr=0x800C97B0u; f_8027FFF4(c); // 800C97AC
  W32(c->r[27]+0x00000020u,c->r[3]); // 800C97B0
L_800C97B4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C97B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C97B8
  c->lr=c->r[0]; // 800C97BC
  c->r[1]=c->r[1]+0x00000030u; // 800C97C0
  return; // 800C97C4
}

// fn_800C97C8
void f_800C97C8(Ctx* __restrict c) {
  trace_call(0x800C97C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C97C8
  c->r[0]=c->lr; // 800C97CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C97D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C97D4
  c->r[31]=c->r[3]|c->r[3]; // 800C97D8
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800C97DC
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800C97E0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800C97E4
  if (!crb(c,2)) { goto L_800C9808; } // 800C97E8
  c->lr=0x800C97F0u; f_802B11D0(c); // 800C97EC
  c->r[3]=R32(c->r[31]+0x00000020u); // 800C97F0
  cmps(c,0,(int32_t)c->r[3],0); // 800C97F4
  if (crb(c,2)) { goto L_800C9808; } // 800C97F8
  c->lr=0x800C9800u; f_80295B7C(c); // 800C97FC
  c->r[0]=0u+0x00000000u; // 800C9800
  W32(c->r[31]+0x00000020u,c->r[0]); // 800C9804
L_800C9808:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9808
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C980C
  c->lr=c->r[0]; // 800C9810
  c->r[1]=c->r[1]+0x00000010u; // 800C9814
  return; // 800C9818
}

// fn_800C981C
void f_800C981C(Ctx* __restrict c) {
  trace_call(0x800C981Cu);
  return; // 800C981C
}

// fn_800C9820
void f_800C9820(Ctx* __restrict c) {
  trace_call(0x800C9820u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9820
  c->r[0]=c->lr; // 800C9824
  c->r[4]=c->r[13]+0xFFFFB098u; // 800C9828
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C982C
  c->r[0]=0u+0x00000004u; // 800C9830
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9834
  c->r[31]=0u+0x00000000u; // 800C9838
  c->r[30]=c->r[3]|c->r[3]; // 800C983C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800C9840
  W32(c->r[3]+0x00000020u,c->r[31]); // 800C9844
  W32(c->r[3]+0x00000024u,c->r[0]); // 800C9848
  c->r[3]=c->r[3]+0x00000028u; // 800C984C
  c->lr=0x800C9854u; f_803A6F10(c); // 800C9850
  W8(c->r[30]+0x00000048u,c->r[31]); // 800C9854
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9858
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C985C
  c->lr=c->r[0]; // 800C9860
  c->r[1]=c->r[1]+0x00000010u; // 800C9864
  return; // 800C9868
}

// fn_800C986C
void f_800C986C(Ctx* __restrict c) {
  trace_call(0x800C986Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C986C
  c->r[0]=c->lr; // 800C9870
  cmps(c,0,(int32_t)c->r[5],0); // 800C9874
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C9878
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C987C
  c->r[28]=c->r[3]|c->r[3]; // 800C9880
  c->r[29]=c->r[4]|c->r[4]; // 800C9884
  c->r[30]=c->r[7]|c->r[7]; // 800C9888
  if (crb(c,2)) { goto L_800C9898; } // 800C988C
  c->r[31]=c->r[5]|c->r[5]; // 800C9890
  goto L_800C989C; // 800C9894
L_800C9898:;
  c->r[31]=c->r[28]|c->r[28]; // 800C9898
L_800C989C:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800C989C
  c->r[4]=c->r[4]+0x0000001Cu; // 800C98A0
  c->lr=0x800C98A8u; f_8003BDD0(c); // 800C98A4
  c->r[3]=c->r[31]+0x00000028u; // 800C98A8
  c->r[4]=c->r[29]+0x00000028u; // 800C98AC
  c->lr=0x800C98B4u; f_803A6F10(c); // 800C98B0
  c->r[0]=R8(c->r[29]+0x00000048u); // 800C98B4
  cmps(c,0,(int32_t)c->r[30],0); // 800C98B8
  W8(c->r[31]+0x00000048u,c->r[0]); // 800C98BC
  if (crb(c,2)) { goto L_800C98E4; } // 800C98C0
  c->r[3]=R32(c->r[28]+0x0000004Cu); // 800C98C4
  cmps(c,0,(int32_t)c->r[3],0); // 800C98C8
  if (crb(c,1)) { goto L_800C98DC; } // 800C98CC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C98D0
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 800C98D4
  goto L_800C98E4; // 800C98D8
L_800C98DC:;
  c->r[0]=c->r[3]+0x00000001u; // 800C98DC
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 800C98E0
L_800C98E4:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C98E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C98E8
  c->lr=c->r[0]; // 800C98EC
  c->r[1]=c->r[1]+0x00000020u; // 800C98F0
  return; // 800C98F4
}

// fn_800C98F8
void f_800C98F8(Ctx* __restrict c) {
  trace_call(0x800C98F8u);
  c->r[3]=0u+0x00000000u; // 800C98F8
  return; // 800C98FC
}

// fn_800C9900
void f_800C9900(Ctx* __restrict c) {
  trace_call(0x800C9900u);
  c->r[3]=0u+0x00000050u; // 800C9900
  return; // 800C9904
}

// fn_800C9908
void f_800C9908(Ctx* __restrict c) {
  trace_call(0x800C9908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9908
  c->r[0]=c->lr; // 800C990C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9914
  c->r[31]=c->r[3]|c->r[3]; // 800C9918
  c->lr=0x800C9920u; f_800C951C(c); // 800C991C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C9920
  c->r[3]=0u+0x80420000u; // 800C9924
  c->r[3]=c->r[3]+0xFFFF9BA0u; // 800C9928
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C992C
  c->r[0]=c->r[0]|0x80000000u; // 800C9930
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C9934
  c->r[3]=c->r[31]|c->r[31]; // 800C9938
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C993C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C9940
  c->ctr=c->r[12]; // 800C9944
  if (true) { c->lr=0x800C994Cu; dispatch(c,c->ctr); } // 800C9948
  c->r[3]=c->r[31]|c->r[31]; // 800C994C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9950
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9954
  c->lr=c->r[0]; // 800C9958
  c->r[1]=c->r[1]+0x00000010u; // 800C995C
  return; // 800C9960
}

// fn_800C9964
void f_800C9964(Ctx* __restrict c) {
  trace_call(0x800C9964u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9964
  c->r[0]=c->lr; // 800C9968
  cmps(c,0,(int32_t)c->r[3],0); // 800C996C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9970
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9974
  c->r[30]=c->r[3]|c->r[3]; // 800C9978
  c->r[31]=c->r[4]|c->r[4]; // 800C997C
  if (crb(c,2)) { goto L_800C999C; } // 800C9980
  c->r[4]=0u+0x00000000u; // 800C9984
  c->lr=0x800C998Cu; f_802B1180(c); // 800C9988
  cmps(c,0,(int32_t)c->r[31],0); // 800C998C
  if (!crb(c,1)) { goto L_800C999C; } // 800C9990
  c->r[3]=c->r[30]|c->r[30]; // 800C9994
  c->lr=0x800C999Cu; f_80244DC0(c); // 800C9998
L_800C999C:;
  c->r[3]=c->r[30]|c->r[30]; // 800C999C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C99A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C99A4
  c->lr=c->r[0]; // 800C99A8
  c->r[1]=c->r[1]+0x00000010u; // 800C99AC
  return; // 800C99B0
}

// fn_800C99B4
void f_800C99B4(Ctx* __restrict c) {
  trace_call(0x800C99B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C99B4
  c->r[0]=c->lr; // 800C99B8
  c->r[3]=0u+0x00000050u; // 800C99BC
  c->r[4]=c->r[13]+0xFFFFB099u; // 800C99C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C99C4
  c->r[5]=0u+0x00000000u; // 800C99C8
  c->r[6]=0u+0x00001001u; // 800C99CC
  c->lr=0x800C99D4u; f_80244D20(c); // 800C99D0
  cmps(c,0,(int32_t)c->r[3],0); // 800C99D4
  if (crb(c,2)) { goto L_800C99E0; } // 800C99D8
  c->lr=0x800C99E0u; f_800C9908(c); // 800C99DC
L_800C99E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C99E0
  c->lr=c->r[0]; // 800C99E4
  c->r[1]=c->r[1]+0x00000010u; // 800C99E8
  return; // 800C99EC
}

// fn_800C99F0
void f_800C99F0(Ctx* __restrict c) {
  trace_call(0x800C99F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C99F0
  c->r[0]=c->lr; // 800C99F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C99F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C99FC
  c->r[31]=c->r[3]|c->r[3]; // 800C9A00
  c->lr=0x800C9A08u; f_80244520(c); // 800C9A04
  c->r[7]=c->r[3]|c->r[3]; // 800C9A08
  c->r[9]=c->r[31]|c->r[31]; // 800C9A0C
  c->r[3]=0u+0x00000050u; // 800C9A10
  c->r[4]=c->r[13]+0xFFFFB09Eu; // 800C9A14
  c->r[5]=0u+0x00000000u; // 800C9A18
  c->r[6]=0u+0x00002001u; // 800C9A1C
  c->r[8]=0u+0x00000000u; // 800C9A20
  c->lr=0x800C9A28u; f_80242DF0(c); // 800C9A24
  c->r[4]=c->r[3]|c->r[3]; // 800C9A28
  c->r[3]=0u+0x00000050u; // 800C9A2C
  c->r[5]=c->r[13]+0xFFFFB0A3u; // 800C9A30
  c->r[6]=0u+0x00000000u; // 800C9A34
  c->r[7]=0u+0x00001001u; // 800C9A38
  c->lr=0x800C9A40u; f_80244DB0(c); // 800C9A3C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9A40
  if (crb(c,2)) { goto L_800C9A4C; } // 800C9A44
  c->lr=0x800C9A4Cu; f_800C9908(c); // 800C9A48
L_800C9A4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9A4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9A50
  c->lr=c->r[0]; // 800C9A54
  c->r[1]=c->r[1]+0x00000010u; // 800C9A58
  return; // 800C9A5C
}

// fn_800C9A60
void f_800C9A60(Ctx* __restrict c) {
  trace_call(0x800C9A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9A60
  c->r[0]=c->lr; // 800C9A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9A68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9A6C
  c->r[31]=c->r[3]|c->r[3]; // 800C9A70
  c->lr=0x800C9A78u; f_802B1168(c); // 800C9A74
  c->r[7]=0u+0x80420000u; // 800C9A78
  c->r[6]=0u+0x80410000u; // 800C9A7C
  c->r[5]=0u+0x00000000u; // 800C9A80
  c->r[4]=0u+0x6CF30000u; // 800C9A84
  c->r[3]=0u+0x4E200000u; // 800C9A88
  c->r[7]=c->r[7]+0xFFFF9B64u; // 800C9A8C
  c->r[0]=c->r[3]+0xFFFF962Eu; // 800C9A90
  c->r[6]=c->r[6]+0xFFFFCEFDu; // 800C9A94
  c->r[4]=c->r[4]+0xFFFFCA56u; // 800C9A98
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C9A9C
  c->r[3]=c->r[31]|c->r[31]; // 800C9AA0
  W32(c->r[31]+0x00000000u,c->r[6]); // 800C9AA4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800C9AA8
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800C9AAC
  W32(c->r[31]+0x00000010u,c->r[4]); // 800C9AB0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C9AB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9AB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9ABC
  c->lr=c->r[0]; // 800C9AC0
  c->r[1]=c->r[1]+0x00000010u; // 800C9AC4
  return; // 800C9AC8
}

// fn_800C9ACC
void f_800C9ACC(Ctx* __restrict c) {
  trace_call(0x800C9ACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9ACC
  c->r[0]=c->lr; // 800C9AD0
  cmps(c,0,(int32_t)c->r[4],0); // 800C9AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9AD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9ADC
  c->r[30]=c->r[3]|c->r[3]; // 800C9AE0
  c->r[31]=c->r[4]|c->r[4]; // 800C9AE4
  if (crb(c,2)) { goto L_800C9B3C; } // 800C9AE8
  c->r[3]=c->r[31]|c->r[31]; // 800C9AEC
  c->lr=0x800C9AF4u; f_80244520(c); // 800C9AF0
  c->r[7]=c->r[3]|c->r[3]; // 800C9AF4
  c->r[9]=c->r[31]|c->r[31]; // 800C9AF8
  c->r[3]=0u+0x0000001Cu; // 800C9AFC
  c->r[4]=c->r[13]+0xFFFFB0A8u; // 800C9B00
  c->r[5]=0u+0x00000000u; // 800C9B04
  c->r[6]=0u+0x00002001u; // 800C9B08
  c->r[8]=0u+0x00000000u; // 800C9B0C
  c->lr=0x800C9B14u; f_80242DF0(c); // 800C9B10
  c->r[4]=c->r[3]|c->r[3]; // 800C9B14
  c->r[3]=0u+0x0000001Cu; // 800C9B18
  c->r[5]=c->r[13]+0xFFFFB0ADu; // 800C9B1C
  c->r[6]=0u+0x00000000u; // 800C9B20
  c->r[7]=0u+0x00001001u; // 800C9B24
  c->lr=0x800C9B2Cu; f_80244DB0(c); // 800C9B28
  cmps(c,0,(int32_t)c->r[3],0); // 800C9B2C
  if (crb(c,2)) { goto L_800C9B5C; } // 800C9B30
  c->lr=0x800C9B38u; f_800C9A60(c); // 800C9B34
  goto L_800C9B5C; // 800C9B38
L_800C9B3C:;
  c->r[3]=0u+0x0000001Cu; // 800C9B3C
  c->r[4]=c->r[13]+0xFFFFB0B2u; // 800C9B40
  c->r[5]=0u+0x00000000u; // 800C9B44
  c->r[6]=0u+0x00001001u; // 800C9B48
  c->lr=0x800C9B50u; f_80244D20(c); // 800C9B4C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9B50
  if (crb(c,2)) { goto L_800C9B5C; } // 800C9B54
  c->lr=0x800C9B5Cu; f_800C9A60(c); // 800C9B58
L_800C9B5C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C9B5C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C9B60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9B64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9B68
  c->lr=c->r[0]; // 800C9B6C
  c->r[1]=c->r[1]+0x00000010u; // 800C9B70
  return; // 800C9B74
}

// fn_800C9B78
void f_800C9B78(Ctx* __restrict c) {
  trace_call(0x800C9B78u);
  c->r[3]=0u+0x00000000u; // 800C9B78
  return; // 800C9B7C
}

// fn_800C9B80
void f_800C9B80(Ctx* __restrict c) {
  trace_call(0x800C9B80u);
  return; // 800C9B80
}

// fn_800C9B84
void f_800C9B84(Ctx* __restrict c) {
  trace_call(0x800C9B84u);
  return; // 800C9B84
}

// fn_800C9B88
void f_800C9B88(Ctx* __restrict c) {
  trace_call(0x800C9B88u);
  c->r[3]=0u+0x00000000u; // 800C9B88
  return; // 800C9B8C
}

// fn_800C9B90
void f_800C9B90(Ctx* __restrict c) {
  trace_call(0x800C9B90u);
  c->r[3]=0u+0x0000001Cu; // 800C9B90
  return; // 800C9B94
}

// fn_800C9B98
void f_800C9B98(Ctx* __restrict c) {
  trace_call(0x800C9B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9B98
  c->r[0]=c->lr; // 800C9B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9BA4
  c->r[31]=c->r[3]|c->r[3]; // 800C9BA8
  c->lr=0x800C9BB0u; f_800C9A60(c); // 800C9BAC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C9BB0
  c->r[3]=0u+0x80420000u; // 800C9BB4
  c->r[3]=c->r[3]+0xFFFF9B24u; // 800C9BB8
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C9BBC
  c->r[0]=c->r[0]|0x80000000u; // 800C9BC0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C9BC4
  c->r[3]=c->r[31]|c->r[31]; // 800C9BC8
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C9BCC
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C9BD0
  c->ctr=c->r[12]; // 800C9BD4
  if (true) { c->lr=0x800C9BDCu; dispatch(c,c->ctr); } // 800C9BD8
  c->r[3]=c->r[31]|c->r[31]; // 800C9BDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9BE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9BE4
  c->lr=c->r[0]; // 800C9BE8
  c->r[1]=c->r[1]+0x00000010u; // 800C9BEC
  return; // 800C9BF0
}

// fn_800C9BF4
void f_800C9BF4(Ctx* __restrict c) {
  trace_call(0x800C9BF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9BF4
  c->r[0]=c->lr; // 800C9BF8
  cmps(c,0,(int32_t)c->r[3],0); // 800C9BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9C00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9C04
  c->r[30]=c->r[3]|c->r[3]; // 800C9C08
  c->r[31]=c->r[4]|c->r[4]; // 800C9C0C
  if (crb(c,2)) { goto L_800C9C2C; } // 800C9C10
  c->r[4]=0u+0x00000000u; // 800C9C14
  c->lr=0x800C9C1Cu; f_802B1180(c); // 800C9C18
  cmps(c,0,(int32_t)c->r[31],0); // 800C9C1C
  if (!crb(c,1)) { goto L_800C9C2C; } // 800C9C20
  c->r[3]=c->r[30]|c->r[30]; // 800C9C24
  c->lr=0x800C9C2Cu; f_80244DC0(c); // 800C9C28
L_800C9C2C:;
  c->r[3]=c->r[30]|c->r[30]; // 800C9C2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9C30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9C34
  c->lr=c->r[0]; // 800C9C38
  c->r[1]=c->r[1]+0x00000010u; // 800C9C3C
  return; // 800C9C40
}

// fn_800C9C44
void f_800C9C44(Ctx* __restrict c) {
  trace_call(0x800C9C44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9C44
  c->r[0]=c->lr; // 800C9C48
  c->r[3]=0u+0x0000001Cu; // 800C9C4C
  c->r[4]=c->r[13]+0xFFFFB0B7u; // 800C9C50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9C54
  c->r[5]=0u+0x00000000u; // 800C9C58
  c->r[6]=0u+0x00001001u; // 800C9C5C
  c->lr=0x800C9C64u; f_80244D20(c); // 800C9C60
  cmps(c,0,(int32_t)c->r[3],0); // 800C9C64
  if (crb(c,2)) { goto L_800C9C70; } // 800C9C68
  c->lr=0x800C9C70u; f_800C9B98(c); // 800C9C6C
L_800C9C70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9C70
  c->lr=c->r[0]; // 800C9C74
  c->r[1]=c->r[1]+0x00000010u; // 800C9C78
  return; // 800C9C7C
}

// fn_800C9C80
void f_800C9C80(Ctx* __restrict c) {
  trace_call(0x800C9C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9C80
  c->r[0]=c->lr; // 800C9C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9C8C
  c->r[31]=c->r[3]|c->r[3]; // 800C9C90
  c->lr=0x800C9C98u; f_80244520(c); // 800C9C94
  c->r[7]=c->r[3]|c->r[3]; // 800C9C98
  c->r[9]=c->r[31]|c->r[31]; // 800C9C9C
  c->r[3]=0u+0x0000001Cu; // 800C9CA0
  c->r[4]=c->r[13]+0xFFFFB0BCu; // 800C9CA4
  c->r[5]=0u+0x00000000u; // 800C9CA8
  c->r[6]=0u+0x00002001u; // 800C9CAC
  c->r[8]=0u+0x00000000u; // 800C9CB0
  c->lr=0x800C9CB8u; f_80242DF0(c); // 800C9CB4
  c->r[4]=c->r[3]|c->r[3]; // 800C9CB8
  c->r[3]=0u+0x0000001Cu; // 800C9CBC
  c->r[5]=c->r[13]+0xFFFFB0C1u; // 800C9CC0
  c->r[6]=0u+0x00000000u; // 800C9CC4
  c->r[7]=0u+0x00001001u; // 800C9CC8
  c->lr=0x800C9CD0u; f_80244DB0(c); // 800C9CCC
  cmps(c,0,(int32_t)c->r[3],0); // 800C9CD0
  if (crb(c,2)) { goto L_800C9CDC; } // 800C9CD4
  c->lr=0x800C9CDCu; f_800C9B98(c); // 800C9CD8
L_800C9CDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9CDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9CE0
  c->lr=c->r[0]; // 800C9CE4
  c->r[1]=c->r[1]+0x00000010u; // 800C9CE8
  return; // 800C9CEC
}

// fn_800C9CF0
void f_800C9CF0(Ctx* __restrict c) {
  trace_call(0x800C9CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9CF0
  c->r[0]=c->lr; // 800C9CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9CF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9CFC
  c->r[31]=c->r[3]|c->r[3]; // 800C9D00
  c->lr=0x800C9D08u; f_802B1168(c); // 800C9D04
  c->r[6]=0u+0x80420000u; // 800C9D08
  c->r[5]=0u+0x80410000u; // 800C9D0C
  c->r[4]=0u+0x00000000u; // 800C9D10
  c->r[3]=0u+0x7C9A0000u; // 800C9D14
  c->r[0]=c->r[3]+0x0000740Du; // 800C9D18
  c->r[6]=c->r[6]+0xFFFF9AE8u; // 800C9D1C
  c->r[5]=c->r[5]+0xFFFFCF08u; // 800C9D20
  W32(c->r[31]+0x00000018u,c->r[6]); // 800C9D24
  c->r[3]=c->r[31]|c->r[31]; // 800C9D28
  W32(c->r[31]+0x00000000u,c->r[5]); // 800C9D2C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800C9D30
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C9D34
  W32(c->r[31]+0x00000010u,c->r[4]); // 800C9D38
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C9D3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9D40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9D44
  c->lr=c->r[0]; // 800C9D48
  c->r[1]=c->r[1]+0x00000010u; // 800C9D4C
  return; // 800C9D50
}

// fn_800C9D54
void f_800C9D54(Ctx* __restrict c) {
  trace_call(0x800C9D54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9D54
  c->r[0]=c->lr; // 800C9D58
  cmps(c,0,(int32_t)c->r[4],0); // 800C9D5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9D60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9D64
  c->r[30]=c->r[3]|c->r[3]; // 800C9D68
  c->r[31]=c->r[4]|c->r[4]; // 800C9D6C
  if (crb(c,2)) { goto L_800C9DC4; } // 800C9D70
  c->r[3]=c->r[31]|c->r[31]; // 800C9D74
  c->lr=0x800C9D7Cu; f_80244520(c); // 800C9D78
  c->r[7]=c->r[3]|c->r[3]; // 800C9D7C
  c->r[9]=c->r[31]|c->r[31]; // 800C9D80
  c->r[3]=0u+0x0000001Cu; // 800C9D84
  c->r[4]=c->r[13]+0xFFFFB0C6u; // 800C9D88
  c->r[5]=0u+0x00000000u; // 800C9D8C
  c->r[6]=0u+0x00002001u; // 800C9D90
  c->r[8]=0u+0x00000000u; // 800C9D94
  c->lr=0x800C9D9Cu; f_80242DF0(c); // 800C9D98
  c->r[4]=c->r[3]|c->r[3]; // 800C9D9C
  c->r[3]=0u+0x0000001Cu; // 800C9DA0
  c->r[5]=c->r[13]+0xFFFFB0CBu; // 800C9DA4
  c->r[6]=0u+0x00000000u; // 800C9DA8
  c->r[7]=0u+0x00001001u; // 800C9DAC
  c->lr=0x800C9DB4u; f_80244DB0(c); // 800C9DB0
  cmps(c,0,(int32_t)c->r[3],0); // 800C9DB4
  if (crb(c,2)) { goto L_800C9DE4; } // 800C9DB8
  c->lr=0x800C9DC0u; f_800C9CF0(c); // 800C9DBC
  goto L_800C9DE4; // 800C9DC0
L_800C9DC4:;
  c->r[3]=0u+0x0000001Cu; // 800C9DC4
  c->r[4]=c->r[13]+0xFFFFB0D0u; // 800C9DC8
  c->r[5]=0u+0x00000000u; // 800C9DCC
  c->r[6]=0u+0x00001001u; // 800C9DD0
  c->lr=0x800C9DD8u; f_80244D20(c); // 800C9DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C9DD8
  if (crb(c,2)) { goto L_800C9DE4; } // 800C9DDC
  c->lr=0x800C9DE4u; f_800C9CF0(c); // 800C9DE0
L_800C9DE4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800C9DE4
  W16(c->r[3]+0x00000014u,c->r[0]); // 800C9DE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9DEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9DF0
  c->lr=c->r[0]; // 800C9DF4
  c->r[1]=c->r[1]+0x00000010u; // 800C9DF8
  return; // 800C9DFC
}

// fn_800C9E00
void f_800C9E00(Ctx* __restrict c) {
  trace_call(0x800C9E00u);
  c->r[3]=0u+0x00000000u; // 800C9E00
  return; // 800C9E04
}

// fn_800C9E08
void f_800C9E08(Ctx* __restrict c) {
  trace_call(0x800C9E08u);
  return; // 800C9E08
}

// fn_800C9E0C
void f_800C9E0C(Ctx* __restrict c) {
  trace_call(0x800C9E0Cu);
  return; // 800C9E0C
}

// fn_800C9E10
void f_800C9E10(Ctx* __restrict c) {
  trace_call(0x800C9E10u);
  c->r[3]=0u+0x00000000u; // 800C9E10
  return; // 800C9E14
}

// fn_800C9E18
void f_800C9E18(Ctx* __restrict c) {
  trace_call(0x800C9E18u);
  c->r[3]=0u+0x0000001Cu; // 800C9E18
  return; // 800C9E1C
}

// fn_800C9E20
void f_800C9E20(Ctx* __restrict c) {
  trace_call(0x800C9E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9E20
  c->r[0]=c->lr; // 800C9E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9E2C
  c->r[31]=c->r[3]|c->r[3]; // 800C9E30
  c->lr=0x800C9E38u; f_800C9CF0(c); // 800C9E34
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C9E38
  c->r[3]=0u+0x80420000u; // 800C9E3C
  c->r[3]=c->r[3]+0xFFFF9AA8u; // 800C9E40
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C9E44
  c->r[0]=c->r[0]|0x80000000u; // 800C9E48
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C9E4C
  c->r[3]=c->r[31]|c->r[31]; // 800C9E50
  c->r[12]=R32(c->r[31]+0x00000018u); // 800C9E54
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C9E58
  c->ctr=c->r[12]; // 800C9E5C
  if (true) { c->lr=0x800C9E64u; dispatch(c,c->ctr); } // 800C9E60
  c->r[3]=c->r[31]|c->r[31]; // 800C9E64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9E68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9E6C
  c->lr=c->r[0]; // 800C9E70
  c->r[1]=c->r[1]+0x00000010u; // 800C9E74
  return; // 800C9E78
}

// fn_800C9E7C
void f_800C9E7C(Ctx* __restrict c) {
  trace_call(0x800C9E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9E7C
  c->r[0]=c->lr; // 800C9E80
  cmps(c,0,(int32_t)c->r[3],0); // 800C9E84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9E88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9E8C
  c->r[30]=c->r[3]|c->r[3]; // 800C9E90
  c->r[31]=c->r[4]|c->r[4]; // 800C9E94
  if (crb(c,2)) { goto L_800C9EB4; } // 800C9E98
  c->r[4]=0u+0x00000000u; // 800C9E9C
  c->lr=0x800C9EA4u; f_802B1180(c); // 800C9EA0
  cmps(c,0,(int32_t)c->r[31],0); // 800C9EA4
  if (!crb(c,1)) { goto L_800C9EB4; } // 800C9EA8
  c->r[3]=c->r[30]|c->r[30]; // 800C9EAC
  c->lr=0x800C9EB4u; f_80244DC0(c); // 800C9EB0
L_800C9EB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800C9EB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9EB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9EBC
  c->lr=c->r[0]; // 800C9EC0
  c->r[1]=c->r[1]+0x00000010u; // 800C9EC4
  return; // 800C9EC8
}

// fn_800C9ECC
void f_800C9ECC(Ctx* __restrict c) {
  trace_call(0x800C9ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9ECC
  c->r[0]=c->lr; // 800C9ED0
  c->r[3]=0u+0x0000001Cu; // 800C9ED4
  c->r[4]=c->r[13]+0xFFFFB0D5u; // 800C9ED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9EDC
  c->r[5]=0u+0x00000000u; // 800C9EE0
  c->r[6]=0u+0x00001001u; // 800C9EE4
  c->lr=0x800C9EECu; f_80244D20(c); // 800C9EE8
  cmps(c,0,(int32_t)c->r[3],0); // 800C9EEC
  if (crb(c,2)) { goto L_800C9EF8; } // 800C9EF0
  c->lr=0x800C9EF8u; f_800C9E20(c); // 800C9EF4
L_800C9EF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9EF8
  c->lr=c->r[0]; // 800C9EFC
  c->r[1]=c->r[1]+0x00000010u; // 800C9F00
  return; // 800C9F04
}

// fn_800C9F08
void f_800C9F08(Ctx* __restrict c) {
  trace_call(0x800C9F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9F08
  c->r[0]=c->lr; // 800C9F0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9F10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9F14
  c->r[31]=c->r[3]|c->r[3]; // 800C9F18
  c->lr=0x800C9F20u; f_80244520(c); // 800C9F1C
  c->r[7]=c->r[3]|c->r[3]; // 800C9F20
  c->r[9]=c->r[31]|c->r[31]; // 800C9F24
  c->r[3]=0u+0x0000001Cu; // 800C9F28
  c->r[4]=c->r[13]+0xFFFFB0DAu; // 800C9F2C
  c->r[5]=0u+0x00000000u; // 800C9F30
  c->r[6]=0u+0x00002001u; // 800C9F34
  c->r[8]=0u+0x00000000u; // 800C9F38
  c->lr=0x800C9F40u; f_80242DF0(c); // 800C9F3C
  c->r[4]=c->r[3]|c->r[3]; // 800C9F40
  c->r[3]=0u+0x0000001Cu; // 800C9F44
  c->r[5]=c->r[13]+0xFFFFB0DFu; // 800C9F48
  c->r[6]=0u+0x00000000u; // 800C9F4C
  c->r[7]=0u+0x00001001u; // 800C9F50
  c->lr=0x800C9F58u; f_80244DB0(c); // 800C9F54
  cmps(c,0,(int32_t)c->r[3],0); // 800C9F58
  if (crb(c,2)) { goto L_800C9F64; } // 800C9F5C
  c->lr=0x800C9F64u; f_800C9E20(c); // 800C9F60
L_800C9F64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9F64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9F68
  c->lr=c->r[0]; // 800C9F6C
  c->r[1]=c->r[1]+0x00000010u; // 800C9F70
  return; // 800C9F74
}

// fn_800C9F78
void f_800C9F78(Ctx* __restrict c) {
  trace_call(0x800C9F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9F78
  c->r[0]=c->lr; // 800C9F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9F84
  c->r[31]=c->r[3]|c->r[3]; // 800C9F88
  c->lr=0x800C9F90u; f_802B1168(c); // 800C9F8C
  c->r[7]=0u+0x80420000u; // 800C9F90
  c->r[4]=0u+0x60B90000u; // 800C9F94
  c->r[5]=0u+0x00000000u; // 800C9F98
  c->r[3]=0u+0x1E2D0000u; // 800C9F9C
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800C9FA0
  c->r[7]=c->r[7]+0xFFFF9A6Cu; // 800C9FA4
  c->r[4]=c->r[4]+0xFFFFE3D7u; // 800C9FA8
  c->r[6]=c->r[13]+0xFFFFB0E4u; // 800C9FAC
  W32(c->r[31]+0x00000018u,c->r[7]); // 800C9FB0
  c->r[3]=c->r[31]|c->r[31]; // 800C9FB4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800C9FB8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800C9FBC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800C9FC0
  W32(c->r[31]+0x00000010u,c->r[5]); // 800C9FC4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C9FC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9FCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9FD0
  c->lr=c->r[0]; // 800C9FD4
  c->r[1]=c->r[1]+0x00000010u; // 800C9FD8
  return; // 800C9FDC
}

// fn_800C9FE0
void f_800C9FE0(Ctx* __restrict c) {
  trace_call(0x800C9FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9FE0
  c->r[0]=c->lr; // 800C9FE4
  cmps(c,0,(int32_t)c->r[4],0); // 800C9FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9FEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9FF0
  c->r[30]=c->r[3]|c->r[3]; // 800C9FF4
  c->r[31]=c->r[4]|c->r[4]; // 800C9FF8
  if (crb(c,2)) { goto L_800CA050; } // 800C9FFC
  c->r[3]=c->r[31]|c->r[31]; // 800CA000
  c->lr=0x800CA008u; f_80244520(c); // 800CA004
  c->r[7]=c->r[3]|c->r[3]; // 800CA008
  c->r[9]=c->r[31]|c->r[31]; // 800CA00C
  c->r[3]=0u+0x00000028u; // 800CA010
  c->r[4]=c->r[13]+0xFFFFB0ECu; // 800CA014
  c->r[5]=0u+0x00000000u; // 800CA018
  c->r[6]=0u+0x00002001u; // 800CA01C
  c->r[8]=0u+0x00000000u; // 800CA020
  c->lr=0x800CA028u; f_80242DF0(c); // 800CA024
  c->r[4]=c->r[3]|c->r[3]; // 800CA028
  c->r[3]=0u+0x00000028u; // 800CA02C
  c->r[5]=c->r[13]+0xFFFFB0F1u; // 800CA030
  c->r[6]=0u+0x00000000u; // 800CA034
  c->r[7]=0u+0x00001001u; // 800CA038
  c->lr=0x800CA040u; f_80244DB0(c); // 800CA03C
  cmps(c,0,(int32_t)c->r[3],0); // 800CA040
  if (crb(c,2)) { goto L_800CA070; } // 800CA044
  c->lr=0x800CA04Cu; f_800C9F78(c); // 800CA048
  goto L_800CA070; // 800CA04C
L_800CA050:;
  c->r[3]=0u+0x00000028u; // 800CA050
  c->r[4]=c->r[13]+0xFFFFB0F6u; // 800CA054
  c->r[5]=0u+0x00000000u; // 800CA058
  c->r[6]=0u+0x00001001u; // 800CA05C
  c->lr=0x800CA064u; f_80244D20(c); // 800CA060
  cmps(c,0,(int32_t)c->r[3],0); // 800CA064
  if (crb(c,2)) { goto L_800CA070; } // 800CA068
  c->lr=0x800CA070u; f_800C9F78(c); // 800CA06C
L_800CA070:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CA070
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CA074
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA078
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA07C
  c->lr=c->r[0]; // 800CA080
  c->r[1]=c->r[1]+0x00000010u; // 800CA084
  return; // 800CA088
}

// fn_800CA08C
void f_800CA08C(Ctx* __restrict c) {
  trace_call(0x800CA08Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA08C
  c->r[0]=c->lr; // 800CA090
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA094
  c->r[0]=0u+0x00000000u; // 800CA098
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA09C
  c->r[31]=c->r[4]|c->r[4]; // 800CA0A0
  c->r[30]=c->r[3]|c->r[3]; // 800CA0A4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800CA0A8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800CA0AC
  c->r[3]=c->r[31]|c->r[31]; // 800CA0B0
  c->lr=0x800CA0B8u; f_8030BD1C(c); // 800CA0B4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA0B8
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800CA0BC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA0C0
  c->r[3]=c->r[31]|c->r[31]; // 800CA0C4
  c->lr=0x800CA0CCu; f_8030BD1C(c); // 800CA0C8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA0CC
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800CA0D0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA0D4
  c->r[3]=c->r[31]|c->r[31]; // 800CA0D8
  c->lr=0x800CA0E0u; f_8030BD1C(c); // 800CA0DC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA0E0
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800CA0E4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA0E8
  c->r[3]=c->r[31]|c->r[31]; // 800CA0EC
  c->lr=0x800CA0F4u; f_8030BD1C(c); // 800CA0F0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA0F4
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800CA0F8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA0FC
  c->r[3]=c->r[31]|c->r[31]; // 800CA100
  c->lr=0x800CA108u; f_8030BD1C(c); // 800CA104
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA108
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800CA10C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA110
  c->r[3]=c->r[31]|c->r[31]; // 800CA114
  c->lr=0x800CA11Cu; f_8030BD1C(c); // 800CA118
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA11C
  c->r[0]=(rotl(c->r[3],26)&0x04000000u)|(c->r[0]&~0x04000000u); // 800CA120
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA124
  c->r[3]=c->r[31]|c->r[31]; // 800CA128
  c->lr=0x800CA130u; f_8030BD1C(c); // 800CA12C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA130
  c->r[0]=(rotl(c->r[3],25)&0x02000000u)|(c->r[0]&~0x02000000u); // 800CA134
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA138
  c->r[3]=c->r[31]|c->r[31]; // 800CA13C
  c->lr=0x800CA144u; f_8030BD1C(c); // 800CA140
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA144
  c->r[0]=(rotl(c->r[3],24)&0x01000000u)|(c->r[0]&~0x01000000u); // 800CA148
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA14C
  c->r[3]=c->r[31]|c->r[31]; // 800CA150
  c->lr=0x800CA158u; f_8030BD1C(c); // 800CA154
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA158
  c->r[0]=(rotl(c->r[3],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 800CA15C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA160
  c->r[3]=c->r[31]|c->r[31]; // 800CA164
  c->lr=0x800CA16Cu; f_8030BD1C(c); // 800CA168
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA16C
  c->r[0]=(rotl(c->r[3],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 800CA170
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA174
  c->r[3]=c->r[31]|c->r[31]; // 800CA178
  c->lr=0x800CA180u; f_8030BD1C(c); // 800CA17C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA180
  c->r[0]=(rotl(c->r[3],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800CA184
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA188
  c->r[3]=c->r[31]|c->r[31]; // 800CA18C
  c->lr=0x800CA194u; f_8030BD1C(c); // 800CA190
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA194
  c->r[0]=(rotl(c->r[3],20)&0x00100000u)|(c->r[0]&~0x00100000u); // 800CA198
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA19C
  c->r[3]=c->r[31]|c->r[31]; // 800CA1A0
  c->lr=0x800CA1A8u; f_8030BD1C(c); // 800CA1A4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA1A8
  c->r[0]=(rotl(c->r[3],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 800CA1AC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA1B0
  c->r[3]=c->r[31]|c->r[31]; // 800CA1B4
  c->lr=0x800CA1BCu; f_8030BD1C(c); // 800CA1B8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA1BC
  c->r[0]=(rotl(c->r[3],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 800CA1C0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA1C4
  c->r[3]=c->r[31]|c->r[31]; // 800CA1C8
  c->lr=0x800CA1D0u; f_8030BD1C(c); // 800CA1CC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA1D0
  c->r[0]=(rotl(c->r[3],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 800CA1D4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA1D8
  c->r[3]=c->r[31]|c->r[31]; // 800CA1DC
  c->lr=0x800CA1E4u; f_8030BD1C(c); // 800CA1E0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA1E4
  c->r[0]=(rotl(c->r[3],16)&0x00010000u)|(c->r[0]&~0x00010000u); // 800CA1E8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA1EC
  c->r[3]=c->r[31]|c->r[31]; // 800CA1F0
  c->lr=0x800CA1F8u; f_8030BD1C(c); // 800CA1F4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA1F8
  c->r[0]=(rotl(c->r[3],15)&0x00008000u)|(c->r[0]&~0x00008000u); // 800CA1FC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA200
  c->r[3]=c->r[31]|c->r[31]; // 800CA204
  c->lr=0x800CA20Cu; f_8030BD1C(c); // 800CA208
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA20C
  c->r[0]=(rotl(c->r[3],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 800CA210
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA214
  c->r[3]=c->r[31]|c->r[31]; // 800CA218
  c->lr=0x800CA220u; f_8030BD1C(c); // 800CA21C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA220
  c->r[0]=(rotl(c->r[3],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 800CA224
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA228
  c->r[3]=c->r[31]|c->r[31]; // 800CA22C
  c->lr=0x800CA234u; f_8030BD1C(c); // 800CA230
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA234
  c->r[0]=(rotl(c->r[3],12)&0x00001000u)|(c->r[0]&~0x00001000u); // 800CA238
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA23C
  c->r[3]=c->r[31]|c->r[31]; // 800CA240
  c->lr=0x800CA248u; f_8030BD1C(c); // 800CA244
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA248
  c->r[0]=(rotl(c->r[3],11)&0x00000800u)|(c->r[0]&~0x00000800u); // 800CA24C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA250
  c->r[3]=c->r[31]|c->r[31]; // 800CA254
  c->lr=0x800CA25Cu; f_8030BD1C(c); // 800CA258
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA25C
  c->r[0]=(rotl(c->r[3],10)&0x00000400u)|(c->r[0]&~0x00000400u); // 800CA260
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA264
  c->r[3]=c->r[31]|c->r[31]; // 800CA268
  c->lr=0x800CA270u; f_8030BD1C(c); // 800CA26C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA270
  c->r[0]=(rotl(c->r[3],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800CA274
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA278
  c->r[3]=c->r[31]|c->r[31]; // 800CA27C
  c->lr=0x800CA284u; f_8030BD1C(c); // 800CA280
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA284
  c->r[0]=(rotl(c->r[3],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 800CA288
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA28C
  c->r[3]=c->r[31]|c->r[31]; // 800CA290
  c->lr=0x800CA298u; f_8030BD1C(c); // 800CA294
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA298
  c->r[0]=(rotl(c->r[3],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 800CA29C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA2A0
  c->r[3]=c->r[31]|c->r[31]; // 800CA2A4
  c->lr=0x800CA2ACu; f_8030BD1C(c); // 800CA2A8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA2AC
  c->r[0]=(rotl(c->r[3],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 800CA2B0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA2B4
  c->r[3]=c->r[31]|c->r[31]; // 800CA2B8
  c->lr=0x800CA2C0u; f_8030BD1C(c); // 800CA2BC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA2C0
  c->r[0]=(rotl(c->r[3],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800CA2C4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA2C8
  c->r[3]=c->r[31]|c->r[31]; // 800CA2CC
  c->lr=0x800CA2D4u; f_8030BD1C(c); // 800CA2D0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA2D4
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800CA2D8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA2DC
  c->r[3]=c->r[31]|c->r[31]; // 800CA2E0
  c->lr=0x800CA2E8u; f_8030BD1C(c); // 800CA2E4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA2E8
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 800CA2EC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA2F0
  c->r[3]=c->r[31]|c->r[31]; // 800CA2F4
  c->lr=0x800CA2FCu; f_8030BD1C(c); // 800CA2F8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA2FC
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 800CA300
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA304
  c->r[3]=c->r[31]|c->r[31]; // 800CA308
  c->lr=0x800CA310u; f_8030BD1C(c); // 800CA30C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA310
  c->r[0]=(rotl(c->r[3],1)&0x00000002u)|(c->r[0]&~0x00000002u); // 800CA314
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA318
  c->r[3]=c->r[31]|c->r[31]; // 800CA31C
  c->lr=0x800CA324u; f_8030BD1C(c); // 800CA320
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800CA324
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800CA328
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800CA32C
  c->r[3]=c->r[31]|c->r[31]; // 800CA330
  c->lr=0x800CA338u; f_8030BD1C(c); // 800CA334
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA338
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800CA33C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA340
  c->r[3]=c->r[31]|c->r[31]; // 800CA344
  c->lr=0x800CA34Cu; f_8030BD1C(c); // 800CA348
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA34C
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800CA350
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA354
  c->r[3]=c->r[31]|c->r[31]; // 800CA358
  c->lr=0x800CA360u; f_8030BD1C(c); // 800CA35C
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA360
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800CA364
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA368
  c->r[3]=c->r[31]|c->r[31]; // 800CA36C
  c->lr=0x800CA374u; f_8030BD1C(c); // 800CA370
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA374
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800CA378
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA37C
  c->r[3]=c->r[31]|c->r[31]; // 800CA380
  c->lr=0x800CA388u; f_8030BD1C(c); // 800CA384
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA388
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800CA38C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA390
  c->r[3]=c->r[31]|c->r[31]; // 800CA394
  c->lr=0x800CA39Cu; f_8030BD1C(c); // 800CA398
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA39C
  c->r[0]=(rotl(c->r[3],26)&0x04000000u)|(c->r[0]&~0x04000000u); // 800CA3A0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA3A4
  c->r[3]=c->r[31]|c->r[31]; // 800CA3A8
  c->lr=0x800CA3B0u; f_8030BD1C(c); // 800CA3AC
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA3B0
  c->r[0]=(rotl(c->r[3],25)&0x02000000u)|(c->r[0]&~0x02000000u); // 800CA3B4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA3B8
  c->r[3]=c->r[31]|c->r[31]; // 800CA3BC
  c->lr=0x800CA3C4u; f_8030BD1C(c); // 800CA3C0
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA3C4
  c->r[0]=(rotl(c->r[3],24)&0x01000000u)|(c->r[0]&~0x01000000u); // 800CA3C8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA3CC
  c->r[3]=c->r[31]|c->r[31]; // 800CA3D0
  c->lr=0x800CA3D8u; f_8030BD1C(c); // 800CA3D4
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA3D8
  c->r[0]=(rotl(c->r[3],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 800CA3DC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA3E0
  c->r[3]=c->r[31]|c->r[31]; // 800CA3E4
  c->lr=0x800CA3ECu; f_8030BD1C(c); // 800CA3E8
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA3EC
  c->r[0]=(rotl(c->r[3],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 800CA3F0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA3F4
  c->r[3]=c->r[31]|c->r[31]; // 800CA3F8
  c->lr=0x800CA400u; f_8030BD1C(c); // 800CA3FC
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA400
  c->r[0]=(rotl(c->r[3],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800CA404
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA408
  c->r[3]=c->r[31]|c->r[31]; // 800CA40C
  c->lr=0x800CA414u; f_8030BD1C(c); // 800CA410
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA414
  c->r[0]=(rotl(c->r[3],20)&0x00100000u)|(c->r[0]&~0x00100000u); // 800CA418
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA41C
  c->r[3]=c->r[31]|c->r[31]; // 800CA420
  c->lr=0x800CA428u; f_8030BD1C(c); // 800CA424
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA428
  c->r[0]=(rotl(c->r[3],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 800CA42C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA430
  c->r[3]=c->r[31]|c->r[31]; // 800CA434
  c->lr=0x800CA43Cu; f_8030BD1C(c); // 800CA438
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA43C
  c->r[0]=(rotl(c->r[3],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 800CA440
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA444
  c->r[3]=c->r[31]|c->r[31]; // 800CA448
  c->lr=0x800CA450u; f_8030BD1C(c); // 800CA44C
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA450
  c->r[0]=(rotl(c->r[3],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 800CA454
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA458
  c->r[3]=c->r[31]|c->r[31]; // 800CA45C
  c->lr=0x800CA464u; f_8030BD1C(c); // 800CA460
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA464
  c->r[0]=(rotl(c->r[3],16)&0x00010000u)|(c->r[0]&~0x00010000u); // 800CA468
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA46C
  c->r[3]=c->r[31]|c->r[31]; // 800CA470
  c->lr=0x800CA478u; f_8030BD1C(c); // 800CA474
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA478
  c->r[0]=(rotl(c->r[3],15)&0x00008000u)|(c->r[0]&~0x00008000u); // 800CA47C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA480
  c->r[3]=c->r[31]|c->r[31]; // 800CA484
  c->lr=0x800CA48Cu; f_8030BD1C(c); // 800CA488
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA48C
  c->r[0]=(rotl(c->r[3],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 800CA490
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA494
  c->r[3]=c->r[31]|c->r[31]; // 800CA498
  c->lr=0x800CA4A0u; f_8030BD1C(c); // 800CA49C
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA4A0
  c->r[0]=(rotl(c->r[3],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 800CA4A4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA4A8
  c->r[3]=c->r[31]|c->r[31]; // 800CA4AC
  c->lr=0x800CA4B4u; f_8030BD1C(c); // 800CA4B0
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA4B4
  c->r[0]=(rotl(c->r[3],12)&0x00001000u)|(c->r[0]&~0x00001000u); // 800CA4B8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA4BC
  c->r[3]=c->r[31]|c->r[31]; // 800CA4C0
  c->lr=0x800CA4C8u; f_8030BD1C(c); // 800CA4C4
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA4C8
  c->r[0]=(rotl(c->r[3],11)&0x00000800u)|(c->r[0]&~0x00000800u); // 800CA4CC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA4D0
  c->r[3]=c->r[31]|c->r[31]; // 800CA4D4
  c->lr=0x800CA4DCu; f_8030BD1C(c); // 800CA4D8
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA4DC
  c->r[0]=(rotl(c->r[3],10)&0x00000400u)|(c->r[0]&~0x00000400u); // 800CA4E0
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA4E4
  c->r[3]=c->r[31]|c->r[31]; // 800CA4E8
  c->lr=0x800CA4F0u; f_8030BD1C(c); // 800CA4EC
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA4F0
  c->r[0]=(rotl(c->r[3],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800CA4F4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA4F8
  c->r[3]=c->r[31]|c->r[31]; // 800CA4FC
  c->lr=0x800CA504u; f_8030BD1C(c); // 800CA500
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA504
  c->r[0]=(rotl(c->r[3],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 800CA508
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA50C
  c->r[3]=c->r[31]|c->r[31]; // 800CA510
  c->lr=0x800CA518u; f_8030BD1C(c); // 800CA514
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA518
  c->r[0]=(rotl(c->r[3],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 800CA51C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA520
  c->r[3]=c->r[31]|c->r[31]; // 800CA524
  c->lr=0x800CA52Cu; f_8030BD1C(c); // 800CA528
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA52C
  c->r[0]=(rotl(c->r[3],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 800CA530
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA534
  c->r[3]=c->r[31]|c->r[31]; // 800CA538
  c->lr=0x800CA540u; f_8030BD1C(c); // 800CA53C
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA540
  c->r[0]=(rotl(c->r[3],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800CA544
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA548
  c->r[3]=c->r[31]|c->r[31]; // 800CA54C
  c->lr=0x800CA554u; f_8030BD1C(c); // 800CA550
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA554
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800CA558
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA55C
  c->r[3]=c->r[31]|c->r[31]; // 800CA560
  c->lr=0x800CA568u; f_8030BD1C(c); // 800CA564
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA568
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 800CA56C
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA570
  c->r[3]=c->r[31]|c->r[31]; // 800CA574
  c->lr=0x800CA57Cu; f_8030BD1C(c); // 800CA578
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA57C
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 800CA580
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA584
  c->r[3]=c->r[31]|c->r[31]; // 800CA588
  c->lr=0x800CA590u; f_8030BD1C(c); // 800CA58C
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA590
  c->r[0]=(rotl(c->r[3],1)&0x00000002u)|(c->r[0]&~0x00000002u); // 800CA594
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA598
  c->r[3]=c->r[31]|c->r[31]; // 800CA59C
  c->lr=0x800CA5A4u; f_8030BD1C(c); // 800CA5A0
  c->r[0]=R32(c->r[30]+0x00000020u); // 800CA5A4
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800CA5A8
  W32(c->r[30]+0x00000020u,c->r[0]); // 800CA5AC
  c->r[3]=c->r[31]|c->r[31]; // 800CA5B0
  c->lr=0x800CA5B8u; f_8030BD1C(c); // 800CA5B4
  W8(c->r[30]+0x00000024u,c->r[3]); // 800CA5B8
  c->r[3]=0u+0x00000000u; // 800CA5BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA5C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA5C4
  c->lr=c->r[0]; // 800CA5C8
  c->r[1]=c->r[1]+0x00000010u; // 800CA5CC
  return; // 800CA5D0
}

// fn_800CA5D4
void f_800CA5D4(Ctx* __restrict c) {
  trace_call(0x800CA5D4u);
  return; // 800CA5D4
}

// fn_800CA5D8
void f_800CA5D8(Ctx* __restrict c) {
  trace_call(0x800CA5D8u);
  c->r[0]=0u+0x00000000u; // 800CA5D8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800CA5DC
  W32(c->r[3]+0x00000020u,c->r[0]); // 800CA5E0
  W8(c->r[3]+0x00000024u,c->r[0]); // 800CA5E4
  return; // 800CA5E8
}

// fn_800CA5EC
void f_800CA5EC(Ctx* __restrict c) {
  trace_call(0x800CA5ECu);
  cmps(c,0,(int32_t)c->r[5],0); // 800CA5EC
  if (crb(c,2)) { goto L_800CA5F8; } // 800CA5F0
  goto L_800CA5FC; // 800CA5F4
L_800CA5F8:;
  c->r[5]=c->r[3]|c->r[3]; // 800CA5F8
L_800CA5FC:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800CA5FC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800CA600
  c->r[0]=R32(c->r[4]+0x00000020u); // 800CA604
  W32(c->r[5]+0x00000020u,c->r[0]); // 800CA608
  c->r[0]=R8(c->r[4]+0x00000024u); // 800CA60C
  W8(c->r[5]+0x00000024u,c->r[0]); // 800CA610
  return; // 800CA614
}

// fn_800CA618
void f_800CA618(Ctx* __restrict c) {
  trace_call(0x800CA618u);
  c->r[3]=0u+0x00000000u; // 800CA618
  return; // 800CA61C
}

// fn_800CA620
void f_800CA620(Ctx* __restrict c) {
  trace_call(0x800CA620u);
  c->r[3]=0u+0x00000028u; // 800CA620
  return; // 800CA624
}

// fn_800CA628
void f_800CA628(Ctx* __restrict c) {
  trace_call(0x800CA628u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA628
  c->r[0]=c->lr; // 800CA62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA634
  c->r[31]=c->r[3]|c->r[3]; // 800CA638
  c->lr=0x800CA640u; f_800C9F78(c); // 800CA63C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CA640
  c->r[3]=0u+0x80420000u; // 800CA644
  c->r[3]=c->r[3]+0xFFFF9A2Cu; // 800CA648
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CA64C
  c->r[0]=c->r[0]|0x80000000u; // 800CA650
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CA654
  c->r[3]=c->r[31]|c->r[31]; // 800CA658
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CA65C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CA660
  c->ctr=c->r[12]; // 800CA664
  if (true) { c->lr=0x800CA66Cu; dispatch(c,c->ctr); } // 800CA668
  c->r[3]=c->r[31]|c->r[31]; // 800CA66C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA670
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA674
  c->lr=c->r[0]; // 800CA678
  c->r[1]=c->r[1]+0x00000010u; // 800CA67C
  return; // 800CA680
}

// fn_800CA684
void f_800CA684(Ctx* __restrict c) {
  trace_call(0x800CA684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA684
  c->r[0]=c->lr; // 800CA688
  cmps(c,0,(int32_t)c->r[3],0); // 800CA68C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA690
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA694
  c->r[30]=c->r[3]|c->r[3]; // 800CA698
  c->r[31]=c->r[4]|c->r[4]; // 800CA69C
  if (crb(c,2)) { goto L_800CA6BC; } // 800CA6A0
  c->r[4]=0u+0x00000000u; // 800CA6A4
  c->lr=0x800CA6ACu; f_802B1180(c); // 800CA6A8
  cmps(c,0,(int32_t)c->r[31],0); // 800CA6AC
  if (!crb(c,1)) { goto L_800CA6BC; } // 800CA6B0
  c->r[3]=c->r[30]|c->r[30]; // 800CA6B4
  c->lr=0x800CA6BCu; f_80244DC0(c); // 800CA6B8
L_800CA6BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800CA6BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA6C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA6C4
  c->lr=c->r[0]; // 800CA6C8
  c->r[1]=c->r[1]+0x00000010u; // 800CA6CC
  return; // 800CA6D0
}

// fn_800CA6D4
void f_800CA6D4(Ctx* __restrict c) {
  trace_call(0x800CA6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA6D4
  c->r[0]=c->lr; // 800CA6D8
  c->r[3]=0u+0x00000028u; // 800CA6DC
  c->r[4]=c->r[13]+0xFFFFB0FBu; // 800CA6E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA6E4
  c->r[5]=0u+0x00000000u; // 800CA6E8
  c->r[6]=0u+0x00001001u; // 800CA6EC
  c->lr=0x800CA6F4u; f_80244D20(c); // 800CA6F0
  cmps(c,0,(int32_t)c->r[3],0); // 800CA6F4
  if (crb(c,2)) { goto L_800CA700; } // 800CA6F8
  c->lr=0x800CA700u; f_800CA628(c); // 800CA6FC
L_800CA700:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA700
  c->lr=c->r[0]; // 800CA704
  c->r[1]=c->r[1]+0x00000010u; // 800CA708
  return; // 800CA70C
}

// fn_800CA710
void f_800CA710(Ctx* __restrict c) {
  trace_call(0x800CA710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA710
  c->r[0]=c->lr; // 800CA714
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA71C
  c->r[31]=c->r[3]|c->r[3]; // 800CA720
  c->lr=0x800CA728u; f_80244520(c); // 800CA724
  c->r[7]=c->r[3]|c->r[3]; // 800CA728
  c->r[9]=c->r[31]|c->r[31]; // 800CA72C
  c->r[3]=0u+0x00000028u; // 800CA730
  c->r[4]=c->r[13]+0xFFFFB100u; // 800CA734
  c->r[5]=0u+0x00000000u; // 800CA738
  c->r[6]=0u+0x00002001u; // 800CA73C
  c->r[8]=0u+0x00000000u; // 800CA740
  c->lr=0x800CA748u; f_80242DF0(c); // 800CA744
  c->r[4]=c->r[3]|c->r[3]; // 800CA748
  c->r[3]=0u+0x00000028u; // 800CA74C
  c->r[5]=c->r[13]+0xFFFFB105u; // 800CA750
  c->r[6]=0u+0x00000000u; // 800CA754
  c->r[7]=0u+0x00001001u; // 800CA758
  c->lr=0x800CA760u; f_80244DB0(c); // 800CA75C
  cmps(c,0,(int32_t)c->r[3],0); // 800CA760
  if (crb(c,2)) { goto L_800CA76C; } // 800CA764
  c->lr=0x800CA76Cu; f_800CA628(c); // 800CA768
L_800CA76C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA76C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA770
  c->lr=c->r[0]; // 800CA774
  c->r[1]=c->r[1]+0x00000010u; // 800CA778
  return; // 800CA77C
}

// fn_800CA780
void f_800CA780(Ctx* __restrict c) {
  trace_call(0x800CA780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA780
  c->r[0]=c->lr; // 800CA784
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA78C
  c->r[31]=c->r[3]|c->r[3]; // 800CA790
  c->lr=0x800CA798u; f_800C9F78(c); // 800CA794
  c->r[7]=0u+0x80420000u; // 800CA798
  c->r[4]=0u+0xE7E60000u; // 800CA79C
  c->r[5]=0u+0x00000000u; // 800CA7A0
  c->r[3]=0u+0x1B9C0000u; // 800CA7A4
  c->r[0]=c->r[3]+0xFFFFA3C8u; // 800CA7A8
  c->r[7]=c->r[7]+0xFFFF99F0u; // 800CA7AC
  c->r[4]=c->r[4]+0x000039EDu; // 800CA7B0
  c->r[6]=c->r[13]+0xFFFFB10Au; // 800CA7B4
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CA7B8
  c->r[3]=c->r[31]|c->r[31]; // 800CA7BC
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CA7C0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CA7C4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CA7C8
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CA7CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CA7D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA7D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA7D8
  c->lr=c->r[0]; // 800CA7DC
  c->r[1]=c->r[1]+0x00000010u; // 800CA7E0
  return; // 800CA7E4
}

// fn_800CA7E8
void f_800CA7E8(Ctx* __restrict c) {
  trace_call(0x800CA7E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA7E8
  c->r[0]=c->lr; // 800CA7EC
  cmps(c,0,(int32_t)c->r[4],0); // 800CA7F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA7F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA7F8
  c->r[30]=c->r[3]|c->r[3]; // 800CA7FC
  c->r[31]=c->r[4]|c->r[4]; // 800CA800
  if (crb(c,2)) { goto L_800CA858; } // 800CA804
  c->r[3]=c->r[31]|c->r[31]; // 800CA808
  c->lr=0x800CA810u; f_80244520(c); // 800CA80C
  c->r[7]=c->r[3]|c->r[3]; // 800CA810
  c->r[9]=c->r[31]|c->r[31]; // 800CA814
  c->r[3]=0u+0x00000084u; // 800CA818
  c->r[4]=c->r[13]+0xFFFFB112u; // 800CA81C
  c->r[5]=0u+0x00000000u; // 800CA820
  c->r[6]=0u+0x00002001u; // 800CA824
  c->r[8]=0u+0x00000000u; // 800CA828
  c->lr=0x800CA830u; f_80242DF0(c); // 800CA82C
  c->r[4]=c->r[3]|c->r[3]; // 800CA830
  c->r[3]=0u+0x00000084u; // 800CA834
  c->r[5]=c->r[13]+0xFFFFB117u; // 800CA838
  c->r[6]=0u+0x00000000u; // 800CA83C
  c->r[7]=0u+0x00001001u; // 800CA840
  c->lr=0x800CA848u; f_80244DB0(c); // 800CA844
  cmps(c,0,(int32_t)c->r[3],0); // 800CA848
  if (crb(c,2)) { goto L_800CA878; } // 800CA84C
  c->lr=0x800CA854u; f_800CA780(c); // 800CA850
  goto L_800CA878; // 800CA854
L_800CA858:;
  c->r[3]=0u+0x00000084u; // 800CA858
  c->r[4]=c->r[13]+0xFFFFB11Cu; // 800CA85C
  c->r[5]=0u+0x00000000u; // 800CA860
  c->r[6]=0u+0x00001001u; // 800CA864
  c->lr=0x800CA86Cu; f_80244D20(c); // 800CA868
  cmps(c,0,(int32_t)c->r[3],0); // 800CA86C
  if (crb(c,2)) { goto L_800CA878; } // 800CA870
  c->lr=0x800CA878u; f_800CA780(c); // 800CA874
L_800CA878:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CA878
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CA87C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA884
  c->lr=c->r[0]; // 800CA888
  c->r[1]=c->r[1]+0x00000010u; // 800CA88C
  return; // 800CA890
}

// fn_800CA894
void f_800CA894(Ctx* __restrict c) {
  trace_call(0x800CA894u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA894
  c->r[0]=c->lr; // 800CA898
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA89C
  c->r[11]=c->r[1]+0x00000020u; // 800CA8A0
  c->lr=0x800CA8A8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CA8A4
  c->r[29]=c->r[3]|c->r[3]; // 800CA8A8
  c->r[30]=c->r[4]|c->r[4]; // 800CA8AC
  c->lr=0x800CA8B4u; f_800CA08C(c); // 800CA8B0
  c->r[0]=0u+0x00000000u; // 800CA8B4
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA8B8
  c->r[31]=c->r[3]|c->r[3]; // 800CA8BC
  c->r[3]=c->r[30]|c->r[30]; // 800CA8C0
  c->lr=0x800CA8C8u; f_8030BD1C(c); // 800CA8C4
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA8C8
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800CA8CC
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA8D0
  c->r[3]=c->r[30]|c->r[30]; // 800CA8D4
  c->lr=0x800CA8DCu; f_8030BD1C(c); // 800CA8D8
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA8DC
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800CA8E0
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA8E4
  c->r[3]=c->r[30]|c->r[30]; // 800CA8E8
  c->lr=0x800CA8F0u; f_8030BD1C(c); // 800CA8EC
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA8F0
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800CA8F4
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA8F8
  c->r[3]=c->r[30]|c->r[30]; // 800CA8FC
  c->lr=0x800CA904u; f_8030BD1C(c); // 800CA900
  W32(c->r[29]+0x0000002Cu,c->r[3]); // 800CA904
  c->r[3]=c->r[30]|c->r[30]; // 800CA908
  c->r[4]=0u+0x00000000u; // 800CA90C
  c->lr=0x800CA914u; f_8030BE30(c); // 800CA910
  W32(c->r[29]+0x00000030u,c->r[3]); // 800CA914
  c->r[3]=c->r[30]|c->r[30]; // 800CA918
  c->lr=0x800CA920u; f_8030BD1C(c); // 800CA91C
  W32(c->r[29]+0x00000034u,c->r[3]); // 800CA920
  c->r[3]=c->r[30]|c->r[30]; // 800CA924
  c->lr=0x800CA92Cu; f_8030BD1C(c); // 800CA928
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA92C
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800CA930
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA934
  c->r[3]=c->r[30]|c->r[30]; // 800CA938
  c->lr=0x800CA940u; f_8030BD1C(c); // 800CA93C
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA940
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800CA944
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA948
  c->r[3]=c->r[30]|c->r[30]; // 800CA94C
  c->lr=0x800CA954u; f_8030BD1C(c); // 800CA950
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA954
  c->r[0]=(rotl(c->r[3],26)&0x04000000u)|(c->r[0]&~0x04000000u); // 800CA958
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA95C
  c->r[3]=c->r[30]|c->r[30]; // 800CA960
  c->lr=0x800CA968u; f_8030BD1C(c); // 800CA964
  W32(c->r[29]+0x0000003Cu,c->r[3]); // 800CA968
  c->r[3]=c->r[30]|c->r[30]; // 800CA96C
  c->lr=0x800CA974u; f_8030BD1C(c); // 800CA970
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA974
  c->r[0]=(rotl(c->r[3],25)&0x02000000u)|(c->r[0]&~0x02000000u); // 800CA978
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA97C
  c->r[3]=c->r[30]|c->r[30]; // 800CA980
  c->lr=0x800CA988u; f_8030BD1C(c); // 800CA984
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA988
  c->r[0]=(rotl(c->r[3],24)&0x01000000u)|(c->r[0]&~0x01000000u); // 800CA98C
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA990
  c->r[3]=c->r[30]|c->r[30]; // 800CA994
  c->lr=0x800CA99Cu; f_8030C0A0(c); // 800CA998
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[1]);} // 800CA99C
  c->r[3]=c->r[30]|c->r[30]; // 800CA9A0
  c->lr=0x800CA9A8u; f_8030BD1C(c); // 800CA9A4
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA9A8
  c->r[0]=(rotl(c->r[3],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 800CA9AC
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA9B0
  c->r[3]=c->r[30]|c->r[30]; // 800CA9B4
  c->lr=0x800CA9BCu; f_8030C0A0(c); // 800CA9B8
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[1]);} // 800CA9BC
  c->r[3]=c->r[30]|c->r[30]; // 800CA9C0
  c->lr=0x800CA9C8u; f_8030BD1C(c); // 800CA9C4
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA9C8
  c->r[0]=(rotl(c->r[3],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 800CA9CC
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA9D0
  c->r[3]=c->r[30]|c->r[30]; // 800CA9D4
  c->lr=0x800CA9DCu; f_8030C0A0(c); // 800CA9D8
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[1]);} // 800CA9DC
  c->r[3]=c->r[30]|c->r[30]; // 800CA9E0
  c->lr=0x800CA9E8u; f_8030BD1C(c); // 800CA9E4
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA9E8
  c->r[0]=(rotl(c->r[3],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800CA9EC
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CA9F0
  c->r[3]=c->r[30]|c->r[30]; // 800CA9F4
  c->lr=0x800CA9FCu; f_8030BD1C(c); // 800CA9F8
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CA9FC
  c->r[0]=(rotl(c->r[3],20)&0x00100000u)|(c->r[0]&~0x00100000u); // 800CAA00
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CAA04
  c->r[3]=c->r[30]|c->r[30]; // 800CAA08
  c->lr=0x800CAA10u; f_8030C0A0(c); // 800CAA0C
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[1]);} // 800CAA10
  c->r[3]=c->r[30]|c->r[30]; // 800CAA14
  c->lr=0x800CAA1Cu; f_8030C0A0(c); // 800CAA18
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[1]);} // 800CAA1C
  c->r[3]=c->r[30]|c->r[30]; // 800CAA20
  c->lr=0x800CAA28u; f_8030C0A0(c); // 800CAA24
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAA28
  c->r[3]=c->r[30]|c->r[30]; // 800CAA2C
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[1]);} // 800CAA30
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 800CAA34
  c->lr=0x800CAA3Cu; f_8030C0A0(c); // 800CAA38
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 800CAA3C
  c->r[3]=c->r[30]|c->r[30]; // 800CAA40
  c->lr=0x800CAA48u; f_8030C0A0(c); // 800CAA44
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 800CAA48
  c->r[3]=c->r[30]|c->r[30]; // 800CAA4C
  c->lr=0x800CAA54u; f_8030C0A0(c); // 800CAA50
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAA54
  c->r[3]=c->r[30]|c->r[30]; // 800CAA58
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 800CAA5C
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 800CAA60
  c->lr=0x800CAA68u; f_8030C0A0(c); // 800CAA64
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[1]);} // 800CAA68
  c->r[3]=c->r[30]|c->r[30]; // 800CAA6C
  c->lr=0x800CAA74u; f_8030BD1C(c); // 800CAA70
  W8(c->r[29]+0x00000070u,c->r[3]); // 800CAA74
  c->r[3]=c->r[30]|c->r[30]; // 800CAA78
  c->lr=0x800CAA80u; f_8030BD1C(c); // 800CAA7C
  W32(c->r[29]+0x00000074u,c->r[3]); // 800CAA80
  c->r[3]=c->r[30]|c->r[30]; // 800CAA84
  c->lr=0x800CAA8Cu; f_8030BD1C(c); // 800CAA88
  W8(c->r[29]+0x00000078u,c->r[3]); // 800CAA8C
  c->r[3]=c->r[30]|c->r[30]; // 800CAA90
  c->lr=0x800CAA98u; f_8030BD1C(c); // 800CAA94
  W32(c->r[29]+0x0000007Cu,c->r[3]); // 800CAA98
  c->r[3]=c->r[30]|c->r[30]; // 800CAA9C
  c->lr=0x800CAAA4u; f_8030BD1C(c); // 800CAAA0
  W16(c->r[29]+0x00000080u,c->r[3]); // 800CAAA4
  c->r[11]=c->r[1]+0x00000020u; // 800CAAA8
  c->r[3]=c->r[31]|c->r[31]; // 800CAAAC
  c->lr=0x800CAAB4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CAAB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CAAB4
  c->lr=c->r[0]; // 800CAAB8
  c->r[1]=c->r[1]+0x00000020u; // 800CAABC
  return; // 800CAAC0
}

// fn_800CAAC4
void f_800CAAC4(Ctx* __restrict c) {
  trace_call(0x800CAAC4u);
  return; // 800CAAC4
}

// fn_800CAAC8
void f_800CAAC8(Ctx* __restrict c) {
  trace_call(0x800CAAC8u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CAAC8
  if (!crb(c,2)) return; // 800CAACC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CAAD0
  cmps(c,0,(int32_t)c->r[0],7); // 800CAAD4
  if (!crb(c,0)) return; // 800CAAD8
  c->r[4]=c->r[5]|c->r[5]; // 800CAADC
  c->r[3]=c->r[3]+0x00000030u; // 800CAAE0
  f_8003A994(c); return; // 800CAAE4
  return; // 800CAAE8
}

// fn_800CAAEC
void f_800CAAEC(Ctx* __restrict c) {
  trace_call(0x800CAAECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAAEC
  c->r[0]=c->lr; // 800CAAF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAAF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAAF8
  c->r[31]=c->r[3]|c->r[3]; // 800CAAFC
  c->lr=0x800CAB04u; f_800CA5D8(c); // 800CAB00
  c->r[3]=0u+0x00000000u; // 800CAB04
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAB08
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAB0C
  c->r[0]=0u+0x00000001u; // 800CAB10
  W32(c->r[31]+0x00000028u,c->r[3]); // 800CAB14
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800CAB18
  W32(c->r[31]+0x00000030u,c->r[3]); // 800CAB1C
  W32(c->r[31]+0x00000038u,c->r[3]); // 800CAB20
  W32(c->r[31]+0x00000034u,c->r[3]); // 800CAB24
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 800CAB28
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 800CAB2C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800CAB30
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800CAB34
  W32(c->r[31]+0x00000028u,c->r[3]); // 800CAB38
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800CAB3C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800CAB40
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800CAB44
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 800CAB48
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800CAB4C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800CAB50
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800CAB54
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800CAB58
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[1]);} // 800CAB5C
  W8(c->r[31]+0x00000070u,c->r[0]); // 800CAB60
  W32(c->r[31]+0x00000074u,c->r[3]); // 800CAB64
  W8(c->r[31]+0x00000078u,c->r[3]); // 800CAB68
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 800CAB6C
  W16(c->r[31]+0x00000080u,c->r[3]); // 800CAB70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAB74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAB78
  c->lr=c->r[0]; // 800CAB7C
  c->r[1]=c->r[1]+0x00000010u; // 800CAB80
  return; // 800CAB84
}

// fn_800CAB88
void f_800CAB88(Ctx* __restrict c) {
  trace_call(0x800CAB88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAB88
  c->r[0]=c->lr; // 800CAB8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAB90
  c->r[11]=c->r[1]+0x00000020u; // 800CAB94
  c->lr=0x800CAB9Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CAB98
  c->r[29]=c->r[3]|c->r[3]; // 800CAB9C
  c->r[30]=c->r[4]|c->r[4]; // 800CABA0
  c->r[31]=c->r[5]|c->r[5]; // 800CABA4
  c->r[6]=0u+0x00000000u; // 800CABA8
  c->lr=0x800CABB0u; f_800CA5EC(c); // 800CABAC
  cmps(c,0,(int32_t)c->r[31],0); // 800CABB0
  if (crb(c,2)) { goto L_800CABBC; } // 800CABB4
  goto L_800CABC0; // 800CABB8
L_800CABBC:;
  c->r[31]=c->r[29]|c->r[29]; // 800CABBC
L_800CABC0:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800CABC0
  c->r[3]=c->r[31]+0x00000030u; // 800CABC4
  W32(c->r[31]+0x00000028u,c->r[0]); // 800CABC8
  c->r[4]=c->r[30]+0x00000030u; // 800CABCC
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800CABD0
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800CABD4
  c->lr=0x800CABDCu; f_8003AB48(c); // 800CABD8
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800CABDC
  c->r[11]=c->r[1]+0x00000020u; // 800CABE0
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800CABE4
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CABE8
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800CABEC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CABF0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800CABF4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CABF8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800CABFC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAC00
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800CAC04
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAC08
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800CAC0C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAC10
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800CAC14
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAC18
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800CAC1C
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAC20
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800CAC24
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAC28
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800CAC2C
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAC30
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CAC34
  c->r[0]=R8(c->r[30]+0x00000070u); // 800CAC38
  W8(c->r[31]+0x00000070u,c->r[0]); // 800CAC3C
  c->r[0]=R32(c->r[30]+0x00000074u); // 800CAC40
  W32(c->r[31]+0x00000074u,c->r[0]); // 800CAC44
  c->r[0]=R8(c->r[30]+0x00000078u); // 800CAC48
  W8(c->r[31]+0x00000078u,c->r[0]); // 800CAC4C
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800CAC50
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 800CAC54
  c->r[0]=R16(c->r[30]+0x00000080u); // 800CAC58
  W16(c->r[31]+0x00000080u,c->r[0]); // 800CAC5C
  c->lr=0x800CAC64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CAC60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CAC64
  c->lr=c->r[0]; // 800CAC68
  c->r[1]=c->r[1]+0x00000020u; // 800CAC6C
  return; // 800CAC70
}

// fn_800CAC74
void f_800CAC74(Ctx* __restrict c) {
  trace_call(0x800CAC74u);
  c->r[3]=0u+0x1E2D0000u; // 800CAC74
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CAC78
  c->r[0]=c->r[4]-c->r[0]; // 800CAC7C
  c->r[0]=cntlz(c->r[0]); // 800CAC80
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CAC84
  return; // 800CAC88
}

// fn_800CAC8C
void f_800CAC8C(Ctx* __restrict c) {
  trace_call(0x800CAC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAC8C
  c->r[0]=c->lr; // 800CAC90
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CAC94
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800CAC98
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800CAC9C
  c->r[11]=c->r[1]+0x00000030u; // 800CACA0
  c->lr=0x800CACA8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CACA4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CACA8
  c->f[31]=c->f[1]; // 800CACAC
  {uint32_t ea=c->r[5]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CACB0
  c->r[29]=c->r[3]|c->r[3]; // 800CACB4
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 800CACB8
  {uint32_t ea=c->r[4]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CACBC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CACC0
  c->f[2]=c->f[31]; // 800CACC4
  c->r[30]=c->r[4]|c->r[4]; // 800CACC8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800CACCC
  c->r[31]=c->r[5]|c->r[5]; // 800CACD0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800CACD4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800CACD8
  {uint32_t ea=c->r[4]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CACDC
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CACE0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800CACE4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CACE8
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800CACEC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800CACF0
  {uint32_t ea=c->r[4]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CACF4
  c->r[4]=c->r[4]+0x0000004Cu; // 800CACF8
  {uint32_t ea=c->r[5]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CACFC
  c->r[5]=c->r[5]+0x0000004Cu; // 800CAD00
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800CAD04
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CAD08
  c->f[1]=c->f[4]; // 800CAD0C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800CAD10
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800CAD14
  c->r[3]=c->r[3]+0x0000004Cu; // 800CAD18
  c->lr=0x800CAD20u; f_8025E410(c); // 800CAD1C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAD20
  c->f[2]=c->f[31]; // 800CAD24
  c->r[3]=c->r[29]+0x0000005Cu; // 800CAD28
  c->r[4]=c->r[30]+0x0000005Cu; // 800CAD2C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800CAD30
  c->r[5]=c->r[31]+0x0000005Cu; // 800CAD34
  c->lr=0x800CAD3Cu; f_8025E410(c); // 800CAD38
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAD3C
  c->r[0]=0u+0x43300000u; // 800CAD40
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAD44
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 800CAD48
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAD4C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CAD50
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CAD54
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[2]=RF64(ea);} // 800CAD58
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800CAD5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CAD60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CAD64
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CAD68
  c->r[3]=R16(c->r[30]+0x00000080u); // 800CAD6C
  c->r[0]=R16(c->r[31]+0x00000080u); // 800CAD70
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800CAD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAD78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800CAD7C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800CAD80
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800CAD84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800CAD88
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800CAD8C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CAD90
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CAD94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CAD98
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800CAD9C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800CADA0
  W16(c->r[29]+0x00000080u,c->r[0]); // 800CADA4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800CADA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800CADAC
  c->r[11]=c->r[1]+0x00000030u; // 800CADB0
  c->lr=0x800CADB8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CADB4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CADB8
  c->lr=c->r[0]; // 800CADBC
  c->r[1]=c->r[1]+0x00000040u; // 800CADC0
  return; // 800CADC4
}

// fn_800CADC8
void f_800CADC8(Ctx* __restrict c) {
  trace_call(0x800CADC8u);
  c->r[3]=0u+0x00000084u; // 800CADC8
  return; // 800CADCC
}

// fn_800CADD0
void f_800CADD0(Ctx* __restrict c) {
  trace_call(0x800CADD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CADD0
  c->r[0]=c->lr; // 800CADD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CADD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CADDC
  c->r[31]=c->r[3]|c->r[3]; // 800CADE0
  c->lr=0x800CADE8u; f_800CA780(c); // 800CADE4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CADE8
  c->r[3]=0u+0x80420000u; // 800CADEC
  c->r[3]=c->r[3]+0xFFFF99B0u; // 800CADF0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CADF4
  c->r[0]=c->r[0]|0x80000000u; // 800CADF8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CADFC
  c->r[3]=c->r[31]|c->r[31]; // 800CAE00
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CAE04
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CAE08
  c->ctr=c->r[12]; // 800CAE0C
  if (true) { c->lr=0x800CAE14u; dispatch(c,c->ctr); } // 800CAE10
  c->r[3]=c->r[31]|c->r[31]; // 800CAE14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAE18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAE1C
  c->lr=c->r[0]; // 800CAE20
  c->r[1]=c->r[1]+0x00000010u; // 800CAE24
  return; // 800CAE28
}

// fn_800CAE2C
void f_800CAE2C(Ctx* __restrict c) {
  trace_call(0x800CAE2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAE2C
  c->r[0]=c->lr; // 800CAE30
  cmps(c,0,(int32_t)c->r[3],0); // 800CAE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAE38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CAE3C
  c->r[30]=c->r[3]|c->r[3]; // 800CAE40
  c->r[31]=c->r[4]|c->r[4]; // 800CAE44
  if (crb(c,2)) { goto L_800CAE68; } // 800CAE48
  if (crb(c,2)) { goto L_800CAE58; } // 800CAE4C
  c->r[4]=0u+0x00000000u; // 800CAE50
  c->lr=0x800CAE58u; f_802B1180(c); // 800CAE54
L_800CAE58:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CAE58
  if (!crb(c,1)) { goto L_800CAE68; } // 800CAE5C
  c->r[3]=c->r[30]|c->r[30]; // 800CAE60
  c->lr=0x800CAE68u; f_80244DC0(c); // 800CAE64
L_800CAE68:;
  c->r[3]=c->r[30]|c->r[30]; // 800CAE68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CAE6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAE70
  c->lr=c->r[0]; // 800CAE74
  c->r[1]=c->r[1]+0x00000010u; // 800CAE78
  return; // 800CAE7C
}

// fn_800CAE80
void f_800CAE80(Ctx* __restrict c) {
  trace_call(0x800CAE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAE80
  c->r[0]=c->lr; // 800CAE84
  c->r[3]=0u+0x00000084u; // 800CAE88
  c->r[4]=c->r[13]+0xFFFFB121u; // 800CAE8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAE90
  c->r[5]=0u+0x00000000u; // 800CAE94
  c->r[6]=0u+0x00001001u; // 800CAE98
  c->lr=0x800CAEA0u; f_80244D20(c); // 800CAE9C
  cmps(c,0,(int32_t)c->r[3],0); // 800CAEA0
  if (crb(c,2)) { goto L_800CAEAC; } // 800CAEA4
  c->lr=0x800CAEACu; f_800CADD0(c); // 800CAEA8
L_800CAEAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAEAC
  c->lr=c->r[0]; // 800CAEB0
  c->r[1]=c->r[1]+0x00000010u; // 800CAEB4
  return; // 800CAEB8
}

// fn_800CAEBC
void f_800CAEBC(Ctx* __restrict c) {
  trace_call(0x800CAEBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAEBC
  c->r[0]=c->lr; // 800CAEC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAEC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAEC8
  c->r[31]=c->r[3]|c->r[3]; // 800CAECC
  c->lr=0x800CAED4u; f_80244520(c); // 800CAED0
  c->r[7]=c->r[3]|c->r[3]; // 800CAED4
  c->r[9]=c->r[31]|c->r[31]; // 800CAED8
  c->r[3]=0u+0x00000084u; // 800CAEDC
  c->r[4]=c->r[13]+0xFFFFB126u; // 800CAEE0
  c->r[5]=0u+0x00000000u; // 800CAEE4
  c->r[6]=0u+0x00002001u; // 800CAEE8
  c->r[8]=0u+0x00000000u; // 800CAEEC
  c->lr=0x800CAEF4u; f_80242DF0(c); // 800CAEF0
  c->r[4]=c->r[3]|c->r[3]; // 800CAEF4
  c->r[3]=0u+0x00000084u; // 800CAEF8
  c->r[5]=c->r[13]+0xFFFFB12Bu; // 800CAEFC
  c->r[6]=0u+0x00000000u; // 800CAF00
  c->r[7]=0u+0x00001001u; // 800CAF04
  c->lr=0x800CAF0Cu; f_80244DB0(c); // 800CAF08
  cmps(c,0,(int32_t)c->r[3],0); // 800CAF0C
  if (crb(c,2)) { goto L_800CAF18; } // 800CAF10
  c->lr=0x800CAF18u; f_800CADD0(c); // 800CAF14
L_800CAF18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAF18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAF1C
  c->lr=c->r[0]; // 800CAF20
  c->r[1]=c->r[1]+0x00000010u; // 800CAF24
  return; // 800CAF28
}

// fn_800CAF2C
void f_800CAF2C(Ctx* __restrict c) {
  trace_call(0x800CAF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAF2C
  c->r[0]=c->lr; // 800CAF30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAF34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAF38
  c->r[31]=c->r[3]|c->r[3]; // 800CAF3C
  c->lr=0x800CAF44u; f_800CA780(c); // 800CAF40
  c->r[7]=0u+0x80420000u; // 800CAF44
  c->r[6]=0u+0x80410000u; // 800CAF48
  c->r[5]=0u+0x00000000u; // 800CAF4C
  c->r[4]=0u+0xE7E60000u; // 800CAF50
  c->r[3]=0u+0x93EB0000u; // 800CAF54
  c->r[7]=c->r[7]+0xFFFF9974u; // 800CAF58
  c->r[0]=c->r[3]+0xFFFFCBE1u; // 800CAF5C
  c->r[6]=c->r[6]+0xFFFFCF15u; // 800CAF60
  c->r[4]=c->r[4]+0x000039EDu; // 800CAF64
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CAF68
  c->r[3]=c->r[31]|c->r[31]; // 800CAF6C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CAF70
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CAF74
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CAF78
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CAF7C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CAF80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAF84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAF88
  c->lr=c->r[0]; // 800CAF8C
  c->r[1]=c->r[1]+0x00000010u; // 800CAF90
  return; // 800CAF94
}

// fn_800CAF98
void f_800CAF98(Ctx* __restrict c) {
  trace_call(0x800CAF98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAF98
  c->r[0]=c->lr; // 800CAF9C
  cmps(c,0,(int32_t)c->r[4],0); // 800CAFA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAFA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CAFA8
  c->r[30]=c->r[3]|c->r[3]; // 800CAFAC
  c->r[31]=c->r[4]|c->r[4]; // 800CAFB0
  if (crb(c,2)) { goto L_800CB008; } // 800CAFB4
  c->r[3]=c->r[31]|c->r[31]; // 800CAFB8
  c->lr=0x800CAFC0u; f_80244520(c); // 800CAFBC
  c->r[7]=c->r[3]|c->r[3]; // 800CAFC0
  c->r[9]=c->r[31]|c->r[31]; // 800CAFC4
  c->r[3]=0u+0x00000084u; // 800CAFC8
  c->r[4]=c->r[13]+0xFFFFB130u; // 800CAFCC
  c->r[5]=0u+0x00000000u; // 800CAFD0
  c->r[6]=0u+0x00002001u; // 800CAFD4
  c->r[8]=0u+0x00000000u; // 800CAFD8
  c->lr=0x800CAFE0u; f_80242DF0(c); // 800CAFDC
  c->r[4]=c->r[3]|c->r[3]; // 800CAFE0
  c->r[3]=0u+0x00000084u; // 800CAFE4
  c->r[5]=c->r[13]+0xFFFFB135u; // 800CAFE8
  c->r[6]=0u+0x00000000u; // 800CAFEC
  c->r[7]=0u+0x00001001u; // 800CAFF0
  c->lr=0x800CAFF8u; f_80244DB0(c); // 800CAFF4
  cmps(c,0,(int32_t)c->r[3],0); // 800CAFF8
  if (crb(c,2)) { goto L_800CB028; } // 800CAFFC
  c->lr=0x800CB004u; f_800CAF2C(c); // 800CB000
  goto L_800CB028; // 800CB004
L_800CB008:;
  c->r[3]=0u+0x00000084u; // 800CB008
  c->r[4]=c->r[13]+0xFFFFB13Au; // 800CB00C
  c->r[5]=0u+0x00000000u; // 800CB010
  c->r[6]=0u+0x00001001u; // 800CB014
  c->lr=0x800CB01Cu; f_80244D20(c); // 800CB018
  cmps(c,0,(int32_t)c->r[3],0); // 800CB01C
  if (crb(c,2)) { goto L_800CB028; } // 800CB020
  c->lr=0x800CB028u; f_800CAF2C(c); // 800CB024
L_800CB028:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CB028
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CB02C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CB030
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB034
  c->lr=c->r[0]; // 800CB038
  c->r[1]=c->r[1]+0x00000010u; // 800CB03C
  return; // 800CB040
}

// fn_800CB044
void f_800CB044(Ctx* __restrict c) {
  trace_call(0x800CB044u);
  f_800CA894(c); return; // 800CB044
}

// fn_800CB048
void f_800CB048(Ctx* __restrict c) {
  trace_call(0x800CB048u);
  return; // 800CB048
}

// fn_800CB04C
void f_800CB04C(Ctx* __restrict c) {
  trace_call(0x800CB04Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 800CB04C
  if (!crb(c,2)) return; // 800CB050
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CB054
  cmps(c,0,(int32_t)c->r[0],7); // 800CB058
  if (!crb(c,0)) return; // 800CB05C
  c->r[4]=c->r[5]|c->r[5]; // 800CB060
  c->r[3]=c->r[3]+0x00000030u; // 800CB064
  f_8003A994(c); return; // 800CB068
  return; // 800CB06C
}

// fn_800CB070
void f_800CB070(Ctx* __restrict c) {
  trace_call(0x800CB070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB070
  c->r[0]=c->lr; // 800CB074
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB07C
  c->r[31]=c->r[3]|c->r[3]; // 800CB080
  c->lr=0x800CB088u; f_800CAAEC(c); // 800CB084
  c->r[0]=0u+0x00000000u; // 800CB088
  W8(c->r[31]+0x00000070u,c->r[0]); // 800CB08C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB090
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB094
  c->lr=c->r[0]; // 800CB098
  c->r[1]=c->r[1]+0x00000010u; // 800CB09C
  return; // 800CB0A0
}

// fn_800CB0A4
void f_800CB0A4(Ctx* __restrict c) {
  trace_call(0x800CB0A4u);
  c->r[6]=0u+0x00000000u; // 800CB0A4
  f_800CAB88(c); return; // 800CB0A8
}

// fn_800CB0AC
void f_800CB0AC(Ctx* __restrict c) {
  trace_call(0x800CB0ACu);
  c->r[0]=c->r[4]+0xE4650000u; // 800CB0AC
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CB0B0
  if (!crb(c,2)) { goto L_800CB0C0; } // 800CB0B4
  c->r[3]=0u+0x00000001u; // 800CB0B8
  return; // 800CB0BC
L_800CB0C0:;
  c->r[3]=0u+0x1E2D0000u; // 800CB0C0
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CB0C4
  c->r[0]=c->r[4]-c->r[0]; // 800CB0C8
  c->r[0]=cntlz(c->r[0]); // 800CB0CC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CB0D0
  return; // 800CB0D4
}

// fn_800CB0D8
void f_800CB0D8(Ctx* __restrict c) {
  trace_call(0x800CB0D8u);
  f_800CAC8C(c); return; // 800CB0D8
}

// fn_800CB0DC
void f_800CB0DC(Ctx* __restrict c) {
  trace_call(0x800CB0DCu);
  c->r[3]=0u+0x00000084u; // 800CB0DC
  return; // 800CB0E0
}

// fn_800CB0E4
void f_800CB0E4(Ctx* __restrict c) {
  trace_call(0x800CB0E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB0E4
  c->r[0]=c->lr; // 800CB0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB0EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB0F0
  c->r[31]=c->r[3]|c->r[3]; // 800CB0F4
  c->lr=0x800CB0FCu; f_800CAF2C(c); // 800CB0F8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CB0FC
  c->r[3]=0u+0x80420000u; // 800CB100
  c->r[3]=c->r[3]+0xFFFF9934u; // 800CB104
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CB108
  c->r[0]=c->r[0]|0x80000000u; // 800CB10C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CB110
  c->r[3]=c->r[31]|c->r[31]; // 800CB114
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CB118
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CB11C
  c->ctr=c->r[12]; // 800CB120
  if (true) { c->lr=0x800CB128u; dispatch(c,c->ctr); } // 800CB124
  c->r[3]=c->r[31]|c->r[31]; // 800CB128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB12C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB130
  c->lr=c->r[0]; // 800CB134
  c->r[1]=c->r[1]+0x00000010u; // 800CB138
  return; // 800CB13C
}

// fn_800CB140
void f_800CB140(Ctx* __restrict c) {
  trace_call(0x800CB140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB140
  c->r[0]=c->lr; // 800CB144
  cmps(c,0,(int32_t)c->r[3],0); // 800CB148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB14C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CB150
  c->r[30]=c->r[3]|c->r[3]; // 800CB154
  c->r[31]=c->r[4]|c->r[4]; // 800CB158
  if (crb(c,2)) { goto L_800CB178; } // 800CB15C
  c->r[4]=0u+0x00000000u; // 800CB160
  c->lr=0x800CB168u; f_800CAE2C(c); // 800CB164
  cmps(c,0,(int32_t)c->r[31],0); // 800CB168
  if (!crb(c,1)) { goto L_800CB178; } // 800CB16C
  c->r[3]=c->r[30]|c->r[30]; // 800CB170
  c->lr=0x800CB178u; f_80244DC0(c); // 800CB174
L_800CB178:;
  c->r[3]=c->r[30]|c->r[30]; // 800CB178
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CB17C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB180
  c->lr=c->r[0]; // 800CB184
  c->r[1]=c->r[1]+0x00000010u; // 800CB188
  return; // 800CB18C
}

// fn_800CB190
void f_800CB190(Ctx* __restrict c) {
  trace_call(0x800CB190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB190
  c->r[0]=c->lr; // 800CB194
  c->r[3]=0u+0x00000084u; // 800CB198
  c->r[4]=c->r[13]+0xFFFFB13Fu; // 800CB19C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB1A0
  c->r[5]=0u+0x00000000u; // 800CB1A4
  c->r[6]=0u+0x00001001u; // 800CB1A8
  c->lr=0x800CB1B0u; f_80244D20(c); // 800CB1AC
  cmps(c,0,(int32_t)c->r[3],0); // 800CB1B0
  if (crb(c,2)) { goto L_800CB1BC; } // 800CB1B4
  c->lr=0x800CB1BCu; f_800CB0E4(c); // 800CB1B8
L_800CB1BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB1BC
  c->lr=c->r[0]; // 800CB1C0
  c->r[1]=c->r[1]+0x00000010u; // 800CB1C4
  return; // 800CB1C8
}

// fn_800CB1CC
void f_800CB1CC(Ctx* __restrict c) {
  trace_call(0x800CB1CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB1CC
  c->r[0]=c->lr; // 800CB1D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB1D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB1D8
  c->r[31]=c->r[3]|c->r[3]; // 800CB1DC
  c->lr=0x800CB1E4u; f_80244520(c); // 800CB1E0
  c->r[7]=c->r[3]|c->r[3]; // 800CB1E4
  c->r[9]=c->r[31]|c->r[31]; // 800CB1E8
  c->r[3]=0u+0x00000084u; // 800CB1EC
  c->r[4]=c->r[13]+0xFFFFB144u; // 800CB1F0
  c->r[5]=0u+0x00000000u; // 800CB1F4
  c->r[6]=0u+0x00002001u; // 800CB1F8
  c->r[8]=0u+0x00000000u; // 800CB1FC
  c->lr=0x800CB204u; f_80242DF0(c); // 800CB200
  c->r[4]=c->r[3]|c->r[3]; // 800CB204
  c->r[3]=0u+0x00000084u; // 800CB208
  c->r[5]=c->r[13]+0xFFFFB149u; // 800CB20C
  c->r[6]=0u+0x00000000u; // 800CB210
  c->r[7]=0u+0x00001001u; // 800CB214
  c->lr=0x800CB21Cu; f_80244DB0(c); // 800CB218
  cmps(c,0,(int32_t)c->r[3],0); // 800CB21C
  if (crb(c,2)) { goto L_800CB228; } // 800CB220
  c->lr=0x800CB228u; f_800CB0E4(c); // 800CB224
L_800CB228:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB22C
  c->lr=c->r[0]; // 800CB230
  c->r[1]=c->r[1]+0x00000010u; // 800CB234
  return; // 800CB238
}

// fn_800CB23C
void f_800CB23C(Ctx* __restrict c) {
  trace_call(0x800CB23Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB23C
  c->r[0]=c->lr; // 800CB240
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB244
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB248
  c->r[31]=c->r[3]|c->r[3]; // 800CB24C
  c->lr=0x800CB254u; f_800CA780(c); // 800CB250
  c->r[7]=0u+0x80420000u; // 800CB254
  c->r[6]=0u+0x80410000u; // 800CB258
  c->r[5]=0u+0x00000000u; // 800CB25C
  c->r[4]=0u+0x8F1A0000u; // 800CB260
  c->r[3]=0u+0x1B650000u; // 800CB264
  c->r[7]=c->r[7]+0xFFFF98F8u; // 800CB268
  c->r[0]=c->r[3]+0x0000092Fu; // 800CB26C
  c->r[6]=c->r[6]+0xFFFFCF25u; // 800CB270
  c->r[4]=c->r[4]+0xFFFFCA0Eu; // 800CB274
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CB278
  c->r[3]=c->r[31]|c->r[31]; // 800CB27C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CB280
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CB284
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CB288
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CB28C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CB290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB294
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB298
  c->lr=c->r[0]; // 800CB29C
  c->r[1]=c->r[1]+0x00000010u; // 800CB2A0
  return; // 800CB2A4
}

// fn_800CB2A8
void f_800CB2A8(Ctx* __restrict c) {
  trace_call(0x800CB2A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB2A8
  c->r[0]=c->lr; // 800CB2AC
  cmps(c,0,(int32_t)c->r[4],0); // 800CB2B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB2B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CB2B8
  c->r[30]=c->r[3]|c->r[3]; // 800CB2BC
  c->r[31]=c->r[4]|c->r[4]; // 800CB2C0
  if (crb(c,2)) { goto L_800CB318; } // 800CB2C4
  c->r[3]=c->r[31]|c->r[31]; // 800CB2C8
  c->lr=0x800CB2D0u; f_80244520(c); // 800CB2CC
  c->r[7]=c->r[3]|c->r[3]; // 800CB2D0
  c->r[9]=c->r[31]|c->r[31]; // 800CB2D4
  c->r[3]=0u+0x0000009Cu; // 800CB2D8
  c->r[4]=c->r[13]+0xFFFFB14Eu; // 800CB2DC
  c->r[5]=0u+0x00000000u; // 800CB2E0
  c->r[6]=0u+0x00002001u; // 800CB2E4
  c->r[8]=0u+0x00000000u; // 800CB2E8
  c->lr=0x800CB2F0u; f_80242DF0(c); // 800CB2EC
  c->r[4]=c->r[3]|c->r[3]; // 800CB2F0
  c->r[3]=0u+0x0000009Cu; // 800CB2F4
  c->r[5]=c->r[13]+0xFFFFB153u; // 800CB2F8
  c->r[6]=0u+0x00000000u; // 800CB2FC
  c->r[7]=0u+0x00001001u; // 800CB300
  c->lr=0x800CB308u; f_80244DB0(c); // 800CB304
  cmps(c,0,(int32_t)c->r[3],0); // 800CB308
  if (crb(c,2)) { goto L_800CB338; } // 800CB30C
  c->lr=0x800CB314u; f_800CB23C(c); // 800CB310
  goto L_800CB338; // 800CB314
L_800CB318:;
  c->r[3]=0u+0x0000009Cu; // 800CB318
  c->r[4]=c->r[13]+0xFFFFB158u; // 800CB31C
  c->r[5]=0u+0x00000000u; // 800CB320
  c->r[6]=0u+0x00001001u; // 800CB324
  c->lr=0x800CB32Cu; f_80244D20(c); // 800CB328
  cmps(c,0,(int32_t)c->r[3],0); // 800CB32C
  if (crb(c,2)) { goto L_800CB338; } // 800CB330
  c->lr=0x800CB338u; f_800CB23C(c); // 800CB334
L_800CB338:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CB338
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CB33C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CB340
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB344
  c->lr=c->r[0]; // 800CB348
  c->r[1]=c->r[1]+0x00000010u; // 800CB34C
  return; // 800CB350
}

// fn_800CB354
void f_800CB354(Ctx* __restrict c) {
  trace_call(0x800CB354u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB354
  c->r[0]=c->lr; // 800CB358
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB35C
  c->r[11]=c->r[1]+0x00000020u; // 800CB360
  c->lr=0x800CB368u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB364
  c->r[29]=c->r[3]|c->r[3]; // 800CB368
  c->r[30]=c->r[4]|c->r[4]; // 800CB36C
  c->lr=0x800CB374u; f_800CA894(c); // 800CB370
  c->r[31]=c->r[3]|c->r[3]; // 800CB374
  c->r[3]=c->r[30]|c->r[30]; // 800CB378
  c->lr=0x800CB380u; f_8030C0A0(c); // 800CB37C
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CB380
  c->r[3]=c->r[30]|c->r[30]; // 800CB384
  c->lr=0x800CB38Cu; f_8030C0A0(c); // 800CB388
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800CB38C
  c->r[3]=c->r[30]|c->r[30]; // 800CB390
  c->lr=0x800CB398u; f_8030C0A0(c); // 800CB394
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB398
  c->r[3]=c->r[30]|c->r[30]; // 800CB39C
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[1]);} // 800CB3A0
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 800CB3A4
  c->lr=0x800CB3ACu; f_8030BD1C(c); // 800CB3A8
  W32(c->r[29]+0x00000094u,c->r[3]); // 800CB3AC
  c->r[3]=c->r[30]|c->r[30]; // 800CB3B0
  c->lr=0x800CB3B8u; f_8030BD1C(c); // 800CB3B4
  W32(c->r[29]+0x00000098u,c->r[3]); // 800CB3B8
  c->r[11]=c->r[1]+0x00000020u; // 800CB3BC
  c->r[3]=c->r[31]|c->r[31]; // 800CB3C0
  c->lr=0x800CB3C8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB3C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB3C8
  c->lr=c->r[0]; // 800CB3CC
  c->r[1]=c->r[1]+0x00000020u; // 800CB3D0
  return; // 800CB3D4
}

// fn_800CB3D8
void f_800CB3D8(Ctx* __restrict c) {
  trace_call(0x800CB3D8u);
  return; // 800CB3D8
}

// fn_800CB3DC
void f_800CB3DC(Ctx* __restrict c) {
  trace_call(0x800CB3DCu);
  cmps(c,0,(int32_t)c->r[6],0); // 800CB3DC
  if (!crb(c,2)) return; // 800CB3E0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CB3E4
  cmps(c,0,(int32_t)c->r[0],7); // 800CB3E8
  if (!crb(c,0)) return; // 800CB3EC
  c->r[4]=c->r[5]|c->r[5]; // 800CB3F0
  c->r[3]=c->r[3]+0x00000030u; // 800CB3F4
  f_8003A994(c); return; // 800CB3F8
  return; // 800CB3FC
}

// fn_800CB400
void f_800CB400(Ctx* __restrict c) {
  trace_call(0x800CB400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB400
  c->r[0]=c->lr; // 800CB404
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB40C
  c->r[31]=c->r[3]|c->r[3]; // 800CB410
  c->lr=0x800CB418u; f_800CAAEC(c); // 800CB414
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB418
  c->r[0]=0u+0x00000000u; // 800CB41C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB420
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 800CB424
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800CB428
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[1]);} // 800CB42C
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 800CB430
  W32(c->r[31]+0x00000094u,c->r[0]); // 800CB434
  W32(c->r[31]+0x00000098u,c->r[0]); // 800CB438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB43C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB440
  c->lr=c->r[0]; // 800CB444
  c->r[1]=c->r[1]+0x00000010u; // 800CB448
  return; // 800CB44C
}

// fn_800CB450
void f_800CB450(Ctx* __restrict c) {
  trace_call(0x800CB450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB450
  c->r[0]=c->lr; // 800CB454
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB458
  c->r[11]=c->r[1]+0x00000020u; // 800CB45C
  c->lr=0x800CB464u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB460
  c->r[29]=c->r[3]|c->r[3]; // 800CB464
  c->r[30]=c->r[4]|c->r[4]; // 800CB468
  c->r[31]=c->r[5]|c->r[5]; // 800CB46C
  c->r[6]=0u+0x00000000u; // 800CB470
  c->lr=0x800CB478u; f_800CAB88(c); // 800CB474
  cmps(c,0,(int32_t)c->r[31],0); // 800CB478
  if (crb(c,2)) { goto L_800CB484; } // 800CB47C
  goto L_800CB488; // 800CB480
L_800CB484:;
  c->r[31]=c->r[29]|c->r[29]; // 800CB484
L_800CB488:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB488
  c->r[11]=c->r[1]+0x00000020u; // 800CB48C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CB490
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB494
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CB498
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB49C
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800CB4A0
  c->r[0]=R32(c->r[30]+0x00000094u); // 800CB4A4
  W32(c->r[31]+0x00000094u,c->r[0]); // 800CB4A8
  c->r[0]=R32(c->r[30]+0x00000098u); // 800CB4AC
  W32(c->r[31]+0x00000098u,c->r[0]); // 800CB4B0
  c->lr=0x800CB4B8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB4B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB4B8
  c->lr=c->r[0]; // 800CB4BC
  c->r[1]=c->r[1]+0x00000020u; // 800CB4C0
  return; // 800CB4C4
}

// fn_800CB4C8
void f_800CB4C8(Ctx* __restrict c) {
  trace_call(0x800CB4C8u);
  c->r[0]=c->r[4]+0xE4650000u; // 800CB4C8
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CB4CC
  if (!crb(c,2)) { goto L_800CB4DC; } // 800CB4D0
  c->r[3]=0u+0x00000001u; // 800CB4D4
  return; // 800CB4D8
L_800CB4DC:;
  c->r[3]=0u+0x1E2D0000u; // 800CB4DC
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CB4E0
  c->r[0]=c->r[4]-c->r[0]; // 800CB4E4
  c->r[0]=cntlz(c->r[0]); // 800CB4E8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CB4EC
  return; // 800CB4F0
}

// fn_800CB4F4
void f_800CB4F4(Ctx* __restrict c) {
  trace_call(0x800CB4F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB4F4
  c->r[0]=c->lr; // 800CB4F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CB4FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CB500
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CB504
  c->r[11]=c->r[1]+0x00000020u; // 800CB508
  c->lr=0x800CB510u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB50C
  c->f[31]=c->f[1]; // 800CB510
  c->r[29]=c->r[3]|c->r[3]; // 800CB514
  c->r[31]=c->r[4]|c->r[4]; // 800CB518
  c->r[30]=c->r[5]|c->r[5]; // 800CB51C
  c->lr=0x800CB524u; f_800CAC8C(c); // 800CB520
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB524
  c->f[2]=c->f[31]; // 800CB528
  c->r[3]=c->r[29]+0x00000084u; // 800CB52C
  c->r[4]=c->r[31]+0x00000084u; // 800CB530
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800CB534
  c->r[5]=c->r[30]+0x00000084u; // 800CB538
  c->lr=0x800CB540u; f_8025E410(c); // 800CB53C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CB540
  c->r[11]=c->r[1]+0x00000020u; // 800CB544
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CB548
  c->lr=0x800CB550u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB54C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CB550
  c->lr=c->r[0]; // 800CB554
  c->r[1]=c->r[1]+0x00000030u; // 800CB558
  return; // 800CB55C
}

// fn_800CB560
void f_800CB560(Ctx* __restrict c) {
  trace_call(0x800CB560u);
  c->r[3]=0u+0x0000009Cu; // 800CB560
  return; // 800CB564
}

// fn_800CB568
void f_800CB568(Ctx* __restrict c) {
  trace_call(0x800CB568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB568
  c->r[0]=c->lr; // 800CB56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB574
  c->r[31]=c->r[3]|c->r[3]; // 800CB578
  c->lr=0x800CB580u; f_800CB23C(c); // 800CB57C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CB580
  c->r[3]=0u+0x80420000u; // 800CB584
  c->r[3]=c->r[3]+0xFFFF98B8u; // 800CB588
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CB58C
  c->r[0]=c->r[0]|0x80000000u; // 800CB590
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CB594
  c->r[3]=c->r[31]|c->r[31]; // 800CB598
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CB59C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CB5A0
  c->ctr=c->r[12]; // 800CB5A4
  if (true) { c->lr=0x800CB5ACu; dispatch(c,c->ctr); } // 800CB5A8
  c->r[3]=c->r[31]|c->r[31]; // 800CB5AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB5B4
  c->lr=c->r[0]; // 800CB5B8
  c->r[1]=c->r[1]+0x00000010u; // 800CB5BC
  return; // 800CB5C0
}

// fn_800CB5C4
void f_800CB5C4(Ctx* __restrict c) {
  trace_call(0x800CB5C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB5C4
  c->r[0]=c->lr; // 800CB5C8
  cmps(c,0,(int32_t)c->r[3],0); // 800CB5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB5D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CB5D4
  c->r[30]=c->r[3]|c->r[3]; // 800CB5D8
  c->r[31]=c->r[4]|c->r[4]; // 800CB5DC
  if (crb(c,2)) { goto L_800CB5FC; } // 800CB5E0
  c->r[4]=0u+0x00000000u; // 800CB5E4
  c->lr=0x800CB5ECu; f_800CAE2C(c); // 800CB5E8
  cmps(c,0,(int32_t)c->r[31],0); // 800CB5EC
  if (!crb(c,1)) { goto L_800CB5FC; } // 800CB5F0
  c->r[3]=c->r[30]|c->r[30]; // 800CB5F4
  c->lr=0x800CB5FCu; f_80244DC0(c); // 800CB5F8
L_800CB5FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800CB5FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CB600
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB604
  c->lr=c->r[0]; // 800CB608
  c->r[1]=c->r[1]+0x00000010u; // 800CB60C
  return; // 800CB610
}

// fn_800CB614
void f_800CB614(Ctx* __restrict c) {
  trace_call(0x800CB614u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB614
  c->r[0]=c->lr; // 800CB618
  c->r[3]=0u+0x0000009Cu; // 800CB61C
  c->r[4]=c->r[13]+0xFFFFB15Du; // 800CB620
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB624
  c->r[5]=0u+0x00000000u; // 800CB628
  c->r[6]=0u+0x00001001u; // 800CB62C
  c->lr=0x800CB634u; f_80244D20(c); // 800CB630
  cmps(c,0,(int32_t)c->r[3],0); // 800CB634
  if (crb(c,2)) { goto L_800CB640; } // 800CB638
  c->lr=0x800CB640u; f_800CB568(c); // 800CB63C
L_800CB640:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB640
  c->lr=c->r[0]; // 800CB644
  c->r[1]=c->r[1]+0x00000010u; // 800CB648
  return; // 800CB64C
}

// fn_800CB650
void f_800CB650(Ctx* __restrict c) {
  trace_call(0x800CB650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB650
  c->r[0]=c->lr; // 800CB654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB65C
  c->r[31]=c->r[3]|c->r[3]; // 800CB660
  c->lr=0x800CB668u; f_80244520(c); // 800CB664
  c->r[7]=c->r[3]|c->r[3]; // 800CB668
  c->r[9]=c->r[31]|c->r[31]; // 800CB66C
  c->r[3]=0u+0x0000009Cu; // 800CB670
  c->r[4]=c->r[13]+0xFFFFB162u; // 800CB674
  c->r[5]=0u+0x00000000u; // 800CB678
  c->r[6]=0u+0x00002001u; // 800CB67C
  c->r[8]=0u+0x00000000u; // 800CB680
  c->lr=0x800CB688u; f_80242DF0(c); // 800CB684
  c->r[4]=c->r[3]|c->r[3]; // 800CB688
  c->r[3]=0u+0x0000009Cu; // 800CB68C
  c->r[5]=c->r[13]+0xFFFFB167u; // 800CB690
  c->r[6]=0u+0x00000000u; // 800CB694
  c->r[7]=0u+0x00001001u; // 800CB698
  c->lr=0x800CB6A0u; f_80244DB0(c); // 800CB69C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB6A0
  if (crb(c,2)) { goto L_800CB6AC; } // 800CB6A4
  c->lr=0x800CB6ACu; f_800CB568(c); // 800CB6A8
L_800CB6AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB6AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB6B0
  c->lr=c->r[0]; // 800CB6B4
  c->r[1]=c->r[1]+0x00000010u; // 800CB6B8
  return; // 800CB6BC
}

// fn_800CB6C0
void f_800CB6C0(Ctx* __restrict c) {
  trace_call(0x800CB6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB6C0
  c->r[0]=c->lr; // 800CB6C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB6C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB6CC
  c->r[31]=c->r[3]|c->r[3]; // 800CB6D0
  c->lr=0x800CB6D8u; f_800CA780(c); // 800CB6D4
  c->r[7]=0u+0x80420000u; // 800CB6D8
  c->r[6]=0u+0x80410000u; // 800CB6DC
  c->r[5]=0u+0x00000000u; // 800CB6E0
  c->r[4]=0u+0x33040000u; // 800CB6E4
  c->r[3]=0u+0xBF410000u; // 800CB6E8
  c->r[7]=c->r[7]+0xFFFF987Cu; // 800CB6EC
  c->r[0]=c->r[3]+0xFFFFB1A7u; // 800CB6F0
  c->r[6]=c->r[6]+0xFFFFCF30u; // 800CB6F4
  c->r[4]=c->r[4]+0xFFFFE2D7u; // 800CB6F8
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CB6FC
  c->r[3]=c->r[31]|c->r[31]; // 800CB700
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CB704
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CB708
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CB70C
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CB710
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CB714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB718
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB71C
  c->lr=c->r[0]; // 800CB720
  c->r[1]=c->r[1]+0x00000010u; // 800CB724
  return; // 800CB728
}

// fn_800CB72C
void f_800CB72C(Ctx* __restrict c) {
  trace_call(0x800CB72Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB72C
  c->r[0]=c->lr; // 800CB730
  cmps(c,0,(int32_t)c->r[4],0); // 800CB734
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB738
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CB73C
  c->r[30]=c->r[3]|c->r[3]; // 800CB740
  c->r[31]=c->r[4]|c->r[4]; // 800CB744
  if (crb(c,2)) { goto L_800CB79C; } // 800CB748
  c->r[3]=c->r[31]|c->r[31]; // 800CB74C
  c->lr=0x800CB754u; f_80244520(c); // 800CB750
  c->r[7]=c->r[3]|c->r[3]; // 800CB754
  c->r[9]=c->r[31]|c->r[31]; // 800CB758
  c->r[3]=0u+0x00000094u; // 800CB75C
  c->r[4]=c->r[13]+0xFFFFB16Cu; // 800CB760
  c->r[5]=0u+0x00000000u; // 800CB764
  c->r[6]=0u+0x00002001u; // 800CB768
  c->r[8]=0u+0x00000000u; // 800CB76C
  c->lr=0x800CB774u; f_80242DF0(c); // 800CB770
  c->r[4]=c->r[3]|c->r[3]; // 800CB774
  c->r[3]=0u+0x00000094u; // 800CB778
  c->r[5]=c->r[13]+0xFFFFB171u; // 800CB77C
  c->r[6]=0u+0x00000000u; // 800CB780
  c->r[7]=0u+0x00001001u; // 800CB784
  c->lr=0x800CB78Cu; f_80244DB0(c); // 800CB788
  cmps(c,0,(int32_t)c->r[3],0); // 800CB78C
  if (crb(c,2)) { goto L_800CB7BC; } // 800CB790
  c->lr=0x800CB798u; f_800CB6C0(c); // 800CB794
  goto L_800CB7BC; // 800CB798
L_800CB79C:;
  c->r[3]=0u+0x00000094u; // 800CB79C
  c->r[4]=c->r[13]+0xFFFFB176u; // 800CB7A0
  c->r[5]=0u+0x00000000u; // 800CB7A4
  c->r[6]=0u+0x00001001u; // 800CB7A8
  c->lr=0x800CB7B0u; f_80244D20(c); // 800CB7AC
  cmps(c,0,(int32_t)c->r[3],0); // 800CB7B0
  if (crb(c,2)) { goto L_800CB7BC; } // 800CB7B4
  c->lr=0x800CB7BCu; f_800CB6C0(c); // 800CB7B8
L_800CB7BC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CB7BC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CB7C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CB7C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB7C8
  c->lr=c->r[0]; // 800CB7CC
  c->r[1]=c->r[1]+0x00000010u; // 800CB7D0
  return; // 800CB7D4
}

// fn_800CB7D8
void f_800CB7D8(Ctx* __restrict c) {
  trace_call(0x800CB7D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB7D8
  c->r[0]=c->lr; // 800CB7DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB7E0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CB7E4
  c->r[29]=c->r[3]|c->r[3]; // 800CB7E8
  c->r[30]=c->r[4]|c->r[4]; // 800CB7EC
  c->lr=0x800CB7F4u; f_800CA894(c); // 800CB7F0
  c->r[31]=c->r[3]|c->r[3]; // 800CB7F4
  c->r[3]=c->r[30]|c->r[30]; // 800CB7F8
  c->lr=0x800CB800u; f_8030C0A0(c); // 800CB7FC
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CB800
  c->r[3]=c->r[30]|c->r[30]; // 800CB804
  c->lr=0x800CB80Cu; f_8030C0A0(c); // 800CB808
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800CB80C
  c->r[3]=c->r[30]|c->r[30]; // 800CB810
  c->lr=0x800CB818u; f_8030BD1C(c); // 800CB814
  W32(c->r[29]+0x0000008Cu,c->r[3]); // 800CB818
  c->r[3]=c->r[30]|c->r[30]; // 800CB81C
  c->lr=0x800CB824u; f_8030BD1C(c); // 800CB820
  W32(c->r[29]+0x00000090u,c->r[3]); // 800CB824
  c->r[3]=c->r[31]|c->r[31]; // 800CB828
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CB82C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB830
  c->lr=c->r[0]; // 800CB834
  c->r[1]=c->r[1]+0x00000020u; // 800CB838
  return; // 800CB83C
}

// fn_800CB840
void f_800CB840(Ctx* __restrict c) {
  trace_call(0x800CB840u);
  return; // 800CB840
}

// fn_800CB844
void f_800CB844(Ctx* __restrict c) {
  trace_call(0x800CB844u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CB844
  if (!crb(c,2)) return; // 800CB848
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CB84C
  cmps(c,0,(int32_t)c->r[0],7); // 800CB850
  if (!crb(c,0)) return; // 800CB854
  c->r[4]=c->r[5]|c->r[5]; // 800CB858
  c->r[3]=c->r[3]+0x00000030u; // 800CB85C
  f_8003A994(c); return; // 800CB860
  return; // 800CB864
}

// fn_800CB868
void f_800CB868(Ctx* __restrict c) {
  trace_call(0x800CB868u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB868
  c->r[0]=c->lr; // 800CB86C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB874
  c->r[31]=c->r[3]|c->r[3]; // 800CB878
  c->lr=0x800CB880u; f_800CAAEC(c); // 800CB87C
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB880
  c->r[3]=0u+0x00000001u; // 800CB884
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB888
  c->r[0]=0u+0x00000000u; // 800CB88C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 800CB890
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CB894
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 800CB898
  W32(c->r[31]+0x00000090u,c->r[0]); // 800CB89C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB8A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB8A4
  c->lr=c->r[0]; // 800CB8A8
  c->r[1]=c->r[1]+0x00000010u; // 800CB8AC
  return; // 800CB8B0
}

// fn_800CB8B4
void f_800CB8B4(Ctx* __restrict c) {
  trace_call(0x800CB8B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB8B4
  c->r[0]=c->lr; // 800CB8B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB8BC
  c->r[11]=c->r[1]+0x00000020u; // 800CB8C0
  c->lr=0x800CB8C8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB8C4
  c->r[29]=c->r[3]|c->r[3]; // 800CB8C8
  c->r[30]=c->r[4]|c->r[4]; // 800CB8CC
  c->r[31]=c->r[5]|c->r[5]; // 800CB8D0
  c->r[6]=0u+0x00000000u; // 800CB8D4
  c->lr=0x800CB8DCu; f_800CAB88(c); // 800CB8D8
  cmps(c,0,(int32_t)c->r[31],0); // 800CB8DC
  if (crb(c,2)) { goto L_800CB8E8; } // 800CB8E0
  goto L_800CB8EC; // 800CB8E4
L_800CB8E8:;
  c->r[31]=c->r[29]|c->r[29]; // 800CB8E8
L_800CB8EC:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB8EC
  c->r[11]=c->r[1]+0x00000020u; // 800CB8F0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CB8F4
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB8F8
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CB8FC
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 800CB900
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 800CB904
  c->r[0]=R32(c->r[30]+0x00000090u); // 800CB908
  W32(c->r[31]+0x00000090u,c->r[0]); // 800CB90C
  c->lr=0x800CB914u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB910
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB914
  c->lr=c->r[0]; // 800CB918
  c->r[1]=c->r[1]+0x00000020u; // 800CB91C
  return; // 800CB920
}

// fn_800CB924
void f_800CB924(Ctx* __restrict c) {
  trace_call(0x800CB924u);
  c->r[0]=c->r[4]+0xE4650000u; // 800CB924
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CB928
  if (!crb(c,2)) { goto L_800CB938; } // 800CB92C
  c->r[3]=0u+0x00000001u; // 800CB930
  return; // 800CB934
L_800CB938:;
  c->r[3]=0u+0x1E2D0000u; // 800CB938
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CB93C
  c->r[0]=c->r[4]-c->r[0]; // 800CB940
  c->r[0]=cntlz(c->r[0]); // 800CB944
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CB948
  return; // 800CB94C
}

// fn_800CB950
void f_800CB950(Ctx* __restrict c) {
  trace_call(0x800CB950u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB950
  c->r[0]=c->lr; // 800CB954
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CB958
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CB95C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CB960
  c->r[11]=c->r[1]+0x00000020u; // 800CB964
  c->lr=0x800CB96Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB968
  c->f[31]=c->f[1]; // 800CB96C
  c->r[29]=c->r[3]|c->r[3]; // 800CB970
  c->r[31]=c->r[4]|c->r[4]; // 800CB974
  c->r[30]=c->r[5]|c->r[5]; // 800CB978
  c->lr=0x800CB980u; f_800CAC8C(c); // 800CB97C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB980
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB984
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CB988
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB98C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CB990
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CB994
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CB998
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 800CB99C
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB9A0
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB9A4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CB9A8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CB9AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CB9B0
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[0]);} // 800CB9B4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CB9B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CB9BC
  c->r[11]=c->r[1]+0x00000020u; // 800CB9C0
  c->lr=0x800CB9C8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB9C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CB9C8
  c->lr=c->r[0]; // 800CB9CC
  c->r[1]=c->r[1]+0x00000030u; // 800CB9D0
  return; // 800CB9D4
}

// fn_800CB9D8
void f_800CB9D8(Ctx* __restrict c) {
  trace_call(0x800CB9D8u);
  c->r[3]=0u+0x00000094u; // 800CB9D8
  return; // 800CB9DC
}

// fn_800CB9E0
void f_800CB9E0(Ctx* __restrict c) {
  trace_call(0x800CB9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB9E0
  c->r[0]=c->lr; // 800CB9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB9EC
  c->r[31]=c->r[3]|c->r[3]; // 800CB9F0
  c->lr=0x800CB9F8u; f_800CB6C0(c); // 800CB9F4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CB9F8
  c->r[3]=0u+0x80420000u; // 800CB9FC
  c->r[3]=c->r[3]+0xFFFF983Cu; // 800CBA00
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CBA04
  c->r[0]=c->r[0]|0x80000000u; // 800CBA08
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CBA0C
  c->r[3]=c->r[31]|c->r[31]; // 800CBA10
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CBA14
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CBA18
  c->ctr=c->r[12]; // 800CBA1C
  if (true) { c->lr=0x800CBA24u; dispatch(c,c->ctr); } // 800CBA20
  c->r[3]=c->r[31]|c->r[31]; // 800CBA24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBA28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBA2C
  c->lr=c->r[0]; // 800CBA30
  c->r[1]=c->r[1]+0x00000010u; // 800CBA34
  return; // 800CBA38
}

// fn_800CBA3C
void f_800CBA3C(Ctx* __restrict c) {
  trace_call(0x800CBA3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBA3C
  c->r[0]=c->lr; // 800CBA40
  cmps(c,0,(int32_t)c->r[3],0); // 800CBA44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBA48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CBA4C
  c->r[30]=c->r[3]|c->r[3]; // 800CBA50
  c->r[31]=c->r[4]|c->r[4]; // 800CBA54
  if (crb(c,2)) { goto L_800CBA74; } // 800CBA58
  c->r[4]=0u+0x00000000u; // 800CBA5C
  c->lr=0x800CBA64u; f_800CAE2C(c); // 800CBA60
  cmps(c,0,(int32_t)c->r[31],0); // 800CBA64
  if (!crb(c,1)) { goto L_800CBA74; } // 800CBA68
  c->r[3]=c->r[30]|c->r[30]; // 800CBA6C
  c->lr=0x800CBA74u; f_80244DC0(c); // 800CBA70
L_800CBA74:;
  c->r[3]=c->r[30]|c->r[30]; // 800CBA74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CBA78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBA7C
  c->lr=c->r[0]; // 800CBA80
  c->r[1]=c->r[1]+0x00000010u; // 800CBA84
  return; // 800CBA88
}

// fn_800CBA8C
void f_800CBA8C(Ctx* __restrict c) {
  trace_call(0x800CBA8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBA8C
  c->r[0]=c->lr; // 800CBA90
  c->r[3]=0u+0x00000094u; // 800CBA94
  c->r[4]=c->r[13]+0xFFFFB17Bu; // 800CBA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBA9C
  c->r[5]=0u+0x00000000u; // 800CBAA0
  c->r[6]=0u+0x00001001u; // 800CBAA4
  c->lr=0x800CBAACu; f_80244D20(c); // 800CBAA8
  cmps(c,0,(int32_t)c->r[3],0); // 800CBAAC
  if (crb(c,2)) { goto L_800CBAB8; } // 800CBAB0
  c->lr=0x800CBAB8u; f_800CB9E0(c); // 800CBAB4
L_800CBAB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBAB8
  c->lr=c->r[0]; // 800CBABC
  c->r[1]=c->r[1]+0x00000010u; // 800CBAC0
  return; // 800CBAC4
}

// fn_800CBAC8
void f_800CBAC8(Ctx* __restrict c) {
  trace_call(0x800CBAC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBAC8
  c->r[0]=c->lr; // 800CBACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBAD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBAD4
  c->r[31]=c->r[3]|c->r[3]; // 800CBAD8
  c->lr=0x800CBAE0u; f_80244520(c); // 800CBADC
  c->r[7]=c->r[3]|c->r[3]; // 800CBAE0
  c->r[9]=c->r[31]|c->r[31]; // 800CBAE4
  c->r[3]=0u+0x00000094u; // 800CBAE8
  c->r[4]=c->r[13]+0xFFFFB180u; // 800CBAEC
  c->r[5]=0u+0x00000000u; // 800CBAF0
  c->r[6]=0u+0x00002001u; // 800CBAF4
  c->r[8]=0u+0x00000000u; // 800CBAF8
  c->lr=0x800CBB00u; f_80242DF0(c); // 800CBAFC
  c->r[4]=c->r[3]|c->r[3]; // 800CBB00
  c->r[3]=0u+0x00000094u; // 800CBB04
  c->r[5]=c->r[13]+0xFFFFB185u; // 800CBB08
  c->r[6]=0u+0x00000000u; // 800CBB0C
  c->r[7]=0u+0x00001001u; // 800CBB10
  c->lr=0x800CBB18u; f_80244DB0(c); // 800CBB14
  cmps(c,0,(int32_t)c->r[3],0); // 800CBB18
  if (crb(c,2)) { goto L_800CBB24; } // 800CBB1C
  c->lr=0x800CBB24u; f_800CB9E0(c); // 800CBB20
L_800CBB24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBB24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBB28
  c->lr=c->r[0]; // 800CBB2C
  c->r[1]=c->r[1]+0x00000010u; // 800CBB30
  return; // 800CBB34
}

// fn_800CBB38
void f_800CBB38(Ctx* __restrict c) {
  trace_call(0x800CBB38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBB38
  c->r[0]=c->lr; // 800CBB3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBB40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBB44
  c->r[31]=c->r[3]|c->r[3]; // 800CBB48
  c->lr=0x800CBB50u; f_800CA780(c); // 800CBB4C
  c->r[7]=0u+0x80420000u; // 800CBB50
  c->r[6]=0u+0x80410000u; // 800CBB54
  c->r[5]=0u+0x00000000u; // 800CBB58
  c->r[4]=0u+0xEF6E0000u; // 800CBB5C
  c->r[3]=0u+0x90D90000u; // 800CBB60
  c->r[7]=c->r[7]+0xFFFF9800u; // 800CBB64
  c->r[0]=c->r[3]+0x00002CEFu; // 800CBB68
  c->r[6]=c->r[6]+0xFFFFCF3Fu; // 800CBB6C
  c->r[4]=c->r[4]+0x00007860u; // 800CBB70
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CBB74
  c->r[3]=c->r[31]|c->r[31]; // 800CBB78
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CBB7C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CBB80
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CBB84
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CBB88
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CBB8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBB90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBB94
  c->lr=c->r[0]; // 800CBB98
  c->r[1]=c->r[1]+0x00000010u; // 800CBB9C
  return; // 800CBBA0
}

// fn_800CBBA4
void f_800CBBA4(Ctx* __restrict c) {
  trace_call(0x800CBBA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBBA4
  c->r[0]=c->lr; // 800CBBA8
  cmps(c,0,(int32_t)c->r[4],0); // 800CBBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBBB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CBBB4
  c->r[30]=c->r[3]|c->r[3]; // 800CBBB8
  c->r[31]=c->r[4]|c->r[4]; // 800CBBBC
  if (crb(c,2)) { goto L_800CBC14; } // 800CBBC0
  c->r[3]=c->r[31]|c->r[31]; // 800CBBC4
  c->lr=0x800CBBCCu; f_80244520(c); // 800CBBC8
  c->r[7]=c->r[3]|c->r[3]; // 800CBBCC
  c->r[9]=c->r[31]|c->r[31]; // 800CBBD0
  c->r[3]=0u+0x00000094u; // 800CBBD4
  c->r[4]=c->r[13]+0xFFFFB18Au; // 800CBBD8
  c->r[5]=0u+0x00000000u; // 800CBBDC
  c->r[6]=0u+0x00002001u; // 800CBBE0
  c->r[8]=0u+0x00000000u; // 800CBBE4
  c->lr=0x800CBBECu; f_80242DF0(c); // 800CBBE8
  c->r[4]=c->r[3]|c->r[3]; // 800CBBEC
  c->r[3]=0u+0x00000094u; // 800CBBF0
  c->r[5]=c->r[13]+0xFFFFB18Fu; // 800CBBF4
  c->r[6]=0u+0x00000000u; // 800CBBF8
  c->r[7]=0u+0x00001001u; // 800CBBFC
  c->lr=0x800CBC04u; f_80244DB0(c); // 800CBC00
  cmps(c,0,(int32_t)c->r[3],0); // 800CBC04
  if (crb(c,2)) { goto L_800CBC34; } // 800CBC08
  c->lr=0x800CBC10u; f_800CBB38(c); // 800CBC0C
  goto L_800CBC34; // 800CBC10
L_800CBC14:;
  c->r[3]=0u+0x00000094u; // 800CBC14
  c->r[4]=c->r[13]+0xFFFFB194u; // 800CBC18
  c->r[5]=0u+0x00000000u; // 800CBC1C
  c->r[6]=0u+0x00001001u; // 800CBC20
  c->lr=0x800CBC28u; f_80244D20(c); // 800CBC24
  cmps(c,0,(int32_t)c->r[3],0); // 800CBC28
  if (crb(c,2)) { goto L_800CBC34; } // 800CBC2C
  c->lr=0x800CBC34u; f_800CBB38(c); // 800CBC30
L_800CBC34:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CBC34
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CBC38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CBC3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBC40
  c->lr=c->r[0]; // 800CBC44
  c->r[1]=c->r[1]+0x00000010u; // 800CBC48
  return; // 800CBC4C
}

// fn_800CBC50
void f_800CBC50(Ctx* __restrict c) {
  trace_call(0x800CBC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBC50
  c->r[0]=c->lr; // 800CBC54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBC58
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CBC5C
  c->r[29]=c->r[3]|c->r[3]; // 800CBC60
  c->r[30]=c->r[4]|c->r[4]; // 800CBC64
  c->lr=0x800CBC6Cu; f_800CA894(c); // 800CBC68
  c->r[31]=c->r[3]|c->r[3]; // 800CBC6C
  c->r[3]=c->r[30]|c->r[30]; // 800CBC70
  c->lr=0x800CBC78u; f_8030C0A0(c); // 800CBC74
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CBC78
  c->r[3]=c->r[30]|c->r[30]; // 800CBC7C
  c->lr=0x800CBC84u; f_8030C0A0(c); // 800CBC80
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800CBC84
  c->r[3]=c->r[30]|c->r[30]; // 800CBC88
  c->lr=0x800CBC90u; f_8030BD1C(c); // 800CBC8C
  W32(c->r[29]+0x0000008Cu,c->r[3]); // 800CBC90
  c->r[3]=c->r[30]|c->r[30]; // 800CBC94
  c->lr=0x800CBC9Cu; f_8030BD1C(c); // 800CBC98
  W32(c->r[29]+0x00000090u,c->r[3]); // 800CBC9C
  c->r[3]=c->r[31]|c->r[31]; // 800CBCA0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CBCA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CBCA8
  c->lr=c->r[0]; // 800CBCAC
  c->r[1]=c->r[1]+0x00000020u; // 800CBCB0
  return; // 800CBCB4
}

// fn_800CBCB8
void f_800CBCB8(Ctx* __restrict c) {
  trace_call(0x800CBCB8u);
  return; // 800CBCB8
}

// fn_800CBCBC
void f_800CBCBC(Ctx* __restrict c) {
  trace_call(0x800CBCBCu);
  cmps(c,0,(int32_t)c->r[6],0); // 800CBCBC
  if (!crb(c,2)) return; // 800CBCC0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CBCC4
  cmps(c,0,(int32_t)c->r[0],7); // 800CBCC8
  if (!crb(c,0)) return; // 800CBCCC
  c->r[4]=c->r[5]|c->r[5]; // 800CBCD0
  c->r[3]=c->r[3]+0x00000030u; // 800CBCD4
  f_8003A994(c); return; // 800CBCD8
  return; // 800CBCDC
}

// fn_800CBCE0
void f_800CBCE0(Ctx* __restrict c) {
  trace_call(0x800CBCE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBCE0
  c->r[0]=c->lr; // 800CBCE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBCE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBCEC
  c->r[31]=c->r[3]|c->r[3]; // 800CBCF0
  c->lr=0x800CBCF8u; f_800CAAEC(c); // 800CBCF4
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBCF8
  c->r[3]=0u+0x00000001u; // 800CBCFC
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBD00
  c->r[0]=0u+0x00000000u; // 800CBD04
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 800CBD08
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CBD0C
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 800CBD10
  W32(c->r[31]+0x00000090u,c->r[0]); // 800CBD14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBD18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBD1C
  c->lr=c->r[0]; // 800CBD20
  c->r[1]=c->r[1]+0x00000010u; // 800CBD24
  return; // 800CBD28
}

// fn_800CBD2C
void f_800CBD2C(Ctx* __restrict c) {
  trace_call(0x800CBD2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBD2C
  c->r[0]=c->lr; // 800CBD30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBD34
  c->r[11]=c->r[1]+0x00000020u; // 800CBD38
  c->lr=0x800CBD40u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CBD3C
  c->r[29]=c->r[3]|c->r[3]; // 800CBD40
  c->r[30]=c->r[4]|c->r[4]; // 800CBD44
  c->r[31]=c->r[5]|c->r[5]; // 800CBD48
  c->r[6]=0u+0x00000000u; // 800CBD4C
  c->lr=0x800CBD54u; f_800CAB88(c); // 800CBD50
  cmps(c,0,(int32_t)c->r[31],0); // 800CBD54
  if (crb(c,2)) { goto L_800CBD60; } // 800CBD58
  goto L_800CBD64; // 800CBD5C
L_800CBD60:;
  c->r[31]=c->r[29]|c->r[29]; // 800CBD60
L_800CBD64:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBD64
  c->r[11]=c->r[1]+0x00000020u; // 800CBD68
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CBD6C
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBD70
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CBD74
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 800CBD78
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 800CBD7C
  c->r[0]=R32(c->r[30]+0x00000090u); // 800CBD80
  W32(c->r[31]+0x00000090u,c->r[0]); // 800CBD84
  c->lr=0x800CBD8Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CBD88
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CBD8C
  c->lr=c->r[0]; // 800CBD90
  c->r[1]=c->r[1]+0x00000020u; // 800CBD94
  return; // 800CBD98
}

// fn_800CBD9C
void f_800CBD9C(Ctx* __restrict c) {
  trace_call(0x800CBD9Cu);
  c->r[0]=c->r[4]+0xE4650000u; // 800CBD9C
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CBDA0
  if (!crb(c,2)) { goto L_800CBDB0; } // 800CBDA4
  c->r[3]=0u+0x00000001u; // 800CBDA8
  return; // 800CBDAC
L_800CBDB0:;
  c->r[3]=0u+0x1E2D0000u; // 800CBDB0
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CBDB4
  c->r[0]=c->r[4]-c->r[0]; // 800CBDB8
  c->r[0]=cntlz(c->r[0]); // 800CBDBC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CBDC0
  return; // 800CBDC4
}

// fn_800CBDC8
void f_800CBDC8(Ctx* __restrict c) {
  trace_call(0x800CBDC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBDC8
  c->r[0]=c->lr; // 800CBDCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CBDD0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CBDD4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CBDD8
  c->r[11]=c->r[1]+0x00000020u; // 800CBDDC
  c->lr=0x800CBDE4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CBDE0
  c->f[31]=c->f[1]; // 800CBDE4
  c->r[29]=c->r[3]|c->r[3]; // 800CBDE8
  c->r[31]=c->r[4]|c->r[4]; // 800CBDEC
  c->r[30]=c->r[5]|c->r[5]; // 800CBDF0
  c->lr=0x800CBDF8u; f_800CAC8C(c); // 800CBDF4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBDF8
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBDFC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CBE00
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBE04
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CBE08
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CBE0C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CBE10
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 800CBE14
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBE18
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBE1C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CBE20
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CBE24
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CBE28
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[0]);} // 800CBE2C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CBE30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CBE34
  c->r[11]=c->r[1]+0x00000020u; // 800CBE38
  c->lr=0x800CBE40u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CBE3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CBE40
  c->lr=c->r[0]; // 800CBE44
  c->r[1]=c->r[1]+0x00000030u; // 800CBE48
  return; // 800CBE4C
}

// fn_800CBE50
void f_800CBE50(Ctx* __restrict c) {
  trace_call(0x800CBE50u);
  c->r[3]=0u+0x00000094u; // 800CBE50
  return; // 800CBE54
}

// fn_800CBE58
void f_800CBE58(Ctx* __restrict c) {
  trace_call(0x800CBE58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBE58
  c->r[0]=c->lr; // 800CBE5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBE60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBE64
  c->r[31]=c->r[3]|c->r[3]; // 800CBE68
  c->lr=0x800CBE70u; f_800CBB38(c); // 800CBE6C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CBE70
  c->r[3]=0u+0x80420000u; // 800CBE74
  c->r[3]=c->r[3]+0xFFFF97C0u; // 800CBE78
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CBE7C
  c->r[0]=c->r[0]|0x80000000u; // 800CBE80
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CBE84
  c->r[3]=c->r[31]|c->r[31]; // 800CBE88
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CBE8C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CBE90
  c->ctr=c->r[12]; // 800CBE94
  if (true) { c->lr=0x800CBE9Cu; dispatch(c,c->ctr); } // 800CBE98
  c->r[3]=c->r[31]|c->r[31]; // 800CBE9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBEA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBEA4
  c->lr=c->r[0]; // 800CBEA8
  c->r[1]=c->r[1]+0x00000010u; // 800CBEAC
  return; // 800CBEB0
}

// fn_800CBEB4
void f_800CBEB4(Ctx* __restrict c) {
  trace_call(0x800CBEB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBEB4
  c->r[0]=c->lr; // 800CBEB8
  cmps(c,0,(int32_t)c->r[3],0); // 800CBEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBEC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CBEC4
  c->r[30]=c->r[3]|c->r[3]; // 800CBEC8
  c->r[31]=c->r[4]|c->r[4]; // 800CBECC
  if (crb(c,2)) { goto L_800CBEEC; } // 800CBED0
  c->r[4]=0u+0x00000000u; // 800CBED4
  c->lr=0x800CBEDCu; f_800CAE2C(c); // 800CBED8
  cmps(c,0,(int32_t)c->r[31],0); // 800CBEDC
  if (!crb(c,1)) { goto L_800CBEEC; } // 800CBEE0
  c->r[3]=c->r[30]|c->r[30]; // 800CBEE4
  c->lr=0x800CBEECu; f_80244DC0(c); // 800CBEE8
L_800CBEEC:;
  c->r[3]=c->r[30]|c->r[30]; // 800CBEEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CBEF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBEF4
  c->lr=c->r[0]; // 800CBEF8
  c->r[1]=c->r[1]+0x00000010u; // 800CBEFC
  return; // 800CBF00
}

// fn_800CBF04
void f_800CBF04(Ctx* __restrict c) {
  trace_call(0x800CBF04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF04
  c->r[0]=c->lr; // 800CBF08
  c->r[3]=0u+0x00000094u; // 800CBF0C
  c->r[4]=c->r[13]+0xFFFFB199u; // 800CBF10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBF14
  c->r[5]=0u+0x00000000u; // 800CBF18
  c->r[6]=0u+0x00001001u; // 800CBF1C
  c->lr=0x800CBF24u; f_80244D20(c); // 800CBF20
  cmps(c,0,(int32_t)c->r[3],0); // 800CBF24
  if (crb(c,2)) { goto L_800CBF30; } // 800CBF28
  c->lr=0x800CBF30u; f_800CBE58(c); // 800CBF2C
L_800CBF30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBF30
  c->lr=c->r[0]; // 800CBF34
  c->r[1]=c->r[1]+0x00000010u; // 800CBF38
  return; // 800CBF3C
}

// fn_800CBF40
void f_800CBF40(Ctx* __restrict c) {
  trace_call(0x800CBF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF40
  c->r[0]=c->lr; // 800CBF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBF48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBF4C
  c->r[31]=c->r[3]|c->r[3]; // 800CBF50
  c->lr=0x800CBF58u; f_80244520(c); // 800CBF54
  c->r[7]=c->r[3]|c->r[3]; // 800CBF58
  c->r[9]=c->r[31]|c->r[31]; // 800CBF5C
  c->r[3]=0u+0x00000094u; // 800CBF60
  c->r[4]=c->r[13]+0xFFFFB19Eu; // 800CBF64
  c->r[5]=0u+0x00000000u; // 800CBF68
  c->r[6]=0u+0x00002001u; // 800CBF6C
  c->r[8]=0u+0x00000000u; // 800CBF70
  c->lr=0x800CBF78u; f_80242DF0(c); // 800CBF74
  c->r[4]=c->r[3]|c->r[3]; // 800CBF78
  c->r[3]=0u+0x00000094u; // 800CBF7C
  c->r[5]=c->r[13]+0xFFFFB1A3u; // 800CBF80
  c->r[6]=0u+0x00000000u; // 800CBF84
  c->r[7]=0u+0x00001001u; // 800CBF88
  c->lr=0x800CBF90u; f_80244DB0(c); // 800CBF8C
  cmps(c,0,(int32_t)c->r[3],0); // 800CBF90
  if (crb(c,2)) { goto L_800CBF9C; } // 800CBF94
  c->lr=0x800CBF9Cu; f_800CBE58(c); // 800CBF98
L_800CBF9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBF9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBFA0
  c->lr=c->r[0]; // 800CBFA4
  c->r[1]=c->r[1]+0x00000010u; // 800CBFA8
  return; // 800CBFAC
}

// fn_800CBFB0
void f_800CBFB0(Ctx* __restrict c) {
  trace_call(0x800CBFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBFB0
  c->r[0]=c->lr; // 800CBFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBFB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBFBC
  c->r[31]=c->r[3]|c->r[3]; // 800CBFC0
  c->lr=0x800CBFC8u; f_800CA780(c); // 800CBFC4
  c->r[7]=0u+0x80420000u; // 800CBFC8
  c->r[6]=0u+0x80410000u; // 800CBFCC
  c->r[5]=0u+0x00000000u; // 800CBFD0
  c->r[4]=0u+0x2F810000u; // 800CBFD4
  c->r[3]=0u+0x8A710000u; // 800CBFD8
  c->r[7]=c->r[7]+0xFFFF9784u; // 800CBFDC
  c->r[0]=c->r[3]+0x00000C98u; // 800CBFE0
  c->r[6]=c->r[6]+0xFFFFCF4Bu; // 800CBFE4
  c->r[4]=c->r[4]+0x00001CBCu; // 800CBFE8
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CBFEC
  c->r[3]=c->r[31]|c->r[31]; // 800CBFF0
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CBFF4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CBFF8
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CBFFC
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CC000
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CC004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC008
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC00C
  c->lr=c->r[0]; // 800CC010
  c->r[1]=c->r[1]+0x00000010u; // 800CC014
  return; // 800CC018
}

// fn_800CC01C
void f_800CC01C(Ctx* __restrict c) {
  trace_call(0x800CC01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC01C
  c->r[0]=c->lr; // 800CC020
  cmps(c,0,(int32_t)c->r[4],0); // 800CC024
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC028
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC02C
  c->r[30]=c->r[3]|c->r[3]; // 800CC030
  c->r[31]=c->r[4]|c->r[4]; // 800CC034
  if (crb(c,2)) { goto L_800CC08C; } // 800CC038
  c->r[3]=c->r[31]|c->r[31]; // 800CC03C
  c->lr=0x800CC044u; f_80244520(c); // 800CC040
  c->r[7]=c->r[3]|c->r[3]; // 800CC044
  c->r[9]=c->r[31]|c->r[31]; // 800CC048
  c->r[3]=0u+0x00000094u; // 800CC04C
  c->r[4]=c->r[13]+0xFFFFB1A8u; // 800CC050
  c->r[5]=0u+0x00000000u; // 800CC054
  c->r[6]=0u+0x00002001u; // 800CC058
  c->r[8]=0u+0x00000000u; // 800CC05C
  c->lr=0x800CC064u; f_80242DF0(c); // 800CC060
  c->r[4]=c->r[3]|c->r[3]; // 800CC064
  c->r[3]=0u+0x00000094u; // 800CC068
  c->r[5]=c->r[13]+0xFFFFB1ADu; // 800CC06C
  c->r[6]=0u+0x00000000u; // 800CC070
  c->r[7]=0u+0x00001001u; // 800CC074
  c->lr=0x800CC07Cu; f_80244DB0(c); // 800CC078
  cmps(c,0,(int32_t)c->r[3],0); // 800CC07C
  if (crb(c,2)) { goto L_800CC0AC; } // 800CC080
  c->lr=0x800CC088u; f_800CBFB0(c); // 800CC084
  goto L_800CC0AC; // 800CC088
L_800CC08C:;
  c->r[3]=0u+0x00000094u; // 800CC08C
  c->r[4]=c->r[13]+0xFFFFB1B2u; // 800CC090
  c->r[5]=0u+0x00000000u; // 800CC094
  c->r[6]=0u+0x00001001u; // 800CC098
  c->lr=0x800CC0A0u; f_80244D20(c); // 800CC09C
  cmps(c,0,(int32_t)c->r[3],0); // 800CC0A0
  if (crb(c,2)) { goto L_800CC0AC; } // 800CC0A4
  c->lr=0x800CC0ACu; f_800CBFB0(c); // 800CC0A8
L_800CC0AC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CC0AC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CC0B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC0B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC0B8
  c->lr=c->r[0]; // 800CC0BC
  c->r[1]=c->r[1]+0x00000010u; // 800CC0C0
  return; // 800CC0C4
}

// fn_800CC0C8
void f_800CC0C8(Ctx* __restrict c) {
  trace_call(0x800CC0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC0C8
  c->r[0]=c->lr; // 800CC0CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC0D0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC0D4
  c->r[29]=c->r[3]|c->r[3]; // 800CC0D8
  c->r[30]=c->r[4]|c->r[4]; // 800CC0DC
  c->lr=0x800CC0E4u; f_800CA894(c); // 800CC0E0
  c->r[31]=c->r[3]|c->r[3]; // 800CC0E4
  c->r[3]=c->r[30]|c->r[30]; // 800CC0E8
  c->lr=0x800CC0F0u; f_8030C0A0(c); // 800CC0EC
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CC0F0
  c->r[3]=c->r[30]|c->r[30]; // 800CC0F4
  c->lr=0x800CC0FCu; f_8030C0A0(c); // 800CC0F8
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800CC0FC
  c->r[3]=c->r[30]|c->r[30]; // 800CC100
  c->lr=0x800CC108u; f_8030BD1C(c); // 800CC104
  W32(c->r[29]+0x0000008Cu,c->r[3]); // 800CC108
  c->r[3]=c->r[30]|c->r[30]; // 800CC10C
  c->lr=0x800CC114u; f_8030BD1C(c); // 800CC110
  W32(c->r[29]+0x00000090u,c->r[3]); // 800CC114
  c->r[3]=c->r[31]|c->r[31]; // 800CC118
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC11C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC120
  c->lr=c->r[0]; // 800CC124
  c->r[1]=c->r[1]+0x00000020u; // 800CC128
  return; // 800CC12C
}

// fn_800CC130
void f_800CC130(Ctx* __restrict c) {
  trace_call(0x800CC130u);
  return; // 800CC130
}

// fn_800CC134
void f_800CC134(Ctx* __restrict c) {
  trace_call(0x800CC134u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CC134
  if (!crb(c,2)) return; // 800CC138
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CC13C
  cmps(c,0,(int32_t)c->r[0],7); // 800CC140
  if (!crb(c,0)) return; // 800CC144
  c->r[4]=c->r[5]|c->r[5]; // 800CC148
  c->r[3]=c->r[3]+0x00000030u; // 800CC14C
  f_8003A994(c); return; // 800CC150
  return; // 800CC154
}

// fn_800CC158
void f_800CC158(Ctx* __restrict c) {
  trace_call(0x800CC158u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC158
  c->r[0]=c->lr; // 800CC15C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC164
  c->r[31]=c->r[3]|c->r[3]; // 800CC168
  c->lr=0x800CC170u; f_800CAAEC(c); // 800CC16C
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC170
  c->r[3]=0u+0x00000001u; // 800CC174
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC178
  c->r[0]=0u+0x00000000u; // 800CC17C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[1]);} // 800CC180
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CC184
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 800CC188
  W32(c->r[31]+0x00000090u,c->r[0]); // 800CC18C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC190
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC194
  c->lr=c->r[0]; // 800CC198
  c->r[1]=c->r[1]+0x00000010u; // 800CC19C
  return; // 800CC1A0
}

// fn_800CC1A4
void f_800CC1A4(Ctx* __restrict c) {
  trace_call(0x800CC1A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC1A4
  c->r[0]=c->lr; // 800CC1A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC1AC
  c->r[11]=c->r[1]+0x00000020u; // 800CC1B0
  c->lr=0x800CC1B8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC1B4
  c->r[29]=c->r[3]|c->r[3]; // 800CC1B8
  c->r[30]=c->r[4]|c->r[4]; // 800CC1BC
  c->r[31]=c->r[5]|c->r[5]; // 800CC1C0
  c->r[6]=0u+0x00000000u; // 800CC1C4
  c->lr=0x800CC1CCu; f_800CAB88(c); // 800CC1C8
  cmps(c,0,(int32_t)c->r[31],0); // 800CC1CC
  if (crb(c,2)) { goto L_800CC1D8; } // 800CC1D0
  goto L_800CC1DC; // 800CC1D4
L_800CC1D8:;
  c->r[31]=c->r[29]|c->r[29]; // 800CC1D8
L_800CC1DC:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC1DC
  c->r[11]=c->r[1]+0x00000020u; // 800CC1E0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CC1E4
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC1E8
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CC1EC
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 800CC1F0
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 800CC1F4
  c->r[0]=R32(c->r[30]+0x00000090u); // 800CC1F8
  W32(c->r[31]+0x00000090u,c->r[0]); // 800CC1FC
  c->lr=0x800CC204u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC200
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC204
  c->lr=c->r[0]; // 800CC208
  c->r[1]=c->r[1]+0x00000020u; // 800CC20C
  return; // 800CC210
}

// fn_800CC214
void f_800CC214(Ctx* __restrict c) {
  trace_call(0x800CC214u);
  c->r[0]=c->r[4]+0xE4650000u; // 800CC214
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CC218
  if (!crb(c,2)) { goto L_800CC228; } // 800CC21C
  c->r[3]=0u+0x00000001u; // 800CC220
  return; // 800CC224
L_800CC228:;
  c->r[3]=0u+0x1E2D0000u; // 800CC228
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CC22C
  c->r[0]=c->r[4]-c->r[0]; // 800CC230
  c->r[0]=cntlz(c->r[0]); // 800CC234
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CC238
  return; // 800CC23C
}

// fn_800CC240
void f_800CC240(Ctx* __restrict c) {
  trace_call(0x800CC240u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC240
  c->r[0]=c->lr; // 800CC244
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CC248
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CC24C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CC250
  c->r[11]=c->r[1]+0x00000020u; // 800CC254
  c->lr=0x800CC25Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC258
  c->f[31]=c->f[1]; // 800CC25C
  c->r[29]=c->r[3]|c->r[3]; // 800CC260
  c->r[31]=c->r[4]|c->r[4]; // 800CC264
  c->r[30]=c->r[5]|c->r[5]; // 800CC268
  c->lr=0x800CC270u; f_800CAC8C(c); // 800CC26C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC270
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC274
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CC278
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC27C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CC280
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CC284
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CC288
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 800CC28C
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC290
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC294
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CC298
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CC29C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CC2A0
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[0]);} // 800CC2A4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CC2A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CC2AC
  c->r[11]=c->r[1]+0x00000020u; // 800CC2B0
  c->lr=0x800CC2B8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC2B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CC2B8
  c->lr=c->r[0]; // 800CC2BC
  c->r[1]=c->r[1]+0x00000030u; // 800CC2C0
  return; // 800CC2C4
}

// fn_800CC2C8
void f_800CC2C8(Ctx* __restrict c) {
  trace_call(0x800CC2C8u);
  c->r[3]=0u+0x00000094u; // 800CC2C8
  return; // 800CC2CC
}

// fn_800CC2D0
void f_800CC2D0(Ctx* __restrict c) {
  trace_call(0x800CC2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC2D0
  c->r[0]=c->lr; // 800CC2D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC2D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC2DC
  c->r[31]=c->r[3]|c->r[3]; // 800CC2E0
  c->lr=0x800CC2E8u; f_800CBFB0(c); // 800CC2E4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CC2E8
  c->r[3]=0u+0x80420000u; // 800CC2EC
  c->r[3]=c->r[3]+0xFFFF9744u; // 800CC2F0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CC2F4
  c->r[0]=c->r[0]|0x80000000u; // 800CC2F8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CC2FC
  c->r[3]=c->r[31]|c->r[31]; // 800CC300
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CC304
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CC308
  c->ctr=c->r[12]; // 800CC30C
  if (true) { c->lr=0x800CC314u; dispatch(c,c->ctr); } // 800CC310
  c->r[3]=c->r[31]|c->r[31]; // 800CC314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC318
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC31C
  c->lr=c->r[0]; // 800CC320
  c->r[1]=c->r[1]+0x00000010u; // 800CC324
  return; // 800CC328
}

// fn_800CC32C
void f_800CC32C(Ctx* __restrict c) {
  trace_call(0x800CC32Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC32C
  c->r[0]=c->lr; // 800CC330
  cmps(c,0,(int32_t)c->r[3],0); // 800CC334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC338
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC33C
  c->r[30]=c->r[3]|c->r[3]; // 800CC340
  c->r[31]=c->r[4]|c->r[4]; // 800CC344
  if (crb(c,2)) { goto L_800CC364; } // 800CC348
  c->r[4]=0u+0x00000000u; // 800CC34C
  c->lr=0x800CC354u; f_800CAE2C(c); // 800CC350
  cmps(c,0,(int32_t)c->r[31],0); // 800CC354
  if (!crb(c,1)) { goto L_800CC364; } // 800CC358
  c->r[3]=c->r[30]|c->r[30]; // 800CC35C
  c->lr=0x800CC364u; f_80244DC0(c); // 800CC360
L_800CC364:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC364
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC368
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC36C
  c->lr=c->r[0]; // 800CC370
  c->r[1]=c->r[1]+0x00000010u; // 800CC374
  return; // 800CC378
}

// fn_800CC37C
void f_800CC37C(Ctx* __restrict c) {
  trace_call(0x800CC37Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC37C
  c->r[0]=c->lr; // 800CC380
  c->r[3]=0u+0x00000094u; // 800CC384
  c->r[4]=c->r[13]+0xFFFFB1B7u; // 800CC388
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC38C
  c->r[5]=0u+0x00000000u; // 800CC390
  c->r[6]=0u+0x00001001u; // 800CC394
  c->lr=0x800CC39Cu; f_80244D20(c); // 800CC398
  cmps(c,0,(int32_t)c->r[3],0); // 800CC39C
  if (crb(c,2)) { goto L_800CC3A8; } // 800CC3A0
  c->lr=0x800CC3A8u; f_800CC2D0(c); // 800CC3A4
L_800CC3A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC3A8
  c->lr=c->r[0]; // 800CC3AC
  c->r[1]=c->r[1]+0x00000010u; // 800CC3B0
  return; // 800CC3B4
}

// fn_800CC3B8
void f_800CC3B8(Ctx* __restrict c) {
  trace_call(0x800CC3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC3B8
  c->r[0]=c->lr; // 800CC3BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC3C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC3C4
  c->r[31]=c->r[3]|c->r[3]; // 800CC3C8
  c->lr=0x800CC3D0u; f_80244520(c); // 800CC3CC
  c->r[7]=c->r[3]|c->r[3]; // 800CC3D0
  c->r[9]=c->r[31]|c->r[31]; // 800CC3D4
  c->r[3]=0u+0x00000094u; // 800CC3D8
  c->r[4]=c->r[13]+0xFFFFB1BCu; // 800CC3DC
  c->r[5]=0u+0x00000000u; // 800CC3E0
  c->r[6]=0u+0x00002001u; // 800CC3E4
  c->r[8]=0u+0x00000000u; // 800CC3E8
  c->lr=0x800CC3F0u; f_80242DF0(c); // 800CC3EC
  c->r[4]=c->r[3]|c->r[3]; // 800CC3F0
  c->r[3]=0u+0x00000094u; // 800CC3F4
  c->r[5]=c->r[13]+0xFFFFB1C1u; // 800CC3F8
  c->r[6]=0u+0x00000000u; // 800CC3FC
  c->r[7]=0u+0x00001001u; // 800CC400
  c->lr=0x800CC408u; f_80244DB0(c); // 800CC404
  cmps(c,0,(int32_t)c->r[3],0); // 800CC408
  if (crb(c,2)) { goto L_800CC414; } // 800CC40C
  c->lr=0x800CC414u; f_800CC2D0(c); // 800CC410
L_800CC414:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC414
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC418
  c->lr=c->r[0]; // 800CC41C
  c->r[1]=c->r[1]+0x00000010u; // 800CC420
  return; // 800CC424
}

// fn_800CC428
void f_800CC428(Ctx* __restrict c) {
  trace_call(0x800CC428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC428
  c->r[0]=c->lr; // 800CC42C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC434
  c->r[31]=c->r[3]|c->r[3]; // 800CC438
  c->lr=0x800CC440u; f_800CA780(c); // 800CC43C
  c->r[7]=0u+0x80420000u; // 800CC440
  c->r[6]=0u+0x80410000u; // 800CC444
  c->r[5]=0u+0x00000000u; // 800CC448
  c->r[4]=0u+0xE7E60000u; // 800CC44C
  c->r[3]=0u+0x98410000u; // 800CC450
  c->r[7]=c->r[7]+0xFFFF9708u; // 800CC454
  c->r[0]=c->r[3]+0x000053E8u; // 800CC458
  c->r[6]=c->r[6]+0xFFFFCF5Bu; // 800CC45C
  c->r[4]=c->r[4]+0x000039EDu; // 800CC460
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CC464
  c->r[3]=c->r[31]|c->r[31]; // 800CC468
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CC46C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CC470
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CC474
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CC478
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CC47C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC480
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC484
  c->lr=c->r[0]; // 800CC488
  c->r[1]=c->r[1]+0x00000010u; // 800CC48C
  return; // 800CC490
}

// fn_800CC494
void f_800CC494(Ctx* __restrict c) {
  trace_call(0x800CC494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC494
  c->r[0]=c->lr; // 800CC498
  cmps(c,0,(int32_t)c->r[4],0); // 800CC49C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC4A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC4A4
  c->r[30]=c->r[3]|c->r[3]; // 800CC4A8
  c->r[31]=c->r[4]|c->r[4]; // 800CC4AC
  if (crb(c,2)) { goto L_800CC504; } // 800CC4B0
  c->r[3]=c->r[31]|c->r[31]; // 800CC4B4
  c->lr=0x800CC4BCu; f_80244520(c); // 800CC4B8
  c->r[7]=c->r[3]|c->r[3]; // 800CC4BC
  c->r[9]=c->r[31]|c->r[31]; // 800CC4C0
  c->r[3]=0u+0x00000084u; // 800CC4C4
  c->r[4]=c->r[13]+0xFFFFB1C6u; // 800CC4C8
  c->r[5]=0u+0x00000000u; // 800CC4CC
  c->r[6]=0u+0x00002001u; // 800CC4D0
  c->r[8]=0u+0x00000000u; // 800CC4D4
  c->lr=0x800CC4DCu; f_80242DF0(c); // 800CC4D8
  c->r[4]=c->r[3]|c->r[3]; // 800CC4DC
  c->r[3]=0u+0x00000084u; // 800CC4E0
  c->r[5]=c->r[13]+0xFFFFB1CBu; // 800CC4E4
  c->r[6]=0u+0x00000000u; // 800CC4E8
  c->r[7]=0u+0x00001001u; // 800CC4EC
  c->lr=0x800CC4F4u; f_80244DB0(c); // 800CC4F0
  cmps(c,0,(int32_t)c->r[3],0); // 800CC4F4
  if (crb(c,2)) { goto L_800CC524; } // 800CC4F8
  c->lr=0x800CC500u; f_800CC428(c); // 800CC4FC
  goto L_800CC524; // 800CC500
L_800CC504:;
  c->r[3]=0u+0x00000084u; // 800CC504
  c->r[4]=c->r[13]+0xFFFFB1D0u; // 800CC508
  c->r[5]=0u+0x00000000u; // 800CC50C
  c->r[6]=0u+0x00001001u; // 800CC510
  c->lr=0x800CC518u; f_80244D20(c); // 800CC514
  cmps(c,0,(int32_t)c->r[3],0); // 800CC518
  if (crb(c,2)) { goto L_800CC524; } // 800CC51C
  c->lr=0x800CC524u; f_800CC428(c); // 800CC520
L_800CC524:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CC524
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CC528
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC52C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC530
  c->lr=c->r[0]; // 800CC534
  c->r[1]=c->r[1]+0x00000010u; // 800CC538
  return; // 800CC53C
}

// fn_800CC540
void f_800CC540(Ctx* __restrict c) {
  trace_call(0x800CC540u);
  f_800CA894(c); return; // 800CC540
}

// fn_800CC544
void f_800CC544(Ctx* __restrict c) {
  trace_call(0x800CC544u);
  return; // 800CC544
}

// fn_800CC548
void f_800CC548(Ctx* __restrict c) {
  trace_call(0x800CC548u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CC548
  if (!crb(c,2)) return; // 800CC54C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CC550
  cmps(c,0,(int32_t)c->r[0],7); // 800CC554
  if (!crb(c,0)) return; // 800CC558
  c->r[4]=c->r[5]|c->r[5]; // 800CC55C
  c->r[3]=c->r[3]+0x00000030u; // 800CC560
  f_8003A994(c); return; // 800CC564
  return; // 800CC568
}

// fn_800CC56C
void f_800CC56C(Ctx* __restrict c) {
  trace_call(0x800CC56Cu);
  f_800CAAEC(c); return; // 800CC56C
}

// fn_800CC570
void f_800CC570(Ctx* __restrict c) {
  trace_call(0x800CC570u);
  c->r[6]=0u+0x00000000u; // 800CC570
  f_800CAB88(c); return; // 800CC574
}

