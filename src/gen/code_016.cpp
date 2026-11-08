#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800D21BC
void f_800D21BC(Ctx* __restrict c) {
  trace_call(0x800D21BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D21BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D21C0
  c->ctr=c->r[12]; // 800D21C4
  if (true) { dispatch(c,c->ctr); return; } // 800D21C8
}

// fn_800D21CC
void f_800D21CC(Ctx* __restrict c) {
  trace_call(0x800D21CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D21CC
  c->r[0]=c->lr; // 800D21D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D21D4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D21D8
  c->r[29]=c->r[3]|c->r[3]; // 800D21DC
  c->r[30]=c->r[4]|c->r[4]; // 800D21E0
  c->r[31]=c->r[5]|c->r[5]; // 800D21E4
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D21E8
  cmps(c,0,(int32_t)c->r[0],7); // 800D21EC
  if (!crb(c,0)) { goto L_800D2200; } // 800D21F0
  c->r[4]=c->r[31]|c->r[31]; // 800D21F4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D21F8
  c->lr=0x800D2200u; f_8003A994(c); // 800D21FC
L_800D2200:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D2200
  c->r[3]=c->r[29]|c->r[29]; // 800D2204
  c->r[4]=c->r[30]|c->r[30]; // 800D2208
  c->r[5]=c->r[31]|c->r[31]; // 800D220C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2210
  c->ctr=c->r[12]; // 800D2214
  if (true) { c->lr=0x800D221Cu; dispatch(c,c->ctr); } // 800D2218
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D221C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2220
  c->lr=c->r[0]; // 800D2224
  c->r[1]=c->r[1]+0x00000020u; // 800D2228
  return; // 800D222C
}

// fn_800D2230
void f_800D2230(Ctx* __restrict c) {
  trace_call(0x800D2230u);
  c->r[3]=0u+0x80410000u; // 800D2230
  c->r[3]=c->r[3]+0xFFFFD16Fu; // 800D2234
  return; // 800D2238
}

// fn_800D223C
void f_800D223C(Ctx* __restrict c) {
  trace_call(0x800D223Cu);
  c->r[3]=0u+0x00000018u; // 800D223C
  return; // 800D2240
}

// fn_800D2244
void f_800D2244(Ctx* __restrict c) {
  trace_call(0x800D2244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2244
  c->r[0]=c->lr; // 800D2248
  c->r[3]=0u+0x00000018u; // 800D224C
  c->r[4]=c->r[13]+0xFFFFB3ABu; // 800D2250
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2254
  c->r[5]=0u+0x00000000u; // 800D2258
  c->r[6]=0u+0x00001001u; // 800D225C
  c->lr=0x800D2264u; f_80244D20(c); // 800D2260
  cmps(c,0,(int32_t)c->r[3],0); // 800D2264
  if (crb(c,2)) { goto L_800D2270; } // 800D2268
  c->lr=0x800D2270u; f_800D212C(c); // 800D226C
L_800D2270:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2270
  c->lr=c->r[0]; // 800D2274
  c->r[1]=c->r[1]+0x00000010u; // 800D2278
  return; // 800D227C
}

// fn_800D2280
void f_800D2280(Ctx* __restrict c) {
  trace_call(0x800D2280u);
  c->r[5]=0u+0x80420000u; // 800D2280
  c->r[4]=0u+0xDC6E0000u; // 800D2284
  c->r[5]=c->r[5]+0xFFFF8D70u; // 800D2288
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D228C
  c->r[0]=c->r[4]+0xFFFF9AB7u; // 800D2290
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2294
  return; // 800D2298
}

// fn_800D229C
void f_800D229C(Ctx* __restrict c) {
  trace_call(0x800D229Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D229C
  c->r[0]=c->lr; // 800D22A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D22A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D22A8
  c->r[30]=c->r[3]|c->r[3]; // 800D22AC
  c->r[31]=c->r[4]|c->r[4]; // 800D22B0
  c->lr=0x800D22B8u; f_8030D728(c); // 800D22B4
  c->r[3]=c->r[31]|c->r[31]; // 800D22B8
  c->lr=0x800D22C0u; f_8030C0A0(c); // 800D22BC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 800D22C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D22C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D22C8
  c->lr=c->r[0]; // 800D22CC
  c->r[1]=c->r[1]+0x00000010u; // 800D22D0
  return; // 800D22D4
}

// fn_800D22D8
void f_800D22D8(Ctx* __restrict c) {
  trace_call(0x800D22D8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D22D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D22DC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D22E0
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D22E4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D22E8
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D22EC
  return; // 800D22F0
}

// fn_800D22F4
void f_800D22F4(Ctx* __restrict c) {
  trace_call(0x800D22F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D22F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D22F8
  c->ctr=c->r[12]; // 800D22FC
  if (true) { dispatch(c,c->ctr); return; } // 800D2300
}

// fn_800D2304
void f_800D2304(Ctx* __restrict c) {
  trace_call(0x800D2304u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2304
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2308
  c->ctr=c->r[12]; // 800D230C
  if (true) { dispatch(c,c->ctr); return; } // 800D2310
}

// fn_800D2314
void f_800D2314(Ctx* __restrict c) {
  trace_call(0x800D2314u);
  c->r[3]=0u+0x80410000u; // 800D2314
  c->r[3]=c->r[3]+0xFFFFD183u; // 800D2318
  return; // 800D231C
}

// fn_800D2320
void f_800D2320(Ctx* __restrict c) {
  trace_call(0x800D2320u);
  c->r[3]=0u+0x00000010u; // 800D2320
  return; // 800D2324
}

// fn_800D2328
void f_800D2328(Ctx* __restrict c) {
  trace_call(0x800D2328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2328
  c->r[0]=c->lr; // 800D232C
  c->r[3]=0u+0x00000010u; // 800D2330
  c->r[4]=c->r[13]+0xFFFFB3B0u; // 800D2334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2338
  c->r[5]=0u+0x00000000u; // 800D233C
  c->r[6]=0u+0x00001001u; // 800D2340
  c->lr=0x800D2348u; f_80244D20(c); // 800D2344
  cmps(c,0,(int32_t)c->r[3],0); // 800D2348
  if (crb(c,2)) { goto L_800D2354; } // 800D234C
  c->lr=0x800D2354u; f_800D2280(c); // 800D2350
L_800D2354:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2354
  c->lr=c->r[0]; // 800D2358
  c->r[1]=c->r[1]+0x00000010u; // 800D235C
  return; // 800D2360
}

// fn_800D2364
void f_800D2364(Ctx* __restrict c) {
  trace_call(0x800D2364u);
  c->r[6]=0u+0x80420000u; // 800D2364
  c->r[4]=0u+0x59720000u; // 800D2368
  c->r[6]=c->r[6]+0xFFFF8D3Cu; // 800D236C
  c->r[5]=0u+0x00000000u; // 800D2370
  c->r[0]=c->r[4]+0x00004EB8u; // 800D2374
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D2378
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D237C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2380
  return; // 800D2384
}

// fn_800D2388
void f_800D2388(Ctx* __restrict c) {
  trace_call(0x800D2388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2388
  c->r[0]=c->lr; // 800D238C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2390
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2394
  c->r[30]=c->r[3]|c->r[3]; // 800D2398
  c->r[31]=c->r[4]|c->r[4]; // 800D239C
  c->lr=0x800D23A4u; f_8030D728(c); // 800D23A0
  c->r[3]=c->r[31]|c->r[31]; // 800D23A4
  c->r[4]=0u+0x00000000u; // 800D23A8
  c->lr=0x800D23B0u; f_8030BE30(c); // 800D23AC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D23B0
  c->r[3]=c->r[31]|c->r[31]; // 800D23B4
  c->lr=0x800D23BCu; f_8030BD1C(c); // 800D23B8
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D23BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D23C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D23C4
  c->lr=c->r[0]; // 800D23C8
  c->r[1]=c->r[1]+0x00000010u; // 800D23CC
  return; // 800D23D0
}

// fn_800D23D4
void f_800D23D4(Ctx* __restrict c) {
  trace_call(0x800D23D4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D23D4
  c->r[5]=c->r[3]|c->r[3]; // 800D23D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D23DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D23E0
  c->r[3]=c->r[4]+0x0000000Cu; // 800D23E4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D23E8
  c->r[4]=c->r[5]+0x0000000Cu; // 800D23EC
  f_8003AB48(c); return; // 800D23F0
}

// fn_800D23F4
void f_800D23F4(Ctx* __restrict c) {
  trace_call(0x800D23F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D23F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D23F8
  c->ctr=c->r[12]; // 800D23FC
  if (true) { dispatch(c,c->ctr); return; } // 800D2400
}

// fn_800D2404
void f_800D2404(Ctx* __restrict c) {
  trace_call(0x800D2404u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2404
  c->r[0]=c->lr; // 800D2408
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D240C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2410
  c->r[29]=c->r[3]|c->r[3]; // 800D2414
  c->r[30]=c->r[4]|c->r[4]; // 800D2418
  c->r[31]=c->r[5]|c->r[5]; // 800D241C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D2420
  cmps(c,0,(int32_t)c->r[0],7); // 800D2424
  if (!crb(c,0)) { goto L_800D2438; } // 800D2428
  c->r[4]=c->r[31]|c->r[31]; // 800D242C
  c->r[3]=c->r[3]+0x0000000Cu; // 800D2430
  c->lr=0x800D2438u; f_8003A994(c); // 800D2434
L_800D2438:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D2438
  c->r[3]=c->r[29]|c->r[29]; // 800D243C
  c->r[4]=c->r[30]|c->r[30]; // 800D2440
  c->r[5]=c->r[31]|c->r[31]; // 800D2444
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2448
  c->ctr=c->r[12]; // 800D244C
  if (true) { c->lr=0x800D2454u; dispatch(c,c->ctr); } // 800D2450
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2454
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2458
  c->lr=c->r[0]; // 800D245C
  c->r[1]=c->r[1]+0x00000020u; // 800D2460
  return; // 800D2464
}

// fn_800D2468
void f_800D2468(Ctx* __restrict c) {
  trace_call(0x800D2468u);
  c->r[3]=0u+0x80410000u; // 800D2468
  c->r[3]=c->r[3]+0xFFFFD197u; // 800D246C
  return; // 800D2470
}

// fn_800D2474
void f_800D2474(Ctx* __restrict c) {
  trace_call(0x800D2474u);
  c->r[3]=0u+0x00000018u; // 800D2474
  return; // 800D2478
}

// fn_800D247C
void f_800D247C(Ctx* __restrict c) {
  trace_call(0x800D247Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D247C
  c->r[0]=c->lr; // 800D2480
  c->r[3]=0u+0x00000018u; // 800D2484
  c->r[4]=c->r[13]+0xFFFFB3B5u; // 800D2488
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D248C
  c->r[5]=0u+0x00000000u; // 800D2490
  c->r[6]=0u+0x00001001u; // 800D2494
  c->lr=0x800D249Cu; f_80244D20(c); // 800D2498
  cmps(c,0,(int32_t)c->r[3],0); // 800D249C
  if (crb(c,2)) { goto L_800D24A8; } // 800D24A0
  c->lr=0x800D24A8u; f_800D2364(c); // 800D24A4
L_800D24A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D24A8
  c->lr=c->r[0]; // 800D24AC
  c->r[1]=c->r[1]+0x00000010u; // 800D24B0
  return; // 800D24B4
}

// fn_800D24B8
void f_800D24B8(Ctx* __restrict c) {
  trace_call(0x800D24B8u);
  c->r[6]=0u+0x80420000u; // 800D24B8
  c->r[4]=0u+0x59720000u; // 800D24BC
  c->r[6]=c->r[6]+0xFFFF8D08u; // 800D24C0
  c->r[5]=0u+0x00000000u; // 800D24C4
  c->r[0]=c->r[4]+0x00004EB8u; // 800D24C8
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D24CC
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D24D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D24D4
  return; // 800D24D8
}

// fn_800D24DC
void f_800D24DC(Ctx* __restrict c) {
  trace_call(0x800D24DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D24DC
  c->r[0]=c->lr; // 800D24E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D24E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D24E8
  c->r[30]=c->r[3]|c->r[3]; // 800D24EC
  c->r[31]=c->r[4]|c->r[4]; // 800D24F0
  c->lr=0x800D24F8u; f_8030D728(c); // 800D24F4
  c->r[3]=c->r[31]|c->r[31]; // 800D24F8
  c->r[4]=0u+0x00000000u; // 800D24FC
  c->lr=0x800D2504u; f_8030BE30(c); // 800D2500
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2504
  c->r[3]=c->r[31]|c->r[31]; // 800D2508
  c->lr=0x800D2510u; f_8030BD1C(c); // 800D250C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D2510
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2514
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2518
  c->lr=c->r[0]; // 800D251C
  c->r[1]=c->r[1]+0x00000010u; // 800D2520
  return; // 800D2524
}

// fn_800D2528
void f_800D2528(Ctx* __restrict c) {
  trace_call(0x800D2528u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D2528
  c->r[5]=c->r[3]|c->r[3]; // 800D252C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D2530
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D2534
  c->r[3]=c->r[4]+0x0000000Cu; // 800D2538
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D253C
  c->r[4]=c->r[5]+0x0000000Cu; // 800D2540
  f_8003AB48(c); return; // 800D2544
}

// fn_800D2548
void f_800D2548(Ctx* __restrict c) {
  trace_call(0x800D2548u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2548
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D254C
  c->ctr=c->r[12]; // 800D2550
  if (true) { dispatch(c,c->ctr); return; } // 800D2554
}

// fn_800D2558
void f_800D2558(Ctx* __restrict c) {
  trace_call(0x800D2558u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2558
  c->r[0]=c->lr; // 800D255C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2560
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2564
  c->r[29]=c->r[3]|c->r[3]; // 800D2568
  c->r[30]=c->r[4]|c->r[4]; // 800D256C
  c->r[31]=c->r[5]|c->r[5]; // 800D2570
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D2574
  cmps(c,0,(int32_t)c->r[0],7); // 800D2578
  if (!crb(c,0)) { goto L_800D258C; } // 800D257C
  c->r[4]=c->r[31]|c->r[31]; // 800D2580
  c->r[3]=c->r[3]+0x0000000Cu; // 800D2584
  c->lr=0x800D258Cu; f_8003A994(c); // 800D2588
L_800D258C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D258C
  c->r[3]=c->r[29]|c->r[29]; // 800D2590
  c->r[4]=c->r[30]|c->r[30]; // 800D2594
  c->r[5]=c->r[31]|c->r[31]; // 800D2598
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D259C
  c->ctr=c->r[12]; // 800D25A0
  if (true) { c->lr=0x800D25A8u; dispatch(c,c->ctr); } // 800D25A4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D25A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D25AC
  c->lr=c->r[0]; // 800D25B0
  c->r[1]=c->r[1]+0x00000020u; // 800D25B4
  return; // 800D25B8
}

// fn_800D25BC
void f_800D25BC(Ctx* __restrict c) {
  trace_call(0x800D25BCu);
  c->r[3]=0u+0x80410000u; // 800D25BC
  c->r[3]=c->r[3]+0xFFFFD1A5u; // 800D25C0
  return; // 800D25C4
}

// fn_800D25C8
void f_800D25C8(Ctx* __restrict c) {
  trace_call(0x800D25C8u);
  c->r[3]=0u+0x00000018u; // 800D25C8
  return; // 800D25CC
}

// fn_800D25D0
void f_800D25D0(Ctx* __restrict c) {
  trace_call(0x800D25D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D25D0
  c->r[0]=c->lr; // 800D25D4
  c->r[3]=0u+0x00000018u; // 800D25D8
  c->r[4]=c->r[13]+0xFFFFB3BAu; // 800D25DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D25E0
  c->r[5]=0u+0x00000000u; // 800D25E4
  c->r[6]=0u+0x00001001u; // 800D25E8
  c->lr=0x800D25F0u; f_80244D20(c); // 800D25EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D25F0
  if (crb(c,2)) { goto L_800D25FC; } // 800D25F4
  c->lr=0x800D25FCu; f_800D24B8(c); // 800D25F8
L_800D25FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D25FC
  c->lr=c->r[0]; // 800D2600
  c->r[1]=c->r[1]+0x00000010u; // 800D2604
  return; // 800D2608
}

// fn_800D260C
void f_800D260C(Ctx* __restrict c) {
  trace_call(0x800D260Cu);
  c->r[6]=0u+0x80420000u; // 800D260C
  c->r[4]=0u+0x59720000u; // 800D2610
  c->r[6]=c->r[6]+0xFFFF8CD4u; // 800D2614
  c->r[5]=0u+0x00000000u; // 800D2618
  c->r[0]=c->r[4]+0x00004EB8u; // 800D261C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D2620
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D2624
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2628
  return; // 800D262C
}

// fn_800D2630
void f_800D2630(Ctx* __restrict c) {
  trace_call(0x800D2630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2630
  c->r[0]=c->lr; // 800D2634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D263C
  c->r[30]=c->r[3]|c->r[3]; // 800D2640
  c->r[31]=c->r[4]|c->r[4]; // 800D2644
  c->lr=0x800D264Cu; f_8030D728(c); // 800D2648
  c->r[3]=c->r[31]|c->r[31]; // 800D264C
  c->r[4]=0u+0x00000000u; // 800D2650
  c->lr=0x800D2658u; f_8030BE30(c); // 800D2654
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2658
  c->r[3]=c->r[31]|c->r[31]; // 800D265C
  c->lr=0x800D2664u; f_8030BD1C(c); // 800D2660
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D2664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2668
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D266C
  c->lr=c->r[0]; // 800D2670
  c->r[1]=c->r[1]+0x00000010u; // 800D2674
  return; // 800D2678
}

// fn_800D267C
void f_800D267C(Ctx* __restrict c) {
  trace_call(0x800D267Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D267C
  c->r[5]=c->r[3]|c->r[3]; // 800D2680
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D2684
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D2688
  c->r[3]=c->r[4]+0x0000000Cu; // 800D268C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D2690
  c->r[4]=c->r[5]+0x0000000Cu; // 800D2694
  f_8003AB48(c); return; // 800D2698
}

// fn_800D269C
void f_800D269C(Ctx* __restrict c) {
  trace_call(0x800D269Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D269C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D26A0
  c->ctr=c->r[12]; // 800D26A4
  if (true) { dispatch(c,c->ctr); return; } // 800D26A8
}

// fn_800D26AC
void f_800D26AC(Ctx* __restrict c) {
  trace_call(0x800D26ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D26AC
  c->r[0]=c->lr; // 800D26B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D26B4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D26B8
  c->r[29]=c->r[3]|c->r[3]; // 800D26BC
  c->r[30]=c->r[4]|c->r[4]; // 800D26C0
  c->r[31]=c->r[5]|c->r[5]; // 800D26C4
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D26C8
  cmps(c,0,(int32_t)c->r[0],7); // 800D26CC
  if (!crb(c,0)) { goto L_800D26E0; } // 800D26D0
  c->r[4]=c->r[31]|c->r[31]; // 800D26D4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D26D8
  c->lr=0x800D26E0u; f_8003A994(c); // 800D26DC
L_800D26E0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D26E0
  c->r[3]=c->r[29]|c->r[29]; // 800D26E4
  c->r[4]=c->r[30]|c->r[30]; // 800D26E8
  c->r[5]=c->r[31]|c->r[31]; // 800D26EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D26F0
  c->ctr=c->r[12]; // 800D26F4
  if (true) { c->lr=0x800D26FCu; dispatch(c,c->ctr); } // 800D26F8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D26FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2700
  c->lr=c->r[0]; // 800D2704
  c->r[1]=c->r[1]+0x00000020u; // 800D2708
  return; // 800D270C
}

// fn_800D2710
void f_800D2710(Ctx* __restrict c) {
  trace_call(0x800D2710u);
  c->r[3]=0u+0x80410000u; // 800D2710
  c->r[3]=c->r[3]+0xFFFFD1B1u; // 800D2714
  return; // 800D2718
}

// fn_800D271C
void f_800D271C(Ctx* __restrict c) {
  trace_call(0x800D271Cu);
  c->r[3]=0u+0x00000018u; // 800D271C
  return; // 800D2720
}

// fn_800D2724
void f_800D2724(Ctx* __restrict c) {
  trace_call(0x800D2724u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2724
  c->r[0]=c->lr; // 800D2728
  c->r[3]=0u+0x00000018u; // 800D272C
  c->r[4]=c->r[13]+0xFFFFB3BFu; // 800D2730
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2734
  c->r[5]=0u+0x00000000u; // 800D2738
  c->r[6]=0u+0x00001001u; // 800D273C
  c->lr=0x800D2744u; f_80244D20(c); // 800D2740
  cmps(c,0,(int32_t)c->r[3],0); // 800D2744
  if (crb(c,2)) { goto L_800D2750; } // 800D2748
  c->lr=0x800D2750u; f_800D260C(c); // 800D274C
L_800D2750:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2750
  c->lr=c->r[0]; // 800D2754
  c->r[1]=c->r[1]+0x00000010u; // 800D2758
  return; // 800D275C
}

// fn_800D2760
void f_800D2760(Ctx* __restrict c) {
  trace_call(0x800D2760u);
  c->r[6]=0u+0x80420000u; // 800D2760
  c->r[4]=0u+0xE56B0000u; // 800D2764
  c->r[6]=c->r[6]+0xFFFF8CA0u; // 800D2768
  c->r[5]=0u+0x00000000u; // 800D276C
  c->r[0]=c->r[4]+0x00006F6Bu; // 800D2770
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D2774
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D2778
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D277C
  return; // 800D2780
}

// fn_800D2784
void f_800D2784(Ctx* __restrict c) {
  trace_call(0x800D2784u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2784
  c->r[0]=c->lr; // 800D2788
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D278C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2790
  c->r[30]=c->r[3]|c->r[3]; // 800D2794
  c->r[31]=c->r[4]|c->r[4]; // 800D2798
  c->lr=0x800D27A0u; f_8030D728(c); // 800D279C
  c->r[3]=c->r[31]|c->r[31]; // 800D27A0
  c->r[4]=0u+0x00000000u; // 800D27A4
  c->lr=0x800D27ACu; f_8030BE30(c); // 800D27A8
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D27AC
  c->r[3]=c->r[31]|c->r[31]; // 800D27B0
  c->lr=0x800D27B8u; f_8030BD1C(c); // 800D27B4
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D27B8
  c->r[3]=c->r[31]|c->r[31]; // 800D27BC
  c->lr=0x800D27C4u; f_8030BD1C(c); // 800D27C0
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D27C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D27C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D27CC
  c->lr=c->r[0]; // 800D27D0
  c->r[1]=c->r[1]+0x00000010u; // 800D27D4
  return; // 800D27D8
}

// fn_800D27DC
void f_800D27DC(Ctx* __restrict c) {
  trace_call(0x800D27DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D27DC
  c->r[0]=c->lr; // 800D27E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D27E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D27E8
  c->r[30]=c->r[3]|c->r[3]; // 800D27EC
  c->r[31]=c->r[4]|c->r[4]; // 800D27F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D27F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D27F8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D27FC
  c->r[3]=c->r[4]+0x0000000Cu; // 800D2800
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D2804
  c->r[4]=c->r[30]+0x0000000Cu; // 800D2808
  c->lr=0x800D2810u; f_8003AB48(c); // 800D280C
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D2810
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D2814
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2818
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D281C
  c->lr=c->r[0]; // 800D2820
  c->r[1]=c->r[1]+0x00000010u; // 800D2824
  return; // 800D2828
}

// fn_800D282C
void f_800D282C(Ctx* __restrict c) {
  trace_call(0x800D282Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D282C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2830
  c->ctr=c->r[12]; // 800D2834
  if (true) { dispatch(c,c->ctr); return; } // 800D2838
}

// fn_800D283C
void f_800D283C(Ctx* __restrict c) {
  trace_call(0x800D283Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D283C
  c->r[0]=c->lr; // 800D2840
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2844
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2848
  c->r[29]=c->r[3]|c->r[3]; // 800D284C
  c->r[30]=c->r[4]|c->r[4]; // 800D2850
  c->r[31]=c->r[5]|c->r[5]; // 800D2854
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D2858
  cmps(c,0,(int32_t)c->r[0],7); // 800D285C
  if (!crb(c,0)) { goto L_800D2870; } // 800D2860
  c->r[4]=c->r[31]|c->r[31]; // 800D2864
  c->r[3]=c->r[3]+0x0000000Cu; // 800D2868
  c->lr=0x800D2870u; f_8003A994(c); // 800D286C
L_800D2870:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D2870
  c->r[3]=c->r[29]|c->r[29]; // 800D2874
  c->r[4]=c->r[30]|c->r[30]; // 800D2878
  c->r[5]=c->r[31]|c->r[31]; // 800D287C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2880
  c->ctr=c->r[12]; // 800D2884
  if (true) { c->lr=0x800D288Cu; dispatch(c,c->ctr); } // 800D2888
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D288C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2890
  c->lr=c->r[0]; // 800D2894
  c->r[1]=c->r[1]+0x00000020u; // 800D2898
  return; // 800D289C
}

// fn_800D28A0
void f_800D28A0(Ctx* __restrict c) {
  trace_call(0x800D28A0u);
  c->r[3]=0u+0x80410000u; // 800D28A0
  c->r[3]=c->r[3]+0xFFFFD1BDu; // 800D28A4
  return; // 800D28A8
}

// fn_800D28AC
void f_800D28AC(Ctx* __restrict c) {
  trace_call(0x800D28ACu);
  c->r[3]=0u+0x0000001Cu; // 800D28AC
  return; // 800D28B0
}

// fn_800D28B4
void f_800D28B4(Ctx* __restrict c) {
  trace_call(0x800D28B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D28B4
  c->r[0]=c->lr; // 800D28B8
  c->r[3]=0u+0x0000001Cu; // 800D28BC
  c->r[4]=c->r[13]+0xFFFFB3C4u; // 800D28C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D28C4
  c->r[5]=0u+0x00000000u; // 800D28C8
  c->r[6]=0u+0x00001001u; // 800D28CC
  c->lr=0x800D28D4u; f_80244D20(c); // 800D28D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D28D4
  if (crb(c,2)) { goto L_800D28E0; } // 800D28D8
  c->lr=0x800D28E0u; f_800D2760(c); // 800D28DC
L_800D28E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D28E0
  c->lr=c->r[0]; // 800D28E4
  c->r[1]=c->r[1]+0x00000010u; // 800D28E8
  return; // 800D28EC
}

// fn_800D28F0
void f_800D28F0(Ctx* __restrict c) {
  trace_call(0x800D28F0u);
  c->r[4]=0u+0x80420000u; // 800D28F0
  c->r[0]=0u+0x00000000u; // 800D28F4
  c->r[4]=c->r[4]+0xFFFF8C6Cu; // 800D28F8
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D28FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2900
  return; // 800D2904
}

// fn_800D2908
void f_800D2908(Ctx* __restrict c) {
  trace_call(0x800D2908u);
  f_8030D728(c); return; // 800D2908
}

// fn_800D290C
void f_800D290C(Ctx* __restrict c) {
  trace_call(0x800D290Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D290C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D2910
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D2914
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D2918
  return; // 800D291C
}

// fn_800D2920
void f_800D2920(Ctx* __restrict c) {
  trace_call(0x800D2920u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2920
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2924
  c->ctr=c->r[12]; // 800D2928
  if (true) { dispatch(c,c->ctr); return; } // 800D292C
}

// fn_800D2930
void f_800D2930(Ctx* __restrict c) {
  trace_call(0x800D2930u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2930
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2934
  c->ctr=c->r[12]; // 800D2938
  if (true) { dispatch(c,c->ctr); return; } // 800D293C
}

// fn_800D2940
void f_800D2940(Ctx* __restrict c) {
  trace_call(0x800D2940u);
  c->r[3]=0u+0x80410000u; // 800D2940
  c->r[3]=c->r[3]+0xFFFFD1D0u; // 800D2944
  return; // 800D2948
}

// fn_800D294C
void f_800D294C(Ctx* __restrict c) {
  trace_call(0x800D294Cu);
  c->r[3]=0u+0x0000000Cu; // 800D294C
  return; // 800D2950
}

// fn_800D2954
void f_800D2954(Ctx* __restrict c) {
  trace_call(0x800D2954u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2954
  c->r[0]=c->lr; // 800D2958
  c->r[3]=0u+0x0000000Cu; // 800D295C
  c->r[4]=c->r[13]+0xFFFFB3C9u; // 800D2960
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2964
  c->r[5]=0u+0x00000000u; // 800D2968
  c->r[6]=0u+0x00001001u; // 800D296C
  c->lr=0x800D2974u; f_80244D20(c); // 800D2970
  cmps(c,0,(int32_t)c->r[3],0); // 800D2974
  if (crb(c,2)) { goto L_800D2980; } // 800D2978
  c->lr=0x800D2980u; f_800D28F0(c); // 800D297C
L_800D2980:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2980
  c->lr=c->r[0]; // 800D2984
  c->r[1]=c->r[1]+0x00000010u; // 800D2988
  return; // 800D298C
}

// fn_800D2990
void f_800D2990(Ctx* __restrict c) {
  trace_call(0x800D2990u);
  c->r[4]=0u+0x80420000u; // 800D2990
  c->r[0]=0u+0x00000000u; // 800D2994
  c->r[4]=c->r[4]+0xFFFF8C38u; // 800D2998
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D299C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D29A0
  return; // 800D29A4
}

// fn_800D29A8
void f_800D29A8(Ctx* __restrict c) {
  trace_call(0x800D29A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D29A8
  c->r[0]=c->lr; // 800D29AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D29B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D29B4
  c->r[30]=c->r[3]|c->r[3]; // 800D29B8
  c->r[31]=c->r[4]|c->r[4]; // 800D29BC
  c->lr=0x800D29C4u; f_8030D728(c); // 800D29C0
  c->r[3]=c->r[31]|c->r[31]; // 800D29C4
  c->lr=0x800D29CCu; f_8030BD1C(c); // 800D29C8
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D29CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D29D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D29D4
  c->lr=c->r[0]; // 800D29D8
  c->r[1]=c->r[1]+0x00000010u; // 800D29DC
  return; // 800D29E0
}

// fn_800D29E4
void f_800D29E4(Ctx* __restrict c) {
  trace_call(0x800D29E4u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D29E4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D29E8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D29EC
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D29F0
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D29F4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D29F8
  return; // 800D29FC
}

// fn_800D2A00
void f_800D2A00(Ctx* __restrict c) {
  trace_call(0x800D2A00u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2A00
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2A04
  c->ctr=c->r[12]; // 800D2A08
  if (true) { dispatch(c,c->ctr); return; } // 800D2A0C
}

// fn_800D2A10
void f_800D2A10(Ctx* __restrict c) {
  trace_call(0x800D2A10u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2A10
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2A14
  c->ctr=c->r[12]; // 800D2A18
  if (true) { dispatch(c,c->ctr); return; } // 800D2A1C
}

// fn_800D2A20
void f_800D2A20(Ctx* __restrict c) {
  trace_call(0x800D2A20u);
  c->r[3]=0u+0x80410000u; // 800D2A20
  c->r[3]=c->r[3]+0xFFFFD1E4u; // 800D2A24
  return; // 800D2A28
}

// fn_800D2A2C
void f_800D2A2C(Ctx* __restrict c) {
  trace_call(0x800D2A2Cu);
  c->r[3]=0u+0x00000010u; // 800D2A2C
  return; // 800D2A30
}

// fn_800D2A34
void f_800D2A34(Ctx* __restrict c) {
  trace_call(0x800D2A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2A34
  c->r[0]=c->lr; // 800D2A38
  c->r[3]=0u+0x00000010u; // 800D2A3C
  c->r[4]=c->r[13]+0xFFFFB3CEu; // 800D2A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2A44
  c->r[5]=0u+0x00000000u; // 800D2A48
  c->r[6]=0u+0x00001001u; // 800D2A4C
  c->lr=0x800D2A54u; f_80244D20(c); // 800D2A50
  cmps(c,0,(int32_t)c->r[3],0); // 800D2A54
  if (crb(c,2)) { goto L_800D2A60; } // 800D2A58
  c->lr=0x800D2A60u; f_800D2990(c); // 800D2A5C
L_800D2A60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2A60
  c->lr=c->r[0]; // 800D2A64
  c->r[1]=c->r[1]+0x00000010u; // 800D2A68
  return; // 800D2A6C
}

// fn_800D2A70
void f_800D2A70(Ctx* __restrict c) {
  trace_call(0x800D2A70u);
  c->r[4]=0u+0x80420000u; // 800D2A70
  c->r[0]=0u+0x00000000u; // 800D2A74
  c->r[4]=c->r[4]+0xFFFF8C04u; // 800D2A78
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D2A7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2A80
  return; // 800D2A84
}

// fn_800D2A88
void f_800D2A88(Ctx* __restrict c) {
  trace_call(0x800D2A88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2A88
  c->r[0]=c->lr; // 800D2A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2A90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2A94
  c->r[30]=c->r[3]|c->r[3]; // 800D2A98
  c->r[31]=c->r[4]|c->r[4]; // 800D2A9C
  c->lr=0x800D2AA4u; f_8030D728(c); // 800D2AA0
  c->r[3]=c->r[31]|c->r[31]; // 800D2AA4
  c->lr=0x800D2AACu; f_8030BD1C(c); // 800D2AA8
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2AAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2AB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2AB4
  c->lr=c->r[0]; // 800D2AB8
  c->r[1]=c->r[1]+0x00000010u; // 800D2ABC
  return; // 800D2AC0
}

// fn_800D2AC4
void f_800D2AC4(Ctx* __restrict c) {
  trace_call(0x800D2AC4u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D2AC4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D2AC8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D2ACC
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D2AD0
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D2AD4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D2AD8
  return; // 800D2ADC
}

// fn_800D2AE0
void f_800D2AE0(Ctx* __restrict c) {
  trace_call(0x800D2AE0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2AE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2AE4
  c->ctr=c->r[12]; // 800D2AE8
  if (true) { dispatch(c,c->ctr); return; } // 800D2AEC
}

// fn_800D2AF0
void f_800D2AF0(Ctx* __restrict c) {
  trace_call(0x800D2AF0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2AF0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2AF4
  c->ctr=c->r[12]; // 800D2AF8
  if (true) { dispatch(c,c->ctr); return; } // 800D2AFC
}

// fn_800D2B00
void f_800D2B00(Ctx* __restrict c) {
  trace_call(0x800D2B00u);
  c->r[3]=0u+0x80410000u; // 800D2B00
  c->r[3]=c->r[3]+0xFFFFD1F7u; // 800D2B04
  return; // 800D2B08
}

// fn_800D2B0C
void f_800D2B0C(Ctx* __restrict c) {
  trace_call(0x800D2B0Cu);
  c->r[3]=0u+0x00000010u; // 800D2B0C
  return; // 800D2B10
}

// fn_800D2B14
void f_800D2B14(Ctx* __restrict c) {
  trace_call(0x800D2B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2B14
  c->r[0]=c->lr; // 800D2B18
  c->r[3]=0u+0x00000010u; // 800D2B1C
  c->r[4]=c->r[13]+0xFFFFB3D3u; // 800D2B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2B24
  c->r[5]=0u+0x00000000u; // 800D2B28
  c->r[6]=0u+0x00001001u; // 800D2B2C
  c->lr=0x800D2B34u; f_80244D20(c); // 800D2B30
  cmps(c,0,(int32_t)c->r[3],0); // 800D2B34
  if (crb(c,2)) { goto L_800D2B40; } // 800D2B38
  c->lr=0x800D2B40u; f_800D2A70(c); // 800D2B3C
L_800D2B40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2B40
  c->lr=c->r[0]; // 800D2B44
  c->r[1]=c->r[1]+0x00000010u; // 800D2B48
  return; // 800D2B4C
}

// fn_800D2B50
void f_800D2B50(Ctx* __restrict c) {
  trace_call(0x800D2B50u);
  c->r[4]=0u+0x80420000u; // 800D2B50
  c->r[0]=0u+0x00000000u; // 800D2B54
  c->r[4]=c->r[4]+0xFFFF8BD0u; // 800D2B58
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D2B5C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2B60
  return; // 800D2B64
}

// fn_800D2B68
void f_800D2B68(Ctx* __restrict c) {
  trace_call(0x800D2B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2B68
  c->r[0]=c->lr; // 800D2B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2B70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2B74
  c->r[30]=c->r[3]|c->r[3]; // 800D2B78
  c->r[31]=c->r[4]|c->r[4]; // 800D2B7C
  c->lr=0x800D2B84u; f_8030D728(c); // 800D2B80
  c->r[3]=c->r[31]|c->r[31]; // 800D2B84
  c->lr=0x800D2B8Cu; f_8030BD1C(c); // 800D2B88
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2B8C
  c->r[3]=c->r[31]|c->r[31]; // 800D2B90
  c->lr=0x800D2B98u; f_8030BD1C(c); // 800D2B94
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D2B98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2B9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2BA0
  c->lr=c->r[0]; // 800D2BA4
  c->r[1]=c->r[1]+0x00000010u; // 800D2BA8
  return; // 800D2BAC
}

// fn_800D2BB0
void f_800D2BB0(Ctx* __restrict c) {
  trace_call(0x800D2BB0u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D2BB0
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D2BB4
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800D2BB8
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D2BBC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D2BC0
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D2BC4
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 800D2BC8
  W32(c->r[4]+0x00000010u,c->r[0]); // 800D2BCC
  return; // 800D2BD0
}

// fn_800D2BD4
void f_800D2BD4(Ctx* __restrict c) {
  trace_call(0x800D2BD4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2BD4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2BD8
  c->ctr=c->r[12]; // 800D2BDC
  if (true) { dispatch(c,c->ctr); return; } // 800D2BE0
}

// fn_800D2BE4
void f_800D2BE4(Ctx* __restrict c) {
  trace_call(0x800D2BE4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2BE4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2BE8
  c->ctr=c->r[12]; // 800D2BEC
  if (true) { dispatch(c,c->ctr); return; } // 800D2BF0
}

// fn_800D2BF4
void f_800D2BF4(Ctx* __restrict c) {
  trace_call(0x800D2BF4u);
  c->r[3]=0u+0x80410000u; // 800D2BF4
  c->r[3]=c->r[3]+0xFFFFD206u; // 800D2BF8
  return; // 800D2BFC
}

// fn_800D2C00
void f_800D2C00(Ctx* __restrict c) {
  trace_call(0x800D2C00u);
  c->r[3]=0u+0x00000014u; // 800D2C00
  return; // 800D2C04
}

// fn_800D2C08
void f_800D2C08(Ctx* __restrict c) {
  trace_call(0x800D2C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2C08
  c->r[0]=c->lr; // 800D2C0C
  c->r[3]=0u+0x00000014u; // 800D2C10
  c->r[4]=c->r[13]+0xFFFFB3D8u; // 800D2C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2C18
  c->r[5]=0u+0x00000000u; // 800D2C1C
  c->r[6]=0u+0x00001001u; // 800D2C20
  c->lr=0x800D2C28u; f_80244D20(c); // 800D2C24
  cmps(c,0,(int32_t)c->r[3],0); // 800D2C28
  if (crb(c,2)) { goto L_800D2C34; } // 800D2C2C
  c->lr=0x800D2C34u; f_800D2B50(c); // 800D2C30
L_800D2C34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2C34
  c->lr=c->r[0]; // 800D2C38
  c->r[1]=c->r[1]+0x00000010u; // 800D2C3C
  return; // 800D2C40
}

// fn_800D2C44
void f_800D2C44(Ctx* __restrict c) {
  trace_call(0x800D2C44u);
  c->r[4]=0u+0x80420000u; // 800D2C44
  c->r[0]=0u+0x00000000u; // 800D2C48
  c->r[4]=c->r[4]+0xFFFF8B9Cu; // 800D2C4C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D2C50
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2C54
  return; // 800D2C58
}

// fn_800D2C5C
void f_800D2C5C(Ctx* __restrict c) {
  trace_call(0x800D2C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2C5C
  c->r[0]=c->lr; // 800D2C60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2C64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2C68
  c->r[30]=c->r[3]|c->r[3]; // 800D2C6C
  c->r[31]=c->r[4]|c->r[4]; // 800D2C70
  c->lr=0x800D2C78u; f_8030D728(c); // 800D2C74
  c->r[3]=c->r[31]|c->r[31]; // 800D2C78
  c->lr=0x800D2C80u; f_8030BD1C(c); // 800D2C7C
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2C80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2C84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2C88
  c->lr=c->r[0]; // 800D2C8C
  c->r[1]=c->r[1]+0x00000010u; // 800D2C90
  return; // 800D2C94
}

// fn_800D2C98
void f_800D2C98(Ctx* __restrict c) {
  trace_call(0x800D2C98u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D2C98
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D2C9C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D2CA0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D2CA4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D2CA8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D2CAC
  return; // 800D2CB0
}

// fn_800D2CB4
void f_800D2CB4(Ctx* __restrict c) {
  trace_call(0x800D2CB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2CB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2CB8
  c->ctr=c->r[12]; // 800D2CBC
  if (true) { dispatch(c,c->ctr); return; } // 800D2CC0
}

// fn_800D2CC4
void f_800D2CC4(Ctx* __restrict c) {
  trace_call(0x800D2CC4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2CC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2CC8
  c->ctr=c->r[12]; // 800D2CCC
  if (true) { dispatch(c,c->ctr); return; } // 800D2CD0
}

// fn_800D2CD4
void f_800D2CD4(Ctx* __restrict c) {
  trace_call(0x800D2CD4u);
  c->r[3]=0u+0x80410000u; // 800D2CD4
  c->r[3]=c->r[3]+0xFFFFD214u; // 800D2CD8
  return; // 800D2CDC
}

// fn_800D2CE0
void f_800D2CE0(Ctx* __restrict c) {
  trace_call(0x800D2CE0u);
  c->r[3]=0u+0x00000010u; // 800D2CE0
  return; // 800D2CE4
}

// fn_800D2CE8
void f_800D2CE8(Ctx* __restrict c) {
  trace_call(0x800D2CE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2CE8
  c->r[0]=c->lr; // 800D2CEC
  c->r[3]=0u+0x00000010u; // 800D2CF0
  c->r[4]=c->r[13]+0xFFFFB3DDu; // 800D2CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2CF8
  c->r[5]=0u+0x00000000u; // 800D2CFC
  c->r[6]=0u+0x00001001u; // 800D2D00
  c->lr=0x800D2D08u; f_80244D20(c); // 800D2D04
  cmps(c,0,(int32_t)c->r[3],0); // 800D2D08
  if (crb(c,2)) { goto L_800D2D14; } // 800D2D0C
  c->lr=0x800D2D14u; f_800D2C44(c); // 800D2D10
L_800D2D14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2D14
  c->lr=c->r[0]; // 800D2D18
  c->r[1]=c->r[1]+0x00000010u; // 800D2D1C
  return; // 800D2D20
}

// fn_800D2D24
void f_800D2D24(Ctx* __restrict c) {
  trace_call(0x800D2D24u);
  c->r[4]=0u+0x80420000u; // 800D2D24
  c->r[0]=0u+0x00000000u; // 800D2D28
  c->r[4]=c->r[4]+0xFFFF8B68u; // 800D2D2C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D2D30
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2D34
  return; // 800D2D38
}

// fn_800D2D3C
void f_800D2D3C(Ctx* __restrict c) {
  trace_call(0x800D2D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2D3C
  c->r[0]=c->lr; // 800D2D40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2D44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2D48
  c->r[30]=c->r[3]|c->r[3]; // 800D2D4C
  c->r[31]=c->r[4]|c->r[4]; // 800D2D50
  c->lr=0x800D2D58u; f_8030D728(c); // 800D2D54
  c->r[3]=c->r[31]|c->r[31]; // 800D2D58
  c->lr=0x800D2D60u; f_8030BD1C(c); // 800D2D5C
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2D60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2D64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2D68
  c->lr=c->r[0]; // 800D2D6C
  c->r[1]=c->r[1]+0x00000010u; // 800D2D70
  return; // 800D2D74
}

// fn_800D2D78
void f_800D2D78(Ctx* __restrict c) {
  trace_call(0x800D2D78u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D2D78
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D2D7C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D2D80
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D2D84
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D2D88
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D2D8C
  return; // 800D2D90
}

// fn_800D2D94
void f_800D2D94(Ctx* __restrict c) {
  trace_call(0x800D2D94u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2D94
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2D98
  c->ctr=c->r[12]; // 800D2D9C
  if (true) { dispatch(c,c->ctr); return; } // 800D2DA0
}

// fn_800D2DA4
void f_800D2DA4(Ctx* __restrict c) {
  trace_call(0x800D2DA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2DA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2DA8
  c->ctr=c->r[12]; // 800D2DAC
  if (true) { dispatch(c,c->ctr); return; } // 800D2DB0
}

// fn_800D2DB4
void f_800D2DB4(Ctx* __restrict c) {
  trace_call(0x800D2DB4u);
  c->r[3]=0u+0x80410000u; // 800D2DB4
  c->r[3]=c->r[3]+0xFFFFD21Fu; // 800D2DB8
  return; // 800D2DBC
}

// fn_800D2DC0
void f_800D2DC0(Ctx* __restrict c) {
  trace_call(0x800D2DC0u);
  c->r[3]=0u+0x00000010u; // 800D2DC0
  return; // 800D2DC4
}

// fn_800D2DC8
void f_800D2DC8(Ctx* __restrict c) {
  trace_call(0x800D2DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2DC8
  c->r[0]=c->lr; // 800D2DCC
  c->r[3]=0u+0x00000010u; // 800D2DD0
  c->r[4]=c->r[13]+0xFFFFB3E2u; // 800D2DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2DD8
  c->r[5]=0u+0x00000000u; // 800D2DDC
  c->r[6]=0u+0x00001001u; // 800D2DE0
  c->lr=0x800D2DE8u; f_80244D20(c); // 800D2DE4
  cmps(c,0,(int32_t)c->r[3],0); // 800D2DE8
  if (crb(c,2)) { goto L_800D2DF4; } // 800D2DEC
  c->lr=0x800D2DF4u; f_800D2D24(c); // 800D2DF0
L_800D2DF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2DF4
  c->lr=c->r[0]; // 800D2DF8
  c->r[1]=c->r[1]+0x00000010u; // 800D2DFC
  return; // 800D2E00
}

// fn_800D2E04
void f_800D2E04(Ctx* __restrict c) {
  trace_call(0x800D2E04u);
  c->r[5]=0u+0x80420000u; // 800D2E04
  c->r[4]=0u+0xBC1A0000u; // 800D2E08
  c->r[5]=c->r[5]+0xFFFF8B34u; // 800D2E0C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D2E10
  c->r[0]=c->r[4]+0x000028D9u; // 800D2E14
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2E18
  return; // 800D2E1C
}

// fn_800D2E20
void f_800D2E20(Ctx* __restrict c) {
  trace_call(0x800D2E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E20
  c->r[0]=c->lr; // 800D2E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2E28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2E2C
  c->r[30]=c->r[3]|c->r[3]; // 800D2E30
  c->r[31]=c->r[4]|c->r[4]; // 800D2E34
  c->lr=0x800D2E3Cu; f_8030D728(c); // 800D2E38
  c->r[3]=c->r[31]|c->r[31]; // 800D2E3C
  c->lr=0x800D2E44u; f_8030BD1C(c); // 800D2E40
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2E44
  c->r[3]=c->r[31]|c->r[31]; // 800D2E48
  c->lr=0x800D2E50u; f_8030BD1C(c); // 800D2E4C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D2E50
  c->r[3]=c->r[31]|c->r[31]; // 800D2E54
  c->lr=0x800D2E5Cu; f_8030BD1C(c); // 800D2E58
  W8(c->r[30]+0x00000014u,c->r[3]); // 800D2E5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2E60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2E64
  c->lr=c->r[0]; // 800D2E68
  c->r[1]=c->r[1]+0x00000010u; // 800D2E6C
  return; // 800D2E70
}

// fn_800D2E74
void f_800D2E74(Ctx* __restrict c) {
  trace_call(0x800D2E74u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800D2E74
  c->r[7]=R32(c->r[3]+0x00000004u); // 800D2E78
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800D2E7C
  c->r[5]=R32(c->r[3]+0x00000010u); // 800D2E80
  c->r[0]=R8(c->r[3]+0x00000014u); // 800D2E84
  W32(c->r[4]+0x00000000u,c->r[8]); // 800D2E88
  W32(c->r[4]+0x00000004u,c->r[7]); // 800D2E8C
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800D2E90
  W32(c->r[4]+0x00000010u,c->r[5]); // 800D2E94
  W8(c->r[4]+0x00000014u,c->r[0]); // 800D2E98
  return; // 800D2E9C
}

// fn_800D2EA0
void f_800D2EA0(Ctx* __restrict c) {
  trace_call(0x800D2EA0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2EA0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2EA4
  c->ctr=c->r[12]; // 800D2EA8
  if (true) { dispatch(c,c->ctr); return; } // 800D2EAC
}

// fn_800D2EB0
void f_800D2EB0(Ctx* __restrict c) {
  trace_call(0x800D2EB0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2EB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2EB4
  c->ctr=c->r[12]; // 800D2EB8
  if (true) { dispatch(c,c->ctr); return; } // 800D2EBC
}

// fn_800D2EC0
void f_800D2EC0(Ctx* __restrict c) {
  trace_call(0x800D2EC0u);
  c->r[3]=0u+0x80410000u; // 800D2EC0
  c->r[3]=c->r[3]+0xFFFFD22Du; // 800D2EC4
  return; // 800D2EC8
}

// fn_800D2ECC
void f_800D2ECC(Ctx* __restrict c) {
  trace_call(0x800D2ECCu);
  c->r[3]=0u+0x00000018u; // 800D2ECC
  return; // 800D2ED0
}

// fn_800D2ED4
void f_800D2ED4(Ctx* __restrict c) {
  trace_call(0x800D2ED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2ED4
  c->r[0]=c->lr; // 800D2ED8
  c->r[3]=0u+0x00000018u; // 800D2EDC
  c->r[4]=c->r[13]+0xFFFFB3E7u; // 800D2EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2EE4
  c->r[5]=0u+0x00000000u; // 800D2EE8
  c->r[6]=0u+0x00001001u; // 800D2EEC
  c->lr=0x800D2EF4u; f_80244D20(c); // 800D2EF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2EF4
  if (crb(c,2)) { goto L_800D2F00; } // 800D2EF8
  c->lr=0x800D2F00u; f_800D2E04(c); // 800D2EFC
L_800D2F00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2F00
  c->lr=c->r[0]; // 800D2F04
  c->r[1]=c->r[1]+0x00000010u; // 800D2F08
  return; // 800D2F0C
}

// fn_800D2F10
void f_800D2F10(Ctx* __restrict c) {
  trace_call(0x800D2F10u);
  c->r[5]=0u+0x80420000u; // 800D2F10
  c->r[4]=0u+0x7CF50000u; // 800D2F14
  c->r[5]=c->r[5]+0xFFFF8B00u; // 800D2F18
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D2F1C
  c->r[0]=c->r[4]+0x00004C05u; // 800D2F20
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2F24
  return; // 800D2F28
}

// fn_800D2F2C
void f_800D2F2C(Ctx* __restrict c) {
  trace_call(0x800D2F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2F2C
  c->r[0]=c->lr; // 800D2F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2F34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2F38
  c->r[30]=c->r[3]|c->r[3]; // 800D2F3C
  c->r[31]=c->r[4]|c->r[4]; // 800D2F40
  c->lr=0x800D2F48u; f_8030D728(c); // 800D2F44
  c->r[3]=c->r[31]|c->r[31]; // 800D2F48
  c->lr=0x800D2F50u; f_8030BD1C(c); // 800D2F4C
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D2F50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2F58
  c->lr=c->r[0]; // 800D2F5C
  c->r[1]=c->r[1]+0x00000010u; // 800D2F60
  return; // 800D2F64
}

// fn_800D2F68
void f_800D2F68(Ctx* __restrict c) {
  trace_call(0x800D2F68u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D2F68
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D2F6C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D2F70
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D2F74
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D2F78
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D2F7C
  return; // 800D2F80
}

// fn_800D2F84
void f_800D2F84(Ctx* __restrict c) {
  trace_call(0x800D2F84u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2F84
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D2F88
  c->ctr=c->r[12]; // 800D2F8C
  if (true) { dispatch(c,c->ctr); return; } // 800D2F90
}

// fn_800D2F94
void f_800D2F94(Ctx* __restrict c) {
  trace_call(0x800D2F94u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D2F94
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D2F98
  c->ctr=c->r[12]; // 800D2F9C
  if (true) { dispatch(c,c->ctr); return; } // 800D2FA0
}

// fn_800D2FA4
void f_800D2FA4(Ctx* __restrict c) {
  trace_call(0x800D2FA4u);
  c->r[3]=0u+0x80410000u; // 800D2FA4
  c->r[3]=c->r[3]+0xFFFFD23Fu; // 800D2FA8
  return; // 800D2FAC
}

// fn_800D2FB0
void f_800D2FB0(Ctx* __restrict c) {
  trace_call(0x800D2FB0u);
  c->r[3]=0u+0x00000010u; // 800D2FB0
  return; // 800D2FB4
}

// fn_800D2FB8
void f_800D2FB8(Ctx* __restrict c) {
  trace_call(0x800D2FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2FB8
  c->r[0]=c->lr; // 800D2FBC
  c->r[3]=0u+0x00000010u; // 800D2FC0
  c->r[4]=c->r[13]+0xFFFFB3ECu; // 800D2FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2FC8
  c->r[5]=0u+0x00000000u; // 800D2FCC
  c->r[6]=0u+0x00001001u; // 800D2FD0
  c->lr=0x800D2FD8u; f_80244D20(c); // 800D2FD4
  cmps(c,0,(int32_t)c->r[3],0); // 800D2FD8
  if (crb(c,2)) { goto L_800D2FE4; } // 800D2FDC
  c->lr=0x800D2FE4u; f_800D2F10(c); // 800D2FE0
L_800D2FE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2FE4
  c->lr=c->r[0]; // 800D2FE8
  c->r[1]=c->r[1]+0x00000010u; // 800D2FEC
  return; // 800D2FF0
}

// fn_800D2FF4
void f_800D2FF4(Ctx* __restrict c) {
  trace_call(0x800D2FF4u);
  c->r[4]=0u+0x80420000u; // 800D2FF4
  c->r[0]=0u+0x00000000u; // 800D2FF8
  c->r[4]=c->r[4]+0xFFFF8ACCu; // 800D2FFC
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D3000
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3004
  return; // 800D3008
}

// fn_800D300C
void f_800D300C(Ctx* __restrict c) {
  trace_call(0x800D300Cu);
  f_8030D728(c); return; // 800D300C
}

// fn_800D3010
void f_800D3010(Ctx* __restrict c) {
  trace_call(0x800D3010u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D3010
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D3014
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D3018
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D301C
  return; // 800D3020
}

// fn_800D3024
void f_800D3024(Ctx* __restrict c) {
  trace_call(0x800D3024u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3024
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3028
  c->ctr=c->r[12]; // 800D302C
  if (true) { dispatch(c,c->ctr); return; } // 800D3030
}

// fn_800D3034
void f_800D3034(Ctx* __restrict c) {
  trace_call(0x800D3034u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3034
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3038
  c->ctr=c->r[12]; // 800D303C
  if (true) { dispatch(c,c->ctr); return; } // 800D3040
}

// fn_800D3044
void f_800D3044(Ctx* __restrict c) {
  trace_call(0x800D3044u);
  c->r[3]=0u+0x80410000u; // 800D3044
  c->r[3]=c->r[3]+0xFFFFD250u; // 800D3048
  return; // 800D304C
}

// fn_800D3050
void f_800D3050(Ctx* __restrict c) {
  trace_call(0x800D3050u);
  c->r[3]=0u+0x0000000Cu; // 800D3050
  return; // 800D3054
}

// fn_800D3058
void f_800D3058(Ctx* __restrict c) {
  trace_call(0x800D3058u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3058
  c->r[0]=c->lr; // 800D305C
  c->r[3]=0u+0x0000000Cu; // 800D3060
  c->r[4]=c->r[13]+0xFFFFB3F1u; // 800D3064
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3068
  c->r[5]=0u+0x00000000u; // 800D306C
  c->r[6]=0u+0x00001001u; // 800D3070
  c->lr=0x800D3078u; f_80244D20(c); // 800D3074
  cmps(c,0,(int32_t)c->r[3],0); // 800D3078
  if (crb(c,2)) { goto L_800D3084; } // 800D307C
  c->lr=0x800D3084u; f_800D2FF4(c); // 800D3080
L_800D3084:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3084
  c->lr=c->r[0]; // 800D3088
  c->r[1]=c->r[1]+0x00000010u; // 800D308C
  return; // 800D3090
}

// fn_800D3094
void f_800D3094(Ctx* __restrict c) {
  trace_call(0x800D3094u);
  c->r[4]=0u+0x80420000u; // 800D3094
  c->r[0]=0u+0x00000000u; // 800D3098
  c->r[4]=c->r[4]+0xFFFF8A98u; // 800D309C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D30A0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D30A4
  return; // 800D30A8
}

// fn_800D30AC
void f_800D30AC(Ctx* __restrict c) {
  trace_call(0x800D30ACu);
  f_8030D728(c); return; // 800D30AC
}

// fn_800D30B0
void f_800D30B0(Ctx* __restrict c) {
  trace_call(0x800D30B0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D30B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D30B4
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D30B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D30BC
  return; // 800D30C0
}

// fn_800D30C4
void f_800D30C4(Ctx* __restrict c) {
  trace_call(0x800D30C4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D30C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D30C8
  c->ctr=c->r[12]; // 800D30CC
  if (true) { dispatch(c,c->ctr); return; } // 800D30D0
}

// fn_800D30D4
void f_800D30D4(Ctx* __restrict c) {
  trace_call(0x800D30D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D30D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D30D8
  c->ctr=c->r[12]; // 800D30DC
  if (true) { dispatch(c,c->ctr); return; } // 800D30E0
}

// fn_800D30E4
void f_800D30E4(Ctx* __restrict c) {
  trace_call(0x800D30E4u);
  c->r[3]=0u+0x80410000u; // 800D30E4
  c->r[3]=c->r[3]+0xFFFFD25Eu; // 800D30E8
  return; // 800D30EC
}

// fn_800D30F0
void f_800D30F0(Ctx* __restrict c) {
  trace_call(0x800D30F0u);
  c->r[3]=0u+0x0000000Cu; // 800D30F0
  return; // 800D30F4
}

// fn_800D30F8
void f_800D30F8(Ctx* __restrict c) {
  trace_call(0x800D30F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D30F8
  c->r[0]=c->lr; // 800D30FC
  c->r[3]=0u+0x0000000Cu; // 800D3100
  c->r[4]=c->r[13]+0xFFFFB3F6u; // 800D3104
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3108
  c->r[5]=0u+0x00000000u; // 800D310C
  c->r[6]=0u+0x00001001u; // 800D3110
  c->lr=0x800D3118u; f_80244D20(c); // 800D3114
  cmps(c,0,(int32_t)c->r[3],0); // 800D3118
  if (crb(c,2)) { goto L_800D3124; } // 800D311C
  c->lr=0x800D3124u; f_800D3094(c); // 800D3120
L_800D3124:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3124
  c->lr=c->r[0]; // 800D3128
  c->r[1]=c->r[1]+0x00000010u; // 800D312C
  return; // 800D3130
}

// fn_800D3134
void f_800D3134(Ctx* __restrict c) {
  trace_call(0x800D3134u);
  c->r[5]=0u+0x80420000u; // 800D3134
  c->r[4]=0u+0x60780000u; // 800D3138
  c->r[5]=c->r[5]+0xFFFF8A64u; // 800D313C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D3140
  c->r[0]=c->r[4]+0xFFFFB26Eu; // 800D3144
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3148
  return; // 800D314C
}

// fn_800D3150
void f_800D3150(Ctx* __restrict c) {
  trace_call(0x800D3150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3150
  c->r[0]=c->lr; // 800D3154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3158
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D315C
  c->r[30]=c->r[3]|c->r[3]; // 800D3160
  c->r[31]=c->r[4]|c->r[4]; // 800D3164
  c->lr=0x800D316Cu; f_8030D728(c); // 800D3168
  c->r[3]=c->r[31]|c->r[31]; // 800D316C
  c->lr=0x800D3174u; f_8030BD1C(c); // 800D3170
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D3174
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D317C
  c->lr=c->r[0]; // 800D3180
  c->r[1]=c->r[1]+0x00000010u; // 800D3184
  return; // 800D3188
}

// fn_800D318C
void f_800D318C(Ctx* __restrict c) {
  trace_call(0x800D318Cu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D318C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D3190
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D3194
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D3198
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D319C
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D31A0
  return; // 800D31A4
}

// fn_800D31A8
void f_800D31A8(Ctx* __restrict c) {
  trace_call(0x800D31A8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D31A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D31AC
  c->ctr=c->r[12]; // 800D31B0
  if (true) { dispatch(c,c->ctr); return; } // 800D31B4
}

// fn_800D31B8
void f_800D31B8(Ctx* __restrict c) {
  trace_call(0x800D31B8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D31B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D31BC
  c->ctr=c->r[12]; // 800D31C0
  if (true) { dispatch(c,c->ctr); return; } // 800D31C4
}

// fn_800D31C8
void f_800D31C8(Ctx* __restrict c) {
  trace_call(0x800D31C8u);
  c->r[3]=0u+0x80410000u; // 800D31C8
  c->r[3]=c->r[3]+0xFFFFD273u; // 800D31CC
  return; // 800D31D0
}

// fn_800D31D4
void f_800D31D4(Ctx* __restrict c) {
  trace_call(0x800D31D4u);
  c->r[3]=0u+0x00000010u; // 800D31D4
  return; // 800D31D8
}

// fn_800D31DC
void f_800D31DC(Ctx* __restrict c) {
  trace_call(0x800D31DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D31DC
  c->r[0]=c->lr; // 800D31E0
  c->r[3]=0u+0x00000010u; // 800D31E4
  c->r[4]=c->r[13]+0xFFFFB3FBu; // 800D31E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D31EC
  c->r[5]=0u+0x00000000u; // 800D31F0
  c->r[6]=0u+0x00001001u; // 800D31F4
  c->lr=0x800D31FCu; f_80244D20(c); // 800D31F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D31FC
  if (crb(c,2)) { goto L_800D3208; } // 800D3200
  c->lr=0x800D3208u; f_800D3134(c); // 800D3204
L_800D3208:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3208
  c->lr=c->r[0]; // 800D320C
  c->r[1]=c->r[1]+0x00000010u; // 800D3210
  return; // 800D3214
}

// fn_800D3218
void f_800D3218(Ctx* __restrict c) {
  trace_call(0x800D3218u);
  c->r[6]=0u+0x80420000u; // 800D3218
  c->r[4]=0u+0x59720000u; // 800D321C
  c->r[6]=c->r[6]+0xFFFF8A30u; // 800D3220
  c->r[5]=0u+0x00000000u; // 800D3224
  c->r[0]=c->r[4]+0x00004EB8u; // 800D3228
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D322C
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D3230
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3234
  return; // 800D3238
}

// fn_800D323C
void f_800D323C(Ctx* __restrict c) {
  trace_call(0x800D323Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D323C
  c->r[0]=c->lr; // 800D3240
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3244
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3248
  c->r[30]=c->r[3]|c->r[3]; // 800D324C
  c->r[31]=c->r[4]|c->r[4]; // 800D3250
  c->lr=0x800D3258u; f_8030D728(c); // 800D3254
  c->r[3]=c->r[31]|c->r[31]; // 800D3258
  c->r[4]=0u+0x00000000u; // 800D325C
  c->lr=0x800D3264u; f_8030BE30(c); // 800D3260
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D3264
  c->r[3]=c->r[31]|c->r[31]; // 800D3268
  c->lr=0x800D3270u; f_8030BD1C(c); // 800D326C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D3270
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3274
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3278
  c->lr=c->r[0]; // 800D327C
  c->r[1]=c->r[1]+0x00000010u; // 800D3280
  return; // 800D3284
}

// fn_800D3288
void f_800D3288(Ctx* __restrict c) {
  trace_call(0x800D3288u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D3288
  c->r[5]=c->r[3]|c->r[3]; // 800D328C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D3290
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D3294
  c->r[3]=c->r[4]+0x0000000Cu; // 800D3298
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D329C
  c->r[4]=c->r[5]+0x0000000Cu; // 800D32A0
  f_8003AB48(c); return; // 800D32A4
}

// fn_800D32A8
void f_800D32A8(Ctx* __restrict c) {
  trace_call(0x800D32A8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D32A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D32AC
  c->ctr=c->r[12]; // 800D32B0
  if (true) { dispatch(c,c->ctr); return; } // 800D32B4
}

// fn_800D32B8
void f_800D32B8(Ctx* __restrict c) {
  trace_call(0x800D32B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D32B8
  c->r[0]=c->lr; // 800D32BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D32C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D32C4
  c->r[29]=c->r[3]|c->r[3]; // 800D32C8
  c->r[30]=c->r[4]|c->r[4]; // 800D32CC
  c->r[31]=c->r[5]|c->r[5]; // 800D32D0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D32D4
  cmps(c,0,(int32_t)c->r[0],7); // 800D32D8
  if (!crb(c,0)) { goto L_800D32EC; } // 800D32DC
  c->r[4]=c->r[31]|c->r[31]; // 800D32E0
  c->r[3]=c->r[3]+0x0000000Cu; // 800D32E4
  c->lr=0x800D32ECu; f_8003A994(c); // 800D32E8
L_800D32EC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D32EC
  c->r[3]=c->r[29]|c->r[29]; // 800D32F0
  c->r[4]=c->r[30]|c->r[30]; // 800D32F4
  c->r[5]=c->r[31]|c->r[31]; // 800D32F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D32FC
  c->ctr=c->r[12]; // 800D3300
  if (true) { c->lr=0x800D3308u; dispatch(c,c->ctr); } // 800D3304
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3308
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D330C
  c->lr=c->r[0]; // 800D3310
  c->r[1]=c->r[1]+0x00000020u; // 800D3314
  return; // 800D3318
}

// fn_800D331C
void f_800D331C(Ctx* __restrict c) {
  trace_call(0x800D331Cu);
  c->r[3]=0u+0x80410000u; // 800D331C
  c->r[3]=c->r[3]+0xFFFFD288u; // 800D3320
  return; // 800D3324
}

// fn_800D3328
void f_800D3328(Ctx* __restrict c) {
  trace_call(0x800D3328u);
  c->r[3]=0u+0x00000018u; // 800D3328
  return; // 800D332C
}

// fn_800D3330
void f_800D3330(Ctx* __restrict c) {
  trace_call(0x800D3330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3330
  c->r[0]=c->lr; // 800D3334
  c->r[3]=0u+0x00000018u; // 800D3338
  c->r[4]=c->r[13]+0xFFFFB400u; // 800D333C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3340
  c->r[5]=0u+0x00000000u; // 800D3344
  c->r[6]=0u+0x00001001u; // 800D3348
  c->lr=0x800D3350u; f_80244D20(c); // 800D334C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3350
  if (crb(c,2)) { goto L_800D335C; } // 800D3354
  c->lr=0x800D335Cu; f_800D3218(c); // 800D3358
L_800D335C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D335C
  c->lr=c->r[0]; // 800D3360
  c->r[1]=c->r[1]+0x00000010u; // 800D3364
  return; // 800D3368
}

// fn_800D336C
void f_800D336C(Ctx* __restrict c) {
  trace_call(0x800D336Cu);
  c->r[5]=0u+0x80420000u; // 800D336C
  c->r[4]=0u+0xD65C0000u; // 800D3370
  c->r[5]=c->r[5]+0xFFFF89FCu; // 800D3374
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D3378
  c->r[0]=c->r[4]+0x00004646u; // 800D337C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3380
  return; // 800D3384
}

// fn_800D3388
void f_800D3388(Ctx* __restrict c) {
  trace_call(0x800D3388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3388
  c->r[0]=c->lr; // 800D338C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3390
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3394
  c->r[30]=c->r[3]|c->r[3]; // 800D3398
  c->r[31]=c->r[4]|c->r[4]; // 800D339C
  c->lr=0x800D33A4u; f_8030D728(c); // 800D33A0
  c->r[3]=c->r[31]|c->r[31]; // 800D33A4
  c->lr=0x800D33ACu; f_8030BD1C(c); // 800D33A8
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D33AC
  c->r[3]=c->r[31]|c->r[31]; // 800D33B0
  c->lr=0x800D33B8u; f_8030BD1C(c); // 800D33B4
  W8(c->r[30]+0x0000000Du,c->r[3]); // 800D33B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D33BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D33C0
  c->lr=c->r[0]; // 800D33C4
  c->r[1]=c->r[1]+0x00000010u; // 800D33C8
  return; // 800D33CC
}

// fn_800D33D0
void f_800D33D0(Ctx* __restrict c) {
  trace_call(0x800D33D0u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D33D0
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D33D4
  c->r[5]=R8(c->r[3]+0x0000000Cu); // 800D33D8
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800D33DC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D33E0
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D33E4
  W8(c->r[4]+0x0000000Cu,c->r[5]); // 800D33E8
  W8(c->r[4]+0x0000000Du,c->r[0]); // 800D33EC
  return; // 800D33F0
}

// fn_800D33F4
void f_800D33F4(Ctx* __restrict c) {
  trace_call(0x800D33F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D33F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D33F8
  c->ctr=c->r[12]; // 800D33FC
  if (true) { dispatch(c,c->ctr); return; } // 800D3400
}

// fn_800D3404
void f_800D3404(Ctx* __restrict c) {
  trace_call(0x800D3404u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3404
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3408
  c->ctr=c->r[12]; // 800D340C
  if (true) { dispatch(c,c->ctr); return; } // 800D3410
}

// fn_800D3414
void f_800D3414(Ctx* __restrict c) {
  trace_call(0x800D3414u);
  c->r[3]=0u+0x80410000u; // 800D3414
  c->r[3]=c->r[3]+0xFFFFD299u; // 800D3418
  return; // 800D341C
}

// fn_800D3420
void f_800D3420(Ctx* __restrict c) {
  trace_call(0x800D3420u);
  c->r[3]=0u+0x00000010u; // 800D3420
  return; // 800D3424
}

// fn_800D3428
void f_800D3428(Ctx* __restrict c) {
  trace_call(0x800D3428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3428
  c->r[0]=c->lr; // 800D342C
  c->r[3]=0u+0x00000010u; // 800D3430
  c->r[4]=c->r[13]+0xFFFFB405u; // 800D3434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3438
  c->r[5]=0u+0x00000000u; // 800D343C
  c->r[6]=0u+0x00001001u; // 800D3440
  c->lr=0x800D3448u; f_80244D20(c); // 800D3444
  cmps(c,0,(int32_t)c->r[3],0); // 800D3448
  if (crb(c,2)) { goto L_800D3454; } // 800D344C
  c->lr=0x800D3454u; f_800D336C(c); // 800D3450
L_800D3454:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3454
  c->lr=c->r[0]; // 800D3458
  c->r[1]=c->r[1]+0x00000010u; // 800D345C
  return; // 800D3460
}

// fn_800D3464
void f_800D3464(Ctx* __restrict c) {
  trace_call(0x800D3464u);
  c->r[5]=0u+0x80420000u; // 800D3464
  c->r[4]=0u+0x7CF50000u; // 800D3468
  c->r[5]=c->r[5]+0xFFFF89C8u; // 800D346C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D3470
  c->r[0]=c->r[4]+0x00004C05u; // 800D3474
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3478
  return; // 800D347C
}

// fn_800D3480
void f_800D3480(Ctx* __restrict c) {
  trace_call(0x800D3480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3480
  c->r[0]=c->lr; // 800D3484
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3488
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D348C
  c->r[30]=c->r[3]|c->r[3]; // 800D3490
  c->r[31]=c->r[4]|c->r[4]; // 800D3494
  c->lr=0x800D349Cu; f_8030D728(c); // 800D3498
  c->r[3]=c->r[31]|c->r[31]; // 800D349C
  c->lr=0x800D34A4u; f_8030BD1C(c); // 800D34A0
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D34A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D34A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D34AC
  c->lr=c->r[0]; // 800D34B0
  c->r[1]=c->r[1]+0x00000010u; // 800D34B4
  return; // 800D34B8
}

// fn_800D34BC
void f_800D34BC(Ctx* __restrict c) {
  trace_call(0x800D34BCu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D34BC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D34C0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D34C4
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D34C8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D34CC
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D34D0
  return; // 800D34D4
}

// fn_800D34D8
void f_800D34D8(Ctx* __restrict c) {
  trace_call(0x800D34D8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D34D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D34DC
  c->ctr=c->r[12]; // 800D34E0
  if (true) { dispatch(c,c->ctr); return; } // 800D34E4
}

// fn_800D34E8
void f_800D34E8(Ctx* __restrict c) {
  trace_call(0x800D34E8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D34E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D34EC
  c->ctr=c->r[12]; // 800D34F0
  if (true) { dispatch(c,c->ctr); return; } // 800D34F4
}

// fn_800D34F8
void f_800D34F8(Ctx* __restrict c) {
  trace_call(0x800D34F8u);
  c->r[3]=0u+0x80410000u; // 800D34F8
  c->r[3]=c->r[3]+0xFFFFD2A8u; // 800D34FC
  return; // 800D3500
}

// fn_800D3504
void f_800D3504(Ctx* __restrict c) {
  trace_call(0x800D3504u);
  c->r[3]=0u+0x00000010u; // 800D3504
  return; // 800D3508
}

// fn_800D350C
void f_800D350C(Ctx* __restrict c) {
  trace_call(0x800D350Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D350C
  c->r[0]=c->lr; // 800D3510
  c->r[3]=0u+0x00000010u; // 800D3514
  c->r[4]=c->r[13]+0xFFFFB40Au; // 800D3518
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D351C
  c->r[5]=0u+0x00000000u; // 800D3520
  c->r[6]=0u+0x00001001u; // 800D3524
  c->lr=0x800D352Cu; f_80244D20(c); // 800D3528
  cmps(c,0,(int32_t)c->r[3],0); // 800D352C
  if (crb(c,2)) { goto L_800D3538; } // 800D3530
  c->lr=0x800D3538u; f_800D3464(c); // 800D3534
L_800D3538:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3538
  c->lr=c->r[0]; // 800D353C
  c->r[1]=c->r[1]+0x00000010u; // 800D3540
  return; // 800D3544
}

// fn_800D3548
void f_800D3548(Ctx* __restrict c) {
  trace_call(0x800D3548u);
  c->r[5]=0u+0x80420000u; // 800D3548
  c->r[4]=0u+0xCBB70000u; // 800D354C
  c->r[5]=c->r[5]+0xFFFF8994u; // 800D3550
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D3554
  c->r[0]=c->r[4]+0xFFFFF591u; // 800D3558
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D355C
  return; // 800D3560
}

// fn_800D3564
void f_800D3564(Ctx* __restrict c) {
  trace_call(0x800D3564u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3564
  c->r[0]=c->lr; // 800D3568
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D356C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3570
  c->r[30]=c->r[3]|c->r[3]; // 800D3574
  c->r[31]=c->r[4]|c->r[4]; // 800D3578
  c->lr=0x800D3580u; f_8030D728(c); // 800D357C
  c->r[3]=c->r[31]|c->r[31]; // 800D3580
  c->lr=0x800D3588u; f_8030BD1C(c); // 800D3584
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D3588
  c->r[3]=c->r[31]|c->r[31]; // 800D358C
  c->lr=0x800D3594u; f_8030BD1C(c); // 800D3590
  W8(c->r[30]+0x00000010u,c->r[3]); // 800D3594
  c->r[3]=c->r[31]|c->r[31]; // 800D3598
  c->lr=0x800D35A0u; f_8030BD1C(c); // 800D359C
  W8(c->r[30]+0x00000011u,c->r[3]); // 800D35A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D35A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D35A8
  c->lr=c->r[0]; // 800D35AC
  c->r[1]=c->r[1]+0x00000010u; // 800D35B0
  return; // 800D35B4
}

// fn_800D35B8
void f_800D35B8(Ctx* __restrict c) {
  trace_call(0x800D35B8u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800D35B8
  c->r[7]=R32(c->r[3]+0x00000004u); // 800D35BC
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800D35C0
  c->r[5]=R8(c->r[3]+0x00000010u); // 800D35C4
  c->r[0]=R8(c->r[3]+0x00000011u); // 800D35C8
  W32(c->r[4]+0x00000000u,c->r[8]); // 800D35CC
  W32(c->r[4]+0x00000004u,c->r[7]); // 800D35D0
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800D35D4
  W8(c->r[4]+0x00000010u,c->r[5]); // 800D35D8
  W8(c->r[4]+0x00000011u,c->r[0]); // 800D35DC
  return; // 800D35E0
}

// fn_800D35E4
void f_800D35E4(Ctx* __restrict c) {
  trace_call(0x800D35E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D35E4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D35E8
  c->ctr=c->r[12]; // 800D35EC
  if (true) { dispatch(c,c->ctr); return; } // 800D35F0
}

// fn_800D35F4
void f_800D35F4(Ctx* __restrict c) {
  trace_call(0x800D35F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D35F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D35F8
  c->ctr=c->r[12]; // 800D35FC
  if (true) { dispatch(c,c->ctr); return; } // 800D3600
}

// fn_800D3604
void f_800D3604(Ctx* __restrict c) {
  trace_call(0x800D3604u);
  c->r[3]=0u+0x80410000u; // 800D3604
  c->r[3]=c->r[3]+0xFFFFD2B9u; // 800D3608
  return; // 800D360C
}

// fn_800D3610
void f_800D3610(Ctx* __restrict c) {
  trace_call(0x800D3610u);
  c->r[3]=0u+0x00000014u; // 800D3610
  return; // 800D3614
}

// fn_800D3618
void f_800D3618(Ctx* __restrict c) {
  trace_call(0x800D3618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3618
  c->r[0]=c->lr; // 800D361C
  c->r[3]=0u+0x00000014u; // 800D3620
  c->r[4]=c->r[13]+0xFFFFB40Fu; // 800D3624
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3628
  c->r[5]=0u+0x00000000u; // 800D362C
  c->r[6]=0u+0x00001001u; // 800D3630
  c->lr=0x800D3638u; f_80244D20(c); // 800D3634
  cmps(c,0,(int32_t)c->r[3],0); // 800D3638
  if (crb(c,2)) { goto L_800D3644; } // 800D363C
  c->lr=0x800D3644u; f_800D3548(c); // 800D3640
L_800D3644:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3644
  c->lr=c->r[0]; // 800D3648
  c->r[1]=c->r[1]+0x00000010u; // 800D364C
  return; // 800D3650
}

// fn_800D3654
void f_800D3654(Ctx* __restrict c) {
  trace_call(0x800D3654u);
  c->r[5]=0u+0x80420000u; // 800D3654
  c->r[4]=0u+0xD65C0000u; // 800D3658
  c->r[5]=c->r[5]+0xFFFF8960u; // 800D365C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D3660
  c->r[0]=c->r[4]+0x00004646u; // 800D3664
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3668
  return; // 800D366C
}

// fn_800D3670
void f_800D3670(Ctx* __restrict c) {
  trace_call(0x800D3670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3670
  c->r[0]=c->lr; // 800D3674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3678
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D367C
  c->r[30]=c->r[3]|c->r[3]; // 800D3680
  c->r[31]=c->r[4]|c->r[4]; // 800D3684
  c->lr=0x800D368Cu; f_8030D728(c); // 800D3688
  c->r[3]=c->r[31]|c->r[31]; // 800D368C
  c->lr=0x800D3694u; f_8030BD1C(c); // 800D3690
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D3694
  c->r[3]=c->r[31]|c->r[31]; // 800D3698
  c->lr=0x800D36A0u; f_8030BD1C(c); // 800D369C
  W8(c->r[30]+0x0000000Du,c->r[3]); // 800D36A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D36A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D36A8
  c->lr=c->r[0]; // 800D36AC
  c->r[1]=c->r[1]+0x00000010u; // 800D36B0
  return; // 800D36B4
}

// fn_800D36B8
void f_800D36B8(Ctx* __restrict c) {
  trace_call(0x800D36B8u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D36B8
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D36BC
  c->r[5]=R8(c->r[3]+0x0000000Cu); // 800D36C0
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800D36C4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D36C8
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D36CC
  W8(c->r[4]+0x0000000Cu,c->r[5]); // 800D36D0
  W8(c->r[4]+0x0000000Du,c->r[0]); // 800D36D4
  return; // 800D36D8
}

// fn_800D36DC
void f_800D36DC(Ctx* __restrict c) {
  trace_call(0x800D36DCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D36DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D36E0
  c->ctr=c->r[12]; // 800D36E4
  if (true) { dispatch(c,c->ctr); return; } // 800D36E8
}

// fn_800D36EC
void f_800D36EC(Ctx* __restrict c) {
  trace_call(0x800D36ECu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D36EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D36F0
  c->ctr=c->r[12]; // 800D36F4
  if (true) { dispatch(c,c->ctr); return; } // 800D36F8
}

// fn_800D36FC
void f_800D36FC(Ctx* __restrict c) {
  trace_call(0x800D36FCu);
  c->r[3]=0u+0x80410000u; // 800D36FC
  c->r[3]=c->r[3]+0xFFFFD2CDu; // 800D3700
  return; // 800D3704
}

// fn_800D3708
void f_800D3708(Ctx* __restrict c) {
  trace_call(0x800D3708u);
  c->r[3]=0u+0x00000010u; // 800D3708
  return; // 800D370C
}

// fn_800D3710
void f_800D3710(Ctx* __restrict c) {
  trace_call(0x800D3710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3710
  c->r[0]=c->lr; // 800D3714
  c->r[3]=0u+0x00000010u; // 800D3718
  c->r[4]=c->r[13]+0xFFFFB414u; // 800D371C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3720
  c->r[5]=0u+0x00000000u; // 800D3724
  c->r[6]=0u+0x00001001u; // 800D3728
  c->lr=0x800D3730u; f_80244D20(c); // 800D372C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3730
  if (crb(c,2)) { goto L_800D373C; } // 800D3734
  c->lr=0x800D373Cu; f_800D3654(c); // 800D3738
L_800D373C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D373C
  c->lr=c->r[0]; // 800D3740
  c->r[1]=c->r[1]+0x00000010u; // 800D3744
  return; // 800D3748
}

// fn_800D374C
void f_800D374C(Ctx* __restrict c) {
  trace_call(0x800D374Cu);
  c->r[4]=0u+0x80420000u; // 800D374C
  c->r[0]=0u+0x00000000u; // 800D3750
  c->r[4]=c->r[4]+0xFFFF892Cu; // 800D3754
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D3758
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D375C
  return; // 800D3760
}

// fn_800D3764
void f_800D3764(Ctx* __restrict c) {
  trace_call(0x800D3764u);
  f_8030D728(c); return; // 800D3764
}

// fn_800D3768
void f_800D3768(Ctx* __restrict c) {
  trace_call(0x800D3768u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D3768
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D376C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D3770
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D3774
  return; // 800D3778
}

// fn_800D377C
void f_800D377C(Ctx* __restrict c) {
  trace_call(0x800D377Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D377C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3780
  c->ctr=c->r[12]; // 800D3784
  if (true) { dispatch(c,c->ctr); return; } // 800D3788
}

// fn_800D378C
void f_800D378C(Ctx* __restrict c) {
  trace_call(0x800D378Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D378C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3790
  c->ctr=c->r[12]; // 800D3794
  if (true) { dispatch(c,c->ctr); return; } // 800D3798
}

// fn_800D379C
void f_800D379C(Ctx* __restrict c) {
  trace_call(0x800D379Cu);
  c->r[3]=0u+0x80410000u; // 800D379C
  c->r[3]=c->r[3]+0xFFFFD2DDu; // 800D37A0
  return; // 800D37A4
}

// fn_800D37A8
void f_800D37A8(Ctx* __restrict c) {
  trace_call(0x800D37A8u);
  c->r[3]=0u+0x0000000Cu; // 800D37A8
  return; // 800D37AC
}

// fn_800D37B0
void f_800D37B0(Ctx* __restrict c) {
  trace_call(0x800D37B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D37B0
  c->r[0]=c->lr; // 800D37B4
  c->r[3]=0u+0x0000000Cu; // 800D37B8
  c->r[4]=c->r[13]+0xFFFFB419u; // 800D37BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D37C0
  c->r[5]=0u+0x00000000u; // 800D37C4
  c->r[6]=0u+0x00001001u; // 800D37C8
  c->lr=0x800D37D0u; f_80244D20(c); // 800D37CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D37D0
  if (crb(c,2)) { goto L_800D37DC; } // 800D37D4
  c->lr=0x800D37DCu; f_800D374C(c); // 800D37D8
L_800D37DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D37DC
  c->lr=c->r[0]; // 800D37E0
  c->r[1]=c->r[1]+0x00000010u; // 800D37E4
  return; // 800D37E8
}

// fn_800D37EC
void f_800D37EC(Ctx* __restrict c) {
  trace_call(0x800D37ECu);
  c->r[5]=0u+0x80420000u; // 800D37EC
  c->r[4]=0u+0x7CF50000u; // 800D37F0
  c->r[5]=c->r[5]+0xFFFF88F8u; // 800D37F4
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D37F8
  c->r[0]=c->r[4]+0x00004C05u; // 800D37FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3800
  return; // 800D3804
}

// fn_800D3808
void f_800D3808(Ctx* __restrict c) {
  trace_call(0x800D3808u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3808
  c->r[0]=c->lr; // 800D380C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3810
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3814
  c->r[30]=c->r[3]|c->r[3]; // 800D3818
  c->r[31]=c->r[4]|c->r[4]; // 800D381C
  c->lr=0x800D3824u; f_8030D728(c); // 800D3820
  c->r[3]=c->r[31]|c->r[31]; // 800D3824
  c->lr=0x800D382Cu; f_8030BD1C(c); // 800D3828
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D382C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3830
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3834
  c->lr=c->r[0]; // 800D3838
  c->r[1]=c->r[1]+0x00000010u; // 800D383C
  return; // 800D3840
}

// fn_800D3844
void f_800D3844(Ctx* __restrict c) {
  trace_call(0x800D3844u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D3844
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D3848
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D384C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D3850
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D3854
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D3858
  return; // 800D385C
}

// fn_800D3860
void f_800D3860(Ctx* __restrict c) {
  trace_call(0x800D3860u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3860
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3864
  c->ctr=c->r[12]; // 800D3868
  if (true) { dispatch(c,c->ctr); return; } // 800D386C
}

// fn_800D3870
void f_800D3870(Ctx* __restrict c) {
  trace_call(0x800D3870u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3870
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3874
  c->ctr=c->r[12]; // 800D3878
  if (true) { dispatch(c,c->ctr); return; } // 800D387C
}

// fn_800D3880
void f_800D3880(Ctx* __restrict c) {
  trace_call(0x800D3880u);
  c->r[3]=0u+0x80410000u; // 800D3880
  c->r[3]=c->r[3]+0xFFFFD2F4u; // 800D3884
  return; // 800D3888
}

// fn_800D388C
void f_800D388C(Ctx* __restrict c) {
  trace_call(0x800D388Cu);
  c->r[3]=0u+0x00000010u; // 800D388C
  return; // 800D3890
}

// fn_800D3894
void f_800D3894(Ctx* __restrict c) {
  trace_call(0x800D3894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3894
  c->r[0]=c->lr; // 800D3898
  c->r[3]=0u+0x00000010u; // 800D389C
  c->r[4]=c->r[13]+0xFFFFB41Eu; // 800D38A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D38A4
  c->r[5]=0u+0x00000000u; // 800D38A8
  c->r[6]=0u+0x00001001u; // 800D38AC
  c->lr=0x800D38B4u; f_80244D20(c); // 800D38B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D38B4
  if (crb(c,2)) { goto L_800D38C0; } // 800D38B8
  c->lr=0x800D38C0u; f_800D37EC(c); // 800D38BC
L_800D38C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D38C0
  c->lr=c->r[0]; // 800D38C4
  c->r[1]=c->r[1]+0x00000010u; // 800D38C8
  return; // 800D38CC
}

// fn_800D38D0
void f_800D38D0(Ctx* __restrict c) {
  trace_call(0x800D38D0u);
  c->r[4]=0u+0x80420000u; // 800D38D0
  c->r[0]=0u+0x00000000u; // 800D38D4
  c->r[4]=c->r[4]+0xFFFF88C4u; // 800D38D8
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D38DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D38E0
  return; // 800D38E4
}

// fn_800D38E8
void f_800D38E8(Ctx* __restrict c) {
  trace_call(0x800D38E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D38E8
  c->r[0]=c->lr; // 800D38EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D38F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D38F4
  c->r[30]=c->r[3]|c->r[3]; // 800D38F8
  c->r[31]=c->r[4]|c->r[4]; // 800D38FC
  c->lr=0x800D3904u; f_8030D728(c); // 800D3900
  c->r[3]=c->r[31]|c->r[31]; // 800D3904
  c->lr=0x800D390Cu; f_8030BD1C(c); // 800D3908
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D390C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3910
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3914
  c->lr=c->r[0]; // 800D3918
  c->r[1]=c->r[1]+0x00000010u; // 800D391C
  return; // 800D3920
}

// fn_800D3924
void f_800D3924(Ctx* __restrict c) {
  trace_call(0x800D3924u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D3924
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D3928
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D392C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D3930
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D3934
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D3938
  return; // 800D393C
}

// fn_800D3940
void f_800D3940(Ctx* __restrict c) {
  trace_call(0x800D3940u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3940
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3944
  c->ctr=c->r[12]; // 800D3948
  if (true) { dispatch(c,c->ctr); return; } // 800D394C
}

// fn_800D3950
void f_800D3950(Ctx* __restrict c) {
  trace_call(0x800D3950u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3950
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3954
  c->ctr=c->r[12]; // 800D3958
  if (true) { dispatch(c,c->ctr); return; } // 800D395C
}

// fn_800D3960
void f_800D3960(Ctx* __restrict c) {
  trace_call(0x800D3960u);
  c->r[3]=0u+0x80410000u; // 800D3960
  c->r[3]=c->r[3]+0xFFFFD304u; // 800D3964
  return; // 800D3968
}

// fn_800D396C
void f_800D396C(Ctx* __restrict c) {
  trace_call(0x800D396Cu);
  c->r[3]=0u+0x00000010u; // 800D396C
  return; // 800D3970
}

// fn_800D3974
void f_800D3974(Ctx* __restrict c) {
  trace_call(0x800D3974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3974
  c->r[0]=c->lr; // 800D3978
  c->r[3]=0u+0x00000010u; // 800D397C
  c->r[4]=c->r[13]+0xFFFFB423u; // 800D3980
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3984
  c->r[5]=0u+0x00000000u; // 800D3988
  c->r[6]=0u+0x00001001u; // 800D398C
  c->lr=0x800D3994u; f_80244D20(c); // 800D3990
  cmps(c,0,(int32_t)c->r[3],0); // 800D3994
  if (crb(c,2)) { goto L_800D39A0; } // 800D3998
  c->lr=0x800D39A0u; f_800D38D0(c); // 800D399C
L_800D39A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D39A0
  c->lr=c->r[0]; // 800D39A4
  c->r[1]=c->r[1]+0x00000010u; // 800D39A8
  return; // 800D39AC
}

// fn_800D39B0
void f_800D39B0(Ctx* __restrict c) {
  trace_call(0x800D39B0u);
  c->r[6]=0u+0x80420000u; // 800D39B0
  c->r[4]=0u+0xE56B0000u; // 800D39B4
  c->r[6]=c->r[6]+0xFFFF8890u; // 800D39B8
  c->r[5]=0u+0x00000000u; // 800D39BC
  c->r[0]=c->r[4]+0x00006F6Bu; // 800D39C0
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D39C4
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D39C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D39CC
  return; // 800D39D0
}

// fn_800D39D4
void f_800D39D4(Ctx* __restrict c) {
  trace_call(0x800D39D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D39D4
  c->r[0]=c->lr; // 800D39D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D39DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D39E0
  c->r[30]=c->r[3]|c->r[3]; // 800D39E4
  c->r[31]=c->r[4]|c->r[4]; // 800D39E8
  c->lr=0x800D39F0u; f_8030D728(c); // 800D39EC
  c->r[3]=c->r[31]|c->r[31]; // 800D39F0
  c->r[4]=0u+0x00000000u; // 800D39F4
  c->lr=0x800D39FCu; f_8030BE30(c); // 800D39F8
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D39FC
  c->r[3]=c->r[31]|c->r[31]; // 800D3A00
  c->lr=0x800D3A08u; f_8030BD1C(c); // 800D3A04
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D3A08
  c->r[3]=c->r[31]|c->r[31]; // 800D3A0C
  c->lr=0x800D3A14u; f_8030BD1C(c); // 800D3A10
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D3A14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3A1C
  c->lr=c->r[0]; // 800D3A20
  c->r[1]=c->r[1]+0x00000010u; // 800D3A24
  return; // 800D3A28
}

// fn_800D3A2C
void f_800D3A2C(Ctx* __restrict c) {
  trace_call(0x800D3A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A2C
  c->r[0]=c->lr; // 800D3A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3A38
  c->r[30]=c->r[3]|c->r[3]; // 800D3A3C
  c->r[31]=c->r[4]|c->r[4]; // 800D3A40
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D3A44
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D3A48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D3A4C
  c->r[3]=c->r[4]+0x0000000Cu; // 800D3A50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D3A54
  c->r[4]=c->r[30]+0x0000000Cu; // 800D3A58
  c->lr=0x800D3A60u; f_8003AB48(c); // 800D3A5C
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D3A60
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D3A64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3A68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3A6C
  c->lr=c->r[0]; // 800D3A70
  c->r[1]=c->r[1]+0x00000010u; // 800D3A74
  return; // 800D3A78
}

// fn_800D3A7C
void f_800D3A7C(Ctx* __restrict c) {
  trace_call(0x800D3A7Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3A7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3A80
  c->ctr=c->r[12]; // 800D3A84
  if (true) { dispatch(c,c->ctr); return; } // 800D3A88
}

// fn_800D3A8C
void f_800D3A8C(Ctx* __restrict c) {
  trace_call(0x800D3A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A8C
  c->r[0]=c->lr; // 800D3A90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3A94
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3A98
  c->r[29]=c->r[3]|c->r[3]; // 800D3A9C
  c->r[30]=c->r[4]|c->r[4]; // 800D3AA0
  c->r[31]=c->r[5]|c->r[5]; // 800D3AA4
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D3AA8
  cmps(c,0,(int32_t)c->r[0],7); // 800D3AAC
  if (!crb(c,0)) { goto L_800D3AC0; } // 800D3AB0
  c->r[4]=c->r[31]|c->r[31]; // 800D3AB4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D3AB8
  c->lr=0x800D3AC0u; f_8003A994(c); // 800D3ABC
L_800D3AC0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D3AC0
  c->r[3]=c->r[29]|c->r[29]; // 800D3AC4
  c->r[4]=c->r[30]|c->r[30]; // 800D3AC8
  c->r[5]=c->r[31]|c->r[31]; // 800D3ACC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3AD0
  c->ctr=c->r[12]; // 800D3AD4
  if (true) { c->lr=0x800D3ADCu; dispatch(c,c->ctr); } // 800D3AD8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3ADC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3AE0
  c->lr=c->r[0]; // 800D3AE4
  c->r[1]=c->r[1]+0x00000020u; // 800D3AE8
  return; // 800D3AEC
}

// fn_800D3AF0
void f_800D3AF0(Ctx* __restrict c) {
  trace_call(0x800D3AF0u);
  c->r[3]=0u+0x80410000u; // 800D3AF0
  c->r[3]=c->r[3]+0xFFFFD315u; // 800D3AF4
  return; // 800D3AF8
}

// fn_800D3AFC
void f_800D3AFC(Ctx* __restrict c) {
  trace_call(0x800D3AFCu);
  c->r[3]=0u+0x0000001Cu; // 800D3AFC
  return; // 800D3B00
}

// fn_800D3B04
void f_800D3B04(Ctx* __restrict c) {
  trace_call(0x800D3B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B04
  c->r[0]=c->lr; // 800D3B08
  c->r[3]=0u+0x0000001Cu; // 800D3B0C
  c->r[4]=c->r[13]+0xFFFFB428u; // 800D3B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3B14
  c->r[5]=0u+0x00000000u; // 800D3B18
  c->r[6]=0u+0x00001001u; // 800D3B1C
  c->lr=0x800D3B24u; f_80244D20(c); // 800D3B20
  cmps(c,0,(int32_t)c->r[3],0); // 800D3B24
  if (crb(c,2)) { goto L_800D3B30; } // 800D3B28
  c->lr=0x800D3B30u; f_800D39B0(c); // 800D3B2C
L_800D3B30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3B30
  c->lr=c->r[0]; // 800D3B34
  c->r[1]=c->r[1]+0x00000010u; // 800D3B38
  return; // 800D3B3C
}

// fn_800D3B40
void f_800D3B40(Ctx* __restrict c) {
  trace_call(0x800D3B40u);
  c->r[6]=0u+0x80420000u; // 800D3B40
  c->r[4]=0u+0x59720000u; // 800D3B44
  c->r[6]=c->r[6]+0xFFFF885Cu; // 800D3B48
  c->r[5]=0u+0x00000000u; // 800D3B4C
  c->r[0]=c->r[4]+0x00004EB8u; // 800D3B50
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D3B54
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D3B58
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3B5C
  return; // 800D3B60
}

// fn_800D3B64
void f_800D3B64(Ctx* __restrict c) {
  trace_call(0x800D3B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B64
  c->r[0]=c->lr; // 800D3B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3B6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3B70
  c->r[30]=c->r[3]|c->r[3]; // 800D3B74
  c->r[31]=c->r[4]|c->r[4]; // 800D3B78
  c->lr=0x800D3B80u; f_8030D728(c); // 800D3B7C
  c->r[3]=c->r[31]|c->r[31]; // 800D3B80
  c->r[4]=0u+0x00000000u; // 800D3B84
  c->lr=0x800D3B8Cu; f_8030BE30(c); // 800D3B88
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D3B8C
  c->r[3]=c->r[31]|c->r[31]; // 800D3B90
  c->lr=0x800D3B98u; f_8030BD1C(c); // 800D3B94
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D3B98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3B9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3BA0
  c->lr=c->r[0]; // 800D3BA4
  c->r[1]=c->r[1]+0x00000010u; // 800D3BA8
  return; // 800D3BAC
}

// fn_800D3BB0
void f_800D3BB0(Ctx* __restrict c) {
  trace_call(0x800D3BB0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D3BB0
  c->r[5]=c->r[3]|c->r[3]; // 800D3BB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D3BB8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D3BBC
  c->r[3]=c->r[4]+0x0000000Cu; // 800D3BC0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D3BC4
  c->r[4]=c->r[5]+0x0000000Cu; // 800D3BC8
  f_8003AB48(c); return; // 800D3BCC
}

// fn_800D3BD0
void f_800D3BD0(Ctx* __restrict c) {
  trace_call(0x800D3BD0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3BD0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3BD4
  c->ctr=c->r[12]; // 800D3BD8
  if (true) { dispatch(c,c->ctr); return; } // 800D3BDC
}

// fn_800D3BE0
void f_800D3BE0(Ctx* __restrict c) {
  trace_call(0x800D3BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3BE0
  c->r[0]=c->lr; // 800D3BE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3BE8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3BEC
  c->r[29]=c->r[3]|c->r[3]; // 800D3BF0
  c->r[30]=c->r[4]|c->r[4]; // 800D3BF4
  c->r[31]=c->r[5]|c->r[5]; // 800D3BF8
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D3BFC
  cmps(c,0,(int32_t)c->r[0],7); // 800D3C00
  if (!crb(c,0)) { goto L_800D3C14; } // 800D3C04
  c->r[4]=c->r[31]|c->r[31]; // 800D3C08
  c->r[3]=c->r[3]+0x0000000Cu; // 800D3C0C
  c->lr=0x800D3C14u; f_8003A994(c); // 800D3C10
L_800D3C14:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D3C14
  c->r[3]=c->r[29]|c->r[29]; // 800D3C18
  c->r[4]=c->r[30]|c->r[30]; // 800D3C1C
  c->r[5]=c->r[31]|c->r[31]; // 800D3C20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3C24
  c->ctr=c->r[12]; // 800D3C28
  if (true) { c->lr=0x800D3C30u; dispatch(c,c->ctr); } // 800D3C2C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3C30
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3C34
  c->lr=c->r[0]; // 800D3C38
  c->r[1]=c->r[1]+0x00000020u; // 800D3C3C
  return; // 800D3C40
}

// fn_800D3C44
void f_800D3C44(Ctx* __restrict c) {
  trace_call(0x800D3C44u);
  c->r[3]=0u+0x80410000u; // 800D3C44
  c->r[3]=c->r[3]+0xFFFFD328u; // 800D3C48
  return; // 800D3C4C
}

// fn_800D3C50
void f_800D3C50(Ctx* __restrict c) {
  trace_call(0x800D3C50u);
  c->r[3]=0u+0x00000018u; // 800D3C50
  return; // 800D3C54
}

// fn_800D3C58
void f_800D3C58(Ctx* __restrict c) {
  trace_call(0x800D3C58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3C58
  c->r[0]=c->lr; // 800D3C5C
  c->r[3]=0u+0x00000018u; // 800D3C60
  c->r[4]=c->r[13]+0xFFFFB42Du; // 800D3C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3C68
  c->r[5]=0u+0x00000000u; // 800D3C6C
  c->r[6]=0u+0x00001001u; // 800D3C70
  c->lr=0x800D3C78u; f_80244D20(c); // 800D3C74
  cmps(c,0,(int32_t)c->r[3],0); // 800D3C78
  if (crb(c,2)) { goto L_800D3C84; } // 800D3C7C
  c->lr=0x800D3C84u; f_800D3B40(c); // 800D3C80
L_800D3C84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3C84
  c->lr=c->r[0]; // 800D3C88
  c->r[1]=c->r[1]+0x00000010u; // 800D3C8C
  return; // 800D3C90
}

// fn_800D3C94
void f_800D3C94(Ctx* __restrict c) {
  trace_call(0x800D3C94u);
  c->r[5]=0u+0x80420000u; // 800D3C94
  c->r[4]=0u+0x45F10000u; // 800D3C98
  c->r[5]=c->r[5]+0xFFFF8828u; // 800D3C9C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D3CA0
  c->r[0]=c->r[4]+0xFFFFB0D3u; // 800D3CA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3CA8
  return; // 800D3CAC
}

// fn_800D3CB0
void f_800D3CB0(Ctx* __restrict c) {
  trace_call(0x800D3CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CB0
  c->r[0]=c->lr; // 800D3CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3CB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3CBC
  c->r[30]=c->r[3]|c->r[3]; // 800D3CC0
  c->r[31]=c->r[4]|c->r[4]; // 800D3CC4
  c->lr=0x800D3CCCu; f_8030D728(c); // 800D3CC8
  c->r[3]=c->r[31]|c->r[31]; // 800D3CCC
  c->r[4]=0u+0x00000000u; // 800D3CD0
  c->lr=0x800D3CD8u; f_8030BE30(c); // 800D3CD4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D3CD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3CDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3CE0
  c->lr=c->r[0]; // 800D3CE4
  c->r[1]=c->r[1]+0x00000010u; // 800D3CE8
  return; // 800D3CEC
}

// fn_800D3CF0
void f_800D3CF0(Ctx* __restrict c) {
  trace_call(0x800D3CF0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D3CF0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D3CF4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D3CF8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D3CFC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D3D00
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D3D04
  return; // 800D3D08
}

// fn_800D3D0C
void f_800D3D0C(Ctx* __restrict c) {
  trace_call(0x800D3D0Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3D0C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3D10
  c->ctr=c->r[12]; // 800D3D14
  if (true) { dispatch(c,c->ctr); return; } // 800D3D18
}

// fn_800D3D1C
void f_800D3D1C(Ctx* __restrict c) {
  trace_call(0x800D3D1Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3D1C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3D20
  c->ctr=c->r[12]; // 800D3D24
  if (true) { dispatch(c,c->ctr); return; } // 800D3D28
}

// fn_800D3D2C
void f_800D3D2C(Ctx* __restrict c) {
  trace_call(0x800D3D2Cu);
  c->r[3]=0u+0x80410000u; // 800D3D2C
  c->r[3]=c->r[3]+0xFFFFD33Au; // 800D3D30
  return; // 800D3D34
}

// fn_800D3D38
void f_800D3D38(Ctx* __restrict c) {
  trace_call(0x800D3D38u);
  c->r[3]=0u+0x00000010u; // 800D3D38
  return; // 800D3D3C
}

// fn_800D3D40
void f_800D3D40(Ctx* __restrict c) {
  trace_call(0x800D3D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3D40
  c->r[0]=c->lr; // 800D3D44
  c->r[3]=0u+0x00000010u; // 800D3D48
  c->r[4]=c->r[13]+0xFFFFB432u; // 800D3D4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3D50
  c->r[5]=0u+0x00000000u; // 800D3D54
  c->r[6]=0u+0x00001001u; // 800D3D58
  c->lr=0x800D3D60u; f_80244D20(c); // 800D3D5C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3D60
  if (crb(c,2)) { goto L_800D3D6C; } // 800D3D64
  c->lr=0x800D3D6Cu; f_800D3C94(c); // 800D3D68
L_800D3D6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3D6C
  c->lr=c->r[0]; // 800D3D70
  c->r[1]=c->r[1]+0x00000010u; // 800D3D74
  return; // 800D3D78
}

// fn_800D3D7C
void f_800D3D7C(Ctx* __restrict c) {
  trace_call(0x800D3D7Cu);
  c->r[6]=0u+0x80420000u; // 800D3D7C
  c->r[4]=0u+0xE56B0000u; // 800D3D80
  c->r[6]=c->r[6]+0xFFFF87F4u; // 800D3D84
  c->r[5]=0u+0x00000000u; // 800D3D88
  c->r[0]=c->r[4]+0x00006F6Bu; // 800D3D8C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D3D90
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D3D94
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3D98
  return; // 800D3D9C
}

// fn_800D3DA0
void f_800D3DA0(Ctx* __restrict c) {
  trace_call(0x800D3DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3DA0
  c->r[0]=c->lr; // 800D3DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3DA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3DAC
  c->r[30]=c->r[3]|c->r[3]; // 800D3DB0
  c->r[31]=c->r[4]|c->r[4]; // 800D3DB4
  c->lr=0x800D3DBCu; f_8030D728(c); // 800D3DB8
  c->r[3]=c->r[31]|c->r[31]; // 800D3DBC
  c->r[4]=0u+0x00000000u; // 800D3DC0
  c->lr=0x800D3DC8u; f_8030BE30(c); // 800D3DC4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D3DC8
  c->r[3]=c->r[31]|c->r[31]; // 800D3DCC
  c->lr=0x800D3DD4u; f_8030BD1C(c); // 800D3DD0
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D3DD4
  c->r[3]=c->r[31]|c->r[31]; // 800D3DD8
  c->lr=0x800D3DE0u; f_8030BD1C(c); // 800D3DDC
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D3DE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3DE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3DE8
  c->lr=c->r[0]; // 800D3DEC
  c->r[1]=c->r[1]+0x00000010u; // 800D3DF0
  return; // 800D3DF4
}

// fn_800D3DF8
void f_800D3DF8(Ctx* __restrict c) {
  trace_call(0x800D3DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3DF8
  c->r[0]=c->lr; // 800D3DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3E00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3E04
  c->r[30]=c->r[3]|c->r[3]; // 800D3E08
  c->r[31]=c->r[4]|c->r[4]; // 800D3E0C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D3E10
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D3E14
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D3E18
  c->r[3]=c->r[4]+0x0000000Cu; // 800D3E1C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D3E20
  c->r[4]=c->r[30]+0x0000000Cu; // 800D3E24
  c->lr=0x800D3E2Cu; f_8003AB48(c); // 800D3E28
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D3E2C
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D3E30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3E34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3E38
  c->lr=c->r[0]; // 800D3E3C
  c->r[1]=c->r[1]+0x00000010u; // 800D3E40
  return; // 800D3E44
}

// fn_800D3E48
void f_800D3E48(Ctx* __restrict c) {
  trace_call(0x800D3E48u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3E48
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3E4C
  c->ctr=c->r[12]; // 800D3E50
  if (true) { dispatch(c,c->ctr); return; } // 800D3E54
}

// fn_800D3E58
void f_800D3E58(Ctx* __restrict c) {
  trace_call(0x800D3E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E58
  c->r[0]=c->lr; // 800D3E5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3E60
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3E64
  c->r[29]=c->r[3]|c->r[3]; // 800D3E68
  c->r[30]=c->r[4]|c->r[4]; // 800D3E6C
  c->r[31]=c->r[5]|c->r[5]; // 800D3E70
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D3E74
  cmps(c,0,(int32_t)c->r[0],7); // 800D3E78
  if (!crb(c,0)) { goto L_800D3E8C; } // 800D3E7C
  c->r[4]=c->r[31]|c->r[31]; // 800D3E80
  c->r[3]=c->r[3]+0x0000000Cu; // 800D3E84
  c->lr=0x800D3E8Cu; f_8003A994(c); // 800D3E88
L_800D3E8C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D3E8C
  c->r[3]=c->r[29]|c->r[29]; // 800D3E90
  c->r[4]=c->r[30]|c->r[30]; // 800D3E94
  c->r[5]=c->r[31]|c->r[31]; // 800D3E98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3E9C
  c->ctr=c->r[12]; // 800D3EA0
  if (true) { c->lr=0x800D3EA8u; dispatch(c,c->ctr); } // 800D3EA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3EA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3EAC
  c->lr=c->r[0]; // 800D3EB0
  c->r[1]=c->r[1]+0x00000020u; // 800D3EB4
  return; // 800D3EB8
}

// fn_800D3EBC
void f_800D3EBC(Ctx* __restrict c) {
  trace_call(0x800D3EBCu);
  c->r[3]=0u+0x80410000u; // 800D3EBC
  c->r[3]=c->r[3]+0xFFFFD34Fu; // 800D3EC0
  return; // 800D3EC4
}

// fn_800D3EC8
void f_800D3EC8(Ctx* __restrict c) {
  trace_call(0x800D3EC8u);
  c->r[3]=0u+0x0000001Cu; // 800D3EC8
  return; // 800D3ECC
}

// fn_800D3ED0
void f_800D3ED0(Ctx* __restrict c) {
  trace_call(0x800D3ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3ED0
  c->r[0]=c->lr; // 800D3ED4
  c->r[3]=0u+0x0000001Cu; // 800D3ED8
  c->r[4]=c->r[13]+0xFFFFB437u; // 800D3EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3EE0
  c->r[5]=0u+0x00000000u; // 800D3EE4
  c->r[6]=0u+0x00001001u; // 800D3EE8
  c->lr=0x800D3EF0u; f_80244D20(c); // 800D3EEC
  cmps(c,0,(int32_t)c->r[3],0); // 800D3EF0
  if (crb(c,2)) { goto L_800D3EFC; } // 800D3EF4
  c->lr=0x800D3EFCu; f_800D3D7C(c); // 800D3EF8
L_800D3EFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3EFC
  c->lr=c->r[0]; // 800D3F00
  c->r[1]=c->r[1]+0x00000010u; // 800D3F04
  return; // 800D3F08
}

// fn_800D3F0C
void f_800D3F0C(Ctx* __restrict c) {
  trace_call(0x800D3F0Cu);
  c->r[5]=0u+0x80420000u; // 800D3F0C
  c->r[4]=0u+0xB7440000u; // 800D3F10
  c->r[5]=c->r[5]+0xFFFF87C0u; // 800D3F14
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D3F18
  c->r[0]=c->r[4]+0xFFFFB994u; // 800D3F1C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D3F20
  return; // 800D3F24
}

// fn_800D3F28
void f_800D3F28(Ctx* __restrict c) {
  trace_call(0x800D3F28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3F28
  c->r[0]=c->lr; // 800D3F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3F30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3F34
  c->r[30]=c->r[3]|c->r[3]; // 800D3F38
  c->r[31]=c->r[4]|c->r[4]; // 800D3F3C
  c->lr=0x800D3F44u; f_8030D728(c); // 800D3F40
  c->r[3]=c->r[31]|c->r[31]; // 800D3F44
  c->lr=0x800D3F4Cu; f_8030BD1C(c); // 800D3F48
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D3F4C
  c->r[3]=c->r[31]|c->r[31]; // 800D3F50
  c->lr=0x800D3F58u; f_8030BD1C(c); // 800D3F54
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D3F58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3F5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3F60
  c->lr=c->r[0]; // 800D3F64
  c->r[1]=c->r[1]+0x00000010u; // 800D3F68
  return; // 800D3F6C
}

// fn_800D3F70
void f_800D3F70(Ctx* __restrict c) {
  trace_call(0x800D3F70u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D3F70
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D3F74
  c->r[5]=R8(c->r[3]+0x0000000Cu); // 800D3F78
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D3F7C
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D3F80
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D3F84
  W8(c->r[4]+0x0000000Cu,c->r[5]); // 800D3F88
  W32(c->r[4]+0x00000010u,c->r[0]); // 800D3F8C
  return; // 800D3F90
}

// fn_800D3F94
void f_800D3F94(Ctx* __restrict c) {
  trace_call(0x800D3F94u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3F94
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D3F98
  c->ctr=c->r[12]; // 800D3F9C
  if (true) { dispatch(c,c->ctr); return; } // 800D3FA0
}

// fn_800D3FA4
void f_800D3FA4(Ctx* __restrict c) {
  trace_call(0x800D3FA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D3FA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D3FA8
  c->ctr=c->r[12]; // 800D3FAC
  if (true) { dispatch(c,c->ctr); return; } // 800D3FB0
}

// fn_800D3FB4
void f_800D3FB4(Ctx* __restrict c) {
  trace_call(0x800D3FB4u);
  c->r[3]=0u+0x80410000u; // 800D3FB4
  c->r[3]=c->r[3]+0xFFFFD361u; // 800D3FB8
  return; // 800D3FBC
}

// fn_800D3FC0
void f_800D3FC0(Ctx* __restrict c) {
  trace_call(0x800D3FC0u);
  c->r[3]=0u+0x00000014u; // 800D3FC0
  return; // 800D3FC4
}

// fn_800D3FC8
void f_800D3FC8(Ctx* __restrict c) {
  trace_call(0x800D3FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3FC8
  c->r[0]=c->lr; // 800D3FCC
  c->r[3]=0u+0x00000014u; // 800D3FD0
  c->r[4]=c->r[13]+0xFFFFB43Cu; // 800D3FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3FD8
  c->r[5]=0u+0x00000000u; // 800D3FDC
  c->r[6]=0u+0x00001001u; // 800D3FE0
  c->lr=0x800D3FE8u; f_80244D20(c); // 800D3FE4
  cmps(c,0,(int32_t)c->r[3],0); // 800D3FE8
  if (crb(c,2)) { goto L_800D3FF4; } // 800D3FEC
  c->lr=0x800D3FF4u; f_800D3F0C(c); // 800D3FF0
L_800D3FF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3FF4
  c->lr=c->r[0]; // 800D3FF8
  c->r[1]=c->r[1]+0x00000010u; // 800D3FFC
  return; // 800D4000
}

// fn_800D4004
void f_800D4004(Ctx* __restrict c) {
  trace_call(0x800D4004u);
  c->r[6]=0u+0x80420000u; // 800D4004
  c->r[4]=0u+0x59720000u; // 800D4008
  c->r[6]=c->r[6]+0xFFFF878Cu; // 800D400C
  c->r[5]=0u+0x00000000u; // 800D4010
  c->r[0]=c->r[4]+0x00004EB8u; // 800D4014
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D4018
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D401C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4020
  return; // 800D4024
}

// fn_800D4028
void f_800D4028(Ctx* __restrict c) {
  trace_call(0x800D4028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4028
  c->r[0]=c->lr; // 800D402C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4030
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4034
  c->r[30]=c->r[3]|c->r[3]; // 800D4038
  c->r[31]=c->r[4]|c->r[4]; // 800D403C
  c->lr=0x800D4044u; f_8030D728(c); // 800D4040
  c->r[3]=c->r[31]|c->r[31]; // 800D4044
  c->r[4]=0u+0x00000000u; // 800D4048
  c->lr=0x800D4050u; f_8030BE30(c); // 800D404C
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4050
  c->r[3]=c->r[31]|c->r[31]; // 800D4054
  c->lr=0x800D405Cu; f_8030BD1C(c); // 800D4058
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D405C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4060
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4064
  c->lr=c->r[0]; // 800D4068
  c->r[1]=c->r[1]+0x00000010u; // 800D406C
  return; // 800D4070
}

// fn_800D4074
void f_800D4074(Ctx* __restrict c) {
  trace_call(0x800D4074u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4074
  c->r[5]=c->r[3]|c->r[3]; // 800D4078
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D407C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4080
  c->r[3]=c->r[4]+0x0000000Cu; // 800D4084
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D4088
  c->r[4]=c->r[5]+0x0000000Cu; // 800D408C
  f_8003AB48(c); return; // 800D4090
}

// fn_800D4094
void f_800D4094(Ctx* __restrict c) {
  trace_call(0x800D4094u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4094
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4098
  c->ctr=c->r[12]; // 800D409C
  if (true) { dispatch(c,c->ctr); return; } // 800D40A0
}

// fn_800D40A4
void f_800D40A4(Ctx* __restrict c) {
  trace_call(0x800D40A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D40A4
  c->r[0]=c->lr; // 800D40A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D40AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D40B0
  c->r[29]=c->r[3]|c->r[3]; // 800D40B4
  c->r[30]=c->r[4]|c->r[4]; // 800D40B8
  c->r[31]=c->r[5]|c->r[5]; // 800D40BC
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D40C0
  cmps(c,0,(int32_t)c->r[0],7); // 800D40C4
  if (!crb(c,0)) { goto L_800D40D8; } // 800D40C8
  c->r[4]=c->r[31]|c->r[31]; // 800D40CC
  c->r[3]=c->r[3]+0x0000000Cu; // 800D40D0
  c->lr=0x800D40D8u; f_8003A994(c); // 800D40D4
L_800D40D8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D40D8
  c->r[3]=c->r[29]|c->r[29]; // 800D40DC
  c->r[4]=c->r[30]|c->r[30]; // 800D40E0
  c->r[5]=c->r[31]|c->r[31]; // 800D40E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D40E8
  c->ctr=c->r[12]; // 800D40EC
  if (true) { c->lr=0x800D40F4u; dispatch(c,c->ctr); } // 800D40F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D40F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D40F8
  c->lr=c->r[0]; // 800D40FC
  c->r[1]=c->r[1]+0x00000020u; // 800D4100
  return; // 800D4104
}

// fn_800D4108
void f_800D4108(Ctx* __restrict c) {
  trace_call(0x800D4108u);
  c->r[3]=0u+0x80410000u; // 800D4108
  c->r[3]=c->r[3]+0xFFFFD371u; // 800D410C
  return; // 800D4110
}

// fn_800D4114
void f_800D4114(Ctx* __restrict c) {
  trace_call(0x800D4114u);
  c->r[3]=0u+0x00000018u; // 800D4114
  return; // 800D4118
}

// fn_800D411C
void f_800D411C(Ctx* __restrict c) {
  trace_call(0x800D411Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D411C
  c->r[0]=c->lr; // 800D4120
  c->r[3]=0u+0x00000018u; // 800D4124
  c->r[4]=c->r[13]+0xFFFFB441u; // 800D4128
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D412C
  c->r[5]=0u+0x00000000u; // 800D4130
  c->r[6]=0u+0x00001001u; // 800D4134
  c->lr=0x800D413Cu; f_80244D20(c); // 800D4138
  cmps(c,0,(int32_t)c->r[3],0); // 800D413C
  if (crb(c,2)) { goto L_800D4148; } // 800D4140
  c->lr=0x800D4148u; f_800D4004(c); // 800D4144
L_800D4148:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4148
  c->lr=c->r[0]; // 800D414C
  c->r[1]=c->r[1]+0x00000010u; // 800D4150
  return; // 800D4154
}

// fn_800D4158
void f_800D4158(Ctx* __restrict c) {
  trace_call(0x800D4158u);
  c->r[4]=0u+0x80420000u; // 800D4158
  c->r[0]=0u+0x00000000u; // 800D415C
  c->r[4]=c->r[4]+0xFFFF8758u; // 800D4160
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4164
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4168
  return; // 800D416C
}

// fn_800D4170
void f_800D4170(Ctx* __restrict c) {
  trace_call(0x800D4170u);
  f_8030D728(c); return; // 800D4170
}

// fn_800D4174
void f_800D4174(Ctx* __restrict c) {
  trace_call(0x800D4174u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D4174
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4178
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D417C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D4180
  return; // 800D4184
}

// fn_800D4188
void f_800D4188(Ctx* __restrict c) {
  trace_call(0x800D4188u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4188
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D418C
  c->ctr=c->r[12]; // 800D4190
  if (true) { dispatch(c,c->ctr); return; } // 800D4194
}

// fn_800D4198
void f_800D4198(Ctx* __restrict c) {
  trace_call(0x800D4198u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4198
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D419C
  c->ctr=c->r[12]; // 800D41A0
  if (true) { dispatch(c,c->ctr); return; } // 800D41A4
}

// fn_800D41A8
void f_800D41A8(Ctx* __restrict c) {
  trace_call(0x800D41A8u);
  c->r[3]=0u+0x80410000u; // 800D41A8
  c->r[3]=c->r[3]+0xFFFFD389u; // 800D41AC
  return; // 800D41B0
}

// fn_800D41B4
void f_800D41B4(Ctx* __restrict c) {
  trace_call(0x800D41B4u);
  c->r[3]=0u+0x0000000Cu; // 800D41B4
  return; // 800D41B8
}

// fn_800D41BC
void f_800D41BC(Ctx* __restrict c) {
  trace_call(0x800D41BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D41BC
  c->r[0]=c->lr; // 800D41C0
  c->r[3]=0u+0x0000000Cu; // 800D41C4
  c->r[4]=c->r[13]+0xFFFFB446u; // 800D41C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D41CC
  c->r[5]=0u+0x00000000u; // 800D41D0
  c->r[6]=0u+0x00001001u; // 800D41D4
  c->lr=0x800D41DCu; f_80244D20(c); // 800D41D8
  cmps(c,0,(int32_t)c->r[3],0); // 800D41DC
  if (crb(c,2)) { goto L_800D41E8; } // 800D41E0
  c->lr=0x800D41E8u; f_800D4158(c); // 800D41E4
L_800D41E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D41E8
  c->lr=c->r[0]; // 800D41EC
  c->r[1]=c->r[1]+0x00000010u; // 800D41F0
  return; // 800D41F4
}

// fn_800D41F8
void f_800D41F8(Ctx* __restrict c) {
  trace_call(0x800D41F8u);
  c->r[6]=0u+0x80420000u; // 800D41F8
  c->r[4]=0u+0x59720000u; // 800D41FC
  c->r[6]=c->r[6]+0xFFFF8724u; // 800D4200
  c->r[5]=0u+0x00000000u; // 800D4204
  c->r[0]=c->r[4]+0x00004EB8u; // 800D4208
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D420C
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D4210
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4214
  return; // 800D4218
}

// fn_800D421C
void f_800D421C(Ctx* __restrict c) {
  trace_call(0x800D421Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D421C
  c->r[0]=c->lr; // 800D4220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4224
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4228
  c->r[30]=c->r[3]|c->r[3]; // 800D422C
  c->r[31]=c->r[4]|c->r[4]; // 800D4230
  c->lr=0x800D4238u; f_8030D728(c); // 800D4234
  c->r[3]=c->r[31]|c->r[31]; // 800D4238
  c->r[4]=0u+0x00000000u; // 800D423C
  c->lr=0x800D4244u; f_8030BE30(c); // 800D4240
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4244
  c->r[3]=c->r[31]|c->r[31]; // 800D4248
  c->lr=0x800D4250u; f_8030BD1C(c); // 800D424C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D4250
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4254
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4258
  c->lr=c->r[0]; // 800D425C
  c->r[1]=c->r[1]+0x00000010u; // 800D4260
  return; // 800D4264
}

// fn_800D4268
void f_800D4268(Ctx* __restrict c) {
  trace_call(0x800D4268u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4268
  c->r[5]=c->r[3]|c->r[3]; // 800D426C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D4270
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4274
  c->r[3]=c->r[4]+0x0000000Cu; // 800D4278
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D427C
  c->r[4]=c->r[5]+0x0000000Cu; // 800D4280
  f_8003AB48(c); return; // 800D4284
}

// fn_800D4288
void f_800D4288(Ctx* __restrict c) {
  trace_call(0x800D4288u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4288
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D428C
  c->ctr=c->r[12]; // 800D4290
  if (true) { dispatch(c,c->ctr); return; } // 800D4294
}

// fn_800D4298
void f_800D4298(Ctx* __restrict c) {
  trace_call(0x800D4298u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4298
  c->r[0]=c->lr; // 800D429C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D42A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D42A4
  c->r[29]=c->r[3]|c->r[3]; // 800D42A8
  c->r[30]=c->r[4]|c->r[4]; // 800D42AC
  c->r[31]=c->r[5]|c->r[5]; // 800D42B0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D42B4
  cmps(c,0,(int32_t)c->r[0],7); // 800D42B8
  if (!crb(c,0)) { goto L_800D42CC; } // 800D42BC
  c->r[4]=c->r[31]|c->r[31]; // 800D42C0
  c->r[3]=c->r[3]+0x0000000Cu; // 800D42C4
  c->lr=0x800D42CCu; f_8003A994(c); // 800D42C8
L_800D42CC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D42CC
  c->r[3]=c->r[29]|c->r[29]; // 800D42D0
  c->r[4]=c->r[30]|c->r[30]; // 800D42D4
  c->r[5]=c->r[31]|c->r[31]; // 800D42D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D42DC
  c->ctr=c->r[12]; // 800D42E0
  if (true) { c->lr=0x800D42E8u; dispatch(c,c->ctr); } // 800D42E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D42E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D42EC
  c->lr=c->r[0]; // 800D42F0
  c->r[1]=c->r[1]+0x00000020u; // 800D42F4
  return; // 800D42F8
}

// fn_800D42FC
void f_800D42FC(Ctx* __restrict c) {
  trace_call(0x800D42FCu);
  c->r[3]=c->r[13]+0xFFFFB44Bu; // 800D42FC
  return; // 800D4300
}

// fn_800D4304
void f_800D4304(Ctx* __restrict c) {
  trace_call(0x800D4304u);
  c->r[3]=0u+0x00000018u; // 800D4304
  return; // 800D4308
}

// fn_800D430C
void f_800D430C(Ctx* __restrict c) {
  trace_call(0x800D430Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D430C
  c->r[0]=c->lr; // 800D4310
  c->r[3]=0u+0x00000018u; // 800D4314
  c->r[4]=c->r[13]+0xFFFFB452u; // 800D4318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D431C
  c->r[5]=0u+0x00000000u; // 800D4320
  c->r[6]=0u+0x00001001u; // 800D4324
  c->lr=0x800D432Cu; f_80244D20(c); // 800D4328
  cmps(c,0,(int32_t)c->r[3],0); // 800D432C
  if (crb(c,2)) { goto L_800D4338; } // 800D4330
  c->lr=0x800D4338u; f_800D41F8(c); // 800D4334
L_800D4338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4338
  c->lr=c->r[0]; // 800D433C
  c->r[1]=c->r[1]+0x00000010u; // 800D4340
  return; // 800D4344
}

// fn_800D4348
void f_800D4348(Ctx* __restrict c) {
  trace_call(0x800D4348u);
  c->r[6]=0u+0x80420000u; // 800D4348
  c->r[4]=0u+0x59720000u; // 800D434C
  c->r[6]=c->r[6]+0xFFFF86F0u; // 800D4350
  c->r[5]=0u+0x00000000u; // 800D4354
  c->r[0]=c->r[4]+0x00004EB8u; // 800D4358
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D435C
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D4360
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4364
  return; // 800D4368
}

// fn_800D436C
void f_800D436C(Ctx* __restrict c) {
  trace_call(0x800D436Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D436C
  c->r[0]=c->lr; // 800D4370
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4374
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4378
  c->r[30]=c->r[3]|c->r[3]; // 800D437C
  c->r[31]=c->r[4]|c->r[4]; // 800D4380
  c->lr=0x800D4388u; f_8030D728(c); // 800D4384
  c->r[3]=c->r[31]|c->r[31]; // 800D4388
  c->r[4]=0u+0x00000000u; // 800D438C
  c->lr=0x800D4394u; f_8030BE30(c); // 800D4390
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4394
  c->r[3]=c->r[31]|c->r[31]; // 800D4398
  c->lr=0x800D43A0u; f_8030BD1C(c); // 800D439C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D43A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D43A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D43A8
  c->lr=c->r[0]; // 800D43AC
  c->r[1]=c->r[1]+0x00000010u; // 800D43B0
  return; // 800D43B4
}

// fn_800D43B8
void f_800D43B8(Ctx* __restrict c) {
  trace_call(0x800D43B8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D43B8
  c->r[5]=c->r[3]|c->r[3]; // 800D43BC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D43C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D43C4
  c->r[3]=c->r[4]+0x0000000Cu; // 800D43C8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D43CC
  c->r[4]=c->r[5]+0x0000000Cu; // 800D43D0
  f_8003AB48(c); return; // 800D43D4
}

// fn_800D43D8
void f_800D43D8(Ctx* __restrict c) {
  trace_call(0x800D43D8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D43D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D43DC
  c->ctr=c->r[12]; // 800D43E0
  if (true) { dispatch(c,c->ctr); return; } // 800D43E4
}

// fn_800D43E8
void f_800D43E8(Ctx* __restrict c) {
  trace_call(0x800D43E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D43E8
  c->r[0]=c->lr; // 800D43EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D43F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D43F4
  c->r[29]=c->r[3]|c->r[3]; // 800D43F8
  c->r[30]=c->r[4]|c->r[4]; // 800D43FC
  c->r[31]=c->r[5]|c->r[5]; // 800D4400
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D4404
  cmps(c,0,(int32_t)c->r[0],7); // 800D4408
  if (!crb(c,0)) { goto L_800D441C; } // 800D440C
  c->r[4]=c->r[31]|c->r[31]; // 800D4410
  c->r[3]=c->r[3]+0x0000000Cu; // 800D4414
  c->lr=0x800D441Cu; f_8003A994(c); // 800D4418
L_800D441C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D441C
  c->r[3]=c->r[29]|c->r[29]; // 800D4420
  c->r[4]=c->r[30]|c->r[30]; // 800D4424
  c->r[5]=c->r[31]|c->r[31]; // 800D4428
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D442C
  c->ctr=c->r[12]; // 800D4430
  if (true) { c->lr=0x800D4438u; dispatch(c,c->ctr); } // 800D4434
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4438
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D443C
  c->lr=c->r[0]; // 800D4440
  c->r[1]=c->r[1]+0x00000020u; // 800D4444
  return; // 800D4448
}

// fn_800D444C
void f_800D444C(Ctx* __restrict c) {
  trace_call(0x800D444Cu);
  c->r[3]=0u+0x80410000u; // 800D444C
  c->r[3]=c->r[3]+0xFFFFD39Bu; // 800D4450
  return; // 800D4454
}

// fn_800D4458
void f_800D4458(Ctx* __restrict c) {
  trace_call(0x800D4458u);
  c->r[3]=0u+0x00000018u; // 800D4458
  return; // 800D445C
}

// fn_800D4460
void f_800D4460(Ctx* __restrict c) {
  trace_call(0x800D4460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4460
  c->r[0]=c->lr; // 800D4464
  c->r[3]=0u+0x00000018u; // 800D4468
  c->r[4]=c->r[13]+0xFFFFB457u; // 800D446C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4470
  c->r[5]=0u+0x00000000u; // 800D4474
  c->r[6]=0u+0x00001001u; // 800D4478
  c->lr=0x800D4480u; f_80244D20(c); // 800D447C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4480
  if (crb(c,2)) { goto L_800D448C; } // 800D4484
  c->lr=0x800D448Cu; f_800D4348(c); // 800D4488
L_800D448C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D448C
  c->lr=c->r[0]; // 800D4490
  c->r[1]=c->r[1]+0x00000010u; // 800D4494
  return; // 800D4498
}

// fn_800D449C
void f_800D449C(Ctx* __restrict c) {
  trace_call(0x800D449Cu);
  c->r[4]=0u+0x80420000u; // 800D449C
  c->r[0]=0u+0x00000000u; // 800D44A0
  c->r[4]=c->r[4]+0xFFFF86BCu; // 800D44A4
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D44A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D44AC
  return; // 800D44B0
}

// fn_800D44B4
void f_800D44B4(Ctx* __restrict c) {
  trace_call(0x800D44B4u);
  f_8030D728(c); return; // 800D44B4
}

// fn_800D44B8
void f_800D44B8(Ctx* __restrict c) {
  trace_call(0x800D44B8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D44B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D44BC
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D44C0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D44C4
  return; // 800D44C8
}

// fn_800D44CC
void f_800D44CC(Ctx* __restrict c) {
  trace_call(0x800D44CCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D44CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D44D0
  c->ctr=c->r[12]; // 800D44D4
  if (true) { dispatch(c,c->ctr); return; } // 800D44D8
}

// fn_800D44DC
void f_800D44DC(Ctx* __restrict c) {
  trace_call(0x800D44DCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D44DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D44E0
  c->ctr=c->r[12]; // 800D44E4
  if (true) { dispatch(c,c->ctr); return; } // 800D44E8
}

// fn_800D44EC
void f_800D44EC(Ctx* __restrict c) {
  trace_call(0x800D44ECu);
  c->r[3]=0u+0x80410000u; // 800D44EC
  c->r[3]=c->r[3]+0xFFFFD3ACu; // 800D44F0
  return; // 800D44F4
}

// fn_800D44F8
void f_800D44F8(Ctx* __restrict c) {
  trace_call(0x800D44F8u);
  c->r[3]=0u+0x0000000Cu; // 800D44F8
  return; // 800D44FC
}

// fn_800D4500
void f_800D4500(Ctx* __restrict c) {
  trace_call(0x800D4500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4500
  c->r[0]=c->lr; // 800D4504
  c->r[3]=0u+0x0000000Cu; // 800D4508
  c->r[4]=c->r[13]+0xFFFFB45Cu; // 800D450C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4510
  c->r[5]=0u+0x00000000u; // 800D4514
  c->r[6]=0u+0x00001001u; // 800D4518
  c->lr=0x800D4520u; f_80244D20(c); // 800D451C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4520
  if (crb(c,2)) { goto L_800D452C; } // 800D4524
  c->lr=0x800D452Cu; f_800D449C(c); // 800D4528
L_800D452C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D452C
  c->lr=c->r[0]; // 800D4530
  c->r[1]=c->r[1]+0x00000010u; // 800D4534
  return; // 800D4538
}

// fn_800D453C
void f_800D453C(Ctx* __restrict c) {
  trace_call(0x800D453Cu);
  c->r[4]=0u+0x80420000u; // 800D453C
  c->r[0]=0u+0x00000000u; // 800D4540
  c->r[4]=c->r[4]+0xFFFF8688u; // 800D4544
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4548
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D454C
  return; // 800D4550
}

// fn_800D4554
void f_800D4554(Ctx* __restrict c) {
  trace_call(0x800D4554u);
  f_8030D728(c); return; // 800D4554
}

// fn_800D4558
void f_800D4558(Ctx* __restrict c) {
  trace_call(0x800D4558u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D4558
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D455C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D4560
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D4564
  return; // 800D4568
}

// fn_800D456C
void f_800D456C(Ctx* __restrict c) {
  trace_call(0x800D456Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D456C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4570
  c->ctr=c->r[12]; // 800D4574
  if (true) { dispatch(c,c->ctr); return; } // 800D4578
}

// fn_800D457C
void f_800D457C(Ctx* __restrict c) {
  trace_call(0x800D457Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D457C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4580
  c->ctr=c->r[12]; // 800D4584
  if (true) { dispatch(c,c->ctr); return; } // 800D4588
}

// fn_800D458C
void f_800D458C(Ctx* __restrict c) {
  trace_call(0x800D458Cu);
  c->r[3]=0u+0x80410000u; // 800D458C
  c->r[3]=c->r[3]+0xFFFFD3BBu; // 800D4590
  return; // 800D4594
}

// fn_800D4598
void f_800D4598(Ctx* __restrict c) {
  trace_call(0x800D4598u);
  c->r[3]=0u+0x0000000Cu; // 800D4598
  return; // 800D459C
}

// fn_800D45A0
void f_800D45A0(Ctx* __restrict c) {
  trace_call(0x800D45A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D45A0
  c->r[0]=c->lr; // 800D45A4
  c->r[3]=0u+0x0000000Cu; // 800D45A8
  c->r[4]=c->r[13]+0xFFFFB461u; // 800D45AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D45B0
  c->r[5]=0u+0x00000000u; // 800D45B4
  c->r[6]=0u+0x00001001u; // 800D45B8
  c->lr=0x800D45C0u; f_80244D20(c); // 800D45BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D45C0
  if (crb(c,2)) { goto L_800D45CC; } // 800D45C4
  c->lr=0x800D45CCu; f_800D453C(c); // 800D45C8
L_800D45CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D45CC
  c->lr=c->r[0]; // 800D45D0
  c->r[1]=c->r[1]+0x00000010u; // 800D45D4
  return; // 800D45D8
}

// fn_800D45DC
void f_800D45DC(Ctx* __restrict c) {
  trace_call(0x800D45DCu);
  c->r[6]=0u+0x80420000u; // 800D45DC
  c->r[4]=0u+0x59720000u; // 800D45E0
  c->r[6]=c->r[6]+0xFFFF8654u; // 800D45E4
  c->r[5]=0u+0x00000000u; // 800D45E8
  c->r[0]=c->r[4]+0x00004EB8u; // 800D45EC
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D45F0
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D45F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D45F8
  return; // 800D45FC
}

// fn_800D4600
void f_800D4600(Ctx* __restrict c) {
  trace_call(0x800D4600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4600
  c->r[0]=c->lr; // 800D4604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4608
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D460C
  c->r[30]=c->r[3]|c->r[3]; // 800D4610
  c->r[31]=c->r[4]|c->r[4]; // 800D4614
  c->lr=0x800D461Cu; f_8030D728(c); // 800D4618
  c->r[3]=c->r[31]|c->r[31]; // 800D461C
  c->r[4]=0u+0x00000000u; // 800D4620
  c->lr=0x800D4628u; f_8030BE30(c); // 800D4624
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4628
  c->r[3]=c->r[31]|c->r[31]; // 800D462C
  c->lr=0x800D4634u; f_8030BD1C(c); // 800D4630
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D4634
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4638
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D463C
  c->lr=c->r[0]; // 800D4640
  c->r[1]=c->r[1]+0x00000010u; // 800D4644
  return; // 800D4648
}

// fn_800D464C
void f_800D464C(Ctx* __restrict c) {
  trace_call(0x800D464Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D464C
  c->r[5]=c->r[3]|c->r[3]; // 800D4650
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D4654
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4658
  c->r[3]=c->r[4]+0x0000000Cu; // 800D465C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D4660
  c->r[4]=c->r[5]+0x0000000Cu; // 800D4664
  f_8003AB48(c); return; // 800D4668
}

// fn_800D466C
void f_800D466C(Ctx* __restrict c) {
  trace_call(0x800D466Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D466C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4670
  c->ctr=c->r[12]; // 800D4674
  if (true) { dispatch(c,c->ctr); return; } // 800D4678
}

// fn_800D467C
void f_800D467C(Ctx* __restrict c) {
  trace_call(0x800D467Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D467C
  c->r[0]=c->lr; // 800D4680
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4684
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4688
  c->r[29]=c->r[3]|c->r[3]; // 800D468C
  c->r[30]=c->r[4]|c->r[4]; // 800D4690
  c->r[31]=c->r[5]|c->r[5]; // 800D4694
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D4698
  cmps(c,0,(int32_t)c->r[0],7); // 800D469C
  if (!crb(c,0)) { goto L_800D46B0; } // 800D46A0
  c->r[4]=c->r[31]|c->r[31]; // 800D46A4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D46A8
  c->lr=0x800D46B0u; f_8003A994(c); // 800D46AC
L_800D46B0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D46B0
  c->r[3]=c->r[29]|c->r[29]; // 800D46B4
  c->r[4]=c->r[30]|c->r[30]; // 800D46B8
  c->r[5]=c->r[31]|c->r[31]; // 800D46BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D46C0
  c->ctr=c->r[12]; // 800D46C4
  if (true) { c->lr=0x800D46CCu; dispatch(c,c->ctr); } // 800D46C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D46CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D46D0
  c->lr=c->r[0]; // 800D46D4
  c->r[1]=c->r[1]+0x00000020u; // 800D46D8
  return; // 800D46DC
}

// fn_800D46E0
void f_800D46E0(Ctx* __restrict c) {
  trace_call(0x800D46E0u);
  c->r[3]=0u+0x80410000u; // 800D46E0
  c->r[3]=c->r[3]+0xFFFFD3CEu; // 800D46E4
  return; // 800D46E8
}

// fn_800D46EC
void f_800D46EC(Ctx* __restrict c) {
  trace_call(0x800D46ECu);
  c->r[3]=0u+0x00000018u; // 800D46EC
  return; // 800D46F0
}

// fn_800D46F4
void f_800D46F4(Ctx* __restrict c) {
  trace_call(0x800D46F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D46F4
  c->r[0]=c->lr; // 800D46F8
  c->r[3]=0u+0x00000018u; // 800D46FC
  c->r[4]=c->r[13]+0xFFFFB466u; // 800D4700
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4704
  c->r[5]=0u+0x00000000u; // 800D4708
  c->r[6]=0u+0x00001001u; // 800D470C
  c->lr=0x800D4714u; f_80244D20(c); // 800D4710
  cmps(c,0,(int32_t)c->r[3],0); // 800D4714
  if (crb(c,2)) { goto L_800D4720; } // 800D4718
  c->lr=0x800D4720u; f_800D45DC(c); // 800D471C
L_800D4720:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4720
  c->lr=c->r[0]; // 800D4724
  c->r[1]=c->r[1]+0x00000010u; // 800D4728
  return; // 800D472C
}

// fn_800D4730
void f_800D4730(Ctx* __restrict c) {
  trace_call(0x800D4730u);
  c->r[6]=0u+0x80420000u; // 800D4730
  c->r[4]=0u+0x59720000u; // 800D4734
  c->r[6]=c->r[6]+0xFFFF8620u; // 800D4738
  c->r[5]=0u+0x00000000u; // 800D473C
  c->r[0]=c->r[4]+0x00004EB8u; // 800D4740
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D4744
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D4748
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D474C
  return; // 800D4750
}

// fn_800D4754
void f_800D4754(Ctx* __restrict c) {
  trace_call(0x800D4754u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4754
  c->r[0]=c->lr; // 800D4758
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D475C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4760
  c->r[30]=c->r[3]|c->r[3]; // 800D4764
  c->r[31]=c->r[4]|c->r[4]; // 800D4768
  c->lr=0x800D4770u; f_8030D728(c); // 800D476C
  c->r[3]=c->r[31]|c->r[31]; // 800D4770
  c->r[4]=0u+0x00000000u; // 800D4774
  c->lr=0x800D477Cu; f_8030BE30(c); // 800D4778
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D477C
  c->r[3]=c->r[31]|c->r[31]; // 800D4780
  c->lr=0x800D4788u; f_8030BD1C(c); // 800D4784
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D4788
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D478C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4790
  c->lr=c->r[0]; // 800D4794
  c->r[1]=c->r[1]+0x00000010u; // 800D4798
  return; // 800D479C
}

// fn_800D47A0
void f_800D47A0(Ctx* __restrict c) {
  trace_call(0x800D47A0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D47A0
  c->r[5]=c->r[3]|c->r[3]; // 800D47A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D47A8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D47AC
  c->r[3]=c->r[4]+0x0000000Cu; // 800D47B0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D47B4
  c->r[4]=c->r[5]+0x0000000Cu; // 800D47B8
  f_8003AB48(c); return; // 800D47BC
}

// fn_800D47C0
void f_800D47C0(Ctx* __restrict c) {
  trace_call(0x800D47C0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D47C0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D47C4
  c->ctr=c->r[12]; // 800D47C8
  if (true) { dispatch(c,c->ctr); return; } // 800D47CC
}

// fn_800D47D0
void f_800D47D0(Ctx* __restrict c) {
  trace_call(0x800D47D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D47D0
  c->r[0]=c->lr; // 800D47D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D47D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D47DC
  c->r[29]=c->r[3]|c->r[3]; // 800D47E0
  c->r[30]=c->r[4]|c->r[4]; // 800D47E4
  c->r[31]=c->r[5]|c->r[5]; // 800D47E8
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D47EC
  cmps(c,0,(int32_t)c->r[0],7); // 800D47F0
  if (!crb(c,0)) { goto L_800D4804; } // 800D47F4
  c->r[4]=c->r[31]|c->r[31]; // 800D47F8
  c->r[3]=c->r[3]+0x0000000Cu; // 800D47FC
  c->lr=0x800D4804u; f_8003A994(c); // 800D4800
L_800D4804:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D4804
  c->r[3]=c->r[29]|c->r[29]; // 800D4808
  c->r[4]=c->r[30]|c->r[30]; // 800D480C
  c->r[5]=c->r[31]|c->r[31]; // 800D4810
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4814
  c->ctr=c->r[12]; // 800D4818
  if (true) { c->lr=0x800D4820u; dispatch(c,c->ctr); } // 800D481C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4820
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4824
  c->lr=c->r[0]; // 800D4828
  c->r[1]=c->r[1]+0x00000020u; // 800D482C
  return; // 800D4830
}

// fn_800D4834
void f_800D4834(Ctx* __restrict c) {
  trace_call(0x800D4834u);
  c->r[3]=0u+0x80410000u; // 800D4834
  c->r[3]=c->r[3]+0xFFFFD3DAu; // 800D4838
  return; // 800D483C
}

// fn_800D4840
void f_800D4840(Ctx* __restrict c) {
  trace_call(0x800D4840u);
  c->r[3]=0u+0x00000018u; // 800D4840
  return; // 800D4844
}

