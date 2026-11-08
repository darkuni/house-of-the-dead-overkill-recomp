#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_803E52DC
void f_803E52DC(Ctx* __restrict c) {
  trace_call(0x803E52DCu);
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E52DC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E52E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E52E4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803E52E8
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803E52EC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E52F0
  return; // 803E52F4
}

// fn_803E52F8
void f_803E52F8(Ctx* __restrict c) {
  trace_call(0x803E52F8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E52F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E52FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 803E5300
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 803E5304
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E5308
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E530C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E5310
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803E5314
  return; // 803E5318
}

// fn_803E531C
void f_803E531C(Ctx* __restrict c) {
  trace_call(0x803E531Cu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E531C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E5320
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 803E5324
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,3,ea,0,0);} // 803E5328
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803E532C
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803E5330
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E5334
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803E5338
  return; // 803E533C
}

// fn_803E5340
void f_803E5340(Ctx* __restrict c) {
  trace_call(0x803E5340u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803E5340
  return; // 803E5344
}

// fn_803E5348
void f_803E5348(Ctx* __restrict c) {
  trace_call(0x803E5348u);
  c->r[3]=R32(c->r[3]+0x000000A0u); // 803E5348
  return; // 803E534C
}

// fn_803E5350
void f_803E5350(Ctx* __restrict c) {
  trace_call(0x803E5350u);
  c->r[3]=R32(c->r[3]+0x000000A4u); // 803E5350
  return; // 803E5354
}

// fn_803E5358
void f_803E5358(Ctx* __restrict c) {
  trace_call(0x803E5358u);
  c->r[3]=R16(c->r[3]+0x000000CCu); // 803E5358
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803E535C
  c->r[0]=cntlz(c->r[0]); // 803E5360
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 803E5364
  return; // 803E5368
}

// fn_803E536C
void f_803E536C(Ctx* __restrict c) {
  trace_call(0x803E536Cu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E536C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E5370
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5374
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5378
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 803E537C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 803E5380
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803E5384
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803E5388
  return; // 803E538C
}

// fn_803E5390
void f_803E5390(Ctx* __restrict c) {
  trace_call(0x803E5390u);
  c->r[3]=R32(c->r[3]+0x000000A0u); // 803E5390
  c->r[0]=rotl(c->r[4],5)&0xFFFFFFE0u; // 803E5394
  c->r[3]=c->r[3]+c->r[0]; // 803E5398
  return; // 803E539C
}

// fn_803E53A0
void f_803E53A0(Ctx* __restrict c) {
  trace_call(0x803E53A0u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E53A0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 803E53A4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E53A8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 803E53AC
  return; // 803E53B0
}

// fn_803E53B4
void f_803E53B4(Ctx* __restrict c) {
  trace_call(0x803E53B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E53B4
  c->r[0]=c->lr; // 803E53B8
  {uint32_t ea=c->r[2]+0xFFFFA78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E53BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E53C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E53C4
  c->r[31]=c->r[3]|c->r[3]; // 803E53C8
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E53CC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E53D0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 803E53D4
  fcmp(c,0,c->f[1],c->f[0]); // 803E53D8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 803E53DC
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 803E53E0
  if (crb(c,2)) { goto L_803E5400; } // 803E53E4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803E53E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E53EC
  c->r[12]=R32(c->r[12]+0x000000C4u); // 803E53F0
  c->ctr=c->r[12]; // 803E53F4
  if (true) { c->lr=0x803E53FCu; dispatch(c,c->ctr); } // 803E53F8
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[1]);} // 803E53FC
L_803E5400:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E5400
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E5404
  c->lr=c->r[0]; // 803E5408
  c->r[1]=c->r[1]+0x00000010u; // 803E540C
  return; // 803E5410
}

// fn_803E5414
void f_803E5414(Ctx* __restrict c) {
  trace_call(0x803E5414u);
  c->r[3]=R32(c->r[3]+0x000000B8u); // 803E5414
  return; // 803E5418
}

// fn_803E541C
void f_803E541C(Ctx* __restrict c) {
  trace_call(0x803E541Cu);
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E541C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E5420
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,3,ea,0,0);} // 803E5424
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 803E5428
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E542C
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 803E5430
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E5434
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E5438
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E543C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803E5440
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 803E5444
  {uint32_t ea=c->r[4]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 803E5448
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 803E544C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E5450
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 803E5454
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E5458
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 803E545C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 803E5460
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 803E5464
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 803E5468
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 803E546C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803E5470
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803E5474
  return; // 803E5478
}

// fn_803E547C
void f_803E547C(Ctx* __restrict c) {
  trace_call(0x803E547Cu);
  c->r[3]=c->r[3]+0x00000020u; // 803E547C
  return; // 803E5480
}

// fn_803E5484
void f_803E5484(Ctx* __restrict c) {
  trace_call(0x803E5484u);
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5484
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E5488
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 803E548C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5490
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803E5494
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E5498
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 803E549C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803E54A0
  return; // 803E54A4
}

// fn_803E54A8
void f_803E54A8(Ctx* __restrict c) {
  trace_call(0x803E54A8u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E54A8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E54AC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E54B0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E54B4
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[7]); // 803E54B8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E54BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E54C0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[2]); // 803E54C4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E54C8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 803E54CC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[7]); // 803E54D0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 803E54D4
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[4]); // 803E54D8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 803E54DC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803E54E0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 803E54E4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 803E54E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803E54EC
  return; // 803E54F0
}

// fn_803E54F4
void f_803E54F4(Ctx* __restrict c) {
  trace_call(0x803E54F4u);
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 803E54F4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 803E54F8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 803E54FC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 803E5500
  return; // 803E5504
}

// fn_803E5508
void f_803E5508(Ctx* __restrict c) {
  trace_call(0x803E5508u);
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5508
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 803E550C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 803E5510
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 803E5514
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803E5518
  return; // 803E551C
}

// fn_803E5520
void f_803E5520(Ctx* __restrict c) {
  trace_call(0x803E5520u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E5520
  c->r[0]=c->lr; // 803E5524
  W32(c->r[1]+0x00000074u,c->r[0]); // 803E5528
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 803E552C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 803E5530
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 803E5534
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 803E5538
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 803E553C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 803E5540
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 803E5544
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 803E5548
  c->r[11]=c->r[1]+0x00000030u; // 803E554C
  c->lr=0x803E5554u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803E5550
  c->f[30]=c->f[1]; // 803E5554
  c->r[25]=R32(c->r[4]+0x00000004u); // 803E5558
  c->r[26]=c->r[3]|c->r[3]; // 803E555C
  c->r[24]=c->r[4]|c->r[4]; // 803E5560
  cmps(c,0,(int32_t)c->r[25],0); // 803E5564
  c->r[27]=c->r[5]|c->r[5]; // 803E5568
  c->f[31]=c->f[30]; // 803E556C
  c->r[28]=c->r[6]|c->r[6]; // 803E5570
  c->r[29]=c->r[7]|c->r[7]; // 803E5574
  c->r[30]=c->r[8]|c->r[8]; // 803E5578
  c->r[31]=c->r[9]|c->r[9]; // 803E557C
  if (!crb(c,2)) { goto L_803E558C; } // 803E5580
  {uint32_t ea=c->r[4]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 803E5584
  goto L_803E56C4; // 803E5588
L_803E558C:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 803E558C
  cmps(c,0,(int32_t)c->r[0],0); // 803E5590
  if (crb(c,2)) { goto L_803E55B4; } // 803E5594
  cmps(c,0,(int32_t)c->r[0],1); // 803E5598
  if (crb(c,2)) { goto L_803E55DC; } // 803E559C
  cmps(c,0,(int32_t)c->r[0],2); // 803E55A0
  if (crb(c,2)) { goto L_803E5664; } // 803E55A4
  cmps(c,0,(int32_t)c->r[0],3); // 803E55A8
  if (crb(c,2)) { goto L_803E56B8; } // 803E55AC
  goto L_803E56C0; // 803E55B0
L_803E55B4:;
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E55B4
  c->r[3]=c->r[25]+0x00000098u; // 803E55B8
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E55BC
  c->r[4]=c->r[25]+0x000000B8u; // 803E55C0
  c->r[5]=c->r[25]+0x000000D8u; // 803E55C4
  c->r[6]=c->r[25]+0x000000F8u; // 803E55C8
  c->lr=0x803E55D0u; f_803E5520(c); // 803E55CC
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E55D0
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803E55D4
  goto L_803E56C4; // 803E55D8
L_803E55DC:;
  c->r[3]=0u+0x80570000u; // 803E55DC
  c->r[0]=R32(c->r[4]+0x00000010u); // 803E55E0
  c->r[3]=c->r[3]+0x000041A8u; // 803E55E4
  {uint32_t ea=c->r[9]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E55E8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E55EC
  cmps(c,0,(int32_t)c->r[0],0); // 803E55F0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 803E55F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E55F8
  if (crb(c,2)) { goto L_803E5614; } // 803E55FC
  cmps(c,0,(int32_t)c->r[9],0); // 803E5600
  if (crb(c,2)) { goto L_803E5614; } // 803E5604
  {uint32_t ea=c->r[9]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5608
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803E560C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E5610
L_803E5614:;
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5614
  fcmp(c,0,c->f[0],c->f[29]); // 803E5618
  if (!crb(c,2)) { goto L_803E5624; } // 803E561C
  goto L_803E5634; // 803E5620
L_803E5624:;
  c->f[2]=c->f[29]; // 803E5624
  c->lr=0x803E562Cu; f_803AD468(c); // 803E5628
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E562C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803E5630
L_803E5634:;
  c->f[1]=c->f[0]; // 803E5634
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5638
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E563C
  c->r[9]=c->r[31]|c->r[31]; // 803E5640
  c->r[3]=c->r[25]+0x00000098u; // 803E5644
  c->r[4]=c->r[25]+0x000000B8u; // 803E5648
  c->r[5]=c->r[25]+0x000000D8u; // 803E564C
  c->r[6]=c->r[25]+0x000000F8u; // 803E5650
  c->lr=0x803E5658u; f_803E5520(c); // 803E5654
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5658
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803E565C
  goto L_803E56C4; // 803E5660
L_803E5664:;
  cmps(c,0,(int32_t)c->r[9],0); // 803E5664
  if (crb(c,2)) { goto L_803E56B0; } // 803E5668
  c->r[5]=R32(c->r[9]+0x00000068u); // 803E566C
  cmps(c,0,(int32_t)c->r[5],0); // 803E5670
  if (crb(c,2)) { goto L_803E56B0; } // 803E5674
  c->r[0]=R32(c->r[4]+0x00000018u); // 803E5678
  c->r[3]=c->r[25]+0x00000098u; // 803E567C
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5680
  c->r[4]=c->r[25]+0x000000B8u; // 803E5684
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E5688
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E568C
  c->r[6]=c->r[5]+c->r[0]; // 803E5690
  c->r[5]=c->r[25]+0x000000D8u; // 803E5694
  {uint32_t ea=c->r[6]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5698
  c->r[6]=c->r[25]+0x000000F8u; // 803E569C
  c->lr=0x803E56A4u; f_803E5520(c); // 803E56A0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E56A4
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803E56A8
  goto L_803E56C4; // 803E56AC
L_803E56B0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 803E56B0
  goto L_803E56C4; // 803E56B4
L_803E56B8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 803E56B8
  goto L_803E56C4; // 803E56BC
L_803E56C0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 803E56C0
L_803E56C4:;
  c->r[25]=R32(c->r[27]+0x00000004u); // 803E56C4
  cmps(c,0,(int32_t)c->r[25],0); // 803E56C8
  if (!crb(c,2)) { goto L_803E56D8; } // 803E56CC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E56D0
  goto L_803E581C; // 803E56D4
L_803E56D8:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 803E56D8
  cmps(c,0,(int32_t)c->r[0],0); // 803E56DC
  if (crb(c,2)) { goto L_803E5700; } // 803E56E0
  cmps(c,0,(int32_t)c->r[0],1); // 803E56E4
  if (crb(c,2)) { goto L_803E5730; } // 803E56E8
  cmps(c,0,(int32_t)c->r[0],2); // 803E56EC
  if (crb(c,2)) { goto L_803E57B8; } // 803E56F0
  cmps(c,0,(int32_t)c->r[0],3); // 803E56F4
  if (crb(c,2)) { goto L_803E5810; } // 803E56F8
  goto L_803E5818; // 803E56FC
L_803E5700:;
  c->f[1]=c->f[31]; // 803E5700
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5704
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E5708
  c->r[9]=c->r[31]|c->r[31]; // 803E570C
  c->r[3]=c->r[25]+0x00000098u; // 803E5710
  c->r[4]=c->r[25]+0x000000B8u; // 803E5714
  c->r[5]=c->r[25]+0x000000D8u; // 803E5718
  c->r[6]=c->r[25]+0x000000F8u; // 803E571C
  c->lr=0x803E5724u; f_803E5520(c); // 803E5720
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5724
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E5728
  goto L_803E581C; // 803E572C
L_803E5730:;
  c->r[3]=0u+0x80570000u; // 803E5730
  c->r[0]=R32(c->r[27]+0x00000010u); // 803E5734
  c->r[3]=c->r[3]+0x000041A8u; // 803E5738
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E573C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5740
  cmps(c,0,(int32_t)c->r[0],0); // 803E5744
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 803E5748
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E574C
  if (crb(c,2)) { goto L_803E5768; } // 803E5750
  cmps(c,0,(int32_t)c->r[31],0); // 803E5754
  if (crb(c,2)) { goto L_803E5768; } // 803E5758
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E575C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803E5760
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E5764
L_803E5768:;
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5768
  fcmp(c,0,c->f[0],c->f[28]); // 803E576C
  if (!crb(c,2)) { goto L_803E5778; } // 803E5770
  goto L_803E5788; // 803E5774
L_803E5778:;
  c->f[2]=c->f[28]; // 803E5778
  c->lr=0x803E5780u; f_803AD468(c); // 803E577C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E5780
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 803E5784
L_803E5788:;
  c->f[1]=c->f[0]; // 803E5788
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E578C
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E5790
  c->r[9]=c->r[31]|c->r[31]; // 803E5794
  c->r[3]=c->r[25]+0x00000098u; // 803E5798
  c->r[4]=c->r[25]+0x000000B8u; // 803E579C
  c->r[5]=c->r[25]+0x000000D8u; // 803E57A0
  c->r[6]=c->r[25]+0x000000F8u; // 803E57A4
  c->lr=0x803E57ACu; f_803E5520(c); // 803E57A8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E57AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E57B0
  goto L_803E581C; // 803E57B4
L_803E57B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E57B8
  if (crb(c,2)) { goto L_803E5808; } // 803E57BC
  c->r[4]=R32(c->r[31]+0x00000068u); // 803E57C0
  cmps(c,0,(int32_t)c->r[4],0); // 803E57C4
  if (crb(c,2)) { goto L_803E5808; } // 803E57C8
  c->r[0]=R32(c->r[27]+0x00000018u); // 803E57CC
  c->r[9]=c->r[31]|c->r[31]; // 803E57D0
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E57D4
  c->r[3]=c->r[25]+0x00000098u; // 803E57D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E57DC
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E57E0
  c->r[5]=c->r[4]+c->r[0]; // 803E57E4
  c->r[4]=c->r[25]+0x000000B8u; // 803E57E8
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E57EC
  c->r[5]=c->r[25]+0x000000D8u; // 803E57F0
  c->r[6]=c->r[25]+0x000000F8u; // 803E57F4
  c->lr=0x803E57FCu; f_803E5520(c); // 803E57F8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E57FC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E5800
  goto L_803E581C; // 803E5804
L_803E5808:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5808
  goto L_803E581C; // 803E580C
L_803E5810:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5810
  goto L_803E581C; // 803E5814
L_803E5818:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5818
L_803E581C:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[29]); // 803E581C
  cmpu(c,0,c->r[29],0x00000008u); // 803E5820
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[1]); // 803E5824
  if (crb(c,1)) { goto L_803E5910; } // 803E5828
  c->r[3]=0u+0x80470000u; // 803E582C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 803E5830
  c->r[3]=c->r[3]+0xFFFF93F8u; // 803E5834
  c->r[3]=R32(c->r[3]+c->r[0]); // 803E5838
  c->ctr=c->r[3]; // 803E583C
  if (true) { switch (c->ctr) { case 0x803E5844u: goto L_803E5844; case 0x803E584Cu: goto L_803E584C; case 0x803E585Cu: goto L_803E585C; case 0x803E586Cu: goto L_803E586C; case 0x803E587Cu: goto L_803E587C; case 0x803E5894u: goto L_803E5894; case 0x803E58A4u: goto L_803E58A4; case 0x803E58FCu: goto L_803E58FC; case 0x803E5910u: goto L_803E5910; default: break; } dispatch(c,c->ctr); return; } // 803E5840
L_803E5844:;
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[30]); // 803E5844
  goto L_803E5910; // 803E5848
L_803E584C:;
  c->f[1]=c->f[30]; // 803E584C
  c->lr=0x803E5854u; f_803AD464(c); // 803E5850
  c->f[30]=c->ps1[30]=S(c->f[1]); // 803E5854
  goto L_803E5910; // 803E5858
L_803E585C:;
  c->f[1]=c->f[30]; // 803E585C
  c->lr=0x803E5864u; f_803AD314(c); // 803E5860
  c->f[30]=c->ps1[30]=S(c->f[1]); // 803E5864
  goto L_803E5910; // 803E5868
L_803E586C:;
  c->f[1]=c->f[30]; // 803E586C
  c->lr=0x803E5874u; f_803ACF08(c); // 803E5870
  c->f[30]=c->ps1[30]=S(c->f[1]); // 803E5874
  goto L_803E5910; // 803E5878
L_803E587C:;
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E587C
  fcmp(c,0,c->f[0],c->f[30]); // 803E5880
  if (crb(c,2)) { goto L_803E5910; } // 803E5884
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5888
  c->f[30]=c->ps1[30]=S(c->f[0]/c->f[30]); // 803E588C
  goto L_803E5910; // 803E5890
L_803E5894:;
  c->f[1]=c->f[30]; // 803E5894
  c->lr=0x803E589Cu; f_803AD46C(c); // 803E5898
  c->f[30]=c->ps1[30]=S(c->f[1]); // 803E589C
  goto L_803E5910; // 803E58A0
L_803E58A4:;
  c->r[3]=0u+0x00190000u; // 803E58A4
  c->r[4]=R32(c->r[13]+0xFFFFF3F8u); // 803E58A8
  c->r[3]=c->r[3]+0x0000660Du; // 803E58AC
  c->r[0]=0u+0x43300000u; // 803E58B0
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[3]); // 803E58B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E58B8
  {uint32_t ea=c->r[2]+0xFFFFA7A8u; c->f[4]=RF64(ea);} // 803E58BC
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E58C0
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E58C4
  {uint32_t ea=c->r[2]+0xFFFFA79Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E58C8
  c->r[3]=c->r[3]+0x3C6F0000u; // 803E58CC
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803E58D0
  W32(c->r[13]+0xFFFFF3F8u,c->r[0]); // 803E58D4
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 803E58D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E58DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 803E58E0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803E58E4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803E58E8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803E58EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E58F0
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[2]); // 803E58F4
  goto L_803E5910; // 803E58F8
L_803E58FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E58FC
  if (crb(c,2)) { goto L_803E590C; } // 803E5900
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[30]=c->ps1[30]=RF32(ea);} // 803E5904
  goto L_803E5910; // 803E5908
L_803E590C:;
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[30]=c->ps1[30]=RF32(ea);} // 803E590C
L_803E5910:;
  c->r[25]=R32(c->r[26]+0x00000004u); // 803E5910
  cmps(c,0,(int32_t)c->r[25],0); // 803E5914
  if (!crb(c,2)) { goto L_803E5924; } // 803E5918
  {uint32_t ea=c->r[26]+0x00000000u; c->f[28]=c->ps1[28]=RF32(ea);} // 803E591C
  goto L_803E5A68; // 803E5920
L_803E5924:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 803E5924
  cmps(c,0,(int32_t)c->r[0],0); // 803E5928
  if (crb(c,2)) { goto L_803E594C; } // 803E592C
  cmps(c,0,(int32_t)c->r[0],1); // 803E5930
  if (crb(c,2)) { goto L_803E597C; } // 803E5934
  cmps(c,0,(int32_t)c->r[0],2); // 803E5938
  if (crb(c,2)) { goto L_803E5A04; } // 803E593C
  cmps(c,0,(int32_t)c->r[0],3); // 803E5940
  if (crb(c,2)) { goto L_803E5A5C; } // 803E5944
  goto L_803E5A64; // 803E5948
L_803E594C:;
  c->f[1]=c->f[31]; // 803E594C
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5950
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E5954
  c->r[9]=c->r[31]|c->r[31]; // 803E5958
  c->r[3]=c->r[25]+0x00000098u; // 803E595C
  c->r[4]=c->r[25]+0x000000B8u; // 803E5960
  c->r[5]=c->r[25]+0x000000D8u; // 803E5964
  c->r[6]=c->r[25]+0x000000F8u; // 803E5968
  c->lr=0x803E5970u; f_803E5520(c); // 803E596C
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5970
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803E5974
  goto L_803E5A68; // 803E5978
L_803E597C:;
  c->r[3]=0u+0x80570000u; // 803E597C
  c->r[0]=R32(c->r[26]+0x00000010u); // 803E5980
  c->r[3]=c->r[3]+0x000041A8u; // 803E5984
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5988
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E598C
  cmps(c,0,(int32_t)c->r[0],0); // 803E5990
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 803E5994
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E5998
  if (crb(c,2)) { goto L_803E59B4; } // 803E599C
  cmps(c,0,(int32_t)c->r[31],0); // 803E59A0
  if (crb(c,2)) { goto L_803E59B4; } // 803E59A4
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E59A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803E59AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E59B0
L_803E59B4:;
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E59B4
  fcmp(c,0,c->f[0],c->f[28]); // 803E59B8
  if (!crb(c,2)) { goto L_803E59C4; } // 803E59BC
  goto L_803E59D4; // 803E59C0
L_803E59C4:;
  c->f[2]=c->f[28]; // 803E59C4
  c->lr=0x803E59CCu; f_803AD468(c); // 803E59C8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E59CC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 803E59D0
L_803E59D4:;
  c->f[1]=c->f[0]; // 803E59D4
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E59D8
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E59DC
  c->r[9]=c->r[31]|c->r[31]; // 803E59E0
  c->r[3]=c->r[25]+0x00000098u; // 803E59E4
  c->r[4]=c->r[25]+0x000000B8u; // 803E59E8
  c->r[5]=c->r[25]+0x000000D8u; // 803E59EC
  c->r[6]=c->r[25]+0x000000F8u; // 803E59F0
  c->lr=0x803E59F8u; f_803E5520(c); // 803E59F4
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E59F8
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803E59FC
  goto L_803E5A68; // 803E5A00
L_803E5A04:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E5A04
  if (crb(c,2)) { goto L_803E5A54; } // 803E5A08
  c->r[4]=R32(c->r[31]+0x00000068u); // 803E5A0C
  cmps(c,0,(int32_t)c->r[4],0); // 803E5A10
  if (crb(c,2)) { goto L_803E5A54; } // 803E5A14
  c->r[0]=R32(c->r[26]+0x00000018u); // 803E5A18
  c->r[9]=c->r[31]|c->r[31]; // 803E5A1C
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5A20
  c->r[3]=c->r[25]+0x00000098u; // 803E5A24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E5A28
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E5A2C
  c->r[5]=c->r[4]+c->r[0]; // 803E5A30
  c->r[4]=c->r[25]+0x000000B8u; // 803E5A34
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5A38
  c->r[5]=c->r[25]+0x000000D8u; // 803E5A3C
  c->r[6]=c->r[25]+0x000000F8u; // 803E5A40
  c->lr=0x803E5A48u; f_803E5520(c); // 803E5A44
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5A48
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803E5A4C
  goto L_803E5A68; // 803E5A50
L_803E5A54:;
  {uint32_t ea=c->r[26]+0x00000000u; c->f[28]=c->ps1[28]=RF32(ea);} // 803E5A54
  goto L_803E5A68; // 803E5A58
L_803E5A5C:;
  {uint32_t ea=c->r[26]+0x00000000u; c->f[28]=c->ps1[28]=RF32(ea);} // 803E5A5C
  goto L_803E5A68; // 803E5A60
L_803E5A64:;
  {uint32_t ea=c->r[26]+0x00000000u; c->f[28]=c->ps1[28]=RF32(ea);} // 803E5A64
L_803E5A68:;
  c->r[25]=R32(c->r[28]+0x00000004u); // 803E5A68
  cmps(c,0,(int32_t)c->r[25],0); // 803E5A6C
  if (!crb(c,2)) { goto L_803E5A7C; } // 803E5A70
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5A74
  goto L_803E5BC0; // 803E5A78
L_803E5A7C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 803E5A7C
  cmps(c,0,(int32_t)c->r[0],0); // 803E5A80
  if (crb(c,2)) { goto L_803E5AA4; } // 803E5A84
  cmps(c,0,(int32_t)c->r[0],1); // 803E5A88
  if (crb(c,2)) { goto L_803E5AD4; } // 803E5A8C
  cmps(c,0,(int32_t)c->r[0],2); // 803E5A90
  if (crb(c,2)) { goto L_803E5B5C; } // 803E5A94
  cmps(c,0,(int32_t)c->r[0],3); // 803E5A98
  if (crb(c,2)) { goto L_803E5BB4; } // 803E5A9C
  goto L_803E5BBC; // 803E5AA0
L_803E5AA4:;
  c->f[1]=c->f[31]; // 803E5AA4
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5AA8
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E5AAC
  c->r[9]=c->r[31]|c->r[31]; // 803E5AB0
  c->r[3]=c->r[25]+0x00000098u; // 803E5AB4
  c->r[4]=c->r[25]+0x000000B8u; // 803E5AB8
  c->r[5]=c->r[25]+0x000000D8u; // 803E5ABC
  c->r[6]=c->r[25]+0x000000F8u; // 803E5AC0
  c->lr=0x803E5AC8u; f_803E5520(c); // 803E5AC4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5AC8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E5ACC
  goto L_803E5BC0; // 803E5AD0
L_803E5AD4:;
  c->r[3]=0u+0x80570000u; // 803E5AD4
  c->r[0]=R32(c->r[28]+0x00000010u); // 803E5AD8
  c->r[3]=c->r[3]+0x000041A8u; // 803E5ADC
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5AE0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5AE4
  cmps(c,0,(int32_t)c->r[0],0); // 803E5AE8
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 803E5AEC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E5AF0
  if (crb(c,2)) { goto L_803E5B0C; } // 803E5AF4
  cmps(c,0,(int32_t)c->r[31],0); // 803E5AF8
  if (crb(c,2)) { goto L_803E5B0C; } // 803E5AFC
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5B00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803E5B04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E5B08
L_803E5B0C:;
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5B0C
  fcmp(c,0,c->f[0],c->f[29]); // 803E5B10
  if (!crb(c,2)) { goto L_803E5B1C; } // 803E5B14
  goto L_803E5B2C; // 803E5B18
L_803E5B1C:;
  c->f[2]=c->f[29]; // 803E5B1C
  c->lr=0x803E5B24u; f_803AD468(c); // 803E5B20
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E5B24
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803E5B28
L_803E5B2C:;
  c->f[1]=c->f[0]; // 803E5B2C
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5B30
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E5B34
  c->r[9]=c->r[31]|c->r[31]; // 803E5B38
  c->r[3]=c->r[25]+0x00000098u; // 803E5B3C
  c->r[4]=c->r[25]+0x000000B8u; // 803E5B40
  c->r[5]=c->r[25]+0x000000D8u; // 803E5B44
  c->r[6]=c->r[25]+0x000000F8u; // 803E5B48
  c->lr=0x803E5B50u; f_803E5520(c); // 803E5B4C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5B50
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E5B54
  goto L_803E5BC0; // 803E5B58
L_803E5B5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E5B5C
  if (crb(c,2)) { goto L_803E5BAC; } // 803E5B60
  c->r[4]=R32(c->r[31]+0x00000068u); // 803E5B64
  cmps(c,0,(int32_t)c->r[4],0); // 803E5B68
  if (crb(c,2)) { goto L_803E5BAC; } // 803E5B6C
  c->r[0]=R32(c->r[28]+0x00000018u); // 803E5B70
  c->r[9]=c->r[31]|c->r[31]; // 803E5B74
  c->r[7]=R32(c->r[25]+0x00000118u); // 803E5B78
  c->r[3]=c->r[25]+0x00000098u; // 803E5B7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E5B80
  c->r[8]=R32(c->r[25]+0x0000011Cu); // 803E5B84
  c->r[5]=c->r[4]+c->r[0]; // 803E5B88
  c->r[4]=c->r[25]+0x000000B8u; // 803E5B8C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5B90
  c->r[5]=c->r[25]+0x000000D8u; // 803E5B94
  c->r[6]=c->r[25]+0x000000F8u; // 803E5B98
  c->lr=0x803E5BA0u; f_803E5520(c); // 803E5B9C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5BA0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E5BA4
  goto L_803E5BC0; // 803E5BA8
L_803E5BAC:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5BAC
  goto L_803E5BC0; // 803E5BB0
L_803E5BB4:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5BB4
  goto L_803E5BC0; // 803E5BB8
L_803E5BBC:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E5BBC
L_803E5BC0:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[28]); // 803E5BC0
  cmps(c,0,(int32_t)c->r[30],0); // 803E5BC4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803E5BC8
  if (crb(c,2)) { goto L_803E5BDC; } // 803E5BCC
  cmps(c,0,(int32_t)c->r[30],1); // 803E5BD0
  if (crb(c,2)) { goto L_803E5C00; } // 803E5BD4
  goto L_803E5C50; // 803E5BD8
L_803E5BDC:;
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5BDC
  fcmp(c,0,c->f[1],c->f[0]); // 803E5BE0
  if (!crb(c,1)) { goto L_803E5BEC; } // 803E5BE4
  c->f[1]=c->f[0]; // 803E5BE8
L_803E5BEC:;
  {uint32_t ea=c->r[2]+0xFFFFA78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5BEC
  fcmp(c,0,c->f[1],c->f[0]); // 803E5BF0
  if (!crb(c,0)) { goto L_803E5C50; } // 803E5BF4
  c->f[1]=c->f[0]; // 803E5BF8
  goto L_803E5C50; // 803E5BFC
L_803E5C00:;
  {uint32_t ea=c->r[2]+0xFFFFA78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5C00
  fcmp(c,0,c->f[1],c->f[0]); // 803E5C04
  if (!crb(c,1)) { goto L_803E5C2C; } // 803E5C08
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5C0C
  {uint32_t ea=c->r[2]+0xFFFFA7A0u; c->f[2]=RF64(ea);} // 803E5C10
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803E5C14
  c->lr=0x803E5C1Cu; f_803AD468(c); // 803E5C18
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803E5C1C
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5C20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E5C24
  goto L_803E5C50; // 803E5C28
L_803E5C2C:;
  c->f[1]=-c->f[1]; // 803E5C2C
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5C30
  {uint32_t ea=c->r[2]+0xFFFFA7A0u; c->f[2]=RF64(ea);} // 803E5C34
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803E5C38
  c->lr=0x803E5C40u; f_803AD468(c); // 803E5C3C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803E5C40
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5C44
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803E5C48
  c->f[1]=-c->f[0]; // 803E5C4C
L_803E5C50:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 803E5C50
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 803E5C54
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 803E5C58
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 803E5C5C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 803E5C60
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 803E5C64
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 803E5C68
  c->r[11]=c->r[1]+0x00000030u; // 803E5C6C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 803E5C70
  c->lr=0x803E5C78u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803E5C74
  c->r[0]=R32(c->r[1]+0x00000074u); // 803E5C78
  c->lr=c->r[0]; // 803E5C7C
  c->r[1]=c->r[1]+0x00000070u; // 803E5C80
  return; // 803E5C84
}

// fn_803E5C88
void f_803E5C88(Ctx* __restrict c) {
  trace_call(0x803E5C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E5C88
  c->r[3]=0u+0x00190000u; // 803E5C8C
  c->r[0]=0u+0x43300000u; // 803E5C90
  {uint32_t ea=c->r[2]+0xFFFFA7A8u; c->f[4]=RF64(ea);} // 803E5C94
  c->r[4]=R32(c->r[13]+0xFFFFF3F8u); // 803E5C98
  c->r[3]=c->r[3]+0x0000660Du; // 803E5C9C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E5CA0
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[3]); // 803E5CA4
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E5CA8
  {uint32_t ea=c->r[2]+0xFFFFA79Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5CAC
  c->r[3]=c->r[3]+0x3C6F0000u; // 803E5CB0
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803E5CB4
  W32(c->r[13]+0xFFFFF3F8u,c->r[0]); // 803E5CB8
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 803E5CBC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E5CC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 803E5CC4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803E5CC8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803E5CCC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 803E5CD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E5CD4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803E5CD8
  c->r[1]=c->r[1]+0x00000010u; // 803E5CDC
  return; // 803E5CE0
}

// fn_803E5CE4
void f_803E5CE4(Ctx* __restrict c) {
  trace_call(0x803E5CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E5CE4
  c->r[0]=c->lr; // 803E5CE8
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5CEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E5CF0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E5CF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E5CF8
  c->r[31]=c->r[4]|c->r[4]; // 803E5CFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E5D00
  c->r[30]=c->r[3]|c->r[3]; // 803E5D04
  c->lr=0x803E5D0Cu; f_803ADC14(c); // 803E5D08
  c->r[3]=rotl(c->r[3],3)&0x00000FF8u; // 803E5D0C
  c->r[3]=c->r[3]+0xE0000000u; // 803E5D10
  {uint32_t ea=c->r[3]+0x00000C00u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5D14
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 803E5D18
  {uint32_t ea=c->r[3]+0x00000C04u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5D1C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 803E5D20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E5D24
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E5D28
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E5D2C
  c->lr=c->r[0]; // 803E5D30
  c->r[1]=c->r[1]+0x00000010u; // 803E5D34
  return; // 803E5D38
}

// fn_803E5D3C
void f_803E5D3C(Ctx* __restrict c) {
  trace_call(0x803E5D3Cu);
  c->r[3]=0u+0x00000000u; // 803E5D3C
  return; // 803E5D40
}

// fn_803E5D44
void f_803E5D44(Ctx* __restrict c) {
  trace_call(0x803E5D44u);
  c->r[3]=0u+0x00000000u; // 803E5D44
  return; // 803E5D48
}

// GetNumEmitter__Q34nw4r2ef6EffectCFv
void f_803E5D4C(Ctx* __restrict c) {
  trace_call(0x803E5D4Cu);
  c->r[3]=R16(c->r[3]+0x000000CEu); // 803E5D4C
  return; // 803E5D50
}

// fn_803E5D54
void f_803E5D54(Ctx* __restrict c) {
  trace_call(0x803E5D54u);
  return; // 803E5D54
}

// fn_803E5D58
void f_803E5D58(Ctx* __restrict c) {
  trace_call(0x803E5D58u);
  cmps(c,0,(int32_t)c->r[4],0); // 803E5D58
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E5D5C
  if (crb(c,2)) { goto L_803E5D70; } // 803E5D60
  c->r[7]=R32(c->r[4]+0x000000B4u); // 803E5D64
  cmps(c,0,(int32_t)c->r[7],0); // 803E5D68
  if (!crb(c,2)) { goto L_803E5D78; } // 803E5D6C
L_803E5D70:;
  c->r[0]=0u+0x00000000u; // 803E5D70
  goto L_803E5D7C; // 803E5D74
L_803E5D78:;
  c->r[0]=c->r[7]+0x00000004u; // 803E5D78
L_803E5D7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 803E5D7C
  if (crb(c,2)) { goto L_803E60C4; } // 803E5D80
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E5D84
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 803E5D88
  c->r[7]=c->r[0]+c->r[7]; // 803E5D8C
  c->r[7]=R32(c->r[7]+0x00000034u); // 803E5D90
  cmps(c,0,(int32_t)c->r[7],0); // 803E5D94
  if (crb(c,2)) { goto L_803E5E68; } // 803E5D98
  c->r[8]=0u+0x00190000u; // 803E5D9C
  c->r[9]=R32(c->r[13]+0xFFFFF3F8u); // 803E5DA0
  c->r[10]=c->r[8]+0x0000660Du; // 803E5DA4
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5DA8
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[10]); // 803E5DAC
  c->r[8]=0u+0x43300000u; // 803E5DB0
  W32(c->r[1]+0x00000028u,c->r[8]); // 803E5DB4
  {uint32_t ea=c->r[2]+0xFFFFA7A8u; c->f[6]=RF64(ea);} // 803E5DB8
  W32(c->r[1]+0x00000030u,c->r[8]); // 803E5DBC
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E5DC0
  c->r[9]=c->r[9]+0x3C6F0000u; // 803E5DC4
  W32(c->r[1]+0x00000038u,c->r[8]); // 803E5DC8
  c->r[9]=c->r[9]+0xFFFFF35Fu; // 803E5DCC
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E5DD0
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[10]); // 803E5DD4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803E5DD8
  c->r[9]=rotl(c->r[9],28)&0x0FFFFFFFu; // 803E5DDC
  {uint32_t ea=c->r[2]+0xFFFFA79Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 803E5DE0
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 803E5DE4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 803E5DE8
  c->r[8]=c->r[8]+0x3C6F0000u; // 803E5DEC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[6]); // 803E5DF0
  c->r[9]=c->r[8]+0xFFFFF35Fu; // 803E5DF4
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[10]); // 803E5DF8
  c->r[9]=rotl(c->r[9],28)&0x0FFFFFFFu; // 803E5DFC
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[0]); // 803E5E00
  W32(c->r[1]+0x00000034u,c->r[9]); // 803E5E04
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803E5E08
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[3]); // 803E5E0C
  c->r[8]=c->r[8]+0x3C6F0000u; // 803E5E10
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 803E5E14
  c->r[9]=c->r[8]+0xFFFFF35Fu; // 803E5E18
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803E5E1C
  c->r[8]=rotl(c->r[9],28)&0x0FFFFFFFu; // 803E5E20
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 803E5E24
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 803E5E28
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803E5E2C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[7]); // 803E5E30
  W32(c->r[13]+0xFFFFF3F8u,c->r[9]); // 803E5E34
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 803E5E38
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 803E5E3C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 803E5E40
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 803E5E44
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 803E5E48
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 803E5E4C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[7]); // 803E5E50
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 803E5E54
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803E5E58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[7]); // 803E5E5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803E5E60
  goto L_803E5E88; // 803E5E64
L_803E5E68:;
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E5E68
  c->r[9]=c->r[1]+0x00000018u; // 803E5E6C
  c->r[8]=c->r[1]+0x00000020u; // 803E5E70
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803E5E74
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803E5E78
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E5E7C
  {uint32_t ea=c->r[9]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E5E80
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E5E84
L_803E5E88:;
  c->r[8]=R32(c->r[4]+0x00000068u); // 803E5E88
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E5E8C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E5E90
  cmps(c,0,(int32_t)c->r[8],0); // 803E5E94
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E5E98
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5E9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 803E5EA0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803E5EA4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 803E5EA8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803E5EAC
  if (crb(c,2)) { goto L_803E5F48; } // 803E5EB0
  c->r[5]=R32(c->r[8]+0x000000B8u); // 803E5EB4
  cmps(c,0,(int32_t)c->r[5],0); // 803E5EB8
  if (crb(c,2)) { goto L_803E5F1C; } // 803E5EBC
  c->r[5]=c->r[1]+0x00000008u; // 803E5EC0
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5EC4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,6,ea,0,0);} // 803E5EC8
  {uint32_t ea=c->r[8]+0x00000020u; psq_load(c,3,ea,0,0);} // 803E5ECC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 803E5ED0
  {uint32_t ea=c->r[8]+0x00000030u; psq_load(c,2,ea,0,0);} // 803E5ED4
  {double t0=S(c->f[6]*c->f[3]), t1=S(c->ps1[6]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803E5ED8
  {uint32_t ea=c->r[8]+0x00000040u; psq_load(c,5,ea,0,0);} // 803E5EDC
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803E5EE0
  {uint32_t ea=c->r[8]+0x00000038u; c->f[8]=c->ps1[8]=RF32(ea);} // 803E5EE4
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 803E5EE8
  {uint32_t ea=c->r[8]+0x00000048u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E5EEC
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803E5EF0
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 803E5EF4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[8]); // 803E5EF8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 803E5EFC
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 803E5F00
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[7]); // 803E5F04
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 803E5F08
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 803E5F0C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 803E5F10
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803E5F14
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E5F18
L_803E5F1C:;
  c->r[5]=R32(c->r[4]+0x00000068u); // 803E5F1C
  c->r[8]=c->r[1]+0x00000008u; // 803E5F20
  c->r[9]=c->r[1]+0x00000010u; // 803E5F24
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E5F28
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,3,ea,0,0);} // 803E5F2C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E5F30
  {uint32_t ea=c->r[5]+0x00000018u; psq_load(c,4,ea,0,0);} // 803E5F34
  {double t0=S(c->f[0]+c->f[3]), t1=S(c->ps1[0]+c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 803E5F38
  {double t0=S(c->f[2]+c->f[4]), t1=S(c->ps1[2]+c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 803E5F3C
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E5F40
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 803E5F44
L_803E5F48:;
  c->r[5]=c->r[1]+0x00000008u; // 803E5F48
  c->r[8]=c->r[1]+0x00000010u; // 803E5F4C
  c->r[9]=c->r[1]+0x00000018u; // 803E5F50
  c->r[10]=c->r[1]+0x00000020u; // 803E5F54
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E5F58
  cmps(c,0,(int32_t)c->r[7],0); // 803E5F5C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E5F60
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E5F64
  {double t0=S(c->f[0]+c->f[3]), t1=S(c->ps1[0]+c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 803E5F68
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,4,ea,0,0);} // 803E5F6C
  {double t0=S(c->f[2]+c->f[4]), t1=S(c->ps1[2]+c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 803E5F70
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E5F74
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 803E5F78
  if (crb(c,2)) { goto L_803E5FC8; } // 803E5F7C
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E5F80
  c->r[5]=0u+0x00000000u; // 803E5F84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E5F88
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 803E5F8C
  {uint32_t ea=c->r[7]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[7]=ea;} // 803E5F90
  fcmp(c,0,c->f[2],c->f[0]); // 803E5F94
  if (!crb(c,2)) { goto L_803E5FBC; } // 803E5F98
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803E5F9C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5FA0
  fcmp(c,0,c->f[2],c->f[0]); // 803E5FA4
  if (!crb(c,2)) { goto L_803E5FBC; } // 803E5FA8
  c->f[2]=c->ps1[2]=S(c->f[3]); // 803E5FAC
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E5FB0
  fcmp(c,0,c->f[2],c->f[0]); // 803E5FB4
  if (crb(c,2)) { goto L_803E5FC0; } // 803E5FB8
L_803E5FBC:;
  c->r[5]=0u+0x00000001u; // 803E5FBC
L_803E5FC0:;
  cmps(c,0,(int32_t)c->r[5],0); // 803E5FC0
  if (crb(c,2)) { goto L_803E60C4; } // 803E5FC4
L_803E5FC8:;
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E5FC8
  c->r[5]=R32(c->r[4]+0x000000A8u); // 803E5FCC
  c->r[7]=c->r[7]+0x00000001u; // 803E5FD0
  W16(c->r[4]+0x000000A6u,c->r[7]); // 803E5FD4
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 803E5FD8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[5]); // 803E5FDC
  if (crb(c,0)) { goto L_803E5FEC; } // 803E5FE0
  c->r[5]=0u+0x00000000u; // 803E5FE4
  W16(c->r[4]+0x000000A6u,c->r[5]); // 803E5FE8
L_803E5FEC:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E5FEC
  c->r[5]=rotl(c->r[5],6)&0xFFFFFFC0u; // 803E5FF0
  c->r[5]=c->r[0]+c->r[5]; // 803E5FF4
  c->r[5]=R32(c->r[5]+0x00000034u); // 803E5FF8
  cmps(c,0,(int32_t)c->r[5],0); // 803E5FFC
  if (!crb(c,2)) { goto L_803E6014; } // 803E6000
  c->r[7]=R32(c->r[4]+0x000000B4u); // 803E6004
  c->r[5]=R32(c->r[7]+0x00000000u); // 803E6008
  c->r[5]=c->r[5]+0x00000001u; // 803E600C
  W32(c->r[7]+0x00000000u,c->r[5]); // 803E6010
L_803E6014:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E6014
  c->r[9]=c->r[1]+0x00000008u; // 803E6018
  c->r[8]=c->r[1]+0x00000010u; // 803E601C
  c->r[10]=c->r[1]+0x00000018u; // 803E6020
  c->r[5]=rotl(c->r[5],6)&0xFFFFFFC0u; // 803E6024
  c->r[7]=0u+0x00000001u; // 803E6028
  c->r[5]=c->r[0]+c->r[5]; // 803E602C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E6030
  W32(c->r[5]+0x00000034u,c->r[7]); // 803E6034
  cmps(c,0,(int32_t)c->r[6],0); // 803E6038
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E603C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E6040
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,4,ea,0,0);} // 803E6044
  c->r[5]=rotl(c->r[5],6)&0xFFFFFFC0u; // 803E6048
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E604C
  c->r[5]=c->r[0]+c->r[5]; // 803E6050
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,3,ea,0,0);} // 803E6054
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,2,ea,0,0);} // 803E6058
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[1]);} // 803E605C
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E6060
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E6064
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803E6068
  c->r[3]=rotl(c->r[3],6)&0xFFFFFFC0u; // 803E606C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E6070
  c->r[3]=c->r[0]+c->r[3]; // 803E6074
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 803E6078
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 803E607C
  if (crb(c,2)) { goto L_803E60A8; } // 803E6080
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E6084
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,0,ea,0,0);} // 803E6088
  c->r[3]=rotl(c->r[3],6)&0xFFFFFFC0u; // 803E608C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E6090
  c->r[3]=c->r[0]+c->r[3]; // 803E6094
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 803E6098
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 803E609C
  W32(c->r[3]+0x00000038u,c->r[7]); // 803E60A0
  goto L_803E60BC; // 803E60A4
L_803E60A8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E60A8
  c->r[5]=0u+0x00000000u; // 803E60AC
  c->r[3]=rotl(c->r[3],6)&0xFFFFFFC0u; // 803E60B0
  c->r[3]=c->r[0]+c->r[3]; // 803E60B4
  W32(c->r[3]+0x00000038u,c->r[5]); // 803E60B8
L_803E60BC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E60BC
  W16(c->r[4]+0x000000A4u,c->r[0]); // 803E60C0
L_803E60C4:;
  c->r[1]=c->r[1]+0x00000040u; // 803E60C4
  return; // 803E60C8
}

// fn_803E60CC
void f_803E60CC(Ctx* __restrict c) {
  trace_call(0x803E60CCu);
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E60CC
  c->r[0]=R32(c->r[4]+0x000000A8u); // 803E60D0
  c->r[3]=c->r[3]+0x00000001u; // 803E60D4
  W16(c->r[4]+0x000000A6u,c->r[3]); // 803E60D8
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803E60DC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803E60E0
  if (crb(c,0)) { goto L_803E60F0; } // 803E60E4
  c->r[0]=0u+0x00000000u; // 803E60E8
  W16(c->r[4]+0x000000A6u,c->r[0]); // 803E60EC
L_803E60F0:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E60F0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E60F4
  if (crb(c,2)) { goto L_803E6108; } // 803E60F8
  c->r[5]=R32(c->r[4]+0x000000B4u); // 803E60FC
  cmps(c,0,(int32_t)c->r[5],0); // 803E6100
  if (!crb(c,2)) { goto L_803E6110; } // 803E6104
L_803E6108:;
  c->r[5]=0u+0x00000000u; // 803E6108
  goto L_803E6114; // 803E610C
L_803E6110:;
  c->r[5]=c->r[5]+0x00000004u; // 803E6110
L_803E6114:;
  cmps(c,0,(int32_t)c->r[5],0); // 803E6114
  if (crb(c,2)) return; // 803E6118
  c->r[0]=R32(c->r[4]+0x000000A8u); // 803E611C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803E6120
  if (!crb(c,0)) return; // 803E6124
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 803E6128
  c->r[5]=c->r[5]+c->r[0]; // 803E612C
  c->r[0]=R32(c->r[5]+0x00000034u); // 803E6130
  cmps(c,0,(int32_t)c->r[0],0); // 803E6134
  if (crb(c,2)) return; // 803E6138
  c->r[4]=R32(c->r[4]+0x000000B4u); // 803E613C
  c->r[0]=0u+0x00000000u; // 803E6140
  c->r[3]=R32(c->r[4]+0x00000000u); // 803E6144
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803E6148
  W32(c->r[4]+0x00000000u,c->r[3]); // 803E614C
  W32(c->r[5]+0x00000034u,c->r[0]); // 803E6150
  return; // 803E6154
}

// fn_803E6158
void f_803E6158(Ctx* __restrict c) {
  trace_call(0x803E6158u);
  c->r[6]=R32(c->r[4]+0x000000A8u); // 803E6158
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803E615C
  c->r[3]=c->r[6]-c->r[5]; // 803E6160
  c->r[7]=c->r[0]-c->r[3]; cr0(c,c->r[7]); // 803E6164
  if (!crb(c,0)) { goto L_803E6170; } // 803E6168
  c->r[7]=c->r[7]+c->r[6]; // 803E616C
L_803E6170:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E6170
  if (crb(c,2)) { goto L_803E6184; } // 803E6174
  c->r[3]=R32(c->r[4]+0x000000B4u); // 803E6178
  cmps(c,0,(int32_t)c->r[3],0); // 803E617C
  if (!crb(c,2)) { goto L_803E618C; } // 803E6180
L_803E6184:;
  c->r[3]=0u+0x00000000u; // 803E6184
  goto L_803E6190; // 803E6188
L_803E618C:;
  c->r[3]=c->r[3]+0x00000004u; // 803E618C
L_803E6190:;
  cmps(c,0,(int32_t)c->r[3],0); // 803E6190
  if (crb(c,2)) { goto L_803E61CC; } // 803E6194
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 803E6198
  if (!crb(c,0)) { goto L_803E61CC; } // 803E619C
  c->r[0]=rotl(c->r[7],6)&0xFFFFFFC0u; // 803E61A0
  c->r[6]=c->r[3]+c->r[0]; // 803E61A4
  c->r[0]=R32(c->r[6]+0x00000034u); // 803E61A8
  cmps(c,0,(int32_t)c->r[0],0); // 803E61AC
  if (crb(c,2)) { goto L_803E61CC; } // 803E61B0
  c->r[5]=R32(c->r[4]+0x000000B4u); // 803E61B4
  c->r[0]=0u+0x00000000u; // 803E61B8
  c->r[3]=R32(c->r[5]+0x00000000u); // 803E61BC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803E61C0
  W32(c->r[5]+0x00000000u,c->r[3]); // 803E61C4
  W32(c->r[6]+0x00000034u,c->r[0]); // 803E61C8
L_803E61CC:;
  c->r[0]=R32(c->r[4]+0x000000A8u); // 803E61CC
  c->r[7]=c->r[7]+0x00000001u; // 803E61D0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 803E61D4
  if (crb(c,0)) { goto L_803E61E0; } // 803E61D8
  c->r[7]=0u+0x00000000u; // 803E61DC
L_803E61E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E61E0
  if (crb(c,2)) { goto L_803E61F4; } // 803E61E4
  c->r[3]=R32(c->r[4]+0x000000B4u); // 803E61E8
  cmps(c,0,(int32_t)c->r[3],0); // 803E61EC
  if (!crb(c,2)) { goto L_803E61FC; } // 803E61F0
L_803E61F4:;
  c->r[3]=0u+0x00000000u; // 803E61F4
  goto L_803E6200; // 803E61F8
L_803E61FC:;
  c->r[3]=c->r[3]+0x00000004u; // 803E61FC
L_803E6200:;
  cmps(c,0,(int32_t)c->r[3],0); // 803E6200
  if (crb(c,2)) return; // 803E6204
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 803E6208
  if (!crb(c,0)) return; // 803E620C
  c->r[0]=rotl(c->r[7],6)&0xFFFFFFC0u; // 803E6210
  c->r[5]=c->r[3]+c->r[0]; // 803E6214
  c->r[0]=R32(c->r[5]+0x00000034u); // 803E6218
  cmps(c,0,(int32_t)c->r[0],0); // 803E621C
  if (crb(c,2)) return; // 803E6220
  c->r[4]=R32(c->r[4]+0x000000B4u); // 803E6224
  c->r[0]=0u+0x00000000u; // 803E6228
  c->r[3]=R32(c->r[4]+0x00000000u); // 803E622C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803E6230
  W32(c->r[4]+0x00000000u,c->r[3]); // 803E6234
  W32(c->r[5]+0x00000034u,c->r[0]); // 803E6238
  return; // 803E623C
}

// fn_803E6240
void f_803E6240(Ctx* __restrict c) {
  trace_call(0x803E6240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6240
  c->r[0]=R32(c->r[3]+0x000000C8u); // 803E6244
  cmps(c,0,(int32_t)c->r[0],0); // 803E6248
  if (!crb(c,2)) { goto L_803E6294; } // 803E624C
  c->r[3]=R32(c->r[4]+0x000000B4u); // 803E6250
  cmps(c,0,(int32_t)c->r[3],0); // 803E6254
  if (crb(c,2)) { goto L_803E6288; } // 803E6258
  c->r[3]=R32(c->r[3]+0x00000000u); // 803E625C
  c->r[0]=0u+0x43300000u; // 803E6260
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E6264
  c->r[0]=c->r[3]+0x00000002u; // 803E6268
  {uint32_t ea=c->r[2]+0xFFFFA770u; c->f[1]=RF64(ea);} // 803E626C
  c->r[0]=c->r[0]^0x80000000u; // 803E6270
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E6274
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E6278
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803E627C
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803E6280
  goto L_803E62B8; // 803E6284
L_803E6288:;
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6288
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803E628C
  goto L_803E62B8; // 803E6290
L_803E6294:;
  c->r[3]=R32(c->r[3]+0x000000D4u); // 803E6294
  c->r[0]=0u+0x43300000u; // 803E6298
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E629C
  c->r[0]=c->r[3]^0x80000000u; // 803E62A0
  {uint32_t ea=c->r[2]+0xFFFFA770u; c->f[1]=RF64(ea);} // 803E62A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E62A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E62AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803E62B0
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803E62B4
L_803E62B8:;
  c->r[1]=c->r[1]+0x00000010u; // 803E62B8
  return; // 803E62BC
}

// fn_803E62C0
void f_803E62C0(Ctx* __restrict c) {
  trace_call(0x803E62C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E62C0
  c->r[0]=c->lr; // 803E62C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E62C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E62CC
  c->r[31]=c->r[4]|c->r[4]; // 803E62D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E62D4
  c->r[30]=c->r[3]|c->r[3]; // 803E62D8
  c->lr=0x803E62E0u; f_803E6B50(c); // 803E62DC
  c->r[3]=R32(c->r[30]+0x000000ACu); // 803E62E0
  cmps(c,0,(int32_t)c->r[3],0); // 803E62E4
  if (crb(c,2)) { goto L_803E6300; } // 803E62E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E62EC
  c->r[4]=c->r[31]|c->r[31]; // 803E62F0
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E62F4
  c->ctr=c->r[12]; // 803E62F8
  if (true) { c->lr=0x803E6300u; dispatch(c,c->ctr); } // 803E62FC
L_803E6300:;
  c->r[3]=R32(c->r[30]+0x000000CCu); // 803E6300
  cmps(c,0,(int32_t)c->r[3],0); // 803E6304
  if (crb(c,2)) { goto L_803E6320; } // 803E6308
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E630C
  c->r[4]=c->r[31]|c->r[31]; // 803E6310
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E6314
  c->ctr=c->r[12]; // 803E6318
  if (true) { c->lr=0x803E6320u; dispatch(c,c->ctr); } // 803E631C
L_803E6320:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6324
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E6328
  c->lr=c->r[0]; // 803E632C
  c->r[1]=c->r[1]+0x00000010u; // 803E6330
  return; // 803E6334
}

// fn_803E6338
void f_803E6338(Ctx* __restrict c) {
  trace_call(0x803E6338u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6338
  c->r[0]=c->lr; // 803E633C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E6340
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6344
  c->r[31]=c->r[3]|c->r[3]; // 803E6348
  c->r[4]=R32(c->r[3]+0x000000ACu); // 803E634C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803E6350
  cmps(c,0,(int32_t)c->r[4],0); // 803E6354
  c->r[0]=c->r[0]|0x00000008u; // 803E6358
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 803E635C
  if (crb(c,2)) { goto L_803E6378; } // 803E6360
  c->r[12]=R32(c->r[4]+0x00000000u); // 803E6364
  c->r[3]=c->r[4]|c->r[4]; // 803E6368
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E636C
  c->ctr=c->r[12]; // 803E6370
  if (true) { c->lr=0x803E6378u; dispatch(c,c->ctr); } // 803E6374
L_803E6378:;
  c->r[3]=R32(c->r[31]+0x000000CCu); // 803E6378
  cmps(c,0,(int32_t)c->r[3],0); // 803E637C
  if (crb(c,2)) { goto L_803E6394; } // 803E6380
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6384
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E6388
  c->ctr=c->r[12]; // 803E638C
  if (true) { c->lr=0x803E6394u; dispatch(c,c->ctr); } // 803E6390
L_803E6394:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6398
  c->lr=c->r[0]; // 803E639C
  c->r[1]=c->r[1]+0x00000010u; // 803E63A0
  return; // 803E63A4
}

// fn_803E63A8
void f_803E63A8(Ctx* __restrict c) {
  trace_call(0x803E63A8u);
  return; // 803E63A8
}

// fn_803E63AC
void f_803E63AC(Ctx* __restrict c) {
  trace_call(0x803E63ACu);
  return; // 803E63AC
}

// fn_803E63B0
void f_803E63B0(Ctx* __restrict c) {
  trace_call(0x803E63B0u);
  return; // 803E63B0
}

// fn_803E63B4
void f_803E63B4(Ctx* __restrict c) {
  trace_call(0x803E63B4u);
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E63B4
  return; // 803E63B8
}

// fn_803E63BC
void f_803E63BC(Ctx* __restrict c) {
  trace_call(0x803E63BCu);
  return; // 803E63BC
}

// fn_803E63C0
void f_803E63C0(Ctx* __restrict c) {
  trace_call(0x803E63C0u);
  c->r[3]=0u+0x00000000u; // 803E63C0
  return; // 803E63C4
}

// fn_803E63C8
void f_803E63C8(Ctx* __restrict c) {
  trace_call(0x803E63C8u);
  c->r[3]=0u+0x00000001u; // 803E63C8
  return; // 803E63CC
}

// fn_803E63D0
void f_803E63D0(Ctx* __restrict c) {
  trace_call(0x803E63D0u);
  return; // 803E63D0
}

// fn_803E63D4
void f_803E63D4(Ctx* __restrict c) {
  trace_call(0x803E63D4u);
  return; // 803E63D4
}

// fn_803E63D8
void f_803E63D8(Ctx* __restrict c) {
  trace_call(0x803E63D8u);
  return; // 803E63D8
}

// fn_803E63DC
void f_803E63DC(Ctx* __restrict c) {
  trace_call(0x803E63DCu);
  return; // 803E63DC
}

// fn_803E63E0
void f_803E63E0(Ctx* __restrict c) {
  trace_call(0x803E63E0u);
  c->r[3]=0u+0x00000000u; // 803E63E0
  return; // 803E63E4
}

// fn_803E63E8
void f_803E63E8(Ctx* __restrict c) {
  trace_call(0x803E63E8u);
  c->r[3]=0u+0x00000000u; // 803E63E8
  return; // 803E63EC
}

// fn_803E63F0
void f_803E63F0(Ctx* __restrict c) {
  trace_call(0x803E63F0u);
  return; // 803E63F0
}

// fn_803E63F4
void f_803E63F4(Ctx* __restrict c) {
  trace_call(0x803E63F4u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E63F4
  c->r[0]=0u+0x00000000u; // 803E63F8
  c->r[5]=R32(c->r[3]+0x000000ACu); // 803E63FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E6400
  cmps(c,0,(int32_t)c->r[5],0); // 803E6404
  if (crb(c,2)) { goto L_803E6418; } // 803E6408
  c->r[0]=0u+0x00000001u; // 803E640C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803E6410
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E6414
L_803E6418:;
  c->r[7]=R32(c->r[3]+0x000000CCu); // 803E6418
  cmps(c,0,(int32_t)c->r[7],0); // 803E641C
  if (crb(c,2)) { goto L_803E643C; } // 803E6420
  c->r[6]=R32(c->r[1]+0x00000008u); // 803E6424
  c->r[5]=c->r[1]+0x0000000Cu; // 803E6428
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803E642C
  c->r[6]=c->r[6]+0x00000001u; // 803E6430
  W32(c->r[5]+c->r[0],c->r[7]); // 803E6434
  W32(c->r[1]+0x00000008u,c->r[6]); // 803E6438
L_803E643C:;
  c->r[7]=R32(c->r[3]+0x000000E8u); // 803E643C
  cmps(c,0,(int32_t)c->r[7],0); // 803E6440
  if (crb(c,2)) { goto L_803E6460; } // 803E6444
  c->r[6]=R32(c->r[1]+0x00000008u); // 803E6448
  c->r[5]=c->r[1]+0x0000000Cu; // 803E644C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803E6450
  c->r[6]=c->r[6]+0x00000001u; // 803E6454
  W32(c->r[5]+c->r[0],c->r[7]); // 803E6458
  W32(c->r[1]+0x00000008u,c->r[6]); // 803E645C
L_803E6460:;
  c->r[6]=R32(c->r[3]+0x00000108u); // 803E6460
  cmps(c,0,(int32_t)c->r[6],0); // 803E6464
  if (crb(c,2)) { goto L_803E6484; } // 803E6468
  c->r[5]=R32(c->r[1]+0x00000008u); // 803E646C
  c->r[3]=c->r[1]+0x0000000Cu; // 803E6470
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803E6474
  c->r[5]=c->r[5]+0x00000001u; // 803E6478
  W32(c->r[3]+c->r[0],c->r[6]); // 803E647C
  W32(c->r[1]+0x00000008u,c->r[5]); // 803E6480
L_803E6484:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803E6484
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803E6488
  if (crb(c,0)) { goto L_803E6498; } // 803E648C
  c->r[3]=0u+0x00000000u; // 803E6490
  goto L_803E64A4; // 803E6494
L_803E6498:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803E6498
  c->r[3]=c->r[1]+0x0000000Cu; // 803E649C
  c->r[3]=R32(c->r[3]+c->r[0]); // 803E64A0
L_803E64A4:;
  c->r[1]=c->r[1]+0x000001A0u; // 803E64A4
  return; // 803E64A8
}

// fn_803E64AC
void f_803E64AC(Ctx* __restrict c) {
  trace_call(0x803E64ACu);
  c->r[0]=R32(c->r[3]+0x000000ACu); // 803E64AC
  cmpu(c,0,c->r[0],c->r[4]); // 803E64B0
  if (!crb(c,2)) { goto L_803E64C0; } // 803E64B4
  c->r[0]=0u+0x00000000u; // 803E64B8
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803E64BC
L_803E64C0:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 803E64C0
  cmpu(c,0,c->r[0],c->r[4]); // 803E64C4
  if (!crb(c,2)) { goto L_803E64D4; } // 803E64C8
  c->r[0]=0u+0x00000000u; // 803E64CC
  W32(c->r[3]+0x000000CCu,c->r[0]); // 803E64D0
L_803E64D4:;
  c->r[0]=R32(c->r[3]+0x000000E8u); // 803E64D4
  cmpu(c,0,c->r[0],c->r[4]); // 803E64D8
  if (!crb(c,2)) { goto L_803E64E8; } // 803E64DC
  c->r[0]=0u+0x00000000u; // 803E64E0
  W32(c->r[3]+0x000000E8u,c->r[0]); // 803E64E4
L_803E64E8:;
  c->r[0]=R32(c->r[3]+0x00000108u); // 803E64E8
  cmpu(c,0,c->r[0],c->r[4]); // 803E64EC
  if (!crb(c,2)) return; // 803E64F0
  c->r[0]=0u+0x00000000u; // 803E64F4
  W32(c->r[3]+0x00000108u,c->r[0]); // 803E64F8
  return; // 803E64FC
}

// fn_803E6500
void f_803E6500(Ctx* __restrict c) {
  trace_call(0x803E6500u);
  c->r[3]=R32(c->r[3]+0x00000098u); // 803E6500
  return; // 803E6504
}

// fn_803E6508
void f_803E6508(Ctx* __restrict c) {
  trace_call(0x803E6508u);
  c->r[3]=0u+0x00000008u; // 803E6508
  return; // 803E650C
}

// fn_803E6510
void f_803E6510(Ctx* __restrict c) {
  trace_call(0x803E6510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6510
  c->r[0]=c->lr; // 803E6514
  cmps(c,0,(int32_t)c->r[3],0); // 803E6518
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E651C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6520
  c->r[31]=c->r[4]|c->r[4]; // 803E6524
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E6528
  c->r[30]=c->r[3]|c->r[3]; // 803E652C
  if (crb(c,2)) { goto L_803E654C; } // 803E6530
  c->r[4]=0u+0x00000000u; // 803E6534
  c->lr=0x803E653Cu; f_803E6A10(c); // 803E6538
  cmps(c,0,(int32_t)c->r[31],0); // 803E653C
  if (!crb(c,1)) { goto L_803E654C; } // 803E6540
  c->r[3]=c->r[30]|c->r[30]; // 803E6544
  c->lr=0x803E654Cu; f_803FE694(c); // 803E6548
L_803E654C:;
  c->r[3]=c->r[30]|c->r[30]; // 803E654C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6550
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E6554
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6558
  c->lr=c->r[0]; // 803E655C
  c->r[1]=c->r[1]+0x00000010u; // 803E6560
  return; // 803E6564
}

// fn_803E6568
void f_803E6568(Ctx* __restrict c) {
  trace_call(0x803E6568u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6568
  c->r[4]=0u+0x80570000u; // 803E656C
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E6570
  c->r[3]=c->r[4]+0x00002B30u; // 803E6574
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6578
  c->r[11]=0u+0x80570000u; // 803E657C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803E6580
  c->r[9]=c->r[1]+0x00000028u; // 803E6584
  c->r[10]=c->r[1]+0x00000030u; // 803E6588
  c->r[5]=c->r[1]+0x00000008u; // 803E658C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803E6590
  c->r[7]=c->r[1]+0x00000018u; // 803E6594
  c->r[8]=c->r[1]+0x00000020u; // 803E6598
  c->r[6]=c->r[1]+0x00000010u; // 803E659C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E65A0
  c->r[11]=c->r[11]+0x00002B40u; // 803E65A4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E65A8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803E65AC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E65B0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803E65B4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803E65B8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803E65BC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803E65C0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803E65C4
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 803E65C8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803E65CC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803E65D0
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E65D4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803E65D8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803E65DC
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 803E65E0
  {uint32_t ea=c->r[4]+0x00002B30u; WF32(ea,c->f[1]);} // 803E65E4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803E65E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803E65EC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803E65F0
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E65F4
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 803E65F8
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 803E65FC
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 803E6600
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 803E6604
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 803E6608
  c->r[1]=c->r[1]+0x00000040u; // 803E660C
  return; // 803E6610
}

// fn_803E6614
void f_803E6614(Ctx* __restrict c) {
  trace_call(0x803E6614u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6614
  c->r[0]=c->lr; // 803E6618
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E661C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6620
  c->r[31]=c->r[3]|c->r[3]; // 803E6624
  c->r[0]=R32(c->r[3]+0x000000B4u); // 803E6628
  cmps(c,0,(int32_t)c->r[0],0); // 803E662C
  if (crb(c,2)) { goto L_803E6674; } // 803E6630
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803E6634
  cmps(c,0,(int32_t)c->r[3],0); // 803E6638
  if (crb(c,2)) { goto L_803E665C; } // 803E663C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6640
  c->r[4]=c->r[31]|c->r[31]; // 803E6644
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 803E6648
  c->ctr=c->r[12]; // 803E664C
  if (true) { c->lr=0x803E6654u; dispatch(c,c->ctr); } // 803E6650
  cmps(c,0,(int32_t)c->r[3],0); // 803E6654
  if (crb(c,2)) { goto L_803E6674; } // 803E6658
L_803E665C:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803E665C
  c->r[4]=R32(c->r[31]+0x000000B4u); // 803E6660
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6664
  c->r[12]=R32(c->r[12]+0x000000D8u); // 803E6668
  c->ctr=c->r[12]; // 803E666C
  if (true) { c->lr=0x803E6674u; dispatch(c,c->ctr); } // 803E6670
L_803E6674:;
  c->r[3]=R32(c->r[31]+0x00000070u); // 803E6674
  cmps(c,0,(int32_t)c->r[3],0); // 803E6678
  if (crb(c,2)) { goto L_803E6690; } // 803E667C
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E6680
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6684
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803E6688
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 803E668C
L_803E6690:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 803E6690
  cmps(c,0,(int32_t)c->r[3],0); // 803E6694
  if (crb(c,2)) { goto L_803E66B4; } // 803E6698
  c->lr=0x803E66A0u; f_803FBBE8(c); // 803E669C
  c->r[3]=R32(c->r[31]+0x00000074u); // 803E66A0
  c->r[4]=0u+0x00000001u; // 803E66A4
  c->lr=0x803E66ACu; f_803FB88C(c); // 803E66A8
  c->r[0]=0u+0x00000000u; // 803E66AC
  W32(c->r[31]+0x00000074u,c->r[0]); // 803E66B0
L_803E66B4:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 803E66B4
  cmps(c,0,(int32_t)c->r[3],0); // 803E66B8
  if (crb(c,2)) { goto L_803E66F4; } // 803E66BC
  c->r[4]=R32(c->r[31]+0x00000000u); // 803E66C0
  cmps(c,0,(int32_t)c->r[4],0); // 803E66C4
  if (crb(c,2)) { goto L_803E66EC; } // 803E66C8
  c->r[0]=R32(c->r[31]+0x00000004u); // 803E66CC
  cmps(c,0,(int32_t)c->r[0],0); // 803E66D0
  if (crb(c,2)) { goto L_803E66EC; } // 803E66D4
  W32(c->r[4]+0x00000004u,c->r[0]); // 803E66D8
  c->r[3]=R32(c->r[31]+0x00000004u); // 803E66DC
  c->r[0]=R32(c->r[31]+0x00000000u); // 803E66E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 803E66E4
  goto L_803E66F4; // 803E66E8
L_803E66EC:;
  c->r[4]=c->r[31]|c->r[31]; // 803E66EC
  c->lr=0x803E66F4u; f_803E7BD8(c); // 803E66F0
L_803E66F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E66F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E66F8
  c->lr=c->r[0]; // 803E66FC
  c->r[1]=c->r[1]+0x00000010u; // 803E6700
  return; // 803E6704
}

// fn_803E6708
void f_803E6708(Ctx* __restrict c) {
  trace_call(0x803E6708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6708
  c->r[0]=c->lr; // 803E670C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E6710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6714
  c->r[31]=c->r[4]|c->r[4]; // 803E6718
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E671C
  c->r[30]=c->r[3]|c->r[3]; // 803E6720
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 803E6724
  cmps(c,0,(int32_t)c->r[0],0); // 803E6728
  if (crb(c,2)) { goto L_803E673C; } // 803E672C
  c->r[3]=c->r[0]|c->r[0]; // 803E6730
  c->r[4]=c->r[30]|c->r[30]; // 803E6734
  c->lr=0x803E673Cu; f_803E7BD8(c); // 803E6738
L_803E673C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E673C
  W32(c->r[30]+0x0000006Cu,c->r[31]); // 803E6740
  if (crb(c,2)) { goto L_803E6754; } // 803E6744
  c->r[3]=c->r[31]|c->r[31]; // 803E6748
  c->r[4]=c->r[30]|c->r[30]; // 803E674C
  c->lr=0x803E6754u; f_803E7B48(c); // 803E6750
L_803E6754:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6754
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6758
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E675C
  c->lr=c->r[0]; // 803E6760
  c->r[1]=c->r[1]+0x00000010u; // 803E6764
  return; // 803E6768
}

// fn_803E676C
void f_803E676C(Ctx* __restrict c) {
  trace_call(0x803E676Cu);
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 803E676C
  cmps(c,0,(int32_t)c->r[4],0); // 803E6770
  if (crb(c,2)) { goto L_803E67A0; } // 803E6774
  c->r[3]=R32(c->r[4]+0x00000068u); // 803E6778
  cmps(c,0,(int32_t)c->r[3],0); // 803E677C
  if (!crb(c,2)) return; // 803E6780
  c->r[3]=R8(c->r[4]+0x00000036u); // 803E6784
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 803E6788
  if (!crb(c,2)) { goto L_803E6798; } // 803E678C
  c->r[0]=c->r[3]|0x00000002u; // 803E6790
  W8(c->r[4]+0x00000036u,c->r[0]); // 803E6794
L_803E6798:;
  c->r[3]=0u+0x00000001u; // 803E6798
  return; // 803E679C
L_803E67A0:;
  c->r[3]=0u+0x00000001u; // 803E67A0
  return; // 803E67A4
}

// fn_803E67A8
void f_803E67A8(Ctx* __restrict c) {
  trace_call(0x803E67A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E67A8
  c->r[0]=c->lr; // 803E67AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E67B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E67B4
  c->r[31]=c->r[4]|c->r[4]; // 803E67B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E67BC
  c->r[30]=c->r[3]|c->r[3]; // 803E67C0
  c->r[0]=R32(c->r[3]+0x000000B4u); // 803E67C4
  cmps(c,0,(int32_t)c->r[0],0); // 803E67C8
  if (crb(c,2)) { goto L_803E6810; } // 803E67CC
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803E67D0
  cmps(c,0,(int32_t)c->r[3],0); // 803E67D4
  if (crb(c,2)) { goto L_803E67F8; } // 803E67D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E67DC
  c->r[4]=c->r[30]|c->r[30]; // 803E67E0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 803E67E4
  c->ctr=c->r[12]; // 803E67E8
  if (true) { c->lr=0x803E67F0u; dispatch(c,c->ctr); } // 803E67EC
  cmps(c,0,(int32_t)c->r[3],0); // 803E67F0
  if (crb(c,2)) { goto L_803E6810; } // 803E67F4
L_803E67F8:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803E67F8
  c->r[4]=R32(c->r[30]+0x000000B4u); // 803E67FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6800
  c->r[12]=R32(c->r[12]+0x000000D8u); // 803E6804
  c->ctr=c->r[12]; // 803E6808
  if (true) { c->lr=0x803E6810u; dispatch(c,c->ctr); } // 803E680C
L_803E6810:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803E6810
  c->r[4]=c->r[31]|c->r[31]; // 803E6814
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6818
  c->r[12]=R32(c->r[12]+0x000000D4u); // 803E681C
  c->ctr=c->r[12]; // 803E6820
  if (true) { c->lr=0x803E6828u; dispatch(c,c->ctr); } // 803E6824
  c->r[0]=0u-c->r[3]; // 803E6828
  W32(c->r[30]+0x000000B4u,c->r[3]); // 803E682C
  c->r[0]=c->r[0]|c->r[3]; // 803E6830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6834
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803E6838
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E683C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6840
  c->lr=c->r[0]; // 803E6844
  c->r[1]=c->r[1]+0x00000010u; // 803E6848
  return; // 803E684C
}

// fn_803E6850
void f_803E6850(Ctx* __restrict c) {
  trace_call(0x803E6850u);
  c->r[5]=R32(c->r[3]+0x00000068u); // 803E6850
  cmps(c,0,(int32_t)c->r[5],0); // 803E6854
  if (crb(c,2)) { goto L_803E68E0; } // 803E6858
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,3,ea,0,0);} // 803E685C
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,0,ea,0,0);} // 803E6860
  {uint32_t ea=c->r[5]+0x00000030u; psq_load(c,1,ea,0,0);} // 803E6864
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E6868
  {uint32_t ea=c->r[5]+0x00000040u; psq_load(c,2,ea,0,0);} // 803E686C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E6870
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E6874
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803E6878
  {uint32_t ea=c->r[5]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E687C
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803E6880
  {uint32_t ea=c->r[5]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 803E6884
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803E6888
  {uint32_t ea=c->r[5]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E688C
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803E6890
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803E6894
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E6898
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803E689C
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803E68A0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 803E68A4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803E68A8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803E68AC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 803E68B0
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 803E68B4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E68B8
  c->r[3]=R32(c->r[3]+0x00000068u); // 803E68BC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 803E68C0
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 803E68C4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 803E68C8
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803E68CC
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803E68D0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E68D4
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 803E68D8
  return; // 803E68DC
L_803E68E0:;
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,1,ea,0,0);} // 803E68E0
  {uint32_t ea=c->r[3]+0x00000040u; psq_load(c,0,ea,0,0);} // 803E68E4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,0,0);} // 803E68E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E68EC
  return; // 803E68F0
}

// fn_803E68F4
void f_803E68F4(Ctx* __restrict c) {
  trace_call(0x803E68F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E68F4
  c->r[0]=c->lr; // 803E68F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E68FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6900
  c->r[31]=c->r[3]|c->r[3]; // 803E6904
  c->r[0]=R32(c->r[3]+0x00000074u); // 803E6908
  cmps(c,0,(int32_t)c->r[0],0); // 803E690C
  if (!crb(c,2)) { goto L_803E692C; } // 803E6910
  c->r[3]=0u+0x00000010u; // 803E6914
  c->lr=0x803E691Cu; f_803FE6C4(c); // 803E6918
  cmps(c,0,(int32_t)c->r[3],0); // 803E691C
  if (crb(c,2)) { goto L_803E6928; } // 803E6920
  c->lr=0x803E6928u; f_803FB870(c); // 803E6924
L_803E6928:;
  W32(c->r[31]+0x00000074u,c->r[3]); // 803E6928
L_803E692C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E692C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6930
  c->lr=c->r[0]; // 803E6934
  c->r[1]=c->r[1]+0x00000010u; // 803E6938
  return; // 803E693C
}

// fn_803E6940
void f_803E6940(Ctx* __restrict c) {
  trace_call(0x803E6940u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6940
  c->r[4]=0u+0x80570000u; // 803E6944
  {uint32_t ea=c->r[2]+0xFFFFA7BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E6948
  c->r[3]=c->r[4]+0x00002B70u; // 803E694C
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6950
  c->r[11]=0u+0x80570000u; // 803E6954
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803E6958
  c->r[9]=c->r[1]+0x00000028u; // 803E695C
  c->r[10]=c->r[1]+0x00000030u; // 803E6960
  c->r[5]=c->r[1]+0x00000008u; // 803E6964
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803E6968
  c->r[7]=c->r[1]+0x00000018u; // 803E696C
  c->r[8]=c->r[1]+0x00000020u; // 803E6970
  c->r[6]=c->r[1]+0x00000010u; // 803E6974
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E6978
  c->r[11]=c->r[11]+0x00002B80u; // 803E697C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E6980
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803E6984
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E6988
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803E698C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803E6990
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803E6994
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803E6998
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803E699C
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 803E69A0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803E69A4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803E69A8
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E69AC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803E69B0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803E69B4
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 803E69B8
  {uint32_t ea=c->r[4]+0x00002B70u; WF32(ea,c->f[1]);} // 803E69BC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803E69C0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803E69C4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803E69C8
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E69CC
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 803E69D0
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 803E69D4
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 803E69D8
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 803E69DC
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 803E69E0
  c->r[1]=c->r[1]+0x00000040u; // 803E69E4
  return; // 803E69E8
}

// fn_803E69EC
void f_803E69EC(Ctx* __restrict c) {
  trace_call(0x803E69ECu);
  c->r[0]=R32(c->r[13]+0xFFFFC1E0u); // 803E69EC
  c->r[4]=0u+0x00000001u; // 803E69F0
  c->r[3]=R32(c->r[3]+0x00000068u); // 803E69F4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 803E69F8
  c->r[3]=c->r[3]&c->r[0]; // 803E69FC
  c->r[0]=0u-c->r[3]; // 803E6A00
  c->r[0]=c->r[0]|c->r[3]; // 803E6A04
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803E6A08
  return; // 803E6A0C
}

// fn_803E6A10
void f_803E6A10(Ctx* __restrict c) {
  trace_call(0x803E6A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6A10
  c->r[0]=c->lr; // 803E6A14
  cmps(c,0,(int32_t)c->r[3],0); // 803E6A18
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E6A1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6A20
  c->r[31]=c->r[4]|c->r[4]; // 803E6A24
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E6A28
  c->r[30]=c->r[3]|c->r[3]; // 803E6A2C
  if (crb(c,2)) { goto L_803E6A68; } // 803E6A30
  c->r[0]=R32(c->r[3]+0x00000080u); // 803E6A34
  c->r[4]=0u+0x80470000u; // 803E6A38
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803E6A3C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803E6A40
  cmps(c,0,(int32_t)c->r[0],0); // 803E6A44
  if (crb(c,2)) { goto L_803E6A58; } // 803E6A48
  c->r[3]=c->r[0]|c->r[0]; // 803E6A4C
  c->r[4]=0u+0x00000001u; // 803E6A50
  c->lr=0x803E6A58u; f_80402948(c); // 803E6A54
L_803E6A58:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E6A58
  if (!crb(c,1)) { goto L_803E6A68; } // 803E6A5C
  c->r[3]=c->r[30]|c->r[30]; // 803E6A60
  c->lr=0x803E6A68u; f_803FE694(c); // 803E6A64
L_803E6A68:;
  c->r[3]=c->r[30]|c->r[30]; // 803E6A68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6A6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E6A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6A74
  c->lr=c->r[0]; // 803E6A78
  c->r[1]=c->r[1]+0x00000010u; // 803E6A7C
  return; // 803E6A80
}

// fn_803E6A84
void f_803E6A84(Ctx* __restrict c) {
  trace_call(0x803E6A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6A84
  c->r[0]=c->lr; // 803E6A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E6A8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6A90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803E6A94
  c->ctr=c->r[12]; // 803E6A98
  if (true) { c->lr=0x803E6AA0u; dispatch(c,c->ctr); } // 803E6A9C
  cmpu(c,0,c->r[3],0x0000000Fu); // 803E6AA0
  if (crb(c,1)) { goto L_803E6AD0; } // 803E6AA4
  c->r[4]=0u+0x80470000u; // 803E6AA8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803E6AAC
  c->r[4]=c->r[4]+0xFFFF94C0u; // 803E6AB0
  c->r[4]=R32(c->r[4]+c->r[0]); // 803E6AB4
  c->ctr=c->r[4]; // 803E6AB8
  if (true) { switch (c->ctr) { case 0x803E6AC0u: goto L_803E6AC0; case 0x803E6AC8u: goto L_803E6AC8; case 0x803E6AD0u: goto L_803E6AD0; default: break; } dispatch(c,c->ctr); return; } // 803E6ABC
L_803E6AC0:;
  c->r[3]=0u+0x00000000u; // 803E6AC0
  goto L_803E6AD4; // 803E6AC4
L_803E6AC8:;
  c->r[3]=0u+0x00000001u; // 803E6AC8
  goto L_803E6AD4; // 803E6ACC
L_803E6AD0:;
  c->r[3]=0u+0x00000000u; // 803E6AD0
L_803E6AD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6AD4
  c->lr=c->r[0]; // 803E6AD8
  c->r[1]=c->r[1]+0x00000010u; // 803E6ADC
  return; // 803E6AE0
}

// fn_803E6AE4
void f_803E6AE4(Ctx* __restrict c) {
  trace_call(0x803E6AE4u);
  c->r[0]=R32(c->r[13]+0xFFFFDEACu); // 803E6AE4
  cmps(c,0,(int32_t)c->r[0],0); // 803E6AE8
  if (!crb(c,2)) { goto L_803E6B08; } // 803E6AEC
  c->r[3]=R32(c->r[3]+0x00000064u); // 803E6AF0
  c->r[0]=R32(c->r[13]+0xFFFFF400u); // 803E6AF4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803E6AF8
  if (!crb(c,2)) { goto L_803E6B48; } // 803E6AFC
  c->r[3]=0u+0x00000001u; // 803E6B00
  return; // 803E6B04
L_803E6B08:;
  cmps(c,0,(int32_t)c->r[0],2); // 803E6B08
  if (!crb(c,2)) { goto L_803E6B28; } // 803E6B0C
  c->r[3]=R32(c->r[3]+0x00000064u); // 803E6B10
  c->r[0]=R32(c->r[13]+0xFFFFF400u); // 803E6B14
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803E6B18
  if (crb(c,0)) { goto L_803E6B48; } // 803E6B1C
  c->r[3]=0u+0x00000001u; // 803E6B20
  return; // 803E6B24
L_803E6B28:;
  cmps(c,0,(int32_t)c->r[0],1); // 803E6B28
  if (!crb(c,2)) { goto L_803E6B48; } // 803E6B2C
  c->r[3]=R32(c->r[3]+0x00000064u); // 803E6B30
  c->r[0]=R32(c->r[13]+0xFFFFF400u); // 803E6B34
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803E6B38
  if (!crb(c,1)) { goto L_803E6B48; } // 803E6B3C
  c->r[3]=0u+0x00000001u; // 803E6B40
  return; // 803E6B44
L_803E6B48:;
  c->r[3]=0u+0x00000000u; // 803E6B48
  return; // 803E6B4C
}

// fn_803E6B50
void f_803E6B50(Ctx* __restrict c) {
  trace_call(0x803E6B50u);
  W32(c->r[3]+0x00000064u,c->r[4]); // 803E6B50
  return; // 803E6B54
}

// fn_803E6B58
void f_803E6B58(Ctx* __restrict c) {
  trace_call(0x803E6B58u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803E6B58
  c->r[0]=c->r[0]|0x00000008u; // 803E6B5C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 803E6B60
  return; // 803E6B64
}

// fn_803E6B68
void f_803E6B68(Ctx* __restrict c) {
  trace_call(0x803E6B68u);
  W32(c->r[3]+0x00000064u,c->r[4]); // 803E6B68
  return; // 803E6B6C
}

// fn_803E6B70
void f_803E6B70(Ctx* __restrict c) {
  trace_call(0x803E6B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6B70
  c->r[0]=c->lr; // 803E6B74
  W32(c->r[1]+0x00000024u,c->r[0]); // 803E6B78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803E6B7C
  c->r[31]=c->r[3]|c->r[3]; // 803E6B80
  W32(c->r[1]+0x00000018u,c->r[30]); // 803E6B84
  c->r[30]=0u+0x00000000u; // 803E6B88
  W32(c->r[1]+0x00000014u,c->r[29]); // 803E6B8C
  c->r[29]=c->r[4]|c->r[4]; // 803E6B90
  W32(c->r[3]+0x00000064u,c->r[4]); // 803E6B94
L_803E6B98:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 803E6B98
  cmps(c,0,(int32_t)c->r[3],0); // 803E6B9C
  if (crb(c,2)) { goto L_803E6BB8; } // 803E6BA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6BA4
  c->r[4]=c->r[29]|c->r[29]; // 803E6BA8
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E6BAC
  c->ctr=c->r[12]; // 803E6BB0
  if (true) { c->lr=0x803E6BB8u; dispatch(c,c->ctr); } // 803E6BB4
L_803E6BB8:;
  c->r[30]=c->r[30]+0x00000001u; // 803E6BB8
  c->r[31]=c->r[31]+0x00000004u; // 803E6BBC
  cmpu(c,0,c->r[30],0x00000004u); // 803E6BC0
  if (crb(c,0)) { IRQCHK(c); goto L_803E6B98; } // 803E6BC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E6BC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803E6BCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803E6BD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803E6BD4
  c->lr=c->r[0]; // 803E6BD8
  c->r[1]=c->r[1]+0x00000020u; // 803E6BDC
  return; // 803E6BE0
}

// fn_803E6BE4
void f_803E6BE4(Ctx* __restrict c) {
  trace_call(0x803E6BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6BE4
  c->r[0]=c->lr; // 803E6BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E6BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6BF0
  c->r[31]=c->r[3]|c->r[3]; // 803E6BF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E6BF8
  c->r[30]=0u+0x00000000u; // 803E6BFC
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803E6C00
  c->r[0]=c->r[0]|0x00000008u; // 803E6C04
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 803E6C08
L_803E6C0C:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 803E6C0C
  cmps(c,0,(int32_t)c->r[3],0); // 803E6C10
  if (crb(c,2)) { goto L_803E6C28; } // 803E6C14
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6C18
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E6C1C
  c->ctr=c->r[12]; // 803E6C20
  if (true) { c->lr=0x803E6C28u; dispatch(c,c->ctr); } // 803E6C24
L_803E6C28:;
  c->r[30]=c->r[30]+0x00000001u; // 803E6C28
  c->r[31]=c->r[31]+0x00000004u; // 803E6C2C
  cmpu(c,0,c->r[30],0x00000004u); // 803E6C30
  if (crb(c,0)) { IRQCHK(c); goto L_803E6C0C; } // 803E6C34
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6C38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6C3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E6C40
  c->lr=c->r[0]; // 803E6C44
  c->r[1]=c->r[1]+0x00000010u; // 803E6C48
  return; // 803E6C4C
}

// fn_803E6C50
void f_803E6C50(Ctx* __restrict c) {
  trace_call(0x803E6C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6C50
  c->r[0]=c->lr; // 803E6C54
  W32(c->r[1]+0x00000024u,c->r[0]); // 803E6C58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803E6C5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803E6C60
  c->r[30]=0u+0x00000000u; // 803E6C64
  W32(c->r[1]+0x00000014u,c->r[29]); // 803E6C68
  c->r[29]=c->r[4]|c->r[4]; // 803E6C6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803E6C70
  c->r[28]=c->r[3]|c->r[3]; // 803E6C74
  c->r[31]=c->r[28]|c->r[28]; // 803E6C78
  W32(c->r[3]+0x00000064u,c->r[4]); // 803E6C7C
  goto L_803E6CAC; // 803E6C80
L_803E6C84:;
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 803E6C84
  cmps(c,0,(int32_t)c->r[3],0); // 803E6C88
  if (crb(c,2)) { goto L_803E6CA4; } // 803E6C8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6C90
  c->r[4]=c->r[29]|c->r[29]; // 803E6C94
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E6C98
  c->ctr=c->r[12]; // 803E6C9C
  if (true) { c->lr=0x803E6CA4u; dispatch(c,c->ctr); } // 803E6CA0
L_803E6CA4:;
  c->r[31]=c->r[31]+0x0000000Cu; // 803E6CA4
  c->r[30]=c->r[30]+0x00000001u; // 803E6CA8
L_803E6CAC:;
  c->r[0]=R32(c->r[28]+0x00000098u); // 803E6CAC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803E6CB0
  if (crb(c,0)) { IRQCHK(c); goto L_803E6C84; } // 803E6CB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E6CB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803E6CBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803E6CC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803E6CC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 803E6CC8
  c->lr=c->r[0]; // 803E6CCC
  c->r[1]=c->r[1]+0x00000020u; // 803E6CD0
  return; // 803E6CD4
}

// fn_803E6CD8
void f_803E6CD8(Ctx* __restrict c) {
  trace_call(0x803E6CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6CD8
  c->r[0]=c->lr; // 803E6CDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803E6CE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803E6CE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803E6CE8
  c->r[30]=0u+0x00000000u; // 803E6CEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803E6CF0
  c->r[29]=c->r[3]|c->r[3]; // 803E6CF4
  c->r[31]=c->r[29]|c->r[29]; // 803E6CF8
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803E6CFC
  c->r[0]=c->r[0]|0x00000008u; // 803E6D00
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 803E6D04
  goto L_803E6D30; // 803E6D08
L_803E6D0C:;
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 803E6D0C
  cmps(c,0,(int32_t)c->r[3],0); // 803E6D10
  if (crb(c,2)) { goto L_803E6D28; } // 803E6D14
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6D18
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E6D1C
  c->ctr=c->r[12]; // 803E6D20
  if (true) { c->lr=0x803E6D28u; dispatch(c,c->ctr); } // 803E6D24
L_803E6D28:;
  c->r[31]=c->r[31]+0x0000000Cu; // 803E6D28
  c->r[30]=c->r[30]+0x00000001u; // 803E6D2C
L_803E6D30:;
  c->r[0]=R32(c->r[29]+0x00000098u); // 803E6D30
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803E6D34
  if (crb(c,0)) { IRQCHK(c); goto L_803E6D0C; } // 803E6D38
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E6D3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803E6D40
  c->r[30]=R32(c->r[1]+0x00000018u); // 803E6D44
  c->r[29]=R32(c->r[1]+0x00000014u); // 803E6D48
  c->lr=c->r[0]; // 803E6D4C
  c->r[1]=c->r[1]+0x00000020u; // 803E6D50
  return; // 803E6D54
}

// fn_803E6D58
void f_803E6D58(Ctx* __restrict c) {
  trace_call(0x803E6D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6D58
  c->r[0]=c->lr; // 803E6D5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E6D60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6D64
  c->r[31]=c->r[4]|c->r[4]; // 803E6D68
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E6D6C
  c->r[30]=c->r[3]|c->r[3]; // 803E6D70
  c->r[0]=R32(c->r[3]+0x00000098u); // 803E6D74
  W32(c->r[3]+0x00000064u,c->r[4]); // 803E6D78
  cmps(c,0,(int32_t)c->r[0],0); // 803E6D7C
  if (crb(c,2)) { goto L_803E6D98; } // 803E6D80
  c->r[3]=c->r[0]|c->r[0]; // 803E6D84
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6D88
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E6D8C
  c->ctr=c->r[12]; // 803E6D90
  if (true) { c->lr=0x803E6D98u; dispatch(c,c->ctr); } // 803E6D94
L_803E6D98:;
  c->r[3]=R32(c->r[30]+0x0000009Cu); // 803E6D98
  cmps(c,0,(int32_t)c->r[3],0); // 803E6D9C
  if (crb(c,2)) { goto L_803E6DB8; } // 803E6DA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6DA4
  c->r[4]=c->r[31]|c->r[31]; // 803E6DA8
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E6DAC
  c->ctr=c->r[12]; // 803E6DB0
  if (true) { c->lr=0x803E6DB8u; dispatch(c,c->ctr); } // 803E6DB4
L_803E6DB8:;
  c->r[3]=R32(c->r[30]+0x000000A0u); // 803E6DB8
  cmps(c,0,(int32_t)c->r[3],0); // 803E6DBC
  if (crb(c,2)) { goto L_803E6DD8; } // 803E6DC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6DC4
  c->r[4]=c->r[31]|c->r[31]; // 803E6DC8
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E6DCC
  c->ctr=c->r[12]; // 803E6DD0
  if (true) { c->lr=0x803E6DD8u; dispatch(c,c->ctr); } // 803E6DD4
L_803E6DD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6DD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6DDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E6DE0
  c->lr=c->r[0]; // 803E6DE4
  c->r[1]=c->r[1]+0x00000010u; // 803E6DE8
  return; // 803E6DEC
}

// fn_803E6DF0
void f_803E6DF0(Ctx* __restrict c) {
  trace_call(0x803E6DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6DF0
  c->r[0]=c->lr; // 803E6DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E6DF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E6DFC
  c->r[31]=c->r[3]|c->r[3]; // 803E6E00
  c->r[4]=R32(c->r[3]+0x00000098u); // 803E6E04
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803E6E08
  cmps(c,0,(int32_t)c->r[4],0); // 803E6E0C
  c->r[0]=c->r[0]|0x00000008u; // 803E6E10
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 803E6E14
  if (crb(c,2)) { goto L_803E6E30; } // 803E6E18
  c->r[12]=R32(c->r[4]+0x00000000u); // 803E6E1C
  c->r[3]=c->r[4]|c->r[4]; // 803E6E20
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E6E24
  c->ctr=c->r[12]; // 803E6E28
  if (true) { c->lr=0x803E6E30u; dispatch(c,c->ctr); } // 803E6E2C
L_803E6E30:;
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 803E6E30
  cmps(c,0,(int32_t)c->r[3],0); // 803E6E34
  if (crb(c,2)) { goto L_803E6E4C; } // 803E6E38
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6E3C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E6E40
  c->ctr=c->r[12]; // 803E6E44
  if (true) { c->lr=0x803E6E4Cu; dispatch(c,c->ctr); } // 803E6E48
L_803E6E4C:;
  c->r[3]=R32(c->r[31]+0x000000A0u); // 803E6E4C
  cmps(c,0,(int32_t)c->r[3],0); // 803E6E50
  if (crb(c,2)) { goto L_803E6E68; } // 803E6E54
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6E58
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E6E5C
  c->ctr=c->r[12]; // 803E6E60
  if (true) { c->lr=0x803E6E68u; dispatch(c,c->ctr); } // 803E6E64
L_803E6E68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E6E68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E6E6C
  c->lr=c->r[0]; // 803E6E70
  c->r[1]=c->r[1]+0x00000010u; // 803E6E74
  return; // 803E6E78
}

// fn_803E6E7C
void f_803E6E7C(Ctx* __restrict c) {
  trace_call(0x803E6E7Cu);
  c->r[3]=R32(c->r[3]+0x000000BCu); // 803E6E7C
  cmps(c,0,(int32_t)c->r[3],0); // 803E6E80
  if (crb(c,2)) return; // 803E6E84
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6E88
  c->r[12]=R32(c->r[12]+0x00000038u); // 803E6E8C
  c->ctr=c->r[12]; // 803E6E90
  if (true) { dispatch(c,c->ctr); return; } // 803E6E94
  return; // 803E6E98
}

// fn_803E6E9C
void f_803E6E9C(Ctx* __restrict c) {
  trace_call(0x803E6E9Cu);
  c->r[3]=R32(c->r[3]+0x000000BCu); // 803E6E9C
  cmps(c,0,(int32_t)c->r[3],0); // 803E6EA0
  if (crb(c,2)) return; // 803E6EA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E6EA8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803E6EAC
  c->ctr=c->r[12]; // 803E6EB0
  if (true) { dispatch(c,c->ctr); return; } // 803E6EB4
  return; // 803E6EB8
}

// fn_803E6EBC
void f_803E6EBC(Ctx* __restrict c) {
  trace_call(0x803E6EBCu);
  c->r[3]=0u+0x80470000u; // 803E6EBC
  c->r[3]=c->r[3]+0xFFFF9500u; // 803E6EC0
  return; // 803E6EC4
}

// fn_803E6EC8
void f_803E6EC8(Ctx* __restrict c) {
  trace_call(0x803E6EC8u);
  c->r[3]=c->r[13]+0xFFFFDEB0u; // 803E6EC8
  return; // 803E6ECC
}

// fn_803E6ED0
void f_803E6ED0(Ctx* __restrict c) {
  trace_call(0x803E6ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E6ED0
  c->r[0]=c->lr; // 803E6ED4
  W32(c->r[1]+0x00000074u,c->r[0]); // 803E6ED8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 803E6EDC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 803E6EE0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 803E6EE4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 803E6EE8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 803E6EEC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 803E6EF0
  c->f[29]=c->f[1]; // 803E6EF4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803E6EF8
  c->r[31]=c->r[4]|c->r[4]; // 803E6EFC
  W32(c->r[1]+0x00000038u,c->r[30]); // 803E6F00
  c->r[30]=c->r[5]|c->r[5]; // 803E6F04
  W32(c->r[1]+0x00000034u,c->r[29]); // 803E6F08
  c->r[29]=c->r[3]|c->r[3]; // 803E6F0C
  c->r[0]=R32(c->r[3]+0x00000098u); // 803E6F10
  cmps(c,0,(int32_t)c->r[0],0); // 803E6F14
  if (!crb(c,1)) { goto L_803E6FD8; } // 803E6F18
  cmps(c,0,(int32_t)c->r[0],1); // 803E6F1C
  if (!crb(c,2)) { goto L_803E6F34; } // 803E6F20
  c->r[3]=c->r[31]|c->r[31]; // 803E6F24
  c->r[4]=c->r[29]+0x0000009Cu; // 803E6F28
  c->lr=0x803E6F30u; f_803E742C(c); // 803E6F2C
  goto L_803E73F8; // 803E6F30
L_803E6F34:;
  cmps(c,0,(int32_t)c->r[0],2); // 803E6F34
  if (!crb(c,2)) { goto L_803E6F88; } // 803E6F38
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6F3C
  fcmp(c,0,c->f[0],c->f[1]); // 803E6F40
  if (!crb(c,2)) { goto L_803E6F58; } // 803E6F44
  c->r[3]=c->r[31]|c->r[31]; // 803E6F48
  c->r[4]=c->r[29]+0x000000B0u; // 803E6F4C
  c->lr=0x803E6F54u; f_803E742C(c); // 803E6F50
  goto L_803E73F8; // 803E6F54
L_803E6F58:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6F58
  fcmp(c,0,c->f[0],c->f[1]); // 803E6F5C
  if (!crb(c,2)) { goto L_803E6F74; } // 803E6F60
  c->r[3]=c->r[31]|c->r[31]; // 803E6F64
  c->r[4]=c->r[29]+0x00000138u; // 803E6F68
  c->lr=0x803E6F70u; f_803E742C(c); // 803E6F6C
  goto L_803E73F8; // 803E6F70
L_803E6F74:;
  c->r[3]=c->r[31]|c->r[31]; // 803E6F74
  c->r[4]=c->r[29]+0x000000B0u; // 803E6F78
  c->r[5]=c->r[29]+0x00000138u; // 803E6F7C
  c->lr=0x803E6F84u; f_803E7438(c); // 803E6F80
  goto L_803E73F8; // 803E6F84
L_803E6F88:;
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E6F88
  fcmp(c,0,c->f[1],c->f[2]); // 803E6F8C
  if (!crb(c,0)) { goto L_803E6FB0; } // 803E6F90
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[2]); // 803E6F94
  c->r[3]=c->r[31]|c->r[31]; // 803E6F98
  c->r[4]=c->r[29]+0x000000B0u; // 803E6F9C
  c->r[5]=c->r[29]+0x000001C0u; // 803E6FA0
  c->f[1]=c->f[29]; // 803E6FA4
  c->lr=0x803E6FACu; f_803E7438(c); // 803E6FA8
  goto L_803E73F8; // 803E6FAC
L_803E6FB0:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6FB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803E6FB4
  c->r[3]=c->r[31]|c->r[31]; // 803E6FB8
  c->r[4]=c->r[29]+0x000001C0u; // 803E6FBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803E6FC0
  c->r[5]=c->r[29]+0x00000138u; // 803E6FC4
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 803E6FC8
  c->f[1]=c->f[29]; // 803E6FCC
  c->lr=0x803E6FD4u; f_803E7438(c); // 803E6FD0
  goto L_803E73F8; // 803E6FD4
L_803E6FD8:;
  c->r[0]=R32(c->r[3]+0x000000A4u); // 803E6FD8
  cmps(c,0,(int32_t)c->r[0],0); // 803E6FDC
  if (crb(c,2)) { goto L_803E7238; } // 803E6FE0
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6FE4
  fcmp(c,0,c->f[1],c->f[0]); // 803E6FE8
  if (!crb(c,0)) { goto L_803E7110; } // 803E6FEC
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 803E6FF0
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E6FF4
  c->r[4]=c->r[30]|c->r[30]; // 803E6FF8
  c->r[3]=c->r[3]+0x000001C4u; // 803E6FFC
  c->f[1]=c->f[29]; // 803E7000
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[29]); // 803E7004
  c->lr=0x803E700Cu; f_803E3900(c); // 803E7008
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 803E700C
  c->r[4]=c->r[30]|c->r[30]; // 803E7010
  c->f[1]=c->f[29]; // 803E7014
  c->r[3]=c->r[29]+0x000000B4u; // 803E7018
  c->lr=0x803E7020u; f_803E3900(c); // 803E701C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[1]); // 803E7020
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7024
  c->f[1]=c->f[29]; // 803E7028
  c->r[4]=c->r[30]|c->r[30]; // 803E702C
  c->r[3]=c->r[29]+0x000001E4u; // 803E7030
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[30]); // 803E7034
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E7038
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E703C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803E7040
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803E7044
  W8(c->r[31]+0x00000000u,c->r[0]); // 803E7048
  c->lr=0x803E7050u; f_803E3900(c); // 803E704C
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 803E7050
  c->r[4]=c->r[30]|c->r[30]; // 803E7054
  c->f[1]=c->f[29]; // 803E7058
  c->r[3]=c->r[29]+0x000000D4u; // 803E705C
  c->lr=0x803E7064u; f_803E3900(c); // 803E7060
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[1]); // 803E7064
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7068
  c->f[1]=c->f[29]; // 803E706C
  c->r[4]=c->r[30]|c->r[30]; // 803E7070
  c->r[3]=c->r[29]+0x00000204u; // 803E7074
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[30]); // 803E7078
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E707C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E7080
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803E7084
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E7088
  W8(c->r[31]+0x00000001u,c->r[0]); // 803E708C
  c->lr=0x803E7094u; f_803E3900(c); // 803E7090
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 803E7094
  c->r[4]=c->r[30]|c->r[30]; // 803E7098
  c->f[1]=c->f[29]; // 803E709C
  c->r[3]=c->r[29]+0x000000F4u; // 803E70A0
  c->lr=0x803E70A8u; f_803E3900(c); // 803E70A4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[1]); // 803E70A8
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E70AC
  c->f[1]=c->f[29]; // 803E70B0
  c->r[4]=c->r[30]|c->r[30]; // 803E70B4
  c->r[3]=c->r[29]+0x00000224u; // 803E70B8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[30]); // 803E70BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E70C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E70C4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803E70C8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803E70CC
  W8(c->r[31]+0x00000002u,c->r[0]); // 803E70D0
  c->lr=0x803E70D8u; f_803E3900(c); // 803E70D4
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 803E70D8
  c->r[4]=c->r[30]|c->r[30]; // 803E70DC
  c->f[1]=c->f[29]; // 803E70E0
  c->r[3]=c->r[29]+0x00000114u; // 803E70E4
  c->lr=0x803E70ECu; f_803E3900(c); // 803E70E8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803E70EC
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E70F0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[30]); // 803E70F4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E70F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E70FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 803E7100
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E7104
  W8(c->r[31]+0x00000003u,c->r[0]); // 803E7108
  goto L_803E73F8; // 803E710C
L_803E7110:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E7110
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E7114
  c->r[4]=c->r[30]|c->r[30]; // 803E7118
  c->r[3]=c->r[3]+0x0000013Cu; // 803E711C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 803E7120
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 803E7124
  c->f[1]=c->f[31]; // 803E7128
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[31]); // 803E712C
  c->lr=0x803E7134u; f_803E3900(c); // 803E7130
  c->f[29]=c->ps1[29]=S(c->f[31]*c->f[1]); // 803E7134
  c->r[4]=c->r[30]|c->r[30]; // 803E7138
  c->f[1]=c->f[31]; // 803E713C
  c->r[3]=c->r[29]+0x000001C4u; // 803E7140
  c->lr=0x803E7148u; f_803E3900(c); // 803E7144
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 803E7148
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E714C
  c->f[1]=c->f[31]; // 803E7150
  c->r[4]=c->r[30]|c->r[30]; // 803E7154
  c->r[3]=c->r[29]+0x0000015Cu; // 803E7158
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[29]); // 803E715C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E7160
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E7164
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 803E7168
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E716C
  W8(c->r[31]+0x00000000u,c->r[0]); // 803E7170
  c->lr=0x803E7178u; f_803E3900(c); // 803E7174
  c->f[29]=c->ps1[29]=S(c->f[31]*c->f[1]); // 803E7178
  c->r[4]=c->r[30]|c->r[30]; // 803E717C
  c->f[1]=c->f[31]; // 803E7180
  c->r[3]=c->r[29]+0x000001E4u; // 803E7184
  c->lr=0x803E718Cu; f_803E3900(c); // 803E7188
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 803E718C
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7190
  c->f[1]=c->f[31]; // 803E7194
  c->r[4]=c->r[30]|c->r[30]; // 803E7198
  c->r[3]=c->r[29]+0x0000017Cu; // 803E719C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[29]); // 803E71A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E71A4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E71A8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803E71AC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803E71B0
  W8(c->r[31]+0x00000001u,c->r[0]); // 803E71B4
  c->lr=0x803E71BCu; f_803E3900(c); // 803E71B8
  c->f[29]=c->ps1[29]=S(c->f[31]*c->f[1]); // 803E71BC
  c->r[4]=c->r[30]|c->r[30]; // 803E71C0
  c->f[1]=c->f[31]; // 803E71C4
  c->r[3]=c->r[29]+0x00000204u; // 803E71C8
  c->lr=0x803E71D0u; f_803E3900(c); // 803E71CC
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 803E71D0
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E71D4
  c->f[1]=c->f[31]; // 803E71D8
  c->r[4]=c->r[30]|c->r[30]; // 803E71DC
  c->r[3]=c->r[29]+0x0000019Cu; // 803E71E0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[29]); // 803E71E4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E71E8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E71EC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803E71F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E71F4
  W8(c->r[31]+0x00000002u,c->r[0]); // 803E71F8
  c->lr=0x803E7200u; f_803E3900(c); // 803E71FC
  c->f[29]=c->ps1[29]=S(c->f[31]*c->f[1]); // 803E7200
  c->r[4]=c->r[30]|c->r[30]; // 803E7204
  c->f[1]=c->f[31]; // 803E7208
  c->r[3]=c->r[29]+0x00000224u; // 803E720C
  c->lr=0x803E7214u; f_803E3900(c); // 803E7210
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 803E7214
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7218
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[29]); // 803E721C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E7220
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E7224
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803E7228
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803E722C
  W8(c->r[31]+0x00000003u,c->r[0]); // 803E7230
  goto L_803E73F8; // 803E7234
L_803E7238:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803E7238
  cmps(c,0,(int32_t)c->r[0],0); // 803E723C
  if (crb(c,2)) { goto L_803E735C; } // 803E7240
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7244
  c->r[4]=c->r[30]|c->r[30]; // 803E7248
  c->r[3]=c->r[3]+0x0000013Cu; // 803E724C
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[1]); // 803E7250
  c->lr=0x803E7258u; f_803E3900(c); // 803E7254
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 803E7258
  c->r[4]=c->r[30]|c->r[30]; // 803E725C
  c->f[1]=c->f[29]; // 803E7260
  c->r[3]=c->r[29]+0x000000B4u; // 803E7264
  c->lr=0x803E726Cu; f_803E3900(c); // 803E7268
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 803E726C
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7270
  c->f[1]=c->f[29]; // 803E7274
  c->r[4]=c->r[30]|c->r[30]; // 803E7278
  c->r[3]=c->r[29]+0x0000015Cu; // 803E727C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[31]); // 803E7280
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E7284
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E7288
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 803E728C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E7290
  W8(c->r[31]+0x00000000u,c->r[0]); // 803E7294
  c->lr=0x803E729Cu; f_803E3900(c); // 803E7298
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 803E729C
  c->r[4]=c->r[30]|c->r[30]; // 803E72A0
  c->f[1]=c->f[29]; // 803E72A4
  c->r[3]=c->r[29]+0x000000D4u; // 803E72A8
  c->lr=0x803E72B0u; f_803E3900(c); // 803E72AC
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 803E72B0
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E72B4
  c->f[1]=c->f[29]; // 803E72B8
  c->r[4]=c->r[30]|c->r[30]; // 803E72BC
  c->r[3]=c->r[29]+0x0000017Cu; // 803E72C0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[31]); // 803E72C4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E72C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E72CC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803E72D0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803E72D4
  W8(c->r[31]+0x00000001u,c->r[0]); // 803E72D8
  c->lr=0x803E72E0u; f_803E3900(c); // 803E72DC
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 803E72E0
  c->r[4]=c->r[30]|c->r[30]; // 803E72E4
  c->f[1]=c->f[29]; // 803E72E8
  c->r[3]=c->r[29]+0x000000F4u; // 803E72EC
  c->lr=0x803E72F4u; f_803E3900(c); // 803E72F0
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 803E72F4
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E72F8
  c->f[1]=c->f[29]; // 803E72FC
  c->r[4]=c->r[30]|c->r[30]; // 803E7300
  c->r[3]=c->r[29]+0x0000019Cu; // 803E7304
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[31]); // 803E7308
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803E730C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E7310
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803E7314
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E7318
  W8(c->r[31]+0x00000002u,c->r[0]); // 803E731C
  c->lr=0x803E7324u; f_803E3900(c); // 803E7320
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 803E7324
  c->r[4]=c->r[30]|c->r[30]; // 803E7328
  c->f[1]=c->f[29]; // 803E732C
  c->r[3]=c->r[29]+0x00000114u; // 803E7330
  c->lr=0x803E7338u; f_803E3900(c); // 803E7334
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 803E7338
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E733C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[31]); // 803E7340
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E7344
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E7348
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803E734C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803E7350
  W8(c->r[31]+0x00000003u,c->r[0]); // 803E7354
  goto L_803E73F8; // 803E7358
L_803E735C:;
  c->r[4]=c->r[30]|c->r[30]; // 803E735C
  c->r[3]=c->r[3]+0x000000B4u; // 803E7360
  c->lr=0x803E7368u; f_803E3900(c); // 803E7364
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7368
  c->r[4]=c->r[30]|c->r[30]; // 803E736C
  c->r[3]=c->r[29]+0x000000D4u; // 803E7370
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E7374
  c->f[1]=c->f[29]; // 803E7378
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E737C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 803E7380
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E7384
  W8(c->r[31]+0x00000000u,c->r[0]); // 803E7388
  c->lr=0x803E7390u; f_803E3900(c); // 803E738C
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7390
  c->r[4]=c->r[30]|c->r[30]; // 803E7394
  c->r[3]=c->r[29]+0x000000F4u; // 803E7398
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E739C
  c->f[1]=c->f[29]; // 803E73A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E73A4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803E73A8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803E73AC
  W8(c->r[31]+0x00000001u,c->r[0]); // 803E73B0
  c->lr=0x803E73B8u; f_803E3900(c); // 803E73B4
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E73B8
  c->r[4]=c->r[30]|c->r[30]; // 803E73BC
  c->r[3]=c->r[29]+0x00000114u; // 803E73C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E73C4
  c->f[1]=c->f[29]; // 803E73C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E73CC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803E73D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E73D4
  W8(c->r[31]+0x00000002u,c->r[0]); // 803E73D8
  c->lr=0x803E73E0u; f_803E3900(c); // 803E73DC
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E73E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E73E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803E73E8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803E73EC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803E73F0
  W8(c->r[31]+0x00000003u,c->r[0]); // 803E73F4
L_803E73F8:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 803E73F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 803E73FC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 803E7400
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 803E7404
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 803E7408
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 803E740C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803E7410
  c->r[30]=R32(c->r[1]+0x00000038u); // 803E7414
  c->r[0]=R32(c->r[1]+0x00000074u); // 803E7418
  c->r[29]=R32(c->r[1]+0x00000034u); // 803E741C
  c->lr=c->r[0]; // 803E7420
  c->r[1]=c->r[1]+0x00000070u; // 803E7424
  return; // 803E7428
}

// fn_803E742C
void f_803E742C(Ctx* __restrict c) {
  trace_call(0x803E742Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 803E742C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803E7430
  return; // 803E7434
}

// fn_803E7438
void f_803E7438(Ctx* __restrict c) {
  trace_call(0x803E7438u);
  f_803E35E4(c); return; // 803E7438
}

// fn_803E743C
void f_803E743C(Ctx* __restrict c) {
  trace_call(0x803E743Cu);
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E743C
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803E7440
  return; // 803E7444
}

// fn_803E7448
void f_803E7448(Ctx* __restrict c) {
  trace_call(0x803E7448u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E7448
  c->r[0]=c->lr; // 803E744C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803E7450
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803E7454
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803E7458
  c->f[31]=c->f[1]; // 803E745C
  cmps(c,0,(int32_t)c->r[6],0); // 803E7460
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803E7464
  c->r[31]=c->r[5]|c->r[5]; // 803E7468
  W32(c->r[1]+0x00000018u,c->r[30]); // 803E746C
  c->r[30]=c->r[4]|c->r[4]; // 803E7470
  if (crb(c,2)) { goto L_803E7480; } // 803E7474
  W32(c->r[4]+0x00000068u,c->r[5]); // 803E7478
  goto L_803E75EC; // 803E747C
L_803E7480:;
  cmps(c,0,(int32_t)c->r[5],0); // 803E7480
  if (crb(c,2)) { goto L_803E75EC; } // 803E7484
  c->r[0]=R32(c->r[5]+0x000000B8u); // 803E7488
  cmps(c,0,(int32_t)c->r[0],0); // 803E748C
  if (crb(c,2)) { goto L_803E755C; } // 803E7490
  c->r[5]=c->r[5]+0x00000020u; // 803E7494
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,3,ea,0,0);} // 803E7498
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E749C
  c->r[3]=c->r[4]+0x00000008u; // 803E74A0
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,1,ea,0,0);} // 803E74A4
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E74A8
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,2,ea,0,0);} // 803E74AC
  {uint32_t ea=c->r[4]+0x00000040u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E74B0
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E74B4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E74B8
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803E74BC
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803E74C0
  {uint32_t ea=c->r[5]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 803E74C4
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803E74C8
  {uint32_t ea=c->r[5]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E74CC
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803E74D0
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803E74D4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E74D8
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803E74DC
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803E74E0
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[2]);} // 803E74E4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803E74E8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803E74EC
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[1]);} // 803E74F0
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 803E74F4
  c->r[4]=c->r[3]|c->r[3]; // 803E74F8
  c->lr=0x803E7500u; f_803E2FB4(c); // 803E74FC
  {uint32_t ea=c->r[30]+0x00000048u; psq_load(c,3,ea,0,0);} // 803E7500
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,0,ea,0,0);} // 803E7504
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,1,ea,0,0);} // 803E7508
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E750C
  {uint32_t ea=c->r[31]+0x00000040u; psq_load(c,2,ea,0,0);} // 803E7510
  {uint32_t ea=c->r[30]+0x00000050u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E7514
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E7518
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803E751C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E7520
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803E7524
  {uint32_t ea=c->r[31]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 803E7528
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803E752C
  {uint32_t ea=c->r[31]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E7530
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803E7534
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803E7538
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E753C
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803E7540
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803E7544
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 803E7548
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803E754C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803E7550
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 803E7554
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 803E7558
L_803E755C:;
  c->r[3]=c->r[31]+0x00000018u; // 803E755C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E7560
  {uint32_t ea=c->r[30]+0x00000038u; psq_load(c,0,ea,0,0);} // 803E7564
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,3,ea,0,0);} // 803E7568
  fcmp(c,0,c->f[31],c->f[1]); // 803E756C
  {uint32_t ea=c->r[30]+0x00000040u; psq_load(c,2,ea,0,0);} // 803E7570
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 803E7574
  {double t0=S(c->f[0]+c->f[3]), t1=S(c->ps1[0]+c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 803E7578
  {double t0=S(c->f[2]+c->f[4]), t1=S(c->ps1[2]+c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 803E757C
  {uint32_t ea=c->r[30]+0x00000038u; psq_store(c,0,ea,0,0);} // 803E7580
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 803E7584
  if (crb(c,2)) { goto L_803E75EC; } // 803E7588
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E758C
  fcmp(c,0,c->f[1],c->f[0]); // 803E7590
  if (crb(c,2)) { goto L_803E75EC; } // 803E7594
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E7598
  c->r[4]=c->r[1]+0x00000010u; // 803E759C
  {uint32_t ea=c->r[31]+0x00000058u; psq_load(c,0,ea,0,0);} // 803E75A0
  c->r[3]=c->r[1]+0x00000008u; // 803E75A4
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,2,ea,0,0);} // 803E75A8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E75AC
  {uint32_t ea=c->r[31]+0x00000050u; psq_load(c,1,ea,0,0);} // 803E75B0
  {uint32_t ea=c->r[30]+0x00000048u; psq_load(c,3,ea,0,0);} // 803E75B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E75B8
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E75BC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 803E75C0
  {uint32_t ea=c->r[30]+0x00000050u; psq_load(c,2,ea,0,0);} // 803E75C4
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 803E75C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803E75CC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E75D0
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E75D4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E75D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E75DC
  {uint32_t ea=c->r[30]+0x00000048u; psq_store(c,1,ea,0,0);} // 803E75E0
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E75E4
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 803E75E8
L_803E75EC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 803E75EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803E75F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803E75F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803E75F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803E75FC
  c->lr=c->r[0]; // 803E7600
  c->r[1]=c->r[1]+0x00000030u; // 803E7604
  return; // 803E7608
}

// fn_803E760C
void f_803E760C(Ctx* __restrict c) {
  trace_call(0x803E760Cu);
  c->r[3]=c->r[3]+0x00000050u; // 803E760C
  return; // 803E7610
}

// fn_803E7614
void f_803E7614(Ctx* __restrict c) {
  trace_call(0x803E7614u);
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7614
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E7618
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E761C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803E7620
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803E7624
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E7628
  return; // 803E762C
}

// fn_803E7630
void f_803E7630(Ctx* __restrict c) {
  trace_call(0x803E7630u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E7630
  c->r[0]=c->lr; // 803E7634
  cmps(c,0,(int32_t)c->r[5],0); // 803E7638
  W32(c->r[1]+0x00000064u,c->r[0]); // 803E763C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 803E7640
  W32(c->r[1]+0x00000058u,c->r[30]); // 803E7644
  c->r[30]=c->r[4]|c->r[4]; // 803E7648
  W32(c->r[1]+0x00000054u,c->r[29]); // 803E764C
  c->r[29]=c->r[6]|c->r[6]; // 803E7650
  W32(c->r[1]+0x00000050u,c->r[28]); // 803E7654
  c->r[28]=c->r[5]|c->r[5]; // 803E7658
  if (crb(c,2)) { goto L_803E776C; } // 803E765C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7660
  c->r[7]=c->r[5]+0x00000020u; // 803E7664
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803E7668
  c->r[31]=c->r[1]+0x00000008u; // 803E766C
  c->r[6]=c->r[1]+0x00000010u; // 803E7670
  c->r[3]=c->r[1]+0x00000018u; // 803E7674
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803E7678
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E767C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803E7680
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,3,ea,0,0);} // 803E7684
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E7688
  {uint32_t ea=c->r[7]+0x00000010u; psq_load(c,1,ea,0,0);} // 803E768C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E7690
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E7694
  {uint32_t ea=c->r[7]+0x00000020u; psq_load(c,2,ea,0,0);} // 803E7698
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E769C
  {uint32_t ea=c->r[5]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E76A0
  c->r[4]=c->r[7]|c->r[7]; // 803E76A4
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803E76A8
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803E76AC
  {uint32_t ea=c->r[5]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 803E76B0
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803E76B4
  {uint32_t ea=c->r[5]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E76B8
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803E76BC
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803E76C0
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E76C4
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803E76C8
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803E76CC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803E76D0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803E76D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803E76D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803E76DC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E76E0
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E76E4
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,0,0);} // 803E76E8
  {uint32_t ea=c->r[5]+0x00000018u; psq_load(c,3,ea,0,0);} // 803E76EC
  c->r[5]=c->r[30]+0x00000008u; // 803E76F0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E76F4
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803E76F8
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803E76FC
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E7700
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803E7704
  c->lr=0x803E770Cu; f_803E2FB4(c); // 803E7708
  c->r[3]=c->r[29]|c->r[29]; // 803E770C
  c->r[4]=c->r[31]|c->r[31]; // 803E7710
  c->lr=0x803E7718u; f_803E2D8C(c); // 803E7714
  c->r[3]=c->r[29]|c->r[29]; // 803E7718
  c->r[4]=c->r[1]+0x00000018u; // 803E771C
  c->lr=0x803E7724u; f_803E2E68(c); // 803E7720
  c->r[31]=c->r[28]|c->r[28]; // 803E7724
  c->r[30]=0u+0x00000000u; // 803E7728
L_803E772C:;
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E772C
  c->r[3]=c->r[29]|c->r[29]; // 803E7730
  c->r[4]=c->r[30]|c->r[30]; // 803E7734
  c->lr=0x803E773Cu; f_803E2EEC(c); // 803E7738
  c->r[30]=c->r[30]+0x00000001u; // 803E773C
  c->r[31]=c->r[31]+0x00000004u; // 803E7740
  cmps(c,0,(int32_t)c->r[30],100); // 803E7744
  if (crb(c,0)) { IRQCHK(c); goto L_803E772C; } // 803E7748
  c->r[3]=R32(c->r[29]+0x00000004u); // 803E774C
  cmps(c,0,(int32_t)c->r[3],0); // 803E7750
  if (crb(c,2)) { goto L_803E7784; } // 803E7754
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,0,ea,0,0);} // 803E7758
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E775C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E7760
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 803E7764
  goto L_803E7784; // 803E7768
L_803E776C:;
  c->r[3]=c->r[29]|c->r[29]; // 803E776C
  c->r[4]=c->r[4]+0x00000038u; // 803E7770
  c->lr=0x803E7778u; f_803E2D8C(c); // 803E7774
  c->r[3]=c->r[29]|c->r[29]; // 803E7778
  c->r[4]=c->r[30]+0x00000008u; // 803E777C
  c->lr=0x803E7784u; f_803E2E68(c); // 803E7780
L_803E7784:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 803E7784
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 803E7788
  c->r[30]=R32(c->r[1]+0x00000058u); // 803E778C
  c->r[29]=R32(c->r[1]+0x00000054u); // 803E7790
  c->r[28]=R32(c->r[1]+0x00000050u); // 803E7794
  c->lr=c->r[0]; // 803E7798
  c->r[1]=c->r[1]+0x00000060u; // 803E779C
  return; // 803E77A0
}

// fn_803E77A4
void f_803E77A4(Ctx* __restrict c) {
  trace_call(0x803E77A4u);
  c->r[0]=0u+0x00000001u; // 803E77A4
  W32(c->r[4]+0x00000080u,c->r[0]); // 803E77A8
  c->r[3]=0u+0x00000001u; // 803E77AC
  return; // 803E77B0
}

// fn_803E77B4
void f_803E77B4(Ctx* __restrict c) {
  trace_call(0x803E77B4u);
  return; // 803E77B4
}

// fn_803E77B8
void f_803E77B8(Ctx* __restrict c) {
  trace_call(0x803E77B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E77B8
  c->r[0]=c->lr; // 803E77BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E77C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E77C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E77C8
  c->r[30]=c->r[3]|c->r[3]; // 803E77CC
  c->r[0]=R32(c->r[3]+0x00000058u); // 803E77D0
  cmps(c,0,(int32_t)c->r[0],0); // 803E77D4
  if (crb(c,2)) { goto L_803E7810; } // 803E77D8
  c->r[31]=R32(c->r[3]+0x0000005Cu); // 803E77DC
L_803E77E0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803E77E0
  c->r[3]=c->r[30]|c->r[30]; // 803E77E4
  c->r[4]=c->r[31]|c->r[31]; // 803E77E8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 803E77EC
  c->ctr=c->r[12]; // 803E77F0
  if (true) { c->lr=0x803E77F8u; dispatch(c,c->ctr); } // 803E77F4
  c->r[0]=R32(c->r[31]+0x00000080u); // 803E77F8
  c->r[0]=c->r[0]|c->r[3]; // 803E77FC
  W32(c->r[31]+0x00000080u,c->r[0]); // 803E7800
  c->r[31]=R32(c->r[31]+0x00000000u); // 803E7804
  cmps(c,0,(int32_t)c->r[31],0); // 803E7808
  if (!crb(c,2)) { IRQCHK(c); goto L_803E77E0; } // 803E780C
L_803E7810:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E7810
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E7814
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E7818
  c->lr=c->r[0]; // 803E781C
  c->r[1]=c->r[1]+0x00000010u; // 803E7820
  return; // 803E7824
}

// fn_803E7828
void f_803E7828(Ctx* __restrict c) {
  trace_call(0x803E7828u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E7828
  c->r[0]=c->lr; // 803E782C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803E7830
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 803E7834
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 803E7838
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 803E783C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 803E7840
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[30]=c->ps1[30]=RF32(ea);} // 803E7844
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803E7848
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E784C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803E7850
  c->r[30]=c->r[4]|c->r[4]; // 803E7854
  W32(c->r[1]+0x00000014u,c->r[29]); // 803E7858
  c->r[29]=c->r[3]|c->r[3]; // 803E785C
  c->r[31]=R32(c->r[3]+0x00000058u); // 803E7860
  goto L_803E78A4; // 803E7864
L_803E7868:;
  cmps(c,0,(int32_t)c->r[30],0); // 803E7868
  if (crb(c,2)) { goto L_803E7888; } // 803E786C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7870
  fcmp(c,0,c->f[0],c->f[30]); // 803E7874
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803E7878
  if (crb(c,2)) { goto L_803E7888; } // 803E787C
  fcmp(c,0,c->f[31],c->f[0]); // 803E7880
  if (!crb(c,2)) { goto L_803E78A0; } // 803E7884
L_803E7888:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 803E7888
  c->r[3]=c->r[29]|c->r[29]; // 803E788C
  c->r[4]=c->r[31]|c->r[31]; // 803E7890
  c->r[12]=R32(c->r[12]+0x00000050u); // 803E7894
  c->ctr=c->r[12]; // 803E7898
  if (true) { c->lr=0x803E78A0u; dispatch(c,c->ctr); } // 803E789C
L_803E78A0:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 803E78A0
L_803E78A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E78A4
  if (!crb(c,2)) { IRQCHK(c); goto L_803E7868; } // 803E78A8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803E78AC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803E78B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 803E78B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 803E78B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803E78BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803E78C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803E78C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803E78C8
  c->lr=c->r[0]; // 803E78CC
  c->r[1]=c->r[1]+0x00000040u; // 803E78D0
  return; // 803E78D4
}

// fn_803E78D8
void f_803E78D8(Ctx* __restrict c) {
  trace_call(0x803E78D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E78D8
  c->r[0]=c->lr; // 803E78DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803E78E0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 803E78E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 803E78E8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 803E78EC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 803E78F0
  c->r[11]=c->r[1]+0x00000020u; // 803E78F4
  c->lr=0x803E78FCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803E78F8
  c->r[31]=R32(c->r[5]+0x00000110u); // 803E78FC
  c->r[30]=c->r[5]|c->r[5]; // 803E7900
  c->r[27]=c->r[3]|c->r[3]; // 803E7904
  c->r[28]=c->r[4]|c->r[4]; // 803E7908
  cmps(c,0,(int32_t)c->r[31],0); // 803E790C
  c->r[29]=c->r[6]|c->r[6]; // 803E7910
  if (crb(c,2)) { goto L_803E791C; } // 803E7914
  goto L_803E79A4; // 803E7918
L_803E791C:;
  c->r[4]=R32(c->r[5]+0x00000078u); // 803E791C
  cmps(c,0,(int32_t)c->r[4],0); // 803E7920
  if (crb(c,2)) { goto L_803E79A0; } // 803E7924
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E7928
  cmps(c,0,(int32_t)c->r[3],0); // 803E792C
  if (crb(c,2)) { goto L_803E7938; } // 803E7930
  goto L_803E7998; // 803E7934
L_803E7938:;
  c->r[4]=R32(c->r[4]+0x00000078u); // 803E7938
  cmps(c,0,(int32_t)c->r[4],0); // 803E793C
  if (crb(c,2)) { goto L_803E7994; } // 803E7940
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E7944
  cmps(c,0,(int32_t)c->r[3],0); // 803E7948
  if (crb(c,2)) { goto L_803E7954; } // 803E794C
  goto L_803E7998; // 803E7950
L_803E7954:;
  c->r[4]=R32(c->r[4]+0x00000078u); // 803E7954
  cmps(c,0,(int32_t)c->r[4],0); // 803E7958
  if (crb(c,2)) { goto L_803E798C; } // 803E795C
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E7960
  cmps(c,0,(int32_t)c->r[3],0); // 803E7964
  if (crb(c,2)) { goto L_803E7970; } // 803E7968
  goto L_803E7998; // 803E796C
L_803E7970:;
  c->r[3]=R32(c->r[4]+0x00000078u); // 803E7970
  cmps(c,0,(int32_t)c->r[3],0); // 803E7974
  if (crb(c,2)) { goto L_803E7984; } // 803E7978
  c->lr=0x803E7980u; f_803E7ABC(c); // 803E797C
  goto L_803E7998; // 803E7980
L_803E7984:;
  c->r[3]=0u+0x00000000u; // 803E7984
  goto L_803E7998; // 803E7988
L_803E798C:;
  c->r[3]=0u+0x00000000u; // 803E798C
  goto L_803E7998; // 803E7990
L_803E7994:;
  c->r[3]=0u+0x00000000u; // 803E7994
L_803E7998:;
  c->r[31]=c->r[3]|c->r[3]; // 803E7998
  goto L_803E79A4; // 803E799C
L_803E79A0:;
  c->r[31]=0u+0x00000000u; // 803E79A0
L_803E79A4:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[30]=c->ps1[30]=RF32(ea);} // 803E79A4
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E79A8
  goto L_803E7A88; // 803E79AC
L_803E79B0:;
  c->r[3]=R32(c->r[30]+0x00000110u); // 803E79B0
  cmps(c,0,(int32_t)c->r[3],0); // 803E79B4
  if (crb(c,2)) { goto L_803E79C0; } // 803E79B8
  goto L_803E7A44; // 803E79BC
L_803E79C0:;
  c->r[4]=R32(c->r[30]+0x00000078u); // 803E79C0
  cmps(c,0,(int32_t)c->r[4],0); // 803E79C4
  if (crb(c,2)) { goto L_803E7A40; } // 803E79C8
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E79CC
  cmps(c,0,(int32_t)c->r[3],0); // 803E79D0
  if (crb(c,2)) { goto L_803E79DC; } // 803E79D4
  goto L_803E7A44; // 803E79D8
L_803E79DC:;
  c->r[4]=R32(c->r[4]+0x00000078u); // 803E79DC
  cmps(c,0,(int32_t)c->r[4],0); // 803E79E0
  if (crb(c,2)) { goto L_803E7A38; } // 803E79E4
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E79E8
  cmps(c,0,(int32_t)c->r[3],0); // 803E79EC
  if (crb(c,2)) { goto L_803E79F8; } // 803E79F0
  goto L_803E7A44; // 803E79F4
L_803E79F8:;
  c->r[4]=R32(c->r[4]+0x00000078u); // 803E79F8
  cmps(c,0,(int32_t)c->r[4],0); // 803E79FC
  if (crb(c,2)) { goto L_803E7A30; } // 803E7A00
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E7A04
  cmps(c,0,(int32_t)c->r[3],0); // 803E7A08
  if (crb(c,2)) { goto L_803E7A14; } // 803E7A0C
  goto L_803E7A44; // 803E7A10
L_803E7A14:;
  c->r[3]=R32(c->r[4]+0x00000078u); // 803E7A14
  cmps(c,0,(int32_t)c->r[3],0); // 803E7A18
  if (crb(c,2)) { goto L_803E7A28; } // 803E7A1C
  c->lr=0x803E7A24u; f_803E7ABC(c); // 803E7A20
  goto L_803E7A44; // 803E7A24
L_803E7A28:;
  c->r[3]=0u+0x00000000u; // 803E7A28
  goto L_803E7A44; // 803E7A2C
L_803E7A30:;
  c->r[3]=0u+0x00000000u; // 803E7A30
  goto L_803E7A44; // 803E7A34
L_803E7A38:;
  c->r[3]=0u+0x00000000u; // 803E7A38
  goto L_803E7A44; // 803E7A3C
L_803E7A40:;
  c->r[3]=0u+0x00000000u; // 803E7A40
L_803E7A44:;
  cmpu(c,0,c->r[3],c->r[31]); // 803E7A44
  if (!crb(c,2)) { goto L_803E7A90; } // 803E7A48
  cmps(c,0,(int32_t)c->r[28],0); // 803E7A4C
  if (crb(c,2)) { goto L_803E7A6C; } // 803E7A50
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7A54
  fcmp(c,0,c->f[0],c->f[30]); // 803E7A58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803E7A5C
  if (crb(c,2)) { goto L_803E7A6C; } // 803E7A60
  fcmp(c,0,c->f[31],c->f[0]); // 803E7A64
  if (!crb(c,2)) { goto L_803E7A84; } // 803E7A68
L_803E7A6C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 803E7A6C
  c->r[3]=c->r[27]|c->r[27]; // 803E7A70
  c->r[4]=c->r[30]|c->r[30]; // 803E7A74
  c->r[12]=R32(c->r[12]+0x00000050u); // 803E7A78
  c->ctr=c->r[12]; // 803E7A7C
  if (true) { c->lr=0x803E7A84u; dispatch(c,c->ctr); } // 803E7A80
L_803E7A84:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 803E7A84
L_803E7A88:;
  cmps(c,0,(int32_t)c->r[30],0); // 803E7A88
  if (!crb(c,2)) { IRQCHK(c); goto L_803E79B0; } // 803E7A8C
L_803E7A90:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 803E7A90
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803E7A94
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803E7A98
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 803E7A9C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 803E7AA0
  c->r[11]=c->r[1]+0x00000020u; // 803E7AA4
  c->lr=0x803E7AACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803E7AA8
  c->r[0]=R32(c->r[1]+0x00000044u); // 803E7AAC
  c->lr=c->r[0]; // 803E7AB0
  c->r[1]=c->r[1]+0x00000040u; // 803E7AB4
  return; // 803E7AB8
}

// fn_803E7ABC
void f_803E7ABC(Ctx* __restrict c) {
  trace_call(0x803E7ABCu);
L_803E7ABC:;
  c->r[0]=R32(c->r[3]+0x00000110u); // 803E7ABC
  cmps(c,0,(int32_t)c->r[0],0); // 803E7AC0
  if (crb(c,2)) { goto L_803E7AD0; } // 803E7AC4
  c->r[3]=c->r[0]|c->r[0]; // 803E7AC8
  return; // 803E7ACC
L_803E7AD0:;
  c->r[4]=R32(c->r[3]+0x00000078u); // 803E7AD0
  cmps(c,0,(int32_t)c->r[4],0); // 803E7AD4
  if (crb(c,2)) { goto L_803E7B40; } // 803E7AD8
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E7ADC
  cmps(c,0,(int32_t)c->r[3],0); // 803E7AE0
  if (!crb(c,2)) return; // 803E7AE4
  c->r[4]=R32(c->r[4]+0x00000078u); // 803E7AE8
  cmps(c,0,(int32_t)c->r[4],0); // 803E7AEC
  if (crb(c,2)) { goto L_803E7B38; } // 803E7AF0
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E7AF4
  cmps(c,0,(int32_t)c->r[3],0); // 803E7AF8
  if (!crb(c,2)) return; // 803E7AFC
  c->r[4]=R32(c->r[4]+0x00000078u); // 803E7B00
  cmps(c,0,(int32_t)c->r[4],0); // 803E7B04
  if (crb(c,2)) { goto L_803E7B30; } // 803E7B08
  c->r[3]=R32(c->r[4]+0x00000110u); // 803E7B0C
  cmps(c,0,(int32_t)c->r[3],0); // 803E7B10
  if (!crb(c,2)) return; // 803E7B14
  c->r[3]=R32(c->r[4]+0x00000078u); // 803E7B18
  cmps(c,0,(int32_t)c->r[3],0); // 803E7B1C
  if (crb(c,2)) { goto L_803E7B28; } // 803E7B20
  IRQCHK(c); goto L_803E7ABC; // 803E7B24
L_803E7B28:;
  c->r[3]=0u+0x00000000u; // 803E7B28
  return; // 803E7B2C
L_803E7B30:;
  c->r[3]=0u+0x00000000u; // 803E7B30
  return; // 803E7B34
L_803E7B38:;
  c->r[3]=0u+0x00000000u; // 803E7B38
  return; // 803E7B3C
L_803E7B40:;
  c->r[3]=0u+0x00000000u; // 803E7B40
  return; // 803E7B44
}

// fn_803E7B48
void f_803E7B48(Ctx* __restrict c) {
  trace_call(0x803E7B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E7B48
  c->r[0]=c->lr; // 803E7B4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E7B50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E7B54
  c->r[31]=c->r[4]|c->r[4]; // 803E7B58
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E7B5C
  c->r[30]=c->r[3]|c->r[3]; // 803E7B60
  c->r[0]=R32(c->r[3]+0x00000058u); // 803E7B64
  cmps(c,0,(int32_t)c->r[0],0); // 803E7B68
  if (!crb(c,2)) { goto L_803E7BA4; } // 803E7B6C
  c->r[3]=R32(c->r[4]+0x0000006Cu); // 803E7B70
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E7B74
  c->r[12]=R32(c->r[12]+0x00000088u); // 803E7B78
  c->ctr=c->r[12]; // 803E7B7C
  if (true) { c->lr=0x803E7B84u; dispatch(c,c->ctr); } // 803E7B80
  c->r[4]=c->r[30]|c->r[30]; // 803E7B84
  c->lr=0x803E7B8Cu; f_804021A8(c); // 803E7B88
  W32(c->r[30]+0x00000054u,c->r[31]); // 803E7B8C
  c->r[0]=0u+0x00000000u; // 803E7B90
  W32(c->r[30]+0x00000058u,c->r[31]); // 803E7B94
  W32(c->r[31]+0x00000000u,c->r[0]); // 803E7B98
  W32(c->r[31]+0x00000004u,c->r[0]); // 803E7B9C
  goto L_803E7BB8; // 803E7BA0
L_803E7BA4:;
  c->r[5]=R32(c->r[3]+0x00000054u); // 803E7BA4
  W32(c->r[5]+0x00000004u,c->r[4]); // 803E7BA8
  c->r[0]=R32(c->r[3]+0x00000054u); // 803E7BAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 803E7BB0
  W32(c->r[3]+0x00000054u,c->r[4]); // 803E7BB4
L_803E7BB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E7BB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E7BBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E7BC0
  c->lr=c->r[0]; // 803E7BC4
  c->r[1]=c->r[1]+0x00000010u; // 803E7BC8
  return; // 803E7BCC
}

// fn_803E7BD0
void f_803E7BD0(Ctx* __restrict c) {
  trace_call(0x803E7BD0u);
  c->r[3]=R32(c->r[13]+0xFFFFF46Cu); // 803E7BD0
  return; // 803E7BD4
}

// fn_803E7BD8
void f_803E7BD8(Ctx* __restrict c) {
  trace_call(0x803E7BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E7BD8
  c->r[0]=c->lr; // 803E7BDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E7BE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E7BE4
  c->r[31]=c->r[3]|c->r[3]; // 803E7BE8
  c->r[5]=R32(c->r[4]+0x00000000u); // 803E7BEC
  cmps(c,0,(int32_t)c->r[5],0); // 803E7BF0
  if (!crb(c,2)) { goto L_803E7C04; } // 803E7BF4
  c->r[0]=R32(c->r[4]+0x00000004u); // 803E7BF8
  W32(c->r[3]+0x00000058u,c->r[0]); // 803E7BFC
  goto L_803E7C0C; // 803E7C00
L_803E7C04:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 803E7C04
  W32(c->r[5]+0x00000004u,c->r[0]); // 803E7C08
L_803E7C0C:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 803E7C0C
  cmps(c,0,(int32_t)c->r[5],0); // 803E7C10
  if (!crb(c,2)) { goto L_803E7C24; } // 803E7C14
  c->r[0]=R32(c->r[4]+0x00000000u); // 803E7C18
  W32(c->r[3]+0x00000054u,c->r[0]); // 803E7C1C
  goto L_803E7C2C; // 803E7C20
L_803E7C24:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 803E7C24
  W32(c->r[5]+0x00000000u,c->r[0]); // 803E7C28
L_803E7C2C:;
  c->r[0]=0u+0x00000000u; // 803E7C2C
  W32(c->r[4]+0x00000000u,c->r[0]); // 803E7C30
  W32(c->r[4]+0x00000004u,c->r[0]); // 803E7C34
  c->r[0]=R32(c->r[3]+0x00000058u); // 803E7C38
  cmps(c,0,(int32_t)c->r[0],0); // 803E7C3C
  if (!crb(c,2)) { goto L_803E7C60; } // 803E7C40
  c->r[3]=R32(c->r[4]+0x0000006Cu); // 803E7C44
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E7C48
  c->r[12]=R32(c->r[12]+0x00000088u); // 803E7C4C
  c->ctr=c->r[12]; // 803E7C50
  if (true) { c->lr=0x803E7C58u; dispatch(c,c->ctr); } // 803E7C54
  c->r[4]=c->r[31]|c->r[31]; // 803E7C58
  c->lr=0x803E7C60u; f_804021E0(c); // 803E7C5C
L_803E7C60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E7C60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E7C64
  c->lr=c->r[0]; // 803E7C68
  c->r[1]=c->r[1]+0x00000010u; // 803E7C6C
  return; // 803E7C70
}

// fn_803E7C74
void f_803E7C74(Ctx* __restrict c) {
  trace_call(0x803E7C74u);
  c->r[3]=0u+0x80470000u; // 803E7C74
  c->r[3]=c->r[3]+0xFFFF950Cu; // 803E7C78
  return; // 803E7C7C
}

// fn_803E7C80
void f_803E7C80(Ctx* __restrict c) {
  trace_call(0x803E7C80u);
  c->r[3]=c->r[13]+0xFFFFDEB8u; // 803E7C80
  return; // 803E7C84
}

// fn_803E7C88
void f_803E7C88(Ctx* __restrict c) {
  trace_call(0x803E7C88u);
  {uint32_t ea=c->r[1]+0xFFFFFB60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E7C88
  c->r[0]=c->lr; // 803E7C8C
  W32(c->r[1]+0x000004A4u,c->r[0]); // 803E7C90
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[31]);} // 803E7C94
  {uint32_t ea=c->r[1]+0x00000498u; psq_store(c,31,ea,0,0);} // 803E7C98
  {uint32_t ea=c->r[1]+0x00000480u; WF64(ea,c->f[30]);} // 803E7C9C
  {uint32_t ea=c->r[1]+0x00000488u; psq_store(c,30,ea,0,0);} // 803E7CA0
  {uint32_t ea=c->r[1]+0x00000470u; WF64(ea,c->f[29]);} // 803E7CA4
  {uint32_t ea=c->r[1]+0x00000478u; psq_store(c,29,ea,0,0);} // 803E7CA8
  {uint32_t ea=c->r[1]+0x00000460u; WF64(ea,c->f[28]);} // 803E7CAC
  {uint32_t ea=c->r[1]+0x00000468u; psq_store(c,28,ea,0,0);} // 803E7CB0
  c->r[11]=c->r[1]+0x00000460u; // 803E7CB4
  c->lr=0x803E7CBCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803E7CB8
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[29]=c->ps1[29]=RF32(ea);} // 803E7CBC
  c->r[26]=0u+0x00000000u; // 803E7CC0
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[30]=c->ps1[30]=RF32(ea);} // 803E7CC4
  c->r[27]=0u+0x00000001u; // 803E7CC8
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E7CCC
  c->r[23]=c->r[3]|c->r[3]; // 803E7CD0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[29]);} // 803E7CD4
  c->r[24]=c->r[4]|c->r[4]; // 803E7CD8
  {uint32_t ea=c->r[2]+0xFFFFA7E8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803E7CDC
  c->r[25]=0u+0x00000000u; // 803E7CE0
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 803E7CE4
  c->r[31]=0u+0x00000004u; // 803E7CE8
  c->r[30]=0u+0x00000002u; // 803E7CEC
  c->r[29]=0u+0x00000008u; // 803E7CF0
  W32(c->r[1]+0x00000020u,c->r[26]); // 803E7CF4
  c->r[28]=0u+0x80470000u; // 803E7CF8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[30]);} // 803E7CFC
  W32(c->r[1]+0x00000028u,c->r[26]); // 803E7D00
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 803E7D04
  W32(c->r[1]+0x00000030u,c->r[26]); // 803E7D08
  W32(c->r[1]+0x00000034u,c->r[26]); // 803E7D0C
  W32(c->r[3]+0x00000068u,c->r[27]); // 803E7D10
L_803E7D14:;
  c->r[3]=c->r[24]|c->r[24]; // 803E7D14
  c->r[4]=c->r[1]+0x00000008u; // 803E7D18
  c->r[5]=c->r[1]+0x00000010u; // 803E7D1C
  c->r[6]=c->r[1]+0x0000000Cu; // 803E7D20
  c->r[7]=c->r[1]+0x00000038u; // 803E7D24
  c->r[8]=c->r[1]+0x00000018u; // 803E7D28
  c->r[9]=0u+0x000003E8u; // 803E7D2C
  c->lr=0x803E7D34u; f_80403308(c); // 803E7D30
  c->r[3]=R32(c->r[1]+0x00000008u); // 803E7D34
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 803E7D38
  cmpu(c,0,c->r[0],0x000000BDu); // 803E7D3C
  if (crb(c,1)) { goto L_803E81AC; } // 803E7D40
  c->r[3]=c->r[28]+0xFFFF951Cu; // 803E7D44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E7D48
  c->r[3]=R32(c->r[3]+c->r[0]); // 803E7D4C
  c->ctr=c->r[3]; // 803E7D50
  if (true) { switch (c->ctr) { case 0x803E7D58u: goto L_803E7D58; case 0x803E7D8Cu: goto L_803E7D8C; case 0x803E7DA8u: goto L_803E7DA8; case 0x803E7DC4u: goto L_803E7DC4; case 0x803E7DDCu: goto L_803E7DDC; case 0x803E7DF4u: goto L_803E7DF4; case 0x803E7E0Cu: goto L_803E7E0C; case 0x803E7E24u: goto L_803E7E24; case 0x803E7E38u: goto L_803E7E38; case 0x803E7E48u: goto L_803E7E48; case 0x803E7E58u: goto L_803E7E58; case 0x803E7E64u: goto L_803E7E64; case 0x803E7E78u: goto L_803E7E78; case 0x803E7E94u: goto L_803E7E94; case 0x803E7EA0u: goto L_803E7EA0; case 0x803E7EACu: goto L_803E7EAC; case 0x803E7EB8u: goto L_803E7EB8; case 0x803E7EC4u: goto L_803E7EC4; case 0x803E7ED8u: goto L_803E7ED8; case 0x803E7EECu: goto L_803E7EEC; case 0x803E7F08u: goto L_803E7F08; case 0x803E7F4Cu: goto L_803E7F4C; case 0x803E7F58u: goto L_803E7F58; case 0x803E7F64u: goto L_803E7F64; case 0x803E7F70u: goto L_803E7F70; case 0x803E7F7Cu: goto L_803E7F7C; case 0x803E7F88u: goto L_803E7F88; case 0x803E7F94u: goto L_803E7F94; case 0x803E7FA0u: goto L_803E7FA0; case 0x803E7FACu: goto L_803E7FAC; case 0x803E7FC4u: goto L_803E7FC4; case 0x803E7FD0u: goto L_803E7FD0; case 0x803E7FE8u: goto L_803E7FE8; case 0x803E7FF4u: goto L_803E7FF4; case 0x803E8014u: goto L_803E8014; case 0x803E8020u: goto L_803E8020; case 0x803E8040u: goto L_803E8040; case 0x803E804Cu: goto L_803E804C; case 0x803E8058u: goto L_803E8058; case 0x803E8064u: goto L_803E8064; case 0x803E8070u: goto L_803E8070; case 0x803E807Cu: goto L_803E807C; case 0x803E80E0u: goto L_803E80E0; case 0x803E8144u: goto L_803E8144; case 0x803E8150u: goto L_803E8150; case 0x803E815Cu: goto L_803E815C; case 0x803E8168u: goto L_803E8168; case 0x803E8174u: goto L_803E8174; case 0x803E8180u: goto L_803E8180; case 0x803E818Cu: goto L_803E818C; case 0x803E8198u: goto L_803E8198; case 0x803E81A4u: goto L_803E81A4; case 0x803E81ACu: goto L_803E81AC; default: break; } dispatch(c,c->ctr); return; } // 803E7D54
L_803E7D58:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7D58
  c->r[3]=c->r[24]|c->r[24]; // 803E7D5C
  c->r[5]=c->r[1]+0x00000018u; // 803E7D60
  c->r[6]=c->r[23]+0x00000098u; // 803E7D64
  c->lr=0x803E7D6Cu; f_804039BC(c); // 803E7D68
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7D6C
  c->r[3]=c->r[24]|c->r[24]; // 803E7D70
  c->r[5]=c->r[1]+0x00000018u; // 803E7D74
  c->r[6]=c->r[23]+0x000000B8u; // 803E7D78
  c->r[4]=c->r[4]+0x00000001u; // 803E7D7C
  c->lr=0x803E7D84u; f_804039BC(c); // 803E7D80
  W32(c->r[23]+0x00000160u,c->r[27]); // 803E7D84
  goto L_803E81AC; // 803E7D88
L_803E7D8C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7D8C
  c->r[3]=c->r[24]|c->r[24]; // 803E7D90
  c->r[5]=c->r[1]+0x00000018u; // 803E7D94
  c->r[6]=c->r[23]+0x00000098u; // 803E7D98
  c->lr=0x803E7DA0u; f_804039BC(c); // 803E7D9C
  W32(c->r[23]+0x00000160u,c->r[26]); // 803E7DA0
  goto L_803E81AC; // 803E7DA4
L_803E7DA8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7DA8
  c->r[3]=c->r[24]|c->r[24]; // 803E7DAC
  c->r[5]=c->r[1]+0x00000018u; // 803E7DB0
  c->r[6]=c->r[23]+0x000000B8u; // 803E7DB4
  c->lr=0x803E7DBCu; f_804039BC(c); // 803E7DB8
  W32(c->r[23]+0x00000160u,c->r[26]); // 803E7DBC
  goto L_803E81AC; // 803E7DC0
L_803E7DC4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7DC4
  c->r[3]=c->r[24]|c->r[24]; // 803E7DC8
  c->r[5]=c->r[1]+0x00000018u; // 803E7DCC
  c->r[6]=c->r[23]+0x000000D8u; // 803E7DD0
  c->lr=0x803E7DD8u; f_804039BC(c); // 803E7DD4
  goto L_803E81AC; // 803E7DD8
L_803E7DDC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7DDC
  c->r[3]=c->r[24]|c->r[24]; // 803E7DE0
  c->r[5]=c->r[1]+0x00000018u; // 803E7DE4
  c->r[6]=c->r[23]+0x00000118u; // 803E7DE8
  c->lr=0x803E7DF0u; f_804039BC(c); // 803E7DEC
  goto L_803E81AC; // 803E7DF0
L_803E7DF4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7DF4
  c->r[3]=c->r[24]|c->r[24]; // 803E7DF8
  c->r[5]=c->r[1]+0x00000018u; // 803E7DFC
  c->r[6]=c->r[23]+0x000000F8u; // 803E7E00
  c->lr=0x803E7E08u; f_804039BC(c); // 803E7E04
  goto L_803E81AC; // 803E7E08
L_803E7E0C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7E0C
  c->r[3]=c->r[24]|c->r[24]; // 803E7E10
  c->r[5]=c->r[1]+0x00000018u; // 803E7E14
  c->r[6]=c->r[23]+0x00000138u; // 803E7E18
  c->lr=0x803E7E20u; f_804039BC(c); // 803E7E1C
  goto L_803E81AC; // 803E7E20
L_803E7E24:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7E24
  {uint32_t ea=c->r[23]+0x0000015Cu; WF32(ea,c->f[0]);} // 803E7E28
  {uint32_t ea=c->r[23]+0x00000158u; WF32(ea,c->f[0]);} // 803E7E2C
  W32(c->r[23]+0x00000160u,c->r[27]); // 803E7E30
  goto L_803E81AC; // 803E7E34
L_803E7E38:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7E38
  {uint32_t ea=c->r[23]+0x00000158u; WF32(ea,c->f[0]);} // 803E7E3C
  W32(c->r[23]+0x00000160u,c->r[26]); // 803E7E40
  goto L_803E81AC; // 803E7E44
L_803E7E48:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7E48
  {uint32_t ea=c->r[23]+0x0000015Cu; WF32(ea,c->f[0]);} // 803E7E4C
  W32(c->r[23]+0x00000160u,c->r[26]); // 803E7E50
  goto L_803E81AC; // 803E7E54
L_803E7E58:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7E58
  W32(c->r[23]+0x0000016Cu,c->r[0]); // 803E7E5C
  goto L_803E81AC; // 803E7E60
L_803E7E64:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7E64
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[0]); // 803E7E68
  c->f[0]=(c->f[1]>=0.0)?c->f[29]:c->f[0]; // 803E7E6C
  {uint32_t ea=c->r[23]+0x00000170u; WF32(ea,c->f[0]);} // 803E7E70
  goto L_803E81AC; // 803E7E74
L_803E7E78:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7E78
  fcmp(c,0,c->f[29],c->f[0]); // 803E7E7C
  if (crb(c,2)) { goto L_803E7E8C; } // 803E7E80
  {uint32_t ea=c->r[23]+0x00000164u; WF32(ea,c->f[28]);} // 803E7E84
  goto L_803E81AC; // 803E7E88
L_803E7E8C:;
  {uint32_t ea=c->r[23]+0x00000164u; WF32(ea,c->f[29]);} // 803E7E8C
  goto L_803E81AC; // 803E7E90
L_803E7E94:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7E94
  {uint32_t ea=c->r[23]+0x00000164u; WF32(ea,c->f[0]);} // 803E7E98
  goto L_803E81AC; // 803E7E9C
L_803E7EA0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7EA0
  W32(c->r[23]+0x00000174u,c->r[0]); // 803E7EA4
  goto L_803E81AC; // 803E7EA8
L_803E7EAC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7EAC
  W32(c->r[23]+0x00000178u,c->r[0]); // 803E7EB0
  goto L_803E81AC; // 803E7EB4
L_803E7EB8:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7EB8
  {uint32_t ea=c->r[23]+0x0000017Cu; WF32(ea,c->f[0]);} // 803E7EBC
  goto L_803E81AC; // 803E7EC0
L_803E7EC4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7EC4
  c->r[3]=c->r[24]|c->r[24]; // 803E7EC8
  c->r[5]=c->r[23]+0x00000180u; // 803E7ECC
  c->lr=0x803E7ED4u; f_804039AC(c); // 803E7ED0
  goto L_803E81AC; // 803E7ED4
L_803E7ED8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7ED8
  c->r[3]=c->r[24]|c->r[24]; // 803E7EDC
  c->r[5]=c->r[23]+0x00000184u; // 803E7EE0
  c->lr=0x803E7EE8u; f_804039AC(c); // 803E7EE4
  goto L_803E81AC; // 803E7EE8
L_803E7EEC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7EEC
  W32(c->r[23]+0x00000188u,c->r[0]); // 803E7EF0
  cmps(c,0,(int32_t)c->r[0],3); // 803E7EF4
  if (!crb(c,2)) { goto L_803E81AC; } // 803E7EF8
  W32(c->r[23]+0x00000068u,c->r[29]); // 803E7EFC
  c->r[25]=0u+0x00000001u; // 803E7F00
  goto L_803E81AC; // 803E7F04
L_803E7F08:;
  cmps(c,0,(int32_t)c->r[25],0); // 803E7F08
  if (!crb(c,2)) { goto L_803E7F40; } // 803E7F0C
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7F10
  cmps(c,0,(int32_t)c->r[0],0); // 803E7F14
  if (!crb(c,2)) { goto L_803E7F24; } // 803E7F18
  W32(c->r[23]+0x00000068u,c->r[27]); // 803E7F1C
  goto L_803E7F40; // 803E7F20
L_803E7F24:;
  cmps(c,0,(int32_t)c->r[0],1); // 803E7F24
  if (!crb(c,2)) { goto L_803E7F34; } // 803E7F28
  W32(c->r[23]+0x00000068u,c->r[30]); // 803E7F2C
  goto L_803E7F40; // 803E7F30
L_803E7F34:;
  cmps(c,0,(int32_t)c->r[0],2); // 803E7F34
  if (crb(c,0)) { goto L_803E7F40; } // 803E7F38
  W32(c->r[23]+0x00000068u,c->r[31]); // 803E7F3C
L_803E7F40:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7F40
  W32(c->r[23]+0x00000064u,c->r[0]); // 803E7F44
  goto L_803E81AC; // 803E7F48
L_803E7F4C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7F4C
  W32(c->r[23]+0x0000018Cu,c->r[0]); // 803E7F50
  goto L_803E81AC; // 803E7F54
L_803E7F58:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7F58
  W32(c->r[23]+0x000001C8u,c->r[0]); // 803E7F5C
  goto L_803E81AC; // 803E7F60
L_803E7F64:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7F64
  {uint32_t ea=c->r[23]+0x00000194u; WF32(ea,c->f[0]);} // 803E7F68
  goto L_803E81AC; // 803E7F6C
L_803E7F70:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7F70
  W32(c->r[23]+0x00000190u,c->r[0]); // 803E7F74
  goto L_803E81AC; // 803E7F78
L_803E7F7C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7F7C
  W32(c->r[23]+0x000001C0u,c->r[0]); // 803E7F80
  goto L_803E81AC; // 803E7F84
L_803E7F88:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7F88
  W32(c->r[23]+0x000001C4u,c->r[0]); // 803E7F8C
  goto L_803E81AC; // 803E7F90
L_803E7F94:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E7F94
  {uint32_t ea=c->r[23]+0x000001CCu; WF32(ea,c->f[0]);} // 803E7F98
  goto L_803E81AC; // 803E7F9C
L_803E7FA0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7FA0
  W32(c->r[23]+0x000001D0u,c->r[0]); // 803E7FA4
  goto L_803E81AC; // 803E7FA8
L_803E7FAC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7FAC
  c->r[3]=c->r[24]|c->r[24]; // 803E7FB0
  c->r[5]=c->r[1]+0x00000018u; // 803E7FB4
  c->r[6]=c->r[23]+0x00000198u; // 803E7FB8
  c->lr=0x803E7FC0u; f_804039BC(c); // 803E7FBC
  goto L_803E81AC; // 803E7FC0
L_803E7FC4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7FC4
  W32(c->r[23]+0x000001B8u,c->r[0]); // 803E7FC8
  goto L_803E81AC; // 803E7FCC
L_803E7FD0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7FD0
  c->r[3]=c->r[24]|c->r[24]; // 803E7FD4
  c->r[5]=c->r[1]+0x00000018u; // 803E7FD8
  c->r[6]=c->r[23]+0x000001D4u; // 803E7FDC
  c->lr=0x803E7FE4u; f_804039BC(c); // 803E7FE0
  goto L_803E81AC; // 803E7FE4
L_803E7FE8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E7FE8
  W32(c->r[23]+0x000001BCu,c->r[0]); // 803E7FEC
  goto L_803E81AC; // 803E7FF0
L_803E7FF4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E7FF4
  c->r[0]=R32(c->r[23]+0x00000060u); // 803E7FF8
  c->r[3]=0u-c->r[4]; // 803E7FFC
  c->r[3]=c->r[3]|c->r[4]; // 803E8000
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 803E8004
  c->r[0]=c->r[0]|c->r[3]; // 803E8008
  W32(c->r[23]+0x00000060u,c->r[0]); // 803E800C
  goto L_803E81AC; // 803E8010
L_803E8014:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8014
  {uint32_t ea=c->r[23]+0x00000204u; WF32(ea,c->f[0]);} // 803E8018
  goto L_803E81AC; // 803E801C
L_803E8020:;
  c->r[4]=R32(c->r[23]+0x00000188u); // 803E8020
  c->r[3]=c->r[1]+0x00000038u; // 803E8024
  c->r[5]=0u+0x00000000u; // 803E8028
  c->r[6]=0u+0x00000000u; // 803E802C
  c->r[4]=c->r[4]+0x00000001u; // 803E8030
  c->lr=0x803E8038u; f_80400FB4(c); // 803E8034
  W32(c->r[23]+0x00000168u,c->r[3]); // 803E8038
  goto L_803E81AC; // 803E803C
L_803E8040:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E8040
  W32(c->r[23]+0x00000208u,c->r[0]); // 803E8044
  goto L_803E81AC; // 803E8048
L_803E804C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E804C
  {uint32_t ea=c->r[23]+0x0000020Cu; WF32(ea,c->f[0]);} // 803E8050
  goto L_803E81AC; // 803E8054
L_803E8058:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8058
  {uint32_t ea=c->r[23]+0x00000210u; WF32(ea,c->f[0]);} // 803E805C
  goto L_803E81AC; // 803E8060
L_803E8064:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8064
  {uint32_t ea=c->r[23]+0x00000214u; WF32(ea,c->f[0]);} // 803E8068
  goto L_803E81AC; // 803E806C
L_803E8070:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8070
  {uint32_t ea=c->r[23]+0x00000218u; WF32(ea,c->f[0]);} // 803E8074
  goto L_803E81AC; // 803E8078
L_803E807C:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E807C
  fcmp(c,0,c->f[29],c->f[0]); // 803E8080
  if (!crb(c,2)) { goto L_803E8094; } // 803E8084
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803E8088
  cmps(c,0,(int32_t)c->r[0],0); // 803E808C
  if (crb(c,2)) { goto L_803E81AC; } // 803E8090
L_803E8094:;
  c->r[3]=0u+0x00000020u; // 803E8094
  c->lr=0x803E809Cu; f_803FE664(c); // 803E8098
  cmps(c,0,(int32_t)c->r[3],0); // 803E809C
  c->r[6]=c->r[3]|c->r[3]; // 803E80A0
  if (crb(c,2)) { goto L_803E80C8; } // 803E80A4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[29]);} // 803E80A8
  W32(c->r[3]+0x00000004u,c->r[26]); // 803E80AC
  W32(c->r[3]+0x00000008u,c->r[26]); // 803E80B0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 803E80B4
  W32(c->r[3]+0x00000010u,c->r[26]); // 803E80B8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[31]);} // 803E80BC
  W32(c->r[3]+0x00000018u,c->r[26]); // 803E80C0
  W32(c->r[3]+0x0000001Cu,c->r[26]); // 803E80C4
L_803E80C8:;
  W32(c->r[23]+0x0000021Cu,c->r[3]); // 803E80C8
  c->r[3]=c->r[24]|c->r[24]; // 803E80CC
  c->r[5]=c->r[1]+0x00000018u; // 803E80D0
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E80D4
  c->lr=0x803E80DCu; f_804039BC(c); // 803E80D8
  goto L_803E81AC; // 803E80DC
L_803E80E0:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E80E0
  fcmp(c,0,c->f[29],c->f[0]); // 803E80E4
  if (!crb(c,2)) { goto L_803E80F8; } // 803E80E8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803E80EC
  cmps(c,0,(int32_t)c->r[0],0); // 803E80F0
  if (crb(c,2)) { goto L_803E81AC; } // 803E80F4
L_803E80F8:;
  c->r[3]=0u+0x00000020u; // 803E80F8
  c->lr=0x803E8100u; f_803FE664(c); // 803E80FC
  cmps(c,0,(int32_t)c->r[3],0); // 803E8100
  c->r[6]=c->r[3]|c->r[3]; // 803E8104
  if (crb(c,2)) { goto L_803E812C; } // 803E8108
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[29]);} // 803E810C
  W32(c->r[3]+0x00000004u,c->r[26]); // 803E8110
  W32(c->r[3]+0x00000008u,c->r[26]); // 803E8114
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 803E8118
  W32(c->r[3]+0x00000010u,c->r[26]); // 803E811C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[31]);} // 803E8120
  W32(c->r[3]+0x00000018u,c->r[26]); // 803E8124
  W32(c->r[3]+0x0000001Cu,c->r[26]); // 803E8128
L_803E812C:;
  W32(c->r[23]+0x00000220u,c->r[3]); // 803E812C
  c->r[3]=c->r[24]|c->r[24]; // 803E8130
  c->r[5]=c->r[1]+0x00000018u; // 803E8134
  c->r[4]=R32(c->r[1]+0x00000010u); // 803E8138
  c->lr=0x803E8140u; f_804039BC(c); // 803E813C
  goto L_803E81AC; // 803E8140
L_803E8144:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E8144
  W32(c->r[23]+0x0000006Cu,c->r[0]); // 803E8148
  goto L_803E81AC; // 803E814C
L_803E8150:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8150
  {uint32_t ea=c->r[23]+0x00000070u; WF32(ea,c->f[0]);} // 803E8154
  goto L_803E81AC; // 803E8158
L_803E815C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E815C
  W32(c->r[23]+0x00000074u,c->r[0]); // 803E8160
  goto L_803E81AC; // 803E8164
L_803E8168:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E8168
  W32(c->r[23]+0x00000078u,c->r[0]); // 803E816C
  goto L_803E81AC; // 803E8170
L_803E8174:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E8174
  W32(c->r[23]+0x0000007Cu,c->r[0]); // 803E8178
  goto L_803E81AC; // 803E817C
L_803E8180:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E8180
  W32(c->r[23]+0x00000084u,c->r[0]); // 803E8184
  goto L_803E81AC; // 803E8188
L_803E818C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E818C
  W32(c->r[23]+0x00000088u,c->r[0]); // 803E8190
  goto L_803E81AC; // 803E8194
L_803E8198:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803E8198
  W32(c->r[23]+0x0000008Cu,c->r[0]); // 803E819C
  goto L_803E81AC; // 803E81A0
L_803E81A4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E81A4
  {uint32_t ea=c->r[23]+0x00000094u; WF32(ea,c->f[0]);} // 803E81A8
L_803E81AC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803E81AC
  cmps(c,0,(int32_t)c->r[0],6); // 803E81B0
  if (!crb(c,2)) { IRQCHK(c); goto L_803E7D14; } // 803E81B4
  c->r[4]=R32(c->r[23]+0x0000018Cu); // 803E81B8
  c->r[3]=c->r[23]|c->r[23]; // 803E81BC
  c->r[5]=R32(c->r[23]+0x000001C8u); // 803E81C0
  c->lr=0x803E81C8u; f_803E85F8(c); // 803E81C4
  c->r[0]=R32(c->r[23]+0x000001C0u); // 803E81C8
  cmps(c,0,(int32_t)c->r[0],1); // 803E81CC
  if (!crb(c,2)) { goto L_803E822C; } // 803E81D0
  c->r[4]=R32(c->r[23]+0x0000016Cu); // 803E81D4
  c->r[3]=R32(c->r[23]+0x0000018Cu); // 803E81D8
  c->r[0]=R32(c->r[23]+0x000001C4u); // 803E81DC
  cmps(c,0,(int32_t)c->r[4],0); // 803E81E0
  c->r[5]=c->r[0]-c->r[3]; // 803E81E4
  if (!crb(c,0)) { goto L_803E81F0; } // 803E81E8
  c->r[4]=0u+0x00000000u; // 803E81EC
L_803E81F0:;
  c->r[0]=c->r[4]+0x00000001u; // 803E81F0
  c->r[3]=0u+0x43300000u; // 803E81F4
  c->r[4]=c->r[5]^0x80000000u; // 803E81F8
  W32(c->r[1]+0x00000424u,c->r[4]); // 803E81FC
  c->r[0]=c->r[0]^0x80000000u; // 803E8200
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803E8204
  W32(c->r[1]+0x00000420u,c->r[3]); // 803E8208
  {uint32_t ea=c->r[1]+0x00000420u; c->f[0]=RF64(ea);} // 803E820C
  W32(c->r[1]+0x0000042Cu,c->r[0]); // 803E8210
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 803E8214
  W32(c->r[1]+0x00000428u,c->r[3]); // 803E8218
  {uint32_t ea=c->r[1]+0x00000428u; c->f[0]=RF64(ea);} // 803E821C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803E8220
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 803E8224
  {uint32_t ea=c->r[23]+0x000001CCu; WF32(ea,c->f[0]);} // 803E8228
L_803E822C:;
  c->r[3]=0u+0x00000001u; // 803E822C
  {uint32_t ea=c->r[1]+0x00000498u; psq_load(c,31,ea,0,0);} // 803E8230
  {uint32_t ea=c->r[1]+0x00000490u; c->f[31]=RF64(ea);} // 803E8234
  {uint32_t ea=c->r[1]+0x00000488u; psq_load(c,30,ea,0,0);} // 803E8238
  {uint32_t ea=c->r[1]+0x00000480u; c->f[30]=RF64(ea);} // 803E823C
  {uint32_t ea=c->r[1]+0x00000478u; psq_load(c,29,ea,0,0);} // 803E8240
  {uint32_t ea=c->r[1]+0x00000470u; c->f[29]=RF64(ea);} // 803E8244
  {uint32_t ea=c->r[1]+0x00000468u; psq_load(c,28,ea,0,0);} // 803E8248
  {uint32_t ea=c->r[1]+0x00000460u; c->f[28]=RF64(ea);} // 803E824C
  c->r[11]=c->r[1]+0x00000460u; // 803E8250
  c->lr=0x803E8258u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803E8254
  c->r[0]=R32(c->r[1]+0x000004A4u); // 803E8258
  c->lr=c->r[0]; // 803E825C
  c->r[1]=c->r[1]+0x000004A0u; // 803E8260
  return; // 803E8264
}

// fn_803E8268
void f_803E8268(Ctx* __restrict c) {
  trace_call(0x803E8268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E8268
  c->r[0]=c->lr; // 803E826C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E8270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803E8274
  c->r[31]=c->r[4]|c->r[4]; // 803E8278
  W32(c->r[1]+0x00000008u,c->r[30]); // 803E827C
  c->r[30]=c->r[3]|c->r[3]; // 803E8280
  c->r[0]=R32(c->r[3]+0x00000160u); // 803E8284
  cmps(c,0,(int32_t)c->r[0],0); // 803E8288
  if (crb(c,2)) { goto L_803E82B4; } // 803E828C
  c->r[3]=c->r[31]|c->r[31]; // 803E8290
  c->r[5]=c->r[30]+0x00000098u; // 803E8294
  c->r[4]=0u+0x00000007u; // 803E8298
  c->lr=0x803E82A0u; f_80403D44(c); // 803E829C
  {uint32_t ea=c->r[30]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E82A0
  c->r[3]=c->r[31]|c->r[31]; // 803E82A4
  c->r[4]=0u+0x0000000Au; // 803E82A8
  c->lr=0x803E82B0u; f_80403BC4(c); // 803E82AC
  goto L_803E82F4; // 803E82B0
L_803E82B4:;
  c->r[3]=c->r[31]|c->r[31]; // 803E82B4
  c->r[5]=c->r[30]+0x00000098u; // 803E82B8
  c->r[4]=0u+0x00000008u; // 803E82BC
  c->lr=0x803E82C4u; f_80403D44(c); // 803E82C0
  c->r[3]=c->r[31]|c->r[31]; // 803E82C4
  c->r[5]=c->r[30]+0x000000B8u; // 803E82C8
  c->r[4]=0u+0x00000009u; // 803E82CC
  c->lr=0x803E82D4u; f_80403D44(c); // 803E82D0
  {uint32_t ea=c->r[30]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E82D4
  c->r[3]=c->r[31]|c->r[31]; // 803E82D8
  c->r[4]=0u+0x0000000Bu; // 803E82DC
  c->lr=0x803E82E4u; f_80403BC4(c); // 803E82E0
  {uint32_t ea=c->r[30]+0x0000015Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E82E4
  c->r[3]=c->r[31]|c->r[31]; // 803E82E8
  c->r[4]=0u+0x0000000Cu; // 803E82EC
  c->lr=0x803E82F4u; f_80403BC4(c); // 803E82F0
L_803E82F4:;
  c->r[3]=c->r[31]|c->r[31]; // 803E82F4
  c->r[5]=c->r[30]+0x000000D8u; // 803E82F8
  c->r[4]=0u+0x000000C1u; // 803E82FC
  c->lr=0x803E8304u; f_80403D44(c); // 803E8300
  c->r[3]=c->r[31]|c->r[31]; // 803E8304
  c->r[5]=c->r[30]+0x00000118u; // 803E8308
  c->r[4]=0u+0x000000C2u; // 803E830C
  c->lr=0x803E8314u; f_80403D44(c); // 803E8310
  c->r[3]=c->r[31]|c->r[31]; // 803E8314
  c->r[5]=c->r[30]+0x000000F8u; // 803E8318
  c->r[4]=0u+0x000000C3u; // 803E831C
  c->lr=0x803E8324u; f_80403D44(c); // 803E8320
  c->r[3]=c->r[31]|c->r[31]; // 803E8324
  c->r[5]=c->r[30]+0x00000138u; // 803E8328
  c->r[4]=0u+0x000000C4u; // 803E832C
  c->lr=0x803E8334u; f_80403D44(c); // 803E8330
  c->r[5]=R32(c->r[30]+0x0000016Cu); // 803E8334
  c->r[3]=c->r[31]|c->r[31]; // 803E8338
  c->r[4]=0u+0x00000033u; // 803E833C
  c->lr=0x803E8344u; f_80403B54(c); // 803E8340
  {uint32_t ea=c->r[30]+0x00000170u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8344
  c->r[3]=c->r[31]|c->r[31]; // 803E8348
  c->r[4]=0u+0x0000001Du; // 803E834C
  c->lr=0x803E8354u; f_80403BC4(c); // 803E8350
  {uint32_t ea=c->r[30]+0x00000164u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8354
  c->r[3]=c->r[31]|c->r[31]; // 803E8358
  c->r[4]=0u+0x0000000Eu; // 803E835C
  c->lr=0x803E8364u; f_80403BC4(c); // 803E8360
  c->r[5]=R32(c->r[30]+0x00000188u); // 803E8364
  c->r[3]=c->r[31]|c->r[31]; // 803E8368
  c->r[4]=0u+0x00000014u; // 803E836C
  c->lr=0x803E8374u; f_80403B54(c); // 803E8370
  c->r[5]=R32(c->r[30]+0x00000168u); // 803E8374
  cmps(c,0,(int32_t)c->r[5],0); // 803E8378
  if (crb(c,2)) { goto L_803E838C; } // 803E837C
  c->r[3]=c->r[31]|c->r[31]; // 803E8380
  c->r[4]=0u+0x00000012u; // 803E8384
  c->lr=0x803E838Cu; f_80403C34(c); // 803E8388
L_803E838C:;
  c->r[5]=R32(c->r[30]+0x00000174u); // 803E838C
  c->r[3]=c->r[31]|c->r[31]; // 803E8390
  c->r[4]=0u+0x0000000Fu; // 803E8394
  c->lr=0x803E839Cu; f_80403B54(c); // 803E8398
  c->r[5]=R32(c->r[30]+0x00000178u); // 803E839C
  c->r[3]=c->r[31]|c->r[31]; // 803E83A0
  c->r[4]=0u+0x00000010u; // 803E83A4
  c->lr=0x803E83ACu; f_80403B54(c); // 803E83A8
  {uint32_t ea=c->r[30]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E83AC
  c->r[3]=c->r[31]|c->r[31]; // 803E83B0
  c->r[4]=0u+0x00000011u; // 803E83B4
  c->lr=0x803E83BCu; f_80403BC4(c); // 803E83B8
  c->r[5]=R32(c->r[30]+0x00000180u); // 803E83BC
  c->r[3]=c->r[31]|c->r[31]; // 803E83C0
  c->r[4]=0u+0x00000013u; // 803E83C4
  c->lr=0x803E83CCu; f_80403CA4(c); // 803E83C8
  c->r[5]=R32(c->r[30]+0x00000184u); // 803E83CC
  c->r[3]=c->r[31]|c->r[31]; // 803E83D0
  c->r[4]=0u+0x00000017u; // 803E83D4
  c->lr=0x803E83DCu; f_80403CA4(c); // 803E83D8
  c->r[5]=R32(c->r[30]+0x0000018Cu); // 803E83DC
  c->r[3]=c->r[31]|c->r[31]; // 803E83E0
  c->r[4]=0u+0x00000015u; // 803E83E4
  c->lr=0x803E83ECu; f_80403B54(c); // 803E83E8
  c->r[5]=R32(c->r[30]+0x000001C8u); // 803E83EC
  c->r[3]=c->r[31]|c->r[31]; // 803E83F0
  c->r[4]=0u+0x0000001Bu; // 803E83F4
  c->lr=0x803E83FCu; f_80403B54(c); // 803E83F8
  {uint32_t ea=c->r[30]+0x00000194u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E83FC
  c->r[3]=c->r[31]|c->r[31]; // 803E8400
  c->r[4]=0u+0x0000001Cu; // 803E8404
  c->lr=0x803E840Cu; f_80403BC4(c); // 803E8408
  c->r[5]=R32(c->r[30]+0x00000190u); // 803E840C
  c->r[3]=c->r[31]|c->r[31]; // 803E8410
  c->r[4]=0u+0x00000016u; // 803E8414
  c->lr=0x803E841Cu; f_80403B54(c); // 803E8418
  c->r[5]=R32(c->r[30]+0x000001C0u); // 803E841C
  c->r[3]=c->r[31]|c->r[31]; // 803E8420
  c->r[4]=0u+0x00000018u; // 803E8424
  c->lr=0x803E842Cu; f_80403B54(c); // 803E8428
  c->r[5]=R32(c->r[30]+0x000001C4u); // 803E842C
  c->r[3]=c->r[31]|c->r[31]; // 803E8430
  c->r[4]=0u+0x00000019u; // 803E8434
  c->lr=0x803E843Cu; f_80403B54(c); // 803E8438
  {uint32_t ea=c->r[30]+0x000001CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E843C
  c->r[3]=c->r[31]|c->r[31]; // 803E8440
  c->r[4]=0u+0x0000001Au; // 803E8444
  c->lr=0x803E844Cu; f_80403BC4(c); // 803E8448
  c->r[5]=R32(c->r[30]+0x000001D0u); // 803E844C
  c->r[3]=c->r[31]|c->r[31]; // 803E8450
  c->r[4]=0u+0x0000001Eu; // 803E8454
  c->lr=0x803E845Cu; f_80403B54(c); // 803E8458
  c->r[3]=c->r[31]|c->r[31]; // 803E845C
  c->r[5]=c->r[30]+0x00000198u; // 803E8460
  c->r[4]=0u+0x0000001Fu; // 803E8464
  c->lr=0x803E846Cu; f_80403D44(c); // 803E8468
  c->r[5]=R32(c->r[30]+0x000001B8u); // 803E846C
  c->r[3]=c->r[31]|c->r[31]; // 803E8470
  c->r[4]=0u+0x00000020u; // 803E8474
  c->lr=0x803E847Cu; f_80403B54(c); // 803E8478
  c->r[3]=c->r[31]|c->r[31]; // 803E847C
  c->r[5]=c->r[30]+0x000001D4u; // 803E8480
  c->r[4]=0u+0x00000021u; // 803E8484
  c->lr=0x803E848Cu; f_80403D44(c); // 803E8488
  c->r[5]=R32(c->r[30]+0x000001BCu); // 803E848C
  c->r[3]=c->r[31]|c->r[31]; // 803E8490
  c->r[4]=0u+0x00000022u; // 803E8494
  c->lr=0x803E849Cu; f_80403B54(c); // 803E8498
  c->r[0]=R32(c->r[30]+0x00000060u); // 803E849C
  c->r[3]=c->r[31]|c->r[31]; // 803E84A0
  c->r[4]=0u+0x00000062u; // 803E84A4
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 803E84A8
  c->lr=0x803E84B0u; f_80403B54(c); // 803E84AC
  c->r[5]=R32(c->r[30]+0x00000064u); // 803E84B0
  c->r[3]=c->r[31]|c->r[31]; // 803E84B4
  c->r[4]=0u+0x00000063u; // 803E84B8
  c->lr=0x803E84C0u; f_80403B54(c); // 803E84BC
  {uint32_t ea=c->r[30]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E84C0
  c->r[3]=c->r[31]|c->r[31]; // 803E84C4
  c->r[4]=0u+0x000000C0u; // 803E84C8
  c->lr=0x803E84D0u; f_80403BC4(c); // 803E84CC
  c->r[5]=R32(c->r[30]+0x00000208u); // 803E84D0
  c->r[3]=c->r[31]|c->r[31]; // 803E84D4
  c->r[4]=0u+0x00000026u; // 803E84D8
  c->lr=0x803E84E0u; f_80403B54(c); // 803E84DC
  {uint32_t ea=c->r[30]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E84E0
  c->r[3]=c->r[31]|c->r[31]; // 803E84E4
  c->r[4]=0u+0x00000027u; // 803E84E8
  c->lr=0x803E84F0u; f_80403BC4(c); // 803E84EC
  {uint32_t ea=c->r[30]+0x00000210u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E84F0
  c->r[3]=c->r[31]|c->r[31]; // 803E84F4
  c->r[4]=0u+0x00000028u; // 803E84F8
  c->lr=0x803E8500u; f_80403BC4(c); // 803E84FC
  {uint32_t ea=c->r[30]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8500
  c->r[3]=c->r[31]|c->r[31]; // 803E8504
  c->r[4]=0u+0x00000029u; // 803E8508
  c->lr=0x803E8510u; f_80403BC4(c); // 803E850C
  {uint32_t ea=c->r[30]+0x00000218u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8510
  c->r[3]=c->r[31]|c->r[31]; // 803E8514
  c->r[4]=0u+0x0000002Au; // 803E8518
  c->lr=0x803E8520u; f_80403BC4(c); // 803E851C
  c->r[5]=R32(c->r[30]+0x0000021Cu); // 803E8520
  cmps(c,0,(int32_t)c->r[5],0); // 803E8524
  if (crb(c,2)) { goto L_803E8538; } // 803E8528
  c->r[3]=c->r[31]|c->r[31]; // 803E852C
  c->r[4]=0u+0x0000002Bu; // 803E8530
  c->lr=0x803E8538u; f_80403D44(c); // 803E8534
L_803E8538:;
  c->r[5]=R32(c->r[30]+0x00000220u); // 803E8538
  cmps(c,0,(int32_t)c->r[5],0); // 803E853C
  if (crb(c,2)) { goto L_803E8550; } // 803E8540
  c->r[3]=c->r[31]|c->r[31]; // 803E8544
  c->r[4]=0u+0x0000002Cu; // 803E8548
  c->lr=0x803E8550u; f_80403D44(c); // 803E854C
L_803E8550:;
  c->r[5]=R32(c->r[30]+0x0000006Cu); // 803E8550
  c->r[3]=c->r[31]|c->r[31]; // 803E8554
  c->r[4]=0u+0x0000002Du; // 803E8558
  c->lr=0x803E8560u; f_80403B54(c); // 803E855C
  {uint32_t ea=c->r[30]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8560
  c->r[3]=c->r[31]|c->r[31]; // 803E8564
  c->r[4]=0u+0x0000002Eu; // 803E8568
  c->lr=0x803E8570u; f_80403BC4(c); // 803E856C
  c->r[5]=R32(c->r[30]+0x00000074u); // 803E8570
  c->r[3]=c->r[31]|c->r[31]; // 803E8574
  c->r[4]=0u+0x0000002Fu; // 803E8578
  c->lr=0x803E8580u; f_80403B54(c); // 803E857C
  c->r[5]=R32(c->r[30]+0x00000078u); // 803E8580
  c->r[3]=c->r[31]|c->r[31]; // 803E8584
  c->r[4]=0u+0x00000030u; // 803E8588
  c->lr=0x803E8590u; f_80403B54(c); // 803E858C
  c->r[5]=R32(c->r[30]+0x0000007Cu); // 803E8590
  c->r[3]=c->r[31]|c->r[31]; // 803E8594
  c->r[4]=0u+0x00000031u; // 803E8598
  c->lr=0x803E85A0u; f_80403B54(c); // 803E859C
  c->r[5]=R32(c->r[30]+0x00000084u); // 803E85A0
  c->r[3]=c->r[31]|c->r[31]; // 803E85A4
  c->r[4]=0u+0x00000044u; // 803E85A8
  c->lr=0x803E85B0u; f_80403B54(c); // 803E85AC
  c->r[5]=R32(c->r[30]+0x00000088u); // 803E85B0
  c->r[3]=c->r[31]|c->r[31]; // 803E85B4
  c->r[4]=0u+0x00000045u; // 803E85B8
  c->lr=0x803E85C0u; f_80403B54(c); // 803E85BC
  c->r[5]=R32(c->r[30]+0x0000008Cu); // 803E85C0
  c->r[3]=c->r[31]|c->r[31]; // 803E85C4
  c->r[4]=0u+0x00000046u; // 803E85C8
  c->lr=0x803E85D0u; f_80403B54(c); // 803E85CC
  {uint32_t ea=c->r[30]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E85D0
  c->r[3]=c->r[31]|c->r[31]; // 803E85D4
  c->r[4]=0u+0x00000047u; // 803E85D8
  c->lr=0x803E85E0u; f_80403BC4(c); // 803E85DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803E85E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803E85E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803E85E8
  c->lr=c->r[0]; // 803E85EC
  c->r[1]=c->r[1]+0x00000010u; // 803E85F0
  return; // 803E85F4
}

// fn_803E85F8
void f_803E85F8(Ctx* __restrict c) {
  trace_call(0x803E85F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E85F8
  c->r[0]=0u+0x43300000u; // 803E85FC
  cmps(c,0,(int32_t)c->r[5],1); // 803E8600
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E8604
  W32(c->r[1]+0x00000010u,c->r[0]); // 803E8608
  if (crb(c,2)) { goto L_803E8634; } // 803E860C
  cmps(c,0,(int32_t)c->r[5],2); // 803E8610
  if (crb(c,2)) { goto L_803E8640; } // 803E8614
  cmps(c,0,(int32_t)c->r[5],3); // 803E8618
  if (crb(c,2)) { goto L_803E864C; } // 803E861C
  cmps(c,0,(int32_t)c->r[5],4); // 803E8620
  if (crb(c,2)) { goto L_803E8658; } // 803E8624
  c->r[5]=0u+0x00000010u; // 803E8628
  c->r[7]=0u+0x00000004u; // 803E862C
  goto L_803E8660; // 803E8630
L_803E8634:;
  c->r[5]=0u+0x00000008u; // 803E8634
  c->r[7]=0u+0x00000003u; // 803E8638
  goto L_803E8660; // 803E863C
L_803E8640:;
  c->r[5]=0u+0x00000004u; // 803E8640
  c->r[7]=0u+0x00000002u; // 803E8644
  goto L_803E8660; // 803E8648
L_803E864C:;
  c->r[5]=0u+0x00000002u; // 803E864C
  c->r[7]=0u+0x00000001u; // 803E8650
  goto L_803E8660; // 803E8654
L_803E8658:;
  c->r[5]=0u+0x00000001u; // 803E8658
  c->r[7]=0u+0x00000000u; // 803E865C
L_803E8660:;
  c->r[0]=R32(c->r[3]+0x00000168u); // 803E8660
  cmps(c,0,(int32_t)c->r[0],0); // 803E8664
  if (crb(c,2)) { goto L_803E8678; } // 803E8668
  c->r[0]=R32(c->r[3]+0x0000018Cu); // 803E866C
  cmps(c,0,(int32_t)c->r[0],-1); // 803E8670
  if (!crb(c,2)) { goto L_803E8694; } // 803E8674
L_803E8678:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8678
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E867C
  {uint32_t ea=c->r[3]+0x000001F8u; WF32(ea,c->f[1]);} // 803E8680
  {uint32_t ea=c->r[3]+0x000001F4u; WF32(ea,c->f[1]);} // 803E8684
  {uint32_t ea=c->r[3]+0x00000200u; WF32(ea,c->f[0]);} // 803E8688
  {uint32_t ea=c->r[3]+0x000001FCu; WF32(ea,c->f[0]);} // 803E868C
  goto L_803E8724; // 803E8690
L_803E8694:;
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 803E8694
  c->r[5]=c->r[5]^0x80000000u; // 803E8698
  c->r[0]=c->r[4]&c->r[0]; // 803E869C
  W32(c->r[1]+0x00000014u,c->r[5]); // 803E86A0
  c->r[6]=c->r[0]^0x80000000u; // 803E86A4
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[7]=RF64(ea);} // 803E86A8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 803E86AC
  c->r[0]=sraw(c,c->r[4],(c->r[7])&63); // 803E86B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 803E86B4
  c->r[0]=c->r[0]^0x80000000u; // 803E86B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803E86BC
  W32(c->r[1]+0x00000014u,c->r[5]); // 803E86C0
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[7]); // 803E86C4
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[7]); // 803E86C8
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E86CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803E86D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E86D4
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[5]); // 803E86D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803E86DC
  W32(c->r[1]+0x00000014u,c->r[5]); // 803E86E0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803E86E4
  {uint32_t ea=c->r[3]+0x000001F4u; WF32(ea,c->f[5]);} // 803E86E8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 803E86EC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[7]); // 803E86F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803E86F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803E86F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[7]); // 803E86FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[7]); // 803E8700
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 803E8704
  {uint32_t ea=c->r[3]+0x000001F8u; WF32(ea,c->f[3]);} // 803E8708
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 803E870C
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 803E8710
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 803E8714
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 803E8718
  {uint32_t ea=c->r[3]+0x000001FCu; WF32(ea,c->f[1]);} // 803E871C
  {uint32_t ea=c->r[3]+0x00000200u; WF32(ea,c->f[0]);} // 803E8720
L_803E8724:;
  c->r[1]=c->r[1]+0x00000020u; // 803E8724
  return; // 803E8728
}

// fn_803E872C
void f_803E872C(Ctx* __restrict c) {
  trace_call(0x803E872Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E872C
  c->r[0]=c->lr; // 803E8730
  W32(c->r[1]+0x00000024u,c->r[0]); // 803E8734
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803E8738
  c->r[31]=c->r[4]|c->r[4]; // 803E873C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803E8740
  c->r[30]=c->r[3]|c->r[3]; // 803E8744
  c->r[7]=R32(c->r[4]+0x00000068u); // 803E8748
  cmps(c,0,(int32_t)c->r[7],0); // 803E874C
  if (!crb(c,2)) { goto L_803E8878; } // 803E8750
  c->r[3]=0u+0x80570000u; // 803E8754
  c->r[3]=c->r[3]+0x000041A8u; // 803E8758
  if (crb(c,2)) { goto L_803E880C; } // 803E875C
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,0,ea,0,0);} // 803E8760
  c->r[6]=c->r[1]+0x00000008u; // 803E8764
  {uint32_t ea=c->r[7]+0x00000020u; psq_load(c,1,ea,0,0);} // 803E8768
  c->r[5]=c->r[1]+0x00000010u; // 803E876C
  {uint32_t ea=c->r[7]+0x00000030u; psq_load(c,2,ea,0,0);} // 803E8770
  {uint32_t ea=c->r[7]+0x00000040u; psq_load(c,4,ea,0,0);} // 803E8774
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 803E8778
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 803E877C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E8780
  {double t0=S(c->f[0]*c->f[4]), t1=S(c->ps1[0]*c->ps1[4]); c->f[7]=t0; c->ps1[7]=t1;} // 803E8784
  {uint32_t ea=c->r[7]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8788
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 803E878C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803E8790
  {uint32_t ea=c->r[7]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8794
  {double t0=S(c->f[6]+c->ps1[6]), t1=S(c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 803E8798
  {uint32_t ea=c->r[7]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E879C
  {double t0=S(c->f[7]+c->ps1[7]), t1=S(c->ps1[7]); c->f[6]=t0; c->ps1[6]=t1;} // 803E87A0
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E87A4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803E87A8
  c->r[4]=c->r[6]|c->r[6]; // 803E87AC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[4]); // 803E87B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803E87B4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 803E87B8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 803E87BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803E87C0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E87C4
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E87C8
  {uint32_t ea=c->r[7]+0x00000010u; psq_load(c,1,ea,0,0);} // 803E87CC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E87D0
  {uint32_t ea=c->r[7]+0x00000018u; psq_load(c,0,ea,0,0);} // 803E87D4
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 803E87D8
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E87DC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,3,ea,0,0);} // 803E87E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E87E4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E87E8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E87EC
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,0,ea,0,0);} // 803E87F0
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E87F4
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E87F8
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E87FC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E8800
  c->lr=0x803E8808u; f_803FDFB4(c); // 803E8804
  goto L_803E8814; // 803E8808
L_803E880C:;
  c->r[4]=c->r[4]+0x00000038u; // 803E880C
  c->lr=0x803E8814u; f_803FDFB4(c); // 803E8810
L_803E8814:;
  c->r[0]=R32(c->r[30]+0x000001B8u); // 803E8814
  {uint32_t ea=c->r[30]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E8818
  cmps(c,0,(int32_t)c->r[0],0); // 803E881C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E8820
  if (!crb(c,2)) { goto L_803E8878; } // 803E8824
  {uint32_t ea=c->r[30]+0x00000204u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E8828
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E882C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[2]); // 803E8830
  {uint32_t ea=c->r[2]+0xFFFFA7F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E8834
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 803E8838
  fcmp(c,0,c->f[1],c->f[0]); // 803E883C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 803E8840
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803E8844
  if (!crb(c,1)) { goto L_803E8878; } // 803E8848
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E884C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 803E8850
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E8854
  fcmp(c,0,c->f[2],c->f[0]); // 803E8858
  if (!crb(c,0)) { goto L_803E8878; } // 803E885C
  c->r[12]=R32(c->r[30]+0x00000000u); // 803E8860
  c->r[3]=c->r[30]|c->r[30]; // 803E8864
  c->r[4]=c->r[31]|c->r[31]; // 803E8868
  c->r[12]=R32(c->r[12]+0x00000078u); // 803E886C
  c->ctr=c->r[12]; // 803E8870
  if (true) { c->lr=0x803E8878u; dispatch(c,c->ctr); } // 803E8874
L_803E8878:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E8878
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803E887C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803E8880
  c->lr=c->r[0]; // 803E8884
  c->r[1]=c->r[1]+0x00000020u; // 803E8888
  return; // 803E888C
}

// fn_803E8890
void f_803E8890(Ctx* __restrict c) {
  trace_call(0x803E8890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E8890
  c->r[0]=c->lr; // 803E8894
  W32(c->r[1]+0x00000024u,c->r[0]); // 803E8898
  c->r[7]=R32(c->r[4]+0x00000068u); // 803E889C
  cmps(c,0,(int32_t)c->r[7],0); // 803E88A0
  if (crb(c,2)) { goto L_803E8954; } // 803E88A4
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,3,ea,0,0);} // 803E88A8
  c->r[5]=c->r[1]+0x00000008u; // 803E88AC
  {uint32_t ea=c->r[7]+0x00000020u; psq_load(c,0,ea,0,0);} // 803E88B0
  c->r[6]=c->r[1]+0x00000010u; // 803E88B4
  {uint32_t ea=c->r[7]+0x00000030u; psq_load(c,1,ea,0,0);} // 803E88B8
  {uint32_t ea=c->r[4]+0x00000040u; c->f[7]=c->ps1[7]=RF32(ea);} // 803E88BC
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E88C0
  {uint32_t ea=c->r[7]+0x00000040u; psq_load(c,2,ea,0,0);} // 803E88C4
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E88C8
  {uint32_t ea=c->r[7]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E88CC
  c->r[4]=c->r[5]|c->r[5]; // 803E88D0
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803E88D4
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803E88D8
  {uint32_t ea=c->r[7]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 803E88DC
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803E88E0
  {uint32_t ea=c->r[7]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E88E4
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803E88E8
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803E88EC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E88F0
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803E88F4
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803E88F8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803E88FC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803E8900
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803E8904
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803E8908
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E890C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E8910
  {uint32_t ea=c->r[7]+0x00000010u; psq_load(c,2,ea,0,0);} // 803E8914
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E8918
  {uint32_t ea=c->r[7]+0x00000018u; psq_load(c,3,ea,0,0);} // 803E891C
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803E8920
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803E8924
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E8928
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803E892C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,2,ea,0,0);} // 803E8930
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E8934
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,3,ea,0,0);} // 803E8938
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803E893C
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803E8940
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E8944
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803E8948
  c->lr=0x803E8950u; f_803FDFB4(c); // 803E894C
  goto L_803E895C; // 803E8950
L_803E8954:;
  c->r[4]=c->r[4]+0x00000038u; // 803E8954
  c->lr=0x803E895Cu; f_803FDFB4(c); // 803E8958
L_803E895C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803E895C
  c->lr=c->r[0]; // 803E8960
  c->r[1]=c->r[1]+0x00000020u; // 803E8964
  return; // 803E8968
}

// fn_803E896C
void f_803E896C(Ctx* __restrict c) {
  trace_call(0x803E896Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E896C
  c->r[0]=c->lr; // 803E8970
  W32(c->r[1]+0x00000044u,c->r[0]); // 803E8974
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 803E8978
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 803E897C
  c->r[0]=0u+0x43300000u; // 803E8980
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=RF64(ea);} // 803E8984
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803E8988
  c->r[31]=c->r[4]|c->r[4]; // 803E898C
  W32(c->r[1]+0x00000028u,c->r[30]); // 803E8990
  c->r[30]=c->r[3]|c->r[3]; // 803E8994
  W32(c->r[1]+0x00000024u,c->r[29]); // 803E8998
  c->r[5]=R32(c->r[3]+0x0000016Cu); // 803E899C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803E89A0
  c->r[0]=c->r[5]^0x80000000u; // 803E89A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E89A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E89AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803E89B0
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803E89B4
  c->r[29]=R32(c->r[3]+0x0000009Cu); // 803E89B8
  cmps(c,0,(int32_t)c->r[29],0); // 803E89BC
  if (!crb(c,2)) { goto L_803E89CC; } // 803E89C0
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E89C4
  goto L_803E8B10; // 803E89C8
L_803E89CC:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803E89CC
  cmps(c,0,(int32_t)c->r[0],0); // 803E89D0
  if (crb(c,2)) { goto L_803E89F4; } // 803E89D4
  cmps(c,0,(int32_t)c->r[0],1); // 803E89D8
  if (crb(c,2)) { goto L_803E8A24; } // 803E89DC
  cmps(c,0,(int32_t)c->r[0],2); // 803E89E0
  if (crb(c,2)) { goto L_803E8AAC; } // 803E89E4
  cmps(c,0,(int32_t)c->r[0],3); // 803E89E8
  if (crb(c,2)) { goto L_803E8B04; } // 803E89EC
  goto L_803E8B0C; // 803E89F0
L_803E89F4:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E89F4
  c->r[9]=c->r[31]|c->r[31]; // 803E89F8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E89FC
  c->r[3]=c->r[29]+0x00000098u; // 803E8A00
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E8A04
  c->r[4]=c->r[29]+0x000000B8u; // 803E8A08
  c->r[5]=c->r[29]+0x000000D8u; // 803E8A0C
  c->r[6]=c->r[29]+0x000000F8u; // 803E8A10
  c->lr=0x803E8A18u; f_803E5520(c); // 803E8A14
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8A18
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E8A1C
  goto L_803E8B10; // 803E8A20
L_803E8A24:;
  c->r[5]=0u+0x80570000u; // 803E8A24
  c->r[0]=R32(c->r[3]+0x000000A8u); // 803E8A28
  c->r[5]=c->r[5]+0x000041A8u; // 803E8A2C
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8A30
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8A34
  cmps(c,0,(int32_t)c->r[0],0); // 803E8A38
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E8A3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8A40
  if (crb(c,2)) { goto L_803E8A5C; } // 803E8A44
  cmps(c,0,(int32_t)c->r[4],0); // 803E8A48
  if (crb(c,2)) { goto L_803E8A5C; } // 803E8A4C
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8A50
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803E8A54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8A58
L_803E8A5C:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8A5C
  fcmp(c,0,c->f[0],c->f[31]); // 803E8A60
  if (!crb(c,2)) { goto L_803E8A6C; } // 803E8A64
  goto L_803E8A7C; // 803E8A68
L_803E8A6C:;
  c->f[2]=c->f[31]; // 803E8A6C
  c->lr=0x803E8A74u; f_803AD468(c); // 803E8A70
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E8A74
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803E8A78
L_803E8A7C:;
  c->f[1]=c->f[0]; // 803E8A7C
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E8A80
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E8A84
  c->r[9]=c->r[31]|c->r[31]; // 803E8A88
  c->r[3]=c->r[29]+0x00000098u; // 803E8A8C
  c->r[4]=c->r[29]+0x000000B8u; // 803E8A90
  c->r[5]=c->r[29]+0x000000D8u; // 803E8A94
  c->r[6]=c->r[29]+0x000000F8u; // 803E8A98
  c->lr=0x803E8AA0u; f_803E5520(c); // 803E8A9C
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8AA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E8AA4
  goto L_803E8B10; // 803E8AA8
L_803E8AAC:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E8AAC
  if (crb(c,2)) { goto L_803E8AFC; } // 803E8AB0
  c->r[4]=R32(c->r[4]+0x00000068u); // 803E8AB4
  cmps(c,0,(int32_t)c->r[4],0); // 803E8AB8
  if (crb(c,2)) { goto L_803E8AFC; } // 803E8ABC
  c->r[0]=R32(c->r[3]+0x000000B0u); // 803E8AC0
  c->r[9]=c->r[31]|c->r[31]; // 803E8AC4
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E8AC8
  c->r[3]=c->r[29]+0x00000098u; // 803E8ACC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E8AD0
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E8AD4
  c->r[5]=c->r[4]+c->r[0]; // 803E8AD8
  c->r[4]=c->r[29]+0x000000B8u; // 803E8ADC
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8AE0
  c->r[5]=c->r[29]+0x000000D8u; // 803E8AE4
  c->r[6]=c->r[29]+0x000000F8u; // 803E8AE8
  c->lr=0x803E8AF0u; f_803E5520(c); // 803E8AEC
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8AF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E8AF4
  goto L_803E8B10; // 803E8AF8
L_803E8AFC:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8AFC
  goto L_803E8B10; // 803E8B00
L_803E8B04:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8B04
  goto L_803E8B10; // 803E8B08
L_803E8B0C:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8B0C
L_803E8B10:;
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 803E8B10
  c->r[29]=R32(c->r[30]+0x000000BCu); // 803E8B14
  cmps(c,0,(int32_t)c->r[29],0); // 803E8B18
  if (!crb(c,2)) { goto L_803E8B28; } // 803E8B1C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8B20
  goto L_803E8C6C; // 803E8B24
L_803E8B28:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 803E8B28
  cmps(c,0,(int32_t)c->r[0],0); // 803E8B2C
  if (crb(c,2)) { goto L_803E8B50; } // 803E8B30
  cmps(c,0,(int32_t)c->r[0],1); // 803E8B34
  if (crb(c,2)) { goto L_803E8B80; } // 803E8B38
  cmps(c,0,(int32_t)c->r[0],2); // 803E8B3C
  if (crb(c,2)) { goto L_803E8C08; } // 803E8B40
  cmps(c,0,(int32_t)c->r[0],3); // 803E8B44
  if (crb(c,2)) { goto L_803E8C60; } // 803E8B48
  goto L_803E8C68; // 803E8B4C
L_803E8B50:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8B50
  c->r[9]=c->r[31]|c->r[31]; // 803E8B54
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E8B58
  c->r[3]=c->r[29]+0x00000098u; // 803E8B5C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E8B60
  c->r[4]=c->r[29]+0x000000B8u; // 803E8B64
  c->r[5]=c->r[29]+0x000000D8u; // 803E8B68
  c->r[6]=c->r[29]+0x000000F8u; // 803E8B6C
  c->lr=0x803E8B74u; f_803E5520(c); // 803E8B70
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8B74
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8B78
  goto L_803E8C6C; // 803E8B7C
L_803E8B80:;
  c->r[3]=0u+0x80570000u; // 803E8B80
  c->r[0]=R32(c->r[30]+0x000000C8u); // 803E8B84
  c->r[3]=c->r[3]+0x000041A8u; // 803E8B88
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8B8C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8B90
  cmps(c,0,(int32_t)c->r[0],0); // 803E8B94
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E8B98
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8B9C
  if (crb(c,2)) { goto L_803E8BB8; } // 803E8BA0
  cmps(c,0,(int32_t)c->r[31],0); // 803E8BA4
  if (crb(c,2)) { goto L_803E8BB8; } // 803E8BA8
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8BAC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803E8BB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8BB4
L_803E8BB8:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8BB8
  fcmp(c,0,c->f[0],c->f[31]); // 803E8BBC
  if (!crb(c,2)) { goto L_803E8BC8; } // 803E8BC0
  goto L_803E8BD8; // 803E8BC4
L_803E8BC8:;
  c->f[2]=c->f[31]; // 803E8BC8
  c->lr=0x803E8BD0u; f_803AD468(c); // 803E8BCC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E8BD0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803E8BD4
L_803E8BD8:;
  c->f[1]=c->f[0]; // 803E8BD8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E8BDC
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E8BE0
  c->r[9]=c->r[31]|c->r[31]; // 803E8BE4
  c->r[3]=c->r[29]+0x00000098u; // 803E8BE8
  c->r[4]=c->r[29]+0x000000B8u; // 803E8BEC
  c->r[5]=c->r[29]+0x000000D8u; // 803E8BF0
  c->r[6]=c->r[29]+0x000000F8u; // 803E8BF4
  c->lr=0x803E8BFCu; f_803E5520(c); // 803E8BF8
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8BFC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8C00
  goto L_803E8C6C; // 803E8C04
L_803E8C08:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E8C08
  if (crb(c,2)) { goto L_803E8C58; } // 803E8C0C
  c->r[4]=R32(c->r[31]+0x00000068u); // 803E8C10
  cmps(c,0,(int32_t)c->r[4],0); // 803E8C14
  if (crb(c,2)) { goto L_803E8C58; } // 803E8C18
  c->r[0]=R32(c->r[30]+0x000000D0u); // 803E8C1C
  c->r[9]=c->r[31]|c->r[31]; // 803E8C20
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E8C24
  c->r[3]=c->r[29]+0x00000098u; // 803E8C28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E8C2C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E8C30
  c->r[5]=c->r[4]+c->r[0]; // 803E8C34
  c->r[4]=c->r[29]+0x000000B8u; // 803E8C38
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8C3C
  c->r[5]=c->r[29]+0x000000D8u; // 803E8C40
  c->r[6]=c->r[29]+0x000000F8u; // 803E8C44
  c->lr=0x803E8C4Cu; f_803E5520(c); // 803E8C48
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8C4C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8C50
  goto L_803E8C6C; // 803E8C54
L_803E8C58:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8C58
  goto L_803E8C6C; // 803E8C5C
L_803E8C60:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8C60
  goto L_803E8C6C; // 803E8C64
L_803E8C68:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8C68
L_803E8C6C:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8C6C
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[1]);} // 803E8C70
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 803E8C74
  c->r[0]=R32(c->r[30]+0x000001D0u); // 803E8C78
  cmps(c,0,(int32_t)c->r[0],0); // 803E8C7C
  if (crb(c,2)) { goto L_803E8D0C; } // 803E8C80
  c->r[3]=0u+0x00190000u; // 803E8C84
  c->r[4]=R32(c->r[13]+0xFFFFF3F8u); // 803E8C88
  c->r[0]=c->r[3]+0x0000660Du; // 803E8C8C
  c->r[5]=0u+0x43300000u; // 803E8C90
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803E8C94
  c->r[4]=R32(c->r[30]+0x0000018Cu); // 803E8C98
  c->r[0]=R32(c->r[30]+0x000001C4u); // 803E8C9C
  W32(c->r[1]+0x00000008u,c->r[5]); // 803E8CA0
  c->r[4]=c->r[0]-c->r[4]; // 803E8CA4
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[4]=RF64(ea);} // 803E8CA8
  c->r[3]=c->r[3]+0x3C6F0000u; // 803E8CAC
  c->r[0]=c->r[4]+0x00000001u; // 803E8CB0
  c->r[3]=c->r[3]+0xFFFFF35Fu; // 803E8CB4
  W32(c->r[1]+0x00000010u,c->r[5]); // 803E8CB8
  c->r[0]=c->r[0]^0x80000000u; // 803E8CBC
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[2]=RF64(ea);} // 803E8CC0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E8CC4
  c->r[0]=rotl(c->r[3],28)&0x0FFFFFFFu; // 803E8CC8
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 803E8CCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E8CD0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803E8CD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803E8CD8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 803E8CDC
  {uint32_t ea=c->r[2]+0xFFFFA7CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8CE0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 803E8CE4
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8CE8
  W32(c->r[13]+0xFFFFF3F8u,c->r[3]); // 803E8CEC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803E8CF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803E8CF4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803E8CF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E8CFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 803E8D00
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 803E8D04
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 803E8D08
L_803E8D0C:;
  {uint32_t ea=c->r[30]+0x000001F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8D0C
  c->r[3]=0u+0x80570000u; // 803E8D10
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 803E8D14
  c->r[3]=c->r[3]+0x000041A8u; // 803E8D18
  {uint32_t ea=c->r[30]+0x000001FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8D1C
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 803E8D20
  {uint32_t ea=c->r[30]+0x000001F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8D24
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 803E8D28
  {uint32_t ea=c->r[30]+0x00000200u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8D2C
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 803E8D30
  c->r[0]=R32(c->r[13]+0xFFFFF408u); // 803E8D34
  c->r[4]=rotl(c->r[0],0)&0x0000000Fu; // 803E8D38
  c->r[0]=c->r[4]+0x00000040u; // 803E8D3C
  W16(c->r[31]+0x000000A6u,c->r[0]); // 803E8D40
  c->r[4]=R32(c->r[13]+0xFFFFF408u); // 803E8D44
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8D48
  c->r[0]=c->r[4]+0x00000007u; // 803E8D4C
  W32(c->r[13]+0xFFFFF408u,c->r[0]); // 803E8D50
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 803E8D54
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803E8D58
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803E8D5C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803E8D60
  c->r[30]=R32(c->r[1]+0x00000028u); // 803E8D64
  c->r[29]=R32(c->r[1]+0x00000024u); // 803E8D68
  c->r[0]=R32(c->r[1]+0x00000044u); // 803E8D6C
  c->lr=c->r[0]; // 803E8D70
  c->r[1]=c->r[1]+0x00000040u; // 803E8D74
  return; // 803E8D78
}

// fn_803E8D7C
void f_803E8D7C(Ctx* __restrict c) {
  trace_call(0x803E8D7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E8D7C
  c->r[0]=c->lr; // 803E8D80
  W32(c->r[1]+0x00000034u,c->r[0]); // 803E8D84
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803E8D88
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803E8D8C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8D90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803E8D94
  c->r[31]=c->r[3]|c->r[3]; // 803E8D98
  fcmp(c,0,c->f[0],c->f[2]); // 803E8D9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803E8DA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803E8DA4
  c->r[29]=c->r[4]|c->r[4]; // 803E8DA8
  if (!crb(c,2)) { goto L_803E8F0C; } // 803E8DAC
  c->r[30]=R32(c->r[3]+0x00000004u); // 803E8DB0
  cmps(c,0,(int32_t)c->r[30],0); // 803E8DB4
  if (!crb(c,2)) { goto L_803E8DC4; } // 803E8DB8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8DBC
  goto L_803E9068; // 803E8DC0
L_803E8DC4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 803E8DC4
  cmps(c,0,(int32_t)c->r[0],0); // 803E8DC8
  if (crb(c,2)) { goto L_803E8DEC; } // 803E8DCC
  cmps(c,0,(int32_t)c->r[0],1); // 803E8DD0
  if (crb(c,2)) { goto L_803E8E1C; } // 803E8DD4
  cmps(c,0,(int32_t)c->r[0],2); // 803E8DD8
  if (crb(c,2)) { goto L_803E8EA4; } // 803E8DDC
  cmps(c,0,(int32_t)c->r[0],3); // 803E8DE0
  if (crb(c,2)) { goto L_803E8EFC; } // 803E8DE4
  goto L_803E8F04; // 803E8DE8
L_803E8DEC:;
  c->f[1]=c->f[0]; // 803E8DEC
  c->r[7]=R32(c->r[30]+0x00000118u); // 803E8DF0
  c->r[8]=R32(c->r[30]+0x0000011Cu); // 803E8DF4
  c->r[9]=c->r[29]|c->r[29]; // 803E8DF8
  c->r[3]=c->r[30]+0x00000098u; // 803E8DFC
  c->r[4]=c->r[30]+0x000000B8u; // 803E8E00
  c->r[5]=c->r[30]+0x000000D8u; // 803E8E04
  c->r[6]=c->r[30]+0x000000F8u; // 803E8E08
  c->lr=0x803E8E10u; f_803E5520(c); // 803E8E0C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8E10
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8E14
  goto L_803E9068; // 803E8E18
L_803E8E1C:;
  c->r[5]=0u+0x80570000u; // 803E8E1C
  c->r[0]=R32(c->r[3]+0x00000010u); // 803E8E20
  c->r[5]=c->r[5]+0x000041A8u; // 803E8E24
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8E28
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8E2C
  cmps(c,0,(int32_t)c->r[0],0); // 803E8E30
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803E8E34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8E38
  if (crb(c,2)) { goto L_803E8E54; } // 803E8E3C
  cmps(c,0,(int32_t)c->r[4],0); // 803E8E40
  if (crb(c,2)) { goto L_803E8E54; } // 803E8E44
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8E48
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803E8E4C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8E50
L_803E8E54:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8E54
  fcmp(c,0,c->f[0],c->f[31]); // 803E8E58
  if (!crb(c,2)) { goto L_803E8E64; } // 803E8E5C
  goto L_803E8E74; // 803E8E60
L_803E8E64:;
  c->f[2]=c->f[31]; // 803E8E64
  c->lr=0x803E8E6Cu; f_803AD468(c); // 803E8E68
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E8E6C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803E8E70
L_803E8E74:;
  c->f[1]=c->f[0]; // 803E8E74
  c->r[7]=R32(c->r[30]+0x00000118u); // 803E8E78
  c->r[8]=R32(c->r[30]+0x0000011Cu); // 803E8E7C
  c->r[9]=c->r[29]|c->r[29]; // 803E8E80
  c->r[3]=c->r[30]+0x00000098u; // 803E8E84
  c->r[4]=c->r[30]+0x000000B8u; // 803E8E88
  c->r[5]=c->r[30]+0x000000D8u; // 803E8E8C
  c->r[6]=c->r[30]+0x000000F8u; // 803E8E90
  c->lr=0x803E8E98u; f_803E5520(c); // 803E8E94
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8E98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8E9C
  goto L_803E9068; // 803E8EA0
L_803E8EA4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E8EA4
  if (crb(c,2)) { goto L_803E8EF4; } // 803E8EA8
  c->r[4]=R32(c->r[4]+0x00000068u); // 803E8EAC
  cmps(c,0,(int32_t)c->r[4],0); // 803E8EB0
  if (crb(c,2)) { goto L_803E8EF4; } // 803E8EB4
  c->r[0]=R32(c->r[3]+0x00000018u); // 803E8EB8
  c->r[9]=c->r[29]|c->r[29]; // 803E8EBC
  c->r[7]=R32(c->r[30]+0x00000118u); // 803E8EC0
  c->r[3]=c->r[30]+0x00000098u; // 803E8EC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E8EC8
  c->r[8]=R32(c->r[30]+0x0000011Cu); // 803E8ECC
  c->r[5]=c->r[4]+c->r[0]; // 803E8ED0
  c->r[4]=c->r[30]+0x000000B8u; // 803E8ED4
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8ED8
  c->r[5]=c->r[30]+0x000000D8u; // 803E8EDC
  c->r[6]=c->r[30]+0x000000F8u; // 803E8EE0
  c->lr=0x803E8EE8u; f_803E5520(c); // 803E8EE4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8EE8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8EEC
  goto L_803E9068; // 803E8EF0
L_803E8EF4:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8EF4
  goto L_803E9068; // 803E8EF8
L_803E8EFC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8EFC
  goto L_803E9068; // 803E8F00
L_803E8F04:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8F04
  goto L_803E9068; // 803E8F08
L_803E8F0C:;
  c->r[30]=R32(c->r[3]+0x00000004u); // 803E8F0C
  cmps(c,0,(int32_t)c->r[30],0); // 803E8F10
  if (!crb(c,2)) { goto L_803E8F20; } // 803E8F14
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8F18
  goto L_803E9068; // 803E8F1C
L_803E8F20:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 803E8F20
  cmps(c,0,(int32_t)c->r[0],0); // 803E8F24
  if (crb(c,2)) { goto L_803E8F48; } // 803E8F28
  cmps(c,0,(int32_t)c->r[0],1); // 803E8F2C
  if (crb(c,2)) { goto L_803E8F7C; } // 803E8F30
  cmps(c,0,(int32_t)c->r[0],2); // 803E8F34
  if (crb(c,2)) { goto L_803E9004; } // 803E8F38
  cmps(c,0,(int32_t)c->r[0],3); // 803E8F3C
  if (crb(c,2)) { goto L_803E905C; } // 803E8F40
  goto L_803E9064; // 803E8F44
L_803E8F48:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 803E8F48
  c->r[7]=R32(c->r[30]+0x00000118u); // 803E8F4C
  c->r[8]=R32(c->r[30]+0x0000011Cu); // 803E8F50
  c->r[9]=c->r[29]|c->r[29]; // 803E8F54
  c->r[3]=c->r[30]+0x00000098u; // 803E8F58
  c->r[4]=c->r[30]+0x000000B8u; // 803E8F5C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803E8F60
  c->r[5]=c->r[30]+0x000000D8u; // 803E8F64
  c->r[6]=c->r[30]+0x000000F8u; // 803E8F68
  c->lr=0x803E8F70u; f_803E5520(c); // 803E8F6C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8F70
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8F74
  goto L_803E9068; // 803E8F78
L_803E8F7C:;
  c->r[5]=0u+0x80570000u; // 803E8F7C
  c->r[0]=R32(c->r[3]+0x00000010u); // 803E8F80
  c->r[5]=c->r[5]+0x000041A8u; // 803E8F84
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8F88
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E8F8C
  cmps(c,0,(int32_t)c->r[0],0); // 803E8F90
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803E8F94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8F98
  if (crb(c,2)) { goto L_803E8FB4; } // 803E8F9C
  cmps(c,0,(int32_t)c->r[4],0); // 803E8FA0
  if (crb(c,2)) { goto L_803E8FB4; } // 803E8FA4
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8FA8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803E8FAC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E8FB0
L_803E8FB4:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8FB4
  fcmp(c,0,c->f[0],c->f[31]); // 803E8FB8
  if (!crb(c,2)) { goto L_803E8FC4; } // 803E8FBC
  goto L_803E8FD4; // 803E8FC0
L_803E8FC4:;
  c->f[2]=c->f[31]; // 803E8FC4
  c->lr=0x803E8FCCu; f_803AD468(c); // 803E8FC8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E8FCC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803E8FD0
L_803E8FD4:;
  c->f[1]=c->f[0]; // 803E8FD4
  c->r[7]=R32(c->r[30]+0x00000118u); // 803E8FD8
  c->r[8]=R32(c->r[30]+0x0000011Cu); // 803E8FDC
  c->r[9]=c->r[29]|c->r[29]; // 803E8FE0
  c->r[3]=c->r[30]+0x00000098u; // 803E8FE4
  c->r[4]=c->r[30]+0x000000B8u; // 803E8FE8
  c->r[5]=c->r[30]+0x000000D8u; // 803E8FEC
  c->r[6]=c->r[30]+0x000000F8u; // 803E8FF0
  c->lr=0x803E8FF8u; f_803E5520(c); // 803E8FF4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E8FF8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E8FFC
  goto L_803E9068; // 803E9000
L_803E9004:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E9004
  if (crb(c,2)) { goto L_803E9054; } // 803E9008
  c->r[4]=R32(c->r[4]+0x00000068u); // 803E900C
  cmps(c,0,(int32_t)c->r[4],0); // 803E9010
  if (crb(c,2)) { goto L_803E9054; } // 803E9014
  c->r[0]=R32(c->r[3]+0x00000018u); // 803E9018
  c->r[9]=c->r[29]|c->r[29]; // 803E901C
  c->r[7]=R32(c->r[30]+0x00000118u); // 803E9020
  c->r[3]=c->r[30]+0x00000098u; // 803E9024
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E9028
  c->r[8]=R32(c->r[30]+0x0000011Cu); // 803E902C
  c->r[5]=c->r[4]+c->r[0]; // 803E9030
  c->r[4]=c->r[30]+0x000000B8u; // 803E9034
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9038
  c->r[5]=c->r[30]+0x000000D8u; // 803E903C
  c->r[6]=c->r[30]+0x000000F8u; // 803E9040
  c->lr=0x803E9048u; f_803E5520(c); // 803E9044
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9048
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803E904C
  goto L_803E9068; // 803E9050
L_803E9054:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9054
  goto L_803E9068; // 803E9058
L_803E905C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E905C
  goto L_803E9068; // 803E9060
L_803E9064:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9064
L_803E9068:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 803E9068
  c->r[0]=R32(c->r[1]+0x00000034u); // 803E906C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803E9070
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803E9074
  c->r[30]=R32(c->r[1]+0x00000018u); // 803E9078
  c->r[29]=R32(c->r[1]+0x00000014u); // 803E907C
  c->lr=c->r[0]; // 803E9080
  c->r[1]=c->r[1]+0x00000030u; // 803E9084
  return; // 803E9088
}

// fn_803E908C
void f_803E908C(Ctx* __restrict c) {
  trace_call(0x803E908Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E908C
  c->r[0]=c->lr; // 803E9090
  W32(c->r[1]+0x00000054u,c->r[0]); // 803E9094
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803E9098
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803E909C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803E90A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803E90A4
  c->r[5]=0u+0x43300000u; // 803E90A8
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803E90AC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803E90B0
  c->r[31]=c->r[4]|c->r[4]; // 803E90B4
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E90B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 803E90BC
  c->r[30]=c->r[3]|c->r[3]; // 803E90C0
  W32(c->r[1]+0x00000024u,c->r[29]); // 803E90C4
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 803E90C8
  W32(c->r[1]+0x00000008u,c->r[5]); // 803E90CC
  c->r[0]=c->r[0]^0x80000000u; // 803E90D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E90D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E90D8
  W32(c->r[1]+0x00000010u,c->r[5]); // 803E90DC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 803E90E0
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E90E4
  fcmp(c,0,c->f[1],c->f[2]); // 803E90E8
  if (!crb(c,2)) { goto L_803E9248; } // 803E90EC
  c->r[29]=R32(c->r[3]+0x0000009Cu); // 803E90F0
  cmps(c,0,(int32_t)c->r[29],0); // 803E90F4
  if (!crb(c,2)) { goto L_803E9104; } // 803E90F8
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E90FC
  goto L_803E93A4; // 803E9100
L_803E9104:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803E9104
  cmps(c,0,(int32_t)c->r[0],0); // 803E9108
  if (crb(c,2)) { goto L_803E912C; } // 803E910C
  cmps(c,0,(int32_t)c->r[0],1); // 803E9110
  if (crb(c,2)) { goto L_803E9158; } // 803E9114
  cmps(c,0,(int32_t)c->r[0],2); // 803E9118
  if (crb(c,2)) { goto L_803E91E0; } // 803E911C
  cmps(c,0,(int32_t)c->r[0],3); // 803E9120
  if (crb(c,2)) { goto L_803E9238; } // 803E9124
  goto L_803E9240; // 803E9128
L_803E912C:;
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E912C
  c->r[9]=c->r[31]|c->r[31]; // 803E9130
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9134
  c->r[3]=c->r[29]+0x00000098u; // 803E9138
  c->r[4]=c->r[29]+0x000000B8u; // 803E913C
  c->r[5]=c->r[29]+0x000000D8u; // 803E9140
  c->r[6]=c->r[29]+0x000000F8u; // 803E9144
  c->lr=0x803E914Cu; f_803E5520(c); // 803E9148
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E914C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803E9150
  goto L_803E93A4; // 803E9154
L_803E9158:;
  c->r[5]=0u+0x80570000u; // 803E9158
  c->r[0]=R32(c->r[3]+0x000000A8u); // 803E915C
  c->r[5]=c->r[5]+0x000041A8u; // 803E9160
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9164
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9168
  cmps(c,0,(int32_t)c->r[0],0); // 803E916C
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E9170
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9174
  if (crb(c,2)) { goto L_803E9190; } // 803E9178
  cmps(c,0,(int32_t)c->r[4],0); // 803E917C
  if (crb(c,2)) { goto L_803E9190; } // 803E9180
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9184
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803E9188
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E918C
L_803E9190:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9190
  fcmp(c,0,c->f[0],c->f[31]); // 803E9194
  if (!crb(c,2)) { goto L_803E91A0; } // 803E9198
  goto L_803E91B0; // 803E919C
L_803E91A0:;
  c->f[2]=c->f[31]; // 803E91A0
  c->lr=0x803E91A8u; f_803AD468(c); // 803E91A4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E91A8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803E91AC
L_803E91B0:;
  c->f[1]=c->f[0]; // 803E91B0
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E91B4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E91B8
  c->r[9]=c->r[31]|c->r[31]; // 803E91BC
  c->r[3]=c->r[29]+0x00000098u; // 803E91C0
  c->r[4]=c->r[29]+0x000000B8u; // 803E91C4
  c->r[5]=c->r[29]+0x000000D8u; // 803E91C8
  c->r[6]=c->r[29]+0x000000F8u; // 803E91CC
  c->lr=0x803E91D4u; f_803E5520(c); // 803E91D0
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E91D4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803E91D8
  goto L_803E93A4; // 803E91DC
L_803E91E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E91E0
  if (crb(c,2)) { goto L_803E9230; } // 803E91E4
  c->r[4]=R32(c->r[4]+0x00000068u); // 803E91E8
  cmps(c,0,(int32_t)c->r[4],0); // 803E91EC
  if (crb(c,2)) { goto L_803E9230; } // 803E91F0
  c->r[0]=R32(c->r[3]+0x000000B0u); // 803E91F4
  c->r[9]=c->r[31]|c->r[31]; // 803E91F8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E91FC
  c->r[3]=c->r[29]+0x00000098u; // 803E9200
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E9204
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9208
  c->r[5]=c->r[4]+c->r[0]; // 803E920C
  c->r[4]=c->r[29]+0x000000B8u; // 803E9210
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9214
  c->r[5]=c->r[29]+0x000000D8u; // 803E9218
  c->r[6]=c->r[29]+0x000000F8u; // 803E921C
  c->lr=0x803E9224u; f_803E5520(c); // 803E9220
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9224
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803E9228
  goto L_803E93A4; // 803E922C
L_803E9230:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E9230
  goto L_803E93A4; // 803E9234
L_803E9238:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E9238
  goto L_803E93A4; // 803E923C
L_803E9240:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E9240
  goto L_803E93A4; // 803E9244
L_803E9248:;
  c->r[29]=R32(c->r[3]+0x0000009Cu); // 803E9248
  cmps(c,0,(int32_t)c->r[29],0); // 803E924C
  if (!crb(c,2)) { goto L_803E925C; } // 803E9250
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E9254
  goto L_803E93A4; // 803E9258
L_803E925C:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803E925C
  cmps(c,0,(int32_t)c->r[0],0); // 803E9260
  if (crb(c,2)) { goto L_803E9284; } // 803E9264
  cmps(c,0,(int32_t)c->r[0],1); // 803E9268
  if (crb(c,2)) { goto L_803E92B8; } // 803E926C
  cmps(c,0,(int32_t)c->r[0],2); // 803E9270
  if (crb(c,2)) { goto L_803E9340; } // 803E9274
  cmps(c,0,(int32_t)c->r[0],3); // 803E9278
  if (crb(c,2)) { goto L_803E9398; } // 803E927C
  goto L_803E93A0; // 803E9280
L_803E9284:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 803E9284
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E9288
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E928C
  c->r[9]=c->r[31]|c->r[31]; // 803E9290
  c->r[3]=c->r[29]+0x00000098u; // 803E9294
  c->r[4]=c->r[29]+0x000000B8u; // 803E9298
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803E929C
  c->r[5]=c->r[29]+0x000000D8u; // 803E92A0
  c->r[6]=c->r[29]+0x000000F8u; // 803E92A4
  c->lr=0x803E92ACu; f_803E5520(c); // 803E92A8
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E92AC
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803E92B0
  goto L_803E93A4; // 803E92B4
L_803E92B8:;
  c->r[5]=0u+0x80570000u; // 803E92B8
  c->r[0]=R32(c->r[3]+0x000000A8u); // 803E92BC
  c->r[5]=c->r[5]+0x000041A8u; // 803E92C0
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E92C4
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E92C8
  cmps(c,0,(int32_t)c->r[0],0); // 803E92CC
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E92D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E92D4
  if (crb(c,2)) { goto L_803E92F0; } // 803E92D8
  cmps(c,0,(int32_t)c->r[4],0); // 803E92DC
  if (crb(c,2)) { goto L_803E92F0; } // 803E92E0
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E92E4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803E92E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E92EC
L_803E92F0:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E92F0
  fcmp(c,0,c->f[0],c->f[31]); // 803E92F4
  if (!crb(c,2)) { goto L_803E9300; } // 803E92F8
  goto L_803E9310; // 803E92FC
L_803E9300:;
  c->f[2]=c->f[31]; // 803E9300
  c->lr=0x803E9308u; f_803AD468(c); // 803E9304
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E9308
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803E930C
L_803E9310:;
  c->f[1]=c->f[0]; // 803E9310
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E9314
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9318
  c->r[9]=c->r[31]|c->r[31]; // 803E931C
  c->r[3]=c->r[29]+0x00000098u; // 803E9320
  c->r[4]=c->r[29]+0x000000B8u; // 803E9324
  c->r[5]=c->r[29]+0x000000D8u; // 803E9328
  c->r[6]=c->r[29]+0x000000F8u; // 803E932C
  c->lr=0x803E9334u; f_803E5520(c); // 803E9330
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9334
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803E9338
  goto L_803E93A4; // 803E933C
L_803E9340:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E9340
  if (crb(c,2)) { goto L_803E9390; } // 803E9344
  c->r[4]=R32(c->r[4]+0x00000068u); // 803E9348
  cmps(c,0,(int32_t)c->r[4],0); // 803E934C
  if (crb(c,2)) { goto L_803E9390; } // 803E9350
  c->r[0]=R32(c->r[3]+0x000000B0u); // 803E9354
  c->r[9]=c->r[31]|c->r[31]; // 803E9358
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E935C
  c->r[3]=c->r[29]+0x00000098u; // 803E9360
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E9364
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9368
  c->r[5]=c->r[4]+c->r[0]; // 803E936C
  c->r[4]=c->r[29]+0x000000B8u; // 803E9370
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9374
  c->r[5]=c->r[29]+0x000000D8u; // 803E9378
  c->r[6]=c->r[29]+0x000000F8u; // 803E937C
  c->lr=0x803E9384u; f_803E5520(c); // 803E9380
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9384
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803E9388
  goto L_803E93A4; // 803E938C
L_803E9390:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E9390
  goto L_803E93A4; // 803E9394
L_803E9398:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E9398
  goto L_803E93A4; // 803E939C
L_803E93A0:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 803E93A0
L_803E93A4:;
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 803E93A4
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803E93A8
  c->r[0]=c->r[0]^0x80000000u; // 803E93AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E93B0
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E93B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803E93B8
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803E93BC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 803E93C0
  fcmp(c,0,c->f[1],c->f[2]); // 803E93C4
  if (!crb(c,2)) { goto L_803E9524; } // 803E93C8
  c->r[29]=R32(c->r[30]+0x000000BCu); // 803E93CC
  cmps(c,0,(int32_t)c->r[29],0); // 803E93D0
  if (!crb(c,2)) { goto L_803E93E0; } // 803E93D4
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E93D8
  goto L_803E9680; // 803E93DC
L_803E93E0:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 803E93E0
  cmps(c,0,(int32_t)c->r[0],0); // 803E93E4
  if (crb(c,2)) { goto L_803E9408; } // 803E93E8
  cmps(c,0,(int32_t)c->r[0],1); // 803E93EC
  if (crb(c,2)) { goto L_803E9434; } // 803E93F0
  cmps(c,0,(int32_t)c->r[0],2); // 803E93F4
  if (crb(c,2)) { goto L_803E94BC; } // 803E93F8
  cmps(c,0,(int32_t)c->r[0],3); // 803E93FC
  if (crb(c,2)) { goto L_803E9514; } // 803E9400
  goto L_803E951C; // 803E9404
L_803E9408:;
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E9408
  c->r[9]=c->r[31]|c->r[31]; // 803E940C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9410
  c->r[3]=c->r[29]+0x00000098u; // 803E9414
  c->r[4]=c->r[29]+0x000000B8u; // 803E9418
  c->r[5]=c->r[29]+0x000000D8u; // 803E941C
  c->r[6]=c->r[29]+0x000000F8u; // 803E9420
  c->lr=0x803E9428u; f_803E5520(c); // 803E9424
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9428
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 803E942C
  goto L_803E9680; // 803E9430
L_803E9434:;
  c->r[3]=0u+0x80570000u; // 803E9434
  c->r[0]=R32(c->r[30]+0x000000C8u); // 803E9438
  c->r[3]=c->r[3]+0x000041A8u; // 803E943C
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9440
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9444
  cmps(c,0,(int32_t)c->r[0],0); // 803E9448
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[30]=c->ps1[30]=RF32(ea);} // 803E944C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9450
  if (crb(c,2)) { goto L_803E946C; } // 803E9454
  cmps(c,0,(int32_t)c->r[31],0); // 803E9458
  if (crb(c,2)) { goto L_803E946C; } // 803E945C
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9460
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803E9464
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9468
L_803E946C:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E946C
  fcmp(c,0,c->f[0],c->f[30]); // 803E9470
  if (!crb(c,2)) { goto L_803E947C; } // 803E9474
  goto L_803E948C; // 803E9478
L_803E947C:;
  c->f[2]=c->f[30]; // 803E947C
  c->lr=0x803E9484u; f_803AD468(c); // 803E9480
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E9484
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803E9488
L_803E948C:;
  c->f[1]=c->f[0]; // 803E948C
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E9490
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9494
  c->r[9]=c->r[31]|c->r[31]; // 803E9498
  c->r[3]=c->r[29]+0x00000098u; // 803E949C
  c->r[4]=c->r[29]+0x000000B8u; // 803E94A0
  c->r[5]=c->r[29]+0x000000D8u; // 803E94A4
  c->r[6]=c->r[29]+0x000000F8u; // 803E94A8
  c->lr=0x803E94B0u; f_803E5520(c); // 803E94AC
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E94B0
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 803E94B4
  goto L_803E9680; // 803E94B8
L_803E94BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E94BC
  if (crb(c,2)) { goto L_803E950C; } // 803E94C0
  c->r[4]=R32(c->r[31]+0x00000068u); // 803E94C4
  cmps(c,0,(int32_t)c->r[4],0); // 803E94C8
  if (crb(c,2)) { goto L_803E950C; } // 803E94CC
  c->r[0]=R32(c->r[30]+0x000000D0u); // 803E94D0
  c->r[9]=c->r[31]|c->r[31]; // 803E94D4
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E94D8
  c->r[3]=c->r[29]+0x00000098u; // 803E94DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E94E0
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E94E4
  c->r[5]=c->r[4]+c->r[0]; // 803E94E8
  c->r[4]=c->r[29]+0x000000B8u; // 803E94EC
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E94F0
  c->r[5]=c->r[29]+0x000000D8u; // 803E94F4
  c->r[6]=c->r[29]+0x000000F8u; // 803E94F8
  c->lr=0x803E9500u; f_803E5520(c); // 803E94FC
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9500
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 803E9504
  goto L_803E9680; // 803E9508
L_803E950C:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E950C
  goto L_803E9680; // 803E9510
L_803E9514:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E9514
  goto L_803E9680; // 803E9518
L_803E951C:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E951C
  goto L_803E9680; // 803E9520
L_803E9524:;
  c->r[29]=R32(c->r[30]+0x000000BCu); // 803E9524
  cmps(c,0,(int32_t)c->r[29],0); // 803E9528
  if (!crb(c,2)) { goto L_803E9538; } // 803E952C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E9530
  goto L_803E9680; // 803E9534
L_803E9538:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 803E9538
  cmps(c,0,(int32_t)c->r[0],0); // 803E953C
  if (crb(c,2)) { goto L_803E9560; } // 803E9540
  cmps(c,0,(int32_t)c->r[0],1); // 803E9544
  if (crb(c,2)) { goto L_803E9594; } // 803E9548
  cmps(c,0,(int32_t)c->r[0],2); // 803E954C
  if (crb(c,2)) { goto L_803E961C; } // 803E9550
  cmps(c,0,(int32_t)c->r[0],3); // 803E9554
  if (crb(c,2)) { goto L_803E9674; } // 803E9558
  goto L_803E967C; // 803E955C
L_803E9560:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 803E9560
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E9564
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9568
  c->r[9]=c->r[31]|c->r[31]; // 803E956C
  c->r[3]=c->r[29]+0x00000098u; // 803E9570
  c->r[4]=c->r[29]+0x000000B8u; // 803E9574
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803E9578
  c->r[5]=c->r[29]+0x000000D8u; // 803E957C
  c->r[6]=c->r[29]+0x000000F8u; // 803E9580
  c->lr=0x803E9588u; f_803E5520(c); // 803E9584
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9588
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 803E958C
  goto L_803E9680; // 803E9590
L_803E9594:;
  c->r[3]=0u+0x80570000u; // 803E9594
  c->r[0]=R32(c->r[30]+0x000000C8u); // 803E9598
  c->r[3]=c->r[3]+0x000041A8u; // 803E959C
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E95A0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E95A4
  cmps(c,0,(int32_t)c->r[0],0); // 803E95A8
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[30]=c->ps1[30]=RF32(ea);} // 803E95AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E95B0
  if (crb(c,2)) { goto L_803E95CC; } // 803E95B4
  cmps(c,0,(int32_t)c->r[31],0); // 803E95B8
  if (crb(c,2)) { goto L_803E95CC; } // 803E95BC
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E95C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803E95C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E95C8
L_803E95CC:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E95CC
  fcmp(c,0,c->f[0],c->f[30]); // 803E95D0
  if (!crb(c,2)) { goto L_803E95DC; } // 803E95D4
  goto L_803E95EC; // 803E95D8
L_803E95DC:;
  c->f[2]=c->f[30]; // 803E95DC
  c->lr=0x803E95E4u; f_803AD468(c); // 803E95E0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E95E4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803E95E8
L_803E95EC:;
  c->f[1]=c->f[0]; // 803E95EC
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E95F0
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E95F4
  c->r[9]=c->r[31]|c->r[31]; // 803E95F8
  c->r[3]=c->r[29]+0x00000098u; // 803E95FC
  c->r[4]=c->r[29]+0x000000B8u; // 803E9600
  c->r[5]=c->r[29]+0x000000D8u; // 803E9604
  c->r[6]=c->r[29]+0x000000F8u; // 803E9608
  c->lr=0x803E9610u; f_803E5520(c); // 803E960C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9610
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 803E9614
  goto L_803E9680; // 803E9618
L_803E961C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803E961C
  if (crb(c,2)) { goto L_803E966C; } // 803E9620
  c->r[4]=R32(c->r[31]+0x00000068u); // 803E9624
  cmps(c,0,(int32_t)c->r[4],0); // 803E9628
  if (crb(c,2)) { goto L_803E966C; } // 803E962C
  c->r[0]=R32(c->r[30]+0x000000D0u); // 803E9630
  c->r[9]=c->r[31]|c->r[31]; // 803E9634
  c->r[7]=R32(c->r[29]+0x00000118u); // 803E9638
  c->r[3]=c->r[29]+0x00000098u; // 803E963C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E9640
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803E9644
  c->r[5]=c->r[4]+c->r[0]; // 803E9648
  c->r[4]=c->r[29]+0x000000B8u; // 803E964C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9650
  c->r[5]=c->r[29]+0x000000D8u; // 803E9654
  c->r[6]=c->r[29]+0x000000F8u; // 803E9658
  c->lr=0x803E9660u; f_803E5520(c); // 803E965C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9660
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[1]); // 803E9664
  goto L_803E9680; // 803E9668
L_803E966C:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E966C
  goto L_803E9680; // 803E9670
L_803E9674:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E9674
  goto L_803E9680; // 803E9678
L_803E967C:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803E967C
L_803E9680:;
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 803E9680
  cmps(c,0,(int32_t)c->r[0],0); // 803E9684
  if (!crb(c,2)) { goto L_803E9698; } // 803E9688
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[31]);} // 803E968C
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[5]);} // 803E9690
  goto L_803E971C; // 803E9694
L_803E9698:;
  c->r[0]=c->r[0]^0x80000000u; // 803E9698
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E969C
  {uint32_t ea=c->r[30]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E96A0
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[4]=RF64(ea);} // 803E96A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E96A8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[31]); // 803E96AC
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803E96B0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 803E96B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E96B8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 803E96BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803E96C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 803E96C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 803E96C8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803E96CC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 803E96D0
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 803E96D4
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 803E96D8
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 803E96DC
  {uint32_t ea=c->r[30]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E96E0
  c->r[0]=c->r[0]^0x80000000u; // 803E96E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E96E8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 803E96EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E96F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E96F4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 803E96F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803E96FC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 803E9700
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 803E9704
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 803E9708
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803E970C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 803E9710
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 803E9714
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 803E9718
L_803E971C:;
  {uint32_t ea=c->r[30]+0x00000164u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E971C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9720
  fcmp(c,0,c->f[2],c->f[0]); // 803E9724
  if (crb(c,2)) { goto L_803E9750; } // 803E9728
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E972C
  c->r[3]=0u+0x80570000u; // 803E9730
  c->r[3]=c->r[3]+0x000041A8u; // 803E9734
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9738
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803E973C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E9740
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803E9744
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803E9748
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 803E974C
L_803E9750:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9750
  {uint32_t ea=c->r[30]+0x00000194u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9754
  fcmp(c,0,c->f[0],c->f[1]); // 803E9758
  if (crb(c,2)) { goto L_803E978C; } // 803E975C
  c->r[3]=0u+0x80570000u; // 803E9760
  c->r[3]=c->r[3]+0x000041A8u; // 803E9764
  c->r[0]=R32(c->r[3]+0x00000014u); // 803E9768
  cmps(c,0,(int32_t)c->r[0],0); // 803E976C
  if (crb(c,2)) { goto L_803E978C; } // 803E9770
  {uint32_t ea=c->r[31]+0x00000048u; psq_load(c,2,ea,0,0);} // 803E9774
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9778
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803E977C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803E9780
  {uint32_t ea=c->r[31]+0x00000048u; psq_store(c,2,ea,0,0);} // 803E9784
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 803E9788
L_803E978C:;
  {uint32_t ea=c->r[30]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E978C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9790
  fcmp(c,0,c->f[1],c->f[0]); // 803E9794
  if (!crb(c,1)) { goto L_803E97A8; } // 803E9798
  c->r[3]=c->r[30]|c->r[30]; // 803E979C
  c->r[4]=c->r[31]|c->r[31]; // 803E97A0
  c->lr=0x803E97A8u; f_803EA9BC(c); // 803E97A4
L_803E97A8:;
  c->r[3]=R32(c->r[30]+0x00000180u); // 803E97A8
  cmps(c,0,(int32_t)c->r[3],0); // 803E97AC
  if (crb(c,2)) { goto L_803E97C8; } // 803E97B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E97B4
  c->r[4]=c->r[31]|c->r[31]; // 803E97B8
  c->r[12]=R32(c->r[12]+0x00000054u); // 803E97BC
  c->ctr=c->r[12]; // 803E97C0
  if (true) { c->lr=0x803E97C8u; dispatch(c,c->ctr); } // 803E97C4
L_803E97C8:;
  c->r[0]=R32(c->r[30]+0x000001C0u); // 803E97C8
  cmps(c,0,(int32_t)c->r[0],3); // 803E97CC
  if (crb(c,2)) { goto L_803E9830; } // 803E97D0
  cmps(c,0,(int32_t)c->r[0],0); // 803E97D4
  if (crb(c,2)) { goto L_803E9830; } // 803E97D8
  c->r[3]=0u+0x80570000u; // 803E97DC
  {uint32_t ea=c->r[30]+0x000001CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803E97E0
  c->r[3]=c->r[3]+0x000041A8u; // 803E97E4
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E97E8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E97EC
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=RF64(ea);} // 803E97F0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803E97F4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803E97F8
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[2]);} // 803E97FC
  c->r[3]=R32(c->r[30]+0x0000018Cu); // 803E9800
  c->r[0]=R32(c->r[30]+0x000001C4u); // 803E9804
  c->r[0]=c->r[0]-c->r[3]; // 803E9808
  c->r[0]=c->r[0]^0x80000000u; // 803E980C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E9810
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E9814
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803E9818
  fcmp(c,0,c->f[2],c->f[0]); // 803E981C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803E9820
  if (!crb(c,2)) { goto L_803E9830; } // 803E9824
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9828
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 803E982C
L_803E9830:;
  c->r[3]=0u+0x00000000u; // 803E9830
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803E9834
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803E9838
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803E983C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803E9840
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803E9844
  c->r[30]=R32(c->r[1]+0x00000028u); // 803E9848
  c->r[29]=R32(c->r[1]+0x00000024u); // 803E984C
  c->r[0]=R32(c->r[1]+0x00000054u); // 803E9850
  c->lr=c->r[0]; // 803E9854
  c->r[1]=c->r[1]+0x00000050u; // 803E9858
  return; // 803E985C
}

// fn_803E9860
void f_803E9860(Ctx* __restrict c) {
  trace_call(0x803E9860u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E9860
  c->r[0]=c->lr; // 803E9864
  W32(c->r[1]+0x00000094u,c->r[0]); // 803E9868
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 803E986C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 803E9870
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 803E9874
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 803E9878
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 803E987C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 803E9880
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 803E9884
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 803E9888
  c->r[11]=c->r[1]+0x00000050u; // 803E988C
  c->lr=0x803E9894u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803E9890
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 803E9894
  c->f[30]=c->f[1]; // 803E9898
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E989C
  c->r[5]=c->r[1]+0x00000028u; // 803E98A0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E98A4
  c->r[6]=c->r[1]+0x00000030u; // 803E98A8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E98AC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[4]);} // 803E98B0
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[2]); // 803E98B4
  c->r[27]=R32(c->r[3]+0x0000005Cu); // 803E98B8
  c->r[30]=c->r[1]+0x00000018u; // 803E98BC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 803E98C0
  c->r[31]=c->r[1]+0x00000020u; // 803E98C4
  c->r[29]=c->r[1]+0x00000008u; // 803E98C8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803E98CC
  c->r[28]=c->r[1]+0x00000010u; // 803E98D0
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,29,ea,0,0);} // 803E98D4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803E98D8
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,28,ea,0,0);} // 803E98DC
L_803E98E0:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803E98E0
  c->r[4]=R32(c->r[27]+0x00000000u); // 803E98E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E98E8
  c->r[12]=R32(c->r[12]+0x000000DCu); // 803E98EC
  c->ctr=c->r[12]; // 803E98F0
  if (true) { c->lr=0x803E98F8u; dispatch(c,c->ctr); } // 803E98F4
  {uint32_t ea=c->r[27]+0x00000038u; psq_load(c,1,ea,0,0);} // 803E98F8
  {uint32_t ea=c->r[27]+0x00000040u; psq_load(c,0,ea,0,0);} // 803E98FC
  {double t0=S(c->f[1]-c->f[29]), t1=S(c->ps1[1]-c->ps1[29]); c->f[2]=t0; c->ps1[2]=t1;} // 803E9900
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E9904
  {double t0=S(c->f[0]-c->f[28]), t1=S(c->ps1[0]-c->ps1[28]); c->f[1]=t0; c->ps1[1]=t1;} // 803E9908
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 803E990C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803E9910
  c->f[4]=c->ps1[4]=S(c->f[1]); // 803E9914
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,2,ea,0,0);} // 803E9918
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 803E991C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803E9920
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[4]); // 803E9924
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803E9928
  fcmp(c,0,c->f[0],c->f[31]); // 803E992C
  if (!crb(c,0)) { goto L_803E9960; } // 803E9930
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[30]); // 803E9934
  {uint32_t ea=c->r[27]+0x00000048u; psq_load(c,3,ea,0,0);} // 803E9938
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[1]=t0; c->ps1[1]=t1;} // 803E993C
  {uint32_t ea=c->r[27]+0x00000050u; psq_load(c,2,ea,0,0);} // 803E9940
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803E9944
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 803E9948
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,0,ea,0,0);} // 803E994C
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E9950
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E9954
  {uint32_t ea=c->r[27]+0x00000048u; psq_store(c,3,ea,0,0);} // 803E9958
  {uint32_t ea=c->r[27]+0x00000050u; WF32(ea,c->f[0]);} // 803E995C
L_803E9960:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 803E9960
  cmps(c,0,(int32_t)c->r[27],0); // 803E9964
  if (!crb(c,2)) { IRQCHK(c); goto L_803E98E0; } // 803E9968
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 803E996C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 803E9970
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 803E9974
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 803E9978
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 803E997C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 803E9980
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 803E9984
  c->r[11]=c->r[1]+0x00000050u; // 803E9988
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 803E998C
  c->lr=0x803E9994u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803E9990
  c->r[0]=R32(c->r[1]+0x00000094u); // 803E9994
  c->lr=c->r[0]; // 803E9998
  c->r[1]=c->r[1]+0x00000090u; // 803E999C
  return; // 803E99A0
}

// fn_803E99A4
void f_803E99A4(Ctx* __restrict c) {
  trace_call(0x803E99A4u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803E99A4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803E99A8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E99AC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E99B0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 803E99B4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 803E99B8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803E99BC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803E99C0
  return; // 803E99C4
}

// fn_803E99C8
void f_803E99C8(Ctx* __restrict c) {
  trace_call(0x803E99C8u);
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803E99C8
  return; // 803E99CC
}

// fn_803E99D0
void f_803E99D0(Ctx* __restrict c) {
  trace_call(0x803E99D0u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803E99D0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803E99D4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 803E99D8
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 803E99DC
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803E99E0
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803E99E4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803E99E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803E99EC
  return; // 803E99F0
}

// fn_803E99F4
void f_803E99F4(Ctx* __restrict c) {
  trace_call(0x803E99F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 803E99F4
  c->r[0]=c->lr; // 803E99F8
  W32(c->r[1]+0x000000E4u,c->r[0]); // 803E99FC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 803E9A00
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 803E9A04
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 803E9A08
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 803E9A0C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 803E9A10
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 803E9A14
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[28]);} // 803E9A18
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,28,ea,0,0);} // 803E9A1C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[27]);} // 803E9A20
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,27,ea,0,0);} // 803E9A24
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[26]);} // 803E9A28
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,26,ea,0,0);} // 803E9A2C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[25]);} // 803E9A30
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,25,ea,0,0);} // 803E9A34
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[24]);} // 803E9A38
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,24,ea,0,0);} // 803E9A3C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[23]);} // 803E9A40
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,23,ea,0,0);} // 803E9A44
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[22]);} // 803E9A48
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,22,ea,0,0);} // 803E9A4C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[21]);} // 803E9A50
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,21,ea,0,0);} // 803E9A54
  c->r[11]=c->r[1]+0x00000030u; // 803E9A58
  c->lr=0x803E9A60u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803E9A5C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 803E9A60
  c->r[4]=0u+0x43300000u; // 803E9A64
  W32(c->r[1]+0x00000008u,c->r[4]); // 803E9A68
  c->r[29]=c->r[3]|c->r[3]; // 803E9A6C
  cmps(c,0,(int32_t)c->r[0],0); // 803E9A70
  W32(c->r[1]+0x00000010u,c->r[4]); // 803E9A74
  if (crb(c,2)) { goto L_803EA94C; } // 803E9A78
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9A7C
  c->r[5]=0u+0x80570000u; // 803E9A80
  {uint32_t ea=c->r[3]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9A84
  c->r[5]=c->r[5]+0x000041A8u; // 803E9A88
  {uint32_t ea=c->r[5]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 803E9A8C
  c->r[4]=0u+0x00000000u; // 803E9A90
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 803E9A94
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9A98
  {uint32_t ea=c->r[3]+0x00000194u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9A9C
  fcmp(c,0,c->f[1],c->f[0]); // 803E9AA0
  c->f[27]=c->ps1[27]=S(c->f[2]*c->f[29]); // 803E9AA4
  if (crb(c,2)) { goto L_803E9ABC; } // 803E9AA8
  c->r[0]=R32(c->r[5]+0x00000014u); // 803E9AAC
  cmps(c,0,(int32_t)c->r[0],0); // 803E9AB0
  if (crb(c,2)) { goto L_803E9ABC; } // 803E9AB4
  c->r[4]=0u+0x00000001u; // 803E9AB8
L_803E9ABC:;
  cmps(c,0,(int32_t)c->r[4],0); // 803E9ABC
  if (crb(c,2)) { goto L_803E9ACC; } // 803E9AC0
  {uint32_t ea=c->r[3]+0x00000194u; c->f[28]=c->ps1[28]=RF32(ea);} // 803E9AC4
  goto L_803E9AD0; // 803E9AC8
L_803E9ACC:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[28]=c->ps1[28]=RF32(ea);} // 803E9ACC
L_803E9AD0:;
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 803E9AD0
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803E9AD4
  c->r[0]=c->r[0]^0x80000000u; // 803E9AD8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E9ADC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803E9AE0
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803E9AE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803E9AE8
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9AEC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803E9AF0
  c->r[12]=R32(c->r[12]+0x00000074u); // 803E9AF4
  c->f[26]=c->ps1[26]=S(c->f[0]/c->f[1]); // 803E9AF8
  c->ctr=c->r[12]; // 803E9AFC
  if (true) { c->lr=0x803E9B04u; dispatch(c,c->ctr); } // 803E9B00
  c->r[4]=0u+0x80570000u; // 803E9B04
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[30]=c->ps1[30]=RF32(ea);} // 803E9B08
  {uint32_t ea=c->r[3]+0x00000000u; c->f[25]=c->ps1[25]=RF32(ea);} // 803E9B0C
  c->r[31]=c->r[4]+0x000041A8u; // 803E9B10
  {uint32_t ea=c->r[3]+0x00000008u; c->f[24]=c->ps1[24]=RF32(ea);} // 803E9B14
  c->r[30]=R32(c->r[29]+0x0000005Cu); // 803E9B18
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[31]=RF64(ea);} // 803E9B1C
L_803E9B20:;
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803E9B20
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9B24
  c->r[0]=c->r[0]^0x80000000u; // 803E9B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 803E9B2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803E9B30
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 803E9B34
  fcmp(c,0,c->f[30],c->f[2]); // 803E9B38
  if (!crb(c,2)) { goto L_803E9C90; } // 803E9B3C
  c->r[28]=R32(c->r[29]+0x0000009Cu); // 803E9B40
  cmps(c,0,(int32_t)c->r[28],0); // 803E9B44
  if (!crb(c,2)) { goto L_803E9B54; } // 803E9B48
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9B4C
  goto L_803E9DE0; // 803E9B50
L_803E9B54:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 803E9B54
  cmps(c,0,(int32_t)c->r[0],0); // 803E9B58
  if (crb(c,2)) { goto L_803E9B7C; } // 803E9B5C
  cmps(c,0,(int32_t)c->r[0],1); // 803E9B60
  if (crb(c,2)) { goto L_803E9BAC; } // 803E9B64
  cmps(c,0,(int32_t)c->r[0],2); // 803E9B68
  if (crb(c,2)) { goto L_803E9C28; } // 803E9B6C
  cmps(c,0,(int32_t)c->r[0],3); // 803E9B70
  if (crb(c,2)) { goto L_803E9C80; } // 803E9B74
  goto L_803E9C88; // 803E9B78
L_803E9B7C:;
  c->f[1]=c->f[30]; // 803E9B7C
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9B80
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9B84
  c->r[9]=c->r[30]|c->r[30]; // 803E9B88
  c->r[3]=c->r[28]+0x00000098u; // 803E9B8C
  c->r[4]=c->r[28]+0x000000B8u; // 803E9B90
  c->r[5]=c->r[28]+0x000000D8u; // 803E9B94
  c->r[6]=c->r[28]+0x000000F8u; // 803E9B98
  c->lr=0x803E9BA0u; f_803E5520(c); // 803E9B9C
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9BA0
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 803E9BA4
  goto L_803E9DE0; // 803E9BA8
L_803E9BAC:;
  c->r[0]=R32(c->r[29]+0x000000A8u); // 803E9BAC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9BB0
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9BB4
  cmps(c,0,(int32_t)c->r[0],0); // 803E9BB8
  {uint32_t ea=c->r[29]+0x000000A4u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9BBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9BC0
  if (crb(c,2)) { goto L_803E9BDC; } // 803E9BC4
  cmps(c,0,(int32_t)c->r[30],0); // 803E9BC8
  if (crb(c,2)) { goto L_803E9BDC; } // 803E9BCC
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9BD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[22]); // 803E9BD4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9BD8
L_803E9BDC:;
  fcmp(c,0,c->f[30],c->f[22]); // 803E9BDC
  if (!crb(c,2)) { goto L_803E9BEC; } // 803E9BE0
  c->f[1]=c->f[30]; // 803E9BE4
  goto L_803E9BFC; // 803E9BE8
L_803E9BEC:;
  c->f[2]=c->f[22]; // 803E9BEC
  c->lr=0x803E9BF4u; f_803AD468(c); // 803E9BF0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E9BF4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[22]); // 803E9BF8
L_803E9BFC:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9BFC
  c->r[9]=c->r[30]|c->r[30]; // 803E9C00
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9C04
  c->r[3]=c->r[28]+0x00000098u; // 803E9C08
  c->r[4]=c->r[28]+0x000000B8u; // 803E9C0C
  c->r[5]=c->r[28]+0x000000D8u; // 803E9C10
  c->r[6]=c->r[28]+0x000000F8u; // 803E9C14
  c->lr=0x803E9C1Cu; f_803E5520(c); // 803E9C18
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9C1C
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 803E9C20
  goto L_803E9DE0; // 803E9C24
L_803E9C28:;
  cmps(c,0,(int32_t)c->r[30],0); // 803E9C28
  if (crb(c,2)) { goto L_803E9C78; } // 803E9C2C
  c->r[4]=R32(c->r[30]+0x00000068u); // 803E9C30
  cmps(c,0,(int32_t)c->r[4],0); // 803E9C34
  if (crb(c,2)) { goto L_803E9C78; } // 803E9C38
  c->r[0]=R32(c->r[29]+0x000000B0u); // 803E9C3C
  c->r[9]=c->r[30]|c->r[30]; // 803E9C40
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9C44
  c->r[3]=c->r[28]+0x00000098u; // 803E9C48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E9C4C
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9C50
  c->r[5]=c->r[4]+c->r[0]; // 803E9C54
  c->r[4]=c->r[28]+0x000000B8u; // 803E9C58
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9C5C
  c->r[5]=c->r[28]+0x000000D8u; // 803E9C60
  c->r[6]=c->r[28]+0x000000F8u; // 803E9C64
  c->lr=0x803E9C6Cu; f_803E5520(c); // 803E9C68
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9C6C
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 803E9C70
  goto L_803E9DE0; // 803E9C74
L_803E9C78:;
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9C78
  goto L_803E9DE0; // 803E9C7C
L_803E9C80:;
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9C80
  goto L_803E9DE0; // 803E9C84
L_803E9C88:;
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9C88
  goto L_803E9DE0; // 803E9C8C
L_803E9C90:;
  c->r[28]=R32(c->r[29]+0x0000009Cu); // 803E9C90
  cmps(c,0,(int32_t)c->r[28],0); // 803E9C94
  if (!crb(c,2)) { goto L_803E9CA4; } // 803E9C98
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9C9C
  goto L_803E9DE0; // 803E9CA0
L_803E9CA4:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 803E9CA4
  cmps(c,0,(int32_t)c->r[0],0); // 803E9CA8
  if (crb(c,2)) { goto L_803E9CCC; } // 803E9CAC
  cmps(c,0,(int32_t)c->r[0],1); // 803E9CB0
  if (crb(c,2)) { goto L_803E9D00; } // 803E9CB4
  cmps(c,0,(int32_t)c->r[0],2); // 803E9CB8
  if (crb(c,2)) { goto L_803E9D7C; } // 803E9CBC
  cmps(c,0,(int32_t)c->r[0],3); // 803E9CC0
  if (crb(c,2)) { goto L_803E9DD4; } // 803E9CC4
  goto L_803E9DDC; // 803E9CC8
L_803E9CCC:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 803E9CCC
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9CD0
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9CD4
  c->r[9]=c->r[30]|c->r[30]; // 803E9CD8
  c->r[3]=c->r[28]+0x00000098u; // 803E9CDC
  c->r[4]=c->r[28]+0x000000B8u; // 803E9CE0
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803E9CE4
  c->r[5]=c->r[28]+0x000000D8u; // 803E9CE8
  c->r[6]=c->r[28]+0x000000F8u; // 803E9CEC
  c->lr=0x803E9CF4u; f_803E5520(c); // 803E9CF0
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9CF4
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 803E9CF8
  goto L_803E9DE0; // 803E9CFC
L_803E9D00:;
  c->r[0]=R32(c->r[29]+0x000000A8u); // 803E9D00
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9D04
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9D08
  cmps(c,0,(int32_t)c->r[0],0); // 803E9D0C
  {uint32_t ea=c->r[29]+0x000000A4u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9D10
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9D14
  if (crb(c,2)) { goto L_803E9D30; } // 803E9D18
  cmps(c,0,(int32_t)c->r[30],0); // 803E9D1C
  if (crb(c,2)) { goto L_803E9D30; } // 803E9D20
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9D24
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[22]); // 803E9D28
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9D2C
L_803E9D30:;
  fcmp(c,0,c->f[30],c->f[22]); // 803E9D30
  if (!crb(c,2)) { goto L_803E9D40; } // 803E9D34
  c->f[1]=c->f[30]; // 803E9D38
  goto L_803E9D50; // 803E9D3C
L_803E9D40:;
  c->f[2]=c->f[22]; // 803E9D40
  c->lr=0x803E9D48u; f_803AD468(c); // 803E9D44
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E9D48
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[22]); // 803E9D4C
L_803E9D50:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9D50
  c->r[9]=c->r[30]|c->r[30]; // 803E9D54
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9D58
  c->r[3]=c->r[28]+0x00000098u; // 803E9D5C
  c->r[4]=c->r[28]+0x000000B8u; // 803E9D60
  c->r[5]=c->r[28]+0x000000D8u; // 803E9D64
  c->r[6]=c->r[28]+0x000000F8u; // 803E9D68
  c->lr=0x803E9D70u; f_803E5520(c); // 803E9D6C
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9D70
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 803E9D74
  goto L_803E9DE0; // 803E9D78
L_803E9D7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803E9D7C
  if (crb(c,2)) { goto L_803E9DCC; } // 803E9D80
  c->r[4]=R32(c->r[30]+0x00000068u); // 803E9D84
  cmps(c,0,(int32_t)c->r[4],0); // 803E9D88
  if (crb(c,2)) { goto L_803E9DCC; } // 803E9D8C
  c->r[0]=R32(c->r[29]+0x000000B0u); // 803E9D90
  c->r[9]=c->r[30]|c->r[30]; // 803E9D94
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9D98
  c->r[3]=c->r[28]+0x00000098u; // 803E9D9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E9DA0
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9DA4
  c->r[5]=c->r[4]+c->r[0]; // 803E9DA8
  c->r[4]=c->r[28]+0x000000B8u; // 803E9DAC
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9DB0
  c->r[5]=c->r[28]+0x000000D8u; // 803E9DB4
  c->r[6]=c->r[28]+0x000000F8u; // 803E9DB8
  c->lr=0x803E9DC0u; f_803E5520(c); // 803E9DBC
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9DC0
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 803E9DC4
  goto L_803E9DE0; // 803E9DC8
L_803E9DCC:;
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9DCC
  goto L_803E9DE0; // 803E9DD0
L_803E9DD4:;
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9DD4
  goto L_803E9DE0; // 803E9DD8
L_803E9DDC:;
  {uint32_t ea=c->r[29]+0x00000098u; c->f[23]=c->ps1[23]=RF32(ea);} // 803E9DDC
L_803E9DE0:;
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803E9DE0
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9DE4
  c->r[0]=c->r[0]^0x80000000u; // 803E9DE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803E9DEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803E9DF0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 803E9DF4
  fcmp(c,0,c->f[30],c->f[2]); // 803E9DF8
  if (!crb(c,2)) { goto L_803E9F50; } // 803E9DFC
  c->r[28]=R32(c->r[29]+0x000000BCu); // 803E9E00
  cmps(c,0,(int32_t)c->r[28],0); // 803E9E04
  if (!crb(c,2)) { goto L_803E9E14; } // 803E9E08
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9E0C
  goto L_803EA0A0; // 803E9E10
L_803E9E14:;
  c->r[0]=R32(c->r[29]+0x000000C0u); // 803E9E14
  cmps(c,0,(int32_t)c->r[0],0); // 803E9E18
  if (crb(c,2)) { goto L_803E9E3C; } // 803E9E1C
  cmps(c,0,(int32_t)c->r[0],1); // 803E9E20
  if (crb(c,2)) { goto L_803E9E6C; } // 803E9E24
  cmps(c,0,(int32_t)c->r[0],2); // 803E9E28
  if (crb(c,2)) { goto L_803E9EE8; } // 803E9E2C
  cmps(c,0,(int32_t)c->r[0],3); // 803E9E30
  if (crb(c,2)) { goto L_803E9F40; } // 803E9E34
  goto L_803E9F48; // 803E9E38
L_803E9E3C:;
  c->f[1]=c->f[30]; // 803E9E3C
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9E40
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9E44
  c->r[9]=c->r[30]|c->r[30]; // 803E9E48
  c->r[3]=c->r[28]+0x00000098u; // 803E9E4C
  c->r[4]=c->r[28]+0x000000B8u; // 803E9E50
  c->r[5]=c->r[28]+0x000000D8u; // 803E9E54
  c->r[6]=c->r[28]+0x000000F8u; // 803E9E58
  c->lr=0x803E9E60u; f_803E5520(c); // 803E9E5C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9E60
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[1]); // 803E9E64
  goto L_803EA0A0; // 803E9E68
L_803E9E6C:;
  c->r[0]=R32(c->r[29]+0x000000C8u); // 803E9E6C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9E70
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9E74
  cmps(c,0,(int32_t)c->r[0],0); // 803E9E78
  {uint32_t ea=c->r[29]+0x000000C4u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9E7C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9E80
  if (crb(c,2)) { goto L_803E9E9C; } // 803E9E84
  cmps(c,0,(int32_t)c->r[30],0); // 803E9E88
  if (crb(c,2)) { goto L_803E9E9C; } // 803E9E8C
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9E90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[22]); // 803E9E94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9E98
L_803E9E9C:;
  fcmp(c,0,c->f[30],c->f[22]); // 803E9E9C
  if (!crb(c,2)) { goto L_803E9EAC; } // 803E9EA0
  c->f[1]=c->f[30]; // 803E9EA4
  goto L_803E9EBC; // 803E9EA8
L_803E9EAC:;
  c->f[2]=c->f[22]; // 803E9EAC
  c->lr=0x803E9EB4u; f_803AD468(c); // 803E9EB0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803E9EB4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[22]); // 803E9EB8
L_803E9EBC:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9EBC
  c->r[9]=c->r[30]|c->r[30]; // 803E9EC0
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9EC4
  c->r[3]=c->r[28]+0x00000098u; // 803E9EC8
  c->r[4]=c->r[28]+0x000000B8u; // 803E9ECC
  c->r[5]=c->r[28]+0x000000D8u; // 803E9ED0
  c->r[6]=c->r[28]+0x000000F8u; // 803E9ED4
  c->lr=0x803E9EDCu; f_803E5520(c); // 803E9ED8
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9EDC
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[1]); // 803E9EE0
  goto L_803EA0A0; // 803E9EE4
L_803E9EE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803E9EE8
  if (crb(c,2)) { goto L_803E9F38; } // 803E9EEC
  c->r[4]=R32(c->r[30]+0x00000068u); // 803E9EF0
  cmps(c,0,(int32_t)c->r[4],0); // 803E9EF4
  if (crb(c,2)) { goto L_803E9F38; } // 803E9EF8
  c->r[0]=R32(c->r[29]+0x000000D0u); // 803E9EFC
  c->r[9]=c->r[30]|c->r[30]; // 803E9F00
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9F04
  c->r[3]=c->r[28]+0x00000098u; // 803E9F08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803E9F0C
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9F10
  c->r[5]=c->r[4]+c->r[0]; // 803E9F14
  c->r[4]=c->r[28]+0x000000B8u; // 803E9F18
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9F1C
  c->r[5]=c->r[28]+0x000000D8u; // 803E9F20
  c->r[6]=c->r[28]+0x000000F8u; // 803E9F24
  c->lr=0x803E9F2Cu; f_803E5520(c); // 803E9F28
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9F2C
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[1]); // 803E9F30
  goto L_803EA0A0; // 803E9F34
L_803E9F38:;
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9F38
  goto L_803EA0A0; // 803E9F3C
L_803E9F40:;
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9F40
  goto L_803EA0A0; // 803E9F44
L_803E9F48:;
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9F48
  goto L_803EA0A0; // 803E9F4C
L_803E9F50:;
  c->r[28]=R32(c->r[29]+0x000000BCu); // 803E9F50
  cmps(c,0,(int32_t)c->r[28],0); // 803E9F54
  if (!crb(c,2)) { goto L_803E9F64; } // 803E9F58
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9F5C
  goto L_803EA0A0; // 803E9F60
L_803E9F64:;
  c->r[0]=R32(c->r[29]+0x000000C0u); // 803E9F64
  cmps(c,0,(int32_t)c->r[0],0); // 803E9F68
  if (crb(c,2)) { goto L_803E9F8C; } // 803E9F6C
  cmps(c,0,(int32_t)c->r[0],1); // 803E9F70
  if (crb(c,2)) { goto L_803E9FC0; } // 803E9F74
  cmps(c,0,(int32_t)c->r[0],2); // 803E9F78
  if (crb(c,2)) { goto L_803EA03C; } // 803E9F7C
  cmps(c,0,(int32_t)c->r[0],3); // 803E9F80
  if (crb(c,2)) { goto L_803EA094; } // 803E9F84
  goto L_803EA09C; // 803E9F88
L_803E9F8C:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 803E9F8C
  c->r[7]=R32(c->r[28]+0x00000118u); // 803E9F90
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803E9F94
  c->r[9]=c->r[30]|c->r[30]; // 803E9F98
  c->r[3]=c->r[28]+0x00000098u; // 803E9F9C
  c->r[4]=c->r[28]+0x000000B8u; // 803E9FA0
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803E9FA4
  c->r[5]=c->r[28]+0x000000D8u; // 803E9FA8
  c->r[6]=c->r[28]+0x000000F8u; // 803E9FAC
  c->lr=0x803E9FB4u; f_803E5520(c); // 803E9FB0
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9FB4
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[1]); // 803E9FB8
  goto L_803EA0A0; // 803E9FBC
L_803E9FC0:;
  c->r[0]=R32(c->r[29]+0x000000C8u); // 803E9FC0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803E9FC4
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9FC8
  cmps(c,0,(int32_t)c->r[0],0); // 803E9FCC
  {uint32_t ea=c->r[29]+0x000000C4u; c->f[22]=c->ps1[22]=RF32(ea);} // 803E9FD0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9FD4
  if (crb(c,2)) { goto L_803E9FF0; } // 803E9FD8
  cmps(c,0,(int32_t)c->r[30],0); // 803E9FDC
  if (crb(c,2)) { goto L_803E9FF0; } // 803E9FE0
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803E9FE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[22]); // 803E9FE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803E9FEC
L_803E9FF0:;
  fcmp(c,0,c->f[30],c->f[22]); // 803E9FF0
  if (!crb(c,2)) { goto L_803EA000; } // 803E9FF4
  c->f[1]=c->f[30]; // 803E9FF8
  goto L_803EA010; // 803E9FFC
L_803EA000:;
  c->f[2]=c->f[22]; // 803EA000
  c->lr=0x803EA008u; f_803AD468(c); // 803EA004
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EA008
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[22]); // 803EA00C
L_803EA010:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA010
  c->r[9]=c->r[30]|c->r[30]; // 803EA014
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA018
  c->r[3]=c->r[28]+0x00000098u; // 803EA01C
  c->r[4]=c->r[28]+0x000000B8u; // 803EA020
  c->r[5]=c->r[28]+0x000000D8u; // 803EA024
  c->r[6]=c->r[28]+0x000000F8u; // 803EA028
  c->lr=0x803EA030u; f_803E5520(c); // 803EA02C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA030
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[1]); // 803EA034
  goto L_803EA0A0; // 803EA038
L_803EA03C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803EA03C
  if (crb(c,2)) { goto L_803EA08C; } // 803EA040
  c->r[4]=R32(c->r[30]+0x00000068u); // 803EA044
  cmps(c,0,(int32_t)c->r[4],0); // 803EA048
  if (crb(c,2)) { goto L_803EA08C; } // 803EA04C
  c->r[0]=R32(c->r[29]+0x000000D0u); // 803EA050
  c->r[9]=c->r[30]|c->r[30]; // 803EA054
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA058
  c->r[3]=c->r[28]+0x00000098u; // 803EA05C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EA060
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA064
  c->r[5]=c->r[4]+c->r[0]; // 803EA068
  c->r[4]=c->r[28]+0x000000B8u; // 803EA06C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA070
  c->r[5]=c->r[28]+0x000000D8u; // 803EA074
  c->r[6]=c->r[28]+0x000000F8u; // 803EA078
  c->lr=0x803EA080u; f_803E5520(c); // 803EA07C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA080
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[1]); // 803EA084
  goto L_803EA0A0; // 803EA088
L_803EA08C:;
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803EA08C
  goto L_803EA0A0; // 803EA090
L_803EA094:;
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803EA094
  goto L_803EA0A0; // 803EA098
L_803EA09C:;
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[22]=c->ps1[22]=RF32(ea);} // 803EA09C
L_803EA0A0:;
  c->r[28]=R32(c->r[30]+0x00000070u); // 803EA0A0
  cmps(c,1,(int32_t)c->r[28],0); // 803EA0A4
  if (crb(c,6)) { goto L_803EA20C; } // 803EA0A8
  c->r[0]=R32(c->r[30]+0x00000080u); // 803EA0AC
  c->r[26]=R32(c->r[28]+0x0000006Cu); // 803EA0B0
  cmps(c,0,(int32_t)c->r[0],0); // 803EA0B4
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA0B8
  if (!crb(c,2)) { goto L_803EA204; } // 803EA0BC
  c->r[27]=R32(c->r[26]+0x000000BCu); // 803EA0C0
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA0C4
  cmps(c,0,(int32_t)c->r[27],0); // 803EA0C8
  if (!crb(c,2)) { goto L_803EA0D8; } // 803EA0CC
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA0D0
  goto L_803EA204; // 803EA0D4
L_803EA0D8:;
  c->r[0]=R32(c->r[26]+0x000000C0u); // 803EA0D8
  cmps(c,0,(int32_t)c->r[0],0); // 803EA0DC
  if (crb(c,2)) { goto L_803EA100; } // 803EA0E0
  cmps(c,0,(int32_t)c->r[0],1); // 803EA0E4
  if (crb(c,2)) { goto L_803EA12C; } // 803EA0E8
  cmps(c,0,(int32_t)c->r[0],2); // 803EA0EC
  if (crb(c,2)) { goto L_803EA1A4; } // 803EA0F0
  cmps(c,0,(int32_t)c->r[0],3); // 803EA0F4
  if (crb(c,2)) { goto L_803EA1F8; } // 803EA0F8
  goto L_803EA200; // 803EA0FC
L_803EA100:;
  c->r[7]=R32(c->r[27]+0x00000118u); // 803EA100
  c->r[9]=c->r[28]|c->r[28]; // 803EA104
  c->r[8]=R32(c->r[27]+0x0000011Cu); // 803EA108
  c->r[3]=c->r[27]+0x00000098u; // 803EA10C
  c->r[4]=c->r[27]+0x000000B8u; // 803EA110
  c->r[5]=c->r[27]+0x000000D8u; // 803EA114
  c->r[6]=c->r[27]+0x000000F8u; // 803EA118
  c->lr=0x803EA120u; f_803E5520(c); // 803EA11C
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA120
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EA124
  goto L_803EA204; // 803EA128
L_803EA12C:;
  c->r[0]=R32(c->r[26]+0x000000C8u); // 803EA12C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA130
  {uint32_t ea=c->r[28]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA134
  cmps(c,0,(int32_t)c->r[0],0); // 803EA138
  {uint32_t ea=c->r[26]+0x000000C4u; c->f[21]=c->ps1[21]=RF32(ea);} // 803EA13C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA140
  if (crb(c,2)) { goto L_803EA158; } // 803EA144
  if (crb(c,6)) { goto L_803EA158; } // 803EA148
  {uint32_t ea=c->r[28]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA14C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[21]); // 803EA150
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA154
L_803EA158:;
  fcmp(c,0,c->f[30],c->f[21]); // 803EA158
  if (!crb(c,2)) { goto L_803EA168; } // 803EA15C
  c->f[1]=c->f[30]; // 803EA160
  goto L_803EA178; // 803EA164
L_803EA168:;
  c->f[2]=c->f[21]; // 803EA168
  c->lr=0x803EA170u; f_803AD468(c); // 803EA16C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EA170
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[21]); // 803EA174
L_803EA178:;
  c->r[7]=R32(c->r[27]+0x00000118u); // 803EA178
  c->r[9]=c->r[28]|c->r[28]; // 803EA17C
  c->r[8]=R32(c->r[27]+0x0000011Cu); // 803EA180
  c->r[3]=c->r[27]+0x00000098u; // 803EA184
  c->r[4]=c->r[27]+0x000000B8u; // 803EA188
  c->r[5]=c->r[27]+0x000000D8u; // 803EA18C
  c->r[6]=c->r[27]+0x000000F8u; // 803EA190
  c->lr=0x803EA198u; f_803E5520(c); // 803EA194
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA198
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EA19C
  goto L_803EA204; // 803EA1A0
L_803EA1A4:;
  if (crb(c,6)) { goto L_803EA1F0; } // 803EA1A4
  c->r[4]=R32(c->r[28]+0x00000068u); // 803EA1A8
  cmps(c,0,(int32_t)c->r[4],0); // 803EA1AC
  if (crb(c,2)) { goto L_803EA1F0; } // 803EA1B0
  c->r[0]=R32(c->r[26]+0x000000D0u); // 803EA1B4
  c->r[9]=c->r[28]|c->r[28]; // 803EA1B8
  c->r[7]=R32(c->r[27]+0x00000118u); // 803EA1BC
  c->r[3]=c->r[27]+0x00000098u; // 803EA1C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EA1C4
  c->r[8]=R32(c->r[27]+0x0000011Cu); // 803EA1C8
  c->r[5]=c->r[4]+c->r[0]; // 803EA1CC
  c->r[4]=c->r[27]+0x000000B8u; // 803EA1D0
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA1D4
  c->r[5]=c->r[27]+0x000000D8u; // 803EA1D8
  c->r[6]=c->r[27]+0x000000F8u; // 803EA1DC
  c->lr=0x803EA1E4u; f_803E5520(c); // 803EA1E0
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA1E4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EA1E8
  goto L_803EA204; // 803EA1EC
L_803EA1F0:;
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA1F0
  goto L_803EA204; // 803EA1F4
L_803EA1F8:;
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA1F8
  goto L_803EA204; // 803EA1FC
L_803EA200:;
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA200
L_803EA204:;
  c->f[23]=c->ps1[23]=S(c->f[23]*c->f[0]); // 803EA204
  c->f[22]=c->ps1[22]=S(c->f[22]*c->f[0]); // 803EA208
L_803EA20C:;
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803EA20C
  {uint32_t ea=c->r[29]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA210
  c->r[0]=c->r[0]^0x80000000u; // 803EA214
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EA218
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[23]); // 803EA21C
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA220
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 803EA224
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 803EA228
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[23]); // 803EA22C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803EA230
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803EA234
  c->f[0]=c->ps1[0]=S(c->f[26]*c->f[0]); // 803EA238
  c->f[0]=c->ps1[0]=S(c->f[23]+c->f[0]); // 803EA23C
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 803EA240
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803EA244
  {uint32_t ea=c->r[29]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA248
  c->r[0]=c->r[0]^0x80000000u; // 803EA24C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803EA250
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[22]); // 803EA254
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA258
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803EA25C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 803EA260
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[22]); // 803EA264
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803EA268
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803EA26C
  c->f[0]=c->ps1[0]=S(c->f[26]*c->f[0]); // 803EA270
  c->f[0]=c->ps1[0]=S(c->f[22]+c->f[0]); // 803EA274
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[0]);} // 803EA278
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA27C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 803EA280
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EA284
  c->r[27]=R32(c->r[29]+0x0000021Cu); // 803EA288
  cmps(c,0,(int32_t)c->r[27],0); // 803EA28C
  if (crb(c,2)) { goto L_803EA57C; } // 803EA290
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803EA294
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA298
  c->r[0]=c->r[0]^0x80000000u; // 803EA29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EA2A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803EA2A4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 803EA2A8
  fcmp(c,0,c->f[30],c->f[2]); // 803EA2AC
  if (!crb(c,2)) { goto L_803EA404; } // 803EA2B0
  c->r[28]=R32(c->r[27]+0x00000004u); // 803EA2B4
  cmps(c,0,(int32_t)c->r[28],0); // 803EA2B8
  if (!crb(c,2)) { goto L_803EA2C8; } // 803EA2BC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA2C0
  goto L_803EA554; // 803EA2C4
L_803EA2C8:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 803EA2C8
  cmps(c,0,(int32_t)c->r[0],0); // 803EA2CC
  if (crb(c,2)) { goto L_803EA2F0; } // 803EA2D0
  cmps(c,0,(int32_t)c->r[0],1); // 803EA2D4
  if (crb(c,2)) { goto L_803EA320; } // 803EA2D8
  cmps(c,0,(int32_t)c->r[0],2); // 803EA2DC
  if (crb(c,2)) { goto L_803EA39C; } // 803EA2E0
  cmps(c,0,(int32_t)c->r[0],3); // 803EA2E4
  if (crb(c,2)) { goto L_803EA3F4; } // 803EA2E8
  goto L_803EA3FC; // 803EA2EC
L_803EA2F0:;
  c->f[1]=c->f[30]; // 803EA2F0
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA2F4
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA2F8
  c->r[9]=c->r[30]|c->r[30]; // 803EA2FC
  c->r[3]=c->r[28]+0x00000098u; // 803EA300
  c->r[4]=c->r[28]+0x000000B8u; // 803EA304
  c->r[5]=c->r[28]+0x000000D8u; // 803EA308
  c->r[6]=c->r[28]+0x000000F8u; // 803EA30C
  c->lr=0x803EA314u; f_803E5520(c); // 803EA310
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA314
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA318
  goto L_803EA554; // 803EA31C
L_803EA320:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 803EA320
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA324
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA328
  cmps(c,0,(int32_t)c->r[0],0); // 803EA32C
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[21]=c->ps1[21]=RF32(ea);} // 803EA330
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA334
  if (crb(c,2)) { goto L_803EA350; } // 803EA338
  cmps(c,0,(int32_t)c->r[30],0); // 803EA33C
  if (crb(c,2)) { goto L_803EA350; } // 803EA340
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA344
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[21]); // 803EA348
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA34C
L_803EA350:;
  fcmp(c,0,c->f[30],c->f[21]); // 803EA350
  if (!crb(c,2)) { goto L_803EA360; } // 803EA354
  c->f[1]=c->f[30]; // 803EA358
  goto L_803EA370; // 803EA35C
L_803EA360:;
  c->f[2]=c->f[21]; // 803EA360
  c->lr=0x803EA368u; f_803AD468(c); // 803EA364
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EA368
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[21]); // 803EA36C
L_803EA370:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA370
  c->r[9]=c->r[30]|c->r[30]; // 803EA374
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA378
  c->r[3]=c->r[28]+0x00000098u; // 803EA37C
  c->r[4]=c->r[28]+0x000000B8u; // 803EA380
  c->r[5]=c->r[28]+0x000000D8u; // 803EA384
  c->r[6]=c->r[28]+0x000000F8u; // 803EA388
  c->lr=0x803EA390u; f_803E5520(c); // 803EA38C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA390
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA394
  goto L_803EA554; // 803EA398
L_803EA39C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803EA39C
  if (crb(c,2)) { goto L_803EA3EC; } // 803EA3A0
  c->r[4]=R32(c->r[30]+0x00000068u); // 803EA3A4
  cmps(c,0,(int32_t)c->r[4],0); // 803EA3A8
  if (crb(c,2)) { goto L_803EA3EC; } // 803EA3AC
  c->r[0]=R32(c->r[27]+0x00000018u); // 803EA3B0
  c->r[9]=c->r[30]|c->r[30]; // 803EA3B4
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA3B8
  c->r[3]=c->r[28]+0x00000098u; // 803EA3BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EA3C0
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA3C4
  c->r[5]=c->r[4]+c->r[0]; // 803EA3C8
  c->r[4]=c->r[28]+0x000000B8u; // 803EA3CC
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA3D0
  c->r[5]=c->r[28]+0x000000D8u; // 803EA3D4
  c->r[6]=c->r[28]+0x000000F8u; // 803EA3D8
  c->lr=0x803EA3E0u; f_803E5520(c); // 803EA3DC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA3E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA3E4
  goto L_803EA554; // 803EA3E8
L_803EA3EC:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA3EC
  goto L_803EA554; // 803EA3F0
L_803EA3F4:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA3F4
  goto L_803EA554; // 803EA3F8
L_803EA3FC:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA3FC
  goto L_803EA554; // 803EA400
L_803EA404:;
  c->r[28]=R32(c->r[27]+0x00000004u); // 803EA404
  cmps(c,0,(int32_t)c->r[28],0); // 803EA408
  if (!crb(c,2)) { goto L_803EA418; } // 803EA40C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA410
  goto L_803EA554; // 803EA414
L_803EA418:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 803EA418
  cmps(c,0,(int32_t)c->r[0],0); // 803EA41C
  if (crb(c,2)) { goto L_803EA440; } // 803EA420
  cmps(c,0,(int32_t)c->r[0],1); // 803EA424
  if (crb(c,2)) { goto L_803EA474; } // 803EA428
  cmps(c,0,(int32_t)c->r[0],2); // 803EA42C
  if (crb(c,2)) { goto L_803EA4F0; } // 803EA430
  cmps(c,0,(int32_t)c->r[0],3); // 803EA434
  if (crb(c,2)) { goto L_803EA548; } // 803EA438
  goto L_803EA550; // 803EA43C
L_803EA440:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 803EA440
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA444
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA448
  c->r[9]=c->r[30]|c->r[30]; // 803EA44C
  c->r[3]=c->r[28]+0x00000098u; // 803EA450
  c->r[4]=c->r[28]+0x000000B8u; // 803EA454
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803EA458
  c->r[5]=c->r[28]+0x000000D8u; // 803EA45C
  c->r[6]=c->r[28]+0x000000F8u; // 803EA460
  c->lr=0x803EA468u; f_803E5520(c); // 803EA464
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA468
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA46C
  goto L_803EA554; // 803EA470
L_803EA474:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 803EA474
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA478
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA47C
  cmps(c,0,(int32_t)c->r[0],0); // 803EA480
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[21]=c->ps1[21]=RF32(ea);} // 803EA484
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA488
  if (crb(c,2)) { goto L_803EA4A4; } // 803EA48C
  cmps(c,0,(int32_t)c->r[30],0); // 803EA490
  if (crb(c,2)) { goto L_803EA4A4; } // 803EA494
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA498
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[21]); // 803EA49C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA4A0
L_803EA4A4:;
  fcmp(c,0,c->f[30],c->f[21]); // 803EA4A4
  if (!crb(c,2)) { goto L_803EA4B4; } // 803EA4A8
  c->f[1]=c->f[30]; // 803EA4AC
  goto L_803EA4C4; // 803EA4B0
L_803EA4B4:;
  c->f[2]=c->f[21]; // 803EA4B4
  c->lr=0x803EA4BCu; f_803AD468(c); // 803EA4B8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EA4BC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[21]); // 803EA4C0
L_803EA4C4:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA4C4
  c->r[9]=c->r[30]|c->r[30]; // 803EA4C8
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA4CC
  c->r[3]=c->r[28]+0x00000098u; // 803EA4D0
  c->r[4]=c->r[28]+0x000000B8u; // 803EA4D4
  c->r[5]=c->r[28]+0x000000D8u; // 803EA4D8
  c->r[6]=c->r[28]+0x000000F8u; // 803EA4DC
  c->lr=0x803EA4E4u; f_803E5520(c); // 803EA4E0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA4E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA4E8
  goto L_803EA554; // 803EA4EC
L_803EA4F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 803EA4F0
  if (crb(c,2)) { goto L_803EA540; } // 803EA4F4
  c->r[4]=R32(c->r[30]+0x00000068u); // 803EA4F8
  cmps(c,0,(int32_t)c->r[4],0); // 803EA4FC
  if (crb(c,2)) { goto L_803EA540; } // 803EA500
  c->r[0]=R32(c->r[27]+0x00000018u); // 803EA504
  c->r[9]=c->r[30]|c->r[30]; // 803EA508
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA50C
  c->r[3]=c->r[28]+0x00000098u; // 803EA510
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EA514
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA518
  c->r[5]=c->r[4]+c->r[0]; // 803EA51C
  c->r[4]=c->r[28]+0x000000B8u; // 803EA520
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA524
  c->r[5]=c->r[28]+0x000000D8u; // 803EA528
  c->r[6]=c->r[28]+0x000000F8u; // 803EA52C
  c->lr=0x803EA534u; f_803E5520(c); // 803EA530
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA534
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA538
  goto L_803EA554; // 803EA53C
L_803EA540:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA540
  goto L_803EA554; // 803EA544
L_803EA548:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA548
  goto L_803EA554; // 803EA54C
L_803EA550:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA550
L_803EA554:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EA554
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA558
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803EA55C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[25]); // 803EA560
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[24]); // 803EA564
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 803EA568
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 803EA56C
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA570
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EA574
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 803EA578
L_803EA57C:;
  c->r[27]=R32(c->r[29]+0x00000220u); // 803EA57C
  cmps(c,0,(int32_t)c->r[27],0); // 803EA580
  if (crb(c,2)) { goto L_803EA85C; } // 803EA584
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803EA588
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA58C
  c->r[0]=c->r[0]^0x80000000u; // 803EA590
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803EA594
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803EA598
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 803EA59C
  fcmp(c,0,c->f[30],c->f[2]); // 803EA5A0
  if (!crb(c,2)) { goto L_803EA6F8; } // 803EA5A4
  c->r[28]=R32(c->r[27]+0x00000004u); // 803EA5A8
  cmps(c,0,(int32_t)c->r[28],0); // 803EA5AC
  if (!crb(c,2)) { goto L_803EA5BC; } // 803EA5B0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA5B4
  goto L_803EA848; // 803EA5B8
L_803EA5BC:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 803EA5BC
  cmps(c,0,(int32_t)c->r[0],0); // 803EA5C0
  if (crb(c,2)) { goto L_803EA5E4; } // 803EA5C4
  cmps(c,0,(int32_t)c->r[0],1); // 803EA5C8
  if (crb(c,2)) { goto L_803EA614; } // 803EA5CC
  cmps(c,0,(int32_t)c->r[0],2); // 803EA5D0
  if (crb(c,2)) { goto L_803EA690; } // 803EA5D4
  cmps(c,0,(int32_t)c->r[0],3); // 803EA5D8
  if (crb(c,2)) { goto L_803EA6E8; } // 803EA5DC
  goto L_803EA6F0; // 803EA5E0
L_803EA5E4:;
  c->f[1]=c->f[30]; // 803EA5E4
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA5E8
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA5EC
  c->r[9]=c->r[30]|c->r[30]; // 803EA5F0
  c->r[3]=c->r[28]+0x00000098u; // 803EA5F4
  c->r[4]=c->r[28]+0x000000B8u; // 803EA5F8
  c->r[5]=c->r[28]+0x000000D8u; // 803EA5FC
  c->r[6]=c->r[28]+0x000000F8u; // 803EA600
  c->lr=0x803EA608u; f_803E5520(c); // 803EA604
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA608
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA60C
  goto L_803EA848; // 803EA610
L_803EA614:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 803EA614
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA618
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA61C
  cmps(c,0,(int32_t)c->r[0],0); // 803EA620
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[21]=c->ps1[21]=RF32(ea);} // 803EA624
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA628
  if (crb(c,2)) { goto L_803EA644; } // 803EA62C
  cmps(c,0,(int32_t)c->r[30],0); // 803EA630
  if (crb(c,2)) { goto L_803EA644; } // 803EA634
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA638
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[21]); // 803EA63C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA640
L_803EA644:;
  fcmp(c,0,c->f[30],c->f[21]); // 803EA644
  if (!crb(c,2)) { goto L_803EA654; } // 803EA648
  c->f[1]=c->f[30]; // 803EA64C
  goto L_803EA664; // 803EA650
L_803EA654:;
  c->f[2]=c->f[21]; // 803EA654
  c->lr=0x803EA65Cu; f_803AD468(c); // 803EA658
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EA65C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[21]); // 803EA660
L_803EA664:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA664
  c->r[9]=c->r[30]|c->r[30]; // 803EA668
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA66C
  c->r[3]=c->r[28]+0x00000098u; // 803EA670
  c->r[4]=c->r[28]+0x000000B8u; // 803EA674
  c->r[5]=c->r[28]+0x000000D8u; // 803EA678
  c->r[6]=c->r[28]+0x000000F8u; // 803EA67C
  c->lr=0x803EA684u; f_803E5520(c); // 803EA680
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA684
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA688
  goto L_803EA848; // 803EA68C
L_803EA690:;
  cmps(c,0,(int32_t)c->r[30],0); // 803EA690
  if (crb(c,2)) { goto L_803EA6E0; } // 803EA694
  c->r[4]=R32(c->r[30]+0x00000068u); // 803EA698
  cmps(c,0,(int32_t)c->r[4],0); // 803EA69C
  if (crb(c,2)) { goto L_803EA6E0; } // 803EA6A0
  c->r[0]=R32(c->r[27]+0x00000018u); // 803EA6A4
  c->r[9]=c->r[30]|c->r[30]; // 803EA6A8
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA6AC
  c->r[3]=c->r[28]+0x00000098u; // 803EA6B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EA6B4
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA6B8
  c->r[5]=c->r[4]+c->r[0]; // 803EA6BC
  c->r[4]=c->r[28]+0x000000B8u; // 803EA6C0
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA6C4
  c->r[5]=c->r[28]+0x000000D8u; // 803EA6C8
  c->r[6]=c->r[28]+0x000000F8u; // 803EA6CC
  c->lr=0x803EA6D4u; f_803E5520(c); // 803EA6D0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA6D4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA6D8
  goto L_803EA848; // 803EA6DC
L_803EA6E0:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA6E0
  goto L_803EA848; // 803EA6E4
L_803EA6E8:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA6E8
  goto L_803EA848; // 803EA6EC
L_803EA6F0:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA6F0
  goto L_803EA848; // 803EA6F4
L_803EA6F8:;
  c->r[28]=R32(c->r[27]+0x00000004u); // 803EA6F8
  cmps(c,0,(int32_t)c->r[28],0); // 803EA6FC
  if (!crb(c,2)) { goto L_803EA70C; } // 803EA700
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA704
  goto L_803EA848; // 803EA708
L_803EA70C:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 803EA70C
  cmps(c,0,(int32_t)c->r[0],0); // 803EA710
  if (crb(c,2)) { goto L_803EA734; } // 803EA714
  cmps(c,0,(int32_t)c->r[0],1); // 803EA718
  if (crb(c,2)) { goto L_803EA768; } // 803EA71C
  cmps(c,0,(int32_t)c->r[0],2); // 803EA720
  if (crb(c,2)) { goto L_803EA7E4; } // 803EA724
  cmps(c,0,(int32_t)c->r[0],3); // 803EA728
  if (crb(c,2)) { goto L_803EA83C; } // 803EA72C
  goto L_803EA844; // 803EA730
L_803EA734:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 803EA734
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA738
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA73C
  c->r[9]=c->r[30]|c->r[30]; // 803EA740
  c->r[3]=c->r[28]+0x00000098u; // 803EA744
  c->r[4]=c->r[28]+0x000000B8u; // 803EA748
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803EA74C
  c->r[5]=c->r[28]+0x000000D8u; // 803EA750
  c->r[6]=c->r[28]+0x000000F8u; // 803EA754
  c->lr=0x803EA75Cu; f_803E5520(c); // 803EA758
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA75C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA760
  goto L_803EA848; // 803EA764
L_803EA768:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 803EA768
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA76C
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA770
  cmps(c,0,(int32_t)c->r[0],0); // 803EA774
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[21]=c->ps1[21]=RF32(ea);} // 803EA778
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA77C
  if (crb(c,2)) { goto L_803EA798; } // 803EA780
  cmps(c,0,(int32_t)c->r[30],0); // 803EA784
  if (crb(c,2)) { goto L_803EA798; } // 803EA788
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA78C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[21]); // 803EA790
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EA794
L_803EA798:;
  fcmp(c,0,c->f[30],c->f[21]); // 803EA798
  if (!crb(c,2)) { goto L_803EA7A8; } // 803EA79C
  c->f[1]=c->f[30]; // 803EA7A0
  goto L_803EA7B8; // 803EA7A4
L_803EA7A8:;
  c->f[2]=c->f[21]; // 803EA7A8
  c->lr=0x803EA7B0u; f_803AD468(c); // 803EA7AC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EA7B0
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[21]); // 803EA7B4
L_803EA7B8:;
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA7B8
  c->r[9]=c->r[30]|c->r[30]; // 803EA7BC
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA7C0
  c->r[3]=c->r[28]+0x00000098u; // 803EA7C4
  c->r[4]=c->r[28]+0x000000B8u; // 803EA7C8
  c->r[5]=c->r[28]+0x000000D8u; // 803EA7CC
  c->r[6]=c->r[28]+0x000000F8u; // 803EA7D0
  c->lr=0x803EA7D8u; f_803E5520(c); // 803EA7D4
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA7D8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA7DC
  goto L_803EA848; // 803EA7E0
L_803EA7E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803EA7E4
  if (crb(c,2)) { goto L_803EA834; } // 803EA7E8
  c->r[4]=R32(c->r[30]+0x00000068u); // 803EA7EC
  cmps(c,0,(int32_t)c->r[4],0); // 803EA7F0
  if (crb(c,2)) { goto L_803EA834; } // 803EA7F4
  c->r[0]=R32(c->r[27]+0x00000018u); // 803EA7F8
  c->r[9]=c->r[30]|c->r[30]; // 803EA7FC
  c->r[7]=R32(c->r[28]+0x00000118u); // 803EA800
  c->r[3]=c->r[28]+0x00000098u; // 803EA804
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EA808
  c->r[8]=R32(c->r[28]+0x0000011Cu); // 803EA80C
  c->r[5]=c->r[4]+c->r[0]; // 803EA810
  c->r[4]=c->r[28]+0x000000B8u; // 803EA814
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA818
  c->r[5]=c->r[28]+0x000000D8u; // 803EA81C
  c->r[6]=c->r[28]+0x000000F8u; // 803EA820
  c->lr=0x803EA828u; f_803E5520(c); // 803EA824
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA828
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EA82C
  goto L_803EA848; // 803EA830
L_803EA834:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA834
  goto L_803EA848; // 803EA838
L_803EA83C:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA83C
  goto L_803EA848; // 803EA840
L_803EA844:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA844
L_803EA848:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EA848
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA84C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803EA850
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EA854
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EA858
L_803EA85C:;
  {uint32_t ea=c->r[30]+0x00000048u; psq_load(c,0,ea,0,0);} // 803EA85C
  {double t0=S(c->f[0]*c->f[28]), t1=S(c->ps1[0]*c->f[28]); c->f[0]=t0; c->ps1[0]=t1;} // 803EA860
  {uint32_t ea=c->r[30]+0x00000048u; psq_store(c,0,ea,0,0);} // 803EA864
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA868
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803EA86C
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 803EA870
  c->r[30]=R32(c->r[30]+0x00000000u); // 803EA874
  cmps(c,0,(int32_t)c->r[30],0); // 803EA878
  if (!crb(c,2)) { IRQCHK(c); goto L_803E9B20; } // 803EA87C
  {uint32_t ea=c->r[29]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA880
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA884
  fcmp(c,0,c->f[1],c->f[0]); // 803EA888
  if (!crb(c,1)) { goto L_803EA8AC; } // 803EA88C
  c->r[26]=R32(c->r[29]+0x0000005Cu); // 803EA890
L_803EA894:;
  c->r[3]=c->r[29]|c->r[29]; // 803EA894
  c->r[4]=c->r[26]|c->r[26]; // 803EA898
  c->lr=0x803EA8A0u; f_803EA9BC(c); // 803EA89C
  c->r[26]=R32(c->r[26]+0x00000000u); // 803EA8A0
  cmps(c,0,(int32_t)c->r[26],0); // 803EA8A4
  if (!crb(c,2)) { IRQCHK(c); goto L_803EA894; } // 803EA8A8
L_803EA8AC:;
  c->r[0]=R32(c->r[29]+0x00000180u); // 803EA8AC
  cmps(c,0,(int32_t)c->r[0],0); // 803EA8B0
  if (crb(c,2)) { goto L_803EA8E0; } // 803EA8B4
  c->r[26]=R32(c->r[29]+0x0000005Cu); // 803EA8B8
L_803EA8BC:;
  c->r[3]=R32(c->r[29]+0x00000180u); // 803EA8BC
  c->r[4]=c->r[26]|c->r[26]; // 803EA8C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EA8C4
  c->r[12]=R32(c->r[12]+0x00000054u); // 803EA8C8
  c->ctr=c->r[12]; // 803EA8CC
  if (true) { c->lr=0x803EA8D4u; dispatch(c,c->ctr); } // 803EA8D0
  c->r[26]=R32(c->r[26]+0x00000000u); // 803EA8D4
  cmps(c,0,(int32_t)c->r[26],0); // 803EA8D8
  if (!crb(c,2)) { IRQCHK(c); goto L_803EA8BC; } // 803EA8DC
L_803EA8E0:;
  c->r[0]=R32(c->r[29]+0x000001C0u); // 803EA8E0
  cmps(c,0,(int32_t)c->r[0],3); // 803EA8E4
  if (crb(c,2)) { goto L_803EA94C; } // 803EA8E8
  cmps(c,0,(int32_t)c->r[0],0); // 803EA8EC
  if (crb(c,2)) { goto L_803EA94C; } // 803EA8F0
  c->r[3]=R32(c->r[29]+0x0000018Cu); // 803EA8F4
  c->r[0]=R32(c->r[29]+0x000001C4u); // 803EA8F8
  {uint32_t ea=c->r[29]+0x000001CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA8FC
  c->r[0]=c->r[0]-c->r[3]; // 803EA900
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803EA904
  c->r[0]=c->r[0]^0x80000000u; // 803EA908
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EA90C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[29]); // 803EA910
  c->r[3]=R32(c->r[29]+0x0000005Cu); // 803EA914
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 803EA918
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EA91C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 803EA920
L_803EA924:;
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EA924
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 803EA928
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 803EA92C
  fcmp(c,0,c->f[1],c->f[2]); // 803EA930
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803EA934
  if (!crb(c,2)) { goto L_803EA940; } // 803EA938
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 803EA93C
L_803EA940:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803EA940
  cmps(c,0,(int32_t)c->r[3],0); // 803EA944
  if (!crb(c,2)) { IRQCHK(c); goto L_803EA924; } // 803EA948
L_803EA94C:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 803EA94C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 803EA950
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 803EA954
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 803EA958
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 803EA95C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 803EA960
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,28,ea,0,0);} // 803EA964
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[28]=RF64(ea);} // 803EA968
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,27,ea,0,0);} // 803EA96C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[27]=RF64(ea);} // 803EA970
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,26,ea,0,0);} // 803EA974
  {uint32_t ea=c->r[1]+0x00000080u; c->f[26]=RF64(ea);} // 803EA978
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,25,ea,0,0);} // 803EA97C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[25]=RF64(ea);} // 803EA980
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,24,ea,0,0);} // 803EA984
  {uint32_t ea=c->r[1]+0x00000060u; c->f[24]=RF64(ea);} // 803EA988
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,23,ea,0,0);} // 803EA98C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[23]=RF64(ea);} // 803EA990
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,22,ea,0,0);} // 803EA994
  {uint32_t ea=c->r[1]+0x00000040u; c->f[22]=RF64(ea);} // 803EA998
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,21,ea,0,0);} // 803EA99C
  c->r[11]=c->r[1]+0x00000030u; // 803EA9A0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[21]=RF64(ea);} // 803EA9A4
  c->lr=0x803EA9ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803EA9A8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 803EA9AC
  c->lr=c->r[0]; // 803EA9B0
  c->r[1]=c->r[1]+0x000000E0u; // 803EA9B4
  return; // 803EA9B8
}

// fn_803EA9BC
void f_803EA9BC(Ctx* __restrict c) {
  trace_call(0x803EA9BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EA9BC
  c->r[0]=c->lr; // 803EA9C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 803EA9C4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 803EA9C8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 803EA9CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803EA9D0
  c->r[31]=0u+0x00000000u; // 803EA9D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 803EA9D8
  c->r[30]=c->r[4]|c->r[4]; // 803EA9DC
  W32(c->r[1]+0x00000024u,c->r[29]); // 803EA9E0
  c->r[29]=c->r[3]|c->r[3]; // 803EA9E4
  c->r[5]=R32(c->r[4]+0x00000078u); // 803EA9E8
  cmps(c,0,(int32_t)c->r[5],0); // 803EA9EC
  if (crb(c,2)) { goto L_803EAA20; } // 803EA9F0
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803EA9F4
  cmps(c,0,(int32_t)c->r[3],0); // 803EA9F8
  if (crb(c,2)) { goto L_803EAA20; } // 803EA9FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EAA00
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803EAA04
  c->ctr=c->r[12]; // 803EAA08
  if (true) { c->lr=0x803EAA10u; dispatch(c,c->ctr); } // 803EAA0C
  cmps(c,0,(int32_t)c->r[3],2); // 803EAA10
  if (!crb(c,2)) { goto L_803EAA20; } // 803EAA14
  c->r[3]=R32(c->r[30]+0x00000078u); // 803EAA18
  c->r[31]=R32(c->r[3]+0x0000006Cu); // 803EAA1C
L_803EAA20:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EAA20
  if (crb(c,2)) { goto L_803EAA64; } // 803EAA24
  c->r[0]=R32(c->r[31]+0x00000144u); // 803EAA28
  cmps(c,0,(int32_t)c->r[0],0); // 803EAA2C
  if (!crb(c,2)) { goto L_803EAA64; } // 803EAA30
  c->r[3]=R32(c->r[30]+0x00000078u); // 803EAA34
  c->r[4]=c->r[1]+0x00000008u; // 803EAA38
  {uint32_t ea=c->r[30]+0x00000038u; psq_load(c,3,ea,0,0);} // 803EAA3C
  c->r[3]=R32(c->r[3]+0x00000068u); // 803EAA40
  {uint32_t ea=c->r[30]+0x00000040u; psq_load(c,2,ea,0,0);} // 803EAA44
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 803EAA48
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 803EAA4C
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803EAA50
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803EAA54
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 803EAA58
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803EAA5C
  goto L_803EAA7C; // 803EAA60
L_803EAA64:;
  c->r[4]=c->r[1]+0x00000008u; // 803EAA64
  {uint32_t ea=c->r[30]+0x00000038u; psq_load(c,1,ea,0,0);} // 803EAA68
  c->r[3]=c->r[1]+0x00000010u; // 803EAA6C
  {uint32_t ea=c->r[30]+0x00000040u; psq_load(c,0,ea,0,0);} // 803EAA70
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 803EAA74
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803EAA78
L_803EAA7C:;
  {uint32_t ea=c->r[29]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAA7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EAA80
  c->f[0]=-c->f[1]; // 803EAA84
  fcmp(c,0,c->f[2],c->f[0]); // 803EAA88
  if (crb(c,0)) { goto L_803EAA98; } // 803EAA8C
  fcmp(c,0,c->f[2],c->f[1]); // 803EAA90
  if (!crb(c,1)) { goto L_803EAAC8; } // 803EAA94
L_803EAA98:;
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EAA98
  {uint32_t ea=c->r[29]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAA9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAAA0
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 803EAAA4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EAAA8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 803EAAAC
  c->lr=0x803EAAB4u; f_803ACFD0(c); // 803EAAB0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803EAAB4
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAAB8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803EAABC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EAAC0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 803EAAC4
L_803EAAC8:;
  {uint32_t ea=c->r[29]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAAC8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803EAACC
  c->f[0]=-c->f[1]; // 803EAAD0
  fcmp(c,0,c->f[2],c->f[0]); // 803EAAD4
  if (crb(c,0)) { goto L_803EAAE4; } // 803EAAD8
  fcmp(c,0,c->f[2],c->f[1]); // 803EAADC
  if (!crb(c,1)) { goto L_803EAB14; } // 803EAAE0
L_803EAAE4:;
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EAAE4
  {uint32_t ea=c->r[29]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAAE8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAAEC
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 803EAAF0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EAAF4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 803EAAF8
  c->lr=0x803EAB00u; f_803ACFD0(c); // 803EAAFC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803EAB00
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAB04
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803EAB08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EAB0C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 803EAB10
L_803EAB14:;
  {uint32_t ea=c->r[29]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAB14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EAB18
  c->f[0]=-c->f[1]; // 803EAB1C
  fcmp(c,0,c->f[2],c->f[0]); // 803EAB20
  if (crb(c,0)) { goto L_803EAB30; } // 803EAB24
  fcmp(c,0,c->f[2],c->f[1]); // 803EAB28
  if (!crb(c,1)) { goto L_803EAB60; } // 803EAB2C
L_803EAB30:;
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EAB30
  {uint32_t ea=c->r[29]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAB34
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAB38
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 803EAB3C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EAB40
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 803EAB44
  c->lr=0x803EAB4Cu; f_803ACFD0(c); // 803EAB48
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803EAB4C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAB50
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803EAB54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EAB58
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 803EAB5C
L_803EAB60:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803EAB60
  c->r[0]=R32(c->r[1]+0x00000044u); // 803EAB64
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803EAB68
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803EAB6C
  c->r[30]=R32(c->r[1]+0x00000028u); // 803EAB70
  c->r[29]=R32(c->r[1]+0x00000024u); // 803EAB74
  c->lr=c->r[0]; // 803EAB78
  c->r[1]=c->r[1]+0x00000040u; // 803EAB7C
  return; // 803EAB80
}

// fn_803EAB84
void f_803EAB84(Ctx* __restrict c) {
  trace_call(0x803EAB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EAB84
  c->r[0]=c->lr; // 803EAB88
  W32(c->r[1]+0x00000054u,c->r[0]); // 803EAB8C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803EAB90
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803EAB94
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803EAB98
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803EAB9C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 803EABA0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 803EABA4
  c->r[6]=0u+0x80570000u; // 803EABA8
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EABAC
  c->r[6]=c->r[6]+0x000041A8u; // 803EABB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803EABB4
  c->r[31]=c->r[4]|c->r[4]; // 803EABB8
  c->r[5]=0u+0x00000000u; // 803EABBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803EABC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803EABC4
  {uint32_t ea=c->r[3]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EABC8
  {uint32_t ea=c->r[6]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EABCC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 803EABD0
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EABD4
  {uint32_t ea=c->r[3]+0x00000194u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EABD8
  fcmp(c,0,c->f[1],c->f[0]); // 803EABDC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[3]); // 803EABE0
  if (crb(c,2)) { goto L_803EABF8; } // 803EABE4
  c->r[0]=R32(c->r[6]+0x00000014u); // 803EABE8
  cmps(c,0,(int32_t)c->r[0],0); // 803EABEC
  if (crb(c,2)) { goto L_803EABF8; } // 803EABF0
  c->r[5]=0u+0x00000001u; // 803EABF4
L_803EABF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 803EABF8
  if (crb(c,2)) { goto L_803EAC08; } // 803EABFC
  {uint32_t ea=c->r[3]+0x00000194u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EAC00
  goto L_803EAC0C; // 803EAC04
L_803EAC08:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EAC08
L_803EAC0C:;
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 803EAC0C
  c->r[30]=R32(c->r[3]+0x00000220u); // 803EAC10
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 803EAC14
  cmps(c,0,(int32_t)c->r[30],0); // 803EAC18
  if (crb(c,2)) { goto L_803EAF08; } // 803EAC1C
  c->r[3]=R32(c->r[3]+0x0000016Cu); // 803EAC20
  c->r[0]=0u+0x43300000u; // 803EAC24
  W32(c->r[1]+0x00000008u,c->r[0]); // 803EAC28
  c->r[0]=c->r[3]^0x80000000u; // 803EAC2C
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803EAC30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803EAC34
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAC38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803EAC3C
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803EAC40
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 803EAC44
  fcmp(c,0,c->f[1],c->f[2]); // 803EAC48
  if (!crb(c,2)) { goto L_803EADA8; } // 803EAC4C
  c->r[29]=R32(c->r[30]+0x00000004u); // 803EAC50
  cmps(c,0,(int32_t)c->r[29],0); // 803EAC54
  if (!crb(c,2)) { goto L_803EAC64; } // 803EAC58
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAC5C
  goto L_803EAF04; // 803EAC60
L_803EAC64:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 803EAC64
  cmps(c,0,(int32_t)c->r[0],0); // 803EAC68
  if (crb(c,2)) { goto L_803EAC8C; } // 803EAC6C
  cmps(c,0,(int32_t)c->r[0],1); // 803EAC70
  if (crb(c,2)) { goto L_803EACB8; } // 803EAC74
  cmps(c,0,(int32_t)c->r[0],2); // 803EAC78
  if (crb(c,2)) { goto L_803EAD40; } // 803EAC7C
  cmps(c,0,(int32_t)c->r[0],3); // 803EAC80
  if (crb(c,2)) { goto L_803EAD98; } // 803EAC84
  goto L_803EADA0; // 803EAC88
L_803EAC8C:;
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EAC8C
  c->r[9]=c->r[31]|c->r[31]; // 803EAC90
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EAC94
  c->r[3]=c->r[29]+0x00000098u; // 803EAC98
  c->r[4]=c->r[29]+0x000000B8u; // 803EAC9C
  c->r[5]=c->r[29]+0x000000D8u; // 803EACA0
  c->r[6]=c->r[29]+0x000000F8u; // 803EACA4
  c->lr=0x803EACACu; f_803E5520(c); // 803EACA8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EACAC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EACB0
  goto L_803EAF04; // 803EACB4
L_803EACB8:;
  c->r[3]=0u+0x80570000u; // 803EACB8
  c->r[0]=R32(c->r[30]+0x00000010u); // 803EACBC
  c->r[3]=c->r[3]+0x000041A8u; // 803EACC0
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EACC4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EACC8
  cmps(c,0,(int32_t)c->r[0],0); // 803EACCC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 803EACD0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EACD4
  if (crb(c,2)) { goto L_803EACF0; } // 803EACD8
  cmps(c,0,(int32_t)c->r[4],0); // 803EACDC
  if (crb(c,2)) { goto L_803EACF0; } // 803EACE0
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EACE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803EACE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EACEC
L_803EACF0:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EACF0
  fcmp(c,0,c->f[0],c->f[29]); // 803EACF4
  if (!crb(c,2)) { goto L_803EAD00; } // 803EACF8
  goto L_803EAD10; // 803EACFC
L_803EAD00:;
  c->f[2]=c->f[29]; // 803EAD00
  c->lr=0x803EAD08u; f_803AD468(c); // 803EAD04
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EAD08
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803EAD0C
L_803EAD10:;
  c->f[1]=c->f[0]; // 803EAD10
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EAD14
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EAD18
  c->r[9]=c->r[31]|c->r[31]; // 803EAD1C
  c->r[3]=c->r[29]+0x00000098u; // 803EAD20
  c->r[4]=c->r[29]+0x000000B8u; // 803EAD24
  c->r[5]=c->r[29]+0x000000D8u; // 803EAD28
  c->r[6]=c->r[29]+0x000000F8u; // 803EAD2C
  c->lr=0x803EAD34u; f_803E5520(c); // 803EAD30
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAD34
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EAD38
  goto L_803EAF04; // 803EAD3C
L_803EAD40:;
  cmps(c,0,(int32_t)c->r[4],0); // 803EAD40
  if (crb(c,2)) { goto L_803EAD90; } // 803EAD44
  c->r[4]=R32(c->r[4]+0x00000068u); // 803EAD48
  cmps(c,0,(int32_t)c->r[4],0); // 803EAD4C
  if (crb(c,2)) { goto L_803EAD90; } // 803EAD50
  c->r[0]=R32(c->r[30]+0x00000018u); // 803EAD54
  c->r[9]=c->r[31]|c->r[31]; // 803EAD58
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EAD5C
  c->r[3]=c->r[29]+0x00000098u; // 803EAD60
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EAD64
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EAD68
  c->r[5]=c->r[4]+c->r[0]; // 803EAD6C
  c->r[4]=c->r[29]+0x000000B8u; // 803EAD70
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAD74
  c->r[5]=c->r[29]+0x000000D8u; // 803EAD78
  c->r[6]=c->r[29]+0x000000F8u; // 803EAD7C
  c->lr=0x803EAD84u; f_803E5520(c); // 803EAD80
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAD84
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EAD88
  goto L_803EAF04; // 803EAD8C
L_803EAD90:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAD90
  goto L_803EAF04; // 803EAD94
L_803EAD98:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAD98
  goto L_803EAF04; // 803EAD9C
L_803EADA0:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EADA0
  goto L_803EAF04; // 803EADA4
L_803EADA8:;
  c->r[29]=R32(c->r[30]+0x00000004u); // 803EADA8
  cmps(c,0,(int32_t)c->r[29],0); // 803EADAC
  if (!crb(c,2)) { goto L_803EADBC; } // 803EADB0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EADB4
  goto L_803EAF04; // 803EADB8
L_803EADBC:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 803EADBC
  cmps(c,0,(int32_t)c->r[0],0); // 803EADC0
  if (crb(c,2)) { goto L_803EADE4; } // 803EADC4
  cmps(c,0,(int32_t)c->r[0],1); // 803EADC8
  if (crb(c,2)) { goto L_803EAE18; } // 803EADCC
  cmps(c,0,(int32_t)c->r[0],2); // 803EADD0
  if (crb(c,2)) { goto L_803EAEA0; } // 803EADD4
  cmps(c,0,(int32_t)c->r[0],3); // 803EADD8
  if (crb(c,2)) { goto L_803EAEF8; } // 803EADDC
  goto L_803EAF00; // 803EADE0
L_803EADE4:;
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 803EADE4
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EADE8
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EADEC
  c->r[9]=c->r[31]|c->r[31]; // 803EADF0
  c->r[3]=c->r[29]+0x00000098u; // 803EADF4
  c->r[4]=c->r[29]+0x000000B8u; // 803EADF8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 803EADFC
  c->r[5]=c->r[29]+0x000000D8u; // 803EAE00
  c->r[6]=c->r[29]+0x000000F8u; // 803EAE04
  c->lr=0x803EAE0Cu; f_803E5520(c); // 803EAE08
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAE0C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EAE10
  goto L_803EAF04; // 803EAE14
L_803EAE18:;
  c->r[3]=0u+0x80570000u; // 803EAE18
  c->r[0]=R32(c->r[30]+0x00000010u); // 803EAE1C
  c->r[3]=c->r[3]+0x000041A8u; // 803EAE20
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAE24
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAE28
  cmps(c,0,(int32_t)c->r[0],0); // 803EAE2C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 803EAE30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EAE34
  if (crb(c,2)) { goto L_803EAE50; } // 803EAE38
  cmps(c,0,(int32_t)c->r[4],0); // 803EAE3C
  if (crb(c,2)) { goto L_803EAE50; } // 803EAE40
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAE44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803EAE48
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EAE4C
L_803EAE50:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAE50
  fcmp(c,0,c->f[0],c->f[29]); // 803EAE54
  if (!crb(c,2)) { goto L_803EAE60; } // 803EAE58
  goto L_803EAE70; // 803EAE5C
L_803EAE60:;
  c->f[2]=c->f[29]; // 803EAE60
  c->lr=0x803EAE68u; f_803AD468(c); // 803EAE64
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EAE68
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803EAE6C
L_803EAE70:;
  c->f[1]=c->f[0]; // 803EAE70
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EAE74
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EAE78
  c->r[9]=c->r[31]|c->r[31]; // 803EAE7C
  c->r[3]=c->r[29]+0x00000098u; // 803EAE80
  c->r[4]=c->r[29]+0x000000B8u; // 803EAE84
  c->r[5]=c->r[29]+0x000000D8u; // 803EAE88
  c->r[6]=c->r[29]+0x000000F8u; // 803EAE8C
  c->lr=0x803EAE94u; f_803E5520(c); // 803EAE90
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAE94
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EAE98
  goto L_803EAF04; // 803EAE9C
L_803EAEA0:;
  cmps(c,0,(int32_t)c->r[4],0); // 803EAEA0
  if (crb(c,2)) { goto L_803EAEF0; } // 803EAEA4
  c->r[4]=R32(c->r[4]+0x00000068u); // 803EAEA8
  cmps(c,0,(int32_t)c->r[4],0); // 803EAEAC
  if (crb(c,2)) { goto L_803EAEF0; } // 803EAEB0
  c->r[0]=R32(c->r[30]+0x00000018u); // 803EAEB4
  c->r[9]=c->r[31]|c->r[31]; // 803EAEB8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EAEBC
  c->r[3]=c->r[29]+0x00000098u; // 803EAEC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EAEC4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EAEC8
  c->r[5]=c->r[4]+c->r[0]; // 803EAECC
  c->r[4]=c->r[29]+0x000000B8u; // 803EAED0
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAED4
  c->r[5]=c->r[29]+0x000000D8u; // 803EAED8
  c->r[6]=c->r[29]+0x000000F8u; // 803EAEDC
  c->lr=0x803EAEE4u; f_803E5520(c); // 803EAEE0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAEE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EAEE8
  goto L_803EAF04; // 803EAEEC
L_803EAEF0:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAEF0
  goto L_803EAF04; // 803EAEF4
L_803EAEF8:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAEF8
  goto L_803EAF04; // 803EAEFC
L_803EAF00:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAF00
L_803EAF04:;
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 803EAF04
L_803EAF08:;
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[31]); // 803EAF08
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAF0C
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[0]); // 803EAF10
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803EAF14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803EAF18
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803EAF1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803EAF20
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 803EAF24
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 803EAF28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803EAF2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803EAF30
  c->r[29]=R32(c->r[1]+0x00000014u); // 803EAF34
  c->r[0]=R32(c->r[1]+0x00000054u); // 803EAF38
  c->lr=c->r[0]; // 803EAF3C
  c->r[1]=c->r[1]+0x00000050u; // 803EAF40
  return; // 803EAF44
}

// fn_803EAF48
void f_803EAF48(Ctx* __restrict c) {
  trace_call(0x803EAF48u);
  c->r[3]=c->r[13]+0xFFFFDEC0u; // 803EAF48
  return; // 803EAF4C
}

// fn_803EAF50
void f_803EAF50(Ctx* __restrict c) {
  trace_call(0x803EAF50u);
  c->r[3]=c->r[13]+0xFFFFDEC8u; // 803EAF50
  return; // 803EAF54
}

// fn_803EAF58
void f_803EAF58(Ctx* __restrict c) {
  trace_call(0x803EAF58u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EAF58
  c->r[0]=c->lr; // 803EAF5C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EAF60
  W32(c->r[1]+0x00000434u,c->r[0]); // 803EAF64
  c->r[0]=0u+0x00000000u; // 803EAF68
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EAF6C
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803EAF70
  c->r[31]=0u+0x80470000u; // 803EAF74
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EAF78
  W32(c->r[1]+0x00000428u,c->r[30]); // 803EAF7C
  c->r[30]=c->r[4]|c->r[4]; // 803EAF80
  W32(c->r[1]+0x00000424u,c->r[29]); // 803EAF84
  c->r[29]=c->r[3]|c->r[3]; // 803EAF88
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803EAF8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803EAF90
  W32(c->r[1]+0x00000020u,c->r[0]); // 803EAF94
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803EAF98
  W32(c->r[1]+0x00000028u,c->r[0]); // 803EAF9C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803EAFA0
  W32(c->r[1]+0x00000030u,c->r[0]); // 803EAFA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803EAFA8
L_803EAFAC:;
  c->r[3]=c->r[30]|c->r[30]; // 803EAFAC
  c->r[4]=c->r[1]+0x00000008u; // 803EAFB0
  c->r[5]=c->r[1]+0x00000010u; // 803EAFB4
  c->r[6]=c->r[1]+0x0000000Cu; // 803EAFB8
  c->r[7]=c->r[1]+0x00000038u; // 803EAFBC
  c->r[8]=c->r[1]+0x00000018u; // 803EAFC0
  c->r[9]=0u+0x000003E8u; // 803EAFC4
  c->lr=0x803EAFCCu; f_80403308(c); // 803EAFC8
  c->r[3]=R32(c->r[1]+0x00000008u); // 803EAFCC
  c->r[0]=c->r[3]+0xFFFFFFCEu; // 803EAFD0
  cmpu(c,0,c->r[0],0x00000030u); // 803EAFD4
  if (crb(c,1)) { goto L_803EB198; } // 803EAFD8
  c->r[3]=c->r[31]+0xFFFF9814u; // 803EAFDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EAFE0
  c->r[3]=R32(c->r[3]+c->r[0]); // 803EAFE4
  c->ctr=c->r[3]; // 803EAFE8
  if (true) { switch (c->ctr) { case 0x803EAFF0u: goto L_803EAFF0; case 0x803EB008u: goto L_803EB008; case 0x803EB014u: goto L_803EB014; case 0x803EB028u: goto L_803EB028; case 0x803EB040u: goto L_803EB040; case 0x803EB058u: goto L_803EB058; case 0x803EB070u: goto L_803EB070; case 0x803EB088u: goto L_803EB088; case 0x803EB094u: goto L_803EB094; case 0x803EB0A0u: goto L_803EB0A0; case 0x803EB0B8u: goto L_803EB0B8; case 0x803EB0C4u: goto L_803EB0C4; case 0x803EB0DCu: goto L_803EB0DC; case 0x803EB0F0u: goto L_803EB0F0; case 0x803EB0FCu: goto L_803EB0FC; case 0x803EB114u: goto L_803EB114; case 0x803EB128u: goto L_803EB128; case 0x803EB134u: goto L_803EB134; case 0x803EB140u: goto L_803EB140; case 0x803EB160u: goto L_803EB160; case 0x803EB16Cu: goto L_803EB16C; case 0x803EB178u: goto L_803EB178; case 0x803EB184u: goto L_803EB184; case 0x803EB190u: goto L_803EB190; case 0x803EB198u: goto L_803EB198; default: break; } dispatch(c,c->ctr); return; } // 803EAFEC
L_803EAFF0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EAFF0
  c->r[3]=c->r[30]|c->r[30]; // 803EAFF4
  c->r[5]=c->r[1]+0x00000018u; // 803EAFF8
  c->r[6]=c->r[29]+0x00000098u; // 803EAFFC
  c->lr=0x803EB004u; f_804039BC(c); // 803EB000
  goto L_803EB198; // 803EB004
L_803EB008:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB008
  W32(c->r[29]+0x000000B8u,c->r[0]); // 803EB00C
  goto L_803EB198; // 803EB010
L_803EB014:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB014
  c->r[3]=c->r[30]|c->r[30]; // 803EB018
  c->r[5]=c->r[29]+0x000000BCu; // 803EB01C
  c->lr=0x803EB024u; f_804039AC(c); // 803EB020
  goto L_803EB198; // 803EB024
L_803EB028:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB028
  c->r[3]=c->r[30]|c->r[30]; // 803EB02C
  c->r[5]=c->r[1]+0x00000018u; // 803EB030
  c->r[6]=c->r[29]+0x000000C0u; // 803EB034
  c->lr=0x803EB03Cu; f_804039BC(c); // 803EB038
  goto L_803EB198; // 803EB03C
L_803EB040:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB040
  c->r[3]=c->r[30]|c->r[30]; // 803EB044
  c->r[5]=c->r[1]+0x00000018u; // 803EB048
  c->r[6]=c->r[29]+0x000000E0u; // 803EB04C
  c->lr=0x803EB054u; f_804039BC(c); // 803EB050
  goto L_803EB198; // 803EB054
L_803EB058:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB058
  c->r[3]=c->r[30]|c->r[30]; // 803EB05C
  c->r[5]=c->r[1]+0x00000018u; // 803EB060
  c->r[6]=c->r[29]+0x00000100u; // 803EB064
  c->lr=0x803EB06Cu; f_804039BC(c); // 803EB068
  goto L_803EB198; // 803EB06C
L_803EB070:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB070
  c->r[3]=c->r[30]|c->r[30]; // 803EB074
  c->r[5]=c->r[1]+0x00000018u; // 803EB078
  c->r[6]=c->r[29]+0x00000120u; // 803EB07C
  c->lr=0x803EB084u; f_804039BC(c); // 803EB080
  goto L_803EB198; // 803EB084
L_803EB088:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB088
  W32(c->r[29]+0x00000140u,c->r[0]); // 803EB08C
  goto L_803EB198; // 803EB090
L_803EB094:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB094
  W32(c->r[29]+0x00000144u,c->r[0]); // 803EB098
  goto L_803EB198; // 803EB09C
L_803EB0A0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB0A0
  c->r[3]=c->r[30]|c->r[30]; // 803EB0A4
  c->r[5]=c->r[1]+0x00000018u; // 803EB0A8
  c->r[6]=c->r[29]+0x00000148u; // 803EB0AC
  c->lr=0x803EB0B4u; f_804039BC(c); // 803EB0B0
  goto L_803EB198; // 803EB0B4
L_803EB0B8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB0B8
  W32(c->r[29]+0x00000168u,c->r[0]); // 803EB0BC
  goto L_803EB198; // 803EB0C0
L_803EB0C4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB0C4
  c->r[3]=c->r[30]|c->r[30]; // 803EB0C8
  c->r[5]=c->r[1]+0x00000018u; // 803EB0CC
  c->r[6]=c->r[29]+0x0000016Cu; // 803EB0D0
  c->lr=0x803EB0D8u; f_804039BC(c); // 803EB0D4
  goto L_803EB198; // 803EB0D8
L_803EB0DC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB0DC
  c->r[3]=c->r[30]|c->r[30]; // 803EB0E0
  c->r[5]=c->r[29]+0x0000018Cu; // 803EB0E4
  c->lr=0x803EB0ECu; f_804039AC(c); // 803EB0E8
  goto L_803EB198; // 803EB0EC
L_803EB0F0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB0F0
  W32(c->r[29]+0x00000190u,c->r[0]); // 803EB0F4
  goto L_803EB198; // 803EB0F8
L_803EB0FC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB0FC
  c->r[3]=c->r[30]|c->r[30]; // 803EB100
  c->r[5]=c->r[1]+0x00000018u; // 803EB104
  c->r[6]=c->r[29]+0x00000194u; // 803EB108
  c->lr=0x803EB110u; f_804039BC(c); // 803EB10C
  goto L_803EB198; // 803EB110
L_803EB114:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB114
  c->r[3]=c->r[30]|c->r[30]; // 803EB118
  c->r[5]=c->r[29]+0x000001B4u; // 803EB11C
  c->lr=0x803EB124u; f_804039AC(c); // 803EB120
  goto L_803EB198; // 803EB124
L_803EB128:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB128
  {uint32_t ea=c->r[29]+0x000001B8u; WF32(ea,c->f[0]);} // 803EB12C
  goto L_803EB198; // 803EB130
L_803EB134:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB134
  W32(c->r[29]+0x000001BCu,c->r[0]); // 803EB138
  goto L_803EB198; // 803EB13C
L_803EB140:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EB140
  c->r[0]=R32(c->r[29]+0x00000060u); // 803EB144
  c->r[3]=0u-c->r[4]; // 803EB148
  c->r[3]=c->r[3]|c->r[4]; // 803EB14C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 803EB150
  c->r[0]=c->r[0]|c->r[3]; // 803EB154
  W32(c->r[29]+0x00000060u,c->r[0]); // 803EB158
  goto L_803EB198; // 803EB15C
L_803EB160:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB160
  W32(c->r[29]+0x00000084u,c->r[0]); // 803EB164
  goto L_803EB198; // 803EB168
L_803EB16C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB16C
  W32(c->r[29]+0x00000088u,c->r[0]); // 803EB170
  goto L_803EB198; // 803EB174
L_803EB178:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB178
  W32(c->r[29]+0x0000008Cu,c->r[0]); // 803EB17C
  goto L_803EB198; // 803EB180
L_803EB184:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB184
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[0]);} // 803EB188
  goto L_803EB198; // 803EB18C
L_803EB190:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EB190
  W32(c->r[29]+0x000001C0u,c->r[0]); // 803EB194
L_803EB198:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EB198
  cmps(c,0,(int32_t)c->r[0],6); // 803EB19C
  if (!crb(c,2)) { IRQCHK(c); goto L_803EAFAC; } // 803EB1A0
  c->r[0]=R32(c->r[29]+0x000000B8u); // 803EB1A4
  cmps(c,0,(int32_t)c->r[0],0); // 803EB1A8
  if (!crb(c,2)) { goto L_803EB1B8; } // 803EB1AC
  c->r[0]=0u+0x00000001u; // 803EB1B0
  W32(c->r[29]+0x000000B8u,c->r[0]); // 803EB1B4
L_803EB1B8:;
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803EB1B8
  c->r[3]=0u+0x00000001u; // 803EB1BC
  c->r[30]=R32(c->r[1]+0x00000428u); // 803EB1C0
  c->r[29]=R32(c->r[1]+0x00000424u); // 803EB1C4
  c->r[0]=R32(c->r[1]+0x00000434u); // 803EB1C8
  c->lr=c->r[0]; // 803EB1CC
  c->r[1]=c->r[1]+0x00000430u; // 803EB1D0
  return; // 803EB1D4
}

// fn_803EB1D8
void f_803EB1D8(Ctx* __restrict c) {
  trace_call(0x803EB1D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EB1D8
  c->r[0]=c->lr; // 803EB1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EB1E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EB1E4
  c->r[31]=c->r[4]|c->r[4]; // 803EB1E8
  c->r[4]=0u+0x00000032u; // 803EB1EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EB1F0
  c->r[30]=c->r[3]|c->r[3]; // 803EB1F4
  c->r[3]=c->r[31]|c->r[31]; // 803EB1F8
  c->r[5]=c->r[30]+0x00000098u; // 803EB1FC
  c->lr=0x803EB204u; f_80403D44(c); // 803EB200
  c->r[5]=R32(c->r[30]+0x000000B8u); // 803EB204
  c->r[3]=c->r[31]|c->r[31]; // 803EB208
  c->r[4]=0u+0x00000033u; // 803EB20C
  c->lr=0x803EB214u; f_80403B54(c); // 803EB210
  c->r[5]=R32(c->r[30]+0x000000BCu); // 803EB214
  c->r[3]=c->r[31]|c->r[31]; // 803EB218
  c->r[4]=0u+0x00000034u; // 803EB21C
  c->lr=0x803EB224u; f_80403CA4(c); // 803EB220
  c->r[3]=c->r[31]|c->r[31]; // 803EB224
  c->r[5]=c->r[30]+0x000000C0u; // 803EB228
  c->r[4]=0u+0x00000035u; // 803EB22C
  c->lr=0x803EB234u; f_80403D44(c); // 803EB230
  c->r[3]=c->r[31]|c->r[31]; // 803EB234
  c->r[5]=c->r[30]+0x000000E0u; // 803EB238
  c->r[4]=0u+0x00000036u; // 803EB23C
  c->lr=0x803EB244u; f_80403D44(c); // 803EB240
  c->r[3]=c->r[31]|c->r[31]; // 803EB244
  c->r[5]=c->r[30]+0x00000100u; // 803EB248
  c->r[4]=0u+0x00000037u; // 803EB24C
  c->lr=0x803EB254u; f_80403D44(c); // 803EB250
  c->r[3]=c->r[31]|c->r[31]; // 803EB254
  c->r[5]=c->r[30]+0x00000120u; // 803EB258
  c->r[4]=0u+0x00000038u; // 803EB25C
  c->lr=0x803EB264u; f_80403D44(c); // 803EB260
  c->r[5]=R32(c->r[30]+0x00000140u); // 803EB264
  c->r[3]=c->r[31]|c->r[31]; // 803EB268
  c->r[4]=0u+0x00000039u; // 803EB26C
  c->lr=0x803EB274u; f_80403B54(c); // 803EB270
  c->r[5]=R32(c->r[30]+0x00000144u); // 803EB274
  c->r[3]=c->r[31]|c->r[31]; // 803EB278
  c->r[4]=0u+0x0000003Au; // 803EB27C
  c->lr=0x803EB284u; f_80403B54(c); // 803EB280
  c->r[3]=c->r[31]|c->r[31]; // 803EB284
  c->r[5]=c->r[30]+0x00000148u; // 803EB288
  c->r[4]=0u+0x0000003Bu; // 803EB28C
  c->lr=0x803EB294u; f_80403D44(c); // 803EB290
  c->r[5]=R32(c->r[30]+0x00000168u); // 803EB294
  c->r[3]=c->r[31]|c->r[31]; // 803EB298
  c->r[4]=0u+0x0000003Cu; // 803EB29C
  c->lr=0x803EB2A4u; f_80403B54(c); // 803EB2A0
  c->r[3]=c->r[31]|c->r[31]; // 803EB2A4
  c->r[5]=c->r[30]+0x0000016Cu; // 803EB2A8
  c->r[4]=0u+0x0000003Du; // 803EB2AC
  c->lr=0x803EB2B4u; f_80403D44(c); // 803EB2B0
  c->r[0]=R32(c->r[30]+0x00000060u); // 803EB2B4
  c->r[3]=c->r[31]|c->r[31]; // 803EB2B8
  c->r[4]=0u+0x00000062u; // 803EB2BC
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 803EB2C0
  c->lr=0x803EB2C8u; f_80403B54(c); // 803EB2C4
  c->r[5]=R32(c->r[30]+0x0000018Cu); // 803EB2C8
  c->r[3]=c->r[31]|c->r[31]; // 803EB2CC
  c->r[4]=0u+0x0000003Eu; // 803EB2D0
  c->lr=0x803EB2D8u; f_80403CA4(c); // 803EB2D4
  c->r[5]=R32(c->r[30]+0x00000190u); // 803EB2D8
  c->r[3]=c->r[31]|c->r[31]; // 803EB2DC
  c->r[4]=0u+0x0000003Fu; // 803EB2E0
  c->lr=0x803EB2E8u; f_80403B54(c); // 803EB2E4
  c->r[3]=c->r[31]|c->r[31]; // 803EB2E8
  c->r[5]=c->r[30]+0x00000194u; // 803EB2EC
  c->r[4]=0u+0x00000040u; // 803EB2F0
  c->lr=0x803EB2F8u; f_80403D44(c); // 803EB2F4
  c->r[5]=R32(c->r[30]+0x000001B4u); // 803EB2F8
  c->r[3]=c->r[31]|c->r[31]; // 803EB2FC
  c->r[4]=0u+0x00000041u; // 803EB300
  c->lr=0x803EB308u; f_80403CA4(c); // 803EB304
  {uint32_t ea=c->r[30]+0x000001B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB308
  c->r[3]=c->r[31]|c->r[31]; // 803EB30C
  c->r[4]=0u+0x00000042u; // 803EB310
  c->lr=0x803EB318u; f_80403BC4(c); // 803EB314
  c->r[5]=R32(c->r[30]+0x000001BCu); // 803EB318
  c->r[3]=c->r[31]|c->r[31]; // 803EB31C
  c->r[4]=0u+0x00000043u; // 803EB320
  c->lr=0x803EB328u; f_80403B54(c); // 803EB324
  c->r[5]=R32(c->r[30]+0x00000084u); // 803EB328
  c->r[3]=c->r[31]|c->r[31]; // 803EB32C
  c->r[4]=0u+0x00000044u; // 803EB330
  c->lr=0x803EB338u; f_80403B54(c); // 803EB334
  c->r[5]=R32(c->r[30]+0x00000088u); // 803EB338
  c->r[3]=c->r[31]|c->r[31]; // 803EB33C
  c->r[4]=0u+0x00000045u; // 803EB340
  c->lr=0x803EB348u; f_80403B54(c); // 803EB344
  c->r[5]=R32(c->r[30]+0x0000008Cu); // 803EB348
  c->r[3]=c->r[31]|c->r[31]; // 803EB34C
  c->r[4]=0u+0x00000046u; // 803EB350
  c->lr=0x803EB358u; f_80403B54(c); // 803EB354
  {uint32_t ea=c->r[30]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB358
  c->r[3]=c->r[31]|c->r[31]; // 803EB35C
  c->r[4]=0u+0x00000047u; // 803EB360
  c->lr=0x803EB368u; f_80403BC4(c); // 803EB364
  c->r[5]=R32(c->r[30]+0x000001C0u); // 803EB368
  c->r[3]=c->r[31]|c->r[31]; // 803EB36C
  c->r[4]=0u+0x00000048u; // 803EB370
  c->lr=0x803EB378u; f_80403B54(c); // 803EB374
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EB378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EB37C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EB380
  c->lr=c->r[0]; // 803EB384
  c->r[1]=c->r[1]+0x00000010u; // 803EB388
  return; // 803EB38C
}

// fn_803EB390
void f_803EB390(Ctx* __restrict c) {
  trace_call(0x803EB390u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EB390
  c->r[0]=c->lr; // 803EB394
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[3]=RF64(ea);} // 803EB398
  W32(c->r[1]+0x00000024u,c->r[0]); // 803EB39C
  c->r[0]=0u+0x43300000u; // 803EB3A0
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB3A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803EB3A8
  c->r[31]=c->r[4]|c->r[4]; // 803EB3AC
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB3B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803EB3B4
  c->r[30]=c->r[3]|c->r[3]; // 803EB3B8
  c->r[5]=R32(c->r[3]+0x000000B8u); // 803EB3BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803EB3C0
  c->r[3]=c->r[5]^0x80000000u; // 803EB3C4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803EB3C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803EB3CC
  {uint32_t ea=c->r[4]+0x0000009Cu; WF32(ea,c->f[1]);} // 803EB3D0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 803EB3D4
  {uint32_t ea=c->r[4]+0x00000094u; WF32(ea,c->f[0]);} // 803EB3D8
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[1]);} // 803EB3DC
  {uint32_t ea=c->r[4]+0x00000098u; WF32(ea,c->f[0]);} // 803EB3E0
  c->lr=0x803EB3E8u; f_803A5A68(c); // 803EB3E4
  c->r[5]=0u+0x66660000u; // 803EB3E8
  c->r[4]=0u+0x80570000u; // 803EB3EC
  c->r[0]=c->r[5]+0x00006667u; // 803EB3F0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 803EB3F4
  c->r[4]=c->r[4]+0x000041A8u; // 803EB3F8
  c->r[0]=sraw(c,c->r[0],3); // 803EB3FC
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 803EB400
  c->r[0]=c->r[0]+c->r[5]; // 803EB404
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803EB408
  c->r[3]=c->r[3]-c->r[0]; // 803EB40C
  c->r[0]=c->r[3]+0xFFFFFFECu; // 803EB410
  W16(c->r[31]+0x000000A6u,c->r[0]); // 803EB414
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB418
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 803EB41C
  c->r[0]=R32(c->r[30]+0x000001BCu); // 803EB420
  cmps(c,0,(int32_t)c->r[0],0); // 803EB424
  if (crb(c,2)) { goto L_803EB444; } // 803EB428
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803EB42C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EB430
  c->r[12]=R32(c->r[12]+0x00000088u); // 803EB434
  c->ctr=c->r[12]; // 803EB438
  if (true) { c->lr=0x803EB440u; dispatch(c,c->ctr); } // 803EB43C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 803EB440
L_803EB444:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803EB444
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803EB448
  c->r[30]=R32(c->r[1]+0x00000018u); // 803EB44C
  c->lr=c->r[0]; // 803EB450
  c->r[1]=c->r[1]+0x00000020u; // 803EB454
  return; // 803EB458
}

// fn_803EB45C
void f_803EB45C(Ctx* __restrict c) {
  trace_call(0x803EB45Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE10u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EB45C
  c->r[0]=c->lr; // 803EB460
  W32(c->r[1]+0x000001F4u,c->r[0]); // 803EB464
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[31]);} // 803EB468
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,31,ea,0,0);} // 803EB46C
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[30]);} // 803EB470
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,30,ea,0,0);} // 803EB474
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[29]);} // 803EB478
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,29,ea,0,0);} // 803EB47C
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[28]);} // 803EB480
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,28,ea,0,0);} // 803EB484
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[27]);} // 803EB488
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,27,ea,0,0);} // 803EB48C
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[26]);} // 803EB490
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,26,ea,0,0);} // 803EB494
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[25]);} // 803EB498
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,25,ea,0,0);} // 803EB49C
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[24]);} // 803EB4A0
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,24,ea,0,0);} // 803EB4A4
  c->r[11]=c->r[1]+0x00000170u; // 803EB4A8
  c->lr=0x803EB4B0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803EB4AC
  c->r[0]=R32(c->r[4]+0x00000080u); // 803EB4B0
  c->r[5]=0u+0x43300000u; // 803EB4B4
  W32(c->r[1]+0x00000120u,c->r[5]); // 803EB4B8
  c->r[22]=c->r[3]|c->r[3]; // 803EB4BC
  cmps(c,0,(int32_t)c->r[0],0); // 803EB4C0
  c->r[23]=c->r[4]|c->r[4]; // 803EB4C4
  W32(c->r[1]+0x00000128u,c->r[5]); // 803EB4C8
  c->r[24]=0u+0x00000001u; // 803EB4CC
  if (crb(c,2)) { goto L_803EB53C; } // 803EB4D0
  c->r[3]=R32(c->r[4]+0x0000006Cu); // 803EB4D4
  c->r[24]=0u+0x00000000u; // 803EB4D8
  cmps(c,0,(int32_t)c->r[3],0); // 803EB4DC
  if (crb(c,2)) { goto L_803EB53C; } // 803EB4E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EB4E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803EB4E8
  c->ctr=c->r[12]; // 803EB4EC
  if (true) { c->lr=0x803EB4F4u; dispatch(c,c->ctr); } // 803EB4F0
  cmps(c,0,(int32_t)c->r[3],2); // 803EB4F4
  if (!crb(c,2)) { goto L_803EB53C; } // 803EB4F8
  c->r[3]=R32(c->r[23]+0x0000006Cu); // 803EB4FC
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=RF64(ea);} // 803EB500
  c->r[0]=R32(c->r[3]+0x000000B8u); // 803EB504
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EB508
  c->r[0]=c->r[0]^0x80000000u; // 803EB50C
  W32(c->r[1]+0x00000124u,c->r[0]); // 803EB510
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 803EB514
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EB518
  fcmp(c,0,c->f[2],c->f[0]); // 803EB51C
  if (!crb(c,2)) { goto L_803EB53C; } // 803EB520
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB524
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB528
  fcmp(c,0,c->f[1],c->f[0]); // 803EB52C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803EB530
  if (!crb(c,2)) { goto L_803EB53C; } // 803EB534
  c->r[24]=0u+0x00000001u; // 803EB538
L_803EB53C:;
  cmps(c,0,(int32_t)c->r[24],0); // 803EB53C
  if (!crb(c,2)) { goto L_803EB54C; } // 803EB540
  c->r[3]=0u+0x00000000u; // 803EB544
  goto L_803EBF00; // 803EB548
L_803EB54C:;
  c->r[0]=R32(c->r[22]+0x000000BCu); // 803EB54C
  cmps(c,0,(int32_t)c->r[0],0); // 803EB550
  if (crb(c,2)) { goto L_803EBEFC; } // 803EB554
  c->r[3]=0u+0x80570000u; // 803EB558
  c->r[3]=c->r[3]+0x000041A8u; // 803EB55C
  c->lr=0x803EB564u; f_803E5340(c); // 803EB560
  cmps(c,0,(int32_t)c->r[3],0); // 803EB564
  if (crb(c,2)) { goto L_803EBEFC; } // 803EB568
  c->r[3]=c->r[1]+0x000000E0u; // 803EB56C
  c->r[4]=c->r[23]+0x00000038u; // 803EB570
  c->lr=0x803EB578u; f_803E536C(c); // 803EB574
  c->r[3]=R32(c->r[22]+0x000001B4u); // 803EB578
  cmps(c,0,(int32_t)c->r[3],0); // 803EB57C
  if (crb(c,2)) { goto L_803EB5C0; } // 803EB580
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EB584
  c->r[4]=c->r[23]|c->r[23]; // 803EB588
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB58C
  c->r[12]=R32(c->r[12]+0x00000058u); // 803EB590
  c->ctr=c->r[12]; // 803EB594
  if (true) { c->lr=0x803EB59Cu; dispatch(c,c->ctr); } // 803EB598
  c->r[0]=R32(c->r[22]+0x000001BCu); // 803EB59C
  cmps(c,0,(int32_t)c->r[0],0); // 803EB5A0
  if (crb(c,2)) { goto L_803EB5C0; } // 803EB5A4
  c->lr=0x803EB5ACu; f_803E99C8(c); // 803EB5A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EB5AC
  c->r[12]=R32(c->r[12]+0x00000088u); // 803EB5B0
  c->ctr=c->r[12]; // 803EB5B4
  if (true) { c->lr=0x803EB5BCu; dispatch(c,c->ctr); } // 803EB5B8
  {uint32_t ea=c->r[23]+0x0000003Cu; WF32(ea,c->f[1]);} // 803EB5BC
L_803EB5C0:;
  c->r[0]=R32(c->r[22]+0x000000B8u); // 803EB5C0
  c->r[4]=c->r[23]|c->r[23]; // 803EB5C4
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803EB5C8
  c->r[3]=c->r[22]+0x00000098u; // 803EB5CC
  c->r[0]=c->r[0]^0x80000000u; // 803EB5D0
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 803EB5D4
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB5D8
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 803EB5DC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 803EB5E0
  c->lr=0x803EB5E8u; f_803E8D7C(c); // 803EB5E4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x000000A6u); // 803EB5E8
  c->f[24]=c->f[1]; // 803EB5EC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803EB5F0
  W16(c->r[23]+0x000000A6u,c->r[0]); // 803EB5F4
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[3]); // 803EB5F8
  if (!crb(c,0)) { goto L_803EB640; } // 803EB5FC
  c->r[0]=c->r[3]+0x00000014u; // 803EB600
  c->r[3]=0u+0x80570000u; // 803EB604
  W16(c->r[23]+0x000000A6u,c->r[0]); // 803EB608
  c->r[4]=c->r[23]|c->r[23]; // 803EB60C
  c->r[3]=c->r[3]+0x000041A8u; // 803EB610
  c->lr=0x803EB618u; f_803E8890(c); // 803EB614
  c->lr=0x803EB61Cu; f_803EBF58(c); // 803EB618
  {uint32_t ea=c->r[2]+0xFFFFA808u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EB61C
  {uint32_t ea=c->r[2]+0xFFFFA80Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803EB620
  c->lr=0x803EB628u; f_803EBF98(c); // 803EB624
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EB628
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB62C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803EB630
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EB634
  {uint32_t ea=c->r[23]+0x00000098u; WF32(ea,c->f[0]);} // 803EB638
  {uint32_t ea=c->r[23]+0x00000094u; WF32(ea,c->f[0]);} // 803EB63C
L_803EB640:;
  {uint32_t ea=c->r[23]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EB640
  {uint32_t ea=c->r[22]+0x000001B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB644
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB648
  c->f[2]=c->ps1[2]=S(c->f[24]*c->f[2]); // 803EB64C
  fcmp(c,0,c->f[1],c->f[0]); // 803EB650
  if (!crb(c,1)) { goto L_803EB6F0; } // 803EB654
  c->r[25]=R32(c->r[23]+0x00000068u); // 803EB658
  c->r[3]=c->r[1]+0x000000D0u; // 803EB65C
  c->lr=0x803EB664u; f_803E49FC(c); // 803EB660
  c->r[3]=c->r[25]|c->r[25]; // 803EB664
  c->lr=0x803EB66Cu; f_803E760C(c); // 803EB668
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB66C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB670
  fcmp(c,0,c->f[0],c->f[1]); // 803EB674
  if (!crb(c,2)) { goto L_803EB69C; } // 803EB678
  c->r[3]=c->r[23]+0x00000048u; // 803EB67C
  c->lr=0x803EB684u; f_803E4A34(c); // 803EB680
  {uint32_t ea=c->r[22]+0x000001B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EB684
  {uint32_t ea=c->r[23]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB688
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803EB68C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EB690
  {uint32_t ea=c->r[23]+0x0000009Cu; WF32(ea,c->f[0]);} // 803EB694
  goto L_803EB6FC; // 803EB698
L_803EB69C:;
  c->r[3]=c->r[25]|c->r[25]; // 803EB69C
  c->lr=0x803EB6A4u; f_803E760C(c); // 803EB6A0
  c->r[24]=c->r[3]|c->r[3]; // 803EB6A4
  c->r[3]=c->r[25]|c->r[25]; // 803EB6A8
  c->lr=0x803EB6B0u; f_803E4A24(c); // 803EB6AC
  c->r[4]=c->r[3]|c->r[3]; // 803EB6B0
  c->r[5]=c->r[24]|c->r[24]; // 803EB6B4
  c->r[3]=c->r[1]+0x000000D0u; // 803EB6B8
  c->lr=0x803EB6C0u; f_803E4A00(c); // 803EB6BC
  c->r[3]=c->r[1]+0x000000D0u; // 803EB6C0
  c->lr=0x803EB6C8u; f_803E4A34(c); // 803EB6C4
  c->f[24]=c->f[1]; // 803EB6C8
  c->r[3]=c->r[23]+0x00000048u; // 803EB6CC
  c->lr=0x803EB6D4u; f_803E4A34(c); // 803EB6D0
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[24]); // 803EB6D4
  {uint32_t ea=c->r[22]+0x000001B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB6D8
  {uint32_t ea=c->r[23]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB6DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803EB6E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EB6E4
  {uint32_t ea=c->r[23]+0x0000009Cu; WF32(ea,c->f[0]);} // 803EB6E8
  goto L_803EB6FC; // 803EB6EC
L_803EB6F0:;
  {uint32_t ea=c->r[23]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB6F0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 803EB6F4
  {uint32_t ea=c->r[23]+0x0000009Cu; WF32(ea,c->f[0]);} // 803EB6F8
L_803EB6FC:;
  {uint32_t ea=c->r[23]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB6FC
  c->lr=0x803EB704u; f_803ACB08(c); // 803EB700
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 803EB704
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803EB708
  {uint32_t ea=c->r[23]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EB70C
  c->r[28]=0u+0xFFFFFFFFu; // 803EB710
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[1]);} // 803EB714
  c->r[27]=R32(c->r[1]+0x00000134u); // 803EB718
  c->r[0]=c->r[27]^0x80000000u; // 803EB71C
  W32(c->r[1]+0x00000124u,c->r[0]); // 803EB720
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 803EB724
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803EB728
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EB72C
  {uint32_t ea=c->r[23]+0x0000009Cu; WF32(ea,c->f[0]);} // 803EB730
  c->r[0]=R32(c->r[22]+0x00000190u); // 803EB734
  cmps(c,0,(int32_t)c->r[0],0); // 803EB738
  if (crb(c,2)) { goto L_803EB744; } // 803EB73C
  c->r[28]=c->r[27]|c->r[27]; // 803EB740
L_803EB744:;
  c->r[3]=R32(c->r[22]+0x0000018Cu); // 803EB744
  cmps(c,0,(int32_t)c->r[3],0); // 803EB748
  if (crb(c,2)) { goto L_803EB76C; } // 803EB74C
  cmps(c,0,(int32_t)c->r[0],0); // 803EB750
  if (!crb(c,2)) { goto L_803EB76C; } // 803EB754
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EB758
  c->r[12]=R32(c->r[12]+0x00000068u); // 803EB75C
  c->ctr=c->r[12]; // 803EB760
  if (true) { c->lr=0x803EB768u; dispatch(c,c->ctr); } // 803EB764
  c->r[27]=c->r[3]|c->r[3]; // 803EB768
L_803EB76C:;
  c->r[3]=c->r[1]+0x000000C0u; // 803EB76C
  c->lr=0x803EB774u; f_803E49FC(c); // 803EB770
  c->r[3]=c->r[1]+0x000000C0u; // 803EB774
  c->lr=0x803EB77Cu; f_803EBFC8(c); // 803EB778
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EB77C
  cmps(c,0,(int32_t)c->r[27],1); // 803EB780
  c->f[29]=c->f[30]; // 803EB784
  if (!crb(c,1)) { goto L_803EB860; } // 803EB788
  c->r[0]=R32(c->r[22]+0x00000168u); // 803EB78C
  cmps(c,0,(int32_t)c->r[0],0); // 803EB790
  if (crb(c,2)) { goto L_803EB860; } // 803EB794
  c->r[3]=c->r[1]+0x000000E0u; // 803EB798
  c->r[4]=c->r[23]+0x00000048u; // 803EB79C
  c->lr=0x803EB7A4u; f_803E99D0(c); // 803EB7A0
  c->r[25]=R32(c->r[23]+0x00000068u); // 803EB7A4
  cmps(c,0,(int32_t)c->r[25],0); // 803EB7A8
  if (crb(c,2)) { goto L_803EB80C; } // 803EB7AC
  c->r[3]=c->r[1]+0x000000B0u; // 803EB7B0
  c->lr=0x803EB7B8u; f_803E49FC(c); // 803EB7B4
  c->r[3]=c->r[25]|c->r[25]; // 803EB7B8
  c->lr=0x803EB7C0u; f_803E760C(c); // 803EB7BC
  c->r[24]=c->r[3]|c->r[3]; // 803EB7C0
  c->r[3]=c->r[25]|c->r[25]; // 803EB7C4
  c->lr=0x803EB7CCu; f_803E4A24(c); // 803EB7C8
  c->r[4]=c->r[3]|c->r[3]; // 803EB7CC
  c->r[5]=c->r[24]|c->r[24]; // 803EB7D0
  c->r[3]=c->r[1]+0x000000B0u; // 803EB7D4
  c->lr=0x803EB7DCu; f_803E4A00(c); // 803EB7D8
  c->r[3]=c->r[25]|c->r[25]; // 803EB7DC
  c->lr=0x803EB7E4u; f_803E547C(c); // 803EB7E0
  c->r[4]=c->r[3]|c->r[3]; // 803EB7E4
  c->r[3]=c->r[1]+0x000000F0u; // 803EB7E8
  c->lr=0x803EB7F0u; f_803EBFE4(c); // 803EB7EC
  c->r[3]=c->r[1]+0x000000B0u; // 803EB7F0
  c->r[4]=c->r[1]+0x000000F0u; // 803EB7F4
  c->r[5]=c->r[3]|c->r[3]; // 803EB7F8
  c->lr=0x803EB800u; f_803E541C(c); // 803EB7FC
  c->r[3]=c->r[1]+0x000000E0u; // 803EB800
  c->r[4]=c->r[1]+0x000000B0u; // 803EB804
  c->lr=0x803EB80Cu; f_803E99D0(c); // 803EB808
L_803EB80C:;
  c->r[3]=c->r[1]+0x000000C0u; // 803EB80C
  c->r[4]=c->r[23]+0x00000038u; // 803EB810
  c->r[5]=c->r[1]+0x000000E0u; // 803EB814
  c->lr=0x803EB81Cu; f_803E4A00(c); // 803EB818
  c->r[0]=c->r[27]^0x80000000u; // 803EB81C
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 803EB820
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=RF64(ea);} // 803EB824
  c->r[3]=c->r[1]+0x000000C0u; // 803EB828
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 803EB82C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803EB830
  c->lr=0x803EB838u; f_803E5484(c); // 803EB834
  c->r[3]=c->r[23]+0x00000038u; // 803EB838
  c->r[4]=c->r[1]+0x000000E0u; // 803EB83C
  c->lr=0x803EB844u; f_803E53A0(c); // 803EB840
  c->r[0]=c->r[27]^0x80000000u; // 803EB844
  W32(c->r[1]+0x00000124u,c->r[0]); // 803EB848
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[1]=RF64(ea);} // 803EB84C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 803EB850
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EB854
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EB858
  c->f[29]=c->ps1[29]=S(c->f[30]/c->f[0]); // 803EB85C
L_803EB860:;
  cmps(c,0,(int32_t)c->r[27],0); // 803EB860
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EB864
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[27]=c->ps1[27]=RF32(ea);} // 803EB868
  if (crb(c,2)) { goto L_803EB890; } // 803EB86C
  c->r[0]=R32(c->r[22]+0x00000144u); // 803EB870
  cmps(c,0,(int32_t)c->r[0],0); // 803EB874
  if (!crb(c,2)) { goto L_803EB890; } // 803EB878
  c->f[1]=c->f[28]; // 803EB87C
  c->r[4]=c->r[23]|c->r[23]; // 803EB880
  c->r[3]=c->r[22]+0x0000016Cu; // 803EB884
  c->lr=0x803EB88Cu; f_803E3900(c); // 803EB888
  c->f[28]=c->f[1]; // 803EB88C
L_803EB890:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EB890
  c->r[26]=0u+0x00000000u; // 803EB894
  {uint32_t ea=c->r[2]+0xFFFFA814u; c->f[26]=c->ps1[26]=RF32(ea);} // 803EB898
  c->r[29]=0u+0x80570000u; // 803EB89C
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[25]=RF64(ea);} // 803EB8A0
  c->r[30]=0u+0x80570000u; // 803EB8A4
  c->r[31]=0u+0x00000000u; // 803EB8A8
  goto L_803EBEF4; // 803EB8AC
L_803EB8B0:;
  c->r[3]=c->r[23]+0x00000038u; // 803EB8B0
  c->r[4]=c->r[1]+0x000000C0u; // 803EB8B4
  c->lr=0x803EB8BCu; f_803E52F8(c); // 803EB8B8
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[29]); // 803EB8BC
  c->r[25]=R32(c->r[22]+0x000000BCu); // 803EB8C0
  goto L_803EB8E0; // 803EB8C4
L_803EB8C8:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 803EB8C8
  c->r[3]=c->r[25]|c->r[25]; // 803EB8CC
  c->r[12]=R32(c->r[12]+0x00000064u); // 803EB8D0
  c->ctr=c->r[12]; // 803EB8D4
  if (true) { c->lr=0x803EB8DCu; dispatch(c,c->ctr); } // 803EB8D8
  c->r[25]=c->r[3]|c->r[3]; // 803EB8DC
L_803EB8E0:;
  cmps(c,0,(int32_t)c->r[25],0); // 803EB8E0
  if (crb(c,2)) { goto L_803EB904; } // 803EB8E4
  c->r[12]=R32(c->r[25]+0x00000000u); // 803EB8E8
  c->r[3]=c->r[25]|c->r[25]; // 803EB8EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803EB8F0
  c->ctr=c->r[12]; // 803EB8F4
  if (true) { c->lr=0x803EB8FCu; dispatch(c,c->ctr); } // 803EB8F8
  cmps(c,0,(int32_t)c->r[3],4); // 803EB8FC
  if (crb(c,2)) { IRQCHK(c); goto L_803EB8C8; } // 803EB900
L_803EB904:;
  c->r[3]=c->r[1]+0x000000A0u; // 803EB904
  c->r[4]=c->r[29]+0x000040B8u; // 803EB908
  c->lr=0x803EB910u; f_803EBFE8(c); // 803EB90C
  c->r[3]=R32(c->r[23]+0x00000068u); // 803EB910
  cmps(c,0,(int32_t)c->r[3],0); // 803EB914
  if (crb(c,2)) { goto L_803EB92C; } // 803EB918
  c->lr=0x803EB920u; f_803E4A24(c); // 803EB91C
  c->r[4]=c->r[3]|c->r[3]; // 803EB920
  c->r[3]=c->r[1]+0x000000A0u; // 803EB924
  c->lr=0x803EB92Cu; f_803E53A0(c); // 803EB928
L_803EB92C:;
  cmps(c,0,(int32_t)c->r[25],0); // 803EB92C
  if (crb(c,2)) { goto L_803EB980; } // 803EB930
  c->r[0]=R32(c->r[25]+0x0000006Cu); // 803EB934
  cmps(c,0,(int32_t)c->r[0],1); // 803EB938
  if (!crb(c,2)) { goto L_803EB980; } // 803EB93C
  c->r[3]=R32(c->r[23]+0x00000068u); // 803EB940
  cmps(c,0,(int32_t)c->r[3],0); // 803EB944
  if (crb(c,2)) { goto L_803EB980; } // 803EB948
  c->lr=0x803EB950u; f_803E4A24(c); // 803EB94C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[24]=c->ps1[24]=RF32(ea);} // 803EB950
  c->r[3]=R32(c->r[23]+0x00000068u); // 803EB954
  c->lr=0x803EB95Cu; f_803E4A24(c); // 803EB958
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EB95C
  c->f[3]=c->f[24]; // 803EB960
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EB964
  c->r[3]=c->r[1]+0x00000090u; // 803EB968
  c->f[4]=c->f[2]; // 803EB96C
  c->lr=0x803EB974u; f_803E54F4(c); // 803EB970
  c->r[3]=R32(c->r[23]+0x00000068u); // 803EB974
  c->r[4]=c->r[1]+0x00000090u; // 803EB978
  c->lr=0x803EB980u; f_803E53B4(c); // 803EB97C
L_803EB980:;
  c->r[3]=R32(c->r[23]+0x00000068u); // 803EB980
  c->r[24]=0u+0x00000000u; // 803EB984
  cmps(c,0,(int32_t)c->r[3],0); // 803EB988
  if (crb(c,2)) { goto L_803EB9A8; } // 803EB98C
  c->lr=0x803EB994u; f_803E5D4C(c); // 803EB990
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 803EB994
  c->r[0]=c->r[0]|0x00000001u; // 803EB998
  cmps(c,0,(int32_t)c->r[0],0); // 803EB99C
  if (crb(c,2)) { goto L_803EB9A8; } // 803EB9A0
  c->r[24]=0u+0x00000001u; // 803EB9A4
L_803EB9A8:;
  c->r[7]=R32(c->r[23]+0x00000120u); // 803EB9A8
  c->r[4]=c->r[25]|c->r[25]; // 803EB9AC
  c->r[5]=c->r[24]|c->r[24]; // 803EB9B0
  c->r[6]=c->r[23]|c->r[23]; // 803EB9B4
  c->r[3]=c->r[30]+0x000041A8u; // 803EB9B8
  c->lr=0x803EB9C0u; f_803FCA34(c); // 803EB9BC
  cmps(c,0,(int32_t)c->r[3],0); // 803EB9C0
  c->r[24]=c->r[3]|c->r[3]; // 803EB9C4
  if (crb(c,2)) { goto L_803EBEF0; } // 803EB9C8
  c->r[3]=R32(c->r[22]+0x0000018Cu); // 803EB9CC
  cmps(c,0,(int32_t)c->r[3],0); // 803EB9D0
  if (crb(c,2)) { goto L_803EBA44; } // 803EB9D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EB9D8
  c->f[1]=c->f[27]; // 803EB9DC
  c->r[4]=c->r[24]|c->r[24]; // 803EB9E0
  c->r[5]=c->r[26]|c->r[26]; // 803EB9E4
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803EB9E8
  c->r[6]=c->r[28]|c->r[28]; // 803EB9EC
  c->ctr=c->r[12]; // 803EB9F0
  if (true) { c->lr=0x803EB9F8u; dispatch(c,c->ctr); } // 803EB9F4
  c->f[1]=c->f[27]; // 803EB9F8
  c->r[4]=c->r[23]|c->r[23]; // 803EB9FC
  c->r[3]=c->r[22]+0x00000194u; // 803EBA00
  c->lr=0x803EBA08u; f_803E3900(c); // 803EBA04
  fcmp(c,0,c->f[31],c->f[1]); // 803EBA08
  c->f[24]=c->f[1]; // 803EBA0C
  if (crb(c,2)) { goto L_803EBA44; } // 803EBA10
  c->r[3]=c->r[1]+0x00000080u; // 803EBA14
  c->lr=0x803EBA1Cu; f_803E49FC(c); // 803EBA18
  c->r[3]=c->r[1]+0x00000080u; // 803EBA1C
  c->r[4]=c->r[23]+0x00000008u; // 803EBA20
  c->r[5]=c->r[24]+0x00000038u; // 803EBA24
  c->lr=0x803EBA2Cu; f_803E541C(c); // 803EBA28
  c->f[1]=c->f[24]; // 803EBA2C
  c->r[3]=c->r[1]+0x00000080u; // 803EBA30
  c->lr=0x803EBA38u; f_803E7614(c); // 803EBA34
  c->r[3]=c->r[24]+0x00000048u; // 803EBA38
  c->r[4]=c->r[1]+0x00000080u; // 803EBA3C
  c->lr=0x803EBA44u; f_803E52F8(c); // 803EBA40
L_803EBA44:;
  c->r[3]=R32(c->r[24]+0x0000006Cu); // 803EBA44
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EBA48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803EBA4C
  c->ctr=c->r[12]; // 803EBA50
  if (true) { c->lr=0x803EBA58u; dispatch(c,c->ctr); } // 803EBA54
  cmps(c,0,(int32_t)c->r[3],1); // 803EBA58
  if (!crb(c,2)) { goto L_803EBA80; } // 803EBA5C
  c->r[3]=R32(c->r[24]+0x0000006Cu); // 803EBA60
  c->r[0]=R32(c->r[3]+0x00000190u); // 803EBA64
  cmps(c,0,(int32_t)c->r[0],7); // 803EBA68
  if (crb(c,2)) { goto L_803EBA8C; } // 803EBA6C
  c->r[3]=c->r[24]+0x00000008u; // 803EBA70
  c->r[4]=c->r[23]+0x00000008u; // 803EBA74
  c->lr=0x803EBA7Cu; f_803EC00C(c); // 803EBA78
  goto L_803EBA8C; // 803EBA7C
L_803EBA80:;
  c->r[3]=c->r[24]+0x00000008u; // 803EBA80
  c->r[4]=c->r[23]+0x00000008u; // 803EBA84
  c->lr=0x803EBA8Cu; f_803EC00C(c); // 803EBA88
L_803EBA8C:;
  c->r[3]=c->r[24]+0x00000038u; // 803EBA8C
  c->r[4]=c->r[23]+0x00000008u; // 803EBA90
  c->r[5]=c->r[3]|c->r[3]; // 803EBA94
  c->lr=0x803EBA9Cu; f_803E541C(c); // 803EBA98
  c->r[3]=R32(c->r[22]+0x000001B4u); // 803EBA9C
  cmps(c,0,(int32_t)c->r[3],0); // 803EBAA0
  if (crb(c,2)) { goto L_803EBAC0; } // 803EBAA4
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 803EBAA8
  cmps(c,0,(int32_t)c->r[0],0); // 803EBAAC
  if (crb(c,2)) { goto L_803EBAC0; } // 803EBAB0
  c->r[3]=c->r[24]+0x00000038u; // 803EBAB4
  c->r[4]=c->r[23]+0x00000038u; // 803EBAB8
  c->lr=0x803EBAC0u; f_803E52F8(c); // 803EBABC
L_803EBAC0:;
  c->r[3]=c->r[1]+0x00000070u; // 803EBAC0
  c->r[4]=c->r[29]+0x000040B8u; // 803EBAC4
  c->lr=0x803EBACCu; f_803EBFE8(c); // 803EBAC8
  c->r[3]=c->r[1]+0x00000070u; // 803EBACC
  c->r[5]=c->r[24]+0x00000038u; // 803EBAD0
  c->r[4]=c->r[3]|c->r[3]; // 803EBAD4
  c->lr=0x803EBADCu; f_803E531C(c); // 803EBAD8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 803EBADC
  c->r[3]=c->r[1]+0x00000060u; // 803EBAE0
  c->r[4]=c->r[29]+0x000040B8u; // 803EBAE4
  c->lr=0x803EBAECu; f_803E99A4(c); // 803EBAE8
  W32(c->r[1]+0x00000008u,c->r[31]); // 803EBAEC
  c->r[3]=R32(c->r[23]+0x00000068u); // 803EBAF0
  c->r[21]=R32(c->r[23]+0x0000006Cu); // 803EBAF4
  cmps(c,0,(int32_t)c->r[3],0); // 803EBAF8
  if (crb(c,2)) { goto L_803EBB24; } // 803EBAFC
  c->r[4]=R32(c->r[24]+0x0000006Cu); // 803EBB00
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 803EBB04
  cmps(c,0,(int32_t)c->r[0],1); // 803EBB08
  if (!crb(c,2)) { goto L_803EBB24; } // 803EBB0C
  c->lr=0x803EBB14u; f_803E4A24(c); // 803EBB10
  c->r[5]=c->r[3]|c->r[3]; // 803EBB14
  c->r[3]=c->r[1]+0x00000070u; // 803EBB18
  c->r[4]=c->r[3]|c->r[3]; // 803EBB1C
  c->lr=0x803EBB24u; f_803E531C(c); // 803EBB20
L_803EBB24:;
  c->r[0]=R32(c->r[21]+0x000001C0u); // 803EBB24
  cmps(c,0,(int32_t)c->r[0],0); // 803EBB28
  if (crb(c,2)) { goto L_803EBB50; } // 803EBB2C
  c->r[3]=c->r[1]+0x00000070u; // 803EBB30
  c->r[5]=R32(c->r[23]+0x00000068u); // 803EBB34
  c->r[4]=c->r[3]|c->r[3]; // 803EBB38
  c->lr=0x803EBB40u; f_803E531C(c); // 803EBB3C
  c->r[3]=c->r[24]+0x00000038u; // 803EBB40
  c->r[5]=R32(c->r[23]+0x00000068u); // 803EBB44
  c->r[4]=c->r[3]|c->r[3]; // 803EBB48
  c->lr=0x803EBB50u; f_803E531C(c); // 803EBB4C
L_803EBB50:;
  c->lr=0x803EBB54u; f_803E99C8(c); // 803EBB50
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EBB54
  c->r[4]=c->r[1]+0x0000000Cu; // 803EBB58
  c->r[7]=R32(c->r[24]+0x0000006Cu); // 803EBB5C
  c->r[5]=c->r[1]+0x00000060u; // 803EBB60
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803EBB64
  c->r[6]=c->r[1]+0x00000008u; // 803EBB68
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EBB6C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EBB70
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803EBB74
  c->ctr=c->r[12]; // 803EBB78
  if (true) { c->lr=0x803EBB80u; dispatch(c,c->ctr); } // 803EBB7C
  c->r[3]=R32(c->r[24]+0x0000006Cu); // 803EBB80
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 803EBB84
  cmps(c,0,(int32_t)c->r[0],0); // 803EBB88
  if (crb(c,2)) { goto L_803EBBF8; } // 803EBB8C
  c->r[0]=R32(c->r[3]+0x00000074u); // 803EBB90
  cmps(c,0,(int32_t)c->r[0],0); // 803EBB94
  if (crb(c,2)) { goto L_803EBBB0; } // 803EBB98
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EBB9C
  {uint32_t ea=c->r[3]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBBA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803EBBA4
  {uint32_t ea=c->r[24]+0x0000003Cu; WF32(ea,c->f[0]);} // 803EBBA8
  goto L_803EBBF8; // 803EBBAC
L_803EBBB0:;
  c->r[0]=R32(c->r[3]+0x00000078u); // 803EBBB0
  cmps(c,0,(int32_t)c->r[0],0); // 803EBBB4
  if (crb(c,2)) { goto L_803EBBF8; } // 803EBBB8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBBBC
  c->r[3]=c->r[1]+0x00000050u; // 803EBBC0
  {uint32_t ea=c->r[24]+0x0000003Cu; WF32(ea,c->f[0]);} // 803EBBC4
  c->lr=0x803EBBCCu; f_803E49FC(c); // 803EBBC8
  c->r[3]=c->r[1]+0x00000010u; // 803EBBCC
  c->r[4]=c->r[1]+0x00000060u; // 803EBBD0
  c->lr=0x803EBBD8u; f_803EBFE8(c); // 803EBBD4
  c->r[5]=R32(c->r[24]+0x0000006Cu); // 803EBBD8
  c->r[4]=c->r[3]|c->r[3]; // 803EBBDC
  c->r[3]=c->r[1]+0x00000050u; // 803EBBE0
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EBBE4
  c->lr=0x803EBBECu; f_803E52DC(c); // 803EBBE8
  c->r[3]=c->r[24]+0x00000038u; // 803EBBEC
  c->r[4]=c->r[1]+0x00000050u; // 803EBBF0
  c->lr=0x803EBBF8u; f_803E52F8(c); // 803EBBF4
L_803EBBF8:;
  c->r[3]=c->r[24]|c->r[24]; // 803EBBF8
  c->lr=0x803EBC00u; f_803EC040(c); // 803EBBFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EBC00
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803EBC04
  c->ctr=c->r[12]; // 803EBC08
  if (true) { c->lr=0x803EBC10u; dispatch(c,c->ctr); } // 803EBC0C
  cmps(c,0,(int32_t)c->r[3],1); // 803EBC10
  if (!crb(c,2)) { goto L_803EBC28; } // 803EBC14
  c->r[3]=c->r[24]|c->r[24]; // 803EBC18
  c->lr=0x803EBC20u; f_803EC040(c); // 803EBC1C
  c->r[4]=c->r[24]|c->r[24]; // 803EBC20
  c->lr=0x803EBC28u; f_803EC150(c); // 803EBC24
L_803EBC28:;
  c->r[4]=R32(c->r[24]+0x00000078u); // 803EBC28
  cmps(c,0,(int32_t)c->r[4],0); // 803EBC2C
  if (crb(c,2)) { goto L_803EBC98; } // 803EBC30
  c->r[3]=R32(c->r[4]+0x0000006Cu); // 803EBC34
  c->r[0]=R32(c->r[3]+0x00000084u); // 803EBC38
  cmps(c,0,(int32_t)c->r[0],0); // 803EBC3C
  if (crb(c,2)) { goto L_803EBC80; } // 803EBC40
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 803EBC44
  W32(c->r[24]+0x0000011Cu,c->r[0]); // 803EBC48
  c->r[4]=R32(c->r[24]+0x00000078u); // 803EBC4C
  c->r[3]=R32(c->r[4]+0x0000006Cu); // 803EBC50
  c->r[0]=R32(c->r[3]+0x00000084u); // 803EBC54
  cmps(c,0,(int32_t)c->r[0],1); // 803EBC58
  if (!crb(c,2)) { goto L_803EBC6C; } // 803EBC5C
  c->r[0]=R32(c->r[4]+0x00000114u); // 803EBC60
  W32(c->r[24]+0x00000114u,c->r[0]); // 803EBC64
  goto L_803EBCAC; // 803EBC68
L_803EBC6C:;
  cmps(c,0,(int32_t)c->r[0],2); // 803EBC6C
  if (!crb(c,2)) { goto L_803EBCAC; } // 803EBC70
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EBC74
  W32(c->r[24]+0x00000114u,c->r[0]); // 803EBC78
  goto L_803EBCAC; // 803EBC7C
L_803EBC80:;
  c->r[3]=R32(c->r[24]+0x0000006Cu); // 803EBC80
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 803EBC84
  W32(c->r[24]+0x0000011Cu,c->r[0]); // 803EBC88
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EBC8C
  W32(c->r[24]+0x00000114u,c->r[0]); // 803EBC90
  goto L_803EBCAC; // 803EBC94
L_803EBC98:;
  c->r[3]=R32(c->r[24]+0x0000006Cu); // 803EBC98
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 803EBC9C
  W32(c->r[24]+0x0000011Cu,c->r[0]); // 803EBCA0
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EBCA4
  W32(c->r[24]+0x00000114u,c->r[0]); // 803EBCA8
L_803EBCAC:;
  c->r[3]=c->r[1]+0x00000040u; // 803EBCAC
  c->lr=0x803EBCB4u; f_803E49FC(c); // 803EBCB0
  c->f[1]=c->f[27]; // 803EBCB4
  c->r[4]=c->r[23]|c->r[23]; // 803EBCB8
  c->r[3]=c->r[22]+0x000000C0u; // 803EBCBC
  c->lr=0x803EBCC4u; f_803E3900(c); // 803EBCC0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803EBCC4
  c->f[1]=c->f[27]; // 803EBCC8
  c->r[4]=c->r[23]|c->r[23]; // 803EBCCC
  c->r[3]=c->r[22]+0x000000E0u; // 803EBCD0
  c->lr=0x803EBCD8u; f_803E3900(c); // 803EBCD4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 803EBCD8
  c->f[1]=c->f[27]; // 803EBCDC
  c->r[4]=c->r[23]|c->r[23]; // 803EBCE0
  c->r[3]=c->r[22]+0x00000100u; // 803EBCE4
  c->lr=0x803EBCECu; f_803E3900(c); // 803EBCE8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 803EBCEC
  c->f[1]=c->f[27]; // 803EBCF0
  c->r[4]=c->r[23]|c->r[23]; // 803EBCF4
  c->r[3]=c->r[22]+0x00000120u; // 803EBCF8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 803EBCFC
  c->lr=0x803EBD04u; f_803E3900(c); // 803EBD00
  c->f[24]=c->f[1]; // 803EBD04
  c->lr=0x803EBD0Cu; f_803E5C88(c); // 803EBD08
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EBD0C
  {uint32_t ea=c->r[24]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBD10
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 803EBD14
  c->f[1]=c->f[24]; // 803EBD18
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 803EBD1C
  {uint32_t ea=c->r[24]+0x00000048u; WF32(ea,c->f[0]);} // 803EBD20
  c->lr=0x803EBD28u; f_803E5C88(c); // 803EBD24
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EBD28
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBD2C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 803EBD30
  c->f[1]=c->f[24]; // 803EBD34
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 803EBD38
  {uint32_t ea=c->r[24]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EBD3C
  c->lr=0x803EBD44u; f_803E5C88(c); // 803EBD40
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EBD44
  {uint32_t ea=c->r[24]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBD48
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803EBD4C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EBD50
  {uint32_t ea=c->r[24]+0x00000050u; WF32(ea,c->f[0]);} // 803EBD54
  {uint32_t ea=c->r[24]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EBD58
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBD5C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803EBD60
  {uint32_t ea=c->r[24]+0x00000054u; WF32(ea,c->f[0]);} // 803EBD64
  c->r[0]=R32(c->r[22]+0x00000140u); // 803EBD68
  cmps(c,0,(int32_t)c->r[0],0); // 803EBD6C
  if (crb(c,2)) { goto L_803EBDAC; } // 803EBD70
  c->r[0]=R32(c->r[22]+0x000000B8u); // 803EBD74
  {uint32_t ea=c->r[24]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803EBD78
  c->r[0]=c->r[0]^0x80000000u; // 803EBD7C
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 803EBD80
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EBD84
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 803EBD88
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803EBD8C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[25]); // 803EBD90
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 803EBD94
  {uint32_t ea=c->r[24]+0x0000007Cu; WF32(ea,c->f[0]);} // 803EBD98
  fcmp(c,0,c->f[0],c->f[31]); // 803EBD9C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803EBDA0
  if (!crb(c,2)) { goto L_803EBDAC; } // 803EBDA4
  {uint32_t ea=c->r[24]+0x0000007Cu; WF32(ea,c->f[26]);} // 803EBDA8
L_803EBDAC:;
  c->f[1]=c->f[27]; // 803EBDAC
  c->r[4]=c->r[23]|c->r[23]; // 803EBDB0
  c->r[3]=c->r[22]+0x00000148u; // 803EBDB4
  c->lr=0x803EBDBCu; f_803E3900(c); // 803EBDB8
  fcmp(c,0,c->f[31],c->f[1]); // 803EBDBC
  c->f[24]=c->f[1]; // 803EBDC0
  if (crb(c,2)) { goto L_803EBDEC; } // 803EBDC4
  c->r[3]=c->r[1]+0x00000030u; // 803EBDC8
  c->lr=0x803EBDD0u; f_803E49FC(c); // 803EBDCC
  c->f[1]=c->f[24]; // 803EBDD0
  c->r[3]=c->r[1]+0x00000030u; // 803EBDD4
  c->r[4]=c->r[23]+0x00000048u; // 803EBDD8
  c->lr=0x803EBDE0u; f_803E52DC(c); // 803EBDDC
  c->r[3]=c->r[24]+0x00000048u; // 803EBDE0
  c->r[4]=c->r[1]+0x00000030u; // 803EBDE4
  c->lr=0x803EBDECu; f_803E52F8(c); // 803EBDE8
L_803EBDEC:;
  c->f[1]=c->f[28]; // 803EBDEC
  {uint32_t ea=c->r[24]+0x0000003Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 803EBDF0
  c->r[5]=R32(c->r[23]+0x00000068u); // 803EBDF4
  c->r[3]=c->r[22]|c->r[22]; // 803EBDF8
  c->r[6]=R32(c->r[22]+0x00000144u); // 803EBDFC
  c->r[4]=c->r[24]|c->r[24]; // 803EBE00
  c->lr=0x803EBE08u; f_803E7448(c); // 803EBE04
  c->r[3]=R32(c->r[24]+0x0000006Cu); // 803EBE08
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 803EBE0C
  cmps(c,0,(int32_t)c->r[0],1); // 803EBE10
  if (!crb(c,2)) { goto L_803EBE1C; } // 803EBE14
  {uint32_t ea=c->r[24]+0x0000003Cu; WF32(ea,c->f[24]);} // 803EBE18
L_803EBE1C:;
  c->r[4]=c->r[24]|c->r[24]; // 803EBE1C
  c->r[3]=c->r[30]+0x000041A8u; // 803EBE20
  c->lr=0x803EBE28u; f_803FD4F8(c); // 803EBE24
  c->r[0]=R32(c->r[25]+0x0000006Cu); // 803EBE28
  cmps(c,0,(int32_t)c->r[0],1); // 803EBE2C
  if (!crb(c,2)) { goto L_803EBE48; } // 803EBE30
  c->r[3]=R32(c->r[23]+0x00000068u); // 803EBE34
  cmps(c,0,(int32_t)c->r[3],0); // 803EBE38
  if (crb(c,2)) { goto L_803EBE48; } // 803EBE3C
  c->r[4]=c->r[1]+0x000000A0u; // 803EBE40
  c->lr=0x803EBE48u; f_803E53B4(c); // 803EBE44
L_803EBE48:;
  c->r[0]=R32(c->r[22]+0x000001BCu); // 803EBE48
  cmps(c,0,(int32_t)c->r[0],0); // 803EBE4C
  if (crb(c,2)) { goto L_803EBE6C; } // 803EBE50
  c->lr=0x803EBE58u; f_803E99C8(c); // 803EBE54
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EBE58
  c->r[12]=R32(c->r[12]+0x00000088u); // 803EBE5C
  c->ctr=c->r[12]; // 803EBE60
  if (true) { c->lr=0x803EBE68u; dispatch(c,c->ctr); } // 803EBE64
  {uint32_t ea=c->r[24]+0x0000003Cu; WF32(ea,c->f[1]);} // 803EBE68
L_803EBE6C:;
  c->r[3]=R32(c->r[24]+0x0000006Cu); // 803EBE6C
  c->r[4]=c->r[24]|c->r[24]; // 803EBE70
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EBE74
  c->r[12]=R32(c->r[12]+0x00000060u); // 803EBE78
  c->ctr=c->r[12]; // 803EBE7C
  if (true) { c->lr=0x803EBE84u; dispatch(c,c->ctr); } // 803EBE80
  c->r[0]=R32(c->r[22]+0x00000168u); // 803EBE84
  cmps(c,0,(int32_t)c->r[0],0); // 803EBE88
  if (crb(c,2)) { goto L_803EBEF0; } // 803EBE8C
  c->r[3]=c->r[1]+0x00000020u; // 803EBE90
  c->lr=0x803EBE98u; f_803E49FC(c); // 803EBE94
  c->r[3]=c->r[30]+0x000041A8u; // 803EBE98
  c->lr=0x803EBEA0u; f_803E52D4(c); // 803EBE9C
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 803EBEA0
  c->r[3]=c->r[1]+0x00000020u; // 803EBEA4
  c->r[4]=c->r[24]+0x00000048u; // 803EBEA8
  c->lr=0x803EBEB0u; f_803E52DC(c); // 803EBEAC
  c->r[3]=c->r[24]+0x00000038u; // 803EBEB0
  c->r[4]=c->r[1]+0x00000020u; // 803EBEB4
  c->lr=0x803EBEBCu; f_803E52F8(c); // 803EBEB8
  c->r[12]=R32(c->r[25]+0x00000000u); // 803EBEBC
  c->r[3]=c->r[25]|c->r[25]; // 803EBEC0
  c->r[4]=c->r[24]|c->r[24]; // 803EBEC4
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 803EBEC8
  c->ctr=c->r[12]; // 803EBECC
  if (true) { c->lr=0x803EBED4u; dispatch(c,c->ctr); } // 803EBED0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 803EBED4
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBED8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EBEDC
  {uint32_t ea=c->r[24]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EBEE0
  {uint32_t ea=c->r[24]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBEE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 803EBEE8
  {uint32_t ea=c->r[24]+0x0000007Cu; WF32(ea,c->f[0]);} // 803EBEEC
L_803EBEF0:;
  c->r[26]=c->r[26]+0x00000001u; // 803EBEF0
L_803EBEF4:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 803EBEF4
  if (crb(c,0)) { IRQCHK(c); goto L_803EB8B0; } // 803EBEF8
L_803EBEFC:;
  c->r[3]=0u+0x00000000u; // 803EBEFC
L_803EBF00:;
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,31,ea,0,0);} // 803EBF00
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[31]=RF64(ea);} // 803EBF04
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,30,ea,0,0);} // 803EBF08
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[30]=RF64(ea);} // 803EBF0C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,29,ea,0,0);} // 803EBF10
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[29]=RF64(ea);} // 803EBF14
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,28,ea,0,0);} // 803EBF18
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[28]=RF64(ea);} // 803EBF1C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,27,ea,0,0);} // 803EBF20
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[27]=RF64(ea);} // 803EBF24
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,26,ea,0,0);} // 803EBF28
  {uint32_t ea=c->r[1]+0x00000190u; c->f[26]=RF64(ea);} // 803EBF2C
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,25,ea,0,0);} // 803EBF30
  {uint32_t ea=c->r[1]+0x00000180u; c->f[25]=RF64(ea);} // 803EBF34
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,24,ea,0,0);} // 803EBF38
  c->r[11]=c->r[1]+0x00000170u; // 803EBF3C
  {uint32_t ea=c->r[1]+0x00000170u; c->f[24]=RF64(ea);} // 803EBF40
  c->lr=0x803EBF48u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803EBF44
  c->r[0]=R32(c->r[1]+0x000001F4u); // 803EBF48
  c->lr=c->r[0]; // 803EBF4C
  c->r[1]=c->r[1]+0x000001F0u; // 803EBF50
  return; // 803EBF54
}

// fn_803EBF58
void f_803EBF58(Ctx* __restrict c) {
  trace_call(0x803EBF58u);
  {uint32_t ea=c->r[2]+0xFFFFA81Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBF58
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803EBF5C
  fcmp(c,0,c->f[1],c->f[0]); // 803EBF60
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBF64
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803EBF68
  if (!crb(c,2)) { goto L_803EBF78; } // 803EBF6C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EBF70
  return; // 803EBF74
L_803EBF78:;
  c->f[4]=frsqrte(c->f[1]); // 803EBF78
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 803EBF7C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 803EBF80
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[3],c->f[1],-c->f[0])); // 803EBF84
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[2]); // 803EBF88
  c->f[4]=(c->f[4]>=0.0)?c->f[4]:c->f[1]; // 803EBF8C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 803EBF90
  return; // 803EBF94
}

// fn_803EBF98
void f_803EBF98(Ctx* __restrict c) {
  trace_call(0x803EBF98u);
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803EBF98
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBF9C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 803EBFA0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803EBFA4
  fcmp(c,0,c->f[1],c->f[0]); // 803EBFA8
  if (!crb(c,0)) { goto L_803EBFB4; } // 803EBFAC
  c->f[1]=c->f[0]; // 803EBFB0
L_803EBFB4:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBFB4
  fcmp(c,0,c->f[1],c->f[0]); // 803EBFB8
  if (!crb(c,1)) return; // 803EBFBC
  c->f[1]=c->f[0]; // 803EBFC0
  return; // 803EBFC4
}

// fn_803EBFC8
void f_803EBFC8(Ctx* __restrict c) {
  trace_call(0x803EBFC8u);
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBFC8
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 803EBFCC
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803EBFD0
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803EBFD4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803EBFD8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 803EBFDC
  return; // 803EBFE0
}

// fn_803EBFE4
void f_803EBFE4(Ctx* __restrict c) {
  trace_call(0x803EBFE4u);
  f_803E3408(c); return; // 803EBFE4
}

// fn_803EBFE8
void f_803EBFE8(Ctx* __restrict c) {
  trace_call(0x803EBFE8u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EBFE8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EBFEC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EBFF0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EBFF4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 803EBFF8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 803EBFFC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803EC000
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803EC004
  return; // 803EC008
}

// fn_803EC00C
void f_803EC00C(Ctx* __restrict c) {
  trace_call(0x803EC00Cu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EC00C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 803EC010
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,3,ea,0,0);} // 803EC014
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,2,ea,0,0);} // 803EC018
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,5,ea,0,0);} // 803EC01C
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,4,ea,0,0);} // 803EC020
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803EC024
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 803EC028
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 803EC02C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 803EC030
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,0,0);} // 803EC034
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,4,ea,0,0);} // 803EC038
  return; // 803EC03C
}

// fn_803EC040
void f_803EC040(Ctx* __restrict c) {
  trace_call(0x803EC040u);
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803EC040
  return; // 803EC044
}

// fn_803EC048
void f_803EC048(Ctx* __restrict c) {
  trace_call(0x803EC048u);
  c->r[3]=0u+0x80470000u; // 803EC048
  c->r[3]=c->r[3]+0xFFFF98D8u; // 803EC04C
  return; // 803EC050
}

// fn_803EC054
void f_803EC054(Ctx* __restrict c) {
  trace_call(0x803EC054u);
  c->r[3]=c->r[13]+0xFFFFDED0u; // 803EC054
  return; // 803EC058
}

// fn_803EC05C
void f_803EC05C(Ctx* __restrict c) {
  trace_call(0x803EC05Cu);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC05C
  c->r[0]=c->lr; // 803EC060
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC064
  W32(c->r[1]+0x00000434u,c->r[0]); // 803EC068
  c->r[0]=0u+0x00000000u; // 803EC06C
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC070
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803EC074
  c->r[31]=c->r[4]|c->r[4]; // 803EC078
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC07C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803EC080
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803EC084
  W32(c->r[1]+0x00000020u,c->r[0]); // 803EC088
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803EC08C
  W32(c->r[1]+0x00000028u,c->r[0]); // 803EC090
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803EC094
  W32(c->r[1]+0x00000030u,c->r[0]); // 803EC098
  W32(c->r[1]+0x00000034u,c->r[0]); // 803EC09C
L_803EC0A0:;
  c->r[3]=c->r[31]|c->r[31]; // 803EC0A0
  c->r[4]=c->r[1]+0x00000008u; // 803EC0A4
  c->r[5]=c->r[1]+0x00000010u; // 803EC0A8
  c->r[6]=c->r[1]+0x0000000Cu; // 803EC0AC
  c->r[7]=c->r[1]+0x00000038u; // 803EC0B0
  c->r[8]=c->r[1]+0x00000018u; // 803EC0B4
  c->r[9]=0u+0x000003E8u; // 803EC0B8
  c->lr=0x803EC0C0u; f_80403308(c); // 803EC0BC
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EC0C0
  cmps(c,0,(int32_t)c->r[0],6); // 803EC0C4
  if (!crb(c,2)) { IRQCHK(c); goto L_803EC0A0; } // 803EC0C8
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803EC0CC
  c->r[3]=0u+0x00000001u; // 803EC0D0
  c->r[0]=R32(c->r[1]+0x00000434u); // 803EC0D4
  c->lr=c->r[0]; // 803EC0D8
  c->r[1]=c->r[1]+0x00000430u; // 803EC0DC
  return; // 803EC0E0
}

// fn_803EC0E4
void f_803EC0E4(Ctx* __restrict c) {
  trace_call(0x803EC0E4u);
  return; // 803EC0E4
}

// fn_803EC0E8
void f_803EC0E8(Ctx* __restrict c) {
  trace_call(0x803EC0E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC0E8
  c->r[0]=c->lr; // 803EC0EC
  {uint32_t ea=c->r[2]+0xFFFFA820u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC0F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EC0F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EC0F8
  c->r[31]=c->r[4]|c->r[4]; // 803EC0FC
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC100
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803EC104
  c->lr=0x803EC10Cu; f_803ACF08(c); // 803EC108
  c->f[3]=c->ps1[3]=S(c->f[1]); // 803EC10C
  {uint32_t ea=c->r[2]+0xFFFFA814u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC110
  c->r[3]=0u+0x80570000u; // 803EC114
  {uint32_t ea=c->r[2]+0xFFFFA824u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC118
  c->r[3]=c->r[3]+0x000041A8u; // 803EC11C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC120
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803EC124
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EC128
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 803EC12C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803EC130
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EC134
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EC138
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EC13C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EC140
  c->lr=c->r[0]; // 803EC144
  c->r[1]=c->r[1]+0x00000010u; // 803EC148
  return; // 803EC14C
}

// fn_803EC150
void f_803EC150(Ctx* __restrict c) {
  trace_call(0x803EC150u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC150
  c->r[0]=c->lr; // 803EC154
  W32(c->r[1]+0x000000D4u,c->r[0]); // 803EC158
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 803EC15C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 803EC160
  c->r[11]=c->r[1]+0x000000C0u; // 803EC164
  c->lr=0x803EC16Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803EC168
  c->r[0]=R32(c->r[3]+0x00000190u); // 803EC16C
  c->r[27]=c->r[3]|c->r[3]; // 803EC170
  c->r[28]=c->r[4]|c->r[4]; // 803EC174
  cmps(c,0,(int32_t)c->r[0],7); // 803EC178
  if (!crb(c,2)) { goto L_803EC3C4; } // 803EC17C
  c->r[30]=R32(c->r[4]+0x00000068u); // 803EC180
  c->r[31]=0u+0x00000000u; // 803EC184
  cmps(c,0,(int32_t)c->r[30],0); // 803EC188
  if (crb(c,2)) { goto L_803EC1A4; } // 803EC18C
  c->r[3]=c->r[30]|c->r[30]; // 803EC190
  c->lr=0x803EC198u; f_803E5414(c); // 803EC194
  cmps(c,0,(int32_t)c->r[3],0); // 803EC198
  if (crb(c,2)) { goto L_803EC1A4; } // 803EC19C
  c->r[31]=0u+0x00000001u; // 803EC1A0
L_803EC1A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803EC1A4
  if (crb(c,2)) { goto L_803EC1B8; } // 803EC1A8
  c->r[3]=c->r[30]|c->r[30]; // 803EC1AC
  c->lr=0x803EC1B4u; f_803EC3E4(c); // 803EC1B0
  goto L_803EC1C0; // 803EC1B4
L_803EC1B8:;
  c->r[3]=0u+0x80570000u; // 803EC1B8
  c->r[3]=c->r[3]+0x00002A80u; // 803EC1BC
L_803EC1C0:;
  {uint32_t ea=c->r[28]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC1C0
  c->r[29]=c->r[3]|c->r[3]; // 803EC1C4
  {uint32_t ea=c->r[28]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC1C8
  c->r[3]=c->r[28]+0x000000C0u; // 803EC1CC
  {uint32_t ea=c->r[28]+0x00000104u; WF32(ea,c->f[1]);} // 803EC1D0
  c->r[4]=c->r[28]+0x00000038u; // 803EC1D4
  {uint32_t ea=c->r[28]+0x00000108u; WF32(ea,c->f[0]);} // 803EC1D8
  c->lr=0x803EC1E0u; f_803E53A0(c); // 803EC1DC
  c->r[0]=R32(c->r[27]+0x000001BCu); // 803EC1E0
  cmps(c,0,(int32_t)c->r[0],0); // 803EC1E4
  if (crb(c,2)) { goto L_803EC1FC; } // 803EC1E8
  {uint32_t ea=c->r[28]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC1EC
  {uint32_t ea=c->r[28]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC1F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803EC1F4
  {uint32_t ea=c->r[28]+0x000000C4u; WF32(ea,c->f[0]);} // 803EC1F8
L_803EC1FC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803EC1FC
  if (crb(c,2)) { goto L_803EC230; } // 803EC200
  cmps(c,0,(int32_t)c->r[31],0); // 803EC204
  if (crb(c,2)) { goto L_803EC21C; } // 803EC208
  c->r[3]=c->r[28]+0x000000C0u; // 803EC20C
  c->r[4]=c->r[29]|c->r[29]; // 803EC210
  c->r[5]=c->r[3]|c->r[3]; // 803EC214
  c->lr=0x803EC21Cu; f_803E541C(c); // 803EC218
L_803EC21C:;
  c->r[3]=c->r[30]|c->r[30]; // 803EC21C
  c->lr=0x803EC224u; f_803EC3EC(c); // 803EC220
  c->r[4]=c->r[3]|c->r[3]; // 803EC224
  c->r[3]=c->r[28]+0x000000C0u; // 803EC228
  c->lr=0x803EC230u; f_803E52F8(c); // 803EC22C
L_803EC230:;
  c->r[3]=c->r[1]+0x00000098u; // 803EC230
  c->lr=0x803EC238u; f_803E49FC(c); // 803EC234
  c->r[3]=c->r[1]+0x00000088u; // 803EC238
  c->lr=0x803EC240u; f_803E49FC(c); // 803EC23C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC240
  c->r[3]=c->r[1]+0x00000098u; // 803EC244
  {uint32_t ea=c->r[2]+0xFFFFA7D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC248
  c->f[3]=c->f[2]; // 803EC24C
  c->lr=0x803EC254u; f_803E5508(c); // 803EC250
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC254
  c->r[3]=c->r[1]+0x00000088u; // 803EC258
  {uint32_t ea=c->r[2]+0xFFFFA7D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EC25C
  c->f[2]=c->f[1]; // 803EC260
  c->lr=0x803EC268u; f_803E5508(c); // 803EC264
  c->r[3]=c->r[28]+0x000000D0u; // 803EC268
  c->r[4]=c->r[28]+0x00000008u; // 803EC26C
  c->r[5]=c->r[1]+0x00000098u; // 803EC270
  c->lr=0x803EC278u; f_803E541C(c); // 803EC274
  c->r[3]=c->r[28]+0x000000E0u; // 803EC278
  c->r[4]=c->r[28]+0x00000008u; // 803EC27C
  c->r[5]=c->r[1]+0x00000088u; // 803EC280
  c->lr=0x803EC288u; f_803E541C(c); // 803EC284
  c->r[3]=c->r[1]+0x00000078u; // 803EC288
  c->lr=0x803EC290u; f_803E49FC(c); // 803EC28C
  c->lr=0x803EC294u; f_803E99C8(c); // 803EC290
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EC294
  c->r[5]=c->r[1]+0x00000078u; // 803EC298
  {uint32_t ea=c->r[28]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC29C
  c->r[4]=0u+0x00000000u; // 803EC2A0
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803EC2A4
  c->r[6]=0u+0x00000000u; // 803EC2A8
  {uint32_t ea=c->r[28]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC2AC
  c->r[7]=R32(c->r[27]+0x0000007Cu); // 803EC2B0
  c->ctr=c->r[12]; // 803EC2B4
  if (true) { c->lr=0x803EC2BCu; dispatch(c,c->ctr); } // 803EC2B8
  c->r[3]=c->r[1]+0x00000068u; // 803EC2BC
  c->lr=0x803EC2C4u; f_803E49FC(c); // 803EC2C0
  c->r[3]=c->r[1]+0x00000068u; // 803EC2C4
  c->r[4]=c->r[28]+0x000000C0u; // 803EC2C8
  c->r[5]=c->r[28]+0x000000D0u; // 803EC2CC
  c->lr=0x803EC2D4u; f_803E4A00(c); // 803EC2D0
  c->r[3]=c->r[1]+0x00000068u; // 803EC2D4
  c->r[4]=c->r[28]+0x000000E0u; // 803EC2D8
  c->lr=0x803EC2E0u; f_803E52F8(c); // 803EC2DC
  c->r[3]=c->r[1]+0x00000058u; // 803EC2E0
  c->lr=0x803EC2E8u; f_803E49FC(c); // 803EC2E4
  c->r[3]=c->r[1]+0x00000058u; // 803EC2E8
  c->r[4]=c->r[28]+0x000000C0u; // 803EC2EC
  c->r[5]=c->r[28]+0x000000D0u; // 803EC2F0
  c->lr=0x803EC2F8u; f_803E531C(c); // 803EC2F4
  c->r[3]=c->r[1]+0x00000058u; // 803EC2F8
  c->r[4]=c->r[28]+0x000000E0u; // 803EC2FC
  c->lr=0x803EC304u; f_803E52F8(c); // 803EC300
  c->r[3]=c->r[1]+0x00000048u; // 803EC304
  c->lr=0x803EC30Cu; f_803E49FC(c); // 803EC308
  c->r[3]=c->r[1]+0x00000048u; // 803EC30C
  c->r[4]=c->r[28]+0x000000C0u; // 803EC310
  c->r[5]=c->r[28]+0x000000D0u; // 803EC314
  c->lr=0x803EC31Cu; f_803E4A00(c); // 803EC318
  c->r[3]=c->r[1]+0x00000048u; // 803EC31C
  c->r[4]=c->r[28]+0x000000E0u; // 803EC320
  c->lr=0x803EC328u; f_803E99D0(c); // 803EC324
  c->r[3]=c->r[1]+0x00000038u; // 803EC328
  c->lr=0x803EC330u; f_803E49FC(c); // 803EC32C
  c->r[3]=c->r[1]+0x00000038u; // 803EC330
  c->r[4]=c->r[1]+0x00000068u; // 803EC334
  c->r[5]=c->r[1]+0x00000058u; // 803EC338
  c->lr=0x803EC340u; f_803E4A00(c); // 803EC33C
  c->r[3]=c->r[1]+0x00000028u; // 803EC340
  c->lr=0x803EC348u; f_803E49FC(c); // 803EC344
  c->r[3]=c->r[1]+0x00000028u; // 803EC348
  c->r[4]=c->r[1]+0x00000068u; // 803EC34C
  c->r[5]=c->r[1]+0x00000048u; // 803EC350
  c->lr=0x803EC358u; f_803E4A00(c); // 803EC354
  c->r[3]=c->r[1]+0x00000018u; // 803EC358
  c->lr=0x803EC360u; f_803E49FC(c); // 803EC35C
  c->r[3]=c->r[1]+0x00000018u; // 803EC360
  c->r[4]=c->r[1]+0x00000038u; // 803EC364
  c->r[5]=c->r[1]+0x00000028u; // 803EC368
  c->lr=0x803EC370u; f_803E54A8(c); // 803EC36C
  c->r[3]=c->r[1]+0x00000018u; // 803EC370
  c->lr=0x803EC378u; f_803EC3F4(c); // 803EC374
  c->r[3]=c->r[1]+0x00000078u; // 803EC378
  c->lr=0x803EC380u; f_803EC3F4(c); // 803EC37C
  c->r[3]=c->r[1]+0x00000078u; // 803EC380
  c->r[4]=c->r[1]+0x00000018u; // 803EC384
  c->lr=0x803EC38Cu; f_803EC49C(c); // 803EC388
  c->lr=0x803EC390u; f_803EC478(c); // 803EC38C
  c->f[31]=c->f[1]; // 803EC390
  c->r[3]=c->r[1]+0x00000008u; // 803EC394
  c->lr=0x803EC39Cu; f_803E49FC(c); // 803EC398
  c->r[3]=c->r[1]+0x00000008u; // 803EC39C
  c->r[4]=c->r[1]+0x00000078u; // 803EC3A0
  c->r[5]=c->r[1]+0x00000018u; // 803EC3A4
  c->lr=0x803EC3ACu; f_803E54A8(c); // 803EC3A8
  c->r[3]=c->r[1]+0x00000008u; // 803EC3AC
  c->lr=0x803EC3B4u; f_803EC3F4(c); // 803EC3B0
  c->f[1]=c->f[31]; // 803EC3B4
  c->r[3]=c->r[28]+0x00000008u; // 803EC3B8
  c->r[4]=c->r[1]+0x00000008u; // 803EC3BC
  c->lr=0x803EC3C4u; f_803EC4C0(c); // 803EC3C0
L_803EC3C4:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 803EC3C4
  c->r[11]=c->r[1]+0x000000C0u; // 803EC3C8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 803EC3CC
  c->lr=0x803EC3D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803EC3D0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 803EC3D4
  c->lr=c->r[0]; // 803EC3D8
  c->r[1]=c->r[1]+0x000000D0u; // 803EC3DC
  return; // 803EC3E0
}

// fn_803EC3E4
void f_803EC3E4(Ctx* __restrict c) {
  trace_call(0x803EC3E4u);
  c->r[3]=c->r[3]+0x00000020u; // 803EC3E4
  return; // 803EC3E8
}

// fn_803EC3EC
void f_803EC3EC(Ctx* __restrict c) {
  trace_call(0x803EC3ECu);
  c->r[3]=c->r[3]+0x00000090u; // 803EC3EC
  return; // 803EC3F0
}

// fn_803EC3F4
void f_803EC3F4(Ctx* __restrict c) {
  trace_call(0x803EC3F4u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EC3F4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC3F8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 803EC3FC
  {uint32_t ea=c->r[2]+0xFFFFA81Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC400
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 803EC404
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 803EC408
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC40C
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 803EC410
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[4]); // 803EC414
  fcmp(c,0,c->f[4],c->f[0]); // 803EC418
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803EC41C
  if (!crb(c,2)) { goto L_803EC42C; } // 803EC420
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC424
  goto L_803EC448; // 803EC428
L_803EC42C:;
  c->f[0]=frsqrte(c->f[4]); // 803EC42C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 803EC430
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803EC434
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[4],-c->f[2])); // 803EC438
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803EC43C
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[4]; // 803EC440
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 803EC444
L_803EC448:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC448
  fcmp(c,0,c->f[0],c->f[1]); // 803EC44C
  if (crb(c,2)) return; // 803EC450
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC454
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 803EC458
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 803EC45C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC460
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803EC464
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803EC468
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803EC46C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803EC470
  return; // 803EC474
}

// fn_803EC478
void f_803EC478(Ctx* __restrict c) {
  trace_call(0x803EC478u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC478
  c->r[0]=c->lr; // 803EC47C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EC480
  c->lr=0x803EC488u; f_803AD458(c); // 803EC484
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EC488
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803EC48C
  c->lr=c->r[0]; // 803EC490
  c->r[1]=c->r[1]+0x00000010u; // 803EC494
  return; // 803EC498
}

// fn_803EC49C
void f_803EC49C(Ctx* __restrict c) {
  trace_call(0x803EC49Cu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EC49C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EC4A0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC4A4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803EC4A8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC4AC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803EC4B0
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803EC4B4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803EC4B8
  return; // 803EC4BC
}

// fn_803EC4C0
void f_803EC4C0(Ctx* __restrict c) {
  trace_call(0x803EC4C0u);
  f_803E31BC(c); return; // 803EC4C0
}

// fn_803EC4C4
void f_803EC4C4(Ctx* __restrict c) {
  trace_call(0x803EC4C4u);
  c->r[3]=0u+0x80470000u; // 803EC4C4
  c->r[3]=c->r[3]+0xFFFF98E4u; // 803EC4C8
  return; // 803EC4CC
}

// fn_803EC4D0
void f_803EC4D0(Ctx* __restrict c) {
  trace_call(0x803EC4D0u);
  c->r[3]=c->r[13]+0xFFFFDED4u; // 803EC4D0
  return; // 803EC4D4
}

// fn_803EC4D8
void f_803EC4D8(Ctx* __restrict c) {
  trace_call(0x803EC4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC4D8
  c->r[0]=c->lr; // 803EC4DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803EC4E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803EC4E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803EC4E8
  c->r[30]=0u+0x00000000u; // 803EC4EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803EC4F0
  c->r[29]=0u+0x00000000u; // 803EC4F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803EC4F8
  c->r[28]=c->r[3]|c->r[3]; // 803EC4FC
  c->r[31]=c->r[28]|c->r[28]; // 803EC500
L_803EC504:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 803EC504
  cmps(c,0,(int32_t)c->r[3],0); // 803EC508
  if (crb(c,2)) { goto L_803EC524; } // 803EC50C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EC510
  c->r[12]=R32(c->r[12]+0x00000034u); // 803EC514
  c->ctr=c->r[12]; // 803EC518
  if (true) { c->lr=0x803EC520u; dispatch(c,c->ctr); } // 803EC51C
  c->r[30]=c->r[30]|c->r[3]; // 803EC520
L_803EC524:;
  c->r[29]=c->r[29]+0x00000001u; // 803EC524
  c->r[31]=c->r[31]+0x00000004u; // 803EC528
  cmpu(c,0,c->r[29],0x00000004u); // 803EC52C
  if (crb(c,0)) { IRQCHK(c); goto L_803EC504; } // 803EC530
  c->r[0]=R32(c->r[28]+0x00000068u); // 803EC534
  c->r[3]=c->r[0]|c->r[30]; // 803EC538
  W32(c->r[28]+0x00000068u,c->r[3]); // 803EC53C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803EC540
  c->r[30]=R32(c->r[1]+0x00000018u); // 803EC544
  c->r[29]=R32(c->r[1]+0x00000014u); // 803EC548
  c->r[28]=R32(c->r[1]+0x00000010u); // 803EC54C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803EC550
  c->lr=c->r[0]; // 803EC554
  c->r[1]=c->r[1]+0x00000020u; // 803EC558
  return; // 803EC55C
}

// fn_803EC560
void f_803EC560(Ctx* __restrict c) {
  trace_call(0x803EC560u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC560
  c->r[0]=c->lr; // 803EC564
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC568
  W32(c->r[1]+0x00000434u,c->r[0]); // 803EC56C
  c->r[0]=0u+0x00000000u; // 803EC570
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC574
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803EC578
  c->r[31]=0u+0x80470000u; // 803EC57C
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC580
  W32(c->r[1]+0x00000428u,c->r[30]); // 803EC584
  c->r[30]=c->r[4]|c->r[4]; // 803EC588
  W32(c->r[1]+0x00000424u,c->r[29]); // 803EC58C
  c->r[29]=c->r[3]|c->r[3]; // 803EC590
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803EC594
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803EC598
  W32(c->r[1]+0x00000020u,c->r[0]); // 803EC59C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803EC5A0
  W32(c->r[1]+0x00000028u,c->r[0]); // 803EC5A4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803EC5A8
  W32(c->r[1]+0x00000030u,c->r[0]); // 803EC5AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803EC5B0
L_803EC5B4:;
  c->r[3]=c->r[30]|c->r[30]; // 803EC5B4
  c->r[4]=c->r[1]+0x00000008u; // 803EC5B8
  c->r[5]=c->r[1]+0x00000010u; // 803EC5BC
  c->r[6]=c->r[1]+0x0000000Cu; // 803EC5C0
  c->r[7]=c->r[1]+0x00000038u; // 803EC5C4
  c->r[8]=c->r[1]+0x00000018u; // 803EC5C8
  c->r[9]=0u+0x000003E8u; // 803EC5CC
  c->lr=0x803EC5D4u; f_80403308(c); // 803EC5D0
  c->r[3]=R32(c->r[1]+0x00000008u); // 803EC5D4
  c->r[0]=c->r[3]+0xFFFFFFB7u; // 803EC5D8
  cmpu(c,0,c->r[0],0x00000007u); // 803EC5DC
  if (crb(c,1)) { goto L_803EC674; } // 803EC5E0
  c->r[3]=c->r[31]+0xFFFF98F0u; // 803EC5E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EC5E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803EC5EC
  c->ctr=c->r[3]; // 803EC5F0
  if (true) { switch (c->ctr) { case 0x803EC5F8u: goto L_803EC5F8; case 0x803EC60Cu: goto L_803EC60C; case 0x803EC620u: goto L_803EC620; case 0x803EC634u: goto L_803EC634; case 0x803EC648u: goto L_803EC648; case 0x803EC654u: goto L_803EC654; case 0x803EC660u: goto L_803EC660; case 0x803EC66Cu: goto L_803EC66C; default: break; } dispatch(c,c->ctr); return; } // 803EC5F4
L_803EC5F8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC5F8
  c->r[3]=c->r[30]|c->r[30]; // 803EC5FC
  c->r[5]=c->r[29]+0x00000098u; // 803EC600
  c->lr=0x803EC608u; f_804039AC(c); // 803EC604
  goto L_803EC674; // 803EC608
L_803EC60C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC60C
  c->r[3]=c->r[30]|c->r[30]; // 803EC610
  c->r[5]=c->r[29]+0x0000009Cu; // 803EC614
  c->lr=0x803EC61Cu; f_804039AC(c); // 803EC618
  goto L_803EC674; // 803EC61C
L_803EC620:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC620
  c->r[3]=c->r[30]|c->r[30]; // 803EC624
  c->r[5]=c->r[29]+0x000000A0u; // 803EC628
  c->lr=0x803EC630u; f_804039AC(c); // 803EC62C
  goto L_803EC674; // 803EC630
L_803EC634:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC634
  c->r[3]=c->r[30]|c->r[30]; // 803EC638
  c->r[5]=c->r[29]+0x000000A4u; // 803EC63C
  c->lr=0x803EC644u; f_804039AC(c); // 803EC640
  goto L_803EC674; // 803EC644
L_803EC648:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EC648
  W32(c->r[29]+0x000000A8u,c->r[0]); // 803EC64C
  goto L_803EC674; // 803EC650
L_803EC654:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EC654
  W32(c->r[29]+0x000000ACu,c->r[0]); // 803EC658
  goto L_803EC674; // 803EC65C
L_803EC660:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EC660
  W32(c->r[29]+0x000000B0u,c->r[0]); // 803EC664
  goto L_803EC674; // 803EC668
L_803EC66C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EC66C
  W32(c->r[29]+0x000000B4u,c->r[0]); // 803EC670
L_803EC674:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EC674
  cmps(c,0,(int32_t)c->r[0],6); // 803EC678
  if (!crb(c,2)) { IRQCHK(c); goto L_803EC5B4; } // 803EC67C
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803EC680
  c->r[3]=0u+0x00000001u; // 803EC684
  c->r[30]=R32(c->r[1]+0x00000428u); // 803EC688
  c->r[29]=R32(c->r[1]+0x00000424u); // 803EC68C
  c->r[0]=R32(c->r[1]+0x00000434u); // 803EC690
  c->lr=c->r[0]; // 803EC694
  c->r[1]=c->r[1]+0x00000430u; // 803EC698
  return; // 803EC69C
}

// fn_803EC6A0
void f_803EC6A0(Ctx* __restrict c) {
  trace_call(0x803EC6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC6A0
  c->r[0]=c->lr; // 803EC6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EC6A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EC6AC
  c->r[31]=c->r[4]|c->r[4]; // 803EC6B0
  c->r[4]=0u+0x00000049u; // 803EC6B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EC6B8
  c->r[30]=c->r[3]|c->r[3]; // 803EC6BC
  c->r[5]=R32(c->r[3]+0x00000098u); // 803EC6C0
  c->r[3]=c->r[31]|c->r[31]; // 803EC6C4
  c->lr=0x803EC6CCu; f_80403CA4(c); // 803EC6C8
  c->r[5]=R32(c->r[30]+0x0000009Cu); // 803EC6CC
  c->r[3]=c->r[31]|c->r[31]; // 803EC6D0
  c->r[4]=0u+0x0000004Au; // 803EC6D4
  c->lr=0x803EC6DCu; f_80403CA4(c); // 803EC6D8
  c->r[5]=R32(c->r[30]+0x000000A0u); // 803EC6DC
  c->r[3]=c->r[31]|c->r[31]; // 803EC6E0
  c->r[4]=0u+0x0000004Bu; // 803EC6E4
  c->lr=0x803EC6ECu; f_80403CA4(c); // 803EC6E8
  c->r[5]=R32(c->r[30]+0x000000A4u); // 803EC6EC
  c->r[3]=c->r[31]|c->r[31]; // 803EC6F0
  c->r[4]=0u+0x0000004Cu; // 803EC6F4
  c->lr=0x803EC6FCu; f_80403CA4(c); // 803EC6F8
  c->r[5]=R32(c->r[30]+0x000000A8u); // 803EC6FC
  c->r[3]=c->r[31]|c->r[31]; // 803EC700
  c->r[4]=0u+0x0000004Du; // 803EC704
  c->lr=0x803EC70Cu; f_80403B54(c); // 803EC708
  c->r[5]=R32(c->r[30]+0x000000ACu); // 803EC70C
  c->r[3]=c->r[31]|c->r[31]; // 803EC710
  c->r[4]=0u+0x0000004Eu; // 803EC714
  c->lr=0x803EC71Cu; f_80403B54(c); // 803EC718
  c->r[5]=R32(c->r[30]+0x000000B0u); // 803EC71C
  c->r[3]=c->r[31]|c->r[31]; // 803EC720
  c->r[4]=0u+0x0000004Fu; // 803EC724
  c->lr=0x803EC72Cu; f_80403B54(c); // 803EC728
  c->r[5]=R32(c->r[30]+0x000000B4u); // 803EC72C
  c->r[3]=c->r[31]|c->r[31]; // 803EC730
  c->r[4]=0u+0x00000050u; // 803EC734
  c->lr=0x803EC73Cu; f_80403B54(c); // 803EC738
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EC73C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EC740
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EC744
  c->lr=c->r[0]; // 803EC748
  c->r[1]=c->r[1]+0x00000010u; // 803EC74C
  return; // 803EC750
}

// fn_803EC754
void f_803EC754(Ctx* __restrict c) {
  trace_call(0x803EC754u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC754
  c->r[0]=c->lr; // 803EC758
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EC75C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EC760
  c->r[31]=0u+0x00000000u; // 803EC764
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EC768
  c->r[30]=c->r[3]|c->r[3]; // 803EC76C
  c->r[0]=R32(c->r[3]+0x000000A8u); // 803EC770
  cmps(c,0,(int32_t)c->r[0],0); // 803EC774
  if (!crb(c,1)) { goto L_803EC780; } // 803EC778
  c->r[31]=c->r[0]|c->r[0]; // 803EC77C
L_803EC780:;
  c->r[0]=R32(c->r[3]+0x000000ACu); // 803EC780
  cmps(c,0,(int32_t)c->r[0],0); // 803EC784
  if (!crb(c,1)) { goto L_803EC790; } // 803EC788
  c->r[31]=c->r[31]+c->r[0]; // 803EC78C
L_803EC790:;
  c->r[0]=R32(c->r[3]+0x000000B0u); // 803EC790
  cmps(c,0,(int32_t)c->r[0],0); // 803EC794
  if (!crb(c,1)) { goto L_803EC7A0; } // 803EC798
  c->r[31]=c->r[31]+c->r[0]; // 803EC79C
L_803EC7A0:;
  c->r[0]=R32(c->r[3]+0x000000B4u); // 803EC7A0
  cmps(c,0,(int32_t)c->r[0],0); // 803EC7A4
  if (!crb(c,1)) { goto L_803EC7B0; } // 803EC7A8
  c->r[31]=c->r[31]+c->r[0]; // 803EC7AC
L_803EC7B0:;
  c->lr=0x803EC7B4u; f_803A5A68(c); // 803EC7B0
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 803EC7B4
  c->r[4]=R32(c->r[30]+0x000000A8u); // 803EC7B8
  c->r[5]=0u+0x00000000u; // 803EC7BC
  cmps(c,0,(int32_t)c->r[4],0); // 803EC7C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 803EC7C4
  c->r[0]=c->r[3]-c->r[0]; // 803EC7C8
  if (!crb(c,1)) { goto L_803EC7E4; } // 803EC7CC
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 803EC7D0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 803EC7D4
  if (crb(c,1)) { goto L_803EC7E4; } // 803EC7D8
  c->r[3]=R32(c->r[30]+0x00000098u); // 803EC7DC
  goto L_803EC854; // 803EC7E0
L_803EC7E4:;
  c->r[4]=R32(c->r[30]+0x000000ACu); // 803EC7E4
  cmps(c,0,(int32_t)c->r[4],0); // 803EC7E8
  if (!crb(c,1)) { goto L_803EC808; } // 803EC7EC
  c->r[3]=c->r[5]+c->r[4]; // 803EC7F0
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 803EC7F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 803EC7F8
  if (crb(c,1)) { goto L_803EC808; } // 803EC7FC
  c->r[3]=R32(c->r[30]+0x0000009Cu); // 803EC800
  goto L_803EC854; // 803EC804
L_803EC808:;
  c->r[4]=R32(c->r[30]+0x000000B0u); // 803EC808
  cmps(c,0,(int32_t)c->r[4],0); // 803EC80C
  if (!crb(c,1)) { goto L_803EC82C; } // 803EC810
  c->r[3]=c->r[5]+c->r[4]; // 803EC814
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 803EC818
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 803EC81C
  if (crb(c,1)) { goto L_803EC82C; } // 803EC820
  c->r[3]=R32(c->r[30]+0x000000A0u); // 803EC824
  goto L_803EC854; // 803EC828
L_803EC82C:;
  c->r[4]=R32(c->r[30]+0x000000B4u); // 803EC82C
  cmps(c,0,(int32_t)c->r[4],0); // 803EC830
  if (!crb(c,1)) { goto L_803EC850; } // 803EC834
  c->r[3]=c->r[5]+c->r[4]; // 803EC838
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 803EC83C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 803EC840
  if (crb(c,1)) { goto L_803EC850; } // 803EC844
  c->r[3]=R32(c->r[30]+0x000000A4u); // 803EC848
  goto L_803EC854; // 803EC84C
L_803EC850:;
  c->r[3]=0u+0x00000000u; // 803EC850
L_803EC854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EC854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EC858
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EC85C
  c->lr=c->r[0]; // 803EC860
  c->r[1]=c->r[1]+0x00000010u; // 803EC864
  return; // 803EC868
}

// fn_803EC86C
void f_803EC86C(Ctx* __restrict c) {
  trace_call(0x803EC86Cu);
  c->r[3]=0u+0x80470000u; // 803EC86C
  c->r[3]=c->r[3]+0xFFFF9910u; // 803EC870
  return; // 803EC874
}

// fn_803EC878
void f_803EC878(Ctx* __restrict c) {
  trace_call(0x803EC878u);
  c->r[3]=c->r[13]+0xFFFFDED8u; // 803EC878
  return; // 803EC87C
}

// fn_803EC880
void f_803EC880(Ctx* __restrict c) {
  trace_call(0x803EC880u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EC880
  c->r[0]=c->lr; // 803EC884
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EC888
  W32(c->r[1]+0x00000434u,c->r[0]); // 803EC88C
  c->r[0]=0u+0x00000000u; // 803EC890
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EC894
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803EC898
  c->r[31]=0u+0x80470000u; // 803EC89C
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EC8A0
  W32(c->r[1]+0x00000428u,c->r[30]); // 803EC8A4
  c->r[30]=c->r[4]|c->r[4]; // 803EC8A8
  W32(c->r[1]+0x00000424u,c->r[29]); // 803EC8AC
  c->r[29]=c->r[3]|c->r[3]; // 803EC8B0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803EC8B4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803EC8B8
  W32(c->r[1]+0x00000020u,c->r[0]); // 803EC8BC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803EC8C0
  W32(c->r[1]+0x00000028u,c->r[0]); // 803EC8C4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803EC8C8
  W32(c->r[1]+0x00000030u,c->r[0]); // 803EC8CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803EC8D0
L_803EC8D4:;
  c->r[3]=c->r[30]|c->r[30]; // 803EC8D4
  c->r[4]=c->r[1]+0x00000008u; // 803EC8D8
  c->r[5]=c->r[1]+0x00000010u; // 803EC8DC
  c->r[6]=c->r[1]+0x0000000Cu; // 803EC8E0
  c->r[7]=c->r[1]+0x00000038u; // 803EC8E4
  c->r[8]=c->r[1]+0x00000018u; // 803EC8E8
  c->r[9]=0u+0x000003E8u; // 803EC8EC
  c->lr=0x803EC8F4u; f_80403308(c); // 803EC8F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 803EC8F4
  c->r[0]=c->r[3]+0xFFFFFFAFu; // 803EC8F8
  cmpu(c,0,c->r[0],0x0000000Eu); // 803EC8FC
  if (crb(c,1)) { goto L_803ECA58; } // 803EC900
  c->r[3]=c->r[31]+0xFFFF991Cu; // 803EC904
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EC908
  c->r[3]=R32(c->r[3]+c->r[0]); // 803EC90C
  c->ctr=c->r[3]; // 803EC910
  if (true) { switch (c->ctr) { case 0x803EC918u: goto L_803EC918; case 0x803EC930u: goto L_803EC930; case 0x803EC948u: goto L_803EC948; case 0x803EC960u: goto L_803EC960; case 0x803EC978u: goto L_803EC978; case 0x803EC990u: goto L_803EC990; case 0x803EC9A8u: goto L_803EC9A8; case 0x803EC9C0u: goto L_803EC9C0; case 0x803EC9D8u: goto L_803EC9D8; case 0x803EC9F0u: goto L_803EC9F0; case 0x803ECA08u: goto L_803ECA08; case 0x803ECA20u: goto L_803ECA20; case 0x803ECA38u: goto L_803ECA38; case 0x803ECA44u: goto L_803ECA44; case 0x803ECA50u: goto L_803ECA50; default: break; } dispatch(c,c->ctr); return; } // 803EC914
L_803EC918:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC918
  c->r[3]=c->r[30]|c->r[30]; // 803EC91C
  c->r[5]=c->r[1]+0x00000018u; // 803EC920
  c->r[6]=c->r[29]+0x000000B4u; // 803EC924
  c->lr=0x803EC92Cu; f_804039BC(c); // 803EC928
  goto L_803ECA58; // 803EC92C
L_803EC930:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC930
  c->r[3]=c->r[30]|c->r[30]; // 803EC934
  c->r[5]=c->r[1]+0x00000018u; // 803EC938
  c->r[6]=c->r[29]+0x000000D4u; // 803EC93C
  c->lr=0x803EC944u; f_804039BC(c); // 803EC940
  goto L_803ECA58; // 803EC944
L_803EC948:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC948
  c->r[3]=c->r[30]|c->r[30]; // 803EC94C
  c->r[5]=c->r[1]+0x00000018u; // 803EC950
  c->r[6]=c->r[29]+0x000000F4u; // 803EC954
  c->lr=0x803EC95Cu; f_804039BC(c); // 803EC958
  goto L_803ECA58; // 803EC95C
L_803EC960:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC960
  c->r[3]=c->r[30]|c->r[30]; // 803EC964
  c->r[5]=c->r[1]+0x00000018u; // 803EC968
  c->r[6]=c->r[29]+0x00000114u; // 803EC96C
  c->lr=0x803EC974u; f_804039BC(c); // 803EC970
  goto L_803ECA58; // 803EC974
L_803EC978:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC978
  c->r[3]=c->r[30]|c->r[30]; // 803EC97C
  c->r[5]=c->r[1]+0x00000018u; // 803EC980
  c->r[6]=c->r[29]+0x0000013Cu; // 803EC984
  c->lr=0x803EC98Cu; f_804039BC(c); // 803EC988
  goto L_803ECA58; // 803EC98C
L_803EC990:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC990
  c->r[3]=c->r[30]|c->r[30]; // 803EC994
  c->r[5]=c->r[1]+0x00000018u; // 803EC998
  c->r[6]=c->r[29]+0x0000015Cu; // 803EC99C
  c->lr=0x803EC9A4u; f_804039BC(c); // 803EC9A0
  goto L_803ECA58; // 803EC9A4
L_803EC9A8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC9A8
  c->r[3]=c->r[30]|c->r[30]; // 803EC9AC
  c->r[5]=c->r[1]+0x00000018u; // 803EC9B0
  c->r[6]=c->r[29]+0x0000017Cu; // 803EC9B4
  c->lr=0x803EC9BCu; f_804039BC(c); // 803EC9B8
  goto L_803ECA58; // 803EC9BC
L_803EC9C0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC9C0
  c->r[3]=c->r[30]|c->r[30]; // 803EC9C4
  c->r[5]=c->r[1]+0x00000018u; // 803EC9C8
  c->r[6]=c->r[29]+0x0000019Cu; // 803EC9CC
  c->lr=0x803EC9D4u; f_804039BC(c); // 803EC9D0
  goto L_803ECA58; // 803EC9D4
L_803EC9D8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC9D8
  c->r[3]=c->r[30]|c->r[30]; // 803EC9DC
  c->r[5]=c->r[1]+0x00000018u; // 803EC9E0
  c->r[6]=c->r[29]+0x000001C4u; // 803EC9E4
  c->lr=0x803EC9ECu; f_804039BC(c); // 803EC9E8
  goto L_803ECA58; // 803EC9EC
L_803EC9F0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EC9F0
  c->r[3]=c->r[30]|c->r[30]; // 803EC9F4
  c->r[5]=c->r[1]+0x00000018u; // 803EC9F8
  c->r[6]=c->r[29]+0x000001E4u; // 803EC9FC
  c->lr=0x803ECA04u; f_804039BC(c); // 803ECA00
  goto L_803ECA58; // 803ECA04
L_803ECA08:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ECA08
  c->r[3]=c->r[30]|c->r[30]; // 803ECA0C
  c->r[5]=c->r[1]+0x00000018u; // 803ECA10
  c->r[6]=c->r[29]+0x00000204u; // 803ECA14
  c->lr=0x803ECA1Cu; f_804039BC(c); // 803ECA18
  goto L_803ECA58; // 803ECA1C
L_803ECA20:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ECA20
  c->r[3]=c->r[30]|c->r[30]; // 803ECA24
  c->r[5]=c->r[1]+0x00000018u; // 803ECA28
  c->r[6]=c->r[29]+0x00000224u; // 803ECA2C
  c->lr=0x803ECA34u; f_804039BC(c); // 803ECA30
  goto L_803ECA58; // 803ECA34
L_803ECA38:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ECA38
  W32(c->r[29]+0x000000A0u,c->r[0]); // 803ECA3C
  goto L_803ECA58; // 803ECA40
L_803ECA44:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ECA44
  W32(c->r[29]+0x000000A4u,c->r[0]); // 803ECA48
  goto L_803ECA58; // 803ECA4C
L_803ECA50:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ECA50
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[0]);} // 803ECA54
L_803ECA58:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803ECA58
  cmps(c,0,(int32_t)c->r[0],6); // 803ECA5C
  if (!crb(c,2)) { IRQCHK(c); goto L_803EC8D4; } // 803ECA60
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803ECA64
  c->r[3]=0u+0x00000001u; // 803ECA68
  c->r[30]=R32(c->r[1]+0x00000428u); // 803ECA6C
  c->r[29]=R32(c->r[1]+0x00000424u); // 803ECA70
  c->r[0]=R32(c->r[1]+0x00000434u); // 803ECA74
  c->lr=c->r[0]; // 803ECA78
  c->r[1]=c->r[1]+0x00000430u; // 803ECA7C
  return; // 803ECA80
}

// fn_803ECA84
void f_803ECA84(Ctx* __restrict c) {
  trace_call(0x803ECA84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ECA84
  c->r[0]=c->lr; // 803ECA88
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ECA8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ECA90
  c->r[31]=c->r[4]|c->r[4]; // 803ECA94
  c->r[4]=0u+0x00000051u; // 803ECA98
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ECA9C
  c->r[30]=c->r[3]|c->r[3]; // 803ECAA0
  c->r[3]=c->r[31]|c->r[31]; // 803ECAA4
  c->r[5]=c->r[30]+0x000000B4u; // 803ECAA8
  c->lr=0x803ECAB0u; f_80403D44(c); // 803ECAAC
  c->r[3]=c->r[31]|c->r[31]; // 803ECAB0
  c->r[5]=c->r[30]+0x000000D4u; // 803ECAB4
  c->r[4]=0u+0x00000052u; // 803ECAB8
  c->lr=0x803ECAC0u; f_80403D44(c); // 803ECABC
  c->r[3]=c->r[31]|c->r[31]; // 803ECAC0
  c->r[5]=c->r[30]+0x000000F4u; // 803ECAC4
  c->r[4]=0u+0x00000053u; // 803ECAC8
  c->lr=0x803ECAD0u; f_80403D44(c); // 803ECACC
  c->r[3]=c->r[31]|c->r[31]; // 803ECAD0
  c->r[5]=c->r[30]+0x00000114u; // 803ECAD4
  c->r[4]=0u+0x00000054u; // 803ECAD8
  c->lr=0x803ECAE0u; f_80403D44(c); // 803ECADC
  c->r[3]=c->r[31]|c->r[31]; // 803ECAE0
  c->r[5]=c->r[30]+0x0000013Cu; // 803ECAE4
  c->r[4]=0u+0x00000055u; // 803ECAE8
  c->lr=0x803ECAF0u; f_80403D44(c); // 803ECAEC
  c->r[3]=c->r[31]|c->r[31]; // 803ECAF0
  c->r[5]=c->r[30]+0x0000015Cu; // 803ECAF4
  c->r[4]=0u+0x00000056u; // 803ECAF8
  c->lr=0x803ECB00u; f_80403D44(c); // 803ECAFC
  c->r[3]=c->r[31]|c->r[31]; // 803ECB00
  c->r[5]=c->r[30]+0x0000017Cu; // 803ECB04
  c->r[4]=0u+0x00000057u; // 803ECB08
  c->lr=0x803ECB10u; f_80403D44(c); // 803ECB0C
  c->r[3]=c->r[31]|c->r[31]; // 803ECB10
  c->r[5]=c->r[30]+0x0000019Cu; // 803ECB14
  c->r[4]=0u+0x00000058u; // 803ECB18
  c->lr=0x803ECB20u; f_80403D44(c); // 803ECB1C
  c->r[3]=c->r[31]|c->r[31]; // 803ECB20
  c->r[5]=c->r[30]+0x000001C4u; // 803ECB24
  c->r[4]=0u+0x00000059u; // 803ECB28
  c->lr=0x803ECB30u; f_80403D44(c); // 803ECB2C
  c->r[3]=c->r[31]|c->r[31]; // 803ECB30
  c->r[5]=c->r[30]+0x000001E4u; // 803ECB34
  c->r[4]=0u+0x0000005Au; // 803ECB38
  c->lr=0x803ECB40u; f_80403D44(c); // 803ECB3C
  c->r[3]=c->r[31]|c->r[31]; // 803ECB40
  c->r[5]=c->r[30]+0x00000204u; // 803ECB44
  c->r[4]=0u+0x0000005Bu; // 803ECB48
  c->lr=0x803ECB50u; f_80403D44(c); // 803ECB4C
  c->r[3]=c->r[31]|c->r[31]; // 803ECB50
  c->r[5]=c->r[30]+0x00000224u; // 803ECB54
  c->r[4]=0u+0x0000005Cu; // 803ECB58
  c->lr=0x803ECB60u; f_80403D44(c); // 803ECB5C
  c->r[5]=R32(c->r[30]+0x000000A0u); // 803ECB60
  c->r[3]=c->r[31]|c->r[31]; // 803ECB64
  c->r[4]=0u+0x0000005Du; // 803ECB68
  c->lr=0x803ECB70u; f_80403B54(c); // 803ECB6C
  c->r[5]=R32(c->r[30]+0x000000A4u); // 803ECB70
  c->r[3]=c->r[31]|c->r[31]; // 803ECB74
  c->r[4]=0u+0x0000005Eu; // 803ECB78
  c->lr=0x803ECB80u; f_80403B54(c); // 803ECB7C
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ECB80
  c->r[3]=c->r[31]|c->r[31]; // 803ECB84
  c->r[4]=0u+0x0000005Fu; // 803ECB88
  c->lr=0x803ECB90u; f_80403BC4(c); // 803ECB8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ECB90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ECB94
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ECB98
  c->lr=c->r[0]; // 803ECB9C
  c->r[1]=c->r[1]+0x00000010u; // 803ECBA0
  return; // 803ECBA4
}

// fn_803ECBA8
void f_803ECBA8(Ctx* __restrict c) {
  trace_call(0x803ECBA8u);
  c->r[3]=0u+0x80470000u; // 803ECBA8
  c->r[3]=c->r[3]+0xFFFF9958u; // 803ECBAC
  return; // 803ECBB0
}

// fn_803ECBB4
void f_803ECBB4(Ctx* __restrict c) {
  trace_call(0x803ECBB4u);
  c->r[3]=c->r[13]+0xFFFFDEDCu; // 803ECBB4
  return; // 803ECBB8
}

// fn_803ECBBC
void f_803ECBBC(Ctx* __restrict c) {
  trace_call(0x803ECBBCu);
  {uint32_t ea=c->r[1]+0xFFFFFBC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ECBBC
  c->r[0]=c->lr; // 803ECBC0
  W32(c->r[1]+0x00000444u,c->r[0]); // 803ECBC4
  c->r[11]=c->r[1]+0x00000440u; // 803ECBC8
  c->lr=0x803ECBD0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ECBCC
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803ECBD0
  c->r[31]=0u+0x00000000u; // 803ECBD4
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ECBD8
  c->r[0]=0u+0x00000001u; // 803ECBDC
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ECBE0
  c->r[29]=c->r[3]|c->r[3]; // 803ECBE4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803ECBE8
  c->r[30]=c->r[4]|c->r[4]; // 803ECBEC
  c->r[28]=0u+0x00000000u; // 803ECBF0
  c->r[27]=0u+0x00000000u; // 803ECBF4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803ECBF8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803ECBFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803ECC00
  W32(c->r[1]+0x00000020u,c->r[31]); // 803ECC04
  W32(c->r[1]+0x00000028u,c->r[31]); // 803ECC08
  W32(c->r[1]+0x00000030u,c->r[31]); // 803ECC0C
  W32(c->r[1]+0x00000034u,c->r[31]); // 803ECC10
  W32(c->r[3]+0x0000009Cu,c->r[31]); // 803ECC14
  W32(c->r[3]+0x000000A0u,c->r[31]); // 803ECC18
  W32(c->r[3]+0x000000A4u,c->r[0]); // 803ECC1C
  W32(c->r[3]+0x000000A8u,c->r[31]); // 803ECC20
  W32(c->r[3]+0x000000ACu,c->r[31]); // 803ECC24
  W32(c->r[3]+0x000000B0u,c->r[0]); // 803ECC28
  W32(c->r[3]+0x000000B4u,c->r[31]); // 803ECC2C
  W32(c->r[3]+0x000000B8u,c->r[31]); // 803ECC30
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803ECC34
  W32(c->r[3]+0x000000C0u,c->r[31]); // 803ECC38
  W32(c->r[3]+0x000000C4u,c->r[31]); // 803ECC3C
  W32(c->r[3]+0x000000C8u,c->r[0]); // 803ECC40
  W32(c->r[3]+0x000000CCu,c->r[31]); // 803ECC44
  W32(c->r[3]+0x000000D0u,c->r[31]); // 803ECC48
  W32(c->r[3]+0x000000D4u,c->r[0]); // 803ECC4C
  W32(c->r[3]+0x000000D8u,c->r[31]); // 803ECC50
  W32(c->r[3]+0x000000DCu,c->r[31]); // 803ECC54
  W32(c->r[3]+0x000000E0u,c->r[0]); // 803ECC58
  W32(c->r[3]+0x000000E4u,c->r[31]); // 803ECC5C
  W32(c->r[3]+0x000000E8u,c->r[31]); // 803ECC60
  W32(c->r[3]+0x000000ECu,c->r[0]); // 803ECC64
  W32(c->r[3]+0x000000F0u,c->r[31]); // 803ECC68
  W32(c->r[3]+0x000000F4u,c->r[31]); // 803ECC6C
  W32(c->r[3]+0x000000F8u,c->r[0]); // 803ECC70
  W32(c->r[3]+0x000000FCu,c->r[31]); // 803ECC74
  W32(c->r[3]+0x00000100u,c->r[31]); // 803ECC78
  W32(c->r[3]+0x00000104u,c->r[0]); // 803ECC7C
  W32(c->r[3]+0x00000108u,c->r[31]); // 803ECC80
  W32(c->r[3]+0x0000010Cu,c->r[31]); // 803ECC84
  W32(c->r[3]+0x00000110u,c->r[0]); // 803ECC88
  W32(c->r[3]+0x00000114u,c->r[31]); // 803ECC8C
L_803ECC90:;
  c->r[3]=c->r[30]|c->r[30]; // 803ECC90
  c->r[4]=c->r[1]+0x00000008u; // 803ECC94
  c->r[5]=c->r[1]+0x00000010u; // 803ECC98
  c->r[6]=c->r[1]+0x0000000Cu; // 803ECC9C
  c->r[7]=c->r[1]+0x00000038u; // 803ECCA0
  c->r[8]=c->r[1]+0x00000018u; // 803ECCA4
  c->r[9]=0u+0x000003E8u; // 803ECCA8
  c->lr=0x803ECCB0u; f_80403308(c); // 803ECCAC
  c->r[0]=R32(c->r[1]+0x00000008u); // 803ECCB0
  cmps(c,0,(int32_t)c->r[0],96); // 803ECCB4
  if (crb(c,2)) { goto L_803ECCF0; } // 803ECCB8
  cmps(c,0,(int32_t)c->r[0],52); // 803ECCBC
  if (crb(c,2)) { goto L_803ECCFC; } // 803ECCC0
  cmps(c,0,(int32_t)c->r[0],97); // 803ECCC4
  if (crb(c,2)) { goto L_803ECD18; } // 803ECCC8
  cmps(c,0,(int32_t)c->r[0],58); // 803ECCCC
  if (crb(c,2)) { goto L_803ECD2C; } // 803ECCD0
  cmps(c,0,(int32_t)c->r[0],98); // 803ECCD4
  if (crb(c,2)) { goto L_803ECD40; } // 803ECCD8
  cmps(c,0,(int32_t)c->r[0],99); // 803ECCDC
  if (crb(c,2)) { goto L_803ECD60; } // 803ECCE0
  cmps(c,0,(int32_t)c->r[0],197); // 803ECCE4
  if (crb(c,2)) { goto L_803ECD6C; } // 803ECCE8
  goto L_803ECD80; // 803ECCEC
L_803ECCF0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ECCF0
  W32(c->r[29]+0x00000098u,c->r[0]); // 803ECCF4
  goto L_803ECD80; // 803ECCF8
L_803ECCFC:;
  c->r[5]=c->r[29]+c->r[28]; // 803ECCFC
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ECD00
  c->r[3]=c->r[30]|c->r[30]; // 803ECD04
  c->r[28]=c->r[28]+0x0000000Cu; // 803ECD08
  c->r[5]=c->r[5]+0x0000009Cu; // 803ECD0C
  c->lr=0x803ECD14u; f_804039AC(c); // 803ECD10
  goto L_803ECD80; // 803ECD14
L_803ECD18:;
  c->r[3]=c->r[29]+c->r[31]; // 803ECD18
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ECD1C
  W32(c->r[3]+0x000000A0u,c->r[0]); // 803ECD20
  c->r[31]=c->r[31]+0x0000000Cu; // 803ECD24
  goto L_803ECD80; // 803ECD28
L_803ECD2C:;
  c->r[3]=c->r[29]+c->r[27]; // 803ECD2C
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ECD30
  W32(c->r[3]+0x000000A4u,c->r[0]); // 803ECD34
  c->r[27]=c->r[27]+0x0000000Cu; // 803ECD38
  goto L_803ECD80; // 803ECD3C
L_803ECD40:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ECD40
  c->r[0]=R32(c->r[29]+0x00000060u); // 803ECD44
  c->r[3]=0u-c->r[4]; // 803ECD48
  c->r[3]=c->r[3]|c->r[4]; // 803ECD4C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 803ECD50
  c->r[0]=c->r[0]|c->r[3]; // 803ECD54
  W32(c->r[29]+0x00000060u,c->r[0]); // 803ECD58
  goto L_803ECD80; // 803ECD5C
L_803ECD60:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ECD60
  W32(c->r[29]+0x00000064u,c->r[0]); // 803ECD64
  goto L_803ECD80; // 803ECD68
L_803ECD6C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 803ECD6C
  c->r[0]=0u-c->r[3]; // 803ECD70
  c->r[0]=c->r[0]|c->r[3]; // 803ECD74
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803ECD78
  W32(c->r[29]+0x00000114u,c->r[0]); // 803ECD7C
L_803ECD80:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803ECD80
  cmps(c,0,(int32_t)c->r[0],6); // 803ECD84
  if (!crb(c,2)) { IRQCHK(c); goto L_803ECC90; } // 803ECD88
  c->r[11]=c->r[1]+0x00000440u; // 803ECD8C
  c->r[3]=0u+0x00000001u; // 803ECD90
  c->lr=0x803ECD98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803ECD94
  c->r[0]=R32(c->r[1]+0x00000444u); // 803ECD98
  c->lr=c->r[0]; // 803ECD9C
  c->r[1]=c->r[1]+0x00000440u; // 803ECDA0
  return; // 803ECDA4
}

// fn_803ECDA8
void f_803ECDA8(Ctx* __restrict c) {
  trace_call(0x803ECDA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ECDA8
  c->r[0]=c->lr; // 803ECDAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ECDB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803ECDB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803ECDB8
  c->r[30]=0u+0x00000000u; // 803ECDBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803ECDC0
  c->r[29]=0u+0x00000000u; // 803ECDC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803ECDC8
  c->r[28]=c->r[3]|c->r[3]; // 803ECDCC
  c->r[31]=c->r[28]|c->r[28]; // 803ECDD0
  goto L_803ECE00; // 803ECDD4
L_803ECDD8:;
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 803ECDD8
  cmps(c,0,(int32_t)c->r[3],0); // 803ECDDC
  if (crb(c,2)) { goto L_803ECDF8; } // 803ECDE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ECDE4
  c->r[12]=R32(c->r[12]+0x00000034u); // 803ECDE8
  c->ctr=c->r[12]; // 803ECDEC
  if (true) { c->lr=0x803ECDF4u; dispatch(c,c->ctr); } // 803ECDF0
  c->r[30]=c->r[30]|c->r[3]; // 803ECDF4
L_803ECDF8:;
  c->r[31]=c->r[31]+0x0000000Cu; // 803ECDF8
  c->r[29]=c->r[29]+0x00000001u; // 803ECDFC
L_803ECE00:;
  c->r[0]=R32(c->r[28]+0x00000098u); // 803ECE00
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803ECE04
  if (crb(c,0)) { IRQCHK(c); goto L_803ECDD8; } // 803ECE08
  c->r[0]=R32(c->r[28]+0x00000068u); // 803ECE0C
  c->r[3]=c->r[0]|c->r[30]; // 803ECE10
  W32(c->r[28]+0x00000068u,c->r[3]); // 803ECE14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803ECE18
  c->r[30]=R32(c->r[1]+0x00000018u); // 803ECE1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803ECE20
  c->r[28]=R32(c->r[1]+0x00000010u); // 803ECE24
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ECE28
  c->lr=c->r[0]; // 803ECE2C
  c->r[1]=c->r[1]+0x00000020u; // 803ECE30
  return; // 803ECE34
}

// fn_803ECE38
void f_803ECE38(Ctx* __restrict c) {
  trace_call(0x803ECE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ECE38
  c->r[0]=c->lr; // 803ECE3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ECE40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803ECE44
  W32(c->r[1]+0x00000018u,c->r[30]); // 803ECE48
  W32(c->r[1]+0x00000014u,c->r[29]); // 803ECE4C
  c->r[29]=c->r[4]|c->r[4]; // 803ECE50
  c->r[4]=0u+0x00000060u; // 803ECE54
  W32(c->r[1]+0x00000010u,c->r[28]); // 803ECE58
  c->r[28]=c->r[3]|c->r[3]; // 803ECE5C
  c->r[5]=R32(c->r[3]+0x00000098u); // 803ECE60
  c->r[3]=c->r[29]|c->r[29]; // 803ECE64
  c->lr=0x803ECE6Cu; f_80403B54(c); // 803ECE68
  c->r[0]=R32(c->r[28]+0x00000060u); // 803ECE6C
  c->r[3]=c->r[29]|c->r[29]; // 803ECE70
  c->r[4]=0u+0x00000062u; // 803ECE74
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 803ECE78
  c->lr=0x803ECE80u; f_80403B54(c); // 803ECE7C
  c->r[5]=R32(c->r[28]+0x00000064u); // 803ECE80
  c->r[3]=c->r[29]|c->r[29]; // 803ECE84
  c->r[4]=0u+0x00000063u; // 803ECE88
  c->lr=0x803ECE90u; f_80403B54(c); // 803ECE8C
  c->r[5]=R32(c->r[28]+0x00000114u); // 803ECE90
  c->r[3]=c->r[29]|c->r[29]; // 803ECE94
  c->r[4]=0u+0x000000C5u; // 803ECE98
  c->r[0]=0u-c->r[5]; // 803ECE9C
  c->r[0]=c->r[0]|c->r[5]; // 803ECEA0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 803ECEA4
  c->lr=0x803ECEACu; f_80403B54(c); // 803ECEA8
  c->r[31]=c->r[28]|c->r[28]; // 803ECEAC
  c->r[30]=0u+0x00000000u; // 803ECEB0
  goto L_803ECEF0; // 803ECEB4
L_803ECEB8:;
  c->r[5]=R32(c->r[31]+0x0000009Cu); // 803ECEB8
  c->r[3]=c->r[29]|c->r[29]; // 803ECEBC
  c->r[4]=0u+0x00000034u; // 803ECEC0
  c->lr=0x803ECEC8u; f_80403CA4(c); // 803ECEC4
  c->r[5]=R32(c->r[31]+0x000000A0u); // 803ECEC8
  c->r[3]=c->r[29]|c->r[29]; // 803ECECC
  c->r[4]=0u+0x00000061u; // 803ECED0
  c->lr=0x803ECED8u; f_80403B54(c); // 803ECED4
  c->r[5]=R32(c->r[31]+0x000000A4u); // 803ECED8
  c->r[3]=c->r[29]|c->r[29]; // 803ECEDC
  c->r[4]=0u+0x0000003Au; // 803ECEE0
  c->lr=0x803ECEE8u; f_80403B54(c); // 803ECEE4
  c->r[31]=c->r[31]+0x0000000Cu; // 803ECEE8
  c->r[30]=c->r[30]+0x00000001u; // 803ECEEC
L_803ECEF0:;
  c->r[0]=R32(c->r[28]+0x00000098u); // 803ECEF0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803ECEF4
  if (crb(c,0)) { IRQCHK(c); goto L_803ECEB8; } // 803ECEF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ECEFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803ECF00
  c->r[30]=R32(c->r[1]+0x00000018u); // 803ECF04
  c->r[29]=R32(c->r[1]+0x00000014u); // 803ECF08
  c->r[28]=R32(c->r[1]+0x00000010u); // 803ECF0C
  c->lr=c->r[0]; // 803ECF10
  c->r[1]=c->r[1]+0x00000020u; // 803ECF14
  return; // 803ECF18
}

// fn_803ECF1C
void f_803ECF1C(Ctx* __restrict c) {
  trace_call(0x803ECF1Cu);
  {uint32_t ea=c->r[2]+0xFFFFA828u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ECF1C
  c->r[0]=0u+0x00000000u; // 803ECF20
  c->r[3]=0u+0x80570000u; // 803ECF24
  W16(c->r[4]+0x000000A6u,c->r[0]); // 803ECF28
  c->r[3]=c->r[3]+0x000041A8u; // 803ECF2C
  W32(c->r[4]+0x000000A8u,c->r[0]); // 803ECF30
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803ECF34
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ECF38
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[0]);} // 803ECF3C
  return; // 803ECF40
}

// fn_803ECF44
void f_803ECF44(Ctx* __restrict c) {
  trace_call(0x803ECF44u);
  c->r[0]=R32(c->r[3]+0x00000114u); // 803ECF44
  cmps(c,0,(int32_t)c->r[0],0); // 803ECF48
  if (crb(c,2)) return; // 803ECF4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ECF50
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803ECF54
  c->ctr=c->r[12]; // 803ECF58
  if (true) { dispatch(c,c->ctr); return; } // 803ECF5C
  return; // 803ECF60
}

// fn_803ECF64
void f_803ECF64(Ctx* __restrict c) {
  trace_call(0x803ECF64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ECF64
  c->r[0]=c->lr; // 803ECF68
  {uint32_t ea=c->r[2]+0xFFFFA830u; c->f[0]=RF64(ea);} // 803ECF6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ECF70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803ECF74
  W32(c->r[1]+0x00000018u,c->r[30]); // 803ECF78
  c->r[30]=c->r[4]|c->r[4]; // 803ECF7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803ECF80
  c->r[29]=c->r[3]|c->r[3]; // 803ECF84
  W32(c->r[1]+0x00000010u,c->r[28]); // 803ECF88
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803ECF8C
  fcmp(c,0,c->f[1],c->f[0]); // 803ECF90
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803ECF94
  if (!crb(c,2)) { goto L_803ECFA4; } // 803ECF98
  c->r[3]=0u+0x00000001u; // 803ECF9C
  goto L_803ED1A8; // 803ECFA0
L_803ECFA4:;
  c->r[31]=0u+0x80570000u; // 803ECFA4
  c->r[3]=c->r[31]+0x000041A8u; // 803ECFA8
  c->r[0]=R32(c->r[3]+0x00000014u); // 803ECFAC
  cmps(c,0,(int32_t)c->r[0],0); // 803ECFB0
  if (crb(c,2)) { goto L_803ED1A4; } // 803ECFB4
  goto L_803ED15C; // 803ECFB8
L_803ECFBC:;
  c->r[28]=R32(c->r[5]+0x0000009Cu); // 803ECFBC
  goto L_803ECFDC; // 803ECFC0
L_803ECFC4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 803ECFC4
  c->r[3]=c->r[28]|c->r[28]; // 803ECFC8
  c->r[12]=R32(c->r[12]+0x00000064u); // 803ECFCC
  c->ctr=c->r[12]; // 803ECFD0
  if (true) { c->lr=0x803ECFD8u; dispatch(c,c->ctr); } // 803ECFD4
  c->r[28]=c->r[3]|c->r[3]; // 803ECFD8
L_803ECFDC:;
  cmps(c,0,(int32_t)c->r[28],0); // 803ECFDC
  if (crb(c,2)) { goto L_803ED000; } // 803ECFE0
  c->r[12]=R32(c->r[28]+0x00000000u); // 803ECFE4
  c->r[3]=c->r[28]|c->r[28]; // 803ECFE8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803ECFEC
  c->ctr=c->r[12]; // 803ECFF0
  if (true) { c->lr=0x803ECFF8u; dispatch(c,c->ctr); } // 803ECFF4
  cmps(c,0,(int32_t)c->r[3],4); // 803ECFF8
  if (crb(c,2)) { IRQCHK(c); goto L_803ECFC4; } // 803ECFFC
L_803ED000:;
  cmps(c,0,(int32_t)c->r[28],0); // 803ED000
  if (crb(c,2)) { goto L_803ED150; } // 803ED004
  c->r[0]=R32(c->r[28]+0x00000068u); // 803ED008
  cmps(c,0,(int32_t)c->r[0],0); // 803ED00C
  if (crb(c,2)) { goto L_803ED03C; } // 803ED010
  c->r[5]=c->r[30]|c->r[30]; // 803ED014
  goto L_803ED034; // 803ED018
L_803ED01C:;
  c->r[4]=R32(c->r[5]+0x0000006Cu); // 803ED01C
  c->r[0]=R32(c->r[28]+0x00000068u); // 803ED020
  c->r[3]=R32(c->r[4]+0x00000068u); // 803ED024
  c->r[0]=c->r[3]|c->r[0]; // 803ED028
  W32(c->r[4]+0x00000068u,c->r[0]); // 803ED02C
  c->r[5]=R32(c->r[5]+0x00000078u); // 803ED030
L_803ED034:;
  cmps(c,0,(int32_t)c->r[5],0); // 803ED034
  if (!crb(c,2)) { IRQCHK(c); goto L_803ED01C; } // 803ED038
L_803ED03C:;
  c->r[7]=R32(c->r[30]+0x00000068u); // 803ED03C
  cmps(c,0,(int32_t)c->r[7],0); // 803ED040
  if (crb(c,2)) { goto L_803ED084; } // 803ED044
  c->r[4]=c->r[28]|c->r[28]; // 803ED048
  c->r[3]=c->r[31]+0x000041A8u; // 803ED04C
  c->r[5]=c->r[30]+0x00000038u; // 803ED050
  c->r[6]=0u+0x00000000u; // 803ED054
  if (crb(c,2)) { goto L_803ED070; } // 803ED058
  c->r[0]=R16(c->r[7]+0x000000CEu); // 803ED05C
  c->r[0]=c->r[0]|0x00000001u; // 803ED060
  cmps(c,0,(int32_t)c->r[0],0); // 803ED064
  if (crb(c,2)) { goto L_803ED070; } // 803ED068
  c->r[6]=0u+0x00000001u; // 803ED06C
L_803ED070:;
  c->r[8]=R32(c->r[30]+0x00000120u); // 803ED070
  c->r[7]=c->r[30]|c->r[30]; // 803ED074
  c->lr=0x803ED07Cu; f_803FD27C(c); // 803ED078
  c->r[28]=c->r[3]|c->r[3]; // 803ED07C
  goto L_803ED0B8; // 803ED080
L_803ED084:;
  c->r[4]=c->r[28]|c->r[28]; // 803ED084
  c->r[3]=c->r[31]+0x000041A8u; // 803ED088
  c->r[5]=0u+0x00000000u; // 803ED08C
  if (crb(c,2)) { goto L_803ED0A8; } // 803ED090
  c->r[0]=R16(c->r[7]+0x000000CEu); // 803ED094
  c->r[0]=c->r[0]|0x00000001u; // 803ED098
  cmps(c,0,(int32_t)c->r[0],0); // 803ED09C
  if (crb(c,2)) { goto L_803ED0A8; } // 803ED0A0
  c->r[5]=0u+0x00000001u; // 803ED0A4
L_803ED0A8:;
  c->r[7]=R32(c->r[30]+0x00000120u); // 803ED0A8
  c->r[6]=c->r[30]|c->r[30]; // 803ED0AC
  c->lr=0x803ED0B4u; f_803FCA34(c); // 803ED0B0
  c->r[28]=c->r[3]|c->r[3]; // 803ED0B4
L_803ED0B8:;
  cmps(c,0,(int32_t)c->r[28],0); // 803ED0B8
  if (crb(c,2)) { goto L_803ED150; } // 803ED0BC
  c->r[0]=R32(c->r[30]+0x000000A8u); // 803ED0C0
  c->r[3]=c->r[29]|c->r[29]; // 803ED0C4
  c->r[5]=R32(c->r[30]+0x00000068u); // 803ED0C8
  c->r[4]=c->r[28]|c->r[28]; // 803ED0CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803ED0D0
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED0D4
  c->r[6]=c->r[29]+c->r[0]; // 803ED0D8
  c->r[6]=R32(c->r[6]+0x000000A4u); // 803ED0DC
  c->lr=0x803ED0E4u; f_803E7448(c); // 803ED0E0
  {uint32_t ea=c->r[28]+0x00000048u; psq_load(c,0,ea,0,0);} // 803ED0E4
  {uint32_t ea=c->r[30]+0x00000048u; psq_load(c,2,ea,0,0);} // 803ED0E8
  {uint32_t ea=c->r[28]+0x00000050u; psq_load(c,1,ea,0,0);} // 803ED0EC
  {uint32_t ea=c->r[30]+0x00000050u; psq_load(c,3,ea,0,0);} // 803ED0F0
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803ED0F4
  {uint32_t ea=c->r[28]+0x00000048u; psq_store(c,0,ea,0,0);} // 803ED0F8
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 803ED0FC
  {uint32_t ea=c->r[28]+0x00000050u; WF32(ea,c->f[0]);} // 803ED100
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 803ED104
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ED108
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803ED10C
  c->ctr=c->r[12]; // 803ED110
  if (true) { c->lr=0x803ED118u; dispatch(c,c->ctr); } // 803ED114
  cmps(c,0,(int32_t)c->r[3],1); // 803ED118
  if (!crb(c,2)) { goto L_803ED12C; } // 803ED11C
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 803ED120
  c->r[4]=c->r[28]|c->r[28]; // 803ED124
  c->lr=0x803ED12Cu; f_803EC150(c); // 803ED128
L_803ED12C:;
  c->r[4]=c->r[28]|c->r[28]; // 803ED12C
  c->r[3]=c->r[31]+0x000041A8u; // 803ED130
  c->lr=0x803ED138u; f_803FD4F8(c); // 803ED134
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 803ED138
  c->r[4]=c->r[28]|c->r[28]; // 803ED13C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ED140
  c->r[12]=R32(c->r[12]+0x00000060u); // 803ED144
  c->ctr=c->r[12]; // 803ED148
  if (true) { c->lr=0x803ED150u; dispatch(c,c->ctr); } // 803ED14C
L_803ED150:;
  c->r[3]=R32(c->r[30]+0x000000A8u); // 803ED150
  c->r[0]=c->r[3]+0x00000001u; // 803ED154
  W32(c->r[30]+0x000000A8u,c->r[0]); // 803ED158
L_803ED15C:;
  c->r[4]=R32(c->r[30]+0x000000A8u); // 803ED15C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000000A6u); // 803ED160
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 803ED164
  c->r[5]=c->r[29]+c->r[0]; // 803ED168
  c->r[0]=R32(c->r[5]+0x000000A0u); // 803ED16C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803ED170
  if (!crb(c,2)) { goto L_803ED184; } // 803ED174
  c->r[0]=R32(c->r[29]+0x00000098u); // 803ED178
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803ED17C
  if (crb(c,0)) { IRQCHK(c); goto L_803ECFBC; } // 803ED180
L_803ED184:;
  c->r[0]=R32(c->r[29]+0x00000098u); // 803ED184
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803ED188
  if (crb(c,0)) { goto L_803ED198; } // 803ED18C
  c->r[3]=0u+0x00000001u; // 803ED190
  goto L_803ED1A8; // 803ED194
L_803ED198:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000000A6u); // 803ED198
  c->r[0]=c->r[3]+0x00000001u; // 803ED19C
  W16(c->r[30]+0x000000A6u,c->r[0]); // 803ED1A0
L_803ED1A4:;
  c->r[3]=0u+0x00000000u; // 803ED1A4
L_803ED1A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ED1A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803ED1AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803ED1B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803ED1B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 803ED1B8
  c->lr=c->r[0]; // 803ED1BC
  c->r[1]=c->r[1]+0x00000020u; // 803ED1C0
  return; // 803ED1C4
}

// fn_803ED1C8
void f_803ED1C8(Ctx* __restrict c) {
  trace_call(0x803ED1C8u);
  c->r[3]=c->r[13]+0xFFFFDEE4u; // 803ED1C8
  return; // 803ED1CC
}

// fn_803ED1D0
void f_803ED1D0(Ctx* __restrict c) {
  trace_call(0x803ED1D0u);
  c->r[3]=c->r[13]+0xFFFFDEECu; // 803ED1D0
  return; // 803ED1D4
}

// fn_803ED1D8
void f_803ED1D8(Ctx* __restrict c) {
  trace_call(0x803ED1D8u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ED1D8
  c->r[0]=c->lr; // 803ED1DC
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803ED1E0
  W32(c->r[1]+0x00000434u,c->r[0]); // 803ED1E4
  c->r[0]=0u+0x00000000u; // 803ED1E8
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED1EC
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803ED1F0
  c->r[31]=c->r[4]|c->r[4]; // 803ED1F4
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED1F8
  W32(c->r[1]+0x00000428u,c->r[30]); // 803ED1FC
  c->r[30]=c->r[3]|c->r[3]; // 803ED200
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803ED204
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803ED208
  W32(c->r[1]+0x00000020u,c->r[0]); // 803ED20C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803ED210
  W32(c->r[1]+0x00000028u,c->r[0]); // 803ED214
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803ED218
  W32(c->r[1]+0x00000030u,c->r[0]); // 803ED21C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803ED220
L_803ED224:;
  c->r[3]=c->r[31]|c->r[31]; // 803ED224
  c->r[4]=c->r[1]+0x00000008u; // 803ED228
  c->r[5]=c->r[1]+0x00000010u; // 803ED22C
  c->r[6]=c->r[1]+0x0000000Cu; // 803ED230
  c->r[7]=c->r[1]+0x00000038u; // 803ED234
  c->r[8]=c->r[1]+0x00000018u; // 803ED238
  c->r[9]=0u+0x000003E8u; // 803ED23C
  c->lr=0x803ED244u; f_80403308(c); // 803ED240
  c->r[0]=R32(c->r[1]+0x00000008u); // 803ED244
  cmps(c,0,(int32_t)c->r[0],105); // 803ED248
  if (crb(c,2)) { goto L_803ED308; } // 803ED24C
  if (!crb(c,0)) { goto L_803ED288; } // 803ED250
  cmps(c,0,(int32_t)c->r[0],101); // 803ED254
  if (crb(c,2)) { goto L_803ED2C0; } // 803ED258
  if (!crb(c,0)) { goto L_803ED278; } // 803ED25C
  cmps(c,0,(int32_t)c->r[0],7); // 803ED260
  if (crb(c,2)) { goto L_803ED2E4; } // 803ED264
  if (crb(c,0)) { goto L_803ED370; } // 803ED268
  cmps(c,0,(int32_t)c->r[0],100); // 803ED26C
  if (!crb(c,0)) { goto L_803ED2B4; } // 803ED270
  goto L_803ED370; // 803ED274
L_803ED278:;
  cmps(c,0,(int32_t)c->r[0],103); // 803ED278
  if (crb(c,2)) { goto L_803ED2D8; } // 803ED27C
  if (!crb(c,0)) { goto L_803ED2FC; } // 803ED280
  goto L_803ED2CC; // 803ED284
L_803ED288:;
  cmps(c,0,(int32_t)c->r[0],143); // 803ED288
  if (crb(c,2)) { goto L_803ED32C; } // 803ED28C
  if (!crb(c,0)) { goto L_803ED2A4; } // 803ED290
  cmps(c,0,(int32_t)c->r[0],107); // 803ED294
  if (crb(c,2)) { goto L_803ED320; } // 803ED298
  if (!crb(c,0)) { goto L_803ED370; } // 803ED29C
  goto L_803ED314; // 803ED2A0
L_803ED2A4:;
  cmps(c,0,(int32_t)c->r[0],145); // 803ED2A4
  if (crb(c,2)) { goto L_803ED35C; } // 803ED2A8
  if (!crb(c,0)) { goto L_803ED370; } // 803ED2AC
  goto L_803ED344; // 803ED2B0
L_803ED2B4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ED2B4
  W32(c->r[30]+0x00000098u,c->r[0]); // 803ED2B8
  goto L_803ED370; // 803ED2BC
L_803ED2C0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ED2C0
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 803ED2C4
  goto L_803ED370; // 803ED2C8
L_803ED2CC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ED2CC
  W32(c->r[30]+0x000000A0u,c->r[0]); // 803ED2D0
  goto L_803ED370; // 803ED2D4
L_803ED2D8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ED2D8
  W32(c->r[30]+0x000000A4u,c->r[0]); // 803ED2DC
  goto L_803ED370; // 803ED2E0
L_803ED2E4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ED2E4
  c->r[3]=c->r[31]|c->r[31]; // 803ED2E8
  c->r[5]=c->r[1]+0x00000018u; // 803ED2EC
  c->r[6]=c->r[30]+0x000000A8u; // 803ED2F0
  c->lr=0x803ED2F8u; f_804039BC(c); // 803ED2F4
  goto L_803ED370; // 803ED2F8
L_803ED2FC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ED2FC
  W32(c->r[30]+0x000000C8u,c->r[0]); // 803ED300
  goto L_803ED370; // 803ED304
L_803ED308:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED308
  {uint32_t ea=c->r[30]+0x000000CCu; WF32(ea,c->f[0]);} // 803ED30C
  goto L_803ED370; // 803ED310
L_803ED314:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED314
  {uint32_t ea=c->r[30]+0x000000D0u; WF32(ea,c->f[0]);} // 803ED318
  goto L_803ED370; // 803ED31C
L_803ED320:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED320
  {uint32_t ea=c->r[30]+0x000000D4u; WF32(ea,c->f[0]);} // 803ED324
  goto L_803ED370; // 803ED328
L_803ED32C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ED32C
  c->r[3]=c->r[31]|c->r[31]; // 803ED330
  c->r[5]=c->r[1]+0x00000018u; // 803ED334
  c->r[6]=c->r[30]+0x000000D8u; // 803ED338
  c->lr=0x803ED340u; f_804039BC(c); // 803ED33C
  goto L_803ED370; // 803ED340
L_803ED344:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ED344
  c->r[3]=c->r[31]|c->r[31]; // 803ED348
  c->r[5]=c->r[1]+0x00000018u; // 803ED34C
  c->r[6]=c->r[30]+0x000000F8u; // 803ED350
  c->lr=0x803ED358u; f_804039BC(c); // 803ED354
  goto L_803ED370; // 803ED358
L_803ED35C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ED35C
  c->r[3]=c->r[31]|c->r[31]; // 803ED360
  c->r[5]=c->r[1]+0x00000018u; // 803ED364
  c->r[6]=c->r[30]+0x00000118u; // 803ED368
  c->lr=0x803ED370u; f_804039BC(c); // 803ED36C
L_803ED370:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803ED370
  cmps(c,0,(int32_t)c->r[0],6); // 803ED374
  if (!crb(c,2)) { IRQCHK(c); goto L_803ED224; } // 803ED378
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803ED37C
  c->r[3]=0u+0x00000001u; // 803ED380
  c->r[30]=R32(c->r[1]+0x00000428u); // 803ED384
  c->r[0]=R32(c->r[1]+0x00000434u); // 803ED388
  c->lr=c->r[0]; // 803ED38C
  c->r[1]=c->r[1]+0x00000430u; // 803ED390
  return; // 803ED394
}

// fn_803ED398
void f_803ED398(Ctx* __restrict c) {
  trace_call(0x803ED398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ED398
  c->r[0]=c->lr; // 803ED39C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ED3A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ED3A4
  c->r[31]=c->r[4]|c->r[4]; // 803ED3A8
  c->r[4]=0u+0x00000064u; // 803ED3AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ED3B0
  c->r[30]=c->r[3]|c->r[3]; // 803ED3B4
  c->r[5]=R32(c->r[3]+0x00000098u); // 803ED3B8
  c->r[3]=c->r[31]|c->r[31]; // 803ED3BC
  c->lr=0x803ED3C4u; f_80403B54(c); // 803ED3C0
  c->r[5]=R32(c->r[30]+0x0000009Cu); // 803ED3C4
  c->r[3]=c->r[31]|c->r[31]; // 803ED3C8
  c->r[4]=0u+0x00000065u; // 803ED3CC
  c->lr=0x803ED3D4u; f_80403B54(c); // 803ED3D0
  c->r[5]=R32(c->r[30]+0x000000A0u); // 803ED3D4
  c->r[3]=c->r[31]|c->r[31]; // 803ED3D8
  c->r[4]=0u+0x00000066u; // 803ED3DC
  c->lr=0x803ED3E4u; f_80403B54(c); // 803ED3E0
  c->r[5]=R32(c->r[30]+0x000000A4u); // 803ED3E4
  c->r[3]=c->r[31]|c->r[31]; // 803ED3E8
  c->r[4]=0u+0x00000067u; // 803ED3EC
  c->lr=0x803ED3F4u; f_80403B54(c); // 803ED3F0
  c->r[3]=c->r[31]|c->r[31]; // 803ED3F4
  c->r[5]=c->r[30]+0x000000A8u; // 803ED3F8
  c->r[4]=0u+0x00000007u; // 803ED3FC
  c->lr=0x803ED404u; f_80403D44(c); // 803ED400
  c->r[5]=R32(c->r[30]+0x000000C8u); // 803ED404
  c->r[3]=c->r[31]|c->r[31]; // 803ED408
  c->r[4]=0u+0x00000068u; // 803ED40C
  c->lr=0x803ED414u; f_80403B54(c); // 803ED410
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED414
  c->r[3]=c->r[31]|c->r[31]; // 803ED418
  c->r[4]=0u+0x00000069u; // 803ED41C
  c->lr=0x803ED424u; f_80403BC4(c); // 803ED420
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED424
  c->r[3]=c->r[31]|c->r[31]; // 803ED428
  c->r[4]=0u+0x0000006Au; // 803ED42C
  c->lr=0x803ED434u; f_80403BC4(c); // 803ED430
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED434
  c->r[3]=c->r[31]|c->r[31]; // 803ED438
  c->r[4]=0u+0x0000006Bu; // 803ED43C
  c->lr=0x803ED444u; f_80403BC4(c); // 803ED440
  c->r[3]=c->r[31]|c->r[31]; // 803ED444
  c->r[5]=c->r[30]+0x000000D8u; // 803ED448
  c->r[4]=0u+0x0000008Fu; // 803ED44C
  c->lr=0x803ED454u; f_80403D44(c); // 803ED450
  c->r[3]=c->r[31]|c->r[31]; // 803ED454
  c->r[5]=c->r[30]+0x000000F8u; // 803ED458
  c->r[4]=0u+0x00000090u; // 803ED45C
  c->lr=0x803ED464u; f_80403D44(c); // 803ED460
  c->r[3]=c->r[31]|c->r[31]; // 803ED464
  c->r[5]=c->r[30]+0x00000118u; // 803ED468
  c->r[4]=0u+0x00000091u; // 803ED46C
  c->lr=0x803ED474u; f_80403D44(c); // 803ED470
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ED474
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ED478
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ED47C
  c->lr=c->r[0]; // 803ED480
  c->r[1]=c->r[1]+0x00000010u; // 803ED484
  return; // 803ED488
}

// fn_803ED48C
void f_803ED48C(Ctx* __restrict c) {
  trace_call(0x803ED48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ED48C
  c->r[0]=c->lr; // 803ED490
  W32(c->r[1]+0x00000084u,c->r[0]); // 803ED494
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 803ED498
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 803ED49C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 803ED4A0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 803ED4A4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 803ED4A8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 803ED4AC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 803ED4B0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 803ED4B4
  c->r[11]=c->r[1]+0x00000040u; // 803ED4B8
  c->lr=0x803ED4C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ED4BC
  c->f[30]=c->f[1]; // 803ED4C0
  cmps(c,0,(int32_t)c->r[6],-1); // 803ED4C4
  c->r[0]=0u+0x43300000u; // 803ED4C8
  W32(c->r[1]+0x00000018u,c->r[0]); // 803ED4CC
  c->r[30]=c->r[3]|c->r[3]; // 803ED4D0
  c->r[31]=c->r[4]|c->r[4]; // 803ED4D4
  W32(c->r[1]+0x00000020u,c->r[0]); // 803ED4D8
  c->r[27]=c->r[5]|c->r[5]; // 803ED4DC
  c->r[28]=c->r[6]|c->r[6]; // 803ED4E0
  if (!crb(c,2)) { goto L_803ED4EC; } // 803ED4E4
  c->r[28]=R32(c->r[3]+0x000000A4u); // 803ED4E8
L_803ED4EC:;
  c->r[29]=R32(c->r[3]+0x000000ACu); // 803ED4EC
  cmps(c,0,(int32_t)c->r[29],0); // 803ED4F0
  if (!crb(c,2)) { goto L_803ED500; } // 803ED4F4
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803ED4F8
  goto L_803ED644; // 803ED4FC
L_803ED500:;
  c->r[0]=R32(c->r[3]+0x000000B0u); // 803ED500
  cmps(c,0,(int32_t)c->r[0],0); // 803ED504
  if (crb(c,2)) { goto L_803ED528; } // 803ED508
  cmps(c,0,(int32_t)c->r[0],1); // 803ED50C
  if (crb(c,2)) { goto L_803ED558; } // 803ED510
  cmps(c,0,(int32_t)c->r[0],2); // 803ED514
  if (crb(c,2)) { goto L_803ED5E0; } // 803ED518
  cmps(c,0,(int32_t)c->r[0],3); // 803ED51C
  if (crb(c,2)) { goto L_803ED638; } // 803ED520
  goto L_803ED640; // 803ED524
L_803ED528:;
  c->f[1]=c->f[30]; // 803ED528
  c->r[7]=R32(c->r[29]+0x00000118u); // 803ED52C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803ED530
  c->r[9]=c->r[31]|c->r[31]; // 803ED534
  c->r[3]=c->r[29]+0x00000098u; // 803ED538
  c->r[4]=c->r[29]+0x000000B8u; // 803ED53C
  c->r[5]=c->r[29]+0x000000D8u; // 803ED540
  c->r[6]=c->r[29]+0x000000F8u; // 803ED544
  c->lr=0x803ED54Cu; f_803E5520(c); // 803ED548
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED54C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803ED550
  goto L_803ED644; // 803ED554
L_803ED558:;
  c->r[5]=0u+0x80570000u; // 803ED558
  c->r[0]=R32(c->r[3]+0x000000B8u); // 803ED55C
  c->r[5]=c->r[5]+0x000041A8u; // 803ED560
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED564
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED568
  cmps(c,0,(int32_t)c->r[0],0); // 803ED56C
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803ED570
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803ED574
  if (crb(c,2)) { goto L_803ED590; } // 803ED578
  cmps(c,0,(int32_t)c->r[4],0); // 803ED57C
  if (crb(c,2)) { goto L_803ED590; } // 803ED580
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED584
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803ED588
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803ED58C
L_803ED590:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED590
  fcmp(c,0,c->f[0],c->f[31]); // 803ED594
  if (!crb(c,2)) { goto L_803ED5A0; } // 803ED598
  goto L_803ED5B0; // 803ED59C
L_803ED5A0:;
  c->f[2]=c->f[31]; // 803ED5A0
  c->lr=0x803ED5A8u; f_803AD468(c); // 803ED5A4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803ED5A8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803ED5AC
L_803ED5B0:;
  c->f[1]=c->f[0]; // 803ED5B0
  c->r[7]=R32(c->r[29]+0x00000118u); // 803ED5B4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803ED5B8
  c->r[9]=c->r[31]|c->r[31]; // 803ED5BC
  c->r[3]=c->r[29]+0x00000098u; // 803ED5C0
  c->r[4]=c->r[29]+0x000000B8u; // 803ED5C4
  c->r[5]=c->r[29]+0x000000D8u; // 803ED5C8
  c->r[6]=c->r[29]+0x000000F8u; // 803ED5CC
  c->lr=0x803ED5D4u; f_803E5520(c); // 803ED5D0
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED5D4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803ED5D8
  goto L_803ED644; // 803ED5DC
L_803ED5E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 803ED5E0
  if (crb(c,2)) { goto L_803ED630; } // 803ED5E4
  c->r[4]=R32(c->r[4]+0x00000068u); // 803ED5E8
  cmps(c,0,(int32_t)c->r[4],0); // 803ED5EC
  if (crb(c,2)) { goto L_803ED630; } // 803ED5F0
  c->r[0]=R32(c->r[3]+0x000000C0u); // 803ED5F4
  c->r[9]=c->r[31]|c->r[31]; // 803ED5F8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803ED5FC
  c->r[3]=c->r[29]+0x00000098u; // 803ED600
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803ED604
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803ED608
  c->r[5]=c->r[4]+c->r[0]; // 803ED60C
  c->r[4]=c->r[29]+0x000000B8u; // 803ED610
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED614
  c->r[5]=c->r[29]+0x000000D8u; // 803ED618
  c->r[6]=c->r[29]+0x000000F8u; // 803ED61C
  c->lr=0x803ED624u; f_803E5520(c); // 803ED620
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED624
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803ED628
  goto L_803ED644; // 803ED62C
L_803ED630:;
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803ED630
  goto L_803ED644; // 803ED634
L_803ED638:;
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803ED638
  goto L_803ED644; // 803ED63C
L_803ED640:;
  {uint32_t ea=c->r[3]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803ED640
L_803ED644:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 803ED644
  cmps(c,0,(int32_t)c->r[0],0); // 803ED648
  if (crb(c,2)) { goto L_803ED664; } // 803ED64C
  cmps(c,0,(int32_t)c->r[0],1); // 803ED650
  if (crb(c,2)) { goto L_803ED738; } // 803ED654
  cmps(c,0,(int32_t)c->r[0],2); // 803ED658
  if (crb(c,2)) { goto L_803ED90C; } // 803ED65C
  goto L_803ED9E0; // 803ED660
L_803ED664:;
  c->r[0]=c->r[27]^0x80000000u; // 803ED664
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803ED668
  c->r[0]=c->r[28]^0x80000000u; // 803ED66C
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[3]=RF64(ea);} // 803ED670
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803ED674
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ED678
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 803ED67C
  {uint32_t ea=c->r[2]+0xFFFFA838u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED680
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 803ED684
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803ED688
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 803ED68C
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 803ED690
  c->f[1]=c->f[28]; // 803ED694
  c->lr=0x803ED69Cu; f_803AD314(c); // 803ED698
  c->f[29]=c->ps1[29]=S(c->f[1]); // 803ED69C
  c->f[1]=c->f[28]; // 803ED6A0
  c->lr=0x803ED6A8u; f_803ACF08(c); // 803ED6A4
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 803ED6A8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803ED6AC
  cmps(c,0,(int32_t)c->r[0],0); // 803ED6B0
  if (crb(c,2)) { goto L_803ED6CC; } // 803ED6B4
  cmps(c,0,(int32_t)c->r[0],1); // 803ED6B8
  if (crb(c,2)) { goto L_803ED6F0; } // 803ED6BC
  cmps(c,0,(int32_t)c->r[0],2); // 803ED6C0
  if (crb(c,2)) { goto L_803ED714; } // 803ED6C4
  goto L_803ED9E0; // 803ED6C8
L_803ED6CC:;
  c->f[0]=-c->f[0]; // 803ED6CC
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803ED6D0
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[31]); // 803ED6D4
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[2]);} // 803ED6D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803ED6DC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 803ED6E0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803ED6E4
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[2]);} // 803ED6E8
  goto L_803ED9E0; // 803ED6EC
L_803ED6F0:;
  c->f[0]=-c->f[0]; // 803ED6F0
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED6F4
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[31]); // 803ED6F8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 803ED6FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803ED700
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[2]);} // 803ED704
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803ED708
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 803ED70C
  goto L_803ED9E0; // 803ED710
L_803ED714:;
  c->f[1]=-c->f[0]; // 803ED714
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED718
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[31]); // 803ED71C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803ED720
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 803ED724
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[2]);} // 803ED728
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 803ED72C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 803ED730
  goto L_803ED9E0; // 803ED734
L_803ED738:;
  c->r[3]=0u+0x00190000u; // 803ED738
  c->r[0]=R32(c->r[13]+0xFFFFF3F8u); // 803ED73C
  c->r[4]=c->r[3]+0x0000660Du; // 803ED740
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[7]=RF64(ea);} // 803ED744
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 803ED748
  {uint32_t ea=c->r[2]+0xFFFFA7CCu; c->f[6]=c->ps1[6]=RF32(ea);} // 803ED74C
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 803ED750
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[4]=c->ps1[4]=RF32(ea);} // 803ED754
  {uint32_t ea=c->r[2]+0xFFFFA81Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED758
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[10]=c->ps1[10]=RF32(ea);} // 803ED75C
  c->r[3]=c->r[3]+0x3C6F0000u; // 803ED760
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[8]=c->ps1[8]=RF32(ea);} // 803ED764
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803ED768
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[9]=c->ps1[9]=RF32(ea);} // 803ED76C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 803ED770
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 803ED774
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803ED778
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 803ED77C
  c->r[3]=c->r[3]+0x3C6F0000u; // 803ED780
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[7]); // 803ED784
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803ED788
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 803ED78C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 803ED790
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[1]); // 803ED794
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ED798
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 803ED79C
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 803ED7A0
  c->r[3]=c->r[3]+0x3C6F0000u; // 803ED7A4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[7]); // 803ED7A8
  c->r[3]=c->r[3]+0xFFFFF35Fu; // 803ED7AC
  W32(c->r[13]+0xFFFFF3F8u,c->r[3]); // 803ED7B0
  c->r[0]=rotl(c->r[3],28)&0x0FFFFFFFu; // 803ED7B4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803ED7B8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803ED7BC
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 803ED7C0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 803ED7C4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[5]); // 803ED7C8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[10]);} // 803ED7CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[7]); // 803ED7D0
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 803ED7D4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[3]);} // 803ED7D8
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 803ED7DC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 803ED7E0
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 803ED7E4
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[5]); // 803ED7E8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 803ED7EC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 803ED7F0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[6]);} // 803ED7F4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 803ED7F8
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[2]);} // 803ED7FC
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,2,ea,0,0);} // 803ED800
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803ED804
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803ED808
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 803ED80C
  fcmp(c,0,c->f[1],c->f[0]); // 803ED810
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803ED814
  if (!crb(c,2)) { goto L_803ED820; } // 803ED818
  goto L_803ED83C; // 803ED81C
L_803ED820:;
  c->f[0]=frsqrte(c->f[1]); // 803ED820
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 803ED824
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[8]); // 803ED828
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[9])); // 803ED82C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803ED830
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[1]; // 803ED834
  c->f[10]=c->ps1[10]=S(c->f[1]*c->f[0]); // 803ED838
L_803ED83C:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED83C
  fcmp(c,0,c->f[0],c->f[10]); // 803ED840
  if (crb(c,2)) { goto L_803ED868; } // 803ED844
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED848
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 803ED84C
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[10]); // 803ED850
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED854
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803ED858
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803ED85C
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 803ED860
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803ED864
L_803ED868:;
  c->r[0]=R32(c->r[30]+0x000000C8u); // 803ED868
  cmps(c,0,(int32_t)c->r[0],0); // 803ED86C
  if (crb(c,2)) { goto L_803ED890; } // 803ED870
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 803ED874
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED878
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 803ED87C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803ED880
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 803ED884
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803ED888
  goto L_803ED8F0; // 803ED88C
L_803ED890:;
  c->r[3]=0u+0x00190000u; // 803ED890
  c->r[4]=R32(c->r[13]+0xFFFFF3F8u); // 803ED894
  c->r[0]=c->r[3]+0x0000660Du; // 803ED898
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[4]=RF64(ea);} // 803ED89C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803ED8A0
  {uint32_t ea=c->r[2]+0xFFFFA7CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803ED8A4
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED8A8
  c->r[3]=c->r[3]+0x3C6F0000u; // 803ED8AC
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803ED8B0
  W32(c->r[13]+0xFFFFF3F8u,c->r[0]); // 803ED8B4
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 803ED8B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ED8BC
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,5,ea,0,0);} // 803ED8C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=RF64(ea);} // 803ED8C4
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED8C8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803ED8CC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803ED8D0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803ED8D4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803ED8D8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 803ED8DC
  {double t0=S(c->f[5]*c->f[2]), t1=S(c->ps1[5]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803ED8E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803ED8E4
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 803ED8E8
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803ED8EC
L_803ED8F0:;
  c->r[0]=R32(c->r[30]+0x000000A0u); // 803ED8F0
  cmps(c,0,(int32_t)c->r[0],0); // 803ED8F4
  if (crb(c,2)) { goto L_803ED9E0; } // 803ED8F8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED8FC
  c->f[0]=std::fabs(c->f[0]); // 803ED900
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 803ED904
  goto L_803ED9E0; // 803ED908
L_803ED90C:;
  c->r[3]=0u+0x00190000u; // 803ED90C
  c->r[0]=R32(c->r[13]+0xFFFFF3F8u); // 803ED910
  c->r[4]=c->r[3]+0x0000660Du; // 803ED914
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[9]=RF64(ea);} // 803ED918
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 803ED91C
  {uint32_t ea=c->r[2]+0xFFFFA7CCu; c->f[8]=c->ps1[8]=RF32(ea);} // 803ED920
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[7]=c->ps1[7]=RF32(ea);} // 803ED924
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803ED928
  c->r[3]=c->r[3]+0x3C6F0000u; // 803ED92C
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803ED930
  W32(c->r[13]+0xFFFFF3F8u,c->r[0]); // 803ED934
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 803ED938
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 803ED93C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803ED940
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 803ED944
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 803ED948
  c->r[3]=c->r[3]+0x3C6F0000u; // 803ED94C
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803ED950
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[9]); // 803ED954
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 803ED958
  W32(c->r[13]+0xFFFFF3F8u,c->r[0]); // 803ED95C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 803ED960
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[1]); // 803ED964
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ED968
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 803ED96C
  c->r[3]=c->r[3]+0x3C6F0000u; // 803ED970
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 803ED974
  c->r[3]=c->r[3]+0xFFFFF35Fu; // 803ED978
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803ED97C
  c->r[0]=rotl(c->r[3],28)&0x0FFFFFFFu; // 803ED980
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803ED984
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[9]); // 803ED988
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 803ED98C
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[2]); // 803ED990
  W32(c->r[13]+0xFFFFF3F8u,c->r[3]); // 803ED994
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[9]); // 803ED998
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[4]); // 803ED99C
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803ED9A0
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[31]); // 803ED9A4
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[2]); // 803ED9A8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 803ED9AC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[9]); // 803ED9B0
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803ED9B4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[6]); // 803ED9B8
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 803ED9BC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[4]);} // 803ED9C0
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 803ED9C4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 803ED9C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 803ED9CC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803ED9D0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803ED9D4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[2]);} // 803ED9D8
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 803ED9DC
L_803ED9E0:;
  c->r[29]=R32(c->r[30]+0x000000DCu); // 803ED9E0
  cmps(c,0,(int32_t)c->r[29],0); // 803ED9E4
  if (!crb(c,2)) { goto L_803ED9F4; } // 803ED9E8
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803ED9EC
  goto L_803EDB38; // 803ED9F0
L_803ED9F4:;
  c->r[0]=R32(c->r[30]+0x000000E0u); // 803ED9F4
  cmps(c,0,(int32_t)c->r[0],0); // 803ED9F8
  if (crb(c,2)) { goto L_803EDA1C; } // 803ED9FC
  cmps(c,0,(int32_t)c->r[0],1); // 803EDA00
  if (crb(c,2)) { goto L_803EDA4C; } // 803EDA04
  cmps(c,0,(int32_t)c->r[0],2); // 803EDA08
  if (crb(c,2)) { goto L_803EDAD4; } // 803EDA0C
  cmps(c,0,(int32_t)c->r[0],3); // 803EDA10
  if (crb(c,2)) { goto L_803EDB2C; } // 803EDA14
  goto L_803EDB34; // 803EDA18
L_803EDA1C:;
  c->f[1]=c->f[30]; // 803EDA1C
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDA20
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDA24
  c->r[9]=c->r[31]|c->r[31]; // 803EDA28
  c->r[3]=c->r[29]+0x00000098u; // 803EDA2C
  c->r[4]=c->r[29]+0x000000B8u; // 803EDA30
  c->r[5]=c->r[29]+0x000000D8u; // 803EDA34
  c->r[6]=c->r[29]+0x000000F8u; // 803EDA38
  c->lr=0x803EDA40u; f_803E5520(c); // 803EDA3C
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDA40
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803EDA44
  goto L_803EDB38; // 803EDA48
L_803EDA4C:;
  c->r[3]=0u+0x80570000u; // 803EDA4C
  c->r[0]=R32(c->r[30]+0x000000E8u); // 803EDA50
  c->r[3]=c->r[3]+0x000041A8u; // 803EDA54
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDA58
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDA5C
  cmps(c,0,(int32_t)c->r[0],0); // 803EDA60
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EDA64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EDA68
  if (crb(c,2)) { goto L_803EDA84; } // 803EDA6C
  cmps(c,0,(int32_t)c->r[31],0); // 803EDA70
  if (crb(c,2)) { goto L_803EDA84; } // 803EDA74
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDA78
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803EDA7C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EDA80
L_803EDA84:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDA84
  fcmp(c,0,c->f[0],c->f[31]); // 803EDA88
  if (!crb(c,2)) { goto L_803EDA94; } // 803EDA8C
  goto L_803EDAA4; // 803EDA90
L_803EDA94:;
  c->f[2]=c->f[31]; // 803EDA94
  c->lr=0x803EDA9Cu; f_803AD468(c); // 803EDA98
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EDA9C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803EDAA0
L_803EDAA4:;
  c->f[1]=c->f[0]; // 803EDAA4
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDAA8
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDAAC
  c->r[9]=c->r[31]|c->r[31]; // 803EDAB0
  c->r[3]=c->r[29]+0x00000098u; // 803EDAB4
  c->r[4]=c->r[29]+0x000000B8u; // 803EDAB8
  c->r[5]=c->r[29]+0x000000D8u; // 803EDABC
  c->r[6]=c->r[29]+0x000000F8u; // 803EDAC0
  c->lr=0x803EDAC8u; f_803E5520(c); // 803EDAC4
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDAC8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803EDACC
  goto L_803EDB38; // 803EDAD0
L_803EDAD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EDAD4
  if (crb(c,2)) { goto L_803EDB24; } // 803EDAD8
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EDADC
  cmps(c,0,(int32_t)c->r[4],0); // 803EDAE0
  if (crb(c,2)) { goto L_803EDB24; } // 803EDAE4
  c->r[0]=R32(c->r[30]+0x000000F0u); // 803EDAE8
  c->r[9]=c->r[31]|c->r[31]; // 803EDAEC
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDAF0
  c->r[3]=c->r[29]+0x00000098u; // 803EDAF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EDAF8
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDAFC
  c->r[5]=c->r[4]+c->r[0]; // 803EDB00
  c->r[4]=c->r[29]+0x000000B8u; // 803EDB04
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDB08
  c->r[5]=c->r[29]+0x000000D8u; // 803EDB0C
  c->r[6]=c->r[29]+0x000000F8u; // 803EDB10
  c->lr=0x803EDB18u; f_803E5520(c); // 803EDB14
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDB18
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 803EDB1C
  goto L_803EDB38; // 803EDB20
L_803EDB24:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EDB24
  goto L_803EDB38; // 803EDB28
L_803EDB2C:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EDB2C
  goto L_803EDB38; // 803EDB30
L_803EDB34:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EDB34
L_803EDB38:;
  c->r[29]=R32(c->r[30]+0x000000FCu); // 803EDB38
  cmps(c,0,(int32_t)c->r[29],0); // 803EDB3C
  if (!crb(c,2)) { goto L_803EDB4C; } // 803EDB40
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EDB44
  goto L_803EDC90; // 803EDB48
L_803EDB4C:;
  c->r[0]=R32(c->r[30]+0x00000100u); // 803EDB4C
  cmps(c,0,(int32_t)c->r[0],0); // 803EDB50
  if (crb(c,2)) { goto L_803EDB74; } // 803EDB54
  cmps(c,0,(int32_t)c->r[0],1); // 803EDB58
  if (crb(c,2)) { goto L_803EDBA4; } // 803EDB5C
  cmps(c,0,(int32_t)c->r[0],2); // 803EDB60
  if (crb(c,2)) { goto L_803EDC2C; } // 803EDB64
  cmps(c,0,(int32_t)c->r[0],3); // 803EDB68
  if (crb(c,2)) { goto L_803EDC84; } // 803EDB6C
  goto L_803EDC8C; // 803EDB70
L_803EDB74:;
  c->f[1]=c->f[30]; // 803EDB74
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDB78
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDB7C
  c->r[9]=c->r[31]|c->r[31]; // 803EDB80
  c->r[3]=c->r[29]+0x00000098u; // 803EDB84
  c->r[4]=c->r[29]+0x000000B8u; // 803EDB88
  c->r[5]=c->r[29]+0x000000D8u; // 803EDB8C
  c->r[6]=c->r[29]+0x000000F8u; // 803EDB90
  c->lr=0x803EDB98u; f_803E5520(c); // 803EDB94
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDB98
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EDB9C
  goto L_803EDC90; // 803EDBA0
L_803EDBA4:;
  c->r[3]=0u+0x80570000u; // 803EDBA4
  c->r[0]=R32(c->r[30]+0x00000108u); // 803EDBA8
  c->r[3]=c->r[3]+0x000041A8u; // 803EDBAC
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDBB0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDBB4
  cmps(c,0,(int32_t)c->r[0],0); // 803EDBB8
  {uint32_t ea=c->r[30]+0x00000104u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EDBBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EDBC0
  if (crb(c,2)) { goto L_803EDBDC; } // 803EDBC4
  cmps(c,0,(int32_t)c->r[31],0); // 803EDBC8
  if (crb(c,2)) { goto L_803EDBDC; } // 803EDBCC
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDBD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803EDBD4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EDBD8
L_803EDBDC:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDBDC
  fcmp(c,0,c->f[0],c->f[29]); // 803EDBE0
  if (!crb(c,2)) { goto L_803EDBEC; } // 803EDBE4
  goto L_803EDBFC; // 803EDBE8
L_803EDBEC:;
  c->f[2]=c->f[29]; // 803EDBEC
  c->lr=0x803EDBF4u; f_803AD468(c); // 803EDBF0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EDBF4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803EDBF8
L_803EDBFC:;
  c->f[1]=c->f[0]; // 803EDBFC
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDC00
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDC04
  c->r[9]=c->r[31]|c->r[31]; // 803EDC08
  c->r[3]=c->r[29]+0x00000098u; // 803EDC0C
  c->r[4]=c->r[29]+0x000000B8u; // 803EDC10
  c->r[5]=c->r[29]+0x000000D8u; // 803EDC14
  c->r[6]=c->r[29]+0x000000F8u; // 803EDC18
  c->lr=0x803EDC20u; f_803E5520(c); // 803EDC1C
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDC20
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EDC24
  goto L_803EDC90; // 803EDC28
L_803EDC2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EDC2C
  if (crb(c,2)) { goto L_803EDC7C; } // 803EDC30
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EDC34
  cmps(c,0,(int32_t)c->r[4],0); // 803EDC38
  if (crb(c,2)) { goto L_803EDC7C; } // 803EDC3C
  c->r[0]=R32(c->r[30]+0x00000110u); // 803EDC40
  c->r[9]=c->r[31]|c->r[31]; // 803EDC44
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDC48
  c->r[3]=c->r[29]+0x00000098u; // 803EDC4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EDC50
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDC54
  c->r[5]=c->r[4]+c->r[0]; // 803EDC58
  c->r[4]=c->r[29]+0x000000B8u; // 803EDC5C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDC60
  c->r[5]=c->r[29]+0x000000D8u; // 803EDC64
  c->r[6]=c->r[29]+0x000000F8u; // 803EDC68
  c->lr=0x803EDC70u; f_803E5520(c); // 803EDC6C
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDC70
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EDC74
  goto L_803EDC90; // 803EDC78
L_803EDC7C:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EDC7C
  goto L_803EDC90; // 803EDC80
L_803EDC84:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EDC84
  goto L_803EDC90; // 803EDC88
L_803EDC8C:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EDC8C
L_803EDC90:;
  c->r[29]=R32(c->r[30]+0x0000011Cu); // 803EDC90
  cmps(c,0,(int32_t)c->r[29],0); // 803EDC94
  if (!crb(c,2)) { goto L_803EDCA4; } // 803EDC98
  {uint32_t ea=c->r[30]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDC9C
  goto L_803EDDE8; // 803EDCA0
L_803EDCA4:;
  c->r[0]=R32(c->r[30]+0x00000120u); // 803EDCA4
  cmps(c,0,(int32_t)c->r[0],0); // 803EDCA8
  if (crb(c,2)) { goto L_803EDCCC; } // 803EDCAC
  cmps(c,0,(int32_t)c->r[0],1); // 803EDCB0
  if (crb(c,2)) { goto L_803EDCFC; } // 803EDCB4
  cmps(c,0,(int32_t)c->r[0],2); // 803EDCB8
  if (crb(c,2)) { goto L_803EDD84; } // 803EDCBC
  cmps(c,0,(int32_t)c->r[0],3); // 803EDCC0
  if (crb(c,2)) { goto L_803EDDDC; } // 803EDCC4
  goto L_803EDDE4; // 803EDCC8
L_803EDCCC:;
  c->f[1]=c->f[30]; // 803EDCCC
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDCD0
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDCD4
  c->r[9]=c->r[31]|c->r[31]; // 803EDCD8
  c->r[3]=c->r[29]+0x00000098u; // 803EDCDC
  c->r[4]=c->r[29]+0x000000B8u; // 803EDCE0
  c->r[5]=c->r[29]+0x000000D8u; // 803EDCE4
  c->r[6]=c->r[29]+0x000000F8u; // 803EDCE8
  c->lr=0x803EDCF0u; f_803E5520(c); // 803EDCEC
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDCF0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EDCF4
  goto L_803EDDE8; // 803EDCF8
L_803EDCFC:;
  c->r[3]=0u+0x80570000u; // 803EDCFC
  c->r[0]=R32(c->r[30]+0x00000128u); // 803EDD00
  c->r[3]=c->r[3]+0x000041A8u; // 803EDD04
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDD08
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDD0C
  cmps(c,0,(int32_t)c->r[0],0); // 803EDD10
  {uint32_t ea=c->r[30]+0x00000124u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EDD14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EDD18
  if (crb(c,2)) { goto L_803EDD34; } // 803EDD1C
  cmps(c,0,(int32_t)c->r[31],0); // 803EDD20
  if (crb(c,2)) { goto L_803EDD34; } // 803EDD24
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDD28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803EDD2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EDD30
L_803EDD34:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDD34
  fcmp(c,0,c->f[0],c->f[30]); // 803EDD38
  if (!crb(c,2)) { goto L_803EDD44; } // 803EDD3C
  goto L_803EDD54; // 803EDD40
L_803EDD44:;
  c->f[2]=c->f[30]; // 803EDD44
  c->lr=0x803EDD4Cu; f_803AD468(c); // 803EDD48
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EDD4C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803EDD50
L_803EDD54:;
  c->f[1]=c->f[0]; // 803EDD54
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDD58
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDD5C
  c->r[9]=c->r[31]|c->r[31]; // 803EDD60
  c->r[3]=c->r[29]+0x00000098u; // 803EDD64
  c->r[4]=c->r[29]+0x000000B8u; // 803EDD68
  c->r[5]=c->r[29]+0x000000D8u; // 803EDD6C
  c->r[6]=c->r[29]+0x000000F8u; // 803EDD70
  c->lr=0x803EDD78u; f_803E5520(c); // 803EDD74
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDD78
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EDD7C
  goto L_803EDDE8; // 803EDD80
L_803EDD84:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EDD84
  if (crb(c,2)) { goto L_803EDDD4; } // 803EDD88
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EDD8C
  cmps(c,0,(int32_t)c->r[4],0); // 803EDD90
  if (crb(c,2)) { goto L_803EDDD4; } // 803EDD94
  c->r[0]=R32(c->r[30]+0x00000130u); // 803EDD98
  c->r[9]=c->r[31]|c->r[31]; // 803EDD9C
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EDDA0
  c->r[3]=c->r[29]+0x00000098u; // 803EDDA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EDDA8
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EDDAC
  c->r[5]=c->r[4]+c->r[0]; // 803EDDB0
  c->r[4]=c->r[29]+0x000000B8u; // 803EDDB4
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDDB8
  c->r[5]=c->r[29]+0x000000D8u; // 803EDDBC
  c->r[6]=c->r[29]+0x000000F8u; // 803EDDC0
  c->lr=0x803EDDC8u; f_803E5520(c); // 803EDDC4
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDDC8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EDDCC
  goto L_803EDDE8; // 803EDDD0
L_803EDDD4:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDDD4
  goto L_803EDDE8; // 803EDDD8
L_803EDDDC:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDDDC
  goto L_803EDDE8; // 803EDDE0
L_803EDDE4:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDDE4
L_803EDDE8:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDDE8
  c->r[3]=c->r[1]+0x00000008u; // 803EDDEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 803EDDF0
  c->r[4]=c->r[1]+0x00000010u; // 803EDDF4
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,2,ea,0,0);} // 803EDDF8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[29]);} // 803EDDFC
  {uint32_t ea=c->r[31]+0x00000040u; psq_load(c,3,ea,0,0);} // 803EDE00
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803EDE04
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 803EDE08
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803EDE0C
  {double t0=S(c->f[2]+c->f[4]), t1=S(c->ps1[2]+c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 803EDE10
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EDE14
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 803EDE18
  {double t0=S(c->f[3]+c->f[0]), t1=S(c->ps1[3]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803EDE1C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803EDE20
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 803EDE24
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 803EDE28
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 803EDE2C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 803EDE30
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 803EDE34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 803EDE38
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 803EDE3C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 803EDE40
  c->r[11]=c->r[1]+0x00000040u; // 803EDE44
  c->lr=0x803EDE4Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803EDE48
  c->r[0]=R32(c->r[1]+0x00000084u); // 803EDE4C
  c->lr=c->r[0]; // 803EDE50
  c->r[1]=c->r[1]+0x00000080u; // 803EDE54
  return; // 803EDE58
}

// fn_803EDE5C
void f_803EDE5C(Ctx* __restrict c) {
  trace_call(0x803EDE5Cu);
  c->r[3]=c->r[13]+0xFFFFDEF0u; // 803EDE5C
  return; // 803EDE60
}

// fn_803EDE64
void f_803EDE64(Ctx* __restrict c) {
  trace_call(0x803EDE64u);
  c->r[3]=c->r[13]+0xFFFFDEF8u; // 803EDE64
  return; // 803EDE68
}

// fn_803EDE6C
void f_803EDE6C(Ctx* __restrict c) {
  trace_call(0x803EDE6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EDE6C
  c->r[0]=c->lr; // 803EDE70
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EDE74
  W32(c->r[1]+0x00000434u,c->r[0]); // 803EDE78
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EDE7C
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803EDE80
  c->r[31]=0u+0x80470000u; // 803EDE84
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDE88
  W32(c->r[1]+0x00000428u,c->r[30]); // 803EDE8C
  c->r[30]=0u+0x00000000u; // 803EDE90
  W32(c->r[1]+0x00000424u,c->r[29]); // 803EDE94
  c->r[29]=c->r[4]|c->r[4]; // 803EDE98
  W32(c->r[1]+0x00000420u,c->r[28]); // 803EDE9C
  c->r[28]=c->r[3]|c->r[3]; // 803EDEA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803EDEA4
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 803EDEA8
  W32(c->r[1]+0x00000020u,c->r[30]); // 803EDEAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803EDEB0
  W32(c->r[1]+0x00000028u,c->r[30]); // 803EDEB4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803EDEB8
  W32(c->r[1]+0x00000030u,c->r[30]); // 803EDEBC
  W32(c->r[1]+0x00000034u,c->r[30]); // 803EDEC0
L_803EDEC4:;
  c->r[3]=c->r[29]|c->r[29]; // 803EDEC4
  c->r[4]=c->r[1]+0x00000008u; // 803EDEC8
  c->r[5]=c->r[1]+0x00000010u; // 803EDECC
  c->r[6]=c->r[1]+0x0000000Cu; // 803EDED0
  c->r[7]=c->r[1]+0x00000038u; // 803EDED4
  c->r[8]=c->r[1]+0x00000018u; // 803EDED8
  c->r[9]=0u+0x000003E8u; // 803EDEDC
  c->lr=0x803EDEE4u; f_80403308(c); // 803EDEE0
  c->r[3]=R32(c->r[1]+0x00000008u); // 803EDEE4
  c->r[0]=c->r[3]+0xFFFFFF7Eu; // 803EDEE8
  cmpu(c,0,c->r[0],0x00000010u); // 803EDEEC
  if (crb(c,1)) { goto L_803EE054; } // 803EDEF0
  c->r[3]=c->r[31]+0xFFFF9964u; // 803EDEF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EDEF8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803EDEFC
  c->ctr=c->r[3]; // 803EDF00
  if (true) { switch (c->ctr) { case 0x803EDF08u: goto L_803EDF08; case 0x803EDF20u: goto L_803EDF20; case 0x803EDF38u: goto L_803EDF38; case 0x803EDF50u: goto L_803EDF50; case 0x803EDF68u: goto L_803EDF68; case 0x803EDF80u: goto L_803EDF80; case 0x803EDF8Cu: goto L_803EDF8C; case 0x803EDF98u: goto L_803EDF98; case 0x803EDFB0u: goto L_803EDFB0; case 0x803EDFC8u: goto L_803EDFC8; case 0x803EDFE0u: goto L_803EDFE0; case 0x803EDFECu: goto L_803EDFEC; case 0x803EDFFCu: goto L_803EDFFC; case 0x803EE00Cu: goto L_803EE00C; case 0x803EE01Cu: goto L_803EE01C; case 0x803EE030u: goto L_803EE030; case 0x803EE044u: goto L_803EE044; default: break; } dispatch(c,c->ctr); return; } // 803EDF04
L_803EDF08:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDF08
  c->r[3]=c->r[29]|c->r[29]; // 803EDF0C
  c->r[5]=c->r[1]+0x00000018u; // 803EDF10
  c->r[6]=c->r[28]+0x00000098u; // 803EDF14
  c->lr=0x803EDF1Cu; f_804039BC(c); // 803EDF18
  goto L_803EE054; // 803EDF1C
L_803EDF20:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDF20
  c->r[3]=c->r[29]|c->r[29]; // 803EDF24
  c->r[5]=c->r[1]+0x00000018u; // 803EDF28
  c->r[6]=c->r[28]+0x000000B8u; // 803EDF2C
  c->lr=0x803EDF34u; f_804039BC(c); // 803EDF30
  goto L_803EE054; // 803EDF34
L_803EDF38:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDF38
  c->r[3]=c->r[29]|c->r[29]; // 803EDF3C
  c->r[5]=c->r[1]+0x00000018u; // 803EDF40
  c->r[6]=c->r[28]+0x000000D8u; // 803EDF44
  c->lr=0x803EDF4Cu; f_804039BC(c); // 803EDF48
  goto L_803EE054; // 803EDF4C
L_803EDF50:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDF50
  c->r[3]=c->r[29]|c->r[29]; // 803EDF54
  c->r[5]=c->r[1]+0x00000018u; // 803EDF58
  c->r[6]=c->r[28]+0x000000F8u; // 803EDF5C
  c->lr=0x803EDF64u; f_804039BC(c); // 803EDF60
  goto L_803EE054; // 803EDF64
L_803EDF68:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDF68
  c->r[3]=c->r[29]|c->r[29]; // 803EDF6C
  c->r[5]=c->r[1]+0x00000018u; // 803EDF70
  c->r[6]=c->r[28]+0x00000118u; // 803EDF74
  c->lr=0x803EDF7Cu; f_804039BC(c); // 803EDF78
  goto L_803EE054; // 803EDF7C
L_803EDF80:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EDF80
  W32(c->r[28]+0x00000198u,c->r[0]); // 803EDF84
  goto L_803EE054; // 803EDF88
L_803EDF8C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EDF8C
  W32(c->r[28]+0x000001A0u,c->r[0]); // 803EDF90
  goto L_803EE054; // 803EDF94
L_803EDF98:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDF98
  c->r[3]=c->r[29]|c->r[29]; // 803EDF9C
  c->r[5]=c->r[1]+0x00000018u; // 803EDFA0
  c->r[6]=c->r[28]+0x00000138u; // 803EDFA4
  c->lr=0x803EDFACu; f_804039BC(c); // 803EDFA8
  goto L_803EE054; // 803EDFAC
L_803EDFB0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDFB0
  c->r[3]=c->r[29]|c->r[29]; // 803EDFB4
  c->r[5]=c->r[1]+0x00000018u; // 803EDFB8
  c->r[6]=c->r[28]+0x00000158u; // 803EDFBC
  c->lr=0x803EDFC4u; f_804039BC(c); // 803EDFC0
  goto L_803EE054; // 803EDFC4
L_803EDFC8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EDFC8
  c->r[3]=c->r[29]|c->r[29]; // 803EDFCC
  c->r[5]=c->r[1]+0x00000018u; // 803EDFD0
  c->r[6]=c->r[28]+0x00000178u; // 803EDFD4
  c->lr=0x803EDFDCu; f_804039BC(c); // 803EDFD8
  goto L_803EE054; // 803EDFDC
L_803EDFE0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EDFE0
  W32(c->r[28]+0x0000019Cu,c->r[0]); // 803EDFE4
  goto L_803EE054; // 803EDFE8
L_803EDFEC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDFEC
  {uint32_t ea=c->r[28]+0x000000D8u; WF32(ea,c->f[0]);} // 803EDFF0
  W32(c->r[28]+0x000000DCu,c->r[30]); // 803EDFF4
  goto L_803EE054; // 803EDFF8
L_803EDFFC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EDFFC
  {uint32_t ea=c->r[28]+0x000000F8u; WF32(ea,c->f[0]);} // 803EE000
  W32(c->r[28]+0x000000FCu,c->r[30]); // 803EE004
  goto L_803EE054; // 803EE008
L_803EE00C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE00C
  {uint32_t ea=c->r[28]+0x00000118u; WF32(ea,c->f[0]);} // 803EE010
  W32(c->r[28]+0x0000011Cu,c->r[30]); // 803EE014
  goto L_803EE054; // 803EE018
L_803EE01C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EE01C
  c->r[3]=c->r[29]|c->r[29]; // 803EE020
  c->r[5]=c->r[28]+0x000000DCu; // 803EE024
  c->lr=0x803EE02Cu; f_804039AC(c); // 803EE028
  goto L_803EE054; // 803EE02C
L_803EE030:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EE030
  c->r[3]=c->r[29]|c->r[29]; // 803EE034
  c->r[5]=c->r[28]+0x000000FCu; // 803EE038
  c->lr=0x803EE040u; f_804039AC(c); // 803EE03C
  goto L_803EE054; // 803EE040
L_803EE044:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EE044
  c->r[3]=c->r[29]|c->r[29]; // 803EE048
  c->r[5]=c->r[28]+0x0000011Cu; // 803EE04C
  c->lr=0x803EE054u; f_804039AC(c); // 803EE050
L_803EE054:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EE054
  cmps(c,0,(int32_t)c->r[0],6); // 803EE058
  if (!crb(c,2)) { IRQCHK(c); goto L_803EDEC4; } // 803EE05C
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803EE060
  c->r[3]=0u+0x00000001u; // 803EE064
  c->r[30]=R32(c->r[1]+0x00000428u); // 803EE068
  c->r[29]=R32(c->r[1]+0x00000424u); // 803EE06C
  c->r[28]=R32(c->r[1]+0x00000420u); // 803EE070
  c->r[0]=R32(c->r[1]+0x00000434u); // 803EE074
  c->lr=c->r[0]; // 803EE078
  c->r[1]=c->r[1]+0x00000430u; // 803EE07C
  return; // 803EE080
}

// fn_803EE084
void f_803EE084(Ctx* __restrict c) {
  trace_call(0x803EE084u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EE084
  c->r[0]=c->lr; // 803EE088
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EE08C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EE090
  c->r[31]=c->r[4]|c->r[4]; // 803EE094
  c->r[4]=0u+0x00000082u; // 803EE098
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EE09C
  c->r[30]=c->r[3]|c->r[3]; // 803EE0A0
  c->r[3]=c->r[31]|c->r[31]; // 803EE0A4
  c->r[5]=c->r[30]+0x00000098u; // 803EE0A8
  c->lr=0x803EE0B0u; f_80403D44(c); // 803EE0AC
  c->r[3]=c->r[31]|c->r[31]; // 803EE0B0
  c->r[5]=c->r[30]+0x000000B8u; // 803EE0B4
  c->r[4]=0u+0x00000083u; // 803EE0B8
  c->lr=0x803EE0C0u; f_80403D44(c); // 803EE0BC
  c->r[5]=R32(c->r[30]+0x00000198u); // 803EE0C0
  c->r[3]=c->r[31]|c->r[31]; // 803EE0C4
  c->r[4]=0u+0x0000008Du; // 803EE0C8
  c->lr=0x803EE0D0u; f_80403B54(c); // 803EE0CC
  c->r[5]=R32(c->r[30]+0x000001A0u); // 803EE0D0
  c->r[3]=c->r[31]|c->r[31]; // 803EE0D4
  c->r[4]=0u+0x0000008Eu; // 803EE0D8
  c->lr=0x803EE0E0u; f_80403B54(c); // 803EE0DC
  c->r[3]=c->r[31]|c->r[31]; // 803EE0E0
  c->r[5]=c->r[30]+0x000000D8u; // 803EE0E4
  c->r[4]=0u+0x0000008Au; // 803EE0E8
  c->lr=0x803EE0F0u; f_80403D44(c); // 803EE0EC
  c->r[3]=c->r[31]|c->r[31]; // 803EE0F0
  c->r[5]=c->r[30]+0x000000F8u; // 803EE0F4
  c->r[4]=0u+0x0000008Bu; // 803EE0F8
  c->lr=0x803EE100u; f_80403D44(c); // 803EE0FC
  c->r[3]=c->r[31]|c->r[31]; // 803EE100
  c->r[5]=c->r[30]+0x00000118u; // 803EE104
  c->r[4]=0u+0x0000008Cu; // 803EE108
  c->lr=0x803EE110u; f_80403D44(c); // 803EE10C
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 803EE110
  c->r[3]=c->r[31]|c->r[31]; // 803EE114
  c->r[4]=0u+0x00000092u; // 803EE118
  c->lr=0x803EE120u; f_80403B54(c); // 803EE11C
  c->r[3]=c->r[31]|c->r[31]; // 803EE120
  c->r[5]=c->r[30]+0x00000138u; // 803EE124
  c->r[4]=0u+0x0000008Fu; // 803EE128
  c->lr=0x803EE130u; f_80403D44(c); // 803EE12C
  c->r[3]=c->r[31]|c->r[31]; // 803EE130
  c->r[5]=c->r[30]+0x00000158u; // 803EE134
  c->r[4]=0u+0x00000090u; // 803EE138
  c->lr=0x803EE140u; f_80403D44(c); // 803EE13C
  c->r[3]=c->r[31]|c->r[31]; // 803EE140
  c->r[5]=c->r[30]+0x00000178u; // 803EE144
  c->r[4]=0u+0x00000091u; // 803EE148
  c->lr=0x803EE150u; f_80403D44(c); // 803EE14C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EE150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EE154
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EE158
  c->lr=c->r[0]; // 803EE15C
  c->r[1]=c->r[1]+0x00000010u; // 803EE160
  return; // 803EE164
}

// fn_803EE168
void f_803EE168(Ctx* __restrict c) {
  trace_call(0x803EE168u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EE168
  c->r[0]=c->lr; // 803EE16C
  W32(c->r[1]+0x00000094u,c->r[0]); // 803EE170
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 803EE174
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 803EE178
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 803EE17C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 803EE180
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 803EE184
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 803EE188
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 803EE18C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 803EE190
  c->f[31]=c->f[1]; // 803EE194
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 803EE198
  c->r[31]=c->r[4]|c->r[4]; // 803EE19C
  W32(c->r[1]+0x00000048u,c->r[30]); // 803EE1A0
  c->r[30]=c->r[3]|c->r[3]; // 803EE1A4
  W32(c->r[1]+0x00000044u,c->r[29]); // 803EE1A8
  c->r[29]=R32(c->r[3]+0x0000009Cu); // 803EE1AC
  cmps(c,0,(int32_t)c->r[29],0); // 803EE1B0
  if (!crb(c,2)) { goto L_803EE1C0; } // 803EE1B4
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EE1B8
  goto L_803EE300; // 803EE1BC
L_803EE1C0:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803EE1C0
  cmps(c,0,(int32_t)c->r[0],0); // 803EE1C4
  if (crb(c,2)) { goto L_803EE1E8; } // 803EE1C8
  cmps(c,0,(int32_t)c->r[0],1); // 803EE1CC
  if (crb(c,2)) { goto L_803EE214; } // 803EE1D0
  cmps(c,0,(int32_t)c->r[0],2); // 803EE1D4
  if (crb(c,2)) { goto L_803EE29C; } // 803EE1D8
  cmps(c,0,(int32_t)c->r[0],3); // 803EE1DC
  if (crb(c,2)) { goto L_803EE2F4; } // 803EE1E0
  goto L_803EE2FC; // 803EE1E4
L_803EE1E8:;
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE1E8
  c->r[9]=c->r[31]|c->r[31]; // 803EE1EC
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE1F0
  c->r[3]=c->r[29]+0x00000098u; // 803EE1F4
  c->r[4]=c->r[29]+0x000000B8u; // 803EE1F8
  c->r[5]=c->r[29]+0x000000D8u; // 803EE1FC
  c->r[6]=c->r[29]+0x000000F8u; // 803EE200
  c->lr=0x803EE208u; f_803E5520(c); // 803EE204
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE208
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 803EE20C
  goto L_803EE300; // 803EE210
L_803EE214:;
  c->r[5]=0u+0x80570000u; // 803EE214
  c->r[0]=R32(c->r[3]+0x000000A8u); // 803EE218
  c->r[5]=c->r[5]+0x000041A8u; // 803EE21C
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE220
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE224
  cmps(c,0,(int32_t)c->r[0],0); // 803EE228
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EE22C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE230
  if (crb(c,2)) { goto L_803EE24C; } // 803EE234
  cmps(c,0,(int32_t)c->r[4],0); // 803EE238
  if (crb(c,2)) { goto L_803EE24C; } // 803EE23C
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE240
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803EE244
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE248
L_803EE24C:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE24C
  fcmp(c,0,c->f[0],c->f[30]); // 803EE250
  if (!crb(c,2)) { goto L_803EE25C; } // 803EE254
  goto L_803EE26C; // 803EE258
L_803EE25C:;
  c->f[2]=c->f[30]; // 803EE25C
  c->lr=0x803EE264u; f_803AD468(c); // 803EE260
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EE264
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803EE268
L_803EE26C:;
  c->f[1]=c->f[0]; // 803EE26C
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE270
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE274
  c->r[9]=c->r[31]|c->r[31]; // 803EE278
  c->r[3]=c->r[29]+0x00000098u; // 803EE27C
  c->r[4]=c->r[29]+0x000000B8u; // 803EE280
  c->r[5]=c->r[29]+0x000000D8u; // 803EE284
  c->r[6]=c->r[29]+0x000000F8u; // 803EE288
  c->lr=0x803EE290u; f_803E5520(c); // 803EE28C
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE290
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 803EE294
  goto L_803EE300; // 803EE298
L_803EE29C:;
  cmps(c,0,(int32_t)c->r[4],0); // 803EE29C
  if (crb(c,2)) { goto L_803EE2EC; } // 803EE2A0
  c->r[4]=R32(c->r[4]+0x00000068u); // 803EE2A4
  cmps(c,0,(int32_t)c->r[4],0); // 803EE2A8
  if (crb(c,2)) { goto L_803EE2EC; } // 803EE2AC
  c->r[0]=R32(c->r[3]+0x000000B0u); // 803EE2B0
  c->r[9]=c->r[31]|c->r[31]; // 803EE2B4
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE2B8
  c->r[3]=c->r[29]+0x00000098u; // 803EE2BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EE2C0
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE2C4
  c->r[5]=c->r[4]+c->r[0]; // 803EE2C8
  c->r[4]=c->r[29]+0x000000B8u; // 803EE2CC
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE2D0
  c->r[5]=c->r[29]+0x000000D8u; // 803EE2D4
  c->r[6]=c->r[29]+0x000000F8u; // 803EE2D8
  c->lr=0x803EE2E0u; f_803E5520(c); // 803EE2DC
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE2E0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 803EE2E4
  goto L_803EE300; // 803EE2E8
L_803EE2EC:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EE2EC
  goto L_803EE300; // 803EE2F0
L_803EE2F4:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EE2F4
  goto L_803EE300; // 803EE2F8
L_803EE2FC:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EE2FC
L_803EE300:;
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE300
  c->r[3]=0u+0x80570000u; // 803EE304
  c->r[3]=c->r[3]+0x000041A8u; // 803EE308
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE30C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803EE310
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EE314
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803EE318
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EE31C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EE320
  c->r[29]=R32(c->r[30]+0x000000BCu); // 803EE324
  cmps(c,0,(int32_t)c->r[29],0); // 803EE328
  if (!crb(c,2)) { goto L_803EE338; } // 803EE32C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE330
  goto L_803EE474; // 803EE334
L_803EE338:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 803EE338
  cmps(c,0,(int32_t)c->r[0],0); // 803EE33C
  if (crb(c,2)) { goto L_803EE360; } // 803EE340
  cmps(c,0,(int32_t)c->r[0],1); // 803EE344
  if (crb(c,2)) { goto L_803EE390; } // 803EE348
  cmps(c,0,(int32_t)c->r[0],2); // 803EE34C
  if (crb(c,2)) { goto L_803EE410; } // 803EE350
  cmps(c,0,(int32_t)c->r[0],3); // 803EE354
  if (crb(c,2)) { goto L_803EE468; } // 803EE358
  goto L_803EE470; // 803EE35C
L_803EE360:;
  c->f[1]=c->f[31]; // 803EE360
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE364
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE368
  c->r[9]=c->r[31]|c->r[31]; // 803EE36C
  c->r[3]=c->r[29]+0x00000098u; // 803EE370
  c->r[4]=c->r[29]+0x000000B8u; // 803EE374
  c->r[5]=c->r[29]+0x000000D8u; // 803EE378
  c->r[6]=c->r[29]+0x000000F8u; // 803EE37C
  c->lr=0x803EE384u; f_803E5520(c); // 803EE380
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE384
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EE388
  goto L_803EE474; // 803EE38C
L_803EE390:;
  c->r[0]=R32(c->r[30]+0x000000C8u); // 803EE390
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE394
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE398
  cmps(c,0,(int32_t)c->r[0],0); // 803EE39C
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EE3A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE3A4
  if (crb(c,2)) { goto L_803EE3C0; } // 803EE3A8
  cmps(c,0,(int32_t)c->r[31],0); // 803EE3AC
  if (crb(c,2)) { goto L_803EE3C0; } // 803EE3B0
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE3B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803EE3B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE3BC
L_803EE3C0:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE3C0
  fcmp(c,0,c->f[0],c->f[30]); // 803EE3C4
  if (!crb(c,2)) { goto L_803EE3D0; } // 803EE3C8
  goto L_803EE3E0; // 803EE3CC
L_803EE3D0:;
  c->f[2]=c->f[30]; // 803EE3D0
  c->lr=0x803EE3D8u; f_803AD468(c); // 803EE3D4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EE3D8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803EE3DC
L_803EE3E0:;
  c->f[1]=c->f[0]; // 803EE3E0
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE3E4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE3E8
  c->r[9]=c->r[31]|c->r[31]; // 803EE3EC
  c->r[3]=c->r[29]+0x00000098u; // 803EE3F0
  c->r[4]=c->r[29]+0x000000B8u; // 803EE3F4
  c->r[5]=c->r[29]+0x000000D8u; // 803EE3F8
  c->r[6]=c->r[29]+0x000000F8u; // 803EE3FC
  c->lr=0x803EE404u; f_803E5520(c); // 803EE400
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE404
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EE408
  goto L_803EE474; // 803EE40C
L_803EE410:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EE410
  if (crb(c,2)) { goto L_803EE460; } // 803EE414
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EE418
  cmps(c,0,(int32_t)c->r[4],0); // 803EE41C
  if (crb(c,2)) { goto L_803EE460; } // 803EE420
  c->r[0]=R32(c->r[30]+0x000000D0u); // 803EE424
  c->r[9]=c->r[31]|c->r[31]; // 803EE428
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE42C
  c->r[3]=c->r[29]+0x00000098u; // 803EE430
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EE434
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE438
  c->r[5]=c->r[4]+c->r[0]; // 803EE43C
  c->r[4]=c->r[29]+0x000000B8u; // 803EE440
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE444
  c->r[5]=c->r[29]+0x000000D8u; // 803EE448
  c->r[6]=c->r[29]+0x000000F8u; // 803EE44C
  c->lr=0x803EE454u; f_803E5520(c); // 803EE450
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE454
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EE458
  goto L_803EE474; // 803EE45C
L_803EE460:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE460
  goto L_803EE474; // 803EE464
L_803EE468:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE468
  goto L_803EE474; // 803EE46C
L_803EE470:;
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE470
L_803EE474:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EE474
  c->r[3]=0u+0x80570000u; // 803EE478
  c->r[3]=c->r[3]+0x000041A8u; // 803EE47C
  {uint32_t ea=c->r[31]+0x00000048u; psq_load(c,3,ea,0,0);} // 803EE480
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 803EE484
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 803EE488
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE48C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 803EE490
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 803EE494
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803EE498
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803EE49C
  {uint32_t ea=c->r[31]+0x00000048u; psq_store(c,2,ea,0,0);} // 803EE4A0
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 803EE4A4
  c->r[0]=R32(c->r[30]+0x0000019Cu); // 803EE4A8
  cmps(c,0,(int32_t)c->r[0],0); // 803EE4AC
  if (crb(c,2)) { goto L_803EE8C8; } // 803EE4B0
  c->r[29]=R32(c->r[30]+0x0000013Cu); // 803EE4B4
  cmps(c,0,(int32_t)c->r[29],0); // 803EE4B8
  if (!crb(c,2)) { goto L_803EE4C8; } // 803EE4BC
  {uint32_t ea=c->r[30]+0x00000138u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EE4C0
  goto L_803EE604; // 803EE4C4
L_803EE4C8:;
  c->r[0]=R32(c->r[30]+0x00000140u); // 803EE4C8
  cmps(c,0,(int32_t)c->r[0],0); // 803EE4CC
  if (crb(c,2)) { goto L_803EE4F0; } // 803EE4D0
  cmps(c,0,(int32_t)c->r[0],1); // 803EE4D4
  if (crb(c,2)) { goto L_803EE520; } // 803EE4D8
  cmps(c,0,(int32_t)c->r[0],2); // 803EE4DC
  if (crb(c,2)) { goto L_803EE5A0; } // 803EE4E0
  cmps(c,0,(int32_t)c->r[0],3); // 803EE4E4
  if (crb(c,2)) { goto L_803EE5F8; } // 803EE4E8
  goto L_803EE600; // 803EE4EC
L_803EE4F0:;
  c->f[1]=c->f[31]; // 803EE4F0
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE4F4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE4F8
  c->r[9]=c->r[31]|c->r[31]; // 803EE4FC
  c->r[3]=c->r[29]+0x00000098u; // 803EE500
  c->r[4]=c->r[29]+0x000000B8u; // 803EE504
  c->r[5]=c->r[29]+0x000000D8u; // 803EE508
  c->r[6]=c->r[29]+0x000000F8u; // 803EE50C
  c->lr=0x803EE514u; f_803E5520(c); // 803EE510
  {uint32_t ea=c->r[30]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE514
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 803EE518
  goto L_803EE604; // 803EE51C
L_803EE520:;
  c->r[0]=R32(c->r[30]+0x00000148u); // 803EE520
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE524
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE528
  cmps(c,0,(int32_t)c->r[0],0); // 803EE52C
  {uint32_t ea=c->r[30]+0x00000144u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EE530
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE534
  if (crb(c,2)) { goto L_803EE550; } // 803EE538
  cmps(c,0,(int32_t)c->r[31],0); // 803EE53C
  if (crb(c,2)) { goto L_803EE550; } // 803EE540
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE544
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803EE548
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE54C
L_803EE550:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE550
  fcmp(c,0,c->f[0],c->f[30]); // 803EE554
  if (!crb(c,2)) { goto L_803EE560; } // 803EE558
  goto L_803EE570; // 803EE55C
L_803EE560:;
  c->f[2]=c->f[30]; // 803EE560
  c->lr=0x803EE568u; f_803AD468(c); // 803EE564
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EE568
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803EE56C
L_803EE570:;
  c->f[1]=c->f[0]; // 803EE570
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE574
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE578
  c->r[9]=c->r[31]|c->r[31]; // 803EE57C
  c->r[3]=c->r[29]+0x00000098u; // 803EE580
  c->r[4]=c->r[29]+0x000000B8u; // 803EE584
  c->r[5]=c->r[29]+0x000000D8u; // 803EE588
  c->r[6]=c->r[29]+0x000000F8u; // 803EE58C
  c->lr=0x803EE594u; f_803E5520(c); // 803EE590
  {uint32_t ea=c->r[30]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE594
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 803EE598
  goto L_803EE604; // 803EE59C
L_803EE5A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EE5A0
  if (crb(c,2)) { goto L_803EE5F0; } // 803EE5A4
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EE5A8
  cmps(c,0,(int32_t)c->r[4],0); // 803EE5AC
  if (crb(c,2)) { goto L_803EE5F0; } // 803EE5B0
  c->r[0]=R32(c->r[30]+0x00000150u); // 803EE5B4
  c->r[9]=c->r[31]|c->r[31]; // 803EE5B8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE5BC
  c->r[3]=c->r[29]+0x00000098u; // 803EE5C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EE5C4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE5C8
  c->r[5]=c->r[4]+c->r[0]; // 803EE5CC
  c->r[4]=c->r[29]+0x000000B8u; // 803EE5D0
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE5D4
  c->r[5]=c->r[29]+0x000000D8u; // 803EE5D8
  c->r[6]=c->r[29]+0x000000F8u; // 803EE5DC
  c->lr=0x803EE5E4u; f_803E5520(c); // 803EE5E0
  {uint32_t ea=c->r[30]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE5E4
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 803EE5E8
  goto L_803EE604; // 803EE5EC
L_803EE5F0:;
  {uint32_t ea=c->r[30]+0x00000138u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EE5F0
  goto L_803EE604; // 803EE5F4
L_803EE5F8:;
  {uint32_t ea=c->r[30]+0x00000138u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EE5F8
  goto L_803EE604; // 803EE5FC
L_803EE600:;
  {uint32_t ea=c->r[30]+0x00000138u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EE600
L_803EE604:;
  c->r[29]=R32(c->r[30]+0x0000015Cu); // 803EE604
  cmps(c,0,(int32_t)c->r[29],0); // 803EE608
  if (!crb(c,2)) { goto L_803EE618; } // 803EE60C
  {uint32_t ea=c->r[30]+0x00000158u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EE610
  goto L_803EE75C; // 803EE614
L_803EE618:;
  c->r[0]=R32(c->r[30]+0x00000160u); // 803EE618
  cmps(c,0,(int32_t)c->r[0],0); // 803EE61C
  if (crb(c,2)) { goto L_803EE640; } // 803EE620
  cmps(c,0,(int32_t)c->r[0],1); // 803EE624
  if (crb(c,2)) { goto L_803EE670; } // 803EE628
  cmps(c,0,(int32_t)c->r[0],2); // 803EE62C
  if (crb(c,2)) { goto L_803EE6F8; } // 803EE630
  cmps(c,0,(int32_t)c->r[0],3); // 803EE634
  if (crb(c,2)) { goto L_803EE750; } // 803EE638
  goto L_803EE758; // 803EE63C
L_803EE640:;
  c->f[1]=c->f[31]; // 803EE640
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE644
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE648
  c->r[9]=c->r[31]|c->r[31]; // 803EE64C
  c->r[3]=c->r[29]+0x00000098u; // 803EE650
  c->r[4]=c->r[29]+0x000000B8u; // 803EE654
  c->r[5]=c->r[29]+0x000000D8u; // 803EE658
  c->r[6]=c->r[29]+0x000000F8u; // 803EE65C
  c->lr=0x803EE664u; f_803E5520(c); // 803EE660
  {uint32_t ea=c->r[30]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE664
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EE668
  goto L_803EE75C; // 803EE66C
L_803EE670:;
  c->r[3]=0u+0x80570000u; // 803EE670
  c->r[0]=R32(c->r[30]+0x00000168u); // 803EE674
  c->r[3]=c->r[3]+0x000041A8u; // 803EE678
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE67C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE680
  cmps(c,0,(int32_t)c->r[0],0); // 803EE684
  {uint32_t ea=c->r[30]+0x00000164u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EE688
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE68C
  if (crb(c,2)) { goto L_803EE6A8; } // 803EE690
  cmps(c,0,(int32_t)c->r[31],0); // 803EE694
  if (crb(c,2)) { goto L_803EE6A8; } // 803EE698
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE69C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803EE6A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE6A4
L_803EE6A8:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE6A8
  fcmp(c,0,c->f[0],c->f[29]); // 803EE6AC
  if (!crb(c,2)) { goto L_803EE6B8; } // 803EE6B0
  goto L_803EE6C8; // 803EE6B4
L_803EE6B8:;
  c->f[2]=c->f[29]; // 803EE6B8
  c->lr=0x803EE6C0u; f_803AD468(c); // 803EE6BC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EE6C0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803EE6C4
L_803EE6C8:;
  c->f[1]=c->f[0]; // 803EE6C8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE6CC
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE6D0
  c->r[9]=c->r[31]|c->r[31]; // 803EE6D4
  c->r[3]=c->r[29]+0x00000098u; // 803EE6D8
  c->r[4]=c->r[29]+0x000000B8u; // 803EE6DC
  c->r[5]=c->r[29]+0x000000D8u; // 803EE6E0
  c->r[6]=c->r[29]+0x000000F8u; // 803EE6E4
  c->lr=0x803EE6ECu; f_803E5520(c); // 803EE6E8
  {uint32_t ea=c->r[30]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE6EC
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EE6F0
  goto L_803EE75C; // 803EE6F4
L_803EE6F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EE6F8
  if (crb(c,2)) { goto L_803EE748; } // 803EE6FC
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EE700
  cmps(c,0,(int32_t)c->r[4],0); // 803EE704
  if (crb(c,2)) { goto L_803EE748; } // 803EE708
  c->r[0]=R32(c->r[30]+0x00000170u); // 803EE70C
  c->r[9]=c->r[31]|c->r[31]; // 803EE710
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE714
  c->r[3]=c->r[29]+0x00000098u; // 803EE718
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EE71C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE720
  c->r[5]=c->r[4]+c->r[0]; // 803EE724
  c->r[4]=c->r[29]+0x000000B8u; // 803EE728
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE72C
  c->r[5]=c->r[29]+0x000000D8u; // 803EE730
  c->r[6]=c->r[29]+0x000000F8u; // 803EE734
  c->lr=0x803EE73Cu; f_803E5520(c); // 803EE738
  {uint32_t ea=c->r[30]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE73C
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EE740
  goto L_803EE75C; // 803EE744
L_803EE748:;
  {uint32_t ea=c->r[30]+0x00000158u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EE748
  goto L_803EE75C; // 803EE74C
L_803EE750:;
  {uint32_t ea=c->r[30]+0x00000158u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EE750
  goto L_803EE75C; // 803EE754
L_803EE758:;
  {uint32_t ea=c->r[30]+0x00000158u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EE758
L_803EE75C:;
  c->r[29]=R32(c->r[30]+0x0000017Cu); // 803EE75C
  cmps(c,0,(int32_t)c->r[29],0); // 803EE760
  if (!crb(c,2)) { goto L_803EE770; } // 803EE764
  {uint32_t ea=c->r[30]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE768
  goto L_803EE8B4; // 803EE76C
L_803EE770:;
  c->r[0]=R32(c->r[30]+0x00000180u); // 803EE770
  cmps(c,0,(int32_t)c->r[0],0); // 803EE774
  if (crb(c,2)) { goto L_803EE798; } // 803EE778
  cmps(c,0,(int32_t)c->r[0],1); // 803EE77C
  if (crb(c,2)) { goto L_803EE7C8; } // 803EE780
  cmps(c,0,(int32_t)c->r[0],2); // 803EE784
  if (crb(c,2)) { goto L_803EE850; } // 803EE788
  cmps(c,0,(int32_t)c->r[0],3); // 803EE78C
  if (crb(c,2)) { goto L_803EE8A8; } // 803EE790
  goto L_803EE8B0; // 803EE794
L_803EE798:;
  c->f[1]=c->f[31]; // 803EE798
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE79C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE7A0
  c->r[9]=c->r[31]|c->r[31]; // 803EE7A4
  c->r[3]=c->r[29]+0x00000098u; // 803EE7A8
  c->r[4]=c->r[29]+0x000000B8u; // 803EE7AC
  c->r[5]=c->r[29]+0x000000D8u; // 803EE7B0
  c->r[6]=c->r[29]+0x000000F8u; // 803EE7B4
  c->lr=0x803EE7BCu; f_803E5520(c); // 803EE7B8
  {uint32_t ea=c->r[30]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE7BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EE7C0
  goto L_803EE8B4; // 803EE7C4
L_803EE7C8:;
  c->r[3]=0u+0x80570000u; // 803EE7C8
  c->r[0]=R32(c->r[30]+0x00000188u); // 803EE7CC
  c->r[3]=c->r[3]+0x000041A8u; // 803EE7D0
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE7D4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE7D8
  cmps(c,0,(int32_t)c->r[0],0); // 803EE7DC
  {uint32_t ea=c->r[30]+0x00000184u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EE7E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE7E4
  if (crb(c,2)) { goto L_803EE800; } // 803EE7E8
  cmps(c,0,(int32_t)c->r[31],0); // 803EE7EC
  if (crb(c,2)) { goto L_803EE800; } // 803EE7F0
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE7F4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803EE7F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE7FC
L_803EE800:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE800
  fcmp(c,0,c->f[0],c->f[28]); // 803EE804
  if (!crb(c,2)) { goto L_803EE810; } // 803EE808
  goto L_803EE820; // 803EE80C
L_803EE810:;
  c->f[2]=c->f[28]; // 803EE810
  c->lr=0x803EE818u; f_803AD468(c); // 803EE814
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EE818
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 803EE81C
L_803EE820:;
  c->f[1]=c->f[0]; // 803EE820
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE824
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE828
  c->r[9]=c->r[31]|c->r[31]; // 803EE82C
  c->r[3]=c->r[29]+0x00000098u; // 803EE830
  c->r[4]=c->r[29]+0x000000B8u; // 803EE834
  c->r[5]=c->r[29]+0x000000D8u; // 803EE838
  c->r[6]=c->r[29]+0x000000F8u; // 803EE83C
  c->lr=0x803EE844u; f_803E5520(c); // 803EE840
  {uint32_t ea=c->r[30]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE844
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EE848
  goto L_803EE8B4; // 803EE84C
L_803EE850:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EE850
  if (crb(c,2)) { goto L_803EE8A0; } // 803EE854
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EE858
  cmps(c,0,(int32_t)c->r[4],0); // 803EE85C
  if (crb(c,2)) { goto L_803EE8A0; } // 803EE860
  c->r[0]=R32(c->r[30]+0x00000190u); // 803EE864
  c->r[9]=c->r[31]|c->r[31]; // 803EE868
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE86C
  c->r[3]=c->r[29]+0x00000098u; // 803EE870
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EE874
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE878
  c->r[5]=c->r[4]+c->r[0]; // 803EE87C
  c->r[4]=c->r[29]+0x000000B8u; // 803EE880
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE884
  c->r[5]=c->r[29]+0x000000D8u; // 803EE888
  c->r[6]=c->r[29]+0x000000F8u; // 803EE88C
  c->lr=0x803EE894u; f_803E5520(c); // 803EE890
  {uint32_t ea=c->r[30]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE894
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803EE898
  goto L_803EE8B4; // 803EE89C
L_803EE8A0:;
  {uint32_t ea=c->r[30]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE8A0
  goto L_803EE8B4; // 803EE8A4
L_803EE8A8:;
  {uint32_t ea=c->r[30]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE8A8
  goto L_803EE8B4; // 803EE8AC
L_803EE8B0:;
  {uint32_t ea=c->r[30]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE8B0
L_803EE8B4:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE8B4
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[30]);} // 803EE8B8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[29]);} // 803EE8BC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 803EE8C0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 803EE8C4
L_803EE8C8:;
  c->r[0]=R32(c->r[30]+0x00000198u); // 803EE8C8
  cmps(c,0,(int32_t)c->r[0],0); // 803EE8CC
  if (crb(c,2)) { goto L_803EF124; } // 803EE8D0
  c->r[0]=R32(c->r[30]+0x000001A0u); // 803EE8D4
  cmps(c,0,(int32_t)c->r[0],0); // 803EE8D8
  if (crb(c,2)) { goto L_803EED0C; } // 803EE8DC
  c->r[29]=R32(c->r[30]+0x000000DCu); // 803EE8E0
  cmps(c,0,(int32_t)c->r[29],0); // 803EE8E4
  if (!crb(c,2)) { goto L_803EE8F4; } // 803EE8E8
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EE8EC
  goto L_803EEA38; // 803EE8F0
L_803EE8F4:;
  c->r[0]=R32(c->r[30]+0x000000E0u); // 803EE8F4
  cmps(c,0,(int32_t)c->r[0],0); // 803EE8F8
  if (crb(c,2)) { goto L_803EE91C; } // 803EE8FC
  cmps(c,0,(int32_t)c->r[0],1); // 803EE900
  if (crb(c,2)) { goto L_803EE94C; } // 803EE904
  cmps(c,0,(int32_t)c->r[0],2); // 803EE908
  if (crb(c,2)) { goto L_803EE9D4; } // 803EE90C
  cmps(c,0,(int32_t)c->r[0],3); // 803EE910
  if (crb(c,2)) { goto L_803EEA2C; } // 803EE914
  goto L_803EEA34; // 803EE918
L_803EE91C:;
  c->f[1]=c->f[31]; // 803EE91C
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE920
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE924
  c->r[9]=c->r[31]|c->r[31]; // 803EE928
  c->r[3]=c->r[29]+0x00000098u; // 803EE92C
  c->r[4]=c->r[29]+0x000000B8u; // 803EE930
  c->r[5]=c->r[29]+0x000000D8u; // 803EE934
  c->r[6]=c->r[29]+0x000000F8u; // 803EE938
  c->lr=0x803EE940u; f_803E5520(c); // 803EE93C
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE940
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803EE944
  goto L_803EEA38; // 803EE948
L_803EE94C:;
  c->r[3]=0u+0x80570000u; // 803EE94C
  c->r[0]=R32(c->r[30]+0x000000E8u); // 803EE950
  c->r[3]=c->r[3]+0x000041A8u; // 803EE954
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE958
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EE95C
  cmps(c,0,(int32_t)c->r[0],0); // 803EE960
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EE964
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE968
  if (crb(c,2)) { goto L_803EE984; } // 803EE96C
  cmps(c,0,(int32_t)c->r[31],0); // 803EE970
  if (crb(c,2)) { goto L_803EE984; } // 803EE974
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE978
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803EE97C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EE980
L_803EE984:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE984
  fcmp(c,0,c->f[0],c->f[28]); // 803EE988
  if (!crb(c,2)) { goto L_803EE994; } // 803EE98C
  goto L_803EE9A4; // 803EE990
L_803EE994:;
  c->f[2]=c->f[28]; // 803EE994
  c->lr=0x803EE99Cu; f_803AD468(c); // 803EE998
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EE99C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 803EE9A0
L_803EE9A4:;
  c->f[1]=c->f[0]; // 803EE9A4
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE9A8
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE9AC
  c->r[9]=c->r[31]|c->r[31]; // 803EE9B0
  c->r[3]=c->r[29]+0x00000098u; // 803EE9B4
  c->r[4]=c->r[29]+0x000000B8u; // 803EE9B8
  c->r[5]=c->r[29]+0x000000D8u; // 803EE9BC
  c->r[6]=c->r[29]+0x000000F8u; // 803EE9C0
  c->lr=0x803EE9C8u; f_803E5520(c); // 803EE9C4
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EE9C8
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803EE9CC
  goto L_803EEA38; // 803EE9D0
L_803EE9D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EE9D4
  if (crb(c,2)) { goto L_803EEA24; } // 803EE9D8
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EE9DC
  cmps(c,0,(int32_t)c->r[4],0); // 803EE9E0
  if (crb(c,2)) { goto L_803EEA24; } // 803EE9E4
  c->r[0]=R32(c->r[30]+0x000000F0u); // 803EE9E8
  c->r[9]=c->r[31]|c->r[31]; // 803EE9EC
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EE9F0
  c->r[3]=c->r[29]+0x00000098u; // 803EE9F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EE9F8
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EE9FC
  c->r[5]=c->r[4]+c->r[0]; // 803EEA00
  c->r[4]=c->r[29]+0x000000B8u; // 803EEA04
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EEA08
  c->r[5]=c->r[29]+0x000000D8u; // 803EEA0C
  c->r[6]=c->r[29]+0x000000F8u; // 803EEA10
  c->lr=0x803EEA18u; f_803E5520(c); // 803EEA14
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEA18
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803EEA1C
  goto L_803EEA38; // 803EEA20
L_803EEA24:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EEA24
  goto L_803EEA38; // 803EEA28
L_803EEA2C:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EEA2C
  goto L_803EEA38; // 803EEA30
L_803EEA34:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EEA34
L_803EEA38:;
  c->r[29]=R32(c->r[30]+0x000000FCu); // 803EEA38
  cmps(c,0,(int32_t)c->r[29],0); // 803EEA3C
  if (!crb(c,2)) { goto L_803EEA4C; } // 803EEA40
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEA44
  goto L_803EEB90; // 803EEA48
L_803EEA4C:;
  c->r[0]=R32(c->r[30]+0x00000100u); // 803EEA4C
  cmps(c,0,(int32_t)c->r[0],0); // 803EEA50
  if (crb(c,2)) { goto L_803EEA74; } // 803EEA54
  cmps(c,0,(int32_t)c->r[0],1); // 803EEA58
  if (crb(c,2)) { goto L_803EEAA4; } // 803EEA5C
  cmps(c,0,(int32_t)c->r[0],2); // 803EEA60
  if (crb(c,2)) { goto L_803EEB2C; } // 803EEA64
  cmps(c,0,(int32_t)c->r[0],3); // 803EEA68
  if (crb(c,2)) { goto L_803EEB84; } // 803EEA6C
  goto L_803EEB8C; // 803EEA70
L_803EEA74:;
  c->f[1]=c->f[31]; // 803EEA74
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEA78
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEA7C
  c->r[9]=c->r[31]|c->r[31]; // 803EEA80
  c->r[3]=c->r[29]+0x00000098u; // 803EEA84
  c->r[4]=c->r[29]+0x000000B8u; // 803EEA88
  c->r[5]=c->r[29]+0x000000D8u; // 803EEA8C
  c->r[6]=c->r[29]+0x000000F8u; // 803EEA90
  c->lr=0x803EEA98u; f_803E5520(c); // 803EEA94
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEA98
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EEA9C
  goto L_803EEB90; // 803EEAA0
L_803EEAA4:;
  c->r[3]=0u+0x80570000u; // 803EEAA4
  c->r[0]=R32(c->r[30]+0x00000108u); // 803EEAA8
  c->r[3]=c->r[3]+0x000041A8u; // 803EEAAC
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEAB0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EEAB4
  cmps(c,0,(int32_t)c->r[0],0); // 803EEAB8
  {uint32_t ea=c->r[30]+0x00000104u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEABC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EEAC0
  if (crb(c,2)) { goto L_803EEADC; } // 803EEAC4
  cmps(c,0,(int32_t)c->r[31],0); // 803EEAC8
  if (crb(c,2)) { goto L_803EEADC; } // 803EEACC
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEAD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803EEAD4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EEAD8
L_803EEADC:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEADC
  fcmp(c,0,c->f[0],c->f[29]); // 803EEAE0
  if (!crb(c,2)) { goto L_803EEAEC; } // 803EEAE4
  goto L_803EEAFC; // 803EEAE8
L_803EEAEC:;
  c->f[2]=c->f[29]; // 803EEAEC
  c->lr=0x803EEAF4u; f_803AD468(c); // 803EEAF0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EEAF4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803EEAF8
L_803EEAFC:;
  c->f[1]=c->f[0]; // 803EEAFC
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEB00
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEB04
  c->r[9]=c->r[31]|c->r[31]; // 803EEB08
  c->r[3]=c->r[29]+0x00000098u; // 803EEB0C
  c->r[4]=c->r[29]+0x000000B8u; // 803EEB10
  c->r[5]=c->r[29]+0x000000D8u; // 803EEB14
  c->r[6]=c->r[29]+0x000000F8u; // 803EEB18
  c->lr=0x803EEB20u; f_803E5520(c); // 803EEB1C
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEB20
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EEB24
  goto L_803EEB90; // 803EEB28
L_803EEB2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EEB2C
  if (crb(c,2)) { goto L_803EEB7C; } // 803EEB30
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EEB34
  cmps(c,0,(int32_t)c->r[4],0); // 803EEB38
  if (crb(c,2)) { goto L_803EEB7C; } // 803EEB3C
  c->r[0]=R32(c->r[30]+0x00000110u); // 803EEB40
  c->r[9]=c->r[31]|c->r[31]; // 803EEB44
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEB48
  c->r[3]=c->r[29]+0x00000098u; // 803EEB4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EEB50
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEB54
  c->r[5]=c->r[4]+c->r[0]; // 803EEB58
  c->r[4]=c->r[29]+0x000000B8u; // 803EEB5C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EEB60
  c->r[5]=c->r[29]+0x000000D8u; // 803EEB64
  c->r[6]=c->r[29]+0x000000F8u; // 803EEB68
  c->lr=0x803EEB70u; f_803E5520(c); // 803EEB6C
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEB70
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EEB74
  goto L_803EEB90; // 803EEB78
L_803EEB7C:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEB7C
  goto L_803EEB90; // 803EEB80
L_803EEB84:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEB84
  goto L_803EEB90; // 803EEB88
L_803EEB8C:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEB8C
L_803EEB90:;
  c->r[29]=R32(c->r[30]+0x0000011Cu); // 803EEB90
  cmps(c,0,(int32_t)c->r[29],0); // 803EEB94
  if (!crb(c,2)) { goto L_803EEBA4; } // 803EEB98
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EEB9C
  goto L_803EECE8; // 803EEBA0
L_803EEBA4:;
  c->r[0]=R32(c->r[30]+0x00000120u); // 803EEBA4
  cmps(c,0,(int32_t)c->r[0],0); // 803EEBA8
  if (crb(c,2)) { goto L_803EEBCC; } // 803EEBAC
  cmps(c,0,(int32_t)c->r[0],1); // 803EEBB0
  if (crb(c,2)) { goto L_803EEBFC; } // 803EEBB4
  cmps(c,0,(int32_t)c->r[0],2); // 803EEBB8
  if (crb(c,2)) { goto L_803EEC84; } // 803EEBBC
  cmps(c,0,(int32_t)c->r[0],3); // 803EEBC0
  if (crb(c,2)) { goto L_803EECDC; } // 803EEBC4
  goto L_803EECE4; // 803EEBC8
L_803EEBCC:;
  c->f[1]=c->f[31]; // 803EEBCC
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEBD0
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEBD4
  c->r[9]=c->r[31]|c->r[31]; // 803EEBD8
  c->r[3]=c->r[29]+0x00000098u; // 803EEBDC
  c->r[4]=c->r[29]+0x000000B8u; // 803EEBE0
  c->r[5]=c->r[29]+0x000000D8u; // 803EEBE4
  c->r[6]=c->r[29]+0x000000F8u; // 803EEBE8
  c->lr=0x803EEBF0u; f_803E5520(c); // 803EEBEC
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEBF0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 803EEBF4
  goto L_803EECE8; // 803EEBF8
L_803EEBFC:;
  c->r[3]=0u+0x80570000u; // 803EEBFC
  c->r[0]=R32(c->r[30]+0x00000128u); // 803EEC00
  c->r[3]=c->r[3]+0x000041A8u; // 803EEC04
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEC08
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EEC0C
  cmps(c,0,(int32_t)c->r[0],0); // 803EEC10
  {uint32_t ea=c->r[30]+0x00000124u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EEC14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EEC18
  if (crb(c,2)) { goto L_803EEC34; } // 803EEC1C
  cmps(c,0,(int32_t)c->r[31],0); // 803EEC20
  if (crb(c,2)) { goto L_803EEC34; } // 803EEC24
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEC28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803EEC2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EEC30
L_803EEC34:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEC34
  fcmp(c,0,c->f[0],c->f[30]); // 803EEC38
  if (!crb(c,2)) { goto L_803EEC44; } // 803EEC3C
  goto L_803EEC54; // 803EEC40
L_803EEC44:;
  c->f[2]=c->f[30]; // 803EEC44
  c->lr=0x803EEC4Cu; f_803AD468(c); // 803EEC48
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EEC4C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803EEC50
L_803EEC54:;
  c->f[1]=c->f[0]; // 803EEC54
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEC58
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEC5C
  c->r[9]=c->r[31]|c->r[31]; // 803EEC60
  c->r[3]=c->r[29]+0x00000098u; // 803EEC64
  c->r[4]=c->r[29]+0x000000B8u; // 803EEC68
  c->r[5]=c->r[29]+0x000000D8u; // 803EEC6C
  c->r[6]=c->r[29]+0x000000F8u; // 803EEC70
  c->lr=0x803EEC78u; f_803E5520(c); // 803EEC74
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEC78
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 803EEC7C
  goto L_803EECE8; // 803EEC80
L_803EEC84:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EEC84
  if (crb(c,2)) { goto L_803EECD4; } // 803EEC88
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EEC8C
  cmps(c,0,(int32_t)c->r[4],0); // 803EEC90
  if (crb(c,2)) { goto L_803EECD4; } // 803EEC94
  c->r[0]=R32(c->r[30]+0x00000130u); // 803EEC98
  c->r[9]=c->r[31]|c->r[31]; // 803EEC9C
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EECA0
  c->r[3]=c->r[29]+0x00000098u; // 803EECA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EECA8
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EECAC
  c->r[5]=c->r[4]+c->r[0]; // 803EECB0
  c->r[4]=c->r[29]+0x000000B8u; // 803EECB4
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EECB8
  c->r[5]=c->r[29]+0x000000D8u; // 803EECBC
  c->r[6]=c->r[29]+0x000000F8u; // 803EECC0
  c->lr=0x803EECC8u; f_803E5520(c); // 803EECC4
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EECC8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 803EECCC
  goto L_803EECE8; // 803EECD0
L_803EECD4:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EECD4
  goto L_803EECE8; // 803EECD8
L_803EECDC:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EECDC
  goto L_803EECE8; // 803EECE0
L_803EECE4:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EECE4
L_803EECE8:;
  c->f[1]=c->f[28]; // 803EECE8
  c->r[3]=c->r[1]+0x00000008u; // 803EECEC
  c->f[2]=c->f[29]; // 803EECF0
  c->lr=0x803EECF8u; f_803E3060(c); // 803EECF4
  c->r[3]=c->r[31]+0x00000008u; // 803EECF8
  c->r[5]=c->r[1]+0x00000008u; // 803EECFC
  c->r[4]=c->r[3]|c->r[3]; // 803EED00
  c->lr=0x803EED08u; f_803E2FB4(c); // 803EED04
  goto L_803EF124; // 803EED08
L_803EED0C:;
  c->r[29]=R32(c->r[30]+0x000000DCu); // 803EED0C
  cmps(c,0,(int32_t)c->r[29],0); // 803EED10
  if (!crb(c,2)) { goto L_803EED20; } // 803EED14
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EED18
  goto L_803EEE64; // 803EED1C
L_803EED20:;
  c->r[0]=R32(c->r[30]+0x000000E0u); // 803EED20
  cmps(c,0,(int32_t)c->r[0],0); // 803EED24
  if (crb(c,2)) { goto L_803EED48; } // 803EED28
  cmps(c,0,(int32_t)c->r[0],1); // 803EED2C
  if (crb(c,2)) { goto L_803EED78; } // 803EED30
  cmps(c,0,(int32_t)c->r[0],2); // 803EED34
  if (crb(c,2)) { goto L_803EEE00; } // 803EED38
  cmps(c,0,(int32_t)c->r[0],3); // 803EED3C
  if (crb(c,2)) { goto L_803EEE58; } // 803EED40
  goto L_803EEE60; // 803EED44
L_803EED48:;
  c->f[1]=c->f[31]; // 803EED48
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EED4C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EED50
  c->r[9]=c->r[31]|c->r[31]; // 803EED54
  c->r[3]=c->r[29]+0x00000098u; // 803EED58
  c->r[4]=c->r[29]+0x000000B8u; // 803EED5C
  c->r[5]=c->r[29]+0x000000D8u; // 803EED60
  c->r[6]=c->r[29]+0x000000F8u; // 803EED64
  c->lr=0x803EED6Cu; f_803E5520(c); // 803EED68
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EED6C
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803EED70
  goto L_803EEE64; // 803EED74
L_803EED78:;
  c->r[3]=0u+0x80570000u; // 803EED78
  c->r[0]=R32(c->r[30]+0x000000E8u); // 803EED7C
  c->r[3]=c->r[3]+0x000041A8u; // 803EED80
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EED84
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EED88
  cmps(c,0,(int32_t)c->r[0],0); // 803EED8C
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EED90
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EED94
  if (crb(c,2)) { goto L_803EEDB0; } // 803EED98
  cmps(c,0,(int32_t)c->r[31],0); // 803EED9C
  if (crb(c,2)) { goto L_803EEDB0; } // 803EEDA0
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEDA4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803EEDA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EEDAC
L_803EEDB0:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEDB0
  fcmp(c,0,c->f[0],c->f[28]); // 803EEDB4
  if (!crb(c,2)) { goto L_803EEDC0; } // 803EEDB8
  goto L_803EEDD0; // 803EEDBC
L_803EEDC0:;
  c->f[2]=c->f[28]; // 803EEDC0
  c->lr=0x803EEDC8u; f_803AD468(c); // 803EEDC4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EEDC8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 803EEDCC
L_803EEDD0:;
  c->f[1]=c->f[0]; // 803EEDD0
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEDD4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEDD8
  c->r[9]=c->r[31]|c->r[31]; // 803EEDDC
  c->r[3]=c->r[29]+0x00000098u; // 803EEDE0
  c->r[4]=c->r[29]+0x000000B8u; // 803EEDE4
  c->r[5]=c->r[29]+0x000000D8u; // 803EEDE8
  c->r[6]=c->r[29]+0x000000F8u; // 803EEDEC
  c->lr=0x803EEDF4u; f_803E5520(c); // 803EEDF0
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEDF4
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803EEDF8
  goto L_803EEE64; // 803EEDFC
L_803EEE00:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EEE00
  if (crb(c,2)) { goto L_803EEE50; } // 803EEE04
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EEE08
  cmps(c,0,(int32_t)c->r[4],0); // 803EEE0C
  if (crb(c,2)) { goto L_803EEE50; } // 803EEE10
  c->r[0]=R32(c->r[30]+0x000000F0u); // 803EEE14
  c->r[9]=c->r[31]|c->r[31]; // 803EEE18
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEE1C
  c->r[3]=c->r[29]+0x00000098u; // 803EEE20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EEE24
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEE28
  c->r[5]=c->r[4]+c->r[0]; // 803EEE2C
  c->r[4]=c->r[29]+0x000000B8u; // 803EEE30
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EEE34
  c->r[5]=c->r[29]+0x000000D8u; // 803EEE38
  c->r[6]=c->r[29]+0x000000F8u; // 803EEE3C
  c->lr=0x803EEE44u; f_803E5520(c); // 803EEE40
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEE44
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 803EEE48
  goto L_803EEE64; // 803EEE4C
L_803EEE50:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EEE50
  goto L_803EEE64; // 803EEE54
L_803EEE58:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EEE58
  goto L_803EEE64; // 803EEE5C
L_803EEE60:;
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803EEE60
L_803EEE64:;
  c->r[29]=R32(c->r[30]+0x000000FCu); // 803EEE64
  cmps(c,0,(int32_t)c->r[29],0); // 803EEE68
  if (!crb(c,2)) { goto L_803EEE78; } // 803EEE6C
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEE70
  goto L_803EEFBC; // 803EEE74
L_803EEE78:;
  c->r[0]=R32(c->r[30]+0x00000100u); // 803EEE78
  cmps(c,0,(int32_t)c->r[0],0); // 803EEE7C
  if (crb(c,2)) { goto L_803EEEA0; } // 803EEE80
  cmps(c,0,(int32_t)c->r[0],1); // 803EEE84
  if (crb(c,2)) { goto L_803EEED0; } // 803EEE88
  cmps(c,0,(int32_t)c->r[0],2); // 803EEE8C
  if (crb(c,2)) { goto L_803EEF58; } // 803EEE90
  cmps(c,0,(int32_t)c->r[0],3); // 803EEE94
  if (crb(c,2)) { goto L_803EEFB0; } // 803EEE98
  goto L_803EEFB8; // 803EEE9C
L_803EEEA0:;
  c->f[1]=c->f[31]; // 803EEEA0
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEEA4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEEA8
  c->r[9]=c->r[31]|c->r[31]; // 803EEEAC
  c->r[3]=c->r[29]+0x00000098u; // 803EEEB0
  c->r[4]=c->r[29]+0x000000B8u; // 803EEEB4
  c->r[5]=c->r[29]+0x000000D8u; // 803EEEB8
  c->r[6]=c->r[29]+0x000000F8u; // 803EEEBC
  c->lr=0x803EEEC4u; f_803E5520(c); // 803EEEC0
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEEC4
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EEEC8
  goto L_803EEFBC; // 803EEECC
L_803EEED0:;
  c->r[3]=0u+0x80570000u; // 803EEED0
  c->r[0]=R32(c->r[30]+0x00000108u); // 803EEED4
  c->r[3]=c->r[3]+0x000041A8u; // 803EEED8
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEEDC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EEEE0
  cmps(c,0,(int32_t)c->r[0],0); // 803EEEE4
  {uint32_t ea=c->r[30]+0x00000104u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEEE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EEEEC
  if (crb(c,2)) { goto L_803EEF08; } // 803EEEF0
  cmps(c,0,(int32_t)c->r[31],0); // 803EEEF4
  if (crb(c,2)) { goto L_803EEF08; } // 803EEEF8
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEEFC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803EEF00
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EEF04
L_803EEF08:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEF08
  fcmp(c,0,c->f[0],c->f[29]); // 803EEF0C
  if (!crb(c,2)) { goto L_803EEF18; } // 803EEF10
  goto L_803EEF28; // 803EEF14
L_803EEF18:;
  c->f[2]=c->f[29]; // 803EEF18
  c->lr=0x803EEF20u; f_803AD468(c); // 803EEF1C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EEF20
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803EEF24
L_803EEF28:;
  c->f[1]=c->f[0]; // 803EEF28
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEF2C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEF30
  c->r[9]=c->r[31]|c->r[31]; // 803EEF34
  c->r[3]=c->r[29]+0x00000098u; // 803EEF38
  c->r[4]=c->r[29]+0x000000B8u; // 803EEF3C
  c->r[5]=c->r[29]+0x000000D8u; // 803EEF40
  c->r[6]=c->r[29]+0x000000F8u; // 803EEF44
  c->lr=0x803EEF4Cu; f_803E5520(c); // 803EEF48
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEF4C
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EEF50
  goto L_803EEFBC; // 803EEF54
L_803EEF58:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EEF58
  if (crb(c,2)) { goto L_803EEFA8; } // 803EEF5C
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EEF60
  cmps(c,0,(int32_t)c->r[4],0); // 803EEF64
  if (crb(c,2)) { goto L_803EEFA8; } // 803EEF68
  c->r[0]=R32(c->r[30]+0x00000110u); // 803EEF6C
  c->r[9]=c->r[31]|c->r[31]; // 803EEF70
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEF74
  c->r[3]=c->r[29]+0x00000098u; // 803EEF78
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EEF7C
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EEF80
  c->r[5]=c->r[4]+c->r[0]; // 803EEF84
  c->r[4]=c->r[29]+0x000000B8u; // 803EEF88
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EEF8C
  c->r[5]=c->r[29]+0x000000D8u; // 803EEF90
  c->r[6]=c->r[29]+0x000000F8u; // 803EEF94
  c->lr=0x803EEF9Cu; f_803E5520(c); // 803EEF98
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EEF9C
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803EEFA0
  goto L_803EEFBC; // 803EEFA4
L_803EEFA8:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEFA8
  goto L_803EEFBC; // 803EEFAC
L_803EEFB0:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEFB0
  goto L_803EEFBC; // 803EEFB4
L_803EEFB8:;
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 803EEFB8
L_803EEFBC:;
  c->r[29]=R32(c->r[30]+0x0000011Cu); // 803EEFBC
  cmps(c,0,(int32_t)c->r[29],0); // 803EEFC0
  if (!crb(c,2)) { goto L_803EEFD0; } // 803EEFC4
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EEFC8
  goto L_803EF114; // 803EEFCC
L_803EEFD0:;
  c->r[0]=R32(c->r[30]+0x00000120u); // 803EEFD0
  cmps(c,0,(int32_t)c->r[0],0); // 803EEFD4
  if (crb(c,2)) { goto L_803EEFF8; } // 803EEFD8
  cmps(c,0,(int32_t)c->r[0],1); // 803EEFDC
  if (crb(c,2)) { goto L_803EF028; } // 803EEFE0
  cmps(c,0,(int32_t)c->r[0],2); // 803EEFE4
  if (crb(c,2)) { goto L_803EF0B0; } // 803EEFE8
  cmps(c,0,(int32_t)c->r[0],3); // 803EEFEC
  if (crb(c,2)) { goto L_803EF108; } // 803EEFF0
  goto L_803EF110; // 803EEFF4
L_803EEFF8:;
  c->f[1]=c->f[31]; // 803EEFF8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EEFFC
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EF000
  c->r[9]=c->r[31]|c->r[31]; // 803EF004
  c->r[3]=c->r[29]+0x00000098u; // 803EF008
  c->r[4]=c->r[29]+0x000000B8u; // 803EF00C
  c->r[5]=c->r[29]+0x000000D8u; // 803EF010
  c->r[6]=c->r[29]+0x000000F8u; // 803EF014
  c->lr=0x803EF01Cu; f_803E5520(c); // 803EF018
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF01C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 803EF020
  goto L_803EF114; // 803EF024
L_803EF028:;
  c->r[3]=0u+0x80570000u; // 803EF028
  c->r[0]=R32(c->r[30]+0x00000128u); // 803EF02C
  c->r[3]=c->r[3]+0x000041A8u; // 803EF030
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF034
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF038
  cmps(c,0,(int32_t)c->r[0],0); // 803EF03C
  {uint32_t ea=c->r[30]+0x00000124u; c->f[30]=c->ps1[30]=RF32(ea);} // 803EF040
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EF044
  if (crb(c,2)) { goto L_803EF060; } // 803EF048
  cmps(c,0,(int32_t)c->r[31],0); // 803EF04C
  if (crb(c,2)) { goto L_803EF060; } // 803EF050
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF054
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 803EF058
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803EF05C
L_803EF060:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF060
  fcmp(c,0,c->f[0],c->f[30]); // 803EF064
  if (!crb(c,2)) { goto L_803EF070; } // 803EF068
  goto L_803EF080; // 803EF06C
L_803EF070:;
  c->f[2]=c->f[30]; // 803EF070
  c->lr=0x803EF078u; f_803AD468(c); // 803EF074
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803EF078
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 803EF07C
L_803EF080:;
  c->f[1]=c->f[0]; // 803EF080
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EF084
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EF088
  c->r[9]=c->r[31]|c->r[31]; // 803EF08C
  c->r[3]=c->r[29]+0x00000098u; // 803EF090
  c->r[4]=c->r[29]+0x000000B8u; // 803EF094
  c->r[5]=c->r[29]+0x000000D8u; // 803EF098
  c->r[6]=c->r[29]+0x000000F8u; // 803EF09C
  c->lr=0x803EF0A4u; f_803E5520(c); // 803EF0A0
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF0A4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 803EF0A8
  goto L_803EF114; // 803EF0AC
L_803EF0B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EF0B0
  if (crb(c,2)) { goto L_803EF100; } // 803EF0B4
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EF0B8
  cmps(c,0,(int32_t)c->r[4],0); // 803EF0BC
  if (crb(c,2)) { goto L_803EF100; } // 803EF0C0
  c->r[0]=R32(c->r[30]+0x00000130u); // 803EF0C4
  c->r[9]=c->r[31]|c->r[31]; // 803EF0C8
  c->r[7]=R32(c->r[29]+0x00000118u); // 803EF0CC
  c->r[3]=c->r[29]+0x00000098u; // 803EF0D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803EF0D4
  c->r[8]=R32(c->r[29]+0x0000011Cu); // 803EF0D8
  c->r[5]=c->r[4]+c->r[0]; // 803EF0DC
  c->r[4]=c->r[29]+0x000000B8u; // 803EF0E0
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF0E4
  c->r[5]=c->r[29]+0x000000D8u; // 803EF0E8
  c->r[6]=c->r[29]+0x000000F8u; // 803EF0EC
  c->lr=0x803EF0F4u; f_803E5520(c); // 803EF0F0
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF0F4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 803EF0F8
  goto L_803EF114; // 803EF0FC
L_803EF100:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EF100
  goto L_803EF114; // 803EF104
L_803EF108:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EF108
  goto L_803EF114; // 803EF10C
L_803EF110:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EF110
L_803EF114:;
  c->f[1]=c->f[28]; // 803EF114
  c->r[3]=c->r[31]+0x00000008u; // 803EF118
  c->f[2]=c->f[29]; // 803EF11C
  c->lr=0x803EF124u; f_803E3060(c); // 803EF120
L_803EF124:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 803EF124
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 803EF128
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 803EF12C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 803EF130
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 803EF134
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 803EF138
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 803EF13C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 803EF140
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803EF144
  c->r[30]=R32(c->r[1]+0x00000048u); // 803EF148
  c->r[0]=R32(c->r[1]+0x00000094u); // 803EF14C
  c->r[29]=R32(c->r[1]+0x00000044u); // 803EF150
  c->lr=c->r[0]; // 803EF154
  c->r[1]=c->r[1]+0x00000090u; // 803EF158
  return; // 803EF15C
}

// fn_803EF160
void f_803EF160(Ctx* __restrict c) {
  trace_call(0x803EF160u);
  c->r[3]=0u+0x80470000u; // 803EF160
  c->r[3]=c->r[3]+0xFFFF99A8u; // 803EF164
  return; // 803EF168
}

// fn_803EF16C
void f_803EF16C(Ctx* __restrict c) {
  trace_call(0x803EF16Cu);
  c->r[3]=c->r[13]+0xFFFFDEFCu; // 803EF16C
  return; // 803EF170
}

// fn_803EF174
void f_803EF174(Ctx* __restrict c) {
  trace_call(0x803EF174u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EF174
  c->r[0]=c->lr; // 803EF178
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EF17C
  W32(c->r[1]+0x00000434u,c->r[0]); // 803EF180
  c->r[0]=0u+0x00000000u; // 803EF184
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF188
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803EF18C
  c->r[31]=c->r[4]|c->r[4]; // 803EF190
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF194
  W32(c->r[1]+0x00000428u,c->r[30]); // 803EF198
  c->r[30]=c->r[3]|c->r[3]; // 803EF19C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803EF1A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803EF1A4
  W32(c->r[1]+0x00000020u,c->r[0]); // 803EF1A8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803EF1AC
  W32(c->r[1]+0x00000028u,c->r[0]); // 803EF1B0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803EF1B4
  W32(c->r[1]+0x00000030u,c->r[0]); // 803EF1B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803EF1BC
L_803EF1C0:;
  c->r[3]=c->r[31]|c->r[31]; // 803EF1C0
  c->r[4]=c->r[1]+0x00000008u; // 803EF1C4
  c->r[5]=c->r[1]+0x00000010u; // 803EF1C8
  c->r[6]=c->r[1]+0x0000000Cu; // 803EF1CC
  c->r[7]=c->r[1]+0x00000038u; // 803EF1D0
  c->r[8]=c->r[1]+0x00000018u; // 803EF1D4
  c->r[9]=0u+0x000003E8u; // 803EF1D8
  c->lr=0x803EF1E0u; f_80403308(c); // 803EF1DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EF1E0
  cmps(c,0,(int32_t)c->r[0],147); // 803EF1E4
  if (crb(c,2)) { goto L_803EF218; } // 803EF1E8
  cmps(c,0,(int32_t)c->r[0],148); // 803EF1EC
  if (crb(c,2)) { goto L_803EF230; } // 803EF1F0
  cmps(c,0,(int32_t)c->r[0],149); // 803EF1F4
  if (crb(c,2)) { goto L_803EF248; } // 803EF1F8
  cmps(c,0,(int32_t)c->r[0],150); // 803EF1FC
  if (crb(c,2)) { goto L_803EF260; } // 803EF200
  cmps(c,0,(int32_t)c->r[0],151); // 803EF204
  if (crb(c,2)) { goto L_803EF278; } // 803EF208
  cmps(c,0,(int32_t)c->r[0],152); // 803EF20C
  if (crb(c,2)) { goto L_803EF284; } // 803EF210
  goto L_803EF28C; // 803EF214
L_803EF218:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EF218
  c->r[3]=c->r[31]|c->r[31]; // 803EF21C
  c->r[5]=c->r[1]+0x00000018u; // 803EF220
  c->r[6]=c->r[30]+0x00000098u; // 803EF224
  c->lr=0x803EF22Cu; f_804039BC(c); // 803EF228
  goto L_803EF28C; // 803EF22C
L_803EF230:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EF230
  c->r[3]=c->r[31]|c->r[31]; // 803EF234
  c->r[5]=c->r[1]+0x00000018u; // 803EF238
  c->r[6]=c->r[30]+0x000000B8u; // 803EF23C
  c->lr=0x803EF244u; f_804039BC(c); // 803EF240
  goto L_803EF28C; // 803EF244
L_803EF248:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EF248
  c->r[3]=c->r[31]|c->r[31]; // 803EF24C
  c->r[5]=c->r[1]+0x00000018u; // 803EF250
  c->r[6]=c->r[30]+0x000000D8u; // 803EF254
  c->lr=0x803EF25Cu; f_804039BC(c); // 803EF258
  goto L_803EF28C; // 803EF25C
L_803EF260:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EF260
  c->r[3]=c->r[31]|c->r[31]; // 803EF264
  c->r[5]=c->r[1]+0x00000018u; // 803EF268
  c->r[6]=c->r[30]+0x000000F8u; // 803EF26C
  c->lr=0x803EF274u; f_804039BC(c); // 803EF270
  goto L_803EF28C; // 803EF274
L_803EF278:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF278
  W32(c->r[30]+0x00000118u,c->r[0]); // 803EF27C
  goto L_803EF28C; // 803EF280
L_803EF284:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF284
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 803EF288
L_803EF28C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EF28C
  cmps(c,0,(int32_t)c->r[0],6); // 803EF290
  if (!crb(c,2)) { IRQCHK(c); goto L_803EF1C0; } // 803EF294
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803EF298
  c->r[3]=0u+0x00000001u; // 803EF29C
  c->r[30]=R32(c->r[1]+0x00000428u); // 803EF2A0
  c->r[0]=R32(c->r[1]+0x00000434u); // 803EF2A4
  c->lr=c->r[0]; // 803EF2A8
  c->r[1]=c->r[1]+0x00000430u; // 803EF2AC
  return; // 803EF2B0
}

// fn_803EF2B4
void f_803EF2B4(Ctx* __restrict c) {
  trace_call(0x803EF2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EF2B4
  c->r[0]=c->lr; // 803EF2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EF2BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EF2C0
  c->r[31]=c->r[4]|c->r[4]; // 803EF2C4
  c->r[4]=0u+0x00000093u; // 803EF2C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EF2CC
  c->r[30]=c->r[3]|c->r[3]; // 803EF2D0
  c->r[3]=c->r[31]|c->r[31]; // 803EF2D4
  c->r[5]=c->r[30]+0x00000098u; // 803EF2D8
  c->lr=0x803EF2E0u; f_80403D44(c); // 803EF2DC
  c->r[3]=c->r[31]|c->r[31]; // 803EF2E0
  c->r[5]=c->r[30]+0x000000B8u; // 803EF2E4
  c->r[4]=0u+0x00000094u; // 803EF2E8
  c->lr=0x803EF2F0u; f_80403D44(c); // 803EF2EC
  c->r[3]=c->r[31]|c->r[31]; // 803EF2F0
  c->r[5]=c->r[30]+0x000000D8u; // 803EF2F4
  c->r[4]=0u+0x00000095u; // 803EF2F8
  c->lr=0x803EF300u; f_80403D44(c); // 803EF2FC
  c->r[3]=c->r[31]|c->r[31]; // 803EF300
  c->r[5]=c->r[30]+0x000000F8u; // 803EF304
  c->r[4]=0u+0x00000096u; // 803EF308
  c->lr=0x803EF310u; f_80403D44(c); // 803EF30C
  c->r[5]=R32(c->r[30]+0x00000118u); // 803EF310
  c->r[3]=c->r[31]|c->r[31]; // 803EF314
  c->r[4]=0u+0x00000097u; // 803EF318
  c->lr=0x803EF320u; f_80403B54(c); // 803EF31C
  c->r[5]=R32(c->r[30]+0x0000011Cu); // 803EF320
  c->r[3]=c->r[31]|c->r[31]; // 803EF324
  c->r[4]=0u+0x00000098u; // 803EF328
  c->lr=0x803EF330u; f_80403B54(c); // 803EF32C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EF330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EF334
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EF338
  c->lr=c->r[0]; // 803EF33C
  c->r[1]=c->r[1]+0x00000010u; // 803EF340
  return; // 803EF344
}

// fn_803EF348
void f_803EF348(Ctx* __restrict c) {
  trace_call(0x803EF348u);
  c->r[3]=c->r[13]+0xFFFFDF00u; // 803EF348
  return; // 803EF34C
}

// fn_803EF350
void f_803EF350(Ctx* __restrict c) {
  trace_call(0x803EF350u);
  c->r[3]=c->r[13]+0xFFFFDF08u; // 803EF350
  return; // 803EF354
}

// fn_803EF358
void f_803EF358(Ctx* __restrict c) {
  trace_call(0x803EF358u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EF358
  c->r[0]=c->lr; // 803EF35C
  cmps(c,0,(int32_t)c->r[3],0); // 803EF360
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EF364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EF368
  c->r[31]=c->r[4]|c->r[4]; // 803EF36C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EF370
  c->r[30]=c->r[3]|c->r[3]; // 803EF374
  if (crb(c,2)) { goto L_803EF3D8; } // 803EF378
  c->r[5]=0u+0x80470000u; // 803EF37C
  c->r[4]=R32(c->r[30]+0x00000098u); // 803EF380
  c->r[5]=c->r[5]+0xFFFF9C58u; // 803EF384
  W32(c->r[3]+0x00000000u,c->r[5]); // 803EF388
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803EF38C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EF390
  c->r[12]=R32(c->r[12]+0x00000048u); // 803EF394
  c->ctr=c->r[12]; // 803EF398
  if (true) { c->lr=0x803EF3A0u; dispatch(c,c->ctr); } // 803EF39C
  cmps(c,0,(int32_t)c->r[30],0); // 803EF3A0
  if (crb(c,2)) { goto L_803EF3C8; } // 803EF3A4
  c->r[3]=R32(c->r[30]+0x00000080u); // 803EF3A8
  c->r[4]=0u+0x80470000u; // 803EF3AC
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803EF3B0
  W32(c->r[30]+0x00000000u,c->r[4]); // 803EF3B4
  cmps(c,0,(int32_t)c->r[3],0); // 803EF3B8
  if (crb(c,2)) { goto L_803EF3C8; } // 803EF3BC
  c->r[4]=0u+0x00000001u; // 803EF3C0
  c->lr=0x803EF3C8u; f_80402948(c); // 803EF3C4
L_803EF3C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803EF3C8
  if (!crb(c,1)) { goto L_803EF3D8; } // 803EF3CC
  c->r[3]=c->r[30]|c->r[30]; // 803EF3D0
  c->lr=0x803EF3D8u; f_803FE694(c); // 803EF3D4
L_803EF3D8:;
  c->r[3]=c->r[30]|c->r[30]; // 803EF3D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EF3DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EF3E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EF3E4
  c->lr=c->r[0]; // 803EF3E8
  c->r[1]=c->r[1]+0x00000010u; // 803EF3EC
  return; // 803EF3F0
}

// fn_803EF3F4
void f_803EF3F4(Ctx* __restrict c) {
  trace_call(0x803EF3F4u);
  {uint32_t ea=c->r[1]+0xFFFFFBC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EF3F4
  c->r[0]=c->lr; // 803EF3F8
  W32(c->r[1]+0x00000444u,c->r[0]); // 803EF3FC
  c->r[11]=c->r[1]+0x00000440u; // 803EF400
  c->lr=0x803EF408u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803EF404
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EF408
  c->r[31]=0u+0x00000000u; // 803EF40C
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF410
  c->r[29]=c->r[3]|c->r[3]; // 803EF414
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF418
  c->r[30]=c->r[4]|c->r[4]; // 803EF41C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803EF420
  c->r[28]=0u+0x00000001u; // 803EF424
  c->r[27]=0u+0x00000004u; // 803EF428
  c->r[26]=0u+0x00000002u; // 803EF42C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803EF430
  W32(c->r[1]+0x00000020u,c->r[31]); // 803EF434
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803EF438
  W32(c->r[1]+0x00000028u,c->r[31]); // 803EF43C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803EF440
  W32(c->r[1]+0x00000030u,c->r[31]); // 803EF444
  W32(c->r[1]+0x00000034u,c->r[31]); // 803EF448
L_803EF44C:;
  c->r[3]=c->r[30]|c->r[30]; // 803EF44C
  c->r[4]=c->r[1]+0x00000008u; // 803EF450
  c->r[5]=c->r[1]+0x00000010u; // 803EF454
  c->r[6]=c->r[1]+0x0000000Cu; // 803EF458
  c->r[7]=c->r[1]+0x00000038u; // 803EF45C
  c->r[8]=c->r[1]+0x00000018u; // 803EF460
  c->r[9]=0u+0x000003E8u; // 803EF464
  c->lr=0x803EF46Cu; f_80403308(c); // 803EF468
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EF46C
  cmps(c,0,(int32_t)c->r[0],98); // 803EF470
  if (crb(c,2)) { goto L_803EF59C; } // 803EF474
  if (!crb(c,0)) { goto L_803EF4B8; } // 803EF478
  cmps(c,0,(int32_t)c->r[0],51); // 803EF47C
  if (crb(c,2)) { goto L_803EF4E8; } // 803EF480
  if (!crb(c,0)) { goto L_803EF4AC; } // 803EF484
  cmps(c,0,(int32_t)c->r[0],14); // 803EF488
  if (crb(c,2)) { goto L_803EF600; } // 803EF48C
  if (!crb(c,0)) { goto L_803EF4A0; } // 803EF490
  cmps(c,0,(int32_t)c->r[0],13); // 803EF494
  if (!crb(c,0)) { goto L_803EF4F4; } // 803EF498
  goto L_803EF600; // 803EF49C
L_803EF4A0:;
  cmps(c,0,(int32_t)c->r[0],16); // 803EF4A0
  if (!crb(c,0)) { goto L_803EF600; } // 803EF4A4
  goto L_803EF500; // 803EF4A8
L_803EF4AC:;
  cmps(c,0,(int32_t)c->r[0],58); // 803EF4AC
  if (crb(c,2)) { goto L_803EF518; } // 803EF4B0
  goto L_803EF600; // 803EF4B4
L_803EF4B8:;
  cmps(c,0,(int32_t)c->r[0],157); // 803EF4B8
  if (crb(c,2)) { goto L_803EF50C; } // 803EF4BC
  if (!crb(c,0)) { goto L_803EF4D8; } // 803EF4C0
  cmps(c,0,(int32_t)c->r[0],156); // 803EF4C4
  if (!crb(c,0)) { goto L_803EF530; } // 803EF4C8
  cmps(c,0,(int32_t)c->r[0],100); // 803EF4CC
  if (!crb(c,0)) { goto L_803EF600; } // 803EF4D0
  goto L_803EF5BC; // 803EF4D4
L_803EF4D8:;
  cmps(c,0,(int32_t)c->r[0],159); // 803EF4D8
  if (crb(c,2)) { goto L_803EF524; } // 803EF4DC
  if (!crb(c,0)) { goto L_803EF600; } // 803EF4E0
  goto L_803EF588; // 803EF4E4
L_803EF4E8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF4E8
  W32(c->r[29]+0x000000A0u,c->r[0]); // 803EF4EC
  goto L_803EF600; // 803EF4F0
L_803EF4F4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF4F4
  W32(c->r[29]+0x0000009Cu,c->r[0]); // 803EF4F8
  goto L_803EF600; // 803EF4FC
L_803EF500:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF500
  W32(c->r[29]+0x000000A4u,c->r[0]); // 803EF504
  goto L_803EF600; // 803EF508
L_803EF50C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF50C
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[0]);} // 803EF510
  goto L_803EF600; // 803EF514
L_803EF518:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF518
  W32(c->r[29]+0x000000A8u,c->r[0]); // 803EF51C
  goto L_803EF600; // 803EF520
L_803EF524:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF524
  W32(c->r[29]+0x000000B0u,c->r[0]); // 803EF528
  goto L_803EF600; // 803EF52C
L_803EF530:;
  c->r[3]=c->r[1]+0x00000038u; // 803EF530
  c->r[4]=0u+0x0000005Cu; // 803EF534
  c->lr=0x803EF53Cu; f_803A71CC(c); // 803EF538
  cmps(c,0,(int32_t)c->r[3],0); // 803EF53C
  c->r[4]=c->r[3]|c->r[3]; // 803EF540
  if (crb(c,2)) { goto L_803EF568; } // 803EF544
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803EF548
  c->r[4]=c->r[4]+0x00000001u; // 803EF54C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EF550
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803EF554
  c->ctr=c->r[12]; // 803EF558
  if (true) { c->lr=0x803EF560u; dispatch(c,c->ctr); } // 803EF55C
  W32(c->r[29]+0x00000098u,c->r[3]); // 803EF560
  goto L_803EF600; // 803EF564
L_803EF568:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803EF568
  c->r[4]=c->r[1]+0x00000038u; // 803EF56C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EF570
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803EF574
  c->ctr=c->r[12]; // 803EF578
  if (true) { c->lr=0x803EF580u; dispatch(c,c->ctr); } // 803EF57C
  W32(c->r[29]+0x00000098u,c->r[3]); // 803EF580
  goto L_803EF600; // 803EF584
L_803EF588:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EF588
  c->r[3]=c->r[30]|c->r[30]; // 803EF58C
  c->r[5]=c->r[29]+0x000000B4u; // 803EF590
  c->lr=0x803EF598u; f_804039AC(c); // 803EF594
  goto L_803EF600; // 803EF598
L_803EF59C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EF59C
  c->r[0]=R32(c->r[29]+0x00000060u); // 803EF5A0
  c->r[3]=0u-c->r[4]; // 803EF5A4
  c->r[3]=c->r[3]|c->r[4]; // 803EF5A8
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 803EF5AC
  c->r[0]=c->r[0]|c->r[3]; // 803EF5B0
  W32(c->r[29]+0x00000060u,c->r[0]); // 803EF5B4
  goto L_803EF600; // 803EF5B8
L_803EF5BC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF5BC
  W32(c->r[29]+0x00000064u,c->r[0]); // 803EF5C0
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EF5C4
  cmps(c,0,(int32_t)c->r[0],0); // 803EF5C8
  if (!crb(c,2)) { goto L_803EF5D8; } // 803EF5CC
  W32(c->r[29]+0x00000068u,c->r[28]); // 803EF5D0
  goto L_803EF600; // 803EF5D4
L_803EF5D8:;
  cmps(c,0,(int32_t)c->r[0],1); // 803EF5D8
  if (!crb(c,2)) { goto L_803EF5E8; } // 803EF5DC
  W32(c->r[29]+0x00000068u,c->r[26]); // 803EF5E0
  goto L_803EF600; // 803EF5E4
L_803EF5E8:;
  cmps(c,0,(int32_t)c->r[0],2); // 803EF5E8
  if (crb(c,0)) { goto L_803EF5F8; } // 803EF5EC
  W32(c->r[29]+0x00000068u,c->r[27]); // 803EF5F0
  goto L_803EF600; // 803EF5F4
L_803EF5F8:;
  W32(c->r[29]+0x00000068u,c->r[28]); // 803EF5F8
  W32(c->r[1]+0x00000010u,c->r[31]); // 803EF5FC
L_803EF600:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EF600
  cmps(c,0,(int32_t)c->r[0],6); // 803EF604
  if (!crb(c,2)) { IRQCHK(c); goto L_803EF44C; } // 803EF608
  c->r[11]=c->r[1]+0x00000440u; // 803EF60C
  c->r[3]=0u+0x00000001u; // 803EF610
  c->lr=0x803EF618u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803EF614
  c->r[0]=R32(c->r[1]+0x00000444u); // 803EF618
  c->lr=c->r[0]; // 803EF61C
  c->r[1]=c->r[1]+0x00000440u; // 803EF620
  return; // 803EF624
}

// fn_803EF628
void f_803EF628(Ctx* __restrict c) {
  trace_call(0x803EF628u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EF628
  c->r[0]=c->lr; // 803EF62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EF630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EF634
  c->r[31]=c->r[4]|c->r[4]; // 803EF638
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EF63C
  c->r[30]=c->r[3]|c->r[3]; // 803EF640
  c->r[0]=R32(c->r[3]+0x00000098u); // 803EF644
  cmps(c,0,(int32_t)c->r[0],0); // 803EF648
  if (crb(c,2)) { goto L_803EF674; } // 803EF64C
  c->r[3]=c->r[0]|c->r[0]; // 803EF650
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EF654
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803EF658
  c->ctr=c->r[12]; // 803EF65C
  if (true) { c->lr=0x803EF664u; dispatch(c,c->ctr); } // 803EF660
  c->r[5]=c->r[3]|c->r[3]; // 803EF664
  c->r[3]=c->r[31]|c->r[31]; // 803EF668
  c->r[4]=0u+0x0000009Cu; // 803EF66C
  c->lr=0x803EF674u; f_80403C34(c); // 803EF670
L_803EF674:;
  c->r[5]=R32(c->r[30]+0x0000009Cu); // 803EF674
  c->r[3]=c->r[31]|c->r[31]; // 803EF678
  c->r[4]=0u+0x0000000Du; // 803EF67C
  c->lr=0x803EF684u; f_80403B54(c); // 803EF680
  c->r[5]=R32(c->r[30]+0x000000A0u); // 803EF684
  c->r[3]=c->r[31]|c->r[31]; // 803EF688
  c->r[4]=0u+0x00000033u; // 803EF68C
  c->lr=0x803EF694u; f_80403B54(c); // 803EF690
  c->r[5]=R32(c->r[30]+0x000000A4u); // 803EF694
  c->r[3]=c->r[31]|c->r[31]; // 803EF698
  c->r[4]=0u+0x0000000Fu; // 803EF69C
  c->lr=0x803EF6A4u; f_80403B54(c); // 803EF6A0
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF6A4
  c->r[3]=c->r[31]|c->r[31]; // 803EF6A8
  c->r[4]=0u+0x0000009Du; // 803EF6AC
  c->lr=0x803EF6B4u; f_80403BC4(c); // 803EF6B0
  c->r[5]=R32(c->r[30]+0x000000B4u); // 803EF6B4
  c->r[3]=c->r[31]|c->r[31]; // 803EF6B8
  c->r[4]=0u+0x0000009Eu; // 803EF6BC
  c->lr=0x803EF6C4u; f_80403CA4(c); // 803EF6C0
  c->r[5]=R32(c->r[30]+0x000000A8u); // 803EF6C4
  c->r[3]=c->r[31]|c->r[31]; // 803EF6C8
  c->r[4]=0u+0x0000003Au; // 803EF6CC
  c->lr=0x803EF6D4u; f_80403B54(c); // 803EF6D0
  c->r[5]=R32(c->r[30]+0x000000B0u); // 803EF6D4
  c->r[3]=c->r[31]|c->r[31]; // 803EF6D8
  c->r[4]=0u+0x0000009Fu; // 803EF6DC
  c->lr=0x803EF6E4u; f_80403B54(c); // 803EF6E0
  c->r[0]=R32(c->r[30]+0x00000060u); // 803EF6E4
  c->r[3]=c->r[31]|c->r[31]; // 803EF6E8
  c->r[4]=0u+0x00000062u; // 803EF6EC
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 803EF6F0
  c->lr=0x803EF6F8u; f_80403B54(c); // 803EF6F4
  c->r[5]=R32(c->r[30]+0x00000064u); // 803EF6F8
  c->r[3]=c->r[31]|c->r[31]; // 803EF6FC
  c->r[4]=0u+0x00000063u; // 803EF700
  c->lr=0x803EF708u; f_80403B54(c); // 803EF704
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EF708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EF70C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EF710
  c->lr=c->r[0]; // 803EF714
  c->r[1]=c->r[1]+0x00000010u; // 803EF718
  return; // 803EF71C
}

// fn_803EF720
void f_803EF720(Ctx* __restrict c) {
  trace_call(0x803EF720u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EF720
  c->r[0]=c->lr; // 803EF724
  c->r[7]=0u+0x43300000u; // 803EF728
  c->r[6]=0u+0x00190000u; // 803EF72C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803EF730
  c->r[5]=0u+0x80570000u; // 803EF734
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF738
  c->r[8]=c->r[6]+0x0000660Du; // 803EF73C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803EF740
  c->r[5]=c->r[5]+0x000041A8u; // 803EF744
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803EF748
  c->r[31]=c->r[4]|c->r[4]; // 803EF74C
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803EF750
  W32(c->r[1]+0x00000018u,c->r[7]); // 803EF754
  c->r[0]=c->r[0]^0x80000000u; // 803EF758
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[5]=RF64(ea);} // 803EF75C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803EF760
  c->r[0]=0u+0x00000000u; // 803EF764
  {uint32_t ea=c->r[2]+0xFFFFA7CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 803EF768
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 803EF76C
  W32(c->r[1]+0x00000020u,c->r[7]); // 803EF770
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803EF774
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EF778
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803EF77C
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[1]);} // 803EF780
  c->r[6]=R32(c->r[13]+0xFFFFF3F8u); // 803EF784
  {uint32_t ea=c->r[3]+0x000000ACu; c->f[6]=c->ps1[6]=RF32(ea);} // 803EF788
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[8]); // 803EF78C
  c->r[6]=c->r[6]+0x3C6F0000u; // 803EF790
  c->r[7]=c->r[6]+0xFFFFF35Fu; // 803EF794
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[8]); // 803EF798
  c->r[7]=rotl(c->r[7],28)&0x0FFFFFFFu; // 803EF79C
  W32(c->r[1]+0x00000024u,c->r[7]); // 803EF7A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 803EF7A4
  c->r[6]=c->r[6]+0x3C6F0000u; // 803EF7A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803EF7AC
  c->r[7]=c->r[6]+0xFFFFF35Fu; // 803EF7B0
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[8]); // 803EF7B4
  c->r[7]=rotl(c->r[7],28)&0x0FFFFFFFu; // 803EF7B8
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[0]); // 803EF7BC
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 803EF7C0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803EF7C4
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 803EF7C8
  c->r[6]=c->r[6]+0x3C6F0000u; // 803EF7CC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 803EF7D0
  c->r[7]=c->r[6]+0xFFFFF35Fu; // 803EF7D4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803EF7D8
  c->r[6]=rotl(c->r[7],28)&0x0FFFFFFFu; // 803EF7DC
  W32(c->r[1]+0x00000024u,c->r[6]); // 803EF7E0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 803EF7E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 803EF7E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[6]); // 803EF7EC
  W32(c->r[13]+0xFFFFF3F8u,c->r[7]); // 803EF7F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803EF7F4
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 803EF7F8
  W16(c->r[4]+0x000000A6u,c->r[0]); // 803EF7FC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 803EF800
  {uint32_t ea=c->r[4]+0x000000F4u; WF32(ea,c->f[2]);} // 803EF804
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803EF808
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 803EF80C
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 803EF810
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 803EF814
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803EF818
  {uint32_t ea=c->r[4]+0x000000F8u; WF32(ea,c->f[1]);} // 803EF81C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803EF820
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 803EF824
  {uint32_t ea=c->r[4]+0x000000F0u; WF32(ea,c->f[0]);} // 803EF828
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF82C
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[1]);} // 803EF830
  c->r[3]=R32(c->r[3]+0x00000098u); // 803EF834
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803EF838
  cmps(c,0,(int32_t)c->r[3],0); // 803EF83C
  if (crb(c,2)) { goto L_803EF85C; } // 803EF840
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EF844
  c->r[12]=R32(c->r[12]+0x00000010u); // 803EF848
  c->ctr=c->r[12]; // 803EF84C
  if (true) { c->lr=0x803EF854u; dispatch(c,c->ctr); } // 803EF850
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[1]);} // 803EF854
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 803EF858
L_803EF85C:;
  c->r[3]=0u+0x00000080u; // 803EF85C
  c->r[0]=0u+0x000000FFu; // 803EF860
  W8(c->r[31]+0x00000102u,c->r[3]); // 803EF864
  W8(c->r[31]+0x00000101u,c->r[3]); // 803EF868
  W8(c->r[31]+0x00000100u,c->r[3]); // 803EF86C
  W8(c->r[31]+0x00000103u,c->r[0]); // 803EF870
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803EF874
  c->r[0]=R32(c->r[1]+0x00000034u); // 803EF878
  c->lr=c->r[0]; // 803EF87C
  c->r[1]=c->r[1]+0x00000030u; // 803EF880
  return; // 803EF884
}

// fn_803EF888
void f_803EF888(Ctx* __restrict c) {
  trace_call(0x803EF888u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EF888
  c->r[0]=c->lr; // 803EF88C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 803EF890
  W32(c->r[1]+0x000000CCu,c->r[31]); // 803EF894
  c->r[31]=c->r[4]|c->r[4]; // 803EF898
  W32(c->r[1]+0x000000C8u,c->r[30]); // 803EF89C
  c->r[30]=c->r[3]|c->r[3]; // 803EF8A0
  W32(c->r[1]+0x000000C4u,c->r[29]); // 803EF8A4
  W32(c->r[1]+0x000000C0u,c->r[28]); // 803EF8A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A4u); // 803EF8AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803EF8B0
  if (!crb(c,2)) { goto L_803EF91C; } // 803EF8B4
  c->r[3]=0u+0x80570000u; // 803EF8B8
  c->r[3]=c->r[3]+0x000041A8u; // 803EF8BC
  c->r[0]=R32(c->r[3]+0x00000014u); // 803EF8C0
  cmps(c,0,(int32_t)c->r[0],0); // 803EF8C4
  if (crb(c,2)) { goto L_803EF8F0; } // 803EF8C8
  {uint32_t ea=c->r[4]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EF8CC
  c->r[3]=c->r[1]+0x00000088u; // 803EF8D0
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EF8D4
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF8D8
  c->lr=0x803EF8E0u; f_803E3060(c); // 803EF8DC
  c->r[3]=c->r[31]+0x00000008u; // 803EF8E0
  c->r[5]=c->r[1]+0x00000088u; // 803EF8E4
  c->r[4]=c->r[3]|c->r[3]; // 803EF8E8
  c->lr=0x803EF8F0u; f_803E2FB4(c); // 803EF8EC
L_803EF8F0:;
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 803EF8F0
  cmps(c,0,(int32_t)c->r[0],0); // 803EF8F4
  if (crb(c,2)) { goto L_803EF91C; } // 803EF8F8
  c->r[3]=0u+0x80570000u; // 803EF8FC
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF900
  c->r[3]=c->r[3]+0x000041A8u; // 803EF904
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF908
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EF90C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803EF910
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803EF914
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EF918
L_803EF91C:;
  c->r[0]=R32(c->r[30]+0x000000A4u); // 803EF91C
  cmps(c,0,(int32_t)c->r[0],0); // 803EF920
  if (crb(c,2)) { goto L_803EFC74; } // 803EF924
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A4u); // 803EF928
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803EF92C
  if (!crb(c,2)) { goto L_803EFC74; } // 803EF930
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF934
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 803EF938
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF93C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 803EF940
  {uint32_t ea=c->r[31]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 803EF944
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 803EF948
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF94C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 803EF950
  c->r[4]=R32(c->r[31]+0x00000068u); // 803EF954
  cmps(c,0,(int32_t)c->r[4],0); // 803EF958
  if (crb(c,2)) { goto L_803EF9F4; } // 803EF95C
  c->r[0]=R32(c->r[4]+0x000000B8u); // 803EF960
  cmps(c,0,(int32_t)c->r[0],0); // 803EF964
  if (crb(c,2)) { goto L_803EF9C8; } // 803EF968
  c->r[3]=c->r[1]+0x00000038u; // 803EF96C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF970
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 803EF974
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,2,ea,0,0);} // 803EF978
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803EF97C
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,1,ea,0,0);} // 803EF980
  {double t0=S(c->f[5]*c->f[2]), t1=S(c->ps1[5]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803EF984
  {uint32_t ea=c->r[4]+0x00000040u; psq_load(c,4,ea,0,0);} // 803EF988
  {double t0=S(c->f[5]*c->f[1]), t1=S(c->ps1[5]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803EF98C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[7]=c->ps1[7]=RF32(ea);} // 803EF990
  {double t0=S(c->f[5]*c->f[4]), t1=S(c->ps1[5]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 803EF994
  {uint32_t ea=c->r[4]+0x00000048u; c->f[6]=c->ps1[6]=RF32(ea);} // 803EF998
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803EF99C
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 803EF9A0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[7]); // 803EF9A4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803EF9A8
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 803EF9AC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[6]); // 803EF9B0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 803EF9B4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 803EF9B8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 803EF9BC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 803EF9C0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 803EF9C4
L_803EF9C8:;
  c->r[3]=R32(c->r[31]+0x00000068u); // 803EF9C8
  c->r[4]=c->r[1]+0x00000038u; // 803EF9CC
  c->r[5]=c->r[1]+0x00000040u; // 803EF9D0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EF9D4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 803EF9D8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EF9DC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 803EF9E0
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803EF9E4
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803EF9E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 803EF9EC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803EF9F0
L_803EF9F4:;
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EF9F4
  c->r[3]=0u+0x80570000u; // 803EF9F8
  {uint32_t ea=c->r[2]+0xFFFFA820u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EF9FC
  c->r[3]=c->r[3]+0x000041A8u; // 803EFA00
  c->r[4]=c->r[1]+0x00000038u; // 803EFA04
  c->r[5]=c->r[1]+0x00000048u; // 803EFA08
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803EFA0C
  c->lr=0x803EFA14u; f_803FD71C(c); // 803EFA10
  cmps(c,0,(int32_t)c->r[3],0); // 803EFA14
  if (crb(c,2)) { goto L_803EFC74; } // 803EFA18
  c->r[11]=R32(c->r[31]+0x00000068u); // 803EFA1C
  cmps(c,0,(int32_t)c->r[11],0); // 803EFA20
  if (crb(c,2)) { goto L_803EFB58; } // 803EFA24
  c->r[3]=c->r[1]+0x00000048u; // 803EFA28
  c->r[4]=c->r[1]+0x00000050u; // 803EFA2C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EFA30
  {uint32_t ea=c->r[11]+0x00000010u; psq_load(c,2,ea,0,0);} // 803EFA34
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EFA38
  {uint32_t ea=c->r[11]+0x00000018u; psq_load(c,3,ea,0,0);} // 803EFA3C
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 803EFA40
  {double t0=S(c->f[1]-c->f[3]), t1=S(c->ps1[1]-c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 803EFA44
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 803EFA48
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 803EFA4C
  c->r[0]=R32(c->r[11]+0x000000B8u); // 803EFA50
  cmps(c,0,(int32_t)c->r[0],0); // 803EFA54
  if (crb(c,2)) { goto L_803EFB58; } // 803EFA58
  {uint32_t ea=c->r[11]+0x00000038u; c->f[11]=c->ps1[11]=RF32(ea);} // 803EFA5C
  c->r[3]=c->r[1]+0x00000008u; // 803EFA60
  {uint32_t ea=c->r[11]+0x00000028u; c->f[12]=c->ps1[12]=RF32(ea);} // 803EFA64
  c->r[4]=c->r[1]+0x00000010u; // 803EFA68
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EFA6C
  c->r[5]=c->r[1]+0x00000078u; // 803EFA70
  {uint32_t ea=c->r[11]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EFA74
  c->f[3]=c->ps1[3]=S(c->f[0]); // 803EFA78
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[12]);} // 803EFA7C
  c->r[6]=c->r[1]+0x00000018u; // 803EFA80
  {uint32_t ea=c->r[11]+0x00000034u; c->f[9]=c->ps1[9]=RF32(ea);} // 803EFA84
  c->r[9]=c->r[1]+0x00000028u; // 803EFA88
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[11]);} // 803EFA8C
  {uint32_t ea=c->r[11]+0x00000024u; c->f[10]=c->ps1[10]=RF32(ea);} // 803EFA90
  c->r[10]=c->r[1]+0x00000030u; // 803EFA94
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,11,ea,0,0);} // 803EFA98
  c->r[7]=c->r[1]+0x00000020u; // 803EFA9C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803EFAA0
  c->r[12]=c->r[1]+0x00000060u; // 803EFAA4
  {double t0=S(c->f[4]*c->f[11]), t1=S(c->ps1[4]*c->ps1[11]); c->f[0]=t0; c->ps1[0]=t1;} // 803EFAA8
  {uint32_t ea=c->r[11]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 803EFAAC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 803EFAB0
  c->r[8]=c->r[1]+0x00000068u; // 803EFAB4
  {uint32_t ea=c->r[11]+0x00000040u; c->f[6]=c->ps1[6]=RF32(ea);} // 803EFAB8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,12,ea,0,0);} // 803EFABC
  {uint32_t ea=c->r[11]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 803EFAC0
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 803EFAC4
  {uint32_t ea=c->r[11]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 803EFAC8
  c->r[11]=c->r[1]+0x00000058u; // 803EFACC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,12,ea,0,0);} // 803EFAD0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EFAD4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[10]);} // 803EFAD8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803EFADC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[9]);} // 803EFAE0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,9,ea,0,0);} // 803EFAE4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803EFAE8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 803EFAEC
  {double t0=S(c->f[4]*c->f[9]), t1=S(c->ps1[4]*c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 803EFAF0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 803EFAF4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,10,ea,0,0);} // 803EFAF8
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 803EFAFC
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,10,ea,0,0);} // 803EFB00
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EFB04
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[8]);} // 803EFB08
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803EFB0C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[7]);} // 803EFB10
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,7,ea,0,0);} // 803EFB14
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 803EFB18
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[6]);} // 803EFB1C
  {double t0=S(c->f[4]*c->f[7]), t1=S(c->ps1[4]*c->ps1[7]); c->f[4]=t0; c->ps1[4]=t1;} // 803EFB20
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 803EFB24
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,2,ea,0,0);} // 803EFB28
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 803EFB2C
  {uint32_t ea=c->r[12]+0x00000000u; psq_store(c,2,ea,0,0);} // 803EFB30
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 803EFB34
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,7,ea,0,0);} // 803EFB38
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803EFB3C
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,9,ea,0,0);} // 803EFB40
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 803EFB44
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,11,ea,0,0);} // 803EFB48
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 803EFB4C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 803EFB50
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 803EFB54
L_803EFB58:;
  c->r[4]=c->r[1]+0x00000048u; // 803EFB58
  c->r[3]=c->r[1]+0x00000050u; // 803EFB5C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EFB60
  c->r[4]=0u+0x80570000u; // 803EFB64
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EFB68
  c->r[4]=c->r[4]+0x00002BB0u; // 803EFB6C
  {uint32_t ea=c->r[31]+0x00000040u; psq_store(c,0,ea,0,0);} // 803EFB70
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A4u); // 803EFB74
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,1,ea,0,0);} // 803EFB78
  c->r[0]=c->r[0]|0x00000001u; // 803EFB7C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EFB80
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 803EFB84
  {uint32_t ea=c->r[31]+0x00000050u; psq_store(c,0,ea,0,0);} // 803EFB88
  {uint32_t ea=c->r[31]+0x00000048u; psq_store(c,1,ea,0,0);} // 803EFB8C
  W16(c->r[31]+0x000000A4u,c->r[0]); // 803EFB90
  c->r[28]=R32(c->r[30]+0x000000B4u); // 803EFB94
  goto L_803EFBB4; // 803EFB98
L_803EFB9C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 803EFB9C
  c->r[3]=c->r[28]|c->r[28]; // 803EFBA0
  c->r[12]=R32(c->r[12]+0x00000064u); // 803EFBA4
  c->ctr=c->r[12]; // 803EFBA8
  if (true) { c->lr=0x803EFBB0u; dispatch(c,c->ctr); } // 803EFBAC
  c->r[28]=c->r[3]|c->r[3]; // 803EFBB0
L_803EFBB4:;
  cmps(c,0,(int32_t)c->r[28],0); // 803EFBB4
  if (crb(c,2)) { goto L_803EFBD8; } // 803EFBB8
  c->r[12]=R32(c->r[28]+0x00000000u); // 803EFBBC
  c->r[3]=c->r[28]|c->r[28]; // 803EFBC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803EFBC4
  c->ctr=c->r[12]; // 803EFBC8
  if (true) { c->lr=0x803EFBD0u; dispatch(c,c->ctr); } // 803EFBCC
  cmps(c,0,(int32_t)c->r[3],4); // 803EFBD0
  if (crb(c,2)) { IRQCHK(c); goto L_803EFB9C; } // 803EFBD4
L_803EFBD8:;
  cmps(c,0,(int32_t)c->r[28],0); // 803EFBD8
  if (crb(c,2)) { goto L_803EFC74; } // 803EFBDC
  c->r[3]=R32(c->r[31]+0x00000068u); // 803EFBE0
  c->r[5]=0u+0x00000000u; // 803EFBE4
  cmps(c,0,(int32_t)c->r[3],0); // 803EFBE8
  if (crb(c,2)) { goto L_803EFC04; } // 803EFBEC
  c->r[0]=R16(c->r[3]+0x000000CEu); // 803EFBF0
  c->r[0]=c->r[0]|0x00000001u; // 803EFBF4
  cmps(c,0,(int32_t)c->r[0],0); // 803EFBF8
  if (crb(c,2)) { goto L_803EFC04; } // 803EFBFC
  c->r[5]=0u+0x00000001u; // 803EFC00
L_803EFC04:;
  c->r[29]=0u+0x80570000u; // 803EFC04
  c->r[7]=R32(c->r[31]+0x00000120u); // 803EFC08
  c->r[4]=c->r[28]|c->r[28]; // 803EFC0C
  c->r[6]=c->r[31]|c->r[31]; // 803EFC10
  c->r[3]=c->r[29]+0x000041A8u; // 803EFC14
  c->lr=0x803EFC1Cu; f_803FCA34(c); // 803EFC18
  cmps(c,0,(int32_t)c->r[3],0); // 803EFC1C
  c->r[28]=c->r[3]|c->r[3]; // 803EFC20
  if (crb(c,2)) { goto L_803EFC74; } // 803EFC24
  {uint32_t ea=c->r[31]+0x00000040u; psq_load(c,0,ea,0,0);} // 803EFC28
  c->r[4]=c->r[28]|c->r[28]; // 803EFC2C
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 803EFC30
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,1,ea,0,0);} // 803EFC34
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EFC38
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 803EFC3C
  c->r[3]=c->r[30]|c->r[30]; // 803EFC40
  c->r[5]=R32(c->r[31]+0x00000068u); // 803EFC44
  c->r[6]=R32(c->r[30]+0x000000A8u); // 803EFC48
  c->lr=0x803EFC50u; f_803E7448(c); // 803EFC4C
  c->r[4]=c->r[28]|c->r[28]; // 803EFC50
  c->r[3]=c->r[29]+0x000041A8u; // 803EFC54
  c->lr=0x803EFC5Cu; f_803FD4F8(c); // 803EFC58
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 803EFC5C
  c->r[4]=c->r[28]|c->r[28]; // 803EFC60
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EFC64
  c->r[12]=R32(c->r[12]+0x00000060u); // 803EFC68
  c->ctr=c->r[12]; // 803EFC6C
  if (true) { c->lr=0x803EFC74u; dispatch(c,c->ctr); } // 803EFC70
L_803EFC74:;
  c->r[31]=R32(c->r[1]+0x000000CCu); // 803EFC74
  c->r[3]=0u+0x00000000u; // 803EFC78
  c->r[30]=R32(c->r[1]+0x000000C8u); // 803EFC7C
  c->r[29]=R32(c->r[1]+0x000000C4u); // 803EFC80
  c->r[28]=R32(c->r[1]+0x000000C0u); // 803EFC84
  c->r[0]=R32(c->r[1]+0x000000D4u); // 803EFC88
  c->lr=c->r[0]; // 803EFC8C
  c->r[1]=c->r[1]+0x000000D0u; // 803EFC90
  return; // 803EFC94
}

// fn_803EFC98
void f_803EFC98(Ctx* __restrict c) {
  trace_call(0x803EFC98u);
  c->r[3]=0u+0x80470000u; // 803EFC98
  c->r[3]=c->r[3]+0xFFFF99B4u; // 803EFC9C
  return; // 803EFCA0
}

// fn_803EFCA4
void f_803EFCA4(Ctx* __restrict c) {
  trace_call(0x803EFCA4u);
  c->r[3]=c->r[13]+0xFFFFDF10u; // 803EFCA4
  return; // 803EFCA8
}

// fn_803EFCAC
void f_803EFCAC(Ctx* __restrict c) {
  trace_call(0x803EFCACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EFCAC
  c->r[0]=c->lr; // 803EFCB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EFCB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EFCB8
  c->r[31]=0u+0x00000000u; // 803EFCBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EFCC0
  c->r[30]=c->r[3]|c->r[3]; // 803EFCC4
  c->r[0]=R32(c->r[3]+0x00000098u); // 803EFCC8
  cmps(c,0,(int32_t)c->r[0],0); // 803EFCCC
  if (crb(c,2)) { goto L_803EFCEC; } // 803EFCD0
  c->r[3]=c->r[0]|c->r[0]; // 803EFCD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EFCD8
  c->r[12]=R32(c->r[12]+0x00000034u); // 803EFCDC
  c->ctr=c->r[12]; // 803EFCE0
  if (true) { c->lr=0x803EFCE8u; dispatch(c,c->ctr); } // 803EFCE4
  c->r[31]=c->r[3]|c->r[3]; // 803EFCE8
L_803EFCEC:;
  c->r[3]=R32(c->r[30]+0x0000009Cu); // 803EFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 803EFCF0
  if (crb(c,2)) { goto L_803EFD0C; } // 803EFCF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EFCF8
  c->r[12]=R32(c->r[12]+0x00000034u); // 803EFCFC
  c->ctr=c->r[12]; // 803EFD00
  if (true) { c->lr=0x803EFD08u; dispatch(c,c->ctr); } // 803EFD04
  c->r[31]=c->r[31]|c->r[3]; // 803EFD08
L_803EFD0C:;
  c->r[3]=R32(c->r[30]+0x000000A0u); // 803EFD0C
  cmps(c,0,(int32_t)c->r[3],0); // 803EFD10
  if (crb(c,2)) { goto L_803EFD2C; } // 803EFD14
  c->r[12]=R32(c->r[3]+0x00000000u); // 803EFD18
  c->r[12]=R32(c->r[12]+0x00000034u); // 803EFD1C
  c->ctr=c->r[12]; // 803EFD20
  if (true) { c->lr=0x803EFD28u; dispatch(c,c->ctr); } // 803EFD24
  c->r[31]=c->r[31]|c->r[3]; // 803EFD28
L_803EFD2C:;
  W32(c->r[30]+0x00000068u,c->r[31]); // 803EFD2C
  c->r[3]=c->r[31]|c->r[31]; // 803EFD30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EFD34
  c->r[30]=R32(c->r[1]+0x00000008u); // 803EFD38
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EFD3C
  c->lr=c->r[0]; // 803EFD40
  c->r[1]=c->r[1]+0x00000010u; // 803EFD44
  return; // 803EFD48
}

// fn_803EFD4C
void f_803EFD4C(Ctx* __restrict c) {
  trace_call(0x803EFD4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFB90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EFD4C
  c->r[0]=c->lr; // 803EFD50
  W32(c->r[1]+0x00000474u,c->r[0]); // 803EFD54
  {uint32_t ea=c->r[1]+0x00000460u; WF64(ea,c->f[31]);} // 803EFD58
  {uint32_t ea=c->r[1]+0x00000468u; psq_store(c,31,ea,0,0);} // 803EFD5C
  c->r[11]=c->r[1]+0x00000460u; // 803EFD60
  c->lr=0x803EFD68u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803EFD64
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[31]=c->ps1[31]=RF32(ea);} // 803EFD68
  c->r[30]=0u+0x00000000u; // 803EFD6C
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EFD70
  c->r[24]=c->r[3]|c->r[3]; // 803EFD74
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803EFD78
  c->r[25]=c->r[4]|c->r[4]; // 803EFD7C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 803EFD80
  c->r[26]=c->r[1]+0x00000018u; // 803EFD84
  c->r[27]=c->r[1]+0x00000020u; // 803EFD88
  c->r[28]=c->r[1]+0x00000028u; // 803EFD8C
  W32(c->r[1]+0x0000003Cu,c->r[30]); // 803EFD90
  c->r[29]=c->r[1]+0x00000030u; // 803EFD94
  c->r[31]=0u+0x00000001u; // 803EFD98
  W32(c->r[1]+0x00000040u,c->r[30]); // 803EFD9C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 803EFDA0
  W32(c->r[1]+0x00000048u,c->r[30]); // 803EFDA4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 803EFDA8
  W32(c->r[1]+0x00000050u,c->r[30]); // 803EFDAC
  W32(c->r[1]+0x00000054u,c->r[30]); // 803EFDB0
L_803EFDB4:;
  c->r[3]=c->r[25]|c->r[25]; // 803EFDB4
  c->r[4]=c->r[1]+0x00000008u; // 803EFDB8
  c->r[5]=c->r[1]+0x00000010u; // 803EFDBC
  c->r[6]=c->r[1]+0x0000000Cu; // 803EFDC0
  c->r[7]=c->r[1]+0x00000058u; // 803EFDC4
  c->r[8]=c->r[1]+0x00000038u; // 803EFDC8
  c->r[9]=0u+0x000003E8u; // 803EFDCC
  c->lr=0x803EFDD4u; f_80403308(c); // 803EFDD0
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EFDD4
  cmps(c,0,(int32_t)c->r[0],160); // 803EFDD8
  if (crb(c,2)) { goto L_803EFE14; } // 803EFDDC
  cmps(c,0,(int32_t)c->r[0],161); // 803EFDE0
  if (crb(c,2)) { goto L_803EFE28; } // 803EFDE4
  cmps(c,0,(int32_t)c->r[0],65); // 803EFDE8
  if (crb(c,2)) { goto L_803EFE3C; } // 803EFDEC
  cmps(c,0,(int32_t)c->r[0],162); // 803EFDF0
  if (crb(c,2)) { goto L_803EFE50; } // 803EFDF4
  cmps(c,0,(int32_t)c->r[0],163); // 803EFDF8
  if (crb(c,2)) { goto L_803EFEDC; } // 803EFDFC
  cmps(c,0,(int32_t)c->r[0],164); // 803EFE00
  if (crb(c,2)) { goto L_803EFEE8; } // 803EFE04
  cmps(c,0,(int32_t)c->r[0],165); // 803EFE08
  if (crb(c,2)) { goto L_803EFEF4; } // 803EFE0C
  goto L_803EFEFC; // 803EFE10
L_803EFE14:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EFE14
  c->r[3]=c->r[25]|c->r[25]; // 803EFE18
  c->r[5]=c->r[24]+0x00000098u; // 803EFE1C
  c->lr=0x803EFE24u; f_804039AC(c); // 803EFE20
  goto L_803EFEFC; // 803EFE24
L_803EFE28:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EFE28
  c->r[3]=c->r[25]|c->r[25]; // 803EFE2C
  c->r[5]=c->r[24]+0x0000009Cu; // 803EFE30
  c->lr=0x803EFE38u; f_804039AC(c); // 803EFE34
  goto L_803EFEFC; // 803EFE38
L_803EFE3C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803EFE3C
  c->r[3]=c->r[25]|c->r[25]; // 803EFE40
  c->r[5]=c->r[24]+0x000000A0u; // 803EFE44
  c->lr=0x803EFE4Cu; f_804039AC(c); // 803EFE48
  goto L_803EFEFC; // 803EFE4C
L_803EFE50:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803EFE50
  cmps(c,0,(int32_t)c->r[0],0); // 803EFE54
  if (crb(c,2)) { goto L_803EFE70; } // 803EFE58
  cmps(c,0,(int32_t)c->r[0],1); // 803EFE5C
  if (crb(c,2)) { goto L_803EFE9C; } // 803EFE60
  cmps(c,0,(int32_t)c->r[0],2); // 803EFE64
  if (crb(c,2)) { goto L_803EFEA8; } // 803EFE68
  goto L_803EFEB4; // 803EFE6C
L_803EFE70:;
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 803EFE70
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 803EFE74
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EFE78
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[31]);} // 803EFE7C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 803EFE80
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EFE84
  W32(c->r[24]+0x000000A4u,c->r[30]); // 803EFE88
  W32(c->r[24]+0x000000A8u,c->r[30]); // 803EFE8C
  {uint32_t ea=c->r[24]+0x000000B0u; psq_store(c,1,ea,0,0);} // 803EFE90
  {uint32_t ea=c->r[24]+0x000000B8u; psq_store(c,0,ea,0,0);} // 803EFE94
  goto L_803EFEDC; // 803EFE98
L_803EFE9C:;
  W32(c->r[24]+0x000000A4u,c->r[31]); // 803EFE9C
  W32(c->r[24]+0x000000A8u,c->r[30]); // 803EFEA0
  goto L_803EFEDC; // 803EFEA4
L_803EFEA8:;
  W32(c->r[24]+0x000000A4u,c->r[30]); // 803EFEA8
  W32(c->r[24]+0x000000A8u,c->r[31]); // 803EFEAC
  goto L_803EFEDC; // 803EFEB0
L_803EFEB4:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 803EFEB4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 803EFEB8
  {uint32_t ea=c->r[26]+0x00000000u; psq_load(c,1,ea,0,0);} // 803EFEBC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[31]);} // 803EFEC0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 803EFEC4
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,0,ea,0,0);} // 803EFEC8
  W32(c->r[24]+0x000000A4u,c->r[30]); // 803EFECC
  W32(c->r[24]+0x000000A8u,c->r[30]); // 803EFED0
  {uint32_t ea=c->r[24]+0x000000B0u; psq_store(c,1,ea,0,0);} // 803EFED4
  {uint32_t ea=c->r[24]+0x000000B8u; psq_store(c,0,ea,0,0);} // 803EFED8
L_803EFEDC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EFEDC
  {uint32_t ea=c->r[24]+0x000000B0u; WF32(ea,c->f[0]);} // 803EFEE0
  goto L_803EFEFC; // 803EFEE4
L_803EFEE8:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EFEE8
  {uint32_t ea=c->r[24]+0x000000B4u; WF32(ea,c->f[0]);} // 803EFEEC
  goto L_803EFEFC; // 803EFEF0
L_803EFEF4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803EFEF4
  {uint32_t ea=c->r[24]+0x000000B8u; WF32(ea,c->f[0]);} // 803EFEF8
L_803EFEFC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803EFEFC
  cmps(c,0,(int32_t)c->r[0],6); // 803EFF00
  if (!crb(c,2)) { IRQCHK(c); goto L_803EFDB4; } // 803EFF04
  c->r[3]=0u+0x00000001u; // 803EFF08
  {uint32_t ea=c->r[1]+0x00000468u; psq_load(c,31,ea,0,0);} // 803EFF0C
  {uint32_t ea=c->r[1]+0x00000460u; c->f[31]=RF64(ea);} // 803EFF10
  c->r[11]=c->r[1]+0x00000460u; // 803EFF14
  c->lr=0x803EFF1Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803EFF18
  c->r[0]=R32(c->r[1]+0x00000474u); // 803EFF1C
  c->lr=c->r[0]; // 803EFF20
  c->r[1]=c->r[1]+0x00000470u; // 803EFF24
  return; // 803EFF28
}

// fn_803EFF2C
void f_803EFF2C(Ctx* __restrict c) {
  trace_call(0x803EFF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803EFF2C
  c->r[0]=c->lr; // 803EFF30
  W32(c->r[1]+0x00000014u,c->r[0]); // 803EFF34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803EFF38
  c->r[31]=c->r[4]|c->r[4]; // 803EFF3C
  c->r[4]=0u+0x000000A0u; // 803EFF40
  W32(c->r[1]+0x00000008u,c->r[30]); // 803EFF44
  c->r[30]=c->r[3]|c->r[3]; // 803EFF48
  c->r[5]=R32(c->r[3]+0x00000098u); // 803EFF4C
  c->r[3]=c->r[31]|c->r[31]; // 803EFF50
  c->lr=0x803EFF58u; f_80403CA4(c); // 803EFF54
  c->r[5]=R32(c->r[30]+0x0000009Cu); // 803EFF58
  c->r[3]=c->r[31]|c->r[31]; // 803EFF5C
  c->r[4]=0u+0x000000A1u; // 803EFF60
  c->lr=0x803EFF68u; f_80403CA4(c); // 803EFF64
  c->r[5]=R32(c->r[30]+0x000000A0u); // 803EFF68
  c->r[3]=c->r[31]|c->r[31]; // 803EFF6C
  c->r[4]=0u+0x00000041u; // 803EFF70
  c->lr=0x803EFF78u; f_80403CA4(c); // 803EFF74
  c->r[0]=R32(c->r[30]+0x000000A4u); // 803EFF78
  cmps(c,0,(int32_t)c->r[0],1); // 803EFF7C
  if (!crb(c,2)) { goto L_803EFF98; } // 803EFF80
  c->r[3]=c->r[31]|c->r[31]; // 803EFF84
  c->r[4]=0u+0x000000A2u; // 803EFF88
  c->r[5]=0u+0x00000001u; // 803EFF8C
  c->lr=0x803EFF94u; f_80403B54(c); // 803EFF90
  goto L_803EFFC8; // 803EFF94
L_803EFF98:;
  c->r[0]=R32(c->r[30]+0x000000A8u); // 803EFF98
  cmps(c,0,(int32_t)c->r[0],1); // 803EFF9C
  if (!crb(c,2)) { goto L_803EFFB8; } // 803EFFA0
  c->r[3]=c->r[31]|c->r[31]; // 803EFFA4
  c->r[4]=0u+0x000000A2u; // 803EFFA8
  c->r[5]=0u+0x00000002u; // 803EFFAC
  c->lr=0x803EFFB4u; f_80403B54(c); // 803EFFB0
  goto L_803EFFC8; // 803EFFB4
L_803EFFB8:;
  c->r[3]=c->r[31]|c->r[31]; // 803EFFB8
  c->r[4]=0u+0x000000A2u; // 803EFFBC
  c->r[5]=0u+0x00000000u; // 803EFFC0
  c->lr=0x803EFFC8u; f_80403B54(c); // 803EFFC4
L_803EFFC8:;
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EFFC8
  c->r[3]=c->r[31]|c->r[31]; // 803EFFCC
  c->r[4]=0u+0x000000A3u; // 803EFFD0
  c->lr=0x803EFFD8u; f_80403BC4(c); // 803EFFD4
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EFFD8
  c->r[3]=c->r[31]|c->r[31]; // 803EFFDC
  c->r[4]=0u+0x000000A4u; // 803EFFE0
  c->lr=0x803EFFE8u; f_80403BC4(c); // 803EFFE4
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803EFFE8
  c->r[3]=c->r[31]|c->r[31]; // 803EFFEC
  c->r[4]=0u+0x000000A5u; // 803EFFF0
  c->lr=0x803EFFF8u; f_80403BC4(c); // 803EFFF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803EFFF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803EFFFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F0000
  c->lr=c->r[0]; // 803F0004
  c->r[1]=c->r[1]+0x00000010u; // 803F0008
  return; // 803F000C
}

// fn_803F0010
void f_803F0010(Ctx* __restrict c) {
  trace_call(0x803F0010u);
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F0010
  c->r[0]=0u+0x00000000u; // 803F0014
  c->r[3]=0u+0x80570000u; // 803F0018
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803F001C
  c->r[3]=c->r[3]+0x000041A8u; // 803F0020
  W16(c->r[4]+0x000000A6u,c->r[0]); // 803F0024
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F0028
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[0]);} // 803F002C
  W32(c->r[4]+0x000000B8u,c->r[0]); // 803F0030
  return; // 803F0034
}

// fn_803F0038
void f_803F0038(Ctx* __restrict c) {
  trace_call(0x803F0038u);
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F0038
  c->r[0]=c->lr; // 803F003C
  W32(c->r[1]+0x000001B4u,c->r[0]); // 803F0040
  c->r[11]=c->r[1]+0x000001B0u; // 803F0044
  c->lr=0x803F004Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F0048
  c->r[5]=R32(c->r[4]+0x00000068u); // 803F004C
  c->r[29]=c->r[3]|c->r[3]; // 803F0050
  c->r[30]=c->r[4]|c->r[4]; // 803F0054
  c->r[31]=0u+0x00000000u; // 803F0058
  cmps(c,0,(int32_t)c->r[5],0); // 803F005C
  if (crb(c,2)) { goto L_803F0088; } // 803F0060
  c->r[0]=R32(c->r[4]+0x000000B4u); // 803F0064
  cmps(c,0,(int32_t)c->r[0],0); // 803F0068
  if (crb(c,2)) { goto L_803F0088; } // 803F006C
  c->r[3]=c->r[5]|c->r[5]; // 803F0070
  c->lr=0x803F0078u; f_803E5D4C(c); // 803F0074
  c->r[0]=c->r[3]|c->r[3]; // 803F0078
  c->r[3]=R32(c->r[30]+0x000000B4u); // 803F007C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803F0080
  c->lr=0x803F0088u; f_803E2ED8(c); // 803F0084
L_803F0088:;
  c->r[3]=R32(c->r[29]+0x000000A0u); // 803F0088
  cmps(c,0,(int32_t)c->r[3],0); // 803F008C
  if (crb(c,2)) { goto L_803F00AC; } // 803F0090
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0094
  c->r[4]=c->r[30]|c->r[30]; // 803F0098
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F009C
  c->r[12]=R32(c->r[12]+0x00000058u); // 803F00A0
  c->ctr=c->r[12]; // 803F00A4
  if (true) { c->lr=0x803F00ACu; dispatch(c,c->ctr); } // 803F00A8
L_803F00AC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000000A6u); // 803F00AC
  cmps(c,0,(int32_t)c->r[0],0); // 803F00B0
  if (!crb(c,2)) { goto L_803F0404; } // 803F00B4
  c->r[0]=0u+0x00000001u; // 803F00B8
  W16(c->r[30]+0x000000A6u,c->r[0]); // 803F00BC
  c->r[3]=0u+0x00000008u; // 803F00C0
  c->lr=0x803F00C8u; f_803FE6C4(c); // 803F00C4
  cmps(c,0,(int32_t)c->r[3],0); // 803F00C8
  if (crb(c,2)) { goto L_803F00D4; } // 803F00CC
  c->lr=0x803F00D4u; f_803E2CE8(c); // 803F00D0
L_803F00D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 803F00D4
  W32(c->r[30]+0x000000B4u,c->r[3]); // 803F00D8
  if (!crb(c,2)) { goto L_803F00E8; } // 803F00DC
  c->r[3]=0u+0x00000000u; // 803F00E0
  goto L_803F0760; // 803F00E4
L_803F00E8:;
  c->r[26]=R32(c->r[29]+0x00000098u); // 803F00E8
  c->r[27]=c->r[3]|c->r[3]; // 803F00EC
  goto L_803F010C; // 803F00F0
L_803F00F4:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 803F00F4
  c->r[3]=c->r[26]|c->r[26]; // 803F00F8
  c->r[12]=R32(c->r[12]+0x00000064u); // 803F00FC
  c->ctr=c->r[12]; // 803F0100
  if (true) { c->lr=0x803F0108u; dispatch(c,c->ctr); } // 803F0104
  c->r[26]=c->r[3]|c->r[3]; // 803F0108
L_803F010C:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F010C
  if (crb(c,2)) { goto L_803F0130; } // 803F0110
  c->r[12]=R32(c->r[26]+0x00000000u); // 803F0114
  c->r[3]=c->r[26]|c->r[26]; // 803F0118
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F011C
  c->ctr=c->r[12]; // 803F0120
  if (true) { c->lr=0x803F0128u; dispatch(c,c->ctr); } // 803F0124
  cmps(c,0,(int32_t)c->r[3],4); // 803F0128
  if (crb(c,2)) { IRQCHK(c); goto L_803F00F4; } // 803F012C
L_803F0130:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F0130
  if (crb(c,2)) { goto L_803F0404; } // 803F0134
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0138
  c->r[28]=0u+0x00000000u; // 803F013C
  cmps(c,0,(int32_t)c->r[3],0); // 803F0140
  if (crb(c,2)) { goto L_803F0160; } // 803F0144
  c->lr=0x803F014Cu; f_803E5D4C(c); // 803F0148
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 803F014C
  c->r[0]=c->r[0]|0x00000001u; // 803F0150
  cmps(c,0,(int32_t)c->r[0],0); // 803F0154
  if (crb(c,2)) { goto L_803F0160; } // 803F0158
  c->r[28]=0u+0x00000001u; // 803F015C
L_803F0160:;
  c->r[3]=0u+0x80570000u; // 803F0160
  c->r[6]=0u+0x80570000u; // 803F0164
  c->r[10]=R32(c->r[30]+0x00000120u); // 803F0168
  c->r[4]=c->r[26]|c->r[26]; // 803F016C
  c->r[5]=c->r[27]|c->r[27]; // 803F0170
  c->r[8]=c->r[28]|c->r[28]; // 803F0174
  c->r[3]=c->r[3]+0x000041A8u; // 803F0178
  c->r[6]=c->r[6]+0x00002BB0u; // 803F017C
  c->r[7]=0u+0x00000000u; // 803F0180
  c->r[9]=0u+0x00000000u; // 803F0184
  c->lr=0x803F018Cu; f_803FC6B8(c); // 803F0188
  cmps(c,0,(int32_t)c->r[3],0); // 803F018C
  c->r[28]=c->r[3]|c->r[3]; // 803F0190
  if (crb(c,2)) { goto L_803F02B8; } // 803F0194
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803F0198
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F019C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F01A0
  c->ctr=c->r[12]; // 803F01A4
  if (true) { c->lr=0x803F01ACu; dispatch(c,c->ctr); } // 803F01A8
  cmps(c,0,(int32_t)c->r[3],1); // 803F01AC
  if (!crb(c,2)) { goto L_803F02B8; } // 803F01B0
  c->r[3]=c->r[28]+0x00000038u; // 803F01B4
  c->r[4]=c->r[30]+0x00000038u; // 803F01B8
  c->lr=0x803F01C0u; f_803E53A0(c); // 803F01BC
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 803F01C0
  c->r[0]=R32(c->r[3]+0x00000190u); // 803F01C4
  cmps(c,0,(int32_t)c->r[0],7); // 803F01C8
  if (crb(c,2)) { goto L_803F01DC; } // 803F01CC
  c->r[3]=c->r[28]+0x00000008u; // 803F01D0
  c->r[4]=c->r[30]+0x00000008u; // 803F01D4
  c->lr=0x803F01DCu; f_803EC00C(c); // 803F01D8
L_803F01DC:;
  c->r[0]=R32(c->r[26]+0x0000006Cu); // 803F01DC
  cmps(c,0,(int32_t)c->r[0],0); // 803F01E0
  if (crb(c,2)) { goto L_803F02A8; } // 803F01E4
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F01E8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803F01EC
  c->r[0]=R32(c->r[26]+0x00000074u); // 803F01F0
  cmps(c,0,(int32_t)c->r[0],0); // 803F01F4
  if (crb(c,2)) { goto L_803F023C; } // 803F01F8
  c->lr=0x803F0200u; f_803E99C8(c); // 803F01FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0200
  c->r[4]=c->r[1]+0x0000000Cu; // 803F0204
  {uint32_t ea=c->r[28]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0208
  c->r[5]=0u+0x00000000u; // 803F020C
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803F0210
  c->r[6]=0u+0x00000000u; // 803F0214
  {uint32_t ea=c->r[28]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F0218
  c->r[7]=R32(c->r[26]+0x0000007Cu); // 803F021C
  c->ctr=c->r[12]; // 803F0220
  if (true) { c->lr=0x803F0228u; dispatch(c,c->ctr); } // 803F0224
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0228
  {uint32_t ea=c->r[26]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F022C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F0230
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 803F0234
  goto L_803F02A8; // 803F0238
L_803F023C:;
  c->r[0]=R32(c->r[26]+0x00000078u); // 803F023C
  cmps(c,0,(int32_t)c->r[0],0); // 803F0240
  if (crb(c,2)) { goto L_803F02A8; } // 803F0244
  c->r[3]=c->r[1]+0x000000C0u; // 803F0248
  c->lr=0x803F0250u; f_803E49FC(c); // 803F024C
  c->lr=0x803F0254u; f_803E99C8(c); // 803F0250
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0254
  c->r[4]=c->r[1]+0x0000000Cu; // 803F0258
  c->r[5]=c->r[1]+0x000000C0u; // 803F025C
  {uint32_t ea=c->r[28]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0260
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803F0264
  c->r[6]=0u+0x00000000u; // 803F0268
  {uint32_t ea=c->r[28]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F026C
  c->r[7]=R32(c->r[26]+0x0000007Cu); // 803F0270
  c->ctr=c->r[12]; // 803F0274
  if (true) { c->lr=0x803F027Cu; dispatch(c,c->ctr); } // 803F0278
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F027C
  c->r[3]=c->r[1]+0x000000B0u; // 803F0280
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 803F0284
  c->lr=0x803F028Cu; f_803E49FC(c); // 803F0288
  {uint32_t ea=c->r[26]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F028C
  c->r[3]=c->r[1]+0x000000B0u; // 803F0290
  c->r[4]=c->r[1]+0x000000C0u; // 803F0294
  c->lr=0x803F029Cu; f_803E52DC(c); // 803F0298
  c->r[3]=c->r[28]+0x00000038u; // 803F029C
  c->r[4]=c->r[1]+0x000000B0u; // 803F02A0
  c->lr=0x803F02A8u; f_803E52F8(c); // 803F02A4
L_803F02A8:;
  c->r[3]=c->r[28]|c->r[28]; // 803F02A8
  c->lr=0x803F02B0u; f_803EC040(c); // 803F02AC
  c->r[4]=c->r[28]|c->r[28]; // 803F02B0
  c->lr=0x803F02B8u; f_803EC150(c); // 803F02B4
L_803F02B8:;
  c->r[0]=R32(c->r[30]+0x00000068u); // 803F02B8
  cmps(c,0,(int32_t)c->r[0],0); // 803F02BC
  if (crb(c,2)) { goto L_803F03D4; } // 803F02C0
  c->r[0]=R32(c->r[29]+0x000000A4u); // 803F02C4
  cmps(c,0,(int32_t)c->r[0],1); // 803F02C8
  if (!crb(c,2)) { goto L_803F0350; } // 803F02CC
  c->lr=0x803F02D4u; f_803E99C8(c); // 803F02D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F02D4
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F02D8
  c->ctr=c->r[12]; // 803F02DC
  if (true) { c->lr=0x803F02E4u; dispatch(c,c->ctr); } // 803F02E0
  c->r[4]=c->r[3]|c->r[3]; // 803F02E4
  c->r[3]=c->r[1]+0x000000A0u; // 803F02E8
  c->lr=0x803F02F0u; f_803EBFE8(c); // 803F02EC
  c->r[3]=c->r[1]+0x00000090u; // 803F02F0
  c->lr=0x803F02F8u; f_803E49FC(c); // 803F02F4
  c->r[3]=c->r[1]+0x00000090u; // 803F02F8
  c->r[4]=c->r[1]+0x000000A0u; // 803F02FC
  c->lr=0x803F0304u; f_803E53A0(c); // 803F0300
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0304
  c->r[4]=c->r[29]+0x000000B0u; // 803F0308
  c->lr=0x803F0310u; f_803E53A0(c); // 803F030C
  c->lr=0x803F0314u; f_803E99C8(c); // 803F0310
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0314
  c->r[12]=R32(c->r[12]+0x00000070u); // 803F0318
  c->ctr=c->r[12]; // 803F031C
  if (true) { c->lr=0x803F0324u; dispatch(c,c->ctr); } // 803F0320
  c->r[4]=c->r[3]|c->r[3]; // 803F0324
  c->r[3]=c->r[1]+0x00000160u; // 803F0328
  c->lr=0x803F0330u; f_803F0778(c); // 803F032C
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0330
  c->r[4]=c->r[1]+0x00000160u; // 803F0334
  c->r[5]=c->r[29]+0x000000B0u; // 803F0338
  c->lr=0x803F0340u; f_803E541C(c); // 803F033C
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0340
  c->r[4]=c->r[1]+0x00000090u; // 803F0344
  c->lr=0x803F034Cu; f_803E53B4(c); // 803F0348
  goto L_803F03D4; // 803F034C
L_803F0350:;
  c->r[0]=R32(c->r[29]+0x000000A8u); // 803F0350
  cmps(c,0,(int32_t)c->r[0],1); // 803F0354
  if (!crb(c,2)) { goto L_803F03D4; } // 803F0358
  c->lr=0x803F0360u; f_803E99C8(c); // 803F035C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0360
  c->r[12]=R32(c->r[12]+0x00000070u); // 803F0364
  c->ctr=c->r[12]; // 803F0368
  if (true) { c->lr=0x803F0370u; dispatch(c,c->ctr); } // 803F036C
  c->r[4]=c->r[3]|c->r[3]; // 803F0370
  c->r[3]=c->r[1]+0x00000130u; // 803F0374
  c->lr=0x803F037Cu; f_803F0778(c); // 803F0378
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F037C
  c->r[4]=c->r[1]+0x00000130u; // 803F0380
  c->lr=0x803F0388u; f_803F082C(c); // 803F0384
  c->lr=0x803F038Cu; f_803E99C8(c); // 803F0388
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F038C
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F0390
  c->ctr=c->r[12]; // 803F0394
  if (true) { c->lr=0x803F039Cu; dispatch(c,c->ctr); } // 803F0398
  c->r[4]=c->r[3]|c->r[3]; // 803F039C
  c->r[3]=c->r[1]+0x00000080u; // 803F03A0
  c->lr=0x803F03A8u; f_803EBFE8(c); // 803F03A4
  c->r[3]=c->r[1]+0x00000070u; // 803F03A8
  c->lr=0x803F03B0u; f_803E49FC(c); // 803F03AC
  c->r[3]=c->r[1]+0x00000070u; // 803F03B0
  c->r[4]=c->r[1]+0x00000080u; // 803F03B4
  c->lr=0x803F03BCu; f_803E53A0(c); // 803F03B8
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F03BC
  c->r[4]=c->r[29]+0x000000B0u; // 803F03C0
  c->lr=0x803F03C8u; f_803E53A0(c); // 803F03C4
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F03C8
  c->r[4]=c->r[1]+0x00000070u; // 803F03CC
  c->lr=0x803F03D4u; f_803E53B4(c); // 803F03D0
L_803F03D4:;
  c->r[5]=R32(c->r[30]+0x00000068u); // 803F03D4
  c->r[3]=c->r[29]|c->r[29]; // 803F03D8
  c->r[4]=c->r[30]|c->r[30]; // 803F03DC
  c->r[6]=c->r[27]|c->r[27]; // 803F03E0
  c->lr=0x803F03E8u; f_803E7630(c); // 803F03E4
  cmps(c,0,(int32_t)c->r[28],0); // 803F03E8
  if (crb(c,2)) { goto L_803F0404; } // 803F03EC
  c->r[3]=0u+0x80570000u; // 803F03F0
  c->r[4]=c->r[28]|c->r[28]; // 803F03F4
  c->r[3]=c->r[3]+0x000041A8u; // 803F03F8
  c->lr=0x803F0400u; f_803FD4F8(c); // 803F03FC
  W32(c->r[30]+0x000000B8u,c->r[28]); // 803F0400
L_803F0404:;
  c->r[26]=R32(c->r[30]+0x000000B4u); // 803F0404
  cmps(c,0,(int32_t)c->r[26],0); // 803F0408
  if (!crb(c,2)) { goto L_803F0418; } // 803F040C
  c->r[3]=0u+0x00000001u; // 803F0410
  goto L_803F0760; // 803F0414
L_803F0418:;
  c->r[0]=R32(c->r[30]+0x00000068u); // 803F0418
  cmps(c,0,(int32_t)c->r[0],0); // 803F041C
  if (crb(c,2)) { goto L_803F0534; } // 803F0420
  c->r[0]=R32(c->r[29]+0x000000A4u); // 803F0424
  cmps(c,0,(int32_t)c->r[0],1); // 803F0428
  if (!crb(c,2)) { goto L_803F04B0; } // 803F042C
  c->lr=0x803F0434u; f_803E99C8(c); // 803F0430
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0434
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F0438
  c->ctr=c->r[12]; // 803F043C
  if (true) { c->lr=0x803F0444u; dispatch(c,c->ctr); } // 803F0440
  c->r[4]=c->r[3]|c->r[3]; // 803F0444
  c->r[3]=c->r[1]+0x00000060u; // 803F0448
  c->lr=0x803F0450u; f_803EBFE8(c); // 803F044C
  c->r[3]=c->r[1]+0x00000050u; // 803F0450
  c->lr=0x803F0458u; f_803E49FC(c); // 803F0454
  c->r[3]=c->r[1]+0x00000050u; // 803F0458
  c->r[4]=c->r[1]+0x00000060u; // 803F045C
  c->lr=0x803F0464u; f_803E53A0(c); // 803F0460
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0464
  c->r[4]=c->r[29]+0x000000B0u; // 803F0468
  c->lr=0x803F0470u; f_803E53A0(c); // 803F046C
  c->lr=0x803F0474u; f_803E99C8(c); // 803F0470
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0474
  c->r[12]=R32(c->r[12]+0x00000070u); // 803F0478
  c->ctr=c->r[12]; // 803F047C
  if (true) { c->lr=0x803F0484u; dispatch(c,c->ctr); } // 803F0480
  c->r[4]=c->r[3]|c->r[3]; // 803F0484
  c->r[3]=c->r[1]+0x00000100u; // 803F0488
  c->lr=0x803F0490u; f_803F0778(c); // 803F048C
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0490
  c->r[4]=c->r[1]+0x00000100u; // 803F0494
  c->r[5]=c->r[29]+0x000000B0u; // 803F0498
  c->lr=0x803F04A0u; f_803E541C(c); // 803F049C
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F04A0
  c->r[4]=c->r[1]+0x00000050u; // 803F04A4
  c->lr=0x803F04ACu; f_803E53B4(c); // 803F04A8
  goto L_803F0534; // 803F04AC
L_803F04B0:;
  c->r[0]=R32(c->r[29]+0x000000A8u); // 803F04B0
  cmps(c,0,(int32_t)c->r[0],1); // 803F04B4
  if (!crb(c,2)) { goto L_803F0534; } // 803F04B8
  c->lr=0x803F04C0u; f_803E99C8(c); // 803F04BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F04C0
  c->r[12]=R32(c->r[12]+0x00000070u); // 803F04C4
  c->ctr=c->r[12]; // 803F04C8
  if (true) { c->lr=0x803F04D0u; dispatch(c,c->ctr); } // 803F04CC
  c->r[4]=c->r[3]|c->r[3]; // 803F04D0
  c->r[3]=c->r[1]+0x000000D0u; // 803F04D4
  c->lr=0x803F04DCu; f_803F0778(c); // 803F04D8
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F04DC
  c->r[4]=c->r[1]+0x000000D0u; // 803F04E0
  c->lr=0x803F04E8u; f_803F082C(c); // 803F04E4
  c->lr=0x803F04ECu; f_803E99C8(c); // 803F04E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F04EC
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F04F0
  c->ctr=c->r[12]; // 803F04F4
  if (true) { c->lr=0x803F04FCu; dispatch(c,c->ctr); } // 803F04F8
  c->r[4]=c->r[3]|c->r[3]; // 803F04FC
  c->r[3]=c->r[1]+0x00000040u; // 803F0500
  c->lr=0x803F0508u; f_803EBFE8(c); // 803F0504
  c->r[3]=c->r[1]+0x00000030u; // 803F0508
  c->lr=0x803F0510u; f_803E49FC(c); // 803F050C
  c->r[3]=c->r[1]+0x00000030u; // 803F0510
  c->r[4]=c->r[1]+0x00000040u; // 803F0514
  c->lr=0x803F051Cu; f_803E53A0(c); // 803F0518
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F051C
  c->r[4]=c->r[29]+0x000000B0u; // 803F0520
  c->lr=0x803F0528u; f_803E53A0(c); // 803F0524
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0528
  c->r[4]=c->r[1]+0x00000030u; // 803F052C
  c->lr=0x803F0534u; f_803E53B4(c); // 803F0530
L_803F0534:;
  c->r[5]=R32(c->r[30]+0x00000068u); // 803F0534
  c->r[3]=c->r[29]|c->r[29]; // 803F0538
  c->r[4]=c->r[30]|c->r[30]; // 803F053C
  c->r[6]=c->r[26]|c->r[26]; // 803F0540
  c->lr=0x803F0548u; f_803E7630(c); // 803F0544
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F0548
  cmps(c,0,(int32_t)c->r[3],0); // 803F054C
  if (crb(c,2)) { goto L_803F0560; } // 803F0550
  c->lr=0x803F0558u; f_803F0868(c); // 803F0554
  c->r[3]=c->r[26]|c->r[26]; // 803F0558
  c->lr=0x803F0560u; f_803E2EC4(c); // 803F055C
L_803F0560:;
  c->r[3]=c->r[26]|c->r[26]; // 803F0560
  c->lr=0x803F0568u; f_803E2EB0(c); // 803F0564
  cmps(c,0,(int32_t)c->r[3],0); // 803F0568
  if (!crb(c,2)) { goto L_803F075C; } // 803F056C
  c->r[26]=R32(c->r[29]+0x0000009Cu); // 803F0570
  c->r[31]=0u+0x00000001u; // 803F0574
  goto L_803F0594; // 803F0578
L_803F057C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 803F057C
  c->r[3]=c->r[26]|c->r[26]; // 803F0580
  c->r[12]=R32(c->r[12]+0x00000064u); // 803F0584
  c->ctr=c->r[12]; // 803F0588
  if (true) { c->lr=0x803F0590u; dispatch(c,c->ctr); } // 803F058C
  c->r[26]=c->r[3]|c->r[3]; // 803F0590
L_803F0594:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F0594
  if (crb(c,2)) { goto L_803F05B8; } // 803F0598
  c->r[12]=R32(c->r[26]+0x00000000u); // 803F059C
  c->r[3]=c->r[26]|c->r[26]; // 803F05A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F05A4
  c->ctr=c->r[12]; // 803F05A8
  if (true) { c->lr=0x803F05B0u; dispatch(c,c->ctr); } // 803F05AC
  cmps(c,0,(int32_t)c->r[3],4); // 803F05B0
  if (crb(c,2)) { IRQCHK(c); goto L_803F057C; } // 803F05B4
L_803F05B8:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F05B8
  if (crb(c,2)) { goto L_803F075C; } // 803F05BC
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F05C0
  c->r[28]=0u+0x00000000u; // 803F05C4
  cmps(c,0,(int32_t)c->r[3],0); // 803F05C8
  if (crb(c,2)) { goto L_803F05E8; } // 803F05CC
  c->lr=0x803F05D4u; f_803E5D4C(c); // 803F05D0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 803F05D4
  c->r[0]=c->r[0]|0x00000001u; // 803F05D8
  cmps(c,0,(int32_t)c->r[0],0); // 803F05DC
  if (crb(c,2)) { goto L_803F05E8; } // 803F05E0
  c->r[28]=0u+0x00000001u; // 803F05E4
L_803F05E8:;
  c->r[3]=0u+0x80570000u; // 803F05E8
  c->r[7]=R32(c->r[30]+0x00000120u); // 803F05EC
  c->r[4]=c->r[26]|c->r[26]; // 803F05F0
  c->r[5]=c->r[28]|c->r[28]; // 803F05F4
  c->r[6]=c->r[30]|c->r[30]; // 803F05F8
  c->r[3]=c->r[3]+0x000041A8u; // 803F05FC
  c->lr=0x803F0604u; f_803FCA34(c); // 803F0600
  cmps(c,0,(int32_t)c->r[3],0); // 803F0604
  c->r[27]=c->r[3]|c->r[3]; // 803F0608
  if (crb(c,2)) { goto L_803F0750; } // 803F060C
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803F0610
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0614
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F0618
  c->ctr=c->r[12]; // 803F061C
  if (true) { c->lr=0x803F0624u; dispatch(c,c->ctr); } // 803F0620
  cmps(c,0,(int32_t)c->r[3],1); // 803F0624
  if (!crb(c,2)) { goto L_803F0730; } // 803F0628
  c->r[3]=c->r[27]+0x00000038u; // 803F062C
  c->r[4]=c->r[30]+0x00000038u; // 803F0630
  c->lr=0x803F0638u; f_803E53A0(c); // 803F0634
  c->r[3]=R32(c->r[27]+0x0000006Cu); // 803F0638
  c->r[0]=R32(c->r[3]+0x00000190u); // 803F063C
  cmps(c,0,(int32_t)c->r[0],7); // 803F0640
  if (crb(c,2)) { goto L_803F0654; } // 803F0644
  c->r[3]=c->r[27]+0x00000008u; // 803F0648
  c->r[4]=c->r[30]+0x00000008u; // 803F064C
  c->lr=0x803F0654u; f_803EC00C(c); // 803F0650
L_803F0654:;
  c->r[0]=R32(c->r[26]+0x0000006Cu); // 803F0654
  cmps(c,0,(int32_t)c->r[0],0); // 803F0658
  if (crb(c,2)) { goto L_803F0720; } // 803F065C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F0660
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803F0664
  c->r[0]=R32(c->r[26]+0x00000074u); // 803F0668
  cmps(c,0,(int32_t)c->r[0],0); // 803F066C
  if (crb(c,2)) { goto L_803F06B4; } // 803F0670
  c->lr=0x803F0678u; f_803E99C8(c); // 803F0674
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F0678
  c->r[4]=c->r[1]+0x00000008u; // 803F067C
  {uint32_t ea=c->r[27]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0680
  c->r[5]=0u+0x00000000u; // 803F0684
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803F0688
  c->r[6]=0u+0x00000000u; // 803F068C
  {uint32_t ea=c->r[27]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F0690
  c->r[7]=R32(c->r[26]+0x0000007Cu); // 803F0694
  c->ctr=c->r[12]; // 803F0698
  if (true) { c->lr=0x803F06A0u; dispatch(c,c->ctr); } // 803F069C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F06A0
  {uint32_t ea=c->r[26]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F06A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F06A8
  {uint32_t ea=c->r[27]+0x0000003Cu; WF32(ea,c->f[0]);} // 803F06AC
  goto L_803F0720; // 803F06B0
L_803F06B4:;
  c->r[0]=R32(c->r[26]+0x00000078u); // 803F06B4
  cmps(c,0,(int32_t)c->r[0],0); // 803F06B8
  if (crb(c,2)) { goto L_803F0720; } // 803F06BC
  c->r[3]=c->r[1]+0x00000020u; // 803F06C0
  c->lr=0x803F06C8u; f_803E49FC(c); // 803F06C4
  c->lr=0x803F06CCu; f_803E99C8(c); // 803F06C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F06CC
  c->r[4]=c->r[1]+0x00000008u; // 803F06D0
  c->r[5]=c->r[1]+0x00000020u; // 803F06D4
  {uint32_t ea=c->r[27]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F06D8
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803F06DC
  c->r[6]=0u+0x00000000u; // 803F06E0
  {uint32_t ea=c->r[27]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F06E4
  c->r[7]=R32(c->r[26]+0x0000007Cu); // 803F06E8
  c->ctr=c->r[12]; // 803F06EC
  if (true) { c->lr=0x803F06F4u; dispatch(c,c->ctr); } // 803F06F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F06F4
  c->r[3]=c->r[1]+0x00000010u; // 803F06F8
  {uint32_t ea=c->r[27]+0x0000003Cu; WF32(ea,c->f[0]);} // 803F06FC
  c->lr=0x803F0704u; f_803E49FC(c); // 803F0700
  {uint32_t ea=c->r[26]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0704
  c->r[3]=c->r[1]+0x00000010u; // 803F0708
  c->r[4]=c->r[1]+0x00000020u; // 803F070C
  c->lr=0x803F0714u; f_803E52DC(c); // 803F0710
  c->r[3]=c->r[27]+0x00000038u; // 803F0714
  c->r[4]=c->r[1]+0x00000010u; // 803F0718
  c->lr=0x803F0720u; f_803E52F8(c); // 803F071C
L_803F0720:;
  c->r[3]=c->r[27]|c->r[27]; // 803F0720
  c->lr=0x803F0728u; f_803EC040(c); // 803F0724
  c->r[4]=c->r[27]|c->r[27]; // 803F0728
  c->lr=0x803F0730u; f_803EC150(c); // 803F072C
L_803F0730:;
  W32(c->r[30]+0x000000B8u,c->r[27]); // 803F0730
  c->r[3]=c->r[29]|c->r[29]; // 803F0734
  c->r[5]=R32(c->r[30]+0x00000068u); // 803F0738
  c->r[4]=c->r[27]|c->r[27]; // 803F073C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0740
  c->r[6]=0u+0x00000001u; // 803F0744
  c->lr=0x803F074Cu; f_803E7448(c); // 803F0748
  goto L_803F075C; // 803F074C
L_803F0750:;
  c->r[0]=0u+0x00000000u; // 803F0750
  W32(c->r[30]+0x000000B8u,c->r[0]); // 803F0754
  c->r[31]=0u+0x00000000u; // 803F0758
L_803F075C:;
  c->r[3]=c->r[31]|c->r[31]; // 803F075C
L_803F0760:;
  c->r[11]=c->r[1]+0x000001B0u; // 803F0760
  c->lr=0x803F0768u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F0764
  c->r[0]=R32(c->r[1]+0x000001B4u); // 803F0768
  c->lr=c->r[0]; // 803F076C
  c->r[1]=c->r[1]+0x000001B0u; // 803F0770
  return; // 803F0774
}

// fn_803F0778
void f_803F0778(Ctx* __restrict c) {
  trace_call(0x803F0778u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F0778
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 803F077C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 803F0780
  c->r[6]=c->r[1]+0x00000028u; // 803F0784
  {uint32_t ea=c->r[4]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 803F0788
  c->r[5]=c->r[1]+0x00000030u; // 803F078C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 803F0790
  c->r[8]=c->r[1]+0x00000018u; // 803F0794
  {uint32_t ea=c->r[4]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F0798
  c->r[7]=c->r[1]+0x00000020u; // 803F079C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 803F07A0
  c->r[10]=c->r[1]+0x00000008u; // 803F07A4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F07A8
  c->r[9]=c->r[1]+0x00000010u; // 803F07AC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 803F07B0
  {uint32_t ea=c->r[4]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F07B4
  {uint32_t ea=c->r[4]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F07B8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F07BC
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F07C0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[11]);} // 803F07C4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[10]);} // 803F07C8
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,10,ea,0,0);} // 803F07CC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[9]);} // 803F07D0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[8]);} // 803F07D4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,8,ea,0,0);} // 803F07D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[7]);} // 803F07DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[6]);} // 803F07E0
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,6,ea,0,0);} // 803F07E4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 803F07E8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[4]);} // 803F07EC
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F07F0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 803F07F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803F07F8
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F07FC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F0800
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803F0804
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F0808
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,10,ea,0,0);} // 803F080C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,8,ea,0,0);} // 803F0810
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,6,ea,0,0);} // 803F0814
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,4,ea,0,0);} // 803F0818
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 803F081C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 803F0820
  c->r[1]=c->r[1]+0x00000040u; // 803F0824
  return; // 803F0828
}

// fn_803F082C
void f_803F082C(Ctx* __restrict c) {
  trace_call(0x803F082Cu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F082C
  c->r[0]=0u+0x00000001u; // 803F0830
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,0,0);} // 803F0834
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 803F0838
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 803F083C
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,0,ea,0,0);} // 803F0840
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,1,ea,0,0);} // 803F0844
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,1,ea,0,0);} // 803F0848
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 803F084C
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,0,ea,0,0);} // 803F0850
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,1,ea,0,0);} // 803F0854
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,1,ea,0,0);} // 803F0858
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 803F085C
  W32(c->r[3]+0x000000B8u,c->r[0]); // 803F0860
  return; // 803F0864
}

// fn_803F0868
void f_803F0868(Ctx* __restrict c) {
  trace_call(0x803F0868u);
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0868
  return; // 803F086C
}

// fn_803F0870
void f_803F0870(Ctx* __restrict c) {
  trace_call(0x803F0870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F0870
  c->r[0]=c->lr; // 803F0874
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F0878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F087C
  c->r[31]=R32(c->r[4]+0x000000B4u); // 803F0880
  cmps(c,0,(int32_t)c->r[31],0); // 803F0884
  if (crb(c,2)) { goto L_803F08A4; } // 803F0888
  c->r[3]=c->r[31]|c->r[31]; // 803F088C
  c->r[4]=0u+0x00000001u; // 803F0890
  c->lr=0x803F0898u; f_803FBF24(c); // 803F0894
  c->r[3]=c->r[31]|c->r[31]; // 803F0898
  c->r[4]=0u+0x00000001u; // 803F089C
  c->lr=0x803F08A4u; f_803E2D24(c); // 803F08A0
L_803F08A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F08A4
  c->r[3]=0u+0x00000000u; // 803F08A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F08AC
  c->lr=c->r[0]; // 803F08B0
  c->r[1]=c->r[1]+0x00000010u; // 803F08B4
  return; // 803F08B8
}

// fn_803F08BC
void f_803F08BC(Ctx* __restrict c) {
  trace_call(0x803F08BCu);
  c->r[3]=0u+0x80470000u; // 803F08BC
  c->r[3]=c->r[3]+0xFFFF99C8u; // 803F08C0
  return; // 803F08C4
}

// fn_803F08C8
void f_803F08C8(Ctx* __restrict c) {
  trace_call(0x803F08C8u);
  c->r[3]=c->r[13]+0xFFFFDF14u; // 803F08C8
  return; // 803F08CC
}

// fn_803F08D0
void f_803F08D0(Ctx* __restrict c) {
  trace_call(0x803F08D0u);
  {uint32_t ea=c->r[1]+0xFFFFFBC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F08D0
  c->r[0]=c->lr; // 803F08D4
  W32(c->r[1]+0x00000444u,c->r[0]); // 803F08D8
  c->r[11]=c->r[1]+0x00000440u; // 803F08DC
  c->lr=0x803F08E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F08E0
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F08E4
  c->r[30]=0u+0x00000000u; // 803F08E8
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F08EC
  c->r[31]=0u+0x00000001u; // 803F08F0
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F08F4
  c->r[28]=c->r[3]|c->r[3]; // 803F08F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803F08FC
  c->r[29]=c->r[4]|c->r[4]; // 803F0900
  c->r[27]=0u+0x00000004u; // 803F0904
  c->r[26]=0u+0x00000002u; // 803F0908
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 803F090C
  W32(c->r[1]+0x00000020u,c->r[30]); // 803F0910
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F0914
  W32(c->r[1]+0x00000028u,c->r[30]); // 803F0918
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803F091C
  W32(c->r[1]+0x00000030u,c->r[30]); // 803F0920
  W32(c->r[1]+0x00000034u,c->r[30]); // 803F0924
  W32(c->r[3]+0x00000068u,c->r[31]); // 803F0928
L_803F092C:;
  c->r[3]=c->r[29]|c->r[29]; // 803F092C
  c->r[4]=c->r[1]+0x00000008u; // 803F0930
  c->r[5]=c->r[1]+0x00000010u; // 803F0934
  c->r[6]=c->r[1]+0x0000000Cu; // 803F0938
  c->r[7]=c->r[1]+0x00000038u; // 803F093C
  c->r[8]=c->r[1]+0x00000018u; // 803F0940
  c->r[9]=0u+0x000003E8u; // 803F0944
  c->lr=0x803F094Cu; f_80403308(c); // 803F0948
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F094C
  cmps(c,0,(int32_t)c->r[0],166); // 803F0950
  if (crb(c,2)) { goto L_803F0AC0; } // 803F0954
  if (!crb(c,0)) { goto L_803F09D8; } // 803F0958
  cmps(c,0,(int32_t)c->r[0],68); // 803F095C
  if (crb(c,2)) { goto L_803F0C3C; } // 803F0960
  if (!crb(c,0)) { goto L_803F09A4; } // 803F0964
  cmps(c,0,(int32_t)c->r[0],23); // 803F0968
  if (crb(c,2)) { goto L_803F0A98; } // 803F096C
  if (!crb(c,0)) { goto L_803F0998; } // 803F0970
  cmps(c,0,(int32_t)c->r[0],19); // 803F0974
  if (crb(c,2)) { goto L_803F0CB0; } // 803F0978
  if (!crb(c,0)) { goto L_803F098C; } // 803F097C
  cmps(c,0,(int32_t)c->r[0],18); // 803F0980
  if (!crb(c,0)) { goto L_803F0A78; } // 803F0984
  goto L_803F0CB0; // 803F0988
L_803F098C:;
  cmps(c,0,(int32_t)c->r[0],21); // 803F098C
  if (!crb(c,0)) { goto L_803F0CB0; } // 803F0990
  goto L_803F0A6C; // 803F0994
L_803F0998:;
  cmps(c,0,(int32_t)c->r[0],51); // 803F0998
  if (crb(c,2)) { goto L_803F0A60; } // 803F099C
  goto L_803F0CB0; // 803F09A0
L_803F09A4:;
  cmps(c,0,(int32_t)c->r[0],98); // 803F09A4
  if (crb(c,2)) { goto L_803F0C1C; } // 803F09A8
  if (!crb(c,0)) { goto L_803F09C8; } // 803F09AC
  cmps(c,0,(int32_t)c->r[0],71); // 803F09B0
  if (crb(c,2)) { goto L_803F0C60; } // 803F09B4
  if (!crb(c,0)) { goto L_803F0CB0; } // 803F09B8
  cmps(c,0,(int32_t)c->r[0],70); // 803F09BC
  if (!crb(c,0)) { goto L_803F0C54; } // 803F09C0
  goto L_803F0C48; // 803F09C4
L_803F09C8:;
  cmps(c,0,(int32_t)c->r[0],100); // 803F09C8
  if (crb(c,2)) { goto L_803F0A54; } // 803F09CC
  if (!crb(c,0)) { goto L_803F0CB0; } // 803F09D0
  goto L_803F0C6C; // 803F09D4
L_803F09D8:;
  cmps(c,0,(int32_t)c->r[0],176); // 803F09D8
  if (crb(c,2)) { goto L_803F0AAC; } // 803F09DC
  if (!crb(c,0)) { goto L_803F0A20; } // 803F09E0
  cmps(c,0,(int32_t)c->r[0],171); // 803F09E4
  if (crb(c,2)) { goto L_803F0B2C; } // 803F09E8
  if (!crb(c,0)) { goto L_803F0A08; } // 803F09EC
  cmps(c,0,(int32_t)c->r[0],169); // 803F09F0
  if (crb(c,2)) { goto L_803F0B08; } // 803F09F4
  if (!crb(c,0)) { goto L_803F0B20; } // 803F09F8
  cmps(c,0,(int32_t)c->r[0],168); // 803F09FC
  if (!crb(c,0)) { goto L_803F0AF0; } // 803F0A00
  goto L_803F0AD8; // 803F0A04
L_803F0A08:;
  cmps(c,0,(int32_t)c->r[0],174); // 803F0A08
  if (crb(c,2)) { goto L_803F0B68; } // 803F0A0C
  if (!crb(c,0)) { goto L_803F0B80; } // 803F0A10
  cmps(c,0,(int32_t)c->r[0],173); // 803F0A14
  if (!crb(c,0)) { goto L_803F0B50; } // 803F0A18
  goto L_803F0B38; // 803F0A1C
L_803F0A20:;
  cmps(c,0,(int32_t)c->r[0],181); // 803F0A20
  if (crb(c,2)) { goto L_803F0BD4; } // 803F0A24
  if (!crb(c,0)) { goto L_803F0A44; } // 803F0A28
  cmps(c,0,(int32_t)c->r[0],179); // 803F0A2C
  if (crb(c,2)) { goto L_803F0BA4; } // 803F0A30
  if (!crb(c,0)) { goto L_803F0BBC; } // 803F0A34
  cmps(c,0,(int32_t)c->r[0],178); // 803F0A38
  if (!crb(c,0)) { goto L_803F0B98; } // 803F0A3C
  goto L_803F0B8C; // 803F0A40
L_803F0A44:;
  cmps(c,0,(int32_t)c->r[0],183); // 803F0A44
  if (crb(c,2)) { goto L_803F0C04; } // 803F0A48
  if (!crb(c,0)) { goto L_803F0CB0; } // 803F0A4C
  goto L_803F0BEC; // 803F0A50
L_803F0A54:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0A54
  W32(c->r[28]+0x00000098u,c->r[0]); // 803F0A58
  goto L_803F0CB0; // 803F0A5C
L_803F0A60:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0A60
  W32(c->r[28]+0x0000009Cu,c->r[0]); // 803F0A64
  goto L_803F0CB0; // 803F0A68
L_803F0A6C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0A6C
  W32(c->r[28]+0x000000A4u,c->r[0]); // 803F0A70
  goto L_803F0CB0; // 803F0A74
L_803F0A78:;
  c->r[4]=R32(c->r[28]+0x000000A4u); // 803F0A78
  c->r[3]=c->r[1]+0x00000038u; // 803F0A7C
  c->r[5]=0u+0x00000000u; // 803F0A80
  c->r[6]=0u+0x00000000u; // 803F0A84
  c->r[4]=c->r[4]+0x00000001u; // 803F0A88
  c->lr=0x803F0A90u; f_80400FB4(c); // 803F0A8C
  W32(c->r[28]+0x000000A0u,c->r[3]); // 803F0A90
  goto L_803F0CB0; // 803F0A94
L_803F0A98:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0A98
  c->r[3]=c->r[29]|c->r[29]; // 803F0A9C
  c->r[5]=c->r[28]+0x000000A8u; // 803F0AA0
  c->lr=0x803F0AA8u; f_804039AC(c); // 803F0AA4
  goto L_803F0CB0; // 803F0AA8
L_803F0AAC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0AAC
  c->r[3]=c->r[29]|c->r[29]; // 803F0AB0
  c->r[5]=c->r[28]+0x000000ACu; // 803F0AB4
  c->lr=0x803F0ABCu; f_804039AC(c); // 803F0AB8
  goto L_803F0CB0; // 803F0ABC
L_803F0AC0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0AC0
  c->r[3]=c->r[29]|c->r[29]; // 803F0AC4
  c->r[5]=c->r[1]+0x00000018u; // 803F0AC8
  c->r[6]=c->r[28]+0x000000B0u; // 803F0ACC
  c->lr=0x803F0AD4u; f_804039BC(c); // 803F0AD0
  goto L_803F0CB0; // 803F0AD4
L_803F0AD8:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0AD8
  c->r[3]=c->r[29]|c->r[29]; // 803F0ADC
  c->r[5]=c->r[1]+0x00000018u; // 803F0AE0
  c->r[6]=c->r[28]+0x000000D0u; // 803F0AE4
  c->lr=0x803F0AECu; f_804039BC(c); // 803F0AE8
  goto L_803F0CB0; // 803F0AEC
L_803F0AF0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0AF0
  c->r[3]=c->r[29]|c->r[29]; // 803F0AF4
  c->r[5]=c->r[1]+0x00000018u; // 803F0AF8
  c->r[6]=c->r[28]+0x000000F0u; // 803F0AFC
  c->lr=0x803F0B04u; f_804039BC(c); // 803F0B00
  goto L_803F0CB0; // 803F0B04
L_803F0B08:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0B08
  c->r[3]=c->r[29]|c->r[29]; // 803F0B0C
  c->r[5]=c->r[1]+0x00000018u; // 803F0B10
  c->r[6]=c->r[28]+0x00000110u; // 803F0B14
  c->lr=0x803F0B1Cu; f_804039BC(c); // 803F0B18
  goto L_803F0CB0; // 803F0B1C
L_803F0B20:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0B20
  W32(c->r[28]+0x00000130u,c->r[0]); // 803F0B24
  goto L_803F0CB0; // 803F0B28
L_803F0B2C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0B2C
  W32(c->r[28]+0x00000134u,c->r[0]); // 803F0B30
  goto L_803F0CB0; // 803F0B34
L_803F0B38:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0B38
  c->r[3]=c->r[29]|c->r[29]; // 803F0B3C
  c->r[5]=c->r[1]+0x00000018u; // 803F0B40
  c->r[6]=c->r[28]+0x00000138u; // 803F0B44
  c->lr=0x803F0B4Cu; f_804039BC(c); // 803F0B48
  goto L_803F0CB0; // 803F0B4C
L_803F0B50:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0B50
  c->r[3]=c->r[29]|c->r[29]; // 803F0B54
  c->r[5]=c->r[1]+0x00000018u; // 803F0B58
  c->r[6]=c->r[28]+0x00000158u; // 803F0B5C
  c->lr=0x803F0B64u; f_804039BC(c); // 803F0B60
  goto L_803F0CB0; // 803F0B64
L_803F0B68:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0B68
  c->r[3]=c->r[29]|c->r[29]; // 803F0B6C
  c->r[5]=c->r[1]+0x00000018u; // 803F0B70
  c->r[6]=c->r[28]+0x00000178u; // 803F0B74
  c->lr=0x803F0B7Cu; f_804039BC(c); // 803F0B78
  goto L_803F0CB0; // 803F0B7C
L_803F0B80:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0B80
  W32(c->r[28]+0x00000198u,c->r[0]); // 803F0B84
  goto L_803F0CB0; // 803F0B88
L_803F0B8C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0B8C
  W32(c->r[28]+0x0000019Cu,c->r[0]); // 803F0B90
  goto L_803F0CB0; // 803F0B94
L_803F0B98:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0B98
  W32(c->r[28]+0x000001A0u,c->r[0]); // 803F0B9C
  goto L_803F0CB0; // 803F0BA0
L_803F0BA4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0BA4
  c->r[3]=c->r[29]|c->r[29]; // 803F0BA8
  c->r[5]=c->r[1]+0x00000018u; // 803F0BAC
  c->r[6]=c->r[28]+0x00000228u; // 803F0BB0
  c->lr=0x803F0BB8u; f_804039BC(c); // 803F0BB4
  goto L_803F0CB0; // 803F0BB8
L_803F0BBC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0BBC
  c->r[3]=c->r[29]|c->r[29]; // 803F0BC0
  c->r[5]=c->r[1]+0x00000018u; // 803F0BC4
  c->r[6]=c->r[28]+0x000001A8u; // 803F0BC8
  c->lr=0x803F0BD0u; f_804039BC(c); // 803F0BCC
  goto L_803F0CB0; // 803F0BD0
L_803F0BD4:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0BD4
  c->r[3]=c->r[29]|c->r[29]; // 803F0BD8
  c->r[5]=c->r[1]+0x00000018u; // 803F0BDC
  c->r[6]=c->r[28]+0x000001C8u; // 803F0BE0
  c->lr=0x803F0BE8u; f_804039BC(c); // 803F0BE4
  goto L_803F0CB0; // 803F0BE8
L_803F0BEC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0BEC
  c->r[3]=c->r[29]|c->r[29]; // 803F0BF0
  c->r[5]=c->r[1]+0x00000018u; // 803F0BF4
  c->r[6]=c->r[28]+0x000001E8u; // 803F0BF8
  c->lr=0x803F0C00u; f_804039BC(c); // 803F0BFC
  goto L_803F0CB0; // 803F0C00
L_803F0C04:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0C04
  c->r[3]=c->r[29]|c->r[29]; // 803F0C08
  c->r[5]=c->r[1]+0x00000018u; // 803F0C0C
  c->r[6]=c->r[28]+0x00000208u; // 803F0C10
  c->lr=0x803F0C18u; f_804039BC(c); // 803F0C14
  goto L_803F0CB0; // 803F0C18
L_803F0C1C:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F0C1C
  c->r[0]=R32(c->r[28]+0x00000060u); // 803F0C20
  c->r[3]=0u-c->r[4]; // 803F0C24
  c->r[3]=c->r[3]|c->r[4]; // 803F0C28
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 803F0C2C
  c->r[0]=c->r[0]|c->r[3]; // 803F0C30
  W32(c->r[28]+0x00000060u,c->r[0]); // 803F0C34
  goto L_803F0CB0; // 803F0C38
L_803F0C3C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0C3C
  W32(c->r[28]+0x00000084u,c->r[0]); // 803F0C40
  goto L_803F0CB0; // 803F0C44
L_803F0C48:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0C48
  W32(c->r[28]+0x00000088u,c->r[0]); // 803F0C4C
  goto L_803F0CB0; // 803F0C50
L_803F0C54:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0C54
  W32(c->r[28]+0x0000008Cu,c->r[0]); // 803F0C58
  goto L_803F0CB0; // 803F0C5C
L_803F0C60:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F0C60
  {uint32_t ea=c->r[28]+0x00000094u; WF32(ea,c->f[0]);} // 803F0C64
  goto L_803F0CB0; // 803F0C68
L_803F0C6C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0C6C
  W32(c->r[28]+0x00000064u,c->r[0]); // 803F0C70
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0C74
  cmps(c,0,(int32_t)c->r[0],0); // 803F0C78
  if (!crb(c,2)) { goto L_803F0C88; } // 803F0C7C
  W32(c->r[28]+0x00000068u,c->r[31]); // 803F0C80
  goto L_803F0CB0; // 803F0C84
L_803F0C88:;
  cmps(c,0,(int32_t)c->r[0],1); // 803F0C88
  if (!crb(c,2)) { goto L_803F0C98; } // 803F0C8C
  W32(c->r[28]+0x00000068u,c->r[26]); // 803F0C90
  goto L_803F0CB0; // 803F0C94
L_803F0C98:;
  cmps(c,0,(int32_t)c->r[0],2); // 803F0C98
  if (crb(c,0)) { goto L_803F0CA8; } // 803F0C9C
  W32(c->r[28]+0x00000068u,c->r[27]); // 803F0CA0
  goto L_803F0CB0; // 803F0CA4
L_803F0CA8:;
  W32(c->r[28]+0x00000068u,c->r[31]); // 803F0CA8
  W32(c->r[1]+0x00000010u,c->r[30]); // 803F0CAC
L_803F0CB0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F0CB0
  cmps(c,0,(int32_t)c->r[0],6); // 803F0CB4
  if (!crb(c,2)) { IRQCHK(c); goto L_803F092C; } // 803F0CB8
  c->r[11]=c->r[1]+0x00000440u; // 803F0CBC
  c->r[3]=0u+0x00000001u; // 803F0CC0
  c->lr=0x803F0CC8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F0CC4
  c->r[0]=R32(c->r[1]+0x00000444u); // 803F0CC8
  c->lr=c->r[0]; // 803F0CCC
  c->r[1]=c->r[1]+0x00000440u; // 803F0CD0
  return; // 803F0CD4
}

// fn_803F0CD8
void f_803F0CD8(Ctx* __restrict c) {
  trace_call(0x803F0CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F0CD8
  c->r[0]=c->lr; // 803F0CDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F0CE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F0CE4
  c->r[31]=c->r[4]|c->r[4]; // 803F0CE8
  c->r[4]=0u+0x00000064u; // 803F0CEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F0CF0
  c->r[30]=c->r[3]|c->r[3]; // 803F0CF4
  c->r[5]=R32(c->r[3]+0x00000098u); // 803F0CF8
  c->r[3]=c->r[31]|c->r[31]; // 803F0CFC
  c->lr=0x803F0D04u; f_80403B54(c); // 803F0D00
  c->r[5]=R32(c->r[30]+0x0000009Cu); // 803F0D04
  c->r[3]=c->r[31]|c->r[31]; // 803F0D08
  c->r[4]=0u+0x00000033u; // 803F0D0C
  c->lr=0x803F0D14u; f_80403B54(c); // 803F0D10
  c->r[5]=R32(c->r[30]+0x000000A4u); // 803F0D14
  c->r[3]=c->r[31]|c->r[31]; // 803F0D18
  c->r[4]=0u+0x00000014u; // 803F0D1C
  c->lr=0x803F0D24u; f_80403B54(c); // 803F0D20
  c->r[5]=R32(c->r[30]+0x000000A0u); // 803F0D24
  cmps(c,0,(int32_t)c->r[5],0); // 803F0D28
  if (crb(c,2)) { goto L_803F0D3C; } // 803F0D2C
  c->r[3]=c->r[31]|c->r[31]; // 803F0D30
  c->r[4]=0u+0x00000012u; // 803F0D34
  c->lr=0x803F0D3Cu; f_80403C34(c); // 803F0D38
L_803F0D3C:;
  c->r[5]=R32(c->r[30]+0x000000A8u); // 803F0D3C
  c->r[3]=c->r[31]|c->r[31]; // 803F0D40
  c->r[4]=0u+0x00000017u; // 803F0D44
  c->lr=0x803F0D4Cu; f_80403CA4(c); // 803F0D48
  c->r[5]=R32(c->r[30]+0x000000ACu); // 803F0D4C
  c->r[3]=c->r[31]|c->r[31]; // 803F0D50
  c->r[4]=0u+0x000000B0u; // 803F0D54
  c->lr=0x803F0D5Cu; f_80403CA4(c); // 803F0D58
  c->r[3]=c->r[31]|c->r[31]; // 803F0D5C
  c->r[5]=c->r[30]+0x000000B0u; // 803F0D60
  c->r[4]=0u+0x000000A6u; // 803F0D64
  c->lr=0x803F0D6Cu; f_80403D44(c); // 803F0D68
  c->r[3]=c->r[31]|c->r[31]; // 803F0D6C
  c->r[5]=c->r[30]+0x000000D0u; // 803F0D70
  c->r[4]=0u+0x000000A7u; // 803F0D74
  c->lr=0x803F0D7Cu; f_80403D44(c); // 803F0D78
  c->r[3]=c->r[31]|c->r[31]; // 803F0D7C
  c->r[5]=c->r[30]+0x000000F0u; // 803F0D80
  c->r[4]=0u+0x000000A8u; // 803F0D84
  c->lr=0x803F0D8Cu; f_80403D44(c); // 803F0D88
  c->r[3]=c->r[31]|c->r[31]; // 803F0D8C
  c->r[5]=c->r[30]+0x00000110u; // 803F0D90
  c->r[4]=0u+0x000000A9u; // 803F0D94
  c->lr=0x803F0D9Cu; f_80403D44(c); // 803F0D98
  c->r[5]=R32(c->r[30]+0x00000130u); // 803F0D9C
  c->r[3]=c->r[31]|c->r[31]; // 803F0DA0
  c->r[4]=0u+0x000000AAu; // 803F0DA4
  c->lr=0x803F0DACu; f_80403B54(c); // 803F0DA8
  c->r[5]=R32(c->r[30]+0x00000134u); // 803F0DAC
  c->r[3]=c->r[31]|c->r[31]; // 803F0DB0
  c->r[4]=0u+0x000000ABu; // 803F0DB4
  c->lr=0x803F0DBCu; f_80403B54(c); // 803F0DB8
  c->r[3]=c->r[31]|c->r[31]; // 803F0DBC
  c->r[5]=c->r[30]+0x00000138u; // 803F0DC0
  c->r[4]=0u+0x000000ACu; // 803F0DC4
  c->lr=0x803F0DCCu; f_80403D44(c); // 803F0DC8
  c->r[3]=c->r[31]|c->r[31]; // 803F0DCC
  c->r[5]=c->r[30]+0x00000158u; // 803F0DD0
  c->r[4]=0u+0x000000ADu; // 803F0DD4
  c->lr=0x803F0DDCu; f_80403D44(c); // 803F0DD8
  c->r[3]=c->r[31]|c->r[31]; // 803F0DDC
  c->r[5]=c->r[30]+0x00000178u; // 803F0DE0
  c->r[4]=0u+0x000000AEu; // 803F0DE4
  c->lr=0x803F0DECu; f_80403D44(c); // 803F0DE8
  c->r[5]=R32(c->r[30]+0x00000198u); // 803F0DEC
  c->r[3]=c->r[31]|c->r[31]; // 803F0DF0
  c->r[4]=0u+0x000000AFu; // 803F0DF4
  c->lr=0x803F0DFCu; f_80403B54(c); // 803F0DF8
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 803F0DFC
  c->r[3]=c->r[31]|c->r[31]; // 803F0E00
  c->r[4]=0u+0x000000B1u; // 803F0E04
  c->lr=0x803F0E0Cu; f_80403B54(c); // 803F0E08
  c->r[5]=R32(c->r[30]+0x000001A0u); // 803F0E0C
  c->r[3]=c->r[31]|c->r[31]; // 803F0E10
  c->r[4]=0u+0x000000B2u; // 803F0E14
  c->lr=0x803F0E1Cu; f_80403B54(c); // 803F0E18
  c->r[3]=c->r[31]|c->r[31]; // 803F0E1C
  c->r[5]=c->r[30]+0x00000228u; // 803F0E20
  c->r[4]=0u+0x000000B3u; // 803F0E24
  c->lr=0x803F0E2Cu; f_80403D44(c); // 803F0E28
  c->r[3]=c->r[31]|c->r[31]; // 803F0E2C
  c->r[5]=c->r[30]+0x000001A8u; // 803F0E30
  c->r[4]=0u+0x000000B4u; // 803F0E34
  c->lr=0x803F0E3Cu; f_80403D44(c); // 803F0E38
  c->r[3]=c->r[31]|c->r[31]; // 803F0E3C
  c->r[5]=c->r[30]+0x000001C8u; // 803F0E40
  c->r[4]=0u+0x000000B5u; // 803F0E44
  c->lr=0x803F0E4Cu; f_80403D44(c); // 803F0E48
  c->r[3]=c->r[31]|c->r[31]; // 803F0E4C
  c->r[5]=c->r[30]+0x000001E8u; // 803F0E50
  c->r[4]=0u+0x000000B6u; // 803F0E54
  c->lr=0x803F0E5Cu; f_80403D44(c); // 803F0E58
  c->r[3]=c->r[31]|c->r[31]; // 803F0E5C
  c->r[5]=c->r[30]+0x00000208u; // 803F0E60
  c->r[4]=0u+0x000000B7u; // 803F0E64
  c->lr=0x803F0E6Cu; f_80403D44(c); // 803F0E68
  c->r[0]=R32(c->r[30]+0x00000060u); // 803F0E6C
  c->r[3]=c->r[31]|c->r[31]; // 803F0E70
  c->r[4]=0u+0x00000062u; // 803F0E74
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 803F0E78
  c->lr=0x803F0E80u; f_80403B54(c); // 803F0E7C
  c->r[5]=R32(c->r[30]+0x00000064u); // 803F0E80
  c->r[3]=c->r[31]|c->r[31]; // 803F0E84
  c->r[4]=0u+0x00000063u; // 803F0E88
  c->lr=0x803F0E90u; f_80403B54(c); // 803F0E8C
  c->r[5]=R32(c->r[30]+0x00000084u); // 803F0E90
  c->r[3]=c->r[31]|c->r[31]; // 803F0E94
  c->r[4]=0u+0x00000044u; // 803F0E98
  c->lr=0x803F0EA0u; f_80403B54(c); // 803F0E9C
  c->r[5]=R32(c->r[30]+0x00000088u); // 803F0EA0
  c->r[3]=c->r[31]|c->r[31]; // 803F0EA4
  c->r[4]=0u+0x00000045u; // 803F0EA8
  c->lr=0x803F0EB0u; f_80403B54(c); // 803F0EAC
  c->r[5]=R32(c->r[30]+0x0000008Cu); // 803F0EB0
  c->r[3]=c->r[31]|c->r[31]; // 803F0EB4
  c->r[4]=0u+0x00000046u; // 803F0EB8
  c->lr=0x803F0EC0u; f_80403B54(c); // 803F0EBC
  {uint32_t ea=c->r[30]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0EC0
  c->r[3]=c->r[31]|c->r[31]; // 803F0EC4
  c->r[4]=0u+0x00000047u; // 803F0EC8
  c->lr=0x803F0ED0u; f_80403BC4(c); // 803F0ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F0ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F0ED4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F0ED8
  c->lr=c->r[0]; // 803F0EDC
  c->r[1]=c->r[1]+0x00000010u; // 803F0EE0
  return; // 803F0EE4
}

// fn_803F0EE8
void f_803F0EE8(Ctx* __restrict c) {
  trace_call(0x803F0EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F0EE8
  c->r[0]=0u+0x43300000u; // 803F0EEC
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[2]=RF64(ea);} // 803F0EF0
  c->r[5]=R32(c->r[3]+0x0000009Cu); // 803F0EF4
  c->r[3]=0u+0x80570000u; // 803F0EF8
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F0EFC
  c->r[3]=c->r[3]+0x000041A8u; // 803F0F00
  c->r[5]=c->r[5]^0x80000000u; // 803F0F04
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F0F08
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F0F0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803F0F10
  {uint32_t ea=c->r[4]+0x00000098u; WF32(ea,c->f[0]);} // 803F0F14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F0F18
  {uint32_t ea=c->r[4]+0x00000094u; WF32(ea,c->f[0]);} // 803F0F1C
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[1]);} // 803F0F20
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F0F24
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[0]);} // 803F0F28
  c->r[1]=c->r[1]+0x00000010u; // 803F0F2C
  return; // 803F0F30
}

// fn_803F0F34
void f_803F0F34(Ctx* __restrict c) {
  trace_call(0x803F0F34u);
  c->r[4]=R32(c->r[3]+0x000001A4u); // 803F0F34
  c->r[4]=c->r[4]+0x00000001u; // 803F0F38
  W32(c->r[3]+0x000001A4u,c->r[4]); // 803F0F3C
  cmps(c,0,(int32_t)c->r[4],16384); // 803F0F40
  if (!crb(c,1)) { goto L_803F0F50; } // 803F0F44
  c->r[0]=c->r[4]+0xFFFFC000u; // 803F0F48
  W32(c->r[3]+0x000001A4u,c->r[0]); // 803F0F4C
L_803F0F50:;
  c->r[3]=0u+0x00000000u; // 803F0F50
  return; // 803F0F54
}

// fn_803F0F58
void f_803F0F58(Ctx* __restrict c) {
  trace_call(0x803F0F58u);
  c->r[3]=c->r[13]+0xFFFFDF20u; // 803F0F58
  return; // 803F0F5C
}

// fn_803F0F60
void f_803F0F60(Ctx* __restrict c) {
  trace_call(0x803F0F60u);
  c->r[3]=c->r[13]+0xFFFFDF28u; // 803F0F60
  return; // 803F0F64
}

// fn_803F0F68
void f_803F0F68(Ctx* __restrict c) {
  trace_call(0x803F0F68u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F0F68
  c->r[0]=c->lr; // 803F0F6C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F0F70
  W32(c->r[1]+0x00000434u,c->r[0]); // 803F0F74
  c->r[0]=0u+0x00000000u; // 803F0F78
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F0F7C
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803F0F80
  c->r[31]=c->r[4]|c->r[4]; // 803F0F84
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F0F88
  W32(c->r[1]+0x00000428u,c->r[30]); // 803F0F8C
  c->r[30]=c->r[3]|c->r[3]; // 803F0F90
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803F0F94
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803F0F98
  W32(c->r[1]+0x00000020u,c->r[0]); // 803F0F9C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F0FA0
  W32(c->r[1]+0x00000028u,c->r[0]); // 803F0FA4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803F0FA8
  W32(c->r[1]+0x00000030u,c->r[0]); // 803F0FAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803F0FB0
L_803F0FB4:;
  c->r[3]=c->r[31]|c->r[31]; // 803F0FB4
  c->r[4]=c->r[1]+0x00000008u; // 803F0FB8
  c->r[5]=c->r[1]+0x00000010u; // 803F0FBC
  c->r[6]=c->r[1]+0x0000000Cu; // 803F0FC0
  c->r[7]=c->r[1]+0x00000038u; // 803F0FC4
  c->r[8]=c->r[1]+0x00000018u; // 803F0FC8
  c->r[9]=0u+0x000003E8u; // 803F0FCC
  c->lr=0x803F0FD4u; f_80403308(c); // 803F0FD0
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F0FD4
  cmps(c,0,(int32_t)c->r[0],51); // 803F0FD8
  if (crb(c,2)) { goto L_803F0FEC; } // 803F0FDC
  cmps(c,0,(int32_t)c->r[0],184); // 803F0FE0
  if (crb(c,2)) { goto L_803F0FF8; } // 803F0FE4
  goto L_803F1024; // 803F0FE8
L_803F0FEC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F0FEC
  W32(c->r[30]+0x00000198u,c->r[0]); // 803F0FF0
  goto L_803F1024; // 803F0FF4
L_803F0FF8:;
  c->r[3]=c->r[30]+0x00000098u; // 803F0FF8
  c->r[4]=c->r[1]+0x00000038u; // 803F0FFC
  c->r[5]=0u+0x00000100u; // 803F1000
  c->lr=0x803F1008u; f_803A6FD0(c); // 803F1004
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F1008
  c->r[4]=c->r[30]+0x00000098u; // 803F100C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F1010
  c->r[12]=R32(c->r[12]+0x000000B0u); // 803F1014
  c->ctr=c->r[12]; // 803F1018
  if (true) { c->lr=0x803F1020u; dispatch(c,c->ctr); } // 803F101C
  W32(c->r[30]+0x0000019Cu,c->r[3]); // 803F1020
L_803F1024:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F1024
  cmps(c,0,(int32_t)c->r[0],6); // 803F1028
  if (!crb(c,2)) { IRQCHK(c); goto L_803F0FB4; } // 803F102C
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803F1030
  c->r[3]=0u+0x00000001u; // 803F1034
  c->r[30]=R32(c->r[1]+0x00000428u); // 803F1038
  c->r[0]=R32(c->r[1]+0x00000434u); // 803F103C
  c->lr=c->r[0]; // 803F1040
  c->r[1]=c->r[1]+0x00000430u; // 803F1044
  return; // 803F1048
}

// fn_803F104C
void f_803F104C(Ctx* __restrict c) {
  trace_call(0x803F104Cu);
  c->r[3]=0u+0xFFFFFFFFu; // 803F104C
  return; // 803F1050
}

// fn_803F1054
void f_803F1054(Ctx* __restrict c) {
  trace_call(0x803F1054u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F1054
  c->r[0]=c->lr; // 803F1058
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F105C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F1060
  c->r[31]=c->r[4]|c->r[4]; // 803F1064
  c->r[4]=0u+0x00000033u; // 803F1068
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F106C
  c->r[30]=c->r[3]|c->r[3]; // 803F1070
  c->r[5]=R32(c->r[3]+0x00000198u); // 803F1074
  c->r[3]=c->r[31]|c->r[31]; // 803F1078
  c->lr=0x803F1080u; f_80403B54(c); // 803F107C
  c->r[3]=c->r[31]|c->r[31]; // 803F1080
  c->r[5]=c->r[30]+0x00000098u; // 803F1084
  c->r[4]=0u+0x000000B8u; // 803F1088
  c->lr=0x803F1090u; f_80403C34(c); // 803F108C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F1090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F1094
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F1098
  c->lr=c->r[0]; // 803F109C
  c->r[1]=c->r[1]+0x00000010u; // 803F10A0
  return; // 803F10A4
}

// fn_803F10A8
void f_803F10A8(Ctx* __restrict c) {
  trace_call(0x803F10A8u);
  c->r[0]=0u+0x00000000u; // 803F10A8
  c->r[3]=0u+0x80570000u; // 803F10AC
  W16(c->r[4]+0x000000A6u,c->r[0]); // 803F10B0
  c->r[3]=c->r[3]+0x000041A8u; // 803F10B4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F10B8
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[0]);} // 803F10BC
  return; // 803F10C0
}

// fn_803F10C4
void f_803F10C4(Ctx* __restrict c) {
  trace_call(0x803F10C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F10C4
  c->r[0]=c->lr; // 803F10C8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803F10CC
  W32(c->r[1]+0x000000ACu,c->r[31]); // 803F10D0
  c->r[31]=c->r[4]|c->r[4]; // 803F10D4
  W32(c->r[1]+0x000000A8u,c->r[30]); // 803F10D8
  c->r[30]=c->r[3]|c->r[3]; // 803F10DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000000A6u); // 803F10E0
  cmps(c,0,(int32_t)c->r[0],0); // 803F10E4
  if (crb(c,2)) { goto L_803F10F8; } // 803F10E8
  cmps(c,0,(int32_t)c->r[0],1); // 803F10EC
  if (crb(c,2)) { goto L_803F1314; } // 803F10F0
  goto L_803F1340; // 803F10F4
L_803F10F8:;
  c->r[8]=R32(c->r[4]+0x00000068u); // 803F10F8
  cmps(c,0,(int32_t)c->r[8],0); // 803F10FC
  if (crb(c,2)) { goto L_803F119C; } // 803F1100
  c->r[5]=c->r[8]+0x00000020u; // 803F1104
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,3,ea,0,0);} // 803F1108
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F110C
  c->r[6]=c->r[1]+0x00000008u; // 803F1110
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F1114
  c->r[7]=c->r[1]+0x00000010u; // 803F1118
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F111C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F1120
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,2,ea,0,0);} // 803F1124
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F1128
  {uint32_t ea=c->r[8]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F112C
  c->r[3]=c->r[1]+0x00000078u; // 803F1130
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803F1134
  {uint32_t ea=c->r[8]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 803F1138
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803F113C
  {uint32_t ea=c->r[8]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F1140
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803F1144
  c->r[4]=c->r[4]+0x00000008u; // 803F1148
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803F114C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803F1150
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803F1154
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803F1158
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803F115C
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803F1160
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803F1164
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803F1168
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803F116C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803F1170
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F1174
  {uint32_t ea=c->r[8]+0x00000010u; psq_load(c,2,ea,0,0);} // 803F1178
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F117C
  {uint32_t ea=c->r[8]+0x00000018u; psq_load(c,3,ea,0,0);} // 803F1180
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F1184
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803F1188
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F118C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F1190
  c->lr=0x803F1198u; f_803E2FB4(c); // 803F1194
  goto L_803F11F4; // 803F1198
L_803F119C:;
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,1,ea,0,0);} // 803F119C
  c->r[5]=c->r[1]+0x00000008u; // 803F11A0
  {uint32_t ea=c->r[4]+0x00000040u; psq_load(c,0,ea,0,0);} // 803F11A4
  c->r[3]=c->r[1]+0x00000010u; // 803F11A8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F11AC
  c->r[7]=c->r[1]+0x00000078u; // 803F11B0
  c->r[8]=c->r[1]+0x00000080u; // 803F11B4
  c->r[6]=c->r[1]+0x00000088u; // 803F11B8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F11BC
  c->r[3]=c->r[1]+0x00000098u; // 803F11C0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F11C4
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F11C8
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F11CC
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F11D0
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,0,ea,0,0);} // 803F11D4
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,1,ea,0,0);} // 803F11D8
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,1,ea,0,0);} // 803F11DC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F11E0
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,0,ea,0,0);} // 803F11E4
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,1,ea,0,0);} // 803F11E8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 803F11EC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F11F0
L_803F11F4:;
  c->r[4]=R32(c->r[30]+0x0000019Cu); // 803F11F4
  cmps(c,0,(int32_t)c->r[4],-1); // 803F11F8
  if (crb(c,2)) { goto L_803F1284; } // 803F11FC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[11]=c->ps1[11]=RF32(ea);} // 803F1200
  c->r[5]=c->r[1]+0x00000008u; // 803F1204
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 803F1208
  c->r[6]=c->r[1]+0x00000048u; // 803F120C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[9]=c->ps1[9]=RF32(ea);} // 803F1210
  {uint32_t ea=c->r[1]+0x00000084u; c->f[8]=c->ps1[8]=RF32(ea);} // 803F1214
  {uint32_t ea=c->r[1]+0x00000088u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F1218
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803F121C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F1220
  {uint32_t ea=c->r[1]+0x00000094u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F1224
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F1228
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F122C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F1230
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1234
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 803F1238
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F123C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 803F1240
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[9]);} // 803F1244
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[8]);} // 803F1248
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[7]);} // 803F124C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[6]);} // 803F1250
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[5]);} // 803F1254
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[4]);} // 803F1258
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 803F125C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 803F1260
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 803F1264
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 803F1268
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F126C
  c->r[12]=R32(c->r[12]+0x000000B8u); // 803F1270
  c->ctr=c->r[12]; // 803F1274
  if (true) { c->lr=0x803F127Cu; dispatch(c,c->ctr); } // 803F1278
  W32(c->r[31]+0x000000A8u,c->r[3]); // 803F127C
  goto L_803F1308; // 803F1280
L_803F1284:;
  {uint32_t ea=c->r[1]+0x00000078u; c->f[11]=c->ps1[11]=RF32(ea);} // 803F1284
  c->r[4]=c->r[30]+0x00000098u; // 803F1288
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 803F128C
  c->r[5]=c->r[1]+0x00000008u; // 803F1290
  {uint32_t ea=c->r[1]+0x00000080u; c->f[9]=c->ps1[9]=RF32(ea);} // 803F1294
  c->r[6]=c->r[1]+0x00000018u; // 803F1298
  {uint32_t ea=c->r[1]+0x00000084u; c->f[8]=c->ps1[8]=RF32(ea);} // 803F129C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F12A0
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803F12A4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F12A8
  {uint32_t ea=c->r[1]+0x00000094u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F12AC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F12B0
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F12B4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F12B8
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F12BC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[11]);} // 803F12C0
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F12C4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[10]);} // 803F12C8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[9]);} // 803F12CC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[8]);} // 803F12D0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 803F12D4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[6]);} // 803F12D8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[5]);} // 803F12DC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[4]);} // 803F12E0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 803F12E4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 803F12E8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803F12EC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 803F12F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F12F4
  c->r[12]=R32(c->r[12]+0x000000B4u); // 803F12F8
  c->ctr=c->r[12]; // 803F12FC
  if (true) { c->lr=0x803F1304u; dispatch(c,c->ctr); } // 803F1300
  W32(c->r[31]+0x000000A8u,c->r[3]); // 803F1304
L_803F1308:;
  c->r[0]=0u+0x00000001u; // 803F1308
  W16(c->r[31]+0x000000A6u,c->r[0]); // 803F130C
  goto L_803F1340; // 803F1310
L_803F1314:;
  c->r[0]=R32(c->r[4]+0x00000080u); // 803F1314
  cmps(c,0,(int32_t)c->r[0],0); // 803F1318
  if (crb(c,2)) { goto L_803F1340; } // 803F131C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F1320
  c->r[4]=R32(c->r[4]+0x000000A8u); // 803F1324
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F1328
  c->r[12]=R32(c->r[12]+0x000000BCu); // 803F132C
  c->ctr=c->r[12]; // 803F1330
  if (true) { c->lr=0x803F1338u; dispatch(c,c->ctr); } // 803F1334
  c->r[0]=0u+0x00000002u; // 803F1338
  W16(c->r[31]+0x000000A6u,c->r[0]); // 803F133C
L_803F1340:;
  c->r[31]=R32(c->r[1]+0x000000ACu); // 803F1340
  c->r[3]=0u+0x00000000u; // 803F1344
  c->r[30]=R32(c->r[1]+0x000000A8u); // 803F1348
  c->r[0]=R32(c->r[1]+0x000000B4u); // 803F134C
  c->lr=c->r[0]; // 803F1350
  c->r[1]=c->r[1]+0x000000B0u; // 803F1354
  return; // 803F1358
}

// fn_803F135C
void f_803F135C(Ctx* __restrict c) {
  trace_call(0x803F135Cu);
  c->r[3]=0u+0x00000000u; // 803F135C
  return; // 803F1360
}

// fn_803F1364
void f_803F1364(Ctx* __restrict c) {
  trace_call(0x803F1364u);
  c->r[3]=0u+0x00000000u; // 803F1364
  return; // 803F1368
}

// fn_803F136C
void f_803F136C(Ctx* __restrict c) {
  trace_call(0x803F136Cu);
  return; // 803F136C
}

// fn_803F1370
void f_803F1370(Ctx* __restrict c) {
  trace_call(0x803F1370u);
  c->r[3]=c->r[13]+0xFFFFDF2Cu; // 803F1370
  return; // 803F1374
}

// fn_803F1378
void f_803F1378(Ctx* __restrict c) {
  trace_call(0x803F1378u);
  c->r[3]=c->r[13]+0xFFFFDF34u; // 803F1378
  return; // 803F137C
}

// fn_803F1380
void f_803F1380(Ctx* __restrict c) {
  trace_call(0x803F1380u);
  {uint32_t ea=c->r[2]+0xFFFFA7D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F1380
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1384
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[1]);} // 803F1388
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803F138C
  return; // 803F1390
}

// fn_803F1394
void f_803F1394(Ctx* __restrict c) {
  trace_call(0x803F1394u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F1394
  c->r[0]=c->lr; // 803F1398
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803F139C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 803F13A0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 803F13A4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 803F13A8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 803F13AC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 803F13B0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 803F13B4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 803F13B8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 803F13BC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 803F13C0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 803F13C4
  c->r[11]=c->r[1]+0x00000070u; // 803F13C8
  c->lr=0x803F13D0u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F13CC
  c->r[24]=R32(c->r[3]+0x000000D8u); // 803F13D0
  c->r[0]=0u+0x43300000u; // 803F13D4
  W32(c->r[1]+0x00000028u,c->r[0]); // 803F13D8
  c->r[22]=c->r[3]|c->r[3]; // 803F13DC
  cmps(c,0,(int32_t)c->r[24],0); // 803F13E0
  c->r[23]=c->r[4]|c->r[4]; // 803F13E4
  W32(c->r[1]+0x00000030u,c->r[0]); // 803F13E8
  if (!crb(c,2)) { goto L_803F13F8; } // 803F13EC
  c->r[3]=0u+0x00000001u; // 803F13F0
  goto L_803F18E8; // 803F13F4
L_803F13F8:;
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F13F8
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F13FC
  fcmp(c,0,c->f[0],c->f[1]); // 803F1400
  if (!crb(c,1)) { goto L_803F1410; } // 803F1404
  c->r[3]=0u+0x00000000u; // 803F1408
  goto L_803F18E8; // 803F140C
L_803F1410:;
  fcmp(c,0,c->f[1],c->f[0]); // 803F1410
  if (!crb(c,2)) { goto L_803F1420; } // 803F1414
  c->r[3]=0u+0x00000001u; // 803F1418
  goto L_803F18E8; // 803F141C
L_803F1420:;
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1420
  c->r[6]=c->r[1]+0x00000008u; // 803F1424
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803F1428
  c->r[5]=c->r[1]+0x00000010u; // 803F142C
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,2,ea,0,0);} // 803F1430
  c->r[0]=R32(c->r[3]+0x000000E0u); // 803F1434
  {uint32_t ea=c->r[4]+0x00000040u; psq_load(c,0,ea,0,0);} // 803F1438
  cmps(c,0,(int32_t)c->r[0],0); // 803F143C
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,2,ea,0,0);} // 803F1440
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F1444
  if (crb(c,2)) { goto L_803F1460; } // 803F1448
  cmps(c,0,(int32_t)c->r[0],1); // 803F144C
  if (crb(c,2)) { goto L_803F1478; } // 803F1450
  cmps(c,0,(int32_t)c->r[0],2); // 803F1454
  if (crb(c,2)) { goto L_803F1490; } // 803F1458
  goto L_803F14A8; // 803F145C
L_803F1460:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1460
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803F1464
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803F1468
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F146C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F1470
  goto L_803F14BC; // 803F1474
L_803F1478:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1478
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803F147C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803F1480
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F1484
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F1488
  goto L_803F14BC; // 803F148C
L_803F1490:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1490
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803F1494
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803F1498
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803F149C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F14A0
  goto L_803F14BC; // 803F14A4
L_803F14A8:;
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F14A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803F14AC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803F14B0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803F14B4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F14B8
L_803F14BC:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F14BC
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[0]);} // 803F14C0
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F14C4
  c->r[21]=R32(c->r[3]+0x0000009Cu); // 803F14C8
  cmps(c,0,(int32_t)c->r[21],0); // 803F14CC
  if (!crb(c,2)) { goto L_803F14DC; } // 803F14D0
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F14D4
  goto L_803F1618; // 803F14D8
L_803F14DC:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803F14DC
  cmps(c,0,(int32_t)c->r[0],0); // 803F14E0
  if (crb(c,2)) { goto L_803F1504; } // 803F14E4
  cmps(c,0,(int32_t)c->r[0],1); // 803F14E8
  if (crb(c,2)) { goto L_803F1530; } // 803F14EC
  cmps(c,0,(int32_t)c->r[0],2); // 803F14F0
  if (crb(c,2)) { goto L_803F15B4; } // 803F14F4
  cmps(c,0,(int32_t)c->r[0],3); // 803F14F8
  if (crb(c,2)) { goto L_803F160C; } // 803F14FC
  goto L_803F1614; // 803F1500
L_803F1504:;
  c->r[7]=R32(c->r[21]+0x00000118u); // 803F1504
  c->r[9]=c->r[23]|c->r[23]; // 803F1508
  c->r[8]=R32(c->r[21]+0x0000011Cu); // 803F150C
  c->r[3]=c->r[21]+0x00000098u; // 803F1510
  c->r[4]=c->r[21]+0x000000B8u; // 803F1514
  c->r[5]=c->r[21]+0x000000D8u; // 803F1518
  c->r[6]=c->r[21]+0x000000F8u; // 803F151C
  c->lr=0x803F1524u; f_803E5520(c); // 803F1520
  {uint32_t ea=c->r[22]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1524
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 803F1528
  goto L_803F1618; // 803F152C
L_803F1530:;
  c->r[5]=0u+0x80570000u; // 803F1530
  c->r[0]=R32(c->r[3]+0x000000A8u); // 803F1534
  c->r[5]=c->r[5]+0x000041A8u; // 803F1538
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[28]=c->ps1[28]=RF32(ea);} // 803F153C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F1540
  cmps(c,0,(int32_t)c->r[0],0); // 803F1544
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803F1548
  if (crb(c,2)) { goto L_803F1564; } // 803F154C
  cmps(c,0,(int32_t)c->r[4],0); // 803F1550
  if (crb(c,2)) { goto L_803F1564; } // 803F1554
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1558
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803F155C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803F1560
L_803F1564:;
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1564
  fcmp(c,0,c->f[0],c->f[28]); // 803F1568
  if (!crb(c,2)) { goto L_803F1574; } // 803F156C
  goto L_803F1584; // 803F1570
L_803F1574:;
  c->f[2]=c->f[28]; // 803F1574
  c->lr=0x803F157Cu; f_803AD468(c); // 803F1578
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803F157C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 803F1580
L_803F1584:;
  c->f[1]=c->f[0]; // 803F1584
  c->r[7]=R32(c->r[21]+0x00000118u); // 803F1588
  c->r[8]=R32(c->r[21]+0x0000011Cu); // 803F158C
  c->r[9]=c->r[23]|c->r[23]; // 803F1590
  c->r[3]=c->r[21]+0x00000098u; // 803F1594
  c->r[4]=c->r[21]+0x000000B8u; // 803F1598
  c->r[5]=c->r[21]+0x000000D8u; // 803F159C
  c->r[6]=c->r[21]+0x000000F8u; // 803F15A0
  c->lr=0x803F15A8u; f_803E5520(c); // 803F15A4
  {uint32_t ea=c->r[22]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F15A8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 803F15AC
  goto L_803F1618; // 803F15B0
L_803F15B4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803F15B4
  if (crb(c,2)) { goto L_803F1604; } // 803F15B8
  c->r[4]=R32(c->r[4]+0x00000068u); // 803F15BC
  cmps(c,0,(int32_t)c->r[4],0); // 803F15C0
  if (crb(c,2)) { goto L_803F1604; } // 803F15C4
  c->r[0]=R32(c->r[3]+0x000000B0u); // 803F15C8
  c->r[9]=c->r[23]|c->r[23]; // 803F15CC
  c->r[7]=R32(c->r[21]+0x00000118u); // 803F15D0
  c->r[3]=c->r[21]+0x00000098u; // 803F15D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803F15D8
  c->r[8]=R32(c->r[21]+0x0000011Cu); // 803F15DC
  c->r[5]=c->r[4]+c->r[0]; // 803F15E0
  c->r[4]=c->r[21]+0x000000B8u; // 803F15E4
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F15E8
  c->r[5]=c->r[21]+0x000000D8u; // 803F15EC
  c->r[6]=c->r[21]+0x000000F8u; // 803F15F0
  c->lr=0x803F15F8u; f_803E5520(c); // 803F15F4
  {uint32_t ea=c->r[22]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F15F8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 803F15FC
  goto L_803F1618; // 803F1600
L_803F1604:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F1604
  goto L_803F1618; // 803F1608
L_803F160C:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F160C
  goto L_803F1618; // 803F1610
L_803F1614:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F1614
L_803F1618:;
  c->r[3]=R32(c->r[22]+0x000000DCu); // 803F1618
  c->r[29]=c->r[1]+0x00000018u; // 803F161C
  c->r[30]=0u+0x80570000u; // 803F1620
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[30]=RF64(ea);} // 803F1624
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803F1628
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F162C
  c->r[0]=c->r[0]^0x80000000u; // 803F1630
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803F1634
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1638
  c->r[21]=c->r[30]+0x000041A8u; // 803F163C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 803F1640
  c->r[27]=c->r[1]+0x00000008u; // 803F1644
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[28]=c->ps1[28]=RF32(ea);} // 803F1648
  c->r[28]=c->r[1]+0x00000010u; // 803F164C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 803F1650
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 803F1654
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[29]=c->ps1[29]=RF32(ea);} // 803F1658
  c->r[26]=c->r[1]+0x00000020u; // 803F165C
  c->r[25]=0u+0x00000000u; // 803F1660
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[1]); // 803F1664
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F1668
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803F166C
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F1670
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803F1674
  goto L_803F18D8; // 803F1678
  goto L_803F1698; // 803F167C
L_803F1680:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 803F1680
  c->r[3]=c->r[24]|c->r[24]; // 803F1684
  c->r[12]=R32(c->r[12]+0x00000064u); // 803F1688
  c->ctr=c->r[12]; // 803F168C
  if (true) { c->lr=0x803F1694u; dispatch(c,c->ctr); } // 803F1690
  c->r[24]=c->r[3]|c->r[3]; // 803F1694
L_803F1698:;
  cmps(c,0,(int32_t)c->r[24],0); // 803F1698
  if (crb(c,2)) { goto L_803F16BC; } // 803F169C
  c->r[12]=R32(c->r[24]+0x00000000u); // 803F16A0
  c->r[3]=c->r[24]|c->r[24]; // 803F16A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F16A8
  c->ctr=c->r[12]; // 803F16AC
  if (true) { c->lr=0x803F16B4u; dispatch(c,c->ctr); } // 803F16B0
  cmps(c,0,(int32_t)c->r[3],4); // 803F16B4
  if (crb(c,2)) { IRQCHK(c); goto L_803F1680; } // 803F16B8
L_803F16BC:;
  c->r[3]=R32(c->r[23]+0x00000068u); // 803F16BC
  c->r[5]=0u+0x00000000u; // 803F16C0
  cmps(c,0,(int32_t)c->r[3],0); // 803F16C4
  if (crb(c,2)) { goto L_803F16E0; } // 803F16C8
  c->r[0]=R16(c->r[3]+0x000000CEu); // 803F16CC
  c->r[0]=c->r[0]|0x00000001u; // 803F16D0
  cmps(c,0,(int32_t)c->r[0],0); // 803F16D4
  if (crb(c,2)) { goto L_803F16E0; } // 803F16D8
  c->r[5]=0u+0x00000001u; // 803F16DC
L_803F16E0:;
  c->r[7]=R32(c->r[23]+0x00000120u); // 803F16E0
  c->r[4]=c->r[24]|c->r[24]; // 803F16E4
  c->r[6]=c->r[23]|c->r[23]; // 803F16E8
  c->r[3]=c->r[30]+0x000041A8u; // 803F16EC
  c->lr=0x803F16F4u; f_803FCA34(c); // 803F16F0
  cmps(c,0,(int32_t)c->r[3],0); // 803F16F4
  c->r[31]=c->r[3]|c->r[3]; // 803F16F8
  if (crb(c,2)) { goto L_803F18D4; } // 803F16FC
  {uint32_t ea=c->r[23]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1700
  c->r[0]=c->r[25]^0x80000000u; // 803F1704
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803F1708
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 803F170C
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F1710
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F1714
  {uint32_t ea=c->r[23]+0x000000BCu; WF32(ea,c->f[1]);} // 803F1718
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 803F171C
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803F1720
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,2,ea,0,0);} // 803F1724
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 803F1728
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F172C
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 803F1730
  {uint32_t ea=c->r[26]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F1734
  c->r[0]=R32(c->r[22]+0x000000DCu); // 803F1738
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F173C
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,3,ea,0,0);} // 803F1740
  c->r[0]=c->r[0]^0x80000000u; // 803F1744
  W32(c->r[1]+0x00000034u,c->r[0]); // 803F1748
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803F174C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 803F1750
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 803F1754
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 803F1758
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 803F175C
  c->f[1]=c->ps1[1]=S(c->f[0]); // 803F1760
  W32(c->r[3]+0x00000070u,c->r[23]); // 803F1764
  c->r[20]=R32(c->r[22]+0x000000BCu); // 803F1768
  cmps(c,0,(int32_t)c->r[20],0); // 803F176C
  if (!crb(c,2)) { goto L_803F177C; } // 803F1770
  {uint32_t ea=c->r[22]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F1774
  goto L_803F18B0; // 803F1778
L_803F177C:;
  c->r[0]=R32(c->r[22]+0x000000C0u); // 803F177C
  cmps(c,0,(int32_t)c->r[0],0); // 803F1780
  if (crb(c,2)) { goto L_803F17A4; } // 803F1784
  cmps(c,0,(int32_t)c->r[0],1); // 803F1788
  if (crb(c,2)) { goto L_803F17D0; } // 803F178C
  cmps(c,0,(int32_t)c->r[0],2); // 803F1790
  if (crb(c,2)) { goto L_803F184C; } // 803F1794
  cmps(c,0,(int32_t)c->r[0],3); // 803F1798
  if (crb(c,2)) { goto L_803F18A4; } // 803F179C
  goto L_803F18AC; // 803F17A0
L_803F17A4:;
  c->r[7]=R32(c->r[20]+0x00000118u); // 803F17A4
  c->r[9]=c->r[23]|c->r[23]; // 803F17A8
  c->r[8]=R32(c->r[20]+0x0000011Cu); // 803F17AC
  c->r[3]=c->r[20]+0x00000098u; // 803F17B0
  c->r[4]=c->r[20]+0x000000B8u; // 803F17B4
  c->r[5]=c->r[20]+0x000000D8u; // 803F17B8
  c->r[6]=c->r[20]+0x000000F8u; // 803F17BC
  c->lr=0x803F17C4u; f_803E5520(c); // 803F17C0
  {uint32_t ea=c->r[22]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F17C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803F17C8
  goto L_803F18B0; // 803F17CC
L_803F17D0:;
  c->r[0]=R32(c->r[22]+0x000000C8u); // 803F17D0
  {uint32_t ea=c->r[21]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F17D4
  {uint32_t ea=c->r[23]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F17D8
  cmps(c,0,(int32_t)c->r[0],0); // 803F17DC
  {uint32_t ea=c->r[22]+0x000000C4u; c->f[27]=c->ps1[27]=RF32(ea);} // 803F17E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803F17E4
  if (crb(c,2)) { goto L_803F1800; } // 803F17E8
  cmps(c,0,(int32_t)c->r[23],0); // 803F17EC
  if (crb(c,2)) { goto L_803F1800; } // 803F17F0
  {uint32_t ea=c->r[23]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F17F4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 803F17F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803F17FC
L_803F1800:;
  fcmp(c,0,c->f[28],c->f[27]); // 803F1800
  if (!crb(c,2)) { goto L_803F1810; } // 803F1804
  c->f[1]=c->f[28]; // 803F1808
  goto L_803F1820; // 803F180C
L_803F1810:;
  c->f[2]=c->f[27]; // 803F1810
  c->lr=0x803F1818u; f_803AD468(c); // 803F1814
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803F1818
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[27]); // 803F181C
L_803F1820:;
  c->r[7]=R32(c->r[20]+0x00000118u); // 803F1820
  c->r[9]=c->r[23]|c->r[23]; // 803F1824
  c->r[8]=R32(c->r[20]+0x0000011Cu); // 803F1828
  c->r[3]=c->r[20]+0x00000098u; // 803F182C
  c->r[4]=c->r[20]+0x000000B8u; // 803F1830
  c->r[5]=c->r[20]+0x000000D8u; // 803F1834
  c->r[6]=c->r[20]+0x000000F8u; // 803F1838
  c->lr=0x803F1840u; f_803E5520(c); // 803F183C
  {uint32_t ea=c->r[22]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1840
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803F1844
  goto L_803F18B0; // 803F1848
L_803F184C:;
  cmps(c,0,(int32_t)c->r[23],0); // 803F184C
  if (crb(c,2)) { goto L_803F189C; } // 803F1850
  c->r[4]=R32(c->r[23]+0x00000068u); // 803F1854
  cmps(c,0,(int32_t)c->r[4],0); // 803F1858
  if (crb(c,2)) { goto L_803F189C; } // 803F185C
  c->r[0]=R32(c->r[22]+0x000000D0u); // 803F1860
  c->r[9]=c->r[23]|c->r[23]; // 803F1864
  c->r[7]=R32(c->r[20]+0x00000118u); // 803F1868
  c->r[3]=c->r[20]+0x00000098u; // 803F186C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803F1870
  c->r[8]=R32(c->r[20]+0x0000011Cu); // 803F1874
  c->r[5]=c->r[4]+c->r[0]; // 803F1878
  c->r[4]=c->r[20]+0x000000B8u; // 803F187C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F1880
  c->r[5]=c->r[20]+0x000000D8u; // 803F1884
  c->r[6]=c->r[20]+0x000000F8u; // 803F1888
  c->lr=0x803F1890u; f_803E5520(c); // 803F188C
  {uint32_t ea=c->r[22]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1890
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803F1894
  goto L_803F18B0; // 803F1898
L_803F189C:;
  {uint32_t ea=c->r[22]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F189C
  goto L_803F18B0; // 803F18A0
L_803F18A4:;
  {uint32_t ea=c->r[22]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F18A4
  goto L_803F18B0; // 803F18A8
L_803F18AC:;
  {uint32_t ea=c->r[22]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F18AC
L_803F18B0:;
  {uint32_t ea=c->r[31]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F18B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F18B4
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 803F18B8
  {uint32_t ea=c->r[31]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F18BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F18C0
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 803F18C4
  c->r[0]=R32(c->r[23]+0x00000068u); // 803F18C8
  W32(c->r[31]+0x00000068u,c->r[0]); // 803F18CC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[29]);} // 803F18D0
L_803F18D4:;
  c->r[25]=c->r[25]+0x00000001u; // 803F18D4
L_803F18D8:;
  c->r[0]=R32(c->r[22]+0x000000DCu); // 803F18D8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 803F18DC
  if (crb(c,0)) { IRQCHK(c); goto L_803F1698; } // 803F18E0
  c->r[3]=0u+0x00000000u; // 803F18E4
L_803F18E8:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 803F18E8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 803F18EC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 803F18F0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 803F18F4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 803F18F8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 803F18FC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 803F1900
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 803F1904
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 803F1908
  c->r[11]=c->r[1]+0x00000070u; // 803F190C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 803F1910
  c->lr=0x803F1918u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F1914
  c->r[0]=R32(c->r[1]+0x000000C4u); // 803F1918
  c->lr=c->r[0]; // 803F191C
  c->r[1]=c->r[1]+0x000000C0u; // 803F1920
  return; // 803F1924
}

// fn_803F1928
void f_803F1928(Ctx* __restrict c) {
  trace_call(0x803F1928u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F1928
  c->r[0]=c->lr; // 803F192C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803F1930
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803F1934
  c->r[27]=c->r[4]|c->r[4]; // 803F1938
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F193C
  c->r[0]=R8(c->r[3]+0x00000004u); // 803F1940
  cmps(c,0,(int32_t)c->r[0],0); // 803F1944
  if (crb(c,2)) { goto L_803F19E4; } // 803F1948
  c->r[3]=R32(c->r[4]+0x00000074u); // 803F194C
  cmps(c,0,(int32_t)c->r[3],0); // 803F1950
  if (crb(c,2)) { goto L_803F19E4; } // 803F1954
  c->r[0]=R32(c->r[4]+0x00000084u); // 803F1958
  cmps(c,0,(int32_t)c->r[0],0); // 803F195C
  if (crb(c,2)) { goto L_803F1968; } // 803F1960
  c->lr=0x803F1968u; f_803FB8CC(c); // 803F1964
L_803F1968:;
  c->r[3]=R32(c->r[27]+0x00000074u); // 803F1968
  c->r[31]=0u+0x00000001u; // 803F196C
  c->r[29]=R32(c->r[3]+0x00000008u); // 803F1970
  goto L_803F19D4; // 803F1974
L_803F1978:;
  c->r[28]=R32(c->r[29]+0x00000008u); // 803F1978
  c->r[30]=R32(c->r[28]+0x0000006Cu); // 803F197C
  cmps(c,0,(int32_t)c->r[30],0); // 803F1980
  if (crb(c,2)) { goto L_803F19D0; } // 803F1984
  c->r[12]=R32(c->r[30]+0x00000000u); // 803F1988
  c->r[3]=c->r[30]|c->r[30]; // 803F198C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F1990
  c->ctr=c->r[12]; // 803F1994
  if (true) { c->lr=0x803F199Cu; dispatch(c,c->ctr); } // 803F1998
  cmps(c,0,(int32_t)c->r[3],11); // 803F199C
  if (crb(c,2)) { goto L_803F19D0; } // 803F19A0
  c->r[0]=R32(c->r[13]+0xFFFFC1E0u); // 803F19A4
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F19A8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 803F19AC
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 803F19B0
  if (crb(c,2)) { goto L_803F19D0; } // 803F19B4
  c->r[12]=R32(c->r[30]+0x00000000u); // 803F19B8
  c->r[3]=c->r[30]|c->r[30]; // 803F19BC
  c->r[4]=c->r[28]|c->r[28]; // 803F19C0
  c->r[12]=R32(c->r[12]+0x00000050u); // 803F19C4
  c->ctr=c->r[12]; // 803F19C8
  if (true) { c->lr=0x803F19D0u; dispatch(c,c->ctr); } // 803F19CC
L_803F19D0:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 803F19D0
L_803F19D4:;
  c->r[3]=R32(c->r[27]+0x00000074u); // 803F19D4
  c->r[0]=c->r[3]+0x00000004u; // 803F19D8
  cmpu(c,0,c->r[29],c->r[0]); // 803F19DC
  if (!crb(c,2)) { IRQCHK(c); goto L_803F1978; } // 803F19E0
L_803F19E4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803F19E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803F19E8
  c->lr=c->r[0]; // 803F19EC
  c->r[1]=c->r[1]+0x00000020u; // 803F19F0
  return; // 803F19F4
}

// fn_803F19F8
void f_803F19F8(Ctx* __restrict c) {
  trace_call(0x803F19F8u);
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F19F8
  c->r[0]=c->lr; // 803F19FC
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F1A00
  c->r[5]=0u+0x00000000u; // 803F1A04
  W32(c->r[1]+0x00000434u,c->r[0]); // 803F1A08
  c->r[0]=0u+0x00000001u; // 803F1A0C
  {uint32_t ea=c->r[2]+0xFFFFA7E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F1A10
  W32(c->r[1]+0x0000042Cu,c->r[31]); // 803F1A14
  c->r[31]=c->r[4]|c->r[4]; // 803F1A18
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F1A1C
  W32(c->r[1]+0x00000428u,c->r[30]); // 803F1A20
  c->r[30]=c->r[3]|c->r[3]; // 803F1A24
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803F1A28
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 803F1A2C
  W32(c->r[1]+0x00000020u,c->r[5]); // 803F1A30
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F1A34
  W32(c->r[1]+0x00000028u,c->r[5]); // 803F1A38
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803F1A3C
  W32(c->r[1]+0x00000030u,c->r[5]); // 803F1A40
  W32(c->r[1]+0x00000034u,c->r[5]); // 803F1A44
  W32(c->r[3]+0x00000068u,c->r[0]); // 803F1A48
L_803F1A4C:;
  c->r[3]=c->r[31]|c->r[31]; // 803F1A4C
  c->r[4]=c->r[1]+0x00000008u; // 803F1A50
  c->r[5]=c->r[1]+0x00000010u; // 803F1A54
  c->r[6]=c->r[1]+0x0000000Cu; // 803F1A58
  c->r[7]=c->r[1]+0x00000038u; // 803F1A5C
  c->r[8]=c->r[1]+0x00000018u; // 803F1A60
  c->r[9]=0u+0x000003E8u; // 803F1A64
  c->lr=0x803F1A6Cu; f_80403308(c); // 803F1A68
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F1A6C
  cmps(c,0,(int32_t)c->r[0],185); // 803F1A70
  if (crb(c,2)) { goto L_803F1AAC; } // 803F1A74
  cmps(c,0,(int32_t)c->r[0],186); // 803F1A78
  if (crb(c,2)) { goto L_803F1AC4; } // 803F1A7C
  cmps(c,0,(int32_t)c->r[0],187); // 803F1A80
  if (crb(c,2)) { goto L_803F1AD0; } // 803F1A84
  cmps(c,0,(int32_t)c->r[0],188); // 803F1A88
  if (crb(c,2)) { goto L_803F1AE8; } // 803F1A8C
  cmps(c,0,(int32_t)c->r[0],189); // 803F1A90
  if (crb(c,2)) { goto L_803F1AF4; } // 803F1A94
  cmps(c,0,(int32_t)c->r[0],190); // 803F1A98
  if (crb(c,2)) { goto L_803F1B00; } // 803F1A9C
  cmps(c,0,(int32_t)c->r[0],191); // 803F1AA0
  if (crb(c,2)) { goto L_803F1B14; } // 803F1AA4
  goto L_803F1B24; // 803F1AA8
L_803F1AAC:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F1AAC
  c->r[3]=c->r[31]|c->r[31]; // 803F1AB0
  c->r[5]=c->r[1]+0x00000018u; // 803F1AB4
  c->r[6]=c->r[30]+0x00000098u; // 803F1AB8
  c->lr=0x803F1AC0u; f_804039BC(c); // 803F1ABC
  goto L_803F1B24; // 803F1AC0
L_803F1AC4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F1AC4
  W32(c->r[30]+0x000000DCu,c->r[0]); // 803F1AC8
  goto L_803F1B24; // 803F1ACC
L_803F1AD0:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F1AD0
  c->r[3]=c->r[31]|c->r[31]; // 803F1AD4
  c->r[5]=c->r[1]+0x00000018u; // 803F1AD8
  c->r[6]=c->r[30]+0x000000B8u; // 803F1ADC
  c->lr=0x803F1AE4u; f_804039BC(c); // 803F1AE0
  goto L_803F1B24; // 803F1AE4
L_803F1AE8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F1AE8
  W32(c->r[30]+0x000000E0u,c->r[0]); // 803F1AEC
  goto L_803F1B24; // 803F1AF0
L_803F1AF4:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803F1AF4
  W32(c->r[30]+0x000000E4u,c->r[0]); // 803F1AF8
  goto L_803F1B24; // 803F1AFC
L_803F1B00:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F1B00
  c->r[3]=c->r[31]|c->r[31]; // 803F1B04
  c->r[5]=c->r[30]+0x000000ECu; // 803F1B08
  c->lr=0x803F1B10u; f_804039AC(c); // 803F1B0C
  goto L_803F1B24; // 803F1B10
L_803F1B14:;
  c->r[4]=R32(c->r[1]+0x00000010u); // 803F1B14
  c->r[3]=c->r[31]|c->r[31]; // 803F1B18
  c->r[5]=c->r[30]+0x000000D8u; // 803F1B1C
  c->lr=0x803F1B24u; f_804039AC(c); // 803F1B20
L_803F1B24:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F1B24
  cmps(c,0,(int32_t)c->r[0],6); // 803F1B28
  if (!crb(c,2)) { IRQCHK(c); goto L_803F1A4C; } // 803F1B2C
  c->r[31]=R32(c->r[1]+0x0000042Cu); // 803F1B30
  c->r[3]=0u+0x00000001u; // 803F1B34
  c->r[30]=R32(c->r[1]+0x00000428u); // 803F1B38
  c->r[0]=R32(c->r[1]+0x00000434u); // 803F1B3C
  c->lr=c->r[0]; // 803F1B40
  c->r[1]=c->r[1]+0x00000430u; // 803F1B44
  return; // 803F1B48
}

// fn_803F1B4C
void f_803F1B4C(Ctx* __restrict c) {
  trace_call(0x803F1B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F1B4C
  c->r[0]=c->lr; // 803F1B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F1B54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F1B58
  c->r[31]=c->r[4]|c->r[4]; // 803F1B5C
  c->r[4]=0u+0x000000B9u; // 803F1B60
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F1B64
  c->r[30]=c->r[3]|c->r[3]; // 803F1B68
  c->r[3]=c->r[31]|c->r[31]; // 803F1B6C
  c->r[5]=c->r[30]+0x00000098u; // 803F1B70
  c->lr=0x803F1B78u; f_80403D44(c); // 803F1B74
  c->r[3]=c->r[31]|c->r[31]; // 803F1B78
  c->r[5]=c->r[30]+0x000000B8u; // 803F1B7C
  c->r[4]=0u+0x000000BBu; // 803F1B80
  c->lr=0x803F1B88u; f_80403D44(c); // 803F1B84
  c->r[5]=R32(c->r[30]+0x000000DCu); // 803F1B88
  c->r[3]=c->r[31]|c->r[31]; // 803F1B8C
  c->r[4]=0u+0x000000BAu; // 803F1B90
  c->lr=0x803F1B98u; f_80403B54(c); // 803F1B94
  c->r[5]=R32(c->r[30]+0x000000E0u); // 803F1B98
  c->r[3]=c->r[31]|c->r[31]; // 803F1B9C
  c->r[4]=0u+0x000000BCu; // 803F1BA0
  c->lr=0x803F1BA8u; f_80403B54(c); // 803F1BA4
  c->r[5]=R32(c->r[30]+0x000000E4u); // 803F1BA8
  c->r[3]=c->r[31]|c->r[31]; // 803F1BAC
  c->r[4]=0u+0x000000BDu; // 803F1BB0
  c->lr=0x803F1BB8u; f_80403B54(c); // 803F1BB4
  c->r[5]=R32(c->r[30]+0x000000ECu); // 803F1BB8
  c->r[3]=c->r[31]|c->r[31]; // 803F1BBC
  c->r[4]=0u+0x000000BEu; // 803F1BC0
  c->lr=0x803F1BC8u; f_80403CA4(c); // 803F1BC4
  c->r[5]=R32(c->r[30]+0x000000D8u); // 803F1BC8
  c->r[3]=c->r[31]|c->r[31]; // 803F1BCC
  c->r[4]=0u+0x000000BFu; // 803F1BD0
  c->lr=0x803F1BD8u; f_80403CA4(c); // 803F1BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F1BD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F1BDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F1BE0
  c->lr=c->r[0]; // 803F1BE4
  c->r[1]=c->r[1]+0x00000010u; // 803F1BE8
  return; // 803F1BEC
}

// fn_803F1BF0
void f_803F1BF0(Ctx* __restrict c) {
  trace_call(0x803F1BF0u);
  return; // 803F1BF0
}

// fn_803F1BF4
void f_803F1BF4(Ctx* __restrict c) {
  trace_call(0x803F1BF4u);
  return; // 803F1BF4
}

// fn_803F1BF8
void f_803F1BF8(Ctx* __restrict c) {
  trace_call(0x803F1BF8u);
  return; // 803F1BF8
}

// fn_803F1BFC
void f_803F1BFC(Ctx* __restrict c) {
  trace_call(0x803F1BFCu);
  return; // 803F1BFC
}

// fn_803F1C00
void f_803F1C00(Ctx* __restrict c) {
  trace_call(0x803F1C00u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F1C00
  c->r[0]=0u+0x00000000u; // 803F1C04
  c->r[5]=R32(c->r[3]+0x0000009Cu); // 803F1C08
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F1C0C
  cmps(c,0,(int32_t)c->r[5],0); // 803F1C10
  if (crb(c,2)) { goto L_803F1C24; } // 803F1C14
  c->r[0]=0u+0x00000001u; // 803F1C18
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F1C1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F1C20
L_803F1C24:;
  c->r[7]=R32(c->r[3]+0x000000BCu); // 803F1C24
  cmps(c,0,(int32_t)c->r[7],0); // 803F1C28
  if (crb(c,2)) { goto L_803F1C48; } // 803F1C2C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1C30
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1C34
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1C38
  c->r[6]=c->r[6]+0x00000001u; // 803F1C3C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1C40
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1C44
L_803F1C48:;
  c->r[7]=R32(c->r[3]+0x000000DCu); // 803F1C48
  cmps(c,0,(int32_t)c->r[7],0); // 803F1C4C
  if (crb(c,2)) { goto L_803F1C6C; } // 803F1C50
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1C54
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1C58
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1C5C
  c->r[6]=c->r[6]+0x00000001u; // 803F1C60
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1C64
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1C68
L_803F1C6C:;
  c->r[6]=R32(c->r[3]+0x000000FCu); // 803F1C6C
  cmps(c,0,(int32_t)c->r[6],0); // 803F1C70
  if (crb(c,2)) { goto L_803F1C90; } // 803F1C74
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F1C78
  c->r[3]=c->r[1]+0x0000000Cu; // 803F1C7C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F1C80
  c->r[5]=c->r[5]+0x00000001u; // 803F1C84
  W32(c->r[3]+c->r[0],c->r[6]); // 803F1C88
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F1C8C
L_803F1C90:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F1C90
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F1C94
  if (crb(c,0)) { goto L_803F1CA4; } // 803F1C98
  c->r[3]=0u+0x00000000u; // 803F1C9C
  goto L_803F1CB0; // 803F1CA0
L_803F1CA4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F1CA4
  c->r[3]=c->r[1]+0x0000000Cu; // 803F1CA8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F1CAC
L_803F1CB0:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F1CB0
  return; // 803F1CB4
}

// fn_803F1CB8
void f_803F1CB8(Ctx* __restrict c) {
  trace_call(0x803F1CB8u);
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F1CB8
  cmpu(c,0,c->r[0],c->r[4]); // 803F1CBC
  if (!crb(c,2)) { goto L_803F1CCC; } // 803F1CC0
  c->r[0]=0u+0x00000000u; // 803F1CC4
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F1CC8
L_803F1CCC:;
  c->r[0]=R32(c->r[3]+0x000000BCu); // 803F1CCC
  cmpu(c,0,c->r[0],c->r[4]); // 803F1CD0
  if (!crb(c,2)) { goto L_803F1CE0; } // 803F1CD4
  c->r[0]=0u+0x00000000u; // 803F1CD8
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803F1CDC
L_803F1CE0:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 803F1CE0
  cmpu(c,0,c->r[0],c->r[4]); // 803F1CE4
  if (!crb(c,2)) { goto L_803F1CF4; } // 803F1CE8
  c->r[0]=0u+0x00000000u; // 803F1CEC
  W32(c->r[3]+0x000000DCu,c->r[0]); // 803F1CF0
L_803F1CF4:;
  c->r[0]=R32(c->r[3]+0x000000FCu); // 803F1CF4
  cmpu(c,0,c->r[0],c->r[4]); // 803F1CF8
  if (!crb(c,2)) return; // 803F1CFC
  c->r[0]=0u+0x00000000u; // 803F1D00
  W32(c->r[3]+0x000000FCu,c->r[0]); // 803F1D04
  return; // 803F1D08
}

// fn_803F1D0C
void f_803F1D0C(Ctx* __restrict c) {
  trace_call(0x803F1D0Cu);
  c->r[3]=0u+0x0000000Au; // 803F1D0C
  return; // 803F1D10
}

// fn_803F1D14
void f_803F1D14(Ctx* __restrict c) {
  trace_call(0x803F1D14u);
  c->r[3]=0u+0x00000000u; // 803F1D14
  return; // 803F1D18
}

// fn_803F1D1C
void f_803F1D1C(Ctx* __restrict c) {
  trace_call(0x803F1D1Cu);
  return; // 803F1D1C
}

// fn_803F1D20
void f_803F1D20(Ctx* __restrict c) {
  trace_call(0x803F1D20u);
  return; // 803F1D20
}

// fn_803F1D24
void f_803F1D24(Ctx* __restrict c) {
  trace_call(0x803F1D24u);
  c->r[3]=0u+0x0000000Eu; // 803F1D24
  return; // 803F1D28
}

// fn_803F1D2C
void f_803F1D2C(Ctx* __restrict c) {
  trace_call(0x803F1D2Cu);
  c->r[3]=R32(c->r[3]+0x000000A0u); // 803F1D2C
  return; // 803F1D30
}

// fn_803F1D34
void f_803F1D34(Ctx* __restrict c) {
  trace_call(0x803F1D34u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F1D34
  c->r[0]=0u+0x00000000u; // 803F1D38
  c->r[5]=R32(c->r[3]+0x000000A8u); // 803F1D3C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F1D40
  cmps(c,0,(int32_t)c->r[5],0); // 803F1D44
  if (crb(c,2)) { goto L_803F1D58; } // 803F1D48
  c->r[0]=0u+0x00000001u; // 803F1D4C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F1D50
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F1D54
L_803F1D58:;
  c->r[7]=R32(c->r[3]+0x000000ACu); // 803F1D58
  cmps(c,0,(int32_t)c->r[7],0); // 803F1D5C
  if (crb(c,2)) { goto L_803F1D7C; } // 803F1D60
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1D64
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1D68
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1D6C
  c->r[6]=c->r[6]+0x00000001u; // 803F1D70
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1D74
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1D78
L_803F1D7C:;
  c->r[7]=R32(c->r[3]+0x000000B4u); // 803F1D7C
  cmps(c,0,(int32_t)c->r[7],0); // 803F1D80
  if (crb(c,2)) { goto L_803F1DA0; } // 803F1D84
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1D88
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1D8C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1D90
  c->r[6]=c->r[6]+0x00000001u; // 803F1D94
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1D98
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1D9C
L_803F1DA0:;
  c->r[7]=R32(c->r[3]+0x000000D4u); // 803F1DA0
  cmps(c,0,(int32_t)c->r[7],0); // 803F1DA4
  if (crb(c,2)) { goto L_803F1DC4; } // 803F1DA8
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1DAC
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1DB0
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1DB4
  c->r[6]=c->r[6]+0x00000001u; // 803F1DB8
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1DBC
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1DC0
L_803F1DC4:;
  c->r[7]=R32(c->r[3]+0x000000F4u); // 803F1DC4
  cmps(c,0,(int32_t)c->r[7],0); // 803F1DC8
  if (crb(c,2)) { goto L_803F1DE8; } // 803F1DCC
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1DD0
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1DD4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1DD8
  c->r[6]=c->r[6]+0x00000001u; // 803F1DDC
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1DE0
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1DE4
L_803F1DE8:;
  c->r[7]=R32(c->r[3]+0x00000114u); // 803F1DE8
  cmps(c,0,(int32_t)c->r[7],0); // 803F1DEC
  if (crb(c,2)) { goto L_803F1E0C; } // 803F1DF0
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1DF4
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1DF8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1DFC
  c->r[6]=c->r[6]+0x00000001u; // 803F1E00
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1E04
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1E08
L_803F1E0C:;
  c->r[7]=R32(c->r[3]+0x0000013Cu); // 803F1E0C
  cmps(c,0,(int32_t)c->r[7],0); // 803F1E10
  if (crb(c,2)) { goto L_803F1E30; } // 803F1E14
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1E18
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1E1C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1E20
  c->r[6]=c->r[6]+0x00000001u; // 803F1E24
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1E28
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1E2C
L_803F1E30:;
  c->r[7]=R32(c->r[3]+0x0000015Cu); // 803F1E30
  cmps(c,0,(int32_t)c->r[7],0); // 803F1E34
  if (crb(c,2)) { goto L_803F1E54; } // 803F1E38
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1E3C
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1E40
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1E44
  c->r[6]=c->r[6]+0x00000001u; // 803F1E48
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1E4C
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1E50
L_803F1E54:;
  c->r[7]=R32(c->r[3]+0x0000017Cu); // 803F1E54
  cmps(c,0,(int32_t)c->r[7],0); // 803F1E58
  if (crb(c,2)) { goto L_803F1E78; } // 803F1E5C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1E60
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1E64
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1E68
  c->r[6]=c->r[6]+0x00000001u; // 803F1E6C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1E70
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1E74
L_803F1E78:;
  c->r[7]=R32(c->r[3]+0x000001ACu); // 803F1E78
  cmps(c,0,(int32_t)c->r[7],0); // 803F1E7C
  if (crb(c,2)) { goto L_803F1E9C; } // 803F1E80
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1E84
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1E88
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1E8C
  c->r[6]=c->r[6]+0x00000001u; // 803F1E90
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1E94
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1E98
L_803F1E9C:;
  c->r[7]=R32(c->r[3]+0x000001CCu); // 803F1E9C
  cmps(c,0,(int32_t)c->r[7],0); // 803F1EA0
  if (crb(c,2)) { goto L_803F1EC0; } // 803F1EA4
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1EA8
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1EAC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1EB0
  c->r[6]=c->r[6]+0x00000001u; // 803F1EB4
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1EB8
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1EBC
L_803F1EC0:;
  c->r[7]=R32(c->r[3]+0x000001ECu); // 803F1EC0
  cmps(c,0,(int32_t)c->r[7],0); // 803F1EC4
  if (crb(c,2)) { goto L_803F1EE4; } // 803F1EC8
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1ECC
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1ED0
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1ED4
  c->r[6]=c->r[6]+0x00000001u; // 803F1ED8
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1EDC
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1EE0
L_803F1EE4:;
  c->r[7]=R32(c->r[3]+0x0000020Cu); // 803F1EE4
  cmps(c,0,(int32_t)c->r[7],0); // 803F1EE8
  if (crb(c,2)) { goto L_803F1F08; } // 803F1EEC
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F1EF0
  c->r[5]=c->r[1]+0x0000000Cu; // 803F1EF4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F1EF8
  c->r[6]=c->r[6]+0x00000001u; // 803F1EFC
  W32(c->r[5]+c->r[0],c->r[7]); // 803F1F00
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F1F04
L_803F1F08:;
  c->r[6]=R32(c->r[3]+0x0000022Cu); // 803F1F08
  cmps(c,0,(int32_t)c->r[6],0); // 803F1F0C
  if (crb(c,2)) { goto L_803F1F2C; } // 803F1F10
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F1F14
  c->r[3]=c->r[1]+0x0000000Cu; // 803F1F18
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F1F1C
  c->r[5]=c->r[5]+0x00000001u; // 803F1F20
  W32(c->r[3]+c->r[0],c->r[6]); // 803F1F24
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F1F28
L_803F1F2C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F1F2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F1F30
  if (crb(c,0)) { goto L_803F1F40; } // 803F1F34
  c->r[3]=0u+0x00000000u; // 803F1F38
  goto L_803F1F4C; // 803F1F3C
L_803F1F40:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F1F40
  c->r[3]=c->r[1]+0x0000000Cu; // 803F1F44
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F1F48
L_803F1F4C:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F1F4C
  return; // 803F1F50
}

// fn_803F1F54
void f_803F1F54(Ctx* __restrict c) {
  trace_call(0x803F1F54u);
  c->r[0]=R32(c->r[3]+0x000000A8u); // 803F1F54
  cmpu(c,0,c->r[0],c->r[4]); // 803F1F58
  if (!crb(c,2)) { goto L_803F1F68; } // 803F1F5C
  c->r[0]=0u+0x00000000u; // 803F1F60
  W32(c->r[3]+0x000000A8u,c->r[0]); // 803F1F64
L_803F1F68:;
  c->r[0]=R32(c->r[3]+0x000000ACu); // 803F1F68
  cmpu(c,0,c->r[0],c->r[4]); // 803F1F6C
  if (!crb(c,2)) { goto L_803F1F7C; } // 803F1F70
  c->r[0]=0u+0x00000000u; // 803F1F74
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F1F78
L_803F1F7C:;
  c->r[0]=R32(c->r[3]+0x000000B4u); // 803F1F7C
  cmpu(c,0,c->r[0],c->r[4]); // 803F1F80
  if (!crb(c,2)) { goto L_803F1F90; } // 803F1F84
  c->r[0]=0u+0x00000000u; // 803F1F88
  W32(c->r[3]+0x000000B4u,c->r[0]); // 803F1F8C
L_803F1F90:;
  c->r[0]=R32(c->r[3]+0x000000D4u); // 803F1F90
  cmpu(c,0,c->r[0],c->r[4]); // 803F1F94
  if (!crb(c,2)) { goto L_803F1FA4; } // 803F1F98
  c->r[0]=0u+0x00000000u; // 803F1F9C
  W32(c->r[3]+0x000000D4u,c->r[0]); // 803F1FA0
L_803F1FA4:;
  c->r[0]=R32(c->r[3]+0x000000F4u); // 803F1FA4
  cmpu(c,0,c->r[0],c->r[4]); // 803F1FA8
  if (!crb(c,2)) { goto L_803F1FB8; } // 803F1FAC
  c->r[0]=0u+0x00000000u; // 803F1FB0
  W32(c->r[3]+0x000000F4u,c->r[0]); // 803F1FB4
L_803F1FB8:;
  c->r[0]=R32(c->r[3]+0x00000114u); // 803F1FB8
  cmpu(c,0,c->r[0],c->r[4]); // 803F1FBC
  if (!crb(c,2)) { goto L_803F1FCC; } // 803F1FC0
  c->r[0]=0u+0x00000000u; // 803F1FC4
  W32(c->r[3]+0x00000114u,c->r[0]); // 803F1FC8
L_803F1FCC:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 803F1FCC
  cmpu(c,0,c->r[0],c->r[4]); // 803F1FD0
  if (!crb(c,2)) { goto L_803F1FE0; } // 803F1FD4
  c->r[0]=0u+0x00000000u; // 803F1FD8
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 803F1FDC
L_803F1FE0:;
  c->r[0]=R32(c->r[3]+0x0000015Cu); // 803F1FE0
  cmpu(c,0,c->r[0],c->r[4]); // 803F1FE4
  if (!crb(c,2)) { goto L_803F1FF4; } // 803F1FE8
  c->r[0]=0u+0x00000000u; // 803F1FEC
  W32(c->r[3]+0x0000015Cu,c->r[0]); // 803F1FF0
L_803F1FF4:;
  c->r[0]=R32(c->r[3]+0x0000017Cu); // 803F1FF4
  cmpu(c,0,c->r[0],c->r[4]); // 803F1FF8
  if (!crb(c,2)) { goto L_803F2008; } // 803F1FFC
  c->r[0]=0u+0x00000000u; // 803F2000
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 803F2004
L_803F2008:;
  c->r[0]=R32(c->r[3]+0x000001ACu); // 803F2008
  cmpu(c,0,c->r[0],c->r[4]); // 803F200C
  if (!crb(c,2)) { goto L_803F201C; } // 803F2010
  c->r[0]=0u+0x00000000u; // 803F2014
  W32(c->r[3]+0x000001ACu,c->r[0]); // 803F2018
L_803F201C:;
  c->r[0]=R32(c->r[3]+0x000001CCu); // 803F201C
  cmpu(c,0,c->r[0],c->r[4]); // 803F2020
  if (!crb(c,2)) { goto L_803F2030; } // 803F2024
  c->r[0]=0u+0x00000000u; // 803F2028
  W32(c->r[3]+0x000001CCu,c->r[0]); // 803F202C
L_803F2030:;
  c->r[0]=R32(c->r[3]+0x000001ECu); // 803F2030
  cmpu(c,0,c->r[0],c->r[4]); // 803F2034
  if (!crb(c,2)) { goto L_803F2044; } // 803F2038
  c->r[0]=0u+0x00000000u; // 803F203C
  W32(c->r[3]+0x000001ECu,c->r[0]); // 803F2040
L_803F2044:;
  c->r[0]=R32(c->r[3]+0x0000020Cu); // 803F2044
  cmpu(c,0,c->r[0],c->r[4]); // 803F2048
  if (!crb(c,2)) { goto L_803F2058; } // 803F204C
  c->r[0]=0u+0x00000000u; // 803F2050
  W32(c->r[3]+0x0000020Cu,c->r[0]); // 803F2054
L_803F2058:;
  c->r[0]=R32(c->r[3]+0x0000022Cu); // 803F2058
  cmpu(c,0,c->r[0],c->r[4]); // 803F205C
  if (!crb(c,2)) return; // 803F2060
  c->r[0]=0u+0x00000000u; // 803F2064
  W32(c->r[3]+0x0000022Cu,c->r[0]); // 803F2068
  return; // 803F206C
}

// fn_803F2070
void f_803F2070(Ctx* __restrict c) {
  trace_call(0x803F2070u);
  c->r[3]=0u+0x0000000Du; // 803F2070
  return; // 803F2074
}

// fn_803F2078
void f_803F2078(Ctx* __restrict c) {
  trace_call(0x803F2078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F2078
  c->r[0]=c->lr; // 803F207C
  cmps(c,0,(int32_t)c->r[3],0); // 803F2080
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F2084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F2088
  c->r[31]=c->r[4]|c->r[4]; // 803F208C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F2090
  c->r[30]=c->r[3]|c->r[3]; // 803F2094
  if (crb(c,2)) { goto L_803F20D4; } // 803F2098
  if (crb(c,2)) { goto L_803F20C4; } // 803F209C
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F20A0
  c->r[4]=0u+0x80470000u; // 803F20A4
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F20A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F20AC
  cmps(c,0,(int32_t)c->r[0],0); // 803F20B0
  if (crb(c,2)) { goto L_803F20C4; } // 803F20B4
  c->r[3]=c->r[0]|c->r[0]; // 803F20B8
  c->r[4]=0u+0x00000001u; // 803F20BC
  c->lr=0x803F20C4u; f_80402948(c); // 803F20C0
L_803F20C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F20C4
  if (!crb(c,1)) { goto L_803F20D4; } // 803F20C8
  c->r[3]=c->r[30]|c->r[30]; // 803F20CC
  c->lr=0x803F20D4u; f_803FE694(c); // 803F20D0
L_803F20D4:;
  c->r[3]=c->r[30]|c->r[30]; // 803F20D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F20D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F20DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F20E0
  c->lr=c->r[0]; // 803F20E4
  c->r[1]=c->r[1]+0x00000010u; // 803F20E8
  return; // 803F20EC
}

// fn_803F20F0
void f_803F20F0(Ctx* __restrict c) {
  trace_call(0x803F20F0u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F20F0
  c->r[0]=0u+0x00000000u; // 803F20F4
  c->r[5]=R32(c->r[3]+0x00000098u); // 803F20F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F20FC
  cmps(c,0,(int32_t)c->r[5],0); // 803F2100
  if (crb(c,2)) { goto L_803F2114; } // 803F2104
  c->r[0]=0u+0x00000001u; // 803F2108
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F210C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F2110
L_803F2114:;
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 803F2114
  cmps(c,0,(int32_t)c->r[7],0); // 803F2118
  if (crb(c,2)) { goto L_803F2138; } // 803F211C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2120
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2124
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2128
  c->r[6]=c->r[6]+0x00000001u; // 803F212C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2130
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2134
L_803F2138:;
  c->r[6]=R32(c->r[3]+0x000000A0u); // 803F2138
  cmps(c,0,(int32_t)c->r[6],0); // 803F213C
  if (crb(c,2)) { goto L_803F215C; } // 803F2140
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F2144
  c->r[3]=c->r[1]+0x0000000Cu; // 803F2148
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F214C
  c->r[5]=c->r[5]+0x00000001u; // 803F2150
  W32(c->r[3]+c->r[0],c->r[6]); // 803F2154
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F2158
L_803F215C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F215C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F2160
  if (crb(c,0)) { goto L_803F2170; } // 803F2164
  c->r[3]=0u+0x00000000u; // 803F2168
  goto L_803F217C; // 803F216C
L_803F2170:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F2170
  c->r[3]=c->r[1]+0x0000000Cu; // 803F2174
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F2178
L_803F217C:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F217C
  return; // 803F2180
}

// fn_803F2184
void f_803F2184(Ctx* __restrict c) {
  trace_call(0x803F2184u);
  c->r[0]=R32(c->r[3]+0x00000098u); // 803F2184
  cmpu(c,0,c->r[0],c->r[4]); // 803F2188
  if (!crb(c,2)) { goto L_803F2198; } // 803F218C
  c->r[0]=0u+0x00000000u; // 803F2190
  W32(c->r[3]+0x00000098u,c->r[0]); // 803F2194
L_803F2198:;
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F2198
  cmpu(c,0,c->r[0],c->r[4]); // 803F219C
  if (!crb(c,2)) { goto L_803F21AC; } // 803F21A0
  c->r[0]=0u+0x00000000u; // 803F21A4
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F21A8
L_803F21AC:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803F21AC
  cmpu(c,0,c->r[0],c->r[4]); // 803F21B0
  if (!crb(c,2)) return; // 803F21B4
  c->r[0]=0u+0x00000000u; // 803F21B8
  W32(c->r[3]+0x000000A0u,c->r[0]); // 803F21BC
  return; // 803F21C0
}

// fn_803F21C4
void f_803F21C4(Ctx* __restrict c) {
  trace_call(0x803F21C4u);
  c->r[3]=0u+0x0000000Cu; // 803F21C4
  return; // 803F21C8
}

// fn_803F21CC
void f_803F21CC(Ctx* __restrict c) {
  trace_call(0x803F21CCu);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F21CC
  c->r[0]=0u+0x00000000u; // 803F21D0
  c->r[3]=R32(c->r[3]+0x000000B4u); // 803F21D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F21D8
  cmps(c,0,(int32_t)c->r[3],0); // 803F21DC
  if (crb(c,2)) { goto L_803F21F0; } // 803F21E0
  c->r[0]=0u+0x00000001u; // 803F21E4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803F21E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F21EC
L_803F21F0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F21F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F21F4
  if (crb(c,0)) { goto L_803F2204; } // 803F21F8
  c->r[3]=0u+0x00000000u; // 803F21FC
  goto L_803F2210; // 803F2200
L_803F2204:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F2204
  c->r[3]=c->r[1]+0x0000000Cu; // 803F2208
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F220C
L_803F2210:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F2210
  return; // 803F2214
}

// fn_803F2218
void f_803F2218(Ctx* __restrict c) {
  trace_call(0x803F2218u);
  c->r[0]=R32(c->r[3]+0x000000B4u); // 803F2218
  cmpu(c,0,c->r[0],c->r[4]); // 803F221C
  if (!crb(c,2)) return; // 803F2220
  c->r[0]=0u+0x00000000u; // 803F2224
  W32(c->r[3]+0x000000B4u,c->r[0]); // 803F2228
  return; // 803F222C
}

// fn_803F2230
void f_803F2230(Ctx* __restrict c) {
  trace_call(0x803F2230u);
  c->r[3]=0u+0x0000000Bu; // 803F2230
  return; // 803F2234
}

// fn_803F2238
void f_803F2238(Ctx* __restrict c) {
  trace_call(0x803F2238u);
  return; // 803F2238
}

// fn_803F223C
void f_803F223C(Ctx* __restrict c) {
  trace_call(0x803F223Cu);
  return; // 803F223C
}

// fn_803F2240
void f_803F2240(Ctx* __restrict c) {
  trace_call(0x803F2240u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F2240
  c->r[0]=0u+0x00000000u; // 803F2244
  c->r[5]=R32(c->r[3]+0x0000009Cu); // 803F2248
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F224C
  cmps(c,0,(int32_t)c->r[5],0); // 803F2250
  if (crb(c,2)) { goto L_803F2264; } // 803F2254
  c->r[0]=0u+0x00000001u; // 803F2258
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F225C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F2260
L_803F2264:;
  c->r[7]=R32(c->r[3]+0x000000BCu); // 803F2264
  cmps(c,0,(int32_t)c->r[7],0); // 803F2268
  if (crb(c,2)) { goto L_803F2288; } // 803F226C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2270
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2274
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2278
  c->r[6]=c->r[6]+0x00000001u; // 803F227C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2280
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2284
L_803F2288:;
  c->r[7]=R32(c->r[3]+0x000000DCu); // 803F2288
  cmps(c,0,(int32_t)c->r[7],0); // 803F228C
  if (crb(c,2)) { goto L_803F22AC; } // 803F2290
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2294
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2298
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F229C
  c->r[6]=c->r[6]+0x00000001u; // 803F22A0
  W32(c->r[5]+c->r[0],c->r[7]); // 803F22A4
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F22A8
L_803F22AC:;
  c->r[7]=R32(c->r[3]+0x000000FCu); // 803F22AC
  cmps(c,0,(int32_t)c->r[7],0); // 803F22B0
  if (crb(c,2)) { goto L_803F22D0; } // 803F22B4
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F22B8
  c->r[5]=c->r[1]+0x0000000Cu; // 803F22BC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F22C0
  c->r[6]=c->r[6]+0x00000001u; // 803F22C4
  W32(c->r[5]+c->r[0],c->r[7]); // 803F22C8
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F22CC
L_803F22D0:;
  c->r[7]=R32(c->r[3]+0x0000011Cu); // 803F22D0
  cmps(c,0,(int32_t)c->r[7],0); // 803F22D4
  if (crb(c,2)) { goto L_803F22F4; } // 803F22D8
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F22DC
  c->r[5]=c->r[1]+0x0000000Cu; // 803F22E0
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F22E4
  c->r[6]=c->r[6]+0x00000001u; // 803F22E8
  W32(c->r[5]+c->r[0],c->r[7]); // 803F22EC
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F22F0
L_803F22F4:;
  c->r[7]=R32(c->r[3]+0x0000013Cu); // 803F22F4
  cmps(c,0,(int32_t)c->r[7],0); // 803F22F8
  if (crb(c,2)) { goto L_803F2318; } // 803F22FC
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2300
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2304
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2308
  c->r[6]=c->r[6]+0x00000001u; // 803F230C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2310
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2314
L_803F2318:;
  c->r[7]=R32(c->r[3]+0x0000015Cu); // 803F2318
  cmps(c,0,(int32_t)c->r[7],0); // 803F231C
  if (crb(c,2)) { goto L_803F233C; } // 803F2320
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2324
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2328
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F232C
  c->r[6]=c->r[6]+0x00000001u; // 803F2330
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2334
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2338
L_803F233C:;
  c->r[6]=R32(c->r[3]+0x0000017Cu); // 803F233C
  cmps(c,0,(int32_t)c->r[6],0); // 803F2340
  if (crb(c,2)) { goto L_803F2360; } // 803F2344
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F2348
  c->r[3]=c->r[1]+0x0000000Cu; // 803F234C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2350
  c->r[5]=c->r[5]+0x00000001u; // 803F2354
  W32(c->r[3]+c->r[0],c->r[6]); // 803F2358
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F235C
L_803F2360:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F2360
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F2364
  if (crb(c,0)) { goto L_803F2374; } // 803F2368
  c->r[3]=0u+0x00000000u; // 803F236C
  goto L_803F2380; // 803F2370
L_803F2374:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F2374
  c->r[3]=c->r[1]+0x0000000Cu; // 803F2378
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F237C
L_803F2380:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F2380
  return; // 803F2384
}

// fn_803F2388
void f_803F2388(Ctx* __restrict c) {
  trace_call(0x803F2388u);
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F2388
  cmpu(c,0,c->r[0],c->r[4]); // 803F238C
  if (!crb(c,2)) { goto L_803F239C; } // 803F2390
  c->r[0]=0u+0x00000000u; // 803F2394
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F2398
L_803F239C:;
  c->r[0]=R32(c->r[3]+0x000000BCu); // 803F239C
  cmpu(c,0,c->r[0],c->r[4]); // 803F23A0
  if (!crb(c,2)) { goto L_803F23B0; } // 803F23A4
  c->r[0]=0u+0x00000000u; // 803F23A8
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803F23AC
L_803F23B0:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 803F23B0
  cmpu(c,0,c->r[0],c->r[4]); // 803F23B4
  if (!crb(c,2)) { goto L_803F23C4; } // 803F23B8
  c->r[0]=0u+0x00000000u; // 803F23BC
  W32(c->r[3]+0x000000DCu,c->r[0]); // 803F23C0
L_803F23C4:;
  c->r[0]=R32(c->r[3]+0x000000FCu); // 803F23C4
  cmpu(c,0,c->r[0],c->r[4]); // 803F23C8
  if (!crb(c,2)) { goto L_803F23D8; } // 803F23CC
  c->r[0]=0u+0x00000000u; // 803F23D0
  W32(c->r[3]+0x000000FCu,c->r[0]); // 803F23D4
L_803F23D8:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 803F23D8
  cmpu(c,0,c->r[0],c->r[4]); // 803F23DC
  if (!crb(c,2)) { goto L_803F23EC; } // 803F23E0
  c->r[0]=0u+0x00000000u; // 803F23E4
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 803F23E8
L_803F23EC:;
  c->r[0]=R32(c->r[3]+0x0000013Cu); // 803F23EC
  cmpu(c,0,c->r[0],c->r[4]); // 803F23F0
  if (!crb(c,2)) { goto L_803F2400; } // 803F23F4
  c->r[0]=0u+0x00000000u; // 803F23F8
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 803F23FC
L_803F2400:;
  c->r[0]=R32(c->r[3]+0x0000015Cu); // 803F2400
  cmpu(c,0,c->r[0],c->r[4]); // 803F2404
  if (!crb(c,2)) { goto L_803F2414; } // 803F2408
  c->r[0]=0u+0x00000000u; // 803F240C
  W32(c->r[3]+0x0000015Cu,c->r[0]); // 803F2410
L_803F2414:;
  c->r[0]=R32(c->r[3]+0x0000017Cu); // 803F2414
  cmpu(c,0,c->r[0],c->r[4]); // 803F2418
  if (!crb(c,2)) return; // 803F241C
  c->r[0]=0u+0x00000000u; // 803F2420
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 803F2424
  return; // 803F2428
}

// fn_803F242C
void f_803F242C(Ctx* __restrict c) {
  trace_call(0x803F242Cu);
  c->r[3]=0u+0x00000000u; // 803F242C
  return; // 803F2430
}

// fn_803F2434
void f_803F2434(Ctx* __restrict c) {
  trace_call(0x803F2434u);
  return; // 803F2434
}

// fn_803F2438
void f_803F2438(Ctx* __restrict c) {
  trace_call(0x803F2438u);
  c->r[3]=0u+0x00000009u; // 803F2438
  return; // 803F243C
}

// fn_803F2440
void f_803F2440(Ctx* __restrict c) {
  trace_call(0x803F2440u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F2440
  c->r[0]=0u+0x00000000u; // 803F2444
  c->r[5]=R32(c->r[3]+0x000000BCu); // 803F2448
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F244C
  cmps(c,0,(int32_t)c->r[5],0); // 803F2450
  if (crb(c,2)) { goto L_803F2464; } // 803F2454
  c->r[0]=0u+0x00000001u; // 803F2458
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F245C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F2460
L_803F2464:;
  c->r[7]=R32(c->r[3]+0x000000ECu); // 803F2464
  cmps(c,0,(int32_t)c->r[7],0); // 803F2468
  if (crb(c,2)) { goto L_803F2488; } // 803F246C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2470
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2474
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2478
  c->r[6]=c->r[6]+0x00000001u; // 803F247C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2480
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2484
L_803F2488:;
  c->r[7]=R32(c->r[3]+0x000000D8u); // 803F2488
  cmps(c,0,(int32_t)c->r[7],0); // 803F248C
  if (crb(c,2)) { goto L_803F24AC; } // 803F2490
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2494
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2498
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F249C
  c->r[6]=c->r[6]+0x00000001u; // 803F24A0
  W32(c->r[5]+c->r[0],c->r[7]); // 803F24A4
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F24A8
L_803F24AC:;
  c->r[6]=R32(c->r[3]+0x0000009Cu); // 803F24AC
  cmps(c,0,(int32_t)c->r[6],0); // 803F24B0
  if (crb(c,2)) { goto L_803F24D0; } // 803F24B4
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F24B8
  c->r[3]=c->r[1]+0x0000000Cu; // 803F24BC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F24C0
  c->r[5]=c->r[5]+0x00000001u; // 803F24C4
  W32(c->r[3]+c->r[0],c->r[6]); // 803F24C8
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F24CC
L_803F24D0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F24D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F24D4
  if (crb(c,0)) { goto L_803F24E4; } // 803F24D8
  c->r[3]=0u+0x00000000u; // 803F24DC
  goto L_803F24F0; // 803F24E0
L_803F24E4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F24E4
  c->r[3]=c->r[1]+0x0000000Cu; // 803F24E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F24EC
L_803F24F0:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F24F0
  return; // 803F24F4
}

// fn_803F24F8
void f_803F24F8(Ctx* __restrict c) {
  trace_call(0x803F24F8u);
  c->r[0]=R32(c->r[3]+0x000000BCu); // 803F24F8
  cmpu(c,0,c->r[0],c->r[4]); // 803F24FC
  if (!crb(c,2)) { goto L_803F250C; } // 803F2500
  c->r[0]=0u+0x00000000u; // 803F2504
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803F2508
L_803F250C:;
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F250C
  cmpu(c,0,c->r[0],c->r[4]); // 803F2510
  if (!crb(c,2)) { goto L_803F2520; } // 803F2514
  c->r[0]=0u+0x00000000u; // 803F2518
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F251C
L_803F2520:;
  c->r[3]=R32(c->r[3]+0x000000D8u); // 803F2520
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F2524
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 803F2528
  c->ctr=c->r[12]; // 803F252C
  if (true) { dispatch(c,c->ctr); return; } // 803F2530
}

// fn_803F2534
void f_803F2534(Ctx* __restrict c) {
  trace_call(0x803F2534u);
  c->r[3]=0u+0x0000000Fu; // 803F2534
  return; // 803F2538
}

// fn_803F253C
void f_803F253C(Ctx* __restrict c) {
  trace_call(0x803F253Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F253C
  c->r[0]=c->lr; // 803F2540
  cmps(c,0,(int32_t)c->r[3],0); // 803F2544
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F2548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F254C
  c->r[31]=c->r[4]|c->r[4]; // 803F2550
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F2554
  c->r[30]=c->r[3]|c->r[3]; // 803F2558
  if (crb(c,2)) { goto L_803F2598; } // 803F255C
  if (crb(c,2)) { goto L_803F2588; } // 803F2560
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F2564
  c->r[4]=0u+0x80470000u; // 803F2568
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F256C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F2570
  cmps(c,0,(int32_t)c->r[0],0); // 803F2574
  if (crb(c,2)) { goto L_803F2588; } // 803F2578
  c->r[3]=c->r[0]|c->r[0]; // 803F257C
  c->r[4]=0u+0x00000001u; // 803F2580
  c->lr=0x803F2588u; f_80402948(c); // 803F2584
L_803F2588:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F2588
  if (!crb(c,1)) { goto L_803F2598; } // 803F258C
  c->r[3]=c->r[30]|c->r[30]; // 803F2590
  c->lr=0x803F2598u; f_803FE694(c); // 803F2594
L_803F2598:;
  c->r[3]=c->r[30]|c->r[30]; // 803F2598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F259C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F25A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F25A4
  c->lr=c->r[0]; // 803F25A8
  c->r[1]=c->r[1]+0x00000010u; // 803F25AC
  return; // 803F25B0
}

// fn_803F25B4
void f_803F25B4(Ctx* __restrict c) {
  trace_call(0x803F25B4u);
  c->r[3]=R32(c->r[3]+0x000000A4u); // 803F25B4
  return; // 803F25B8
}

// fn_803F25BC
void f_803F25BC(Ctx* __restrict c) {
  trace_call(0x803F25BCu);
  return; // 803F25BC
}

// fn_803F25C0
void f_803F25C0(Ctx* __restrict c) {
  trace_call(0x803F25C0u);
  return; // 803F25C0
}

// fn_803F25C4
void f_803F25C4(Ctx* __restrict c) {
  trace_call(0x803F25C4u);
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F25C4
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F25C8
  c->f[0]=-c->f[1]; // 803F25CC
  cmps(c,0,(int32_t)c->r[0],1); // 803F25D0
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 803F25D4
  if (!crb(c,2)) { goto L_803F25E8; } // 803F25D8
  c->r[0]=0u+0x00000002u; // 803F25DC
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F25E0
  return; // 803F25E4
L_803F25E8:;
  cmps(c,0,(int32_t)c->r[0],2); // 803F25E8
  if (!crb(c,2)) return; // 803F25EC
  c->r[0]=0u+0x00000001u; // 803F25F0
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F25F4
  return; // 803F25F8
}

// fn_803F25FC
void f_803F25FC(Ctx* __restrict c) {
  trace_call(0x803F25FCu);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F25FC
  c->r[0]=0u+0x00000000u; // 803F2600
  c->r[5]=R32(c->r[3]+0x000000ACu); // 803F2604
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F2608
  cmps(c,0,(int32_t)c->r[5],0); // 803F260C
  if (crb(c,2)) { goto L_803F2620; } // 803F2610
  c->r[0]=0u+0x00000001u; // 803F2614
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F2618
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F261C
L_803F2620:;
  c->r[7]=R32(c->r[3]+0x000000DCu); // 803F2620
  cmps(c,0,(int32_t)c->r[7],0); // 803F2624
  if (crb(c,2)) { goto L_803F2644; } // 803F2628
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F262C
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2630
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2634
  c->r[6]=c->r[6]+0x00000001u; // 803F2638
  W32(c->r[5]+c->r[0],c->r[7]); // 803F263C
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2640
L_803F2644:;
  c->r[7]=R32(c->r[3]+0x000000FCu); // 803F2644
  cmps(c,0,(int32_t)c->r[7],0); // 803F2648
  if (crb(c,2)) { goto L_803F2668; } // 803F264C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2650
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2654
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2658
  c->r[6]=c->r[6]+0x00000001u; // 803F265C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2660
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2664
L_803F2668:;
  c->r[6]=R32(c->r[3]+0x0000011Cu); // 803F2668
  cmps(c,0,(int32_t)c->r[6],0); // 803F266C
  if (crb(c,2)) { goto L_803F268C; } // 803F2670
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F2674
  c->r[3]=c->r[1]+0x0000000Cu; // 803F2678
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F267C
  c->r[5]=c->r[5]+0x00000001u; // 803F2680
  W32(c->r[3]+c->r[0],c->r[6]); // 803F2684
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F2688
L_803F268C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F268C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F2690
  if (crb(c,0)) { goto L_803F26A0; } // 803F2694
  c->r[3]=0u+0x00000000u; // 803F2698
  goto L_803F26AC; // 803F269C
L_803F26A0:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F26A0
  c->r[3]=c->r[1]+0x0000000Cu; // 803F26A4
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F26A8
L_803F26AC:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F26AC
  return; // 803F26B0
}

// fn_803F26B4
void f_803F26B4(Ctx* __restrict c) {
  trace_call(0x803F26B4u);
  c->r[0]=R32(c->r[3]+0x000000ACu); // 803F26B4
  cmpu(c,0,c->r[0],c->r[4]); // 803F26B8
  if (!crb(c,2)) { goto L_803F26C8; } // 803F26BC
  c->r[0]=0u+0x00000000u; // 803F26C0
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F26C4
L_803F26C8:;
  c->r[0]=R32(c->r[3]+0x000000DCu); // 803F26C8
  cmpu(c,0,c->r[0],c->r[4]); // 803F26CC
  if (!crb(c,2)) { goto L_803F26DC; } // 803F26D0
  c->r[0]=0u+0x00000000u; // 803F26D4
  W32(c->r[3]+0x000000DCu,c->r[0]); // 803F26D8
L_803F26DC:;
  c->r[0]=R32(c->r[3]+0x000000FCu); // 803F26DC
  cmpu(c,0,c->r[0],c->r[4]); // 803F26E0
  if (!crb(c,2)) { goto L_803F26F0; } // 803F26E4
  c->r[0]=0u+0x00000000u; // 803F26E8
  W32(c->r[3]+0x000000FCu,c->r[0]); // 803F26EC
L_803F26F0:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 803F26F0
  cmpu(c,0,c->r[0],c->r[4]); // 803F26F4
  if (!crb(c,2)) return; // 803F26F8
  c->r[0]=0u+0x00000000u; // 803F26FC
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 803F2700
  return; // 803F2704
}

// fn_803F2708
void f_803F2708(Ctx* __restrict c) {
  trace_call(0x803F2708u);
  c->r[3]=0u+0x00000007u; // 803F2708
  return; // 803F270C
}

// fn_803F2710
void f_803F2710(Ctx* __restrict c) {
  trace_call(0x803F2710u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F2710
  c->r[0]=0u+0x00000000u; // 803F2714
  c->r[5]=R32(c->r[3]+0x00000098u); // 803F2718
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F271C
  c->r[0]=c->r[1]+0x00000008u; // 803F2720
  c->ctr=c->r[5]; // 803F2724
  cmps(c,0,(int32_t)c->r[5],0); // 803F2728
  if (!crb(c,1)) { goto L_803F275C; } // 803F272C
L_803F2730:;
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 803F2730
  cmps(c,0,(int32_t)c->r[7],0); // 803F2734
  if (crb(c,2)) { goto L_803F2754; } // 803F2738
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F273C
  c->r[5]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2740
  c->r[6]=c->r[6]+0x00000001u; // 803F2744
  c->r[5]=c->r[0]+c->r[5]; // 803F2748
  W32(c->r[5]+0x00000004u,c->r[7]); // 803F274C
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2750
L_803F2754:;
  c->r[3]=c->r[3]+0x0000000Cu; // 803F2754
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803F2730; } // 803F2758
L_803F275C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F275C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F2760
  if (crb(c,0)) { goto L_803F2770; } // 803F2764
  c->r[3]=0u+0x00000000u; // 803F2768
  goto L_803F277C; // 803F276C
L_803F2770:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F2770
  c->r[3]=c->r[1]+0x0000000Cu; // 803F2774
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F2778
L_803F277C:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F277C
  return; // 803F2780
}

// fn_803F2784
void f_803F2784(Ctx* __restrict c) {
  trace_call(0x803F2784u);
  c->r[6]=c->r[3]|c->r[3]; // 803F2784
  c->r[7]=0u+0x00000000u; // 803F2788
  c->r[5]=0u+0x00000000u; // 803F278C
  goto L_803F27AC; // 803F2790
L_803F2794:;
  c->r[0]=R32(c->r[6]+0x0000009Cu); // 803F2794
  cmpu(c,0,c->r[0],c->r[4]); // 803F2798
  if (!crb(c,2)) { goto L_803F27A4; } // 803F279C
  W32(c->r[6]+0x0000009Cu,c->r[5]); // 803F27A0
L_803F27A4:;
  c->r[6]=c->r[6]+0x0000000Cu; // 803F27A4
  c->r[7]=c->r[7]+0x00000001u; // 803F27A8
L_803F27AC:;
  c->r[0]=R32(c->r[3]+0x00000098u); // 803F27AC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 803F27B0
  if (crb(c,0)) { IRQCHK(c); goto L_803F2794; } // 803F27B4
  return; // 803F27B8
}

// fn_803F27BC
void f_803F27BC(Ctx* __restrict c) {
  trace_call(0x803F27BCu);
  c->r[3]=0u+0x00000006u; // 803F27BC
  return; // 803F27C0
}

// fn_803F27C4
void f_803F27C4(Ctx* __restrict c) {
  trace_call(0x803F27C4u);
  return; // 803F27C4
}

// fn_803F27C8
void f_803F27C8(Ctx* __restrict c) {
  trace_call(0x803F27C8u);
  return; // 803F27C8
}

// fn_803F27CC
void f_803F27CC(Ctx* __restrict c) {
  trace_call(0x803F27CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F27CC
  c->r[0]=R32(c->r[3]+0x000000B8u); // 803F27D0
  cmps(c,0,(int32_t)c->r[0],0); // 803F27D4
  if (!crb(c,2)) { goto L_803F2800; } // 803F27D8
  c->r[0]=R32(c->r[3]+0x000000D8u); // 803F27DC
  cmps(c,0,(int32_t)c->r[0],0); // 803F27E0
  if (!crb(c,2)) { goto L_803F2800; } // 803F27E4
  c->r[0]=R32(c->r[3]+0x000000F8u); // 803F27E8
  cmps(c,0,(int32_t)c->r[0],0); // 803F27EC
  if (!crb(c,2)) { goto L_803F2800; } // 803F27F0
  c->r[0]=R32(c->r[3]+0x00000118u); // 803F27F4
  cmps(c,0,(int32_t)c->r[0],0); // 803F27F8
  if (crb(c,2)) { goto L_803F280C; } // 803F27FC
L_803F2800:;
  c->r[0]=0u+0x00000000u; // 803F2800
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F2804
  goto L_803F284C; // 803F2808
L_803F280C:;
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F280C
  c->r[4]=c->r[1]+0x00000028u; // 803F2810
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2814
  c->r[5]=c->r[1]+0x00000030u; // 803F2818
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F281C
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2820
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 803F2824
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 803F2828
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803F282C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2830
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803F2834
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2838
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,1,ea,0,6);} // 803F283C
  {uint32_t ea=c->r[3]+0x000000B2u; psq_store(c,0,ea,0,6);} // 803F2840
  c->r[0]=0u+0x00000001u; // 803F2844
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F2848
L_803F284C:;
  c->r[0]=R32(c->r[3]+0x00000140u); // 803F284C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2850
  if (!crb(c,2)) { goto L_803F287C; } // 803F2854
  c->r[0]=R32(c->r[3]+0x00000160u); // 803F2858
  cmps(c,0,(int32_t)c->r[0],0); // 803F285C
  if (!crb(c,2)) { goto L_803F287C; } // 803F2860
  c->r[0]=R32(c->r[3]+0x00000180u); // 803F2864
  cmps(c,0,(int32_t)c->r[0],0); // 803F2868
  if (!crb(c,2)) { goto L_803F287C; } // 803F286C
  c->r[0]=R32(c->r[3]+0x000001A0u); // 803F2870
  cmps(c,0,(int32_t)c->r[0],0); // 803F2874
  if (crb(c,2)) { goto L_803F2888; } // 803F2878
L_803F287C:;
  c->r[0]=0u+0x00000000u; // 803F287C
  W32(c->r[3]+0x00000134u,c->r[0]); // 803F2880
  goto L_803F28C8; // 803F2884
L_803F2888:;
  {uint32_t ea=c->r[3]+0x0000013Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2888
  c->r[4]=c->r[1]+0x00000018u; // 803F288C
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2890
  c->r[5]=c->r[1]+0x00000020u; // 803F2894
  {uint32_t ea=c->r[3]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2898
  {uint32_t ea=c->r[3]+0x0000019Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F289C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803F28A0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803F28A4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F28A8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F28AC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803F28B0
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F28B4
  {uint32_t ea=c->r[3]+0x00000138u; psq_store(c,1,ea,0,6);} // 803F28B8
  {uint32_t ea=c->r[3]+0x0000013Au; psq_store(c,0,ea,0,6);} // 803F28BC
  c->r[0]=0u+0x00000001u; // 803F28C0
  W32(c->r[3]+0x00000134u,c->r[0]); // 803F28C4
L_803F28C8:;
  c->r[0]=R32(c->r[3]+0x000001C8u); // 803F28C8
  cmps(c,0,(int32_t)c->r[0],0); // 803F28CC
  if (!crb(c,2)) { goto L_803F28F8; } // 803F28D0
  c->r[0]=R32(c->r[3]+0x000001E8u); // 803F28D4
  cmps(c,0,(int32_t)c->r[0],0); // 803F28D8
  if (!crb(c,2)) { goto L_803F28F8; } // 803F28DC
  c->r[0]=R32(c->r[3]+0x00000208u); // 803F28E0
  cmps(c,0,(int32_t)c->r[0],0); // 803F28E4
  if (!crb(c,2)) { goto L_803F28F8; } // 803F28E8
  c->r[0]=R32(c->r[3]+0x00000228u); // 803F28EC
  cmps(c,0,(int32_t)c->r[0],0); // 803F28F0
  if (crb(c,2)) { goto L_803F2904; } // 803F28F4
L_803F28F8:;
  c->r[0]=0u+0x00000000u; // 803F28F8
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803F28FC
  goto L_803F2944; // 803F2900
L_803F2904:;
  {uint32_t ea=c->r[3]+0x000001C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2904
  c->r[4]=c->r[1]+0x00000008u; // 803F2908
  {uint32_t ea=c->r[3]+0x000001E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F290C
  c->r[5]=c->r[1]+0x00000010u; // 803F2910
  {uint32_t ea=c->r[3]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2914
  {uint32_t ea=c->r[3]+0x00000224u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2918
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 803F291C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803F2920
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F2924
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2928
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803F292C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2930
  {uint32_t ea=c->r[3]+0x000001C0u; psq_store(c,1,ea,0,6);} // 803F2934
  {uint32_t ea=c->r[3]+0x000001C2u; psq_store(c,0,ea,0,6);} // 803F2938
  c->r[0]=0u+0x00000001u; // 803F293C
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803F2940
L_803F2944:;
  c->r[0]=R32(c->r[3]+0x000000ACu); // 803F2944
  c->r[4]=0u+0x00000000u; // 803F2948
  W32(c->r[3]+0x00000098u,c->r[4]); // 803F294C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2950
  if (crb(c,2)) { goto L_803F29B0; } // 803F2954
  c->r[0]=R32(c->r[3]+0x00000134u); // 803F2958
  cmps(c,0,(int32_t)c->r[0],0); // 803F295C
  if (crb(c,2)) { goto L_803F29B0; } // 803F2960
  c->r[0]=R32(c->r[3]+0x000001BCu); // 803F2964
  cmps(c,0,(int32_t)c->r[0],0); // 803F2968
  if (crb(c,2)) { goto L_803F29B0; } // 803F296C
  c->r[0]=R32(c->r[3]+0x000000A4u); // 803F2970
  cmps(c,0,(int32_t)c->r[0],0); // 803F2974
  if (!crb(c,2)) { goto L_803F29A8; } // 803F2978
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803F297C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2980
  if (!crb(c,2)) { goto L_803F299C; } // 803F2984
  c->r[4]=R32(c->r[3]+0x000000B0u); // 803F2988
  c->r[0]=0u+0x00000001u; // 803F298C
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 803F2990
  W32(c->r[3]+0x00000098u,c->r[0]); // 803F2994
  goto L_803F29B0; // 803F2998
L_803F299C:;
  c->r[0]=0u+0x00000002u; // 803F299C
  W32(c->r[3]+0x00000098u,c->r[0]); // 803F29A0
  goto L_803F29B0; // 803F29A4
L_803F29A8:;
  c->r[0]=0u+0x00000003u; // 803F29A8
  W32(c->r[3]+0x00000098u,c->r[0]); // 803F29AC
L_803F29B0:;
  c->r[1]=c->r[1]+0x00000040u; // 803F29B0
  return; // 803F29B4
}

// fn_803F29B8
void f_803F29B8(Ctx* __restrict c) {
  trace_call(0x803F29B8u);
  c->r[3]=0u+0x00000000u; // 803F29B8
  return; // 803F29BC
}

// fn_803F29C0
void f_803F29C0(Ctx* __restrict c) {
  trace_call(0x803F29C0u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F29C0
  c->r[0]=0u+0x00000000u; // 803F29C4
  c->r[5]=R32(c->r[3]+0x000000B8u); // 803F29C8
  c->r[7]=c->r[1]+0x00000038u; // 803F29CC
  W32(c->r[1]+0x00000038u,c->r[0]); // 803F29D0
  cmps(c,0,(int32_t)c->r[5],0); // 803F29D4
  if (crb(c,2)) { goto L_803F29E8; } // 803F29D8
  c->r[0]=0u+0x00000001u; // 803F29DC
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 803F29E0
  W32(c->r[1]+0x00000038u,c->r[0]); // 803F29E4
L_803F29E8:;
  c->r[8]=R32(c->r[3]+0x000000D8u); // 803F29E8
  cmps(c,0,(int32_t)c->r[8],0); // 803F29EC
  if (crb(c,2)) { goto L_803F2A0C; } // 803F29F0
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F29F4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F29F8
  c->r[6]=c->r[5]+0x00000001u; // 803F29FC
  c->r[5]=c->r[7]+c->r[0]; // 803F2A00
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2A04
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2A08
L_803F2A0C:;
  c->r[8]=R32(c->r[3]+0x000000F8u); // 803F2A0C
  cmps(c,0,(int32_t)c->r[8],0); // 803F2A10
  if (crb(c,2)) { goto L_803F2A30; } // 803F2A14
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2A18
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2A1C
  c->r[6]=c->r[5]+0x00000001u; // 803F2A20
  c->r[5]=c->r[7]+c->r[0]; // 803F2A24
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2A28
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2A2C
L_803F2A30:;
  c->r[8]=R32(c->r[3]+0x00000118u); // 803F2A30
  cmps(c,0,(int32_t)c->r[8],0); // 803F2A34
  if (crb(c,2)) { goto L_803F2A54; } // 803F2A38
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2A3C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2A40
  c->r[6]=c->r[5]+0x00000001u; // 803F2A44
  c->r[5]=c->r[7]+c->r[0]; // 803F2A48
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2A4C
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2A50
L_803F2A54:;
  c->r[0]=R32(c->r[3]+0x000000B8u); // 803F2A54
  cmps(c,0,(int32_t)c->r[0],0); // 803F2A58
  if (!crb(c,2)) { goto L_803F2A84; } // 803F2A5C
  c->r[0]=R32(c->r[3]+0x000000D8u); // 803F2A60
  cmps(c,0,(int32_t)c->r[0],0); // 803F2A64
  if (!crb(c,2)) { goto L_803F2A84; } // 803F2A68
  c->r[0]=R32(c->r[3]+0x000000F8u); // 803F2A6C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2A70
  if (!crb(c,2)) { goto L_803F2A84; } // 803F2A74
  c->r[0]=R32(c->r[3]+0x00000118u); // 803F2A78
  cmps(c,0,(int32_t)c->r[0],0); // 803F2A7C
  if (crb(c,2)) { goto L_803F2A90; } // 803F2A80
L_803F2A84:;
  c->r[0]=0u+0x00000000u; // 803F2A84
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F2A88
  goto L_803F2AD0; // 803F2A8C
L_803F2A90:;
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2A90
  c->r[6]=c->r[1]+0x00000028u; // 803F2A94
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2A98
  c->r[5]=c->r[1]+0x00000030u; // 803F2A9C
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2AA0
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2AA4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 803F2AA8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 803F2AAC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803F2AB0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2AB4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803F2AB8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2ABC
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,1,ea,0,6);} // 803F2AC0
  {uint32_t ea=c->r[3]+0x000000B2u; psq_store(c,0,ea,0,6);} // 803F2AC4
  c->r[0]=0u+0x00000001u; // 803F2AC8
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F2ACC
L_803F2AD0:;
  c->r[8]=R32(c->r[3]+0x00000140u); // 803F2AD0
  c->r[7]=c->r[1]+0x00000038u; // 803F2AD4
  cmps(c,0,(int32_t)c->r[8],0); // 803F2AD8
  if (crb(c,2)) { goto L_803F2AF8; } // 803F2ADC
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2AE0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2AE4
  c->r[6]=c->r[5]+0x00000001u; // 803F2AE8
  c->r[5]=c->r[7]+c->r[0]; // 803F2AEC
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2AF0
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2AF4
L_803F2AF8:;
  c->r[8]=R32(c->r[3]+0x00000160u); // 803F2AF8
  cmps(c,0,(int32_t)c->r[8],0); // 803F2AFC
  if (crb(c,2)) { goto L_803F2B1C; } // 803F2B00
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2B04
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2B08
  c->r[6]=c->r[5]+0x00000001u; // 803F2B0C
  c->r[5]=c->r[7]+c->r[0]; // 803F2B10
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2B14
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2B18
L_803F2B1C:;
  c->r[8]=R32(c->r[3]+0x00000180u); // 803F2B1C
  cmps(c,0,(int32_t)c->r[8],0); // 803F2B20
  if (crb(c,2)) { goto L_803F2B40; } // 803F2B24
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2B28
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2B2C
  c->r[6]=c->r[5]+0x00000001u; // 803F2B30
  c->r[5]=c->r[7]+c->r[0]; // 803F2B34
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2B38
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2B3C
L_803F2B40:;
  c->r[8]=R32(c->r[3]+0x000001A0u); // 803F2B40
  cmps(c,0,(int32_t)c->r[8],0); // 803F2B44
  if (crb(c,2)) { goto L_803F2B64; } // 803F2B48
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2B4C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2B50
  c->r[6]=c->r[5]+0x00000001u; // 803F2B54
  c->r[5]=c->r[7]+c->r[0]; // 803F2B58
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2B5C
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2B60
L_803F2B64:;
  c->r[0]=R32(c->r[3]+0x00000140u); // 803F2B64
  cmps(c,0,(int32_t)c->r[0],0); // 803F2B68
  if (!crb(c,2)) { goto L_803F2B94; } // 803F2B6C
  c->r[0]=R32(c->r[3]+0x00000160u); // 803F2B70
  cmps(c,0,(int32_t)c->r[0],0); // 803F2B74
  if (!crb(c,2)) { goto L_803F2B94; } // 803F2B78
  c->r[0]=R32(c->r[3]+0x00000180u); // 803F2B7C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2B80
  if (!crb(c,2)) { goto L_803F2B94; } // 803F2B84
  c->r[0]=R32(c->r[3]+0x000001A0u); // 803F2B88
  cmps(c,0,(int32_t)c->r[0],0); // 803F2B8C
  if (crb(c,2)) { goto L_803F2BA0; } // 803F2B90
L_803F2B94:;
  c->r[0]=0u+0x00000000u; // 803F2B94
  W32(c->r[3]+0x00000134u,c->r[0]); // 803F2B98
  goto L_803F2BE0; // 803F2B9C
L_803F2BA0:;
  {uint32_t ea=c->r[3]+0x0000013Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2BA0
  c->r[6]=c->r[1]+0x00000018u; // 803F2BA4
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2BA8
  c->r[5]=c->r[1]+0x00000020u; // 803F2BAC
  {uint32_t ea=c->r[3]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2BB0
  {uint32_t ea=c->r[3]+0x0000019Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2BB4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803F2BB8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803F2BBC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F2BC0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2BC4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803F2BC8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2BCC
  {uint32_t ea=c->r[3]+0x00000138u; psq_store(c,1,ea,0,6);} // 803F2BD0
  {uint32_t ea=c->r[3]+0x0000013Au; psq_store(c,0,ea,0,6);} // 803F2BD4
  c->r[0]=0u+0x00000001u; // 803F2BD8
  W32(c->r[3]+0x00000134u,c->r[0]); // 803F2BDC
L_803F2BE0:;
  c->r[8]=R32(c->r[3]+0x000001C8u); // 803F2BE0
  c->r[7]=c->r[1]+0x00000038u; // 803F2BE4
  cmps(c,0,(int32_t)c->r[8],0); // 803F2BE8
  if (crb(c,2)) { goto L_803F2C08; } // 803F2BEC
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2BF0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2BF4
  c->r[6]=c->r[5]+0x00000001u; // 803F2BF8
  c->r[5]=c->r[7]+c->r[0]; // 803F2BFC
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2C00
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2C04
L_803F2C08:;
  c->r[8]=R32(c->r[3]+0x000001E8u); // 803F2C08
  cmps(c,0,(int32_t)c->r[8],0); // 803F2C0C
  if (crb(c,2)) { goto L_803F2C2C; } // 803F2C10
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2C14
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2C18
  c->r[6]=c->r[5]+0x00000001u; // 803F2C1C
  c->r[5]=c->r[7]+c->r[0]; // 803F2C20
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2C24
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2C28
L_803F2C2C:;
  c->r[8]=R32(c->r[3]+0x00000208u); // 803F2C2C
  cmps(c,0,(int32_t)c->r[8],0); // 803F2C30
  if (crb(c,2)) { goto L_803F2C50; } // 803F2C34
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2C38
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2C3C
  c->r[6]=c->r[5]+0x00000001u; // 803F2C40
  c->r[5]=c->r[7]+c->r[0]; // 803F2C44
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2C48
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2C4C
L_803F2C50:;
  c->r[8]=R32(c->r[3]+0x00000228u); // 803F2C50
  cmps(c,0,(int32_t)c->r[8],0); // 803F2C54
  if (crb(c,2)) { goto L_803F2C74; } // 803F2C58
  c->r[5]=R32(c->r[1]+0x00000038u); // 803F2C5C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F2C60
  c->r[6]=c->r[5]+0x00000001u; // 803F2C64
  c->r[5]=c->r[7]+c->r[0]; // 803F2C68
  W32(c->r[5]+0x00000004u,c->r[8]); // 803F2C6C
  W32(c->r[1]+0x00000038u,c->r[6]); // 803F2C70
L_803F2C74:;
  c->r[0]=R32(c->r[3]+0x000001C8u); // 803F2C74
  cmps(c,0,(int32_t)c->r[0],0); // 803F2C78
  if (!crb(c,2)) { goto L_803F2CA4; } // 803F2C7C
  c->r[0]=R32(c->r[3]+0x000001E8u); // 803F2C80
  cmps(c,0,(int32_t)c->r[0],0); // 803F2C84
  if (!crb(c,2)) { goto L_803F2CA4; } // 803F2C88
  c->r[0]=R32(c->r[3]+0x00000208u); // 803F2C8C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2C90
  if (!crb(c,2)) { goto L_803F2CA4; } // 803F2C94
  c->r[0]=R32(c->r[3]+0x00000228u); // 803F2C98
  cmps(c,0,(int32_t)c->r[0],0); // 803F2C9C
  if (crb(c,2)) { goto L_803F2CB0; } // 803F2CA0
L_803F2CA4:;
  c->r[0]=0u+0x00000000u; // 803F2CA4
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803F2CA8
  goto L_803F2CF0; // 803F2CAC
L_803F2CB0:;
  {uint32_t ea=c->r[3]+0x000001C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2CB0
  c->r[6]=c->r[1]+0x00000008u; // 803F2CB4
  {uint32_t ea=c->r[3]+0x000001E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2CB8
  c->r[5]=c->r[1]+0x00000010u; // 803F2CBC
  {uint32_t ea=c->r[3]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2CC0
  {uint32_t ea=c->r[3]+0x00000224u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2CC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 803F2CC8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803F2CCC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F2CD0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2CD4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803F2CD8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2CDC
  {uint32_t ea=c->r[3]+0x000001C0u; psq_store(c,1,ea,0,6);} // 803F2CE0
  {uint32_t ea=c->r[3]+0x000001C2u; psq_store(c,0,ea,0,6);} // 803F2CE4
  c->r[0]=0u+0x00000001u; // 803F2CE8
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803F2CEC
L_803F2CF0:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 803F2CF0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F2CF4
  if (crb(c,0)) { goto L_803F2D04; } // 803F2CF8
  c->r[3]=0u+0x00000000u; // 803F2CFC
  goto L_803F2D10; // 803F2D00
L_803F2D04:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F2D04
  c->r[3]=c->r[1]+0x0000003Cu; // 803F2D08
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F2D0C
L_803F2D10:;
  c->r[1]=c->r[1]+0x000001D0u; // 803F2D10
  return; // 803F2D14
}

// fn_803F2D18
void f_803F2D18(Ctx* __restrict c) {
  trace_call(0x803F2D18u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F2D18
  c->r[0]=R32(c->r[3]+0x000000B8u); // 803F2D1C
  cmpu(c,0,c->r[0],c->r[4]); // 803F2D20
  if (!crb(c,2)) { goto L_803F2D30; } // 803F2D24
  c->r[0]=0u+0x00000000u; // 803F2D28
  W32(c->r[3]+0x000000B8u,c->r[0]); // 803F2D2C
L_803F2D30:;
  c->r[0]=R32(c->r[3]+0x000000D8u); // 803F2D30
  cmpu(c,0,c->r[0],c->r[4]); // 803F2D34
  if (!crb(c,2)) { goto L_803F2D44; } // 803F2D38
  c->r[0]=0u+0x00000000u; // 803F2D3C
  W32(c->r[3]+0x000000D8u,c->r[0]); // 803F2D40
L_803F2D44:;
  c->r[0]=R32(c->r[3]+0x000000F8u); // 803F2D44
  cmpu(c,0,c->r[0],c->r[4]); // 803F2D48
  if (!crb(c,2)) { goto L_803F2D58; } // 803F2D4C
  c->r[0]=0u+0x00000000u; // 803F2D50
  W32(c->r[3]+0x000000F8u,c->r[0]); // 803F2D54
L_803F2D58:;
  c->r[0]=R32(c->r[3]+0x00000118u); // 803F2D58
  cmpu(c,0,c->r[0],c->r[4]); // 803F2D5C
  if (!crb(c,2)) { goto L_803F2D6C; } // 803F2D60
  c->r[0]=0u+0x00000000u; // 803F2D64
  W32(c->r[3]+0x00000118u,c->r[0]); // 803F2D68
L_803F2D6C:;
  c->r[0]=R32(c->r[3]+0x000000B8u); // 803F2D6C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2D70
  if (!crb(c,2)) { goto L_803F2D9C; } // 803F2D74
  c->r[0]=R32(c->r[3]+0x000000D8u); // 803F2D78
  cmps(c,0,(int32_t)c->r[0],0); // 803F2D7C
  if (!crb(c,2)) { goto L_803F2D9C; } // 803F2D80
  c->r[0]=R32(c->r[3]+0x000000F8u); // 803F2D84
  cmps(c,0,(int32_t)c->r[0],0); // 803F2D88
  if (!crb(c,2)) { goto L_803F2D9C; } // 803F2D8C
  c->r[0]=R32(c->r[3]+0x00000118u); // 803F2D90
  cmps(c,0,(int32_t)c->r[0],0); // 803F2D94
  if (crb(c,2)) { goto L_803F2DA8; } // 803F2D98
L_803F2D9C:;
  c->r[0]=0u+0x00000000u; // 803F2D9C
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F2DA0
  goto L_803F2DE8; // 803F2DA4
L_803F2DA8:;
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2DA8
  c->r[6]=c->r[1]+0x00000028u; // 803F2DAC
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2DB0
  c->r[5]=c->r[1]+0x00000030u; // 803F2DB4
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2DB8
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2DBC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 803F2DC0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 803F2DC4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803F2DC8
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2DCC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803F2DD0
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2DD4
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,1,ea,0,6);} // 803F2DD8
  {uint32_t ea=c->r[3]+0x000000B2u; psq_store(c,0,ea,0,6);} // 803F2DDC
  c->r[0]=0u+0x00000001u; // 803F2DE0
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F2DE4
L_803F2DE8:;
  c->r[0]=R32(c->r[3]+0x00000140u); // 803F2DE8
  cmpu(c,0,c->r[0],c->r[4]); // 803F2DEC
  if (!crb(c,2)) { goto L_803F2DFC; } // 803F2DF0
  c->r[0]=0u+0x00000000u; // 803F2DF4
  W32(c->r[3]+0x00000140u,c->r[0]); // 803F2DF8
L_803F2DFC:;
  c->r[0]=R32(c->r[3]+0x00000160u); // 803F2DFC
  cmpu(c,0,c->r[0],c->r[4]); // 803F2E00
  if (!crb(c,2)) { goto L_803F2E10; } // 803F2E04
  c->r[0]=0u+0x00000000u; // 803F2E08
  W32(c->r[3]+0x00000160u,c->r[0]); // 803F2E0C
L_803F2E10:;
  c->r[0]=R32(c->r[3]+0x00000180u); // 803F2E10
  cmpu(c,0,c->r[0],c->r[4]); // 803F2E14
  if (!crb(c,2)) { goto L_803F2E24; } // 803F2E18
  c->r[0]=0u+0x00000000u; // 803F2E1C
  W32(c->r[3]+0x00000180u,c->r[0]); // 803F2E20
L_803F2E24:;
  c->r[0]=R32(c->r[3]+0x000001A0u); // 803F2E24
  cmpu(c,0,c->r[0],c->r[4]); // 803F2E28
  if (!crb(c,2)) { goto L_803F2E38; } // 803F2E2C
  c->r[0]=0u+0x00000000u; // 803F2E30
  W32(c->r[3]+0x000001A0u,c->r[0]); // 803F2E34
L_803F2E38:;
  c->r[0]=R32(c->r[3]+0x00000140u); // 803F2E38
  cmps(c,0,(int32_t)c->r[0],0); // 803F2E3C
  if (!crb(c,2)) { goto L_803F2E68; } // 803F2E40
  c->r[0]=R32(c->r[3]+0x00000160u); // 803F2E44
  cmps(c,0,(int32_t)c->r[0],0); // 803F2E48
  if (!crb(c,2)) { goto L_803F2E68; } // 803F2E4C
  c->r[0]=R32(c->r[3]+0x00000180u); // 803F2E50
  cmps(c,0,(int32_t)c->r[0],0); // 803F2E54
  if (!crb(c,2)) { goto L_803F2E68; } // 803F2E58
  c->r[0]=R32(c->r[3]+0x000001A0u); // 803F2E5C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2E60
  if (crb(c,2)) { goto L_803F2E74; } // 803F2E64
L_803F2E68:;
  c->r[0]=0u+0x00000000u; // 803F2E68
  W32(c->r[3]+0x00000134u,c->r[0]); // 803F2E6C
  goto L_803F2EB4; // 803F2E70
L_803F2E74:;
  {uint32_t ea=c->r[3]+0x0000013Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2E74
  c->r[6]=c->r[1]+0x00000018u; // 803F2E78
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2E7C
  c->r[5]=c->r[1]+0x00000020u; // 803F2E80
  {uint32_t ea=c->r[3]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2E84
  {uint32_t ea=c->r[3]+0x0000019Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2E88
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803F2E8C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803F2E90
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F2E94
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2E98
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803F2E9C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2EA0
  {uint32_t ea=c->r[3]+0x00000138u; psq_store(c,1,ea,0,6);} // 803F2EA4
  {uint32_t ea=c->r[3]+0x0000013Au; psq_store(c,0,ea,0,6);} // 803F2EA8
  c->r[0]=0u+0x00000001u; // 803F2EAC
  W32(c->r[3]+0x00000134u,c->r[0]); // 803F2EB0
L_803F2EB4:;
  c->r[0]=R32(c->r[3]+0x000001C8u); // 803F2EB4
  cmpu(c,0,c->r[0],c->r[4]); // 803F2EB8
  if (!crb(c,2)) { goto L_803F2EC8; } // 803F2EBC
  c->r[0]=0u+0x00000000u; // 803F2EC0
  W32(c->r[3]+0x000001C8u,c->r[0]); // 803F2EC4
L_803F2EC8:;
  c->r[0]=R32(c->r[3]+0x000001E8u); // 803F2EC8
  cmpu(c,0,c->r[0],c->r[4]); // 803F2ECC
  if (!crb(c,2)) { goto L_803F2EDC; } // 803F2ED0
  c->r[0]=0u+0x00000000u; // 803F2ED4
  W32(c->r[3]+0x000001E8u,c->r[0]); // 803F2ED8
L_803F2EDC:;
  c->r[0]=R32(c->r[3]+0x00000208u); // 803F2EDC
  cmpu(c,0,c->r[0],c->r[4]); // 803F2EE0
  if (!crb(c,2)) { goto L_803F2EF0; } // 803F2EE4
  c->r[0]=0u+0x00000000u; // 803F2EE8
  W32(c->r[3]+0x00000208u,c->r[0]); // 803F2EEC
L_803F2EF0:;
  c->r[0]=R32(c->r[3]+0x00000228u); // 803F2EF0
  cmpu(c,0,c->r[0],c->r[4]); // 803F2EF4
  if (!crb(c,2)) { goto L_803F2F04; } // 803F2EF8
  c->r[0]=0u+0x00000000u; // 803F2EFC
  W32(c->r[3]+0x00000228u,c->r[0]); // 803F2F00
L_803F2F04:;
  c->r[0]=R32(c->r[3]+0x000001C8u); // 803F2F04
  cmps(c,0,(int32_t)c->r[0],0); // 803F2F08
  if (!crb(c,2)) { goto L_803F2F34; } // 803F2F0C
  c->r[0]=R32(c->r[3]+0x000001E8u); // 803F2F10
  cmps(c,0,(int32_t)c->r[0],0); // 803F2F14
  if (!crb(c,2)) { goto L_803F2F34; } // 803F2F18
  c->r[0]=R32(c->r[3]+0x00000208u); // 803F2F1C
  cmps(c,0,(int32_t)c->r[0],0); // 803F2F20
  if (!crb(c,2)) { goto L_803F2F34; } // 803F2F24
  c->r[0]=R32(c->r[3]+0x00000228u); // 803F2F28
  cmps(c,0,(int32_t)c->r[0],0); // 803F2F2C
  if (crb(c,2)) { goto L_803F2F40; } // 803F2F30
L_803F2F34:;
  c->r[0]=0u+0x00000000u; // 803F2F34
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803F2F38
  goto L_803F2F80; // 803F2F3C
L_803F2F40:;
  {uint32_t ea=c->r[3]+0x000001C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F2F40
  c->r[5]=c->r[1]+0x00000008u; // 803F2F44
  {uint32_t ea=c->r[3]+0x000001E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F2F48
  c->r[4]=c->r[1]+0x00000010u; // 803F2F4C
  {uint32_t ea=c->r[3]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F2F50
  {uint32_t ea=c->r[3]+0x00000224u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F2F54
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 803F2F58
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803F2F5C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F2F60
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F2F64
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803F2F68
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F2F6C
  {uint32_t ea=c->r[3]+0x000001C0u; psq_store(c,1,ea,0,6);} // 803F2F70
  {uint32_t ea=c->r[3]+0x000001C2u; psq_store(c,0,ea,0,6);} // 803F2F74
  c->r[0]=0u+0x00000001u; // 803F2F78
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803F2F7C
L_803F2F80:;
  c->r[1]=c->r[1]+0x00000040u; // 803F2F80
  return; // 803F2F84
}

// fn_803F2F88
void f_803F2F88(Ctx* __restrict c) {
  trace_call(0x803F2F88u);
  c->r[3]=0u+0x00000005u; // 803F2F88
  return; // 803F2F8C
}

// fn_803F2F90
void f_803F2F90(Ctx* __restrict c) {
  trace_call(0x803F2F90u);
  return; // 803F2F90
}

// fn_803F2F94
void f_803F2F94(Ctx* __restrict c) {
  trace_call(0x803F2F94u);
  return; // 803F2F94
}

// fn_803F2F98
void f_803F2F98(Ctx* __restrict c) {
  trace_call(0x803F2F98u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F2F98
  c->r[0]=0u+0x00000000u; // 803F2F9C
  c->r[5]=R32(c->r[3]+0x00000098u); // 803F2FA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F2FA4
  cmps(c,0,(int32_t)c->r[5],0); // 803F2FA8
  if (crb(c,2)) { goto L_803F2FBC; } // 803F2FAC
  c->r[0]=0u+0x00000001u; // 803F2FB0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F2FB4
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F2FB8
L_803F2FBC:;
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 803F2FBC
  cmps(c,0,(int32_t)c->r[7],0); // 803F2FC0
  if (crb(c,2)) { goto L_803F2FE0; } // 803F2FC4
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2FC8
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2FCC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2FD0
  c->r[6]=c->r[6]+0x00000001u; // 803F2FD4
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2FD8
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F2FDC
L_803F2FE0:;
  c->r[7]=R32(c->r[3]+0x000000A0u); // 803F2FE0
  cmps(c,0,(int32_t)c->r[7],0); // 803F2FE4
  if (crb(c,2)) { goto L_803F3004; } // 803F2FE8
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F2FEC
  c->r[5]=c->r[1]+0x0000000Cu; // 803F2FF0
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F2FF4
  c->r[6]=c->r[6]+0x00000001u; // 803F2FF8
  W32(c->r[5]+c->r[0],c->r[7]); // 803F2FFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3000
L_803F3004:;
  c->r[6]=R32(c->r[3]+0x000000A4u); // 803F3004
  cmps(c,0,(int32_t)c->r[6],0); // 803F3008
  if (crb(c,2)) { goto L_803F3028; } // 803F300C
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F3010
  c->r[3]=c->r[1]+0x0000000Cu; // 803F3014
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F3018
  c->r[5]=c->r[5]+0x00000001u; // 803F301C
  W32(c->r[3]+c->r[0],c->r[6]); // 803F3020
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F3024
L_803F3028:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F3028
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F302C
  if (crb(c,0)) { goto L_803F303C; } // 803F3030
  c->r[3]=0u+0x00000000u; // 803F3034
  goto L_803F3048; // 803F3038
L_803F303C:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F303C
  c->r[3]=c->r[1]+0x0000000Cu; // 803F3040
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F3044
L_803F3048:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F3048
  return; // 803F304C
}

// fn_803F3050
void f_803F3050(Ctx* __restrict c) {
  trace_call(0x803F3050u);
  c->r[5]=R32(c->r[3]+0x00000098u); // 803F3050
  c->r[0]=0u+0x00000000u; // 803F3054
  cmpu(c,0,c->r[5],c->r[4]); // 803F3058
  if (!crb(c,2)) { goto L_803F3068; } // 803F305C
  W32(c->r[3]+0x00000098u,c->r[0]); // 803F3060
  W32(c->r[3]+0x000000A8u,c->r[0]); // 803F3064
L_803F3068:;
  c->r[5]=R32(c->r[3]+0x0000009Cu); // 803F3068
  cmpu(c,0,c->r[5],c->r[4]); // 803F306C
  if (!crb(c,2)) { goto L_803F307C; } // 803F3070
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F3074
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F3078
L_803F307C:;
  c->r[3]=c->r[3]+0x00000008u; // 803F307C
  c->r[5]=R32(c->r[3]+0x00000098u); // 803F3080
  cmpu(c,0,c->r[5],c->r[4]); // 803F3084
  if (!crb(c,2)) { goto L_803F3094; } // 803F3088
  W32(c->r[3]+0x00000098u,c->r[0]); // 803F308C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 803F3090
L_803F3094:;
  c->r[5]=R32(c->r[3]+0x0000009Cu); // 803F3094
  cmpu(c,0,c->r[5],c->r[4]); // 803F3098
  if (!crb(c,2)) return; // 803F309C
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F30A0
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803F30A4
  return; // 803F30A8
}

// fn_803F30AC
void f_803F30AC(Ctx* __restrict c) {
  trace_call(0x803F30ACu);
  c->r[3]=0u+0x00000004u; // 803F30AC
  return; // 803F30B0
}

// fn_803F30B4
void f_803F30B4(Ctx* __restrict c) {
  trace_call(0x803F30B4u);
  return; // 803F30B4
}

// fn_803F30B8
void f_803F30B8(Ctx* __restrict c) {
  trace_call(0x803F30B8u);
  return; // 803F30B8
}

// fn_803F30BC
void f_803F30BC(Ctx* __restrict c) {
  trace_call(0x803F30BCu);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F30BC
  c->r[0]=0u+0x00000000u; // 803F30C0
  c->r[3]=R32(c->r[3]+0x0000009Cu); // 803F30C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F30C8
  cmps(c,0,(int32_t)c->r[3],0); // 803F30CC
  if (crb(c,2)) { goto L_803F30E0; } // 803F30D0
  c->r[0]=0u+0x00000001u; // 803F30D4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803F30D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F30DC
L_803F30E0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F30E0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F30E4
  if (crb(c,0)) { goto L_803F30F4; } // 803F30E8
  c->r[3]=0u+0x00000000u; // 803F30EC
  goto L_803F3100; // 803F30F0
L_803F30F4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F30F4
  c->r[3]=c->r[1]+0x0000000Cu; // 803F30F8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F30FC
L_803F3100:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F3100
  return; // 803F3104
}

// fn_803F3108
void f_803F3108(Ctx* __restrict c) {
  trace_call(0x803F3108u);
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F3108
  cmpu(c,0,c->r[0],c->r[4]); // 803F310C
  if (!crb(c,2)) return; // 803F3110
  c->r[0]=0u+0x00000000u; // 803F3114
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F3118
  return; // 803F311C
}

// fn_803F3120
void f_803F3120(Ctx* __restrict c) {
  trace_call(0x803F3120u);
  c->r[3]=0u+0x00000003u; // 803F3120
  return; // 803F3124
}

// fn_803F3128
void f_803F3128(Ctx* __restrict c) {
  trace_call(0x803F3128u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3128
  {uint32_t ea=c->r[3]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F312C
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F3130
  c->f[0]=-c->f[0]; // 803F3134
  c->r[12]=R32(c->r[3]+0x000000E4u); // 803F3138
  c->r[7]=R32(c->r[3]+0x00000104u); // 803F313C
  c->r[11]=R32(c->r[3]+0x000000E8u); // 803F3140
  c->r[6]=R32(c->r[3]+0x00000108u); // 803F3144
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[4]=c->ps1[4]=RF32(ea);} // 803F3148
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F314C
  c->r[10]=R32(c->r[3]+0x000000F0u); // 803F3150
  c->r[5]=R32(c->r[3]+0x00000110u); // 803F3154
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3158
  {uint32_t ea=c->r[3]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F315C
  c->r[9]=R32(c->r[3]+0x000000F8u); // 803F3160
  c->r[4]=R32(c->r[3]+0x00000118u); // 803F3164
  c->r[8]=R32(c->r[3]+0x000000FCu); // 803F3168
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 803F316C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 803F3170
  W32(c->r[1]+0x0000000Cu,c->r[12]); // 803F3174
  W32(c->r[1]+0x00000010u,c->r[11]); // 803F3178
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 803F317C
  W32(c->r[1]+0x00000018u,c->r[10]); // 803F3180
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 803F3184
  W32(c->r[1]+0x00000020u,c->r[9]); // 803F3188
  W32(c->r[1]+0x00000024u,c->r[8]); // 803F318C
  W32(c->r[3]+0x000000E4u,c->r[7]); // 803F3190
  W32(c->r[3]+0x000000E8u,c->r[6]); // 803F3194
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[2]);} // 803F3198
  W32(c->r[3]+0x000000F0u,c->r[5]); // 803F319C
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[1]);} // 803F31A0
  W32(c->r[3]+0x000000F8u,c->r[4]); // 803F31A4
  W32(c->r[3]+0x000000FCu,c->r[0]); // 803F31A8
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 803F31AC
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[5]);} // 803F31B0
  W32(c->r[3]+0x00000104u,c->r[12]); // 803F31B4
  W32(c->r[3]+0x00000108u,c->r[11]); // 803F31B8
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[4]);} // 803F31BC
  W32(c->r[3]+0x00000110u,c->r[10]); // 803F31C0
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[3]);} // 803F31C4
  W32(c->r[3]+0x00000118u,c->r[9]); // 803F31C8
  W32(c->r[3]+0x0000011Cu,c->r[8]); // 803F31CC
  c->r[1]=c->r[1]+0x00000030u; // 803F31D0
  return; // 803F31D4
}

// fn_803F31D8
void f_803F31D8(Ctx* __restrict c) {
  trace_call(0x803F31D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F31D8
  c->r[0]=c->lr; // 803F31DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F31E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F31E4
  c->r[31]=c->r[3]|c->r[3]; // 803F31E8
  c->r[0]=R32(c->r[3]+0x000000BCu); // 803F31EC
  cmps(c,0,(int32_t)c->r[0],0); // 803F31F0
  if (!crb(c,2)) { goto L_803F3200; } // 803F31F4
  c->r[3]=0u+0x00000000u; // 803F31F8
  goto L_803F3220; // 803F31FC
L_803F3200:;
  c->r[3]=c->r[0]|c->r[0]; // 803F3200
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F3204
  c->r[12]=R32(c->r[12]+0x00000034u); // 803F3208
  c->ctr=c->r[12]; // 803F320C
  if (true) { c->lr=0x803F3214u; dispatch(c,c->ctr); } // 803F3210
  c->r[0]=R32(c->r[31]+0x00000068u); // 803F3214
  c->r[3]=c->r[0]|c->r[3]; // 803F3218
  W32(c->r[31]+0x00000068u,c->r[3]); // 803F321C
L_803F3220:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3224
  c->lr=c->r[0]; // 803F3228
  c->r[1]=c->r[1]+0x00000010u; // 803F322C
  return; // 803F3230
}

// fn_803F3234
void f_803F3234(Ctx* __restrict c) {
  trace_call(0x803F3234u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3234
  c->r[0]=0u+0x00000000u; // 803F3238
  c->r[5]=R32(c->r[3]+0x000000BCu); // 803F323C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F3240
  cmps(c,0,(int32_t)c->r[5],0); // 803F3244
  if (crb(c,2)) { goto L_803F3258; } // 803F3248
  c->r[0]=0u+0x00000001u; // 803F324C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F3250
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F3254
L_803F3258:;
  c->r[7]=R32(c->r[3]+0x0000018Cu); // 803F3258
  cmps(c,0,(int32_t)c->r[7],0); // 803F325C
  if (crb(c,2)) { goto L_803F327C; } // 803F3260
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3264
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3268
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F326C
  c->r[6]=c->r[6]+0x00000001u; // 803F3270
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3274
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3278
L_803F327C:;
  c->r[7]=R32(c->r[3]+0x000001B4u); // 803F327C
  cmps(c,0,(int32_t)c->r[7],0); // 803F3280
  if (crb(c,2)) { goto L_803F32A0; } // 803F3284
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3288
  c->r[5]=c->r[1]+0x0000000Cu; // 803F328C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3290
  c->r[6]=c->r[6]+0x00000001u; // 803F3294
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3298
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F329C
L_803F32A0:;
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 803F32A0
  cmps(c,0,(int32_t)c->r[7],0); // 803F32A4
  if (crb(c,2)) { goto L_803F32C4; } // 803F32A8
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F32AC
  c->r[5]=c->r[1]+0x0000000Cu; // 803F32B0
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F32B4
  c->r[6]=c->r[6]+0x00000001u; // 803F32B8
  W32(c->r[5]+c->r[0],c->r[7]); // 803F32BC
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F32C0
L_803F32C4:;
  c->r[7]=R32(c->r[3]+0x000000C4u); // 803F32C4
  cmps(c,0,(int32_t)c->r[7],0); // 803F32C8
  if (crb(c,2)) { goto L_803F32E8; } // 803F32CC
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F32D0
  c->r[5]=c->r[1]+0x0000000Cu; // 803F32D4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F32D8
  c->r[6]=c->r[6]+0x00000001u; // 803F32DC
  W32(c->r[5]+c->r[0],c->r[7]); // 803F32E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F32E4
L_803F32E8:;
  c->r[7]=R32(c->r[3]+0x000000E4u); // 803F32E8
  cmps(c,0,(int32_t)c->r[7],0); // 803F32EC
  if (crb(c,2)) { goto L_803F330C; } // 803F32F0
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F32F4
  c->r[5]=c->r[1]+0x0000000Cu; // 803F32F8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F32FC
  c->r[6]=c->r[6]+0x00000001u; // 803F3300
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3304
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3308
L_803F330C:;
  c->r[7]=R32(c->r[3]+0x00000104u); // 803F330C
  cmps(c,0,(int32_t)c->r[7],0); // 803F3310
  if (crb(c,2)) { goto L_803F3330; } // 803F3314
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3318
  c->r[5]=c->r[1]+0x0000000Cu; // 803F331C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3320
  c->r[6]=c->r[6]+0x00000001u; // 803F3324
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3328
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F332C
L_803F3330:;
  c->r[7]=R32(c->r[3]+0x00000124u); // 803F3330
  cmps(c,0,(int32_t)c->r[7],0); // 803F3334
  if (crb(c,2)) { goto L_803F3354; } // 803F3338
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F333C
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3340
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3344
  c->r[6]=c->r[6]+0x00000001u; // 803F3348
  W32(c->r[5]+c->r[0],c->r[7]); // 803F334C
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3350
L_803F3354:;
  c->r[7]=R32(c->r[3]+0x0000014Cu); // 803F3354
  cmps(c,0,(int32_t)c->r[7],0); // 803F3358
  if (crb(c,2)) { goto L_803F3378; } // 803F335C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3360
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3364
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3368
  c->r[6]=c->r[6]+0x00000001u; // 803F336C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3370
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3374
L_803F3378:;
  c->r[7]=R32(c->r[3]+0x00000198u); // 803F3378
  cmps(c,0,(int32_t)c->r[7],0); // 803F337C
  if (crb(c,2)) { goto L_803F339C; } // 803F3380
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3384
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3388
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F338C
  c->r[6]=c->r[6]+0x00000001u; // 803F3390
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3394
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3398
L_803F339C:;
  c->r[6]=R32(c->r[3]+0x00000170u); // 803F339C
  cmps(c,0,(int32_t)c->r[6],0); // 803F33A0
  if (crb(c,2)) { goto L_803F33C0; } // 803F33A4
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F33A8
  c->r[3]=c->r[1]+0x0000000Cu; // 803F33AC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F33B0
  c->r[5]=c->r[5]+0x00000001u; // 803F33B4
  W32(c->r[3]+c->r[0],c->r[6]); // 803F33B8
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F33BC
L_803F33C0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F33C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F33C4
  if (crb(c,0)) { goto L_803F33D4; } // 803F33C8
  c->r[3]=0u+0x00000000u; // 803F33CC
  goto L_803F33E0; // 803F33D0
L_803F33D4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F33D4
  c->r[3]=c->r[1]+0x0000000Cu; // 803F33D8
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F33DC
L_803F33E0:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F33E0
  return; // 803F33E4
}

// fn_803F33E8
void f_803F33E8(Ctx* __restrict c) {
  trace_call(0x803F33E8u);
  c->r[0]=R32(c->r[3]+0x000000BCu); // 803F33E8
  cmpu(c,0,c->r[0],c->r[4]); // 803F33EC
  if (!crb(c,2)) { goto L_803F33FC; } // 803F33F0
  c->r[0]=0u+0x00000000u; // 803F33F4
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803F33F8
L_803F33FC:;
  c->r[0]=R32(c->r[3]+0x0000018Cu); // 803F33FC
  cmpu(c,0,c->r[0],c->r[4]); // 803F3400
  if (!crb(c,2)) { goto L_803F3410; } // 803F3404
  c->r[0]=0u+0x00000000u; // 803F3408
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 803F340C
L_803F3410:;
  c->r[0]=R32(c->r[3]+0x000001B4u); // 803F3410
  cmpu(c,0,c->r[0],c->r[4]); // 803F3414
  if (!crb(c,2)) { goto L_803F3424; } // 803F3418
  c->r[0]=0u+0x00000000u; // 803F341C
  W32(c->r[3]+0x000001B4u,c->r[0]); // 803F3420
L_803F3424:;
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F3424
  cmpu(c,0,c->r[0],c->r[4]); // 803F3428
  if (!crb(c,2)) { goto L_803F3438; } // 803F342C
  c->r[0]=0u+0x00000000u; // 803F3430
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F3434
L_803F3438:;
  c->r[0]=R32(c->r[3]+0x000000C4u); // 803F3438
  cmpu(c,0,c->r[0],c->r[4]); // 803F343C
  if (!crb(c,2)) { goto L_803F344C; } // 803F3440
  c->r[0]=0u+0x00000000u; // 803F3444
  W32(c->r[3]+0x000000C4u,c->r[0]); // 803F3448
L_803F344C:;
  c->r[0]=R32(c->r[3]+0x000000E4u); // 803F344C
  cmpu(c,0,c->r[0],c->r[4]); // 803F3450
  if (!crb(c,2)) { goto L_803F3460; } // 803F3454
  c->r[0]=0u+0x00000000u; // 803F3458
  W32(c->r[3]+0x000000E4u,c->r[0]); // 803F345C
L_803F3460:;
  c->r[0]=R32(c->r[3]+0x00000104u); // 803F3460
  cmpu(c,0,c->r[0],c->r[4]); // 803F3464
  if (!crb(c,2)) { goto L_803F3474; } // 803F3468
  c->r[0]=0u+0x00000000u; // 803F346C
  W32(c->r[3]+0x00000104u,c->r[0]); // 803F3470
L_803F3474:;
  c->r[0]=R32(c->r[3]+0x00000124u); // 803F3474
  cmpu(c,0,c->r[0],c->r[4]); // 803F3478
  if (!crb(c,2)) { goto L_803F3488; } // 803F347C
  c->r[0]=0u+0x00000000u; // 803F3480
  W32(c->r[3]+0x00000124u,c->r[0]); // 803F3484
L_803F3488:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 803F3488
  cmpu(c,0,c->r[0],c->r[4]); // 803F348C
  if (!crb(c,2)) { goto L_803F349C; } // 803F3490
  c->r[0]=0u+0x00000000u; // 803F3494
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 803F3498
L_803F349C:;
  c->r[0]=R32(c->r[3]+0x00000198u); // 803F349C
  cmpu(c,0,c->r[0],c->r[4]); // 803F34A0
  if (!crb(c,2)) { goto L_803F34B0; } // 803F34A4
  c->r[0]=0u+0x00000000u; // 803F34A8
  W32(c->r[3]+0x00000198u,c->r[0]); // 803F34AC
L_803F34B0:;
  c->r[0]=R32(c->r[3]+0x00000170u); // 803F34B0
  cmpu(c,0,c->r[0],c->r[4]); // 803F34B4
  if (!crb(c,2)) return; // 803F34B8
  c->r[0]=0u+0x00000000u; // 803F34BC
  W32(c->r[3]+0x00000170u,c->r[0]); // 803F34C0
  return; // 803F34C4
}

// fn_803F34C8
void f_803F34C8(Ctx* __restrict c) {
  trace_call(0x803F34C8u);
  c->r[3]=0u+0x00000002u; // 803F34C8
  return; // 803F34CC
}

// fn_803F34D0
void f_803F34D0(Ctx* __restrict c) {
  trace_call(0x803F34D0u);
  c->r[3]=R32(c->r[3]+0x00000168u); // 803F34D0
  return; // 803F34D4
}

// fn_803F34D8
void f_803F34D8(Ctx* __restrict c) {
  trace_call(0x803F34D8u);
  c->r[0]=R32(c->r[3]+0x00000190u); // 803F34D8
  cmps(c,0,(int32_t)c->r[0],2); // 803F34DC
  if (!crb(c,2)) { goto L_803F34F0; } // 803F34E0
  c->r[0]=0u+0x00000001u; // 803F34E4
  W32(c->r[3]+0x00000190u,c->r[0]); // 803F34E8
  return; // 803F34EC
L_803F34F0:;
  cmps(c,0,(int32_t)c->r[0],1); // 803F34F0
  if (!crb(c,2)) return; // 803F34F4
  c->r[0]=0u+0x00000002u; // 803F34F8
  W32(c->r[3]+0x00000190u,c->r[0]); // 803F34FC
  return; // 803F3500
}

// fn_803F3504
void f_803F3504(Ctx* __restrict c) {
  trace_call(0x803F3504u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3504
  c->r[0]=0u+0x00000000u; // 803F3508
  c->r[5]=R32(c->r[3]+0x00000180u); // 803F350C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F3510
  cmps(c,0,(int32_t)c->r[5],0); // 803F3514
  if (crb(c,2)) { goto L_803F3528; } // 803F3518
  c->r[0]=0u+0x00000001u; // 803F351C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F3520
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F3524
L_803F3528:;
  c->r[7]=R32(c->r[3]+0x00000184u); // 803F3528
  cmps(c,0,(int32_t)c->r[7],0); // 803F352C
  if (crb(c,2)) { goto L_803F354C; } // 803F3530
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3534
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3538
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F353C
  c->r[6]=c->r[6]+0x00000001u; // 803F3540
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3544
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3548
L_803F354C:;
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 803F354C
  cmps(c,0,(int32_t)c->r[7],0); // 803F3550
  if (crb(c,2)) { goto L_803F3570; } // 803F3554
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3558
  c->r[5]=c->r[1]+0x0000000Cu; // 803F355C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3560
  c->r[6]=c->r[6]+0x00000001u; // 803F3564
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3568
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F356C
L_803F3570:;
  c->r[7]=R32(c->r[3]+0x000000BCu); // 803F3570
  cmps(c,0,(int32_t)c->r[7],0); // 803F3574
  if (crb(c,2)) { goto L_803F3594; } // 803F3578
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F357C
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3580
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3584
  c->r[6]=c->r[6]+0x00000001u; // 803F3588
  W32(c->r[5]+c->r[0],c->r[7]); // 803F358C
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3590
L_803F3594:;
  c->r[7]=R32(c->r[3]+0x000001D8u); // 803F3594
  cmps(c,0,(int32_t)c->r[7],0); // 803F3598
  if (crb(c,2)) { goto L_803F35B8; } // 803F359C
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F35A0
  c->r[5]=c->r[1]+0x0000000Cu; // 803F35A4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F35A8
  c->r[6]=c->r[6]+0x00000001u; // 803F35AC
  W32(c->r[5]+c->r[0],c->r[7]); // 803F35B0
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F35B4
L_803F35B8:;
  c->r[5]=R32(c->r[3]+0x0000021Cu); // 803F35B8
  cmps(c,0,(int32_t)c->r[5],0); // 803F35BC
  if (crb(c,2)) { goto L_803F35E8; } // 803F35C0
  c->r[7]=R32(c->r[5]+0x00000004u); // 803F35C4
  cmps(c,0,(int32_t)c->r[7],0); // 803F35C8
  if (crb(c,2)) { goto L_803F35E8; } // 803F35CC
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F35D0
  c->r[5]=c->r[1]+0x0000000Cu; // 803F35D4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F35D8
  c->r[6]=c->r[6]+0x00000001u; // 803F35DC
  W32(c->r[5]+c->r[0],c->r[7]); // 803F35E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F35E4
L_803F35E8:;
  c->r[5]=R32(c->r[3]+0x00000220u); // 803F35E8
  cmps(c,0,(int32_t)c->r[5],0); // 803F35EC
  if (crb(c,2)) { goto L_803F3618; } // 803F35F0
  c->r[7]=R32(c->r[5]+0x00000004u); // 803F35F4
  cmps(c,0,(int32_t)c->r[7],0); // 803F35F8
  if (crb(c,2)) { goto L_803F3618; } // 803F35FC
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3600
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3604
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3608
  c->r[6]=c->r[6]+0x00000001u; // 803F360C
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3610
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3614
L_803F3618:;
  c->r[7]=R32(c->r[3]+0x000000DCu); // 803F3618
  cmps(c,0,(int32_t)c->r[7],0); // 803F361C
  if (crb(c,2)) { goto L_803F363C; } // 803F3620
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3624
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3628
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F362C
  c->r[6]=c->r[6]+0x00000001u; // 803F3630
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3634
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3638
L_803F363C:;
  c->r[7]=R32(c->r[3]+0x000000FCu); // 803F363C
  cmps(c,0,(int32_t)c->r[7],0); // 803F3640
  if (crb(c,2)) { goto L_803F3660; } // 803F3644
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F3648
  c->r[5]=c->r[1]+0x0000000Cu; // 803F364C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3650
  c->r[6]=c->r[6]+0x00000001u; // 803F3654
  W32(c->r[5]+c->r[0],c->r[7]); // 803F3658
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F365C
L_803F3660:;
  c->r[7]=R32(c->r[3]+0x0000011Cu); // 803F3660
  cmps(c,0,(int32_t)c->r[7],0); // 803F3664
  if (crb(c,2)) { goto L_803F3684; } // 803F3668
  c->r[6]=R32(c->r[1]+0x00000008u); // 803F366C
  c->r[5]=c->r[1]+0x0000000Cu; // 803F3670
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803F3674
  c->r[6]=c->r[6]+0x00000001u; // 803F3678
  W32(c->r[5]+c->r[0],c->r[7]); // 803F367C
  W32(c->r[1]+0x00000008u,c->r[6]); // 803F3680
L_803F3684:;
  c->r[6]=R32(c->r[3]+0x0000013Cu); // 803F3684
  cmps(c,0,(int32_t)c->r[6],0); // 803F3688
  if (crb(c,2)) { goto L_803F36A8; } // 803F368C
  c->r[5]=R32(c->r[1]+0x00000008u); // 803F3690
  c->r[3]=c->r[1]+0x0000000Cu; // 803F3694
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803F3698
  c->r[5]=c->r[5]+0x00000001u; // 803F369C
  W32(c->r[3]+c->r[0],c->r[6]); // 803F36A0
  W32(c->r[1]+0x00000008u,c->r[5]); // 803F36A4
L_803F36A8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803F36A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803F36AC
  if (crb(c,0)) { goto L_803F36BC; } // 803F36B0
  c->r[3]=0u+0x00000000u; // 803F36B4
  goto L_803F36C8; // 803F36B8
L_803F36BC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F36BC
  c->r[3]=c->r[1]+0x0000000Cu; // 803F36C0
  c->r[3]=R32(c->r[3]+c->r[0]); // 803F36C4
L_803F36C8:;
  c->r[1]=c->r[1]+0x000001A0u; // 803F36C8
  return; // 803F36CC
}

// fn_803F36D0
void f_803F36D0(Ctx* __restrict c) {
  trace_call(0x803F36D0u);
  c->r[0]=R32(c->r[3]+0x00000180u); // 803F36D0
  cmpu(c,0,c->r[0],c->r[4]); // 803F36D4
  if (!crb(c,2)) { goto L_803F36E4; } // 803F36D8
  c->r[0]=0u+0x00000000u; // 803F36DC
  W32(c->r[3]+0x00000180u,c->r[0]); // 803F36E0
L_803F36E4:;
  c->r[0]=R32(c->r[3]+0x00000184u); // 803F36E4
  cmpu(c,0,c->r[0],c->r[4]); // 803F36E8
  if (!crb(c,2)) { goto L_803F36F8; } // 803F36EC
  c->r[0]=0u+0x00000000u; // 803F36F0
  W32(c->r[3]+0x00000184u,c->r[0]); // 803F36F4
L_803F36F8:;
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803F36F8
  cmpu(c,0,c->r[0],c->r[4]); // 803F36FC
  if (!crb(c,2)) { goto L_803F370C; } // 803F3700
  c->r[0]=0u+0x00000000u; // 803F3704
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803F3708
L_803F370C:;
  c->r[0]=R32(c->r[3]+0x000000BCu); // 803F370C
  cmpu(c,0,c->r[0],c->r[4]); // 803F3710
  if (!crb(c,2)) { goto L_803F3720; } // 803F3714
  c->r[0]=0u+0x00000000u; // 803F3718
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803F371C
L_803F3720:;
  c->r[0]=R32(c->r[3]+0x000001D8u); // 803F3720
  cmpu(c,0,c->r[0],c->r[4]); // 803F3724
  if (!crb(c,2)) { goto L_803F3734; } // 803F3728
  c->r[0]=0u+0x00000000u; // 803F372C
  W32(c->r[3]+0x000001D8u,c->r[0]); // 803F3730
L_803F3734:;
  c->r[5]=R32(c->r[3]+0x0000021Cu); // 803F3734
  cmps(c,0,(int32_t)c->r[5],0); // 803F3738
  if (crb(c,2)) { goto L_803F3754; } // 803F373C
  c->r[0]=R32(c->r[5]+0x00000004u); // 803F3740
  cmpu(c,0,c->r[0],c->r[4]); // 803F3744
  if (!crb(c,2)) { goto L_803F3754; } // 803F3748
  c->r[0]=0u+0x00000000u; // 803F374C
  W32(c->r[5]+0x00000004u,c->r[0]); // 803F3750
L_803F3754:;
  c->r[3]=R32(c->r[3]+0x00000220u); // 803F3754
  cmps(c,0,(int32_t)c->r[3],0); // 803F3758
  if (crb(c,2)) return; // 803F375C
  c->r[0]=R32(c->r[3]+0x00000004u); // 803F3760
  cmpu(c,0,c->r[0],c->r[4]); // 803F3764
  if (!crb(c,2)) return; // 803F3768
  c->r[0]=0u+0x00000000u; // 803F376C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803F3770
  return; // 803F3774
}

// fn_803F3778
void f_803F3778(Ctx* __restrict c) {
  trace_call(0x803F3778u);
  c->r[3]=0u+0x00000001u; // 803F3778
  return; // 803F377C
}

// fn_803F3780
void f_803F3780(Ctx* __restrict c) {
  trace_call(0x803F3780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3780
  c->r[0]=c->lr; // 803F3784
  cmps(c,0,(int32_t)c->r[3],0); // 803F3788
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F378C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3790
  c->r[31]=c->r[4]|c->r[4]; // 803F3794
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F3798
  c->r[30]=c->r[3]|c->r[3]; // 803F379C
  if (crb(c,2)) { goto L_803F380C; } // 803F37A0
  c->r[0]=R32(c->r[3]+0x0000021Cu); // 803F37A4
  c->r[4]=0u+0x80470000u; // 803F37A8
  c->r[4]=c->r[4]+0xFFFFA1F8u; // 803F37AC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F37B0
  cmps(c,0,(int32_t)c->r[0],0); // 803F37B4
  if (crb(c,2)) { goto L_803F37C4; } // 803F37B8
  c->r[3]=c->r[0]|c->r[0]; // 803F37BC
  c->lr=0x803F37C4u; f_803FE694(c); // 803F37C0
L_803F37C4:;
  c->r[3]=R32(c->r[30]+0x00000220u); // 803F37C4
  cmps(c,0,(int32_t)c->r[3],0); // 803F37C8
  if (crb(c,2)) { goto L_803F37D4; } // 803F37CC
  c->lr=0x803F37D4u; f_803FE694(c); // 803F37D0
L_803F37D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803F37D4
  if (crb(c,2)) { goto L_803F37FC; } // 803F37D8
  c->r[3]=R32(c->r[30]+0x00000080u); // 803F37DC
  c->r[4]=0u+0x80470000u; // 803F37E0
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F37E4
  W32(c->r[30]+0x00000000u,c->r[4]); // 803F37E8
  cmps(c,0,(int32_t)c->r[3],0); // 803F37EC
  if (crb(c,2)) { goto L_803F37FC; } // 803F37F0
  c->r[4]=0u+0x00000001u; // 803F37F4
  c->lr=0x803F37FCu; f_80402948(c); // 803F37F8
L_803F37FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F37FC
  if (!crb(c,1)) { goto L_803F380C; } // 803F3800
  c->r[3]=c->r[30]|c->r[30]; // 803F3804
  c->lr=0x803F380Cu; f_803FE694(c); // 803F3808
L_803F380C:;
  c->r[3]=c->r[30]|c->r[30]; // 803F380C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3810
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3814
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3818
  c->lr=c->r[0]; // 803F381C
  c->r[1]=c->r[1]+0x00000010u; // 803F3820
  return; // 803F3824
}

// fn_803F3828
void f_803F3828(Ctx* __restrict c) {
  trace_call(0x803F3828u);
  return; // 803F3828
}

// fn_803F382C
void f_803F382C(Ctx* __restrict c) {
  trace_call(0x803F382Cu);
  c->r[3]=0u+0x00000000u; // 803F382C
  return; // 803F3830
}

// fn_803F3834
void f_803F3834(Ctx* __restrict c) {
  trace_call(0x803F3834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3834
  c->r[0]=c->lr; // 803F3838
  cmps(c,0,(int32_t)c->r[3],0); // 803F383C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3840
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3844
  c->r[31]=c->r[4]|c->r[4]; // 803F3848
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F384C
  c->r[30]=c->r[3]|c->r[3]; // 803F3850
  if (crb(c,2)) { goto L_803F3890; } // 803F3854
  if (crb(c,2)) { goto L_803F3880; } // 803F3858
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F385C
  c->r[4]=0u+0x80470000u; // 803F3860
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3864
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3868
  cmps(c,0,(int32_t)c->r[0],0); // 803F386C
  if (crb(c,2)) { goto L_803F3880; } // 803F3870
  c->r[3]=c->r[0]|c->r[0]; // 803F3874
  c->r[4]=0u+0x00000001u; // 803F3878
  c->lr=0x803F3880u; f_80402948(c); // 803F387C
L_803F3880:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3880
  if (!crb(c,1)) { goto L_803F3890; } // 803F3884
  c->r[3]=c->r[30]|c->r[30]; // 803F3888
  c->lr=0x803F3890u; f_803FE694(c); // 803F388C
L_803F3890:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3894
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3898
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F389C
  c->lr=c->r[0]; // 803F38A0
  c->r[1]=c->r[1]+0x00000010u; // 803F38A4
  return; // 803F38A8
}

// fn_803F38AC
void f_803F38AC(Ctx* __restrict c) {
  trace_call(0x803F38ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F38AC
  c->r[0]=c->lr; // 803F38B0
  cmps(c,0,(int32_t)c->r[3],0); // 803F38B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F38B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F38BC
  c->r[31]=c->r[4]|c->r[4]; // 803F38C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F38C4
  c->r[30]=c->r[3]|c->r[3]; // 803F38C8
  if (crb(c,2)) { goto L_803F3908; } // 803F38CC
  if (crb(c,2)) { goto L_803F38F8; } // 803F38D0
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F38D4
  c->r[4]=0u+0x80470000u; // 803F38D8
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F38DC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F38E0
  cmps(c,0,(int32_t)c->r[0],0); // 803F38E4
  if (crb(c,2)) { goto L_803F38F8; } // 803F38E8
  c->r[3]=c->r[0]|c->r[0]; // 803F38EC
  c->r[4]=0u+0x00000001u; // 803F38F0
  c->lr=0x803F38F8u; f_80402948(c); // 803F38F4
L_803F38F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F38F8
  if (!crb(c,1)) { goto L_803F3908; } // 803F38FC
  c->r[3]=c->r[30]|c->r[30]; // 803F3900
  c->lr=0x803F3908u; f_803FE694(c); // 803F3904
L_803F3908:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F390C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3910
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3914
  c->lr=c->r[0]; // 803F3918
  c->r[1]=c->r[1]+0x00000010u; // 803F391C
  return; // 803F3920
}

// fn_803F3924
void f_803F3924(Ctx* __restrict c) {
  trace_call(0x803F3924u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3924
  c->r[0]=c->lr; // 803F3928
  cmps(c,0,(int32_t)c->r[3],0); // 803F392C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3934
  c->r[31]=c->r[4]|c->r[4]; // 803F3938
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F393C
  c->r[30]=c->r[3]|c->r[3]; // 803F3940
  if (crb(c,2)) { goto L_803F3980; } // 803F3944
  if (crb(c,2)) { goto L_803F3970; } // 803F3948
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F394C
  c->r[4]=0u+0x80470000u; // 803F3950
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3954
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3958
  cmps(c,0,(int32_t)c->r[0],0); // 803F395C
  if (crb(c,2)) { goto L_803F3970; } // 803F3960
  c->r[3]=c->r[0]|c->r[0]; // 803F3964
  c->r[4]=0u+0x00000001u; // 803F3968
  c->lr=0x803F3970u; f_80402948(c); // 803F396C
L_803F3970:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3970
  if (!crb(c,1)) { goto L_803F3980; } // 803F3974
  c->r[3]=c->r[30]|c->r[30]; // 803F3978
  c->lr=0x803F3980u; f_803FE694(c); // 803F397C
L_803F3980:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3980
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3984
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3988
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F398C
  c->lr=c->r[0]; // 803F3990
  c->r[1]=c->r[1]+0x00000010u; // 803F3994
  return; // 803F3998
}

// fn_803F399C
void f_803F399C(Ctx* __restrict c) {
  trace_call(0x803F399Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F399C
  c->r[0]=c->lr; // 803F39A0
  cmps(c,0,(int32_t)c->r[3],0); // 803F39A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F39A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F39AC
  c->r[31]=c->r[4]|c->r[4]; // 803F39B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F39B4
  c->r[30]=c->r[3]|c->r[3]; // 803F39B8
  if (crb(c,2)) { goto L_803F39F8; } // 803F39BC
  if (crb(c,2)) { goto L_803F39E8; } // 803F39C0
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F39C4
  c->r[4]=0u+0x80470000u; // 803F39C8
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F39CC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F39D0
  cmps(c,0,(int32_t)c->r[0],0); // 803F39D4
  if (crb(c,2)) { goto L_803F39E8; } // 803F39D8
  c->r[3]=c->r[0]|c->r[0]; // 803F39DC
  c->r[4]=0u+0x00000001u; // 803F39E0
  c->lr=0x803F39E8u; f_80402948(c); // 803F39E4
L_803F39E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F39E8
  if (!crb(c,1)) { goto L_803F39F8; } // 803F39EC
  c->r[3]=c->r[30]|c->r[30]; // 803F39F0
  c->lr=0x803F39F8u; f_803FE694(c); // 803F39F4
L_803F39F8:;
  c->r[3]=c->r[30]|c->r[30]; // 803F39F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F39FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3A00
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3A04
  c->lr=c->r[0]; // 803F3A08
  c->r[1]=c->r[1]+0x00000010u; // 803F3A0C
  return; // 803F3A10
}

// fn_803F3A14
void f_803F3A14(Ctx* __restrict c) {
  trace_call(0x803F3A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3A14
  c->r[0]=c->lr; // 803F3A18
  cmps(c,0,(int32_t)c->r[3],0); // 803F3A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3A20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3A24
  c->r[31]=c->r[4]|c->r[4]; // 803F3A28
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F3A2C
  c->r[30]=c->r[3]|c->r[3]; // 803F3A30
  if (crb(c,2)) { goto L_803F3A70; } // 803F3A34
  if (crb(c,2)) { goto L_803F3A60; } // 803F3A38
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F3A3C
  c->r[4]=0u+0x80470000u; // 803F3A40
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3A44
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3A48
  cmps(c,0,(int32_t)c->r[0],0); // 803F3A4C
  if (crb(c,2)) { goto L_803F3A60; } // 803F3A50
  c->r[3]=c->r[0]|c->r[0]; // 803F3A54
  c->r[4]=0u+0x00000001u; // 803F3A58
  c->lr=0x803F3A60u; f_80402948(c); // 803F3A5C
L_803F3A60:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3A60
  if (!crb(c,1)) { goto L_803F3A70; } // 803F3A64
  c->r[3]=c->r[30]|c->r[30]; // 803F3A68
  c->lr=0x803F3A70u; f_803FE694(c); // 803F3A6C
L_803F3A70:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3A70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3A74
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3A78
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3A7C
  c->lr=c->r[0]; // 803F3A80
  c->r[1]=c->r[1]+0x00000010u; // 803F3A84
  return; // 803F3A88
}

// fn_803F3A8C
void f_803F3A8C(Ctx* __restrict c) {
  trace_call(0x803F3A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3A8C
  c->r[0]=c->lr; // 803F3A90
  cmps(c,0,(int32_t)c->r[3],0); // 803F3A94
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3A98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3A9C
  c->r[31]=c->r[4]|c->r[4]; // 803F3AA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F3AA4
  c->r[30]=c->r[3]|c->r[3]; // 803F3AA8
  if (crb(c,2)) { goto L_803F3AE8; } // 803F3AAC
  if (crb(c,2)) { goto L_803F3AD8; } // 803F3AB0
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F3AB4
  c->r[4]=0u+0x80470000u; // 803F3AB8
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3ABC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3AC0
  cmps(c,0,(int32_t)c->r[0],0); // 803F3AC4
  if (crb(c,2)) { goto L_803F3AD8; } // 803F3AC8
  c->r[3]=c->r[0]|c->r[0]; // 803F3ACC
  c->r[4]=0u+0x00000001u; // 803F3AD0
  c->lr=0x803F3AD8u; f_80402948(c); // 803F3AD4
L_803F3AD8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3AD8
  if (!crb(c,1)) { goto L_803F3AE8; } // 803F3ADC
  c->r[3]=c->r[30]|c->r[30]; // 803F3AE0
  c->lr=0x803F3AE8u; f_803FE694(c); // 803F3AE4
L_803F3AE8:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3AEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3AF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3AF4
  c->lr=c->r[0]; // 803F3AF8
  c->r[1]=c->r[1]+0x00000010u; // 803F3AFC
  return; // 803F3B00
}

// fn_803F3B04
void f_803F3B04(Ctx* __restrict c) {
  trace_call(0x803F3B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3B04
  c->r[0]=c->lr; // 803F3B08
  cmps(c,0,(int32_t)c->r[3],0); // 803F3B0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3B10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3B14
  c->r[31]=c->r[4]|c->r[4]; // 803F3B18
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F3B1C
  c->r[30]=c->r[3]|c->r[3]; // 803F3B20
  if (crb(c,2)) { goto L_803F3B60; } // 803F3B24
  if (crb(c,2)) { goto L_803F3B50; } // 803F3B28
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F3B2C
  c->r[4]=0u+0x80470000u; // 803F3B30
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3B34
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3B38
  cmps(c,0,(int32_t)c->r[0],0); // 803F3B3C
  if (crb(c,2)) { goto L_803F3B50; } // 803F3B40
  c->r[3]=c->r[0]|c->r[0]; // 803F3B44
  c->r[4]=0u+0x00000001u; // 803F3B48
  c->lr=0x803F3B50u; f_80402948(c); // 803F3B4C
L_803F3B50:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3B50
  if (!crb(c,1)) { goto L_803F3B60; } // 803F3B54
  c->r[3]=c->r[30]|c->r[30]; // 803F3B58
  c->lr=0x803F3B60u; f_803FE694(c); // 803F3B5C
L_803F3B60:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3B60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3B64
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3B68
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3B6C
  c->lr=c->r[0]; // 803F3B70
  c->r[1]=c->r[1]+0x00000010u; // 803F3B74
  return; // 803F3B78
}

// fn_803F3B7C
void f_803F3B7C(Ctx* __restrict c) {
  trace_call(0x803F3B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3B7C
  c->r[0]=c->lr; // 803F3B80
  cmps(c,0,(int32_t)c->r[3],0); // 803F3B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3B88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3B8C
  c->r[31]=c->r[4]|c->r[4]; // 803F3B90
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F3B94
  c->r[30]=c->r[3]|c->r[3]; // 803F3B98
  if (crb(c,2)) { goto L_803F3BD8; } // 803F3B9C
  if (crb(c,2)) { goto L_803F3BC8; } // 803F3BA0
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F3BA4
  c->r[4]=0u+0x80470000u; // 803F3BA8
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3BAC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3BB0
  cmps(c,0,(int32_t)c->r[0],0); // 803F3BB4
  if (crb(c,2)) { goto L_803F3BC8; } // 803F3BB8
  c->r[3]=c->r[0]|c->r[0]; // 803F3BBC
  c->r[4]=0u+0x00000001u; // 803F3BC0
  c->lr=0x803F3BC8u; f_80402948(c); // 803F3BC4
L_803F3BC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3BC8
  if (!crb(c,1)) { goto L_803F3BD8; } // 803F3BCC
  c->r[3]=c->r[30]|c->r[30]; // 803F3BD0
  c->lr=0x803F3BD8u; f_803FE694(c); // 803F3BD4
L_803F3BD8:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3BD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3BDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3BE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3BE4
  c->lr=c->r[0]; // 803F3BE8
  c->r[1]=c->r[1]+0x00000010u; // 803F3BEC
  return; // 803F3BF0
}

// fn_803F3BF4
void f_803F3BF4(Ctx* __restrict c) {
  trace_call(0x803F3BF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3BF4
  c->r[0]=c->lr; // 803F3BF8
  cmps(c,0,(int32_t)c->r[3],0); // 803F3BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3C00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3C04
  c->r[31]=c->r[4]|c->r[4]; // 803F3C08
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F3C0C
  c->r[30]=c->r[3]|c->r[3]; // 803F3C10
  if (crb(c,2)) { goto L_803F3C50; } // 803F3C14
  if (crb(c,2)) { goto L_803F3C40; } // 803F3C18
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F3C1C
  c->r[4]=0u+0x80470000u; // 803F3C20
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3C24
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3C28
  cmps(c,0,(int32_t)c->r[0],0); // 803F3C2C
  if (crb(c,2)) { goto L_803F3C40; } // 803F3C30
  c->r[3]=c->r[0]|c->r[0]; // 803F3C34
  c->r[4]=0u+0x00000001u; // 803F3C38
  c->lr=0x803F3C40u; f_80402948(c); // 803F3C3C
L_803F3C40:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3C40
  if (!crb(c,1)) { goto L_803F3C50; } // 803F3C44
  c->r[3]=c->r[30]|c->r[30]; // 803F3C48
  c->lr=0x803F3C50u; f_803FE694(c); // 803F3C4C
L_803F3C50:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3C54
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3C58
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3C5C
  c->lr=c->r[0]; // 803F3C60
  c->r[1]=c->r[1]+0x00000010u; // 803F3C64
  return; // 803F3C68
}

// fn_803F3C6C
void f_803F3C6C(Ctx* __restrict c) {
  trace_call(0x803F3C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3C6C
  c->r[0]=c->lr; // 803F3C70
  cmps(c,0,(int32_t)c->r[3],0); // 803F3C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F3C78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F3C7C
  c->r[31]=c->r[4]|c->r[4]; // 803F3C80
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F3C84
  c->r[30]=c->r[3]|c->r[3]; // 803F3C88
  if (crb(c,2)) { goto L_803F3CC8; } // 803F3C8C
  if (crb(c,2)) { goto L_803F3CB8; } // 803F3C90
  c->r[0]=R32(c->r[3]+0x00000080u); // 803F3C94
  c->r[4]=0u+0x80470000u; // 803F3C98
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803F3C9C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803F3CA0
  cmps(c,0,(int32_t)c->r[0],0); // 803F3CA4
  if (crb(c,2)) { goto L_803F3CB8; } // 803F3CA8
  c->r[3]=c->r[0]|c->r[0]; // 803F3CAC
  c->r[4]=0u+0x00000001u; // 803F3CB0
  c->lr=0x803F3CB8u; f_80402948(c); // 803F3CB4
L_803F3CB8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F3CB8
  if (!crb(c,1)) { goto L_803F3CC8; } // 803F3CBC
  c->r[3]=c->r[30]|c->r[30]; // 803F3CC0
  c->lr=0x803F3CC8u; f_803FE694(c); // 803F3CC4
L_803F3CC8:;
  c->r[3]=c->r[30]|c->r[30]; // 803F3CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F3CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F3CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F3CD4
  c->lr=c->r[0]; // 803F3CD8
  c->r[1]=c->r[1]+0x00000010u; // 803F3CDC
  return; // 803F3CE0
}

// fn_803F3CE4
void f_803F3CE4(Ctx* __restrict c) {
  trace_call(0x803F3CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3CE4
  c->r[4]=0u+0x80570000u; // 803F3CE8
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F3CEC
  c->r[3]=c->r[4]+0x00002BB0u; // 803F3CF0
  {uint32_t ea=c->r[2]+0xFFFFA7C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F3CF4
  c->r[11]=0u+0x80570000u; // 803F3CF8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803F3CFC
  c->r[9]=c->r[1]+0x00000028u; // 803F3D00
  c->r[10]=c->r[1]+0x00000030u; // 803F3D04
  c->r[5]=c->r[1]+0x00000008u; // 803F3D08
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803F3D0C
  c->r[7]=c->r[1]+0x00000018u; // 803F3D10
  c->r[8]=c->r[1]+0x00000020u; // 803F3D14
  c->r[6]=c->r[1]+0x00000010u; // 803F3D18
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803F3D1C
  c->r[11]=c->r[11]+0x00002BC0u; // 803F3D20
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F3D24
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803F3D28
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F3D2C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803F3D30
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803F3D34
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F3D38
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F3D3C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803F3D40
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 803F3D44
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803F3D48
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803F3D4C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F3D50
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803F3D54
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803F3D58
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 803F3D5C
  {uint32_t ea=c->r[4]+0x00002BB0u; WF32(ea,c->f[1]);} // 803F3D60
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803F3D64
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803F3D68
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803F3D6C
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F3D70
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 803F3D74
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 803F3D78
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 803F3D7C
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 803F3D80
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 803F3D84
  c->r[1]=c->r[1]+0x00000040u; // 803F3D88
  return; // 803F3D8C
}

// fn_803F3D90
void f_803F3D90(Ctx* __restrict c) {
  trace_call(0x803F3D90u);
  cmps(c,0,(int32_t)c->r[3],3); // 803F3D90
  if (!crb(c,2)) return; // 803F3D94
  c->r[3]=0u+0x00000001u; // 803F3D98
  return; // 803F3D9C
}

// fn_803F3DA0
void f_803F3DA0(Ctx* __restrict c) {
  trace_call(0x803F3DA0u);
  cmps(c,0,(int32_t)c->r[3],127); // 803F3DA0
  if (!crb(c,1)) { goto L_803F3DB4; } // 803F3DA4
  c->r[3]=addc(c,~c->r[3],0x000000FFu,1); // 803F3DA8
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 803F3DAC
  goto L_803F3DB8; // 803F3DB0
L_803F3DB4:;
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 803F3DB4
L_803F3DB8:;
  cmps(c,0,(int32_t)c->r[3],255); // 803F3DB8
  if (!crb(c,1)) return; // 803F3DBC
  c->r[3]=0u+0x000000FFu; // 803F3DC0
  return; // 803F3DC4
}

// fn_803F3DC8
void f_803F3DC8(Ctx* __restrict c) {
  trace_call(0x803F3DC8u);
  c->r[6]=0u+0x80570000u; // 803F3DC8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3DCC
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 803F3DD0
  c->r[6]=c->r[6]+0x00002C30u; // 803F3DD4
  c->r[8]=0u+0x00000000u; // 803F3DD8
  c->r[4]=0u+0x43300000u; // 803F3DDC
  c->r[0]=0u+0x00000040u; // 803F3DE0
L_803F3DE4:;
  c->r[7]=c->r[6]|c->r[6]; // 803F3DE4
  c->r[9]=0u+0x00000000u; // 803F3DE8
  c->ctr=c->r[0]; // 803F3DEC
L_803F3DF0:;
  cmps(c,0,(int32_t)c->r[8],1); // 803F3DF0
  if (crb(c,2)) { goto L_803F3E20; } // 803F3DF4
  cmps(c,0,(int32_t)c->r[8],2); // 803F3DF8
  if (crb(c,2)) { goto L_803F3E30; } // 803F3DFC
  cmps(c,0,(int32_t)c->r[8],3); // 803F3E00
  if (crb(c,2)) { goto L_803F3E40; } // 803F3E04
  cmps(c,0,(int32_t)c->r[8],4); // 803F3E08
  if (crb(c,2)) { goto L_803F3E50; } // 803F3E0C
  {uint32_t ea=c->r[2]+0xFFFFA840u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3E10
  c->r[3]=0u+0x00000010u; // 803F3E14
  c->r[10]=0u+0x00000004u; // 803F3E18
  goto L_803F3E5C; // 803F3E1C
L_803F3E20:;
  {uint32_t ea=c->r[2]+0xFFFFA844u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3E20
  c->r[3]=0u+0x00000008u; // 803F3E24
  c->r[10]=0u+0x00000003u; // 803F3E28
  goto L_803F3E5C; // 803F3E2C
L_803F3E30:;
  {uint32_t ea=c->r[2]+0xFFFFA848u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3E30
  c->r[3]=0u+0x00000004u; // 803F3E34
  c->r[10]=0u+0x00000002u; // 803F3E38
  goto L_803F3E5C; // 803F3E3C
L_803F3E40:;
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3E40
  c->r[3]=0u+0x00000002u; // 803F3E44
  c->r[10]=0u+0x00000001u; // 803F3E48
  goto L_803F3E5C; // 803F3E4C
L_803F3E50:;
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3E50
  c->r[3]=0u+0x00000001u; // 803F3E54
  c->r[10]=0u+0x00000000u; // 803F3E58
L_803F3E5C:;
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 803F3E5C
  c->r[3]=sraw(c,c->r[9],(c->r[10])&63); // 803F3E60
  c->r[5]=c->r[9]&c->r[5]; // 803F3E64
  W32(c->r[1]+0x00000008u,c->r[4]); // 803F3E68
  c->r[5]=c->r[5]^0x80000000u; // 803F3E6C
  c->r[3]=c->r[3]^0x80000000u; // 803F3E70
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803F3E74
  c->r[9]=c->r[9]+0x00000001u; // 803F3E78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803F3E7C
  W32(c->r[1]+0x00000014u,c->r[3]); // 803F3E80
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 803F3E84
  W32(c->r[1]+0x00000010u,c->r[4]); // 803F3E88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803F3E8C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803F3E90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803F3E94
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 803F3E98
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803F3E9C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803F3EA0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803F3EA4
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 803F3EA8
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 803F3EAC
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 803F3EB0
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 803F3EB4
  c->r[7]=c->r[7]+0x00000010u; // 803F3EB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803F3DF0; } // 803F3EBC
  c->r[8]=c->r[8]+0x00000001u; // 803F3EC0
  c->r[6]=c->r[6]+0x00000400u; // 803F3EC4
  cmps(c,0,(int32_t)c->r[8],5); // 803F3EC8
  if (crb(c,0)) { IRQCHK(c); goto L_803F3DE4; } // 803F3ECC
  c->r[0]=0u+0x00000001u; // 803F3ED0
  W32(c->r[13]+0xFFFFF410u,c->r[0]); // 803F3ED4
  c->r[1]=c->r[1]+0x00000020u; // 803F3ED8
  return; // 803F3EDC
}

// fn_803F3EE0
void f_803F3EE0(Ctx* __restrict c) {
  trace_call(0x803F3EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F3EE0
  c->r[0]=c->lr; // 803F3EE4
  c->r[5]=0u+0x80570000u; // 803F3EE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803F3EEC
  c->r[5]=c->r[5]+0x000041A8u; // 803F3EF0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803F3EF4
  c->r[31]=0u+0x000000FFu; // 803F3EF8
  W32(c->r[1]+0x00000028u,c->r[30]); // 803F3EFC
  c->r[30]=c->r[4]|c->r[4]; // 803F3F00
  W32(c->r[1]+0x00000024u,c->r[29]); // 803F3F04
  c->r[29]=c->r[3]|c->r[3]; // 803F3F08
  c->r[8]=R32(c->r[4]+0x00000068u); // 803F3F0C
  cmps(c,0,(int32_t)c->r[8],0); // 803F3F10
  if (crb(c,2)) { goto L_803F3FC8; } // 803F3F14
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,0,ea,0,0);} // 803F3F18
  c->r[7]=c->r[1]+0x00000008u; // 803F3F1C
  {uint32_t ea=c->r[8]+0x00000020u; psq_load(c,1,ea,0,0);} // 803F3F20
  c->r[6]=c->r[1]+0x00000010u; // 803F3F24
  {uint32_t ea=c->r[8]+0x00000030u; psq_load(c,2,ea,0,0);} // 803F3F28
  c->r[3]=c->r[5]|c->r[5]; // 803F3F2C
  {uint32_t ea=c->r[8]+0x00000040u; psq_load(c,4,ea,0,0);} // 803F3F30
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 803F3F34
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 803F3F38
  {uint32_t ea=c->r[4]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3F3C
  {double t0=S(c->f[0]*c->f[4]), t1=S(c->ps1[0]*c->ps1[4]); c->f[7]=t0; c->ps1[7]=t1;} // 803F3F40
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F3F44
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[5]); c->f[2]=t0; c->ps1[2]=t1;} // 803F3F48
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803F3F4C
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F3F50
  {double t0=S(c->f[6]+c->ps1[6]), t1=S(c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 803F3F54
  {uint32_t ea=c->r[8]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F3F58
  {double t0=S(c->f[7]+c->ps1[7]), t1=S(c->ps1[7]); c->f[6]=t0; c->ps1[6]=t1;} // 803F3F5C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803F3F60
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803F3F64
  c->r[4]=c->r[7]|c->r[7]; // 803F3F68
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[4]); // 803F3F6C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803F3F70
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[5]); // 803F3F74
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 803F3F78
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803F3F7C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803F3F80
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F3F84
  {uint32_t ea=c->r[8]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F3F88
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F3F8C
  {uint32_t ea=c->r[8]+0x00000018u; psq_load(c,0,ea,0,0);} // 803F3F90
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 803F3F94
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F3F98
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,3,ea,0,0);} // 803F3F9C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803F3FA0
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F3FA4
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F3FA8
  {uint32_t ea=c->r[8]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F3FAC
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F3FB0
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F3FB4
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F3FB8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803F3FBC
  c->lr=0x803F3FC4u; f_803FDFB4(c); // 803F3FC0
  goto L_803F3FD4; // 803F3FC4
L_803F3FC8:;
  c->r[3]=c->r[5]|c->r[5]; // 803F3FC8
  c->r[4]=c->r[4]+0x00000038u; // 803F3FCC
  c->lr=0x803F3FD4u; f_803FDFB4(c); // 803F3FD0
L_803F3FD4:;
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[8]=c->ps1[8]=RF32(ea);} // 803F3FD4
  fcmp(c,0,c->f[8],c->f[1]); // 803F3FD8
  if (!crb(c,2)) { goto L_803F3FE4; } // 803F3FDC
  goto L_803F4018; // 803F3FE0
L_803F3FE4:;
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F3FE4
  fcmp(c,0,c->f[1],c->f[0]); // 803F3FE8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803F3FEC
  if (!crb(c,2)) { goto L_803F3FF8; } // 803F3FF0
  goto L_803F4018; // 803F3FF4
L_803F3FF8:;
  c->f[0]=frsqrte(c->f[1]); // 803F3FF8
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F3FFC
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F4000
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 803F4004
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803F4008
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 803F400C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F4010
  c->f[8]=(c->f[0]>=0.0)?c->f[0]:c->f[1]; // 803F4014
L_803F4018:;
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F4018
  fcmp(c,0,c->f[8],c->f[7]); // 803F401C
  if (!crb(c,1)) { goto L_803F40F0; } // 803F4020
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4024
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4028
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[0]); // 803F402C
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4030
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4034
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[2]); // 803F4038
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 803F403C
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 803F4040
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 803F4044
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4048
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 803F404C
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4050
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[6]); // 803F4054
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803F4058
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803F405C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 803F4060
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 803F4064
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F4068
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803F406C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803F4070
  fcmp(c,0,c->f[1],c->f[0]); // 803F4074
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803F4078
  if (!crb(c,2)) { goto L_803F4084; } // 803F407C
  goto L_803F40A0; // 803F4080
L_803F4084:;
  c->f[0]=frsqrte(c->f[1]); // 803F4084
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 803F4088
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 803F408C
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 803F4090
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F4094
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[1]; // 803F4098
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[0]); // 803F409C
L_803F40A0:;
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[7]); // 803F40A0
  {uint32_t ea=c->r[29]+0x0000020Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F40A4
  fcmp(c,0,c->f[3],c->f[1]); // 803F40A8
  if (!crb(c,1)) { goto L_803F40F4; } // 803F40AC
  {uint32_t ea=c->r[29]+0x00000210u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F40B0
  fcmp(c,0,c->f[3],c->f[0]); // 803F40B4
  if (!crb(c,1)) { goto L_803F40C4; } // 803F40B8
  c->r[31]=0u+0x00000000u; // 803F40BC
  goto L_803F40F4; // 803F40C0
L_803F40C4:;
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 803F40C4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F40C8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 803F40CC
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F40D0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803F40D4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803F40D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F40DC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F40E0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803F40E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803F40E8
  goto L_803F40F4; // 803F40EC
L_803F40F0:;
  c->r[31]=0u+0x00000000u; // 803F40F0
L_803F40F4:;
  c->r[3]=c->r[31]|c->r[31]; // 803F40F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803F40F8
  c->r[30]=R32(c->r[1]+0x00000028u); // 803F40FC
  c->r[29]=R32(c->r[1]+0x00000024u); // 803F4100
  c->r[0]=R32(c->r[1]+0x00000034u); // 803F4104
  c->lr=c->r[0]; // 803F4108
  c->r[1]=c->r[1]+0x00000030u; // 803F410C
  return; // 803F4110
}

// fn_803F4114
void f_803F4114(Ctx* __restrict c) {
  trace_call(0x803F4114u);
  cmps(c,0,(int32_t)c->r[3],0); // 803F4114
  if (crb(c,2)) { goto L_803F4190; } // 803F4118
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 803F411C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 803F4120
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 803F4124
  {double t0=S(c->f[2]*c->f[5]), t1=S(c->ps1[2]*c->f[5]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4128
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 803F412C
  {double t0=S(c->f[2]*c->f[6]), t1=S(c->ps1[2]*c->f[6]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4130
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,7,ea,0,0);} // 803F4134
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,4,ea,0,0);} // 803F4138
  {double t0=S(std::fma(c->f[3],c->ps1[5],c->f[0])), t1=S(std::fma(c->ps1[3],c->ps1[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 803F413C
  {double t0=S(std::fma(c->f[3],c->ps1[6],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 803F4140
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,5,ea,0,0);} // 803F4144
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,6,ea,0,0);} // 803F4148
  {double t0=S(c->f[2]*c->f[7]), t1=S(c->ps1[2]*c->f[7]); c->f[2]=t0; c->ps1[2]=t1;} // 803F414C
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[0])), t1=S(std::fma(c->ps1[4],c->f[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 803F4150
  {double t0=S(std::fma(c->f[4],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[4],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 803F4154
  {double t0=S(std::fma(c->f[3],c->ps1[7],c->f[2])), t1=S(std::fma(c->ps1[3],c->ps1[7],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 803F4158
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 803F415C
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 803F4160
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,6,ea,0,0);} // 803F4164
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 803F4168
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[4],c->f[5],c->ps1[2])); c->f[0]=t0; c->ps1[0]=t1;} // 803F416C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,2,ea,0,0);} // 803F4170
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4174
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 803F4178
  {double t0=S(c->f[6]*c->f[1]), t1=S(c->ps1[6]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F417C
  {double t0=S(c->f[2]*c->ps1[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4180
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4184
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4188
  goto L_803F41C4; // 803F418C
L_803F4190:;
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F4190
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,1,ea,0,0);} // 803F4194
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[0]=t0; c->ps1[0]=t1;} // 803F4198
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,2,ea,0,0);} // 803F419C
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 803F41A0
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F41A4
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[2]=t0; c->ps1[2]=t1;} // 803F41A8
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,4,ea,0,0);} // 803F41AC
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803F41B0
  {double t0=S(c->f[4]*c->ps1[2]), t1=S(c->ps1[4]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F41B4
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F41B8
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F41BC
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F41C0
L_803F41C4:;
  c->f[2]=std::fabs(c->f[0]); // 803F41C4
  {uint32_t ea=c->r[4]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F41C8
  {uint32_t ea=c->r[4]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F41CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803F41D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803F41D4
  {uint32_t ea=c->r[4]+0x00000104u; WF32(ea,c->f[1]);} // 803F41D8
  {uint32_t ea=c->r[4]+0x00000108u; WF32(ea,c->f[0]);} // 803F41DC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,2);} // 803F41E0
  {uint32_t ea=c->r[6]+0x00000002u; psq_load(c,0,ea,0,2);} // 803F41E4
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F41E8
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F41EC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,1,ea,0,2);} // 803F41F0
  {uint32_t ea=c->r[6]+0x00000002u; psq_store(c,0,ea,1,2);} // 803F41F4
  return; // 803F41F8
}

// fabs
void f_803F41FC(Ctx* __restrict c) {
  trace_call(0x803F41FCu);
  c->f[1]=std::fabs(c->f[1]); // 803F41FC
  return; // 803F4200
}

// fn_803F4204
void f_803F4204(Ctx* __restrict c) {
  trace_call(0x803F4204u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,2);} // 803F4204
  {uint32_t ea=c->r[3]+0x00000002u; psq_load(c,2,ea,0,2);} // 803F4208
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803F420C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4210
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,2);} // 803F4214
  {uint32_t ea=c->r[3]+0x00000002u; psq_store(c,1,ea,1,2);} // 803F4218
  return; // 803F421C
}

// fn_803F4220
void f_803F4220(Ctx* __restrict c) {
  trace_call(0x803F4220u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F4220
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F4224
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,0,ea,0,0);} // 803F4228
  c->r[5]=c->r[1]+0x00000008u; // 803F422C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 803F4230
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803F4234
  {uint32_t ea=c->r[3]+0x00000040u; psq_load(c,1,ea,0,0);} // 803F4238
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F423C
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4240
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 803F4244
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F4248
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F424C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803F4250
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F4254
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 803F4258
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 803F425C
  fcmp(c,0,c->f[1],c->f[0]); // 803F4260
  if (!crb(c,1)) { goto L_803F42BC; } // 803F4264
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4268
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F426C
  fcmp(c,0,c->f[1],c->f[0]); // 803F4270
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F4274
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803F4278
  if (!crb(c,2)) { goto L_803F4288; } // 803F427C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4280
  goto L_803F42A4; // 803F4284
L_803F4288:;
  c->f[0]=frsqrte(c->f[1]); // 803F4288
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 803F428C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803F4290
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 803F4294
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F4298
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[1]; // 803F429C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 803F42A0
L_803F42A4:;
  {uint32_t ea=c->r[3]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F42A4
  {uint32_t ea=c->r[3]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F42A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803F42AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803F42B0
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[1]);} // 803F42B4
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[0]);} // 803F42B8
L_803F42BC:;
  c->r[1]=c->r[1]+0x00000020u; // 803F42BC
  return; // 803F42C0
}

// fn_803F42C4
void f_803F42C4(Ctx* __restrict c) {
  trace_call(0x803F42C4u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F42C4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F42C8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 803F42CC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 803F42D0
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F42D4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803F42D8
  return; // 803F42DC
}

