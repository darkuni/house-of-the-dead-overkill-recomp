#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800DC05C
void f_800DC05C(Ctx* __restrict c) {
  trace_call(0x800DC05Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC05C
  c->r[0]=c->lr; // 800DC060
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC064
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC068
  c->r[29]=c->r[3]|c->r[3]; // 800DC06C
  c->r[30]=c->r[4]|c->r[4]; // 800DC070
  c->r[31]=c->r[5]|c->r[5]; // 800DC074
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DC078
  cmps(c,0,(int32_t)c->r[0],7); // 800DC07C
  if (!crb(c,0)) { goto L_800DC090; } // 800DC080
  c->r[4]=c->r[31]|c->r[31]; // 800DC084
  c->r[3]=c->r[3]+0x00000030u; // 800DC088
  c->lr=0x800DC090u; f_8003A994(c); // 800DC08C
L_800DC090:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DC090
  cmps(c,0,(int32_t)c->r[0],7); // 800DC094
  if (!crb(c,0)) { goto L_800DC0A8; } // 800DC098
  c->r[4]=c->r[31]|c->r[31]; // 800DC09C
  c->r[3]=c->r[29]+0x0000003Cu; // 800DC0A0
  c->lr=0x800DC0A8u; f_8003A994(c); // 800DC0A4
L_800DC0A8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DC0A8
  c->r[3]=c->r[29]|c->r[29]; // 800DC0AC
  c->r[4]=c->r[30]|c->r[30]; // 800DC0B0
  c->r[5]=c->r[31]|c->r[31]; // 800DC0B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DC0B8
  c->ctr=c->r[12]; // 800DC0BC
  if (true) { c->lr=0x800DC0C4u; dispatch(c,c->ctr); } // 800DC0C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC0C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC0C8
  c->lr=c->r[0]; // 800DC0CC
  c->r[1]=c->r[1]+0x00000020u; // 800DC0D0
  return; // 800DC0D4
}

// fn_800DC0D8
void f_800DC0D8(Ctx* __restrict c) {
  trace_call(0x800DC0D8u);
  c->r[3]=0u+0x80410000u; // 800DC0D8
  c->r[3]=c->r[3]+0xFFFFD935u; // 800DC0DC
  return; // 800DC0E0
}

// fn_800DC0E4
void f_800DC0E4(Ctx* __restrict c) {
  trace_call(0x800DC0E4u);
  c->r[3]=0u+0x00000048u; // 800DC0E4
  return; // 800DC0E8
}

// fn_800DC0EC
void f_800DC0EC(Ctx* __restrict c) {
  trace_call(0x800DC0ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC0EC
  c->r[0]=c->lr; // 800DC0F0
  c->r[3]=0u+0x00000048u; // 800DC0F4
  c->r[4]=c->r[13]+0xFFFFB5F6u; // 800DC0F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC0FC
  c->r[5]=0u+0x00000000u; // 800DC100
  c->r[6]=0u+0x00001001u; // 800DC104
  c->lr=0x800DC10Cu; f_80244D20(c); // 800DC108
  cmps(c,0,(int32_t)c->r[3],0); // 800DC10C
  if (crb(c,2)) { goto L_800DC118; } // 800DC110
  c->lr=0x800DC118u; f_800DBF3C(c); // 800DC114
L_800DC118:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC118
  c->lr=c->r[0]; // 800DC11C
  c->r[1]=c->r[1]+0x00000010u; // 800DC120
  return; // 800DC124
}

// fn_800DC128
void f_800DC128(Ctx* __restrict c) {
  trace_call(0x800DC128u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC128
  c->r[0]=c->lr; // 800DC12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC130
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC134
  c->r[31]=c->r[3]|c->r[3]; // 800DC138
  c->lr=0x800DC140u; f_800D7120(c); // 800DC13C
  c->r[5]=0u+0x80410000u; // 800DC140
  c->r[3]=0u+0xDC6F0000u; // 800DC144
  c->r[0]=c->r[3]+0xFFFF93BDu; // 800DC148
  c->r[4]=0u+0x00000000u; // 800DC14C
  c->r[5]=c->r[5]+0x000076B0u; // 800DC150
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DC154
  c->r[3]=c->r[31]|c->r[31]; // 800DC158
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DC15C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DC160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC164
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC168
  c->lr=c->r[0]; // 800DC16C
  c->r[1]=c->r[1]+0x00000010u; // 800DC170
  return; // 800DC174
}

// fn_800DC178
void f_800DC178(Ctx* __restrict c) {
  trace_call(0x800DC178u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC178
  c->r[0]=c->lr; // 800DC17C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC180
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC184
  c->r[30]=c->r[3]|c->r[3]; // 800DC188
  c->r[31]=c->r[4]|c->r[4]; // 800DC18C
  c->lr=0x800DC194u; f_8030D728(c); // 800DC190
  c->r[3]=c->r[31]|c->r[31]; // 800DC194
  c->r[4]=0u+0x00000000u; // 800DC198
  c->lr=0x800DC1A0u; f_8030BE30(c); // 800DC19C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DC1A0
  c->r[3]=c->r[31]|c->r[31]; // 800DC1A4
  c->lr=0x800DC1ACu; f_8030BD1C(c); // 800DC1A8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DC1AC
  c->r[3]=c->r[31]|c->r[31]; // 800DC1B0
  c->r[4]=0u+0x00000000u; // 800DC1B4
  c->lr=0x800DC1BCu; f_8030BE30(c); // 800DC1B8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DC1BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC1C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC1C4
  c->lr=c->r[0]; // 800DC1C8
  c->r[1]=c->r[1]+0x00000010u; // 800DC1CC
  return; // 800DC1D0
}

// fn_800DC1D4
void f_800DC1D4(Ctx* __restrict c) {
  trace_call(0x800DC1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC1D4
  c->r[0]=c->lr; // 800DC1D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC1DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC1E0
  c->r[30]=c->r[3]|c->r[3]; // 800DC1E4
  c->r[31]=c->r[4]|c->r[4]; // 800DC1E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC1EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DC1F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DC1F4
  c->r[3]=c->r[4]+0x00000030u; // 800DC1F8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DC1FC
  c->r[4]=c->r[30]+0x00000030u; // 800DC200
  c->lr=0x800DC208u; f_8003AB48(c); // 800DC204
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800DC208
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800DC20C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC210
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC214
  c->lr=c->r[0]; // 800DC218
  c->r[1]=c->r[1]+0x00000010u; // 800DC21C
  return; // 800DC220
}

// fn_800DC224
void f_800DC224(Ctx* __restrict c) {
  trace_call(0x800DC224u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DC224
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DC228
  c->ctr=c->r[12]; // 800DC22C
  if (true) { dispatch(c,c->ctr); return; } // 800DC230
}

// fn_800DC234
void f_800DC234(Ctx* __restrict c) {
  trace_call(0x800DC234u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC234
  c->r[0]=c->lr; // 800DC238
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC23C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC240
  c->r[29]=c->r[3]|c->r[3]; // 800DC244
  c->r[30]=c->r[4]|c->r[4]; // 800DC248
  c->r[31]=c->r[5]|c->r[5]; // 800DC24C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DC250
  cmps(c,0,(int32_t)c->r[0],7); // 800DC254
  if (!crb(c,0)) { goto L_800DC268; } // 800DC258
  c->r[4]=c->r[31]|c->r[31]; // 800DC25C
  c->r[3]=c->r[3]+0x00000030u; // 800DC260
  c->lr=0x800DC268u; f_8003A994(c); // 800DC264
L_800DC268:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DC268
  c->r[3]=c->r[29]|c->r[29]; // 800DC26C
  c->r[4]=c->r[30]|c->r[30]; // 800DC270
  c->r[5]=c->r[31]|c->r[31]; // 800DC274
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DC278
  c->ctr=c->r[12]; // 800DC27C
  if (true) { c->lr=0x800DC284u; dispatch(c,c->ctr); } // 800DC280
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC284
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC288
  c->lr=c->r[0]; // 800DC28C
  c->r[1]=c->r[1]+0x00000020u; // 800DC290
  return; // 800DC294
}

// fn_800DC298
void f_800DC298(Ctx* __restrict c) {
  trace_call(0x800DC298u);
  c->r[3]=0u+0x80410000u; // 800DC298
  c->r[3]=c->r[3]+0xFFFFD948u; // 800DC29C
  return; // 800DC2A0
}

// fn_800DC2A4
void f_800DC2A4(Ctx* __restrict c) {
  trace_call(0x800DC2A4u);
  c->r[3]=0u+0x00000040u; // 800DC2A4
  return; // 800DC2A8
}

// fn_800DC2AC
void f_800DC2AC(Ctx* __restrict c) {
  trace_call(0x800DC2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC2AC
  c->r[0]=c->lr; // 800DC2B0
  c->r[3]=0u+0x00000040u; // 800DC2B4
  c->r[4]=c->r[13]+0xFFFFB5FBu; // 800DC2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC2BC
  c->r[5]=0u+0x00000000u; // 800DC2C0
  c->r[6]=0u+0x00001001u; // 800DC2C4
  c->lr=0x800DC2CCu; f_80244D20(c); // 800DC2C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC2CC
  if (crb(c,2)) { goto L_800DC2D8; } // 800DC2D0
  c->lr=0x800DC2D8u; f_800DC128(c); // 800DC2D4
L_800DC2D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC2D8
  c->lr=c->r[0]; // 800DC2DC
  c->r[1]=c->r[1]+0x00000010u; // 800DC2E0
  return; // 800DC2E4
}

// fn_800DC2E8
void f_800DC2E8(Ctx* __restrict c) {
  trace_call(0x800DC2E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC2E8
  c->r[0]=c->lr; // 800DC2EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC2F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC2F4
  c->r[31]=c->r[3]|c->r[3]; // 800DC2F8
  c->lr=0x800DC300u; f_800D7120(c); // 800DC2FC
  c->r[5]=0u+0x80410000u; // 800DC300
  c->r[3]=0u+0x59710000u; // 800DC304
  c->r[0]=c->r[3]+0x000047B2u; // 800DC308
  c->r[4]=0u+0x00000000u; // 800DC30C
  c->r[5]=c->r[5]+0x0000767Cu; // 800DC310
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DC314
  c->r[3]=c->r[31]|c->r[31]; // 800DC318
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DC31C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DC320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC324
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC328
  c->lr=c->r[0]; // 800DC32C
  c->r[1]=c->r[1]+0x00000010u; // 800DC330
  return; // 800DC334
}

// fn_800DC338
void f_800DC338(Ctx* __restrict c) {
  trace_call(0x800DC338u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC338
  c->r[0]=c->lr; // 800DC33C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC340
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC344
  c->r[30]=c->r[3]|c->r[3]; // 800DC348
  c->r[31]=c->r[4]|c->r[4]; // 800DC34C
  c->lr=0x800DC354u; f_8030D728(c); // 800DC350
  c->r[3]=c->r[31]|c->r[31]; // 800DC354
  c->r[4]=0u+0x00000000u; // 800DC358
  c->lr=0x800DC360u; f_8030BE30(c); // 800DC35C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DC360
  c->r[3]=c->r[31]|c->r[31]; // 800DC364
  c->lr=0x800DC36Cu; f_8030BD1C(c); // 800DC368
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DC36C
  c->r[3]=c->r[31]|c->r[31]; // 800DC370
  c->lr=0x800DC378u; f_8030BD1C(c); // 800DC374
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800DC378
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC37C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC380
  c->lr=c->r[0]; // 800DC384
  c->r[1]=c->r[1]+0x00000010u; // 800DC388
  return; // 800DC38C
}

// fn_800DC390
void f_800DC390(Ctx* __restrict c) {
  trace_call(0x800DC390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC390
  c->r[0]=c->lr; // 800DC394
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC398
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC39C
  c->r[30]=c->r[3]|c->r[3]; // 800DC3A0
  c->r[31]=c->r[4]|c->r[4]; // 800DC3A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC3A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DC3AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DC3B0
  c->r[3]=c->r[4]+0x00000030u; // 800DC3B4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DC3B8
  c->r[4]=c->r[30]+0x00000030u; // 800DC3BC
  c->lr=0x800DC3C4u; f_8003AB48(c); // 800DC3C0
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800DC3C4
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800DC3C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC3CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC3D0
  c->lr=c->r[0]; // 800DC3D4
  c->r[1]=c->r[1]+0x00000010u; // 800DC3D8
  return; // 800DC3DC
}

// fn_800DC3E0
void f_800DC3E0(Ctx* __restrict c) {
  trace_call(0x800DC3E0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DC3E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DC3E4
  c->ctr=c->r[12]; // 800DC3E8
  if (true) { dispatch(c,c->ctr); return; } // 800DC3EC
}

// fn_800DC3F0
void f_800DC3F0(Ctx* __restrict c) {
  trace_call(0x800DC3F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC3F0
  c->r[0]=c->lr; // 800DC3F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC3F8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC3FC
  c->r[29]=c->r[3]|c->r[3]; // 800DC400
  c->r[30]=c->r[4]|c->r[4]; // 800DC404
  c->r[31]=c->r[5]|c->r[5]; // 800DC408
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DC40C
  cmps(c,0,(int32_t)c->r[0],7); // 800DC410
  if (!crb(c,0)) { goto L_800DC424; } // 800DC414
  c->r[4]=c->r[31]|c->r[31]; // 800DC418
  c->r[3]=c->r[3]+0x00000030u; // 800DC41C
  c->lr=0x800DC424u; f_8003A994(c); // 800DC420
L_800DC424:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DC424
  c->r[3]=c->r[29]|c->r[29]; // 800DC428
  c->r[4]=c->r[30]|c->r[30]; // 800DC42C
  c->r[5]=c->r[31]|c->r[31]; // 800DC430
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DC434
  c->ctr=c->r[12]; // 800DC438
  if (true) { c->lr=0x800DC440u; dispatch(c,c->ctr); } // 800DC43C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC440
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC444
  c->lr=c->r[0]; // 800DC448
  c->r[1]=c->r[1]+0x00000020u; // 800DC44C
  return; // 800DC450
}

// fn_800DC454
void f_800DC454(Ctx* __restrict c) {
  trace_call(0x800DC454u);
  c->r[3]=0u+0x80410000u; // 800DC454
  c->r[3]=c->r[3]+0xFFFFD963u; // 800DC458
  return; // 800DC45C
}

// fn_800DC460
void f_800DC460(Ctx* __restrict c) {
  trace_call(0x800DC460u);
  c->r[3]=0u+0x00000040u; // 800DC460
  return; // 800DC464
}

// fn_800DC468
void f_800DC468(Ctx* __restrict c) {
  trace_call(0x800DC468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC468
  c->r[0]=c->lr; // 800DC46C
  c->r[3]=0u+0x00000040u; // 800DC470
  c->r[4]=c->r[13]+0xFFFFB600u; // 800DC474
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC478
  c->r[5]=0u+0x00000000u; // 800DC47C
  c->r[6]=0u+0x00001001u; // 800DC480
  c->lr=0x800DC488u; f_80244D20(c); // 800DC484
  cmps(c,0,(int32_t)c->r[3],0); // 800DC488
  if (crb(c,2)) { goto L_800DC494; } // 800DC48C
  c->lr=0x800DC494u; f_800DC2E8(c); // 800DC490
L_800DC494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC494
  c->lr=c->r[0]; // 800DC498
  c->r[1]=c->r[1]+0x00000010u; // 800DC49C
  return; // 800DC4A0
}

// fn_800DC4A4
void f_800DC4A4(Ctx* __restrict c) {
  trace_call(0x800DC4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC4A4
  c->r[0]=c->lr; // 800DC4A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC4AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC4B0
  c->r[31]=c->r[3]|c->r[3]; // 800DC4B4
  c->lr=0x800DC4BCu; f_800D7120(c); // 800DC4B8
  c->r[5]=0u+0x80410000u; // 800DC4BC
  c->r[3]=0u+0x59720000u; // 800DC4C0
  c->r[0]=c->r[3]+0x00004EB8u; // 800DC4C4
  c->r[4]=0u+0x00000000u; // 800DC4C8
  c->r[5]=c->r[5]+0x00007648u; // 800DC4CC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DC4D0
  c->r[3]=c->r[31]|c->r[31]; // 800DC4D4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DC4D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DC4DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC4E4
  c->lr=c->r[0]; // 800DC4E8
  c->r[1]=c->r[1]+0x00000010u; // 800DC4EC
  return; // 800DC4F0
}

// fn_800DC4F4
void f_800DC4F4(Ctx* __restrict c) {
  trace_call(0x800DC4F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC4F4
  c->r[0]=c->lr; // 800DC4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC4FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC500
  c->r[30]=c->r[3]|c->r[3]; // 800DC504
  c->r[31]=c->r[4]|c->r[4]; // 800DC508
  c->lr=0x800DC510u; f_8030D728(c); // 800DC50C
  c->r[3]=c->r[31]|c->r[31]; // 800DC510
  c->r[4]=0u+0x00000000u; // 800DC514
  c->lr=0x800DC51Cu; f_8030BE30(c); // 800DC518
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DC51C
  c->r[3]=c->r[31]|c->r[31]; // 800DC520
  c->lr=0x800DC528u; f_8030BD1C(c); // 800DC524
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DC528
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC52C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC530
  c->lr=c->r[0]; // 800DC534
  c->r[1]=c->r[1]+0x00000010u; // 800DC538
  return; // 800DC53C
}

// fn_800DC540
void f_800DC540(Ctx* __restrict c) {
  trace_call(0x800DC540u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC540
  c->r[5]=c->r[3]|c->r[3]; // 800DC544
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DC548
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DC54C
  c->r[3]=c->r[4]+0x00000030u; // 800DC550
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DC554
  c->r[4]=c->r[5]+0x00000030u; // 800DC558
  f_8003AB48(c); return; // 800DC55C
}

// fn_800DC560
void f_800DC560(Ctx* __restrict c) {
  trace_call(0x800DC560u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DC560
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DC564
  c->ctr=c->r[12]; // 800DC568
  if (true) { dispatch(c,c->ctr); return; } // 800DC56C
}

// fn_800DC570
void f_800DC570(Ctx* __restrict c) {
  trace_call(0x800DC570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC570
  c->r[0]=c->lr; // 800DC574
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC578
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC57C
  c->r[29]=c->r[3]|c->r[3]; // 800DC580
  c->r[30]=c->r[4]|c->r[4]; // 800DC584
  c->r[31]=c->r[5]|c->r[5]; // 800DC588
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DC58C
  cmps(c,0,(int32_t)c->r[0],7); // 800DC590
  if (!crb(c,0)) { goto L_800DC5A4; } // 800DC594
  c->r[4]=c->r[31]|c->r[31]; // 800DC598
  c->r[3]=c->r[3]+0x00000030u; // 800DC59C
  c->lr=0x800DC5A4u; f_8003A994(c); // 800DC5A0
L_800DC5A4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DC5A4
  c->r[3]=c->r[29]|c->r[29]; // 800DC5A8
  c->r[4]=c->r[30]|c->r[30]; // 800DC5AC
  c->r[5]=c->r[31]|c->r[31]; // 800DC5B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DC5B4
  c->ctr=c->r[12]; // 800DC5B8
  if (true) { c->lr=0x800DC5C0u; dispatch(c,c->ctr); } // 800DC5BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC5C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC5C4
  c->lr=c->r[0]; // 800DC5C8
  c->r[1]=c->r[1]+0x00000020u; // 800DC5CC
  return; // 800DC5D0
}

// fn_800DC5D4
void f_800DC5D4(Ctx* __restrict c) {
  trace_call(0x800DC5D4u);
  c->r[3]=0u+0x80410000u; // 800DC5D4
  c->r[3]=c->r[3]+0xFFFFD976u; // 800DC5D8
  return; // 800DC5DC
}

// fn_800DC5E0
void f_800DC5E0(Ctx* __restrict c) {
  trace_call(0x800DC5E0u);
  c->r[3]=0u+0x0000003Cu; // 800DC5E0
  return; // 800DC5E4
}

// fn_800DC5E8
void f_800DC5E8(Ctx* __restrict c) {
  trace_call(0x800DC5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC5E8
  c->r[0]=c->lr; // 800DC5EC
  c->r[3]=0u+0x0000003Cu; // 800DC5F0
  c->r[4]=c->r[13]+0xFFFFB605u; // 800DC5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC5F8
  c->r[5]=0u+0x00000000u; // 800DC5FC
  c->r[6]=0u+0x00001001u; // 800DC600
  c->lr=0x800DC608u; f_80244D20(c); // 800DC604
  cmps(c,0,(int32_t)c->r[3],0); // 800DC608
  if (crb(c,2)) { goto L_800DC614; } // 800DC60C
  c->lr=0x800DC614u; f_800DC4A4(c); // 800DC610
L_800DC614:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC614
  c->lr=c->r[0]; // 800DC618
  c->r[1]=c->r[1]+0x00000010u; // 800DC61C
  return; // 800DC620
}

// fn_800DC624
void f_800DC624(Ctx* __restrict c) {
  trace_call(0x800DC624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC624
  c->r[0]=c->lr; // 800DC628
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC62C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC630
  c->r[31]=c->r[3]|c->r[3]; // 800DC634
  c->lr=0x800DC63Cu; f_800D7120(c); // 800DC638
  c->r[5]=0u+0x80410000u; // 800DC63C
  c->r[3]=0u+0x96AB0000u; // 800DC640
  c->r[4]=0u+0x00000000u; // 800DC644
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DC648
  c->r[0]=c->r[3]+0x0000587Cu; // 800DC64C
  c->r[5]=c->r[5]+0x00007614u; // 800DC650
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DC654
  c->r[3]=c->r[31]|c->r[31]; // 800DC658
  W32(c->r[31]+0x00000050u,c->r[4]); // 800DC65C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DC660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC664
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC668
  c->lr=c->r[0]; // 800DC66C
  c->r[1]=c->r[1]+0x00000010u; // 800DC670
  return; // 800DC674
}

// fn_800DC678
void f_800DC678(Ctx* __restrict c) {
  trace_call(0x800DC678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC678
  c->r[0]=c->lr; // 800DC67C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC680
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC684
  c->r[30]=c->r[3]|c->r[3]; // 800DC688
  c->r[31]=c->r[4]|c->r[4]; // 800DC68C
  c->lr=0x800DC694u; f_8030D728(c); // 800DC690
  c->r[3]=c->r[31]|c->r[31]; // 800DC694
  c->r[4]=0u+0x00000000u; // 800DC698
  c->lr=0x800DC6A0u; f_8030BE30(c); // 800DC69C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DC6A0
  c->r[3]=c->r[31]|c->r[31]; // 800DC6A4
  c->lr=0x800DC6ACu; f_8030BD1C(c); // 800DC6A8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DC6AC
  c->r[3]=c->r[31]|c->r[31]; // 800DC6B0
  c->r[4]=0u+0x00000000u; // 800DC6B4
  c->lr=0x800DC6BCu; f_8030BE30(c); // 800DC6B8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DC6BC
  c->r[3]=c->r[31]|c->r[31]; // 800DC6C0
  c->r[4]=0u+0x00000000u; // 800DC6C4
  c->lr=0x800DC6CCu; f_8030BE30(c); // 800DC6C8
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DC6CC
  c->r[3]=c->r[31]|c->r[31]; // 800DC6D0
  c->lr=0x800DC6D8u; f_8030BD1C(c); // 800DC6D4
  W8(c->r[30]+0x00000044u,c->r[3]); // 800DC6D8
  c->r[3]=c->r[31]|c->r[31]; // 800DC6DC
  c->r[4]=0u+0x00000000u; // 800DC6E0
  c->lr=0x800DC6E8u; f_8030BE30(c); // 800DC6E4
  W32(c->r[30]+0x00000048u,c->r[3]); // 800DC6E8
  c->r[3]=c->r[31]|c->r[31]; // 800DC6EC
  c->lr=0x800DC6F4u; f_8030BD1C(c); // 800DC6F0
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800DC6F4
  c->r[3]=c->r[31]|c->r[31]; // 800DC6F8
  c->lr=0x800DC700u; f_8030C0A0(c); // 800DC6FC
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800DC700
  c->r[3]=c->r[31]|c->r[31]; // 800DC704
  c->lr=0x800DC70Cu; f_8030C0A0(c); // 800DC708
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800DC70C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC710
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC714
  c->lr=c->r[0]; // 800DC718
  c->r[1]=c->r[1]+0x00000010u; // 800DC71C
  return; // 800DC720
}

// fn_800DC724
void f_800DC724(Ctx* __restrict c) {
  trace_call(0x800DC724u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC724
  c->r[0]=c->lr; // 800DC728
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC72C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC730
  c->r[31]=c->r[4]|c->r[4]; // 800DC734
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC738
  c->r[30]=c->r[3]|c->r[3]; // 800DC73C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC740
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DC744
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DC748
  c->r[3]=c->r[4]+0x00000030u; // 800DC74C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DC750
  c->r[4]=c->r[30]+0x00000030u; // 800DC754
  c->lr=0x800DC75Cu; f_8003AB48(c); // 800DC758
  c->r[3]=c->r[31]+0x0000003Cu; // 800DC75C
  c->r[4]=c->r[30]+0x0000003Cu; // 800DC760
  c->lr=0x800DC768u; f_8003F6E4(c); // 800DC764
  c->r[0]=R8(c->r[30]+0x00000044u); // 800DC768
  c->r[3]=c->r[31]+0x00000048u; // 800DC76C
  W8(c->r[31]+0x00000044u,c->r[0]); // 800DC770
  c->r[4]=c->r[30]+0x00000048u; // 800DC774
  c->lr=0x800DC77Cu; f_8003AB48(c); // 800DC778
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC77C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800DC780
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC784
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800DC788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC78C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC790
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC794
  c->lr=c->r[0]; // 800DC798
  c->r[1]=c->r[1]+0x00000010u; // 800DC79C
  return; // 800DC7A0
}

// fn_800DC7A4
void f_800DC7A4(Ctx* __restrict c) {
  trace_call(0x800DC7A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DC7A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DC7A8
  c->ctr=c->r[12]; // 800DC7AC
  if (true) { dispatch(c,c->ctr); return; } // 800DC7B0
}

// fn_800DC7B4
void f_800DC7B4(Ctx* __restrict c) {
  trace_call(0x800DC7B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC7B4
  c->r[0]=c->lr; // 800DC7B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC7BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC7C0
  c->r[29]=c->r[3]|c->r[3]; // 800DC7C4
  c->r[30]=c->r[4]|c->r[4]; // 800DC7C8
  c->r[31]=c->r[5]|c->r[5]; // 800DC7CC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DC7D0
  cmps(c,0,(int32_t)c->r[0],7); // 800DC7D4
  if (!crb(c,0)) { goto L_800DC7E8; } // 800DC7D8
  c->r[4]=c->r[31]|c->r[31]; // 800DC7DC
  c->r[3]=c->r[3]+0x00000030u; // 800DC7E0
  c->lr=0x800DC7E8u; f_8003A994(c); // 800DC7E4
L_800DC7E8:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800DC7E8
  cmps(c,0,(int32_t)c->r[0],7); // 800DC7EC
  if (!crb(c,0)) { goto L_800DC800; } // 800DC7F0
  c->r[4]=c->r[31]|c->r[31]; // 800DC7F4
  c->r[3]=c->r[29]+0x00000048u; // 800DC7F8
  c->lr=0x800DC800u; f_8003A994(c); // 800DC7FC
L_800DC800:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DC800
  c->r[3]=c->r[29]|c->r[29]; // 800DC804
  c->r[4]=c->r[30]|c->r[30]; // 800DC808
  c->r[5]=c->r[31]|c->r[31]; // 800DC80C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DC810
  c->ctr=c->r[12]; // 800DC814
  if (true) { c->lr=0x800DC81Cu; dispatch(c,c->ctr); } // 800DC818
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC81C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC820
  c->lr=c->r[0]; // 800DC824
  c->r[1]=c->r[1]+0x00000020u; // 800DC828
  return; // 800DC82C
}

// fn_800DC830
void f_800DC830(Ctx* __restrict c) {
  trace_call(0x800DC830u);
  c->r[3]=0u+0x80410000u; // 800DC830
  c->r[3]=c->r[3]+0xFFFFD984u; // 800DC834
  return; // 800DC838
}

// fn_800DC83C
void f_800DC83C(Ctx* __restrict c) {
  trace_call(0x800DC83Cu);
  c->r[3]=0u+0x0000005Cu; // 800DC83C
  return; // 800DC840
}

// fn_800DC844
void f_800DC844(Ctx* __restrict c) {
  trace_call(0x800DC844u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC844
  c->r[0]=c->lr; // 800DC848
  c->r[3]=0u+0x0000005Cu; // 800DC84C
  c->r[4]=c->r[13]+0xFFFFB60Au; // 800DC850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC854
  c->r[5]=0u+0x00000000u; // 800DC858
  c->r[6]=0u+0x00001001u; // 800DC85C
  c->lr=0x800DC864u; f_80244D20(c); // 800DC860
  cmps(c,0,(int32_t)c->r[3],0); // 800DC864
  if (crb(c,2)) { goto L_800DC870; } // 800DC868
  c->lr=0x800DC870u; f_800DC624(c); // 800DC86C
L_800DC870:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC870
  c->lr=c->r[0]; // 800DC874
  c->r[1]=c->r[1]+0x00000010u; // 800DC878
  return; // 800DC87C
}

// fn_800DC880
void f_800DC880(Ctx* __restrict c) {
  trace_call(0x800DC880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC880
  c->r[0]=c->lr; // 800DC884
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC88C
  c->r[31]=c->r[3]|c->r[3]; // 800DC890
  c->lr=0x800DC898u; f_800D7120(c); // 800DC894
  c->r[5]=0u+0x80410000u; // 800DC898
  c->r[3]=0u+0x59720000u; // 800DC89C
  c->r[0]=c->r[3]+0x00004EB8u; // 800DC8A0
  c->r[4]=0u+0x00000000u; // 800DC8A4
  c->r[5]=c->r[5]+0x000075E0u; // 800DC8A8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DC8AC
  c->r[3]=c->r[31]|c->r[31]; // 800DC8B0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DC8B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DC8B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC8BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC8C0
  c->lr=c->r[0]; // 800DC8C4
  c->r[1]=c->r[1]+0x00000010u; // 800DC8C8
  return; // 800DC8CC
}

// fn_800DC8D0
void f_800DC8D0(Ctx* __restrict c) {
  trace_call(0x800DC8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC8D0
  c->r[0]=c->lr; // 800DC8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC8D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC8DC
  c->r[30]=c->r[3]|c->r[3]; // 800DC8E0
  c->r[31]=c->r[4]|c->r[4]; // 800DC8E4
  c->lr=0x800DC8ECu; f_8030D728(c); // 800DC8E8
  c->r[3]=c->r[31]|c->r[31]; // 800DC8EC
  c->r[4]=0u+0x00000000u; // 800DC8F0
  c->lr=0x800DC8F8u; f_8030BE30(c); // 800DC8F4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DC8F8
  c->r[3]=c->r[31]|c->r[31]; // 800DC8FC
  c->lr=0x800DC904u; f_8030BD1C(c); // 800DC900
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DC904
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC908
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC90C
  c->lr=c->r[0]; // 800DC910
  c->r[1]=c->r[1]+0x00000010u; // 800DC914
  return; // 800DC918
}

// fn_800DC91C
void f_800DC91C(Ctx* __restrict c) {
  trace_call(0x800DC91Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC91C
  c->r[5]=c->r[3]|c->r[3]; // 800DC920
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DC924
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DC928
  c->r[3]=c->r[4]+0x00000030u; // 800DC92C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DC930
  c->r[4]=c->r[5]+0x00000030u; // 800DC934
  f_8003AB48(c); return; // 800DC938
}

// fn_800DC93C
void f_800DC93C(Ctx* __restrict c) {
  trace_call(0x800DC93Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DC93C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DC940
  c->ctr=c->r[12]; // 800DC944
  if (true) { dispatch(c,c->ctr); return; } // 800DC948
}

// fn_800DC94C
void f_800DC94C(Ctx* __restrict c) {
  trace_call(0x800DC94Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC94C
  c->r[0]=c->lr; // 800DC950
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC954
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC958
  c->r[29]=c->r[3]|c->r[3]; // 800DC95C
  c->r[30]=c->r[4]|c->r[4]; // 800DC960
  c->r[31]=c->r[5]|c->r[5]; // 800DC964
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DC968
  cmps(c,0,(int32_t)c->r[0],7); // 800DC96C
  if (!crb(c,0)) { goto L_800DC980; } // 800DC970
  c->r[4]=c->r[31]|c->r[31]; // 800DC974
  c->r[3]=c->r[3]+0x00000030u; // 800DC978
  c->lr=0x800DC980u; f_8003A994(c); // 800DC97C
L_800DC980:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DC980
  c->r[3]=c->r[29]|c->r[29]; // 800DC984
  c->r[4]=c->r[30]|c->r[30]; // 800DC988
  c->r[5]=c->r[31]|c->r[31]; // 800DC98C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DC990
  c->ctr=c->r[12]; // 800DC994
  if (true) { c->lr=0x800DC99Cu; dispatch(c,c->ctr); } // 800DC998
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC99C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC9A0
  c->lr=c->r[0]; // 800DC9A4
  c->r[1]=c->r[1]+0x00000020u; // 800DC9A8
  return; // 800DC9AC
}

// fn_800DC9B0
void f_800DC9B0(Ctx* __restrict c) {
  trace_call(0x800DC9B0u);
  c->r[3]=0u+0x80410000u; // 800DC9B0
  c->r[3]=c->r[3]+0xFFFFD990u; // 800DC9B4
  return; // 800DC9B8
}

// fn_800DC9BC
void f_800DC9BC(Ctx* __restrict c) {
  trace_call(0x800DC9BCu);
  c->r[3]=0u+0x0000003Cu; // 800DC9BC
  return; // 800DC9C0
}

// fn_800DC9C4
void f_800DC9C4(Ctx* __restrict c) {
  trace_call(0x800DC9C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC9C4
  c->r[0]=c->lr; // 800DC9C8
  c->r[3]=0u+0x0000003Cu; // 800DC9CC
  c->r[4]=c->r[13]+0xFFFFB60Fu; // 800DC9D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC9D4
  c->r[5]=0u+0x00000000u; // 800DC9D8
  c->r[6]=0u+0x00001001u; // 800DC9DC
  c->lr=0x800DC9E4u; f_80244D20(c); // 800DC9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC9E4
  if (crb(c,2)) { goto L_800DC9F0; } // 800DC9E8
  c->lr=0x800DC9F0u; f_800DC880(c); // 800DC9EC
L_800DC9F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC9F0
  c->lr=c->r[0]; // 800DC9F4
  c->r[1]=c->r[1]+0x00000010u; // 800DC9F8
  return; // 800DC9FC
}

// fn_800DCA00
void f_800DCA00(Ctx* __restrict c) {
  trace_call(0x800DCA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCA00
  c->r[0]=c->lr; // 800DCA04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCA08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCA0C
  c->r[31]=c->r[3]|c->r[3]; // 800DCA10
  c->lr=0x800DCA18u; f_800D7120(c); // 800DCA14
  c->r[5]=0u+0x80410000u; // 800DCA18
  c->r[3]=0u+0x59720000u; // 800DCA1C
  c->r[0]=c->r[3]+0x00004EB8u; // 800DCA20
  c->r[4]=0u+0x00000000u; // 800DCA24
  c->r[5]=c->r[5]+0x000075ACu; // 800DCA28
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DCA2C
  c->r[3]=c->r[31]|c->r[31]; // 800DCA30
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DCA34
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DCA38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCA3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCA40
  c->lr=c->r[0]; // 800DCA44
  c->r[1]=c->r[1]+0x00000010u; // 800DCA48
  return; // 800DCA4C
}

// fn_800DCA50
void f_800DCA50(Ctx* __restrict c) {
  trace_call(0x800DCA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCA50
  c->r[0]=c->lr; // 800DCA54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCA58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DCA5C
  c->r[30]=c->r[3]|c->r[3]; // 800DCA60
  c->r[31]=c->r[4]|c->r[4]; // 800DCA64
  c->lr=0x800DCA6Cu; f_8030D728(c); // 800DCA68
  c->r[3]=c->r[31]|c->r[31]; // 800DCA6C
  c->r[4]=0u+0x00000000u; // 800DCA70
  c->lr=0x800DCA78u; f_8030BE30(c); // 800DCA74
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DCA78
  c->r[3]=c->r[31]|c->r[31]; // 800DCA7C
  c->lr=0x800DCA84u; f_8030BD1C(c); // 800DCA80
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DCA84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DCA88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCA8C
  c->lr=c->r[0]; // 800DCA90
  c->r[1]=c->r[1]+0x00000010u; // 800DCA94
  return; // 800DCA98
}

// fn_800DCA9C
void f_800DCA9C(Ctx* __restrict c) {
  trace_call(0x800DCA9Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DCA9C
  c->r[5]=c->r[3]|c->r[3]; // 800DCAA0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DCAA4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DCAA8
  c->r[3]=c->r[4]+0x00000030u; // 800DCAAC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DCAB0
  c->r[4]=c->r[5]+0x00000030u; // 800DCAB4
  f_8003AB48(c); return; // 800DCAB8
}

// fn_800DCABC
void f_800DCABC(Ctx* __restrict c) {
  trace_call(0x800DCABCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DCABC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DCAC0
  c->ctr=c->r[12]; // 800DCAC4
  if (true) { dispatch(c,c->ctr); return; } // 800DCAC8
}

// fn_800DCACC
void f_800DCACC(Ctx* __restrict c) {
  trace_call(0x800DCACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCACC
  c->r[0]=c->lr; // 800DCAD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCAD4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DCAD8
  c->r[29]=c->r[3]|c->r[3]; // 800DCADC
  c->r[30]=c->r[4]|c->r[4]; // 800DCAE0
  c->r[31]=c->r[5]|c->r[5]; // 800DCAE4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DCAE8
  cmps(c,0,(int32_t)c->r[0],7); // 800DCAEC
  if (!crb(c,0)) { goto L_800DCB00; } // 800DCAF0
  c->r[4]=c->r[31]|c->r[31]; // 800DCAF4
  c->r[3]=c->r[3]+0x00000030u; // 800DCAF8
  c->lr=0x800DCB00u; f_8003A994(c); // 800DCAFC
L_800DCB00:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DCB00
  c->r[3]=c->r[29]|c->r[29]; // 800DCB04
  c->r[4]=c->r[30]|c->r[30]; // 800DCB08
  c->r[5]=c->r[31]|c->r[31]; // 800DCB0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DCB10
  c->ctr=c->r[12]; // 800DCB14
  if (true) { c->lr=0x800DCB1Cu; dispatch(c,c->ctr); } // 800DCB18
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DCB1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCB20
  c->lr=c->r[0]; // 800DCB24
  c->r[1]=c->r[1]+0x00000020u; // 800DCB28
  return; // 800DCB2C
}

// fn_800DCB30
void f_800DCB30(Ctx* __restrict c) {
  trace_call(0x800DCB30u);
  c->r[3]=0u+0x80410000u; // 800DCB30
  c->r[3]=c->r[3]+0xFFFFD9A1u; // 800DCB34
  return; // 800DCB38
}

// fn_800DCB3C
void f_800DCB3C(Ctx* __restrict c) {
  trace_call(0x800DCB3Cu);
  c->r[3]=0u+0x0000003Cu; // 800DCB3C
  return; // 800DCB40
}

// fn_800DCB44
void f_800DCB44(Ctx* __restrict c) {
  trace_call(0x800DCB44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCB44
  c->r[0]=c->lr; // 800DCB48
  c->r[3]=0u+0x0000003Cu; // 800DCB4C
  c->r[4]=c->r[13]+0xFFFFB614u; // 800DCB50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCB54
  c->r[5]=0u+0x00000000u; // 800DCB58
  c->r[6]=0u+0x00001001u; // 800DCB5C
  c->lr=0x800DCB64u; f_80244D20(c); // 800DCB60
  cmps(c,0,(int32_t)c->r[3],0); // 800DCB64
  if (crb(c,2)) { goto L_800DCB70; } // 800DCB68
  c->lr=0x800DCB70u; f_800DCA00(c); // 800DCB6C
L_800DCB70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCB70
  c->lr=c->r[0]; // 800DCB74
  c->r[1]=c->r[1]+0x00000010u; // 800DCB78
  return; // 800DCB7C
}

// fn_800DCB80
void f_800DCB80(Ctx* __restrict c) {
  trace_call(0x800DCB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCB80
  c->r[0]=c->lr; // 800DCB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCB88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCB8C
  c->r[31]=c->r[3]|c->r[3]; // 800DCB90
  c->lr=0x800DCB98u; f_800D7120(c); // 800DCB94
  c->r[5]=0u+0x80410000u; // 800DCB98
  c->r[3]=0u+0x59720000u; // 800DCB9C
  c->r[0]=c->r[3]+0x00004EB8u; // 800DCBA0
  c->r[4]=0u+0x00000000u; // 800DCBA4
  c->r[5]=c->r[5]+0x00007578u; // 800DCBA8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DCBAC
  c->r[3]=c->r[31]|c->r[31]; // 800DCBB0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DCBB4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DCBB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCBBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCBC0
  c->lr=c->r[0]; // 800DCBC4
  c->r[1]=c->r[1]+0x00000010u; // 800DCBC8
  return; // 800DCBCC
}

// fn_800DCBD0
void f_800DCBD0(Ctx* __restrict c) {
  trace_call(0x800DCBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCBD0
  c->r[0]=c->lr; // 800DCBD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCBD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DCBDC
  c->r[30]=c->r[3]|c->r[3]; // 800DCBE0
  c->r[31]=c->r[4]|c->r[4]; // 800DCBE4
  c->lr=0x800DCBECu; f_8030D728(c); // 800DCBE8
  c->r[3]=c->r[31]|c->r[31]; // 800DCBEC
  c->r[4]=0u+0x00000000u; // 800DCBF0
  c->lr=0x800DCBF8u; f_8030BE30(c); // 800DCBF4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DCBF8
  c->r[3]=c->r[31]|c->r[31]; // 800DCBFC
  c->lr=0x800DCC04u; f_8030BD1C(c); // 800DCC00
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DCC04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DCC08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCC0C
  c->lr=c->r[0]; // 800DCC10
  c->r[1]=c->r[1]+0x00000010u; // 800DCC14
  return; // 800DCC18
}

// fn_800DCC1C
void f_800DCC1C(Ctx* __restrict c) {
  trace_call(0x800DCC1Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DCC1C
  c->r[5]=c->r[3]|c->r[3]; // 800DCC20
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DCC24
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DCC28
  c->r[3]=c->r[4]+0x00000030u; // 800DCC2C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DCC30
  c->r[4]=c->r[5]+0x00000030u; // 800DCC34
  f_8003AB48(c); return; // 800DCC38
}

// fn_800DCC3C
void f_800DCC3C(Ctx* __restrict c) {
  trace_call(0x800DCC3Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DCC3C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DCC40
  c->ctr=c->r[12]; // 800DCC44
  if (true) { dispatch(c,c->ctr); return; } // 800DCC48
}

// fn_800DCC4C
void f_800DCC4C(Ctx* __restrict c) {
  trace_call(0x800DCC4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCC4C
  c->r[0]=c->lr; // 800DCC50
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCC54
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DCC58
  c->r[29]=c->r[3]|c->r[3]; // 800DCC5C
  c->r[30]=c->r[4]|c->r[4]; // 800DCC60
  c->r[31]=c->r[5]|c->r[5]; // 800DCC64
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DCC68
  cmps(c,0,(int32_t)c->r[0],7); // 800DCC6C
  if (!crb(c,0)) { goto L_800DCC80; } // 800DCC70
  c->r[4]=c->r[31]|c->r[31]; // 800DCC74
  c->r[3]=c->r[3]+0x00000030u; // 800DCC78
  c->lr=0x800DCC80u; f_8003A994(c); // 800DCC7C
L_800DCC80:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DCC80
  c->r[3]=c->r[29]|c->r[29]; // 800DCC84
  c->r[4]=c->r[30]|c->r[30]; // 800DCC88
  c->r[5]=c->r[31]|c->r[31]; // 800DCC8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DCC90
  c->ctr=c->r[12]; // 800DCC94
  if (true) { c->lr=0x800DCC9Cu; dispatch(c,c->ctr); } // 800DCC98
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DCC9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCCA0
  c->lr=c->r[0]; // 800DCCA4
  c->r[1]=c->r[1]+0x00000020u; // 800DCCA8
  return; // 800DCCAC
}

// fn_800DCCB0
void f_800DCCB0(Ctx* __restrict c) {
  trace_call(0x800DCCB0u);
  c->r[3]=0u+0x80410000u; // 800DCCB0
  c->r[3]=c->r[3]+0xFFFFD9B5u; // 800DCCB4
  return; // 800DCCB8
}

// fn_800DCCBC
void f_800DCCBC(Ctx* __restrict c) {
  trace_call(0x800DCCBCu);
  c->r[3]=0u+0x0000003Cu; // 800DCCBC
  return; // 800DCCC0
}

// fn_800DCCC4
void f_800DCCC4(Ctx* __restrict c) {
  trace_call(0x800DCCC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCCC4
  c->r[0]=c->lr; // 800DCCC8
  c->r[3]=0u+0x0000003Cu; // 800DCCCC
  c->r[4]=c->r[13]+0xFFFFB619u; // 800DCCD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCCD4
  c->r[5]=0u+0x00000000u; // 800DCCD8
  c->r[6]=0u+0x00001001u; // 800DCCDC
  c->lr=0x800DCCE4u; f_80244D20(c); // 800DCCE0
  cmps(c,0,(int32_t)c->r[3],0); // 800DCCE4
  if (crb(c,2)) { goto L_800DCCF0; } // 800DCCE8
  c->lr=0x800DCCF0u; f_800DCB80(c); // 800DCCEC
L_800DCCF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCCF0
  c->lr=c->r[0]; // 800DCCF4
  c->r[1]=c->r[1]+0x00000010u; // 800DCCF8
  return; // 800DCCFC
}

// fn_800DCD00
void f_800DCD00(Ctx* __restrict c) {
  trace_call(0x800DCD00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCD00
  c->r[0]=c->lr; // 800DCD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCD08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCD0C
  c->r[31]=c->r[3]|c->r[3]; // 800DCD10
  c->lr=0x800DCD18u; f_800D7120(c); // 800DCD14
  c->r[3]=0u+0x80410000u; // 800DCD18
  c->r[0]=0u+0x00000000u; // 800DCD1C
  c->r[3]=c->r[3]+0x00007544u; // 800DCD20
  W32(c->r[31]+0x00000008u,c->r[3]); // 800DCD24
  c->r[3]=c->r[31]|c->r[31]; // 800DCD28
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DCD2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCD30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCD34
  c->lr=c->r[0]; // 800DCD38
  c->r[1]=c->r[1]+0x00000010u; // 800DCD3C
  return; // 800DCD40
}

// fn_800DCD44
void f_800DCD44(Ctx* __restrict c) {
  trace_call(0x800DCD44u);
  f_8030D728(c); return; // 800DCD44
}

// fn_800DCD48
void f_800DCD48(Ctx* __restrict c) {
  trace_call(0x800DCD48u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DCD48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DCD4C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DCD50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DCD54
  return; // 800DCD58
}

// fn_800DCD5C
void f_800DCD5C(Ctx* __restrict c) {
  trace_call(0x800DCD5Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DCD5C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DCD60
  c->ctr=c->r[12]; // 800DCD64
  if (true) { dispatch(c,c->ctr); return; } // 800DCD68
}

// fn_800DCD6C
void f_800DCD6C(Ctx* __restrict c) {
  trace_call(0x800DCD6Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DCD6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DCD70
  c->ctr=c->r[12]; // 800DCD74
  if (true) { dispatch(c,c->ctr); return; } // 800DCD78
}

// fn_800DCD7C
void f_800DCD7C(Ctx* __restrict c) {
  trace_call(0x800DCD7Cu);
  c->r[3]=0u+0x80410000u; // 800DCD7C
  c->r[3]=c->r[3]+0xFFFFD9C8u; // 800DCD80
  return; // 800DCD84
}

// fn_800DCD88
void f_800DCD88(Ctx* __restrict c) {
  trace_call(0x800DCD88u);
  c->r[3]=0u+0x00000030u; // 800DCD88
  return; // 800DCD8C
}

// fn_800DCD90
void f_800DCD90(Ctx* __restrict c) {
  trace_call(0x800DCD90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCD90
  c->r[0]=c->lr; // 800DCD94
  c->r[3]=0u+0x00000030u; // 800DCD98
  c->r[4]=c->r[13]+0xFFFFB61Eu; // 800DCD9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCDA0
  c->r[5]=0u+0x00000000u; // 800DCDA4
  c->r[6]=0u+0x00001001u; // 800DCDA8
  c->lr=0x800DCDB0u; f_80244D20(c); // 800DCDAC
  cmps(c,0,(int32_t)c->r[3],0); // 800DCDB0
  if (crb(c,2)) { goto L_800DCDBC; } // 800DCDB4
  c->lr=0x800DCDBCu; f_800DCD00(c); // 800DCDB8
L_800DCDBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCDBC
  c->lr=c->r[0]; // 800DCDC0
  c->r[1]=c->r[1]+0x00000010u; // 800DCDC4
  return; // 800DCDC8
}

// fn_800DCDCC
void f_800DCDCC(Ctx* __restrict c) {
  trace_call(0x800DCDCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCDCC
  c->r[0]=c->lr; // 800DCDD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCDD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCDD8
  c->r[31]=c->r[3]|c->r[3]; // 800DCDDC
  c->lr=0x800DCDE4u; f_800D7120(c); // 800DCDE0
  c->r[3]=0u+0x80410000u; // 800DCDE4
  c->r[0]=0u+0x00000000u; // 800DCDE8
  c->r[3]=c->r[3]+0x00007510u; // 800DCDEC
  W32(c->r[31]+0x00000008u,c->r[3]); // 800DCDF0
  c->r[3]=c->r[31]|c->r[31]; // 800DCDF4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DCDF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCDFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCE00
  c->lr=c->r[0]; // 800DCE04
  c->r[1]=c->r[1]+0x00000010u; // 800DCE08
  return; // 800DCE0C
}

// fn_800DCE10
void f_800DCE10(Ctx* __restrict c) {
  trace_call(0x800DCE10u);
  f_8030D728(c); return; // 800DCE10
}

// fn_800DCE14
void f_800DCE14(Ctx* __restrict c) {
  trace_call(0x800DCE14u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DCE14
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DCE18
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DCE1C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DCE20
  return; // 800DCE24
}

// fn_800DCE28
void f_800DCE28(Ctx* __restrict c) {
  trace_call(0x800DCE28u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DCE28
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DCE2C
  c->ctr=c->r[12]; // 800DCE30
  if (true) { dispatch(c,c->ctr); return; } // 800DCE34
}

// fn_800DCE38
void f_800DCE38(Ctx* __restrict c) {
  trace_call(0x800DCE38u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DCE38
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DCE3C
  c->ctr=c->r[12]; // 800DCE40
  if (true) { dispatch(c,c->ctr); return; } // 800DCE44
}

// fn_800DCE48
void f_800DCE48(Ctx* __restrict c) {
  trace_call(0x800DCE48u);
  c->r[3]=0u+0x80410000u; // 800DCE48
  c->r[3]=c->r[3]+0xFFFFD9DDu; // 800DCE4C
  return; // 800DCE50
}

// fn_800DCE54
void f_800DCE54(Ctx* __restrict c) {
  trace_call(0x800DCE54u);
  c->r[3]=0u+0x00000030u; // 800DCE54
  return; // 800DCE58
}

// fn_800DCE5C
void f_800DCE5C(Ctx* __restrict c) {
  trace_call(0x800DCE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCE5C
  c->r[0]=c->lr; // 800DCE60
  c->r[3]=0u+0x00000030u; // 800DCE64
  c->r[4]=c->r[13]+0xFFFFB623u; // 800DCE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCE6C
  c->r[5]=0u+0x00000000u; // 800DCE70
  c->r[6]=0u+0x00001001u; // 800DCE74
  c->lr=0x800DCE7Cu; f_80244D20(c); // 800DCE78
  cmps(c,0,(int32_t)c->r[3],0); // 800DCE7C
  if (crb(c,2)) { goto L_800DCE88; } // 800DCE80
  c->lr=0x800DCE88u; f_800DCDCC(c); // 800DCE84
L_800DCE88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCE88
  c->lr=c->r[0]; // 800DCE8C
  c->r[1]=c->r[1]+0x00000010u; // 800DCE90
  return; // 800DCE94
}

// fn_800DCE98
void f_800DCE98(Ctx* __restrict c) {
  trace_call(0x800DCE98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCE98
  c->r[0]=c->lr; // 800DCE9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCEA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCEA4
  c->r[31]=c->r[3]|c->r[3]; // 800DCEA8
  c->lr=0x800DCEB0u; f_800D7120(c); // 800DCEAC
  c->r[4]=0u+0x80410000u; // 800DCEB0
  c->r[3]=0u+0x09CF0000u; // 800DCEB4
  c->r[0]=c->r[3]+0xFFFF9AC9u; // 800DCEB8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DCEBC
  c->r[4]=c->r[4]+0x000074DCu; // 800DCEC0
  c->r[3]=c->r[31]|c->r[31]; // 800DCEC4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DCEC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCED0
  c->lr=c->r[0]; // 800DCED4
  c->r[1]=c->r[1]+0x00000010u; // 800DCED8
  return; // 800DCEDC
}

// fn_800DCEE0
void f_800DCEE0(Ctx* __restrict c) {
  trace_call(0x800DCEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCEE0
  c->r[0]=c->lr; // 800DCEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCEE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DCEEC
  c->r[30]=c->r[3]|c->r[3]; // 800DCEF0
  c->r[31]=c->r[4]|c->r[4]; // 800DCEF4
  c->lr=0x800DCEFCu; f_8030D728(c); // 800DCEF8
  c->r[3]=c->r[31]|c->r[31]; // 800DCEFC
  c->r[4]=0u+0x00000000u; // 800DCF00
  c->lr=0x800DCF08u; f_8030BE30(c); // 800DCF04
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DCF08
  c->r[3]=c->r[31]|c->r[31]; // 800DCF0C
  c->lr=0x800DCF14u; f_8030BD1C(c); // 800DCF10
  W8(c->r[30]+0x00000034u,c->r[3]); // 800DCF14
  c->r[3]=c->r[31]|c->r[31]; // 800DCF18
  c->lr=0x800DCF20u; f_8030C0A0(c); // 800DCF1C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800DCF20
  c->r[3]=c->r[31]|c->r[31]; // 800DCF24
  c->lr=0x800DCF2Cu; f_8030BD1C(c); // 800DCF28
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DCF2C
  c->r[3]=c->r[31]|c->r[31]; // 800DCF30
  c->lr=0x800DCF38u; f_8030C0A0(c); // 800DCF34
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DCF38
  c->r[3]=c->r[31]|c->r[31]; // 800DCF3C
  c->lr=0x800DCF44u; f_8030BD1C(c); // 800DCF40
  W8(c->r[30]+0x00000044u,c->r[3]); // 800DCF44
  c->r[3]=c->r[31]|c->r[31]; // 800DCF48
  c->lr=0x800DCF50u; f_8030BD1C(c); // 800DCF4C
  W8(c->r[30]+0x00000045u,c->r[3]); // 800DCF50
  c->r[3]=c->r[31]|c->r[31]; // 800DCF54
  c->lr=0x800DCF5Cu; f_8030BD1C(c); // 800DCF58
  W8(c->r[30]+0x00000046u,c->r[3]); // 800DCF5C
  c->r[3]=c->r[31]|c->r[31]; // 800DCF60
  c->lr=0x800DCF68u; f_8030C0A0(c); // 800DCF64
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DCF68
  c->r[3]=c->r[31]|c->r[31]; // 800DCF6C
  c->lr=0x800DCF74u; f_8030C0A0(c); // 800DCF70
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DCF74
  c->r[3]=c->r[31]|c->r[31]; // 800DCF78
  c->lr=0x800DCF80u; f_8030BD1C(c); // 800DCF7C
  W32(c->r[30]+0x00000050u,c->r[3]); // 800DCF80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DCF84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCF88
  c->lr=c->r[0]; // 800DCF8C
  c->r[1]=c->r[1]+0x00000010u; // 800DCF90
  return; // 800DCF94
}

// fn_800DCF98
void f_800DCF98(Ctx* __restrict c) {
  trace_call(0x800DCF98u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DCF98
  c->r[11]=R32(c->r[3]+0x00000004u); // 800DCF9C
  c->r[10]=R32(c->r[3]+0x00000030u); // 800DCFA0
  c->r[9]=R8(c->r[3]+0x00000034u); // 800DCFA4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DCFA8
  c->r[8]=R32(c->r[3]+0x0000003Cu); // 800DCFAC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DCFB0
  c->r[7]=R8(c->r[3]+0x00000044u); // 800DCFB4
  c->r[6]=R8(c->r[3]+0x00000045u); // 800DCFB8
  c->r[5]=R8(c->r[3]+0x00000046u); // 800DCFBC
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCFC0
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCFC4
  c->r[0]=R32(c->r[3]+0x00000050u); // 800DCFC8
  W32(c->r[4]+0x00000000u,c->r[12]); // 800DCFCC
  W32(c->r[4]+0x00000004u,c->r[11]); // 800DCFD0
  W32(c->r[4]+0x00000030u,c->r[10]); // 800DCFD4
  W8(c->r[4]+0x00000034u,c->r[9]); // 800DCFD8
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[3]);} // 800DCFDC
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 800DCFE0
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[2]);} // 800DCFE4
  W8(c->r[4]+0x00000044u,c->r[7]); // 800DCFE8
  W8(c->r[4]+0x00000045u,c->r[6]); // 800DCFEC
  W8(c->r[4]+0x00000046u,c->r[5]); // 800DCFF0
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[1]);} // 800DCFF4
  {uint32_t ea=c->r[4]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DCFF8
  W32(c->r[4]+0x00000050u,c->r[0]); // 800DCFFC
  return; // 800DD000
}

// fn_800DD004
void f_800DD004(Ctx* __restrict c) {
  trace_call(0x800DD004u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD004
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD008
  c->ctr=c->r[12]; // 800DD00C
  if (true) { dispatch(c,c->ctr); return; } // 800DD010
}

// fn_800DD014
void f_800DD014(Ctx* __restrict c) {
  trace_call(0x800DD014u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD014
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD018
  c->ctr=c->r[12]; // 800DD01C
  if (true) { dispatch(c,c->ctr); return; } // 800DD020
}

// fn_800DD024
void f_800DD024(Ctx* __restrict c) {
  trace_call(0x800DD024u);
  c->r[3]=0u+0x80410000u; // 800DD024
  c->r[3]=c->r[3]+0xFFFFD9F2u; // 800DD028
  return; // 800DD02C
}

// fn_800DD030
void f_800DD030(Ctx* __restrict c) {
  trace_call(0x800DD030u);
  c->r[3]=0u+0x00000054u; // 800DD030
  return; // 800DD034
}

// fn_800DD038
void f_800DD038(Ctx* __restrict c) {
  trace_call(0x800DD038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD038
  c->r[0]=c->lr; // 800DD03C
  c->r[3]=0u+0x00000054u; // 800DD040
  c->r[4]=c->r[13]+0xFFFFB628u; // 800DD044
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD048
  c->r[5]=0u+0x00000000u; // 800DD04C
  c->r[6]=0u+0x00001001u; // 800DD050
  c->lr=0x800DD058u; f_80244D20(c); // 800DD054
  cmps(c,0,(int32_t)c->r[3],0); // 800DD058
  if (crb(c,2)) { goto L_800DD064; } // 800DD05C
  c->lr=0x800DD064u; f_800DCE98(c); // 800DD060
L_800DD064:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD064
  c->lr=c->r[0]; // 800DD068
  c->r[1]=c->r[1]+0x00000010u; // 800DD06C
  return; // 800DD070
}

// fn_800DD074
void f_800DD074(Ctx* __restrict c) {
  trace_call(0x800DD074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD074
  c->r[0]=c->lr; // 800DD078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD080
  c->r[31]=c->r[3]|c->r[3]; // 800DD084
  c->lr=0x800DD08Cu; f_800D7120(c); // 800DD088
  c->r[4]=0u+0x80410000u; // 800DD08C
  c->r[3]=0u+0xDC6E0000u; // 800DD090
  c->r[0]=c->r[3]+0xFFFF9AB7u; // 800DD094
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD098
  c->r[4]=c->r[4]+0x000074A8u; // 800DD09C
  c->r[3]=c->r[31]|c->r[31]; // 800DD0A0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DD0A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD0A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD0AC
  c->lr=c->r[0]; // 800DD0B0
  c->r[1]=c->r[1]+0x00000010u; // 800DD0B4
  return; // 800DD0B8
}

// fn_800DD0BC
void f_800DD0BC(Ctx* __restrict c) {
  trace_call(0x800DD0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD0BC
  c->r[0]=c->lr; // 800DD0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD0C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD0C8
  c->r[30]=c->r[3]|c->r[3]; // 800DD0CC
  c->r[31]=c->r[4]|c->r[4]; // 800DD0D0
  c->lr=0x800DD0D8u; f_8030D728(c); // 800DD0D4
  c->r[3]=c->r[31]|c->r[31]; // 800DD0D8
  c->lr=0x800DD0E0u; f_8030C0A0(c); // 800DD0DC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DD0E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD0E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD0E8
  c->lr=c->r[0]; // 800DD0EC
  c->r[1]=c->r[1]+0x00000010u; // 800DD0F0
  return; // 800DD0F4
}

// fn_800DD0F8
void f_800DD0F8(Ctx* __restrict c) {
  trace_call(0x800DD0F8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DD0F8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DD0FC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD100
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DD104
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DD108
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800DD10C
  return; // 800DD110
}

// fn_800DD114
void f_800DD114(Ctx* __restrict c) {
  trace_call(0x800DD114u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD114
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD118
  c->ctr=c->r[12]; // 800DD11C
  if (true) { dispatch(c,c->ctr); return; } // 800DD120
}

// fn_800DD124
void f_800DD124(Ctx* __restrict c) {
  trace_call(0x800DD124u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD124
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD128
  c->ctr=c->r[12]; // 800DD12C
  if (true) { dispatch(c,c->ctr); return; } // 800DD130
}

// fn_800DD134
void f_800DD134(Ctx* __restrict c) {
  trace_call(0x800DD134u);
  c->r[3]=0u+0x80410000u; // 800DD134
  c->r[3]=c->r[3]+0xFFFFDA03u; // 800DD138
  return; // 800DD13C
}

// fn_800DD140
void f_800DD140(Ctx* __restrict c) {
  trace_call(0x800DD140u);
  c->r[3]=0u+0x00000034u; // 800DD140
  return; // 800DD144
}

// fn_800DD148
void f_800DD148(Ctx* __restrict c) {
  trace_call(0x800DD148u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD148
  c->r[0]=c->lr; // 800DD14C
  c->r[3]=0u+0x00000034u; // 800DD150
  c->r[4]=c->r[13]+0xFFFFB62Du; // 800DD154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD158
  c->r[5]=0u+0x00000000u; // 800DD15C
  c->r[6]=0u+0x00001001u; // 800DD160
  c->lr=0x800DD168u; f_80244D20(c); // 800DD164
  cmps(c,0,(int32_t)c->r[3],0); // 800DD168
  if (crb(c,2)) { goto L_800DD174; } // 800DD16C
  c->lr=0x800DD174u; f_800DD074(c); // 800DD170
L_800DD174:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD174
  c->lr=c->r[0]; // 800DD178
  c->r[1]=c->r[1]+0x00000010u; // 800DD17C
  return; // 800DD180
}

// fn_800DD184
void f_800DD184(Ctx* __restrict c) {
  trace_call(0x800DD184u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD184
  c->r[0]=c->lr; // 800DD188
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD18C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD190
  c->r[31]=c->r[3]|c->r[3]; // 800DD194
  c->lr=0x800DD19Cu; f_800D7120(c); // 800DD198
  c->r[4]=0u+0x80410000u; // 800DD19C
  c->r[3]=0u+0xBFA30000u; // 800DD1A0
  c->r[0]=c->r[3]+0xFFFFFE1Du; // 800DD1A4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD1A8
  c->r[4]=c->r[4]+0x00007474u; // 800DD1AC
  c->r[3]=c->r[31]|c->r[31]; // 800DD1B0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DD1B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD1B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD1BC
  c->lr=c->r[0]; // 800DD1C0
  c->r[1]=c->r[1]+0x00000010u; // 800DD1C4
  return; // 800DD1C8
}

// fn_800DD1CC
void f_800DD1CC(Ctx* __restrict c) {
  trace_call(0x800DD1CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD1CC
  c->r[0]=c->lr; // 800DD1D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD1D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD1D8
  c->r[30]=c->r[3]|c->r[3]; // 800DD1DC
  c->r[31]=c->r[4]|c->r[4]; // 800DD1E0
  c->lr=0x800DD1E8u; f_8030D728(c); // 800DD1E4
  c->r[3]=c->r[31]|c->r[31]; // 800DD1E8
  c->r[4]=0u+0x00000000u; // 800DD1EC
  c->lr=0x800DD1F4u; f_8030BE30(c); // 800DD1F0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DD1F4
  c->r[3]=c->r[31]|c->r[31]; // 800DD1F8
  c->lr=0x800DD200u; f_8030C0A0(c); // 800DD1FC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DD200
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD204
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD208
  c->lr=c->r[0]; // 800DD20C
  c->r[1]=c->r[1]+0x00000010u; // 800DD210
  return; // 800DD214
}

// fn_800DD218
void f_800DD218(Ctx* __restrict c) {
  trace_call(0x800DD218u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DD218
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DD21C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800DD220
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD224
  W32(c->r[4]+0x00000000u,c->r[6]); // 800DD228
  W32(c->r[4]+0x00000004u,c->r[5]); // 800DD22C
  W32(c->r[4]+0x00000030u,c->r[0]); // 800DD230
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800DD234
  return; // 800DD238
}

// fn_800DD23C
void f_800DD23C(Ctx* __restrict c) {
  trace_call(0x800DD23Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD23C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD240
  c->ctr=c->r[12]; // 800DD244
  if (true) { dispatch(c,c->ctr); return; } // 800DD248
}

// fn_800DD24C
void f_800DD24C(Ctx* __restrict c) {
  trace_call(0x800DD24Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD24C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD250
  c->ctr=c->r[12]; // 800DD254
  if (true) { dispatch(c,c->ctr); return; } // 800DD258
}

// fn_800DD25C
void f_800DD25C(Ctx* __restrict c) {
  trace_call(0x800DD25Cu);
  c->r[3]=0u+0x80410000u; // 800DD25C
  c->r[3]=c->r[3]+0xFFFFDA17u; // 800DD260
  return; // 800DD264
}

// fn_800DD268
void f_800DD268(Ctx* __restrict c) {
  trace_call(0x800DD268u);
  c->r[3]=0u+0x00000038u; // 800DD268
  return; // 800DD26C
}

// fn_800DD270
void f_800DD270(Ctx* __restrict c) {
  trace_call(0x800DD270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD270
  c->r[0]=c->lr; // 800DD274
  c->r[3]=0u+0x00000038u; // 800DD278
  c->r[4]=c->r[13]+0xFFFFB632u; // 800DD27C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD280
  c->r[5]=0u+0x00000000u; // 800DD284
  c->r[6]=0u+0x00001001u; // 800DD288
  c->lr=0x800DD290u; f_80244D20(c); // 800DD28C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD290
  if (crb(c,2)) { goto L_800DD29C; } // 800DD294
  c->lr=0x800DD29Cu; f_800DD184(c); // 800DD298
L_800DD29C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD29C
  c->lr=c->r[0]; // 800DD2A0
  c->r[1]=c->r[1]+0x00000010u; // 800DD2A4
  return; // 800DD2A8
}

// fn_800DD2AC
void f_800DD2AC(Ctx* __restrict c) {
  trace_call(0x800DD2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD2AC
  c->r[0]=c->lr; // 800DD2B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD2B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD2B8
  c->r[31]=c->r[3]|c->r[3]; // 800DD2BC
  c->lr=0x800DD2C4u; f_800D7120(c); // 800DD2C0
  c->r[3]=0u+0x80410000u; // 800DD2C4
  c->r[0]=0u+0x00000000u; // 800DD2C8
  c->r[3]=c->r[3]+0x00007440u; // 800DD2CC
  W32(c->r[31]+0x00000008u,c->r[3]); // 800DD2D0
  c->r[3]=c->r[31]|c->r[31]; // 800DD2D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD2D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD2DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD2E0
  c->lr=c->r[0]; // 800DD2E4
  c->r[1]=c->r[1]+0x00000010u; // 800DD2E8
  return; // 800DD2EC
}

// fn_800DD2F0
void f_800DD2F0(Ctx* __restrict c) {
  trace_call(0x800DD2F0u);
  f_8030D728(c); return; // 800DD2F0
}

// fn_800DD2F4
void f_800DD2F4(Ctx* __restrict c) {
  trace_call(0x800DD2F4u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DD2F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DD2F8
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DD2FC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DD300
  return; // 800DD304
}

// fn_800DD308
void f_800DD308(Ctx* __restrict c) {
  trace_call(0x800DD308u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD308
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD30C
  c->ctr=c->r[12]; // 800DD310
  if (true) { dispatch(c,c->ctr); return; } // 800DD314
}

// fn_800DD318
void f_800DD318(Ctx* __restrict c) {
  trace_call(0x800DD318u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD318
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD31C
  c->ctr=c->r[12]; // 800DD320
  if (true) { dispatch(c,c->ctr); return; } // 800DD324
}

// fn_800DD328
void f_800DD328(Ctx* __restrict c) {
  trace_call(0x800DD328u);
  c->r[3]=0u+0x80410000u; // 800DD328
  c->r[3]=c->r[3]+0xFFFFDA27u; // 800DD32C
  return; // 800DD330
}

// fn_800DD334
void f_800DD334(Ctx* __restrict c) {
  trace_call(0x800DD334u);
  c->r[3]=0u+0x00000030u; // 800DD334
  return; // 800DD338
}

// fn_800DD33C
void f_800DD33C(Ctx* __restrict c) {
  trace_call(0x800DD33Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD33C
  c->r[0]=c->lr; // 800DD340
  c->r[3]=0u+0x00000030u; // 800DD344
  c->r[4]=c->r[13]+0xFFFFB637u; // 800DD348
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD34C
  c->r[5]=0u+0x00000000u; // 800DD350
  c->r[6]=0u+0x00001001u; // 800DD354
  c->lr=0x800DD35Cu; f_80244D20(c); // 800DD358
  cmps(c,0,(int32_t)c->r[3],0); // 800DD35C
  if (crb(c,2)) { goto L_800DD368; } // 800DD360
  c->lr=0x800DD368u; f_800DD2AC(c); // 800DD364
L_800DD368:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD368
  c->lr=c->r[0]; // 800DD36C
  c->r[1]=c->r[1]+0x00000010u; // 800DD370
  return; // 800DD374
}

// fn_800DD378
void f_800DD378(Ctx* __restrict c) {
  trace_call(0x800DD378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD378
  c->r[0]=c->lr; // 800DD37C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD384
  c->r[31]=c->r[3]|c->r[3]; // 800DD388
  c->lr=0x800DD390u; f_800D7120(c); // 800DD38C
  c->r[4]=0u+0x80410000u; // 800DD390
  c->r[3]=0u+0x45F10000u; // 800DD394
  c->r[0]=c->r[3]+0xFFFFB0D3u; // 800DD398
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD39C
  c->r[4]=c->r[4]+0x0000740Cu; // 800DD3A0
  c->r[3]=c->r[31]|c->r[31]; // 800DD3A4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DD3A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD3AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD3B0
  c->lr=c->r[0]; // 800DD3B4
  c->r[1]=c->r[1]+0x00000010u; // 800DD3B8
  return; // 800DD3BC
}

// fn_800DD3C0
void f_800DD3C0(Ctx* __restrict c) {
  trace_call(0x800DD3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD3C0
  c->r[0]=c->lr; // 800DD3C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD3C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD3CC
  c->r[30]=c->r[3]|c->r[3]; // 800DD3D0
  c->r[31]=c->r[4]|c->r[4]; // 800DD3D4
  c->lr=0x800DD3DCu; f_8030D728(c); // 800DD3D8
  c->r[3]=c->r[31]|c->r[31]; // 800DD3DC
  c->r[4]=0u+0x00000000u; // 800DD3E0
  c->lr=0x800DD3E8u; f_8030BE30(c); // 800DD3E4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DD3E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD3EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD3F0
  c->lr=c->r[0]; // 800DD3F4
  c->r[1]=c->r[1]+0x00000010u; // 800DD3F8
  return; // 800DD3FC
}

// fn_800DD400
void f_800DD400(Ctx* __restrict c) {
  trace_call(0x800DD400u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DD400
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DD404
  c->r[0]=R32(c->r[3]+0x00000030u); // 800DD408
  W32(c->r[4]+0x00000000u,c->r[6]); // 800DD40C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800DD410
  W32(c->r[4]+0x00000030u,c->r[0]); // 800DD414
  return; // 800DD418
}

// fn_800DD41C
void f_800DD41C(Ctx* __restrict c) {
  trace_call(0x800DD41Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD41C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD420
  c->ctr=c->r[12]; // 800DD424
  if (true) { dispatch(c,c->ctr); return; } // 800DD428
}

// fn_800DD42C
void f_800DD42C(Ctx* __restrict c) {
  trace_call(0x800DD42Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD42C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD430
  c->ctr=c->r[12]; // 800DD434
  if (true) { dispatch(c,c->ctr); return; } // 800DD438
}

// fn_800DD43C
void f_800DD43C(Ctx* __restrict c) {
  trace_call(0x800DD43Cu);
  c->r[3]=0u+0x80410000u; // 800DD43C
  c->r[3]=c->r[3]+0xFFFFDA3Eu; // 800DD440
  return; // 800DD444
}

// fn_800DD448
void f_800DD448(Ctx* __restrict c) {
  trace_call(0x800DD448u);
  c->r[3]=0u+0x00000034u; // 800DD448
  return; // 800DD44C
}

// fn_800DD450
void f_800DD450(Ctx* __restrict c) {
  trace_call(0x800DD450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD450
  c->r[0]=c->lr; // 800DD454
  c->r[3]=0u+0x00000034u; // 800DD458
  c->r[4]=c->r[13]+0xFFFFB63Cu; // 800DD45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD460
  c->r[5]=0u+0x00000000u; // 800DD464
  c->r[6]=0u+0x00001001u; // 800DD468
  c->lr=0x800DD470u; f_80244D20(c); // 800DD46C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD470
  if (crb(c,2)) { goto L_800DD47C; } // 800DD474
  c->lr=0x800DD47Cu; f_800DD378(c); // 800DD478
L_800DD47C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD47C
  c->lr=c->r[0]; // 800DD480
  c->r[1]=c->r[1]+0x00000010u; // 800DD484
  return; // 800DD488
}

// fn_800DD48C
void f_800DD48C(Ctx* __restrict c) {
  trace_call(0x800DD48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD48C
  c->r[0]=c->lr; // 800DD490
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD494
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD498
  c->r[31]=c->r[3]|c->r[3]; // 800DD49C
  c->lr=0x800DD4A4u; f_800D7120(c); // 800DD4A0
  c->r[4]=0u+0x80410000u; // 800DD4A4
  c->r[3]=0u+0xC0E40000u; // 800DD4A8
  c->r[0]=c->r[3]+0xFFFF8D2Bu; // 800DD4AC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD4B0
  c->r[4]=c->r[4]+0x000073D8u; // 800DD4B4
  c->r[3]=c->r[31]|c->r[31]; // 800DD4B8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DD4BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD4C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD4C4
  c->lr=c->r[0]; // 800DD4C8
  c->r[1]=c->r[1]+0x00000010u; // 800DD4CC
  return; // 800DD4D0
}

// fn_800DD4D4
void f_800DD4D4(Ctx* __restrict c) {
  trace_call(0x800DD4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD4D4
  c->r[0]=c->lr; // 800DD4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD4DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD4E0
  c->r[30]=c->r[3]|c->r[3]; // 800DD4E4
  c->r[31]=c->r[4]|c->r[4]; // 800DD4E8
  c->lr=0x800DD4F0u; f_8030D728(c); // 800DD4EC
  c->r[3]=c->r[31]|c->r[31]; // 800DD4F0
  c->r[4]=0u+0x00000000u; // 800DD4F4
  c->lr=0x800DD4FCu; f_8030BE30(c); // 800DD4F8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DD4FC
  c->r[3]=c->r[31]|c->r[31]; // 800DD500
  c->r[4]=0u+0x00000000u; // 800DD504
  c->lr=0x800DD50Cu; f_8030BE30(c); // 800DD508
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DD50C
  c->r[3]=c->r[31]|c->r[31]; // 800DD510
  c->lr=0x800DD518u; f_8030C0A0(c); // 800DD514
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800DD518
  c->r[3]=c->r[31]|c->r[31]; // 800DD51C
  c->lr=0x800DD524u; f_8030C0A0(c); // 800DD520
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DD524
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD528
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD52C
  c->lr=c->r[0]; // 800DD530
  c->r[1]=c->r[1]+0x00000010u; // 800DD534
  return; // 800DD538
}

// fn_800DD53C
void f_800DD53C(Ctx* __restrict c) {
  trace_call(0x800DD53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD53C
  c->r[0]=c->lr; // 800DD540
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD548
  c->r[31]=c->r[4]|c->r[4]; // 800DD54C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD550
  c->r[30]=c->r[3]|c->r[3]; // 800DD554
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD558
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DD55C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DD560
  c->r[3]=c->r[4]+0x00000030u; // 800DD564
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DD568
  c->r[4]=c->r[30]+0x00000030u; // 800DD56C
  c->lr=0x800DD574u; f_8003F6E4(c); // 800DD570
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD574
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800DD578
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD57C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DD580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD584
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD588
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD58C
  c->lr=c->r[0]; // 800DD590
  c->r[1]=c->r[1]+0x00000010u; // 800DD594
  return; // 800DD598
}

// fn_800DD59C
void f_800DD59C(Ctx* __restrict c) {
  trace_call(0x800DD59Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD59C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD5A0
  c->ctr=c->r[12]; // 800DD5A4
  if (true) { dispatch(c,c->ctr); return; } // 800DD5A8
}

// fn_800DD5AC
void f_800DD5AC(Ctx* __restrict c) {
  trace_call(0x800DD5ACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD5AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD5B0
  c->ctr=c->r[12]; // 800DD5B4
  if (true) { dispatch(c,c->ctr); return; } // 800DD5B8
}

// fn_800DD5BC
void f_800DD5BC(Ctx* __restrict c) {
  trace_call(0x800DD5BCu);
  c->r[3]=0u+0x80410000u; // 800DD5BC
  c->r[3]=c->r[3]+0xFFFFDA5Au; // 800DD5C0
  return; // 800DD5C4
}

// fn_800DD5C8
void f_800DD5C8(Ctx* __restrict c) {
  trace_call(0x800DD5C8u);
  c->r[3]=0u+0x00000040u; // 800DD5C8
  return; // 800DD5CC
}

// fn_800DD5D0
void f_800DD5D0(Ctx* __restrict c) {
  trace_call(0x800DD5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD5D0
  c->r[0]=c->lr; // 800DD5D4
  c->r[3]=0u+0x00000040u; // 800DD5D8
  c->r[4]=c->r[13]+0xFFFFB641u; // 800DD5DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD5E0
  c->r[5]=0u+0x00000000u; // 800DD5E4
  c->r[6]=0u+0x00001001u; // 800DD5E8
  c->lr=0x800DD5F0u; f_80244D20(c); // 800DD5EC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD5F0
  if (crb(c,2)) { goto L_800DD5FC; } // 800DD5F4
  c->lr=0x800DD5FCu; f_800DD48C(c); // 800DD5F8
L_800DD5FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD5FC
  c->lr=c->r[0]; // 800DD600
  c->r[1]=c->r[1]+0x00000010u; // 800DD604
  return; // 800DD608
}

// fn_800DD60C
void f_800DD60C(Ctx* __restrict c) {
  trace_call(0x800DD60Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD60C
  c->r[0]=c->lr; // 800DD610
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD614
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD618
  c->r[31]=c->r[3]|c->r[3]; // 800DD61C
  c->lr=0x800DD624u; f_800D7120(c); // 800DD620
  c->r[5]=0u+0x80410000u; // 800DD624
  c->r[3]=0u+0xC82B0000u; // 800DD628
  c->r[0]=c->r[3]+0xFFFFB339u; // 800DD62C
  c->r[4]=0u+0x00000000u; // 800DD630
  c->r[5]=c->r[5]+0x000073A4u; // 800DD634
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DD638
  c->r[3]=c->r[31]|c->r[31]; // 800DD63C
  W32(c->r[31]+0x00000040u,c->r[4]); // 800DD640
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD644
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD648
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD64C
  c->lr=c->r[0]; // 800DD650
  c->r[1]=c->r[1]+0x00000010u; // 800DD654
  return; // 800DD658
}

// fn_800DD65C
void f_800DD65C(Ctx* __restrict c) {
  trace_call(0x800DD65Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD65C
  c->r[0]=c->lr; // 800DD660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD668
  c->r[30]=c->r[3]|c->r[3]; // 800DD66C
  c->r[31]=c->r[4]|c->r[4]; // 800DD670
  c->lr=0x800DD678u; f_8030D728(c); // 800DD674
  c->r[3]=c->r[31]|c->r[31]; // 800DD678
  c->r[4]=0u+0x00000000u; // 800DD67C
  c->lr=0x800DD684u; f_8030BE30(c); // 800DD680
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DD684
  c->r[3]=c->r[31]|c->r[31]; // 800DD688
  c->r[4]=0u+0x00000000u; // 800DD68C
  c->lr=0x800DD694u; f_8030BE30(c); // 800DD690
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DD694
  c->r[3]=c->r[31]|c->r[31]; // 800DD698
  c->r[4]=0u+0x00000000u; // 800DD69C
  c->lr=0x800DD6A4u; f_8030BE30(c); // 800DD6A0
  W32(c->r[30]+0x00000038u,c->r[3]); // 800DD6A4
  c->r[3]=c->r[31]|c->r[31]; // 800DD6A8
  c->lr=0x800DD6B0u; f_8030BD1C(c); // 800DD6AC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DD6B0
  c->r[3]=c->r[31]|c->r[31]; // 800DD6B4
  c->lr=0x800DD6BCu; f_8030BD1C(c); // 800DD6B8
  W8(c->r[30]+0x00000044u,c->r[3]); // 800DD6BC
  c->r[3]=c->r[31]|c->r[31]; // 800DD6C0
  c->lr=0x800DD6C8u; f_8030BD1C(c); // 800DD6C4
  W8(c->r[30]+0x00000045u,c->r[3]); // 800DD6C8
  c->r[3]=c->r[31]|c->r[31]; // 800DD6CC
  c->lr=0x800DD6D4u; f_8030BD1C(c); // 800DD6D0
  W8(c->r[30]+0x00000046u,c->r[3]); // 800DD6D4
  c->r[3]=c->r[31]|c->r[31]; // 800DD6D8
  c->lr=0x800DD6E0u; f_8030C0A0(c); // 800DD6DC
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DD6E0
  c->r[3]=c->r[31]|c->r[31]; // 800DD6E4
  c->lr=0x800DD6ECu; f_8030C0A0(c); // 800DD6E8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DD6EC
  c->r[3]=c->r[31]|c->r[31]; // 800DD6F0
  c->lr=0x800DD6F8u; f_8030C0A0(c); // 800DD6F4
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DD6F8
  c->r[3]=c->r[31]|c->r[31]; // 800DD6FC
  c->lr=0x800DD704u; f_8030C0A0(c); // 800DD700
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800DD704
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD708
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD70C
  c->lr=c->r[0]; // 800DD710
  c->r[1]=c->r[1]+0x00000010u; // 800DD714
  return; // 800DD718
}

// fn_800DD71C
void f_800DD71C(Ctx* __restrict c) {
  trace_call(0x800DD71Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD71C
  c->r[0]=c->lr; // 800DD720
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD728
  c->r[31]=c->r[4]|c->r[4]; // 800DD72C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD730
  c->r[30]=c->r[3]|c->r[3]; // 800DD734
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD738
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DD73C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DD740
  c->r[3]=c->r[4]+0x00000030u; // 800DD744
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DD748
  c->r[4]=c->r[30]+0x00000030u; // 800DD74C
  c->lr=0x800DD754u; f_8003F6E4(c); // 800DD750
  c->r[3]=c->r[31]+0x00000038u; // 800DD754
  c->r[4]=c->r[30]+0x00000038u; // 800DD758
  c->lr=0x800DD760u; f_8003AB48(c); // 800DD75C
  c->r[0]=R8(c->r[30]+0x00000044u); // 800DD760
  W8(c->r[31]+0x00000044u,c->r[0]); // 800DD764
  c->r[0]=R8(c->r[30]+0x00000045u); // 800DD768
  W8(c->r[31]+0x00000045u,c->r[0]); // 800DD76C
  c->r[0]=R8(c->r[30]+0x00000046u); // 800DD770
  W8(c->r[31]+0x00000046u,c->r[0]); // 800DD774
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD778
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800DD77C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD780
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DD784
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD788
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DD78C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD790
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800DD794
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD798
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD79C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD7A0
  c->lr=c->r[0]; // 800DD7A4
  c->r[1]=c->r[1]+0x00000010u; // 800DD7A8
  return; // 800DD7AC
}

// fn_800DD7B0
void f_800DD7B0(Ctx* __restrict c) {
  trace_call(0x800DD7B0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD7B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD7B4
  c->ctr=c->r[12]; // 800DD7B8
  if (true) { dispatch(c,c->ctr); return; } // 800DD7BC
}

// fn_800DD7C0
void f_800DD7C0(Ctx* __restrict c) {
  trace_call(0x800DD7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD7C0
  c->r[0]=c->lr; // 800DD7C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD7C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD7CC
  c->r[29]=c->r[3]|c->r[3]; // 800DD7D0
  c->r[30]=c->r[4]|c->r[4]; // 800DD7D4
  c->r[31]=c->r[5]|c->r[5]; // 800DD7D8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800DD7DC
  cmps(c,0,(int32_t)c->r[0],7); // 800DD7E0
  if (!crb(c,0)) { goto L_800DD7F4; } // 800DD7E4
  c->r[4]=c->r[31]|c->r[31]; // 800DD7E8
  c->r[3]=c->r[3]+0x00000038u; // 800DD7EC
  c->lr=0x800DD7F4u; f_8003A994(c); // 800DD7F0
L_800DD7F4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DD7F4
  c->r[3]=c->r[29]|c->r[29]; // 800DD7F8
  c->r[4]=c->r[30]|c->r[30]; // 800DD7FC
  c->r[5]=c->r[31]|c->r[31]; // 800DD800
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD804
  c->ctr=c->r[12]; // 800DD808
  if (true) { c->lr=0x800DD810u; dispatch(c,c->ctr); } // 800DD80C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD810
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD814
  c->lr=c->r[0]; // 800DD818
  c->r[1]=c->r[1]+0x00000020u; // 800DD81C
  return; // 800DD820
}

// fn_800DD824
void f_800DD824(Ctx* __restrict c) {
  trace_call(0x800DD824u);
  c->r[3]=0u+0x80410000u; // 800DD824
  c->r[3]=c->r[3]+0xFFFFDA6Cu; // 800DD828
  return; // 800DD82C
}

// fn_800DD830
void f_800DD830(Ctx* __restrict c) {
  trace_call(0x800DD830u);
  c->r[3]=0u+0x00000058u; // 800DD830
  return; // 800DD834
}

// fn_800DD838
void f_800DD838(Ctx* __restrict c) {
  trace_call(0x800DD838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD838
  c->r[0]=c->lr; // 800DD83C
  c->r[3]=0u+0x00000058u; // 800DD840
  c->r[4]=c->r[13]+0xFFFFB646u; // 800DD844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD848
  c->r[5]=0u+0x00000000u; // 800DD84C
  c->r[6]=0u+0x00001001u; // 800DD850
  c->lr=0x800DD858u; f_80244D20(c); // 800DD854
  cmps(c,0,(int32_t)c->r[3],0); // 800DD858
  if (crb(c,2)) { goto L_800DD864; } // 800DD85C
  c->lr=0x800DD864u; f_800DD60C(c); // 800DD860
L_800DD864:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD864
  c->lr=c->r[0]; // 800DD868
  c->r[1]=c->r[1]+0x00000010u; // 800DD86C
  return; // 800DD870
}

// fn_800DD874
void f_800DD874(Ctx* __restrict c) {
  trace_call(0x800DD874u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD874
  c->r[0]=c->lr; // 800DD878
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD87C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD880
  c->r[31]=c->r[3]|c->r[3]; // 800DD884
  c->lr=0x800DD88Cu; f_800D7120(c); // 800DD888
  c->r[3]=0u+0x80410000u; // 800DD88C
  c->r[0]=0u+0x00000000u; // 800DD890
  c->r[3]=c->r[3]+0x00007370u; // 800DD894
  W32(c->r[31]+0x00000008u,c->r[3]); // 800DD898
  c->r[3]=c->r[31]|c->r[31]; // 800DD89C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD8A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD8A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD8A8
  c->lr=c->r[0]; // 800DD8AC
  c->r[1]=c->r[1]+0x00000010u; // 800DD8B0
  return; // 800DD8B4
}

// fn_800DD8B8
void f_800DD8B8(Ctx* __restrict c) {
  trace_call(0x800DD8B8u);
  f_8030D728(c); return; // 800DD8B8
}

// fn_800DD8BC
void f_800DD8BC(Ctx* __restrict c) {
  trace_call(0x800DD8BCu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DD8BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DD8C0
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DD8C4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DD8C8
  return; // 800DD8CC
}

// fn_800DD8D0
void f_800DD8D0(Ctx* __restrict c) {
  trace_call(0x800DD8D0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD8D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD8D4
  c->ctr=c->r[12]; // 800DD8D8
  if (true) { dispatch(c,c->ctr); return; } // 800DD8DC
}

// fn_800DD8E0
void f_800DD8E0(Ctx* __restrict c) {
  trace_call(0x800DD8E0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD8E0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DD8E4
  c->ctr=c->r[12]; // 800DD8E8
  if (true) { dispatch(c,c->ctr); return; } // 800DD8EC
}

// fn_800DD8F0
void f_800DD8F0(Ctx* __restrict c) {
  trace_call(0x800DD8F0u);
  c->r[3]=0u+0x80410000u; // 800DD8F0
  c->r[3]=c->r[3]+0xFFFFDA7Eu; // 800DD8F4
  return; // 800DD8F8
}

// fn_800DD8FC
void f_800DD8FC(Ctx* __restrict c) {
  trace_call(0x800DD8FCu);
  c->r[3]=0u+0x00000030u; // 800DD8FC
  return; // 800DD900
}

// fn_800DD904
void f_800DD904(Ctx* __restrict c) {
  trace_call(0x800DD904u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD904
  c->r[0]=c->lr; // 800DD908
  c->r[3]=0u+0x00000030u; // 800DD90C
  c->r[4]=c->r[13]+0xFFFFB64Bu; // 800DD910
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD914
  c->r[5]=0u+0x00000000u; // 800DD918
  c->r[6]=0u+0x00001001u; // 800DD91C
  c->lr=0x800DD924u; f_80244D20(c); // 800DD920
  cmps(c,0,(int32_t)c->r[3],0); // 800DD924
  if (crb(c,2)) { goto L_800DD930; } // 800DD928
  c->lr=0x800DD930u; f_800DD874(c); // 800DD92C
L_800DD930:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD930
  c->lr=c->r[0]; // 800DD934
  c->r[1]=c->r[1]+0x00000010u; // 800DD938
  return; // 800DD93C
}

// fn_800DD940
void f_800DD940(Ctx* __restrict c) {
  trace_call(0x800DD940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD940
  c->r[0]=c->lr; // 800DD944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD94C
  c->r[31]=c->r[3]|c->r[3]; // 800DD950
  c->lr=0x800DD958u; f_800D7120(c); // 800DD954
  c->r[4]=0u+0x80410000u; // 800DD958
  c->r[3]=0u+0x87CC0000u; // 800DD95C
  c->r[0]=c->r[3]+0x0000467Du; // 800DD960
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DD964
  c->r[4]=c->r[4]+0x0000733Cu; // 800DD968
  c->r[3]=c->r[31]|c->r[31]; // 800DD96C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DD970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD974
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD978
  c->lr=c->r[0]; // 800DD97C
  c->r[1]=c->r[1]+0x00000010u; // 800DD980
  return; // 800DD984
}

// fn_800DD988
void f_800DD988(Ctx* __restrict c) {
  trace_call(0x800DD988u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD988
  c->r[0]=c->lr; // 800DD98C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD990
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DD994
  c->r[30]=c->r[3]|c->r[3]; // 800DD998
  c->r[31]=c->r[4]|c->r[4]; // 800DD99C
  c->lr=0x800DD9A4u; f_8030D728(c); // 800DD9A0
  c->r[3]=c->r[31]|c->r[31]; // 800DD9A4
  c->lr=0x800DD9ACu; f_8030C0A0(c); // 800DD9A8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DD9AC
  c->r[3]=c->r[31]|c->r[31]; // 800DD9B0
  c->lr=0x800DD9B8u; f_8030C0A0(c); // 800DD9B4
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DD9B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DD9BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD9C0
  c->lr=c->r[0]; // 800DD9C4
  c->r[1]=c->r[1]+0x00000010u; // 800DD9C8
  return; // 800DD9CC
}

// fn_800DD9D0
void f_800DD9D0(Ctx* __restrict c) {
  trace_call(0x800DD9D0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DD9D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DD9D4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD9D8
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD9DC
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DD9E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DD9E4
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 800DD9E8
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800DD9EC
  return; // 800DD9F0
}

// fn_800DD9F4
void f_800DD9F4(Ctx* __restrict c) {
  trace_call(0x800DD9F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DD9F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DD9F8
  c->ctr=c->r[12]; // 800DD9FC
  if (true) { dispatch(c,c->ctr); return; } // 800DDA00
}

// fn_800DDA04
void f_800DDA04(Ctx* __restrict c) {
  trace_call(0x800DDA04u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DDA04
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DDA08
  c->ctr=c->r[12]; // 800DDA0C
  if (true) { dispatch(c,c->ctr); return; } // 800DDA10
}

// fn_800DDA14
void f_800DDA14(Ctx* __restrict c) {
  trace_call(0x800DDA14u);
  c->r[3]=0u+0x80410000u; // 800DDA14
  c->r[3]=c->r[3]+0xFFFFDA98u; // 800DDA18
  return; // 800DDA1C
}

// fn_800DDA20
void f_800DDA20(Ctx* __restrict c) {
  trace_call(0x800DDA20u);
  c->r[3]=0u+0x00000038u; // 800DDA20
  return; // 800DDA24
}

// fn_800DDA28
void f_800DDA28(Ctx* __restrict c) {
  trace_call(0x800DDA28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA28
  c->r[0]=c->lr; // 800DDA2C
  c->r[3]=0u+0x00000038u; // 800DDA30
  c->r[4]=c->r[13]+0xFFFFB650u; // 800DDA34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDA38
  c->r[5]=0u+0x00000000u; // 800DDA3C
  c->r[6]=0u+0x00001001u; // 800DDA40
  c->lr=0x800DDA48u; f_80244D20(c); // 800DDA44
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA48
  if (crb(c,2)) { goto L_800DDA54; } // 800DDA4C
  c->lr=0x800DDA54u; f_800DD940(c); // 800DDA50
L_800DDA54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDA54
  c->lr=c->r[0]; // 800DDA58
  c->r[1]=c->r[1]+0x00000010u; // 800DDA5C
  return; // 800DDA60
}

// fn_800DDA64
void f_800DDA64(Ctx* __restrict c) {
  trace_call(0x800DDA64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA64
  c->r[0]=c->lr; // 800DDA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDA6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDA70
  c->r[31]=c->r[3]|c->r[3]; // 800DDA74
  c->lr=0x800DDA7Cu; f_800D7120(c); // 800DDA78
  c->r[5]=0u+0x80410000u; // 800DDA7C
  c->r[3]=0u+0xBBD00000u; // 800DDA80
  c->r[4]=0u+0x00000000u; // 800DDA84
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DDA88
  c->r[0]=c->r[3]+0x0000755Du; // 800DDA8C
  c->r[5]=c->r[5]+0x00007308u; // 800DDA90
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DDA94
  c->r[3]=c->r[31]|c->r[31]; // 800DDA98
  W32(c->r[31]+0x00000044u,c->r[4]); // 800DDA9C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DDAA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDAA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDAA8
  c->lr=c->r[0]; // 800DDAAC
  c->r[1]=c->r[1]+0x00000010u; // 800DDAB0
  return; // 800DDAB4
}

// fn_800DDAB8
void f_800DDAB8(Ctx* __restrict c) {
  trace_call(0x800DDAB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDAB8
  c->r[0]=c->lr; // 800DDABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDAC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDAC4
  c->r[30]=c->r[3]|c->r[3]; // 800DDAC8
  c->r[31]=c->r[4]|c->r[4]; // 800DDACC
  c->lr=0x800DDAD4u; f_8030D728(c); // 800DDAD0
  c->r[3]=c->r[31]|c->r[31]; // 800DDAD4
  c->r[4]=0u+0x00000000u; // 800DDAD8
  c->lr=0x800DDAE0u; f_8030BE30(c); // 800DDADC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DDAE0
  c->r[3]=c->r[31]|c->r[31]; // 800DDAE4
  c->lr=0x800DDAECu; f_8030BD1C(c); // 800DDAE8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DDAEC
  c->r[3]=c->r[31]|c->r[31]; // 800DDAF0
  c->r[4]=0u+0x00000000u; // 800DDAF4
  c->lr=0x800DDAFCu; f_8030BE30(c); // 800DDAF8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DDAFC
  c->r[3]=c->r[31]|c->r[31]; // 800DDB00
  c->lr=0x800DDB08u; f_8030BD1C(c); // 800DDB04
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DDB08
  c->r[3]=c->r[31]|c->r[31]; // 800DDB0C
  c->lr=0x800DDB14u; f_8030C0A0(c); // 800DDB10
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DDB14
  c->r[3]=c->r[31]|c->r[31]; // 800DDB18
  c->lr=0x800DDB20u; f_8030C0A0(c); // 800DDB1C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DDB20
  c->r[3]=c->r[31]|c->r[31]; // 800DDB24
  c->lr=0x800DDB2Cu; f_8030C0A0(c); // 800DDB28
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DDB2C
  c->r[3]=c->r[31]|c->r[31]; // 800DDB30
  c->lr=0x800DDB38u; f_8030BD1C(c); // 800DDB34
  W32(c->r[30]+0x00000054u,c->r[3]); // 800DDB38
  c->r[3]=c->r[31]|c->r[31]; // 800DDB3C
  c->lr=0x800DDB44u; f_8030BD1C(c); // 800DDB40
  W32(c->r[30]+0x00000058u,c->r[3]); // 800DDB44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDB48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDB4C
  c->lr=c->r[0]; // 800DDB50
  c->r[1]=c->r[1]+0x00000010u; // 800DDB54
  return; // 800DDB58
}

// fn_800DDB5C
void f_800DDB5C(Ctx* __restrict c) {
  trace_call(0x800DDB5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDB5C
  c->r[0]=c->lr; // 800DDB60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDB64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDB68
  c->r[31]=c->r[4]|c->r[4]; // 800DDB6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DDB70
  c->r[30]=c->r[3]|c->r[3]; // 800DDB74
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DDB78
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DDB7C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DDB80
  c->r[3]=c->r[4]+0x00000030u; // 800DDB84
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DDB88
  c->r[4]=c->r[30]+0x00000030u; // 800DDB8C
  c->lr=0x800DDB94u; f_8003AB48(c); // 800DDB90
  c->r[3]=c->r[31]+0x0000003Cu; // 800DDB94
  c->r[4]=c->r[30]+0x0000003Cu; // 800DDB98
  c->lr=0x800DDBA0u; f_8003AB48(c); // 800DDB9C
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDBA0
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800DDBA4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDBA8
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DDBAC
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDBB0
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DDBB4
  c->r[0]=R32(c->r[30]+0x00000054u); // 800DDBB8
  W32(c->r[31]+0x00000054u,c->r[0]); // 800DDBBC
  c->r[0]=R32(c->r[30]+0x00000058u); // 800DDBC0
  W32(c->r[31]+0x00000058u,c->r[0]); // 800DDBC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDBC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DDBCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDBD0
  c->lr=c->r[0]; // 800DDBD4
  c->r[1]=c->r[1]+0x00000010u; // 800DDBD8
  return; // 800DDBDC
}

// fn_800DDBE0
void f_800DDBE0(Ctx* __restrict c) {
  trace_call(0x800DDBE0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DDBE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DDBE4
  c->ctr=c->r[12]; // 800DDBE8
  if (true) { dispatch(c,c->ctr); return; } // 800DDBEC
}

// fn_800DDBF0
void f_800DDBF0(Ctx* __restrict c) {
  trace_call(0x800DDBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDBF0
  c->r[0]=c->lr; // 800DDBF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDBF8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDBFC
  c->r[29]=c->r[3]|c->r[3]; // 800DDC00
  c->r[30]=c->r[4]|c->r[4]; // 800DDC04
  c->r[31]=c->r[5]|c->r[5]; // 800DDC08
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DDC0C
  cmps(c,0,(int32_t)c->r[0],7); // 800DDC10
  if (!crb(c,0)) { goto L_800DDC24; } // 800DDC14
  c->r[4]=c->r[31]|c->r[31]; // 800DDC18
  c->r[3]=c->r[3]+0x00000030u; // 800DDC1C
  c->lr=0x800DDC24u; f_8003A994(c); // 800DDC20
L_800DDC24:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DDC24
  cmps(c,0,(int32_t)c->r[0],7); // 800DDC28
  if (!crb(c,0)) { goto L_800DDC3C; } // 800DDC2C
  c->r[4]=c->r[31]|c->r[31]; // 800DDC30
  c->r[3]=c->r[29]+0x0000003Cu; // 800DDC34
  c->lr=0x800DDC3Cu; f_8003A994(c); // 800DDC38
L_800DDC3C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DDC3C
  c->r[3]=c->r[29]|c->r[29]; // 800DDC40
  c->r[4]=c->r[30]|c->r[30]; // 800DDC44
  c->r[5]=c->r[31]|c->r[31]; // 800DDC48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DDC4C
  c->ctr=c->r[12]; // 800DDC50
  if (true) { c->lr=0x800DDC58u; dispatch(c,c->ctr); } // 800DDC54
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDC58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDC5C
  c->lr=c->r[0]; // 800DDC60
  c->r[1]=c->r[1]+0x00000020u; // 800DDC64
  return; // 800DDC68
}

// fn_800DDC6C
void f_800DDC6C(Ctx* __restrict c) {
  trace_call(0x800DDC6Cu);
  c->r[3]=0u+0x80410000u; // 800DDC6C
  c->r[3]=c->r[3]+0xFFFFDAA8u; // 800DDC70
  return; // 800DDC74
}

// fn_800DDC78
void f_800DDC78(Ctx* __restrict c) {
  trace_call(0x800DDC78u);
  c->r[3]=0u+0x0000005Cu; // 800DDC78
  return; // 800DDC7C
}

// fn_800DDC80
void f_800DDC80(Ctx* __restrict c) {
  trace_call(0x800DDC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDC80
  c->r[0]=c->lr; // 800DDC84
  c->r[3]=0u+0x0000005Cu; // 800DDC88
  c->r[4]=c->r[13]+0xFFFFB655u; // 800DDC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDC90
  c->r[5]=0u+0x00000000u; // 800DDC94
  c->r[6]=0u+0x00001001u; // 800DDC98
  c->lr=0x800DDCA0u; f_80244D20(c); // 800DDC9C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDCA0
  if (crb(c,2)) { goto L_800DDCAC; } // 800DDCA4
  c->lr=0x800DDCACu; f_800DDA64(c); // 800DDCA8
L_800DDCAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDCAC
  c->lr=c->r[0]; // 800DDCB0
  c->r[1]=c->r[1]+0x00000010u; // 800DDCB4
  return; // 800DDCB8
}

// fn_800DDCBC
void f_800DDCBC(Ctx* __restrict c) {
  trace_call(0x800DDCBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDCBC
  c->r[0]=c->lr; // 800DDCC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDCC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDCC8
  c->r[31]=c->r[3]|c->r[3]; // 800DDCCC
  c->lr=0x800DDCD4u; f_800D7120(c); // 800DDCD0
  c->r[5]=0u+0x80410000u; // 800DDCD4
  c->r[3]=0u+0x59720000u; // 800DDCD8
  c->r[0]=c->r[3]+0x00004EB8u; // 800DDCDC
  c->r[4]=0u+0x00000000u; // 800DDCE0
  c->r[5]=c->r[5]+0x000072D4u; // 800DDCE4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DDCE8
  c->r[3]=c->r[31]|c->r[31]; // 800DDCEC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DDCF0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DDCF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDCF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDCFC
  c->lr=c->r[0]; // 800DDD00
  c->r[1]=c->r[1]+0x00000010u; // 800DDD04
  return; // 800DDD08
}

// fn_800DDD0C
void f_800DDD0C(Ctx* __restrict c) {
  trace_call(0x800DDD0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDD0C
  c->r[0]=c->lr; // 800DDD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDD14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDD18
  c->r[30]=c->r[3]|c->r[3]; // 800DDD1C
  c->r[31]=c->r[4]|c->r[4]; // 800DDD20
  c->lr=0x800DDD28u; f_8030D728(c); // 800DDD24
  c->r[3]=c->r[31]|c->r[31]; // 800DDD28
  c->r[4]=0u+0x00000000u; // 800DDD2C
  c->lr=0x800DDD34u; f_8030BE30(c); // 800DDD30
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DDD34
  c->r[3]=c->r[31]|c->r[31]; // 800DDD38
  c->lr=0x800DDD40u; f_8030BD1C(c); // 800DDD3C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DDD40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDD44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDD48
  c->lr=c->r[0]; // 800DDD4C
  c->r[1]=c->r[1]+0x00000010u; // 800DDD50
  return; // 800DDD54
}

// fn_800DDD58
void f_800DDD58(Ctx* __restrict c) {
  trace_call(0x800DDD58u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DDD58
  c->r[5]=c->r[3]|c->r[3]; // 800DDD5C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DDD60
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DDD64
  c->r[3]=c->r[4]+0x00000030u; // 800DDD68
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DDD6C
  c->r[4]=c->r[5]+0x00000030u; // 800DDD70
  f_8003AB48(c); return; // 800DDD74
}

// fn_800DDD78
void f_800DDD78(Ctx* __restrict c) {
  trace_call(0x800DDD78u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DDD78
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DDD7C
  c->ctr=c->r[12]; // 800DDD80
  if (true) { dispatch(c,c->ctr); return; } // 800DDD84
}

// fn_800DDD88
void f_800DDD88(Ctx* __restrict c) {
  trace_call(0x800DDD88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDD88
  c->r[0]=c->lr; // 800DDD8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDD90
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDD94
  c->r[29]=c->r[3]|c->r[3]; // 800DDD98
  c->r[30]=c->r[4]|c->r[4]; // 800DDD9C
  c->r[31]=c->r[5]|c->r[5]; // 800DDDA0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DDDA4
  cmps(c,0,(int32_t)c->r[0],7); // 800DDDA8
  if (!crb(c,0)) { goto L_800DDDBC; } // 800DDDAC
  c->r[4]=c->r[31]|c->r[31]; // 800DDDB0
  c->r[3]=c->r[3]+0x00000030u; // 800DDDB4
  c->lr=0x800DDDBCu; f_8003A994(c); // 800DDDB8
L_800DDDBC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DDDBC
  c->r[3]=c->r[29]|c->r[29]; // 800DDDC0
  c->r[4]=c->r[30]|c->r[30]; // 800DDDC4
  c->r[5]=c->r[31]|c->r[31]; // 800DDDC8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DDDCC
  c->ctr=c->r[12]; // 800DDDD0
  if (true) { c->lr=0x800DDDD8u; dispatch(c,c->ctr); } // 800DDDD4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDDD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDDDC
  c->lr=c->r[0]; // 800DDDE0
  c->r[1]=c->r[1]+0x00000020u; // 800DDDE4
  return; // 800DDDE8
}

// fn_800DDDEC
void f_800DDDEC(Ctx* __restrict c) {
  trace_call(0x800DDDECu);
  c->r[3]=0u+0x80410000u; // 800DDDEC
  c->r[3]=c->r[3]+0xFFFFDABDu; // 800DDDF0
  return; // 800DDDF4
}

// fn_800DDDF8
void f_800DDDF8(Ctx* __restrict c) {
  trace_call(0x800DDDF8u);
  c->r[3]=0u+0x0000003Cu; // 800DDDF8
  return; // 800DDDFC
}

// fn_800DDE00
void f_800DDE00(Ctx* __restrict c) {
  trace_call(0x800DDE00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDE00
  c->r[0]=c->lr; // 800DDE04
  c->r[3]=0u+0x0000003Cu; // 800DDE08
  c->r[4]=c->r[13]+0xFFFFB65Au; // 800DDE0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDE10
  c->r[5]=0u+0x00000000u; // 800DDE14
  c->r[6]=0u+0x00001001u; // 800DDE18
  c->lr=0x800DDE20u; f_80244D20(c); // 800DDE1C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDE20
  if (crb(c,2)) { goto L_800DDE2C; } // 800DDE24
  c->lr=0x800DDE2Cu; f_800DDCBC(c); // 800DDE28
L_800DDE2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDE2C
  c->lr=c->r[0]; // 800DDE30
  c->r[1]=c->r[1]+0x00000010u; // 800DDE34
  return; // 800DDE38
}

// fn_800DDE3C
void f_800DDE3C(Ctx* __restrict c) {
  trace_call(0x800DDE3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDE3C
  c->r[0]=c->lr; // 800DDE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDE48
  c->r[31]=c->r[3]|c->r[3]; // 800DDE4C
  c->lr=0x800DDE54u; f_800D7120(c); // 800DDE50
  c->r[5]=0u+0x80410000u; // 800DDE54
  c->r[3]=0u+0x338F0000u; // 800DDE58
  c->r[0]=c->r[3]+0xFFFFDE04u; // 800DDE5C
  c->r[4]=0u+0x00000000u; // 800DDE60
  c->r[5]=c->r[5]+0x000072A0u; // 800DDE64
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DDE68
  c->r[3]=c->r[31]|c->r[31]; // 800DDE6C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DDE70
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DDE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDE78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDE7C
  c->lr=c->r[0]; // 800DDE80
  c->r[1]=c->r[1]+0x00000010u; // 800DDE84
  return; // 800DDE88
}

// fn_800DDE8C
void f_800DDE8C(Ctx* __restrict c) {
  trace_call(0x800DDE8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDE8C
  c->r[0]=c->lr; // 800DDE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDE94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDE98
  c->r[30]=c->r[3]|c->r[3]; // 800DDE9C
  c->r[31]=c->r[4]|c->r[4]; // 800DDEA0
  c->lr=0x800DDEA8u; f_8030D728(c); // 800DDEA4
  c->r[3]=c->r[31]|c->r[31]; // 800DDEA8
  c->r[4]=0u+0x00000000u; // 800DDEAC
  c->lr=0x800DDEB4u; f_8030BE30(c); // 800DDEB0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DDEB4
  c->r[3]=c->r[31]|c->r[31]; // 800DDEB8
  c->lr=0x800DDEC0u; f_8030BD1C(c); // 800DDEBC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DDEC0
  c->r[3]=c->r[31]|c->r[31]; // 800DDEC4
  c->lr=0x800DDECCu; f_8030C0A0(c); // 800DDEC8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DDECC
  c->r[3]=c->r[31]|c->r[31]; // 800DDED0
  c->lr=0x800DDED8u; f_8030BD1C(c); // 800DDED4
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DDED8
  c->r[3]=c->r[31]|c->r[31]; // 800DDEDC
  c->lr=0x800DDEE4u; f_8030C0A0(c); // 800DDEE0
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DDEE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDEE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDEEC
  c->lr=c->r[0]; // 800DDEF0
  c->r[1]=c->r[1]+0x00000010u; // 800DDEF4
  return; // 800DDEF8
}

// fn_800DDEFC
void f_800DDEFC(Ctx* __restrict c) {
  trace_call(0x800DDEFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDEFC
  c->r[0]=c->lr; // 800DDF00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDF04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDF08
  c->r[31]=c->r[4]|c->r[4]; // 800DDF0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DDF10
  c->r[30]=c->r[3]|c->r[3]; // 800DDF14
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DDF18
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DDF1C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DDF20
  c->r[3]=c->r[4]+0x00000030u; // 800DDF24
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DDF28
  c->r[4]=c->r[30]+0x00000030u; // 800DDF2C
  c->lr=0x800DDF34u; f_8003AB48(c); // 800DDF30
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDF34
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DDF38
  c->r[0]=R32(c->r[30]+0x00000040u); // 800DDF3C
  W32(c->r[31]+0x00000040u,c->r[0]); // 800DDF40
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDF44
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800DDF48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDF4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DDF50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDF54
  c->lr=c->r[0]; // 800DDF58
  c->r[1]=c->r[1]+0x00000010u; // 800DDF5C
  return; // 800DDF60
}

// fn_800DDF64
void f_800DDF64(Ctx* __restrict c) {
  trace_call(0x800DDF64u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DDF64
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DDF68
  c->ctr=c->r[12]; // 800DDF6C
  if (true) { dispatch(c,c->ctr); return; } // 800DDF70
}

// fn_800DDF74
void f_800DDF74(Ctx* __restrict c) {
  trace_call(0x800DDF74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDF74
  c->r[0]=c->lr; // 800DDF78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDF7C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DDF80
  c->r[29]=c->r[3]|c->r[3]; // 800DDF84
  c->r[30]=c->r[4]|c->r[4]; // 800DDF88
  c->r[31]=c->r[5]|c->r[5]; // 800DDF8C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DDF90
  cmps(c,0,(int32_t)c->r[0],7); // 800DDF94
  if (!crb(c,0)) { goto L_800DDFA8; } // 800DDF98
  c->r[4]=c->r[31]|c->r[31]; // 800DDF9C
  c->r[3]=c->r[3]+0x00000030u; // 800DDFA0
  c->lr=0x800DDFA8u; f_8003A994(c); // 800DDFA4
L_800DDFA8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DDFA8
  c->r[3]=c->r[29]|c->r[29]; // 800DDFAC
  c->r[4]=c->r[30]|c->r[30]; // 800DDFB0
  c->r[5]=c->r[31]|c->r[31]; // 800DDFB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DDFB8
  c->ctr=c->r[12]; // 800DDFBC
  if (true) { c->lr=0x800DDFC4u; dispatch(c,c->ctr); } // 800DDFC0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DDFC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDFC8
  c->lr=c->r[0]; // 800DDFCC
  c->r[1]=c->r[1]+0x00000020u; // 800DDFD0
  return; // 800DDFD4
}

// fn_800DDFD8
void f_800DDFD8(Ctx* __restrict c) {
  trace_call(0x800DDFD8u);
  c->r[3]=0u+0x80410000u; // 800DDFD8
  c->r[3]=c->r[3]+0xFFFFDAD3u; // 800DDFDC
  return; // 800DDFE0
}

// fn_800DDFE4
void f_800DDFE4(Ctx* __restrict c) {
  trace_call(0x800DDFE4u);
  c->r[3]=0u+0x00000048u; // 800DDFE4
  return; // 800DDFE8
}

// fn_800DDFEC
void f_800DDFEC(Ctx* __restrict c) {
  trace_call(0x800DDFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDFEC
  c->r[0]=c->lr; // 800DDFF0
  c->r[3]=0u+0x00000048u; // 800DDFF4
  c->r[4]=c->r[13]+0xFFFFB65Fu; // 800DDFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDFFC
  c->r[5]=0u+0x00000000u; // 800DE000
  c->r[6]=0u+0x00001001u; // 800DE004
  c->lr=0x800DE00Cu; f_80244D20(c); // 800DE008
  cmps(c,0,(int32_t)c->r[3],0); // 800DE00C
  if (crb(c,2)) { goto L_800DE018; } // 800DE010
  c->lr=0x800DE018u; f_800DDE3C(c); // 800DE014
L_800DE018:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE018
  c->lr=c->r[0]; // 800DE01C
  c->r[1]=c->r[1]+0x00000010u; // 800DE020
  return; // 800DE024
}

// fn_800DE028
void f_800DE028(Ctx* __restrict c) {
  trace_call(0x800DE028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE028
  c->r[0]=c->lr; // 800DE02C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE034
  c->r[31]=c->r[3]|c->r[3]; // 800DE038
  c->lr=0x800DE040u; f_800D7120(c); // 800DE03C
  c->r[3]=0u+0x80410000u; // 800DE040
  c->r[0]=0u+0x00000000u; // 800DE044
  c->r[3]=c->r[3]+0x0000726Cu; // 800DE048
  W32(c->r[31]+0x00000008u,c->r[3]); // 800DE04C
  c->r[3]=c->r[31]|c->r[31]; // 800DE050
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE058
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE05C
  c->lr=c->r[0]; // 800DE060
  c->r[1]=c->r[1]+0x00000010u; // 800DE064
  return; // 800DE068
}

// fn_800DE06C
void f_800DE06C(Ctx* __restrict c) {
  trace_call(0x800DE06Cu);
  f_8030D728(c); return; // 800DE06C
}

// fn_800DE070
void f_800DE070(Ctx* __restrict c) {
  trace_call(0x800DE070u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DE070
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE074
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DE078
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DE07C
  return; // 800DE080
}

// fn_800DE084
void f_800DE084(Ctx* __restrict c) {
  trace_call(0x800DE084u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE084
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DE088
  c->ctr=c->r[12]; // 800DE08C
  if (true) { dispatch(c,c->ctr); return; } // 800DE090
}

// fn_800DE094
void f_800DE094(Ctx* __restrict c) {
  trace_call(0x800DE094u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE094
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DE098
  c->ctr=c->r[12]; // 800DE09C
  if (true) { dispatch(c,c->ctr); return; } // 800DE0A0
}

// fn_800DE0A4
void f_800DE0A4(Ctx* __restrict c) {
  trace_call(0x800DE0A4u);
  c->r[3]=0u+0x80410000u; // 800DE0A4
  c->r[3]=c->r[3]+0xFFFFDAE0u; // 800DE0A8
  return; // 800DE0AC
}

// fn_800DE0B0
void f_800DE0B0(Ctx* __restrict c) {
  trace_call(0x800DE0B0u);
  c->r[3]=0u+0x00000030u; // 800DE0B0
  return; // 800DE0B4
}

// fn_800DE0B8
void f_800DE0B8(Ctx* __restrict c) {
  trace_call(0x800DE0B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE0B8
  c->r[0]=c->lr; // 800DE0BC
  c->r[3]=0u+0x00000030u; // 800DE0C0
  c->r[4]=c->r[13]+0xFFFFB664u; // 800DE0C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE0C8
  c->r[5]=0u+0x00000000u; // 800DE0CC
  c->r[6]=0u+0x00001001u; // 800DE0D0
  c->lr=0x800DE0D8u; f_80244D20(c); // 800DE0D4
  cmps(c,0,(int32_t)c->r[3],0); // 800DE0D8
  if (crb(c,2)) { goto L_800DE0E4; } // 800DE0DC
  c->lr=0x800DE0E4u; f_800DE028(c); // 800DE0E0
L_800DE0E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE0E4
  c->lr=c->r[0]; // 800DE0E8
  c->r[1]=c->r[1]+0x00000010u; // 800DE0EC
  return; // 800DE0F0
}

// fn_800DE0F4
void f_800DE0F4(Ctx* __restrict c) {
  trace_call(0x800DE0F4u);
  return; // 800DE0F4
}

// fn_800DE0F8
void f_800DE0F8(Ctx* __restrict c) {
  trace_call(0x800DE0F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE0F8
  c->r[0]=c->lr; // 800DE0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE104
  c->r[31]=c->r[3]|c->r[3]; // 800DE108
  c->lr=0x800DE110u; f_800D7120(c); // 800DE10C
  c->r[4]=0u+0x80410000u; // 800DE110
  c->r[3]=0u+0xAF8D0000u; // 800DE114
  c->r[0]=c->r[3]+0x00001A41u; // 800DE118
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE11C
  c->r[4]=c->r[4]+0x00007238u; // 800DE120
  c->r[3]=c->r[31]|c->r[31]; // 800DE124
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DE128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE12C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE130
  c->lr=c->r[0]; // 800DE134
  c->r[1]=c->r[1]+0x00000010u; // 800DE138
  return; // 800DE13C
}

// fn_800DE140
void f_800DE140(Ctx* __restrict c) {
  trace_call(0x800DE140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE140
  c->r[0]=c->lr; // 800DE144
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE148
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE14C
  c->r[30]=c->r[3]|c->r[3]; // 800DE150
  c->r[31]=c->r[4]|c->r[4]; // 800DE154
  c->lr=0x800DE15Cu; f_8030D728(c); // 800DE158
  c->r[3]=c->r[31]|c->r[31]; // 800DE15C
  c->lr=0x800DE164u; f_8030C0A0(c); // 800DE160
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DE164
  c->r[3]=c->r[31]|c->r[31]; // 800DE168
  c->lr=0x800DE170u; f_8030C0A0(c); // 800DE16C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DE170
  c->r[3]=c->r[31]|c->r[31]; // 800DE174
  c->lr=0x800DE17Cu; f_8030C0A0(c); // 800DE178
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800DE17C
  c->r[3]=c->r[31]|c->r[31]; // 800DE180
  c->lr=0x800DE188u; f_8030C0A0(c); // 800DE184
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DE188
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE18C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE190
  c->lr=c->r[0]; // 800DE194
  c->r[1]=c->r[1]+0x00000010u; // 800DE198
  return; // 800DE19C
}

// fn_800DE1A0
void f_800DE1A0(Ctx* __restrict c) {
  trace_call(0x800DE1A0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DE1A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE1A4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DE1A8
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE1AC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE1B0
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE1B4
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DE1B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DE1BC
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[3]);} // 800DE1C0
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[2]);} // 800DE1C4
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[1]);} // 800DE1C8
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DE1CC
  return; // 800DE1D0
}

// fn_800DE1D4
void f_800DE1D4(Ctx* __restrict c) {
  trace_call(0x800DE1D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE1D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DE1D8
  c->ctr=c->r[12]; // 800DE1DC
  if (true) { dispatch(c,c->ctr); return; } // 800DE1E0
}

// fn_800DE1E4
void f_800DE1E4(Ctx* __restrict c) {
  trace_call(0x800DE1E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE1E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DE1E8
  c->ctr=c->r[12]; // 800DE1EC
  if (true) { dispatch(c,c->ctr); return; } // 800DE1F0
}

// fn_800DE1F4
void f_800DE1F4(Ctx* __restrict c) {
  trace_call(0x800DE1F4u);
  c->r[3]=0u+0x80410000u; // 800DE1F4
  c->r[3]=c->r[3]+0xFFFFDAF1u; // 800DE1F8
  return; // 800DE1FC
}

// fn_800DE200
void f_800DE200(Ctx* __restrict c) {
  trace_call(0x800DE200u);
  c->r[3]=0u+0x00000040u; // 800DE200
  return; // 800DE204
}

// fn_800DE208
void f_800DE208(Ctx* __restrict c) {
  trace_call(0x800DE208u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE208
  c->r[0]=c->lr; // 800DE20C
  c->r[3]=0u+0x00000040u; // 800DE210
  c->r[4]=c->r[13]+0xFFFFB669u; // 800DE214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE218
  c->r[5]=0u+0x00000000u; // 800DE21C
  c->r[6]=0u+0x00001001u; // 800DE220
  c->lr=0x800DE228u; f_80244D20(c); // 800DE224
  cmps(c,0,(int32_t)c->r[3],0); // 800DE228
  if (crb(c,2)) { goto L_800DE234; } // 800DE22C
  c->lr=0x800DE234u; f_800DE0F8(c); // 800DE230
L_800DE234:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE234
  c->lr=c->r[0]; // 800DE238
  c->r[1]=c->r[1]+0x00000010u; // 800DE23C
  return; // 800DE240
}

// fn_800DE244
void f_800DE244(Ctx* __restrict c) {
  trace_call(0x800DE244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE244
  c->r[0]=c->lr; // 800DE248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE24C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE250
  c->r[31]=c->r[3]|c->r[3]; // 800DE254
  c->lr=0x800DE25Cu; f_800D7120(c); // 800DE258
  c->r[4]=0u+0x80410000u; // 800DE25C
  c->r[3]=0u+0xFD770000u; // 800DE260
  c->r[0]=c->r[3]+0x000063D7u; // 800DE264
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE268
  c->r[4]=c->r[4]+0x00007204u; // 800DE26C
  c->r[3]=c->r[31]|c->r[31]; // 800DE270
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DE274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE278
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE27C
  c->lr=c->r[0]; // 800DE280
  c->r[1]=c->r[1]+0x00000010u; // 800DE284
  return; // 800DE288
}

// fn_800DE28C
void f_800DE28C(Ctx* __restrict c) {
  trace_call(0x800DE28Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE28C
  c->r[0]=c->lr; // 800DE290
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE298
  c->r[31]=c->r[4]|c->r[4]; // 800DE29C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE2A0
  c->r[30]=c->r[3]|c->r[3]; // 800DE2A4
  c->lr=0x800DE2ACu; f_8030D728(c); // 800DE2A8
  c->r[3]=c->r[31]|c->r[31]; // 800DE2AC
  c->lr=0x800DE2B4u; f_8030BD1C(c); // 800DE2B0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DE2B4
  c->r[3]=c->r[31]|c->r[31]; // 800DE2B8
  c->lr=0x800DE2C0u; f_8030C0A0(c); // 800DE2BC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DE2C0
  c->r[3]=c->r[31]|c->r[31]; // 800DE2C4
  c->lr=0x800DE2CCu; f_8030C0A0(c); // 800DE2C8
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800DE2CC
  c->r[3]=c->r[31]|c->r[31]; // 800DE2D0
  c->lr=0x800DE2D8u; f_8030C0A0(c); // 800DE2D4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE2D8
  c->r[3]=c->r[31]|c->r[31]; // 800DE2DC
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DE2E0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800DE2E4
  c->lr=0x800DE2ECu; f_8030C0A0(c); // 800DE2E8
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DE2EC
  c->r[3]=c->r[31]|c->r[31]; // 800DE2F0
  c->lr=0x800DE2F8u; f_8030C0A0(c); // 800DE2F4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DE2F8
  c->r[3]=c->r[31]|c->r[31]; // 800DE2FC
  c->lr=0x800DE304u; f_8030C0A0(c); // 800DE300
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE304
  c->r[3]=c->r[31]|c->r[31]; // 800DE308
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DE30C
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 800DE310
  c->lr=0x800DE318u; f_8030C0A0(c); // 800DE314
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800DE318
  c->r[3]=c->r[31]|c->r[31]; // 800DE31C
  c->lr=0x800DE324u; f_8030C0A0(c); // 800DE320
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800DE324
  c->r[3]=c->r[31]|c->r[31]; // 800DE328
  c->lr=0x800DE330u; f_8030C0A0(c); // 800DE32C
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 800DE330
  c->r[3]=c->r[31]|c->r[31]; // 800DE334
  c->lr=0x800DE33Cu; f_8030C0A0(c); // 800DE338
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800DE33C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE340
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE344
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE348
  c->lr=c->r[0]; // 800DE34C
  c->r[1]=c->r[1]+0x00000010u; // 800DE350
  return; // 800DE354
}

// fn_800DE358
void f_800DE358(Ctx* __restrict c) {
  trace_call(0x800DE358u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DE358
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DE35C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800DE360
  {uint32_t ea=c->r[3]+0x00000034u; c->f[9]=c->ps1[9]=RF32(ea);} // 800DE364
  {uint32_t ea=c->r[3]+0x00000038u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DE368
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 800DE36C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[6]=c->ps1[6]=RF32(ea);} // 800DE370
  {uint32_t ea=c->r[3]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DE374
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800DE378
  {uint32_t ea=c->r[3]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DE37C
  {uint32_t ea=c->r[3]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE380
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE384
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE388
  W32(c->r[4]+0x00000000u,c->r[6]); // 800DE38C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800DE390
  W32(c->r[4]+0x00000030u,c->r[0]); // 800DE394
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[9]);} // 800DE398
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[8]);} // 800DE39C
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[7]);} // 800DE3A0
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[6]);} // 800DE3A4
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[5]);} // 800DE3A8
  {uint32_t ea=c->r[4]+0x0000004Cu; WF32(ea,c->f[4]);} // 800DE3AC
  {uint32_t ea=c->r[4]+0x00000054u; WF32(ea,c->f[3]);} // 800DE3B0
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[2]);} // 800DE3B4
  {uint32_t ea=c->r[4]+0x0000005Cu; WF32(ea,c->f[1]);} // 800DE3B8
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[0]);} // 800DE3BC
  return; // 800DE3C0
}

// fn_800DE3C4
void f_800DE3C4(Ctx* __restrict c) {
  trace_call(0x800DE3C4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE3C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DE3C8
  c->ctr=c->r[12]; // 800DE3CC
  if (true) { dispatch(c,c->ctr); return; } // 800DE3D0
}

// fn_800DE3D4
void f_800DE3D4(Ctx* __restrict c) {
  trace_call(0x800DE3D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE3D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DE3D8
  c->ctr=c->r[12]; // 800DE3DC
  if (true) { dispatch(c,c->ctr); return; } // 800DE3E0
}

// fn_800DE3E4
void f_800DE3E4(Ctx* __restrict c) {
  trace_call(0x800DE3E4u);
  c->r[3]=0u+0x80410000u; // 800DE3E4
  c->r[3]=c->r[3]+0xFFFFDB08u; // 800DE3E8
  return; // 800DE3EC
}

// fn_800DE3F0
void f_800DE3F0(Ctx* __restrict c) {
  trace_call(0x800DE3F0u);
  c->r[3]=0u+0x00000064u; // 800DE3F0
  return; // 800DE3F4
}

// fn_800DE3F8
void f_800DE3F8(Ctx* __restrict c) {
  trace_call(0x800DE3F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE3F8
  c->r[0]=c->lr; // 800DE3FC
  c->r[3]=0u+0x00000064u; // 800DE400
  c->r[4]=c->r[13]+0xFFFFB66Eu; // 800DE404
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE408
  c->r[5]=0u+0x00000000u; // 800DE40C
  c->r[6]=0u+0x00001001u; // 800DE410
  c->lr=0x800DE418u; f_80244D20(c); // 800DE414
  cmps(c,0,(int32_t)c->r[3],0); // 800DE418
  if (crb(c,2)) { goto L_800DE424; } // 800DE41C
  c->lr=0x800DE424u; f_800DE244(c); // 800DE420
L_800DE424:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE424
  c->lr=c->r[0]; // 800DE428
  c->r[1]=c->r[1]+0x00000010u; // 800DE42C
  return; // 800DE430
}

// fn_800DE434
void f_800DE434(Ctx* __restrict c) {
  trace_call(0x800DE434u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE434
  c->r[0]=c->lr; // 800DE438
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE43C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE440
  c->r[31]=c->r[3]|c->r[3]; // 800DE444
  c->lr=0x800DE44Cu; f_800D7120(c); // 800DE448
  c->r[4]=0u+0x80410000u; // 800DE44C
  c->r[3]=0u+0x241E0000u; // 800DE450
  c->r[0]=c->r[3]+0xFFFF86E0u; // 800DE454
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE458
  c->r[4]=c->r[4]+0x000071D0u; // 800DE45C
  c->r[3]=c->r[31]|c->r[31]; // 800DE460
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DE464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE468
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE46C
  c->lr=c->r[0]; // 800DE470
  c->r[1]=c->r[1]+0x00000010u; // 800DE474
  return; // 800DE478
}

// fn_800DE47C
void f_800DE47C(Ctx* __restrict c) {
  trace_call(0x800DE47Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE47C
  c->r[0]=c->lr; // 800DE480
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE488
  c->r[31]=c->r[4]|c->r[4]; // 800DE48C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE490
  c->r[30]=c->r[3]|c->r[3]; // 800DE494
  c->lr=0x800DE49Cu; f_8030D728(c); // 800DE498
  c->r[3]=c->r[31]|c->r[31]; // 800DE49C
  c->lr=0x800DE4A4u; f_8030C0A0(c); // 800DE4A0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DE4A4
  c->r[3]=c->r[31]|c->r[31]; // 800DE4A8
  c->lr=0x800DE4B0u; f_8030C0A0(c); // 800DE4AC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DE4B0
  c->r[3]=c->r[31]|c->r[31]; // 800DE4B4
  c->lr=0x800DE4BCu; f_8030C0A0(c); // 800DE4B8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE4BC
  c->r[3]=c->r[31]|c->r[31]; // 800DE4C0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800DE4C4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DE4C8
  c->lr=0x800DE4D0u; f_8030C0A0(c); // 800DE4CC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DE4D0
  c->r[3]=c->r[31]|c->r[31]; // 800DE4D4
  c->lr=0x800DE4DCu; f_8030C0A0(c); // 800DE4D8
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DE4DC
  c->r[3]=c->r[31]|c->r[31]; // 800DE4E0
  c->lr=0x800DE4E8u; f_8030C0A0(c); // 800DE4E4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE4E8
  c->r[3]=c->r[31]|c->r[31]; // 800DE4EC
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DE4F0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DE4F4
  c->lr=0x800DE4FCu; f_8030C0A0(c); // 800DE4F8
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DE4FC
  c->r[3]=c->r[31]|c->r[31]; // 800DE500
  c->lr=0x800DE508u; f_8030C0A0(c); // 800DE504
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800DE508
  c->r[3]=c->r[31]|c->r[31]; // 800DE50C
  c->lr=0x800DE514u; f_8030C0A0(c); // 800DE510
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800DE514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE518
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE51C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE520
  c->lr=c->r[0]; // 800DE524
  c->r[1]=c->r[1]+0x00000010u; // 800DE528
  return; // 800DE52C
}

// fn_800DE530
void f_800DE530(Ctx* __restrict c) {
  trace_call(0x800DE530u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DE530
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE534
  {uint32_t ea=c->r[3]+0x00000030u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DE538
  {uint32_t ea=c->r[3]+0x00000034u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DE53C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 800DE540
  {uint32_t ea=c->r[3]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DE544
  {uint32_t ea=c->r[3]+0x00000044u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DE548
  {uint32_t ea=c->r[3]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DE54C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE550
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE554
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE558
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DE55C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DE560
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[8]);} // 800DE564
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[7]);} // 800DE568
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[6]);} // 800DE56C
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[5]);} // 800DE570
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[4]);} // 800DE574
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[3]);} // 800DE578
  {uint32_t ea=c->r[4]+0x00000050u; WF32(ea,c->f[2]);} // 800DE57C
  {uint32_t ea=c->r[4]+0x00000054u; WF32(ea,c->f[1]);} // 800DE580
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 800DE584
  return; // 800DE588
}

// fn_800DE58C
void f_800DE58C(Ctx* __restrict c) {
  trace_call(0x800DE58Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE58C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DE590
  c->ctr=c->r[12]; // 800DE594
  if (true) { dispatch(c,c->ctr); return; } // 800DE598
}

// fn_800DE59C
void f_800DE59C(Ctx* __restrict c) {
  trace_call(0x800DE59Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE59C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DE5A0
  c->ctr=c->r[12]; // 800DE5A4
  if (true) { dispatch(c,c->ctr); return; } // 800DE5A8
}

// fn_800DE5AC
void f_800DE5AC(Ctx* __restrict c) {
  trace_call(0x800DE5ACu);
  c->r[3]=0u+0x80410000u; // 800DE5AC
  c->r[3]=c->r[3]+0xFFFFDB1Fu; // 800DE5B0
  return; // 800DE5B4
}

// fn_800DE5B8
void f_800DE5B8(Ctx* __restrict c) {
  trace_call(0x800DE5B8u);
  c->r[3]=0u+0x0000005Cu; // 800DE5B8
  return; // 800DE5BC
}

// fn_800DE5C0
void f_800DE5C0(Ctx* __restrict c) {
  trace_call(0x800DE5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE5C0
  c->r[0]=c->lr; // 800DE5C4
  c->r[3]=0u+0x0000005Cu; // 800DE5C8
  c->r[4]=c->r[13]+0xFFFFB673u; // 800DE5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE5D0
  c->r[5]=0u+0x00000000u; // 800DE5D4
  c->r[6]=0u+0x00001001u; // 800DE5D8
  c->lr=0x800DE5E0u; f_80244D20(c); // 800DE5DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DE5E0
  if (crb(c,2)) { goto L_800DE5EC; } // 800DE5E4
  c->lr=0x800DE5ECu; f_800DE434(c); // 800DE5E8
L_800DE5EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE5EC
  c->lr=c->r[0]; // 800DE5F0
  c->r[1]=c->r[1]+0x00000010u; // 800DE5F4
  return; // 800DE5F8
}

// fn_800DE5FC
void f_800DE5FC(Ctx* __restrict c) {
  trace_call(0x800DE5FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE5FC
  c->r[0]=c->lr; // 800DE600
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE604
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE608
  c->r[31]=c->r[3]|c->r[3]; // 800DE60C
  c->lr=0x800DE614u; f_800D7120(c); // 800DE610
  c->r[5]=0u+0x80410000u; // 800DE614
  c->r[3]=0u+0xA0560000u; // 800DE618
  c->r[0]=c->r[3]+0x00003153u; // 800DE61C
  c->r[4]=0u+0x00000000u; // 800DE620
  c->r[5]=c->r[5]+0x0000719Cu; // 800DE624
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DE628
  c->r[3]=c->r[31]|c->r[31]; // 800DE62C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DE630
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE638
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE63C
  c->lr=c->r[0]; // 800DE640
  c->r[1]=c->r[1]+0x00000010u; // 800DE644
  return; // 800DE648
}

// fn_800DE64C
void f_800DE64C(Ctx* __restrict c) {
  trace_call(0x800DE64Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE64C
  c->r[0]=c->lr; // 800DE650
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE654
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE658
  c->r[30]=c->r[3]|c->r[3]; // 800DE65C
  c->r[31]=c->r[4]|c->r[4]; // 800DE660
  c->lr=0x800DE668u; f_8030D728(c); // 800DE664
  c->r[3]=c->r[31]|c->r[31]; // 800DE668
  c->r[4]=0u+0x00000000u; // 800DE66C
  c->lr=0x800DE674u; f_8030BE30(c); // 800DE670
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DE674
  c->r[3]=c->r[31]|c->r[31]; // 800DE678
  c->lr=0x800DE680u; f_8030BD1C(c); // 800DE67C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DE680
  c->r[3]=c->r[31]|c->r[31]; // 800DE684
  c->lr=0x800DE68Cu; f_8030C0A0(c); // 800DE688
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DE68C
  c->r[3]=c->r[31]|c->r[31]; // 800DE690
  c->lr=0x800DE698u; f_8030C0A0(c); // 800DE694
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DE698
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE69C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE6A0
  c->lr=c->r[0]; // 800DE6A4
  c->r[1]=c->r[1]+0x00000010u; // 800DE6A8
  return; // 800DE6AC
}

// fn_800DE6B0
void f_800DE6B0(Ctx* __restrict c) {
  trace_call(0x800DE6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE6B0
  c->r[0]=c->lr; // 800DE6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE6B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE6BC
  c->r[31]=c->r[4]|c->r[4]; // 800DE6C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE6C4
  c->r[30]=c->r[3]|c->r[3]; // 800DE6C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DE6CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DE6D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE6D4
  c->r[3]=c->r[4]+0x00000030u; // 800DE6D8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DE6DC
  c->r[4]=c->r[30]+0x00000030u; // 800DE6E0
  c->lr=0x800DE6E8u; f_8003AB48(c); // 800DE6E4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE6E8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DE6EC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE6F0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800DE6F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE6F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE700
  c->lr=c->r[0]; // 800DE704
  c->r[1]=c->r[1]+0x00000010u; // 800DE708
  return; // 800DE70C
}

// fn_800DE710
void f_800DE710(Ctx* __restrict c) {
  trace_call(0x800DE710u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE710
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DE714
  c->ctr=c->r[12]; // 800DE718
  if (true) { dispatch(c,c->ctr); return; } // 800DE71C
}

// fn_800DE720
void f_800DE720(Ctx* __restrict c) {
  trace_call(0x800DE720u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE720
  c->r[0]=c->lr; // 800DE724
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE728
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE72C
  c->r[29]=c->r[3]|c->r[3]; // 800DE730
  c->r[30]=c->r[4]|c->r[4]; // 800DE734
  c->r[31]=c->r[5]|c->r[5]; // 800DE738
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DE73C
  cmps(c,0,(int32_t)c->r[0],7); // 800DE740
  if (!crb(c,0)) { goto L_800DE754; } // 800DE744
  c->r[4]=c->r[31]|c->r[31]; // 800DE748
  c->r[3]=c->r[3]+0x00000030u; // 800DE74C
  c->lr=0x800DE754u; f_8003A994(c); // 800DE750
L_800DE754:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DE754
  c->r[3]=c->r[29]|c->r[29]; // 800DE758
  c->r[4]=c->r[30]|c->r[30]; // 800DE75C
  c->r[5]=c->r[31]|c->r[31]; // 800DE760
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DE764
  c->ctr=c->r[12]; // 800DE768
  if (true) { c->lr=0x800DE770u; dispatch(c,c->ctr); } // 800DE76C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE770
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE774
  c->lr=c->r[0]; // 800DE778
  c->r[1]=c->r[1]+0x00000020u; // 800DE77C
  return; // 800DE780
}

// fn_800DE784
void f_800DE784(Ctx* __restrict c) {
  trace_call(0x800DE784u);
  c->r[3]=0u+0x80410000u; // 800DE784
  c->r[3]=c->r[3]+0xFFFFDB36u; // 800DE788
  return; // 800DE78C
}

// fn_800DE790
void f_800DE790(Ctx* __restrict c) {
  trace_call(0x800DE790u);
  c->r[3]=0u+0x00000044u; // 800DE790
  return; // 800DE794
}

// fn_800DE798
void f_800DE798(Ctx* __restrict c) {
  trace_call(0x800DE798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE798
  c->r[0]=c->lr; // 800DE79C
  c->r[3]=0u+0x00000044u; // 800DE7A0
  c->r[4]=c->r[13]+0xFFFFB678u; // 800DE7A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE7A8
  c->r[5]=0u+0x00000000u; // 800DE7AC
  c->r[6]=0u+0x00001001u; // 800DE7B0
  c->lr=0x800DE7B8u; f_80244D20(c); // 800DE7B4
  cmps(c,0,(int32_t)c->r[3],0); // 800DE7B8
  if (crb(c,2)) { goto L_800DE7C4; } // 800DE7BC
  c->lr=0x800DE7C4u; f_800DE5FC(c); // 800DE7C0
L_800DE7C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE7C4
  c->lr=c->r[0]; // 800DE7C8
  c->r[1]=c->r[1]+0x00000010u; // 800DE7CC
  return; // 800DE7D0
}

// fn_800DE7D4
void f_800DE7D4(Ctx* __restrict c) {
  trace_call(0x800DE7D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE7D4
  c->r[0]=c->lr; // 800DE7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE7DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE7E0
  c->r[31]=c->r[3]|c->r[3]; // 800DE7E4
  c->lr=0x800DE7ECu; f_800D7120(c); // 800DE7E8
  c->r[4]=0u+0x80410000u; // 800DE7EC
  c->r[3]=0u+0x87CC0000u; // 800DE7F0
  c->r[0]=c->r[3]+0x0000467Du; // 800DE7F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE7F8
  c->r[4]=c->r[4]+0x00007168u; // 800DE7FC
  c->r[3]=c->r[31]|c->r[31]; // 800DE800
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DE804
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE808
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE80C
  c->lr=c->r[0]; // 800DE810
  c->r[1]=c->r[1]+0x00000010u; // 800DE814
  return; // 800DE818
}

// fn_800DE81C
void f_800DE81C(Ctx* __restrict c) {
  trace_call(0x800DE81Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE81C
  c->r[0]=c->lr; // 800DE820
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE824
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE828
  c->r[30]=c->r[3]|c->r[3]; // 800DE82C
  c->r[31]=c->r[4]|c->r[4]; // 800DE830
  c->lr=0x800DE838u; f_8030D728(c); // 800DE834
  c->r[3]=c->r[31]|c->r[31]; // 800DE838
  c->lr=0x800DE840u; f_8030C0A0(c); // 800DE83C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DE840
  c->r[3]=c->r[31]|c->r[31]; // 800DE844
  c->lr=0x800DE84Cu; f_8030C0A0(c); // 800DE848
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DE84C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE850
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE854
  c->lr=c->r[0]; // 800DE858
  c->r[1]=c->r[1]+0x00000010u; // 800DE85C
  return; // 800DE860
}

// fn_800DE864
void f_800DE864(Ctx* __restrict c) {
  trace_call(0x800DE864u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DE864
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DE868
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE86C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE870
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DE874
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DE878
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 800DE87C
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800DE880
  return; // 800DE884
}

// fn_800DE888
void f_800DE888(Ctx* __restrict c) {
  trace_call(0x800DE888u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE888
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DE88C
  c->ctr=c->r[12]; // 800DE890
  if (true) { dispatch(c,c->ctr); return; } // 800DE894
}

// fn_800DE898
void f_800DE898(Ctx* __restrict c) {
  trace_call(0x800DE898u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DE898
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DE89C
  c->ctr=c->r[12]; // 800DE8A0
  if (true) { dispatch(c,c->ctr); return; } // 800DE8A4
}

// fn_800DE8A8
void f_800DE8A8(Ctx* __restrict c) {
  trace_call(0x800DE8A8u);
  c->r[3]=0u+0x80410000u; // 800DE8A8
  c->r[3]=c->r[3]+0xFFFFDB4Fu; // 800DE8AC
  return; // 800DE8B0
}

// fn_800DE8B4
void f_800DE8B4(Ctx* __restrict c) {
  trace_call(0x800DE8B4u);
  c->r[3]=0u+0x00000038u; // 800DE8B4
  return; // 800DE8B8
}

// fn_800DE8BC
void f_800DE8BC(Ctx* __restrict c) {
  trace_call(0x800DE8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE8BC
  c->r[0]=c->lr; // 800DE8C0
  c->r[3]=0u+0x00000038u; // 800DE8C4
  c->r[4]=c->r[13]+0xFFFFB67Du; // 800DE8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE8CC
  c->r[5]=0u+0x00000000u; // 800DE8D0
  c->r[6]=0u+0x00001001u; // 800DE8D4
  c->lr=0x800DE8DCu; f_80244D20(c); // 800DE8D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DE8DC
  if (crb(c,2)) { goto L_800DE8E8; } // 800DE8E0
  c->lr=0x800DE8E8u; f_800DE7D4(c); // 800DE8E4
L_800DE8E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE8E8
  c->lr=c->r[0]; // 800DE8EC
  c->r[1]=c->r[1]+0x00000010u; // 800DE8F0
  return; // 800DE8F4
}

// fn_800DE8F8
void f_800DE8F8(Ctx* __restrict c) {
  trace_call(0x800DE8F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE8F8
  c->r[0]=c->lr; // 800DE8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE904
  c->r[31]=c->r[3]|c->r[3]; // 800DE908
  c->lr=0x800DE910u; f_800D7120(c); // 800DE90C
  c->r[4]=0u+0x80410000u; // 800DE910
  c->r[3]=0u+0x7D660000u; // 800DE914
  c->r[0]=c->r[3]+0xFFFFDBAFu; // 800DE918
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DE91C
  c->r[4]=c->r[4]+0x00007134u; // 800DE920
  c->r[3]=c->r[31]|c->r[31]; // 800DE924
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DE928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE92C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE930
  c->lr=c->r[0]; // 800DE934
  c->r[1]=c->r[1]+0x00000010u; // 800DE938
  return; // 800DE93C
}

// fn_800DE940
void f_800DE940(Ctx* __restrict c) {
  trace_call(0x800DE940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE940
  c->r[0]=c->lr; // 800DE944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE948
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DE94C
  c->r[30]=c->r[3]|c->r[3]; // 800DE950
  c->r[31]=c->r[4]|c->r[4]; // 800DE954
  c->lr=0x800DE95Cu; f_8030D728(c); // 800DE958
  c->r[3]=c->r[31]|c->r[31]; // 800DE95C
  c->lr=0x800DE964u; f_8030BD1C(c); // 800DE960
  W8(c->r[30]+0x00000030u,c->r[3]); // 800DE964
  c->r[3]=c->r[31]|c->r[31]; // 800DE968
  c->lr=0x800DE970u; f_8030BD1C(c); // 800DE96C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DE970
  c->r[3]=c->r[31]|c->r[31]; // 800DE974
  c->lr=0x800DE97Cu; f_8030BD1C(c); // 800DE978
  W8(c->r[30]+0x00000038u,c->r[3]); // 800DE97C
  c->r[3]=c->r[31]|c->r[31]; // 800DE980
  c->lr=0x800DE988u; f_8030C0A0(c); // 800DE984
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DE988
  c->r[3]=c->r[31]|c->r[31]; // 800DE98C
  c->lr=0x800DE994u; f_8030C0A0(c); // 800DE990
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DE994
  c->r[3]=c->r[31]|c->r[31]; // 800DE998
  c->lr=0x800DE9A0u; f_8030C0A0(c); // 800DE99C
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DE9A0
  c->r[3]=c->r[31]|c->r[31]; // 800DE9A4
  c->lr=0x800DE9ACu; f_8030C0A0(c); // 800DE9A8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DE9AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DE9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE9B4
  c->lr=c->r[0]; // 800DE9B8
  c->r[1]=c->r[1]+0x00000010u; // 800DE9BC
  return; // 800DE9C0
}

// fn_800DE9C4
void f_800DE9C4(Ctx* __restrict c) {
  trace_call(0x800DE9C4u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800DE9C4
  c->r[7]=R32(c->r[3]+0x00000004u); // 800DE9C8
  c->r[6]=R8(c->r[3]+0x00000030u); // 800DE9CC
  c->r[5]=R32(c->r[3]+0x00000034u); // 800DE9D0
  c->r[0]=R8(c->r[3]+0x00000038u); // 800DE9D4
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DE9D8
  {uint32_t ea=c->r[3]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE9DC
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE9E0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE9E4
  W32(c->r[4]+0x00000000u,c->r[8]); // 800DE9E8
  W32(c->r[4]+0x00000004u,c->r[7]); // 800DE9EC
  W8(c->r[4]+0x00000030u,c->r[6]); // 800DE9F0
  W32(c->r[4]+0x00000034u,c->r[5]); // 800DE9F4
  W8(c->r[4]+0x00000038u,c->r[0]); // 800DE9F8
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[3]);} // 800DE9FC
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[2]);} // 800DEA00
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[1]);} // 800DEA04
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 800DEA08
  return; // 800DEA0C
}

// fn_800DEA10
void f_800DEA10(Ctx* __restrict c) {
  trace_call(0x800DEA10u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DEA10
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DEA14
  c->ctr=c->r[12]; // 800DEA18
  if (true) { dispatch(c,c->ctr); return; } // 800DEA1C
}

// fn_800DEA20
void f_800DEA20(Ctx* __restrict c) {
  trace_call(0x800DEA20u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DEA20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DEA24
  c->ctr=c->r[12]; // 800DEA28
  if (true) { dispatch(c,c->ctr); return; } // 800DEA2C
}

// fn_800DEA30
void f_800DEA30(Ctx* __restrict c) {
  trace_call(0x800DEA30u);
  c->r[3]=0u+0x80410000u; // 800DEA30
  c->r[3]=c->r[3]+0xFFFFDB66u; // 800DEA34
  return; // 800DEA38
}

// fn_800DEA3C
void f_800DEA3C(Ctx* __restrict c) {
  trace_call(0x800DEA3Cu);
  c->r[3]=0u+0x0000004Cu; // 800DEA3C
  return; // 800DEA40
}

// fn_800DEA44
void f_800DEA44(Ctx* __restrict c) {
  trace_call(0x800DEA44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEA44
  c->r[0]=c->lr; // 800DEA48
  c->r[3]=0u+0x0000004Cu; // 800DEA4C
  c->r[4]=c->r[13]+0xFFFFB682u; // 800DEA50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEA54
  c->r[5]=0u+0x00000000u; // 800DEA58
  c->r[6]=0u+0x00001001u; // 800DEA5C
  c->lr=0x800DEA64u; f_80244D20(c); // 800DEA60
  cmps(c,0,(int32_t)c->r[3],0); // 800DEA64
  if (crb(c,2)) { goto L_800DEA70; } // 800DEA68
  c->lr=0x800DEA70u; f_800DE8F8(c); // 800DEA6C
L_800DEA70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEA70
  c->lr=c->r[0]; // 800DEA74
  c->r[1]=c->r[1]+0x00000010u; // 800DEA78
  return; // 800DEA7C
}

// fn_800DEA80
void f_800DEA80(Ctx* __restrict c) {
  trace_call(0x800DEA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEA80
  c->r[0]=c->lr; // 800DEA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEA8C
  c->r[31]=c->r[3]|c->r[3]; // 800DEA90
  c->lr=0x800DEA98u; f_800D7120(c); // 800DEA94
  c->r[5]=0u+0x80410000u; // 800DEA98
  c->r[3]=0u+0xF2270000u; // 800DEA9C
  c->r[4]=0u+0x00000000u; // 800DEAA0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DEAA4
  c->r[0]=c->r[3]+0xFFFFFDFFu; // 800DEAA8
  c->r[5]=c->r[5]+0x00007100u; // 800DEAAC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DEAB0
  c->r[3]=c->r[31]|c->r[31]; // 800DEAB4
  W32(c->r[31]+0x00000044u,c->r[4]); // 800DEAB8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DEABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEAC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEAC4
  c->lr=c->r[0]; // 800DEAC8
  c->r[1]=c->r[1]+0x00000010u; // 800DEACC
  return; // 800DEAD0
}

// fn_800DEAD4
void f_800DEAD4(Ctx* __restrict c) {
  trace_call(0x800DEAD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEAD4
  c->r[0]=c->lr; // 800DEAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEAE0
  c->r[31]=c->r[4]|c->r[4]; // 800DEAE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEAE8
  c->r[30]=c->r[3]|c->r[3]; // 800DEAEC
  c->lr=0x800DEAF4u; f_8030D728(c); // 800DEAF0
  c->r[3]=c->r[31]|c->r[31]; // 800DEAF4
  c->r[4]=0u+0x00000000u; // 800DEAF8
  c->lr=0x800DEB00u; f_8030BE30(c); // 800DEAFC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DEB00
  c->r[3]=c->r[31]|c->r[31]; // 800DEB04
  c->lr=0x800DEB0Cu; f_8030BD1C(c); // 800DEB08
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DEB0C
  c->r[3]=c->r[31]|c->r[31]; // 800DEB10
  c->r[4]=0u+0x00000000u; // 800DEB14
  c->lr=0x800DEB1Cu; f_8030BE30(c); // 800DEB18
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DEB1C
  c->r[3]=c->r[31]|c->r[31]; // 800DEB20
  c->lr=0x800DEB28u; f_8030BD1C(c); // 800DEB24
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DEB28
  c->r[3]=c->r[31]|c->r[31]; // 800DEB2C
  c->lr=0x800DEB34u; f_8030C0A0(c); // 800DEB30
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DEB34
  c->r[3]=c->r[31]|c->r[31]; // 800DEB38
  c->lr=0x800DEB40u; f_8030C0A0(c); // 800DEB3C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DEB40
  c->r[3]=c->r[31]|c->r[31]; // 800DEB44
  c->lr=0x800DEB4Cu; f_8030C0A0(c); // 800DEB48
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEB4C
  c->r[3]=c->r[31]|c->r[31]; // 800DEB50
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DEB54
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800DEB58
  c->lr=0x800DEB60u; f_8030C0A0(c); // 800DEB5C
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800DEB60
  c->r[3]=c->r[31]|c->r[31]; // 800DEB64
  c->lr=0x800DEB6Cu; f_8030BD1C(c); // 800DEB68
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800DEB6C
  c->r[3]=c->r[31]|c->r[31]; // 800DEB70
  c->lr=0x800DEB78u; f_8030C0A0(c); // 800DEB74
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800DEB78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEB7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEB80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEB84
  c->lr=c->r[0]; // 800DEB88
  c->r[1]=c->r[1]+0x00000010u; // 800DEB8C
  return; // 800DEB90
}

// fn_800DEB94
void f_800DEB94(Ctx* __restrict c) {
  trace_call(0x800DEB94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEB94
  c->r[0]=c->lr; // 800DEB98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEB9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEBA0
  c->r[31]=c->r[4]|c->r[4]; // 800DEBA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEBA8
  c->r[30]=c->r[3]|c->r[3]; // 800DEBAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DEBB0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DEBB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DEBB8
  c->r[3]=c->r[4]+0x00000030u; // 800DEBBC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DEBC0
  c->r[4]=c->r[30]+0x00000030u; // 800DEBC4
  c->lr=0x800DEBCCu; f_8003AB48(c); // 800DEBC8
  c->r[3]=c->r[31]+0x0000003Cu; // 800DEBCC
  c->r[4]=c->r[30]+0x0000003Cu; // 800DEBD0
  c->lr=0x800DEBD8u; f_8003AB48(c); // 800DEBD4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEBD8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800DEBDC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEBE0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DEBE4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEBE8
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DEBEC
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEBF0
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800DEBF4
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 800DEBF8
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800DEBFC
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEC00
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800DEC04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEC08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEC10
  c->lr=c->r[0]; // 800DEC14
  c->r[1]=c->r[1]+0x00000010u; // 800DEC18
  return; // 800DEC1C
}

// fn_800DEC20
void f_800DEC20(Ctx* __restrict c) {
  trace_call(0x800DEC20u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DEC20
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DEC24
  c->ctr=c->r[12]; // 800DEC28
  if (true) { dispatch(c,c->ctr); return; } // 800DEC2C
}

// fn_800DEC30
void f_800DEC30(Ctx* __restrict c) {
  trace_call(0x800DEC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEC30
  c->r[0]=c->lr; // 800DEC34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DEC38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DEC3C
  c->r[29]=c->r[3]|c->r[3]; // 800DEC40
  c->r[30]=c->r[4]|c->r[4]; // 800DEC44
  c->r[31]=c->r[5]|c->r[5]; // 800DEC48
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DEC4C
  cmps(c,0,(int32_t)c->r[0],7); // 800DEC50
  if (!crb(c,0)) { goto L_800DEC64; } // 800DEC54
  c->r[4]=c->r[31]|c->r[31]; // 800DEC58
  c->r[3]=c->r[3]+0x00000030u; // 800DEC5C
  c->lr=0x800DEC64u; f_8003A994(c); // 800DEC60
L_800DEC64:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DEC64
  cmps(c,0,(int32_t)c->r[0],7); // 800DEC68
  if (!crb(c,0)) { goto L_800DEC7C; } // 800DEC6C
  c->r[4]=c->r[31]|c->r[31]; // 800DEC70
  c->r[3]=c->r[29]+0x0000003Cu; // 800DEC74
  c->lr=0x800DEC7Cu; f_8003A994(c); // 800DEC78
L_800DEC7C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DEC7C
  c->r[3]=c->r[29]|c->r[29]; // 800DEC80
  c->r[4]=c->r[30]|c->r[30]; // 800DEC84
  c->r[5]=c->r[31]|c->r[31]; // 800DEC88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DEC8C
  c->ctr=c->r[12]; // 800DEC90
  if (true) { c->lr=0x800DEC98u; dispatch(c,c->ctr); } // 800DEC94
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DEC98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DEC9C
  c->lr=c->r[0]; // 800DECA0
  c->r[1]=c->r[1]+0x00000020u; // 800DECA4
  return; // 800DECA8
}

// fn_800DECAC
void f_800DECAC(Ctx* __restrict c) {
  trace_call(0x800DECACu);
  c->r[3]=0u+0x80410000u; // 800DECAC
  c->r[3]=c->r[3]+0xFFFFDB7Eu; // 800DECB0
  return; // 800DECB4
}

// fn_800DECB8
void f_800DECB8(Ctx* __restrict c) {
  trace_call(0x800DECB8u);
  c->r[3]=0u+0x00000064u; // 800DECB8
  return; // 800DECBC
}

// fn_800DECC0
void f_800DECC0(Ctx* __restrict c) {
  trace_call(0x800DECC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DECC0
  c->r[0]=c->lr; // 800DECC4
  c->r[3]=0u+0x00000064u; // 800DECC8
  c->r[4]=c->r[13]+0xFFFFB687u; // 800DECCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DECD0
  c->r[5]=0u+0x00000000u; // 800DECD4
  c->r[6]=0u+0x00001001u; // 800DECD8
  c->lr=0x800DECE0u; f_80244D20(c); // 800DECDC
  cmps(c,0,(int32_t)c->r[3],0); // 800DECE0
  if (crb(c,2)) { goto L_800DECEC; } // 800DECE4
  c->lr=0x800DECECu; f_800DEA80(c); // 800DECE8
L_800DECEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DECEC
  c->lr=c->r[0]; // 800DECF0
  c->r[1]=c->r[1]+0x00000010u; // 800DECF4
  return; // 800DECF8
}

// fn_800DECFC
void f_800DECFC(Ctx* __restrict c) {
  trace_call(0x800DECFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DECFC
  c->r[0]=c->lr; // 800DED00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DED04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DED08
  c->r[31]=c->r[3]|c->r[3]; // 800DED0C
  c->lr=0x800DED14u; f_800D7120(c); // 800DED10
  c->r[5]=0u+0x80410000u; // 800DED14
  c->r[3]=0u+0xE56B0000u; // 800DED18
  c->r[0]=c->r[3]+0x00006F6Bu; // 800DED1C
  c->r[4]=0u+0x00000000u; // 800DED20
  c->r[5]=c->r[5]+0x000070CCu; // 800DED24
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DED28
  c->r[3]=c->r[31]|c->r[31]; // 800DED2C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DED30
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DED34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DED38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DED3C
  c->lr=c->r[0]; // 800DED40
  c->r[1]=c->r[1]+0x00000010u; // 800DED44
  return; // 800DED48
}

// fn_800DED4C
void f_800DED4C(Ctx* __restrict c) {
  trace_call(0x800DED4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DED4C
  c->r[0]=c->lr; // 800DED50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DED54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DED58
  c->r[30]=c->r[3]|c->r[3]; // 800DED5C
  c->r[31]=c->r[4]|c->r[4]; // 800DED60
  c->lr=0x800DED68u; f_8030D728(c); // 800DED64
  c->r[3]=c->r[31]|c->r[31]; // 800DED68
  c->r[4]=0u+0x00000000u; // 800DED6C
  c->lr=0x800DED74u; f_8030BE30(c); // 800DED70
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DED74
  c->r[3]=c->r[31]|c->r[31]; // 800DED78
  c->lr=0x800DED80u; f_8030BD1C(c); // 800DED7C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DED80
  c->r[3]=c->r[31]|c->r[31]; // 800DED84
  c->lr=0x800DED8Cu; f_8030BD1C(c); // 800DED88
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DED8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DED90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DED94
  c->lr=c->r[0]; // 800DED98
  c->r[1]=c->r[1]+0x00000010u; // 800DED9C
  return; // 800DEDA0
}

// fn_800DEDA4
void f_800DEDA4(Ctx* __restrict c) {
  trace_call(0x800DEDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEDA4
  c->r[0]=c->lr; // 800DEDA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEDAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DEDB0
  c->r[30]=c->r[3]|c->r[3]; // 800DEDB4
  c->r[31]=c->r[4]|c->r[4]; // 800DEDB8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DEDBC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DEDC0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DEDC4
  c->r[3]=c->r[4]+0x00000030u; // 800DEDC8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DEDCC
  c->r[4]=c->r[30]+0x00000030u; // 800DEDD0
  c->lr=0x800DEDD8u; f_8003AB48(c); // 800DEDD4
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800DEDD8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800DEDDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DEDE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEDE4
  c->lr=c->r[0]; // 800DEDE8
  c->r[1]=c->r[1]+0x00000010u; // 800DEDEC
  return; // 800DEDF0
}

// fn_800DEDF4
void f_800DEDF4(Ctx* __restrict c) {
  trace_call(0x800DEDF4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DEDF4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DEDF8
  c->ctr=c->r[12]; // 800DEDFC
  if (true) { dispatch(c,c->ctr); return; } // 800DEE00
}

// fn_800DEE04
void f_800DEE04(Ctx* __restrict c) {
  trace_call(0x800DEE04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEE04
  c->r[0]=c->lr; // 800DEE08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DEE0C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DEE10
  c->r[29]=c->r[3]|c->r[3]; // 800DEE14
  c->r[30]=c->r[4]|c->r[4]; // 800DEE18
  c->r[31]=c->r[5]|c->r[5]; // 800DEE1C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DEE20
  cmps(c,0,(int32_t)c->r[0],7); // 800DEE24
  if (!crb(c,0)) { goto L_800DEE38; } // 800DEE28
  c->r[4]=c->r[31]|c->r[31]; // 800DEE2C
  c->r[3]=c->r[3]+0x00000030u; // 800DEE30
  c->lr=0x800DEE38u; f_8003A994(c); // 800DEE34
L_800DEE38:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DEE38
  c->r[3]=c->r[29]|c->r[29]; // 800DEE3C
  c->r[4]=c->r[30]|c->r[30]; // 800DEE40
  c->r[5]=c->r[31]|c->r[31]; // 800DEE44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DEE48
  c->ctr=c->r[12]; // 800DEE4C
  if (true) { c->lr=0x800DEE54u; dispatch(c,c->ctr); } // 800DEE50
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DEE54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DEE58
  c->lr=c->r[0]; // 800DEE5C
  c->r[1]=c->r[1]+0x00000020u; // 800DEE60
  return; // 800DEE64
}

// fn_800DEE68
void f_800DEE68(Ctx* __restrict c) {
  trace_call(0x800DEE68u);
  c->r[3]=0u+0x80410000u; // 800DEE68
  c->r[3]=c->r[3]+0xFFFFDB91u; // 800DEE6C
  return; // 800DEE70
}

// fn_800DEE74
void f_800DEE74(Ctx* __restrict c) {
  trace_call(0x800DEE74u);
  c->r[3]=0u+0x00000040u; // 800DEE74
  return; // 800DEE78
}

// fn_800DEE7C
void f_800DEE7C(Ctx* __restrict c) {
  trace_call(0x800DEE7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEE7C
  c->r[0]=c->lr; // 800DEE80
  c->r[3]=0u+0x00000040u; // 800DEE84
  c->r[4]=c->r[13]+0xFFFFB68Cu; // 800DEE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEE8C
  c->r[5]=0u+0x00000000u; // 800DEE90
  c->r[6]=0u+0x00001001u; // 800DEE94
  c->lr=0x800DEE9Cu; f_80244D20(c); // 800DEE98
  cmps(c,0,(int32_t)c->r[3],0); // 800DEE9C
  if (crb(c,2)) { goto L_800DEEA8; } // 800DEEA0
  c->lr=0x800DEEA8u; f_800DECFC(c); // 800DEEA4
L_800DEEA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEEA8
  c->lr=c->r[0]; // 800DEEAC
  c->r[1]=c->r[1]+0x00000010u; // 800DEEB0
  return; // 800DEEB4
}

// fn_800DEEB8
void f_800DEEB8(Ctx* __restrict c) {
  trace_call(0x800DEEB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEEB8
  c->r[0]=c->lr; // 800DEEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEEC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEEC4
  c->r[31]=c->r[3]|c->r[3]; // 800DEEC8
  c->lr=0x800DEED0u; f_800D7120(c); // 800DEECC
  c->r[5]=0u+0x80410000u; // 800DEED0
  c->r[3]=0u+0x39070000u; // 800DEED4
  c->r[0]=c->r[3]+0xFFFFF5DCu; // 800DEED8
  c->r[4]=0u+0x00000000u; // 800DEEDC
  c->r[5]=c->r[5]+0x00007098u; // 800DEEE0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DEEE4
  c->r[3]=c->r[31]|c->r[31]; // 800DEEE8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DEEEC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DEEF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEEF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEEF8
  c->lr=c->r[0]; // 800DEEFC
  c->r[1]=c->r[1]+0x00000010u; // 800DEF00
  return; // 800DEF04
}

// fn_800DEF08
void f_800DEF08(Ctx* __restrict c) {
  trace_call(0x800DEF08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEF08
  c->r[0]=c->lr; // 800DEF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEF10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DEF14
  c->r[30]=c->r[3]|c->r[3]; // 800DEF18
  c->r[31]=c->r[4]|c->r[4]; // 800DEF1C
  c->lr=0x800DEF24u; f_8030D728(c); // 800DEF20
  c->r[3]=c->r[31]|c->r[31]; // 800DEF24
  c->r[4]=0u+0x00000000u; // 800DEF28
  c->lr=0x800DEF30u; f_8030BE30(c); // 800DEF2C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DEF30
  c->r[3]=c->r[31]|c->r[31]; // 800DEF34
  c->lr=0x800DEF3Cu; f_8030BD1C(c); // 800DEF38
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DEF3C
  c->r[3]=c->r[31]|c->r[31]; // 800DEF40
  c->lr=0x800DEF48u; f_8030C0A0(c); // 800DEF44
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DEF48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DEF4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEF50
  c->lr=c->r[0]; // 800DEF54
  c->r[1]=c->r[1]+0x00000010u; // 800DEF58
  return; // 800DEF5C
}

// fn_800DEF60
void f_800DEF60(Ctx* __restrict c) {
  trace_call(0x800DEF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEF60
  c->r[0]=c->lr; // 800DEF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEF68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEF6C
  c->r[31]=c->r[4]|c->r[4]; // 800DEF70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEF74
  c->r[30]=c->r[3]|c->r[3]; // 800DEF78
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DEF7C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DEF80
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DEF84
  c->r[3]=c->r[4]+0x00000030u; // 800DEF88
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DEF8C
  c->r[4]=c->r[30]+0x00000030u; // 800DEF90
  c->lr=0x800DEF98u; f_8003AB48(c); // 800DEF94
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEF98
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DEF9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEFA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEFA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEFA8
  c->lr=c->r[0]; // 800DEFAC
  c->r[1]=c->r[1]+0x00000010u; // 800DEFB0
  return; // 800DEFB4
}

// fn_800DEFB8
void f_800DEFB8(Ctx* __restrict c) {
  trace_call(0x800DEFB8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DEFB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DEFBC
  c->ctr=c->r[12]; // 800DEFC0
  if (true) { dispatch(c,c->ctr); return; } // 800DEFC4
}

// fn_800DEFC8
void f_800DEFC8(Ctx* __restrict c) {
  trace_call(0x800DEFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEFC8
  c->r[0]=c->lr; // 800DEFCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DEFD0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DEFD4
  c->r[29]=c->r[3]|c->r[3]; // 800DEFD8
  c->r[30]=c->r[4]|c->r[4]; // 800DEFDC
  c->r[31]=c->r[5]|c->r[5]; // 800DEFE0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DEFE4
  cmps(c,0,(int32_t)c->r[0],7); // 800DEFE8
  if (!crb(c,0)) { goto L_800DEFFC; } // 800DEFEC
  c->r[4]=c->r[31]|c->r[31]; // 800DEFF0
  c->r[3]=c->r[3]+0x00000030u; // 800DEFF4
  c->lr=0x800DEFFCu; f_8003A994(c); // 800DEFF8
L_800DEFFC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DEFFC
  c->r[3]=c->r[29]|c->r[29]; // 800DF000
  c->r[4]=c->r[30]|c->r[30]; // 800DF004
  c->r[5]=c->r[31]|c->r[31]; // 800DF008
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DF00C
  c->ctr=c->r[12]; // 800DF010
  if (true) { c->lr=0x800DF018u; dispatch(c,c->ctr); } // 800DF014
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF018
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF01C
  c->lr=c->r[0]; // 800DF020
  c->r[1]=c->r[1]+0x00000020u; // 800DF024
  return; // 800DF028
}

// fn_800DF02C
void f_800DF02C(Ctx* __restrict c) {
  trace_call(0x800DF02Cu);
  c->r[3]=0u+0x80410000u; // 800DF02C
  c->r[3]=c->r[3]+0xFFFFDBA8u; // 800DF030
  return; // 800DF034
}

// fn_800DF038
void f_800DF038(Ctx* __restrict c) {
  trace_call(0x800DF038u);
  c->r[3]=0u+0x00000040u; // 800DF038
  return; // 800DF03C
}

// fn_800DF040
void f_800DF040(Ctx* __restrict c) {
  trace_call(0x800DF040u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF040
  c->r[0]=c->lr; // 800DF044
  c->r[3]=0u+0x00000040u; // 800DF048
  c->r[4]=c->r[13]+0xFFFFB691u; // 800DF04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF050
  c->r[5]=0u+0x00000000u; // 800DF054
  c->r[6]=0u+0x00001001u; // 800DF058
  c->lr=0x800DF060u; f_80244D20(c); // 800DF05C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF060
  if (crb(c,2)) { goto L_800DF06C; } // 800DF064
  c->lr=0x800DF06Cu; f_800DEEB8(c); // 800DF068
L_800DF06C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF06C
  c->lr=c->r[0]; // 800DF070
  c->r[1]=c->r[1]+0x00000010u; // 800DF074
  return; // 800DF078
}

// fn_800DF07C
void f_800DF07C(Ctx* __restrict c) {
  trace_call(0x800DF07Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF07C
  c->r[0]=c->lr; // 800DF080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF088
  c->r[31]=c->r[3]|c->r[3]; // 800DF08C
  c->lr=0x800DF094u; f_800D7120(c); // 800DF090
  c->r[4]=0u+0x80410000u; // 800DF094
  c->r[3]=0u+0xAF8D0000u; // 800DF098
  c->r[0]=c->r[3]+0x00001A41u; // 800DF09C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DF0A0
  c->r[4]=c->r[4]+0x00007064u; // 800DF0A4
  c->r[3]=c->r[31]|c->r[31]; // 800DF0A8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DF0AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF0B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF0B4
  c->lr=c->r[0]; // 800DF0B8
  c->r[1]=c->r[1]+0x00000010u; // 800DF0BC
  return; // 800DF0C0
}

// fn_800DF0C4
void f_800DF0C4(Ctx* __restrict c) {
  trace_call(0x800DF0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF0C4
  c->r[0]=c->lr; // 800DF0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF0CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF0D0
  c->r[30]=c->r[3]|c->r[3]; // 800DF0D4
  c->r[31]=c->r[4]|c->r[4]; // 800DF0D8
  c->lr=0x800DF0E0u; f_8030D728(c); // 800DF0DC
  c->r[3]=c->r[31]|c->r[31]; // 800DF0E0
  c->lr=0x800DF0E8u; f_8030C0A0(c); // 800DF0E4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DF0E8
  c->r[3]=c->r[31]|c->r[31]; // 800DF0EC
  c->lr=0x800DF0F4u; f_8030C0A0(c); // 800DF0F0
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DF0F4
  c->r[3]=c->r[31]|c->r[31]; // 800DF0F8
  c->lr=0x800DF100u; f_8030C0A0(c); // 800DF0FC
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800DF100
  c->r[3]=c->r[31]|c->r[31]; // 800DF104
  c->lr=0x800DF10Cu; f_8030C0A0(c); // 800DF108
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DF10C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF110
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF114
  c->lr=c->r[0]; // 800DF118
  c->r[1]=c->r[1]+0x00000010u; // 800DF11C
  return; // 800DF120
}

// fn_800DF124
void f_800DF124(Ctx* __restrict c) {
  trace_call(0x800DF124u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DF124
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DF128
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DF12C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DF130
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF134
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF138
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DF13C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DF140
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[3]);} // 800DF144
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[2]);} // 800DF148
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[1]);} // 800DF14C
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DF150
  return; // 800DF154
}

// fn_800DF158
void f_800DF158(Ctx* __restrict c) {
  trace_call(0x800DF158u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF158
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF15C
  c->ctr=c->r[12]; // 800DF160
  if (true) { dispatch(c,c->ctr); return; } // 800DF164
}

// fn_800DF168
void f_800DF168(Ctx* __restrict c) {
  trace_call(0x800DF168u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF168
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DF16C
  c->ctr=c->r[12]; // 800DF170
  if (true) { dispatch(c,c->ctr); return; } // 800DF174
}

// fn_800DF178
void f_800DF178(Ctx* __restrict c) {
  trace_call(0x800DF178u);
  c->r[3]=0u+0x80410000u; // 800DF178
  c->r[3]=c->r[3]+0xFFFFDBC0u; // 800DF17C
  return; // 800DF180
}

// fn_800DF184
void f_800DF184(Ctx* __restrict c) {
  trace_call(0x800DF184u);
  c->r[3]=0u+0x00000040u; // 800DF184
  return; // 800DF188
}

// fn_800DF18C
void f_800DF18C(Ctx* __restrict c) {
  trace_call(0x800DF18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF18C
  c->r[0]=c->lr; // 800DF190
  c->r[3]=0u+0x00000040u; // 800DF194
  c->r[4]=c->r[13]+0xFFFFB696u; // 800DF198
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF19C
  c->r[5]=0u+0x00000000u; // 800DF1A0
  c->r[6]=0u+0x00001001u; // 800DF1A4
  c->lr=0x800DF1ACu; f_80244D20(c); // 800DF1A8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF1AC
  if (crb(c,2)) { goto L_800DF1B8; } // 800DF1B0
  c->lr=0x800DF1B8u; f_800DF07C(c); // 800DF1B4
L_800DF1B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF1B8
  c->lr=c->r[0]; // 800DF1BC
  c->r[1]=c->r[1]+0x00000010u; // 800DF1C0
  return; // 800DF1C4
}

// fn_800DF1C8
void f_800DF1C8(Ctx* __restrict c) {
  trace_call(0x800DF1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF1C8
  c->r[0]=c->lr; // 800DF1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF1D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF1D4
  c->r[31]=c->r[3]|c->r[3]; // 800DF1D8
  c->lr=0x800DF1E0u; f_800D7120(c); // 800DF1DC
  c->r[4]=0u+0x80410000u; // 800DF1E0
  c->r[3]=0u+0x45390000u; // 800DF1E4
  c->r[0]=c->r[3]+0xFFFF905Cu; // 800DF1E8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DF1EC
  c->r[4]=c->r[4]+0x00007030u; // 800DF1F0
  c->r[3]=c->r[31]|c->r[31]; // 800DF1F4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DF1F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF1FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF200
  c->lr=c->r[0]; // 800DF204
  c->r[1]=c->r[1]+0x00000010u; // 800DF208
  return; // 800DF20C
}

// fn_800DF210
void f_800DF210(Ctx* __restrict c) {
  trace_call(0x800DF210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF210
  c->r[0]=c->lr; // 800DF214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF218
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF21C
  c->r[30]=c->r[3]|c->r[3]; // 800DF220
  c->r[31]=c->r[4]|c->r[4]; // 800DF224
  c->lr=0x800DF22Cu; f_8030D728(c); // 800DF228
  c->r[3]=c->r[31]|c->r[31]; // 800DF22C
  c->lr=0x800DF234u; f_8030BD1C(c); // 800DF230
  W8(c->r[30]+0x00000030u,c->r[3]); // 800DF234
  c->r[3]=c->r[31]|c->r[31]; // 800DF238
  c->lr=0x800DF240u; f_8030BD1C(c); // 800DF23C
  W8(c->r[30]+0x00000031u,c->r[3]); // 800DF240
  c->r[3]=c->r[31]|c->r[31]; // 800DF244
  c->lr=0x800DF24Cu; f_8030BD1C(c); // 800DF248
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DF24C
  c->r[3]=c->r[31]|c->r[31]; // 800DF250
  c->lr=0x800DF258u; f_8030BD1C(c); // 800DF254
  W8(c->r[30]+0x00000038u,c->r[3]); // 800DF258
  c->r[3]=c->r[31]|c->r[31]; // 800DF25C
  c->lr=0x800DF264u; f_8030C0A0(c); // 800DF260
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DF264
  c->r[3]=c->r[31]|c->r[31]; // 800DF268
  c->lr=0x800DF270u; f_8030C0A0(c); // 800DF26C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DF270
  c->r[3]=c->r[31]|c->r[31]; // 800DF274
  c->lr=0x800DF27Cu; f_8030C0A0(c); // 800DF278
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DF27C
  c->r[3]=c->r[31]|c->r[31]; // 800DF280
  c->lr=0x800DF288u; f_8030C0A0(c); // 800DF284
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DF288
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF28C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF290
  c->lr=c->r[0]; // 800DF294
  c->r[1]=c->r[1]+0x00000010u; // 800DF298
  return; // 800DF29C
}

// fn_800DF2A0
void f_800DF2A0(Ctx* __restrict c) {
  trace_call(0x800DF2A0u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 800DF2A0
  c->r[8]=R32(c->r[3]+0x00000004u); // 800DF2A4
  c->r[7]=R8(c->r[3]+0x00000030u); // 800DF2A8
  c->r[6]=R8(c->r[3]+0x00000031u); // 800DF2AC
  c->r[5]=R32(c->r[3]+0x00000034u); // 800DF2B0
  c->r[0]=R8(c->r[3]+0x00000038u); // 800DF2B4
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DF2B8
  {uint32_t ea=c->r[3]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DF2BC
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF2C0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF2C4
  W32(c->r[4]+0x00000000u,c->r[9]); // 800DF2C8
  W32(c->r[4]+0x00000004u,c->r[8]); // 800DF2CC
  W8(c->r[4]+0x00000030u,c->r[7]); // 800DF2D0
  W8(c->r[4]+0x00000031u,c->r[6]); // 800DF2D4
  W32(c->r[4]+0x00000034u,c->r[5]); // 800DF2D8
  W8(c->r[4]+0x00000038u,c->r[0]); // 800DF2DC
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[3]);} // 800DF2E0
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[2]);} // 800DF2E4
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[1]);} // 800DF2E8
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 800DF2EC
  return; // 800DF2F0
}

// fn_800DF2F4
void f_800DF2F4(Ctx* __restrict c) {
  trace_call(0x800DF2F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF2F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF2F8
  c->ctr=c->r[12]; // 800DF2FC
  if (true) { dispatch(c,c->ctr); return; } // 800DF300
}

// fn_800DF304
void f_800DF304(Ctx* __restrict c) {
  trace_call(0x800DF304u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF304
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DF308
  c->ctr=c->r[12]; // 800DF30C
  if (true) { dispatch(c,c->ctr); return; } // 800DF310
}

// fn_800DF314
void f_800DF314(Ctx* __restrict c) {
  trace_call(0x800DF314u);
  c->r[3]=0u+0x80410000u; // 800DF314
  c->r[3]=c->r[3]+0xFFFFDBD4u; // 800DF318
  return; // 800DF31C
}

// fn_800DF320
void f_800DF320(Ctx* __restrict c) {
  trace_call(0x800DF320u);
  c->r[3]=0u+0x0000004Cu; // 800DF320
  return; // 800DF324
}

// fn_800DF328
void f_800DF328(Ctx* __restrict c) {
  trace_call(0x800DF328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF328
  c->r[0]=c->lr; // 800DF32C
  c->r[3]=0u+0x0000004Cu; // 800DF330
  c->r[4]=c->r[13]+0xFFFFB69Bu; // 800DF334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF338
  c->r[5]=0u+0x00000000u; // 800DF33C
  c->r[6]=0u+0x00001001u; // 800DF340
  c->lr=0x800DF348u; f_80244D20(c); // 800DF344
  cmps(c,0,(int32_t)c->r[3],0); // 800DF348
  if (crb(c,2)) { goto L_800DF354; } // 800DF34C
  c->lr=0x800DF354u; f_800DF1C8(c); // 800DF350
L_800DF354:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF354
  c->lr=c->r[0]; // 800DF358
  c->r[1]=c->r[1]+0x00000010u; // 800DF35C
  return; // 800DF360
}

// fn_800DF364
void f_800DF364(Ctx* __restrict c) {
  trace_call(0x800DF364u);
  return; // 800DF364
}

// fn_800DF368
void f_800DF368(Ctx* __restrict c) {
  trace_call(0x800DF368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF368
  c->r[0]=c->lr; // 800DF36C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF370
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF374
  c->r[31]=c->r[3]|c->r[3]; // 800DF378
  c->lr=0x800DF380u; f_800D7120(c); // 800DF37C
  c->r[4]=0u+0x80410000u; // 800DF380
  c->r[3]=0u+0x87CC0000u; // 800DF384
  c->r[0]=c->r[3]+0x0000467Du; // 800DF388
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DF38C
  c->r[4]=c->r[4]+0x00006FFCu; // 800DF390
  c->r[3]=c->r[31]|c->r[31]; // 800DF394
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DF398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF39C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF3A0
  c->lr=c->r[0]; // 800DF3A4
  c->r[1]=c->r[1]+0x00000010u; // 800DF3A8
  return; // 800DF3AC
}

// fn_800DF3B0
void f_800DF3B0(Ctx* __restrict c) {
  trace_call(0x800DF3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF3B0
  c->r[0]=c->lr; // 800DF3B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF3B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF3BC
  c->r[30]=c->r[3]|c->r[3]; // 800DF3C0
  c->r[31]=c->r[4]|c->r[4]; // 800DF3C4
  c->lr=0x800DF3CCu; f_8030D728(c); // 800DF3C8
  c->r[3]=c->r[31]|c->r[31]; // 800DF3CC
  c->lr=0x800DF3D4u; f_8030C0A0(c); // 800DF3D0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DF3D4
  c->r[3]=c->r[31]|c->r[31]; // 800DF3D8
  c->lr=0x800DF3E0u; f_8030C0A0(c); // 800DF3DC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DF3E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF3E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF3E8
  c->lr=c->r[0]; // 800DF3EC
  c->r[1]=c->r[1]+0x00000010u; // 800DF3F0
  return; // 800DF3F4
}

// fn_800DF3F8
void f_800DF3F8(Ctx* __restrict c) {
  trace_call(0x800DF3F8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DF3F8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DF3FC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF400
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF404
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DF408
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DF40C
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 800DF410
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800DF414
  return; // 800DF418
}

// fn_800DF41C
void f_800DF41C(Ctx* __restrict c) {
  trace_call(0x800DF41Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF41C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF420
  c->ctr=c->r[12]; // 800DF424
  if (true) { dispatch(c,c->ctr); return; } // 800DF428
}

// fn_800DF42C
void f_800DF42C(Ctx* __restrict c) {
  trace_call(0x800DF42Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF42C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DF430
  c->ctr=c->r[12]; // 800DF434
  if (true) { dispatch(c,c->ctr); return; } // 800DF438
}

// fn_800DF43C
void f_800DF43C(Ctx* __restrict c) {
  trace_call(0x800DF43Cu);
  c->r[3]=0u+0x80410000u; // 800DF43C
  c->r[3]=c->r[3]+0xFFFFDBE9u; // 800DF440
  return; // 800DF444
}

// fn_800DF448
void f_800DF448(Ctx* __restrict c) {
  trace_call(0x800DF448u);
  c->r[3]=0u+0x00000038u; // 800DF448
  return; // 800DF44C
}

// fn_800DF450
void f_800DF450(Ctx* __restrict c) {
  trace_call(0x800DF450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF450
  c->r[0]=c->lr; // 800DF454
  c->r[3]=0u+0x00000038u; // 800DF458
  c->r[4]=c->r[13]+0xFFFFB6A0u; // 800DF45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF460
  c->r[5]=0u+0x00000000u; // 800DF464
  c->r[6]=0u+0x00001001u; // 800DF468
  c->lr=0x800DF470u; f_80244D20(c); // 800DF46C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF470
  if (crb(c,2)) { goto L_800DF47C; } // 800DF474
  c->lr=0x800DF47Cu; f_800DF368(c); // 800DF478
L_800DF47C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF47C
  c->lr=c->r[0]; // 800DF480
  c->r[1]=c->r[1]+0x00000010u; // 800DF484
  return; // 800DF488
}

// fn_800DF48C
void f_800DF48C(Ctx* __restrict c) {
  trace_call(0x800DF48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF48C
  c->r[0]=c->lr; // 800DF490
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF494
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF498
  c->r[31]=c->r[3]|c->r[3]; // 800DF49C
  c->lr=0x800DF4A4u; f_800D7120(c); // 800DF4A0
  c->r[4]=0u+0x80410000u; // 800DF4A4
  c->r[3]=0u+0xDC6E0000u; // 800DF4A8
  c->r[0]=c->r[3]+0xFFFF9AB7u; // 800DF4AC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DF4B0
  c->r[4]=c->r[4]+0x00006FC8u; // 800DF4B4
  c->r[3]=c->r[31]|c->r[31]; // 800DF4B8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DF4BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF4C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF4C4
  c->lr=c->r[0]; // 800DF4C8
  c->r[1]=c->r[1]+0x00000010u; // 800DF4CC
  return; // 800DF4D0
}

// fn_800DF4D4
void f_800DF4D4(Ctx* __restrict c) {
  trace_call(0x800DF4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF4D4
  c->r[0]=c->lr; // 800DF4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF4DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF4E0
  c->r[30]=c->r[3]|c->r[3]; // 800DF4E4
  c->r[31]=c->r[4]|c->r[4]; // 800DF4E8
  c->lr=0x800DF4F0u; f_8030D728(c); // 800DF4EC
  c->r[3]=c->r[31]|c->r[31]; // 800DF4F0
  c->lr=0x800DF4F8u; f_8030C0A0(c); // 800DF4F4
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DF4F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF4FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF500
  c->lr=c->r[0]; // 800DF504
  c->r[1]=c->r[1]+0x00000010u; // 800DF508
  return; // 800DF50C
}

// fn_800DF510
void f_800DF510(Ctx* __restrict c) {
  trace_call(0x800DF510u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DF510
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DF514
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF518
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DF51C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DF520
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800DF524
  return; // 800DF528
}

// fn_800DF52C
void f_800DF52C(Ctx* __restrict c) {
  trace_call(0x800DF52Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF52C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF530
  c->ctr=c->r[12]; // 800DF534
  if (true) { dispatch(c,c->ctr); return; } // 800DF538
}

// fn_800DF53C
void f_800DF53C(Ctx* __restrict c) {
  trace_call(0x800DF53Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF53C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DF540
  c->ctr=c->r[12]; // 800DF544
  if (true) { dispatch(c,c->ctr); return; } // 800DF548
}

// fn_800DF54C
void f_800DF54C(Ctx* __restrict c) {
  trace_call(0x800DF54Cu);
  c->r[3]=0u+0x80410000u; // 800DF54C
  c->r[3]=c->r[3]+0xFFFFDBFFu; // 800DF550
  return; // 800DF554
}

// fn_800DF558
void f_800DF558(Ctx* __restrict c) {
  trace_call(0x800DF558u);
  c->r[3]=0u+0x00000034u; // 800DF558
  return; // 800DF55C
}

// fn_800DF560
void f_800DF560(Ctx* __restrict c) {
  trace_call(0x800DF560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF560
  c->r[0]=c->lr; // 800DF564
  c->r[3]=0u+0x00000034u; // 800DF568
  c->r[4]=c->r[13]+0xFFFFB6A5u; // 800DF56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF570
  c->r[5]=0u+0x00000000u; // 800DF574
  c->r[6]=0u+0x00001001u; // 800DF578
  c->lr=0x800DF580u; f_80244D20(c); // 800DF57C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF580
  if (crb(c,2)) { goto L_800DF58C; } // 800DF584
  c->lr=0x800DF58Cu; f_800DF48C(c); // 800DF588
L_800DF58C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF58C
  c->lr=c->r[0]; // 800DF590
  c->r[1]=c->r[1]+0x00000010u; // 800DF594
  return; // 800DF598
}

// fn_800DF59C
void f_800DF59C(Ctx* __restrict c) {
  trace_call(0x800DF59Cu);
  return; // 800DF59C
}

// fn_800DF5A0
void f_800DF5A0(Ctx* __restrict c) {
  trace_call(0x800DF5A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF5A0
  c->r[0]=c->lr; // 800DF5A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF5A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF5AC
  c->r[31]=c->r[3]|c->r[3]; // 800DF5B0
  c->lr=0x800DF5B8u; f_800D7120(c); // 800DF5B4
  c->r[4]=0u+0x80410000u; // 800DF5B8
  c->r[3]=0u+0xDC6E0000u; // 800DF5BC
  c->r[0]=c->r[3]+0xFFFF9AB7u; // 800DF5C0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DF5C4
  c->r[4]=c->r[4]+0x00006F94u; // 800DF5C8
  c->r[3]=c->r[31]|c->r[31]; // 800DF5CC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DF5D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF5D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF5D8
  c->lr=c->r[0]; // 800DF5DC
  c->r[1]=c->r[1]+0x00000010u; // 800DF5E0
  return; // 800DF5E4
}

// fn_800DF5E8
void f_800DF5E8(Ctx* __restrict c) {
  trace_call(0x800DF5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF5E8
  c->r[0]=c->lr; // 800DF5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF5F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF5F4
  c->r[30]=c->r[3]|c->r[3]; // 800DF5F8
  c->r[31]=c->r[4]|c->r[4]; // 800DF5FC
  c->lr=0x800DF604u; f_8030D728(c); // 800DF600
  c->r[3]=c->r[31]|c->r[31]; // 800DF604
  c->lr=0x800DF60Cu; f_8030C0A0(c); // 800DF608
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DF60C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF610
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF614
  c->lr=c->r[0]; // 800DF618
  c->r[1]=c->r[1]+0x00000010u; // 800DF61C
  return; // 800DF620
}

// fn_800DF624
void f_800DF624(Ctx* __restrict c) {
  trace_call(0x800DF624u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DF624
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DF628
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF62C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DF630
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DF634
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800DF638
  return; // 800DF63C
}

// fn_800DF640
void f_800DF640(Ctx* __restrict c) {
  trace_call(0x800DF640u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF640
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF644
  c->ctr=c->r[12]; // 800DF648
  if (true) { dispatch(c,c->ctr); return; } // 800DF64C
}

// fn_800DF650
void f_800DF650(Ctx* __restrict c) {
  trace_call(0x800DF650u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF650
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DF654
  c->ctr=c->r[12]; // 800DF658
  if (true) { dispatch(c,c->ctr); return; } // 800DF65C
}

// fn_800DF660
void f_800DF660(Ctx* __restrict c) {
  trace_call(0x800DF660u);
  c->r[3]=0u+0x80410000u; // 800DF660
  c->r[3]=c->r[3]+0xFFFFDC15u; // 800DF664
  return; // 800DF668
}

// fn_800DF66C
void f_800DF66C(Ctx* __restrict c) {
  trace_call(0x800DF66Cu);
  c->r[3]=0u+0x00000034u; // 800DF66C
  return; // 800DF670
}

// fn_800DF674
void f_800DF674(Ctx* __restrict c) {
  trace_call(0x800DF674u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF674
  c->r[0]=c->lr; // 800DF678
  c->r[3]=0u+0x00000034u; // 800DF67C
  c->r[4]=c->r[13]+0xFFFFB6AAu; // 800DF680
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF684
  c->r[5]=0u+0x00000000u; // 800DF688
  c->r[6]=0u+0x00001001u; // 800DF68C
  c->lr=0x800DF694u; f_80244D20(c); // 800DF690
  cmps(c,0,(int32_t)c->r[3],0); // 800DF694
  if (crb(c,2)) { goto L_800DF6A0; } // 800DF698
  c->lr=0x800DF6A0u; f_800DF5A0(c); // 800DF69C
L_800DF6A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF6A0
  c->lr=c->r[0]; // 800DF6A4
  c->r[1]=c->r[1]+0x00000010u; // 800DF6A8
  return; // 800DF6AC
}

// fn_800DF6B0
void f_800DF6B0(Ctx* __restrict c) {
  trace_call(0x800DF6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF6B0
  c->r[0]=c->lr; // 800DF6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF6B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF6BC
  c->r[31]=c->r[3]|c->r[3]; // 800DF6C0
  c->lr=0x800DF6C8u; f_800D7120(c); // 800DF6C4
  c->r[5]=0u+0x80410000u; // 800DF6C8
  c->r[3]=0u+0xBBD00000u; // 800DF6CC
  c->r[4]=0u+0x00000000u; // 800DF6D0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DF6D4
  c->r[0]=c->r[3]+0x0000755Du; // 800DF6D8
  c->r[5]=c->r[5]+0x00006F60u; // 800DF6DC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DF6E0
  c->r[3]=c->r[31]|c->r[31]; // 800DF6E4
  W32(c->r[31]+0x00000044u,c->r[4]); // 800DF6E8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DF6EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF6F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF6F4
  c->lr=c->r[0]; // 800DF6F8
  c->r[1]=c->r[1]+0x00000010u; // 800DF6FC
  return; // 800DF700
}

// fn_800DF704
void f_800DF704(Ctx* __restrict c) {
  trace_call(0x800DF704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF704
  c->r[0]=c->lr; // 800DF708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF70C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF710
  c->r[30]=c->r[3]|c->r[3]; // 800DF714
  c->r[31]=c->r[4]|c->r[4]; // 800DF718
  c->lr=0x800DF720u; f_8030D728(c); // 800DF71C
  c->r[3]=c->r[31]|c->r[31]; // 800DF720
  c->r[4]=0u+0x00000000u; // 800DF724
  c->lr=0x800DF72Cu; f_8030BE30(c); // 800DF728
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DF72C
  c->r[3]=c->r[31]|c->r[31]; // 800DF730
  c->lr=0x800DF738u; f_8030BD1C(c); // 800DF734
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DF738
  c->r[3]=c->r[31]|c->r[31]; // 800DF73C
  c->r[4]=0u+0x00000000u; // 800DF740
  c->lr=0x800DF748u; f_8030BE30(c); // 800DF744
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DF748
  c->r[3]=c->r[31]|c->r[31]; // 800DF74C
  c->lr=0x800DF754u; f_8030BD1C(c); // 800DF750
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DF754
  c->r[3]=c->r[31]|c->r[31]; // 800DF758
  c->lr=0x800DF760u; f_8030C0A0(c); // 800DF75C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DF760
  c->r[3]=c->r[31]|c->r[31]; // 800DF764
  c->lr=0x800DF76Cu; f_8030C0A0(c); // 800DF768
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DF76C
  c->r[3]=c->r[31]|c->r[31]; // 800DF770
  c->lr=0x800DF778u; f_8030C0A0(c); // 800DF774
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DF778
  c->r[3]=c->r[31]|c->r[31]; // 800DF77C
  c->lr=0x800DF784u; f_8030BD1C(c); // 800DF780
  W32(c->r[30]+0x00000054u,c->r[3]); // 800DF784
  c->r[3]=c->r[31]|c->r[31]; // 800DF788
  c->lr=0x800DF790u; f_8030BD1C(c); // 800DF78C
  W32(c->r[30]+0x00000058u,c->r[3]); // 800DF790
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF794
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF798
  c->lr=c->r[0]; // 800DF79C
  c->r[1]=c->r[1]+0x00000010u; // 800DF7A0
  return; // 800DF7A4
}

// fn_800DF7A8
void f_800DF7A8(Ctx* __restrict c) {
  trace_call(0x800DF7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF7A8
  c->r[0]=c->lr; // 800DF7AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF7B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF7B4
  c->r[31]=c->r[4]|c->r[4]; // 800DF7B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF7BC
  c->r[30]=c->r[3]|c->r[3]; // 800DF7C0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DF7C4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DF7C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DF7CC
  c->r[3]=c->r[4]+0x00000030u; // 800DF7D0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DF7D4
  c->r[4]=c->r[30]+0x00000030u; // 800DF7D8
  c->lr=0x800DF7E0u; f_8003AB48(c); // 800DF7DC
  c->r[3]=c->r[31]+0x0000003Cu; // 800DF7E0
  c->r[4]=c->r[30]+0x0000003Cu; // 800DF7E4
  c->lr=0x800DF7ECu; f_8003AB48(c); // 800DF7E8
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF7EC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800DF7F0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF7F4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DF7F8
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF7FC
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DF800
  c->r[0]=R32(c->r[30]+0x00000054u); // 800DF804
  W32(c->r[31]+0x00000054u,c->r[0]); // 800DF808
  c->r[0]=R32(c->r[30]+0x00000058u); // 800DF80C
  W32(c->r[31]+0x00000058u,c->r[0]); // 800DF810
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF814
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF818
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF81C
  c->lr=c->r[0]; // 800DF820
  c->r[1]=c->r[1]+0x00000010u; // 800DF824
  return; // 800DF828
}

// fn_800DF82C
void f_800DF82C(Ctx* __restrict c) {
  trace_call(0x800DF82Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DF82C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DF830
  c->ctr=c->r[12]; // 800DF834
  if (true) { dispatch(c,c->ctr); return; } // 800DF838
}

// fn_800DF83C
void f_800DF83C(Ctx* __restrict c) {
  trace_call(0x800DF83Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF83C
  c->r[0]=c->lr; // 800DF840
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DF844
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF848
  c->r[29]=c->r[3]|c->r[3]; // 800DF84C
  c->r[30]=c->r[4]|c->r[4]; // 800DF850
  c->r[31]=c->r[5]|c->r[5]; // 800DF854
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DF858
  cmps(c,0,(int32_t)c->r[0],7); // 800DF85C
  if (!crb(c,0)) { goto L_800DF870; } // 800DF860
  c->r[4]=c->r[31]|c->r[31]; // 800DF864
  c->r[3]=c->r[3]+0x00000030u; // 800DF868
  c->lr=0x800DF870u; f_8003A994(c); // 800DF86C
L_800DF870:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DF870
  cmps(c,0,(int32_t)c->r[0],7); // 800DF874
  if (!crb(c,0)) { goto L_800DF888; } // 800DF878
  c->r[4]=c->r[31]|c->r[31]; // 800DF87C
  c->r[3]=c->r[29]+0x0000003Cu; // 800DF880
  c->lr=0x800DF888u; f_8003A994(c); // 800DF884
L_800DF888:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DF888
  c->r[3]=c->r[29]|c->r[29]; // 800DF88C
  c->r[4]=c->r[30]|c->r[30]; // 800DF890
  c->r[5]=c->r[31]|c->r[31]; // 800DF894
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DF898
  c->ctr=c->r[12]; // 800DF89C
  if (true) { c->lr=0x800DF8A4u; dispatch(c,c->ctr); } // 800DF8A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF8A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF8A8
  c->lr=c->r[0]; // 800DF8AC
  c->r[1]=c->r[1]+0x00000020u; // 800DF8B0
  return; // 800DF8B4
}

