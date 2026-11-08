#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_803F42E0
void f_803F42E0(Ctx* __restrict c) {
  trace_call(0x803F42E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F42E0
  c->r[0]=c->lr; // 803F42E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803F42E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803F42EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803F42F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803F42F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803F42F8
  c->r[28]=c->r[4]|c->r[4]; // 803F42FC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F4300
  c->r[0]=R8(c->r[3]+0x00000004u); // 803F4304
  cmps(c,0,(int32_t)c->r[0],0); // 803F4308
  if (crb(c,2)) { goto L_803F43A0; } // 803F430C
  c->r[3]=R32(c->r[4]+0x00000074u); // 803F4310
  cmps(c,0,(int32_t)c->r[3],0); // 803F4314
  if (crb(c,2)) { goto L_803F43A0; } // 803F4318
  c->r[0]=R32(c->r[4]+0x00000084u); // 803F431C
  cmps(c,0,(int32_t)c->r[0],0); // 803F4320
  if (crb(c,2)) { goto L_803F432C; } // 803F4324
  c->lr=0x803F432Cu; f_803FB8CC(c); // 803F4328
L_803F432C:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 803F432C
  c->r[30]=R32(c->r[3]+0x00000008u); // 803F4330
  goto L_803F4390; // 803F4334
L_803F4338:;
  c->r[29]=R32(c->r[30]+0x00000008u); // 803F4338
  c->r[31]=R32(c->r[29]+0x0000006Cu); // 803F433C
  cmps(c,0,(int32_t)c->r[31],0); // 803F4340
  if (crb(c,2)) { goto L_803F438C; } // 803F4344
  c->r[3]=c->r[31]|c->r[31]; // 803F4348
  c->lr=0x803F4350u; f_803E69EC(c); // 803F434C
  cmps(c,0,(int32_t)c->r[3],0); // 803F4350
  if (crb(c,2)) { goto L_803F438C; } // 803F4354
  c->r[12]=R32(c->r[31]+0x00000000u); // 803F4358
  c->r[3]=c->r[31]|c->r[31]; // 803F435C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F4360
  c->ctr=c->r[12]; // 803F4364
  if (true) { c->lr=0x803F436Cu; dispatch(c,c->ctr); } // 803F4368
  cmps(c,0,(int32_t)c->r[3],11); // 803F436C
  if (crb(c,2)) { goto L_803F438C; } // 803F4370
  c->r[12]=R32(c->r[31]+0x00000000u); // 803F4374
  c->r[3]=c->r[31]|c->r[31]; // 803F4378
  c->r[4]=c->r[29]|c->r[29]; // 803F437C
  c->r[12]=R32(c->r[12]+0x00000050u); // 803F4380
  c->ctr=c->r[12]; // 803F4384
  if (true) { c->lr=0x803F438Cu; dispatch(c,c->ctr); } // 803F4388
L_803F438C:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 803F438C
L_803F4390:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 803F4390
  c->r[0]=c->r[3]+0x00000004u; // 803F4394
  cmpu(c,0,c->r[30],c->r[0]); // 803F4398
  if (!crb(c,2)) { IRQCHK(c); goto L_803F4338; } // 803F439C
L_803F43A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803F43A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803F43A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803F43A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803F43AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 803F43B0
  c->lr=c->r[0]; // 803F43B4
  c->r[1]=c->r[1]+0x00000020u; // 803F43B8
  return; // 803F43BC
}

// fn_803F43C0
void f_803F43C0(Ctx* __restrict c) {
  trace_call(0x803F43C0u);
  c->r[3]=R8(c->r[3]+0x00000004u); // 803F43C0
  return; // 803F43C4
}

// fn_803F43C8
void f_803F43C8(Ctx* __restrict c) {
  trace_call(0x803F43C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F43C8
  c->r[0]=c->lr; // 803F43CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803F43D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803F43D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803F43D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803F43DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 803F43E0
  c->r[28]=c->r[4]|c->r[4]; // 803F43E4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F43E8
  c->r[0]=R8(c->r[3]+0x00000004u); // 803F43EC
  cmps(c,0,(int32_t)c->r[0],0); // 803F43F0
  if (crb(c,2)) { goto L_803F4488; } // 803F43F4
  c->r[3]=R32(c->r[4]+0x00000074u); // 803F43F8
  cmps(c,0,(int32_t)c->r[3],0); // 803F43FC
  if (crb(c,2)) { goto L_803F4488; } // 803F4400
  c->r[0]=R32(c->r[4]+0x00000084u); // 803F4404
  cmps(c,0,(int32_t)c->r[0],0); // 803F4408
  if (crb(c,2)) { goto L_803F4414; } // 803F440C
  c->lr=0x803F4414u; f_803FB8CC(c); // 803F4410
L_803F4414:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 803F4414
  c->r[30]=R32(c->r[3]+0x00000008u); // 803F4418
  goto L_803F4478; // 803F441C
L_803F4420:;
  c->r[29]=R32(c->r[30]+0x00000008u); // 803F4420
  c->r[31]=R32(c->r[29]+0x0000006Cu); // 803F4424
  cmps(c,0,(int32_t)c->r[31],0); // 803F4428
  if (crb(c,2)) { goto L_803F4474; } // 803F442C
  c->r[12]=R32(c->r[31]+0x00000000u); // 803F4430
  c->r[3]=c->r[31]|c->r[31]; // 803F4434
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F4438
  c->ctr=c->r[12]; // 803F443C
  if (true) { c->lr=0x803F4444u; dispatch(c,c->ctr); } // 803F4440
  cmps(c,0,(int32_t)c->r[3],11); // 803F4444
  if (crb(c,2)) { goto L_803F4474; } // 803F4448
  c->r[3]=c->r[31]|c->r[31]; // 803F444C
  c->lr=0x803F4454u; f_803E69EC(c); // 803F4450
  cmps(c,0,(int32_t)c->r[3],0); // 803F4454
  if (crb(c,2)) { goto L_803F4474; } // 803F4458
  c->r[12]=R32(c->r[31]+0x00000000u); // 803F445C
  c->r[3]=c->r[31]|c->r[31]; // 803F4460
  c->r[4]=c->r[29]|c->r[29]; // 803F4464
  c->r[12]=R32(c->r[12]+0x00000050u); // 803F4468
  c->ctr=c->r[12]; // 803F446C
  if (true) { c->lr=0x803F4474u; dispatch(c,c->ctr); } // 803F4470
L_803F4474:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 803F4474
L_803F4478:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 803F4478
  c->r[0]=c->r[3]+0x00000004u; // 803F447C
  cmpu(c,0,c->r[30],c->r[0]); // 803F4480
  if (!crb(c,2)) { IRQCHK(c); goto L_803F4420; } // 803F4484
L_803F4488:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803F4488
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803F448C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803F4490
  c->r[29]=R32(c->r[1]+0x00000014u); // 803F4494
  c->r[28]=R32(c->r[1]+0x00000010u); // 803F4498
  c->lr=c->r[0]; // 803F449C
  c->r[1]=c->r[1]+0x00000020u; // 803F44A0
  return; // 803F44A4
}

// fn_803F44A8
void f_803F44A8(Ctx* __restrict c) {
  trace_call(0x803F44A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F44A8
  c->r[0]=c->lr; // 803F44AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803F44B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803F44B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803F44B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803F44BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 803F44C0
  c->r[28]=c->r[4]|c->r[4]; // 803F44C4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F44C8
  c->r[0]=R8(c->r[3]+0x00000004u); // 803F44CC
  cmps(c,0,(int32_t)c->r[0],0); // 803F44D0
  if (crb(c,2)) { goto L_803F454C; } // 803F44D4
  c->r[3]=R32(c->r[4]+0x00000074u); // 803F44D8
  cmps(c,0,(int32_t)c->r[3],0); // 803F44DC
  if (crb(c,2)) { goto L_803F454C; } // 803F44E0
  c->r[0]=R32(c->r[4]+0x00000084u); // 803F44E4
  cmps(c,0,(int32_t)c->r[0],0); // 803F44E8
  if (crb(c,2)) { goto L_803F44F4; } // 803F44EC
  c->lr=0x803F44F4u; f_803FB8CC(c); // 803F44F0
L_803F44F4:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 803F44F4
  c->r[30]=R32(c->r[3]+0x00000008u); // 803F44F8
  goto L_803F453C; // 803F44FC
L_803F4500:;
  c->r[29]=R32(c->r[30]+0x00000008u); // 803F4500
  c->r[31]=R32(c->r[29]+0x0000006Cu); // 803F4504
  cmps(c,0,(int32_t)c->r[31],0); // 803F4508
  if (crb(c,2)) { goto L_803F4538; } // 803F450C
  c->r[3]=c->r[31]|c->r[31]; // 803F4510
  c->lr=0x803F4518u; f_803E69EC(c); // 803F4514
  cmps(c,0,(int32_t)c->r[3],0); // 803F4518
  if (crb(c,2)) { goto L_803F4538; } // 803F451C
  c->r[12]=R32(c->r[31]+0x00000000u); // 803F4520
  c->r[3]=c->r[31]|c->r[31]; // 803F4524
  c->r[4]=c->r[29]|c->r[29]; // 803F4528
  c->r[12]=R32(c->r[12]+0x00000050u); // 803F452C
  c->ctr=c->r[12]; // 803F4530
  if (true) { c->lr=0x803F4538u; dispatch(c,c->ctr); } // 803F4534
L_803F4538:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 803F4538
L_803F453C:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 803F453C
  c->r[0]=c->r[3]+0x00000004u; // 803F4540
  cmpu(c,0,c->r[30],c->r[0]); // 803F4544
  if (!crb(c,2)) { IRQCHK(c); goto L_803F4500; } // 803F4548
L_803F454C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803F454C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803F4550
  c->r[30]=R32(c->r[1]+0x00000018u); // 803F4554
  c->r[29]=R32(c->r[1]+0x00000014u); // 803F4558
  c->r[28]=R32(c->r[1]+0x00000010u); // 803F455C
  c->lr=c->r[0]; // 803F4560
  c->r[1]=c->r[1]+0x00000020u; // 803F4564
  return; // 803F4568
}

// fn_803F456C
void f_803F456C(Ctx* __restrict c) {
  trace_call(0x803F456Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F456C
  c->r[0]=c->lr; // 803F4570
  W32(c->r[1]+0x00000054u,c->r[0]); // 803F4574
  c->r[11]=c->r[1]+0x00000050u; // 803F4578
  c->lr=0x803F4580u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F457C
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4580
  c->r[24]=c->r[3]|c->r[3]; // 803F4584
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4588
  c->r[31]=c->r[4]|c->r[4]; // 803F458C
  c->r[25]=c->r[5]|c->r[5]; // 803F4590
  c->r[26]=c->r[6]|c->r[6]; // 803F4594
  fcmp(c,0,c->f[1],c->f[0]); // 803F4598
  c->r[27]=c->r[7]|c->r[7]; // 803F459C
  c->r[28]=c->r[8]|c->r[8]; // 803F45A0
  c->r[29]=c->r[9]|c->r[9]; // 803F45A4
  if (crb(c,1)) { goto L_803F45B8; } // 803F45A8
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F45AC
  fcmp(c,0,c->f[0],c->f[1]); // 803F45B0
  if (!crb(c,2)) { goto L_803F4788; } // 803F45B4
L_803F45B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 803F45B8
  if (crb(c,2)) { goto L_803F460C; } // 803F45BC
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F45C0
  c->r[30]=0u+0x00000000u; // 803F45C4
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F45C8
  fcmp(c,0,c->f[1],c->f[0]); // 803F45CC
  if (crb(c,2)) { goto L_803F4600; } // 803F45D0
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F45D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F45D8
  c->r[12]=R32(c->r[12]+0x000000C4u); // 803F45DC
  c->ctr=c->r[12]; // 803F45E0
  if (true) { c->lr=0x803F45E8u; dispatch(c,c->ctr); } // 803F45E4
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F45E8
  {uint32_t ea=c->r[25]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F45EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F45F0
  fcmp(c,0,c->f[0],c->f[1]); // 803F45F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803F45F8
  if (!crb(c,2)) { goto L_803F4604; } // 803F45FC
L_803F4600:;
  c->r[30]=0u+0x00000001u; // 803F4600
L_803F4604:;
  cmps(c,0,(int32_t)c->r[30],0); // 803F4604
  if (crb(c,2)) { goto L_803F4788; } // 803F4608
L_803F460C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A6u); // 803F460C
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; // 803F4610
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[26]); // 803F4614
  if (crb(c,2)) { goto L_803F4624; } // 803F4618
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 803F461C
  if (crb(c,2)) { goto L_803F4780; } // 803F4620
L_803F4624:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4624
  cmps(c,0,(int32_t)c->r[25],0); // 803F4628
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F462C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4630
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4634
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803F4638
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803F463C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F4640
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803F4644
  if (crb(c,2)) { goto L_803F4674; } // 803F4648
  c->r[3]=c->r[1]+0x00000018u; // 803F464C
  c->r[4]=c->r[1]+0x00000020u; // 803F4650
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F4654
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F4658
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F465C
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,3,ea,0,0);} // 803F4660
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4664
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4668
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F466C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F4670
L_803F4674:;
  c->r[5]=c->r[1]+0x00000018u; // 803F4674
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F4678
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F467C
  c->r[4]=c->r[1]+0x00000020u; // 803F4680
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,3,ea,0,0);} // 803F4684
  c->r[3]=c->r[1]+0x00000008u; // 803F4688
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803F468C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F4690
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4694
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4698
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 803F469C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F46A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F46A4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803F46A8
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F46AC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 803F46B0
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[2]); // 803F46B4
  fcmp(c,0,c->f[0],c->f[5]); // 803F46B8
  if (!crb(c,2)) { goto L_803F46C4; } // 803F46BC
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803F46C0
L_803F46C4:;
  {uint32_t ea=c->r[24]+0x00000204u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F46C4
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F46C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 803F46CC
  {uint32_t ea=c->r[31]+0x00000094u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F46D0
  {uint32_t ea=c->r[31]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F46D4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F46D8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803F46DC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803F46E0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803F46E4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[5]); // 803F46E8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803F46EC
  fcmp(c,0,c->f[2],c->f[0]); // 803F46F0
  if (crb(c,1)) { goto L_803F4704; } // 803F46F4
  c->r[0]=R32(c->r[24]+0x000001B8u); // 803F46F8
  cmps(c,0,(int32_t)c->r[0],0); // 803F46FC
  if (crb(c,2)) { goto L_803F4768; } // 803F4700
L_803F4704:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A6u); // 803F4704
  c->r[5]=0u+0xE0000000u; // 803F4708
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F470C
  c->r[3]=c->r[5]+0x00001CC8u; // 803F4710
  c->r[0]=c->r[0]|c->r[27]; // 803F4714
  W16(c->r[31]+0x000000A6u,c->r[0]); // 803F4718
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F471C
  c->r[4]=c->r[5]+0x00001CB8u; // 803F4720
  {uint32_t ea=c->r[5]+0x00001CB8u; WF32(ea,c->f[1]);} // 803F4724
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4728
  {uint32_t ea=c->r[5]+0x00001CBCu; WF32(ea,c->f[0]);} // 803F472C
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4730
  {uint32_t ea=c->r[5]+0x00001CC0u; WF32(ea,c->f[1]);} // 803F4734
  {uint32_t ea=c->r[31]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4738
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F473C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803F4740
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F4744
  {uint32_t ea=c->r[5]+0x00001CC4u; WF32(ea,c->f[0]);} // 803F4748
  c->lr=0x803F4750u; f_803D538C(c); // 803F474C
  cmps(c,0,(int32_t)c->r[3],0); // 803F4750
  if (!crb(c,2)) { goto L_803F4760; } // 803F4754
  c->r[3]=0u+0x00000000u; // 803F4758
  goto L_803F478C; // 803F475C
L_803F4760:;
  c->r[3]=0u+0x00000001u; // 803F4760
  goto L_803F478C; // 803F4764
L_803F4768:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A6u); // 803F4768
  c->r[0]=c->r[0]&~c->r[27]; // 803F476C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 803F4770
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 803F4774
  W16(c->r[31]+0x000000A6u,c->r[0]); // 803F4778
  goto L_803F4788; // 803F477C
L_803F4780:;
  c->r[3]=c->r[3]&c->r[27]; // 803F4780
  goto L_803F478C; // 803F4784
L_803F4788:;
  c->r[3]=0u+0x00000000u; // 803F4788
L_803F478C:;
  c->r[11]=c->r[1]+0x00000050u; // 803F478C
  c->lr=0x803F4794u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F4790
  c->r[0]=R32(c->r[1]+0x00000054u); // 803F4794
  c->lr=c->r[0]; // 803F4798
  c->r[1]=c->r[1]+0x00000050u; // 803F479C
  return; // 803F47A0
}

// fn_803F47A4
void f_803F47A4(Ctx* __restrict c) {
  trace_call(0x803F47A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F47A4
  c->r[0]=c->lr; // 803F47A8
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F47AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F47B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803F47B4
  c->r[31]=0u+0x00000000u; // 803F47B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803F47BC
  c->r[30]=c->r[3]|c->r[3]; // 803F47C0
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F47C4
  fcmp(c,0,c->f[1],c->f[0]); // 803F47C8
  if (crb(c,2)) { goto L_803F47FC; } // 803F47CC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F47D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F47D4
  c->r[12]=R32(c->r[12]+0x000000C4u); // 803F47D8
  c->ctr=c->r[12]; // 803F47DC
  if (true) { c->lr=0x803F47E4u; dispatch(c,c->ctr); } // 803F47E0
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F47E4
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F47E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F47EC
  fcmp(c,0,c->f[0],c->f[1]); // 803F47F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803F47F4
  if (!crb(c,2)) { goto L_803F4800; } // 803F47F8
L_803F47FC:;
  c->r[31]=0u+0x00000001u; // 803F47FC
L_803F4800:;
  c->r[3]=c->r[31]|c->r[31]; // 803F4800
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803F4804
  c->r[30]=R32(c->r[1]+0x00000008u); // 803F4808
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F480C
  c->lr=c->r[0]; // 803F4810
  c->r[1]=c->r[1]+0x00000010u; // 803F4814
  return; // 803F4818
}

// fn_803F481C
void f_803F481C(Ctx* __restrict c) {
  trace_call(0x803F481Cu);
  c->r[3]=0u+0xE0000000u; // 803F481C
  return; // 803F4820
}

// fn_803F4824
void f_803F4824(Ctx* __restrict c) {
  trace_call(0x803F4824u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F4824
  c->r[0]=c->lr; // 803F4828
  W32(c->r[1]+0x00000054u,c->r[0]); // 803F482C
  c->r[11]=c->r[1]+0x00000050u; // 803F4830
  c->lr=0x803F4838u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F4834
  c->r[8]=R32(c->r[3]+0x00000184u); // 803F4838
  c->r[0]=0u+0x43300000u; // 803F483C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F4840
  c->r[30]=c->r[3]|c->r[3]; // 803F4844
  cmps(c,0,(int32_t)c->r[8],0); // 803F4848
  c->r[31]=c->r[4]|c->r[4]; // 803F484C
  W32(c->r[1]+0x00000010u,c->r[0]); // 803F4850
  c->r[26]=c->r[5]|c->r[5]; // 803F4854
  c->r[27]=c->r[6]|c->r[6]; // 803F4858
  c->r[28]=c->r[7]|c->r[7]; // 803F485C
  if (crb(c,2)) { goto L_803F487C; } // 803F4860
  c->r[4]=0u+0xE0000000u; // 803F4864
  c->r[3]=c->r[8]|c->r[8]; // 803F4868
  c->r[5]=c->r[31]|c->r[31]; // 803F486C
  c->r[4]=c->r[4]+0x00001CACu; // 803F4870
  c->lr=0x803F4878u; f_803E6ED0(c); // 803F4874
  goto L_803F4888; // 803F4878
L_803F487C:;
  c->r[3]=0u+0xE0000000u; // 803F487C
  c->r[0]=0u+0xFFFFFFFFu; // 803F4880
  W32(c->r[3]+0x00001CACu,c->r[0]); // 803F4884
L_803F4888:;
  c->r[5]=R32(c->r[31]+0x00000070u); // 803F4888
  cmps(c,0,(int32_t)c->r[5],0); // 803F488C
  if (crb(c,2)) { goto L_803F48EC; } // 803F4890
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F4894
  cmps(c,0,(int32_t)c->r[3],0); // 803F4898
  if (crb(c,2)) { goto L_803F48EC; } // 803F489C
  c->r[3]=R32(c->r[3]+0x000000ECu); // 803F48A0
  cmps(c,0,(int32_t)c->r[3],0); // 803F48A4
  if (crb(c,2)) { goto L_803F48EC; } // 803F48A8
  c->r[29]=0u+0xE0000000u; // 803F48AC
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F48B0
  c->r[4]=c->r[29]+0x00001CB0u; // 803F48B4
  c->lr=0x803F48BCu; f_803E6ED0(c); // 803F48B8
  c->r[5]=c->r[29]+0x00001CACu; // 803F48BC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,0,2);} // 803F48C0
  c->r[4]=c->r[29]+0x00001CAEu; // 803F48C4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,2);} // 803F48C8
  c->r[3]=c->r[29]+0x00001CB0u; // 803F48CC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,2);} // 803F48D0
  c->r[3]=c->r[29]+0x00001CB2u; // 803F48D4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,2);} // 803F48D8
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F48DC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F48E0
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,7);} // 803F48E4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,7);} // 803F48E8
L_803F48EC:;
  c->r[0]=R32(c->r[30]+0x00000190u); // 803F48EC
  cmps(c,0,(int32_t)c->r[0],5); // 803F48F0
  if (!crb(c,2)) { goto L_803F4920; } // 803F48F4
  cmps(c,0,(int32_t)c->r[26],0); // 803F48F8
  if (crb(c,2)) { goto L_803F4908; } // 803F48FC
  c->r[3]=c->r[27]|c->r[27]; // 803F4900
  goto L_803F490C; // 803F4904
L_803F4908:;
  c->r[3]=0u+0x00000000u; // 803F4908
L_803F490C:;
  c->r[6]=0u+0xE0000000u; // 803F490C
  c->r[4]=c->r[31]|c->r[31]; // 803F4910
  c->r[5]=c->r[28]|c->r[28]; // 803F4914
  c->r[6]=c->r[6]+0x00001CACu; // 803F4918
  c->lr=0x803F4920u; f_803F4114(c); // 803F491C
L_803F4920:;
  c->r[0]=R32(c->r[30]+0x00000178u); // 803F4920
  cmps(c,0,(int32_t)c->r[0],0); // 803F4924
  if (crb(c,2)) { goto L_803F4A68; } // 803F4928
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 803F492C
  cmps(c,0,(int32_t)c->r[0],0); // 803F4930
  if (!crb(c,1)) { goto L_803F498C; } // 803F4934
  c->r[0]=c->r[0]^0x80000000u; // 803F4938
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F493C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4940
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[3]=RF64(ea);} // 803F4944
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803F4948
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F494C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4950
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 803F4954
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 803F4958
  {uint32_t ea=c->r[2]+0xFFFFA884u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F495C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803F4960
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803F4964
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F4968
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F496C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803F4970
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 803F4974
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 803F4978
  c->r[3]=c->r[3]-c->r[4]; // 803F497C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803F4980
  c->r[5]=sraw(c,c->r[0],16); // 803F4984
  goto L_803F4990; // 803F4988
L_803F498C:;
  c->r[5]=0u+0x000000FFu; // 803F498C
L_803F4990:;
  cmps(c,0,(int32_t)c->r[5],30); // 803F4990
  if (!crb(c,1)) { goto L_803F49CC; } // 803F4994
  c->r[0]=c->r[5]+0xFFFFFFE2u; // 803F4998
  c->r[3]=0u+0x487F0000u; // 803F499C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 803F49A0
  c->r[4]=0u+0x00010000u; // 803F49A4
  c->r[3]=c->r[3]+0xFFFFDE05u; // 803F49A8
  c->r[0]=c->r[4]+0xFFFFC784u; // 803F49AC
  c->r[0]=c->r[0]-c->r[5]; // 803F49B0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 803F49B4
  c->r[0]=sraw(c,c->r[0],6); // 803F49B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803F49BC
  c->r[0]=c->r[0]+c->r[3]; // 803F49C0
  c->r[5]=addc(c,~c->r[0],0x000000E2u,1); // 803F49C4
  c->r[5]=c->r[5]+0x0000001Eu; // 803F49C8
L_803F49CC:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 803F49CC
  cmps(c,0,(int32_t)c->r[0],3); // 803F49D0
  if (!crb(c,2)) { goto L_803F49DC; } // 803F49D4
  c->r[0]=0u+0x00000001u; // 803F49D8
L_803F49DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 803F49DC
  if (!crb(c,2)) { goto L_803F4A34; } // 803F49E0
  c->r[4]=0u+0xE0000000u; // 803F49E4
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[1]=RF64(ea);} // 803F49E8
  c->r[3]=R8(c->r[4]+0x00001CAFu); // 803F49EC
  c->r[0]=R32(c->r[4]+0x00001CACu); // 803F49F0
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[3]); // 803F49F4
  W32(c->r[31]+0x00000100u,c->r[0]); // 803F49F8
  c->r[0]=sraw(c,c->r[3],8); // 803F49FC
  c->r[0]=c->r[0]^0x80000000u; // 803F4A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F4A04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803F4A08
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 803F4A0C
  {uint32_t ea=c->r[31]+0x00000100u; psq_load(c,1,ea,0,2);} // 803F4A10
  {uint32_t ea=c->r[31]+0x00000102u; psq_load(c,0,ea,0,2);} // 803F4A14
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4A18
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4A1C
  {uint32_t ea=c->r[31]+0x00000100u; psq_store(c,1,ea,0,7);} // 803F4A20
  {uint32_t ea=c->r[31]+0x00000102u; psq_store(c,0,ea,1,7);} // 803F4A24
  c->r[0]=0u+0x00000000u; // 803F4A28
  W8(c->r[31]+0x00000103u,c->r[0]); // 803F4A2C
  goto L_803F4AE8; // 803F4A30
L_803F4A34:;
  c->r[0]=c->r[5]^0x80000000u; // 803F4A34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F4A38
  c->r[3]=0u+0xE0000000u; // 803F4A3C
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[1]=RF64(ea);} // 803F4A40
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803F4A44
  c->r[4]=c->r[3]+0x00001CAFu; // 803F4A48
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803F4A4C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,2);} // 803F4A50
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803F4A54
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,1,7);} // 803F4A58
  c->r[0]=R32(c->r[3]+0x00001CACu); // 803F4A5C
  W32(c->r[31]+0x00000100u,c->r[0]); // 803F4A60
  goto L_803F4AE8; // 803F4A64
L_803F4A68:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 803F4A68
  cmps(c,0,(int32_t)c->r[0],3); // 803F4A6C
  if (!crb(c,2)) { goto L_803F4A78; } // 803F4A70
  c->r[0]=0u+0x00000001u; // 803F4A74
L_803F4A78:;
  cmps(c,0,(int32_t)c->r[0],1); // 803F4A78
  if (!crb(c,2)) { goto L_803F4A90; } // 803F4A7C
  c->r[3]=0u+0xE0000000u; // 803F4A80
  c->r[0]=R32(c->r[3]+0x00001CACu); // 803F4A84
  W32(c->r[31]+0x00000100u,c->r[0]); // 803F4A88
  goto L_803F4AE8; // 803F4A8C
L_803F4A90:;
  c->r[3]=0u+0xE0000000u; // 803F4A90
  c->r[5]=c->r[3]+0x00001CACu; // 803F4A94
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,2);} // 803F4A98
  c->r[4]=c->r[3]+0x00001CAEu; // 803F4A9C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,2);} // 803F4AA0
  {double t0=S(c->f[1]*c->ps1[0]), t1=S(c->ps1[1]*c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4AA4
  {double t0=S(c->f[0]*c->ps1[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4AA8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,7);} // 803F4AAC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,1,7);} // 803F4AB0
  c->r[0]=R32(c->r[3]+0x00001CACu); // 803F4AB4
  W32(c->r[31]+0x00000100u,c->r[0]); // 803F4AB8
  c->r[0]=R32(c->r[30]+0x00000188u); // 803F4ABC
  cmps(c,0,(int32_t)c->r[0],3); // 803F4AC0
  if (!crb(c,2)) { goto L_803F4ACC; } // 803F4AC4
  c->r[0]=0u+0x00000001u; // 803F4AC8
L_803F4ACC:;
  cmps(c,0,(int32_t)c->r[0],4); // 803F4ACC
  if (!crb(c,2)) { goto L_803F4AE0; } // 803F4AD0
  c->r[0]=0u+0x000000FFu; // 803F4AD4
  W8(c->r[31]+0x00000103u,c->r[0]); // 803F4AD8
  goto L_803F4AE8; // 803F4ADC
L_803F4AE0:;
  c->r[0]=0u+0x00000000u; // 803F4AE0
  W8(c->r[31]+0x00000103u,c->r[0]); // 803F4AE4
L_803F4AE8:;
  c->r[5]=R32(c->r[31]+0x00000078u); // 803F4AE8
  c->r[4]=0u+0x00000000u; // 803F4AEC
  cmps(c,0,(int32_t)c->r[5],0); // 803F4AF0
  if (crb(c,2)) { goto L_803F4B0C; } // 803F4AF4
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F4AF8
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F4AFC
  cmps(c,0,(int32_t)c->r[0],0); // 803F4B00
  if (crb(c,2)) { goto L_803F4B0C; } // 803F4B04
  c->r[4]=0u+0x00000001u; // 803F4B08
L_803F4B0C:;
  c->r[6]=R32(c->r[31]+0x0000006Cu); // 803F4B0C
  c->r[7]=R32(c->r[6]+0x00000084u); // 803F4B10
  c->r[0]=0u-c->r[7]; // 803F4B14
  c->r[0]=c->r[0]|c->r[7]; // 803F4B18
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803F4B1C
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 803F4B20
  if (crb(c,2)) { goto L_803F4CB8; } // 803F4B24
  c->r[4]=R32(c->r[31]+0x00000114u); // 803F4B28
  cmps(c,0,(int32_t)c->r[5],0); // 803F4B2C
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[4]=RF64(ea);} // 803F4B30
  c->r[0]=rotl(c->r[4],8)&0x000000FFu; // 803F4B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F4B38
  c->r[3]=rotl(c->r[4],16)&0x000000FFu; // 803F4B3C
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4B40
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803F4B44
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 803F4B48
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803F4B4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 803F4B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F4B54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803F4B58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 803F4B5C
  c->f[6]=c->ps1[6]=S(c->f[0]/c->f[3]); // 803F4B60
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4B64
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 803F4B68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 803F4B6C
  c->f[7]=c->ps1[7]=S(c->f[2]/c->f[3]); // 803F4B70
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 803F4B74
  if (crb(c,2)) { goto L_803F4B9C; } // 803F4B78
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F4B7C
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F4B80
  cmps(c,0,(int32_t)c->r[0],0); // 803F4B84
  if (crb(c,2)) { goto L_803F4B9C; } // 803F4B88
  {uint32_t ea=c->r[3]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4B8C
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4B90
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 803F4B94
  goto L_803F4BB0; // 803F4B98
L_803F4B9C:;
  cmps(c,0,(int32_t)c->r[7],0); // 803F4B9C
  if (crb(c,2)) { goto L_803F4BB0; } // 803F4BA0
  {uint32_t ea=c->r[6]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4BA4
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4BA8
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 803F4BAC
L_803F4BB0:;
  c->r[0]=R8(c->r[31]+0x00000100u); // 803F4BB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F4BB4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4BB8
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[4]=RF64(ea);} // 803F4BBC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 803F4BC0
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[0]); // 803F4BC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F4BC8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 803F4BCC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 803F4BD0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803F4BD4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 803F4BD8
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 803F4BDC
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 803F4BE0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803F4BE4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 803F4BE8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 803F4BEC
  c->r[3]=R32(c->r[1]+0x00000024u); // 803F4BF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803F4BF4
  cmps(c,0,(int32_t)c->r[0],255); // 803F4BF8
  if (!crb(c,1)) { goto L_803F4C04; } // 803F4BFC
  c->r[3]=0u+0x000000FFu; // 803F4C00
L_803F4C04:;
  c->r[0]=R8(c->r[31]+0x00000101u); // 803F4C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F4C08
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4C0C
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[4]=RF64(ea);} // 803F4C10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 803F4C14
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[0]); // 803F4C18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F4C1C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 803F4C20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 803F4C24
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803F4C28
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 803F4C2C
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 803F4C30
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 803F4C34
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803F4C38
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 803F4C3C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 803F4C40
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 803F4C44
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 803F4C48
  cmps(c,0,(int32_t)c->r[0],255); // 803F4C4C
  if (!crb(c,1)) { goto L_803F4C58; } // 803F4C50
  c->r[4]=0u+0x000000FFu; // 803F4C54
L_803F4C58:;
  c->r[0]=R8(c->r[31]+0x00000102u); // 803F4C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F4C5C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4C60
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[4]=RF64(ea);} // 803F4C64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 803F4C68
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[0]); // 803F4C6C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F4C70
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 803F4C74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 803F4C78
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803F4C7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803F4C80
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803F4C84
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[3]); // 803F4C88
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803F4C8C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F4C90
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 803F4C94
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 803F4C98
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 803F4C9C
  cmps(c,0,(int32_t)c->r[0],255); // 803F4CA0
  if (!crb(c,1)) { goto L_803F4CAC; } // 803F4CA4
  c->r[5]=0u+0x000000FFu; // 803F4CA8
L_803F4CAC:;
  W8(c->r[31]+0x00000100u,c->r[3]); // 803F4CAC
  W8(c->r[31]+0x00000101u,c->r[4]); // 803F4CB0
  W8(c->r[31]+0x00000102u,c->r[5]); // 803F4CB4
L_803F4CB8:;
  c->r[11]=c->r[1]+0x00000050u; // 803F4CB8
  c->lr=0x803F4CC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F4CBC
  c->r[0]=R32(c->r[1]+0x00000054u); // 803F4CC0
  c->lr=c->r[0]; // 803F4CC4
  c->r[1]=c->r[1]+0x00000050u; // 803F4CC8
  return; // 803F4CCC
}

// fn_803F4CD0
void f_803F4CD0(Ctx* __restrict c) {
  trace_call(0x803F4CD0u);
  c->r[0]=0u+0xFFFFFFFFu; // 803F4CD0
  W32(c->r[3]+0x00000000u,c->r[0]); // 803F4CD4
  return; // 803F4CD8
}

// fn_803F4CDC
void f_803F4CDC(Ctx* __restrict c) {
  trace_call(0x803F4CDCu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,2);} // 803F4CDC
  {uint32_t ea=c->r[3]+0x00000002u; psq_load(c,1,ea,0,2);} // 803F4CE0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,2);} // 803F4CE4
  {uint32_t ea=c->r[4]+0x00000002u; psq_load(c,3,ea,0,2);} // 803F4CE8
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4CEC
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4CF0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,7);} // 803F4CF4
  {uint32_t ea=c->r[3]+0x00000002u; psq_store(c,1,ea,0,7);} // 803F4CF8
  return; // 803F4CFC
}

// fn_803F4D00
void f_803F4D00(Ctx* __restrict c) {
  trace_call(0x803F4D00u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,2);} // 803F4D00
  {uint32_t ea=c->r[3]+0x00000002u; psq_load(c,2,ea,0,2);} // 803F4D04
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803F4D08
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F4D0C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,7);} // 803F4D10
  {uint32_t ea=c->r[3]+0x00000002u; psq_store(c,1,ea,1,7);} // 803F4D14
  return; // 803F4D18
}

// fn_803F4D1C
void f_803F4D1C(Ctx* __restrict c) {
  trace_call(0x803F4D1Cu);
  {uint32_t ea=c->r[3]+0x00000003u; psq_load(c,0,ea,1,2);} // 803F4D1C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803F4D20
  {uint32_t ea=c->r[3]+0x00000003u; psq_store(c,0,ea,1,7);} // 803F4D24
  return; // 803F4D28
}

// fn_803F4D2C
void f_803F4D2C(Ctx* __restrict c) {
  trace_call(0x803F4D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F4D2C
  c->r[0]=c->lr; // 803F4D30
  W32(c->r[1]+0x00000114u,c->r[0]); // 803F4D34
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 803F4D38
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 803F4D3C
  c->r[11]=c->r[1]+0x00000100u; // 803F4D40
  c->lr=0x803F4D48u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F4D44
  c->r[0]=R32(c->r[3]+0x00000190u); // 803F4D48
  c->r[25]=c->r[4]|c->r[4]; // 803F4D4C
  c->r[26]=c->r[5]|c->r[5]; // 803F4D50
  c->r[27]=c->r[6]|c->r[6]; // 803F4D54
  cmps(c,0,(int32_t)c->r[0],1); // 803F4D58
  c->r[28]=c->r[7]|c->r[7]; // 803F4D5C
  c->r[29]=c->r[8]|c->r[8]; // 803F4D60
  c->r[31]=c->r[9]|c->r[9]; // 803F4D64
  c->r[30]=c->r[10]|c->r[10]; // 803F4D68
  if (crb(c,2)) { goto L_803F4E0C; } // 803F4D6C
  cmps(c,0,(int32_t)c->r[0],2); // 803F4D70
  if (crb(c,2)) { goto L_803F4F08; } // 803F4D74
  cmps(c,0,(int32_t)c->r[0],3); // 803F4D78
  if (crb(c,2)) { goto L_803F5004; } // 803F4D7C
  cmps(c,0,(int32_t)c->r[0],4); // 803F4D80
  if (crb(c,2)) { goto L_803F50F8; } // 803F4D84
  cmps(c,0,(int32_t)c->r[0],6); // 803F4D88
  if (crb(c,2)) { goto L_803F519C; } // 803F4D8C
  cmps(c,0,(int32_t)c->r[0],7); // 803F4D90
  if (crb(c,2)) { goto L_803F5254; } // 803F4D94
  c->r[3]=c->r[3]+0x000001D4u; // 803F4D98
  c->lr=0x803F4DA0u; f_803E3900(c); // 803F4D9C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4DA0
  c->f[31]=c->f[1]; // 803F4DA4
  fcmp(c,0,c->f[1],c->f[0]); // 803F4DA8
  if (crb(c,2)) { goto L_803F4DF0; } // 803F4DAC
  c->lr=0x803F4DB4u; f_803F481C(c); // 803F4DB0
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4DB4
  c->r[31]=c->r[3]+0x00001C40u; // 803F4DB8
  c->r[3]=c->r[31]|c->r[31]; // 803F4DBC
  c->r[4]=c->r[27]|c->r[27]; // 803F4DC0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 803F4DC4
  c->lr=0x803F4DCCu; f_803E32E8(c); // 803F4DC8
  c->r[4]=c->r[31]|c->r[31]; // 803F4DCC
  c->r[5]=c->r[28]|c->r[28]; // 803F4DD0
  c->r[3]=c->r[25]+0x000000D0u; // 803F4DD4
  c->lr=0x803F4DDCu; f_803E541C(c); // 803F4DD8
  c->r[4]=c->r[31]|c->r[31]; // 803F4DDC
  c->r[5]=c->r[29]|c->r[29]; // 803F4DE0
  c->r[3]=c->r[25]+0x000000E0u; // 803F4DE4
  c->lr=0x803F4DECu; f_803E541C(c); // 803F4DE8
  goto L_803F52AC; // 803F4DEC
L_803F4DF0:;
  c->r[4]=c->r[28]|c->r[28]; // 803F4DF0
  c->r[3]=c->r[25]+0x000000D0u; // 803F4DF4
  c->lr=0x803F4DFCu; f_803E53A0(c); // 803F4DF8
  c->r[4]=c->r[29]|c->r[29]; // 803F4DFC
  c->r[3]=c->r[25]+0x000000E0u; // 803F4E00
  c->lr=0x803F4E08u; f_803E53A0(c); // 803F4E04
  goto L_803F52AC; // 803F4E08
L_803F4E0C:;
  c->r[3]=c->r[3]+0x000001D4u; // 803F4E0C
  c->lr=0x803F4E14u; f_803E3900(c); // 803F4E10
  c->f[31]=c->f[1]; // 803F4E14
  c->r[3]=c->r[1]+0x000000D0u; // 803F4E18
  c->lr=0x803F4E20u; f_803E49FC(c); // 803F4E1C
  c->r[3]=c->r[1]+0x000000C0u; // 803F4E20
  c->lr=0x803F4E28u; f_803E49FC(c); // 803F4E24
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4E28
  fcmp(c,0,c->f[31],c->f[2]); // 803F4E2C
  if (crb(c,2)) { goto L_803F4E7C; } // 803F4E30
  c->f[1]=c->f[31]; // 803F4E34
  c->r[3]=c->r[1]+0x0000001Cu; // 803F4E38
  c->r[4]=c->r[1]+0x00000018u; // 803F4E3C
  c->lr=0x803F4E44u; f_803E5CE4(c); // 803F4E40
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4E44
  c->r[3]=c->r[1]+0x000000D0u; // 803F4E48
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4E4C
  c->f[1]=-c->f[0]; // 803F4E50
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4E54
  c->lr=0x803F4E5Cu; f_803E5508(c); // 803F4E58
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4E5C
  c->r[3]=c->r[1]+0x000000C0u; // 803F4E60
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4E64
  c->f[1]=-c->f[1]; // 803F4E68
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4E6C
  c->f[2]=-c->f[0]; // 803F4E70
  c->lr=0x803F4E78u; f_803E5508(c); // 803F4E74
  goto L_803F4EA0; // 803F4E78
L_803F4E7C:;
  c->f[3]=c->f[2]; // 803F4E7C
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4E80
  c->r[3]=c->r[1]+0x000000D0u; // 803F4E84
  c->lr=0x803F4E8Cu; f_803E5508(c); // 803F4E88
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4E8C
  c->r[3]=c->r[1]+0x000000C0u; // 803F4E90
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4E94
  c->f[3]=c->f[1]; // 803F4E98
  c->lr=0x803F4EA0u; f_803E5508(c); // 803F4E9C
L_803F4EA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F4EA0
  if (crb(c,2)) { goto L_803F4EE4; } // 803F4EA4
  c->lr=0x803F4EACu; f_803F481C(c); // 803F4EA8
  c->r[31]=c->r[3]+0x00001C40u; // 803F4EAC
  c->r[4]=c->r[30]|c->r[30]; // 803F4EB0
  c->r[3]=c->r[31]|c->r[31]; // 803F4EB4
  c->r[5]=c->r[25]+0x00000008u; // 803F4EB8
  c->lr=0x803F4EC0u; f_803F5314(c); // 803F4EBC
  c->r[4]=c->r[31]|c->r[31]; // 803F4EC0
  c->r[3]=c->r[25]+0x000000D0u; // 803F4EC4
  c->r[5]=c->r[1]+0x000000D0u; // 803F4EC8
  c->lr=0x803F4ED0u; f_803E541C(c); // 803F4ECC
  c->r[4]=c->r[31]|c->r[31]; // 803F4ED0
  c->r[3]=c->r[25]+0x000000E0u; // 803F4ED4
  c->r[5]=c->r[1]+0x000000C0u; // 803F4ED8
  c->lr=0x803F4EE0u; f_803E541C(c); // 803F4EDC
  goto L_803F52AC; // 803F4EE0
L_803F4EE4:;
  c->r[3]=c->r[25]+0x000000D0u; // 803F4EE4
  c->r[4]=c->r[25]+0x00000008u; // 803F4EE8
  c->r[5]=c->r[1]+0x000000D0u; // 803F4EEC
  c->lr=0x803F4EF4u; f_803E541C(c); // 803F4EF0
  c->r[3]=c->r[25]+0x000000E0u; // 803F4EF4
  c->r[4]=c->r[25]+0x00000008u; // 803F4EF8
  c->r[5]=c->r[1]+0x000000C0u; // 803F4EFC
  c->lr=0x803F4F04u; f_803E541C(c); // 803F4F00
  goto L_803F52AC; // 803F4F04
L_803F4F08:;
  c->r[3]=c->r[3]+0x000001D4u; // 803F4F08
  c->lr=0x803F4F10u; f_803E3900(c); // 803F4F0C
  c->f[31]=c->f[1]; // 803F4F10
  c->r[3]=c->r[1]+0x000000B0u; // 803F4F14
  c->lr=0x803F4F1Cu; f_803E49FC(c); // 803F4F18
  c->r[3]=c->r[1]+0x000000A0u; // 803F4F1C
  c->lr=0x803F4F24u; f_803E49FC(c); // 803F4F20
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4F24
  fcmp(c,0,c->f[31],c->f[2]); // 803F4F28
  if (crb(c,2)) { goto L_803F4F78; } // 803F4F2C
  c->f[1]=c->f[31]; // 803F4F30
  c->r[3]=c->r[1]+0x00000014u; // 803F4F34
  c->r[4]=c->r[1]+0x00000010u; // 803F4F38
  c->lr=0x803F4F40u; f_803E5CE4(c); // 803F4F3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4F40
  c->r[3]=c->r[1]+0x000000B0u; // 803F4F44
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4F48
  c->f[1]=-c->f[0]; // 803F4F4C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4F50
  c->lr=0x803F4F58u; f_803E5508(c); // 803F4F54
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4F58
  c->r[3]=c->r[1]+0x000000A0u; // 803F4F5C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F4F60
  c->f[1]=-c->f[1]; // 803F4F64
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F4F68
  c->f[3]=-c->f[0]; // 803F4F6C
  c->lr=0x803F4F74u; f_803E5508(c); // 803F4F70
  goto L_803F4F9C; // 803F4F74
L_803F4F78:;
  c->f[3]=c->f[2]; // 803F4F78
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4F7C
  c->r[3]=c->r[1]+0x000000B0u; // 803F4F80
  c->lr=0x803F4F88u; f_803E5508(c); // 803F4F84
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F4F88
  c->r[3]=c->r[1]+0x000000A0u; // 803F4F8C
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F4F90
  c->f[2]=c->f[1]; // 803F4F94
  c->lr=0x803F4F9Cu; f_803E5508(c); // 803F4F98
L_803F4F9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F4F9C
  if (crb(c,2)) { goto L_803F4FE0; } // 803F4FA0
  c->lr=0x803F4FA8u; f_803F481C(c); // 803F4FA4
  c->r[31]=c->r[3]+0x00001C40u; // 803F4FA8
  c->r[4]=c->r[30]|c->r[30]; // 803F4FAC
  c->r[3]=c->r[31]|c->r[31]; // 803F4FB0
  c->r[5]=c->r[25]+0x00000008u; // 803F4FB4
  c->lr=0x803F4FBCu; f_803F5314(c); // 803F4FB8
  c->r[4]=c->r[31]|c->r[31]; // 803F4FBC
  c->r[3]=c->r[25]+0x000000D0u; // 803F4FC0
  c->r[5]=c->r[1]+0x000000B0u; // 803F4FC4
  c->lr=0x803F4FCCu; f_803E541C(c); // 803F4FC8
  c->r[4]=c->r[31]|c->r[31]; // 803F4FCC
  c->r[3]=c->r[25]+0x000000E0u; // 803F4FD0
  c->r[5]=c->r[1]+0x000000A0u; // 803F4FD4
  c->lr=0x803F4FDCu; f_803E541C(c); // 803F4FD8
  goto L_803F52AC; // 803F4FDC
L_803F4FE0:;
  c->r[3]=c->r[25]+0x000000D0u; // 803F4FE0
  c->r[4]=c->r[25]+0x00000008u; // 803F4FE4
  c->r[5]=c->r[1]+0x000000B0u; // 803F4FE8
  c->lr=0x803F4FF0u; f_803E541C(c); // 803F4FEC
  c->r[3]=c->r[25]+0x000000E0u; // 803F4FF0
  c->r[4]=c->r[25]+0x00000008u; // 803F4FF4
  c->r[5]=c->r[1]+0x000000A0u; // 803F4FF8
  c->lr=0x803F5000u; f_803E541C(c); // 803F4FFC
  goto L_803F52AC; // 803F5000
L_803F5004:;
  c->r[3]=c->r[3]+0x000001D4u; // 803F5004
  c->lr=0x803F500Cu; f_803E3900(c); // 803F5008
  c->f[31]=c->f[1]; // 803F500C
  c->r[3]=c->r[1]+0x00000090u; // 803F5010
  c->lr=0x803F5018u; f_803E49FC(c); // 803F5014
  c->r[3]=c->r[1]+0x00000080u; // 803F5018
  c->lr=0x803F5020u; f_803E49FC(c); // 803F501C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5020
  fcmp(c,0,c->f[31],c->f[1]); // 803F5024
  if (crb(c,2)) { goto L_803F506C; } // 803F5028
  c->f[1]=c->f[31]; // 803F502C
  c->r[3]=c->r[1]+0x0000000Cu; // 803F5030
  c->r[4]=c->r[1]+0x00000008u; // 803F5034
  c->lr=0x803F503Cu; f_803E5CE4(c); // 803F5038
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F503C
  c->r[3]=c->r[1]+0x00000090u; // 803F5040
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5044
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5048
  c->lr=0x803F5050u; f_803E5508(c); // 803F504C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5050
  c->r[3]=c->r[1]+0x00000080u; // 803F5054
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5058
  c->f[2]=-c->f[0]; // 803F505C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5060
  c->lr=0x803F5068u; f_803E5508(c); // 803F5064
  goto L_803F5090; // 803F5068
L_803F506C:;
  c->f[2]=c->f[1]; // 803F506C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5070
  c->r[3]=c->r[1]+0x00000090u; // 803F5074
  c->lr=0x803F507Cu; f_803E5508(c); // 803F5078
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F507C
  c->r[3]=c->r[1]+0x00000080u; // 803F5080
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5084
  c->f[3]=c->f[1]; // 803F5088
  c->lr=0x803F5090u; f_803E5508(c); // 803F508C
L_803F5090:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F5090
  if (crb(c,2)) { goto L_803F50D4; } // 803F5094
  c->lr=0x803F509Cu; f_803F481C(c); // 803F5098
  c->r[31]=c->r[3]+0x00001C40u; // 803F509C
  c->r[4]=c->r[30]|c->r[30]; // 803F50A0
  c->r[3]=c->r[31]|c->r[31]; // 803F50A4
  c->r[5]=c->r[25]+0x00000008u; // 803F50A8
  c->lr=0x803F50B0u; f_803F5314(c); // 803F50AC
  c->r[4]=c->r[31]|c->r[31]; // 803F50B0
  c->r[3]=c->r[25]+0x000000D0u; // 803F50B4
  c->r[5]=c->r[1]+0x00000090u; // 803F50B8
  c->lr=0x803F50C0u; f_803E541C(c); // 803F50BC
  c->r[4]=c->r[31]|c->r[31]; // 803F50C0
  c->r[3]=c->r[25]+0x000000E0u; // 803F50C4
  c->r[5]=c->r[1]+0x00000080u; // 803F50C8
  c->lr=0x803F50D0u; f_803E541C(c); // 803F50CC
  goto L_803F52AC; // 803F50D0
L_803F50D4:;
  c->r[3]=c->r[25]+0x000000D0u; // 803F50D4
  c->r[4]=c->r[25]+0x00000008u; // 803F50D8
  c->r[5]=c->r[1]+0x00000090u; // 803F50DC
  c->lr=0x803F50E4u; f_803E541C(c); // 803F50E0
  c->r[3]=c->r[25]+0x000000E0u; // 803F50E4
  c->r[4]=c->r[25]+0x00000008u; // 803F50E8
  c->r[5]=c->r[1]+0x00000080u; // 803F50EC
  c->lr=0x803F50F4u; f_803E541C(c); // 803F50F0
  goto L_803F52AC; // 803F50F4
L_803F50F8:;
  c->r[3]=c->r[1]+0x00000070u; // 803F50F8
  c->lr=0x803F5100u; f_803E49FC(c); // 803F50FC
  c->r[5]=c->r[26]|c->r[26]; // 803F5100
  c->r[3]=c->r[1]+0x00000070u; // 803F5104
  c->r[4]=c->r[25]+0x000000C0u; // 803F5108
  c->lr=0x803F5110u; f_803E4A00(c); // 803F510C
  c->r[3]=c->r[1]+0x00000070u; // 803F5110
  c->lr=0x803F5118u; f_803F5318(c); // 803F5114
  {uint32_t ea=c->r[25]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5118
  {uint32_t ea=c->r[25]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F511C
  {uint32_t ea=c->r[2]+0xFFFFA844u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5120
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803F5124
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803F5128
  fcmp(c,0,c->f[1],c->f[0]); // 803F512C
  if (!crb(c,1)) { goto L_803F5180; } // 803F5130
  c->r[4]=c->r[27]|c->r[27]; // 803F5134
  c->r[3]=c->r[1]+0x00000060u; // 803F5138
  c->lr=0x803F5140u; f_803E536C(c); // 803F513C
  c->r[3]=c->r[1]+0x00000070u; // 803F5140
  c->r[4]=c->r[1]+0x00000060u; // 803F5144
  c->lr=0x803F514Cu; f_803EC49C(c); // 803F5148
  c->r[3]=c->r[1]+0x00000060u; // 803F514C
  c->lr=0x803F5154u; f_803E7614(c); // 803F5150
  c->r[3]=c->r[25]+0x000000D0u; // 803F5154
  c->r[4]=c->r[1]+0x00000060u; // 803F5158
  c->r[5]=c->r[1]+0x00000070u; // 803F515C
  c->lr=0x803F5164u; f_803E4A00(c); // 803F5160
  c->r[3]=c->r[25]+0x000000D0u; // 803F5164
  c->lr=0x803F516Cu; f_803F536C(c); // 803F5168
  c->r[5]=c->r[27]|c->r[27]; // 803F516C
  c->r[3]=c->r[25]+0x000000E0u; // 803F5170
  c->r[4]=c->r[25]+0x000000D0u; // 803F5174
  c->lr=0x803F517Cu; f_803E54A8(c); // 803F5178
  goto L_803F52AC; // 803F517C
L_803F5180:;
  c->r[4]=c->r[28]|c->r[28]; // 803F5180
  c->r[3]=c->r[25]+0x000000D0u; // 803F5184
  c->lr=0x803F518Cu; f_803E53A0(c); // 803F5188
  c->r[4]=c->r[29]|c->r[29]; // 803F518C
  c->r[3]=c->r[25]+0x000000E0u; // 803F5190
  c->lr=0x803F5198u; f_803E53A0(c); // 803F5194
  goto L_803F52AC; // 803F5198
L_803F519C:;
  c->r[3]=c->r[3]+0x00000198u; // 803F519C
  c->lr=0x803F51A4u; f_803E3900(c); // 803F51A0
  c->f[31]=c->f[1]; // 803F51A4
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F51A8
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F51AC
  c->r[3]=c->r[1]+0x00000020u; // 803F51B0
  c->f[3]=c->f[1]; // 803F51B4
  c->f[4]=c->f[1]; // 803F51B8
  c->lr=0x803F51C0u; f_803E54F4(c); // 803F51BC
  c->r[5]=c->r[3]|c->r[3]; // 803F51C0
  c->r[3]=c->r[25]+0x000000D0u; // 803F51C4
  c->r[4]=c->r[25]+0x00000008u; // 803F51C8
  c->lr=0x803F51D0u; f_803E541C(c); // 803F51CC
  c->f[1]=c->f[31]; // 803F51D0
  c->r[3]=c->r[25]+0x000000D0u; // 803F51D4
  c->lr=0x803F51DCu; f_803E7614(c); // 803F51D8
  cmps(c,0,(int32_t)c->r[31],0); // 803F51DC
  if (crb(c,2)) { goto L_803F51F4; } // 803F51E0
  c->r[3]=c->r[25]+0x000000D0u; // 803F51E4
  c->r[4]=c->r[30]|c->r[30]; // 803F51E8
  c->r[5]=c->r[3]|c->r[3]; // 803F51EC
  c->lr=0x803F51F4u; f_803E541C(c); // 803F51F0
L_803F51F4:;
  c->r[5]=c->r[27]|c->r[27]; // 803F51F4
  c->r[3]=c->r[25]+0x000000E0u; // 803F51F8
  c->r[4]=c->r[25]+0x000000D0u; // 803F51FC
  c->lr=0x803F5204u; f_803E54A8(c); // 803F5200
  c->r[3]=c->r[25]+0x000000E0u; // 803F5204
  c->lr=0x803F520Cu; f_803E4A34(c); // 803F5208
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F520C
  fcmp(c,0,c->f[1],c->f[0]); // 803F5210
  if (!crb(c,1)) { goto L_803F5220; } // 803F5214
  c->r[3]=c->r[25]+0x000000E0u; // 803F5218
  c->lr=0x803F5220u; f_803E5484(c); // 803F521C
L_803F5220:;
  c->r[3]=c->r[1]+0x00000050u; // 803F5220
  c->lr=0x803F5228u; f_803E49FC(c); // 803F5224
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5228
  c->r[3]=c->r[1]+0x00000050u; // 803F522C
  c->r[4]=c->r[25]+0x000000D0u; // 803F5230
  c->lr=0x803F5238u; f_803E52DC(c); // 803F5234
  c->r[3]=c->r[25]+0x000000C0u; // 803F5238
  c->r[4]=c->r[1]+0x00000050u; // 803F523C
  c->lr=0x803F5244u; f_803E52F8(c); // 803F5240
  {uint32_t ea=c->r[25]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5244
  c->r[3]=c->r[25]+0x000000D0u; // 803F5248
  c->lr=0x803F5250u; f_803E5484(c); // 803F524C
  goto L_803F52AC; // 803F5250
L_803F5254:;
  c->r[3]=c->r[1]+0x00000040u; // 803F5254
  c->lr=0x803F525Cu; f_803E49FC(c); // 803F5258
  c->r[3]=c->r[1]+0x00000030u; // 803F525C
  c->lr=0x803F5264u; f_803E49FC(c); // 803F5260
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5264
  c->r[3]=c->r[1]+0x00000040u; // 803F5268
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F526C
  c->f[3]=c->f[2]; // 803F5270
  c->lr=0x803F5278u; f_803E5508(c); // 803F5274
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5278
  c->r[3]=c->r[1]+0x00000030u; // 803F527C
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5280
  c->f[2]=c->f[1]; // 803F5284
  c->lr=0x803F528Cu; f_803E5508(c); // 803F5288
  c->r[3]=c->r[25]+0x000000D0u; // 803F528C
  c->r[4]=c->r[25]+0x00000008u; // 803F5290
  c->r[5]=c->r[1]+0x00000040u; // 803F5294
  c->lr=0x803F529Cu; f_803E541C(c); // 803F5298
  c->r[3]=c->r[25]+0x000000E0u; // 803F529C
  c->r[4]=c->r[25]+0x00000008u; // 803F52A0
  c->r[5]=c->r[1]+0x00000030u; // 803F52A4
  c->lr=0x803F52ACu; f_803E541C(c); // 803F52A8
L_803F52AC:;
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 803F52AC
  c->r[11]=c->r[1]+0x00000100u; // 803F52B0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 803F52B4
  c->lr=0x803F52BCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F52B8
  c->r[0]=R32(c->r[1]+0x00000114u); // 803F52BC
  c->lr=c->r[0]; // 803F52C0
  c->r[1]=c->r[1]+0x00000110u; // 803F52C4
  return; // 803F52C8
}

// fn_803F52CC
void f_803F52CC(Ctx* __restrict c) {
  trace_call(0x803F52CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F52CC
  c->r[0]=c->lr; // 803F52D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F52D4
  c->lr=0x803F52DCu; f_803AD314(c); // 803F52D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F52DC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803F52E0
  c->lr=c->r[0]; // 803F52E4
  c->r[1]=c->r[1]+0x00000010u; // 803F52E8
  return; // 803F52EC
}

// fn_803F52F0
void f_803F52F0(Ctx* __restrict c) {
  trace_call(0x803F52F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F52F0
  c->r[0]=c->lr; // 803F52F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F52F8
  c->lr=0x803F5300u; f_803ACF08(c); // 803F52FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803F5300
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803F5304
  c->lr=c->r[0]; // 803F5308
  c->r[1]=c->r[1]+0x00000010u; // 803F530C
  return; // 803F5310
}

// fn_803F5314
void f_803F5314(Ctx* __restrict c) {
  trace_call(0x803F5314u);
  f_803E2FB4(c); return; // 803F5314
}

// fn_803F5318
void f_803F5318(Ctx* __restrict c) {
  trace_call(0x803F5318u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F5318
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F531C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803F5320
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5324
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 803F5328
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F532C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 803F5330
  fcmp(c,0,c->f[1],c->f[0]); // 803F5334
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803F5338
  if (!crb(c,2)) { goto L_803F5348; } // 803F533C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5340
  return; // 803F5344
L_803F5348:;
  c->f[0]=frsqrte(c->f[1]); // 803F5348
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F534C
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F5350
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 803F5354
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803F5358
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 803F535C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F5360
  c->f[1]=(c->f[0]>=0.0)?c->f[0]:c->f[1]; // 803F5364
  return; // 803F5368
}

// fn_803F536C
void f_803F536C(Ctx* __restrict c) {
  trace_call(0x803F536Cu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F536C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5370
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F5374
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5378
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 803F537C
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F5380
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803F5384
  fcmp(c,0,c->f[1],c->f[2]); // 803F5388
  if (!crb(c,1)) return; // 803F538C
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5390
  fcmp(c,0,c->f[1],c->f[0]); // 803F5394
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803F5398
  if (!crb(c,2)) { goto L_803F53A4; } // 803F539C
  goto L_803F53C4; // 803F53A0
L_803F53A4:;
  c->f[0]=frsqrte(c->f[1]); // 803F53A4
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F53A8
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F53AC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 803F53B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803F53B4
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 803F53B8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F53BC
  c->f[2]=(c->f[0]>=0.0)?c->f[0]:c->f[1]; // 803F53C0
L_803F53C4:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F53C4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F53C8
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F53CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803F53D0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F53D4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803F53D8
  return; // 803F53DC
}

// fn_803F53E0
void f_803F53E0(Ctx* __restrict c) {
  trace_call(0x803F53E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F53E0
  c->r[0]=c->lr; // 803F53E4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803F53E8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 803F53EC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 803F53F0
  c->r[11]=c->r[1]+0x000000B0u; // 803F53F4
  c->lr=0x803F53FCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F53F8
  c->r[31]=0u+0x80570000u; // 803F53FC
  c->r[27]=c->r[3]|c->r[3]; // 803F5400
  c->r[28]=c->r[4]|c->r[4]; // 803F5404
  c->r[31]=c->r[31]+0x00002BF0u; // 803F5408
  c->lr=0x803F5410u; f_803E99C8(c); // 803F540C
  c->lr=0x803F5414u; f_803F43C0(c); // 803F5410
  cmps(c,0,(int32_t)c->r[3],0); // 803F5414
  if (crb(c,2)) { goto L_803F59FC; } // 803F5418
  c->r[0]=R32(c->r[13]+0xFFFFF410u); // 803F541C
  cmps(c,0,(int32_t)c->r[0],0); // 803F5420
  if (!crb(c,2)) { goto L_803F542C; } // 803F5424
  c->lr=0x803F542Cu; f_803F3DC8(c); // 803F5428
L_803F542C:;
  c->r[0]=R8(c->r[13]+0xFFFFF420u); // 803F542C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803F5430
  if (!crb(c,2)) { goto L_803F5448; } // 803F5434
  c->r[3]=c->r[31]+0x00001440u; // 803F5438
  c->lr=0x803F5440u; f_803E49FC(c); // 803F543C
  c->r[0]=0u+0x00000001u; // 803F5440
  W8(c->r[13]+0xFFFFF420u,c->r[0]); // 803F5444
L_803F5448:;
  c->r[0]=R8(c->r[13]+0xFFFFF421u); // 803F5448
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803F544C
  if (!crb(c,2)) { goto L_803F5464; } // 803F5450
  c->r[3]=c->r[31]+0x00001450u; // 803F5454
  c->lr=0x803F545Cu; f_803E49FC(c); // 803F5458
  c->r[0]=0u+0x00000001u; // 803F545C
  W8(c->r[13]+0xFFFFF421u,c->r[0]); // 803F5460
L_803F5464:;
  c->r[0]=R8(c->r[13]+0xFFFFF422u); // 803F5464
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803F5468
  if (!crb(c,2)) { goto L_803F5480; } // 803F546C
  c->r[3]=c->r[31]+0x00001460u; // 803F5470
  c->lr=0x803F5478u; f_803E49FC(c); // 803F5474
  c->r[0]=0u+0x00000001u; // 803F5478
  W8(c->r[13]+0xFFFFF422u,c->r[0]); // 803F547C
L_803F5480:;
  c->r[3]=0u+0x80570000u; // 803F5480
  c->r[0]=R32(c->r[13]+0xFFFFDF38u); // 803F5484
  c->r[3]=c->r[3]+0x000041A8u; // 803F5488
  c->r[3]=R32(c->r[3]+0x00000004u); // 803F548C
  W32(c->r[13]+0xFFFFF414u,c->r[3]); // 803F5490
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803F5494
  if (crb(c,2)) { goto L_803F5564; } // 803F5498
  c->lr=0x803F54A0u; f_803E99C8(c); // 803F549C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F54A0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F54A4
  c->ctr=c->r[12]; // 803F54A8
  if (true) { c->lr=0x803F54B0u; dispatch(c,c->ctr); } // 803F54AC
  W32(c->r[13]+0xFFFFF418u,c->r[3]); // 803F54B0
  c->lr=0x803F54B8u; f_803E99C8(c); // 803F54B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F54B8
  c->r[12]=R32(c->r[12]+0x00000070u); // 803F54BC
  c->ctr=c->r[12]; // 803F54C0
  if (true) { c->lr=0x803F54C8u; dispatch(c,c->ctr); } // 803F54C4
  W32(c->r[13]+0xFFFFF41Cu,c->r[3]); // 803F54C8
  c->r[3]=c->r[1]+0x00000018u; // 803F54CC
  c->lr=0x803F54D4u; f_803E49FC(c); // 803F54D0
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F54D4
  c->r[3]=c->r[1]+0x00000018u; // 803F54D8
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F54DC
  c->f[2]=c->f[1]; // 803F54E0
  c->lr=0x803F54E8u; f_803E5508(c); // 803F54E4
  c->r[4]=R32(c->r[13]+0xFFFFF41Cu); // 803F54E8
  c->r[3]=c->r[31]+0x00001440u; // 803F54EC
  c->r[5]=c->r[1]+0x00000018u; // 803F54F0
  c->lr=0x803F54F8u; f_803E541C(c); // 803F54F4
  c->r[4]=R32(c->r[13]+0xFFFFF41Cu); // 803F54F8
  c->r[3]=c->r[31]+0x00001450u; // 803F54FC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5500
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5504
  {uint32_t ea=c->r[4]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5508
  c->lr=0x803F5510u; f_803E5508(c); // 803F550C
  c->r[4]=R32(c->r[13]+0xFFFFF41Cu); // 803F5510
  c->r[3]=c->r[31]+0x00001460u; // 803F5514
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5518
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F551C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5520
  c->lr=0x803F5528u; f_803E5508(c); // 803F5524
  c->r[0]=R32(c->r[13]+0xFFFFF414u); // 803F5528
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 803F552C
  W32(c->r[13]+0xFFFFF424u,c->r[0]); // 803F5530
  c->lr=0x803F5538u; f_803E99C8(c); // 803F5534
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F5538
  c->r[12]=R32(c->r[12]+0x00000084u); // 803F553C
  c->ctr=c->r[12]; // 803F5540
  if (true) { c->lr=0x803F5548u; dispatch(c,c->ctr); } // 803F5544
  cmps(c,0,(int32_t)c->r[3],0); // 803F5548
  c->r[3]=0u+0x00000020u; // 803F554C
  if (!crb(c,2)) { goto L_803F5558; } // 803F5550
  c->r[3]=0u+0x00000010u; // 803F5554
L_803F5558:;
  c->r[0]=R32(c->r[13]+0xFFFFF414u); // 803F5558
  W32(c->r[13]+0xFFFFF428u,c->r[3]); // 803F555C
  W32(c->r[13]+0xFFFFDF38u,c->r[0]); // 803F5560
L_803F5564:;
  c->r[3]=c->r[1]+0x00000028u; // 803F5564
  c->lr=0x803F556Cu; f_803F5A84(c); // 803F5568
  c->r[3]=c->r[1]+0x00000040u; // 803F556C
  c->lr=0x803F5574u; f_803F5A84(c); // 803F5570
  c->r[3]=c->r[1]+0x00000058u; // 803F5574
  c->lr=0x803F557Cu; f_803F5A84(c); // 803F5578
  c->r[3]=c->r[1]+0x00000070u; // 803F557C
  c->lr=0x803F5584u; f_803F5A84(c); // 803F5580
  c->r[26]=R32(c->r[28]+0x00000068u); // 803F5584
  c->r[30]=0u+0x00000000u; // 803F5588
  cmps(c,0,(int32_t)c->r[26],0); // 803F558C
  if (crb(c,2)) { goto L_803F55A8; } // 803F5590
  c->r[3]=c->r[26]|c->r[26]; // 803F5594
  c->lr=0x803F559Cu; f_803E5414(c); // 803F5598
  cmps(c,0,(int32_t)c->r[3],0); // 803F559C
  if (crb(c,2)) { goto L_803F55A8; } // 803F55A0
  c->r[30]=0u+0x00000001u; // 803F55A4
L_803F55A8:;
  c->r[3]=c->r[1]+0x00000008u; // 803F55A8
  c->lr=0x803F55B0u; f_803E49FC(c); // 803F55AC
  cmps(c,0,(int32_t)c->r[26],0); // 803F55B0
  if (crb(c,2)) { goto L_803F55CC; } // 803F55B4
  c->r[3]=c->r[26]|c->r[26]; // 803F55B8
  c->lr=0x803F55C0u; f_803EC3EC(c); // 803F55BC
  c->r[4]=c->r[3]|c->r[3]; // 803F55C0
  c->r[3]=c->r[1]+0x00000008u; // 803F55C4
  c->lr=0x803F55CCu; f_803E53A0(c); // 803F55C8
L_803F55CC:;
  c->r[6]=R32(c->r[13]+0xFFFFF424u); // 803F55CC
  c->r[3]=c->r[27]|c->r[27]; // 803F55D0
  c->r[7]=R32(c->r[13]+0xFFFFF428u); // 803F55D4
  c->r[4]=c->r[28]|c->r[28]; // 803F55D8
  c->r[8]=R32(c->r[13]+0xFFFFF418u); // 803F55DC
  c->r[5]=c->r[26]|c->r[26]; // 803F55E0
  c->r[9]=c->r[1]+0x00000008u; // 803F55E4
  c->lr=0x803F55ECu; f_803F456C(c); // 803F55E8
  cmps(c,0,(int32_t)c->r[3],0); // 803F55EC
  if (crb(c,2)) { goto L_803F59FC; } // 803F55F0
  cmps(c,0,(int32_t)c->r[26],0); // 803F55F4
  if (crb(c,2)) { goto L_803F5608; } // 803F55F8
  c->r[3]=c->r[26]|c->r[26]; // 803F55FC
  c->lr=0x803F5604u; f_803EC3E4(c); // 803F5600
  goto L_803F5610; // 803F5604
L_803F5608:;
  c->r[3]=0u+0x80570000u; // 803F5608
  c->r[3]=c->r[3]+0x00002A80u; // 803F560C
L_803F5610:;
  {uint32_t ea=c->r[28]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5610
  c->r[29]=c->r[3]|c->r[3]; // 803F5614
  {uint32_t ea=c->r[28]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5618
  {uint32_t ea=c->r[28]+0x00000104u; WF32(ea,c->f[1]);} // 803F561C
  {uint32_t ea=c->r[28]+0x00000108u; WF32(ea,c->f[0]);} // 803F5620
  c->r[0]=R32(c->r[27]+0x000001B8u); // 803F5624
  cmps(c,0,(int32_t)c->r[0],0); // 803F5628
  if (crb(c,2)) { goto L_803F563C; } // 803F562C
  c->r[4]=R32(c->r[13]+0xFFFFF418u); // 803F5630
  c->r[3]=c->r[28]|c->r[28]; // 803F5634
  c->lr=0x803F563Cu; f_803F4220(c); // 803F5638
L_803F563C:;
  c->r[3]=c->r[28]+0x000000C0u; // 803F563C
  c->r[4]=c->r[28]+0x00000038u; // 803F5640
  c->lr=0x803F5648u; f_803E53A0(c); // 803F5644
  c->r[0]=R32(c->r[27]+0x000001BCu); // 803F5648
  cmps(c,0,(int32_t)c->r[0],0); // 803F564C
  if (crb(c,2)) { goto L_803F5664; } // 803F5650
  {uint32_t ea=c->r[28]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5654
  {uint32_t ea=c->r[28]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5658
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F565C
  {uint32_t ea=c->r[28]+0x000000C4u; WF32(ea,c->f[0]);} // 803F5660
L_803F5664:;
  c->r[0]=R32(c->r[28]+0x00000068u); // 803F5664
  cmps(c,0,(int32_t)c->r[0],0); // 803F5668
  if (crb(c,2)) { goto L_803F5688; } // 803F566C
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 803F5670
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 803F5674
  cmps(c,0,(int32_t)c->r[0],0); // 803F5678
  if (crb(c,2)) { goto L_803F5688; } // 803F567C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5680
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803F5684
L_803F5688:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F5688
  if (crb(c,2)) { goto L_803F573C; } // 803F568C
  cmps(c,0,(int32_t)c->r[30],0); // 803F5690
  if (crb(c,2)) { goto L_803F5730; } // 803F5694
  c->r[3]=R32(c->r[28]+0x00000078u); // 803F5698
  cmps(c,0,(int32_t)c->r[3],0); // 803F569C
  if (crb(c,2)) { goto L_803F5714; } // 803F56A0
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803F56A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F56A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F56AC
  c->ctr=c->r[12]; // 803F56B0
  if (true) { c->lr=0x803F56B8u; dispatch(c,c->ctr); } // 803F56B4
  cmps(c,0,(int32_t)c->r[3],2); // 803F56B8
  if (!crb(c,2)) { goto L_803F56F4; } // 803F56BC
  c->r[3]=R32(c->r[28]+0x00000078u); // 803F56C0
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803F56C4
  c->r[0]=R32(c->r[3]+0x000001C0u); // 803F56C8
  cmps(c,0,(int32_t)c->r[0],0); // 803F56CC
  if (!crb(c,2)) { goto L_803F5730; } // 803F56D0
  c->r[4]=c->r[26]|c->r[26]; // 803F56D4
  c->r[3]=c->r[28]+0x000000C0u; // 803F56D8
  c->lr=0x803F56E0u; f_803E52F8(c); // 803F56DC
  c->r[3]=c->r[28]+0x000000C0u; // 803F56E0
  c->r[4]=c->r[29]|c->r[29]; // 803F56E4
  c->r[5]=c->r[3]|c->r[3]; // 803F56E8
  c->lr=0x803F56F0u; f_803E541C(c); // 803F56EC
  goto L_803F5730; // 803F56F0
L_803F56F4:;
  c->r[4]=c->r[26]|c->r[26]; // 803F56F4
  c->r[3]=c->r[28]+0x000000C0u; // 803F56F8
  c->lr=0x803F5700u; f_803E52F8(c); // 803F56FC
  c->r[3]=c->r[28]+0x000000C0u; // 803F5700
  c->r[4]=c->r[29]|c->r[29]; // 803F5704
  c->r[5]=c->r[3]|c->r[3]; // 803F5708
  c->lr=0x803F5710u; f_803E541C(c); // 803F570C
  goto L_803F5730; // 803F5710
L_803F5714:;
  c->r[4]=c->r[26]|c->r[26]; // 803F5714
  c->r[3]=c->r[28]+0x000000C0u; // 803F5718
  c->lr=0x803F5720u; f_803E52F8(c); // 803F571C
  c->r[3]=c->r[28]+0x000000C0u; // 803F5720
  c->r[4]=c->r[29]|c->r[29]; // 803F5724
  c->r[5]=c->r[3]|c->r[3]; // 803F5728
  c->lr=0x803F5730u; f_803E541C(c); // 803F572C
L_803F5730:;
  c->r[3]=c->r[28]+0x000000C0u; // 803F5730
  c->r[4]=c->r[1]+0x00000008u; // 803F5734
  c->lr=0x803F573Cu; f_803E52F8(c); // 803F5738
L_803F573C:;
  c->r[4]=R32(c->r[27]+0x0000016Cu); // 803F573C
  c->r[3]=c->r[28]|c->r[28]; // 803F5740
  c->lr=0x803F5748u; f_803F5A1C(c); // 803F5744
  c->r[0]=R32(c->r[27]+0x000001C0u); // 803F5748
  c->f[31]=c->f[1]; // 803F574C
  cmps(c,0,(int32_t)c->r[0],3); // 803F5750
  if (!crb(c,2)) { goto L_803F57A8; } // 803F5754
  c->r[4]=c->r[28]|c->r[28]; // 803F5758
  c->r[3]=c->r[27]+0x000000D8u; // 803F575C
  c->lr=0x803F5764u; f_803E3900(c); // 803F5760
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[1]);} // 803F5764
  c->f[1]=c->f[31]; // 803F5768
  c->r[4]=c->r[28]|c->r[28]; // 803F576C
  c->r[3]=c->r[27]+0x00000118u; // 803F5770
  c->lr=0x803F5778u; f_803E3900(c); // 803F5774
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[1]);} // 803F5778
  c->f[1]=c->f[31]; // 803F577C
  c->r[4]=c->r[28]|c->r[28]; // 803F5780
  c->r[3]=c->r[27]+0x000000F8u; // 803F5784
  c->lr=0x803F578Cu; f_803E3900(c); // 803F5788
  {uint32_t ea=c->r[28]+0x000000F8u; WF32(ea,c->f[1]);} // 803F578C
  c->f[1]=c->f[31]; // 803F5790
  c->r[4]=c->r[28]|c->r[28]; // 803F5794
  c->r[3]=c->r[27]+0x00000138u; // 803F5798
  c->lr=0x803F57A0u; f_803E3900(c); // 803F579C
  {uint32_t ea=c->r[28]+0x000000FCu; WF32(ea,c->f[1]);} // 803F57A0
  goto L_803F5800; // 803F57A4
L_803F57A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 803F57A8
  if (crb(c,2)) { goto L_803F5800; } // 803F57AC
  {uint32_t ea=c->r[28]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F57B0
  c->r[0]=c->r[31]+0x00000040u; // 803F57B4
  c->r[3]=R32(c->r[27]+0x000001C8u); // 803F57B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F57BC
  c->r[4]=R32(c->r[27]+0x0000018Cu); // 803F57C0
  c->r[3]=rotl(c->r[3],10)&0xFFFFFC00u; // 803F57C4
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[0]);} // 803F57C8
  c->r[0]=c->r[0]+c->r[3]; // 803F57CC
  c->r[3]=R32(c->r[1]+0x0000008Cu); // 803F57D0
  c->r[3]=c->r[4]+c->r[3]; // 803F57D4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 803F57D8
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 803F57DC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 803F57E0
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 803F57E4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F57E8
  {uint32_t ea=c->r[28]+0x000000F4u; WF32(ea,c->f[0]);} // 803F57EC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F57F0
  {uint32_t ea=c->r[28]+0x000000F8u; WF32(ea,c->f[0]);} // 803F57F4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F57F8
  {uint32_t ea=c->r[28]+0x000000FCu; WF32(ea,c->f[0]);} // 803F57FC
L_803F5800:;
  c->f[1]=c->f[31]; // 803F5800
  c->r[3]=c->r[27]|c->r[27]; // 803F5804
  c->r[4]=c->r[28]|c->r[28]; // 803F5808
  c->r[5]=c->r[30]|c->r[30]; // 803F580C
  c->r[6]=c->r[29]|c->r[29]; // 803F5810
  c->r[7]=c->r[31]+0x00001440u; // 803F5814
  c->lr=0x803F581Cu; f_803F4824(c); // 803F5818
  c->f[1]=c->f[31]; // 803F581C
  c->r[5]=R32(c->r[13]+0xFFFFF418u); // 803F5820
  c->r[3]=c->r[27]|c->r[27]; // 803F5824
  c->r[4]=c->r[28]|c->r[28]; // 803F5828
  c->r[9]=c->r[30]|c->r[30]; // 803F582C
  c->r[10]=c->r[29]|c->r[29]; // 803F5830
  c->r[6]=c->r[31]+0x00001440u; // 803F5834
  c->r[7]=c->r[31]+0x00001450u; // 803F5838
  c->r[8]=c->r[31]+0x00001460u; // 803F583C
  c->lr=0x803F5844u; f_803F4D2C(c); // 803F5840
  {uint32_t ea=c->r[28]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5844
  c->r[3]=c->r[28]+0x000000D0u; // 803F5848
  c->lr=0x803F5850u; f_803E7614(c); // 803F584C
  {uint32_t ea=c->r[28]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5850
  c->r[3]=c->r[28]+0x000000E0u; // 803F5854
  c->lr=0x803F585Cu; f_803E7614(c); // 803F5858
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F585C
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 803F5860
  {uint32_t ea=c->r[28]+0x000000DCu; WF32(ea,c->f[0]);} // 803F5864
  c->r[0]=R32(c->r[27]+0x00000208u); // 803F5868
  cmps(c,0,(int32_t)c->r[0],0); // 803F586C
  if (crb(c,2)) { goto L_803F5894; } // 803F5870
  c->r[12]=R32(c->r[27]+0x00000000u); // 803F5874
  c->r[3]=c->r[27]|c->r[27]; // 803F5878
  c->r[4]=c->r[28]|c->r[28]; // 803F587C
  c->r[12]=R32(c->r[12]+0x000000A0u); // 803F5880
  c->ctr=c->r[12]; // 803F5884
  if (true) { c->lr=0x803F588Cu; dispatch(c,c->ctr); } // 803F5888
  c->r[29]=c->r[3]|c->r[3]; // 803F588C
  goto L_803F5898; // 803F5890
L_803F5894:;
  c->r[29]=0u+0x000000FFu; // 803F5894
L_803F5898:;
  {uint32_t ea=c->r[27]+0x00000214u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5898
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F589C
  fcmp(c,0,c->f[1],c->f[0]); // 803F58A0
  if (!crb(c,1)) { goto L_803F58C8; } // 803F58A4
  {uint32_t ea=c->r[27]+0x00000218u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F58A8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F58AC
  fcmp(c,0,c->f[1],c->f[0]); // 803F58B0
  if (!crb(c,1)) { goto L_803F58C8; } // 803F58B4
  c->r[3]=c->r[27]|c->r[27]; // 803F58B8
  c->r[4]=c->r[28]|c->r[28]; // 803F58BC
  c->lr=0x803F58C4u; f_803F5A88(c); // 803F58C0
  goto L_803F58CC; // 803F58C4
L_803F58C8:;
  c->r[3]=0u+0x000000FFu; // 803F58C8
L_803F58CC:;
  cmps(c,0,(int32_t)c->r[3],255); // 803F58CC
  if (crb(c,0)) { goto L_803F58DC; } // 803F58D0
  cmps(c,0,(int32_t)c->r[29],255); // 803F58D4
  if (!crb(c,0)) { goto L_803F5948; } // 803F58D8
L_803F58DC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[29]); // 803F58DC
  c->r[3]=R32(c->r[27]+0x00000188u); // 803F58E0
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 803F58E4
  c->lr=0x803F58ECu; f_803F3D90(c); // 803F58E8
  cmps(c,0,(int32_t)c->r[3],1); // 803F58EC
  if (!crb(c,2)) { goto L_803F5920; } // 803F58F0
  c->r[3]=rotl(c->r[26],24)&0x000000FFu; // 803F58F4
  c->r[0]=0u+0x43300000u; // 803F58F8
  c->r[3]=c->r[3]^0x80000000u; // 803F58FC
  W32(c->r[1]+0x0000008Cu,c->r[3]); // 803F5900
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[1]=RF64(ea);} // 803F5904
  c->r[3]=c->r[28]+0x00000100u; // 803F5908
  W32(c->r[1]+0x00000088u,c->r[0]); // 803F590C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 803F5910
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803F5914
  c->lr=0x803F591Cu; f_803F4D1C(c); // 803F5918
  goto L_803F5948; // 803F591C
L_803F5920:;
  c->r[3]=rotl(c->r[26],24)&0x000000FFu; // 803F5920
  c->r[0]=0u+0x43300000u; // 803F5924
  c->r[3]=c->r[3]^0x80000000u; // 803F5928
  W32(c->r[1]+0x0000008Cu,c->r[3]); // 803F592C
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[1]=RF64(ea);} // 803F5930
  c->r[3]=c->r[28]+0x00000100u; // 803F5934
  W32(c->r[1]+0x00000088u,c->r[0]); // 803F5938
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 803F593C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803F5940
  c->lr=0x803F5948u; f_803F4D00(c); // 803F5944
L_803F5948:;
  c->r[3]=R32(c->r[27]+0x00000188u); // 803F5948
  c->lr=0x803F5950u; f_803F3D90(c); // 803F594C
  cmps(c,0,(int32_t)c->r[3],1); // 803F5950
  if (!crb(c,2)) { goto L_803F5964; } // 803F5954
  c->r[0]=R8(c->r[28]+0x00000103u); // 803F5958
  cmps(c,0,(int32_t)c->r[0],0); // 803F595C
  if (!crb(c,2)) { goto L_803F59A4; } // 803F5960
L_803F5964:;
  c->r[3]=R32(c->r[27]+0x00000188u); // 803F5964
  c->lr=0x803F596Cu; f_803F3D90(c); // 803F5968
  cmps(c,0,(int32_t)c->r[3],0); // 803F596C
  if (!crb(c,2)) { goto L_803F5984; } // 803F5970
  c->r[3]=c->r[28]+0x00000100u; // 803F5974
  c->lr=0x803F597Cu; f_803F5A70(c); // 803F5978
  cmps(c,0,(int32_t)c->r[3],0); // 803F597C
  if (!crb(c,2)) { goto L_803F59A4; } // 803F5980
L_803F5984:;
  c->r[3]=R32(c->r[27]+0x00000188u); // 803F5984
  c->lr=0x803F598Cu; f_803F3D90(c); // 803F5988
  cmps(c,0,(int32_t)c->r[3],4); // 803F598C
  if (!crb(c,2)) { goto L_803F59FC; } // 803F5990
  c->r[3]=c->r[28]+0x00000100u; // 803F5994
  c->lr=0x803F599Cu; f_803F5A70(c); // 803F5998
  cmps(c,0,(int32_t)c->r[3],0); // 803F599C
  if (crb(c,2)) { goto L_803F59FC; } // 803F59A0
L_803F59A4:;
  c->r[0]=R32(c->r[28]+0x00000088u); // 803F59A4
  cmps(c,0,(int32_t)c->r[0],0); // 803F59A8
  if (!crb(c,2)) { goto L_803F59C4; } // 803F59AC
  c->r[3]=R32(c->r[27]+0x00000168u); // 803F59B0
  c->r[4]=0u+0x00000001u; // 803F59B4
  c->r[5]=0u+0x00000004u; // 803F59B8
  c->lr=0x803F59C0u; f_80402230(c); // 803F59BC
  goto L_803F59D4; // 803F59C0
L_803F59C4:;
  c->r[3]=R32(c->r[27]+0x00000168u); // 803F59C4
  c->r[4]=0u+0x00000001u; // 803F59C8
  c->r[5]=0u+0x00000020u; // 803F59CC
  c->lr=0x803F59D4u; f_80402230(c); // 803F59D0
L_803F59D4:;
  c->r[5]=R32(c->r[28]+0x00000120u); // 803F59D4
  cmps(c,0,(int32_t)c->r[5],0); // 803F59D8
  if (!crb(c,2)) { goto L_803F59F0; } // 803F59DC
  c->r[3]=R32(c->r[27]+0x00000168u); // 803F59E0
  c->r[4]=c->r[28]+0x000000C0u; // 803F59E4
  c->lr=0x803F59ECu; f_804012D8(c); // 803F59E8
  goto L_803F59FC; // 803F59EC
L_803F59F0:;
  c->r[3]=R32(c->r[27]+0x00000168u); // 803F59F0
  c->r[4]=c->r[28]+0x000000C0u; // 803F59F4
  c->lr=0x803F59FCu; f_804016A8(c); // 803F59F8
L_803F59FC:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 803F59FC
  c->r[11]=c->r[1]+0x000000B0u; // 803F5A00
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 803F5A04
  c->lr=0x803F5A0Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F5A08
  c->r[0]=R32(c->r[1]+0x000000C4u); // 803F5A0C
  c->lr=c->r[0]; // 803F5A10
  c->r[1]=c->r[1]+0x000000C0u; // 803F5A14
  return; // 803F5A18
}

// fn_803F5A1C
void f_803F5A1C(Ctx* __restrict c) {
  trace_call(0x803F5A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F5A1C
  c->r[4]=c->r[4]^0x80000000u; // 803F5A20
  c->r[0]=0u+0x43300000u; // 803F5A24
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 803F5A28
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803F5A2C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5A30
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F5A34
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5A38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803F5A3C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 803F5A40
  fcmp(c,0,c->f[1],c->f[2]); // 803F5A44
  if (!crb(c,2)) { goto L_803F5A50; } // 803F5A48
  goto L_803F5A68; // 803F5A4C
L_803F5A50:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 803F5A50
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5A54
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803F5A58
  fcmp(c,0,c->f[1],c->f[0]); // 803F5A5C
  if (!crb(c,1)) { goto L_803F5A68; } // 803F5A60
  c->f[1]=c->f[0]; // 803F5A64
L_803F5A68:;
  c->r[1]=c->r[1]+0x00000010u; // 803F5A68
  return; // 803F5A6C
}

// fn_803F5A70
void f_803F5A70(Ctx* __restrict c) {
  trace_call(0x803F5A70u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 803F5A70
  c->r[3]=rotl(c->r[0],0)&0x00FFFFFFu; // 803F5A74
  return; // 803F5A78
}

// fn_803F5A7C
void f_803F5A7C(Ctx* __restrict c) {
  trace_call(0x803F5A7Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 803F5A7C
  return; // 803F5A80
}

// fn_803F5A84
void f_803F5A84(Ctx* __restrict c) {
  trace_call(0x803F5A84u);
  return; // 803F5A84
}

// fn_803F5A88
void f_803F5A88(Ctx* __restrict c) {
  trace_call(0x803F5A88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F5A88
  c->r[0]=c->lr; // 803F5A8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803F5A90
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803F5A94
  c->r[31]=0u+0x00000000u; // 803F5A98
  W32(c->r[1]+0x00000028u,c->r[30]); // 803F5A9C
  c->r[30]=c->r[4]|c->r[4]; // 803F5AA0
  W32(c->r[1]+0x00000024u,c->r[29]); // 803F5AA4
  c->r[29]=c->r[3]|c->r[3]; // 803F5AA8
  c->r[5]=R32(c->r[4]+0x00000078u); // 803F5AAC
  cmps(c,0,(int32_t)c->r[5],0); // 803F5AB0
  if (crb(c,2)) { goto L_803F5AE4; } // 803F5AB4
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F5AB8
  cmps(c,0,(int32_t)c->r[3],0); // 803F5ABC
  if (crb(c,2)) { goto L_803F5AE4; } // 803F5AC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F5AC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803F5AC8
  c->ctr=c->r[12]; // 803F5ACC
  if (true) { c->lr=0x803F5AD4u; dispatch(c,c->ctr); } // 803F5AD0
  cmps(c,0,(int32_t)c->r[3],2); // 803F5AD4
  if (!crb(c,2)) { goto L_803F5AE4; } // 803F5AD8
  c->r[3]=R32(c->r[30]+0x00000078u); // 803F5ADC
  c->r[31]=R32(c->r[3]+0x0000006Cu); // 803F5AE0
L_803F5AE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F5AE4
  if (crb(c,2)) { goto L_803F5B28; } // 803F5AE8
  c->r[0]=R32(c->r[31]+0x00000144u); // 803F5AEC
  cmps(c,0,(int32_t)c->r[0],0); // 803F5AF0
  if (!crb(c,2)) { goto L_803F5B28; } // 803F5AF4
  c->r[3]=R32(c->r[30]+0x00000078u); // 803F5AF8
  c->r[4]=c->r[1]+0x00000008u; // 803F5AFC
  {uint32_t ea=c->r[30]+0x00000038u; psq_load(c,3,ea,0,0);} // 803F5B00
  c->r[3]=R32(c->r[3]+0x00000068u); // 803F5B04
  {uint32_t ea=c->r[30]+0x00000040u; psq_load(c,2,ea,0,0);} // 803F5B08
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F5B0C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 803F5B10
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F5B14
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F5B18
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F5B1C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803F5B20
  goto L_803F5B40; // 803F5B24
L_803F5B28:;
  c->r[4]=c->r[1]+0x00000008u; // 803F5B28
  {uint32_t ea=c->r[30]+0x00000038u; psq_load(c,1,ea,0,0);} // 803F5B2C
  c->r[3]=c->r[1]+0x00000010u; // 803F5B30
  {uint32_t ea=c->r[30]+0x00000040u; psq_load(c,0,ea,0,0);} // 803F5B34
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F5B38
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F5B3C
L_803F5B40:;
  {uint32_t ea=c->r[29]+0x00000214u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F5B40
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5B44
  c->f[4]=-c->f[5]; // 803F5B48
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5B4C
  c->f[6]=c->ps1[6]=S(c->f[5]-c->f[3]); // 803F5B50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5B54
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[2]); // 803F5B58
  {uint32_t ea=c->r[29]+0x00000218u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5B5C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 803F5B60
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[2]); // 803F5B64
  c->f[6]=std::fabs(c->f[6]); // 803F5B68
  c->f[2]=std::fabs(c->f[3]); // 803F5B6C
  c->f[9]=c->ps1[9]=S(c->f[4]-c->f[1]); // 803F5B70
  c->f[10]=c->ps1[10]=S(c->f[5]-c->f[1]); // 803F5B74
  c->f[1]=c->ps1[1]=S(c->f[6]-c->f[2]); // 803F5B78
  c->f[3]=std::fabs(c->f[7]); // 803F5B7C
  c->f[4]=std::fabs(c->f[8]); // 803F5B80
  c->f[1]=(c->f[1]>=0.0)?c->f[2]:c->f[6]; // 803F5B84
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[5]); // 803F5B88
  c->f[2]=std::fabs(c->f[9]); // 803F5B8C
  c->f[7]=c->ps1[7]=S(c->f[3]-c->f[1]); // 803F5B90
  c->f[6]=std::fabs(c->f[10]); // 803F5B94
  c->f[0]=(c->f[7]>=0.0)?c->f[1]:c->f[3]; // 803F5B98
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 803F5B9C
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[4]; // 803F5BA0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 803F5BA4
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[2]; // 803F5BA8
  c->f[1]=c->ps1[1]=S(c->f[6]-c->f[0]); // 803F5BAC
  c->f[1]=(c->f[1]>=0.0)?c->f[0]:c->f[6]; // 803F5BB0
  fcmp(c,0,c->f[1],c->f[5]); // 803F5BB4
  if (!crb(c,0)) { goto L_803F5BD8; } // 803F5BB8
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5BBC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F5BC0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[5]); // 803F5BC4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F5BC8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803F5BCC
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 803F5BD0
  goto L_803F5BDC; // 803F5BD4
L_803F5BD8:;
  c->r[3]=0u+0x000000FFu; // 803F5BD8
L_803F5BDC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803F5BDC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803F5BE0
  c->r[30]=R32(c->r[1]+0x00000028u); // 803F5BE4
  c->r[29]=R32(c->r[1]+0x00000024u); // 803F5BE8
  c->lr=c->r[0]; // 803F5BEC
  c->r[1]=c->r[1]+0x00000030u; // 803F5BF0
  return; // 803F5BF4
}

// fn_803F5BF8
void f_803F5BF8(Ctx* __restrict c) {
  trace_call(0x803F5BF8u);
  {uint32_t ea=c->r[1]+0xFFFFFAD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F5BF8
  c->r[0]=c->lr; // 803F5BFC
  W32(c->r[1]+0x00000534u,c->r[0]); // 803F5C00
  {uint32_t ea=c->r[1]+0x00000520u; WF64(ea,c->f[31]);} // 803F5C04
  {uint32_t ea=c->r[1]+0x00000528u; psq_store(c,31,ea,0,0);} // 803F5C08
  {uint32_t ea=c->r[1]+0x00000510u; WF64(ea,c->f[30]);} // 803F5C0C
  {uint32_t ea=c->r[1]+0x00000518u; psq_store(c,30,ea,0,0);} // 803F5C10
  {uint32_t ea=c->r[1]+0x00000500u; WF64(ea,c->f[29]);} // 803F5C14
  {uint32_t ea=c->r[1]+0x00000508u; psq_store(c,29,ea,0,0);} // 803F5C18
  {uint32_t ea=c->r[1]+0x000004F0u; WF64(ea,c->f[28]);} // 803F5C1C
  {uint32_t ea=c->r[1]+0x000004F8u; psq_store(c,28,ea,0,0);} // 803F5C20
  {uint32_t ea=c->r[1]+0x000004E0u; WF64(ea,c->f[27]);} // 803F5C24
  {uint32_t ea=c->r[1]+0x000004E8u; psq_store(c,27,ea,0,0);} // 803F5C28
  {uint32_t ea=c->r[1]+0x000004D0u; WF64(ea,c->f[26]);} // 803F5C2C
  {uint32_t ea=c->r[1]+0x000004D8u; psq_store(c,26,ea,0,0);} // 803F5C30
  {uint32_t ea=c->r[1]+0x000004C0u; WF64(ea,c->f[25]);} // 803F5C34
  {uint32_t ea=c->r[1]+0x000004C8u; psq_store(c,25,ea,0,0);} // 803F5C38
  {uint32_t ea=c->r[1]+0x000004B0u; WF64(ea,c->f[24]);} // 803F5C3C
  {uint32_t ea=c->r[1]+0x000004B8u; psq_store(c,24,ea,0,0);} // 803F5C40
  {uint32_t ea=c->r[1]+0x000004A0u; WF64(ea,c->f[23]);} // 803F5C44
  {uint32_t ea=c->r[1]+0x000004A8u; psq_store(c,23,ea,0,0);} // 803F5C48
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[22]);} // 803F5C4C
  {uint32_t ea=c->r[1]+0x00000498u; psq_store(c,22,ea,0,0);} // 803F5C50
  {uint32_t ea=c->r[1]+0x00000480u; WF64(ea,c->f[21]);} // 803F5C54
  {uint32_t ea=c->r[1]+0x00000488u; psq_store(c,21,ea,0,0);} // 803F5C58
  {uint32_t ea=c->r[1]+0x00000470u; WF64(ea,c->f[20]);} // 803F5C5C
  {uint32_t ea=c->r[1]+0x00000478u; psq_store(c,20,ea,0,0);} // 803F5C60
  {uint32_t ea=c->r[1]+0x00000460u; WF64(ea,c->f[19]);} // 803F5C64
  {uint32_t ea=c->r[1]+0x00000468u; psq_store(c,19,ea,0,0);} // 803F5C68
  {uint32_t ea=c->r[1]+0x00000450u; WF64(ea,c->f[18]);} // 803F5C6C
  {uint32_t ea=c->r[1]+0x00000458u; psq_store(c,18,ea,0,0);} // 803F5C70
  c->r[11]=c->r[1]+0x00000450u; // 803F5C74
  c->lr=0x803F5C7Cu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F5C78
  c->r[0]=0u+0x43300000u; // 803F5C7C
  W32(c->r[1]+0x000003E0u,c->r[0]); // 803F5C80
  c->r[17]=c->r[3]|c->r[3]; // 803F5C84
  c->r[3]=c->r[1]+0x00000220u; // 803F5C88
  W32(c->r[1]+0x000003E8u,c->r[0]); // 803F5C8C
  c->lr=0x803F5C94u; f_803E49FC(c); // 803F5C90
  c->r[0]=R32(c->r[13]+0xFFFFF410u); // 803F5C94
  c->r[23]=R32(c->r[17]+0x00000058u); // 803F5C98
  cmps(c,0,(int32_t)c->r[0],0); // 803F5C9C
  if (!crb(c,2)) { goto L_803F5CA8; } // 803F5CA0
  c->lr=0x803F5CA8u; f_803F3DC8(c); // 803F5CA4
L_803F5CA8:;
  c->lr=0x803F5CACu; f_803E99C8(c); // 803F5CA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F5CAC
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F5CB0
  c->ctr=c->r[12]; // 803F5CB4
  if (true) { c->lr=0x803F5CBCu; dispatch(c,c->ctr); } // 803F5CB8
  c->r[22]=c->r[3]|c->r[3]; // 803F5CBC
  c->lr=0x803F5CC4u; f_803E99C8(c); // 803F5CC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F5CC4
  c->r[12]=R32(c->r[12]+0x00000070u); // 803F5CC8
  c->ctr=c->r[12]; // 803F5CCC
  if (true) { c->lr=0x803F5CD4u; dispatch(c,c->ctr); } // 803F5CD0
  c->r[18]=c->r[3]|c->r[3]; // 803F5CD4
  c->r[3]=c->r[1]+0x00000210u; // 803F5CD8
  c->lr=0x803F5CE0u; f_803E49FC(c); // 803F5CDC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5CE0
  c->r[3]=c->r[1]+0x000000D0u; // 803F5CE4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5CE8
  c->f[2]=c->f[1]; // 803F5CEC
  c->f[4]=c->f[1]; // 803F5CF0
  c->lr=0x803F5CF8u; f_803E54F4(c); // 803F5CF4
  c->r[5]=c->r[3]|c->r[3]; // 803F5CF8
  c->r[4]=c->r[18]|c->r[18]; // 803F5CFC
  c->r[3]=c->r[1]+0x00000210u; // 803F5D00
  c->lr=0x803F5D08u; f_803E541C(c); // 803F5D04
  c->r[3]=0u+0x80570000u; // 803F5D08
  c->r[3]=c->r[3]+0x000041A8u; // 803F5D0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 803F5D10
  c->r[21]=rotl(c->r[0],0)&0x0000000Fu; // 803F5D14
  c->lr=0x803F5D1Cu; f_803E99C8(c); // 803F5D18
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F5D1C
  c->r[12]=R32(c->r[12]+0x00000084u); // 803F5D20
  c->ctr=c->r[12]; // 803F5D24
  if (true) { c->lr=0x803F5D2Cu; dispatch(c,c->ctr); } // 803F5D28
  cmps(c,0,(int32_t)c->r[3],0); // 803F5D2C
  c->r[25]=0u+0x00000020u; // 803F5D30
  if (!crb(c,2)) { goto L_803F5D3C; } // 803F5D34
  c->r[25]=0u+0x00000010u; // 803F5D38
L_803F5D3C:;
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F5D3C
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 803F5D40
  c->r[0]=c->r[0]^0x80000000u; // 803F5D44
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F5D48
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[20]=c->ps1[20]=RF32(ea);} // 803F5D4C
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[0]=RF64(ea);} // 803F5D50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803F5D54
  fcmp(c,0,c->f[20],c->f[0]); // 803F5D58
  if (!crb(c,2)) { goto L_803F5D64; } // 803F5D5C
  goto L_803F5D78; // 803F5D60
L_803F5D64:;
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F5D64
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5D68
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[1]=RF64(ea);} // 803F5D6C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F5D70
  c->f[20]=c->ps1[20]=S(c->f[0]/c->f[1]); // 803F5D74
L_803F5D78:;
  {uint32_t ea=c->r[2]+0xFFFFA884u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5D78
  c->r[3]=c->r[1]+0x00000200u; // 803F5D7C
  {uint32_t ea=c->r[18]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5D80
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[20]); // 803F5D84
  {uint32_t ea=c->r[18]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5D88
  {uint32_t ea=c->r[18]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5D8C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F5D90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F5D94
  {uint32_t ea=c->r[1]+0x000003F0u; WF64(ea,c->f[0]);} // 803F5D98
  c->r[20]=R32(c->r[1]+0x000003F4u); // 803F5D9C
  c->lr=0x803F5DA4u; f_803E54F4(c); // 803F5DA0
  {uint32_t ea=c->r[18]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5DA4
  c->r[3]=c->r[1]+0x000001F0u; // 803F5DA8
  {uint32_t ea=c->r[18]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5DAC
  {uint32_t ea=c->r[18]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5DB0
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F5DB4
  c->lr=0x803F5DBCu; f_803E54F4(c); // 803F5DB8
  c->r[3]=c->r[1]+0x00000380u; // 803F5DBC
  c->lr=0x803F5DC4u; f_803F5A84(c); // 803F5DC0
  c->r[3]=c->r[1]+0x00000398u; // 803F5DC4
  c->lr=0x803F5DCCu; f_803F5A84(c); // 803F5DC8
  c->r[3]=c->r[1]+0x000003B0u; // 803F5DCC
  c->lr=0x803F5DD4u; f_803F5A84(c); // 803F5DD0
  c->r[3]=c->r[1]+0x000003C8u; // 803F5DD4
  c->lr=0x803F5DDCu; f_803F5A84(c); // 803F5DD8
  c->r[28]=0u+0x80570000u; // 803F5DDC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[22]=c->ps1[22]=RF32(ea);} // 803F5DE0
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[23]=c->ps1[23]=RF32(ea);} // 803F5DE4
  c->r[24]=~(c->r[25]|c->r[25]); // 803F5DE8
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[24]=c->ps1[24]=RF32(ea);} // 803F5DEC
  c->r[28]=c->r[28]+0x00002C30u; // 803F5DF0
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[21]=c->ps1[21]=RF32(ea);} // 803F5DF4
  c->r[27]=0u+0x80570000u; // 803F5DF8
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[29]=c->ps1[29]=RF32(ea);} // 803F5DFC
  c->r[29]=0u+0x00010000u; // 803F5E00
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[28]=RF64(ea);} // 803F5E04
  c->r[30]=0u+0x487F0000u; // 803F5E08
  {uint32_t ea=c->r[2]+0xFFFFA844u; c->f[30]=c->ps1[30]=RF32(ea);} // 803F5E0C
  c->r[31]=0u+0x00000000u; // 803F5E10
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803F5E14
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[25]=RF64(ea);} // 803F5E18
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[26]=c->ps1[26]=RF32(ea);} // 803F5E1C
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 803F5E20
  goto L_803F6D3C; // 803F5E24
L_803F5E28:;
  c->r[19]=R32(c->r[23]+0x00000068u); // 803F5E28
  c->r[26]=0u+0x00000000u; // 803F5E2C
  cmps(c,0,(int32_t)c->r[19],0); // 803F5E30
  if (crb(c,2)) { goto L_803F5E4C; } // 803F5E34
  c->r[3]=c->r[19]|c->r[19]; // 803F5E38
  c->lr=0x803F5E40u; f_803E5414(c); // 803F5E3C
  cmps(c,0,(int32_t)c->r[3],0); // 803F5E40
  if (crb(c,2)) { goto L_803F5E4C; } // 803F5E44
  c->r[26]=0u+0x00000001u; // 803F5E48
L_803F5E4C:;
  cmps(c,0,(int32_t)c->r[19],0); // 803F5E4C
  if (crb(c,2)) { goto L_803F5E60; } // 803F5E50
  c->r[3]=c->r[19]|c->r[19]; // 803F5E54
  c->lr=0x803F5E5Cu; f_803EC3EC(c); // 803F5E58
  goto L_803F5E64; // 803F5E5C
L_803F5E60:;
  c->r[3]=c->r[27]+0x00002BF0u; // 803F5E60
L_803F5E64:;
  c->r[4]=c->r[3]|c->r[3]; // 803F5E64
  c->r[3]=c->r[1]+0x000001E0u; // 803F5E68
  c->lr=0x803F5E70u; f_803E536C(c); // 803F5E6C
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5E70
  c->r[18]=0u+0x00000000u; // 803F5E74
  fcmp(c,0,c->f[0],c->f[22]); // 803F5E78
  if (crb(c,1)) { goto L_803F5E88; } // 803F5E7C
  fcmp(c,0,c->f[21],c->f[0]); // 803F5E80
  if (!crb(c,2)) { goto L_803F5F70; } // 803F5E84
L_803F5E88:;
  cmps(c,0,(int32_t)c->r[19],0); // 803F5E88
  if (crb(c,2)) { goto L_803F5EA0; } // 803F5E8C
  c->r[3]=c->r[19]|c->r[19]; // 803F5E90
  c->lr=0x803F5E98u; f_803F47A4(c); // 803F5E94
  cmps(c,0,(int32_t)c->r[3],0); // 803F5E98
  if (crb(c,2)) { goto L_803F5F70; } // 803F5E9C
L_803F5EA0:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x000000A6u); // 803F5EA0
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; // 803F5EA4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 803F5EA8
  if (crb(c,2)) { goto L_803F5EB8; } // 803F5EAC
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 803F5EB0
  if (crb(c,2)) { goto L_803F5F6C; } // 803F5EB4
L_803F5EB8:;
  c->r[3]=c->r[1]+0x000001D0u; // 803F5EB8
  c->r[4]=c->r[23]+0x00000038u; // 803F5EBC
  c->lr=0x803F5EC4u; f_803E536C(c); // 803F5EC0
  cmps(c,0,(int32_t)c->r[19],0); // 803F5EC4
  if (crb(c,2)) { goto L_803F5ED8; } // 803F5EC8
  c->r[3]=c->r[1]+0x000001D0u; // 803F5ECC
  c->r[4]=c->r[1]+0x000001E0u; // 803F5ED0
  c->lr=0x803F5ED8u; f_803E52F8(c); // 803F5ED4
L_803F5ED8:;
  c->r[3]=c->r[1]+0x000001C0u; // 803F5ED8
  c->lr=0x803F5EE0u; f_803E49FC(c); // 803F5EDC
  c->r[4]=c->r[22]|c->r[22]; // 803F5EE0
  c->r[3]=c->r[1]+0x000001C0u; // 803F5EE4
  c->r[5]=c->r[1]+0x000001D0u; // 803F5EE8
  c->lr=0x803F5EF0u; f_803E4A00(c); // 803F5EEC
  c->r[3]=c->r[1]+0x000001C0u; // 803F5EF0
  c->lr=0x803F5EF8u; f_803F42C4(c); // 803F5EF4
  fcmp(c,0,c->f[22],c->f[1]); // 803F5EF8
  if (!crb(c,2)) { goto L_803F5F04; } // 803F5EFC
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F5F00
L_803F5F04:;
  {uint32_t ea=c->r[17]+0x00000204u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5F04
  {uint32_t ea=c->r[23]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F5F08
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 803F5F0C
  {uint32_t ea=c->r[23]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F5F10
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803F5F14
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[0]); // 803F5F18
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 803F5F1C
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[0]); // 803F5F20
  c->f[0]=c->ps1[0]=S(c->f[24]/c->f[0]); // 803F5F24
  fcmp(c,0,c->f[1],c->f[0]); // 803F5F28
  if (crb(c,1)) { goto L_803F5F3C; } // 803F5F2C
  c->r[0]=R32(c->r[17]+0x000001B8u); // 803F5F30
  cmps(c,0,(int32_t)c->r[0],0); // 803F5F34
  if (crb(c,2)) { goto L_803F5F50; } // 803F5F38
L_803F5F3C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x000000A6u); // 803F5F3C
  c->r[18]=0u+0x00000001u; // 803F5F40
  c->r[0]=c->r[0]|c->r[25]; // 803F5F44
  W16(c->r[23]+0x000000A6u,c->r[0]); // 803F5F48
  goto L_803F5F5C; // 803F5F4C
L_803F5F50:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x000000A6u); // 803F5F50
  c->r[0]=c->r[0]&c->r[24]; // 803F5F54
  W16(c->r[23]+0x000000A6u,c->r[0]); // 803F5F58
L_803F5F5C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x000000A6u); // 803F5F5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 803F5F60
  W16(c->r[23]+0x000000A6u,c->r[0]); // 803F5F64
  goto L_803F5F70; // 803F5F68
L_803F5F6C:;
  c->r[18]=c->r[3]&c->r[25]; // 803F5F6C
L_803F5F70:;
  cmps(c,0,(int32_t)c->r[18],0); // 803F5F70
  if (crb(c,2)) { goto L_803F6D38; } // 803F5F74
  c->r[3]=c->r[1]+0x00000350u; // 803F5F78
  c->lr=0x803F5F80u; f_803F6DCC(c); // 803F5F7C
  cmps(c,0,(int32_t)c->r[19],0); // 803F5F80
  if (crb(c,2)) { goto L_803F5F9C; } // 803F5F84
  c->r[3]=c->r[19]|c->r[19]; // 803F5F88
  c->lr=0x803F5F90u; f_803EC3E4(c); // 803F5F8C
  c->r[4]=c->r[3]|c->r[3]; // 803F5F90
  c->r[3]=c->r[1]+0x00000350u; // 803F5F94
  c->lr=0x803F5F9Cu; f_803EC00C(c); // 803F5F98
L_803F5F9C:;
  {uint32_t ea=c->r[23]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5F9C
  {uint32_t ea=c->r[23]+0x00000104u; WF32(ea,c->f[0]);} // 803F5FA0
  {uint32_t ea=c->r[23]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5FA4
  {uint32_t ea=c->r[23]+0x00000108u; WF32(ea,c->f[0]);} // 803F5FA8
  c->r[0]=R32(c->r[17]+0x000001B8u); // 803F5FAC
  cmps(c,0,(int32_t)c->r[0],0); // 803F5FB0
  if (crb(c,2)) { goto L_803F5FFC; } // 803F5FB4
  c->r[3]=c->r[1]+0x000001B0u; // 803F5FB8
  c->lr=0x803F5FC0u; f_803E49FC(c); // 803F5FBC
  c->r[4]=c->r[22]|c->r[22]; // 803F5FC0
  c->r[3]=c->r[1]+0x000001B0u; // 803F5FC4
  c->r[5]=c->r[23]+0x00000038u; // 803F5FC8
  c->lr=0x803F5FD0u; f_803E4A00(c); // 803F5FCC
  c->r[3]=c->r[1]+0x000001B0u; // 803F5FD0
  c->lr=0x803F5FD8u; f_803F42C4(c); // 803F5FD4
  fcmp(c,0,c->f[1],c->f[24]); // 803F5FD8
  if (!crb(c,1)) { goto L_803F5FFC; } // 803F5FDC
  c->lr=0x803F5FE4u; f_803ACB30(c); // 803F5FE0
  {uint32_t ea=c->r[23]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5FE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F5FE8
  {uint32_t ea=c->r[23]+0x00000104u; WF32(ea,c->f[0]);} // 803F5FEC
  {uint32_t ea=c->r[23]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F5FF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F5FF4
  {uint32_t ea=c->r[23]+0x00000108u; WF32(ea,c->f[0]);} // 803F5FF8
L_803F5FFC:;
  c->r[3]=c->r[23]+0x000000C0u; // 803F5FFC
  c->r[4]=c->r[23]+0x00000038u; // 803F6000
  c->lr=0x803F6008u; f_803E53A0(c); // 803F6004
  c->r[0]=R32(c->r[17]+0x000001BCu); // 803F6008
  cmps(c,0,(int32_t)c->r[0],0); // 803F600C
  if (crb(c,2)) { goto L_803F6024; } // 803F6010
  {uint32_t ea=c->r[23]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6014
  {uint32_t ea=c->r[23]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6018
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F601C
  {uint32_t ea=c->r[23]+0x000000C4u; WF32(ea,c->f[0]);} // 803F6020
L_803F6024:;
  cmps(c,0,(int32_t)c->r[19],0); // 803F6024
  if (crb(c,2)) { goto L_803F605C; } // 803F6028
  cmps(c,0,(int32_t)c->r[26],0); // 803F602C
  if (crb(c,2)) { goto L_803F6050; } // 803F6030
  c->r[4]=R32(c->r[23]+0x00000068u); // 803F6034
  c->r[3]=c->r[23]+0x000000C0u; // 803F6038
  c->lr=0x803F6040u; f_803E52F8(c); // 803F603C
  c->r[3]=c->r[23]+0x000000C0u; // 803F6040
  c->r[4]=c->r[1]+0x00000350u; // 803F6044
  c->r[5]=c->r[3]|c->r[3]; // 803F6048
  c->lr=0x803F6050u; f_803E541C(c); // 803F604C
L_803F6050:;
  c->r[3]=c->r[23]+0x000000C0u; // 803F6050
  c->r[4]=c->r[1]+0x000001E0u; // 803F6054
  c->lr=0x803F605Cu; f_803E52F8(c); // 803F6058
L_803F605C:;
  c->r[0]=R32(c->r[17]+0x000001C0u); // 803F605C
  cmps(c,0,(int32_t)c->r[0],0); // 803F6060
  if (crb(c,2)) { goto L_803F60B0; } // 803F6064
  {uint32_t ea=c->r[23]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6068
  c->r[0]=R32(c->r[17]+0x000001C8u); // 803F606C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F6070
  c->r[4]=R32(c->r[17]+0x0000018Cu); // 803F6074
  c->r[0]=rotl(c->r[0],10)&0xFFFFFC00u; // 803F6078
  {uint32_t ea=c->r[1]+0x000003F0u; WF64(ea,c->f[0]);} // 803F607C
  c->r[0]=c->r[28]+c->r[0]; // 803F6080
  c->r[3]=R32(c->r[1]+0x000003F4u); // 803F6084
  c->r[3]=c->r[4]+c->r[3]; // 803F6088
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 803F608C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 803F6090
  {uint32_t ea=c->r[23]+0x000000F0u; WF32(ea,c->f[0]);} // 803F6094
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6098
  {uint32_t ea=c->r[23]+0x000000F4u; WF32(ea,c->f[0]);} // 803F609C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F60A0
  {uint32_t ea=c->r[23]+0x000000F8u; WF32(ea,c->f[0]);} // 803F60A4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F60A8
  {uint32_t ea=c->r[23]+0x000000FCu; WF32(ea,c->f[0]);} // 803F60AC
L_803F60B0:;
  c->r[3]=R32(c->r[17]+0x00000184u); // 803F60B0
  cmps(c,0,(int32_t)c->r[3],0); // 803F60B4
  if (crb(c,2)) { goto L_803F6108; } // 803F60B8
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F60BC
  cmps(c,0,(int32_t)c->r[0],0); // 803F60C0
  if (!crb(c,2)) { goto L_803F60DC; } // 803F60C4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F60C8
  c->r[5]=c->r[23]|c->r[23]; // 803F60CC
  c->r[4]=c->r[1]+0x0000000Cu; // 803F60D0
  c->lr=0x803F60D8u; f_803E6ED0(c); // 803F60D4
  goto L_803F6110; // 803F60D8
L_803F60DC:;
  c->r[0]=c->r[0]^0x80000000u; // 803F60DC
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F60E0
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F60E4
  c->r[5]=c->r[23]|c->r[23]; // 803F60E8
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[1]=RF64(ea);} // 803F60EC
  c->r[4]=c->r[1]+0x0000000Cu; // 803F60F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 803F60F4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803F60F8
  c->f[1]=c->ps1[1]=S(c->f[20]*c->f[0]); // 803F60FC
  c->lr=0x803F6104u; f_803E6ED0(c); // 803F6100
  goto L_803F6110; // 803F6104
L_803F6108:;
  c->r[3]=c->r[1]+0x0000000Cu; // 803F6108
  c->lr=0x803F6110u; f_803F4CD0(c); // 803F610C
L_803F6110:;
  c->r[3]=R32(c->r[23]+0x00000070u); // 803F6110
  cmps(c,0,(int32_t)c->r[3],0); // 803F6114
  if (crb(c,2)) { goto L_803F615C; } // 803F6118
  c->r[18]=R32(c->r[3]+0x0000006Cu); // 803F611C
  cmps(c,0,(int32_t)c->r[18],0); // 803F6120
  if (crb(c,2)) { goto L_803F615C; } // 803F6124
  c->r[0]=R32(c->r[18]+0x000000ECu); // 803F6128
  cmps(c,0,(int32_t)c->r[0],0); // 803F612C
  if (crb(c,2)) { goto L_803F615C; } // 803F6130
  c->r[3]=c->r[1]+0x00000008u; // 803F6134
  c->lr=0x803F613Cu; f_803F4CD0(c); // 803F6138
  c->r[3]=R32(c->r[18]+0x000000ECu); // 803F613C
  c->r[4]=c->r[1]+0x00000008u; // 803F6140
  {uint32_t ea=c->r[23]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6144
  c->r[5]=R32(c->r[23]+0x00000070u); // 803F6148
  c->lr=0x803F6150u; f_803E6ED0(c); // 803F614C
  c->r[3]=c->r[1]+0x0000000Cu; // 803F6150
  c->r[4]=c->r[1]+0x00000008u; // 803F6154
  c->lr=0x803F615Cu; f_803F4CDC(c); // 803F6158
L_803F615C:;
  c->r[0]=R32(c->r[17]+0x00000190u); // 803F615C
  cmps(c,0,(int32_t)c->r[0],5); // 803F6160
  if (!crb(c,2)) { goto L_803F61DC; } // 803F6164
  c->r[3]=c->r[1]+0x00000320u; // 803F6168
  c->r[4]=c->r[23]+0x00000008u; // 803F616C
  c->lr=0x803F6174u; f_803F6DD0(c); // 803F6170
  cmps(c,0,(int32_t)c->r[26],0); // 803F6174
  if (crb(c,2)) { goto L_803F6198; } // 803F6178
  c->r[3]=c->r[1]+0x00000230u; // 803F617C
  c->r[4]=c->r[1]+0x00000350u; // 803F6180
  c->r[5]=c->r[1]+0x00000320u; // 803F6184
  c->lr=0x803F618Cu; f_803F6E04(c); // 803F6188
  c->r[3]=c->r[1]+0x00000320u; // 803F618C
  c->r[4]=c->r[1]+0x00000230u; // 803F6190
  c->lr=0x803F6198u; f_803EC00C(c); // 803F6194
L_803F6198:;
  c->r[3]=c->r[1]+0x00000320u; // 803F6198
  c->r[4]=c->r[1]+0x00000220u; // 803F619C
  c->lr=0x803F61A4u; f_803F7068(c); // 803F61A0
  c->r[3]=c->r[1]+0x00000210u; // 803F61A4
  c->r[4]=c->r[1]+0x00000220u; // 803F61A8
  c->lr=0x803F61B0u; f_803EC49C(c); // 803F61AC
  fcmp(c,0,c->f[1],c->f[22]); // 803F61B0
  if (!crb(c,0)) { goto L_803F61BC; } // 803F61B4
  c->f[1]=c->f[22]; // 803F61B8
L_803F61BC:;
  {uint32_t ea=c->r[23]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F61BC
  c->r[3]=c->r[1]+0x0000000Cu; // 803F61C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F61C4
  {uint32_t ea=c->r[23]+0x00000104u; WF32(ea,c->f[0]);} // 803F61C8
  {uint32_t ea=c->r[23]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F61CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F61D0
  {uint32_t ea=c->r[23]+0x00000108u; WF32(ea,c->f[0]);} // 803F61D4
  c->lr=0x803F61DCu; f_803F4204(c); // 803F61D8
L_803F61DC:;
  c->r[3]=c->r[1]+0x000001A0u; // 803F61DC
  c->r[4]=c->r[23]+0x00000038u; // 803F61E0
  c->lr=0x803F61E8u; f_803E536C(c); // 803F61E4
  cmps(c,0,(int32_t)c->r[19],0); // 803F61E8
  if (crb(c,2)) { goto L_803F61FC; } // 803F61EC
  c->r[3]=c->r[1]+0x000001A0u; // 803F61F0
  c->r[4]=c->r[1]+0x000001E0u; // 803F61F4
  c->lr=0x803F61FCu; f_803E52F8(c); // 803F61F8
L_803F61FC:;
  c->r[4]=c->r[22]|c->r[22]; // 803F61FC
  c->r[3]=c->r[1]+0x00000220u; // 803F6200
  c->r[5]=c->r[1]+0x000001A0u; // 803F6204
  c->lr=0x803F620Cu; f_803E4A00(c); // 803F6208
  c->r[3]=c->r[1]+0x00000220u; // 803F620C
  c->lr=0x803F6214u; f_803E4A34(c); // 803F6210
  {uint32_t ea=c->r[17]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6214
  fcmp(c,0,c->f[1],c->f[0]); // 803F6218
  if (!crb(c,0)) { goto L_803F622C; } // 803F621C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803F6220
  c->r[3]=c->r[1]+0x0000000Cu; // 803F6224
  c->lr=0x803F622Cu; f_803F7098(c); // 803F6228
L_803F622C:;
  c->r[0]=R32(c->r[17]+0x00000178u); // 803F622C
  cmps(c,0,(int32_t)c->r[0],0); // 803F6230
  if (crb(c,2)) { goto L_803F633C; } // 803F6234
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F6238
  cmps(c,0,(int32_t)c->r[0],0); // 803F623C
  if (!crb(c,1)) { goto L_803F6268; } // 803F6240
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6244
  c->r[0]=rotl(c->r[20],8)&0xFFFFFF00u; // 803F6248
  c->r[3]=c->r[0]-c->r[20]; // 803F624C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F6250
  {uint32_t ea=c->r[1]+0x000003F0u; WF64(ea,c->f[0]);} // 803F6254
  c->r[0]=R32(c->r[1]+0x000003F4u); // 803F6258
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803F625C
  c->r[4]=sraw(c,c->r[0],16); // 803F6260
  goto L_803F626C; // 803F6264
L_803F6268:;
  c->r[4]=0u+0x000000FFu; // 803F6268
L_803F626C:;
  cmps(c,0,(int32_t)c->r[4],30); // 803F626C
  if (!crb(c,1)) { goto L_803F62A0; } // 803F6270
  c->r[3]=c->r[4]+0xFFFFFFE2u; // 803F6274
  c->r[0]=c->r[29]+0xFFFFC784u; // 803F6278
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[3]); // 803F627C
  c->r[4]=c->r[30]+0xFFFFDE05u; // 803F6280
  c->r[0]=c->r[0]-c->r[3]; // 803F6284
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 803F6288
  c->r[0]=sraw(c,c->r[0],6); // 803F628C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803F6290
  c->r[0]=c->r[0]+c->r[3]; // 803F6294
  c->r[4]=addc(c,~c->r[0],0x000000E2u,1); // 803F6298
  c->r[4]=c->r[4]+0x0000001Eu; // 803F629C
L_803F62A0:;
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 803F62A0
  c->r[3]=R32(c->r[17]+0x00000188u); // 803F62A4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803F62A8
  cmps(c,0,(int32_t)c->r[3],0); // 803F62AC
  c->r[18]=sraw(c,c->r[0],8); // 803F62B0
  if (crb(c,2)) { goto L_803F62CC; } // 803F62B4
  cmps(c,0,(int32_t)c->r[3],1); // 803F62B8
  if (crb(c,2)) { goto L_803F62F4; } // 803F62BC
  cmps(c,0,(int32_t)c->r[3],2); // 803F62C0
  if (crb(c,2)) { goto L_803F6308; } // 803F62C4
  goto L_803F6380; // 803F62C8
L_803F62CC:;
  c->r[3]=c->r[23]+0x00000100u; // 803F62CC
  c->r[4]=c->r[1]+0x0000000Cu; // 803F62D0
  c->lr=0x803F62D8u; f_803E742C(c); // 803F62D4
  c->r[0]=c->r[18]^0x80000000u; // 803F62D8
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F62DC
  c->r[3]=c->r[23]+0x00000100u; // 803F62E0
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[0]=RF64(ea);} // 803F62E4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[28]); // 803F62E8
  c->lr=0x803F62F0u; f_803F4D00(c); // 803F62EC
  goto L_803F6380; // 803F62F0
L_803F62F4:;
  c->r[3]=c->r[23]+0x00000100u; // 803F62F4
  c->r[4]=c->r[1]+0x0000000Cu; // 803F62F8
  c->lr=0x803F6300u; f_803E742C(c); // 803F62FC
  W8(c->r[23]+0x00000103u,c->r[18]); // 803F6300
  goto L_803F6380; // 803F6304
L_803F6308:;
  c->r[3]=c->r[23]+0x00000100u; // 803F6308
  c->r[4]=c->r[1]+0x0000000Cu; // 803F630C
  c->lr=0x803F6314u; f_803E742C(c); // 803F6310
  c->r[0]=c->r[18]^0x80000000u; // 803F6314
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F6318
  c->r[3]=c->r[23]+0x00000100u; // 803F631C
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[0]=RF64(ea);} // 803F6320
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[28]); // 803F6324
  c->lr=0x803F632Cu; f_803F4D00(c); // 803F6328
  c->r[3]=c->r[18]|c->r[18]; // 803F632C
  c->lr=0x803F6334u; f_803F3DA0(c); // 803F6330
  W8(c->r[23]+0x00000103u,c->r[3]); // 803F6334
  goto L_803F6380; // 803F6338
L_803F633C:;
  c->r[0]=R32(c->r[17]+0x00000188u); // 803F633C
  cmps(c,0,(int32_t)c->r[0],1); // 803F6340
  if (!crb(c,2)) { goto L_803F6358; } // 803F6344
  c->r[3]=c->r[23]+0x00000100u; // 803F6348
  c->r[4]=c->r[1]+0x0000000Cu; // 803F634C
  c->lr=0x803F6354u; f_803E742C(c); // 803F6350
  goto L_803F6380; // 803F6354
L_803F6358:;
  c->r[3]=c->r[23]+0x00000100u; // 803F6358
  c->r[4]=c->r[1]+0x0000000Cu; // 803F635C
  c->lr=0x803F6364u; f_803E742C(c); // 803F6360
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 803F6364
  c->r[3]=c->r[23]+0x00000100u; // 803F6368
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F636C
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[0]=RF64(ea);} // 803F6370
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[25]); // 803F6374
  c->lr=0x803F637Cu; f_803F4D00(c); // 803F6378
  W8(c->r[23]+0x00000103u,c->r[31]); // 803F637C
L_803F6380:;
  c->r[5]=R32(c->r[23]+0x00000078u); // 803F6380
  c->r[4]=0u+0x00000000u; // 803F6384
  cmps(c,0,(int32_t)c->r[5],0); // 803F6388
  if (crb(c,2)) { goto L_803F63A4; } // 803F638C
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F6390
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F6394
  cmps(c,0,(int32_t)c->r[0],0); // 803F6398
  if (crb(c,2)) { goto L_803F63A4; } // 803F639C
  c->r[4]=0u+0x00000001u; // 803F63A0
L_803F63A4:;
  c->r[6]=R32(c->r[23]+0x0000006Cu); // 803F63A4
  c->r[7]=R32(c->r[6]+0x00000084u); // 803F63A8
  c->r[0]=0u-c->r[7]; // 803F63AC
  c->r[0]=c->r[0]|c->r[7]; // 803F63B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803F63B4
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 803F63B8
  if (crb(c,2)) { goto L_803F6528; } // 803F63BC
  c->r[4]=R32(c->r[23]+0x00000114u); // 803F63C0
  cmps(c,0,(int32_t)c->r[5],0); // 803F63C4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F63C8
  c->r[0]=rotl(c->r[4],8)&0x000000FFu; // 803F63CC
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F63D0
  c->r[3]=rotl(c->r[4],16)&0x000000FFu; // 803F63D4
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[1]=RF64(ea);} // 803F63D8
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 803F63DC
  W32(c->r[1]+0x000003ECu,c->r[3]); // 803F63E0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[25]); // 803F63E4
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F63E8
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[2]=RF64(ea);} // 803F63EC
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[1]=RF64(ea);} // 803F63F0
  c->f[6]=c->ps1[6]=S(c->f[3]/c->f[26]); // 803F63F4
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[25]); // 803F63F8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[25]); // 803F63FC
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[26]); // 803F6400
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[26]); // 803F6404
  if (crb(c,2)) { goto L_803F6428; } // 803F6408
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F640C
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F6410
  cmps(c,0,(int32_t)c->r[0],0); // 803F6414
  if (crb(c,2)) { goto L_803F6428; } // 803F6418
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F641C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[27]); // 803F6420
  goto L_803F6438; // 803F6424
L_803F6428:;
  cmps(c,0,(int32_t)c->r[7],0); // 803F6428
  if (crb(c,2)) { goto L_803F6438; } // 803F642C
  {uint32_t ea=c->r[6]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6430
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[27]); // 803F6434
L_803F6438:;
  c->r[0]=R8(c->r[23]+0x00000100u); // 803F6438
  c->f[5]=c->ps1[5]=S(c->f[24]-c->f[0]); // 803F643C
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F6440
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[3]=RF64(ea);} // 803F6444
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F6448
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[25]); // 803F644C
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[4]=RF64(ea);} // 803F6450
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[25]); // 803F6454
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 803F6458
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803F645C
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 803F6460
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 803F6464
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 803F6468
  {uint32_t ea=c->r[1]+0x000003F0u; WF64(ea,c->f[3]);} // 803F646C
  c->r[3]=R32(c->r[1]+0x000003F4u); // 803F6470
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803F6474
  cmps(c,0,(int32_t)c->r[0],255); // 803F6478
  if (!crb(c,1)) { goto L_803F6484; } // 803F647C
  c->r[3]=0u+0x000000FFu; // 803F6480
L_803F6484:;
  c->r[0]=R8(c->r[23]+0x00000101u); // 803F6484
  c->f[5]=c->ps1[5]=S(c->f[24]-c->f[0]); // 803F6488
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F648C
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[3]=RF64(ea);} // 803F6490
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F6494
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[25]); // 803F6498
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[4]=RF64(ea);} // 803F649C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[25]); // 803F64A0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 803F64A4
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803F64A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803F64AC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 803F64B0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 803F64B4
  {uint32_t ea=c->r[1]+0x000003F8u; WF64(ea,c->f[1]);} // 803F64B8
  c->r[4]=R32(c->r[1]+0x000003FCu); // 803F64BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 803F64C0
  cmps(c,0,(int32_t)c->r[0],255); // 803F64C4
  if (!crb(c,1)) { goto L_803F64D0; } // 803F64C8
  c->r[4]=0u+0x000000FFu; // 803F64CC
L_803F64D0:;
  c->r[0]=R8(c->r[23]+0x00000102u); // 803F64D0
  c->f[4]=c->ps1[4]=S(c->f[24]-c->f[0]); // 803F64D4
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F64D8
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[1]=RF64(ea);} // 803F64DC
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F64E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[25]); // 803F64E4
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[3]=RF64(ea);} // 803F64E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F64EC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[25]); // 803F64F0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F64F4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[3]); // 803F64F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F64FC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F6500
  {uint32_t ea=c->r[1]+0x00000400u; WF64(ea,c->f[0]);} // 803F6504
  c->r[5]=R32(c->r[1]+0x00000404u); // 803F6508
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 803F650C
  cmps(c,0,(int32_t)c->r[0],255); // 803F6510
  if (!crb(c,1)) { goto L_803F651C; } // 803F6514
  c->r[5]=0u+0x000000FFu; // 803F6518
L_803F651C:;
  W8(c->r[23]+0x00000100u,c->r[3]); // 803F651C
  W8(c->r[23]+0x00000101u,c->r[4]); // 803F6520
  W8(c->r[23]+0x00000102u,c->r[5]); // 803F6524
L_803F6528:;
  c->r[0]=R32(c->r[17]+0x00000190u); // 803F6528
  cmps(c,0,(int32_t)c->r[0],1); // 803F652C
  if (crb(c,2)) { goto L_803F65E4; } // 803F6530
  cmps(c,0,(int32_t)c->r[0],2); // 803F6534
  if (crb(c,2)) { goto L_803F6740; } // 803F6538
  cmps(c,0,(int32_t)c->r[0],3); // 803F653C
  if (crb(c,2)) { goto L_803F689C; } // 803F6540
  cmps(c,0,(int32_t)c->r[0],4); // 803F6544
  if (crb(c,2)) { goto L_803F69F8; } // 803F6548
  cmps(c,0,(int32_t)c->r[0],6); // 803F654C
  if (crb(c,2)) { goto L_803F6A98; } // 803F6550
  cmps(c,0,(int32_t)c->r[0],7); // 803F6554
  if (crb(c,2)) { goto L_803F6B6C; } // 803F6558
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F655C
  c->r[4]=c->r[23]|c->r[23]; // 803F6560
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6564
  c->r[3]=c->r[17]+0x000001D4u; // 803F6568
  c->r[0]=c->r[0]^0x80000000u; // 803F656C
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F6570
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[0]=RF64(ea);} // 803F6574
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[28]); // 803F6578
  c->lr=0x803F6580u; f_803E8D7C(c); // 803F657C
  c->f[19]=c->f[1]; // 803F6580
  fcmp(c,0,c->f[1],c->f[22]); // 803F6584
  if (crb(c,2)) { goto L_803F65C8; } // 803F6588
  c->r[3]=c->r[1]+0x000002F0u; // 803F658C
  c->lr=0x803F6594u; f_803F6DCC(c); // 803F6590
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[19]); // 803F6594
  c->r[3]=c->r[1]+0x000002F0u; // 803F6598
  c->r[4]=c->r[1]+0x00000210u; // 803F659C
  c->lr=0x803F65A4u; f_803EC4C0(c); // 803F65A0
  c->r[3]=c->r[23]+0x000000D0u; // 803F65A4
  c->r[4]=c->r[1]+0x000002F0u; // 803F65A8
  c->r[5]=c->r[1]+0x00000200u; // 803F65AC
  c->lr=0x803F65B4u; f_803E541C(c); // 803F65B0
  c->r[3]=c->r[23]+0x000000E0u; // 803F65B4
  c->r[4]=c->r[1]+0x000002F0u; // 803F65B8
  c->r[5]=c->r[1]+0x000001F0u; // 803F65BC
  c->lr=0x803F65C4u; f_803E541C(c); // 803F65C0
  goto L_803F6BC4; // 803F65C4
L_803F65C8:;
  c->r[3]=c->r[23]+0x000000D0u; // 803F65C8
  c->r[4]=c->r[1]+0x00000200u; // 803F65CC
  c->lr=0x803F65D4u; f_803E53A0(c); // 803F65D0
  c->r[3]=c->r[23]+0x000000E0u; // 803F65D4
  c->r[4]=c->r[1]+0x000001F0u; // 803F65D8
  c->lr=0x803F65E0u; f_803E53A0(c); // 803F65DC
  goto L_803F6BC4; // 803F65E0
L_803F65E4:;
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F65E4
  c->r[4]=c->r[23]|c->r[23]; // 803F65E8
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F65EC
  c->r[3]=c->r[17]+0x000001D4u; // 803F65F0
  c->r[0]=c->r[0]^0x80000000u; // 803F65F4
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F65F8
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[0]=RF64(ea);} // 803F65FC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[28]); // 803F6600
  c->lr=0x803F6608u; f_803E8D7C(c); // 803F6604
  c->f[18]=c->f[1]; // 803F6608
  c->r[3]=c->r[1]+0x00000190u; // 803F660C
  c->lr=0x803F6614u; f_803E49FC(c); // 803F6610
  c->r[3]=c->r[1]+0x00000180u; // 803F6614
  c->lr=0x803F661Cu; f_803E49FC(c); // 803F6618
  fcmp(c,0,c->f[18],c->f[22]); // 803F661C
  if (crb(c,2)) { goto L_803F6698; } // 803F6620
  c->f[1]=c->f[18]; // 803F6624
  c->lr=0x803F662Cu; f_803F52CC(c); // 803F6628
  c->f[19]=c->f[1]; // 803F662C
  c->f[1]=c->f[18]; // 803F6630
  c->lr=0x803F6638u; f_803F52F0(c); // 803F6634
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F6638
  c->f[1]=-c->f[1]; // 803F663C
  c->f[2]=c->f[19]; // 803F6640
  c->r[3]=c->r[1]+0x000000C0u; // 803F6644
  c->f[4]=c->f[3]; // 803F6648
  c->lr=0x803F6650u; f_803E54F4(c); // 803F664C
  c->r[4]=c->r[3]|c->r[3]; // 803F6650
  c->r[3]=c->r[1]+0x00000190u; // 803F6654
  c->lr=0x803F665Cu; f_803E53A0(c); // 803F6658
  c->f[1]=c->f[18]; // 803F665C
  c->lr=0x803F6664u; f_803F52F0(c); // 803F6660
  c->f[19]=-c->f[1]; // 803F6664
  c->f[1]=c->f[18]; // 803F6668
  c->lr=0x803F6670u; f_803F52CC(c); // 803F666C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F6670
  c->f[1]=-c->f[1]; // 803F6674
  c->f[2]=c->f[19]; // 803F6678
  c->r[3]=c->r[1]+0x000000B0u; // 803F667C
  c->f[4]=c->f[3]; // 803F6680
  c->lr=0x803F6688u; f_803E54F4(c); // 803F6684
  c->r[4]=c->r[3]|c->r[3]; // 803F6688
  c->r[3]=c->r[1]+0x00000180u; // 803F668C
  c->lr=0x803F6694u; f_803E53A0(c); // 803F6690
  goto L_803F66E0; // 803F6694
L_803F6698:;
  c->f[2]=c->f[22]; // 803F6698
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F669C
  c->f[3]=c->f[22]; // 803F66A0
  c->r[3]=c->r[1]+0x000000A0u; // 803F66A4
  c->f[4]=c->f[22]; // 803F66A8
  c->lr=0x803F66B0u; f_803E54F4(c); // 803F66AC
  c->r[4]=c->r[3]|c->r[3]; // 803F66B0
  c->r[3]=c->r[1]+0x00000190u; // 803F66B4
  c->lr=0x803F66BCu; f_803E53A0(c); // 803F66B8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F66BC
  c->r[3]=c->r[1]+0x00000090u; // 803F66C0
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F66C4
  c->f[3]=c->f[1]; // 803F66C8
  c->f[4]=c->f[1]; // 803F66CC
  c->lr=0x803F66D4u; f_803E54F4(c); // 803F66D0
  c->r[4]=c->r[3]|c->r[3]; // 803F66D4
  c->r[3]=c->r[1]+0x00000180u; // 803F66D8
  c->lr=0x803F66E0u; f_803E53A0(c); // 803F66DC
L_803F66E0:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F66E0
  if (crb(c,2)) { goto L_803F671C; } // 803F66E4
  c->r[3]=c->r[1]+0x000002C0u; // 803F66E8
  c->r[4]=c->r[1]+0x00000350u; // 803F66EC
  c->r[5]=c->r[23]+0x00000008u; // 803F66F0
  c->lr=0x803F66F8u; f_803F6E04(c); // 803F66F4
  c->r[3]=c->r[23]+0x000000D0u; // 803F66F8
  c->r[4]=c->r[1]+0x000002C0u; // 803F66FC
  c->r[5]=c->r[1]+0x00000190u; // 803F6700
  c->lr=0x803F6708u; f_803E541C(c); // 803F6704
  c->r[3]=c->r[23]+0x000000E0u; // 803F6708
  c->r[4]=c->r[1]+0x000002C0u; // 803F670C
  c->r[5]=c->r[1]+0x00000180u; // 803F6710
  c->lr=0x803F6718u; f_803E541C(c); // 803F6714
  goto L_803F6BC4; // 803F6718
L_803F671C:;
  c->r[3]=c->r[23]+0x000000D0u; // 803F671C
  c->r[4]=c->r[23]+0x00000008u; // 803F6720
  c->r[5]=c->r[1]+0x00000190u; // 803F6724
  c->lr=0x803F672Cu; f_803E541C(c); // 803F6728
  c->r[3]=c->r[23]+0x000000E0u; // 803F672C
  c->r[4]=c->r[23]+0x00000008u; // 803F6730
  c->r[5]=c->r[1]+0x00000180u; // 803F6734
  c->lr=0x803F673Cu; f_803E541C(c); // 803F6738
  goto L_803F6BC4; // 803F673C
L_803F6740:;
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F6740
  c->r[4]=c->r[23]|c->r[23]; // 803F6744
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6748
  c->r[3]=c->r[17]+0x000001D4u; // 803F674C
  c->r[0]=c->r[0]^0x80000000u; // 803F6750
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F6754
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[0]=RF64(ea);} // 803F6758
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[28]); // 803F675C
  c->lr=0x803F6764u; f_803E8D7C(c); // 803F6760
  c->f[18]=c->f[1]; // 803F6764
  c->r[3]=c->r[1]+0x00000170u; // 803F6768
  c->lr=0x803F6770u; f_803E49FC(c); // 803F676C
  c->r[3]=c->r[1]+0x00000160u; // 803F6770
  c->lr=0x803F6778u; f_803E49FC(c); // 803F6774
  fcmp(c,0,c->f[18],c->f[22]); // 803F6778
  if (crb(c,2)) { goto L_803F67F4; } // 803F677C
  c->f[1]=c->f[18]; // 803F6780
  c->lr=0x803F6788u; f_803F52CC(c); // 803F6784
  c->f[19]=c->f[1]; // 803F6788
  c->f[1]=c->f[18]; // 803F678C
  c->lr=0x803F6794u; f_803F52F0(c); // 803F6790
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F6794
  c->f[1]=-c->f[1]; // 803F6798
  c->f[3]=c->f[19]; // 803F679C
  c->r[3]=c->r[1]+0x00000080u; // 803F67A0
  c->f[4]=c->f[2]; // 803F67A4
  c->lr=0x803F67ACu; f_803E54F4(c); // 803F67A8
  c->r[4]=c->r[3]|c->r[3]; // 803F67AC
  c->r[3]=c->r[1]+0x00000170u; // 803F67B0
  c->lr=0x803F67B8u; f_803E53A0(c); // 803F67B4
  c->f[1]=c->f[18]; // 803F67B8
  c->lr=0x803F67C0u; f_803F52F0(c); // 803F67BC
  c->f[19]=-c->f[1]; // 803F67C0
  c->f[1]=c->f[18]; // 803F67C4
  c->lr=0x803F67CCu; f_803F52CC(c); // 803F67C8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F67CC
  c->f[1]=-c->f[1]; // 803F67D0
  c->f[3]=c->f[19]; // 803F67D4
  c->r[3]=c->r[1]+0x00000070u; // 803F67D8
  c->f[4]=c->f[2]; // 803F67DC
  c->lr=0x803F67E4u; f_803E54F4(c); // 803F67E0
  c->r[4]=c->r[3]|c->r[3]; // 803F67E4
  c->r[3]=c->r[1]+0x00000160u; // 803F67E8
  c->lr=0x803F67F0u; f_803E53A0(c); // 803F67EC
  goto L_803F683C; // 803F67F0
L_803F67F4:;
  c->f[2]=c->f[22]; // 803F67F4
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F67F8
  c->f[3]=c->f[22]; // 803F67FC
  c->r[3]=c->r[1]+0x00000060u; // 803F6800
  c->f[4]=c->f[22]; // 803F6804
  c->lr=0x803F680Cu; f_803E54F4(c); // 803F6808
  c->r[4]=c->r[3]|c->r[3]; // 803F680C
  c->r[3]=c->r[1]+0x00000170u; // 803F6810
  c->lr=0x803F6818u; f_803E53A0(c); // 803F6814
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6818
  c->r[3]=c->r[1]+0x00000050u; // 803F681C
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F6820
  c->f[2]=c->f[1]; // 803F6824
  c->f[4]=c->f[1]; // 803F6828
  c->lr=0x803F6830u; f_803E54F4(c); // 803F682C
  c->r[4]=c->r[3]|c->r[3]; // 803F6830
  c->r[3]=c->r[1]+0x00000160u; // 803F6834
  c->lr=0x803F683Cu; f_803E53A0(c); // 803F6838
L_803F683C:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F683C
  if (crb(c,2)) { goto L_803F6878; } // 803F6840
  c->r[3]=c->r[1]+0x00000290u; // 803F6844
  c->r[4]=c->r[1]+0x00000350u; // 803F6848
  c->r[5]=c->r[23]+0x00000008u; // 803F684C
  c->lr=0x803F6854u; f_803F6E04(c); // 803F6850
  c->r[3]=c->r[23]+0x000000D0u; // 803F6854
  c->r[4]=c->r[1]+0x00000290u; // 803F6858
  c->r[5]=c->r[1]+0x00000170u; // 803F685C
  c->lr=0x803F6864u; f_803E541C(c); // 803F6860
  c->r[3]=c->r[23]+0x000000E0u; // 803F6864
  c->r[4]=c->r[1]+0x00000290u; // 803F6868
  c->r[5]=c->r[1]+0x00000160u; // 803F686C
  c->lr=0x803F6874u; f_803E541C(c); // 803F6870
  goto L_803F6BC4; // 803F6874
L_803F6878:;
  c->r[3]=c->r[23]+0x000000D0u; // 803F6878
  c->r[4]=c->r[23]+0x00000008u; // 803F687C
  c->r[5]=c->r[1]+0x00000170u; // 803F6880
  c->lr=0x803F6888u; f_803E541C(c); // 803F6884
  c->r[3]=c->r[23]+0x000000E0u; // 803F6888
  c->r[4]=c->r[23]+0x00000008u; // 803F688C
  c->r[5]=c->r[1]+0x00000160u; // 803F6890
  c->lr=0x803F6898u; f_803E541C(c); // 803F6894
  goto L_803F6BC4; // 803F6898
L_803F689C:;
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F689C
  c->r[4]=c->r[23]|c->r[23]; // 803F68A0
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F68A4
  c->r[3]=c->r[17]+0x000001D4u; // 803F68A8
  c->r[0]=c->r[0]^0x80000000u; // 803F68AC
  W32(c->r[1]+0x000003E4u,c->r[0]); // 803F68B0
  {uint32_t ea=c->r[1]+0x000003E0u; c->f[0]=RF64(ea);} // 803F68B4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[28]); // 803F68B8
  c->lr=0x803F68C0u; f_803E8D7C(c); // 803F68BC
  c->f[18]=c->f[1]; // 803F68C0
  c->r[3]=c->r[1]+0x00000150u; // 803F68C4
  c->lr=0x803F68CCu; f_803E49FC(c); // 803F68C8
  c->r[3]=c->r[1]+0x00000140u; // 803F68CC
  c->lr=0x803F68D4u; f_803E49FC(c); // 803F68D0
  fcmp(c,0,c->f[18],c->f[22]); // 803F68D4
  if (crb(c,2)) { goto L_803F6950; } // 803F68D8
  c->f[1]=c->f[18]; // 803F68DC
  c->lr=0x803F68E4u; f_803F52F0(c); // 803F68E0
  c->f[19]=c->f[1]; // 803F68E4
  c->f[1]=c->f[18]; // 803F68E8
  c->lr=0x803F68F0u; f_803F52CC(c); // 803F68EC
  c->f[2]=c->f[1]; // 803F68F0
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F68F4
  c->f[3]=c->f[19]; // 803F68F8
  c->r[3]=c->r[1]+0x00000040u; // 803F68FC
  c->f[4]=c->f[1]; // 803F6900
  c->lr=0x803F6908u; f_803E54F4(c); // 803F6904
  c->r[4]=c->r[3]|c->r[3]; // 803F6908
  c->r[3]=c->r[1]+0x00000150u; // 803F690C
  c->lr=0x803F6914u; f_803E53A0(c); // 803F6910
  c->f[1]=c->f[18]; // 803F6914
  c->lr=0x803F691Cu; f_803F52CC(c); // 803F6918
  c->f[19]=c->f[1]; // 803F691C
  c->f[1]=c->f[18]; // 803F6920
  c->lr=0x803F6928u; f_803F52F0(c); // 803F6924
  c->f[2]=-c->f[1]; // 803F6928
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F692C
  c->f[3]=c->f[19]; // 803F6930
  c->r[3]=c->r[1]+0x00000030u; // 803F6934
  c->f[4]=c->f[1]; // 803F6938
  c->lr=0x803F6940u; f_803E54F4(c); // 803F693C
  c->r[4]=c->r[3]|c->r[3]; // 803F6940
  c->r[3]=c->r[1]+0x00000140u; // 803F6944
  c->lr=0x803F694Cu; f_803E53A0(c); // 803F6948
  goto L_803F6998; // 803F694C
L_803F6950:;
  c->f[1]=c->f[22]; // 803F6950
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F6954
  c->f[2]=c->f[22]; // 803F6958
  c->r[3]=c->r[1]+0x00000020u; // 803F695C
  c->f[4]=c->f[22]; // 803F6960
  c->lr=0x803F6968u; f_803E54F4(c); // 803F6964
  c->r[4]=c->r[3]|c->r[3]; // 803F6968
  c->r[3]=c->r[1]+0x00000150u; // 803F696C
  c->lr=0x803F6974u; f_803E53A0(c); // 803F6970
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6974
  c->r[3]=c->r[1]+0x00000010u; // 803F6978
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F697C
  c->f[3]=c->f[1]; // 803F6980
  c->f[4]=c->f[1]; // 803F6984
  c->lr=0x803F698Cu; f_803E54F4(c); // 803F6988
  c->r[4]=c->r[3]|c->r[3]; // 803F698C
  c->r[3]=c->r[1]+0x00000140u; // 803F6990
  c->lr=0x803F6998u; f_803E53A0(c); // 803F6994
L_803F6998:;
  cmps(c,0,(int32_t)c->r[26],0); // 803F6998
  if (crb(c,2)) { goto L_803F69D4; } // 803F699C
  c->r[3]=c->r[1]+0x00000260u; // 803F69A0
  c->r[4]=c->r[1]+0x00000350u; // 803F69A4
  c->r[5]=c->r[23]+0x00000008u; // 803F69A8
  c->lr=0x803F69B0u; f_803F6E04(c); // 803F69AC
  c->r[3]=c->r[23]+0x000000D0u; // 803F69B0
  c->r[4]=c->r[1]+0x00000260u; // 803F69B4
  c->r[5]=c->r[1]+0x00000150u; // 803F69B8
  c->lr=0x803F69C0u; f_803E541C(c); // 803F69BC
  c->r[3]=c->r[23]+0x000000E0u; // 803F69C0
  c->r[4]=c->r[1]+0x00000260u; // 803F69C4
  c->r[5]=c->r[1]+0x00000140u; // 803F69C8
  c->lr=0x803F69D0u; f_803E541C(c); // 803F69CC
  goto L_803F6BC4; // 803F69D0
L_803F69D4:;
  c->r[3]=c->r[23]+0x000000D0u; // 803F69D4
  c->r[4]=c->r[23]+0x00000008u; // 803F69D8
  c->r[5]=c->r[1]+0x00000150u; // 803F69DC
  c->lr=0x803F69E4u; f_803E541C(c); // 803F69E0
  c->r[3]=c->r[23]+0x000000E0u; // 803F69E4
  c->r[4]=c->r[23]+0x00000008u; // 803F69E8
  c->r[5]=c->r[1]+0x00000140u; // 803F69EC
  c->lr=0x803F69F4u; f_803E541C(c); // 803F69F0
  goto L_803F6BC4; // 803F69F4
L_803F69F8:;
  c->r[3]=c->r[1]+0x00000130u; // 803F69F8
  c->lr=0x803F6A00u; f_803E49FC(c); // 803F69FC
  c->r[5]=c->r[22]|c->r[22]; // 803F6A00
  c->r[3]=c->r[1]+0x00000130u; // 803F6A04
  c->r[4]=c->r[23]+0x000000C0u; // 803F6A08
  c->lr=0x803F6A10u; f_803E4A00(c); // 803F6A0C
  c->r[3]=c->r[1]+0x00000130u; // 803F6A10
  c->lr=0x803F6A18u; f_803F5318(c); // 803F6A14
  {uint32_t ea=c->r[23]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F6A18
  {uint32_t ea=c->r[23]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6A1C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803F6A20
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803F6A24
  fcmp(c,0,c->f[0],c->f[30]); // 803F6A28
  if (!crb(c,1)) { goto L_803F6A7C; } // 803F6A2C
  c->r[3]=c->r[1]+0x00000120u; // 803F6A30
  c->r[4]=c->r[1]+0x00000210u; // 803F6A34
  c->lr=0x803F6A3Cu; f_803E536C(c); // 803F6A38
  c->r[3]=c->r[1]+0x00000130u; // 803F6A3C
  c->r[4]=c->r[1]+0x00000120u; // 803F6A40
  c->lr=0x803F6A48u; f_803EC49C(c); // 803F6A44
  c->r[3]=c->r[1]+0x00000120u; // 803F6A48
  c->lr=0x803F6A50u; f_803E7614(c); // 803F6A4C
  c->r[3]=c->r[23]+0x000000D0u; // 803F6A50
  c->r[4]=c->r[1]+0x00000120u; // 803F6A54
  c->r[5]=c->r[1]+0x00000130u; // 803F6A58
  c->lr=0x803F6A60u; f_803E4A00(c); // 803F6A5C
  c->r[3]=c->r[23]+0x000000D0u; // 803F6A60
  c->lr=0x803F6A68u; f_803F536C(c); // 803F6A64
  c->r[3]=c->r[23]+0x000000E0u; // 803F6A68
  c->r[4]=c->r[23]+0x000000D0u; // 803F6A6C
  c->r[5]=c->r[1]+0x00000210u; // 803F6A70
  c->lr=0x803F6A78u; f_803E54A8(c); // 803F6A74
  goto L_803F6BC4; // 803F6A78
L_803F6A7C:;
  c->r[3]=c->r[23]+0x000000D0u; // 803F6A7C
  c->r[4]=c->r[1]+0x00000200u; // 803F6A80
  c->lr=0x803F6A88u; f_803E53A0(c); // 803F6A84
  c->r[3]=c->r[23]+0x000000E0u; // 803F6A88
  c->r[4]=c->r[1]+0x000001F0u; // 803F6A8C
  c->lr=0x803F6A94u; f_803E53A0(c); // 803F6A90
  goto L_803F6BC4; // 803F6A94
L_803F6A98:;
  c->r[0]=R32(c->r[17]+0x0000016Cu); // 803F6A98
  c->r[4]=c->r[23]|c->r[23]; // 803F6A9C
  {uint32_t ea=c->r[23]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6AA0
  c->r[3]=c->r[17]+0x00000198u; // 803F6AA4
  c->r[0]=c->r[0]^0x80000000u; // 803F6AA8
  W32(c->r[1]+0x000003ECu,c->r[0]); // 803F6AAC
  {uint32_t ea=c->r[1]+0x000003E8u; c->f[0]=RF64(ea);} // 803F6AB0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[28]); // 803F6AB4
  c->lr=0x803F6ABCu; f_803E8D7C(c); // 803F6AB8
  c->f[18]=c->f[1]; // 803F6ABC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6AC0
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F6AC4
  c->r[3]=c->r[1]+0x00000110u; // 803F6AC8
  c->f[3]=c->f[1]; // 803F6ACC
  c->f[4]=c->f[1]; // 803F6AD0
  c->lr=0x803F6AD8u; f_803E54F4(c); // 803F6AD4
  c->r[3]=c->r[1]+0x00000110u; // 803F6AD8
  c->r[4]=c->r[23]+0x00000008u; // 803F6ADC
  c->r[5]=c->r[3]|c->r[3]; // 803F6AE0
  c->lr=0x803F6AE8u; f_803E541C(c); // 803F6AE4
  c->f[1]=c->f[18]; // 803F6AE8
  c->r[3]=c->r[23]+0x000000D0u; // 803F6AEC
  c->r[4]=c->r[1]+0x00000110u; // 803F6AF0
  c->lr=0x803F6AF8u; f_803E52DC(c); // 803F6AF4
  cmps(c,0,(int32_t)c->r[26],0); // 803F6AF8
  if (crb(c,2)) { goto L_803F6B10; } // 803F6AFC
  c->r[3]=c->r[23]+0x000000D0u; // 803F6B00
  c->r[4]=c->r[1]+0x00000350u; // 803F6B04
  c->r[5]=c->r[3]|c->r[3]; // 803F6B08
  c->lr=0x803F6B10u; f_803E541C(c); // 803F6B0C
L_803F6B10:;
  c->r[3]=c->r[23]+0x000000E0u; // 803F6B10
  c->r[4]=c->r[23]+0x000000D0u; // 803F6B14
  c->r[5]=c->r[1]+0x00000210u; // 803F6B18
  c->lr=0x803F6B20u; f_803E54A8(c); // 803F6B1C
  c->r[3]=c->r[23]+0x000000E0u; // 803F6B20
  c->lr=0x803F6B28u; f_803E4A34(c); // 803F6B24
  fcmp(c,0,c->f[1],c->f[31]); // 803F6B28
  if (!crb(c,1)) { goto L_803F6B38; } // 803F6B2C
  c->r[3]=c->r[23]+0x000000E0u; // 803F6B30
  c->lr=0x803F6B38u; f_803E5484(c); // 803F6B34
L_803F6B38:;
  c->r[3]=c->r[1]+0x00000100u; // 803F6B38
  c->lr=0x803F6B40u; f_803E49FC(c); // 803F6B3C
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6B40
  c->r[3]=c->r[1]+0x00000100u; // 803F6B44
  c->r[4]=c->r[23]+0x000000D0u; // 803F6B48
  c->lr=0x803F6B50u; f_803E52DC(c); // 803F6B4C
  c->r[3]=c->r[23]+0x000000C0u; // 803F6B50
  c->r[4]=c->r[1]+0x00000100u; // 803F6B54
  c->lr=0x803F6B5Cu; f_803E52F8(c); // 803F6B58
  {uint32_t ea=c->r[23]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6B5C
  c->r[3]=c->r[23]+0x000000D0u; // 803F6B60
  c->lr=0x803F6B68u; f_803E5484(c); // 803F6B64
  goto L_803F6BC4; // 803F6B68
L_803F6B6C:;
  c->r[3]=c->r[1]+0x000000F0u; // 803F6B6C
  c->lr=0x803F6B74u; f_803E49FC(c); // 803F6B70
  c->r[3]=c->r[1]+0x000000E0u; // 803F6B74
  c->lr=0x803F6B7Cu; f_803E49FC(c); // 803F6B78
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F6B7C
  c->r[3]=c->r[1]+0x000000F0u; // 803F6B80
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6B84
  c->f[3]=c->f[2]; // 803F6B88
  c->lr=0x803F6B90u; f_803E5508(c); // 803F6B8C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6B90
  c->r[3]=c->r[1]+0x000000E0u; // 803F6B94
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F6B98
  c->f[2]=c->f[1]; // 803F6B9C
  c->lr=0x803F6BA4u; f_803E5508(c); // 803F6BA0
  c->r[3]=c->r[23]+0x000000D0u; // 803F6BA4
  c->r[4]=c->r[23]+0x00000008u; // 803F6BA8
  c->r[5]=c->r[1]+0x000000F0u; // 803F6BAC
  c->lr=0x803F6BB4u; f_803E541C(c); // 803F6BB0
  c->r[3]=c->r[23]+0x000000E0u; // 803F6BB4
  c->r[4]=c->r[23]+0x00000008u; // 803F6BB8
  c->r[5]=c->r[1]+0x000000E0u; // 803F6BBC
  c->lr=0x803F6BC4u; f_803E541C(c); // 803F6BC0
L_803F6BC4:;
  {uint32_t ea=c->r[23]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6BC4
  c->r[18]=c->r[23]+0x000000C0u; // 803F6BC8
  c->r[3]=c->r[23]+0x000000D0u; // 803F6BCC
  c->lr=0x803F6BD4u; f_803E7614(c); // 803F6BD0
  {uint32_t ea=c->r[23]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6BD4
  c->r[3]=c->r[23]+0x000000E0u; // 803F6BD8
  c->lr=0x803F6BE0u; f_803E7614(c); // 803F6BDC
  {uint32_t ea=c->r[23]+0x000000ECu; WF32(ea,c->f[24]);} // 803F6BE0
  c->r[4]=c->r[18]|c->r[18]; // 803F6BE4
  c->r[3]=c->r[1]+0x00000220u; // 803F6BE8
  c->r[5]=c->r[23]+0x000000D0u; // 803F6BEC
  {uint32_t ea=c->r[23]+0x000000DCu; WF32(ea,c->f[24]);} // 803F6BF0
  c->lr=0x803F6BF8u; f_803E4A00(c); // 803F6BF4
  c->r[3]=c->r[1]+0x00000220u; // 803F6BF8
  c->r[4]=c->r[23]+0x000000E0u; // 803F6BFC
  c->lr=0x803F6C04u; f_803E52F8(c); // 803F6C00
  c->r[3]=c->r[1]+0x00000380u; // 803F6C04
  c->r[4]=c->r[1]+0x00000220u; // 803F6C08
  c->lr=0x803F6C10u; f_803F70A8(c); // 803F6C0C
  {uint32_t ea=c->r[23]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6C10
  c->r[3]=c->r[23]+0x00000100u; // 803F6C14
  {uint32_t ea=c->r[1]+0x00000390u; WF32(ea,c->f[0]);} // 803F6C18
  {uint32_t ea=c->r[23]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6C1C
  {uint32_t ea=c->r[1]+0x00000394u; WF32(ea,c->f[0]);} // 803F6C20
  c->lr=0x803F6C28u; f_803F70C4(c); // 803F6C24
  W32(c->r[1]+0x0000038Cu,c->r[3]); // 803F6C28
  c->r[4]=c->r[18]|c->r[18]; // 803F6C2C
  c->r[3]=c->r[1]+0x00000220u; // 803F6C30
  c->r[5]=c->r[23]+0x000000D0u; // 803F6C34
  c->lr=0x803F6C3Cu; f_803E531C(c); // 803F6C38
  c->r[3]=c->r[1]+0x00000220u; // 803F6C3C
  c->r[4]=c->r[23]+0x000000E0u; // 803F6C40
  c->lr=0x803F6C48u; f_803E52F8(c); // 803F6C44
  c->r[3]=c->r[1]+0x00000398u; // 803F6C48
  c->r[4]=c->r[1]+0x00000220u; // 803F6C4C
  c->lr=0x803F6C54u; f_803F70A8(c); // 803F6C50
  {uint32_t ea=c->r[23]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6C54
  c->r[3]=c->r[23]+0x00000100u; // 803F6C58
  {uint32_t ea=c->r[1]+0x000003A8u; WF32(ea,c->f[0]);} // 803F6C5C
  {uint32_t ea=c->r[23]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6C60
  {uint32_t ea=c->r[1]+0x000003ACu; WF32(ea,c->f[0]);} // 803F6C64
  c->lr=0x803F6C6Cu; f_803F70C4(c); // 803F6C68
  W32(c->r[1]+0x000003A4u,c->r[3]); // 803F6C6C
  c->r[4]=c->r[18]|c->r[18]; // 803F6C70
  c->r[3]=c->r[1]+0x00000220u; // 803F6C74
  c->r[5]=c->r[23]+0x000000D0u; // 803F6C78
  c->lr=0x803F6C80u; f_803E4A00(c); // 803F6C7C
  c->r[3]=c->r[1]+0x00000220u; // 803F6C80
  c->r[4]=c->r[23]+0x000000E0u; // 803F6C84
  c->lr=0x803F6C8Cu; f_803E99D0(c); // 803F6C88
  c->r[3]=c->r[1]+0x000003B0u; // 803F6C8C
  c->r[4]=c->r[1]+0x00000220u; // 803F6C90
  c->lr=0x803F6C98u; f_803F70A8(c); // 803F6C94
  {uint32_t ea=c->r[23]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6C98
  c->r[3]=c->r[23]+0x00000100u; // 803F6C9C
  {uint32_t ea=c->r[1]+0x000003C0u; WF32(ea,c->f[0]);} // 803F6CA0
  {uint32_t ea=c->r[23]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6CA4
  {uint32_t ea=c->r[1]+0x000003C4u; WF32(ea,c->f[0]);} // 803F6CA8
  c->lr=0x803F6CB0u; f_803F70C4(c); // 803F6CAC
  W32(c->r[1]+0x000003BCu,c->r[3]); // 803F6CB0
  c->r[4]=c->r[18]|c->r[18]; // 803F6CB4
  c->r[3]=c->r[1]+0x00000220u; // 803F6CB8
  c->r[5]=c->r[23]+0x000000D0u; // 803F6CBC
  c->lr=0x803F6CC4u; f_803E531C(c); // 803F6CC0
  c->r[3]=c->r[1]+0x00000220u; // 803F6CC4
  c->r[4]=c->r[23]+0x000000E0u; // 803F6CC8
  c->lr=0x803F6CD0u; f_803E99D0(c); // 803F6CCC
  c->r[3]=c->r[1]+0x000003C8u; // 803F6CD0
  c->r[4]=c->r[1]+0x00000220u; // 803F6CD4
  c->lr=0x803F6CDCu; f_803F70A8(c); // 803F6CD8
  {uint32_t ea=c->r[23]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6CDC
  c->r[3]=c->r[23]+0x00000100u; // 803F6CE0
  {uint32_t ea=c->r[1]+0x000003D8u; WF32(ea,c->f[0]);} // 803F6CE4
  {uint32_t ea=c->r[23]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6CE8
  {uint32_t ea=c->r[1]+0x000003DCu; WF32(ea,c->f[0]);} // 803F6CEC
  c->lr=0x803F6CF4u; f_803F70C4(c); // 803F6CF0
  W32(c->r[1]+0x000003D4u,c->r[3]); // 803F6CF4
  c->r[3]=R32(c->r[17]+0x00000168u); // 803F6CF8
  c->lr=0x803F6D00u; f_80402080(c); // 803F6CFC
  c->r[3]=R32(c->r[17]+0x00000168u); // 803F6D00
  c->r[4]=c->r[1]+0x00000380u; // 803F6D04
  c->lr=0x803F6D0Cu; f_80401D64(c); // 803F6D08
  c->r[3]=R32(c->r[17]+0x00000168u); // 803F6D0C
  c->r[4]=c->r[1]+0x00000398u; // 803F6D10
  c->lr=0x803F6D18u; f_80401D64(c); // 803F6D14
  c->r[3]=R32(c->r[17]+0x00000168u); // 803F6D18
  c->r[4]=c->r[1]+0x000003B0u; // 803F6D1C
  c->lr=0x803F6D24u; f_80401D64(c); // 803F6D20
  c->r[3]=R32(c->r[17]+0x00000168u); // 803F6D24
  c->r[4]=c->r[1]+0x000003C8u; // 803F6D28
  c->lr=0x803F6D30u; f_80401D64(c); // 803F6D2C
  c->r[3]=R32(c->r[17]+0x00000168u); // 803F6D30
  c->lr=0x803F6D38u; f_8040208C(c); // 803F6D34
L_803F6D38:;
  c->r[23]=R32(c->r[23]+0x00000004u); // 803F6D38
L_803F6D3C:;
  cmps(c,0,(int32_t)c->r[23],0); // 803F6D3C
  if (!crb(c,2)) { IRQCHK(c); goto L_803F5E28; } // 803F6D40
  {uint32_t ea=c->r[1]+0x00000528u; psq_load(c,31,ea,0,0);} // 803F6D44
  {uint32_t ea=c->r[1]+0x00000520u; c->f[31]=RF64(ea);} // 803F6D48
  {uint32_t ea=c->r[1]+0x00000518u; psq_load(c,30,ea,0,0);} // 803F6D4C
  {uint32_t ea=c->r[1]+0x00000510u; c->f[30]=RF64(ea);} // 803F6D50
  {uint32_t ea=c->r[1]+0x00000508u; psq_load(c,29,ea,0,0);} // 803F6D54
  {uint32_t ea=c->r[1]+0x00000500u; c->f[29]=RF64(ea);} // 803F6D58
  {uint32_t ea=c->r[1]+0x000004F8u; psq_load(c,28,ea,0,0);} // 803F6D5C
  {uint32_t ea=c->r[1]+0x000004F0u; c->f[28]=RF64(ea);} // 803F6D60
  {uint32_t ea=c->r[1]+0x000004E8u; psq_load(c,27,ea,0,0);} // 803F6D64
  {uint32_t ea=c->r[1]+0x000004E0u; c->f[27]=RF64(ea);} // 803F6D68
  {uint32_t ea=c->r[1]+0x000004D8u; psq_load(c,26,ea,0,0);} // 803F6D6C
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[26]=RF64(ea);} // 803F6D70
  {uint32_t ea=c->r[1]+0x000004C8u; psq_load(c,25,ea,0,0);} // 803F6D74
  {uint32_t ea=c->r[1]+0x000004C0u; c->f[25]=RF64(ea);} // 803F6D78
  {uint32_t ea=c->r[1]+0x000004B8u; psq_load(c,24,ea,0,0);} // 803F6D7C
  {uint32_t ea=c->r[1]+0x000004B0u; c->f[24]=RF64(ea);} // 803F6D80
  {uint32_t ea=c->r[1]+0x000004A8u; psq_load(c,23,ea,0,0);} // 803F6D84
  {uint32_t ea=c->r[1]+0x000004A0u; c->f[23]=RF64(ea);} // 803F6D88
  {uint32_t ea=c->r[1]+0x00000498u; psq_load(c,22,ea,0,0);} // 803F6D8C
  {uint32_t ea=c->r[1]+0x00000490u; c->f[22]=RF64(ea);} // 803F6D90
  {uint32_t ea=c->r[1]+0x00000488u; psq_load(c,21,ea,0,0);} // 803F6D94
  {uint32_t ea=c->r[1]+0x00000480u; c->f[21]=RF64(ea);} // 803F6D98
  {uint32_t ea=c->r[1]+0x00000478u; psq_load(c,20,ea,0,0);} // 803F6D9C
  {uint32_t ea=c->r[1]+0x00000470u; c->f[20]=RF64(ea);} // 803F6DA0
  {uint32_t ea=c->r[1]+0x00000468u; psq_load(c,19,ea,0,0);} // 803F6DA4
  {uint32_t ea=c->r[1]+0x00000460u; c->f[19]=RF64(ea);} // 803F6DA8
  {uint32_t ea=c->r[1]+0x00000458u; psq_load(c,18,ea,0,0);} // 803F6DAC
  c->r[11]=c->r[1]+0x00000450u; // 803F6DB0
  {uint32_t ea=c->r[1]+0x00000450u; c->f[18]=RF64(ea);} // 803F6DB4
  c->lr=0x803F6DBCu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F6DB8
  c->r[0]=R32(c->r[1]+0x00000534u); // 803F6DBC
  c->lr=c->r[0]; // 803F6DC0
  c->r[1]=c->r[1]+0x00000530u; // 803F6DC4
  return; // 803F6DC8
}

// fn_803F6DCC
void f_803F6DCC(Ctx* __restrict c) {
  trace_call(0x803F6DCCu);
  return; // 803F6DCC
}

// fn_803F6DD0
void f_803F6DD0(Ctx* __restrict c) {
  trace_call(0x803F6DD0u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F6DD0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F6DD4
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,3,ea,0,0);} // 803F6DD8
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,2,ea,0,0);} // 803F6DDC
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,5,ea,0,0);} // 803F6DE0
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,4,ea,0,0);} // 803F6DE4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F6DE8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 803F6DEC
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 803F6DF0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 803F6DF4
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,5,ea,0,0);} // 803F6DF8
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,4,ea,0,0);} // 803F6DFC
  return; // 803F6E00
}

// fn_803F6E04
void f_803F6E04(Ctx* __restrict c) {
  trace_call(0x803F6E04u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F6E04
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 803F6E08
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 803F6E0C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 803F6E10
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 803F6E14
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[29]);} // 803F6E18
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,29,ea,0,0);} // 803F6E1C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[28]);} // 803F6E20
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,28,ea,0,0);} // 803F6E24
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[27]);} // 803F6E28
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,27,ea,0,0);} // 803F6E2C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[26]);} // 803F6E30
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,26,ea,0,0);} // 803F6E34
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[25]);} // 803F6E38
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,25,ea,0,0);} // 803F6E3C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[24]);} // 803F6E40
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,24,ea,0,0);} // 803F6E44
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[23]);} // 803F6E48
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,23,ea,0,0);} // 803F6E4C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[22]);} // 803F6E50
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,22,ea,0,0);} // 803F6E54
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[21]);} // 803F6E58
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,21,ea,0,0);} // 803F6E5C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[20]);} // 803F6E60
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,20,ea,0,0);} // 803F6E64
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[19]);} // 803F6E68
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,19,ea,0,0);} // 803F6E6C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[18]);} // 803F6E70
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,18,ea,0,0);} // 803F6E74
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6E78
  c->r[8]=c->r[1]+0x00000028u; // 803F6E7C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 803F6E80
  c->r[9]=c->r[1]+0x00000030u; // 803F6E84
  {uint32_t ea=c->r[5]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 803F6E88
  c->r[6]=c->r[1]+0x00000018u; // 803F6E8C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[21]=c->ps1[21]=RF32(ea);} // 803F6E90
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[11]); // 803F6E94
  {uint32_t ea=c->r[4]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F6E98
  c->f[19]=c->ps1[19]=S(c->f[0]*c->f[9]); // 803F6E9C
  {uint32_t ea=c->r[5]+0x00000018u; c->f[10]=c->ps1[10]=RF32(ea);} // 803F6EA0
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[21]); // 803F6EA4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6EA8
  {uint32_t ea=c->r[5]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 803F6EAC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[10]); // 803F6EB0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6EB4
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[11]); // 803F6EB8
  {uint32_t ea=c->r[5]+0x00000010u; c->f[23]=c->ps1[23]=RF32(ea);} // 803F6EBC
  c->f[20]=c->ps1[20]=S(c->f[4]*c->f[8]); // 803F6EC0
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[26]=c->ps1[26]=RF32(ea);} // 803F6EC4
  c->f[24]=c->ps1[24]=S(c->f[4]*c->f[23]); // 803F6EC8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F6ECC
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[9]); // 803F6ED0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F6ED4
  {uint32_t ea=c->r[5]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F6ED8
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[21]); // 803F6EDC
  c->f[18]=c->ps1[18]=S(c->f[5]*c->f[4]); // 803F6EE0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 803F6EE4
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[10]); // 803F6EE8
  {uint32_t ea=c->r[5]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F6EEC
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[8]); // 803F6EF0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[25]=c->ps1[25]=RF32(ea);} // 803F6EF4
  c->f[12]=c->ps1[12]=S(c->f[0]*c->f[23]); // 803F6EF8
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F6EFC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803F6F00
  {uint32_t ea=c->r[4]+0x00000008u; c->f[13]=c->ps1[13]=RF32(ea);} // 803F6F04
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[11]); // 803F6F08
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[26]);} // 803F6F0C
  c->f[9]=c->ps1[9]=S(c->f[7]*c->f[9]); // 803F6F10
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[26]);} // 803F6F14
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[21]); // 803F6F18
  c->r[7]=c->r[1]+0x00000020u; // 803F6F1C
  c->f[21]=c->ps1[21]=S(c->f[19]+c->f[20]); // 803F6F20
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[26]);} // 803F6F24
  c->f[19]=c->ps1[19]=S(c->f[18]+c->f[2]); // 803F6F28
  c->r[4]=c->r[1]+0x00000008u; // 803F6F2C
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[0]); // 803F6F30
  c->r[5]=c->r[1]+0x00000010u; // 803F6F34
  c->f[2]=c->ps1[2]=S(c->f[22]+c->f[24]); // 803F6F38
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[19]);} // 803F6F3C
  c->f[10]=c->ps1[10]=S(c->f[6]*c->f[10]); // 803F6F40
  c->f[8]=c->ps1[8]=S(c->f[6]*c->f[8]); // 803F6F44
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[23]); // 803F6F48
  c->f[23]=c->ps1[23]=S(c->f[5]*c->f[1]); // 803F6F4C
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 803F6F50
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F6F54
  c->f[3]=c->ps1[3]=S(c->f[27]+c->f[28]); // 803F6F58
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 803F6F5C
  c->f[26]=c->ps1[26]=S(c->f[25]*c->f[4]); // 803F6F60
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 803F6F64
  c->f[5]=c->ps1[5]=S(c->f[29]+c->f[30]); // 803F6F68
  c->f[19]=c->ps1[19]=S(c->f[26]+c->f[3]); // 803F6F6C
  c->f[3]=c->ps1[3]=S(c->f[31]+c->f[12]); // 803F6F70
  c->f[18]=c->ps1[18]=S(c->f[23]+c->f[21]); // 803F6F74
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[19]);} // 803F6F78
  c->f[12]=c->ps1[12]=S(c->f[13]*c->f[4]); // 803F6F7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[18]);} // 803F6F80
  c->f[28]=c->ps1[28]=S(c->f[25]*c->f[1]); // 803F6F84
  c->f[4]=c->ps1[4]=S(c->f[13]*c->f[1]); // 803F6F88
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,20,ea,0,0);} // 803F6F8C
  c->f[30]=c->ps1[30]=S(c->f[25]*c->f[0]); // 803F6F90
  c->f[18]=c->ps1[18]=S(c->f[28]+c->f[5]); // 803F6F94
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,20,ea,0,0);} // 803F6F98
  c->f[5]=c->ps1[5]=S(c->f[11]+c->f[10]); // 803F6F9C
  c->f[10]=c->ps1[10]=S(c->f[30]+c->f[3]); // 803F6FA0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,11,ea,0,0);} // 803F6FA4
  c->f[3]=c->ps1[3]=S(c->f[9]+c->f[8]); // 803F6FA8
  c->f[1]=c->ps1[1]=S(c->f[13]*c->f[0]); // 803F6FAC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[18]);} // 803F6FB0
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[6]); // 803F6FB4
  c->f[5]=c->ps1[5]=S(c->f[12]+c->f[5]); // 803F6FB8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[10]);} // 803F6FBC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 803F6FC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F6FC4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[5]);} // 803F6FC8
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F6FCC
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F6FD0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 803F6FD4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803F6FD8
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F6FDC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F6FE0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,4,ea,0,0);} // 803F6FE4
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 803F6FE8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,11,ea,0,0);} // 803F6FEC
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 803F6FF0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 803F6FF4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 803F6FF8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 803F6FFC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,29,ea,0,0);} // 803F7000
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[29]=RF64(ea);} // 803F7004
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,28,ea,0,0);} // 803F7008
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[28]=RF64(ea);} // 803F700C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,27,ea,0,0);} // 803F7010
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[27]=RF64(ea);} // 803F7014
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,26,ea,0,0);} // 803F7018
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[26]=RF64(ea);} // 803F701C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,25,ea,0,0);} // 803F7020
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[25]=RF64(ea);} // 803F7024
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,24,ea,0,0);} // 803F7028
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[24]=RF64(ea);} // 803F702C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,23,ea,0,0);} // 803F7030
  {uint32_t ea=c->r[1]+0x00000090u; c->f[23]=RF64(ea);} // 803F7034
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,22,ea,0,0);} // 803F7038
  {uint32_t ea=c->r[1]+0x00000080u; c->f[22]=RF64(ea);} // 803F703C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,21,ea,0,0);} // 803F7040
  {uint32_t ea=c->r[1]+0x00000070u; c->f[21]=RF64(ea);} // 803F7044
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,20,ea,0,0);} // 803F7048
  {uint32_t ea=c->r[1]+0x00000060u; c->f[20]=RF64(ea);} // 803F704C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,19,ea,0,0);} // 803F7050
  {uint32_t ea=c->r[1]+0x00000050u; c->f[19]=RF64(ea);} // 803F7054
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,18,ea,0,0);} // 803F7058
  {uint32_t ea=c->r[1]+0x00000040u; c->f[18]=RF64(ea);} // 803F705C
  c->r[1]=c->r[1]+0x00000120u; // 803F7060
  return; // 803F7064
}

// fn_803F7068
void f_803F7068(Ctx* __restrict c) {
  trace_call(0x803F7068u);
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F7068
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F706C
  c->f[3]=-c->f[2]; // 803F7070
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7074
  c->f[1]=-c->f[1]; // 803F7078
  c->f[2]=-c->f[0]; // 803F707C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7080
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[3]);} // 803F7084
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[2]);} // 803F7088
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 803F708C
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 803F7090
  return; // 803F7094
}

// fn_803F7098
void f_803F7098(Ctx* __restrict c) {
  trace_call(0x803F7098u);
  {uint32_t ea=c->r[3]+0x00000003u; psq_load(c,0,ea,1,2);} // 803F7098
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803F709C
  {uint32_t ea=c->r[3]+0x00000003u; psq_store(c,0,ea,1,2);} // 803F70A0
  return; // 803F70A4
}

// fn_803F70A8
void f_803F70A8(Ctx* __restrict c) {
  trace_call(0x803F70A8u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F70A8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F70AC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F70B0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 803F70B4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803F70B8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803F70BC
  return; // 803F70C0
}

// fn_803F70C4
void f_803F70C4(Ctx* __restrict c) {
  trace_call(0x803F70C4u);
  c->r[5]=R8(c->r[3]+0x00000001u); // 803F70C4
  c->r[4]=R8(c->r[3]+0x00000003u); // 803F70C8
  c->r[0]=R8(c->r[3]+0x00000000u); // 803F70CC
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 803F70D0
  c->r[3]=R8(c->r[3]+0x00000002u); // 803F70D4
  c->r[4]=rotl(c->r[4],24)&0xFF000000u; // 803F70D8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 803F70DC
  c->r[3]=c->r[3]+c->r[5]; // 803F70E0
  c->r[0]=c->r[4]+c->r[0]; // 803F70E4
  c->r[3]=c->r[3]+c->r[0]; // 803F70E8
  return; // 803F70EC
}

// Update__16UIDoodad_OptionsFi
void f_803F70F0(Ctx* __restrict c) {
  trace_call(0x803F70F0u);
  c->r[0]=R32(c->r[3]+0x00000168u); // 803F70F0
  cmps(c,0,(int32_t)c->r[0],0); // 803F70F4
  if (crb(c,2)) return; // 803F70F8
  f_803F5BF8(c); return; // 803F70FC
  return; // 803F7100
}

// fn_803F7104
void f_803F7104(Ctx* __restrict c) {
  trace_call(0x803F7104u);
  {uint32_t ea=c->r[1]+0xFFFFFAE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F7104
  c->r[0]=c->lr; // 803F7108
  W32(c->r[1]+0x00000524u,c->r[0]); // 803F710C
  {uint32_t ea=c->r[1]+0x00000510u; WF64(ea,c->f[31]);} // 803F7110
  {uint32_t ea=c->r[1]+0x00000518u; psq_store(c,31,ea,0,0);} // 803F7114
  {uint32_t ea=c->r[1]+0x00000500u; WF64(ea,c->f[30]);} // 803F7118
  {uint32_t ea=c->r[1]+0x00000508u; psq_store(c,30,ea,0,0);} // 803F711C
  {uint32_t ea=c->r[1]+0x000004F0u; WF64(ea,c->f[29]);} // 803F7120
  {uint32_t ea=c->r[1]+0x000004F8u; psq_store(c,29,ea,0,0);} // 803F7124
  {uint32_t ea=c->r[1]+0x000004E0u; WF64(ea,c->f[28]);} // 803F7128
  {uint32_t ea=c->r[1]+0x000004E8u; psq_store(c,28,ea,0,0);} // 803F712C
  {uint32_t ea=c->r[1]+0x000004D0u; WF64(ea,c->f[27]);} // 803F7130
  {uint32_t ea=c->r[1]+0x000004D8u; psq_store(c,27,ea,0,0);} // 803F7134
  {uint32_t ea=c->r[1]+0x000004C0u; WF64(ea,c->f[26]);} // 803F7138
  {uint32_t ea=c->r[1]+0x000004C8u; psq_store(c,26,ea,0,0);} // 803F713C
  {uint32_t ea=c->r[1]+0x000004B0u; WF64(ea,c->f[25]);} // 803F7140
  {uint32_t ea=c->r[1]+0x000004B8u; psq_store(c,25,ea,0,0);} // 803F7144
  {uint32_t ea=c->r[1]+0x000004A0u; WF64(ea,c->f[24]);} // 803F7148
  {uint32_t ea=c->r[1]+0x000004A8u; psq_store(c,24,ea,0,0);} // 803F714C
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[23]);} // 803F7150
  {uint32_t ea=c->r[1]+0x00000498u; psq_store(c,23,ea,0,0);} // 803F7154
  {uint32_t ea=c->r[1]+0x00000480u; WF64(ea,c->f[22]);} // 803F7158
  {uint32_t ea=c->r[1]+0x00000488u; psq_store(c,22,ea,0,0);} // 803F715C
  {uint32_t ea=c->r[1]+0x00000470u; WF64(ea,c->f[21]);} // 803F7160
  {uint32_t ea=c->r[1]+0x00000478u; psq_store(c,21,ea,0,0);} // 803F7164
  {uint32_t ea=c->r[1]+0x00000460u; WF64(ea,c->f[20]);} // 803F7168
  {uint32_t ea=c->r[1]+0x00000468u; psq_store(c,20,ea,0,0);} // 803F716C
  {uint32_t ea=c->r[1]+0x00000450u; WF64(ea,c->f[19]);} // 803F7170
  {uint32_t ea=c->r[1]+0x00000458u; psq_store(c,19,ea,0,0);} // 803F7174
  {uint32_t ea=c->r[1]+0x00000440u; WF64(ea,c->f[18]);} // 803F7178
  {uint32_t ea=c->r[1]+0x00000448u; psq_store(c,18,ea,0,0);} // 803F717C
  c->r[11]=c->r[1]+0x00000440u; // 803F7180
  c->lr=0x803F7188u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F7184
  c->r[0]=R32(c->r[3]+0x00000168u); // 803F7188
  c->r[4]=0u+0x43300000u; // 803F718C
  W32(c->r[1]+0x000003D0u,c->r[4]); // 803F7190
  c->r[26]=c->r[3]|c->r[3]; // 803F7194
  cmps(c,0,(int32_t)c->r[0],0); // 803F7198
  c->r[27]=c->r[5]|c->r[5]; // 803F719C
  W32(c->r[1]+0x000003D8u,c->r[4]); // 803F71A0
  c->r[28]=c->r[6]|c->r[6]; // 803F71A4
  if (!crb(c,2)) { goto L_803F71B8; } // 803F71A8
  c->r[0]=0u+0x00000000u; // 803F71AC
  W32(c->r[6]+0x00000000u,c->r[0]); // 803F71B0
  goto L_803F8168; // 803F71B4
L_803F71B8:;
  c->r[3]=c->r[1]+0x00000210u; // 803F71B8
  c->lr=0x803F71C0u; f_803E49FC(c); // 803F71BC
  c->r[3]=c->r[27]|c->r[27]; // 803F71C0
  c->lr=0x803F71C8u; f_803E7ABC(c); // 803F71C4
  c->r[0]=R32(c->r[13]+0xFFFFF410u); // 803F71C8
  c->r[18]=c->r[3]|c->r[3]; // 803F71CC
  cmps(c,0,(int32_t)c->r[0],0); // 803F71D0
  if (!crb(c,2)) { goto L_803F71DC; } // 803F71D4
  c->lr=0x803F71DCu; f_803F3DC8(c); // 803F71D8
L_803F71DC:;
  c->lr=0x803F71E0u; f_803E99C8(c); // 803F71DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F71E0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F71E4
  c->ctr=c->r[12]; // 803F71E8
  if (true) { c->lr=0x803F71F0u; dispatch(c,c->ctr); } // 803F71EC
  c->r[31]=c->r[3]|c->r[3]; // 803F71F0
  c->lr=0x803F71F8u; f_803E99C8(c); // 803F71F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F71F8
  c->r[12]=R32(c->r[12]+0x00000070u); // 803F71FC
  c->ctr=c->r[12]; // 803F7200
  if (true) { c->lr=0x803F7208u; dispatch(c,c->ctr); } // 803F7204
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7208
  c->r[15]=c->r[3]|c->r[3]; // 803F720C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F7210
  c->r[3]=c->r[1]+0x00000200u; // 803F7214
  c->f[2]=c->f[1]; // 803F7218
  c->f[4]=c->f[1]; // 803F721C
  c->lr=0x803F7224u; f_803E54F4(c); // 803F7220
  c->r[3]=c->r[1]+0x00000200u; // 803F7224
  c->r[4]=c->r[15]|c->r[15]; // 803F7228
  c->r[5]=c->r[3]|c->r[3]; // 803F722C
  c->lr=0x803F7234u; f_803E541C(c); // 803F7230
  c->r[3]=0u+0x80570000u; // 803F7234
  c->r[3]=c->r[3]+0x000041A8u; // 803F7238
  c->r[0]=R32(c->r[3]+0x00000004u); // 803F723C
  c->r[30]=rotl(c->r[0],0)&0x0000000Fu; // 803F7240
  c->lr=0x803F7248u; f_803E99C8(c); // 803F7244
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F7248
  c->r[12]=R32(c->r[12]+0x00000084u); // 803F724C
  c->ctr=c->r[12]; // 803F7250
  if (true) { c->lr=0x803F7258u; dispatch(c,c->ctr); } // 803F7254
  cmps(c,0,(int32_t)c->r[3],0); // 803F7258
  c->r[19]=0u+0x00000020u; // 803F725C
  if (!crb(c,2)) { goto L_803F7268; } // 803F7260
  c->r[19]=0u+0x00000010u; // 803F7264
L_803F7268:;
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F7268
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 803F726C
  c->r[0]=c->r[0]^0x80000000u; // 803F7270
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F7274
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[22]=c->ps1[22]=RF32(ea);} // 803F7278
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=RF64(ea);} // 803F727C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803F7280
  fcmp(c,0,c->f[22],c->f[0]); // 803F7284
  if (!crb(c,2)) { goto L_803F7290; } // 803F7288
  goto L_803F72A4; // 803F728C
L_803F7290:;
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F7290
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7294
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[1]=RF64(ea);} // 803F7298
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F729C
  c->f[22]=c->ps1[22]=S(c->f[0]/c->f[1]); // 803F72A0
L_803F72A4:;
  {uint32_t ea=c->r[2]+0xFFFFA884u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F72A4
  c->r[3]=c->r[1]+0x000001F0u; // 803F72A8
  {uint32_t ea=c->r[15]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F72AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[22]); // 803F72B0
  {uint32_t ea=c->r[15]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F72B4
  {uint32_t ea=c->r[15]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F72B8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F72BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F72C0
  {uint32_t ea=c->r[1]+0x000003E0u; WF64(ea,c->f[0]);} // 803F72C4
  c->r[29]=R32(c->r[1]+0x000003E4u); // 803F72C8
  c->lr=0x803F72D0u; f_803E54F4(c); // 803F72CC
  {uint32_t ea=c->r[15]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F72D0
  c->r[3]=c->r[1]+0x000001E0u; // 803F72D4
  {uint32_t ea=c->r[15]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F72D8
  {uint32_t ea=c->r[15]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F72DC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F72E0
  c->lr=0x803F72E8u; f_803E54F4(c); // 803F72E4
  c->r[3]=c->r[1]+0x00000370u; // 803F72E8
  c->lr=0x803F72F0u; f_803F5A84(c); // 803F72EC
  c->r[3]=c->r[1]+0x00000388u; // 803F72F0
  c->lr=0x803F72F8u; f_803F5A84(c); // 803F72F4
  c->r[3]=c->r[1]+0x000003A0u; // 803F72F8
  c->lr=0x803F7300u; f_803F5A84(c); // 803F72FC
  c->r[3]=c->r[1]+0x000003B8u; // 803F7300
  c->lr=0x803F7308u; f_803F5A84(c); // 803F7304
  c->r[22]=0u+0x80570000u; // 803F7308
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[24]=c->ps1[24]=RF32(ea);} // 803F730C
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[25]=c->ps1[25]=RF32(ea);} // 803F7310
  c->r[17]=~(c->r[19]|c->r[19]); // 803F7314
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[26]=c->ps1[26]=RF32(ea);} // 803F7318
  c->r[22]=c->r[22]+0x00002C30u; // 803F731C
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[23]=c->ps1[23]=RF32(ea);} // 803F7320
  c->r[21]=0u+0x80570000u; // 803F7324
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[31]=c->ps1[31]=RF32(ea);} // 803F7328
  c->r[23]=0u+0x00010000u; // 803F732C
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[30]=RF64(ea);} // 803F7330
  c->r[24]=0u+0x487F0000u; // 803F7334
  {uint32_t ea=c->r[2]+0xFFFFA844u; c->f[20]=c->ps1[20]=RF32(ea);} // 803F7338
  c->r[25]=0u+0x00000000u; // 803F733C
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[21]=c->ps1[21]=RF32(ea);} // 803F7340
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[27]=RF64(ea);} // 803F7344
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[28]=c->ps1[28]=RF32(ea);} // 803F7348
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 803F734C
  goto L_803F815C; // 803F7350
L_803F7354:;
  c->r[3]=c->r[27]|c->r[27]; // 803F7354
  c->lr=0x803F735Cu; f_803E7ABC(c); // 803F7358
  cmpu(c,0,c->r[3],c->r[18]); // 803F735C
  if (!crb(c,2)) { goto L_803F8164; } // 803F7360
  c->r[15]=R32(c->r[27]+0x00000068u); // 803F7364
  c->r[20]=0u+0x00000000u; // 803F7368
  cmps(c,0,(int32_t)c->r[15],0); // 803F736C
  if (crb(c,2)) { goto L_803F7388; } // 803F7370
  c->r[3]=c->r[15]|c->r[15]; // 803F7374
  c->lr=0x803F737Cu; f_803E5414(c); // 803F7378
  cmps(c,0,(int32_t)c->r[3],0); // 803F737C
  if (crb(c,2)) { goto L_803F7388; } // 803F7380
  c->r[20]=0u+0x00000001u; // 803F7384
L_803F7388:;
  cmps(c,0,(int32_t)c->r[15],0); // 803F7388
  if (crb(c,2)) { goto L_803F739C; } // 803F738C
  c->r[3]=c->r[15]|c->r[15]; // 803F7390
  c->lr=0x803F7398u; f_803EC3EC(c); // 803F7394
  goto L_803F73A0; // 803F7398
L_803F739C:;
  c->r[3]=c->r[21]+0x00002BF0u; // 803F739C
L_803F73A0:;
  c->r[4]=c->r[3]|c->r[3]; // 803F73A0
  c->r[3]=c->r[1]+0x000001D0u; // 803F73A4
  c->lr=0x803F73ACu; f_803E536C(c); // 803F73A8
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F73AC
  c->r[16]=0u+0x00000000u; // 803F73B0
  fcmp(c,0,c->f[0],c->f[24]); // 803F73B4
  if (crb(c,1)) { goto L_803F73C4; } // 803F73B8
  fcmp(c,0,c->f[23],c->f[0]); // 803F73BC
  if (!crb(c,2)) { goto L_803F74AC; } // 803F73C0
L_803F73C4:;
  cmps(c,0,(int32_t)c->r[15],0); // 803F73C4
  if (crb(c,2)) { goto L_803F73DC; } // 803F73C8
  c->r[3]=c->r[15]|c->r[15]; // 803F73CC
  c->lr=0x803F73D4u; f_803F47A4(c); // 803F73D0
  cmps(c,0,(int32_t)c->r[3],0); // 803F73D4
  if (crb(c,2)) { goto L_803F74AC; } // 803F73D8
L_803F73DC:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x000000A6u); // 803F73DC
  c->r[0]=rotl(c->r[3],0)&0x0000000Fu; // 803F73E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 803F73E4
  if (crb(c,2)) { goto L_803F73F4; } // 803F73E8
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 803F73EC
  if (crb(c,2)) { goto L_803F74A8; } // 803F73F0
L_803F73F4:;
  c->r[3]=c->r[1]+0x000001C0u; // 803F73F4
  c->r[4]=c->r[27]+0x00000038u; // 803F73F8
  c->lr=0x803F7400u; f_803E536C(c); // 803F73FC
  cmps(c,0,(int32_t)c->r[15],0); // 803F7400
  if (crb(c,2)) { goto L_803F7414; } // 803F7404
  c->r[3]=c->r[1]+0x000001C0u; // 803F7408
  c->r[4]=c->r[1]+0x000001D0u; // 803F740C
  c->lr=0x803F7414u; f_803E52F8(c); // 803F7410
L_803F7414:;
  c->r[3]=c->r[1]+0x000001B0u; // 803F7414
  c->lr=0x803F741Cu; f_803E49FC(c); // 803F7418
  c->r[4]=c->r[31]|c->r[31]; // 803F741C
  c->r[3]=c->r[1]+0x000001B0u; // 803F7420
  c->r[5]=c->r[1]+0x000001C0u; // 803F7424
  c->lr=0x803F742Cu; f_803E4A00(c); // 803F7428
  c->r[3]=c->r[1]+0x000001B0u; // 803F742C
  c->lr=0x803F7434u; f_803F42C4(c); // 803F7430
  fcmp(c,0,c->f[24],c->f[1]); // 803F7434
  if (!crb(c,2)) { goto L_803F7440; } // 803F7438
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F743C
L_803F7440:;
  {uint32_t ea=c->r[26]+0x00000204u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7440
  {uint32_t ea=c->r[27]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F7444
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 803F7448
  {uint32_t ea=c->r[27]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F744C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803F7450
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[0]); // 803F7454
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 803F7458
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[0]); // 803F745C
  c->f[0]=c->ps1[0]=S(c->f[26]/c->f[0]); // 803F7460
  fcmp(c,0,c->f[1],c->f[0]); // 803F7464
  if (crb(c,1)) { goto L_803F7478; } // 803F7468
  c->r[0]=R32(c->r[26]+0x000001B8u); // 803F746C
  cmps(c,0,(int32_t)c->r[0],0); // 803F7470
  if (crb(c,2)) { goto L_803F748C; } // 803F7474
L_803F7478:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x000000A6u); // 803F7478
  c->r[16]=0u+0x00000001u; // 803F747C
  c->r[0]=c->r[0]|c->r[19]; // 803F7480
  W16(c->r[27]+0x000000A6u,c->r[0]); // 803F7484
  goto L_803F7498; // 803F7488
L_803F748C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x000000A6u); // 803F748C
  c->r[0]=c->r[0]&c->r[17]; // 803F7490
  W16(c->r[27]+0x000000A6u,c->r[0]); // 803F7494
L_803F7498:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x000000A6u); // 803F7498
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 803F749C
  W16(c->r[27]+0x000000A6u,c->r[0]); // 803F74A0
  goto L_803F74AC; // 803F74A4
L_803F74A8:;
  c->r[16]=c->r[3]&c->r[19]; // 803F74A8
L_803F74AC:;
  cmps(c,0,(int32_t)c->r[16],0); // 803F74AC
  if (crb(c,2)) { goto L_803F8158; } // 803F74B0
  c->r[3]=c->r[1]+0x00000340u; // 803F74B4
  c->lr=0x803F74BCu; f_803F6DCC(c); // 803F74B8
  cmps(c,0,(int32_t)c->r[15],0); // 803F74BC
  if (crb(c,2)) { goto L_803F74D8; } // 803F74C0
  c->r[3]=c->r[15]|c->r[15]; // 803F74C4
  c->lr=0x803F74CCu; f_803EC3E4(c); // 803F74C8
  c->r[4]=c->r[3]|c->r[3]; // 803F74CC
  c->r[3]=c->r[1]+0x00000340u; // 803F74D0
  c->lr=0x803F74D8u; f_803EC00C(c); // 803F74D4
L_803F74D8:;
  {uint32_t ea=c->r[27]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F74D8
  {uint32_t ea=c->r[27]+0x00000104u; WF32(ea,c->f[0]);} // 803F74DC
  {uint32_t ea=c->r[27]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F74E0
  {uint32_t ea=c->r[27]+0x00000108u; WF32(ea,c->f[0]);} // 803F74E4
  c->r[0]=R32(c->r[26]+0x000001B8u); // 803F74E8
  cmps(c,0,(int32_t)c->r[0],0); // 803F74EC
  if (crb(c,2)) { goto L_803F7538; } // 803F74F0
  c->r[3]=c->r[1]+0x000001A0u; // 803F74F4
  c->lr=0x803F74FCu; f_803E49FC(c); // 803F74F8
  c->r[4]=c->r[31]|c->r[31]; // 803F74FC
  c->r[3]=c->r[1]+0x000001A0u; // 803F7500
  c->r[5]=c->r[27]+0x00000038u; // 803F7504
  c->lr=0x803F750Cu; f_803E4A00(c); // 803F7508
  c->r[3]=c->r[1]+0x000001A0u; // 803F750C
  c->lr=0x803F7514u; f_803F42C4(c); // 803F7510
  fcmp(c,0,c->f[1],c->f[26]); // 803F7514
  if (!crb(c,1)) { goto L_803F7538; } // 803F7518
  c->lr=0x803F7520u; f_803ACB30(c); // 803F751C
  {uint32_t ea=c->r[27]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7520
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F7524
  {uint32_t ea=c->r[27]+0x00000104u; WF32(ea,c->f[0]);} // 803F7528
  {uint32_t ea=c->r[27]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F752C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F7530
  {uint32_t ea=c->r[27]+0x00000108u; WF32(ea,c->f[0]);} // 803F7534
L_803F7538:;
  c->r[3]=c->r[27]+0x000000C0u; // 803F7538
  c->r[4]=c->r[27]+0x00000038u; // 803F753C
  c->lr=0x803F7544u; f_803E53A0(c); // 803F7540
  c->r[0]=R32(c->r[26]+0x000001BCu); // 803F7544
  cmps(c,0,(int32_t)c->r[0],0); // 803F7548
  if (crb(c,2)) { goto L_803F7560; } // 803F754C
  {uint32_t ea=c->r[27]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7550
  {uint32_t ea=c->r[27]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7554
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F7558
  {uint32_t ea=c->r[27]+0x000000C4u; WF32(ea,c->f[0]);} // 803F755C
L_803F7560:;
  cmps(c,0,(int32_t)c->r[15],0); // 803F7560
  if (crb(c,2)) { goto L_803F7598; } // 803F7564
  cmps(c,0,(int32_t)c->r[20],0); // 803F7568
  if (crb(c,2)) { goto L_803F758C; } // 803F756C
  c->r[4]=R32(c->r[27]+0x00000068u); // 803F7570
  c->r[3]=c->r[27]+0x000000C0u; // 803F7574
  c->lr=0x803F757Cu; f_803E52F8(c); // 803F7578
  c->r[3]=c->r[27]+0x000000C0u; // 803F757C
  c->r[4]=c->r[1]+0x00000340u; // 803F7580
  c->r[5]=c->r[3]|c->r[3]; // 803F7584
  c->lr=0x803F758Cu; f_803E541C(c); // 803F7588
L_803F758C:;
  c->r[3]=c->r[27]+0x000000C0u; // 803F758C
  c->r[4]=c->r[1]+0x000001D0u; // 803F7590
  c->lr=0x803F7598u; f_803E52F8(c); // 803F7594
L_803F7598:;
  c->r[0]=R32(c->r[26]+0x000001C0u); // 803F7598
  cmps(c,0,(int32_t)c->r[0],0); // 803F759C
  if (crb(c,2)) { goto L_803F75EC; } // 803F75A0
  {uint32_t ea=c->r[27]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F75A4
  c->r[0]=R32(c->r[26]+0x000001C8u); // 803F75A8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F75AC
  c->r[4]=R32(c->r[26]+0x0000018Cu); // 803F75B0
  c->r[0]=rotl(c->r[0],10)&0xFFFFFC00u; // 803F75B4
  {uint32_t ea=c->r[1]+0x000003E0u; WF64(ea,c->f[0]);} // 803F75B8
  c->r[0]=c->r[22]+c->r[0]; // 803F75BC
  c->r[3]=R32(c->r[1]+0x000003E4u); // 803F75C0
  c->r[3]=c->r[4]+c->r[3]; // 803F75C4
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 803F75C8
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 803F75CC
  {uint32_t ea=c->r[27]+0x000000F0u; WF32(ea,c->f[0]);} // 803F75D0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F75D4
  {uint32_t ea=c->r[27]+0x000000F4u; WF32(ea,c->f[0]);} // 803F75D8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F75DC
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[0]);} // 803F75E0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F75E4
  {uint32_t ea=c->r[27]+0x000000FCu; WF32(ea,c->f[0]);} // 803F75E8
L_803F75EC:;
  c->r[3]=R32(c->r[26]+0x00000184u); // 803F75EC
  cmps(c,0,(int32_t)c->r[3],0); // 803F75F0
  if (crb(c,2)) { goto L_803F7644; } // 803F75F4
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F75F8
  cmps(c,0,(int32_t)c->r[0],0); // 803F75FC
  if (!crb(c,2)) { goto L_803F7618; } // 803F7600
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7604
  c->r[5]=c->r[27]|c->r[27]; // 803F7608
  c->r[4]=c->r[1]+0x0000000Cu; // 803F760C
  c->lr=0x803F7614u; f_803E6ED0(c); // 803F7610
  goto L_803F764C; // 803F7614
L_803F7618:;
  c->r[0]=c->r[0]^0x80000000u; // 803F7618
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F761C
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7620
  c->r[5]=c->r[27]|c->r[27]; // 803F7624
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[1]=RF64(ea);} // 803F7628
  c->r[4]=c->r[1]+0x0000000Cu; // 803F762C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 803F7630
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803F7634
  c->f[1]=c->ps1[1]=S(c->f[22]*c->f[0]); // 803F7638
  c->lr=0x803F7640u; f_803E6ED0(c); // 803F763C
  goto L_803F764C; // 803F7640
L_803F7644:;
  c->r[3]=c->r[1]+0x0000000Cu; // 803F7644
  c->lr=0x803F764Cu; f_803F4CD0(c); // 803F7648
L_803F764C:;
  c->r[3]=R32(c->r[27]+0x00000070u); // 803F764C
  cmps(c,0,(int32_t)c->r[3],0); // 803F7650
  if (crb(c,2)) { goto L_803F7698; } // 803F7654
  c->r[16]=R32(c->r[3]+0x0000006Cu); // 803F7658
  cmps(c,0,(int32_t)c->r[16],0); // 803F765C
  if (crb(c,2)) { goto L_803F7698; } // 803F7660
  c->r[0]=R32(c->r[16]+0x000000ECu); // 803F7664
  cmps(c,0,(int32_t)c->r[0],0); // 803F7668
  if (crb(c,2)) { goto L_803F7698; } // 803F766C
  c->r[3]=c->r[1]+0x00000008u; // 803F7670
  c->lr=0x803F7678u; f_803F4CD0(c); // 803F7674
  c->r[3]=R32(c->r[16]+0x000000ECu); // 803F7678
  c->r[4]=c->r[1]+0x00000008u; // 803F767C
  {uint32_t ea=c->r[27]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7680
  c->r[5]=R32(c->r[27]+0x00000070u); // 803F7684
  c->lr=0x803F768Cu; f_803E6ED0(c); // 803F7688
  c->r[3]=c->r[1]+0x0000000Cu; // 803F768C
  c->r[4]=c->r[1]+0x00000008u; // 803F7690
  c->lr=0x803F7698u; f_803F4CDC(c); // 803F7694
L_803F7698:;
  c->r[0]=R32(c->r[26]+0x00000190u); // 803F7698
  cmps(c,0,(int32_t)c->r[0],5); // 803F769C
  if (!crb(c,2)) { goto L_803F7718; } // 803F76A0
  c->r[3]=c->r[1]+0x00000310u; // 803F76A4
  c->r[4]=c->r[27]+0x00000008u; // 803F76A8
  c->lr=0x803F76B0u; f_803F6DD0(c); // 803F76AC
  cmps(c,0,(int32_t)c->r[20],0); // 803F76B0
  if (crb(c,2)) { goto L_803F76D4; } // 803F76B4
  c->r[3]=c->r[1]+0x00000220u; // 803F76B8
  c->r[4]=c->r[1]+0x00000340u; // 803F76BC
  c->r[5]=c->r[1]+0x00000310u; // 803F76C0
  c->lr=0x803F76C8u; f_803F6E04(c); // 803F76C4
  c->r[3]=c->r[1]+0x00000310u; // 803F76C8
  c->r[4]=c->r[1]+0x00000220u; // 803F76CC
  c->lr=0x803F76D4u; f_803EC00C(c); // 803F76D0
L_803F76D4:;
  c->r[3]=c->r[1]+0x00000310u; // 803F76D4
  c->r[4]=c->r[1]+0x00000210u; // 803F76D8
  c->lr=0x803F76E0u; f_803F7068(c); // 803F76DC
  c->r[3]=c->r[1]+0x00000200u; // 803F76E0
  c->r[4]=c->r[1]+0x00000210u; // 803F76E4
  c->lr=0x803F76ECu; f_803EC49C(c); // 803F76E8
  fcmp(c,0,c->f[1],c->f[24]); // 803F76EC
  if (!crb(c,0)) { goto L_803F76F8; } // 803F76F0
  c->f[1]=c->f[24]; // 803F76F4
L_803F76F8:;
  {uint32_t ea=c->r[27]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F76F8
  c->r[3]=c->r[1]+0x0000000Cu; // 803F76FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F7700
  {uint32_t ea=c->r[27]+0x00000104u; WF32(ea,c->f[0]);} // 803F7704
  {uint32_t ea=c->r[27]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7708
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F770C
  {uint32_t ea=c->r[27]+0x00000108u; WF32(ea,c->f[0]);} // 803F7710
  c->lr=0x803F7718u; f_803F4204(c); // 803F7714
L_803F7718:;
  c->r[3]=c->r[1]+0x00000190u; // 803F7718
  c->r[4]=c->r[27]+0x00000038u; // 803F771C
  c->lr=0x803F7724u; f_803E536C(c); // 803F7720
  cmps(c,0,(int32_t)c->r[15],0); // 803F7724
  if (crb(c,2)) { goto L_803F7738; } // 803F7728
  c->r[3]=c->r[1]+0x00000190u; // 803F772C
  c->r[4]=c->r[1]+0x000001D0u; // 803F7730
  c->lr=0x803F7738u; f_803E52F8(c); // 803F7734
L_803F7738:;
  c->r[4]=c->r[31]|c->r[31]; // 803F7738
  c->r[3]=c->r[1]+0x00000210u; // 803F773C
  c->r[5]=c->r[1]+0x00000190u; // 803F7740
  c->lr=0x803F7748u; f_803E4A00(c); // 803F7744
  c->r[3]=c->r[1]+0x00000210u; // 803F7748
  c->lr=0x803F7750u; f_803E4A34(c); // 803F774C
  {uint32_t ea=c->r[26]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7750
  fcmp(c,0,c->f[1],c->f[0]); // 803F7754
  if (!crb(c,0)) { goto L_803F7768; } // 803F7758
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803F775C
  c->r[3]=c->r[1]+0x0000000Cu; // 803F7760
  c->lr=0x803F7768u; f_803F7098(c); // 803F7764
L_803F7768:;
  c->r[0]=R32(c->r[26]+0x00000178u); // 803F7768
  cmps(c,0,(int32_t)c->r[0],0); // 803F776C
  if (crb(c,2)) { goto L_803F7878; } // 803F7770
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F7774
  cmps(c,0,(int32_t)c->r[0],0); // 803F7778
  if (!crb(c,1)) { goto L_803F77A4; } // 803F777C
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7780
  c->r[0]=rotl(c->r[29],8)&0xFFFFFF00u; // 803F7784
  c->r[3]=c->r[0]-c->r[29]; // 803F7788
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F778C
  {uint32_t ea=c->r[1]+0x000003E0u; WF64(ea,c->f[0]);} // 803F7790
  c->r[0]=R32(c->r[1]+0x000003E4u); // 803F7794
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803F7798
  c->r[4]=sraw(c,c->r[0],16); // 803F779C
  goto L_803F77A8; // 803F77A0
L_803F77A4:;
  c->r[4]=0u+0x000000FFu; // 803F77A4
L_803F77A8:;
  cmps(c,0,(int32_t)c->r[4],30); // 803F77A8
  if (!crb(c,1)) { goto L_803F77DC; } // 803F77AC
  c->r[3]=c->r[4]+0xFFFFFFE2u; // 803F77B0
  c->r[0]=c->r[23]+0xFFFFC784u; // 803F77B4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[3]); // 803F77B8
  c->r[4]=c->r[24]+0xFFFFDE05u; // 803F77BC
  c->r[0]=c->r[0]-c->r[3]; // 803F77C0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 803F77C4
  c->r[0]=sraw(c,c->r[0],6); // 803F77C8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803F77CC
  c->r[0]=c->r[0]+c->r[3]; // 803F77D0
  c->r[4]=addc(c,~c->r[0],0x000000E2u,1); // 803F77D4
  c->r[4]=c->r[4]+0x0000001Eu; // 803F77D8
L_803F77DC:;
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 803F77DC
  c->r[3]=R32(c->r[26]+0x00000188u); // 803F77E0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803F77E4
  cmps(c,0,(int32_t)c->r[3],0); // 803F77E8
  c->r[16]=sraw(c,c->r[0],8); // 803F77EC
  if (crb(c,2)) { goto L_803F7808; } // 803F77F0
  cmps(c,0,(int32_t)c->r[3],1); // 803F77F4
  if (crb(c,2)) { goto L_803F7830; } // 803F77F8
  cmps(c,0,(int32_t)c->r[3],2); // 803F77FC
  if (crb(c,2)) { goto L_803F7844; } // 803F7800
  goto L_803F78BC; // 803F7804
L_803F7808:;
  c->r[3]=c->r[27]+0x00000100u; // 803F7808
  c->r[4]=c->r[1]+0x0000000Cu; // 803F780C
  c->lr=0x803F7814u; f_803E742C(c); // 803F7810
  c->r[0]=c->r[16]^0x80000000u; // 803F7814
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F7818
  c->r[3]=c->r[27]+0x00000100u; // 803F781C
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[0]=RF64(ea);} // 803F7820
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 803F7824
  c->lr=0x803F782Cu; f_803F4D00(c); // 803F7828
  goto L_803F78BC; // 803F782C
L_803F7830:;
  c->r[3]=c->r[27]+0x00000100u; // 803F7830
  c->r[4]=c->r[1]+0x0000000Cu; // 803F7834
  c->lr=0x803F783Cu; f_803E742C(c); // 803F7838
  W8(c->r[27]+0x00000103u,c->r[16]); // 803F783C
  goto L_803F78BC; // 803F7840
L_803F7844:;
  c->r[3]=c->r[27]+0x00000100u; // 803F7844
  c->r[4]=c->r[1]+0x0000000Cu; // 803F7848
  c->lr=0x803F7850u; f_803E742C(c); // 803F784C
  c->r[0]=c->r[16]^0x80000000u; // 803F7850
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F7854
  c->r[3]=c->r[27]+0x00000100u; // 803F7858
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=RF64(ea);} // 803F785C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 803F7860
  c->lr=0x803F7868u; f_803F4D00(c); // 803F7864
  c->r[3]=c->r[16]|c->r[16]; // 803F7868
  c->lr=0x803F7870u; f_803F3DA0(c); // 803F786C
  W8(c->r[27]+0x00000103u,c->r[3]); // 803F7870
  goto L_803F78BC; // 803F7874
L_803F7878:;
  c->r[0]=R32(c->r[26]+0x00000188u); // 803F7878
  cmps(c,0,(int32_t)c->r[0],1); // 803F787C
  if (!crb(c,2)) { goto L_803F7894; } // 803F7880
  c->r[3]=c->r[27]+0x00000100u; // 803F7884
  c->r[4]=c->r[1]+0x0000000Cu; // 803F7888
  c->lr=0x803F7890u; f_803E742C(c); // 803F788C
  goto L_803F78BC; // 803F7890
L_803F7894:;
  c->r[3]=c->r[27]+0x00000100u; // 803F7894
  c->r[4]=c->r[1]+0x0000000Cu; // 803F7898
  c->lr=0x803F78A0u; f_803E742C(c); // 803F789C
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 803F78A0
  c->r[3]=c->r[27]+0x00000100u; // 803F78A4
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F78A8
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[0]=RF64(ea);} // 803F78AC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[27]); // 803F78B0
  c->lr=0x803F78B8u; f_803F4D00(c); // 803F78B4
  W8(c->r[27]+0x00000103u,c->r[25]); // 803F78B8
L_803F78BC:;
  c->r[3]=R32(c->r[27]+0x00000078u); // 803F78BC
  c->r[6]=0u+0x00000000u; // 803F78C0
  cmps(c,0,(int32_t)c->r[3],0); // 803F78C4
  if (crb(c,2)) { goto L_803F78E0; } // 803F78C8
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 803F78CC
  c->r[0]=R32(c->r[4]+0x00000084u); // 803F78D0
  cmps(c,0,(int32_t)c->r[0],0); // 803F78D4
  if (crb(c,2)) { goto L_803F78E0; } // 803F78D8
  c->r[6]=0u+0x00000001u; // 803F78DC
L_803F78E0:;
  c->r[4]=R32(c->r[27]+0x0000006Cu); // 803F78E0
  c->r[0]=R32(c->r[4]+0x00000084u); // 803F78E4
  c->r[5]=0u-c->r[0]; // 803F78E8
  c->r[5]=c->r[5]|c->r[0]; // 803F78EC
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 803F78F0
  c->r[5]=c->r[5]|c->r[6]; cr0(c,c->r[5]); // 803F78F4
  if (crb(c,2)) { goto L_803F7A64; } // 803F78F8
  c->r[7]=R32(c->r[27]+0x00000114u); // 803F78FC
  cmps(c,0,(int32_t)c->r[3],0); // 803F7900
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7904
  c->r[5]=rotl(c->r[7],8)&0x000000FFu; // 803F7908
  W32(c->r[1]+0x000003D4u,c->r[5]); // 803F790C
  c->r[6]=rotl(c->r[7],16)&0x000000FFu; // 803F7910
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[1]=RF64(ea);} // 803F7914
  c->r[5]=rotl(c->r[7],24)&0x000000FFu; // 803F7918
  W32(c->r[1]+0x000003DCu,c->r[6]); // 803F791C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[27]); // 803F7920
  W32(c->r[1]+0x000003D4u,c->r[5]); // 803F7924
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[2]=RF64(ea);} // 803F7928
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[1]=RF64(ea);} // 803F792C
  c->f[6]=c->ps1[6]=S(c->f[3]/c->f[28]); // 803F7930
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[27]); // 803F7934
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[27]); // 803F7938
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[28]); // 803F793C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 803F7940
  if (crb(c,2)) { goto L_803F7964; } // 803F7944
  c->r[5]=R32(c->r[3]+0x0000006Cu); // 803F7948
  c->r[3]=R32(c->r[5]+0x00000084u); // 803F794C
  cmps(c,0,(int32_t)c->r[3],0); // 803F7950
  if (crb(c,2)) { goto L_803F7964; } // 803F7954
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7958
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803F795C
  goto L_803F7974; // 803F7960
L_803F7964:;
  cmps(c,0,(int32_t)c->r[0],0); // 803F7964
  if (crb(c,2)) { goto L_803F7974; } // 803F7968
  {uint32_t ea=c->r[4]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F796C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 803F7970
L_803F7974:;
  c->r[0]=R8(c->r[27]+0x00000100u); // 803F7974
  c->f[5]=c->ps1[5]=S(c->f[26]-c->f[0]); // 803F7978
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F797C
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[3]=RF64(ea);} // 803F7980
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F7984
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[27]); // 803F7988
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[4]=RF64(ea);} // 803F798C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[27]); // 803F7990
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 803F7994
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803F7998
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 803F799C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 803F79A0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 803F79A4
  {uint32_t ea=c->r[1]+0x000003E0u; WF64(ea,c->f[3]);} // 803F79A8
  c->r[3]=R32(c->r[1]+0x000003E4u); // 803F79AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803F79B0
  cmps(c,0,(int32_t)c->r[0],255); // 803F79B4
  if (!crb(c,1)) { goto L_803F79C0; } // 803F79B8
  c->r[3]=0u+0x000000FFu; // 803F79BC
L_803F79C0:;
  c->r[0]=R8(c->r[27]+0x00000101u); // 803F79C0
  c->f[5]=c->ps1[5]=S(c->f[26]-c->f[0]); // 803F79C4
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F79C8
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[3]=RF64(ea);} // 803F79CC
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F79D0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[27]); // 803F79D4
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[4]=RF64(ea);} // 803F79D8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[27]); // 803F79DC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 803F79E0
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803F79E4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803F79E8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 803F79EC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 803F79F0
  {uint32_t ea=c->r[1]+0x000003E8u; WF64(ea,c->f[1]);} // 803F79F4
  c->r[4]=R32(c->r[1]+0x000003ECu); // 803F79F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 803F79FC
  cmps(c,0,(int32_t)c->r[0],255); // 803F7A00
  if (!crb(c,1)) { goto L_803F7A0C; } // 803F7A04
  c->r[4]=0u+0x000000FFu; // 803F7A08
L_803F7A0C:;
  c->r[0]=R8(c->r[27]+0x00000102u); // 803F7A0C
  c->f[4]=c->ps1[4]=S(c->f[26]-c->f[0]); // 803F7A10
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F7A14
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[1]=RF64(ea);} // 803F7A18
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F7A1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[27]); // 803F7A20
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[3]=RF64(ea);} // 803F7A24
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F7A28
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[27]); // 803F7A2C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F7A30
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[3]); // 803F7A34
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F7A38
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F7A3C
  {uint32_t ea=c->r[1]+0x000003F0u; WF64(ea,c->f[0]);} // 803F7A40
  c->r[5]=R32(c->r[1]+0x000003F4u); // 803F7A44
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 803F7A48
  cmps(c,0,(int32_t)c->r[0],255); // 803F7A4C
  if (!crb(c,1)) { goto L_803F7A58; } // 803F7A50
  c->r[5]=0u+0x000000FFu; // 803F7A54
L_803F7A58:;
  W8(c->r[27]+0x00000100u,c->r[3]); // 803F7A58
  W8(c->r[27]+0x00000101u,c->r[4]); // 803F7A5C
  W8(c->r[27]+0x00000102u,c->r[5]); // 803F7A60
L_803F7A64:;
  c->r[0]=R32(c->r[26]+0x00000190u); // 803F7A64
  cmps(c,0,(int32_t)c->r[0],1); // 803F7A68
  if (crb(c,2)) { goto L_803F7B20; } // 803F7A6C
  cmps(c,0,(int32_t)c->r[0],2); // 803F7A70
  if (crb(c,2)) { goto L_803F7C7C; } // 803F7A74
  cmps(c,0,(int32_t)c->r[0],3); // 803F7A78
  if (crb(c,2)) { goto L_803F7DD8; } // 803F7A7C
  cmps(c,0,(int32_t)c->r[0],4); // 803F7A80
  if (crb(c,2)) { goto L_803F7F34; } // 803F7A84
  cmps(c,0,(int32_t)c->r[0],6); // 803F7A88
  if (crb(c,2)) { goto L_803F7FD4; } // 803F7A8C
  cmps(c,0,(int32_t)c->r[0],7); // 803F7A90
  if (crb(c,2)) { goto L_803F80A8; } // 803F7A94
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F7A98
  c->r[4]=c->r[27]|c->r[27]; // 803F7A9C
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7AA0
  c->r[3]=c->r[26]+0x000001D4u; // 803F7AA4
  c->r[0]=c->r[0]^0x80000000u; // 803F7AA8
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F7AAC
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[0]=RF64(ea);} // 803F7AB0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 803F7AB4
  c->lr=0x803F7ABCu; f_803E8D7C(c); // 803F7AB8
  c->f[19]=c->f[1]; // 803F7ABC
  fcmp(c,0,c->f[1],c->f[24]); // 803F7AC0
  if (crb(c,2)) { goto L_803F7B04; } // 803F7AC4
  c->r[3]=c->r[1]+0x000002E0u; // 803F7AC8
  c->lr=0x803F7AD0u; f_803F6DCC(c); // 803F7ACC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[19]); // 803F7AD0
  c->r[3]=c->r[1]+0x000002E0u; // 803F7AD4
  c->r[4]=c->r[1]+0x00000200u; // 803F7AD8
  c->lr=0x803F7AE0u; f_803EC4C0(c); // 803F7ADC
  c->r[3]=c->r[27]+0x000000D0u; // 803F7AE0
  c->r[4]=c->r[1]+0x000002E0u; // 803F7AE4
  c->r[5]=c->r[1]+0x000001F0u; // 803F7AE8
  c->lr=0x803F7AF0u; f_803E541C(c); // 803F7AEC
  c->r[3]=c->r[27]+0x000000E0u; // 803F7AF0
  c->r[4]=c->r[1]+0x000002E0u; // 803F7AF4
  c->r[5]=c->r[1]+0x000001E0u; // 803F7AF8
  c->lr=0x803F7B00u; f_803E541C(c); // 803F7AFC
  goto L_803F8100; // 803F7B00
L_803F7B04:;
  c->r[3]=c->r[27]+0x000000D0u; // 803F7B04
  c->r[4]=c->r[1]+0x000001F0u; // 803F7B08
  c->lr=0x803F7B10u; f_803E53A0(c); // 803F7B0C
  c->r[3]=c->r[27]+0x000000E0u; // 803F7B10
  c->r[4]=c->r[1]+0x000001E0u; // 803F7B14
  c->lr=0x803F7B1Cu; f_803E53A0(c); // 803F7B18
  goto L_803F8100; // 803F7B1C
L_803F7B20:;
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F7B20
  c->r[4]=c->r[27]|c->r[27]; // 803F7B24
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7B28
  c->r[3]=c->r[26]+0x000001D4u; // 803F7B2C
  c->r[0]=c->r[0]^0x80000000u; // 803F7B30
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F7B34
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=RF64(ea);} // 803F7B38
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 803F7B3C
  c->lr=0x803F7B44u; f_803E8D7C(c); // 803F7B40
  c->f[18]=c->f[1]; // 803F7B44
  c->r[3]=c->r[1]+0x00000180u; // 803F7B48
  c->lr=0x803F7B50u; f_803E49FC(c); // 803F7B4C
  c->r[3]=c->r[1]+0x00000170u; // 803F7B50
  c->lr=0x803F7B58u; f_803E49FC(c); // 803F7B54
  fcmp(c,0,c->f[18],c->f[24]); // 803F7B58
  if (crb(c,2)) { goto L_803F7BD4; } // 803F7B5C
  c->f[1]=c->f[18]; // 803F7B60
  c->lr=0x803F7B68u; f_803F52CC(c); // 803F7B64
  c->f[19]=c->f[1]; // 803F7B68
  c->f[1]=c->f[18]; // 803F7B6C
  c->lr=0x803F7B74u; f_803F52F0(c); // 803F7B70
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F7B74
  c->f[1]=-c->f[1]; // 803F7B78
  c->f[2]=c->f[19]; // 803F7B7C
  c->r[3]=c->r[1]+0x000000C0u; // 803F7B80
  c->f[4]=c->f[3]; // 803F7B84
  c->lr=0x803F7B8Cu; f_803E54F4(c); // 803F7B88
  c->r[4]=c->r[3]|c->r[3]; // 803F7B8C
  c->r[3]=c->r[1]+0x00000180u; // 803F7B90
  c->lr=0x803F7B98u; f_803E53A0(c); // 803F7B94
  c->f[1]=c->f[18]; // 803F7B98
  c->lr=0x803F7BA0u; f_803F52F0(c); // 803F7B9C
  c->f[19]=-c->f[1]; // 803F7BA0
  c->f[1]=c->f[18]; // 803F7BA4
  c->lr=0x803F7BACu; f_803F52CC(c); // 803F7BA8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F7BAC
  c->f[1]=-c->f[1]; // 803F7BB0
  c->f[2]=c->f[19]; // 803F7BB4
  c->r[3]=c->r[1]+0x000000B0u; // 803F7BB8
  c->f[4]=c->f[3]; // 803F7BBC
  c->lr=0x803F7BC4u; f_803E54F4(c); // 803F7BC0
  c->r[4]=c->r[3]|c->r[3]; // 803F7BC4
  c->r[3]=c->r[1]+0x00000170u; // 803F7BC8
  c->lr=0x803F7BD0u; f_803E53A0(c); // 803F7BCC
  goto L_803F7C1C; // 803F7BD0
L_803F7BD4:;
  c->f[2]=c->f[24]; // 803F7BD4
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7BD8
  c->f[3]=c->f[24]; // 803F7BDC
  c->r[3]=c->r[1]+0x000000A0u; // 803F7BE0
  c->f[4]=c->f[24]; // 803F7BE4
  c->lr=0x803F7BECu; f_803E54F4(c); // 803F7BE8
  c->r[4]=c->r[3]|c->r[3]; // 803F7BEC
  c->r[3]=c->r[1]+0x00000180u; // 803F7BF0
  c->lr=0x803F7BF8u; f_803E53A0(c); // 803F7BF4
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7BF8
  c->r[3]=c->r[1]+0x00000090u; // 803F7BFC
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F7C00
  c->f[3]=c->f[1]; // 803F7C04
  c->f[4]=c->f[1]; // 803F7C08
  c->lr=0x803F7C10u; f_803E54F4(c); // 803F7C0C
  c->r[4]=c->r[3]|c->r[3]; // 803F7C10
  c->r[3]=c->r[1]+0x00000170u; // 803F7C14
  c->lr=0x803F7C1Cu; f_803E53A0(c); // 803F7C18
L_803F7C1C:;
  cmps(c,0,(int32_t)c->r[20],0); // 803F7C1C
  if (crb(c,2)) { goto L_803F7C58; } // 803F7C20
  c->r[3]=c->r[1]+0x000002B0u; // 803F7C24
  c->r[4]=c->r[1]+0x00000340u; // 803F7C28
  c->r[5]=c->r[27]+0x00000008u; // 803F7C2C
  c->lr=0x803F7C34u; f_803F6E04(c); // 803F7C30
  c->r[3]=c->r[27]+0x000000D0u; // 803F7C34
  c->r[4]=c->r[1]+0x000002B0u; // 803F7C38
  c->r[5]=c->r[1]+0x00000180u; // 803F7C3C
  c->lr=0x803F7C44u; f_803E541C(c); // 803F7C40
  c->r[3]=c->r[27]+0x000000E0u; // 803F7C44
  c->r[4]=c->r[1]+0x000002B0u; // 803F7C48
  c->r[5]=c->r[1]+0x00000170u; // 803F7C4C
  c->lr=0x803F7C54u; f_803E541C(c); // 803F7C50
  goto L_803F8100; // 803F7C54
L_803F7C58:;
  c->r[3]=c->r[27]+0x000000D0u; // 803F7C58
  c->r[4]=c->r[27]+0x00000008u; // 803F7C5C
  c->r[5]=c->r[1]+0x00000180u; // 803F7C60
  c->lr=0x803F7C68u; f_803E541C(c); // 803F7C64
  c->r[3]=c->r[27]+0x000000E0u; // 803F7C68
  c->r[4]=c->r[27]+0x00000008u; // 803F7C6C
  c->r[5]=c->r[1]+0x00000170u; // 803F7C70
  c->lr=0x803F7C78u; f_803E541C(c); // 803F7C74
  goto L_803F8100; // 803F7C78
L_803F7C7C:;
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F7C7C
  c->r[4]=c->r[27]|c->r[27]; // 803F7C80
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7C84
  c->r[3]=c->r[26]+0x000001D4u; // 803F7C88
  c->r[0]=c->r[0]^0x80000000u; // 803F7C8C
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F7C90
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[0]=RF64(ea);} // 803F7C94
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 803F7C98
  c->lr=0x803F7CA0u; f_803E8D7C(c); // 803F7C9C
  c->f[18]=c->f[1]; // 803F7CA0
  c->r[3]=c->r[1]+0x00000160u; // 803F7CA4
  c->lr=0x803F7CACu; f_803E49FC(c); // 803F7CA8
  c->r[3]=c->r[1]+0x00000150u; // 803F7CAC
  c->lr=0x803F7CB4u; f_803E49FC(c); // 803F7CB0
  fcmp(c,0,c->f[18],c->f[24]); // 803F7CB4
  if (crb(c,2)) { goto L_803F7D30; } // 803F7CB8
  c->f[1]=c->f[18]; // 803F7CBC
  c->lr=0x803F7CC4u; f_803F52CC(c); // 803F7CC0
  c->f[19]=c->f[1]; // 803F7CC4
  c->f[1]=c->f[18]; // 803F7CC8
  c->lr=0x803F7CD0u; f_803F52F0(c); // 803F7CCC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F7CD0
  c->f[1]=-c->f[1]; // 803F7CD4
  c->f[3]=c->f[19]; // 803F7CD8
  c->r[3]=c->r[1]+0x00000080u; // 803F7CDC
  c->f[4]=c->f[2]; // 803F7CE0
  c->lr=0x803F7CE8u; f_803E54F4(c); // 803F7CE4
  c->r[4]=c->r[3]|c->r[3]; // 803F7CE8
  c->r[3]=c->r[1]+0x00000160u; // 803F7CEC
  c->lr=0x803F7CF4u; f_803E53A0(c); // 803F7CF0
  c->f[1]=c->f[18]; // 803F7CF4
  c->lr=0x803F7CFCu; f_803F52F0(c); // 803F7CF8
  c->f[19]=-c->f[1]; // 803F7CFC
  c->f[1]=c->f[18]; // 803F7D00
  c->lr=0x803F7D08u; f_803F52CC(c); // 803F7D04
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F7D08
  c->f[1]=-c->f[1]; // 803F7D0C
  c->f[3]=c->f[19]; // 803F7D10
  c->r[3]=c->r[1]+0x00000070u; // 803F7D14
  c->f[4]=c->f[2]; // 803F7D18
  c->lr=0x803F7D20u; f_803E54F4(c); // 803F7D1C
  c->r[4]=c->r[3]|c->r[3]; // 803F7D20
  c->r[3]=c->r[1]+0x00000150u; // 803F7D24
  c->lr=0x803F7D2Cu; f_803E53A0(c); // 803F7D28
  goto L_803F7D78; // 803F7D2C
L_803F7D30:;
  c->f[2]=c->f[24]; // 803F7D30
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7D34
  c->f[3]=c->f[24]; // 803F7D38
  c->r[3]=c->r[1]+0x00000060u; // 803F7D3C
  c->f[4]=c->f[24]; // 803F7D40
  c->lr=0x803F7D48u; f_803E54F4(c); // 803F7D44
  c->r[4]=c->r[3]|c->r[3]; // 803F7D48
  c->r[3]=c->r[1]+0x00000160u; // 803F7D4C
  c->lr=0x803F7D54u; f_803E53A0(c); // 803F7D50
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7D54
  c->r[3]=c->r[1]+0x00000050u; // 803F7D58
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F7D5C
  c->f[2]=c->f[1]; // 803F7D60
  c->f[4]=c->f[1]; // 803F7D64
  c->lr=0x803F7D6Cu; f_803E54F4(c); // 803F7D68
  c->r[4]=c->r[3]|c->r[3]; // 803F7D6C
  c->r[3]=c->r[1]+0x00000150u; // 803F7D70
  c->lr=0x803F7D78u; f_803E53A0(c); // 803F7D74
L_803F7D78:;
  cmps(c,0,(int32_t)c->r[20],0); // 803F7D78
  if (crb(c,2)) { goto L_803F7DB4; } // 803F7D7C
  c->r[3]=c->r[1]+0x00000280u; // 803F7D80
  c->r[4]=c->r[1]+0x00000340u; // 803F7D84
  c->r[5]=c->r[27]+0x00000008u; // 803F7D88
  c->lr=0x803F7D90u; f_803F6E04(c); // 803F7D8C
  c->r[3]=c->r[27]+0x000000D0u; // 803F7D90
  c->r[4]=c->r[1]+0x00000280u; // 803F7D94
  c->r[5]=c->r[1]+0x00000160u; // 803F7D98
  c->lr=0x803F7DA0u; f_803E541C(c); // 803F7D9C
  c->r[3]=c->r[27]+0x000000E0u; // 803F7DA0
  c->r[4]=c->r[1]+0x00000280u; // 803F7DA4
  c->r[5]=c->r[1]+0x00000150u; // 803F7DA8
  c->lr=0x803F7DB0u; f_803E541C(c); // 803F7DAC
  goto L_803F8100; // 803F7DB0
L_803F7DB4:;
  c->r[3]=c->r[27]+0x000000D0u; // 803F7DB4
  c->r[4]=c->r[27]+0x00000008u; // 803F7DB8
  c->r[5]=c->r[1]+0x00000160u; // 803F7DBC
  c->lr=0x803F7DC4u; f_803E541C(c); // 803F7DC0
  c->r[3]=c->r[27]+0x000000E0u; // 803F7DC4
  c->r[4]=c->r[27]+0x00000008u; // 803F7DC8
  c->r[5]=c->r[1]+0x00000150u; // 803F7DCC
  c->lr=0x803F7DD4u; f_803E541C(c); // 803F7DD0
  goto L_803F8100; // 803F7DD4
L_803F7DD8:;
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F7DD8
  c->r[4]=c->r[27]|c->r[27]; // 803F7DDC
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7DE0
  c->r[3]=c->r[26]+0x000001D4u; // 803F7DE4
  c->r[0]=c->r[0]^0x80000000u; // 803F7DE8
  W32(c->r[1]+0x000003D4u,c->r[0]); // 803F7DEC
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[0]=RF64(ea);} // 803F7DF0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 803F7DF4
  c->lr=0x803F7DFCu; f_803E8D7C(c); // 803F7DF8
  c->f[18]=c->f[1]; // 803F7DFC
  c->r[3]=c->r[1]+0x00000140u; // 803F7E00
  c->lr=0x803F7E08u; f_803E49FC(c); // 803F7E04
  c->r[3]=c->r[1]+0x00000130u; // 803F7E08
  c->lr=0x803F7E10u; f_803E49FC(c); // 803F7E0C
  fcmp(c,0,c->f[18],c->f[24]); // 803F7E10
  if (crb(c,2)) { goto L_803F7E8C; } // 803F7E14
  c->f[1]=c->f[18]; // 803F7E18
  c->lr=0x803F7E20u; f_803F52F0(c); // 803F7E1C
  c->f[19]=c->f[1]; // 803F7E20
  c->f[1]=c->f[18]; // 803F7E24
  c->lr=0x803F7E2Cu; f_803F52CC(c); // 803F7E28
  c->f[2]=c->f[1]; // 803F7E2C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7E30
  c->f[3]=c->f[19]; // 803F7E34
  c->r[3]=c->r[1]+0x00000040u; // 803F7E38
  c->f[4]=c->f[1]; // 803F7E3C
  c->lr=0x803F7E44u; f_803E54F4(c); // 803F7E40
  c->r[4]=c->r[3]|c->r[3]; // 803F7E44
  c->r[3]=c->r[1]+0x00000140u; // 803F7E48
  c->lr=0x803F7E50u; f_803E53A0(c); // 803F7E4C
  c->f[1]=c->f[18]; // 803F7E50
  c->lr=0x803F7E58u; f_803F52CC(c); // 803F7E54
  c->f[19]=c->f[1]; // 803F7E58
  c->f[1]=c->f[18]; // 803F7E5C
  c->lr=0x803F7E64u; f_803F52F0(c); // 803F7E60
  c->f[2]=-c->f[1]; // 803F7E64
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7E68
  c->f[3]=c->f[19]; // 803F7E6C
  c->r[3]=c->r[1]+0x00000030u; // 803F7E70
  c->f[4]=c->f[1]; // 803F7E74
  c->lr=0x803F7E7Cu; f_803E54F4(c); // 803F7E78
  c->r[4]=c->r[3]|c->r[3]; // 803F7E7C
  c->r[3]=c->r[1]+0x00000130u; // 803F7E80
  c->lr=0x803F7E88u; f_803E53A0(c); // 803F7E84
  goto L_803F7ED4; // 803F7E88
L_803F7E8C:;
  c->f[1]=c->f[24]; // 803F7E8C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F7E90
  c->f[2]=c->f[24]; // 803F7E94
  c->r[3]=c->r[1]+0x00000020u; // 803F7E98
  c->f[4]=c->f[24]; // 803F7E9C
  c->lr=0x803F7EA4u; f_803E54F4(c); // 803F7EA0
  c->r[4]=c->r[3]|c->r[3]; // 803F7EA4
  c->r[3]=c->r[1]+0x00000140u; // 803F7EA8
  c->lr=0x803F7EB0u; f_803E53A0(c); // 803F7EAC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7EB0
  c->r[3]=c->r[1]+0x00000010u; // 803F7EB4
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F7EB8
  c->f[3]=c->f[1]; // 803F7EBC
  c->f[4]=c->f[1]; // 803F7EC0
  c->lr=0x803F7EC8u; f_803E54F4(c); // 803F7EC4
  c->r[4]=c->r[3]|c->r[3]; // 803F7EC8
  c->r[3]=c->r[1]+0x00000130u; // 803F7ECC
  c->lr=0x803F7ED4u; f_803E53A0(c); // 803F7ED0
L_803F7ED4:;
  cmps(c,0,(int32_t)c->r[20],0); // 803F7ED4
  if (crb(c,2)) { goto L_803F7F10; } // 803F7ED8
  c->r[3]=c->r[1]+0x00000250u; // 803F7EDC
  c->r[4]=c->r[1]+0x00000340u; // 803F7EE0
  c->r[5]=c->r[27]+0x00000008u; // 803F7EE4
  c->lr=0x803F7EECu; f_803F6E04(c); // 803F7EE8
  c->r[3]=c->r[27]+0x000000D0u; // 803F7EEC
  c->r[4]=c->r[1]+0x00000250u; // 803F7EF0
  c->r[5]=c->r[1]+0x00000140u; // 803F7EF4
  c->lr=0x803F7EFCu; f_803E541C(c); // 803F7EF8
  c->r[3]=c->r[27]+0x000000E0u; // 803F7EFC
  c->r[4]=c->r[1]+0x00000250u; // 803F7F00
  c->r[5]=c->r[1]+0x00000130u; // 803F7F04
  c->lr=0x803F7F0Cu; f_803E541C(c); // 803F7F08
  goto L_803F8100; // 803F7F0C
L_803F7F10:;
  c->r[3]=c->r[27]+0x000000D0u; // 803F7F10
  c->r[4]=c->r[27]+0x00000008u; // 803F7F14
  c->r[5]=c->r[1]+0x00000140u; // 803F7F18
  c->lr=0x803F7F20u; f_803E541C(c); // 803F7F1C
  c->r[3]=c->r[27]+0x000000E0u; // 803F7F20
  c->r[4]=c->r[27]+0x00000008u; // 803F7F24
  c->r[5]=c->r[1]+0x00000130u; // 803F7F28
  c->lr=0x803F7F30u; f_803E541C(c); // 803F7F2C
  goto L_803F8100; // 803F7F30
L_803F7F34:;
  c->r[3]=c->r[1]+0x00000120u; // 803F7F34
  c->lr=0x803F7F3Cu; f_803E49FC(c); // 803F7F38
  c->r[5]=c->r[31]|c->r[31]; // 803F7F3C
  c->r[3]=c->r[1]+0x00000120u; // 803F7F40
  c->r[4]=c->r[27]+0x000000C0u; // 803F7F44
  c->lr=0x803F7F4Cu; f_803E4A00(c); // 803F7F48
  c->r[3]=c->r[1]+0x00000120u; // 803F7F4C
  c->lr=0x803F7F54u; f_803F5318(c); // 803F7F50
  {uint32_t ea=c->r[27]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F7F54
  {uint32_t ea=c->r[27]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F7F58
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803F7F5C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803F7F60
  fcmp(c,0,c->f[0],c->f[20]); // 803F7F64
  if (!crb(c,1)) { goto L_803F7FB8; } // 803F7F68
  c->r[3]=c->r[1]+0x00000110u; // 803F7F6C
  c->r[4]=c->r[1]+0x00000200u; // 803F7F70
  c->lr=0x803F7F78u; f_803E536C(c); // 803F7F74
  c->r[3]=c->r[1]+0x00000120u; // 803F7F78
  c->r[4]=c->r[1]+0x00000110u; // 803F7F7C
  c->lr=0x803F7F84u; f_803EC49C(c); // 803F7F80
  c->r[3]=c->r[1]+0x00000110u; // 803F7F84
  c->lr=0x803F7F8Cu; f_803E7614(c); // 803F7F88
  c->r[3]=c->r[27]+0x000000D0u; // 803F7F8C
  c->r[4]=c->r[1]+0x00000110u; // 803F7F90
  c->r[5]=c->r[1]+0x00000120u; // 803F7F94
  c->lr=0x803F7F9Cu; f_803E4A00(c); // 803F7F98
  c->r[3]=c->r[27]+0x000000D0u; // 803F7F9C
  c->lr=0x803F7FA4u; f_803F536C(c); // 803F7FA0
  c->r[3]=c->r[27]+0x000000E0u; // 803F7FA4
  c->r[4]=c->r[27]+0x000000D0u; // 803F7FA8
  c->r[5]=c->r[1]+0x00000200u; // 803F7FAC
  c->lr=0x803F7FB4u; f_803E54A8(c); // 803F7FB0
  goto L_803F8100; // 803F7FB4
L_803F7FB8:;
  c->r[3]=c->r[27]+0x000000D0u; // 803F7FB8
  c->r[4]=c->r[1]+0x000001F0u; // 803F7FBC
  c->lr=0x803F7FC4u; f_803E53A0(c); // 803F7FC0
  c->r[3]=c->r[27]+0x000000E0u; // 803F7FC4
  c->r[4]=c->r[1]+0x000001E0u; // 803F7FC8
  c->lr=0x803F7FD0u; f_803E53A0(c); // 803F7FCC
  goto L_803F8100; // 803F7FD0
L_803F7FD4:;
  c->r[0]=R32(c->r[26]+0x0000016Cu); // 803F7FD4
  c->r[4]=c->r[27]|c->r[27]; // 803F7FD8
  {uint32_t ea=c->r[27]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7FDC
  c->r[3]=c->r[26]+0x00000198u; // 803F7FE0
  c->r[0]=c->r[0]^0x80000000u; // 803F7FE4
  W32(c->r[1]+0x000003DCu,c->r[0]); // 803F7FE8
  {uint32_t ea=c->r[1]+0x000003D8u; c->f[0]=RF64(ea);} // 803F7FEC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 803F7FF0
  c->lr=0x803F7FF8u; f_803E8D7C(c); // 803F7FF4
  c->f[18]=c->f[1]; // 803F7FF8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F7FFC
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8000
  c->r[3]=c->r[1]+0x00000100u; // 803F8004
  c->f[3]=c->f[1]; // 803F8008
  c->f[4]=c->f[1]; // 803F800C
  c->lr=0x803F8014u; f_803E54F4(c); // 803F8010
  c->r[3]=c->r[1]+0x00000100u; // 803F8014
  c->r[4]=c->r[27]+0x00000008u; // 803F8018
  c->r[5]=c->r[3]|c->r[3]; // 803F801C
  c->lr=0x803F8024u; f_803E541C(c); // 803F8020
  c->f[1]=c->f[18]; // 803F8024
  c->r[3]=c->r[27]+0x000000D0u; // 803F8028
  c->r[4]=c->r[1]+0x00000100u; // 803F802C
  c->lr=0x803F8034u; f_803E52DC(c); // 803F8030
  cmps(c,0,(int32_t)c->r[20],0); // 803F8034
  if (crb(c,2)) { goto L_803F804C; } // 803F8038
  c->r[3]=c->r[27]+0x000000D0u; // 803F803C
  c->r[4]=c->r[1]+0x00000340u; // 803F8040
  c->r[5]=c->r[3]|c->r[3]; // 803F8044
  c->lr=0x803F804Cu; f_803E541C(c); // 803F8048
L_803F804C:;
  c->r[3]=c->r[27]+0x000000E0u; // 803F804C
  c->r[4]=c->r[27]+0x000000D0u; // 803F8050
  c->r[5]=c->r[1]+0x00000200u; // 803F8054
  c->lr=0x803F805Cu; f_803E54A8(c); // 803F8058
  c->r[3]=c->r[27]+0x000000E0u; // 803F805C
  c->lr=0x803F8064u; f_803E4A34(c); // 803F8060
  fcmp(c,0,c->f[1],c->f[21]); // 803F8064
  if (!crb(c,1)) { goto L_803F8074; } // 803F8068
  c->r[3]=c->r[27]+0x000000E0u; // 803F806C
  c->lr=0x803F8074u; f_803E5484(c); // 803F8070
L_803F8074:;
  c->r[3]=c->r[1]+0x000000F0u; // 803F8074
  c->lr=0x803F807Cu; f_803E49FC(c); // 803F8078
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F807C
  c->r[3]=c->r[1]+0x000000F0u; // 803F8080
  c->r[4]=c->r[27]+0x000000D0u; // 803F8084
  c->lr=0x803F808Cu; f_803E52DC(c); // 803F8088
  c->r[3]=c->r[27]+0x000000C0u; // 803F808C
  c->r[4]=c->r[1]+0x000000F0u; // 803F8090
  c->lr=0x803F8098u; f_803E52F8(c); // 803F8094
  {uint32_t ea=c->r[27]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8098
  c->r[3]=c->r[27]+0x000000D0u; // 803F809C
  c->lr=0x803F80A4u; f_803E5484(c); // 803F80A0
  goto L_803F8100; // 803F80A4
L_803F80A8:;
  c->r[3]=c->r[1]+0x000000E0u; // 803F80A8
  c->lr=0x803F80B0u; f_803E49FC(c); // 803F80AC
  c->r[3]=c->r[1]+0x000000D0u; // 803F80B0
  c->lr=0x803F80B8u; f_803E49FC(c); // 803F80B4
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F80B8
  c->r[3]=c->r[1]+0x000000E0u; // 803F80BC
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F80C0
  c->f[3]=c->f[2]; // 803F80C4
  c->lr=0x803F80CCu; f_803E5508(c); // 803F80C8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F80CC
  c->r[3]=c->r[1]+0x000000D0u; // 803F80D0
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F80D4
  c->f[2]=c->f[1]; // 803F80D8
  c->lr=0x803F80E0u; f_803E5508(c); // 803F80DC
  c->r[3]=c->r[27]+0x000000D0u; // 803F80E0
  c->r[4]=c->r[27]+0x00000008u; // 803F80E4
  c->r[5]=c->r[1]+0x000000E0u; // 803F80E8
  c->lr=0x803F80F0u; f_803E541C(c); // 803F80EC
  c->r[3]=c->r[27]+0x000000E0u; // 803F80F0
  c->r[4]=c->r[27]+0x00000008u; // 803F80F4
  c->r[5]=c->r[1]+0x000000D0u; // 803F80F8
  c->lr=0x803F8100u; f_803E541C(c); // 803F80FC
L_803F8100:;
  {uint32_t ea=c->r[27]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8100
  c->r[3]=c->r[27]+0x000000D0u; // 803F8104
  c->lr=0x803F810Cu; f_803E7614(c); // 803F8108
  {uint32_t ea=c->r[27]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F810C
  c->r[3]=c->r[27]+0x000000E0u; // 803F8110
  c->lr=0x803F8118u; f_803E7614(c); // 803F8114
  {uint32_t ea=c->r[27]+0x000000ECu; WF32(ea,c->f[26]);} // 803F8118
  c->r[4]=0u+0x00000001u; // 803F811C
  c->r[5]=0u+0x00000004u; // 803F8120
  {uint32_t ea=c->r[27]+0x000000DCu; WF32(ea,c->f[26]);} // 803F8124
  c->r[3]=R32(c->r[26]+0x00000168u); // 803F8128
  c->lr=0x803F8130u; f_80402230(c); // 803F812C
  c->r[5]=R32(c->r[27]+0x00000120u); // 803F8130
  cmps(c,0,(int32_t)c->r[5],0); // 803F8134
  if (!crb(c,2)) { goto L_803F814C; } // 803F8138
  c->r[3]=R32(c->r[26]+0x00000168u); // 803F813C
  c->r[4]=c->r[27]+0x000000C0u; // 803F8140
  c->lr=0x803F8148u; f_804012D8(c); // 803F8144
  goto L_803F8158; // 803F8148
L_803F814C:;
  c->r[3]=R32(c->r[26]+0x00000168u); // 803F814C
  c->r[4]=c->r[27]+0x000000C0u; // 803F8150
  c->lr=0x803F8158u; f_804016A8(c); // 803F8154
L_803F8158:;
  c->r[27]=R32(c->r[27]+0x00000004u); // 803F8158
L_803F815C:;
  cmps(c,0,(int32_t)c->r[27],0); // 803F815C
  if (!crb(c,2)) { IRQCHK(c); goto L_803F7354; } // 803F8160
L_803F8164:;
  W32(c->r[28]+0x00000000u,c->r[27]); // 803F8164
L_803F8168:;
  {uint32_t ea=c->r[1]+0x00000518u; psq_load(c,31,ea,0,0);} // 803F8168
  {uint32_t ea=c->r[1]+0x00000510u; c->f[31]=RF64(ea);} // 803F816C
  {uint32_t ea=c->r[1]+0x00000508u; psq_load(c,30,ea,0,0);} // 803F8170
  {uint32_t ea=c->r[1]+0x00000500u; c->f[30]=RF64(ea);} // 803F8174
  {uint32_t ea=c->r[1]+0x000004F8u; psq_load(c,29,ea,0,0);} // 803F8178
  {uint32_t ea=c->r[1]+0x000004F0u; c->f[29]=RF64(ea);} // 803F817C
  {uint32_t ea=c->r[1]+0x000004E8u; psq_load(c,28,ea,0,0);} // 803F8180
  {uint32_t ea=c->r[1]+0x000004E0u; c->f[28]=RF64(ea);} // 803F8184
  {uint32_t ea=c->r[1]+0x000004D8u; psq_load(c,27,ea,0,0);} // 803F8188
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[27]=RF64(ea);} // 803F818C
  {uint32_t ea=c->r[1]+0x000004C8u; psq_load(c,26,ea,0,0);} // 803F8190
  {uint32_t ea=c->r[1]+0x000004C0u; c->f[26]=RF64(ea);} // 803F8194
  {uint32_t ea=c->r[1]+0x000004B8u; psq_load(c,25,ea,0,0);} // 803F8198
  {uint32_t ea=c->r[1]+0x000004B0u; c->f[25]=RF64(ea);} // 803F819C
  {uint32_t ea=c->r[1]+0x000004A8u; psq_load(c,24,ea,0,0);} // 803F81A0
  {uint32_t ea=c->r[1]+0x000004A0u; c->f[24]=RF64(ea);} // 803F81A4
  {uint32_t ea=c->r[1]+0x00000498u; psq_load(c,23,ea,0,0);} // 803F81A8
  {uint32_t ea=c->r[1]+0x00000490u; c->f[23]=RF64(ea);} // 803F81AC
  {uint32_t ea=c->r[1]+0x00000488u; psq_load(c,22,ea,0,0);} // 803F81B0
  {uint32_t ea=c->r[1]+0x00000480u; c->f[22]=RF64(ea);} // 803F81B4
  {uint32_t ea=c->r[1]+0x00000478u; psq_load(c,21,ea,0,0);} // 803F81B8
  {uint32_t ea=c->r[1]+0x00000470u; c->f[21]=RF64(ea);} // 803F81BC
  {uint32_t ea=c->r[1]+0x00000468u; psq_load(c,20,ea,0,0);} // 803F81C0
  {uint32_t ea=c->r[1]+0x00000460u; c->f[20]=RF64(ea);} // 803F81C4
  {uint32_t ea=c->r[1]+0x00000458u; psq_load(c,19,ea,0,0);} // 803F81C8
  {uint32_t ea=c->r[1]+0x00000450u; c->f[19]=RF64(ea);} // 803F81CC
  {uint32_t ea=c->r[1]+0x00000448u; psq_load(c,18,ea,0,0);} // 803F81D0
  c->r[11]=c->r[1]+0x00000440u; // 803F81D4
  {uint32_t ea=c->r[1]+0x00000440u; c->f[18]=RF64(ea);} // 803F81D8
  c->lr=0x803F81E0u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F81DC
  c->r[0]=R32(c->r[1]+0x00000524u); // 803F81E0
  c->lr=c->r[0]; // 803F81E4
  c->r[1]=c->r[1]+0x00000520u; // 803F81E8
  return; // 803F81EC
}

// fn_803F81F0
void f_803F81F0(Ctx* __restrict c) {
  trace_call(0x803F81F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F81F0
  c->r[0]=c->lr; // 803F81F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 803F81F8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803F81FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803F8200
  c->r[11]=c->r[1]+0x00000040u; // 803F8204
  c->lr=0x803F820Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F8208
  c->r[8]=R32(c->r[3]+0x000000ACu); // 803F820C
  c->r[0]=0u+0x43300000u; // 803F8210
  c->r[7]=R32(c->r[5]+0x000000B4u); // 803F8214
  c->f[31]=c->f[1]; // 803F8218
  cmps(c,0,(int32_t)c->r[8],0); // 803F821C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803F8220
  c->r[29]=R32(c->r[7]+0x00000000u); // 803F8224
  c->r[30]=c->r[3]|c->r[3]; // 803F8228
  W32(c->r[1]+0x00000010u,c->r[0]); // 803F822C
  c->r[27]=c->r[4]|c->r[4]; // 803F8230
  c->r[28]=c->r[5]|c->r[5]; // 803F8234
  c->r[31]=c->r[6]|c->r[6]; // 803F8238
  if (crb(c,2)) { goto L_803F8278; } // 803F823C
  c->r[0]=c->r[4]^0x80000000u; // 803F8240
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F8244
  c->r[0]=c->r[29]^0x80000000u; // 803F8248
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 803F824C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F8250
  c->r[3]=c->r[8]|c->r[8]; // 803F8254
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803F8258
  c->r[4]=c->r[31]|c->r[31]; // 803F825C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803F8260
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F8264
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803F8268
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803F826C
  c->lr=0x803F8274u; f_803E6ED0(c); // 803F8270
  goto L_803F8280; // 803F8274
L_803F8278:;
  c->r[0]=0u+0xFFFFFFFFu; // 803F8278
  W32(c->r[6]+0x00000000u,c->r[0]); // 803F827C
L_803F8280:;
  c->r[0]=R32(c->r[30]+0x000000C8u); // 803F8280
  cmps(c,0,(int32_t)c->r[0],0); // 803F8284
  if (!crb(c,2)) { goto L_803F82F0; } // 803F8288
  c->r[0]=R32(c->r[30]+0x00000128u); // 803F828C
  cmps(c,0,(int32_t)c->r[0],0); // 803F8290
  if (crb(c,2)) { goto L_803F82AC; } // 803F8294
  c->r[0]=rotl(c->r[29],1)&0x00000001u; // 803F8298
  c->r[0]=c->r[0]+c->r[29]; // 803F829C
  c->r[3]=sraw(c,c->r[0],1); // 803F82A0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 803F82A4
  if (!crb(c,0)) { goto L_803F82B4; } // 803F82A8
L_803F82AC:;
  c->r[4]=0u+0x000000FFu; // 803F82AC
  goto L_803F834C; // 803F82B0
L_803F82B4:;
  c->r[0]=c->r[27]-c->r[3]; // 803F82B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)285); // 803F82B8
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[3]); // 803F82BC
  c->r[3]=addc(c,~c->r[0],0x000000FFu,1); // 803F82C0
  cmps(c,0,(int32_t)c->r[3],0); // 803F82C4
  if (!crb(c,0)) { goto L_803F82D0; } // 803F82C8
  c->r[3]=0u+0x00000000u; // 803F82CC
L_803F82D0:;
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F82D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 803F82D4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F82D8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803F82DC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803F82E0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803F82E4
  c->r[4]=sraw(c,c->r[0],8); // 803F82E8
  goto L_803F834C; // 803F82EC
L_803F82F0:;
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F82F0
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F82F4
  fcmp(c,0,c->f[3],c->f[0]); // 803F82F8
  if (crb(c,0)) { goto L_803F8320; } // 803F82FC
  c->r[0]=R32(c->r[30]+0x000000D4u); // 803F8300
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 803F8304
  c->r[0]=c->r[0]^0x80000000u; // 803F8308
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F830C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803F8310
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803F8314
  fcmp(c,0,c->f[3],c->f[0]); // 803F8318
  if (!crb(c,1)) { goto L_803F8328; } // 803F831C
L_803F8320:;
  c->r[4]=0u+0x000000FFu; // 803F8320
  goto L_803F834C; // 803F8324
L_803F8328:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 803F8328
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F832C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 803F8330
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F8334
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 803F8338
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F833C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F8340
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 803F8344
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 803F8348
L_803F834C:;
  c->r[0]=R8(c->r[31]+0x00000003u); // 803F834C
  c->r[3]=R32(c->r[30]+0x0000009Cu); // 803F8350
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803F8354
  cmps(c,0,(int32_t)c->r[3],3); // 803F8358
  c->r[0]=sraw(c,c->r[0],8); // 803F835C
  if (!crb(c,2)) { goto L_803F8368; } // 803F8360
  c->r[3]=0u+0x00000001u; // 803F8364
L_803F8368:;
  cmps(c,0,(int32_t)c->r[3],0); // 803F8368
  if (!crb(c,2)) { goto L_803F83A8; } // 803F836C
  c->r[0]=c->r[0]^0x80000000u; // 803F8370
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803F8374
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[1]=RF64(ea);} // 803F8378
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803F837C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 803F8380
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,1,ea,0,2);} // 803F8384
  {uint32_t ea=c->r[31]+0x00000002u; psq_load(c,0,ea,0,2);} // 803F8388
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F838C
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F8390
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,1,ea,0,7);} // 803F8394
  {uint32_t ea=c->r[31]+0x00000002u; psq_store(c,0,ea,1,7);} // 803F8398
  c->r[0]=0u+0x00000000u; // 803F839C
  W8(c->r[31]+0x00000003u,c->r[0]); // 803F83A0
  goto L_803F83AC; // 803F83A4
L_803F83A8:;
  W8(c->r[31]+0x00000003u,c->r[0]); // 803F83A8
L_803F83AC:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803F83AC
  c->r[11]=c->r[1]+0x00000040u; // 803F83B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803F83B4
  c->lr=0x803F83BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F83B8
  c->r[0]=R32(c->r[1]+0x00000054u); // 803F83BC
  c->lr=c->r[0]; // 803F83C0
  c->r[1]=c->r[1]+0x00000050u; // 803F83C4
  return; // 803F83C8
}

// fn_803F83CC
void f_803F83CC(Ctx* __restrict c) {
  trace_call(0x803F83CCu);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F83CC
  c->r[0]=c->lr; // 803F83D0
  W32(c->r[1]+0x00000204u,c->r[0]); // 803F83D4
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 803F83D8
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 803F83DC
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 803F83E0
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 803F83E4
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 803F83E8
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 803F83EC
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[28]);} // 803F83F0
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,28,ea,0,0);} // 803F83F4
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[27]);} // 803F83F8
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,27,ea,0,0);} // 803F83FC
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[26]);} // 803F8400
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,26,ea,0,0);} // 803F8404
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[25]);} // 803F8408
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,25,ea,0,0);} // 803F840C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[24]);} // 803F8410
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,24,ea,0,0);} // 803F8414
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[23]);} // 803F8418
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,23,ea,0,0);} // 803F841C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[22]);} // 803F8420
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,22,ea,0,0);} // 803F8424
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[21]);} // 803F8428
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,21,ea,0,0);} // 803F842C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[20]);} // 803F8430
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,20,ea,0,0);} // 803F8434
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[19]);} // 803F8438
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,19,ea,0,0);} // 803F843C
  c->r[11]=c->r[1]+0x00000130u; // 803F8440
  c->lr=0x803F8448u; f_803ADD08(c); // 803F8444
  c->r[0]=R32(c->r[3]+0x00000098u); // 803F8448
  c->r[5]=0u+0x43300000u; // 803F844C
  W32(c->r[1]+0x000000C0u,c->r[5]); // 803F8450
  c->r[30]=c->r[3]|c->r[3]; // 803F8454
  cmps(c,0,(int32_t)c->r[0],0); // 803F8458
  c->r[31]=c->r[4]|c->r[4]; // 803F845C
  W32(c->r[1]+0x000000C8u,c->r[5]); // 803F8460
  if (crb(c,2)) { goto L_803F8D58; } // 803F8464
  c->r[3]=R32(c->r[4]+0x000000B4u); // 803F8468
  cmps(c,0,(int32_t)c->r[3],0); // 803F846C
  if (crb(c,2)) { goto L_803F8D58; } // 803F8470
  c->r[0]=R32(c->r[3]+0x00000000u); // 803F8474
  cmps(c,0,(int32_t)c->r[0],2); // 803F8478
  if (crb(c,0)) { goto L_803F8D58; } // 803F847C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F8480
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F8484
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F8488
  c->ctr=c->r[12]; // 803F848C
  if (true) { c->lr=0x803F8494u; dispatch(c,c->ctr); } // 803F8490
  cmps(c,0,(int32_t)c->r[31],0); // 803F8494
  c->r[20]=c->r[3]|c->r[3]; // 803F8498
  if (crb(c,2)) { goto L_803F84AC; } // 803F849C
  c->r[4]=R32(c->r[31]+0x000000B4u); // 803F84A0
  cmps(c,0,(int32_t)c->r[4],0); // 803F84A4
  if (!crb(c,2)) { goto L_803F84B4; } // 803F84A8
L_803F84AC:;
  c->r[28]=0u+0x00000000u; // 803F84AC
  goto L_803F84B8; // 803F84B0
L_803F84B4:;
  c->r[28]=c->r[4]+0x00000004u; // 803F84B4
L_803F84B8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A4u); // 803F84B8
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 803F84BC
  c->r[4]=c->r[28]+c->r[0]; // 803F84C0
  c->r[0]=R32(c->r[4]+0x00000034u); // 803F84C4
  cmps(c,0,(int32_t)c->r[0],0); // 803F84C8
  if (crb(c,2)) { goto L_803F8D58; } // 803F84CC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F84D0
  c->r[7]=c->r[1]+0x00000088u; // 803F84D4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F84D8
  c->r[6]=c->r[1]+0x00000090u; // 803F84DC
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 803F84E0
  c->r[5]=c->r[1]+0x00000078u; // 803F84E4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F84E8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 803F84EC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F84F0
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 803F84F4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F84F8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F84FC
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 803F8500
  {double t0=S(c->f[4]-c->f[2]), t1=S(c->ps1[4]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8504
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 803F8508
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F850C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8510
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803F8514
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F8518
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F851C
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8520
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 803F8524
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 803F8528
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803F852C
  fcmp(c,0,c->f[5],c->f[0]); // 803F8530
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 803F8534
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 803F8538
  if (!crb(c,1)) { goto L_803F8544; } // 803F853C
  goto L_803F8548; // 803F8540
L_803F8544:;
  c->f[5]=c->f[0]; // 803F8544
L_803F8548:;
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8548
  fcmp(c,0,c->f[0],c->f[2]); // 803F854C
  if (!crb(c,2)) { goto L_803F8558; } // 803F8550
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8554
L_803F8558:;
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 803F8558
  c->r[3]=0u+0x80570000u; // 803F855C
  c->r[0]=R8(c->r[3]+0x000040A0u); // 803F8560
  {uint32_t ea=c->r[2]+0xFFFFA8A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8564
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803F8568
  cmps(c,0,(int32_t)c->r[0],0); // 803F856C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803F8570
  if (crb(c,2)) { goto L_803F8580; } // 803F8574
  {uint32_t ea=c->r[2]+0xFFFFA8A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8578
  goto L_803F8584; // 803F857C
L_803F8580:;
  {uint32_t ea=c->r[2]+0xFFFFA8ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8580
L_803F8584:;
  fcmp(c,0,c->f[1],c->f[0]); // 803F8584
  if (!crb(c,0)) { goto L_803F8594; } // 803F8588
  goto L_803F8D58; // 803F858C
  goto L_803F8D58; // 803F8590
L_803F8594:;
  c->r[3]=0u+0x80570000u; // 803F8594
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[24]=c->ps1[24]=RF32(ea);} // 803F8598
  c->r[3]=c->r[3]+0x000040A0u; // 803F859C
  c->r[4]=0u+0x80570000u; // 803F85A0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F85A4
  c->r[3]=c->r[4]+0x00002BF0u; // 803F85A8
  {uint32_t ea=c->r[4]+0x00002BF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F85AC
  c->r[17]=0u+0x00000000u; // 803F85B0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803F85B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F85B8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F85BC
  c->r[16]=0u+0x00000000u; // 803F85C0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F85C4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[24]);} // 803F85C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F85CC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[24]);} // 803F85D0
  c->r[18]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A6u); // 803F85D4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[0]);} // 803F85D8
  c->r[4]=R32(c->r[1]+0x000000D4u); // 803F85DC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[24]);} // 803F85E0
  cmps(c,0,(int32_t)c->r[4],5); // 803F85E4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[24]);} // 803F85E8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[4]);} // 803F85EC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 803F85F0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 803F85F4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 803F85F8
  if (!crb(c,1)) { goto L_803F8604; } // 803F85FC
  c->r[4]=0u+0x00000005u; // 803F8600
L_803F8604:;
  c->r[3]=R32(c->r[30]+0x0000012Cu); // 803F8604
  c->r[0]=0u+0x00000001u; // 803F8608
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 803F860C
  cmps(c,0,(int32_t)c->r[3],0); // 803F8610
  c->r[0]=0u+0x00000000u; // 803F8614
  W32(c->r[1]+0x000000E0u,c->r[0]); // 803F8618
  c->r[0]=0u+0xFFFFFFFFu; // 803F861C
  W32(c->r[1]+0x000000DCu,c->r[0]); // 803F8620
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803F8624
  W32(c->r[1]+0x000000D8u,c->r[0]); // 803F8628
  if (crb(c,2)) { goto L_803F8640; } // 803F862C
  {uint32_t ea=c->r[30]+0x0000014Cu; c->f[22]=c->ps1[22]=RF32(ea);} // 803F8630
  {uint32_t ea=c->r[30]+0x00000154u; c->f[21]=c->ps1[21]=RF32(ea);} // 803F8634
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[23]=c->ps1[23]=RF32(ea);} // 803F8638
  goto L_803F8684; // 803F863C
L_803F8640:;
  c->r[3]=R32(c->r[31]+0x000000B4u); // 803F8640
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 803F8644
  c->r[3]=R32(c->r[3]+0x00000000u); // 803F8648
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F864C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803F8650
  c->r[0]=c->r[0]^0x80000000u; // 803F8654
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803F8658
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=RF64(ea);} // 803F865C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803F8660
  fcmp(c,0,c->f[1],c->f[0]); // 803F8664
  if (!crb(c,0)) { goto L_803F8670; } // 803F8668
  c->f[1]=c->f[0]; // 803F866C
L_803F8670:;
  {uint32_t ea=c->r[30]+0x0000014Cu; c->f[22]=c->ps1[22]=RF32(ea);} // 803F8670
  {uint32_t ea=c->r[30]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8674
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[22]); // 803F8678
  c->f[23]=c->ps1[23]=S(c->f[0]/c->f[1]); // 803F867C
  c->f[21]=c->ps1[21]=S(c->f[23]+c->f[22]); // 803F8680
L_803F8684:;
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8684
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F8688
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F868C
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[3]=RF64(ea);} // 803F8690
  c->r[0]=R8(c->r[3]+0x00000004u); // 803F8694
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[0]);} // 803F8698
  cmps(c,0,(int32_t)c->r[0],0); // 803F869C
  {uint32_t ea=c->r[30]+0x0000015Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F86A0
  c->r[3]=R32(c->r[1]+0x000000D4u); // 803F86A4
  c->r[0]=c->r[3]+0x00000001u; // 803F86A8
  c->r[3]=c->r[3]^0x80000000u; // 803F86AC
  W32(c->r[1]+0x000000CCu,c->r[3]); // 803F86B0
  c->r[0]=c->r[0]^0x80000000u; // 803F86B4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803F86B8
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=RF64(ea);} // 803F86BC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 803F86C0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 803F86C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 803F86C8
  c->f[20]=c->ps1[20]=S(c->f[2]*c->f[1]); // 803F86CC
  c->f[19]=c->ps1[19]=S(c->f[0]*c->f[1]); // 803F86D0
  if (crb(c,2)) { goto L_803F86F0; } // 803F86D4
  c->r[0]=R32(c->r[31]+0x000000A8u); // 803F86D8
  c->r[4]=0u+0x00000000u; // 803F86DC
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F86E0
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803F86E4
  c->r[5]=c->r[5]+0x00000002u; // 803F86E8
  c->lr=0x803F86F0u; f_80402230(c); // 803F86EC
L_803F86F0:;
  c->r[3]=0u+0x80570000u; // 803F86F0
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[27]=c->ps1[27]=RF32(ea);} // 803F86F4
  {uint32_t ea=c->r[2]+0xFFFFA874u; c->f[28]=c->ps1[28]=RF32(ea);} // 803F86F8
  c->r[15]=c->r[1]+0x000000A8u; // 803F86FC
  {uint32_t ea=c->r[2]+0xFFFFA864u; c->f[29]=c->ps1[29]=RF32(ea);} // 803F8700
  c->r[27]=c->r[1]+0x00000038u; // 803F8704
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 803F8708
  c->r[24]=c->r[1]+0x00000048u; // 803F870C
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[26]=c->ps1[26]=RF32(ea);} // 803F8710
  c->r[25]=c->r[1]+0x00000050u; // 803F8714
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[30]=RF64(ea);} // 803F8718
  c->r[23]=c->r[1]+0x00000058u; // 803F871C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[31]=c->ps1[31]=RF32(ea);} // 803F8720
  c->r[22]=c->r[1]+0x00000060u; // 803F8724
  c->r[14]=c->r[1]+0x00000098u; // 803F8728
  c->r[26]=c->r[3]+0x00002BF0u; // 803F872C
  c->r[19]=0u+0x00000000u; // 803F8730
  c->r[29]=0u+0xE0000000u; // 803F8734
  goto L_803F8D00; // 803F8738
L_803F873C:;
  c->r[0]=rotl(c->r[18],6)&0xFFFFFFC0u; // 803F873C
  c->r[21]=c->r[28]+c->r[0]; // 803F8740
  c->r[0]=R32(c->r[21]+0x00000034u); // 803F8744
  cmps(c,0,(int32_t)c->r[0],0); // 803F8748
  if (!crb(c,2)) { goto L_803F8768; } // 803F874C
  {uint32_t ea=c->r[26]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8750
  c->r[17]=0u+0x00000000u; // 803F8754
  {uint32_t ea=c->r[26]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F8758
  {uint32_t ea=c->r[23]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F875C
  {uint32_t ea=c->r[22]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8760
  goto L_803F8CEC; // 803F8764
L_803F8768:;
  cmps(c,0,(int32_t)c->r[17],0); // 803F8768
  if (crb(c,2)) { goto L_803F87AC; } // 803F876C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803F8770
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[3]); // 803F8774
  if (crb(c,2)) { goto L_803F87AC; } // 803F8778
  cmps(c,0,(int32_t)c->r[18],0); // 803F877C
  c->r[0]=c->r[18]+0xFFFFFFFFu; // 803F8780
  if (!crb(c,2)) { goto L_803F878C; } // 803F8784
  c->r[0]=c->r[3]|c->r[3]; // 803F8788
L_803F878C:;
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 803F878C
  c->r[3]=c->r[28]+c->r[0]; // 803F8790
  c->r[0]=R32(c->r[3]+0x00000034u); // 803F8794
  cmps(c,0,(int32_t)c->r[0],0); // 803F8798
  if (crb(c,2)) { goto L_803F87AC; } // 803F879C
  c->r[0]=R32(c->r[1]+0x000000D8u); // 803F87A0
  c->r[0]=c->r[18]&c->r[0]; cr0(c,c->r[0]); // 803F87A4
  if (!crb(c,2)) { goto L_803F8CEC; } // 803F87A8
L_803F87AC:;
  c->r[0]=R32(c->r[30]+0x000000C8u); // 803F87AC
  {uint32_t ea=c->r[21]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F87B0
  {uint32_t ea=c->r[21]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F87B4
  cmps(c,0,(int32_t)c->r[0],0); // 803F87B8
  {uint32_t ea=c->r[21]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F87BC
  {uint32_t ea=c->r[21]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F87C0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 803F87C4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 803F87C8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803F87CC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 803F87D0
  if (!crb(c,2)) { goto L_803F87EC; } // 803F87D4
  cmps(c,0,(int32_t)c->r[19],0); // 803F87D8
  if (crb(c,2)) { goto L_803F87EC; } // 803F87DC
  c->r[0]=R32(c->r[30]+0x000000A0u); // 803F87E0
  cmps(c,0,(int32_t)c->r[0],4); // 803F87E4
  if (!crb(c,0)) { goto L_803F8840; } // 803F87E8
L_803F87EC:;
  c->r[3]=R32(c->r[31]+0x00000068u); // 803F87EC
  cmps(c,0,(int32_t)c->r[3],0); // 803F87F0
  if (crb(c,2)) { goto L_803F8840; } // 803F87F4
  {uint32_t ea=c->r[3]+0x00000098u; psq_load(c,1,ea,0,0);} // 803F87F8
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 803F87FC
  {uint32_t ea=c->r[3]+0x00000090u; psq_load(c,0,ea,0,0);} // 803F8800
  {double t0=S(c->f[1]-c->f[2]), t1=S(c->ps1[1]-c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F8804
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F8808
  c->r[3]=c->r[1]+0x00000040u; // 803F880C
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8810
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803F8814
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8818
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 803F881C
  c->r[3]=c->r[1]+0x00000010u; // 803F8820
  {double t0=S(c->f[3]-c->f[0]), t1=S(c->ps1[3]-c->ps1[0]); c->f[3]=t0; c->ps1[3]=t1;} // 803F8824
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8828
  c->r[3]=c->r[1]+0x00000008u; // 803F882C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8830
  {double t0=S(c->f[1]-c->f[2]), t1=S(c->ps1[1]-c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F8834
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,3,ea,0,0);} // 803F8838
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 803F883C
L_803F8840:;
  cmps(c,0,(int32_t)c->r[17],0); // 803F8840
  if (!crb(c,2)) { goto L_803F887C; } // 803F8844
  c->r[0]=R32(c->r[21]+0x00000038u); // 803F8848
  cmps(c,0,(int32_t)c->r[0],0); // 803F884C
  if (crb(c,2)) { goto L_803F8868; } // 803F8850
  {uint32_t ea=c->r[21]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F8854
  {uint32_t ea=c->r[21]+0x00000018u; psq_load(c,0,ea,0,0);} // 803F8858
  {uint32_t ea=c->r[24]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F885C
  {uint32_t ea=c->r[25]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8860
  goto L_803F8CB4; // 803F8864
L_803F8868:;
  {uint32_t ea=c->r[26]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8868
  {uint32_t ea=c->r[26]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F886C
  {uint32_t ea=c->r[24]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8870
  {uint32_t ea=c->r[25]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8874
  goto L_803F8CB4; // 803F8878
L_803F887C:;
  c->r[0]=R32(c->r[1]+0x000000DCu); // 803F887C
  c->r[17]=0u+0x00000000u; // 803F8880
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 803F8884
  if (crb(c,2)) { goto L_803F88B0; } // 803F8888
  c->r[0]=R32(c->r[1]+0x000000E0u); // 803F888C
  cmps(c,0,(int32_t)c->r[0],0); // 803F8890
  if (crb(c,2)) { goto L_803F88A4; } // 803F8894
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8898
  c->r[4]=c->r[15]|c->r[15]; // 803F889C
  c->lr=0x803F88A4u; f_80401D64(c); // 803F88A0
L_803F88A4:;
  c->r[0]=0u+0x00000001u; // 803F88A4
  W32(c->r[1]+0x000000E0u,c->r[0]); // 803F88A8
  c->r[17]=0u+0x00000001u; // 803F88AC
L_803F88B0:;
  c->r[0]=R32(c->r[21]+0x00000038u); // 803F88B0
  W32(c->r[1]+0x000000DCu,c->r[19]); // 803F88B4
  cmps(c,0,(int32_t)c->r[0],0); // 803F88B8
  if (crb(c,2)) { goto L_803F88D4; } // 803F88BC
  {uint32_t ea=c->r[21]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F88C0
  {uint32_t ea=c->r[21]+0x00000018u; psq_load(c,0,ea,0,0);} // 803F88C4
  {uint32_t ea=c->r[24]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F88C8
  {uint32_t ea=c->r[25]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F88CC
  goto L_803F89E4; // 803F88D0
L_803F88D4:;
  c->r[3]=c->r[1]+0x00000068u; // 803F88D4
  c->r[0]=R32(c->r[30]+0x00000124u); // 803F88D8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F88DC
  c->r[3]=c->r[1]+0x00000070u; // 803F88E0
  {uint32_t ea=c->r[21]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F88E4
  cmps(c,0,(int32_t)c->r[0],0); // 803F88E8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F88EC
  c->r[3]=c->r[1]+0x00000028u; // 803F88F0
  {double t0=S(c->f[0]-c->f[2]), t1=S(c->ps1[0]-c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F88F4
  {uint32_t ea=c->r[21]+0x00000008u; psq_load(c,1,ea,0,0);} // 803F88F8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F88FC
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 803F8900
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 803F8904
  if (!crb(c,2)) { goto L_803F892C; } // 803F8908
  {uint32_t ea=c->r[20]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F890C
  c->r[3]=c->r[1]+0x00000018u; // 803F8910
  {uint32_t ea=c->r[20]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F8914
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 803F8918
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F891C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 803F8920
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803F8924
  goto L_803F893C; // 803F8928
L_803F892C:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[27]);} // 803F892C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[27]);} // 803F8930
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[28]);} // 803F8934
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[27]);} // 803F8938
L_803F893C:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F893C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F8940
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8944
  {uint32_t ea=c->r[1]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F8948
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[7]); // 803F894C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803F8950
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803F8954
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[2]); // 803F8958
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F895C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 803F8960
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[7]); // 803F8964
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 803F8968
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[4]); // 803F896C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 803F8970
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803F8974
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 803F8978
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 803F897C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 803F8980
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8984
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 803F8988
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F898C
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8990
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 803F8994
  fcmp(c,0,c->f[2],c->f[27]); // 803F8998
  if (!crb(c,1)) { goto L_803F89E4; } // 803F899C
  fcmp(c,0,c->f[2],c->f[29]); // 803F89A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803F89A4
  if (!crb(c,2)) { goto L_803F89B4; } // 803F89A8
  c->f[2]=c->f[27]; // 803F89AC
  goto L_803F89CC; // 803F89B0
L_803F89B4:;
  c->f[0]=frsqrte(c->f[2]); // 803F89B4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 803F89B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[25]); // 803F89BC
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[26])); // 803F89C0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803F89C4
  c->f[2]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 803F89C8
L_803F89CC:;
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F89CC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F89D0
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803F89D4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803F89D8
  {uint32_t ea=c->r[24]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F89DC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 803F89E0
L_803F89E4:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 803F89E4
  c->r[0]=c->r[19]^0x80000000u; // 803F89E8
  W32(c->r[1]+0x000000CCu,c->r[0]); // 803F89EC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803F89F0
  c->r[0]=R32(c->r[30]+0x000000C4u); // 803F89F4
  c->r[3]=c->r[3]^0x80000000u; // 803F89F8
  W32(c->r[1]+0x000000C4u,c->r[3]); // 803F89FC
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=RF64(ea);} // 803F8A00
  cmps(c,0,(int32_t)c->r[0],0); // 803F8A04
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 803F8A08
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[30]); // 803F8A0C
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F8A10
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 803F8A14
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8A18
  {uint32_t ea=c->r[21]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8A1C
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[2]); // 803F8A20
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[4]); // 803F8A24
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803F8A28
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803F8A2C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803F8A30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F8A34
  if (crb(c,2)) { goto L_803F8A5C; } // 803F8A38
  c->r[0]=R32(c->r[30]+0x000000BCu); // 803F8A3C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8A40
  c->r[0]=c->r[0]^0x80000000u; // 803F8A44
  W32(c->r[1]+0x000000CCu,c->r[0]); // 803F8A48
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=RF64(ea);} // 803F8A4C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[30]); // 803F8A50
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803F8A54
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F8A58
L_803F8A5C:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 803F8A5C
  cmps(c,0,(int32_t)c->r[0],0); // 803F8A60
  if (!crb(c,2)) { goto L_803F8AC8; } // 803F8A64
  c->r[3]=0u+0x80570000u; // 803F8A68
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8A6C
  {uint32_t ea=c->r[3]+0x00002BF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8A70
  c->r[0]=0u+0x00000000u; // 803F8A74
  fcmp(c,0,c->f[2],c->f[1]); // 803F8A78
  if (!crb(c,2)) { goto L_803F8AA4; } // 803F8A7C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8A80
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8A84
  fcmp(c,0,c->f[2],c->f[1]); // 803F8A88
  if (!crb(c,2)) { goto L_803F8AA4; } // 803F8A8C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8A90
  {uint32_t ea=c->r[26]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8A94
  fcmp(c,0,c->f[2],c->f[1]); // 803F8A98
  if (!crb(c,2)) { goto L_803F8AA4; } // 803F8A9C
  c->r[0]=0u+0x00000001u; // 803F8AA0
L_803F8AA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 803F8AA4
  if (crb(c,2)) { goto L_803F8AC8; } // 803F8AA8
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8AAC
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8AB0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8AB4
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->f[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803F8AB8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803F8ABC
  {uint32_t ea=c->r[23]+0x00000000u; psq_store(c,3,ea,0,0);} // 803F8AC0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 803F8AC4
L_803F8AC8:;
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8AC8
  c->f[1]=c->f[24]; // 803F8ACC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8AD0
  c->r[3]=c->r[30]|c->r[30]; // 803F8AD4
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 803F8AD8
  c->r[4]=c->r[16]|c->r[16]; // 803F8ADC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F8AE0
  {uint32_t ea=c->r[24]+0x00000000u; psq_store(c,3,ea,0,0);} // 803F8AE4
  c->r[5]=c->r[31]|c->r[31]; // 803F8AE8
  c->r[6]=c->r[29]+0x00001CACu; // 803F8AEC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 803F8AF0
  c->lr=0x803F8AF8u; f_803F81F0(c); // 803F8AF4
  c->r[3]=c->r[19]+0xFFFFFFFFu; // 803F8AF8
  c->r[0]=R32(c->r[29]+0x00001CACu); // 803F8AFC
  c->r[3]=c->r[3]^0x80000000u; // 803F8B00
  W32(c->r[1]+0x000000C4u,c->r[3]); // 803F8B04
  c->r[3]=c->r[1]+0x00000068u; // 803F8B08
  {uint32_t ea=c->r[23]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8B0C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 803F8B10
  c->r[4]=c->r[15]|c->r[15]; // 803F8B14
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F8B18
  c->r[3]=c->r[1]+0x00000070u; // 803F8B1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 803F8B20
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8B24
  {uint32_t ea=c->r[22]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8B28
  {double t0=S(c->f[4]+c->f[1]), t1=S(c->ps1[4]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8B2C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803F8B30
  {double t0=S(c->f[3]+c->f[2]), t1=S(c->ps1[3]+c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 803F8B34
  c->f[24]=c->ps1[24]=S(c->f[23]*c->f[0]); // 803F8B38
  {uint32_t ea=c->r[14]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8B3C
  c->f[1]=c->ps1[1]=S(c->f[4]); // 803F8B40
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F8B44
  c->f[0]=c->ps1[0]=S(c->f[22]+c->f[24]); // 803F8B48
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8B4C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[3]);} // 803F8B50
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 803F8B54
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 803F8B58
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 803F8B5C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[20]);} // 803F8B60
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[4]);} // 803F8B64
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8B68
  c->lr=0x803F8B70u; f_80401D64(c); // 803F8B6C
  cmps(c,0,(int32_t)c->r[17],0); // 803F8B70
  if (crb(c,2)) { goto L_803F8B84; } // 803F8B74
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8B78
  c->r[4]=c->r[15]|c->r[15]; // 803F8B7C
  c->lr=0x803F8B84u; f_80401D64(c); // 803F8B80
L_803F8B84:;
  c->r[3]=c->r[1]+0x00000068u; // 803F8B84
  c->r[0]=R32(c->r[29]+0x00001CACu); // 803F8B88
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F8B8C
  c->r[3]=c->r[1]+0x00000070u; // 803F8B90
  {uint32_t ea=c->r[23]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8B94
  c->f[0]=c->ps1[0]=S(c->f[22]+c->f[24]); // 803F8B98
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8B9C
  c->r[4]=c->r[15]|c->r[15]; // 803F8BA0
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8BA4
  {uint32_t ea=c->r[22]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8BA8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803F8BAC
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 803F8BB0
  {uint32_t ea=c->r[14]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8BB4
  c->f[1]=c->ps1[1]=S(c->f[4]); // 803F8BB8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F8BBC
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8BC0
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[3]);} // 803F8BC4
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 803F8BC8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 803F8BCC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 803F8BD0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[19]);} // 803F8BD4
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[4]);} // 803F8BD8
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8BDC
  c->lr=0x803F8BE4u; f_80401D64(c); // 803F8BE0
  {uint32_t ea=c->r[21]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8BE4
  c->r[3]=c->r[30]|c->r[30]; // 803F8BE8
  c->r[4]=c->r[19]|c->r[19]; // 803F8BEC
  c->r[5]=c->r[31]|c->r[31]; // 803F8BF0
  c->r[6]=c->r[29]+0x00001CACu; // 803F8BF4
  c->lr=0x803F8BFCu; f_803F81F0(c); // 803F8BF8
  c->r[3]=c->r[1]+0x00000040u; // 803F8BFC
  c->r[0]=R32(c->r[29]+0x00001CACu); // 803F8C00
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F8C04
  c->f[0]=c->ps1[0]=S(c->f[21]+c->f[24]); // 803F8C08
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8C0C
  c->r[4]=c->r[15]|c->r[15]; // 803F8C10
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8C14
  {double t0=S(c->f[4]+c->f[1]), t1=S(c->ps1[4]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8C18
  {uint32_t ea=c->r[25]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8C1C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803F8C20
  {double t0=S(c->f[3]+c->f[2]), t1=S(c->ps1[3]+c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 803F8C24
  {uint32_t ea=c->r[14]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8C28
  c->f[1]=c->ps1[1]=S(c->f[4]); // 803F8C2C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F8C30
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8C34
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[3]);} // 803F8C38
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 803F8C3C
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 803F8C40
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 803F8C44
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[20]);} // 803F8C48
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[4]);} // 803F8C4C
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8C50
  c->lr=0x803F8C58u; f_80401D64(c); // 803F8C54
  c->r[3]=c->r[1]+0x00000040u; // 803F8C58
  c->r[0]=R32(c->r[29]+0x00001CACu); // 803F8C5C
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,4,ea,0,0);} // 803F8C60
  c->f[0]=c->ps1[0]=S(c->f[21]+c->f[24]); // 803F8C64
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8C68
  c->r[4]=c->r[15]|c->r[15]; // 803F8C6C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8C70
  {double t0=S(c->f[4]-c->f[1]), t1=S(c->ps1[4]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8C74
  {uint32_t ea=c->r[25]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8C78
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803F8C7C
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 803F8C80
  {uint32_t ea=c->r[14]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8C84
  c->f[1]=c->ps1[1]=S(c->f[4]); // 803F8C88
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F8C8C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8C90
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[3]);} // 803F8C94
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 803F8C98
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 803F8C9C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 803F8CA0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[19]);} // 803F8CA4
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[4]);} // 803F8CA8
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8CAC
  c->lr=0x803F8CB4u; f_80401D64(c); // 803F8CB0
L_803F8CB4:;
  c->r[3]=c->r[1]+0x00000040u; // 803F8CB4
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8CB8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F8CBC
  c->r[3]=c->r[1]+0x00000068u; // 803F8CC0
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8CC4
  c->r[16]=c->r[19]|c->r[19]; // 803F8CC8
  {uint32_t ea=c->r[25]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8CCC
  c->r[17]=0u+0x00000001u; // 803F8CD0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8CD4
  c->r[3]=c->r[1]+0x00000070u; // 803F8CD8
  {uint32_t ea=c->r[21]+0x00000030u; c->f[24]=c->ps1[24]=RF32(ea);} // 803F8CDC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8CE0
  {uint32_t ea=c->r[23]+0x00000000u; psq_store(c,3,ea,0,0);} // 803F8CE4
  {uint32_t ea=c->r[22]+0x00000000u; psq_store(c,2,ea,0,0);} // 803F8CE8
L_803F8CEC:;
  c->r[18]=addc(c,c->r[18],0xFFFFFFFFu,0); cr0(c,c->r[18]); // 803F8CEC
  if (!crb(c,0)) { goto L_803F8CFC; } // 803F8CF0
  c->r[3]=R32(c->r[31]+0x000000A8u); // 803F8CF4
  c->r[18]=c->r[3]+0xFFFFFFFFu; // 803F8CF8
L_803F8CFC:;
  c->r[19]=c->r[19]+0x00000001u; // 803F8CFC
L_803F8D00:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 803F8D00
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[3]); // 803F8D04
  if (crb(c,0)) { IRQCHK(c); goto L_803F873C; } // 803F8D08
  c->r[0]=R32(c->r[1]+0x000000E0u); // 803F8D0C
  cmps(c,0,(int32_t)c->r[0],0); // 803F8D10
  if (crb(c,2)) { goto L_803F8D24; } // 803F8D14
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8D18
  c->r[4]=c->r[15]|c->r[15]; // 803F8D1C
  c->lr=0x803F8D24u; f_80401D64(c); // 803F8D20
L_803F8D24:;
  c->r[3]=R32(c->r[31]+0x00000068u); // 803F8D24
  cmps(c,0,(int32_t)c->r[3],0); // 803F8D28
  if (crb(c,2)) { goto L_803F8D38; } // 803F8D2C
  c->r[0]=0u+0x00000000u; // 803F8D30
  W32(c->r[3]+0x000000A4u,c->r[0]); // 803F8D34
L_803F8D38:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F8D38
  c->r[0]=R8(c->r[3]+0x00000004u); // 803F8D3C
  cmps(c,0,(int32_t)c->r[0],0); // 803F8D40
  if (crb(c,2)) { goto L_803F8D58; } // 803F8D44
  c->r[3]=R32(c->r[30]+0x00000098u); // 803F8D48
  c->r[4]=0u+0x00000000u; // 803F8D4C
  c->r[5]=0u+0x00000004u; // 803F8D50
  c->lr=0x803F8D58u; f_80402230(c); // 803F8D54
L_803F8D58:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 803F8D58
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 803F8D5C
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 803F8D60
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 803F8D64
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 803F8D68
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 803F8D6C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,28,ea,0,0);} // 803F8D70
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[28]=RF64(ea);} // 803F8D74
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,27,ea,0,0);} // 803F8D78
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[27]=RF64(ea);} // 803F8D7C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,26,ea,0,0);} // 803F8D80
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[26]=RF64(ea);} // 803F8D84
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,25,ea,0,0);} // 803F8D88
  {uint32_t ea=c->r[1]+0x00000190u; c->f[25]=RF64(ea);} // 803F8D8C
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,24,ea,0,0);} // 803F8D90
  {uint32_t ea=c->r[1]+0x00000180u; c->f[24]=RF64(ea);} // 803F8D94
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,23,ea,0,0);} // 803F8D98
  {uint32_t ea=c->r[1]+0x00000170u; c->f[23]=RF64(ea);} // 803F8D9C
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,22,ea,0,0);} // 803F8DA0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[22]=RF64(ea);} // 803F8DA4
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,21,ea,0,0);} // 803F8DA8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[21]=RF64(ea);} // 803F8DAC
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,20,ea,0,0);} // 803F8DB0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[20]=RF64(ea);} // 803F8DB4
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,19,ea,0,0);} // 803F8DB8
  c->r[11]=c->r[1]+0x00000130u; // 803F8DBC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[19]=RF64(ea);} // 803F8DC0
  c->lr=0x803F8DC8u; f_803ADD54(c); // 803F8DC4
  c->r[0]=R32(c->r[1]+0x00000204u); // 803F8DC8
  c->lr=c->r[0]; // 803F8DCC
  c->r[1]=c->r[1]+0x00000200u; // 803F8DD0
  return; // 803F8DD4
}

// fn_803F8DD8
void f_803F8DD8(Ctx* __restrict c) {
  trace_call(0x803F8DD8u);
  c->r[3]=0u+0x80570000u; // 803F8DD8
  c->r[3]=c->r[3]+0x000040A0u; // 803F8DDC
  return; // 803F8DE0
}

// fn_803F8DE4
void f_803F8DE4(Ctx* __restrict c) {
  trace_call(0x803F8DE4u);
  c->r[3]=R8(c->r[3]+0x00000000u); // 803F8DE4
  return; // 803F8DE8
}

// fn_803F8DEC
void f_803F8DEC(Ctx* __restrict c) {
  trace_call(0x803F8DECu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F8DEC
  c->r[0]=c->lr; // 803F8DF0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803F8DF4
  c->r[11]=c->r[1]+0x000000C0u; // 803F8DF8
  c->lr=0x803F8E00u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F8DFC
  c->r[31]=R32(c->r[4]+0x000000B8u); // 803F8E00
  c->r[26]=c->r[3]|c->r[3]; // 803F8E04
  c->r[30]=c->r[4]|c->r[4]; // 803F8E08
  cmps(c,0,(int32_t)c->r[31],0); // 803F8E0C
  if (crb(c,2)) { goto L_803F8E18; } // 803F8E10
  goto L_803F8E1C; // 803F8E14
L_803F8E18:;
  c->r[31]=R32(c->r[3]+0x00000098u); // 803F8E18
L_803F8E1C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803F8E1C
  if (crb(c,2)) { goto L_803F9160; } // 803F8E20
  c->r[5]=R32(c->r[4]+0x00000068u); // 803F8E24
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F8E28
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8E2C
  cmps(c,0,(int32_t)c->r[5],0); // 803F8E30
  {uint32_t ea=c->r[4]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8E34
  {uint32_t ea=c->r[4]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8E38
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 803F8E3C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 803F8E40
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803F8E44
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 803F8E48
  if (crb(c,2)) { goto L_803F8E78; } // 803F8E4C
  c->r[3]=c->r[1]+0x00000038u; // 803F8E50
  c->r[4]=c->r[1]+0x00000040u; // 803F8E54
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F8E58
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,0,0);} // 803F8E5C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8E60
  {uint32_t ea=c->r[5]+0x00000018u; psq_load(c,3,ea,0,0);} // 803F8E64
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F8E68
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8E6C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8E70
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803F8E74
L_803F8E78:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803F8E78
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F8E7C
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F8E80
  c->ctr=c->r[12]; // 803F8E84
  if (true) { c->lr=0x803F8E8Cu; dispatch(c,c->ctr); } // 803F8E88
  c->r[6]=c->r[1]+0x00000038u; // 803F8E8C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8E90
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F8E94
  c->r[5]=c->r[1]+0x00000040u; // 803F8E98
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 803F8E9C
  c->r[4]=c->r[1]+0x00000028u; // 803F8EA0
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803F8EA4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8EA8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8EAC
  {double t0=S(c->f[3]-c->f[1]), t1=S(c->ps1[3]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8EB0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 803F8EB4
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F8EB8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803F8EBC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 803F8EC0
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F8EC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 803F8EC8
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[2]); // 803F8ECC
  fcmp(c,0,c->f[0],c->f[3]); // 803F8ED0
  if (!crb(c,2)) { goto L_803F8EDC; } // 803F8ED4
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803F8ED8
L_803F8EDC:;
  {uint32_t ea=c->r[30]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F8EDC
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8EE0
  {uint32_t ea=c->r[2]+0xFFFFA8A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F8EE4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 803F8EE8
  {uint32_t ea=c->r[2]+0xFFFFA89Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8EEC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[3]); // 803F8EF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803F8EF4
  fcmp(c,0,c->f[1],c->f[0]); // 803F8EF8
  if (crb(c,0)) { goto L_803F9160; } // 803F8EFC
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8F00
  c->r[27]=c->r[1]+0x00000078u; // 803F8F04
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803F8F08
  c->r[3]=c->r[1]+0x00000080u; // 803F8F0C
  c->r[28]=c->r[1]+0x00000088u; // 803F8F10
  c->r[29]=c->r[1]+0x00000098u; // 803F8F14
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8F18
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803F8F1C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8F20
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803F8F24
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F8F28
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803F8F2C
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 803F8F30
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F8F34
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803F8F38
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8F3C
  {uint32_t ea=c->r[30]+0x00000018u; psq_load(c,0,ea,0,0);} // 803F8F40
  {uint32_t ea=c->r[30]+0x00000020u; psq_load(c,1,ea,0,0);} // 803F8F44
  {uint32_t ea=c->r[28]+0x00000008u; psq_store(c,1,ea,0,0);} // 803F8F48
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8F4C
  {uint32_t ea=c->r[30]+0x00000028u; psq_load(c,0,ea,0,0);} // 803F8F50
  {uint32_t ea=c->r[30]+0x00000030u; psq_load(c,1,ea,0,0);} // 803F8F54
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,1,ea,0,0);} // 803F8F58
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F8F5C
  c->r[0]=R32(c->r[26]+0x000000B0u); // 803F8F60
  cmps(c,0,(int32_t)c->r[0],0); // 803F8F64
  if (crb(c,2)) { goto L_803F900C; } // 803F8F68
  c->r[12]=R32(c->r[31]+0x00000000u); // 803F8F6C
  c->r[3]=c->r[31]|c->r[31]; // 803F8F70
  c->r[12]=R32(c->r[12]+0x00000014u); // 803F8F74
  c->ctr=c->r[12]; // 803F8F78
  if (true) { c->lr=0x803F8F80u; dispatch(c,c->ctr); } // 803F8F7C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803F8F80
  c->r[4]=c->r[1]+0x00000018u; // 803F8F84
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F8F88
  c->r[5]=c->r[1]+0x00000020u; // 803F8F8C
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8F90
  c->r[6]=c->r[1]+0x00000008u; // 803F8F94
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F8F98
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F8F9C
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F8FA0
  {double t0=S(c->f[3]*c->f[1]), t1=S(c->ps1[3]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F8FA4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F8FA8
  c->r[3]=c->r[1]+0x00000010u; // 803F8FAC
  {double t0=S(c->f[3]*c->f[2]), t1=S(c->ps1[3]*c->ps1[2]); c->f[3]=t0; c->ps1[3]=t1;} // 803F8FB0
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803F8FB4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[6]=c->ps1[6]=RF32(ea);} // 803F8FB8
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803F8FBC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F8FC0
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803F8FC4
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803F8FC8
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803F8FCC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,8,ea,0,0);} // 803F8FD0
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803F8FD4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,9,ea,0,0);} // 803F8FD8
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803F8FDC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803F8FE0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803F8FE4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803F8FE8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803F8FEC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803F8FF0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F8FF4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F8FF8
  {double t0=S(c->f[8]-c->f[0]), t1=S(c->ps1[8]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803F8FFC
  {double t0=S(c->f[9]-c->f[1]), t1=S(c->ps1[9]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F9000
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F9004
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F9008
L_803F900C:;
  c->r[7]=R32(c->r[30]+0x00000068u); // 803F900C
  cmps(c,0,(int32_t)c->r[7],0); // 803F9010
  if (crb(c,2)) { goto L_803F90E0; } // 803F9014
  c->r[0]=R32(c->r[7]+0x000000B8u); // 803F9018
  cmps(c,0,(int32_t)c->r[0],0); // 803F901C
  if (crb(c,2)) { goto L_803F90B4; } // 803F9020
  c->r[6]=c->r[1]+0x00000018u; // 803F9024
  c->r[4]=c->r[1]+0x00000020u; // 803F9028
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F902C
  c->r[5]=c->r[7]+0x00000020u; // 803F9030
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F9034
  c->r[3]=c->r[1]+0x00000078u; // 803F9038
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F903C
  c->r[4]=c->r[3]|c->r[3]; // 803F9040
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,3,ea,0,0);} // 803F9044
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F9048
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803F904C
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F9050
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F9054
  c->f[7]=c->ps1[7]=S(c->f[1]); // 803F9058
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803F905C
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,1,ea,0,0);} // 803F9060
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F9064
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,3,ea,0,0);} // 803F9068
  {uint32_t ea=c->r[7]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F906C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803F9070
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803F9074
  {uint32_t ea=c->r[7]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 803F9078
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[4]); // 803F907C
  {uint32_t ea=c->r[7]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F9080
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803F9084
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803F9088
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803F908C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803F9090
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803F9094
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803F9098
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803F909C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803F90A0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803F90A4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803F90A8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803F90AC
  c->lr=0x803F90B4u; f_803E2FB4(c); // 803F90B0
L_803F90B4:;
  c->r[3]=R32(c->r[30]+0x00000068u); // 803F90B4
  c->r[4]=c->r[1]+0x00000018u; // 803F90B8
  c->r[5]=c->r[1]+0x00000020u; // 803F90BC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803F90C0
  {uint32_t ea=c->r[3]+0x00000090u; psq_load(c,2,ea,0,0);} // 803F90C4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 803F90C8
  {uint32_t ea=c->r[3]+0x00000098u; psq_load(c,3,ea,0,0);} // 803F90CC
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803F90D0
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803F90D4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 803F90D8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803F90DC
L_803F90E0:;
  {uint32_t ea=c->r[1]+0x00000078u; c->f[11]=c->ps1[11]=RF32(ea);} // 803F90E0
  c->r[3]=c->r[31]|c->r[31]; // 803F90E4
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 803F90E8
  c->r[6]=c->r[30]|c->r[30]; // 803F90EC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[9]=c->ps1[9]=RF32(ea);} // 803F90F0
  c->r[4]=c->r[1]+0x00000018u; // 803F90F4
  {uint32_t ea=c->r[1]+0x00000084u; c->f[8]=c->ps1[8]=RF32(ea);} // 803F90F8
  c->r[5]=c->r[1]+0x00000048u; // 803F90FC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[7]=c->ps1[7]=RF32(ea);} // 803F9100
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803F9104
  {uint32_t ea=c->r[1]+0x00000090u; c->f[5]=c->ps1[5]=RF32(ea);} // 803F9108
  {uint32_t ea=c->r[1]+0x00000094u; c->f[4]=c->ps1[4]=RF32(ea);} // 803F910C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803F9110
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803F9114
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F9118
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F911C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 803F9120
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 803F9124
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[9]);} // 803F9128
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[8]);} // 803F912C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[7]);} // 803F9130
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[6]);} // 803F9134
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[5]);} // 803F9138
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[4]);} // 803F913C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 803F9140
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 803F9144
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 803F9148
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 803F914C
  c->r[12]=R32(c->r[31]+0x00000000u); // 803F9150
  c->r[12]=R32(c->r[12]+0x00000018u); // 803F9154
  c->ctr=c->r[12]; // 803F9158
  if (true) { c->lr=0x803F9160u; dispatch(c,c->ctr); } // 803F915C
L_803F9160:;
  c->r[11]=c->r[1]+0x000000C0u; // 803F9160
  c->lr=0x803F9168u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F9164
  c->r[0]=R32(c->r[1]+0x000000C4u); // 803F9168
  c->lr=c->r[0]; // 803F916C
  c->r[1]=c->r[1]+0x000000C0u; // 803F9170
  return; // 803F9174
}

// fn_803F9178
void f_803F9178(Ctx* __restrict c) {
  trace_call(0x803F9178u);
  {uint32_t ea=c->r[1]+0xFFFFFE20u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F9178
  c->r[0]=c->lr; // 803F917C
  W32(c->r[1]+0x000001E4u,c->r[0]); // 803F9180
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[31]);} // 803F9184
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,31,ea,0,0);} // 803F9188
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[30]);} // 803F918C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,30,ea,0,0);} // 803F9190
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[29]);} // 803F9194
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,29,ea,0,0);} // 803F9198
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[28]);} // 803F919C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,28,ea,0,0);} // 803F91A0
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[27]);} // 803F91A4
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,27,ea,0,0);} // 803F91A8
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[26]);} // 803F91AC
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,26,ea,0,0);} // 803F91B0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[25]);} // 803F91B4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,25,ea,0,0);} // 803F91B8
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[24]);} // 803F91BC
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,24,ea,0,0);} // 803F91C0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[23]);} // 803F91C4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,23,ea,0,0);} // 803F91C8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[22]);} // 803F91CC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,22,ea,0,0);} // 803F91D0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[21]);} // 803F91D4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,21,ea,0,0);} // 803F91D8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[20]);} // 803F91DC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,20,ea,0,0);} // 803F91E0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[19]);} // 803F91E4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,19,ea,0,0);} // 803F91E8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[18]);} // 803F91EC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,18,ea,0,0);} // 803F91F0
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[17]);} // 803F91F4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,17,ea,0,0);} // 803F91F8
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[16]);} // 803F91FC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,16,ea,0,0);} // 803F9200
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[15]);} // 803F9204
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,15,ea,0,0);} // 803F9208
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[14]);} // 803F920C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,14,ea,0,0);} // 803F9210
  c->r[11]=c->r[1]+0x000000C0u; // 803F9214
  c->lr=0x803F921Cu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803F9218
  c->r[0]=0u+0x43300000u; // 803F921C
  c->r[19]=c->r[4]|c->r[4]; // 803F9220
  W32(c->r[1]+0x00000040u,c->r[0]); // 803F9224
  c->r[18]=c->r[3]|c->r[3]; // 803F9228
  c->r[4]=R32(c->r[3]+0x0000009Cu); // 803F922C
  c->r[20]=c->r[5]|c->r[5]; // 803F9230
  W32(c->r[1]+0x00000048u,c->r[0]); // 803F9234
  c->r[21]=c->r[6]|c->r[6]; // 803F9238
  c->r[3]=c->r[19]|c->r[19]; // 803F923C
  c->lr=0x803F9244u; f_803F5A1C(c); // 803F9240
  c->f[15]=c->f[1]; // 803F9244
  c->r[4]=c->r[19]|c->r[19]; // 803F9248
  c->r[3]=c->r[18]+0x00000178u; // 803F924C
  c->lr=0x803F9254u; f_803E3900(c); // 803F9250
  c->f[17]=c->f[1]; // 803F9254
  c->r[4]=c->r[19]|c->r[19]; // 803F9258
  c->f[1]=c->f[15]; // 803F925C
  c->r[3]=c->r[18]+0x00000158u; // 803F9260
  c->lr=0x803F9268u; f_803E3900(c); // 803F9264
  c->f[18]=c->f[1]; // 803F9268
  c->f[1]=c->f[17]; // 803F926C
  c->lr=0x803F9274u; f_803F41FC(c); // 803F9270
  c->f[14]=c->f[1]; // 803F9274
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F9278
  c->r[4]=c->r[19]|c->r[19]; // 803F927C
  c->r[3]=c->r[18]+0x00000138u; // 803F9280
  c->lr=0x803F9288u; f_803E3900(c); // 803F9284
  c->f[1]=c->ps1[1]=S(c->f[18]*c->f[1]); // 803F9288
  c->lr=0x803F9290u; f_803F41FC(c); // 803F928C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[14]); // 803F9290
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9294
  c->r[3]=c->r[1]+0x00000030u; // 803F9298
  c->f[14]=c->ps1[14]=S(c->f[0]*c->f[1]); // 803F929C
  c->lr=0x803F92A4u; f_803F9978(c); // 803F92A0
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F92A4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 803F92A8
  {uint32_t ea=c->r[20]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F92AC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803F92B0
  {uint32_t ea=c->r[20]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F92B4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 803F92B8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[14]);} // 803F92BC
  c->lr=0x803F92C4u; f_803E99C8(c); // 803F92C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F92C4
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F92C8
  c->ctr=c->r[12]; // 803F92CC
  if (true) { c->lr=0x803F92D4u; dispatch(c,c->ctr); } // 803F92D0
  c->r[16]=c->r[3]|c->r[3]; // 803F92D4
  c->r[3]=c->r[1]+0x00000020u; // 803F92D8
  c->lr=0x803F92E0u; f_803E49FC(c); // 803F92DC
  c->r[4]=c->r[16]|c->r[16]; // 803F92E0
  c->r[5]=c->r[20]|c->r[20]; // 803F92E4
  c->r[3]=c->r[1]+0x00000020u; // 803F92E8
  c->lr=0x803F92F0u; f_803E4A00(c); // 803F92EC
  c->r[3]=c->r[1]+0x00000020u; // 803F92F0
  c->lr=0x803F92F8u; f_803F42C4(c); // 803F92F4
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F92F8
  fcmp(c,0,c->f[0],c->f[1]); // 803F92FC
  if (!crb(c,2)) { goto L_803F9308; } // 803F9300
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F9304
L_803F9308:;
  c->f[2]=c->ps1[2]=S(c->f[14]*c->f[14]); // 803F9308
  {uint32_t ea=c->r[2]+0xFFFFA8A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F930C
  c->r[28]=R32(c->r[18]+0x00000130u); // 803F9310
  c->r[27]=R32(c->r[18]+0x00000134u); // 803F9314
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 803F9318
  c->f[14]=c->ps1[14]=S(c->f[0]*c->f[1]); // 803F931C
  c->lr=0x803F9324u; f_803F8DD8(c); // 803F9320
  c->r[16]=c->r[3]|c->r[3]; // 803F9324
  c->lr=0x803F932Cu; f_803F8DE4(c); // 803F9328
  cmps(c,0,(int32_t)c->r[3],0); // 803F932C
  if (crb(c,2)) { goto L_803F9340; } // 803F9330
  c->r[28]=0u+0x00000004u; // 803F9334
  c->r[27]=0u+0x00000004u; // 803F9338
  goto L_803F93FC; // 803F933C
L_803F9340:;
  c->r[3]=c->r[16]|c->r[16]; // 803F9340
  c->r[4]=0u+0x00000000u; // 803F9344
  c->lr=0x803F934Cu; f_803F9960(c); // 803F9348
  fcmp(c,0,c->f[14],c->f[1]); // 803F934C
  if (!crb(c,0)) { goto L_803F93A8; } // 803F9350
  cmps(c,0,(int32_t)c->r[28],4); // 803F9354
  if (!crb(c,1)) { goto L_803F937C; } // 803F9358
  c->r[3]=0u+0x55550000u; // 803F935C
  c->r[0]=c->r[3]+0x00005556u; // 803F9360
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[28])>>32); // 803F9364
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803F9368
  c->r[28]=c->r[3]+c->r[0]; // 803F936C
  cmps(c,0,(int32_t)c->r[28],4); // 803F9370
  if (!crb(c,0)) { goto L_803F937C; } // 803F9374
  c->r[28]=0u+0x00000004u; // 803F9378
L_803F937C:;
  cmps(c,0,(int32_t)c->r[27],4); // 803F937C
  if (!crb(c,1)) { goto L_803F93FC; } // 803F9380
  c->r[3]=0u+0x55550000u; // 803F9384
  c->r[0]=c->r[3]+0x00005556u; // 803F9388
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[27])>>32); // 803F938C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803F9390
  c->r[27]=c->r[3]+c->r[0]; // 803F9394
  cmps(c,0,(int32_t)c->r[27],4); // 803F9398
  if (!crb(c,0)) { goto L_803F93FC; } // 803F939C
  c->r[27]=0u+0x00000004u; // 803F93A0
  goto L_803F93FC; // 803F93A4
L_803F93A8:;
  c->r[3]=c->r[16]|c->r[16]; // 803F93A8
  c->r[4]=0u+0x00000001u; // 803F93AC
  c->lr=0x803F93B4u; f_803F9960(c); // 803F93B0
  fcmp(c,0,c->f[14],c->f[1]); // 803F93B4
  if (!crb(c,0)) { goto L_803F93FC; } // 803F93B8
  cmps(c,0,(int32_t)c->r[28],4); // 803F93BC
  if (!crb(c,1)) { goto L_803F93DC; } // 803F93C0
  c->r[0]=rotl(c->r[28],1)&0x00000001u; // 803F93C4
  c->r[0]=c->r[0]+c->r[28]; // 803F93C8
  c->r[28]=sraw(c,c->r[0],1); // 803F93CC
  cmps(c,0,(int32_t)c->r[28],4); // 803F93D0
  if (!crb(c,0)) { goto L_803F93DC; } // 803F93D4
  c->r[28]=0u+0x00000004u; // 803F93D8
L_803F93DC:;
  cmps(c,0,(int32_t)c->r[27],4); // 803F93DC
  if (!crb(c,1)) { goto L_803F93FC; } // 803F93E0
  c->r[0]=rotl(c->r[27],1)&0x00000001u; // 803F93E4
  c->r[0]=c->r[0]+c->r[27]; // 803F93E8
  c->r[27]=sraw(c,c->r[0],1); // 803F93EC
  cmps(c,0,(int32_t)c->r[27],4); // 803F93F0
  if (!crb(c,0)) { goto L_803F93FC; } // 803F93F4
  c->r[27]=0u+0x00000004u; // 803F93F8
L_803F93FC:;
  c->f[1]=c->f[15]; // 803F93FC
  c->r[4]=c->r[19]|c->r[19]; // 803F9400
  c->r[3]=c->r[18]+0x000000B0u; // 803F9404
  c->lr=0x803F940Cu; f_803E3900(c); // 803F9408
  c->f[19]=c->f[1]; // 803F940C
  c->r[4]=c->r[19]|c->r[19]; // 803F9410
  c->f[1]=c->f[15]; // 803F9414
  c->r[3]=c->r[18]+0x000000D0u; // 803F9418
  c->lr=0x803F9420u; f_803E3900(c); // 803F941C
  c->f[20]=c->f[1]; // 803F9420
  c->r[4]=c->r[19]|c->r[19]; // 803F9424
  c->f[1]=c->f[15]; // 803F9428
  c->r[3]=c->r[18]+0x000000F0u; // 803F942C
  c->lr=0x803F9434u; f_803E3900(c); // 803F9430
  c->f[21]=c->f[1]; // 803F9434
  c->r[4]=c->r[19]|c->r[19]; // 803F9438
  c->f[1]=c->f[15]; // 803F943C
  c->r[3]=c->r[18]+0x00000110u; // 803F9440
  c->lr=0x803F9448u; f_803E3900(c); // 803F9444
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[1]);} // 803F9448
  c->lr=0x803F9450u; f_803F481C(c); // 803F944C
  c->r[0]=R32(c->r[18]+0x000000ACu); // 803F9450
  c->r[26]=c->r[3]+0x00001CACu; // 803F9454
  cmps(c,0,(int32_t)c->r[0],0); // 803F9458
  if (crb(c,2)) { goto L_803F9478; } // 803F945C
  c->f[1]=c->f[15]; // 803F9460
  c->r[3]=c->r[0]|c->r[0]; // 803F9464
  c->r[4]=c->r[26]|c->r[26]; // 803F9468
  c->r[5]=c->r[19]|c->r[19]; // 803F946C
  c->lr=0x803F9474u; f_803E6ED0(c); // 803F9470
  goto L_803F9480; // 803F9474
L_803F9478:;
  c->r[3]=c->r[26]|c->r[26]; // 803F9478
  c->lr=0x803F9480u; f_803F4CD0(c); // 803F947C
L_803F9480:;
  c->lr=0x803F9484u; f_803E99C8(c); // 803F9480
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F9484
  c->r[12]=R32(c->r[12]+0x00000100u); // 803F9488
  c->ctr=c->r[12]; // 803F948C
  if (true) { c->lr=0x803F9494u; dispatch(c,c->ctr); } // 803F9490
  c->r[22]=c->r[3]|c->r[3]; // 803F9494
  c->lr=0x803F949Cu; f_803E99C8(c); // 803F9498
  c->lr=0x803F94A0u; f_803F9970(c); // 803F949C
  c->r[0]=c->r[22]+0xFFFFFFFFu; // 803F94A0
  c->r[25]=R32(c->r[3]+0x00000000u); // 803F94A4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803F94A8
  c->r[24]=R32(c->r[3]+0x00000004u); // 803F94AC
  if (crb(c,0)) { goto L_803F94B8; } // 803F94B0
  c->r[27]=c->r[22]+0xFFFFFFFEu; // 803F94B4
L_803F94B8:;
  c->r[3]=c->r[28]+0xFFFFFFFFu; // 803F94B8
  c->r[0]=c->r[27]^0x80000000u; // 803F94BC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 803F94C0
  c->r[0]=c->r[3]^0x80000000u; // 803F94C4
  c->r[30]=c->r[27]+0x00000001u; // 803F94C8
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[22]=RF64(ea);} // 803F94CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803F94D0
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 803F94D4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 803F94D8
  c->r[29]=c->r[3]+0x00000002u; // 803F94DC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 803F94E0
  c->r[23]=0u+0x00000000u; // 803F94E4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[22]); // 803F94E8
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[23]=c->ps1[23]=RF32(ea);} // 803F94EC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[22]); // 803F94F0
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[27]=c->ps1[27]=RF32(ea);} // 803F94F4
  {uint32_t ea=c->r[2]+0xFFFFA89Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 803F94F8
  c->r[31]=0u+0x000000FFu; // 803F94FC
  c->f[16]=c->ps1[16]=S(c->f[23]/c->f[0]); // 803F9500
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9504
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 803F9508
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[24]=RF64(ea);} // 803F950C
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[25]=c->ps1[25]=RF32(ea);} // 803F9510
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 803F9514
  c->f[15]=c->ps1[15]=S(c->f[23]/c->f[1]); // 803F9518
  goto L_803F98B0; // 803F951C
L_803F9520:;
  c->r[0]=c->r[23]^0x80000000u; // 803F9520
  W32(c->r[1]+0x00000044u,c->r[0]); // 803F9524
  c->r[0]=R32(c->r[18]+0x00000198u); // 803F9528
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 803F952C
  cmps(c,0,(int32_t)c->r[0],0); // 803F9530
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[22]); // 803F9534
  c->f[14]=c->ps1[14]=S(c->f[0]*c->f[16]); // 803F9538
  c->f[31]=c->ps1[31]=S(c->f[17]*c->f[14]); // 803F953C
  if (crb(c,2)) { goto L_803F9550; } // 803F9540
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 803F9544
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[17]); // 803F9548
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 803F954C
L_803F9550:;
  c->f[2]=c->ps1[2]=S(c->f[14]*c->f[20]); // 803F9550
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 803F9554
  c->f[1]=c->f[14]; // 803F9558
  c->r[4]=c->r[19]|c->r[19]; // 803F955C
  c->r[3]=c->r[18]+0x00000138u; // 803F9560
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[2]); // 803F9564
  c->lr=0x803F956Cu; f_803E3900(c); // 803F9568
  c->r[0]=R32(c->r[18]+0x000000A8u); // 803F956C
  c->f[29]=c->ps1[29]=S(c->f[18]*c->f[1]); // 803F9570
  cmps(c,0,(int32_t)c->r[0],0); // 803F9574
  if (crb(c,2)) { goto L_803F95B8; } // 803F9578
  c->lr=0x803F9580u; f_803F481C(c); // 803F957C
  c->f[1]=c->f[14]; // 803F9580
  c->r[16]=c->r[3]+0x00001CB0u; // 803F9584
  c->r[3]=R32(c->r[18]+0x000000A8u); // 803F9588
  c->r[4]=c->r[16]|c->r[16]; // 803F958C
  c->r[5]=c->r[19]|c->r[19]; // 803F9590
  c->lr=0x803F9598u; f_803E6ED0(c); // 803F9594
  c->r[3]=c->r[16]|c->r[16]; // 803F9598
  c->r[4]=c->r[26]|c->r[26]; // 803F959C
  c->lr=0x803F95A4u; f_803F4CDC(c); // 803F95A0
  W8(c->r[16]+0x00000003u,c->r[31]); // 803F95A4
  c->r[3]=c->r[16]|c->r[16]; // 803F95A8
  c->lr=0x803F95B0u; f_803F5A7C(c); // 803F95AC
  c->r[22]=c->r[3]|c->r[3]; // 803F95B0
  goto L_803F95C8; // 803F95B4
L_803F95B8:;
  W8(c->r[26]+0x00000003u,c->r[31]); // 803F95B8
  c->r[3]=c->r[26]|c->r[26]; // 803F95BC
  c->lr=0x803F95C4u; f_803F5A7C(c); // 803F95C0
  c->r[22]=c->r[3]|c->r[3]; // 803F95C4
L_803F95C8:;
  c->r[5]=R32(c->r[19]+0x00000078u); // 803F95C8
  c->r[4]=0u+0x00000000u; // 803F95CC
  cmps(c,0,(int32_t)c->r[5],0); // 803F95D0
  if (crb(c,2)) { goto L_803F95EC; } // 803F95D4
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F95D8
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F95DC
  cmps(c,0,(int32_t)c->r[0],0); // 803F95E0
  if (crb(c,2)) { goto L_803F95EC; } // 803F95E4
  c->r[4]=0u+0x00000001u; // 803F95E8
L_803F95EC:;
  c->r[6]=R32(c->r[19]+0x0000006Cu); // 803F95EC
  c->r[7]=R32(c->r[6]+0x00000084u); // 803F95F0
  c->r[0]=0u-c->r[7]; // 803F95F4
  c->r[0]=c->r[0]|c->r[7]; // 803F95F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803F95FC
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 803F9600
  if (crb(c,2)) { goto L_803F977C; } // 803F9604
  c->r[4]=R32(c->r[19]+0x00000114u); // 803F9608
  cmps(c,0,(int32_t)c->r[5],0); // 803F960C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9610
  c->r[8]=rotl(c->r[22],16)&0x000000FFu; // 803F9614
  c->r[0]=rotl(c->r[4],8)&0x000000FFu; // 803F9618
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 803F961C
  c->r[3]=rotl(c->r[4],16)&0x000000FFu; // 803F9620
  c->r[9]=rotl(c->r[22],0)&0x000000FFu; // 803F9624
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 803F9628
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 803F962C
  W32(c->r[1]+0x00000044u,c->r[3]); // 803F9630
  c->r[4]=rotl(c->r[22],24)&0x000000FFu; // 803F9634
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[24]); // 803F9638
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 803F963C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 803F9640
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 803F9644
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[25]); // 803F9648
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[24]); // 803F964C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[24]); // 803F9650
  c->f[2]=c->ps1[2]=S(c->f[4]/c->f[25]); // 803F9654
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[25]); // 803F9658
  if (crb(c,2)) { goto L_803F967C; } // 803F965C
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F9660
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F9664
  cmps(c,0,(int32_t)c->r[0],0); // 803F9668
  if (crb(c,2)) { goto L_803F967C; } // 803F966C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9670
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 803F9674
  goto L_803F968C; // 803F9678
L_803F967C:;
  cmps(c,0,(int32_t)c->r[7],0); // 803F967C
  if (crb(c,2)) { goto L_803F968C; } // 803F9680
  {uint32_t ea=c->r[6]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9684
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 803F9688
L_803F968C:;
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 803F968C
  c->f[6]=c->ps1[6]=S(c->f[23]-c->f[0]); // 803F9690
  {uint32_t ea=c->r[1]+0x00000048u; c->f[4]=RF64(ea);} // 803F9694
  W32(c->r[1]+0x00000044u,c->r[8]); // 803F9698
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[24]); // 803F969C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[5]=RF64(ea);} // 803F96A0
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[24]); // 803F96A4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 803F96A8
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 803F96AC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 803F96B0
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 803F96B4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 803F96B8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 803F96BC
  c->r[3]=R32(c->r[1]+0x00000054u); // 803F96C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803F96C4
  cmps(c,0,(int32_t)c->r[0],255); // 803F96C8
  if (!crb(c,1)) { goto L_803F96D4; } // 803F96CC
  c->r[3]=0u+0x000000FFu; // 803F96D0
L_803F96D4:;
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 803F96D4
  c->f[5]=c->ps1[5]=S(c->f[23]-c->f[0]); // 803F96D8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 803F96DC
  W32(c->r[1]+0x00000044u,c->r[4]); // 803F96E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[24]); // 803F96E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[4]=RF64(ea);} // 803F96E8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[24]); // 803F96EC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803F96F0
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803F96F4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803F96F8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 803F96FC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 803F9700
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[1]);} // 803F9704
  c->r[5]=R32(c->r[1]+0x0000005Cu); // 803F9708
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 803F970C
  cmps(c,0,(int32_t)c->r[0],255); // 803F9710
  if (!crb(c,1)) { goto L_803F971C; } // 803F9714
  c->r[5]=0u+0x000000FFu; // 803F9718
L_803F971C:;
  W32(c->r[1]+0x0000004Cu,c->r[9]); // 803F971C
  c->f[4]=c->ps1[4]=S(c->f[23]-c->f[0]); // 803F9720
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 803F9724
  W32(c->r[1]+0x00000044u,c->r[9]); // 803F9728
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[24]); // 803F972C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 803F9730
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F9734
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[24]); // 803F9738
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803F973C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 803F9740
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F9744
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F9748
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 803F974C
  c->r[4]=R32(c->r[1]+0x00000064u); // 803F9750
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 803F9754
  cmps(c,0,(int32_t)c->r[0],255); // 803F9758
  if (!crb(c,1)) { goto L_803F9764; } // 803F975C
  c->r[4]=0u+0x000000FFu; // 803F9760
L_803F9764:;
  c->r[3]=rotl(c->r[3],16)&0x00FF0000u; // 803F9764
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 803F9768
  c->r[0]=rotl(c->r[5],8)&0x0000FF00u; // 803F976C
  c->r[3]=c->r[3]+0xFF000000u; // 803F9770
  c->r[0]=c->r[4]+c->r[0]; // 803F9774
  c->r[22]=c->r[3]+c->r[0]; // 803F9778
L_803F977C:;
  c->r[16]=c->r[25]|c->r[25]; // 803F977C
  c->r[17]=0u+0x00000000u; // 803F9780
  goto L_803F9818; // 803F9784
L_803F9788:;
  c->r[0]=c->r[17]^0x80000000u; // 803F9788
  W32(c->r[1]+0x00000044u,c->r[0]); // 803F978C
  c->r[3]=c->r[1]+0x00000010u; // 803F9790
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 803F9794
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[22]); // 803F9798
  c->f[14]=c->ps1[14]=S(c->f[0]*c->f[15]); // 803F979C
  c->lr=0x803F97A4u; f_803E49FC(c); // 803F97A0
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[14]); // 803F97A4
  c->r[3]=c->r[1]+0x0000000Cu; // 803F97A8
  c->r[4]=c->r[1]+0x00000008u; // 803F97AC
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[0]); // 803F97B0
  c->lr=0x803F97B8u; f_803E5CE4(c); // 803F97B4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F97B8
  c->r[3]=c->r[1]+0x00000010u; // 803F97BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F97C0
  c->r[4]=c->r[21]|c->r[21]; // 803F97C4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 803F97C8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 803F97CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803F97D0
  c->r[5]=c->r[3]|c->r[3]; // 803F97D4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803F97D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803F97DC
  c->lr=0x803F97E4u; f_803E541C(c); // 803F97E0
  c->r[4]=c->r[20]|c->r[20]; // 803F97E4
  c->r[3]=c->r[1]+0x00000010u; // 803F97E8
  c->lr=0x803F97F0u; f_803E52F8(c); // 803F97EC
  c->r[3]=c->r[16]|c->r[16]; // 803F97F0
  c->r[4]=c->r[1]+0x00000010u; // 803F97F4
  c->lr=0x803F97FCu; f_803F70A8(c); // 803F97F8
  c->f[0]=c->ps1[0]=S(c->f[14]*c->f[19]); // 803F97FC
  c->r[17]=c->r[17]+0x00000001u; // 803F9800
  c->f[0]=c->ps1[0]=S(c->f[21]+c->f[0]); // 803F9804
  {uint32_t ea=c->r[16]+0x00000014u; WF32(ea,c->f[0]);} // 803F9808
  {uint32_t ea=c->r[16]+0x00000010u; WF32(ea,c->f[30]);} // 803F980C
  W32(c->r[16]+0x0000000Cu,c->r[22]); // 803F9810
  c->r[16]=c->r[16]+0x00000018u; // 803F9814
L_803F9818:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[30]); // 803F9818
  if (crb(c,0)) { IRQCHK(c); goto L_803F9788; } // 803F981C
  cmps(c,0,(int32_t)c->r[23],0); // 803F9820
  if (!crb(c,1)) { goto L_803F98A0; } // 803F9824
  c->r[3]=R32(c->r[18]+0x000000A0u); // 803F9828
  c->r[5]=c->r[29]|c->r[29]; // 803F982C
  c->r[4]=0u+0x00000000u; // 803F9830
  c->lr=0x803F9838u; f_80402230(c); // 803F9834
  c->r[17]=c->r[24]|c->r[24]; // 803F9838
  c->r[16]=c->r[25]|c->r[25]; // 803F983C
  c->r[22]=c->r[27]+0x00000001u; // 803F9840
  c->r[15]=0u+0x00000000u; // 803F9844
  goto L_803F9898; // 803F9848
L_803F984C:;
  cmps(c,0,(int32_t)c->r[15],0); // 803F984C
  if (!crb(c,2)) { goto L_803F9860; } // 803F9850
  c->r[3]=R32(c->r[18]+0x000000A0u); // 803F9854
  c->r[4]=c->r[17]|c->r[17]; // 803F9858
  c->lr=0x803F9860u; f_80401D64(c); // 803F985C
L_803F9860:;
  c->r[3]=R32(c->r[18]+0x000000A0u); // 803F9860
  c->r[4]=c->r[17]|c->r[17]; // 803F9864
  c->lr=0x803F986Cu; f_80401D64(c); // 803F9868
  c->r[3]=R32(c->r[18]+0x000000A0u); // 803F986C
  c->r[4]=c->r[16]|c->r[16]; // 803F9870
  c->lr=0x803F9878u; f_80401D64(c); // 803F9874
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[27]); // 803F9878
  if (!crb(c,2)) { goto L_803F988C; } // 803F987C
  c->r[3]=R32(c->r[18]+0x000000A0u); // 803F9880
  c->r[4]=c->r[16]|c->r[16]; // 803F9884
  c->lr=0x803F988Cu; f_80401D64(c); // 803F9888
L_803F988C:;
  c->r[17]=c->r[17]+0x00000018u; // 803F988C
  c->r[16]=c->r[16]+0x00000018u; // 803F9890
  c->r[15]=c->r[15]+0x00000001u; // 803F9894
L_803F9898:;
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[22]); // 803F9898
  if (crb(c,0)) { IRQCHK(c); goto L_803F984C; } // 803F989C
L_803F98A0:;
  c->r[0]=c->r[25]|c->r[25]; // 803F98A0
  c->r[25]=c->r[24]|c->r[24]; // 803F98A4
  c->r[24]=c->r[0]|c->r[0]; // 803F98A8
  c->r[23]=c->r[23]+0x00000001u; // 803F98AC
L_803F98B0:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[28]); // 803F98B0
  if (crb(c,0)) { IRQCHK(c); goto L_803F9520; } // 803F98B4
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,31,ea,0,0);} // 803F98B8
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[31]=RF64(ea);} // 803F98BC
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,30,ea,0,0);} // 803F98C0
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[30]=RF64(ea);} // 803F98C4
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,29,ea,0,0);} // 803F98C8
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[29]=RF64(ea);} // 803F98CC
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,28,ea,0,0);} // 803F98D0
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[28]=RF64(ea);} // 803F98D4
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,27,ea,0,0);} // 803F98D8
  {uint32_t ea=c->r[1]+0x00000190u; c->f[27]=RF64(ea);} // 803F98DC
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,26,ea,0,0);} // 803F98E0
  {uint32_t ea=c->r[1]+0x00000180u; c->f[26]=RF64(ea);} // 803F98E4
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,25,ea,0,0);} // 803F98E8
  {uint32_t ea=c->r[1]+0x00000170u; c->f[25]=RF64(ea);} // 803F98EC
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,24,ea,0,0);} // 803F98F0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[24]=RF64(ea);} // 803F98F4
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,23,ea,0,0);} // 803F98F8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[23]=RF64(ea);} // 803F98FC
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,22,ea,0,0);} // 803F9900
  {uint32_t ea=c->r[1]+0x00000140u; c->f[22]=RF64(ea);} // 803F9904
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,21,ea,0,0);} // 803F9908
  {uint32_t ea=c->r[1]+0x00000130u; c->f[21]=RF64(ea);} // 803F990C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,20,ea,0,0);} // 803F9910
  {uint32_t ea=c->r[1]+0x00000120u; c->f[20]=RF64(ea);} // 803F9914
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,19,ea,0,0);} // 803F9918
  {uint32_t ea=c->r[1]+0x00000110u; c->f[19]=RF64(ea);} // 803F991C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,18,ea,0,0);} // 803F9920
  {uint32_t ea=c->r[1]+0x00000100u; c->f[18]=RF64(ea);} // 803F9924
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,17,ea,0,0);} // 803F9928
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[17]=RF64(ea);} // 803F992C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,16,ea,0,0);} // 803F9930
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[16]=RF64(ea);} // 803F9934
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,15,ea,0,0);} // 803F9938
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[15]=RF64(ea);} // 803F993C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,14,ea,0,0);} // 803F9940
  c->r[11]=c->r[1]+0x000000C0u; // 803F9944
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[14]=RF64(ea);} // 803F9948
  c->lr=0x803F9950u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803F994C
  c->r[0]=R32(c->r[1]+0x000001E4u); // 803F9950
  c->lr=c->r[0]; // 803F9954
  c->r[1]=c->r[1]+0x000001E0u; // 803F9958
  return; // 803F995C
}

// fn_803F9960
void f_803F9960(Ctx* __restrict c) {
  trace_call(0x803F9960u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803F9960
  c->r[3]=c->r[3]+c->r[0]; // 803F9964
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F9968
  return; // 803F996C
}

// fn_803F9970
void f_803F9970(Ctx* __restrict c) {
  trace_call(0x803F9970u);
  c->r[3]=c->r[3]+0x00000008u; // 803F9970
  return; // 803F9974
}

// fn_803F9978
void f_803F9978(Ctx* __restrict c) {
  trace_call(0x803F9978u);
  return; // 803F9978
}

// fn_803F997C
void f_803F997C(Ctx* __restrict c) {
  trace_call(0x803F997Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE20u; W32(ea,c->r[1]); c->r[1]=ea;} // 803F997C
  c->r[0]=c->lr; // 803F9980
  W32(c->r[1]+0x000001E4u,c->r[0]); // 803F9984
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[31]);} // 803F9988
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,31,ea,0,0);} // 803F998C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[30]);} // 803F9990
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,30,ea,0,0);} // 803F9994
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[29]);} // 803F9998
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,29,ea,0,0);} // 803F999C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[28]);} // 803F99A0
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,28,ea,0,0);} // 803F99A4
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[27]);} // 803F99A8
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,27,ea,0,0);} // 803F99AC
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[26]);} // 803F99B0
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,26,ea,0,0);} // 803F99B4
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[25]);} // 803F99B8
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,25,ea,0,0);} // 803F99BC
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[24]);} // 803F99C0
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,24,ea,0,0);} // 803F99C4
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[23]);} // 803F99C8
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,23,ea,0,0);} // 803F99CC
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[22]);} // 803F99D0
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,22,ea,0,0);} // 803F99D4
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[21]);} // 803F99D8
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,21,ea,0,0);} // 803F99DC
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[20]);} // 803F99E0
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,20,ea,0,0);} // 803F99E4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[19]);} // 803F99E8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,19,ea,0,0);} // 803F99EC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[18]);} // 803F99F0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,18,ea,0,0);} // 803F99F4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[17]);} // 803F99F8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,17,ea,0,0);} // 803F99FC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[16]);} // 803F9A00
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,16,ea,0,0);} // 803F9A04
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[15]);} // 803F9A08
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,15,ea,0,0);} // 803F9A0C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[14]);} // 803F9A10
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,14,ea,0,0);} // 803F9A14
  c->r[11]=c->r[1]+0x000000C0u; // 803F9A18
  c->lr=0x803F9A20u; f_803ADD08(c); // 803F9A1C
  c->r[0]=0u+0x43300000u; // 803F9A20
  c->r[16]=c->r[4]|c->r[4]; // 803F9A24
  W32(c->r[1]+0x00000038u,c->r[0]); // 803F9A28
  c->r[15]=c->r[3]|c->r[3]; // 803F9A2C
  c->r[4]=R32(c->r[3]+0x0000009Cu); // 803F9A30
  c->r[17]=c->r[5]|c->r[5]; // 803F9A34
  W32(c->r[1]+0x00000040u,c->r[0]); // 803F9A38
  c->r[18]=c->r[6]|c->r[6]; // 803F9A3C
  c->r[3]=c->r[16]|c->r[16]; // 803F9A40
  c->lr=0x803F9A48u; f_803F5A1C(c); // 803F9A44
  c->f[23]=c->f[1]; // 803F9A48
  c->r[4]=c->r[16]|c->r[16]; // 803F9A4C
  c->r[3]=c->r[15]+0x00000228u; // 803F9A50
  c->lr=0x803F9A58u; f_803E3900(c); // 803F9A54
  c->f[20]=c->f[1]; // 803F9A58
  c->lr=0x803F9A60u; f_803F481C(c); // 803F9A5C
  {uint32_t ea=c->r[17]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9A60
  c->r[14]=c->r[3]|c->r[3]; // 803F9A64
  {uint32_t ea=c->r[3]+0x00001CB8u; WF32(ea,c->f[0]);} // 803F9A68
  {uint32_t ea=c->r[17]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9A6C
  {uint32_t ea=c->r[3]+0x00001CBCu; WF32(ea,c->f[0]);} // 803F9A70
  {uint32_t ea=c->r[17]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9A74
  {uint32_t ea=c->r[3]+0x00001CC0u; WF32(ea,c->f[0]);} // 803F9A78
  {uint32_t ea=c->r[3]+0x00001CC4u; WF32(ea,c->f[20]);} // 803F9A7C
  c->lr=0x803F9A84u; f_803E99C8(c); // 803F9A80
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F9A84
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803F9A88
  c->ctr=c->r[12]; // 803F9A8C
  if (true) { c->lr=0x803F9A94u; dispatch(c,c->ctr); } // 803F9A90
  c->r[19]=c->r[3]|c->r[3]; // 803F9A94
  c->r[3]=c->r[1]+0x00000028u; // 803F9A98
  c->lr=0x803F9AA0u; f_803E49FC(c); // 803F9A9C
  c->r[4]=c->r[19]|c->r[19]; // 803F9AA0
  c->r[5]=c->r[17]|c->r[17]; // 803F9AA4
  c->r[3]=c->r[1]+0x00000028u; // 803F9AA8
  c->lr=0x803F9AB0u; f_803E4A00(c); // 803F9AAC
  c->r[3]=c->r[1]+0x00000028u; // 803F9AB0
  c->lr=0x803F9AB8u; f_803F42C4(c); // 803F9AB4
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9AB8
  fcmp(c,0,c->f[0],c->f[1]); // 803F9ABC
  if (!crb(c,2)) { goto L_803F9AC8; } // 803F9AC0
  {uint32_t ea=c->r[2]+0xFFFFA87Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803F9AC4
L_803F9AC8:;
  c->f[2]=c->ps1[2]=S(c->f[20]*c->f[20]); // 803F9AC8
  {uint32_t ea=c->r[2]+0xFFFFA8A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9ACC
  c->r[19]=R32(c->r[15]+0x0000019Cu); // 803F9AD0
  c->r[25]=R32(c->r[15]+0x000001A0u); // 803F9AD4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 803F9AD8
  c->f[14]=c->ps1[14]=S(c->f[0]*c->f[1]); // 803F9ADC
  c->lr=0x803F9AE4u; f_803F8DD8(c); // 803F9AE0
  c->r[20]=c->r[3]|c->r[3]; // 803F9AE4
  c->lr=0x803F9AECu; f_803F8DE4(c); // 803F9AE8
  cmps(c,0,(int32_t)c->r[3],0); // 803F9AEC
  if (crb(c,2)) { goto L_803F9B00; } // 803F9AF0
  c->r[19]=0u+0x00000004u; // 803F9AF4
  c->r[25]=0u+0x00000004u; // 803F9AF8
  goto L_803F9B64; // 803F9AFC
L_803F9B00:;
  c->r[3]=c->r[20]|c->r[20]; // 803F9B00
  c->r[4]=0u+0x00000000u; // 803F9B04
  c->lr=0x803F9B0Cu; f_803FA198(c); // 803F9B08
  fcmp(c,0,c->f[14],c->f[1]); // 803F9B0C
  if (!crb(c,0)) { goto L_803F9B64; } // 803F9B10
  cmps(c,0,(int32_t)c->r[19],4); // 803F9B14
  if (!crb(c,1)) { goto L_803F9B3C; } // 803F9B18
  c->r[3]=0u+0x55550000u; // 803F9B1C
  c->r[0]=c->r[3]+0x00005556u; // 803F9B20
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[19])>>32); // 803F9B24
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803F9B28
  c->r[19]=c->r[3]+c->r[0]; // 803F9B2C
  cmps(c,0,(int32_t)c->r[19],4); // 803F9B30
  if (!crb(c,0)) { goto L_803F9B3C; } // 803F9B34
  c->r[19]=0u+0x00000004u; // 803F9B38
L_803F9B3C:;
  cmps(c,0,(int32_t)c->r[25],4); // 803F9B3C
  if (!crb(c,1)) { goto L_803F9B64; } // 803F9B40
  c->r[3]=0u+0x55550000u; // 803F9B44
  c->r[0]=c->r[3]+0x00005556u; // 803F9B48
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[25])>>32); // 803F9B4C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803F9B50
  c->r[25]=c->r[3]+c->r[0]; // 803F9B54
  cmps(c,0,(int32_t)c->r[25],4); // 803F9B58
  if (!crb(c,0)) { goto L_803F9B64; } // 803F9B5C
  c->r[25]=0u+0x00000004u; // 803F9B60
L_803F9B64:;
  c->r[3]=c->r[20]|c->r[20]; // 803F9B64
  c->r[4]=0u+0x00000001u; // 803F9B68
  c->lr=0x803F9B70u; f_803FA198(c); // 803F9B6C
  fcmp(c,0,c->f[14],c->f[1]); // 803F9B70
  if (!crb(c,0)) { goto L_803F9BB8; } // 803F9B74
  cmps(c,0,(int32_t)c->r[19],4); // 803F9B78
  if (!crb(c,1)) { goto L_803F9B98; } // 803F9B7C
  c->r[0]=rotl(c->r[19],1)&0x00000001u; // 803F9B80
  c->r[0]=c->r[0]+c->r[19]; // 803F9B84
  c->r[19]=sraw(c,c->r[0],1); // 803F9B88
  cmps(c,0,(int32_t)c->r[19],4); // 803F9B8C
  if (!crb(c,0)) { goto L_803F9B98; } // 803F9B90
  c->r[19]=0u+0x00000004u; // 803F9B94
L_803F9B98:;
  cmps(c,0,(int32_t)c->r[25],4); // 803F9B98
  if (!crb(c,1)) { goto L_803F9BB8; } // 803F9B9C
  c->r[0]=rotl(c->r[25],1)&0x00000001u; // 803F9BA0
  c->r[0]=c->r[0]+c->r[25]; // 803F9BA4
  c->r[25]=sraw(c,c->r[0],1); // 803F9BA8
  cmps(c,0,(int32_t)c->r[25],4); // 803F9BAC
  if (!crb(c,0)) { goto L_803F9BB8; } // 803F9BB0
  c->r[25]=0u+0x00000004u; // 803F9BB4
L_803F9BB8:;
  c->r[0]=c->r[19]^0x80000000u; // 803F9BB8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803F9BBC
  c->r[0]=c->r[25]^0x80000000u; // 803F9BC0
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[4]=RF64(ea);} // 803F9BC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803F9BC8
  c->f[1]=c->f[23]; // 803F9BCC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 803F9BD0
  c->r[4]=c->r[16]|c->r[16]; // 803F9BD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=RF64(ea);} // 803F9BD8
  c->r[3]=c->r[15]+0x000001A8u; // 803F9BDC
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 803F9BE0
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F9BE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 803F9BE8
  c->f[19]=c->ps1[19]=S(c->f[2]/c->f[3]); // 803F9BEC
  c->f[18]=c->ps1[18]=S(c->f[2]/c->f[0]); // 803F9BF0
  c->lr=0x803F9BF8u; f_803E3900(c); // 803F9BF4
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F9BF8
  c->r[4]=c->r[16]|c->r[16]; // 803F9BFC
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9C00
  c->r[3]=c->r[15]+0x000001C8u; // 803F9C04
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 803F9C08
  c->f[1]=c->f[23]; // 803F9C0C
  c->f[16]=c->ps1[16]=S(c->f[2]-c->f[0]); // 803F9C10
  c->lr=0x803F9C18u; f_803E3900(c); // 803F9C14
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F9C18
  c->r[4]=c->r[16]|c->r[16]; // 803F9C1C
  {uint32_t ea=c->r[2]+0xFFFFA8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9C20
  c->r[3]=c->r[15]+0x000001E8u; // 803F9C24
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 803F9C28
  c->f[1]=c->f[23]; // 803F9C2C
  c->f[14]=c->ps1[14]=S(c->f[2]-c->f[0]); // 803F9C30
  c->lr=0x803F9C38u; f_803E3900(c); // 803F9C34
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9C38
  c->r[4]=c->r[16]|c->r[16]; // 803F9C3C
  c->r[3]=c->r[15]+0x00000208u; // 803F9C40
  c->f[17]=c->ps1[17]=S(c->f[0]*c->f[1]); // 803F9C44
  c->f[1]=c->f[23]; // 803F9C48
  c->lr=0x803F9C50u; f_803E3900(c); // 803F9C4C
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803F9C50
  c->f[0]=c->ps1[0]=S(c->f[14]-c->f[16]); // 803F9C54
  c->r[4]=c->r[16]|c->r[16]; // 803F9C58
  c->r[3]=c->r[15]+0x000000B0u; // 803F9C5C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 803F9C60
  c->f[0]=c->ps1[0]=S(c->f[19]*c->f[0]); // 803F9C64
  c->f[1]=c->f[23]; // 803F9C68
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 803F9C6C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[17]); // 803F9C70
  c->f[31]=c->ps1[31]=S(c->f[18]*c->f[0]); // 803F9C74
  c->lr=0x803F9C7Cu; f_803E3900(c); // 803F9C78
  c->f[21]=c->f[1]; // 803F9C7C
  c->r[4]=c->r[16]|c->r[16]; // 803F9C80
  c->f[1]=c->f[23]; // 803F9C84
  c->r[3]=c->r[15]+0x000000D0u; // 803F9C88
  c->lr=0x803F9C90u; f_803E3900(c); // 803F9C8C
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[1]);} // 803F9C90
  c->f[1]=c->f[23]; // 803F9C94
  c->r[4]=c->r[16]|c->r[16]; // 803F9C98
  c->r[3]=c->r[15]+0x000000F0u; // 803F9C9C
  c->lr=0x803F9CA4u; f_803E3900(c); // 803F9CA0
  c->f[22]=c->f[1]; // 803F9CA4
  c->r[4]=c->r[16]|c->r[16]; // 803F9CA8
  c->f[1]=c->f[23]; // 803F9CAC
  c->r[3]=c->r[15]+0x00000110u; // 803F9CB0
  c->lr=0x803F9CB8u; f_803E3900(c); // 803F9CB4
  c->r[3]=R32(c->r[15]+0x000000ACu); // 803F9CB8
  c->r[23]=c->r[14]+0x00001CACu; // 803F9CBC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[1]);} // 803F9CC0
  cmps(c,0,(int32_t)c->r[3],0); // 803F9CC4
  if (crb(c,2)) { goto L_803F9CE0; } // 803F9CC8
  c->f[1]=c->f[23]; // 803F9CCC
  c->r[4]=c->r[23]|c->r[23]; // 803F9CD0
  c->r[5]=c->r[16]|c->r[16]; // 803F9CD4
  c->lr=0x803F9CDCu; f_803E6ED0(c); // 803F9CD8
  goto L_803F9CE8; // 803F9CDC
L_803F9CE0:;
  c->r[3]=c->r[23]|c->r[23]; // 803F9CE0
  c->lr=0x803F9CE8u; f_803F4CD0(c); // 803F9CE4
L_803F9CE8:;
  c->lr=0x803F9CECu; f_803E99C8(c); // 803F9CE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803F9CEC
  c->r[12]=R32(c->r[12]+0x00000100u); // 803F9CF0
  c->ctr=c->r[12]; // 803F9CF4
  if (true) { c->lr=0x803F9CFCu; dispatch(c,c->ctr); } // 803F9CF8
  c->r[14]=c->r[3]|c->r[3]; // 803F9CFC
  c->lr=0x803F9D04u; f_803E99C8(c); // 803F9D00
  c->lr=0x803F9D08u; f_803F9970(c); // 803F9D04
  c->r[0]=c->r[14]+0xFFFFFFFFu; // 803F9D08
  c->r[22]=R32(c->r[3]+0x00000000u); // 803F9D0C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 803F9D10
  c->r[21]=R32(c->r[3]+0x00000004u); // 803F9D14
  if (crb(c,0)) { goto L_803F9D20; } // 803F9D18
  c->r[25]=c->r[14]+0xFFFFFFFEu; // 803F9D1C
L_803F9D20:;
  c->r[29]=c->r[25]+0x00000001u; // 803F9D20
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[27]=RF64(ea);} // 803F9D24
  c->r[3]=rotl(c->r[29],2)&0xFFFFFFFCu; // 803F9D28
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[23]=RF64(ea);} // 803F9D2C
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[24]=c->ps1[24]=RF32(ea);} // 803F9D30
  c->r[28]=c->r[3]+0x00000002u; // 803F9D34
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 803F9D38
  c->r[31]=c->r[19]+0x00000001u; // 803F9D3C
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[26]=c->ps1[26]=RF32(ea);} // 803F9D40
  c->r[24]=0u+0x00000000u; // 803F9D44
  c->r[14]=0u+0x000000FFu; // 803F9D48
  goto L_803FA0E8; // 803F9D4C
L_803F9D50:;
  c->r[0]=c->r[24]^0x80000000u; // 803F9D50
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803F9D54
  c->f[1]=c->f[16]; // 803F9D58
  c->r[3]=c->r[1]+0x00000014u; // 803F9D5C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803F9D60
  c->r[4]=c->r[1]+0x00000010u; // 803F9D64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 803F9D68
  c->f[15]=c->ps1[15]=S(c->f[0]*c->f[19]); // 803F9D6C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 803F9D70
  c->f[2]=c->ps1[2]=S(c->f[15]*c->f[0]); // 803F9D74
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 803F9D78
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[2]); // 803F9D7C
  c->lr=0x803F9D84u; f_803E5CE4(c); // 803F9D80
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F9D84
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9D88
  c->r[0]=R32(c->r[15]+0x000000A8u); // 803F9D8C
  c->f[28]=c->ps1[28]=S(c->f[20]*c->f[1]); // 803F9D90
  c->f[29]=c->ps1[29]=S(c->f[20]*c->f[0]); // 803F9D94
  cmps(c,0,(int32_t)c->r[0],0); // 803F9D98
  if (crb(c,2)) { goto L_803F9DDC; } // 803F9D9C
  c->lr=0x803F9DA4u; f_803F481C(c); // 803F9DA0
  c->f[1]=c->f[15]; // 803F9DA4
  c->r[19]=c->r[3]+0x00001CB0u; // 803F9DA8
  c->r[3]=R32(c->r[15]+0x000000A8u); // 803F9DAC
  c->r[4]=c->r[19]|c->r[19]; // 803F9DB0
  c->r[5]=c->r[16]|c->r[16]; // 803F9DB4
  c->lr=0x803F9DBCu; f_803E6ED0(c); // 803F9DB8
  c->r[3]=c->r[19]|c->r[19]; // 803F9DBC
  c->r[4]=c->r[23]|c->r[23]; // 803F9DC0
  c->lr=0x803F9DC8u; f_803F4CDC(c); // 803F9DC4
  W8(c->r[19]+0x00000003u,c->r[14]); // 803F9DC8
  c->r[3]=c->r[19]|c->r[19]; // 803F9DCC
  c->lr=0x803F9DD4u; f_803F5A7C(c); // 803F9DD0
  c->r[19]=c->r[3]|c->r[3]; // 803F9DD4
  goto L_803F9DEC; // 803F9DD8
L_803F9DDC:;
  W8(c->r[23]+0x00000003u,c->r[14]); // 803F9DDC
  c->r[3]=c->r[23]|c->r[23]; // 803F9DE0
  c->lr=0x803F9DE8u; f_803F5A7C(c); // 803F9DE4
  c->r[19]=c->r[3]|c->r[3]; // 803F9DE8
L_803F9DEC:;
  c->r[5]=R32(c->r[16]+0x00000078u); // 803F9DEC
  c->r[4]=0u+0x00000000u; // 803F9DF0
  cmps(c,0,(int32_t)c->r[5],0); // 803F9DF4
  if (crb(c,2)) { goto L_803F9E10; } // 803F9DF8
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F9DFC
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F9E00
  cmps(c,0,(int32_t)c->r[0],0); // 803F9E04
  if (crb(c,2)) { goto L_803F9E10; } // 803F9E08
  c->r[4]=0u+0x00000001u; // 803F9E0C
L_803F9E10:;
  c->r[6]=R32(c->r[16]+0x0000006Cu); // 803F9E10
  c->r[7]=R32(c->r[6]+0x00000084u); // 803F9E14
  c->r[0]=0u-c->r[7]; // 803F9E18
  c->r[0]=c->r[0]|c->r[7]; // 803F9E1C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803F9E20
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 803F9E24
  if (crb(c,2)) { goto L_803F9FA0; } // 803F9E28
  c->r[4]=R32(c->r[16]+0x00000114u); // 803F9E2C
  cmps(c,0,(int32_t)c->r[5],0); // 803F9E30
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9E34
  c->r[8]=rotl(c->r[19],16)&0x000000FFu; // 803F9E38
  c->r[0]=rotl(c->r[4],8)&0x000000FFu; // 803F9E3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803F9E40
  c->r[3]=rotl(c->r[4],16)&0x000000FFu; // 803F9E44
  c->r[9]=rotl(c->r[19],0)&0x000000FFu; // 803F9E48
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 803F9E4C
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 803F9E50
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 803F9E54
  c->r[4]=rotl(c->r[19],24)&0x000000FFu; // 803F9E58
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[23]); // 803F9E5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803F9E60
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 803F9E64
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 803F9E68
  c->f[6]=c->ps1[6]=S(c->f[3]/c->f[24]); // 803F9E6C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[23]); // 803F9E70
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[23]); // 803F9E74
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[24]); // 803F9E78
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[24]); // 803F9E7C
  if (crb(c,2)) { goto L_803F9EA0; } // 803F9E80
  c->r[3]=R32(c->r[5]+0x0000006Cu); // 803F9E84
  c->r[0]=R32(c->r[3]+0x00000084u); // 803F9E88
  cmps(c,0,(int32_t)c->r[0],0); // 803F9E8C
  if (crb(c,2)) { goto L_803F9EA0; } // 803F9E90
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9E94
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[25]); // 803F9E98
  goto L_803F9EB0; // 803F9E9C
L_803F9EA0:;
  cmps(c,0,(int32_t)c->r[7],0); // 803F9EA0
  if (crb(c,2)) { goto L_803F9EB0; } // 803F9EA4
  {uint32_t ea=c->r[6]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9EA8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[25]); // 803F9EAC
L_803F9EB0:;
  W32(c->r[1]+0x00000044u,c->r[8]); // 803F9EB0
  c->f[5]=c->ps1[5]=S(c->f[26]-c->f[0]); // 803F9EB4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 803F9EB8
  W32(c->r[1]+0x0000003Cu,c->r[8]); // 803F9EBC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[23]); // 803F9EC0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[4]=RF64(ea);} // 803F9EC4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[23]); // 803F9EC8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 803F9ECC
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803F9ED0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 803F9ED4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 803F9ED8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 803F9EDC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[3]);} // 803F9EE0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 803F9EE4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803F9EE8
  cmps(c,0,(int32_t)c->r[0],255); // 803F9EEC
  if (!crb(c,1)) { goto L_803F9EF8; } // 803F9EF0
  c->r[3]=0u+0x000000FFu; // 803F9EF4
L_803F9EF8:;
  W32(c->r[1]+0x00000044u,c->r[4]); // 803F9EF8
  c->f[5]=c->ps1[5]=S(c->f[26]-c->f[0]); // 803F9EFC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 803F9F00
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 803F9F04
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[23]); // 803F9F08
  {uint32_t ea=c->r[1]+0x00000038u; c->f[4]=RF64(ea);} // 803F9F0C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[23]); // 803F9F10
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 803F9F14
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 803F9F18
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803F9F1C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 803F9F20
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 803F9F24
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 803F9F28
  c->r[5]=R32(c->r[1]+0x00000054u); // 803F9F2C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 803F9F30
  cmps(c,0,(int32_t)c->r[0],255); // 803F9F34
  if (!crb(c,1)) { goto L_803F9F40; } // 803F9F38
  c->r[5]=0u+0x000000FFu; // 803F9F3C
L_803F9F40:;
  W32(c->r[1]+0x00000044u,c->r[9]); // 803F9F40
  c->f[4]=c->ps1[4]=S(c->f[26]-c->f[0]); // 803F9F44
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 803F9F48
  W32(c->r[1]+0x0000003Cu,c->r[9]); // 803F9F4C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[23]); // 803F9F50
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 803F9F54
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803F9F58
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[23]); // 803F9F5C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803F9F60
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[3]); // 803F9F64
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803F9F68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803F9F6C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 803F9F70
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 803F9F74
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 803F9F78
  cmps(c,0,(int32_t)c->r[0],255); // 803F9F7C
  if (!crb(c,1)) { goto L_803F9F88; } // 803F9F80
  c->r[4]=0u+0x000000FFu; // 803F9F84
L_803F9F88:;
  c->r[3]=rotl(c->r[3],16)&0x00FF0000u; // 803F9F88
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 803F9F8C
  c->r[0]=rotl(c->r[5],8)&0x0000FF00u; // 803F9F90
  c->r[3]=c->r[3]+0xFF000000u; // 803F9F94
  c->r[0]=c->r[4]+c->r[0]; // 803F9F98
  c->r[19]=c->r[3]+c->r[0]; // 803F9F9C
L_803F9FA0:;
  c->f[15]=c->f[17]; // 803F9FA0
  c->r[20]=c->r[22]|c->r[22]; // 803F9FA4
  c->r[26]=0u+0x00000000u; // 803F9FA8
  goto L_803FA044; // 803F9FAC
L_803F9FB0:;
  c->r[0]=c->r[26]^0x80000000u; // 803F9FB0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803F9FB4
  c->r[3]=c->r[1]+0x00000018u; // 803F9FB8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803F9FBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 803F9FC0
  c->f[14]=c->ps1[14]=S(c->f[0]*c->f[18]); // 803F9FC4
  c->lr=0x803F9FCCu; f_803E49FC(c); // 803F9FC8
  c->f[1]=c->f[15]; // 803F9FCC
  c->r[3]=c->r[1]+0x0000000Cu; // 803F9FD0
  c->r[4]=c->r[1]+0x00000008u; // 803F9FD4
  c->lr=0x803F9FDCu; f_803E5CE4(c); // 803F9FD8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803F9FDC
  c->r[3]=c->r[1]+0x00000018u; // 803F9FE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803F9FE4
  c->r[4]=c->r[18]|c->r[18]; // 803F9FE8
  c->f[0]=-c->f[0]; // 803F9FEC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[28]);} // 803F9FF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 803F9FF4
  c->r[5]=c->r[3]|c->r[3]; // 803F9FF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803F9FFC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803FA000
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803FA004
  c->lr=0x803FA00Cu; f_803E541C(c); // 803FA008
  c->r[4]=c->r[17]|c->r[17]; // 803FA00C
  c->r[3]=c->r[1]+0x00000018u; // 803FA010
  c->lr=0x803FA018u; f_803E52F8(c); // 803FA014
  c->r[3]=c->r[20]|c->r[20]; // 803FA018
  c->r[4]=c->r[1]+0x00000018u; // 803FA01C
  c->lr=0x803FA024u; f_803F70A8(c); // 803FA020
  c->f[0]=c->ps1[0]=S(c->f[14]*c->f[21]); // 803FA024
  c->r[26]=c->r[26]+0x00000001u; // 803FA028
  c->f[15]=c->ps1[15]=S(c->f[15]+c->f[31]); // 803FA02C
  c->f[0]=c->ps1[0]=S(c->f[22]+c->f[0]); // 803FA030
  {uint32_t ea=c->r[20]+0x00000014u; WF32(ea,c->f[0]);} // 803FA034
  {uint32_t ea=c->r[20]+0x00000010u; WF32(ea,c->f[30]);} // 803FA038
  W32(c->r[20]+0x0000000Cu,c->r[19]); // 803FA03C
  c->r[20]=c->r[20]+0x00000018u; // 803FA040
L_803FA044:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[29]); // 803FA044
  if (crb(c,0)) { IRQCHK(c); goto L_803F9FB0; } // 803FA048
  cmps(c,0,(int32_t)c->r[24],0); // 803FA04C
  if (!crb(c,1)) { goto L_803FA0D0; } // 803FA050
  c->r[20]=R32(c->r[15]+0x000000A0u); // 803FA054
  c->r[27]=c->r[21]|c->r[21]; // 803FA058
  c->r[26]=c->r[22]|c->r[22]; // 803FA05C
  c->r[30]=c->r[25]+0x00000001u; // 803FA060
  c->r[19]=0u+0x00000000u; // 803FA064
  goto L_803FA0C8; // 803FA068
L_803FA06C:;
  c->r[3]=c->r[20]|c->r[20]; // 803FA06C
  c->r[5]=c->r[28]|c->r[28]; // 803FA070
  c->r[4]=0u+0x00000000u; // 803FA074
  c->lr=0x803FA07Cu; f_80402230(c); // 803FA078
  cmps(c,0,(int32_t)c->r[19],0); // 803FA07C
  if (!crb(c,2)) { goto L_803FA090; } // 803FA080
  c->r[3]=c->r[20]|c->r[20]; // 803FA084
  c->r[4]=c->r[27]|c->r[27]; // 803FA088
  c->lr=0x803FA090u; f_80401D64(c); // 803FA08C
L_803FA090:;
  c->r[3]=c->r[20]|c->r[20]; // 803FA090
  c->r[4]=c->r[27]|c->r[27]; // 803FA094
  c->lr=0x803FA09Cu; f_80401D64(c); // 803FA098
  c->r[3]=c->r[20]|c->r[20]; // 803FA09C
  c->r[4]=c->r[26]|c->r[26]; // 803FA0A0
  c->lr=0x803FA0A8u; f_80401D64(c); // 803FA0A4
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[25]); // 803FA0A8
  if (!crb(c,2)) { goto L_803FA0BC; } // 803FA0AC
  c->r[3]=c->r[20]|c->r[20]; // 803FA0B0
  c->r[4]=c->r[26]|c->r[26]; // 803FA0B4
  c->lr=0x803FA0BCu; f_80401D64(c); // 803FA0B8
L_803FA0BC:;
  c->r[27]=c->r[27]+0x00000018u; // 803FA0BC
  c->r[26]=c->r[26]+0x00000018u; // 803FA0C0
  c->r[19]=c->r[19]+0x00000001u; // 803FA0C4
L_803FA0C8:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[30]); // 803FA0C8
  if (crb(c,0)) { IRQCHK(c); goto L_803FA06C; } // 803FA0CC
L_803FA0D0:;
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FA0D0
  c->r[0]=c->r[22]|c->r[22]; // 803FA0D4
  c->r[22]=c->r[21]|c->r[21]; // 803FA0D8
  c->r[24]=c->r[24]+0x00000001u; // 803FA0DC
  c->f[16]=c->ps1[16]=S(c->f[16]+c->f[0]); // 803FA0E0
  c->r[21]=c->r[0]|c->r[0]; // 803FA0E4
L_803FA0E8:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[31]); // 803FA0E8
  if (crb(c,0)) { IRQCHK(c); goto L_803F9D50; } // 803FA0EC
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,31,ea,0,0);} // 803FA0F0
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[31]=RF64(ea);} // 803FA0F4
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,30,ea,0,0);} // 803FA0F8
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[30]=RF64(ea);} // 803FA0FC
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,29,ea,0,0);} // 803FA100
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[29]=RF64(ea);} // 803FA104
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,28,ea,0,0);} // 803FA108
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[28]=RF64(ea);} // 803FA10C
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,27,ea,0,0);} // 803FA110
  {uint32_t ea=c->r[1]+0x00000190u; c->f[27]=RF64(ea);} // 803FA114
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,26,ea,0,0);} // 803FA118
  {uint32_t ea=c->r[1]+0x00000180u; c->f[26]=RF64(ea);} // 803FA11C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,25,ea,0,0);} // 803FA120
  {uint32_t ea=c->r[1]+0x00000170u; c->f[25]=RF64(ea);} // 803FA124
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,24,ea,0,0);} // 803FA128
  {uint32_t ea=c->r[1]+0x00000160u; c->f[24]=RF64(ea);} // 803FA12C
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,23,ea,0,0);} // 803FA130
  {uint32_t ea=c->r[1]+0x00000150u; c->f[23]=RF64(ea);} // 803FA134
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,22,ea,0,0);} // 803FA138
  {uint32_t ea=c->r[1]+0x00000140u; c->f[22]=RF64(ea);} // 803FA13C
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,21,ea,0,0);} // 803FA140
  {uint32_t ea=c->r[1]+0x00000130u; c->f[21]=RF64(ea);} // 803FA144
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,20,ea,0,0);} // 803FA148
  {uint32_t ea=c->r[1]+0x00000120u; c->f[20]=RF64(ea);} // 803FA14C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,19,ea,0,0);} // 803FA150
  {uint32_t ea=c->r[1]+0x00000110u; c->f[19]=RF64(ea);} // 803FA154
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,18,ea,0,0);} // 803FA158
  {uint32_t ea=c->r[1]+0x00000100u; c->f[18]=RF64(ea);} // 803FA15C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,17,ea,0,0);} // 803FA160
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[17]=RF64(ea);} // 803FA164
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,16,ea,0,0);} // 803FA168
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[16]=RF64(ea);} // 803FA16C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,15,ea,0,0);} // 803FA170
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[15]=RF64(ea);} // 803FA174
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,14,ea,0,0);} // 803FA178
  c->r[11]=c->r[1]+0x000000C0u; // 803FA17C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[14]=RF64(ea);} // 803FA180
  c->lr=0x803FA188u; f_803ADD54(c); // 803FA184
  c->r[0]=R32(c->r[1]+0x000001E4u); // 803FA188
  c->lr=c->r[0]; // 803FA18C
  c->r[1]=c->r[1]+0x000001E0u; // 803FA190
  return; // 803FA194
}

// fn_803FA198
void f_803FA198(Ctx* __restrict c) {
  trace_call(0x803FA198u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803FA198
  c->r[3]=c->r[3]+c->r[0]; // 803FA19C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FA1A0
  return; // 803FA1A4
}

// fn_803FA1A8
void f_803FA1A8(Ctx* __restrict c) {
  trace_call(0x803FA1A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FA1A8
  c->r[0]=c->lr; // 803FA1AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803FA1B0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803FA1B4
  c->r[31]=c->r[4]|c->r[4]; // 803FA1B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 803FA1BC
  c->r[30]=c->r[3]|c->r[3]; // 803FA1C0
  W32(c->r[1]+0x00000024u,c->r[29]); // 803FA1C4
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803FA1C8
  cmps(c,0,(int32_t)c->r[0],0); // 803FA1CC
  if (crb(c,2)) { goto L_803FA3D8; } // 803FA1D0
  c->r[5]=R32(c->r[3]+0x000001A4u); // 803FA1D4
  c->r[0]=0u+0xFFFFFFFFu; // 803FA1D8
  W32(c->r[13]+0xFFFFF3F8u,c->r[5]); // 803FA1DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803FA1E0
  c->r[6]=R32(c->r[3]+0x000000ACu); // 803FA1E4
  cmps(c,0,(int32_t)c->r[6],0); // 803FA1E8
  if (crb(c,2)) { goto L_803FA23C; } // 803FA1EC
  c->r[5]=R32(c->r[3]+0x0000009Cu); // 803FA1F0
  c->r[0]=0u+0x43300000u; // 803FA1F4
  c->r[3]=c->r[6]|c->r[6]; // 803FA1F8
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FA1FC
  c->r[6]=c->r[5]^0x80000000u; // 803FA200
  W32(c->r[1]+0x00000014u,c->r[6]); // 803FA204
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[3]=RF64(ea);} // 803FA208
  c->r[5]=c->r[31]|c->r[31]; // 803FA20C
  W32(c->r[1]+0x00000010u,c->r[0]); // 803FA210
  c->r[4]=c->r[1]+0x00000008u; // 803FA214
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803FA218
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 803FA21C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 803FA220
  W32(c->r[1]+0x00000018u,c->r[0]); // 803FA224
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803FA228
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 803FA22C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 803FA230
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803FA234
  c->lr=0x803FA23Cu; f_803E6ED0(c); // 803FA238
L_803FA23C:;
  c->r[6]=0u+0xE0000000u; // 803FA23C
  {uint32_t ea=c->r[31]+0x00000040u; psq_load(c,0,ea,0,0);} // 803FA240
  c->r[7]=c->r[6]+0x00001C30u; // 803FA244
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 803FA248
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FA24C
  c->r[4]=c->r[6]+0x00001C38u; // 803FA250
  c->r[3]=c->r[6]+0x00001C40u; // 803FA254
  c->r[11]=c->r[6]+0x00001C48u; // 803FA258
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FA25C
  c->r[9]=c->r[6]+0x00001C50u; // 803FA260
  c->r[10]=c->r[6]+0x00001C58u; // 803FA264
  c->r[5]=c->r[6]+0x00001C60u; // 803FA268
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,0,0);} // 803FA26C
  c->r[8]=c->r[6]+0x00001C68u; // 803FA270
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,0,ea,0,0);} // 803FA274
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FA278
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FA27C
  {uint32_t ea=c->r[31]+0x00000020u; psq_load(c,1,ea,0,0);} // 803FA280
  {uint32_t ea=c->r[31]+0x00000018u; psq_load(c,0,ea,0,0);} // 803FA284
  {uint32_t ea=c->r[9]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FA288
  {uint32_t ea=c->r[10]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FA28C
  {uint32_t ea=c->r[31]+0x00000030u; psq_load(c,1,ea,0,0);} // 803FA290
  {uint32_t ea=c->r[31]+0x00000028u; psq_load(c,0,ea,0,0);} // 803FA294
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FA298
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FA29C
  c->r[29]=R32(c->r[31]+0x00000068u); // 803FA2A0
  cmps(c,0,(int32_t)c->r[29],0); // 803FA2A4
  if (crb(c,2)) { goto L_803FA36C; } // 803FA2A8
  c->r[0]=R32(c->r[29]+0x000000B8u); // 803FA2AC
  cmps(c,0,(int32_t)c->r[0],0); // 803FA2B0
  if (crb(c,2)) { goto L_803FA340; } // 803FA2B4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FA2B8
  c->r[5]=c->r[29]+0x00000020u; // 803FA2BC
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FA2C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 803FA2C4
  c->r[4]=c->r[3]|c->r[3]; // 803FA2C8
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,3,ea,0,0);} // 803FA2CC
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803FA2D0
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803FA2D4
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FA2D8
  {uint32_t ea=c->r[6]+0x00001C38u; WF32(ea,c->f[1]);} // 803FA2DC
  c->f[7]=c->ps1[7]=S(c->f[1]); // 803FA2E0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FA2E4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FA2E8
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,1,ea,0,0);} // 803FA2EC
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 803FA2F0
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FA2F4
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,3,ea,0,0);} // 803FA2F8
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803FA2FC
  {uint32_t ea=c->r[29]+0x00000038u; c->f[6]=c->ps1[6]=RF32(ea);} // 803FA300
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 803FA304
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803FA308
  {uint32_t ea=c->r[29]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 803FA30C
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 803FA310
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803FA314
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[6]); // 803FA318
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 803FA31C
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803FA320
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[5]); // 803FA324
  {uint32_t ea=c->r[6]+0x00001C30u; WF32(ea,c->f[2]);} // 803FA328
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 803FA32C
  {uint32_t ea=c->r[6]+0x00001C34u; WF32(ea,c->f[1]);} // 803FA330
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 803FA334
  {uint32_t ea=c->r[6]+0x00001C38u; WF32(ea,c->f[0]);} // 803FA338
  c->lr=0x803FA340u; f_803E2FB4(c); // 803FA33C
L_803FA340:;
  c->r[3]=0u+0xE0000000u; // 803FA340
  {uint32_t ea=c->r[29]+0x00000090u; psq_load(c,2,ea,0,0);} // 803FA344
  c->r[4]=c->r[3]+0x00001C30u; // 803FA348
  {uint32_t ea=c->r[29]+0x00000098u; psq_load(c,3,ea,0,0);} // 803FA34C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FA350
  c->r[5]=c->r[3]+0x00001C38u; // 803FA354
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 803FA358
  {double t0=S(c->f[0]+c->f[2]), t1=S(c->ps1[0]+c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 803FA35C
  {double t0=S(c->f[1]+c->f[3]), t1=S(c->ps1[1]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803FA360
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FA364
  {uint32_t ea=c->r[3]+0x00001C38u; WF32(ea,c->f[1]);} // 803FA368
L_803FA36C:;
  c->r[0]=R32(c->r[30]+0x00000098u); // 803FA36C
  cmps(c,0,(int32_t)c->r[0],0); // 803FA370
  if (crb(c,2)) { goto L_803FA384; } // 803FA374
  cmps(c,0,(int32_t)c->r[0],1); // 803FA378
  if (crb(c,2)) { goto L_803FA3A0; } // 803FA37C
  goto L_803FA3B8; // 803FA380
L_803FA384:;
  c->r[6]=0u+0xE0000000u; // 803FA384
  c->r[3]=c->r[30]|c->r[30]; // 803FA388
  c->r[5]=c->r[6]+0x00001C30u; // 803FA38C
  c->r[4]=c->r[31]|c->r[31]; // 803FA390
  c->r[6]=c->r[6]+0x00001C40u; // 803FA394
  c->lr=0x803FA39Cu; f_803F9178(c); // 803FA398
  goto L_803FA3B8; // 803FA39C
L_803FA3A0:;
  c->r[6]=0u+0xE0000000u; // 803FA3A0
  c->r[3]=c->r[30]|c->r[30]; // 803FA3A4
  c->r[5]=c->r[6]+0x00001C30u; // 803FA3A8
  c->r[4]=c->r[31]|c->r[31]; // 803FA3AC
  c->r[6]=c->r[6]+0x00001C40u; // 803FA3B0
  c->lr=0x803FA3B8u; f_803F997C(c); // 803FA3B4
L_803FA3B8:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA3B8
  c->r[0]=R8(c->r[3]+0x00000004u); // 803FA3BC
  cmps(c,0,(int32_t)c->r[0],0); // 803FA3C0
  if (crb(c,2)) { goto L_803FA3D8; } // 803FA3C4
  c->r[3]=R32(c->r[30]+0x000000A0u); // 803FA3C8
  c->r[4]=0u+0x00000000u; // 803FA3CC
  c->r[5]=0u+0x00000004u; // 803FA3D0
  c->lr=0x803FA3D8u; f_80402230(c); // 803FA3D4
L_803FA3D8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803FA3D8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803FA3DC
  c->r[30]=R32(c->r[1]+0x00000028u); // 803FA3E0
  c->r[29]=R32(c->r[1]+0x00000024u); // 803FA3E4
  c->lr=c->r[0]; // 803FA3E8
  c->r[1]=c->r[1]+0x00000030u; // 803FA3EC
  return; // 803FA3F0
}

// fn_803FA3F4
void f_803FA3F4(Ctx* __restrict c) {
  trace_call(0x803FA3F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FA3F4
  c->r[4]=0u+0x80570000u; // 803FA3F8
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FA3FC
  c->r[3]=c->r[4]+0x00002BF0u; // 803FA400
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FA404
  c->r[11]=0u+0x80570000u; // 803FA408
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803FA40C
  c->r[9]=c->r[1]+0x00000028u; // 803FA410
  c->r[10]=c->r[1]+0x00000030u; // 803FA414
  c->r[5]=c->r[1]+0x00000008u; // 803FA418
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FA41C
  c->r[7]=c->r[1]+0x00000018u; // 803FA420
  c->r[8]=c->r[1]+0x00000020u; // 803FA424
  c->r[6]=c->r[1]+0x00000010u; // 803FA428
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FA42C
  c->r[11]=c->r[11]+0x00002C00u; // 803FA430
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FA434
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803FA438
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FA43C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803FA440
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803FA444
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FA448
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803FA44C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803FA450
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 803FA454
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803FA458
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803FA45C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FA460
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803FA464
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803FA468
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 803FA46C
  {uint32_t ea=c->r[4]+0x00002BF0u; WF32(ea,c->f[1]);} // 803FA470
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803FA474
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803FA478
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FA47C
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FA480
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 803FA484
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 803FA488
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 803FA48C
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 803FA490
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 803FA494
  c->r[1]=c->r[1]+0x00000040u; // 803FA498
  return; // 803FA49C
}

// fn_803FA4A0
void f_803FA4A0(Ctx* __restrict c) {
  trace_call(0x803FA4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FA4A0
  c->r[0]=c->lr; // 803FA4A4
  c->r[4]=0u+0x80470000u; // 803FA4A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FA4AC
  c->r[4]=c->r[4]+0xFFFFA3A0u; // 803FA4B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FA4B4
  c->r[31]=c->r[3]|c->r[3]; // 803FA4B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FA4BC
  c->r[0]=R32(c->r[13]+0xFFFFF430u); // 803FA4C0
  cmps(c,0,(int32_t)c->r[0],0); // 803FA4C4
  if (crb(c,2)) { goto L_803FA4E4; } // 803FA4C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA4CC
  c->r[4]=0u+0x80470000u; // 803FA4D0
  c->r[4]=c->r[4]+0xFFFFA340u; // 803FA4D4
  c->r[12]=R32(c->r[12]+0x000000F0u); // 803FA4D8
  c->ctr=c->r[12]; // 803FA4DC
  if (true) { c->lr=0x803FA4E4u; dispatch(c,c->ctr); } // 803FA4E0
L_803FA4E4:;
  c->r[0]=0u+0x00000001u; // 803FA4E4
  c->r[4]=0u+0x00000000u; // 803FA4E8
  W8(c->r[31]+0x00000004u,c->r[4]); // 803FA4EC
  c->r[3]=c->r[31]|c->r[31]; // 803FA4F0
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FA4F4
  W8(c->r[31]+0x00000005u,c->r[0]); // 803FA4F8
  W8(c->r[31]+0x00000006u,c->r[0]); // 803FA4FC
  W32(c->r[13]+0xFFFFF430u,c->r[31]); // 803FA500
  W32(c->r[31]+0x00000008u,c->r[4]); // 803FA504
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 803FA508
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 803FA50C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 803FA510
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 803FA514
  W8(c->r[31]+0x00000018u,c->r[4]); // 803FA518
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FA51C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FA520
  c->lr=c->r[0]; // 803FA524
  c->r[1]=c->r[1]+0x00000010u; // 803FA528
  return; // 803FA52C
}

// fn_803FA530
void f_803FA530(Ctx* __restrict c) {
  trace_call(0x803FA530u);
  return; // 803FA530
}

// fn_803FA534
void f_803FA534(Ctx* __restrict c) {
  trace_call(0x803FA534u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FA534
  c->r[0]=c->lr; // 803FA538
  cmps(c,0,(int32_t)c->r[3],0); // 803FA53C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FA540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FA544
  c->r[31]=c->r[3]|c->r[3]; // 803FA548
  if (crb(c,2)) { goto L_803FA564; } // 803FA54C
  cmps(c,0,(int32_t)c->r[4],0); // 803FA550
  c->r[0]=0u+0x00000000u; // 803FA554
  W32(c->r[13]+0xFFFFF430u,c->r[0]); // 803FA558
  if (!crb(c,1)) { goto L_803FA564; } // 803FA55C
  c->lr=0x803FA564u; f_80244DC0(c); // 803FA560
L_803FA564:;
  c->r[3]=c->r[31]|c->r[31]; // 803FA564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FA568
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FA56C
  c->lr=c->r[0]; // 803FA570
  c->r[1]=c->r[1]+0x00000010u; // 803FA574
  return; // 803FA578
}

// fn_803FA57C
void f_803FA57C(Ctx* __restrict c) {
  trace_call(0x803FA57Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FA57C
  c->r[0]=c->lr; // 803FA580
  W32(c->r[1]+0x00000064u,c->r[0]); // 803FA584
  c->r[11]=c->r[1]+0x00000060u; // 803FA588
  c->lr=0x803FA590u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FA58C
  c->r[24]=c->r[3]|c->r[3]; // 803FA590
  c->r[25]=c->r[4]|c->r[4]; // 803FA594
  c->lr=0x803FA59Cu; f_80403F1C(c); // 803FA598
  c->lr=0x803FA5A0u; f_80400BC4(c); // 803FA59C
  c->r[26]=0u+0x80570000u; // 803FA5A0
  cmps(c,0,(int32_t)c->r[25],0); // 803FA5A4
  c->r[26]=c->r[26]+0x000041A8u; // 803FA5A8
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FA5AC
  c->r[0]=0u+0x00000000u; // 803FA5B0
  {uint32_t ea=c->r[26]+0x00000018u; WF32(ea,c->f[0]);} // 803FA5B4
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 803FA5B8
  W32(c->r[26]+0x00000008u,c->r[0]); // 803FA5BC
  W32(c->r[26]+0x0000001Cu,c->r[0]); // 803FA5C0
  if (!crb(c,2)) { goto L_803FA6BC; } // 803FA5C4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA5C8
  c->r[4]=0u+0x00000200u; // 803FA5CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA5D0
  c->r[12]=R32(c->r[12]+0x000000E8u); // 803FA5D4
  c->ctr=c->r[12]; // 803FA5D8
  if (true) { c->lr=0x803FA5E0u; dispatch(c,c->ctr); } // 803FA5DC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA5E0
  c->r[4]=0u+0x00000008u; // 803FA5E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA5E8
  c->r[12]=R32(c->r[12]+0x000000ECu); // 803FA5EC
  c->ctr=c->r[12]; // 803FA5F0
  if (true) { c->lr=0x803FA5F8u; dispatch(c,c->ctr); } // 803FA5F4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA5F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA5FC
  c->r[12]=R32(c->r[12]+0x000000E0u); // 803FA600
  c->ctr=c->r[12]; // 803FA604
  if (true) { c->lr=0x803FA60Cu; dispatch(c,c->ctr); } // 803FA608
  c->r[25]=c->r[3]|c->r[3]; // 803FA60C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA610
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA614
  c->r[12]=R32(c->r[12]+0x000000E4u); // 803FA618
  c->ctr=c->r[12]; // 803FA61C
  if (true) { c->lr=0x803FA624u; dispatch(c,c->ctr); } // 803FA620
  c->r[10]=0u+0x00000190u; // 803FA624
  c->r[8]=0u+0x00000320u; // 803FA628
  c->r[7]=0u+0x00000258u; // 803FA62C
  c->r[11]=0u+0x000002BCu; // 803FA630
  c->r[9]=0u+0x0000012Cu; // 803FA634
  c->r[6]=0u+0x000000C8u; // 803FA638
  c->r[5]=0u+0x00000384u; // 803FA63C
  c->r[4]=0u+0x00000064u; // 803FA640
  c->r[0]=0u+0x00000065u; // 803FA644
  W32(c->r[1]+0x00000008u,c->r[3]); // 803FA648
  W32(c->r[1]+0x0000000Cu,c->r[25]); // 803FA64C
  W32(c->r[1]+0x00000010u,c->r[11]); // 803FA650
  W32(c->r[1]+0x00000014u,c->r[10]); // 803FA654
  W32(c->r[1]+0x00000018u,c->r[9]); // 803FA658
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 803FA65C
  W32(c->r[1]+0x00000020u,c->r[8]); // 803FA660
  W32(c->r[1]+0x00000024u,c->r[7]); // 803FA664
  W32(c->r[1]+0x00000028u,c->r[6]); // 803FA668
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 803FA66C
  W32(c->r[1]+0x00000030u,c->r[5]); // 803FA670
  W32(c->r[1]+0x00000034u,c->r[8]); // 803FA674
  W32(c->r[1]+0x00000038u,c->r[4]); // 803FA678
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803FA67C
  W32(c->r[26]+0x00000084u,c->r[3]); // 803FA680
  W32(c->r[26]+0x00000088u,c->r[25]); // 803FA684
  W32(c->r[26]+0x0000008Cu,c->r[11]); // 803FA688
  W32(c->r[26]+0x00000090u,c->r[10]); // 803FA68C
  W32(c->r[26]+0x00000094u,c->r[9]); // 803FA690
  W32(c->r[26]+0x00000098u,c->r[10]); // 803FA694
  W32(c->r[26]+0x0000009Cu,c->r[8]); // 803FA698
  W32(c->r[26]+0x000000A0u,c->r[7]); // 803FA69C
  W32(c->r[26]+0x000000A4u,c->r[6]); // 803FA6A0
  W32(c->r[26]+0x000000A8u,c->r[7]); // 803FA6A4
  W32(c->r[26]+0x000000ACu,c->r[5]); // 803FA6A8
  W32(c->r[26]+0x000000B0u,c->r[8]); // 803FA6AC
  W32(c->r[26]+0x000000B4u,c->r[4]); // 803FA6B0
  W32(c->r[26]+0x000000B8u,c->r[0]); // 803FA6B4
  goto L_803FA75C; // 803FA6B8
L_803FA6BC:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA6BC
  c->r[4]=R32(c->r[25]+0x00000004u); // 803FA6C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA6C4
  c->r[12]=R32(c->r[12]+0x000000E8u); // 803FA6C8
  c->ctr=c->r[12]; // 803FA6CC
  if (true) { c->lr=0x803FA6D4u; dispatch(c,c->ctr); } // 803FA6D0
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA6D4
  c->r[4]=R32(c->r[25]+0x00000000u); // 803FA6D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA6DC
  c->r[12]=R32(c->r[12]+0x000000ECu); // 803FA6E0
  c->ctr=c->r[12]; // 803FA6E4
  if (true) { c->lr=0x803FA6ECu; dispatch(c,c->ctr); } // 803FA6E8
  c->r[0]=R32(c->r[25]+0x00000000u); // 803FA6EC
  W32(c->r[26]+0x00000084u,c->r[0]); // 803FA6F0
  c->r[0]=R32(c->r[25]+0x00000004u); // 803FA6F4
  W32(c->r[26]+0x00000088u,c->r[0]); // 803FA6F8
  c->r[3]=R32(c->r[25]+0x00000008u); // 803FA6FC
  c->r[0]=R32(c->r[25]+0x0000000Cu); // 803FA700
  W32(c->r[26]+0x00000090u,c->r[0]); // 803FA704
  W32(c->r[26]+0x0000008Cu,c->r[3]); // 803FA708
  c->r[3]=R32(c->r[25]+0x00000010u); // 803FA70C
  c->r[0]=R32(c->r[25]+0x00000014u); // 803FA710
  W32(c->r[26]+0x00000098u,c->r[0]); // 803FA714
  W32(c->r[26]+0x00000094u,c->r[3]); // 803FA718
  c->r[3]=R32(c->r[25]+0x00000018u); // 803FA71C
  c->r[0]=R32(c->r[25]+0x0000001Cu); // 803FA720
  W32(c->r[26]+0x000000A0u,c->r[0]); // 803FA724
  W32(c->r[26]+0x0000009Cu,c->r[3]); // 803FA728
  c->r[3]=R32(c->r[25]+0x00000020u); // 803FA72C
  c->r[0]=R32(c->r[25]+0x00000024u); // 803FA730
  W32(c->r[26]+0x000000A8u,c->r[0]); // 803FA734
  W32(c->r[26]+0x000000A4u,c->r[3]); // 803FA738
  c->r[3]=R32(c->r[25]+0x00000028u); // 803FA73C
  c->r[0]=R32(c->r[25]+0x0000002Cu); // 803FA740
  W32(c->r[26]+0x000000B0u,c->r[0]); // 803FA744
  W32(c->r[26]+0x000000ACu,c->r[3]); // 803FA748
  c->r[3]=R32(c->r[25]+0x00000030u); // 803FA74C
  c->r[0]=R32(c->r[25]+0x00000034u); // 803FA750
  W32(c->r[26]+0x000000B8u,c->r[0]); // 803FA754
  W32(c->r[26]+0x000000B4u,c->r[3]); // 803FA758
L_803FA75C:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FA75C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FA760
  c->r[12]=R32(c->r[12]+0x000000E4u); // 803FA764
  c->ctr=c->r[12]; // 803FA768
  if (true) { c->lr=0x803FA770u; dispatch(c,c->ctr); } // 803FA76C
  c->r[27]=0u+0x80570000u; // 803FA770
  c->r[31]=0u+0x80570000u; // 803FA774
  c->r[27]=c->r[27]+0x00000B60u; // 803FA778
  c->r[26]=c->r[3]|c->r[3]; // 803FA77C
  c->r[28]=c->r[27]+0x00001068u; // 803FA780
  c->r[31]=c->r[31]+0x000007A0u; // 803FA784
  c->r[25]=0u+0x00000000u; // 803FA788
  c->r[29]=0u+0x00000000u; // 803FA78C
  c->r[30]=0u+0x80470000u; // 803FA790
  goto L_803FA850; // 803FA794
L_803FA798:;
  c->r[0]=R32(c->r[27]+0x0000107Cu); // 803FA798
  W32(c->r[13]+0xFFFFF2B8u,c->r[28]); // 803FA79C
  cmps(c,0,(int32_t)c->r[0],0); // 803FA7A0
  if (!crb(c,2)) { goto L_803FA7AC; } // 803FA7A4
  W32(c->r[13]+0xFFFFF28Cu,c->r[29]); // 803FA7A8
L_803FA7AC:;
  c->r[0]=R32(c->r[13]+0xFFFFF288u); // 803FA7AC
  c->r[3]=c->r[27]+0x00001084u; // 803FA7B0
  W32(c->r[27]+0x00001078u,c->r[0]); // 803FA7B4
  c->r[4]=c->r[30]+0xFFFFA4C4u; // 803FA7B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803FA7BC
  c->r[5]=0u+0x0000001Fu; // 803FA7C0
  c->r[6]=c->r[31]+c->r[0]; // 803FA7C4
  c->r[7]=R32(c->r[6]+0x00000008u); // 803FA7C8
  c->r[0]=R32(c->r[6]+0x0000005Cu); // 803FA7CC
  W32(c->r[27]+0x00001068u,c->r[7]); // 803FA7D0
  W32(c->r[27]+0x0000106Cu,c->r[0]); // 803FA7D4
  c->lr=0x803FA7DCu; f_803A6FD0(c); // 803FA7D8
  c->r[4]=R32(c->r[27]+0x0000107Cu); // 803FA7DC
  c->r[3]=0u+0x00000008u; // 803FA7E0
  W8(c->r[27]+0x000010A3u,c->r[29]); // 803FA7E4
  c->r[0]=c->r[4]+0x00000001u; // 803FA7E8
  W32(c->r[27]+0x0000107Cu,c->r[0]); // 803FA7EC
  c->lr=0x803FA7F4u; f_803FE664(c); // 803FA7F0
  cmps(c,0,(int32_t)c->r[3],0); // 803FA7F4
  if (crb(c,2)) { goto L_803FA800; } // 803FA7F8
  c->lr=0x803FA800u; f_803FBFD4(c); // 803FA7FC
L_803FA800:;
  c->r[0]=R32(c->r[27]+0x00001078u); // 803FA800
  c->r[25]=c->r[25]+0x00000001u; // 803FA804
  c->r[7]=R32(c->r[27]+0x00001068u); // 803FA808
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803FA80C
  c->r[5]=R32(c->r[27]+0x0000106Cu); // 803FA810
  c->r[8]=R32(c->r[27]+0x00001070u); // 803FA814
  c->r[6]=R32(c->r[27]+0x00001074u); // 803FA818
  c->r[4]=c->r[31]+c->r[0]; // 803FA81C
  c->r[3]=R32(c->r[27]+0x00001080u); // 803FA820
  c->r[9]=R32(c->r[4]+0x00000008u); // 803FA824
  c->r[4]=R32(c->r[4]+0x0000005Cu); // 803FA828
  c->r[0]=R32(c->r[13]+0xFFFFF28Cu); // 803FA82C
  c->r[7]=c->r[9]-c->r[7]; // 803FA830
  c->r[4]=c->r[4]-c->r[5]; // 803FA834
  c->r[0]=c->r[3]|c->r[0]; // 803FA838
  c->r[5]=c->r[8]+c->r[7]; // 803FA83C
  c->r[3]=c->r[6]+c->r[4]; // 803FA840
  W32(c->r[27]+0x00001070u,c->r[5]); // 803FA844
  W32(c->r[27]+0x00001074u,c->r[3]); // 803FA848
  W32(c->r[27]+0x00001080u,c->r[0]); // 803FA84C
L_803FA850:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[26]); // 803FA850
  if (crb(c,0)) { IRQCHK(c); goto L_803FA798; } // 803FA854
  c->r[3]=0u+0x80570000u; // 803FA858
  c->r[3]=c->r[3]+0x00000B60u; // 803FA85C
  c->r[0]=R32(c->r[3]+0x000010B8u); // 803FA860
  c->r[3]=c->r[3]+0x000010A4u; // 803FA864
  W32(c->r[13]+0xFFFFF2B8u,c->r[3]); // 803FA868
  cmps(c,0,(int32_t)c->r[0],0); // 803FA86C
  if (!crb(c,2)) { goto L_803FA87C; } // 803FA870
  c->r[0]=0u+0x00000000u; // 803FA874
  W32(c->r[13]+0xFFFFF28Cu,c->r[0]); // 803FA878
L_803FA87C:;
  c->r[3]=R32(c->r[13]+0xFFFFF288u); // 803FA87C
  c->r[26]=0u+0x80570000u; // 803FA880
  c->r[31]=0u+0x80570000u; // 803FA884
  c->r[4]=0u+0x80470000u; // 803FA888
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 803FA88C
  c->r[26]=c->r[26]+0x000007A0u; // 803FA890
  c->r[31]=c->r[31]+0x00000B60u; // 803FA894
  W32(c->r[31]+0x000010B4u,c->r[3]); // 803FA898
  c->r[4]=c->r[4]+0xFFFFA4A8u; // 803FA89C
  c->r[5]=c->r[26]+c->r[0]; // 803FA8A0
  c->r[6]=R32(c->r[5]+0x00000008u); // 803FA8A4
  c->r[3]=c->r[31]+0x000010C0u; // 803FA8A8
  c->r[0]=R32(c->r[5]+0x0000005Cu); // 803FA8AC
  c->r[5]=0u+0x0000001Fu; // 803FA8B0
  W32(c->r[31]+0x000010A4u,c->r[6]); // 803FA8B4
  W32(c->r[31]+0x000010A8u,c->r[0]); // 803FA8B8
  c->lr=0x803FA8C0u; f_803A6FD0(c); // 803FA8BC
  c->r[3]=R32(c->r[31]+0x000010B8u); // 803FA8C0
  c->r[30]=0u+0x00000000u; // 803FA8C4
  c->r[27]=R32(c->r[13]+0xFFFFF430u); // 803FA8C8
  c->r[0]=c->r[3]+0x00000001u; // 803FA8CC
  W8(c->r[31]+0x000010DFu,c->r[30]); // 803FA8D0
  c->r[3]=c->r[27]|c->r[27]; // 803FA8D4
  W32(c->r[31]+0x000010B8u,c->r[0]); // 803FA8D8
  c->r[12]=R32(c->r[27]+0x00000000u); // 803FA8DC
  c->r[12]=R32(c->r[12]+0x000000E0u); // 803FA8E0
  c->ctr=c->r[12]; // 803FA8E4
  if (true) { c->lr=0x803FA8ECu; dispatch(c,c->ctr); } // 803FA8E8
  c->r[12]=R32(c->r[27]+0x00000000u); // 803FA8EC
  c->r[25]=c->r[3]|c->r[3]; // 803FA8F0
  c->r[3]=c->r[27]|c->r[27]; // 803FA8F4
  c->r[12]=R32(c->r[12]+0x000000E4u); // 803FA8F8
  c->ctr=c->r[12]; // 803FA8FC
  if (true) { c->lr=0x803FA904u; dispatch(c,c->ctr); } // 803FA900
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[25]); // 803FA904
  c->lr=0x803FA90Cu; f_803FB624(c); // 803FA908
  c->r[3]=R32(c->r[31]+0x000010B4u); // 803FA90C
  c->r[6]=0u+0x80570000u; // 803FA910
  c->r[0]=R32(c->r[31]+0x000010B8u); // 803FA914
  c->r[5]=c->r[6]+0x00004328u; // 803FA918
  c->r[9]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 803FA91C
  c->r[3]=c->r[31]+0x000010A4u; // 803FA920
  c->r[4]=0u+0x80470000u; // 803FA924
  c->r[8]=R32(c->r[31]+0x000010A4u); // 803FA928
  c->r[7]=R32(c->r[31]+0x000010A8u); // 803FA92C
  cmps(c,0,(int32_t)c->r[0],0); // 803FA930
  c->r[9]=c->r[26]+c->r[9]; // 803FA934
  c->r[11]=R32(c->r[31]+0x000010ACu); // 803FA938
  c->r[10]=R32(c->r[9]+0x00000008u); // 803FA93C
  c->r[4]=c->r[4]+0xFFFFA370u; // 803FA940
  c->r[0]=R32(c->r[9]+0x0000005Cu); // 803FA944
  c->r[10]=c->r[10]-c->r[8]; // 803FA948
  c->r[9]=R32(c->r[31]+0x000010B0u); // 803FA94C
  c->r[8]=c->r[0]-c->r[7]; // 803FA950
  c->r[7]=R32(c->r[31]+0x000010BCu); // 803FA954
  c->r[0]=R32(c->r[13]+0xFFFFF28Cu); // 803FA958
  c->r[10]=c->r[11]+c->r[10]; // 803FA95C
  c->r[8]=c->r[9]+c->r[8]; // 803FA960
  W32(c->r[31]+0x000010ACu,c->r[10]); // 803FA964
  c->r[0]=c->r[7]|c->r[0]; // 803FA968
  W32(c->r[31]+0x000010B0u,c->r[8]); // 803FA96C
  W32(c->r[31]+0x000010BCu,c->r[0]); // 803FA970
  W32(c->r[6]+0x00004328u,c->r[30]); // 803FA974
  W32(c->r[5]+0x00000008u,c->r[30]); // 803FA978
  W32(c->r[13]+0xFFFFF2B8u,c->r[3]); // 803FA97C
  if (!crb(c,2)) { goto L_803FA988; } // 803FA980
  W32(c->r[13]+0xFFFFF28Cu,c->r[30]); // 803FA984
L_803FA988:;
  c->r[3]=R32(c->r[13]+0xFFFFF288u); // 803FA988
  c->r[25]=0u+0x80570000u; // 803FA98C
  c->r[30]=0u+0x80570000u; // 803FA990
  c->r[5]=0u+0x0000001Fu; // 803FA994
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 803FA998
  c->r[25]=c->r[25]+0x000007A0u; // 803FA99C
  c->r[30]=c->r[30]+0x00000B60u; // 803FA9A0
  W32(c->r[30]+0x000010B4u,c->r[3]); // 803FA9A4
  c->r[6]=c->r[25]+c->r[0]; // 803FA9A8
  c->r[3]=c->r[30]+0x000010C0u; // 803FA9AC
  c->r[7]=R32(c->r[6]+0x00000008u); // 803FA9B0
  c->r[0]=R32(c->r[6]+0x0000005Cu); // 803FA9B4
  W32(c->r[30]+0x000010A4u,c->r[7]); // 803FA9B8
  W32(c->r[30]+0x000010A8u,c->r[0]); // 803FA9BC
  c->lr=0x803FA9C4u; f_803A6FD0(c); // 803FA9C0
  c->r[4]=R32(c->r[30]+0x000010B8u); // 803FA9C4
  c->r[31]=0u+0x00000000u; // 803FA9C8
  W8(c->r[30]+0x000010DFu,c->r[31]); // 803FA9CC
  c->r[3]=0u+0xE0000000u; // 803FA9D0
  c->r[0]=c->r[4]+0x00000001u; // 803FA9D4
  W32(c->r[30]+0x000010B8u,c->r[0]); // 803FA9D8
  c->lr=0x803FA9E0u; f_80403FF4(c); // 803FA9DC
  c->r[3]=0u+0xE0000000u; // 803FA9E0
  W32(c->r[24]+0x00000008u,c->r[3]); // 803FA9E4
  c->r[0]=c->r[3]+0x00000600u; // 803FA9E8
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 803FA9EC
  c->r[3]=0u+0xE0000000u; // 803FA9F0
  c->lr=0x803FA9F8u; f_80404048(c); // 803FA9F4
  c->r[0]=R32(c->r[30]+0x000010B4u); // 803FA9F8
  c->r[11]=c->r[1]+0x00000060u; // 803FA9FC
  c->r[8]=R32(c->r[30]+0x000010A4u); // 803FAA00
  c->r[3]=0u+0x00000001u; // 803FAA04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803FAA08
  c->r[6]=R32(c->r[30]+0x000010A8u); // 803FAA0C
  c->r[9]=R32(c->r[30]+0x000010ACu); // 803FAA10
  c->r[7]=R32(c->r[30]+0x000010B0u); // 803FAA14
  c->r[5]=c->r[25]+c->r[0]; // 803FAA18
  c->r[4]=R32(c->r[30]+0x000010BCu); // 803FAA1C
  c->r[10]=R32(c->r[5]+0x00000008u); // 803FAA20
  c->r[5]=R32(c->r[5]+0x0000005Cu); // 803FAA24
  c->r[0]=R32(c->r[13]+0xFFFFF28Cu); // 803FAA28
  c->r[8]=c->r[10]-c->r[8]; // 803FAA2C
  c->r[5]=c->r[5]-c->r[6]; // 803FAA30
  W32(c->r[13]+0xFFFFF2B8u,c->r[31]); // 803FAA34
  c->r[0]=c->r[4]|c->r[0]; // 803FAA38
  c->r[6]=c->r[9]+c->r[8]; // 803FAA3C
  c->r[4]=c->r[7]+c->r[5]; // 803FAA40
  W32(c->r[30]+0x000010ACu,c->r[6]); // 803FAA44
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FAA48
  W32(c->r[30]+0x000010B0u,c->r[4]); // 803FAA4C
  W32(c->r[30]+0x000010BCu,c->r[0]); // 803FAA50
  {uint32_t ea=c->r[24]+0x00000010u; WF32(ea,c->f[0]);} // 803FAA54
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[0]);} // 803FAA58
  W8(c->r[24]+0x00000018u,c->r[31]); // 803FAA5C
  c->lr=0x803FAA64u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FAA60
  c->r[0]=R32(c->r[1]+0x00000064u); // 803FAA64
  c->lr=c->r[0]; // 803FAA68
  c->r[1]=c->r[1]+0x00000060u; // 803FAA6C
  return; // 803FAA70
}

// fn_803FAA74
void f_803FAA74(Ctx* __restrict c) {
  trace_call(0x803FAA74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FAA74
  c->r[0]=c->lr; // 803FAA78
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FAA7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803FAA80
  W32(c->r[1]+0x00000018u,c->r[30]); // 803FAA84
  W32(c->r[1]+0x00000014u,c->r[29]); // 803FAA88
  c->r[29]=0u+0x80570000u; // 803FAA8C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803FAA90
  c->r[28]=c->r[3]|c->r[3]; // 803FAA94
  c->r[3]=c->r[29]+0x000041A8u; // 803FAA98
  c->lr=0x803FAAA0u; f_803FE014(c); // 803FAA9C
  c->r[29]=c->r[29]+0x000041A8u; // 803FAAA0
  c->r[4]=0u+0x00000001u; // 803FAAA4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 803FAAA8
  c->lr=0x803FAAB0u; f_803FC240(c); // 803FAAAC
  c->lr=0x803FAAB4u; f_803FB5D4(c); // 803FAAB0
  c->r[30]=0u+0x00000000u; // 803FAAB4
  c->r[31]=0u+0x80570000u; // 803FAAB8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 803FAABC
  c->r[3]=c->r[31]+0x00004328u; // 803FAAC0
  c->lr=0x803FAAC8u; f_803FE97C(c); // 803FAAC4
  c->lr=0x803FAACCu; f_80400EFC(c); // 803FAAC8
  c->r[3]=c->r[31]+0x00004328u; // 803FAACC
  W32(c->r[31]+0x00004328u,c->r[30]); // 803FAAD0
  W32(c->r[3]+0x00000004u,c->r[30]); // 803FAAD4
  c->lr=0x803FAADCu; f_80400EFC(c); // 803FAAD8
  W32(c->r[28]+0x00000008u,c->r[30]); // 803FAADC
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 803FAAE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803FAAE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803FAAE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803FAAEC
  c->r[28]=R32(c->r[1]+0x00000010u); // 803FAAF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FAAF4
  c->lr=c->r[0]; // 803FAAF8
  c->r[1]=c->r[1]+0x00000020u; // 803FAAFC
  return; // 803FAB00
}

// fn_803FAB04
void f_803FAB04(Ctx* __restrict c) {
  trace_call(0x803FAB04u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FAB04
  c->r[0]=c->lr; // 803FAB08
  W32(c->r[1]+0x00000034u,c->r[0]); // 803FAB0C
  c->r[11]=c->r[1]+0x00000030u; // 803FAB10
  c->lr=0x803FAB18u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FAB14
  c->r[10]=0u+0x80570000u; // 803FAB18
  c->r[25]=c->r[3]|c->r[3]; // 803FAB1C
  c->r[26]=c->r[4]|c->r[4]; // 803FAB20
  c->r[27]=c->r[5]|c->r[5]; // 803FAB24
  c->r[28]=c->r[6]|c->r[6]; // 803FAB28
  c->r[29]=c->r[7]|c->r[7]; // 803FAB2C
  c->r[30]=c->r[8]|c->r[8]; // 803FAB30
  c->r[31]=c->r[9]|c->r[9]; // 803FAB34
  c->r[3]=c->r[10]+0x000041A8u; // 803FAB38
  c->r[4]=0u+0xFFFFFFFFu; // 803FAB3C
  c->lr=0x803FAB44u; f_803FE2C8(c); // 803FAB40
  cmps(c,0,(int32_t)c->r[3],0); // 803FAB44
  if (!crb(c,2)) { goto L_803FAB5C; } // 803FAB48
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FAB4C
  c->r[0]=0u+0x00000001u; // 803FAB50
  {uint32_t ea=c->r[25]+0x00000014u; WF32(ea,c->f[0]);} // 803FAB54
  W8(c->r[25]+0x00000018u,c->r[0]); // 803FAB58
L_803FAB5C:;
  c->r[3]=0u+0x80570000u; // 803FAB5C
  c->r[4]=c->r[26]|c->r[26]; // 803FAB60
  c->r[5]=c->r[27]|c->r[27]; // 803FAB64
  c->r[6]=c->r[28]|c->r[28]; // 803FAB68
  c->r[7]=c->r[29]|c->r[29]; // 803FAB6C
  c->r[8]=c->r[30]|c->r[30]; // 803FAB70
  c->r[10]=c->r[31]|c->r[31]; // 803FAB74
  c->r[3]=c->r[3]+0x000041A8u; // 803FAB78
  c->r[9]=0u+0x00000000u; // 803FAB7C
  c->lr=0x803FAB84u; f_803FC6B8(c); // 803FAB80
  c->r[11]=c->r[1]+0x00000030u; // 803FAB84
  c->lr=0x803FAB8Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FAB88
  c->r[0]=R32(c->r[1]+0x00000034u); // 803FAB8C
  c->lr=c->r[0]; // 803FAB90
  c->r[1]=c->r[1]+0x00000030u; // 803FAB94
  return; // 803FAB98
}

// fn_803FAB9C
void f_803FAB9C(Ctx* __restrict c) {
  trace_call(0x803FAB9Cu);
  W32(c->r[13]+0xFFFFDEA8u,c->r[3]); // 803FAB9C
  return; // 803FABA0
}

// fn_803FABA4
void f_803FABA4(Ctx* __restrict c) {
  trace_call(0x803FABA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FABA4
  c->r[0]=c->lr; // 803FABA8
  c->r[3]=0u+0xE0000000u; // 803FABAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FABB0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 803FABB4
  c->f[31]=c->f[1]; // 803FABB8
  W32(c->r[1]+0x00000014u,c->r[31]); // 803FABBC
  c->r[31]=c->r[4]|c->r[4]; // 803FABC0
  c->lr=0x803FABC8u; f_80403FF4(c); // 803FABC4
  c->f[1]=c->f[31]; // 803FABC8
  c->r[3]=0u+0x80570000u; // 803FABCC
  c->r[4]=c->r[31]|c->r[31]; // 803FABD0
  c->r[3]=c->r[3]+0x000041A8u; // 803FABD4
  c->lr=0x803FABDCu; f_803FC3A4(c); // 803FABD8
  c->r[0]=0u-c->r[3]; // 803FABDC
  c->r[0]=c->r[0]|c->r[3]; // 803FABE0
  c->r[3]=0u+0xE0000000u; // 803FABE4
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 803FABE8
  c->lr=0x803FABF0u; f_80404048(c); // 803FABEC
  c->r[0]=0u-c->r[31]; // 803FABF0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 803FABF4
  c->r[0]=c->r[0]|c->r[31]; // 803FABF8
  c->r[31]=R32(c->r[1]+0x00000014u); // 803FABFC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803FAC00
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FAC04
  c->lr=c->r[0]; // 803FAC08
  c->r[1]=c->r[1]+0x00000020u; // 803FAC0C
  return; // 803FAC10
}

// fn_803FAC14
void f_803FAC14(Ctx* __restrict c) {
  trace_call(0x803FAC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FAC14
  c->r[0]=c->lr; // 803FAC18
  W32(c->r[1]+0x00000034u,c->r[0]); // 803FAC1C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803FAC20
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803FAC24
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 803FAC28
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 803FAC2C
  c->f[30]=c->f[1]; // 803FAC30
  c->f[31]=c->f[2]; // 803FAC34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FAC38
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FAC3C
  c->r[30]=c->r[3]|c->r[3]; // 803FAC40
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FAC44
  c->r[12]=R32(c->r[12]+0x00000034u); // 803FAC48
  c->ctr=c->r[12]; // 803FAC4C
  if (true) { c->lr=0x803FAC54u; dispatch(c,c->ctr); } // 803FAC50
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[30]); // 803FAC54
  c->r[3]=c->r[30]|c->r[30]; // 803FAC58
  c->lr=0x803FAC60u; f_803FB0A4(c); // 803FAC5C
  c->r[0]=R8(c->r[30]+0x00000018u); // 803FAC60
  c->r[31]=0u+0x00000000u; // 803FAC64
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FAC68
  cmps(c,0,(int32_t)c->r[0],0); // 803FAC6C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 803FAC70
  if (!crb(c,2)) { goto L_803FAC84; } // 803FAC74
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 803FAC78
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 803FAC7C
  goto L_803FAC8C; // 803FAC80
L_803FAC84:;
  c->r[0]=0u+0x00000000u; // 803FAC84
  W8(c->r[30]+0x00000018u,c->r[0]); // 803FAC88
L_803FAC8C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FAC8C
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[2]=RF64(ea);} // 803FAC90
  c->lr=0x803FAC98u; f_803AD468(c); // 803FAC94
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FAC98
  c->f[31]=c->ps1[31]=S(c->f[1]); // 803FAC9C
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[2]=RF64(ea);} // 803FACA0
  c->f[1]=c->f[0]; // 803FACA4
  c->lr=0x803FACACu; f_803AD468(c); // 803FACA8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 803FACAC
  fcmp(c,0,c->f[0],c->f[31]); // 803FACB0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803FACB4
  if (!crb(c,2)) { goto L_803FACC0; } // 803FACB8
  c->r[31]=0u+0x00000001u; // 803FACBC
L_803FACC0:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=RF64(ea);} // 803FACC0
  fcmp(c,0,c->f[30],c->f[0]); // 803FACC4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803FACC8
  if (!crb(c,2)) { goto L_803FACD8; } // 803FACCC
  c->r[3]=0u+0x00000000u; // 803FACD0
  goto L_803FAD08; // 803FACD4
L_803FACD8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FACD8
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 803FACDC
  c->r[0]=cntlz(c->r[0]); // 803FACE0
  c->f[1]=c->f[30]; // 803FACE4
  c->r[12]=R32(c->r[12]+0x00000104u); // 803FACE8
  c->r[3]=c->r[30]|c->r[30]; // 803FACEC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 803FACF0
  c->ctr=c->r[12]; // 803FACF4
  if (true) { c->lr=0x803FACFCu; dispatch(c,c->ctr); } // 803FACF8
  c->r[0]=0u-c->r[3]; // 803FACFC
  c->r[0]=c->r[0]|c->r[3]; // 803FAD00
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803FAD04
L_803FAD08:;
  c->r[0]=0u-c->r[3]; // 803FAD08
  c->r[0]=c->r[0]|c->r[3]; // 803FAD0C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803FAD10
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 803FAD14
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803FAD18
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 803FAD1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 803FAD20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FAD24
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FAD28
  c->r[0]=R32(c->r[1]+0x00000034u); // 803FAD2C
  c->lr=c->r[0]; // 803FAD30
  c->r[1]=c->r[1]+0x00000030u; // 803FAD34
  return; // 803FAD38
}

// fn_803FAD3C
void f_803FAD3C(Ctx* __restrict c) {
  trace_call(0x803FAD3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FAD3C
  c->r[0]=c->lr; // 803FAD40
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FAD44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FAD48
  c->r[31]=c->r[3]|c->r[3]; // 803FAD4C
  c->r[3]=0u+0xE0000000u; // 803FAD50
  c->lr=0x803FAD58u; f_80403FF4(c); // 803FAD54
  c->r[12]=R32(c->r[31]+0x00000000u); // 803FAD58
  c->r[3]=c->r[31]|c->r[31]; // 803FAD5C
  c->r[12]=R32(c->r[12]+0x00000034u); // 803FAD60
  c->ctr=c->r[12]; // 803FAD64
  if (true) { c->lr=0x803FAD6Cu; dispatch(c,c->ctr); } // 803FAD68
  c->r[3]=0u+0x80570000u; // 803FAD6C
  c->r[3]=c->r[3]+0x000041A8u; // 803FAD70
  c->lr=0x803FAD78u; f_803FC4D4(c); // 803FAD74
  c->r[3]=0u+0xE0000000u; // 803FAD78
  c->lr=0x803FAD80u; f_80404048(c); // 803FAD7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FAD80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FAD84
  c->lr=c->r[0]; // 803FAD88
  c->r[1]=c->r[1]+0x00000010u; // 803FAD8C
  return; // 803FAD90
}

// fn_803FAD94
void f_803FAD94(Ctx* __restrict c) {
  trace_call(0x803FAD94u);
  c->r[4]=0u+0x80570000u; // 803FAD94
  c->r[4]=c->r[4]+0x000041A8u; // 803FAD98
  c->r[3]=R32(c->r[4]+0x00000004u); // 803FAD9C
  c->r[0]=c->r[3]+0x00000001u; // 803FADA0
  W32(c->r[4]+0x00000004u,c->r[0]); // 803FADA4
  return; // 803FADA8
}

// fn_803FADAC
void f_803FADAC(Ctx* __restrict c) {
  trace_call(0x803FADACu);
  c->r[3]=0u+0x80570000u; // 803FADAC
  c->r[3]=c->r[3]+0x000041A8u; // 803FADB0
  f_803FDFC8(c); return; // 803FADB4
}

// fn_803FADB8
void f_803FADB8(Ctx* __restrict c) {
  trace_call(0x803FADB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FADB8
  c->r[0]=c->lr; // 803FADBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FADC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FADC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FADC8
  c->r[30]=c->r[3]|c->r[3]; // 803FADCC
  c->r[0]=R8(c->r[3]+0x00000005u); // 803FADD0
  cmps(c,0,(int32_t)c->r[0],0); // 803FADD4
  if (crb(c,2)) { goto L_803FADEC; } // 803FADD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FADDC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 803FADE0
  c->ctr=c->r[12]; // 803FADE4
  if (true) { c->lr=0x803FADECu; dispatch(c,c->ctr); } // 803FADE8
L_803FADEC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FADEC
  c->r[3]=c->r[30]|c->r[30]; // 803FADF0
  c->r[12]=R32(c->r[12]+0x00000034u); // 803FADF4
  c->ctr=c->r[12]; // 803FADF8
  if (true) { c->lr=0x803FAE00u; dispatch(c,c->ctr); } // 803FADFC
  c->r[0]=R8(c->r[30]+0x00000004u); // 803FAE00
  cmps(c,0,(int32_t)c->r[0],0); // 803FAE04
  if (crb(c,2)) { goto L_803FAEB0; } // 803FAE08
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAE0C
  c->r[3]=c->r[30]|c->r[30]; // 803FAE10
  c->r[12]=R32(c->r[12]+0x00000024u); // 803FAE14
  c->ctr=c->r[12]; // 803FAE18
  if (true) { c->lr=0x803FAE20u; dispatch(c,c->ctr); } // 803FAE1C
  c->r[3]=0u+0x80570000u; // 803FAE20
  c->r[3]=c->r[3]+0x000041A8u; // 803FAE24
  c->lr=0x803FAE2Cu; f_803FD7D0(c); // 803FAE28
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAE2C
  c->r[3]=c->r[30]|c->r[30]; // 803FAE30
  c->r[12]=R32(c->r[12]+0x00000028u); // 803FAE34
  c->ctr=c->r[12]; // 803FAE38
  if (true) { c->lr=0x803FAE40u; dispatch(c,c->ctr); } // 803FAE3C
  c->r[3]=0u+0xE0000000u; // 803FAE40
  c->lr=0x803FAE48u; f_80403FF4(c); // 803FAE44
  c->r[3]=0u+0xE0000000u; // 803FAE48
  c->lr=0x803FAE50u; f_80404054(c); // 803FAE4C
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAE50
  c->r[3]=c->r[30]|c->r[30]; // 803FAE54
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803FAE58
  c->ctr=c->r[12]; // 803FAE5C
  if (true) { c->lr=0x803FAE64u; dispatch(c,c->ctr); } // 803FAE60
  c->r[0]=R8(c->r[30]+0x00000006u); // 803FAE64
  cmps(c,0,(int32_t)c->r[0],0); // 803FAE68
  if (crb(c,2)) { goto L_803FAE84; } // 803FAE6C
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAE70
  c->r[3]=c->r[30]|c->r[30]; // 803FAE74
  c->r[12]=R32(c->r[12]+0x00000030u); // 803FAE78
  c->ctr=c->r[12]; // 803FAE7C
  if (true) { c->lr=0x803FAE84u; dispatch(c,c->ctr); } // 803FAE80
L_803FAE84:;
  c->r[3]=0u+0x80570000u; // 803FAE84
  c->r[0]=0u+0x00000000u; // 803FAE88
  c->r[3]=c->r[3]+0x000041A8u; // 803FAE8C
  W8(c->r[3]+0x000000BCu,c->r[0]); // 803FAE90
  c->lr=0x803FAE98u; f_803FE104(c); // 803FAE94
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAE98
  c->r[3]=c->r[30]|c->r[30]; // 803FAE9C
  c->r[12]=R32(c->r[12]+0x00000020u); // 803FAEA0
  c->ctr=c->r[12]; // 803FAEA4
  if (true) { c->lr=0x803FAEACu; dispatch(c,c->ctr); } // 803FAEA8
  goto L_803FAF24; // 803FAEAC
L_803FAEB0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAEB0
  c->r[3]=c->r[30]|c->r[30]; // 803FAEB4
  c->r[12]=R32(c->r[12]+0x00000024u); // 803FAEB8
  c->ctr=c->r[12]; // 803FAEBC
  if (true) { c->lr=0x803FAEC4u; dispatch(c,c->ctr); } // 803FAEC0
  c->r[31]=0u+0x80570000u; // 803FAEC4
  c->r[3]=c->r[31]+0x000041A8u; // 803FAEC8
  c->lr=0x803FAED0u; f_803FD7D0(c); // 803FAECC
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAED0
  c->r[3]=c->r[30]|c->r[30]; // 803FAED4
  c->r[12]=R32(c->r[12]+0x00000028u); // 803FAED8
  c->ctr=c->r[12]; // 803FAEDC
  if (true) { c->lr=0x803FAEE4u; dispatch(c,c->ctr); } // 803FAEE0
  c->r[3]=0u+0xE0000000u; // 803FAEE4
  c->lr=0x803FAEECu; f_80403FF4(c); // 803FAEE8
  c->r[3]=0u+0xE0000000u; // 803FAEEC
  c->lr=0x803FAEF4u; f_80404054(c); // 803FAEF0
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAEF4
  c->r[3]=c->r[30]|c->r[30]; // 803FAEF8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803FAEFC
  c->ctr=c->r[12]; // 803FAF00
  if (true) { c->lr=0x803FAF08u; dispatch(c,c->ctr); } // 803FAF04
  c->r[3]=c->r[31]+0x000041A8u; // 803FAF08
  c->lr=0x803FAF10u; f_803FDC48(c); // 803FAF0C
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FAF10
  c->r[3]=c->r[30]|c->r[30]; // 803FAF14
  c->r[12]=R32(c->r[12]+0x00000020u); // 803FAF18
  c->ctr=c->r[12]; // 803FAF1C
  if (true) { c->lr=0x803FAF24u; dispatch(c,c->ctr); } // 803FAF20
L_803FAF24:;
  c->r[3]=0u+0xE0000000u; // 803FAF24
  c->lr=0x803FAF2Cu; f_80404048(c); // 803FAF28
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FAF2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FAF30
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FAF34
  c->lr=c->r[0]; // 803FAF38
  c->r[1]=c->r[1]+0x00000010u; // 803FAF3C
  return; // 803FAF40
}

// fn_803FAF44
void f_803FAF44(Ctx* __restrict c) {
  trace_call(0x803FAF44u);
  return; // 803FAF44
}

// fn_803FAF48
void f_803FAF48(Ctx* __restrict c) {
  trace_call(0x803FAF48u);
  return; // 803FAF48
}

// fn_803FAF4C
void f_803FAF4C(Ctx* __restrict c) {
  trace_call(0x803FAF4Cu);
  return; // 803FAF4C
}

// fn_803FAF50
void f_803FAF50(Ctx* __restrict c) {
  trace_call(0x803FAF50u);
  return; // 803FAF50
}

// fn_803FAF54
void f_803FAF54(Ctx* __restrict c) {
  trace_call(0x803FAF54u);
  c->r[3]=0u+0x80570000u; // 803FAF54
  c->r[3]=c->r[3]+0x000041A8u; // 803FAF58
  f_803FE2C8(c); return; // 803FAF5C
}

// fn_803FAF60
void f_803FAF60(Ctx* __restrict c) {
  trace_call(0x803FAF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FAF60
  c->r[0]=c->lr; // 803FAF64
  c->r[3]=0u+0x80570000u; // 803FAF68
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FAF6C
  c->r[3]=c->r[3]+0x00004328u; // 803FAF70
  c->lr=0x803FAF78u; f_80400A24(c); // 803FAF74
  c->r[0]=0u-c->r[3]; // 803FAF78
  c->r[0]=c->r[0]|c->r[3]; // 803FAF7C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803FAF80
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FAF84
  c->lr=c->r[0]; // 803FAF88
  c->r[1]=c->r[1]+0x00000010u; // 803FAF8C
  return; // 803FAF90
}

// fn_803FAF94
void f_803FAF94(Ctx* __restrict c) {
  trace_call(0x803FAF94u);
  c->r[3]=0u+0x80570000u; // 803FAF94
  c->r[3]=c->r[3]+0x00004328u; // 803FAF98
  f_80400538(c); return; // 803FAF9C
}

// fn_803FAFA0
void f_803FAFA0(Ctx* __restrict c) {
  trace_call(0x803FAFA0u);
  c->r[3]=R32(c->r[3]+0x00000024u); // 803FAFA0
  return; // 803FAFA4
}

// fn_803FAFA8
void f_803FAFA8(Ctx* __restrict c) {
  trace_call(0x803FAFA8u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 803FAFA8
  return; // 803FAFAC
}

// fn_803FAFB0
void f_803FAFB0(Ctx* __restrict c) {
  trace_call(0x803FAFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FAFB0
  c->r[0]=c->lr; // 803FAFB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803FAFB8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 803FAFBC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 803FAFC0
  c->r[11]=c->r[1]+0x00000030u; // 803FAFC4
  c->lr=0x803FAFCCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FAFC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FAFCC
  c->r[27]=c->r[3]|c->r[3]; // 803FAFD0
  c->r[28]=c->r[4]|c->r[4]; // 803FAFD4
  c->r[12]=R32(c->r[12]+0x00000078u); // 803FAFD8
  c->ctr=c->r[12]; // 803FAFDC
  if (true) { c->lr=0x803FAFE4u; dispatch(c,c->ctr); } // 803FAFE0
  cmps(c,0,(int32_t)c->r[3],0); // 803FAFE4
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803FAFE8
  c->r[31]=c->r[3]|c->r[3]; // 803FAFEC
  c->r[29]=0u+0x00000000u; // 803FAFF0
  if (!crb(c,1)) { goto L_803FB074; } // 803FAFF4
  c->r[30]=c->r[1]+0x00000008u; // 803FAFF8
  goto L_803FB06C; // 803FAFFC
L_803FB000:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 803FB000
  c->r[3]=c->r[27]|c->r[27]; // 803FB004
  c->r[4]=c->r[29]|c->r[29]; // 803FB008
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 803FB00C
  c->ctr=c->r[12]; // 803FB010
  if (true) { c->lr=0x803FB018u; dispatch(c,c->ctr); } // 803FB014
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 803FB018
  cmps(c,0,(int32_t)c->r[29],0); // 803FB01C
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FB020
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 803FB024
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 803FB028
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,0,ea,0,0);} // 803FB02C
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803FB030
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FB034
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803FB038
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FB03C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 803FB040
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803FB044
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 803FB048
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803FB04C
  if (!crb(c,2)) { goto L_803FB05C; } // 803FB050
  c->f[31]=c->f[0]; // 803FB054
  goto L_803FB068; // 803FB058
L_803FB05C:;
  fcmp(c,0,c->f[0],c->f[31]); // 803FB05C
  if (!crb(c,0)) { goto L_803FB068; } // 803FB060
  c->f[31]=c->f[0]; // 803FB064
L_803FB068:;
  c->r[29]=c->r[29]+0x00000001u; // 803FB068
L_803FB06C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[31]); // 803FB06C
  if (crb(c,0)) { IRQCHK(c); goto L_803FB000; } // 803FB070
L_803FB074:;
  c->f[1]=c->f[31]; // 803FB074
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803FB078
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803FB07C
  c->r[11]=c->r[1]+0x00000030u; // 803FB080
  c->lr=0x803FB088u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FB084
  c->r[0]=R32(c->r[1]+0x00000044u); // 803FB088
  c->lr=c->r[0]; // 803FB08C
  c->r[1]=c->r[1]+0x00000040u; // 803FB090
  return; // 803FB094
}

// fn_803FB098
void f_803FB098(Ctx* __restrict c) {
  trace_call(0x803FB098u);
  c->r[3]=0u+0x80470000u; // 803FB098
  c->r[3]=c->r[3]+0xFFFFA38Cu; // 803FB09C
  return; // 803FB0A0
}

// fn_803FB0A4
void f_803FB0A4(Ctx* __restrict c) {
  trace_call(0x803FB0A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FB0A4
  c->r[0]=c->lr; // 803FB0A8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803FB0AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803FB0B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803FB0B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803FB0B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803FB0BC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 803FB0C0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 803FB0C4
  c->r[11]=c->r[1]+0x00000030u; // 803FB0C8
  c->lr=0x803FB0D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FB0CC
  c->r[4]=0u+0x80570000u; // 803FB0D0
  c->f[31]=c->f[1]; // 803FB0D4
  c->r[0]=0u+0x43300000u; // 803FB0D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803FB0DC
  c->r[31]=R32(c->r[4]+0x00004328u); // 803FB0E0
  c->r[29]=c->r[3]|c->r[3]; // 803FB0E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 803FB0E8
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[30]=c->ps1[30]=RF32(ea);} // 803FB0EC
  {uint32_t ea=c->r[2]+0xFFFFA8D0u; c->f[29]=RF64(ea);} // 803FB0F0
  goto L_803FB438; // 803FB0F4
L_803FB0F8:;
  c->r[30]=R32(c->r[31]+0x00000058u); // 803FB0F8
  cmps(c,0,(int32_t)c->r[30],0); // 803FB0FC
  if (crb(c,2)) { goto L_803FB434; } // 803FB100
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 803FB104
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FB108
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FB10C
  c->ctr=c->r[12]; // 803FB110
  if (true) { c->lr=0x803FB118u; dispatch(c,c->ctr); } // 803FB114
  cmps(c,0,(int32_t)c->r[3],2); // 803FB118
  if (!crb(c,2)) { goto L_803FB37C; } // 803FB11C
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 803FB120
  c->r[4]=R32(c->r[3]+0x00000084u); // 803FB124
  cmps(c,0,(int32_t)c->r[4],1); // 803FB128
  if (!crb(c,2)) { goto L_803FB1D4; } // 803FB12C
  c->r[0]=R32(c->r[3]+0x00000088u); // 803FB130
  cmps(c,0,(int32_t)c->r[0],1); // 803FB134
  if (!crb(c,2)) { goto L_803FB1D4; } // 803FB138
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FB13C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 803FB140
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[1]);} // 803FB144
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 803FB148
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803FB14C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803FB150
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803FB154
  fcmp(c,0,c->f[1],c->f[0]); // 803FB158
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803FB15C
  if (!crb(c,2)) { goto L_803FB434; } // 803FB160
  c->r[12]=R32(c->r[29]+0x00000000u); // 803FB164
  c->r[3]=c->r[29]|c->r[29]; // 803FB168
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 803FB16C
  c->r[6]=c->r[30]+0x00000114u; // 803FB170
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FB174
  c->r[4]=0u+0x00000000u; // 803FB178
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FB17C
  c->r[5]=0u+0x00000000u; // 803FB180
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FB184
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803FB188
  c->ctr=c->r[12]; // 803FB18C
  if (true) { c->lr=0x803FB194u; dispatch(c,c->ctr); } // 803FB190
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[30]);} // 803FB194
  c->r[3]=R32(c->r[30]+0x00000074u); // 803FB198
  cmps(c,0,(int32_t)c->r[3],0); // 803FB19C
  if (crb(c,2)) { goto L_803FB434; } // 803FB1A0
  c->r[4]=R32(c->r[3]+0x00000008u); // 803FB1A4
  goto L_803FB1C0; // 803FB1A8
L_803FB1AC:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 803FB1AC
  c->r[0]=R32(c->r[30]+0x00000114u); // 803FB1B0
  W32(c->r[3]+0x00000114u,c->r[0]); // 803FB1B4
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[30]);} // 803FB1B8
  c->r[4]=R32(c->r[4]+0x00000004u); // 803FB1BC
L_803FB1C0:;
  c->r[3]=R32(c->r[30]+0x00000074u); // 803FB1C0
  c->r[0]=c->r[3]+0x00000004u; // 803FB1C4
  cmpu(c,0,c->r[4],c->r[0]); // 803FB1C8
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB1AC; } // 803FB1CC
  goto L_803FB434; // 803FB1D0
L_803FB1D4:;
  cmps(c,0,(int32_t)c->r[4],2); // 803FB1D4
  if (!crb(c,2)) { goto L_803FB2CC; } // 803FB1D8
  c->r[0]=R32(c->r[3]+0x00000088u); // 803FB1DC
  cmps(c,0,(int32_t)c->r[0],1); // 803FB1E0
  if (!crb(c,2)) { goto L_803FB2CC; } // 803FB1E4
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FB1E8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 803FB1EC
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[1]);} // 803FB1F0
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 803FB1F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FB1F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803FB1FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803FB200
  fcmp(c,0,c->f[1],c->f[0]); // 803FB204
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803FB208
  if (!crb(c,2)) { goto L_803FB244; } // 803FB20C
  c->r[12]=R32(c->r[29]+0x00000000u); // 803FB210
  c->r[3]=c->r[29]|c->r[29]; // 803FB214
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 803FB218
  c->r[6]=c->r[30]+0x00000114u; // 803FB21C
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FB220
  c->r[4]=0u+0x00000000u; // 803FB224
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FB228
  c->r[5]=0u+0x00000000u; // 803FB22C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FB230
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803FB234
  c->ctr=c->r[12]; // 803FB238
  if (true) { c->lr=0x803FB240u; dispatch(c,c->ctr); } // 803FB23C
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[30]);} // 803FB240
L_803FB244:;
  c->r[3]=R32(c->r[30]+0x00000074u); // 803FB244
  cmps(c,0,(int32_t)c->r[3],0); // 803FB248
  if (crb(c,2)) { goto L_803FB434; } // 803FB24C
  c->r[28]=R32(c->r[3]+0x00000008u); // 803FB250
  goto L_803FB2B8; // 803FB254
L_803FB258:;
  c->r[27]=R32(c->r[28]+0x00000008u); // 803FB258
  {uint32_t ea=c->r[27]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FB25C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 803FB260
  {uint32_t ea=c->r[27]+0x00000118u; WF32(ea,c->f[1]);} // 803FB264
  c->r[0]=R32(c->r[27]+0x0000011Cu); // 803FB268
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803FB26C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803FB270
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803FB274
  fcmp(c,0,c->f[1],c->f[0]); // 803FB278
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803FB27C
  if (!crb(c,2)) { goto L_803FB2B4; } // 803FB280
  c->r[12]=R32(c->r[29]+0x00000000u); // 803FB284
  c->r[3]=c->r[29]|c->r[29]; // 803FB288
  c->r[6]=c->r[27]+0x00000114u; // 803FB28C
  c->r[4]=0u+0x00000000u; // 803FB290
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FB294
  c->r[5]=0u+0x00000000u; // 803FB298
  {uint32_t ea=c->r[27]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FB29C
  c->r[7]=0u+0x00000000u; // 803FB2A0
  {uint32_t ea=c->r[27]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FB2A4
  c->ctr=c->r[12]; // 803FB2A8
  if (true) { c->lr=0x803FB2B0u; dispatch(c,c->ctr); } // 803FB2AC
  {uint32_t ea=c->r[27]+0x00000118u; WF32(ea,c->f[30]);} // 803FB2B0
L_803FB2B4:;
  c->r[28]=R32(c->r[28]+0x00000004u); // 803FB2B4
L_803FB2B8:;
  c->r[3]=R32(c->r[30]+0x00000074u); // 803FB2B8
  c->r[0]=c->r[3]+0x00000004u; // 803FB2BC
  cmpu(c,0,c->r[28],c->r[0]); // 803FB2C0
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB258; } // 803FB2C4
  goto L_803FB434; // 803FB2C8
L_803FB2CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FB2CC
  if (!crb(c,2)) { goto L_803FB434; } // 803FB2D0
  c->r[3]=R32(c->r[30]+0x00000074u); // 803FB2D4
  cmps(c,0,(int32_t)c->r[3],0); // 803FB2D8
  if (crb(c,2)) { goto L_803FB434; } // 803FB2DC
  c->r[27]=R32(c->r[3]+0x00000008u); // 803FB2E0
  goto L_803FB368; // 803FB2E4
L_803FB2E8:;
  c->r[28]=R32(c->r[27]+0x00000008u); // 803FB2E8
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 803FB2EC
  c->r[0]=R32(c->r[3]+0x00000084u); // 803FB2F0
  cmps(c,0,(int32_t)c->r[0],0); // 803FB2F4
  if (crb(c,2)) { goto L_803FB364; } // 803FB2F8
  c->r[0]=R32(c->r[3]+0x00000088u); // 803FB2FC
  cmps(c,0,(int32_t)c->r[0],1); // 803FB300
  if (!crb(c,2)) { goto L_803FB364; } // 803FB304
  {uint32_t ea=c->r[28]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FB308
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 803FB30C
  {uint32_t ea=c->r[28]+0x00000118u; WF32(ea,c->f[1]);} // 803FB310
  c->r[0]=R32(c->r[28]+0x0000011Cu); // 803FB314
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FB318
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803FB31C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803FB320
  fcmp(c,0,c->f[1],c->f[0]); // 803FB324
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803FB328
  if (!crb(c,2)) { goto L_803FB364; } // 803FB32C
  c->r[12]=R32(c->r[29]+0x00000000u); // 803FB330
  c->r[3]=c->r[29]|c->r[29]; // 803FB334
  c->r[7]=R32(c->r[28]+0x0000006Cu); // 803FB338
  c->r[6]=c->r[28]+0x00000114u; // 803FB33C
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FB340
  c->r[4]=0u+0x00000000u; // 803FB344
  {uint32_t ea=c->r[28]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FB348
  c->r[5]=0u+0x00000000u; // 803FB34C
  {uint32_t ea=c->r[28]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FB350
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803FB354
  c->ctr=c->r[12]; // 803FB358
  if (true) { c->lr=0x803FB360u; dispatch(c,c->ctr); } // 803FB35C
  {uint32_t ea=c->r[28]+0x00000118u; WF32(ea,c->f[30]);} // 803FB360
L_803FB364:;
  c->r[27]=R32(c->r[27]+0x00000004u); // 803FB364
L_803FB368:;
  c->r[3]=R32(c->r[30]+0x00000074u); // 803FB368
  c->r[0]=c->r[3]+0x00000004u; // 803FB36C
  cmpu(c,0,c->r[27],c->r[0]); // 803FB370
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB2E8; } // 803FB374
  goto L_803FB434; // 803FB378
L_803FB37C:;
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 803FB37C
  c->r[0]=R32(c->r[3]+0x00000084u); // 803FB380
  cmps(c,0,(int32_t)c->r[0],0); // 803FB384
  if (crb(c,2)) { goto L_803FB434; } // 803FB388
  c->r[0]=R32(c->r[3]+0x00000088u); // 803FB38C
  cmps(c,0,(int32_t)c->r[0],1); // 803FB390
  if (!crb(c,2)) { goto L_803FB434; } // 803FB394
  c->r[3]=R32(c->r[30]+0x00000078u); // 803FB398
  cmps(c,0,(int32_t)c->r[3],0); // 803FB39C
  if (crb(c,2)) { goto L_803FB42C; } // 803FB3A0
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803FB3A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FB3A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FB3AC
  c->ctr=c->r[12]; // 803FB3B0
  if (true) { c->lr=0x803FB3B8u; dispatch(c,c->ctr); } // 803FB3B4
  cmps(c,0,(int32_t)c->r[3],2); // 803FB3B8
  if (!crb(c,2)) { goto L_803FB42C; } // 803FB3BC
  c->r[31]=R32(c->r[31]+0x00000038u); // 803FB3C0
  goto L_803FB438; // 803FB3C4
  goto L_803FB42C; // 803FB3C8
L_803FB3CC:;
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FB3CC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 803FB3D0
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[1]);} // 803FB3D4
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 803FB3D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803FB3DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803FB3E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803FB3E4
  fcmp(c,0,c->f[1],c->f[0]); // 803FB3E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803FB3EC
  if (!crb(c,2)) { goto L_803FB428; } // 803FB3F0
  c->r[12]=R32(c->r[29]+0x00000000u); // 803FB3F4
  c->r[3]=c->r[29]|c->r[29]; // 803FB3F8
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 803FB3FC
  c->r[6]=c->r[30]+0x00000114u; // 803FB400
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FB404
  c->r[4]=0u+0x00000000u; // 803FB408
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FB40C
  c->r[5]=0u+0x00000000u; // 803FB410
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FB414
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803FB418
  c->ctr=c->r[12]; // 803FB41C
  if (true) { c->lr=0x803FB424u; dispatch(c,c->ctr); } // 803FB420
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[30]);} // 803FB424
L_803FB428:;
  c->r[30]=R32(c->r[30]+0x00000088u); // 803FB428
L_803FB42C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FB42C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB3CC; } // 803FB430
L_803FB434:;
  c->r[31]=R32(c->r[31]+0x00000038u); // 803FB434
L_803FB438:;
  cmps(c,0,(int32_t)c->r[31],0); // 803FB438
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB0F8; } // 803FB43C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803FB440
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803FB444
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 803FB448
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 803FB44C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 803FB450
  c->r[11]=c->r[1]+0x00000030u; // 803FB454
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 803FB458
  c->lr=0x803FB460u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FB45C
  c->r[0]=R32(c->r[1]+0x00000064u); // 803FB460
  c->lr=c->r[0]; // 803FB464
  c->r[1]=c->r[1]+0x00000060u; // 803FB468
  return; // 803FB46C
}

// fn_803FB470
void f_803FB470(Ctx* __restrict c) {
  trace_call(0x803FB470u);
  c->r[3]=0u+0x00000064u; // 803FB470
  return; // 803FB474
}

// fn_803FB478
void f_803FB478(Ctx* __restrict c) {
  trace_call(0x803FB478u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FB478
  c->r[7]=0u+0x80570000u; // 803FB47C
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 803FB480
  c->r[7]=c->r[7]+0x00004060u; // 803FB484
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FB488
  c->r[12]=c->r[1]+0x00000058u; // 803FB48C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 803FB490
  c->r[31]=c->r[1]+0x00000060u; // 803FB494
  c->r[8]=c->r[1]+0x00000038u; // 803FB498
  c->r[10]=c->r[1]+0x00000048u; // 803FB49C
  W32(c->r[1]+0x00000068u,c->r[30]); // 803FB4A0
  c->r[3]=c->r[7]+0x00000068u; // 803FB4A4
  c->r[6]=c->r[7]+0x00000000u; // 803FB4A8
  c->r[4]=c->r[7]+0x00000058u; // 803FB4AC
  c->r[5]=c->r[7]+0x00000040u; // 803FB4B0
  {uint32_t ea=c->r[2]+0xFFFFA8DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FB4B4
  {uint32_t ea=c->r[2]+0xFFFFA8E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FB4B8
  c->r[0]=0u+0x00000000u; // 803FB4BC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 803FB4C0
  c->r[11]=c->r[1]+0x00000050u; // 803FB4C4
  c->r[9]=c->r[1]+0x00000040u; // 803FB4C8
  c->r[30]=c->r[7]+0x00000010u; // 803FB4CC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 803FB4D0
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FB4D4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 803FB4D8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 803FB4DC
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,5,ea,0,0);} // 803FB4E0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[3]);} // 803FB4E4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 803FB4E8
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 803FB4EC
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 803FB4F0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 803FB4F4
  {uint32_t ea=c->r[11]+0x00000000u; psq_load(c,7,ea,0,0);} // 803FB4F8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 803FB4FC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 803FB500
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,8,ea,0,0);} // 803FB504
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[3]);} // 803FB508
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 803FB50C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,9,ea,0,0);} // 803FB510
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[3]);} // 803FB514
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[3]);} // 803FB518
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[3]);} // 803FB51C
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[3]);} // 803FB520
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,8,ea,0,0);} // 803FB524
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,9,ea,0,0);} // 803FB528
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,6,ea,0,0);} // 803FB52C
  {uint32_t ea=c->r[30]+0x00000018u; psq_store(c,7,ea,0,0);} // 803FB530
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,4,ea,0,0);} // 803FB534
  {uint32_t ea=c->r[30]+0x00000028u; psq_store(c,5,ea,0,0);} // 803FB538
  W8(c->r[7]+0x00000040u,c->r[0]); // 803FB53C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[2]);} // 803FB540
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 803FB544
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 803FB548
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 803FB54C
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 803FB550
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[3]);} // 803FB554
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[3]);} // 803FB558
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[3]);} // 803FB55C
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[3]);} // 803FB560
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[2]);} // 803FB564
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 803FB568
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 803FB56C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 803FB570
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 803FB574
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 803FB578
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 803FB57C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[3]);} // 803FB580
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 803FB584
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[3]);} // 803FB588
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 803FB58C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 803FB590
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 803FB594
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 803FB598
  c->r[30]=R32(c->r[1]+0x00000068u); // 803FB59C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 803FB5A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 803FB5A4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 803FB5A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803FB5AC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803FB5B0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 803FB5B4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 803FB5B8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 803FB5BC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 803FB5C0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[3]);} // 803FB5C4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 803FB5C8
  c->r[1]=c->r[1]+0x00000070u; // 803FB5CC
  return; // 803FB5D0
}

// fn_803FB5D4
void f_803FB5D4(Ctx* __restrict c) {
  trace_call(0x803FB5D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FB5D4
  c->r[0]=c->lr; // 803FB5D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FB5DC
  c->r[3]=R32(c->r[13]+0xFFFFF444u); // 803FB5E0
  cmps(c,0,(int32_t)c->r[3],0); // 803FB5E4
  if (crb(c,2)) { goto L_803FB614; } // 803FB5E8
  if (crb(c,2)) { goto L_803FB5F8; } // 803FB5EC
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 803FB5F0
  c->lr=0x803FB5F8u; f_803FE6AC(c); // 803FB5F4
L_803FB5F8:;
  c->r[4]=0u+0x80570000u; // 803FB5F8
  c->r[0]=0u+0x00000000u; // 803FB5FC
  c->r[3]=c->r[4]+0x00004148u; // 803FB600
  W32(c->r[4]+0x00004148u,c->r[0]); // 803FB604
  c->r[0]=c->r[3]+0x00000004u; // 803FB608
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FB60C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803FB610
L_803FB614:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FB614
  c->lr=c->r[0]; // 803FB618
  c->r[1]=c->r[1]+0x00000010u; // 803FB61C
  return; // 803FB620
}

// fn_803FB624
void f_803FB624(Ctx* __restrict c) {
  trace_call(0x803FB624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FB624
  c->r[0]=c->lr; // 803FB628
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 803FB62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FB630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FB634
  c->r[31]=c->r[3]|c->r[3]; // 803FB638
  c->r[3]=c->r[4]+0x00000010u; // 803FB63C
  c->lr=0x803FB644u; f_803FE67C(c); // 803FB640
  c->r[7]=c->r[31]|c->r[31]; // 803FB644
  c->r[4]=0u+0x00000000u; // 803FB648
  c->r[5]=0u+0x00000000u; // 803FB64C
  c->r[6]=0u+0x0000000Cu; // 803FB650
  c->lr=0x803FB658u; f_803AD5CC(c); // 803FB654
  cmps(c,0,(int32_t)c->r[31],0); // 803FB658
  W32(c->r[13]+0xFFFFF444u,c->r[3]); // 803FB65C
  c->r[6]=0u+0x00000000u; // 803FB660
  if (crb(c,2)) { goto L_803FB858; } // 803FB664
  cmpu(c,0,c->r[31],0x00000008u); // 803FB668
  c->r[8]=c->r[31]+0xFFFFFFF8u; // 803FB66C
  if (!crb(c,1)) { goto L_803FB804; } // 803FB670
  c->r[7]=c->r[8]+0x00000007u; // 803FB674
  c->r[4]=0u+0x80570000u; // 803FB678
  c->r[3]=c->r[4]+0x00004148u; // 803FB67C
  c->r[5]=0u+0x00000000u; // 803FB680
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 803FB684
  c->r[0]=c->r[3]+0x00000004u; // 803FB688
  c->ctr=c->r[7]; // 803FB68C
  cmpu(c,0,c->r[8],0x00000000u); // 803FB690
  if (!crb(c,1)) { goto L_803FB804; } // 803FB694
L_803FB698:;
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB698
  c->r[6]=c->r[6]+0x00000008u; // 803FB69C
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB6A0
  c->r[7]=c->r[7]+0x00000001u; // 803FB6A4
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB6A8
  c->r[9]=c->r[8]+c->r[5]; // 803FB6AC
  W32(c->r[9]+0x00000004u,c->r[0]); // 803FB6B0
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB6B4
  W32(c->r[8]+c->r[5],c->r[7]); // 803FB6B8
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB6BC
  W32(c->r[7]+0x00000004u,c->r[9]); // 803FB6C0
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB6C4
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB6C8
  c->r[7]=c->r[7]+0x00000001u; // 803FB6CC
  W32(c->r[3]+0x00000004u,c->r[9]); // 803FB6D0
  c->r[9]=c->r[8]+c->r[5]; // 803FB6D4
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB6D8
  W32(c->r[9]+0x00000010u,c->r[0]); // 803FB6DC
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB6E0
  {uint32_t ea=c->r[9]+0x0000000Cu; W32(ea,c->r[7]); c->r[9]=ea;} // 803FB6E4
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB6E8
  W32(c->r[7]+0x00000004u,c->r[9]); // 803FB6EC
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB6F0
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB6F4
  c->r[7]=c->r[7]+0x00000001u; // 803FB6F8
  W32(c->r[3]+0x00000004u,c->r[9]); // 803FB6FC
  c->r[9]=c->r[8]+c->r[5]; // 803FB700
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB704
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 803FB708
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB70C
  {uint32_t ea=c->r[9]+0x00000018u; W32(ea,c->r[7]); c->r[9]=ea;} // 803FB710
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB714
  W32(c->r[7]+0x00000004u,c->r[9]); // 803FB718
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB71C
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB720
  c->r[7]=c->r[7]+0x00000001u; // 803FB724
  W32(c->r[3]+0x00000004u,c->r[9]); // 803FB728
  c->r[9]=c->r[8]+c->r[5]; // 803FB72C
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB730
  W32(c->r[9]+0x00000028u,c->r[0]); // 803FB734
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB738
  {uint32_t ea=c->r[9]+0x00000024u; W32(ea,c->r[7]); c->r[9]=ea;} // 803FB73C
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB740
  W32(c->r[7]+0x00000004u,c->r[9]); // 803FB744
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB748
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB74C
  c->r[7]=c->r[7]+0x00000001u; // 803FB750
  W32(c->r[3]+0x00000004u,c->r[9]); // 803FB754
  c->r[9]=c->r[8]+c->r[5]; // 803FB758
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB75C
  W32(c->r[9]+0x00000034u,c->r[0]); // 803FB760
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB764
  {uint32_t ea=c->r[9]+0x00000030u; W32(ea,c->r[7]); c->r[9]=ea;} // 803FB768
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB76C
  W32(c->r[7]+0x00000004u,c->r[9]); // 803FB770
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB774
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB778
  c->r[7]=c->r[7]+0x00000001u; // 803FB77C
  W32(c->r[3]+0x00000004u,c->r[9]); // 803FB780
  c->r[9]=c->r[8]+c->r[5]; // 803FB784
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB788
  W32(c->r[9]+0x00000040u,c->r[0]); // 803FB78C
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB790
  {uint32_t ea=c->r[9]+0x0000003Cu; W32(ea,c->r[7]); c->r[9]=ea;} // 803FB794
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB798
  W32(c->r[7]+0x00000004u,c->r[9]); // 803FB79C
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB7A0
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB7A4
  c->r[7]=c->r[7]+0x00000001u; // 803FB7A8
  W32(c->r[3]+0x00000004u,c->r[9]); // 803FB7AC
  c->r[9]=c->r[8]+c->r[5]; // 803FB7B0
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB7B4
  W32(c->r[9]+0x0000004Cu,c->r[0]); // 803FB7B8
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB7BC
  {uint32_t ea=c->r[9]+0x00000048u; W32(ea,c->r[7]); c->r[9]=ea;} // 803FB7C0
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB7C4
  W32(c->r[7]+0x00000004u,c->r[9]); // 803FB7C8
  c->r[7]=R32(c->r[4]+0x00004148u); // 803FB7CC
  c->r[8]=R32(c->r[13]+0xFFFFF444u); // 803FB7D0
  c->r[7]=c->r[7]+0x00000001u; // 803FB7D4
  W32(c->r[3]+0x00000004u,c->r[9]); // 803FB7D8
  c->r[8]=c->r[8]+c->r[5]; // 803FB7DC
  c->r[5]=c->r[5]+0x00000060u; // 803FB7E0
  W32(c->r[4]+0x00004148u,c->r[7]); // 803FB7E4
  W32(c->r[8]+0x00000058u,c->r[0]); // 803FB7E8
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB7EC
  {uint32_t ea=c->r[8]+0x00000054u; W32(ea,c->r[7]); c->r[8]=ea;} // 803FB7F0
  c->r[7]=R32(c->r[3]+0x00000004u); // 803FB7F4
  W32(c->r[7]+0x00000004u,c->r[8]); // 803FB7F8
  W32(c->r[3]+0x00000004u,c->r[8]); // 803FB7FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FB698; } // 803FB800
L_803FB804:;
  c->r[7]=0u+0x80570000u; // 803FB804
  c->r[0]=c->r[31]-c->r[6]; // 803FB808
  c->r[5]=c->r[7]+0x00004148u; // 803FB80C
  c->r[8]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 803FB810
  c->r[4]=c->r[5]+0x00000004u; // 803FB814
  c->ctr=c->r[0]; // 803FB818
  cmpu(c,0,c->r[6],c->r[31]); // 803FB81C
  if (!crb(c,0)) { goto L_803FB858; } // 803FB820
L_803FB824:;
  c->r[3]=R32(c->r[7]+0x00004148u); // 803FB824
  c->r[6]=R32(c->r[13]+0xFFFFF444u); // 803FB828
  c->r[0]=c->r[3]+0x00000001u; // 803FB82C
  W32(c->r[7]+0x00004148u,c->r[0]); // 803FB830
  c->r[6]=c->r[6]+c->r[8]; // 803FB834
  c->r[8]=c->r[8]+0x0000000Cu; // 803FB838
  W32(c->r[6]+0x00000004u,c->r[4]); // 803FB83C
  c->r[0]=R32(c->r[5]+0x00000004u); // 803FB840
  W32(c->r[6]+0x00000000u,c->r[0]); // 803FB844
  c->r[3]=R32(c->r[5]+0x00000004u); // 803FB848
  W32(c->r[3]+0x00000004u,c->r[6]); // 803FB84C
  W32(c->r[5]+0x00000004u,c->r[6]); // 803FB850
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FB824; } // 803FB854
L_803FB858:;
  W32(c->r[13]+0xFFFFF440u,c->r[31]); // 803FB858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FB85C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FB860
  c->lr=c->r[0]; // 803FB864
  c->r[1]=c->r[1]+0x00000010u; // 803FB868
  return; // 803FB86C
}

// fn_803FB870
void f_803FB870(Ctx* __restrict c) {
  trace_call(0x803FB870u);
  c->r[0]=c->r[3]+0x00000004u; // 803FB870
  c->r[4]=0u+0x00000000u; // 803FB874
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FB878
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FB87C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803FB880
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 803FB884
  return; // 803FB888
}

// fn_803FB88C
void f_803FB88C(Ctx* __restrict c) {
  trace_call(0x803FB88Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FB88C
  c->r[0]=c->lr; // 803FB890
  cmps(c,0,(int32_t)c->r[3],0); // 803FB894
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FB898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FB89C
  c->r[31]=c->r[3]|c->r[3]; // 803FB8A0
  if (crb(c,2)) { goto L_803FB8B4; } // 803FB8A4
  cmps(c,0,(int32_t)c->r[4],0); // 803FB8A8
  if (!crb(c,1)) { goto L_803FB8B4; } // 803FB8AC
  c->lr=0x803FB8B4u; f_803FE6DC(c); // 803FB8B0
L_803FB8B4:;
  c->r[3]=c->r[31]|c->r[31]; // 803FB8B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FB8B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FB8BC
  c->lr=c->r[0]; // 803FB8C0
  c->r[1]=c->r[1]+0x00000010u; // 803FB8C4
  return; // 803FB8C8
}

// fn_803FB8CC
void f_803FB8CC(Ctx* __restrict c) {
  trace_call(0x803FB8CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FB8CC
  c->r[0]=c->lr; // 803FB8D0
  W32(c->r[1]+0x00000044u,c->r[0]); // 803FB8D4
  c->r[11]=c->r[1]+0x00000040u; // 803FB8D8
  c->lr=0x803FB8E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FB8DC
  c->r[28]=R32(c->r[3]+0x00000008u); // 803FB8E0
  c->r[30]=c->r[3]+0x00000004u; // 803FB8E4
  c->r[31]=c->r[3]|c->r[3]; // 803FB8E8
  cmpu(c,0,c->r[28],c->r[30]); // 803FB8EC
  if (crb(c,2)) { goto L_803FBABC; } // 803FB8F0
  goto L_803FB928; // 803FB8F4
L_803FB8F8:;
  c->r[29]=R32(c->r[28]+0x00000008u); // 803FB8F8
  c->r[4]=c->r[1]+0x00000008u; // 803FB8FC
  c->r[3]=c->r[29]|c->r[29]; // 803FB900
  c->lr=0x803FB908u; f_803E6850(c); // 803FB904
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FB908
  c->r[4]=c->r[1]+0x00000008u; // 803FB90C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FB910
  c->r[12]=R32(c->r[12]+0x00000080u); // 803FB914
  c->ctr=c->r[12]; // 803FB918
  if (true) { c->lr=0x803FB920u; dispatch(c,c->ctr); } // 803FB91C
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[1]);} // 803FB920
  c->r[28]=R32(c->r[28]+0x00000004u); // 803FB924
L_803FB928:;
  cmpu(c,0,c->r[28],c->r[30]); // 803FB928
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB8F8; } // 803FB92C
  c->r[9]=R32(c->r[31]+0x00000008u); // 803FB930
  c->r[6]=0u+0x00000000u; // 803FB934
  {uint32_t ea=c->r[2]+0xFFFFA8F0u; c->f[5]=RF64(ea);} // 803FB938
  c->r[28]=0u+0x00000001u; // 803FB93C
  W32(c->r[9]+0x00000000u,c->r[6]); // 803FB940
  c->r[4]=0u+0x43300000u; // 803FB944
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 803FB948
  c->r[3]=R32(c->r[31]+0x00000004u); // 803FB94C
  W32(c->r[3]+0x00000004u,c->r[6]); // 803FB950
L_803FB954:;
  c->r[10]=c->r[9]|c->r[9]; // 803FB954
  c->r[9]=0u+0x00000000u; // 803FB958
  c->r[12]=0u+0x00000000u; // 803FB95C
  c->r[29]=0u+0x00000000u; // 803FB960
  goto L_803FBA88; // 803FB964
L_803FB968:;
  c->r[11]=c->r[10]|c->r[10]; // 803FB968
  c->r[30]=0u+0x00000000u; // 803FB96C
  c->ctr=c->r[28]; // 803FB970
  cmps(c,0,(int32_t)c->r[28],0); // 803FB974
  c->r[29]=c->r[29]+0x00000001u; // 803FB978
  if (!crb(c,1)) { goto L_803FB994; } // 803FB97C
L_803FB980:;
  c->r[11]=R32(c->r[11]+0x00000004u); // 803FB980
  c->r[30]=c->r[30]+0x00000001u; // 803FB984
  cmps(c,0,(int32_t)c->r[11],0); // 803FB988
  if (crb(c,2)) { goto L_803FB994; } // 803FB98C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FB980; } // 803FB990
L_803FB994:;
  c->r[27]=c->r[28]|c->r[28]; // 803FB994
  goto L_803FBA6C; // 803FB998
L_803FB99C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FB99C
  if (!crb(c,2)) { goto L_803FB9B4; } // 803FB9A0
  c->r[3]=c->r[11]|c->r[11]; // 803FB9A4
  c->r[11]=R32(c->r[11]+0x00000004u); // 803FB9A8
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 803FB9AC
  goto L_803FBA50; // 803FB9B0
L_803FB9B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 803FB9B4
  if (crb(c,2)) { goto L_803FB9C4; } // 803FB9B8
  cmps(c,0,(int32_t)c->r[11],0); // 803FB9BC
  if (!crb(c,2)) { goto L_803FB9D4; } // 803FB9C0
L_803FB9C4:;
  c->r[3]=c->r[10]|c->r[10]; // 803FB9C4
  c->r[10]=R32(c->r[10]+0x00000004u); // 803FB9C8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 803FB9CC
  goto L_803FBA50; // 803FB9D0
L_803FB9D4:;
  c->r[8]=R32(c->r[10]+0x00000008u); // 803FB9D4
  c->r[7]=R32(c->r[11]+0x00000008u); // 803FB9D8
  c->r[5]=R32(c->r[8]+0x0000006Cu); // 803FB9DC
  c->r[3]=R32(c->r[7]+0x0000006Cu); // 803FB9E0
  c->r[5]=R32(c->r[5]+0x00000064u); // 803FB9E4
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 803FB9E8
  c->r[0]=R32(c->r[3]+0x00000064u); // 803FB9EC
  W32(c->r[1]+0x00000018u,c->r[4]); // 803FB9F0
  {uint32_t ea=c->r[8]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FB9F4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 803FB9F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FB9FC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[5]); // 803FBA00
  {uint32_t ea=c->r[7]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FBA04
  W32(c->r[1]+0x00000020u,c->r[4]); // 803FBA08
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 803FBA0C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803FBA10
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 803FBA14
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 803FBA18
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 803FBA1C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803FBA20
  fcmp(c,0,c->f[0],c->f[2]); // 803FBA24
  c->r[0]=c->cr; // 803FBA28
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 803FBA2C
  if (crb(c,1)) { goto L_803FBA44; } // 803FBA30
  c->r[3]=c->r[10]|c->r[10]; // 803FBA34
  c->r[10]=R32(c->r[10]+0x00000004u); // 803FBA38
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 803FBA3C
  goto L_803FBA50; // 803FBA40
L_803FBA44:;
  c->r[3]=c->r[11]|c->r[11]; // 803FBA44
  c->r[11]=R32(c->r[11]+0x00000004u); // 803FBA48
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 803FBA4C
L_803FBA50:;
  cmps(c,0,(int32_t)c->r[12],0); // 803FBA50
  if (crb(c,2)) { goto L_803FBA60; } // 803FBA54
  W32(c->r[12]+0x00000004u,c->r[3]); // 803FBA58
  goto L_803FBA64; // 803FBA5C
L_803FBA60:;
  c->r[9]=c->r[3]|c->r[3]; // 803FBA60
L_803FBA64:;
  W32(c->r[3]+0x00000000u,c->r[12]); // 803FBA64
  c->r[12]=c->r[3]|c->r[3]; // 803FBA68
L_803FBA6C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FBA6C
  if (crb(c,1)) { IRQCHK(c); goto L_803FB99C; } // 803FBA70
  cmps(c,0,(int32_t)c->r[27],0); // 803FBA74
  if (!crb(c,1)) { goto L_803FBA84; } // 803FBA78
  cmps(c,0,(int32_t)c->r[11],0); // 803FBA7C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB99C; } // 803FBA80
L_803FBA84:;
  c->r[10]=c->r[11]|c->r[11]; // 803FBA84
L_803FBA88:;
  cmps(c,0,(int32_t)c->r[10],0); // 803FBA88
  if (!crb(c,2)) { IRQCHK(c); goto L_803FB968; } // 803FBA8C
  cmps(c,0,(int32_t)c->r[29],1); // 803FBA90
  W32(c->r[12]+0x00000004u,c->r[6]); // 803FBA94
  if (crb(c,1)) { goto L_803FBAB4; } // 803FBA98
  W32(c->r[31]+0x00000008u,c->r[9]); // 803FBA9C
  c->r[0]=c->r[31]+0x00000004u; // 803FBAA0
  W32(c->r[31]+0x00000004u,c->r[12]); // 803FBAA4
  W32(c->r[12]+0x00000004u,c->r[0]); // 803FBAA8
  W32(c->r[9]+0x00000000u,c->r[0]); // 803FBAAC
  goto L_803FBABC; // 803FBAB0
L_803FBAB4:;
  c->r[28]=rotl(c->r[28],1)&0xFFFFFFFEu; // 803FBAB4
  IRQCHK(c); goto L_803FB954; // 803FBAB8
L_803FBABC:;
  c->r[11]=c->r[1]+0x00000040u; // 803FBABC
  c->lr=0x803FBAC4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FBAC0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803FBAC4
  c->lr=c->r[0]; // 803FBAC8
  c->r[1]=c->r[1]+0x00000040u; // 803FBACC
  return; // 803FBAD0
}

// fn_803FBAD4
void f_803FBAD4(Ctx* __restrict c) {
  trace_call(0x803FBAD4u);
  c->r[6]=0u+0x80570000u; // 803FBAD4
  c->r[5]=c->r[6]+0x00004148u; // 803FBAD8
  c->r[7]=R32(c->r[5]+0x00000008u); // 803FBADC
  c->r[0]=c->r[5]+0x00000004u; // 803FBAE0
  cmpu(c,0,c->r[7],c->r[0]); // 803FBAE4
  if (!crb(c,2)) { goto L_803FBB08; } // 803FBAE8
  c->r[0]=R8(c->r[13]+0xFFFFF448u); // 803FBAEC
  cmps(c,0,(int32_t)c->r[0],0); // 803FBAF0
  if (!crb(c,2)) { goto L_803FBB00; } // 803FBAF4
  c->r[0]=0u+0x00000001u; // 803FBAF8
  W8(c->r[13]+0xFFFFF448u,c->r[0]); // 803FBAFC
L_803FBB00:;
  c->r[3]=0u+0x00000000u; // 803FBB00
  return; // 803FBB04
L_803FBB08:;
  W32(c->r[7]+0x00000008u,c->r[4]); // 803FBB08
  c->r[5]=c->r[3]+0x00000004u; // 803FBB0C
  c->r[4]=R32(c->r[6]+0x00004148u); // 803FBB10
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FBB14
  W32(c->r[6]+0x00004148u,c->r[0]); // 803FBB18
  c->r[4]=R32(c->r[7]+0x00000004u); // 803FBB1C
  c->r[0]=R32(c->r[7]+0x00000000u); // 803FBB20
  W32(c->r[4]+0x00000000u,c->r[0]); // 803FBB24
  c->r[4]=R32(c->r[7]+0x00000000u); // 803FBB28
  c->r[0]=R32(c->r[7]+0x00000004u); // 803FBB2C
  W32(c->r[4]+0x00000004u,c->r[0]); // 803FBB30
  c->r[4]=R32(c->r[3]+0x00000000u); // 803FBB34
  c->r[0]=c->r[4]+0x00000001u; // 803FBB38
  W32(c->r[3]+0x00000000u,c->r[0]); // 803FBB3C
  c->r[3]=0u+0x00000001u; // 803FBB40
  W32(c->r[7]+0x00000004u,c->r[5]); // 803FBB44
  c->r[0]=R32(c->r[5]+0x00000000u); // 803FBB48
  W32(c->r[7]+0x00000000u,c->r[0]); // 803FBB4C
  c->r[4]=R32(c->r[5]+0x00000000u); // 803FBB50
  W32(c->r[4]+0x00000004u,c->r[7]); // 803FBB54
  W32(c->r[5]+0x00000000u,c->r[7]); // 803FBB58
  return; // 803FBB5C
}

// fn_803FBB60
void f_803FBB60(Ctx* __restrict c) {
  trace_call(0x803FBB60u);
  c->r[7]=R32(c->r[3]+0x00000008u); // 803FBB60
  c->r[0]=c->r[3]+0x00000004u; // 803FBB64
  goto L_803FBBDC; // 803FBB68
L_803FBB6C:;
  c->r[5]=R32(c->r[7]+0x00000008u); // 803FBB6C
  cmpu(c,0,c->r[5],c->r[4]); // 803FBB70
  if (!crb(c,2)) { goto L_803FBBD8; } // 803FBB74
  c->r[0]=0u+0x00000000u; // 803FBB78
  W32(c->r[7]+0x00000008u,c->r[0]); // 803FBB7C
  c->r[6]=0u+0x80570000u; // 803FBB80
  c->r[5]=c->r[6]+0x00004148u; // 803FBB84
  c->r[4]=R32(c->r[3]+0x00000000u); // 803FBB88
  c->r[5]=R32(c->r[5]+0x00000008u); // 803FBB8C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FBB90
  W32(c->r[3]+0x00000000u,c->r[0]); // 803FBB94
  c->r[3]=R32(c->r[7]+0x00000004u); // 803FBB98
  c->r[0]=R32(c->r[7]+0x00000000u); // 803FBB9C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803FBBA0
  c->r[3]=R32(c->r[7]+0x00000000u); // 803FBBA4
  c->r[0]=R32(c->r[7]+0x00000004u); // 803FBBA8
  W32(c->r[3]+0x00000004u,c->r[0]); // 803FBBAC
  c->r[3]=R32(c->r[6]+0x00004148u); // 803FBBB0
  c->r[0]=c->r[3]+0x00000001u; // 803FBBB4
  W32(c->r[6]+0x00004148u,c->r[0]); // 803FBBB8
  W32(c->r[7]+0x00000004u,c->r[5]); // 803FBBBC
  c->r[0]=R32(c->r[5]+0x00000000u); // 803FBBC0
  W32(c->r[7]+0x00000000u,c->r[0]); // 803FBBC4
  c->r[3]=R32(c->r[5]+0x00000000u); // 803FBBC8
  W32(c->r[3]+0x00000004u,c->r[7]); // 803FBBCC
  W32(c->r[5]+0x00000000u,c->r[7]); // 803FBBD0
  return; // 803FBBD4
L_803FBBD8:;
  c->r[7]=R32(c->r[7]+0x00000004u); // 803FBBD8
L_803FBBDC:;
  cmpu(c,0,c->r[7],c->r[0]); // 803FBBDC
  if (!crb(c,2)) { IRQCHK(c); goto L_803FBB6C; } // 803FBBE0
  return; // 803FBBE4
}

// fn_803FBBE8
void f_803FBBE8(Ctx* __restrict c) {
  trace_call(0x803FBBE8u);
  c->r[7]=0u+0x80570000u; // 803FBBE8
  c->r[0]=c->r[3]+0x00000004u; // 803FBBEC
  c->r[6]=c->r[7]+0x00004148u; // 803FBBF0
  c->r[8]=0u+0x00000000u; // 803FBBF4
  goto L_803FBC70; // 803FBBF8
L_803FBBFC:;
  c->r[5]=R32(c->r[10]+0x00000008u); // 803FBBFC
  goto L_803FBC68; // 803FBC00
L_803FBC04:;
  c->r[4]=R32(c->r[10]+0x00000008u); // 803FBC04
  cmpu(c,0,c->r[4],c->r[5]); // 803FBC08
  if (!crb(c,2)) { goto L_803FBC64; } // 803FBC0C
  W32(c->r[10]+0x00000008u,c->r[8]); // 803FBC10
  c->r[4]=R32(c->r[3]+0x00000000u); // 803FBC14
  c->r[9]=R32(c->r[6]+0x00000008u); // 803FBC18
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 803FBC1C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FBC20
  c->r[4]=R32(c->r[10]+0x00000004u); // 803FBC24
  c->r[5]=R32(c->r[10]+0x00000000u); // 803FBC28
  W32(c->r[4]+0x00000000u,c->r[5]); // 803FBC2C
  c->r[4]=R32(c->r[10]+0x00000000u); // 803FBC30
  c->r[5]=R32(c->r[10]+0x00000004u); // 803FBC34
  W32(c->r[4]+0x00000004u,c->r[5]); // 803FBC38
  c->r[4]=R32(c->r[7]+0x00004148u); // 803FBC3C
  c->r[4]=c->r[4]+0x00000001u; // 803FBC40
  W32(c->r[7]+0x00004148u,c->r[4]); // 803FBC44
  W32(c->r[10]+0x00000004u,c->r[9]); // 803FBC48
  c->r[4]=R32(c->r[9]+0x00000000u); // 803FBC4C
  W32(c->r[10]+0x00000000u,c->r[4]); // 803FBC50
  c->r[4]=R32(c->r[9]+0x00000000u); // 803FBC54
  W32(c->r[4]+0x00000004u,c->r[10]); // 803FBC58
  W32(c->r[9]+0x00000000u,c->r[10]); // 803FBC5C
  goto L_803FBC70; // 803FBC60
L_803FBC64:;
  c->r[10]=R32(c->r[10]+0x00000004u); // 803FBC64
L_803FBC68:;
  cmpu(c,0,c->r[10],c->r[0]); // 803FBC68
  if (!crb(c,2)) { IRQCHK(c); goto L_803FBC04; } // 803FBC6C
L_803FBC70:;
  c->r[10]=R32(c->r[3]+0x00000008u); // 803FBC70
  cmpu(c,0,c->r[10],c->r[0]); // 803FBC74
  if (!crb(c,2)) { IRQCHK(c); goto L_803FBBFC; } // 803FBC78
  return; // 803FBC7C
}

// fn_803FBC80
void f_803FBC80(Ctx* __restrict c) {
  trace_call(0x803FBC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FBC80
  c->r[0]=c->lr; // 803FBC84
  {uint32_t ea=c->r[2]+0xFFFFA8F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FBC88
  c->r[8]=0u+0x80570000u; // 803FBC8C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803FBC90
  c->r[8]=c->r[8]+0x000040F8u; // 803FBC94
  {uint32_t ea=c->r[2]+0xFFFFA8FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FBC98
  c->r[3]=c->r[8]+0x00000050u; // 803FBC9C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803FBCA0
  c->r[4]=0u+0x80400000u; // 803FBCA4
  c->r[12]=c->r[1]+0x00000028u; // 803FBCA8
  c->r[5]=c->r[1]+0x00000008u; // 803FBCAC
  W32(c->r[1]+0x00000038u,c->r[30]); // 803FBCB0
  c->r[31]=c->r[1]+0x00000030u; // 803FBCB4
  c->r[7]=c->r[8]+0x00000000u; // 803FBCB8
  c->r[10]=c->r[1]+0x00000018u; // 803FBCBC
  c->r[0]=c->r[3]+0x00000004u; // 803FBCC0
  c->r[6]=0u+0x00000000u; // 803FBCC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803FBCC8
  c->r[11]=c->r[1]+0x00000020u; // 803FBCCC
  c->r[9]=c->r[1]+0x00000010u; // 803FBCD0
  c->r[30]=c->r[8]+0x00000010u; // 803FBCD4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FBCD8
  c->r[4]=c->r[4]+0xFFFFB88Cu; // 803FBCDC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FBCE0
  c->r[5]=c->r[8]+0x00000040u; // 803FBCE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FBCE8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803FBCEC
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FBCF0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803FBCF4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803FBCF8
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FBCFC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803FBD00
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803FBD04
  {uint32_t ea=c->r[11]+0x00000000u; psq_load(c,5,ea,0,0);} // 803FBD08
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803FBD0C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803FBD10
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FBD14
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803FBD18
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803FBD1C
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,6,ea,0,0);} // 803FBD20
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[1]);} // 803FBD24
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 803FBD28
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 803FBD2C
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FBD30
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FBD34
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,6,ea,0,0);} // 803FBD38
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,4,ea,0,0);} // 803FBD3C
  {uint32_t ea=c->r[30]+0x00000018u; psq_store(c,5,ea,0,0);} // 803FBD40
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,2,ea,0,0);} // 803FBD44
  {uint32_t ea=c->r[30]+0x00000028u; psq_store(c,3,ea,0,0);} // 803FBD48
  W32(c->r[8]+0x00000050u,c->r[6]); // 803FBD4C
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FBD50
  W32(c->r[3]+0x00000004u,c->r[0]); // 803FBD54
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 803FBD58
  c->lr=0x803FBD60u; f_803ADB8C(c); // 803FBD5C
  c->r[0]=R32(c->r[1]+0x00000044u); // 803FBD60
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803FBD64
  c->r[30]=R32(c->r[1]+0x00000038u); // 803FBD68
  c->lr=c->r[0]; // 803FBD6C
  c->r[1]=c->r[1]+0x00000040u; // 803FBD70
  return; // 803FBD74
}

// fn_803FBD78
void f_803FBD78(Ctx* __restrict c) {
  trace_call(0x803FBD78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FBD78
  c->r[0]=c->lr; // 803FBD7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FBD80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803FBD84
  c->r[31]=0u+0x00000002u; // 803FBD88
  W32(c->r[1]+0x00000018u,c->r[30]); // 803FBD8C
  c->r[30]=0u+0x00000003u; // 803FBD90
  W32(c->r[1]+0x00000014u,c->r[29]); // 803FBD94
  W32(c->r[1]+0x00000010u,c->r[28]); // 803FBD98
  c->r[28]=R32(c->r[13]+0xFFFFF454u); // 803FBD9C
  goto L_803FBE0C; // 803FBDA0
L_803FBDA4:;
  c->r[0]=R16(c->r[28]+0x000000CCu); // 803FBDA4
  cmpu(c,0,c->r[0],0x00000001u); // 803FBDA8
  if (!crb(c,2)) { goto L_803FBDB8; } // 803FBDAC
  W16(c->r[28]+0x000000CCu,c->r[31]); // 803FBDB0
  goto L_803FBDC4; // 803FBDB4
L_803FBDB8:;
  cmpu(c,0,c->r[0],0x00000002u); // 803FBDB8
  if (!crb(c,2)) { goto L_803FBDC4; } // 803FBDBC
  W16(c->r[28]+0x000000CCu,c->r[30]); // 803FBDC0
L_803FBDC4:;
  c->r[0]=R32(c->r[28]+0x000000BCu); // 803FBDC4
  cmps(c,0,(int32_t)c->r[0],0); // 803FBDC8
  if (!crb(c,2)) { goto L_803FBE14; } // 803FBDCC
  c->r[0]=R32(c->r[28]+0x000000C8u); // 803FBDD0
  cmps(c,0,(int32_t)c->r[28],0); // 803FBDD4
  W32(c->r[13]+0xFFFFF454u,c->r[0]); // 803FBDD8
  if (crb(c,2)) { goto L_803FBE08; } // 803FBDDC
  c->r[4]=R32(c->r[28]+0x000000A0u); // 803FBDE0
  cmps(c,0,(int32_t)c->r[4],0); // 803FBDE4
  if (crb(c,2)) { goto L_803FBE00; } // 803FBDE8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FBDEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FBDF0
  c->r[12]=R32(c->r[12]+0x000000D8u); // 803FBDF4
  c->ctr=c->r[12]; // 803FBDF8
  if (true) { c->lr=0x803FBE00u; dispatch(c,c->ctr); } // 803FBDFC
L_803FBE00:;
  c->r[3]=c->r[28]|c->r[28]; // 803FBE00
  c->lr=0x803FBE08u; f_803FE6DC(c); // 803FBE04
L_803FBE08:;
  c->r[28]=R32(c->r[13]+0xFFFFF454u); // 803FBE08
L_803FBE0C:;
  cmps(c,0,(int32_t)c->r[28],0); // 803FBE0C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FBDA4; } // 803FBE10
L_803FBE14:;
  cmps(c,0,(int32_t)c->r[28],0); // 803FBE14
  if (crb(c,2)) { goto L_803FBEA4; } // 803FBE18
  c->r[31]=0u+0x00000003u; // 803FBE1C
  c->r[30]=0u+0x00000002u; // 803FBE20
  goto L_803FBE98; // 803FBE24
L_803FBE28:;
  c->r[0]=R16(c->r[3]+0x000000CCu); // 803FBE28
  cmpu(c,0,c->r[0],0x00000001u); // 803FBE2C
  if (!crb(c,2)) { goto L_803FBE3C; } // 803FBE30
  W16(c->r[3]+0x000000CCu,c->r[30]); // 803FBE34
  goto L_803FBE48; // 803FBE38
L_803FBE3C:;
  cmpu(c,0,c->r[0],0x00000002u); // 803FBE3C
  if (!crb(c,2)) { goto L_803FBE48; } // 803FBE40
  W16(c->r[3]+0x000000CCu,c->r[31]); // 803FBE44
L_803FBE48:;
  c->r[29]=R32(c->r[28]+0x000000C8u); // 803FBE48
  c->r[0]=R32(c->r[29]+0x000000BCu); // 803FBE4C
  cmps(c,0,(int32_t)c->r[0],0); // 803FBE50
  if (!crb(c,2)) { goto L_803FBE94; } // 803FBE54
  c->r[0]=R32(c->r[29]+0x000000C8u); // 803FBE58
  cmps(c,0,(int32_t)c->r[29],0); // 803FBE5C
  W32(c->r[28]+0x000000C8u,c->r[0]); // 803FBE60
  if (crb(c,2)) { goto L_803FBE98; } // 803FBE64
  c->r[4]=R32(c->r[29]+0x000000A0u); // 803FBE68
  cmps(c,0,(int32_t)c->r[4],0); // 803FBE6C
  if (crb(c,2)) { goto L_803FBE88; } // 803FBE70
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FBE74
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FBE78
  c->r[12]=R32(c->r[12]+0x000000D8u); // 803FBE7C
  c->ctr=c->r[12]; // 803FBE80
  if (true) { c->lr=0x803FBE88u; dispatch(c,c->ctr); } // 803FBE84
L_803FBE88:;
  c->r[3]=c->r[29]|c->r[29]; // 803FBE88
  c->lr=0x803FBE90u; f_803FE6DC(c); // 803FBE8C
  goto L_803FBE98; // 803FBE90
L_803FBE94:;
  c->r[28]=c->r[29]|c->r[29]; // 803FBE94
L_803FBE98:;
  c->r[3]=R32(c->r[28]+0x000000C8u); // 803FBE98
  cmps(c,0,(int32_t)c->r[3],0); // 803FBE9C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FBE28; } // 803FBEA0
L_803FBEA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FBEA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803FBEA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803FBEAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803FBEB0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803FBEB4
  c->lr=c->r[0]; // 803FBEB8
  c->r[1]=c->r[1]+0x00000020u; // 803FBEBC
  return; // 803FBEC0
}

// fn_803FBEC4
void f_803FBEC4(Ctx* __restrict c) {
  trace_call(0x803FBEC4u);
  c->r[0]=R32(c->r[13]+0xFFFFF458u); // 803FBEC4
  W32(c->r[3]+0x00000000u,c->r[0]); // 803FBEC8
  W32(c->r[13]+0xFFFFF458u,c->r[3]); // 803FBECC
  return; // 803FBED0
}

// fn_803FBED4
void f_803FBED4(Ctx* __restrict c) {
  trace_call(0x803FBED4u);
  c->r[4]=R32(c->r[13]+0xFFFFF458u); // 803FBED4
  cmpu(c,0,c->r[4],c->r[3]); // 803FBED8
  if (!crb(c,2)) { goto L_803FBEEC; } // 803FBEDC
  c->r[0]=R32(c->r[3]+0x00000000u); // 803FBEE0
  W32(c->r[13]+0xFFFFF458u,c->r[0]); // 803FBEE4
  return; // 803FBEE8
L_803FBEEC:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FBEEC
  if (!crb(c,2)) { goto L_803FBF18; } // 803FBEF0
  return; // 803FBEF4
  goto L_803FBF18; // 803FBEF8
L_803FBEFC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 803FBEFC
  cmpu(c,0,c->r[0],c->r[3]); // 803FBF00
  if (!crb(c,2)) { goto L_803FBF14; } // 803FBF04
  c->r[0]=R32(c->r[3]+0x00000000u); // 803FBF08
  W32(c->r[4]+0x00000000u,c->r[0]); // 803FBF0C
  return; // 803FBF10
L_803FBF14:;
  c->r[4]=c->r[0]|c->r[0]; // 803FBF14
L_803FBF18:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FBF18
  if (!crb(c,2)) { IRQCHK(c); goto L_803FBEFC; } // 803FBF1C
  return; // 803FBF20
}

// fn_803FBF24
void f_803FBF24(Ctx* __restrict c) {
  trace_call(0x803FBF24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FBF24
  c->r[0]=c->lr; // 803FBF28
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FBF2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FBF30
  c->r[31]=c->r[3]|c->r[3]; // 803FBF34
  c->r[5]=R32(c->r[3]+0x00000004u); // 803FBF38
  cmps(c,0,(int32_t)c->r[5],0); // 803FBF3C
  if (crb(c,2)) { goto L_803FBFC0; } // 803FBF40
  cmps(c,0,(int32_t)c->r[4],1); // 803FBF44
  if (!crb(c,2)) { goto L_803FBF58; } // 803FBF48
  c->r[0]=0u+0x00000001u; // 803FBF4C
  W16(c->r[5]+0x000000CCu,c->r[0]); // 803FBF50
  goto L_803FBF60; // 803FBF54
L_803FBF58:;
  c->r[0]=0u+0x00000002u; // 803FBF58
  W16(c->r[5]+0x000000CCu,c->r[0]); // 803FBF5C
L_803FBF60:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 803FBF60
  c->r[3]=R32(c->r[3]+0x000000C0u); // 803FBF64
  cmps(c,0,(int32_t)c->r[3],0); // 803FBF68
  if (crb(c,2)) { goto L_803FBFC0; } // 803FBF6C
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803FBF70
  cmps(c,0,(int32_t)c->r[3],0); // 803FBF74
  if (crb(c,2)) { goto L_803FBFC0; } // 803FBF78
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FBF7C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FBF80
  c->ctr=c->r[12]; // 803FBF84
  if (true) { c->lr=0x803FBF8Cu; dispatch(c,c->ctr); } // 803FBF88
  cmps(c,0,(int32_t)c->r[3],8); // 803FBF8C
  if (!crb(c,2)) { goto L_803FBFC0; } // 803FBF90
  c->r[3]=R32(c->r[31]+0x00000004u); // 803FBF94
  c->r[3]=R32(c->r[3]+0x000000C0u); // 803FBF98
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803FBF9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FBFA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FBFA4
  c->ctr=c->r[12]; // 803FBFA8
  if (true) { c->lr=0x803FBFB0u; dispatch(c,c->ctr); } // 803FBFAC
  cmps(c,0,(int32_t)c->r[3],8); // 803FBFB0
  if (!crb(c,2)) { goto L_803FBFC0; } // 803FBFB4
  c->r[0]=0u+0x00000000u; // 803FBFB8
  W32(c->r[31]+0x00000004u,c->r[0]); // 803FBFBC
L_803FBFC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FBFC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FBFC4
  c->lr=c->r[0]; // 803FBFC8
  c->r[1]=c->r[1]+0x00000010u; // 803FBFCC
  return; // 803FBFD0
}

// fn_803FBFD4
void f_803FBFD4(Ctx* __restrict c) {
  trace_call(0x803FBFD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FBFD4
  c->r[0]=c->lr; // 803FBFD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FBFDC
  c->r[0]=0u+0x00000000u; // 803FBFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FBFE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FBFE8
  c->r[30]=c->r[3]|c->r[3]; // 803FBFEC
  W32(c->r[3]+0x00000000u,c->r[0]); // 803FBFF0
  W32(c->r[3]+0x00000004u,c->r[0]); // 803FBFF4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FBFF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FBFFC
  c->r[12]=R32(c->r[12]+0x000000E0u); // 803FC000
  c->ctr=c->r[12]; // 803FC004
  if (true) { c->lr=0x803FC00Cu; dispatch(c,c->ctr); } // 803FC008
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)296); // 803FC00C
  c->r[31]=c->r[3]|c->r[3]; // 803FC010
  c->r[3]=c->r[4]+0x00000010u; // 803FC014
  c->lr=0x803FC01Cu; f_803FE67C(c); // 803FC018
  c->r[4]=0u+0x80400000u; // 803FC01C
  c->r[5]=0u+0x80400000u; // 803FC020
  c->r[7]=c->r[31]|c->r[31]; // 803FC024
  c->r[6]=0u+0x00000128u; // 803FC028
  c->r[4]=c->r[4]+0xFFFFC1C8u; // 803FC02C
  c->r[5]=c->r[5]+0xFFFFC1D4u; // 803FC030
  c->lr=0x803FC038u; f_803AD5CC(c); // 803FC034
  cmps(c,1,(int32_t)c->r[31],0); // 803FC038
  W32(c->r[30]+0x00000000u,c->r[3]); // 803FC03C
  c->r[5]=0u+0x00000000u; // 803FC040
  if (!crb(c,5)) { goto L_803FC18C; } // 803FC044
  cmps(c,0,(int32_t)c->r[31],8); // 803FC048
  c->r[6]=c->r[31]+0xFFFFFFF8u; // 803FC04C
  if (!crb(c,1)) { goto L_803FC14C; } // 803FC050
  c->r[4]=0u+0x00000000u; // 803FC054
  if (crb(c,4)) { goto L_803FC070; } // 803FC058
  c->r[3]=0u+0x80000000u; // 803FC05C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803FC060
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 803FC064
  if (crb(c,1)) { goto L_803FC070; } // 803FC068
  c->r[4]=0u+0x00000001u; // 803FC06C
L_803FC070:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FC070
  if (crb(c,2)) { goto L_803FC14C; } // 803FC074
  c->r[0]=c->r[6]+0x00000007u; // 803FC078
  c->r[3]=0u+0x80570000u; // 803FC07C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803FC080
  c->r[4]=0u+0x00000000u; // 803FC084
  c->r[3]=c->r[3]+0x000041A8u; // 803FC088
  c->ctr=c->r[0]; // 803FC08C
  cmps(c,0,(int32_t)c->r[6],0); // 803FC090
  if (!crb(c,1)) { goto L_803FC14C; } // 803FC094
L_803FC098:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC098
  c->r[5]=c->r[5]+0x00000008u; // 803FC09C
  c->r[7]=R32(c->r[3]+0x00000008u); // 803FC0A0
  c->r[6]=c->r[0]+c->r[4]; // 803FC0A4
  W32(c->r[6]+0x00000088u,c->r[7]); // 803FC0A8
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC0AC
  c->r[6]=c->r[0]+c->r[4]; // 803FC0B0
  W32(c->r[3]+0x00000008u,c->r[6]); // 803FC0B4
  W32(c->r[6]+0x000001B0u,c->r[6]); // 803FC0B8
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC0BC
  c->r[6]=c->r[0]+c->r[4]; // 803FC0C0
  c->r[0]=c->r[6]+0x00000128u; // 803FC0C4
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FC0C8
  W32(c->r[6]+0x000002D8u,c->r[0]); // 803FC0CC
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC0D0
  c->r[6]=c->r[0]+c->r[4]; // 803FC0D4
  c->r[0]=c->r[6]+0x00000250u; // 803FC0D8
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FC0DC
  W32(c->r[6]+0x00000400u,c->r[0]); // 803FC0E0
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC0E4
  c->r[6]=c->r[0]+c->r[4]; // 803FC0E8
  c->r[0]=c->r[6]+0x00000378u; // 803FC0EC
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FC0F0
  W32(c->r[6]+0x00000528u,c->r[0]); // 803FC0F4
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC0F8
  c->r[6]=c->r[0]+c->r[4]; // 803FC0FC
  c->r[0]=c->r[6]+0x000004A0u; // 803FC100
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FC104
  W32(c->r[6]+0x00000650u,c->r[0]); // 803FC108
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC10C
  c->r[6]=c->r[0]+c->r[4]; // 803FC110
  c->r[0]=c->r[6]+0x000005C8u; // 803FC114
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FC118
  W32(c->r[6]+0x00000778u,c->r[0]); // 803FC11C
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC120
  c->r[6]=c->r[0]+c->r[4]; // 803FC124
  c->r[0]=c->r[6]+0x000006F0u; // 803FC128
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FC12C
  W32(c->r[6]+0x000008A0u,c->r[0]); // 803FC130
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC134
  c->r[6]=c->r[0]+c->r[4]; // 803FC138
  c->r[4]=c->r[4]+0x00000940u; // 803FC13C
  c->r[0]=c->r[6]+0x00000818u; // 803FC140
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FC144
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FC098; } // 803FC148
L_803FC14C:;
  c->r[6]=0u+0x80570000u; // 803FC14C
  c->r[0]=c->r[31]-c->r[5]; // 803FC150
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)296); // 803FC154
  c->r[6]=c->r[6]+0x000041A8u; // 803FC158
  c->ctr=c->r[0]; // 803FC15C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 803FC160
  if (!crb(c,0)) { goto L_803FC18C; } // 803FC164
L_803FC168:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC168
  c->r[4]=R32(c->r[6]+0x00000008u); // 803FC16C
  c->r[3]=c->r[0]+c->r[7]; // 803FC170
  W32(c->r[3]+0x00000088u,c->r[4]); // 803FC174
  c->r[0]=R32(c->r[30]+0x00000000u); // 803FC178
  c->r[0]=c->r[0]+c->r[7]; // 803FC17C
  W32(c->r[6]+0x00000008u,c->r[0]); // 803FC180
  c->r[7]=c->r[7]+0x00000128u; // 803FC184
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FC168; } // 803FC188
L_803FC18C:;
  c->r[5]=0u+0x80570000u; // 803FC18C
  c->r[3]=c->r[30]|c->r[30]; // 803FC190
  c->r[5]=c->r[5]+0x000041A8u; // 803FC194
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803FC198
  W32(c->r[30]+0x00000004u,c->r[0]); // 803FC19C
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FC1A0
  W32(c->r[5]+0x0000000Cu,c->r[30]); // 803FC1A4
  c->r[0]=c->r[4]+0x00000001u; // 803FC1A8
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FC1AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FC1B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FC1B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FC1B8
  c->lr=c->r[0]; // 803FC1BC
  c->r[1]=c->r[1]+0x00000010u; // 803FC1C0
  return; // 803FC1C4
}

// fn_803FC1C8
void f_803FC1C8(Ctx* __restrict c) {
  trace_call(0x803FC1C8u);
  c->r[0]=0u+0x00000000u; // 803FC1C8
  W32(c->r[3]+0x00000074u,c->r[0]); // 803FC1CC
  return; // 803FC1D0
}

// fn_803FC1D4
void f_803FC1D4(Ctx* __restrict c) {
  trace_call(0x803FC1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FC1D4
  c->r[0]=c->lr; // 803FC1D8
  cmps(c,0,(int32_t)c->r[3],0); // 803FC1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FC1E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FC1E4
  c->r[31]=c->r[4]|c->r[4]; // 803FC1E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FC1EC
  c->r[30]=c->r[3]|c->r[3]; // 803FC1F0
  if (crb(c,2)) { goto L_803FC224; } // 803FC1F4
  c->r[3]=R32(c->r[3]+0x00000074u); // 803FC1F8
  cmps(c,0,(int32_t)c->r[3],0); // 803FC1FC
  if (crb(c,2)) { goto L_803FC214; } // 803FC200
  c->r[4]=0u+0x00000001u; // 803FC204
  c->lr=0x803FC20Cu; f_803FB88C(c); // 803FC208
  c->r[0]=0u+0x00000000u; // 803FC20C
  W32(c->r[30]+0x00000074u,c->r[0]); // 803FC210
L_803FC214:;
  cmps(c,0,(int32_t)c->r[31],0); // 803FC214
  if (!crb(c,1)) { goto L_803FC224; } // 803FC218
  c->r[3]=c->r[30]|c->r[30]; // 803FC21C
  c->lr=0x803FC224u; f_803FE694(c); // 803FC220
L_803FC224:;
  c->r[3]=c->r[30]|c->r[30]; // 803FC224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FC228
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FC22C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FC230
  c->lr=c->r[0]; // 803FC234
  c->r[1]=c->r[1]+0x00000010u; // 803FC238
  return; // 803FC23C
}

// fn_803FC240
void f_803FC240(Ctx* __restrict c) {
  trace_call(0x803FC240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FC240
  c->r[0]=c->lr; // 803FC244
  cmps(c,0,(int32_t)c->r[3],0); // 803FC248
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FC24C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803FC250
  c->r[27]=c->r[3]|c->r[3]; // 803FC254
  c->r[28]=c->r[4]|c->r[4]; // 803FC258
  if (crb(c,2)) { goto L_803FC38C; } // 803FC25C
  c->r[3]=R32(c->r[3]+0x00000000u); // 803FC260
  cmps(c,0,(int32_t)c->r[3],0); // 803FC264
  if (crb(c,2)) { goto L_803FC284; } // 803FC268
  c->r[4]=0u+0x80400000u; // 803FC26C
  c->r[5]=0u+0x80400000u; // 803FC270
  c->r[6]=0u+0x00000000u; // 803FC274
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FC278
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FC27C
  c->lr=0x803FC284u; f_803AD97C(c); // 803FC280
L_803FC284:;
  c->r[31]=R32(c->r[27]+0x00000004u); // 803FC284
  cmps(c,0,(int32_t)c->r[31],0); // 803FC288
  if (crb(c,2)) { goto L_803FC370; } // 803FC28C
  if (crb(c,2)) { goto L_803FC370; } // 803FC290
  c->r[3]=R32(c->r[31]+0x00000000u); // 803FC294
  cmps(c,0,(int32_t)c->r[3],0); // 803FC298
  if (crb(c,2)) { goto L_803FC2B8; } // 803FC29C
  c->r[4]=0u+0x80400000u; // 803FC2A0
  c->r[5]=0u+0x80400000u; // 803FC2A4
  c->r[6]=0u+0x00000000u; // 803FC2A8
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FC2AC
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FC2B0
  c->lr=0x803FC2B8u; f_803AD97C(c); // 803FC2B4
L_803FC2B8:;
  c->r[30]=R32(c->r[31]+0x00000004u); // 803FC2B8
  cmps(c,0,(int32_t)c->r[30],0); // 803FC2BC
  if (crb(c,2)) { goto L_803FC35C; } // 803FC2C0
  if (crb(c,2)) { goto L_803FC35C; } // 803FC2C4
  c->r[3]=R32(c->r[30]+0x00000000u); // 803FC2C8
  cmps(c,0,(int32_t)c->r[3],0); // 803FC2CC
  if (crb(c,2)) { goto L_803FC2EC; } // 803FC2D0
  c->r[4]=0u+0x80400000u; // 803FC2D4
  c->r[5]=0u+0x80400000u; // 803FC2D8
  c->r[6]=0u+0x00000000u; // 803FC2DC
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FC2E0
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FC2E4
  c->lr=0x803FC2ECu; f_803AD97C(c); // 803FC2E8
L_803FC2EC:;
  c->r[29]=R32(c->r[30]+0x00000004u); // 803FC2EC
  cmps(c,0,(int32_t)c->r[29],0); // 803FC2F0
  if (crb(c,2)) { goto L_803FC348; } // 803FC2F4
  if (crb(c,2)) { goto L_803FC348; } // 803FC2F8
  c->r[3]=R32(c->r[29]+0x00000000u); // 803FC2FC
  cmps(c,0,(int32_t)c->r[3],0); // 803FC300
  if (crb(c,2)) { goto L_803FC320; } // 803FC304
  c->r[4]=0u+0x80400000u; // 803FC308
  c->r[5]=0u+0x80400000u; // 803FC30C
  c->r[6]=0u+0x00000000u; // 803FC310
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FC314
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FC318
  c->lr=0x803FC320u; f_803AD97C(c); // 803FC31C
L_803FC320:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803FC320
  cmps(c,0,(int32_t)c->r[3],0); // 803FC324
  if (crb(c,2)) { goto L_803FC334; } // 803FC328
  c->r[4]=0u+0x00000001u; // 803FC32C
  c->lr=0x803FC334u; f_803FC240(c); // 803FC330
L_803FC334:;
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FC334
  c->r[3]=c->r[29]|c->r[29]; // 803FC338
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FC33C
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FC340
  c->lr=0x803FC348u; f_803FE694(c); // 803FC344
L_803FC348:;
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FC348
  c->r[3]=c->r[30]|c->r[30]; // 803FC34C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FC350
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FC354
  c->lr=0x803FC35Cu; f_803FE694(c); // 803FC358
L_803FC35C:;
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FC35C
  c->r[3]=c->r[31]|c->r[31]; // 803FC360
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FC364
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FC368
  c->lr=0x803FC370u; f_803FE694(c); // 803FC36C
L_803FC370:;
  c->r[3]=R32(c->r[13]+0xFFFFF45Cu); // 803FC370
  cmps(c,0,(int32_t)c->r[28],0); // 803FC374
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803FC378
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FC37C
  if (!crb(c,1)) { goto L_803FC38C; } // 803FC380
  c->r[3]=c->r[27]|c->r[27]; // 803FC384
  c->lr=0x803FC38Cu; f_803FE694(c); // 803FC388
L_803FC38C:;
  c->r[3]=c->r[27]|c->r[27]; // 803FC38C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803FC390
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FC394
  c->lr=c->r[0]; // 803FC398
  c->r[1]=c->r[1]+0x00000020u; // 803FC39C
  return; // 803FC3A0
}

// fn_803FC3A4
void f_803FC3A4(Ctx* __restrict c) {
  trace_call(0x803FC3A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FC3A4
  c->r[0]=c->lr; // 803FC3A8
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FC3AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FC3B0
  c->r[0]=0u+0x00000000u; // 803FC3B4
  fcmp(c,0,c->f[1],c->f[0]); // 803FC3B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803FC3BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803FC3C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803FC3C4
  c->r[29]=c->r[3]|c->r[3]; // 803FC3C8
  c->r[5]=R32(c->r[3]+0x00000004u); // 803FC3CC
  c->r[5]=c->r[5]+0x00000001u; // 803FC3D0
  W32(c->r[3]+0x00000004u,c->r[5]); // 803FC3D4
  W32(c->r[13]+0xFFFFF460u,c->r[0]); // 803FC3D8
  if (!crb(c,0)) { goto L_803FC3E4; } // 803FC3DC
  c->f[1]=c->f[0]; // 803FC3E0
L_803FC3E4:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FC3E4
  c->r[0]=0u+0x00000000u; // 803FC3E8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 803FC3EC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803FC3F0
  W32(c->r[3]+0x00000014u,c->r[4]); // 803FC3F4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 803FC3F8
  c->r[3]=R32(c->r[13]+0xFFFFF454u); // 803FC3FC
  goto L_803FC410; // 803FC400
L_803FC404:;
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803FC404
  W32(c->r[3]+0x000000C0u,c->r[0]); // 803FC408
  c->r[3]=R32(c->r[3]+0x000000C8u); // 803FC40C
L_803FC410:;
  cmps(c,0,(int32_t)c->r[3],0); // 803FC410
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC404; } // 803FC414
  c->r[4]=R32(c->r[29]+0x00000000u); // 803FC418
  c->r[3]=c->r[29]|c->r[29]; // 803FC41C
  c->lr=0x803FC424u; f_803FD8B0(c); // 803FC420
  c->r[3]=c->r[29]|c->r[29]; // 803FC424
  c->lr=0x803FC42Cu; f_803FC610(c); // 803FC428
  c->r[0]=0u+0x00000000u; // 803FC42C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 803FC430
  c->r[4]=R32(c->r[29]+0x00000000u); // 803FC434
  c->r[30]=0u+0x00000000u; // 803FC438
  goto L_803FC474; // 803FC43C
L_803FC440:;
  c->r[0]=R32(c->r[4]+0x00000080u); // 803FC440
  c->r[31]=R32(c->r[4]+0x00000088u); // 803FC444
  cmps(c,0,(int32_t)c->r[0],0); // 803FC448
  if (crb(c,2)) { goto L_803FC460; } // 803FC44C
  c->r[3]=c->r[29]|c->r[29]; // 803FC450
  c->lr=0x803FC458u; f_803FD618(c); // 803FC454
  c->r[4]=c->r[31]|c->r[31]; // 803FC458
  goto L_803FC474; // 803FC45C
L_803FC460:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 803FC460
  c->r[4]=c->r[31]|c->r[31]; // 803FC464
  c->r[30]=0u+0x00000001u; // 803FC468
  c->r[0]=c->r[3]+0x00000001u; // 803FC46C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 803FC470
L_803FC474:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FC474
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC440; } // 803FC478
  c->r[4]=R32(c->r[13]+0xFFFFF458u); // 803FC47C
  c->r[0]=0u+0x00000000u; // 803FC480
  goto L_803FC4A8; // 803FC484
L_803FC488:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 803FC488
  cmps(c,0,(int32_t)c->r[3],0); // 803FC48C
  if (crb(c,2)) { goto L_803FC4A4; } // 803FC490
  c->r[3]=R32(c->r[3]+0x000000BCu); // 803FC494
  cmps(c,0,(int32_t)c->r[3],0); // 803FC498
  if (!crb(c,2)) { goto L_803FC4A4; } // 803FC49C
  W32(c->r[4]+0x00000004u,c->r[0]); // 803FC4A0
L_803FC4A4:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 803FC4A4
L_803FC4A8:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FC4A8
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC488; } // 803FC4AC
  c->lr=0x803FC4B4u; f_803FBD78(c); // 803FC4B0
  c->r[3]=c->r[30]|c->r[30]; // 803FC4B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803FC4B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803FC4BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803FC4C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FC4C4
  c->lr=c->r[0]; // 803FC4C8
  c->r[1]=c->r[1]+0x00000020u; // 803FC4CC
  return; // 803FC4D0
}

// fn_803FC4D4
void f_803FC4D4(Ctx* __restrict c) {
  trace_call(0x803FC4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FC4D4
  c->r[0]=c->lr; // 803FC4D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 803FC4DC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803FC4E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803FC4E4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803FC4E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803FC4EC
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[30]=c->ps1[30]=RF32(ea);} // 803FC4F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803FC4F4
  c->r[31]=c->r[1]+0x00000008u; // 803FC4F8
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[31]=c->ps1[31]=RF32(ea);} // 803FC4FC
  W32(c->r[1]+0x00000028u,c->r[30]); // 803FC500
  c->r[30]=c->r[1]+0x00000010u; // 803FC504
  W32(c->r[1]+0x00000024u,c->r[29]); // 803FC508
  W32(c->r[1]+0x00000020u,c->r[28]); // 803FC50C
  c->r[29]=R32(c->r[13]+0xFFFFF458u); // 803FC510
  goto L_803FC5D8; // 803FC514
L_803FC518:;
  c->r[28]=R32(c->r[29]+0x00000004u); // 803FC518
  cmps(c,0,(int32_t)c->r[28],0); // 803FC51C
  if (crb(c,2)) { goto L_803FC5D4; } // 803FC520
  {uint32_t ea=c->r[28]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FC524
  fcmp(c,0,c->f[30],c->f[0]); // 803FC528
  if (crb(c,2)) { goto L_803FC5C4; } // 803FC52C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FC530
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FC534
  c->r[12]=R32(c->r[12]+0x000000C8u); // 803FC538
  c->ctr=c->r[12]; // 803FC53C
  if (true) { c->lr=0x803FC544u; dispatch(c,c->ctr); } // 803FC540
  fcmp(c,0,c->f[30],c->f[1]); // 803FC544
  if (!crb(c,2)) { goto L_803FC560; } // 803FC548
  {uint32_t ea=c->r[28]+0x00000018u; psq_load(c,0,ea,0,0);} // 803FC54C
  {uint32_t ea=c->r[28]+0x00000010u; psq_load(c,1,ea,0,0);} // 803FC550
  {uint32_t ea=c->r[28]+0x00000090u; psq_store(c,1,ea,0,0);} // 803FC554
  {uint32_t ea=c->r[28]+0x00000098u; psq_store(c,0,ea,0,0);} // 803FC558
  goto L_803FC5D4; // 803FC55C
L_803FC560:;
  fcmp(c,0,c->f[31],c->f[1]); // 803FC560
  if (!crb(c,2)) { goto L_803FC57C; } // 803FC564
  {uint32_t ea=c->r[28]+0x00000018u; psq_load(c,0,ea,0,0);} // 803FC568
  {uint32_t ea=c->r[28]+0x00000010u; psq_load(c,1,ea,0,0);} // 803FC56C
  {uint32_t ea=c->r[28]+0x00000090u; psq_store(c,1,ea,0,0);} // 803FC570
  {uint32_t ea=c->r[28]+0x00000098u; psq_store(c,0,ea,0,0);} // 803FC574
  goto L_803FC5D4; // 803FC578
L_803FC57C:;
  {uint32_t ea=c->r[28]+0x00000018u; psq_load(c,0,ea,0,0);} // 803FC57C
  {uint32_t ea=c->r[28]+0x00000058u; psq_load(c,3,ea,0,0);} // 803FC580
  {uint32_t ea=c->r[28]+0x00000010u; psq_load(c,2,ea,0,0);} // 803FC584
  {double t0=S(c->f[0]-c->f[3]), t1=S(c->ps1[0]-c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 803FC588
  {uint32_t ea=c->r[28]+0x00000050u; psq_load(c,4,ea,0,0);} // 803FC58C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FC590
  {double t0=S(c->f[2]-c->f[4]), t1=S(c->ps1[2]-c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 803FC594
  c->f[0]=c->ps1[0]=S(c->f[0]); // 803FC598
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803FC59C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803FC5A0
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,2,ea,0,0);} // 803FC5A4
  {double t0=S(c->f[4]+c->f[2]), t1=S(c->ps1[4]+c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803FC5A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FC5AC
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FC5B0
  {uint32_t ea=c->r[28]+0x00000090u; psq_store(c,1,ea,0,0);} // 803FC5B4
  {double t0=S(c->f[3]+c->f[0]), t1=S(c->ps1[3]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803FC5B8
  {uint32_t ea=c->r[28]+0x00000098u; WF32(ea,c->f[0]);} // 803FC5BC
  goto L_803FC5D4; // 803FC5C0
L_803FC5C4:;
  {uint32_t ea=c->r[28]+0x00000058u; psq_load(c,0,ea,0,0);} // 803FC5C4
  {uint32_t ea=c->r[28]+0x00000050u; psq_load(c,1,ea,0,0);} // 803FC5C8
  {uint32_t ea=c->r[28]+0x00000090u; psq_store(c,1,ea,0,0);} // 803FC5CC
  {uint32_t ea=c->r[28]+0x00000098u; psq_store(c,0,ea,0,0);} // 803FC5D0
L_803FC5D4:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 803FC5D4
L_803FC5D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 803FC5D8
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC518; } // 803FC5DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803FC5E0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803FC5E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803FC5E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803FC5EC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803FC5F0
  c->r[30]=R32(c->r[1]+0x00000028u); // 803FC5F4
  c->r[29]=R32(c->r[1]+0x00000024u); // 803FC5F8
  c->r[0]=R32(c->r[1]+0x00000054u); // 803FC5FC
  c->r[28]=R32(c->r[1]+0x00000020u); // 803FC600
  c->lr=c->r[0]; // 803FC604
  c->r[1]=c->r[1]+0x00000050u; // 803FC608
  return; // 803FC60C
}

// fn_803FC610
void f_803FC610(Ctx* __restrict c) {
  trace_call(0x803FC610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FC610
  c->r[0]=c->lr; // 803FC614
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FC618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FC61C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FC620
  c->r[3]=R32(c->r[13]+0xFFFFF468u); // 803FC624
  goto L_803FC65C; // 803FC628
L_803FC62C:;
  c->r[0]=R32(c->r[3]+0x00000194u); // 803FC62C
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 803FC630
  c->r[4]=R32(c->r[3]+0x00000194u); // 803FC634
  goto L_803FC650; // 803FC638
L_803FC63C:;
  c->r[0]=R32(c->r[4]+0x00000040u); // 803FC63C
  W32(c->r[4]+0x00000044u,c->r[0]); // 803FC640
  c->r[0]=R32(c->r[4]+0x00000054u); // 803FC644
  W32(c->r[4]+0x0000005Cu,c->r[0]); // 803FC648
  c->r[4]=R32(c->r[4]+0x00000040u); // 803FC64C
L_803FC650:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FC650
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC63C; } // 803FC654
  c->r[3]=R32(c->r[3]+0x00000190u); // 803FC658
L_803FC65C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803FC65C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC62C; } // 803FC660
  c->r[31]=R32(c->r[13]+0xFFFFF468u); // 803FC664
  goto L_803FC698; // 803FC668
L_803FC66C:;
  c->r[30]=R32(c->r[31]+0x0000019Cu); // 803FC66C
  goto L_803FC68C; // 803FC670
L_803FC674:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FC674
  c->r[3]=c->r[30]|c->r[30]; // 803FC678
  c->r[12]=R32(c->r[12]+0x00000090u); // 803FC67C
  c->ctr=c->r[12]; // 803FC680
  if (true) { c->lr=0x803FC688u; dispatch(c,c->ctr); } // 803FC684
  c->r[30]=R32(c->r[30]+0x00000044u); // 803FC688
L_803FC68C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FC68C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC674; } // 803FC690
  c->r[31]=R32(c->r[31]+0x00000190u); // 803FC694
L_803FC698:;
  cmps(c,0,(int32_t)c->r[31],0); // 803FC698
  if (!crb(c,2)) { IRQCHK(c); goto L_803FC66C; } // 803FC69C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FC6A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FC6A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FC6A8
  c->lr=c->r[0]; // 803FC6AC
  c->r[1]=c->r[1]+0x00000010u; // 803FC6B0
  return; // 803FC6B4
}

// fn_803FC6B8
void f_803FC6B8(Ctx* __restrict c) {
  trace_call(0x803FC6B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FC6B8
  c->r[0]=c->lr; // 803FC6BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803FC6C0
  c->r[11]=c->r[1]+0x00000040u; // 803FC6C4
  c->lr=0x803FC6CCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FC6C8
  c->r[27]=c->r[3]|c->r[3]; // 803FC6CC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FC6D0
  c->r[24]=c->r[4]|c->r[4]; // 803FC6D4
  c->r[28]=c->r[5]|c->r[5]; // 803FC6D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FC6DC
  c->r[25]=c->r[6]|c->r[6]; // 803FC6E0
  c->r[29]=c->r[7]|c->r[7]; // 803FC6E4
  c->r[30]=c->r[8]|c->r[8]; // 803FC6E8
  c->r[12]=R32(c->r[12]+0x000000F8u); // 803FC6EC
  c->r[26]=c->r[9]|c->r[9]; // 803FC6F0
  c->r[31]=c->r[10]|c->r[10]; // 803FC6F4
  c->ctr=c->r[12]; // 803FC6F8
  if (true) { c->lr=0x803FC700u; dispatch(c,c->ctr); } // 803FC6FC
  cmps(c,0,(int32_t)c->r[3],0); // 803FC700
  if (crb(c,2)) { goto L_803FC710; } // 803FC704
  c->r[3]=0u+0x00000000u; // 803FC708
  goto L_803FCA1C; // 803FC70C
L_803FC710:;
  c->r[3]=c->r[27]|c->r[27]; // 803FC710
  c->r[4]=c->r[24]|c->r[24]; // 803FC714
  c->r[5]=c->r[25]|c->r[25]; // 803FC718
  c->r[6]=c->r[30]|c->r[30]; // 803FC71C
  c->r[7]=c->r[26]|c->r[26]; // 803FC720
  c->r[8]=c->r[31]|c->r[31]; // 803FC724
  c->lr=0x803FC72Cu; f_803FD27C(c); // 803FC728
  cmps(c,0,(int32_t)c->r[3],0); // 803FC72C
  c->r[31]=c->r[3]|c->r[3]; // 803FC730
  if (crb(c,2)) { goto L_803FCA08; } // 803FC734
  c->r[4]=R32(c->r[13]+0xFFFFF430u); // 803FC738
  cmps(c,0,(int32_t)c->r[28],0); // 803FC73C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 803FC740
  W32(c->r[3]+0x00000110u,c->r[0]); // 803FC744
  if (crb(c,2)) { goto L_803FC9EC; } // 803FC748
  c->r[3]=0u+0x00000260u; // 803FC74C
  c->lr=0x803FC754u; f_803FE6C4(c); // 803FC750
  cmps(c,0,(int32_t)c->r[3],0); // 803FC754
  c->r[4]=c->r[3]|c->r[3]; // 803FC758
  if (crb(c,2)) { goto L_803FC968; } // 803FC75C
  c->r[7]=0u+0x80570000u; // 803FC760
  c->r[6]=0u+0x80570000u; // 803FC764
  c->r[7]=c->r[7]+0x00004158u; // 803FC768
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FC76C
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,3,ea,0,0);} // 803FC770
  c->r[6]=c->r[6]+0x00002A80u; // 803FC774
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FC778
  c->r[5]=0u+0x00000000u; // 803FC77C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 803FC780
  c->r[0]=0u+0x00000002u; // 803FC784
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FC788
  c->r[9]=c->r[4]|c->r[4]; // 803FC78C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 803FC790
  c->r[8]=0u+0x00000000u; // 803FC794
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FC798
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,4,ea,0,0);} // 803FC79C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FC7A0
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,3,ea,0,0);} // 803FC7A4
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,4,ea,0,0);} // 803FC7A8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[2]);} // 803FC7AC
  {uint32_t ea=c->r[3]+0x00000058u; psq_load(c,2,ea,0,0);} // 803FC7B0
  {uint32_t ea=c->r[3]+0x00000090u; psq_store(c,3,ea,0,0);} // 803FC7B4
  {uint32_t ea=c->r[3]+0x00000098u; psq_store(c,2,ea,0,0);} // 803FC7B8
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,3,ea,0,0);} // 803FC7BC
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FC7C0
  {uint32_t ea=c->r[3]+0x000000A8u; psq_store(c,2,ea,0,0);} // 803FC7C4
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,3,ea,0,0);} // 803FC7C8
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 803FC7CC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FC7D0
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,3,ea,0,0);} // 803FC7D4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 803FC7D8
  {uint32_t ea=c->r[6]+0x00000018u; psq_load(c,2,ea,0,0);} // 803FC7DC
  {uint32_t ea=c->r[6]+0x00000010u; psq_load(c,3,ea,0,0);} // 803FC7E0
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,3,ea,0,0);} // 803FC7E4
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,2,ea,0,0);} // 803FC7E8
  {uint32_t ea=c->r[6]+0x00000028u; psq_load(c,2,ea,0,0);} // 803FC7EC
  {uint32_t ea=c->r[6]+0x00000020u; psq_load(c,3,ea,0,0);} // 803FC7F0
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,3,ea,0,0);} // 803FC7F4
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,2,ea,0,0);} // 803FC7F8
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,0,0);} // 803FC7FC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FC800
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,3,ea,0,0);} // 803FC804
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,2,ea,0,0);} // 803FC808
  {uint32_t ea=c->r[6]+0x00000018u; psq_load(c,2,ea,0,0);} // 803FC80C
  {uint32_t ea=c->r[6]+0x00000010u; psq_load(c,3,ea,0,0);} // 803FC810
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,3,ea,0,0);} // 803FC814
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,2,ea,0,0);} // 803FC818
  {uint32_t ea=c->r[6]+0x00000028u; psq_load(c,2,ea,0,0);} // 803FC81C
  {uint32_t ea=c->r[6]+0x00000020u; psq_load(c,3,ea,0,0);} // 803FC820
  {uint32_t ea=c->r[3]+0x00000080u; psq_store(c,3,ea,0,0);} // 803FC824
  {uint32_t ea=c->r[3]+0x00000088u; psq_store(c,2,ea,0,0);} // 803FC828
  W32(c->r[3]+0x000000B8u,c->r[5]); // 803FC82C
  W32(c->r[3]+0x000000BCu,c->r[5]); // 803FC830
  W32(c->r[3]+0x000000C0u,c->r[5]); // 803FC834
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[1]);} // 803FC838
  W16(c->r[3]+0x000000CCu,c->r[5]); // 803FC83C
  W16(c->r[3]+0x000000CEu,c->r[5]); // 803FC840
  W32(c->r[3]+0x000000C8u,c->r[5]); // 803FC844
  W32(c->r[3]+0x000000A0u,c->r[5]); // 803FC848
  W32(c->r[3]+0x000000A4u,c->r[5]); // 803FC84C
  c->ctr=c->r[0]; // 803FC850
L_803FC854:;
  {uint32_t ea=c->r[9]+0x000000D0u; WF32(ea,c->f[0]);} // 803FC854
  c->r[8]=c->r[8]+0x00000030u; // 803FC858
  {uint32_t ea=c->r[9]+0x000000D4u; WF32(ea,c->f[0]);} // 803FC85C
  {uint32_t ea=c->r[9]+0x000000D8u; WF32(ea,c->f[0]);} // 803FC860
  {uint32_t ea=c->r[9]+0x000000DCu; WF32(ea,c->f[0]);} // 803FC864
  {uint32_t ea=c->r[9]+0x000000E0u; WF32(ea,c->f[0]);} // 803FC868
  {uint32_t ea=c->r[9]+0x000000E4u; WF32(ea,c->f[0]);} // 803FC86C
  {uint32_t ea=c->r[9]+0x000000E8u; WF32(ea,c->f[0]);} // 803FC870
  {uint32_t ea=c->r[9]+0x000000ECu; WF32(ea,c->f[0]);} // 803FC874
  {uint32_t ea=c->r[9]+0x000000F0u; WF32(ea,c->f[0]);} // 803FC878
  {uint32_t ea=c->r[9]+0x000000F4u; WF32(ea,c->f[0]);} // 803FC87C
  {uint32_t ea=c->r[9]+0x000000F8u; WF32(ea,c->f[0]);} // 803FC880
  {uint32_t ea=c->r[9]+0x000000FCu; WF32(ea,c->f[0]);} // 803FC884
  {uint32_t ea=c->r[9]+0x00000100u; WF32(ea,c->f[0]);} // 803FC888
  {uint32_t ea=c->r[9]+0x00000104u; WF32(ea,c->f[0]);} // 803FC88C
  {uint32_t ea=c->r[9]+0x00000108u; WF32(ea,c->f[0]);} // 803FC890
  {uint32_t ea=c->r[9]+0x0000010Cu; WF32(ea,c->f[0]);} // 803FC894
  {uint32_t ea=c->r[9]+0x00000110u; WF32(ea,c->f[0]);} // 803FC898
  {uint32_t ea=c->r[9]+0x00000114u; WF32(ea,c->f[0]);} // 803FC89C
  {uint32_t ea=c->r[9]+0x00000118u; WF32(ea,c->f[0]);} // 803FC8A0
  {uint32_t ea=c->r[9]+0x0000011Cu; WF32(ea,c->f[0]);} // 803FC8A4
  {uint32_t ea=c->r[9]+0x00000120u; WF32(ea,c->f[0]);} // 803FC8A8
  {uint32_t ea=c->r[9]+0x00000124u; WF32(ea,c->f[0]);} // 803FC8AC
  {uint32_t ea=c->r[9]+0x00000128u; WF32(ea,c->f[0]);} // 803FC8B0
  {uint32_t ea=c->r[9]+0x0000012Cu; WF32(ea,c->f[0]);} // 803FC8B4
  {uint32_t ea=c->r[9]+0x00000130u; WF32(ea,c->f[0]);} // 803FC8B8
  {uint32_t ea=c->r[9]+0x00000134u; WF32(ea,c->f[0]);} // 803FC8BC
  {uint32_t ea=c->r[9]+0x00000138u; WF32(ea,c->f[0]);} // 803FC8C0
  {uint32_t ea=c->r[9]+0x0000013Cu; WF32(ea,c->f[0]);} // 803FC8C4
  {uint32_t ea=c->r[9]+0x00000140u; WF32(ea,c->f[0]);} // 803FC8C8
  {uint32_t ea=c->r[9]+0x00000144u; WF32(ea,c->f[0]);} // 803FC8CC
  {uint32_t ea=c->r[9]+0x00000148u; WF32(ea,c->f[0]);} // 803FC8D0
  {uint32_t ea=c->r[9]+0x0000014Cu; WF32(ea,c->f[0]);} // 803FC8D4
  {uint32_t ea=c->r[9]+0x00000150u; WF32(ea,c->f[0]);} // 803FC8D8
  {uint32_t ea=c->r[9]+0x00000154u; WF32(ea,c->f[0]);} // 803FC8DC
  {uint32_t ea=c->r[9]+0x00000158u; WF32(ea,c->f[0]);} // 803FC8E0
  {uint32_t ea=c->r[9]+0x0000015Cu; WF32(ea,c->f[0]);} // 803FC8E4
  {uint32_t ea=c->r[9]+0x00000160u; WF32(ea,c->f[0]);} // 803FC8E8
  {uint32_t ea=c->r[9]+0x00000164u; WF32(ea,c->f[0]);} // 803FC8EC
  {uint32_t ea=c->r[9]+0x00000168u; WF32(ea,c->f[0]);} // 803FC8F0
  {uint32_t ea=c->r[9]+0x0000016Cu; WF32(ea,c->f[0]);} // 803FC8F4
  {uint32_t ea=c->r[9]+0x00000170u; WF32(ea,c->f[0]);} // 803FC8F8
  {uint32_t ea=c->r[9]+0x00000174u; WF32(ea,c->f[0]);} // 803FC8FC
  {uint32_t ea=c->r[9]+0x00000178u; WF32(ea,c->f[0]);} // 803FC900
  {uint32_t ea=c->r[9]+0x0000017Cu; WF32(ea,c->f[0]);} // 803FC904
  {uint32_t ea=c->r[9]+0x00000180u; WF32(ea,c->f[0]);} // 803FC908
  {uint32_t ea=c->r[9]+0x00000184u; WF32(ea,c->f[0]);} // 803FC90C
  {uint32_t ea=c->r[9]+0x00000188u; WF32(ea,c->f[0]);} // 803FC910
  {uint32_t ea=c->r[9]+0x0000018Cu; WF32(ea,c->f[0]);} // 803FC914
  c->r[9]=c->r[9]+0x000000C0u; // 803FC918
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FC854; } // 803FC91C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 803FC920
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FC924
  c->r[5]=c->r[3]+c->r[0]; // 803FC928
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FC92C
  {uint32_t ea=c->r[5]+0x000000D0u; WF32(ea,c->f[1]);} // 803FC930
  c->r[6]=c->r[1]+0x00000008u; // 803FC934
  c->r[7]=c->r[1]+0x00000010u; // 803FC938
  {uint32_t ea=c->r[5]+0x000000D4u; WF32(ea,c->f[1]);} // 803FC93C
  {uint32_t ea=c->r[5]+0x000000D8u; WF32(ea,c->f[1]);} // 803FC940
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803FC944
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803FC948
  {uint32_t ea=c->r[5]+0x000000DCu; WF32(ea,c->f[1]);} // 803FC94C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 803FC950
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FC954
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803FC958
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FC95C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FC960
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 803FC964
L_803FC968:;
  cmps(c,0,(int32_t)c->r[3],0); // 803FC968
  W32(c->r[31]+0x00000068u,c->r[3]); // 803FC96C
  if (!crb(c,2)) { goto L_803FC988; } // 803FC970
  c->r[3]=c->r[27]|c->r[27]; // 803FC974
  c->r[4]=c->r[31]|c->r[31]; // 803FC978
  c->lr=0x803FC980u; f_803FD618(c); // 803FC97C
  c->r[3]=0u+0x00000000u; // 803FC980
  goto L_803FCA1C; // 803FC984
L_803FC988:;
  c->r[3]=c->r[28]|c->r[28]; // 803FC988
  c->lr=0x803FC990u; f_803E2D78(c); // 803FC98C
  c->r[4]=R32(c->r[31]+0x00000068u); // 803FC990
  c->r[0]=0u+0x00000001u; // 803FC994
  c->r[3]=R32(c->r[13]+0xFFFFF454u); // 803FC998
  cmps(c,0,(int32_t)c->r[29],0); // 803FC99C
  W32(c->r[4]+0x000000C8u,c->r[3]); // 803FC9A0
  W32(c->r[13]+0xFFFFF454u,c->r[4]); // 803FC9A4
  c->r[3]=R32(c->r[31]+0x00000068u); // 803FC9A8
  W32(c->r[3]+0x000000BCu,c->r[0]); // 803FC9AC
  c->r[3]=R32(c->r[31]+0x00000068u); // 803FC9B0
  W32(c->r[3]+0x000000C0u,c->r[31]); // 803FC9B4
  c->r[3]=R32(c->r[31]+0x00000068u); // 803FC9B8
  if (crb(c,2)) { goto L_803FC9C8; } // 803FC9BC
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FC9C0
  goto L_803FC9CC; // 803FC9C4
L_803FC9C8:;
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FC9C8
L_803FC9CC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FC9CC
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 803FC9D0
  if (crb(c,2)) { goto L_803FCA18; } // 803FC9D4
  c->r[3]=R32(c->r[31]+0x00000068u); // 803FC9D8
  c->r[0]=R16(c->r[3]+0x000000CEu); // 803FC9DC
  c->r[0]=c->r[0]|0x00000001u; // 803FC9E0
  W16(c->r[3]+0x000000CEu,c->r[0]); // 803FC9E4
  goto L_803FCA18; // 803FC9E8
L_803FC9EC:;
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 803FC9EC
  c->r[4]=c->r[31]|c->r[31]; // 803FC9F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FC9F4
  c->r[12]=R32(c->r[12]+0x00000060u); // 803FC9F8
  c->ctr=c->r[12]; // 803FC9FC
  if (true) { c->lr=0x803FCA04u; dispatch(c,c->ctr); } // 803FCA00
  goto L_803FCA18; // 803FCA04
L_803FCA08:;
  cmps(c,0,(int32_t)c->r[28],0); // 803FCA08
  if (crb(c,2)) { goto L_803FCA18; } // 803FCA0C
  c->r[3]=c->r[28]|c->r[28]; // 803FCA10
  c->lr=0x803FCA18u; f_803E2D80(c); // 803FCA14
L_803FCA18:;
  c->r[3]=c->r[31]|c->r[31]; // 803FCA18
L_803FCA1C:;
  c->r[11]=c->r[1]+0x00000040u; // 803FCA1C
  c->lr=0x803FCA24u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FCA20
  c->r[0]=R32(c->r[1]+0x00000044u); // 803FCA24
  c->lr=c->r[0]; // 803FCA28
  c->r[1]=c->r[1]+0x00000040u; // 803FCA2C
  return; // 803FCA30
}

// fn_803FCA34
void f_803FCA34(Ctx* __restrict c) {
  trace_call(0x803FCA34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FCA34
  c->r[0]=c->lr; // 803FCA38
  W32(c->r[1]+0x00000034u,c->r[0]); // 803FCA3C
  c->r[11]=c->r[1]+0x00000030u; // 803FCA40
  c->lr=0x803FCA48u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FCA44
  cmps(c,0,(int32_t)c->r[4],0); // 803FCA48
  c->r[25]=c->r[3]|c->r[3]; // 803FCA4C
  c->r[26]=c->r[4]|c->r[4]; // 803FCA50
  c->r[27]=c->r[5]|c->r[5]; // 803FCA54
  c->r[28]=c->r[6]|c->r[6]; // 803FCA58
  c->r[29]=c->r[7]|c->r[7]; // 803FCA5C
  if (!crb(c,2)) { goto L_803FCA6C; } // 803FCA60
  c->r[3]=0u+0x00000000u; // 803FCA64
  goto L_803FD264; // 803FCA68
L_803FCA6C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 803FCA6C
  cmps(c,0,(int32_t)c->r[0],0); // 803FCA70
  if (!crb(c,2)) { goto L_803FCE38; } // 803FCA74
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FCA78
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FCA7C
  c->r[12]=R32(c->r[12]+0x000000E4u); // 803FCA80
  c->ctr=c->r[12]; // 803FCA84
  if (true) { c->lr=0x803FCA8Cu; dispatch(c,c->ctr); } // 803FCA88
  c->r[0]=R32(c->r[13]+0xFFFFF45Cu); // 803FCA8C
  cmpu(c,0,c->r[0],c->r[3]); // 803FCA90
  if (!crb(c,0)) { goto L_803FCD84; } // 803FCA94
  c->r[3]=0u+0x80570000u; // 803FCA98
  c->r[4]=0u+0x80470000u; // 803FCA9C
  c->r[3]=c->r[3]+0x00000B60u; // 803FCAA0
  c->r[0]=R32(c->r[3]+0x0000107Cu); // 803FCAA4
  c->r[3]=c->r[3]+0x00001068u; // 803FCAA8
  W32(c->r[13]+0xFFFFF2B8u,c->r[3]); // 803FCAAC
  c->r[4]=c->r[4]+0xFFFFA4E0u; // 803FCAB0
  cmps(c,0,(int32_t)c->r[0],0); // 803FCAB4
  if (!crb(c,2)) { goto L_803FCAC4; } // 803FCAB8
  c->r[0]=0u+0x00000000u; // 803FCABC
  W32(c->r[13]+0xFFFFF28Cu,c->r[0]); // 803FCAC0
L_803FCAC4:;
  c->r[5]=R32(c->r[13]+0xFFFFF288u); // 803FCAC4
  c->r[3]=0u+0x80570000u; // 803FCAC8
  c->r[31]=0u+0x80570000u; // 803FCACC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 803FCAD0
  c->r[3]=c->r[3]+0x000007A0u; // 803FCAD4
  c->r[31]=c->r[31]+0x00000B60u; // 803FCAD8
  W32(c->r[31]+0x00001078u,c->r[5]); // 803FCADC
  c->r[5]=0u+0x0000001Fu; // 803FCAE0
  c->r[6]=c->r[3]+c->r[0]; // 803FCAE4
  c->r[7]=R32(c->r[6]+0x00000008u); // 803FCAE8
  c->r[3]=c->r[31]+0x00001084u; // 803FCAEC
  c->r[0]=R32(c->r[6]+0x0000005Cu); // 803FCAF0
  W32(c->r[31]+0x00001068u,c->r[7]); // 803FCAF4
  W32(c->r[31]+0x0000106Cu,c->r[0]); // 803FCAF8
  c->lr=0x803FCB00u; f_803A6FD0(c); // 803FCAFC
  c->r[4]=R32(c->r[31]+0x0000107Cu); // 803FCB00
  c->r[30]=0u+0x00000000u; // 803FCB04
  W8(c->r[31]+0x000010A3u,c->r[30]); // 803FCB08
  c->r[3]=0u+0x00000008u; // 803FCB0C
  c->r[0]=c->r[4]+0x00000001u; // 803FCB10
  W32(c->r[31]+0x0000107Cu,c->r[0]); // 803FCB14
  c->lr=0x803FCB1Cu; f_803FE664(c); // 803FCB18
  cmps(c,0,(int32_t)c->r[3],0); // 803FCB1C
  c->r[31]=c->r[3]|c->r[3]; // 803FCB20
  if (crb(c,2)) { goto L_803FCD1C; } // 803FCB24
  W32(c->r[3]+0x00000000u,c->r[30]); // 803FCB28
  W32(c->r[3]+0x00000004u,c->r[30]); // 803FCB2C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FCB30
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FCB34
  c->r[12]=R32(c->r[12]+0x000000E0u); // 803FCB38
  c->ctr=c->r[12]; // 803FCB3C
  if (true) { c->lr=0x803FCB44u; dispatch(c,c->ctr); } // 803FCB40
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)296); // 803FCB44
  c->r[30]=c->r[3]|c->r[3]; // 803FCB48
  c->r[3]=c->r[4]+0x00000010u; // 803FCB4C
  c->lr=0x803FCB54u; f_803FE67C(c); // 803FCB50
  c->r[4]=0u+0x80400000u; // 803FCB54
  c->r[5]=0u+0x80400000u; // 803FCB58
  c->r[7]=c->r[30]|c->r[30]; // 803FCB5C
  c->r[6]=0u+0x00000128u; // 803FCB60
  c->r[4]=c->r[4]+0xFFFFC1C8u; // 803FCB64
  c->r[5]=c->r[5]+0xFFFFC1D4u; // 803FCB68
  c->lr=0x803FCB70u; f_803AD5CC(c); // 803FCB6C
  cmps(c,1,(int32_t)c->r[30],0); // 803FCB70
  W32(c->r[31]+0x00000000u,c->r[3]); // 803FCB74
  c->r[4]=0u+0x00000000u; // 803FCB78
  if (!crb(c,5)) { goto L_803FCCFC; } // 803FCB7C
  cmps(c,0,(int32_t)c->r[30],8); // 803FCB80
  c->r[6]=c->r[30]+0xFFFFFFF8u; // 803FCB84
  if (!crb(c,1)) { goto L_803FCCBC; } // 803FCB88
  c->r[5]=0u+0x00000000u; // 803FCB8C
  if (crb(c,4)) { goto L_803FCBA8; } // 803FCB90
  c->r[3]=0u+0x80000000u; // 803FCB94
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803FCB98
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803FCB9C
  if (crb(c,1)) { goto L_803FCBA8; } // 803FCBA0
  c->r[5]=0u+0x00000001u; // 803FCBA4
L_803FCBA8:;
  cmps(c,0,(int32_t)c->r[5],0); // 803FCBA8
  if (crb(c,2)) { goto L_803FCCBC; } // 803FCBAC
  c->r[0]=c->r[6]+0x00000007u; // 803FCBB0
  c->r[3]=0u+0x80570000u; // 803FCBB4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803FCBB8
  c->r[5]=0u+0x00000000u; // 803FCBBC
  c->r[3]=c->r[3]+0x000041A8u; // 803FCBC0
  c->ctr=c->r[0]; // 803FCBC4
  cmps(c,0,(int32_t)c->r[6],0); // 803FCBC8
  if (!crb(c,1)) { goto L_803FCCBC; } // 803FCBCC
L_803FCBD0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCBD0
  c->r[4]=c->r[4]+0x00000008u; // 803FCBD4
  c->r[7]=R32(c->r[3]+0x00000008u); // 803FCBD8
  c->r[6]=c->r[0]+c->r[5]; // 803FCBDC
  W32(c->r[6]+0x00000088u,c->r[7]); // 803FCBE0
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCBE4
  c->r[7]=c->r[0]+c->r[5]; // 803FCBE8
  W32(c->r[3]+0x00000008u,c->r[7]); // 803FCBEC
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCBF0
  c->r[6]=c->r[0]+c->r[5]; // 803FCBF4
  W32(c->r[6]+0x000001B0u,c->r[7]); // 803FCBF8
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCBFC
  c->r[6]=c->r[0]+c->r[5]; // 803FCC00
  c->r[7]=c->r[6]+0x00000128u; // 803FCC04
  W32(c->r[3]+0x00000008u,c->r[7]); // 803FCC08
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC0C
  c->r[6]=c->r[0]+c->r[5]; // 803FCC10
  W32(c->r[6]+0x000002D8u,c->r[7]); // 803FCC14
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC18
  c->r[6]=c->r[0]+c->r[5]; // 803FCC1C
  c->r[7]=c->r[6]+0x00000250u; // 803FCC20
  W32(c->r[3]+0x00000008u,c->r[7]); // 803FCC24
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC28
  c->r[6]=c->r[0]+c->r[5]; // 803FCC2C
  W32(c->r[6]+0x00000400u,c->r[7]); // 803FCC30
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC34
  c->r[6]=c->r[0]+c->r[5]; // 803FCC38
  c->r[7]=c->r[6]+0x00000378u; // 803FCC3C
  W32(c->r[3]+0x00000008u,c->r[7]); // 803FCC40
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC44
  c->r[6]=c->r[0]+c->r[5]; // 803FCC48
  W32(c->r[6]+0x00000528u,c->r[7]); // 803FCC4C
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC50
  c->r[6]=c->r[0]+c->r[5]; // 803FCC54
  c->r[7]=c->r[6]+0x000004A0u; // 803FCC58
  W32(c->r[3]+0x00000008u,c->r[7]); // 803FCC5C
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC60
  c->r[6]=c->r[0]+c->r[5]; // 803FCC64
  W32(c->r[6]+0x00000650u,c->r[7]); // 803FCC68
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC6C
  c->r[6]=c->r[0]+c->r[5]; // 803FCC70
  c->r[7]=c->r[6]+0x000005C8u; // 803FCC74
  W32(c->r[3]+0x00000008u,c->r[7]); // 803FCC78
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC7C
  c->r[6]=c->r[0]+c->r[5]; // 803FCC80
  W32(c->r[6]+0x00000778u,c->r[7]); // 803FCC84
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC88
  c->r[6]=c->r[0]+c->r[5]; // 803FCC8C
  c->r[7]=c->r[6]+0x000006F0u; // 803FCC90
  W32(c->r[3]+0x00000008u,c->r[7]); // 803FCC94
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCC98
  c->r[6]=c->r[0]+c->r[5]; // 803FCC9C
  W32(c->r[6]+0x000008A0u,c->r[7]); // 803FCCA0
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCCA4
  c->r[6]=c->r[0]+c->r[5]; // 803FCCA8
  c->r[5]=c->r[5]+0x00000940u; // 803FCCAC
  c->r[0]=c->r[6]+0x00000818u; // 803FCCB0
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FCCB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FCBD0; } // 803FCCB8
L_803FCCBC:;
  c->r[5]=0u+0x80570000u; // 803FCCBC
  c->r[0]=c->r[30]-c->r[4]; // 803FCCC0
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)296); // 803FCCC4
  c->r[5]=c->r[5]+0x000041A8u; // 803FCCC8
  c->ctr=c->r[0]; // 803FCCCC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[30]); // 803FCCD0
  if (!crb(c,0)) { goto L_803FCCFC; } // 803FCCD4
L_803FCCD8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCCD8
  c->r[4]=R32(c->r[5]+0x00000008u); // 803FCCDC
  c->r[3]=c->r[0]+c->r[6]; // 803FCCE0
  W32(c->r[3]+0x00000088u,c->r[4]); // 803FCCE4
  c->r[0]=R32(c->r[31]+0x00000000u); // 803FCCE8
  c->r[0]=c->r[0]+c->r[6]; // 803FCCEC
  W32(c->r[5]+0x00000008u,c->r[0]); // 803FCCF0
  c->r[6]=c->r[6]+0x00000128u; // 803FCCF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FCCD8; } // 803FCCF8
L_803FCCFC:;
  c->r[4]=0u+0x80570000u; // 803FCCFC
  c->r[4]=c->r[4]+0x000041A8u; // 803FCD00
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803FCD04
  W32(c->r[31]+0x00000004u,c->r[0]); // 803FCD08
  c->r[3]=R32(c->r[13]+0xFFFFF45Cu); // 803FCD0C
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 803FCD10
  c->r[0]=c->r[3]+0x00000001u; // 803FCD14
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FCD18
L_803FCD1C:;
  c->r[9]=0u+0x80570000u; // 803FCD1C
  c->r[3]=0u+0x80570000u; // 803FCD20
  c->r[9]=c->r[9]+0x00000B60u; // 803FCD24
  c->r[10]=0u+0x00000000u; // 803FCD28
  c->r[0]=R32(c->r[9]+0x00001078u); // 803FCD2C
  c->r[3]=c->r[3]+0x000007A0u; // 803FCD30
  c->r[7]=R32(c->r[9]+0x00001068u); // 803FCD34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803FCD38
  c->r[5]=R32(c->r[9]+0x0000106Cu); // 803FCD3C
  c->r[8]=R32(c->r[9]+0x00001070u); // 803FCD40
  c->r[6]=R32(c->r[9]+0x00001074u); // 803FCD44
  c->r[4]=c->r[3]+c->r[0]; // 803FCD48
  c->r[3]=R32(c->r[9]+0x00001080u); // 803FCD4C
  c->r[11]=R32(c->r[4]+0x00000008u); // 803FCD50
  c->r[4]=R32(c->r[4]+0x0000005Cu); // 803FCD54
  c->r[0]=R32(c->r[13]+0xFFFFF28Cu); // 803FCD58
  c->r[7]=c->r[11]-c->r[7]; // 803FCD5C
  c->r[4]=c->r[4]-c->r[5]; // 803FCD60
  W32(c->r[13]+0xFFFFF2B8u,c->r[10]); // 803FCD64
  c->r[0]=c->r[3]|c->r[0]; // 803FCD68
  c->r[5]=c->r[8]+c->r[7]; // 803FCD6C
  c->r[3]=c->r[6]+c->r[4]; // 803FCD70
  W32(c->r[9]+0x00001070u,c->r[5]); // 803FCD74
  W32(c->r[9]+0x00001074u,c->r[3]); // 803FCD78
  W32(c->r[9]+0x00001080u,c->r[0]); // 803FCD7C
  goto L_803FCE38; // 803FCD80
L_803FCD84:;
  cmps(c,0,(int32_t)c->r[27],0); // 803FCD84
  if (crb(c,2)) { goto L_803FCE30; } // 803FCD88
  c->r[30]=R32(c->r[25]+0x00000000u); // 803FCD8C
  goto L_803FCE00; // 803FCD90
L_803FCD94:;
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 803FCD94
  cmps(c,0,(int32_t)c->r[3],0); // 803FCD98
  if (crb(c,2)) { goto L_803FCDFC; } // 803FCD9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FCDA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FCDA4
  c->ctr=c->r[12]; // 803FCDA8
  if (true) { c->lr=0x803FCDB0u; dispatch(c,c->ctr); } // 803FCDAC
  cmps(c,0,(int32_t)c->r[3],1); // 803FCDB0
  if (!crb(c,2)) { goto L_803FCDFC; } // 803FCDB4
  c->r[0]=R32(c->r[30]+0x00000068u); // 803FCDB8
  cmps(c,0,(int32_t)c->r[0],0); // 803FCDBC
  if (crb(c,2)) { goto L_803FCDFC; } // 803FCDC0
  c->r[3]=R32(c->r[30]+0x00000078u); // 803FCDC4
  cmps(c,0,(int32_t)c->r[3],0); // 803FCDC8
  if (crb(c,2)) { goto L_803FCDFC; } // 803FCDCC
  cmpu(c,0,c->r[3],c->r[28]); // 803FCDD0
  if (crb(c,2)) { goto L_803FCDFC; } // 803FCDD4
  c->r[3]=R32(c->r[3]+0x00000068u); // 803FCDD8
  c->r[0]=R16(c->r[3]+0x000000CEu); // 803FCDDC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803FCDE0
  if (!crb(c,2)) { goto L_803FCDFC; } // 803FCDE4
  c->r[3]=c->r[25]|c->r[25]; // 803FCDE8
  c->r[4]=c->r[30]|c->r[30]; // 803FCDEC
  c->lr=0x803FCDF4u; f_803FD618(c); // 803FCDF0
  c->r[0]=0u+0x00000001u; // 803FCDF4
  goto L_803FCE0C; // 803FCDF8
L_803FCDFC:;
  c->r[30]=R32(c->r[30]+0x00000088u); // 803FCDFC
L_803FCE00:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FCE00
  if (!crb(c,2)) { IRQCHK(c); goto L_803FCD94; } // 803FCE04
  c->r[0]=0u+0x00000000u; // 803FCE08
L_803FCE0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 803FCE0C
  if (!crb(c,2)) { goto L_803FCE1C; } // 803FCE10
  c->r[3]=0u+0x00000000u; // 803FCE14
  goto L_803FD264; // 803FCE18
L_803FCE1C:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 803FCE1C
  cmps(c,0,(int32_t)c->r[0],0); // 803FCE20
  if (!crb(c,2)) { goto L_803FCE38; } // 803FCE24
  c->r[3]=0u+0x00000000u; // 803FCE28
  goto L_803FD264; // 803FCE2C
L_803FCE30:;
  c->r[3]=0u+0x00000000u; // 803FCE30
  goto L_803FD264; // 803FCE34
L_803FCE38:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FCE38
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FCE3C
  c->r[12]=R32(c->r[12]+0x000000E4u); // 803FCE40
  c->ctr=c->r[12]; // 803FCE44
  if (true) { c->lr=0x803FCE4Cu; dispatch(c,c->ctr); } // 803FCE48
  c->r[30]=c->r[3]|c->r[3]; // 803FCE4C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FCE50
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FCE54
  c->r[12]=R32(c->r[12]+0x000000E0u); // 803FCE58
  c->ctr=c->r[12]; // 803FCE5C
  if (true) { c->lr=0x803FCE64u; dispatch(c,c->ctr); } // 803FCE60
  c->r[5]=R32(c->r[25]+0x0000001Cu); // 803FCE64
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[3]); // 803FCE68
  c->r[0]=R32(c->r[13]+0xFFFFF460u); // 803FCE6C
  cmps(c,0,(int32_t)c->r[27],0); // 803FCE70
  c->r[3]=R32(c->r[13]+0xFFFFF464u); // 803FCE74
  c->r[5]=c->r[5]+c->r[0]; // 803FCE78
  c->r[0]=c->r[3]+0x00000001u; // 803FCE7C
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)1000); // 803FCE80
  W32(c->r[13]+0xFFFFF464u,c->r[0]); // 803FCE84
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 803FCE88
  W32(c->r[13]+0xFFFFF450u,c->r[0]); // 803FCE8C
  if (!crb(c,2)) { goto L_803FCFD4; } // 803FCE90
  c->r[12]=R32(c->r[26]+0x00000000u); // 803FCE94
  c->r[3]=c->r[26]|c->r[26]; // 803FCE98
  c->r[30]=0u+0x00000000u; // 803FCE9C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FCEA0
  c->ctr=c->r[12]; // 803FCEA4
  if (true) { c->lr=0x803FCEACu; dispatch(c,c->ctr); } // 803FCEA8
  cmps(c,0,(int32_t)c->r[3],1); // 803FCEAC
  if (crb(c,2)) { goto L_803FCED8; } // 803FCEB0
  cmps(c,0,(int32_t)c->r[3],11); // 803FCEB4
  if (crb(c,2)) { goto L_803FCED8; } // 803FCEB8
  cmps(c,0,(int32_t)c->r[3],8); // 803FCEBC
  if (crb(c,2)) { goto L_803FCF28; } // 803FCEC0
  cmps(c,0,(int32_t)c->r[3],13); // 803FCEC4
  if (crb(c,2)) { goto L_803FCF28; } // 803FCEC8
  cmps(c,0,(int32_t)c->r[3],2); // 803FCECC
  if (crb(c,2)) { goto L_803FCF78; } // 803FCED0
  goto L_803FCFC4; // 803FCED4
L_803FCED8:;
  c->r[6]=R32(c->r[13]+0xFFFFF450u); // 803FCED8
  c->r[0]=R32(c->r[25]+0x0000008Cu); // 803FCEDC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803FCEE0
  if (!crb(c,1)) { goto L_803FCEF0; } // 803FCEE4
  c->r[30]=0u+0x00000001u; // 803FCEE8
  goto L_803FCFC4; // 803FCEEC
L_803FCEF0:;
  c->r[0]=R32(c->r[25]+0x00000090u); // 803FCEF0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803FCEF4
  if (!crb(c,1)) { goto L_803FCFC4; } // 803FCEF8
  c->r[5]=R32(c->r[13]+0xFFFFF464u); // 803FCEFC
  c->r[4]=R32(c->r[25]+0x00000094u); // 803FCF00
  c->r[0]=R32(c->r[25]+0x00000098u); // 803FCF04
  c->r[3]=divwu(c->r[5],c->r[4]); // 803FCF08
  c->r[0]=c->r[6]-c->r[0]; // 803FCF0C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 803FCF10
  c->r[3]=c->r[5]-c->r[3]; // 803FCF14
  cmpu(c,0,c->r[3],c->r[0]); // 803FCF18
  if (!crb(c,0)) { goto L_803FCFC4; } // 803FCF1C
  c->r[30]=0u+0x00000001u; // 803FCF20
  goto L_803FCFC4; // 803FCF24
L_803FCF28:;
  c->r[6]=R32(c->r[13]+0xFFFFF450u); // 803FCF28
  c->r[0]=R32(c->r[25]+0x0000009Cu); // 803FCF2C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803FCF30
  if (!crb(c,1)) { goto L_803FCF40; } // 803FCF34
  c->r[30]=0u+0x00000001u; // 803FCF38
  goto L_803FCFC4; // 803FCF3C
L_803FCF40:;
  c->r[0]=R32(c->r[25]+0x000000A0u); // 803FCF40
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803FCF44
  if (!crb(c,1)) { goto L_803FCFC4; } // 803FCF48
  c->r[5]=R32(c->r[13]+0xFFFFF464u); // 803FCF4C
  c->r[4]=R32(c->r[25]+0x000000A4u); // 803FCF50
  c->r[0]=R32(c->r[25]+0x000000A8u); // 803FCF54
  c->r[3]=divwu(c->r[5],c->r[4]); // 803FCF58
  c->r[0]=c->r[6]-c->r[0]; // 803FCF5C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 803FCF60
  c->r[3]=c->r[5]-c->r[3]; // 803FCF64
  cmpu(c,0,c->r[3],c->r[0]); // 803FCF68
  if (!crb(c,0)) { goto L_803FCFC4; } // 803FCF6C
  c->r[30]=0u+0x00000001u; // 803FCF70
  goto L_803FCFC4; // 803FCF74
L_803FCF78:;
  c->r[6]=R32(c->r[13]+0xFFFFF450u); // 803FCF78
  c->r[0]=R32(c->r[25]+0x000000ACu); // 803FCF7C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803FCF80
  if (!crb(c,1)) { goto L_803FCF90; } // 803FCF84
  c->r[30]=0u+0x00000001u; // 803FCF88
  goto L_803FCFC4; // 803FCF8C
L_803FCF90:;
  c->r[0]=R32(c->r[25]+0x000000B0u); // 803FCF90
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803FCF94
  if (!crb(c,1)) { goto L_803FCFC4; } // 803FCF98
  c->r[5]=R32(c->r[13]+0xFFFFF464u); // 803FCF9C
  c->r[4]=R32(c->r[25]+0x000000B4u); // 803FCFA0
  c->r[0]=R32(c->r[25]+0x000000B8u); // 803FCFA4
  c->r[3]=divwu(c->r[5],c->r[4]); // 803FCFA8
  c->r[0]=c->r[6]-c->r[0]; // 803FCFAC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 803FCFB0
  c->r[3]=c->r[5]-c->r[3]; // 803FCFB4
  cmpu(c,0,c->r[3],c->r[0]); // 803FCFB8
  if (!crb(c,0)) { goto L_803FCFC4; } // 803FCFBC
  c->r[30]=0u+0x00000001u; // 803FCFC0
L_803FCFC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FCFC4
  if (crb(c,2)) { goto L_803FCFD4; } // 803FCFC8
  c->r[3]=0u+0x00000000u; // 803FCFCC
  goto L_803FD264; // 803FCFD0
L_803FCFD4:;
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[4]=c->ps1[4]=RF32(ea);} // 803FCFD4
  c->r[4]=0u+0x00000000u; // 803FCFD8
  c->r[30]=R32(c->r[25]+0x00000008u); // 803FCFDC
  c->r[3]=0u+0x80810000u; // 803FCFE0
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 803FCFE4
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FCFE8
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 803FCFEC
  c->r[0]=R32(c->r[30]+0x00000088u); // 803FCFF0
  W32(c->r[25]+0x00000008u,c->r[0]); // 803FCFF4
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 803FCFF8
  {double t0=S(c->f[0]), t1=S(c->f[2]); c->f[5]=t0; c->ps1[5]=t1;} // 803FCFFC
  {uint32_t ea=c->r[2]+0xFFFFA918u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD000
  {double t0=S(c->f[4]), t1=S(c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 803FD004
  c->r[0]=c->r[3]+0xFFFF8080u; // 803FD008
  {uint32_t ea=c->r[30]+0x00000038u; psq_store(c,5,ea,0,0);} // 803FD00C
  cmps(c,0,(int32_t)c->r[30],0); // 803FD010
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 803FD014
  {uint32_t ea=c->r[30]+0x00000040u; psq_store(c,5,ea,0,0);} // 803FD018
  {uint32_t ea=c->r[30]+0x00000048u; psq_store(c,2,ea,0,0);} // 803FD01C
  {uint32_t ea=c->r[30]+0x00000050u; psq_store(c,2,ea,0,0);} // 803FD020
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 803FD024
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[4]);} // 803FD028
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 803FD02C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[4]);} // 803FD030
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 803FD034
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 803FD038
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[4]);} // 803FD03C
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[4]);} // 803FD040
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[4]);} // 803FD044
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[4]);} // 803FD048
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 803FD04C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[4]);} // 803FD050
  W32(c->r[30]+0x00000068u,c->r[4]); // 803FD054
  W16(c->r[30]+0x000000A6u,c->r[4]); // 803FD058
  W32(c->r[30]+0x000000A8u,c->r[4]); // 803FD05C
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 803FD060
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 803FD064
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[1]);} // 803FD068
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[4]);} // 803FD06C
  W16(c->r[30]+0x000000A4u,c->r[4]); // 803FD070
  {uint32_t ea=c->r[30]+0x000000ACu; WF32(ea,c->f[4]);} // 803FD074
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[4]);} // 803FD078
  W32(c->r[30]+0x0000006Cu,c->r[4]); // 803FD07C
  W32(c->r[30]+0x00000070u,c->r[4]); // 803FD080
  W32(c->r[30]+0x000000B4u,c->r[4]); // 803FD084
  W32(c->r[30]+0x000000B8u,c->r[4]); // 803FD088
  W32(c->r[30]+0x00000080u,c->r[4]); // 803FD08C
  W32(c->r[30]+0x00000004u,c->r[4]); // 803FD090
  W32(c->r[30]+0x00000000u,c->r[4]); // 803FD094
  W32(c->r[30]+0x00000084u,c->r[4]); // 803FD098
  W32(c->r[30]+0x00000074u,c->r[4]); // 803FD09C
  W32(c->r[30]+0x00000078u,c->r[4]); // 803FD0A0
  W32(c->r[30]+0x00000110u,c->r[4]); // 803FD0A4
  W32(c->r[30]+0x00000114u,c->r[0]); // 803FD0A8
  {uint32_t ea=c->r[30]+0x00000118u; WF32(ea,c->f[4]);} // 803FD0AC
  W32(c->r[30]+0x0000011Cu,c->r[4]); // 803FD0B0
  W32(c->r[30]+0x00000120u,c->r[4]); // 803FD0B4
  if (crb(c,2)) { goto L_803FD164; } // 803FD0B8
  c->r[0]=R32(c->r[25]+0x00000000u); // 803FD0BC
  W32(c->r[30]+0x00000088u,c->r[0]); // 803FD0C0
  W32(c->r[25]+0x00000000u,c->r[30]); // 803FD0C4
  c->r[3]=R32(c->r[30]+0x00000088u); // 803FD0C8
  cmps(c,0,(int32_t)c->r[3],0); // 803FD0CC
  if (crb(c,2)) { goto L_803FD0D8; } // 803FD0D0
  W32(c->r[3]+0x0000008Cu,c->r[30]); // 803FD0D4
L_803FD0D8:;
  c->r[0]=0u+0x00000000u; // 803FD0D8
  W32(c->r[30]+0x0000008Cu,c->r[0]); // 803FD0DC
  c->r[3]=c->r[30]|c->r[30]; // 803FD0E0
  c->r[4]=c->r[26]|c->r[26]; // 803FD0E4
  c->lr=0x803FD0ECu; f_803E6708(c); // 803FD0E8
  c->r[3]=0u+0x00190000u; // 803FD0EC
  c->r[4]=R32(c->r[13]+0xFFFFF3F8u); // 803FD0F0
  c->r[3]=c->r[3]+0x0000660Du; // 803FD0F4
  c->r[0]=0u+0x43300000u; // 803FD0F8
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[3]); // 803FD0FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803FD100
  {uint32_t ea=c->r[2]+0xFFFFA928u; c->f[4]=RF64(ea);} // 803FD104
  c->r[3]=c->r[26]|c->r[26]; // 803FD108
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD10C
  c->r[4]=c->r[30]|c->r[30]; // 803FD110
  c->r[5]=c->r[5]+0x3C6F0000u; // 803FD114
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FD118
  c->r[5]=c->r[5]+0xFFFFF35Fu; // 803FD11C
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD120
  c->r[0]=rotl(c->r[5],28)&0x0FFFFFFFu; // 803FD124
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803FD128
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 803FD12C
  W32(c->r[13]+0xFFFFF3F8u,c->r[5]); // 803FD130
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803FD134
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803FD138
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803FD13C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803FD140
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803FD144
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803FD148
  {uint32_t ea=c->r[30]+0x000000ACu; WF32(ea,c->f[0]);} // 803FD14C
  W32(c->r[30]+0x00000120u,c->r[29]); // 803FD150
  c->r[12]=R32(c->r[26]+0x00000000u); // 803FD154
  c->r[12]=R32(c->r[12]+0x00000048u); // 803FD158
  c->ctr=c->r[12]; // 803FD15C
  if (true) { c->lr=0x803FD164u; dispatch(c,c->ctr); } // 803FD160
L_803FD164:;
  c->r[0]=R32(c->r[26]+0x00000060u); // 803FD164
  cmps(c,0,(int32_t)c->r[28],0); // 803FD168
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 803FD16C
  W32(c->r[30]+0x00000084u,c->r[0]); // 803FD170
  if (crb(c,2)) { goto L_803FD1DC; } // 803FD174
  c->r[0]=R32(c->r[26]+0x00000060u); // 803FD178
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803FD17C
  if (crb(c,2)) { goto L_803FD198; } // 803FD180
  goto L_803FD18C; // 803FD184
L_803FD188:;
  c->r[28]=c->r[0]|c->r[0]; // 803FD188
L_803FD18C:;
  c->r[0]=R32(c->r[28]+0x00000078u); // 803FD18C
  cmps(c,0,(int32_t)c->r[0],0); // 803FD190
  if (!crb(c,2)) { IRQCHK(c); goto L_803FD188; } // 803FD194
L_803FD198:;
  c->r[3]=c->r[28]|c->r[28]; // 803FD198
  c->r[4]=0u+0x00000200u; // 803FD19C
  c->lr=0x803FD1A4u; f_803E68F4(c); // 803FD1A0
  c->r[3]=R32(c->r[28]+0x00000074u); // 803FD1A4
  cmps(c,0,(int32_t)c->r[3],0); // 803FD1A8
  if (!crb(c,2)) { goto L_803FD1C4; } // 803FD1AC
  c->r[3]=c->r[25]|c->r[25]; // 803FD1B0
  c->r[4]=c->r[30]|c->r[30]; // 803FD1B4
  c->lr=0x803FD1BCu; f_803FD618(c); // 803FD1B8
  c->r[3]=0u+0x00000000u; // 803FD1BC
  goto L_803FD264; // 803FD1C0
L_803FD1C4:;
  c->r[4]=c->r[30]|c->r[30]; // 803FD1C4
  c->lr=0x803FD1CCu; f_803FBAD4(c); // 803FD1C8
  cmps(c,0,(int32_t)c->r[3],0); // 803FD1CC
  if (crb(c,2)) { goto L_803FD254; } // 803FD1D0
  W32(c->r[30]+0x00000078u,c->r[28]); // 803FD1D4
  goto L_803FD254; // 803FD1D8
L_803FD1DC:;
  c->r[27]=R32(c->r[26]+0x00000068u); // 803FD1DC
  cmps(c,0,(int32_t)c->r[27],0); // 803FD1E0
  if (!crb(c,2)) { goto L_803FD220; } // 803FD1E4
  c->r[12]=R32(c->r[26]+0x00000000u); // 803FD1E8
  c->r[3]=c->r[26]|c->r[26]; // 803FD1EC
  c->r[12]=R32(c->r[12]+0x00000034u); // 803FD1F0
  c->ctr=c->r[12]; // 803FD1F4
  if (true) { c->lr=0x803FD1FCu; dispatch(c,c->ctr); } // 803FD1F8
  cmps(c,0,(int32_t)c->r[3],0); // 803FD1FC
  c->r[27]=c->r[3]|c->r[3]; // 803FD200
  if (!crb(c,2)) { goto L_803FD220; } // 803FD204
  c->r[3]=R8(c->r[26]+0x00000036u); // 803FD208
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 803FD20C
  if (!crb(c,2)) { goto L_803FD21C; } // 803FD210
  c->r[0]=c->r[3]|0x00000001u; // 803FD214
  W8(c->r[26]+0x00000036u,c->r[0]); // 803FD218
L_803FD21C:;
  c->r[27]=0u+0x00000001u; // 803FD21C
L_803FD220:;
  c->r[26]=c->r[25]+0x00000044u; // 803FD220
  c->r[28]=0u+0x00000000u; // 803FD224
  c->r[25]=0u+0x00000001u; // 803FD228
L_803FD22C:;
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[25]<<((c->r[28])&31)); // 803FD22C
  c->r[0]=c->r[27]&c->r[0]; cr0(c,c->r[0]); // 803FD230
  if (crb(c,2)) { goto L_803FD244; } // 803FD234
  c->r[3]=c->r[26]|c->r[26]; // 803FD238
  c->r[4]=c->r[30]|c->r[30]; // 803FD23C
  c->lr=0x803FD244u; f_803FBAD4(c); // 803FD240
L_803FD244:;
  c->r[28]=c->r[28]+0x00000001u; // 803FD244
  c->r[26]=c->r[26]+0x00000010u; // 803FD248
  cmpu(c,0,c->r[28],0x00000004u); // 803FD24C
  if (crb(c,0)) { IRQCHK(c); goto L_803FD22C; } // 803FD250
L_803FD254:;
  c->r[4]=R32(c->r[13]+0xFFFFF460u); // 803FD254
  c->r[3]=c->r[30]|c->r[30]; // 803FD258
  c->r[0]=c->r[4]+0x00000001u; // 803FD25C
  W32(c->r[13]+0xFFFFF460u,c->r[0]); // 803FD260
L_803FD264:;
  c->r[11]=c->r[1]+0x00000030u; // 803FD264
  c->lr=0x803FD26Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FD268
  c->r[0]=R32(c->r[1]+0x00000034u); // 803FD26C
  c->lr=c->r[0]; // 803FD270
  c->r[1]=c->r[1]+0x00000030u; // 803FD274
  return; // 803FD278
}

// fn_803FD27C
void f_803FD27C(Ctx* __restrict c) {
  trace_call(0x803FD27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FD27C
  c->r[0]=c->lr; // 803FD280
  W32(c->r[1]+0x00000044u,c->r[0]); // 803FD284
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803FD288
  W32(c->r[1]+0x00000038u,c->r[30]); // 803FD28C
  c->r[30]=c->r[4]|c->r[4]; // 803FD290
  W32(c->r[1]+0x00000034u,c->r[29]); // 803FD294
  c->r[29]=c->r[7]|c->r[7]; // 803FD298
  c->r[7]=c->r[8]|c->r[8]; // 803FD29C
  W32(c->r[1]+0x00000030u,c->r[28]); // 803FD2A0
  c->r[28]=c->r[5]|c->r[5]; // 803FD2A4
  c->r[5]=c->r[6]|c->r[6]; // 803FD2A8
  c->r[6]=c->r[29]|c->r[29]; // 803FD2AC
  c->lr=0x803FD2B4u; f_803FCA34(c); // 803FD2B0
  cmps(c,0,(int32_t)c->r[3],0); // 803FD2B4
  c->r[31]=c->r[3]|c->r[3]; // 803FD2B8
  if (crb(c,2)) { goto L_803FD4D4; } // 803FD2BC
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FD2C0
  cmps(c,0,(int32_t)c->r[29],0); // 803FD2C4
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 803FD2C8
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,0,ea,0,0);} // 803FD2CC
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 803FD2D0
  if (crb(c,2)) { goto L_803FD388; } // 803FD2D4
  c->r[4]=R32(c->r[29]+0x0000006Cu); // 803FD2D8
  c->r[0]=R32(c->r[4]+0x00000084u); // 803FD2DC
  cmps(c,0,(int32_t)c->r[0],0); // 803FD2E0
  if (crb(c,2)) { goto L_803FD348; } // 803FD2E4
  c->r[0]=R32(c->r[29]+0x0000011Cu); // 803FD2E8
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 803FD2EC
  c->r[4]=R32(c->r[29]+0x0000006Cu); // 803FD2F0
  c->r[0]=R32(c->r[4]+0x00000084u); // 803FD2F4
  cmps(c,0,(int32_t)c->r[0],1); // 803FD2F8
  if (!crb(c,2)) { goto L_803FD30C; } // 803FD2FC
  c->r[0]=R32(c->r[29]+0x00000114u); // 803FD300
  W32(c->r[3]+0x00000114u,c->r[0]); // 803FD304
  goto L_803FD3C4; // 803FD308
L_803FD30C:;
  cmps(c,0,(int32_t)c->r[0],2); // 803FD30C
  if (!crb(c,2)) { goto L_803FD3C4; } // 803FD310
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FD314
  c->r[6]=c->r[31]+0x00000114u; // 803FD318
  c->r[7]=R32(c->r[31]+0x0000006Cu); // 803FD31C
  c->r[4]=0u+0x00000000u; // 803FD320
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD324
  c->r[5]=0u+0x00000000u; // 803FD328
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD32C
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FD330
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FD334
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803FD338
  c->ctr=c->r[12]; // 803FD33C
  if (true) { c->lr=0x803FD344u; dispatch(c,c->ctr); } // 803FD340
  goto L_803FD3C4; // 803FD344
L_803FD348:;
  c->r[7]=R32(c->r[3]+0x0000006Cu); // 803FD348
  c->r[6]=c->r[31]+0x00000114u; // 803FD34C
  c->r[4]=0u+0x00000000u; // 803FD350
  c->r[5]=0u+0x00000000u; // 803FD354
  c->r[0]=R32(c->r[7]+0x0000008Cu); // 803FD358
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 803FD35C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FD360
  c->r[7]=R32(c->r[31]+0x0000006Cu); // 803FD364
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD368
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD36C
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FD370
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FD374
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803FD378
  c->ctr=c->r[12]; // 803FD37C
  if (true) { c->lr=0x803FD384u; dispatch(c,c->ctr); } // 803FD380
  goto L_803FD3C4; // 803FD384
L_803FD388:;
  c->r[7]=R32(c->r[3]+0x0000006Cu); // 803FD388
  c->r[6]=c->r[31]+0x00000114u; // 803FD38C
  c->r[4]=0u+0x00000000u; // 803FD390
  c->r[5]=0u+0x00000000u; // 803FD394
  c->r[0]=R32(c->r[7]+0x0000008Cu); // 803FD398
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 803FD39C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FD3A0
  c->r[7]=R32(c->r[31]+0x0000006Cu); // 803FD3A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD3A8
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD3AC
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FD3B0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FD3B4
  c->r[7]=R32(c->r[7]+0x0000007Cu); // 803FD3B8
  c->ctr=c->r[12]; // 803FD3BC
  if (true) { c->lr=0x803FD3C4u; dispatch(c,c->ctr); } // 803FD3C0
L_803FD3C4:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 803FD3C4
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 803FD3C8
  cmps(c,0,(int32_t)c->r[0],0); // 803FD3CC
  if (crb(c,2)) { goto L_803FD4AC; } // 803FD3D0
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD3D4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803FD3D8
  c->r[0]=R32(c->r[30]+0x00000074u); // 803FD3DC
  cmps(c,0,(int32_t)c->r[0],0); // 803FD3E0
  if (crb(c,2)) { goto L_803FD428; } // 803FD3E4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FD3E8
  c->r[4]=c->r[1]+0x00000008u; // 803FD3EC
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD3F0
  c->r[5]=0u+0x00000000u; // 803FD3F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD3F8
  c->r[6]=0u+0x00000000u; // 803FD3FC
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FD400
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FD404
  c->r[7]=R32(c->r[30]+0x0000007Cu); // 803FD408
  c->ctr=c->r[12]; // 803FD40C
  if (true) { c->lr=0x803FD414u; dispatch(c,c->ctr); } // 803FD410
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD414
  {uint32_t ea=c->r[30]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD418
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803FD41C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 803FD420
  goto L_803FD4AC; // 803FD424
L_803FD428:;
  c->r[0]=R32(c->r[30]+0x00000078u); // 803FD428
  cmps(c,0,(int32_t)c->r[0],0); // 803FD42C
  if (crb(c,2)) { goto L_803FD4AC; } // 803FD430
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FD434
  c->r[4]=c->r[1]+0x00000008u; // 803FD438
  c->r[5]=c->r[1]+0x00000020u; // 803FD43C
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD440
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD444
  c->r[6]=0u+0x00000000u; // 803FD448
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FD44C
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 803FD450
  c->r[7]=R32(c->r[30]+0x0000007Cu); // 803FD454
  c->ctr=c->r[12]; // 803FD458
  if (true) { c->lr=0x803FD460u; dispatch(c,c->ctr); } // 803FD45C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD460
  c->r[4]=c->r[1]+0x00000020u; // 803FD464
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 803FD468
  c->r[5]=c->r[1]+0x00000018u; // 803FD46C
  c->r[3]=c->r[1]+0x00000010u; // 803FD470
  {uint32_t ea=c->r[30]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD474
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD478
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FD47C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803FD480
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,3,ea,0,0);} // 803FD484
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 803FD488
  {uint32_t ea=c->r[31]+0x00000040u; psq_load(c,2,ea,0,0);} // 803FD48C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803FD490
  {double t0=S(c->f[3]+c->f[1]), t1=S(c->ps1[3]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 803FD494
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FD498
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FD49C
  {double t0=S(c->f[2]+c->f[0]), t1=S(c->ps1[2]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803FD4A0
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,3,ea,0,0);} // 803FD4A4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803FD4A8
L_803FD4AC:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 803FD4AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD4B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FD4B4
  c->ctr=c->r[12]; // 803FD4B8
  if (true) { c->lr=0x803FD4C0u; dispatch(c,c->ctr); } // 803FD4BC
  cmps(c,0,(int32_t)c->r[3],1); // 803FD4C0
  if (!crb(c,2)) { goto L_803FD4D4; } // 803FD4C4
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 803FD4C8
  c->r[4]=c->r[31]|c->r[31]; // 803FD4CC
  c->lr=0x803FD4D4u; f_803EC150(c); // 803FD4D0
L_803FD4D4:;
  c->r[3]=c->r[31]|c->r[31]; // 803FD4D4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803FD4D8
  c->r[30]=R32(c->r[1]+0x00000038u); // 803FD4DC
  c->r[29]=R32(c->r[1]+0x00000034u); // 803FD4E0
  c->r[28]=R32(c->r[1]+0x00000030u); // 803FD4E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 803FD4E8
  c->lr=c->r[0]; // 803FD4EC
  c->r[1]=c->r[1]+0x00000040u; // 803FD4F0
  return; // 803FD4F4
}

// fn_803FD4F8
void f_803FD4F8(Ctx* __restrict c) {
  trace_call(0x803FD4F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FD4F8
  c->r[0]=c->lr; // 803FD4FC
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD500
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FD504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FD508
  c->r[31]=c->r[4]|c->r[4]; // 803FD50C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FD510
  c->r[30]=c->r[3]|c->r[3]; // 803FD514
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD518
  fcmp(c,0,c->f[1],c->f[0]); // 803FD51C
  if (!crb(c,1)) { goto L_803FD538; } // 803FD520
  c->r[3]=0u+0x80570000u; // 803FD524
  c->r[3]=c->r[3]+0x000041A8u; // 803FD528
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD52C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803FD530
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 803FD534
L_803FD538:;
  c->r[3]=0u+0x80570000u; // 803FD538
  c->r[5]=R32(c->r[4]+0x00000068u); // 803FD53C
  c->r[3]=c->r[3]+0x000041A8u; // 803FD540
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD544
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD548
  cmps(c,0,(int32_t)c->r[5],0); // 803FD54C
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,2,ea,0,0);} // 803FD550
  {double t0=S(c->f[1]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 803FD554
  {uint32_t ea=c->r[4]+0x00000048u; psq_load(c,3,ea,0,0);} // 803FD558
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803FD55C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD560
  {double t0=S(std::fma(c->f[3],c->f[4],c->f[2])), t1=S(std::fma(c->ps1[3],c->f[4],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 803FD564
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803FD568
  {uint32_t ea=c->r[4]+0x00000038u; psq_store(c,2,ea,0,0);} // 803FD56C
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 803FD570
  if (crb(c,2)) { goto L_803FD588; } // 803FD574
  c->r[0]=0u+0x00000001u; // 803FD578
  W32(c->r[5]+0x000000BCu,c->r[0]); // 803FD57C
  c->r[3]=R32(c->r[4]+0x00000068u); // 803FD580
  W32(c->r[3]+0x000000C0u,c->r[4]); // 803FD584
L_803FD588:;
  c->r[3]=0u+0x80570000u; // 803FD588
  c->r[6]=R32(c->r[4]+0x00000080u); // 803FD58C
  c->r[3]=c->r[3]+0x000041A8u; // 803FD590
  c->r[5]=0u+0x00000000u; // 803FD594
  c->r[0]=R32(c->r[3]+0x00000014u); // 803FD598
  cmps(c,0,(int32_t)c->r[0],0); // 803FD59C
  if (crb(c,2)) { goto L_803FD5C8; } // 803FD5A0
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD5A4
  {uint32_t ea=c->r[2]+0xFFFFA90Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD5A8
  fcmp(c,0,c->f[1],c->f[0]); // 803FD5AC
  if (!crb(c,1)) { goto L_803FD5C8; } // 803FD5B0
  {uint32_t ea=c->r[2]+0xFFFFA910u; c->f[0]=RF64(ea);} // 803FD5B4
  fcmp(c,0,c->f[1],c->f[0]); // 803FD5B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803FD5BC
  if (!crb(c,2)) { goto L_803FD5C8; } // 803FD5C0
  c->r[5]=0u+0x00000001u; // 803FD5C4
L_803FD5C8:;
  c->r[0]=c->r[6]|c->r[5]; // 803FD5C8
  W32(c->r[4]+0x00000080u,c->r[0]); // 803FD5CC
  c->r[3]=R32(c->r[4]+0x0000006Cu); // 803FD5D0
  c->r[4]=c->r[31]|c->r[31]; // 803FD5D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD5D8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 803FD5DC
  c->ctr=c->r[12]; // 803FD5E0
  if (true) { c->lr=0x803FD5E8u; dispatch(c,c->ctr); } // 803FD5E4
  c->r[0]=R32(c->r[31]+0x00000080u); // 803FD5E8
  cmps(c,0,(int32_t)c->r[0],0); // 803FD5EC
  if (crb(c,2)) { goto L_803FD600; } // 803FD5F0
  c->r[3]=c->r[30]|c->r[30]; // 803FD5F4
  c->r[4]=c->r[31]|c->r[31]; // 803FD5F8
  c->lr=0x803FD600u; f_803FD618(c); // 803FD5FC
L_803FD600:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FD600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FD604
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FD608
  c->lr=c->r[0]; // 803FD60C
  c->r[1]=c->r[1]+0x00000010u; // 803FD610
  return; // 803FD614
}

// fn_803FD618
void f_803FD618(Ctx* __restrict c) {
  trace_call(0x803FD618u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FD618
  c->r[0]=c->lr; // 803FD61C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FD620
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803FD624
  c->r[30]=c->r[3]|c->r[3]; // 803FD628
  c->r[31]=c->r[4]|c->r[4]; // 803FD62C
  c->r[5]=R32(c->r[4]+0x00000074u); // 803FD630
  cmps(c,0,(int32_t)c->r[5],0); // 803FD634
  if (crb(c,2)) { goto L_803FD650; } // 803FD638
  c->r[0]=R32(c->r[5]+0x00000000u); // 803FD63C
  cmps(c,0,(int32_t)c->r[0],0); // 803FD640
  if (crb(c,2)) { goto L_803FD650; } // 803FD644
  c->r[3]=0u+0x00000000u; // 803FD648
  goto L_803FD708; // 803FD64C
L_803FD650:;
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 803FD650
  cmps(c,0,(int32_t)c->r[5],0); // 803FD654
  if (!crb(c,2)) { goto L_803FD668; } // 803FD658
  c->r[0]=R32(c->r[4]+0x00000088u); // 803FD65C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803FD660
  goto L_803FD670; // 803FD664
L_803FD668:;
  c->r[0]=R32(c->r[4]+0x00000088u); // 803FD668
  W32(c->r[5]+0x00000088u,c->r[0]); // 803FD66C
L_803FD670:;
  c->r[3]=R32(c->r[4]+0x00000088u); // 803FD670
  cmps(c,0,(int32_t)c->r[3],0); // 803FD674
  if (crb(c,2)) { goto L_803FD684; } // 803FD678
  c->r[0]=R32(c->r[4]+0x0000008Cu); // 803FD67C
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 803FD680
L_803FD684:;
  c->r[0]=R32(c->r[4]+0x00000078u); // 803FD684
  cmps(c,0,(int32_t)c->r[0],0); // 803FD688
  if (!crb(c,2)) { goto L_803FD6D0; } // 803FD68C
  c->r[3]=c->r[31]|c->r[31]; // 803FD690
  c->lr=0x803FD698u; f_803E676C(c); // 803FD694
  c->r[28]=c->r[3]|c->r[3]; // 803FD698
  c->r[27]=c->r[30]+0x00000044u; // 803FD69C
  c->r[26]=0u+0x00000000u; // 803FD6A0
  c->r[29]=0u+0x00000001u; // 803FD6A4
L_803FD6A8:;
  c->r[0]=((c->r[26])&0x20)?0u:(c->r[29]<<((c->r[26])&31)); // 803FD6A8
  c->r[0]=c->r[0]&c->r[28]; cr0(c,c->r[0]); // 803FD6AC
  if (crb(c,2)) { goto L_803FD6C0; } // 803FD6B0
  c->r[3]=c->r[27]|c->r[27]; // 803FD6B4
  c->r[4]=c->r[31]|c->r[31]; // 803FD6B8
  c->lr=0x803FD6C0u; f_803FBB60(c); // 803FD6BC
L_803FD6C0:;
  c->r[26]=c->r[26]+0x00000001u; // 803FD6C0
  c->r[27]=c->r[27]+0x00000010u; // 803FD6C4
  cmpu(c,0,c->r[26],0x00000004u); // 803FD6C8
  if (crb(c,0)) { IRQCHK(c); goto L_803FD6A8; } // 803FD6CC
L_803FD6D0:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 803FD6D0
  cmps(c,0,(int32_t)c->r[3],0); // 803FD6D4
  if (crb(c,2)) { goto L_803FD6F0; } // 803FD6D8
  c->r[3]=R32(c->r[3]+0x00000074u); // 803FD6DC
  c->r[4]=c->r[31]|c->r[31]; // 803FD6E0
  c->lr=0x803FD6E8u; f_803FBB60(c); // 803FD6E4
  c->r[0]=0u+0x00000000u; // 803FD6E8
  W32(c->r[31]+0x00000078u,c->r[0]); // 803FD6EC
L_803FD6F0:;
  c->r[3]=c->r[31]|c->r[31]; // 803FD6F0
  c->lr=0x803FD6F8u; f_803E6614(c); // 803FD6F4
  c->r[0]=R32(c->r[30]+0x00000008u); // 803FD6F8
  c->r[3]=0u+0x00000001u; // 803FD6FC
  W32(c->r[31]+0x00000088u,c->r[0]); // 803FD700
  W32(c->r[30]+0x00000008u,c->r[31]); // 803FD704
L_803FD708:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803FD708
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FD70C
  c->lr=c->r[0]; // 803FD710
  c->r[1]=c->r[1]+0x00000020u; // 803FD714
  return; // 803FD718
}

// fn_803FD71C
void f_803FD71C(Ctx* __restrict c) {
  trace_call(0x803FD71Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FD71C
  c->r[0]=c->lr; // 803FD720
  W32(c->r[1]+0x00000034u,c->r[0]); // 803FD724
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803FD728
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803FD72C
  c->f[31]=c->f[1]; // 803FD730
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803FD734
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803FD738
  c->r[31]=c->r[5]|c->r[5]; // 803FD73C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FD740
  W32(c->r[1]+0x00000018u,c->r[30]); // 803FD744
  c->r[30]=c->r[4]|c->r[4]; // 803FD748
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FD74C
  c->r[4]=c->r[1]+0x00000008u; // 803FD750
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD754
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803FD758
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FD75C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803FD760
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 803FD764
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803FD768
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD76C
  c->r[12]=R32(c->r[12]+0x00000090u); // 803FD770
  c->ctr=c->r[12]; // 803FD774
  if (true) { c->lr=0x803FD77Cu; dispatch(c,c->ctr); } // 803FD778
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD77C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 803FD780
  fcmp(c,0,c->f[0],c->f[1]); // 803FD784
  if (!crb(c,1)) { goto L_803FD7AC; } // 803FD788
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,2,ea,0,0);} // 803FD78C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[31]); // 803FD790
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,2,ea,0,0);} // 803FD794
  c->r[3]=0u+0x00000001u; // 803FD798
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,1,ea,0,0);} // 803FD79C
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,1,ea,0,0);} // 803FD7A0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 803FD7A4
  goto L_803FD7B0; // 803FD7A8
L_803FD7AC:;
  c->r[3]=0u+0x00000000u; // 803FD7AC
L_803FD7B0:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 803FD7B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803FD7B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803FD7B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803FD7BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803FD7C0
  c->lr=c->r[0]; // 803FD7C4
  c->r[1]=c->r[1]+0x00000030u; // 803FD7C8
  return; // 803FD7CC
}

// fn_803FD7D0
void f_803FD7D0(Ctx* __restrict c) {
  trace_call(0x803FD7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FD7D0
  c->r[0]=c->lr; // 803FD7D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FD7D8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803FD7DC
  c->r[5]=R32(c->r[13]+0xFFFFF46Cu); // 803FD7E0
  cmps(c,0,(int32_t)c->r[5],0); // 803FD7E4
  if (crb(c,2)) { goto L_803FD89C; } // 803FD7E8
  c->r[4]=R32(c->r[13]+0xFFFFF430u); // 803FD7EC
  c->r[3]=0u+0x00000001u; // 803FD7F0
  c->r[0]=R32(c->r[13]+0xFFFFDEA8u); // 803FD7F4
  c->r[31]=R8(c->r[4]+0x00000004u); // 803FD7F8
  c->r[29]=R32(c->r[13]+0xFFFFF404u); // 803FD7FC
  c->r[30]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 803FD800
  c->r[28]=R32(c->r[5]+0x00000194u); // 803FD804
  goto L_803FD894; // 803FD808
L_803FD80C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 803FD80C
  c->r[3]=c->r[28]|c->r[28]; // 803FD810
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FD814
  c->ctr=c->r[12]; // 803FD818
  if (true) { c->lr=0x803FD820u; dispatch(c,c->ctr); } // 803FD81C
  cmps(c,0,(int32_t)c->r[3],11); // 803FD820
  if (!crb(c,2)) { goto L_803FD890; } // 803FD824
  cmps(c,0,(int32_t)c->r[29],0); // 803FD828
  if (crb(c,2)) { goto L_803FD83C; } // 803FD82C
  c->r[0]=R32(c->r[28]+0x0000004Cu); // 803FD830
  c->r[27]=rotl(c->r[0],0)&0x00000008u; // 803FD834
  goto L_803FD840; // 803FD838
L_803FD83C:;
  c->r[27]=0u+0x00000001u; // 803FD83C
L_803FD840:;
  cmps(c,0,(int32_t)c->r[27],0); // 803FD840
  if (crb(c,2)) { goto L_803FD890; } // 803FD844
  cmps(c,0,(int32_t)c->r[31],0); // 803FD848
  if (crb(c,2)) { goto L_803FD860; } // 803FD84C
  c->r[3]=c->r[28]|c->r[28]; // 803FD850
  c->lr=0x803FD858u; f_803E6AE4(c); // 803FD854
  cmps(c,0,(int32_t)c->r[3],0); // 803FD858
  if (crb(c,2)) { goto L_803FD86C; } // 803FD85C
L_803FD860:;
  c->r[0]=R32(c->r[28]+0x00000068u); // 803FD860
  c->r[0]=c->r[30]&c->r[0]; cr0(c,c->r[0]); // 803FD864
  if (!crb(c,2)) { goto L_803FD870; } // 803FD868
L_803FD86C:;
  c->r[27]=0u+0x00000000u; // 803FD86C
L_803FD870:;
  cmps(c,0,(int32_t)c->r[27],0); // 803FD870
  if (crb(c,2)) { goto L_803FD890; } // 803FD874
  c->r[12]=R32(c->r[28]+0x00000000u); // 803FD878
  c->r[3]=c->r[28]|c->r[28]; // 803FD87C
  c->r[4]=0u+0x00000000u; // 803FD880
  c->r[12]=R32(c->r[12]+0x00000094u); // 803FD884
  c->ctr=c->r[12]; // 803FD888
  if (true) { c->lr=0x803FD890u; dispatch(c,c->ctr); } // 803FD88C
L_803FD890:;
  c->r[28]=R32(c->r[28]+0x00000040u); // 803FD890
L_803FD894:;
  cmps(c,0,(int32_t)c->r[28],0); // 803FD894
  if (!crb(c,2)) { IRQCHK(c); goto L_803FD80C; } // 803FD898
L_803FD89C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803FD89C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FD8A0
  c->lr=c->r[0]; // 803FD8A4
  c->r[1]=c->r[1]+0x00000020u; // 803FD8A8
  return; // 803FD8AC
}

// fn_803FD8B0
void f_803FD8B0(Ctx* __restrict c) {
  trace_call(0x803FD8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FD8B0
  c->r[0]=c->lr; // 803FD8B4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803FD8B8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 803FD8BC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 803FD8C0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 803FD8C4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 803FD8C8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 803FD8CC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 803FD8D0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 803FD8D4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 803FD8D8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 803FD8DC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 803FD8E0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 803FD8E4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 803FD8E8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[25]);} // 803FD8EC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,25,ea,0,0);} // 803FD8F0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[24]);} // 803FD8F4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,24,ea,0,0);} // 803FD8F8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[23]);} // 803FD8FC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,23,ea,0,0);} // 803FD900
  c->r[3]=0u+0x80570000u; // 803FD904
  c->r[3]=c->r[3]+0x000041A8u; // 803FD908
  c->r[5]=0u+0x43300000u; // 803FD90C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803FD910
  c->r[31]=c->r[4]|c->r[4]; // 803FD914
  W32(c->r[1]+0x00000028u,c->r[30]); // 803FD918
  W32(c->r[1]+0x00000024u,c->r[29]); // 803FD91C
  c->r[0]=R32(c->r[3]+0x00000014u); // 803FD920
  W32(c->r[1]+0x00000008u,c->r[5]); // 803FD924
  cmps(c,0,(int32_t)c->r[0],0); // 803FD928
  W32(c->r[1]+0x00000010u,c->r[5]); // 803FD92C
  if (crb(c,2)) { goto L_803FDAA8; } // 803FD930
  {uint32_t ea=c->r[3]+0x00000010u; c->f[26]=c->ps1[26]=RF32(ea);} // 803FD934
  c->r[30]=0u+0x00000001u; // 803FD938
  {uint32_t ea=c->r[2]+0xFFFFA938u; c->f[30]=RF64(ea);} // 803FD93C
  {double t0=S(c->f[26]), t1=S(c->f[26]); c->f[27]=t0; c->ps1[27]=t1;} // 803FD940
  {uint32_t ea=c->r[2]+0xFFFFA930u; c->f[31]=c->ps1[31]=RF32(ea);} // 803FD944
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[29]=c->ps1[29]=RF32(ea);} // 803FD948
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[28]=c->ps1[28]=RF32(ea);} // 803FD94C
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[23]=c->ps1[23]=RF32(ea);} // 803FD950
  {uint32_t ea=c->r[2]+0xFFFFA910u; c->f[25]=RF64(ea);} // 803FD954
  {uint32_t ea=c->r[2]+0xFFFFA90Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 803FD958
  goto L_803FDA9C; // 803FD95C
L_803FD960:;
  c->r[29]=R32(c->r[31]+0x00000068u); // 803FD960
  cmps(c,0,(int32_t)c->r[29],0); // 803FD964
  if (crb(c,2)) { goto L_803FD998; } // 803FD968
  c->r[0]=R16(c->r[29]+0x000000CCu); // 803FD96C
  cmpu(c,0,c->r[0],0x00000002u); // 803FD970
  if (!crb(c,2)) { goto L_803FD990; } // 803FD974
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 803FD978
  c->r[4]=c->r[31]|c->r[31]; // 803FD97C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FD980
  c->r[12]=R32(c->r[12]+0x00000078u); // 803FD984
  c->ctr=c->r[12]; // 803FD988
  if (true) { c->lr=0x803FD990u; dispatch(c,c->ctr); } // 803FD98C
L_803FD990:;
  W32(c->r[29]+0x000000BCu,c->r[30]); // 803FD990
  W32(c->r[29]+0x000000C0u,c->r[31]); // 803FD994
L_803FD998:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD998
  fcmp(c,0,c->f[0],c->f[23]); // 803FD99C
  if (!crb(c,1)) { goto L_803FDA48; } // 803FD9A0
  c->r[29]=R32(c->r[31]+0x0000006Cu); // 803FD9A4
  c->r[12]=R32(c->r[29]+0x00000000u); // 803FD9A8
  c->r[3]=c->r[29]|c->r[29]; // 803FD9AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FD9B0
  c->ctr=c->r[12]; // 803FD9B4
  if (true) { c->lr=0x803FD9BCu; dispatch(c,c->ctr); } // 803FD9B8
  cmps(c,0,(int32_t)c->r[3],1); // 803FD9BC
  if (!crb(c,2)) { goto L_803FDA3C; } // 803FD9C0
  {uint32_t ea=c->r[29]+0x00000170u; c->f[4]=c->ps1[4]=RF32(ea);} // 803FD9C4
  fcmp(c,0,c->f[4],c->f[31]); // 803FD9C8
  if (!crb(c,1)) { goto L_803FDA3C; } // 803FD9CC
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803FD9D0
  c->r[0]=c->r[0]^0x80000000u; // 803FD9D4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803FD9D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803FD9DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 803FD9E0
  fcmp(c,0,c->f[4],c->f[0]); // 803FD9E4
  if (!crb(c,0)) { goto L_803FDA3C; } // 803FD9E8
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD9EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803FD9F0
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[0]); // 803FD9F4
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FD9F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803FD9FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FDA00
  c->f[1]=c->ps1[1]=S(c->f[28]-c->f[1]); // 803FDA04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 803FDA08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[30]); // 803FDA0C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 803FDA10
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[30]); // 803FDA14
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803FDA18
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 803FDA1C
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[1]); // 803FDA20
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803FDA24
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 803FDA28
  fcmp(c,0,c->f[0],c->f[23]); // 803FDA2C
  if (!crb(c,0)) { goto L_803FDA48; } // 803FDA30
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[23]);} // 803FDA34
  goto L_803FDA48; // 803FDA38
L_803FDA3C:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDA3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 803FDA40
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 803FDA44
L_803FDA48:;
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 803FDA48
  c->r[0]=0u+0x00000000u; // 803FDA4C
  {uint32_t ea=c->r[31]+0x00000048u; psq_load(c,0,ea,0,0);} // 803FDA50
  {double t0=S(std::fma(c->f[0],c->f[27],c->f[1])), t1=S(std::fma(c->ps1[0],c->f[27],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 803FDA54
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,0,ea,0,0);} // 803FDA58
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FDA5C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDA60
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[26]); // 803FDA64
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803FDA68
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803FDA6C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDA70
  c->r[3]=R32(c->r[31]+0x00000080u); // 803FDA74
  fcmp(c,0,c->f[0],c->f[24]); // 803FDA78
  if (!crb(c,1)) { goto L_803FDA90; } // 803FDA7C
  fcmp(c,0,c->f[0],c->f[25]); // 803FDA80
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803FDA84
  if (!crb(c,2)) { goto L_803FDA90; } // 803FDA88
  c->r[0]=0u+0x00000001u; // 803FDA8C
L_803FDA90:;
  c->r[0]=c->r[3]|c->r[0]; // 803FDA90
  W32(c->r[31]+0x00000080u,c->r[0]); // 803FDA94
  c->r[31]=R32(c->r[31]+0x00000088u); // 803FDA98
L_803FDA9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803FDA9C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FD960; } // 803FDAA0
  goto L_803FDBE4; // 803FDAA4
L_803FDAA8:;
  {uint32_t ea=c->r[3]+0x00000010u; c->f[26]=c->ps1[26]=RF32(ea);} // 803FDAA8
  c->r[30]=0u+0x00000001u; // 803FDAAC
  {uint32_t ea=c->r[2]+0xFFFFA938u; c->f[29]=RF64(ea);} // 803FDAB0
  {double t0=S(c->f[26]), t1=S(c->f[26]); c->f[27]=t0; c->ps1[27]=t1;} // 803FDAB4
  {uint32_t ea=c->r[2]+0xFFFFA930u; c->f[28]=c->ps1[28]=RF32(ea);} // 803FDAB8
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[30]=c->ps1[30]=RF32(ea);} // 803FDABC
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[31]=c->ps1[31]=RF32(ea);} // 803FDAC0
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[25]=c->ps1[25]=RF32(ea);} // 803FDAC4
  goto L_803FDBDC; // 803FDAC8
L_803FDACC:;
  c->r[29]=R32(c->r[31]+0x00000068u); // 803FDACC
  cmps(c,0,(int32_t)c->r[29],0); // 803FDAD0
  if (crb(c,2)) { goto L_803FDB04; } // 803FDAD4
  c->r[0]=R16(c->r[29]+0x000000CCu); // 803FDAD8
  cmpu(c,0,c->r[0],0x00000002u); // 803FDADC
  if (!crb(c,2)) { goto L_803FDAFC; } // 803FDAE0
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 803FDAE4
  c->r[4]=c->r[31]|c->r[31]; // 803FDAE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FDAEC
  c->r[12]=R32(c->r[12]+0x00000078u); // 803FDAF0
  c->ctr=c->r[12]; // 803FDAF4
  if (true) { c->lr=0x803FDAFCu; dispatch(c,c->ctr); } // 803FDAF8
L_803FDAFC:;
  W32(c->r[29]+0x000000BCu,c->r[30]); // 803FDAFC
  W32(c->r[29]+0x000000C0u,c->r[31]); // 803FDB00
L_803FDB04:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDB04
  fcmp(c,0,c->f[0],c->f[25]); // 803FDB08
  if (!crb(c,1)) { goto L_803FDBB4; } // 803FDB0C
  c->r[29]=R32(c->r[31]+0x0000006Cu); // 803FDB10
  c->r[12]=R32(c->r[29]+0x00000000u); // 803FDB14
  c->r[3]=c->r[29]|c->r[29]; // 803FDB18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FDB1C
  c->ctr=c->r[12]; // 803FDB20
  if (true) { c->lr=0x803FDB28u; dispatch(c,c->ctr); } // 803FDB24
  cmps(c,0,(int32_t)c->r[3],1); // 803FDB28
  if (!crb(c,2)) { goto L_803FDBA8; } // 803FDB2C
  {uint32_t ea=c->r[29]+0x00000170u; c->f[4]=c->ps1[4]=RF32(ea);} // 803FDB30
  fcmp(c,0,c->f[4],c->f[28]); // 803FDB34
  if (!crb(c,1)) { goto L_803FDBA8; } // 803FDB38
  c->r[0]=R32(c->r[29]+0x0000016Cu); // 803FDB3C
  c->r[0]=c->r[0]^0x80000000u; // 803FDB40
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FDB44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803FDB48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803FDB4C
  fcmp(c,0,c->f[4],c->f[0]); // 803FDB50
  if (!crb(c,0)) { goto L_803FDBA8; } // 803FDB54
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDB58
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FDB5C
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 803FDB60
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDB64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 803FDB68
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803FDB6C
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 803FDB70
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 803FDB74
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 803FDB78
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 803FDB7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[29]); // 803FDB80
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803FDB84
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 803FDB88
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[1]); // 803FDB8C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803FDB90
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 803FDB94
  fcmp(c,0,c->f[0],c->f[25]); // 803FDB98
  if (!crb(c,0)) { goto L_803FDBB4; } // 803FDB9C
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[25]);} // 803FDBA0
  goto L_803FDBB4; // 803FDBA4
L_803FDBA8:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDBA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 803FDBAC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 803FDBB0
L_803FDBB4:;
  {uint32_t ea=c->r[31]+0x00000038u; psq_load(c,1,ea,0,0);} // 803FDBB4
  {uint32_t ea=c->r[31]+0x00000048u; psq_load(c,0,ea,0,0);} // 803FDBB8
  {double t0=S(std::fma(c->f[0],c->f[27],c->f[1])), t1=S(std::fma(c->ps1[0],c->f[27],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 803FDBBC
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,0,ea,0,0);} // 803FDBC0
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FDBC4
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDBC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[26]); // 803FDBCC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803FDBD0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 803FDBD4
  c->r[31]=R32(c->r[31]+0x00000088u); // 803FDBD8
L_803FDBDC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803FDBDC
  if (!crb(c,2)) { IRQCHK(c); goto L_803FDACC; } // 803FDBE0
L_803FDBE4:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 803FDBE4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 803FDBE8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 803FDBEC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 803FDBF0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 803FDBF4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 803FDBF8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 803FDBFC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 803FDC00
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 803FDC04
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 803FDC08
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 803FDC0C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 803FDC10
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,25,ea,0,0);} // 803FDC14
  {uint32_t ea=c->r[1]+0x00000050u; c->f[25]=RF64(ea);} // 803FDC18
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,24,ea,0,0);} // 803FDC1C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[24]=RF64(ea);} // 803FDC20
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,23,ea,0,0);} // 803FDC24
  {uint32_t ea=c->r[1]+0x00000030u; c->f[23]=RF64(ea);} // 803FDC28
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803FDC2C
  c->r[30]=R32(c->r[1]+0x00000028u); // 803FDC30
  c->r[0]=R32(c->r[1]+0x000000C4u); // 803FDC34
  c->r[29]=R32(c->r[1]+0x00000024u); // 803FDC38
  c->lr=c->r[0]; // 803FDC3C
  c->r[1]=c->r[1]+0x000000C0u; // 803FDC40
  return; // 803FDC44
}

// fn_803FDC48
void f_803FDC48(Ctx* __restrict c) {
  trace_call(0x803FDC48u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FDC48
  c->r[0]=c->lr; // 803FDC4C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803FDC50
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 803FDC54
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 803FDC58
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 803FDC5C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 803FDC60
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 803FDC64
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 803FDC68
  c->r[11]=c->r[1]+0x00000070u; // 803FDC6C
  c->lr=0x803FDC74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803FDC70
  c->r[27]=c->r[3]|c->r[3]; // 803FDC74
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FDC78
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FDC7C
  c->r[12]=R32(c->r[12]+0x00000070u); // 803FDC80
  c->ctr=c->r[12]; // 803FDC84
  if (true) { c->lr=0x803FDC8Cu; dispatch(c,c->ctr); } // 803FDC88
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[10]=c->ps1[10]=RF32(ea);} // 803FDC8C
  c->r[5]=c->r[1]+0x00000030u; // 803FDC90
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 803FDC94
  c->r[4]=c->r[1]+0x00000040u; // 803FDC98
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[3]=c->ps1[3]=RF32(ea);} // 803FDC9C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[10]);} // 803FDCA0
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 803FDCA4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FDCA8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 803FDCAC
  {double t0=S(c->f[0]*c->f[6]), t1=S(c->ps1[0]*c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 803FDCB0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[10]);} // 803FDCB4
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 803FDCB8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 803FDCBC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,7,ea,0,0);} // 803FDCC0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 803FDCC4
  {double t0=S(c->f[0]*c->f[7]), t1=S(c->ps1[0]*c->ps1[7]); c->f[11]=t0; c->ps1[11]=t1;} // 803FDCC8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[13]=c->ps1[13]=RF32(ea);} // 803FDCCC
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[30]=t0; c->ps1[30]=t1;} // 803FDCD0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FDCD4
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[8]=t0; c->ps1[8]=t1;} // 803FDCD8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 803FDCDC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[12]); // 803FDCE0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 803FDCE4
  {double t0=S(c->f[11]+c->ps1[11]), t1=S(c->ps1[11]); c->f[29]=t0; c->ps1[29]=t1;} // 803FDCE8
  {uint32_t ea=c->r[2]+0xFFFFA944u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDCEC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[13]); // 803FDCF0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[10]);} // 803FDCF4
  c->f[9]=c->ps1[9]=S(c->f[2]+c->f[8]); // 803FDCF8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 803FDCFC
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[30]); // 803FDD00
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[31]); // 803FDD04
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 803FDD08
  {double t0=S(c->f[4]*c->f[5]), t1=S(c->ps1[4]*c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 803FDD0C
  {double t0=S(c->f[4]*c->f[6]), t1=S(c->ps1[4]*c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 803FDD10
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 803FDD14
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[29]); // 803FDD18
  {double t0=S(c->f[4]*c->f[7]), t1=S(c->ps1[4]*c->ps1[7]); c->f[11]=t0; c->ps1[11]=t1;} // 803FDD1C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 803FDD20
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[5]); c->f[4]=t0; c->ps1[4]=t1;} // 803FDD24
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[12]); // 803FDD28
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803FDD2C
  {double t0=S(c->f[6]+c->ps1[6]), t1=S(c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 803FDD30
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[13]); // 803FDD34
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[10]);} // 803FDD38
  c->f[7]=c->ps1[7]=S(c->f[1]+c->f[4]); // 803FDD3C
  {double t0=S(c->f[11]+c->ps1[11]), t1=S(c->ps1[11]); c->f[6]=t0; c->ps1[6]=t1;} // 803FDD40
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[5]); // 803FDD44
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[7]);} // 803FDD48
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[31]); // 803FDD4C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[7]); // 803FDD50
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 803FDD54
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[2]); // 803FDD58
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[6]); // 803FDD5C
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 803FDD60
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 803FDD64
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[1]); // 803FDD68
  c->f[3]=c->ps1[3]=S(c->f[9]*c->f[1]); // 803FDD6C
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[7]); // 803FDD70
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[5]); // 803FDD74
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[5]=c->ps1[5]=RF32(ea);} // 803FDD78
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 803FDD7C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 803FDD80
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[6]);} // 803FDD84
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FDD88
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[3]);} // 803FDD8C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[4]); // 803FDD90
  {uint32_t ea=c->r[27]+0x00000020u; psq_load(c,3,ea,0,0);} // 803FDD94
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[4]);} // 803FDD98
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803FDD9C
  {double t0=S(c->f[3]+c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 803FDDA0
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[3]); // 803FDDA4
  fcmp(c,0,c->f[3],c->f[0]); // 803FDDA8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803FDDAC
  if (!crb(c,2)) { goto L_803FDDB8; } // 803FDDB0
  goto L_803FDDD4; // 803FDDB4
L_803FDDB8:;
  c->f[0]=frsqrte(c->f[3]); // 803FDDB8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 803FDDBC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 803FDDC0
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[3],-c->f[2])); // 803FDDC4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803FDDC8
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[3]; // 803FDDCC
  c->f[10]=c->ps1[10]=S(c->f[3]*c->f[0]); // 803FDDD0
L_803FDDD4:;
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDDD4
  fcmp(c,0,c->f[0],c->f[10]); // 803FDDD8
  if (crb(c,2)) { goto L_803FDE00; } // 803FDDDC
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDDE0
  {uint32_t ea=c->r[27]+0x00000020u; psq_load(c,1,ea,0,0);} // 803FDDE4
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[10]); // 803FDDE8
  {uint32_t ea=c->r[27]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDDEC
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 803FDDF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803FDDF4
  {uint32_t ea=c->r[27]+0x00000020u; psq_store(c,1,ea,0,0);} // 803FDDF8
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[0]);} // 803FDDFC
L_803FDE00:;
  c->r[3]=c->r[1]+0x00000020u; // 803FDE00
  c->r[4]=c->r[1]+0x00000028u; // 803FDE04
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FDE08
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FDE0C
  {uint32_t ea=c->r[27]+0x00000038u; psq_store(c,0,ea,0,0);} // 803FDE10
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 803FDE14
  {uint32_t ea=c->r[2]+0xFFFFA944u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDE18
  {uint32_t ea=c->r[27]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FDE1C
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 803FDE20
  {uint32_t ea=c->r[27]+0x00000030u; psq_store(c,3,ea,0,0);} // 803FDE24
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 803FDE28
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[3]=c->ps1[3]=RF32(ea);} // 803FDE2C
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FDE30
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[4]); // 803FDE34
  fcmp(c,0,c->f[4],c->f[0]); // 803FDE38
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803FDE3C
  if (!crb(c,2)) { goto L_803FDE4C; } // 803FDE40
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FDE44
  goto L_803FDE68; // 803FDE48
L_803FDE4C:;
  c->f[0]=frsqrte(c->f[4]); // 803FDE4C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 803FDE50
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803FDE54
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[4],-c->f[2])); // 803FDE58
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803FDE5C
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[4]; // 803FDE60
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 803FDE64
L_803FDE68:;
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDE68
  fcmp(c,0,c->f[0],c->f[1]); // 803FDE6C
  if (crb(c,2)) { goto L_803FDE94; } // 803FDE70
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDE74
  {uint32_t ea=c->r[27]+0x00000030u; psq_load(c,2,ea,0,0);} // 803FDE78
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 803FDE7C
  {uint32_t ea=c->r[27]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FDE80
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 803FDE84
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803FDE88
  {uint32_t ea=c->r[27]+0x00000030u; psq_store(c,1,ea,0,0);} // 803FDE8C
  {uint32_t ea=c->r[27]+0x00000038u; WF32(ea,c->f[0]);} // 803FDE90
L_803FDE94:;
  c->r[29]=R32(c->r[13]+0xFFFFF468u); // 803FDE94
  c->r[31]=0u+0x80470000u; // 803FDE98
  goto L_803FDF78; // 803FDE9C
L_803FDEA0:;
  c->r[3]=c->r[29]|c->r[29]; // 803FDEA0
  c->r[4]=c->r[31]+0xFFFFA4F8u; // 803FDEA4
  c->lr=0x803FDEACu; f_803AD4D0(c); // 803FDEA8
  cmps(c,0,(int32_t)c->r[3],0); // 803FDEAC
  if (crb(c,2)) { goto L_803FDF74; } // 803FDEB0
  c->r[27]=R32(c->r[29]+0x00000194u); // 803FDEB4
  c->r[28]=0u+0x00000000u; // 803FDEB8
  W32(c->r[1]+0x00000008u,c->r[28]); // 803FDEBC
  goto L_803FDF5C; // 803FDEC0
L_803FDEC4:;
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FDEC4
  cmps(c,0,(int32_t)c->r[30],0); // 803FDEC8
  if (crb(c,2)) { goto L_803FDED4; } // 803FDECC
  goto L_803FDED8; // 803FDED0
L_803FDED4:;
  c->r[30]=R32(c->r[27]+0x00000058u); // 803FDED4
L_803FDED8:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 803FDED8
  c->r[3]=c->r[27]|c->r[27]; // 803FDEDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FDEE0
  c->ctr=c->r[12]; // 803FDEE4
  if (true) { c->lr=0x803FDEECu; dispatch(c,c->ctr); } // 803FDEE8
  cmps(c,0,(int32_t)c->r[3],11); // 803FDEEC
  if (crb(c,2)) { goto L_803FDF58; } // 803FDEF0
  c->r[3]=c->r[27]|c->r[27]; // 803FDEF4
  c->lr=0x803FDEFCu; f_803E69EC(c); // 803FDEF8
  cmps(c,0,(int32_t)c->r[3],0); // 803FDEFC
  if (crb(c,2)) { goto L_803FDF24; } // 803FDF00
  c->r[12]=R32(c->r[27]+0x00000000u); // 803FDF04
  c->r[3]=c->r[27]|c->r[27]; // 803FDF08
  c->r[5]=c->r[30]|c->r[30]; // 803FDF0C
  c->r[6]=c->r[1]+0x00000008u; // 803FDF10
  c->r[12]=R32(c->r[12]+0x00000098u); // 803FDF14
  c->r[4]=0u+0x00000001u; // 803FDF18
  c->ctr=c->r[12]; // 803FDF1C
  if (true) { c->lr=0x803FDF24u; dispatch(c,c->ctr); } // 803FDF20
L_803FDF24:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803FDF24
  c->r[28]=0u+0x00000001u; // 803FDF28
  cmps(c,0,(int32_t)c->r[0],0); // 803FDF2C
  if (!crb(c,2)) { goto L_803FDF4C; } // 803FDF30
  c->r[0]=R32(c->r[27]+0x00000040u); // 803FDF34
  cmps(c,0,(int32_t)c->r[0],0); // 803FDF38
  if (crb(c,2)) { goto L_803FDF58; } // 803FDF3C
  c->r[3]=0u+0x00000000u; // 803FDF40
  c->lr=0x803FDF48u; f_8040285C(c); // 803FDF44
  goto L_803FDF58; // 803FDF48
L_803FDF4C:;
  c->r[3]=0u+0x00000000u; // 803FDF4C
  c->lr=0x803FDF54u; f_8040285C(c); // 803FDF50
  goto L_803FDF5C; // 803FDF54
L_803FDF58:;
  c->r[27]=R32(c->r[27]+0x00000040u); // 803FDF58
L_803FDF5C:;
  cmps(c,0,(int32_t)c->r[27],0); // 803FDF5C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FDEC4; } // 803FDF60
  cmps(c,0,(int32_t)c->r[28],0); // 803FDF64
  if (crb(c,2)) { goto L_803FDF74; } // 803FDF68
  c->r[3]=0u+0x00000000u; // 803FDF6C
  c->lr=0x803FDF74u; f_8040285C(c); // 803FDF70
L_803FDF74:;
  c->r[29]=R32(c->r[29]+0x00000190u); // 803FDF74
L_803FDF78:;
  cmps(c,0,(int32_t)c->r[29],0); // 803FDF78
  if (!crb(c,2)) { IRQCHK(c); goto L_803FDEA0; } // 803FDF7C
  c->lr=0x803FDF84u; f_8040114C(c); // 803FDF80
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 803FDF84
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 803FDF88
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 803FDF8C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 803FDF90
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 803FDF94
  c->r[11]=c->r[1]+0x00000070u; // 803FDF98
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 803FDF9C
  c->lr=0x803FDFA4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803FDFA0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 803FDFA4
  c->lr=c->r[0]; // 803FDFA8
  c->r[1]=c->r[1]+0x000000A0u; // 803FDFAC
  return; // 803FDFB0
}

// fn_803FDFB4
void f_803FDFB4(Ctx* __restrict c) {
  trace_call(0x803FDFB4u);
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FDFB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FDFB8
  c->r[12]=R32(c->r[12]+0x00000080u); // 803FDFBC
  c->ctr=c->r[12]; // 803FDFC0
  if (true) { dispatch(c,c->ctr); return; } // 803FDFC4
}

// fn_803FDFC8
void f_803FDFC8(Ctx* __restrict c) {
  trace_call(0x803FDFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FDFC8
  c->r[0]=c->lr; // 803FDFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FDFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FDFD4
  c->r[31]=c->r[3]+0x00000084u; // 803FDFD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FDFDC
  c->r[30]=c->r[3]+0x00000044u; // 803FDFE0
  goto L_803FDFF4; // 803FDFE4
L_803FDFE8:;
  c->r[3]=c->r[30]|c->r[30]; // 803FDFE8
  c->lr=0x803FDFF0u; f_803FB8CC(c); // 803FDFEC
  c->r[30]=c->r[30]+0x00000010u; // 803FDFF0
L_803FDFF4:;
  cmpu(c,0,c->r[30],c->r[31]); // 803FDFF4
  if (!crb(c,2)) { IRQCHK(c); goto L_803FDFE8; } // 803FDFF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FDFFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FE000
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FE004
  c->lr=c->r[0]; // 803FE008
  c->r[1]=c->r[1]+0x00000010u; // 803FE00C
  return; // 803FE010
}

// fn_803FE014
void f_803FE014(Ctx* __restrict c) {
  trace_call(0x803FE014u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE014
  c->r[0]=c->lr; // 803FE018
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FE01C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803FE020
  c->r[26]=c->r[3]|c->r[3]; // 803FE024
  c->r[31]=0u+0x00000001u; // 803FE028
  goto L_803FE08C; // 803FE02C
L_803FE030:;
  c->r[28]=R32(c->r[3]+0x00000088u); // 803FE030
  c->lr=0x803FE038u; f_803E676C(c); // 803FE034
  c->r[30]=c->r[3]|c->r[3]; // 803FE038
  c->r[3]=R32(c->r[26]+0x00000000u); // 803FE03C
  c->lr=0x803FE044u; f_803E6614(c); // 803FE040
  c->r[29]=c->r[26]+0x00000044u; // 803FE044
  c->r[27]=0u+0x00000000u; // 803FE048
L_803FE04C:;
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[31]<<((c->r[27])&31)); // 803FE04C
  c->r[0]=c->r[0]&c->r[30]; cr0(c,c->r[0]); // 803FE050
  if (crb(c,2)) { goto L_803FE064; } // 803FE054
  c->r[4]=R32(c->r[26]+0x00000000u); // 803FE058
  c->r[3]=c->r[29]|c->r[29]; // 803FE05C
  c->lr=0x803FE064u; f_803FBB60(c); // 803FE060
L_803FE064:;
  c->r[27]=c->r[27]+0x00000001u; // 803FE064
  c->r[29]=c->r[29]+0x00000010u; // 803FE068
  cmpu(c,0,c->r[27],0x00000004u); // 803FE06C
  if (crb(c,0)) { IRQCHK(c); goto L_803FE04C; } // 803FE070
  c->r[3]=R32(c->r[26]+0x00000000u); // 803FE074
  c->r[0]=R32(c->r[26]+0x00000008u); // 803FE078
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FE07C
  c->r[0]=R32(c->r[26]+0x00000000u); // 803FE080
  W32(c->r[26]+0x00000008u,c->r[0]); // 803FE084
  W32(c->r[26]+0x00000000u,c->r[28]); // 803FE088
L_803FE08C:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 803FE08C
  cmps(c,0,(int32_t)c->r[3],0); // 803FE090
  if (!crb(c,2)) { IRQCHK(c); goto L_803FE030; } // 803FE094
  c->r[27]=R32(c->r[13]+0xFFFFF454u); // 803FE098
  goto L_803FE0DC; // 803FE09C
L_803FE0A0:;
  c->r[0]=R32(c->r[27]+0x000000C8u); // 803FE0A0
  cmps(c,0,(int32_t)c->r[27],0); // 803FE0A4
  W32(c->r[13]+0xFFFFF454u,c->r[0]); // 803FE0A8
  if (crb(c,2)) { goto L_803FE0D8; } // 803FE0AC
  c->r[4]=R32(c->r[27]+0x000000A0u); // 803FE0B0
  cmps(c,0,(int32_t)c->r[4],0); // 803FE0B4
  if (crb(c,2)) { goto L_803FE0D0; } // 803FE0B8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE0BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE0C0
  c->r[12]=R32(c->r[12]+0x000000D8u); // 803FE0C4
  c->ctr=c->r[12]; // 803FE0C8
  if (true) { c->lr=0x803FE0D0u; dispatch(c,c->ctr); } // 803FE0CC
L_803FE0D0:;
  c->r[3]=c->r[27]|c->r[27]; // 803FE0D0
  c->lr=0x803FE0D8u; f_803FE6DC(c); // 803FE0D4
L_803FE0D8:;
  c->r[27]=R32(c->r[13]+0xFFFFF454u); // 803FE0D8
L_803FE0DC:;
  cmps(c,0,(int32_t)c->r[27],0); // 803FE0DC
  if (!crb(c,2)) { IRQCHK(c); goto L_803FE0A0; } // 803FE0E0
  c->r[0]=0u+0x00000000u; // 803FE0E4
  W32(c->r[13]+0xFFFFF454u,c->r[0]); // 803FE0E8
  W32(c->r[13]+0xFFFFF458u,c->r[0]); // 803FE0EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803FE0F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FE0F4
  c->lr=c->r[0]; // 803FE0F8
  c->r[1]=c->r[1]+0x00000020u; // 803FE0FC
  return; // 803FE100
}

// fn_803FE104
void f_803FE104(Ctx* __restrict c) {
  trace_call(0x803FE104u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE104
  c->r[0]=c->lr; // 803FE108
  c->r[4]=0u+0x80570000u; // 803FE10C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FE110
  c->r[4]=c->r[4]+0x000041A8u; // 803FE114
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803FE118
  c->r[27]=0u+0x00000000u; // 803FE11C
  c->r[0]=R32(c->r[13]+0xFFFFDEA8u); // 803FE120
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; // 803FE124
  c->r[0]=R8(c->r[4]+0x000000BCu); // 803FE128
  c->r[31]=c->r[3]+c->r[5]; // 803FE12C
  cmps(c,0,(int32_t)c->r[0],0); // 803FE130
  c->r[29]=R32(c->r[31]+0x0000004Cu); // 803FE134
  if (!crb(c,2)) { goto L_803FE14C; } // 803FE138
  c->r[3]=R32(c->r[13]+0xFFFFF46Cu); // 803FE13C
  c->r[4]=0u+0x00000000u; // 803FE140
  c->r[5]=0u+0x00000004u; // 803FE144
  c->lr=0x803FE14Cu; f_80402230(c); // 803FE148
L_803FE14C:;
  cmps(c,0,(int32_t)c->r[29],0); // 803FE14C
  c->r[26]=R32(c->r[13]+0xFFFFF404u); // 803FE150
  if (crb(c,2)) { goto L_803FE298; } // 803FE154
  c->r[31]=c->r[31]+0x00000048u; // 803FE158
  goto L_803FE290; // 803FE15C
L_803FE160:;
  c->r[28]=R32(c->r[29]+0x00000008u); // 803FE160
  c->r[30]=R32(c->r[28]+0x0000006Cu); // 803FE164
  cmps(c,0,(int32_t)c->r[30],0); // 803FE168
  if (crb(c,2)) { goto L_803FE28C; } // 803FE16C
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FE170
  c->r[3]=c->r[30]|c->r[30]; // 803FE174
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FE178
  c->ctr=c->r[12]; // 803FE17C
  if (true) { c->lr=0x803FE184u; dispatch(c,c->ctr); } // 803FE180
  cmps(c,0,(int32_t)c->r[3],11); // 803FE184
  if (crb(c,2)) { goto L_803FE28C; } // 803FE188
  cmps(c,0,(int32_t)c->r[26],0); // 803FE18C
  if (crb(c,2)) { goto L_803FE1A0; } // 803FE190
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 803FE194
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 803FE198
  goto L_803FE1A4; // 803FE19C
L_803FE1A0:;
  c->r[0]=0u+0x00000001u; // 803FE1A0
L_803FE1A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 803FE1A4
  if (crb(c,2)) { goto L_803FE28C; } // 803FE1A8
  c->r[3]=c->r[30]|c->r[30]; // 803FE1AC
  c->lr=0x803FE1B4u; f_803E6AE4(c); // 803FE1B0
  cmps(c,0,(int32_t)c->r[3],0); // 803FE1B4
  if (!crb(c,2)) { goto L_803FE1DC; } // 803FE1B8
  c->r[3]=c->r[30]|c->r[30]; // 803FE1BC
  c->lr=0x803FE1C4u; f_803E6A84(c); // 803FE1C0
  cmps(c,0,(int32_t)c->r[3],0); // 803FE1C4
  if (crb(c,2)) { goto L_803FE28C; } // 803FE1C8
  c->r[3]=c->r[30]|c->r[30]; // 803FE1CC
  c->lr=0x803FE1D4u; f_803E69EC(c); // 803FE1D0
  cmps(c,0,(int32_t)c->r[3],0); // 803FE1D4
  if (crb(c,2)) { goto L_803FE28C; } // 803FE1D8
L_803FE1DC:;
  c->r[27]=R32(c->r[28]+0x00000110u); // 803FE1DC
  cmps(c,0,(int32_t)c->r[27],0); // 803FE1E0
  if (crb(c,2)) { goto L_803FE1EC; } // 803FE1E4
  goto L_803FE274; // 803FE1E8
L_803FE1EC:;
  c->r[4]=R32(c->r[28]+0x00000078u); // 803FE1EC
  cmps(c,0,(int32_t)c->r[4],0); // 803FE1F0
  if (crb(c,2)) { goto L_803FE270; } // 803FE1F4
  c->r[3]=R32(c->r[4]+0x00000110u); // 803FE1F8
  cmps(c,0,(int32_t)c->r[3],0); // 803FE1FC
  if (crb(c,2)) { goto L_803FE208; } // 803FE200
  goto L_803FE268; // 803FE204
L_803FE208:;
  c->r[4]=R32(c->r[4]+0x00000078u); // 803FE208
  cmps(c,0,(int32_t)c->r[4],0); // 803FE20C
  if (crb(c,2)) { goto L_803FE264; } // 803FE210
  c->r[3]=R32(c->r[4]+0x00000110u); // 803FE214
  cmps(c,0,(int32_t)c->r[3],0); // 803FE218
  if (crb(c,2)) { goto L_803FE224; } // 803FE21C
  goto L_803FE268; // 803FE220
L_803FE224:;
  c->r[4]=R32(c->r[4]+0x00000078u); // 803FE224
  cmps(c,0,(int32_t)c->r[4],0); // 803FE228
  if (crb(c,2)) { goto L_803FE25C; } // 803FE22C
  c->r[3]=R32(c->r[4]+0x00000110u); // 803FE230
  cmps(c,0,(int32_t)c->r[3],0); // 803FE234
  if (crb(c,2)) { goto L_803FE240; } // 803FE238
  goto L_803FE268; // 803FE23C
L_803FE240:;
  c->r[3]=R32(c->r[4]+0x00000078u); // 803FE240
  cmps(c,0,(int32_t)c->r[3],0); // 803FE244
  if (crb(c,2)) { goto L_803FE254; } // 803FE248
  c->lr=0x803FE250u; f_803E7ABC(c); // 803FE24C
  goto L_803FE268; // 803FE250
L_803FE254:;
  c->r[3]=0u+0x00000000u; // 803FE254
  goto L_803FE268; // 803FE258
L_803FE25C:;
  c->r[3]=0u+0x00000000u; // 803FE25C
  goto L_803FE268; // 803FE260
L_803FE264:;
  c->r[3]=0u+0x00000000u; // 803FE264
L_803FE268:;
  c->r[27]=c->r[3]|c->r[3]; // 803FE268
  goto L_803FE274; // 803FE26C
L_803FE270:;
  c->r[27]=0u+0x00000000u; // 803FE270
L_803FE274:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803FE274
  c->r[3]=c->r[30]|c->r[30]; // 803FE278
  c->r[4]=c->r[28]|c->r[28]; // 803FE27C
  c->r[12]=R32(c->r[12]+0x00000050u); // 803FE280
  c->ctr=c->r[12]; // 803FE284
  if (true) { c->lr=0x803FE28Cu; dispatch(c,c->ctr); } // 803FE288
L_803FE28C:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 803FE28C
L_803FE290:;
  cmpu(c,0,c->r[29],c->r[31]); // 803FE290
  if (!crb(c,2)) { IRQCHK(c); goto L_803FE160; } // 803FE294
L_803FE298:;
  c->r[3]=0u+0x80570000u; // 803FE298
  c->r[3]=c->r[3]+0x000041A8u; // 803FE29C
  c->r[0]=R8(c->r[3]+0x000000BCu); // 803FE2A0
  cmps(c,0,(int32_t)c->r[0],0); // 803FE2A4
  if (!crb(c,2)) { goto L_803FE2B4; } // 803FE2A8
  c->r[3]=c->r[27]|c->r[27]; // 803FE2AC
  c->lr=0x803FE2B4u; f_8040285C(c); // 803FE2B0
L_803FE2B4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803FE2B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FE2B8
  c->lr=c->r[0]; // 803FE2BC
  c->r[1]=c->r[1]+0x00000020u; // 803FE2C0
  return; // 803FE2C4
}

// fn_803FE2C8
void f_803FE2C8(Ctx* __restrict c) {
  trace_call(0x803FE2C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE2C8
  c->r[0]=c->lr; // 803FE2CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FE2D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803FE2D4
  c->r[31]=0u+0x00000000u; // 803FE2D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803FE2DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803FE2E0
  c->r[29]=c->r[4]|c->r[4]; // 803FE2E4
  c->r[30]=R32(c->r[3]+0x00000000u); // 803FE2E8
  goto L_803FE31C; // 803FE2EC
L_803FE2F0:;
  cmps(c,0,(int32_t)c->r[29],-1); // 803FE2F0
  if (crb(c,2)) { goto L_803FE314; } // 803FE2F4
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 803FE2F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE2FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803FE300
  c->ctr=c->r[12]; // 803FE304
  if (true) { c->lr=0x803FE30Cu; dispatch(c,c->ctr); } // 803FE308
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 803FE30C
  if (!crb(c,2)) { goto L_803FE318; } // 803FE310
L_803FE314:;
  c->r[31]=c->r[31]+0x00000001u; // 803FE314
L_803FE318:;
  c->r[30]=R32(c->r[30]+0x00000088u); // 803FE318
L_803FE31C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803FE31C
  if (!crb(c,2)) { IRQCHK(c); goto L_803FE2F0; } // 803FE320
  c->r[3]=c->r[31]|c->r[31]; // 803FE324
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803FE328
  c->r[30]=R32(c->r[1]+0x00000018u); // 803FE32C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803FE330
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FE334
  c->lr=c->r[0]; // 803FE338
  c->r[1]=c->r[1]+0x00000020u; // 803FE33C
  return; // 803FE340
}

// fn_803FE344
void f_803FE344(Ctx* __restrict c) {
  trace_call(0x803FE344u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE344
  c->r[0]=c->lr; // 803FE348
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FE34C
  c->r[4]=0u+0x80400000u; // 803FE350
  W32(c->r[1]+0x00000074u,c->r[0]); // 803FE354
  c->r[5]=0u+0x80400000u; // 803FE358
  {uint32_t ea=c->r[2]+0xFFFFA904u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FE35C
  c->r[11]=c->r[1]+0x00000048u; // 803FE360
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 803FE364
  c->r[12]=c->r[1]+0x00000050u; // 803FE368
  c->r[6]=c->r[1]+0x00000028u; // 803FE36C
  c->r[9]=c->r[1]+0x00000038u; // 803FE370
  W32(c->r[1]+0x00000068u,c->r[30]); // 803FE374
  c->r[30]=0u+0x80570000u; // 803FE378
  c->r[30]=c->r[30]+0x00004158u; // 803FE37C
  c->r[10]=c->r[1]+0x00000040u; // 803FE380
  W32(c->r[1]+0x00000064u,c->r[29]); // 803FE384
  c->r[7]=c->r[1]+0x00000030u; // 803FE388
  c->r[8]=c->r[30]+0x00000000u; // 803FE38C
  c->r[29]=c->r[30]+0x00000010u; // 803FE390
  c->r[31]=c->r[30]+0x00000050u; // 803FE394
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 803FE398
  c->r[3]=c->r[31]+0x00000044u; // 803FE39C
  c->r[4]=c->r[4]+0xFFFFB870u; // 803FE3A0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803FE3A4
  c->r[5]=c->r[5]+0xFFFFB88Cu; // 803FE3A8
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FE3AC
  c->r[6]=0u+0x00000010u; // 803FE3B0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 803FE3B4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803FE3B8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FE3BC
  c->r[7]=0u+0x00000004u; // 803FE3C0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 803FE3C4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 803FE3C8
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FE3CC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803FE3D0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 803FE3D4
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,5,ea,0,0);} // 803FE3D8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 803FE3DC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 803FE3E0
  {uint32_t ea=c->r[11]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FE3E4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 803FE3E8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 803FE3EC
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,6,ea,0,0);} // 803FE3F0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 803FE3F4
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[1]);} // 803FE3F8
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[1]);} // 803FE3FC
  {uint32_t ea=c->r[8]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FE400
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FE404
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,6,ea,0,0);} // 803FE408
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,4,ea,0,0);} // 803FE40C
  {uint32_t ea=c->r[29]+0x00000018u; psq_store(c,5,ea,0,0);} // 803FE410
  {uint32_t ea=c->r[29]+0x00000020u; psq_store(c,2,ea,0,0);} // 803FE414
  {uint32_t ea=c->r[29]+0x00000028u; psq_store(c,3,ea,0,0);} // 803FE418
  c->lr=0x803FE420u; f_803AD78C(c); // 803FE41C
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FE420
  c->r[6]=0u+0x00000000u; // 803FE424
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803FE428
  c->r[0]=0u+0x00000080u; // 803FE42C
  c->r[3]=c->r[1]+0x00000008u; // 803FE430
  c->r[9]=c->r[1]+0x00000010u; // 803FE434
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803FE438
  c->r[7]=c->r[1]+0x00000018u; // 803FE43C
  c->r[4]=0u+0x80400000u; // 803FE440
  c->r[8]=c->r[1]+0x00000020u; // 803FE444
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FE448
  c->r[3]=c->r[31]|c->r[31]; // 803FE44C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FE450
  c->r[4]=c->r[4]+0xFFFFE4D0u; // 803FE454
  c->r[5]=c->r[30]+0x00000040u; // 803FE458
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803FE45C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FE460
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803FE464
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803FE468
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,1,ea,0,0);} // 803FE46C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803FE470
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803FE474
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FE478
  W32(c->r[30]+0x00000050u,c->r[6]); // 803FE47C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 803FE480
  W32(c->r[31]+0x00000004u,c->r[6]); // 803FE484
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 803FE488
  W32(c->r[31]+0x00000008u,c->r[6]); // 803FE48C
  W32(c->r[31]+0x00000040u,c->r[0]); // 803FE490
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 803FE494
  W32(c->r[31]+0x00000014u,c->r[6]); // 803FE498
  {uint32_t ea=c->r[31]+0x00000020u; psq_store(c,3,ea,0,0);} // 803FE49C
  {uint32_t ea=c->r[31]+0x00000028u; psq_store(c,4,ea,0,0);} // 803FE4A0
  {uint32_t ea=c->r[31]+0x00000030u; psq_store(c,1,ea,0,0);} // 803FE4A4
  {uint32_t ea=c->r[31]+0x00000038u; psq_store(c,2,ea,0,0);} // 803FE4A8
  W8(c->r[31]+0x000000BCu,c->r[6]); // 803FE4AC
  c->lr=0x803FE4B4u; f_803ADB8C(c); // 803FE4B0
  c->r[0]=R32(c->r[1]+0x00000074u); // 803FE4B4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 803FE4B8
  c->r[30]=R32(c->r[1]+0x00000068u); // 803FE4BC
  c->r[29]=R32(c->r[1]+0x00000064u); // 803FE4C0
  c->lr=c->r[0]; // 803FE4C4
  c->r[1]=c->r[1]+0x00000070u; // 803FE4C8
  return; // 803FE4CC
}

// fn_803FE4D0
void f_803FE4D0(Ctx* __restrict c) {
  trace_call(0x803FE4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE4D0
  c->r[0]=c->lr; // 803FE4D4
  cmps(c,0,(int32_t)c->r[3],0); // 803FE4D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FE4DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803FE4E0
  c->r[26]=c->r[3]|c->r[3]; // 803FE4E4
  c->r[27]=c->r[4]|c->r[4]; // 803FE4E8
  if (crb(c,2)) { goto L_803FE64C; } // 803FE4EC
  c->lr=0x803FE4F4u; f_803FE014(c); // 803FE4F0
  c->r[31]=R32(c->r[26]+0x0000000Cu); // 803FE4F4
  cmps(c,0,(int32_t)c->r[31],0); // 803FE4F8
  if (crb(c,2)) { goto L_803FE624; } // 803FE4FC
  c->r[3]=R32(c->r[31]+0x00000000u); // 803FE500
  cmps(c,0,(int32_t)c->r[3],0); // 803FE504
  if (crb(c,2)) { goto L_803FE524; } // 803FE508
  c->r[4]=0u+0x80400000u; // 803FE50C
  c->r[5]=0u+0x80400000u; // 803FE510
  c->r[6]=0u+0x00000000u; // 803FE514
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FE518
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FE51C
  c->lr=0x803FE524u; f_803AD97C(c); // 803FE520
L_803FE524:;
  c->r[30]=R32(c->r[31]+0x00000004u); // 803FE524
  cmps(c,0,(int32_t)c->r[30],0); // 803FE528
  if (crb(c,2)) { goto L_803FE610; } // 803FE52C
  if (crb(c,2)) { goto L_803FE610; } // 803FE530
  c->r[3]=R32(c->r[30]+0x00000000u); // 803FE534
  cmps(c,0,(int32_t)c->r[3],0); // 803FE538
  if (crb(c,2)) { goto L_803FE558; } // 803FE53C
  c->r[4]=0u+0x80400000u; // 803FE540
  c->r[5]=0u+0x80400000u; // 803FE544
  c->r[6]=0u+0x00000000u; // 803FE548
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FE54C
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FE550
  c->lr=0x803FE558u; f_803AD97C(c); // 803FE554
L_803FE558:;
  c->r[29]=R32(c->r[30]+0x00000004u); // 803FE558
  cmps(c,0,(int32_t)c->r[29],0); // 803FE55C
  if (crb(c,2)) { goto L_803FE5FC; } // 803FE560
  if (crb(c,2)) { goto L_803FE5FC; } // 803FE564
  c->r[3]=R32(c->r[29]+0x00000000u); // 803FE568
  cmps(c,0,(int32_t)c->r[3],0); // 803FE56C
  if (crb(c,2)) { goto L_803FE58C; } // 803FE570
  c->r[4]=0u+0x80400000u; // 803FE574
  c->r[5]=0u+0x80400000u; // 803FE578
  c->r[6]=0u+0x00000000u; // 803FE57C
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FE580
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FE584
  c->lr=0x803FE58Cu; f_803AD97C(c); // 803FE588
L_803FE58C:;
  c->r[28]=R32(c->r[29]+0x00000004u); // 803FE58C
  cmps(c,0,(int32_t)c->r[28],0); // 803FE590
  if (crb(c,2)) { goto L_803FE5E8; } // 803FE594
  if (crb(c,2)) { goto L_803FE5E8; } // 803FE598
  c->r[3]=R32(c->r[28]+0x00000000u); // 803FE59C
  cmps(c,0,(int32_t)c->r[3],0); // 803FE5A0
  if (crb(c,2)) { goto L_803FE5C0; } // 803FE5A4
  c->r[4]=0u+0x80400000u; // 803FE5A8
  c->r[5]=0u+0x80400000u; // 803FE5AC
  c->r[6]=0u+0x00000000u; // 803FE5B0
  c->r[4]=c->r[4]+0xFFFFC1D4u; // 803FE5B4
  c->r[5]=c->r[5]+0xFFFFE6ACu; // 803FE5B8
  c->lr=0x803FE5C0u; f_803AD97C(c); // 803FE5BC
L_803FE5C0:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 803FE5C0
  cmps(c,0,(int32_t)c->r[3],0); // 803FE5C4
  if (crb(c,2)) { goto L_803FE5D4; } // 803FE5C8
  c->r[4]=0u+0x00000001u; // 803FE5CC
  c->lr=0x803FE5D4u; f_803FC240(c); // 803FE5D0
L_803FE5D4:;
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FE5D4
  c->r[3]=c->r[28]|c->r[28]; // 803FE5D8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FE5DC
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FE5E0
  c->lr=0x803FE5E8u; f_803FE694(c); // 803FE5E4
L_803FE5E8:;
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FE5E8
  c->r[3]=c->r[29]|c->r[29]; // 803FE5EC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FE5F0
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FE5F4
  c->lr=0x803FE5FCu; f_803FE694(c); // 803FE5F8
L_803FE5FC:;
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FE5FC
  c->r[3]=c->r[30]|c->r[30]; // 803FE600
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FE604
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FE608
  c->lr=0x803FE610u; f_803FE694(c); // 803FE60C
L_803FE610:;
  c->r[4]=R32(c->r[13]+0xFFFFF45Cu); // 803FE610
  c->r[3]=c->r[31]|c->r[31]; // 803FE614
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803FE618
  W32(c->r[13]+0xFFFFF45Cu,c->r[0]); // 803FE61C
  c->lr=0x803FE624u; f_803FE694(c); // 803FE620
L_803FE624:;
  c->r[4]=0u+0x80400000u; // 803FE624
  c->r[3]=c->r[26]+0x00000044u; // 803FE628
  c->r[4]=c->r[4]+0xFFFFB88Cu; // 803FE62C
  c->r[5]=0u+0x00000010u; // 803FE630
  c->r[6]=0u+0x00000004u; // 803FE634
  c->lr=0x803FE63Cu; f_803AD884(c); // 803FE638
  cmps(c,0,(int32_t)c->r[27],0); // 803FE63C
  if (!crb(c,1)) { goto L_803FE64C; } // 803FE640
  c->r[3]=c->r[26]|c->r[26]; // 803FE644
  c->lr=0x803FE64Cu; f_80244DC0(c); // 803FE648
L_803FE64C:;
  c->r[3]=c->r[26]|c->r[26]; // 803FE64C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803FE650
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FE654
  c->lr=c->r[0]; // 803FE658
  c->r[1]=c->r[1]+0x00000020u; // 803FE65C
  return; // 803FE660
}

// fn_803FE664
void f_803FE664(Ctx* __restrict c) {
  trace_call(0x803FE664u);
  c->r[4]=c->r[3]|c->r[3]; // 803FE664
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE668
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE66C
  c->r[12]=R32(c->r[12]+0x000000CCu); // 803FE670
  c->ctr=c->r[12]; // 803FE674
  if (true) { dispatch(c,c->ctr); return; } // 803FE678
}

// fn_803FE67C
void f_803FE67C(Ctx* __restrict c) {
  trace_call(0x803FE67Cu);
  c->r[4]=c->r[3]|c->r[3]; // 803FE67C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE680
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE684
  c->r[12]=R32(c->r[12]+0x000000CCu); // 803FE688
  c->ctr=c->r[12]; // 803FE68C
  if (true) { dispatch(c,c->ctr); return; } // 803FE690
}

// fn_803FE694
void f_803FE694(Ctx* __restrict c) {
  trace_call(0x803FE694u);
  c->r[4]=c->r[3]|c->r[3]; // 803FE694
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE698
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE69C
  c->r[12]=R32(c->r[12]+0x000000D0u); // 803FE6A0
  c->ctr=c->r[12]; // 803FE6A4
  if (true) { dispatch(c,c->ctr); return; } // 803FE6A8
}

// fn_803FE6AC
void f_803FE6AC(Ctx* __restrict c) {
  trace_call(0x803FE6ACu);
  c->r[4]=c->r[3]|c->r[3]; // 803FE6AC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE6B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE6B4
  c->r[12]=R32(c->r[12]+0x000000D0u); // 803FE6B8
  c->ctr=c->r[12]; // 803FE6BC
  if (true) { dispatch(c,c->ctr); return; } // 803FE6C0
}

// fn_803FE6C4
void f_803FE6C4(Ctx* __restrict c) {
  trace_call(0x803FE6C4u);
  c->r[4]=c->r[3]|c->r[3]; // 803FE6C4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE6C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE6CC
  c->r[12]=R32(c->r[12]+0x000000D4u); // 803FE6D0
  c->ctr=c->r[12]; // 803FE6D4
  if (true) { dispatch(c,c->ctr); return; } // 803FE6D8
}

// fn_803FE6DC
void f_803FE6DC(Ctx* __restrict c) {
  trace_call(0x803FE6DCu);
  c->r[4]=c->r[3]|c->r[3]; // 803FE6DC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE6E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE6E4
  c->r[12]=R32(c->r[12]+0x000000D8u); // 803FE6E8
  c->ctr=c->r[12]; // 803FE6EC
  if (true) { dispatch(c,c->ctr); return; } // 803FE6F0
}

// fn_803FE6F4
void f_803FE6F4(Ctx* __restrict c) {
  trace_call(0x803FE6F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE6F4
  c->r[4]=0u+0x80570000u; // 803FE6F8
  {uint32_t ea=c->r[2]+0xFFFFA948u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FE6FC
  c->r[3]=c->r[4]+0x00004268u; // 803FE700
  {uint32_t ea=c->r[2]+0xFFFFA94Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FE704
  c->r[11]=0u+0x80570000u; // 803FE708
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803FE70C
  c->r[9]=c->r[1]+0x00000028u; // 803FE710
  c->r[10]=c->r[1]+0x00000030u; // 803FE714
  c->r[5]=c->r[1]+0x00000008u; // 803FE718
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FE71C
  c->r[7]=c->r[1]+0x00000018u; // 803FE720
  c->r[8]=c->r[1]+0x00000020u; // 803FE724
  c->r[6]=c->r[1]+0x00000010u; // 803FE728
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FE72C
  c->r[11]=c->r[11]+0x00004278u; // 803FE730
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FE734
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803FE738
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FE73C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803FE740
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803FE744
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FE748
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803FE74C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803FE750
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 803FE754
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803FE758
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803FE75C
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FE760
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803FE764
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803FE768
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 803FE76C
  {uint32_t ea=c->r[4]+0x00004268u; WF32(ea,c->f[1]);} // 803FE770
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803FE774
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803FE778
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FE77C
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FE780
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 803FE784
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 803FE788
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 803FE78C
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 803FE790
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 803FE794
  c->r[1]=c->r[1]+0x00000040u; // 803FE798
  return; // 803FE79C
}

// fn_803FE7A0
void f_803FE7A0(Ctx* __restrict c) {
  trace_call(0x803FE7A0u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 803FE7A0
  W32(c->r[4]+0x00000048u,c->r[0]); // 803FE7A4
  W32(c->r[3]+0x00000004u,c->r[4]); // 803FE7A8
  return; // 803FE7AC
}

// fn_803FE7B0
void f_803FE7B0(Ctx* __restrict c) {
  trace_call(0x803FE7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE7B0
  c->r[0]=c->lr; // 803FE7B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FE7B8
  c->r[0]=0u+0x00000000u; // 803FE7BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803FE7C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803FE7C4
  c->r[30]=c->r[4]|c->r[4]; // 803FE7C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803FE7CC
  c->r[29]=c->r[3]|c->r[3]; // 803FE7D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 803FE7D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 803FE7D8
  W32(c->r[3]+0x00000008u,c->r[0]); // 803FE7DC
  c->r[3]=c->r[30]|c->r[30]; // 803FE7E0
  c->lr=0x803FE7E8u; f_803ADAA8(c); // 803FE7E4
  c->r[4]=R32(c->r[29]+0x00000008u); // 803FE7E8
  c->r[31]=c->r[3]|c->r[3]; // 803FE7EC
  cmps(c,0,(int32_t)c->r[4],0); // 803FE7F0
  if (crb(c,2)) { goto L_803FE80C; } // 803FE7F4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE7F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE7FC
  c->r[12]=R32(c->r[12]+0x000000D0u); // 803FE800
  c->ctr=c->r[12]; // 803FE804
  if (true) { c->lr=0x803FE80Cu; dispatch(c,c->ctr); } // 803FE808
L_803FE80C:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE80C
  c->r[4]=c->r[31]+0x00000001u; // 803FE810
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE814
  c->r[12]=R32(c->r[12]+0x000000CCu); // 803FE818
  c->ctr=c->r[12]; // 803FE81C
  if (true) { c->lr=0x803FE824u; dispatch(c,c->ctr); } // 803FE820
  W32(c->r[29]+0x00000008u,c->r[3]); // 803FE824
  c->r[4]=c->r[30]|c->r[30]; // 803FE828
  c->lr=0x803FE830u; f_803A6F10(c); // 803FE82C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803FE830
  c->r[3]=c->r[29]|c->r[29]; // 803FE834
  c->r[30]=R32(c->r[1]+0x00000018u); // 803FE838
  c->r[29]=R32(c->r[1]+0x00000014u); // 803FE83C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FE840
  c->lr=c->r[0]; // 803FE844
  c->r[1]=c->r[1]+0x00000020u; // 803FE848
  return; // 803FE84C
}

// fn_803FE850
void f_803FE850(Ctx* __restrict c) {
  trace_call(0x803FE850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE850
  c->r[0]=c->lr; // 803FE854
  cmps(c,0,(int32_t)c->r[3],0); // 803FE858
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FE85C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FE860
  c->r[31]=c->r[4]|c->r[4]; // 803FE864
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FE868
  c->r[30]=c->r[3]|c->r[3]; // 803FE86C
  if (crb(c,2)) { goto L_803FE8AC; } // 803FE870
  c->r[4]=R32(c->r[3]+0x00000008u); // 803FE874
  cmps(c,0,(int32_t)c->r[4],0); // 803FE878
  if (crb(c,2)) { goto L_803FE89C; } // 803FE87C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 803FE880
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE884
  c->r[12]=R32(c->r[12]+0x000000D0u); // 803FE888
  c->ctr=c->r[12]; // 803FE88C
  if (true) { c->lr=0x803FE894u; dispatch(c,c->ctr); } // 803FE890
  c->r[0]=0u+0x00000000u; // 803FE894
  W32(c->r[30]+0x00000008u,c->r[0]); // 803FE898
L_803FE89C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803FE89C
  if (!crb(c,1)) { goto L_803FE8AC; } // 803FE8A0
  c->r[3]=c->r[30]|c->r[30]; // 803FE8A4
  c->lr=0x803FE8ACu; f_803FE694(c); // 803FE8A8
L_803FE8AC:;
  c->r[3]=c->r[30]|c->r[30]; // 803FE8AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FE8B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FE8B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FE8B8
  c->lr=c->r[0]; // 803FE8BC
  c->r[1]=c->r[1]+0x00000010u; // 803FE8C0
  return; // 803FE8C4
}

// fn_803FE8C8
void f_803FE8C8(Ctx* __restrict c) {
  trace_call(0x803FE8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE8C8
  c->r[4]=0u+0x80570000u; // 803FE8CC
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FE8D0
  c->r[3]=c->r[4]+0x000042A8u; // 803FE8D4
  {uint32_t ea=c->r[2]+0xFFFFA954u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FE8D8
  c->r[11]=0u+0x80570000u; // 803FE8DC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803FE8E0
  c->r[9]=c->r[1]+0x00000028u; // 803FE8E4
  c->r[10]=c->r[1]+0x00000030u; // 803FE8E8
  c->r[5]=c->r[1]+0x00000008u; // 803FE8EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FE8F0
  c->r[7]=c->r[1]+0x00000018u; // 803FE8F4
  c->r[8]=c->r[1]+0x00000020u; // 803FE8F8
  c->r[6]=c->r[1]+0x00000010u; // 803FE8FC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FE900
  c->r[11]=c->r[11]+0x000042B8u; // 803FE904
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FE908
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803FE90C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FE910
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803FE914
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803FE918
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 803FE91C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803FE920
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803FE924
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 803FE928
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803FE92C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803FE930
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FE934
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803FE938
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 803FE93C
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 803FE940
  {uint32_t ea=c->r[4]+0x000042A8u; WF32(ea,c->f[1]);} // 803FE944
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803FE948
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803FE94C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FE950
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 803FE954
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 803FE958
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 803FE95C
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 803FE960
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 803FE964
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 803FE968
  c->r[1]=c->r[1]+0x00000040u; // 803FE96C
  return; // 803FE970
}

// fn_803FE974
void f_803FE974(Ctx* __restrict c) {
  trace_call(0x803FE974u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 803FE974
  return; // 803FE978
}

// fn_803FE97C
void f_803FE97C(Ctx* __restrict c) {
  trace_call(0x803FE97Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FE97C
  c->r[0]=c->lr; // 803FE980
  W32(c->r[1]+0x00000014u,c->r[0]); // 803FE984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803FE988
  W32(c->r[1]+0x00000008u,c->r[30]); // 803FE98C
  c->r[30]=c->r[3]|c->r[3]; // 803FE990
  goto L_803FE9C8; // 803FE994
L_803FE998:;
  cmps(c,0,(int32_t)c->r[3],0); // 803FE998
  c->r[31]=R32(c->r[3]+0x00000038u); // 803FE99C
  if (crb(c,2)) { goto L_803FE9B8; } // 803FE9A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803FE9A4
  c->r[4]=0u+0x00000001u; // 803FE9A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 803FE9AC
  c->ctr=c->r[12]; // 803FE9B0
  if (true) { c->lr=0x803FE9B8u; dispatch(c,c->ctr); } // 803FE9B4
L_803FE9B8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 803FE9B8
  W32(c->r[30]+0x00000000u,c->r[31]); // 803FE9BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803FE9C0
  W32(c->r[30]+0x00000004u,c->r[0]); // 803FE9C4
L_803FE9C8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 803FE9C8
  cmps(c,0,(int32_t)c->r[3],0); // 803FE9CC
  if (!crb(c,2)) { IRQCHK(c); goto L_803FE998; } // 803FE9D0
  c->r[3]=R32(c->r[30]+0x00000008u); // 803FE9D4
  goto L_803FE9EC; // 803FE9D8
L_803FE9DC:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 803FE9DC
  c->r[4]=0u+0x00000001u; // 803FE9E0
  c->lr=0x803FE9E8u; f_803FE850(c); // 803FE9E4
  c->r[3]=c->r[31]|c->r[31]; // 803FE9E8
L_803FE9EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 803FE9EC
  if (!crb(c,2)) { IRQCHK(c); goto L_803FE9DC; } // 803FE9F0
  c->r[0]=0u+0x00000000u; // 803FE9F4
  W32(c->r[30]+0x00000008u,c->r[0]); // 803FE9F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803FE9FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803FEA00
  c->r[0]=R32(c->r[1]+0x00000014u); // 803FEA04
  c->lr=c->r[0]; // 803FEA08
  c->r[1]=c->r[1]+0x00000010u; // 803FEA0C
  return; // 803FEA10
}

// fn_803FEA14
void f_803FEA14(Ctx* __restrict c) {
  trace_call(0x803FEA14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FEA14
  c->r[0]=c->lr; // 803FEA18
  W32(c->r[1]+0x00000024u,c->r[0]); // 803FEA1C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 803FEA20
  c->r[28]=c->r[4]|c->r[4]; // 803FEA24
  c->r[27]=c->r[3]|c->r[3]; // 803FEA28
  c->r[29]=c->r[5]|c->r[5]; // 803FEA2C
  c->r[30]=c->r[6]|c->r[6]; // 803FEA30
  c->r[3]=c->r[28]|c->r[28]; // 803FEA34
  c->lr=0x803FEA3Cu; f_803FE974(c); // 803FEA38
  c->r[4]=c->r[3]|c->r[3]; // 803FEA3C
  c->r[3]=c->r[27]|c->r[27]; // 803FEA40
  c->r[5]=c->r[29]|c->r[29]; // 803FEA44
  c->lr=0x803FEA4Cu; f_80400594(c); // 803FEA48
  cmps(c,0,(int32_t)c->r[3],0); // 803FEA4C
  if (crb(c,2)) { goto L_803FEA5C; } // 803FEA50
  c->r[3]=0u+0x00000000u; // 803FEA54
  goto L_803FEC8C; // 803FEA58
L_803FEA5C:;
  cmpu(c,0,c->r[30],0x0000000Fu); // 803FEA5C
  c->r[31]=0u+0x00000000u; // 803FEA60
  if (crb(c,1)) { goto L_803FEC20; } // 803FEA64
  c->r[3]=0u+0x80470000u; // 803FEA68
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 803FEA6C
  c->r[3]=c->r[3]+0xFFFFA508u; // 803FEA70
  c->r[3]=R32(c->r[3]+c->r[0]); // 803FEA74
  c->ctr=c->r[3]; // 803FEA78
  if (true) { switch (c->ctr) { case 0x803FEA80u: goto L_803FEA80; case 0x803FEA9Cu: goto L_803FEA9C; case 0x803FEAB8u: goto L_803FEAB8; case 0x803FEAD4u: goto L_803FEAD4; case 0x803FEAF0u: goto L_803FEAF0; case 0x803FEB0Cu: goto L_803FEB0C; case 0x803FEB28u: goto L_803FEB28; case 0x803FEB44u: goto L_803FEB44; case 0x803FEB60u: goto L_803FEB60; case 0x803FEB7Cu: goto L_803FEB7C; case 0x803FEB98u: goto L_803FEB98; case 0x803FEBB4u: goto L_803FEBB4; case 0x803FEBD0u: goto L_803FEBD0; case 0x803FEBECu: goto L_803FEBEC; case 0x803FEC08u: goto L_803FEC08; case 0x803FEC20u: goto L_803FEC20; default: break; } dispatch(c,c->ctr); return; } // 803FEA7C
L_803FEA80:;
  c->r[3]=0u+0x0000022Cu; // 803FEA80
  c->lr=0x803FEA88u; f_803FE664(c); // 803FEA84
  cmps(c,0,(int32_t)c->r[3],0); // 803FEA88
  if (crb(c,2)) { goto L_803FEA94; } // 803FEA8C
  c->lr=0x803FEA94u; f_803FECA0(c); // 803FEA90
L_803FEA94:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEA94
  goto L_803FEC20; // 803FEA98
L_803FEA9C:;
  c->r[3]=0u+0x000001C4u; // 803FEA9C
  c->lr=0x803FEAA4u; f_803FE664(c); // 803FEAA0
  cmps(c,0,(int32_t)c->r[3],0); // 803FEAA4
  if (crb(c,2)) { goto L_803FEAB0; } // 803FEAA8
  c->lr=0x803FEAB0u; f_803FEF14(c); // 803FEAAC
L_803FEAB0:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEAB0
  goto L_803FEC20; // 803FEAB4
L_803FEAB8:;
  c->r[3]=0u+0x000000B8u; // 803FEAB8
  c->lr=0x803FEAC0u; f_803FE664(c); // 803FEABC
  cmps(c,0,(int32_t)c->r[3],0); // 803FEAC0
  if (crb(c,2)) { goto L_803FEACC; } // 803FEAC4
  c->lr=0x803FEACCu; f_803FF114(c); // 803FEAC8
L_803FEACC:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEACC
  goto L_803FEC20; // 803FEAD0
L_803FEAD4:;
  c->r[3]=0u+0x000000B8u; // 803FEAD4
  c->lr=0x803FEADCu; f_803FE664(c); // 803FEAD8
  cmps(c,0,(int32_t)c->r[3],0); // 803FEADC
  if (crb(c,2)) { goto L_803FEAE8; } // 803FEAE0
  c->lr=0x803FEAE8u; f_803FF1C4(c); // 803FEAE4
L_803FEAE8:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEAE8
  goto L_803FEC20; // 803FEAEC
L_803FEAF0:;
  c->r[3]=0u+0x00000244u; // 803FEAF0
  c->lr=0x803FEAF8u; f_803FE664(c); // 803FEAF4
  cmps(c,0,(int32_t)c->r[3],0); // 803FEAF8
  if (crb(c,2)) { goto L_803FEB04; } // 803FEAFC
  c->lr=0x803FEB04u; f_803FF278(c); // 803FEB00
L_803FEB04:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEB04
  goto L_803FEC20; // 803FEB08
L_803FEB0C:;
  c->r[3]=0u+0x00000118u; // 803FEB0C
  c->lr=0x803FEB14u; f_803FE664(c); // 803FEB10
  cmps(c,0,(int32_t)c->r[3],0); // 803FEB14
  if (crb(c,2)) { goto L_803FEB20; } // 803FEB18
  c->lr=0x803FEB20u; f_803FF620(c); // 803FEB1C
L_803FEB20:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEB20
  goto L_803FEC20; // 803FEB24
L_803FEB28:;
  c->r[3]=0u+0x00000138u; // 803FEB28
  c->lr=0x803FEB30u; f_803FE664(c); // 803FEB2C
  cmps(c,0,(int32_t)c->r[3],0); // 803FEB30
  if (crb(c,2)) { goto L_803FEB3C; } // 803FEB34
  c->lr=0x803FEB3Cu; f_803FF84C(c); // 803FEB38
L_803FEB3C:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEB3C
  goto L_803FEC20; // 803FEB40
L_803FEB44:;
  c->r[3]=0u+0x00000160u; // 803FEB44
  c->lr=0x803FEB4Cu; f_803FE664(c); // 803FEB48
  cmps(c,0,(int32_t)c->r[3],0); // 803FEB4C
  if (crb(c,2)) { goto L_803FEB58; } // 803FEB50
  c->lr=0x803FEB58u; f_803FF990(c); // 803FEB54
L_803FEB58:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEB58
  goto L_803FEC20; // 803FEB5C
L_803FEB60:;
  c->r[3]=0u+0x000001A4u; // 803FEB60
  c->lr=0x803FEB68u; f_803FE664(c); // 803FEB64
  cmps(c,0,(int32_t)c->r[3],0); // 803FEB68
  if (crb(c,2)) { goto L_803FEB74; } // 803FEB6C
  c->lr=0x803FEB74u; f_803FFAF8(c); // 803FEB70
L_803FEB74:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEB74
  goto L_803FEC20; // 803FEB78
L_803FEB7C:;
  c->r[3]=0u+0x00000120u; // 803FEB7C
  c->lr=0x803FEB84u; f_803FE664(c); // 803FEB80
  cmps(c,0,(int32_t)c->r[3],0); // 803FEB84
  if (crb(c,2)) { goto L_803FEB90; } // 803FEB88
  c->lr=0x803FEB90u; f_803FFCB8(c); // 803FEB8C
L_803FEB90:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEB90
  goto L_803FEC20; // 803FEB94
L_803FEB98:;
  c->r[3]=0u+0x000000B8u; // 803FEB98
  c->lr=0x803FEBA0u; f_803FE664(c); // 803FEB9C
  cmps(c,0,(int32_t)c->r[3],0); // 803FEBA0
  if (crb(c,2)) { goto L_803FEBAC; } // 803FEBA4
  c->lr=0x803FEBACu; f_803FFDDC(c); // 803FEBA8
L_803FEBAC:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEBAC
  goto L_803FEC20; // 803FEBB0
L_803FEBB4:;
  c->r[3]=0u+0x000000C0u; // 803FEBB4
  c->lr=0x803FEBBCu; f_803FE664(c); // 803FEBB8
  cmps(c,0,(int32_t)c->r[3],0); // 803FEBBC
  if (crb(c,2)) { goto L_803FEBC8; } // 803FEBC0
  c->lr=0x803FEBC8u; f_803FFE98(c); // 803FEBC4
L_803FEBC8:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEBC8
  goto L_803FEC20; // 803FEBCC
L_803FEBD0:;
  c->r[3]=0u+0x00000248u; // 803FEBD0
  c->lr=0x803FEBD8u; f_803FE664(c); // 803FEBD4
  cmps(c,0,(int32_t)c->r[3],0); // 803FEBD8
  if (crb(c,2)) { goto L_803FEBE4; } // 803FEBDC
  c->lr=0x803FEBE4u; f_803FFF70(c); // 803FEBE0
L_803FEBE4:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEBE4
  goto L_803FEC20; // 803FEBE8
L_803FEBEC:;
  c->r[3]=0u+0x000001A0u; // 803FEBEC
  c->lr=0x803FEBF4u; f_803FE664(c); // 803FEBF0
  cmps(c,0,(int32_t)c->r[3],0); // 803FEBF4
  if (crb(c,2)) { goto L_803FEC00; } // 803FEBF8
  c->lr=0x803FEC00u; f_80400230(c); // 803FEBFC
L_803FEC00:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEC00
  goto L_803FEC20; // 803FEC04
L_803FEC08:;
  c->r[3]=0u+0x000000F0u; // 803FEC08
  c->lr=0x803FEC10u; f_803FE664(c); // 803FEC0C
  cmps(c,0,(int32_t)c->r[3],0); // 803FEC10
  if (crb(c,2)) { goto L_803FEC1C; } // 803FEC14
  c->lr=0x803FEC1Cu; f_804002D0(c); // 803FEC18
L_803FEC1C:;
  c->r[31]=c->r[3]|c->r[3]; // 803FEC1C
L_803FEC20:;
  c->r[4]=c->r[29]|c->r[29]; // 803FEC20
  c->r[3]=c->r[31]+0x00000004u; // 803FEC24
  c->r[5]=0u+0x00000031u; // 803FEC28
  c->lr=0x803FEC30u; f_803A6FD0(c); // 803FEC2C
  c->r[0]=0u+0x00000000u; // 803FEC30
  W8(c->r[31]+0x00000035u,c->r[0]); // 803FEC34
  c->r[3]=0u+0x0000000Cu; // 803FEC38
  c->lr=0x803FEC40u; f_803FE664(c); // 803FEC3C
  cmps(c,0,(int32_t)c->r[3],0); // 803FEC40
  if (crb(c,2)) { goto L_803FEC54; } // 803FEC44
  c->r[4]=c->r[28]|c->r[28]; // 803FEC48
  c->r[5]=c->r[29]|c->r[29]; // 803FEC4C
  c->lr=0x803FEC54u; f_804029E8(c); // 803FEC50
L_803FEC54:;
  W32(c->r[31]+0x00000080u,c->r[3]); // 803FEC54
  c->r[4]=c->r[28]|c->r[28]; // 803FEC58
  c->lr=0x803FEC60u; f_80402A88(c); // 803FEC5C
  c->r[3]=R32(c->r[31]+0x00000080u); // 803FEC60
  c->lr=0x803FEC68u; f_804003C4(c); // 803FEC64
  c->r[4]=c->r[31]|c->r[31]; // 803FEC68
  c->lr=0x803FEC70u; f_803FE7A0(c); // 803FEC6C
  c->r[3]=R32(c->r[31]+0x00000080u); // 803FEC70
  c->r[4]=c->r[29]|c->r[29]; // 803FEC74
  c->lr=0x803FEC7Cu; f_80402A90(c); // 803FEC78
  c->r[3]=c->r[27]|c->r[27]; // 803FEC7C
  c->r[4]=c->r[31]|c->r[31]; // 803FEC80
  c->lr=0x803FEC88u; f_8040045C(c); // 803FEC84
  c->r[3]=c->r[31]|c->r[31]; // 803FEC88
L_803FEC8C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 803FEC8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803FEC90
  c->lr=c->r[0]; // 803FEC94
  c->r[1]=c->r[1]+0x00000020u; // 803FEC98
  return; // 803FEC9C
}

// fn_803FECA0
void f_803FECA0(Ctx* __restrict c) {
  trace_call(0x803FECA0u);
  c->r[4]=0u+0x80470000u; // 803FECA0
  c->r[6]=0u+0x00000000u; // 803FECA4
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[4]=c->ps1[4]=RF32(ea);} // 803FECA8
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FECAC
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FECB0
  c->r[0]=0u+0xFFFFFFFFu; // 803FECB4
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[3]=c->ps1[3]=RF32(ea);} // 803FECB8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FECBC
  c->r[4]=0u+0x80470000u; // 803FECC0
  c->r[4]=c->r[4]+0xFFFFA1F8u; // 803FECC4
  W8(c->r[3]+0x00000036u,c->r[6]); // 803FECC8
  W32(c->r[3]+0x00000038u,c->r[6]); // 803FECCC
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 803FECD0
  W32(c->r[3]+0x00000040u,c->r[6]); // 803FECD4
  W32(c->r[3]+0x00000044u,c->r[6]); // 803FECD8
  W32(c->r[3]+0x00000048u,c->r[6]); // 803FECDC
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 803FECE0
  W32(c->r[3]+0x00000050u,c->r[6]); // 803FECE4
  W32(c->r[3]+0x00000054u,c->r[6]); // 803FECE8
  W32(c->r[3]+0x00000058u,c->r[6]); // 803FECEC
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 803FECF0
  W32(c->r[3]+0x00000060u,c->r[6]); // 803FECF4
  W32(c->r[3]+0x00000064u,c->r[6]); // 803FECF8
  W32(c->r[3]+0x00000068u,c->r[6]); // 803FECFC
  W32(c->r[3]+0x0000006Cu,c->r[6]); // 803FED00
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[4]);} // 803FED04
  W32(c->r[3]+0x00000074u,c->r[6]); // 803FED08
  W32(c->r[3]+0x00000078u,c->r[6]); // 803FED0C
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 803FED10
  W32(c->r[3]+0x00000080u,c->r[6]); // 803FED14
  W32(c->r[3]+0x00000084u,c->r[6]); // 803FED18
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FED1C
  W32(c->r[3]+0x0000008Cu,c->r[6]); // 803FED20
  W32(c->r[3]+0x00000090u,c->r[6]); // 803FED24
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 803FED28
  W8(c->r[3]+0x00000004u,c->r[6]); // 803FED2C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FED30
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[4]);} // 803FED34
  W32(c->r[3]+0x0000009Cu,c->r[6]); // 803FED38
  W32(c->r[3]+0x000000A0u,c->r[6]); // 803FED3C
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 803FED40
  W32(c->r[3]+0x000000A8u,c->r[6]); // 803FED44
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[3]);} // 803FED48
  W32(c->r[3]+0x000000B0u,c->r[6]); // 803FED4C
  W32(c->r[3]+0x000000B4u,c->r[6]); // 803FED50
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[4]);} // 803FED54
  W32(c->r[3]+0x000000BCu,c->r[6]); // 803FED58
  W32(c->r[3]+0x000000C0u,c->r[6]); // 803FED5C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 803FED60
  W32(c->r[3]+0x000000C8u,c->r[6]); // 803FED64
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[3]);} // 803FED68
  W32(c->r[3]+0x000000D0u,c->r[6]); // 803FED6C
  W32(c->r[3]+0x000000D4u,c->r[6]); // 803FED70
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[4]);} // 803FED74
  W32(c->r[3]+0x000000DCu,c->r[6]); // 803FED78
  W32(c->r[3]+0x000000E0u,c->r[6]); // 803FED7C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 803FED80
  W32(c->r[3]+0x000000E8u,c->r[6]); // 803FED84
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[4]);} // 803FED88
  c->r[5]=0u+0x00000001u; // 803FED8C
  {uint32_t ea=c->r[2]+0xFFFFA964u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FED90
  c->r[4]=0u+0x00000064u; // 803FED94
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[4]);} // 803FED98
  c->r[0]=0u+0x00000002u; // 803FED9C
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FEDA0
  {uint32_t ea=c->r[3]+0x00000198u; WF32(ea,c->f[4]);} // 803FEDA4
  W32(c->r[3]+0x000000FCu,c->r[6]); // 803FEDA8
  W32(c->r[3]+0x0000013Cu,c->r[6]); // 803FEDAC
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 803FEDB0
  {uint32_t ea=c->r[3]+0x000001D4u; WF32(ea,c->f[4]);} // 803FEDB4
  W32(c->r[3]+0x000001D8u,c->r[6]); // 803FEDB8
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 803FEDBC
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 803FEDC0
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[0]);} // 803FEDC4
  {uint32_t ea=c->r[3]+0x000001A4u; WF32(ea,c->f[0]);} // 803FEDC8
  {uint32_t ea=c->r[3]+0x000001E0u; WF32(ea,c->f[0]);} // 803FEDCC
  {uint32_t ea=c->r[2]+0xFFFFA96Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FEDD0
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[3]);} // 803FEDD4
  W32(c->r[3]+0x000000F0u,c->r[6]); // 803FEDD8
  W32(c->r[3]+0x000000F4u,c->r[6]); // 803FEDDC
  W32(c->r[3]+0x00000100u,c->r[6]); // 803FEDE0
  W32(c->r[3]+0x00000108u,c->r[6]); // 803FEDE4
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[3]);} // 803FEDE8
  W32(c->r[3]+0x00000110u,c->r[6]); // 803FEDEC
  W32(c->r[3]+0x00000114u,c->r[6]); // 803FEDF0
  W32(c->r[3]+0x00000120u,c->r[6]); // 803FEDF4
  W32(c->r[3]+0x00000128u,c->r[6]); // 803FEDF8
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[3]);} // 803FEDFC
  W32(c->r[3]+0x00000130u,c->r[6]); // 803FEE00
  W32(c->r[3]+0x00000134u,c->r[6]); // 803FEE04
  W32(c->r[3]+0x00000140u,c->r[6]); // 803FEE08
  W32(c->r[3]+0x00000148u,c->r[6]); // 803FEE0C
  {uint32_t ea=c->r[3]+0x0000014Cu; WF32(ea,c->f[3]);} // 803FEE10
  W32(c->r[3]+0x00000150u,c->r[6]); // 803FEE14
  W32(c->r[3]+0x00000154u,c->r[6]); // 803FEE18
  W32(c->r[3]+0x000001A0u,c->r[6]); // 803FEE1C
  W32(c->r[3]+0x000001A8u,c->r[6]); // 803FEE20
  {uint32_t ea=c->r[3]+0x000001ACu; WF32(ea,c->f[3]);} // 803FEE24
  W32(c->r[3]+0x000001B0u,c->r[6]); // 803FEE28
  W32(c->r[3]+0x000001B4u,c->r[6]); // 803FEE2C
  W32(c->r[3]+0x000001DCu,c->r[6]); // 803FEE30
  W32(c->r[3]+0x000001E4u,c->r[6]); // 803FEE34
  {uint32_t ea=c->r[3]+0x000001E8u; WF32(ea,c->f[3]);} // 803FEE38
  W32(c->r[3]+0x000001ECu,c->r[6]); // 803FEE3C
  W32(c->r[3]+0x000001F0u,c->r[6]); // 803FEE40
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 803FEE44
  W32(c->r[3]+0x0000009Cu,c->r[6]); // 803FEE48
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[2]);} // 803FEE4C
  W32(c->r[3]+0x000000BCu,c->r[6]); // 803FEE50
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[4]);} // 803FEE54
  W32(c->r[3]+0x000000DCu,c->r[6]); // 803FEE58
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[4]);} // 803FEE5C
  W32(c->r[3]+0x0000011Cu,c->r[6]); // 803FEE60
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[3]);} // 803FEE64
  W32(c->r[3]+0x000000FCu,c->r[6]); // 803FEE68
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[3]);} // 803FEE6C
  W32(c->r[3]+0x0000013Cu,c->r[6]); // 803FEE70
  W32(c->r[3]+0x0000021Cu,c->r[6]); // 803FEE74
  W32(c->r[3]+0x00000220u,c->r[6]); // 803FEE78
  {uint32_t ea=c->r[3]+0x00000158u; WF32(ea,c->f[4]);} // 803FEE7C
  {uint32_t ea=c->r[3]+0x0000015Cu; WF32(ea,c->f[4]);} // 803FEE80
  W32(c->r[3]+0x00000160u,c->r[5]); // 803FEE84
  W32(c->r[3]+0x0000016Cu,c->r[4]); // 803FEE88
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[4]);} // 803FEE8C
  {uint32_t ea=c->r[3]+0x00000164u; WF32(ea,c->f[4]);} // 803FEE90
  W32(c->r[3]+0x00000168u,c->r[6]); // 803FEE94
  W32(c->r[3]+0x00000174u,c->r[6]); // 803FEE98
  W32(c->r[3]+0x00000178u,c->r[5]); // 803FEE9C
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[4]);} // 803FEEA0
  W32(c->r[3]+0x00000180u,c->r[6]); // 803FEEA4
  W32(c->r[3]+0x00000184u,c->r[6]); // 803FEEA8
  W32(c->r[3]+0x00000188u,c->r[6]); // 803FEEAC
  W32(c->r[3]+0x0000018Cu,c->r[6]); // 803FEEB0
  W32(c->r[3]+0x00000190u,c->r[6]); // 803FEEB4
  {uint32_t ea=c->r[3]+0x00000194u; WF32(ea,c->f[3]);} // 803FEEB8
  {uint32_t ea=c->r[3]+0x00000198u; WF32(ea,c->f[3]);} // 803FEEBC
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 803FEEC0
  W32(c->r[3]+0x000001B8u,c->r[6]); // 803FEEC4
  W32(c->r[3]+0x000001BCu,c->r[6]); // 803FEEC8
  W32(c->r[3]+0x000001C0u,c->r[6]); // 803FEECC
  W32(c->r[3]+0x000001C4u,c->r[6]); // 803FEED0
  {uint32_t ea=c->r[3]+0x000001CCu; WF32(ea,c->f[3]);} // 803FEED4
  W32(c->r[3]+0x000001C8u,c->r[0]); // 803FEED8
  W32(c->r[3]+0x000001D0u,c->r[6]); // 803FEEDC
  {uint32_t ea=c->r[3]+0x000001D4u; WF32(ea,c->f[4]);} // 803FEEE0
  W32(c->r[3]+0x000001D8u,c->r[6]); // 803FEEE4
  {uint32_t ea=c->r[3]+0x000001F8u; WF32(ea,c->f[4]);} // 803FEEE8
  {uint32_t ea=c->r[3]+0x000001F4u; WF32(ea,c->f[4]);} // 803FEEEC
  {uint32_t ea=c->r[3]+0x00000200u; WF32(ea,c->f[3]);} // 803FEEF0
  {uint32_t ea=c->r[3]+0x000001FCu; WF32(ea,c->f[3]);} // 803FEEF4
  {uint32_t ea=c->r[3]+0x00000204u; WF32(ea,c->f[3]);} // 803FEEF8
  W32(c->r[3]+0x00000208u,c->r[5]); // 803FEEFC
  {uint32_t ea=c->r[3]+0x0000020Cu; WF32(ea,c->f[1]);} // 803FEF00
  {uint32_t ea=c->r[3]+0x00000210u; WF32(ea,c->f[2]);} // 803FEF04
  {uint32_t ea=c->r[3]+0x00000214u; WF32(ea,c->f[0]);} // 803FEF08
  {uint32_t ea=c->r[3]+0x00000218u; WF32(ea,c->f[4]);} // 803FEF0C
  return; // 803FEF10
}

// fn_803FEF14
void f_803FEF14(Ctx* __restrict c) {
  trace_call(0x803FEF14u);
  c->r[4]=0u+0x80470000u; // 803FEF14
  c->r[5]=0u+0x00000000u; // 803FEF18
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[6]=c->ps1[6]=RF32(ea);} // 803FEF1C
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FEF20
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803FEF24
  c->r[0]=0u+0xFFFFFFFFu; // 803FEF28
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[4]=c->ps1[4]=RF32(ea);} // 803FEF2C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FEF30
  c->r[4]=0u+0x80470000u; // 803FEF34
  c->r[4]=c->r[4]+0xFFFFA158u; // 803FEF38
  W8(c->r[3]+0x00000036u,c->r[5]); // 803FEF3C
  W32(c->r[3]+0x00000038u,c->r[5]); // 803FEF40
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 803FEF44
  W32(c->r[3]+0x00000040u,c->r[5]); // 803FEF48
  W32(c->r[3]+0x00000044u,c->r[5]); // 803FEF4C
  W32(c->r[3]+0x00000048u,c->r[5]); // 803FEF50
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 803FEF54
  W32(c->r[3]+0x00000050u,c->r[5]); // 803FEF58
  W32(c->r[3]+0x00000054u,c->r[5]); // 803FEF5C
  W32(c->r[3]+0x00000058u,c->r[5]); // 803FEF60
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 803FEF64
  W32(c->r[3]+0x00000060u,c->r[5]); // 803FEF68
  W32(c->r[3]+0x00000064u,c->r[5]); // 803FEF6C
  W32(c->r[3]+0x00000068u,c->r[5]); // 803FEF70
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 803FEF74
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[6]);} // 803FEF78
  W32(c->r[3]+0x00000074u,c->r[5]); // 803FEF7C
  W32(c->r[3]+0x00000078u,c->r[5]); // 803FEF80
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 803FEF84
  W32(c->r[3]+0x00000080u,c->r[5]); // 803FEF88
  W32(c->r[3]+0x00000084u,c->r[5]); // 803FEF8C
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FEF90
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 803FEF94
  W32(c->r[3]+0x00000090u,c->r[5]); // 803FEF98
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[5]);} // 803FEF9C
  W8(c->r[3]+0x00000004u,c->r[5]); // 803FEFA0
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FEFA4
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[6]);} // 803FEFA8
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FEFAC
  W32(c->r[3]+0x000000A0u,c->r[5]); // 803FEFB0
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[5]);} // 803FEFB4
  W32(c->r[3]+0x000000A8u,c->r[5]); // 803FEFB8
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[4]);} // 803FEFBC
  W32(c->r[3]+0x000000B0u,c->r[5]); // 803FEFC0
  W32(c->r[3]+0x000000B4u,c->r[5]); // 803FEFC4
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[6]);} // 803FEFC8
  W32(c->r[3]+0x000000C4u,c->r[5]); // 803FEFCC
  W32(c->r[3]+0x000000C8u,c->r[5]); // 803FEFD0
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[5]);} // 803FEFD4
  W32(c->r[3]+0x000000D0u,c->r[5]); // 803FEFD8
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[4]);} // 803FEFDC
  W32(c->r[3]+0x000000D8u,c->r[5]); // 803FEFE0
  W32(c->r[3]+0x000000DCu,c->r[5]); // 803FEFE4
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[6]);} // 803FEFE8
  W32(c->r[3]+0x000000E4u,c->r[5]); // 803FEFEC
  W32(c->r[3]+0x000000E8u,c->r[5]); // 803FEFF0
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[5]);} // 803FEFF4
  W32(c->r[3]+0x000000F0u,c->r[5]); // 803FEFF8
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[6]);} // 803FEFFC
  c->r[0]=0u+0x0000000Au; // 803FF000
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[3]=c->ps1[3]=RF32(ea);} // 803FF004
  W32(c->r[3]+0x00000104u,c->r[5]); // 803FF008
  {uint32_t ea=c->r[2]+0xFFFFA974u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FF00C
  W32(c->r[3]+0x00000124u,c->r[5]); // 803FF010
  {uint32_t ea=c->r[2]+0xFFFFA96Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF014
  {uint32_t ea=c->r[3]+0x00000148u; WF32(ea,c->f[6]);} // 803FF018
  {uint32_t ea=c->r[2]+0xFFFFA978u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF01C
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[4]);} // 803FF020
  W32(c->r[3]+0x000000F8u,c->r[5]); // 803FF024
  W32(c->r[3]+0x000000FCu,c->r[5]); // 803FF028
  W32(c->r[3]+0x00000108u,c->r[5]); // 803FF02C
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[5]);} // 803FF030
  W32(c->r[3]+0x00000110u,c->r[5]); // 803FF034
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[4]);} // 803FF038
  W32(c->r[3]+0x00000118u,c->r[5]); // 803FF03C
  W32(c->r[3]+0x0000011Cu,c->r[5]); // 803FF040
  W32(c->r[3]+0x00000128u,c->r[5]); // 803FF044
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[5]);} // 803FF048
  W32(c->r[3]+0x00000130u,c->r[5]); // 803FF04C
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[4]);} // 803FF050
  W32(c->r[3]+0x00000138u,c->r[5]); // 803FF054
  W32(c->r[3]+0x0000013Cu,c->r[5]); // 803FF058
  W32(c->r[3]+0x00000150u,c->r[5]); // 803FF05C
  {uint32_t ea=c->r[3]+0x00000154u; WF32(ea,c->f[5]);} // 803FF060
  W32(c->r[3]+0x00000158u,c->r[5]); // 803FF064
  {uint32_t ea=c->r[3]+0x0000015Cu; WF32(ea,c->f[4]);} // 803FF068
  W32(c->r[3]+0x00000160u,c->r[5]); // 803FF06C
  W32(c->r[3]+0x00000164u,c->r[5]); // 803FF070
  W32(c->r[3]+0x00000174u,c->r[5]); // 803FF074
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[5]);} // 803FF078
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 803FF07C
  {uint32_t ea=c->r[3]+0x00000180u; WF32(ea,c->f[4]);} // 803FF080
  W32(c->r[3]+0x00000184u,c->r[5]); // 803FF084
  W32(c->r[3]+0x00000188u,c->r[5]); // 803FF088
  W32(c->r[3]+0x0000019Cu,c->r[5]); // 803FF08C
  {uint32_t ea=c->r[3]+0x000001A0u; WF32(ea,c->f[5]);} // 803FF090
  W32(c->r[3]+0x000001A4u,c->r[5]); // 803FF094
  {uint32_t ea=c->r[3]+0x000001A8u; WF32(ea,c->f[4]);} // 803FF098
  W32(c->r[3]+0x000001ACu,c->r[5]); // 803FF09C
  W32(c->r[3]+0x000001B0u,c->r[5]); // 803FF0A0
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[3]);} // 803FF0A4
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FF0A8
  W32(c->r[3]+0x000000B8u,c->r[0]); // 803FF0AC
  W32(c->r[3]+0x000000BCu,c->r[5]); // 803FF0B0
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[6]);} // 803FF0B4
  W32(c->r[3]+0x000000C4u,c->r[5]); // 803FF0B8
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[6]);} // 803FF0BC
  W32(c->r[3]+0x000000E4u,c->r[5]); // 803FF0C0
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[2]);} // 803FF0C4
  W32(c->r[3]+0x00000104u,c->r[5]); // 803FF0C8
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[1]);} // 803FF0CC
  W32(c->r[3]+0x00000124u,c->r[5]); // 803FF0D0
  W32(c->r[3]+0x00000140u,c->r[5]); // 803FF0D4
  W32(c->r[3]+0x00000144u,c->r[5]); // 803FF0D8
  {uint32_t ea=c->r[3]+0x00000148u; WF32(ea,c->f[6]);} // 803FF0DC
  W32(c->r[3]+0x0000014Cu,c->r[5]); // 803FF0E0
  W32(c->r[3]+0x00000168u,c->r[5]); // 803FF0E4
  {uint32_t ea=c->r[3]+0x0000016Cu; WF32(ea,c->f[6]);} // 803FF0E8
  W32(c->r[3]+0x00000170u,c->r[5]); // 803FF0EC
  W32(c->r[3]+0x0000018Cu,c->r[5]); // 803FF0F0
  W32(c->r[3]+0x00000190u,c->r[5]); // 803FF0F4
  {uint32_t ea=c->r[3]+0x00000194u; WF32(ea,c->f[6]);} // 803FF0F8
  W32(c->r[3]+0x00000198u,c->r[5]); // 803FF0FC
  W32(c->r[3]+0x000001B4u,c->r[5]); // 803FF100
  {uint32_t ea=c->r[3]+0x000001B8u; WF32(ea,c->f[0]);} // 803FF104
  W32(c->r[3]+0x000001BCu,c->r[5]); // 803FF108
  W32(c->r[3]+0x000001C0u,c->r[5]); // 803FF10C
  return; // 803FF110
}

// fn_803FF114
void f_803FF114(Ctx* __restrict c) {
  trace_call(0x803FF114u);
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FF114
  c->r[5]=0u+0x00000000u; // 803FF118
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF11C
  c->r[4]=0u+0x80470000u; // 803FF120
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 803FF124
  c->r[0]=0u+0xFFFFFFFFu; // 803FF128
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF12C
  c->r[4]=c->r[4]+0xFFFFA0B8u; // 803FF130
  W8(c->r[3]+0x00000036u,c->r[5]); // 803FF134
  W32(c->r[3]+0x00000038u,c->r[5]); // 803FF138
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 803FF13C
  W32(c->r[3]+0x00000040u,c->r[5]); // 803FF140
  W32(c->r[3]+0x00000044u,c->r[5]); // 803FF144
  W32(c->r[3]+0x00000048u,c->r[5]); // 803FF148
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 803FF14C
  W32(c->r[3]+0x00000050u,c->r[5]); // 803FF150
  W32(c->r[3]+0x00000054u,c->r[5]); // 803FF154
  W32(c->r[3]+0x00000058u,c->r[5]); // 803FF158
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 803FF15C
  W32(c->r[3]+0x00000060u,c->r[5]); // 803FF160
  W32(c->r[3]+0x00000064u,c->r[5]); // 803FF164
  W32(c->r[3]+0x00000068u,c->r[5]); // 803FF168
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 803FF16C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 803FF170
  W32(c->r[3]+0x00000074u,c->r[5]); // 803FF174
  W32(c->r[3]+0x00000078u,c->r[5]); // 803FF178
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 803FF17C
  W32(c->r[3]+0x00000080u,c->r[5]); // 803FF180
  W32(c->r[3]+0x00000084u,c->r[5]); // 803FF184
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FF188
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 803FF18C
  W32(c->r[3]+0x00000090u,c->r[5]); // 803FF190
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 803FF194
  W8(c->r[3]+0x00000004u,c->r[5]); // 803FF198
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF19C
  W32(c->r[3]+0x000000A0u,c->r[5]); // 803FF1A0
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 803FF1A4
  W32(c->r[3]+0x000000A8u,c->r[5]); // 803FF1A8
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 803FF1AC
  W32(c->r[3]+0x000000B0u,c->r[5]); // 803FF1B0
  W32(c->r[3]+0x000000B4u,c->r[5]); // 803FF1B4
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 803FF1B8
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FF1BC
  return; // 803FF1C0
}

// fn_803FF1C4
void f_803FF1C4(Ctx* __restrict c) {
  trace_call(0x803FF1C4u);
  c->r[4]=0u+0x80470000u; // 803FF1C4
  c->r[5]=0u+0x00000000u; // 803FF1C8
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FF1CC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF1D0
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF1D4
  c->r[4]=0u+0x80470000u; // 803FF1D8
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF1DC
  c->r[4]=c->r[4]+0xFFFFA018u; // 803FF1E0
  c->r[0]=0u+0xFFFFFFFFu; // 803FF1E4
  W8(c->r[3]+0x00000036u,c->r[5]); // 803FF1E8
  W32(c->r[3]+0x00000038u,c->r[5]); // 803FF1EC
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 803FF1F0
  W32(c->r[3]+0x00000040u,c->r[5]); // 803FF1F4
  W32(c->r[3]+0x00000044u,c->r[5]); // 803FF1F8
  W32(c->r[3]+0x00000048u,c->r[5]); // 803FF1FC
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 803FF200
  W32(c->r[3]+0x00000050u,c->r[5]); // 803FF204
  W32(c->r[3]+0x00000054u,c->r[5]); // 803FF208
  W32(c->r[3]+0x00000058u,c->r[5]); // 803FF20C
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 803FF210
  W32(c->r[3]+0x00000060u,c->r[5]); // 803FF214
  W32(c->r[3]+0x00000064u,c->r[5]); // 803FF218
  W32(c->r[3]+0x00000068u,c->r[5]); // 803FF21C
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 803FF220
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 803FF224
  W32(c->r[3]+0x00000074u,c->r[5]); // 803FF228
  W32(c->r[3]+0x00000078u,c->r[5]); // 803FF22C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 803FF230
  W32(c->r[3]+0x00000080u,c->r[5]); // 803FF234
  W32(c->r[3]+0x00000084u,c->r[5]); // 803FF238
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FF23C
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 803FF240
  W32(c->r[3]+0x00000090u,c->r[5]); // 803FF244
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 803FF248
  W8(c->r[3]+0x00000004u,c->r[5]); // 803FF24C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF250
  W32(c->r[3]+0x00000098u,c->r[5]); // 803FF254
  W32(c->r[3]+0x000000A8u,c->r[5]); // 803FF258
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FF25C
  W32(c->r[3]+0x000000ACu,c->r[5]); // 803FF260
  W32(c->r[3]+0x000000A0u,c->r[5]); // 803FF264
  W32(c->r[3]+0x000000B0u,c->r[5]); // 803FF268
  W32(c->r[3]+0x000000A4u,c->r[5]); // 803FF26C
  W32(c->r[3]+0x000000B4u,c->r[5]); // 803FF270
  return; // 803FF274
}

// fn_803FF278
void f_803FF278(Ctx* __restrict c) {
  trace_call(0x803FF278u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FF278
  c->r[5]=0u+0x00000000u; // 803FF27C
  c->r[4]=0u+0x80470000u; // 803FF280
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FF284
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF288
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FF28C
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF290
  c->r[0]=0u+0xFFFFFFFFu; // 803FF294
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF298
  c->r[4]=0u+0x80470000u; // 803FF29C
  c->r[4]=c->r[4]+0xFFFF9F78u; // 803FF2A0
  W8(c->r[3]+0x00000036u,c->r[5]); // 803FF2A4
  W32(c->r[3]+0x00000038u,c->r[5]); // 803FF2A8
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 803FF2AC
  W32(c->r[3]+0x00000040u,c->r[5]); // 803FF2B0
  W32(c->r[3]+0x00000044u,c->r[5]); // 803FF2B4
  W32(c->r[3]+0x00000048u,c->r[5]); // 803FF2B8
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 803FF2BC
  W32(c->r[3]+0x00000050u,c->r[5]); // 803FF2C0
  W32(c->r[3]+0x00000054u,c->r[5]); // 803FF2C4
  W32(c->r[3]+0x00000058u,c->r[5]); // 803FF2C8
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 803FF2CC
  W32(c->r[3]+0x00000060u,c->r[5]); // 803FF2D0
  W32(c->r[3]+0x00000064u,c->r[5]); // 803FF2D4
  W32(c->r[3]+0x00000068u,c->r[5]); // 803FF2D8
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 803FF2DC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 803FF2E0
  W32(c->r[3]+0x00000074u,c->r[5]); // 803FF2E4
  W32(c->r[3]+0x00000078u,c->r[5]); // 803FF2E8
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 803FF2EC
  W32(c->r[3]+0x00000080u,c->r[5]); // 803FF2F0
  W32(c->r[3]+0x00000084u,c->r[5]); // 803FF2F4
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FF2F8
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 803FF2FC
  W32(c->r[3]+0x00000090u,c->r[5]); // 803FF300
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 803FF304
  W8(c->r[3]+0x00000004u,c->r[5]); // 803FF308
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF30C
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[2]);} // 803FF310
  W32(c->r[3]+0x000000B8u,c->r[5]); // 803FF314
  W32(c->r[3]+0x000000BCu,c->r[5]); // 803FF318
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 803FF31C
  W32(c->r[3]+0x000000C4u,c->r[5]); // 803FF320
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 803FF324
  W32(c->r[3]+0x000000CCu,c->r[5]); // 803FF328
  W32(c->r[3]+0x000000D0u,c->r[5]); // 803FF32C
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[2]);} // 803FF330
  W32(c->r[3]+0x000000D8u,c->r[5]); // 803FF334
  W32(c->r[3]+0x000000DCu,c->r[5]); // 803FF338
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[1]);} // 803FF33C
  W32(c->r[3]+0x000000E4u,c->r[5]); // 803FF340
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 803FF344
  W32(c->r[3]+0x000000ECu,c->r[5]); // 803FF348
  W32(c->r[3]+0x000000F0u,c->r[5]); // 803FF34C
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[2]);} // 803FF350
  W32(c->r[3]+0x000000F8u,c->r[5]); // 803FF354
  W32(c->r[3]+0x000000FCu,c->r[5]); // 803FF358
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[1]);} // 803FF35C
  W32(c->r[3]+0x00000104u,c->r[5]); // 803FF360
  cmps(c,0,(int32_t)c->r[5],0); // 803FF364
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[0]);} // 803FF368
  W32(c->r[3]+0x0000010Cu,c->r[5]); // 803FF36C
  W32(c->r[3]+0x00000110u,c->r[5]); // 803FF370
  W32(c->r[3]+0x0000011Cu,c->r[5]); // 803FF374
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[1]);} // 803FF378
  W32(c->r[3]+0x00000124u,c->r[5]); // 803FF37C
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 803FF380
  W32(c->r[3]+0x0000012Cu,c->r[5]); // 803FF384
  W32(c->r[3]+0x00000130u,c->r[5]); // 803FF388
  W32(c->r[3]+0x000000B0u,c->r[0]); // 803FF38C
  W32(c->r[3]+0x000000ACu,c->r[5]); // 803FF390
  {uint32_t ea=c->r[3]+0x0000013Cu; WF32(ea,c->f[2]);} // 803FF394
  W32(c->r[3]+0x00000140u,c->r[5]); // 803FF398
  W32(c->r[3]+0x00000144u,c->r[5]); // 803FF39C
  {uint32_t ea=c->r[3]+0x00000148u; WF32(ea,c->f[1]);} // 803FF3A0
  W32(c->r[3]+0x0000014Cu,c->r[5]); // 803FF3A4
  {uint32_t ea=c->r[3]+0x00000150u; WF32(ea,c->f[0]);} // 803FF3A8
  W32(c->r[3]+0x00000154u,c->r[5]); // 803FF3AC
  W32(c->r[3]+0x00000158u,c->r[5]); // 803FF3B0
  {uint32_t ea=c->r[3]+0x0000015Cu; WF32(ea,c->f[2]);} // 803FF3B4
  W32(c->r[3]+0x00000160u,c->r[5]); // 803FF3B8
  W32(c->r[3]+0x00000164u,c->r[5]); // 803FF3BC
  {uint32_t ea=c->r[3]+0x00000168u; WF32(ea,c->f[1]);} // 803FF3C0
  W32(c->r[3]+0x0000016Cu,c->r[5]); // 803FF3C4
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[0]);} // 803FF3C8
  W32(c->r[3]+0x00000174u,c->r[5]); // 803FF3CC
  W32(c->r[3]+0x00000178u,c->r[5]); // 803FF3D0
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[2]);} // 803FF3D4
  W32(c->r[3]+0x00000180u,c->r[5]); // 803FF3D8
  W32(c->r[3]+0x00000184u,c->r[5]); // 803FF3DC
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[1]);} // 803FF3E0
  W32(c->r[3]+0x0000018Cu,c->r[5]); // 803FF3E4
  {uint32_t ea=c->r[3]+0x00000190u; WF32(ea,c->f[0]);} // 803FF3E8
  W32(c->r[3]+0x00000194u,c->r[5]); // 803FF3EC
  W32(c->r[3]+0x00000198u,c->r[5]); // 803FF3F0
  {uint32_t ea=c->r[3]+0x0000019Cu; WF32(ea,c->f[2]);} // 803FF3F4
  W32(c->r[3]+0x000001A0u,c->r[5]); // 803FF3F8
  W32(c->r[3]+0x000001A4u,c->r[5]); // 803FF3FC
  {uint32_t ea=c->r[3]+0x000001A8u; WF32(ea,c->f[1]);} // 803FF400
  W32(c->r[3]+0x000001ACu,c->r[5]); // 803FF404
  {uint32_t ea=c->r[3]+0x000001B0u; WF32(ea,c->f[0]);} // 803FF408
  W32(c->r[3]+0x000001B4u,c->r[5]); // 803FF40C
  W32(c->r[3]+0x000001B8u,c->r[5]); // 803FF410
  W32(c->r[3]+0x00000138u,c->r[0]); // 803FF414
  W32(c->r[3]+0x00000134u,c->r[5]); // 803FF418
  {uint32_t ea=c->r[3]+0x000001C4u; WF32(ea,c->f[2]);} // 803FF41C
  W32(c->r[3]+0x000001C8u,c->r[5]); // 803FF420
  W32(c->r[3]+0x000001CCu,c->r[5]); // 803FF424
  {uint32_t ea=c->r[3]+0x000001D0u; WF32(ea,c->f[1]);} // 803FF428
  W32(c->r[3]+0x000001D4u,c->r[5]); // 803FF42C
  {uint32_t ea=c->r[3]+0x000001D8u; WF32(ea,c->f[0]);} // 803FF430
  W32(c->r[3]+0x000001DCu,c->r[5]); // 803FF434
  W32(c->r[3]+0x000001E0u,c->r[5]); // 803FF438
  {uint32_t ea=c->r[3]+0x000001E4u; WF32(ea,c->f[2]);} // 803FF43C
  W32(c->r[3]+0x000001E8u,c->r[5]); // 803FF440
  W32(c->r[3]+0x000001ECu,c->r[5]); // 803FF444
  {uint32_t ea=c->r[3]+0x000001F0u; WF32(ea,c->f[1]);} // 803FF448
  W32(c->r[3]+0x000001F4u,c->r[5]); // 803FF44C
  {uint32_t ea=c->r[3]+0x000001F8u; WF32(ea,c->f[0]);} // 803FF450
  W32(c->r[3]+0x000001FCu,c->r[5]); // 803FF454
  W32(c->r[3]+0x00000200u,c->r[5]); // 803FF458
  {uint32_t ea=c->r[3]+0x00000204u; WF32(ea,c->f[2]);} // 803FF45C
  W32(c->r[3]+0x00000208u,c->r[5]); // 803FF460
  W32(c->r[3]+0x0000020Cu,c->r[5]); // 803FF464
  {uint32_t ea=c->r[3]+0x00000210u; WF32(ea,c->f[1]);} // 803FF468
  W32(c->r[3]+0x00000214u,c->r[5]); // 803FF46C
  {uint32_t ea=c->r[3]+0x00000218u; WF32(ea,c->f[0]);} // 803FF470
  W32(c->r[3]+0x0000021Cu,c->r[5]); // 803FF474
  W32(c->r[3]+0x00000220u,c->r[5]); // 803FF478
  {uint32_t ea=c->r[3]+0x00000224u; WF32(ea,c->f[2]);} // 803FF47C
  W32(c->r[3]+0x00000228u,c->r[5]); // 803FF480
  W32(c->r[3]+0x0000022Cu,c->r[5]); // 803FF484
  {uint32_t ea=c->r[3]+0x00000230u; WF32(ea,c->f[1]);} // 803FF488
  W32(c->r[3]+0x00000234u,c->r[5]); // 803FF48C
  {uint32_t ea=c->r[3]+0x00000238u; WF32(ea,c->f[0]);} // 803FF490
  W32(c->r[3]+0x0000023Cu,c->r[5]); // 803FF494
  W32(c->r[3]+0x00000240u,c->r[5]); // 803FF498
  W32(c->r[3]+0x000001C0u,c->r[0]); // 803FF49C
  W32(c->r[3]+0x000001BCu,c->r[5]); // 803FF4A0
  W32(c->r[3]+0x00000098u,c->r[5]); // 803FF4A4
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 803FF4A8
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 803FF4AC
  W32(c->r[3]+0x000000B8u,c->r[5]); // 803FF4B0
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 803FF4B4
  W32(c->r[3]+0x000000D8u,c->r[5]); // 803FF4B8
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 803FF4BC
  W32(c->r[3]+0x000000F8u,c->r[5]); // 803FF4C0
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 803FF4C4
  W32(c->r[3]+0x00000118u,c->r[5]); // 803FF4C8
  if (!crb(c,2)) { goto L_803FF4DC; } // 803FF4CC
  if (!crb(c,2)) { goto L_803FF4DC; } // 803FF4D0
  if (!crb(c,2)) { goto L_803FF4DC; } // 803FF4D4
  if (crb(c,2)) { goto L_803FF4E8; } // 803FF4D8
L_803FF4DC:;
  c->r[0]=0u+0x00000000u; // 803FF4DC
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803FF4E0
  goto L_803FF518; // 803FF4E4
L_803FF4E8:;
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803FF4E8
  c->r[5]=c->r[1]+0x00000028u; // 803FF4EC
  c->r[4]=c->r[1]+0x00000030u; // 803FF4F0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803FF4F4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 803FF4F8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 803FF4FC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803FF500
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FF504
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,1,ea,0,6);} // 803FF508
  {uint32_t ea=c->r[3]+0x000000B2u; psq_store(c,0,ea,0,6);} // 803FF50C
  c->r[0]=0u+0x00000001u; // 803FF510
  W32(c->r[3]+0x000000ACu,c->r[0]); // 803FF514
L_803FF518:;
  c->r[0]=0u+0x00000000u; // 803FF518
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF51C
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF520
  cmps(c,0,(int32_t)c->r[0],0); // 803FF524
  {uint32_t ea=c->r[3]+0x0000013Cu; WF32(ea,c->f[0]);} // 803FF528
  W32(c->r[3]+0x00000140u,c->r[0]); // 803FF52C
  {uint32_t ea=c->r[3]+0x0000015Cu; WF32(ea,c->f[0]);} // 803FF530
  W32(c->r[3]+0x00000160u,c->r[0]); // 803FF534
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[0]);} // 803FF538
  W32(c->r[3]+0x00000180u,c->r[0]); // 803FF53C
  {uint32_t ea=c->r[3]+0x0000019Cu; WF32(ea,c->f[1]);} // 803FF540
  W32(c->r[3]+0x000001A0u,c->r[0]); // 803FF544
  if (!crb(c,2)) { goto L_803FF550; } // 803FF548
  if (crb(c,2)) { goto L_803FF55C; } // 803FF54C
L_803FF550:;
  c->r[0]=0u+0x00000000u; // 803FF550
  W32(c->r[3]+0x00000134u,c->r[0]); // 803FF554
  goto L_803FF58C; // 803FF558
L_803FF55C:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803FF55C
  c->r[5]=c->r[1]+0x00000018u; // 803FF560
  c->r[4]=c->r[1]+0x00000020u; // 803FF564
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803FF568
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803FF56C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FF570
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803FF574
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FF578
  {uint32_t ea=c->r[3]+0x00000138u; psq_store(c,2,ea,0,6);} // 803FF57C
  {uint32_t ea=c->r[3]+0x0000013Au; psq_store(c,0,ea,0,6);} // 803FF580
  c->r[0]=0u+0x00000001u; // 803FF584
  W32(c->r[3]+0x00000134u,c->r[0]); // 803FF588
L_803FF58C:;
  c->r[0]=0u+0x00000000u; // 803FF58C
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF590
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF594
  cmps(c,0,(int32_t)c->r[0],0); // 803FF598
  {uint32_t ea=c->r[3]+0x000001C4u; WF32(ea,c->f[1]);} // 803FF59C
  W32(c->r[3]+0x000001C8u,c->r[0]); // 803FF5A0
  {uint32_t ea=c->r[3]+0x000001E4u; WF32(ea,c->f[0]);} // 803FF5A4
  W32(c->r[3]+0x000001E8u,c->r[0]); // 803FF5A8
  {uint32_t ea=c->r[3]+0x00000204u; WF32(ea,c->f[0]);} // 803FF5AC
  W32(c->r[3]+0x00000208u,c->r[0]); // 803FF5B0
  {uint32_t ea=c->r[3]+0x00000224u; WF32(ea,c->f[1]);} // 803FF5B4
  W32(c->r[3]+0x00000228u,c->r[0]); // 803FF5B8
  if (!crb(c,2)) { goto L_803FF5C4; } // 803FF5BC
  if (crb(c,2)) { goto L_803FF5D0; } // 803FF5C0
L_803FF5C4:;
  c->r[0]=0u+0x00000000u; // 803FF5C4
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803FF5C8
  goto L_803FF600; // 803FF5CC
L_803FF5D0:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803FF5D0
  c->r[5]=c->r[1]+0x00000008u; // 803FF5D4
  c->r[4]=c->r[1]+0x00000010u; // 803FF5D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803FF5DC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803FF5E0
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FF5E4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803FF5E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 803FF5EC
  {uint32_t ea=c->r[3]+0x000001C0u; psq_store(c,2,ea,0,6);} // 803FF5F0
  {uint32_t ea=c->r[3]+0x000001C2u; psq_store(c,0,ea,0,6);} // 803FF5F4
  c->r[0]=0u+0x00000001u; // 803FF5F8
  W32(c->r[3]+0x000001BCu,c->r[0]); // 803FF5FC
L_803FF600:;
  {uint32_t ea=c->r[2]+0xFFFFA964u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF600
  c->r[4]=0u+0x00000001u; // 803FF604
  c->r[0]=0u+0x00000000u; // 803FF608
  W32(c->r[3]+0x000000A0u,c->r[4]); // 803FF60C
  W32(c->r[3]+0x000000A4u,c->r[0]); // 803FF610
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 803FF614
  c->r[1]=c->r[1]+0x00000040u; // 803FF618
  return; // 803FF61C
}

// fn_803FF620
void f_803FF620(Ctx* __restrict c) {
  trace_call(0x803FF620u);
  c->r[4]=0u+0x80470000u; // 803FF620
  c->r[8]=c->r[3]+0x000000A8u; // 803FF624
  c->r[5]=c->r[3]+0x00000114u; // 803FF628
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF62C
  c->r[7]=0u+0x00000000u; // 803FF630
  c->r[6]=0u+0xFFFFFFFFu; // 803FF634
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FF638
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF63C
  c->r[4]=0u+0x80470000u; // 803FF640
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF644
  c->r[4]=c->r[4]+0xFFFF9ED8u; // 803FF648
  c->r[0]=0u+0x00000001u; // 803FF64C
  cmpu(c,0,c->r[8],c->r[5]); // 803FF650
  W8(c->r[3]+0x00000036u,c->r[7]); // 803FF654
  W32(c->r[3]+0x00000038u,c->r[7]); // 803FF658
  W32(c->r[3]+0x0000003Cu,c->r[7]); // 803FF65C
  W32(c->r[3]+0x00000040u,c->r[7]); // 803FF660
  W32(c->r[3]+0x00000044u,c->r[7]); // 803FF664
  W32(c->r[3]+0x00000048u,c->r[7]); // 803FF668
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 803FF66C
  W32(c->r[3]+0x00000050u,c->r[7]); // 803FF670
  W32(c->r[3]+0x00000054u,c->r[7]); // 803FF674
  W32(c->r[3]+0x00000058u,c->r[7]); // 803FF678
  W32(c->r[3]+0x0000005Cu,c->r[7]); // 803FF67C
  W32(c->r[3]+0x00000060u,c->r[7]); // 803FF680
  W32(c->r[3]+0x00000064u,c->r[7]); // 803FF684
  W32(c->r[3]+0x00000068u,c->r[7]); // 803FF688
  W32(c->r[3]+0x0000006Cu,c->r[7]); // 803FF68C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 803FF690
  W32(c->r[3]+0x00000074u,c->r[7]); // 803FF694
  W32(c->r[3]+0x00000078u,c->r[7]); // 803FF698
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 803FF69C
  W32(c->r[3]+0x00000080u,c->r[7]); // 803FF6A0
  W32(c->r[3]+0x00000084u,c->r[7]); // 803FF6A4
  W32(c->r[3]+0x00000088u,c->r[6]); // 803FF6A8
  W32(c->r[3]+0x0000008Cu,c->r[7]); // 803FF6AC
  W32(c->r[3]+0x00000090u,c->r[7]); // 803FF6B0
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 803FF6B4
  W8(c->r[3]+0x00000004u,c->r[7]); // 803FF6B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF6BC
  W32(c->r[3]+0x0000009Cu,c->r[7]); // 803FF6C0
  W32(c->r[3]+0x000000A0u,c->r[6]); // 803FF6C4
  W32(c->r[3]+0x000000A4u,c->r[0]); // 803FF6C8
  if (!crb(c,0)) { goto L_803FF840; } // 803FF6CC
  c->r[6]=c->r[3]+0x000000A8u; // 803FF6D0
  c->r[4]=0u+0x2AAB0000u; // 803FF6D4
  c->r[9]=c->r[5]-c->r[6]; // 803FF6D8
  c->r[7]=c->r[3]+0x000000B4u; // 803FF6DC
  c->r[10]=c->r[9]+0x0000000Bu; // 803FF6E0
  c->r[0]=c->r[4]+0xFFFFAAABu; // 803FF6E4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[10])>>32); // 803FF6E8
  c->r[0]=sraw(c,c->r[0],1); // 803FF6EC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803FF6F0
  c->r[11]=c->r[0]+c->r[4]; // 803FF6F4
  c->r[12]=c->r[11]+0x00000001u; // 803FF6F8
  cmps(c,0,(int32_t)c->r[12],8); // 803FF6FC
  if (!crb(c,1)) { goto L_803FF800; } // 803FF700
  cmpu(c,0,c->r[6],c->r[5]); // 803FF704
  c->r[4]=0u+0x00000000u; // 803FF708
  c->r[5]=0u+0x00000000u; // 803FF70C
  if (crb(c,1)) { goto L_803FF738; } // 803FF710
  c->r[0]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[0]); // 803FF714
  c->r[6]=0u+0x00000001u; // 803FF718
  if (!crb(c,2)) { goto L_803FF72C; } // 803FF71C
  c->r[0]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[0]); // 803FF720
  if (crb(c,2)) { goto L_803FF72C; } // 803FF724
  c->r[6]=0u+0x00000000u; // 803FF728
L_803FF72C:;
  cmps(c,0,(int32_t)c->r[6],0); // 803FF72C
  if (crb(c,2)) { goto L_803FF738; } // 803FF730
  c->r[5]=0u+0x00000001u; // 803FF734
L_803FF738:;
  cmps(c,0,(int32_t)c->r[5],0); // 803FF738
  if (crb(c,2)) { goto L_803FF768; } // 803FF73C
  c->r[6]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[6]); // 803FF740
  c->r[5]=0u+0x00000001u; // 803FF744
  if (!crb(c,2)) { goto L_803FF75C; } // 803FF748
  c->r[0]=rotl(c->r[12],0)&0x80000000u; // 803FF74C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803FF750
  if (crb(c,2)) { goto L_803FF75C; } // 803FF754
  c->r[5]=0u+0x00000000u; // 803FF758
L_803FF75C:;
  cmps(c,0,(int32_t)c->r[5],0); // 803FF75C
  if (crb(c,2)) { goto L_803FF768; } // 803FF760
  c->r[4]=0u+0x00000001u; // 803FF764
L_803FF768:;
  cmps(c,0,(int32_t)c->r[4],0); // 803FF768
  if (crb(c,2)) { goto L_803FF800; } // 803FF76C
  c->r[4]=c->r[7]+0x0000005Fu; // 803FF770
  c->r[0]=0u+0x00000060u; // 803FF774
  c->r[4]=c->r[4]-c->r[8]; // 803FF778
  c->r[6]=0u+0x00000000u; // 803FF77C
  c->r[4]=divwu(c->r[4],c->r[0]); // 803FF780
  c->r[5]=0u+0xFFFFFFFFu; // 803FF784
  c->r[0]=0u+0x00000001u; // 803FF788
  c->ctr=c->r[4]; // 803FF78C
  cmpu(c,0,c->r[8],c->r[7]); // 803FF790
  if (!crb(c,0)) { goto L_803FF800; } // 803FF794
L_803FF798:;
  W32(c->r[8]+0x00000000u,c->r[6]); // 803FF798
  W32(c->r[8]+0x00000004u,c->r[5]); // 803FF79C
  W32(c->r[8]+0x00000008u,c->r[0]); // 803FF7A0
  W32(c->r[8]+0x0000000Cu,c->r[6]); // 803FF7A4
  W32(c->r[8]+0x00000010u,c->r[5]); // 803FF7A8
  W32(c->r[8]+0x00000014u,c->r[0]); // 803FF7AC
  W32(c->r[8]+0x00000018u,c->r[6]); // 803FF7B0
  W32(c->r[8]+0x0000001Cu,c->r[5]); // 803FF7B4
  W32(c->r[8]+0x00000020u,c->r[0]); // 803FF7B8
  W32(c->r[8]+0x00000024u,c->r[6]); // 803FF7BC
  W32(c->r[8]+0x00000028u,c->r[5]); // 803FF7C0
  W32(c->r[8]+0x0000002Cu,c->r[0]); // 803FF7C4
  W32(c->r[8]+0x00000030u,c->r[6]); // 803FF7C8
  W32(c->r[8]+0x00000034u,c->r[5]); // 803FF7CC
  W32(c->r[8]+0x00000038u,c->r[0]); // 803FF7D0
  W32(c->r[8]+0x0000003Cu,c->r[6]); // 803FF7D4
  W32(c->r[8]+0x00000040u,c->r[5]); // 803FF7D8
  W32(c->r[8]+0x00000044u,c->r[0]); // 803FF7DC
  W32(c->r[8]+0x00000048u,c->r[6]); // 803FF7E0
  W32(c->r[8]+0x0000004Cu,c->r[5]); // 803FF7E4
  W32(c->r[8]+0x00000050u,c->r[0]); // 803FF7E8
  W32(c->r[8]+0x00000054u,c->r[6]); // 803FF7EC
  W32(c->r[8]+0x00000058u,c->r[5]); // 803FF7F0
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 803FF7F4
  c->r[8]=c->r[8]+0x00000060u; // 803FF7F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FF798; } // 803FF7FC
L_803FF800:;
  c->r[5]=c->r[3]+0x00000114u; // 803FF800
  c->r[0]=0u+0x0000000Cu; // 803FF804
  c->r[4]=c->r[5]+0x0000000Bu; // 803FF808
  c->r[7]=0u+0x00000000u; // 803FF80C
  c->r[4]=c->r[4]-c->r[8]; // 803FF810
  c->r[6]=0u+0xFFFFFFFFu; // 803FF814
  c->r[4]=divwu(c->r[4],c->r[0]); // 803FF818
  c->r[0]=0u+0x00000001u; // 803FF81C
  c->ctr=c->r[4]; // 803FF820
  cmpu(c,0,c->r[8],c->r[5]); // 803FF824
  if (!crb(c,0)) { goto L_803FF840; } // 803FF828
L_803FF82C:;
  W32(c->r[8]+0x00000000u,c->r[7]); // 803FF82C
  W32(c->r[8]+0x00000004u,c->r[6]); // 803FF830
  W32(c->r[8]+0x00000008u,c->r[0]); // 803FF834
  c->r[8]=c->r[8]+0x0000000Cu; // 803FF838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803FF82C; } // 803FF83C
L_803FF840:;
  c->r[0]=0u+0x00000000u; // 803FF840
  W32(c->r[3]+0x00000098u,c->r[0]); // 803FF844
  return; // 803FF848
}

// fn_803FF84C
void f_803FF84C(Ctx* __restrict c) {
  trace_call(0x803FF84Cu);
  c->r[4]=0u+0x80470000u; // 803FF84C
  c->r[8]=0u+0x00000000u; // 803FF850
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FF854
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FF858
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF85C
  c->r[6]=0u+0x80470000u; // 803FF860
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF864
  c->r[6]=c->r[6]+0xFFFF9E38u; // 803FF868
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FF86C
  c->r[7]=0u+0xFFFFFFFFu; // 803FF870
  c->r[5]=0u+0x00000002u; // 803FF874
  c->r[4]=0u+0x0000000Au; // 803FF878
  c->r[0]=0u+0x00000001u; // 803FF87C
  W8(c->r[3]+0x00000036u,c->r[8]); // 803FF880
  W32(c->r[3]+0x00000038u,c->r[8]); // 803FF884
  W32(c->r[3]+0x0000003Cu,c->r[8]); // 803FF888
  W32(c->r[3]+0x00000040u,c->r[8]); // 803FF88C
  W32(c->r[3]+0x00000044u,c->r[8]); // 803FF890
  W32(c->r[3]+0x00000048u,c->r[8]); // 803FF894
  W32(c->r[3]+0x0000004Cu,c->r[8]); // 803FF898
  W32(c->r[3]+0x00000050u,c->r[8]); // 803FF89C
  W32(c->r[3]+0x00000054u,c->r[8]); // 803FF8A0
  W32(c->r[3]+0x00000058u,c->r[8]); // 803FF8A4
  W32(c->r[3]+0x0000005Cu,c->r[8]); // 803FF8A8
  W32(c->r[3]+0x00000060u,c->r[8]); // 803FF8AC
  W32(c->r[3]+0x00000064u,c->r[8]); // 803FF8B0
  W32(c->r[3]+0x00000068u,c->r[8]); // 803FF8B4
  W32(c->r[3]+0x0000006Cu,c->r[8]); // 803FF8B8
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 803FF8BC
  W32(c->r[3]+0x00000074u,c->r[8]); // 803FF8C0
  W32(c->r[3]+0x00000078u,c->r[8]); // 803FF8C4
  W32(c->r[3]+0x0000007Cu,c->r[8]); // 803FF8C8
  W32(c->r[3]+0x00000080u,c->r[8]); // 803FF8CC
  W32(c->r[3]+0x00000084u,c->r[8]); // 803FF8D0
  W32(c->r[3]+0x00000088u,c->r[7]); // 803FF8D4
  W32(c->r[3]+0x0000008Cu,c->r[8]); // 803FF8D8
  W32(c->r[3]+0x00000090u,c->r[8]); // 803FF8DC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 803FF8E0
  W8(c->r[3]+0x00000004u,c->r[8]); // 803FF8E4
  W32(c->r[3]+0x00000000u,c->r[6]); // 803FF8E8
  W32(c->r[3]+0x000000B0u,c->r[8]); // 803FF8EC
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 803FF8F0
  W32(c->r[3]+0x000000B8u,c->r[8]); // 803FF8F4
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 803FF8F8
  W32(c->r[3]+0x000000C0u,c->r[8]); // 803FF8FC
  W32(c->r[3]+0x000000C4u,c->r[8]); // 803FF900
  W32(c->r[3]+0x000000E0u,c->r[8]); // 803FF904
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 803FF908
  W32(c->r[3]+0x000000E8u,c->r[8]); // 803FF90C
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 803FF910
  W32(c->r[3]+0x000000F0u,c->r[8]); // 803FF914
  W32(c->r[3]+0x000000F4u,c->r[8]); // 803FF918
  W32(c->r[3]+0x00000100u,c->r[8]); // 803FF91C
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[1]);} // 803FF920
  W32(c->r[3]+0x00000108u,c->r[8]); // 803FF924
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[0]);} // 803FF928
  W32(c->r[3]+0x00000110u,c->r[8]); // 803FF92C
  W32(c->r[3]+0x00000114u,c->r[8]); // 803FF930
  W32(c->r[3]+0x00000120u,c->r[8]); // 803FF934
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[1]);} // 803FF938
  W32(c->r[3]+0x00000128u,c->r[8]); // 803FF93C
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 803FF940
  W32(c->r[3]+0x00000130u,c->r[8]); // 803FF944
  W32(c->r[3]+0x00000134u,c->r[8]); // 803FF948
  W32(c->r[3]+0x00000098u,c->r[8]); // 803FF94C
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FF950
  W32(c->r[3]+0x000000A0u,c->r[8]); // 803FF954
  W32(c->r[3]+0x000000A4u,c->r[4]); // 803FF958
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 803FF95C
  W32(c->r[3]+0x000000ACu,c->r[8]); // 803FF960
  W32(c->r[3]+0x000000C8u,c->r[0]); // 803FF964
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 803FF968
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 803FF96C
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 803FF970
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[2]);} // 803FF974
  W32(c->r[3]+0x000000DCu,c->r[8]); // 803FF978
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[2]);} // 803FF97C
  W32(c->r[3]+0x000000FCu,c->r[8]); // 803FF980
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[2]);} // 803FF984
  W32(c->r[3]+0x0000011Cu,c->r[8]); // 803FF988
  return; // 803FF98C
}

// fn_803FF990
void f_803FF990(Ctx* __restrict c) {
  trace_call(0x803FF990u);
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[3]=c->ps1[3]=RF32(ea);} // 803FF990
  c->r[9]=0u+0x00000000u; // 803FF994
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FF998
  c->r[7]=0u+0x80470000u; // 803FF99C
  c->r[4]=0u+0x00000001u; // 803FF9A0
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803FF9A4
  c->r[0]=0u+0x00000004u; // 803FF9A8
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[3]);} // 803FF9AC
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FF9B0
  c->r[8]=0u+0xFFFFFFFFu; // 803FF9B4
  c->r[6]=0u+0x0000000Au; // 803FF9B8
  c->r[5]=0u+0xFFFFFFFEu; // 803FF9BC
  c->r[7]=c->r[7]+0xFFFF9420u; // 803FF9C0
  W8(c->r[3]+0x00000036u,c->r[9]); // 803FF9C4
  W32(c->r[3]+0x00000038u,c->r[9]); // 803FF9C8
  W32(c->r[3]+0x0000003Cu,c->r[9]); // 803FF9CC
  W32(c->r[3]+0x00000040u,c->r[9]); // 803FF9D0
  W32(c->r[3]+0x00000044u,c->r[9]); // 803FF9D4
  W32(c->r[3]+0x00000048u,c->r[9]); // 803FF9D8
  W32(c->r[3]+0x0000004Cu,c->r[9]); // 803FF9DC
  W32(c->r[3]+0x00000050u,c->r[9]); // 803FF9E0
  W32(c->r[3]+0x00000054u,c->r[9]); // 803FF9E4
  W32(c->r[3]+0x00000058u,c->r[9]); // 803FF9E8
  W32(c->r[3]+0x0000005Cu,c->r[9]); // 803FF9EC
  W32(c->r[3]+0x00000060u,c->r[9]); // 803FF9F0
  W32(c->r[3]+0x00000064u,c->r[9]); // 803FF9F4
  W32(c->r[3]+0x00000068u,c->r[9]); // 803FF9F8
  W32(c->r[3]+0x0000006Cu,c->r[9]); // 803FF9FC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[3]);} // 803FFA00
  W32(c->r[3]+0x00000074u,c->r[9]); // 803FFA04
  W32(c->r[3]+0x00000078u,c->r[9]); // 803FFA08
  W32(c->r[3]+0x0000007Cu,c->r[9]); // 803FFA0C
  W32(c->r[3]+0x00000080u,c->r[9]); // 803FFA10
  W32(c->r[3]+0x00000084u,c->r[9]); // 803FFA14
  W32(c->r[3]+0x00000088u,c->r[8]); // 803FFA18
  W32(c->r[3]+0x0000008Cu,c->r[9]); // 803FFA1C
  W32(c->r[3]+0x00000090u,c->r[9]); // 803FFA20
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[2]);} // 803FFA24
  W8(c->r[3]+0x00000004u,c->r[9]); // 803FFA28
  W32(c->r[3]+0x00000000u,c->r[7]); // 803FFA2C
  W32(c->r[3]+0x000000ECu,c->r[9]); // 803FFA30
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[2]);} // 803FFA34
  W32(c->r[3]+0x000000F4u,c->r[9]); // 803FFA38
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[1]);} // 803FFA3C
  W32(c->r[3]+0x000000FCu,c->r[9]); // 803FFA40
  W32(c->r[3]+0x00000100u,c->r[9]); // 803FFA44
  W32(c->r[3]+0x0000010Cu,c->r[9]); // 803FFA48
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[2]);} // 803FFA4C
  W32(c->r[3]+0x00000114u,c->r[9]); // 803FFA50
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[1]);} // 803FFA54
  W32(c->r[3]+0x0000011Cu,c->r[9]); // 803FFA58
  W32(c->r[3]+0x00000120u,c->r[9]); // 803FFA5C
  W32(c->r[3]+0x00000098u,c->r[9]); // 803FFA60
  W32(c->r[3]+0x0000009Cu,c->r[9]); // 803FFA64
  W32(c->r[3]+0x000000A0u,c->r[6]); // 803FFA68
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 803FFA6C
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[3]);} // 803FFA70
  W32(c->r[3]+0x000000ACu,c->r[9]); // 803FFA74
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[3]);} // 803FFA78
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[3]);} // 803FFA7C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[3]);} // 803FFA80
  W32(c->r[3]+0x000000BCu,c->r[5]); // 803FFA84
  W32(c->r[3]+0x000000C0u,c->r[9]); // 803FFA88
  W32(c->r[3]+0x000000C4u,c->r[9]); // 803FFA8C
  W32(c->r[3]+0x000000C8u,c->r[9]); // 803FFA90
  W32(c->r[3]+0x000000CCu,c->r[9]); // 803FFA94
  W32(c->r[3]+0x000000D0u,c->r[4]); // 803FFA98
  W32(c->r[3]+0x000000D4u,c->r[9]); // 803FFA9C
  W32(c->r[3]+0x000000D8u,c->r[9]); // 803FFAA0
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 803FFAA4
  {uint32_t ea=c->r[3]+0x00000150u; WF32(ea,c->f[3]);} // 803FFAA8
  {uint32_t ea=c->r[3]+0x0000014Cu; WF32(ea,c->f[3]);} // 803FFAAC
  {uint32_t ea=c->r[3]+0x00000158u; WF32(ea,c->f[1]);} // 803FFAB0
  {uint32_t ea=c->r[3]+0x00000154u; WF32(ea,c->f[1]);} // 803FFAB4
  W32(c->r[3]+0x000000E0u,c->r[9]); // 803FFAB8
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[3]);} // 803FFABC
  W32(c->r[3]+0x000000E8u,c->r[9]); // 803FFAC0
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[3]);} // 803FFAC4
  W32(c->r[3]+0x00000108u,c->r[9]); // 803FFAC8
  W32(c->r[3]+0x00000124u,c->r[9]); // 803FFACC
  W32(c->r[3]+0x00000128u,c->r[4]); // 803FFAD0
  W32(c->r[3]+0x0000012Cu,c->r[9]); // 803FFAD4
  W32(c->r[3]+0x00000130u,c->r[0]); // 803FFAD8
  W32(c->r[3]+0x00000134u,c->r[9]); // 803FFADC
  W32(c->r[3]+0x00000138u,c->r[4]); // 803FFAE0
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 803FFAE4
  W32(c->r[3]+0x00000140u,c->r[9]); // 803FFAE8
  W32(c->r[3]+0x00000144u,c->r[4]); // 803FFAEC
  {uint32_t ea=c->r[3]+0x00000148u; WF32(ea,c->f[1]);} // 803FFAF0
  return; // 803FFAF4
}

// fn_803FFAF8
void f_803FFAF8(Ctx* __restrict c) {
  trace_call(0x803FFAF8u);
  c->r[4]=0u+0x80470000u; // 803FFAF8
  c->r[5]=0u+0x00000000u; // 803FFAFC
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FFB00
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FFB04
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FFB08
  c->r[0]=0u+0xFFFFFFFFu; // 803FFB0C
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FFB10
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FFB14
  c->r[4]=0u+0x80470000u; // 803FFB18
  c->r[4]=c->r[4]+0xFFFF9CF8u; // 803FFB1C
  W8(c->r[3]+0x00000036u,c->r[5]); // 803FFB20
  W32(c->r[3]+0x00000038u,c->r[5]); // 803FFB24
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 803FFB28
  W32(c->r[3]+0x00000040u,c->r[5]); // 803FFB2C
  W32(c->r[3]+0x00000044u,c->r[5]); // 803FFB30
  W32(c->r[3]+0x00000048u,c->r[5]); // 803FFB34
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 803FFB38
  W32(c->r[3]+0x00000050u,c->r[5]); // 803FFB3C
  W32(c->r[3]+0x00000054u,c->r[5]); // 803FFB40
  W32(c->r[3]+0x00000058u,c->r[5]); // 803FFB44
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 803FFB48
  W32(c->r[3]+0x00000060u,c->r[5]); // 803FFB4C
  W32(c->r[3]+0x00000064u,c->r[5]); // 803FFB50
  W32(c->r[3]+0x00000068u,c->r[5]); // 803FFB54
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 803FFB58
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 803FFB5C
  W32(c->r[3]+0x00000074u,c->r[5]); // 803FFB60
  W32(c->r[3]+0x00000078u,c->r[5]); // 803FFB64
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 803FFB68
  W32(c->r[3]+0x00000080u,c->r[5]); // 803FFB6C
  W32(c->r[3]+0x00000084u,c->r[5]); // 803FFB70
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FFB74
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 803FFB78
  W32(c->r[3]+0x00000090u,c->r[5]); // 803FFB7C
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 803FFB80
  W8(c->r[3]+0x00000004u,c->r[5]); // 803FFB84
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FFB88
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 803FFB8C
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FFB90
  W32(c->r[3]+0x000000A0u,c->r[5]); // 803FFB94
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 803FFB98
  W32(c->r[3]+0x000000A8u,c->r[5]); // 803FFB9C
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 803FFBA0
  W32(c->r[3]+0x000000B0u,c->r[5]); // 803FFBA4
  W32(c->r[3]+0x000000B4u,c->r[5]); // 803FFBA8
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[2]);} // 803FFBAC
  W32(c->r[3]+0x000000BCu,c->r[5]); // 803FFBB0
  W32(c->r[3]+0x000000C0u,c->r[5]); // 803FFBB4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[1]);} // 803FFBB8
  W32(c->r[3]+0x000000C8u,c->r[5]); // 803FFBBC
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 803FFBC0
  W32(c->r[3]+0x000000D0u,c->r[5]); // 803FFBC4
  W32(c->r[3]+0x000000D4u,c->r[5]); // 803FFBC8
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[2]);} // 803FFBCC
  W32(c->r[3]+0x000000DCu,c->r[5]); // 803FFBD0
  W32(c->r[3]+0x000000E0u,c->r[5]); // 803FFBD4
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 803FFBD8
  W32(c->r[3]+0x000000E8u,c->r[5]); // 803FFBDC
  c->r[0]=0u+0x00000001u; // 803FFBE0
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 803FFBE4
  W32(c->r[3]+0x000000F0u,c->r[5]); // 803FFBE8
  W32(c->r[3]+0x000000F4u,c->r[5]); // 803FFBEC
  W32(c->r[3]+0x00000100u,c->r[5]); // 803FFBF0
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[1]);} // 803FFBF4
  W32(c->r[3]+0x00000108u,c->r[5]); // 803FFBF8
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[0]);} // 803FFBFC
  W32(c->r[3]+0x00000110u,c->r[5]); // 803FFC00
  W32(c->r[3]+0x00000114u,c->r[5]); // 803FFC04
  W32(c->r[3]+0x00000120u,c->r[5]); // 803FFC08
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[1]);} // 803FFC0C
  W32(c->r[3]+0x00000128u,c->r[5]); // 803FFC10
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 803FFC14
  W32(c->r[3]+0x00000130u,c->r[5]); // 803FFC18
  W32(c->r[3]+0x00000134u,c->r[5]); // 803FFC1C
  W32(c->r[3]+0x00000140u,c->r[5]); // 803FFC20
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[1]);} // 803FFC24
  W32(c->r[3]+0x00000148u,c->r[5]); // 803FFC28
  {uint32_t ea=c->r[3]+0x0000014Cu; WF32(ea,c->f[0]);} // 803FFC2C
  W32(c->r[3]+0x00000150u,c->r[5]); // 803FFC30
  W32(c->r[3]+0x00000154u,c->r[5]); // 803FFC34
  W32(c->r[3]+0x00000160u,c->r[5]); // 803FFC38
  {uint32_t ea=c->r[3]+0x00000164u; WF32(ea,c->f[1]);} // 803FFC3C
  W32(c->r[3]+0x00000168u,c->r[5]); // 803FFC40
  {uint32_t ea=c->r[3]+0x0000016Cu; WF32(ea,c->f[0]);} // 803FFC44
  W32(c->r[3]+0x00000170u,c->r[5]); // 803FFC48
  W32(c->r[3]+0x00000174u,c->r[5]); // 803FFC4C
  W32(c->r[3]+0x00000180u,c->r[5]); // 803FFC50
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[1]);} // 803FFC54
  W32(c->r[3]+0x00000188u,c->r[5]); // 803FFC58
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[0]);} // 803FFC5C
  W32(c->r[3]+0x00000190u,c->r[5]); // 803FFC60
  W32(c->r[3]+0x00000194u,c->r[5]); // 803FFC64
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 803FFC68
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FFC6C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 803FFC70
  W32(c->r[3]+0x000000BCu,c->r[5]); // 803FFC74
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[2]);} // 803FFC78
  W32(c->r[3]+0x000000DCu,c->r[5]); // 803FFC7C
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[2]);} // 803FFC80
  W32(c->r[3]+0x000000FCu,c->r[5]); // 803FFC84
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[2]);} // 803FFC88
  W32(c->r[3]+0x0000011Cu,c->r[5]); // 803FFC8C
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[2]);} // 803FFC90
  W32(c->r[3]+0x0000013Cu,c->r[5]); // 803FFC94
  {uint32_t ea=c->r[3]+0x00000158u; WF32(ea,c->f[2]);} // 803FFC98
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 803FFC9C
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[2]);} // 803FFCA0
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 803FFCA4
  W32(c->r[3]+0x00000198u,c->r[0]); // 803FFCA8
  W32(c->r[3]+0x0000019Cu,c->r[5]); // 803FFCAC
  W32(c->r[3]+0x000001A0u,c->r[5]); // 803FFCB0
  return; // 803FFCB4
}

// fn_803FFCB8
void f_803FFCB8(Ctx* __restrict c) {
  trace_call(0x803FFCB8u);
  c->r[4]=0u+0x80470000u; // 803FFCB8
  c->r[6]=0u+0x00000000u; // 803FFCBC
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 803FFCC0
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FFCC4
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803FFCC8
  c->r[5]=0u+0xFFFFFFFFu; // 803FFCCC
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[2]=c->ps1[2]=RF32(ea);} // 803FFCD0
  c->r[0]=0u+0x00000001u; // 803FFCD4
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FFCD8
  c->r[4]=0u+0x80470000u; // 803FFCDC
  c->r[4]=c->r[4]+0xFFFF99D8u; // 803FFCE0
  W8(c->r[3]+0x00000036u,c->r[6]); // 803FFCE4
  W32(c->r[3]+0x00000038u,c->r[6]); // 803FFCE8
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 803FFCEC
  W32(c->r[3]+0x00000040u,c->r[6]); // 803FFCF0
  W32(c->r[3]+0x00000044u,c->r[6]); // 803FFCF4
  W32(c->r[3]+0x00000048u,c->r[6]); // 803FFCF8
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 803FFCFC
  W32(c->r[3]+0x00000050u,c->r[6]); // 803FFD00
  W32(c->r[3]+0x00000054u,c->r[6]); // 803FFD04
  W32(c->r[3]+0x00000058u,c->r[6]); // 803FFD08
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 803FFD0C
  W32(c->r[3]+0x00000060u,c->r[6]); // 803FFD10
  W32(c->r[3]+0x00000064u,c->r[6]); // 803FFD14
  W32(c->r[3]+0x00000068u,c->r[6]); // 803FFD18
  W32(c->r[3]+0x0000006Cu,c->r[6]); // 803FFD1C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 803FFD20
  W32(c->r[3]+0x00000074u,c->r[6]); // 803FFD24
  W32(c->r[3]+0x00000078u,c->r[6]); // 803FFD28
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 803FFD2C
  W32(c->r[3]+0x00000080u,c->r[6]); // 803FFD30
  W32(c->r[3]+0x00000084u,c->r[6]); // 803FFD34
  W32(c->r[3]+0x00000088u,c->r[5]); // 803FFD38
  W32(c->r[3]+0x0000008Cu,c->r[6]); // 803FFD3C
  W32(c->r[3]+0x00000090u,c->r[6]); // 803FFD40
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 803FFD44
  W8(c->r[3]+0x00000004u,c->r[6]); // 803FFD48
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FFD4C
  W32(c->r[3]+0x000000A0u,c->r[6]); // 803FFD50
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 803FFD54
  W32(c->r[3]+0x000000A8u,c->r[6]); // 803FFD58
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 803FFD5C
  W32(c->r[3]+0x000000B0u,c->r[6]); // 803FFD60
  W32(c->r[3]+0x000000B4u,c->r[6]); // 803FFD64
  W32(c->r[3]+0x000000C0u,c->r[6]); // 803FFD68
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[1]);} // 803FFD6C
  W32(c->r[3]+0x000000C8u,c->r[6]); // 803FFD70
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 803FFD74
  W32(c->r[3]+0x000000D0u,c->r[6]); // 803FFD78
  W32(c->r[3]+0x000000D4u,c->r[6]); // 803FFD7C
  W32(c->r[3]+0x000000E0u,c->r[6]); // 803FFD80
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 803FFD84
  W32(c->r[3]+0x000000E8u,c->r[6]); // 803FFD88
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 803FFD8C
  W32(c->r[3]+0x000000F0u,c->r[6]); // 803FFD90
  W32(c->r[3]+0x000000F4u,c->r[6]); // 803FFD94
  W32(c->r[3]+0x00000100u,c->r[6]); // 803FFD98
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[1]);} // 803FFD9C
  W32(c->r[3]+0x00000108u,c->r[6]); // 803FFDA0
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[0]);} // 803FFDA4
  W32(c->r[3]+0x00000110u,c->r[6]); // 803FFDA8
  W32(c->r[3]+0x00000114u,c->r[6]); // 803FFDAC
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 803FFDB0
  W32(c->r[3]+0x0000009Cu,c->r[6]); // 803FFDB4
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 803FFDB8
  W32(c->r[3]+0x000000BCu,c->r[6]); // 803FFDBC
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[2]);} // 803FFDC0
  W32(c->r[3]+0x000000DCu,c->r[6]); // 803FFDC4
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[2]);} // 803FFDC8
  W32(c->r[3]+0x000000FCu,c->r[6]); // 803FFDCC
  W32(c->r[3]+0x00000118u,c->r[0]); // 803FFDD0
  W32(c->r[3]+0x0000011Cu,c->r[6]); // 803FFDD4
  return; // 803FFDD8
}

// fn_803FFDDC
void f_803FFDDC(Ctx* __restrict c) {
  trace_call(0x803FFDDCu);
  c->r[4]=0u+0x80470000u; // 803FFDDC
  c->r[7]=0u+0x00000000u; // 803FFDE0
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FFDE4
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FFDE8
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FFDEC
  c->r[5]=0u+0x80470000u; // 803FFDF0
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FFDF4
  c->r[5]=c->r[5]+0xFFFF9C58u; // 803FFDF8
  c->r[6]=0u+0xFFFFFFFFu; // 803FFDFC
  c->r[4]=0u+0x00000064u; // 803FFE00
  c->r[0]=0u+0x00000001u; // 803FFE04
  W8(c->r[3]+0x00000036u,c->r[7]); // 803FFE08
  W32(c->r[3]+0x00000038u,c->r[7]); // 803FFE0C
  W32(c->r[3]+0x0000003Cu,c->r[7]); // 803FFE10
  W32(c->r[3]+0x00000040u,c->r[7]); // 803FFE14
  W32(c->r[3]+0x00000044u,c->r[7]); // 803FFE18
  W32(c->r[3]+0x00000048u,c->r[7]); // 803FFE1C
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 803FFE20
  W32(c->r[3]+0x00000050u,c->r[7]); // 803FFE24
  W32(c->r[3]+0x00000054u,c->r[7]); // 803FFE28
  W32(c->r[3]+0x00000058u,c->r[7]); // 803FFE2C
  W32(c->r[3]+0x0000005Cu,c->r[7]); // 803FFE30
  W32(c->r[3]+0x00000060u,c->r[7]); // 803FFE34
  W32(c->r[3]+0x00000064u,c->r[7]); // 803FFE38
  W32(c->r[3]+0x00000068u,c->r[7]); // 803FFE3C
  W32(c->r[3]+0x0000006Cu,c->r[7]); // 803FFE40
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 803FFE44
  W32(c->r[3]+0x00000074u,c->r[7]); // 803FFE48
  W32(c->r[3]+0x00000078u,c->r[7]); // 803FFE4C
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 803FFE50
  W32(c->r[3]+0x00000080u,c->r[7]); // 803FFE54
  W32(c->r[3]+0x00000084u,c->r[7]); // 803FFE58
  W32(c->r[3]+0x00000088u,c->r[6]); // 803FFE5C
  W32(c->r[3]+0x0000008Cu,c->r[7]); // 803FFE60
  W32(c->r[3]+0x00000090u,c->r[7]); // 803FFE64
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 803FFE68
  W8(c->r[3]+0x00000004u,c->r[7]); // 803FFE6C
  W32(c->r[3]+0x00000000u,c->r[5]); // 803FFE70
  W32(c->r[3]+0x00000098u,c->r[7]); // 803FFE74
  W32(c->r[3]+0x000000A0u,c->r[4]); // 803FFE78
  W32(c->r[3]+0x0000009Cu,c->r[7]); // 803FFE7C
  W32(c->r[3]+0x000000A4u,c->r[7]); // 803FFE80
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 803FFE84
  W32(c->r[3]+0x000000A8u,c->r[7]); // 803FFE88
  W32(c->r[3]+0x000000B0u,c->r[0]); // 803FFE8C
  W32(c->r[3]+0x000000B4u,c->r[7]); // 803FFE90
  return; // 803FFE94
}

// fn_803FFE98
void f_803FFE98(Ctx* __restrict c) {
  trace_call(0x803FFE98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803FFE98
  c->r[5]=0u+0x00000000u; // 803FFE9C
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 803FFEA0
  c->r[6]=0u+0x80470000u; // 803FFEA4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803FFEA8
  c->r[6]=c->r[6]+0xFFFFA2A0u; // 803FFEAC
  c->r[7]=c->r[1]+0x00000008u; // 803FFEB0
  c->r[4]=0u+0x80470000u; // 803FFEB4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803FFEB8
  c->r[0]=0u+0xFFFFFFFFu; // 803FFEBC
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803FFEC0
  c->r[4]=c->r[4]+0xFFFF9BB8u; // 803FFEC4
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,3,ea,0,0);} // 803FFEC8
  c->r[7]=c->r[1]+0x00000010u; // 803FFECC
  W32(c->r[3]+0x00000000u,c->r[6]); // 803FFED0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803FFED4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803FFED8
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,2,ea,0,0);} // 803FFEDC
  W8(c->r[3]+0x00000036u,c->r[5]); // 803FFEE0
  W32(c->r[3]+0x00000038u,c->r[5]); // 803FFEE4
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 803FFEE8
  W32(c->r[3]+0x00000040u,c->r[5]); // 803FFEEC
  W32(c->r[3]+0x00000044u,c->r[5]); // 803FFEF0
  W32(c->r[3]+0x00000048u,c->r[5]); // 803FFEF4
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 803FFEF8
  W32(c->r[3]+0x00000050u,c->r[5]); // 803FFEFC
  W32(c->r[3]+0x00000054u,c->r[5]); // 803FFF00
  W32(c->r[3]+0x00000058u,c->r[5]); // 803FFF04
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 803FFF08
  W32(c->r[3]+0x00000060u,c->r[5]); // 803FFF0C
  W32(c->r[3]+0x00000064u,c->r[5]); // 803FFF10
  W32(c->r[3]+0x00000068u,c->r[5]); // 803FFF14
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 803FFF18
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 803FFF1C
  W32(c->r[3]+0x00000074u,c->r[5]); // 803FFF20
  W32(c->r[3]+0x00000078u,c->r[5]); // 803FFF24
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 803FFF28
  W32(c->r[3]+0x00000080u,c->r[5]); // 803FFF2C
  W32(c->r[3]+0x00000084u,c->r[5]); // 803FFF30
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FFF34
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 803FFF38
  W32(c->r[3]+0x00000090u,c->r[5]); // 803FFF3C
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 803FFF40
  W8(c->r[3]+0x00000004u,c->r[5]); // 803FFF44
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FFF48
  W32(c->r[3]+0x00000098u,c->r[5]); // 803FFF4C
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 803FFF50
  W32(c->r[3]+0x000000A0u,c->r[5]); // 803FFF54
  W32(c->r[3]+0x000000A4u,c->r[5]); // 803FFF58
  W32(c->r[3]+0x000000A8u,c->r[5]); // 803FFF5C
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,3,ea,0,0);} // 803FFF60
  {uint32_t ea=c->r[3]+0x000000B8u; psq_store(c,2,ea,0,0);} // 803FFF64
  c->r[1]=c->r[1]+0x00000020u; // 803FFF68
  return; // 803FFF6C
}

// fn_803FFF70
void f_803FFF70(Ctx* __restrict c) {
  trace_call(0x803FFF70u);
  c->r[4]=0u+0x80470000u; // 803FFF70
  c->r[7]=0u+0x00000000u; // 803FFF74
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[6]=c->ps1[6]=RF32(ea);} // 803FFF78
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 803FFF7C
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803FFF80
  c->r[0]=0u+0xFFFFFFFFu; // 803FFF84
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[4]=c->ps1[4]=RF32(ea);} // 803FFF88
  W32(c->r[3]+0x00000000u,c->r[4]); // 803FFF8C
  c->r[4]=0u+0x80470000u; // 803FFF90
  c->r[4]=c->r[4]+0xFFFF9B18u; // 803FFF94
  W8(c->r[3]+0x00000036u,c->r[7]); // 803FFF98
  W32(c->r[3]+0x00000038u,c->r[7]); // 803FFF9C
  W32(c->r[3]+0x0000003Cu,c->r[7]); // 803FFFA0
  W32(c->r[3]+0x00000040u,c->r[7]); // 803FFFA4
  W32(c->r[3]+0x00000044u,c->r[7]); // 803FFFA8
  W32(c->r[3]+0x00000048u,c->r[7]); // 803FFFAC
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 803FFFB0
  W32(c->r[3]+0x00000050u,c->r[7]); // 803FFFB4
  W32(c->r[3]+0x00000054u,c->r[7]); // 803FFFB8
  W32(c->r[3]+0x00000058u,c->r[7]); // 803FFFBC
  W32(c->r[3]+0x0000005Cu,c->r[7]); // 803FFFC0
  W32(c->r[3]+0x00000060u,c->r[7]); // 803FFFC4
  W32(c->r[3]+0x00000064u,c->r[7]); // 803FFFC8
  W32(c->r[3]+0x00000068u,c->r[7]); // 803FFFCC
  W32(c->r[3]+0x0000006Cu,c->r[7]); // 803FFFD0
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[6]);} // 803FFFD4
  W32(c->r[3]+0x00000074u,c->r[7]); // 803FFFD8
  W32(c->r[3]+0x00000078u,c->r[7]); // 803FFFDC
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 803FFFE0
  W32(c->r[3]+0x00000080u,c->r[7]); // 803FFFE4
  W32(c->r[3]+0x00000084u,c->r[7]); // 803FFFE8
  W32(c->r[3]+0x00000088u,c->r[0]); // 803FFFEC
  W32(c->r[3]+0x0000008Cu,c->r[7]); // 803FFFF0
  W32(c->r[3]+0x00000090u,c->r[7]); // 803FFFF4
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[5]);} // 803FFFF8
  W8(c->r[3]+0x00000004u,c->r[7]); // 803FFFFC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80400000
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[6]);} // 80400004
  W32(c->r[3]+0x000000B4u,c->r[7]); // 80400008
  W32(c->r[3]+0x000000B8u,c->r[7]); // 8040000C
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[5]);} // 80400010
  W32(c->r[3]+0x000000C0u,c->r[7]); // 80400014
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[4]);} // 80400018
  W32(c->r[3]+0x000000C8u,c->r[7]); // 8040001C
  W32(c->r[3]+0x000000CCu,c->r[7]); // 80400020
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[6]);} // 80400024
  W32(c->r[3]+0x000000D4u,c->r[7]); // 80400028
  W32(c->r[3]+0x000000D8u,c->r[7]); // 8040002C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[5]);} // 80400030
  W32(c->r[3]+0x000000E0u,c->r[7]); // 80400034
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[4]);} // 80400038
  W32(c->r[3]+0x000000E8u,c->r[7]); // 8040003C
  W32(c->r[3]+0x000000ECu,c->r[7]); // 80400040
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[6]);} // 80400044
  W32(c->r[3]+0x000000F4u,c->r[7]); // 80400048
  W32(c->r[3]+0x000000F8u,c->r[7]); // 8040004C
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[5]);} // 80400050
  W32(c->r[3]+0x00000100u,c->r[7]); // 80400054
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[4]);} // 80400058
  W32(c->r[3]+0x00000108u,c->r[7]); // 8040005C
  W32(c->r[3]+0x0000010Cu,c->r[7]); // 80400060
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[6]);} // 80400064
  W32(c->r[3]+0x00000114u,c->r[7]); // 80400068
  W32(c->r[3]+0x00000118u,c->r[7]); // 8040006C
  {uint32_t ea=c->r[3]+0x0000011Cu; WF32(ea,c->f[5]);} // 80400070
  W32(c->r[3]+0x00000120u,c->r[7]); // 80400074
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[4]);} // 80400078
  W32(c->r[3]+0x00000128u,c->r[7]); // 8040007C
  W32(c->r[3]+0x0000012Cu,c->r[7]); // 80400080
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[6]);} // 80400084
  W32(c->r[3]+0x0000013Cu,c->r[7]); // 80400088
  W32(c->r[3]+0x00000140u,c->r[7]); // 8040008C
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[5]);} // 80400090
  W32(c->r[3]+0x00000148u,c->r[7]); // 80400094
  {uint32_t ea=c->r[3]+0x0000014Cu; WF32(ea,c->f[4]);} // 80400098
  W32(c->r[3]+0x00000150u,c->r[7]); // 8040009C
  W32(c->r[3]+0x00000154u,c->r[7]); // 804000A0
  {uint32_t ea=c->r[3]+0x00000158u; WF32(ea,c->f[6]);} // 804000A4
  W32(c->r[3]+0x0000015Cu,c->r[7]); // 804000A8
  W32(c->r[3]+0x00000160u,c->r[7]); // 804000AC
  {uint32_t ea=c->r[3]+0x00000164u; WF32(ea,c->f[5]);} // 804000B0
  W32(c->r[3]+0x00000168u,c->r[7]); // 804000B4
  {uint32_t ea=c->r[3]+0x0000016Cu; WF32(ea,c->f[4]);} // 804000B8
  W32(c->r[3]+0x00000170u,c->r[7]); // 804000BC
  W32(c->r[3]+0x00000174u,c->r[7]); // 804000C0
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[6]);} // 804000C4
  W32(c->r[3]+0x0000017Cu,c->r[7]); // 804000C8
  W32(c->r[3]+0x00000180u,c->r[7]); // 804000CC
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[5]);} // 804000D0
  W32(c->r[3]+0x00000188u,c->r[7]); // 804000D4
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[4]);} // 804000D8
  W32(c->r[3]+0x00000190u,c->r[7]); // 804000DC
  W32(c->r[3]+0x00000194u,c->r[7]); // 804000E0
  {uint32_t ea=c->r[3]+0x000001A8u; WF32(ea,c->f[6]);} // 804000E4
  W32(c->r[3]+0x000001ACu,c->r[7]); // 804000E8
  W32(c->r[3]+0x000001B0u,c->r[7]); // 804000EC
  {uint32_t ea=c->r[3]+0x000001B4u; WF32(ea,c->f[5]);} // 804000F0
  W32(c->r[3]+0x000001B8u,c->r[7]); // 804000F4
  {uint32_t ea=c->r[3]+0x000001BCu; WF32(ea,c->f[4]);} // 804000F8
  W32(c->r[3]+0x000001C0u,c->r[7]); // 804000FC
  W32(c->r[3]+0x000001C4u,c->r[7]); // 80400100
  {uint32_t ea=c->r[3]+0x000001C8u; WF32(ea,c->f[6]);} // 80400104
  W32(c->r[3]+0x000001CCu,c->r[7]); // 80400108
  W32(c->r[3]+0x000001D0u,c->r[7]); // 8040010C
  {uint32_t ea=c->r[3]+0x000001D4u; WF32(ea,c->f[5]);} // 80400110
  W32(c->r[3]+0x000001D8u,c->r[7]); // 80400114
  {uint32_t ea=c->r[3]+0x000001DCu; WF32(ea,c->f[4]);} // 80400118
  W32(c->r[3]+0x000001E0u,c->r[7]); // 8040011C
  W32(c->r[3]+0x000001E4u,c->r[7]); // 80400120
  {uint32_t ea=c->r[3]+0x00000228u; WF32(ea,c->f[6]);} // 80400124
  c->r[4]=0u+0x0000000Au; // 80400128
  {uint32_t ea=c->r[2]+0xFFFFA964u; c->f[3]=c->ps1[3]=RF32(ea);} // 8040012C
  c->r[6]=0u+0x00000064u; // 80400130
  {uint32_t ea=c->r[3]+0x000001E8u; WF32(ea,c->f[6]);} // 80400134
  c->r[5]=0u+0x00000002u; // 80400138
  {uint32_t ea=c->r[2]+0xFFFFA97Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8040013C
  c->r[0]=0u+0x00000688u; // 80400140
  W32(c->r[3]+0x000001ECu,c->r[7]); // 80400144
  {uint32_t ea=c->r[2]+0xFFFFA980u; c->f[1]=c->ps1[1]=RF32(ea);} // 80400148
  W32(c->r[3]+0x0000020Cu,c->r[7]); // 8040014C
  {uint32_t ea=c->r[2]+0xFFFFA984u; c->f[0]=c->ps1[0]=RF32(ea);} // 80400150
  W32(c->r[3]+0x000001F0u,c->r[7]); // 80400154
  {uint32_t ea=c->r[3]+0x000001F4u; WF32(ea,c->f[5]);} // 80400158
  W32(c->r[3]+0x000001F8u,c->r[7]); // 8040015C
  {uint32_t ea=c->r[3]+0x000001FCu; WF32(ea,c->f[4]);} // 80400160
  W32(c->r[3]+0x00000200u,c->r[7]); // 80400164
  W32(c->r[3]+0x00000204u,c->r[7]); // 80400168
  W32(c->r[3]+0x00000210u,c->r[7]); // 8040016C
  {uint32_t ea=c->r[3]+0x00000214u; WF32(ea,c->f[5]);} // 80400170
  W32(c->r[3]+0x00000218u,c->r[7]); // 80400174
  {uint32_t ea=c->r[3]+0x0000021Cu; WF32(ea,c->f[4]);} // 80400178
  W32(c->r[3]+0x00000220u,c->r[7]); // 8040017C
  W32(c->r[3]+0x00000224u,c->r[7]); // 80400180
  W32(c->r[3]+0x00000230u,c->r[7]); // 80400184
  {uint32_t ea=c->r[3]+0x00000234u; WF32(ea,c->f[5]);} // 80400188
  W32(c->r[3]+0x00000238u,c->r[7]); // 8040018C
  {uint32_t ea=c->r[3]+0x0000023Cu; WF32(ea,c->f[4]);} // 80400190
  W32(c->r[3]+0x00000240u,c->r[7]); // 80400194
  W32(c->r[3]+0x00000244u,c->r[7]); // 80400198
  W32(c->r[3]+0x00000098u,c->r[7]); // 8040019C
  W32(c->r[3]+0x0000009Cu,c->r[6]); // 804001A0
  W32(c->r[3]+0x000000A0u,c->r[7]); // 804001A4
  W32(c->r[3]+0x000000A4u,c->r[7]); // 804001A8
  W32(c->r[3]+0x000000A8u,c->r[7]); // 804001AC
  W32(c->r[3]+0x000000ACu,c->r[7]); // 804001B0
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[4]);} // 804001B4
  W32(c->r[3]+0x000000B4u,c->r[7]); // 804001B8
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[4]);} // 804001BC
  W32(c->r[3]+0x000000D4u,c->r[7]); // 804001C0
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[6]);} // 804001C4
  W32(c->r[3]+0x000000F4u,c->r[7]); // 804001C8
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[6]);} // 804001CC
  W32(c->r[3]+0x00000114u,c->r[7]); // 804001D0
  W32(c->r[3]+0x00000130u,c->r[5]); // 804001D4
  W32(c->r[3]+0x00000134u,c->r[4]); // 804001D8
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[3]);} // 804001DC
  W32(c->r[3]+0x0000013Cu,c->r[7]); // 804001E0
  {uint32_t ea=c->r[3]+0x00000158u; WF32(ea,c->f[4]);} // 804001E4
  W32(c->r[3]+0x0000015Cu,c->r[7]); // 804001E8
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[2]);} // 804001EC
  W32(c->r[3]+0x0000017Cu,c->r[7]); // 804001F0
  W32(c->r[3]+0x00000198u,c->r[7]); // 804001F4
  W32(c->r[3]+0x0000019Cu,c->r[4]); // 804001F8
  W32(c->r[3]+0x000001A0u,c->r[4]); // 804001FC
  {uint32_t ea=c->r[3]+0x000001A8u; WF32(ea,c->f[6]);} // 80400200
  W32(c->r[3]+0x000001ACu,c->r[7]); // 80400204
  {uint32_t ea=c->r[3]+0x000001C8u; WF32(ea,c->f[1]);} // 80400208
  W32(c->r[3]+0x000001CCu,c->r[7]); // 8040020C
  {uint32_t ea=c->r[3]+0x000001E8u; WF32(ea,c->f[6]);} // 80400210
  W32(c->r[3]+0x000001ECu,c->r[7]); // 80400214
  {uint32_t ea=c->r[3]+0x00000208u; WF32(ea,c->f[0]);} // 80400218
  W32(c->r[3]+0x0000020Cu,c->r[7]); // 8040021C
  {uint32_t ea=c->r[3]+0x00000228u; WF32(ea,c->f[4]);} // 80400220
  W32(c->r[3]+0x0000022Cu,c->r[7]); // 80400224
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80400228
  return; // 8040022C
}

// fn_80400230
void f_80400230(Ctx* __restrict c) {
  trace_call(0x80400230u);
  c->r[4]=0u+0x80470000u; // 80400230
  c->r[5]=0u+0x00000000u; // 80400234
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 80400238
  W32(c->r[3]+0x00000000u,c->r[4]); // 8040023C
  c->r[0]=0u+0xFFFFFFFFu; // 80400240
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 80400244
  c->r[4]=0u+0x80470000u; // 80400248
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8040024C
  c->r[4]=c->r[4]+0xFFFF9A78u; // 80400250
  W8(c->r[3]+0x00000036u,c->r[5]); // 80400254
  W32(c->r[3]+0x00000038u,c->r[5]); // 80400258
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 8040025C
  W32(c->r[3]+0x00000040u,c->r[5]); // 80400260
  W32(c->r[3]+0x00000044u,c->r[5]); // 80400264
  W32(c->r[3]+0x00000048u,c->r[5]); // 80400268
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 8040026C
  W32(c->r[3]+0x00000050u,c->r[5]); // 80400270
  W32(c->r[3]+0x00000054u,c->r[5]); // 80400274
  W32(c->r[3]+0x00000058u,c->r[5]); // 80400278
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 8040027C
  W32(c->r[3]+0x00000060u,c->r[5]); // 80400280
  W32(c->r[3]+0x00000064u,c->r[5]); // 80400284
  W32(c->r[3]+0x00000068u,c->r[5]); // 80400288
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 8040028C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 80400290
  W32(c->r[3]+0x00000074u,c->r[5]); // 80400294
  W32(c->r[3]+0x00000078u,c->r[5]); // 80400298
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 8040029C
  W32(c->r[3]+0x00000080u,c->r[5]); // 804002A0
  W32(c->r[3]+0x00000084u,c->r[5]); // 804002A4
  W32(c->r[3]+0x00000088u,c->r[0]); // 804002A8
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 804002AC
  W32(c->r[3]+0x00000090u,c->r[5]); // 804002B0
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 804002B4
  W8(c->r[3]+0x00000004u,c->r[5]); // 804002B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 804002BC
  W8(c->r[3]+0x00000098u,c->r[5]); // 804002C0
  W32(c->r[3]+0x00000198u,c->r[5]); // 804002C4
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 804002C8
  return; // 804002CC
}

// fn_804002D0
void f_804002D0(Ctx* __restrict c) {
  trace_call(0x804002D0u);
  c->r[4]=0u+0x80470000u; // 804002D0
  c->r[7]=0u+0x00000000u; // 804002D4
  c->r[4]=c->r[4]+0xFFFFA2A0u; // 804002D8
  W32(c->r[3]+0x00000000u,c->r[4]); // 804002DC
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 804002E0
  c->r[5]=0u+0x80470000u; // 804002E4
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804002E8
  c->r[5]=c->r[5]+0xFFFF9D98u; // 804002EC
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[2]=c->ps1[2]=RF32(ea);} // 804002F0
  c->r[6]=0u+0xFFFFFFFFu; // 804002F4
  c->r[4]=0u+0xFFFFFFFEu; // 804002F8
  c->r[0]=0u+0x00000006u; // 804002FC
  W8(c->r[3]+0x00000036u,c->r[7]); // 80400300
  W32(c->r[3]+0x00000038u,c->r[7]); // 80400304
  W32(c->r[3]+0x0000003Cu,c->r[7]); // 80400308
  W32(c->r[3]+0x00000040u,c->r[7]); // 8040030C
  W32(c->r[3]+0x00000044u,c->r[7]); // 80400310
  W32(c->r[3]+0x00000048u,c->r[7]); // 80400314
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 80400318
  W32(c->r[3]+0x00000050u,c->r[7]); // 8040031C
  W32(c->r[3]+0x00000054u,c->r[7]); // 80400320
  W32(c->r[3]+0x00000058u,c->r[7]); // 80400324
  W32(c->r[3]+0x0000005Cu,c->r[7]); // 80400328
  W32(c->r[3]+0x00000060u,c->r[7]); // 8040032C
  W32(c->r[3]+0x00000064u,c->r[7]); // 80400330
  W32(c->r[3]+0x00000068u,c->r[7]); // 80400334
  W32(c->r[3]+0x0000006Cu,c->r[7]); // 80400338
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 8040033C
  W32(c->r[3]+0x00000074u,c->r[7]); // 80400340
  W32(c->r[3]+0x00000078u,c->r[7]); // 80400344
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 80400348
  W32(c->r[3]+0x00000080u,c->r[7]); // 8040034C
  W32(c->r[3]+0x00000084u,c->r[7]); // 80400350
  W32(c->r[3]+0x00000088u,c->r[6]); // 80400354
  W32(c->r[3]+0x0000008Cu,c->r[7]); // 80400358
  W32(c->r[3]+0x00000090u,c->r[7]); // 8040035C
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 80400360
  W8(c->r[3]+0x00000004u,c->r[7]); // 80400364
  W32(c->r[3]+0x00000000u,c->r[5]); // 80400368
  W32(c->r[3]+0x000000A0u,c->r[7]); // 8040036C
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 80400370
  W32(c->r[3]+0x000000A8u,c->r[7]); // 80400374
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 80400378
  W32(c->r[3]+0x000000B0u,c->r[7]); // 8040037C
  W32(c->r[3]+0x000000B4u,c->r[7]); // 80400380
  W32(c->r[3]+0x000000C0u,c->r[7]); // 80400384
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[1]);} // 80400388
  W32(c->r[3]+0x000000C8u,c->r[7]); // 8040038C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 80400390
  W32(c->r[3]+0x000000D0u,c->r[7]); // 80400394
  W32(c->r[3]+0x000000D4u,c->r[7]); // 80400398
  W32(c->r[3]+0x000000ECu,c->r[7]); // 8040039C
  W32(c->r[3]+0x000000D8u,c->r[7]); // 804003A0
  W32(c->r[3]+0x000000E4u,c->r[4]); // 804003A4
  W32(c->r[3]+0x000000E0u,c->r[7]); // 804003A8
  W32(c->r[3]+0x000000DCu,c->r[0]); // 804003AC
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 804003B0
  W32(c->r[3]+0x0000009Cu,c->r[7]); // 804003B4
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 804003B8
  W32(c->r[3]+0x000000BCu,c->r[7]); // 804003BC
  return; // 804003C0
}

// fn_804003C4
void f_804003C4(Ctx* __restrict c) {
  trace_call(0x804003C4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 804003C4
  return; // 804003C8
}

// fn_804003CC
void f_804003CC(Ctx* __restrict c) {
  trace_call(0x804003CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 804003CC
  c->r[0]=c->lr; // 804003D0
  W32(c->r[1]+0x00000084u,c->r[0]); // 804003D4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 804003D8
  if (!crb(c,6)) { goto L_80400400; } // 804003DC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 804003E0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 804003E4
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 804003E8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 804003EC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 804003F0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 804003F4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 804003F8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 804003FC
L_80400400:;
  c->r[11]=c->r[1]+0x00000088u; // 80400400
  c->r[0]=c->r[1]+0x00000008u; // 80400404
  c->r[12]=0u+0x03000000u; // 80400408
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8040040C
  c->r[31]=c->r[1]+0x00000068u; // 80400410
  c->r[4]=c->r[5]|c->r[5]; // 80400414
  W32(c->r[1]+0x00000010u,c->r[5]); // 80400418
  c->r[5]=c->r[31]|c->r[31]; // 8040041C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80400420
  W32(c->r[1]+0x00000014u,c->r[6]); // 80400424
  W32(c->r[1]+0x00000018u,c->r[7]); // 80400428
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8040042C
  W32(c->r[1]+0x00000020u,c->r[9]); // 80400430
  W32(c->r[1]+0x00000024u,c->r[10]); // 80400434
  W32(c->r[1]+0x00000068u,c->r[12]); // 80400438
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 8040043C
  W32(c->r[1]+0x00000070u,c->r[0]); // 80400440
  c->lr=0x80400448u; f_803A56AC(c); // 80400444
  c->r[0]=R32(c->r[1]+0x00000084u); // 80400448
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8040044C
  c->lr=c->r[0]; // 80400450
  c->r[1]=c->r[1]+0x00000080u; // 80400454
  return; // 80400458
}

// fn_8040045C
void f_8040045C(Ctx* __restrict c) {
  trace_call(0x8040045Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8040045C
  c->r[0]=c->lr; // 80400460
  W32(c->r[1]+0x00000024u,c->r[0]); // 80400464
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80400468
  W32(c->r[1]+0x00000018u,c->r[30]); // 8040046C
  c->r[30]=c->r[4]|c->r[4]; // 80400470
  W32(c->r[1]+0x00000014u,c->r[29]); // 80400474
  c->r[29]=c->r[3]|c->r[3]; // 80400478
  c->r[5]=R32(c->r[3]+0x00000000u); // 8040047C
  cmps(c,0,(int32_t)c->r[5],0); // 80400480
  if (!crb(c,2)) { goto L_80400498; } // 80400484
  W32(c->r[3]+0x00000000u,c->r[4]); // 80400488
  c->r[0]=0u+0x00000000u; // 8040048C
  W32(c->r[4]+0x00000038u,c->r[0]); // 80400490
  goto L_80400510; // 80400494
L_80400498:;
  c->r[3]=c->r[4]+0x00000004u; // 80400498
  c->r[4]=c->r[5]+0x00000004u; // 8040049C
  c->lr=0x804004A4u; f_803AD4D0(c); // 804004A0
  cmps(c,0,(int32_t)c->r[3],0); // 804004A4
  if (!crb(c,0)) { goto L_804004BC; } // 804004A8
  c->r[0]=R32(c->r[29]+0x00000000u); // 804004AC
  W32(c->r[30]+0x00000038u,c->r[0]); // 804004B0
  W32(c->r[29]+0x00000000u,c->r[30]); // 804004B4
  goto L_80400510; // 804004B8
L_804004BC:;
  c->r[31]=R32(c->r[29]+0x00000000u); // 804004BC
  goto L_804004EC; // 804004C0
L_804004C4:;
  c->r[3]=c->r[30]+0x00000004u; // 804004C4
  c->r[4]=c->r[4]+0x00000004u; // 804004C8
  c->lr=0x804004D0u; f_803AD4D0(c); // 804004CC
  cmps(c,0,(int32_t)c->r[3],0); // 804004D0
  if (!crb(c,0)) { goto L_804004E8; } // 804004D4
  c->r[0]=R32(c->r[31]+0x00000038u); // 804004D8
  W32(c->r[30]+0x00000038u,c->r[0]); // 804004DC
  W32(c->r[31]+0x00000038u,c->r[30]); // 804004E0
  goto L_804004F8; // 804004E4
L_804004E8:;
  c->r[31]=R32(c->r[31]+0x00000038u); // 804004E8
L_804004EC:;
  c->r[4]=R32(c->r[31]+0x00000038u); // 804004EC
  cmps(c,0,(int32_t)c->r[4],0); // 804004F0
  if (!crb(c,2)) { IRQCHK(c); goto L_804004C4; } // 804004F4
L_804004F8:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 804004F8
  cmps(c,0,(int32_t)c->r[0],0); // 804004FC
  if (!crb(c,2)) { goto L_80400510; } // 80400500
  W32(c->r[31]+0x00000038u,c->r[30]); // 80400504
  c->r[0]=0u+0x00000000u; // 80400508
  W32(c->r[30]+0x00000038u,c->r[0]); // 8040050C
L_80400510:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80400510
  c->r[0]=c->r[3]+0x00000001u; // 80400514
  W32(c->r[29]+0x00000004u,c->r[0]); // 80400518
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8040051C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80400520
  c->r[29]=R32(c->r[1]+0x00000014u); // 80400524
  c->r[0]=R32(c->r[1]+0x00000024u); // 80400528
  c->lr=c->r[0]; // 8040052C
  c->r[1]=c->r[1]+0x00000020u; // 80400530
  return; // 80400534
}

// fn_80400538
void f_80400538(Ctx* __restrict c) {
  trace_call(0x80400538u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400538
  c->r[0]=c->lr; // 8040053C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80400540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80400544
  W32(c->r[1]+0x00000008u,c->r[30]); // 80400548
  c->r[30]=c->r[4]|c->r[4]; // 8040054C
  c->r[31]=R32(c->r[3]+0x00000000u); // 80400550
  goto L_80400570; // 80400554
L_80400558:;
  c->r[3]=c->r[30]|c->r[30]; // 80400558
  c->r[4]=c->r[31]+0x00000004u; // 8040055C
  c->lr=0x80400564u; f_803AD4D0(c); // 80400560
  cmps(c,0,(int32_t)c->r[3],0); // 80400564
  if (crb(c,2)) { goto L_80400578; } // 80400568
  c->r[31]=R32(c->r[31]+0x00000038u); // 8040056C
L_80400570:;
  cmps(c,0,(int32_t)c->r[31],0); // 80400570
  if (!crb(c,2)) { IRQCHK(c); goto L_80400558; } // 80400574
L_80400578:;
  c->r[3]=c->r[31]|c->r[31]; // 80400578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8040057C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80400580
  c->r[0]=R32(c->r[1]+0x00000014u); // 80400584
  c->lr=c->r[0]; // 80400588
  c->r[1]=c->r[1]+0x00000010u; // 8040058C
  return; // 80400590
}

// fn_80400594
void f_80400594(Ctx* __restrict c) {
  trace_call(0x80400594u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400594
  c->r[0]=c->lr; // 80400598
  W32(c->r[1]+0x00000024u,c->r[0]); // 8040059C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804005A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804005A4
  c->r[30]=0u+0x00000000u; // 804005A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 804005AC
  c->r[29]=c->r[5]|c->r[5]; // 804005B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 804005B4
  c->r[28]=c->r[4]|c->r[4]; // 804005B8
  c->r[31]=R32(c->r[3]+0x00000008u); // 804005BC
  goto L_804005E0; // 804005C0
L_804005C4:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 804005C4
  c->r[3]=c->r[28]|c->r[28]; // 804005C8
  c->lr=0x804005D0u; f_803A7040(c); // 804005CC
  cmps(c,0,(int32_t)c->r[3],0); // 804005D0
  if (!crb(c,2)) { goto L_804005DC; } // 804005D4
  goto L_804005EC; // 804005D8
L_804005DC:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 804005DC
L_804005E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 804005E0
  if (!crb(c,2)) { IRQCHK(c); goto L_804005C4; } // 804005E4
  c->r[31]=0u+0x00000000u; // 804005E8
L_804005EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804005EC
  if (crb(c,2)) { goto L_8040061C; } // 804005F0
  c->r[30]=R32(c->r[31]+0x00000004u); // 804005F4
  goto L_80400614; // 804005F8
L_804005FC:;
  c->r[3]=c->r[29]|c->r[29]; // 804005FC
  c->r[4]=c->r[30]+0x00000004u; // 80400600
  c->lr=0x80400608u; f_803AD4D0(c); // 80400604
  cmps(c,0,(int32_t)c->r[3],0); // 80400608
  if (crb(c,2)) { goto L_8040061C; } // 8040060C
  c->r[30]=R32(c->r[30]+0x00000048u); // 80400610
L_80400614:;
  cmps(c,0,(int32_t)c->r[30],0); // 80400614
  if (!crb(c,2)) { IRQCHK(c); goto L_804005FC; } // 80400618
L_8040061C:;
  c->r[3]=c->r[30]|c->r[30]; // 8040061C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80400620
  c->r[30]=R32(c->r[1]+0x00000018u); // 80400624
  c->r[29]=R32(c->r[1]+0x00000014u); // 80400628
  c->r[28]=R32(c->r[1]+0x00000010u); // 8040062C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80400630
  c->lr=c->r[0]; // 80400634
  c->r[1]=c->r[1]+0x00000020u; // 80400638
  return; // 8040063C
}

// fn_80400640
void f_80400640(Ctx* __restrict c) {
  trace_call(0x80400640u);
  {uint32_t ea=c->r[1]+0xFFFFF850u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400640
  c->r[0]=c->lr; // 80400644
  cmps(c,0,(int32_t)c->r[5],0); // 80400648
  W32(c->r[1]+0x000007B4u,c->r[0]); // 8040064C
  W32(c->r[1]+0x000007ACu,c->r[31]); // 80400650
  W32(c->r[1]+0x000007A8u,c->r[30]); // 80400654
  c->r[30]=c->r[4]|c->r[4]; // 80400658
  W32(c->r[1]+0x000007A4u,c->r[29]); // 8040065C
  c->r[29]=c->r[6]|c->r[6]; // 80400660
  W32(c->r[1]+0x000007A0u,c->r[28]); // 80400664
  c->r[28]=c->r[3]|c->r[3]; // 80400668
  if (!crb(c,2)) { goto L_80400674; } // 8040066C
  c->lr=0x80400674u; f_803FE97C(c); // 80400670
L_80400674:;
  c->r[3]=0u+0x00010000u; // 80400674
  c->r[3]=c->r[3]+0x0000388Cu; // 80400678
  c->lr=0x80400680u; f_803FE6C4(c); // 8040067C
  cmps(c,0,(int32_t)c->r[3],0); // 80400680
  c->r[31]=c->r[3]|c->r[3]; // 80400684
  if (crb(c,2)) { goto L_804006B0; } // 80400688
  W32(c->r[3]+0x00000000u,c->r[30]); // 8040068C
  c->r[3]=c->r[30]|c->r[30]; // 80400690
  c->r[12]=R32(c->r[30]+0x00000000u); // 80400694
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80400698
  c->ctr=c->r[12]; // 8040069C
  if (true) { c->lr=0x804006A4u; dispatch(c,c->ctr); } // 804006A0
  W32(c->r[31]+0x00000004u,c->r[3]); // 804006A4
  c->r[0]=0u+0x00000000u; // 804006A8
  W32(c->r[31]+0x00000008u,c->r[0]); // 804006AC
L_804006B0:;
  c->r[3]=c->r[31]|c->r[31]; // 804006B0
  c->lr=0x804006B8u; f_80403250(c); // 804006B4
  cmps(c,0,(int32_t)c->r[29],0); // 804006B8
  if (!crb(c,2)) { goto L_804006E4; } // 804006BC
  c->r[3]=R32(c->r[31]+0x00000000u); // 804006C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804006C4
  c->r[12]=R32(c->r[12]+0x00000020u); // 804006C8
  c->ctr=c->r[12]; // 804006CC
  if (true) { c->lr=0x804006D4u; dispatch(c,c->ctr); } // 804006D0
  c->r[4]=c->r[3]|c->r[3]; // 804006D4
  c->r[3]=c->r[1]+0x00000280u; // 804006D8
  c->lr=0x804006E0u; f_803A6F10(c); // 804006DC
  goto L_804006F0; // 804006E0
L_804006E4:;
  c->r[4]=c->r[29]|c->r[29]; // 804006E4
  c->r[3]=c->r[1]+0x00000280u; // 804006E8
  c->lr=0x804006F0u; f_803A6F10(c); // 804006EC
L_804006F0:;
  c->r[3]=c->r[1]+0x00000280u; // 804006F0
  c->r[4]=0u+0x0000005Cu; // 804006F4
  c->lr=0x804006FCu; f_803A71CC(c); // 804006F8
  cmps(c,0,(int32_t)c->r[3],0); // 804006FC
  if (crb(c,2)) { goto L_8040070C; } // 80400700
  c->r[4]=c->r[3]+0x00000001u; // 80400704
  goto L_8040072C; // 80400708
L_8040070C:;
  c->r[3]=c->r[1]+0x00000280u; // 8040070C
  c->r[4]=0u+0x0000002Fu; // 80400710
  c->lr=0x80400718u; f_803A71CC(c); // 80400714
  cmps(c,0,(int32_t)c->r[3],0); // 80400718
  if (crb(c,2)) { goto L_80400728; } // 8040071C
  c->r[4]=c->r[3]+0x00000001u; // 80400720
  goto L_8040072C; // 80400724
L_80400728:;
  c->r[4]=c->r[1]+0x00000280u; // 80400728
L_8040072C:;
  c->r[3]=c->r[1]+0x00000018u; // 8040072C
  c->lr=0x80400734u; f_803A6F10(c); // 80400730
  c->r[3]=c->r[1]+0x00000018u; // 80400734
  c->r[4]=0u+0x0000002Eu; // 80400738
  c->lr=0x80400740u; f_803A71CC(c); // 8040073C
  cmps(c,0,(int32_t)c->r[3],0); // 80400740
  if (crb(c,2)) { goto L_80400750; } // 80400744
  c->r[0]=0u+0x00000000u; // 80400748
  W8(c->r[3]+0x00000000u,c->r[0]); // 8040074C
L_80400750:;
  c->r[3]=0u+0x0000000Cu; // 80400750
  c->lr=0x80400758u; f_803FE664(c); // 80400754
  cmps(c,0,(int32_t)c->r[3],0); // 80400758
  c->r[30]=c->r[3]|c->r[3]; // 8040075C
  if (crb(c,2)) { goto L_80400770; } // 80400760
  c->r[4]=c->r[1]+0x00000018u; // 80400764
  c->lr=0x8040076Cu; f_803FE7B0(c); // 80400768
  c->r[30]=c->r[3]|c->r[3]; // 8040076C
L_80400770:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 80400770
  c->r[3]=c->r[31]|c->r[31]; // 80400774
  W32(c->r[30]+0x00000000u,c->r[0]); // 80400778
  c->r[4]=c->r[1]+0x00000010u; // 8040077C
  c->r[5]=0u+0x00000000u; // 80400780
  c->r[6]=0u+0x00000000u; // 80400784
  W32(c->r[28]+0x00000008u,c->r[30]); // 80400788
  c->r[7]=0u+0x00000000u; // 8040078C
  c->r[8]=0u+0x00000000u; // 80400790
  c->r[9]=0u+0x00000000u; // 80400794
  c->lr=0x8040079Cu; f_80403308(c); // 80400798
  cmps(c,0,(int32_t)c->r[3],0); // 8040079C
  if (crb(c,2)) { goto L_804007B8; } // 804007A0
  c->r[0]=R32(c->r[1]+0x00000010u); // 804007A4
  cmps(c,0,(int32_t)c->r[0],0); // 804007A8
  if (crb(c,2)) { goto L_804007C8; } // 804007AC
  cmps(c,0,(int32_t)c->r[0],1); // 804007B0
  if (crb(c,2)) { goto L_804007C8; } // 804007B4
L_804007B8:;
  c->r[3]=c->r[31]|c->r[31]; // 804007B8
  c->lr=0x804007C0u; f_803FE6DC(c); // 804007BC
  c->r[3]=0u+0x00000000u; // 804007C0
  goto L_80400A04; // 804007C4
L_804007C8:;
  c->r[3]=c->r[31]|c->r[31]; // 804007C8
  c->r[4]=c->r[1]+0x00000010u; // 804007CC
  c->r[6]=c->r[1]+0x0000000Cu; // 804007D0
  c->r[5]=0u+0x00000000u; // 804007D4
  c->r[7]=0u+0x00000000u; // 804007D8
  c->r[8]=0u+0x00000000u; // 804007DC
  c->r[9]=0u+0x00000000u; // 804007E0
  c->lr=0x804007E8u; f_80403308(c); // 804007E4
  cmps(c,0,(int32_t)c->r[3],0); // 804007E8
  if (crb(c,2)) { goto L_804007FC; } // 804007EC
  c->r[0]=R32(c->r[1]+0x00000010u); // 804007F0
  cmps(c,0,(int32_t)c->r[0],2); // 804007F4
  if (crb(c,2)) { goto L_8040080C; } // 804007F8
L_804007FC:;
  c->r[3]=c->r[31]|c->r[31]; // 804007FC
  c->lr=0x80400804u; f_803FE6DC(c); // 80400800
  c->r[3]=0u+0x00000000u; // 80400804
  goto L_80400A04; // 80400808
L_8040080C:;
  c->r[3]=c->r[31]|c->r[31]; // 8040080C
  c->r[4]=c->r[1]+0x00000010u; // 80400810
  c->r[5]=c->r[1]+0x00000014u; // 80400814
  c->r[6]=0u+0x00000000u; // 80400818
  c->r[7]=0u+0x00000000u; // 8040081C
  c->r[8]=0u+0x00000000u; // 80400820
  c->r[9]=0u+0x00000000u; // 80400824
  c->lr=0x8040082Cu; f_80403308(c); // 80400828
  cmps(c,0,(int32_t)c->r[3],0); // 8040082C
  if (crb(c,2)) { goto L_80400840; } // 80400830
  c->r[0]=R32(c->r[1]+0x00000010u); // 80400834
  cmps(c,0,(int32_t)c->r[0],3); // 80400838
  if (crb(c,2)) { goto L_80400850; } // 8040083C
L_80400840:;
  c->r[3]=c->r[31]|c->r[31]; // 80400840
  c->lr=0x80400848u; f_803FE6DC(c); // 80400844
  c->r[3]=0u+0x00000000u; // 80400848
  goto L_80400A04; // 8040084C
L_80400850:;
  c->r[29]=0u+0x00000000u; // 80400850
  goto L_80400974; // 80400854
L_80400858:;
  c->r[3]=c->r[31]|c->r[31]; // 80400858
  c->r[4]=c->r[1]+0x00000010u; // 8040085C
  c->r[5]=c->r[1]+0x00000008u; // 80400860
  c->r[6]=0u+0x00000000u; // 80400864
  c->r[7]=0u+0x00000000u; // 80400868
  c->r[8]=0u+0x00000000u; // 8040086C
  c->r[9]=0u+0x00000000u; // 80400870
  c->lr=0x80400878u; f_80403308(c); // 80400874
  cmps(c,0,(int32_t)c->r[3],0); // 80400878
  if (!crb(c,2)) { goto L_8040089C; } // 8040087C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80400880
  cmps(c,0,(int32_t)c->r[0],4); // 80400884
  if (crb(c,2)) { goto L_8040089C; } // 80400888
  c->r[3]=c->r[31]|c->r[31]; // 8040088C
  c->lr=0x80400894u; f_803FE6DC(c); // 80400890
  c->r[3]=0u+0x00000000u; // 80400894
  goto L_80400A04; // 80400898
L_8040089C:;
  c->r[3]=c->r[31]|c->r[31]; // 8040089C
  c->r[4]=c->r[1]+0x00000010u; // 804008A0
  c->r[7]=c->r[1]+0x000003B0u; // 804008A4
  c->r[5]=0u+0x00000000u; // 804008A8
  c->r[6]=0u+0x00000000u; // 804008AC
  c->r[8]=0u+0x00000000u; // 804008B0
  c->r[9]=0u+0x000003E8u; // 804008B4
  c->lr=0x804008BCu; f_80403308(c); // 804008B8
  cmps(c,0,(int32_t)c->r[3],0); // 804008BC
  if (!crb(c,2)) { goto L_804008E0; } // 804008C0
  c->r[0]=R32(c->r[1]+0x00000010u); // 804008C4
  cmps(c,0,(int32_t)c->r[0],5); // 804008C8
  if (crb(c,2)) { goto L_804008E0; } // 804008CC
  c->r[3]=c->r[31]|c->r[31]; // 804008D0
  c->lr=0x804008D8u; f_803FE6DC(c); // 804008D4
  c->r[3]=0u+0x00000000u; // 804008D8
  goto L_80400A04; // 804008DC
L_804008E0:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 804008E0
  c->r[3]=c->r[28]|c->r[28]; // 804008E4
  c->r[4]=c->r[30]|c->r[30]; // 804008E8
  c->r[5]=c->r[1]+0x000003B0u; // 804008EC
  c->r[7]=0u+0x00000001u; // 804008F0
  c->lr=0x804008F8u; f_803FEA14(c); // 804008F4
  cmps(c,0,(int32_t)c->r[3],0); // 804008F8
  if (!crb(c,2)) { goto L_80400944; } // 804008FC
  c->r[5]=0u+0x80470000u; // 80400900
  c->r[3]=c->r[1]+0x00000080u; // 80400904
  c->r[5]=c->r[5]+0xFFFFA548u; // 80400908
  c->r[6]=c->r[1]+0x000003B0u; // 8040090C
  c->r[4]=0u+0x00000200u; // 80400910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80400914
  c->lr=0x8040091Cu; f_804003CC(c); // 80400918
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040091C
  c->r[4]=c->r[1]+0x00000080u; // 80400920
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400924
  c->r[12]=R32(c->r[12]+0x000000F4u); // 80400928
  c->ctr=c->r[12]; // 8040092C
  if (true) { c->lr=0x80400934u; dispatch(c,c->ctr); } // 80400930
  c->r[3]=c->r[31]|c->r[31]; // 80400934
  c->lr=0x8040093Cu; f_803FE6DC(c); // 80400938
  c->r[3]=0u+0x00000000u; // 8040093C
  goto L_80400A04; // 80400940
L_80400944:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400944
  c->r[4]=c->r[31]|c->r[31]; // 80400948
  c->r[12]=R32(c->r[12]+0x00000040u); // 8040094C
  c->ctr=c->r[12]; // 80400950
  if (true) { c->lr=0x80400958u; dispatch(c,c->ctr); } // 80400954
  cmps(c,0,(int32_t)c->r[3],0); // 80400958
  if (!crb(c,2)) { goto L_80400970; } // 8040095C
  c->r[3]=c->r[31]|c->r[31]; // 80400960
  c->lr=0x80400968u; f_803FE6DC(c); // 80400964
  c->r[3]=0u+0x00000000u; // 80400968
  goto L_80400A04; // 8040096C
L_80400970:;
  c->r[29]=c->r[29]+0x00000001u; // 80400970
L_80400974:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80400974
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80400978
  if (crb(c,0)) { IRQCHK(c); goto L_80400858; } // 8040097C
  c->r[3]=c->r[31]|c->r[31]; // 80400980
  c->r[4]=c->r[28]|c->r[28]; // 80400984
  c->lr=0x8040098Cu; f_80403A1C(c); // 80400988
  c->r[3]=c->r[31]|c->r[31]; // 8040098C
  c->lr=0x80400994u; f_803FE6DC(c); // 80400990
  {uint32_t ea=c->r[2]+0xFFFFA988u; c->f[0]=c->ps1[0]=RF32(ea);} // 80400994
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80400998
  fcmp(c,0,c->f[0],c->f[1]); // 8040099C
  if (crb(c,2)) { goto L_804009D8; } // 804009A0
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 804009A4
  fcmp(c,0,c->f[0],c->f[1]); // 804009A8
  if (!crb(c,2)) { goto L_804009D8; } // 804009AC
  c->r[29]=R32(c->r[28]+0x00000000u); // 804009B0
  goto L_804009D0; // 804009B4
L_804009B8:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804009B8
  c->r[3]=c->r[29]|c->r[29]; // 804009BC
  c->r[12]=R32(c->r[12]+0x00000080u); // 804009C0
  c->ctr=c->r[12]; // 804009C4
  if (true) { c->lr=0x804009CCu; dispatch(c,c->ctr); } // 804009C8
  c->r[29]=R32(c->r[29]+0x00000038u); // 804009CC
L_804009D0:;
  cmps(c,0,(int32_t)c->r[29],0); // 804009D0
  if (!crb(c,2)) { IRQCHK(c); goto L_804009B8; } // 804009D4
L_804009D8:;
  c->r[29]=R32(c->r[28]+0x00000000u); // 804009D8
  goto L_804009F8; // 804009DC
L_804009E0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 804009E0
  c->r[3]=c->r[29]|c->r[29]; // 804009E4
  c->r[12]=R32(c->r[12]+0x00000084u); // 804009E8
  c->ctr=c->r[12]; // 804009EC
  if (true) { c->lr=0x804009F4u; dispatch(c,c->ctr); } // 804009F0
  c->r[29]=R32(c->r[29]+0x00000038u); // 804009F4
L_804009F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 804009F8
  if (!crb(c,2)) { IRQCHK(c); goto L_804009E0; } // 804009FC
  c->r[3]=0u+0x00000001u; // 80400A00
L_80400A04:;
  c->r[0]=R32(c->r[1]+0x000007B4u); // 80400A04
  c->r[31]=R32(c->r[1]+0x000007ACu); // 80400A08
  c->r[30]=R32(c->r[1]+0x000007A8u); // 80400A0C
  c->r[29]=R32(c->r[1]+0x000007A4u); // 80400A10
  c->r[28]=R32(c->r[1]+0x000007A0u); // 80400A14
  c->lr=c->r[0]; // 80400A18
  c->r[1]=c->r[1]+0x000007B0u; // 80400A1C
  return; // 80400A20
}

// fn_80400A24
void f_80400A24(Ctx* __restrict c) {
  trace_call(0x80400A24u);
  {uint32_t ea=c->r[1]+0xFFFFFCB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400A24
  c->r[0]=c->lr; // 80400A28
  cmps(c,0,(int32_t)c->r[5],0); // 80400A2C
  W32(c->r[1]+0x00000354u,c->r[0]); // 80400A30
  W32(c->r[1]+0x0000034Cu,c->r[31]); // 80400A34
  c->r[31]=c->r[5]|c->r[5]; // 80400A38
  W32(c->r[1]+0x00000348u,c->r[30]); // 80400A3C
  c->r[30]=c->r[4]|c->r[4]; // 80400A40
  W32(c->r[1]+0x00000344u,c->r[29]); // 80400A44
  c->r[29]=c->r[3]|c->r[3]; // 80400A48
  if (!crb(c,2)) { goto L_80400A54; } // 80400A4C
  c->lr=0x80400A54u; f_803FE97C(c); // 80400A50
L_80400A54:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400A54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400A58
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80400A5C
  c->ctr=c->r[12]; // 80400A60
  if (true) { c->lr=0x80400A68u; dispatch(c,c->ctr); } // 80400A64
  c->r[4]=c->r[3]|c->r[3]; // 80400A68
  c->r[3]=c->r[1]+0x00000210u; // 80400A6C
  c->lr=0x80400A74u; f_803A6F10(c); // 80400A70
  c->r[4]=c->r[30]|c->r[30]; // 80400A74
  c->r[3]=c->r[1]+0x00000210u; // 80400A78
  c->lr=0x80400A80u; f_803A7014(c); // 80400A7C
  c->r[4]=0u+0x80470000u; // 80400A80
  c->r[3]=c->r[1]+0x00000008u; // 80400A84
  c->r[4]=c->r[4]+0xFFFF9118u; // 80400A88
  W32(c->r[1]+0x00000008u,c->r[4]); // 80400A8C
  c->r[4]=c->r[1]+0x00000210u; // 80400A90
  c->lr=0x80400A98u; f_803E3774(c); // 80400A94
  cmps(c,0,(int32_t)c->r[3],0); // 80400A98
  if (crb(c,2)) { goto L_80400AF8; } // 80400A9C
  c->r[3]=c->r[29]|c->r[29]; // 80400AA0
  c->r[5]=c->r[31]|c->r[31]; // 80400AA4
  c->r[4]=c->r[1]+0x00000008u; // 80400AA8
  c->r[6]=c->r[1]+0x00000210u; // 80400AAC
  c->lr=0x80400AB4u; f_80400640(c); // 80400AB0
  cmps(c,0,(int32_t)c->r[3],0); // 80400AB4
  if (!crb(c,2)) { goto L_80400AF0; } // 80400AB8
  c->r[5]=0u+0x80470000u; // 80400ABC
  c->r[3]=c->r[1]+0x00000010u; // 80400AC0
  c->r[5]=c->r[5]+0xFFFFA58Cu; // 80400AC4
  c->r[6]=c->r[1]+0x00000210u; // 80400AC8
  c->r[4]=0u+0x00000200u; // 80400ACC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80400AD0
  c->lr=0x80400AD8u; f_804003CC(c); // 80400AD4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400AD8
  c->r[4]=c->r[1]+0x00000010u; // 80400ADC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400AE0
  c->r[12]=R32(c->r[12]+0x000000F4u); // 80400AE4
  c->ctr=c->r[12]; // 80400AE8
  if (true) { c->lr=0x80400AF0u; dispatch(c,c->ctr); } // 80400AEC
L_80400AF0:;
  c->r[3]=c->r[1]+0x00000008u; // 80400AF0
  c->lr=0x80400AF8u; f_803E3788(c); // 80400AF4
L_80400AF8:;
  c->r[31]=R32(c->r[1]+0x0000034Cu); // 80400AF8
  c->r[3]=0u+0x00000001u; // 80400AFC
  c->r[30]=R32(c->r[1]+0x00000348u); // 80400B00
  c->r[29]=R32(c->r[1]+0x00000344u); // 80400B04
  c->r[0]=R32(c->r[1]+0x00000354u); // 80400B08
  c->lr=c->r[0]; // 80400B0C
  c->r[1]=c->r[1]+0x00000350u; // 80400B10
  return; // 80400B14
}

// fn_80400B18
void f_80400B18(Ctx* __restrict c) {
  trace_call(0x80400B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400B18
  c->r[4]=0u+0x80570000u; // 80400B1C
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 80400B20
  c->r[3]=c->r[4]+0x000042E8u; // 80400B24
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 80400B28
  c->r[11]=0u+0x80570000u; // 80400B2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80400B30
  c->r[9]=c->r[1]+0x00000028u; // 80400B34
  c->r[10]=c->r[1]+0x00000030u; // 80400B38
  c->r[5]=c->r[1]+0x00000008u; // 80400B3C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80400B40
  c->r[7]=c->r[1]+0x00000018u; // 80400B44
  c->r[8]=c->r[1]+0x00000020u; // 80400B48
  c->r[6]=c->r[1]+0x00000010u; // 80400B4C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80400B50
  c->r[11]=c->r[11]+0x000042F8u; // 80400B54
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 80400B58
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80400B5C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 80400B60
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80400B64
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80400B68
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 80400B6C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80400B70
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80400B74
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 80400B78
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80400B7C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80400B80
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 80400B84
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80400B88
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80400B8C
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 80400B90
  {uint32_t ea=c->r[4]+0x000042E8u; WF32(ea,c->f[1]);} // 80400B94
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80400B98
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80400B9C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80400BA0
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 80400BA4
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 80400BA8
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 80400BAC
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 80400BB0
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 80400BB4
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 80400BB8
  c->r[1]=c->r[1]+0x00000040u; // 80400BBC
  return; // 80400BC0
}

// fn_80400BC4
void f_80400BC4(Ctx* __restrict c) {
  trace_call(0x80400BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400BC4
  c->r[0]=c->lr; // 80400BC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80400BCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80400BD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80400BD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80400BD8
  c->r[29]=0u+0x80470000u; // 80400BDC
  c->r[29]=c->r[29]+0xFFFFA5B0u; // 80400BE0
  c->r[31]=R32(c->r[13]+0xFFFFF468u); // 80400BE4
  goto L_80400C5C; // 80400BE8
L_80400BEC:;
  c->r[0]=R32(c->r[31]+0x000001A4u); // 80400BEC
  cmps(c,0,(int32_t)c->r[0],0); // 80400BF0
  if (crb(c,2)) { goto L_80400C14; } // 80400BF4
  c->r[3]=R32(c->r[31]+0x000001A0u); // 80400BF8
  cmps(c,0,(int32_t)c->r[3],0); // 80400BFC
  if (crb(c,2)) { goto L_80400C14; } // 80400C00
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400C04
  c->r[12]=R32(c->r[12]+0x00000010u); // 80400C08
  c->ctr=c->r[12]; // 80400C0C
  if (true) { c->lr=0x80400C14u; dispatch(c,c->ctr); } // 80400C10
L_80400C14:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400C14
  c->r[4]=R32(c->r[31]+0x000001A0u); // 80400C18
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400C1C
  c->r[12]=R32(c->r[12]+0x00000050u); // 80400C20
  c->ctr=c->r[12]; // 80400C24
  if (true) { c->lr=0x80400C2Cu; dispatch(c,c->ctr); } // 80400C28
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400C2C
  c->r[4]=R32(c->r[31]+0x000001B4u); // 80400C30
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400C34
  c->r[12]=R32(c->r[12]+0x00000044u); // 80400C38
  c->ctr=c->r[12]; // 80400C3C
  if (true) { c->lr=0x80400C44u; dispatch(c,c->ctr); } // 80400C40
  cmps(c,0,(int32_t)c->r[31],0); // 80400C44
  c->r[30]=R32(c->r[31]+0x00000190u); // 80400C48
  if (crb(c,2)) { goto L_80400C58; } // 80400C4C
  c->r[3]=c->r[31]|c->r[31]; // 80400C50
  c->lr=0x80400C58u; f_803FE694(c); // 80400C54
L_80400C58:;
  c->r[31]=c->r[30]|c->r[30]; // 80400C58
L_80400C5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80400C5C
  if (!crb(c,2)) { IRQCHK(c); goto L_80400BEC; } // 80400C60
  c->r[3]=0u+0x80570000u; // 80400C64
  c->r[5]=0u+0x00000000u; // 80400C68
  c->r[3]=c->r[3]+0x00000B60u; // 80400C6C
  W32(c->r[13]+0xFFFFF468u,c->r[5]); // 80400C70
  c->r[0]=R32(c->r[3]+0x000010B8u); // 80400C74
  c->r[3]=c->r[3]+0x000010A4u; // 80400C78
  W32(c->r[13]+0xFFFFF46Cu,c->r[5]); // 80400C7C
  c->r[4]=c->r[29]+0x00000000u; // 80400C80
  cmps(c,0,(int32_t)c->r[0],0); // 80400C84
  W32(c->r[13]+0xFFFFF2B8u,c->r[3]); // 80400C88
  if (!crb(c,2)) { goto L_80400C94; } // 80400C8C
  W32(c->r[13]+0xFFFFF28Cu,c->r[5]); // 80400C90
L_80400C94:;
  c->r[5]=R32(c->r[13]+0xFFFFF288u); // 80400C94
  c->r[3]=0u+0x80570000u; // 80400C98
  c->r[31]=0u+0x80570000u; // 80400C9C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80400CA0
  c->r[3]=c->r[3]+0x000007A0u; // 80400CA4
  c->r[31]=c->r[31]+0x00000B60u; // 80400CA8
  W32(c->r[31]+0x000010B4u,c->r[5]); // 80400CAC
  c->r[5]=0u+0x0000001Fu; // 80400CB0
  c->r[6]=c->r[3]+c->r[0]; // 80400CB4
  c->r[7]=R32(c->r[6]+0x00000008u); // 80400CB8
  c->r[3]=c->r[31]+0x000010C0u; // 80400CBC
  c->r[0]=R32(c->r[6]+0x0000005Cu); // 80400CC0
  W32(c->r[31]+0x000010A4u,c->r[7]); // 80400CC4
  W32(c->r[31]+0x000010A8u,c->r[0]); // 80400CC8
  c->lr=0x80400CD0u; f_803A6FD0(c); // 80400CCC
  c->r[4]=R32(c->r[31]+0x000010B8u); // 80400CD0
  c->r[30]=0u+0x00000000u; // 80400CD4
  W8(c->r[31]+0x000010DFu,c->r[30]); // 80400CD8
  c->r[3]=0u+0x000001C0u; // 80400CDC
  c->r[0]=c->r[4]+0x00000001u; // 80400CE0
  W32(c->r[31]+0x000010B8u,c->r[0]); // 80400CE4
  c->lr=0x80400CECu; f_803FE664(c); // 80400CE8
  cmps(c,0,(int32_t)c->r[3],0); // 80400CEC
  if (crb(c,2)) { goto L_80400D20; } // 80400CF0
  W32(c->r[3]+0x000001A0u,c->r[30]); // 80400CF4
  c->r[0]=0u+0x00000001u; // 80400CF8
  W32(c->r[3]+0x000001A4u,c->r[30]); // 80400CFC
  W32(c->r[3]+0x000001A8u,c->r[30]); // 80400D00
  W32(c->r[3]+0x000001ACu,c->r[30]); // 80400D04
  W32(c->r[3]+0x000001B0u,c->r[30]); // 80400D08
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80400D0C
  W32(c->r[3]+0x00000190u,c->r[30]); // 80400D10
  W32(c->r[3]+0x00000194u,c->r[30]); // 80400D14
  W32(c->r[3]+0x00000198u,c->r[30]); // 80400D18
  W32(c->r[3]+0x0000019Cu,c->r[30]); // 80400D1C
L_80400D20:;
  c->r[31]=0u+0x80570000u; // 80400D20
  c->r[4]=0u+0x80570000u; // 80400D24
  c->r[31]=c->r[31]+0x00000B60u; // 80400D28
  c->r[30]=0u+0x00000000u; // 80400D2C
  c->r[0]=R32(c->r[31]+0x000010B4u); // 80400D30
  c->r[4]=c->r[4]+0x000007A0u; // 80400D34
  c->r[8]=R32(c->r[31]+0x000010A4u); // 80400D38
  cmps(c,0,(int32_t)c->r[3],0); // 80400D3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80400D40
  c->r[6]=R32(c->r[31]+0x000010A8u); // 80400D44
  c->r[9]=R32(c->r[31]+0x000010ACu); // 80400D48
  c->r[7]=R32(c->r[31]+0x000010B0u); // 80400D4C
  c->r[5]=c->r[4]+c->r[0]; // 80400D50
  c->r[4]=R32(c->r[31]+0x000010BCu); // 80400D54
  c->r[10]=R32(c->r[5]+0x00000008u); // 80400D58
  c->r[5]=R32(c->r[5]+0x0000005Cu); // 80400D5C
  c->r[0]=R32(c->r[13]+0xFFFFF28Cu); // 80400D60
  c->r[8]=c->r[10]-c->r[8]; // 80400D64
  c->r[5]=c->r[5]-c->r[6]; // 80400D68
  W32(c->r[13]+0xFFFFF46Cu,c->r[3]); // 80400D6C
  c->r[0]=c->r[4]|c->r[0]; // 80400D70
  c->r[6]=c->r[9]+c->r[8]; // 80400D74
  c->r[4]=c->r[7]+c->r[5]; // 80400D78
  W32(c->r[13]+0xFFFFF2B8u,c->r[30]); // 80400D7C
  W32(c->r[31]+0x000010ACu,c->r[6]); // 80400D80
  W32(c->r[31]+0x000010B0u,c->r[4]); // 80400D84
  W32(c->r[31]+0x000010BCu,c->r[0]); // 80400D88
  if (crb(c,2)) { goto L_80400EE0; } // 80400D8C
  W32(c->r[3]+0x000001B4u,c->r[30]); // 80400D90
  c->r[4]=c->r[29]+0x0000001Cu; // 80400D94
  c->r[3]=R32(c->r[13]+0xFFFFF46Cu); // 80400D98
  c->lr=0x80400DA0u; f_803A6F10(c); // 80400D9C
  c->r[3]=R32(c->r[13]+0xFFFFF46Cu); // 80400DA0
  c->r[4]=c->r[29]+0x00000028u; // 80400DA4
  c->r[3]=c->r[3]+0x000000C8u; // 80400DA8
  c->lr=0x80400DB0u; f_803A6F10(c); // 80400DAC
  c->r[5]=R32(c->r[13]+0xFFFFF46Cu); // 80400DB0
  c->r[3]=c->r[31]+0x000010A4u; // 80400DB4
  c->r[0]=R32(c->r[13]+0xFFFFF468u); // 80400DB8
  c->r[4]=c->r[29]+0x00000034u; // 80400DBC
  W32(c->r[5]+0x00000190u,c->r[0]); // 80400DC0
  c->r[0]=R32(c->r[31]+0x000010B8u); // 80400DC4
  c->r[5]=R32(c->r[13]+0xFFFFF46Cu); // 80400DC8
  cmps(c,0,(int32_t)c->r[0],0); // 80400DCC
  W32(c->r[13]+0xFFFFF468u,c->r[5]); // 80400DD0
  W32(c->r[13]+0xFFFFF2B8u,c->r[3]); // 80400DD4
  if (!crb(c,2)) { goto L_80400DE0; } // 80400DD8
  W32(c->r[13]+0xFFFFF28Cu,c->r[30]); // 80400DDC
L_80400DE0:;
  c->r[5]=R32(c->r[13]+0xFFFFF288u); // 80400DE0
  c->r[3]=0u+0x80570000u; // 80400DE4
  c->r[30]=0u+0x80570000u; // 80400DE8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80400DEC
  c->r[3]=c->r[3]+0x000007A0u; // 80400DF0
  c->r[30]=c->r[30]+0x00000B60u; // 80400DF4
  W32(c->r[30]+0x000010B4u,c->r[5]); // 80400DF8
  c->r[5]=0u+0x0000001Fu; // 80400DFC
  c->r[6]=c->r[3]+c->r[0]; // 80400E00
  c->r[7]=R32(c->r[6]+0x00000008u); // 80400E04
  c->r[3]=c->r[30]+0x000010C0u; // 80400E08
  c->r[0]=R32(c->r[6]+0x0000005Cu); // 80400E0C
  W32(c->r[30]+0x000010A4u,c->r[7]); // 80400E10
  W32(c->r[30]+0x000010A8u,c->r[0]); // 80400E14
  c->lr=0x80400E1Cu; f_803A6FD0(c); // 80400E18
  c->r[3]=R32(c->r[30]+0x000010B8u); // 80400E1C
  c->r[29]=0u+0x00000000u; // 80400E20
  W8(c->r[30]+0x000010DFu,c->r[29]); // 80400E24
  c->r[0]=c->r[3]+0x00000001u; // 80400E28
  c->r[31]=R32(c->r[13]+0xFFFFF46Cu); // 80400E2C
  W32(c->r[30]+0x000010B8u,c->r[0]); // 80400E30
  c->r[0]=R32(c->r[31]+0x000001A0u); // 80400E34
  cmps(c,0,(int32_t)c->r[0],0); // 80400E38
  if (!crb(c,2)) { goto L_80400E7C; } // 80400E3C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400E40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400E44
  c->r[12]=R32(c->r[12]+0x00000054u); // 80400E48
  c->ctr=c->r[12]; // 80400E4C
  if (true) { c->lr=0x80400E54u; dispatch(c,c->ctr); } // 80400E50
  c->r[30]=c->r[3]|c->r[3]; // 80400E54
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400E58
  c->r[4]=c->r[30]|c->r[30]; // 80400E5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400E60
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80400E64
  c->ctr=c->r[12]; // 80400E68
  if (true) { c->lr=0x80400E70u; dispatch(c,c->ctr); } // 80400E6C
  W32(c->r[31]+0x000001A0u,c->r[3]); // 80400E70
  W32(c->r[31]+0x000001A8u,c->r[30]); // 80400E74
  W32(c->r[31]+0x000001A4u,c->r[29]); // 80400E78
L_80400E7C:;
  c->r[9]=0u+0x80570000u; // 80400E7C
  c->r[3]=0u+0x80570000u; // 80400E80
  c->r[9]=c->r[9]+0x00000B60u; // 80400E84
  c->r[10]=0u+0x00000000u; // 80400E88
  c->r[0]=R32(c->r[9]+0x000010B4u); // 80400E8C
  c->r[3]=c->r[3]+0x000007A0u; // 80400E90
  c->r[7]=R32(c->r[9]+0x000010A4u); // 80400E94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80400E98
  c->r[5]=R32(c->r[9]+0x000010A8u); // 80400E9C
  c->r[8]=R32(c->r[9]+0x000010ACu); // 80400EA0
  c->r[6]=R32(c->r[9]+0x000010B0u); // 80400EA4
  c->r[4]=c->r[3]+c->r[0]; // 80400EA8
  c->r[3]=R32(c->r[9]+0x000010BCu); // 80400EAC
  c->r[11]=R32(c->r[4]+0x00000008u); // 80400EB0
  c->r[4]=R32(c->r[4]+0x0000005Cu); // 80400EB4
  c->r[0]=R32(c->r[13]+0xFFFFF28Cu); // 80400EB8
  c->r[7]=c->r[11]-c->r[7]; // 80400EBC
  c->r[4]=c->r[4]-c->r[5]; // 80400EC0
  W32(c->r[13]+0xFFFFF2B8u,c->r[10]); // 80400EC4
  c->r[0]=c->r[3]|c->r[0]; // 80400EC8
  c->r[5]=c->r[8]+c->r[7]; // 80400ECC
  c->r[3]=c->r[6]+c->r[4]; // 80400ED0
  W32(c->r[9]+0x000010ACu,c->r[5]); // 80400ED4
  W32(c->r[9]+0x000010B0u,c->r[3]); // 80400ED8
  W32(c->r[9]+0x000010BCu,c->r[0]); // 80400EDC
L_80400EE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80400EE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80400EE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80400EE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80400EEC
  c->lr=c->r[0]; // 80400EF0
  c->r[1]=c->r[1]+0x00000020u; // 80400EF4
  return; // 80400EF8
}

// fn_80400EFC
void f_80400EFC(Ctx* __restrict c) {
  trace_call(0x80400EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400EFC
  c->r[0]=c->lr; // 80400F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80400F04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80400F08
  W32(c->r[1]+0x00000008u,c->r[30]); // 80400F0C
  c->r[31]=R32(c->r[13]+0xFFFFF468u); // 80400F10
  goto L_80400F88; // 80400F14
L_80400F18:;
  c->r[0]=R32(c->r[31]+0x000001A4u); // 80400F18
  cmps(c,0,(int32_t)c->r[0],0); // 80400F1C
  if (crb(c,2)) { goto L_80400F40; } // 80400F20
  c->r[3]=R32(c->r[31]+0x000001A0u); // 80400F24
  cmps(c,0,(int32_t)c->r[3],0); // 80400F28
  if (crb(c,2)) { goto L_80400F40; } // 80400F2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400F30
  c->r[12]=R32(c->r[12]+0x00000010u); // 80400F34
  c->ctr=c->r[12]; // 80400F38
  if (true) { c->lr=0x80400F40u; dispatch(c,c->ctr); } // 80400F3C
L_80400F40:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400F40
  c->r[4]=R32(c->r[31]+0x000001A0u); // 80400F44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400F48
  c->r[12]=R32(c->r[12]+0x00000050u); // 80400F4C
  c->ctr=c->r[12]; // 80400F50
  if (true) { c->lr=0x80400F58u; dispatch(c,c->ctr); } // 80400F54
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80400F58
  c->r[4]=R32(c->r[31]+0x000001B4u); // 80400F5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80400F60
  c->r[12]=R32(c->r[12]+0x00000044u); // 80400F64
  c->ctr=c->r[12]; // 80400F68
  if (true) { c->lr=0x80400F70u; dispatch(c,c->ctr); } // 80400F6C
  cmps(c,0,(int32_t)c->r[31],0); // 80400F70
  c->r[30]=R32(c->r[31]+0x00000190u); // 80400F74
  if (crb(c,2)) { goto L_80400F84; } // 80400F78
  c->r[3]=c->r[31]|c->r[31]; // 80400F7C
  c->lr=0x80400F84u; f_803FE694(c); // 80400F80
L_80400F84:;
  c->r[31]=c->r[30]|c->r[30]; // 80400F84
L_80400F88:;
  cmps(c,0,(int32_t)c->r[31],0); // 80400F88
  if (!crb(c,2)) { IRQCHK(c); goto L_80400F18; } // 80400F8C
  c->r[0]=0u+0x00000000u; // 80400F90
  W32(c->r[13]+0xFFFFF468u,c->r[0]); // 80400F94
  W32(c->r[13]+0xFFFFF46Cu,c->r[0]); // 80400F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80400F9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80400FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80400FA4
  c->lr=c->r[0]; // 80400FA8
  c->r[1]=c->r[1]+0x00000010u; // 80400FAC
  return; // 80400FB0
}

// fn_80400FB4
void f_80400FB4(Ctx* __restrict c) {
  trace_call(0x80400FB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80400FB4
  c->r[0]=c->lr; // 80400FB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80400FBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80400FC0
  c->r[31]=c->r[4]|c->r[4]; // 80400FC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80400FC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80400FCC
  c->r[29]=c->r[3]|c->r[3]; // 80400FD0
  c->r[30]=R32(c->r[13]+0xFFFFF468u); // 80400FD4
  goto L_80401000; // 80400FD8
L_80400FDC:;
  c->r[3]=c->r[29]|c->r[29]; // 80400FDC
  c->r[4]=c->r[30]|c->r[30]; // 80400FE0
  c->lr=0x80400FE8u; f_803AD4D0(c); // 80400FE4
  cmps(c,0,(int32_t)c->r[3],0); // 80400FE8
  if (!crb(c,2)) { goto L_80400FFC; } // 80400FEC
  c->r[0]=R32(c->r[30]+0x000001B8u); // 80400FF0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80400FF4
  if (crb(c,2)) { goto L_80401008; } // 80400FF8
L_80400FFC:;
  c->r[30]=R32(c->r[30]+0x00000190u); // 80400FFC
L_80401000:;
  cmps(c,0,(int32_t)c->r[30],0); // 80401000
  if (!crb(c,2)) { IRQCHK(c); goto L_80400FDC; } // 80401004
L_80401008:;
  cmps(c,0,(int32_t)c->r[30],0); // 80401008
  if (crb(c,2)) { goto L_80401018; } // 8040100C
  c->r[3]=c->r[30]|c->r[30]; // 80401010
  goto L_80401130; // 80401014
L_80401018:;
  c->r[3]=0u+0x000001C0u; // 80401018
  c->lr=0x80401020u; f_803FE664(c); // 8040101C
  cmps(c,0,(int32_t)c->r[3],0); // 80401020
  c->r[30]=c->r[3]|c->r[3]; // 80401024
  if (crb(c,2)) { goto L_8040105C; } // 80401028
  c->r[4]=0u+0x00000000u; // 8040102C
  W32(c->r[3]+0x000001A0u,c->r[4]); // 80401030
  c->r[0]=0u+0x00000001u; // 80401034
  W32(c->r[3]+0x000001A4u,c->r[4]); // 80401038
  W32(c->r[3]+0x000001A8u,c->r[4]); // 8040103C
  W32(c->r[3]+0x000001ACu,c->r[4]); // 80401040
  W32(c->r[3]+0x000001B0u,c->r[4]); // 80401044
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80401048
  W32(c->r[3]+0x00000190u,c->r[4]); // 8040104C
  W32(c->r[3]+0x00000194u,c->r[4]); // 80401050
  W32(c->r[3]+0x00000198u,c->r[4]); // 80401054
  W32(c->r[3]+0x0000019Cu,c->r[4]); // 80401058
L_8040105C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8040105C
  if (crb(c,2)) { goto L_8040112C; } // 80401060
  W32(c->r[3]+0x000001B8u,c->r[31]); // 80401064
  c->r[4]=c->r[29]|c->r[29]; // 80401068
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040106C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401070
  c->r[12]=R32(c->r[12]+0x00000038u); // 80401074
  c->ctr=c->r[12]; // 80401078
  if (true) { c->lr=0x80401080u; dispatch(c,c->ctr); } // 8040107C
  W32(c->r[30]+0x000001B4u,c->r[3]); // 80401080
  c->r[3]=c->r[30]|c->r[30]; // 80401084
  c->r[4]=c->r[29]|c->r[29]; // 80401088
  c->lr=0x80401090u; f_803A6F10(c); // 8040108C
  c->r[3]=c->r[29]|c->r[29]; // 80401090
  c->lr=0x80401098u; f_803ADAA8(c); // 80401094
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 80401098
  c->r[0]=c->r[4]+0x00000001u; // 8040109C
  c->r[3]=c->r[29]+c->r[4]; // 804010A0
  c->ctr=c->r[0]; // 804010A4
  if (crb(c,0)) { goto L_804010C4; } // 804010A8
L_804010AC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 804010AC
  cmps(c,0,(int32_t)c->r[0],92); // 804010B0
  if (crb(c,2)) { goto L_804010C4; } // 804010B4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 804010B8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 804010BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_804010AC; } // 804010C0
L_804010C4:;
  c->r[4]=c->r[4]+c->r[29]; // 804010C4
  c->r[3]=c->r[30]+0x000000C8u; // 804010C8
  c->r[4]=c->r[4]+0x00000001u; // 804010CC
  c->lr=0x804010D4u; f_803A6F10(c); // 804010D0
  c->r[0]=R32(c->r[13]+0xFFFFF468u); // 804010D4
  W32(c->r[30]+0x00000190u,c->r[0]); // 804010D8
  W32(c->r[13]+0xFFFFF468u,c->r[30]); // 804010DC
  c->r[0]=R32(c->r[30]+0x000001A0u); // 804010E0
  cmps(c,0,(int32_t)c->r[0],0); // 804010E4
  if (!crb(c,2)) { goto L_8040112C; } // 804010E8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804010EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804010F0
  c->r[12]=R32(c->r[12]+0x00000054u); // 804010F4
  c->ctr=c->r[12]; // 804010F8
  if (true) { c->lr=0x80401100u; dispatch(c,c->ctr); } // 804010FC
  c->r[31]=c->r[3]|c->r[3]; // 80401100
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401104
  c->r[4]=c->r[31]|c->r[31]; // 80401108
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040110C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80401110
  c->ctr=c->r[12]; // 80401114
  if (true) { c->lr=0x8040111Cu; dispatch(c,c->ctr); } // 80401118
  W32(c->r[30]+0x000001A0u,c->r[3]); // 8040111C
  c->r[0]=0u+0x00000000u; // 80401120
  W32(c->r[30]+0x000001A8u,c->r[31]); // 80401124
  W32(c->r[30]+0x000001A4u,c->r[0]); // 80401128
L_8040112C:;
  c->r[3]=c->r[30]|c->r[30]; // 8040112C
L_80401130:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80401130
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80401134
  c->r[30]=R32(c->r[1]+0x00000018u); // 80401138
  c->r[29]=R32(c->r[1]+0x00000014u); // 8040113C
  c->lr=c->r[0]; // 80401140
  c->r[1]=c->r[1]+0x00000020u; // 80401144
  return; // 80401148
}

// fn_8040114C
void f_8040114C(Ctx* __restrict c) {
  trace_call(0x8040114Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8040114C
  c->r[0]=c->lr; // 80401150
  W32(c->r[1]+0x00000014u,c->r[0]); // 80401154
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80401158
  c->r[31]=0u+0x00000000u; // 8040115C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80401160
  c->r[30]=R32(c->r[13]+0xFFFFF468u); // 80401164
  goto L_80401298; // 80401168
L_8040116C:;
  c->r[3]=R32(c->r[30]+0x000001A0u); // 8040116C
  cmps(c,0,(int32_t)c->r[3],0); // 80401170
  if (crb(c,2)) { goto L_80401294; } // 80401174
  c->r[0]=R32(c->r[30]+0x000001B0u); // 80401178
  cmps(c,0,(int32_t)c->r[0],0); // 8040117C
  if (!crb(c,1)) { goto L_80401294; } // 80401180
  c->r[0]=R32(c->r[30]+0x000001B4u); // 80401184
  cmps(c,0,(int32_t)c->r[0],0); // 80401188
  if (crb(c,2)) { goto L_80401294; } // 8040118C
  c->r[0]=R32(c->r[30]+0x000001A4u); // 80401190
  cmps(c,0,(int32_t)c->r[0],0); // 80401194
  if (crb(c,2)) { goto L_804011B0; } // 80401198
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040119C
  c->r[12]=R32(c->r[12]+0x00000010u); // 804011A0
  c->ctr=c->r[12]; // 804011A4
  if (true) { c->lr=0x804011ACu; dispatch(c,c->ctr); } // 804011A8
  W32(c->r[30]+0x000001A4u,c->r[31]); // 804011AC
L_804011B0:;
  c->r[3]=R32(c->r[30]+0x000001B8u); // 804011B0
  cmps(c,0,(int32_t)c->r[3],1); // 804011B4
  if (!crb(c,2)) { goto L_804011D4; } // 804011B8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804011BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804011C0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 804011C4
  c->ctr=c->r[12]; // 804011C8
  if (true) { c->lr=0x804011D0u; dispatch(c,c->ctr); } // 804011CC
  goto L_80401238; // 804011D0
L_804011D4:;
  cmps(c,0,(int32_t)c->r[3],5); // 804011D4
  if (!crb(c,2)) { goto L_804011F4; } // 804011D8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804011DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804011E0
  c->r[12]=R32(c->r[12]+0x00000060u); // 804011E4
  c->ctr=c->r[12]; // 804011E8
  if (true) { c->lr=0x804011F0u; dispatch(c,c->ctr); } // 804011EC
  goto L_80401238; // 804011F0
L_804011F4:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804011F4
  cmpu(c,0,c->r[0],0x00000001u); // 804011F8
  if (crb(c,1)) { goto L_80401218; } // 804011FC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401200
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401204
  c->r[12]=R32(c->r[12]+0x00000064u); // 80401208
  c->ctr=c->r[12]; // 8040120C
  if (true) { c->lr=0x80401214u; dispatch(c,c->ctr); } // 80401210
  goto L_80401238; // 80401214
L_80401218:;
  cmps(c,0,(int32_t)c->r[3],4); // 80401218
  if (!crb(c,2)) { goto L_80401238; } // 8040121C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401220
  c->r[4]=0u+0x00000000u; // 80401224
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401228
  c->r[12]=R32(c->r[12]+0x00000068u); // 8040122C
  c->ctr=c->r[12]; // 80401230
  if (true) { c->lr=0x80401238u; dispatch(c,c->ctr); } // 80401234
L_80401238:;
  c->r[3]=R32(c->r[30]+0x000001B4u); // 80401238
  cmps(c,0,(int32_t)c->r[3],0); // 8040123C
  if (crb(c,2)) { goto L_8040126C; } // 80401240
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401244
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80401248
  c->ctr=c->r[12]; // 8040124C
  if (true) { c->lr=0x80401254u; dispatch(c,c->ctr); } // 80401250
  c->r[3]=R32(c->r[30]+0x000001A0u); // 80401254
  c->r[4]=R32(c->r[30]+0x000001B0u); // 80401258
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040125C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80401260
  c->ctr=c->r[12]; // 80401264
  if (true) { c->lr=0x8040126Cu; dispatch(c,c->ctr); } // 80401268
L_8040126C:;
  c->r[0]=R32(c->r[30]+0x000001B4u); // 8040126C
  cmps(c,0,(int32_t)c->r[0],0); // 80401270
  if (crb(c,2)) { goto L_80401290; } // 80401274
  c->r[3]=R32(c->r[30]+0x000001A0u); // 80401278
  c->r[4]=0u+0x00000000u; // 8040127C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401280
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80401284
  c->ctr=c->r[12]; // 80401288
  if (true) { c->lr=0x80401290u; dispatch(c,c->ctr); } // 8040128C
L_80401290:;
  W32(c->r[30]+0x000001B0u,c->r[31]); // 80401290
L_80401294:;
  c->r[30]=R32(c->r[30]+0x00000190u); // 80401294
L_80401298:;
  cmps(c,0,(int32_t)c->r[30],0); // 80401298
  if (!crb(c,2)) { IRQCHK(c); goto L_8040116C; } // 8040129C
  c->r[0]=R32(c->r[1]+0x00000014u); // 804012A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804012A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 804012A8
  c->lr=c->r[0]; // 804012AC
  c->r[1]=c->r[1]+0x00000010u; // 804012B0
  return; // 804012B4
}

// fn_804012B8
void f_804012B8(Ctx* __restrict c) {
  trace_call(0x804012B8u);
  c->r[3]=rotl(c->r[3],8)&0xFFFFFFFFu; // 804012B8
  return; // 804012BC
}

// fn_804012C0
void f_804012C0(Ctx* __restrict c) {
  trace_call(0x804012C0u);
  c->r[0]=rotl(c->r[3],24)&0xFF0000FFu; // 804012C0
  c->r[4]=c->r[3]|c->r[3]; // 804012C4
  c->r[3]=rotl(c->r[3],24)&0x0000FF00u; // 804012C8
  c->r[3]=c->r[3]|c->r[0]; // 804012CC
  c->r[3]=(rotl(c->r[4],24)&0x00FF0000u)|(c->r[3]&~0x00FF0000u); // 804012D0
  return; // 804012D4
}

// fn_804012D8
void f_804012D8(Ctx* __restrict c) {
  trace_call(0x804012D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804012D8
  c->r[0]=c->lr; // 804012DC
  c->r[5]=0u+0xE0000000u; // 804012E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 804012E4
  c->r[6]=c->r[1]+0x00000008u; // 804012E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804012EC
  c->r[31]=c->r[3]|c->r[3]; // 804012F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 804012F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 804012F8
  c->r[0]=R32(c->r[4]+0x00000040u); // 804012FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80401300
  c->r[3]=R32(c->r[3]+0x000001B8u); // 80401304
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401308
  {uint32_t ea=c->r[5]+0x00001DD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8040130C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80401310
  c->r[0]=cntlz(c->r[0]); // 80401314
  {uint32_t ea=c->r[5]+0x00001DE0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80401318
  fcmp(c,0,c->f[0],c->f[1]); // 8040131C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80401320
  if (!crb(c,0)) { goto L_80401380; } // 80401324
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80401328
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[1]=c->ps1[1]=RF32(ea);} // 8040132C
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401330
  cmps(c,0,(int32_t)c->r[0],0); // 80401334
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80401338
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 8040133C
  c->f[2]=(c->f[3]>=0.0)?c->f[2]:c->f[1]; // 80401340
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 80401344
  c->f[2]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 80401348
  if (crb(c,2)) { goto L_80401370; } // 8040134C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 80401350
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,2);} // 80401354
  {uint32_t ea=c->r[6]+0x00000002u; psq_load(c,1,ea,0,2);} // 80401358
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8040135C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80401360
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,0,ea,0,2);} // 80401364
  {uint32_t ea=c->r[6]+0x00000002u; psq_store(c,1,ea,1,2);} // 80401368
  goto L_80401380; // 8040136C
L_80401370:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80401370
  {uint32_t ea=c->r[6]+0x00000003u; psq_load(c,0,ea,1,2);} // 80401374
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80401378
  {uint32_t ea=c->r[6]+0x00000003u; psq_store(c,0,ea,1,2);} // 8040137C
L_80401380:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80401380
  cmps(c,0,(int32_t)c->r[3],1); // 80401384
  c->r[5]=c->r[0]|c->r[0]; // 80401388
  if (crb(c,2)) { goto L_80401428; } // 8040138C
  c->r[3]=0u+0xE0000000u; // 80401390
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80401394
  c->r[6]=c->r[3]+0x00001C20u; // 80401398
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 8040139C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,0);} // 804013A0
  c->r[6]=c->r[3]+0x00001C28u; // 804013A4
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,0,0);} // 804013A8
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804013AC
  {uint32_t ea=c->r[3]+0x00001C14u; c->f[4]=c->ps1[4]=RF32(ea);} // 804013B0
  {uint32_t ea=c->r[3]+0x00001C10u; c->f[2]=c->ps1[2]=RF32(ea);} // 804013B4
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804013B8
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[3],c->f[1],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 804013BC
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804013C0
  fcmp(c,0,c->f[1],c->f[4]); // 804013C4
  if (crb(c,1)) { goto L_804015C4; } // 804013C8
  {uint32_t ea=c->r[2]+0xFFFFA998u; c->f[0]=c->ps1[0]=RF32(ea);} // 804013CC
  fcmp(c,0,c->f[1],c->f[0]); // 804013D0
  if (!crb(c,0)) { goto L_804013DC; } // 804013D4
  goto L_804015C4; // 804013D8
L_804013DC:;
  fcmp(c,0,c->f[1],c->f[2]); // 804013DC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 804013E0
  if (!crb(c,2)) { goto L_80401430; } // 804013E4
  c->r[5]=c->r[4]+0x00000043u; // 804013E8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,1,2); c->r[5]=ea;} // 804013EC
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[1]); // 804013F0
  {uint32_t ea=c->r[3]+0x00001C18u; c->f[1]=c->ps1[1]=RF32(ea);} // 804013F4
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[0]=c->ps1[0]=RF32(ea);} // 804013F8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 804013FC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 80401400
  fcmp(c,0,c->f[3],c->f[0]); // 80401404
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80401408
  if (crb(c,2)) { goto L_804015C4; } // 8040140C
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80401410
  c->r[5]=c->r[3]+0x00001C1Cu; // 80401414
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,1,2);} // 80401418
  c->r[5]=R8(c->r[3]+0x00001C1Cu); // 8040141C
  c->r[5]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[5]&~0xFFFFFF00u); // 80401420
  goto L_80401430; // 80401424
L_80401428:;
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[0]); // 80401428
  if (crb(c,2)) { goto L_804015C4; } // 8040142C
L_80401430:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 80401430
  c->r[3]=0u+0xCC010000u; // 80401434
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,7,ea,0,0);} // 80401438
  c->r[0]=0u+0xFFFF8000u; // 8040143C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,4,ea,0,0);} // 80401440
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,8,ea,0,0);} // 80401444
  {double t0=S(c->f[3]+c->f[7]), t1=S(c->ps1[3]+c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 80401448
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,5,ea,0,0);} // 8040144C
  {double t0=S(c->f[4]+c->f[8]), t1=S(c->ps1[4]+c->ps1[8]); c->f[0]=t0; c->ps1[0]=t1;} // 80401450
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,6,ea,0,0);} // 80401454
  {double t0=S(c->f[1]-c->f[5]), t1=S(c->ps1[1]-c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 80401458
  {double t0=S(c->f[0]-c->f[6]), t1=S(c->ps1[0]-c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 8040145C
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,1,ea,0,0);} // 80401460
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80401464
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80401468
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,10,ea,0,0);} // 8040146C
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,9,ea,0,0);} // 80401470
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,9,ea,0,0);} // 80401474
  {double t0=S(c->f[3]+c->f[7]), t1=S(c->ps1[3]+c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 80401478
  {double t0=S(c->f[4]+c->f[8]), t1=S(c->ps1[4]+c->ps1[8]); c->f[0]=t0; c->ps1[0]=t1;} // 8040147C
  {double t0=S(c->f[5]+c->f[1]), t1=S(c->ps1[5]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80401480
  {double t0=S(c->f[6]+c->f[0]), t1=S(c->ps1[6]+c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 80401484
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,1,ea,0,0);} // 80401488
  {double t0=S(c->f[10]), t1=S(c->ps1[9]); c->f[0]=t0; c->ps1[0]=t1;} // 8040148C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80401490
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 80401494
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,0,ea,0,0);} // 80401498
  {double t0=S(c->f[3]-c->f[7]), t1=S(c->ps1[3]-c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 8040149C
  {double t0=S(c->f[4]-c->f[8]), t1=S(c->ps1[4]-c->ps1[8]); c->f[0]=t0; c->ps1[0]=t1;} // 804014A0
  {double t0=S(c->f[5]+c->f[1]), t1=S(c->ps1[5]+c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 804014A4
  {double t0=S(c->f[6]+c->f[0]), t1=S(c->ps1[6]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 804014A8
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,1,ea,0,0);} // 804014AC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 804014B0
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 804014B4
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,10,ea,0,0);} // 804014B8
  {double t0=S(c->f[3]-c->f[7]), t1=S(c->ps1[3]-c->ps1[7]); c->f[1]=t0; c->ps1[1]=t1;} // 804014BC
  {double t0=S(c->f[4]-c->f[8]), t1=S(c->ps1[4]-c->ps1[8]); c->f[0]=t0; c->ps1[0]=t1;} // 804014C0
  {double t0=S(c->f[1]-c->f[5]), t1=S(c->ps1[1]-c->ps1[5]); c->f[1]=t0; c->ps1[1]=t1;} // 804014C4
  {double t0=S(c->f[0]-c->f[6]), t1=S(c->ps1[0]-c->ps1[6]); c->f[2]=t0; c->ps1[2]=t1;} // 804014C8
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,1,ea,0,0);} // 804014CC
  {double t0=S(c->f[9]), t1=S(c->ps1[10]); c->f[0]=t0; c->ps1[0]=t1;} // 804014D0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804014D4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 804014D8
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,0,ea,0,0);} // 804014DC
  c->r[30]=0u+0xE0000000u; // 804014E0
  c->r[3]=R32(c->r[30]+0x00001CA4u); // 804014E4
  c->r[3]=c->r[3]+0x00000004u; // 804014E8
  W32(c->r[30]+0x00001CA4u,c->r[3]); // 804014EC
  c->r[0]=R32(c->r[30]+0x00001CA8u); // 804014F0
  cmpu(c,0,c->r[3],c->r[0]); // 804014F4
  if (crb(c,0)) { goto L_804015C4; } // 804014F8
  c->lr=0x80401500u; f_80402738(c); // 804014FC
  c->r[3]=R32(c->r[31]+0x000001B8u); // 80401500
  c->r[29]=R32(c->r[30]+0x00001CA8u); // 80401504
  cmps(c,0,(int32_t)c->r[3],1); // 80401508
  if (!crb(c,2)) { goto L_80401528; } // 8040150C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401510
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401514
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80401518
  c->ctr=c->r[12]; // 8040151C
  if (true) { c->lr=0x80401524u; dispatch(c,c->ctr); } // 80401520
  goto L_8040158C; // 80401524
L_80401528:;
  cmps(c,0,(int32_t)c->r[3],5); // 80401528
  if (!crb(c,2)) { goto L_80401548; } // 8040152C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401530
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401534
  c->r[12]=R32(c->r[12]+0x00000060u); // 80401538
  c->ctr=c->r[12]; // 8040153C
  if (true) { c->lr=0x80401544u; dispatch(c,c->ctr); } // 80401540
  goto L_8040158C; // 80401544
L_80401548:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80401548
  cmpu(c,0,c->r[0],0x00000001u); // 8040154C
  if (crb(c,1)) { goto L_8040156C; } // 80401550
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401554
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401558
  c->r[12]=R32(c->r[12]+0x00000064u); // 8040155C
  c->ctr=c->r[12]; // 80401560
  if (true) { c->lr=0x80401568u; dispatch(c,c->ctr); } // 80401564
  goto L_8040158C; // 80401568
L_8040156C:;
  cmps(c,0,(int32_t)c->r[3],4); // 8040156C
  if (!crb(c,2)) { goto L_8040158C; } // 80401570
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401574
  c->r[4]=0u+0x00000000u; // 80401578
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040157C
  c->r[12]=R32(c->r[12]+0x00000068u); // 80401580
  c->ctr=c->r[12]; // 80401584
  if (true) { c->lr=0x8040158Cu; dispatch(c,c->ctr); } // 80401588
L_8040158C:;
  c->r[3]=R32(c->r[31]+0x000001B4u); // 8040158C
  cmps(c,0,(int32_t)c->r[3],0); // 80401590
  if (crb(c,2)) { goto L_804015A8; } // 80401594
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401598
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8040159C
  c->ctr=c->r[12]; // 804015A0
  if (true) { c->lr=0x804015A8u; dispatch(c,c->ctr); } // 804015A4
L_804015A8:;
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 804015A8
  c->r[3]=0u+0x00000080u; // 804015AC
  c->r[4]=0u+0x00000006u; // 804015B0
  c->lr=0x804015B8u; f_80346130(c); // 804015B4
  c->r[3]=0u+0xE0000000u; // 804015B8
  c->r[0]=0u+0x00000000u; // 804015BC
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 804015C0
L_804015C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804015C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804015C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804015CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804015D0
  c->lr=c->r[0]; // 804015D4
  c->r[1]=c->r[1]+0x00000020u; // 804015D8
  return; // 804015DC
}

// fn_804015E0
void f_804015E0(Ctx* __restrict c) {
  trace_call(0x804015E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804015E0
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[1]=c->ps1[1]=RF32(ea);} // 804015E4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 804015E8
  c->r[7]=c->r[1]+0x00000018u; // 804015EC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 804015F0
  c->r[6]=c->r[1]+0x00000020u; // 804015F4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804015F8
  c->r[5]=c->r[1]+0x00000008u; // 804015FC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 80401600
  c->r[3]=c->r[1]+0x00000010u; // 80401604
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80401608
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8040160C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80401610
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80401614
  {uint32_t ea=c->r[2]+0xFFFFA9A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401618
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[6]);} // 8040161C
  {uint32_t ea=c->r[2]+0xFFFFA99Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80401620
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[7]);} // 80401624
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,6,ea,0,0);} // 80401628
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8040162C
  {uint32_t ea=c->r[2]+0xFFFFA9A0u; c->f[7]=c->ps1[7]=RF32(ea);} // 80401630
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 80401634
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,5,ea,0,0);} // 80401638
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8040163C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 80401640
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,0,0);} // 80401644
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80401648
  {double t0=S(c->f[6]-c->f[4]), t1=S(c->ps1[6]-c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 8040164C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 80401650
  {uint32_t ea=c->r[7]+0x00000000u; psq_store(c,3,ea,0,0);} // 80401654
  {double t0=S(c->f[5]-c->f[2]), t1=S(c->ps1[5]-c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80401658
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8040165C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80401660
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80401664
  {double t0=S(c->f[4]+c->ps1[4]), t1=S(c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 80401668
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 8040166C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80401670
  fcmp(c,0,c->f[2],c->f[0]); // 80401674
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80401678
  if (!crb(c,2)) { goto L_80401684; } // 8040167C
  goto L_804016A0; // 80401680
L_80401684:;
  c->f[0]=frsqrte(c->f[2]); // 80401684
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80401688
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[8]); // 8040168C
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[2],-c->f[7])); // 80401690
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80401694
  c->f[0]=(c->f[0]>=0.0)?c->f[0]:c->f[2]; // 80401698
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 8040169C
L_804016A0:;
  c->r[1]=c->r[1]+0x00000030u; // 804016A0
  return; // 804016A4
}

// fn_804016A8
void f_804016A8(Ctx* __restrict c) {
  trace_call(0x804016A8u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 804016A8
  c->r[0]=c->lr; // 804016AC
  W32(c->r[1]+0x000001A4u,c->r[0]); // 804016B0
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[31]);} // 804016B4
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,31,ea,0,0);} // 804016B8
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[30]);} // 804016BC
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,30,ea,0,0);} // 804016C0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[29]);} // 804016C4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,29,ea,0,0);} // 804016C8
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[28]);} // 804016CC
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,28,ea,0,0);} // 804016D0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[27]);} // 804016D4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,27,ea,0,0);} // 804016D8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[26]);} // 804016DC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,26,ea,0,0);} // 804016E0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[25]);} // 804016E4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,25,ea,0,0);} // 804016E8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[24]);} // 804016EC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,24,ea,0,0);} // 804016F0
  c->r[11]=c->r[1]+0x00000120u; // 804016F4
  c->lr=0x804016FCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 804016F8
  c->r[0]=0u+0x43300000u; // 804016FC
  W32(c->r[1]+0x000000D0u,c->r[0]); // 80401700
  c->r[26]=c->r[3]|c->r[3]; // 80401704
  c->r[27]=c->r[4]|c->r[4]; // 80401708
  W32(c->r[1]+0x000000D8u,c->r[0]); // 8040170C
  c->r[28]=c->r[5]|c->r[5]; // 80401710
  c->r[3]=c->r[1]+0x00000070u; // 80401714
  c->lr=0x8040171Cu; f_803F5A84(c); // 80401718
  c->r[3]=c->r[1]+0x00000088u; // 8040171C
  c->lr=0x80401724u; f_803F5A84(c); // 80401720
  c->r[3]=c->r[1]+0x000000A0u; // 80401724
  c->lr=0x8040172Cu; f_803F5A84(c); // 80401728
  c->r[3]=c->r[1]+0x000000B8u; // 8040172C
  c->lr=0x80401734u; f_803F5A84(c); // 80401730
  c->r[3]=c->r[1]+0x00000038u; // 80401734
  c->lr=0x8040173Cu; f_803E49FC(c); // 80401738
  c->r[4]=c->r[27]|c->r[27]; // 8040173C
  c->r[3]=c->r[1]+0x00000038u; // 80401740
  c->r[5]=c->r[27]+0x00000010u; // 80401744
  c->lr=0x8040174Cu; f_803E4A00(c); // 80401748
  c->r[3]=c->r[1]+0x00000038u; // 8040174C
  c->r[4]=c->r[27]+0x00000020u; // 80401750
  c->lr=0x80401758u; f_803E52F8(c); // 80401754
  c->r[3]=c->r[1]+0x00000070u; // 80401758
  c->r[4]=c->r[1]+0x00000038u; // 8040175C
  c->lr=0x80401764u; f_803F70A8(c); // 80401760
  {uint32_t ea=c->r[27]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401764
  c->r[4]=c->r[27]|c->r[27]; // 80401768
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 8040176C
  c->r[3]=c->r[1]+0x00000038u; // 80401770
  c->r[5]=c->r[27]+0x00000010u; // 80401774
  {uint32_t ea=c->r[27]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401778
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 8040177C
  c->lr=0x80401784u; f_803E531C(c); // 80401780
  c->r[3]=c->r[1]+0x00000038u; // 80401784
  c->r[4]=c->r[27]+0x00000020u; // 80401788
  c->lr=0x80401790u; f_803E52F8(c); // 8040178C
  c->r[3]=c->r[1]+0x00000088u; // 80401790
  c->r[4]=c->r[1]+0x00000038u; // 80401794
  c->lr=0x8040179Cu; f_803F70A8(c); // 80401798
  {uint32_t ea=c->r[27]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8040179C
  c->r[4]=c->r[27]|c->r[27]; // 804017A0
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 804017A4
  c->r[3]=c->r[1]+0x00000038u; // 804017A8
  c->r[5]=c->r[27]+0x00000010u; // 804017AC
  {uint32_t ea=c->r[27]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 804017B0
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 804017B4
  c->lr=0x804017BCu; f_803E4A00(c); // 804017B8
  c->r[3]=c->r[1]+0x00000038u; // 804017BC
  c->r[4]=c->r[27]+0x00000020u; // 804017C0
  c->lr=0x804017C8u; f_803E99D0(c); // 804017C4
  c->r[3]=c->r[1]+0x000000A0u; // 804017C8
  c->r[4]=c->r[1]+0x00000038u; // 804017CC
  c->lr=0x804017D4u; f_803F70A8(c); // 804017D0
  {uint32_t ea=c->r[27]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 804017D4
  c->r[4]=c->r[27]|c->r[27]; // 804017D8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 804017DC
  c->r[3]=c->r[1]+0x00000038u; // 804017E0
  c->r[5]=c->r[27]+0x00000010u; // 804017E4
  {uint32_t ea=c->r[27]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 804017E8
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 804017EC
  c->lr=0x804017F4u; f_803E531C(c); // 804017F0
  c->r[3]=c->r[1]+0x00000038u; // 804017F4
  c->r[4]=c->r[27]+0x00000020u; // 804017F8
  c->lr=0x80401800u; f_803E99D0(c); // 804017FC
  c->r[3]=c->r[1]+0x000000B8u; // 80401800
  c->r[4]=c->r[1]+0x00000038u; // 80401804
  c->lr=0x8040180Cu; f_803F70A8(c); // 80401808
  {uint32_t ea=c->r[27]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8040180C
  c->r[23]=c->r[1]+0x00000070u; // 80401810
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 80401814
  c->r[25]=0u+0x00000000u; // 80401818
  {uint32_t ea=c->r[27]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8040181C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80401820
L_80401824:;
  c->r[30]=c->r[25]|c->r[25]; // 80401824
  c->r[3]=c->r[23]|c->r[23]; // 80401828
  c->r[4]=c->r[28]|c->r[28]; // 8040182C
  c->lr=0x80401834u; f_804015E0(c); // 80401830
  c->r[29]=c->r[25]+0x00000001u; // 80401834
  c->f[25]=c->f[1]; // 80401838
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)24); // 8040183C
  c->r[24]=c->r[1]+0x00000070u; // 80401840
  c->r[24]=c->r[24]+c->r[0]; // 80401844
  goto L_8040187C; // 80401848
L_8040184C:;
  c->r[3]=c->r[24]|c->r[24]; // 8040184C
  c->r[4]=c->r[28]|c->r[28]; // 80401850
  c->lr=0x80401858u; f_804015E0(c); // 80401854
  fcmp(c,0,c->f[1],c->f[25]); // 80401858
  if (!crb(c,0)) { goto L_80401874; } // 8040185C
  c->r[30]=c->r[29]|c->r[29]; // 80401860
  c->r[3]=c->r[24]|c->r[24]; // 80401864
  c->r[4]=c->r[28]|c->r[28]; // 80401868
  c->lr=0x80401870u; f_804015E0(c); // 8040186C
  c->f[25]=c->f[1]; // 80401870
L_80401874:;
  c->r[24]=c->r[24]+0x00000018u; // 80401874
  c->r[29]=c->r[29]+0x00000001u; // 80401878
L_8040187C:;
  cmps(c,0,(int32_t)c->r[29],4); // 8040187C
  if (crb(c,0)) { IRQCHK(c); goto L_8040184C; } // 80401880
  c->r[4]=c->r[23]|c->r[23]; // 80401884
  c->r[3]=c->r[1]+0x00000058u; // 80401888
  c->lr=0x80401890u; f_80401CFC(c); // 8040188C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 80401890
  c->r[24]=c->r[1]+0x00000070u; // 80401894
  c->r[3]=c->r[23]|c->r[23]; // 80401898
  c->r[24]=c->r[24]+c->r[0]; // 8040189C
  c->r[4]=c->r[24]|c->r[24]; // 804018A0
  c->lr=0x804018A8u; f_80401D30(c); // 804018A4
  c->r[3]=c->r[24]|c->r[24]; // 804018A8
  c->r[4]=c->r[1]+0x00000058u; // 804018AC
  c->lr=0x804018B4u; f_80401D30(c); // 804018B0
  c->r[25]=c->r[25]+0x00000001u; // 804018B4
  c->r[23]=c->r[23]+0x00000018u; // 804018B8
  cmps(c,0,(int32_t)c->r[25],3); // 804018BC
  if (crb(c,0)) { IRQCHK(c); goto L_80401824; } // 804018C0
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[1]=c->ps1[1]=RF32(ea);} // 804018C4
  c->r[4]=c->r[28]|c->r[28]; // 804018C8
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[0]=c->ps1[0]=RF32(ea);} // 804018CC
  c->r[3]=c->r[1]+0x000000B8u; // 804018D0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 804018D4
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 804018D8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 804018DC
  c->lr=0x804018E4u; f_804015E0(c); // 804018E0
  c->f[25]=c->f[1]; // 804018E4
  c->r[4]=c->r[28]|c->r[28]; // 804018E8
  c->r[3]=c->r[1]+0x00000070u; // 804018EC
  c->lr=0x804018F4u; f_804015E0(c); // 804018F0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[25]); // 804018F4
  c->r[4]=c->r[28]|c->r[28]; // 804018F8
  c->r[3]=c->r[1]+0x000000B8u; // 804018FC
  c->f[26]=c->ps1[26]=S(c->f[26]/c->f[0]); // 80401900
  c->lr=0x80401908u; f_804015E0(c); // 80401904
  c->f[25]=c->f[1]; // 80401908
  c->r[4]=c->r[28]|c->r[28]; // 8040190C
  c->r[3]=c->r[1]+0x00000088u; // 80401910
  c->lr=0x80401918u; f_804015E0(c); // 80401914
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[25]); // 80401918
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8040191C
  c->r[4]=c->r[28]|c->r[28]; // 80401920
  c->r[3]=c->r[1]+0x000000B8u; // 80401924
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[1]); // 80401928
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8040192C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 80401930
  c->lr=0x80401938u; f_804015E0(c); // 80401934
  c->f[25]=c->f[1]; // 80401938
  c->r[4]=c->r[28]|c->r[28]; // 8040193C
  c->r[3]=c->r[1]+0x000000A0u; // 80401940
  c->lr=0x80401948u; f_804015E0(c); // 80401944
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[25]); // 80401948
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8040194C
  c->r[3]=c->r[1]+0x00000028u; // 80401950
  c->f[1]=c->ps1[1]=S(c->f[26]*c->f[1]); // 80401954
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80401958
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 8040195C
  c->lr=0x80401964u; f_803E49FC(c); // 80401960
  c->r[0]=R32(c->r[28]+0x00000000u); // 80401964
  cmps(c,0,(int32_t)c->r[0],1); // 80401968
  if (!crb(c,2)) { goto L_8040199C; } // 8040196C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80401970
  c->r[3]=c->r[1]+0x00000018u; // 80401974
  {uint32_t ea=c->r[28]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80401978
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8040197C
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[4]=c->ps1[4]=RF32(ea);} // 80401980
  c->lr=0x80401988u; f_803E54F4(c); // 80401984
  c->r[4]=c->r[3]|c->r[3]; // 80401988
  c->r[3]=c->r[1]+0x00000028u; // 8040198C
  c->lr=0x80401994u; f_803E53A0(c); // 80401990
  c->r[3]=c->r[1]+0x00000028u; // 80401994
  c->lr=0x8040199Cu; f_80401CE0(c); // 80401998
L_8040199C:;
  {uint32_t ea=c->r[2]+0xFFFFA9A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8040199C
  c->r[31]=c->r[1]+0x00000070u; // 804019A0
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[28]=c->ps1[28]=RF32(ea);} // 804019A4
  c->r[30]=c->r[1]+0x00000048u; // 804019A8
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[29]=c->ps1[29]=RF32(ea);} // 804019AC
  c->r[29]=0u+0x00000000u; // 804019B0
  {uint32_t ea=c->r[2]+0xFFFFA9B0u; c->f[30]=RF64(ea);} // 804019B4
  {uint32_t ea=c->r[2]+0xFFFFA9ACu; c->f[25]=c->ps1[25]=RF32(ea);} // 804019B8
L_804019BC:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 804019BC
  cmps(c,0,(int32_t)c->r[0],0); // 804019C0
  if (!crb(c,2)) { goto L_80401A04; } // 804019C4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 804019C8
  c->r[3]=c->r[1]+0x00000008u; // 804019CC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 804019D0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 804019D4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 804019D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 804019DC
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 804019E0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 804019E4
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[2]); // 804019E8
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[4]=c->ps1[4]=RF32(ea);} // 804019EC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 804019F0
  c->lr=0x804019F8u; f_803E54F4(c); // 804019F4
  c->r[4]=c->r[3]|c->r[3]; // 804019F8
  c->r[3]=c->r[1]+0x00000028u; // 804019FC
  c->lr=0x80401A04u; f_803E53A0(c); // 80401A00
L_80401A04:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80401A04
  cmps(c,0,(int32_t)c->r[0],0); // 80401A08
  if (!crb(c,2)) { goto L_80401A84; } // 80401A0C
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80401A10
  fcmp(c,0,c->f[0],c->f[28]); // 80401A14
  if (!crb(c,1)) { goto L_80401A7C; } // 80401A18
  c->r[3]=c->r[1]+0x00000028u; // 80401A1C
  c->lr=0x80401A24u; f_803E4A34(c); // 80401A20
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80401A24
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 80401A28
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[2]); // 80401A2C
  fcmp(c,0,c->f[3],c->f[28]); // 80401A30
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80401A34
  if (!crb(c,2)) { goto L_80401A44; } // 80401A38
  c->f[2]=c->f[28]; // 80401A3C
  goto L_80401A88; // 80401A40
L_80401A44:;
  fcmp(c,0,c->f[3],c->f[29]); // 80401A44
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80401A48
  if (!crb(c,2)) { goto L_80401A58; } // 80401A4C
  c->f[2]=c->f[29]; // 80401A50
  goto L_80401A88; // 80401A54
L_80401A58:;
  {uint32_t ea=c->r[28]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80401A58
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 80401A5C
  {uint32_t ea=c->r[28]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401A60
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 80401A64
  {uint32_t ea=c->r[28]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80401A68
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80401A6C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[3]); // 80401A70
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 80401A74
  goto L_80401A88; // 80401A78
L_80401A7C:;
  c->f[2]=c->f[28]; // 80401A7C
  goto L_80401A88; // 80401A80
L_80401A84:;
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[2]=c->ps1[2]=RF32(ea);} // 80401A84
L_80401A88:;
  c->r[5]=R32(c->r[28]+0x00000028u); // 80401A88
  c->r[3]=c->r[27]+0x00000040u; // 80401A8C
  c->r[6]=R32(c->r[28]+0x00000024u); // 80401A90
  c->r[0]=rotl(c->r[5],16)&0x000000FFu; // 80401A94
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80401A98
  c->r[4]=rotl(c->r[5],24)&0x000000FFu; // 80401A9C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80401AA0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 80401AA4
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 80401AA8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80401AAC
  W32(c->r[1]+0x000000DCu,c->r[4]); // 80401AB0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 80401AB4
  c->r[23]=rotl(c->r[6],16)&0x000000FFu; // 80401AB8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80401ABC
  c->r[24]=rotl(c->r[6],24)&0x000000FFu; // 80401AC0
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=RF64(ea);} // 80401AC4
  c->f[24]=c->ps1[24]=S(c->f[2]*c->f[3]); // 80401AC8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 80401ACC
  c->r[25]=rotl(c->r[6],0)&0x000000FFu; // 80401AD0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80401AD4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80401AD8
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[3]); // 80401ADC
  c->f[26]=c->ps1[26]=S(c->f[0]*c->f[3]); // 80401AE0
  c->lr=0x80401AE8u; f_803F5A7C(c); // 80401AE4
  c->lr=0x80401AECu; f_804012C0(c); // 80401AE8
  W32(c->r[1]+0x000000DCu,c->r[23]); // 80401AEC
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 80401AF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80401AF4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[24]); // 80401AF8
  fcmp(c,0,c->f[0],c->f[31]); // 80401AFC
  if (!crb(c,0)) { goto L_80401B18; } // 80401B00
  W32(c->r[1]+0x000000D4u,c->r[23]); // 80401B04
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 80401B08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80401B0C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[24]); // 80401B10
  goto L_80401B1C; // 80401B14
L_80401B18:;
  c->f[0]=c->f[31]; // 80401B18
L_80401B1C:;
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 80401B1C
  W32(c->r[1]+0x000000D4u,c->r[24]); // 80401B20
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80401B24
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 80401B28
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80401B2C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 80401B30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80401B34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[30]); // 80401B38
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[27]); // 80401B3C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80401B40
  fcmp(c,0,c->f[0],c->f[31]); // 80401B44
  if (!crb(c,0)) { goto L_80401B60; } // 80401B48
  W32(c->r[1]+0x000000DCu,c->r[24]); // 80401B4C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 80401B50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80401B54
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[27]); // 80401B58
  goto L_80401B64; // 80401B5C
L_80401B60:;
  c->f[0]=c->f[31]; // 80401B60
L_80401B64:;
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 80401B64
  W32(c->r[1]+0x000000DCu,c->r[25]); // 80401B68
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 80401B6C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80401B70
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=RF64(ea);} // 80401B74
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80401B78
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[30]); // 80401B7C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 80401B80
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 80401B84
  fcmp(c,0,c->f[0],c->f[31]); // 80401B88
  if (!crb(c,0)) { goto L_80401BA4; } // 80401B8C
  W32(c->r[1]+0x000000D4u,c->r[25]); // 80401B90
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 80401B94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80401B98
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 80401B9C
  goto L_80401BA8; // 80401BA0
L_80401BA4:;
  c->f[0]=c->f[31]; // 80401BA4
L_80401BA8:;
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 80401BA8
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80401BAC
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=RF64(ea);} // 80401BB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80401BB4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[25]); // 80401BB8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80401BBC
  fcmp(c,0,c->f[3],c->f[31]); // 80401BC0
  if (!crb(c,1)) { goto L_80401BCC; } // 80401BC4
  c->f[3]=c->f[31]; // 80401BC8
L_80401BCC:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[25]); // 80401BCC
  fcmp(c,0,c->f[4],c->f[31]); // 80401BD0
  if (!crb(c,1)) { goto L_80401BDC; } // 80401BD4
  c->f[4]=c->f[31]; // 80401BD8
L_80401BDC:;
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[25]); // 80401BDC
  fcmp(c,0,c->f[0],c->f[31]); // 80401BE0
  if (!crb(c,1)) { goto L_80401BEC; } // 80401BE4
  c->f[0]=c->f[31]; // 80401BE8
L_80401BEC:;
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80401BEC
  c->r[4]=rotl(c->r[3],0)&0xFF000000u; // 80401BF0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 80401BF4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80401BF8
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[2]);} // 80401BFC
  {uint32_t ea=c->r[1]+0x000000E8u; WF64(ea,c->f[1]);} // 80401C00
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80401C04
  c->r[3]=R32(c->r[1]+0x000000ECu); // 80401C08
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[0]);} // 80401C0C
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 80401C10
  c->r[3]=rotl(c->r[3],8)&0x0000FF00u; // 80401C14
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80401C18
  c->r[3]=c->r[5]+c->r[3]; // 80401C1C
  c->r[0]=rotl(c->r[0],16)&0x00FF0000u; // 80401C20
  c->r[0]=c->r[4]+c->r[0]; // 80401C24
  c->r[3]=c->r[3]+c->r[0]; // 80401C28
  c->lr=0x80401C30u; f_804012B8(c); // 80401C2C
  c->r[29]=c->r[29]+0x00000001u; // 80401C30
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80401C34
  cmps(c,0,(int32_t)c->r[29],4); // 80401C38
  c->r[31]=c->r[31]+0x00000018u; // 80401C3C
  c->r[30]=c->r[30]+0x00000004u; // 80401C40
  if (crb(c,0)) { IRQCHK(c); goto L_804019BC; } // 80401C44
  c->r[3]=c->r[26]|c->r[26]; // 80401C48
  c->lr=0x80401C50u; f_80402080(c); // 80401C4C
  c->r[3]=c->r[26]|c->r[26]; // 80401C50
  c->r[4]=c->r[1]+0x00000070u; // 80401C54
  c->lr=0x80401C5Cu; f_80401D64(c); // 80401C58
  c->r[3]=c->r[26]|c->r[26]; // 80401C5C
  c->r[4]=c->r[1]+0x00000088u; // 80401C60
  c->lr=0x80401C68u; f_80401D64(c); // 80401C64
  c->r[3]=c->r[26]|c->r[26]; // 80401C68
  c->r[4]=c->r[1]+0x000000A0u; // 80401C6C
  c->lr=0x80401C74u; f_80401D64(c); // 80401C70
  c->r[3]=c->r[26]|c->r[26]; // 80401C74
  c->r[4]=c->r[1]+0x000000B8u; // 80401C78
  c->lr=0x80401C80u; f_80401D64(c); // 80401C7C
  c->r[3]=c->r[26]|c->r[26]; // 80401C80
  c->lr=0x80401C88u; f_8040208C(c); // 80401C84
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,31,ea,0,0);} // 80401C88
  {uint32_t ea=c->r[1]+0x00000190u; c->f[31]=RF64(ea);} // 80401C8C
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,30,ea,0,0);} // 80401C90
  {uint32_t ea=c->r[1]+0x00000180u; c->f[30]=RF64(ea);} // 80401C94
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,29,ea,0,0);} // 80401C98
  {uint32_t ea=c->r[1]+0x00000170u; c->f[29]=RF64(ea);} // 80401C9C
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,28,ea,0,0);} // 80401CA0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[28]=RF64(ea);} // 80401CA4
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,27,ea,0,0);} // 80401CA8
  {uint32_t ea=c->r[1]+0x00000150u; c->f[27]=RF64(ea);} // 80401CAC
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,26,ea,0,0);} // 80401CB0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[26]=RF64(ea);} // 80401CB4
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,25,ea,0,0);} // 80401CB8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[25]=RF64(ea);} // 80401CBC
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,24,ea,0,0);} // 80401CC0
  c->r[11]=c->r[1]+0x00000120u; // 80401CC4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[24]=RF64(ea);} // 80401CC8
  c->lr=0x80401CD0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80401CCC
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80401CD0
  c->lr=c->r[0]; // 80401CD4
  c->r[1]=c->r[1]+0x000001A0u; // 80401CD8
  return; // 80401CDC
}

// fn_80401CE0
void f_80401CE0(Ctx* __restrict c) {
  trace_call(0x80401CE0u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 80401CE0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401CE4
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[1]=t0; c->ps1[1]=t1;} // 80401CE8
  c->f[0]=-c->f[0]; // 80401CEC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,0,0);} // 80401CF0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80401CF4
  return; // 80401CF8
}

// fn_80401CFC
void f_80401CFC(Ctx* __restrict c) {
  trace_call(0x80401CFCu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80401CFC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80401D00
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80401D04
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80401D08
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80401D0C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401D10
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 80401D14
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 80401D18
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 80401D1C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80401D20
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80401D24
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80401D28
  return; // 80401D2C
}

// fn_80401D30
void f_80401D30(Ctx* __restrict c) {
  trace_call(0x80401D30u);
  c->r[7]=R32(c->r[4]+0x00000000u); // 80401D30
  c->r[6]=R32(c->r[4]+0x00000004u); // 80401D34
  c->r[5]=R32(c->r[4]+0x00000008u); // 80401D38
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80401D3C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80401D40
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401D44
  W32(c->r[3]+0x00000000u,c->r[7]); // 80401D48
  W32(c->r[3]+0x00000004u,c->r[6]); // 80401D4C
  W32(c->r[3]+0x00000008u,c->r[5]); // 80401D50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80401D54
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80401D58
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80401D5C
  return; // 80401D60
}

// fn_80401D64
void f_80401D64(Ctx* __restrict c) {
  trace_call(0x80401D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80401D64
  c->r[0]=c->lr; // 80401D68
  c->r[5]=0u+0xE0000000u; // 80401D6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80401D70
  c->r[6]=c->r[1]+0x00000008u; // 80401D74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80401D78
  c->r[31]=c->r[3]|c->r[3]; // 80401D7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80401D80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80401D84
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80401D88
  W32(c->r[1]+0x00000008u,c->r[0]); // 80401D8C
  c->r[3]=R32(c->r[3]+0x000001B8u); // 80401D90
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401D94
  {uint32_t ea=c->r[5]+0x00001DD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80401D98
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80401D9C
  c->r[0]=cntlz(c->r[0]); // 80401DA0
  {uint32_t ea=c->r[5]+0x00001DE0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80401DA4
  fcmp(c,0,c->f[0],c->f[1]); // 80401DA8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80401DAC
  if (!crb(c,0)) { goto L_80401E0C; } // 80401DB0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80401DB4
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[1]=c->ps1[1]=RF32(ea);} // 80401DB8
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401DBC
  cmps(c,0,(int32_t)c->r[0],0); // 80401DC0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80401DC4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 80401DC8
  c->f[2]=(c->f[3]>=0.0)?c->f[2]:c->f[1]; // 80401DCC
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 80401DD0
  c->f[2]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 80401DD4
  if (crb(c,2)) { goto L_80401DFC; } // 80401DD8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 80401DDC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,0,2);} // 80401DE0
  {uint32_t ea=c->r[6]+0x00000002u; psq_load(c,1,ea,0,2);} // 80401DE4
  {double t0=S(c->f[0]*c->f[2]), t1=S(c->ps1[0]*c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 80401DE8
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80401DEC
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,0,ea,0,2);} // 80401DF0
  {uint32_t ea=c->r[6]+0x00000002u; psq_store(c,1,ea,1,2);} // 80401DF4
  goto L_80401E0C; // 80401DF8
L_80401DFC:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80401DFC
  {uint32_t ea=c->r[6]+0x00000003u; psq_load(c,0,ea,1,2);} // 80401E00
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80401E04
  {uint32_t ea=c->r[6]+0x00000003u; psq_store(c,0,ea,1,2);} // 80401E08
L_80401E0C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80401E0C
  cmps(c,0,(int32_t)c->r[3],1); // 80401E10
  c->r[7]=c->r[0]|c->r[0]; // 80401E14
  if (crb(c,2)) { goto L_80401EB8; } // 80401E18
  c->r[3]=0u+0xE0000000u; // 80401E1C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 80401E20
  c->r[5]=c->r[3]+0x00001C20u; // 80401E24
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 80401E28
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 80401E2C
  c->r[5]=c->r[3]+0x00001C28u; // 80401E30
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 80401E34
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80401E38
  {uint32_t ea=c->r[3]+0x00001C14u; c->f[5]=c->ps1[5]=RF32(ea);} // 80401E3C
  {uint32_t ea=c->r[3]+0x00001C10u; c->f[4]=c->ps1[4]=RF32(ea);} // 80401E40
  {double t0=S(c->f[0]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80401E44
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[3],c->f[1],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80401E48
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80401E4C
  fcmp(c,0,c->f[0],c->f[5]); // 80401E50
  if (crb(c,1)) { goto L_80401E64; } // 80401E54
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[2]=c->ps1[2]=RF32(ea);} // 80401E58
  fcmp(c,0,c->f[0],c->f[2]); // 80401E5C
  if (!crb(c,0)) { goto L_80401E6C; } // 80401E60
L_80401E64:;
  c->r[7]=0u+0x00000000u; // 80401E64
  goto L_80401EB8; // 80401E68
L_80401E6C:;
  fcmp(c,0,c->f[0],c->f[4]); // 80401E6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80401E70
  if (!crb(c,2)) { goto L_80401EB8; } // 80401E74
  c->r[5]=c->r[4]+0x0000000Fu; // 80401E78
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,1,2); c->r[5]=ea;} // 80401E7C
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[0]); // 80401E80
  {uint32_t ea=c->r[3]+0x00001C18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80401E84
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80401E88
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80401E8C
  fcmp(c,0,c->f[3],c->f[2]); // 80401E90
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80401E94
  if (!crb(c,2)) { goto L_80401EA4; } // 80401E98
  c->r[7]=0u+0x00000000u; // 80401E9C
  goto L_80401EB8; // 80401EA0
L_80401EA4:;
  {double t0=S(c->f[3]), t1=S(c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80401EA4
  c->r[5]=c->r[3]+0x00001C1Cu; // 80401EA8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,1,2);} // 80401EAC
  c->r[7]=R8(c->r[3]+0x00001C1Cu); // 80401EB0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 80401EB4
L_80401EB8:;
  c->r[30]=0u+0xE0000000u; // 80401EB8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 80401EBC
  c->r[5]=R32(c->r[30]+0x00001CA0u); // 80401EC0
  c->r[3]=0u+0xCC010000u; // 80401EC4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80401EC8
  c->r[0]=0u+0xFFFF8000u; // 80401ECC
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 80401ED0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 80401ED4
  c->r[5]=c->r[5]+0x00000001u; // 80401ED8
  c->r[4]=rotl(c->r[5],0)&0x00000001u; // 80401EDC
  W32(c->r[30]+0x00001CA0u,c->r[4]); // 80401EE0
  c->r[5]=c->r[6]+0xE0000000u; // 80401EE4
  c->r[5]=c->r[5]+0x00001C70u; // 80401EE8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 80401EEC
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 80401EF0
  W32(c->r[5]+0x0000000Cu,c->r[7]); // 80401EF4
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,2,ea,0,0);} // 80401EF8
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,0,ea,0,0);} // 80401EFC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80401F00
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 80401F04
  {uint32_t ea=c->r[3]+c->r[0]; psq_store(c,2,ea,0,0);} // 80401F08
  c->r[3]=R32(c->r[30]+0x00001CA4u); // 80401F0C
  c->r[3]=c->r[3]+0x00000001u; // 80401F10
  W32(c->r[30]+0x00001CA4u,c->r[3]); // 80401F14
  c->r[0]=R32(c->r[30]+0x00001CA8u); // 80401F18
  cmpu(c,0,c->r[3],c->r[0]); // 80401F1C
  if (crb(c,0)) { goto L_80402064; } // 80401F20
  c->lr=0x80401F28u; f_80402600(c); // 80401F24
  c->r[3]=R32(c->r[31]+0x000001B8u); // 80401F28
  c->r[29]=R32(c->r[30]+0x00001CA8u); // 80401F2C
  cmps(c,0,(int32_t)c->r[3],1); // 80401F30
  if (!crb(c,2)) { goto L_80401F50; } // 80401F34
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401F38
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401F3C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80401F40
  c->ctr=c->r[12]; // 80401F44
  if (true) { c->lr=0x80401F4Cu; dispatch(c,c->ctr); } // 80401F48
  goto L_80401FB4; // 80401F4C
L_80401F50:;
  cmps(c,0,(int32_t)c->r[3],5); // 80401F50
  if (!crb(c,2)) { goto L_80401F70; } // 80401F54
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401F58
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401F5C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80401F60
  c->ctr=c->r[12]; // 80401F64
  if (true) { c->lr=0x80401F6Cu; dispatch(c,c->ctr); } // 80401F68
  goto L_80401FB4; // 80401F6C
L_80401F70:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80401F70
  cmpu(c,0,c->r[0],0x00000001u); // 80401F74
  if (crb(c,1)) { goto L_80401F94; } // 80401F78
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401F7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401F80
  c->r[12]=R32(c->r[12]+0x00000064u); // 80401F84
  c->ctr=c->r[12]; // 80401F88
  if (true) { c->lr=0x80401F90u; dispatch(c,c->ctr); } // 80401F8C
  goto L_80401FB4; // 80401F90
L_80401F94:;
  cmps(c,0,(int32_t)c->r[3],4); // 80401F94
  if (!crb(c,2)) { goto L_80401FB4; } // 80401F98
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80401F9C
  c->r[4]=0u+0x00000000u; // 80401FA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401FA4
  c->r[12]=R32(c->r[12]+0x00000068u); // 80401FA8
  c->ctr=c->r[12]; // 80401FAC
  if (true) { c->lr=0x80401FB4u; dispatch(c,c->ctr); } // 80401FB0
L_80401FB4:;
  c->r[3]=R32(c->r[31]+0x000001B4u); // 80401FB4
  cmps(c,0,(int32_t)c->r[3],0); // 80401FB8
  if (crb(c,2)) { goto L_80401FD0; } // 80401FBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80401FC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80401FC4
  c->ctr=c->r[12]; // 80401FC8
  if (true) { c->lr=0x80401FD0u; dispatch(c,c->ctr); } // 80401FCC
L_80401FD0:;
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 80401FD0
  c->r[3]=0u+0x00000098u; // 80401FD4
  c->r[4]=0u+0x00000006u; // 80401FD8
  c->lr=0x80401FE0u; f_80346130(c); // 80401FDC
  c->r[6]=0u+0xE0000000u; // 80401FE0
  c->r[0]=0u+0x00000000u; // 80401FE4
  W32(c->r[6]+0x00001CA4u,c->r[0]); // 80401FE8
  c->r[5]=0u+0xCC010000u; // 80401FEC
  c->r[4]=0u+0xFFFF8000u; // 80401FF0
  c->r[0]=R32(c->r[6]+0x00001CA0u); // 80401FF4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80401FF8
  c->r[3]=c->r[3]+0xE0000000u; // 80401FFC
  {uint32_t ea=c->r[3]+0x00001C78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80402000
  c->r[7]=R32(c->r[3]+0x00001C7Cu); // 80402004
  c->r[3]=c->r[3]+0x00001C70u; // 80402008
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 8040200C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80402010
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402014
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80402018
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 8040201C
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,2,ea,0,0);} // 80402020
  c->r[0]=cntlz(c->r[0]); // 80402024
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80402028
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8040202C
  c->r[3]=c->r[3]+0xE0000000u; // 80402030
  {uint32_t ea=c->r[3]+0x00001C78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80402034
  c->r[0]=R32(c->r[3]+0x00001C7Cu); // 80402038
  c->r[3]=c->r[3]+0x00001C70u; // 8040203C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 80402040
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80402044
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402048
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8040204C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80402050
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,2,ea,0,0);} // 80402054
  c->r[3]=R32(c->r[6]+0x00001CA4u); // 80402058
  c->r[0]=c->r[3]+0x00000002u; // 8040205C
  W32(c->r[6]+0x00001CA4u,c->r[0]); // 80402060
L_80402064:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80402064
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80402068
  c->r[30]=R32(c->r[1]+0x00000018u); // 8040206C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80402070
  c->lr=c->r[0]; // 80402074
  c->r[1]=c->r[1]+0x00000020u; // 80402078
  return; // 8040207C
}

// fn_80402080
void f_80402080(Ctx* __restrict c) {
  trace_call(0x80402080u);
  c->r[0]=0u+0x00000001u; // 80402080
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80402084
  return; // 80402088
}

// fn_8040208C
void f_8040208C(Ctx* __restrict c) {
  trace_call(0x8040208Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8040208C
  c->r[0]=c->lr; // 80402090
  W32(c->r[1]+0x00000014u,c->r[0]); // 80402094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80402098
  c->r[31]=c->r[3]|c->r[3]; // 8040209C
  c->r[4]=R32(c->r[3]+0x000001B0u); // 804020A0
  cmps(c,0,(int32_t)c->r[4],0); // 804020A4
  if (crb(c,2)) { goto L_80402194; } // 804020A8
  c->r[0]=R32(c->r[3]+0x000001A8u); // 804020AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 804020B0
  if (!crb(c,2)) { goto L_80402114; } // 804020B4
  c->r[0]=R32(c->r[3]+0x000001A4u); // 804020B8
  cmps(c,0,(int32_t)c->r[0],0); // 804020BC
  if (crb(c,2)) { goto L_804020E0; } // 804020C0
  c->r[3]=R32(c->r[3]+0x000001A0u); // 804020C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804020C8
  c->r[12]=R32(c->r[12]+0x00000010u); // 804020CC
  c->ctr=c->r[12]; // 804020D0
  if (true) { c->lr=0x804020D8u; dispatch(c,c->ctr); } // 804020D4
  c->r[0]=0u+0x00000000u; // 804020D8
  W32(c->r[31]+0x000001A4u,c->r[0]); // 804020DC
L_804020E0:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804020E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804020E4
  c->r[12]=R32(c->r[12]+0x00000054u); // 804020E8
  c->ctr=c->r[12]; // 804020EC
  if (true) { c->lr=0x804020F4u; dispatch(c,c->ctr); } // 804020F0
  c->r[0]=R32(c->r[31]+0x000001A8u); // 804020F4
  c->r[4]=c->r[0]+c->r[3]; // 804020F8
  W32(c->r[31]+0x000001A8u,c->r[4]); // 804020FC
  c->r[3]=R32(c->r[31]+0x000001A0u); // 80402100
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402104
  c->r[12]=R32(c->r[12]+0x00000018u); // 80402108
  c->ctr=c->r[12]; // 8040210C
  if (true) { c->lr=0x80402114u; dispatch(c,c->ctr); } // 80402110
L_80402114:;
  c->r[0]=R32(c->r[31]+0x000001A4u); // 80402114
  cmps(c,0,(int32_t)c->r[0],0); // 80402118
  if (!crb(c,2)) { goto L_80402140; } // 8040211C
  c->r[3]=R32(c->r[31]+0x000001A0u); // 80402120
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402124
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80402128
  c->ctr=c->r[12]; // 8040212C
  if (true) { c->lr=0x80402134u; dispatch(c,c->ctr); } // 80402130
  c->r[0]=0u+0x00000001u; // 80402134
  W32(c->r[31]+0x000001ACu,c->r[3]); // 80402138
  W32(c->r[31]+0x000001A4u,c->r[0]); // 8040213C
L_80402140:;
  c->r[3]=R32(c->r[31]+0x000001B0u); // 80402140
  c->r[6]=R32(c->r[31]+0x000001ACu); // 80402144
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80402148
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8040214C
  c->r[5]=c->r[6]+c->r[0]; // 80402150
  c->r[0]=R32(c->r[5]+0x00000004u); // 80402154
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 80402158
  c->r[3]=R32(c->r[5]+0x00000000u); // 8040215C
  {uint32_t ea=c->r[4]+c->r[6]; W32(ea,c->r[3]); c->r[4]=ea;} // 80402160
  W32(c->r[4]+0x00000004u,c->r[0]); // 80402164
  c->r[0]=R32(c->r[5]+0x00000008u); // 80402168
  W32(c->r[4]+0x00000008u,c->r[0]); // 8040216C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80402170
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80402174
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80402178
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8040217C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80402180
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 80402184
  c->r[3]=R32(c->r[31]+0x000001B0u); // 80402188
  c->r[0]=c->r[3]+0x00000001u; // 8040218C
  W32(c->r[31]+0x000001B0u,c->r[0]); // 80402190
L_80402194:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80402194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80402198
  c->lr=c->r[0]; // 8040219C
  c->r[1]=c->r[1]+0x00000010u; // 804021A0
  return; // 804021A4
}

// fn_804021A8
void f_804021A8(Ctx* __restrict c) {
  trace_call(0x804021A8u);
  c->r[5]=R32(c->r[3]+0x00000198u); // 804021A8
  cmps(c,0,(int32_t)c->r[5],0); // 804021AC
  if (!crb(c,2)) { goto L_804021CC; } // 804021B0
  W32(c->r[3]+0x00000198u,c->r[4]); // 804021B4
  c->r[0]=0u+0x00000000u; // 804021B8
  W32(c->r[3]+0x00000194u,c->r[4]); // 804021BC
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 804021C0
  W32(c->r[4]+0x00000040u,c->r[0]); // 804021C4
  return; // 804021C8
L_804021CC:;
  W32(c->r[5]+0x00000040u,c->r[4]); // 804021CC
  c->r[0]=R32(c->r[3]+0x00000198u); // 804021D0
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 804021D4
  W32(c->r[3]+0x00000198u,c->r[4]); // 804021D8
  return; // 804021DC
}

// fn_804021E0
void f_804021E0(Ctx* __restrict c) {
  trace_call(0x804021E0u);
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 804021E0
  cmps(c,0,(int32_t)c->r[5],0); // 804021E4
  if (!crb(c,2)) { goto L_804021F8; } // 804021E8
  c->r[0]=R32(c->r[4]+0x00000040u); // 804021EC
  W32(c->r[3]+0x00000194u,c->r[0]); // 804021F0
  goto L_80402200; // 804021F4
L_804021F8:;
  c->r[0]=R32(c->r[4]+0x00000040u); // 804021F8
  W32(c->r[5]+0x00000040u,c->r[0]); // 804021FC
L_80402200:;
  c->r[5]=R32(c->r[4]+0x00000040u); // 80402200
  cmps(c,0,(int32_t)c->r[5],0); // 80402204
  if (!crb(c,2)) { goto L_80402218; } // 80402208
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8040220C
  W32(c->r[3]+0x00000198u,c->r[0]); // 80402210
  goto L_80402220; // 80402214
L_80402218:;
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 80402218
  W32(c->r[5]+0x0000003Cu,c->r[0]); // 8040221C
L_80402220:;
  c->r[0]=0u+0x00000000u; // 80402220
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 80402224
  W32(c->r[4]+0x00000040u,c->r[0]); // 80402228
  return; // 8040222C
}

// fn_80402230
void f_80402230(Ctx* __restrict c) {
  trace_call(0x80402230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80402230
  c->r[0]=c->lr; // 80402234
  W32(c->r[1]+0x00000024u,c->r[0]); // 80402238
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8040223C
  c->r[31]=c->r[5]|c->r[5]; // 80402240
  W32(c->r[1]+0x00000018u,c->r[30]); // 80402244
  c->r[30]=c->r[4]|c->r[4]; // 80402248
  W32(c->r[1]+0x00000014u,c->r[29]); // 8040224C
  c->r[29]=c->r[3]|c->r[3]; // 80402250
  c->r[0]=R32(c->r[13]+0xFFFFF470u); // 80402254
  cmps(c,0,(int32_t)c->r[0],0); // 80402258
  if (!crb(c,2)) { goto L_80402414; } // 8040225C
  cmps(c,0,(int32_t)c->r[4],0); // 80402260
  if (crb(c,2)) { goto L_80402334; } // 80402264
  c->r[4]=0u+0xE0000000u; // 80402268
  W32(c->r[4]+0x00001CA8u,c->r[5]); // 8040226C
  c->r[3]=R32(c->r[3]+0x000001B8u); // 80402270
  cmps(c,0,(int32_t)c->r[3],1); // 80402274
  if (!crb(c,2)) { goto L_80402294; } // 80402278
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040227C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402280
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80402284
  c->ctr=c->r[12]; // 80402288
  if (true) { c->lr=0x80402290u; dispatch(c,c->ctr); } // 8040228C
  goto L_804022F8; // 80402290
L_80402294:;
  cmps(c,0,(int32_t)c->r[3],5); // 80402294
  if (!crb(c,2)) { goto L_804022B4; } // 80402298
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040229C
  c->r[12]=R32(c->r[3]+0x00000000u); // 804022A0
  c->r[12]=R32(c->r[12]+0x00000060u); // 804022A4
  c->ctr=c->r[12]; // 804022A8
  if (true) { c->lr=0x804022B0u; dispatch(c,c->ctr); } // 804022AC
  goto L_804022F8; // 804022B0
L_804022B4:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 804022B4
  cmpu(c,0,c->r[0],0x00000001u); // 804022B8
  if (crb(c,1)) { goto L_804022D8; } // 804022BC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804022C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804022C4
  c->r[12]=R32(c->r[12]+0x00000064u); // 804022C8
  c->ctr=c->r[12]; // 804022CC
  if (true) { c->lr=0x804022D4u; dispatch(c,c->ctr); } // 804022D0
  goto L_804022F8; // 804022D4
L_804022D8:;
  cmps(c,0,(int32_t)c->r[3],4); // 804022D8
  if (!crb(c,2)) { goto L_804022F8; } // 804022DC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804022E0
  c->r[4]=0u+0x00000000u; // 804022E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804022E8
  c->r[12]=R32(c->r[12]+0x00000068u); // 804022EC
  c->ctr=c->r[12]; // 804022F0
  if (true) { c->lr=0x804022F8u; dispatch(c,c->ctr); } // 804022F4
L_804022F8:;
  c->r[3]=R32(c->r[29]+0x000001B4u); // 804022F8
  cmps(c,0,(int32_t)c->r[3],0); // 804022FC
  if (crb(c,2)) { goto L_80402314; } // 80402300
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402304
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80402308
  c->ctr=c->r[12]; // 8040230C
  if (true) { c->lr=0x80402314u; dispatch(c,c->ctr); } // 80402310
L_80402314:;
  c->r[5]=rotl(c->r[31],0)&0x0000FFFFu; // 80402314
  c->r[3]=0u+0x00000080u; // 80402318
  c->r[4]=0u+0x00000006u; // 8040231C
  c->lr=0x80402324u; f_80346130(c); // 80402320
  c->r[3]=0u+0xE0000000u; // 80402324
  c->r[0]=0u+0x00000000u; // 80402328
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 8040232C
  goto L_804023FC; // 80402330
L_80402334:;
  c->r[4]=0u+0xE0000000u; // 80402334
  W32(c->r[4]+0x00001CA8u,c->r[5]); // 80402338
  c->r[3]=R32(c->r[3]+0x000001B8u); // 8040233C
  cmps(c,0,(int32_t)c->r[3],1); // 80402340
  if (!crb(c,2)) { goto L_80402360; } // 80402344
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402348
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040234C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80402350
  c->ctr=c->r[12]; // 80402354
  if (true) { c->lr=0x8040235Cu; dispatch(c,c->ctr); } // 80402358
  goto L_804023C4; // 8040235C
L_80402360:;
  cmps(c,0,(int32_t)c->r[3],5); // 80402360
  if (!crb(c,2)) { goto L_80402380; } // 80402364
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402368
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040236C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80402370
  c->ctr=c->r[12]; // 80402374
  if (true) { c->lr=0x8040237Cu; dispatch(c,c->ctr); } // 80402378
  goto L_804023C4; // 8040237C
L_80402380:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80402380
  cmpu(c,0,c->r[0],0x00000001u); // 80402384
  if (crb(c,1)) { goto L_804023A4; } // 80402388
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040238C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402390
  c->r[12]=R32(c->r[12]+0x00000064u); // 80402394
  c->ctr=c->r[12]; // 80402398
  if (true) { c->lr=0x804023A0u; dispatch(c,c->ctr); } // 8040239C
  goto L_804023C4; // 804023A0
L_804023A4:;
  cmps(c,0,(int32_t)c->r[3],4); // 804023A4
  if (!crb(c,2)) { goto L_804023C4; } // 804023A8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804023AC
  c->r[4]=0u+0x00000000u; // 804023B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804023B4
  c->r[12]=R32(c->r[12]+0x00000068u); // 804023B8
  c->ctr=c->r[12]; // 804023BC
  if (true) { c->lr=0x804023C4u; dispatch(c,c->ctr); } // 804023C0
L_804023C4:;
  c->r[3]=R32(c->r[29]+0x000001B4u); // 804023C4
  cmps(c,0,(int32_t)c->r[3],0); // 804023C8
  if (crb(c,2)) { goto L_804023E0; } // 804023CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804023D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804023D4
  c->ctr=c->r[12]; // 804023D8
  if (true) { c->lr=0x804023E0u; dispatch(c,c->ctr); } // 804023DC
L_804023E0:;
  c->r[5]=rotl(c->r[31],0)&0x0000FFFFu; // 804023E0
  c->r[3]=0u+0x00000098u; // 804023E4
  c->r[4]=0u+0x00000006u; // 804023E8
  c->lr=0x804023F0u; f_80346130(c); // 804023EC
  c->r[3]=0u+0xE0000000u; // 804023F0
  c->r[0]=0u+0x00000000u; // 804023F4
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 804023F8
L_804023FC:;
  W32(c->r[13]+0xFFFFF474u,c->r[30]); // 804023FC
  c->r[3]=0u+0xE0000000u; // 80402400
  c->r[0]=0u+0x00000000u; // 80402404
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 80402408
  W32(c->r[13]+0xFFFFF470u,c->r[29]); // 8040240C
  goto L_804025E4; // 80402410
L_80402414:;
  cmpu(c,0,c->r[0],c->r[3]); // 80402414
  if (!crb(c,2)) { goto L_80402428; } // 80402418
  c->r[0]=R32(c->r[13]+0xFFFFF474u); // 8040241C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80402420
  if (crb(c,2)) { goto L_804025E4; } // 80402424
L_80402428:;
  c->r[0]=R32(c->r[13]+0xFFFFF474u); // 80402428
  cmps(c,0,(int32_t)c->r[0],0); // 8040242C
  if (crb(c,2)) { goto L_8040243C; } // 80402430
  c->lr=0x80402438u; f_80402738(c); // 80402434
  goto L_80402440; // 80402438
L_8040243C:;
  c->lr=0x80402440u; f_80402600(c); // 8040243C
L_80402440:;
  cmps(c,0,(int32_t)c->r[30],0); // 80402440
  if (crb(c,2)) { goto L_80402514; } // 80402444
  c->r[3]=0u+0xE0000000u; // 80402448
  W32(c->r[3]+0x00001CA8u,c->r[31]); // 8040244C
  c->r[3]=R32(c->r[29]+0x000001B8u); // 80402450
  cmps(c,0,(int32_t)c->r[3],1); // 80402454
  if (!crb(c,2)) { goto L_80402474; } // 80402458
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040245C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402460
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80402464
  c->ctr=c->r[12]; // 80402468
  if (true) { c->lr=0x80402470u; dispatch(c,c->ctr); } // 8040246C
  goto L_804024D8; // 80402470
L_80402474:;
  cmps(c,0,(int32_t)c->r[3],5); // 80402474
  if (!crb(c,2)) { goto L_80402494; } // 80402478
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040247C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402480
  c->r[12]=R32(c->r[12]+0x00000060u); // 80402484
  c->ctr=c->r[12]; // 80402488
  if (true) { c->lr=0x80402490u; dispatch(c,c->ctr); } // 8040248C
  goto L_804024D8; // 80402490
L_80402494:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80402494
  cmpu(c,0,c->r[0],0x00000001u); // 80402498
  if (crb(c,1)) { goto L_804024B8; } // 8040249C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804024A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804024A4
  c->r[12]=R32(c->r[12]+0x00000064u); // 804024A8
  c->ctr=c->r[12]; // 804024AC
  if (true) { c->lr=0x804024B4u; dispatch(c,c->ctr); } // 804024B0
  goto L_804024D8; // 804024B4
L_804024B8:;
  cmps(c,0,(int32_t)c->r[3],4); // 804024B8
  if (!crb(c,2)) { goto L_804024D8; } // 804024BC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804024C0
  c->r[4]=0u+0x00000000u; // 804024C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 804024C8
  c->r[12]=R32(c->r[12]+0x00000068u); // 804024CC
  c->ctr=c->r[12]; // 804024D0
  if (true) { c->lr=0x804024D8u; dispatch(c,c->ctr); } // 804024D4
L_804024D8:;
  c->r[3]=R32(c->r[29]+0x000001B4u); // 804024D8
  cmps(c,0,(int32_t)c->r[3],0); // 804024DC
  if (crb(c,2)) { goto L_804024F4; } // 804024E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804024E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804024E8
  c->ctr=c->r[12]; // 804024EC
  if (true) { c->lr=0x804024F4u; dispatch(c,c->ctr); } // 804024F0
L_804024F4:;
  c->r[5]=rotl(c->r[31],0)&0x0000FFFFu; // 804024F4
  c->r[3]=0u+0x00000080u; // 804024F8
  c->r[4]=0u+0x00000006u; // 804024FC
  c->lr=0x80402504u; f_80346130(c); // 80402500
  c->r[3]=0u+0xE0000000u; // 80402504
  c->r[0]=0u+0x00000000u; // 80402508
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 8040250C
  goto L_804025DC; // 80402510
L_80402514:;
  c->r[3]=0u+0xE0000000u; // 80402514
  W32(c->r[3]+0x00001CA8u,c->r[31]); // 80402518
  c->r[3]=R32(c->r[29]+0x000001B8u); // 8040251C
  cmps(c,0,(int32_t)c->r[3],1); // 80402520
  if (!crb(c,2)) { goto L_80402540; } // 80402524
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402528
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040252C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80402530
  c->ctr=c->r[12]; // 80402534
  if (true) { c->lr=0x8040253Cu; dispatch(c,c->ctr); } // 80402538
  goto L_804025A4; // 8040253C
L_80402540:;
  cmps(c,0,(int32_t)c->r[3],5); // 80402540
  if (!crb(c,2)) { goto L_80402560; } // 80402544
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402548
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040254C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80402550
  c->ctr=c->r[12]; // 80402554
  if (true) { c->lr=0x8040255Cu; dispatch(c,c->ctr); } // 80402558
  goto L_804025A4; // 8040255C
L_80402560:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80402560
  cmpu(c,0,c->r[0],0x00000001u); // 80402564
  if (crb(c,1)) { goto L_80402584; } // 80402568
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040256C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402570
  c->r[12]=R32(c->r[12]+0x00000064u); // 80402574
  c->ctr=c->r[12]; // 80402578
  if (true) { c->lr=0x80402580u; dispatch(c,c->ctr); } // 8040257C
  goto L_804025A4; // 80402580
L_80402584:;
  cmps(c,0,(int32_t)c->r[3],4); // 80402584
  if (!crb(c,2)) { goto L_804025A4; } // 80402588
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 8040258C
  c->r[4]=0u+0x00000000u; // 80402590
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402594
  c->r[12]=R32(c->r[12]+0x00000068u); // 80402598
  c->ctr=c->r[12]; // 8040259C
  if (true) { c->lr=0x804025A4u; dispatch(c,c->ctr); } // 804025A0
L_804025A4:;
  c->r[3]=R32(c->r[29]+0x000001B4u); // 804025A4
  cmps(c,0,(int32_t)c->r[3],0); // 804025A8
  if (crb(c,2)) { goto L_804025C0; } // 804025AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804025B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 804025B4
  c->ctr=c->r[12]; // 804025B8
  if (true) { c->lr=0x804025C0u; dispatch(c,c->ctr); } // 804025BC
L_804025C0:;
  c->r[5]=rotl(c->r[31],0)&0x0000FFFFu; // 804025C0
  c->r[3]=0u+0x00000098u; // 804025C4
  c->r[4]=0u+0x00000006u; // 804025C8
  c->lr=0x804025D0u; f_80346130(c); // 804025CC
  c->r[3]=0u+0xE0000000u; // 804025D0
  c->r[0]=0u+0x00000000u; // 804025D4
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 804025D8
L_804025DC:;
  W32(c->r[13]+0xFFFFF470u,c->r[29]); // 804025DC
  W32(c->r[13]+0xFFFFF474u,c->r[30]); // 804025E0
L_804025E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 804025E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 804025E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 804025EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 804025F0
  c->lr=c->r[0]; // 804025F4
  c->r[1]=c->r[1]+0x00000020u; // 804025F8
  return; // 804025FC
}

// fn_80402600
void f_80402600(Ctx* __restrict c) {
  trace_call(0x80402600u);
  c->r[3]=0u+0xE0000000u; // 80402600
  c->r[4]=R32(c->r[3]+0x00001CA4u); // 80402604
  c->r[5]=R32(c->r[3]+0x00001CA8u); // 80402608
  cmpu(c,0,c->r[4],c->r[5]); // 8040260C
  if (!crb(c,0)) { goto L_80402728; } // 80402610
  c->r[0]=R32(c->r[3]+0x00001CA0u); // 80402614
  c->r[7]=c->r[5]-c->r[4]; cr0(c,c->r[7]); // 80402618
  c->r[8]=0u+0x00000000u; // 8040261C
  c->r[0]=cntlz(c->r[0]); // 80402620
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80402624
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80402628
  c->r[3]=c->r[3]+0xE0000000u; // 8040262C
  c->r[0]=R32(c->r[3]+0x00001C7Cu); // 80402630
  c->r[3]=c->r[3]+0x00001C70u; // 80402634
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80402638
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8040263C
  c->r[6]=rotl(c->r[0],8)&0xFFFFFFFFu; // 80402640
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 80402644
  if (crb(c,2)) { goto L_80402728; } // 80402648
  cmpu(c,0,c->r[7],0x00000008u); // 8040264C
  c->r[5]=c->r[7]+0xFFFFFFF8u; // 80402650
  if (!crb(c,1)) { goto L_804026FC; } // 80402654
  c->r[0]=c->r[5]+0x00000007u; // 80402658
  c->r[4]=0u+0xCC010000u; // 8040265C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80402660
  c->r[3]=0u+0xFFFF8000u; // 80402664
  c->ctr=c->r[0]; // 80402668
  cmpu(c,0,c->r[5],0x00000000u); // 8040266C
  if (!crb(c,1)) { goto L_804026FC; } // 80402670
L_80402674:;
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 80402674
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80402678
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8040267C
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 80402680
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 80402684
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80402688
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8040268C
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 80402690
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 80402694
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80402698
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8040269C
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 804026A0
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 804026A4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804026A8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 804026AC
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 804026B0
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 804026B4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804026B8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 804026BC
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 804026C0
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 804026C4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804026C8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 804026CC
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 804026D0
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 804026D4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804026D8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 804026DC
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 804026E0
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 804026E4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 804026E8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 804026EC
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 804026F0
  c->r[8]=c->r[8]+0x00000008u; // 804026F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80402674; } // 804026F8
L_804026FC:;
  c->r[0]=c->r[7]-c->r[8]; // 804026FC
  c->r[4]=0u+0xCC010000u; // 80402700
  c->r[3]=0u+0xFFFF8000u; // 80402704
  c->ctr=c->r[0]; // 80402708
  cmpu(c,0,c->r[8],c->r[7]); // 8040270C
  if (!crb(c,0)) { goto L_80402728; } // 80402710
L_80402714:;
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,0,ea,0,0);} // 80402714
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80402718
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 8040271C
  {uint32_t ea=c->r[4]+c->r[3]; psq_store(c,2,ea,0,0);} // 80402720
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80402714; } // 80402724
L_80402728:;
  c->r[3]=0u+0xE0000000u; // 80402728
  c->r[0]=0u+0x00000000u; // 8040272C
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 80402730
  return; // 80402734
}

// fn_80402738
void f_80402738(Ctx* __restrict c) {
  trace_call(0x80402738u);
  c->r[3]=0u+0xE0000000u; // 80402738
  c->r[0]=R32(c->r[3]+0x00001CA4u); // 8040273C
  c->r[3]=R32(c->r[3]+0x00001CA8u); // 80402740
  cmpu(c,0,c->r[0],c->r[3]); // 80402744
  if (!crb(c,0)) { goto L_8040284C; } // 80402748
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[2]=c->ps1[2]=RF32(ea);} // 8040274C
  c->r[7]=c->r[3]-c->r[0]; cr0(c,c->r[7]); // 80402750
  c->r[8]=0u+0x00000000u; // 80402754
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80402758
  {double t0=S(c->f[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 8040275C
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80402760
  if (crb(c,2)) { goto L_8040284C; } // 80402764
  cmpu(c,0,c->r[7],0x00000008u); // 80402768
  c->r[6]=c->r[7]+0xFFFFFFF8u; // 8040276C
  if (!crb(c,1)) { goto L_8040281C; } // 80402770
  c->r[0]=c->r[6]+0x00000007u; // 80402774
  c->r[5]=0u+0xCC010000u; // 80402778
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8040277C
  c->r[4]=0u+0xFFFF8000u; // 80402780
  c->r[3]=0u+0xFFFFFFFFu; // 80402784
  c->ctr=c->r[0]; // 80402788
  cmpu(c,0,c->r[6],0x00000000u); // 8040278C
  if (!crb(c,1)) { goto L_8040281C; } // 80402790
L_80402794:;
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402794
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80402798
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 8040279C
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027A0
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027A4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804027A8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 804027AC
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027B0
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027B4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804027B8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 804027BC
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027C0
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027C4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804027C8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 804027CC
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027D0
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027D4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804027D8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 804027DC
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027E0
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027E4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804027E8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 804027EC
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027F0
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 804027F4
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 804027F8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 804027FC
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402800
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402804
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 80402808
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 8040280C
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402810
  c->r[8]=c->r[8]+0x00000008u; // 80402814
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80402794; } // 80402818
L_8040281C:;
  c->r[0]=c->r[7]-c->r[8]; // 8040281C
  c->r[5]=0u+0xCC010000u; // 80402820
  c->r[4]=0u+0xFFFF8000u; // 80402824
  c->r[3]=0u+0xFFFFFFFFu; // 80402828
  c->ctr=c->r[0]; // 8040282C
  cmpu(c,0,c->r[8],c->r[7]); // 80402830
  if (!crb(c,0)) { goto L_8040284C; } // 80402834
L_80402838:;
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402838
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 8040283C
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 80402840
  {uint32_t ea=c->r[5]+c->r[4]; psq_store(c,0,ea,0,0);} // 80402844
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80402838; } // 80402848
L_8040284C:;
  c->r[3]=0u+0xE0000000u; // 8040284C
  c->r[0]=0u+0x00000000u; // 80402850
  W32(c->r[3]+0x00001CA4u,c->r[0]); // 80402854
  return; // 80402858
}

// fn_8040285C
void f_8040285C(Ctx* __restrict c) {
  trace_call(0x8040285Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8040285C
  c->r[0]=c->lr; // 80402860
  W32(c->r[1]+0x00000014u,c->r[0]); // 80402864
  c->r[0]=R32(c->r[13]+0xFFFFF474u); // 80402868
  cmps(c,0,(int32_t)c->r[0],0); // 8040286C
  if (crb(c,2)) { goto L_8040287C; } // 80402870
  c->lr=0x80402878u; f_80402738(c); // 80402874
  goto L_80402880; // 80402878
L_8040287C:;
  c->lr=0x80402880u; f_80402600(c); // 8040287C
L_80402880:;
  c->r[0]=0u+0x00000000u; // 80402880
  W32(c->r[13]+0xFFFFF474u,c->r[0]); // 80402884
  W32(c->r[13]+0xFFFFF470u,c->r[0]); // 80402888
  c->r[0]=R32(c->r[1]+0x00000014u); // 8040288C
  c->lr=c->r[0]; // 80402890
  c->r[1]=c->r[1]+0x00000010u; // 80402894
  return; // 80402898
}

// fn_8040289C
void f_8040289C(Ctx* __restrict c) {
  trace_call(0x8040289Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8040289C
  c->r[4]=0u+0x80570000u; // 804028A0
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[1]=c->ps1[1]=RF32(ea);} // 804028A4
  c->r[3]=c->r[4]+0x00004338u; // 804028A8
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[0]=c->ps1[0]=RF32(ea);} // 804028AC
  c->r[11]=0u+0x80570000u; // 804028B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804028B4
  c->r[9]=c->r[1]+0x00000028u; // 804028B8
  c->r[10]=c->r[1]+0x00000030u; // 804028BC
  c->r[5]=c->r[1]+0x00000008u; // 804028C0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804028C4
  c->r[7]=c->r[1]+0x00000018u; // 804028C8
  c->r[8]=c->r[1]+0x00000020u; // 804028CC
  c->r[6]=c->r[1]+0x00000010u; // 804028D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804028D4
  c->r[11]=c->r[11]+0x00004348u; // 804028D8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 804028DC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804028E0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 804028E4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804028E8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804028EC
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 804028F0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804028F4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 804028F8
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 804028FC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80402900
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80402904
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 80402908
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8040290C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80402910
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 80402914
  {uint32_t ea=c->r[4]+0x00004338u; WF32(ea,c->f[1]);} // 80402918
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8040291C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80402920
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80402924
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 80402928
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 8040292C
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 80402930
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 80402934
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 80402938
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 8040293C
  c->r[1]=c->r[1]+0x00000040u; // 80402940
  return; // 80402944
}

// fn_80402948
void f_80402948(Ctx* __restrict c) {
  trace_call(0x80402948u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80402948
  c->r[0]=c->lr; // 8040294C
  cmps(c,0,(int32_t)c->r[3],0); // 80402950
  W32(c->r[1]+0x00000014u,c->r[0]); // 80402954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80402958
  c->r[31]=c->r[4]|c->r[4]; // 8040295C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80402960
  c->r[30]=c->r[3]|c->r[3]; // 80402964
  if (crb(c,2)) { goto L_804029CC; } // 80402968
  c->r[4]=R32(c->r[3]+0x00000004u); // 8040296C
  cmps(c,0,(int32_t)c->r[4],0); // 80402970
  if (crb(c,2)) { goto L_80402994; } // 80402974
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402978
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040297C
  c->r[12]=R32(c->r[12]+0x000000D0u); // 80402980
  c->ctr=c->r[12]; // 80402984
  if (true) { c->lr=0x8040298Cu; dispatch(c,c->ctr); } // 80402988
  c->r[0]=0u+0x00000000u; // 8040298C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80402990
L_80402994:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 80402994
  cmps(c,0,(int32_t)c->r[4],0); // 80402998
  if (crb(c,2)) { goto L_804029BC; } // 8040299C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804029A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804029A4
  c->r[12]=R32(c->r[12]+0x000000D0u); // 804029A8
  c->ctr=c->r[12]; // 804029AC
  if (true) { c->lr=0x804029B4u; dispatch(c,c->ctr); } // 804029B0
  c->r[0]=0u+0x00000000u; // 804029B4
  W32(c->r[30]+0x00000008u,c->r[0]); // 804029B8
L_804029BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 804029BC
  if (!crb(c,1)) { goto L_804029CC; } // 804029C0
  c->r[3]=c->r[30]|c->r[30]; // 804029C4
  c->lr=0x804029CCu; f_803FE694(c); // 804029C8
L_804029CC:;
  c->r[3]=c->r[30]|c->r[30]; // 804029CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 804029D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 804029D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 804029D8
  c->lr=c->r[0]; // 804029DC
  c->r[1]=c->r[1]+0x00000010u; // 804029E0
  return; // 804029E4
}

// fn_804029E8
void f_804029E8(Ctx* __restrict c) {
  trace_call(0x804029E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 804029E8
  c->r[0]=c->lr; // 804029EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 804029F0
  c->r[0]=0u+0x00000000u; // 804029F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 804029F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 804029FC
  c->r[30]=c->r[5]|c->r[5]; // 80402A00
  W32(c->r[1]+0x00000014u,c->r[29]); // 80402A04
  c->r[29]=c->r[3]|c->r[3]; // 80402A08
  W32(c->r[3]+0x00000000u,c->r[4]); // 80402A0C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80402A10
  W32(c->r[3]+0x00000008u,c->r[0]); // 80402A14
  c->r[3]=c->r[30]|c->r[30]; // 80402A18
  c->lr=0x80402A20u; f_803ADAA8(c); // 80402A1C
  c->r[4]=R32(c->r[29]+0x00000004u); // 80402A20
  c->r[31]=c->r[3]|c->r[3]; // 80402A24
  cmps(c,0,(int32_t)c->r[4],0); // 80402A28
  if (crb(c,2)) { goto L_80402A44; } // 80402A2C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402A30
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402A34
  c->r[12]=R32(c->r[12]+0x000000D0u); // 80402A38
  c->ctr=c->r[12]; // 80402A3C
  if (true) { c->lr=0x80402A44u; dispatch(c,c->ctr); } // 80402A40
L_80402A44:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402A44
  c->r[4]=c->r[31]+0x00000001u; // 80402A48
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402A4C
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80402A50
  c->ctr=c->r[12]; // 80402A54
  if (true) { c->lr=0x80402A5Cu; dispatch(c,c->ctr); } // 80402A58
  W32(c->r[29]+0x00000004u,c->r[3]); // 80402A5C
  c->r[4]=c->r[30]|c->r[30]; // 80402A60
  c->lr=0x80402A68u; f_803A6F10(c); // 80402A64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80402A68
  c->r[3]=c->r[29]|c->r[29]; // 80402A6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80402A70
  c->r[29]=R32(c->r[1]+0x00000014u); // 80402A74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80402A78
  c->lr=c->r[0]; // 80402A7C
  c->r[1]=c->r[1]+0x00000020u; // 80402A80
  return; // 80402A84
}

// fn_80402A88
void f_80402A88(Ctx* __restrict c) {
  trace_call(0x80402A88u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 80402A88
  return; // 80402A8C
}

// fn_80402A90
void f_80402A90(Ctx* __restrict c) {
  trace_call(0x80402A90u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80402A90
  c->r[0]=c->lr; // 80402A94
  W32(c->r[1]+0x00000144u,c->r[0]); // 80402A98
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 80402A9C
  c->r[31]=c->r[4]|c->r[4]; // 80402AA0
  W32(c->r[1]+0x00000138u,c->r[30]); // 80402AA4
  c->r[30]=c->r[3]|c->r[3]; // 80402AA8
  c->r[3]=c->r[31]|c->r[31]; // 80402AAC
  c->lr=0x80402AB4u; f_803ADAA8(c); // 80402AB0
  c->r[4]=R32(c->r[30]+0x00000000u); // 80402AB4
  c->r[3]=c->r[1]+0x00000008u; // 80402AB8
  c->r[4]=R32(c->r[4]+0x00000008u); // 80402ABC
  c->lr=0x80402AC4u; f_803A6F10(c); // 80402AC0
  c->r[3]=c->r[1]+0x00000008u; // 80402AC4
  c->r[4]=c->r[13]+0xFFFFDF48u; // 80402AC8
  c->lr=0x80402AD0u; f_803A7014(c); // 80402ACC
  c->r[4]=c->r[31]|c->r[31]; // 80402AD0
  c->r[3]=c->r[1]+0x00000008u; // 80402AD4
  c->lr=0x80402ADCu; f_803A7014(c); // 80402AD8
  c->r[3]=c->r[1]+0x00000008u; // 80402ADC
  c->lr=0x80402AE4u; f_803ADAA8(c); // 80402AE0
  c->r[4]=R32(c->r[30]+0x00000008u); // 80402AE4
  c->r[31]=c->r[3]|c->r[3]; // 80402AE8
  cmps(c,0,(int32_t)c->r[4],0); // 80402AEC
  if (crb(c,2)) { goto L_80402B08; } // 80402AF0
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402AF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402AF8
  c->r[12]=R32(c->r[12]+0x000000D0u); // 80402AFC
  c->ctr=c->r[12]; // 80402B00
  if (true) { c->lr=0x80402B08u; dispatch(c,c->ctr); } // 80402B04
L_80402B08:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80402B08
  c->r[4]=c->r[31]+0x00000001u; // 80402B0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80402B10
  c->r[12]=R32(c->r[12]+0x000000CCu); // 80402B14
  c->ctr=c->r[12]; // 80402B18
  if (true) { c->lr=0x80402B20u; dispatch(c,c->ctr); } // 80402B1C
  W32(c->r[30]+0x00000008u,c->r[3]); // 80402B20
  c->r[4]=c->r[1]+0x00000008u; // 80402B24
  c->lr=0x80402B2Cu; f_803A6F10(c); // 80402B28
  c->r[0]=R32(c->r[1]+0x00000144u); // 80402B2C
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 80402B30
  c->r[30]=R32(c->r[1]+0x00000138u); // 80402B34
  c->lr=c->r[0]; // 80402B38
  c->r[1]=c->r[1]+0x00000140u; // 80402B3C
  return; // 80402B40
}

// fn_80402B44
void f_80402B44(Ctx* __restrict c) {
  trace_call(0x80402B44u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80402B44
  c->r[4]=0u+0x80570000u; // 80402B48
  {uint32_t ea=c->r[2]+0xFFFFA9B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80402B4C
  c->r[3]=c->r[4]+0x00004378u; // 80402B50
  {uint32_t ea=c->r[2]+0xFFFFA9BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80402B54
  c->r[11]=0u+0x80570000u; // 80402B58
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80402B5C
  c->r[9]=c->r[1]+0x00000028u; // 80402B60
  c->r[10]=c->r[1]+0x00000030u; // 80402B64
  c->r[5]=c->r[1]+0x00000008u; // 80402B68
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80402B6C
  c->r[7]=c->r[1]+0x00000018u; // 80402B70
  c->r[8]=c->r[1]+0x00000020u; // 80402B74
  c->r[6]=c->r[1]+0x00000010u; // 80402B78
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80402B7C
  c->r[11]=c->r[11]+0x00004388u; // 80402B80
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 80402B84
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80402B88
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 80402B8C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80402B90
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80402B94
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 80402B98
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80402B9C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80402BA0
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 80402BA4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80402BA8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80402BAC
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 80402BB0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80402BB4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80402BB8
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 80402BBC
  {uint32_t ea=c->r[4]+0x00004378u; WF32(ea,c->f[1]);} // 80402BC0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80402BC4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80402BC8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80402BCC
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 80402BD0
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 80402BD4
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 80402BD8
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 80402BDC
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 80402BE0
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 80402BE4
  c->r[1]=c->r[1]+0x00000040u; // 80402BE8
  return; // 80402BEC
}

// fn_80402BF0
void f_80402BF0(Ctx* __restrict c) {
  trace_call(0x80402BF0u);
  cmpu(c,0,c->r[3],0x000000C5u); // 80402BF0
  c->r[5]=0u+0x80470000u; // 80402BF4
  c->r[5]=c->r[5]+0xFFFFA610u; // 80402BF8
  if (crb(c,1)) { goto L_80403248; } // 80402BFC
  c->r[4]=0u+0x80470000u; // 80402C00
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80402C04
  c->r[4]=c->r[4]+0xFFFFB11Cu; // 80402C08
  c->r[4]=R32(c->r[4]+c->r[0]); // 80402C0C
  c->ctr=c->r[4]; // 80402C10
  if (true) { switch (c->ctr) { case 0x80402C18u: goto L_80402C18; case 0x80402C20u: goto L_80402C20; case 0x80402C28u: goto L_80402C28; case 0x80402C30u: goto L_80402C30; case 0x80402C38u: goto L_80402C38; case 0x80402C40u: goto L_80402C40; case 0x80402C48u: goto L_80402C48; case 0x80402C50u: goto L_80402C50; case 0x80402C58u: goto L_80402C58; case 0x80402C60u: goto L_80402C60; case 0x80402C68u: goto L_80402C68; case 0x80402C70u: goto L_80402C70; case 0x80402C78u: goto L_80402C78; case 0x80402C80u: goto L_80402C80; case 0x80402C88u: goto L_80402C88; case 0x80402C90u: goto L_80402C90; case 0x80402C98u: goto L_80402C98; case 0x80402CA0u: goto L_80402CA0; case 0x80402CA8u: goto L_80402CA8; case 0x80402CB0u: goto L_80402CB0; case 0x80402CB8u: goto L_80402CB8; case 0x80402CC0u: goto L_80402CC0; case 0x80402CC8u: goto L_80402CC8; case 0x80402CD0u: goto L_80402CD0; case 0x80402CD8u: goto L_80402CD8; case 0x80402CE0u: goto L_80402CE0; case 0x80402CE8u: goto L_80402CE8; case 0x80402CF0u: goto L_80402CF0; case 0x80402CF8u: goto L_80402CF8; case 0x80402D00u: goto L_80402D00; case 0x80402D08u: goto L_80402D08; case 0x80402D10u: goto L_80402D10; case 0x80402D18u: goto L_80402D18; case 0x80402D20u: goto L_80402D20; case 0x80402D28u: goto L_80402D28; case 0x80402D30u: goto L_80402D30; case 0x80402D38u: goto L_80402D38; case 0x80402D40u: goto L_80402D40; case 0x80402D48u: goto L_80402D48; case 0x80402D50u: goto L_80402D50; case 0x80402D58u: goto L_80402D58; case 0x80402D60u: goto L_80402D60; case 0x80402D68u: goto L_80402D68; case 0x80402D70u: goto L_80402D70; case 0x80402D78u: goto L_80402D78; case 0x80402D80u: goto L_80402D80; case 0x80402D88u: goto L_80402D88; case 0x80402D90u: goto L_80402D90; case 0x80402D98u: goto L_80402D98; case 0x80402DA0u: goto L_80402DA0; case 0x80402DA8u: goto L_80402DA8; case 0x80402DB0u: goto L_80402DB0; case 0x80402DB8u: goto L_80402DB8; case 0x80402DC0u: goto L_80402DC0; case 0x80402DC8u: goto L_80402DC8; case 0x80402DD0u: goto L_80402DD0; case 0x80402DD8u: goto L_80402DD8; case 0x80402DE0u: goto L_80402DE0; case 0x80402DE8u: goto L_80402DE8; case 0x80402DF0u: goto L_80402DF0; case 0x80402DF8u: goto L_80402DF8; case 0x80402E00u: goto L_80402E00; case 0x80402E08u: goto L_80402E08; case 0x80402E10u: goto L_80402E10; case 0x80402E18u: goto L_80402E18; case 0x80402E20u: goto L_80402E20; case 0x80402E28u: goto L_80402E28; case 0x80402E30u: goto L_80402E30; case 0x80402E38u: goto L_80402E38; case 0x80402E40u: goto L_80402E40; case 0x80402E48u: goto L_80402E48; case 0x80402E50u: goto L_80402E50; case 0x80402E58u: goto L_80402E58; case 0x80402E60u: goto L_80402E60; case 0x80402E68u: goto L_80402E68; case 0x80402E70u: goto L_80402E70; case 0x80402E78u: goto L_80402E78; case 0x80402E80u: goto L_80402E80; case 0x80402E88u: goto L_80402E88; case 0x80402E90u: goto L_80402E90; case 0x80402E98u: goto L_80402E98; case 0x80402EA0u: goto L_80402EA0; case 0x80402EA8u: goto L_80402EA8; case 0x80402EB0u: goto L_80402EB0; case 0x80402EB8u: goto L_80402EB8; case 0x80402EC0u: goto L_80402EC0; case 0x80402EC8u: goto L_80402EC8; case 0x80402ED0u: goto L_80402ED0; case 0x80402ED8u: goto L_80402ED8; case 0x80402EE0u: goto L_80402EE0; case 0x80402EE8u: goto L_80402EE8; case 0x80402EF0u: goto L_80402EF0; case 0x80402EF8u: goto L_80402EF8; case 0x80402F00u: goto L_80402F00; case 0x80402F08u: goto L_80402F08; case 0x80402F10u: goto L_80402F10; case 0x80402F18u: goto L_80402F18; case 0x80402F20u: goto L_80402F20; case 0x80402F28u: goto L_80402F28; case 0x80402F30u: goto L_80402F30; case 0x80402F38u: goto L_80402F38; case 0x80402F40u: goto L_80402F40; case 0x80402F48u: goto L_80402F48; case 0x80402F50u: goto L_80402F50; case 0x80402F58u: goto L_80402F58; case 0x80402F60u: goto L_80402F60; case 0x80402F68u: goto L_80402F68; case 0x80402F70u: goto L_80402F70; case 0x80402F78u: goto L_80402F78; case 0x80402F80u: goto L_80402F80; case 0x80402F88u: goto L_80402F88; case 0x80402F90u: goto L_80402F90; case 0x80402F98u: goto L_80402F98; case 0x80402FA0u: goto L_80402FA0; case 0x80402FA8u: goto L_80402FA8; case 0x80402FB0u: goto L_80402FB0; case 0x80402FB8u: goto L_80402FB8; case 0x80402FC0u: goto L_80402FC0; case 0x80402FC8u: goto L_80402FC8; case 0x80402FD0u: goto L_80402FD0; case 0x80402FD8u: goto L_80402FD8; case 0x80402FE0u: goto L_80402FE0; case 0x80402FE8u: goto L_80402FE8; case 0x80402FF0u: goto L_80402FF0; case 0x80402FF8u: goto L_80402FF8; case 0x80403000u: goto L_80403000; case 0x80403008u: goto L_80403008; case 0x80403010u: goto L_80403010; case 0x80403018u: goto L_80403018; case 0x80403020u: goto L_80403020; case 0x80403028u: goto L_80403028; case 0x80403030u: goto L_80403030; case 0x80403038u: goto L_80403038; case 0x80403040u: goto L_80403040; case 0x80403048u: goto L_80403048; case 0x80403050u: goto L_80403050; case 0x80403058u: goto L_80403058; case 0x80403060u: goto L_80403060; case 0x80403068u: goto L_80403068; case 0x80403070u: goto L_80403070; case 0x80403078u: goto L_80403078; case 0x80403080u: goto L_80403080; case 0x80403088u: goto L_80403088; case 0x80403090u: goto L_80403090; case 0x80403098u: goto L_80403098; case 0x804030A0u: goto L_804030A0; case 0x804030A8u: goto L_804030A8; case 0x804030B0u: goto L_804030B0; case 0x804030B8u: goto L_804030B8; case 0x804030C0u: goto L_804030C0; case 0x804030C8u: goto L_804030C8; case 0x804030D0u: goto L_804030D0; case 0x804030D8u: goto L_804030D8; case 0x804030E0u: goto L_804030E0; case 0x804030E8u: goto L_804030E8; case 0x804030F0u: goto L_804030F0; case 0x804030F8u: goto L_804030F8; case 0x80403100u: goto L_80403100; case 0x80403108u: goto L_80403108; case 0x80403110u: goto L_80403110; case 0x80403118u: goto L_80403118; case 0x80403120u: goto L_80403120; case 0x80403128u: goto L_80403128; case 0x80403130u: goto L_80403130; case 0x80403138u: goto L_80403138; case 0x80403140u: goto L_80403140; case 0x80403148u: goto L_80403148; case 0x80403150u: goto L_80403150; case 0x80403158u: goto L_80403158; case 0x80403160u: goto L_80403160; case 0x80403168u: goto L_80403168; case 0x80403170u: goto L_80403170; case 0x80403178u: goto L_80403178; case 0x80403180u: goto L_80403180; case 0x80403188u: goto L_80403188; case 0x80403190u: goto L_80403190; case 0x80403198u: goto L_80403198; case 0x804031A0u: goto L_804031A0; case 0x804031A8u: goto L_804031A8; case 0x804031B0u: goto L_804031B0; case 0x804031B8u: goto L_804031B8; case 0x804031C0u: goto L_804031C0; case 0x804031C8u: goto L_804031C8; case 0x804031D0u: goto L_804031D0; case 0x804031D8u: goto L_804031D8; case 0x804031E0u: goto L_804031E0; case 0x804031E8u: goto L_804031E8; case 0x804031F0u: goto L_804031F0; case 0x804031F8u: goto L_804031F8; case 0x80403200u: goto L_80403200; case 0x80403208u: goto L_80403208; case 0x80403210u: goto L_80403210; case 0x80403218u: goto L_80403218; case 0x80403220u: goto L_80403220; case 0x80403228u: goto L_80403228; case 0x80403230u: goto L_80403230; case 0x80403238u: goto L_80403238; case 0x80403240u: goto L_80403240; default: break; } dispatch(c,c->ctr); return; } // 80402C14
L_80402C18:;
  c->r[3]=c->r[5]+0x00000000u; // 80402C18
  return; // 80402C1C
L_80402C20:;
  c->r[3]=c->r[5]+0x0000002Cu; // 80402C20
  return; // 80402C24
L_80402C28:;
  c->r[3]=c->r[5]+0x00000054u; // 80402C28
  return; // 80402C2C
L_80402C30:;
  c->r[3]=c->r[5]+0x00000064u; // 80402C30
  return; // 80402C34
L_80402C38:;
  c->r[3]=c->r[5]+0x00000080u; // 80402C38
  return; // 80402C3C
L_80402C40:;
  c->r[3]=c->r[5]+0x0000009Cu; // 80402C40
  return; // 80402C44
L_80402C48:;
  c->r[3]=c->r[5]+0x000000B8u; // 80402C48
  return; // 80402C4C
L_80402C50:;
  c->r[3]=c->r[13]+0xFFFFDF50u; // 80402C50
  return; // 80402C54
L_80402C58:;
  c->r[3]=c->r[13]+0xFFFFDF58u; // 80402C58
  return; // 80402C5C
L_80402C60:;
  c->r[3]=c->r[13]+0xFFFFDF60u; // 80402C60
  return; // 80402C64
L_80402C68:;
  c->r[3]=c->r[5]+0x000000FCu; // 80402C68
  return; // 80402C6C
L_80402C70:;
  c->r[3]=c->r[5]+0x00000108u; // 80402C70
  return; // 80402C74
L_80402C78:;
  c->r[3]=c->r[5]+0x00000114u; // 80402C78
  return; // 80402C7C
L_80402C80:;
  c->r[3]=c->r[5]+0x00000120u; // 80402C80
  return; // 80402C84
L_80402C88:;
  c->r[3]=c->r[5]+0x0000012Cu; // 80402C88
  return; // 80402C8C
L_80402C90:;
  c->r[3]=c->r[5]+0x0000013Cu; // 80402C90
  return; // 80402C94
L_80402C98:;
  c->r[3]=c->r[5]+0x0000014Cu; // 80402C98
  return; // 80402C9C
L_80402CA0:;
  c->r[3]=c->r[13]+0xFFFFDF68u; // 80402CA0
  return; // 80402CA4
L_80402CA8:;
  c->r[3]=c->r[5]+0x0000015Cu; // 80402CA8
  return; // 80402CAC
L_80402CB0:;
  c->r[3]=c->r[13]+0xFFFFDF70u; // 80402CB0
  return; // 80402CB4
L_80402CB8:;
  c->r[3]=c->r[5]+0x0000016Cu; // 80402CB8
  return; // 80402CBC
L_80402CC0:;
  c->r[3]=c->r[5]+0x00000178u; // 80402CC0
  return; // 80402CC4
L_80402CC8:;
  c->r[3]=c->r[13]+0xFFFFDF78u; // 80402CC8
  return; // 80402CCC
L_80402CD0:;
  c->r[3]=c->r[5]+0x00000188u; // 80402CD0
  return; // 80402CD4
L_80402CD8:;
  c->r[3]=c->r[5]+0x00000194u; // 80402CD8
  return; // 80402CDC
L_80402CE0:;
  c->r[3]=c->r[5]+0x000001A0u; // 80402CE0
  return; // 80402CE4
L_80402CE8:;
  c->r[3]=c->r[5]+0x000001B0u; // 80402CE8
  return; // 80402CEC
L_80402CF0:;
  c->r[3]=c->r[5]+0x000001C0u; // 80402CF0
  return; // 80402CF4
L_80402CF8:;
  c->r[3]=c->r[5]+0x000001D0u; // 80402CF8
  return; // 80402CFC
L_80402D00:;
  c->r[3]=c->r[5]+0x000001E0u; // 80402D00
  return; // 80402D04
L_80402D08:;
  c->r[3]=c->r[5]+0x000001ECu; // 80402D08
  return; // 80402D0C
L_80402D10:;
  c->r[3]=c->r[5]+0x000001F8u; // 80402D10
  return; // 80402D14
L_80402D18:;
  c->r[3]=c->r[5]+0x00000204u; // 80402D18
  return; // 80402D1C
L_80402D20:;
  c->r[3]=c->r[5]+0x00000214u; // 80402D20
  return; // 80402D24
L_80402D28:;
  c->r[3]=c->r[5]+0x00000220u; // 80402D28
  return; // 80402D2C
L_80402D30:;
  c->r[3]=c->r[13]+0xFFFFDF80u; // 80402D30
  return; // 80402D34
L_80402D38:;
  c->r[3]=c->r[13]+0xFFFFDF88u; // 80402D38
  return; // 80402D3C
L_80402D40:;
  c->r[3]=c->r[5]+0x00000234u; // 80402D40
  return; // 80402D44
L_80402D48:;
  c->r[3]=c->r[5]+0x0000024Cu; // 80402D48
  return; // 80402D4C
L_80402D50:;
  c->r[3]=c->r[5]+0x00000264u; // 80402D50
  return; // 80402D54
L_80402D58:;
  c->r[3]=c->r[5]+0x00000274u; // 80402D58
  return; // 80402D5C
L_80402D60:;
  c->r[3]=c->r[5]+0x00000284u; // 80402D60
  return; // 80402D64
L_80402D68:;
  c->r[3]=c->r[5]+0x00000298u; // 80402D68
  return; // 80402D6C
L_80402D70:;
  c->r[3]=c->r[5]+0x000002B0u; // 80402D70
  return; // 80402D74
L_80402D78:;
  c->r[3]=c->r[5]+0x000002BCu; // 80402D78
  return; // 80402D7C
L_80402D80:;
  c->r[3]=c->r[5]+0x000002C8u; // 80402D80
  return; // 80402D84
L_80402D88:;
  c->r[3]=c->r[5]+0x000002D8u; // 80402D88
  return; // 80402D8C
L_80402D90:;
  c->r[3]=c->r[5]+0x000002E8u; // 80402D90
  return; // 80402D94
L_80402D98:;
  c->r[3]=c->r[5]+0x000002FCu; // 80402D98
  return; // 80402D9C
L_80402DA0:;
  c->r[3]=c->r[5]+0x00000314u; // 80402DA0
  return; // 80402DA4
L_80402DA8:;
  c->r[3]=c->r[5]+0x00000328u; // 80402DA8
  return; // 80402DAC
L_80402DB0:;
  c->r[3]=c->r[5]+0x00000334u; // 80402DB0
  return; // 80402DB4
L_80402DB8:;
  c->r[3]=c->r[13]+0xFFFFDF8Cu; // 80402DB8
  return; // 80402DBC
L_80402DC0:;
  c->r[3]=c->r[5]+0x00000344u; // 80402DC0
  return; // 80402DC4
L_80402DC8:;
  c->r[3]=c->r[5]+0x00000358u; // 80402DC8
  return; // 80402DCC
L_80402DD0:;
  c->r[3]=c->r[5]+0x0000036Cu; // 80402DD0
  return; // 80402DD4
L_80402DD8:;
  c->r[3]=c->r[5]+0x00000380u; // 80402DD8
  return; // 80402DDC
L_80402DE0:;
  c->r[3]=c->r[5]+0x00000394u; // 80402DE0
  return; // 80402DE4
L_80402DE8:;
  c->r[3]=c->r[5]+0x000003A8u; // 80402DE8
  return; // 80402DEC
L_80402DF0:;
  c->r[3]=c->r[5]+0x000003B8u; // 80402DF0
  return; // 80402DF4
L_80402DF8:;
  c->r[3]=c->r[5]+0x000003C8u; // 80402DF8
  return; // 80402DFC
L_80402E00:;
  c->r[3]=c->r[5]+0x000003DCu; // 80402E00
  return; // 80402E04
L_80402E08:;
  c->r[3]=c->r[5]+0x000003F4u; // 80402E08
  return; // 80402E0C
L_80402E10:;
  c->r[3]=c->r[13]+0xFFFFDF94u; // 80402E10
  return; // 80402E14
L_80402E18:;
  c->r[3]=c->r[5]+0x0000040Cu; // 80402E18
  return; // 80402E1C
L_80402E20:;
  c->r[3]=c->r[5]+0x00000420u; // 80402E20
  return; // 80402E24
L_80402E28:;
  c->r[3]=c->r[13]+0xFFFFDF9Cu; // 80402E28
  return; // 80402E2C
L_80402E30:;
  c->r[3]=c->r[5]+0x00000434u; // 80402E30
  return; // 80402E34
L_80402E38:;
  c->r[3]=c->r[5]+0x00000444u; // 80402E38
  return; // 80402E3C
L_80402E40:;
  c->r[3]=c->r[5]+0x00000454u; // 80402E40
  return; // 80402E44
L_80402E48:;
  c->r[3]=c->r[5]+0x00000464u; // 80402E48
  return; // 80402E4C
L_80402E50:;
  c->r[3]=c->r[5]+0x00000474u; // 80402E50
  return; // 80402E54
L_80402E58:;
  c->r[3]=c->r[5]+0x000004A0u; // 80402E58
  return; // 80402E5C
L_80402E60:;
  c->r[3]=c->r[5]+0x000004B0u; // 80402E60
  return; // 80402E64
L_80402E68:;
  c->r[3]=c->r[5]+0x000004C8u; // 80402E68
  return; // 80402E6C
L_80402E70:;
  c->r[3]=c->r[5]+0x000004E0u; // 80402E70
  return; // 80402E74
L_80402E78:;
  c->r[3]=c->r[5]+0x000004F8u; // 80402E78
  return; // 80402E7C
L_80402E80:;
  c->r[3]=c->r[5]+0x00000510u; // 80402E80
  return; // 80402E84
L_80402E88:;
  c->r[3]=c->r[5]+0x00000528u; // 80402E88
  return; // 80402E8C
L_80402E90:;
  c->r[3]=c->r[5]+0x00000538u; // 80402E90
  return; // 80402E94
L_80402E98:;
  c->r[3]=c->r[5]+0x00000548u; // 80402E98
  return; // 80402E9C
L_80402EA0:;
  c->r[3]=c->r[5]+0x00000558u; // 80402EA0
  return; // 80402EA4
L_80402EA8:;
  c->r[3]=c->r[5]+0x00000568u; // 80402EA8
  return; // 80402EAC
L_80402EB0:;
  c->r[3]=c->r[5]+0x00000574u; // 80402EB0
  return; // 80402EB4
L_80402EB8:;
  c->r[3]=c->r[5]+0x00000580u; // 80402EB8
  return; // 80402EBC
L_80402EC0:;
  c->r[3]=c->r[5]+0x0000058Cu; // 80402EC0
  return; // 80402EC4
L_80402EC8:;
  c->r[3]=c->r[13]+0xFFFFDFA8u; // 80402EC8
  return; // 80402ECC
L_80402ED0:;
  c->r[3]=c->r[5]+0x00000598u; // 80402ED0
  return; // 80402ED4
L_80402ED8:;
  c->r[3]=c->r[5]+0x000005A4u; // 80402ED8
  return; // 80402EDC
L_80402EE0:;
  c->r[3]=c->r[5]+0x000005B0u; // 80402EE0
  return; // 80402EE4
L_80402EE8:;
  c->r[3]=c->r[5]+0x000005BCu; // 80402EE8
  return; // 80402EEC
L_80402EF0:;
  c->r[3]=c->r[5]+0x000005CCu; // 80402EF0
  return; // 80402EF4
L_80402EF8:;
  c->r[3]=c->r[5]+0x000005E0u; // 80402EF8
  return; // 80402EFC
L_80402F00:;
  c->r[3]=c->r[5]+0x000005F0u; // 80402F00
  return; // 80402F04
L_80402F08:;
  c->r[3]=c->r[13]+0xFFFFDFB0u; // 80402F08
  return; // 80402F0C
L_80402F10:;
  c->r[3]=c->r[5]+0x00000604u; // 80402F10
  return; // 80402F14
L_80402F18:;
  c->r[3]=c->r[5]+0x00000614u; // 80402F18
  return; // 80402F1C
L_80402F20:;
  c->r[3]=c->r[5]+0x00000628u; // 80402F20
  return; // 80402F24
L_80402F28:;
  c->r[3]=c->r[13]+0xFFFFDFB8u; // 80402F28
  return; // 80402F2C
L_80402F30:;
  c->r[3]=c->r[13]+0xFFFFDFC0u; // 80402F30
  return; // 80402F34
L_80402F38:;
  c->r[3]=c->r[5]+0x00000634u; // 80402F38
  return; // 80402F3C
L_80402F40:;
  c->r[3]=c->r[13]+0xFFFFDFC8u; // 80402F40
  return; // 80402F44
L_80402F48:;
  c->r[3]=c->r[5]+0x00000644u; // 80402F48
  return; // 80402F4C
L_80402F50:;
  c->r[3]=c->r[5]+0x00000650u; // 80402F50
  return; // 80402F54
L_80402F58:;
  c->r[3]=c->r[5]+0x0000065Cu; // 80402F58
  return; // 80402F5C
L_80402F60:;
  c->r[3]=c->r[13]+0xFFFFDFD0u; // 80402F60
  return; // 80402F64
L_80402F68:;
  c->r[3]=c->r[5]+0x0000066Cu; // 80402F68
  return; // 80402F6C
L_80402F70:;
  c->r[3]=c->r[5]+0x00000678u; // 80402F70
  return; // 80402F74
L_80402F78:;
  c->r[3]=c->r[5]+0x00000684u; // 80402F78
  return; // 80402F7C
L_80402F80:;
  c->r[3]=c->r[13]+0xFFFFDFD8u; // 80402F80
  return; // 80402F84
L_80402F88:;
  c->r[3]=c->r[5]+0x00000690u; // 80402F88
  return; // 80402F8C
L_80402F90:;
  c->r[3]=c->r[5]+0x0000069Cu; // 80402F90
  return; // 80402F94
L_80402F98:;
  c->r[3]=c->r[5]+0x000006A8u; // 80402F98
  return; // 80402F9C
L_80402FA0:;
  c->r[3]=c->r[5]+0x000006B8u; // 80402FA0
  return; // 80402FA4
L_80402FA8:;
  c->r[3]=c->r[5]+0x000006C8u; // 80402FA8
  return; // 80402FAC
L_80402FB0:;
  c->r[3]=c->r[5]+0x000006D8u; // 80402FB0
  return; // 80402FB4
L_80402FB8:;
  c->r[3]=c->r[5]+0x000006E8u; // 80402FB8
  return; // 80402FBC
L_80402FC0:;
  c->r[3]=c->r[5]+0x000006F4u; // 80402FC0
  return; // 80402FC4
L_80402FC8:;
  c->r[3]=c->r[5]+0x00000708u; // 80402FC8
  return; // 80402FCC
L_80402FD0:;
  c->r[3]=c->r[5]+0x00000718u; // 80402FD0
  return; // 80402FD4
L_80402FD8:;
  c->r[3]=c->r[5]+0x00000730u; // 80402FD8
  return; // 80402FDC
L_80402FE0:;
  c->r[3]=c->r[5]+0x00000740u; // 80402FE0
  return; // 80402FE4
L_80402FE8:;
  c->r[3]=c->r[13]+0xFFFFDFE0u; // 80402FE8
  return; // 80402FEC
L_80402FF0:;
  c->r[3]=c->r[5]+0x0000074Cu; // 80402FF0
  return; // 80402FF4
L_80402FF8:;
  c->r[3]=c->r[5]+0x00000758u; // 80402FF8
  return; // 80402FFC
L_80403000:;
  c->r[3]=c->r[5]+0x00000764u; // 80403000
  return; // 80403004
L_80403008:;
  c->r[3]=c->r[5]+0x00000770u; // 80403008
  return; // 8040300C
L_80403010:;
  c->r[3]=c->r[5]+0x00000780u; // 80403010
  return; // 80403014
L_80403018:;
  c->r[3]=c->r[5]+0x00000790u; // 80403018
  return; // 8040301C
L_80403020:;
  c->r[3]=c->r[5]+0x0000079Cu; // 80403020
  return; // 80403024
L_80403028:;
  c->r[3]=c->r[5]+0x000007ACu; // 80403028
  return; // 8040302C
L_80403030:;
  c->r[3]=c->r[5]+0x000007BCu; // 80403030
  return; // 80403034
L_80403038:;
  c->r[3]=c->r[5]+0x000007C8u; // 80403038
  return; // 8040303C
L_80403040:;
  c->r[3]=c->r[13]+0xFFFFDFE8u; // 80403040
  return; // 80403044
L_80403048:;
  c->r[3]=c->r[13]+0xFFFFDFECu; // 80403048
  return; // 8040304C
L_80403050:;
  c->r[3]=c->r[13]+0xFFFFDFF4u; // 80403050
  return; // 80403054
L_80403058:;
  c->r[3]=c->r[5]+0x000007DCu; // 80403058
  return; // 8040305C
L_80403060:;
  c->r[3]=c->r[5]+0x000007ECu; // 80403060
  return; // 80403064
L_80403068:;
  c->r[3]=c->r[5]+0x000007FCu; // 80403068
  return; // 8040306C
L_80403070:;
  c->r[3]=c->r[5]+0x0000080Cu; // 80403070
  return; // 80403074
L_80403078:;
  c->r[3]=c->r[5]+0x00000820u; // 80403078
  return; // 8040307C
L_80403080:;
  c->r[3]=c->r[13]+0xFFFFE000u; // 80403080
  return; // 80403084
L_80403088:;
  c->r[3]=c->r[5]+0x00000830u; // 80403088
  return; // 8040308C
L_80403090:;
  c->r[3]=c->r[5]+0x0000083Cu; // 80403090
  return; // 80403094
L_80403098:;
  c->r[3]=c->r[5]+0x00000848u; // 80403098
  return; // 8040309C
L_804030A0:;
  c->r[3]=c->r[13]+0xFFFFE008u; // 804030A0
  return; // 804030A4
L_804030A8:;
  c->r[3]=c->r[13]+0xFFFFE010u; // 804030A8
  return; // 804030AC
L_804030B0:;
  c->r[3]=c->r[13]+0xFFFFE018u; // 804030B0
  return; // 804030B4
L_804030B8:;
  c->r[3]=c->r[13]+0xFFFFE020u; // 804030B8
  return; // 804030BC
L_804030C0:;
  c->r[3]=c->r[13]+0xFFFFE028u; // 804030C0
  return; // 804030C4
L_804030C8:;
  c->r[3]=c->r[13]+0xFFFFE030u; // 804030C8
  return; // 804030CC
L_804030D0:;
  c->r[3]=c->r[13]+0xFFFFE038u; // 804030D0
  return; // 804030D4
L_804030D8:;
  c->r[3]=c->r[5]+0x00000854u; // 804030D8
  return; // 804030DC
L_804030E0:;
  c->r[3]=c->r[13]+0xFFFFE040u; // 804030E0
  return; // 804030E4
L_804030E8:;
  c->r[3]=c->r[5]+0x00000864u; // 804030E8
  return; // 804030EC
L_804030F0:;
  c->r[3]=c->r[5]+0x00000870u; // 804030F0
  return; // 804030F4
L_804030F8:;
  c->r[3]=c->r[5]+0x00000880u; // 804030F8
  return; // 804030FC
L_80403100:;
  c->r[3]=c->r[13]+0xFFFFE048u; // 80403100
  return; // 80403104
L_80403108:;
  c->r[3]=c->r[5]+0x00000890u; // 80403108
  return; // 8040310C
L_80403110:;
  c->r[3]=c->r[5]+0x000008A4u; // 80403110
  return; // 80403114
L_80403118:;
  c->r[3]=c->r[5]+0x000008B4u; // 80403118
  return; // 8040311C
L_80403120:;
  c->r[3]=c->r[13]+0xFFFFE050u; // 80403120
  return; // 80403124
L_80403128:;
  c->r[3]=c->r[13]+0xFFFFE058u; // 80403128
  return; // 8040312C
L_80403130:;
  c->r[3]=c->r[5]+0x000008C0u; // 80403130
  return; // 80403134
L_80403138:;
  c->r[3]=c->r[5]+0x000008D4u; // 80403138
  return; // 8040313C
L_80403140:;
  c->r[3]=c->r[5]+0x000008E0u; // 80403140
  return; // 80403144
L_80403148:;
  c->r[3]=c->r[5]+0x000008ECu; // 80403148
  return; // 8040314C
L_80403150:;
  c->r[3]=c->r[13]+0xFFFFE060u; // 80403150
  return; // 80403154
L_80403158:;
  c->r[3]=c->r[13]+0xFFFFE068u; // 80403158
  return; // 8040315C
L_80403160:;
  c->r[3]=c->r[5]+0x000008F8u; // 80403160
  return; // 80403164
L_80403168:;
  c->r[3]=c->r[5]+0x00000904u; // 80403168
  return; // 8040316C
L_80403170:;
  c->r[3]=c->r[5]+0x00000910u; // 80403170
  return; // 80403174
L_80403178:;
  c->r[3]=c->r[5]+0x00000928u; // 80403178
  return; // 8040317C
L_80403180:;
  c->r[3]=c->r[5]+0x00000940u; // 80403180
  return; // 80403184
L_80403188:;
  c->r[3]=c->r[5]+0x00000950u; // 80403188
  return; // 8040318C
L_80403190:;
  c->r[3]=c->r[5]+0x00000968u; // 80403190
  return; // 80403194
L_80403198:;
  c->r[3]=c->r[5]+0x00000978u; // 80403198
  return; // 8040319C
L_804031A0:;
  c->r[3]=c->r[5]+0x00000988u; // 804031A0
  return; // 804031A4
L_804031A8:;
  c->r[3]=c->r[5]+0x00000998u; // 804031A8
  return; // 804031AC
L_804031B0:;
  c->r[3]=c->r[5]+0x000009A8u; // 804031B0
  return; // 804031B4
L_804031B8:;
  c->r[3]=c->r[5]+0x000009BCu; // 804031B8
  return; // 804031BC
L_804031C0:;
  c->r[3]=c->r[5]+0x000009D0u; // 804031C0
  return; // 804031C4
L_804031C8:;
  c->r[3]=c->r[5]+0x000009E8u; // 804031C8
  return; // 804031CC
L_804031D0:;
  c->r[3]=c->r[5]+0x000009FCu; // 804031D0
  return; // 804031D4
L_804031D8:;
  c->r[3]=c->r[5]+0x00000A14u; // 804031D8
  return; // 804031DC
L_804031E0:;
  c->r[3]=c->r[13]+0xFFFFE070u; // 804031E0
  return; // 804031E4
L_804031E8:;
  c->r[3]=c->r[5]+0x00000A2Cu; // 804031E8
  return; // 804031EC
L_804031F0:;
  c->r[3]=c->r[5]+0x00000A38u; // 804031F0
  return; // 804031F4
L_804031F8:;
  c->r[3]=c->r[5]+0x00000A50u; // 804031F8
  return; // 804031FC
L_80403200:;
  c->r[3]=c->r[5]+0x00000A60u; // 80403200
  return; // 80403204
L_80403208:;
  c->r[3]=c->r[5]+0x00000A70u; // 80403208
  return; // 8040320C
L_80403210:;
  c->r[3]=c->r[5]+0x00000A80u; // 80403210
  return; // 80403214
L_80403218:;
  c->r[3]=c->r[5]+0x00000A98u; // 80403218
  return; // 8040321C
L_80403220:;
  c->r[3]=c->r[5]+0x00000AACu; // 80403220
  return; // 80403224
L_80403228:;
  c->r[3]=c->r[5]+0x00000AB8u; // 80403228
  return; // 8040322C
L_80403230:;
  c->r[3]=c->r[5]+0x00000AC4u; // 80403230
  return; // 80403234
L_80403238:;
  c->r[3]=c->r[5]+0x00000AD4u; // 80403238
  return; // 8040323C
L_80403240:;
  c->r[3]=c->r[5]+0x00000AE4u; // 80403240
  return; // 80403244
L_80403248:;
  c->r[3]=c->r[5]+0x00000AF8u; // 80403248
  return; // 8040324C
}

// fn_80403250
void f_80403250(Ctx* __restrict c) {
  trace_call(0x80403250u);
  c->r[0]=0u+0x000000FAu; // 80403250
  c->r[4]=0u+0x00000000u; // 80403254
  c->ctr=c->r[0]; // 80403258
L_8040325C:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8040325C
  W32(c->r[3]+0x00000010u,c->r[4]); // 80403260
  W32(c->r[3]+0x00000014u,c->r[4]); // 80403264
  W32(c->r[3]+0x00000018u,c->r[4]); // 80403268
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8040326C
  W32(c->r[3]+0x00000020u,c->r[4]); // 80403270
  W32(c->r[3]+0x00000024u,c->r[4]); // 80403274
  W32(c->r[3]+0x00000028u,c->r[4]); // 80403278
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8040327C
  W32(c->r[3]+0x00000030u,c->r[4]); // 80403280
  W32(c->r[3]+0x00000034u,c->r[4]); // 80403284
  W32(c->r[3]+0x00000038u,c->r[4]); // 80403288
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8040328C
  W32(c->r[3]+0x00000040u,c->r[4]); // 80403290
  W32(c->r[3]+0x00000044u,c->r[4]); // 80403294
  W32(c->r[3]+0x00000048u,c->r[4]); // 80403298
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 8040329C
  W32(c->r[3]+0x00000050u,c->r[4]); // 804032A0
  W32(c->r[3]+0x00000054u,c->r[4]); // 804032A4
  W32(c->r[3]+0x00000058u,c->r[4]); // 804032A8
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 804032AC
  W32(c->r[3]+0x00000060u,c->r[4]); // 804032B0
  W32(c->r[3]+0x00000064u,c->r[4]); // 804032B4
  W32(c->r[3]+0x00000068u,c->r[4]); // 804032B8
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 804032BC
  W32(c->r[3]+0x00000070u,c->r[4]); // 804032C0
  W32(c->r[3]+0x00000074u,c->r[4]); // 804032C4
  W32(c->r[3]+0x00000078u,c->r[4]); // 804032C8
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 804032CC
  W32(c->r[3]+0x00000080u,c->r[4]); // 804032D0
  W32(c->r[3]+0x00000084u,c->r[4]); // 804032D4
  W32(c->r[3]+0x00000088u,c->r[4]); // 804032D8
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 804032DC
  W32(c->r[3]+0x00000090u,c->r[4]); // 804032E0
  W32(c->r[3]+0x00000094u,c->r[4]); // 804032E4
  W32(c->r[3]+0x00000098u,c->r[4]); // 804032E8
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 804032EC
  W32(c->r[3]+0x000000A0u,c->r[4]); // 804032F0
  W32(c->r[3]+0x000000A4u,c->r[4]); // 804032F4
  W32(c->r[3]+0x000000A8u,c->r[4]); // 804032F8
  c->r[3]=c->r[3]+0x000000A0u; // 804032FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8040325C; } // 80403300
  return; // 80403304
}

// fn_80403308
void f_80403308(Ctx* __restrict c) {
  trace_call(0x80403308u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403308
  c->r[0]=c->lr; // 8040330C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80403310
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80403314
  c->r[27]=c->r[3]|c->r[3]; // 80403318
  c->r[29]=0u+0x80570000u; // 8040331C
  c->r[30]=0u+0x80470000u; // 80403320
  c->r[23]=c->r[5]|c->r[5]; // 80403324
  c->r[22]=c->r[4]|c->r[4]; // 80403328
  c->r[29]=c->r[29]+0x000043B8u; // 8040332C
  c->r[24]=c->r[6]|c->r[6]; // 80403330
  c->r[25]=c->r[7]|c->r[7]; // 80403334
  c->r[28]=c->r[8]|c->r[8]; // 80403338
  c->r[30]=c->r[30]+0xFFFFA610u; // 8040333C
  c->r[4]=c->r[29]+0x00000040u; // 80403340
  c->r[5]=0u+0x000003E7u; // 80403344
  c->r[3]=R32(c->r[3]+0x00000000u); // 80403348
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040334C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80403350
  c->ctr=c->r[12]; // 80403354
  if (true) { c->lr=0x8040335Cu; dispatch(c,c->ctr); } // 80403358
  c->r[3]=c->r[29]+0x00000040u; // 8040335C
  c->r[5]=c->r[29]+0x00000428u; // 80403360
  c->r[6]=c->r[29]+0x00000810u; // 80403364
  c->r[4]=c->r[13]+0xFFFFE078u; // 80403368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8040336C
  c->lr=0x80403374u; f_803A6E30(c); // 80403370
  c->r[26]=c->r[3]|c->r[3]; // 80403374
  c->r[31]=0u+0x00000000u; // 80403378
L_8040337C:;
  c->r[3]=c->r[31]|c->r[31]; // 8040337C
  c->lr=0x80403384u; f_80402BF0(c); // 80403380
  c->r[4]=c->r[3]|c->r[3]; // 80403384
  c->r[3]=c->r[29]+0x00000428u; // 80403388
  c->lr=0x80403390u; f_803A7040(c); // 8040338C
  cmps(c,0,(int32_t)c->r[3],0); // 80403390
  if (!crb(c,2)) { goto L_8040339C; } // 80403394
  goto L_804033AC; // 80403398
L_8040339C:;
  c->r[31]=c->r[31]+0x00000001u; // 8040339C
  cmps(c,0,(int32_t)c->r[31],198); // 804033A0
  if (crb(c,0)) { IRQCHK(c); goto L_8040337C; } // 804033A4
  c->r[31]=0u+0xFFFFFFFFu; // 804033A8
L_804033AC:;
  c->r[0]=c->r[31]+0x00000001u; // 804033AC
  W32(c->r[22]+0x00000000u,c->r[31]); // 804033B0
  cmpu(c,0,c->r[0],0x000000C6u); // 804033B4
  if (crb(c,1)) { goto L_80403994; } // 804033B8
  c->r[3]=0u+0x80470000u; // 804033BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804033C0
  c->r[3]=c->r[3]+0xFFFFB484u; // 804033C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 804033C8
  c->ctr=c->r[3]; // 804033CC
  if (true) { switch (c->ctr) { case 0x804033D4u: goto L_804033D4; case 0x804033DCu: goto L_804033DC; case 0x80403410u: goto L_80403410; case 0x80403444u: goto L_80403444; case 0x80403480u: goto L_80403480; case 0x80403514u: goto L_80403514; case 0x804037A4u: goto L_804037A4; case 0x8040398Cu: goto L_8040398C; default: break; } dispatch(c,c->ctr); return; } // 804033D0
L_804033D4:;
  c->r[3]=0u+0x00000001u; // 804033D4
  goto L_80403998; // 804033D8
L_804033DC:;
  cmps(c,0,(int32_t)c->r[23],0); // 804033DC
  if (crb(c,2)) { goto L_804033EC; } // 804033E0
  cmps(c,0,(int32_t)c->r[26],2); // 804033E4
  if (!crb(c,0)) { goto L_804033F4; } // 804033E8
L_804033EC:;
  c->r[3]=0u+0x00000000u; // 804033EC
  goto L_80403998; // 804033F0
L_804033F4:;
  c->r[5]=c->r[23]|c->r[23]; // 804033F4
  c->r[3]=c->r[29]+0x00000810u; // 804033F8
  c->r[4]=c->r[13]+0xFFFFE080u; // 804033FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403400
  c->lr=0x80403408u; f_803A6E30(c); // 80403404
  c->r[3]=0u+0x00000001u; // 80403408
  goto L_80403998; // 8040340C
L_80403410:;
  cmps(c,0,(int32_t)c->r[24],0); // 80403410
  if (crb(c,2)) { goto L_80403420; } // 80403414
  cmps(c,0,(int32_t)c->r[26],2); // 80403418
  if (!crb(c,0)) { goto L_80403428; } // 8040341C
L_80403420:;
  c->r[3]=0u+0x00000000u; // 80403420
  goto L_80403998; // 80403424
L_80403428:;
  c->r[5]=c->r[24]|c->r[24]; // 80403428
  c->r[3]=c->r[29]+0x00000810u; // 8040342C
  c->r[4]=c->r[13]+0xFFFFE084u; // 80403430
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403434
  c->lr=0x8040343Cu; f_803A6E30(c); // 80403438
  c->r[3]=0u+0x00000001u; // 8040343C
  goto L_80403998; // 80403440
L_80403444:;
  cmps(c,0,(int32_t)c->r[25],0); // 80403444
  if (crb(c,2)) { goto L_80403454; } // 80403448
  cmps(c,0,(int32_t)c->r[26],2); // 8040344C
  if (!crb(c,0)) { goto L_8040345C; } // 80403450
L_80403454:;
  c->r[3]=0u+0x00000000u; // 80403454
  goto L_80403998; // 80403458
L_8040345C:;
  c->r[3]=c->r[29]+0x00000428u; // 8040345C
  c->lr=0x80403464u; f_803ADAA8(c); // 80403460
  c->r[0]=c->r[29]+0x00000040u; // 80403464
  c->r[4]=c->r[0]+c->r[3]; // 80403468
  c->r[3]=c->r[25]|c->r[25]; // 8040346C
  c->r[4]=c->r[4]+0x00000001u; // 80403470
  c->lr=0x80403478u; f_803A6F10(c); // 80403474
  c->r[3]=0u+0x00000001u; // 80403478
  goto L_80403998; // 8040347C
L_80403480:;
  cmps(c,0,(int32_t)c->r[25],0); // 80403480
  if (crb(c,2)) { goto L_80403490; } // 80403484
  cmps(c,0,(int32_t)c->r[26],2); // 80403488
  if (!crb(c,0)) { goto L_80403498; } // 8040348C
L_80403490:;
  c->r[3]=0u+0x00000000u; // 80403490
  goto L_80403998; // 80403494
L_80403498:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403498
  c->r[3]=c->r[29]+0x00000428u; // 8040349C
  W32(c->r[23]+0x00000000u,c->r[0]); // 804034A0
  c->lr=0x804034A8u; f_803ADAA8(c); // 804034A4
  c->r[0]=c->r[29]+0x00000040u; // 804034A8
  c->r[25]=c->r[0]+c->r[3]; // 804034AC
  c->r[25]=c->r[25]+0x00000001u; // 804034B0
  c->r[3]=c->r[25]|c->r[25]; // 804034B4
  c->lr=0x804034BCu; f_803ADAA8(c); // 804034B8
  c->r[4]=c->r[3]+0x00000002u; // 804034BC
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804034C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804034C4
  c->r[12]=R32(c->r[12]+0x000000D4u); // 804034C8
  c->ctr=c->r[12]; // 804034CC
  if (true) { c->lr=0x804034D4u; dispatch(c,c->ctr); } // 804034D0
  c->r[0]=R32(c->r[27]+0x00000008u); // 804034D4
  c->r[6]=c->r[27]+0x00010000u; // 804034D8
  c->r[4]=c->r[25]|c->r[25]; // 804034DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804034E0
  c->r[5]=c->r[6]+c->r[0]; // 804034E4
  W32(c->r[5]+0xFFFF9C4Cu,c->r[3]); // 804034E8
  c->r[0]=R32(c->r[27]+0x00000008u); // 804034EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804034F0
  c->r[3]=c->r[6]+c->r[0]; // 804034F4
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 804034F8
  c->lr=0x80403500u; f_803A6F10(c); // 804034FC
  c->r[4]=R32(c->r[27]+0x00000008u); // 80403500
  c->r[3]=0u+0x00000001u; // 80403504
  c->r[0]=c->r[4]+0x00000001u; // 80403508
  W32(c->r[27]+0x00000008u,c->r[0]); // 8040350C
  goto L_80403998; // 80403510
L_80403514:;
  c->r[3]=c->r[29]+0x00000810u; // 80403514
  c->r[4]=c->r[30]+0x00000E24u; // 80403518
  c->lr=0x80403520u; f_803A7040(c); // 8040351C
  cmps(c,0,(int32_t)c->r[3],0); // 80403520
  if (!crb(c,2)) { goto L_804036B0; } // 80403524
  c->r[3]=R32(c->r[27]+0x00000000u); // 80403528
  c->r[4]=c->r[29]+0x00000040u; // 8040352C
  c->r[5]=0u+0x000003E7u; // 80403530
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403534
  c->r[12]=R32(c->r[12]+0x00000010u); // 80403538
  c->ctr=c->r[12]; // 8040353C
  if (true) { c->lr=0x80403544u; dispatch(c,c->ctr); } // 80403540
  c->r[3]=c->r[29]+0x00000040u; // 80403544
  c->r[5]=c->r[29]+0x00000428u; // 80403548
  c->r[6]=c->r[29]+0x00000810u; // 8040354C
  c->r[4]=c->r[13]+0xFFFFE088u; // 80403550
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403554
  c->lr=0x8040355Cu; f_803A6E30(c); // 80403558
  c->r[5]=c->r[28]|c->r[28]; // 8040355C
  c->r[3]=c->r[29]+0x00000810u; // 80403560
  c->r[4]=c->r[13]+0xFFFFE090u; // 80403564
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403568
  c->lr=0x80403570u; f_803A6E30(c); // 8040356C
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403570
  c->r[3]=c->r[29]+0x00000810u; // 80403574
  W32(c->r[23]+0x00000000u,c->r[0]); // 80403578
  c->lr=0x80403580u; f_803ADAA8(c); // 8040357C
  c->r[26]=c->r[3]|c->r[3]; // 80403580
  c->r[3]=c->r[29]+0x00000428u; // 80403584
  c->lr=0x8040358Cu; f_803ADAA8(c); // 80403588
  c->r[31]=c->r[29]+0x00000040u; // 8040358C
  c->r[0]=c->r[26]+c->r[3]; // 80403590
  c->r[26]=c->r[31]+c->r[0]; // 80403594
  c->r[26]=c->r[26]+0x00000002u; // 80403598
  c->r[3]=c->r[26]|c->r[26]; // 8040359C
  c->lr=0x804035A4u; f_803ADAA8(c); // 804035A0
  c->r[25]=c->r[3]+0x00000002u; // 804035A4
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804035A8
  c->r[4]=c->r[25]|c->r[25]; // 804035AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 804035B0
  c->r[12]=R32(c->r[12]+0x000000D4u); // 804035B4
  c->ctr=c->r[12]; // 804035B8
  if (true) { c->lr=0x804035C0u; dispatch(c,c->ctr); } // 804035BC
  c->r[0]=R32(c->r[27]+0x00000008u); // 804035C0
  c->r[6]=c->r[27]+0x00010000u; // 804035C4
  c->r[4]=c->r[26]|c->r[26]; // 804035C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804035CC
  c->r[5]=c->r[6]+c->r[0]; // 804035D0
  W32(c->r[5]+0xFFFF9C4Cu,c->r[3]); // 804035D4
  c->r[0]=R32(c->r[27]+0x00000008u); // 804035D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 804035DC
  c->r[3]=c->r[6]+c->r[0]; // 804035E0
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 804035E4
  c->lr=0x804035ECu; f_803A6F10(c); // 804035E8
  c->r[3]=R32(c->r[27]+0x00000008u); // 804035EC
  c->r[4]=c->r[25]|c->r[25]; // 804035F0
  c->r[0]=c->r[3]+0x00000001u; // 804035F4
  W32(c->r[27]+0x00000008u,c->r[0]); // 804035F8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804035FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403600
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80403604
  c->ctr=c->r[12]; // 80403608
  if (true) { c->lr=0x80403610u; dispatch(c,c->ctr); } // 8040360C
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403610
  c->r[6]=c->r[27]+0x00010000u; // 80403614
  c->r[4]=c->r[26]|c->r[26]; // 80403618
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8040361C
  c->r[5]=c->r[6]+c->r[0]; // 80403620
  W32(c->r[5]+0xFFFF9C4Cu,c->r[3]); // 80403624
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403628
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8040362C
  c->r[3]=c->r[6]+c->r[0]; // 80403630
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 80403634
  c->lr=0x8040363Cu; f_803A6F10(c); // 80403638
  c->r[6]=R32(c->r[27]+0x00000008u); // 8040363C
  c->r[4]=c->r[31]|c->r[31]; // 80403640
  c->r[3]=R32(c->r[27]+0x00000000u); // 80403644
  c->r[5]=0u+0x000003E7u; // 80403648
  c->r[0]=c->r[6]+0x00000001u; // 8040364C
  W32(c->r[27]+0x00000008u,c->r[0]); // 80403650
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403654
  c->r[12]=R32(c->r[12]+0x00000010u); // 80403658
  c->ctr=c->r[12]; // 8040365C
  if (true) { c->lr=0x80403664u; dispatch(c,c->ctr); } // 80403660
  c->r[3]=c->r[31]|c->r[31]; // 80403664
  c->r[5]=c->r[29]+0x00000428u; // 80403668
  c->r[4]=c->r[13]+0xFFFFE094u; // 8040366C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403670
  c->lr=0x80403678u; f_803A6E30(c); // 80403674
  c->r[3]=c->r[29]+0x00000428u; // 80403678
  c->lr=0x80403680u; f_803ADAA8(c); // 8040367C
  c->r[3]=c->r[31]+c->r[3]; // 80403680
  c->r[4]=c->r[30]+0x00000E38u; // 80403684
  c->r[3]=c->r[3]+0x00000001u; // 80403688
  c->r[5]=c->r[28]+0x00000008u; // 8040368C
  c->r[6]=c->r[28]+0x0000000Cu; // 80403690
  c->r[7]=c->r[28]+0x00000010u; // 80403694
  c->r[8]=c->r[28]+0x00000014u; // 80403698
  c->r[9]=c->r[28]+0x00000018u; // 8040369C
  c->r[10]=c->r[28]+0x0000001Cu; // 804036A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804036A4
  c->lr=0x804036ACu; f_803A6E30(c); // 804036A8
  goto L_8040379C; // 804036AC
L_804036B0:;
  c->r[5]=c->r[28]|c->r[28]; // 804036B0
  c->r[3]=c->r[29]+0x00000810u; // 804036B4
  c->r[4]=c->r[13]+0xFFFFE098u; // 804036B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804036BC
  c->lr=0x804036C4u; f_803A6E30(c); // 804036C0
  c->r[0]=R32(c->r[27]+0x00000008u); // 804036C4
  c->r[3]=c->r[29]+0x00000810u; // 804036C8
  W32(c->r[23]+0x00000000u,c->r[0]); // 804036CC
  c->lr=0x804036D4u; f_803ADAA8(c); // 804036D0
  c->r[26]=c->r[3]|c->r[3]; // 804036D4
  c->r[3]=c->r[29]+0x00000428u; // 804036D8
  c->lr=0x804036E0u; f_803ADAA8(c); // 804036DC
  c->r[4]=c->r[29]+0x00000040u; // 804036E0
  c->r[0]=c->r[26]+c->r[3]; // 804036E4
  c->r[26]=c->r[4]+c->r[0]; // 804036E8
  c->r[26]=c->r[26]+0x00000002u; // 804036EC
  c->r[3]=c->r[26]|c->r[26]; // 804036F0
  c->lr=0x804036F8u; f_803ADAA8(c); // 804036F4
  c->r[28]=c->r[3]+0x00000002u; // 804036F8
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 804036FC
  c->r[4]=c->r[28]|c->r[28]; // 80403700
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403704
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80403708
  c->ctr=c->r[12]; // 8040370C
  if (true) { c->lr=0x80403714u; dispatch(c,c->ctr); } // 80403710
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403714
  c->r[6]=c->r[27]+0x00010000u; // 80403718
  c->r[4]=c->r[26]|c->r[26]; // 8040371C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403720
  c->r[5]=c->r[6]+c->r[0]; // 80403724
  W32(c->r[5]+0xFFFF9C4Cu,c->r[3]); // 80403728
  c->r[0]=R32(c->r[27]+0x00000008u); // 8040372C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403730
  c->r[3]=c->r[6]+c->r[0]; // 80403734
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 80403738
  c->lr=0x80403740u; f_803A6F10(c); // 8040373C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80403740
  c->r[4]=c->r[28]|c->r[28]; // 80403744
  c->r[0]=c->r[3]+0x00000001u; // 80403748
  W32(c->r[27]+0x00000008u,c->r[0]); // 8040374C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80403750
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403754
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80403758
  c->ctr=c->r[12]; // 8040375C
  if (true) { c->lr=0x80403764u; dispatch(c,c->ctr); } // 80403760
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403764
  c->r[6]=c->r[27]+0x00010000u; // 80403768
  c->r[4]=c->r[26]|c->r[26]; // 8040376C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403770
  c->r[5]=c->r[6]+c->r[0]; // 80403774
  W32(c->r[5]+0xFFFF9C4Cu,c->r[3]); // 80403778
  c->r[0]=R32(c->r[27]+0x00000008u); // 8040377C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403780
  c->r[3]=c->r[6]+c->r[0]; // 80403784
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 80403788
  c->lr=0x80403790u; f_803A6F10(c); // 8040378C
  c->r[3]=R32(c->r[27]+0x00000008u); // 80403790
  c->r[0]=c->r[3]+0x00000001u; // 80403794
  W32(c->r[27]+0x00000008u,c->r[0]); // 80403798
L_8040379C:;
  c->r[3]=0u+0x00000001u; // 8040379C
  goto L_80403998; // 804037A0
L_804037A4:;
  c->r[3]=c->r[29]+0x00000810u; // 804037A4
  c->r[4]=c->r[30]+0x00000E4Cu; // 804037A8
  c->lr=0x804037B0u; f_803A7040(c); // 804037AC
  cmps(c,0,(int32_t)c->r[3],0); // 804037B0
  if (!crb(c,2)) { goto L_804038EC; } // 804037B4
  c->r[3]=R32(c->r[27]+0x00000000u); // 804037B8
  c->r[4]=c->r[29]+0x00000040u; // 804037BC
  c->r[5]=0u+0x000003E7u; // 804037C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 804037C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 804037C8
  c->ctr=c->r[12]; // 804037CC
  if (true) { c->lr=0x804037D4u; dispatch(c,c->ctr); } // 804037D0
  c->r[3]=c->r[29]+0x00000040u; // 804037D4
  c->r[5]=c->r[29]+0x00000428u; // 804037D8
  c->r[6]=c->r[29]+0x00000810u; // 804037DC
  c->r[4]=c->r[13]+0xFFFFE09Cu; // 804037E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804037E4
  c->lr=0x804037ECu; f_803A6E30(c); // 804037E8
  c->r[5]=c->r[28]|c->r[28]; // 804037EC
  c->r[3]=c->r[29]+0x00000810u; // 804037F0
  c->r[4]=c->r[13]+0xFFFFE0A4u; // 804037F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804037F8
  c->lr=0x80403800u; f_803A6E30(c); // 804037FC
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403800
  c->r[3]=c->r[29]+0x00000810u; // 80403804
  W32(c->r[23]+0x00000000u,c->r[0]); // 80403808
  c->lr=0x80403810u; f_803ADAA8(c); // 8040380C
  c->r[26]=c->r[3]|c->r[3]; // 80403810
  c->r[3]=c->r[29]+0x00000428u; // 80403814
  c->lr=0x8040381Cu; f_803ADAA8(c); // 80403818
  c->r[31]=c->r[29]+0x00000040u; // 8040381C
  c->r[0]=c->r[26]+c->r[3]; // 80403820
  c->r[26]=c->r[31]+c->r[0]; // 80403824
  c->r[26]=c->r[26]+0x00000002u; // 80403828
  c->r[3]=c->r[26]|c->r[26]; // 8040382C
  c->lr=0x80403834u; f_803ADAA8(c); // 80403830
  c->r[4]=c->r[3]+0x00000002u; // 80403834
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80403838
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040383C
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80403840
  c->ctr=c->r[12]; // 80403844
  if (true) { c->lr=0x8040384Cu; dispatch(c,c->ctr); } // 80403848
  c->r[0]=R32(c->r[27]+0x00000008u); // 8040384C
  c->r[6]=c->r[27]+0x00010000u; // 80403850
  c->r[4]=c->r[26]|c->r[26]; // 80403854
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403858
  c->r[5]=c->r[6]+c->r[0]; // 8040385C
  W32(c->r[5]+0xFFFF9C4Cu,c->r[3]); // 80403860
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403864
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403868
  c->r[3]=c->r[6]+c->r[0]; // 8040386C
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 80403870
  c->lr=0x80403878u; f_803A6F10(c); // 80403874
  c->r[6]=R32(c->r[27]+0x00000008u); // 80403878
  c->r[4]=c->r[31]|c->r[31]; // 8040387C
  c->r[3]=R32(c->r[27]+0x00000000u); // 80403880
  c->r[5]=0u+0x000003E7u; // 80403884
  c->r[0]=c->r[6]+0x00000001u; // 80403888
  W32(c->r[27]+0x00000008u,c->r[0]); // 8040388C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403890
  c->r[12]=R32(c->r[12]+0x00000010u); // 80403894
  c->ctr=c->r[12]; // 80403898
  if (true) { c->lr=0x804038A0u; dispatch(c,c->ctr); } // 8040389C
  c->r[3]=c->r[31]|c->r[31]; // 804038A0
  c->r[5]=c->r[29]+0x00000428u; // 804038A4
  c->r[4]=c->r[13]+0xFFFFE0A8u; // 804038A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804038AC
  c->lr=0x804038B4u; f_803A6E30(c); // 804038B0
  c->r[3]=c->r[29]+0x00000428u; // 804038B4
  c->lr=0x804038BCu; f_803ADAA8(c); // 804038B8
  c->r[3]=c->r[31]+c->r[3]; // 804038BC
  c->r[4]=c->r[30]+0x00000E60u; // 804038C0
  c->r[3]=c->r[3]+0x00000001u; // 804038C4
  c->r[5]=c->r[28]+0x00000008u; // 804038C8
  c->r[6]=c->r[28]+0x0000000Cu; // 804038CC
  c->r[7]=c->r[28]+0x00000010u; // 804038D0
  c->r[8]=c->r[28]+0x00000014u; // 804038D4
  c->r[9]=c->r[28]+0x00000018u; // 804038D8
  c->r[10]=c->r[28]+0x0000001Cu; // 804038DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804038E0
  c->lr=0x804038E8u; f_803A6E30(c); // 804038E4
  goto L_80403984; // 804038E8
L_804038EC:;
  c->r[5]=c->r[28]|c->r[28]; // 804038EC
  c->r[3]=c->r[29]+0x00000810u; // 804038F0
  c->r[4]=c->r[13]+0xFFFFE0ACu; // 804038F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 804038F8
  c->lr=0x80403900u; f_803A6E30(c); // 804038FC
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403900
  c->r[3]=c->r[29]+0x00000810u; // 80403904
  W32(c->r[23]+0x00000000u,c->r[0]); // 80403908
  c->lr=0x80403910u; f_803ADAA8(c); // 8040390C
  c->r[28]=c->r[3]|c->r[3]; // 80403910
  c->r[3]=c->r[29]+0x00000428u; // 80403914
  c->lr=0x8040391Cu; f_803ADAA8(c); // 80403918
  c->r[4]=c->r[29]+0x00000040u; // 8040391C
  c->r[0]=c->r[28]+c->r[3]; // 80403920
  c->r[26]=c->r[4]+c->r[0]; // 80403924
  c->r[26]=c->r[26]+0x00000002u; // 80403928
  c->r[3]=c->r[26]|c->r[26]; // 8040392C
  c->lr=0x80403934u; f_803ADAA8(c); // 80403930
  c->r[4]=c->r[3]+0x00000002u; // 80403934
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80403938
  c->r[12]=R32(c->r[3]+0x00000000u); // 8040393C
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80403940
  c->ctr=c->r[12]; // 80403944
  if (true) { c->lr=0x8040394Cu; dispatch(c,c->ctr); } // 80403948
  c->r[0]=R32(c->r[27]+0x00000008u); // 8040394C
  c->r[6]=c->r[27]+0x00010000u; // 80403950
  c->r[4]=c->r[26]|c->r[26]; // 80403954
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403958
  c->r[5]=c->r[6]+c->r[0]; // 8040395C
  W32(c->r[5]+0xFFFF9C4Cu,c->r[3]); // 80403960
  c->r[0]=R32(c->r[27]+0x00000008u); // 80403964
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80403968
  c->r[3]=c->r[6]+c->r[0]; // 8040396C
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 80403970
  c->lr=0x80403978u; f_803A6F10(c); // 80403974
  c->r[3]=R32(c->r[27]+0x00000008u); // 80403978
  c->r[0]=c->r[3]+0x00000001u; // 8040397C
  W32(c->r[27]+0x00000008u,c->r[0]); // 80403980
L_80403984:;
  c->r[3]=0u+0x00000001u; // 80403984
  goto L_80403998; // 80403988
L_8040398C:;
  c->r[3]=0u+0x00000000u; // 8040398C
  goto L_80403998; // 80403990
L_80403994:;
  c->r[3]=0u+0x00000000u; // 80403994
L_80403998:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80403998
  c->r[0]=R32(c->r[1]+0x00000034u); // 8040399C
  c->lr=c->r[0]; // 804039A0
  c->r[1]=c->r[1]+0x00000030u; // 804039A4
  return; // 804039A8
}

// fn_804039AC
void f_804039AC(Ctx* __restrict c) {
  trace_call(0x804039ACu);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804039AC
  c->r[3]=c->r[3]+c->r[0]; // 804039B0
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 804039B4
  return; // 804039B8
}

// fn_804039BC
void f_804039BC(Ctx* __restrict c) {
  trace_call(0x804039BCu);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 804039BC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 804039C0
  c->r[10]=R32(c->r[5]+0x00000004u); // 804039C4
  c->r[3]=c->r[3]+c->r[0]; // 804039C8
  c->r[9]=R32(c->r[5]+0x00000008u); // 804039CC
  c->r[0]=c->r[6]+0x00000004u; // 804039D0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 804039D4
  c->r[8]=R32(c->r[5]+0x00000010u); // 804039D8
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 804039DC
  c->r[7]=R32(c->r[5]+0x00000018u); // 804039E0
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 804039E4
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[2]);} // 804039E8
  W32(c->r[6]+0x00000004u,c->r[10]); // 804039EC
  W32(c->r[6]+0x00000008u,c->r[9]); // 804039F0
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[1]);} // 804039F4
  W32(c->r[6]+0x00000010u,c->r[8]); // 804039F8
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 804039FC
  W32(c->r[6]+0x00000018u,c->r[7]); // 80403A00
  W32(c->r[6]+0x0000001Cu,c->r[4]); // 80403A04
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80403A08
  return; // 80403A0C
}

// fn_80403A10
void f_80403A10(Ctx* __restrict c) {
  trace_call(0x80403A10u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 80403A10
  c->r[4]=c->r[4]+0x00000004u; // 80403A14
  f_803AD4D0(c); return; // 80403A18
}

// fn_80403A1C
void f_80403A1C(Ctx* __restrict c) {
  trace_call(0x80403A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403A1C
  c->r[0]=c->lr; // 80403A20
  W32(c->r[1]+0x00000034u,c->r[0]); // 80403A24
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80403A28
  c->r[31]=c->r[3]|c->r[3]; // 80403A2C
  c->r[26]=c->r[4]|c->r[4]; // 80403A30
  c->r[5]=R32(c->r[4]+0x00000000u); // 80403A34
  c->r[4]=0u+0x00000000u; // 80403A38
  goto L_80403A48; // 80403A3C
L_80403A40:;
  c->r[5]=R32(c->r[5]+0x00000038u); // 80403A40
  c->r[4]=c->r[4]+0x00000001u; // 80403A44
L_80403A48:;
  cmps(c,0,(int32_t)c->r[5],0); // 80403A48
  if (!crb(c,2)) { IRQCHK(c); goto L_80403A40; } // 80403A4C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80403A50
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80403A54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403A58
  c->r[12]=R32(c->r[12]+0x000000D4u); // 80403A5C
  c->ctr=c->r[12]; // 80403A60
  if (true) { c->lr=0x80403A68u; dispatch(c,c->ctr); } // 80403A64
  c->r[4]=R32(c->r[26]+0x00000000u); // 80403A68
  c->r[25]=c->r[3]|c->r[3]; // 80403A6C
  c->r[27]=0u+0x00000000u; // 80403A70
  goto L_80403A88; // 80403A74
L_80403A78:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 80403A78
  c->r[3]=c->r[3]+0x00000004u; // 80403A7C
  c->r[27]=c->r[27]+0x00000001u; // 80403A80
  c->r[4]=R32(c->r[4]+0x00000038u); // 80403A84
L_80403A88:;
  cmps(c,0,(int32_t)c->r[4],0); // 80403A88
  if (!crb(c,2)) { IRQCHK(c); goto L_80403A78; } // 80403A8C
  c->r[28]=c->r[31]|c->r[31]; // 80403A90
  c->r[26]=0u+0x00000000u; // 80403A94
  c->r[29]=0u+0x80400000u; // 80403A98
  c->r[30]=0u+0x00000000u; // 80403A9C
  goto L_80403B14; // 80403AA0
L_80403AA4:;
  c->r[3]=c->r[28]+0x00010000u; // 80403AA4
  c->r[4]=c->r[25]|c->r[25]; // 80403AA8
  c->r[3]=R32(c->r[3]+0xFFFF9C4Cu); // 80403AAC
  c->r[5]=c->r[27]|c->r[27]; // 80403AB0
  c->r[7]=c->r[29]+0x00003A10u; // 80403AB4
  c->r[6]=0u+0x00000004u; // 80403AB8
  c->lr=0x80403AC0u; f_803A2414(c); // 80403ABC
  cmps(c,0,(int32_t)c->r[3],0); // 80403AC0
  if (crb(c,2)) { goto L_80403AE0; } // 80403AC4
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80403AC8
  cmps(c,0,(int32_t)c->r[4],0); // 80403ACC
  if (crb(c,2)) { goto L_80403AF0; } // 80403AD0
  c->r[0]=R32(c->r[3]+0x00000000u); // 80403AD4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80403AD8
  goto L_80403AF0; // 80403ADC
L_80403AE0:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80403AE0
  cmps(c,0,(int32_t)c->r[3],0); // 80403AE4
  if (crb(c,2)) { goto L_80403AF0; } // 80403AE8
  W32(c->r[3]+0x00000000u,c->r[30]); // 80403AEC
L_80403AF0:;
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80403AF0
  c->r[4]=c->r[28]+0x00010000u; // 80403AF4
  c->r[4]=R32(c->r[4]+0xFFFF9C4Cu); // 80403AF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403AFC
  c->r[12]=R32(c->r[12]+0x000000D8u); // 80403B00
  c->ctr=c->r[12]; // 80403B04
  if (true) { c->lr=0x80403B0Cu; dispatch(c,c->ctr); } // 80403B08
  c->r[28]=c->r[28]+0x00000004u; // 80403B0C
  c->r[26]=c->r[26]+0x00000001u; // 80403B10
L_80403B14:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80403B14
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80403B18
  if (crb(c,0)) { IRQCHK(c); goto L_80403AA4; } // 80403B1C
  c->r[3]=R32(c->r[13]+0xFFFFF430u); // 80403B20
  c->r[4]=c->r[25]|c->r[25]; // 80403B24
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403B28
  c->r[12]=R32(c->r[12]+0x000000D8u); // 80403B2C
  c->ctr=c->r[12]; // 80403B30
  if (true) { c->lr=0x80403B38u; dispatch(c,c->ctr); } // 80403B34
  c->r[0]=0u+0x00000000u; // 80403B38
  W32(c->r[31]+0x00000008u,c->r[0]); // 80403B3C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80403B40
  c->r[0]=R32(c->r[1]+0x00000034u); // 80403B44
  c->lr=c->r[0]; // 80403B48
  c->r[1]=c->r[1]+0x00000030u; // 80403B4C
  return; // 80403B50
}

// fn_80403B54
void f_80403B54(Ctx* __restrict c) {
  trace_call(0x80403B54u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403B54
  c->r[0]=c->lr; // 80403B58
  W32(c->r[1]+0x000001A4u,c->r[0]); // 80403B5C
  W32(c->r[1]+0x0000019Cu,c->r[31]); // 80403B60
  c->r[31]=c->r[5]|c->r[5]; // 80403B64
  W32(c->r[1]+0x00000198u,c->r[30]); // 80403B68
  c->r[30]=c->r[3]|c->r[3]; // 80403B6C
  c->r[3]=c->r[4]|c->r[4]; // 80403B70
  c->lr=0x80403B78u; f_80402BF0(c); // 80403B74
  c->r[6]=c->r[3]|c->r[3]; // 80403B78
  c->r[7]=c->r[31]|c->r[31]; // 80403B7C
  c->r[3]=c->r[1]+0x00000008u; // 80403B80
  c->r[4]=0u+0x00000190u; // 80403B84
  c->r[5]=c->r[13]+0xFFFFE0B0u; // 80403B88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403B8C
  c->lr=0x80403B94u; f_804003CC(c); // 80403B90
  c->r[3]=R32(c->r[30]+0x00000000u); // 80403B94
  c->r[4]=c->r[1]+0x00000008u; // 80403B98
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403B9C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80403BA0
  c->ctr=c->r[12]; // 80403BA4
  if (true) { c->lr=0x80403BACu; dispatch(c,c->ctr); } // 80403BA8
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80403BAC
  c->r[31]=R32(c->r[1]+0x0000019Cu); // 80403BB0
  c->r[30]=R32(c->r[1]+0x00000198u); // 80403BB4
  c->lr=c->r[0]; // 80403BB8
  c->r[1]=c->r[1]+0x000001A0u; // 80403BBC
  return; // 80403BC0
}

// fn_80403BC4
void f_80403BC4(Ctx* __restrict c) {
  trace_call(0x80403BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403BC4
  c->r[0]=c->lr; // 80403BC8
  W32(c->r[1]+0x000001B4u,c->r[0]); // 80403BCC
  {uint32_t ea=c->r[1]+0x000001A8u; WF64(ea,c->f[31]);} // 80403BD0
  c->f[31]=c->f[1]; // 80403BD4
  W32(c->r[1]+0x000001A4u,c->r[31]); // 80403BD8
  c->r[31]=c->r[3]|c->r[3]; // 80403BDC
  c->r[3]=c->r[4]|c->r[4]; // 80403BE0
  c->lr=0x80403BE8u; f_80402BF0(c); // 80403BE4
  c->f[1]=c->f[31]; // 80403BE8
  c->r[6]=c->r[3]|c->r[3]; // 80403BEC
  c->r[3]=c->r[1]+0x00000008u; // 80403BF0
  c->r[4]=0u+0x00000190u; // 80403BF4
  c->r[5]=c->r[13]+0xFFFFE0B8u; // 80403BF8
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80403BFC
  c->lr=0x80403C04u; f_804003CC(c); // 80403C00
  c->r[3]=R32(c->r[31]+0x00000000u); // 80403C04
  c->r[4]=c->r[1]+0x00000008u; // 80403C08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403C0C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80403C10
  c->ctr=c->r[12]; // 80403C14
  if (true) { c->lr=0x80403C1Cu; dispatch(c,c->ctr); } // 80403C18
  c->r[0]=R32(c->r[1]+0x000001B4u); // 80403C1C
  {uint32_t ea=c->r[1]+0x000001A8u; c->f[31]=RF64(ea);} // 80403C20
  c->r[31]=R32(c->r[1]+0x000001A4u); // 80403C24
  c->lr=c->r[0]; // 80403C28
  c->r[1]=c->r[1]+0x000001B0u; // 80403C2C
  return; // 80403C30
}

// fn_80403C34
void f_80403C34(Ctx* __restrict c) {
  trace_call(0x80403C34u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403C34
  c->r[0]=c->lr; // 80403C38
  W32(c->r[1]+0x000001A4u,c->r[0]); // 80403C3C
  W32(c->r[1]+0x0000019Cu,c->r[31]); // 80403C40
  c->r[31]=c->r[5]|c->r[5]; // 80403C44
  W32(c->r[1]+0x00000198u,c->r[30]); // 80403C48
  c->r[30]=c->r[3]|c->r[3]; // 80403C4C
  c->r[3]=c->r[4]|c->r[4]; // 80403C50
  c->lr=0x80403C58u; f_80402BF0(c); // 80403C54
  c->r[6]=c->r[3]|c->r[3]; // 80403C58
  c->r[7]=c->r[31]|c->r[31]; // 80403C5C
  c->r[3]=c->r[1]+0x00000008u; // 80403C60
  c->r[4]=0u+0x00000190u; // 80403C64
  c->r[5]=c->r[13]+0xFFFFE0C0u; // 80403C68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403C6C
  c->lr=0x80403C74u; f_804003CC(c); // 80403C70
  c->r[3]=R32(c->r[30]+0x00000000u); // 80403C74
  c->r[4]=c->r[1]+0x00000008u; // 80403C78
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403C7C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80403C80
  c->ctr=c->r[12]; // 80403C84
  if (true) { c->lr=0x80403C8Cu; dispatch(c,c->ctr); } // 80403C88
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80403C8C
  c->r[31]=R32(c->r[1]+0x0000019Cu); // 80403C90
  c->r[30]=R32(c->r[1]+0x00000198u); // 80403C94
  c->lr=c->r[0]; // 80403C98
  c->r[1]=c->r[1]+0x000001A0u; // 80403C9C
  return; // 80403CA0
}

// fn_80403CA4
void f_80403CA4(Ctx* __restrict c) {
  trace_call(0x80403CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403CA4
  c->r[0]=c->lr; // 80403CA8
  cmps(c,0,(int32_t)c->r[5],0); // 80403CAC
  W32(c->r[1]+0x000001A4u,c->r[0]); // 80403CB0
  W32(c->r[1]+0x0000019Cu,c->r[31]); // 80403CB4
  c->r[31]=c->r[5]|c->r[5]; // 80403CB8
  W32(c->r[1]+0x00000198u,c->r[30]); // 80403CBC
  c->r[30]=c->r[3]|c->r[3]; // 80403CC0
  if (crb(c,2)) { goto L_80403CF0; } // 80403CC4
  c->r[3]=c->r[4]|c->r[4]; // 80403CC8
  c->lr=0x80403CD0u; f_80402BF0(c); // 80403CCC
  c->r[6]=c->r[3]|c->r[3]; // 80403CD0
  c->r[3]=c->r[1]+0x00000008u; // 80403CD4
  c->r[7]=c->r[31]+0x00000004u; // 80403CD8
  c->r[4]=0u+0x00000190u; // 80403CDC
  c->r[5]=c->r[13]+0xFFFFE0C8u; // 80403CE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403CE4
  c->lr=0x80403CECu; f_804003CC(c); // 80403CE8
  goto L_80403D14; // 80403CEC
L_80403CF0:;
  c->r[3]=c->r[4]|c->r[4]; // 80403CF0
  c->lr=0x80403CF8u; f_80402BF0(c); // 80403CF4
  c->r[5]=0u+0x80470000u; // 80403CF8
  c->r[6]=c->r[3]|c->r[3]; // 80403CFC
  c->r[3]=c->r[1]+0x00000008u; // 80403D00
  c->r[4]=0u+0x00000190u; // 80403D04
  c->r[5]=c->r[5]+0xFFFFB7A0u; // 80403D08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403D0C
  c->lr=0x80403D14u; f_804003CC(c); // 80403D10
L_80403D14:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80403D14
  c->r[4]=c->r[1]+0x00000008u; // 80403D18
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403D1C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80403D20
  c->ctr=c->r[12]; // 80403D24
  if (true) { c->lr=0x80403D2Cu; dispatch(c,c->ctr); } // 80403D28
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80403D2C
  c->r[31]=R32(c->r[1]+0x0000019Cu); // 80403D30
  c->r[30]=R32(c->r[1]+0x00000198u); // 80403D34
  c->lr=c->r[0]; // 80403D38
  c->r[1]=c->r[1]+0x000001A0u; // 80403D3C
  return; // 80403D40
}

// fn_80403D44
void f_80403D44(Ctx* __restrict c) {
  trace_call(0x80403D44u);
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403D44
  c->r[0]=c->lr; // 80403D48
  W32(c->r[1]+0x000001B4u,c->r[0]); // 80403D4C
  W32(c->r[1]+0x000001ACu,c->r[31]); // 80403D50
  c->r[31]=0u+0x80470000u; // 80403D54
  c->r[31]=c->r[31]+0xFFFFA610u; // 80403D58
  W32(c->r[1]+0x000001A8u,c->r[30]); // 80403D5C
  c->r[30]=c->r[5]|c->r[5]; // 80403D60
  W32(c->r[1]+0x000001A4u,c->r[29]); // 80403D64
  c->r[29]=c->r[3]|c->r[3]; // 80403D68
  c->r[3]=c->r[4]|c->r[4]; // 80403D6C
  c->lr=0x80403D74u; f_80402BF0(c); // 80403D70
  c->r[6]=c->r[3]|c->r[3]; // 80403D74
  c->r[3]=c->r[1]+0x00000008u; // 80403D78
  c->r[7]=c->r[31]+0x0000119Cu; // 80403D7C
  c->r[4]=0u+0x00000190u; // 80403D80
  c->r[5]=c->r[13]+0xFFFFE0D0u; // 80403D84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80403D88
  c->lr=0x80403D90u; f_804003CC(c); // 80403D8C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80403D90
  c->r[4]=c->r[1]+0x00000008u; // 80403D94
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403D98
  c->r[12]=R32(c->r[12]+0x00000014u); // 80403D9C
  c->ctr=c->r[12]; // 80403DA0
  if (true) { c->lr=0x80403DA8u; dispatch(c,c->ctr); } // 80403DA4
  c->r[4]=R32(c->r[30]+0x00000004u); // 80403DA8
  cmps(c,0,(int32_t)c->r[4],0); // 80403DAC
  if (crb(c,2)) { goto L_80403DD8; } // 80403DB0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80403DB4
  c->r[7]=c->r[4]+0x00000004u; // 80403DB8
  c->r[3]=c->r[1]+0x00000008u; // 80403DBC
  c->r[5]=c->r[31]+0x000011B0u; // 80403DC0
  c->r[4]=0u+0x00000190u; // 80403DC4
  c->r[6]=c->r[13]+0xFFFFE0D8u; // 80403DC8
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80403DCC
  c->lr=0x80403DD4u; f_804003CC(c); // 80403DD0
  goto L_80403DF4; // 80403DD4
L_80403DD8:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80403DD8
  c->r[3]=c->r[1]+0x00000008u; // 80403DDC
  c->r[5]=c->r[31]+0x000011BCu; // 80403DE0
  c->r[4]=0u+0x00000190u; // 80403DE4
  c->r[6]=c->r[13]+0xFFFFE0E0u; // 80403DE8
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80403DEC
  c->lr=0x80403DF4u; f_804003CC(c); // 80403DF0
L_80403DF4:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80403DF4
  c->r[4]=c->r[1]+0x00000008u; // 80403DF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403DFC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80403E00
  c->ctr=c->r[12]; // 80403E04
  if (true) { c->lr=0x80403E0Cu; dispatch(c,c->ctr); } // 80403E08
  c->r[7]=R32(c->r[30]+0x00000008u); // 80403E0C
  c->r[3]=c->r[1]+0x00000008u; // 80403E10
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80403E14
  c->r[5]=c->r[31]+0x000011CCu; // 80403E18
  c->r[8]=R32(c->r[30]+0x00000010u); // 80403E1C
  c->r[4]=0u+0x00000190u; // 80403E20
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80403E24
  c->r[6]=c->r[13]+0xFFFFE0E8u; // 80403E28
  c->r[9]=R32(c->r[30]+0x00000018u); // 80403E2C
  c->r[10]=R32(c->r[30]+0x0000001Cu); // 80403E30
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80403E34
  c->lr=0x80403E3Cu; f_804003CC(c); // 80403E38
  c->r[3]=R32(c->r[29]+0x00000000u); // 80403E3C
  c->r[4]=c->r[1]+0x00000008u; // 80403E40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80403E44
  c->r[12]=R32(c->r[12]+0x00000014u); // 80403E48
  c->ctr=c->r[12]; // 80403E4C
  if (true) { c->lr=0x80403E54u; dispatch(c,c->ctr); } // 80403E50
  c->r[0]=R32(c->r[1]+0x000001B4u); // 80403E54
  c->r[31]=R32(c->r[1]+0x000001ACu); // 80403E58
  c->r[30]=R32(c->r[1]+0x000001A8u); // 80403E5C
  c->r[29]=R32(c->r[1]+0x000001A4u); // 80403E60
  c->lr=c->r[0]; // 80403E64
  c->r[1]=c->r[1]+0x000001B0u; // 80403E68
  return; // 80403E6C
}

// fn_80403E70
void f_80403E70(Ctx* __restrict c) {
  trace_call(0x80403E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403E70
  c->r[4]=0u+0x80570000u; // 80403E74
  {uint32_t ea=c->r[2]+0xFFFFA9C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80403E78
  c->r[3]=c->r[4]+0x000043B8u; // 80403E7C
  {uint32_t ea=c->r[2]+0xFFFFA9C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80403E80
  c->r[11]=0u+0x80570000u; // 80403E84
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80403E88
  c->r[9]=c->r[1]+0x00000028u; // 80403E8C
  c->r[10]=c->r[1]+0x00000030u; // 80403E90
  c->r[5]=c->r[1]+0x00000008u; // 80403E94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80403E98
  c->r[7]=c->r[1]+0x00000018u; // 80403E9C
  c->r[8]=c->r[1]+0x00000020u; // 80403EA0
  c->r[6]=c->r[1]+0x00000010u; // 80403EA4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80403EA8
  c->r[11]=c->r[11]+0x000043C8u; // 80403EAC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 80403EB0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80403EB4
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 80403EB8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80403EBC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80403EC0
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 80403EC4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80403EC8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80403ECC
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 80403ED0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80403ED4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80403ED8
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 80403EDC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80403EE0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80403EE4
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 80403EE8
  {uint32_t ea=c->r[4]+0x000043B8u; WF32(ea,c->f[1]);} // 80403EEC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80403EF0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80403EF4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80403EF8
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 80403EFC
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 80403F00
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 80403F04
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 80403F08
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 80403F0C
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 80403F10
  c->r[1]=c->r[1]+0x00000040u; // 80403F14
  return; // 80403F18
}

// fn_80403F1C
void f_80403F1C(Ctx* __restrict c) {
  trace_call(0x80403F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403F1C
  c->r[0]=c->lr; // 80403F20
  W32(c->r[1]+0x00000064u,c->r[0]); // 80403F24
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80403F28
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80403F2C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80403F30
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80403F34
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80403F38
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80403F3C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 80403F40
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 80403F44
  {uint32_t ea=c->r[2]+0xFFFFA9D0u; c->f[29]=RF64(ea);} // 80403F48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80403F4C
  c->r[31]=0u+0x43300000u; // 80403F50
  {uint32_t ea=c->r[2]+0xFFFFA9C8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80403F54
  W32(c->r[1]+0x00000018u,c->r[30]); // 80403F58
  c->r[30]=0u+0x00000000u; // 80403F5C
  {uint32_t ea=c->r[2]+0xFFFFA9CCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80403F60
  W32(c->r[1]+0x00000014u,c->r[29]); // 80403F64
  c->r[29]=0u+0x80570000u; // 80403F68
  c->r[29]=c->r[29]+0x00004FF0u; // 80403F6C
L_80403F70:;
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80403F70
  W32(c->r[1]+0x00000008u,c->r[31]); // 80403F74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80403F78
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80403F7C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80403F80
  c->f[28]=c->ps1[28]=S(c->f[0]/c->f[31]); // 80403F84
  c->f[1]=c->f[28]; // 80403F88
  c->lr=0x80403F90u; f_803AD314(c); // 80403F8C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80403F90
  c->f[1]=c->f[28]; // 80403F94
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80403F98
  c->lr=0x80403FA0u; f_803ACF08(c); // 80403F9C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80403FA0
  c->r[30]=c->r[30]+0x00000001u; // 80403FA4
  cmpu(c,0,c->r[30],0x00000200u); // 80403FA8
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 80403FAC
  c->r[29]=c->r[29]+0x00000008u; // 80403FB0
  if (crb(c,0)) { IRQCHK(c); goto L_80403F70; } // 80403FB4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80403FB8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80403FBC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80403FC0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80403FC4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80403FC8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80403FCC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 80403FD0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 80403FD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80403FD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80403FDC
  c->r[0]=R32(c->r[1]+0x00000064u); // 80403FE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80403FE4
  c->lr=c->r[0]; // 80403FE8
  c->r[1]=c->r[1]+0x00000060u; // 80403FEC
  return; // 80403FF0
}

// fn_80403FF4
void f_80403FF4(Ctx* __restrict c) {
  trace_call(0x80403FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80403FF4
  c->r[0]=c->lr; // 80403FF8
  c->r[4]=0u+0x00000000u; // 80403FFC
  c->r[5]=0u+0x00004000u; // 80404000
  W32(c->r[1]+0x00000014u,c->r[0]); // 80404004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80404008
  c->r[31]=c->r[3]|c->r[3]; // 8040400C
  c->lr=0x80404014u; f_80006370(c); // 80404010
  c->r[4]=0u+0x80570000u; // 80404014
  c->r[3]=c->r[31]+0x00000C00u; // 80404018
  c->r[4]=c->r[4]+0x00004FF0u; // 8040401C
  c->r[5]=0u+0x00001000u; // 80404020
  c->lr=0x80404028u; f_8000626C(c); // 80404024
  c->lr=0x8040402Cu; f_803E3610(c); // 80404028
  c->r[0]=0u+0x00000001u; // 8040402C
  W8(c->r[13]+0xFFFFF478u,c->r[0]); // 80404030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80404034
  c->r[0]=R32(c->r[1]+0x00000014u); // 80404038
  c->lr=c->r[0]; // 8040403C
  c->r[1]=c->r[1]+0x00000010u; // 80404040
  return; // 80404044
}

// fn_80404048
void f_80404048(Ctx* __restrict c) {
  trace_call(0x80404048u);
  c->r[0]=0u+0x00000000u; // 80404048
  W8(c->r[13]+0xFFFFF478u,c->r[0]); // 8040404C
  return; // 80404050
}

// fn_80404054
void f_80404054(Ctx* __restrict c) {
  trace_call(0x80404054u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80404054
  c->r[0]=c->lr; // 80404058
  W32(c->r[1]+0x00000174u,c->r[0]); // 8040405C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[31]);} // 80404060
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,31,ea,0,0);} // 80404064
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[30]);} // 80404068
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,30,ea,0,0);} // 8040406C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[29]);} // 80404070
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,29,ea,0,0);} // 80404074
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[28]);} // 80404078
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,28,ea,0,0);} // 8040407C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[27]);} // 80404080
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,27,ea,0,0);} // 80404084
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[26]);} // 80404088
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,26,ea,0,0);} // 8040408C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[25]);} // 80404090
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,25,ea,0,0);} // 80404094
  c->r[11]=c->r[1]+0x00000100u; // 80404098
  c->lr=0x804040A0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8040409C
  c->r[31]=0u+0x80490000u; // 804040A0
  c->r[5]=0u+0x00000000u; // 804040A4
  c->r[31]=c->r[31]+0x000017D8u; // 804040A8
  c->r[0]=0u+0x00000010u; // 804040AC
  W32(c->r[3]+0x00001CA0u,c->r[5]); // 804040B0
  c->r[23]=c->r[3]|c->r[3]; // 804040B4
  c->r[4]=c->r[31]+0x00000120u; // 804040B8
  W32(c->r[3]+0x00001CA4u,c->r[5]); // 804040BC
  W32(c->r[3]+0x00001CA8u,c->r[0]); // 804040C0
  c->r[3]=c->r[1]+0x00000098u; // 804040C4
  c->lr=0x804040CCu; f_8025D380(c); // 804040C8
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[6]=c->ps1[6]=RF32(ea);} // 804040CC
  c->r[10]=c->r[1]+0x00000048u; // 804040D0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[5]=c->ps1[5]=RF32(ea);} // 804040D4
  c->r[9]=c->r[1]+0x00000050u; // 804040D8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 804040DC
  c->r[30]=c->r[1]+0x00000038u; // 804040E0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 804040E4
  c->r[12]=c->r[1]+0x00000040u; // 804040E8
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[10]=c->ps1[10]=RF32(ea);} // 804040EC
  c->r[27]=c->r[1]+0x00000028u; // 804040F0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[9]=c->ps1[9]=RF32(ea);} // 804040F4
  c->r[28]=c->r[1]+0x00000030u; // 804040F8
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[8]=c->ps1[8]=RF32(ea);} // 804040FC
  c->r[24]=c->r[1]+0x00000018u; // 80404100
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[7]=c->ps1[7]=RF32(ea);} // 80404104
  c->r[25]=c->r[1]+0x00000020u; // 80404108
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 8040410C
  c->r[4]=c->r[1]+0x00000058u; // 80404110
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[13]=c->ps1[13]=RF32(ea);} // 80404114
  c->r[8]=c->r[1]+0x00000060u; // 80404118
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[12]=c->ps1[12]=RF32(ea);} // 8040411C
  c->r[11]=c->r[1]+0x00000068u; // 80404120
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[11]=c->ps1[11]=RF32(ea);} // 80404124
  c->r[29]=c->r[1]+0x00000078u; // 80404128
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[27]=c->ps1[27]=RF32(ea);} // 8040412C
  c->r[26]=c->r[1]+0x00000088u; // 80404130
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=c->ps1[28]=RF32(ea);} // 80404134
  c->r[3]=c->r[23]+0x00001CC8u; // 80404138
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[29]=c->ps1[29]=RF32(ea);} // 8040413C
  c->r[5]=c->r[1]+0x00000010u; // 80404140
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[30]=c->ps1[30]=RF32(ea);} // 80404144
  c->r[6]=c->r[1]+0x00000008u; // 80404148
  {uint32_t ea=c->r[31]+0x00000094u; c->f[25]=c->ps1[25]=RF32(ea);} // 8040414C
  c->r[7]=0u+0x00000000u; // 80404150
  {uint32_t ea=c->r[31]+0x00000090u; c->f[26]=c->ps1[26]=RF32(ea);} // 80404154
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80404158
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8040415C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[3]);} // 80404160
  {uint32_t ea=c->r[2]+0xFFFFA9D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80404164
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[4]);} // 80404168
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,4,ea,0,0);} // 8040416C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[5]);} // 80404170
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[6]);} // 80404174
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,3,ea,0,0);} // 80404178
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[7]);} // 8040417C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[8]);} // 80404180
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,6,ea,0,0);} // 80404184
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 80404188
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[10]);} // 8040418C
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,5,ea,0,0);} // 80404190
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[11]);} // 80404194
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[12]);} // 80404198
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,8,ea,0,0);} // 8040419C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[13]);} // 804041A0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 804041A4
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,7,ea,0,0);} // 804041A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[30]);} // 804041AC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[29]);} // 804041B0
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,10,ea,0,0);} // 804041B4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[28]);} // 804041B8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[27]);} // 804041BC
  {uint32_t ea=c->r[25]+0x00000000u; psq_load(c,9,ea,0,0);} // 804041C0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 804041C4
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,3,ea,0,0);} // 804041C8
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,6,ea,0,0);} // 804041CC
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,5,ea,0,0);} // 804041D0
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,8,ea,0,0);} // 804041D4
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,7,ea,0,0);} // 804041D8
  {uint32_t ea=c->r[26]+0x00000000u; psq_store(c,10,ea,0,0);} // 804041DC
  {uint32_t ea=c->r[26]+0x00000008u; psq_store(c,9,ea,0,0);} // 804041E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[26]);} // 804041E4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[25]);} // 804041E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 804041EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 804041F0
  c->lr=0x804041F8u; f_803D53D0(c); // 804041F4
  {uint32_t ea=c->r[13]+0xFFFFF434u; c->f[5]=c->ps1[5]=RF32(ea);} // 804041F8
  {uint32_t ea=c->r[13]+0xFFFFF438u; c->f[6]=c->ps1[6]=RF32(ea);} // 804041FC
  {uint32_t ea=c->r[2]+0xFFFFA9DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80404200
  c->f[1]=-c->f[5]; // 80404204
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[6]); // 80404208
  {uint32_t ea=c->r[2]+0xFFFFA9D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8040420C
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[5]); // 80404210
  {uint32_t ea=c->r[23]+0x00001C08u; WF32(ea,c->f[0]);} // 80404214
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80404218
  {uint32_t ea=c->r[23]+0x00001C10u; WF32(ea,c->f[5]);} // 8040421C
  {uint32_t ea=c->r[23]+0x00001C14u; WF32(ea,c->f[6]);} // 80404220
  {uint32_t ea=c->r[23]+0x00001C04u; WF32(ea,c->f[3]);} // 80404224
  {uint32_t ea=c->r[23]+0x00001C00u; WF32(ea,c->f[2]);} // 80404228
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[4]); // 8040422C
  {uint32_t ea=c->r[23]+0x00001C18u; WF32(ea,c->f[0]);} // 80404230
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[2]); // 80404234
  {uint32_t ea=c->r[23]+0x00001C0Cu; WF32(ea,c->f[0]);} // 80404238
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,31,ea,0,0);} // 8040423C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[31]=RF64(ea);} // 80404240
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,30,ea,0,0);} // 80404244
  {uint32_t ea=c->r[1]+0x00000150u; c->f[30]=RF64(ea);} // 80404248
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,29,ea,0,0);} // 8040424C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[29]=RF64(ea);} // 80404250
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,28,ea,0,0);} // 80404254
  {uint32_t ea=c->r[1]+0x00000130u; c->f[28]=RF64(ea);} // 80404258
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,27,ea,0,0);} // 8040425C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[27]=RF64(ea);} // 80404260
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,26,ea,0,0);} // 80404264
  {uint32_t ea=c->r[1]+0x00000110u; c->f[26]=RF64(ea);} // 80404268
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,25,ea,0,0);} // 8040426C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[25]=RF64(ea);} // 80404270
  c->r[11]=c->r[1]+0x00000100u; // 80404274
  c->lr=0x8040427Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80404278
  c->r[0]=R32(c->r[1]+0x00000174u); // 8040427C
  c->lr=c->r[0]; // 80404280
  c->r[1]=c->r[1]+0x00000170u; // 80404284
  return; // 80404288
}

// fn_8040428C
void f_8040428C(Ctx* __restrict c) {
  trace_call(0x8040428Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8040428C
  c->r[4]=0u+0x80570000u; // 80404290
  {uint32_t ea=c->r[2]+0xFFFFA9D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80404294
  c->r[3]=c->r[4]+0x00004FB0u; // 80404298
  {uint32_t ea=c->r[2]+0xFFFFA9DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8040429C
  c->r[11]=0u+0x80570000u; // 804042A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 804042A4
  c->r[9]=c->r[1]+0x00000028u; // 804042A8
  c->r[10]=c->r[1]+0x00000030u; // 804042AC
  c->r[5]=c->r[1]+0x00000008u; // 804042B0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 804042B4
  c->r[7]=c->r[1]+0x00000018u; // 804042B8
  c->r[8]=c->r[1]+0x00000020u; // 804042BC
  c->r[6]=c->r[1]+0x00000010u; // 804042C0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 804042C4
  c->r[11]=c->r[11]+0x00004FC0u; // 804042C8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 804042CC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 804042D0
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,0,0);} // 804042D4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 804042D8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 804042DC
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,4,ea,0,0);} // 804042E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 804042E4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 804042E8
  {uint32_t ea=c->r[8]+0x00000000u; psq_load(c,5,ea,0,0);} // 804042EC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 804042F0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 804042F4
  {uint32_t ea=c->r[9]+0x00000000u; psq_load(c,0,ea,0,0);} // 804042F8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 804042FC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80404300
  {uint32_t ea=c->r[10]+0x00000000u; psq_load(c,6,ea,0,0);} // 80404304
  {uint32_t ea=c->r[4]+0x00004FB0u; WF32(ea,c->f[1]);} // 80404308
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8040430C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80404310
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80404314
  {uint32_t ea=c->r[11]+0x00000000u; psq_store(c,0,ea,0,0);} // 80404318
  {uint32_t ea=c->r[11]+0x00000008u; psq_store(c,6,ea,0,0);} // 8040431C
  {uint32_t ea=c->r[11]+0x00000010u; psq_store(c,4,ea,0,0);} // 80404320
  {uint32_t ea=c->r[11]+0x00000018u; psq_store(c,5,ea,0,0);} // 80404324
  {uint32_t ea=c->r[11]+0x00000020u; psq_store(c,2,ea,0,0);} // 80404328
  {uint32_t ea=c->r[11]+0x00000028u; psq_store(c,3,ea,0,0);} // 8040432C
  c->r[1]=c->r[1]+0x00000040u; // 80404330
  return; // 80404334
}

// ESP_InitLib
void f_80404338(Ctx* __restrict c) {
  trace_call(0x80404338u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80404338
  c->r[0]=c->lr; // 8040433C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80404340
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80404344
  c->r[31]=0u+0x00000000u; // 80404348
  c->r[0]=R32(c->r[13]+0xFFFFE0F0u); // 8040434C
  cmps(c,0,(int32_t)c->r[0],0); // 80404350
  if (!crb(c,0)) { goto L_80404374; } // 80404354
  c->r[3]=c->r[13]+0xFFFFE0F8u; // 80404358
  c->r[4]=0u+0x00000000u; // 8040435C
  c->lr=0x80404364u; f_8034D588(c); // 80404360
  cmps(c,0,(int32_t)c->r[3],0); // 80404364
  W32(c->r[13]+0xFFFFE0F0u,c->r[3]); // 80404368
  if (!crb(c,0)) { goto L_80404374; } // 8040436C
  c->r[31]=c->r[3]|c->r[3]; // 80404370
L_80404374:;
  c->r[3]=c->r[31]|c->r[31]; // 80404374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80404378
  c->r[0]=R32(c->r[1]+0x00000014u); // 8040437C
  c->lr=c->r[0]; // 80404380
  c->r[1]=c->r[1]+0x00000010u; // 80404384
  return; // 80404388
}

// ESP_CloseLib
void f_8040438C(Ctx* __restrict c) {
  trace_call(0x8040438Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8040438C
  c->r[0]=c->lr; // 80404390
  c->r[4]=0u+0x00000000u; // 80404394
  W32(c->r[1]+0x00000014u,c->r[0]); // 80404398
  c->r[3]=R32(c->r[13]+0xFFFFE0F0u); // 8040439C
  cmps(c,0,(int32_t)c->r[3],0); // 804043A0
  if (crb(c,0)) { goto L_804043C0; } // 804043A4
  c->lr=0x804043ACu; f_8034D768(c); // 804043A8
  cmps(c,0,(int32_t)c->r[3],0); // 804043AC
  c->r[4]=c->r[3]|c->r[3]; // 804043B0
  if (!crb(c,2)) { goto L_804043C0; } // 804043B4
  c->r[0]=0u+0xFFFFFFFFu; // 804043B8
  W32(c->r[13]+0xFFFFE0F0u,c->r[0]); // 804043BC
L_804043C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 804043C0
  c->r[3]=c->r[4]|c->r[4]; // 804043C4
  c->lr=c->r[0]; // 804043C8
  c->r[1]=c->r[1]+0x00000010u; // 804043CC
  return; // 804043D0
}

// ESP_LaunchTitle
void f_804043D4(Ctx* __restrict c) {
  trace_call(0x804043D4u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 804043D4
  c->r[12]=c->r[1]|c->r[1]; // 804043D8
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 804043DC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 804043E0
  c->r[0]=c->lr; // 804043E4
  W32(c->r[12]+0x00000004u,c->r[0]); // 804043E8
  c->r[7]=c->r[1]+0x000000F0u; // 804043EC
  c->r[10]=c->r[1]+0x00000020u; // 804043F0
  c->r[9]=R32(c->r[13]+0xFFFFE0F0u); // 804043F4
  cmps(c,0,(int32_t)c->r[9],0); // 804043F8
  if (!crb(c,0)) { goto L_80404408; } // 804043FC
  c->r[3]=0u+0xFFFFFC07u; // 80404400
  goto L_80404454; // 80404404
L_80404408:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80404408
  if (crb(c,2)) { goto L_80404418; } // 8040440C
  c->r[3]=0u+0xFFFFFC07u; // 80404410
  goto L_80404454; // 80404414
L_80404418:;
  c->r[8]=0u+0x00000008u; // 80404418
  c->r[0]=0u+0x000000D8u; // 8040441C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80404420
  c->r[4]=0u+0x00000008u; // 80404424
  c->r[6]=0u+0x00000000u; // 80404428
  W32(c->r[1]+0x00000020u,c->r[3]); // 8040442C
  c->r[3]=c->r[9]|c->r[9]; // 80404430
  W32(c->r[1]+0x000000F8u,c->r[5]); // 80404434
  c->r[5]=0u+0x00000002u; // 80404438
  W32(c->r[1]+0x000000F0u,c->r[10]); // 8040443C
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80404440
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80404444
  c->lr=0x8040444Cu; f_8034E264(c); // 80404448
  c->r[0]=0u+0xFFFFFFFFu; // 8040444C
  W32(c->r[13]+0xFFFFE0F0u,c->r[0]); // 80404450
L_80404454:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80404454
  c->r[0]=R32(c->r[10]+0x00000004u); // 80404458
  c->lr=c->r[0]; // 8040445C
  c->r[1]=c->r[10]|c->r[10]; // 80404460
  return; // 80404464
}

// ESP_GetTicketViews
void f_80404468(Ctx* __restrict c) {
  trace_call(0x80404468u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80404468
  c->r[12]=c->r[1]|c->r[1]; // 8040446C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80404470
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80404474
  c->r[0]=c->lr; // 80404478
  W32(c->r[12]+0x00000004u,c->r[0]); // 8040447C
  c->r[7]=c->r[1]+0x000000F0u; // 80404480
  c->r[11]=c->r[1]+0x00000020u; // 80404484
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80404488
  c->r[31]=c->r[6]|c->r[6]; // 8040448C
  c->r[12]=c->r[1]+0x00000040u; // 80404490
  c->r[10]=R32(c->r[13]+0xFFFFE0F0u); // 80404494
  cmps(c,0,(int32_t)c->r[10],0); // 80404498
  if (crb(c,0)) { goto L_804044AC; } // 8040449C
  c->r[8]=0u+0x00000000u; // 804044A0
  cmpu(c,0,c->r[6],c->r[8]); // 804044A4
  if (!crb(c,2)) { goto L_804044B4; } // 804044A8
L_804044AC:;
  c->r[3]=0u+0xFFFFFC07u; // 804044AC
  goto L_80404568; // 804044B0
L_804044B4:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 804044B4
  if (crb(c,2)) { goto L_804044C4; } // 804044B8
  c->r[3]=0u+0xFFFFFC07u; // 804044BC
  goto L_80404568; // 804044C0
L_804044C4:;
  cmpu(c,0,c->r[5],c->r[8]); // 804044C4
  W32(c->r[1]+0x00000024u,c->r[4]); // 804044C8
  W32(c->r[1]+0x00000020u,c->r[3]); // 804044CC
  if (!crb(c,2)) { goto L_80404514; } // 804044D0
  c->r[5]=0u+0x00000008u; // 804044D4
  c->r[0]=0u+0x00000004u; // 804044D8
  W32(c->r[1]+0x000000F4u,c->r[5]); // 804044DC
  c->r[3]=c->r[10]|c->r[10]; // 804044E0
  c->r[4]=0u+0x00000012u; // 804044E4
  c->r[5]=0u+0x00000001u; // 804044E8
  W32(c->r[1]+0x000000F0u,c->r[11]); // 804044EC
  c->r[6]=0u+0x00000001u; // 804044F0
  W32(c->r[1]+0x000000F8u,c->r[12]); // 804044F4
  W32(c->r[1]+0x000000FCu,c->r[0]); // 804044F8
  c->lr=0x80404500u; f_8034E188(c); // 804044FC
  cmps(c,0,(int32_t)c->r[3],0); // 80404500
  if (!crb(c,2)) { goto L_80404568; } // 80404504
  c->r[0]=R32(c->r[1]+0x00000040u); // 80404508
  W32(c->r[31]+0x00000000u,c->r[0]); // 8040450C
  goto L_80404568; // 80404510
L_80404514:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 80404514
  cmps(c,0,(int32_t)c->r[9],0); // 80404518
  if (!crb(c,2)) { goto L_80404528; } // 8040451C
  c->r[3]=0u+0xFFFFFC07u; // 80404520
  goto L_80404568; // 80404524
L_80404528:;
  c->r[8]=0u+0x00000008u; // 80404528
  c->r[0]=0u+0x00000004u; // 8040452C
  W32(c->r[1]+0x00000100u,c->r[5]); // 80404530
  c->r[3]=c->r[10]|c->r[10]; // 80404534
  c->r[4]=0u+0x00000013u; // 80404538
  c->r[5]=0u+0x00000002u; // 8040453C
  W32(c->r[1]+0x00000040u,c->r[9]); // 80404540
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80404544
  W32(c->r[1]+0x000000F4u,c->r[8]); // 80404548
  W32(c->r[1]+0x000000F8u,c->r[12]); // 8040454C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80404550
  c->r[0]=R32(c->r[6]+0x00000000u); // 80404554
  c->r[6]=0u+0x00000001u; // 80404558
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8040455C
  W32(c->r[1]+0x00000104u,c->r[0]); // 80404560
  c->lr=0x80404568u; f_8034E188(c); // 80404564
L_80404568:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80404568
  c->r[0]=R32(c->r[10]+0x00000004u); // 8040456C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80404570
  c->lr=c->r[0]; // 80404574
  c->r[1]=c->r[10]|c->r[10]; // 80404578
  return; // 8040457C
}

// ESP_DiGetTicketView
void f_80404580(Ctx* __restrict c) {
  trace_call(0x80404580u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80404580
  c->r[12]=c->r[1]|c->r[1]; // 80404584
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80404588
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8040458C
  c->r[0]=c->lr; // 80404590
  W32(c->r[12]+0x00000004u,c->r[0]); // 80404594
  c->r[7]=c->r[1]+0x000000F0u; // 80404598
  c->r[0]=R32(c->r[13]+0xFFFFE0F0u); // 8040459C
  cmps(c,0,(int32_t)c->r[0],0); // 804045A0
  if (crb(c,0)) { goto L_804045B4; } // 804045A4
  c->r[5]=0u+0x00000000u; // 804045A8
  cmpu(c,0,c->r[4],c->r[5]); // 804045AC
  if (!crb(c,2)) { goto L_804045BC; } // 804045B0
L_804045B4:;
  c->r[3]=0u+0xFFFFFC07u; // 804045B4
  goto L_80404610; // 804045B8
L_804045BC:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 804045BC
  if (!crb(c,2)) { goto L_804045CC; } // 804045C0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 804045C4
  if (crb(c,2)) { goto L_804045D4; } // 804045C8
L_804045CC:;
  c->r[3]=0u+0xFFFFFC07u; // 804045CC
  goto L_80404610; // 804045D0
L_804045D4:;
  cmpu(c,0,c->r[3],c->r[5]); // 804045D4
  W32(c->r[1]+0x000000F0u,c->r[3]); // 804045D8
  if (!crb(c,2)) { goto L_804045E8; } // 804045DC
  W32(c->r[1]+0x000000F4u,c->r[5]); // 804045E0
  goto L_804045F0; // 804045E4
L_804045E8:;
  c->r[0]=0u+0x000002A4u; // 804045E8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 804045EC
L_804045F0:;
  c->r[0]=0u+0x000000D8u; // 804045F0
  W32(c->r[1]+0x000000F8u,c->r[4]); // 804045F4
  c->r[3]=R32(c->r[13]+0xFFFFE0F0u); // 804045F8
  c->r[4]=0u+0x0000001Bu; // 804045FC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 80404600
  c->r[5]=0u+0x00000001u; // 80404604
  c->r[6]=0u+0x00000001u; // 80404608
  c->lr=0x80404610u; f_8034E188(c); // 8040460C
L_80404610:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80404610
  c->r[0]=R32(c->r[10]+0x00000004u); // 80404614
  c->lr=c->r[0]; // 80404618
  c->r[1]=c->r[10]|c->r[10]; // 8040461C
  return; // 80404620
}

// ESP_DiGetTmd
void f_80404624(Ctx* __restrict c) {
  trace_call(0x80404624u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80404624
  c->r[12]=c->r[1]|c->r[1]; // 80404628
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8040462C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80404630
  c->r[0]=c->lr; // 80404634
  W32(c->r[12]+0x00000004u,c->r[0]); // 80404638
  c->r[7]=c->r[1]+0x000000F0u; // 8040463C
  c->r[8]=c->r[1]+0x00000020u; // 80404640
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80404644
  c->r[31]=c->r[4]|c->r[4]; // 80404648
  c->r[6]=R32(c->r[13]+0xFFFFE0F0u); // 8040464C
  cmps(c,0,(int32_t)c->r[6],0); // 80404650
  if (crb(c,0)) { goto L_80404664; } // 80404654
  c->r[5]=0u+0x00000000u; // 80404658
  cmpu(c,0,c->r[4],c->r[5]); // 8040465C
  if (!crb(c,2)) { goto L_8040466C; } // 80404660
L_80404664:;
  c->r[3]=0u+0xFFFFFC07u; // 80404664
  goto L_804046FC; // 80404668
L_8040466C:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 8040466C
  if (crb(c,2)) { goto L_8040467C; } // 80404670
  c->r[3]=0u+0xFFFFFC07u; // 80404674
  goto L_804046FC; // 80404678
L_8040467C:;
  cmpu(c,0,c->r[3],c->r[5]); // 8040467C
  if (!crb(c,2)) { goto L_804046B8; } // 80404680
  c->r[0]=0u+0x00000004u; // 80404684
  c->r[3]=c->r[6]|c->r[6]; // 80404688
  W32(c->r[1]+0x000000F0u,c->r[8]); // 8040468C
  c->r[4]=0u+0x00000039u; // 80404690
  c->r[5]=0u+0x00000000u; // 80404694
  c->r[6]=0u+0x00000001u; // 80404698
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8040469C
  c->lr=0x804046A4u; f_8034E188(c); // 804046A0
  cmps(c,0,(int32_t)c->r[3],0); // 804046A4
  if (!crb(c,2)) { goto L_804046FC; } // 804046A8
  c->r[0]=R32(c->r[1]+0x00000020u); // 804046AC
  W32(c->r[31]+0x00000000u,c->r[0]); // 804046B0
  goto L_804046FC; // 804046B4
L_804046B8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 804046B8
  cmps(c,0,(int32_t)c->r[5],0); // 804046BC
  if (!crb(c,2)) { goto L_804046CC; } // 804046C0
  c->r[3]=0u+0xFFFFFC07u; // 804046C4
  goto L_804046FC; // 804046C8
L_804046CC:;
  c->r[0]=0u+0x00000004u; // 804046CC
  W32(c->r[1]+0x000000F8u,c->r[3]); // 804046D0
  c->r[3]=c->r[6]|c->r[6]; // 804046D4
  c->r[6]=0u+0x00000001u; // 804046D8
  W32(c->r[1]+0x00000020u,c->r[5]); // 804046DC
  c->r[5]=0u+0x00000001u; // 804046E0
  W32(c->r[1]+0x000000F0u,c->r[8]); // 804046E4
  W32(c->r[1]+0x000000F4u,c->r[0]); // 804046E8
  c->r[0]=R32(c->r[4]+0x00000000u); // 804046EC
  c->r[4]=0u+0x0000003Au; // 804046F0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 804046F4
  c->lr=0x804046FCu; f_8034E188(c); // 804046F8
L_804046FC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 804046FC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80404700
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80404704
  c->lr=c->r[0]; // 80404708
  c->r[1]=c->r[10]|c->r[10]; // 8040470C
  return; // 80404710
}

// ESP_GetTmdView
void f_80404714(Ctx* __restrict c) {
  trace_call(0x80404714u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80404714
  c->r[12]=c->r[1]|c->r[1]; // 80404718
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8040471C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80404720
  c->r[0]=c->lr; // 80404724
  W32(c->r[12]+0x00000004u,c->r[0]); // 80404728
  c->r[7]=c->r[1]+0x000000F0u; // 8040472C
  c->r[11]=c->r[1]+0x00000020u; // 80404730
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80404734
  c->r[31]=c->r[6]|c->r[6]; // 80404738
  c->r[12]=c->r[1]+0x00000040u; // 8040473C
  c->r[10]=R32(c->r[13]+0xFFFFE0F0u); // 80404740
  cmps(c,0,(int32_t)c->r[10],0); // 80404744
  if (crb(c,0)) { goto L_80404758; } // 80404748
  c->r[8]=0u+0x00000000u; // 8040474C
  cmpu(c,0,c->r[6],c->r[8]); // 80404750
  if (!crb(c,2)) { goto L_80404760; } // 80404754
L_80404758:;
  c->r[3]=0u+0xFFFFFC07u; // 80404758
  goto L_80404810; // 8040475C
L_80404760:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80404760
  if (crb(c,2)) { goto L_80404770; } // 80404764
  c->r[3]=0u+0xFFFFFC07u; // 80404768
  goto L_80404810; // 8040476C
L_80404770:;
  cmpu(c,0,c->r[5],c->r[8]); // 80404770
  W32(c->r[1]+0x00000024u,c->r[4]); // 80404774
  W32(c->r[1]+0x00000020u,c->r[3]); // 80404778
  if (!crb(c,2)) { goto L_804047C0; } // 8040477C
  c->r[5]=0u+0x00000008u; // 80404780
  c->r[0]=0u+0x00000004u; // 80404784
  W32(c->r[1]+0x000000F4u,c->r[5]); // 80404788
  c->r[3]=c->r[10]|c->r[10]; // 8040478C
  c->r[4]=0u+0x00000014u; // 80404790
  c->r[5]=0u+0x00000001u; // 80404794
  W32(c->r[1]+0x000000F0u,c->r[11]); // 80404798
  c->r[6]=0u+0x00000001u; // 8040479C
  W32(c->r[1]+0x000000F8u,c->r[12]); // 804047A0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 804047A4
  c->lr=0x804047ACu; f_8034E188(c); // 804047A8
  cmps(c,0,(int32_t)c->r[3],0); // 804047AC
  if (!crb(c,2)) { goto L_80404810; } // 804047B0
  c->r[0]=R32(c->r[1]+0x00000040u); // 804047B4
  W32(c->r[31]+0x00000000u,c->r[0]); // 804047B8
  goto L_80404810; // 804047BC
L_804047C0:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 804047C0
  cmps(c,0,(int32_t)c->r[9],0); // 804047C4
  if (!crb(c,2)) { goto L_804047D4; } // 804047C8
  c->r[3]=0u+0xFFFFFC07u; // 804047CC
  goto L_80404810; // 804047D0
L_804047D4:;
  c->r[8]=0u+0x00000008u; // 804047D4
  c->r[0]=0u+0x00000004u; // 804047D8
  W32(c->r[1]+0x00000100u,c->r[5]); // 804047DC
  c->r[3]=c->r[10]|c->r[10]; // 804047E0
  c->r[4]=0u+0x00000015u; // 804047E4
  c->r[5]=0u+0x00000002u; // 804047E8
  W32(c->r[1]+0x00000040u,c->r[9]); // 804047EC
  W32(c->r[1]+0x000000F0u,c->r[11]); // 804047F0
  W32(c->r[1]+0x000000F4u,c->r[8]); // 804047F4
  W32(c->r[1]+0x000000F8u,c->r[12]); // 804047F8
  W32(c->r[1]+0x000000FCu,c->r[0]); // 804047FC
  c->r[0]=R32(c->r[6]+0x00000000u); // 80404800
  c->r[6]=0u+0x00000001u; // 80404804
  W32(c->r[1]+0x00000104u,c->r[0]); // 80404808
  c->lr=0x80404810u; f_8034E188(c); // 8040480C
L_80404810:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80404810
  c->r[0]=R32(c->r[10]+0x00000004u); // 80404814
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80404818
  c->lr=c->r[0]; // 8040481C
  c->r[1]=c->r[10]|c->r[10]; // 80404820
  return; // 80404824
}

// ESP_GetDataDir
void f_80404828(Ctx* __restrict c) {
  trace_call(0x80404828u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80404828
  c->r[12]=c->r[1]|c->r[1]; // 8040482C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 80404830
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80404834
  c->r[0]=c->lr; // 80404838
  W32(c->r[12]+0x00000004u,c->r[0]); // 8040483C
  c->r[7]=c->r[1]+0x000000F0u; // 80404840
  c->r[10]=c->r[1]+0x00000020u; // 80404844
  c->r[9]=R32(c->r[13]+0xFFFFE0F0u); // 80404848
  cmps(c,0,(int32_t)c->r[9],0); // 8040484C
  if (crb(c,0)) { goto L_80404860; } // 80404850
  c->r[0]=0u+0x00000000u; // 80404854
  cmpu(c,0,c->r[5],c->r[0]); // 80404858
  if (!crb(c,2)) { goto L_80404868; } // 8040485C
L_80404860:;
  c->r[3]=0u+0xFFFFFC07u; // 80404860
  goto L_804048AC; // 80404864
L_80404868:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80404868
  if (crb(c,2)) { goto L_80404878; } // 8040486C
  c->r[3]=0u+0xFFFFFC07u; // 80404870
  goto L_804048AC; // 80404874
L_80404878:;
  c->r[8]=0u+0x00000008u; // 80404878
  c->r[0]=0u+0x0000001Eu; // 8040487C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80404880
  c->r[4]=0u+0x0000001Du; // 80404884
  c->r[6]=0u+0x00000001u; // 80404888
  W32(c->r[1]+0x00000020u,c->r[3]); // 8040488C
  c->r[3]=c->r[9]|c->r[9]; // 80404890
  W32(c->r[1]+0x000000F8u,c->r[5]); // 80404894
  c->r[5]=0u+0x00000001u; // 80404898
  W32(c->r[1]+0x000000F0u,c->r[10]); // 8040489C
  W32(c->r[1]+0x000000F4u,c->r[8]); // 804048A0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 804048A4
  c->lr=0x804048ACu; f_8034E188(c); // 804048A8
L_804048AC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 804048AC
  c->r[0]=R32(c->r[10]+0x00000004u); // 804048B0
  c->lr=c->r[0]; // 804048B4
  c->r[1]=c->r[10]|c->r[10]; // 804048B8
  return; // 804048BC
}

// ESP_GetTitleId
void f_804048C0(Ctx* __restrict c) {
  trace_call(0x804048C0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 804048C0
  c->r[12]=c->r[1]|c->r[1]; // 804048C4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 804048C8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 804048CC
  c->r[0]=c->lr; // 804048D0
  W32(c->r[12]+0x00000004u,c->r[0]); // 804048D4
  c->r[7]=c->r[1]+0x000000F0u; // 804048D8
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 804048DC
  c->r[31]=c->r[3]|c->r[3]; // 804048E0
  c->r[4]=R32(c->r[13]+0xFFFFE0F0u); // 804048E4
  cmps(c,0,(int32_t)c->r[4],0); // 804048E8
  if (crb(c,0)) { goto L_804048FC; } // 804048EC
  c->r[0]=0u+0x00000000u; // 804048F0
  cmpu(c,0,c->r[3],c->r[0]); // 804048F4
  if (!crb(c,2)) { goto L_80404904; } // 804048F8
L_804048FC:;
  c->r[3]=0u+0xFFFFFC07u; // 804048FC
  goto L_80404940; // 80404900
L_80404904:;
  c->r[3]=c->r[1]+0x00000020u; // 80404904
  c->r[0]=0u+0x00000008u; // 80404908
  W32(c->r[1]+0x000000F0u,c->r[3]); // 8040490C
  c->r[3]=c->r[4]|c->r[4]; // 80404910
  c->r[4]=0u+0x00000020u; // 80404914
  c->r[5]=0u+0x00000000u; // 80404918
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8040491C
  c->r[6]=0u+0x00000001u; // 80404920
  c->lr=0x80404928u; f_8034E188(c); // 80404924
  cmps(c,0,(int32_t)c->r[3],0); // 80404928
  if (!crb(c,2)) { goto L_80404940; } // 8040492C
  c->r[0]=R32(c->r[1]+0x00000020u); // 80404930
  c->r[4]=R32(c->r[1]+0x00000024u); // 80404934
  W32(c->r[31]+0x00000004u,c->r[4]); // 80404938
  W32(c->r[31]+0x00000000u,c->r[0]); // 8040493C
L_80404940:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80404940
  c->r[0]=R32(c->r[10]+0x00000004u); // 80404944
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80404948
  c->lr=c->r[0]; // 8040494C
  c->r[1]=c->r[10]|c->r[10]; // 80404950
  return; // 80404954
}

// ESP_GetConsumption
void f_80404958(Ctx* __restrict c) {
  trace_call(0x80404958u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 80404958
  c->r[12]=c->r[1]|c->r[1]; // 8040495C
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 80404960
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80404964
  c->r[0]=c->lr; // 80404968
  W32(c->r[12]+0x00000004u,c->r[0]); // 8040496C
  c->r[7]=c->r[1]+0x000000F0u; // 80404970
  c->r[9]=c->r[1]+0x00000020u; // 80404974
  c->r[10]=c->r[1]+0x00000040u; // 80404978
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8040497C
  c->r[31]=c->r[6]|c->r[6]; // 80404980
  c->r[0]=R32(c->r[13]+0xFFFFE0F0u); // 80404984
  cmps(c,0,(int32_t)c->r[0],0); // 80404988
  if (!crb(c,0)) { goto L_80404998; } // 8040498C
  c->r[3]=0u+0xFFFFFC07u; // 80404990
  goto L_80404A14; // 80404994
L_80404998:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80404998
  if (crb(c,2)) { goto L_804049A8; } // 8040499C
  c->r[3]=0u+0xFFFFFC07u; // 804049A0
  goto L_80404A14; // 804049A4
L_804049A8:;
  c->r[0]=0u+0x00000000u; // 804049A8
  c->r[8]=0u+0x00000008u; // 804049AC
  cmpu(c,0,c->r[5],c->r[0]); // 804049B0
  W32(c->r[1]+0x00000024u,c->r[4]); // 804049B4
  W32(c->r[1]+0x00000020u,c->r[3]); // 804049B8
  W32(c->r[1]+0x000000F0u,c->r[9]); // 804049BC
  W32(c->r[1]+0x000000F4u,c->r[8]); // 804049C0
  if (!crb(c,2)) { goto L_804049D4; } // 804049C4
  W32(c->r[1]+0x000000F8u,c->r[0]); // 804049C8
  W32(c->r[1]+0x000000FCu,c->r[0]); // 804049CC
  goto L_804049EC; // 804049D0
L_804049D4:;
  W32(c->r[1]+0x000000F8u,c->r[5]); // 804049D4
  c->r[0]=R32(c->r[6]+0x00000000u); // 804049D8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 804049DC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 804049E0
  c->r[0]=R32(c->r[6]+0x00000000u); // 804049E4
  W32(c->r[1]+0x00000040u,c->r[0]); // 804049E8
L_804049EC:;
  c->r[0]=0u+0x00000004u; // 804049EC
  W32(c->r[1]+0x00000100u,c->r[10]); // 804049F0
  c->r[3]=R32(c->r[13]+0xFFFFE0F0u); // 804049F4
  c->r[4]=0u+0x00000016u; // 804049F8
  W32(c->r[1]+0x00000104u,c->r[0]); // 804049FC
  c->r[5]=0u+0x00000001u; // 80404A00
  c->r[6]=0u+0x00000002u; // 80404A04
  c->lr=0x80404A0Cu; f_8034E188(c); // 80404A08
  c->r[0]=R32(c->r[1]+0x00000040u); // 80404A0C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80404A10
L_80404A14:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80404A14
  c->r[0]=R32(c->r[10]+0x00000004u); // 80404A18
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80404A1C
  c->lr=c->r[0]; // 80404A20
  c->r[1]=c->r[10]|c->r[10]; // 80404A24
  return; // 80404A28
}

