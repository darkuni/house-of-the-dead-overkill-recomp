#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8003C454
void f_8003C454(Ctx* __restrict c) {
  trace_call(0x8003C454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C454
  c->r[0]=c->lr; // 8003C458
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C45C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003C460
  c->r[31]=c->r[3]|c->r[3]; // 8003C464
  c->lr=0x8003C46Cu; f_8003AF68(c); // 8003C468
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C46C
  c->r[0]=0u+0x00000000u; // 8003C470
  c->r[3]=0u+0x000000FFu; // 8003C474
  W8(c->r[31]+0x000000E4u,c->r[3]); // 8003C478
  W8(c->r[31]+0x000000E5u,c->r[3]); // 8003C47C
  W8(c->r[31]+0x000000E6u,c->r[3]); // 8003C480
  W8(c->r[31]+0x000000E7u,c->r[3]); // 8003C484
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 8003C488
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8003C48C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 8003C490
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8003C494
  W8(c->r[31]+0x000000F8u,c->r[0]); // 8003C498
  W8(c->r[31]+0x000000F9u,c->r[0]); // 8003C49C
  W8(c->r[31]+0x000000FAu,c->r[0]); // 8003C4A0
  W8(c->r[31]+0x000000FBu,c->r[0]); // 8003C4A4
  W8(c->r[31]+0x000000FCu,c->r[0]); // 8003C4A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003C4AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C4B0
  c->lr=c->r[0]; // 8003C4B4
  c->r[1]=c->r[1]+0x00000010u; // 8003C4B8
  return; // 8003C4BC
}

// fn_8003C4C0
void f_8003C4C0(Ctx* __restrict c) {
  trace_call(0x8003C4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C4C0
  c->r[0]=c->lr; // 8003C4C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003C4C8
  c->r[11]=c->r[1]+0x00000020u; // 8003C4CC
  c->lr=0x8003C4D4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003C4D0
  c->r[29]=c->r[3]|c->r[3]; // 8003C4D4
  c->r[30]=c->r[4]|c->r[4]; // 8003C4D8
  c->r[31]=c->r[5]|c->r[5]; // 8003C4DC
  c->r[6]=0u+0x00000000u; // 8003C4E0
  c->lr=0x8003C4E8u; f_8003AFFC(c); // 8003C4E4
  cmps(c,0,(int32_t)c->r[31],0); // 8003C4E8
  if (crb(c,2)) { goto L_8003C4F4; } // 8003C4EC
  goto L_8003C4F8; // 8003C4F0
L_8003C4F4:;
  c->r[31]=c->r[29]|c->r[29]; // 8003C4F4
L_8003C4F8:;
  c->r[0]=R8(c->r[30]+0x000000E4u); // 8003C4F8
  c->r[3]=c->r[31]+0x000000ECu; // 8003C4FC
  W8(c->r[31]+0x000000E4u,c->r[0]); // 8003C500
  c->r[4]=c->r[30]+0x000000ECu; // 8003C504
  c->r[0]=R8(c->r[30]+0x000000E5u); // 8003C508
  W8(c->r[31]+0x000000E5u,c->r[0]); // 8003C50C
  c->r[0]=R8(c->r[30]+0x000000E6u); // 8003C510
  W8(c->r[31]+0x000000E6u,c->r[0]); // 8003C514
  c->r[0]=R8(c->r[30]+0x000000E7u); // 8003C518
  W8(c->r[31]+0x000000E7u,c->r[0]); // 8003C51C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C520
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 8003C524
  c->lr=0x8003C52Cu; f_8003AB48(c); // 8003C528
  c->r[0]=R8(c->r[30]+0x000000F8u); // 8003C52C
  c->r[11]=c->r[1]+0x00000020u; // 8003C530
  W8(c->r[31]+0x000000F8u,c->r[0]); // 8003C534
  c->r[0]=R8(c->r[30]+0x000000F9u); // 8003C538
  W8(c->r[31]+0x000000F9u,c->r[0]); // 8003C53C
  c->r[0]=R8(c->r[30]+0x000000FAu); // 8003C540
  W8(c->r[31]+0x000000FAu,c->r[0]); // 8003C544
  c->r[0]=R8(c->r[30]+0x000000FBu); // 8003C548
  W8(c->r[31]+0x000000FBu,c->r[0]); // 8003C54C
  c->r[0]=R8(c->r[30]+0x000000FCu); // 8003C550
  W8(c->r[31]+0x000000FCu,c->r[0]); // 8003C554
  c->lr=0x8003C55Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003C558
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003C55C
  c->lr=c->r[0]; // 8003C560
  c->r[1]=c->r[1]+0x00000020u; // 8003C564
  return; // 8003C568
}

// fn_8003C56C
void f_8003C56C(Ctx* __restrict c) {
  trace_call(0x8003C56Cu);
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003C56C
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003C570
  if (!crb(c,2)) { goto L_8003C580; } // 8003C574
  c->r[3]=0u+0x00000001u; // 8003C578
  return; // 8003C57C
L_8003C580:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003C580
  cmpu(c,0,c->r[0],0x00000802u); // 8003C584
  if (!crb(c,2)) { goto L_8003C594; } // 8003C588
  c->r[3]=0u+0x00000001u; // 8003C58C
  return; // 8003C590
L_8003C594:;
  c->r[3]=0u+0xD12F0000u; // 8003C594
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003C598
  c->r[0]=c->r[4]-c->r[0]; // 8003C59C
  c->r[0]=cntlz(c->r[0]); // 8003C5A0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003C5A4
  return; // 8003C5A8
}

// fn_8003C5AC
void f_8003C5AC(Ctx* __restrict c) {
  trace_call(0x8003C5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C5AC
  c->r[0]=c->lr; // 8003C5B0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8003C5B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8003C5B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8003C5BC
  c->r[11]=c->r[1]+0x00000050u; // 8003C5C0
  c->lr=0x8003C5C8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003C5C4
  c->f[31]=c->f[1]; // 8003C5C8
  c->r[0]=0u+0x43300000u; // 8003C5CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003C5D0
  c->r[29]=c->r[3]|c->r[3]; // 8003C5D4
  c->r[31]=c->r[4]|c->r[4]; // 8003C5D8
  c->r[30]=c->r[5]|c->r[5]; // 8003C5DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8003C5E0
  c->lr=0x8003C5E8u; f_8003B104(c); // 8003C5E4
  c->r[3]=R8(c->r[31]+0x000000E4u); // 8003C5E8
  c->r[0]=R8(c->r[30]+0x000000E4u); // 8003C5EC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003C5F0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003C5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C5F8
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[3]=RF64(ea);} // 8003C5FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8003C600
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8003C604
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8003C608
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8003C60C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8003C610
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003C614
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003C618
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003C61C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8003C620
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 8003C624
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8003C628
  W8(c->r[29]+0x000000E4u,c->r[0]); // 8003C62C
  c->r[3]=R8(c->r[31]+0x000000E5u); // 8003C630
  c->r[0]=R8(c->r[30]+0x000000E5u); // 8003C634
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003C638
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C63C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8003C640
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8003C644
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8003C648
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8003C64C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003C650
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003C654
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003C658
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8003C65C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 8003C660
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003C664
  W8(c->r[29]+0x000000E5u,c->r[0]); // 8003C668
  c->r[3]=R8(c->r[31]+0x000000E6u); // 8003C66C
  c->r[0]=R8(c->r[30]+0x000000E6u); // 8003C670
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003C674
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C678
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8003C67C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8003C680
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8003C684
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8003C688
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003C68C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003C690
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003C694
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8003C698
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8003C69C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8003C6A0
  W8(c->r[29]+0x000000E6u,c->r[0]); // 8003C6A4
  c->r[3]=R8(c->r[31]+0x000000E7u); // 8003C6A8
  c->r[0]=R8(c->r[30]+0x000000E7u); // 8003C6AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003C6B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C6B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8003C6B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8003C6BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8003C6C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8003C6C4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003C6C8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003C6CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003C6D0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8003C6D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[1]);} // 8003C6D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003C6DC
  W8(c->r[29]+0x000000E7u,c->r[0]); // 8003C6E0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003C6E4
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003C6E8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003C6EC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 8003C6F0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8003C6F4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8003C6F8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8003C6FC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8003C700
  c->r[11]=c->r[1]+0x00000050u; // 8003C704
  c->lr=0x8003C70Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003C708
  c->r[0]=R32(c->r[1]+0x00000064u); // 8003C70C
  c->lr=c->r[0]; // 8003C710
  c->r[1]=c->r[1]+0x00000060u; // 8003C714
  return; // 8003C718
}

// fn_8003C71C
void f_8003C71C(Ctx* __restrict c) {
  trace_call(0x8003C71Cu);
  c->r[3]=0u+0x00000100u; // 8003C71C
  return; // 8003C720
}

// fn_8003C724
void f_8003C724(Ctx* __restrict c) {
  trace_call(0x8003C724u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C724
  c->r[0]=c->lr; // 8003C728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C72C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003C730
  c->r[31]=c->r[3]|c->r[3]; // 8003C734
  c->lr=0x8003C73Cu; f_8003C21C(c); // 8003C738
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003C73C
  c->r[3]=0u+0x80420000u; // 8003C740
  c->r[3]=c->r[3]+0x0000155Cu; // 8003C744
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003C748
  c->r[0]=c->r[0]|0x80000000u; // 8003C74C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003C750
  c->r[3]=c->r[31]|c->r[31]; // 8003C754
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003C758
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003C75C
  c->ctr=c->r[12]; // 8003C760
  if (true) { c->lr=0x8003C768u; dispatch(c,c->ctr); } // 8003C764
  c->r[3]=c->r[31]|c->r[31]; // 8003C768
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003C76C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C770
  c->lr=c->r[0]; // 8003C774
  c->r[1]=c->r[1]+0x00000010u; // 8003C778
  return; // 8003C77C
}

// fn_8003C780
void f_8003C780(Ctx* __restrict c) {
  trace_call(0x8003C780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C780
  c->r[0]=c->lr; // 8003C784
  cmps(c,0,(int32_t)c->r[3],0); // 8003C788
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C78C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003C790
  c->r[30]=c->r[3]|c->r[3]; // 8003C794
  c->r[31]=c->r[4]|c->r[4]; // 8003C798
  if (crb(c,2)) { goto L_8003C7BC; } // 8003C79C
  if (crb(c,2)) { goto L_8003C7AC; } // 8003C7A0
  c->r[4]=0u+0x00000000u; // 8003C7A4
  c->lr=0x8003C7ACu; f_8003ABE0(c); // 8003C7A8
L_8003C7AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003C7AC
  if (!crb(c,1)) { goto L_8003C7BC; } // 8003C7B0
  c->r[3]=c->r[30]|c->r[30]; // 8003C7B4
  c->lr=0x8003C7BCu; f_80244DC0(c); // 8003C7B8
L_8003C7BC:;
  c->r[3]=c->r[30]|c->r[30]; // 8003C7BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003C7C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C7C4
  c->lr=c->r[0]; // 8003C7C8
  c->r[1]=c->r[1]+0x00000010u; // 8003C7CC
  return; // 8003C7D0
}

// fn_8003C7D4
void f_8003C7D4(Ctx* __restrict c) {
  trace_call(0x8003C7D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C7D4
  c->r[0]=c->lr; // 8003C7D8
  c->r[3]=0u+0x00000100u; // 8003C7DC
  c->r[4]=c->r[13]+0xFFFF8C92u; // 8003C7E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C7E4
  c->r[5]=0u+0x00000000u; // 8003C7E8
  c->r[6]=0u+0x00001001u; // 8003C7EC
  c->lr=0x8003C7F4u; f_80244D20(c); // 8003C7F0
  cmps(c,0,(int32_t)c->r[3],0); // 8003C7F4
  if (crb(c,2)) { goto L_8003C800; } // 8003C7F8
  c->lr=0x8003C800u; f_8003C724(c); // 8003C7FC
L_8003C800:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C800
  c->lr=c->r[0]; // 8003C804
  c->r[1]=c->r[1]+0x00000010u; // 8003C808
  return; // 8003C80C
}

// fn_8003C810
void f_8003C810(Ctx* __restrict c) {
  trace_call(0x8003C810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C810
  c->r[0]=c->lr; // 8003C814
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003C81C
  c->r[31]=c->r[3]|c->r[3]; // 8003C820
  c->lr=0x8003C828u; f_80244520(c); // 8003C824
  c->r[7]=c->r[3]|c->r[3]; // 8003C828
  c->r[9]=c->r[31]|c->r[31]; // 8003C82C
  c->r[3]=0u+0x00000100u; // 8003C830
  c->r[4]=c->r[13]+0xFFFF8C97u; // 8003C834
  c->r[5]=0u+0x00000000u; // 8003C838
  c->r[6]=0u+0x00002001u; // 8003C83C
  c->r[8]=0u+0x00000000u; // 8003C840
  c->lr=0x8003C848u; f_80242DF0(c); // 8003C844
  c->r[4]=c->r[3]|c->r[3]; // 8003C848
  c->r[3]=0u+0x00000100u; // 8003C84C
  c->r[5]=c->r[13]+0xFFFF8C9Cu; // 8003C850
  c->r[6]=0u+0x00000000u; // 8003C854
  c->r[7]=0u+0x00001001u; // 8003C858
  c->lr=0x8003C860u; f_80244DB0(c); // 8003C85C
  cmps(c,0,(int32_t)c->r[3],0); // 8003C860
  if (crb(c,2)) { goto L_8003C86C; } // 8003C864
  c->lr=0x8003C86Cu; f_8003C724(c); // 8003C868
L_8003C86C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C86C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003C870
  c->lr=c->r[0]; // 8003C874
  c->r[1]=c->r[1]+0x00000010u; // 8003C878
  return; // 8003C87C
}

// fn_8003C880
void f_8003C880(Ctx* __restrict c) {
  trace_call(0x8003C880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C880
  c->r[0]=c->lr; // 8003C884
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003C88C
  c->r[31]=c->r[3]|c->r[3]; // 8003C890
  c->lr=0x8003C898u; f_8003C21C(c); // 8003C894
  c->r[8]=0u+0x80420000u; // 8003C898
  c->r[7]=0u+0x80410000u; // 8003C89C
  c->r[5]=0u+0x1B260000u; // 8003C8A0
  c->r[4]=0u+0x87800000u; // 8003C8A4
  c->r[3]=0u+0x18360000u; // 8003C8A8
  c->r[8]=c->r[8]+0x00001520u; // 8003C8AC
  c->r[0]=c->r[3]+0xFFFFFADAu; // 8003C8B0
  c->r[7]=c->r[7]+0xFFFFBA09u; // 8003C8B4
  c->r[5]=c->r[5]+0xFFFFE690u; // 8003C8B8
  c->r[4]=c->r[4]+0x00001421u; // 8003C8BC
  c->r[6]=0u+0x00000000u; // 8003C8C0
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003C8C4
  c->r[3]=c->r[31]|c->r[31]; // 8003C8C8
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003C8CC
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003C8D0
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003C8D4
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003C8D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003C8DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003C8E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C8E4
  c->lr=c->r[0]; // 8003C8E8
  c->r[1]=c->r[1]+0x00000010u; // 8003C8EC
  return; // 8003C8F0
}

// fn_8003C8F4
void f_8003C8F4(Ctx* __restrict c) {
  trace_call(0x8003C8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C8F4
  c->r[0]=c->lr; // 8003C8F8
  cmps(c,0,(int32_t)c->r[4],0); // 8003C8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003C900
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003C904
  c->r[30]=c->r[3]|c->r[3]; // 8003C908
  c->r[31]=c->r[4]|c->r[4]; // 8003C90C
  if (crb(c,2)) { goto L_8003C964; } // 8003C910
  c->r[3]=c->r[31]|c->r[31]; // 8003C914
  c->lr=0x8003C91Cu; f_80244520(c); // 8003C918
  c->r[7]=c->r[3]|c->r[3]; // 8003C91C
  c->r[9]=c->r[31]|c->r[31]; // 8003C920
  c->r[3]=0u+0x0000010Cu; // 8003C924
  c->r[4]=c->r[13]+0xFFFF8CA1u; // 8003C928
  c->r[5]=0u+0x00000000u; // 8003C92C
  c->r[6]=0u+0x00002001u; // 8003C930
  c->r[8]=0u+0x00000000u; // 8003C934
  c->lr=0x8003C93Cu; f_80242DF0(c); // 8003C938
  c->r[4]=c->r[3]|c->r[3]; // 8003C93C
  c->r[3]=0u+0x0000010Cu; // 8003C940
  c->r[5]=c->r[13]+0xFFFF8CA6u; // 8003C944
  c->r[6]=0u+0x00000000u; // 8003C948
  c->r[7]=0u+0x00001001u; // 8003C94C
  c->lr=0x8003C954u; f_80244DB0(c); // 8003C950
  cmps(c,0,(int32_t)c->r[3],0); // 8003C954
  if (crb(c,2)) { goto L_8003C984; } // 8003C958
  c->lr=0x8003C960u; f_8003C880(c); // 8003C95C
  goto L_8003C984; // 8003C960
L_8003C964:;
  c->r[3]=0u+0x0000010Cu; // 8003C964
  c->r[4]=c->r[13]+0xFFFF8CABu; // 8003C968
  c->r[5]=0u+0x00000000u; // 8003C96C
  c->r[6]=0u+0x00001001u; // 8003C970
  c->lr=0x8003C978u; f_80244D20(c); // 8003C974
  cmps(c,0,(int32_t)c->r[3],0); // 8003C978
  if (crb(c,2)) { goto L_8003C984; } // 8003C97C
  c->lr=0x8003C984u; f_8003C880(c); // 8003C980
L_8003C984:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003C984
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003C988
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003C98C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003C990
  c->lr=c->r[0]; // 8003C994
  c->r[1]=c->r[1]+0x00000010u; // 8003C998
  return; // 8003C99C
}

// fn_8003C9A0
void f_8003C9A0(Ctx* __restrict c) {
  trace_call(0x8003C9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003C9A0
  c->r[0]=c->lr; // 8003C9A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003C9A8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003C9AC
  c->r[29]=c->r[3]|c->r[3]; // 8003C9B0
  c->r[30]=c->r[4]|c->r[4]; // 8003C9B4
  c->lr=0x8003C9BCu; f_8003C334(c); // 8003C9B8
  c->r[31]=c->r[3]|c->r[3]; // 8003C9BC
  c->r[3]=c->r[30]|c->r[30]; // 8003C9C0
  c->lr=0x8003C9C8u; f_8030BD1C(c); // 8003C9C4
  W8(c->r[29]+0x00000100u,c->r[3]); // 8003C9C8
  c->r[3]=c->r[30]|c->r[30]; // 8003C9CC
  c->lr=0x8003C9D4u; f_8030C0A0(c); // 8003C9D0
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 8003C9D4
  c->r[3]=c->r[30]|c->r[30]; // 8003C9D8
  c->lr=0x8003C9E0u; f_8030C0A0(c); // 8003C9DC
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 8003C9E0
  c->r[3]=c->r[31]|c->r[31]; // 8003C9E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003C9E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003C9EC
  c->lr=c->r[0]; // 8003C9F0
  c->r[1]=c->r[1]+0x00000020u; // 8003C9F4
  return; // 8003C9F8
}

// fn_8003C9FC
void f_8003C9FC(Ctx* __restrict c) {
  trace_call(0x8003C9FCu);
  f_80038EC8(c); return; // 8003C9FC
}

// fn_8003CA00
void f_8003CA00(Ctx* __restrict c) {
  trace_call(0x8003CA00u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003CA00
  if (!crb(c,2)) return; // 8003CA04
  f_8003C404(c); return; // 8003CA08
  return; // 8003CA0C
}

// fn_8003CA10
void f_8003CA10(Ctx* __restrict c) {
  trace_call(0x8003CA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CA10
  c->r[0]=c->lr; // 8003CA14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CA18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CA1C
  c->r[31]=c->r[3]|c->r[3]; // 8003CA20
  c->lr=0x8003CA28u; f_8003C454(c); // 8003CA24
  {uint32_t ea=c->r[2]+0xFFFF86B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CA28
  c->r[0]=0u+0x00000000u; // 8003CA2C
  {uint32_t ea=c->r[2]+0xFFFF8688u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CA30
  W8(c->r[31]+0x00000100u,c->r[0]); // 8003CA34
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[1]);} // 8003CA38
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[0]);} // 8003CA3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CA40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CA44
  c->lr=c->r[0]; // 8003CA48
  c->r[1]=c->r[1]+0x00000010u; // 8003CA4C
  return; // 8003CA50
}

// fn_8003CA54
void f_8003CA54(Ctx* __restrict c) {
  trace_call(0x8003CA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CA54
  c->r[0]=c->lr; // 8003CA58
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003CA5C
  c->r[11]=c->r[1]+0x00000020u; // 8003CA60
  c->lr=0x8003CA68u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003CA64
  c->r[29]=c->r[3]|c->r[3]; // 8003CA68
  c->r[30]=c->r[4]|c->r[4]; // 8003CA6C
  c->r[31]=c->r[5]|c->r[5]; // 8003CA70
  c->r[6]=0u+0x00000000u; // 8003CA74
  c->lr=0x8003CA7Cu; f_8003C4C0(c); // 8003CA78
  cmps(c,0,(int32_t)c->r[31],0); // 8003CA7C
  if (crb(c,2)) { goto L_8003CA88; } // 8003CA80
  goto L_8003CA8C; // 8003CA84
L_8003CA88:;
  c->r[31]=c->r[29]|c->r[29]; // 8003CA88
L_8003CA8C:;
  c->r[0]=R8(c->r[30]+0x00000100u); // 8003CA8C
  c->r[11]=c->r[1]+0x00000020u; // 8003CA90
  W8(c->r[31]+0x00000100u,c->r[0]); // 8003CA94
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CA98
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8003CA9C
  {uint32_t ea=c->r[30]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CAA0
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[0]);} // 8003CAA4
  c->lr=0x8003CAACu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003CAA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003CAAC
  c->lr=c->r[0]; // 8003CAB0
  c->r[1]=c->r[1]+0x00000020u; // 8003CAB4
  return; // 8003CAB8
}

// fn_8003CABC
void f_8003CABC(Ctx* __restrict c) {
  trace_call(0x8003CABCu);
  c->r[0]=c->r[4]+0xE4F60000u; // 8003CABC
  cmpu(c,0,c->r[0],0x000089BFu); // 8003CAC0
  if (!crb(c,2)) { goto L_8003CAD0; } // 8003CAC4
  c->r[3]=0u+0x00000001u; // 8003CAC8
  return; // 8003CACC
L_8003CAD0:;
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003CAD0
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003CAD4
  if (!crb(c,2)) { goto L_8003CAE4; } // 8003CAD8
  c->r[3]=0u+0x00000001u; // 8003CADC
  return; // 8003CAE0
L_8003CAE4:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003CAE4
  cmpu(c,0,c->r[0],0x00000802u); // 8003CAE8
  if (!crb(c,2)) { goto L_8003CAF8; } // 8003CAEC
  c->r[3]=0u+0x00000001u; // 8003CAF0
  return; // 8003CAF4
L_8003CAF8:;
  c->r[3]=0u+0xD12F0000u; // 8003CAF8
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003CAFC
  c->r[0]=c->r[4]-c->r[0]; // 8003CB00
  c->r[0]=cntlz(c->r[0]); // 8003CB04
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003CB08
  return; // 8003CB0C
}

// fn_8003CB10
void f_8003CB10(Ctx* __restrict c) {
  trace_call(0x8003CB10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CB10
  c->r[0]=c->lr; // 8003CB14
  W32(c->r[1]+0x00000034u,c->r[0]); // 8003CB18
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8003CB1C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8003CB20
  c->r[11]=c->r[1]+0x00000020u; // 8003CB24
  c->lr=0x8003CB2Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003CB28
  c->f[31]=c->f[1]; // 8003CB2C
  c->r[29]=c->r[3]|c->r[3]; // 8003CB30
  c->r[31]=c->r[4]|c->r[4]; // 8003CB34
  c->r[30]=c->r[5]|c->r[5]; // 8003CB38
  c->lr=0x8003CB40u; f_8003C5AC(c); // 8003CB3C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CB40
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CB44
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 8003CB48
  {uint32_t ea=c->r[31]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CB4C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003CB50
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003CB54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003CB58
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[0]);} // 8003CB5C
  {uint32_t ea=c->r[31]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CB60
  {uint32_t ea=c->r[30]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CB64
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003CB68
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003CB6C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003CB70
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[0]);} // 8003CB74
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8003CB78
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8003CB7C
  c->r[11]=c->r[1]+0x00000020u; // 8003CB80
  c->lr=0x8003CB88u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003CB84
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003CB88
  c->lr=c->r[0]; // 8003CB8C
  c->r[1]=c->r[1]+0x00000030u; // 8003CB90
  return; // 8003CB94
}

// fn_8003CB98
void f_8003CB98(Ctx* __restrict c) {
  trace_call(0x8003CB98u);
  c->r[3]=0u+0x0000010Cu; // 8003CB98
  return; // 8003CB9C
}

// fn_8003CBA0
void f_8003CBA0(Ctx* __restrict c) {
  trace_call(0x8003CBA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CBA0
  c->r[0]=c->lr; // 8003CBA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CBA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CBAC
  c->r[31]=c->r[3]|c->r[3]; // 8003CBB0
  c->lr=0x8003CBB8u; f_8003C880(c); // 8003CBB4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003CBB8
  c->r[3]=0u+0x80420000u; // 8003CBBC
  c->r[3]=c->r[3]+0x000014E0u; // 8003CBC0
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003CBC4
  c->r[0]=c->r[0]|0x80000000u; // 8003CBC8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003CBCC
  c->r[3]=c->r[31]|c->r[31]; // 8003CBD0
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003CBD4
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003CBD8
  c->ctr=c->r[12]; // 8003CBDC
  if (true) { c->lr=0x8003CBE4u; dispatch(c,c->ctr); } // 8003CBE0
  c->r[3]=c->r[31]|c->r[31]; // 8003CBE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CBE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CBEC
  c->lr=c->r[0]; // 8003CBF0
  c->r[1]=c->r[1]+0x00000010u; // 8003CBF4
  return; // 8003CBF8
}

// fn_8003CBFC
void f_8003CBFC(Ctx* __restrict c) {
  trace_call(0x8003CBFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CBFC
  c->r[0]=c->lr; // 8003CC00
  cmps(c,0,(int32_t)c->r[3],0); // 8003CC04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CC08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003CC0C
  c->r[30]=c->r[3]|c->r[3]; // 8003CC10
  c->r[31]=c->r[4]|c->r[4]; // 8003CC14
  if (crb(c,2)) { goto L_8003CC34; } // 8003CC18
  c->r[4]=0u+0x00000000u; // 8003CC1C
  c->lr=0x8003CC24u; f_8003C780(c); // 8003CC20
  cmps(c,0,(int32_t)c->r[31],0); // 8003CC24
  if (!crb(c,1)) { goto L_8003CC34; } // 8003CC28
  c->r[3]=c->r[30]|c->r[30]; // 8003CC2C
  c->lr=0x8003CC34u; f_80244DC0(c); // 8003CC30
L_8003CC34:;
  c->r[3]=c->r[30]|c->r[30]; // 8003CC34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003CC38
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CC3C
  c->lr=c->r[0]; // 8003CC40
  c->r[1]=c->r[1]+0x00000010u; // 8003CC44
  return; // 8003CC48
}

// fn_8003CC4C
void f_8003CC4C(Ctx* __restrict c) {
  trace_call(0x8003CC4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CC4C
  c->r[0]=c->lr; // 8003CC50
  c->r[3]=0u+0x0000010Cu; // 8003CC54
  c->r[4]=c->r[13]+0xFFFF8CB0u; // 8003CC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CC5C
  c->r[5]=0u+0x00000000u; // 8003CC60
  c->r[6]=0u+0x00001001u; // 8003CC64
  c->lr=0x8003CC6Cu; f_80244D20(c); // 8003CC68
  cmps(c,0,(int32_t)c->r[3],0); // 8003CC6C
  if (crb(c,2)) { goto L_8003CC78; } // 8003CC70
  c->lr=0x8003CC78u; f_8003CBA0(c); // 8003CC74
L_8003CC78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CC78
  c->lr=c->r[0]; // 8003CC7C
  c->r[1]=c->r[1]+0x00000010u; // 8003CC80
  return; // 8003CC84
}

// fn_8003CC88
void f_8003CC88(Ctx* __restrict c) {
  trace_call(0x8003CC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CC88
  c->r[0]=c->lr; // 8003CC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CC90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CC94
  c->r[31]=c->r[3]|c->r[3]; // 8003CC98
  c->lr=0x8003CCA0u; f_80244520(c); // 8003CC9C
  c->r[7]=c->r[3]|c->r[3]; // 8003CCA0
  c->r[9]=c->r[31]|c->r[31]; // 8003CCA4
  c->r[3]=0u+0x0000010Cu; // 8003CCA8
  c->r[4]=c->r[13]+0xFFFF8CB5u; // 8003CCAC
  c->r[5]=0u+0x00000000u; // 8003CCB0
  c->r[6]=0u+0x00002001u; // 8003CCB4
  c->r[8]=0u+0x00000000u; // 8003CCB8
  c->lr=0x8003CCC0u; f_80242DF0(c); // 8003CCBC
  c->r[4]=c->r[3]|c->r[3]; // 8003CCC0
  c->r[3]=0u+0x0000010Cu; // 8003CCC4
  c->r[5]=c->r[13]+0xFFFF8CBAu; // 8003CCC8
  c->r[6]=0u+0x00000000u; // 8003CCCC
  c->r[7]=0u+0x00001001u; // 8003CCD0
  c->lr=0x8003CCD8u; f_80244DB0(c); // 8003CCD4
  cmps(c,0,(int32_t)c->r[3],0); // 8003CCD8
  if (crb(c,2)) { goto L_8003CCE4; } // 8003CCDC
  c->lr=0x8003CCE4u; f_8003CBA0(c); // 8003CCE0
L_8003CCE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CCE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CCE8
  c->lr=c->r[0]; // 8003CCEC
  c->r[1]=c->r[1]+0x00000010u; // 8003CCF0
  return; // 8003CCF4
}

// fn_8003CCF8
void f_8003CCF8(Ctx* __restrict c) {
  trace_call(0x8003CCF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CCF8
  c->r[0]=c->lr; // 8003CCFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CD00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CD04
  c->r[31]=c->r[3]|c->r[3]; // 8003CD08
  c->lr=0x8003CD10u; f_8003C21C(c); // 8003CD0C
  c->r[8]=0u+0x80420000u; // 8003CD10
  c->r[7]=0u+0x80410000u; // 8003CD14
  c->r[5]=0u+0x01710000u; // 8003CD18
  c->r[4]=0u+0x38000000u; // 8003CD1C
  c->r[3]=0u+0xD6EA0000u; // 8003CD20
  c->r[8]=c->r[8]+0x000014A4u; // 8003CD24
  c->r[0]=c->r[3]+0x00005766u; // 8003CD28
  c->r[7]=c->r[7]+0xFFFFBA25u; // 8003CD2C
  c->r[5]=c->r[5]+0x00002FF8u; // 8003CD30
  c->r[4]=c->r[4]+0x00006B0Fu; // 8003CD34
  c->r[6]=0u+0x00000000u; // 8003CD38
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003CD3C
  c->r[3]=c->r[31]|c->r[31]; // 8003CD40
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003CD44
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003CD48
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003CD4C
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003CD50
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003CD54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CD58
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CD5C
  c->lr=c->r[0]; // 8003CD60
  c->r[1]=c->r[1]+0x00000010u; // 8003CD64
  return; // 8003CD68
}

// fn_8003CD6C
void f_8003CD6C(Ctx* __restrict c) {
  trace_call(0x8003CD6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CD6C
  c->r[0]=c->lr; // 8003CD70
  cmps(c,0,(int32_t)c->r[4],0); // 8003CD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CD78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003CD7C
  c->r[30]=c->r[3]|c->r[3]; // 8003CD80
  c->r[31]=c->r[4]|c->r[4]; // 8003CD84
  if (crb(c,2)) { goto L_8003CDDC; } // 8003CD88
  c->r[3]=c->r[31]|c->r[31]; // 8003CD8C
  c->lr=0x8003CD94u; f_80244520(c); // 8003CD90
  c->r[7]=c->r[3]|c->r[3]; // 8003CD94
  c->r[9]=c->r[31]|c->r[31]; // 8003CD98
  c->r[3]=0u+0x00000104u; // 8003CD9C
  c->r[4]=c->r[13]+0xFFFF8CBFu; // 8003CDA0
  c->r[5]=0u+0x00000000u; // 8003CDA4
  c->r[6]=0u+0x00002001u; // 8003CDA8
  c->r[8]=0u+0x00000000u; // 8003CDAC
  c->lr=0x8003CDB4u; f_80242DF0(c); // 8003CDB0
  c->r[4]=c->r[3]|c->r[3]; // 8003CDB4
  c->r[3]=0u+0x00000104u; // 8003CDB8
  c->r[5]=c->r[13]+0xFFFF8CC4u; // 8003CDBC
  c->r[6]=0u+0x00000000u; // 8003CDC0
  c->r[7]=0u+0x00001001u; // 8003CDC4
  c->lr=0x8003CDCCu; f_80244DB0(c); // 8003CDC8
  cmps(c,0,(int32_t)c->r[3],0); // 8003CDCC
  if (crb(c,2)) { goto L_8003CDFC; } // 8003CDD0
  c->lr=0x8003CDD8u; f_8003CCF8(c); // 8003CDD4
  goto L_8003CDFC; // 8003CDD8
L_8003CDDC:;
  c->r[3]=0u+0x00000104u; // 8003CDDC
  c->r[4]=c->r[13]+0xFFFF8CC9u; // 8003CDE0
  c->r[5]=0u+0x00000000u; // 8003CDE4
  c->r[6]=0u+0x00001001u; // 8003CDE8
  c->lr=0x8003CDF0u; f_80244D20(c); // 8003CDEC
  cmps(c,0,(int32_t)c->r[3],0); // 8003CDF0
  if (crb(c,2)) { goto L_8003CDFC; } // 8003CDF4
  c->lr=0x8003CDFCu; f_8003CCF8(c); // 8003CDF8
L_8003CDFC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003CDFC
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003CE00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003CE04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CE08
  c->lr=c->r[0]; // 8003CE0C
  c->r[1]=c->r[1]+0x00000010u; // 8003CE10
  return; // 8003CE14
}

// fn_8003CE18
void f_8003CE18(Ctx* __restrict c) {
  trace_call(0x8003CE18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CE18
  c->r[0]=c->lr; // 8003CE1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003CE20
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003CE24
  c->r[29]=c->r[3]|c->r[3]; // 8003CE28
  c->r[30]=c->r[4]|c->r[4]; // 8003CE2C
  c->lr=0x8003CE34u; f_8003C334(c); // 8003CE30
  c->r[31]=c->r[3]|c->r[3]; // 8003CE34
  c->r[3]=c->r[30]|c->r[30]; // 8003CE38
  c->lr=0x8003CE40u; f_8030C0A0(c); // 8003CE3C
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 8003CE40
  c->r[3]=c->r[31]|c->r[31]; // 8003CE44
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003CE48
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003CE4C
  c->lr=c->r[0]; // 8003CE50
  c->r[1]=c->r[1]+0x00000020u; // 8003CE54
  return; // 8003CE58
}

// fn_8003CE5C
void f_8003CE5C(Ctx* __restrict c) {
  trace_call(0x8003CE5Cu);
  f_80038EC8(c); return; // 8003CE5C
}

// fn_8003CE60
void f_8003CE60(Ctx* __restrict c) {
  trace_call(0x8003CE60u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003CE60
  if (!crb(c,2)) return; // 8003CE64
  f_8003C404(c); return; // 8003CE68
  return; // 8003CE6C
}

// fn_8003CE70
void f_8003CE70(Ctx* __restrict c) {
  trace_call(0x8003CE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CE70
  c->r[0]=c->lr; // 8003CE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CE78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CE7C
  c->r[31]=c->r[3]|c->r[3]; // 8003CE80
  c->lr=0x8003CE88u; f_8003C454(c); // 8003CE84
  {uint32_t ea=c->r[2]+0xFFFF86BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CE88
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 8003CE8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003CE90
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003CE94
  c->lr=c->r[0]; // 8003CE98
  c->r[1]=c->r[1]+0x00000010u; // 8003CE9C
  return; // 8003CEA0
}

// fn_8003CEA4
void f_8003CEA4(Ctx* __restrict c) {
  trace_call(0x8003CEA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CEA4
  c->r[0]=c->lr; // 8003CEA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003CEAC
  c->r[11]=c->r[1]+0x00000020u; // 8003CEB0
  c->lr=0x8003CEB8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003CEB4
  c->r[29]=c->r[3]|c->r[3]; // 8003CEB8
  c->r[30]=c->r[4]|c->r[4]; // 8003CEBC
  c->r[31]=c->r[5]|c->r[5]; // 8003CEC0
  c->r[6]=0u+0x00000000u; // 8003CEC4
  c->lr=0x8003CECCu; f_8003C4C0(c); // 8003CEC8
  cmps(c,0,(int32_t)c->r[31],0); // 8003CECC
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CED0
  if (crb(c,2)) { goto L_8003CEDC; } // 8003CED4
  goto L_8003CEE0; // 8003CED8
L_8003CEDC:;
  c->r[31]=c->r[29]|c->r[29]; // 8003CEDC
L_8003CEE0:;
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 8003CEE0
  c->r[11]=c->r[1]+0x00000020u; // 8003CEE4
  c->lr=0x8003CEECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003CEE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003CEEC
  c->lr=c->r[0]; // 8003CEF0
  c->r[1]=c->r[1]+0x00000020u; // 8003CEF4
  return; // 8003CEF8
}

// fn_8003CEFC
void f_8003CEFC(Ctx* __restrict c) {
  trace_call(0x8003CEFCu);
  c->r[0]=c->r[4]+0xE4F60000u; // 8003CEFC
  cmpu(c,0,c->r[0],0x000089BFu); // 8003CF00
  if (!crb(c,2)) { goto L_8003CF10; } // 8003CF04
  c->r[3]=0u+0x00000001u; // 8003CF08
  return; // 8003CF0C
L_8003CF10:;
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003CF10
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003CF14
  if (!crb(c,2)) { goto L_8003CF24; } // 8003CF18
  c->r[3]=0u+0x00000001u; // 8003CF1C
  return; // 8003CF20
L_8003CF24:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003CF24
  cmpu(c,0,c->r[0],0x00000802u); // 8003CF28
  if (!crb(c,2)) { goto L_8003CF38; } // 8003CF2C
  c->r[3]=0u+0x00000001u; // 8003CF30
  return; // 8003CF34
L_8003CF38:;
  c->r[3]=0u+0xD12F0000u; // 8003CF38
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003CF3C
  c->r[0]=c->r[4]-c->r[0]; // 8003CF40
  c->r[0]=cntlz(c->r[0]); // 8003CF44
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003CF48
  return; // 8003CF4C
}

// fn_8003CF50
void f_8003CF50(Ctx* __restrict c) {
  trace_call(0x8003CF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CF50
  c->r[0]=c->lr; // 8003CF54
  W32(c->r[1]+0x00000034u,c->r[0]); // 8003CF58
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8003CF5C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8003CF60
  c->r[11]=c->r[1]+0x00000020u; // 8003CF64
  c->lr=0x8003CF6Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003CF68
  c->f[31]=c->f[1]; // 8003CF6C
  c->r[29]=c->r[3]|c->r[3]; // 8003CF70
  c->r[31]=c->r[4]|c->r[4]; // 8003CF74
  c->r[30]=c->r[5]|c->r[5]; // 8003CF78
  c->lr=0x8003CF80u; f_8003C5AC(c); // 8003CF7C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CF80
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003CF84
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 8003CF88
  {uint32_t ea=c->r[31]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003CF8C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003CF90
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003CF94
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003CF98
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[0]);} // 8003CF9C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8003CFA0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8003CFA4
  c->r[11]=c->r[1]+0x00000020u; // 8003CFA8
  c->lr=0x8003CFB0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003CFAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003CFB0
  c->lr=c->r[0]; // 8003CFB4
  c->r[1]=c->r[1]+0x00000030u; // 8003CFB8
  return; // 8003CFBC
}

// fn_8003CFC0
void f_8003CFC0(Ctx* __restrict c) {
  trace_call(0x8003CFC0u);
  c->r[3]=0u+0x00000104u; // 8003CFC0
  return; // 8003CFC4
}

// fn_8003CFC8
void f_8003CFC8(Ctx* __restrict c) {
  trace_call(0x8003CFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003CFC8
  c->r[0]=c->lr; // 8003CFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003CFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003CFD4
  c->r[31]=c->r[3]|c->r[3]; // 8003CFD8
  c->lr=0x8003CFE0u; f_8003CCF8(c); // 8003CFDC
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003CFE0
  c->r[3]=0u+0x80420000u; // 8003CFE4
  c->r[3]=c->r[3]+0x00001464u; // 8003CFE8
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003CFEC
  c->r[0]=c->r[0]|0x80000000u; // 8003CFF0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003CFF4
  c->r[3]=c->r[31]|c->r[31]; // 8003CFF8
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003CFFC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003D000
  c->ctr=c->r[12]; // 8003D004
  if (true) { c->lr=0x8003D00Cu; dispatch(c,c->ctr); } // 8003D008
  c->r[3]=c->r[31]|c->r[31]; // 8003D00C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D010
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D014
  c->lr=c->r[0]; // 8003D018
  c->r[1]=c->r[1]+0x00000010u; // 8003D01C
  return; // 8003D020
}

// fn_8003D024
void f_8003D024(Ctx* __restrict c) {
  trace_call(0x8003D024u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D024
  c->r[0]=c->lr; // 8003D028
  cmps(c,0,(int32_t)c->r[3],0); // 8003D02C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D030
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003D034
  c->r[30]=c->r[3]|c->r[3]; // 8003D038
  c->r[31]=c->r[4]|c->r[4]; // 8003D03C
  if (crb(c,2)) { goto L_8003D05C; } // 8003D040
  c->r[4]=0u+0x00000000u; // 8003D044
  c->lr=0x8003D04Cu; f_8003C780(c); // 8003D048
  cmps(c,0,(int32_t)c->r[31],0); // 8003D04C
  if (!crb(c,1)) { goto L_8003D05C; } // 8003D050
  c->r[3]=c->r[30]|c->r[30]; // 8003D054
  c->lr=0x8003D05Cu; f_80244DC0(c); // 8003D058
L_8003D05C:;
  c->r[3]=c->r[30]|c->r[30]; // 8003D05C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003D060
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D064
  c->lr=c->r[0]; // 8003D068
  c->r[1]=c->r[1]+0x00000010u; // 8003D06C
  return; // 8003D070
}

// fn_8003D074
void f_8003D074(Ctx* __restrict c) {
  trace_call(0x8003D074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D074
  c->r[0]=c->lr; // 8003D078
  c->r[3]=0u+0x00000104u; // 8003D07C
  c->r[4]=c->r[13]+0xFFFF8CCEu; // 8003D080
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D084
  c->r[5]=0u+0x00000000u; // 8003D088
  c->r[6]=0u+0x00001001u; // 8003D08C
  c->lr=0x8003D094u; f_80244D20(c); // 8003D090
  cmps(c,0,(int32_t)c->r[3],0); // 8003D094
  if (crb(c,2)) { goto L_8003D0A0; } // 8003D098
  c->lr=0x8003D0A0u; f_8003CFC8(c); // 8003D09C
L_8003D0A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D0A0
  c->lr=c->r[0]; // 8003D0A4
  c->r[1]=c->r[1]+0x00000010u; // 8003D0A8
  return; // 8003D0AC
}

// fn_8003D0B0
void f_8003D0B0(Ctx* __restrict c) {
  trace_call(0x8003D0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D0B0
  c->r[0]=c->lr; // 8003D0B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D0B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D0BC
  c->r[31]=c->r[3]|c->r[3]; // 8003D0C0
  c->lr=0x8003D0C8u; f_80244520(c); // 8003D0C4
  c->r[7]=c->r[3]|c->r[3]; // 8003D0C8
  c->r[9]=c->r[31]|c->r[31]; // 8003D0CC
  c->r[3]=0u+0x00000104u; // 8003D0D0
  c->r[4]=c->r[13]+0xFFFF8CD3u; // 8003D0D4
  c->r[5]=0u+0x00000000u; // 8003D0D8
  c->r[6]=0u+0x00002001u; // 8003D0DC
  c->r[8]=0u+0x00000000u; // 8003D0E0
  c->lr=0x8003D0E8u; f_80242DF0(c); // 8003D0E4
  c->r[4]=c->r[3]|c->r[3]; // 8003D0E8
  c->r[3]=0u+0x00000104u; // 8003D0EC
  c->r[5]=c->r[13]+0xFFFF8CD8u; // 8003D0F0
  c->r[6]=0u+0x00000000u; // 8003D0F4
  c->r[7]=0u+0x00001001u; // 8003D0F8
  c->lr=0x8003D100u; f_80244DB0(c); // 8003D0FC
  cmps(c,0,(int32_t)c->r[3],0); // 8003D100
  if (crb(c,2)) { goto L_8003D10C; } // 8003D104
  c->lr=0x8003D10Cu; f_8003CFC8(c); // 8003D108
L_8003D10C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D10C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D110
  c->lr=c->r[0]; // 8003D114
  c->r[1]=c->r[1]+0x00000010u; // 8003D118
  return; // 8003D11C
}

// fn_8003D120
void f_8003D120(Ctx* __restrict c) {
  trace_call(0x8003D120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D120
  c->r[0]=c->lr; // 8003D124
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D12C
  c->r[31]=c->r[3]|c->r[3]; // 8003D130
  c->lr=0x8003D138u; f_8003C21C(c); // 8003D134
  c->r[8]=0u+0x80420000u; // 8003D138
  c->r[7]=0u+0x80410000u; // 8003D13C
  c->r[5]=0u+0x63F90000u; // 8003D140
  c->r[4]=0u+0x8D640000u; // 8003D144
  c->r[3]=0u+0xDFFC0000u; // 8003D148
  c->r[8]=c->r[8]+0x00001428u; // 8003D14C
  c->r[0]=c->r[3]+0xFFFFDD84u; // 8003D150
  c->r[7]=c->r[7]+0xFFFFBA3Bu; // 8003D154
  c->r[5]=c->r[5]+0xFFFFCE68u; // 8003D158
  c->r[4]=c->r[4]+0x00002228u; // 8003D15C
  c->r[6]=0u+0x00000000u; // 8003D160
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003D164
  c->r[3]=c->r[31]|c->r[31]; // 8003D168
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003D16C
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003D170
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003D174
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003D178
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003D17C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D180
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D184
  c->lr=c->r[0]; // 8003D188
  c->r[1]=c->r[1]+0x00000010u; // 8003D18C
  return; // 8003D190
}

// fn_8003D194
void f_8003D194(Ctx* __restrict c) {
  trace_call(0x8003D194u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D194
  c->r[0]=c->lr; // 8003D198
  cmps(c,0,(int32_t)c->r[4],0); // 8003D19C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D1A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003D1A4
  c->r[30]=c->r[3]|c->r[3]; // 8003D1A8
  c->r[31]=c->r[4]|c->r[4]; // 8003D1AC
  if (crb(c,2)) { goto L_8003D204; } // 8003D1B0
  c->r[3]=c->r[31]|c->r[31]; // 8003D1B4
  c->lr=0x8003D1BCu; f_80244520(c); // 8003D1B8
  c->r[7]=c->r[3]|c->r[3]; // 8003D1BC
  c->r[9]=c->r[31]|c->r[31]; // 8003D1C0
  c->r[3]=0u+0x00000108u; // 8003D1C4
  c->r[4]=c->r[13]+0xFFFF8CDDu; // 8003D1C8
  c->r[5]=0u+0x00000000u; // 8003D1CC
  c->r[6]=0u+0x00002001u; // 8003D1D0
  c->r[8]=0u+0x00000000u; // 8003D1D4
  c->lr=0x8003D1DCu; f_80242DF0(c); // 8003D1D8
  c->r[4]=c->r[3]|c->r[3]; // 8003D1DC
  c->r[3]=0u+0x00000108u; // 8003D1E0
  c->r[5]=c->r[13]+0xFFFF8CE2u; // 8003D1E4
  c->r[6]=0u+0x00000000u; // 8003D1E8
  c->r[7]=0u+0x00001001u; // 8003D1EC
  c->lr=0x8003D1F4u; f_80244DB0(c); // 8003D1F0
  cmps(c,0,(int32_t)c->r[3],0); // 8003D1F4
  if (crb(c,2)) { goto L_8003D224; } // 8003D1F8
  c->lr=0x8003D200u; f_8003D120(c); // 8003D1FC
  goto L_8003D224; // 8003D200
L_8003D204:;
  c->r[3]=0u+0x00000108u; // 8003D204
  c->r[4]=c->r[13]+0xFFFF8CE7u; // 8003D208
  c->r[5]=0u+0x00000000u; // 8003D20C
  c->r[6]=0u+0x00001001u; // 8003D210
  c->lr=0x8003D218u; f_80244D20(c); // 8003D214
  cmps(c,0,(int32_t)c->r[3],0); // 8003D218
  if (crb(c,2)) { goto L_8003D224; } // 8003D21C
  c->lr=0x8003D224u; f_8003D120(c); // 8003D220
L_8003D224:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003D224
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003D228
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003D22C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D230
  c->lr=c->r[0]; // 8003D234
  c->r[1]=c->r[1]+0x00000010u; // 8003D238
  return; // 8003D23C
}

// fn_8003D240
void f_8003D240(Ctx* __restrict c) {
  trace_call(0x8003D240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D240
  c->r[0]=c->lr; // 8003D244
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D248
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003D24C
  c->r[29]=c->r[3]|c->r[3]; // 8003D250
  c->r[30]=c->r[4]|c->r[4]; // 8003D254
  c->lr=0x8003D25Cu; f_8003C334(c); // 8003D258
  c->r[31]=c->r[3]|c->r[3]; // 8003D25C
  c->r[3]=c->r[30]|c->r[30]; // 8003D260
  c->lr=0x8003D268u; f_8030C0A0(c); // 8003D264
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 8003D268
  c->r[3]=c->r[30]|c->r[30]; // 8003D26C
  c->lr=0x8003D274u; f_8030C0A0(c); // 8003D270
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 8003D274
  c->r[3]=c->r[31]|c->r[31]; // 8003D278
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003D27C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D280
  c->lr=c->r[0]; // 8003D284
  c->r[1]=c->r[1]+0x00000020u; // 8003D288
  return; // 8003D28C
}

// fn_8003D290
void f_8003D290(Ctx* __restrict c) {
  trace_call(0x8003D290u);
  f_80038EC8(c); return; // 8003D290
}

// fn_8003D294
void f_8003D294(Ctx* __restrict c) {
  trace_call(0x8003D294u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003D294
  if (!crb(c,2)) return; // 8003D298
  f_8003C404(c); return; // 8003D29C
  return; // 8003D2A0
}

// fn_8003D2A4
void f_8003D2A4(Ctx* __restrict c) {
  trace_call(0x8003D2A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D2A4
  c->r[0]=c->lr; // 8003D2A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D2AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D2B0
  c->r[31]=c->r[3]|c->r[3]; // 8003D2B4
  c->lr=0x8003D2BCu; f_8003C454(c); // 8003D2B8
  {uint32_t ea=c->r[2]+0xFFFF86C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D2BC
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D2C0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[1]);} // 8003D2C4
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8003D2C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D2CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D2D0
  c->lr=c->r[0]; // 8003D2D4
  c->r[1]=c->r[1]+0x00000010u; // 8003D2D8
  return; // 8003D2DC
}

// fn_8003D2E0
void f_8003D2E0(Ctx* __restrict c) {
  trace_call(0x8003D2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D2E0
  c->r[0]=c->lr; // 8003D2E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D2E8
  c->r[11]=c->r[1]+0x00000020u; // 8003D2EC
  c->lr=0x8003D2F4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003D2F0
  c->r[29]=c->r[3]|c->r[3]; // 8003D2F4
  c->r[30]=c->r[4]|c->r[4]; // 8003D2F8
  c->r[31]=c->r[5]|c->r[5]; // 8003D2FC
  c->r[6]=0u+0x00000000u; // 8003D300
  c->lr=0x8003D308u; f_8003C4C0(c); // 8003D304
  cmps(c,0,(int32_t)c->r[31],0); // 8003D308
  if (crb(c,2)) { goto L_8003D314; } // 8003D30C
  goto L_8003D318; // 8003D310
L_8003D314:;
  c->r[31]=c->r[29]|c->r[29]; // 8003D314
L_8003D318:;
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D318
  c->r[11]=c->r[1]+0x00000020u; // 8003D31C
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 8003D320
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D324
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8003D328
  c->lr=0x8003D330u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003D32C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D330
  c->lr=c->r[0]; // 8003D334
  c->r[1]=c->r[1]+0x00000020u; // 8003D338
  return; // 8003D33C
}

// fn_8003D340
void f_8003D340(Ctx* __restrict c) {
  trace_call(0x8003D340u);
  c->r[0]=c->r[4]+0xE4F60000u; // 8003D340
  cmpu(c,0,c->r[0],0x000089BFu); // 8003D344
  if (!crb(c,2)) { goto L_8003D354; } // 8003D348
  c->r[3]=0u+0x00000001u; // 8003D34C
  return; // 8003D350
L_8003D354:;
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003D354
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003D358
  if (!crb(c,2)) { goto L_8003D368; } // 8003D35C
  c->r[3]=0u+0x00000001u; // 8003D360
  return; // 8003D364
L_8003D368:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003D368
  cmpu(c,0,c->r[0],0x00000802u); // 8003D36C
  if (!crb(c,2)) { goto L_8003D37C; } // 8003D370
  c->r[3]=0u+0x00000001u; // 8003D374
  return; // 8003D378
L_8003D37C:;
  c->r[3]=0u+0xD12F0000u; // 8003D37C
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003D380
  c->r[0]=c->r[4]-c->r[0]; // 8003D384
  c->r[0]=cntlz(c->r[0]); // 8003D388
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003D38C
  return; // 8003D390
}

// fn_8003D394
void f_8003D394(Ctx* __restrict c) {
  trace_call(0x8003D394u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D394
  c->r[0]=c->lr; // 8003D398
  W32(c->r[1]+0x00000034u,c->r[0]); // 8003D39C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8003D3A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8003D3A4
  c->r[11]=c->r[1]+0x00000020u; // 8003D3A8
  c->lr=0x8003D3B0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003D3AC
  c->f[31]=c->f[1]; // 8003D3B0
  c->r[29]=c->r[3]|c->r[3]; // 8003D3B4
  c->r[31]=c->r[4]|c->r[4]; // 8003D3B8
  c->r[30]=c->r[5]|c->r[5]; // 8003D3BC
  c->lr=0x8003D3C4u; f_8003C5AC(c); // 8003D3C0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D3C4
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D3C8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 8003D3CC
  {uint32_t ea=c->r[31]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D3D0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003D3D4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003D3D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003D3DC
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[0]);} // 8003D3E0
  {uint32_t ea=c->r[31]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D3E4
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D3E8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8003D3EC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003D3F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003D3F4
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[0]);} // 8003D3F8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8003D3FC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8003D400
  c->r[11]=c->r[1]+0x00000020u; // 8003D404
  c->lr=0x8003D40Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003D408
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003D40C
  c->lr=c->r[0]; // 8003D410
  c->r[1]=c->r[1]+0x00000030u; // 8003D414
  return; // 8003D418
}

// fn_8003D41C
void f_8003D41C(Ctx* __restrict c) {
  trace_call(0x8003D41Cu);
  c->r[3]=0u+0x00000108u; // 8003D41C
  return; // 8003D420
}

// fn_8003D424
void f_8003D424(Ctx* __restrict c) {
  trace_call(0x8003D424u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D424
  c->r[0]=c->lr; // 8003D428
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D42C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D430
  c->r[31]=c->r[3]|c->r[3]; // 8003D434
  c->lr=0x8003D43Cu; f_8003D120(c); // 8003D438
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003D43C
  c->r[3]=0u+0x80420000u; // 8003D440
  c->r[3]=c->r[3]+0x000013E8u; // 8003D444
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003D448
  c->r[0]=c->r[0]|0x80000000u; // 8003D44C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003D450
  c->r[3]=c->r[31]|c->r[31]; // 8003D454
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003D458
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003D45C
  c->ctr=c->r[12]; // 8003D460
  if (true) { c->lr=0x8003D468u; dispatch(c,c->ctr); } // 8003D464
  c->r[3]=c->r[31]|c->r[31]; // 8003D468
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D46C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D470
  c->lr=c->r[0]; // 8003D474
  c->r[1]=c->r[1]+0x00000010u; // 8003D478
  return; // 8003D47C
}

// fn_8003D480
void f_8003D480(Ctx* __restrict c) {
  trace_call(0x8003D480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D480
  c->r[0]=c->lr; // 8003D484
  cmps(c,0,(int32_t)c->r[3],0); // 8003D488
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D48C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003D490
  c->r[30]=c->r[3]|c->r[3]; // 8003D494
  c->r[31]=c->r[4]|c->r[4]; // 8003D498
  if (crb(c,2)) { goto L_8003D4B8; } // 8003D49C
  c->r[4]=0u+0x00000000u; // 8003D4A0
  c->lr=0x8003D4A8u; f_8003C780(c); // 8003D4A4
  cmps(c,0,(int32_t)c->r[31],0); // 8003D4A8
  if (!crb(c,1)) { goto L_8003D4B8; } // 8003D4AC
  c->r[3]=c->r[30]|c->r[30]; // 8003D4B0
  c->lr=0x8003D4B8u; f_80244DC0(c); // 8003D4B4
L_8003D4B8:;
  c->r[3]=c->r[30]|c->r[30]; // 8003D4B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003D4BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D4C0
  c->lr=c->r[0]; // 8003D4C4
  c->r[1]=c->r[1]+0x00000010u; // 8003D4C8
  return; // 8003D4CC
}

// fn_8003D4D0
void f_8003D4D0(Ctx* __restrict c) {
  trace_call(0x8003D4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D4D0
  c->r[0]=c->lr; // 8003D4D4
  c->r[3]=0u+0x00000108u; // 8003D4D8
  c->r[4]=c->r[13]+0xFFFF8CECu; // 8003D4DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D4E0
  c->r[5]=0u+0x00000000u; // 8003D4E4
  c->r[6]=0u+0x00001001u; // 8003D4E8
  c->lr=0x8003D4F0u; f_80244D20(c); // 8003D4EC
  cmps(c,0,(int32_t)c->r[3],0); // 8003D4F0
  if (crb(c,2)) { goto L_8003D4FC; } // 8003D4F4
  c->lr=0x8003D4FCu; f_8003D424(c); // 8003D4F8
L_8003D4FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D4FC
  c->lr=c->r[0]; // 8003D500
  c->r[1]=c->r[1]+0x00000010u; // 8003D504
  return; // 8003D508
}

// fn_8003D50C
void f_8003D50C(Ctx* __restrict c) {
  trace_call(0x8003D50Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D50C
  c->r[0]=c->lr; // 8003D510
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D514
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D518
  c->r[31]=c->r[3]|c->r[3]; // 8003D51C
  c->lr=0x8003D524u; f_80244520(c); // 8003D520
  c->r[7]=c->r[3]|c->r[3]; // 8003D524
  c->r[9]=c->r[31]|c->r[31]; // 8003D528
  c->r[3]=0u+0x00000108u; // 8003D52C
  c->r[4]=c->r[13]+0xFFFF8CF1u; // 8003D530
  c->r[5]=0u+0x00000000u; // 8003D534
  c->r[6]=0u+0x00002001u; // 8003D538
  c->r[8]=0u+0x00000000u; // 8003D53C
  c->lr=0x8003D544u; f_80242DF0(c); // 8003D540
  c->r[4]=c->r[3]|c->r[3]; // 8003D544
  c->r[3]=0u+0x00000108u; // 8003D548
  c->r[5]=c->r[13]+0xFFFF8CF6u; // 8003D54C
  c->r[6]=0u+0x00000000u; // 8003D550
  c->r[7]=0u+0x00001001u; // 8003D554
  c->lr=0x8003D55Cu; f_80244DB0(c); // 8003D558
  cmps(c,0,(int32_t)c->r[3],0); // 8003D55C
  if (crb(c,2)) { goto L_8003D568; } // 8003D560
  c->lr=0x8003D568u; f_8003D424(c); // 8003D564
L_8003D568:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D568
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D56C
  c->lr=c->r[0]; // 8003D570
  c->r[1]=c->r[1]+0x00000010u; // 8003D574
  return; // 8003D578
}

// fn_8003D57C
void f_8003D57C(Ctx* __restrict c) {
  trace_call(0x8003D57Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D57C
  c->r[0]=c->lr; // 8003D580
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D584
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D588
  c->r[31]=c->r[3]|c->r[3]; // 8003D58C
  c->lr=0x8003D594u; f_8003ACE0(c); // 8003D590
  c->r[8]=0u+0x80420000u; // 8003D594
  c->r[7]=0u+0x80410000u; // 8003D598
  c->r[5]=0u+0x290F0000u; // 8003D59C
  c->r[4]=0u+0xBEBE0000u; // 8003D5A0
  c->r[3]=0u+0x90ED0000u; // 8003D5A4
  c->r[8]=c->r[8]+0x000013ACu; // 8003D5A8
  c->r[0]=c->r[3]+0x0000463Fu; // 8003D5AC
  c->r[7]=c->r[7]+0xFFFFBA50u; // 8003D5B0
  c->r[5]=c->r[5]+0xFFFFF63Au; // 8003D5B4
  c->r[4]=c->r[4]+0xFFFFC82Cu; // 8003D5B8
  c->r[6]=0u+0x00000000u; // 8003D5BC
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003D5C0
  c->r[3]=c->r[31]|c->r[31]; // 8003D5C4
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003D5C8
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003D5CC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003D5D0
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003D5D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003D5D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D5DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D5E0
  c->lr=c->r[0]; // 8003D5E4
  c->r[1]=c->r[1]+0x00000010u; // 8003D5E8
  return; // 8003D5EC
}

// fn_8003D5F0
void f_8003D5F0(Ctx* __restrict c) {
  trace_call(0x8003D5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D5F0
  c->r[0]=c->lr; // 8003D5F4
  cmps(c,0,(int32_t)c->r[4],0); // 8003D5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D5FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003D600
  c->r[30]=c->r[3]|c->r[3]; // 8003D604
  c->r[31]=c->r[4]|c->r[4]; // 8003D608
  if (crb(c,2)) { goto L_8003D660; } // 8003D60C
  c->r[3]=c->r[31]|c->r[31]; // 8003D610
  c->lr=0x8003D618u; f_80244520(c); // 8003D614
  c->r[7]=c->r[3]|c->r[3]; // 8003D618
  c->r[9]=c->r[31]|c->r[31]; // 8003D61C
  c->r[3]=0u+0x00000108u; // 8003D620
  c->r[4]=c->r[13]+0xFFFF8CFBu; // 8003D624
  c->r[5]=0u+0x00000000u; // 8003D628
  c->r[6]=0u+0x00002001u; // 8003D62C
  c->r[8]=0u+0x00000000u; // 8003D630
  c->lr=0x8003D638u; f_80242DF0(c); // 8003D634
  c->r[4]=c->r[3]|c->r[3]; // 8003D638
  c->r[3]=0u+0x00000108u; // 8003D63C
  c->r[5]=c->r[13]+0xFFFF8D00u; // 8003D640
  c->r[6]=0u+0x00000000u; // 8003D644
  c->r[7]=0u+0x00001001u; // 8003D648
  c->lr=0x8003D650u; f_80244DB0(c); // 8003D64C
  cmps(c,0,(int32_t)c->r[3],0); // 8003D650
  if (crb(c,2)) { goto L_8003D680; } // 8003D654
  c->lr=0x8003D65Cu; f_8003D57C(c); // 8003D658
  goto L_8003D680; // 8003D65C
L_8003D660:;
  c->r[3]=0u+0x00000108u; // 8003D660
  c->r[4]=c->r[13]+0xFFFF8D05u; // 8003D664
  c->r[5]=0u+0x00000000u; // 8003D668
  c->r[6]=0u+0x00001001u; // 8003D66C
  c->lr=0x8003D674u; f_80244D20(c); // 8003D670
  cmps(c,0,(int32_t)c->r[3],0); // 8003D674
  if (crb(c,2)) { goto L_8003D680; } // 8003D678
  c->lr=0x8003D680u; f_8003D57C(c); // 8003D67C
L_8003D680:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003D680
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003D684
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003D688
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D68C
  c->lr=c->r[0]; // 8003D690
  c->r[1]=c->r[1]+0x00000010u; // 8003D694
  return; // 8003D698
}

// fn_8003D69C
void f_8003D69C(Ctx* __restrict c) {
  trace_call(0x8003D69Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D69C
  c->r[0]=c->lr; // 8003D6A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D6A4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003D6A8
  c->r[29]=c->r[3]|c->r[3]; // 8003D6AC
  c->r[30]=c->r[4]|c->r[4]; // 8003D6B0
  c->lr=0x8003D6B8u; f_8003AE00(c); // 8003D6B4
  c->r[31]=c->r[3]|c->r[3]; // 8003D6B8
  c->r[3]=c->r[30]|c->r[30]; // 8003D6BC
  c->lr=0x8003D6C4u; f_8030BD1C(c); // 8003D6C0
  W8(c->r[29]+0x000000E4u,c->r[3]); // 8003D6C4
  c->r[3]=c->r[30]|c->r[30]; // 8003D6C8
  c->lr=0x8003D6D0u; f_8030C0A0(c); // 8003D6CC
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 8003D6D0
  c->r[3]=c->r[30]|c->r[30]; // 8003D6D4
  c->lr=0x8003D6DCu; f_8030C0A0(c); // 8003D6D8
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 8003D6DC
  c->r[3]=c->r[30]|c->r[30]; // 8003D6E0
  c->lr=0x8003D6E8u; f_8030BD1C(c); // 8003D6E4
  W8(c->r[29]+0x000000F0u,c->r[3]); // 8003D6E8
  c->r[3]=c->r[30]|c->r[30]; // 8003D6EC
  c->lr=0x8003D6F4u; f_8030C0A0(c); // 8003D6F0
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 8003D6F4
  c->r[3]=c->r[30]|c->r[30]; // 8003D6F8
  c->lr=0x8003D700u; f_8030BD1C(c); // 8003D6FC
  W8(c->r[29]+0x000000F8u,c->r[3]); // 8003D700
  c->r[3]=c->r[30]|c->r[30]; // 8003D704
  c->lr=0x8003D70Cu; f_8030C0A0(c); // 8003D708
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 8003D70C
  c->r[3]=c->r[30]|c->r[30]; // 8003D710
  c->lr=0x8003D718u; f_8030BD1C(c); // 8003D714
  W32(c->r[29]+0x00000100u,c->r[3]); // 8003D718
  c->r[3]=c->r[30]|c->r[30]; // 8003D71C
  c->lr=0x8003D724u; f_8030BD1C(c); // 8003D720
  W8(c->r[29]+0x00000104u,c->r[3]); // 8003D724
  c->r[3]=c->r[31]|c->r[31]; // 8003D728
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003D72C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D730
  c->lr=c->r[0]; // 8003D734
  c->r[1]=c->r[1]+0x00000020u; // 8003D738
  return; // 8003D73C
}

// fn_8003D740
void f_8003D740(Ctx* __restrict c) {
  trace_call(0x8003D740u);
  f_80038EC8(c); return; // 8003D740
}

// fn_8003D744
void f_8003D744(Ctx* __restrict c) {
  trace_call(0x8003D744u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003D744
  if (!crb(c,2)) return; // 8003D748
  f_8003AF18(c); return; // 8003D74C
  return; // 8003D750
}

// fn_8003D754
void f_8003D754(Ctx* __restrict c) {
  trace_call(0x8003D754u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D754
  c->r[0]=c->lr; // 8003D758
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D75C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D760
  c->r[31]=c->r[3]|c->r[3]; // 8003D764
  c->lr=0x8003D76Cu; f_8003AF68(c); // 8003D768
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003D76C
  c->r[4]=0u+0x00000000u; // 8003D770
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D774
  c->r[3]=0u+0x00000001u; // 8003D778
  {uint32_t ea=c->r[2]+0xFFFF86CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D77C
  c->r[0]=0u+0x00000014u; // 8003D780
  W8(c->r[31]+0x000000E4u,c->r[4]); // 8003D784
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[2]);} // 8003D788
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[1]);} // 8003D78C
  W8(c->r[31]+0x000000F0u,c->r[4]); // 8003D790
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[2]);} // 8003D794
  W8(c->r[31]+0x000000F8u,c->r[3]); // 8003D798
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 8003D79C
  W32(c->r[31]+0x00000100u,c->r[0]); // 8003D7A0
  W8(c->r[31]+0x00000104u,c->r[4]); // 8003D7A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D7AC
  c->lr=c->r[0]; // 8003D7B0
  c->r[1]=c->r[1]+0x00000010u; // 8003D7B4
  return; // 8003D7B8
}

// fn_8003D7BC
void f_8003D7BC(Ctx* __restrict c) {
  trace_call(0x8003D7BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D7BC
  c->r[0]=c->lr; // 8003D7C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003D7C4
  c->r[11]=c->r[1]+0x00000020u; // 8003D7C8
  c->lr=0x8003D7D0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003D7CC
  c->r[29]=c->r[3]|c->r[3]; // 8003D7D0
  c->r[30]=c->r[4]|c->r[4]; // 8003D7D4
  c->r[31]=c->r[5]|c->r[5]; // 8003D7D8
  c->r[6]=0u+0x00000000u; // 8003D7DC
  c->lr=0x8003D7E4u; f_8003AFFC(c); // 8003D7E0
  cmps(c,0,(int32_t)c->r[31],0); // 8003D7E4
  if (crb(c,2)) { goto L_8003D7F0; } // 8003D7E8
  goto L_8003D7F4; // 8003D7EC
L_8003D7F0:;
  c->r[31]=c->r[29]|c->r[29]; // 8003D7F0
L_8003D7F4:;
  c->r[0]=R8(c->r[30]+0x000000E4u); // 8003D7F4
  c->r[11]=c->r[1]+0x00000020u; // 8003D7F8
  W8(c->r[31]+0x000000E4u,c->r[0]); // 8003D7FC
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D800
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 8003D804
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D808
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 8003D80C
  c->r[0]=R8(c->r[30]+0x000000F0u); // 8003D810
  W8(c->r[31]+0x000000F0u,c->r[0]); // 8003D814
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D818
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 8003D81C
  c->r[0]=R8(c->r[30]+0x000000F8u); // 8003D820
  W8(c->r[31]+0x000000F8u,c->r[0]); // 8003D824
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D828
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 8003D82C
  c->r[0]=R32(c->r[30]+0x00000100u); // 8003D830
  W32(c->r[31]+0x00000100u,c->r[0]); // 8003D834
  c->r[0]=R8(c->r[30]+0x00000104u); // 8003D838
  W8(c->r[31]+0x00000104u,c->r[0]); // 8003D83C
  c->lr=0x8003D844u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003D840
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003D844
  c->lr=c->r[0]; // 8003D848
  c->r[1]=c->r[1]+0x00000020u; // 8003D84C
  return; // 8003D850
}

// fn_8003D854
void f_8003D854(Ctx* __restrict c) {
  trace_call(0x8003D854u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003D854
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003D858
  if (!crb(c,2)) { goto L_8003D868; } // 8003D85C
  c->r[3]=0u+0x00000001u; // 8003D860
  return; // 8003D864
L_8003D868:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003D868
  cmpu(c,0,c->r[0],0x00000802u); // 8003D86C
  if (!crb(c,2)) { goto L_8003D87C; } // 8003D870
  c->r[3]=0u+0x00000001u; // 8003D874
  return; // 8003D878
L_8003D87C:;
  c->r[3]=0u+0xD12F0000u; // 8003D87C
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003D880
  c->r[0]=c->r[4]-c->r[0]; // 8003D884
  c->r[0]=cntlz(c->r[0]); // 8003D888
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003D88C
  return; // 8003D890
}

// fn_8003D894
void f_8003D894(Ctx* __restrict c) {
  trace_call(0x8003D894u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D894
  c->r[0]=c->lr; // 8003D898
  W32(c->r[1]+0x00000044u,c->r[0]); // 8003D89C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8003D8A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8003D8A4
  c->r[11]=c->r[1]+0x00000030u; // 8003D8A8
  c->lr=0x8003D8B0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003D8AC
  c->f[31]=c->f[1]; // 8003D8B0
  c->r[29]=c->r[3]|c->r[3]; // 8003D8B4
  c->r[31]=c->r[4]|c->r[4]; // 8003D8B8
  c->r[30]=c->r[5]|c->r[5]; // 8003D8BC
  c->lr=0x8003D8C4u; f_8003B104(c); // 8003D8C0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D8C4
  c->r[0]=0u+0x43300000u; // 8003D8C8
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D8CC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 8003D8D0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D8D4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003D8D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003D8DC
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[2]=RF64(ea);} // 8003D8E0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8003D8E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8003D8E8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003D8EC
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8003D8F0
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D8F4
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D8F8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8003D8FC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003D900
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003D904
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 8003D908
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D90C
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D910
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8003D914
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003D918
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003D91C
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[0]);} // 8003D920
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003D924
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003D928
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8003D92C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003D930
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003D934
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[0]);} // 8003D938
  c->r[3]=R32(c->r[31]+0x00000100u); // 8003D93C
  c->r[0]=R32(c->r[30]+0x00000100u); // 8003D940
  c->r[3]=c->r[3]^0x80000000u; // 8003D944
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003D948
  c->r[0]=c->r[0]^0x80000000u; // 8003D94C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D950
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8003D954
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8003D958
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8003D95C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8003D960
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8003D964
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003D968
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003D96C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8003D970
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8003D974
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8003D978
  W32(c->r[29]+0x00000100u,c->r[0]); // 8003D97C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8003D980
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8003D984
  c->r[11]=c->r[1]+0x00000030u; // 8003D988
  c->lr=0x8003D990u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003D98C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8003D990
  c->lr=c->r[0]; // 8003D994
  c->r[1]=c->r[1]+0x00000040u; // 8003D998
  return; // 8003D99C
}

// fn_8003D9A0
void f_8003D9A0(Ctx* __restrict c) {
  trace_call(0x8003D9A0u);
  c->r[3]=0u+0x00000108u; // 8003D9A0
  return; // 8003D9A4
}

// fn_8003D9A8
void f_8003D9A8(Ctx* __restrict c) {
  trace_call(0x8003D9A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003D9A8
  c->r[0]=c->lr; // 8003D9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003D9B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003D9B4
  c->r[31]=c->r[3]|c->r[3]; // 8003D9B8
  c->lr=0x8003D9C0u; f_8003D57C(c); // 8003D9BC
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003D9C0
  c->r[3]=0u+0x80420000u; // 8003D9C4
  c->r[3]=c->r[3]+0x0000136Cu; // 8003D9C8
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003D9CC
  c->r[0]=c->r[0]|0x80000000u; // 8003D9D0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003D9D4
  c->r[3]=c->r[31]|c->r[31]; // 8003D9D8
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003D9DC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003D9E0
  c->ctr=c->r[12]; // 8003D9E4
  if (true) { c->lr=0x8003D9ECu; dispatch(c,c->ctr); } // 8003D9E8
  c->r[3]=c->r[31]|c->r[31]; // 8003D9EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003D9F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003D9F4
  c->lr=c->r[0]; // 8003D9F8
  c->r[1]=c->r[1]+0x00000010u; // 8003D9FC
  return; // 8003DA00
}

// fn_8003DA04
void f_8003DA04(Ctx* __restrict c) {
  trace_call(0x8003DA04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DA04
  c->r[0]=c->lr; // 8003DA08
  cmps(c,0,(int32_t)c->r[3],0); // 8003DA0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DA10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003DA14
  c->r[30]=c->r[3]|c->r[3]; // 8003DA18
  c->r[31]=c->r[4]|c->r[4]; // 8003DA1C
  if (crb(c,2)) { goto L_8003DA40; } // 8003DA20
  if (crb(c,2)) { goto L_8003DA30; } // 8003DA24
  c->r[4]=0u+0x00000000u; // 8003DA28
  c->lr=0x8003DA30u; f_8003ABE0(c); // 8003DA2C
L_8003DA30:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003DA30
  if (!crb(c,1)) { goto L_8003DA40; } // 8003DA34
  c->r[3]=c->r[30]|c->r[30]; // 8003DA38
  c->lr=0x8003DA40u; f_80244DC0(c); // 8003DA3C
L_8003DA40:;
  c->r[3]=c->r[30]|c->r[30]; // 8003DA40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003DA44
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DA48
  c->lr=c->r[0]; // 8003DA4C
  c->r[1]=c->r[1]+0x00000010u; // 8003DA50
  return; // 8003DA54
}

// fn_8003DA58
void f_8003DA58(Ctx* __restrict c) {
  trace_call(0x8003DA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DA58
  c->r[0]=c->lr; // 8003DA5C
  c->r[3]=0u+0x00000108u; // 8003DA60
  c->r[4]=c->r[13]+0xFFFF8D0Au; // 8003DA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DA68
  c->r[5]=0u+0x00000000u; // 8003DA6C
  c->r[6]=0u+0x00001001u; // 8003DA70
  c->lr=0x8003DA78u; f_80244D20(c); // 8003DA74
  cmps(c,0,(int32_t)c->r[3],0); // 8003DA78
  if (crb(c,2)) { goto L_8003DA84; } // 8003DA7C
  c->lr=0x8003DA84u; f_8003D9A8(c); // 8003DA80
L_8003DA84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DA84
  c->lr=c->r[0]; // 8003DA88
  c->r[1]=c->r[1]+0x00000010u; // 8003DA8C
  return; // 8003DA90
}

// fn_8003DA94
void f_8003DA94(Ctx* __restrict c) {
  trace_call(0x8003DA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DA94
  c->r[0]=c->lr; // 8003DA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DA9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003DAA0
  c->r[31]=c->r[3]|c->r[3]; // 8003DAA4
  c->lr=0x8003DAACu; f_80244520(c); // 8003DAA8
  c->r[7]=c->r[3]|c->r[3]; // 8003DAAC
  c->r[9]=c->r[31]|c->r[31]; // 8003DAB0
  c->r[3]=0u+0x00000108u; // 8003DAB4
  c->r[4]=c->r[13]+0xFFFF8D0Fu; // 8003DAB8
  c->r[5]=0u+0x00000000u; // 8003DABC
  c->r[6]=0u+0x00002001u; // 8003DAC0
  c->r[8]=0u+0x00000000u; // 8003DAC4
  c->lr=0x8003DACCu; f_80242DF0(c); // 8003DAC8
  c->r[4]=c->r[3]|c->r[3]; // 8003DACC
  c->r[3]=0u+0x00000108u; // 8003DAD0
  c->r[5]=c->r[13]+0xFFFF8D14u; // 8003DAD4
  c->r[6]=0u+0x00000000u; // 8003DAD8
  c->r[7]=0u+0x00001001u; // 8003DADC
  c->lr=0x8003DAE4u; f_80244DB0(c); // 8003DAE0
  cmps(c,0,(int32_t)c->r[3],0); // 8003DAE4
  if (crb(c,2)) { goto L_8003DAF0; } // 8003DAE8
  c->lr=0x8003DAF0u; f_8003D9A8(c); // 8003DAEC
L_8003DAF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DAF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003DAF4
  c->lr=c->r[0]; // 8003DAF8
  c->r[1]=c->r[1]+0x00000010u; // 8003DAFC
  return; // 8003DB00
}

// fn_8003DB04
void f_8003DB04(Ctx* __restrict c) {
  trace_call(0x8003DB04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DB04
  c->r[0]=c->lr; // 8003DB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DB0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003DB10
  c->r[31]=c->r[3]|c->r[3]; // 8003DB14
  c->lr=0x8003DB1Cu; f_8003ACE0(c); // 8003DB18
  c->r[8]=0u+0x80420000u; // 8003DB1C
  c->r[7]=0u+0x80410000u; // 8003DB20
  c->r[5]=0u+0xBD6C0000u; // 8003DB24
  c->r[4]=0u+0xA5640000u; // 8003DB28
  c->r[3]=0u+0xE94C0000u; // 8003DB2C
  c->r[8]=c->r[8]+0x00001330u; // 8003DB30
  c->r[0]=c->r[3]+0xFFFFFC62u; // 8003DB34
  c->r[7]=c->r[7]+0xFFFFBA60u; // 8003DB38
  c->r[5]=c->r[5]+0xFFFFDC86u; // 8003DB3C
  c->r[4]=c->r[4]+0x00002607u; // 8003DB40
  c->r[6]=0u+0x00000000u; // 8003DB44
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003DB48
  c->r[3]=c->r[31]|c->r[31]; // 8003DB4C
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003DB50
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003DB54
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003DB58
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003DB5C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003DB60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003DB64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DB68
  c->lr=c->r[0]; // 8003DB6C
  c->r[1]=c->r[1]+0x00000010u; // 8003DB70
  return; // 8003DB74
}

// fn_8003DB78
void f_8003DB78(Ctx* __restrict c) {
  trace_call(0x8003DB78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DB78
  c->r[0]=c->lr; // 8003DB7C
  cmps(c,0,(int32_t)c->r[4],0); // 8003DB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DB84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003DB88
  c->r[30]=c->r[3]|c->r[3]; // 8003DB8C
  c->r[31]=c->r[4]|c->r[4]; // 8003DB90
  if (crb(c,2)) { goto L_8003DBE8; } // 8003DB94
  c->r[3]=c->r[31]|c->r[31]; // 8003DB98
  c->lr=0x8003DBA0u; f_80244520(c); // 8003DB9C
  c->r[7]=c->r[3]|c->r[3]; // 8003DBA0
  c->r[9]=c->r[31]|c->r[31]; // 8003DBA4
  c->r[3]=0u+0x000000E4u; // 8003DBA8
  c->r[4]=c->r[13]+0xFFFF8D19u; // 8003DBAC
  c->r[5]=0u+0x00000000u; // 8003DBB0
  c->r[6]=0u+0x00002001u; // 8003DBB4
  c->r[8]=0u+0x00000000u; // 8003DBB8
  c->lr=0x8003DBC0u; f_80242DF0(c); // 8003DBBC
  c->r[4]=c->r[3]|c->r[3]; // 8003DBC0
  c->r[3]=0u+0x000000E4u; // 8003DBC4
  c->r[5]=c->r[13]+0xFFFF8D1Eu; // 8003DBC8
  c->r[6]=0u+0x00000000u; // 8003DBCC
  c->r[7]=0u+0x00001001u; // 8003DBD0
  c->lr=0x8003DBD8u; f_80244DB0(c); // 8003DBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8003DBD8
  if (crb(c,2)) { goto L_8003DC08; } // 8003DBDC
  c->lr=0x8003DBE4u; f_8003DB04(c); // 8003DBE0
  goto L_8003DC08; // 8003DBE4
L_8003DBE8:;
  c->r[3]=0u+0x000000E4u; // 8003DBE8
  c->r[4]=c->r[13]+0xFFFF8D23u; // 8003DBEC
  c->r[5]=0u+0x00000000u; // 8003DBF0
  c->r[6]=0u+0x00001001u; // 8003DBF4
  c->lr=0x8003DBFCu; f_80244D20(c); // 8003DBF8
  cmps(c,0,(int32_t)c->r[3],0); // 8003DBFC
  if (crb(c,2)) { goto L_8003DC08; } // 8003DC00
  c->lr=0x8003DC08u; f_8003DB04(c); // 8003DC04
L_8003DC08:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003DC08
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003DC0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003DC10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DC14
  c->lr=c->r[0]; // 8003DC18
  c->r[1]=c->r[1]+0x00000010u; // 8003DC1C
  return; // 8003DC20
}

// fn_8003DC24
void f_8003DC24(Ctx* __restrict c) {
  trace_call(0x8003DC24u);
  f_8003AE00(c); return; // 8003DC24
}

// fn_8003DC28
void f_8003DC28(Ctx* __restrict c) {
  trace_call(0x8003DC28u);
  f_80038EC8(c); return; // 8003DC28
}

// fn_8003DC2C
void f_8003DC2C(Ctx* __restrict c) {
  trace_call(0x8003DC2Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 8003DC2C
  if (!crb(c,2)) return; // 8003DC30
  f_8003AF18(c); return; // 8003DC34
  return; // 8003DC38
}

// fn_8003DC3C
void f_8003DC3C(Ctx* __restrict c) {
  trace_call(0x8003DC3Cu);
  f_8003AF68(c); return; // 8003DC3C
}

// fn_8003DC40
void f_8003DC40(Ctx* __restrict c) {
  trace_call(0x8003DC40u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003DC40
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003DC44
  if (!crb(c,2)) { goto L_8003DC54; } // 8003DC48
  c->r[3]=0u+0x00000001u; // 8003DC4C
  return; // 8003DC50
L_8003DC54:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003DC54
  cmpu(c,0,c->r[0],0x00000802u); // 8003DC58
  if (!crb(c,2)) { goto L_8003DC68; } // 8003DC5C
  c->r[3]=0u+0x00000001u; // 8003DC60
  return; // 8003DC64
L_8003DC68:;
  c->r[3]=0u+0xD12F0000u; // 8003DC68
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003DC6C
  c->r[0]=c->r[4]-c->r[0]; // 8003DC70
  c->r[0]=cntlz(c->r[0]); // 8003DC74
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003DC78
  return; // 8003DC7C
}

// fn_8003DC80
void f_8003DC80(Ctx* __restrict c) {
  trace_call(0x8003DC80u);
  f_8003B104(c); return; // 8003DC80
}

// fn_8003DC84
void f_8003DC84(Ctx* __restrict c) {
  trace_call(0x8003DC84u);
  c->r[3]=0u+0x000000E4u; // 8003DC84
  return; // 8003DC88
}

// fn_8003DC8C
void f_8003DC8C(Ctx* __restrict c) {
  trace_call(0x8003DC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DC8C
  c->r[0]=c->lr; // 8003DC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DC94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003DC98
  c->r[31]=c->r[3]|c->r[3]; // 8003DC9C
  c->lr=0x8003DCA4u; f_8003DB04(c); // 8003DCA0
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003DCA4
  c->r[3]=0u+0x80420000u; // 8003DCA8
  c->r[3]=c->r[3]+0x000012F0u; // 8003DCAC
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003DCB0
  c->r[0]=c->r[0]|0x80000000u; // 8003DCB4
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003DCB8
  c->r[3]=c->r[31]|c->r[31]; // 8003DCBC
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003DCC0
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003DCC4
  c->ctr=c->r[12]; // 8003DCC8
  if (true) { c->lr=0x8003DCD0u; dispatch(c,c->ctr); } // 8003DCCC
  c->r[3]=c->r[31]|c->r[31]; // 8003DCD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003DCD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DCD8
  c->lr=c->r[0]; // 8003DCDC
  c->r[1]=c->r[1]+0x00000010u; // 8003DCE0
  return; // 8003DCE4
}

// fn_8003DCE8
void f_8003DCE8(Ctx* __restrict c) {
  trace_call(0x8003DCE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DCE8
  c->r[0]=c->lr; // 8003DCEC
  cmps(c,0,(int32_t)c->r[3],0); // 8003DCF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DCF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003DCF8
  c->r[30]=c->r[3]|c->r[3]; // 8003DCFC
  c->r[31]=c->r[4]|c->r[4]; // 8003DD00
  if (crb(c,2)) { goto L_8003DD24; } // 8003DD04
  if (crb(c,2)) { goto L_8003DD14; } // 8003DD08
  c->r[4]=0u+0x00000000u; // 8003DD0C
  c->lr=0x8003DD14u; f_8003ABE0(c); // 8003DD10
L_8003DD14:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003DD14
  if (!crb(c,1)) { goto L_8003DD24; } // 8003DD18
  c->r[3]=c->r[30]|c->r[30]; // 8003DD1C
  c->lr=0x8003DD24u; f_80244DC0(c); // 8003DD20
L_8003DD24:;
  c->r[3]=c->r[30]|c->r[30]; // 8003DD24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003DD28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DD2C
  c->lr=c->r[0]; // 8003DD30
  c->r[1]=c->r[1]+0x00000010u; // 8003DD34
  return; // 8003DD38
}

// fn_8003DD3C
void f_8003DD3C(Ctx* __restrict c) {
  trace_call(0x8003DD3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DD3C
  c->r[0]=c->lr; // 8003DD40
  c->r[3]=0u+0x000000E4u; // 8003DD44
  c->r[4]=c->r[13]+0xFFFF8D28u; // 8003DD48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DD4C
  c->r[5]=0u+0x00000000u; // 8003DD50
  c->r[6]=0u+0x00001001u; // 8003DD54
  c->lr=0x8003DD5Cu; f_80244D20(c); // 8003DD58
  cmps(c,0,(int32_t)c->r[3],0); // 8003DD5C
  if (crb(c,2)) { goto L_8003DD68; } // 8003DD60
  c->lr=0x8003DD68u; f_8003DC8C(c); // 8003DD64
L_8003DD68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DD68
  c->lr=c->r[0]; // 8003DD6C
  c->r[1]=c->r[1]+0x00000010u; // 8003DD70
  return; // 8003DD74
}

// fn_8003DD78
void f_8003DD78(Ctx* __restrict c) {
  trace_call(0x8003DD78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DD78
  c->r[0]=c->lr; // 8003DD7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DD80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003DD84
  c->r[31]=c->r[3]|c->r[3]; // 8003DD88
  c->lr=0x8003DD90u; f_80244520(c); // 8003DD8C
  c->r[7]=c->r[3]|c->r[3]; // 8003DD90
  c->r[9]=c->r[31]|c->r[31]; // 8003DD94
  c->r[3]=0u+0x000000E4u; // 8003DD98
  c->r[4]=c->r[13]+0xFFFF8D2Du; // 8003DD9C
  c->r[5]=0u+0x00000000u; // 8003DDA0
  c->r[6]=0u+0x00002001u; // 8003DDA4
  c->r[8]=0u+0x00000000u; // 8003DDA8
  c->lr=0x8003DDB0u; f_80242DF0(c); // 8003DDAC
  c->r[4]=c->r[3]|c->r[3]; // 8003DDB0
  c->r[3]=0u+0x000000E4u; // 8003DDB4
  c->r[5]=c->r[13]+0xFFFF8D32u; // 8003DDB8
  c->r[6]=0u+0x00000000u; // 8003DDBC
  c->r[7]=0u+0x00001001u; // 8003DDC0
  c->lr=0x8003DDC8u; f_80244DB0(c); // 8003DDC4
  cmps(c,0,(int32_t)c->r[3],0); // 8003DDC8
  if (crb(c,2)) { goto L_8003DDD4; } // 8003DDCC
  c->lr=0x8003DDD4u; f_8003DC8C(c); // 8003DDD0
L_8003DDD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DDD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003DDD8
  c->lr=c->r[0]; // 8003DDDC
  c->r[1]=c->r[1]+0x00000010u; // 8003DDE0
  return; // 8003DDE4
}

// fn_8003DDE8
void f_8003DDE8(Ctx* __restrict c) {
  trace_call(0x8003DDE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DDE8
  c->r[0]=c->lr; // 8003DDEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DDF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003DDF4
  c->r[31]=c->r[3]|c->r[3]; // 8003DDF8
  c->lr=0x8003DE00u; f_8003ACE0(c); // 8003DDFC
  c->r[7]=0u+0x80420000u; // 8003DE00
  c->r[6]=0u+0x80410000u; // 8003DE04
  c->r[5]=0u+0x00000000u; // 8003DE08
  c->r[4]=0u+0xBD6C0000u; // 8003DE0C
  c->r[3]=0u+0x9CD90000u; // 8003DE10
  c->r[7]=c->r[7]+0x000012B4u; // 8003DE14
  c->r[0]=c->r[3]+0x0000344Au; // 8003DE18
  c->r[6]=c->r[6]+0xFFFFBA6Fu; // 8003DE1C
  c->r[4]=c->r[4]+0xFFFFDC86u; // 8003DE20
  W32(c->r[31]+0x00000018u,c->r[7]); // 8003DE24
  c->r[3]=c->r[31]|c->r[31]; // 8003DE28
  W32(c->r[31]+0x00000000u,c->r[6]); // 8003DE2C
  W32(c->r[31]+0x00000008u,c->r[5]); // 8003DE30
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8003DE34
  W32(c->r[31]+0x00000010u,c->r[5]); // 8003DE38
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003DE3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003DE40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DE44
  c->lr=c->r[0]; // 8003DE48
  c->r[1]=c->r[1]+0x00000010u; // 8003DE4C
  return; // 8003DE50
}

// fn_8003DE54
void f_8003DE54(Ctx* __restrict c) {
  trace_call(0x8003DE54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DE54
  c->r[0]=c->lr; // 8003DE58
  cmps(c,0,(int32_t)c->r[4],0); // 8003DE5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DE60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003DE64
  c->r[30]=c->r[3]|c->r[3]; // 8003DE68
  c->r[31]=c->r[4]|c->r[4]; // 8003DE6C
  if (crb(c,2)) { goto L_8003DEC4; } // 8003DE70
  c->r[3]=c->r[31]|c->r[31]; // 8003DE74
  c->lr=0x8003DE7Cu; f_80244520(c); // 8003DE78
  c->r[7]=c->r[3]|c->r[3]; // 8003DE7C
  c->r[9]=c->r[31]|c->r[31]; // 8003DE80
  c->r[3]=0u+0x000000E4u; // 8003DE84
  c->r[4]=c->r[13]+0xFFFF8D37u; // 8003DE88
  c->r[5]=0u+0x00000000u; // 8003DE8C
  c->r[6]=0u+0x00002001u; // 8003DE90
  c->r[8]=0u+0x00000000u; // 8003DE94
  c->lr=0x8003DE9Cu; f_80242DF0(c); // 8003DE98
  c->r[4]=c->r[3]|c->r[3]; // 8003DE9C
  c->r[3]=0u+0x000000E4u; // 8003DEA0
  c->r[5]=c->r[13]+0xFFFF8D3Cu; // 8003DEA4
  c->r[6]=0u+0x00000000u; // 8003DEA8
  c->r[7]=0u+0x00001001u; // 8003DEAC
  c->lr=0x8003DEB4u; f_80244DB0(c); // 8003DEB0
  cmps(c,0,(int32_t)c->r[3],0); // 8003DEB4
  if (crb(c,2)) { goto L_8003DEE4; } // 8003DEB8
  c->lr=0x8003DEC0u; f_8003DDE8(c); // 8003DEBC
  goto L_8003DEE4; // 8003DEC0
L_8003DEC4:;
  c->r[3]=0u+0x000000E4u; // 8003DEC4
  c->r[4]=c->r[13]+0xFFFF8D41u; // 8003DEC8
  c->r[5]=0u+0x00000000u; // 8003DECC
  c->r[6]=0u+0x00001001u; // 8003DED0
  c->lr=0x8003DED8u; f_80244D20(c); // 8003DED4
  cmps(c,0,(int32_t)c->r[3],0); // 8003DED8
  if (crb(c,2)) { goto L_8003DEE4; } // 8003DEDC
  c->lr=0x8003DEE4u; f_8003DDE8(c); // 8003DEE0
L_8003DEE4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003DEE4
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003DEE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003DEEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DEF0
  c->lr=c->r[0]; // 8003DEF4
  c->r[1]=c->r[1]+0x00000010u; // 8003DEF8
  return; // 8003DEFC
}

// fn_8003DF00
void f_8003DF00(Ctx* __restrict c) {
  trace_call(0x8003DF00u);
  f_8003AE00(c); return; // 8003DF00
}

// fn_8003DF04
void f_8003DF04(Ctx* __restrict c) {
  trace_call(0x8003DF04u);
  f_80038EC8(c); return; // 8003DF04
}

// fn_8003DF08
void f_8003DF08(Ctx* __restrict c) {
  trace_call(0x8003DF08u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003DF08
  if (!crb(c,2)) return; // 8003DF0C
  f_8003AF18(c); return; // 8003DF10
  return; // 8003DF14
}

// fn_8003DF18
void f_8003DF18(Ctx* __restrict c) {
  trace_call(0x8003DF18u);
  f_8003AF68(c); return; // 8003DF18
}

// fn_8003DF1C
void f_8003DF1C(Ctx* __restrict c) {
  trace_call(0x8003DF1Cu);
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003DF1C
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003DF20
  if (!crb(c,2)) { goto L_8003DF30; } // 8003DF24
  c->r[3]=0u+0x00000001u; // 8003DF28
  return; // 8003DF2C
L_8003DF30:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003DF30
  cmpu(c,0,c->r[0],0x00000802u); // 8003DF34
  if (!crb(c,2)) { goto L_8003DF44; } // 8003DF38
  c->r[3]=0u+0x00000001u; // 8003DF3C
  return; // 8003DF40
L_8003DF44:;
  c->r[3]=0u+0xD12F0000u; // 8003DF44
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003DF48
  c->r[0]=c->r[4]-c->r[0]; // 8003DF4C
  c->r[0]=cntlz(c->r[0]); // 8003DF50
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003DF54
  return; // 8003DF58
}

// fn_8003DF5C
void f_8003DF5C(Ctx* __restrict c) {
  trace_call(0x8003DF5Cu);
  f_8003B104(c); return; // 8003DF5C
}

// fn_8003DF60
void f_8003DF60(Ctx* __restrict c) {
  trace_call(0x8003DF60u);
  c->r[3]=0u+0x000000E4u; // 8003DF60
  return; // 8003DF64
}

// fn_8003DF68
void f_8003DF68(Ctx* __restrict c) {
  trace_call(0x8003DF68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DF68
  c->r[0]=c->lr; // 8003DF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DF70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003DF74
  c->r[31]=c->r[3]|c->r[3]; // 8003DF78
  c->lr=0x8003DF80u; f_8003DDE8(c); // 8003DF7C
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003DF80
  c->r[3]=0u+0x80420000u; // 8003DF84
  c->r[3]=c->r[3]+0x00001274u; // 8003DF88
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003DF8C
  c->r[0]=c->r[0]|0x80000000u; // 8003DF90
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003DF94
  c->r[3]=c->r[31]|c->r[31]; // 8003DF98
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003DF9C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003DFA0
  c->ctr=c->r[12]; // 8003DFA4
  if (true) { c->lr=0x8003DFACu; dispatch(c,c->ctr); } // 8003DFA8
  c->r[3]=c->r[31]|c->r[31]; // 8003DFAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003DFB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003DFB4
  c->lr=c->r[0]; // 8003DFB8
  c->r[1]=c->r[1]+0x00000010u; // 8003DFBC
  return; // 8003DFC0
}

// fn_8003DFC4
void f_8003DFC4(Ctx* __restrict c) {
  trace_call(0x8003DFC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003DFC4
  c->r[0]=c->lr; // 8003DFC8
  cmps(c,0,(int32_t)c->r[3],0); // 8003DFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003DFD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003DFD4
  c->r[30]=c->r[3]|c->r[3]; // 8003DFD8
  c->r[31]=c->r[4]|c->r[4]; // 8003DFDC
  if (crb(c,2)) { goto L_8003E000; } // 8003DFE0
  if (crb(c,2)) { goto L_8003DFF0; } // 8003DFE4
  c->r[4]=0u+0x00000000u; // 8003DFE8
  c->lr=0x8003DFF0u; f_8003ABE0(c); // 8003DFEC
L_8003DFF0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003DFF0
  if (!crb(c,1)) { goto L_8003E000; } // 8003DFF4
  c->r[3]=c->r[30]|c->r[30]; // 8003DFF8
  c->lr=0x8003E000u; f_80244DC0(c); // 8003DFFC
L_8003E000:;
  c->r[3]=c->r[30]|c->r[30]; // 8003E000
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003E004
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E008
  c->lr=c->r[0]; // 8003E00C
  c->r[1]=c->r[1]+0x00000010u; // 8003E010
  return; // 8003E014
}

// fn_8003E018
void f_8003E018(Ctx* __restrict c) {
  trace_call(0x8003E018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E018
  c->r[0]=c->lr; // 8003E01C
  c->r[3]=0u+0x000000E4u; // 8003E020
  c->r[4]=c->r[13]+0xFFFF8D46u; // 8003E024
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E028
  c->r[5]=0u+0x00000000u; // 8003E02C
  c->r[6]=0u+0x00001001u; // 8003E030
  c->lr=0x8003E038u; f_80244D20(c); // 8003E034
  cmps(c,0,(int32_t)c->r[3],0); // 8003E038
  if (crb(c,2)) { goto L_8003E044; } // 8003E03C
  c->lr=0x8003E044u; f_8003DF68(c); // 8003E040
L_8003E044:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E044
  c->lr=c->r[0]; // 8003E048
  c->r[1]=c->r[1]+0x00000010u; // 8003E04C
  return; // 8003E050
}

// fn_8003E054
void f_8003E054(Ctx* __restrict c) {
  trace_call(0x8003E054u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E054
  c->r[0]=c->lr; // 8003E058
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E05C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E060
  c->r[31]=c->r[3]|c->r[3]; // 8003E064
  c->lr=0x8003E06Cu; f_80244520(c); // 8003E068
  c->r[7]=c->r[3]|c->r[3]; // 8003E06C
  c->r[9]=c->r[31]|c->r[31]; // 8003E070
  c->r[3]=0u+0x000000E4u; // 8003E074
  c->r[4]=c->r[13]+0xFFFF8D4Bu; // 8003E078
  c->r[5]=0u+0x00000000u; // 8003E07C
  c->r[6]=0u+0x00002001u; // 8003E080
  c->r[8]=0u+0x00000000u; // 8003E084
  c->lr=0x8003E08Cu; f_80242DF0(c); // 8003E088
  c->r[4]=c->r[3]|c->r[3]; // 8003E08C
  c->r[3]=0u+0x000000E4u; // 8003E090
  c->r[5]=c->r[13]+0xFFFF8D50u; // 8003E094
  c->r[6]=0u+0x00000000u; // 8003E098
  c->r[7]=0u+0x00001001u; // 8003E09C
  c->lr=0x8003E0A4u; f_80244DB0(c); // 8003E0A0
  cmps(c,0,(int32_t)c->r[3],0); // 8003E0A4
  if (crb(c,2)) { goto L_8003E0B0; } // 8003E0A8
  c->lr=0x8003E0B0u; f_8003DF68(c); // 8003E0AC
L_8003E0B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E0B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E0B4
  c->lr=c->r[0]; // 8003E0B8
  c->r[1]=c->r[1]+0x00000010u; // 8003E0BC
  return; // 8003E0C0
}

// fn_8003E0C4
void f_8003E0C4(Ctx* __restrict c) {
  trace_call(0x8003E0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E0C4
  c->r[0]=c->lr; // 8003E0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E0CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E0D0
  c->r[31]=c->r[3]|c->r[3]; // 8003E0D4
  c->lr=0x8003E0DCu; f_8003ACE0(c); // 8003E0D8
  c->r[8]=0u+0x80420000u; // 8003E0DC
  c->r[7]=0u+0x80410000u; // 8003E0E0
  c->r[5]=0u+0x8CBC0000u; // 8003E0E4
  c->r[4]=0u+0xDC8E0000u; // 8003E0E8
  c->r[3]=0u+0x3D3F0000u; // 8003E0EC
  c->r[8]=c->r[8]+0x00001238u; // 8003E0F0
  c->r[0]=c->r[3]+0xFFFFB99Au; // 8003E0F4
  c->r[7]=c->r[7]+0xFFFFBA80u; // 8003E0F8
  c->r[5]=c->r[5]+0x00005589u; // 8003E0FC
  c->r[4]=c->r[4]+0x00004B2Eu; // 8003E100
  c->r[6]=0u+0x00000000u; // 8003E104
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003E108
  c->r[3]=c->r[31]|c->r[31]; // 8003E10C
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003E110
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003E114
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003E118
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003E11C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003E120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E124
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E128
  c->lr=c->r[0]; // 8003E12C
  c->r[1]=c->r[1]+0x00000010u; // 8003E130
  return; // 8003E134
}

// fn_8003E138
void f_8003E138(Ctx* __restrict c) {
  trace_call(0x8003E138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E138
  c->r[0]=c->lr; // 8003E13C
  cmps(c,0,(int32_t)c->r[4],0); // 8003E140
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E144
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003E148
  c->r[30]=c->r[3]|c->r[3]; // 8003E14C
  c->r[31]=c->r[4]|c->r[4]; // 8003E150
  if (crb(c,2)) { goto L_8003E1A8; } // 8003E154
  c->r[3]=c->r[31]|c->r[31]; // 8003E158
  c->lr=0x8003E160u; f_80244520(c); // 8003E15C
  c->r[7]=c->r[3]|c->r[3]; // 8003E160
  c->r[9]=c->r[31]|c->r[31]; // 8003E164
  c->r[3]=0u+0x00000108u; // 8003E168
  c->r[4]=c->r[13]+0xFFFF8D55u; // 8003E16C
  c->r[5]=0u+0x00000000u; // 8003E170
  c->r[6]=0u+0x00002001u; // 8003E174
  c->r[8]=0u+0x00000000u; // 8003E178
  c->lr=0x8003E180u; f_80242DF0(c); // 8003E17C
  c->r[4]=c->r[3]|c->r[3]; // 8003E180
  c->r[3]=0u+0x00000108u; // 8003E184
  c->r[5]=c->r[13]+0xFFFF8D5Au; // 8003E188
  c->r[6]=0u+0x00000000u; // 8003E18C
  c->r[7]=0u+0x00001001u; // 8003E190
  c->lr=0x8003E198u; f_80244DB0(c); // 8003E194
  cmps(c,0,(int32_t)c->r[3],0); // 8003E198
  if (crb(c,2)) { goto L_8003E1C8; } // 8003E19C
  c->lr=0x8003E1A4u; f_8003E0C4(c); // 8003E1A0
  goto L_8003E1C8; // 8003E1A4
L_8003E1A8:;
  c->r[3]=0u+0x00000108u; // 8003E1A8
  c->r[4]=c->r[13]+0xFFFF8D5Fu; // 8003E1AC
  c->r[5]=0u+0x00000000u; // 8003E1B0
  c->r[6]=0u+0x00001001u; // 8003E1B4
  c->lr=0x8003E1BCu; f_80244D20(c); // 8003E1B8
  cmps(c,0,(int32_t)c->r[3],0); // 8003E1BC
  if (crb(c,2)) { goto L_8003E1C8; } // 8003E1C0
  c->lr=0x8003E1C8u; f_8003E0C4(c); // 8003E1C4
L_8003E1C8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003E1C8
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003E1CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003E1D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E1D4
  c->lr=c->r[0]; // 8003E1D8
  c->r[1]=c->r[1]+0x00000010u; // 8003E1DC
  return; // 8003E1E0
}

// fn_8003E1E4
void f_8003E1E4(Ctx* __restrict c) {
  trace_call(0x8003E1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E1E4
  c->r[0]=c->lr; // 8003E1E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003E1EC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003E1F0
  c->r[29]=c->r[3]|c->r[3]; // 8003E1F4
  c->r[30]=c->r[4]|c->r[4]; // 8003E1F8
  c->lr=0x8003E200u; f_8003AE00(c); // 8003E1FC
  c->r[31]=c->r[3]|c->r[3]; // 8003E200
  c->r[3]=c->r[30]|c->r[30]; // 8003E204
  c->lr=0x8003E20Cu; f_8030BD1C(c); // 8003E208
  W32(c->r[29]+0x000000E4u,c->r[3]); // 8003E20C
  c->r[3]=c->r[30]|c->r[30]; // 8003E210
  c->lr=0x8003E218u; f_8030BD1C(c); // 8003E214
  W32(c->r[29]+0x000000E8u,c->r[3]); // 8003E218
  c->r[3]=c->r[30]|c->r[30]; // 8003E21C
  c->lr=0x8003E224u; f_8030BD1C(c); // 8003E220
  W32(c->r[29]+0x000000ECu,c->r[3]); // 8003E224
  c->r[3]=c->r[30]|c->r[30]; // 8003E228
  c->lr=0x8003E230u; f_8030BD1C(c); // 8003E22C
  W32(c->r[29]+0x000000F0u,c->r[3]); // 8003E230
  c->r[3]=c->r[30]|c->r[30]; // 8003E234
  c->lr=0x8003E23Cu; f_8030C0A0(c); // 8003E238
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 8003E23C
  c->r[3]=c->r[30]|c->r[30]; // 8003E240
  c->lr=0x8003E248u; f_8030BD1C(c); // 8003E244
  W32(c->r[29]+0x000000F8u,c->r[3]); // 8003E248
  c->r[3]=c->r[30]|c->r[30]; // 8003E24C
  c->lr=0x8003E254u; f_8030BD1C(c); // 8003E250
  W8(c->r[29]+0x000000FCu,c->r[3]); // 8003E254
  c->r[3]=c->r[30]|c->r[30]; // 8003E258
  c->lr=0x8003E260u; f_8030BD1C(c); // 8003E25C
  W8(c->r[29]+0x000000FDu,c->r[3]); // 8003E260
  c->r[3]=c->r[30]|c->r[30]; // 8003E264
  c->lr=0x8003E26Cu; f_8030BD1C(c); // 8003E268
  W32(c->r[29]+0x00000100u,c->r[3]); // 8003E26C
  c->r[3]=c->r[30]|c->r[30]; // 8003E270
  c->lr=0x8003E278u; f_8030BD1C(c); // 8003E274
  W8(c->r[29]+0x00000104u,c->r[3]); // 8003E278
  c->r[3]=c->r[30]|c->r[30]; // 8003E27C
  c->lr=0x8003E284u; f_8030BD1C(c); // 8003E280
  W8(c->r[29]+0x00000105u,c->r[3]); // 8003E284
  c->r[3]=c->r[31]|c->r[31]; // 8003E288
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003E28C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003E290
  c->lr=c->r[0]; // 8003E294
  c->r[1]=c->r[1]+0x00000020u; // 8003E298
  return; // 8003E29C
}

// fn_8003E2A0
void f_8003E2A0(Ctx* __restrict c) {
  trace_call(0x8003E2A0u);
  f_80038EC8(c); return; // 8003E2A0
}

// fn_8003E2A4
void f_8003E2A4(Ctx* __restrict c) {
  trace_call(0x8003E2A4u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003E2A4
  if (!crb(c,2)) return; // 8003E2A8
  f_8003AF18(c); return; // 8003E2AC
  return; // 8003E2B0
}

// fn_8003E2B4
void f_8003E2B4(Ctx* __restrict c) {
  trace_call(0x8003E2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E2B4
  c->r[0]=c->lr; // 8003E2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E2BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E2C0
  c->r[31]=c->r[3]|c->r[3]; // 8003E2C4
  c->lr=0x8003E2CCu; f_8003AF68(c); // 8003E2C8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E2CC
  c->r[4]=0u+0x00000000u; // 8003E2D0
  c->r[3]=0u+0x00000001u; // 8003E2D4
  c->r[0]=0u+0x00000003u; // 8003E2D8
  W32(c->r[31]+0x000000E4u,c->r[4]); // 8003E2DC
  W32(c->r[31]+0x000000E8u,c->r[4]); // 8003E2E0
  W32(c->r[31]+0x000000ECu,c->r[4]); // 8003E2E4
  W32(c->r[31]+0x000000F0u,c->r[4]); // 8003E2E8
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 8003E2EC
  W32(c->r[31]+0x000000F8u,c->r[4]); // 8003E2F0
  W8(c->r[31]+0x000000FCu,c->r[3]); // 8003E2F4
  W8(c->r[31]+0x000000FDu,c->r[4]); // 8003E2F8
  W32(c->r[31]+0x00000100u,c->r[0]); // 8003E2FC
  W8(c->r[31]+0x00000104u,c->r[4]); // 8003E300
  W8(c->r[31]+0x00000105u,c->r[4]); // 8003E304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E308
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E30C
  c->lr=c->r[0]; // 8003E310
  c->r[1]=c->r[1]+0x00000010u; // 8003E314
  return; // 8003E318
}

// fn_8003E31C
void f_8003E31C(Ctx* __restrict c) {
  trace_call(0x8003E31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E31C
  c->r[0]=c->lr; // 8003E320
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003E324
  c->r[11]=c->r[1]+0x00000020u; // 8003E328
  c->lr=0x8003E330u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003E32C
  c->r[29]=c->r[3]|c->r[3]; // 8003E330
  c->r[30]=c->r[4]|c->r[4]; // 8003E334
  c->r[31]=c->r[5]|c->r[5]; // 8003E338
  c->r[6]=0u+0x00000000u; // 8003E33C
  c->lr=0x8003E344u; f_8003AFFC(c); // 8003E340
  cmps(c,0,(int32_t)c->r[31],0); // 8003E344
  if (crb(c,2)) { goto L_8003E350; } // 8003E348
  goto L_8003E354; // 8003E34C
L_8003E350:;
  c->r[31]=c->r[29]|c->r[29]; // 8003E350
L_8003E354:;
  c->r[0]=R32(c->r[30]+0x000000E4u); // 8003E354
  c->r[11]=c->r[1]+0x00000020u; // 8003E358
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8003E35C
  c->r[0]=R32(c->r[30]+0x000000E8u); // 8003E360
  W32(c->r[31]+0x000000E8u,c->r[0]); // 8003E364
  c->r[0]=R32(c->r[30]+0x000000ECu); // 8003E368
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8003E36C
  c->r[0]=R32(c->r[30]+0x000000F0u); // 8003E370
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8003E374
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E378
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 8003E37C
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8003E380
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8003E384
  c->r[0]=R8(c->r[30]+0x000000FCu); // 8003E388
  W8(c->r[31]+0x000000FCu,c->r[0]); // 8003E38C
  c->r[0]=R8(c->r[30]+0x000000FDu); // 8003E390
  W8(c->r[31]+0x000000FDu,c->r[0]); // 8003E394
  c->r[0]=R32(c->r[30]+0x00000100u); // 8003E398
  W32(c->r[31]+0x00000100u,c->r[0]); // 8003E39C
  c->r[0]=R8(c->r[30]+0x00000104u); // 8003E3A0
  W8(c->r[31]+0x00000104u,c->r[0]); // 8003E3A4
  c->r[0]=R8(c->r[30]+0x00000105u); // 8003E3A8
  W8(c->r[31]+0x00000105u,c->r[0]); // 8003E3AC
  c->lr=0x8003E3B4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003E3B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003E3B4
  c->lr=c->r[0]; // 8003E3B8
  c->r[1]=c->r[1]+0x00000020u; // 8003E3BC
  return; // 8003E3C0
}

// fn_8003E3C4
void f_8003E3C4(Ctx* __restrict c) {
  trace_call(0x8003E3C4u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003E3C4
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003E3C8
  if (!crb(c,2)) { goto L_8003E3D8; } // 8003E3CC
  c->r[3]=0u+0x00000001u; // 8003E3D0
  return; // 8003E3D4
L_8003E3D8:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003E3D8
  cmpu(c,0,c->r[0],0x00000802u); // 8003E3DC
  if (!crb(c,2)) { goto L_8003E3EC; } // 8003E3E0
  c->r[3]=0u+0x00000001u; // 8003E3E4
  return; // 8003E3E8
L_8003E3EC:;
  c->r[3]=0u+0xD12F0000u; // 8003E3EC
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003E3F0
  c->r[0]=c->r[4]-c->r[0]; // 8003E3F4
  c->r[0]=cntlz(c->r[0]); // 8003E3F8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003E3FC
  return; // 8003E400
}

// fn_8003E404
void f_8003E404(Ctx* __restrict c) {
  trace_call(0x8003E404u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E404
  c->r[0]=c->lr; // 8003E408
  W32(c->r[1]+0x00000044u,c->r[0]); // 8003E40C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8003E410
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8003E414
  c->r[11]=c->r[1]+0x00000030u; // 8003E418
  c->lr=0x8003E420u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003E41C
  c->f[31]=c->f[1]; // 8003E420
  c->r[29]=c->r[3]|c->r[3]; // 8003E424
  c->r[31]=c->r[4]|c->r[4]; // 8003E428
  c->r[30]=c->r[5]|c->r[5]; // 8003E42C
  c->lr=0x8003E434u; f_8003B104(c); // 8003E430
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E434
  c->r[0]=0u+0x43300000u; // 8003E438
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E43C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 8003E440
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E444
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003E448
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003E44C
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[2]=RF64(ea);} // 8003E450
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8003E454
  W32(c->r[1]+0x00000010u,c->r[0]); // 8003E458
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003E45C
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[0]);} // 8003E460
  c->r[3]=R32(c->r[31]+0x00000100u); // 8003E464
  c->r[0]=R32(c->r[30]+0x00000100u); // 8003E468
  c->r[3]=c->r[3]^0x80000000u; // 8003E46C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003E470
  c->r[0]=c->r[0]^0x80000000u; // 8003E474
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E478
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8003E47C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8003E480
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8003E484
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8003E488
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8003E48C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003E490
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003E494
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8003E498
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8003E49C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8003E4A0
  W32(c->r[29]+0x00000100u,c->r[0]); // 8003E4A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8003E4A8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8003E4AC
  c->r[11]=c->r[1]+0x00000030u; // 8003E4B0
  c->lr=0x8003E4B8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003E4B4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8003E4B8
  c->lr=c->r[0]; // 8003E4BC
  c->r[1]=c->r[1]+0x00000040u; // 8003E4C0
  return; // 8003E4C4
}

// fn_8003E4C8
void f_8003E4C8(Ctx* __restrict c) {
  trace_call(0x8003E4C8u);
  c->r[3]=0u+0x00000108u; // 8003E4C8
  return; // 8003E4CC
}

// fn_8003E4D0
void f_8003E4D0(Ctx* __restrict c) {
  trace_call(0x8003E4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E4D0
  c->r[0]=c->lr; // 8003E4D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E4D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E4DC
  c->r[31]=c->r[3]|c->r[3]; // 8003E4E0
  c->lr=0x8003E4E8u; f_8003E0C4(c); // 8003E4E4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003E4E8
  c->r[3]=0u+0x80420000u; // 8003E4EC
  c->r[3]=c->r[3]+0x000011F8u; // 8003E4F0
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003E4F4
  c->r[0]=c->r[0]|0x80000000u; // 8003E4F8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003E4FC
  c->r[3]=c->r[31]|c->r[31]; // 8003E500
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003E504
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003E508
  c->ctr=c->r[12]; // 8003E50C
  if (true) { c->lr=0x8003E514u; dispatch(c,c->ctr); } // 8003E510
  c->r[3]=c->r[31]|c->r[31]; // 8003E514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E518
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E51C
  c->lr=c->r[0]; // 8003E520
  c->r[1]=c->r[1]+0x00000010u; // 8003E524
  return; // 8003E528
}

// fn_8003E52C
void f_8003E52C(Ctx* __restrict c) {
  trace_call(0x8003E52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E52C
  c->r[0]=c->lr; // 8003E530
  cmps(c,0,(int32_t)c->r[3],0); // 8003E534
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E538
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003E53C
  c->r[30]=c->r[3]|c->r[3]; // 8003E540
  c->r[31]=c->r[4]|c->r[4]; // 8003E544
  if (crb(c,2)) { goto L_8003E568; } // 8003E548
  if (crb(c,2)) { goto L_8003E558; } // 8003E54C
  c->r[4]=0u+0x00000000u; // 8003E550
  c->lr=0x8003E558u; f_8003ABE0(c); // 8003E554
L_8003E558:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003E558
  if (!crb(c,1)) { goto L_8003E568; } // 8003E55C
  c->r[3]=c->r[30]|c->r[30]; // 8003E560
  c->lr=0x8003E568u; f_80244DC0(c); // 8003E564
L_8003E568:;
  c->r[3]=c->r[30]|c->r[30]; // 8003E568
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003E56C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E570
  c->lr=c->r[0]; // 8003E574
  c->r[1]=c->r[1]+0x00000010u; // 8003E578
  return; // 8003E57C
}

// fn_8003E580
void f_8003E580(Ctx* __restrict c) {
  trace_call(0x8003E580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E580
  c->r[0]=c->lr; // 8003E584
  c->r[3]=0u+0x00000108u; // 8003E588
  c->r[4]=c->r[13]+0xFFFF8D64u; // 8003E58C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E590
  c->r[5]=0u+0x00000000u; // 8003E594
  c->r[6]=0u+0x00001001u; // 8003E598
  c->lr=0x8003E5A0u; f_80244D20(c); // 8003E59C
  cmps(c,0,(int32_t)c->r[3],0); // 8003E5A0
  if (crb(c,2)) { goto L_8003E5AC; } // 8003E5A4
  c->lr=0x8003E5ACu; f_8003E4D0(c); // 8003E5A8
L_8003E5AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E5AC
  c->lr=c->r[0]; // 8003E5B0
  c->r[1]=c->r[1]+0x00000010u; // 8003E5B4
  return; // 8003E5B8
}

// fn_8003E5BC
void f_8003E5BC(Ctx* __restrict c) {
  trace_call(0x8003E5BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E5BC
  c->r[0]=c->lr; // 8003E5C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E5C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E5C8
  c->r[31]=c->r[3]|c->r[3]; // 8003E5CC
  c->lr=0x8003E5D4u; f_80244520(c); // 8003E5D0
  c->r[7]=c->r[3]|c->r[3]; // 8003E5D4
  c->r[9]=c->r[31]|c->r[31]; // 8003E5D8
  c->r[3]=0u+0x00000108u; // 8003E5DC
  c->r[4]=c->r[13]+0xFFFF8D69u; // 8003E5E0
  c->r[5]=0u+0x00000000u; // 8003E5E4
  c->r[6]=0u+0x00002001u; // 8003E5E8
  c->r[8]=0u+0x00000000u; // 8003E5EC
  c->lr=0x8003E5F4u; f_80242DF0(c); // 8003E5F0
  c->r[4]=c->r[3]|c->r[3]; // 8003E5F4
  c->r[3]=0u+0x00000108u; // 8003E5F8
  c->r[5]=c->r[13]+0xFFFF8D6Eu; // 8003E5FC
  c->r[6]=0u+0x00000000u; // 8003E600
  c->r[7]=0u+0x00001001u; // 8003E604
  c->lr=0x8003E60Cu; f_80244DB0(c); // 8003E608
  cmps(c,0,(int32_t)c->r[3],0); // 8003E60C
  if (crb(c,2)) { goto L_8003E618; } // 8003E610
  c->lr=0x8003E618u; f_8003E4D0(c); // 8003E614
L_8003E618:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E61C
  c->lr=c->r[0]; // 8003E620
  c->r[1]=c->r[1]+0x00000010u; // 8003E624
  return; // 8003E628
}

// fn_8003E62C
void f_8003E62C(Ctx* __restrict c) {
  trace_call(0x8003E62Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E62C
  c->r[0]=c->lr; // 8003E630
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E638
  c->r[31]=c->r[3]|c->r[3]; // 8003E63C
  c->lr=0x8003E644u; f_8003E0C4(c); // 8003E640
  c->r[8]=0u+0x80420000u; // 8003E644
  c->r[7]=0u+0x80410000u; // 8003E648
  c->r[5]=0u+0x47D70000u; // 8003E64C
  c->r[4]=0u+0xDC8E0000u; // 8003E650
  c->r[3]=0u+0xF3ED0000u; // 8003E654
  c->r[8]=c->r[8]+0x000011BCu; // 8003E658
  c->r[0]=c->r[3]+0xFFFF8FFBu; // 8003E65C
  c->r[7]=c->r[7]+0xFFFFBA91u; // 8003E660
  c->r[5]=c->r[5]+0x00000D4Bu; // 8003E664
  c->r[4]=c->r[4]+0x00004B2Eu; // 8003E668
  c->r[6]=0u+0x00000000u; // 8003E66C
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003E670
  c->r[3]=c->r[31]|c->r[31]; // 8003E674
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003E678
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003E67C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003E680
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003E684
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003E688
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E68C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E690
  c->lr=c->r[0]; // 8003E694
  c->r[1]=c->r[1]+0x00000010u; // 8003E698
  return; // 8003E69C
}

// fn_8003E6A0
void f_8003E6A0(Ctx* __restrict c) {
  trace_call(0x8003E6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E6A0
  c->r[0]=c->lr; // 8003E6A4
  cmps(c,0,(int32_t)c->r[4],0); // 8003E6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E6AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003E6B0
  c->r[30]=c->r[3]|c->r[3]; // 8003E6B4
  c->r[31]=c->r[4]|c->r[4]; // 8003E6B8
  if (crb(c,2)) { goto L_8003E710; } // 8003E6BC
  c->r[3]=c->r[31]|c->r[31]; // 8003E6C0
  c->lr=0x8003E6C8u; f_80244520(c); // 8003E6C4
  c->r[7]=c->r[3]|c->r[3]; // 8003E6C8
  c->r[9]=c->r[31]|c->r[31]; // 8003E6CC
  c->r[3]=0u+0x00000138u; // 8003E6D0
  c->r[4]=c->r[13]+0xFFFF8D73u; // 8003E6D4
  c->r[5]=0u+0x00000000u; // 8003E6D8
  c->r[6]=0u+0x00002001u; // 8003E6DC
  c->r[8]=0u+0x00000000u; // 8003E6E0
  c->lr=0x8003E6E8u; f_80242DF0(c); // 8003E6E4
  c->r[4]=c->r[3]|c->r[3]; // 8003E6E8
  c->r[3]=0u+0x00000138u; // 8003E6EC
  c->r[5]=c->r[13]+0xFFFF8D78u; // 8003E6F0
  c->r[6]=0u+0x00000000u; // 8003E6F4
  c->r[7]=0u+0x00001001u; // 8003E6F8
  c->lr=0x8003E700u; f_80244DB0(c); // 8003E6FC
  cmps(c,0,(int32_t)c->r[3],0); // 8003E700
  if (crb(c,2)) { goto L_8003E730; } // 8003E704
  c->lr=0x8003E70Cu; f_8003E62C(c); // 8003E708
  goto L_8003E730; // 8003E70C
L_8003E710:;
  c->r[3]=0u+0x00000138u; // 8003E710
  c->r[4]=c->r[13]+0xFFFF8D7Du; // 8003E714
  c->r[5]=0u+0x00000000u; // 8003E718
  c->r[6]=0u+0x00001001u; // 8003E71C
  c->lr=0x8003E724u; f_80244D20(c); // 8003E720
  cmps(c,0,(int32_t)c->r[3],0); // 8003E724
  if (crb(c,2)) { goto L_8003E730; } // 8003E728
  c->lr=0x8003E730u; f_8003E62C(c); // 8003E72C
L_8003E730:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003E730
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003E734
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003E738
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E73C
  c->lr=c->r[0]; // 8003E740
  c->r[1]=c->r[1]+0x00000010u; // 8003E744
  return; // 8003E748
}

// fn_8003E74C
void f_8003E74C(Ctx* __restrict c) {
  trace_call(0x8003E74Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E74C
  c->r[0]=c->lr; // 8003E750
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003E754
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003E758
  c->r[29]=c->r[3]|c->r[3]; // 8003E75C
  c->r[30]=c->r[4]|c->r[4]; // 8003E760
  c->lr=0x8003E768u; f_8003E1E4(c); // 8003E764
  c->r[31]=c->r[3]|c->r[3]; // 8003E768
  c->r[3]=c->r[30]|c->r[30]; // 8003E76C
  c->r[4]=0u+0x00000000u; // 8003E770
  c->lr=0x8003E778u; f_8030BE30(c); // 8003E774
  W32(c->r[29]+0x00000108u,c->r[3]); // 8003E778
  c->r[3]=c->r[30]|c->r[30]; // 8003E77C
  c->lr=0x8003E784u; f_8030BD1C(c); // 8003E780
  W32(c->r[29]+0x0000010Cu,c->r[3]); // 8003E784
  c->r[3]=c->r[30]|c->r[30]; // 8003E788
  c->lr=0x8003E790u; f_8030BD1C(c); // 8003E78C
  W8(c->r[29]+0x00000114u,c->r[3]); // 8003E790
  c->r[3]=c->r[30]|c->r[30]; // 8003E794
  c->lr=0x8003E79Cu; f_8030BD1C(c); // 8003E798
  W32(c->r[29]+0x00000118u,c->r[3]); // 8003E79C
  c->r[3]=c->r[30]|c->r[30]; // 8003E7A0
  c->lr=0x8003E7A8u; f_8030C0A0(c); // 8003E7A4
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[1]);} // 8003E7A8
  c->r[3]=c->r[30]|c->r[30]; // 8003E7AC
  c->lr=0x8003E7B4u; f_8030BD1C(c); // 8003E7B0
  W8(c->r[29]+0x00000120u,c->r[3]); // 8003E7B4
  c->r[3]=c->r[30]|c->r[30]; // 8003E7B8
  c->lr=0x8003E7C0u; f_8030BD1C(c); // 8003E7BC
  W8(c->r[29]+0x00000121u,c->r[3]); // 8003E7C0
  c->r[3]=c->r[30]|c->r[30]; // 8003E7C4
  c->lr=0x8003E7CCu; f_8030BD1C(c); // 8003E7C8
  W8(c->r[29]+0x00000122u,c->r[3]); // 8003E7CC
  c->r[3]=c->r[30]|c->r[30]; // 8003E7D0
  c->lr=0x8003E7D8u; f_8030BD1C(c); // 8003E7D4
  W8(c->r[29]+0x00000123u,c->r[3]); // 8003E7D8
  c->r[3]=c->r[30]|c->r[30]; // 8003E7DC
  c->lr=0x8003E7E4u; f_8030BD1C(c); // 8003E7E0
  W8(c->r[29]+0x00000124u,c->r[3]); // 8003E7E4
  c->r[3]=c->r[30]|c->r[30]; // 8003E7E8
  c->lr=0x8003E7F0u; f_8030BD1C(c); // 8003E7EC
  W8(c->r[29]+0x00000125u,c->r[3]); // 8003E7F0
  c->r[3]=c->r[30]|c->r[30]; // 8003E7F4
  c->lr=0x8003E7FCu; f_8030BD1C(c); // 8003E7F8
  W8(c->r[29]+0x00000126u,c->r[3]); // 8003E7FC
  c->r[3]=c->r[30]|c->r[30]; // 8003E800
  c->lr=0x8003E808u; f_8030BD1C(c); // 8003E804
  W8(c->r[29]+0x00000127u,c->r[3]); // 8003E808
  c->r[3]=c->r[30]|c->r[30]; // 8003E80C
  c->lr=0x8003E814u; f_8030C0A0(c); // 8003E810
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[1]);} // 8003E814
  c->r[3]=c->r[30]|c->r[30]; // 8003E818
  c->lr=0x8003E820u; f_8030C0A0(c); // 8003E81C
  {uint32_t ea=c->r[29]+0x0000012Cu; WF32(ea,c->f[1]);} // 8003E820
  c->r[3]=c->r[30]|c->r[30]; // 8003E824
  c->lr=0x8003E82Cu; f_8030C0A0(c); // 8003E828
  {uint32_t ea=c->r[29]+0x00000130u; WF32(ea,c->f[1]);} // 8003E82C
  c->r[3]=c->r[30]|c->r[30]; // 8003E830
  c->lr=0x8003E838u; f_8030C0A0(c); // 8003E834
  {uint32_t ea=c->r[29]+0x00000134u; WF32(ea,c->f[1]);} // 8003E838
  c->r[3]=c->r[31]|c->r[31]; // 8003E83C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003E840
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003E844
  c->lr=c->r[0]; // 8003E848
  c->r[1]=c->r[1]+0x00000020u; // 8003E84C
  return; // 8003E850
}

// fn_8003E854
void f_8003E854(Ctx* __restrict c) {
  trace_call(0x8003E854u);
  f_80038EC8(c); return; // 8003E854
}

// fn_8003E858
void f_8003E858(Ctx* __restrict c) {
  trace_call(0x8003E858u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E858
  c->r[0]=c->lr; // 8003E85C
  cmps(c,0,(int32_t)c->r[6],0); // 8003E860
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E864
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003E868
  c->r[30]=c->r[3]|c->r[3]; // 8003E86C
  c->r[31]=c->r[5]|c->r[5]; // 8003E870
  if (!crb(c,2)) { goto L_8003E894; } // 8003E874
  c->lr=0x8003E87Cu; f_8003AF18(c); // 8003E878
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 8003E87C
  cmps(c,0,(int32_t)c->r[0],7); // 8003E880
  if (!crb(c,0)) { goto L_8003E894; } // 8003E884
  c->r[4]=c->r[31]|c->r[31]; // 8003E888
  c->r[3]=c->r[30]+0x00000108u; // 8003E88C
  c->lr=0x8003E894u; f_8003A994(c); // 8003E890
L_8003E894:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003E894
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E898
  c->lr=c->r[0]; // 8003E89C
  c->r[1]=c->r[1]+0x00000010u; // 8003E8A0
  return; // 8003E8A4
}

// fn_8003E8A8
void f_8003E8A8(Ctx* __restrict c) {
  trace_call(0x8003E8A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E8A8
  c->r[0]=c->lr; // 8003E8AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003E8B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003E8B4
  c->r[31]=c->r[3]|c->r[3]; // 8003E8B8
  c->lr=0x8003E8C0u; f_8003E2B4(c); // 8003E8BC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E8C0
  c->r[0]=0u+0x000000FFu; // 8003E8C4
  c->r[4]=0u+0x00000000u; // 8003E8C8
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003E8CC
  c->r[3]=0u+0x00000001u; // 8003E8D0
  W32(c->r[31]+0x00000108u,c->r[4]); // 8003E8D4
  W32(c->r[31]+0x00000110u,c->r[4]); // 8003E8D8
  W32(c->r[31]+0x0000010Cu,c->r[4]); // 8003E8DC
  W8(c->r[31]+0x00000114u,c->r[4]); // 8003E8E0
  W32(c->r[31]+0x00000118u,c->r[3]); // 8003E8E4
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[1]);} // 8003E8E8
  W8(c->r[31]+0x00000120u,c->r[0]); // 8003E8EC
  W8(c->r[31]+0x00000121u,c->r[0]); // 8003E8F0
  W8(c->r[31]+0x00000122u,c->r[0]); // 8003E8F4
  W8(c->r[31]+0x00000123u,c->r[0]); // 8003E8F8
  W8(c->r[31]+0x00000124u,c->r[0]); // 8003E8FC
  W8(c->r[31]+0x00000125u,c->r[0]); // 8003E900
  W8(c->r[31]+0x00000126u,c->r[0]); // 8003E904
  W8(c->r[31]+0x00000127u,c->r[0]); // 8003E908
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 8003E90C
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[0]);} // 8003E910
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[0]);} // 8003E914
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[0]);} // 8003E918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003E91C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003E920
  c->lr=c->r[0]; // 8003E924
  c->r[1]=c->r[1]+0x00000010u; // 8003E928
  return; // 8003E92C
}

// fn_8003E930
void f_8003E930(Ctx* __restrict c) {
  trace_call(0x8003E930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003E930
  c->r[0]=c->lr; // 8003E934
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003E938
  c->r[11]=c->r[1]+0x00000020u; // 8003E93C
  c->lr=0x8003E944u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003E940
  c->r[29]=c->r[3]|c->r[3]; // 8003E944
  c->r[30]=c->r[4]|c->r[4]; // 8003E948
  c->r[31]=c->r[5]|c->r[5]; // 8003E94C
  c->r[6]=0u+0x00000000u; // 8003E950
  c->lr=0x8003E958u; f_8003E31C(c); // 8003E954
  cmps(c,0,(int32_t)c->r[31],0); // 8003E958
  if (crb(c,2)) { goto L_8003E964; } // 8003E95C
  goto L_8003E968; // 8003E960
L_8003E964:;
  c->r[31]=c->r[29]|c->r[29]; // 8003E964
L_8003E968:;
  c->r[3]=c->r[31]+0x00000108u; // 8003E968
  c->r[4]=c->r[30]+0x00000108u; // 8003E96C
  c->lr=0x8003E974u; f_8003AB48(c); // 8003E970
  c->r[0]=R8(c->r[30]+0x00000114u); // 8003E974
  c->r[11]=c->r[1]+0x00000020u; // 8003E978
  W8(c->r[31]+0x00000114u,c->r[0]); // 8003E97C
  c->r[0]=R32(c->r[30]+0x00000118u); // 8003E980
  W32(c->r[31]+0x00000118u,c->r[0]); // 8003E984
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E988
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[0]);} // 8003E98C
  c->r[0]=R8(c->r[30]+0x00000120u); // 8003E990
  W8(c->r[31]+0x00000120u,c->r[0]); // 8003E994
  c->r[0]=R8(c->r[30]+0x00000121u); // 8003E998
  W8(c->r[31]+0x00000121u,c->r[0]); // 8003E99C
  c->r[0]=R8(c->r[30]+0x00000122u); // 8003E9A0
  W8(c->r[31]+0x00000122u,c->r[0]); // 8003E9A4
  c->r[0]=R8(c->r[30]+0x00000123u); // 8003E9A8
  W8(c->r[31]+0x00000123u,c->r[0]); // 8003E9AC
  c->r[0]=R8(c->r[30]+0x00000124u); // 8003E9B0
  W8(c->r[31]+0x00000124u,c->r[0]); // 8003E9B4
  c->r[0]=R8(c->r[30]+0x00000125u); // 8003E9B8
  W8(c->r[31]+0x00000125u,c->r[0]); // 8003E9BC
  c->r[0]=R8(c->r[30]+0x00000126u); // 8003E9C0
  W8(c->r[31]+0x00000126u,c->r[0]); // 8003E9C4
  c->r[0]=R8(c->r[30]+0x00000127u); // 8003E9C8
  W8(c->r[31]+0x00000127u,c->r[0]); // 8003E9CC
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E9D0
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 8003E9D4
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E9D8
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[0]);} // 8003E9DC
  {uint32_t ea=c->r[30]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E9E0
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[0]);} // 8003E9E4
  {uint32_t ea=c->r[30]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003E9E8
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[0]);} // 8003E9EC
  c->lr=0x8003E9F4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003E9F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003E9F4
  c->lr=c->r[0]; // 8003E9F8
  c->r[1]=c->r[1]+0x00000020u; // 8003E9FC
  return; // 8003EA00
}

// fn_8003EA04
void f_8003EA04(Ctx* __restrict c) {
  trace_call(0x8003EA04u);
  c->r[0]=c->r[4]+0xC2C20000u; // 8003EA04
  cmpu(c,0,c->r[0],0x0000B99Au); // 8003EA08
  if (!crb(c,2)) { goto L_8003EA18; } // 8003EA0C
  c->r[3]=0u+0x00000001u; // 8003EA10
  return; // 8003EA14
L_8003EA18:;
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003EA18
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003EA1C
  if (!crb(c,2)) { goto L_8003EA2C; } // 8003EA20
  c->r[3]=0u+0x00000001u; // 8003EA24
  return; // 8003EA28
L_8003EA2C:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003EA2C
  cmpu(c,0,c->r[0],0x00000802u); // 8003EA30
  if (!crb(c,2)) { goto L_8003EA40; } // 8003EA34
  c->r[3]=0u+0x00000001u; // 8003EA38
  return; // 8003EA3C
L_8003EA40:;
  c->r[3]=0u+0xD12F0000u; // 8003EA40
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003EA44
  c->r[0]=c->r[4]-c->r[0]; // 8003EA48
  c->r[0]=cntlz(c->r[0]); // 8003EA4C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003EA50
  return; // 8003EA54
}

// fn_8003EA58
void f_8003EA58(Ctx* __restrict c) {
  trace_call(0x8003EA58u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EA58
  c->r[0]=c->lr; // 8003EA5C
  W32(c->r[1]+0x00000084u,c->r[0]); // 8003EA60
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8003EA64
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8003EA68
  c->r[11]=c->r[1]+0x00000070u; // 8003EA6C
  c->lr=0x8003EA74u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003EA70
  c->f[31]=c->f[1]; // 8003EA74
  c->r[0]=0u+0x43300000u; // 8003EA78
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003EA7C
  c->r[29]=c->r[3]|c->r[3]; // 8003EA80
  c->r[31]=c->r[4]|c->r[4]; // 8003EA84
  c->r[30]=c->r[5]|c->r[5]; // 8003EA88
  W32(c->r[1]+0x00000010u,c->r[0]); // 8003EA8C
  c->lr=0x8003EA94u; f_8003E404(c); // 8003EA90
  c->r[3]=R32(c->r[31]+0x00000118u); // 8003EA94
  c->r[0]=R32(c->r[30]+0x00000118u); // 8003EA98
  c->r[3]=c->r[3]^0x80000000u; // 8003EA9C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003EAA0
  c->r[0]=c->r[0]^0x80000000u; // 8003EAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EAA8
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[4]=RF64(ea);} // 8003EAAC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 8003EAB0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EAB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EAB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8003EABC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8003EAC0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8003EAC4
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 8003EAC8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EACC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EAD0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EAD4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EAD8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 8003EADC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8003EAE0
  W32(c->r[29]+0x00000118u,c->r[0]); // 8003EAE4
  {uint32_t ea=c->r[31]+0x0000011Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8003EAE8
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003EAEC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EAF0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EAF4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EAF8
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[2]);} // 8003EAFC
  c->r[3]=R8(c->r[31]+0x00000120u); // 8003EB00
  c->r[0]=R8(c->r[30]+0x00000120u); // 8003EB04
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EB0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003EB10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EB14
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003EB18
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003EB1C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EB20
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EB24
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EB28
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EB2C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 8003EB30
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003EB34
  W8(c->r[29]+0x00000120u,c->r[0]); // 8003EB38
  c->r[3]=R8(c->r[31]+0x00000121u); // 8003EB3C
  c->r[0]=R8(c->r[30]+0x00000121u); // 8003EB40
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EB48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003EB4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EB50
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003EB54
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003EB58
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EB5C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EB60
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EB64
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EB68
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 8003EB6C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8003EB70
  W8(c->r[29]+0x00000121u,c->r[0]); // 8003EB74
  c->r[3]=R8(c->r[31]+0x00000122u); // 8003EB78
  c->r[0]=R8(c->r[30]+0x00000122u); // 8003EB7C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EB84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003EB88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EB8C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003EB90
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003EB94
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EB98
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EB9C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EBA0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EBA4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8003EBA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003EBAC
  W8(c->r[29]+0x00000122u,c->r[0]); // 8003EBB0
  c->r[3]=R8(c->r[31]+0x00000123u); // 8003EBB4
  c->r[0]=R8(c->r[30]+0x00000123u); // 8003EBB8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EBBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EBC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003EBC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EBC8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003EBCC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003EBD0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EBD4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EBD8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EBDC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EBE0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 8003EBE4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8003EBE8
  W8(c->r[29]+0x00000123u,c->r[0]); // 8003EBEC
  c->r[3]=R8(c->r[31]+0x00000124u); // 8003EBF0
  c->r[0]=R8(c->r[30]+0x00000124u); // 8003EBF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EBF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EBFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003EC00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EC04
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003EC08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003EC0C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EC10
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EC14
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EC18
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EC1C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 8003EC20
  c->r[0]=R32(c->r[1]+0x00000044u); // 8003EC24
  W8(c->r[29]+0x00000124u,c->r[0]); // 8003EC28
  c->r[3]=R8(c->r[31]+0x00000125u); // 8003EC2C
  c->r[0]=R8(c->r[30]+0x00000125u); // 8003EC30
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EC38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003EC3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EC40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003EC44
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003EC48
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EC4C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EC50
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EC54
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EC58
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8003EC5C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8003EC60
  W8(c->r[29]+0x00000125u,c->r[0]); // 8003EC64
  c->r[3]=R8(c->r[31]+0x00000126u); // 8003EC68
  c->r[0]=R8(c->r[30]+0x00000126u); // 8003EC6C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003EC70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EC74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003EC78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003EC7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003EC80
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8003EC84
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8003EC88
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8003EC8C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8003EC90
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8003EC94
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 8003EC98
  c->r[0]=R32(c->r[1]+0x00000054u); // 8003EC9C
  W8(c->r[29]+0x00000126u,c->r[0]); // 8003ECA0
  c->r[3]=R8(c->r[31]+0x00000127u); // 8003ECA4
  c->r[0]=R8(c->r[30]+0x00000127u); // 8003ECA8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8003ECAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003ECB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8003ECB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8003ECB8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8003ECBC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8003ECC0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 8003ECC4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003ECC8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8003ECCC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8003ECD0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 8003ECD4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8003ECD8
  W8(c->r[29]+0x00000127u,c->r[0]); // 8003ECDC
  {uint32_t ea=c->r[31]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003ECE0
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ECE4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8003ECE8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003ECEC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8003ECF0
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[0]);} // 8003ECF4
  {uint32_t ea=c->r[31]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003ECF8
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ECFC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8003ED00
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003ED04
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8003ED08
  {uint32_t ea=c->r[29]+0x0000012Cu; WF32(ea,c->f[0]);} // 8003ED0C
  {uint32_t ea=c->r[31]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003ED10
  {uint32_t ea=c->r[30]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ED14
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8003ED18
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003ED1C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8003ED20
  {uint32_t ea=c->r[29]+0x00000130u; WF32(ea,c->f[0]);} // 8003ED24
  {uint32_t ea=c->r[31]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003ED28
  {uint32_t ea=c->r[30]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003ED2C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8003ED30
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8003ED34
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8003ED38
  {uint32_t ea=c->r[29]+0x00000134u; WF32(ea,c->f[0]);} // 8003ED3C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8003ED40
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8003ED44
  c->r[11]=c->r[1]+0x00000070u; // 8003ED48
  c->lr=0x8003ED50u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003ED4C
  c->r[0]=R32(c->r[1]+0x00000084u); // 8003ED50
  c->lr=c->r[0]; // 8003ED54
  c->r[1]=c->r[1]+0x00000080u; // 8003ED58
  return; // 8003ED5C
}

// fn_8003ED60
void f_8003ED60(Ctx* __restrict c) {
  trace_call(0x8003ED60u);
  c->r[3]=0u+0x00000138u; // 8003ED60
  return; // 8003ED64
}

// fn_8003ED68
void f_8003ED68(Ctx* __restrict c) {
  trace_call(0x8003ED68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003ED68
  c->r[0]=c->lr; // 8003ED6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003ED70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003ED74
  c->r[31]=c->r[3]|c->r[3]; // 8003ED78
  c->lr=0x8003ED80u; f_8003E62C(c); // 8003ED7C
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003ED80
  c->r[3]=0u+0x80420000u; // 8003ED84
  c->r[3]=c->r[3]+0x0000117Cu; // 8003ED88
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003ED8C
  c->r[0]=c->r[0]|0x80000000u; // 8003ED90
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003ED94
  c->r[3]=c->r[31]|c->r[31]; // 8003ED98
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003ED9C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003EDA0
  c->ctr=c->r[12]; // 8003EDA4
  if (true) { c->lr=0x8003EDACu; dispatch(c,c->ctr); } // 8003EDA8
  c->r[3]=c->r[31]|c->r[31]; // 8003EDAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003EDB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003EDB4
  c->lr=c->r[0]; // 8003EDB8
  c->r[1]=c->r[1]+0x00000010u; // 8003EDBC
  return; // 8003EDC0
}

// fn_8003EDC4
void f_8003EDC4(Ctx* __restrict c) {
  trace_call(0x8003EDC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EDC4
  c->r[0]=c->lr; // 8003EDC8
  cmps(c,0,(int32_t)c->r[3],0); // 8003EDCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EDD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003EDD4
  c->r[30]=c->r[3]|c->r[3]; // 8003EDD8
  c->r[31]=c->r[4]|c->r[4]; // 8003EDDC
  if (crb(c,2)) { goto L_8003EDFC; } // 8003EDE0
  c->r[4]=0u+0x00000000u; // 8003EDE4
  c->lr=0x8003EDECu; f_8003E52C(c); // 8003EDE8
  cmps(c,0,(int32_t)c->r[31],0); // 8003EDEC
  if (!crb(c,1)) { goto L_8003EDFC; } // 8003EDF0
  c->r[3]=c->r[30]|c->r[30]; // 8003EDF4
  c->lr=0x8003EDFCu; f_80244DC0(c); // 8003EDF8
L_8003EDFC:;
  c->r[3]=c->r[30]|c->r[30]; // 8003EDFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003EE00
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003EE04
  c->lr=c->r[0]; // 8003EE08
  c->r[1]=c->r[1]+0x00000010u; // 8003EE0C
  return; // 8003EE10
}

// fn_8003EE14
void f_8003EE14(Ctx* __restrict c) {
  trace_call(0x8003EE14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EE14
  c->r[0]=c->lr; // 8003EE18
  c->r[3]=0u+0x00000138u; // 8003EE1C
  c->r[4]=c->r[13]+0xFFFF8D82u; // 8003EE20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EE24
  c->r[5]=0u+0x00000000u; // 8003EE28
  c->r[6]=0u+0x00001001u; // 8003EE2C
  c->lr=0x8003EE34u; f_80244D20(c); // 8003EE30
  cmps(c,0,(int32_t)c->r[3],0); // 8003EE34
  if (crb(c,2)) { goto L_8003EE40; } // 8003EE38
  c->lr=0x8003EE40u; f_8003ED68(c); // 8003EE3C
L_8003EE40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003EE40
  c->lr=c->r[0]; // 8003EE44
  c->r[1]=c->r[1]+0x00000010u; // 8003EE48
  return; // 8003EE4C
}

// fn_8003EE50
void f_8003EE50(Ctx* __restrict c) {
  trace_call(0x8003EE50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EE50
  c->r[0]=c->lr; // 8003EE54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EE58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003EE5C
  c->r[31]=c->r[3]|c->r[3]; // 8003EE60
  c->lr=0x8003EE68u; f_80244520(c); // 8003EE64
  c->r[7]=c->r[3]|c->r[3]; // 8003EE68
  c->r[9]=c->r[31]|c->r[31]; // 8003EE6C
  c->r[3]=0u+0x00000138u; // 8003EE70
  c->r[4]=c->r[13]+0xFFFF8D87u; // 8003EE74
  c->r[5]=0u+0x00000000u; // 8003EE78
  c->r[6]=0u+0x00002001u; // 8003EE7C
  c->r[8]=0u+0x00000000u; // 8003EE80
  c->lr=0x8003EE88u; f_80242DF0(c); // 8003EE84
  c->r[4]=c->r[3]|c->r[3]; // 8003EE88
  c->r[3]=0u+0x00000138u; // 8003EE8C
  c->r[5]=c->r[13]+0xFFFF8D8Cu; // 8003EE90
  c->r[6]=0u+0x00000000u; // 8003EE94
  c->r[7]=0u+0x00001001u; // 8003EE98
  c->lr=0x8003EEA0u; f_80244DB0(c); // 8003EE9C
  cmps(c,0,(int32_t)c->r[3],0); // 8003EEA0
  if (crb(c,2)) { goto L_8003EEAC; } // 8003EEA4
  c->lr=0x8003EEACu; f_8003ED68(c); // 8003EEA8
L_8003EEAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003EEAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003EEB0
  c->lr=c->r[0]; // 8003EEB4
  c->r[1]=c->r[1]+0x00000010u; // 8003EEB8
  return; // 8003EEBC
}

// fn_8003EEC0
void f_8003EEC0(Ctx* __restrict c) {
  trace_call(0x8003EEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EEC0
  c->r[0]=c->lr; // 8003EEC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EEC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003EECC
  c->r[31]=c->r[3]|c->r[3]; // 8003EED0
  c->lr=0x8003EED8u; f_8003E0C4(c); // 8003EED4
  c->r[8]=0u+0x80420000u; // 8003EED8
  c->r[6]=0u+0x80410000u; // 8003EEDC
  c->r[7]=0u+0x00000000u; // 8003EEE0
  c->r[5]=0u+0x1DD80000u; // 8003EEE4
  c->r[4]=0u+0xDC8E0000u; // 8003EEE8
  c->r[3]=0u+0x79250000u; // 8003EEEC
  c->r[0]=c->r[3]+0xFFFF8EC9u; // 8003EEF0
  c->r[8]=c->r[8]+0x00001140u; // 8003EEF4
  c->r[6]=c->r[6]+0xFFFFBAA5u; // 8003EEF8
  c->r[5]=c->r[5]+0xFFFFEA56u; // 8003EEFC
  c->r[4]=c->r[4]+0x00004B2Eu; // 8003EF00
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003EF04
  c->r[3]=c->r[31]|c->r[31]; // 8003EF08
  W32(c->r[31]+0x00000154u,c->r[7]); // 8003EF0C
  W32(c->r[31]+0x00000000u,c->r[6]); // 8003EF10
  W32(c->r[31]+0x00000008u,c->r[7]); // 8003EF14
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003EF18
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003EF1C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003EF20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003EF24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003EF28
  c->lr=c->r[0]; // 8003EF2C
  c->r[1]=c->r[1]+0x00000010u; // 8003EF30
  return; // 8003EF34
}

// fn_8003EF38
void f_8003EF38(Ctx* __restrict c) {
  trace_call(0x8003EF38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EF38
  c->r[0]=c->lr; // 8003EF3C
  cmps(c,0,(int32_t)c->r[4],0); // 8003EF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003EF44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003EF48
  c->r[30]=c->r[3]|c->r[3]; // 8003EF4C
  c->r[31]=c->r[4]|c->r[4]; // 8003EF50
  if (crb(c,2)) { goto L_8003EFA8; } // 8003EF54
  c->r[3]=c->r[31]|c->r[31]; // 8003EF58
  c->lr=0x8003EF60u; f_80244520(c); // 8003EF5C
  c->r[7]=c->r[3]|c->r[3]; // 8003EF60
  c->r[9]=c->r[31]|c->r[31]; // 8003EF64
  c->r[3]=0u+0x00000158u; // 8003EF68
  c->r[4]=c->r[13]+0xFFFF8D91u; // 8003EF6C
  c->r[5]=0u+0x00000000u; // 8003EF70
  c->r[6]=0u+0x00002001u; // 8003EF74
  c->r[8]=0u+0x00000000u; // 8003EF78
  c->lr=0x8003EF80u; f_80242DF0(c); // 8003EF7C
  c->r[4]=c->r[3]|c->r[3]; // 8003EF80
  c->r[3]=0u+0x00000158u; // 8003EF84
  c->r[5]=c->r[13]+0xFFFF8D96u; // 8003EF88
  c->r[6]=0u+0x00000000u; // 8003EF8C
  c->r[7]=0u+0x00001001u; // 8003EF90
  c->lr=0x8003EF98u; f_80244DB0(c); // 8003EF94
  cmps(c,0,(int32_t)c->r[3],0); // 8003EF98
  if (crb(c,2)) { goto L_8003EFC8; } // 8003EF9C
  c->lr=0x8003EFA4u; f_8003EEC0(c); // 8003EFA0
  goto L_8003EFC8; // 8003EFA4
L_8003EFA8:;
  c->r[3]=0u+0x00000158u; // 8003EFA8
  c->r[4]=c->r[13]+0xFFFF8D9Bu; // 8003EFAC
  c->r[5]=0u+0x00000000u; // 8003EFB0
  c->r[6]=0u+0x00001001u; // 8003EFB4
  c->lr=0x8003EFBCu; f_80244D20(c); // 8003EFB8
  cmps(c,0,(int32_t)c->r[3],0); // 8003EFBC
  if (crb(c,2)) { goto L_8003EFC8; } // 8003EFC0
  c->lr=0x8003EFC8u; f_8003EEC0(c); // 8003EFC4
L_8003EFC8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003EFC8
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003EFCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003EFD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003EFD4
  c->lr=c->r[0]; // 8003EFD8
  c->r[1]=c->r[1]+0x00000010u; // 8003EFDC
  return; // 8003EFE0
}

// fn_8003EFE4
void f_8003EFE4(Ctx* __restrict c) {
  trace_call(0x8003EFE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003EFE4
  c->r[0]=c->lr; // 8003EFE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003EFEC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003EFF0
  c->r[28]=c->r[3]|c->r[3]; // 8003EFF4
  c->r[29]=c->r[4]|c->r[4]; // 8003EFF8
  c->lr=0x8003F000u; f_8003E1E4(c); // 8003EFFC
  c->r[31]=0u+0x00000000u; // 8003F000
  W32(c->r[28]+0x00000108u,c->r[31]); // 8003F004
  c->r[30]=c->r[3]|c->r[3]; // 8003F008
  c->r[3]=c->r[29]|c->r[29]; // 8003F00C
  c->lr=0x8003F014u; f_8030BD1C(c); // 8003F010
  c->r[0]=R32(c->r[28]+0x00000108u); // 8003F014
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 8003F018
  W32(c->r[28]+0x00000108u,c->r[0]); // 8003F01C
  c->r[3]=c->r[29]|c->r[29]; // 8003F020
  c->lr=0x8003F028u; f_8030BD1C(c); // 8003F024
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 8003F028
  c->r[3]=c->r[29]|c->r[29]; // 8003F02C
  c->r[4]=0u+0x00000000u; // 8003F030
  c->lr=0x8003F038u; f_8030BE30(c); // 8003F034
  W32(c->r[28]+0x00000110u,c->r[3]); // 8003F038
  c->r[3]=c->r[29]|c->r[29]; // 8003F03C
  c->r[4]=0u+0x00000000u; // 8003F040
  c->lr=0x8003F048u; f_8030BE30(c); // 8003F044
  W32(c->r[28]+0x00000114u,c->r[3]); // 8003F048
  c->r[3]=c->r[29]|c->r[29]; // 8003F04C
  c->r[4]=0u+0x00000000u; // 8003F050
  c->lr=0x8003F058u; f_8030BE30(c); // 8003F054
  W32(c->r[28]+0x00000118u,c->r[3]); // 8003F058
  c->r[3]=c->r[29]|c->r[29]; // 8003F05C
  W32(c->r[28]+0x0000011Cu,c->r[31]); // 8003F060
  c->lr=0x8003F068u; f_8030BD1C(c); // 8003F064
  W32(c->r[28]+0x00000120u,c->r[3]); // 8003F068
  c->r[3]=c->r[29]|c->r[29]; // 8003F06C
  c->r[4]=0u+0x00000000u; // 8003F070
  c->lr=0x8003F078u; f_8030BE30(c); // 8003F074
  W32(c->r[28]+0x00000124u,c->r[3]); // 8003F078
  c->r[3]=c->r[29]|c->r[29]; // 8003F07C
  W32(c->r[28]+0x00000128u,c->r[31]); // 8003F080
  c->lr=0x8003F088u; f_8030BD1C(c); // 8003F084
  W32(c->r[28]+0x0000012Cu,c->r[3]); // 8003F088
  c->r[3]=c->r[29]|c->r[29]; // 8003F08C
  c->r[4]=0u+0x00000000u; // 8003F090
  c->lr=0x8003F098u; f_8030BE30(c); // 8003F094
  W32(c->r[28]+0x00000130u,c->r[3]); // 8003F098
  c->r[3]=c->r[29]|c->r[29]; // 8003F09C
  W32(c->r[28]+0x00000134u,c->r[31]); // 8003F0A0
  c->lr=0x8003F0A8u; f_8030BD1C(c); // 8003F0A4
  W32(c->r[28]+0x00000138u,c->r[3]); // 8003F0A8
  c->r[3]=c->r[29]|c->r[29]; // 8003F0AC
  c->r[4]=0u+0x00000000u; // 8003F0B0
  c->lr=0x8003F0B8u; f_8030BE30(c); // 8003F0B4
  W32(c->r[28]+0x0000013Cu,c->r[3]); // 8003F0B8
  c->r[3]=c->r[29]|c->r[29]; // 8003F0BC
  W32(c->r[28]+0x00000140u,c->r[31]); // 8003F0C0
  c->lr=0x8003F0C8u; f_8030BD1C(c); // 8003F0C4
  W32(c->r[28]+0x00000144u,c->r[3]); // 8003F0C8
  c->r[3]=c->r[29]|c->r[29]; // 8003F0CC
  c->r[4]=0u+0x00000000u; // 8003F0D0
  c->lr=0x8003F0D8u; f_8030BE30(c); // 8003F0D4
  W32(c->r[28]+0x00000148u,c->r[3]); // 8003F0D8
  c->r[3]=c->r[29]|c->r[29]; // 8003F0DC
  W32(c->r[28]+0x0000014Cu,c->r[31]); // 8003F0E0
  c->lr=0x8003F0E8u; f_8030BD1C(c); // 8003F0E4
  W32(c->r[28]+0x00000150u,c->r[3]); // 8003F0E8
  c->r[3]=c->r[30]|c->r[30]; // 8003F0EC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003F0F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003F0F4
  c->lr=c->r[0]; // 8003F0F8
  c->r[1]=c->r[1]+0x00000020u; // 8003F0FC
  return; // 8003F100
}

// fn_8003F104
void f_8003F104(Ctx* __restrict c) {
  trace_call(0x8003F104u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F104
  c->r[0]=c->lr; // 8003F108
  W32(c->r[1]+0x00000034u,c->r[0]); // 8003F10C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003F110
  c->r[27]=c->r[3]|c->r[3]; // 8003F114
  c->r[28]=c->r[4]|c->r[4]; // 8003F118
  c->r[29]=c->r[5]|c->r[5]; // 8003F11C
  c->r[30]=c->r[6]|c->r[6]; // 8003F120
  c->r[7]=R32(c->r[3]+0x00000154u); // 8003F124
  cmps(c,0,(int32_t)c->r[7],0); // 8003F128
  if (!crb(c,0)) { goto L_8003F13C; } // 8003F12C
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8003F130
  W32(c->r[3]+0x00000154u,c->r[0]); // 8003F134
  goto L_8003F14C; // 8003F138
L_8003F13C:;
  c->r[0]=c->r[7]+0x00000001u; // 8003F13C
  W32(c->r[3]+0x00000154u,c->r[0]); // 8003F140
  cmps(c,0,(int32_t)c->r[0],1); // 8003F144
  if (crb(c,1)) { goto L_8003F4BC; } // 8003F148
L_8003F14C:;
  c->r[3]=c->r[27]|c->r[27]; // 8003F14C
  c->r[4]=c->r[28]|c->r[28]; // 8003F150
  c->r[5]=c->r[29]|c->r[29]; // 8003F154
  c->r[6]=c->r[30]|c->r[30]; // 8003F158
  c->lr=0x8003F160u; f_802B11C0(c); // 8003F15C
  c->r[4]=R32(c->r[27]+0x00000118u); // 8003F160
  cmps(c,0,(int32_t)c->r[4],0); // 8003F164
  if (crb(c,2)) { goto L_8003F20C; } // 8003F168
  c->r[0]=0u+0x00000001u; // 8003F16C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003F170
  c->r[6]=c->r[28]|c->r[28]; // 8003F174
  c->r[7]=c->r[29]|c->r[29]; // 8003F178
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8003F17C
  c->r[8]=c->r[30]|c->r[30]; // 8003F180
  c->r[9]=R32(c->r[27]+0x00000120u); // 8003F184
  c->r[5]=0u+0x00000001u; // 8003F188
  c->r[10]=0u+0x00000001u; // 8003F18C
  c->lr=0x8003F194u; f_80281A84(c); // 8003F190
  cmps(c,0,(int32_t)c->r[3],0); // 8003F194
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8003F198
  if (crb(c,2)) { goto L_8003F1A8; } // 8003F19C
  c->lr=0x8003F1A4u; f_80295B6C(c); // 8003F1A0
  goto L_8003F20C; // 8003F1A4
L_8003F1A8:;
  c->r[3]=R32(c->r[27]+0x00000120u); // 8003F1A8
  c->r[4]=c->r[30]|c->r[30]; // 8003F1AC
  c->r[5]=c->r[29]|c->r[29]; // 8003F1B0
  c->lr=0x8003F1B8u; f_802C0F98(c); // 8003F1B4
  c->r[31]=c->r[3]|c->r[3]; // 8003F1B8
  c->r[3]=0u+0x00000044u; // 8003F1BC
  c->r[4]=c->r[13]+0xFFFF8DA0u; // 8003F1C0
  c->r[5]=0u+0x00000000u; // 8003F1C4
  c->r[6]=0u+0x00001001u; // 8003F1C8
  c->lr=0x8003F1D0u; f_80244D20(c); // 8003F1CC
  cmps(c,0,(int32_t)c->r[3],0); // 8003F1D0
  if (crb(c,2)) { goto L_8003F1E8; } // 8003F1D4
  c->r[5]=R32(c->r[27]+0x00000118u); // 8003F1D8
  c->r[4]=c->r[31]|c->r[31]; // 8003F1DC
  c->r[6]=0u+0x00000001u; // 8003F1E0
  c->lr=0x8003F1E8u; f_8029316C(c); // 8003F1E4
L_8003F1E8:;
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8003F1E8
  c->r[4]=c->r[28]|c->r[28]; // 8003F1EC
  c->r[7]=R32(c->r[27]+0x00000120u); // 8003F1F0
  c->r[5]=c->r[29]|c->r[29]; // 8003F1F4
  c->r[6]=c->r[30]|c->r[30]; // 8003F1F8
  c->r[8]=0u+0x00000001u; // 8003F1FC
  c->r[9]=0u+0x00000000u; // 8003F200
  c->lr=0x8003F208u; f_8027FFF4(c); // 8003F204
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8003F208
L_8003F20C:;
  c->r[4]=R32(c->r[27]+0x00000124u); // 8003F20C
  cmps(c,0,(int32_t)c->r[4],0); // 8003F210
  if (crb(c,2)) { goto L_8003F2B8; } // 8003F214
  c->r[0]=0u+0x00000001u; // 8003F218
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003F21C
  c->r[6]=c->r[28]|c->r[28]; // 8003F220
  c->r[7]=c->r[29]|c->r[29]; // 8003F224
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8003F228
  c->r[8]=c->r[30]|c->r[30]; // 8003F22C
  c->r[9]=R32(c->r[27]+0x0000012Cu); // 8003F230
  c->r[5]=0u+0x00000001u; // 8003F234
  c->r[10]=0u+0x00000001u; // 8003F238
  c->lr=0x8003F240u; f_80281A84(c); // 8003F23C
  cmps(c,0,(int32_t)c->r[3],0); // 8003F240
  W32(c->r[27]+0x00000128u,c->r[3]); // 8003F244
  if (crb(c,2)) { goto L_8003F254; } // 8003F248
  c->lr=0x8003F250u; f_80295B6C(c); // 8003F24C
  goto L_8003F2B8; // 8003F250
L_8003F254:;
  c->r[3]=R32(c->r[27]+0x0000012Cu); // 8003F254
  c->r[4]=c->r[30]|c->r[30]; // 8003F258
  c->r[5]=c->r[29]|c->r[29]; // 8003F25C
  c->lr=0x8003F264u; f_802C0F98(c); // 8003F260
  c->r[31]=c->r[3]|c->r[3]; // 8003F264
  c->r[3]=0u+0x00000044u; // 8003F268
  c->r[4]=c->r[13]+0xFFFF8DA5u; // 8003F26C
  c->r[5]=0u+0x00000000u; // 8003F270
  c->r[6]=0u+0x00001001u; // 8003F274
  c->lr=0x8003F27Cu; f_80244D20(c); // 8003F278
  cmps(c,0,(int32_t)c->r[3],0); // 8003F27C
  if (crb(c,2)) { goto L_8003F294; } // 8003F280
  c->r[5]=R32(c->r[27]+0x00000124u); // 8003F284
  c->r[4]=c->r[31]|c->r[31]; // 8003F288
  c->r[6]=0u+0x00000001u; // 8003F28C
  c->lr=0x8003F294u; f_8029316C(c); // 8003F290
L_8003F294:;
  W32(c->r[27]+0x00000128u,c->r[3]); // 8003F294
  c->r[4]=c->r[28]|c->r[28]; // 8003F298
  c->r[7]=R32(c->r[27]+0x0000012Cu); // 8003F29C
  c->r[5]=c->r[29]|c->r[29]; // 8003F2A0
  c->r[6]=c->r[30]|c->r[30]; // 8003F2A4
  c->r[8]=0u+0x00000001u; // 8003F2A8
  c->r[9]=0u+0x00000000u; // 8003F2AC
  c->lr=0x8003F2B4u; f_8027FFF4(c); // 8003F2B0
  W32(c->r[27]+0x00000128u,c->r[3]); // 8003F2B4
L_8003F2B8:;
  c->r[4]=R32(c->r[27]+0x00000130u); // 8003F2B8
  cmps(c,0,(int32_t)c->r[4],0); // 8003F2BC
  if (crb(c,2)) { goto L_8003F364; } // 8003F2C0
  c->r[0]=0u+0x00000001u; // 8003F2C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003F2C8
  c->r[6]=c->r[28]|c->r[28]; // 8003F2CC
  c->r[7]=c->r[29]|c->r[29]; // 8003F2D0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8003F2D4
  c->r[8]=c->r[30]|c->r[30]; // 8003F2D8
  c->r[9]=R32(c->r[27]+0x00000138u); // 8003F2DC
  c->r[5]=0u+0x00000006u; // 8003F2E0
  c->r[10]=0u+0x00000001u; // 8003F2E4
  c->lr=0x8003F2ECu; f_80281A84(c); // 8003F2E8
  cmps(c,0,(int32_t)c->r[3],0); // 8003F2EC
  W32(c->r[27]+0x00000134u,c->r[3]); // 8003F2F0
  if (crb(c,2)) { goto L_8003F300; } // 8003F2F4
  c->lr=0x8003F2FCu; f_80295B6C(c); // 8003F2F8
  goto L_8003F364; // 8003F2FC
L_8003F300:;
  c->r[3]=R32(c->r[27]+0x00000138u); // 8003F300
  c->r[4]=c->r[30]|c->r[30]; // 8003F304
  c->r[5]=c->r[29]|c->r[29]; // 8003F308
  c->lr=0x8003F310u; f_802C0F98(c); // 8003F30C
  c->r[31]=c->r[3]|c->r[3]; // 8003F310
  c->r[3]=0u+0x00000044u; // 8003F314
  c->r[4]=c->r[13]+0xFFFF8DAAu; // 8003F318
  c->r[5]=0u+0x00000000u; // 8003F31C
  c->r[6]=0u+0x00001001u; // 8003F320
  c->lr=0x8003F328u; f_80244D20(c); // 8003F324
  cmps(c,0,(int32_t)c->r[3],0); // 8003F328
  if (crb(c,2)) { goto L_8003F340; } // 8003F32C
  c->r[5]=R32(c->r[27]+0x00000130u); // 8003F330
  c->r[4]=c->r[31]|c->r[31]; // 8003F334
  c->r[6]=0u+0x00000006u; // 8003F338
  c->lr=0x8003F340u; f_8029316C(c); // 8003F33C
L_8003F340:;
  W32(c->r[27]+0x00000134u,c->r[3]); // 8003F340
  c->r[4]=c->r[28]|c->r[28]; // 8003F344
  c->r[7]=R32(c->r[27]+0x00000138u); // 8003F348
  c->r[5]=c->r[29]|c->r[29]; // 8003F34C
  c->r[6]=c->r[30]|c->r[30]; // 8003F350
  c->r[8]=0u+0x00000001u; // 8003F354
  c->r[9]=0u+0x00000000u; // 8003F358
  c->lr=0x8003F360u; f_8027FFF4(c); // 8003F35C
  W32(c->r[27]+0x00000134u,c->r[3]); // 8003F360
L_8003F364:;
  c->r[4]=R32(c->r[27]+0x0000013Cu); // 8003F364
  cmps(c,0,(int32_t)c->r[4],0); // 8003F368
  if (crb(c,2)) { goto L_8003F410; } // 8003F36C
  c->r[0]=0u+0x00000001u; // 8003F370
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003F374
  c->r[6]=c->r[28]|c->r[28]; // 8003F378
  c->r[7]=c->r[29]|c->r[29]; // 8003F37C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8003F380
  c->r[8]=c->r[30]|c->r[30]; // 8003F384
  c->r[9]=R32(c->r[27]+0x00000144u); // 8003F388
  c->r[5]=0u+0x00000001u; // 8003F38C
  c->r[10]=0u+0x00000001u; // 8003F390
  c->lr=0x8003F398u; f_80281A84(c); // 8003F394
  cmps(c,0,(int32_t)c->r[3],0); // 8003F398
  W32(c->r[27]+0x00000140u,c->r[3]); // 8003F39C
  if (crb(c,2)) { goto L_8003F3AC; } // 8003F3A0
  c->lr=0x8003F3A8u; f_80295B6C(c); // 8003F3A4
  goto L_8003F410; // 8003F3A8
L_8003F3AC:;
  c->r[3]=R32(c->r[27]+0x00000144u); // 8003F3AC
  c->r[4]=c->r[30]|c->r[30]; // 8003F3B0
  c->r[5]=c->r[29]|c->r[29]; // 8003F3B4
  c->lr=0x8003F3BCu; f_802C0F98(c); // 8003F3B8
  c->r[31]=c->r[3]|c->r[3]; // 8003F3BC
  c->r[3]=0u+0x00000044u; // 8003F3C0
  c->r[4]=c->r[13]+0xFFFF8DAFu; // 8003F3C4
  c->r[5]=0u+0x00000000u; // 8003F3C8
  c->r[6]=0u+0x00001001u; // 8003F3CC
  c->lr=0x8003F3D4u; f_80244D20(c); // 8003F3D0
  cmps(c,0,(int32_t)c->r[3],0); // 8003F3D4
  if (crb(c,2)) { goto L_8003F3EC; } // 8003F3D8
  c->r[5]=R32(c->r[27]+0x0000013Cu); // 8003F3DC
  c->r[4]=c->r[31]|c->r[31]; // 8003F3E0
  c->r[6]=0u+0x00000001u; // 8003F3E4
  c->lr=0x8003F3ECu; f_8029316C(c); // 8003F3E8
L_8003F3EC:;
  W32(c->r[27]+0x00000140u,c->r[3]); // 8003F3EC
  c->r[4]=c->r[28]|c->r[28]; // 8003F3F0
  c->r[7]=R32(c->r[27]+0x00000144u); // 8003F3F4
  c->r[5]=c->r[29]|c->r[29]; // 8003F3F8
  c->r[6]=c->r[30]|c->r[30]; // 8003F3FC
  c->r[8]=0u+0x00000001u; // 8003F400
  c->r[9]=0u+0x00000000u; // 8003F404
  c->lr=0x8003F40Cu; f_8027FFF4(c); // 8003F408
  W32(c->r[27]+0x00000140u,c->r[3]); // 8003F40C
L_8003F410:;
  c->r[4]=R32(c->r[27]+0x00000148u); // 8003F410
  cmps(c,0,(int32_t)c->r[4],0); // 8003F414
  if (crb(c,2)) { goto L_8003F4BC; } // 8003F418
  c->r[0]=0u+0x00000001u; // 8003F41C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8003F420
  c->r[6]=c->r[28]|c->r[28]; // 8003F424
  c->r[7]=c->r[29]|c->r[29]; // 8003F428
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8003F42C
  c->r[8]=c->r[30]|c->r[30]; // 8003F430
  c->r[9]=R32(c->r[27]+0x00000150u); // 8003F434
  c->r[5]=0u+0x00000015u; // 8003F438
  c->r[10]=0u+0x00000001u; // 8003F43C
  c->lr=0x8003F444u; f_80281A84(c); // 8003F440
  cmps(c,0,(int32_t)c->r[3],0); // 8003F444
  W32(c->r[27]+0x0000014Cu,c->r[3]); // 8003F448
  if (crb(c,2)) { goto L_8003F458; } // 8003F44C
  c->lr=0x8003F454u; f_80295B6C(c); // 8003F450
  goto L_8003F4BC; // 8003F454
L_8003F458:;
  c->r[3]=R32(c->r[27]+0x00000150u); // 8003F458
  c->r[4]=c->r[30]|c->r[30]; // 8003F45C
  c->r[5]=c->r[29]|c->r[29]; // 8003F460
  c->lr=0x8003F468u; f_802C0F98(c); // 8003F464
  c->r[31]=c->r[3]|c->r[3]; // 8003F468
  c->r[3]=0u+0x00000044u; // 8003F46C
  c->r[4]=c->r[13]+0xFFFF8DB4u; // 8003F470
  c->r[5]=0u+0x00000000u; // 8003F474
  c->r[6]=0u+0x00001001u; // 8003F478
  c->lr=0x8003F480u; f_80244D20(c); // 8003F47C
  cmps(c,0,(int32_t)c->r[3],0); // 8003F480
  if (crb(c,2)) { goto L_8003F498; } // 8003F484
  c->r[5]=R32(c->r[27]+0x00000148u); // 8003F488
  c->r[4]=c->r[31]|c->r[31]; // 8003F48C
  c->r[6]=0u+0x00000015u; // 8003F490
  c->lr=0x8003F498u; f_8029316C(c); // 8003F494
L_8003F498:;
  W32(c->r[27]+0x0000014Cu,c->r[3]); // 8003F498
  c->r[4]=c->r[28]|c->r[28]; // 8003F49C
  c->r[7]=R32(c->r[27]+0x00000150u); // 8003F4A0
  c->r[5]=c->r[29]|c->r[29]; // 8003F4A4
  c->r[6]=c->r[30]|c->r[30]; // 8003F4A8
  c->r[8]=0u+0x00000001u; // 8003F4AC
  c->r[9]=0u+0x00000000u; // 8003F4B0
  c->lr=0x8003F4B8u; f_8027FFF4(c); // 8003F4B4
  W32(c->r[27]+0x0000014Cu,c->r[3]); // 8003F4B8
L_8003F4BC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003F4BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8003F4C0
  c->lr=c->r[0]; // 8003F4C4
  c->r[1]=c->r[1]+0x00000030u; // 8003F4C8
  return; // 8003F4CC
}

// fn_8003F4D0
void f_8003F4D0(Ctx* __restrict c) {
  trace_call(0x8003F4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F4D0
  c->r[0]=c->lr; // 8003F4D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F4D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003F4DC
  c->r[31]=c->r[3]|c->r[3]; // 8003F4E0
  c->r[0]=R32(c->r[3]+0x00000154u); // 8003F4E4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8003F4E8
  W32(c->r[3]+0x00000154u,c->r[0]); // 8003F4EC
  if (!crb(c,2)) { goto L_8003F570; } // 8003F4F0
  c->lr=0x8003F4F8u; f_802B11D0(c); // 8003F4F4
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 8003F4F8
  cmps(c,0,(int32_t)c->r[3],0); // 8003F4FC
  if (crb(c,2)) { goto L_8003F510; } // 8003F500
  c->lr=0x8003F508u; f_80295B7C(c); // 8003F504
  c->r[0]=0u+0x00000000u; // 8003F508
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 8003F50C
L_8003F510:;
  c->r[3]=R32(c->r[31]+0x00000128u); // 8003F510
  cmps(c,0,(int32_t)c->r[3],0); // 8003F514
  if (crb(c,2)) { goto L_8003F528; } // 8003F518
  c->lr=0x8003F520u; f_80295B7C(c); // 8003F51C
  c->r[0]=0u+0x00000000u; // 8003F520
  W32(c->r[31]+0x00000128u,c->r[0]); // 8003F524
L_8003F528:;
  c->r[3]=R32(c->r[31]+0x00000134u); // 8003F528
  cmps(c,0,(int32_t)c->r[3],0); // 8003F52C
  if (crb(c,2)) { goto L_8003F540; } // 8003F530
  c->lr=0x8003F538u; f_80295B7C(c); // 8003F534
  c->r[0]=0u+0x00000000u; // 8003F538
  W32(c->r[31]+0x00000134u,c->r[0]); // 8003F53C
L_8003F540:;
  c->r[3]=R32(c->r[31]+0x00000140u); // 8003F540
  cmps(c,0,(int32_t)c->r[3],0); // 8003F544
  if (crb(c,2)) { goto L_8003F558; } // 8003F548
  c->lr=0x8003F550u; f_80295B7C(c); // 8003F54C
  c->r[0]=0u+0x00000000u; // 8003F550
  W32(c->r[31]+0x00000140u,c->r[0]); // 8003F554
L_8003F558:;
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 8003F558
  cmps(c,0,(int32_t)c->r[3],0); // 8003F55C
  if (crb(c,2)) { goto L_8003F570; } // 8003F560
  c->lr=0x8003F568u; f_80295B7C(c); // 8003F564
  c->r[0]=0u+0x00000000u; // 8003F568
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 8003F56C
L_8003F570:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F570
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003F574
  c->lr=c->r[0]; // 8003F578
  c->r[1]=c->r[1]+0x00000010u; // 8003F57C
  return; // 8003F580
}

// fn_8003F584
void f_8003F584(Ctx* __restrict c) {
  trace_call(0x8003F584u);
  f_80038EC8(c); return; // 8003F584
}

// fn_8003F588
void f_8003F588(Ctx* __restrict c) {
  trace_call(0x8003F588u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003F588
  if (!crb(c,2)) return; // 8003F58C
  f_8003AF18(c); return; // 8003F590
  return; // 8003F594
}

// fn_8003F598
void f_8003F598(Ctx* __restrict c) {
  trace_call(0x8003F598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F598
  c->r[0]=c->lr; // 8003F59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F5A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003F5A4
  c->r[31]=c->r[3]|c->r[3]; // 8003F5A8
  c->lr=0x8003F5B0u; f_8003E2B4(c); // 8003F5AC
  c->r[3]=0u+0x00000000u; // 8003F5B0
  c->r[0]=0u+0x00000004u; // 8003F5B4
  W32(c->r[31]+0x00000108u,c->r[3]); // 8003F5B8
  W32(c->r[31]+0x0000010Cu,c->r[3]); // 8003F5BC
  W32(c->r[31]+0x00000110u,c->r[3]); // 8003F5C0
  W32(c->r[31]+0x00000114u,c->r[3]); // 8003F5C4
  W32(c->r[31]+0x00000118u,c->r[3]); // 8003F5C8
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 8003F5CC
  W32(c->r[31]+0x00000120u,c->r[0]); // 8003F5D0
  W32(c->r[31]+0x00000124u,c->r[3]); // 8003F5D4
  W32(c->r[31]+0x00000128u,c->r[3]); // 8003F5D8
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 8003F5DC
  W32(c->r[31]+0x00000130u,c->r[3]); // 8003F5E0
  W32(c->r[31]+0x00000134u,c->r[3]); // 8003F5E4
  W32(c->r[31]+0x00000138u,c->r[0]); // 8003F5E8
  W32(c->r[31]+0x0000013Cu,c->r[3]); // 8003F5EC
  W32(c->r[31]+0x00000140u,c->r[3]); // 8003F5F0
  W32(c->r[31]+0x00000144u,c->r[0]); // 8003F5F4
  W32(c->r[31]+0x00000148u,c->r[3]); // 8003F5F8
  W32(c->r[31]+0x0000014Cu,c->r[3]); // 8003F5FC
  W32(c->r[31]+0x00000150u,c->r[0]); // 8003F600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003F604
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F608
  c->lr=c->r[0]; // 8003F60C
  c->r[1]=c->r[1]+0x00000010u; // 8003F610
  return; // 8003F614
}

// fn_8003F618
void f_8003F618(Ctx* __restrict c) {
  trace_call(0x8003F618u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F618
  c->r[0]=c->lr; // 8003F61C
  c->r[6]=0u+0x00000000u; // 8003F620
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003F624
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003F628
  c->r[28]=c->r[3]|c->r[3]; // 8003F62C
  c->r[29]=c->r[4]|c->r[4]; // 8003F630
  c->r[30]=c->r[5]|c->r[5]; // 8003F634
  c->r[31]=c->r[7]|c->r[7]; // 8003F638
  c->lr=0x8003F640u; f_8003E31C(c); // 8003F63C
  cmps(c,0,(int32_t)c->r[30],0); // 8003F640
  if (crb(c,2)) { goto L_8003F64C; } // 8003F644
  goto L_8003F650; // 8003F648
L_8003F64C:;
  c->r[30]=c->r[28]|c->r[28]; // 8003F64C
L_8003F650:;
  c->r[0]=R32(c->r[29]+0x00000108u); // 8003F650
  c->r[3]=c->r[30]+0x00000110u; // 8003F654
  W32(c->r[30]+0x00000108u,c->r[0]); // 8003F658
  c->r[4]=c->r[29]+0x00000110u; // 8003F65C
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 8003F660
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 8003F664
  c->lr=0x8003F66Cu; f_8003F6E4(c); // 8003F668
  c->r[3]=c->r[30]+0x00000118u; // 8003F66C
  c->r[4]=c->r[29]+0x00000118u; // 8003F670
  c->lr=0x8003F678u; f_8003BDD0(c); // 8003F674
  c->r[3]=c->r[30]+0x00000124u; // 8003F678
  c->r[4]=c->r[29]+0x00000124u; // 8003F67C
  c->lr=0x8003F684u; f_8003BDD0(c); // 8003F680
  c->r[3]=c->r[30]+0x00000130u; // 8003F684
  c->r[4]=c->r[29]+0x00000130u; // 8003F688
  c->lr=0x8003F690u; f_8003BDD0(c); // 8003F68C
  c->r[3]=c->r[30]+0x0000013Cu; // 8003F690
  c->r[4]=c->r[29]+0x0000013Cu; // 8003F694
  c->lr=0x8003F69Cu; f_8003BDD0(c); // 8003F698
  c->r[3]=c->r[30]+0x00000148u; // 8003F69C
  c->r[4]=c->r[29]+0x00000148u; // 8003F6A0
  c->lr=0x8003F6A8u; f_8003BDD0(c); // 8003F6A4
  cmps(c,0,(int32_t)c->r[31],0); // 8003F6A8
  if (crb(c,2)) { goto L_8003F6D0; } // 8003F6AC
  c->r[3]=R32(c->r[28]+0x00000154u); // 8003F6B0
  cmps(c,0,(int32_t)c->r[3],0); // 8003F6B4
  if (crb(c,1)) { goto L_8003F6C8; } // 8003F6B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8003F6BC
  W32(c->r[28]+0x00000154u,c->r[0]); // 8003F6C0
  goto L_8003F6D0; // 8003F6C4
L_8003F6C8:;
  c->r[0]=c->r[3]+0x00000001u; // 8003F6C8
  W32(c->r[28]+0x00000154u,c->r[0]); // 8003F6CC
L_8003F6D0:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003F6D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003F6D4
  c->lr=c->r[0]; // 8003F6D8
  c->r[1]=c->r[1]+0x00000020u; // 8003F6DC
  return; // 8003F6E0
}

// fn_8003F6E4
void f_8003F6E4(Ctx* __restrict c) {
  trace_call(0x8003F6E4u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 8003F6E4
  c->r[0]=R32(c->r[4]+0x00000004u); // 8003F6E8
  W32(c->r[3]+0x00000000u,c->r[5]); // 8003F6EC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8003F6F0
  return; // 8003F6F4
}

// fn_8003F6F8
void f_8003F6F8(Ctx* __restrict c) {
  trace_call(0x8003F6F8u);
  c->r[0]=c->r[4]+0xC2C20000u; // 8003F6F8
  cmpu(c,0,c->r[0],0x0000B99Au); // 8003F6FC
  if (!crb(c,2)) { goto L_8003F70C; } // 8003F700
  c->r[3]=0u+0x00000001u; // 8003F704
  return; // 8003F708
L_8003F70C:;
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003F70C
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003F710
  if (!crb(c,2)) { goto L_8003F720; } // 8003F714
  c->r[3]=0u+0x00000001u; // 8003F718
  return; // 8003F71C
L_8003F720:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003F720
  cmpu(c,0,c->r[0],0x00000802u); // 8003F724
  if (!crb(c,2)) { goto L_8003F734; } // 8003F728
  c->r[3]=0u+0x00000001u; // 8003F72C
  return; // 8003F730
L_8003F734:;
  c->r[3]=0u+0xD12F0000u; // 8003F734
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003F738
  c->r[0]=c->r[4]-c->r[0]; // 8003F73C
  c->r[0]=cntlz(c->r[0]); // 8003F740
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003F744
  return; // 8003F748
}

// fn_8003F74C
void f_8003F74C(Ctx* __restrict c) {
  trace_call(0x8003F74Cu);
  f_8003E404(c); return; // 8003F74C
}

// fn_8003F750
void f_8003F750(Ctx* __restrict c) {
  trace_call(0x8003F750u);
  c->r[3]=0u+0x00000158u; // 8003F750
  return; // 8003F754
}

// fn_8003F758
void f_8003F758(Ctx* __restrict c) {
  trace_call(0x8003F758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F758
  c->r[0]=c->lr; // 8003F75C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F760
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003F764
  c->r[31]=c->r[3]|c->r[3]; // 8003F768
  c->lr=0x8003F770u; f_8003EEC0(c); // 8003F76C
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003F770
  c->r[3]=0u+0x80420000u; // 8003F774
  c->r[3]=c->r[3]+0x00001100u; // 8003F778
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003F77C
  c->r[0]=c->r[0]|0x80000000u; // 8003F780
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003F784
  c->r[3]=c->r[31]|c->r[31]; // 8003F788
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003F78C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003F790
  c->ctr=c->r[12]; // 8003F794
  if (true) { c->lr=0x8003F79Cu; dispatch(c,c->ctr); } // 8003F798
  c->r[3]=c->r[31]|c->r[31]; // 8003F79C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003F7A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F7A4
  c->lr=c->r[0]; // 8003F7A8
  c->r[1]=c->r[1]+0x00000010u; // 8003F7AC
  return; // 8003F7B0
}

// fn_8003F7B4
void f_8003F7B4(Ctx* __restrict c) {
  trace_call(0x8003F7B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F7B4
  c->r[0]=c->lr; // 8003F7B8
  cmps(c,0,(int32_t)c->r[3],0); // 8003F7BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F7C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003F7C4
  c->r[30]=c->r[3]|c->r[3]; // 8003F7C8
  c->r[31]=c->r[4]|c->r[4]; // 8003F7CC
  if (crb(c,2)) { goto L_8003F7EC; } // 8003F7D0
  c->r[4]=0u+0x00000000u; // 8003F7D4
  c->lr=0x8003F7DCu; f_8003E52C(c); // 8003F7D8
  cmps(c,0,(int32_t)c->r[31],0); // 8003F7DC
  if (!crb(c,1)) { goto L_8003F7EC; } // 8003F7E0
  c->r[3]=c->r[30]|c->r[30]; // 8003F7E4
  c->lr=0x8003F7ECu; f_80244DC0(c); // 8003F7E8
L_8003F7EC:;
  c->r[3]=c->r[30]|c->r[30]; // 8003F7EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003F7F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F7F4
  c->lr=c->r[0]; // 8003F7F8
  c->r[1]=c->r[1]+0x00000010u; // 8003F7FC
  return; // 8003F800
}

// fn_8003F804
void f_8003F804(Ctx* __restrict c) {
  trace_call(0x8003F804u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F804
  c->r[0]=c->lr; // 8003F808
  c->r[3]=0u+0x00000158u; // 8003F80C
  c->r[4]=c->r[13]+0xFFFF8DB9u; // 8003F810
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F814
  c->r[5]=0u+0x00000000u; // 8003F818
  c->r[6]=0u+0x00001001u; // 8003F81C
  c->lr=0x8003F824u; f_80244D20(c); // 8003F820
  cmps(c,0,(int32_t)c->r[3],0); // 8003F824
  if (crb(c,2)) { goto L_8003F830; } // 8003F828
  c->lr=0x8003F830u; f_8003F758(c); // 8003F82C
L_8003F830:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F830
  c->lr=c->r[0]; // 8003F834
  c->r[1]=c->r[1]+0x00000010u; // 8003F838
  return; // 8003F83C
}

// fn_8003F840
void f_8003F840(Ctx* __restrict c) {
  trace_call(0x8003F840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F840
  c->r[0]=c->lr; // 8003F844
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003F84C
  c->r[31]=c->r[3]|c->r[3]; // 8003F850
  c->lr=0x8003F858u; f_80244520(c); // 8003F854
  c->r[7]=c->r[3]|c->r[3]; // 8003F858
  c->r[9]=c->r[31]|c->r[31]; // 8003F85C
  c->r[3]=0u+0x00000158u; // 8003F860
  c->r[4]=c->r[13]+0xFFFF8DBEu; // 8003F864
  c->r[5]=0u+0x00000000u; // 8003F868
  c->r[6]=0u+0x00002001u; // 8003F86C
  c->r[8]=0u+0x00000000u; // 8003F870
  c->lr=0x8003F878u; f_80242DF0(c); // 8003F874
  c->r[4]=c->r[3]|c->r[3]; // 8003F878
  c->r[3]=0u+0x00000158u; // 8003F87C
  c->r[5]=c->r[13]+0xFFFF8DC3u; // 8003F880
  c->r[6]=0u+0x00000000u; // 8003F884
  c->r[7]=0u+0x00001001u; // 8003F888
  c->lr=0x8003F890u; f_80244DB0(c); // 8003F88C
  cmps(c,0,(int32_t)c->r[3],0); // 8003F890
  if (crb(c,2)) { goto L_8003F89C; } // 8003F894
  c->lr=0x8003F89Cu; f_8003F758(c); // 8003F898
L_8003F89C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F89C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003F8A0
  c->lr=c->r[0]; // 8003F8A4
  c->r[1]=c->r[1]+0x00000010u; // 8003F8A8
  return; // 8003F8AC
}

// fn_8003F8B0
void f_8003F8B0(Ctx* __restrict c) {
  trace_call(0x8003F8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F8B0
  c->r[0]=c->lr; // 8003F8B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F8B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003F8BC
  c->r[31]=c->r[3]|c->r[3]; // 8003F8C0
  c->lr=0x8003F8C8u; f_8003ACE0(c); // 8003F8C4
  c->r[8]=0u+0x80420000u; // 8003F8C8
  c->r[7]=0u+0x80410000u; // 8003F8CC
  c->r[5]=0u+0x1DE70000u; // 8003F8D0
  c->r[4]=0u+0x80BC0000u; // 8003F8D4
  c->r[3]=0u+0x94B60000u; // 8003F8D8
  c->r[8]=c->r[8]+0x000010C4u; // 8003F8DC
  c->r[0]=c->r[3]+0x00003885u; // 8003F8E0
  c->r[7]=c->r[7]+0xFFFFBAB3u; // 8003F8E4
  c->r[5]=c->r[5]+0xFFFFAD66u; // 8003F8E8
  c->r[4]=c->r[4]+0xFFFFB2D7u; // 8003F8EC
  c->r[6]=0u+0x00000000u; // 8003F8F0
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003F8F4
  c->r[3]=c->r[31]|c->r[31]; // 8003F8F8
  W32(c->r[31]+0x00000000u,c->r[7]); // 8003F8FC
  W32(c->r[31]+0x00000008u,c->r[6]); // 8003F900
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003F904
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003F908
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003F90C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003F910
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F914
  c->lr=c->r[0]; // 8003F918
  c->r[1]=c->r[1]+0x00000010u; // 8003F91C
  return; // 8003F920
}

// fn_8003F924
void f_8003F924(Ctx* __restrict c) {
  trace_call(0x8003F924u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F924
  c->r[0]=c->lr; // 8003F928
  cmps(c,0,(int32_t)c->r[4],0); // 8003F92C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003F930
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003F934
  c->r[30]=c->r[3]|c->r[3]; // 8003F938
  c->r[31]=c->r[4]|c->r[4]; // 8003F93C
  if (crb(c,2)) { goto L_8003F994; } // 8003F940
  c->r[3]=c->r[31]|c->r[31]; // 8003F944
  c->lr=0x8003F94Cu; f_80244520(c); // 8003F948
  c->r[7]=c->r[3]|c->r[3]; // 8003F94C
  c->r[9]=c->r[31]|c->r[31]; // 8003F950
  c->r[3]=0u+0x00000114u; // 8003F954
  c->r[4]=c->r[13]+0xFFFF8DC8u; // 8003F958
  c->r[5]=0u+0x00000000u; // 8003F95C
  c->r[6]=0u+0x00002001u; // 8003F960
  c->r[8]=0u+0x00000000u; // 8003F964
  c->lr=0x8003F96Cu; f_80242DF0(c); // 8003F968
  c->r[4]=c->r[3]|c->r[3]; // 8003F96C
  c->r[3]=0u+0x00000114u; // 8003F970
  c->r[5]=c->r[13]+0xFFFF8DCDu; // 8003F974
  c->r[6]=0u+0x00000000u; // 8003F978
  c->r[7]=0u+0x00001001u; // 8003F97C
  c->lr=0x8003F984u; f_80244DB0(c); // 8003F980
  cmps(c,0,(int32_t)c->r[3],0); // 8003F984
  if (crb(c,2)) { goto L_8003F9B4; } // 8003F988
  c->lr=0x8003F990u; f_8003F8B0(c); // 8003F98C
  goto L_8003F9B4; // 8003F990
L_8003F994:;
  c->r[3]=0u+0x00000114u; // 8003F994
  c->r[4]=c->r[13]+0xFFFF8DD2u; // 8003F998
  c->r[5]=0u+0x00000000u; // 8003F99C
  c->r[6]=0u+0x00001001u; // 8003F9A0
  c->lr=0x8003F9A8u; f_80244D20(c); // 8003F9A4
  cmps(c,0,(int32_t)c->r[3],0); // 8003F9A8
  if (crb(c,2)) { goto L_8003F9B4; } // 8003F9AC
  c->lr=0x8003F9B4u; f_8003F8B0(c); // 8003F9B0
L_8003F9B4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003F9B4
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003F9B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003F9BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003F9C0
  c->lr=c->r[0]; // 8003F9C4
  c->r[1]=c->r[1]+0x00000010u; // 8003F9C8
  return; // 8003F9CC
}

// fn_8003F9D0
void f_8003F9D0(Ctx* __restrict c) {
  trace_call(0x8003F9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003F9D0
  c->r[0]=c->lr; // 8003F9D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003F9D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003F9DC
  c->r[29]=c->r[3]|c->r[3]; // 8003F9E0
  c->r[30]=c->r[4]|c->r[4]; // 8003F9E4
  c->lr=0x8003F9ECu; f_8003AE00(c); // 8003F9E8
  c->r[31]=c->r[3]|c->r[3]; // 8003F9EC
  c->r[3]=c->r[30]|c->r[30]; // 8003F9F0
  c->lr=0x8003F9F8u; f_8030BD1C(c); // 8003F9F4
  W32(c->r[29]+0x000000E4u,c->r[3]); // 8003F9F8
  c->r[3]=c->r[30]|c->r[30]; // 8003F9FC
  c->lr=0x8003FA04u; f_8030C0A0(c); // 8003FA00
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 8003FA04
  c->r[3]=c->r[30]|c->r[30]; // 8003FA08
  c->lr=0x8003FA10u; f_8030C0A0(c); // 8003FA0C
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 8003FA10
  c->r[3]=c->r[30]|c->r[30]; // 8003FA14
  c->lr=0x8003FA1Cu; f_8030C0A0(c); // 8003FA18
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 8003FA1C
  c->r[3]=c->r[30]|c->r[30]; // 8003FA20
  c->lr=0x8003FA28u; f_8030C0A0(c); // 8003FA24
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 8003FA28
  c->r[3]=c->r[30]|c->r[30]; // 8003FA2C
  c->lr=0x8003FA34u; f_8030BD1C(c); // 8003FA30
  W32(c->r[29]+0x000000F8u,c->r[3]); // 8003FA34
  c->r[3]=c->r[30]|c->r[30]; // 8003FA38
  c->lr=0x8003FA40u; f_8030C0A0(c); // 8003FA3C
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 8003FA40
  c->r[3]=c->r[30]|c->r[30]; // 8003FA44
  c->lr=0x8003FA4Cu; f_8030C0A0(c); // 8003FA48
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 8003FA4C
  c->r[3]=c->r[30]|c->r[30]; // 8003FA50
  c->lr=0x8003FA58u; f_8030BD1C(c); // 8003FA54
  W8(c->r[29]+0x00000104u,c->r[3]); // 8003FA58
  c->r[3]=c->r[30]|c->r[30]; // 8003FA5C
  c->r[4]=0u+0x00000001u; // 8003FA60
  c->lr=0x8003FA68u; f_8030BE30(c); // 8003FA64
  W32(c->r[29]+0x00000108u,c->r[3]); // 8003FA68
  c->r[3]=c->r[30]|c->r[30]; // 8003FA6C
  c->lr=0x8003FA74u; f_8030C0A0(c); // 8003FA70
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 8003FA74
  c->r[3]=c->r[30]|c->r[30]; // 8003FA78
  c->lr=0x8003FA80u; f_8030BD1C(c); // 8003FA7C
  W32(c->r[29]+0x00000110u,c->r[3]); // 8003FA80
  c->r[3]=c->r[31]|c->r[31]; // 8003FA84
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003FA88
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003FA8C
  c->lr=c->r[0]; // 8003FA90
  c->r[1]=c->r[1]+0x00000020u; // 8003FA94
  return; // 8003FA98
}

// fn_8003FA9C
void f_8003FA9C(Ctx* __restrict c) {
  trace_call(0x8003FA9Cu);
  f_80038EC8(c); return; // 8003FA9C
}

// fn_8003FAA0
void f_8003FAA0(Ctx* __restrict c) {
  trace_call(0x8003FAA0u);
  cmps(c,0,(int32_t)c->r[6],0); // 8003FAA0
  if (!crb(c,2)) return; // 8003FAA4
  f_8003AF18(c); return; // 8003FAA8
  return; // 8003FAAC
}

// fn_8003FAB0
void f_8003FAB0(Ctx* __restrict c) {
  trace_call(0x8003FAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FAB0
  c->r[0]=c->lr; // 8003FAB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FAB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003FABC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8003FAC0
  c->r[30]=c->r[3]|c->r[3]; // 8003FAC4
  c->lr=0x8003FACCu; f_8003AF68(c); // 8003FAC8
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FACC
  c->r[4]=0u+0x00000050u; // 8003FAD0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FAD4
  c->r[0]=0u+0x00000004u; // 8003FAD8
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FADC
  c->r[31]=0u+0x00000000u; // 8003FAE0
  W32(c->r[30]+0x000000C8u,c->r[4]); // 8003FAE4
  c->r[3]=0u+0x000003FFu; // 8003FAE8
  W32(c->r[30]+0x000000E4u,c->r[4]); // 8003FAEC
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[2]);} // 8003FAF0
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[2]);} // 8003FAF4
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[1]);} // 8003FAF8
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[1]);} // 8003FAFC
  W32(c->r[30]+0x000000F8u,c->r[0]); // 8003FB00
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 8003FB04
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 8003FB08
  W8(c->r[30]+0x00000104u,c->r[31]); // 8003FB0C
  c->lr=0x8003FB14u; f_80248E40(c); // 8003FB10
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FB14
  W32(c->r[30]+0x00000108u,c->r[3]); // 8003FB18
  {uint32_t ea=c->r[30]+0x0000010Cu; WF32(ea,c->f[0]);} // 8003FB1C
  W32(c->r[30]+0x00000110u,c->r[31]); // 8003FB20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003FB24
  c->r[30]=R32(c->r[1]+0x00000008u); // 8003FB28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003FB2C
  c->lr=c->r[0]; // 8003FB30
  c->r[1]=c->r[1]+0x00000010u; // 8003FB34
  return; // 8003FB38
}

// fn_8003FB3C
void f_8003FB3C(Ctx* __restrict c) {
  trace_call(0x8003FB3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FB3C
  c->r[0]=c->lr; // 8003FB40
  W32(c->r[1]+0x00000024u,c->r[0]); // 8003FB44
  c->r[11]=c->r[1]+0x00000020u; // 8003FB48
  c->lr=0x8003FB50u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003FB4C
  c->r[29]=c->r[3]|c->r[3]; // 8003FB50
  c->r[30]=c->r[4]|c->r[4]; // 8003FB54
  c->r[31]=c->r[5]|c->r[5]; // 8003FB58
  c->r[6]=0u+0x00000000u; // 8003FB5C
  c->lr=0x8003FB64u; f_8003AFFC(c); // 8003FB60
  cmps(c,0,(int32_t)c->r[31],0); // 8003FB64
  if (crb(c,2)) { goto L_8003FB70; } // 8003FB68
  goto L_8003FB74; // 8003FB6C
L_8003FB70:;
  c->r[31]=c->r[29]|c->r[29]; // 8003FB70
L_8003FB74:;
  c->r[0]=R32(c->r[30]+0x000000E4u); // 8003FB74
  c->r[11]=c->r[1]+0x00000020u; // 8003FB78
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8003FB7C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FB80
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 8003FB84
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FB88
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 8003FB8C
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FB90
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 8003FB94
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FB98
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 8003FB9C
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8003FBA0
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8003FBA4
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FBA8
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 8003FBAC
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FBB0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 8003FBB4
  c->r[0]=R8(c->r[30]+0x00000104u); // 8003FBB8
  W8(c->r[31]+0x00000104u,c->r[0]); // 8003FBBC
  c->r[0]=R32(c->r[30]+0x00000108u); // 8003FBC0
  W32(c->r[31]+0x00000108u,c->r[0]); // 8003FBC4
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FBC8
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 8003FBCC
  c->r[0]=R32(c->r[30]+0x00000110u); // 8003FBD0
  W32(c->r[31]+0x00000110u,c->r[0]); // 8003FBD4
  c->lr=0x8003FBDCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003FBD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8003FBDC
  c->lr=c->r[0]; // 8003FBE0
  c->r[1]=c->r[1]+0x00000020u; // 8003FBE4
  return; // 8003FBE8
}

// fn_8003FBEC
void f_8003FBEC(Ctx* __restrict c) {
  trace_call(0x8003FBECu);
  c->r[0]=c->r[4]+0xB5AF0000u; // 8003FBEC
  cmpu(c,0,c->r[0],0x0000DF21u); // 8003FBF0
  if (!crb(c,2)) { goto L_8003FC00; } // 8003FBF4
  c->r[3]=0u+0x00000001u; // 8003FBF8
  return; // 8003FBFC
L_8003FC00:;
  c->r[0]=c->r[4]+0x05C00000u; // 8003FC00
  cmpu(c,0,c->r[0],0x00000802u); // 8003FC04
  if (!crb(c,2)) { goto L_8003FC14; } // 8003FC08
  c->r[3]=0u+0x00000001u; // 8003FC0C
  return; // 8003FC10
L_8003FC14:;
  c->r[3]=0u+0xD12F0000u; // 8003FC14
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8003FC18
  c->r[0]=c->r[4]-c->r[0]; // 8003FC1C
  c->r[0]=cntlz(c->r[0]); // 8003FC20
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8003FC24
  return; // 8003FC28
}

// fn_8003FC2C
void f_8003FC2C(Ctx* __restrict c) {
  trace_call(0x8003FC2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FC2C
  c->r[0]=c->lr; // 8003FC30
  W32(c->r[1]+0x00000044u,c->r[0]); // 8003FC34
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8003FC38
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8003FC3C
  c->r[11]=c->r[1]+0x00000030u; // 8003FC40
  c->lr=0x8003FC48u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8003FC44
  c->f[31]=c->f[1]; // 8003FC48
  c->r[29]=c->r[3]|c->r[3]; // 8003FC4C
  c->r[31]=c->r[4]|c->r[4]; // 8003FC50
  c->r[30]=c->r[5]|c->r[5]; // 8003FC54
  c->lr=0x8003FC5Cu; f_8003B104(c); // 8003FC58
  c->r[4]=R32(c->r[31]+0x000000E4u); // 8003FC5C
  c->r[3]=0u+0x43300000u; // 8003FC60
  c->r[0]=R32(c->r[30]+0x000000E4u); // 8003FC64
  c->r[4]=c->r[4]^0x80000000u; // 8003FC68
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8003FC6C
  c->r[0]=c->r[0]^0x80000000u; // 8003FC70
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8003FC74
  W32(c->r[1]+0x00000008u,c->r[3]); // 8003FC78
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[3]=RF64(ea);} // 8003FC7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8003FC80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8003FC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FC88
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 8003FC8C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8003FC90
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8003FC94
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FC98
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8003FC9C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003FCA0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003FCA4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8003FCA8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 8003FCAC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8003FCB0
  W32(c->r[29]+0x000000E4u,c->r[0]); // 8003FCB4
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FCB8
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FCBC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FCC0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003FCC4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003FCC8
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 8003FCCC
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FCD0
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FCD4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FCD8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003FCDC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003FCE0
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 8003FCE4
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FCE8
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FCEC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FCF0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003FCF4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003FCF8
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 8003FCFC
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FD00
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FD04
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FD08
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003FD0C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003FD10
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 8003FD14
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FD18
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FD1C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FD20
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003FD24
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003FD28
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 8003FD2C
  {uint32_t ea=c->r[31]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FD30
  {uint32_t ea=c->r[30]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FD34
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FD38
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8003FD3C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8003FD40
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 8003FD44
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8003FD48
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8003FD4C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8003FD50
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 8003FD54
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8003FD58
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[0]);} // 8003FD5C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8003FD60
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8003FD64
  c->r[11]=c->r[1]+0x00000030u; // 8003FD68
  c->lr=0x8003FD70u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8003FD6C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8003FD70
  c->lr=c->r[0]; // 8003FD74
  c->r[1]=c->r[1]+0x00000040u; // 8003FD78
  return; // 8003FD7C
}

// fn_8003FD80
void f_8003FD80(Ctx* __restrict c) {
  trace_call(0x8003FD80u);
  c->r[3]=0u+0x00000114u; // 8003FD80
  return; // 8003FD84
}

// fn_8003FD88
void f_8003FD88(Ctx* __restrict c) {
  trace_call(0x8003FD88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FD88
  c->r[0]=c->lr; // 8003FD8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FD90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003FD94
  c->r[31]=c->r[3]|c->r[3]; // 8003FD98
  c->lr=0x8003FDA0u; f_8003F8B0(c); // 8003FD9C
  c->r[0]=R32(c->r[31]+0x00000008u); // 8003FDA0
  c->r[3]=0u+0x80420000u; // 8003FDA4
  c->r[3]=c->r[3]+0x00001084u; // 8003FDA8
  W32(c->r[31]+0x00000018u,c->r[3]); // 8003FDAC
  c->r[0]=c->r[0]|0x80000000u; // 8003FDB0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8003FDB4
  c->r[3]=c->r[31]|c->r[31]; // 8003FDB8
  c->r[12]=R32(c->r[31]+0x00000018u); // 8003FDBC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8003FDC0
  c->ctr=c->r[12]; // 8003FDC4
  if (true) { c->lr=0x8003FDCCu; dispatch(c,c->ctr); } // 8003FDC8
  c->r[3]=c->r[31]|c->r[31]; // 8003FDCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003FDD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003FDD4
  c->lr=c->r[0]; // 8003FDD8
  c->r[1]=c->r[1]+0x00000010u; // 8003FDDC
  return; // 8003FDE0
}

// fn_8003FDE4
void f_8003FDE4(Ctx* __restrict c) {
  trace_call(0x8003FDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FDE4
  c->r[0]=c->lr; // 8003FDE8
  cmps(c,0,(int32_t)c->r[3],0); // 8003FDEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FDF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003FDF4
  c->r[30]=c->r[3]|c->r[3]; // 8003FDF8
  c->r[31]=c->r[4]|c->r[4]; // 8003FDFC
  if (crb(c,2)) { goto L_8003FE20; } // 8003FE00
  if (crb(c,2)) { goto L_8003FE10; } // 8003FE04
  c->r[4]=0u+0x00000000u; // 8003FE08
  c->lr=0x8003FE10u; f_8003ABE0(c); // 8003FE0C
L_8003FE10:;
  cmps(c,0,(int32_t)c->r[31],0); // 8003FE10
  if (!crb(c,1)) { goto L_8003FE20; } // 8003FE14
  c->r[3]=c->r[30]|c->r[30]; // 8003FE18
  c->lr=0x8003FE20u; f_80244DC0(c); // 8003FE1C
L_8003FE20:;
  c->r[3]=c->r[30]|c->r[30]; // 8003FE20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003FE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003FE28
  c->lr=c->r[0]; // 8003FE2C
  c->r[1]=c->r[1]+0x00000010u; // 8003FE30
  return; // 8003FE34
}

// fn_8003FE38
void f_8003FE38(Ctx* __restrict c) {
  trace_call(0x8003FE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FE38
  c->r[0]=c->lr; // 8003FE3C
  c->r[3]=0u+0x00000114u; // 8003FE40
  c->r[4]=c->r[13]+0xFFFF8DD7u; // 8003FE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FE48
  c->r[5]=0u+0x00000000u; // 8003FE4C
  c->r[6]=0u+0x00001001u; // 8003FE50
  c->lr=0x8003FE58u; f_80244D20(c); // 8003FE54
  cmps(c,0,(int32_t)c->r[3],0); // 8003FE58
  if (crb(c,2)) { goto L_8003FE64; } // 8003FE5C
  c->lr=0x8003FE64u; f_8003FD88(c); // 8003FE60
L_8003FE64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003FE64
  c->lr=c->r[0]; // 8003FE68
  c->r[1]=c->r[1]+0x00000010u; // 8003FE6C
  return; // 8003FE70
}

// fn_8003FE74
void f_8003FE74(Ctx* __restrict c) {
  trace_call(0x8003FE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FE74
  c->r[0]=c->lr; // 8003FE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FE7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003FE80
  c->r[31]=c->r[3]|c->r[3]; // 8003FE84
  c->lr=0x8003FE8Cu; f_80244520(c); // 8003FE88
  c->r[7]=c->r[3]|c->r[3]; // 8003FE8C
  c->r[9]=c->r[31]|c->r[31]; // 8003FE90
  c->r[3]=0u+0x00000114u; // 8003FE94
  c->r[4]=c->r[13]+0xFFFF8DDCu; // 8003FE98
  c->r[5]=0u+0x00000000u; // 8003FE9C
  c->r[6]=0u+0x00002001u; // 8003FEA0
  c->r[8]=0u+0x00000000u; // 8003FEA4
  c->lr=0x8003FEACu; f_80242DF0(c); // 8003FEA8
  c->r[4]=c->r[3]|c->r[3]; // 8003FEAC
  c->r[3]=0u+0x00000114u; // 8003FEB0
  c->r[5]=c->r[13]+0xFFFF8DE1u; // 8003FEB4
  c->r[6]=0u+0x00000000u; // 8003FEB8
  c->r[7]=0u+0x00001001u; // 8003FEBC
  c->lr=0x8003FEC4u; f_80244DB0(c); // 8003FEC0
  cmps(c,0,(int32_t)c->r[3],0); // 8003FEC4
  if (crb(c,2)) { goto L_8003FED0; } // 8003FEC8
  c->lr=0x8003FED0u; f_8003FD88(c); // 8003FECC
L_8003FED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003FED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003FED4
  c->lr=c->r[0]; // 8003FED8
  c->r[1]=c->r[1]+0x00000010u; // 8003FEDC
  return; // 8003FEE0
}

// fn_8003FEE4
void f_8003FEE4(Ctx* __restrict c) {
  trace_call(0x8003FEE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FEE4
  c->r[0]=c->lr; // 8003FEE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FEEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8003FEF0
  c->r[31]=c->r[3]|c->r[3]; // 8003FEF4
  c->lr=0x8003FEFCu; f_8003ACE0(c); // 8003FEF8
  c->r[8]=0u+0x80420000u; // 8003FEFC
  c->r[6]=0u+0x80410000u; // 8003FF00
  c->r[7]=0u+0x00000000u; // 8003FF04
  c->r[5]=0u+0x40170000u; // 8003FF08
  c->r[4]=0u+0x2AC90000u; // 8003FF0C
  c->r[3]=0u+0x04980000u; // 8003FF10
  c->r[0]=c->r[3]+0x0000798Du; // 8003FF14
  c->r[8]=c->r[8]+0x00001048u; // 8003FF18
  c->r[6]=c->r[6]+0xFFFFBAC7u; // 8003FF1C
  c->r[5]=c->r[5]+0xFFFF8585u; // 8003FF20
  c->r[4]=c->r[4]+0xFFFFF79Eu; // 8003FF24
  W32(c->r[31]+0x00000018u,c->r[8]); // 8003FF28
  c->r[3]=c->r[31]|c->r[31]; // 8003FF2C
  W32(c->r[31]+0x00000178u,c->r[7]); // 8003FF30
  W32(c->r[31]+0x00000000u,c->r[6]); // 8003FF34
  W32(c->r[31]+0x00000008u,c->r[7]); // 8003FF38
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8003FF3C
  W32(c->r[31]+0x00000010u,c->r[4]); // 8003FF40
  W32(c->r[31]+0x00000004u,c->r[0]); // 8003FF44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8003FF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003FF4C
  c->lr=c->r[0]; // 8003FF50
  c->r[1]=c->r[1]+0x00000010u; // 8003FF54
  return; // 8003FF58
}

// fn_8003FF5C
void f_8003FF5C(Ctx* __restrict c) {
  trace_call(0x8003FF5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8003FF5C
  c->r[0]=c->lr; // 8003FF60
  cmps(c,0,(int32_t)c->r[4],0); // 8003FF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8003FF68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8003FF6C
  c->r[30]=c->r[3]|c->r[3]; // 8003FF70
  c->r[31]=c->r[4]|c->r[4]; // 8003FF74
  if (crb(c,2)) { goto L_8003FFCC; } // 8003FF78
  c->r[3]=c->r[31]|c->r[31]; // 8003FF7C
  c->lr=0x8003FF84u; f_80244520(c); // 8003FF80
  c->r[7]=c->r[3]|c->r[3]; // 8003FF84
  c->r[9]=c->r[31]|c->r[31]; // 8003FF88
  c->r[3]=0u+0x0000017Cu; // 8003FF8C
  c->r[4]=c->r[13]+0xFFFF8DE6u; // 8003FF90
  c->r[5]=0u+0x00000000u; // 8003FF94
  c->r[6]=0u+0x00002001u; // 8003FF98
  c->r[8]=0u+0x00000000u; // 8003FF9C
  c->lr=0x8003FFA4u; f_80242DF0(c); // 8003FFA0
  c->r[4]=c->r[3]|c->r[3]; // 8003FFA4
  c->r[3]=0u+0x0000017Cu; // 8003FFA8
  c->r[5]=c->r[13]+0xFFFF8DEBu; // 8003FFAC
  c->r[6]=0u+0x00000000u; // 8003FFB0
  c->r[7]=0u+0x00001001u; // 8003FFB4
  c->lr=0x8003FFBCu; f_80244DB0(c); // 8003FFB8
  cmps(c,0,(int32_t)c->r[3],0); // 8003FFBC
  if (crb(c,2)) { goto L_8003FFEC; } // 8003FFC0
  c->lr=0x8003FFC8u; f_8003FEE4(c); // 8003FFC4
  goto L_8003FFEC; // 8003FFC8
L_8003FFCC:;
  c->r[3]=0u+0x0000017Cu; // 8003FFCC
  c->r[4]=c->r[13]+0xFFFF8DF0u; // 8003FFD0
  c->r[5]=0u+0x00000000u; // 8003FFD4
  c->r[6]=0u+0x00001001u; // 8003FFD8
  c->lr=0x8003FFE0u; f_80244D20(c); // 8003FFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8003FFE0
  if (crb(c,2)) { goto L_8003FFEC; } // 8003FFE4
  c->lr=0x8003FFECu; f_8003FEE4(c); // 8003FFE8
L_8003FFEC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8003FFEC
  W16(c->r[3]+0x00000014u,c->r[0]); // 8003FFF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8003FFF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8003FFF8
  c->lr=c->r[0]; // 8003FFFC
  c->r[1]=c->r[1]+0x00000010u; // 80040000
  return; // 80040004
}

// fn_80040008
void f_80040008(Ctx* __restrict c) {
  trace_call(0x80040008u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040008
  c->r[0]=c->lr; // 8004000C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80040010
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80040014
  c->r[28]=c->r[3]|c->r[3]; // 80040018
  c->r[29]=c->r[4]|c->r[4]; // 8004001C
  c->lr=0x80040024u; f_8003AE00(c); // 80040020
  c->r[30]=c->r[3]|c->r[3]; // 80040024
  c->r[3]=c->r[29]|c->r[29]; // 80040028
  c->r[4]=0u+0x00000000u; // 8004002C
  c->lr=0x80040034u; f_8030BE30(c); // 80040030
  W32(c->r[28]+0x000000E4u,c->r[3]); // 80040034
  c->r[3]=c->r[29]|c->r[29]; // 80040038
  c->lr=0x80040040u; f_8030BD1C(c); // 8004003C
  W32(c->r[28]+0x000000E8u,c->r[3]); // 80040040
  c->r[3]=c->r[29]|c->r[29]; // 80040044
  c->lr=0x8004004Cu; f_8030BD1C(c); // 80040048
  W8(c->r[28]+0x000000F0u,c->r[3]); // 8004004C
  c->r[3]=c->r[29]|c->r[29]; // 80040050
  c->r[4]=0u+0x00000000u; // 80040054
  c->lr=0x8004005Cu; f_8030BE30(c); // 80040058
  W32(c->r[28]+0x000000F4u,c->r[3]); // 8004005C
  c->r[3]=c->r[29]|c->r[29]; // 80040060
  c->lr=0x80040068u; f_8030BD1C(c); // 80040064
  W32(c->r[28]+0x000000F8u,c->r[3]); // 80040068
  c->r[3]=c->r[29]|c->r[29]; // 8004006C
  c->lr=0x80040074u; f_8030BD1C(c); // 80040070
  W8(c->r[28]+0x00000100u,c->r[3]); // 80040074
  c->r[3]=c->r[29]|c->r[29]; // 80040078
  c->lr=0x80040080u; f_8030BD1C(c); // 8004007C
  W8(c->r[28]+0x00000101u,c->r[3]); // 80040080
  c->r[3]=c->r[29]|c->r[29]; // 80040084
  c->lr=0x8004008Cu; f_8030BD1C(c); // 80040088
  W8(c->r[28]+0x00000102u,c->r[3]); // 8004008C
  c->r[3]=c->r[29]|c->r[29]; // 80040090
  c->lr=0x80040098u; f_8030BD1C(c); // 80040094
  W8(c->r[28]+0x00000103u,c->r[3]); // 80040098
  c->r[3]=c->r[29]|c->r[29]; // 8004009C
  c->lr=0x800400A4u; f_8030BD1C(c); // 800400A0
  W8(c->r[28]+0x00000104u,c->r[3]); // 800400A4
  c->r[3]=c->r[29]|c->r[29]; // 800400A8
  c->lr=0x800400B0u; f_8030BD1C(c); // 800400AC
  W8(c->r[28]+0x00000105u,c->r[3]); // 800400B0
  c->r[3]=c->r[29]|c->r[29]; // 800400B4
  c->lr=0x800400BCu; f_8030BD1C(c); // 800400B8
  W8(c->r[28]+0x00000106u,c->r[3]); // 800400BC
  c->r[3]=c->r[29]|c->r[29]; // 800400C0
  c->lr=0x800400C8u; f_8030C0A0(c); // 800400C4
  {uint32_t ea=c->r[28]+0x00000108u; WF32(ea,c->f[1]);} // 800400C8
  c->r[3]=c->r[29]|c->r[29]; // 800400CC
  c->lr=0x800400D4u; f_8030BD1C(c); // 800400D0
  W8(c->r[28]+0x0000010Cu,c->r[3]); // 800400D4
  c->r[3]=c->r[29]|c->r[29]; // 800400D8
  c->lr=0x800400E0u; f_8030C0A0(c); // 800400DC
  {uint32_t ea=c->r[28]+0x00000110u; WF32(ea,c->f[1]);} // 800400E0
  c->r[3]=c->r[29]|c->r[29]; // 800400E4
  c->lr=0x800400ECu; f_8030BD1C(c); // 800400E8
  W8(c->r[28]+0x00000114u,c->r[3]); // 800400EC
  c->r[3]=c->r[29]|c->r[29]; // 800400F0
  c->lr=0x800400F8u; f_8030BD1C(c); // 800400F4
  W8(c->r[28]+0x00000115u,c->r[3]); // 800400F8
  c->r[3]=c->r[29]|c->r[29]; // 800400FC
  c->lr=0x80040104u; f_8030BD1C(c); // 80040100
  W8(c->r[28]+0x00000116u,c->r[3]); // 80040104
  c->r[3]=c->r[29]|c->r[29]; // 80040108
  c->lr=0x80040110u; f_8030BD1C(c); // 8004010C
  W8(c->r[28]+0x00000117u,c->r[3]); // 80040110
  c->r[3]=c->r[29]|c->r[29]; // 80040114
  c->r[4]=0u+0x00000000u; // 80040118
  c->lr=0x80040120u; f_8030BE30(c); // 8004011C
  W32(c->r[28]+0x00000118u,c->r[3]); // 80040120
  c->r[31]=0u+0x00000000u; // 80040124
  c->r[3]=c->r[29]|c->r[29]; // 80040128
  W32(c->r[28]+0x0000011Cu,c->r[31]); // 8004012C
  c->lr=0x80040134u; f_8030BD1C(c); // 80040130
  W32(c->r[28]+0x00000120u,c->r[3]); // 80040134
  c->r[3]=c->r[29]|c->r[29]; // 80040138
  c->r[4]=0u+0x00000000u; // 8004013C
  c->lr=0x80040144u; f_8030BE30(c); // 80040140
  W32(c->r[28]+0x00000124u,c->r[3]); // 80040144
  c->r[3]=c->r[29]|c->r[29]; // 80040148
  W32(c->r[28]+0x00000128u,c->r[31]); // 8004014C
  c->lr=0x80040154u; f_8030BD1C(c); // 80040150
  W32(c->r[28]+0x0000012Cu,c->r[3]); // 80040154
  c->r[3]=c->r[29]|c->r[29]; // 80040158
  c->lr=0x80040160u; f_8030C0A0(c); // 8004015C
  {uint32_t ea=c->r[28]+0x00000130u; WF32(ea,c->f[1]);} // 80040160
  c->r[3]=c->r[29]|c->r[29]; // 80040164
  c->lr=0x8004016Cu; f_8030C0A0(c); // 80040168
  {uint32_t ea=c->r[28]+0x00000134u; WF32(ea,c->f[1]);} // 8004016C
  c->r[3]=c->r[29]|c->r[29]; // 80040170
  c->lr=0x80040178u; f_8030C0A0(c); // 80040174
  {uint32_t ea=c->r[28]+0x00000138u; WF32(ea,c->f[1]);} // 80040178
  c->r[3]=c->r[29]|c->r[29]; // 8004017C
  c->lr=0x80040184u; f_8030C0A0(c); // 80040180
  {uint32_t ea=c->r[28]+0x0000013Cu; WF32(ea,c->f[1]);} // 80040184
  c->r[3]=c->r[29]|c->r[29]; // 80040188
  c->lr=0x80040190u; f_8030C0A0(c); // 8004018C
  {uint32_t ea=c->r[28]+0x00000140u; WF32(ea,c->f[1]);} // 80040190
  c->r[3]=c->r[29]|c->r[29]; // 80040194
  c->lr=0x8004019Cu; f_8030C0A0(c); // 80040198
  {uint32_t ea=c->r[28]+0x00000144u; WF32(ea,c->f[1]);} // 8004019C
  c->r[3]=c->r[29]|c->r[29]; // 800401A0
  c->lr=0x800401A8u; f_8030BD1C(c); // 800401A4
  W8(c->r[28]+0x00000148u,c->r[3]); // 800401A8
  c->r[3]=c->r[29]|c->r[29]; // 800401AC
  c->lr=0x800401B4u; f_8030C0A0(c); // 800401B0
  {uint32_t ea=c->r[28]+0x0000014Cu; WF32(ea,c->f[1]);} // 800401B4
  c->r[3]=c->r[29]|c->r[29]; // 800401B8
  c->lr=0x800401C0u; f_8030C0A0(c); // 800401BC
  {uint32_t ea=c->r[28]+0x00000150u; WF32(ea,c->f[1]);} // 800401C0
  c->r[3]=c->r[29]|c->r[29]; // 800401C4
  c->lr=0x800401CCu; f_8030C0A0(c); // 800401C8
  {uint32_t ea=c->r[28]+0x00000154u; WF32(ea,c->f[1]);} // 800401CC
  c->r[3]=c->r[29]|c->r[29]; // 800401D0
  c->lr=0x800401D8u; f_8030C0A0(c); // 800401D4
  {uint32_t ea=c->r[28]+0x00000158u; WF32(ea,c->f[1]);} // 800401D8
  c->r[3]=c->r[29]|c->r[29]; // 800401DC
  c->lr=0x800401E4u; f_8030C0A0(c); // 800401E0
  {uint32_t ea=c->r[28]+0x0000015Cu; WF32(ea,c->f[1]);} // 800401E4
  c->r[3]=c->r[29]|c->r[29]; // 800401E8
  c->lr=0x800401F0u; f_8030C0A0(c); // 800401EC
  {uint32_t ea=c->r[28]+0x00000160u; WF32(ea,c->f[1]);} // 800401F0
  c->r[3]=c->r[29]|c->r[29]; // 800401F4
  c->lr=0x800401FCu; f_8030C0A0(c); // 800401F8
  {uint32_t ea=c->r[28]+0x00000164u; WF32(ea,c->f[1]);} // 800401FC
  c->r[3]=c->r[29]|c->r[29]; // 80040200
  c->lr=0x80040208u; f_8030BD1C(c); // 80040204
  W8(c->r[28]+0x00000168u,c->r[3]); // 80040208
  c->r[3]=c->r[29]|c->r[29]; // 8004020C
  c->r[4]=0u+0x00000000u; // 80040210
  c->lr=0x80040218u; f_8030BE30(c); // 80040214
  W32(c->r[28]+0x0000016Cu,c->r[3]); // 80040218
  c->r[3]=c->r[29]|c->r[29]; // 8004021C
  c->lr=0x80040224u; f_8030BD1C(c); // 80040220
  W32(c->r[28]+0x00000170u,c->r[3]); // 80040224
  c->r[3]=c->r[30]|c->r[30]; // 80040228
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004022C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80040230
  c->lr=c->r[0]; // 80040234
  c->r[1]=c->r[1]+0x00000020u; // 80040238
  return; // 8004023C
}

// fn_80040240
void f_80040240(Ctx* __restrict c) {
  trace_call(0x80040240u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040240
  c->r[0]=c->lr; // 80040244
  W32(c->r[1]+0x00000034u,c->r[0]); // 80040248
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004024C
  c->r[27]=c->r[3]|c->r[3]; // 80040250
  c->r[28]=c->r[4]|c->r[4]; // 80040254
  c->r[29]=c->r[5]|c->r[5]; // 80040258
  c->r[30]=c->r[6]|c->r[6]; // 8004025C
  c->r[7]=R32(c->r[3]+0x00000178u); // 80040260
  cmps(c,0,(int32_t)c->r[7],0); // 80040264
  if (!crb(c,0)) { goto L_80040278; } // 80040268
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8004026C
  W32(c->r[3]+0x00000178u,c->r[0]); // 80040270
  goto L_80040288; // 80040274
L_80040278:;
  c->r[0]=c->r[7]+0x00000001u; // 80040278
  W32(c->r[3]+0x00000178u,c->r[0]); // 8004027C
  cmps(c,0,(int32_t)c->r[0],1); // 80040280
  if (crb(c,1)) { goto L_800403F4; } // 80040284
L_80040288:;
  c->r[3]=c->r[27]|c->r[27]; // 80040288
  c->r[4]=c->r[28]|c->r[28]; // 8004028C
  c->r[5]=c->r[29]|c->r[29]; // 80040290
  c->r[6]=c->r[30]|c->r[30]; // 80040294
  c->lr=0x8004029Cu; f_802B11C0(c); // 80040298
  c->r[4]=R32(c->r[27]+0x00000118u); // 8004029C
  cmps(c,0,(int32_t)c->r[4],0); // 800402A0
  if (crb(c,2)) { goto L_80040348; } // 800402A4
  c->r[0]=0u+0x00000001u; // 800402A8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800402AC
  c->r[6]=c->r[28]|c->r[28]; // 800402B0
  c->r[7]=c->r[29]|c->r[29]; // 800402B4
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800402B8
  c->r[8]=c->r[30]|c->r[30]; // 800402BC
  c->r[9]=R32(c->r[27]+0x00000120u); // 800402C0
  c->r[5]=0u+0x00000000u; // 800402C4
  c->r[10]=0u+0x00000001u; // 800402C8
  c->lr=0x800402D0u; f_80281A84(c); // 800402CC
  cmps(c,0,(int32_t)c->r[3],0); // 800402D0
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 800402D4
  if (crb(c,2)) { goto L_800402E4; } // 800402D8
  c->lr=0x800402E0u; f_80295B6C(c); // 800402DC
  goto L_80040348; // 800402E0
L_800402E4:;
  c->r[3]=R32(c->r[27]+0x00000120u); // 800402E4
  c->r[4]=c->r[30]|c->r[30]; // 800402E8
  c->r[5]=c->r[29]|c->r[29]; // 800402EC
  c->lr=0x800402F4u; f_802C0F98(c); // 800402F0
  c->r[31]=c->r[3]|c->r[3]; // 800402F4
  c->r[3]=0u+0x00000044u; // 800402F8
  c->r[4]=c->r[13]+0xFFFF8DF5u; // 800402FC
  c->r[5]=0u+0x00000000u; // 80040300
  c->r[6]=0u+0x00001001u; // 80040304
  c->lr=0x8004030Cu; f_80244D20(c); // 80040308
  cmps(c,0,(int32_t)c->r[3],0); // 8004030C
  if (crb(c,2)) { goto L_80040324; } // 80040310
  c->r[5]=R32(c->r[27]+0x00000118u); // 80040314
  c->r[4]=c->r[31]|c->r[31]; // 80040318
  c->r[6]=0u+0x00000000u; // 8004031C
  c->lr=0x80040324u; f_8029316C(c); // 80040320
L_80040324:;
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 80040324
  c->r[4]=c->r[28]|c->r[28]; // 80040328
  c->r[7]=R32(c->r[27]+0x00000120u); // 8004032C
  c->r[5]=c->r[29]|c->r[29]; // 80040330
  c->r[6]=c->r[30]|c->r[30]; // 80040334
  c->r[8]=0u+0x00000001u; // 80040338
  c->r[9]=0u+0x00000000u; // 8004033C
  c->lr=0x80040344u; f_8027FFF4(c); // 80040340
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 80040344
L_80040348:;
  c->r[4]=R32(c->r[27]+0x00000124u); // 80040348
  cmps(c,0,(int32_t)c->r[4],0); // 8004034C
  if (crb(c,2)) { goto L_800403F4; } // 80040350
  c->r[0]=0u+0x00000001u; // 80040354
  W32(c->r[1]+0x00000008u,c->r[0]); // 80040358
  c->r[6]=c->r[28]|c->r[28]; // 8004035C
  c->r[7]=c->r[29]|c->r[29]; // 80040360
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80040364
  c->r[8]=c->r[30]|c->r[30]; // 80040368
  c->r[9]=R32(c->r[27]+0x0000012Cu); // 8004036C
  c->r[5]=0u+0x00000000u; // 80040370
  c->r[10]=0u+0x00000001u; // 80040374
  c->lr=0x8004037Cu; f_80281A84(c); // 80040378
  cmps(c,0,(int32_t)c->r[3],0); // 8004037C
  W32(c->r[27]+0x00000128u,c->r[3]); // 80040380
  if (crb(c,2)) { goto L_80040390; } // 80040384
  c->lr=0x8004038Cu; f_80295B6C(c); // 80040388
  goto L_800403F4; // 8004038C
L_80040390:;
  c->r[3]=R32(c->r[27]+0x0000012Cu); // 80040390
  c->r[4]=c->r[30]|c->r[30]; // 80040394
  c->r[5]=c->r[29]|c->r[29]; // 80040398
  c->lr=0x800403A0u; f_802C0F98(c); // 8004039C
  c->r[31]=c->r[3]|c->r[3]; // 800403A0
  c->r[3]=0u+0x00000044u; // 800403A4
  c->r[4]=c->r[13]+0xFFFF8DFAu; // 800403A8
  c->r[5]=0u+0x00000000u; // 800403AC
  c->r[6]=0u+0x00001001u; // 800403B0
  c->lr=0x800403B8u; f_80244D20(c); // 800403B4
  cmps(c,0,(int32_t)c->r[3],0); // 800403B8
  if (crb(c,2)) { goto L_800403D0; } // 800403BC
  c->r[5]=R32(c->r[27]+0x00000124u); // 800403C0
  c->r[4]=c->r[31]|c->r[31]; // 800403C4
  c->r[6]=0u+0x00000000u; // 800403C8
  c->lr=0x800403D0u; f_8029316C(c); // 800403CC
L_800403D0:;
  W32(c->r[27]+0x00000128u,c->r[3]); // 800403D0
  c->r[4]=c->r[28]|c->r[28]; // 800403D4
  c->r[7]=R32(c->r[27]+0x0000012Cu); // 800403D8
  c->r[5]=c->r[29]|c->r[29]; // 800403DC
  c->r[6]=c->r[30]|c->r[30]; // 800403E0
  c->r[8]=0u+0x00000001u; // 800403E4
  c->r[9]=0u+0x00000000u; // 800403E8
  c->lr=0x800403F0u; f_8027FFF4(c); // 800403EC
  W32(c->r[27]+0x00000128u,c->r[3]); // 800403F0
L_800403F4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800403F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800403F8
  c->lr=c->r[0]; // 800403FC
  c->r[1]=c->r[1]+0x00000030u; // 80040400
  return; // 80040404
}

// fn_80040408
void f_80040408(Ctx* __restrict c) {
  trace_call(0x80040408u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040408
  c->r[0]=c->lr; // 8004040C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040414
  c->r[31]=c->r[3]|c->r[3]; // 80040418
  c->r[0]=R32(c->r[3]+0x00000178u); // 8004041C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80040420
  W32(c->r[3]+0x00000178u,c->r[0]); // 80040424
  if (!crb(c,2)) { goto L_80040460; } // 80040428
  c->lr=0x80040430u; f_802B11D0(c); // 8004042C
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 80040430
  cmps(c,0,(int32_t)c->r[3],0); // 80040434
  if (crb(c,2)) { goto L_80040448; } // 80040438
  c->lr=0x80040440u; f_80295B7C(c); // 8004043C
  c->r[0]=0u+0x00000000u; // 80040440
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 80040444
L_80040448:;
  c->r[3]=R32(c->r[31]+0x00000128u); // 80040448
  cmps(c,0,(int32_t)c->r[3],0); // 8004044C
  if (crb(c,2)) { goto L_80040460; } // 80040450
  c->lr=0x80040458u; f_80295B7C(c); // 80040454
  c->r[0]=0u+0x00000000u; // 80040458
  W32(c->r[31]+0x00000128u,c->r[0]); // 8004045C
L_80040460:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040460
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040464
  c->lr=c->r[0]; // 80040468
  c->r[1]=c->r[1]+0x00000010u; // 8004046C
  return; // 80040470
}

// fn_80040474
void f_80040474(Ctx* __restrict c) {
  trace_call(0x80040474u);
  f_80038EC8(c); return; // 80040474
}

// fn_80040478
void f_80040478(Ctx* __restrict c) {
  trace_call(0x80040478u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040478
  c->r[0]=c->lr; // 8004047C
  cmps(c,0,(int32_t)c->r[6],0); // 80040480
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040484
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80040488
  c->r[30]=c->r[3]|c->r[3]; // 8004048C
  c->r[31]=c->r[5]|c->r[5]; // 80040490
  if (!crb(c,2)) { goto L_800404E4; } // 80040494
  c->lr=0x8004049Cu; f_8003AF18(c); // 80040498
  c->r[0]=R32(c->r[30]+0x000000E8u); // 8004049C
  cmps(c,0,(int32_t)c->r[0],7); // 800404A0
  if (!crb(c,0)) { goto L_800404B4; } // 800404A4
  c->r[4]=c->r[31]|c->r[31]; // 800404A8
  c->r[3]=c->r[30]+0x000000E4u; // 800404AC
  c->lr=0x800404B4u; f_8003A994(c); // 800404B0
L_800404B4:;
  c->r[0]=R32(c->r[30]+0x000000F8u); // 800404B4
  cmps(c,0,(int32_t)c->r[0],7); // 800404B8
  if (!crb(c,0)) { goto L_800404CC; } // 800404BC
  c->r[4]=c->r[31]|c->r[31]; // 800404C0
  c->r[3]=c->r[30]+0x000000F4u; // 800404C4
  c->lr=0x800404CCu; f_8003A994(c); // 800404C8
L_800404CC:;
  c->r[0]=R32(c->r[30]+0x00000170u); // 800404CC
  cmps(c,0,(int32_t)c->r[0],7); // 800404D0
  if (!crb(c,0)) { goto L_800404E4; } // 800404D4
  c->r[4]=c->r[31]|c->r[31]; // 800404D8
  c->r[3]=c->r[30]+0x0000016Cu; // 800404DC
  c->lr=0x800404E4u; f_8003A994(c); // 800404E0
L_800404E4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800404E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800404E8
  c->lr=c->r[0]; // 800404EC
  c->r[1]=c->r[1]+0x00000010u; // 800404F0
  return; // 800404F4
}

// fn_800404F8
void f_800404F8(Ctx* __restrict c) {
  trace_call(0x800404F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800404F8
  c->r[0]=c->lr; // 800404FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040504
  c->r[31]=c->r[3]|c->r[3]; // 80040508
  c->lr=0x80040510u; f_8003AF68(c); // 8004050C
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80040510
  c->r[5]=0u+0x00000000u; // 80040514
  c->r[4]=0u+0x00000001u; // 80040518
  c->r[3]=0u+0x0000007Fu; // 8004051C
  {uint32_t ea=c->r[2]+0xFFFF86DCu; c->f[5]=c->ps1[5]=RF32(ea);} // 80040520
  c->r[0]=0u+0x00000004u; // 80040524
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80040528
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004052C
  {uint32_t ea=c->r[2]+0xFFFF86ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80040530
  {uint32_t ea=c->r[2]+0xFFFF86F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040534
  {uint32_t ea=c->r[2]+0xFFFF8688u; c->f[8]=c->ps1[8]=RF32(ea);} // 80040538
  {uint32_t ea=c->r[2]+0xFFFF86D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 8004053C
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80040540
  W32(c->r[31]+0x000000E4u,c->r[5]); // 80040544
  W32(c->r[31]+0x000000ECu,c->r[5]); // 80040548
  W32(c->r[31]+0x000000E8u,c->r[5]); // 8004054C
  W8(c->r[31]+0x000000F0u,c->r[4]); // 80040550
  W32(c->r[31]+0x000000F4u,c->r[5]); // 80040554
  W32(c->r[31]+0x000000FCu,c->r[5]); // 80040558
  W32(c->r[31]+0x000000F8u,c->r[5]); // 8004055C
  W8(c->r[31]+0x00000100u,c->r[4]); // 80040560
  W8(c->r[31]+0x00000101u,c->r[4]); // 80040564
  W8(c->r[31]+0x00000102u,c->r[4]); // 80040568
  W8(c->r[31]+0x00000103u,c->r[4]); // 8004056C
  W8(c->r[31]+0x00000104u,c->r[4]); // 80040570
  W8(c->r[31]+0x00000105u,c->r[4]); // 80040574
  W8(c->r[31]+0x00000106u,c->r[5]); // 80040578
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[8]);} // 8004057C
  W8(c->r[31]+0x0000010Cu,c->r[5]); // 80040580
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[7]);} // 80040584
  W8(c->r[31]+0x00000114u,c->r[3]); // 80040588
  W8(c->r[31]+0x00000115u,c->r[3]); // 8004058C
  W8(c->r[31]+0x00000116u,c->r[3]); // 80040590
  W8(c->r[31]+0x00000117u,c->r[3]); // 80040594
  W32(c->r[31]+0x00000118u,c->r[5]); // 80040598
  W32(c->r[31]+0x0000011Cu,c->r[5]); // 8004059C
  W32(c->r[31]+0x00000120u,c->r[0]); // 800405A0
  W32(c->r[31]+0x00000124u,c->r[5]); // 800405A4
  W32(c->r[31]+0x00000128u,c->r[5]); // 800405A8
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 800405AC
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[6]);} // 800405B0
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[6]);} // 800405B4
  {uint32_t ea=c->r[31]+0x00000138u; WF32(ea,c->f[5]);} // 800405B8
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[4]);} // 800405BC
  {uint32_t ea=c->r[31]+0x00000140u; WF32(ea,c->f[4]);} // 800405C0
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[5]);} // 800405C4
  W8(c->r[31]+0x00000148u,c->r[4]); // 800405C8
  {uint32_t ea=c->r[31]+0x0000014Cu; WF32(ea,c->f[3]);} // 800405CC
  {uint32_t ea=c->r[31]+0x00000150u; WF32(ea,c->f[2]);} // 800405D0
  {uint32_t ea=c->r[31]+0x00000154u; WF32(ea,c->f[2]);} // 800405D4
  {uint32_t ea=c->r[31]+0x00000158u; WF32(ea,c->f[1]);} // 800405D8
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[0]);} // 800405DC
  {uint32_t ea=c->r[31]+0x00000160u; WF32(ea,c->f[0]);} // 800405E0
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[1]);} // 800405E4
  W8(c->r[31]+0x00000168u,c->r[5]); // 800405E8
  W32(c->r[31]+0x0000016Cu,c->r[5]); // 800405EC
  W32(c->r[31]+0x00000174u,c->r[5]); // 800405F0
  W32(c->r[31]+0x00000170u,c->r[5]); // 800405F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800405F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800405FC
  c->lr=c->r[0]; // 80040600
  c->r[1]=c->r[1]+0x00000010u; // 80040604
  return; // 80040608
}

// fn_8004060C
void f_8004060C(Ctx* __restrict c) {
  trace_call(0x8004060Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004060C
  c->r[0]=c->lr; // 80040610
  W32(c->r[1]+0x00000024u,c->r[0]); // 80040614
  c->r[11]=c->r[1]+0x00000020u; // 80040618
  c->lr=0x80040620u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004061C
  c->r[28]=c->r[3]|c->r[3]; // 80040620
  c->r[29]=c->r[4]|c->r[4]; // 80040624
  c->r[30]=c->r[5]|c->r[5]; // 80040628
  c->r[31]=c->r[7]|c->r[7]; // 8004062C
  c->r[6]=0u+0x00000000u; // 80040630
  c->lr=0x80040638u; f_8003AFFC(c); // 80040634
  cmps(c,0,(int32_t)c->r[30],0); // 80040638
  if (crb(c,2)) { goto L_80040644; } // 8004063C
  goto L_80040648; // 80040640
L_80040644:;
  c->r[30]=c->r[28]|c->r[28]; // 80040644
L_80040648:;
  c->r[3]=c->r[30]+0x000000E4u; // 80040648
  c->r[4]=c->r[29]+0x000000E4u; // 8004064C
  c->lr=0x80040654u; f_8003AB48(c); // 80040650
  c->r[0]=R8(c->r[29]+0x000000F0u); // 80040654
  c->r[3]=c->r[30]+0x000000F4u; // 80040658
  W8(c->r[30]+0x000000F0u,c->r[0]); // 8004065C
  c->r[4]=c->r[29]+0x000000F4u; // 80040660
  c->lr=0x80040668u; f_8003AB48(c); // 80040664
  c->r[0]=R8(c->r[29]+0x00000100u); // 80040668
  c->r[3]=c->r[30]+0x00000118u; // 8004066C
  W8(c->r[30]+0x00000100u,c->r[0]); // 80040670
  c->r[4]=c->r[29]+0x00000118u; // 80040674
  c->r[0]=R8(c->r[29]+0x00000101u); // 80040678
  W8(c->r[30]+0x00000101u,c->r[0]); // 8004067C
  c->r[0]=R8(c->r[29]+0x00000102u); // 80040680
  W8(c->r[30]+0x00000102u,c->r[0]); // 80040684
  c->r[0]=R8(c->r[29]+0x00000103u); // 80040688
  W8(c->r[30]+0x00000103u,c->r[0]); // 8004068C
  c->r[0]=R8(c->r[29]+0x00000104u); // 80040690
  W8(c->r[30]+0x00000104u,c->r[0]); // 80040694
  c->r[0]=R8(c->r[29]+0x00000105u); // 80040698
  W8(c->r[30]+0x00000105u,c->r[0]); // 8004069C
  c->r[0]=R8(c->r[29]+0x00000106u); // 800406A0
  W8(c->r[30]+0x00000106u,c->r[0]); // 800406A4
  {uint32_t ea=c->r[29]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800406A8
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 800406AC
  c->r[0]=R8(c->r[29]+0x0000010Cu); // 800406B0
  W8(c->r[30]+0x0000010Cu,c->r[0]); // 800406B4
  {uint32_t ea=c->r[29]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800406B8
  {uint32_t ea=c->r[30]+0x00000110u; WF32(ea,c->f[0]);} // 800406BC
  c->r[0]=R8(c->r[29]+0x00000114u); // 800406C0
  W8(c->r[30]+0x00000114u,c->r[0]); // 800406C4
  c->r[0]=R8(c->r[29]+0x00000115u); // 800406C8
  W8(c->r[30]+0x00000115u,c->r[0]); // 800406CC
  c->r[0]=R8(c->r[29]+0x00000116u); // 800406D0
  W8(c->r[30]+0x00000116u,c->r[0]); // 800406D4
  c->r[0]=R8(c->r[29]+0x00000117u); // 800406D8
  W8(c->r[30]+0x00000117u,c->r[0]); // 800406DC
  c->lr=0x800406E4u; f_8003BDD0(c); // 800406E0
  c->r[3]=c->r[30]+0x00000124u; // 800406E4
  c->r[4]=c->r[29]+0x00000124u; // 800406E8
  c->lr=0x800406F0u; f_8003BDD0(c); // 800406EC
  {uint32_t ea=c->r[29]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800406F0
  c->r[3]=c->r[30]+0x0000016Cu; // 800406F4
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[0]);} // 800406F8
  c->r[4]=c->r[29]+0x0000016Cu; // 800406FC
  {uint32_t ea=c->r[29]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040700
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[0]);} // 80040704
  {uint32_t ea=c->r[29]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040708
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[0]);} // 8004070C
  {uint32_t ea=c->r[29]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80040710
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[0]);} // 80040714
  {uint32_t ea=c->r[29]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040718
  {uint32_t ea=c->r[30]+0x00000140u; WF32(ea,c->f[0]);} // 8004071C
  {uint32_t ea=c->r[29]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040720
  {uint32_t ea=c->r[30]+0x00000144u; WF32(ea,c->f[0]);} // 80040724
  c->r[0]=R8(c->r[29]+0x00000148u); // 80040728
  W8(c->r[30]+0x00000148u,c->r[0]); // 8004072C
  {uint32_t ea=c->r[29]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80040730
  {uint32_t ea=c->r[30]+0x0000014Cu; WF32(ea,c->f[0]);} // 80040734
  {uint32_t ea=c->r[29]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040738
  {uint32_t ea=c->r[30]+0x00000150u; WF32(ea,c->f[0]);} // 8004073C
  {uint32_t ea=c->r[29]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040740
  {uint32_t ea=c->r[30]+0x00000154u; WF32(ea,c->f[0]);} // 80040744
  {uint32_t ea=c->r[29]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040748
  {uint32_t ea=c->r[30]+0x00000158u; WF32(ea,c->f[0]);} // 8004074C
  {uint32_t ea=c->r[29]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80040750
  {uint32_t ea=c->r[30]+0x0000015Cu; WF32(ea,c->f[0]);} // 80040754
  {uint32_t ea=c->r[29]+0x00000160u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040758
  {uint32_t ea=c->r[30]+0x00000160u; WF32(ea,c->f[0]);} // 8004075C
  {uint32_t ea=c->r[29]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040760
  {uint32_t ea=c->r[30]+0x00000164u; WF32(ea,c->f[0]);} // 80040764
  c->r[0]=R8(c->r[29]+0x00000168u); // 80040768
  W8(c->r[30]+0x00000168u,c->r[0]); // 8004076C
  c->lr=0x80040774u; f_8003AB48(c); // 80040770
  cmps(c,0,(int32_t)c->r[31],0); // 80040774
  if (crb(c,2)) { goto L_8004079C; } // 80040778
  c->r[3]=R32(c->r[28]+0x00000178u); // 8004077C
  cmps(c,0,(int32_t)c->r[3],0); // 80040780
  if (crb(c,1)) { goto L_80040794; } // 80040784
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80040788
  W32(c->r[28]+0x00000178u,c->r[0]); // 8004078C
  goto L_8004079C; // 80040790
L_80040794:;
  c->r[0]=c->r[3]+0x00000001u; // 80040794
  W32(c->r[28]+0x00000178u,c->r[0]); // 80040798
L_8004079C:;
  c->r[11]=c->r[1]+0x00000020u; // 8004079C
  c->lr=0x800407A4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800407A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800407A4
  c->lr=c->r[0]; // 800407A8
  c->r[1]=c->r[1]+0x00000020u; // 800407AC
  return; // 800407B0
}

// fn_800407B4
void f_800407B4(Ctx* __restrict c) {
  trace_call(0x800407B4u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 800407B4
  cmpu(c,0,c->r[0],0x0000DF21u); // 800407B8
  if (!crb(c,2)) { goto L_800407C8; } // 800407BC
  c->r[3]=0u+0x00000001u; // 800407C0
  return; // 800407C4
L_800407C8:;
  c->r[0]=c->r[4]+0x05C00000u; // 800407C8
  cmpu(c,0,c->r[0],0x00000802u); // 800407CC
  if (!crb(c,2)) { goto L_800407DC; } // 800407D0
  c->r[3]=0u+0x00000001u; // 800407D4
  return; // 800407D8
L_800407DC:;
  c->r[3]=0u+0xD12F0000u; // 800407DC
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 800407E0
  c->r[0]=c->r[4]-c->r[0]; // 800407E4
  c->r[0]=cntlz(c->r[0]); // 800407E8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800407EC
  return; // 800407F0
}

// fn_800407F4
void f_800407F4(Ctx* __restrict c) {
  trace_call(0x800407F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800407F4
  c->r[0]=c->lr; // 800407F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800407FC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80040800
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80040804
  c->r[11]=c->r[1]+0x00000050u; // 80040808
  c->lr=0x80040810u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004080C
  c->f[31]=c->f[1]; // 80040810
  c->r[0]=0u+0x43300000u; // 80040814
  W32(c->r[1]+0x00000008u,c->r[0]); // 80040818
  c->r[29]=c->r[3]|c->r[3]; // 8004081C
  c->r[31]=c->r[4]|c->r[4]; // 80040820
  c->r[30]=c->r[5]|c->r[5]; // 80040824
  W32(c->r[1]+0x00000010u,c->r[0]); // 80040828
  c->lr=0x80040830u; f_8003B104(c); // 8004082C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80040830
  {uint32_t ea=c->r[30]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040834
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80040838
  {uint32_t ea=c->r[31]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004083C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040840
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[3]=RF64(ea);} // 80040844
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040848
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004084C
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 80040850
  {uint32_t ea=c->r[31]+0x00000110u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040854
  {uint32_t ea=c->r[30]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040858
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004085C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040860
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040864
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[1]);} // 80040868
  c->r[3]=R8(c->r[31]+0x00000114u); // 8004086C
  c->r[0]=R8(c->r[30]+0x00000114u); // 80040870
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80040874
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040878
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004087C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80040880
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80040884
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80040888
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004088C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040890
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040894
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80040898
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 8004089C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800408A0
  W8(c->r[29]+0x00000114u,c->r[0]); // 800408A4
  c->r[3]=R8(c->r[31]+0x00000115u); // 800408A8
  c->r[0]=R8(c->r[30]+0x00000115u); // 800408AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800408B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800408B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800408B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800408BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800408C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 800408C4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800408C8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800408CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800408D0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800408D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 800408D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800408DC
  W8(c->r[29]+0x00000115u,c->r[0]); // 800408E0
  c->r[3]=R8(c->r[31]+0x00000116u); // 800408E4
  c->r[0]=R8(c->r[30]+0x00000116u); // 800408E8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800408EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800408F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800408F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800408F8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800408FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80040900
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040904
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040908
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004090C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80040910
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80040914
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80040918
  W8(c->r[29]+0x00000116u,c->r[0]); // 8004091C
  c->r[3]=R8(c->r[31]+0x00000117u); // 80040920
  c->r[0]=R8(c->r[30]+0x00000117u); // 80040924
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80040928
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004092C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80040930
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80040934
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80040938
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004093C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040940
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040944
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040948
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004094C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[1]);} // 80040950
  c->r[0]=R32(c->r[1]+0x00000034u); // 80040954
  W8(c->r[29]+0x00000117u,c->r[0]); // 80040958
  {uint32_t ea=c->r[31]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004095C
  {uint32_t ea=c->r[30]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040960
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040964
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040968
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004096C
  {uint32_t ea=c->r[29]+0x00000130u; WF32(ea,c->f[1]);} // 80040970
  {uint32_t ea=c->r[31]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040974
  {uint32_t ea=c->r[30]+0x00000134u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040978
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004097C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040980
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040984
  {uint32_t ea=c->r[29]+0x00000134u; WF32(ea,c->f[1]);} // 80040988
  {uint32_t ea=c->r[31]+0x00000138u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004098C
  {uint32_t ea=c->r[30]+0x00000138u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040990
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040994
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040998
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004099C
  {uint32_t ea=c->r[29]+0x00000138u; WF32(ea,c->f[1]);} // 800409A0
  {uint32_t ea=c->r[31]+0x0000013Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800409A4
  {uint32_t ea=c->r[30]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800409A8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800409AC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800409B0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800409B4
  {uint32_t ea=c->r[29]+0x0000013Cu; WF32(ea,c->f[1]);} // 800409B8
  {uint32_t ea=c->r[31]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800409BC
  {uint32_t ea=c->r[30]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 800409C0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800409C4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800409C8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800409CC
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[1]);} // 800409D0
  {uint32_t ea=c->r[31]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800409D4
  {uint32_t ea=c->r[30]+0x00000144u; c->f[1]=c->ps1[1]=RF32(ea);} // 800409D8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800409DC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800409E0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800409E4
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[1]);} // 800409E8
  {uint32_t ea=c->r[31]+0x0000014Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800409EC
  {uint32_t ea=c->r[30]+0x0000014Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800409F0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800409F4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800409F8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800409FC
  {uint32_t ea=c->r[29]+0x0000014Cu; WF32(ea,c->f[1]);} // 80040A00
  {uint32_t ea=c->r[31]+0x00000150u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040A04
  {uint32_t ea=c->r[30]+0x00000150u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A08
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040A0C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040A10
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040A14
  {uint32_t ea=c->r[29]+0x00000150u; WF32(ea,c->f[1]);} // 80040A18
  {uint32_t ea=c->r[31]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040A1C
  {uint32_t ea=c->r[30]+0x00000154u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A20
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040A24
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040A28
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040A2C
  {uint32_t ea=c->r[29]+0x00000154u; WF32(ea,c->f[1]);} // 80040A30
  {uint32_t ea=c->r[31]+0x00000158u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040A34
  {uint32_t ea=c->r[30]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A38
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040A3C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040A40
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040A44
  {uint32_t ea=c->r[29]+0x00000158u; WF32(ea,c->f[1]);} // 80040A48
  {uint32_t ea=c->r[31]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80040A4C
  {uint32_t ea=c->r[30]+0x0000015Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A50
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040A54
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040A58
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040A5C
  {uint32_t ea=c->r[29]+0x0000015Cu; WF32(ea,c->f[1]);} // 80040A60
  {uint32_t ea=c->r[31]+0x00000160u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040A64
  {uint32_t ea=c->r[30]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A68
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040A6C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80040A70
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80040A74
  {uint32_t ea=c->r[29]+0x00000160u; WF32(ea,c->f[1]);} // 80040A78
  {uint32_t ea=c->r[31]+0x00000164u; c->f[2]=c->ps1[2]=RF32(ea);} // 80040A7C
  {uint32_t ea=c->r[30]+0x00000164u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040A80
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80040A84
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 80040A88
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80040A8C
  {uint32_t ea=c->r[29]+0x00000164u; WF32(ea,c->f[0]);} // 80040A90
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80040A94
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80040A98
  c->r[11]=c->r[1]+0x00000050u; // 80040A9C
  c->lr=0x80040AA4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80040AA0
  c->r[0]=R32(c->r[1]+0x00000064u); // 80040AA4
  c->lr=c->r[0]; // 80040AA8
  c->r[1]=c->r[1]+0x00000060u; // 80040AAC
  return; // 80040AB0
}

// fn_80040AB4
void f_80040AB4(Ctx* __restrict c) {
  trace_call(0x80040AB4u);
  c->r[3]=0u+0x0000017Cu; // 80040AB4
  return; // 80040AB8
}

// fn_80040ABC
void f_80040ABC(Ctx* __restrict c) {
  trace_call(0x80040ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040ABC
  c->r[0]=c->lr; // 80040AC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040AC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040AC8
  c->r[31]=c->r[3]|c->r[3]; // 80040ACC
  c->lr=0x80040AD4u; f_8003FEE4(c); // 80040AD0
  c->r[0]=R32(c->r[31]+0x00000008u); // 80040AD4
  c->r[3]=0u+0x80420000u; // 80040AD8
  c->r[3]=c->r[3]+0x00001008u; // 80040ADC
  W32(c->r[31]+0x00000018u,c->r[3]); // 80040AE0
  c->r[0]=c->r[0]|0x80000000u; // 80040AE4
  W32(c->r[31]+0x00000008u,c->r[0]); // 80040AE8
  c->r[3]=c->r[31]|c->r[31]; // 80040AEC
  c->r[12]=R32(c->r[31]+0x00000018u); // 80040AF0
  c->r[12]=R32(c->r[12]+0x00000024u); // 80040AF4
  c->ctr=c->r[12]; // 80040AF8
  if (true) { c->lr=0x80040B00u; dispatch(c,c->ctr); } // 80040AFC
  c->r[3]=c->r[31]|c->r[31]; // 80040B00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040B04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040B08
  c->lr=c->r[0]; // 80040B0C
  c->r[1]=c->r[1]+0x00000010u; // 80040B10
  return; // 80040B14
}

// fn_80040B18
void f_80040B18(Ctx* __restrict c) {
  trace_call(0x80040B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040B18
  c->r[0]=c->lr; // 80040B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80040B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040B24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80040B28
  c->r[30]=c->r[3]|c->r[3]; // 80040B2C
  c->r[31]=c->r[4]|c->r[4]; // 80040B30
  if (crb(c,2)) { goto L_80040B54; } // 80040B34
  if (crb(c,2)) { goto L_80040B44; } // 80040B38
  c->r[4]=0u+0x00000000u; // 80040B3C
  c->lr=0x80040B44u; f_8003ABE0(c); // 80040B40
L_80040B44:;
  cmps(c,0,(int32_t)c->r[31],0); // 80040B44
  if (!crb(c,1)) { goto L_80040B54; } // 80040B48
  c->r[3]=c->r[30]|c->r[30]; // 80040B4C
  c->lr=0x80040B54u; f_80244DC0(c); // 80040B50
L_80040B54:;
  c->r[3]=c->r[30]|c->r[30]; // 80040B54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80040B58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040B5C
  c->lr=c->r[0]; // 80040B60
  c->r[1]=c->r[1]+0x00000010u; // 80040B64
  return; // 80040B68
}

// fn_80040B6C
void f_80040B6C(Ctx* __restrict c) {
  trace_call(0x80040B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040B6C
  c->r[0]=c->lr; // 80040B70
  c->r[3]=0u+0x0000017Cu; // 80040B74
  c->r[4]=c->r[13]+0xFFFF8DFFu; // 80040B78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040B7C
  c->r[5]=0u+0x00000000u; // 80040B80
  c->r[6]=0u+0x00001001u; // 80040B84
  c->lr=0x80040B8Cu; f_80244D20(c); // 80040B88
  cmps(c,0,(int32_t)c->r[3],0); // 80040B8C
  if (crb(c,2)) { goto L_80040B98; } // 80040B90
  c->lr=0x80040B98u; f_80040ABC(c); // 80040B94
L_80040B98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040B98
  c->lr=c->r[0]; // 80040B9C
  c->r[1]=c->r[1]+0x00000010u; // 80040BA0
  return; // 80040BA4
}

// fn_80040BA8
void f_80040BA8(Ctx* __restrict c) {
  trace_call(0x80040BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040BA8
  c->r[0]=c->lr; // 80040BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040BB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040BB4
  c->r[31]=c->r[3]|c->r[3]; // 80040BB8
  c->lr=0x80040BC0u; f_80244520(c); // 80040BBC
  c->r[7]=c->r[3]|c->r[3]; // 80040BC0
  c->r[9]=c->r[31]|c->r[31]; // 80040BC4
  c->r[3]=0u+0x0000017Cu; // 80040BC8
  c->r[4]=c->r[13]+0xFFFF8E04u; // 80040BCC
  c->r[5]=0u+0x00000000u; // 80040BD0
  c->r[6]=0u+0x00002001u; // 80040BD4
  c->r[8]=0u+0x00000000u; // 80040BD8
  c->lr=0x80040BE0u; f_80242DF0(c); // 80040BDC
  c->r[4]=c->r[3]|c->r[3]; // 80040BE0
  c->r[3]=0u+0x0000017Cu; // 80040BE4
  c->r[5]=c->r[13]+0xFFFF8E09u; // 80040BE8
  c->r[6]=0u+0x00000000u; // 80040BEC
  c->r[7]=0u+0x00001001u; // 80040BF0
  c->lr=0x80040BF8u; f_80244DB0(c); // 80040BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80040BF8
  if (crb(c,2)) { goto L_80040C04; } // 80040BFC
  c->lr=0x80040C04u; f_80040ABC(c); // 80040C00
L_80040C04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040C08
  c->lr=c->r[0]; // 80040C0C
  c->r[1]=c->r[1]+0x00000010u; // 80040C10
  return; // 80040C14
}

// fn_80040C18
void f_80040C18(Ctx* __restrict c) {
  trace_call(0x80040C18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040C18
  c->r[0]=c->lr; // 80040C1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040C20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040C24
  c->r[31]=c->r[3]|c->r[3]; // 80040C28
  c->lr=0x80040C30u; f_8003ACE0(c); // 80040C2C
  c->r[7]=0u+0x80420000u; // 80040C30
  c->r[6]=0u+0x80410000u; // 80040C34
  c->r[5]=0u+0x00000000u; // 80040C38
  c->r[4]=0u+0xBB240000u; // 80040C3C
  c->r[3]=0u+0xCD940000u; // 80040C40
  c->r[7]=c->r[7]+0x00000FCCu; // 80040C44
  c->r[0]=c->r[3]+0xFFFFF561u; // 80040C48
  c->r[6]=c->r[6]+0xFFFFBAD7u; // 80040C4C
  c->r[4]=c->r[4]+0x0000127Eu; // 80040C50
  W32(c->r[31]+0x00000018u,c->r[7]); // 80040C54
  c->r[3]=c->r[31]|c->r[31]; // 80040C58
  W32(c->r[31]+0x00000000u,c->r[6]); // 80040C5C
  W32(c->r[31]+0x00000008u,c->r[5]); // 80040C60
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80040C64
  W32(c->r[31]+0x00000010u,c->r[5]); // 80040C68
  W32(c->r[31]+0x00000004u,c->r[0]); // 80040C6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040C70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040C74
  c->lr=c->r[0]; // 80040C78
  c->r[1]=c->r[1]+0x00000010u; // 80040C7C
  return; // 80040C80
}

// fn_80040C84
void f_80040C84(Ctx* __restrict c) {
  trace_call(0x80040C84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040C84
  c->r[0]=c->lr; // 80040C88
  cmps(c,0,(int32_t)c->r[4],0); // 80040C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040C90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80040C94
  c->r[30]=c->r[3]|c->r[3]; // 80040C98
  c->r[31]=c->r[4]|c->r[4]; // 80040C9C
  if (crb(c,2)) { goto L_80040CF4; } // 80040CA0
  c->r[3]=c->r[31]|c->r[31]; // 80040CA4
  c->lr=0x80040CACu; f_80244520(c); // 80040CA8
  c->r[7]=c->r[3]|c->r[3]; // 80040CAC
  c->r[9]=c->r[31]|c->r[31]; // 80040CB0
  c->r[3]=0u+0x000000F0u; // 80040CB4
  c->r[4]=c->r[13]+0xFFFF8E0Eu; // 80040CB8
  c->r[5]=0u+0x00000000u; // 80040CBC
  c->r[6]=0u+0x00002001u; // 80040CC0
  c->r[8]=0u+0x00000000u; // 80040CC4
  c->lr=0x80040CCCu; f_80242DF0(c); // 80040CC8
  c->r[4]=c->r[3]|c->r[3]; // 80040CCC
  c->r[3]=0u+0x000000F0u; // 80040CD0
  c->r[5]=c->r[13]+0xFFFF8E13u; // 80040CD4
  c->r[6]=0u+0x00000000u; // 80040CD8
  c->r[7]=0u+0x00001001u; // 80040CDC
  c->lr=0x80040CE4u; f_80244DB0(c); // 80040CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80040CE4
  if (crb(c,2)) { goto L_80040D14; } // 80040CE8
  c->lr=0x80040CF0u; f_80040C18(c); // 80040CEC
  goto L_80040D14; // 80040CF0
L_80040CF4:;
  c->r[3]=0u+0x000000F0u; // 80040CF4
  c->r[4]=c->r[13]+0xFFFF8E18u; // 80040CF8
  c->r[5]=0u+0x00000000u; // 80040CFC
  c->r[6]=0u+0x00001001u; // 80040D00
  c->lr=0x80040D08u; f_80244D20(c); // 80040D04
  cmps(c,0,(int32_t)c->r[3],0); // 80040D08
  if (crb(c,2)) { goto L_80040D14; } // 80040D0C
  c->lr=0x80040D14u; f_80040C18(c); // 80040D10
L_80040D14:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80040D14
  W16(c->r[3]+0x00000014u,c->r[0]); // 80040D18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80040D1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040D20
  c->lr=c->r[0]; // 80040D24
  c->r[1]=c->r[1]+0x00000010u; // 80040D28
  return; // 80040D2C
}

// fn_80040D30
void f_80040D30(Ctx* __restrict c) {
  trace_call(0x80040D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040D30
  c->r[0]=c->lr; // 80040D34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80040D38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80040D3C
  c->r[29]=c->r[3]|c->r[3]; // 80040D40
  c->r[30]=c->r[4]|c->r[4]; // 80040D44
  c->lr=0x80040D4Cu; f_8003AE00(c); // 80040D48
  c->r[31]=c->r[3]|c->r[3]; // 80040D4C
  c->r[3]=c->r[30]|c->r[30]; // 80040D50
  c->lr=0x80040D58u; f_8030C0A0(c); // 80040D54
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 80040D58
  c->r[3]=c->r[30]|c->r[30]; // 80040D5C
  c->lr=0x80040D64u; f_8030C0A0(c); // 80040D60
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 80040D64
  c->r[3]=c->r[30]|c->r[30]; // 80040D68
  c->lr=0x80040D70u; f_8030BD1C(c); // 80040D6C
  W8(c->r[29]+0x000000ECu,c->r[3]); // 80040D70
  c->r[3]=c->r[31]|c->r[31]; // 80040D74
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80040D78
  c->r[0]=R32(c->r[1]+0x00000024u); // 80040D7C
  c->lr=c->r[0]; // 80040D80
  c->r[1]=c->r[1]+0x00000020u; // 80040D84
  return; // 80040D88
}

// fn_80040D8C
void f_80040D8C(Ctx* __restrict c) {
  trace_call(0x80040D8Cu);
  f_80038EC8(c); return; // 80040D8C
}

// fn_80040D90
void f_80040D90(Ctx* __restrict c) {
  trace_call(0x80040D90u);
  cmps(c,0,(int32_t)c->r[6],0); // 80040D90
  if (!crb(c,2)) return; // 80040D94
  f_8003AF18(c); return; // 80040D98
  return; // 80040D9C
}

// fn_80040DA0
void f_80040DA0(Ctx* __restrict c) {
  trace_call(0x80040DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040DA0
  c->r[0]=c->lr; // 80040DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040DAC
  c->r[31]=c->r[3]|c->r[3]; // 80040DB0
  c->lr=0x80040DB8u; f_8003AF68(c); // 80040DB4
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040DB8
  c->r[0]=0u+0x00000000u; // 80040DBC
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80040DC0
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 80040DC4
  W8(c->r[31]+0x000000ECu,c->r[0]); // 80040DC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040DCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040DD0
  c->lr=c->r[0]; // 80040DD4
  c->r[1]=c->r[1]+0x00000010u; // 80040DD8
  return; // 80040DDC
}

// fn_80040DE0
void f_80040DE0(Ctx* __restrict c) {
  trace_call(0x80040DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040DE0
  c->r[0]=c->lr; // 80040DE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80040DE8
  c->r[11]=c->r[1]+0x00000020u; // 80040DEC
  c->lr=0x80040DF4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80040DF0
  c->r[29]=c->r[3]|c->r[3]; // 80040DF4
  c->r[30]=c->r[4]|c->r[4]; // 80040DF8
  c->r[31]=c->r[5]|c->r[5]; // 80040DFC
  c->r[6]=0u+0x00000000u; // 80040E00
  c->lr=0x80040E08u; f_8003AFFC(c); // 80040E04
  cmps(c,0,(int32_t)c->r[31],0); // 80040E08
  if (crb(c,2)) { goto L_80040E14; } // 80040E0C
  goto L_80040E18; // 80040E10
L_80040E14:;
  c->r[31]=c->r[29]|c->r[29]; // 80040E14
L_80040E18:;
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040E18
  c->r[11]=c->r[1]+0x00000020u; // 80040E1C
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80040E20
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040E24
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 80040E28
  c->r[0]=R8(c->r[30]+0x000000ECu); // 80040E2C
  W8(c->r[31]+0x000000ECu,c->r[0]); // 80040E30
  c->lr=0x80040E38u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80040E34
  c->r[0]=R32(c->r[1]+0x00000024u); // 80040E38
  c->lr=c->r[0]; // 80040E3C
  c->r[1]=c->r[1]+0x00000020u; // 80040E40
  return; // 80040E44
}

// fn_80040E48
void f_80040E48(Ctx* __restrict c) {
  trace_call(0x80040E48u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 80040E48
  cmpu(c,0,c->r[0],0x0000DF21u); // 80040E4C
  if (!crb(c,2)) { goto L_80040E5C; } // 80040E50
  c->r[3]=0u+0x00000001u; // 80040E54
  return; // 80040E58
L_80040E5C:;
  c->r[0]=c->r[4]+0x05C00000u; // 80040E5C
  cmpu(c,0,c->r[0],0x00000802u); // 80040E60
  if (!crb(c,2)) { goto L_80040E70; } // 80040E64
  c->r[3]=0u+0x00000001u; // 80040E68
  return; // 80040E6C
L_80040E70:;
  c->r[3]=0u+0xD12F0000u; // 80040E70
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80040E74
  c->r[0]=c->r[4]-c->r[0]; // 80040E78
  c->r[0]=cntlz(c->r[0]); // 80040E7C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80040E80
  return; // 80040E84
}

// fn_80040E88
void f_80040E88(Ctx* __restrict c) {
  trace_call(0x80040E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040E88
  c->r[0]=c->lr; // 80040E8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80040E90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80040E94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80040E98
  c->r[11]=c->r[1]+0x00000020u; // 80040E9C
  c->lr=0x80040EA4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80040EA0
  c->f[31]=c->f[1]; // 80040EA4
  c->r[29]=c->r[3]|c->r[3]; // 80040EA8
  c->r[31]=c->r[4]|c->r[4]; // 80040EAC
  c->r[30]=c->r[5]|c->r[5]; // 80040EB0
  c->lr=0x80040EB8u; f_8003B104(c); // 80040EB4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80040EB8
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040EBC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 80040EC0
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040EC4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80040EC8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80040ECC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80040ED0
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[0]);} // 80040ED4
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80040ED8
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80040EDC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80040EE0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80040EE4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80040EE8
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 80040EEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80040EF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80040EF4
  c->r[11]=c->r[1]+0x00000020u; // 80040EF8
  c->lr=0x80040F00u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80040EFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80040F00
  c->lr=c->r[0]; // 80040F04
  c->r[1]=c->r[1]+0x00000030u; // 80040F08
  return; // 80040F0C
}

// fn_80040F10
void f_80040F10(Ctx* __restrict c) {
  trace_call(0x80040F10u);
  c->r[3]=0u+0x000000F0u; // 80040F10
  return; // 80040F14
}

// fn_80040F18
void f_80040F18(Ctx* __restrict c) {
  trace_call(0x80040F18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040F18
  c->r[0]=c->lr; // 80040F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040F20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80040F24
  c->r[31]=c->r[3]|c->r[3]; // 80040F28
  c->lr=0x80040F30u; f_80040C18(c); // 80040F2C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80040F30
  c->r[3]=0u+0x80420000u; // 80040F34
  c->r[3]=c->r[3]+0x00000F8Cu; // 80040F38
  W32(c->r[31]+0x00000018u,c->r[3]); // 80040F3C
  c->r[0]=c->r[0]|0x80000000u; // 80040F40
  W32(c->r[31]+0x00000008u,c->r[0]); // 80040F44
  c->r[3]=c->r[31]|c->r[31]; // 80040F48
  c->r[12]=R32(c->r[31]+0x00000018u); // 80040F4C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80040F50
  c->ctr=c->r[12]; // 80040F54
  if (true) { c->lr=0x80040F5Cu; dispatch(c,c->ctr); } // 80040F58
  c->r[3]=c->r[31]|c->r[31]; // 80040F5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80040F60
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040F64
  c->lr=c->r[0]; // 80040F68
  c->r[1]=c->r[1]+0x00000010u; // 80040F6C
  return; // 80040F70
}

// fn_80040F74
void f_80040F74(Ctx* __restrict c) {
  trace_call(0x80040F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040F74
  c->r[0]=c->lr; // 80040F78
  cmps(c,0,(int32_t)c->r[3],0); // 80040F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040F80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80040F84
  c->r[30]=c->r[3]|c->r[3]; // 80040F88
  c->r[31]=c->r[4]|c->r[4]; // 80040F8C
  if (crb(c,2)) { goto L_80040FB0; } // 80040F90
  if (crb(c,2)) { goto L_80040FA0; } // 80040F94
  c->r[4]=0u+0x00000000u; // 80040F98
  c->lr=0x80040FA0u; f_8003ABE0(c); // 80040F9C
L_80040FA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80040FA0
  if (!crb(c,1)) { goto L_80040FB0; } // 80040FA4
  c->r[3]=c->r[30]|c->r[30]; // 80040FA8
  c->lr=0x80040FB0u; f_80244DC0(c); // 80040FAC
L_80040FB0:;
  c->r[3]=c->r[30]|c->r[30]; // 80040FB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80040FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040FB8
  c->lr=c->r[0]; // 80040FBC
  c->r[1]=c->r[1]+0x00000010u; // 80040FC0
  return; // 80040FC4
}

// fn_80040FC8
void f_80040FC8(Ctx* __restrict c) {
  trace_call(0x80040FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80040FC8
  c->r[0]=c->lr; // 80040FCC
  c->r[3]=0u+0x000000F0u; // 80040FD0
  c->r[4]=c->r[13]+0xFFFF8E1Du; // 80040FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80040FD8
  c->r[5]=0u+0x00000000u; // 80040FDC
  c->r[6]=0u+0x00001001u; // 80040FE0
  c->lr=0x80040FE8u; f_80244D20(c); // 80040FE4
  cmps(c,0,(int32_t)c->r[3],0); // 80040FE8
  if (crb(c,2)) { goto L_80040FF4; } // 80040FEC
  c->lr=0x80040FF4u; f_80040F18(c); // 80040FF0
L_80040FF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80040FF4
  c->lr=c->r[0]; // 80040FF8
  c->r[1]=c->r[1]+0x00000010u; // 80040FFC
  return; // 80041000
}

// fn_80041004
void f_80041004(Ctx* __restrict c) {
  trace_call(0x80041004u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041004
  c->r[0]=c->lr; // 80041008
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004100C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041010
  c->r[31]=c->r[3]|c->r[3]; // 80041014
  c->lr=0x8004101Cu; f_80244520(c); // 80041018
  c->r[7]=c->r[3]|c->r[3]; // 8004101C
  c->r[9]=c->r[31]|c->r[31]; // 80041020
  c->r[3]=0u+0x000000F0u; // 80041024
  c->r[4]=c->r[13]+0xFFFF8E22u; // 80041028
  c->r[5]=0u+0x00000000u; // 8004102C
  c->r[6]=0u+0x00002001u; // 80041030
  c->r[8]=0u+0x00000000u; // 80041034
  c->lr=0x8004103Cu; f_80242DF0(c); // 80041038
  c->r[4]=c->r[3]|c->r[3]; // 8004103C
  c->r[3]=0u+0x000000F0u; // 80041040
  c->r[5]=c->r[13]+0xFFFF8E27u; // 80041044
  c->r[6]=0u+0x00000000u; // 80041048
  c->r[7]=0u+0x00001001u; // 8004104C
  c->lr=0x80041054u; f_80244DB0(c); // 80041050
  cmps(c,0,(int32_t)c->r[3],0); // 80041054
  if (crb(c,2)) { goto L_80041060; } // 80041058
  c->lr=0x80041060u; f_80040F18(c); // 8004105C
L_80041060:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041064
  c->lr=c->r[0]; // 80041068
  c->r[1]=c->r[1]+0x00000010u; // 8004106C
  return; // 80041070
}

// fn_80041074
void f_80041074(Ctx* __restrict c) {
  trace_call(0x80041074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041074
  c->r[0]=c->lr; // 80041078
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004107C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041080
  c->r[31]=c->r[3]|c->r[3]; // 80041084
  c->lr=0x8004108Cu; f_8003ACE0(c); // 80041088
  c->r[8]=0u+0x80420000u; // 8004108C
  c->r[7]=0u+0x80410000u; // 80041090
  c->r[5]=0u+0xBD6C0000u; // 80041094
  c->r[4]=0u+0xE4B10000u; // 80041098
  c->r[3]=0u+0x5D0A0000u; // 8004109C
  c->r[8]=c->r[8]+0x00000F50u; // 800410A0
  c->r[0]=c->r[3]+0xFFFFB663u; // 800410A4
  c->r[7]=c->r[7]+0xFFFFBAEFu; // 800410A8
  c->r[5]=c->r[5]+0xFFFFDC86u; // 800410AC
  c->r[4]=c->r[4]+0xFFFFD7B6u; // 800410B0
  c->r[6]=0u+0x00000000u; // 800410B4
  W32(c->r[31]+0x00000018u,c->r[8]); // 800410B8
  c->r[3]=c->r[31]|c->r[31]; // 800410BC
  W32(c->r[31]+0x00000000u,c->r[7]); // 800410C0
  W32(c->r[31]+0x00000008u,c->r[6]); // 800410C4
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800410C8
  W32(c->r[31]+0x00000010u,c->r[4]); // 800410CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800410D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800410D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800410D8
  c->lr=c->r[0]; // 800410DC
  c->r[1]=c->r[1]+0x00000010u; // 800410E0
  return; // 800410E4
}

// fn_800410E8
void f_800410E8(Ctx* __restrict c) {
  trace_call(0x800410E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800410E8
  c->r[0]=c->lr; // 800410EC
  cmps(c,0,(int32_t)c->r[4],0); // 800410F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800410F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800410F8
  c->r[30]=c->r[3]|c->r[3]; // 800410FC
  c->r[31]=c->r[4]|c->r[4]; // 80041100
  if (crb(c,2)) { goto L_80041158; } // 80041104
  c->r[3]=c->r[31]|c->r[31]; // 80041108
  c->lr=0x80041110u; f_80244520(c); // 8004110C
  c->r[7]=c->r[3]|c->r[3]; // 80041110
  c->r[9]=c->r[31]|c->r[31]; // 80041114
  c->r[3]=0u+0x000000E4u; // 80041118
  c->r[4]=c->r[13]+0xFFFF8E2Cu; // 8004111C
  c->r[5]=0u+0x00000000u; // 80041120
  c->r[6]=0u+0x00002001u; // 80041124
  c->r[8]=0u+0x00000000u; // 80041128
  c->lr=0x80041130u; f_80242DF0(c); // 8004112C
  c->r[4]=c->r[3]|c->r[3]; // 80041130
  c->r[3]=0u+0x000000E4u; // 80041134
  c->r[5]=c->r[13]+0xFFFF8E31u; // 80041138
  c->r[6]=0u+0x00000000u; // 8004113C
  c->r[7]=0u+0x00001001u; // 80041140
  c->lr=0x80041148u; f_80244DB0(c); // 80041144
  cmps(c,0,(int32_t)c->r[3],0); // 80041148
  if (crb(c,2)) { goto L_80041178; } // 8004114C
  c->lr=0x80041154u; f_80041074(c); // 80041150
  goto L_80041178; // 80041154
L_80041158:;
  c->r[3]=0u+0x000000E4u; // 80041158
  c->r[4]=c->r[13]+0xFFFF8E36u; // 8004115C
  c->r[5]=0u+0x00000000u; // 80041160
  c->r[6]=0u+0x00001001u; // 80041164
  c->lr=0x8004116Cu; f_80244D20(c); // 80041168
  cmps(c,0,(int32_t)c->r[3],0); // 8004116C
  if (crb(c,2)) { goto L_80041178; } // 80041170
  c->lr=0x80041178u; f_80041074(c); // 80041174
L_80041178:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80041178
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004117C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80041180
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041184
  c->lr=c->r[0]; // 80041188
  c->r[1]=c->r[1]+0x00000010u; // 8004118C
  return; // 80041190
}

// fn_80041194
void f_80041194(Ctx* __restrict c) {
  trace_call(0x80041194u);
  f_8003AE00(c); return; // 80041194
}

// fn_80041198
void f_80041198(Ctx* __restrict c) {
  trace_call(0x80041198u);
  f_80038EC8(c); return; // 80041198
}

// fn_8004119C
void f_8004119C(Ctx* __restrict c) {
  trace_call(0x8004119Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 8004119C
  if (!crb(c,2)) return; // 800411A0
  f_8003AF18(c); return; // 800411A4
  return; // 800411A8
}

// fn_800411AC
void f_800411AC(Ctx* __restrict c) {
  trace_call(0x800411ACu);
  f_8003AF68(c); return; // 800411AC
}

// fn_800411B0
void f_800411B0(Ctx* __restrict c) {
  trace_call(0x800411B0u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 800411B0
  cmpu(c,0,c->r[0],0x0000DF21u); // 800411B4
  if (!crb(c,2)) { goto L_800411C4; } // 800411B8
  c->r[3]=0u+0x00000001u; // 800411BC
  return; // 800411C0
L_800411C4:;
  c->r[0]=c->r[4]+0x05C00000u; // 800411C4
  cmpu(c,0,c->r[0],0x00000802u); // 800411C8
  if (!crb(c,2)) { goto L_800411D8; } // 800411CC
  c->r[3]=0u+0x00000001u; // 800411D0
  return; // 800411D4
L_800411D8:;
  c->r[3]=0u+0xD12F0000u; // 800411D8
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 800411DC
  c->r[0]=c->r[4]-c->r[0]; // 800411E0
  c->r[0]=cntlz(c->r[0]); // 800411E4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800411E8
  return; // 800411EC
}

// fn_800411F0
void f_800411F0(Ctx* __restrict c) {
  trace_call(0x800411F0u);
  f_8003B104(c); return; // 800411F0
}

// fn_800411F4
void f_800411F4(Ctx* __restrict c) {
  trace_call(0x800411F4u);
  c->r[3]=0u+0x000000E4u; // 800411F4
  return; // 800411F8
}

// fn_800411FC
void f_800411FC(Ctx* __restrict c) {
  trace_call(0x800411FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800411FC
  c->r[0]=c->lr; // 80041200
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041208
  c->r[31]=c->r[3]|c->r[3]; // 8004120C
  c->lr=0x80041214u; f_80041074(c); // 80041210
  c->r[0]=R32(c->r[31]+0x00000008u); // 80041214
  c->r[3]=0u+0x80420000u; // 80041218
  c->r[3]=c->r[3]+0x00000F10u; // 8004121C
  W32(c->r[31]+0x00000018u,c->r[3]); // 80041220
  c->r[0]=c->r[0]|0x80000000u; // 80041224
  W32(c->r[31]+0x00000008u,c->r[0]); // 80041228
  c->r[3]=c->r[31]|c->r[31]; // 8004122C
  c->r[12]=R32(c->r[31]+0x00000018u); // 80041230
  c->r[12]=R32(c->r[12]+0x00000024u); // 80041234
  c->ctr=c->r[12]; // 80041238
  if (true) { c->lr=0x80041240u; dispatch(c,c->ctr); } // 8004123C
  c->r[3]=c->r[31]|c->r[31]; // 80041240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041244
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041248
  c->lr=c->r[0]; // 8004124C
  c->r[1]=c->r[1]+0x00000010u; // 80041250
  return; // 80041254
}

// fn_80041258
void f_80041258(Ctx* __restrict c) {
  trace_call(0x80041258u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041258
  c->r[0]=c->lr; // 8004125C
  cmps(c,0,(int32_t)c->r[3],0); // 80041260
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041264
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80041268
  c->r[30]=c->r[3]|c->r[3]; // 8004126C
  c->r[31]=c->r[4]|c->r[4]; // 80041270
  if (crb(c,2)) { goto L_80041294; } // 80041274
  if (crb(c,2)) { goto L_80041284; } // 80041278
  c->r[4]=0u+0x00000000u; // 8004127C
  c->lr=0x80041284u; f_8003ABE0(c); // 80041280
L_80041284:;
  cmps(c,0,(int32_t)c->r[31],0); // 80041284
  if (!crb(c,1)) { goto L_80041294; } // 80041288
  c->r[3]=c->r[30]|c->r[30]; // 8004128C
  c->lr=0x80041294u; f_80244DC0(c); // 80041290
L_80041294:;
  c->r[3]=c->r[30]|c->r[30]; // 80041294
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80041298
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004129C
  c->lr=c->r[0]; // 800412A0
  c->r[1]=c->r[1]+0x00000010u; // 800412A4
  return; // 800412A8
}

// fn_800412AC
void f_800412AC(Ctx* __restrict c) {
  trace_call(0x800412ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800412AC
  c->r[0]=c->lr; // 800412B0
  c->r[3]=0u+0x000000E4u; // 800412B4
  c->r[4]=c->r[13]+0xFFFF8E3Bu; // 800412B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800412BC
  c->r[5]=0u+0x00000000u; // 800412C0
  c->r[6]=0u+0x00001001u; // 800412C4
  c->lr=0x800412CCu; f_80244D20(c); // 800412C8
  cmps(c,0,(int32_t)c->r[3],0); // 800412CC
  if (crb(c,2)) { goto L_800412D8; } // 800412D0
  c->lr=0x800412D8u; f_800411FC(c); // 800412D4
L_800412D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800412D8
  c->lr=c->r[0]; // 800412DC
  c->r[1]=c->r[1]+0x00000010u; // 800412E0
  return; // 800412E4
}

// fn_800412E8
void f_800412E8(Ctx* __restrict c) {
  trace_call(0x800412E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800412E8
  c->r[0]=c->lr; // 800412EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800412F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800412F4
  c->r[31]=c->r[3]|c->r[3]; // 800412F8
  c->lr=0x80041300u; f_80244520(c); // 800412FC
  c->r[7]=c->r[3]|c->r[3]; // 80041300
  c->r[9]=c->r[31]|c->r[31]; // 80041304
  c->r[3]=0u+0x000000E4u; // 80041308
  c->r[4]=c->r[13]+0xFFFF8E40u; // 8004130C
  c->r[5]=0u+0x00000000u; // 80041310
  c->r[6]=0u+0x00002001u; // 80041314
  c->r[8]=0u+0x00000000u; // 80041318
  c->lr=0x80041320u; f_80242DF0(c); // 8004131C
  c->r[4]=c->r[3]|c->r[3]; // 80041320
  c->r[3]=0u+0x000000E4u; // 80041324
  c->r[5]=c->r[13]+0xFFFF8E45u; // 80041328
  c->r[6]=0u+0x00000000u; // 8004132C
  c->r[7]=0u+0x00001001u; // 80041330
  c->lr=0x80041338u; f_80244DB0(c); // 80041334
  cmps(c,0,(int32_t)c->r[3],0); // 80041338
  if (crb(c,2)) { goto L_80041344; } // 8004133C
  c->lr=0x80041344u; f_800411FC(c); // 80041340
L_80041344:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041344
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041348
  c->lr=c->r[0]; // 8004134C
  c->r[1]=c->r[1]+0x00000010u; // 80041350
  return; // 80041354
}

// fn_80041358
void f_80041358(Ctx* __restrict c) {
  trace_call(0x80041358u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041358
  c->r[0]=c->lr; // 8004135C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041364
  c->r[31]=c->r[3]|c->r[3]; // 80041368
  c->lr=0x80041370u; f_8003ACE0(c); // 8004136C
  c->r[8]=0u+0x80420000u; // 80041370
  c->r[7]=0u+0x80410000u; // 80041374
  c->r[5]=0u+0xB1160000u; // 80041378
  c->r[4]=0u+0x08BE0000u; // 8004137C
  c->r[3]=0u+0xAD170000u; // 80041380
  c->r[8]=c->r[8]+0x00000ED4u; // 80041384
  c->r[0]=c->r[3]+0x00004960u; // 80041388
  c->r[7]=c->r[7]+0xFFFFBB01u; // 8004138C
  c->r[5]=c->r[5]+0xFFFFBB69u; // 80041390
  c->r[4]=c->r[4]+0xFFFF8C87u; // 80041394
  c->r[6]=0u+0x00000000u; // 80041398
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004139C
  c->r[3]=c->r[31]|c->r[31]; // 800413A0
  W32(c->r[31]+0x00000000u,c->r[7]); // 800413A4
  W32(c->r[31]+0x00000008u,c->r[6]); // 800413A8
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800413AC
  W32(c->r[31]+0x00000010u,c->r[4]); // 800413B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800413B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800413B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800413BC
  c->lr=c->r[0]; // 800413C0
  c->r[1]=c->r[1]+0x00000010u; // 800413C4
  return; // 800413C8
}

// fn_800413CC
void f_800413CC(Ctx* __restrict c) {
  trace_call(0x800413CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800413CC
  c->r[0]=c->lr; // 800413D0
  cmps(c,0,(int32_t)c->r[4],0); // 800413D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800413D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800413DC
  c->r[30]=c->r[3]|c->r[3]; // 800413E0
  c->r[31]=c->r[4]|c->r[4]; // 800413E4
  if (crb(c,2)) { goto L_8004143C; } // 800413E8
  c->r[3]=c->r[31]|c->r[31]; // 800413EC
  c->lr=0x800413F4u; f_80244520(c); // 800413F0
  c->r[7]=c->r[3]|c->r[3]; // 800413F4
  c->r[9]=c->r[31]|c->r[31]; // 800413F8
  c->r[3]=0u+0x0000012Cu; // 800413FC
  c->r[4]=c->r[13]+0xFFFF8E4Au; // 80041400
  c->r[5]=0u+0x00000000u; // 80041404
  c->r[6]=0u+0x00002001u; // 80041408
  c->r[8]=0u+0x00000000u; // 8004140C
  c->lr=0x80041414u; f_80242DF0(c); // 80041410
  c->r[4]=c->r[3]|c->r[3]; // 80041414
  c->r[3]=0u+0x0000012Cu; // 80041418
  c->r[5]=c->r[13]+0xFFFF8E4Fu; // 8004141C
  c->r[6]=0u+0x00000000u; // 80041420
  c->r[7]=0u+0x00001001u; // 80041424
  c->lr=0x8004142Cu; f_80244DB0(c); // 80041428
  cmps(c,0,(int32_t)c->r[3],0); // 8004142C
  if (crb(c,2)) { goto L_8004145C; } // 80041430
  c->lr=0x80041438u; f_80041358(c); // 80041434
  goto L_8004145C; // 80041438
L_8004143C:;
  c->r[3]=0u+0x0000012Cu; // 8004143C
  c->r[4]=c->r[13]+0xFFFF8E54u; // 80041440
  c->r[5]=0u+0x00000000u; // 80041444
  c->r[6]=0u+0x00001001u; // 80041448
  c->lr=0x80041450u; f_80244D20(c); // 8004144C
  cmps(c,0,(int32_t)c->r[3],0); // 80041450
  if (crb(c,2)) { goto L_8004145C; } // 80041454
  c->lr=0x8004145Cu; f_80041358(c); // 80041458
L_8004145C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004145C
  W16(c->r[3]+0x00000014u,c->r[0]); // 80041460
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80041464
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041468
  c->lr=c->r[0]; // 8004146C
  c->r[1]=c->r[1]+0x00000010u; // 80041470
  return; // 80041474
}

// fn_80041478
void f_80041478(Ctx* __restrict c) {
  trace_call(0x80041478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041478
  c->r[0]=c->lr; // 8004147C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80041480
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80041484
  c->r[29]=c->r[3]|c->r[3]; // 80041488
  c->r[30]=c->r[4]|c->r[4]; // 8004148C
  c->lr=0x80041494u; f_8003AE00(c); // 80041490
  c->r[31]=c->r[3]|c->r[3]; // 80041494
  c->r[3]=c->r[30]|c->r[30]; // 80041498
  c->lr=0x800414A0u; f_8030BD1C(c); // 8004149C
  c->r[4]=c->r[3]|c->r[3]; // 800414A0
  c->r[3]=c->r[30]|c->r[30]; // 800414A4
  c->lr=0x800414ACu; f_8030C2D8(c); // 800414A8
  W32(c->r[29]+0x000000E4u,c->r[3]); // 800414AC
  c->r[3]=c->r[30]|c->r[30]; // 800414B0
  c->lr=0x800414B8u; f_8030BD1C(c); // 800414B4
  c->r[4]=c->r[3]|c->r[3]; // 800414B8
  c->r[3]=c->r[30]|c->r[30]; // 800414BC
  c->lr=0x800414C4u; f_8030C2D8(c); // 800414C0
  W32(c->r[29]+0x000000E8u,c->r[3]); // 800414C4
  c->r[3]=c->r[30]|c->r[30]; // 800414C8
  c->r[4]=0u+0x00000000u; // 800414CC
  c->lr=0x800414D4u; f_8030BE30(c); // 800414D0
  W32(c->r[29]+0x000000ECu,c->r[3]); // 800414D4
  c->r[3]=c->r[30]|c->r[30]; // 800414D8
  c->lr=0x800414E0u; f_8030BD1C(c); // 800414DC
  W32(c->r[29]+0x000000F0u,c->r[3]); // 800414E0
  c->r[3]=c->r[30]|c->r[30]; // 800414E4
  c->lr=0x800414ECu; f_8030BD1C(c); // 800414E8
  W8(c->r[29]+0x000000F8u,c->r[3]); // 800414EC
  c->r[3]=c->r[30]|c->r[30]; // 800414F0
  c->lr=0x800414F8u; f_8030BD1C(c); // 800414F4
  W8(c->r[29]+0x000000F9u,c->r[3]); // 800414F8
  c->r[3]=c->r[30]|c->r[30]; // 800414FC
  c->lr=0x80041504u; f_8030C0A0(c); // 80041500
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 80041504
  c->r[3]=c->r[30]|c->r[30]; // 80041508
  c->lr=0x80041510u; f_8030BD1C(c); // 8004150C
  W8(c->r[29]+0x00000100u,c->r[3]); // 80041510
  c->r[3]=c->r[30]|c->r[30]; // 80041514
  c->lr=0x8004151Cu; f_8030BD1C(c); // 80041518
  W8(c->r[29]+0x00000101u,c->r[3]); // 8004151C
  c->r[3]=c->r[30]|c->r[30]; // 80041520
  c->lr=0x80041528u; f_8030BD1C(c); // 80041524
  W8(c->r[29]+0x00000102u,c->r[3]); // 80041528
  c->r[3]=c->r[30]|c->r[30]; // 8004152C
  c->lr=0x80041534u; f_8030BD1C(c); // 80041530
  W8(c->r[29]+0x00000103u,c->r[3]); // 80041534
  c->r[3]=c->r[30]|c->r[30]; // 80041538
  c->lr=0x80041540u; f_8030C0A0(c); // 8004153C
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 80041540
  c->r[3]=c->r[30]|c->r[30]; // 80041544
  c->lr=0x8004154Cu; f_8030BD1C(c); // 80041548
  W8(c->r[29]+0x00000108u,c->r[3]); // 8004154C
  c->r[3]=c->r[30]|c->r[30]; // 80041550
  c->lr=0x80041558u; f_8030BD1C(c); // 80041554
  W8(c->r[29]+0x00000109u,c->r[3]); // 80041558
  c->r[3]=c->r[30]|c->r[30]; // 8004155C
  c->lr=0x80041564u; f_8030C0A0(c); // 80041560
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 80041564
  c->r[3]=c->r[30]|c->r[30]; // 80041568
  c->lr=0x80041570u; f_8030BD1C(c); // 8004156C
  W8(c->r[29]+0x00000110u,c->r[3]); // 80041570
  c->r[3]=c->r[30]|c->r[30]; // 80041574
  c->lr=0x8004157Cu; f_8030BD1C(c); // 80041578
  W8(c->r[29]+0x00000111u,c->r[3]); // 8004157C
  c->r[3]=c->r[30]|c->r[30]; // 80041580
  c->lr=0x80041588u; f_8030BD1C(c); // 80041584
  W8(c->r[29]+0x00000112u,c->r[3]); // 80041588
  c->r[3]=c->r[30]|c->r[30]; // 8004158C
  c->lr=0x80041594u; f_8030BD1C(c); // 80041590
  W8(c->r[29]+0x00000113u,c->r[3]); // 80041594
  c->r[3]=c->r[30]|c->r[30]; // 80041598
  c->lr=0x800415A0u; f_8030BD1C(c); // 8004159C
  W8(c->r[29]+0x00000114u,c->r[3]); // 800415A0
  c->r[3]=c->r[30]|c->r[30]; // 800415A4
  c->lr=0x800415ACu; f_8030BD1C(c); // 800415A8
  W8(c->r[29]+0x00000115u,c->r[3]); // 800415AC
  c->r[3]=c->r[30]|c->r[30]; // 800415B0
  c->lr=0x800415B8u; f_8030BD1C(c); // 800415B4
  W8(c->r[29]+0x00000116u,c->r[3]); // 800415B8
  c->r[3]=c->r[30]|c->r[30]; // 800415BC
  c->lr=0x800415C4u; f_8030BD1C(c); // 800415C0
  W8(c->r[29]+0x00000117u,c->r[3]); // 800415C4
  c->r[3]=c->r[30]|c->r[30]; // 800415C8
  c->lr=0x800415D0u; f_8030BD1C(c); // 800415CC
  W8(c->r[29]+0x00000118u,c->r[3]); // 800415D0
  c->r[3]=c->r[30]|c->r[30]; // 800415D4
  c->lr=0x800415DCu; f_8030BD1C(c); // 800415D8
  W8(c->r[29]+0x00000119u,c->r[3]); // 800415DC
  c->r[3]=c->r[30]|c->r[30]; // 800415E0
  c->lr=0x800415E8u; f_8030BD1C(c); // 800415E4
  W8(c->r[29]+0x0000011Au,c->r[3]); // 800415E8
  c->r[3]=c->r[30]|c->r[30]; // 800415EC
  c->lr=0x800415F4u; f_8030BD1C(c); // 800415F0
  W8(c->r[29]+0x0000011Bu,c->r[3]); // 800415F4
  c->r[3]=c->r[30]|c->r[30]; // 800415F8
  c->lr=0x80041600u; f_8030BD1C(c); // 800415FC
  W8(c->r[29]+0x0000011Cu,c->r[3]); // 80041600
  c->r[3]=c->r[30]|c->r[30]; // 80041604
  c->lr=0x8004160Cu; f_8030BD1C(c); // 80041608
  W8(c->r[29]+0x0000011Du,c->r[3]); // 8004160C
  c->r[3]=c->r[30]|c->r[30]; // 80041610
  c->lr=0x80041618u; f_8030C0A0(c); // 80041614
  {uint32_t ea=c->r[29]+0x00000120u; WF32(ea,c->f[1]);} // 80041618
  c->r[3]=c->r[30]|c->r[30]; // 8004161C
  c->lr=0x80041624u; f_8030C0A0(c); // 80041620
  {uint32_t ea=c->r[29]+0x00000124u; WF32(ea,c->f[1]);} // 80041624
  c->r[3]=c->r[30]|c->r[30]; // 80041628
  c->lr=0x80041630u; f_8030C0A0(c); // 8004162C
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[1]);} // 80041630
  c->r[3]=c->r[31]|c->r[31]; // 80041634
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80041638
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004163C
  c->lr=c->r[0]; // 80041640
  c->r[1]=c->r[1]+0x00000020u; // 80041644
  return; // 80041648
}

// fn_8004164C
void f_8004164C(Ctx* __restrict c) {
  trace_call(0x8004164Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004164C
  c->r[0]=c->lr; // 80041650
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041654
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041658
  c->r[31]=c->r[3]|c->r[3]; // 8004165C
  c->lr=0x80041664u; f_80038EC8(c); // 80041660
  c->r[3]=R32(c->r[31]+0x000000E4u); // 80041664
  cmps(c,0,(int32_t)c->r[3],0); // 80041668
  if (crb(c,2)) { goto L_8004167C; } // 8004166C
  c->lr=0x80041674u; f_800416A8(c); // 80041670
  c->r[0]=0u+0x00000000u; // 80041674
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80041678
L_8004167C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8004167C
  cmps(c,0,(int32_t)c->r[3],0); // 80041680
  if (crb(c,2)) { goto L_80041694; } // 80041684
  c->lr=0x8004168Cu; f_800416A8(c); // 80041688
  c->r[0]=0u+0x00000000u; // 8004168C
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80041690
L_80041694:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041694
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041698
  c->lr=c->r[0]; // 8004169C
  c->r[1]=c->r[1]+0x00000010u; // 800416A0
  return; // 800416A4
}

// fn_800416A8
void f_800416A8(Ctx* __restrict c) {
  trace_call(0x800416A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800416A8
  c->r[0]=c->lr; // 800416AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800416B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800416B4
  c->r[31]=c->r[3]|c->r[3]; // 800416B8
  goto L_800416F0; // 800416BC
L_800416C0:;
  c->r[12]=R32(c->r[3]+0x00000008u); // 800416C0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800416C4
  c->ctr=c->r[12]; // 800416C8
  if (true) { c->lr=0x800416D0u; dispatch(c,c->ctr); } // 800416CC
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800416D0
  cmps(c,0,(int32_t)c->r[3],0); // 800416D4
  if (crb(c,2)) { goto L_800416F0; } // 800416D8
  c->r[12]=R32(c->r[3]+0x00000008u); // 800416DC
  c->r[4]=0u+0x00000001u; // 800416E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800416E4
  c->ctr=c->r[12]; // 800416E8
  if (true) { c->lr=0x800416F0u; dispatch(c,c->ctr); } // 800416EC
L_800416F0:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800416F0
  cmpu(c,0,c->r[3],c->r[31]); // 800416F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800416C0; } // 800416F8
  c->r[12]=R32(c->r[31]+0x00000008u); // 800416FC
  c->r[3]=c->r[31]|c->r[31]; // 80041700
  c->r[12]=R32(c->r[12]+0x00000020u); // 80041704
  c->ctr=c->r[12]; // 80041708
  if (true) { c->lr=0x80041710u; dispatch(c,c->ctr); } // 8004170C
  cmps(c,0,(int32_t)c->r[31],0); // 80041710
  if (crb(c,2)) { goto L_80041730; } // 80041714
  c->r[12]=R32(c->r[31]+0x00000008u); // 80041718
  c->r[3]=c->r[31]|c->r[31]; // 8004171C
  c->r[4]=0u+0x00000001u; // 80041720
  c->r[12]=R32(c->r[12]+0x00000008u); // 80041724
  c->ctr=c->r[12]; // 80041728
  if (true) { c->lr=0x80041730u; dispatch(c,c->ctr); } // 8004172C
L_80041730:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041734
  c->lr=c->r[0]; // 80041738
  c->r[1]=c->r[1]+0x00000010u; // 8004173C
  return; // 80041740
}

// fn_80041744
void f_80041744(Ctx* __restrict c) {
  trace_call(0x80041744u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 80041744
  c->r[12]=R32(c->r[12]+0x00000010u); // 80041748
  c->ctr=c->r[12]; // 8004174C
  if (true) { dispatch(c,c->ctr); return; } // 80041750
}

// fn_80041754
void f_80041754(Ctx* __restrict c) {
  trace_call(0x80041754u);
  return; // 80041754
}

// fn_80041758
void f_80041758(Ctx* __restrict c) {
  trace_call(0x80041758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041758
  c->r[0]=c->lr; // 8004175C
  cmps(c,0,(int32_t)c->r[6],0); // 80041760
  W32(c->r[1]+0x00000024u,c->r[0]); // 80041764
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80041768
  c->r[29]=c->r[3]|c->r[3]; // 8004176C
  c->r[30]=c->r[4]|c->r[4]; // 80041770
  c->r[31]=c->r[5]|c->r[5]; // 80041774
  if (!crb(c,2)) { goto L_800417C8; } // 80041778
  c->lr=0x80041780u; f_8003AF18(c); // 8004177C
  c->r[3]=R32(c->r[29]+0x000000E4u); // 80041780
  cmps(c,0,(int32_t)c->r[3],0); // 80041784
  if (crb(c,2)) { goto L_80041798; } // 80041788
  c->r[4]=c->r[30]|c->r[30]; // 8004178C
  c->r[5]=c->r[31]|c->r[31]; // 80041790
  c->lr=0x80041798u; f_8030D100(c); // 80041794
L_80041798:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 80041798
  cmps(c,0,(int32_t)c->r[3],0); // 8004179C
  if (crb(c,2)) { goto L_800417B0; } // 800417A0
  c->r[4]=c->r[30]|c->r[30]; // 800417A4
  c->r[5]=c->r[31]|c->r[31]; // 800417A8
  c->lr=0x800417B0u; f_8030D100(c); // 800417AC
L_800417B0:;
  c->r[0]=R32(c->r[29]+0x000000F0u); // 800417B0
  cmps(c,0,(int32_t)c->r[0],7); // 800417B4
  if (!crb(c,0)) { goto L_800417C8; } // 800417B8
  c->r[4]=c->r[31]|c->r[31]; // 800417BC
  c->r[3]=c->r[29]+0x000000ECu; // 800417C0
  c->lr=0x800417C8u; f_8003A994(c); // 800417C4
L_800417C8:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800417C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800417CC
  c->lr=c->r[0]; // 800417D0
  c->r[1]=c->r[1]+0x00000020u; // 800417D4
  return; // 800417D8
}

// fn_800417DC
void f_800417DC(Ctx* __restrict c) {
  trace_call(0x800417DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800417DC
  c->r[0]=c->lr; // 800417E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800417E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800417E8
  c->r[31]=c->r[3]|c->r[3]; // 800417EC
  c->lr=0x800417F4u; f_8003AF68(c); // 800417F0
  {uint32_t ea=c->r[2]+0xFFFF86F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800417F4
  c->r[6]=0u+0x00000000u; // 800417F8
  c->r[4]=0u+0x000000FFu; // 800417FC
  c->r[3]=0u+0x000000AAu; // 80041800
  c->r[0]=0u+0x0000007Fu; // 80041804
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80041808
  {uint32_t ea=c->r[2]+0xFFFF86F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004180C
  c->r[5]=0u+0x00000001u; // 80041810
  {uint32_t ea=c->r[2]+0xFFFF86FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80041814
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041818
  W32(c->r[31]+0x000000E4u,c->r[6]); // 8004181C
  W32(c->r[31]+0x000000E8u,c->r[6]); // 80041820
  W32(c->r[31]+0x000000ECu,c->r[6]); // 80041824
  W32(c->r[31]+0x000000F4u,c->r[6]); // 80041828
  W32(c->r[31]+0x000000F0u,c->r[6]); // 8004182C
  W8(c->r[31]+0x000000F8u,c->r[5]); // 80041830
  W8(c->r[31]+0x000000F9u,c->r[6]); // 80041834
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[4]);} // 80041838
  W8(c->r[31]+0x00000100u,c->r[4]); // 8004183C
  W8(c->r[31]+0x00000101u,c->r[4]); // 80041840
  W8(c->r[31]+0x00000102u,c->r[4]); // 80041844
  W8(c->r[31]+0x00000103u,c->r[4]); // 80041848
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[3]);} // 8004184C
  W8(c->r[31]+0x00000108u,c->r[6]); // 80041850
  W8(c->r[31]+0x00000109u,c->r[6]); // 80041854
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[4]);} // 80041858
  W8(c->r[31]+0x00000110u,c->r[4]); // 8004185C
  W8(c->r[31]+0x00000111u,c->r[4]); // 80041860
  W8(c->r[31]+0x00000112u,c->r[4]); // 80041864
  W8(c->r[31]+0x00000113u,c->r[4]); // 80041868
  W8(c->r[31]+0x00000114u,c->r[6]); // 8004186C
  W8(c->r[31]+0x00000115u,c->r[3]); // 80041870
  W8(c->r[31]+0x00000116u,c->r[3]); // 80041874
  W8(c->r[31]+0x00000117u,c->r[3]); // 80041878
  W8(c->r[31]+0x00000118u,c->r[0]); // 8004187C
  W8(c->r[31]+0x00000119u,c->r[6]); // 80041880
  W8(c->r[31]+0x0000011Au,c->r[3]); // 80041884
  W8(c->r[31]+0x0000011Bu,c->r[3]); // 80041888
  W8(c->r[31]+0x0000011Cu,c->r[3]); // 8004188C
  W8(c->r[31]+0x0000011Du,c->r[0]); // 80041890
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[2]);} // 80041894
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[1]);} // 80041898
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 8004189C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800418A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800418A4
  c->lr=c->r[0]; // 800418A8
  c->r[1]=c->r[1]+0x00000010u; // 800418AC
  return; // 800418B0
}

// fn_800418B4
void f_800418B4(Ctx* __restrict c) {
  trace_call(0x800418B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800418B4
  c->r[0]=c->lr; // 800418B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800418BC
  c->r[11]=c->r[1]+0x00000020u; // 800418C0
  c->lr=0x800418C8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800418C4
  c->r[29]=c->r[6]|c->r[6]; // 800418C8
  c->r[28]=c->r[3]|c->r[3]; // 800418CC
  c->r[30]=c->r[4]|c->r[4]; // 800418D0
  c->r[31]=c->r[5]|c->r[5]; // 800418D4
  c->r[6]=0u+0x00000000u; // 800418D8
  c->lr=0x800418E0u; f_8003AFFC(c); // 800418DC
  cmps(c,0,(int32_t)c->r[31],0); // 800418E0
  if (crb(c,2)) { goto L_800418EC; } // 800418E4
  goto L_800418F0; // 800418E8
L_800418EC:;
  c->r[31]=c->r[28]|c->r[28]; // 800418EC
L_800418F0:;
  c->r[3]=R32(c->r[30]+0x000000E4u); // 800418F0
  c->r[4]=c->r[29]|c->r[29]; // 800418F4
  c->lr=0x800418FCu; f_8030D5B4(c); // 800418F8
  W32(c->r[31]+0x000000E4u,c->r[3]); // 800418FC
  c->r[4]=c->r[29]|c->r[29]; // 80041900
  c->r[3]=R32(c->r[30]+0x000000E8u); // 80041904
  c->lr=0x8004190Cu; f_8030D5B4(c); // 80041908
  W32(c->r[31]+0x000000E8u,c->r[3]); // 8004190C
  c->r[3]=c->r[31]+0x000000ECu; // 80041910
  c->r[4]=c->r[30]+0x000000ECu; // 80041914
  c->lr=0x8004191Cu; f_8003AB48(c); // 80041918
  c->r[0]=R8(c->r[30]+0x000000F8u); // 8004191C
  c->r[11]=c->r[1]+0x00000020u; // 80041920
  W8(c->r[31]+0x000000F8u,c->r[0]); // 80041924
  c->r[0]=R8(c->r[30]+0x000000F9u); // 80041928
  W8(c->r[31]+0x000000F9u,c->r[0]); // 8004192C
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80041930
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 80041934
  c->r[0]=R8(c->r[30]+0x00000100u); // 80041938
  W8(c->r[31]+0x00000100u,c->r[0]); // 8004193C
  c->r[0]=R8(c->r[30]+0x00000101u); // 80041940
  W8(c->r[31]+0x00000101u,c->r[0]); // 80041944
  c->r[0]=R8(c->r[30]+0x00000102u); // 80041948
  W8(c->r[31]+0x00000102u,c->r[0]); // 8004194C
  c->r[0]=R8(c->r[30]+0x00000103u); // 80041950
  W8(c->r[31]+0x00000103u,c->r[0]); // 80041954
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041958
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8004195C
  c->r[0]=R8(c->r[30]+0x00000108u); // 80041960
  W8(c->r[31]+0x00000108u,c->r[0]); // 80041964
  c->r[0]=R8(c->r[30]+0x00000109u); // 80041968
  W8(c->r[31]+0x00000109u,c->r[0]); // 8004196C
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80041970
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 80041974
  c->r[0]=R8(c->r[30]+0x00000110u); // 80041978
  W8(c->r[31]+0x00000110u,c->r[0]); // 8004197C
  c->r[0]=R8(c->r[30]+0x00000111u); // 80041980
  W8(c->r[31]+0x00000111u,c->r[0]); // 80041984
  c->r[0]=R8(c->r[30]+0x00000112u); // 80041988
  W8(c->r[31]+0x00000112u,c->r[0]); // 8004198C
  c->r[0]=R8(c->r[30]+0x00000113u); // 80041990
  W8(c->r[31]+0x00000113u,c->r[0]); // 80041994
  c->r[0]=R8(c->r[30]+0x00000114u); // 80041998
  W8(c->r[31]+0x00000114u,c->r[0]); // 8004199C
  c->r[0]=R8(c->r[30]+0x00000115u); // 800419A0
  W8(c->r[31]+0x00000115u,c->r[0]); // 800419A4
  c->r[0]=R8(c->r[30]+0x00000116u); // 800419A8
  W8(c->r[31]+0x00000116u,c->r[0]); // 800419AC
  c->r[0]=R8(c->r[30]+0x00000117u); // 800419B0
  W8(c->r[31]+0x00000117u,c->r[0]); // 800419B4
  c->r[0]=R8(c->r[30]+0x00000118u); // 800419B8
  W8(c->r[31]+0x00000118u,c->r[0]); // 800419BC
  c->r[0]=R8(c->r[30]+0x00000119u); // 800419C0
  W8(c->r[31]+0x00000119u,c->r[0]); // 800419C4
  c->r[0]=R8(c->r[30]+0x0000011Au); // 800419C8
  W8(c->r[31]+0x0000011Au,c->r[0]); // 800419CC
  c->r[0]=R8(c->r[30]+0x0000011Bu); // 800419D0
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 800419D4
  c->r[0]=R8(c->r[30]+0x0000011Cu); // 800419D8
  W8(c->r[31]+0x0000011Cu,c->r[0]); // 800419DC
  c->r[0]=R8(c->r[30]+0x0000011Du); // 800419E0
  W8(c->r[31]+0x0000011Du,c->r[0]); // 800419E4
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800419E8
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[0]);} // 800419EC
  {uint32_t ea=c->r[30]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800419F0
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[0]);} // 800419F4
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800419F8
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 800419FC
  c->lr=0x80041A04u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80041A00
  c->r[0]=R32(c->r[1]+0x00000024u); // 80041A04
  c->lr=c->r[0]; // 80041A08
  c->r[1]=c->r[1]+0x00000020u; // 80041A0C
  return; // 80041A10
}

// fn_80041A14
void f_80041A14(Ctx* __restrict c) {
  trace_call(0x80041A14u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 80041A14
  cmpu(c,0,c->r[0],0x0000DF21u); // 80041A18
  if (!crb(c,2)) { goto L_80041A28; } // 80041A1C
  c->r[3]=0u+0x00000001u; // 80041A20
  return; // 80041A24
L_80041A28:;
  c->r[0]=c->r[4]+0x05C00000u; // 80041A28
  cmpu(c,0,c->r[0],0x00000802u); // 80041A2C
  if (!crb(c,2)) { goto L_80041A3C; } // 80041A30
  c->r[3]=0u+0x00000001u; // 80041A34
  return; // 80041A38
L_80041A3C:;
  c->r[3]=0u+0xD12F0000u; // 80041A3C
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80041A40
  c->r[0]=c->r[4]-c->r[0]; // 80041A44
  c->r[0]=cntlz(c->r[0]); // 80041A48
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80041A4C
  return; // 80041A50
}

// fn_80041A54
void f_80041A54(Ctx* __restrict c) {
  trace_call(0x80041A54u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041A54
  c->r[0]=c->lr; // 80041A58
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80041A5C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80041A60
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80041A64
  c->r[11]=c->r[1]+0x000000B0u; // 80041A68
  c->lr=0x80041A70u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80041A6C
  c->f[31]=c->f[1]; // 80041A70
  c->r[0]=0u+0x43300000u; // 80041A74
  W32(c->r[1]+0x00000008u,c->r[0]); // 80041A78
  c->r[29]=c->r[3]|c->r[3]; // 80041A7C
  c->r[31]=c->r[4]|c->r[4]; // 80041A80
  c->r[30]=c->r[5]|c->r[5]; // 80041A84
  W32(c->r[1]+0x00000010u,c->r[0]); // 80041A88
  c->lr=0x80041A90u; f_8003B104(c); // 80041A8C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80041A90
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80041A94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80041A98
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80041A9C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[0]); // 80041AA0
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 80041AA4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041AA8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041AAC
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[2]);} // 80041AB0
  c->r[3]=R8(c->r[31]+0x00000100u); // 80041AB4
  c->r[0]=R8(c->r[30]+0x00000100u); // 80041AB8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041AC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041AC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041AC8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041ACC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041AD0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041AD4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041AD8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041ADC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041AE0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 80041AE4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80041AE8
  W8(c->r[29]+0x00000100u,c->r[0]); // 80041AEC
  c->r[3]=R8(c->r[31]+0x00000101u); // 80041AF0
  c->r[0]=R8(c->r[30]+0x00000101u); // 80041AF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041AFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041B00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041B04
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041B08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041B0C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041B10
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041B14
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041B18
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041B1C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 80041B20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80041B24
  W8(c->r[29]+0x00000101u,c->r[0]); // 80041B28
  c->r[3]=R8(c->r[31]+0x00000102u); // 80041B2C
  c->r[0]=R8(c->r[30]+0x00000102u); // 80041B30
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041B38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041B3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041B40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041B44
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041B48
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041B4C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041B50
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041B54
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041B58
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 80041B5C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80041B60
  W8(c->r[29]+0x00000102u,c->r[0]); // 80041B64
  c->r[3]=R8(c->r[31]+0x00000103u); // 80041B68
  c->r[0]=R8(c->r[30]+0x00000103u); // 80041B6C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041B70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041B74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041B78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041B7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041B80
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041B84
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041B88
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041B8C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041B90
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041B94
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80041B98
  c->r[0]=R32(c->r[1]+0x00000034u); // 80041B9C
  W8(c->r[29]+0x00000103u,c->r[0]); // 80041BA0
  {uint32_t ea=c->r[31]+0x00000104u; c->f[3]=c->ps1[3]=RF32(ea);} // 80041BA4
  {uint32_t ea=c->r[30]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 80041BA8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041BAC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041BB0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041BB4
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[2]);} // 80041BB8
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80041BBC
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80041BC0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041BC4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041BC8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041BCC
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[2]);} // 80041BD0
  c->r[3]=R8(c->r[31]+0x00000110u); // 80041BD4
  c->r[0]=R8(c->r[30]+0x00000110u); // 80041BD8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041BDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041BE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041BE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041BE8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041BEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041BF0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041BF4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041BF8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041BFC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041C00
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 80041C04
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80041C08
  W8(c->r[29]+0x00000110u,c->r[0]); // 80041C0C
  c->r[3]=R8(c->r[31]+0x00000111u); // 80041C10
  c->r[0]=R8(c->r[30]+0x00000111u); // 80041C14
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041C18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041C1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041C20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041C24
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041C28
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041C2C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041C30
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041C34
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041C38
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041C3C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 80041C40
  c->r[0]=R32(c->r[1]+0x00000044u); // 80041C44
  W8(c->r[29]+0x00000111u,c->r[0]); // 80041C48
  c->r[3]=R8(c->r[31]+0x00000112u); // 80041C4C
  c->r[0]=R8(c->r[30]+0x00000112u); // 80041C50
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041C58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041C5C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041C60
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041C64
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041C68
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041C6C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041C70
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041C74
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041C78
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 80041C7C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80041C80
  W8(c->r[29]+0x00000112u,c->r[0]); // 80041C84
  c->r[3]=R8(c->r[31]+0x00000113u); // 80041C88
  c->r[0]=R8(c->r[30]+0x00000113u); // 80041C8C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041C90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041C94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041C98
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041C9C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041CA0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041CA4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041CA8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041CAC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041CB0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041CB4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 80041CB8
  c->r[0]=R32(c->r[1]+0x00000054u); // 80041CBC
  W8(c->r[29]+0x00000113u,c->r[0]); // 80041CC0
  c->r[3]=R8(c->r[31]+0x00000115u); // 80041CC4
  c->r[0]=R8(c->r[30]+0x00000115u); // 80041CC8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041CCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041CD0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041CD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041CD8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041CDC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041CE0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041CE4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041CE8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041CEC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041CF0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 80041CF4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80041CF8
  W8(c->r[29]+0x00000115u,c->r[0]); // 80041CFC
  c->r[3]=R8(c->r[31]+0x00000116u); // 80041D00
  c->r[0]=R8(c->r[30]+0x00000116u); // 80041D04
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041D0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041D10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041D14
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041D18
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041D1C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041D20
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041D24
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041D28
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041D2C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[2]);} // 80041D30
  c->r[0]=R32(c->r[1]+0x00000064u); // 80041D34
  W8(c->r[29]+0x00000116u,c->r[0]); // 80041D38
  c->r[3]=R8(c->r[31]+0x00000117u); // 80041D3C
  c->r[0]=R8(c->r[30]+0x00000117u); // 80041D40
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041D48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041D4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041D50
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041D54
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041D58
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041D5C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041D60
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041D64
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041D68
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[2]);} // 80041D6C
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 80041D70
  W8(c->r[29]+0x00000117u,c->r[0]); // 80041D74
  c->r[3]=R8(c->r[31]+0x00000118u); // 80041D78
  c->r[0]=R8(c->r[30]+0x00000118u); // 80041D7C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041D80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041D84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041D88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041D8C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041D90
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041D94
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041D98
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041D9C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041DA0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041DA4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[2]);} // 80041DA8
  c->r[0]=R32(c->r[1]+0x00000074u); // 80041DAC
  W8(c->r[29]+0x00000118u,c->r[0]); // 80041DB0
  c->r[3]=R8(c->r[31]+0x0000011Au); // 80041DB4
  c->r[0]=R8(c->r[30]+0x0000011Au); // 80041DB8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041DC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041DC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041DC8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041DCC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041DD0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041DD4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041DD8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041DDC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041DE0
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[2]);} // 80041DE4
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 80041DE8
  W8(c->r[29]+0x0000011Au,c->r[0]); // 80041DEC
  c->r[3]=R8(c->r[31]+0x0000011Bu); // 80041DF0
  c->r[0]=R8(c->r[30]+0x0000011Bu); // 80041DF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041DF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041DFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041E00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041E04
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041E08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041E0C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041E10
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041E14
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041E18
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041E1C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[2]);} // 80041E20
  c->r[0]=R32(c->r[1]+0x00000084u); // 80041E24
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 80041E28
  c->r[3]=R8(c->r[31]+0x0000011Cu); // 80041E2C
  c->r[0]=R8(c->r[30]+0x0000011Cu); // 80041E30
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041E38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041E3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041E40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041E44
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80041E48
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80041E4C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80041E50
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80041E54
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80041E58
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[2]);} // 80041E5C
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 80041E60
  W8(c->r[29]+0x0000011Cu,c->r[0]); // 80041E64
  c->r[3]=R8(c->r[31]+0x0000011Du); // 80041E68
  c->r[0]=R8(c->r[30]+0x0000011Du); // 80041E6C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80041E70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041E74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80041E78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80041E7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80041E80
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80041E84
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 80041E88
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80041E8C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80041E90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80041E94
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[0]);} // 80041E98
  c->r[0]=R32(c->r[1]+0x00000094u); // 80041E9C
  W8(c->r[29]+0x0000011Du,c->r[0]); // 80041EA0
  {uint32_t ea=c->r[31]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 80041EA4
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041EA8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 80041EAC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80041EB0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80041EB4
  {uint32_t ea=c->r[29]+0x00000120u; WF32(ea,c->f[0]);} // 80041EB8
  {uint32_t ea=c->r[31]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 80041EBC
  {uint32_t ea=c->r[30]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041EC0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 80041EC4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80041EC8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80041ECC
  {uint32_t ea=c->r[29]+0x00000124u; WF32(ea,c->f[0]);} // 80041ED0
  {uint32_t ea=c->r[31]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 80041ED4
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 80041ED8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80041EDC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80041EE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80041EE4
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[0]);} // 80041EE8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 80041EEC
  c->r[11]=c->r[1]+0x000000B0u; // 80041EF0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 80041EF4
  c->lr=0x80041EFCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80041EF8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80041EFC
  c->lr=c->r[0]; // 80041F00
  c->r[1]=c->r[1]+0x000000C0u; // 80041F04
  return; // 80041F08
}

// fn_80041F0C
void f_80041F0C(Ctx* __restrict c) {
  trace_call(0x80041F0Cu);
  c->r[3]=0u+0x0000012Cu; // 80041F0C
  return; // 80041F10
}

// fn_80041F14
void f_80041F14(Ctx* __restrict c) {
  trace_call(0x80041F14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041F14
  c->r[0]=c->lr; // 80041F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041F1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80041F20
  c->r[31]=c->r[3]|c->r[3]; // 80041F24
  c->lr=0x80041F2Cu; f_80041358(c); // 80041F28
  c->r[0]=R32(c->r[31]+0x00000008u); // 80041F2C
  c->r[3]=0u+0x80420000u; // 80041F30
  c->r[3]=c->r[3]+0x00000E94u; // 80041F34
  W32(c->r[31]+0x00000018u,c->r[3]); // 80041F38
  c->r[0]=c->r[0]|0x80000000u; // 80041F3C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80041F40
  c->r[3]=c->r[31]|c->r[31]; // 80041F44
  c->r[12]=R32(c->r[31]+0x00000018u); // 80041F48
  c->r[12]=R32(c->r[12]+0x00000024u); // 80041F4C
  c->ctr=c->r[12]; // 80041F50
  if (true) { c->lr=0x80041F58u; dispatch(c,c->ctr); } // 80041F54
  c->r[3]=c->r[31]|c->r[31]; // 80041F58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80041F5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041F60
  c->lr=c->r[0]; // 80041F64
  c->r[1]=c->r[1]+0x00000010u; // 80041F68
  return; // 80041F6C
}

// fn_80041F70
void f_80041F70(Ctx* __restrict c) {
  trace_call(0x80041F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041F70
  c->r[0]=c->lr; // 80041F74
  cmps(c,0,(int32_t)c->r[3],0); // 80041F78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041F7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80041F80
  c->r[30]=c->r[3]|c->r[3]; // 80041F84
  c->r[31]=c->r[4]|c->r[4]; // 80041F88
  if (crb(c,2)) { goto L_80041FAC; } // 80041F8C
  if (crb(c,2)) { goto L_80041F9C; } // 80041F90
  c->r[4]=0u+0x00000000u; // 80041F94
  c->lr=0x80041F9Cu; f_8003ABE0(c); // 80041F98
L_80041F9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80041F9C
  if (!crb(c,1)) { goto L_80041FAC; } // 80041FA0
  c->r[3]=c->r[30]|c->r[30]; // 80041FA4
  c->lr=0x80041FACu; f_80244DC0(c); // 80041FA8
L_80041FAC:;
  c->r[3]=c->r[30]|c->r[30]; // 80041FAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80041FB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041FB4
  c->lr=c->r[0]; // 80041FB8
  c->r[1]=c->r[1]+0x00000010u; // 80041FBC
  return; // 80041FC0
}

// fn_80041FC4
void f_80041FC4(Ctx* __restrict c) {
  trace_call(0x80041FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80041FC4
  c->r[0]=c->lr; // 80041FC8
  c->r[3]=0u+0x0000012Cu; // 80041FCC
  c->r[4]=c->r[13]+0xFFFF8E59u; // 80041FD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80041FD4
  c->r[5]=0u+0x00000000u; // 80041FD8
  c->r[6]=0u+0x00001001u; // 80041FDC
  c->lr=0x80041FE4u; f_80244D20(c); // 80041FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80041FE4
  if (crb(c,2)) { goto L_80041FF0; } // 80041FE8
  c->lr=0x80041FF0u; f_80041F14(c); // 80041FEC
L_80041FF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80041FF0
  c->lr=c->r[0]; // 80041FF4
  c->r[1]=c->r[1]+0x00000010u; // 80041FF8
  return; // 80041FFC
}

// fn_80042000
void f_80042000(Ctx* __restrict c) {
  trace_call(0x80042000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042000
  c->r[0]=c->lr; // 80042004
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004200C
  c->r[31]=c->r[3]|c->r[3]; // 80042010
  c->lr=0x80042018u; f_80244520(c); // 80042014
  c->r[7]=c->r[3]|c->r[3]; // 80042018
  c->r[9]=c->r[31]|c->r[31]; // 8004201C
  c->r[3]=0u+0x0000012Cu; // 80042020
  c->r[4]=c->r[13]+0xFFFF8E5Eu; // 80042024
  c->r[5]=0u+0x00000000u; // 80042028
  c->r[6]=0u+0x00002001u; // 8004202C
  c->r[8]=0u+0x00000000u; // 80042030
  c->lr=0x80042038u; f_80242DF0(c); // 80042034
  c->r[4]=c->r[3]|c->r[3]; // 80042038
  c->r[3]=0u+0x0000012Cu; // 8004203C
  c->r[5]=c->r[13]+0xFFFF8E63u; // 80042040
  c->r[6]=0u+0x00000000u; // 80042044
  c->r[7]=0u+0x00001001u; // 80042048
  c->lr=0x80042050u; f_80244DB0(c); // 8004204C
  cmps(c,0,(int32_t)c->r[3],0); // 80042050
  if (crb(c,2)) { goto L_8004205C; } // 80042054
  c->lr=0x8004205Cu; f_80041F14(c); // 80042058
L_8004205C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004205C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80042060
  c->lr=c->r[0]; // 80042064
  c->r[1]=c->r[1]+0x00000010u; // 80042068
  return; // 8004206C
}

// fn_80042070
void f_80042070(Ctx* __restrict c) {
  trace_call(0x80042070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042070
  c->r[0]=c->lr; // 80042074
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004207C
  c->r[31]=c->r[3]|c->r[3]; // 80042080
  c->lr=0x80042088u; f_8003ACE0(c); // 80042084
  c->r[8]=0u+0x80420000u; // 80042088
  c->r[6]=0u+0x80410000u; // 8004208C
  c->r[7]=0u+0x00000000u; // 80042090
  c->r[5]=0u+0x2FBC0000u; // 80042094
  c->r[4]=0u+0x970B0000u; // 80042098
  c->r[3]=0u+0xB95C0000u; // 8004209C
  c->r[0]=c->r[3]+0xFFFFB5D8u; // 800420A0
  c->r[8]=c->r[8]+0x00000E58u; // 800420A4
  c->r[6]=c->r[6]+0xFFFFBB0Fu; // 800420A8
  c->r[5]=c->r[5]+0xFFFFE872u; // 800420AC
  c->r[4]=c->r[4]+0x00003BCBu; // 800420B0
  W32(c->r[31]+0x00000018u,c->r[8]); // 800420B4
  c->r[3]=c->r[31]|c->r[31]; // 800420B8
  W32(c->r[31]+0x00000174u,c->r[7]); // 800420BC
  W32(c->r[31]+0x00000000u,c->r[6]); // 800420C0
  W32(c->r[31]+0x00000008u,c->r[7]); // 800420C4
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800420C8
  W32(c->r[31]+0x00000010u,c->r[4]); // 800420CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800420D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800420D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800420D8
  c->lr=c->r[0]; // 800420DC
  c->r[1]=c->r[1]+0x00000010u; // 800420E0
  return; // 800420E4
}

// fn_800420E8
void f_800420E8(Ctx* __restrict c) {
  trace_call(0x800420E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800420E8
  c->r[0]=c->lr; // 800420EC
  cmps(c,0,(int32_t)c->r[4],0); // 800420F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800420F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800420F8
  c->r[30]=c->r[3]|c->r[3]; // 800420FC
  c->r[31]=c->r[4]|c->r[4]; // 80042100
  if (crb(c,2)) { goto L_80042158; } // 80042104
  c->r[3]=c->r[31]|c->r[31]; // 80042108
  c->lr=0x80042110u; f_80244520(c); // 8004210C
  c->r[7]=c->r[3]|c->r[3]; // 80042110
  c->r[9]=c->r[31]|c->r[31]; // 80042114
  c->r[3]=0u+0x00000178u; // 80042118
  c->r[4]=c->r[13]+0xFFFF8E68u; // 8004211C
  c->r[5]=0u+0x00000000u; // 80042120
  c->r[6]=0u+0x00002001u; // 80042124
  c->r[8]=0u+0x00000000u; // 80042128
  c->lr=0x80042130u; f_80242DF0(c); // 8004212C
  c->r[4]=c->r[3]|c->r[3]; // 80042130
  c->r[3]=0u+0x00000178u; // 80042134
  c->r[5]=c->r[13]+0xFFFF8E6Du; // 80042138
  c->r[6]=0u+0x00000000u; // 8004213C
  c->r[7]=0u+0x00001001u; // 80042140
  c->lr=0x80042148u; f_80244DB0(c); // 80042144
  cmps(c,0,(int32_t)c->r[3],0); // 80042148
  if (crb(c,2)) { goto L_80042178; } // 8004214C
  c->lr=0x80042154u; f_80042070(c); // 80042150
  goto L_80042178; // 80042154
L_80042158:;
  c->r[3]=0u+0x00000178u; // 80042158
  c->r[4]=c->r[13]+0xFFFF8E72u; // 8004215C
  c->r[5]=0u+0x00000000u; // 80042160
  c->r[6]=0u+0x00001001u; // 80042164
  c->lr=0x8004216Cu; f_80244D20(c); // 80042168
  cmps(c,0,(int32_t)c->r[3],0); // 8004216C
  if (crb(c,2)) { goto L_80042178; } // 80042170
  c->lr=0x80042178u; f_80042070(c); // 80042174
L_80042178:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80042178
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004217C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80042180
  c->r[0]=R32(c->r[1]+0x00000014u); // 80042184
  c->lr=c->r[0]; // 80042188
  c->r[1]=c->r[1]+0x00000010u; // 8004218C
  return; // 80042190
}

// fn_80042194
void f_80042194(Ctx* __restrict c) {
  trace_call(0x80042194u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042194
  c->r[0]=c->lr; // 80042198
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004219C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800421A0
  c->r[28]=c->r[3]|c->r[3]; // 800421A4
  c->r[29]=c->r[4]|c->r[4]; // 800421A8
  c->lr=0x800421B0u; f_8003AE00(c); // 800421AC
  c->r[30]=c->r[3]|c->r[3]; // 800421B0
  c->r[3]=c->r[29]|c->r[29]; // 800421B4
  c->lr=0x800421BCu; f_8030C0A0(c); // 800421B8
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[1]);} // 800421BC
  c->r[3]=c->r[29]|c->r[29]; // 800421C0
  c->lr=0x800421C8u; f_8030C0A0(c); // 800421C4
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[1]);} // 800421C8
  c->r[3]=c->r[29]|c->r[29]; // 800421CC
  c->lr=0x800421D4u; f_8030BD1C(c); // 800421D0
  W8(c->r[28]+0x000000ECu,c->r[3]); // 800421D4
  c->r[3]=c->r[29]|c->r[29]; // 800421D8
  c->lr=0x800421E0u; f_8030BD1C(c); // 800421DC
  W8(c->r[28]+0x000000EDu,c->r[3]); // 800421E0
  c->r[3]=c->r[29]|c->r[29]; // 800421E4
  c->lr=0x800421ECu; f_8030BD1C(c); // 800421E8
  W8(c->r[28]+0x000000EEu,c->r[3]); // 800421EC
  c->r[3]=c->r[29]|c->r[29]; // 800421F0
  c->lr=0x800421F8u; f_8030BD1C(c); // 800421F4
  W8(c->r[28]+0x000000EFu,c->r[3]); // 800421F8
  c->r[3]=c->r[29]|c->r[29]; // 800421FC
  c->lr=0x80042204u; f_8030C0A0(c); // 80042200
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[1]);} // 80042204
  c->r[3]=c->r[29]|c->r[29]; // 80042208
  c->lr=0x80042210u; f_8030BD1C(c); // 8004220C
  W8(c->r[28]+0x000000F4u,c->r[3]); // 80042210
  c->r[3]=c->r[29]|c->r[29]; // 80042214
  c->lr=0x8004221Cu; f_8030C0A0(c); // 80042218
  {uint32_t ea=c->r[28]+0x000000F8u; WF32(ea,c->f[1]);} // 8004221C
  c->r[3]=c->r[29]|c->r[29]; // 80042220
  c->r[4]=0u+0x00000000u; // 80042224
  c->lr=0x8004222Cu; f_8030BE30(c); // 80042228
  W32(c->r[28]+0x000000FCu,c->r[3]); // 8004222C
  c->r[31]=0u+0x00000000u; // 80042230
  c->r[3]=c->r[29]|c->r[29]; // 80042234
  W32(c->r[28]+0x00000100u,c->r[31]); // 80042238
  c->lr=0x80042240u; f_8030BD1C(c); // 8004223C
  W32(c->r[28]+0x00000104u,c->r[3]); // 80042240
  c->r[3]=c->r[29]|c->r[29]; // 80042244
  c->lr=0x8004224Cu; f_8030BD1C(c); // 80042248
  W8(c->r[28]+0x00000108u,c->r[3]); // 8004224C
  c->r[3]=c->r[29]|c->r[29]; // 80042250
  c->lr=0x80042258u; f_8030C0A0(c); // 80042254
  {uint32_t ea=c->r[28]+0x0000010Cu; WF32(ea,c->f[1]);} // 80042258
  c->r[3]=c->r[29]|c->r[29]; // 8004225C
  c->lr=0x80042264u; f_8030C0A0(c); // 80042260
  {uint32_t ea=c->r[28]+0x00000110u; WF32(ea,c->f[1]);} // 80042264
  c->r[3]=c->r[29]|c->r[29]; // 80042268
  c->lr=0x80042270u; f_8030BD1C(c); // 8004226C
  W8(c->r[28]+0x00000114u,c->r[3]); // 80042270
  c->r[3]=c->r[29]|c->r[29]; // 80042274
  c->r[4]=0u+0x00000000u; // 80042278
  c->lr=0x80042280u; f_8030BE30(c); // 8004227C
  W32(c->r[28]+0x00000118u,c->r[3]); // 80042280
  c->r[3]=c->r[29]|c->r[29]; // 80042284
  W32(c->r[28]+0x0000011Cu,c->r[31]); // 80042288
  c->lr=0x80042290u; f_8030BD1C(c); // 8004228C
  W32(c->r[28]+0x00000120u,c->r[3]); // 80042290
  c->r[3]=c->r[29]|c->r[29]; // 80042294
  c->lr=0x8004229Cu; f_8030BD1C(c); // 80042298
  W8(c->r[28]+0x00000124u,c->r[3]); // 8004229C
  c->r[3]=c->r[29]|c->r[29]; // 800422A0
  c->lr=0x800422A8u; f_8030BD1C(c); // 800422A4
  W8(c->r[28]+0x00000125u,c->r[3]); // 800422A8
  c->r[3]=c->r[29]|c->r[29]; // 800422AC
  c->lr=0x800422B4u; f_8030BD1C(c); // 800422B0
  W8(c->r[28]+0x00000126u,c->r[3]); // 800422B4
  c->r[3]=c->r[29]|c->r[29]; // 800422B8
  c->lr=0x800422C0u; f_8030BD1C(c); // 800422BC
  W8(c->r[28]+0x00000127u,c->r[3]); // 800422C0
  c->r[3]=c->r[29]|c->r[29]; // 800422C4
  c->lr=0x800422CCu; f_8030BD1C(c); // 800422C8
  W8(c->r[28]+0x00000128u,c->r[3]); // 800422CC
  c->r[3]=c->r[29]|c->r[29]; // 800422D0
  c->r[4]=0u+0x00000000u; // 800422D4
  c->lr=0x800422DCu; f_8030BE30(c); // 800422D8
  W32(c->r[28]+0x0000012Cu,c->r[3]); // 800422DC
  c->r[3]=c->r[29]|c->r[29]; // 800422E0
  W32(c->r[28]+0x00000130u,c->r[31]); // 800422E4
  c->lr=0x800422ECu; f_8030BD1C(c); // 800422E8
  W32(c->r[28]+0x00000134u,c->r[3]); // 800422EC
  c->r[3]=c->r[29]|c->r[29]; // 800422F0
  c->r[4]=0u+0x00000000u; // 800422F4
  c->lr=0x800422FCu; f_8030BE30(c); // 800422F8
  W32(c->r[28]+0x00000138u,c->r[3]); // 800422FC
  c->r[3]=c->r[29]|c->r[29]; // 80042300
  W32(c->r[28]+0x0000013Cu,c->r[31]); // 80042304
  c->lr=0x8004230Cu; f_8030BD1C(c); // 80042308
  W32(c->r[28]+0x00000140u,c->r[3]); // 8004230C
  c->r[3]=c->r[29]|c->r[29]; // 80042310
  c->r[4]=0u+0x00000000u; // 80042314
  c->lr=0x8004231Cu; f_8030BE30(c); // 80042318
  W32(c->r[28]+0x00000144u,c->r[3]); // 8004231C
  c->r[3]=c->r[29]|c->r[29]; // 80042320
  W32(c->r[28]+0x00000148u,c->r[31]); // 80042324
  c->lr=0x8004232Cu; f_8030BD1C(c); // 80042328
  W32(c->r[28]+0x0000014Cu,c->r[3]); // 8004232C
  c->r[3]=c->r[29]|c->r[29]; // 80042330
  c->r[4]=0u+0x00000000u; // 80042334
  c->lr=0x8004233Cu; f_8030BE30(c); // 80042338
  W32(c->r[28]+0x00000150u,c->r[3]); // 8004233C
  c->r[3]=c->r[29]|c->r[29]; // 80042340
  W32(c->r[28]+0x00000154u,c->r[31]); // 80042344
  c->lr=0x8004234Cu; f_8030BD1C(c); // 80042348
  W32(c->r[28]+0x00000158u,c->r[3]); // 8004234C
  c->r[3]=c->r[29]|c->r[29]; // 80042350
  c->r[4]=0u+0x00000000u; // 80042354
  c->lr=0x8004235Cu; f_8030BE30(c); // 80042358
  W32(c->r[28]+0x0000015Cu,c->r[3]); // 8004235C
  c->r[3]=c->r[29]|c->r[29]; // 80042360
  W32(c->r[28]+0x00000160u,c->r[31]); // 80042364
  c->lr=0x8004236Cu; f_8030BD1C(c); // 80042368
  W32(c->r[28]+0x00000164u,c->r[3]); // 8004236C
  c->r[3]=c->r[29]|c->r[29]; // 80042370
  c->r[4]=0u+0x00000000u; // 80042374
  c->lr=0x8004237Cu; f_8030BE30(c); // 80042378
  W32(c->r[28]+0x00000168u,c->r[3]); // 8004237C
  c->r[3]=c->r[29]|c->r[29]; // 80042380
  W32(c->r[28]+0x0000016Cu,c->r[31]); // 80042384
  c->lr=0x8004238Cu; f_8030BD1C(c); // 80042388
  W32(c->r[28]+0x00000170u,c->r[3]); // 8004238C
  c->r[3]=c->r[30]|c->r[30]; // 80042390
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80042394
  c->r[0]=R32(c->r[1]+0x00000024u); // 80042398
  c->lr=c->r[0]; // 8004239C
  c->r[1]=c->r[1]+0x00000020u; // 800423A0
  return; // 800423A4
}

// fn_800423A8
void f_800423A8(Ctx* __restrict c) {
  trace_call(0x800423A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800423A8
  c->r[0]=c->lr; // 800423AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800423B0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800423B4
  c->r[28]=c->r[3]|c->r[3]; // 800423B8
  c->r[29]=c->r[4]|c->r[4]; // 800423BC
  c->r[30]=c->r[5]|c->r[5]; // 800423C0
  c->r[31]=c->r[6]|c->r[6]; // 800423C4
  c->r[7]=R32(c->r[3]+0x00000174u); // 800423C8
  cmps(c,0,(int32_t)c->r[7],0); // 800423CC
  if (!crb(c,0)) { goto L_800423E0; } // 800423D0
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800423D4
  W32(c->r[3]+0x00000174u,c->r[0]); // 800423D8
  goto L_800423F0; // 800423DC
L_800423E0:;
  c->r[0]=c->r[7]+0x00000001u; // 800423E0
  W32(c->r[3]+0x00000174u,c->r[0]); // 800423E4
  cmps(c,0,(int32_t)c->r[0],1); // 800423E8
  if (crb(c,1)) { goto L_80042964; } // 800423EC
L_800423F0:;
  c->r[3]=c->r[28]|c->r[28]; // 800423F0
  c->r[4]=c->r[29]|c->r[29]; // 800423F4
  c->r[5]=c->r[30]|c->r[30]; // 800423F8
  c->r[6]=c->r[31]|c->r[31]; // 800423FC
  c->lr=0x80042404u; f_802B11C0(c); // 80042400
  c->r[4]=R32(c->r[28]+0x000000FCu); // 80042404
  cmps(c,0,(int32_t)c->r[4],0); // 80042408
  if (crb(c,2)) { goto L_800424B0; } // 8004240C
  c->r[0]=0u+0x00000001u; // 80042410
  W32(c->r[1]+0x00000008u,c->r[0]); // 80042414
  c->r[6]=c->r[29]|c->r[29]; // 80042418
  c->r[7]=c->r[30]|c->r[30]; // 8004241C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80042420
  c->r[8]=c->r[31]|c->r[31]; // 80042424
  c->r[9]=R32(c->r[28]+0x00000104u); // 80042428
  c->r[5]=0u+0x00000000u; // 8004242C
  c->r[10]=0u+0x00000001u; // 80042430
  c->lr=0x80042438u; f_80281A84(c); // 80042434
  cmps(c,0,(int32_t)c->r[3],0); // 80042438
  W32(c->r[28]+0x00000100u,c->r[3]); // 8004243C
  if (crb(c,2)) { goto L_8004244C; } // 80042440
  c->lr=0x80042448u; f_80295B6C(c); // 80042444
  goto L_800424B0; // 80042448
L_8004244C:;
  c->r[3]=R32(c->r[28]+0x00000104u); // 8004244C
  c->r[4]=c->r[31]|c->r[31]; // 80042450
  c->r[5]=c->r[30]|c->r[30]; // 80042454
  c->lr=0x8004245Cu; f_802C0F98(c); // 80042458
  c->r[27]=c->r[3]|c->r[3]; // 8004245C
  c->r[3]=0u+0x00000044u; // 80042460
  c->r[4]=c->r[13]+0xFFFF8E77u; // 80042464
  c->r[5]=0u+0x00000000u; // 80042468
  c->r[6]=0u+0x00001001u; // 8004246C
  c->lr=0x80042474u; f_80244D20(c); // 80042470
  cmps(c,0,(int32_t)c->r[3],0); // 80042474
  if (crb(c,2)) { goto L_8004248C; } // 80042478
  c->r[5]=R32(c->r[28]+0x000000FCu); // 8004247C
  c->r[4]=c->r[27]|c->r[27]; // 80042480
  c->r[6]=0u+0x00000000u; // 80042484
  c->lr=0x8004248Cu; f_8029316C(c); // 80042488
L_8004248C:;
  W32(c->r[28]+0x00000100u,c->r[3]); // 8004248C
  c->r[4]=c->r[29]|c->r[29]; // 80042490
  c->r[7]=R32(c->r[28]+0x00000104u); // 80042494
  c->r[5]=c->r[30]|c->r[30]; // 80042498
  c->r[6]=c->r[31]|c->r[31]; // 8004249C
  c->r[8]=0u+0x00000001u; // 800424A0
  c->r[9]=0u+0x00000000u; // 800424A4
  c->lr=0x800424ACu; f_8027FFF4(c); // 800424A8
  W32(c->r[28]+0x00000100u,c->r[3]); // 800424AC
L_800424B0:;
  c->r[4]=R32(c->r[28]+0x00000118u); // 800424B0
  cmps(c,0,(int32_t)c->r[4],0); // 800424B4
  if (crb(c,2)) { goto L_8004255C; } // 800424B8
  c->r[0]=0u+0x00000001u; // 800424BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800424C0
  c->r[6]=c->r[29]|c->r[29]; // 800424C4
  c->r[7]=c->r[30]|c->r[30]; // 800424C8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800424CC
  c->r[8]=c->r[31]|c->r[31]; // 800424D0
  c->r[9]=R32(c->r[28]+0x00000120u); // 800424D4
  c->r[5]=0u+0x00000000u; // 800424D8
  c->r[10]=0u+0x00000001u; // 800424DC
  c->lr=0x800424E4u; f_80281A84(c); // 800424E0
  cmps(c,0,(int32_t)c->r[3],0); // 800424E4
  W32(c->r[28]+0x0000011Cu,c->r[3]); // 800424E8
  if (crb(c,2)) { goto L_800424F8; } // 800424EC
  c->lr=0x800424F4u; f_80295B6C(c); // 800424F0
  goto L_8004255C; // 800424F4
L_800424F8:;
  c->r[3]=R32(c->r[28]+0x00000120u); // 800424F8
  c->r[4]=c->r[31]|c->r[31]; // 800424FC
  c->r[5]=c->r[30]|c->r[30]; // 80042500
  c->lr=0x80042508u; f_802C0F98(c); // 80042504
  c->r[27]=c->r[3]|c->r[3]; // 80042508
  c->r[3]=0u+0x00000044u; // 8004250C
  c->r[4]=c->r[13]+0xFFFF8E7Cu; // 80042510
  c->r[5]=0u+0x00000000u; // 80042514
  c->r[6]=0u+0x00001001u; // 80042518
  c->lr=0x80042520u; f_80244D20(c); // 8004251C
  cmps(c,0,(int32_t)c->r[3],0); // 80042520
  if (crb(c,2)) { goto L_80042538; } // 80042524
  c->r[5]=R32(c->r[28]+0x00000118u); // 80042528
  c->r[4]=c->r[27]|c->r[27]; // 8004252C
  c->r[6]=0u+0x00000000u; // 80042530
  c->lr=0x80042538u; f_8029316C(c); // 80042534
L_80042538:;
  W32(c->r[28]+0x0000011Cu,c->r[3]); // 80042538
  c->r[4]=c->r[29]|c->r[29]; // 8004253C
  c->r[7]=R32(c->r[28]+0x00000120u); // 80042540
  c->r[5]=c->r[30]|c->r[30]; // 80042544
  c->r[6]=c->r[31]|c->r[31]; // 80042548
  c->r[8]=0u+0x00000001u; // 8004254C
  c->r[9]=0u+0x00000000u; // 80042550
  c->lr=0x80042558u; f_8027FFF4(c); // 80042554
  W32(c->r[28]+0x0000011Cu,c->r[3]); // 80042558
L_8004255C:;
  c->r[4]=R32(c->r[28]+0x0000012Cu); // 8004255C
  cmps(c,0,(int32_t)c->r[4],0); // 80042560
  if (crb(c,2)) { goto L_80042608; } // 80042564
  c->r[0]=0u+0x00000001u; // 80042568
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004256C
  c->r[6]=c->r[29]|c->r[29]; // 80042570
  c->r[7]=c->r[30]|c->r[30]; // 80042574
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80042578
  c->r[8]=c->r[31]|c->r[31]; // 8004257C
  c->r[9]=R32(c->r[28]+0x00000134u); // 80042580
  c->r[5]=0u+0x00000000u; // 80042584
  c->r[10]=0u+0x00000001u; // 80042588
  c->lr=0x80042590u; f_80281A84(c); // 8004258C
  cmps(c,0,(int32_t)c->r[3],0); // 80042590
  W32(c->r[28]+0x00000130u,c->r[3]); // 80042594
  if (crb(c,2)) { goto L_800425A4; } // 80042598
  c->lr=0x800425A0u; f_80295B6C(c); // 8004259C
  goto L_80042608; // 800425A0
L_800425A4:;
  c->r[3]=R32(c->r[28]+0x00000134u); // 800425A4
  c->r[4]=c->r[31]|c->r[31]; // 800425A8
  c->r[5]=c->r[30]|c->r[30]; // 800425AC
  c->lr=0x800425B4u; f_802C0F98(c); // 800425B0
  c->r[27]=c->r[3]|c->r[3]; // 800425B4
  c->r[3]=0u+0x00000044u; // 800425B8
  c->r[4]=c->r[13]+0xFFFF8E81u; // 800425BC
  c->r[5]=0u+0x00000000u; // 800425C0
  c->r[6]=0u+0x00001001u; // 800425C4
  c->lr=0x800425CCu; f_80244D20(c); // 800425C8
  cmps(c,0,(int32_t)c->r[3],0); // 800425CC
  if (crb(c,2)) { goto L_800425E4; } // 800425D0
  c->r[5]=R32(c->r[28]+0x0000012Cu); // 800425D4
  c->r[4]=c->r[27]|c->r[27]; // 800425D8
  c->r[6]=0u+0x00000000u; // 800425DC
  c->lr=0x800425E4u; f_8029316C(c); // 800425E0
L_800425E4:;
  W32(c->r[28]+0x00000130u,c->r[3]); // 800425E4
  c->r[4]=c->r[29]|c->r[29]; // 800425E8
  c->r[7]=R32(c->r[28]+0x00000134u); // 800425EC
  c->r[5]=c->r[30]|c->r[30]; // 800425F0
  c->r[6]=c->r[31]|c->r[31]; // 800425F4
  c->r[8]=0u+0x00000001u; // 800425F8
  c->r[9]=0u+0x00000000u; // 800425FC
  c->lr=0x80042604u; f_8027FFF4(c); // 80042600
  W32(c->r[28]+0x00000130u,c->r[3]); // 80042604
L_80042608:;
  c->r[4]=R32(c->r[28]+0x00000138u); // 80042608
  cmps(c,0,(int32_t)c->r[4],0); // 8004260C
  if (crb(c,2)) { goto L_800426B4; } // 80042610
  c->r[0]=0u+0x00000001u; // 80042614
  W32(c->r[1]+0x00000008u,c->r[0]); // 80042618
  c->r[6]=c->r[29]|c->r[29]; // 8004261C
  c->r[7]=c->r[30]|c->r[30]; // 80042620
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80042624
  c->r[8]=c->r[31]|c->r[31]; // 80042628
  c->r[9]=R32(c->r[28]+0x00000140u); // 8004262C
  c->r[5]=0u+0x00000000u; // 80042630
  c->r[10]=0u+0x00000001u; // 80042634
  c->lr=0x8004263Cu; f_80281A84(c); // 80042638
  cmps(c,0,(int32_t)c->r[3],0); // 8004263C
  W32(c->r[28]+0x0000013Cu,c->r[3]); // 80042640
  if (crb(c,2)) { goto L_80042650; } // 80042644
  c->lr=0x8004264Cu; f_80295B6C(c); // 80042648
  goto L_800426B4; // 8004264C
L_80042650:;
  c->r[3]=R32(c->r[28]+0x00000140u); // 80042650
  c->r[4]=c->r[31]|c->r[31]; // 80042654
  c->r[5]=c->r[30]|c->r[30]; // 80042658
  c->lr=0x80042660u; f_802C0F98(c); // 8004265C
  c->r[27]=c->r[3]|c->r[3]; // 80042660
  c->r[3]=0u+0x00000044u; // 80042664
  c->r[4]=c->r[13]+0xFFFF8E86u; // 80042668
  c->r[5]=0u+0x00000000u; // 8004266C
  c->r[6]=0u+0x00001001u; // 80042670
  c->lr=0x80042678u; f_80244D20(c); // 80042674
  cmps(c,0,(int32_t)c->r[3],0); // 80042678
  if (crb(c,2)) { goto L_80042690; } // 8004267C
  c->r[5]=R32(c->r[28]+0x00000138u); // 80042680
  c->r[4]=c->r[27]|c->r[27]; // 80042684
  c->r[6]=0u+0x00000000u; // 80042688
  c->lr=0x80042690u; f_8029316C(c); // 8004268C
L_80042690:;
  W32(c->r[28]+0x0000013Cu,c->r[3]); // 80042690
  c->r[4]=c->r[29]|c->r[29]; // 80042694
  c->r[7]=R32(c->r[28]+0x00000140u); // 80042698
  c->r[5]=c->r[30]|c->r[30]; // 8004269C
  c->r[6]=c->r[31]|c->r[31]; // 800426A0
  c->r[8]=0u+0x00000001u; // 800426A4
  c->r[9]=0u+0x00000000u; // 800426A8
  c->lr=0x800426B0u; f_8027FFF4(c); // 800426AC
  W32(c->r[28]+0x0000013Cu,c->r[3]); // 800426B0
L_800426B4:;
  c->r[4]=R32(c->r[28]+0x00000144u); // 800426B4
  cmps(c,0,(int32_t)c->r[4],0); // 800426B8
  if (crb(c,2)) { goto L_80042760; } // 800426BC
  c->r[0]=0u+0x00000001u; // 800426C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800426C4
  c->r[6]=c->r[29]|c->r[29]; // 800426C8
  c->r[7]=c->r[30]|c->r[30]; // 800426CC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800426D0
  c->r[8]=c->r[31]|c->r[31]; // 800426D4
  c->r[9]=R32(c->r[28]+0x0000014Cu); // 800426D8
  c->r[5]=0u+0x00000000u; // 800426DC
  c->r[10]=0u+0x00000001u; // 800426E0
  c->lr=0x800426E8u; f_80281A84(c); // 800426E4
  cmps(c,0,(int32_t)c->r[3],0); // 800426E8
  W32(c->r[28]+0x00000148u,c->r[3]); // 800426EC
  if (crb(c,2)) { goto L_800426FC; } // 800426F0
  c->lr=0x800426F8u; f_80295B6C(c); // 800426F4
  goto L_80042760; // 800426F8
L_800426FC:;
  c->r[3]=R32(c->r[28]+0x0000014Cu); // 800426FC
  c->r[4]=c->r[31]|c->r[31]; // 80042700
  c->r[5]=c->r[30]|c->r[30]; // 80042704
  c->lr=0x8004270Cu; f_802C0F98(c); // 80042708
  c->r[27]=c->r[3]|c->r[3]; // 8004270C
  c->r[3]=0u+0x00000044u; // 80042710
  c->r[4]=c->r[13]+0xFFFF8E8Bu; // 80042714
  c->r[5]=0u+0x00000000u; // 80042718
  c->r[6]=0u+0x00001001u; // 8004271C
  c->lr=0x80042724u; f_80244D20(c); // 80042720
  cmps(c,0,(int32_t)c->r[3],0); // 80042724
  if (crb(c,2)) { goto L_8004273C; } // 80042728
  c->r[5]=R32(c->r[28]+0x00000144u); // 8004272C
  c->r[4]=c->r[27]|c->r[27]; // 80042730
  c->r[6]=0u+0x00000000u; // 80042734
  c->lr=0x8004273Cu; f_8029316C(c); // 80042738
L_8004273C:;
  W32(c->r[28]+0x00000148u,c->r[3]); // 8004273C
  c->r[4]=c->r[29]|c->r[29]; // 80042740
  c->r[7]=R32(c->r[28]+0x0000014Cu); // 80042744
  c->r[5]=c->r[30]|c->r[30]; // 80042748
  c->r[6]=c->r[31]|c->r[31]; // 8004274C
  c->r[8]=0u+0x00000001u; // 80042750
  c->r[9]=0u+0x00000000u; // 80042754
  c->lr=0x8004275Cu; f_8027FFF4(c); // 80042758
  W32(c->r[28]+0x00000148u,c->r[3]); // 8004275C
L_80042760:;
  c->r[4]=R32(c->r[28]+0x00000150u); // 80042760
  cmps(c,0,(int32_t)c->r[4],0); // 80042764
  if (crb(c,2)) { goto L_8004280C; } // 80042768
  c->r[0]=0u+0x00000001u; // 8004276C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80042770
  c->r[6]=c->r[29]|c->r[29]; // 80042774
  c->r[7]=c->r[30]|c->r[30]; // 80042778
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8004277C
  c->r[8]=c->r[31]|c->r[31]; // 80042780
  c->r[9]=R32(c->r[28]+0x00000158u); // 80042784
  c->r[5]=0u+0x00000000u; // 80042788
  c->r[10]=0u+0x00000001u; // 8004278C
  c->lr=0x80042794u; f_80281A84(c); // 80042790
  cmps(c,0,(int32_t)c->r[3],0); // 80042794
  W32(c->r[28]+0x00000154u,c->r[3]); // 80042798
  if (crb(c,2)) { goto L_800427A8; } // 8004279C
  c->lr=0x800427A4u; f_80295B6C(c); // 800427A0
  goto L_8004280C; // 800427A4
L_800427A8:;
  c->r[3]=R32(c->r[28]+0x00000158u); // 800427A8
  c->r[4]=c->r[31]|c->r[31]; // 800427AC
  c->r[5]=c->r[30]|c->r[30]; // 800427B0
  c->lr=0x800427B8u; f_802C0F98(c); // 800427B4
  c->r[27]=c->r[3]|c->r[3]; // 800427B8
  c->r[3]=0u+0x00000044u; // 800427BC
  c->r[4]=c->r[13]+0xFFFF8E90u; // 800427C0
  c->r[5]=0u+0x00000000u; // 800427C4
  c->r[6]=0u+0x00001001u; // 800427C8
  c->lr=0x800427D0u; f_80244D20(c); // 800427CC
  cmps(c,0,(int32_t)c->r[3],0); // 800427D0
  if (crb(c,2)) { goto L_800427E8; } // 800427D4
  c->r[5]=R32(c->r[28]+0x00000150u); // 800427D8
  c->r[4]=c->r[27]|c->r[27]; // 800427DC
  c->r[6]=0u+0x00000000u; // 800427E0
  c->lr=0x800427E8u; f_8029316C(c); // 800427E4
L_800427E8:;
  W32(c->r[28]+0x00000154u,c->r[3]); // 800427E8
  c->r[4]=c->r[29]|c->r[29]; // 800427EC
  c->r[7]=R32(c->r[28]+0x00000158u); // 800427F0
  c->r[5]=c->r[30]|c->r[30]; // 800427F4
  c->r[6]=c->r[31]|c->r[31]; // 800427F8
  c->r[8]=0u+0x00000001u; // 800427FC
  c->r[9]=0u+0x00000000u; // 80042800
  c->lr=0x80042808u; f_8027FFF4(c); // 80042804
  W32(c->r[28]+0x00000154u,c->r[3]); // 80042808
L_8004280C:;
  c->r[4]=R32(c->r[28]+0x0000015Cu); // 8004280C
  cmps(c,0,(int32_t)c->r[4],0); // 80042810
  if (crb(c,2)) { goto L_800428B8; } // 80042814
  c->r[0]=0u+0x00000001u; // 80042818
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004281C
  c->r[6]=c->r[29]|c->r[29]; // 80042820
  c->r[7]=c->r[30]|c->r[30]; // 80042824
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80042828
  c->r[8]=c->r[31]|c->r[31]; // 8004282C
  c->r[9]=R32(c->r[28]+0x00000164u); // 80042830
  c->r[5]=0u+0x00000000u; // 80042834
  c->r[10]=0u+0x00000001u; // 80042838
  c->lr=0x80042840u; f_80281A84(c); // 8004283C
  cmps(c,0,(int32_t)c->r[3],0); // 80042840
  W32(c->r[28]+0x00000160u,c->r[3]); // 80042844
  if (crb(c,2)) { goto L_80042854; } // 80042848
  c->lr=0x80042850u; f_80295B6C(c); // 8004284C
  goto L_800428B8; // 80042850
L_80042854:;
  c->r[3]=R32(c->r[28]+0x00000164u); // 80042854
  c->r[4]=c->r[31]|c->r[31]; // 80042858
  c->r[5]=c->r[30]|c->r[30]; // 8004285C
  c->lr=0x80042864u; f_802C0F98(c); // 80042860
  c->r[27]=c->r[3]|c->r[3]; // 80042864
  c->r[3]=0u+0x00000044u; // 80042868
  c->r[4]=c->r[13]+0xFFFF8E95u; // 8004286C
  c->r[5]=0u+0x00000000u; // 80042870
  c->r[6]=0u+0x00001001u; // 80042874
  c->lr=0x8004287Cu; f_80244D20(c); // 80042878
  cmps(c,0,(int32_t)c->r[3],0); // 8004287C
  if (crb(c,2)) { goto L_80042894; } // 80042880
  c->r[5]=R32(c->r[28]+0x0000015Cu); // 80042884
  c->r[4]=c->r[27]|c->r[27]; // 80042888
  c->r[6]=0u+0x00000000u; // 8004288C
  c->lr=0x80042894u; f_8029316C(c); // 80042890
L_80042894:;
  W32(c->r[28]+0x00000160u,c->r[3]); // 80042894
  c->r[4]=c->r[29]|c->r[29]; // 80042898
  c->r[7]=R32(c->r[28]+0x00000164u); // 8004289C
  c->r[5]=c->r[30]|c->r[30]; // 800428A0
  c->r[6]=c->r[31]|c->r[31]; // 800428A4
  c->r[8]=0u+0x00000001u; // 800428A8
  c->r[9]=0u+0x00000000u; // 800428AC
  c->lr=0x800428B4u; f_8027FFF4(c); // 800428B0
  W32(c->r[28]+0x00000160u,c->r[3]); // 800428B4
L_800428B8:;
  c->r[4]=R32(c->r[28]+0x00000168u); // 800428B8
  cmps(c,0,(int32_t)c->r[4],0); // 800428BC
  if (crb(c,2)) { goto L_80042964; } // 800428C0
  c->r[0]=0u+0x00000001u; // 800428C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800428C8
  c->r[6]=c->r[29]|c->r[29]; // 800428CC
  c->r[7]=c->r[30]|c->r[30]; // 800428D0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800428D4
  c->r[8]=c->r[31]|c->r[31]; // 800428D8
  c->r[9]=R32(c->r[28]+0x00000170u); // 800428DC
  c->r[5]=0u+0x00000000u; // 800428E0
  c->r[10]=0u+0x00000001u; // 800428E4
  c->lr=0x800428ECu; f_80281A84(c); // 800428E8
  cmps(c,0,(int32_t)c->r[3],0); // 800428EC
  W32(c->r[28]+0x0000016Cu,c->r[3]); // 800428F0
  if (crb(c,2)) { goto L_80042900; } // 800428F4
  c->lr=0x800428FCu; f_80295B6C(c); // 800428F8
  goto L_80042964; // 800428FC
L_80042900:;
  c->r[3]=R32(c->r[28]+0x00000170u); // 80042900
  c->r[4]=c->r[31]|c->r[31]; // 80042904
  c->r[5]=c->r[30]|c->r[30]; // 80042908
  c->lr=0x80042910u; f_802C0F98(c); // 8004290C
  c->r[27]=c->r[3]|c->r[3]; // 80042910
  c->r[3]=0u+0x00000044u; // 80042914
  c->r[4]=c->r[13]+0xFFFF8E9Au; // 80042918
  c->r[5]=0u+0x00000000u; // 8004291C
  c->r[6]=0u+0x00001001u; // 80042920
  c->lr=0x80042928u; f_80244D20(c); // 80042924
  cmps(c,0,(int32_t)c->r[3],0); // 80042928
  if (crb(c,2)) { goto L_80042940; } // 8004292C
  c->r[5]=R32(c->r[28]+0x00000168u); // 80042930
  c->r[4]=c->r[27]|c->r[27]; // 80042934
  c->r[6]=0u+0x00000000u; // 80042938
  c->lr=0x80042940u; f_8029316C(c); // 8004293C
L_80042940:;
  W32(c->r[28]+0x0000016Cu,c->r[3]); // 80042940
  c->r[4]=c->r[29]|c->r[29]; // 80042944
  c->r[7]=R32(c->r[28]+0x00000170u); // 80042948
  c->r[5]=c->r[30]|c->r[30]; // 8004294C
  c->r[6]=c->r[31]|c->r[31]; // 80042950
  c->r[8]=0u+0x00000001u; // 80042954
  c->r[9]=0u+0x00000000u; // 80042958
  c->lr=0x80042960u; f_8027FFF4(c); // 8004295C
  W32(c->r[28]+0x0000016Cu,c->r[3]); // 80042960
L_80042964:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80042964
  c->r[0]=R32(c->r[1]+0x00000034u); // 80042968
  c->lr=c->r[0]; // 8004296C
  c->r[1]=c->r[1]+0x00000030u; // 80042970
  return; // 80042974
}

// fn_80042978
void f_80042978(Ctx* __restrict c) {
  trace_call(0x80042978u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042978
  c->r[0]=c->lr; // 8004297C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80042984
  c->r[31]=c->r[3]|c->r[3]; // 80042988
  c->r[0]=R32(c->r[3]+0x00000174u); // 8004298C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80042990
  W32(c->r[3]+0x00000174u,c->r[0]); // 80042994
  if (!crb(c,2)) { goto L_80042A60; } // 80042998
  c->lr=0x800429A0u; f_802B11D0(c); // 8004299C
  c->r[3]=R32(c->r[31]+0x00000100u); // 800429A0
  cmps(c,0,(int32_t)c->r[3],0); // 800429A4
  if (crb(c,2)) { goto L_800429B8; } // 800429A8
  c->lr=0x800429B0u; f_80295B7C(c); // 800429AC
  c->r[0]=0u+0x00000000u; // 800429B0
  W32(c->r[31]+0x00000100u,c->r[0]); // 800429B4
L_800429B8:;
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 800429B8
  cmps(c,0,(int32_t)c->r[3],0); // 800429BC
  if (crb(c,2)) { goto L_800429D0; } // 800429C0
  c->lr=0x800429C8u; f_80295B7C(c); // 800429C4
  c->r[0]=0u+0x00000000u; // 800429C8
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800429CC
L_800429D0:;
  c->r[3]=R32(c->r[31]+0x00000130u); // 800429D0
  cmps(c,0,(int32_t)c->r[3],0); // 800429D4
  if (crb(c,2)) { goto L_800429E8; } // 800429D8
  c->lr=0x800429E0u; f_80295B7C(c); // 800429DC
  c->r[0]=0u+0x00000000u; // 800429E0
  W32(c->r[31]+0x00000130u,c->r[0]); // 800429E4
L_800429E8:;
  c->r[3]=R32(c->r[31]+0x0000013Cu); // 800429E8
  cmps(c,0,(int32_t)c->r[3],0); // 800429EC
  if (crb(c,2)) { goto L_80042A00; } // 800429F0
  c->lr=0x800429F8u; f_80295B7C(c); // 800429F4
  c->r[0]=0u+0x00000000u; // 800429F8
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 800429FC
L_80042A00:;
  c->r[3]=R32(c->r[31]+0x00000148u); // 80042A00
  cmps(c,0,(int32_t)c->r[3],0); // 80042A04
  if (crb(c,2)) { goto L_80042A18; } // 80042A08
  c->lr=0x80042A10u; f_80295B7C(c); // 80042A0C
  c->r[0]=0u+0x00000000u; // 80042A10
  W32(c->r[31]+0x00000148u,c->r[0]); // 80042A14
L_80042A18:;
  c->r[3]=R32(c->r[31]+0x00000154u); // 80042A18
  cmps(c,0,(int32_t)c->r[3],0); // 80042A1C
  if (crb(c,2)) { goto L_80042A30; } // 80042A20
  c->lr=0x80042A28u; f_80295B7C(c); // 80042A24
  c->r[0]=0u+0x00000000u; // 80042A28
  W32(c->r[31]+0x00000154u,c->r[0]); // 80042A2C
L_80042A30:;
  c->r[3]=R32(c->r[31]+0x00000160u); // 80042A30
  cmps(c,0,(int32_t)c->r[3],0); // 80042A34
  if (crb(c,2)) { goto L_80042A48; } // 80042A38
  c->lr=0x80042A40u; f_80295B7C(c); // 80042A3C
  c->r[0]=0u+0x00000000u; // 80042A40
  W32(c->r[31]+0x00000160u,c->r[0]); // 80042A44
L_80042A48:;
  c->r[3]=R32(c->r[31]+0x0000016Cu); // 80042A48
  cmps(c,0,(int32_t)c->r[3],0); // 80042A4C
  if (crb(c,2)) { goto L_80042A60; } // 80042A50
  c->lr=0x80042A58u; f_80295B7C(c); // 80042A54
  c->r[0]=0u+0x00000000u; // 80042A58
  W32(c->r[31]+0x0000016Cu,c->r[0]); // 80042A5C
L_80042A60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80042A60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80042A64
  c->lr=c->r[0]; // 80042A68
  c->r[1]=c->r[1]+0x00000010u; // 80042A6C
  return; // 80042A70
}

// fn_80042A74
void f_80042A74(Ctx* __restrict c) {
  trace_call(0x80042A74u);
  f_80038EC8(c); return; // 80042A74
}

// fn_80042A78
void f_80042A78(Ctx* __restrict c) {
  trace_call(0x80042A78u);
  cmps(c,0,(int32_t)c->r[6],0); // 80042A78
  if (!crb(c,2)) return; // 80042A7C
  f_8003AF18(c); return; // 80042A80
  return; // 80042A84
}

// fn_80042A88
void f_80042A88(Ctx* __restrict c) {
  trace_call(0x80042A88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042A88
  c->r[0]=c->lr; // 80042A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042A90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80042A94
  c->r[31]=c->r[3]|c->r[3]; // 80042A98
  c->lr=0x80042AA0u; f_8003AF68(c); // 80042A9C
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042AA0
  c->r[4]=0u+0x00000000u; // 80042AA4
  c->r[5]=0u+0x0000007Fu; // 80042AA8
  c->r[3]=0u+0x00000004u; // 80042AAC
  c->r[0]=0u+0x00000001u; // 80042AB0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80042AB4
  {uint32_t ea=c->r[2]+0xFFFF8700u; c->f[1]=c->ps1[1]=RF32(ea);} // 80042AB8
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042ABC
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[3]);} // 80042AC0
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[2]);} // 80042AC4
  W8(c->r[31]+0x000000ECu,c->r[5]); // 80042AC8
  W8(c->r[31]+0x000000EDu,c->r[5]); // 80042ACC
  W8(c->r[31]+0x000000EEu,c->r[5]); // 80042AD0
  W8(c->r[31]+0x000000EFu,c->r[5]); // 80042AD4
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[3]);} // 80042AD8
  W8(c->r[31]+0x000000F4u,c->r[4]); // 80042ADC
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[1]);} // 80042AE0
  W32(c->r[31]+0x000000FCu,c->r[4]); // 80042AE4
  W32(c->r[31]+0x00000100u,c->r[4]); // 80042AE8
  W32(c->r[31]+0x00000104u,c->r[3]); // 80042AEC
  W8(c->r[31]+0x00000108u,c->r[0]); // 80042AF0
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[3]);} // 80042AF4
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[0]);} // 80042AF8
  W8(c->r[31]+0x00000114u,c->r[4]); // 80042AFC
  W32(c->r[31]+0x00000118u,c->r[4]); // 80042B00
  W32(c->r[31]+0x0000011Cu,c->r[4]); // 80042B04
  W32(c->r[31]+0x00000120u,c->r[3]); // 80042B08
  W8(c->r[31]+0x00000124u,c->r[0]); // 80042B0C
  W8(c->r[31]+0x00000125u,c->r[5]); // 80042B10
  W8(c->r[31]+0x00000126u,c->r[5]); // 80042B14
  W8(c->r[31]+0x00000127u,c->r[5]); // 80042B18
  W8(c->r[31]+0x00000128u,c->r[5]); // 80042B1C
  W32(c->r[31]+0x0000012Cu,c->r[4]); // 80042B20
  W32(c->r[31]+0x00000130u,c->r[4]); // 80042B24
  W32(c->r[31]+0x00000134u,c->r[3]); // 80042B28
  W32(c->r[31]+0x00000138u,c->r[4]); // 80042B2C
  W32(c->r[31]+0x0000013Cu,c->r[4]); // 80042B30
  W32(c->r[31]+0x00000140u,c->r[3]); // 80042B34
  W32(c->r[31]+0x00000144u,c->r[4]); // 80042B38
  W32(c->r[31]+0x00000148u,c->r[4]); // 80042B3C
  W32(c->r[31]+0x0000014Cu,c->r[3]); // 80042B40
  W32(c->r[31]+0x00000150u,c->r[4]); // 80042B44
  W32(c->r[31]+0x00000154u,c->r[4]); // 80042B48
  W32(c->r[31]+0x00000158u,c->r[3]); // 80042B4C
  W32(c->r[31]+0x0000015Cu,c->r[4]); // 80042B50
  W32(c->r[31]+0x00000160u,c->r[4]); // 80042B54
  W32(c->r[31]+0x00000164u,c->r[3]); // 80042B58
  W32(c->r[31]+0x00000168u,c->r[4]); // 80042B5C
  W32(c->r[31]+0x0000016Cu,c->r[4]); // 80042B60
  W32(c->r[31]+0x00000170u,c->r[3]); // 80042B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80042B68
  c->r[0]=R32(c->r[1]+0x00000014u); // 80042B6C
  c->lr=c->r[0]; // 80042B70
  c->r[1]=c->r[1]+0x00000010u; // 80042B74
  return; // 80042B78
}

// fn_80042B7C
void f_80042B7C(Ctx* __restrict c) {
  trace_call(0x80042B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042B7C
  c->r[0]=c->lr; // 80042B80
  W32(c->r[1]+0x00000024u,c->r[0]); // 80042B84
  c->r[11]=c->r[1]+0x00000020u; // 80042B88
  c->lr=0x80042B90u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80042B8C
  c->r[31]=c->r[3]|c->r[3]; // 80042B90
  c->r[28]=c->r[4]|c->r[4]; // 80042B94
  c->r[29]=c->r[5]|c->r[5]; // 80042B98
  c->r[30]=c->r[7]|c->r[7]; // 80042B9C
  c->r[6]=0u+0x00000000u; // 80042BA0
  c->lr=0x80042BA8u; f_8003AFFC(c); // 80042BA4
  cmps(c,0,(int32_t)c->r[29],0); // 80042BA8
  if (crb(c,2)) { goto L_80042BB4; } // 80042BAC
  goto L_80042BB8; // 80042BB0
L_80042BB4:;
  c->r[29]=c->r[31]|c->r[31]; // 80042BB4
L_80042BB8:;
  {uint32_t ea=c->r[28]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042BB8
  c->r[3]=c->r[29]+0x000000FCu; // 80042BBC
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[0]);} // 80042BC0
  c->r[4]=c->r[28]+0x000000FCu; // 80042BC4
  {uint32_t ea=c->r[28]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042BC8
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 80042BCC
  c->r[0]=R8(c->r[28]+0x000000ECu); // 80042BD0
  W8(c->r[29]+0x000000ECu,c->r[0]); // 80042BD4
  c->r[0]=R8(c->r[28]+0x000000EDu); // 80042BD8
  W8(c->r[29]+0x000000EDu,c->r[0]); // 80042BDC
  c->r[0]=R8(c->r[28]+0x000000EEu); // 80042BE0
  W8(c->r[29]+0x000000EEu,c->r[0]); // 80042BE4
  c->r[0]=R8(c->r[28]+0x000000EFu); // 80042BE8
  W8(c->r[29]+0x000000EFu,c->r[0]); // 80042BEC
  {uint32_t ea=c->r[28]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042BF0
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[0]);} // 80042BF4
  c->r[0]=R8(c->r[28]+0x000000F4u); // 80042BF8
  W8(c->r[29]+0x000000F4u,c->r[0]); // 80042BFC
  {uint32_t ea=c->r[28]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042C00
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 80042C04
  c->lr=0x80042C0Cu; f_8003BDD0(c); // 80042C08
  c->r[0]=R8(c->r[28]+0x00000108u); // 80042C0C
  c->r[3]=c->r[29]+0x00000118u; // 80042C10
  W8(c->r[29]+0x00000108u,c->r[0]); // 80042C14
  c->r[4]=c->r[28]+0x00000118u; // 80042C18
  {uint32_t ea=c->r[28]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80042C1C
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[0]);} // 80042C20
  {uint32_t ea=c->r[28]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042C24
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[0]);} // 80042C28
  c->r[0]=R8(c->r[28]+0x00000114u); // 80042C2C
  W8(c->r[29]+0x00000114u,c->r[0]); // 80042C30
  c->lr=0x80042C38u; f_8003BDD0(c); // 80042C34
  c->r[0]=R8(c->r[28]+0x00000124u); // 80042C38
  c->r[3]=c->r[29]+0x0000012Cu; // 80042C3C
  W8(c->r[29]+0x00000124u,c->r[0]); // 80042C40
  c->r[4]=c->r[28]+0x0000012Cu; // 80042C44
  c->r[0]=R8(c->r[28]+0x00000125u); // 80042C48
  W8(c->r[29]+0x00000125u,c->r[0]); // 80042C4C
  c->r[0]=R8(c->r[28]+0x00000126u); // 80042C50
  W8(c->r[29]+0x00000126u,c->r[0]); // 80042C54
  c->r[0]=R8(c->r[28]+0x00000127u); // 80042C58
  W8(c->r[29]+0x00000127u,c->r[0]); // 80042C5C
  c->r[0]=R8(c->r[28]+0x00000128u); // 80042C60
  W8(c->r[29]+0x00000128u,c->r[0]); // 80042C64
  c->lr=0x80042C6Cu; f_8003BDD0(c); // 80042C68
  c->r[3]=c->r[29]+0x00000138u; // 80042C6C
  c->r[4]=c->r[28]+0x00000138u; // 80042C70
  c->lr=0x80042C78u; f_8003BDD0(c); // 80042C74
  c->r[3]=c->r[29]+0x00000144u; // 80042C78
  c->r[4]=c->r[28]+0x00000144u; // 80042C7C
  c->lr=0x80042C84u; f_8003BDD0(c); // 80042C80
  c->r[3]=c->r[29]+0x00000150u; // 80042C84
  c->r[4]=c->r[28]+0x00000150u; // 80042C88
  c->lr=0x80042C90u; f_8003BDD0(c); // 80042C8C
  c->r[3]=c->r[29]+0x0000015Cu; // 80042C90
  c->r[4]=c->r[28]+0x0000015Cu; // 80042C94
  c->lr=0x80042C9Cu; f_8003BDD0(c); // 80042C98
  c->r[3]=c->r[29]+0x00000168u; // 80042C9C
  c->r[4]=c->r[28]+0x00000168u; // 80042CA0
  c->lr=0x80042CA8u; f_8003BDD0(c); // 80042CA4
  cmps(c,0,(int32_t)c->r[30],0); // 80042CA8
  if (crb(c,2)) { goto L_80042CD0; } // 80042CAC
  c->r[3]=R32(c->r[31]+0x00000174u); // 80042CB0
  cmps(c,0,(int32_t)c->r[3],0); // 80042CB4
  if (crb(c,1)) { goto L_80042CC8; } // 80042CB8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80042CBC
  W32(c->r[31]+0x00000174u,c->r[0]); // 80042CC0
  goto L_80042CD0; // 80042CC4
L_80042CC8:;
  c->r[0]=c->r[3]+0x00000001u; // 80042CC8
  W32(c->r[31]+0x00000174u,c->r[0]); // 80042CCC
L_80042CD0:;
  c->r[11]=c->r[1]+0x00000020u; // 80042CD0
  c->lr=0x80042CD8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80042CD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80042CD8
  c->lr=c->r[0]; // 80042CDC
  c->r[1]=c->r[1]+0x00000020u; // 80042CE0
  return; // 80042CE4
}

// fn_80042CE8
void f_80042CE8(Ctx* __restrict c) {
  trace_call(0x80042CE8u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 80042CE8
  cmpu(c,0,c->r[0],0x0000DF21u); // 80042CEC
  if (!crb(c,2)) { goto L_80042CFC; } // 80042CF0
  c->r[3]=0u+0x00000001u; // 80042CF4
  return; // 80042CF8
L_80042CFC:;
  c->r[0]=c->r[4]+0x05C00000u; // 80042CFC
  cmpu(c,0,c->r[0],0x00000802u); // 80042D00
  if (!crb(c,2)) { goto L_80042D10; } // 80042D04
  c->r[3]=0u+0x00000001u; // 80042D08
  return; // 80042D0C
L_80042D10:;
  c->r[3]=0u+0xD12F0000u; // 80042D10
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80042D14
  c->r[0]=c->r[4]-c->r[0]; // 80042D18
  c->r[0]=cntlz(c->r[0]); // 80042D1C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80042D20
  return; // 80042D24
}

// fn_80042D28
void f_80042D28(Ctx* __restrict c) {
  trace_call(0x80042D28u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80042D28
  c->r[0]=c->lr; // 80042D2C
  W32(c->r[1]+0x00000084u,c->r[0]); // 80042D30
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 80042D34
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 80042D38
  c->r[11]=c->r[1]+0x00000070u; // 80042D3C
  c->lr=0x80042D44u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80042D40
  c->f[31]=c->f[1]; // 80042D44
  c->r[0]=0u+0x43300000u; // 80042D48
  W32(c->r[1]+0x00000008u,c->r[0]); // 80042D4C
  c->r[29]=c->r[3]|c->r[3]; // 80042D50
  c->r[31]=c->r[4]|c->r[4]; // 80042D54
  c->r[30]=c->r[5]|c->r[5]; // 80042D58
  W32(c->r[1]+0x00000010u,c->r[0]); // 80042D5C
  c->lr=0x80042D64u; f_8003B104(c); // 80042D60
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80042D64
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80042D68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80042D6C
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042D70
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[0]); // 80042D74
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 80042D78
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042D7C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042D80
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[2]);} // 80042D84
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042D88
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80042D8C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042D90
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042D94
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042D98
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[2]);} // 80042D9C
  c->r[3]=R8(c->r[31]+0x000000ECu); // 80042DA0
  c->r[0]=R8(c->r[30]+0x000000ECu); // 80042DA4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042DAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042DB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042DB4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042DB8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80042DBC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042DC0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042DC4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042DC8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80042DCC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 80042DD0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80042DD4
  W8(c->r[29]+0x000000ECu,c->r[0]); // 80042DD8
  c->r[3]=R8(c->r[31]+0x000000EDu); // 80042DDC
  c->r[0]=R8(c->r[30]+0x000000EDu); // 80042DE0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042DE8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042DEC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042DF0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042DF4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80042DF8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042DFC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042E00
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042E04
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80042E08
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 80042E0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80042E10
  W8(c->r[29]+0x000000EDu,c->r[0]); // 80042E14
  c->r[3]=R8(c->r[31]+0x000000EEu); // 80042E18
  c->r[0]=R8(c->r[30]+0x000000EEu); // 80042E1C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042E20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042E24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042E28
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042E2C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042E30
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80042E34
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042E38
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042E3C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042E40
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80042E44
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 80042E48
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80042E4C
  W8(c->r[29]+0x000000EEu,c->r[0]); // 80042E50
  c->r[3]=R8(c->r[31]+0x000000EFu); // 80042E54
  c->r[0]=R8(c->r[30]+0x000000EFu); // 80042E58
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042E5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042E60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042E64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042E68
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042E6C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80042E70
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042E74
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042E78
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042E7C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80042E80
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80042E84
  c->r[0]=R32(c->r[1]+0x00000034u); // 80042E88
  W8(c->r[29]+0x000000EFu,c->r[0]); // 80042E8C
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042E90
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80042E94
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042E98
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042E9C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042EA0
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[2]);} // 80042EA4
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042EA8
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80042EAC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042EB0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042EB4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042EB8
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[2]);} // 80042EBC
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80042EC0
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80042EC4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042EC8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042ECC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042ED0
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[2]);} // 80042ED4
  {uint32_t ea=c->r[31]+0x00000110u; c->f[3]=c->ps1[3]=RF32(ea);} // 80042ED8
  {uint32_t ea=c->r[30]+0x00000110u; c->f[2]=c->ps1[2]=RF32(ea);} // 80042EDC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042EE0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042EE4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042EE8
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[2]);} // 80042EEC
  c->r[3]=R8(c->r[31]+0x00000125u); // 80042EF0
  c->r[0]=R8(c->r[30]+0x00000125u); // 80042EF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042EFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042F00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042F04
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042F08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80042F0C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042F10
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042F14
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042F18
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80042F1C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 80042F20
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80042F24
  W8(c->r[29]+0x00000125u,c->r[0]); // 80042F28
  c->r[3]=R8(c->r[31]+0x00000126u); // 80042F2C
  c->r[0]=R8(c->r[30]+0x00000126u); // 80042F30
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042F38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042F3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042F40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042F44
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80042F48
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042F4C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042F50
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042F54
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80042F58
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 80042F5C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80042F60
  W8(c->r[29]+0x00000126u,c->r[0]); // 80042F64
  c->r[3]=R8(c->r[31]+0x00000127u); // 80042F68
  c->r[0]=R8(c->r[30]+0x00000127u); // 80042F6C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042F74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042F78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042F7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042F80
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80042F84
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80042F88
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 80042F8C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80042F90
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80042F94
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 80042F98
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80042F9C
  W8(c->r[29]+0x00000127u,c->r[0]); // 80042FA0
  c->r[3]=R8(c->r[31]+0x00000128u); // 80042FA4
  c->r[0]=R8(c->r[30]+0x00000128u); // 80042FA8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80042FAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80042FB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80042FB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80042FB8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80042FBC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80042FC0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 80042FC4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80042FC8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80042FCC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80042FD0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 80042FD4
  c->r[0]=R32(c->r[1]+0x00000054u); // 80042FD8
  W8(c->r[29]+0x00000128u,c->r[0]); // 80042FDC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 80042FE0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 80042FE4
  c->r[11]=c->r[1]+0x00000070u; // 80042FE8
  c->lr=0x80042FF0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80042FEC
  c->r[0]=R32(c->r[1]+0x00000084u); // 80042FF0
  c->lr=c->r[0]; // 80042FF4
  c->r[1]=c->r[1]+0x00000080u; // 80042FF8
  return; // 80042FFC
}

// fn_80043000
void f_80043000(Ctx* __restrict c) {
  trace_call(0x80043000u);
  c->r[3]=0u+0x00000178u; // 80043000
  return; // 80043004
}

// fn_80043008
void f_80043008(Ctx* __restrict c) {
  trace_call(0x80043008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043008
  c->r[0]=c->lr; // 8004300C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043014
  c->r[31]=c->r[3]|c->r[3]; // 80043018
  c->lr=0x80043020u; f_80042070(c); // 8004301C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80043020
  c->r[3]=0u+0x80420000u; // 80043024
  c->r[3]=c->r[3]+0x00000E18u; // 80043028
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004302C
  c->r[0]=c->r[0]|0x80000000u; // 80043030
  W32(c->r[31]+0x00000008u,c->r[0]); // 80043034
  c->r[3]=c->r[31]|c->r[31]; // 80043038
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004303C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80043040
  c->ctr=c->r[12]; // 80043044
  if (true) { c->lr=0x8004304Cu; dispatch(c,c->ctr); } // 80043048
  c->r[3]=c->r[31]|c->r[31]; // 8004304C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043050
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043054
  c->lr=c->r[0]; // 80043058
  c->r[1]=c->r[1]+0x00000010u; // 8004305C
  return; // 80043060
}

// fn_80043064
void f_80043064(Ctx* __restrict c) {
  trace_call(0x80043064u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043064
  c->r[0]=c->lr; // 80043068
  cmps(c,0,(int32_t)c->r[3],0); // 8004306C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043070
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043074
  c->r[30]=c->r[3]|c->r[3]; // 80043078
  c->r[31]=c->r[4]|c->r[4]; // 8004307C
  if (crb(c,2)) { goto L_800430A0; } // 80043080
  if (crb(c,2)) { goto L_80043090; } // 80043084
  c->r[4]=0u+0x00000000u; // 80043088
  c->lr=0x80043090u; f_8003ABE0(c); // 8004308C
L_80043090:;
  cmps(c,0,(int32_t)c->r[31],0); // 80043090
  if (!crb(c,1)) { goto L_800430A0; } // 80043094
  c->r[3]=c->r[30]|c->r[30]; // 80043098
  c->lr=0x800430A0u; f_80244DC0(c); // 8004309C
L_800430A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800430A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800430A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800430A8
  c->lr=c->r[0]; // 800430AC
  c->r[1]=c->r[1]+0x00000010u; // 800430B0
  return; // 800430B4
}

// fn_800430B8
void f_800430B8(Ctx* __restrict c) {
  trace_call(0x800430B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800430B8
  c->r[0]=c->lr; // 800430BC
  c->r[3]=0u+0x00000178u; // 800430C0
  c->r[4]=c->r[13]+0xFFFF8E9Fu; // 800430C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800430C8
  c->r[5]=0u+0x00000000u; // 800430CC
  c->r[6]=0u+0x00001001u; // 800430D0
  c->lr=0x800430D8u; f_80244D20(c); // 800430D4
  cmps(c,0,(int32_t)c->r[3],0); // 800430D8
  if (crb(c,2)) { goto L_800430E4; } // 800430DC
  c->lr=0x800430E4u; f_80043008(c); // 800430E0
L_800430E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800430E4
  c->lr=c->r[0]; // 800430E8
  c->r[1]=c->r[1]+0x00000010u; // 800430EC
  return; // 800430F0
}

// fn_800430F4
void f_800430F4(Ctx* __restrict c) {
  trace_call(0x800430F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800430F4
  c->r[0]=c->lr; // 800430F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800430FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043100
  c->r[31]=c->r[3]|c->r[3]; // 80043104
  c->lr=0x8004310Cu; f_80244520(c); // 80043108
  c->r[7]=c->r[3]|c->r[3]; // 8004310C
  c->r[9]=c->r[31]|c->r[31]; // 80043110
  c->r[3]=0u+0x00000178u; // 80043114
  c->r[4]=c->r[13]+0xFFFF8EA4u; // 80043118
  c->r[5]=0u+0x00000000u; // 8004311C
  c->r[6]=0u+0x00002001u; // 80043120
  c->r[8]=0u+0x00000000u; // 80043124
  c->lr=0x8004312Cu; f_80242DF0(c); // 80043128
  c->r[4]=c->r[3]|c->r[3]; // 8004312C
  c->r[3]=0u+0x00000178u; // 80043130
  c->r[5]=c->r[13]+0xFFFF8EA9u; // 80043134
  c->r[6]=0u+0x00000000u; // 80043138
  c->r[7]=0u+0x00001001u; // 8004313C
  c->lr=0x80043144u; f_80244DB0(c); // 80043140
  cmps(c,0,(int32_t)c->r[3],0); // 80043144
  if (crb(c,2)) { goto L_80043150; } // 80043148
  c->lr=0x80043150u; f_80043008(c); // 8004314C
L_80043150:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043154
  c->lr=c->r[0]; // 80043158
  c->r[1]=c->r[1]+0x00000010u; // 8004315C
  return; // 80043160
}

// fn_80043164
void f_80043164(Ctx* __restrict c) {
  trace_call(0x80043164u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043164
  c->r[0]=c->lr; // 80043168
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004316C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043170
  c->r[31]=c->r[3]|c->r[3]; // 80043174
  c->lr=0x8004317Cu; f_8003ACE0(c); // 80043178
  c->r[8]=0u+0x80420000u; // 8004317C
  c->r[6]=0u+0x80410000u; // 80043180
  c->r[7]=0u+0x00000000u; // 80043184
  c->r[5]=0u+0x840B0000u; // 80043188
  c->r[4]=0u+0x46BA0000u; // 8004318C
  c->r[3]=0u+0xA8500000u; // 80043190
  c->r[0]=c->r[3]+0x000076ADu; // 80043194
  c->r[8]=c->r[8]+0x00000DDCu; // 80043198
  c->r[6]=c->r[6]+0xFFFFBB1Fu; // 8004319C
  c->r[5]=c->r[5]+0xFFFF99EAu; // 800431A0
  c->r[4]=c->r[4]+0x00004AC4u; // 800431A4
  W32(c->r[31]+0x00000018u,c->r[8]); // 800431A8
  c->r[3]=c->r[31]|c->r[31]; // 800431AC
  W32(c->r[31]+0x000000F8u,c->r[7]); // 800431B0
  W32(c->r[31]+0x00000000u,c->r[6]); // 800431B4
  W32(c->r[31]+0x00000008u,c->r[7]); // 800431B8
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800431BC
  W32(c->r[31]+0x00000010u,c->r[4]); // 800431C0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800431C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800431C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800431CC
  c->lr=c->r[0]; // 800431D0
  c->r[1]=c->r[1]+0x00000010u; // 800431D4
  return; // 800431D8
}

// fn_800431DC
void f_800431DC(Ctx* __restrict c) {
  trace_call(0x800431DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800431DC
  c->r[0]=c->lr; // 800431E0
  cmps(c,0,(int32_t)c->r[4],0); // 800431E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800431E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800431EC
  c->r[30]=c->r[3]|c->r[3]; // 800431F0
  c->r[31]=c->r[4]|c->r[4]; // 800431F4
  if (crb(c,2)) { goto L_8004324C; } // 800431F8
  c->r[3]=c->r[31]|c->r[31]; // 800431FC
  c->lr=0x80043204u; f_80244520(c); // 80043200
  c->r[7]=c->r[3]|c->r[3]; // 80043204
  c->r[9]=c->r[31]|c->r[31]; // 80043208
  c->r[3]=0u+0x000000FCu; // 8004320C
  c->r[4]=c->r[13]+0xFFFF8EAEu; // 80043210
  c->r[5]=0u+0x00000000u; // 80043214
  c->r[6]=0u+0x00002001u; // 80043218
  c->r[8]=0u+0x00000000u; // 8004321C
  c->lr=0x80043224u; f_80242DF0(c); // 80043220
  c->r[4]=c->r[3]|c->r[3]; // 80043224
  c->r[3]=0u+0x000000FCu; // 80043228
  c->r[5]=c->r[13]+0xFFFF8EB3u; // 8004322C
  c->r[6]=0u+0x00000000u; // 80043230
  c->r[7]=0u+0x00001001u; // 80043234
  c->lr=0x8004323Cu; f_80244DB0(c); // 80043238
  cmps(c,0,(int32_t)c->r[3],0); // 8004323C
  if (crb(c,2)) { goto L_8004326C; } // 80043240
  c->lr=0x80043248u; f_80043164(c); // 80043244
  goto L_8004326C; // 80043248
L_8004324C:;
  c->r[3]=0u+0x000000FCu; // 8004324C
  c->r[4]=c->r[13]+0xFFFF8EB8u; // 80043250
  c->r[5]=0u+0x00000000u; // 80043254
  c->r[6]=0u+0x00001001u; // 80043258
  c->lr=0x80043260u; f_80244D20(c); // 8004325C
  cmps(c,0,(int32_t)c->r[3],0); // 80043260
  if (crb(c,2)) { goto L_8004326C; } // 80043264
  c->lr=0x8004326Cu; f_80043164(c); // 80043268
L_8004326C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004326C
  W16(c->r[3]+0x00000014u,c->r[0]); // 80043270
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043274
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043278
  c->lr=c->r[0]; // 8004327C
  c->r[1]=c->r[1]+0x00000010u; // 80043280
  return; // 80043284
}

// fn_80043288
void f_80043288(Ctx* __restrict c) {
  trace_call(0x80043288u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043288
  c->r[0]=c->lr; // 8004328C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80043290
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043294
  c->r[29]=c->r[3]|c->r[3]; // 80043298
  c->r[30]=c->r[4]|c->r[4]; // 8004329C
  c->lr=0x800432A4u; f_8003AE00(c); // 800432A0
  c->r[31]=c->r[3]|c->r[3]; // 800432A4
  c->r[3]=c->r[30]|c->r[30]; // 800432A8
  c->r[4]=0u+0x00000000u; // 800432AC
  c->lr=0x800432B4u; f_8030BE30(c); // 800432B0
  W32(c->r[29]+0x000000E4u,c->r[3]); // 800432B4
  c->r[0]=0u+0x00000000u; // 800432B8
  c->r[3]=c->r[30]|c->r[30]; // 800432BC
  W32(c->r[29]+0x000000E8u,c->r[0]); // 800432C0
  c->lr=0x800432C8u; f_8030BD1C(c); // 800432C4
  W32(c->r[29]+0x000000ECu,c->r[3]); // 800432C8
  c->r[3]=c->r[30]|c->r[30]; // 800432CC
  c->lr=0x800432D4u; f_8030BD1C(c); // 800432D0
  W32(c->r[29]+0x000000F0u,c->r[3]); // 800432D4
  c->r[3]=c->r[30]|c->r[30]; // 800432D8
  c->lr=0x800432E0u; f_8030BD1C(c); // 800432DC
  W8(c->r[29]+0x000000F4u,c->r[3]); // 800432E0
  c->r[3]=c->r[30]|c->r[30]; // 800432E4
  c->lr=0x800432ECu; f_8030BD1C(c); // 800432E8
  W8(c->r[29]+0x000000F5u,c->r[3]); // 800432EC
  c->r[3]=c->r[30]|c->r[30]; // 800432F0
  c->lr=0x800432F8u; f_8030BD1C(c); // 800432F4
  W8(c->r[29]+0x000000F6u,c->r[3]); // 800432F8
  c->r[3]=c->r[30]|c->r[30]; // 800432FC
  c->lr=0x80043304u; f_8030BD1C(c); // 80043300
  W8(c->r[29]+0x000000F7u,c->r[3]); // 80043304
  c->r[3]=c->r[31]|c->r[31]; // 80043308
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004330C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80043310
  c->lr=c->r[0]; // 80043314
  c->r[1]=c->r[1]+0x00000020u; // 80043318
  return; // 8004331C
}

// fn_80043320
void f_80043320(Ctx* __restrict c) {
  trace_call(0x80043320u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043320
  c->r[0]=c->lr; // 80043324
  W32(c->r[1]+0x00000034u,c->r[0]); // 80043328
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004332C
  c->r[27]=c->r[3]|c->r[3]; // 80043330
  c->r[28]=c->r[4]|c->r[4]; // 80043334
  c->r[29]=c->r[5]|c->r[5]; // 80043338
  c->r[30]=c->r[6]|c->r[6]; // 8004333C
  c->r[7]=R32(c->r[3]+0x000000F8u); // 80043340
  cmps(c,0,(int32_t)c->r[7],0); // 80043344
  if (!crb(c,0)) { goto L_80043358; } // 80043348
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8004334C
  W32(c->r[3]+0x000000F8u,c->r[0]); // 80043350
  goto L_80043368; // 80043354
L_80043358:;
  c->r[0]=c->r[7]+0x00000001u; // 80043358
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004335C
  cmps(c,0,(int32_t)c->r[0],1); // 80043360
  if (crb(c,1)) { goto L_80043428; } // 80043364
L_80043368:;
  c->r[3]=c->r[27]|c->r[27]; // 80043368
  c->r[4]=c->r[28]|c->r[28]; // 8004336C
  c->r[5]=c->r[29]|c->r[29]; // 80043370
  c->r[6]=c->r[30]|c->r[30]; // 80043374
  c->lr=0x8004337Cu; f_802B11C0(c); // 80043378
  c->r[4]=R32(c->r[27]+0x000000E4u); // 8004337C
  cmps(c,0,(int32_t)c->r[4],0); // 80043380
  if (crb(c,2)) { goto L_80043428; } // 80043384
  c->r[0]=0u+0x00000001u; // 80043388
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004338C
  c->r[6]=c->r[28]|c->r[28]; // 80043390
  c->r[7]=c->r[29]|c->r[29]; // 80043394
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80043398
  c->r[8]=c->r[30]|c->r[30]; // 8004339C
  c->r[9]=R32(c->r[27]+0x000000ECu); // 800433A0
  c->r[5]=0u+0x00000005u; // 800433A4
  c->r[10]=0u+0x00000001u; // 800433A8
  c->lr=0x800433B0u; f_80281A84(c); // 800433AC
  cmps(c,0,(int32_t)c->r[3],0); // 800433B0
  W32(c->r[27]+0x000000E8u,c->r[3]); // 800433B4
  if (crb(c,2)) { goto L_800433C4; } // 800433B8
  c->lr=0x800433C0u; f_80295B6C(c); // 800433BC
  goto L_80043428; // 800433C0
L_800433C4:;
  c->r[3]=R32(c->r[27]+0x000000ECu); // 800433C4
  c->r[4]=c->r[30]|c->r[30]; // 800433C8
  c->r[5]=c->r[29]|c->r[29]; // 800433CC
  c->lr=0x800433D4u; f_802C0F98(c); // 800433D0
  c->r[31]=c->r[3]|c->r[3]; // 800433D4
  c->r[3]=0u+0x00000044u; // 800433D8
  c->r[4]=c->r[13]+0xFFFF8EBDu; // 800433DC
  c->r[5]=0u+0x00000000u; // 800433E0
  c->r[6]=0u+0x00001001u; // 800433E4
  c->lr=0x800433ECu; f_80244D20(c); // 800433E8
  cmps(c,0,(int32_t)c->r[3],0); // 800433EC
  if (crb(c,2)) { goto L_80043404; } // 800433F0
  c->r[5]=R32(c->r[27]+0x000000E4u); // 800433F4
  c->r[4]=c->r[31]|c->r[31]; // 800433F8
  c->r[6]=0u+0x00000005u; // 800433FC
  c->lr=0x80043404u; f_8029316C(c); // 80043400
L_80043404:;
  W32(c->r[27]+0x000000E8u,c->r[3]); // 80043404
  c->r[4]=c->r[28]|c->r[28]; // 80043408
  c->r[7]=R32(c->r[27]+0x000000ECu); // 8004340C
  c->r[5]=c->r[29]|c->r[29]; // 80043410
  c->r[6]=c->r[30]|c->r[30]; // 80043414
  c->r[8]=0u+0x00000001u; // 80043418
  c->r[9]=0u+0x00000000u; // 8004341C
  c->lr=0x80043424u; f_8027FFF4(c); // 80043420
  W32(c->r[27]+0x000000E8u,c->r[3]); // 80043424
L_80043428:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043428
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004342C
  c->lr=c->r[0]; // 80043430
  c->r[1]=c->r[1]+0x00000030u; // 80043434
  return; // 80043438
}

// fn_8004343C
void f_8004343C(Ctx* __restrict c) {
  trace_call(0x8004343Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004343C
  c->r[0]=c->lr; // 80043440
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043444
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043448
  c->r[31]=c->r[3]|c->r[3]; // 8004344C
  c->r[0]=R32(c->r[3]+0x000000F8u); // 80043450
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80043454
  W32(c->r[3]+0x000000F8u,c->r[0]); // 80043458
  if (!crb(c,2)) { goto L_8004347C; } // 8004345C
  c->lr=0x80043464u; f_802B11D0(c); // 80043460
  c->r[3]=R32(c->r[31]+0x000000E8u); // 80043464
  cmps(c,0,(int32_t)c->r[3],0); // 80043468
  if (crb(c,2)) { goto L_8004347C; } // 8004346C
  c->lr=0x80043474u; f_80295B7C(c); // 80043470
  c->r[0]=0u+0x00000000u; // 80043474
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80043478
L_8004347C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004347C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043480
  c->lr=c->r[0]; // 80043484
  c->r[1]=c->r[1]+0x00000010u; // 80043488
  return; // 8004348C
}

// fn_80043490
void f_80043490(Ctx* __restrict c) {
  trace_call(0x80043490u);
  f_80038EC8(c); return; // 80043490
}

// fn_80043494
void f_80043494(Ctx* __restrict c) {
  trace_call(0x80043494u);
  cmps(c,0,(int32_t)c->r[6],0); // 80043494
  if (!crb(c,2)) return; // 80043498
  f_8003AF18(c); return; // 8004349C
  return; // 800434A0
}

// fn_800434A4
void f_800434A4(Ctx* __restrict c) {
  trace_call(0x800434A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800434A4
  c->r[0]=c->lr; // 800434A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800434AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800434B0
  c->r[31]=c->r[3]|c->r[3]; // 800434B4
  c->lr=0x800434BCu; f_8003AF68(c); // 800434B8
  c->r[0]=0u+0x0000007Fu; // 800434BC
  c->r[5]=0u+0x00000000u; // 800434C0
  c->r[4]=0u+0x00000004u; // 800434C4
  c->r[3]=0u+0x00000001u; // 800434C8
  W32(c->r[31]+0x000000E4u,c->r[5]); // 800434CC
  W32(c->r[31]+0x000000E8u,c->r[5]); // 800434D0
  W32(c->r[31]+0x000000ECu,c->r[4]); // 800434D4
  W32(c->r[31]+0x000000F0u,c->r[3]); // 800434D8
  W8(c->r[31]+0x000000F4u,c->r[0]); // 800434DC
  W8(c->r[31]+0x000000F5u,c->r[0]); // 800434E0
  W8(c->r[31]+0x000000F6u,c->r[0]); // 800434E4
  W8(c->r[31]+0x000000F7u,c->r[0]); // 800434E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800434EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800434F0
  c->lr=c->r[0]; // 800434F4
  c->r[1]=c->r[1]+0x00000010u; // 800434F8
  return; // 800434FC
}

// fn_80043500
void f_80043500(Ctx* __restrict c) {
  trace_call(0x80043500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043500
  c->r[0]=c->lr; // 80043504
  c->r[6]=0u+0x00000000u; // 80043508
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004350C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043510
  c->r[28]=c->r[3]|c->r[3]; // 80043514
  c->r[29]=c->r[4]|c->r[4]; // 80043518
  c->r[30]=c->r[5]|c->r[5]; // 8004351C
  c->r[31]=c->r[7]|c->r[7]; // 80043520
  c->lr=0x80043528u; f_8003AFFC(c); // 80043524
  cmps(c,0,(int32_t)c->r[30],0); // 80043528
  if (crb(c,2)) { goto L_80043534; } // 8004352C
  goto L_80043538; // 80043530
L_80043534:;
  c->r[30]=c->r[28]|c->r[28]; // 80043534
L_80043538:;
  c->r[3]=c->r[30]+0x000000E4u; // 80043538
  c->r[4]=c->r[29]+0x000000E4u; // 8004353C
  c->lr=0x80043544u; f_8003BDD0(c); // 80043540
  c->r[0]=R32(c->r[29]+0x000000F0u); // 80043544
  cmps(c,0,(int32_t)c->r[31],0); // 80043548
  W32(c->r[30]+0x000000F0u,c->r[0]); // 8004354C
  c->r[0]=R8(c->r[29]+0x000000F4u); // 80043550
  W8(c->r[30]+0x000000F4u,c->r[0]); // 80043554
  c->r[0]=R8(c->r[29]+0x000000F5u); // 80043558
  W8(c->r[30]+0x000000F5u,c->r[0]); // 8004355C
  c->r[0]=R8(c->r[29]+0x000000F6u); // 80043560
  W8(c->r[30]+0x000000F6u,c->r[0]); // 80043564
  c->r[0]=R8(c->r[29]+0x000000F7u); // 80043568
  W8(c->r[30]+0x000000F7u,c->r[0]); // 8004356C
  if (crb(c,2)) { goto L_80043594; } // 80043570
  c->r[3]=R32(c->r[28]+0x000000F8u); // 80043574
  cmps(c,0,(int32_t)c->r[3],0); // 80043578
  if (crb(c,1)) { goto L_8004358C; } // 8004357C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80043580
  W32(c->r[28]+0x000000F8u,c->r[0]); // 80043584
  goto L_80043594; // 80043588
L_8004358C:;
  c->r[0]=c->r[3]+0x00000001u; // 8004358C
  W32(c->r[28]+0x000000F8u,c->r[0]); // 80043590
L_80043594:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043594
  c->r[0]=R32(c->r[1]+0x00000024u); // 80043598
  c->lr=c->r[0]; // 8004359C
  c->r[1]=c->r[1]+0x00000020u; // 800435A0
  return; // 800435A4
}

// fn_800435A8
void f_800435A8(Ctx* __restrict c) {
  trace_call(0x800435A8u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 800435A8
  cmpu(c,0,c->r[0],0x0000DF21u); // 800435AC
  if (!crb(c,2)) { goto L_800435BC; } // 800435B0
  c->r[3]=0u+0x00000001u; // 800435B4
  return; // 800435B8
L_800435BC:;
  c->r[0]=c->r[4]+0x05C00000u; // 800435BC
  cmpu(c,0,c->r[0],0x00000802u); // 800435C0
  if (!crb(c,2)) { goto L_800435D0; } // 800435C4
  c->r[3]=0u+0x00000001u; // 800435C8
  return; // 800435CC
L_800435D0:;
  c->r[3]=0u+0xD12F0000u; // 800435D0
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 800435D4
  c->r[0]=c->r[4]-c->r[0]; // 800435D8
  c->r[0]=cntlz(c->r[0]); // 800435DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800435E0
  return; // 800435E4
}

// fn_800435E8
void f_800435E8(Ctx* __restrict c) {
  trace_call(0x800435E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800435E8
  c->r[0]=c->lr; // 800435EC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800435F0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800435F4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800435F8
  c->r[11]=c->r[1]+0x00000050u; // 800435FC
  c->lr=0x80043604u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80043600
  c->f[31]=c->f[1]; // 80043604
  c->r[0]=0u+0x43300000u; // 80043608
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004360C
  c->r[29]=c->r[3]|c->r[3]; // 80043610
  c->r[31]=c->r[4]|c->r[4]; // 80043614
  c->r[30]=c->r[5]|c->r[5]; // 80043618
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004361C
  c->lr=0x80043624u; f_8003B104(c); // 80043620
  c->r[3]=R8(c->r[31]+0x000000F4u); // 80043624
  c->r[0]=R8(c->r[30]+0x000000F4u); // 80043628
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004362C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80043630
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043634
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 80043638
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[2]=RF64(ea);} // 8004363C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80043640
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80043644
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80043648
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8004364C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80043650
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80043654
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80043658
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8004365C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80043660
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80043664
  W8(c->r[29]+0x000000F4u,c->r[0]); // 80043668
  c->r[3]=R8(c->r[31]+0x000000F5u); // 8004366C
  c->r[0]=R8(c->r[30]+0x000000F5u); // 80043670
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80043674
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043678
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8004367C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80043680
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80043684
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80043688
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8004368C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80043690
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80043694
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80043698
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8004369C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800436A0
  W8(c->r[29]+0x000000F5u,c->r[0]); // 800436A4
  c->r[3]=R8(c->r[31]+0x000000F6u); // 800436A8
  c->r[0]=R8(c->r[30]+0x000000F6u); // 800436AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800436B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800436B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800436B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800436BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800436C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800436C4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800436C8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800436CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800436D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800436D4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800436D8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800436DC
  W8(c->r[29]+0x000000F6u,c->r[0]); // 800436E0
  c->r[3]=R8(c->r[31]+0x000000F7u); // 800436E4
  c->r[0]=R8(c->r[30]+0x000000F7u); // 800436E8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800436EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800436F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800436F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800436F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800436FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80043700
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80043704
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80043708
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004370C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80043710
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80043714
  c->r[0]=R32(c->r[1]+0x00000034u); // 80043718
  W8(c->r[29]+0x000000F7u,c->r[0]); // 8004371C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80043720
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80043724
  c->r[11]=c->r[1]+0x00000050u; // 80043728
  c->lr=0x80043730u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004372C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80043730
  c->lr=c->r[0]; // 80043734
  c->r[1]=c->r[1]+0x00000060u; // 80043738
  return; // 8004373C
}

// fn_80043740
void f_80043740(Ctx* __restrict c) {
  trace_call(0x80043740u);
  c->r[3]=0u+0x000000FCu; // 80043740
  return; // 80043744
}

// fn_80043748
void f_80043748(Ctx* __restrict c) {
  trace_call(0x80043748u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043748
  c->r[0]=c->lr; // 8004374C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043754
  c->r[31]=c->r[3]|c->r[3]; // 80043758
  c->lr=0x80043760u; f_80043164(c); // 8004375C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80043760
  c->r[3]=0u+0x80420000u; // 80043764
  c->r[3]=c->r[3]+0x00000D9Cu; // 80043768
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004376C
  c->r[0]=c->r[0]|0x80000000u; // 80043770
  W32(c->r[31]+0x00000008u,c->r[0]); // 80043774
  c->r[3]=c->r[31]|c->r[31]; // 80043778
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004377C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80043780
  c->ctr=c->r[12]; // 80043784
  if (true) { c->lr=0x8004378Cu; dispatch(c,c->ctr); } // 80043788
  c->r[3]=c->r[31]|c->r[31]; // 8004378C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043790
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043794
  c->lr=c->r[0]; // 80043798
  c->r[1]=c->r[1]+0x00000010u; // 8004379C
  return; // 800437A0
}

// fn_800437A4
void f_800437A4(Ctx* __restrict c) {
  trace_call(0x800437A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800437A4
  c->r[0]=c->lr; // 800437A8
  cmps(c,0,(int32_t)c->r[3],0); // 800437AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800437B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800437B4
  c->r[30]=c->r[3]|c->r[3]; // 800437B8
  c->r[31]=c->r[4]|c->r[4]; // 800437BC
  if (crb(c,2)) { goto L_800437E0; } // 800437C0
  if (crb(c,2)) { goto L_800437D0; } // 800437C4
  c->r[4]=0u+0x00000000u; // 800437C8
  c->lr=0x800437D0u; f_8003ABE0(c); // 800437CC
L_800437D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800437D0
  if (!crb(c,1)) { goto L_800437E0; } // 800437D4
  c->r[3]=c->r[30]|c->r[30]; // 800437D8
  c->lr=0x800437E0u; f_80244DC0(c); // 800437DC
L_800437E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800437E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800437E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800437E8
  c->lr=c->r[0]; // 800437EC
  c->r[1]=c->r[1]+0x00000010u; // 800437F0
  return; // 800437F4
}

// fn_800437F8
void f_800437F8(Ctx* __restrict c) {
  trace_call(0x800437F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800437F8
  c->r[0]=c->lr; // 800437FC
  c->r[3]=0u+0x000000FCu; // 80043800
  c->r[4]=c->r[13]+0xFFFF8EC2u; // 80043804
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043808
  c->r[5]=0u+0x00000000u; // 8004380C
  c->r[6]=0u+0x00001001u; // 80043810
  c->lr=0x80043818u; f_80244D20(c); // 80043814
  cmps(c,0,(int32_t)c->r[3],0); // 80043818
  if (crb(c,2)) { goto L_80043824; } // 8004381C
  c->lr=0x80043824u; f_80043748(c); // 80043820
L_80043824:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043824
  c->lr=c->r[0]; // 80043828
  c->r[1]=c->r[1]+0x00000010u; // 8004382C
  return; // 80043830
}

// fn_80043834
void f_80043834(Ctx* __restrict c) {
  trace_call(0x80043834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043834
  c->r[0]=c->lr; // 80043838
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004383C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043840
  c->r[31]=c->r[3]|c->r[3]; // 80043844
  c->lr=0x8004384Cu; f_80244520(c); // 80043848
  c->r[7]=c->r[3]|c->r[3]; // 8004384C
  c->r[9]=c->r[31]|c->r[31]; // 80043850
  c->r[3]=0u+0x000000FCu; // 80043854
  c->r[4]=c->r[13]+0xFFFF8EC7u; // 80043858
  c->r[5]=0u+0x00000000u; // 8004385C
  c->r[6]=0u+0x00002001u; // 80043860
  c->r[8]=0u+0x00000000u; // 80043864
  c->lr=0x8004386Cu; f_80242DF0(c); // 80043868
  c->r[4]=c->r[3]|c->r[3]; // 8004386C
  c->r[3]=0u+0x000000FCu; // 80043870
  c->r[5]=c->r[13]+0xFFFF8ECCu; // 80043874
  c->r[6]=0u+0x00000000u; // 80043878
  c->r[7]=0u+0x00001001u; // 8004387C
  c->lr=0x80043884u; f_80244DB0(c); // 80043880
  cmps(c,0,(int32_t)c->r[3],0); // 80043884
  if (crb(c,2)) { goto L_80043890; } // 80043888
  c->lr=0x80043890u; f_80043748(c); // 8004388C
L_80043890:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043894
  c->lr=c->r[0]; // 80043898
  c->r[1]=c->r[1]+0x00000010u; // 8004389C
  return; // 800438A0
}

// fn_800438A4
void f_800438A4(Ctx* __restrict c) {
  trace_call(0x800438A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800438A4
  c->r[0]=c->lr; // 800438A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800438AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800438B0
  c->r[31]=c->r[3]|c->r[3]; // 800438B4
  c->lr=0x800438BCu; f_8003ACE0(c); // 800438B8
  c->r[8]=0u+0x80420000u; // 800438BC
  c->r[7]=0u+0x80410000u; // 800438C0
  c->r[5]=0u+0xD3490000u; // 800438C4
  c->r[4]=0u+0x7AC20000u; // 800438C8
  c->r[3]=0u+0x54930000u; // 800438CC
  c->r[8]=c->r[8]+0x00000D60u; // 800438D0
  c->r[0]=c->r[3]+0xFFFFE29Au; // 800438D4
  c->r[7]=c->r[7]+0xFFFFBB35u; // 800438D8
  c->r[5]=c->r[5]+0xFFFF851Au; // 800438DC
  c->r[4]=c->r[4]+0x00006C89u; // 800438E0
  c->r[6]=0u+0x00000000u; // 800438E4
  W32(c->r[31]+0x00000018u,c->r[8]); // 800438E8
  c->r[3]=c->r[31]|c->r[31]; // 800438EC
  W32(c->r[31]+0x00000000u,c->r[7]); // 800438F0
  W32(c->r[31]+0x00000008u,c->r[6]); // 800438F4
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800438F8
  W32(c->r[31]+0x00000010u,c->r[4]); // 800438FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80043900
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043904
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043908
  c->lr=c->r[0]; // 8004390C
  c->r[1]=c->r[1]+0x00000010u; // 80043910
  return; // 80043914
}

// fn_80043918
void f_80043918(Ctx* __restrict c) {
  trace_call(0x80043918u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043918
  c->r[0]=c->lr; // 8004391C
  cmps(c,0,(int32_t)c->r[4],0); // 80043920
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043924
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043928
  c->r[30]=c->r[3]|c->r[3]; // 8004392C
  c->r[31]=c->r[4]|c->r[4]; // 80043930
  if (crb(c,2)) { goto L_80043988; } // 80043934
  c->r[3]=c->r[31]|c->r[31]; // 80043938
  c->lr=0x80043940u; f_80244520(c); // 8004393C
  c->r[7]=c->r[3]|c->r[3]; // 80043940
  c->r[9]=c->r[31]|c->r[31]; // 80043944
  c->r[3]=0u+0x000000F0u; // 80043948
  c->r[4]=c->r[13]+0xFFFF8ED1u; // 8004394C
  c->r[5]=0u+0x00000000u; // 80043950
  c->r[6]=0u+0x00002001u; // 80043954
  c->r[8]=0u+0x00000000u; // 80043958
  c->lr=0x80043960u; f_80242DF0(c); // 8004395C
  c->r[4]=c->r[3]|c->r[3]; // 80043960
  c->r[3]=0u+0x000000F0u; // 80043964
  c->r[5]=c->r[13]+0xFFFF8ED6u; // 80043968
  c->r[6]=0u+0x00000000u; // 8004396C
  c->r[7]=0u+0x00001001u; // 80043970
  c->lr=0x80043978u; f_80244DB0(c); // 80043974
  cmps(c,0,(int32_t)c->r[3],0); // 80043978
  if (crb(c,2)) { goto L_800439A8; } // 8004397C
  c->lr=0x80043984u; f_800438A4(c); // 80043980
  goto L_800439A8; // 80043984
L_80043988:;
  c->r[3]=0u+0x000000F0u; // 80043988
  c->r[4]=c->r[13]+0xFFFF8EDBu; // 8004398C
  c->r[5]=0u+0x00000000u; // 80043990
  c->r[6]=0u+0x00001001u; // 80043994
  c->lr=0x8004399Cu; f_80244D20(c); // 80043998
  cmps(c,0,(int32_t)c->r[3],0); // 8004399C
  if (crb(c,2)) { goto L_800439A8; } // 800439A0
  c->lr=0x800439A8u; f_800438A4(c); // 800439A4
L_800439A8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800439A8
  W16(c->r[3]+0x00000014u,c->r[0]); // 800439AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800439B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800439B4
  c->lr=c->r[0]; // 800439B8
  c->r[1]=c->r[1]+0x00000010u; // 800439BC
  return; // 800439C0
}

// fn_800439C4
void f_800439C4(Ctx* __restrict c) {
  trace_call(0x800439C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800439C4
  c->r[0]=c->lr; // 800439C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800439CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800439D0
  c->r[29]=c->r[3]|c->r[3]; // 800439D4
  c->r[30]=c->r[4]|c->r[4]; // 800439D8
  c->lr=0x800439E0u; f_8003AE00(c); // 800439DC
  c->r[31]=c->r[3]|c->r[3]; // 800439E0
  c->r[3]=c->r[30]|c->r[30]; // 800439E4
  c->lr=0x800439ECu; f_8030BD1C(c); // 800439E8
  W8(c->r[29]+0x000000E4u,c->r[3]); // 800439EC
  c->r[3]=c->r[30]|c->r[30]; // 800439F0
  c->lr=0x800439F8u; f_8030C0A0(c); // 800439F4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800439F8
  c->r[3]=c->r[30]|c->r[30]; // 800439FC
  c->lr=0x80043A04u; f_8030C0A0(c); // 80043A00
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 80043A04
  c->r[3]=c->r[31]|c->r[31]; // 80043A08
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043A0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80043A10
  c->lr=c->r[0]; // 80043A14
  c->r[1]=c->r[1]+0x00000020u; // 80043A18
  return; // 80043A1C
}

// fn_80043A20
void f_80043A20(Ctx* __restrict c) {
  trace_call(0x80043A20u);
  f_80038EC8(c); return; // 80043A20
}

// fn_80043A24
void f_80043A24(Ctx* __restrict c) {
  trace_call(0x80043A24u);
  cmps(c,0,(int32_t)c->r[6],0); // 80043A24
  if (!crb(c,2)) return; // 80043A28
  f_8003AF18(c); return; // 80043A2C
  return; // 80043A30
}

// fn_80043A34
void f_80043A34(Ctx* __restrict c) {
  trace_call(0x80043A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043A34
  c->r[0]=c->lr; // 80043A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043A40
  c->r[31]=c->r[3]|c->r[3]; // 80043A44
  c->lr=0x80043A4Cu; f_8003AF68(c); // 80043A48
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80043A4C
  c->r[0]=0u+0x00000000u; // 80043A50
  {uint32_t ea=c->r[2]+0xFFFF8708u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043A54
  W8(c->r[31]+0x000000E4u,c->r[0]); // 80043A58
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[1]);} // 80043A5C
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 80043A60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043A64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043A68
  c->lr=c->r[0]; // 80043A6C
  c->r[1]=c->r[1]+0x00000010u; // 80043A70
  return; // 80043A74
}

// fn_80043A78
void f_80043A78(Ctx* __restrict c) {
  trace_call(0x80043A78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043A78
  c->r[0]=c->lr; // 80043A7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80043A80
  c->r[11]=c->r[1]+0x00000020u; // 80043A84
  c->lr=0x80043A8Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80043A88
  c->r[29]=c->r[3]|c->r[3]; // 80043A8C
  c->r[30]=c->r[4]|c->r[4]; // 80043A90
  c->r[31]=c->r[5]|c->r[5]; // 80043A94
  c->r[6]=0u+0x00000000u; // 80043A98
  c->lr=0x80043AA0u; f_8003AFFC(c); // 80043A9C
  cmps(c,0,(int32_t)c->r[31],0); // 80043AA0
  if (crb(c,2)) { goto L_80043AAC; } // 80043AA4
  goto L_80043AB0; // 80043AA8
L_80043AAC:;
  c->r[31]=c->r[29]|c->r[29]; // 80043AAC
L_80043AB0:;
  c->r[0]=R8(c->r[30]+0x000000E4u); // 80043AB0
  c->r[11]=c->r[1]+0x00000020u; // 80043AB4
  W8(c->r[31]+0x000000E4u,c->r[0]); // 80043AB8
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043ABC
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 80043AC0
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80043AC4
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 80043AC8
  c->lr=0x80043AD0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80043ACC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80043AD0
  c->lr=c->r[0]; // 80043AD4
  c->r[1]=c->r[1]+0x00000020u; // 80043AD8
  return; // 80043ADC
}

// fn_80043AE0
void f_80043AE0(Ctx* __restrict c) {
  trace_call(0x80043AE0u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 80043AE0
  cmpu(c,0,c->r[0],0x0000DF21u); // 80043AE4
  if (!crb(c,2)) { goto L_80043AF4; } // 80043AE8
  c->r[3]=0u+0x00000001u; // 80043AEC
  return; // 80043AF0
L_80043AF4:;
  c->r[0]=c->r[4]+0x05C00000u; // 80043AF4
  cmpu(c,0,c->r[0],0x00000802u); // 80043AF8
  if (!crb(c,2)) { goto L_80043B08; } // 80043AFC
  c->r[3]=0u+0x00000001u; // 80043B00
  return; // 80043B04
L_80043B08:;
  c->r[3]=0u+0xD12F0000u; // 80043B08
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80043B0C
  c->r[0]=c->r[4]-c->r[0]; // 80043B10
  c->r[0]=cntlz(c->r[0]); // 80043B14
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80043B18
  return; // 80043B1C
}

// fn_80043B20
void f_80043B20(Ctx* __restrict c) {
  trace_call(0x80043B20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043B20
  c->r[0]=c->lr; // 80043B24
  W32(c->r[1]+0x00000034u,c->r[0]); // 80043B28
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80043B2C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80043B30
  c->r[11]=c->r[1]+0x00000020u; // 80043B34
  c->lr=0x80043B3Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80043B38
  c->f[31]=c->f[1]; // 80043B3C
  c->r[29]=c->r[3]|c->r[3]; // 80043B40
  c->r[31]=c->r[4]|c->r[4]; // 80043B44
  c->r[30]=c->r[5]|c->r[5]; // 80043B48
  c->lr=0x80043B50u; f_8003B104(c); // 80043B4C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80043B50
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043B54
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 80043B58
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80043B5C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80043B60
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80043B64
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80043B68
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 80043B6C
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80043B70
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80043B74
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80043B78
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80043B7C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80043B80
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 80043B84
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80043B88
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80043B8C
  c->r[11]=c->r[1]+0x00000020u; // 80043B90
  c->lr=0x80043B98u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80043B94
  c->r[0]=R32(c->r[1]+0x00000034u); // 80043B98
  c->lr=c->r[0]; // 80043B9C
  c->r[1]=c->r[1]+0x00000030u; // 80043BA0
  return; // 80043BA4
}

// fn_80043BA8
void f_80043BA8(Ctx* __restrict c) {
  trace_call(0x80043BA8u);
  c->r[3]=0u+0x000000F0u; // 80043BA8
  return; // 80043BAC
}

// fn_80043BB0
void f_80043BB0(Ctx* __restrict c) {
  trace_call(0x80043BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043BB0
  c->r[0]=c->lr; // 80043BB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043BB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043BBC
  c->r[31]=c->r[3]|c->r[3]; // 80043BC0
  c->lr=0x80043BC8u; f_800438A4(c); // 80043BC4
  c->r[0]=R32(c->r[31]+0x00000008u); // 80043BC8
  c->r[3]=0u+0x80420000u; // 80043BCC
  c->r[3]=c->r[3]+0x00000D20u; // 80043BD0
  W32(c->r[31]+0x00000018u,c->r[3]); // 80043BD4
  c->r[0]=c->r[0]|0x80000000u; // 80043BD8
  W32(c->r[31]+0x00000008u,c->r[0]); // 80043BDC
  c->r[3]=c->r[31]|c->r[31]; // 80043BE0
  c->r[12]=R32(c->r[31]+0x00000018u); // 80043BE4
  c->r[12]=R32(c->r[12]+0x00000024u); // 80043BE8
  c->ctr=c->r[12]; // 80043BEC
  if (true) { c->lr=0x80043BF4u; dispatch(c,c->ctr); } // 80043BF0
  c->r[3]=c->r[31]|c->r[31]; // 80043BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043BFC
  c->lr=c->r[0]; // 80043C00
  c->r[1]=c->r[1]+0x00000010u; // 80043C04
  return; // 80043C08
}

// fn_80043C0C
void f_80043C0C(Ctx* __restrict c) {
  trace_call(0x80043C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043C0C
  c->r[0]=c->lr; // 80043C10
  cmps(c,0,(int32_t)c->r[3],0); // 80043C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043C18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043C1C
  c->r[30]=c->r[3]|c->r[3]; // 80043C20
  c->r[31]=c->r[4]|c->r[4]; // 80043C24
  if (crb(c,2)) { goto L_80043C48; } // 80043C28
  if (crb(c,2)) { goto L_80043C38; } // 80043C2C
  c->r[4]=0u+0x00000000u; // 80043C30
  c->lr=0x80043C38u; f_8003ABE0(c); // 80043C34
L_80043C38:;
  cmps(c,0,(int32_t)c->r[31],0); // 80043C38
  if (!crb(c,1)) { goto L_80043C48; } // 80043C3C
  c->r[3]=c->r[30]|c->r[30]; // 80043C40
  c->lr=0x80043C48u; f_80244DC0(c); // 80043C44
L_80043C48:;
  c->r[3]=c->r[30]|c->r[30]; // 80043C48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043C4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043C50
  c->lr=c->r[0]; // 80043C54
  c->r[1]=c->r[1]+0x00000010u; // 80043C58
  return; // 80043C5C
}

// fn_80043C60
void f_80043C60(Ctx* __restrict c) {
  trace_call(0x80043C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043C60
  c->r[0]=c->lr; // 80043C64
  c->r[3]=0u+0x000000F0u; // 80043C68
  c->r[4]=c->r[13]+0xFFFF8EE0u; // 80043C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043C70
  c->r[5]=0u+0x00000000u; // 80043C74
  c->r[6]=0u+0x00001001u; // 80043C78
  c->lr=0x80043C80u; f_80244D20(c); // 80043C7C
  cmps(c,0,(int32_t)c->r[3],0); // 80043C80
  if (crb(c,2)) { goto L_80043C8C; } // 80043C84
  c->lr=0x80043C8Cu; f_80043BB0(c); // 80043C88
L_80043C8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043C8C
  c->lr=c->r[0]; // 80043C90
  c->r[1]=c->r[1]+0x00000010u; // 80043C94
  return; // 80043C98
}

// fn_80043C9C
void f_80043C9C(Ctx* __restrict c) {
  trace_call(0x80043C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043C9C
  c->r[0]=c->lr; // 80043CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043CA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043CA8
  c->r[31]=c->r[3]|c->r[3]; // 80043CAC
  c->lr=0x80043CB4u; f_80244520(c); // 80043CB0
  c->r[7]=c->r[3]|c->r[3]; // 80043CB4
  c->r[9]=c->r[31]|c->r[31]; // 80043CB8
  c->r[3]=0u+0x000000F0u; // 80043CBC
  c->r[4]=c->r[13]+0xFFFF8EE5u; // 80043CC0
  c->r[5]=0u+0x00000000u; // 80043CC4
  c->r[6]=0u+0x00002001u; // 80043CC8
  c->r[8]=0u+0x00000000u; // 80043CCC
  c->lr=0x80043CD4u; f_80242DF0(c); // 80043CD0
  c->r[4]=c->r[3]|c->r[3]; // 80043CD4
  c->r[3]=0u+0x000000F0u; // 80043CD8
  c->r[5]=c->r[13]+0xFFFF8EEAu; // 80043CDC
  c->r[6]=0u+0x00000000u; // 80043CE0
  c->r[7]=0u+0x00001001u; // 80043CE4
  c->lr=0x80043CECu; f_80244DB0(c); // 80043CE8
  cmps(c,0,(int32_t)c->r[3],0); // 80043CEC
  if (crb(c,2)) { goto L_80043CF8; } // 80043CF0
  c->lr=0x80043CF8u; f_80043BB0(c); // 80043CF4
L_80043CF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043CF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043CFC
  c->lr=c->r[0]; // 80043D00
  c->r[1]=c->r[1]+0x00000010u; // 80043D04
  return; // 80043D08
}

// fn_80043D0C
void f_80043D0C(Ctx* __restrict c) {
  trace_call(0x80043D0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043D0C
  c->r[0]=c->lr; // 80043D10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043D14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043D18
  c->r[31]=c->r[3]|c->r[3]; // 80043D1C
  c->lr=0x80043D24u; f_8003ACE0(c); // 80043D20
  c->r[8]=0u+0x80420000u; // 80043D24
  c->r[7]=0u+0x80410000u; // 80043D28
  c->r[5]=0u+0xA43E0000u; // 80043D2C
  c->r[4]=0u+0x14320000u; // 80043D30
  c->r[3]=0u+0x46AE0000u; // 80043D34
  c->r[8]=c->r[8]+0x00000CE4u; // 80043D38
  c->r[0]=c->r[3]+0x00000765u; // 80043D3C
  c->r[7]=c->r[7]+0xFFFFBB45u; // 80043D40
  c->r[5]=c->r[5]+0xFFFF9070u; // 80043D44
  c->r[4]=c->r[4]+0xFFFFF8C9u; // 80043D48
  c->r[6]=0u+0x00000000u; // 80043D4C
  W32(c->r[31]+0x00000018u,c->r[8]); // 80043D50
  c->r[3]=c->r[31]|c->r[31]; // 80043D54
  W32(c->r[31]+0x00000000u,c->r[7]); // 80043D58
  W32(c->r[31]+0x00000008u,c->r[6]); // 80043D5C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 80043D60
  W32(c->r[31]+0x00000010u,c->r[4]); // 80043D64
  W32(c->r[31]+0x00000004u,c->r[0]); // 80043D68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043D6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043D70
  c->lr=c->r[0]; // 80043D74
  c->r[1]=c->r[1]+0x00000010u; // 80043D78
  return; // 80043D7C
}

// fn_80043D80
void f_80043D80(Ctx* __restrict c) {
  trace_call(0x80043D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043D80
  c->r[0]=c->lr; // 80043D84
  cmps(c,0,(int32_t)c->r[4],0); // 80043D88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043D8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80043D90
  c->r[30]=c->r[3]|c->r[3]; // 80043D94
  c->r[31]=c->r[4]|c->r[4]; // 80043D98
  if (crb(c,2)) { goto L_80043DF0; } // 80043D9C
  c->r[3]=c->r[31]|c->r[31]; // 80043DA0
  c->lr=0x80043DA8u; f_80244520(c); // 80043DA4
  c->r[7]=c->r[3]|c->r[3]; // 80043DA8
  c->r[9]=c->r[31]|c->r[31]; // 80043DAC
  c->r[3]=0u+0x000000FCu; // 80043DB0
  c->r[4]=c->r[13]+0xFFFF8EEFu; // 80043DB4
  c->r[5]=0u+0x00000000u; // 80043DB8
  c->r[6]=0u+0x00002001u; // 80043DBC
  c->r[8]=0u+0x00000000u; // 80043DC0
  c->lr=0x80043DC8u; f_80242DF0(c); // 80043DC4
  c->r[4]=c->r[3]|c->r[3]; // 80043DC8
  c->r[3]=0u+0x000000FCu; // 80043DCC
  c->r[5]=c->r[13]+0xFFFF8EF4u; // 80043DD0
  c->r[6]=0u+0x00000000u; // 80043DD4
  c->r[7]=0u+0x00001001u; // 80043DD8
  c->lr=0x80043DE0u; f_80244DB0(c); // 80043DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80043DE0
  if (crb(c,2)) { goto L_80043E10; } // 80043DE4
  c->lr=0x80043DECu; f_80043D0C(c); // 80043DE8
  goto L_80043E10; // 80043DEC
L_80043DF0:;
  c->r[3]=0u+0x000000FCu; // 80043DF0
  c->r[4]=c->r[13]+0xFFFF8EF9u; // 80043DF4
  c->r[5]=0u+0x00000000u; // 80043DF8
  c->r[6]=0u+0x00001001u; // 80043DFC
  c->lr=0x80043E04u; f_80244D20(c); // 80043E00
  cmps(c,0,(int32_t)c->r[3],0); // 80043E04
  if (crb(c,2)) { goto L_80043E10; } // 80043E08
  c->lr=0x80043E10u; f_80043D0C(c); // 80043E0C
L_80043E10:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80043E10
  W16(c->r[3]+0x00000014u,c->r[0]); // 80043E14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80043E18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043E1C
  c->lr=c->r[0]; // 80043E20
  c->r[1]=c->r[1]+0x00000010u; // 80043E24
  return; // 80043E28
}

// fn_80043E2C
void f_80043E2C(Ctx* __restrict c) {
  trace_call(0x80043E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043E2C
  c->r[0]=c->lr; // 80043E30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80043E34
  c->r[11]=c->r[1]+0x00000020u; // 80043E38
  c->lr=0x80043E40u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80043E3C
  c->r[29]=c->r[3]|c->r[3]; // 80043E40
  c->r[30]=c->r[4]|c->r[4]; // 80043E44
  c->lr=0x80043E4Cu; f_8003AE00(c); // 80043E48
  c->r[31]=c->r[3]|c->r[3]; // 80043E4C
  c->r[3]=c->r[30]|c->r[30]; // 80043E50
  c->lr=0x80043E58u; f_8030C0A0(c); // 80043E54
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 80043E58
  c->r[3]=c->r[30]|c->r[30]; // 80043E5C
  c->lr=0x80043E64u; f_8030C0A0(c); // 80043E60
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 80043E64
  c->r[3]=c->r[30]|c->r[30]; // 80043E68
  c->lr=0x80043E70u; f_8030C0A0(c); // 80043E6C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80043E70
  c->r[3]=c->r[30]|c->r[30]; // 80043E74
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 80043E78
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[0]);} // 80043E7C
  c->lr=0x80043E84u; f_8030C0A0(c); // 80043E80
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 80043E84
  c->r[3]=c->r[30]|c->r[30]; // 80043E88
  c->lr=0x80043E90u; f_8030C0A0(c); // 80043E8C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 80043E90
  c->r[11]=c->r[1]+0x00000020u; // 80043E94
  c->r[3]=c->r[31]|c->r[31]; // 80043E98
  c->lr=0x80043EA0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80043E9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80043EA0
  c->lr=c->r[0]; // 80043EA4
  c->r[1]=c->r[1]+0x00000020u; // 80043EA8
  return; // 80043EAC
}

// fn_80043EB0
void f_80043EB0(Ctx* __restrict c) {
  trace_call(0x80043EB0u);
  f_80038EC8(c); return; // 80043EB0
}

// fn_80043EB4
void f_80043EB4(Ctx* __restrict c) {
  trace_call(0x80043EB4u);
  cmps(c,0,(int32_t)c->r[6],0); // 80043EB4
  if (!crb(c,2)) return; // 80043EB8
  f_8003AF18(c); return; // 80043EBC
  return; // 80043EC0
}

// fn_80043EC4
void f_80043EC4(Ctx* __restrict c) {
  trace_call(0x80043EC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043EC4
  c->r[0]=c->lr; // 80043EC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80043ECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80043ED0
  c->r[31]=c->r[3]|c->r[3]; // 80043ED4
  c->lr=0x80043EDCu; f_8003AF68(c); // 80043ED8
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80043EDC
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80043EE0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80043EE4
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043EE8
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[3]);} // 80043EEC
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[3]);} // 80043EF0
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[2]);} // 80043EF4
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[1]);} // 80043EF8
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[2]);} // 80043EFC
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 80043F00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80043F04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80043F08
  c->lr=c->r[0]; // 80043F0C
  c->r[1]=c->r[1]+0x00000010u; // 80043F10
  return; // 80043F14
}

// fn_80043F18
void f_80043F18(Ctx* __restrict c) {
  trace_call(0x80043F18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043F18
  c->r[0]=c->lr; // 80043F1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80043F20
  c->r[11]=c->r[1]+0x00000020u; // 80043F24
  c->lr=0x80043F2Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80043F28
  c->r[29]=c->r[3]|c->r[3]; // 80043F2C
  c->r[30]=c->r[4]|c->r[4]; // 80043F30
  c->r[31]=c->r[5]|c->r[5]; // 80043F34
  c->r[6]=0u+0x00000000u; // 80043F38
  c->lr=0x80043F40u; f_8003AFFC(c); // 80043F3C
  cmps(c,0,(int32_t)c->r[31],0); // 80043F40
  if (crb(c,2)) { goto L_80043F4C; } // 80043F44
  goto L_80043F50; // 80043F48
L_80043F4C:;
  c->r[31]=c->r[29]|c->r[29]; // 80043F4C
L_80043F50:;
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043F50
  c->r[11]=c->r[1]+0x00000020u; // 80043F54
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80043F58
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043F5C
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 80043F60
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80043F64
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 80043F68
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043F6C
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 80043F70
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80043F74
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 80043F78
  c->lr=0x80043F80u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80043F7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80043F80
  c->lr=c->r[0]; // 80043F84
  c->r[1]=c->r[1]+0x00000020u; // 80043F88
  return; // 80043F8C
}

// fn_80043F90
void f_80043F90(Ctx* __restrict c) {
  trace_call(0x80043F90u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 80043F90
  cmpu(c,0,c->r[0],0x0000DF21u); // 80043F94
  if (!crb(c,2)) { goto L_80043FA4; } // 80043F98
  c->r[3]=0u+0x00000001u; // 80043F9C
  return; // 80043FA0
L_80043FA4:;
  c->r[0]=c->r[4]+0x05C00000u; // 80043FA4
  cmpu(c,0,c->r[0],0x00000802u); // 80043FA8
  if (!crb(c,2)) { goto L_80043FB8; } // 80043FAC
  c->r[3]=0u+0x00000001u; // 80043FB0
  return; // 80043FB4
L_80043FB8:;
  c->r[3]=0u+0xD12F0000u; // 80043FB8
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80043FBC
  c->r[0]=c->r[4]-c->r[0]; // 80043FC0
  c->r[0]=cntlz(c->r[0]); // 80043FC4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80043FC8
  return; // 80043FCC
}

// fn_80043FD0
void f_80043FD0(Ctx* __restrict c) {
  trace_call(0x80043FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80043FD0
  c->r[0]=c->lr; // 80043FD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80043FD8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80043FDC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80043FE0
  c->r[11]=c->r[1]+0x00000020u; // 80043FE4
  c->lr=0x80043FECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80043FE8
  c->f[31]=c->f[1]; // 80043FEC
  c->r[29]=c->r[3]|c->r[3]; // 80043FF0
  c->r[31]=c->r[4]|c->r[4]; // 80043FF4
  c->r[30]=c->r[5]|c->r[5]; // 80043FF8
  c->lr=0x80044000u; f_8003B104(c); // 80043FFC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80044000
  c->f[2]=c->f[31]; // 80044004
  c->r[3]=c->r[29]+0x000000E4u; // 80044008
  c->r[4]=c->r[31]+0x000000E4u; // 8004400C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 80044010
  c->r[5]=c->r[30]+0x000000E4u; // 80044014
  c->lr=0x8004401Cu; f_8025E410(c); // 80044018
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004401C
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044020
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 80044024
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044028
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004402C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80044030
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80044034
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[0]);} // 80044038
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004403C
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044040
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80044044
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80044048
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004404C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 80044050
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80044054
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80044058
  c->r[11]=c->r[1]+0x00000020u; // 8004405C
  c->lr=0x80044064u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80044060
  c->r[0]=R32(c->r[1]+0x00000034u); // 80044064
  c->lr=c->r[0]; // 80044068
  c->r[1]=c->r[1]+0x00000030u; // 8004406C
  return; // 80044070
}

// fn_80044074
void f_80044074(Ctx* __restrict c) {
  trace_call(0x80044074u);
  c->r[3]=0u+0x000000FCu; // 80044074
  return; // 80044078
}

// fn_8004407C
void f_8004407C(Ctx* __restrict c) {
  trace_call(0x8004407Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004407C
  c->r[0]=c->lr; // 80044080
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044088
  c->r[31]=c->r[3]|c->r[3]; // 8004408C
  c->lr=0x80044094u; f_80043D0C(c); // 80044090
  c->r[0]=R32(c->r[31]+0x00000008u); // 80044094
  c->r[3]=0u+0x80420000u; // 80044098
  c->r[3]=c->r[3]+0x00000CA4u; // 8004409C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800440A0
  c->r[0]=c->r[0]|0x80000000u; // 800440A4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800440A8
  c->r[3]=c->r[31]|c->r[31]; // 800440AC
  c->r[12]=R32(c->r[31]+0x00000018u); // 800440B0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800440B4
  c->ctr=c->r[12]; // 800440B8
  if (true) { c->lr=0x800440C0u; dispatch(c,c->ctr); } // 800440BC
  c->r[3]=c->r[31]|c->r[31]; // 800440C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800440C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800440C8
  c->lr=c->r[0]; // 800440CC
  c->r[1]=c->r[1]+0x00000010u; // 800440D0
  return; // 800440D4
}

// fn_800440D8
void f_800440D8(Ctx* __restrict c) {
  trace_call(0x800440D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800440D8
  c->r[0]=c->lr; // 800440DC
  cmps(c,0,(int32_t)c->r[3],0); // 800440E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800440E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800440E8
  c->r[30]=c->r[3]|c->r[3]; // 800440EC
  c->r[31]=c->r[4]|c->r[4]; // 800440F0
  if (crb(c,2)) { goto L_80044114; } // 800440F4
  if (crb(c,2)) { goto L_80044104; } // 800440F8
  c->r[4]=0u+0x00000000u; // 800440FC
  c->lr=0x80044104u; f_8003ABE0(c); // 80044100
L_80044104:;
  cmps(c,0,(int32_t)c->r[31],0); // 80044104
  if (!crb(c,1)) { goto L_80044114; } // 80044108
  c->r[3]=c->r[30]|c->r[30]; // 8004410C
  c->lr=0x80044114u; f_80244DC0(c); // 80044110
L_80044114:;
  c->r[3]=c->r[30]|c->r[30]; // 80044114
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80044118
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004411C
  c->lr=c->r[0]; // 80044120
  c->r[1]=c->r[1]+0x00000010u; // 80044124
  return; // 80044128
}

// fn_8004412C
void f_8004412C(Ctx* __restrict c) {
  trace_call(0x8004412Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004412C
  c->r[0]=c->lr; // 80044130
  c->r[3]=0u+0x000000FCu; // 80044134
  c->r[4]=c->r[13]+0xFFFF8EFEu; // 80044138
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004413C
  c->r[5]=0u+0x00000000u; // 80044140
  c->r[6]=0u+0x00001001u; // 80044144
  c->lr=0x8004414Cu; f_80244D20(c); // 80044148
  cmps(c,0,(int32_t)c->r[3],0); // 8004414C
  if (crb(c,2)) { goto L_80044158; } // 80044150
  c->lr=0x80044158u; f_8004407C(c); // 80044154
L_80044158:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044158
  c->lr=c->r[0]; // 8004415C
  c->r[1]=c->r[1]+0x00000010u; // 80044160
  return; // 80044164
}

// fn_80044168
void f_80044168(Ctx* __restrict c) {
  trace_call(0x80044168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044168
  c->r[0]=c->lr; // 8004416C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044174
  c->r[31]=c->r[3]|c->r[3]; // 80044178
  c->lr=0x80044180u; f_80244520(c); // 8004417C
  c->r[7]=c->r[3]|c->r[3]; // 80044180
  c->r[9]=c->r[31]|c->r[31]; // 80044184
  c->r[3]=0u+0x000000FCu; // 80044188
  c->r[4]=c->r[13]+0xFFFF8F03u; // 8004418C
  c->r[5]=0u+0x00000000u; // 80044190
  c->r[6]=0u+0x00002001u; // 80044194
  c->r[8]=0u+0x00000000u; // 80044198
  c->lr=0x800441A0u; f_80242DF0(c); // 8004419C
  c->r[4]=c->r[3]|c->r[3]; // 800441A0
  c->r[3]=0u+0x000000FCu; // 800441A4
  c->r[5]=c->r[13]+0xFFFF8F08u; // 800441A8
  c->r[6]=0u+0x00000000u; // 800441AC
  c->r[7]=0u+0x00001001u; // 800441B0
  c->lr=0x800441B8u; f_80244DB0(c); // 800441B4
  cmps(c,0,(int32_t)c->r[3],0); // 800441B8
  if (crb(c,2)) { goto L_800441C4; } // 800441BC
  c->lr=0x800441C4u; f_8004407C(c); // 800441C0
L_800441C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800441C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800441C8
  c->lr=c->r[0]; // 800441CC
  c->r[1]=c->r[1]+0x00000010u; // 800441D0
  return; // 800441D4
}

// fn_800441D8
void f_800441D8(Ctx* __restrict c) {
  trace_call(0x800441D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800441D8
  c->r[0]=c->lr; // 800441DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800441E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800441E4
  c->r[31]=c->r[3]|c->r[3]; // 800441E8
  c->lr=0x800441F0u; f_8003ACE0(c); // 800441EC
  c->r[8]=0u+0x80420000u; // 800441F0
  c->r[7]=0u+0x80410000u; // 800441F4
  c->r[5]=0u+0xDB540000u; // 800441F8
  c->r[4]=0u+0x98CF0000u; // 800441FC
  c->r[3]=0u+0x8CC30000u; // 80044200
  c->r[8]=c->r[8]+0x00000C68u; // 80044204
  c->r[0]=c->r[3]+0xFFFFB218u; // 80044208
  c->r[7]=c->r[7]+0xFFFFBB5Au; // 8004420C
  c->r[5]=c->r[5]+0xFFFFA010u; // 80044210
  c->r[4]=c->r[4]+0x0000384Au; // 80044214
  c->r[6]=0u+0x00000000u; // 80044218
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004421C
  c->r[3]=c->r[31]|c->r[31]; // 80044220
  W32(c->r[31]+0x00000000u,c->r[7]); // 80044224
  W32(c->r[31]+0x00000008u,c->r[6]); // 80044228
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004422C
  W32(c->r[31]+0x00000010u,c->r[4]); // 80044230
  W32(c->r[31]+0x00000004u,c->r[0]); // 80044234
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044238
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004423C
  c->lr=c->r[0]; // 80044240
  c->r[1]=c->r[1]+0x00000010u; // 80044244
  return; // 80044248
}

// fn_8004424C
void f_8004424C(Ctx* __restrict c) {
  trace_call(0x8004424Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004424C
  c->r[0]=c->lr; // 80044250
  cmps(c,0,(int32_t)c->r[4],0); // 80044254
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044258
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004425C
  c->r[30]=c->r[3]|c->r[3]; // 80044260
  c->r[31]=c->r[4]|c->r[4]; // 80044264
  if (crb(c,2)) { goto L_800442BC; } // 80044268
  c->r[3]=c->r[31]|c->r[31]; // 8004426C
  c->lr=0x80044274u; f_80244520(c); // 80044270
  c->r[7]=c->r[3]|c->r[3]; // 80044274
  c->r[9]=c->r[31]|c->r[31]; // 80044278
  c->r[3]=0u+0x000000F0u; // 8004427C
  c->r[4]=c->r[13]+0xFFFF8F0Du; // 80044280
  c->r[5]=0u+0x00000000u; // 80044284
  c->r[6]=0u+0x00002001u; // 80044288
  c->r[8]=0u+0x00000000u; // 8004428C
  c->lr=0x80044294u; f_80242DF0(c); // 80044290
  c->r[4]=c->r[3]|c->r[3]; // 80044294
  c->r[3]=0u+0x000000F0u; // 80044298
  c->r[5]=c->r[13]+0xFFFF8F12u; // 8004429C
  c->r[6]=0u+0x00000000u; // 800442A0
  c->r[7]=0u+0x00001001u; // 800442A4
  c->lr=0x800442ACu; f_80244DB0(c); // 800442A8
  cmps(c,0,(int32_t)c->r[3],0); // 800442AC
  if (crb(c,2)) { goto L_800442DC; } // 800442B0
  c->lr=0x800442B8u; f_800441D8(c); // 800442B4
  goto L_800442DC; // 800442B8
L_800442BC:;
  c->r[3]=0u+0x000000F0u; // 800442BC
  c->r[4]=c->r[13]+0xFFFF8F17u; // 800442C0
  c->r[5]=0u+0x00000000u; // 800442C4
  c->r[6]=0u+0x00001001u; // 800442C8
  c->lr=0x800442D0u; f_80244D20(c); // 800442CC
  cmps(c,0,(int32_t)c->r[3],0); // 800442D0
  if (crb(c,2)) { goto L_800442DC; } // 800442D4
  c->lr=0x800442DCu; f_800441D8(c); // 800442D8
L_800442DC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800442DC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800442E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800442E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800442E8
  c->lr=c->r[0]; // 800442EC
  c->r[1]=c->r[1]+0x00000010u; // 800442F0
  return; // 800442F4
}

// fn_800442F8
void f_800442F8(Ctx* __restrict c) {
  trace_call(0x800442F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800442F8
  c->r[0]=c->lr; // 800442FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80044300
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80044304
  c->r[29]=c->r[3]|c->r[3]; // 80044308
  c->r[30]=c->r[4]|c->r[4]; // 8004430C
  c->lr=0x80044314u; f_8003AE00(c); // 80044310
  c->r[31]=c->r[3]|c->r[3]; // 80044314
  c->r[3]=c->r[30]|c->r[30]; // 80044318
  c->lr=0x80044320u; f_8030C0A0(c); // 8004431C
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 80044320
  c->r[3]=c->r[30]|c->r[30]; // 80044324
  c->lr=0x8004432Cu; f_8030C0A0(c); // 80044328
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 8004432C
  c->r[3]=c->r[30]|c->r[30]; // 80044330
  c->lr=0x80044338u; f_8030C0A0(c); // 80044334
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 80044338
  c->r[3]=c->r[31]|c->r[31]; // 8004433C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80044340
  c->r[0]=R32(c->r[1]+0x00000024u); // 80044344
  c->lr=c->r[0]; // 80044348
  c->r[1]=c->r[1]+0x00000020u; // 8004434C
  return; // 80044350
}

// fn_80044354
void f_80044354(Ctx* __restrict c) {
  trace_call(0x80044354u);
  f_80038EC8(c); return; // 80044354
}

// fn_80044358
void f_80044358(Ctx* __restrict c) {
  trace_call(0x80044358u);
  cmps(c,0,(int32_t)c->r[6],0); // 80044358
  if (!crb(c,2)) return; // 8004435C
  f_8003AF18(c); return; // 80044360
  return; // 80044364
}

// fn_80044368
void f_80044368(Ctx* __restrict c) {
  trace_call(0x80044368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044368
  c->r[0]=c->lr; // 8004436C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044370
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044374
  c->r[31]=c->r[3]|c->r[3]; // 80044378
  c->lr=0x80044380u; f_8003AF68(c); // 8004437C
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044380
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80044384
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 80044388
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 8004438C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044390
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044394
  c->lr=c->r[0]; // 80044398
  c->r[1]=c->r[1]+0x00000010u; // 8004439C
  return; // 800443A0
}

// fn_800443A4
void f_800443A4(Ctx* __restrict c) {
  trace_call(0x800443A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800443A4
  c->r[0]=c->lr; // 800443A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800443AC
  c->r[11]=c->r[1]+0x00000020u; // 800443B0
  c->lr=0x800443B8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800443B4
  c->r[29]=c->r[3]|c->r[3]; // 800443B8
  c->r[30]=c->r[4]|c->r[4]; // 800443BC
  c->r[31]=c->r[5]|c->r[5]; // 800443C0
  c->r[6]=0u+0x00000000u; // 800443C4
  c->lr=0x800443CCu; f_8003AFFC(c); // 800443C8
  cmps(c,0,(int32_t)c->r[31],0); // 800443CC
  if (crb(c,2)) { goto L_800443D8; } // 800443D0
  goto L_800443DC; // 800443D4
L_800443D8:;
  c->r[31]=c->r[29]|c->r[29]; // 800443D8
L_800443DC:;
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800443DC
  c->r[11]=c->r[1]+0x00000020u; // 800443E0
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 800443E4
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800443E8
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 800443EC
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800443F0
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 800443F4
  c->lr=0x800443FCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800443F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800443FC
  c->lr=c->r[0]; // 80044400
  c->r[1]=c->r[1]+0x00000020u; // 80044404
  return; // 80044408
}

// fn_8004440C
void f_8004440C(Ctx* __restrict c) {
  trace_call(0x8004440Cu);
  c->r[0]=c->r[4]+0xB5AF0000u; // 8004440C
  cmpu(c,0,c->r[0],0x0000DF21u); // 80044410
  if (!crb(c,2)) { goto L_80044420; } // 80044414
  c->r[3]=0u+0x00000001u; // 80044418
  return; // 8004441C
L_80044420:;
  c->r[0]=c->r[4]+0x05C00000u; // 80044420
  cmpu(c,0,c->r[0],0x00000802u); // 80044424
  if (!crb(c,2)) { goto L_80044434; } // 80044428
  c->r[3]=0u+0x00000001u; // 8004442C
  return; // 80044430
L_80044434:;
  c->r[3]=0u+0xD12F0000u; // 80044434
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80044438
  c->r[0]=c->r[4]-c->r[0]; // 8004443C
  c->r[0]=cntlz(c->r[0]); // 80044440
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80044444
  return; // 80044448
}

// fn_8004444C
void f_8004444C(Ctx* __restrict c) {
  trace_call(0x8004444Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004444C
  c->r[0]=c->lr; // 80044450
  W32(c->r[1]+0x00000034u,c->r[0]); // 80044454
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80044458
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8004445C
  c->r[11]=c->r[1]+0x00000020u; // 80044460
  c->lr=0x80044468u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80044464
  c->f[31]=c->f[1]; // 80044468
  c->r[29]=c->r[3]|c->r[3]; // 8004446C
  c->r[31]=c->r[4]|c->r[4]; // 80044470
  c->r[30]=c->r[5]|c->r[5]; // 80044474
  c->lr=0x8004447Cu; f_8003B104(c); // 80044478
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004447C
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044480
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 80044484
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044488
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004448C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80044490
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80044494
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[0]);} // 80044498
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004449C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800444A0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800444A4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800444A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800444AC
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 800444B0
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800444B4
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800444B8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800444BC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800444C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800444C4
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 800444C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800444CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800444D0
  c->r[11]=c->r[1]+0x00000020u; // 800444D4
  c->lr=0x800444DCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800444D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800444DC
  c->lr=c->r[0]; // 800444E0
  c->r[1]=c->r[1]+0x00000030u; // 800444E4
  return; // 800444E8
}

// fn_800444EC
void f_800444EC(Ctx* __restrict c) {
  trace_call(0x800444ECu);
  c->r[3]=0u+0x000000F0u; // 800444EC
  return; // 800444F0
}

// fn_800444F4
void f_800444F4(Ctx* __restrict c) {
  trace_call(0x800444F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800444F4
  c->r[0]=c->lr; // 800444F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800444FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044500
  c->r[31]=c->r[3]|c->r[3]; // 80044504
  c->lr=0x8004450Cu; f_800441D8(c); // 80044508
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004450C
  c->r[3]=0u+0x80420000u; // 80044510
  c->r[3]=c->r[3]+0x00000C28u; // 80044514
  W32(c->r[31]+0x00000018u,c->r[3]); // 80044518
  c->r[0]=c->r[0]|0x80000000u; // 8004451C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80044520
  c->r[3]=c->r[31]|c->r[31]; // 80044524
  c->r[12]=R32(c->r[31]+0x00000018u); // 80044528
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004452C
  c->ctr=c->r[12]; // 80044530
  if (true) { c->lr=0x80044538u; dispatch(c,c->ctr); } // 80044534
  c->r[3]=c->r[31]|c->r[31]; // 80044538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004453C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044540
  c->lr=c->r[0]; // 80044544
  c->r[1]=c->r[1]+0x00000010u; // 80044548
  return; // 8004454C
}

// fn_80044550
void f_80044550(Ctx* __restrict c) {
  trace_call(0x80044550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044550
  c->r[0]=c->lr; // 80044554
  cmps(c,0,(int32_t)c->r[3],0); // 80044558
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004455C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80044560
  c->r[30]=c->r[3]|c->r[3]; // 80044564
  c->r[31]=c->r[4]|c->r[4]; // 80044568
  if (crb(c,2)) { goto L_8004458C; } // 8004456C
  if (crb(c,2)) { goto L_8004457C; } // 80044570
  c->r[4]=0u+0x00000000u; // 80044574
  c->lr=0x8004457Cu; f_8003ABE0(c); // 80044578
L_8004457C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004457C
  if (!crb(c,1)) { goto L_8004458C; } // 80044580
  c->r[3]=c->r[30]|c->r[30]; // 80044584
  c->lr=0x8004458Cu; f_80244DC0(c); // 80044588
L_8004458C:;
  c->r[3]=c->r[30]|c->r[30]; // 8004458C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80044590
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044594
  c->lr=c->r[0]; // 80044598
  c->r[1]=c->r[1]+0x00000010u; // 8004459C
  return; // 800445A0
}

// fn_800445A4
void f_800445A4(Ctx* __restrict c) {
  trace_call(0x800445A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800445A4
  c->r[0]=c->lr; // 800445A8
  c->r[3]=0u+0x000000F0u; // 800445AC
  c->r[4]=c->r[13]+0xFFFF8F1Cu; // 800445B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800445B4
  c->r[5]=0u+0x00000000u; // 800445B8
  c->r[6]=0u+0x00001001u; // 800445BC
  c->lr=0x800445C4u; f_80244D20(c); // 800445C0
  cmps(c,0,(int32_t)c->r[3],0); // 800445C4
  if (crb(c,2)) { goto L_800445D0; } // 800445C8
  c->lr=0x800445D0u; f_800444F4(c); // 800445CC
L_800445D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800445D0
  c->lr=c->r[0]; // 800445D4
  c->r[1]=c->r[1]+0x00000010u; // 800445D8
  return; // 800445DC
}

// fn_800445E0
void f_800445E0(Ctx* __restrict c) {
  trace_call(0x800445E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800445E0
  c->r[0]=c->lr; // 800445E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800445E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800445EC
  c->r[31]=c->r[3]|c->r[3]; // 800445F0
  c->lr=0x800445F8u; f_80244520(c); // 800445F4
  c->r[7]=c->r[3]|c->r[3]; // 800445F8
  c->r[9]=c->r[31]|c->r[31]; // 800445FC
  c->r[3]=0u+0x000000F0u; // 80044600
  c->r[4]=c->r[13]+0xFFFF8F21u; // 80044604
  c->r[5]=0u+0x00000000u; // 80044608
  c->r[6]=0u+0x00002001u; // 8004460C
  c->r[8]=0u+0x00000000u; // 80044610
  c->lr=0x80044618u; f_80242DF0(c); // 80044614
  c->r[4]=c->r[3]|c->r[3]; // 80044618
  c->r[3]=0u+0x000000F0u; // 8004461C
  c->r[5]=c->r[13]+0xFFFF8F26u; // 80044620
  c->r[6]=0u+0x00000000u; // 80044624
  c->r[7]=0u+0x00001001u; // 80044628
  c->lr=0x80044630u; f_80244DB0(c); // 8004462C
  cmps(c,0,(int32_t)c->r[3],0); // 80044630
  if (crb(c,2)) { goto L_8004463C; } // 80044634
  c->lr=0x8004463Cu; f_800444F4(c); // 80044638
L_8004463C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004463C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044640
  c->lr=c->r[0]; // 80044644
  c->r[1]=c->r[1]+0x00000010u; // 80044648
  return; // 8004464C
}

// fn_80044650
void f_80044650(Ctx* __restrict c) {
  trace_call(0x80044650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044650
  c->r[0]=c->lr; // 80044654
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004465C
  c->r[31]=c->r[3]|c->r[3]; // 80044660
  c->lr=0x80044668u; f_8003ACE0(c); // 80044664
  c->r[8]=0u+0x80420000u; // 80044668
  c->r[7]=0u+0x80410000u; // 8004466C
  c->r[5]=0u+0xBB240000u; // 80044670
  c->r[4]=0u+0x93290000u; // 80044674
  c->r[3]=0u+0x7DC30000u; // 80044678
  c->r[8]=c->r[8]+0x00000BECu; // 8004467C
  c->r[0]=c->r[3]+0x00006941u; // 80044680
  c->r[7]=c->r[7]+0xFFFFBB6Eu; // 80044684
  c->r[5]=c->r[5]+0x0000127Eu; // 80044688
  c->r[4]=c->r[4]+0x00005528u; // 8004468C
  c->r[6]=0u+0x00000000u; // 80044690
  W32(c->r[31]+0x00000018u,c->r[8]); // 80044694
  c->r[3]=c->r[31]|c->r[31]; // 80044698
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004469C
  W32(c->r[31]+0x00000008u,c->r[6]); // 800446A0
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800446A4
  W32(c->r[31]+0x00000010u,c->r[4]); // 800446A8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800446AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800446B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800446B4
  c->lr=c->r[0]; // 800446B8
  c->r[1]=c->r[1]+0x00000010u; // 800446BC
  return; // 800446C0
}

// fn_800446C4
void f_800446C4(Ctx* __restrict c) {
  trace_call(0x800446C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800446C4
  c->r[0]=c->lr; // 800446C8
  cmps(c,0,(int32_t)c->r[4],0); // 800446CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800446D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800446D4
  c->r[30]=c->r[3]|c->r[3]; // 800446D8
  c->r[31]=c->r[4]|c->r[4]; // 800446DC
  if (crb(c,2)) { goto L_80044734; } // 800446E0
  c->r[3]=c->r[31]|c->r[31]; // 800446E4
  c->lr=0x800446ECu; f_80244520(c); // 800446E8
  c->r[7]=c->r[3]|c->r[3]; // 800446EC
  c->r[9]=c->r[31]|c->r[31]; // 800446F0
  c->r[3]=0u+0x000000F0u; // 800446F4
  c->r[4]=c->r[13]+0xFFFF8F2Bu; // 800446F8
  c->r[5]=0u+0x00000000u; // 800446FC
  c->r[6]=0u+0x00002001u; // 80044700
  c->r[8]=0u+0x00000000u; // 80044704
  c->lr=0x8004470Cu; f_80242DF0(c); // 80044708
  c->r[4]=c->r[3]|c->r[3]; // 8004470C
  c->r[3]=0u+0x000000F0u; // 80044710
  c->r[5]=c->r[13]+0xFFFF8F30u; // 80044714
  c->r[6]=0u+0x00000000u; // 80044718
  c->r[7]=0u+0x00001001u; // 8004471C
  c->lr=0x80044724u; f_80244DB0(c); // 80044720
  cmps(c,0,(int32_t)c->r[3],0); // 80044724
  if (crb(c,2)) { goto L_80044754; } // 80044728
  c->lr=0x80044730u; f_80044650(c); // 8004472C
  goto L_80044754; // 80044730
L_80044734:;
  c->r[3]=0u+0x000000F0u; // 80044734
  c->r[4]=c->r[13]+0xFFFF8F35u; // 80044738
  c->r[5]=0u+0x00000000u; // 8004473C
  c->r[6]=0u+0x00001001u; // 80044740
  c->lr=0x80044748u; f_80244D20(c); // 80044744
  cmps(c,0,(int32_t)c->r[3],0); // 80044748
  if (crb(c,2)) { goto L_80044754; } // 8004474C
  c->lr=0x80044754u; f_80044650(c); // 80044750
L_80044754:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80044754
  W16(c->r[3]+0x00000014u,c->r[0]); // 80044758
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004475C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044760
  c->lr=c->r[0]; // 80044764
  c->r[1]=c->r[1]+0x00000010u; // 80044768
  return; // 8004476C
}

// fn_80044770
void f_80044770(Ctx* __restrict c) {
  trace_call(0x80044770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044770
  c->r[0]=c->lr; // 80044774
  W32(c->r[1]+0x00000024u,c->r[0]); // 80044778
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004477C
  c->r[29]=c->r[3]|c->r[3]; // 80044780
  c->r[30]=c->r[4]|c->r[4]; // 80044784
  c->lr=0x8004478Cu; f_8003AE00(c); // 80044788
  c->r[31]=c->r[3]|c->r[3]; // 8004478C
  c->r[3]=c->r[30]|c->r[30]; // 80044790
  c->lr=0x80044798u; f_8030C0A0(c); // 80044794
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 80044798
  c->r[3]=c->r[30]|c->r[30]; // 8004479C
  c->lr=0x800447A4u; f_8030C0A0(c); // 800447A0
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800447A4
  c->r[3]=c->r[30]|c->r[30]; // 800447A8
  c->lr=0x800447B0u; f_8030BD1C(c); // 800447AC
  W8(c->r[29]+0x000000ECu,c->r[3]); // 800447B0
  c->r[3]=c->r[31]|c->r[31]; // 800447B4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800447B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800447BC
  c->lr=c->r[0]; // 800447C0
  c->r[1]=c->r[1]+0x00000020u; // 800447C4
  return; // 800447C8
}

// fn_800447CC
void f_800447CC(Ctx* __restrict c) {
  trace_call(0x800447CCu);
  f_80038EC8(c); return; // 800447CC
}

// fn_800447D0
void f_800447D0(Ctx* __restrict c) {
  trace_call(0x800447D0u);
  cmps(c,0,(int32_t)c->r[6],0); // 800447D0
  if (!crb(c,2)) return; // 800447D4
  f_8003AF18(c); return; // 800447D8
  return; // 800447DC
}

// fn_800447E0
void f_800447E0(Ctx* __restrict c) {
  trace_call(0x800447E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800447E0
  c->r[0]=c->lr; // 800447E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800447E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800447EC
  c->r[31]=c->r[3]|c->r[3]; // 800447F0
  c->lr=0x800447F8u; f_8003AF68(c); // 800447F4
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800447F8
  c->r[0]=0u+0x00000000u; // 800447FC
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80044800
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 80044804
  W8(c->r[31]+0x000000ECu,c->r[0]); // 80044808
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004480C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044810
  c->lr=c->r[0]; // 80044814
  c->r[1]=c->r[1]+0x00000010u; // 80044818
  return; // 8004481C
}

// fn_80044820
void f_80044820(Ctx* __restrict c) {
  trace_call(0x80044820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044820
  c->r[0]=c->lr; // 80044824
  W32(c->r[1]+0x00000024u,c->r[0]); // 80044828
  c->r[11]=c->r[1]+0x00000020u; // 8004482C
  c->lr=0x80044834u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80044830
  c->r[29]=c->r[3]|c->r[3]; // 80044834
  c->r[30]=c->r[4]|c->r[4]; // 80044838
  c->r[31]=c->r[5]|c->r[5]; // 8004483C
  c->r[6]=0u+0x00000000u; // 80044840
  c->lr=0x80044848u; f_8003AFFC(c); // 80044844
  cmps(c,0,(int32_t)c->r[31],0); // 80044848
  if (crb(c,2)) { goto L_80044854; } // 8004484C
  goto L_80044858; // 80044850
L_80044854:;
  c->r[31]=c->r[29]|c->r[29]; // 80044854
L_80044858:;
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044858
  c->r[11]=c->r[1]+0x00000020u; // 8004485C
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 80044860
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80044864
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 80044868
  c->r[0]=R8(c->r[30]+0x000000ECu); // 8004486C
  W8(c->r[31]+0x000000ECu,c->r[0]); // 80044870
  c->lr=0x80044878u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80044874
  c->r[0]=R32(c->r[1]+0x00000024u); // 80044878
  c->lr=c->r[0]; // 8004487C
  c->r[1]=c->r[1]+0x00000020u; // 80044880
  return; // 80044884
}

// fn_80044888
void f_80044888(Ctx* __restrict c) {
  trace_call(0x80044888u);
  c->r[0]=c->r[4]+0xB5AF0000u; // 80044888
  cmpu(c,0,c->r[0],0x0000DF21u); // 8004488C
  if (!crb(c,2)) { goto L_8004489C; } // 80044890
  c->r[3]=0u+0x00000001u; // 80044894
  return; // 80044898
L_8004489C:;
  c->r[0]=c->r[4]+0x05C00000u; // 8004489C
  cmpu(c,0,c->r[0],0x00000802u); // 800448A0
  if (!crb(c,2)) { goto L_800448B0; } // 800448A4
  c->r[3]=0u+0x00000001u; // 800448A8
  return; // 800448AC
L_800448B0:;
  c->r[3]=0u+0xD12F0000u; // 800448B0
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 800448B4
  c->r[0]=c->r[4]-c->r[0]; // 800448B8
  c->r[0]=cntlz(c->r[0]); // 800448BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800448C0
  return; // 800448C4
}

// fn_800448C8
void f_800448C8(Ctx* __restrict c) {
  trace_call(0x800448C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800448C8
  c->r[0]=c->lr; // 800448CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800448D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800448D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800448D8
  c->r[11]=c->r[1]+0x00000020u; // 800448DC
  c->lr=0x800448E4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800448E0
  c->f[31]=c->f[1]; // 800448E4
  c->r[29]=c->r[3]|c->r[3]; // 800448E8
  c->r[31]=c->r[4]|c->r[4]; // 800448EC
  c->r[30]=c->r[5]|c->r[5]; // 800448F0
  c->lr=0x800448F8u; f_8003B104(c); // 800448F4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800448F8
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800448FC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 80044900
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044904
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80044908
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8004490C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80044910
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[0]);} // 80044914
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80044918
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004491C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80044920
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80044924
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80044928
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8004492C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80044930
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80044934
  c->r[11]=c->r[1]+0x00000020u; // 80044938
  c->lr=0x80044940u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004493C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80044940
  c->lr=c->r[0]; // 80044944
  c->r[1]=c->r[1]+0x00000030u; // 80044948
  return; // 8004494C
}

// fn_80044950
void f_80044950(Ctx* __restrict c) {
  trace_call(0x80044950u);
  c->r[3]=0u+0x000000F0u; // 80044950
  return; // 80044954
}

// fn_80044958
void f_80044958(Ctx* __restrict c) {
  trace_call(0x80044958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044958
  c->r[0]=c->lr; // 8004495C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044960
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044964
  c->r[31]=c->r[3]|c->r[3]; // 80044968
  c->lr=0x80044970u; f_80044650(c); // 8004496C
  c->r[0]=R32(c->r[31]+0x00000008u); // 80044970
  c->r[3]=0u+0x80420000u; // 80044974
  c->r[3]=c->r[3]+0x00000BACu; // 80044978
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004497C
  c->r[0]=c->r[0]|0x80000000u; // 80044980
  W32(c->r[31]+0x00000008u,c->r[0]); // 80044984
  c->r[3]=c->r[31]|c->r[31]; // 80044988
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004498C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80044990
  c->ctr=c->r[12]; // 80044994
  if (true) { c->lr=0x8004499Cu; dispatch(c,c->ctr); } // 80044998
  c->r[3]=c->r[31]|c->r[31]; // 8004499C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800449A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800449A4
  c->lr=c->r[0]; // 800449A8
  c->r[1]=c->r[1]+0x00000010u; // 800449AC
  return; // 800449B0
}

// fn_800449B4
void f_800449B4(Ctx* __restrict c) {
  trace_call(0x800449B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800449B4
  c->r[0]=c->lr; // 800449B8
  cmps(c,0,(int32_t)c->r[3],0); // 800449BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800449C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800449C4
  c->r[30]=c->r[3]|c->r[3]; // 800449C8
  c->r[31]=c->r[4]|c->r[4]; // 800449CC
  if (crb(c,2)) { goto L_800449F0; } // 800449D0
  if (crb(c,2)) { goto L_800449E0; } // 800449D4
  c->r[4]=0u+0x00000000u; // 800449D8
  c->lr=0x800449E0u; f_8003ABE0(c); // 800449DC
L_800449E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800449E0
  if (!crb(c,1)) { goto L_800449F0; } // 800449E4
  c->r[3]=c->r[30]|c->r[30]; // 800449E8
  c->lr=0x800449F0u; f_80244DC0(c); // 800449EC
L_800449F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800449F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800449F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800449F8
  c->lr=c->r[0]; // 800449FC
  c->r[1]=c->r[1]+0x00000010u; // 80044A00
  return; // 80044A04
}

// fn_80044A08
void f_80044A08(Ctx* __restrict c) {
  trace_call(0x80044A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044A08
  c->r[0]=c->lr; // 80044A0C
  c->r[3]=0u+0x000000F0u; // 80044A10
  c->r[4]=c->r[13]+0xFFFF8F3Au; // 80044A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044A18
  c->r[5]=0u+0x00000000u; // 80044A1C
  c->r[6]=0u+0x00001001u; // 80044A20
  c->lr=0x80044A28u; f_80244D20(c); // 80044A24
  cmps(c,0,(int32_t)c->r[3],0); // 80044A28
  if (crb(c,2)) { goto L_80044A34; } // 80044A2C
  c->lr=0x80044A34u; f_80044958(c); // 80044A30
L_80044A34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044A34
  c->lr=c->r[0]; // 80044A38
  c->r[1]=c->r[1]+0x00000010u; // 80044A3C
  return; // 80044A40
}

// fn_80044A44
void f_80044A44(Ctx* __restrict c) {
  trace_call(0x80044A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044A44
  c->r[0]=c->lr; // 80044A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044A4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044A50
  c->r[31]=c->r[3]|c->r[3]; // 80044A54
  c->lr=0x80044A5Cu; f_80244520(c); // 80044A58
  c->r[7]=c->r[3]|c->r[3]; // 80044A5C
  c->r[9]=c->r[31]|c->r[31]; // 80044A60
  c->r[3]=0u+0x000000F0u; // 80044A64
  c->r[4]=c->r[13]+0xFFFF8F3Fu; // 80044A68
  c->r[5]=0u+0x00000000u; // 80044A6C
  c->r[6]=0u+0x00002001u; // 80044A70
  c->r[8]=0u+0x00000000u; // 80044A74
  c->lr=0x80044A7Cu; f_80242DF0(c); // 80044A78
  c->r[4]=c->r[3]|c->r[3]; // 80044A7C
  c->r[3]=0u+0x000000F0u; // 80044A80
  c->r[5]=c->r[13]+0xFFFF8F44u; // 80044A84
  c->r[6]=0u+0x00000000u; // 80044A88
  c->r[7]=0u+0x00001001u; // 80044A8C
  c->lr=0x80044A94u; f_80244DB0(c); // 80044A90
  cmps(c,0,(int32_t)c->r[3],0); // 80044A94
  if (crb(c,2)) { goto L_80044AA0; } // 80044A98
  c->lr=0x80044AA0u; f_80044958(c); // 80044A9C
L_80044AA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044AA4
  c->lr=c->r[0]; // 80044AA8
  c->r[1]=c->r[1]+0x00000010u; // 80044AAC
  return; // 80044AB0
}

// fn_80044AB4
void f_80044AB4(Ctx* __restrict c) {
  trace_call(0x80044AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044AB4
  c->r[0]=c->lr; // 80044AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044ABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80044AC0
  c->r[31]=c->r[3]|c->r[3]; // 80044AC4
  c->lr=0x80044ACCu; f_8003ACE0(c); // 80044AC8
  c->r[8]=0u+0x80420000u; // 80044ACC
  c->r[7]=0u+0x80410000u; // 80044AD0
  c->r[5]=0u+0x10EB0000u; // 80044AD4
  c->r[4]=0u+0x7B690000u; // 80044AD8
  c->r[3]=0u+0x68730000u; // 80044ADC
  c->r[8]=c->r[8]+0x00000B70u; // 80044AE0
  c->r[0]=c->r[3]+0xFFFF9CACu; // 80044AE4
  c->r[7]=c->r[7]+0xFFFFBB84u; // 80044AE8
  c->r[5]=c->r[5]+0x000042B1u; // 80044AEC
  c->r[4]=c->r[4]+0x000073DFu; // 80044AF0
  c->r[6]=0u+0x00000000u; // 80044AF4
  W32(c->r[31]+0x00000018u,c->r[8]); // 80044AF8
  c->r[3]=c->r[31]|c->r[31]; // 80044AFC
  W32(c->r[31]+0x00000000u,c->r[7]); // 80044B00
  W32(c->r[31]+0x00000008u,c->r[6]); // 80044B04
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 80044B08
  W32(c->r[31]+0x00000010u,c->r[4]); // 80044B0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80044B10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80044B14
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044B18
  c->lr=c->r[0]; // 80044B1C
  c->r[1]=c->r[1]+0x00000010u; // 80044B20
  return; // 80044B24
}

// fn_80044B28
void f_80044B28(Ctx* __restrict c) {
  trace_call(0x80044B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80044B28
  c->r[0]=c->lr; // 80044B2C
  cmps(c,0,(int32_t)c->r[4],0); // 80044B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80044B34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80044B38
  c->r[30]=c->r[3]|c->r[3]; // 80044B3C
  c->r[31]=c->r[4]|c->r[4]; // 80044B40
  if (crb(c,2)) { goto L_80044B98; } // 80044B44
  c->r[3]=c->r[31]|c->r[31]; // 80044B48
  c->lr=0x80044B50u; f_80244520(c); // 80044B4C
  c->r[7]=c->r[3]|c->r[3]; // 80044B50
  c->r[9]=c->r[31]|c->r[31]; // 80044B54
  c->r[3]=0u+0x000000E8u; // 80044B58
  c->r[4]=c->r[13]+0xFFFF8F49u; // 80044B5C
  c->r[5]=0u+0x00000000u; // 80044B60
  c->r[6]=0u+0x00002001u; // 80044B64
  c->r[8]=0u+0x00000000u; // 80044B68
  c->lr=0x80044B70u; f_80242DF0(c); // 80044B6C
  c->r[4]=c->r[3]|c->r[3]; // 80044B70
  c->r[3]=0u+0x000000E8u; // 80044B74
  c->r[5]=c->r[13]+0xFFFF8F4Eu; // 80044B78
  c->r[6]=0u+0x00000000u; // 80044B7C
  c->r[7]=0u+0x00001001u; // 80044B80
  c->lr=0x80044B88u; f_80244DB0(c); // 80044B84
  cmps(c,0,(int32_t)c->r[3],0); // 80044B88
  if (crb(c,2)) { goto L_80044BB8; } // 80044B8C
  c->lr=0x80044B94u; f_80044AB4(c); // 80044B90
  goto L_80044BB8; // 80044B94
L_80044B98:;
  c->r[3]=0u+0x000000E8u; // 80044B98
  c->r[4]=c->r[13]+0xFFFF8F53u; // 80044B9C
  c->r[5]=0u+0x00000000u; // 80044BA0
  c->r[6]=0u+0x00001001u; // 80044BA4
  c->lr=0x80044BACu; f_80244D20(c); // 80044BA8
  cmps(c,0,(int32_t)c->r[3],0); // 80044BAC
  if (crb(c,2)) { goto L_80044BB8; } // 80044BB0
  c->lr=0x80044BB8u; f_80044AB4(c); // 80044BB4
L_80044BB8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80044BB8
  W16(c->r[3]+0x00000014u,c->r[0]); // 80044BBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80044BC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80044BC4
  c->lr=c->r[0]; // 80044BC8
  c->r[1]=c->r[1]+0x00000010u; // 80044BCC
  return; // 80044BD0
}

