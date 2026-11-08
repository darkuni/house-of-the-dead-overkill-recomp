#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800AD534
void f_800AD534(Ctx* __restrict c) {
  trace_call(0x800AD534u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD534
  c->r[0]=c->lr; // 800AD538
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD53C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD540
  c->r[31]=c->r[3]|c->r[3]; // 800AD544
  c->lr=0x800AD54Cu; f_800AD198(c); // 800AD548
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AD54C
  c->r[3]=0u+0x80420000u; // 800AD550
  c->r[3]=c->r[3]+0xFFFFB5C8u; // 800AD554
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AD558
  c->r[0]=c->r[0]|0x80000000u; // 800AD55C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800AD560
  c->r[3]=c->r[31]|c->r[31]; // 800AD564
  c->r[12]=R32(c->r[31]+0x00000018u); // 800AD568
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AD56C
  c->ctr=c->r[12]; // 800AD570
  if (true) { c->lr=0x800AD578u; dispatch(c,c->ctr); } // 800AD574
  c->r[3]=c->r[31]|c->r[31]; // 800AD578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD57C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD580
  c->lr=c->r[0]; // 800AD584
  c->r[1]=c->r[1]+0x00000010u; // 800AD588
  return; // 800AD58C
}

// fn_800AD590
void f_800AD590(Ctx* __restrict c) {
  trace_call(0x800AD590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD590
  c->r[0]=c->lr; // 800AD594
  cmps(c,0,(int32_t)c->r[3],0); // 800AD598
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD59C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD5A0
  c->r[30]=c->r[3]|c->r[3]; // 800AD5A4
  c->r[31]=c->r[4]|c->r[4]; // 800AD5A8
  if (crb(c,2)) { goto L_800AD5C8; } // 800AD5AC
  c->r[4]=0u+0x00000000u; // 800AD5B0
  c->lr=0x800AD5B8u; f_802B1180(c); // 800AD5B4
  cmps(c,0,(int32_t)c->r[31],0); // 800AD5B8
  if (!crb(c,1)) { goto L_800AD5C8; } // 800AD5BC
  c->r[3]=c->r[30]|c->r[30]; // 800AD5C0
  c->lr=0x800AD5C8u; f_80244DC0(c); // 800AD5C4
L_800AD5C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800AD5C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD5CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD5D0
  c->lr=c->r[0]; // 800AD5D4
  c->r[1]=c->r[1]+0x00000010u; // 800AD5D8
  return; // 800AD5DC
}

// fn_800AD5E0
void f_800AD5E0(Ctx* __restrict c) {
  trace_call(0x800AD5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD5E0
  c->r[0]=c->lr; // 800AD5E4
  c->r[3]=0u+0x00000058u; // 800AD5E8
  c->r[4]=c->r[13]+0xFFFFA7F5u; // 800AD5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD5F0
  c->r[5]=0u+0x00000000u; // 800AD5F4
  c->r[6]=0u+0x00001001u; // 800AD5F8
  c->lr=0x800AD600u; f_80244D20(c); // 800AD5FC
  cmps(c,0,(int32_t)c->r[3],0); // 800AD600
  if (crb(c,2)) { goto L_800AD60C; } // 800AD604
  c->lr=0x800AD60Cu; f_800AD534(c); // 800AD608
L_800AD60C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD60C
  c->lr=c->r[0]; // 800AD610
  c->r[1]=c->r[1]+0x00000010u; // 800AD614
  return; // 800AD618
}

// fn_800AD61C
void f_800AD61C(Ctx* __restrict c) {
  trace_call(0x800AD61Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD61C
  c->r[0]=c->lr; // 800AD620
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD628
  c->r[31]=c->r[3]|c->r[3]; // 800AD62C
  c->lr=0x800AD634u; f_80244520(c); // 800AD630
  c->r[7]=c->r[3]|c->r[3]; // 800AD634
  c->r[9]=c->r[31]|c->r[31]; // 800AD638
  c->r[3]=0u+0x00000058u; // 800AD63C
  c->r[4]=c->r[13]+0xFFFFA7FAu; // 800AD640
  c->r[5]=0u+0x00000000u; // 800AD644
  c->r[6]=0u+0x00002001u; // 800AD648
  c->r[8]=0u+0x00000000u; // 800AD64C
  c->lr=0x800AD654u; f_80242DF0(c); // 800AD650
  c->r[4]=c->r[3]|c->r[3]; // 800AD654
  c->r[3]=0u+0x00000058u; // 800AD658
  c->r[5]=c->r[13]+0xFFFFA7FFu; // 800AD65C
  c->r[6]=0u+0x00000000u; // 800AD660
  c->r[7]=0u+0x00001001u; // 800AD664
  c->lr=0x800AD66Cu; f_80244DB0(c); // 800AD668
  cmps(c,0,(int32_t)c->r[3],0); // 800AD66C
  if (crb(c,2)) { goto L_800AD678; } // 800AD670
  c->lr=0x800AD678u; f_800AD534(c); // 800AD674
L_800AD678:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD678
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD67C
  c->lr=c->r[0]; // 800AD680
  c->r[1]=c->r[1]+0x00000010u; // 800AD684
  return; // 800AD688
}

// fn_800AD68C
void f_800AD68C(Ctx* __restrict c) {
  trace_call(0x800AD68Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD68C
  c->r[0]=c->lr; // 800AD690
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD698
  c->r[31]=c->r[3]|c->r[3]; // 800AD69C
  c->lr=0x800AD6A4u; f_802B1168(c); // 800AD6A0
  c->r[8]=0u+0x80420000u; // 800AD6A4
  c->r[7]=0u+0x80410000u; // 800AD6A8
  c->r[5]=0u+0x803B0000u; // 800AD6AC
  c->r[4]=0u+0x12750000u; // 800AD6B0
  c->r[3]=0u+0xD9370000u; // 800AD6B4
  c->r[8]=c->r[8]+0xFFFFB58Cu; // 800AD6B8
  c->r[0]=c->r[3]+0x000042D5u; // 800AD6BC
  c->r[7]=c->r[7]+0xFFFFC92Cu; // 800AD6C0
  c->r[5]=c->r[5]+0xFFFFA57Bu; // 800AD6C4
  c->r[4]=c->r[4]+0xFFFFBF27u; // 800AD6C8
  c->r[6]=0u+0x00000000u; // 800AD6CC
  W32(c->r[31]+0x00000018u,c->r[8]); // 800AD6D0
  c->r[3]=c->r[31]|c->r[31]; // 800AD6D4
  W32(c->r[31]+0x00000000u,c->r[7]); // 800AD6D8
  W32(c->r[31]+0x00000008u,c->r[6]); // 800AD6DC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800AD6E0
  W32(c->r[31]+0x00000010u,c->r[4]); // 800AD6E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AD6E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD6EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD6F0
  c->lr=c->r[0]; // 800AD6F4
  c->r[1]=c->r[1]+0x00000010u; // 800AD6F8
  return; // 800AD6FC
}

// fn_800AD700
void f_800AD700(Ctx* __restrict c) {
  trace_call(0x800AD700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD700
  c->r[0]=c->lr; // 800AD704
  cmps(c,0,(int32_t)c->r[4],0); // 800AD708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD70C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD710
  c->r[30]=c->r[3]|c->r[3]; // 800AD714
  c->r[31]=c->r[4]|c->r[4]; // 800AD718
  if (crb(c,2)) { goto L_800AD770; } // 800AD71C
  c->r[3]=c->r[31]|c->r[31]; // 800AD720
  c->lr=0x800AD728u; f_80244520(c); // 800AD724
  c->r[7]=c->r[3]|c->r[3]; // 800AD728
  c->r[9]=c->r[31]|c->r[31]; // 800AD72C
  c->r[3]=0u+0x00000028u; // 800AD730
  c->r[4]=c->r[13]+0xFFFFA804u; // 800AD734
  c->r[5]=0u+0x00000000u; // 800AD738
  c->r[6]=0u+0x00002001u; // 800AD73C
  c->r[8]=0u+0x00000000u; // 800AD740
  c->lr=0x800AD748u; f_80242DF0(c); // 800AD744
  c->r[4]=c->r[3]|c->r[3]; // 800AD748
  c->r[3]=0u+0x00000028u; // 800AD74C
  c->r[5]=c->r[13]+0xFFFFA809u; // 800AD750
  c->r[6]=0u+0x00000000u; // 800AD754
  c->r[7]=0u+0x00001001u; // 800AD758
  c->lr=0x800AD760u; f_80244DB0(c); // 800AD75C
  cmps(c,0,(int32_t)c->r[3],0); // 800AD760
  if (crb(c,2)) { goto L_800AD790; } // 800AD764
  c->lr=0x800AD76Cu; f_800AD68C(c); // 800AD768
  goto L_800AD790; // 800AD76C
L_800AD770:;
  c->r[3]=0u+0x00000028u; // 800AD770
  c->r[4]=c->r[13]+0xFFFFA80Eu; // 800AD774
  c->r[5]=0u+0x00000000u; // 800AD778
  c->r[6]=0u+0x00001001u; // 800AD77C
  c->lr=0x800AD784u; f_80244D20(c); // 800AD780
  cmps(c,0,(int32_t)c->r[3],0); // 800AD784
  if (crb(c,2)) { goto L_800AD790; } // 800AD788
  c->lr=0x800AD790u; f_800AD68C(c); // 800AD78C
L_800AD790:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800AD790
  W16(c->r[3]+0x00000014u,c->r[0]); // 800AD794
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD798
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD79C
  c->lr=c->r[0]; // 800AD7A0
  c->r[1]=c->r[1]+0x00000010u; // 800AD7A4
  return; // 800AD7A8
}

// fn_800AD7AC
void f_800AD7AC(Ctx* __restrict c) {
  trace_call(0x800AD7ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD7AC
  c->r[0]=c->lr; // 800AD7B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD7B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD7B8
  c->r[31]=c->r[4]|c->r[4]; // 800AD7BC
  c->r[30]=c->r[3]|c->r[3]; // 800AD7C0
  c->r[3]=c->r[31]|c->r[31]; // 800AD7C4
  c->lr=0x800AD7CCu; f_8030C0A0(c); // 800AD7C8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800AD7CC
  c->r[3]=c->r[31]|c->r[31]; // 800AD7D0
  c->lr=0x800AD7D8u; f_8030C0A0(c); // 800AD7D4
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 800AD7D8
  c->r[3]=c->r[31]|c->r[31]; // 800AD7DC
  c->lr=0x800AD7E4u; f_8030C0A0(c); // 800AD7E0
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 800AD7E4
  c->r[3]=0u+0x00000000u; // 800AD7E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD7EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD7F0
  c->lr=c->r[0]; // 800AD7F4
  c->r[1]=c->r[1]+0x00000010u; // 800AD7F8
  return; // 800AD7FC
}

// fn_800AD800
void f_800AD800(Ctx* __restrict c) {
  trace_call(0x800AD800u);
  return; // 800AD800
}

// fn_800AD804
void f_800AD804(Ctx* __restrict c) {
  trace_call(0x800AD804u);
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD804
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD808
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD80C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 800AD810
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 800AD814
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800AD818
  return; // 800AD81C
}

// fn_800AD820
void f_800AD820(Ctx* __restrict c) {
  trace_call(0x800AD820u);
  cmps(c,0,(int32_t)c->r[5],0); // 800AD820
  if (crb(c,2)) { goto L_800AD82C; } // 800AD824
  goto L_800AD830; // 800AD828
L_800AD82C:;
  c->r[5]=c->r[3]|c->r[3]; // 800AD82C
L_800AD830:;
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD830
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AD834
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD838
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[0]);} // 800AD83C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD840
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[0]);} // 800AD844
  return; // 800AD848
}

// fn_800AD84C
void f_800AD84C(Ctx* __restrict c) {
  trace_call(0x800AD84Cu);
  c->r[3]=0u+0x00000000u; // 800AD84C
  return; // 800AD850
}

// fn_800AD854
void f_800AD854(Ctx* __restrict c) {
  trace_call(0x800AD854u);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD854
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD858
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 800AD85C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD860
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AD864
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AD868
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AD86C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AD870
  {uint32_t ea=c->r[4]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD874
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD878
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AD87C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AD880
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AD884
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800AD888
  {uint32_t ea=c->r[4]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD88C
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD890
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AD894
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AD898
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AD89C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800AD8A0
  return; // 800AD8A4
}

// fn_800AD8A8
void f_800AD8A8(Ctx* __restrict c) {
  trace_call(0x800AD8A8u);
  c->r[3]=0u+0x00000028u; // 800AD8A8
  return; // 800AD8AC
}

// fn_800AD8B0
void f_800AD8B0(Ctx* __restrict c) {
  trace_call(0x800AD8B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD8B0
  c->r[0]=c->lr; // 800AD8B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD8B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD8BC
  c->r[31]=c->r[3]|c->r[3]; // 800AD8C0
  c->lr=0x800AD8C8u; f_800AD68C(c); // 800AD8C4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AD8C8
  c->r[3]=0u+0x80420000u; // 800AD8CC
  c->r[3]=c->r[3]+0xFFFFB54Cu; // 800AD8D0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AD8D4
  c->r[0]=c->r[0]|0x80000000u; // 800AD8D8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800AD8DC
  c->r[3]=c->r[31]|c->r[31]; // 800AD8E0
  c->r[12]=R32(c->r[31]+0x00000018u); // 800AD8E4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AD8E8
  c->ctr=c->r[12]; // 800AD8EC
  if (true) { c->lr=0x800AD8F4u; dispatch(c,c->ctr); } // 800AD8F0
  c->r[3]=c->r[31]|c->r[31]; // 800AD8F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD8F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD8FC
  c->lr=c->r[0]; // 800AD900
  c->r[1]=c->r[1]+0x00000010u; // 800AD904
  return; // 800AD908
}

// fn_800AD90C
void f_800AD90C(Ctx* __restrict c) {
  trace_call(0x800AD90Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD90C
  c->r[0]=c->lr; // 800AD910
  cmps(c,0,(int32_t)c->r[3],0); // 800AD914
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD918
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD91C
  c->r[30]=c->r[3]|c->r[3]; // 800AD920
  c->r[31]=c->r[4]|c->r[4]; // 800AD924
  if (crb(c,2)) { goto L_800AD944; } // 800AD928
  c->r[4]=0u+0x00000000u; // 800AD92C
  c->lr=0x800AD934u; f_802B1180(c); // 800AD930
  cmps(c,0,(int32_t)c->r[31],0); // 800AD934
  if (!crb(c,1)) { goto L_800AD944; } // 800AD938
  c->r[3]=c->r[30]|c->r[30]; // 800AD93C
  c->lr=0x800AD944u; f_80244DC0(c); // 800AD940
L_800AD944:;
  c->r[3]=c->r[30]|c->r[30]; // 800AD944
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD948
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD94C
  c->lr=c->r[0]; // 800AD950
  c->r[1]=c->r[1]+0x00000010u; // 800AD954
  return; // 800AD958
}

// fn_800AD95C
void f_800AD95C(Ctx* __restrict c) {
  trace_call(0x800AD95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD95C
  c->r[0]=c->lr; // 800AD960
  c->r[3]=0u+0x00000028u; // 800AD964
  c->r[4]=c->r[13]+0xFFFFA813u; // 800AD968
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD96C
  c->r[5]=0u+0x00000000u; // 800AD970
  c->r[6]=0u+0x00001001u; // 800AD974
  c->lr=0x800AD97Cu; f_80244D20(c); // 800AD978
  cmps(c,0,(int32_t)c->r[3],0); // 800AD97C
  if (crb(c,2)) { goto L_800AD988; } // 800AD980
  c->lr=0x800AD988u; f_800AD8B0(c); // 800AD984
L_800AD988:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD988
  c->lr=c->r[0]; // 800AD98C
  c->r[1]=c->r[1]+0x00000010u; // 800AD990
  return; // 800AD994
}

// fn_800AD998
void f_800AD998(Ctx* __restrict c) {
  trace_call(0x800AD998u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD998
  c->r[0]=c->lr; // 800AD99C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD9A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD9A4
  c->r[31]=c->r[3]|c->r[3]; // 800AD9A8
  c->lr=0x800AD9B0u; f_80244520(c); // 800AD9AC
  c->r[7]=c->r[3]|c->r[3]; // 800AD9B0
  c->r[9]=c->r[31]|c->r[31]; // 800AD9B4
  c->r[3]=0u+0x00000028u; // 800AD9B8
  c->r[4]=c->r[13]+0xFFFFA818u; // 800AD9BC
  c->r[5]=0u+0x00000000u; // 800AD9C0
  c->r[6]=0u+0x00002001u; // 800AD9C4
  c->r[8]=0u+0x00000000u; // 800AD9C8
  c->lr=0x800AD9D0u; f_80242DF0(c); // 800AD9CC
  c->r[4]=c->r[3]|c->r[3]; // 800AD9D0
  c->r[3]=0u+0x00000028u; // 800AD9D4
  c->r[5]=c->r[13]+0xFFFFA81Du; // 800AD9D8
  c->r[6]=0u+0x00000000u; // 800AD9DC
  c->r[7]=0u+0x00001001u; // 800AD9E0
  c->lr=0x800AD9E8u; f_80244DB0(c); // 800AD9E4
  cmps(c,0,(int32_t)c->r[3],0); // 800AD9E8
  if (crb(c,2)) { goto L_800AD9F4; } // 800AD9EC
  c->lr=0x800AD9F4u; f_800AD8B0(c); // 800AD9F0
L_800AD9F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD9F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD9F8
  c->lr=c->r[0]; // 800AD9FC
  c->r[1]=c->r[1]+0x00000010u; // 800ADA00
  return; // 800ADA04
}

// fn_800ADA08
void f_800ADA08(Ctx* __restrict c) {
  trace_call(0x800ADA08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADA08
  c->r[0]=c->lr; // 800ADA0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADA10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADA14
  c->r[31]=c->r[3]|c->r[3]; // 800ADA18
  c->lr=0x800ADA20u; f_802B1168(c); // 800ADA1C
  c->r[8]=0u+0x80420000u; // 800ADA20
  c->r[7]=0u+0x80410000u; // 800ADA24
  c->r[5]=0u+0x21980000u; // 800ADA28
  c->r[4]=0u+0x10390000u; // 800ADA2C
  c->r[3]=0u+0xDB7B0000u; // 800ADA30
  c->r[8]=c->r[8]+0xFFFFB510u; // 800ADA34
  c->r[0]=c->r[3]+0x00005C80u; // 800ADA38
  c->r[7]=c->r[7]+0xFFFFC947u; // 800ADA3C
  c->r[5]=c->r[5]+0xFFFFEB53u; // 800ADA40
  c->r[4]=c->r[4]+0xFFFFA172u; // 800ADA44
  c->r[6]=0u+0x00000000u; // 800ADA48
  W32(c->r[31]+0x00000018u,c->r[8]); // 800ADA4C
  c->r[3]=c->r[31]|c->r[31]; // 800ADA50
  W32(c->r[31]+0x00000000u,c->r[7]); // 800ADA54
  W32(c->r[31]+0x00000008u,c->r[6]); // 800ADA58
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800ADA5C
  W32(c->r[31]+0x00000010u,c->r[4]); // 800ADA60
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ADA64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADA68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADA6C
  c->lr=c->r[0]; // 800ADA70
  c->r[1]=c->r[1]+0x00000010u; // 800ADA74
  return; // 800ADA78
}

// fn_800ADA7C
void f_800ADA7C(Ctx* __restrict c) {
  trace_call(0x800ADA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADA7C
  c->r[0]=c->lr; // 800ADA80
  cmps(c,0,(int32_t)c->r[4],0); // 800ADA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADA88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ADA8C
  c->r[30]=c->r[3]|c->r[3]; // 800ADA90
  c->r[31]=c->r[4]|c->r[4]; // 800ADA94
  if (crb(c,2)) { goto L_800ADAEC; } // 800ADA98
  c->r[3]=c->r[31]|c->r[31]; // 800ADA9C
  c->lr=0x800ADAA4u; f_80244520(c); // 800ADAA0
  c->r[7]=c->r[3]|c->r[3]; // 800ADAA4
  c->r[9]=c->r[31]|c->r[31]; // 800ADAA8
  c->r[3]=0u+0x00000084u; // 800ADAAC
  c->r[4]=c->r[13]+0xFFFFA822u; // 800ADAB0
  c->r[5]=0u+0x00000000u; // 800ADAB4
  c->r[6]=0u+0x00002001u; // 800ADAB8
  c->r[8]=0u+0x00000000u; // 800ADABC
  c->lr=0x800ADAC4u; f_80242DF0(c); // 800ADAC0
  c->r[4]=c->r[3]|c->r[3]; // 800ADAC4
  c->r[3]=0u+0x00000084u; // 800ADAC8
  c->r[5]=c->r[13]+0xFFFFA827u; // 800ADACC
  c->r[6]=0u+0x00000000u; // 800ADAD0
  c->r[7]=0u+0x00001001u; // 800ADAD4
  c->lr=0x800ADADCu; f_80244DB0(c); // 800ADAD8
  cmps(c,0,(int32_t)c->r[3],0); // 800ADADC
  if (crb(c,2)) { goto L_800ADB0C; } // 800ADAE0
  c->lr=0x800ADAE8u; f_800ADA08(c); // 800ADAE4
  goto L_800ADB0C; // 800ADAE8
L_800ADAEC:;
  c->r[3]=0u+0x00000084u; // 800ADAEC
  c->r[4]=c->r[13]+0xFFFFA82Cu; // 800ADAF0
  c->r[5]=0u+0x00000000u; // 800ADAF4
  c->r[6]=0u+0x00001001u; // 800ADAF8
  c->lr=0x800ADB00u; f_80244D20(c); // 800ADAFC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADB00
  if (crb(c,2)) { goto L_800ADB0C; } // 800ADB04
  c->lr=0x800ADB0Cu; f_800ADA08(c); // 800ADB08
L_800ADB0C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800ADB0C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800ADB10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ADB14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADB18
  c->lr=c->r[0]; // 800ADB1C
  c->r[1]=c->r[1]+0x00000010u; // 800ADB20
  return; // 800ADB24
}

// fn_800ADB28
void f_800ADB28(Ctx* __restrict c) {
  trace_call(0x800ADB28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADB28
  c->r[0]=c->lr; // 800ADB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADB30
  c->r[0]=0u+0x00000000u; // 800ADB34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ADB38
  c->r[31]=c->r[4]|c->r[4]; // 800ADB3C
  c->r[30]=c->r[3]|c->r[3]; // 800ADB40
  c->r[4]=0u+0x00000000u; // 800ADB44
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800ADB48
  c->r[3]=c->r[31]|c->r[31]; // 800ADB4C
  c->lr=0x800ADB54u; f_8030BE30(c); // 800ADB50
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800ADB54
  c->r[3]=c->r[31]|c->r[31]; // 800ADB58
  c->lr=0x800ADB60u; f_8030BD1C(c); // 800ADB5C
  W32(c->r[30]+0x00000020u,c->r[3]); // 800ADB60
  c->r[3]=c->r[31]|c->r[31]; // 800ADB64
  c->r[4]=c->r[30]+0x00000028u; // 800ADB68
  c->r[5]=0u+0x00000000u; // 800ADB6C
  c->lr=0x800ADB74u; f_8030B7F0(c); // 800ADB70
  c->r[3]=c->r[31]|c->r[31]; // 800ADB74
  c->r[4]=0u+0x00000000u; // 800ADB78
  c->lr=0x800ADB80u; f_8030BE30(c); // 800ADB7C
  W32(c->r[30]+0x00000048u,c->r[3]); // 800ADB80
  c->r[3]=c->r[31]|c->r[31]; // 800ADB84
  c->lr=0x800ADB8Cu; f_8030BD1C(c); // 800ADB88
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800ADB8C
  c->r[3]=c->r[31]|c->r[31]; // 800ADB90
  c->r[4]=c->r[30]+0x00000054u; // 800ADB94
  c->r[5]=0u+0x00000000u; // 800ADB98
  c->lr=0x800ADBA0u; f_8030B7F0(c); // 800ADB9C
  c->r[3]=c->r[31]|c->r[31]; // 800ADBA0
  c->lr=0x800ADBA8u; f_8030C0A0(c); // 800ADBA4
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800ADBA8
  c->r[3]=c->r[31]|c->r[31]; // 800ADBAC
  c->lr=0x800ADBB4u; f_8030BD1C(c); // 800ADBB0
  W32(c->r[30]+0x00000078u,c->r[3]); // 800ADBB4
  c->r[3]=c->r[31]|c->r[31]; // 800ADBB8
  c->lr=0x800ADBC0u; f_8030BD1C(c); // 800ADBBC
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800ADBC0
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800ADBC4
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 800ADBC8
  c->r[3]=c->r[31]|c->r[31]; // 800ADBCC
  c->lr=0x800ADBD4u; f_8030BD1C(c); // 800ADBD0
  W32(c->r[30]+0x00000080u,c->r[3]); // 800ADBD4
  c->r[3]=c->r[31]|c->r[31]; // 800ADBD8
  c->lr=0x800ADBE0u; f_8030BD1C(c); // 800ADBDC
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800ADBE0
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800ADBE4
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 800ADBE8
  c->r[3]=0u+0x00000000u; // 800ADBEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ADBF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADBF4
  c->lr=c->r[0]; // 800ADBF8
  c->r[1]=c->r[1]+0x00000010u; // 800ADBFC
  return; // 800ADC00
}

// fn_800ADC04
void f_800ADC04(Ctx* __restrict c) {
  trace_call(0x800ADC04u);
  return; // 800ADC04
}

// fn_800ADC08
void f_800ADC08(Ctx* __restrict c) {
  trace_call(0x800ADC08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADC08
  c->r[0]=c->lr; // 800ADC0C
  cmps(c,0,(int32_t)c->r[6],0); // 800ADC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADC14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ADC18
  c->r[30]=c->r[3]|c->r[3]; // 800ADC1C
  c->r[31]=c->r[5]|c->r[5]; // 800ADC20
  if (!crb(c,2)) { goto L_800ADC58; } // 800ADC24
  c->r[0]=R32(c->r[3]+0x00000020u); // 800ADC28
  cmps(c,0,(int32_t)c->r[0],7); // 800ADC2C
  if (!crb(c,0)) { goto L_800ADC40; } // 800ADC30
  c->r[4]=c->r[31]|c->r[31]; // 800ADC34
  c->r[3]=c->r[3]+0x0000001Cu; // 800ADC38
  c->lr=0x800ADC40u; f_8003A994(c); // 800ADC3C
L_800ADC40:;
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800ADC40
  cmps(c,0,(int32_t)c->r[0],7); // 800ADC44
  if (!crb(c,0)) { goto L_800ADC58; } // 800ADC48
  c->r[4]=c->r[31]|c->r[31]; // 800ADC4C
  c->r[3]=c->r[30]+0x00000048u; // 800ADC50
  c->lr=0x800ADC58u; f_8003A994(c); // 800ADC54
L_800ADC58:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ADC58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADC5C
  c->lr=c->r[0]; // 800ADC60
  c->r[1]=c->r[1]+0x00000010u; // 800ADC64
  return; // 800ADC68
}

// fn_800ADC6C
void f_800ADC6C(Ctx* __restrict c) {
  trace_call(0x800ADC6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADC6C
  c->r[0]=c->lr; // 800ADC70
  c->r[4]=c->r[13]+0xFFFFA831u; // 800ADC74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADC78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADC7C
  c->r[31]=0u+0x00000000u; // 800ADC80
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ADC84
  c->r[30]=c->r[3]|c->r[3]; // 800ADC88
  W32(c->r[3]+0x0000007Cu,c->r[31]); // 800ADC8C
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800ADC90
  W32(c->r[3]+0x00000024u,c->r[31]); // 800ADC94
  W32(c->r[3]+0x00000020u,c->r[31]); // 800ADC98
  c->r[3]=c->r[3]+0x00000028u; // 800ADC9C
  c->lr=0x800ADCA4u; f_803A6F10(c); // 800ADCA0
  W32(c->r[30]+0x00000048u,c->r[31]); // 800ADCA4
  c->r[3]=c->r[30]+0x00000054u; // 800ADCA8
  c->r[4]=c->r[13]+0xFFFFA832u; // 800ADCAC
  W32(c->r[30]+0x00000050u,c->r[31]); // 800ADCB0
  W32(c->r[30]+0x0000004Cu,c->r[31]); // 800ADCB4
  c->lr=0x800ADCBCu; f_803A6F10(c); // 800ADCB8
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800ADCBC
  c->r[4]=0u+0x00000001u; // 800ADCC0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ADCC4
  c->r[3]=0u+0x00000002u; // 800ADCC8
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 800ADCCC
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 800ADCD0
  W32(c->r[30]+0x00000078u,c->r[4]); // 800ADCD4
  W32(c->r[30]+0x00000080u,c->r[3]); // 800ADCD8
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 800ADCDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADCE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ADCE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADCE8
  c->lr=c->r[0]; // 800ADCEC
  c->r[1]=c->r[1]+0x00000010u; // 800ADCF0
  return; // 800ADCF4
}

// fn_800ADCF8
void f_800ADCF8(Ctx* __restrict c) {
  trace_call(0x800ADCF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADCF8
  c->r[0]=c->lr; // 800ADCFC
  cmps(c,0,(int32_t)c->r[5],0); // 800ADD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADD04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADD08
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ADD0C
  c->r[30]=c->r[4]|c->r[4]; // 800ADD10
  if (crb(c,2)) { goto L_800ADD20; } // 800ADD14
  c->r[31]=c->r[5]|c->r[5]; // 800ADD18
  goto L_800ADD24; // 800ADD1C
L_800ADD20:;
  c->r[31]=c->r[3]|c->r[3]; // 800ADD20
L_800ADD24:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800ADD24
  c->r[4]=c->r[4]+0x0000001Cu; // 800ADD28
  c->lr=0x800ADD30u; f_8003AB48(c); // 800ADD2C
  c->r[3]=c->r[31]+0x00000028u; // 800ADD30
  c->r[4]=c->r[30]+0x00000028u; // 800ADD34
  c->lr=0x800ADD3Cu; f_803A6F10(c); // 800ADD38
  c->r[3]=c->r[31]+0x00000048u; // 800ADD3C
  c->r[4]=c->r[30]+0x00000048u; // 800ADD40
  c->lr=0x800ADD48u; f_8003AB48(c); // 800ADD44
  c->r[3]=c->r[31]+0x00000054u; // 800ADD48
  c->r[4]=c->r[30]+0x00000054u; // 800ADD4C
  c->lr=0x800ADD54u; f_803A6F10(c); // 800ADD50
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ADD54
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800ADD58
  c->r[0]=R32(c->r[30]+0x00000078u); // 800ADD5C
  W32(c->r[31]+0x00000078u,c->r[0]); // 800ADD60
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800ADD64
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 800ADD68
  c->r[0]=R32(c->r[30]+0x00000080u); // 800ADD6C
  W32(c->r[31]+0x00000080u,c->r[0]); // 800ADD70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADD74
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ADD78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADD7C
  c->lr=c->r[0]; // 800ADD80
  c->r[1]=c->r[1]+0x00000010u; // 800ADD84
  return; // 800ADD88
}

// fn_800ADD8C
void f_800ADD8C(Ctx* __restrict c) {
  trace_call(0x800ADD8Cu);
  c->r[3]=0u+0x00000000u; // 800ADD8C
  return; // 800ADD90
}

// fn_800ADD94
void f_800ADD94(Ctx* __restrict c) {
  trace_call(0x800ADD94u);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADD94
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ADD98
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 800ADD9C
  {uint32_t ea=c->r[4]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADDA0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800ADDA4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800ADDA8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800ADDAC
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800ADDB0
  return; // 800ADDB4
}

// fn_800ADDB8
void f_800ADDB8(Ctx* __restrict c) {
  trace_call(0x800ADDB8u);
  c->r[3]=0u+0x00000084u; // 800ADDB8
  return; // 800ADDBC
}

// fn_800ADDC0
void f_800ADDC0(Ctx* __restrict c) {
  trace_call(0x800ADDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADDC0
  c->r[0]=c->lr; // 800ADDC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADDC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADDCC
  c->r[31]=c->r[3]|c->r[3]; // 800ADDD0
  c->lr=0x800ADDD8u; f_800ADA08(c); // 800ADDD4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800ADDD8
  c->r[3]=0u+0x80420000u; // 800ADDDC
  c->r[3]=c->r[3]+0xFFFFB4D0u; // 800ADDE0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800ADDE4
  c->r[0]=c->r[0]|0x80000000u; // 800ADDE8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800ADDEC
  c->r[3]=c->r[31]|c->r[31]; // 800ADDF0
  c->r[12]=R32(c->r[31]+0x00000018u); // 800ADDF4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800ADDF8
  c->ctr=c->r[12]; // 800ADDFC
  if (true) { c->lr=0x800ADE04u; dispatch(c,c->ctr); } // 800ADE00
  c->r[3]=c->r[31]|c->r[31]; // 800ADE04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADE08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADE0C
  c->lr=c->r[0]; // 800ADE10
  c->r[1]=c->r[1]+0x00000010u; // 800ADE14
  return; // 800ADE18
}

// fn_800ADE1C
void f_800ADE1C(Ctx* __restrict c) {
  trace_call(0x800ADE1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADE1C
  c->r[0]=c->lr; // 800ADE20
  cmps(c,0,(int32_t)c->r[3],0); // 800ADE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADE28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ADE2C
  c->r[30]=c->r[3]|c->r[3]; // 800ADE30
  c->r[31]=c->r[4]|c->r[4]; // 800ADE34
  if (crb(c,2)) { goto L_800ADE54; } // 800ADE38
  c->r[4]=0u+0x00000000u; // 800ADE3C
  c->lr=0x800ADE44u; f_802B1180(c); // 800ADE40
  cmps(c,0,(int32_t)c->r[31],0); // 800ADE44
  if (!crb(c,1)) { goto L_800ADE54; } // 800ADE48
  c->r[3]=c->r[30]|c->r[30]; // 800ADE4C
  c->lr=0x800ADE54u; f_80244DC0(c); // 800ADE50
L_800ADE54:;
  c->r[3]=c->r[30]|c->r[30]; // 800ADE54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ADE58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADE5C
  c->lr=c->r[0]; // 800ADE60
  c->r[1]=c->r[1]+0x00000010u; // 800ADE64
  return; // 800ADE68
}

// fn_800ADE6C
void f_800ADE6C(Ctx* __restrict c) {
  trace_call(0x800ADE6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADE6C
  c->r[0]=c->lr; // 800ADE70
  c->r[3]=0u+0x00000084u; // 800ADE74
  c->r[4]=c->r[13]+0xFFFFA833u; // 800ADE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADE7C
  c->r[5]=0u+0x00000000u; // 800ADE80
  c->r[6]=0u+0x00001001u; // 800ADE84
  c->lr=0x800ADE8Cu; f_80244D20(c); // 800ADE88
  cmps(c,0,(int32_t)c->r[3],0); // 800ADE8C
  if (crb(c,2)) { goto L_800ADE98; } // 800ADE90
  c->lr=0x800ADE98u; f_800ADDC0(c); // 800ADE94
L_800ADE98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADE98
  c->lr=c->r[0]; // 800ADE9C
  c->r[1]=c->r[1]+0x00000010u; // 800ADEA0
  return; // 800ADEA4
}

// fn_800ADEA8
void f_800ADEA8(Ctx* __restrict c) {
  trace_call(0x800ADEA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADEA8
  c->r[0]=c->lr; // 800ADEAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADEB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADEB4
  c->r[31]=c->r[3]|c->r[3]; // 800ADEB8
  c->lr=0x800ADEC0u; f_80244520(c); // 800ADEBC
  c->r[7]=c->r[3]|c->r[3]; // 800ADEC0
  c->r[9]=c->r[31]|c->r[31]; // 800ADEC4
  c->r[3]=0u+0x00000084u; // 800ADEC8
  c->r[4]=c->r[13]+0xFFFFA838u; // 800ADECC
  c->r[5]=0u+0x00000000u; // 800ADED0
  c->r[6]=0u+0x00002001u; // 800ADED4
  c->r[8]=0u+0x00000000u; // 800ADED8
  c->lr=0x800ADEE0u; f_80242DF0(c); // 800ADEDC
  c->r[4]=c->r[3]|c->r[3]; // 800ADEE0
  c->r[3]=0u+0x00000084u; // 800ADEE4
  c->r[5]=c->r[13]+0xFFFFA83Du; // 800ADEE8
  c->r[6]=0u+0x00000000u; // 800ADEEC
  c->r[7]=0u+0x00001001u; // 800ADEF0
  c->lr=0x800ADEF8u; f_80244DB0(c); // 800ADEF4
  cmps(c,0,(int32_t)c->r[3],0); // 800ADEF8
  if (crb(c,2)) { goto L_800ADF04; } // 800ADEFC
  c->lr=0x800ADF04u; f_800ADDC0(c); // 800ADF00
L_800ADF04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADF04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADF08
  c->lr=c->r[0]; // 800ADF0C
  c->r[1]=c->r[1]+0x00000010u; // 800ADF10
  return; // 800ADF14
}

// fn_800ADF18
void f_800ADF18(Ctx* __restrict c) {
  trace_call(0x800ADF18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADF18
  c->r[0]=c->lr; // 800ADF1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADF20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADF24
  c->r[31]=c->r[3]|c->r[3]; // 800ADF28
  c->lr=0x800ADF30u; f_802B1168(c); // 800ADF2C
  c->r[8]=0u+0x80420000u; // 800ADF30
  c->r[7]=0u+0x80410000u; // 800ADF34
  c->r[5]=0u+0xD21A0000u; // 800ADF38
  c->r[4]=0u+0x33E80000u; // 800ADF3C
  c->r[3]=0u+0x9AA30000u; // 800ADF40
  c->r[8]=c->r[8]+0xFFFFB494u; // 800ADF44
  c->r[0]=c->r[3]+0xFFFFBB9Bu; // 800ADF48
  c->r[7]=c->r[7]+0xFFFFC962u; // 800ADF4C
  c->r[5]=c->r[5]+0x0000133Au; // 800ADF50
  c->r[4]=c->r[4]+0xFFFF87F7u; // 800ADF54
  c->r[6]=0u+0x00000000u; // 800ADF58
  W32(c->r[31]+0x00000018u,c->r[8]); // 800ADF5C
  c->r[3]=c->r[31]|c->r[31]; // 800ADF60
  W32(c->r[31]+0x00000000u,c->r[7]); // 800ADF64
  W32(c->r[31]+0x00000008u,c->r[6]); // 800ADF68
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800ADF6C
  W32(c->r[31]+0x00000010u,c->r[4]); // 800ADF70
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ADF74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADF78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADF7C
  c->lr=c->r[0]; // 800ADF80
  c->r[1]=c->r[1]+0x00000010u; // 800ADF84
  return; // 800ADF88
}

// fn_800ADF8C
void f_800ADF8C(Ctx* __restrict c) {
  trace_call(0x800ADF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADF8C
  c->r[0]=c->lr; // 800ADF90
  cmps(c,0,(int32_t)c->r[4],0); // 800ADF94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADF98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ADF9C
  c->r[30]=c->r[3]|c->r[3]; // 800ADFA0
  c->r[31]=c->r[4]|c->r[4]; // 800ADFA4
  if (crb(c,2)) { goto L_800ADFFC; } // 800ADFA8
  c->r[3]=c->r[31]|c->r[31]; // 800ADFAC
  c->lr=0x800ADFB4u; f_80244520(c); // 800ADFB0
  c->r[7]=c->r[3]|c->r[3]; // 800ADFB4
  c->r[9]=c->r[31]|c->r[31]; // 800ADFB8
  c->r[3]=0u+0x00000054u; // 800ADFBC
  c->r[4]=c->r[13]+0xFFFFA842u; // 800ADFC0
  c->r[5]=0u+0x00000000u; // 800ADFC4
  c->r[6]=0u+0x00002001u; // 800ADFC8
  c->r[8]=0u+0x00000000u; // 800ADFCC
  c->lr=0x800ADFD4u; f_80242DF0(c); // 800ADFD0
  c->r[4]=c->r[3]|c->r[3]; // 800ADFD4
  c->r[3]=0u+0x00000054u; // 800ADFD8
  c->r[5]=c->r[13]+0xFFFFA847u; // 800ADFDC
  c->r[6]=0u+0x00000000u; // 800ADFE0
  c->r[7]=0u+0x00001001u; // 800ADFE4
  c->lr=0x800ADFECu; f_80244DB0(c); // 800ADFE8
  cmps(c,0,(int32_t)c->r[3],0); // 800ADFEC
  if (crb(c,2)) { goto L_800AE01C; } // 800ADFF0
  c->lr=0x800ADFF8u; f_800ADF18(c); // 800ADFF4
  goto L_800AE01C; // 800ADFF8
L_800ADFFC:;
  c->r[3]=0u+0x00000054u; // 800ADFFC
  c->r[4]=c->r[13]+0xFFFFA84Cu; // 800AE000
  c->r[5]=0u+0x00000000u; // 800AE004
  c->r[6]=0u+0x00001001u; // 800AE008
  c->lr=0x800AE010u; f_80244D20(c); // 800AE00C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE010
  if (crb(c,2)) { goto L_800AE01C; } // 800AE014
  c->lr=0x800AE01Cu; f_800ADF18(c); // 800AE018
L_800AE01C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800AE01C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800AE020
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AE024
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE028
  c->lr=c->r[0]; // 800AE02C
  c->r[1]=c->r[1]+0x00000010u; // 800AE030
  return; // 800AE034
}

// fn_800AE038
void f_800AE038(Ctx* __restrict c) {
  trace_call(0x800AE038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE038
  c->r[0]=c->lr; // 800AE03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE040
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AE044
  c->r[31]=c->r[4]|c->r[4]; // 800AE048
  c->r[30]=c->r[3]|c->r[3]; // 800AE04C
  c->r[4]=0u+0x00000000u; // 800AE050
  c->r[3]=c->r[31]|c->r[31]; // 800AE054
  c->lr=0x800AE05Cu; f_8030BE30(c); // 800AE058
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800AE05C
  c->r[3]=c->r[31]|c->r[31]; // 800AE060
  c->r[4]=0u+0x00000000u; // 800AE064
  c->lr=0x800AE06Cu; f_8030BE30(c); // 800AE068
  W32(c->r[30]+0x00000020u,c->r[3]); // 800AE06C
  c->r[3]=c->r[31]|c->r[31]; // 800AE070
  c->r[4]=0u+0x00000000u; // 800AE074
  c->lr=0x800AE07Cu; f_8030BE30(c); // 800AE078
  W32(c->r[30]+0x00000024u,c->r[3]); // 800AE07C
  c->r[3]=c->r[31]|c->r[31]; // 800AE080
  c->r[4]=0u+0x00000000u; // 800AE084
  c->lr=0x800AE08Cu; f_8030BE30(c); // 800AE088
  W32(c->r[30]+0x00000028u,c->r[3]); // 800AE08C
  c->r[3]=c->r[31]|c->r[31]; // 800AE090
  c->r[4]=0u+0x00000000u; // 800AE094
  c->lr=0x800AE09Cu; f_8030BE30(c); // 800AE098
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800AE09C
  c->r[3]=c->r[31]|c->r[31]; // 800AE0A0
  c->r[4]=0u+0x00000000u; // 800AE0A4
  c->lr=0x800AE0ACu; f_8030BE30(c); // 800AE0A8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800AE0AC
  c->r[3]=c->r[31]|c->r[31]; // 800AE0B0
  c->r[4]=0u+0x00000000u; // 800AE0B4
  c->lr=0x800AE0BCu; f_8030BE30(c); // 800AE0B8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800AE0BC
  c->r[3]=c->r[31]|c->r[31]; // 800AE0C0
  c->r[4]=0u+0x00000000u; // 800AE0C4
  c->lr=0x800AE0CCu; f_8030BE30(c); // 800AE0C8
  W32(c->r[30]+0x00000038u,c->r[3]); // 800AE0CC
  c->r[3]=c->r[31]|c->r[31]; // 800AE0D0
  c->lr=0x800AE0D8u; f_8030C0A0(c); // 800AE0D4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800AE0D8
  c->r[3]=c->r[31]|c->r[31]; // 800AE0DC
  c->lr=0x800AE0E4u; f_8030C0A0(c); // 800AE0E0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800AE0E4
  c->r[3]=c->r[31]|c->r[31]; // 800AE0E8
  c->lr=0x800AE0F0u; f_8030C0A0(c); // 800AE0EC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800AE0F0
  c->r[3]=c->r[31]|c->r[31]; // 800AE0F4
  c->r[4]=0u+0x00000000u; // 800AE0F8
  c->lr=0x800AE100u; f_8030BE30(c); // 800AE0FC
  W32(c->r[30]+0x00000048u,c->r[3]); // 800AE100
  c->r[3]=c->r[31]|c->r[31]; // 800AE104
  c->lr=0x800AE10Cu; f_8030BD1C(c); // 800AE108
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800AE10C
  c->r[3]=0u+0x00000000u; // 800AE110
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AE114
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE118
  c->lr=c->r[0]; // 800AE11C
  c->r[1]=c->r[1]+0x00000010u; // 800AE120
  return; // 800AE124
}

// fn_800AE128
void f_800AE128(Ctx* __restrict c) {
  trace_call(0x800AE128u);
  return; // 800AE128
}

// fn_800AE12C
void f_800AE12C(Ctx* __restrict c) {
  trace_call(0x800AE12Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 800AE12C
  if (!crb(c,2)) return; // 800AE130
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800AE134
  cmps(c,0,(int32_t)c->r[0],7); // 800AE138
  if (!crb(c,0)) return; // 800AE13C
  c->r[4]=c->r[5]|c->r[5]; // 800AE140
  c->r[3]=c->r[3]+0x00000048u; // 800AE144
  f_8003A994(c); return; // 800AE148
  return; // 800AE14C
}

// fn_800AE150
void f_800AE150(Ctx* __restrict c) {
  trace_call(0x800AE150u);
  {uint32_t ea=c->r[2]+0xFFFF86F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE150
  c->r[0]=0u+0x00000000u; // 800AE154
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE158
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE15C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800AE160
  W32(c->r[3]+0x00000020u,c->r[0]); // 800AE164
  W32(c->r[3]+0x00000024u,c->r[0]); // 800AE168
  W32(c->r[3]+0x00000028u,c->r[0]); // 800AE16C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800AE170
  W32(c->r[3]+0x00000030u,c->r[0]); // 800AE174
  W32(c->r[3]+0x00000034u,c->r[0]); // 800AE178
  W32(c->r[3]+0x00000038u,c->r[0]); // 800AE17C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 800AE180
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800AE184
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800AE188
  W32(c->r[3]+0x00000048u,c->r[0]); // 800AE18C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800AE190
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800AE194
  return; // 800AE198
}

// fn_800AE19C
void f_800AE19C(Ctx* __restrict c) {
  trace_call(0x800AE19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE19C
  c->r[0]=c->lr; // 800AE1A0
  cmps(c,0,(int32_t)c->r[5],0); // 800AE1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE1A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE1AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AE1B0
  c->r[30]=c->r[4]|c->r[4]; // 800AE1B4
  if (crb(c,2)) { goto L_800AE1C4; } // 800AE1B8
  c->r[31]=c->r[5]|c->r[5]; // 800AE1BC
  goto L_800AE1C8; // 800AE1C0
L_800AE1C4:;
  c->r[31]=c->r[3]|c->r[3]; // 800AE1C4
L_800AE1C8:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800AE1C8
  c->r[4]=c->r[4]+0x0000001Cu; // 800AE1CC
  c->lr=0x800AE1D4u; f_8003F6E4(c); // 800AE1D0
  c->r[3]=c->r[31]+0x00000024u; // 800AE1D4
  c->r[4]=c->r[30]+0x00000024u; // 800AE1D8
  c->lr=0x800AE1E0u; f_8003F6E4(c); // 800AE1DC
  c->r[3]=c->r[31]+0x0000002Cu; // 800AE1E0
  c->r[4]=c->r[30]+0x0000002Cu; // 800AE1E4
  c->lr=0x800AE1ECu; f_8003F6E4(c); // 800AE1E8
  c->r[3]=c->r[31]+0x00000034u; // 800AE1EC
  c->r[4]=c->r[30]+0x00000034u; // 800AE1F0
  c->lr=0x800AE1F8u; f_8003F6E4(c); // 800AE1F4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE1F8
  c->r[3]=c->r[31]+0x00000048u; // 800AE1FC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800AE200
  c->r[4]=c->r[30]+0x00000048u; // 800AE204
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE208
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800AE20C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE210
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800AE214
  c->lr=0x800AE21Cu; f_8003AB48(c); // 800AE218
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE21C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE220
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AE224
  c->lr=c->r[0]; // 800AE228
  c->r[1]=c->r[1]+0x00000010u; // 800AE22C
  return; // 800AE230
}

// fn_800AE234
void f_800AE234(Ctx* __restrict c) {
  trace_call(0x800AE234u);
  c->r[3]=0u+0x00000000u; // 800AE234
  return; // 800AE238
}

// fn_800AE23C
void f_800AE23C(Ctx* __restrict c) {
  trace_call(0x800AE23Cu);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE23C
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE240
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 800AE244
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE248
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AE24C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AE250
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AE254
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 800AE258
  {uint32_t ea=c->r[4]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE25C
  {uint32_t ea=c->r[5]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE260
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AE264
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AE268
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AE26C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800AE270
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE274
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE278
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AE27C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AE280
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AE284
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800AE288
  return; // 800AE28C
}

// fn_800AE290
void f_800AE290(Ctx* __restrict c) {
  trace_call(0x800AE290u);
  c->r[3]=0u+0x00000054u; // 800AE290
  return; // 800AE294
}

// fn_800AE298
void f_800AE298(Ctx* __restrict c) {
  trace_call(0x800AE298u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE298
  c->r[0]=c->lr; // 800AE29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE2A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE2A4
  c->r[31]=c->r[3]|c->r[3]; // 800AE2A8
  c->lr=0x800AE2B0u; f_800ADF18(c); // 800AE2AC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AE2B0
  c->r[3]=0u+0x80420000u; // 800AE2B4
  c->r[3]=c->r[3]+0xFFFFB454u; // 800AE2B8
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AE2BC
  c->r[0]=c->r[0]|0x80000000u; // 800AE2C0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800AE2C4
  c->r[3]=c->r[31]|c->r[31]; // 800AE2C8
  c->r[12]=R32(c->r[31]+0x00000018u); // 800AE2CC
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AE2D0
  c->ctr=c->r[12]; // 800AE2D4
  if (true) { c->lr=0x800AE2DCu; dispatch(c,c->ctr); } // 800AE2D8
  c->r[3]=c->r[31]|c->r[31]; // 800AE2DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE2E4
  c->lr=c->r[0]; // 800AE2E8
  c->r[1]=c->r[1]+0x00000010u; // 800AE2EC
  return; // 800AE2F0
}

// fn_800AE2F4
void f_800AE2F4(Ctx* __restrict c) {
  trace_call(0x800AE2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE2F4
  c->r[0]=c->lr; // 800AE2F8
  cmps(c,0,(int32_t)c->r[3],0); // 800AE2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE300
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AE304
  c->r[30]=c->r[3]|c->r[3]; // 800AE308
  c->r[31]=c->r[4]|c->r[4]; // 800AE30C
  if (crb(c,2)) { goto L_800AE32C; } // 800AE310
  c->r[4]=0u+0x00000000u; // 800AE314
  c->lr=0x800AE31Cu; f_802B1180(c); // 800AE318
  cmps(c,0,(int32_t)c->r[31],0); // 800AE31C
  if (!crb(c,1)) { goto L_800AE32C; } // 800AE320
  c->r[3]=c->r[30]|c->r[30]; // 800AE324
  c->lr=0x800AE32Cu; f_80244DC0(c); // 800AE328
L_800AE32C:;
  c->r[3]=c->r[30]|c->r[30]; // 800AE32C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AE330
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE334
  c->lr=c->r[0]; // 800AE338
  c->r[1]=c->r[1]+0x00000010u; // 800AE33C
  return; // 800AE340
}

// fn_800AE344
void f_800AE344(Ctx* __restrict c) {
  trace_call(0x800AE344u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE344
  c->r[0]=c->lr; // 800AE348
  c->r[3]=0u+0x00000054u; // 800AE34C
  c->r[4]=c->r[13]+0xFFFFA851u; // 800AE350
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE354
  c->r[5]=0u+0x00000000u; // 800AE358
  c->r[6]=0u+0x00001001u; // 800AE35C
  c->lr=0x800AE364u; f_80244D20(c); // 800AE360
  cmps(c,0,(int32_t)c->r[3],0); // 800AE364
  if (crb(c,2)) { goto L_800AE370; } // 800AE368
  c->lr=0x800AE370u; f_800AE298(c); // 800AE36C
L_800AE370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE370
  c->lr=c->r[0]; // 800AE374
  c->r[1]=c->r[1]+0x00000010u; // 800AE378
  return; // 800AE37C
}

// fn_800AE380
void f_800AE380(Ctx* __restrict c) {
  trace_call(0x800AE380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE380
  c->r[0]=c->lr; // 800AE384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE38C
  c->r[31]=c->r[3]|c->r[3]; // 800AE390
  c->lr=0x800AE398u; f_80244520(c); // 800AE394
  c->r[7]=c->r[3]|c->r[3]; // 800AE398
  c->r[9]=c->r[31]|c->r[31]; // 800AE39C
  c->r[3]=0u+0x00000054u; // 800AE3A0
  c->r[4]=c->r[13]+0xFFFFA856u; // 800AE3A4
  c->r[5]=0u+0x00000000u; // 800AE3A8
  c->r[6]=0u+0x00002001u; // 800AE3AC
  c->r[8]=0u+0x00000000u; // 800AE3B0
  c->lr=0x800AE3B8u; f_80242DF0(c); // 800AE3B4
  c->r[4]=c->r[3]|c->r[3]; // 800AE3B8
  c->r[3]=0u+0x00000054u; // 800AE3BC
  c->r[5]=c->r[13]+0xFFFFA85Bu; // 800AE3C0
  c->r[6]=0u+0x00000000u; // 800AE3C4
  c->r[7]=0u+0x00001001u; // 800AE3C8
  c->lr=0x800AE3D0u; f_80244DB0(c); // 800AE3CC
  cmps(c,0,(int32_t)c->r[3],0); // 800AE3D0
  if (crb(c,2)) { goto L_800AE3DC; } // 800AE3D4
  c->lr=0x800AE3DCu; f_800AE298(c); // 800AE3D8
L_800AE3DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE3DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE3E0
  c->lr=c->r[0]; // 800AE3E4
  c->r[1]=c->r[1]+0x00000010u; // 800AE3E8
  return; // 800AE3EC
}

// fn_800AE3F0
void f_800AE3F0(Ctx* __restrict c) {
  trace_call(0x800AE3F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE3F0
  c->r[0]=c->lr; // 800AE3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE3FC
  c->r[31]=c->r[3]|c->r[3]; // 800AE400
  c->lr=0x800AE408u; f_802B1168(c); // 800AE404
  c->r[8]=0u+0x80420000u; // 800AE408
  c->r[6]=0u+0x80410000u; // 800AE40C
  c->r[7]=0u+0x00000000u; // 800AE410
  c->r[5]=0u+0x21440000u; // 800AE414
  c->r[4]=0u+0x0C680000u; // 800AE418
  c->r[3]=0u+0x25A50000u; // 800AE41C
  c->r[0]=c->r[3]+0xFFFFFEB2u; // 800AE420
  c->r[8]=c->r[8]+0xFFFFB418u; // 800AE424
  c->r[6]=c->r[6]+0xFFFFC96Du; // 800AE428
  c->r[5]=c->r[5]+0x00003472u; // 800AE42C
  c->r[4]=c->r[4]+0x00001F6Fu; // 800AE430
  W32(c->r[31]+0x00000018u,c->r[8]); // 800AE434
  c->r[3]=c->r[31]|c->r[31]; // 800AE438
  W32(c->r[31]+0x000000F4u,c->r[7]); // 800AE43C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800AE440
  W32(c->r[31]+0x00000008u,c->r[7]); // 800AE444
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800AE448
  W32(c->r[31]+0x00000010u,c->r[4]); // 800AE44C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AE450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE454
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE458
  c->lr=c->r[0]; // 800AE45C
  c->r[1]=c->r[1]+0x00000010u; // 800AE460
  return; // 800AE464
}

// fn_800AE468
void f_800AE468(Ctx* __restrict c) {
  trace_call(0x800AE468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE468
  c->r[0]=c->lr; // 800AE46C
  cmps(c,0,(int32_t)c->r[4],0); // 800AE470
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE474
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AE478
  c->r[30]=c->r[3]|c->r[3]; // 800AE47C
  c->r[31]=c->r[4]|c->r[4]; // 800AE480
  if (crb(c,2)) { goto L_800AE4D8; } // 800AE484
  c->r[3]=c->r[31]|c->r[31]; // 800AE488
  c->lr=0x800AE490u; f_80244520(c); // 800AE48C
  c->r[7]=c->r[3]|c->r[3]; // 800AE490
  c->r[9]=c->r[31]|c->r[31]; // 800AE494
  c->r[3]=0u+0x000000F8u; // 800AE498
  c->r[4]=c->r[13]+0xFFFFA860u; // 800AE49C
  c->r[5]=0u+0x00000000u; // 800AE4A0
  c->r[6]=0u+0x00002001u; // 800AE4A4
  c->r[8]=0u+0x00000000u; // 800AE4A8
  c->lr=0x800AE4B0u; f_80242DF0(c); // 800AE4AC
  c->r[4]=c->r[3]|c->r[3]; // 800AE4B0
  c->r[3]=0u+0x000000F8u; // 800AE4B4
  c->r[5]=c->r[13]+0xFFFFA865u; // 800AE4B8
  c->r[6]=0u+0x00000000u; // 800AE4BC
  c->r[7]=0u+0x00001001u; // 800AE4C0
  c->lr=0x800AE4C8u; f_80244DB0(c); // 800AE4C4
  cmps(c,0,(int32_t)c->r[3],0); // 800AE4C8
  if (crb(c,2)) { goto L_800AE4F8; } // 800AE4CC
  c->lr=0x800AE4D4u; f_800AE3F0(c); // 800AE4D0
  goto L_800AE4F8; // 800AE4D4
L_800AE4D8:;
  c->r[3]=0u+0x000000F8u; // 800AE4D8
  c->r[4]=c->r[13]+0xFFFFA86Au; // 800AE4DC
  c->r[5]=0u+0x00000000u; // 800AE4E0
  c->r[6]=0u+0x00001001u; // 800AE4E4
  c->lr=0x800AE4ECu; f_80244D20(c); // 800AE4E8
  cmps(c,0,(int32_t)c->r[3],0); // 800AE4EC
  if (crb(c,2)) { goto L_800AE4F8; } // 800AE4F0
  c->lr=0x800AE4F8u; f_800AE3F0(c); // 800AE4F4
L_800AE4F8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800AE4F8
  W16(c->r[3]+0x00000014u,c->r[0]); // 800AE4FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AE500
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE504
  c->lr=c->r[0]; // 800AE508
  c->r[1]=c->r[1]+0x00000010u; // 800AE50C
  return; // 800AE510
}

// fn_800AE514
void f_800AE514(Ctx* __restrict c) {
  trace_call(0x800AE514u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE514
  c->r[0]=c->lr; // 800AE518
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AE51C
  c->r[11]=c->r[1]+0x00000020u; // 800AE520
  c->lr=0x800AE528u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AE524
  c->r[30]=c->r[4]|c->r[4]; // 800AE528
  c->r[29]=c->r[3]|c->r[3]; // 800AE52C
  c->r[3]=c->r[30]|c->r[30]; // 800AE530
  c->r[4]=0u+0x00000000u; // 800AE534
  c->lr=0x800AE53Cu; f_8030BE30(c); // 800AE538
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 800AE53C
  c->r[31]=0u+0x00000000u; // 800AE540
  c->r[3]=c->r[30]|c->r[30]; // 800AE544
  W32(c->r[29]+0x00000020u,c->r[31]); // 800AE548
  c->lr=0x800AE550u; f_8030BD1C(c); // 800AE54C
  W32(c->r[29]+0x00000024u,c->r[3]); // 800AE550
  c->r[3]=c->r[30]|c->r[30]; // 800AE554
  c->r[4]=0u+0x00000000u; // 800AE558
  c->lr=0x800AE560u; f_8030BE30(c); // 800AE55C
  W32(c->r[29]+0x00000028u,c->r[3]); // 800AE560
  c->r[3]=c->r[30]|c->r[30]; // 800AE564
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 800AE568
  c->lr=0x800AE570u; f_8030BD1C(c); // 800AE56C
  W32(c->r[29]+0x00000030u,c->r[3]); // 800AE570
  c->r[3]=c->r[30]|c->r[30]; // 800AE574
  c->lr=0x800AE57Cu; f_8030BD1C(c); // 800AE578
  W32(c->r[29]+0x00000034u,c->r[3]); // 800AE57C
  c->r[3]=c->r[30]|c->r[30]; // 800AE580
  c->lr=0x800AE588u; f_8030BD1C(c); // 800AE584
  W8(c->r[29]+0x00000038u,c->r[3]); // 800AE588
  c->r[3]=c->r[30]|c->r[30]; // 800AE58C
  c->lr=0x800AE594u; f_8030BD1C(c); // 800AE590
  W8(c->r[29]+0x00000039u,c->r[3]); // 800AE594
  c->r[3]=c->r[30]|c->r[30]; // 800AE598
  c->lr=0x800AE5A0u; f_8030C0A0(c); // 800AE59C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[1]);} // 800AE5A0
  c->r[3]=c->r[30]|c->r[30]; // 800AE5A4
  c->lr=0x800AE5ACu; f_8030BD1C(c); // 800AE5A8
  W32(c->r[29]+0x00000040u,c->r[3]); // 800AE5AC
  c->r[3]=c->r[30]|c->r[30]; // 800AE5B0
  c->lr=0x800AE5B8u; f_8030BD1C(c); // 800AE5B4
  W8(c->r[29]+0x00000044u,c->r[3]); // 800AE5B8
  c->r[3]=c->r[30]|c->r[30]; // 800AE5BC
  c->lr=0x800AE5C4u; f_8030BD1C(c); // 800AE5C0
  W32(c->r[29]+0x00000048u,c->r[3]); // 800AE5C4
  c->r[3]=c->r[30]|c->r[30]; // 800AE5C8
  c->lr=0x800AE5D0u; f_8030BD1C(c); // 800AE5CC
  W32(c->r[29]+0x0000004Cu,c->r[3]); // 800AE5D0
  c->r[3]=c->r[30]|c->r[30]; // 800AE5D4
  c->lr=0x800AE5DCu; f_8030BD1C(c); // 800AE5D8
  W8(c->r[29]+0x00000050u,c->r[3]); // 800AE5DC
  c->r[3]=c->r[30]|c->r[30]; // 800AE5E0
  c->lr=0x800AE5E8u; f_8030BD1C(c); // 800AE5E4
  W8(c->r[29]+0x00000051u,c->r[3]); // 800AE5E8
  c->r[3]=c->r[30]|c->r[30]; // 800AE5EC
  c->lr=0x800AE5F4u; f_8030BD1C(c); // 800AE5F0
  W8(c->r[29]+0x00000052u,c->r[3]); // 800AE5F4
  c->r[3]=c->r[30]|c->r[30]; // 800AE5F8
  c->lr=0x800AE600u; f_8030BD1C(c); // 800AE5FC
  W8(c->r[29]+0x00000053u,c->r[3]); // 800AE600
  c->r[3]=c->r[30]|c->r[30]; // 800AE604
  c->lr=0x800AE60Cu; f_8030BD1C(c); // 800AE608
  W8(c->r[29]+0x00000054u,c->r[3]); // 800AE60C
  c->r[3]=c->r[30]|c->r[30]; // 800AE610
  c->lr=0x800AE618u; f_8030BD1C(c); // 800AE614
  W8(c->r[29]+0x00000055u,c->r[3]); // 800AE618
  c->r[3]=c->r[30]|c->r[30]; // 800AE61C
  c->lr=0x800AE624u; f_8030BD1C(c); // 800AE620
  W8(c->r[29]+0x00000056u,c->r[3]); // 800AE624
  c->r[3]=c->r[30]|c->r[30]; // 800AE628
  c->lr=0x800AE630u; f_8030BD1C(c); // 800AE62C
  W8(c->r[29]+0x00000057u,c->r[3]); // 800AE630
  c->r[3]=c->r[30]|c->r[30]; // 800AE634
  c->lr=0x800AE63Cu; f_8030BD1C(c); // 800AE638
  W32(c->r[29]+0x00000058u,c->r[3]); // 800AE63C
  c->r[3]=c->r[30]|c->r[30]; // 800AE640
  c->lr=0x800AE648u; f_8030BD1C(c); // 800AE644
  W8(c->r[29]+0x0000005Cu,c->r[3]); // 800AE648
  c->r[3]=c->r[30]|c->r[30]; // 800AE64C
  c->lr=0x800AE654u; f_8030BD1C(c); // 800AE650
  W32(c->r[29]+0x00000060u,c->r[3]); // 800AE654
  c->r[3]=c->r[30]|c->r[30]; // 800AE658
  c->lr=0x800AE660u; f_8030BD1C(c); // 800AE65C
  W8(c->r[29]+0x00000064u,c->r[3]); // 800AE660
  c->r[3]=c->r[30]|c->r[30]; // 800AE664
  c->lr=0x800AE66Cu; f_8030C0A0(c); // 800AE668
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[1]);} // 800AE66C
  c->r[3]=c->r[30]|c->r[30]; // 800AE670
  c->lr=0x800AE678u; f_8030C0A0(c); // 800AE674
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[1]);} // 800AE678
  c->r[3]=c->r[30]|c->r[30]; // 800AE67C
  c->lr=0x800AE684u; f_8030C0A0(c); // 800AE680
  {uint32_t ea=c->r[29]+0x00000070u; WF32(ea,c->f[1]);} // 800AE684
  c->r[3]=c->r[30]|c->r[30]; // 800AE688
  c->lr=0x800AE690u; f_8030C0A0(c); // 800AE68C
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[1]);} // 800AE690
  c->r[3]=c->r[30]|c->r[30]; // 800AE694
  c->lr=0x800AE69Cu; f_8030C0A0(c); // 800AE698
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[1]);} // 800AE69C
  c->r[3]=c->r[30]|c->r[30]; // 800AE6A0
  c->lr=0x800AE6A8u; f_8030BD1C(c); // 800AE6A4
  W32(c->r[29]+0x0000007Cu,c->r[3]); // 800AE6A8
  c->r[3]=c->r[30]|c->r[30]; // 800AE6AC
  c->lr=0x800AE6B4u; f_8030C0A0(c); // 800AE6B0
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[1]);} // 800AE6B4
  c->r[3]=c->r[30]|c->r[30]; // 800AE6B8
  c->lr=0x800AE6C0u; f_8030C0A0(c); // 800AE6BC
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800AE6C0
  c->r[3]=c->r[30]|c->r[30]; // 800AE6C4
  c->lr=0x800AE6CCu; f_8030C0A0(c); // 800AE6C8
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800AE6CC
  c->r[3]=c->r[30]|c->r[30]; // 800AE6D0
  c->lr=0x800AE6D8u; f_8030C0A0(c); // 800AE6D4
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[1]);} // 800AE6D8
  c->r[3]=c->r[30]|c->r[30]; // 800AE6DC
  c->lr=0x800AE6E4u; f_8030BD1C(c); // 800AE6E0
  W8(c->r[29]+0x00000090u,c->r[3]); // 800AE6E4
  c->r[3]=c->r[30]|c->r[30]; // 800AE6E8
  c->lr=0x800AE6F0u; f_8030C0A0(c); // 800AE6EC
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[1]);} // 800AE6F0
  c->r[3]=c->r[30]|c->r[30]; // 800AE6F4
  c->lr=0x800AE6FCu; f_8030C0A0(c); // 800AE6F8
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[1]);} // 800AE6FC
  c->r[3]=c->r[30]|c->r[30]; // 800AE700
  c->lr=0x800AE708u; f_8030C0A0(c); // 800AE704
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[1]);} // 800AE708
  c->r[3]=c->r[30]|c->r[30]; // 800AE70C
  c->lr=0x800AE714u; f_8030BD1C(c); // 800AE710
  W8(c->r[29]+0x000000A0u,c->r[3]); // 800AE714
  c->r[3]=c->r[30]|c->r[30]; // 800AE718
  c->lr=0x800AE720u; f_8030C0A0(c); // 800AE71C
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[1]);} // 800AE720
  c->r[3]=c->r[30]|c->r[30]; // 800AE724
  c->lr=0x800AE72Cu; f_8030C0A0(c); // 800AE728
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[1]);} // 800AE72C
  c->r[3]=c->r[30]|c->r[30]; // 800AE730
  c->lr=0x800AE738u; f_8030BD1C(c); // 800AE734
  W8(c->r[29]+0x000000ACu,c->r[3]); // 800AE738
  c->r[3]=c->r[30]|c->r[30]; // 800AE73C
  c->lr=0x800AE744u; f_8030C0A0(c); // 800AE740
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800AE744
  c->r[3]=c->r[30]|c->r[30]; // 800AE748
  c->lr=0x800AE750u; f_8030C0A0(c); // 800AE74C
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800AE750
  c->r[3]=c->r[30]|c->r[30]; // 800AE754
  c->lr=0x800AE75Cu; f_8030C0A0(c); // 800AE758
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE75C
  c->r[3]=c->r[30]|c->r[30]; // 800AE760
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 800AE764
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[0]);} // 800AE768
  c->lr=0x800AE770u; f_8030C0A0(c); // 800AE76C
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800AE770
  c->r[3]=c->r[30]|c->r[30]; // 800AE774
  c->lr=0x800AE77Cu; f_8030C0A0(c); // 800AE778
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 800AE77C
  c->r[3]=c->r[30]|c->r[30]; // 800AE780
  c->lr=0x800AE788u; f_8030C0A0(c); // 800AE784
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800AE788
  c->r[3]=c->r[30]|c->r[30]; // 800AE78C
  c->lr=0x800AE794u; f_8030C0A0(c); // 800AE790
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 800AE794
  c->r[3]=c->r[30]|c->r[30]; // 800AE798
  c->lr=0x800AE7A0u; f_8030C0A0(c); // 800AE79C
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 800AE7A0
  c->r[3]=c->r[30]|c->r[30]; // 800AE7A4
  c->lr=0x800AE7ACu; f_8030C0A0(c); // 800AE7A8
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 800AE7AC
  c->r[3]=c->r[30]|c->r[30]; // 800AE7B0
  c->lr=0x800AE7B8u; f_8030C0A0(c); // 800AE7B4
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[1]);} // 800AE7B8
  c->r[3]=c->r[30]|c->r[30]; // 800AE7BC
  c->lr=0x800AE7C4u; f_8030C0A0(c); // 800AE7C0
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[1]);} // 800AE7C4
  c->r[3]=c->r[30]|c->r[30]; // 800AE7C8
  c->lr=0x800AE7D0u; f_8030C0A0(c); // 800AE7CC
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[1]);} // 800AE7D0
  c->r[3]=c->r[30]|c->r[30]; // 800AE7D4
  c->lr=0x800AE7DCu; f_8030BD1C(c); // 800AE7D8
  W8(c->r[29]+0x000000E4u,c->r[3]); // 800AE7DC
  c->r[3]=c->r[30]|c->r[30]; // 800AE7E0
  c->lr=0x800AE7E8u; f_8030C0A0(c); // 800AE7E4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800AE7E8
  c->r[3]=c->r[30]|c->r[30]; // 800AE7EC
  c->lr=0x800AE7F4u; f_8030C0A0(c); // 800AE7F0
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 800AE7F4
  c->r[3]=c->r[30]|c->r[30]; // 800AE7F8
  c->lr=0x800AE800u; f_8030BD1C(c); // 800AE7FC
  W8(c->r[29]+0x000000F0u,c->r[3]); // 800AE800
  c->r[11]=c->r[1]+0x00000020u; // 800AE804
  c->r[3]=0u+0x00000000u; // 800AE808
  c->lr=0x800AE810u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AE80C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AE810
  c->lr=c->r[0]; // 800AE814
  c->r[1]=c->r[1]+0x00000020u; // 800AE818
  return; // 800AE81C
}

// fn_800AE820
void f_800AE820(Ctx* __restrict c) {
  trace_call(0x800AE820u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE820
  c->r[0]=c->lr; // 800AE824
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AE828
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AE82C
  c->r[27]=c->r[3]|c->r[3]; // 800AE830
  c->r[28]=c->r[4]|c->r[4]; // 800AE834
  c->r[29]=c->r[5]|c->r[5]; // 800AE838
  c->r[30]=c->r[6]|c->r[6]; // 800AE83C
  c->r[7]=R32(c->r[3]+0x000000F4u); // 800AE840
  cmps(c,0,(int32_t)c->r[7],0); // 800AE844
  if (!crb(c,0)) { goto L_800AE858; } // 800AE848
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800AE84C
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800AE850
  goto L_800AE868; // 800AE854
L_800AE858:;
  c->r[0]=c->r[7]+0x00000001u; // 800AE858
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800AE85C
  cmps(c,0,(int32_t)c->r[0],1); // 800AE860
  if (crb(c,1)) { goto L_800AE9D4; } // 800AE864
L_800AE868:;
  c->r[3]=c->r[27]|c->r[27]; // 800AE868
  c->r[4]=c->r[28]|c->r[28]; // 800AE86C
  c->r[5]=c->r[29]|c->r[29]; // 800AE870
  c->r[6]=c->r[30]|c->r[30]; // 800AE874
  c->lr=0x800AE87Cu; f_802B11C0(c); // 800AE878
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 800AE87C
  cmps(c,0,(int32_t)c->r[4],0); // 800AE880
  if (crb(c,2)) { goto L_800AE928; } // 800AE884
  c->r[0]=0u+0x00000001u; // 800AE888
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AE88C
  c->r[6]=c->r[28]|c->r[28]; // 800AE890
  c->r[7]=c->r[29]|c->r[29]; // 800AE894
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800AE898
  c->r[8]=c->r[30]|c->r[30]; // 800AE89C
  c->r[9]=R32(c->r[27]+0x00000024u); // 800AE8A0
  c->r[5]=0u+0x00000000u; // 800AE8A4
  c->r[10]=0u+0x00000001u; // 800AE8A8
  c->lr=0x800AE8B0u; f_80281A84(c); // 800AE8AC
  cmps(c,0,(int32_t)c->r[3],0); // 800AE8B0
  W32(c->r[27]+0x00000020u,c->r[3]); // 800AE8B4
  if (crb(c,2)) { goto L_800AE8C4; } // 800AE8B8
  c->lr=0x800AE8C0u; f_80295B6C(c); // 800AE8BC
  goto L_800AE928; // 800AE8C0
L_800AE8C4:;
  c->r[3]=R32(c->r[27]+0x00000024u); // 800AE8C4
  c->r[4]=c->r[30]|c->r[30]; // 800AE8C8
  c->r[5]=c->r[29]|c->r[29]; // 800AE8CC
  c->lr=0x800AE8D4u; f_802C0F98(c); // 800AE8D0
  c->r[31]=c->r[3]|c->r[3]; // 800AE8D4
  c->r[3]=0u+0x00000044u; // 800AE8D8
  c->r[4]=c->r[13]+0xFFFFA86Fu; // 800AE8DC
  c->r[5]=0u+0x00000000u; // 800AE8E0
  c->r[6]=0u+0x00001001u; // 800AE8E4
  c->lr=0x800AE8ECu; f_80244D20(c); // 800AE8E8
  cmps(c,0,(int32_t)c->r[3],0); // 800AE8EC
  if (crb(c,2)) { goto L_800AE904; } // 800AE8F0
  c->r[5]=R32(c->r[27]+0x0000001Cu); // 800AE8F4
  c->r[4]=c->r[31]|c->r[31]; // 800AE8F8
  c->r[6]=0u+0x00000000u; // 800AE8FC
  c->lr=0x800AE904u; f_8029316C(c); // 800AE900
L_800AE904:;
  W32(c->r[27]+0x00000020u,c->r[3]); // 800AE904
  c->r[4]=c->r[28]|c->r[28]; // 800AE908
  c->r[7]=R32(c->r[27]+0x00000024u); // 800AE90C
  c->r[5]=c->r[29]|c->r[29]; // 800AE910
  c->r[6]=c->r[30]|c->r[30]; // 800AE914
  c->r[8]=0u+0x00000001u; // 800AE918
  c->r[9]=0u+0x00000000u; // 800AE91C
  c->lr=0x800AE924u; f_8027FFF4(c); // 800AE920
  W32(c->r[27]+0x00000020u,c->r[3]); // 800AE924
L_800AE928:;
  c->r[4]=R32(c->r[27]+0x00000028u); // 800AE928
  cmps(c,0,(int32_t)c->r[4],0); // 800AE92C
  if (crb(c,2)) { goto L_800AE9D4; } // 800AE930
  c->r[0]=0u+0x00000001u; // 800AE934
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AE938
  c->r[6]=c->r[28]|c->r[28]; // 800AE93C
  c->r[7]=c->r[29]|c->r[29]; // 800AE940
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800AE944
  c->r[8]=c->r[30]|c->r[30]; // 800AE948
  c->r[9]=R32(c->r[27]+0x00000030u); // 800AE94C
  c->r[5]=0u+0x00000010u; // 800AE950
  c->r[10]=0u+0x00000001u; // 800AE954
  c->lr=0x800AE95Cu; f_80281A84(c); // 800AE958
  cmps(c,0,(int32_t)c->r[3],0); // 800AE95C
  W32(c->r[27]+0x0000002Cu,c->r[3]); // 800AE960
  if (crb(c,2)) { goto L_800AE970; } // 800AE964
  c->lr=0x800AE96Cu; f_80295B6C(c); // 800AE968
  goto L_800AE9D4; // 800AE96C
L_800AE970:;
  c->r[3]=R32(c->r[27]+0x00000030u); // 800AE970
  c->r[4]=c->r[30]|c->r[30]; // 800AE974
  c->r[5]=c->r[29]|c->r[29]; // 800AE978
  c->lr=0x800AE980u; f_802C0F98(c); // 800AE97C
  c->r[31]=c->r[3]|c->r[3]; // 800AE980
  c->r[3]=0u+0x00000044u; // 800AE984
  c->r[4]=c->r[13]+0xFFFFA874u; // 800AE988
  c->r[5]=0u+0x00000000u; // 800AE98C
  c->r[6]=0u+0x00001001u; // 800AE990
  c->lr=0x800AE998u; f_80244D20(c); // 800AE994
  cmps(c,0,(int32_t)c->r[3],0); // 800AE998
  if (crb(c,2)) { goto L_800AE9B0; } // 800AE99C
  c->r[5]=R32(c->r[27]+0x00000028u); // 800AE9A0
  c->r[4]=c->r[31]|c->r[31]; // 800AE9A4
  c->r[6]=0u+0x00000010u; // 800AE9A8
  c->lr=0x800AE9B0u; f_8029316C(c); // 800AE9AC
L_800AE9B0:;
  W32(c->r[27]+0x0000002Cu,c->r[3]); // 800AE9B0
  c->r[4]=c->r[28]|c->r[28]; // 800AE9B4
  c->r[7]=R32(c->r[27]+0x00000030u); // 800AE9B8
  c->r[5]=c->r[29]|c->r[29]; // 800AE9BC
  c->r[6]=c->r[30]|c->r[30]; // 800AE9C0
  c->r[8]=0u+0x00000001u; // 800AE9C4
  c->r[9]=0u+0x00000000u; // 800AE9C8
  c->lr=0x800AE9D0u; f_8027FFF4(c); // 800AE9CC
  W32(c->r[27]+0x0000002Cu,c->r[3]); // 800AE9D0
L_800AE9D4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AE9D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AE9D8
  c->lr=c->r[0]; // 800AE9DC
  c->r[1]=c->r[1]+0x00000030u; // 800AE9E0
  return; // 800AE9E4
}

// fn_800AE9E8
void f_800AE9E8(Ctx* __restrict c) {
  trace_call(0x800AE9E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE9E8
  c->r[0]=c->lr; // 800AE9EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE9F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE9F4
  c->r[31]=c->r[3]|c->r[3]; // 800AE9F8
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800AE9FC
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800AEA00
  W32(c->r[3]+0x000000F4u,c->r[0]); // 800AEA04
  if (!crb(c,2)) { goto L_800AEA40; } // 800AEA08
  c->lr=0x800AEA10u; f_802B11D0(c); // 800AEA0C
  c->r[3]=R32(c->r[31]+0x00000020u); // 800AEA10
  cmps(c,0,(int32_t)c->r[3],0); // 800AEA14
  if (crb(c,2)) { goto L_800AEA28; } // 800AEA18
  c->lr=0x800AEA20u; f_80295B7C(c); // 800AEA1C
  c->r[0]=0u+0x00000000u; // 800AEA20
  W32(c->r[31]+0x00000020u,c->r[0]); // 800AEA24
L_800AEA28:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800AEA28
  cmps(c,0,(int32_t)c->r[3],0); // 800AEA2C
  if (crb(c,2)) { goto L_800AEA40; } // 800AEA30
  c->lr=0x800AEA38u; f_80295B7C(c); // 800AEA34
  c->r[0]=0u+0x00000000u; // 800AEA38
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800AEA3C
L_800AEA40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AEA40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AEA44
  c->lr=c->r[0]; // 800AEA48
  c->r[1]=c->r[1]+0x00000010u; // 800AEA4C
  return; // 800AEA50
}

// fn_800AEA54
void f_800AEA54(Ctx* __restrict c) {
  trace_call(0x800AEA54u);
  return; // 800AEA54
}

// fn_800AEA58
void f_800AEA58(Ctx* __restrict c) {
  trace_call(0x800AEA58u);
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEA58
  c->r[7]=0u+0x00000000u; // 800AEA5C
  c->r[4]=0u+0x0000007Fu; // 800AEA60
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 800AEA64
  c->r[5]=0u+0x00000001u; // 800AEA68
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[10]=c->ps1[10]=RF32(ea);} // 800AEA6C
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AEA70
  c->r[6]=0u+0x00000004u; // 800AEA74
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[13]=c->ps1[13]=RF32(ea);} // 800AEA78
  c->r[0]=0u+0x00000032u; // 800AEA7C
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[12]=c->ps1[12]=RF32(ea);} // 800AEA80
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[9]=c->ps1[9]=RF32(ea);} // 800AEA84
  {uint32_t ea=c->r[2]+0xFFFF873Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 800AEA88
  {uint32_t ea=c->r[2]+0xFFFF86B8u; c->f[7]=c->ps1[7]=RF32(ea);} // 800AEA8C
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 800AEA90
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AEA94
  {uint32_t ea=c->r[2]+0xFFFF8744u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEA98
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEA9C
  {uint32_t ea=c->r[2]+0xFFFF8710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEAA0
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800AEAA4
  W32(c->r[3]+0x00000020u,c->r[7]); // 800AEAA8
  W32(c->r[3]+0x00000024u,c->r[6]); // 800AEAAC
  W32(c->r[3]+0x00000028u,c->r[7]); // 800AEAB0
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 800AEAB4
  W32(c->r[3]+0x00000030u,c->r[6]); // 800AEAB8
  W32(c->r[3]+0x00000034u,c->r[5]); // 800AEABC
  W8(c->r[3]+0x00000038u,c->r[7]); // 800AEAC0
  W8(c->r[3]+0x00000039u,c->r[7]); // 800AEAC4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[13]);} // 800AEAC8
  W32(c->r[3]+0x00000040u,c->r[5]); // 800AEACC
  W8(c->r[3]+0x00000044u,c->r[7]); // 800AEAD0
  W32(c->r[3]+0x00000048u,c->r[7]); // 800AEAD4
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 800AEAD8
  W8(c->r[3]+0x00000050u,c->r[4]); // 800AEADC
  W8(c->r[3]+0x00000051u,c->r[4]); // 800AEAE0
  W8(c->r[3]+0x00000052u,c->r[4]); // 800AEAE4
  W8(c->r[3]+0x00000053u,c->r[4]); // 800AEAE8
  W8(c->r[3]+0x00000054u,c->r[4]); // 800AEAEC
  W8(c->r[3]+0x00000055u,c->r[4]); // 800AEAF0
  W8(c->r[3]+0x00000056u,c->r[4]); // 800AEAF4
  W8(c->r[3]+0x00000057u,c->r[4]); // 800AEAF8
  W32(c->r[3]+0x00000058u,c->r[0]); // 800AEAFC
  W8(c->r[3]+0x0000005Cu,c->r[7]); // 800AEB00
  W32(c->r[3]+0x00000060u,c->r[7]); // 800AEB04
  W8(c->r[3]+0x00000064u,c->r[7]); // 800AEB08
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[12]);} // 800AEB0C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[11]);} // 800AEB10
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[10]);} // 800AEB14
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[10]);} // 800AEB18
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[9]);} // 800AEB1C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 800AEB20
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[8]);} // 800AEB24
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[7]);} // 800AEB28
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[6]);} // 800AEB2C
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[5]);} // 800AEB30
  W8(c->r[3]+0x00000090u,c->r[7]); // 800AEB34
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[4]);} // 800AEB38
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[3]);} // 800AEB3C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[3]);} // 800AEB40
  W8(c->r[3]+0x000000A0u,c->r[7]); // 800AEB44
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[3]);} // 800AEB48
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[3]);} // 800AEB4C
  W8(c->r[3]+0x000000ACu,c->r[5]); // 800AEB50
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[3]);} // 800AEB54
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[2]);} // 800AEB58
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[3]);} // 800AEB5C
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[11]);} // 800AEB60
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 800AEB64
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[5]);} // 800AEB68
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 800AEB6C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[3]);} // 800AEB70
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[3]);} // 800AEB74
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[3]);} // 800AEB78
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[11]);} // 800AEB7C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[3]);} // 800AEB80
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[11]);} // 800AEB84
  W8(c->r[3]+0x000000E4u,c->r[7]); // 800AEB88
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[11]);} // 800AEB8C
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[3]);} // 800AEB90
  W8(c->r[3]+0x000000F0u,c->r[7]); // 800AEB94
  return; // 800AEB98
}

// fn_800AEB9C
void f_800AEB9C(Ctx* __restrict c) {
  trace_call(0x800AEB9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEB9C
  c->r[0]=c->lr; // 800AEBA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AEBA4
  c->r[11]=c->r[1]+0x00000020u; // 800AEBA8
  c->lr=0x800AEBB0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AEBAC
  cmps(c,0,(int32_t)c->r[5],0); // 800AEBB0
  c->r[28]=c->r[3]|c->r[3]; // 800AEBB4
  c->r[29]=c->r[4]|c->r[4]; // 800AEBB8
  c->r[30]=c->r[7]|c->r[7]; // 800AEBBC
  if (crb(c,2)) { goto L_800AEBCC; } // 800AEBC0
  c->r[31]=c->r[5]|c->r[5]; // 800AEBC4
  goto L_800AEBD0; // 800AEBC8
L_800AEBCC:;
  c->r[31]=c->r[28]|c->r[28]; // 800AEBCC
L_800AEBD0:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800AEBD0
  c->r[4]=c->r[4]+0x0000001Cu; // 800AEBD4
  c->lr=0x800AEBDCu; f_8003BDD0(c); // 800AEBD8
  c->r[3]=c->r[31]+0x00000028u; // 800AEBDC
  c->r[4]=c->r[29]+0x00000028u; // 800AEBE0
  c->lr=0x800AEBE8u; f_8003BDD0(c); // 800AEBE4
  c->r[0]=R32(c->r[29]+0x00000034u); // 800AEBE8
  W32(c->r[31]+0x00000034u,c->r[0]); // 800AEBEC
  c->r[0]=R8(c->r[29]+0x00000038u); // 800AEBF0
  W8(c->r[31]+0x00000038u,c->r[0]); // 800AEBF4
  c->r[0]=R8(c->r[29]+0x00000039u); // 800AEBF8
  W8(c->r[31]+0x00000039u,c->r[0]); // 800AEBFC
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEC00
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800AEC04
  c->r[0]=R32(c->r[29]+0x00000040u); // 800AEC08
  W32(c->r[31]+0x00000040u,c->r[0]); // 800AEC0C
  c->r[0]=R8(c->r[29]+0x00000044u); // 800AEC10
  W8(c->r[31]+0x00000044u,c->r[0]); // 800AEC14
  c->r[0]=R32(c->r[29]+0x00000048u); // 800AEC18
  W32(c->r[31]+0x00000048u,c->r[0]); // 800AEC1C
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800AEC20
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800AEC24
  c->r[0]=R8(c->r[29]+0x00000050u); // 800AEC28
  W8(c->r[31]+0x00000050u,c->r[0]); // 800AEC2C
  c->r[0]=R8(c->r[29]+0x00000051u); // 800AEC30
  W8(c->r[31]+0x00000051u,c->r[0]); // 800AEC34
  c->r[0]=R8(c->r[29]+0x00000052u); // 800AEC38
  W8(c->r[31]+0x00000052u,c->r[0]); // 800AEC3C
  c->r[0]=R8(c->r[29]+0x00000053u); // 800AEC40
  W8(c->r[31]+0x00000053u,c->r[0]); // 800AEC44
  c->r[0]=R8(c->r[29]+0x00000054u); // 800AEC48
  W8(c->r[31]+0x00000054u,c->r[0]); // 800AEC4C
  c->r[0]=R8(c->r[29]+0x00000055u); // 800AEC50
  W8(c->r[31]+0x00000055u,c->r[0]); // 800AEC54
  c->r[0]=R8(c->r[29]+0x00000056u); // 800AEC58
  W8(c->r[31]+0x00000056u,c->r[0]); // 800AEC5C
  c->r[0]=R8(c->r[29]+0x00000057u); // 800AEC60
  W8(c->r[31]+0x00000057u,c->r[0]); // 800AEC64
  c->r[0]=R32(c->r[29]+0x00000058u); // 800AEC68
  W32(c->r[31]+0x00000058u,c->r[0]); // 800AEC6C
  c->r[0]=R8(c->r[29]+0x0000005Cu); // 800AEC70
  W8(c->r[31]+0x0000005Cu,c->r[0]); // 800AEC74
  c->r[0]=R32(c->r[29]+0x00000060u); // 800AEC78
  W32(c->r[31]+0x00000060u,c->r[0]); // 800AEC7C
  c->r[0]=R8(c->r[29]+0x00000064u); // 800AEC80
  W8(c->r[31]+0x00000064u,c->r[0]); // 800AEC84
  {uint32_t ea=c->r[29]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEC88
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800AEC8C
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEC90
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800AEC94
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEC98
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800AEC9C
  {uint32_t ea=c->r[29]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECA0
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800AECA4
  {uint32_t ea=c->r[29]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECA8
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800AECAC
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 800AECB0
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 800AECB4
  {uint32_t ea=c->r[29]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECB8
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800AECBC
  {uint32_t ea=c->r[29]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECC0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800AECC4
  {uint32_t ea=c->r[29]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECC8
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800AECCC
  {uint32_t ea=c->r[29]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECD0
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800AECD4
  c->r[0]=R8(c->r[29]+0x00000090u); // 800AECD8
  W8(c->r[31]+0x00000090u,c->r[0]); // 800AECDC
  {uint32_t ea=c->r[29]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECE0
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800AECE4
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECE8
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800AECEC
  {uint32_t ea=c->r[29]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECF0
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800AECF4
  c->r[0]=R8(c->r[29]+0x000000A0u); // 800AECF8
  W8(c->r[31]+0x000000A0u,c->r[0]); // 800AECFC
  {uint32_t ea=c->r[29]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED00
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 800AED04
  {uint32_t ea=c->r[29]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED08
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800AED0C
  c->r[0]=R8(c->r[29]+0x000000ACu); // 800AED10
  W8(c->r[31]+0x000000ACu,c->r[0]); // 800AED14
  {uint32_t ea=c->r[29]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED18
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800AED1C
  {uint32_t ea=c->r[29]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED20
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800AED24
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED28
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 800AED2C
  {uint32_t ea=c->r[29]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED30
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 800AED34
  {uint32_t ea=c->r[29]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED38
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 800AED3C
  {uint32_t ea=c->r[29]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED40
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 800AED44
  {uint32_t ea=c->r[29]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED48
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 800AED4C
  {uint32_t ea=c->r[29]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED50
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[0]);} // 800AED54
  {uint32_t ea=c->r[29]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED58
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[0]);} // 800AED5C
  {uint32_t ea=c->r[29]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED60
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800AED64
  {uint32_t ea=c->r[29]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED68
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 800AED6C
  {uint32_t ea=c->r[29]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED70
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 800AED74
  c->r[0]=R8(c->r[29]+0x000000E4u); // 800AED78
  cmps(c,0,(int32_t)c->r[30],0); // 800AED7C
  W8(c->r[31]+0x000000E4u,c->r[0]); // 800AED80
  {uint32_t ea=c->r[29]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED84
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 800AED88
  {uint32_t ea=c->r[29]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AED8C
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 800AED90
  c->r[0]=R8(c->r[29]+0x000000F0u); // 800AED94
  W8(c->r[31]+0x000000F0u,c->r[0]); // 800AED98
  if (crb(c,2)) { goto L_800AEDC0; } // 800AED9C
  c->r[3]=R32(c->r[28]+0x000000F4u); // 800AEDA0
  cmps(c,0,(int32_t)c->r[3],0); // 800AEDA4
  if (crb(c,1)) { goto L_800AEDB8; } // 800AEDA8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AEDAC
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800AEDB0
  goto L_800AEDC0; // 800AEDB4
L_800AEDB8:;
  c->r[0]=c->r[3]+0x00000001u; // 800AEDB8
  W32(c->r[28]+0x000000F4u,c->r[0]); // 800AEDBC
L_800AEDC0:;
  c->r[11]=c->r[1]+0x00000020u; // 800AEDC0
  c->lr=0x800AEDC8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AEDC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AEDC8
  c->lr=c->r[0]; // 800AEDCC
  c->r[1]=c->r[1]+0x00000020u; // 800AEDD0
  return; // 800AEDD4
}

// fn_800AEDD8
void f_800AEDD8(Ctx* __restrict c) {
  trace_call(0x800AEDD8u);
  c->r[3]=0u+0x00000000u; // 800AEDD8
  return; // 800AEDDC
}

// fn_800AEDE0
void f_800AEDE0(Ctx* __restrict c) {
  trace_call(0x800AEDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEDE0
  c->r[0]=c->lr; // 800AEDE4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800AEDE8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800AEDEC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800AEDF0
  c->r[11]=c->r[1]+0x00000090u; // 800AEDF4
  c->lr=0x800AEDFCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AEDF8
  c->r[6]=R32(c->r[4]+0x00000034u); // 800AEDFC
  c->r[7]=0u+0x43300000u; // 800AEE00
  c->r[0]=R32(c->r[5]+0x00000034u); // 800AEE04
  c->f[31]=c->f[1]; // 800AEE08
  c->r[6]=c->r[6]^0x80000000u; // 800AEE0C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEE10
  c->r[0]=c->r[0]^0x80000000u; // 800AEE14
  W32(c->r[1]+0x00000008u,c->r[7]); // 800AEE18
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[2]=RF64(ea);} // 800AEE1C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AEE20
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800AEE24
  c->r[29]=c->r[3]|c->r[3]; // 800AEE28
  c->r[30]=c->r[4]|c->r[4]; // 800AEE2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800AEE30
  c->r[31]=c->r[5]|c->r[5]; // 800AEE34
  W32(c->r[1]+0x00000010u,c->r[7]); // 800AEE38
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[2]); // 800AEE3C
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 800AEE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEE44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AEE48
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEE4C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[2]); // 800AEE50
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEE54
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEE58
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AEE5C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[4]);} // 800AEE60
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800AEE64
  W32(c->r[3]+0x00000034u,c->r[0]); // 800AEE68
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800AEE6C
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800AEE70
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEE74
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEE78
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEE7C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800AEE80
  c->r[6]=R32(c->r[4]+0x00000040u); // 800AEE84
  c->r[0]=R32(c->r[5]+0x00000040u); // 800AEE88
  c->r[6]=c->r[6]^0x80000000u; // 800AEE8C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AEE90
  c->r[0]=c->r[0]^0x80000000u; // 800AEE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEE98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AEE9C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AEEA0
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 800AEEA4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[2]); // 800AEEA8
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEEAC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEEB0
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEEB4
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AEEB8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[4]);} // 800AEEBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AEEC0
  W32(c->r[3]+0x00000040u,c->r[0]); // 800AEEC4
  c->r[6]=R32(c->r[4]+0x00000048u); // 800AEEC8
  c->r[0]=R32(c->r[5]+0x00000048u); // 800AEECC
  c->r[6]=c->r[6]^0x80000000u; // 800AEED0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AEED4
  c->r[0]=c->r[0]^0x80000000u; // 800AEED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEEDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AEEE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AEEE4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 800AEEE8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[2]); // 800AEEEC
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEEF0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEEF4
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEEF8
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AEEFC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[4]);} // 800AEF00
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800AEF04
  W32(c->r[3]+0x00000048u,c->r[0]); // 800AEF08
  c->r[6]=R8(c->r[4]+0x00000050u); // 800AEF0C
  c->r[0]=R8(c->r[5]+0x00000050u); // 800AEF10
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AEF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEF18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AEF1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AEF20
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AEF24
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800AEF28
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEF2C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEF30
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEF34
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AEF38
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[4]);} // 800AEF3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AEF40
  W8(c->r[3]+0x00000050u,c->r[0]); // 800AEF44
  c->r[6]=R8(c->r[4]+0x00000051u); // 800AEF48
  c->r[0]=R8(c->r[5]+0x00000051u); // 800AEF4C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AEF50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEF54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AEF58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AEF5C
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AEF60
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800AEF64
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEF68
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEF6C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEF70
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AEF74
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[4]);} // 800AEF78
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800AEF7C
  W8(c->r[3]+0x00000051u,c->r[0]); // 800AEF80
  c->r[6]=R8(c->r[4]+0x00000052u); // 800AEF84
  c->r[0]=R8(c->r[5]+0x00000052u); // 800AEF88
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AEF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEF90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AEF94
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AEF98
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AEF9C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800AEFA0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEFA4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEFA8
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEFAC
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AEFB0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800AEFB4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AEFB8
  W8(c->r[3]+0x00000052u,c->r[0]); // 800AEFBC
  c->r[6]=R8(c->r[4]+0x00000053u); // 800AEFC0
  c->r[0]=R8(c->r[5]+0x00000053u); // 800AEFC4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AEFC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AEFCC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AEFD0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AEFD4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AEFD8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800AEFDC
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AEFE0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AEFE4
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AEFE8
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AEFEC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[4]);} // 800AEFF0
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800AEFF4
  W8(c->r[3]+0x00000053u,c->r[0]); // 800AEFF8
  c->r[6]=R8(c->r[4]+0x00000054u); // 800AEFFC
  c->r[0]=R8(c->r[5]+0x00000054u); // 800AF000
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AF004
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF008
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AF00C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AF010
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AF014
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800AF018
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AF01C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AF020
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AF024
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AF028
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[4]);} // 800AF02C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800AF030
  W8(c->r[3]+0x00000054u,c->r[0]); // 800AF034
  c->r[6]=R8(c->r[4]+0x00000055u); // 800AF038
  c->r[0]=R8(c->r[5]+0x00000055u); // 800AF03C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AF040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF044
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AF048
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AF04C
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AF050
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800AF054
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AF058
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AF05C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AF060
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AF064
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[4]);} // 800AF068
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800AF06C
  W8(c->r[3]+0x00000055u,c->r[0]); // 800AF070
  c->r[6]=R8(c->r[4]+0x00000056u); // 800AF074
  c->r[0]=R8(c->r[5]+0x00000056u); // 800AF078
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AF07C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF080
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AF084
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AF088
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AF08C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800AF090
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 800AF094
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800AF098
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 800AF09C
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800AF0A0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[4]);} // 800AF0A4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800AF0A8
  W8(c->r[3]+0x00000056u,c->r[0]); // 800AF0AC
  c->r[6]=R8(c->r[4]+0x00000057u); // 800AF0B0
  c->r[0]=R8(c->r[5]+0x00000057u); // 800AF0B4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AF0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF0BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800AF0C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=RF64(ea);} // 800AF0C4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800AF0C8
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[0]); // 800AF0CC
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[5]); // 800AF0D0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF0D4
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF0D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800AF0DC
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800AF0E0
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800AF0E4
  W8(c->r[3]+0x00000057u,c->r[0]); // 800AF0E8
  c->r[6]=R32(c->r[4]+0x00000058u); // 800AF0EC
  c->r[0]=R32(c->r[5]+0x00000058u); // 800AF0F0
  c->r[6]=c->r[6]^0x80000000u; // 800AF0F4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AF0F8
  c->r[0]=c->r[0]^0x80000000u; // 800AF0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF100
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800AF104
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800AF108
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[2]); // 800AF10C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800AF110
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF114
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF118
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF11C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800AF120
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 800AF124
  c->r[0]=R32(c->r[1]+0x00000074u); // 800AF128
  W32(c->r[3]+0x00000058u,c->r[0]); // 800AF12C
  {uint32_t ea=c->r[4]+0x00000068u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF130
  {uint32_t ea=c->r[5]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF134
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF138
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF13C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF140
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800AF144
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF148
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF14C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF150
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF154
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF158
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800AF15C
  {uint32_t ea=c->r[4]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF160
  {uint32_t ea=c->r[5]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF164
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF168
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF16C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF170
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 800AF174
  {uint32_t ea=c->r[4]+0x00000074u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF178
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF17C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF180
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF184
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF188
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 800AF18C
  {uint32_t ea=c->r[4]+0x00000078u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF190
  {uint32_t ea=c->r[5]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF194
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF198
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF19C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF1A0
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800AF1A4
  c->r[6]=R32(c->r[4]+0x0000007Cu); // 800AF1A8
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 800AF1AC
  c->r[6]=c->r[6]^0x80000000u; // 800AF1B0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800AF1B4
  c->r[0]=c->r[0]^0x80000000u; // 800AF1B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF1BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800AF1C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800AF1C4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[2]); // 800AF1C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800AF1CC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 800AF1D0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF1D4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AF1D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800AF1DC
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[0]);} // 800AF1E0
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800AF1E4
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800AF1E8
  {uint32_t ea=c->r[4]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF1EC
  {uint32_t ea=c->r[5]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF1F0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AF1F4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF1F8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AF1FC
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 800AF200
  {uint32_t ea=c->r[4]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF204
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF208
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AF20C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF210
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AF214
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 800AF218
  {uint32_t ea=c->r[4]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF21C
  {uint32_t ea=c->r[5]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF220
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800AF224
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF228
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AF22C
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 800AF230
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF234
  c->f[2]=c->f[31]; // 800AF238
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF23C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF240
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF244
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF248
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 800AF24C
  {uint32_t ea=c->r[4]+0x00000094u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF250
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF254
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF258
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF25C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF260
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 800AF264
  {uint32_t ea=c->r[4]+0x00000098u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF268
  {uint32_t ea=c->r[5]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF26C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF270
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF274
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF278
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 800AF27C
  {uint32_t ea=c->r[4]+0x0000009Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF280
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF284
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF288
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF28C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF290
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 800AF294
  {uint32_t ea=c->r[4]+0x000000A4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF298
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF29C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF2A0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF2A4
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF2A8
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 800AF2AC
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AF2B0
  c->r[4]=c->r[4]+0x000000B0u; // 800AF2B4
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF2B8
  c->r[5]=c->r[5]+0x000000B0u; // 800AF2BC
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 800AF2C0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800AF2C4
  c->f[1]=c->f[3]; // 800AF2C8
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800AF2CC
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 800AF2D0
  c->r[3]=c->r[3]+0x000000B0u; // 800AF2D4
  c->lr=0x800AF2DCu; f_8025E410(c); // 800AF2D8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF2DC
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF2E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800AF2E4
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF2E8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF2EC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF2F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF2F4
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800AF2F8
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF2FC
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF300
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF304
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF308
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF30C
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 800AF310
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF314
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF318
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF31C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF320
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF324
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800AF328
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF32C
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF330
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF334
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF338
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF33C
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 800AF340
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF344
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF348
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF34C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF350
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF354
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 800AF358
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF35C
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF360
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF364
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF368
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF36C
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 800AF370
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF374
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF378
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF37C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF380
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF384
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[1]);} // 800AF388
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF38C
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF390
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF394
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF398
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF39C
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[1]);} // 800AF3A0
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF3A4
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF3A8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF3AC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF3B0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF3B4
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[1]);} // 800AF3B8
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF3BC
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF3C0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF3C4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800AF3C8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800AF3CC
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800AF3D0
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF3D4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF3D8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AF3DC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800AF3E0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800AF3E4
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 800AF3E8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800AF3EC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800AF3F0
  c->r[11]=c->r[1]+0x00000090u; // 800AF3F4
  c->lr=0x800AF3FCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AF3F8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800AF3FC
  c->lr=c->r[0]; // 800AF400
  c->r[1]=c->r[1]+0x000000A0u; // 800AF404
  return; // 800AF408
}

// fn_800AF40C
void f_800AF40C(Ctx* __restrict c) {
  trace_call(0x800AF40Cu);
  c->r[3]=0u+0x000000F8u; // 800AF40C
  return; // 800AF410
}

// fn_800AF414
void f_800AF414(Ctx* __restrict c) {
  trace_call(0x800AF414u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF414
  c->r[0]=c->lr; // 800AF418
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF41C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF420
  c->r[31]=c->r[3]|c->r[3]; // 800AF424
  c->lr=0x800AF42Cu; f_800AE3F0(c); // 800AF428
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AF42C
  c->r[3]=0u+0x80420000u; // 800AF430
  c->r[3]=c->r[3]+0xFFFFB3D8u; // 800AF434
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AF438
  c->r[0]=c->r[0]|0x80000000u; // 800AF43C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800AF440
  c->r[3]=c->r[31]|c->r[31]; // 800AF444
  c->r[12]=R32(c->r[31]+0x00000018u); // 800AF448
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AF44C
  c->ctr=c->r[12]; // 800AF450
  if (true) { c->lr=0x800AF458u; dispatch(c,c->ctr); } // 800AF454
  c->r[3]=c->r[31]|c->r[31]; // 800AF458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF45C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF460
  c->lr=c->r[0]; // 800AF464
  c->r[1]=c->r[1]+0x00000010u; // 800AF468
  return; // 800AF46C
}

// fn_800AF470
void f_800AF470(Ctx* __restrict c) {
  trace_call(0x800AF470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF470
  c->r[0]=c->lr; // 800AF474
  cmps(c,0,(int32_t)c->r[3],0); // 800AF478
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF47C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AF480
  c->r[30]=c->r[3]|c->r[3]; // 800AF484
  c->r[31]=c->r[4]|c->r[4]; // 800AF488
  if (crb(c,2)) { goto L_800AF4A8; } // 800AF48C
  c->r[4]=0u+0x00000000u; // 800AF490
  c->lr=0x800AF498u; f_802B1180(c); // 800AF494
  cmps(c,0,(int32_t)c->r[31],0); // 800AF498
  if (!crb(c,1)) { goto L_800AF4A8; } // 800AF49C
  c->r[3]=c->r[30]|c->r[30]; // 800AF4A0
  c->lr=0x800AF4A8u; f_80244DC0(c); // 800AF4A4
L_800AF4A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800AF4A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AF4AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF4B0
  c->lr=c->r[0]; // 800AF4B4
  c->r[1]=c->r[1]+0x00000010u; // 800AF4B8
  return; // 800AF4BC
}

// fn_800AF4C0
void f_800AF4C0(Ctx* __restrict c) {
  trace_call(0x800AF4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF4C0
  c->r[0]=c->lr; // 800AF4C4
  c->r[3]=0u+0x000000F8u; // 800AF4C8
  c->r[4]=c->r[13]+0xFFFFA879u; // 800AF4CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF4D0
  c->r[5]=0u+0x00000000u; // 800AF4D4
  c->r[6]=0u+0x00001001u; // 800AF4D8
  c->lr=0x800AF4E0u; f_80244D20(c); // 800AF4DC
  cmps(c,0,(int32_t)c->r[3],0); // 800AF4E0
  if (crb(c,2)) { goto L_800AF4EC; } // 800AF4E4
  c->lr=0x800AF4ECu; f_800AF414(c); // 800AF4E8
L_800AF4EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF4EC
  c->lr=c->r[0]; // 800AF4F0
  c->r[1]=c->r[1]+0x00000010u; // 800AF4F4
  return; // 800AF4F8
}

// fn_800AF4FC
void f_800AF4FC(Ctx* __restrict c) {
  trace_call(0x800AF4FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF4FC
  c->r[0]=c->lr; // 800AF500
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF508
  c->r[31]=c->r[3]|c->r[3]; // 800AF50C
  c->lr=0x800AF514u; f_80244520(c); // 800AF510
  c->r[7]=c->r[3]|c->r[3]; // 800AF514
  c->r[9]=c->r[31]|c->r[31]; // 800AF518
  c->r[3]=0u+0x000000F8u; // 800AF51C
  c->r[4]=c->r[13]+0xFFFFA87Eu; // 800AF520
  c->r[5]=0u+0x00000000u; // 800AF524
  c->r[6]=0u+0x00002001u; // 800AF528
  c->r[8]=0u+0x00000000u; // 800AF52C
  c->lr=0x800AF534u; f_80242DF0(c); // 800AF530
  c->r[4]=c->r[3]|c->r[3]; // 800AF534
  c->r[3]=0u+0x000000F8u; // 800AF538
  c->r[5]=c->r[13]+0xFFFFA883u; // 800AF53C
  c->r[6]=0u+0x00000000u; // 800AF540
  c->r[7]=0u+0x00001001u; // 800AF544
  c->lr=0x800AF54Cu; f_80244DB0(c); // 800AF548
  cmps(c,0,(int32_t)c->r[3],0); // 800AF54C
  if (crb(c,2)) { goto L_800AF558; } // 800AF550
  c->lr=0x800AF558u; f_800AF414(c); // 800AF554
L_800AF558:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF55C
  c->lr=c->r[0]; // 800AF560
  c->r[1]=c->r[1]+0x00000010u; // 800AF564
  return; // 800AF568
}

// fn_800AF56C
void f_800AF56C(Ctx* __restrict c) {
  trace_call(0x800AF56Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF56C
  c->r[0]=c->lr; // 800AF570
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF578
  c->r[31]=c->r[3]|c->r[3]; // 800AF57C
  c->lr=0x800AF584u; f_800AE3F0(c); // 800AF580
  c->r[8]=0u+0x80420000u; // 800AF584
  c->r[6]=0u+0x80410000u; // 800AF588
  c->r[7]=0u+0x00000000u; // 800AF58C
  c->r[5]=0u+0x3E460000u; // 800AF590
  c->r[4]=0u+0x3DEB0000u; // 800AF594
  c->r[3]=0u+0xF8840000u; // 800AF598
  c->r[0]=c->r[3]+0xFFFFB7AEu; // 800AF59C
  c->r[8]=c->r[8]+0xFFFFB39Cu; // 800AF5A0
  c->r[6]=c->r[6]+0xFFFFC983u; // 800AF5A4
  c->r[5]=c->r[5]+0xFFFF83EEu; // 800AF5A8
  c->r[4]=c->r[4]+0xFFFFA8BFu; // 800AF5AC
  W32(c->r[31]+0x00000018u,c->r[8]); // 800AF5B0
  c->r[3]=c->r[31]|c->r[31]; // 800AF5B4
  W32(c->r[31]+0x00000104u,c->r[7]); // 800AF5B8
  W32(c->r[31]+0x00000000u,c->r[6]); // 800AF5BC
  W32(c->r[31]+0x00000008u,c->r[7]); // 800AF5C0
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800AF5C4
  W32(c->r[31]+0x00000010u,c->r[4]); // 800AF5C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AF5CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF5D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF5D4
  c->lr=c->r[0]; // 800AF5D8
  c->r[1]=c->r[1]+0x00000010u; // 800AF5DC
  return; // 800AF5E0
}

// fn_800AF5E4
void f_800AF5E4(Ctx* __restrict c) {
  trace_call(0x800AF5E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF5E4
  c->r[0]=c->lr; // 800AF5E8
  cmps(c,0,(int32_t)c->r[4],0); // 800AF5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF5F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AF5F4
  c->r[30]=c->r[3]|c->r[3]; // 800AF5F8
  c->r[31]=c->r[4]|c->r[4]; // 800AF5FC
  if (crb(c,2)) { goto L_800AF654; } // 800AF600
  c->r[3]=c->r[31]|c->r[31]; // 800AF604
  c->lr=0x800AF60Cu; f_80244520(c); // 800AF608
  c->r[7]=c->r[3]|c->r[3]; // 800AF60C
  c->r[9]=c->r[31]|c->r[31]; // 800AF610
  c->r[3]=0u+0x00000108u; // 800AF614
  c->r[4]=c->r[13]+0xFFFFA888u; // 800AF618
  c->r[5]=0u+0x00000000u; // 800AF61C
  c->r[6]=0u+0x00002001u; // 800AF620
  c->r[8]=0u+0x00000000u; // 800AF624
  c->lr=0x800AF62Cu; f_80242DF0(c); // 800AF628
  c->r[4]=c->r[3]|c->r[3]; // 800AF62C
  c->r[3]=0u+0x00000108u; // 800AF630
  c->r[5]=c->r[13]+0xFFFFA88Du; // 800AF634
  c->r[6]=0u+0x00000000u; // 800AF638
  c->r[7]=0u+0x00001001u; // 800AF63C
  c->lr=0x800AF644u; f_80244DB0(c); // 800AF640
  cmps(c,0,(int32_t)c->r[3],0); // 800AF644
  if (crb(c,2)) { goto L_800AF674; } // 800AF648
  c->lr=0x800AF650u; f_800AF56C(c); // 800AF64C
  goto L_800AF674; // 800AF650
L_800AF654:;
  c->r[3]=0u+0x00000108u; // 800AF654
  c->r[4]=c->r[13]+0xFFFFA892u; // 800AF658
  c->r[5]=0u+0x00000000u; // 800AF65C
  c->r[6]=0u+0x00001001u; // 800AF660
  c->lr=0x800AF668u; f_80244D20(c); // 800AF664
  cmps(c,0,(int32_t)c->r[3],0); // 800AF668
  if (crb(c,2)) { goto L_800AF674; } // 800AF66C
  c->lr=0x800AF674u; f_800AF56C(c); // 800AF670
L_800AF674:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800AF674
  W16(c->r[3]+0x00000014u,c->r[0]); // 800AF678
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AF67C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF680
  c->lr=c->r[0]; // 800AF684
  c->r[1]=c->r[1]+0x00000010u; // 800AF688
  return; // 800AF68C
}

// fn_800AF690
void f_800AF690(Ctx* __restrict c) {
  trace_call(0x800AF690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF690
  c->r[0]=c->lr; // 800AF694
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF698
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AF69C
  c->r[29]=c->r[3]|c->r[3]; // 800AF6A0
  c->r[30]=c->r[4]|c->r[4]; // 800AF6A4
  c->lr=0x800AF6ACu; f_800AE514(c); // 800AF6A8
  c->r[31]=c->r[3]|c->r[3]; // 800AF6AC
  c->r[3]=c->r[30]|c->r[30]; // 800AF6B0
  c->r[4]=0u+0x00000000u; // 800AF6B4
  c->lr=0x800AF6BCu; f_8030BE30(c); // 800AF6B8
  W32(c->r[29]+0x000000F8u,c->r[3]); // 800AF6BC
  c->r[0]=0u+0x00000000u; // 800AF6C0
  c->r[3]=c->r[30]|c->r[30]; // 800AF6C4
  W32(c->r[29]+0x000000FCu,c->r[0]); // 800AF6C8
  c->lr=0x800AF6D0u; f_8030BD1C(c); // 800AF6CC
  W32(c->r[29]+0x00000100u,c->r[3]); // 800AF6D0
  c->r[3]=c->r[31]|c->r[31]; // 800AF6D4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AF6D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AF6DC
  c->lr=c->r[0]; // 800AF6E0
  c->r[1]=c->r[1]+0x00000020u; // 800AF6E4
  return; // 800AF6E8
}

// fn_800AF6EC
void f_800AF6EC(Ctx* __restrict c) {
  trace_call(0x800AF6ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF6EC
  c->r[0]=c->lr; // 800AF6F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AF6F4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AF6F8
  c->r[27]=c->r[3]|c->r[3]; // 800AF6FC
  c->r[28]=c->r[4]|c->r[4]; // 800AF700
  c->r[29]=c->r[5]|c->r[5]; // 800AF704
  c->r[30]=c->r[6]|c->r[6]; // 800AF708
  c->r[7]=R32(c->r[3]+0x00000104u); // 800AF70C
  cmps(c,0,(int32_t)c->r[7],0); // 800AF710
  if (!crb(c,0)) { goto L_800AF724; } // 800AF714
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800AF718
  W32(c->r[3]+0x00000104u,c->r[0]); // 800AF71C
  goto L_800AF734; // 800AF720
L_800AF724:;
  c->r[0]=c->r[7]+0x00000001u; // 800AF724
  W32(c->r[3]+0x00000104u,c->r[0]); // 800AF728
  cmps(c,0,(int32_t)c->r[0],1); // 800AF72C
  if (crb(c,1)) { goto L_800AF7F4; } // 800AF730
L_800AF734:;
  c->r[3]=c->r[27]|c->r[27]; // 800AF734
  c->r[4]=c->r[28]|c->r[28]; // 800AF738
  c->r[5]=c->r[29]|c->r[29]; // 800AF73C
  c->r[6]=c->r[30]|c->r[30]; // 800AF740
  c->lr=0x800AF748u; f_800AE820(c); // 800AF744
  c->r[4]=R32(c->r[27]+0x000000F8u); // 800AF748
  cmps(c,0,(int32_t)c->r[4],0); // 800AF74C
  if (crb(c,2)) { goto L_800AF7F4; } // 800AF750
  c->r[0]=0u+0x00000001u; // 800AF754
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AF758
  c->r[6]=c->r[28]|c->r[28]; // 800AF75C
  c->r[7]=c->r[29]|c->r[29]; // 800AF760
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800AF764
  c->r[8]=c->r[30]|c->r[30]; // 800AF768
  c->r[9]=R32(c->r[27]+0x00000100u); // 800AF76C
  c->r[5]=0u+0x00000001u; // 800AF770
  c->r[10]=0u+0x00000001u; // 800AF774
  c->lr=0x800AF77Cu; f_80281A84(c); // 800AF778
  cmps(c,0,(int32_t)c->r[3],0); // 800AF77C
  W32(c->r[27]+0x000000FCu,c->r[3]); // 800AF780
  if (crb(c,2)) { goto L_800AF790; } // 800AF784
  c->lr=0x800AF78Cu; f_80295B6C(c); // 800AF788
  goto L_800AF7F4; // 800AF78C
L_800AF790:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 800AF790
  c->r[4]=c->r[30]|c->r[30]; // 800AF794
  c->r[5]=c->r[29]|c->r[29]; // 800AF798
  c->lr=0x800AF7A0u; f_802C0F98(c); // 800AF79C
  c->r[31]=c->r[3]|c->r[3]; // 800AF7A0
  c->r[3]=0u+0x00000044u; // 800AF7A4
  c->r[4]=c->r[13]+0xFFFFA897u; // 800AF7A8
  c->r[5]=0u+0x00000000u; // 800AF7AC
  c->r[6]=0u+0x00001001u; // 800AF7B0
  c->lr=0x800AF7B8u; f_80244D20(c); // 800AF7B4
  cmps(c,0,(int32_t)c->r[3],0); // 800AF7B8
  if (crb(c,2)) { goto L_800AF7D0; } // 800AF7BC
  c->r[5]=R32(c->r[27]+0x000000F8u); // 800AF7C0
  c->r[4]=c->r[31]|c->r[31]; // 800AF7C4
  c->r[6]=0u+0x00000001u; // 800AF7C8
  c->lr=0x800AF7D0u; f_8029316C(c); // 800AF7CC
L_800AF7D0:;
  W32(c->r[27]+0x000000FCu,c->r[3]); // 800AF7D0
  c->r[4]=c->r[28]|c->r[28]; // 800AF7D4
  c->r[7]=R32(c->r[27]+0x00000100u); // 800AF7D8
  c->r[5]=c->r[29]|c->r[29]; // 800AF7DC
  c->r[6]=c->r[30]|c->r[30]; // 800AF7E0
  c->r[8]=0u+0x00000001u; // 800AF7E4
  c->r[9]=0u+0x00000000u; // 800AF7E8
  c->lr=0x800AF7F0u; f_8027FFF4(c); // 800AF7EC
  W32(c->r[27]+0x000000FCu,c->r[3]); // 800AF7F0
L_800AF7F4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AF7F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AF7F8
  c->lr=c->r[0]; // 800AF7FC
  c->r[1]=c->r[1]+0x00000030u; // 800AF800
  return; // 800AF804
}

// fn_800AF808
void f_800AF808(Ctx* __restrict c) {
  trace_call(0x800AF808u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF808
  c->r[0]=c->lr; // 800AF80C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF810
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF814
  c->r[31]=c->r[3]|c->r[3]; // 800AF818
  c->r[0]=R32(c->r[3]+0x00000104u); // 800AF81C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800AF820
  W32(c->r[3]+0x00000104u,c->r[0]); // 800AF824
  if (!crb(c,2)) { goto L_800AF848; } // 800AF828
  c->lr=0x800AF830u; f_800AE9E8(c); // 800AF82C
  c->r[3]=R32(c->r[31]+0x000000FCu); // 800AF830
  cmps(c,0,(int32_t)c->r[3],0); // 800AF834
  if (crb(c,2)) { goto L_800AF848; } // 800AF838
  c->lr=0x800AF840u; f_80295B7C(c); // 800AF83C
  c->r[0]=0u+0x00000000u; // 800AF840
  W32(c->r[31]+0x000000FCu,c->r[0]); // 800AF844
L_800AF848:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF848
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF84C
  c->lr=c->r[0]; // 800AF850
  c->r[1]=c->r[1]+0x00000010u; // 800AF854
  return; // 800AF858
}

// fn_800AF85C
void f_800AF85C(Ctx* __restrict c) {
  trace_call(0x800AF85Cu);
  return; // 800AF85C
}

// fn_800AF860
void f_800AF860(Ctx* __restrict c) {
  trace_call(0x800AF860u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF860
  c->r[0]=c->lr; // 800AF864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF86C
  c->r[31]=c->r[3]|c->r[3]; // 800AF870
  c->lr=0x800AF878u; f_800AEA58(c); // 800AF874
  c->r[3]=0u+0x00000000u; // 800AF878
  c->r[0]=0u+0x00000004u; // 800AF87C
  W32(c->r[31]+0x000000F8u,c->r[3]); // 800AF880
  W32(c->r[31]+0x000000FCu,c->r[3]); // 800AF884
  W32(c->r[31]+0x00000100u,c->r[0]); // 800AF888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF88C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF890
  c->lr=c->r[0]; // 800AF894
  c->r[1]=c->r[1]+0x00000010u; // 800AF898
  return; // 800AF89C
}

// fn_800AF8A0
void f_800AF8A0(Ctx* __restrict c) {
  trace_call(0x800AF8A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF8A0
  c->r[0]=c->lr; // 800AF8A4
  c->r[6]=0u+0x00000000u; // 800AF8A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF8AC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AF8B0
  c->r[28]=c->r[3]|c->r[3]; // 800AF8B4
  c->r[29]=c->r[4]|c->r[4]; // 800AF8B8
  c->r[30]=c->r[5]|c->r[5]; // 800AF8BC
  c->r[31]=c->r[7]|c->r[7]; // 800AF8C0
  c->lr=0x800AF8C8u; f_800AEB9C(c); // 800AF8C4
  cmps(c,0,(int32_t)c->r[30],0); // 800AF8C8
  if (crb(c,2)) { goto L_800AF8D4; } // 800AF8CC
  goto L_800AF8D8; // 800AF8D0
L_800AF8D4:;
  c->r[30]=c->r[28]|c->r[28]; // 800AF8D4
L_800AF8D8:;
  c->r[3]=c->r[30]+0x000000F8u; // 800AF8D8
  c->r[4]=c->r[29]+0x000000F8u; // 800AF8DC
  c->lr=0x800AF8E4u; f_8003BDD0(c); // 800AF8E0
  cmps(c,0,(int32_t)c->r[31],0); // 800AF8E4
  if (crb(c,2)) { goto L_800AF90C; } // 800AF8E8
  c->r[3]=R32(c->r[28]+0x00000104u); // 800AF8EC
  cmps(c,0,(int32_t)c->r[3],0); // 800AF8F0
  if (crb(c,1)) { goto L_800AF904; } // 800AF8F4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AF8F8
  W32(c->r[28]+0x00000104u,c->r[0]); // 800AF8FC
  goto L_800AF90C; // 800AF900
L_800AF904:;
  c->r[0]=c->r[3]+0x00000001u; // 800AF904
  W32(c->r[28]+0x00000104u,c->r[0]); // 800AF908
L_800AF90C:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AF90C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AF910
  c->lr=c->r[0]; // 800AF914
  c->r[1]=c->r[1]+0x00000020u; // 800AF918
  return; // 800AF91C
}

// fn_800AF920
void f_800AF920(Ctx* __restrict c) {
  trace_call(0x800AF920u);
  c->r[3]=0u+0x25A50000u; // 800AF920
  c->r[0]=c->r[3]+0xFFFFFEB2u; // 800AF924
  c->r[0]=c->r[4]-c->r[0]; // 800AF928
  c->r[0]=cntlz(c->r[0]); // 800AF92C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800AF930
  return; // 800AF934
}

// fn_800AF938
void f_800AF938(Ctx* __restrict c) {
  trace_call(0x800AF938u);
  f_800AEDE0(c); return; // 800AF938
}

// fn_800AF93C
void f_800AF93C(Ctx* __restrict c) {
  trace_call(0x800AF93Cu);
  c->r[3]=0u+0x00000108u; // 800AF93C
  return; // 800AF940
}

// fn_800AF944
void f_800AF944(Ctx* __restrict c) {
  trace_call(0x800AF944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF944
  c->r[0]=c->lr; // 800AF948
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF94C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AF950
  c->r[31]=c->r[3]|c->r[3]; // 800AF954
  c->lr=0x800AF95Cu; f_800AF56C(c); // 800AF958
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AF95C
  c->r[3]=0u+0x80420000u; // 800AF960
  c->r[3]=c->r[3]+0xFFFFB35Cu; // 800AF964
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AF968
  c->r[0]=c->r[0]|0x80000000u; // 800AF96C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800AF970
  c->r[3]=c->r[31]|c->r[31]; // 800AF974
  c->r[12]=R32(c->r[31]+0x00000018u); // 800AF978
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AF97C
  c->ctr=c->r[12]; // 800AF980
  if (true) { c->lr=0x800AF988u; dispatch(c,c->ctr); } // 800AF984
  c->r[3]=c->r[31]|c->r[31]; // 800AF988
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AF98C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF990
  c->lr=c->r[0]; // 800AF994
  c->r[1]=c->r[1]+0x00000010u; // 800AF998
  return; // 800AF99C
}

// fn_800AF9A0
void f_800AF9A0(Ctx* __restrict c) {
  trace_call(0x800AF9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF9A0
  c->r[0]=c->lr; // 800AF9A4
  cmps(c,0,(int32_t)c->r[3],0); // 800AF9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AF9AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AF9B0
  c->r[30]=c->r[3]|c->r[3]; // 800AF9B4
  c->r[31]=c->r[4]|c->r[4]; // 800AF9B8
  if (crb(c,2)) { goto L_800AF9DC; } // 800AF9BC
  if (crb(c,2)) { goto L_800AF9CC; } // 800AF9C0
  c->r[4]=0u+0x00000000u; // 800AF9C4
  c->lr=0x800AF9CCu; f_802B1180(c); // 800AF9C8
L_800AF9CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AF9CC
  if (!crb(c,1)) { goto L_800AF9DC; } // 800AF9D0
  c->r[3]=c->r[30]|c->r[30]; // 800AF9D4
  c->lr=0x800AF9DCu; f_80244DC0(c); // 800AF9D8
L_800AF9DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800AF9DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AF9E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AF9E4
  c->lr=c->r[0]; // 800AF9E8
  c->r[1]=c->r[1]+0x00000010u; // 800AF9EC
  return; // 800AF9F0
}

// fn_800AF9F4
void f_800AF9F4(Ctx* __restrict c) {
  trace_call(0x800AF9F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF9F4
  c->r[0]=c->lr; // 800AF9F8
  c->r[3]=0u+0x00000108u; // 800AF9FC
  c->r[4]=c->r[13]+0xFFFFA89Cu; // 800AFA00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFA04
  c->r[5]=0u+0x00000000u; // 800AFA08
  c->r[6]=0u+0x00001001u; // 800AFA0C
  c->lr=0x800AFA14u; f_80244D20(c); // 800AFA10
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA14
  if (crb(c,2)) { goto L_800AFA20; } // 800AFA18
  c->lr=0x800AFA20u; f_800AF944(c); // 800AFA1C
L_800AFA20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFA20
  c->lr=c->r[0]; // 800AFA24
  c->r[1]=c->r[1]+0x00000010u; // 800AFA28
  return; // 800AFA2C
}

// fn_800AFA30
void f_800AFA30(Ctx* __restrict c) {
  trace_call(0x800AFA30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFA30
  c->r[0]=c->lr; // 800AFA34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFA38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFA3C
  c->r[31]=c->r[3]|c->r[3]; // 800AFA40
  c->lr=0x800AFA48u; f_80244520(c); // 800AFA44
  c->r[7]=c->r[3]|c->r[3]; // 800AFA48
  c->r[9]=c->r[31]|c->r[31]; // 800AFA4C
  c->r[3]=0u+0x00000108u; // 800AFA50
  c->r[4]=c->r[13]+0xFFFFA8A1u; // 800AFA54
  c->r[5]=0u+0x00000000u; // 800AFA58
  c->r[6]=0u+0x00002001u; // 800AFA5C
  c->r[8]=0u+0x00000000u; // 800AFA60
  c->lr=0x800AFA68u; f_80242DF0(c); // 800AFA64
  c->r[4]=c->r[3]|c->r[3]; // 800AFA68
  c->r[3]=0u+0x00000108u; // 800AFA6C
  c->r[5]=c->r[13]+0xFFFFA8A6u; // 800AFA70
  c->r[6]=0u+0x00000000u; // 800AFA74
  c->r[7]=0u+0x00001001u; // 800AFA78
  c->lr=0x800AFA80u; f_80244DB0(c); // 800AFA7C
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA80
  if (crb(c,2)) { goto L_800AFA8C; } // 800AFA84
  c->lr=0x800AFA8Cu; f_800AF944(c); // 800AFA88
L_800AFA8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFA8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFA90
  c->lr=c->r[0]; // 800AFA94
  c->r[1]=c->r[1]+0x00000010u; // 800AFA98
  return; // 800AFA9C
}

// fn_800AFAA0
void f_800AFAA0(Ctx* __restrict c) {
  trace_call(0x800AFAA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFAA0
  c->r[0]=c->lr; // 800AFAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFAA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFAAC
  c->r[31]=c->r[3]|c->r[3]; // 800AFAB0
  c->lr=0x800AFAB8u; f_800AE3F0(c); // 800AFAB4
  c->r[8]=0u+0x80420000u; // 800AFAB8
  c->r[6]=0u+0x80410000u; // 800AFABC
  c->r[7]=0u+0x00000000u; // 800AFAC0
  c->r[5]=0u+0xFBA50000u; // 800AFAC4
  c->r[4]=0u+0x0B810000u; // 800AFAC8
  c->r[3]=0u+0xCEE80000u; // 800AFACC
  c->r[0]=c->r[3]+0x000012DFu; // 800AFAD0
  c->r[8]=c->r[8]+0xFFFFB320u; // 800AFAD4
  c->r[6]=c->r[6]+0xFFFFC99Eu; // 800AFAD8
  c->r[5]=c->r[5]+0x000059D2u; // 800AFADC
  c->r[4]=c->r[4]+0x00000DCEu; // 800AFAE0
  W32(c->r[31]+0x00000018u,c->r[8]); // 800AFAE4
  c->r[3]=c->r[31]|c->r[31]; // 800AFAE8
  W32(c->r[31]+0x0000010Cu,c->r[7]); // 800AFAEC
  W32(c->r[31]+0x00000000u,c->r[6]); // 800AFAF0
  W32(c->r[31]+0x00000008u,c->r[7]); // 800AFAF4
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800AFAF8
  W32(c->r[31]+0x00000010u,c->r[4]); // 800AFAFC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AFB00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFB04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFB08
  c->lr=c->r[0]; // 800AFB0C
  c->r[1]=c->r[1]+0x00000010u; // 800AFB10
  return; // 800AFB14
}

// fn_800AFB18
void f_800AFB18(Ctx* __restrict c) {
  trace_call(0x800AFB18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFB18
  c->r[0]=c->lr; // 800AFB1C
  cmps(c,0,(int32_t)c->r[4],0); // 800AFB20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFB24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AFB28
  c->r[30]=c->r[3]|c->r[3]; // 800AFB2C
  c->r[31]=c->r[4]|c->r[4]; // 800AFB30
  if (crb(c,2)) { goto L_800AFB88; } // 800AFB34
  c->r[3]=c->r[31]|c->r[31]; // 800AFB38
  c->lr=0x800AFB40u; f_80244520(c); // 800AFB3C
  c->r[7]=c->r[3]|c->r[3]; // 800AFB40
  c->r[9]=c->r[31]|c->r[31]; // 800AFB44
  c->r[3]=0u+0x00000110u; // 800AFB48
  c->r[4]=c->r[13]+0xFFFFA8ABu; // 800AFB4C
  c->r[5]=0u+0x00000000u; // 800AFB50
  c->r[6]=0u+0x00002001u; // 800AFB54
  c->r[8]=0u+0x00000000u; // 800AFB58
  c->lr=0x800AFB60u; f_80242DF0(c); // 800AFB5C
  c->r[4]=c->r[3]|c->r[3]; // 800AFB60
  c->r[3]=0u+0x00000110u; // 800AFB64
  c->r[5]=c->r[13]+0xFFFFA8B0u; // 800AFB68
  c->r[6]=0u+0x00000000u; // 800AFB6C
  c->r[7]=0u+0x00001001u; // 800AFB70
  c->lr=0x800AFB78u; f_80244DB0(c); // 800AFB74
  cmps(c,0,(int32_t)c->r[3],0); // 800AFB78
  if (crb(c,2)) { goto L_800AFBA8; } // 800AFB7C
  c->lr=0x800AFB84u; f_800AFAA0(c); // 800AFB80
  goto L_800AFBA8; // 800AFB84
L_800AFB88:;
  c->r[3]=0u+0x00000110u; // 800AFB88
  c->r[4]=c->r[13]+0xFFFFA8B5u; // 800AFB8C
  c->r[5]=0u+0x00000000u; // 800AFB90
  c->r[6]=0u+0x00001001u; // 800AFB94
  c->lr=0x800AFB9Cu; f_80244D20(c); // 800AFB98
  cmps(c,0,(int32_t)c->r[3],0); // 800AFB9C
  if (crb(c,2)) { goto L_800AFBA8; } // 800AFBA0
  c->lr=0x800AFBA8u; f_800AFAA0(c); // 800AFBA4
L_800AFBA8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800AFBA8
  W16(c->r[3]+0x00000014u,c->r[0]); // 800AFBAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AFBB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFBB4
  c->lr=c->r[0]; // 800AFBB8
  c->r[1]=c->r[1]+0x00000010u; // 800AFBBC
  return; // 800AFBC0
}

// fn_800AFBC4
void f_800AFBC4(Ctx* __restrict c) {
  trace_call(0x800AFBC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFBC4
  c->r[0]=c->lr; // 800AFBC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFBCC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AFBD0
  c->r[29]=c->r[3]|c->r[3]; // 800AFBD4
  c->r[30]=c->r[4]|c->r[4]; // 800AFBD8
  c->lr=0x800AFBE0u; f_800AE514(c); // 800AFBDC
  c->r[31]=c->r[3]|c->r[3]; // 800AFBE0
  c->r[3]=c->r[30]|c->r[30]; // 800AFBE4
  c->lr=0x800AFBECu; f_8030C0A0(c); // 800AFBE8
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 800AFBEC
  c->r[3]=c->r[30]|c->r[30]; // 800AFBF0
  c->lr=0x800AFBF8u; f_8030C0A0(c); // 800AFBF4
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 800AFBF8
  c->r[3]=c->r[30]|c->r[30]; // 800AFBFC
  c->r[4]=0u+0x00000000u; // 800AFC00
  c->lr=0x800AFC08u; f_8030BE30(c); // 800AFC04
  W32(c->r[29]+0x00000100u,c->r[3]); // 800AFC08
  c->r[0]=0u+0x00000000u; // 800AFC0C
  c->r[3]=c->r[30]|c->r[30]; // 800AFC10
  W32(c->r[29]+0x00000104u,c->r[0]); // 800AFC14
  c->lr=0x800AFC1Cu; f_8030BD1C(c); // 800AFC18
  W32(c->r[29]+0x00000108u,c->r[3]); // 800AFC1C
  c->r[3]=c->r[31]|c->r[31]; // 800AFC20
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AFC24
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFC28
  c->lr=c->r[0]; // 800AFC2C
  c->r[1]=c->r[1]+0x00000020u; // 800AFC30
  return; // 800AFC34
}

// fn_800AFC38
void f_800AFC38(Ctx* __restrict c) {
  trace_call(0x800AFC38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFC38
  c->r[0]=c->lr; // 800AFC3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AFC40
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AFC44
  c->r[27]=c->r[3]|c->r[3]; // 800AFC48
  c->r[28]=c->r[4]|c->r[4]; // 800AFC4C
  c->r[29]=c->r[5]|c->r[5]; // 800AFC50
  c->r[30]=c->r[6]|c->r[6]; // 800AFC54
  c->r[7]=R32(c->r[3]+0x0000010Cu); // 800AFC58
  cmps(c,0,(int32_t)c->r[7],0); // 800AFC5C
  if (!crb(c,0)) { goto L_800AFC70; } // 800AFC60
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800AFC64
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 800AFC68
  goto L_800AFC80; // 800AFC6C
L_800AFC70:;
  c->r[0]=c->r[7]+0x00000001u; // 800AFC70
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 800AFC74
  cmps(c,0,(int32_t)c->r[0],1); // 800AFC78
  if (crb(c,1)) { goto L_800AFD40; } // 800AFC7C
L_800AFC80:;
  c->r[3]=c->r[27]|c->r[27]; // 800AFC80
  c->r[4]=c->r[28]|c->r[28]; // 800AFC84
  c->r[5]=c->r[29]|c->r[29]; // 800AFC88
  c->r[6]=c->r[30]|c->r[30]; // 800AFC8C
  c->lr=0x800AFC94u; f_800AE820(c); // 800AFC90
  c->r[4]=R32(c->r[27]+0x00000100u); // 800AFC94
  cmps(c,0,(int32_t)c->r[4],0); // 800AFC98
  if (crb(c,2)) { goto L_800AFD40; } // 800AFC9C
  c->r[0]=0u+0x00000001u; // 800AFCA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AFCA4
  c->r[6]=c->r[28]|c->r[28]; // 800AFCA8
  c->r[7]=c->r[29]|c->r[29]; // 800AFCAC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800AFCB0
  c->r[8]=c->r[30]|c->r[30]; // 800AFCB4
  c->r[9]=R32(c->r[27]+0x00000108u); // 800AFCB8
  c->r[5]=0u+0x00000000u; // 800AFCBC
  c->r[10]=0u+0x00000001u; // 800AFCC0
  c->lr=0x800AFCC8u; f_80281A84(c); // 800AFCC4
  cmps(c,0,(int32_t)c->r[3],0); // 800AFCC8
  W32(c->r[27]+0x00000104u,c->r[3]); // 800AFCCC
  if (crb(c,2)) { goto L_800AFCDC; } // 800AFCD0
  c->lr=0x800AFCD8u; f_80295B6C(c); // 800AFCD4
  goto L_800AFD40; // 800AFCD8
L_800AFCDC:;
  c->r[3]=R32(c->r[27]+0x00000108u); // 800AFCDC
  c->r[4]=c->r[30]|c->r[30]; // 800AFCE0
  c->r[5]=c->r[29]|c->r[29]; // 800AFCE4
  c->lr=0x800AFCECu; f_802C0F98(c); // 800AFCE8
  c->r[31]=c->r[3]|c->r[3]; // 800AFCEC
  c->r[3]=0u+0x00000044u; // 800AFCF0
  c->r[4]=c->r[13]+0xFFFFA8BAu; // 800AFCF4
  c->r[5]=0u+0x00000000u; // 800AFCF8
  c->r[6]=0u+0x00001001u; // 800AFCFC
  c->lr=0x800AFD04u; f_80244D20(c); // 800AFD00
  cmps(c,0,(int32_t)c->r[3],0); // 800AFD04
  if (crb(c,2)) { goto L_800AFD1C; } // 800AFD08
  c->r[5]=R32(c->r[27]+0x00000100u); // 800AFD0C
  c->r[4]=c->r[31]|c->r[31]; // 800AFD10
  c->r[6]=0u+0x00000000u; // 800AFD14
  c->lr=0x800AFD1Cu; f_8029316C(c); // 800AFD18
L_800AFD1C:;
  W32(c->r[27]+0x00000104u,c->r[3]); // 800AFD1C
  c->r[4]=c->r[28]|c->r[28]; // 800AFD20
  c->r[7]=R32(c->r[27]+0x00000108u); // 800AFD24
  c->r[5]=c->r[29]|c->r[29]; // 800AFD28
  c->r[6]=c->r[30]|c->r[30]; // 800AFD2C
  c->r[8]=0u+0x00000001u; // 800AFD30
  c->r[9]=0u+0x00000000u; // 800AFD34
  c->lr=0x800AFD3Cu; f_8027FFF4(c); // 800AFD38
  W32(c->r[27]+0x00000104u,c->r[3]); // 800AFD3C
L_800AFD40:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AFD40
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AFD44
  c->lr=c->r[0]; // 800AFD48
  c->r[1]=c->r[1]+0x00000030u; // 800AFD4C
  return; // 800AFD50
}

// fn_800AFD54
void f_800AFD54(Ctx* __restrict c) {
  trace_call(0x800AFD54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFD54
  c->r[0]=c->lr; // 800AFD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFD5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFD60
  c->r[31]=c->r[3]|c->r[3]; // 800AFD64
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 800AFD68
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800AFD6C
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 800AFD70
  if (!crb(c,2)) { goto L_800AFD94; } // 800AFD74
  c->lr=0x800AFD7Cu; f_800AE9E8(c); // 800AFD78
  c->r[3]=R32(c->r[31]+0x00000104u); // 800AFD7C
  cmps(c,0,(int32_t)c->r[3],0); // 800AFD80
  if (crb(c,2)) { goto L_800AFD94; } // 800AFD84
  c->lr=0x800AFD8Cu; f_80295B7C(c); // 800AFD88
  c->r[0]=0u+0x00000000u; // 800AFD8C
  W32(c->r[31]+0x00000104u,c->r[0]); // 800AFD90
L_800AFD94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFD94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFD98
  c->lr=c->r[0]; // 800AFD9C
  c->r[1]=c->r[1]+0x00000010u; // 800AFDA0
  return; // 800AFDA4
}

// fn_800AFDA8
void f_800AFDA8(Ctx* __restrict c) {
  trace_call(0x800AFDA8u);
  return; // 800AFDA8
}

// fn_800AFDAC
void f_800AFDAC(Ctx* __restrict c) {
  trace_call(0x800AFDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFDAC
  c->r[0]=c->lr; // 800AFDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFDB8
  c->r[31]=c->r[3]|c->r[3]; // 800AFDBC
  c->lr=0x800AFDC4u; f_800AEA58(c); // 800AFDC0
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFDC4
  c->r[3]=0u+0x00000000u; // 800AFDC8
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFDCC
  c->r[0]=0u+0x00000004u; // 800AFDD0
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[1]);} // 800AFDD4
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 800AFDD8
  W32(c->r[31]+0x00000100u,c->r[3]); // 800AFDDC
  W32(c->r[31]+0x00000104u,c->r[3]); // 800AFDE0
  W32(c->r[31]+0x00000108u,c->r[0]); // 800AFDE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFDE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFDEC
  c->lr=c->r[0]; // 800AFDF0
  c->r[1]=c->r[1]+0x00000010u; // 800AFDF4
  return; // 800AFDF8
}

// fn_800AFDFC
void f_800AFDFC(Ctx* __restrict c) {
  trace_call(0x800AFDFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFDFC
  c->r[0]=c->lr; // 800AFE00
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFE04
  c->r[11]=c->r[1]+0x00000020u; // 800AFE08
  c->lr=0x800AFE10u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AFE0C
  c->r[28]=c->r[3]|c->r[3]; // 800AFE10
  c->r[29]=c->r[4]|c->r[4]; // 800AFE14
  c->r[30]=c->r[5]|c->r[5]; // 800AFE18
  c->r[31]=c->r[7]|c->r[7]; // 800AFE1C
  c->r[6]=0u+0x00000000u; // 800AFE20
  c->lr=0x800AFE28u; f_800AEB9C(c); // 800AFE24
  cmps(c,0,(int32_t)c->r[30],0); // 800AFE28
  if (crb(c,2)) { goto L_800AFE34; } // 800AFE2C
  goto L_800AFE38; // 800AFE30
L_800AFE34:;
  c->r[30]=c->r[28]|c->r[28]; // 800AFE34
L_800AFE38:;
  {uint32_t ea=c->r[29]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFE38
  c->r[3]=c->r[30]+0x00000100u; // 800AFE3C
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[0]);} // 800AFE40
  c->r[4]=c->r[29]+0x00000100u; // 800AFE44
  {uint32_t ea=c->r[29]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFE48
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 800AFE4C
  c->lr=0x800AFE54u; f_8003BDD0(c); // 800AFE50
  cmps(c,0,(int32_t)c->r[31],0); // 800AFE54
  if (crb(c,2)) { goto L_800AFE7C; } // 800AFE58
  c->r[3]=R32(c->r[28]+0x0000010Cu); // 800AFE5C
  cmps(c,0,(int32_t)c->r[3],0); // 800AFE60
  if (crb(c,1)) { goto L_800AFE74; } // 800AFE64
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AFE68
  W32(c->r[28]+0x0000010Cu,c->r[0]); // 800AFE6C
  goto L_800AFE7C; // 800AFE70
L_800AFE74:;
  c->r[0]=c->r[3]+0x00000001u; // 800AFE74
  W32(c->r[28]+0x0000010Cu,c->r[0]); // 800AFE78
L_800AFE7C:;
  c->r[11]=c->r[1]+0x00000020u; // 800AFE7C
  c->lr=0x800AFE84u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AFE80
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFE84
  c->lr=c->r[0]; // 800AFE88
  c->r[1]=c->r[1]+0x00000020u; // 800AFE8C
  return; // 800AFE90
}

// fn_800AFE94
void f_800AFE94(Ctx* __restrict c) {
  trace_call(0x800AFE94u);
  c->r[3]=0u+0x25A50000u; // 800AFE94
  c->r[0]=c->r[3]+0xFFFFFEB2u; // 800AFE98
  c->r[0]=c->r[4]-c->r[0]; // 800AFE9C
  c->r[0]=cntlz(c->r[0]); // 800AFEA0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800AFEA4
  return; // 800AFEA8
}

// fn_800AFEAC
void f_800AFEAC(Ctx* __restrict c) {
  trace_call(0x800AFEACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFEAC
  c->r[0]=c->lr; // 800AFEB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AFEB4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800AFEB8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800AFEBC
  c->r[11]=c->r[1]+0x00000020u; // 800AFEC0
  c->lr=0x800AFEC8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AFEC4
  c->f[31]=c->f[1]; // 800AFEC8
  c->r[29]=c->r[3]|c->r[3]; // 800AFECC
  c->r[31]=c->r[4]|c->r[4]; // 800AFED0
  c->r[30]=c->r[5]|c->r[5]; // 800AFED4
  c->lr=0x800AFEDCu; f_800AEDE0(c); // 800AFED8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFEDC
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFEE0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800AFEE4
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFEE8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800AFEEC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AFEF0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AFEF4
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 800AFEF8
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFEFC
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFF00
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AFF04
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800AFF08
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AFF0C
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[0]);} // 800AFF10
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800AFF14
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800AFF18
  c->r[11]=c->r[1]+0x00000020u; // 800AFF1C
  c->lr=0x800AFF24u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AFF20
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AFF24
  c->lr=c->r[0]; // 800AFF28
  c->r[1]=c->r[1]+0x00000030u; // 800AFF2C
  return; // 800AFF30
}

// fn_800AFF34
void f_800AFF34(Ctx* __restrict c) {
  trace_call(0x800AFF34u);
  c->r[3]=0u+0x00000110u; // 800AFF34
  return; // 800AFF38
}

// fn_800AFF3C
void f_800AFF3C(Ctx* __restrict c) {
  trace_call(0x800AFF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFF3C
  c->r[0]=c->lr; // 800AFF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFF44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AFF48
  c->r[31]=c->r[3]|c->r[3]; // 800AFF4C
  c->lr=0x800AFF54u; f_800AFAA0(c); // 800AFF50
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AFF54
  c->r[3]=0u+0x80420000u; // 800AFF58
  c->r[3]=c->r[3]+0xFFFFB2E0u; // 800AFF5C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AFF60
  c->r[0]=c->r[0]|0x80000000u; // 800AFF64
  W32(c->r[31]+0x00000008u,c->r[0]); // 800AFF68
  c->r[3]=c->r[31]|c->r[31]; // 800AFF6C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800AFF70
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AFF74
  c->ctr=c->r[12]; // 800AFF78
  if (true) { c->lr=0x800AFF80u; dispatch(c,c->ctr); } // 800AFF7C
  c->r[3]=c->r[31]|c->r[31]; // 800AFF80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AFF84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFF88
  c->lr=c->r[0]; // 800AFF8C
  c->r[1]=c->r[1]+0x00000010u; // 800AFF90
  return; // 800AFF94
}

// fn_800AFF98
void f_800AFF98(Ctx* __restrict c) {
  trace_call(0x800AFF98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFF98
  c->r[0]=c->lr; // 800AFF9C
  cmps(c,0,(int32_t)c->r[3],0); // 800AFFA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFFA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AFFA8
  c->r[30]=c->r[3]|c->r[3]; // 800AFFAC
  c->r[31]=c->r[4]|c->r[4]; // 800AFFB0
  if (crb(c,2)) { goto L_800AFFD4; } // 800AFFB4
  if (crb(c,2)) { goto L_800AFFC4; } // 800AFFB8
  c->r[4]=0u+0x00000000u; // 800AFFBC
  c->lr=0x800AFFC4u; f_802B1180(c); // 800AFFC0
L_800AFFC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AFFC4
  if (!crb(c,1)) { goto L_800AFFD4; } // 800AFFC8
  c->r[3]=c->r[30]|c->r[30]; // 800AFFCC
  c->lr=0x800AFFD4u; f_80244DC0(c); // 800AFFD0
L_800AFFD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800AFFD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AFFD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AFFDC
  c->lr=c->r[0]; // 800AFFE0
  c->r[1]=c->r[1]+0x00000010u; // 800AFFE4
  return; // 800AFFE8
}

// fn_800AFFEC
void f_800AFFEC(Ctx* __restrict c) {
  trace_call(0x800AFFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFFEC
  c->r[0]=c->lr; // 800AFFF0
  c->r[3]=0u+0x00000110u; // 800AFFF4
  c->r[4]=c->r[13]+0xFFFFA8BFu; // 800AFFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AFFFC
  c->r[5]=0u+0x00000000u; // 800B0000
  c->r[6]=0u+0x00001001u; // 800B0004
  c->lr=0x800B000Cu; f_80244D20(c); // 800B0008
  cmps(c,0,(int32_t)c->r[3],0); // 800B000C
  if (crb(c,2)) { goto L_800B0018; } // 800B0010
  c->lr=0x800B0018u; f_800AFF3C(c); // 800B0014
L_800B0018:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0018
  c->lr=c->r[0]; // 800B001C
  c->r[1]=c->r[1]+0x00000010u; // 800B0020
  return; // 800B0024
}

// fn_800B0028
void f_800B0028(Ctx* __restrict c) {
  trace_call(0x800B0028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0028
  c->r[0]=c->lr; // 800B002C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0034
  c->r[31]=c->r[3]|c->r[3]; // 800B0038
  c->lr=0x800B0040u; f_80244520(c); // 800B003C
  c->r[7]=c->r[3]|c->r[3]; // 800B0040
  c->r[9]=c->r[31]|c->r[31]; // 800B0044
  c->r[3]=0u+0x00000110u; // 800B0048
  c->r[4]=c->r[13]+0xFFFFA8C4u; // 800B004C
  c->r[5]=0u+0x00000000u; // 800B0050
  c->r[6]=0u+0x00002001u; // 800B0054
  c->r[8]=0u+0x00000000u; // 800B0058
  c->lr=0x800B0060u; f_80242DF0(c); // 800B005C
  c->r[4]=c->r[3]|c->r[3]; // 800B0060
  c->r[3]=0u+0x00000110u; // 800B0064
  c->r[5]=c->r[13]+0xFFFFA8C9u; // 800B0068
  c->r[6]=0u+0x00000000u; // 800B006C
  c->r[7]=0u+0x00001001u; // 800B0070
  c->lr=0x800B0078u; f_80244DB0(c); // 800B0074
  cmps(c,0,(int32_t)c->r[3],0); // 800B0078
  if (crb(c,2)) { goto L_800B0084; } // 800B007C
  c->lr=0x800B0084u; f_800AFF3C(c); // 800B0080
L_800B0084:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0088
  c->lr=c->r[0]; // 800B008C
  c->r[1]=c->r[1]+0x00000010u; // 800B0090
  return; // 800B0094
}

// fn_800B0098
void f_800B0098(Ctx* __restrict c) {
  trace_call(0x800B0098u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0098
  c->r[0]=c->lr; // 800B009C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B00A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B00A4
  c->r[31]=c->r[3]|c->r[3]; // 800B00A8
  c->lr=0x800B00B0u; f_800AE3F0(c); // 800B00AC
  c->r[8]=0u+0x80420000u; // 800B00B0
  c->r[6]=0u+0x80410000u; // 800B00B4
  c->r[7]=0u+0x00000000u; // 800B00B8
  c->r[5]=0u+0x21440000u; // 800B00BC
  c->r[4]=0u+0x46D40000u; // 800B00C0
  c->r[3]=0u+0x3FB80000u; // 800B00C4
  c->r[0]=c->r[3]+0x00001399u; // 800B00C8
  c->r[8]=c->r[8]+0xFFFFB2A4u; // 800B00CC
  c->r[6]=c->r[6]+0xFFFFC9B9u; // 800B00D0
  c->r[5]=c->r[5]+0x00003472u; // 800B00D4
  c->r[4]=c->r[4]+0xFFFFACC3u; // 800B00D8
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B00DC
  c->r[3]=c->r[31]|c->r[31]; // 800B00E0
  W32(c->r[31]+0x000000F8u,c->r[7]); // 800B00E4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B00E8
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B00EC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B00F0
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B00F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B00F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B00FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0100
  c->lr=c->r[0]; // 800B0104
  c->r[1]=c->r[1]+0x00000010u; // 800B0108
  return; // 800B010C
}

// fn_800B0110
void f_800B0110(Ctx* __restrict c) {
  trace_call(0x800B0110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0110
  c->r[0]=c->lr; // 800B0114
  cmps(c,0,(int32_t)c->r[4],0); // 800B0118
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B011C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B0120
  c->r[30]=c->r[3]|c->r[3]; // 800B0124
  c->r[31]=c->r[4]|c->r[4]; // 800B0128
  if (crb(c,2)) { goto L_800B0180; } // 800B012C
  c->r[3]=c->r[31]|c->r[31]; // 800B0130
  c->lr=0x800B0138u; f_80244520(c); // 800B0134
  c->r[7]=c->r[3]|c->r[3]; // 800B0138
  c->r[9]=c->r[31]|c->r[31]; // 800B013C
  c->r[3]=0u+0x000000FCu; // 800B0140
  c->r[4]=c->r[13]+0xFFFFA8CEu; // 800B0144
  c->r[5]=0u+0x00000000u; // 800B0148
  c->r[6]=0u+0x00002001u; // 800B014C
  c->r[8]=0u+0x00000000u; // 800B0150
  c->lr=0x800B0158u; f_80242DF0(c); // 800B0154
  c->r[4]=c->r[3]|c->r[3]; // 800B0158
  c->r[3]=0u+0x000000FCu; // 800B015C
  c->r[5]=c->r[13]+0xFFFFA8D3u; // 800B0160
  c->r[6]=0u+0x00000000u; // 800B0164
  c->r[7]=0u+0x00001001u; // 800B0168
  c->lr=0x800B0170u; f_80244DB0(c); // 800B016C
  cmps(c,0,(int32_t)c->r[3],0); // 800B0170
  if (crb(c,2)) { goto L_800B01A0; } // 800B0174
  c->lr=0x800B017Cu; f_800B0098(c); // 800B0178
  goto L_800B01A0; // 800B017C
L_800B0180:;
  c->r[3]=0u+0x000000FCu; // 800B0180
  c->r[4]=c->r[13]+0xFFFFA8D8u; // 800B0184
  c->r[5]=0u+0x00000000u; // 800B0188
  c->r[6]=0u+0x00001001u; // 800B018C
  c->lr=0x800B0194u; f_80244D20(c); // 800B0190
  cmps(c,0,(int32_t)c->r[3],0); // 800B0194
  if (crb(c,2)) { goto L_800B01A0; } // 800B0198
  c->lr=0x800B01A0u; f_800B0098(c); // 800B019C
L_800B01A0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B01A0
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B01A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B01A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B01AC
  c->lr=c->r[0]; // 800B01B0
  c->r[1]=c->r[1]+0x00000010u; // 800B01B4
  return; // 800B01B8
}

// fn_800B01BC
void f_800B01BC(Ctx* __restrict c) {
  trace_call(0x800B01BCu);
  f_800AE514(c); return; // 800B01BC
}

// fn_800B01C0
void f_800B01C0(Ctx* __restrict c) {
  trace_call(0x800B01C0u);
  c->r[7]=R32(c->r[3]+0x000000F8u); // 800B01C0
  cmps(c,0,(int32_t)c->r[7],0); // 800B01C4
  if (!crb(c,0)) { goto L_800B01D8; } // 800B01C8
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B01CC
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B01D0
  goto L_800B01E8; // 800B01D4
L_800B01D8:;
  c->r[0]=c->r[7]+0x00000001u; // 800B01D8
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B01DC
  cmps(c,0,(int32_t)c->r[0],1); // 800B01E0
  if (crb(c,1)) return; // 800B01E4
L_800B01E8:;
  f_800AE820(c); return; // 800B01E8
  return; // 800B01EC
}

// fn_800B01F0
void f_800B01F0(Ctx* __restrict c) {
  trace_call(0x800B01F0u);
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800B01F0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B01F4
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B01F8
  if (!crb(c,2)) return; // 800B01FC
  f_800AE9E8(c); return; // 800B0200
  return; // 800B0204
}

// fn_800B0208
void f_800B0208(Ctx* __restrict c) {
  trace_call(0x800B0208u);
  return; // 800B0208
}

// fn_800B020C
void f_800B020C(Ctx* __restrict c) {
  trace_call(0x800B020Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B020C
  c->r[0]=c->lr; // 800B0210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0218
  c->r[31]=c->r[3]|c->r[3]; // 800B021C
  c->lr=0x800B0224u; f_800AEA58(c); // 800B0220
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[13]=c->ps1[13]=RF32(ea);} // 800B0224
  c->r[7]=0u+0xB2CC0000u; // 800B0228
  c->r[6]=0u+0x00000000u; // 800B022C
  c->r[3]=0u+0x0000007Fu; // 800B0230
  c->r[4]=0u+0x00000001u; // 800B0234
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 800B0238
  c->r[5]=0u+0x00000004u; // 800B023C
  {uint32_t ea=c->r[2]+0xFFFF86F8u; c->f[12]=c->ps1[12]=RF32(ea);} // 800B0240
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[10]=c->ps1[10]=RF32(ea);} // 800B0244
  c->r[7]=c->r[7]+0xFFFFF202u; // 800B0248
  {uint32_t ea=c->r[2]+0xFFFF87C4u; c->f[9]=c->ps1[9]=RF32(ea);} // 800B024C
  c->r[0]=0u+0x00000019u; // 800B0250
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B0254
  {uint32_t ea=c->r[2]+0xFFFF86E8u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B0258
  {uint32_t ea=c->r[2]+0xFFFF87C8u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B025C
  {uint32_t ea=c->r[2]+0xFFFF8704u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B0260
  {uint32_t ea=c->r[2]+0xFFFF86C4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B0264
  {uint32_t ea=c->r[2]+0xFFFF872Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0268
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B026C
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0270
  {uint32_t ea=c->r[2]+0xFFFF87CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0274
  W32(c->r[31]+0x0000001Cu,c->r[7]); // 800B0278
  W32(c->r[31]+0x00000020u,c->r[6]); // 800B027C
  W32(c->r[31]+0x00000024u,c->r[5]); // 800B0280
  W32(c->r[31]+0x00000034u,c->r[5]); // 800B0284
  W8(c->r[31]+0x00000038u,c->r[4]); // 800B0288
  W8(c->r[31]+0x00000039u,c->r[4]); // 800B028C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[13]);} // 800B0290
  W32(c->r[31]+0x0000004Cu,c->r[6]); // 800B0294
  W8(c->r[31]+0x00000050u,c->r[6]); // 800B0298
  W8(c->r[31]+0x00000051u,c->r[3]); // 800B029C
  W8(c->r[31]+0x00000052u,c->r[6]); // 800B02A0
  W8(c->r[31]+0x00000053u,c->r[3]); // 800B02A4
  W8(c->r[31]+0x00000054u,c->r[6]); // 800B02A8
  W8(c->r[31]+0x00000055u,c->r[3]); // 800B02AC
  W8(c->r[31]+0x00000056u,c->r[3]); // 800B02B0
  W8(c->r[31]+0x00000057u,c->r[3]); // 800B02B4
  W32(c->r[31]+0x00000058u,c->r[0]); // 800B02B8
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[12]);} // 800B02BC
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[11]);} // 800B02C0
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[10]);} // 800B02C4
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[11]);} // 800B02C8
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[9]);} // 800B02CC
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 800B02D0
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[8]);} // 800B02D4
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[7]);} // 800B02D8
  W8(c->r[31]+0x00000090u,c->r[6]); // 800B02DC
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[6]);} // 800B02E0
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[5]);} // 800B02E4
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[4]);} // 800B02E8
  W8(c->r[31]+0x000000ACu,c->r[4]); // 800B02EC
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[13]);} // 800B02F0
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[3]);} // 800B02F4
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[13]);} // 800B02F8
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[11]);} // 800B02FC
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[2]);} // 800B0300
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[1]);} // 800B0304
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 800B0308
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[13]);} // 800B030C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0310
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0314
  c->lr=c->r[0]; // 800B0318
  c->r[1]=c->r[1]+0x00000010u; // 800B031C
  return; // 800B0320
}

// fn_800B0324
void f_800B0324(Ctx* __restrict c) {
  trace_call(0x800B0324u);
  c->r[3]=0u+0x25A50000u; // 800B0324
  c->r[0]=c->r[3]+0xFFFFFEB2u; // 800B0328
  c->r[0]=c->r[4]-c->r[0]; // 800B032C
  c->r[0]=cntlz(c->r[0]); // 800B0330
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B0334
  return; // 800B0338
}

// fn_800B033C
void f_800B033C(Ctx* __restrict c) {
  trace_call(0x800B033Cu);
  f_800AEDE0(c); return; // 800B033C
}

// fn_800B0340
void f_800B0340(Ctx* __restrict c) {
  trace_call(0x800B0340u);
  c->r[3]=0u+0x000000FCu; // 800B0340
  return; // 800B0344
}

// fn_800B0348
void f_800B0348(Ctx* __restrict c) {
  trace_call(0x800B0348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0348
  c->r[0]=c->lr; // 800B034C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0354
  c->r[31]=c->r[3]|c->r[3]; // 800B0358
  c->lr=0x800B0360u; f_800B0098(c); // 800B035C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B0360
  c->r[3]=0u+0x80420000u; // 800B0364
  c->r[3]=c->r[3]+0xFFFFB264u; // 800B0368
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B036C
  c->r[0]=c->r[0]|0x80000000u; // 800B0370
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B0374
  c->r[3]=c->r[31]|c->r[31]; // 800B0378
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B037C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B0380
  c->ctr=c->r[12]; // 800B0384
  if (true) { c->lr=0x800B038Cu; dispatch(c,c->ctr); } // 800B0388
  c->r[3]=c->r[31]|c->r[31]; // 800B038C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0390
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0394
  c->lr=c->r[0]; // 800B0398
  c->r[1]=c->r[1]+0x00000010u; // 800B039C
  return; // 800B03A0
}

// fn_800B03A4
void f_800B03A4(Ctx* __restrict c) {
  trace_call(0x800B03A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B03A4
  c->r[0]=c->lr; // 800B03A8
  cmps(c,0,(int32_t)c->r[3],0); // 800B03AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B03B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B03B4
  c->r[30]=c->r[3]|c->r[3]; // 800B03B8
  c->r[31]=c->r[4]|c->r[4]; // 800B03BC
  if (crb(c,2)) { goto L_800B03E0; } // 800B03C0
  if (crb(c,2)) { goto L_800B03D0; } // 800B03C4
  c->r[4]=0u+0x00000000u; // 800B03C8
  c->lr=0x800B03D0u; f_802B1180(c); // 800B03CC
L_800B03D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B03D0
  if (!crb(c,1)) { goto L_800B03E0; } // 800B03D4
  c->r[3]=c->r[30]|c->r[30]; // 800B03D8
  c->lr=0x800B03E0u; f_80244DC0(c); // 800B03DC
L_800B03E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800B03E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B03E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B03E8
  c->lr=c->r[0]; // 800B03EC
  c->r[1]=c->r[1]+0x00000010u; // 800B03F0
  return; // 800B03F4
}

// fn_800B03F8
void f_800B03F8(Ctx* __restrict c) {
  trace_call(0x800B03F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B03F8
  c->r[0]=c->lr; // 800B03FC
  c->r[3]=0u+0x000000FCu; // 800B0400
  c->r[4]=c->r[13]+0xFFFFA8DDu; // 800B0404
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0408
  c->r[5]=0u+0x00000000u; // 800B040C
  c->r[6]=0u+0x00001001u; // 800B0410
  c->lr=0x800B0418u; f_80244D20(c); // 800B0414
  cmps(c,0,(int32_t)c->r[3],0); // 800B0418
  if (crb(c,2)) { goto L_800B0424; } // 800B041C
  c->lr=0x800B0424u; f_800B0348(c); // 800B0420
L_800B0424:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0424
  c->lr=c->r[0]; // 800B0428
  c->r[1]=c->r[1]+0x00000010u; // 800B042C
  return; // 800B0430
}

// fn_800B0434
void f_800B0434(Ctx* __restrict c) {
  trace_call(0x800B0434u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0434
  c->r[0]=c->lr; // 800B0438
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B043C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0440
  c->r[31]=c->r[3]|c->r[3]; // 800B0444
  c->lr=0x800B044Cu; f_80244520(c); // 800B0448
  c->r[7]=c->r[3]|c->r[3]; // 800B044C
  c->r[9]=c->r[31]|c->r[31]; // 800B0450
  c->r[3]=0u+0x000000FCu; // 800B0454
  c->r[4]=c->r[13]+0xFFFFA8E2u; // 800B0458
  c->r[5]=0u+0x00000000u; // 800B045C
  c->r[6]=0u+0x00002001u; // 800B0460
  c->r[8]=0u+0x00000000u; // 800B0464
  c->lr=0x800B046Cu; f_80242DF0(c); // 800B0468
  c->r[4]=c->r[3]|c->r[3]; // 800B046C
  c->r[3]=0u+0x000000FCu; // 800B0470
  c->r[5]=c->r[13]+0xFFFFA8E7u; // 800B0474
  c->r[6]=0u+0x00000000u; // 800B0478
  c->r[7]=0u+0x00001001u; // 800B047C
  c->lr=0x800B0484u; f_80244DB0(c); // 800B0480
  cmps(c,0,(int32_t)c->r[3],0); // 800B0484
  if (crb(c,2)) { goto L_800B0490; } // 800B0488
  c->lr=0x800B0490u; f_800B0348(c); // 800B048C
L_800B0490:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0490
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0494
  c->lr=c->r[0]; // 800B0498
  c->r[1]=c->r[1]+0x00000010u; // 800B049C
  return; // 800B04A0
}

// fn_800B04A4
void f_800B04A4(Ctx* __restrict c) {
  trace_call(0x800B04A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B04A4
  c->r[0]=c->lr; // 800B04A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B04AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B04B0
  c->r[31]=c->r[3]|c->r[3]; // 800B04B4
  c->lr=0x800B04BCu; f_800AE3F0(c); // 800B04B8
  c->r[8]=0u+0x80420000u; // 800B04BC
  c->r[6]=0u+0x80410000u; // 800B04C0
  c->r[7]=0u+0x00000000u; // 800B04C4
  c->r[5]=0u+0x21440000u; // 800B04C8
  c->r[4]=0u+0xEA370000u; // 800B04CC
  c->r[3]=0u+0x14EB0000u; // 800B04D0
  c->r[0]=c->r[3]+0xFFFFF11Eu; // 800B04D4
  c->r[8]=c->r[8]+0xFFFFB228u; // 800B04D8
  c->r[6]=c->r[6]+0xFFFFC9D8u; // 800B04DC
  c->r[5]=c->r[5]+0x00003472u; // 800B04E0
  c->r[4]=c->r[4]+0xFFFFFD32u; // 800B04E4
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B04E8
  c->r[3]=c->r[31]|c->r[31]; // 800B04EC
  W32(c->r[31]+0x000000F8u,c->r[7]); // 800B04F0
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B04F4
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B04F8
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B04FC
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B0500
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B0504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0508
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B050C
  c->lr=c->r[0]; // 800B0510
  c->r[1]=c->r[1]+0x00000010u; // 800B0514
  return; // 800B0518
}

// fn_800B051C
void f_800B051C(Ctx* __restrict c) {
  trace_call(0x800B051Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B051C
  c->r[0]=c->lr; // 800B0520
  cmps(c,0,(int32_t)c->r[4],0); // 800B0524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0528
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B052C
  c->r[30]=c->r[3]|c->r[3]; // 800B0530
  c->r[31]=c->r[4]|c->r[4]; // 800B0534
  if (crb(c,2)) { goto L_800B058C; } // 800B0538
  c->r[3]=c->r[31]|c->r[31]; // 800B053C
  c->lr=0x800B0544u; f_80244520(c); // 800B0540
  c->r[7]=c->r[3]|c->r[3]; // 800B0544
  c->r[9]=c->r[31]|c->r[31]; // 800B0548
  c->r[3]=0u+0x000000FCu; // 800B054C
  c->r[4]=c->r[13]+0xFFFFA8ECu; // 800B0550
  c->r[5]=0u+0x00000000u; // 800B0554
  c->r[6]=0u+0x00002001u; // 800B0558
  c->r[8]=0u+0x00000000u; // 800B055C
  c->lr=0x800B0564u; f_80242DF0(c); // 800B0560
  c->r[4]=c->r[3]|c->r[3]; // 800B0564
  c->r[3]=0u+0x000000FCu; // 800B0568
  c->r[5]=c->r[13]+0xFFFFA8F1u; // 800B056C
  c->r[6]=0u+0x00000000u; // 800B0570
  c->r[7]=0u+0x00001001u; // 800B0574
  c->lr=0x800B057Cu; f_80244DB0(c); // 800B0578
  cmps(c,0,(int32_t)c->r[3],0); // 800B057C
  if (crb(c,2)) { goto L_800B05AC; } // 800B0580
  c->lr=0x800B0588u; f_800B04A4(c); // 800B0584
  goto L_800B05AC; // 800B0588
L_800B058C:;
  c->r[3]=0u+0x000000FCu; // 800B058C
  c->r[4]=c->r[13]+0xFFFFA8F6u; // 800B0590
  c->r[5]=0u+0x00000000u; // 800B0594
  c->r[6]=0u+0x00001001u; // 800B0598
  c->lr=0x800B05A0u; f_80244D20(c); // 800B059C
  cmps(c,0,(int32_t)c->r[3],0); // 800B05A0
  if (crb(c,2)) { goto L_800B05AC; } // 800B05A4
  c->lr=0x800B05ACu; f_800B04A4(c); // 800B05A8
L_800B05AC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B05AC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B05B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B05B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B05B8
  c->lr=c->r[0]; // 800B05BC
  c->r[1]=c->r[1]+0x00000010u; // 800B05C0
  return; // 800B05C4
}

// fn_800B05C8
void f_800B05C8(Ctx* __restrict c) {
  trace_call(0x800B05C8u);
  f_800AE514(c); return; // 800B05C8
}

// fn_800B05CC
void f_800B05CC(Ctx* __restrict c) {
  trace_call(0x800B05CCu);
  c->r[7]=R32(c->r[3]+0x000000F8u); // 800B05CC
  cmps(c,0,(int32_t)c->r[7],0); // 800B05D0
  if (!crb(c,0)) { goto L_800B05E4; } // 800B05D4
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B05D8
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B05DC
  goto L_800B05F4; // 800B05E0
L_800B05E4:;
  c->r[0]=c->r[7]+0x00000001u; // 800B05E4
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B05E8
  cmps(c,0,(int32_t)c->r[0],1); // 800B05EC
  if (crb(c,1)) return; // 800B05F0
L_800B05F4:;
  f_800AE820(c); return; // 800B05F4
  return; // 800B05F8
}

// fn_800B05FC
void f_800B05FC(Ctx* __restrict c) {
  trace_call(0x800B05FCu);
  c->r[0]=R32(c->r[3]+0x000000F8u); // 800B05FC
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B0600
  W32(c->r[3]+0x000000F8u,c->r[0]); // 800B0604
  if (!crb(c,2)) return; // 800B0608
  f_800AE9E8(c); return; // 800B060C
  return; // 800B0610
}

// fn_800B0614
void f_800B0614(Ctx* __restrict c) {
  trace_call(0x800B0614u);
  return; // 800B0614
}

// fn_800B0618
void f_800B0618(Ctx* __restrict c) {
  trace_call(0x800B0618u);
  f_800AEA58(c); return; // 800B0618
}

// fn_800B061C
void f_800B061C(Ctx* __restrict c) {
  trace_call(0x800B061Cu);
  c->r[3]=0u+0x25A50000u; // 800B061C
  c->r[0]=c->r[3]+0xFFFFFEB2u; // 800B0620
  c->r[0]=c->r[4]-c->r[0]; // 800B0624
  c->r[0]=cntlz(c->r[0]); // 800B0628
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B062C
  return; // 800B0630
}

// fn_800B0634
void f_800B0634(Ctx* __restrict c) {
  trace_call(0x800B0634u);
  f_800AEDE0(c); return; // 800B0634
}

// fn_800B0638
void f_800B0638(Ctx* __restrict c) {
  trace_call(0x800B0638u);
  c->r[3]=0u+0x000000FCu; // 800B0638
  return; // 800B063C
}

// fn_800B0640
void f_800B0640(Ctx* __restrict c) {
  trace_call(0x800B0640u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0640
  c->r[0]=c->lr; // 800B0644
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B064C
  c->r[31]=c->r[3]|c->r[3]; // 800B0650
  c->lr=0x800B0658u; f_800B04A4(c); // 800B0654
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B0658
  c->r[3]=0u+0x80420000u; // 800B065C
  c->r[3]=c->r[3]+0xFFFFB1E8u; // 800B0660
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B0664
  c->r[0]=c->r[0]|0x80000000u; // 800B0668
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B066C
  c->r[3]=c->r[31]|c->r[31]; // 800B0670
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B0674
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B0678
  c->ctr=c->r[12]; // 800B067C
  if (true) { c->lr=0x800B0684u; dispatch(c,c->ctr); } // 800B0680
  c->r[3]=c->r[31]|c->r[31]; // 800B0684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0688
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B068C
  c->lr=c->r[0]; // 800B0690
  c->r[1]=c->r[1]+0x00000010u; // 800B0694
  return; // 800B0698
}

// fn_800B069C
void f_800B069C(Ctx* __restrict c) {
  trace_call(0x800B069Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B069C
  c->r[0]=c->lr; // 800B06A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B06A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B06A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B06AC
  c->r[30]=c->r[3]|c->r[3]; // 800B06B0
  c->r[31]=c->r[4]|c->r[4]; // 800B06B4
  if (crb(c,2)) { goto L_800B06D8; } // 800B06B8
  if (crb(c,2)) { goto L_800B06C8; } // 800B06BC
  c->r[4]=0u+0x00000000u; // 800B06C0
  c->lr=0x800B06C8u; f_802B1180(c); // 800B06C4
L_800B06C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B06C8
  if (!crb(c,1)) { goto L_800B06D8; } // 800B06CC
  c->r[3]=c->r[30]|c->r[30]; // 800B06D0
  c->lr=0x800B06D8u; f_80244DC0(c); // 800B06D4
L_800B06D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800B06D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B06DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B06E0
  c->lr=c->r[0]; // 800B06E4
  c->r[1]=c->r[1]+0x00000010u; // 800B06E8
  return; // 800B06EC
}

// fn_800B06F0
void f_800B06F0(Ctx* __restrict c) {
  trace_call(0x800B06F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B06F0
  c->r[0]=c->lr; // 800B06F4
  c->r[3]=0u+0x000000FCu; // 800B06F8
  c->r[4]=c->r[13]+0xFFFFA8FBu; // 800B06FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0700
  c->r[5]=0u+0x00000000u; // 800B0704
  c->r[6]=0u+0x00001001u; // 800B0708
  c->lr=0x800B0710u; f_80244D20(c); // 800B070C
  cmps(c,0,(int32_t)c->r[3],0); // 800B0710
  if (crb(c,2)) { goto L_800B071C; } // 800B0714
  c->lr=0x800B071Cu; f_800B0640(c); // 800B0718
L_800B071C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B071C
  c->lr=c->r[0]; // 800B0720
  c->r[1]=c->r[1]+0x00000010u; // 800B0724
  return; // 800B0728
}

// fn_800B072C
void f_800B072C(Ctx* __restrict c) {
  trace_call(0x800B072Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B072C
  c->r[0]=c->lr; // 800B0730
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0734
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0738
  c->r[31]=c->r[3]|c->r[3]; // 800B073C
  c->lr=0x800B0744u; f_80244520(c); // 800B0740
  c->r[7]=c->r[3]|c->r[3]; // 800B0744
  c->r[9]=c->r[31]|c->r[31]; // 800B0748
  c->r[3]=0u+0x000000FCu; // 800B074C
  c->r[4]=c->r[13]+0xFFFFA900u; // 800B0750
  c->r[5]=0u+0x00000000u; // 800B0754
  c->r[6]=0u+0x00002001u; // 800B0758
  c->r[8]=0u+0x00000000u; // 800B075C
  c->lr=0x800B0764u; f_80242DF0(c); // 800B0760
  c->r[4]=c->r[3]|c->r[3]; // 800B0764
  c->r[3]=0u+0x000000FCu; // 800B0768
  c->r[5]=c->r[13]+0xFFFFA905u; // 800B076C
  c->r[6]=0u+0x00000000u; // 800B0770
  c->r[7]=0u+0x00001001u; // 800B0774
  c->lr=0x800B077Cu; f_80244DB0(c); // 800B0778
  cmps(c,0,(int32_t)c->r[3],0); // 800B077C
  if (crb(c,2)) { goto L_800B0788; } // 800B0780
  c->lr=0x800B0788u; f_800B0640(c); // 800B0784
L_800B0788:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0788
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B078C
  c->lr=c->r[0]; // 800B0790
  c->r[1]=c->r[1]+0x00000010u; // 800B0794
  return; // 800B0798
}

// fn_800B079C
void f_800B079C(Ctx* __restrict c) {
  trace_call(0x800B079Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B079C
  c->r[0]=c->lr; // 800B07A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B07A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B07A8
  c->r[31]=c->r[3]|c->r[3]; // 800B07AC
  c->lr=0x800B07B4u; f_802B1168(c); // 800B07B0
  c->r[8]=0u+0x80420000u; // 800B07B4
  c->r[6]=0u+0x80410000u; // 800B07B8
  c->r[7]=0u+0x00000000u; // 800B07BC
  c->r[5]=0u+0x57BF0000u; // 800B07C0
  c->r[4]=0u+0x6E430000u; // 800B07C4
  c->r[3]=0u+0x98CB0000u; // 800B07C8
  c->r[0]=c->r[3]+0x00002568u; // 800B07CC
  c->r[8]=c->r[8]+0xFFFFB1ACu; // 800B07D0
  c->r[6]=c->r[6]+0xFFFFC9E8u; // 800B07D4
  c->r[5]=c->r[5]+0x00006424u; // 800B07D8
  c->r[4]=c->r[4]+0xFFFF8BB6u; // 800B07DC
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B07E0
  c->r[3]=c->r[31]|c->r[31]; // 800B07E4
  W32(c->r[31]+0x00000040u,c->r[7]); // 800B07E8
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B07EC
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B07F0
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B07F4
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B07F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B07FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0800
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0804
  c->lr=c->r[0]; // 800B0808
  c->r[1]=c->r[1]+0x00000010u; // 800B080C
  return; // 800B0810
}

// fn_800B0814
void f_800B0814(Ctx* __restrict c) {
  trace_call(0x800B0814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0814
  c->r[0]=c->lr; // 800B0818
  cmps(c,0,(int32_t)c->r[4],0); // 800B081C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0820
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B0824
  c->r[30]=c->r[3]|c->r[3]; // 800B0828
  c->r[31]=c->r[4]|c->r[4]; // 800B082C
  if (crb(c,2)) { goto L_800B0884; } // 800B0830
  c->r[3]=c->r[31]|c->r[31]; // 800B0834
  c->lr=0x800B083Cu; f_80244520(c); // 800B0838
  c->r[7]=c->r[3]|c->r[3]; // 800B083C
  c->r[9]=c->r[31]|c->r[31]; // 800B0840
  c->r[3]=0u+0x00000044u; // 800B0844
  c->r[4]=c->r[13]+0xFFFFA90Au; // 800B0848
  c->r[5]=0u+0x00000000u; // 800B084C
  c->r[6]=0u+0x00002001u; // 800B0850
  c->r[8]=0u+0x00000000u; // 800B0854
  c->lr=0x800B085Cu; f_80242DF0(c); // 800B0858
  c->r[4]=c->r[3]|c->r[3]; // 800B085C
  c->r[3]=0u+0x00000044u; // 800B0860
  c->r[5]=c->r[13]+0xFFFFA90Fu; // 800B0864
  c->r[6]=0u+0x00000000u; // 800B0868
  c->r[7]=0u+0x00001001u; // 800B086C
  c->lr=0x800B0874u; f_80244DB0(c); // 800B0870
  cmps(c,0,(int32_t)c->r[3],0); // 800B0874
  if (crb(c,2)) { goto L_800B08A4; } // 800B0878
  c->lr=0x800B0880u; f_800B079C(c); // 800B087C
  goto L_800B08A4; // 800B0880
L_800B0884:;
  c->r[3]=0u+0x00000044u; // 800B0884
  c->r[4]=c->r[13]+0xFFFFA914u; // 800B0888
  c->r[5]=0u+0x00000000u; // 800B088C
  c->r[6]=0u+0x00001001u; // 800B0890
  c->lr=0x800B0898u; f_80244D20(c); // 800B0894
  cmps(c,0,(int32_t)c->r[3],0); // 800B0898
  if (crb(c,2)) { goto L_800B08A4; } // 800B089C
  c->lr=0x800B08A4u; f_800B079C(c); // 800B08A0
L_800B08A4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B08A4
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B08A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B08AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B08B0
  c->lr=c->r[0]; // 800B08B4
  c->r[1]=c->r[1]+0x00000010u; // 800B08B8
  return; // 800B08BC
}

// fn_800B08C0
void f_800B08C0(Ctx* __restrict c) {
  trace_call(0x800B08C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B08C0
  c->r[0]=c->lr; // 800B08C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B08C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B08CC
  c->r[31]=c->r[4]|c->r[4]; // 800B08D0
  c->r[30]=c->r[3]|c->r[3]; // 800B08D4
  c->r[4]=0u+0x00000000u; // 800B08D8
  c->r[3]=c->r[31]|c->r[31]; // 800B08DC
  c->lr=0x800B08E4u; f_8030BE30(c); // 800B08E0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B08E4
  c->r[0]=0u+0x00000000u; // 800B08E8
  c->r[3]=c->r[31]|c->r[31]; // 800B08EC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B08F0
  c->lr=0x800B08F8u; f_8030BD1C(c); // 800B08F4
  W32(c->r[30]+0x00000024u,c->r[3]); // 800B08F8
  c->r[3]=c->r[31]|c->r[31]; // 800B08FC
  c->lr=0x800B0904u; f_8030BD1C(c); // 800B0900
  W32(c->r[30]+0x00000028u,c->r[3]); // 800B0904
  c->r[3]=c->r[31]|c->r[31]; // 800B0908
  c->lr=0x800B0910u; f_8030BD1C(c); // 800B090C
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800B0910
  c->r[3]=c->r[31]|c->r[31]; // 800B0914
  c->lr=0x800B091Cu; f_8030C0A0(c); // 800B0918
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800B091C
  c->r[3]=c->r[31]|c->r[31]; // 800B0920
  c->lr=0x800B0928u; f_8030C0A0(c); // 800B0924
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800B0928
  c->r[3]=c->r[31]|c->r[31]; // 800B092C
  c->lr=0x800B0934u; f_8030C0A0(c); // 800B0930
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800B0934
  c->r[3]=c->r[31]|c->r[31]; // 800B0938
  c->lr=0x800B0940u; f_8030BD1C(c); // 800B093C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800B0940
  c->r[3]=0u+0x00000000u; // 800B0944
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B0948
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B094C
  c->lr=c->r[0]; // 800B0950
  c->r[1]=c->r[1]+0x00000010u; // 800B0954
  return; // 800B0958
}

// fn_800B095C
void f_800B095C(Ctx* __restrict c) {
  trace_call(0x800B095Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B095C
  c->r[0]=c->lr; // 800B0960
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B0964
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B0968
  c->r[27]=c->r[3]|c->r[3]; // 800B096C
  c->r[28]=c->r[4]|c->r[4]; // 800B0970
  c->r[29]=c->r[5]|c->r[5]; // 800B0974
  c->r[30]=c->r[6]|c->r[6]; // 800B0978
  c->r[7]=R32(c->r[3]+0x00000040u); // 800B097C
  cmps(c,0,(int32_t)c->r[7],0); // 800B0980
  if (!crb(c,0)) { goto L_800B0994; } // 800B0984
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B0988
  W32(c->r[3]+0x00000040u,c->r[0]); // 800B098C
  goto L_800B09A4; // 800B0990
L_800B0994:;
  c->r[0]=c->r[7]+0x00000001u; // 800B0994
  W32(c->r[3]+0x00000040u,c->r[0]); // 800B0998
  cmps(c,0,(int32_t)c->r[0],1); // 800B099C
  if (crb(c,1)) { goto L_800B0A64; } // 800B09A0
L_800B09A4:;
  c->r[3]=c->r[27]|c->r[27]; // 800B09A4
  c->r[4]=c->r[28]|c->r[28]; // 800B09A8
  c->r[5]=c->r[29]|c->r[29]; // 800B09AC
  c->r[6]=c->r[30]|c->r[30]; // 800B09B0
  c->lr=0x800B09B8u; f_802B11C0(c); // 800B09B4
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 800B09B8
  cmps(c,0,(int32_t)c->r[4],0); // 800B09BC
  if (crb(c,2)) { goto L_800B0A64; } // 800B09C0
  c->r[0]=0u+0x00000001u; // 800B09C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B09C8
  c->r[6]=c->r[28]|c->r[28]; // 800B09CC
  c->r[7]=c->r[29]|c->r[29]; // 800B09D0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B09D4
  c->r[8]=c->r[30]|c->r[30]; // 800B09D8
  c->r[9]=R32(c->r[27]+0x00000024u); // 800B09DC
  c->r[5]=0u+0x00000014u; // 800B09E0
  c->r[10]=0u+0x00000001u; // 800B09E4
  c->lr=0x800B09ECu; f_80281A84(c); // 800B09E8
  cmps(c,0,(int32_t)c->r[3],0); // 800B09EC
  W32(c->r[27]+0x00000020u,c->r[3]); // 800B09F0
  if (crb(c,2)) { goto L_800B0A00; } // 800B09F4
  c->lr=0x800B09FCu; f_80295B6C(c); // 800B09F8
  goto L_800B0A64; // 800B09FC
L_800B0A00:;
  c->r[3]=R32(c->r[27]+0x00000024u); // 800B0A00
  c->r[4]=c->r[30]|c->r[30]; // 800B0A04
  c->r[5]=c->r[29]|c->r[29]; // 800B0A08
  c->lr=0x800B0A10u; f_802C0F98(c); // 800B0A0C
  c->r[31]=c->r[3]|c->r[3]; // 800B0A10
  c->r[3]=0u+0x00000044u; // 800B0A14
  c->r[4]=c->r[13]+0xFFFFA919u; // 800B0A18
  c->r[5]=0u+0x00000000u; // 800B0A1C
  c->r[6]=0u+0x00001001u; // 800B0A20
  c->lr=0x800B0A28u; f_80244D20(c); // 800B0A24
  cmps(c,0,(int32_t)c->r[3],0); // 800B0A28
  if (crb(c,2)) { goto L_800B0A40; } // 800B0A2C
  c->r[5]=R32(c->r[27]+0x0000001Cu); // 800B0A30
  c->r[4]=c->r[31]|c->r[31]; // 800B0A34
  c->r[6]=0u+0x00000014u; // 800B0A38
  c->lr=0x800B0A40u; f_8029316C(c); // 800B0A3C
L_800B0A40:;
  W32(c->r[27]+0x00000020u,c->r[3]); // 800B0A40
  c->r[4]=c->r[28]|c->r[28]; // 800B0A44
  c->r[7]=R32(c->r[27]+0x00000024u); // 800B0A48
  c->r[5]=c->r[29]|c->r[29]; // 800B0A4C
  c->r[6]=c->r[30]|c->r[30]; // 800B0A50
  c->r[8]=0u+0x00000001u; // 800B0A54
  c->r[9]=0u+0x00000000u; // 800B0A58
  c->lr=0x800B0A60u; f_8027FFF4(c); // 800B0A5C
  W32(c->r[27]+0x00000020u,c->r[3]); // 800B0A60
L_800B0A64:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B0A64
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B0A68
  c->lr=c->r[0]; // 800B0A6C
  c->r[1]=c->r[1]+0x00000030u; // 800B0A70
  return; // 800B0A74
}

// fn_800B0A78
void f_800B0A78(Ctx* __restrict c) {
  trace_call(0x800B0A78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0A78
  c->r[0]=c->lr; // 800B0A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0A84
  c->r[31]=c->r[3]|c->r[3]; // 800B0A88
  c->r[0]=R32(c->r[3]+0x00000040u); // 800B0A8C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B0A90
  W32(c->r[3]+0x00000040u,c->r[0]); // 800B0A94
  if (!crb(c,2)) { goto L_800B0AB8; } // 800B0A98
  c->lr=0x800B0AA0u; f_802B11D0(c); // 800B0A9C
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B0AA0
  cmps(c,0,(int32_t)c->r[3],0); // 800B0AA4
  if (crb(c,2)) { goto L_800B0AB8; } // 800B0AA8
  c->lr=0x800B0AB0u; f_80295B7C(c); // 800B0AAC
  c->r[0]=0u+0x00000000u; // 800B0AB0
  W32(c->r[31]+0x00000020u,c->r[0]); // 800B0AB4
L_800B0AB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0AB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0ABC
  c->lr=c->r[0]; // 800B0AC0
  c->r[1]=c->r[1]+0x00000010u; // 800B0AC4
  return; // 800B0AC8
}

// fn_800B0ACC
void f_800B0ACC(Ctx* __restrict c) {
  trace_call(0x800B0ACCu);
  return; // 800B0ACC
}

// fn_800B0AD0
void f_800B0AD0(Ctx* __restrict c) {
  trace_call(0x800B0AD0u);
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0AD0
  c->r[6]=0u+0x00000000u; // 800B0AD4
  c->r[4]=0u+0x000001F4u; // 800B0AD8
  {uint32_t ea=c->r[2]+0xFFFF86B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0ADC
  {uint32_t ea=c->r[2]+0xFFFF869Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0AE0
  c->r[5]=0u+0x00000004u; // 800B0AE4
  c->r[0]=0u+0x00000001u; // 800B0AE8
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800B0AEC
  W32(c->r[3]+0x00000020u,c->r[6]); // 800B0AF0
  W32(c->r[3]+0x00000024u,c->r[5]); // 800B0AF4
  W32(c->r[3]+0x00000028u,c->r[4]); // 800B0AF8
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800B0AFC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 800B0B00
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 800B0B04
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800B0B08
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800B0B0C
  return; // 800B0B10
}

// fn_800B0B14
void f_800B0B14(Ctx* __restrict c) {
  trace_call(0x800B0B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0B14
  c->r[0]=c->lr; // 800B0B18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B0B1C
  c->r[11]=c->r[1]+0x00000020u; // 800B0B20
  c->lr=0x800B0B28u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B0B24
  cmps(c,0,(int32_t)c->r[5],0); // 800B0B28
  c->r[28]=c->r[3]|c->r[3]; // 800B0B2C
  c->r[29]=c->r[4]|c->r[4]; // 800B0B30
  c->r[30]=c->r[7]|c->r[7]; // 800B0B34
  if (crb(c,2)) { goto L_800B0B44; } // 800B0B38
  c->r[31]=c->r[5]|c->r[5]; // 800B0B3C
  goto L_800B0B48; // 800B0B40
L_800B0B44:;
  c->r[31]=c->r[28]|c->r[28]; // 800B0B44
L_800B0B48:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800B0B48
  c->r[4]=c->r[4]+0x0000001Cu; // 800B0B4C
  c->lr=0x800B0B54u; f_8003BDD0(c); // 800B0B50
  c->r[0]=R32(c->r[29]+0x00000028u); // 800B0B54
  cmps(c,0,(int32_t)c->r[30],0); // 800B0B58
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B0B5C
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 800B0B60
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800B0B64
  {uint32_t ea=c->r[29]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B68
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B0B6C
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B70
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B0B74
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B78
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800B0B7C
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 800B0B80
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800B0B84
  if (crb(c,2)) { goto L_800B0BAC; } // 800B0B88
  c->r[3]=R32(c->r[28]+0x00000040u); // 800B0B8C
  cmps(c,0,(int32_t)c->r[3],0); // 800B0B90
  if (crb(c,1)) { goto L_800B0BA4; } // 800B0B94
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B0B98
  W32(c->r[28]+0x00000040u,c->r[0]); // 800B0B9C
  goto L_800B0BAC; // 800B0BA0
L_800B0BA4:;
  c->r[0]=c->r[3]+0x00000001u; // 800B0BA4
  W32(c->r[28]+0x00000040u,c->r[0]); // 800B0BA8
L_800B0BAC:;
  c->r[11]=c->r[1]+0x00000020u; // 800B0BAC
  c->lr=0x800B0BB4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B0BB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0BB4
  c->lr=c->r[0]; // 800B0BB8
  c->r[1]=c->r[1]+0x00000020u; // 800B0BBC
  return; // 800B0BC0
}

// fn_800B0BC4
void f_800B0BC4(Ctx* __restrict c) {
  trace_call(0x800B0BC4u);
  c->r[3]=0u+0x00000000u; // 800B0BC4
  return; // 800B0BC8
}

// fn_800B0BCC
void f_800B0BCC(Ctx* __restrict c) {
  trace_call(0x800B0BCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0BCC
  c->r[7]=0u+0x43300000u; // 800B0BD0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0BD4
  c->r[6]=R32(c->r[4]+0x00000028u); // 800B0BD8
  c->r[0]=R32(c->r[5]+0x00000028u); // 800B0BDC
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 800B0BE0
  c->r[6]=c->r[6]^0x80000000u; // 800B0BE4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B0BE8
  c->r[0]=c->r[0]^0x80000000u; // 800B0BEC
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[3]=RF64(ea);} // 800B0BF0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B0BF4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800B0BF8
  W32(c->r[1]+0x00000010u,c->r[7]); // 800B0BFC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800B0C00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0C04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800B0C08
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B0C0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800B0C10
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B0C14
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B0C18
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B0C1C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800B0C20
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B0C24
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B0C28
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 800B0C2C
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 800B0C30
  c->r[6]=c->r[6]^0x80000000u; // 800B0C34
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B0C38
  c->r[0]=c->r[0]^0x80000000u; // 800B0C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0C40
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800B0C44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800B0C48
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B0C4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800B0C50
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B0C54
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B0C58
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B0C5C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B0C60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800B0C64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B0C68
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800B0C6C
  {uint32_t ea=c->r[4]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0C70
  {uint32_t ea=c->r[5]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0C74
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B0C78
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B0C7C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B0C80
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800B0C84
  {uint32_t ea=c->r[4]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0C88
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0C8C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B0C90
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B0C94
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B0C98
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B0C9C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0CA0
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0CA4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800B0CA8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B0CAC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B0CB0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800B0CB4
  c->r[1]=c->r[1]+0x00000030u; // 800B0CB8
  return; // 800B0CBC
}

// fn_800B0CC0
void f_800B0CC0(Ctx* __restrict c) {
  trace_call(0x800B0CC0u);
  c->r[3]=0u+0x00000044u; // 800B0CC0
  return; // 800B0CC4
}

// fn_800B0CC8
void f_800B0CC8(Ctx* __restrict c) {
  trace_call(0x800B0CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0CC8
  c->r[0]=c->lr; // 800B0CCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0CD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0CD4
  c->r[31]=c->r[3]|c->r[3]; // 800B0CD8
  c->lr=0x800B0CE0u; f_800B079C(c); // 800B0CDC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B0CE0
  c->r[3]=0u+0x80420000u; // 800B0CE4
  c->r[3]=c->r[3]+0xFFFFB16Cu; // 800B0CE8
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B0CEC
  c->r[0]=c->r[0]|0x80000000u; // 800B0CF0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B0CF4
  c->r[3]=c->r[31]|c->r[31]; // 800B0CF8
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B0CFC
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B0D00
  c->ctr=c->r[12]; // 800B0D04
  if (true) { c->lr=0x800B0D0Cu; dispatch(c,c->ctr); } // 800B0D08
  c->r[3]=c->r[31]|c->r[31]; // 800B0D0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0D10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0D14
  c->lr=c->r[0]; // 800B0D18
  c->r[1]=c->r[1]+0x00000010u; // 800B0D1C
  return; // 800B0D20
}

// fn_800B0D24
void f_800B0D24(Ctx* __restrict c) {
  trace_call(0x800B0D24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0D24
  c->r[0]=c->lr; // 800B0D28
  cmps(c,0,(int32_t)c->r[3],0); // 800B0D2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0D30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B0D34
  c->r[30]=c->r[3]|c->r[3]; // 800B0D38
  c->r[31]=c->r[4]|c->r[4]; // 800B0D3C
  if (crb(c,2)) { goto L_800B0D5C; } // 800B0D40
  c->r[4]=0u+0x00000000u; // 800B0D44
  c->lr=0x800B0D4Cu; f_802B1180(c); // 800B0D48
  cmps(c,0,(int32_t)c->r[31],0); // 800B0D4C
  if (!crb(c,1)) { goto L_800B0D5C; } // 800B0D50
  c->r[3]=c->r[30]|c->r[30]; // 800B0D54
  c->lr=0x800B0D5Cu; f_80244DC0(c); // 800B0D58
L_800B0D5C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B0D5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B0D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0D64
  c->lr=c->r[0]; // 800B0D68
  c->r[1]=c->r[1]+0x00000010u; // 800B0D6C
  return; // 800B0D70
}

// fn_800B0D74
void f_800B0D74(Ctx* __restrict c) {
  trace_call(0x800B0D74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0D74
  c->r[0]=c->lr; // 800B0D78
  c->r[3]=0u+0x00000044u; // 800B0D7C
  c->r[4]=c->r[13]+0xFFFFA91Eu; // 800B0D80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0D84
  c->r[5]=0u+0x00000000u; // 800B0D88
  c->r[6]=0u+0x00001001u; // 800B0D8C
  c->lr=0x800B0D94u; f_80244D20(c); // 800B0D90
  cmps(c,0,(int32_t)c->r[3],0); // 800B0D94
  if (crb(c,2)) { goto L_800B0DA0; } // 800B0D98
  c->lr=0x800B0DA0u; f_800B0CC8(c); // 800B0D9C
L_800B0DA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0DA0
  c->lr=c->r[0]; // 800B0DA4
  c->r[1]=c->r[1]+0x00000010u; // 800B0DA8
  return; // 800B0DAC
}

// fn_800B0DB0
void f_800B0DB0(Ctx* __restrict c) {
  trace_call(0x800B0DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0DB0
  c->r[0]=c->lr; // 800B0DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0DBC
  c->r[31]=c->r[3]|c->r[3]; // 800B0DC0
  c->lr=0x800B0DC8u; f_80244520(c); // 800B0DC4
  c->r[7]=c->r[3]|c->r[3]; // 800B0DC8
  c->r[9]=c->r[31]|c->r[31]; // 800B0DCC
  c->r[3]=0u+0x00000044u; // 800B0DD0
  c->r[4]=c->r[13]+0xFFFFA923u; // 800B0DD4
  c->r[5]=0u+0x00000000u; // 800B0DD8
  c->r[6]=0u+0x00002001u; // 800B0DDC
  c->r[8]=0u+0x00000000u; // 800B0DE0
  c->lr=0x800B0DE8u; f_80242DF0(c); // 800B0DE4
  c->r[4]=c->r[3]|c->r[3]; // 800B0DE8
  c->r[3]=0u+0x00000044u; // 800B0DEC
  c->r[5]=c->r[13]+0xFFFFA928u; // 800B0DF0
  c->r[6]=0u+0x00000000u; // 800B0DF4
  c->r[7]=0u+0x00001001u; // 800B0DF8
  c->lr=0x800B0E00u; f_80244DB0(c); // 800B0DFC
  cmps(c,0,(int32_t)c->r[3],0); // 800B0E00
  if (crb(c,2)) { goto L_800B0E0C; } // 800B0E04
  c->lr=0x800B0E0Cu; f_800B0CC8(c); // 800B0E08
L_800B0E0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0E0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0E10
  c->lr=c->r[0]; // 800B0E14
  c->r[1]=c->r[1]+0x00000010u; // 800B0E18
  return; // 800B0E1C
}

// fn_800B0E20
void f_800B0E20(Ctx* __restrict c) {
  trace_call(0x800B0E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0E20
  c->r[0]=c->lr; // 800B0E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0E2C
  c->r[31]=c->r[3]|c->r[3]; // 800B0E30
  c->lr=0x800B0E38u; f_802B1168(c); // 800B0E34
  c->r[8]=0u+0x80420000u; // 800B0E38
  c->r[6]=0u+0x80410000u; // 800B0E3C
  c->r[7]=0u+0x00000000u; // 800B0E40
  c->r[5]=0u+0xA7350000u; // 800B0E44
  c->r[4]=0u+0xBDEC0000u; // 800B0E48
  c->r[3]=0u+0xBCD20000u; // 800B0E4C
  c->r[0]=c->r[3]+0x00002D00u; // 800B0E50
  c->r[8]=c->r[8]+0xFFFFB130u; // 800B0E54
  c->r[6]=c->r[6]+0xFFFFCA02u; // 800B0E58
  c->r[5]=c->r[5]+0xFFFFB340u; // 800B0E5C
  c->r[4]=c->r[4]+0x00005CCCu; // 800B0E60
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B0E64
  c->r[3]=c->r[31]|c->r[31]; // 800B0E68
  W32(c->r[31]+0x0000006Cu,c->r[7]); // 800B0E6C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B0E70
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B0E74
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B0E78
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B0E7C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B0E80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0E88
  c->lr=c->r[0]; // 800B0E8C
  c->r[1]=c->r[1]+0x00000010u; // 800B0E90
  return; // 800B0E94
}

// fn_800B0E98
void f_800B0E98(Ctx* __restrict c) {
  trace_call(0x800B0E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0E98
  c->r[0]=c->lr; // 800B0E9C
  cmps(c,0,(int32_t)c->r[4],0); // 800B0EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0EA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B0EA8
  c->r[30]=c->r[3]|c->r[3]; // 800B0EAC
  c->r[31]=c->r[4]|c->r[4]; // 800B0EB0
  if (crb(c,2)) { goto L_800B0F08; } // 800B0EB4
  c->r[3]=c->r[31]|c->r[31]; // 800B0EB8
  c->lr=0x800B0EC0u; f_80244520(c); // 800B0EBC
  c->r[7]=c->r[3]|c->r[3]; // 800B0EC0
  c->r[9]=c->r[31]|c->r[31]; // 800B0EC4
  c->r[3]=0u+0x00000070u; // 800B0EC8
  c->r[4]=c->r[13]+0xFFFFA92Du; // 800B0ECC
  c->r[5]=0u+0x00000000u; // 800B0ED0
  c->r[6]=0u+0x00002001u; // 800B0ED4
  c->r[8]=0u+0x00000000u; // 800B0ED8
  c->lr=0x800B0EE0u; f_80242DF0(c); // 800B0EDC
  c->r[4]=c->r[3]|c->r[3]; // 800B0EE0
  c->r[3]=0u+0x00000070u; // 800B0EE4
  c->r[5]=c->r[13]+0xFFFFA932u; // 800B0EE8
  c->r[6]=0u+0x00000000u; // 800B0EEC
  c->r[7]=0u+0x00001001u; // 800B0EF0
  c->lr=0x800B0EF8u; f_80244DB0(c); // 800B0EF4
  cmps(c,0,(int32_t)c->r[3],0); // 800B0EF8
  if (crb(c,2)) { goto L_800B0F28; } // 800B0EFC
  c->lr=0x800B0F04u; f_800B0E20(c); // 800B0F00
  goto L_800B0F28; // 800B0F04
L_800B0F08:;
  c->r[3]=0u+0x00000070u; // 800B0F08
  c->r[4]=c->r[13]+0xFFFFA937u; // 800B0F0C
  c->r[5]=0u+0x00000000u; // 800B0F10
  c->r[6]=0u+0x00001001u; // 800B0F14
  c->lr=0x800B0F1Cu; f_80244D20(c); // 800B0F18
  cmps(c,0,(int32_t)c->r[3],0); // 800B0F1C
  if (crb(c,2)) { goto L_800B0F28; } // 800B0F20
  c->lr=0x800B0F28u; f_800B0E20(c); // 800B0F24
L_800B0F28:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B0F28
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B0F2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B0F30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0F34
  c->lr=c->r[0]; // 800B0F38
  c->r[1]=c->r[1]+0x00000010u; // 800B0F3C
  return; // 800B0F40
}

// fn_800B0F44
void f_800B0F44(Ctx* __restrict c) {
  trace_call(0x800B0F44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0F44
  c->r[0]=c->lr; // 800B0F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0F4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B0F50
  c->r[31]=c->r[4]|c->r[4]; // 800B0F54
  c->r[30]=c->r[3]|c->r[3]; // 800B0F58
  c->r[3]=c->r[31]|c->r[31]; // 800B0F5C
  c->lr=0x800B0F64u; f_8030BD1C(c); // 800B0F60
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 800B0F64
  c->r[3]=c->r[31]|c->r[31]; // 800B0F68
  c->lr=0x800B0F70u; f_8030BD1C(c); // 800B0F6C
  W8(c->r[30]+0x0000001Du,c->r[3]); // 800B0F70
  c->r[3]=c->r[31]|c->r[31]; // 800B0F74
  c->lr=0x800B0F7Cu; f_8030BD1C(c); // 800B0F78
  W8(c->r[30]+0x0000001Eu,c->r[3]); // 800B0F7C
  c->r[3]=c->r[31]|c->r[31]; // 800B0F80
  c->lr=0x800B0F88u; f_8030BD1C(c); // 800B0F84
  W8(c->r[30]+0x0000001Fu,c->r[3]); // 800B0F88
  c->r[3]=c->r[31]|c->r[31]; // 800B0F8C
  c->lr=0x800B0F94u; f_8030BD1C(c); // 800B0F90
  W32(c->r[30]+0x00000020u,c->r[3]); // 800B0F94
  c->r[3]=c->r[31]|c->r[31]; // 800B0F98
  c->r[4]=0u+0x00000000u; // 800B0F9C
  c->lr=0x800B0FA4u; f_8030BE30(c); // 800B0FA0
  W32(c->r[30]+0x00000024u,c->r[3]); // 800B0FA4
  c->r[0]=0u+0x00000000u; // 800B0FA8
  c->r[3]=c->r[31]|c->r[31]; // 800B0FAC
  W32(c->r[30]+0x00000028u,c->r[0]); // 800B0FB0
  c->lr=0x800B0FB8u; f_8030BD1C(c); // 800B0FB4
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800B0FB8
  c->r[3]=c->r[31]|c->r[31]; // 800B0FBC
  c->lr=0x800B0FC4u; f_8030BD1C(c); // 800B0FC0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800B0FC4
  c->r[3]=c->r[31]|c->r[31]; // 800B0FC8
  c->lr=0x800B0FD0u; f_8030C0A0(c); // 800B0FCC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800B0FD0
  c->r[3]=c->r[31]|c->r[31]; // 800B0FD4
  c->lr=0x800B0FDCu; f_8030C0A0(c); // 800B0FD8
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800B0FDC
  c->r[3]=c->r[31]|c->r[31]; // 800B0FE0
  c->lr=0x800B0FE8u; f_8030C0A0(c); // 800B0FE4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800B0FE8
  c->r[3]=c->r[31]|c->r[31]; // 800B0FEC
  c->lr=0x800B0FF4u; f_8030C0A0(c); // 800B0FF0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800B0FF4
  c->r[3]=c->r[31]|c->r[31]; // 800B0FF8
  c->lr=0x800B1000u; f_8030C0A0(c); // 800B0FFC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800B1000
  c->r[3]=c->r[31]|c->r[31]; // 800B1004
  c->lr=0x800B100Cu; f_8030C0A0(c); // 800B1008
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800B100C
  c->r[3]=c->r[31]|c->r[31]; // 800B1010
  c->lr=0x800B1018u; f_8030C0A0(c); // 800B1014
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B1018
  c->r[3]=c->r[31]|c->r[31]; // 800B101C
  c->lr=0x800B1024u; f_8030BD1C(c); // 800B1020
  W8(c->r[30]+0x00000050u,c->r[3]); // 800B1024
  c->r[3]=c->r[31]|c->r[31]; // 800B1028
  c->lr=0x800B1030u; f_8030BD1C(c); // 800B102C
  W8(c->r[30]+0x00000051u,c->r[3]); // 800B1030
  c->r[3]=c->r[31]|c->r[31]; // 800B1034
  c->r[4]=0u+0x00000000u; // 800B1038
  c->lr=0x800B1040u; f_8030BE30(c); // 800B103C
  W32(c->r[30]+0x00000054u,c->r[3]); // 800B1040
  c->r[3]=c->r[31]|c->r[31]; // 800B1044
  c->lr=0x800B104Cu; f_8030BD1C(c); // 800B1048
  W32(c->r[30]+0x00000058u,c->r[3]); // 800B104C
  c->r[3]=c->r[31]|c->r[31]; // 800B1050
  c->r[4]=0u+0x00000000u; // 800B1054
  c->lr=0x800B105Cu; f_8030BE30(c); // 800B1058
  W32(c->r[30]+0x00000060u,c->r[3]); // 800B105C
  c->r[3]=c->r[31]|c->r[31]; // 800B1060
  c->lr=0x800B1068u; f_8030BD1C(c); // 800B1064
  W32(c->r[30]+0x00000064u,c->r[3]); // 800B1068
  c->r[3]=0u+0x00000000u; // 800B106C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B1070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1074
  c->lr=c->r[0]; // 800B1078
  c->r[1]=c->r[1]+0x00000010u; // 800B107C
  return; // 800B1080
}

// fn_800B1084
void f_800B1084(Ctx* __restrict c) {
  trace_call(0x800B1084u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1084
  c->r[0]=c->lr; // 800B1088
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B108C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B1090
  c->r[27]=c->r[3]|c->r[3]; // 800B1094
  c->r[28]=c->r[4]|c->r[4]; // 800B1098
  c->r[29]=c->r[5]|c->r[5]; // 800B109C
  c->r[30]=c->r[6]|c->r[6]; // 800B10A0
  c->r[7]=R32(c->r[3]+0x0000006Cu); // 800B10A4
  cmps(c,0,(int32_t)c->r[7],0); // 800B10A8
  if (!crb(c,0)) { goto L_800B10BC; } // 800B10AC
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B10B0
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800B10B4
  goto L_800B10CC; // 800B10B8
L_800B10BC:;
  c->r[0]=c->r[7]+0x00000001u; // 800B10BC
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800B10C0
  cmps(c,0,(int32_t)c->r[0],1); // 800B10C4
  if (crb(c,1)) { goto L_800B118C; } // 800B10C8
L_800B10CC:;
  c->r[3]=c->r[27]|c->r[27]; // 800B10CC
  c->r[4]=c->r[28]|c->r[28]; // 800B10D0
  c->r[5]=c->r[29]|c->r[29]; // 800B10D4
  c->r[6]=c->r[30]|c->r[30]; // 800B10D8
  c->lr=0x800B10E0u; f_802B11C0(c); // 800B10DC
  c->r[4]=R32(c->r[27]+0x00000024u); // 800B10E0
  cmps(c,0,(int32_t)c->r[4],0); // 800B10E4
  if (crb(c,2)) { goto L_800B118C; } // 800B10E8
  c->r[0]=0u+0x00000001u; // 800B10EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B10F0
  c->r[6]=c->r[28]|c->r[28]; // 800B10F4
  c->r[7]=c->r[29]|c->r[29]; // 800B10F8
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B10FC
  c->r[8]=c->r[30]|c->r[30]; // 800B1100
  c->r[9]=R32(c->r[27]+0x0000002Cu); // 800B1104
  c->r[5]=0u+0x00000000u; // 800B1108
  c->r[10]=0u+0x00000001u; // 800B110C
  c->lr=0x800B1114u; f_80281A84(c); // 800B1110
  cmps(c,0,(int32_t)c->r[3],0); // 800B1114
  W32(c->r[27]+0x00000028u,c->r[3]); // 800B1118
  if (crb(c,2)) { goto L_800B1128; } // 800B111C
  c->lr=0x800B1124u; f_80295B6C(c); // 800B1120
  goto L_800B118C; // 800B1124
L_800B1128:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 800B1128
  c->r[4]=c->r[30]|c->r[30]; // 800B112C
  c->r[5]=c->r[29]|c->r[29]; // 800B1130
  c->lr=0x800B1138u; f_802C0F98(c); // 800B1134
  c->r[31]=c->r[3]|c->r[3]; // 800B1138
  c->r[3]=0u+0x00000044u; // 800B113C
  c->r[4]=c->r[13]+0xFFFFA93Cu; // 800B1140
  c->r[5]=0u+0x00000000u; // 800B1144
  c->r[6]=0u+0x00001001u; // 800B1148
  c->lr=0x800B1150u; f_80244D20(c); // 800B114C
  cmps(c,0,(int32_t)c->r[3],0); // 800B1150
  if (crb(c,2)) { goto L_800B1168; } // 800B1154
  c->r[5]=R32(c->r[27]+0x00000024u); // 800B1158
  c->r[4]=c->r[31]|c->r[31]; // 800B115C
  c->r[6]=0u+0x00000000u; // 800B1160
  c->lr=0x800B1168u; f_8029316C(c); // 800B1164
L_800B1168:;
  W32(c->r[27]+0x00000028u,c->r[3]); // 800B1168
  c->r[4]=c->r[28]|c->r[28]; // 800B116C
  c->r[7]=R32(c->r[27]+0x0000002Cu); // 800B1170
  c->r[5]=c->r[29]|c->r[29]; // 800B1174
  c->r[6]=c->r[30]|c->r[30]; // 800B1178
  c->r[8]=0u+0x00000001u; // 800B117C
  c->r[9]=0u+0x00000000u; // 800B1180
  c->lr=0x800B1188u; f_8027FFF4(c); // 800B1184
  W32(c->r[27]+0x00000028u,c->r[3]); // 800B1188
L_800B118C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B118C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B1190
  c->lr=c->r[0]; // 800B1194
  c->r[1]=c->r[1]+0x00000030u; // 800B1198
  return; // 800B119C
}

// fn_800B11A0
void f_800B11A0(Ctx* __restrict c) {
  trace_call(0x800B11A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B11A0
  c->r[0]=c->lr; // 800B11A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B11A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B11AC
  c->r[31]=c->r[3]|c->r[3]; // 800B11B0
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 800B11B4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B11B8
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800B11BC
  if (!crb(c,2)) { goto L_800B11E0; } // 800B11C0
  c->lr=0x800B11C8u; f_802B11D0(c); // 800B11C4
  c->r[3]=R32(c->r[31]+0x00000028u); // 800B11C8
  cmps(c,0,(int32_t)c->r[3],0); // 800B11CC
  if (crb(c,2)) { goto L_800B11E0; } // 800B11D0
  c->lr=0x800B11D8u; f_80295B7C(c); // 800B11D4
  c->r[0]=0u+0x00000000u; // 800B11D8
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B11DC
L_800B11E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B11E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B11E4
  c->lr=c->r[0]; // 800B11E8
  c->r[1]=c->r[1]+0x00000010u; // 800B11EC
  return; // 800B11F0
}

// fn_800B11F4
void f_800B11F4(Ctx* __restrict c) {
  trace_call(0x800B11F4u);
  return; // 800B11F4
}

// fn_800B11F8
void f_800B11F8(Ctx* __restrict c) {
  trace_call(0x800B11F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B11F8
  c->r[0]=c->lr; // 800B11FC
  cmps(c,0,(int32_t)c->r[6],0); // 800B1200
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1204
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B1208
  c->r[30]=c->r[3]|c->r[3]; // 800B120C
  c->r[31]=c->r[5]|c->r[5]; // 800B1210
  if (!crb(c,2)) { goto L_800B1248; } // 800B1214
  c->r[0]=R32(c->r[3]+0x00000058u); // 800B1218
  cmps(c,0,(int32_t)c->r[0],7); // 800B121C
  if (!crb(c,0)) { goto L_800B1230; } // 800B1220
  c->r[4]=c->r[31]|c->r[31]; // 800B1224
  c->r[3]=c->r[3]+0x00000054u; // 800B1228
  c->lr=0x800B1230u; f_8003A994(c); // 800B122C
L_800B1230:;
  c->r[0]=R32(c->r[30]+0x00000064u); // 800B1230
  cmps(c,0,(int32_t)c->r[0],7); // 800B1234
  if (!crb(c,0)) { goto L_800B1248; } // 800B1238
  c->r[4]=c->r[31]|c->r[31]; // 800B123C
  c->r[3]=c->r[30]+0x00000060u; // 800B1240
  c->lr=0x800B1248u; f_8003A994(c); // 800B1244
L_800B1248:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B1248
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B124C
  c->lr=c->r[0]; // 800B1250
  c->r[1]=c->r[1]+0x00000010u; // 800B1254
  return; // 800B1258
}

// fn_800B125C
void f_800B125C(Ctx* __restrict c) {
  trace_call(0x800B125Cu);
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B125C
  c->r[4]=0u+0x00000000u; // 800B1260
  c->r[6]=0u+0x0000007Fu; // 800B1264
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1268
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B126C
  c->r[5]=0u+0x00000005u; // 800B1270
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1274
  c->r[0]=0u+0x00000004u; // 800B1278
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B127C
  W8(c->r[3]+0x0000001Cu,c->r[6]); // 800B1280
  W8(c->r[3]+0x0000001Du,c->r[6]); // 800B1284
  W8(c->r[3]+0x0000001Eu,c->r[6]); // 800B1288
  W8(c->r[3]+0x0000001Fu,c->r[6]); // 800B128C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800B1290
  W32(c->r[3]+0x00000024u,c->r[4]); // 800B1294
  W32(c->r[3]+0x00000028u,c->r[4]); // 800B1298
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800B129C
  W32(c->r[3]+0x00000030u,c->r[4]); // 800B12A0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[4]);} // 800B12A4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B12A8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B12AC
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[3]);} // 800B12B0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 800B12B4
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 800B12B8
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B12BC
  W8(c->r[3]+0x00000050u,c->r[4]); // 800B12C0
  W8(c->r[3]+0x00000051u,c->r[4]); // 800B12C4
  W32(c->r[3]+0x00000054u,c->r[4]); // 800B12C8
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 800B12CC
  W32(c->r[3]+0x00000058u,c->r[4]); // 800B12D0
  W32(c->r[3]+0x00000060u,c->r[4]); // 800B12D4
  W32(c->r[3]+0x00000068u,c->r[4]); // 800B12D8
  W32(c->r[3]+0x00000064u,c->r[4]); // 800B12DC
  return; // 800B12E0
}

// fn_800B12E4
void f_800B12E4(Ctx* __restrict c) {
  trace_call(0x800B12E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B12E4
  c->r[0]=c->lr; // 800B12E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B12EC
  c->r[11]=c->r[1]+0x00000020u; // 800B12F0
  c->lr=0x800B12F8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B12F4
  cmps(c,0,(int32_t)c->r[5],0); // 800B12F8
  c->r[28]=c->r[3]|c->r[3]; // 800B12FC
  c->r[29]=c->r[4]|c->r[4]; // 800B1300
  c->r[30]=c->r[7]|c->r[7]; // 800B1304
  if (crb(c,2)) { goto L_800B1314; } // 800B1308
  c->r[31]=c->r[5]|c->r[5]; // 800B130C
  goto L_800B1318; // 800B1310
L_800B1314:;
  c->r[31]=c->r[28]|c->r[28]; // 800B1314
L_800B1318:;
  c->r[0]=R8(c->r[4]+0x0000001Cu); // 800B1318
  c->r[3]=c->r[31]+0x00000024u; // 800B131C
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 800B1320
  c->r[0]=R8(c->r[4]+0x0000001Du); // 800B1324
  W8(c->r[31]+0x0000001Du,c->r[0]); // 800B1328
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 800B132C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800B1330
  c->r[0]=R8(c->r[4]+0x0000001Fu); // 800B1334
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 800B1338
  c->r[0]=R32(c->r[4]+0x00000020u); // 800B133C
  c->r[4]=c->r[4]+0x00000024u; // 800B1340
  W32(c->r[31]+0x00000020u,c->r[0]); // 800B1344
  c->lr=0x800B134Cu; f_8003BDD0(c); // 800B1348
  c->r[0]=R32(c->r[29]+0x00000030u); // 800B134C
  c->r[3]=c->r[31]+0x00000054u; // 800B1350
  W32(c->r[31]+0x00000030u,c->r[0]); // 800B1354
  c->r[4]=c->r[29]+0x00000054u; // 800B1358
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B135C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B1360
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1364
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800B1368
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B136C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B1370
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1374
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800B1378
  {uint32_t ea=c->r[29]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B137C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800B1380
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1384
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800B1388
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B138C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B1390
  c->r[0]=R8(c->r[29]+0x00000050u); // 800B1394
  W8(c->r[31]+0x00000050u,c->r[0]); // 800B1398
  c->r[0]=R8(c->r[29]+0x00000051u); // 800B139C
  W8(c->r[31]+0x00000051u,c->r[0]); // 800B13A0
  c->lr=0x800B13A8u; f_8003AB48(c); // 800B13A4
  c->r[3]=c->r[31]+0x00000060u; // 800B13A8
  c->r[4]=c->r[29]+0x00000060u; // 800B13AC
  c->lr=0x800B13B4u; f_8003AB48(c); // 800B13B0
  cmps(c,0,(int32_t)c->r[30],0); // 800B13B4
  if (crb(c,2)) { goto L_800B13DC; } // 800B13B8
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 800B13BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B13C0
  if (crb(c,1)) { goto L_800B13D4; } // 800B13C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B13C8
  W32(c->r[28]+0x0000006Cu,c->r[0]); // 800B13CC
  goto L_800B13DC; // 800B13D0
L_800B13D4:;
  c->r[0]=c->r[3]+0x00000001u; // 800B13D4
  W32(c->r[28]+0x0000006Cu,c->r[0]); // 800B13D8
L_800B13DC:;
  c->r[11]=c->r[1]+0x00000020u; // 800B13DC
  c->lr=0x800B13E4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B13E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B13E4
  c->lr=c->r[0]; // 800B13E8
  c->r[1]=c->r[1]+0x00000020u; // 800B13EC
  return; // 800B13F0
}

// fn_800B13F4
void f_800B13F4(Ctx* __restrict c) {
  trace_call(0x800B13F4u);
  c->r[3]=0u+0x00000000u; // 800B13F4
  return; // 800B13F8
}

// fn_800B13FC
void f_800B13FC(Ctx* __restrict c) {
  trace_call(0x800B13FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B13FC
  c->r[7]=0u+0x43300000u; // 800B1400
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1404
  c->r[6]=R8(c->r[4]+0x0000001Cu); // 800B1408
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B140C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B1410
  c->r[0]=R8(c->r[5]+0x0000001Cu); // 800B1414
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1418
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[5]=RF64(ea);} // 800B141C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800B1420
  W32(c->r[1]+0x00000010u,c->r[7]); // 800B1424
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[5]); // 800B1428
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[4]=RF64(ea);} // 800B142C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1430
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B1434
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1438
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 800B143C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1440
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1444
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B1448
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800B144C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B1450
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B1454
  c->r[6]=R8(c->r[4]+0x0000001Du); // 800B1458
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800B145C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1460
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1464
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B1468
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B146C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[5]); // 800B1470
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 800B1474
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1478
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B147C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1480
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B1484
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800B1488
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B148C
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800B1490
  c->r[6]=R8(c->r[4]+0x0000001Eu); // 800B1494
  c->r[0]=R8(c->r[5]+0x0000001Eu); // 800B1498
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B149C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B14A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B14A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B14A8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[5]); // 800B14AC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 800B14B0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B14B4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B14B8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B14BC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B14C0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 800B14C4
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800B14C8
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 800B14CC
  c->r[6]=R8(c->r[4]+0x0000001Fu); // 800B14D0
  c->r[0]=R8(c->r[5]+0x0000001Fu); // 800B14D4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B14D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B14DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B14E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B14E4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[5]); // 800B14E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 800B14EC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B14F0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B14F4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B14F8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B14FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800B1500
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B1504
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 800B1508
  c->r[6]=R32(c->r[4]+0x00000020u); // 800B150C
  c->r[0]=R32(c->r[5]+0x00000020u); // 800B1510
  c->r[6]=c->r[6]^0x80000000u; // 800B1514
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1518
  c->r[0]=c->r[0]^0x80000000u; // 800B151C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1520
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B1524
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B1528
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B152C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B1530
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1534
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1538
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B153C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B1540
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800B1544
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800B1548
  W32(c->r[3]+0x00000020u,c->r[0]); // 800B154C
  {uint32_t ea=c->r[4]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1550
  {uint32_t ea=c->r[5]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1554
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1558
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B155C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1560
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 800B1564
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1568
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B156C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1570
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1574
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1578
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 800B157C
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1580
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1584
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1588
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B158C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1590
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 800B1594
  {uint32_t ea=c->r[4]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1598
  {uint32_t ea=c->r[5]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B159C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B15A0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B15A4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B15A8
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 800B15AC
  {uint32_t ea=c->r[4]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B15B0
  {uint32_t ea=c->r[5]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B15B4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B15B8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B15BC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B15C0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 800B15C4
  {uint32_t ea=c->r[4]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B15C8
  {uint32_t ea=c->r[5]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B15CC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B15D0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B15D4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B15D8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[2]);} // 800B15DC
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B15E0
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B15E4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B15E8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[2]); // 800B15EC
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B15F0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B15F4
  c->r[1]=c->r[1]+0x00000040u; // 800B15F8
  return; // 800B15FC
}

// fn_800B1600
void f_800B1600(Ctx* __restrict c) {
  trace_call(0x800B1600u);
  c->r[3]=0u+0x00000070u; // 800B1600
  return; // 800B1604
}

// fn_800B1608
void f_800B1608(Ctx* __restrict c) {
  trace_call(0x800B1608u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1608
  c->r[0]=c->lr; // 800B160C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1614
  c->r[31]=c->r[3]|c->r[3]; // 800B1618
  c->lr=0x800B1620u; f_800B0E20(c); // 800B161C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B1620
  c->r[3]=0u+0x80420000u; // 800B1624
  c->r[3]=c->r[3]+0xFFFFB0F0u; // 800B1628
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B162C
  c->r[0]=c->r[0]|0x80000000u; // 800B1630
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B1634
  c->r[3]=c->r[31]|c->r[31]; // 800B1638
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B163C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B1640
  c->ctr=c->r[12]; // 800B1644
  if (true) { c->lr=0x800B164Cu; dispatch(c,c->ctr); } // 800B1648
  c->r[3]=c->r[31]|c->r[31]; // 800B164C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1650
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1654
  c->lr=c->r[0]; // 800B1658
  c->r[1]=c->r[1]+0x00000010u; // 800B165C
  return; // 800B1660
}

// fn_800B1664
void f_800B1664(Ctx* __restrict c) {
  trace_call(0x800B1664u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1664
  c->r[0]=c->lr; // 800B1668
  cmps(c,0,(int32_t)c->r[3],0); // 800B166C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1670
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B1674
  c->r[30]=c->r[3]|c->r[3]; // 800B1678
  c->r[31]=c->r[4]|c->r[4]; // 800B167C
  if (crb(c,2)) { goto L_800B169C; } // 800B1680
  c->r[4]=0u+0x00000000u; // 800B1684
  c->lr=0x800B168Cu; f_802B1180(c); // 800B1688
  cmps(c,0,(int32_t)c->r[31],0); // 800B168C
  if (!crb(c,1)) { goto L_800B169C; } // 800B1690
  c->r[3]=c->r[30]|c->r[30]; // 800B1694
  c->lr=0x800B169Cu; f_80244DC0(c); // 800B1698
L_800B169C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B169C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B16A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B16A4
  c->lr=c->r[0]; // 800B16A8
  c->r[1]=c->r[1]+0x00000010u; // 800B16AC
  return; // 800B16B0
}

// fn_800B16B4
void f_800B16B4(Ctx* __restrict c) {
  trace_call(0x800B16B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B16B4
  c->r[0]=c->lr; // 800B16B8
  c->r[3]=0u+0x00000070u; // 800B16BC
  c->r[4]=c->r[13]+0xFFFFA941u; // 800B16C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B16C4
  c->r[5]=0u+0x00000000u; // 800B16C8
  c->r[6]=0u+0x00001001u; // 800B16CC
  c->lr=0x800B16D4u; f_80244D20(c); // 800B16D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B16D4
  if (crb(c,2)) { goto L_800B16E0; } // 800B16D8
  c->lr=0x800B16E0u; f_800B1608(c); // 800B16DC
L_800B16E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B16E0
  c->lr=c->r[0]; // 800B16E4
  c->r[1]=c->r[1]+0x00000010u; // 800B16E8
  return; // 800B16EC
}

// fn_800B16F0
void f_800B16F0(Ctx* __restrict c) {
  trace_call(0x800B16F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B16F0
  c->r[0]=c->lr; // 800B16F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B16F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B16FC
  c->r[31]=c->r[3]|c->r[3]; // 800B1700
  c->lr=0x800B1708u; f_80244520(c); // 800B1704
  c->r[7]=c->r[3]|c->r[3]; // 800B1708
  c->r[9]=c->r[31]|c->r[31]; // 800B170C
  c->r[3]=0u+0x00000070u; // 800B1710
  c->r[4]=c->r[13]+0xFFFFA946u; // 800B1714
  c->r[5]=0u+0x00000000u; // 800B1718
  c->r[6]=0u+0x00002001u; // 800B171C
  c->r[8]=0u+0x00000000u; // 800B1720
  c->lr=0x800B1728u; f_80242DF0(c); // 800B1724
  c->r[4]=c->r[3]|c->r[3]; // 800B1728
  c->r[3]=0u+0x00000070u; // 800B172C
  c->r[5]=c->r[13]+0xFFFFA94Bu; // 800B1730
  c->r[6]=0u+0x00000000u; // 800B1734
  c->r[7]=0u+0x00001001u; // 800B1738
  c->lr=0x800B1740u; f_80244DB0(c); // 800B173C
  cmps(c,0,(int32_t)c->r[3],0); // 800B1740
  if (crb(c,2)) { goto L_800B174C; } // 800B1744
  c->lr=0x800B174Cu; f_800B1608(c); // 800B1748
L_800B174C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B174C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1750
  c->lr=c->r[0]; // 800B1754
  c->r[1]=c->r[1]+0x00000010u; // 800B1758
  return; // 800B175C
}

// fn_800B1760
void f_800B1760(Ctx* __restrict c) {
  trace_call(0x800B1760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1760
  c->r[0]=c->lr; // 800B1764
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B176C
  c->r[31]=c->r[3]|c->r[3]; // 800B1770
  c->lr=0x800B1778u; f_802B1168(c); // 800B1774
  c->r[8]=0u+0x80420000u; // 800B1778
  c->r[6]=0u+0x80410000u; // 800B177C
  c->r[7]=0u+0x00000000u; // 800B1780
  c->r[5]=0u+0x16550000u; // 800B1784
  c->r[4]=0u+0xB0890000u; // 800B1788
  c->r[3]=0u+0xB9B20000u; // 800B178C
  c->r[0]=c->r[3]+0xFFFF8C72u; // 800B1790
  c->r[8]=c->r[8]+0xFFFFB0B4u; // 800B1794
  c->r[6]=c->r[6]+0xFFFFCA21u; // 800B1798
  c->r[5]=c->r[5]+0x00005213u; // 800B179C
  c->r[4]=c->r[4]+0xFFFFE7B1u; // 800B17A0
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B17A4
  c->r[3]=c->r[31]|c->r[31]; // 800B17A8
  W32(c->r[31]+0x00000070u,c->r[7]); // 800B17AC
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B17B0
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B17B4
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B17B8
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B17BC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B17C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B17C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B17C8
  c->lr=c->r[0]; // 800B17CC
  c->r[1]=c->r[1]+0x00000010u; // 800B17D0
  return; // 800B17D4
}

// fn_800B17D8
void f_800B17D8(Ctx* __restrict c) {
  trace_call(0x800B17D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B17D8
  c->r[0]=c->lr; // 800B17DC
  cmps(c,0,(int32_t)c->r[4],0); // 800B17E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B17E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B17E8
  c->r[30]=c->r[3]|c->r[3]; // 800B17EC
  c->r[31]=c->r[4]|c->r[4]; // 800B17F0
  if (crb(c,2)) { goto L_800B1848; } // 800B17F4
  c->r[3]=c->r[31]|c->r[31]; // 800B17F8
  c->lr=0x800B1800u; f_80244520(c); // 800B17FC
  c->r[7]=c->r[3]|c->r[3]; // 800B1800
  c->r[9]=c->r[31]|c->r[31]; // 800B1804
  c->r[3]=0u+0x00000074u; // 800B1808
  c->r[4]=c->r[13]+0xFFFFA950u; // 800B180C
  c->r[5]=0u+0x00000000u; // 800B1810
  c->r[6]=0u+0x00002001u; // 800B1814
  c->r[8]=0u+0x00000000u; // 800B1818
  c->lr=0x800B1820u; f_80242DF0(c); // 800B181C
  c->r[4]=c->r[3]|c->r[3]; // 800B1820
  c->r[3]=0u+0x00000074u; // 800B1824
  c->r[5]=c->r[13]+0xFFFFA955u; // 800B1828
  c->r[6]=0u+0x00000000u; // 800B182C
  c->r[7]=0u+0x00001001u; // 800B1830
  c->lr=0x800B1838u; f_80244DB0(c); // 800B1834
  cmps(c,0,(int32_t)c->r[3],0); // 800B1838
  if (crb(c,2)) { goto L_800B1868; } // 800B183C
  c->lr=0x800B1844u; f_800B1760(c); // 800B1840
  goto L_800B1868; // 800B1844
L_800B1848:;
  c->r[3]=0u+0x00000074u; // 800B1848
  c->r[4]=c->r[13]+0xFFFFA95Au; // 800B184C
  c->r[5]=0u+0x00000000u; // 800B1850
  c->r[6]=0u+0x00001001u; // 800B1854
  c->lr=0x800B185Cu; f_80244D20(c); // 800B1858
  cmps(c,0,(int32_t)c->r[3],0); // 800B185C
  if (crb(c,2)) { goto L_800B1868; } // 800B1860
  c->lr=0x800B1868u; f_800B1760(c); // 800B1864
L_800B1868:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B1868
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B186C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B1870
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1874
  c->lr=c->r[0]; // 800B1878
  c->r[1]=c->r[1]+0x00000010u; // 800B187C
  return; // 800B1880
}

// fn_800B1884
void f_800B1884(Ctx* __restrict c) {
  trace_call(0x800B1884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1884
  c->r[0]=c->lr; // 800B1888
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B188C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1890
  c->r[31]=c->r[4]|c->r[4]; // 800B1894
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B1898
  c->r[30]=c->r[3]|c->r[3]; // 800B189C
  c->r[3]=c->r[31]|c->r[31]; // 800B18A0
  c->lr=0x800B18A8u; f_8030BD1C(c); // 800B18A4
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 800B18A8
  c->r[3]=c->r[31]|c->r[31]; // 800B18AC
  c->lr=0x800B18B4u; f_8030BD1C(c); // 800B18B0
  W8(c->r[30]+0x0000001Du,c->r[3]); // 800B18B4
  c->r[3]=c->r[31]|c->r[31]; // 800B18B8
  c->lr=0x800B18C0u; f_8030BD1C(c); // 800B18BC
  W8(c->r[30]+0x0000001Eu,c->r[3]); // 800B18C0
  c->r[3]=c->r[31]|c->r[31]; // 800B18C4
  c->lr=0x800B18CCu; f_8030BD1C(c); // 800B18C8
  W8(c->r[30]+0x0000001Fu,c->r[3]); // 800B18CC
  c->r[3]=c->r[31]|c->r[31]; // 800B18D0
  c->r[4]=0u+0x00000000u; // 800B18D4
  c->lr=0x800B18DCu; f_8030BE30(c); // 800B18D8
  W32(c->r[30]+0x00000020u,c->r[3]); // 800B18DC
  c->r[0]=0u+0x00000000u; // 800B18E0
  c->r[3]=c->r[31]|c->r[31]; // 800B18E4
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B18E8
  c->lr=0x800B18F0u; f_8030BD1C(c); // 800B18EC
  W32(c->r[30]+0x00000028u,c->r[3]); // 800B18F0
  c->r[3]=c->r[31]|c->r[31]; // 800B18F4
  c->lr=0x800B18FCu; f_8030C0A0(c); // 800B18F8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[1]);} // 800B18FC
  c->r[3]=c->r[31]|c->r[31]; // 800B1900
  c->lr=0x800B1908u; f_8030C0A0(c); // 800B1904
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800B1908
  c->r[3]=c->r[31]|c->r[31]; // 800B190C
  c->lr=0x800B1914u; f_8030BD1C(c); // 800B1910
  W32(c->r[30]+0x00000034u,c->r[3]); // 800B1914
  c->r[3]=c->r[31]|c->r[31]; // 800B1918
  c->lr=0x800B1920u; f_8030C0A0(c); // 800B191C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800B1920
  c->r[3]=c->r[31]|c->r[31]; // 800B1924
  c->lr=0x800B192Cu; f_8030C0A0(c); // 800B1928
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800B192C
  c->r[3]=c->r[31]|c->r[31]; // 800B1930
  c->lr=0x800B1938u; f_8030C0A0(c); // 800B1934
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800B1938
  c->r[3]=c->r[31]|c->r[31]; // 800B193C
  c->lr=0x800B1944u; f_8030C0A0(c); // 800B1940
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800B1944
  c->r[3]=c->r[31]|c->r[31]; // 800B1948
  c->lr=0x800B1950u; f_8030C0A0(c); // 800B194C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800B1950
  c->r[3]=c->r[31]|c->r[31]; // 800B1954
  c->lr=0x800B195Cu; f_8030C0A0(c); // 800B1958
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B195C
  c->r[3]=c->r[31]|c->r[31]; // 800B1960
  c->lr=0x800B1968u; f_8030C0A0(c); // 800B1964
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800B1968
  c->r[3]=c->r[31]|c->r[31]; // 800B196C
  c->lr=0x800B1974u; f_8030C0A0(c); // 800B1970
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1974
  c->r[3]=c->r[31]|c->r[31]; // 800B1978
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800B197C
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 800B1980
  c->lr=0x800B1988u; f_8030C0A0(c); // 800B1984
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 800B1988
  c->r[3]=c->r[31]|c->r[31]; // 800B198C
  c->lr=0x800B1994u; f_8030C0A0(c); // 800B1990
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800B1994
  c->r[3]=c->r[31]|c->r[31]; // 800B1998
  c->lr=0x800B19A0u; f_8030C0A0(c); // 800B199C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B19A0
  c->r[3]=c->r[31]|c->r[31]; // 800B19A4
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 800B19A8
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 800B19AC
  c->lr=0x800B19B4u; f_8030BD1C(c); // 800B19B0
  W8(c->r[30]+0x0000006Cu,c->r[3]); // 800B19B4
  c->r[3]=0u+0x00000000u; // 800B19B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B19BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B19C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B19C4
  c->lr=c->r[0]; // 800B19C8
  c->r[1]=c->r[1]+0x00000010u; // 800B19CC
  return; // 800B19D0
}

// fn_800B19D4
void f_800B19D4(Ctx* __restrict c) {
  trace_call(0x800B19D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B19D4
  c->r[0]=c->lr; // 800B19D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B19DC
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B19E0
  c->r[27]=c->r[3]|c->r[3]; // 800B19E4
  c->r[28]=c->r[4]|c->r[4]; // 800B19E8
  c->r[29]=c->r[5]|c->r[5]; // 800B19EC
  c->r[30]=c->r[6]|c->r[6]; // 800B19F0
  c->r[7]=R32(c->r[3]+0x00000070u); // 800B19F4
  cmps(c,0,(int32_t)c->r[7],0); // 800B19F8
  if (!crb(c,0)) { goto L_800B1A0C; } // 800B19FC
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B1A00
  W32(c->r[3]+0x00000070u,c->r[0]); // 800B1A04
  goto L_800B1A1C; // 800B1A08
L_800B1A0C:;
  c->r[0]=c->r[7]+0x00000001u; // 800B1A0C
  W32(c->r[3]+0x00000070u,c->r[0]); // 800B1A10
  cmps(c,0,(int32_t)c->r[0],1); // 800B1A14
  if (crb(c,1)) { goto L_800B1ADC; } // 800B1A18
L_800B1A1C:;
  c->r[3]=c->r[27]|c->r[27]; // 800B1A1C
  c->r[4]=c->r[28]|c->r[28]; // 800B1A20
  c->r[5]=c->r[29]|c->r[29]; // 800B1A24
  c->r[6]=c->r[30]|c->r[30]; // 800B1A28
  c->lr=0x800B1A30u; f_802B11C0(c); // 800B1A2C
  c->r[4]=R32(c->r[27]+0x00000020u); // 800B1A30
  cmps(c,0,(int32_t)c->r[4],0); // 800B1A34
  if (crb(c,2)) { goto L_800B1ADC; } // 800B1A38
  c->r[0]=0u+0x00000001u; // 800B1A3C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B1A40
  c->r[6]=c->r[28]|c->r[28]; // 800B1A44
  c->r[7]=c->r[29]|c->r[29]; // 800B1A48
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B1A4C
  c->r[8]=c->r[30]|c->r[30]; // 800B1A50
  c->r[9]=R32(c->r[27]+0x00000028u); // 800B1A54
  c->r[5]=0u+0x00000000u; // 800B1A58
  c->r[10]=0u+0x00000001u; // 800B1A5C
  c->lr=0x800B1A64u; f_80281A84(c); // 800B1A60
  cmps(c,0,(int32_t)c->r[3],0); // 800B1A64
  W32(c->r[27]+0x00000024u,c->r[3]); // 800B1A68
  if (crb(c,2)) { goto L_800B1A78; } // 800B1A6C
  c->lr=0x800B1A74u; f_80295B6C(c); // 800B1A70
  goto L_800B1ADC; // 800B1A74
L_800B1A78:;
  c->r[3]=R32(c->r[27]+0x00000028u); // 800B1A78
  c->r[4]=c->r[30]|c->r[30]; // 800B1A7C
  c->r[5]=c->r[29]|c->r[29]; // 800B1A80
  c->lr=0x800B1A88u; f_802C0F98(c); // 800B1A84
  c->r[31]=c->r[3]|c->r[3]; // 800B1A88
  c->r[3]=0u+0x00000044u; // 800B1A8C
  c->r[4]=c->r[13]+0xFFFFA95Fu; // 800B1A90
  c->r[5]=0u+0x00000000u; // 800B1A94
  c->r[6]=0u+0x00001001u; // 800B1A98
  c->lr=0x800B1AA0u; f_80244D20(c); // 800B1A9C
  cmps(c,0,(int32_t)c->r[3],0); // 800B1AA0
  if (crb(c,2)) { goto L_800B1AB8; } // 800B1AA4
  c->r[5]=R32(c->r[27]+0x00000020u); // 800B1AA8
  c->r[4]=c->r[31]|c->r[31]; // 800B1AAC
  c->r[6]=0u+0x00000000u; // 800B1AB0
  c->lr=0x800B1AB8u; f_8029316C(c); // 800B1AB4
L_800B1AB8:;
  W32(c->r[27]+0x00000024u,c->r[3]); // 800B1AB8
  c->r[4]=c->r[28]|c->r[28]; // 800B1ABC
  c->r[7]=R32(c->r[27]+0x00000028u); // 800B1AC0
  c->r[5]=c->r[29]|c->r[29]; // 800B1AC4
  c->r[6]=c->r[30]|c->r[30]; // 800B1AC8
  c->r[8]=0u+0x00000001u; // 800B1ACC
  c->r[9]=0u+0x00000000u; // 800B1AD0
  c->lr=0x800B1AD8u; f_8027FFF4(c); // 800B1AD4
  W32(c->r[27]+0x00000024u,c->r[3]); // 800B1AD8
L_800B1ADC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B1ADC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B1AE0
  c->lr=c->r[0]; // 800B1AE4
  c->r[1]=c->r[1]+0x00000030u; // 800B1AE8
  return; // 800B1AEC
}

// fn_800B1AF0
void f_800B1AF0(Ctx* __restrict c) {
  trace_call(0x800B1AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1AF0
  c->r[0]=c->lr; // 800B1AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1AF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1AFC
  c->r[31]=c->r[3]|c->r[3]; // 800B1B00
  c->r[0]=R32(c->r[3]+0x00000070u); // 800B1B04
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B1B08
  W32(c->r[3]+0x00000070u,c->r[0]); // 800B1B0C
  if (!crb(c,2)) { goto L_800B1B30; } // 800B1B10
  c->lr=0x800B1B18u; f_802B11D0(c); // 800B1B14
  c->r[3]=R32(c->r[31]+0x00000024u); // 800B1B18
  cmps(c,0,(int32_t)c->r[3],0); // 800B1B1C
  if (crb(c,2)) { goto L_800B1B30; } // 800B1B20
  c->lr=0x800B1B28u; f_80295B7C(c); // 800B1B24
  c->r[0]=0u+0x00000000u; // 800B1B28
  W32(c->r[31]+0x00000024u,c->r[0]); // 800B1B2C
L_800B1B30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1B30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1B34
  c->lr=c->r[0]; // 800B1B38
  c->r[1]=c->r[1]+0x00000010u; // 800B1B3C
  return; // 800B1B40
}

// fn_800B1B44
void f_800B1B44(Ctx* __restrict c) {
  trace_call(0x800B1B44u);
  return; // 800B1B44
}

// fn_800B1B48
void f_800B1B48(Ctx* __restrict c) {
  trace_call(0x800B1B48u);
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1B48
  c->r[5]=0u+0x0000007Fu; // 800B1B4C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1B50
  c->r[4]=0u+0x00000000u; // 800B1B54
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1B58
  c->r[0]=0u+0x00000004u; // 800B1B5C
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1B60
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1B64
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 800B1B68
  W8(c->r[3]+0x0000001Du,c->r[5]); // 800B1B6C
  W8(c->r[3]+0x0000001Eu,c->r[5]); // 800B1B70
  W8(c->r[3]+0x0000001Fu,c->r[5]); // 800B1B74
  W32(c->r[3]+0x00000020u,c->r[4]); // 800B1B78
  W32(c->r[3]+0x00000024u,c->r[4]); // 800B1B7C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B1B80
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 800B1B84
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[4]);} // 800B1B88
  W32(c->r[3]+0x00000034u,c->r[4]); // 800B1B8C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[3]);} // 800B1B90
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 800B1B94
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800B1B98
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800B1B9C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[4]);} // 800B1BA0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 800B1BA4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[2]);} // 800B1BA8
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[2]);} // 800B1BAC
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[4]);} // 800B1BB0
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[2]);} // 800B1BB4
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[2]);} // 800B1BB8
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 800B1BBC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[4]);} // 800B1BC0
  W8(c->r[3]+0x0000006Cu,c->r[4]); // 800B1BC4
  return; // 800B1BC8
}

// fn_800B1BCC
void f_800B1BCC(Ctx* __restrict c) {
  trace_call(0x800B1BCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1BCC
  c->r[0]=c->lr; // 800B1BD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B1BD4
  c->r[11]=c->r[1]+0x00000020u; // 800B1BD8
  c->lr=0x800B1BE0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1BDC
  cmps(c,0,(int32_t)c->r[5],0); // 800B1BE0
  c->r[28]=c->r[3]|c->r[3]; // 800B1BE4
  c->r[29]=c->r[4]|c->r[4]; // 800B1BE8
  c->r[30]=c->r[7]|c->r[7]; // 800B1BEC
  if (crb(c,2)) { goto L_800B1BFC; } // 800B1BF0
  c->r[31]=c->r[5]|c->r[5]; // 800B1BF4
  goto L_800B1C00; // 800B1BF8
L_800B1BFC:;
  c->r[31]=c->r[28]|c->r[28]; // 800B1BFC
L_800B1C00:;
  c->r[0]=R8(c->r[4]+0x0000001Cu); // 800B1C00
  c->r[3]=c->r[31]+0x00000020u; // 800B1C04
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 800B1C08
  c->r[0]=R8(c->r[4]+0x0000001Du); // 800B1C0C
  W8(c->r[31]+0x0000001Du,c->r[0]); // 800B1C10
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 800B1C14
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800B1C18
  c->r[0]=R8(c->r[4]+0x0000001Fu); // 800B1C1C
  c->r[4]=c->r[4]+0x00000020u; // 800B1C20
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 800B1C24
  c->lr=0x800B1C2Cu; f_8003BDD0(c); // 800B1C28
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C2C
  cmps(c,0,(int32_t)c->r[30],0); // 800B1C30
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B1C34
  {uint32_t ea=c->r[29]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C38
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B1C3C
  c->r[0]=R32(c->r[29]+0x00000034u); // 800B1C40
  W32(c->r[31]+0x00000034u,c->r[0]); // 800B1C44
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C48
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800B1C4C
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C50
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B1C54
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C58
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800B1C5C
  {uint32_t ea=c->r[29]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C60
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800B1C64
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C68
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800B1C6C
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C70
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B1C74
  {uint32_t ea=c->r[29]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C78
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800B1C7C
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C80
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B1C84
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C88
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B1C8C
  {uint32_t ea=c->r[29]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C90
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800B1C94
  {uint32_t ea=c->r[29]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C98
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800B1C9C
  c->r[0]=R8(c->r[29]+0x0000006Cu); // 800B1CA0
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 800B1CA4
  if (crb(c,2)) { goto L_800B1CCC; } // 800B1CA8
  c->r[3]=R32(c->r[28]+0x00000070u); // 800B1CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800B1CB0
  if (crb(c,1)) { goto L_800B1CC4; } // 800B1CB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B1CB8
  W32(c->r[28]+0x00000070u,c->r[0]); // 800B1CBC
  goto L_800B1CCC; // 800B1CC0
L_800B1CC4:;
  c->r[0]=c->r[3]+0x00000001u; // 800B1CC4
  W32(c->r[28]+0x00000070u,c->r[0]); // 800B1CC8
L_800B1CCC:;
  c->r[11]=c->r[1]+0x00000020u; // 800B1CCC
  c->lr=0x800B1CD4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1CD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1CD4
  c->lr=c->r[0]; // 800B1CD8
  c->r[1]=c->r[1]+0x00000020u; // 800B1CDC
  return; // 800B1CE0
}

// fn_800B1CE4
void f_800B1CE4(Ctx* __restrict c) {
  trace_call(0x800B1CE4u);
  c->r[3]=0u+0x00000000u; // 800B1CE4
  return; // 800B1CE8
}

// fn_800B1CEC
void f_800B1CEC(Ctx* __restrict c) {
  trace_call(0x800B1CECu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1CEC
  c->r[0]=c->lr; // 800B1CF0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800B1CF4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800B1CF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800B1CFC
  c->r[11]=c->r[1]+0x00000050u; // 800B1D00
  c->lr=0x800B1D08u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1D04
  c->r[6]=R8(c->r[4]+0x0000001Cu); // 800B1D08
  c->r[7]=0u+0x43300000u; // 800B1D0C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B1D10
  c->f[31]=c->f[1]; // 800B1D14
  c->r[0]=R8(c->r[5]+0x0000001Cu); // 800B1D18
  c->r[29]=c->r[3]|c->r[3]; // 800B1D1C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1D20
  c->r[30]=c->r[4]|c->r[4]; // 800B1D24
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[4]=RF64(ea);} // 800B1D28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800B1D2C
  c->r[31]=c->r[5]|c->r[5]; // 800B1D30
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1D34
  W32(c->r[1]+0x00000010u,c->r[7]); // 800B1D38
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 800B1D3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B1D40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1D44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B1D48
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1D4C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B1D50
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1D54
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1D58
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B1D5C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800B1D60
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B1D64
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800B1D68
  c->r[6]=R8(c->r[4]+0x0000001Du); // 800B1D6C
  c->r[0]=R8(c->r[5]+0x0000001Du); // 800B1D70
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1D78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B1D7C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B1D80
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B1D84
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B1D88
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1D8C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1D90
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1D94
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B1D98
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800B1D9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B1DA0
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800B1DA4
  c->r[6]=R8(c->r[4]+0x0000001Eu); // 800B1DA8
  c->r[0]=R8(c->r[5]+0x0000001Eu); // 800B1DAC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1DB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B1DB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B1DBC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B1DC0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B1DC4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1DC8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1DCC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1DD0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B1DD4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 800B1DD8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800B1DDC
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 800B1DE0
  c->r[6]=R8(c->r[4]+0x0000001Fu); // 800B1DE4
  c->r[0]=R8(c->r[5]+0x0000001Fu); // 800B1DE8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B1DEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1DF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B1DF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B1DF8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B1DFC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B1E00
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1E04
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1E08
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1E0C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B1E10
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800B1E14
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B1E18
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 800B1E1C
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1E20
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1E24
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1E28
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1E2C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1E30
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 800B1E34
  {uint32_t ea=c->r[4]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1E38
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1E3C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B1E40
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B1E44
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B1E48
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 800B1E4C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1E50
  c->f[2]=c->f[31]; // 800B1E54
  {uint32_t ea=c->r[5]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1E58
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B1E5C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B1E60
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B1E64
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[3]);} // 800B1E68
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1E6C
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1E70
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B1E74
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B1E78
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B1E7C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[3]);} // 800B1E80
  {uint32_t ea=c->r[4]+0x00000040u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1E84
  {uint32_t ea=c->r[5]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1E88
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B1E8C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B1E90
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B1E94
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[3]);} // 800B1E98
  {uint32_t ea=c->r[4]+0x00000044u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1E9C
  {uint32_t ea=c->r[5]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1EA0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B1EA4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B1EA8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B1EAC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[3]);} // 800B1EB0
  {uint32_t ea=c->r[4]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B1EB4
  c->r[4]=c->r[4]+0x0000004Cu; // 800B1EB8
  {uint32_t ea=c->r[5]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1EBC
  c->r[5]=c->r[5]+0x0000004Cu; // 800B1EC0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B1EC4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B1EC8
  c->f[1]=c->f[0]; // 800B1ECC
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 800B1ED0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800B1ED4
  c->r[3]=c->r[3]+0x0000004Cu; // 800B1ED8
  c->lr=0x800B1EE0u; f_8025E410(c); // 800B1EDC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1EE0
  c->f[2]=c->f[31]; // 800B1EE4
  c->r[3]=c->r[29]+0x0000005Cu; // 800B1EE8
  c->r[4]=c->r[30]+0x0000005Cu; // 800B1EEC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800B1EF0
  c->r[5]=c->r[31]+0x0000005Cu; // 800B1EF4
  c->lr=0x800B1EFCu; f_8025E410(c); // 800B1EF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800B1EFC
  c->r[11]=c->r[1]+0x00000050u; // 800B1F00
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800B1F04
  c->lr=0x800B1F0Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1F08
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B1F0C
  c->lr=c->r[0]; // 800B1F10
  c->r[1]=c->r[1]+0x00000060u; // 800B1F14
  return; // 800B1F18
}

// fn_800B1F1C
void f_800B1F1C(Ctx* __restrict c) {
  trace_call(0x800B1F1Cu);
  c->r[3]=0u+0x00000074u; // 800B1F1C
  return; // 800B1F20
}

// fn_800B1F24
void f_800B1F24(Ctx* __restrict c) {
  trace_call(0x800B1F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1F24
  c->r[0]=c->lr; // 800B1F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1F30
  c->r[31]=c->r[3]|c->r[3]; // 800B1F34
  c->lr=0x800B1F3Cu; f_800B1760(c); // 800B1F38
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B1F3C
  c->r[3]=0u+0x80420000u; // 800B1F40
  c->r[3]=c->r[3]+0xFFFFB074u; // 800B1F44
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B1F48
  c->r[0]=c->r[0]|0x80000000u; // 800B1F4C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B1F50
  c->r[3]=c->r[31]|c->r[31]; // 800B1F54
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B1F58
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B1F5C
  c->ctr=c->r[12]; // 800B1F60
  if (true) { c->lr=0x800B1F68u; dispatch(c,c->ctr); } // 800B1F64
  c->r[3]=c->r[31]|c->r[31]; // 800B1F68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1F6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1F70
  c->lr=c->r[0]; // 800B1F74
  c->r[1]=c->r[1]+0x00000010u; // 800B1F78
  return; // 800B1F7C
}

// fn_800B1F80
void f_800B1F80(Ctx* __restrict c) {
  trace_call(0x800B1F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1F80
  c->r[0]=c->lr; // 800B1F84
  cmps(c,0,(int32_t)c->r[3],0); // 800B1F88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1F8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B1F90
  c->r[30]=c->r[3]|c->r[3]; // 800B1F94
  c->r[31]=c->r[4]|c->r[4]; // 800B1F98
  if (crb(c,2)) { goto L_800B1FB8; } // 800B1F9C
  c->r[4]=0u+0x00000000u; // 800B1FA0
  c->lr=0x800B1FA8u; f_802B1180(c); // 800B1FA4
  cmps(c,0,(int32_t)c->r[31],0); // 800B1FA8
  if (!crb(c,1)) { goto L_800B1FB8; } // 800B1FAC
  c->r[3]=c->r[30]|c->r[30]; // 800B1FB0
  c->lr=0x800B1FB8u; f_80244DC0(c); // 800B1FB4
L_800B1FB8:;
  c->r[3]=c->r[30]|c->r[30]; // 800B1FB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B1FBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1FC0
  c->lr=c->r[0]; // 800B1FC4
  c->r[1]=c->r[1]+0x00000010u; // 800B1FC8
  return; // 800B1FCC
}

// fn_800B1FD0
void f_800B1FD0(Ctx* __restrict c) {
  trace_call(0x800B1FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1FD0
  c->r[0]=c->lr; // 800B1FD4
  c->r[3]=0u+0x00000074u; // 800B1FD8
  c->r[4]=c->r[13]+0xFFFFA964u; // 800B1FDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1FE0
  c->r[5]=0u+0x00000000u; // 800B1FE4
  c->r[6]=0u+0x00001001u; // 800B1FE8
  c->lr=0x800B1FF0u; f_80244D20(c); // 800B1FEC
  cmps(c,0,(int32_t)c->r[3],0); // 800B1FF0
  if (crb(c,2)) { goto L_800B1FFC; } // 800B1FF4
  c->lr=0x800B1FFCu; f_800B1F24(c); // 800B1FF8
L_800B1FFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1FFC
  c->lr=c->r[0]; // 800B2000
  c->r[1]=c->r[1]+0x00000010u; // 800B2004
  return; // 800B2008
}

// fn_800B200C
void f_800B200C(Ctx* __restrict c) {
  trace_call(0x800B200Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B200C
  c->r[0]=c->lr; // 800B2010
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2018
  c->r[31]=c->r[3]|c->r[3]; // 800B201C
  c->lr=0x800B2024u; f_80244520(c); // 800B2020
  c->r[7]=c->r[3]|c->r[3]; // 800B2024
  c->r[9]=c->r[31]|c->r[31]; // 800B2028
  c->r[3]=0u+0x00000074u; // 800B202C
  c->r[4]=c->r[13]+0xFFFFA969u; // 800B2030
  c->r[5]=0u+0x00000000u; // 800B2034
  c->r[6]=0u+0x00002001u; // 800B2038
  c->r[8]=0u+0x00000000u; // 800B203C
  c->lr=0x800B2044u; f_80242DF0(c); // 800B2040
  c->r[4]=c->r[3]|c->r[3]; // 800B2044
  c->r[3]=0u+0x00000074u; // 800B2048
  c->r[5]=c->r[13]+0xFFFFA96Eu; // 800B204C
  c->r[6]=0u+0x00000000u; // 800B2050
  c->r[7]=0u+0x00001001u; // 800B2054
  c->lr=0x800B205Cu; f_80244DB0(c); // 800B2058
  cmps(c,0,(int32_t)c->r[3],0); // 800B205C
  if (crb(c,2)) { goto L_800B2068; } // 800B2060
  c->lr=0x800B2068u; f_800B1F24(c); // 800B2064
L_800B2068:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B206C
  c->lr=c->r[0]; // 800B2070
  c->r[1]=c->r[1]+0x00000010u; // 800B2074
  return; // 800B2078
}

// fn_800B207C
void f_800B207C(Ctx* __restrict c) {
  trace_call(0x800B207Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B207C
  c->r[0]=c->lr; // 800B2080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2088
  c->r[31]=c->r[3]|c->r[3]; // 800B208C
  c->lr=0x800B2094u; f_802B1168(c); // 800B2090
  c->r[6]=0u+0x80420000u; // 800B2094
  c->r[5]=0u+0x80410000u; // 800B2098
  c->r[4]=0u+0x00000000u; // 800B209C
  c->r[3]=0u+0x36140000u; // 800B20A0
  c->r[0]=c->r[3]+0x00004E4Bu; // 800B20A4
  c->r[6]=c->r[6]+0xFFFFB038u; // 800B20A8
  c->r[5]=c->r[5]+0xFFFFCA3Au; // 800B20AC
  W32(c->r[31]+0x00000018u,c->r[6]); // 800B20B0
  c->r[3]=c->r[31]|c->r[31]; // 800B20B4
  W32(c->r[31]+0x00000000u,c->r[5]); // 800B20B8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800B20BC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800B20C0
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B20C4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B20C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B20CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B20D0
  c->lr=c->r[0]; // 800B20D4
  c->r[1]=c->r[1]+0x00000010u; // 800B20D8
  return; // 800B20DC
}

// fn_800B20E0
void f_800B20E0(Ctx* __restrict c) {
  trace_call(0x800B20E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B20E0
  c->r[0]=c->lr; // 800B20E4
  cmps(c,0,(int32_t)c->r[4],0); // 800B20E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B20EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B20F0
  c->r[30]=c->r[3]|c->r[3]; // 800B20F4
  c->r[31]=c->r[4]|c->r[4]; // 800B20F8
  if (crb(c,2)) { goto L_800B2150; } // 800B20FC
  c->r[3]=c->r[31]|c->r[31]; // 800B2100
  c->lr=0x800B2108u; f_80244520(c); // 800B2104
  c->r[7]=c->r[3]|c->r[3]; // 800B2108
  c->r[9]=c->r[31]|c->r[31]; // 800B210C
  c->r[3]=0u+0x0000001Cu; // 800B2110
  c->r[4]=c->r[13]+0xFFFFA973u; // 800B2114
  c->r[5]=0u+0x00000000u; // 800B2118
  c->r[6]=0u+0x00002001u; // 800B211C
  c->r[8]=0u+0x00000000u; // 800B2120
  c->lr=0x800B2128u; f_80242DF0(c); // 800B2124
  c->r[4]=c->r[3]|c->r[3]; // 800B2128
  c->r[3]=0u+0x0000001Cu; // 800B212C
  c->r[5]=c->r[13]+0xFFFFA978u; // 800B2130
  c->r[6]=0u+0x00000000u; // 800B2134
  c->r[7]=0u+0x00001001u; // 800B2138
  c->lr=0x800B2140u; f_80244DB0(c); // 800B213C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2140
  if (crb(c,2)) { goto L_800B2170; } // 800B2144
  c->lr=0x800B214Cu; f_800B207C(c); // 800B2148
  goto L_800B2170; // 800B214C
L_800B2150:;
  c->r[3]=0u+0x0000001Cu; // 800B2150
  c->r[4]=c->r[13]+0xFFFFA97Du; // 800B2154
  c->r[5]=0u+0x00000000u; // 800B2158
  c->r[6]=0u+0x00001001u; // 800B215C
  c->lr=0x800B2164u; f_80244D20(c); // 800B2160
  cmps(c,0,(int32_t)c->r[3],0); // 800B2164
  if (crb(c,2)) { goto L_800B2170; } // 800B2168
  c->lr=0x800B2170u; f_800B207C(c); // 800B216C
L_800B2170:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B2170
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B2174
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B2178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B217C
  c->lr=c->r[0]; // 800B2180
  c->r[1]=c->r[1]+0x00000010u; // 800B2184
  return; // 800B2188
}

// fn_800B218C
void f_800B218C(Ctx* __restrict c) {
  trace_call(0x800B218Cu);
  c->r[3]=0u+0x00000000u; // 800B218C
  return; // 800B2190
}

// fn_800B2194
void f_800B2194(Ctx* __restrict c) {
  trace_call(0x800B2194u);
  return; // 800B2194
}

// fn_800B2198
void f_800B2198(Ctx* __restrict c) {
  trace_call(0x800B2198u);
  return; // 800B2198
}

// fn_800B219C
void f_800B219C(Ctx* __restrict c) {
  trace_call(0x800B219Cu);
  c->r[3]=0u+0x00000000u; // 800B219C
  return; // 800B21A0
}

// fn_800B21A4
void f_800B21A4(Ctx* __restrict c) {
  trace_call(0x800B21A4u);
  c->r[3]=0u+0x0000001Cu; // 800B21A4
  return; // 800B21A8
}

// fn_800B21AC
void f_800B21AC(Ctx* __restrict c) {
  trace_call(0x800B21ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B21AC
  c->r[0]=c->lr; // 800B21B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B21B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B21B8
  c->r[31]=c->r[3]|c->r[3]; // 800B21BC
  c->lr=0x800B21C4u; f_800B207C(c); // 800B21C0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B21C4
  c->r[3]=0u+0x80420000u; // 800B21C8
  c->r[3]=c->r[3]+0xFFFFAFF8u; // 800B21CC
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B21D0
  c->r[0]=c->r[0]|0x80000000u; // 800B21D4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B21D8
  c->r[3]=c->r[31]|c->r[31]; // 800B21DC
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B21E0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B21E4
  c->ctr=c->r[12]; // 800B21E8
  if (true) { c->lr=0x800B21F0u; dispatch(c,c->ctr); } // 800B21EC
  c->r[3]=c->r[31]|c->r[31]; // 800B21F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B21F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B21F8
  c->lr=c->r[0]; // 800B21FC
  c->r[1]=c->r[1]+0x00000010u; // 800B2200
  return; // 800B2204
}

// fn_800B2208
void f_800B2208(Ctx* __restrict c) {
  trace_call(0x800B2208u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2208
  c->r[0]=c->lr; // 800B220C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2214
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B2218
  c->r[30]=c->r[3]|c->r[3]; // 800B221C
  c->r[31]=c->r[4]|c->r[4]; // 800B2220
  if (crb(c,2)) { goto L_800B2240; } // 800B2224
  c->r[4]=0u+0x00000000u; // 800B2228
  c->lr=0x800B2230u; f_802B1180(c); // 800B222C
  cmps(c,0,(int32_t)c->r[31],0); // 800B2230
  if (!crb(c,1)) { goto L_800B2240; } // 800B2234
  c->r[3]=c->r[30]|c->r[30]; // 800B2238
  c->lr=0x800B2240u; f_80244DC0(c); // 800B223C
L_800B2240:;
  c->r[3]=c->r[30]|c->r[30]; // 800B2240
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B2244
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2248
  c->lr=c->r[0]; // 800B224C
  c->r[1]=c->r[1]+0x00000010u; // 800B2250
  return; // 800B2254
}

// fn_800B2258
void f_800B2258(Ctx* __restrict c) {
  trace_call(0x800B2258u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2258
  c->r[0]=c->lr; // 800B225C
  c->r[3]=0u+0x0000001Cu; // 800B2260
  c->r[4]=c->r[13]+0xFFFFA982u; // 800B2264
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2268
  c->r[5]=0u+0x00000000u; // 800B226C
  c->r[6]=0u+0x00001001u; // 800B2270
  c->lr=0x800B2278u; f_80244D20(c); // 800B2274
  cmps(c,0,(int32_t)c->r[3],0); // 800B2278
  if (crb(c,2)) { goto L_800B2284; } // 800B227C
  c->lr=0x800B2284u; f_800B21AC(c); // 800B2280
L_800B2284:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2284
  c->lr=c->r[0]; // 800B2288
  c->r[1]=c->r[1]+0x00000010u; // 800B228C
  return; // 800B2290
}

// fn_800B2294
void f_800B2294(Ctx* __restrict c) {
  trace_call(0x800B2294u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2294
  c->r[0]=c->lr; // 800B2298
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B229C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B22A0
  c->r[31]=c->r[3]|c->r[3]; // 800B22A4
  c->lr=0x800B22ACu; f_80244520(c); // 800B22A8
  c->r[7]=c->r[3]|c->r[3]; // 800B22AC
  c->r[9]=c->r[31]|c->r[31]; // 800B22B0
  c->r[3]=0u+0x0000001Cu; // 800B22B4
  c->r[4]=c->r[13]+0xFFFFA987u; // 800B22B8
  c->r[5]=0u+0x00000000u; // 800B22BC
  c->r[6]=0u+0x00002001u; // 800B22C0
  c->r[8]=0u+0x00000000u; // 800B22C4
  c->lr=0x800B22CCu; f_80242DF0(c); // 800B22C8
  c->r[4]=c->r[3]|c->r[3]; // 800B22CC
  c->r[3]=0u+0x0000001Cu; // 800B22D0
  c->r[5]=c->r[13]+0xFFFFA98Cu; // 800B22D4
  c->r[6]=0u+0x00000000u; // 800B22D8
  c->r[7]=0u+0x00001001u; // 800B22DC
  c->lr=0x800B22E4u; f_80244DB0(c); // 800B22E0
  cmps(c,0,(int32_t)c->r[3],0); // 800B22E4
  if (crb(c,2)) { goto L_800B22F0; } // 800B22E8
  c->lr=0x800B22F0u; f_800B21AC(c); // 800B22EC
L_800B22F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B22F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B22F4
  c->lr=c->r[0]; // 800B22F8
  c->r[1]=c->r[1]+0x00000010u; // 800B22FC
  return; // 800B2300
}

// fn_800B2304
void f_800B2304(Ctx* __restrict c) {
  trace_call(0x800B2304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2304
  c->r[0]=c->lr; // 800B2308
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B230C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2310
  c->r[31]=c->r[3]|c->r[3]; // 800B2314
  c->lr=0x800B231Cu; f_802B1168(c); // 800B2318
  c->r[8]=0u+0x80420000u; // 800B231C
  c->r[6]=0u+0x80410000u; // 800B2320
  c->r[7]=0u+0x00000000u; // 800B2324
  c->r[5]=0u+0xAAD30000u; // 800B2328
  c->r[4]=0u+0xBD360000u; // 800B232C
  c->r[3]=0u+0xF97A0000u; // 800B2330
  c->r[0]=c->r[3]+0x00001C47u; // 800B2334
  c->r[8]=c->r[8]+0xFFFFAFBCu; // 800B2338
  c->r[6]=c->r[6]+0xFFFFCA4Eu; // 800B233C
  c->r[5]=c->r[5]+0xFFFFBCD2u; // 800B2340
  c->r[4]=c->r[4]+0xFFFFAD10u; // 800B2344
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B2348
  c->r[3]=c->r[31]|c->r[31]; // 800B234C
  W32(c->r[31]+0x00000088u,c->r[7]); // 800B2350
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B2354
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B2358
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B235C
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B2360
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B2364
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2368
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B236C
  c->lr=c->r[0]; // 800B2370
  c->r[1]=c->r[1]+0x00000010u; // 800B2374
  return; // 800B2378
}

// fn_800B237C
void f_800B237C(Ctx* __restrict c) {
  trace_call(0x800B237Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B237C
  c->r[0]=c->lr; // 800B2380
  cmps(c,0,(int32_t)c->r[4],0); // 800B2384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2388
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B238C
  c->r[30]=c->r[3]|c->r[3]; // 800B2390
  c->r[31]=c->r[4]|c->r[4]; // 800B2394
  if (crb(c,2)) { goto L_800B23EC; } // 800B2398
  c->r[3]=c->r[31]|c->r[31]; // 800B239C
  c->lr=0x800B23A4u; f_80244520(c); // 800B23A0
  c->r[7]=c->r[3]|c->r[3]; // 800B23A4
  c->r[9]=c->r[31]|c->r[31]; // 800B23A8
  c->r[3]=0u+0x0000008Cu; // 800B23AC
  c->r[4]=c->r[13]+0xFFFFA991u; // 800B23B0
  c->r[5]=0u+0x00000000u; // 800B23B4
  c->r[6]=0u+0x00002001u; // 800B23B8
  c->r[8]=0u+0x00000000u; // 800B23BC
  c->lr=0x800B23C4u; f_80242DF0(c); // 800B23C0
  c->r[4]=c->r[3]|c->r[3]; // 800B23C4
  c->r[3]=0u+0x0000008Cu; // 800B23C8
  c->r[5]=c->r[13]+0xFFFFA996u; // 800B23CC
  c->r[6]=0u+0x00000000u; // 800B23D0
  c->r[7]=0u+0x00001001u; // 800B23D4
  c->lr=0x800B23DCu; f_80244DB0(c); // 800B23D8
  cmps(c,0,(int32_t)c->r[3],0); // 800B23DC
  if (crb(c,2)) { goto L_800B240C; } // 800B23E0
  c->lr=0x800B23E8u; f_800B2304(c); // 800B23E4
  goto L_800B240C; // 800B23E8
L_800B23EC:;
  c->r[3]=0u+0x0000008Cu; // 800B23EC
  c->r[4]=c->r[13]+0xFFFFA99Bu; // 800B23F0
  c->r[5]=0u+0x00000000u; // 800B23F4
  c->r[6]=0u+0x00001001u; // 800B23F8
  c->lr=0x800B2400u; f_80244D20(c); // 800B23FC
  cmps(c,0,(int32_t)c->r[3],0); // 800B2400
  if (crb(c,2)) { goto L_800B240C; } // 800B2404
  c->lr=0x800B240Cu; f_800B2304(c); // 800B2408
L_800B240C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B240C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B2410
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B2414
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2418
  c->lr=c->r[0]; // 800B241C
  c->r[1]=c->r[1]+0x00000010u; // 800B2420
  return; // 800B2424
}

// fn_800B2428
void f_800B2428(Ctx* __restrict c) {
  trace_call(0x800B2428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2428
  c->r[0]=c->lr; // 800B242C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2434
  c->r[31]=c->r[4]|c->r[4]; // 800B2438
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B243C
  c->r[30]=c->r[3]|c->r[3]; // 800B2440
  c->r[3]=c->r[31]|c->r[31]; // 800B2444
  c->lr=0x800B244Cu; f_8030BD1C(c); // 800B2448
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B244C
  c->r[3]=c->r[31]|c->r[31]; // 800B2450
  c->lr=0x800B2458u; f_8030BD1C(c); // 800B2454
  W32(c->r[30]+0x00000020u,c->r[3]); // 800B2458
  c->r[3]=c->r[31]|c->r[31]; // 800B245C
  c->r[4]=0u+0x00000000u; // 800B2460
  c->lr=0x800B2468u; f_8030BE30(c); // 800B2464
  W32(c->r[30]+0x00000024u,c->r[3]); // 800B2468
  c->r[0]=0u+0x00000000u; // 800B246C
  c->r[3]=c->r[31]|c->r[31]; // 800B2470
  W32(c->r[30]+0x00000028u,c->r[0]); // 800B2474
  c->lr=0x800B247Cu; f_8030BD1C(c); // 800B2478
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800B247C
  c->r[3]=c->r[31]|c->r[31]; // 800B2480
  c->lr=0x800B2488u; f_8030BD1C(c); // 800B2484
  W8(c->r[30]+0x00000030u,c->r[3]); // 800B2488
  c->r[3]=c->r[31]|c->r[31]; // 800B248C
  c->lr=0x800B2494u; f_8030BD1C(c); // 800B2490
  W8(c->r[30]+0x00000031u,c->r[3]); // 800B2494
  c->r[3]=c->r[31]|c->r[31]; // 800B2498
  c->lr=0x800B24A0u; f_8030BD1C(c); // 800B249C
  W8(c->r[30]+0x00000032u,c->r[3]); // 800B24A0
  c->r[3]=c->r[31]|c->r[31]; // 800B24A4
  c->lr=0x800B24ACu; f_8030BD1C(c); // 800B24A8
  W8(c->r[30]+0x00000033u,c->r[3]); // 800B24AC
  c->r[3]=c->r[31]|c->r[31]; // 800B24B0
  c->lr=0x800B24B8u; f_8030BD1C(c); // 800B24B4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800B24B8
  c->r[3]=c->r[31]|c->r[31]; // 800B24BC
  c->lr=0x800B24C4u; f_8030C0A0(c); // 800B24C0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800B24C4
  c->r[3]=c->r[31]|c->r[31]; // 800B24C8
  c->lr=0x800B24D0u; f_8030BD1C(c); // 800B24CC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800B24D0
  c->r[3]=c->r[31]|c->r[31]; // 800B24D4
  c->lr=0x800B24DCu; f_8030C0A0(c); // 800B24D8
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800B24DC
  c->r[3]=c->r[31]|c->r[31]; // 800B24E0
  c->lr=0x800B24E8u; f_8030C0A0(c); // 800B24E4
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800B24E8
  c->r[3]=c->r[31]|c->r[31]; // 800B24EC
  c->lr=0x800B24F4u; f_8030C0A0(c); // 800B24F0
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800B24F4
  c->r[3]=c->r[31]|c->r[31]; // 800B24F8
  c->lr=0x800B2500u; f_8030C0A0(c); // 800B24FC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B2500
  c->r[3]=c->r[31]|c->r[31]; // 800B2504
  c->lr=0x800B250Cu; f_8030C0A0(c); // 800B2508
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B250C
  c->r[3]=c->r[31]|c->r[31]; // 800B2510
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800B2514
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 800B2518
  c->lr=0x800B2520u; f_8030C0A0(c); // 800B251C
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800B2520
  c->r[3]=c->r[31]|c->r[31]; // 800B2524
  c->lr=0x800B252Cu; f_8030C0A0(c); // 800B2528
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 800B252C
  c->r[3]=c->r[31]|c->r[31]; // 800B2530
  c->lr=0x800B2538u; f_8030C0A0(c); // 800B2534
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800B2538
  c->r[3]=c->r[31]|c->r[31]; // 800B253C
  c->lr=0x800B2544u; f_8030C0A0(c); // 800B2540
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 800B2544
  c->r[3]=c->r[31]|c->r[31]; // 800B2548
  c->lr=0x800B2550u; f_8030BD1C(c); // 800B254C
  W8(c->r[30]+0x00000068u,c->r[3]); // 800B2550
  c->r[3]=c->r[31]|c->r[31]; // 800B2554
  c->lr=0x800B255Cu; f_8030BD1C(c); // 800B2558
  W8(c->r[30]+0x00000069u,c->r[3]); // 800B255C
  c->r[3]=c->r[31]|c->r[31]; // 800B2560
  c->lr=0x800B2568u; f_8030C0A0(c); // 800B2564
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[1]);} // 800B2568
  c->r[3]=c->r[31]|c->r[31]; // 800B256C
  c->lr=0x800B2574u; f_8030C0A0(c); // 800B2570
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 800B2574
  c->r[3]=c->r[31]|c->r[31]; // 800B2578
  c->lr=0x800B2580u; f_8030C0A0(c); // 800B257C
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800B2580
  c->r[3]=c->r[31]|c->r[31]; // 800B2584
  c->lr=0x800B258Cu; f_8030C0A0(c); // 800B2588
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 800B258C
  c->r[3]=c->r[31]|c->r[31]; // 800B2590
  c->lr=0x800B2598u; f_8030BD1C(c); // 800B2594
  W8(c->r[30]+0x0000007Cu,c->r[3]); // 800B2598
  c->r[3]=c->r[31]|c->r[31]; // 800B259C
  c->lr=0x800B25A4u; f_8030C0A0(c); // 800B25A0
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800B25A4
  c->r[3]=c->r[31]|c->r[31]; // 800B25A8
  c->lr=0x800B25B0u; f_8030C0A0(c); // 800B25AC
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800B25B0
  c->r[3]=0u+0x00000000u; // 800B25B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B25B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B25BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B25C0
  c->lr=c->r[0]; // 800B25C4
  c->r[1]=c->r[1]+0x00000010u; // 800B25C8
  return; // 800B25CC
}

// fn_800B25D0
void f_800B25D0(Ctx* __restrict c) {
  trace_call(0x800B25D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B25D0
  c->r[0]=c->lr; // 800B25D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B25D8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B25DC
  c->r[27]=c->r[3]|c->r[3]; // 800B25E0
  c->r[28]=c->r[4]|c->r[4]; // 800B25E4
  c->r[29]=c->r[5]|c->r[5]; // 800B25E8
  c->r[30]=c->r[6]|c->r[6]; // 800B25EC
  c->r[7]=R32(c->r[3]+0x00000088u); // 800B25F0
  cmps(c,0,(int32_t)c->r[7],0); // 800B25F4
  if (!crb(c,0)) { goto L_800B2608; } // 800B25F8
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B25FC
  W32(c->r[3]+0x00000088u,c->r[0]); // 800B2600
  goto L_800B2618; // 800B2604
L_800B2608:;
  c->r[0]=c->r[7]+0x00000001u; // 800B2608
  W32(c->r[3]+0x00000088u,c->r[0]); // 800B260C
  cmps(c,0,(int32_t)c->r[0],1); // 800B2610
  if (crb(c,1)) { goto L_800B26D8; } // 800B2614
L_800B2618:;
  c->r[3]=c->r[27]|c->r[27]; // 800B2618
  c->r[4]=c->r[28]|c->r[28]; // 800B261C
  c->r[5]=c->r[29]|c->r[29]; // 800B2620
  c->r[6]=c->r[30]|c->r[30]; // 800B2624
  c->lr=0x800B262Cu; f_802B11C0(c); // 800B2628
  c->r[4]=R32(c->r[27]+0x00000024u); // 800B262C
  cmps(c,0,(int32_t)c->r[4],0); // 800B2630
  if (crb(c,2)) { goto L_800B26D8; } // 800B2634
  c->r[0]=0u+0x00000001u; // 800B2638
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B263C
  c->r[6]=c->r[28]|c->r[28]; // 800B2640
  c->r[7]=c->r[29]|c->r[29]; // 800B2644
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B2648
  c->r[8]=c->r[30]|c->r[30]; // 800B264C
  c->r[9]=R32(c->r[27]+0x0000002Cu); // 800B2650
  c->r[5]=0u+0x00000000u; // 800B2654
  c->r[10]=0u+0x00000001u; // 800B2658
  c->lr=0x800B2660u; f_80281A84(c); // 800B265C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2660
  W32(c->r[27]+0x00000028u,c->r[3]); // 800B2664
  if (crb(c,2)) { goto L_800B2674; } // 800B2668
  c->lr=0x800B2670u; f_80295B6C(c); // 800B266C
  goto L_800B26D8; // 800B2670
L_800B2674:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 800B2674
  c->r[4]=c->r[30]|c->r[30]; // 800B2678
  c->r[5]=c->r[29]|c->r[29]; // 800B267C
  c->lr=0x800B2684u; f_802C0F98(c); // 800B2680
  c->r[31]=c->r[3]|c->r[3]; // 800B2684
  c->r[3]=0u+0x00000044u; // 800B2688
  c->r[4]=c->r[13]+0xFFFFA9A0u; // 800B268C
  c->r[5]=0u+0x00000000u; // 800B2690
  c->r[6]=0u+0x00001001u; // 800B2694
  c->lr=0x800B269Cu; f_80244D20(c); // 800B2698
  cmps(c,0,(int32_t)c->r[3],0); // 800B269C
  if (crb(c,2)) { goto L_800B26B4; } // 800B26A0
  c->r[5]=R32(c->r[27]+0x00000024u); // 800B26A4
  c->r[4]=c->r[31]|c->r[31]; // 800B26A8
  c->r[6]=0u+0x00000000u; // 800B26AC
  c->lr=0x800B26B4u; f_8029316C(c); // 800B26B0
L_800B26B4:;
  W32(c->r[27]+0x00000028u,c->r[3]); // 800B26B4
  c->r[4]=c->r[28]|c->r[28]; // 800B26B8
  c->r[7]=R32(c->r[27]+0x0000002Cu); // 800B26BC
  c->r[5]=c->r[29]|c->r[29]; // 800B26C0
  c->r[6]=c->r[30]|c->r[30]; // 800B26C4
  c->r[8]=0u+0x00000001u; // 800B26C8
  c->r[9]=0u+0x00000000u; // 800B26CC
  c->lr=0x800B26D4u; f_8027FFF4(c); // 800B26D0
  W32(c->r[27]+0x00000028u,c->r[3]); // 800B26D4
L_800B26D8:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B26D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B26DC
  c->lr=c->r[0]; // 800B26E0
  c->r[1]=c->r[1]+0x00000030u; // 800B26E4
  return; // 800B26E8
}

// fn_800B26EC
void f_800B26EC(Ctx* __restrict c) {
  trace_call(0x800B26ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B26EC
  c->r[0]=c->lr; // 800B26F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B26F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B26F8
  c->r[31]=c->r[3]|c->r[3]; // 800B26FC
  c->r[0]=R32(c->r[3]+0x00000088u); // 800B2700
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B2704
  W32(c->r[3]+0x00000088u,c->r[0]); // 800B2708
  if (!crb(c,2)) { goto L_800B272C; } // 800B270C
  c->lr=0x800B2714u; f_802B11D0(c); // 800B2710
  c->r[3]=R32(c->r[31]+0x00000028u); // 800B2714
  cmps(c,0,(int32_t)c->r[3],0); // 800B2718
  if (crb(c,2)) { goto L_800B272C; } // 800B271C
  c->lr=0x800B2724u; f_80295B7C(c); // 800B2720
  c->r[0]=0u+0x00000000u; // 800B2724
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B2728
L_800B272C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B272C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2730
  c->lr=c->r[0]; // 800B2734
  c->r[1]=c->r[1]+0x00000010u; // 800B2738
  return; // 800B273C
}

// fn_800B2740
void f_800B2740(Ctx* __restrict c) {
  trace_call(0x800B2740u);
  return; // 800B2740
}

// fn_800B2744
void f_800B2744(Ctx* __restrict c) {
  trace_call(0x800B2744u);
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B2744
  c->r[7]=0u+0x00000000u; // 800B2748
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B274C
  c->r[5]=0u+0x00000080u; // 800B2750
  {uint32_t ea=c->r[2]+0xFFFF870Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800B2754
  c->r[9]=0u+0x00000032u; // 800B2758
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B275C
  c->r[8]=0u+0x0000000Au; // 800B2760
  {uint32_t ea=c->r[2]+0xFFFF8754u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B2764
  c->r[6]=0u+0x00000004u; // 800B2768
  {uint32_t ea=c->r[2]+0xFFFF8744u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B276C
  c->r[4]=0u+0x000000FFu; // 800B2770
  {uint32_t ea=c->r[2]+0xFFFF87D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2774
  c->r[0]=0u+0x00000001u; // 800B2778
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 800B277C
  W32(c->r[3]+0x00000020u,c->r[8]); // 800B2780
  W32(c->r[3]+0x00000024u,c->r[7]); // 800B2784
  W32(c->r[3]+0x00000028u,c->r[7]); // 800B2788
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 800B278C
  W8(c->r[3]+0x00000030u,c->r[5]); // 800B2790
  W8(c->r[3]+0x00000031u,c->r[5]); // 800B2794
  W8(c->r[3]+0x00000032u,c->r[5]); // 800B2798
  W8(c->r[3]+0x00000033u,c->r[4]); // 800B279C
  W32(c->r[3]+0x00000034u,c->r[7]); // 800B27A0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[6]);} // 800B27A4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800B27A8
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[5]);} // 800B27AC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[5]);} // 800B27B0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[4]);} // 800B27B4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[3]);} // 800B27B8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[4]);} // 800B27BC
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[2]);} // 800B27C0
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[2]);} // 800B27C4
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[2]);} // 800B27C8
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800B27CC
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 800B27D0
  W8(c->r[3]+0x00000068u,c->r[7]); // 800B27D4
  W8(c->r[3]+0x00000069u,c->r[7]); // 800B27D8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[4]);} // 800B27DC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[4]);} // 800B27E0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[4]);} // 800B27E4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[4]);} // 800B27E8
  W8(c->r[3]+0x0000007Cu,c->r[7]); // 800B27EC
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[4]);} // 800B27F0
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 800B27F4
  return; // 800B27F8
}

// fn_800B27FC
void f_800B27FC(Ctx* __restrict c) {
  trace_call(0x800B27FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B27FC
  c->r[0]=c->lr; // 800B2800
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B2804
  c->r[11]=c->r[1]+0x00000020u; // 800B2808
  c->lr=0x800B2810u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B280C
  cmps(c,0,(int32_t)c->r[5],0); // 800B2810
  c->r[31]=c->r[3]|c->r[3]; // 800B2814
  c->r[28]=c->r[4]|c->r[4]; // 800B2818
  c->r[29]=c->r[7]|c->r[7]; // 800B281C
  if (crb(c,2)) { goto L_800B282C; } // 800B2820
  c->r[30]=c->r[5]|c->r[5]; // 800B2824
  goto L_800B2830; // 800B2828
L_800B282C:;
  c->r[30]=c->r[31]|c->r[31]; // 800B282C
L_800B2830:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800B2830
  c->r[3]=c->r[30]+0x00000024u; // 800B2834
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800B2838
  c->r[0]=R32(c->r[4]+0x00000020u); // 800B283C
  c->r[4]=c->r[4]+0x00000024u; // 800B2840
  W32(c->r[30]+0x00000020u,c->r[0]); // 800B2844
  c->lr=0x800B284Cu; f_8003BDD0(c); // 800B2848
  c->r[0]=R8(c->r[28]+0x00000030u); // 800B284C
  cmps(c,0,(int32_t)c->r[29],0); // 800B2850
  W8(c->r[30]+0x00000030u,c->r[0]); // 800B2854
  c->r[0]=R8(c->r[28]+0x00000031u); // 800B2858
  W8(c->r[30]+0x00000031u,c->r[0]); // 800B285C
  c->r[0]=R8(c->r[28]+0x00000032u); // 800B2860
  W8(c->r[30]+0x00000032u,c->r[0]); // 800B2864
  c->r[0]=R8(c->r[28]+0x00000033u); // 800B2868
  W8(c->r[30]+0x00000033u,c->r[0]); // 800B286C
  c->r[0]=R32(c->r[28]+0x00000034u); // 800B2870
  W32(c->r[30]+0x00000034u,c->r[0]); // 800B2874
  {uint32_t ea=c->r[28]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2878
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 800B287C
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 800B2880
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800B2884
  {uint32_t ea=c->r[28]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2888
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800B288C
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2890
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800B2894
  {uint32_t ea=c->r[28]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2898
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800B289C
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28A0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B28A4
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28A8
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 800B28AC
  {uint32_t ea=c->r[28]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28B0
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 800B28B4
  {uint32_t ea=c->r[28]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28B8
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B28BC
  {uint32_t ea=c->r[28]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28C0
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 800B28C4
  {uint32_t ea=c->r[28]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28C8
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800B28CC
  c->r[0]=R8(c->r[28]+0x00000068u); // 800B28D0
  W8(c->r[30]+0x00000068u,c->r[0]); // 800B28D4
  c->r[0]=R8(c->r[28]+0x00000069u); // 800B28D8
  W8(c->r[30]+0x00000069u,c->r[0]); // 800B28DC
  {uint32_t ea=c->r[28]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28E0
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B28E4
  {uint32_t ea=c->r[28]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28E8
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[0]);} // 800B28EC
  {uint32_t ea=c->r[28]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28F0
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 800B28F4
  {uint32_t ea=c->r[28]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28F8
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 800B28FC
  c->r[0]=R8(c->r[28]+0x0000007Cu); // 800B2900
  W8(c->r[30]+0x0000007Cu,c->r[0]); // 800B2904
  {uint32_t ea=c->r[28]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2908
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800B290C
  {uint32_t ea=c->r[28]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2910
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 800B2914
  if (crb(c,2)) { goto L_800B293C; } // 800B2918
  c->r[3]=R32(c->r[31]+0x00000088u); // 800B291C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2920
  if (crb(c,1)) { goto L_800B2934; } // 800B2924
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B2928
  W32(c->r[31]+0x00000088u,c->r[0]); // 800B292C
  goto L_800B293C; // 800B2930
L_800B2934:;
  c->r[0]=c->r[3]+0x00000001u; // 800B2934
  W32(c->r[31]+0x00000088u,c->r[0]); // 800B2938
L_800B293C:;
  c->r[11]=c->r[1]+0x00000020u; // 800B293C
  c->lr=0x800B2944u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B2940
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B2944
  c->lr=c->r[0]; // 800B2948
  c->r[1]=c->r[1]+0x00000020u; // 800B294C
  return; // 800B2950
}

// fn_800B2954
void f_800B2954(Ctx* __restrict c) {
  trace_call(0x800B2954u);
  c->r[3]=0u+0x00000000u; // 800B2954
  return; // 800B2958
}

// fn_800B295C
void f_800B295C(Ctx* __restrict c) {
  trace_call(0x800B295Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B295C
  c->r[0]=c->lr; // 800B2960
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B2964
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800B2968
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800B296C
  c->r[11]=c->r[1]+0x00000060u; // 800B2970
  c->lr=0x800B2978u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B2974
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 800B2978
  c->r[7]=0u+0x43300000u; // 800B297C
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800B2980
  c->f[31]=c->f[1]; // 800B2984
  c->r[6]=c->r[6]^0x80000000u; // 800B2988
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B298C
  c->r[0]=c->r[0]^0x80000000u; // 800B2990
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B2994
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[3]=RF64(ea);} // 800B2998
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B299C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 800B29A0
  c->r[29]=c->r[3]|c->r[3]; // 800B29A4
  c->r[30]=c->r[4]|c->r[4]; // 800B29A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800B29AC
  c->r[31]=c->r[5]|c->r[5]; // 800B29B0
  W32(c->r[1]+0x00000010u,c->r[7]); // 800B29B4
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 800B29B8
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 800B29BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B29C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B29C4
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[5]); // 800B29C8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B29CC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B29D0
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 800B29D4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B29D8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800B29DC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B29E0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800B29E4
  c->r[6]=R32(c->r[4]+0x00000020u); // 800B29E8
  c->r[0]=R32(c->r[5]+0x00000020u); // 800B29EC
  c->r[6]=c->r[6]^0x80000000u; // 800B29F0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B29F4
  c->r[0]=c->r[0]^0x80000000u; // 800B29F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B29FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800B2A00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B2A04
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 800B2A08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B2A0C
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[5]); // 800B2A10
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B2A14
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 800B2A18
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B2A1C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800B2A20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B2A24
  W32(c->r[3]+0x00000020u,c->r[0]); // 800B2A28
  c->r[6]=R8(c->r[4]+0x00000030u); // 800B2A2C
  c->r[0]=R8(c->r[5]+0x00000030u); // 800B2A30
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B2A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2A38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800B2A3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B2A40
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800B2A44
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B2A48
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[5]); // 800B2A4C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B2A50
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 800B2A54
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B2A58
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 800B2A5C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800B2A60
  W8(c->r[3]+0x00000030u,c->r[0]); // 800B2A64
  c->r[6]=R8(c->r[4]+0x00000031u); // 800B2A68
  c->r[0]=R8(c->r[5]+0x00000031u); // 800B2A6C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B2A70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2A74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800B2A78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B2A7C
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800B2A80
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B2A84
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[5]); // 800B2A88
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B2A8C
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 800B2A90
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B2A94
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800B2A98
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B2A9C
  W8(c->r[3]+0x00000031u,c->r[0]); // 800B2AA0
  c->r[6]=R8(c->r[4]+0x00000032u); // 800B2AA4
  c->r[0]=R8(c->r[5]+0x00000032u); // 800B2AA8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B2AAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2AB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800B2AB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B2AB8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 800B2ABC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B2AC0
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[5]); // 800B2AC4
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B2AC8
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 800B2ACC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B2AD0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800B2AD4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800B2AD8
  W8(c->r[3]+0x00000032u,c->r[0]); // 800B2ADC
  c->r[6]=R8(c->r[4]+0x00000033u); // 800B2AE0
  c->f[2]=c->f[31]; // 800B2AE4
  c->r[0]=R8(c->r[5]+0x00000033u); // 800B2AE8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B2AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2AF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=RF64(ea);} // 800B2AF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[5]=RF64(ea);} // 800B2AF8
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[0]); // 800B2AFC
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 800B2B00
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[6]); // 800B2B04
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B2B08
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 800B2B0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B2B10
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 800B2B14
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B2B18
  W8(c->r[3]+0x00000033u,c->r[0]); // 800B2B1C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B2B20
  {uint32_t ea=c->r[5]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2B24
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[5]); // 800B2B28
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B2B2C
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 800B2B30
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800B2B34
  c->r[6]=R32(c->r[4]+0x0000003Cu); // 800B2B38
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 800B2B3C
  c->r[6]=c->r[6]^0x80000000u; // 800B2B40
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B2B44
  c->r[0]=c->r[0]^0x80000000u; // 800B2B48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2B4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 800B2B50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800B2B54
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 800B2B58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800B2B5C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[5]); // 800B2B60
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B2B64
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B2B68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B2B6C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800B2B70
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800B2B74
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800B2B78
  {uint32_t ea=c->r[4]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2B7C
  {uint32_t ea=c->r[5]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2B80
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800B2B84
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B2B88
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B2B8C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 800B2B90
  {uint32_t ea=c->r[4]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2B94
  c->r[4]=c->r[4]+0x00000048u; // 800B2B98
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2B9C
  c->r[5]=c->r[5]+0x00000048u; // 800B2BA0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800B2BA4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B2BA8
  c->f[1]=c->f[4]; // 800B2BAC
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B2BB0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800B2BB4
  c->r[3]=c->r[3]+0x00000048u; // 800B2BB8
  c->lr=0x800B2BC0u; f_8025E410(c); // 800B2BBC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2BC0
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2BC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800B2BC8
  {uint32_t ea=c->r[30]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2BCC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2BD0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2BD4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2BD8
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[1]);} // 800B2BDC
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2BE0
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2BE4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2BE8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2BEC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2BF0
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 800B2BF4
  {uint32_t ea=c->r[30]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2BF8
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2BFC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2C00
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2C04
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2C08
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 800B2C0C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C10
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C14
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2C18
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2C1C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2C20
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 800B2C24
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C28
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C2C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2C30
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2C34
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2C38
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[1]);} // 800B2C3C
  {uint32_t ea=c->r[30]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C40
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C44
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2C48
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2C4C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2C50
  {uint32_t ea=c->r[29]+0x00000070u; WF32(ea,c->f[1]);} // 800B2C54
  {uint32_t ea=c->r[30]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C58
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C5C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2C60
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2C64
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2C68
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[1]);} // 800B2C6C
  {uint32_t ea=c->r[30]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C70
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C74
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2C78
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2C7C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2C80
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[1]);} // 800B2C84
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C88
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C8C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2C90
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800B2C94
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B2C98
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[1]);} // 800B2C9C
  {uint32_t ea=c->r[30]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2CA0
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2CA4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B2CA8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800B2CAC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B2CB0
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 800B2CB4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800B2CB8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800B2CBC
  c->r[11]=c->r[1]+0x00000060u; // 800B2CC0
  c->lr=0x800B2CC8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B2CC4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B2CC8
  c->lr=c->r[0]; // 800B2CCC
  c->r[1]=c->r[1]+0x00000070u; // 800B2CD0
  return; // 800B2CD4
}

// fn_800B2CD8
void f_800B2CD8(Ctx* __restrict c) {
  trace_call(0x800B2CD8u);
  c->r[3]=0u+0x0000008Cu; // 800B2CD8
  return; // 800B2CDC
}

// fn_800B2CE0
void f_800B2CE0(Ctx* __restrict c) {
  trace_call(0x800B2CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2CE0
  c->r[0]=c->lr; // 800B2CE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2CE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2CEC
  c->r[31]=c->r[3]|c->r[3]; // 800B2CF0
  c->lr=0x800B2CF8u; f_800B2304(c); // 800B2CF4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B2CF8
  c->r[3]=0u+0x80420000u; // 800B2CFC
  c->r[3]=c->r[3]+0xFFFFAF7Cu; // 800B2D00
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B2D04
  c->r[0]=c->r[0]|0x80000000u; // 800B2D08
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B2D0C
  c->r[3]=c->r[31]|c->r[31]; // 800B2D10
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B2D14
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B2D18
  c->ctr=c->r[12]; // 800B2D1C
  if (true) { c->lr=0x800B2D24u; dispatch(c,c->ctr); } // 800B2D20
  c->r[3]=c->r[31]|c->r[31]; // 800B2D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2D28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2D2C
  c->lr=c->r[0]; // 800B2D30
  c->r[1]=c->r[1]+0x00000010u; // 800B2D34
  return; // 800B2D38
}

// fn_800B2D3C
void f_800B2D3C(Ctx* __restrict c) {
  trace_call(0x800B2D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2D3C
  c->r[0]=c->lr; // 800B2D40
  cmps(c,0,(int32_t)c->r[3],0); // 800B2D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2D48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B2D4C
  c->r[30]=c->r[3]|c->r[3]; // 800B2D50
  c->r[31]=c->r[4]|c->r[4]; // 800B2D54
  if (crb(c,2)) { goto L_800B2D74; } // 800B2D58
  c->r[4]=0u+0x00000000u; // 800B2D5C
  c->lr=0x800B2D64u; f_802B1180(c); // 800B2D60
  cmps(c,0,(int32_t)c->r[31],0); // 800B2D64
  if (!crb(c,1)) { goto L_800B2D74; } // 800B2D68
  c->r[3]=c->r[30]|c->r[30]; // 800B2D6C
  c->lr=0x800B2D74u; f_80244DC0(c); // 800B2D70
L_800B2D74:;
  c->r[3]=c->r[30]|c->r[30]; // 800B2D74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B2D78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2D7C
  c->lr=c->r[0]; // 800B2D80
  c->r[1]=c->r[1]+0x00000010u; // 800B2D84
  return; // 800B2D88
}

// fn_800B2D8C
void f_800B2D8C(Ctx* __restrict c) {
  trace_call(0x800B2D8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2D8C
  c->r[0]=c->lr; // 800B2D90
  c->r[3]=0u+0x0000008Cu; // 800B2D94
  c->r[4]=c->r[13]+0xFFFFA9A5u; // 800B2D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2D9C
  c->r[5]=0u+0x00000000u; // 800B2DA0
  c->r[6]=0u+0x00001001u; // 800B2DA4
  c->lr=0x800B2DACu; f_80244D20(c); // 800B2DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800B2DAC
  if (crb(c,2)) { goto L_800B2DB8; } // 800B2DB0
  c->lr=0x800B2DB8u; f_800B2CE0(c); // 800B2DB4
L_800B2DB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2DB8
  c->lr=c->r[0]; // 800B2DBC
  c->r[1]=c->r[1]+0x00000010u; // 800B2DC0
  return; // 800B2DC4
}

// fn_800B2DC8
void f_800B2DC8(Ctx* __restrict c) {
  trace_call(0x800B2DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2DC8
  c->r[0]=c->lr; // 800B2DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2DD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2DD4
  c->r[31]=c->r[3]|c->r[3]; // 800B2DD8
  c->lr=0x800B2DE0u; f_80244520(c); // 800B2DDC
  c->r[7]=c->r[3]|c->r[3]; // 800B2DE0
  c->r[9]=c->r[31]|c->r[31]; // 800B2DE4
  c->r[3]=0u+0x0000008Cu; // 800B2DE8
  c->r[4]=c->r[13]+0xFFFFA9AAu; // 800B2DEC
  c->r[5]=0u+0x00000000u; // 800B2DF0
  c->r[6]=0u+0x00002001u; // 800B2DF4
  c->r[8]=0u+0x00000000u; // 800B2DF8
  c->lr=0x800B2E00u; f_80242DF0(c); // 800B2DFC
  c->r[4]=c->r[3]|c->r[3]; // 800B2E00
  c->r[3]=0u+0x0000008Cu; // 800B2E04
  c->r[5]=c->r[13]+0xFFFFA9AFu; // 800B2E08
  c->r[6]=0u+0x00000000u; // 800B2E0C
  c->r[7]=0u+0x00001001u; // 800B2E10
  c->lr=0x800B2E18u; f_80244DB0(c); // 800B2E14
  cmps(c,0,(int32_t)c->r[3],0); // 800B2E18
  if (crb(c,2)) { goto L_800B2E24; } // 800B2E1C
  c->lr=0x800B2E24u; f_800B2CE0(c); // 800B2E20
L_800B2E24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2E28
  c->lr=c->r[0]; // 800B2E2C
  c->r[1]=c->r[1]+0x00000010u; // 800B2E30
  return; // 800B2E34
}

// fn_800B2E38
void f_800B2E38(Ctx* __restrict c) {
  trace_call(0x800B2E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2E38
  c->r[0]=c->lr; // 800B2E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B2E44
  c->r[31]=c->r[3]|c->r[3]; // 800B2E48
  c->lr=0x800B2E50u; f_802B1168(c); // 800B2E4C
  c->r[8]=0u+0x80420000u; // 800B2E50
  c->r[6]=0u+0x80410000u; // 800B2E54
  c->r[7]=0u+0x00000000u; // 800B2E58
  c->r[5]=0u+0x65240000u; // 800B2E5C
  c->r[4]=0u+0x825F0000u; // 800B2E60
  c->r[3]=0u+0xF49E0000u; // 800B2E64
  c->r[0]=c->r[3]+0x00000CFEu; // 800B2E68
  c->r[8]=c->r[8]+0xFFFFAF40u; // 800B2E6C
  c->r[6]=c->r[6]+0xFFFFCA61u; // 800B2E70
  c->r[5]=c->r[5]+0x00000394u; // 800B2E74
  c->r[4]=c->r[4]+0x00003F01u; // 800B2E78
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B2E7C
  c->r[3]=c->r[31]|c->r[31]; // 800B2E80
  W32(c->r[31]+0x0000006Cu,c->r[7]); // 800B2E84
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B2E88
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B2E8C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B2E90
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B2E94
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B2E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2E9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2EA0
  c->lr=c->r[0]; // 800B2EA4
  c->r[1]=c->r[1]+0x00000010u; // 800B2EA8
  return; // 800B2EAC
}

// fn_800B2EB0
void f_800B2EB0(Ctx* __restrict c) {
  trace_call(0x800B2EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2EB0
  c->r[0]=c->lr; // 800B2EB4
  cmps(c,0,(int32_t)c->r[4],0); // 800B2EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B2EBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B2EC0
  c->r[30]=c->r[3]|c->r[3]; // 800B2EC4
  c->r[31]=c->r[4]|c->r[4]; // 800B2EC8
  if (crb(c,2)) { goto L_800B2F20; } // 800B2ECC
  c->r[3]=c->r[31]|c->r[31]; // 800B2ED0
  c->lr=0x800B2ED8u; f_80244520(c); // 800B2ED4
  c->r[7]=c->r[3]|c->r[3]; // 800B2ED8
  c->r[9]=c->r[31]|c->r[31]; // 800B2EDC
  c->r[3]=0u+0x00000070u; // 800B2EE0
  c->r[4]=c->r[13]+0xFFFFA9B4u; // 800B2EE4
  c->r[5]=0u+0x00000000u; // 800B2EE8
  c->r[6]=0u+0x00002001u; // 800B2EEC
  c->r[8]=0u+0x00000000u; // 800B2EF0
  c->lr=0x800B2EF8u; f_80242DF0(c); // 800B2EF4
  c->r[4]=c->r[3]|c->r[3]; // 800B2EF8
  c->r[3]=0u+0x00000070u; // 800B2EFC
  c->r[5]=c->r[13]+0xFFFFA9B9u; // 800B2F00
  c->r[6]=0u+0x00000000u; // 800B2F04
  c->r[7]=0u+0x00001001u; // 800B2F08
  c->lr=0x800B2F10u; f_80244DB0(c); // 800B2F0C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2F10
  if (crb(c,2)) { goto L_800B2F40; } // 800B2F14
  c->lr=0x800B2F1Cu; f_800B2E38(c); // 800B2F18
  goto L_800B2F40; // 800B2F1C
L_800B2F20:;
  c->r[3]=0u+0x00000070u; // 800B2F20
  c->r[4]=c->r[13]+0xFFFFA9BEu; // 800B2F24
  c->r[5]=0u+0x00000000u; // 800B2F28
  c->r[6]=0u+0x00001001u; // 800B2F2C
  c->lr=0x800B2F34u; f_80244D20(c); // 800B2F30
  cmps(c,0,(int32_t)c->r[3],0); // 800B2F34
  if (crb(c,2)) { goto L_800B2F40; } // 800B2F38
  c->lr=0x800B2F40u; f_800B2E38(c); // 800B2F3C
L_800B2F40:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B2F40
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B2F44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B2F48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2F4C
  c->lr=c->r[0]; // 800B2F50
  c->r[1]=c->r[1]+0x00000010u; // 800B2F54
  return; // 800B2F58
}

// fn_800B2F5C
void f_800B2F5C(Ctx* __restrict c) {
  trace_call(0x800B2F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2F5C
  c->r[0]=c->lr; // 800B2F60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B2F64
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B2F68
  c->r[31]=0u+0x00000000u; // 800B2F6C
  c->r[30]=c->r[4]|c->r[4]; // 800B2F70
  c->r[29]=c->r[3]|c->r[3]; // 800B2F74
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800B2F78
  c->r[3]=c->r[30]|c->r[30]; // 800B2F7C
  c->lr=0x800B2F84u; f_8030BD1C(c); // 800B2F80
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B2F84
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800B2F88
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B2F8C
  c->r[3]=c->r[30]|c->r[30]; // 800B2F90
  c->r[4]=0u+0x00000000u; // 800B2F94
  c->lr=0x800B2F9Cu; f_8030BE30(c); // 800B2F98
  W32(c->r[29]+0x00000020u,c->r[3]); // 800B2F9C
  c->r[3]=c->r[30]|c->r[30]; // 800B2FA0
  W32(c->r[29]+0x00000024u,c->r[31]); // 800B2FA4
  c->lr=0x800B2FACu; f_8030BD1C(c); // 800B2FA8
  W32(c->r[29]+0x00000028u,c->r[3]); // 800B2FAC
  c->r[3]=c->r[30]|c->r[30]; // 800B2FB0
  c->lr=0x800B2FB8u; f_8030BD1C(c); // 800B2FB4
  W32(c->r[29]+0x0000002Cu,c->r[3]); // 800B2FB8
  c->r[3]=c->r[30]|c->r[30]; // 800B2FBC
  c->lr=0x800B2FC4u; f_8030BD1C(c); // 800B2FC0
  W32(c->r[29]+0x00000030u,c->r[3]); // 800B2FC4
  c->r[3]=c->r[30]|c->r[30]; // 800B2FC8
  c->lr=0x800B2FD0u; f_8030BD1C(c); // 800B2FCC
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B2FD0
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800B2FD4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B2FD8
  c->r[3]=c->r[30]|c->r[30]; // 800B2FDC
  c->lr=0x800B2FE4u; f_8030BD1C(c); // 800B2FE0
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B2FE4
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800B2FE8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B2FEC
  c->r[3]=c->r[30]|c->r[30]; // 800B2FF0
  c->lr=0x800B2FF8u; f_8030BD1C(c); // 800B2FF4
  W32(c->r[29]+0x00000034u,c->r[3]); // 800B2FF8
  c->r[3]=c->r[30]|c->r[30]; // 800B2FFC
  c->lr=0x800B3004u; f_8030BD1C(c); // 800B3000
  W32(c->r[29]+0x00000038u,c->r[3]); // 800B3004
  c->r[3]=c->r[30]|c->r[30]; // 800B3008
  c->r[4]=0u+0x00000001u; // 800B300C
  c->lr=0x800B3014u; f_8030BE30(c); // 800B3010
  W32(c->r[29]+0x0000003Cu,c->r[3]); // 800B3014
  c->r[3]=c->r[30]|c->r[30]; // 800B3018
  c->r[4]=0u+0x00000001u; // 800B301C
  c->lr=0x800B3024u; f_8030BE30(c); // 800B3020
  W32(c->r[29]+0x00000040u,c->r[3]); // 800B3024
  c->r[3]=c->r[30]|c->r[30]; // 800B3028
  c->lr=0x800B3030u; f_8030BD1C(c); // 800B302C
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B3030
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800B3034
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B3038
  c->r[3]=c->r[30]|c->r[30]; // 800B303C
  c->lr=0x800B3044u; f_8030BD1C(c); // 800B3040
  W8(c->r[29]+0x00000044u,c->r[3]); // 800B3044
  c->r[3]=c->r[30]|c->r[30]; // 800B3048
  c->lr=0x800B3050u; f_8030BD1C(c); // 800B304C
  W8(c->r[29]+0x00000045u,c->r[3]); // 800B3050
  c->r[3]=c->r[30]|c->r[30]; // 800B3054
  c->lr=0x800B305Cu; f_8030BD1C(c); // 800B3058
  W8(c->r[29]+0x00000046u,c->r[3]); // 800B305C
  c->r[3]=c->r[30]|c->r[30]; // 800B3060
  c->lr=0x800B3068u; f_8030BD1C(c); // 800B3064
  W8(c->r[29]+0x00000047u,c->r[3]); // 800B3068
  c->r[3]=c->r[30]|c->r[30]; // 800B306C
  c->lr=0x800B3074u; f_8030BD1C(c); // 800B3070
  W8(c->r[29]+0x00000048u,c->r[3]); // 800B3074
  c->r[3]=c->r[30]|c->r[30]; // 800B3078
  c->lr=0x800B3080u; f_8030BD1C(c); // 800B307C
  W8(c->r[29]+0x00000049u,c->r[3]); // 800B3080
  c->r[3]=c->r[30]|c->r[30]; // 800B3084
  c->lr=0x800B308Cu; f_8030BD1C(c); // 800B3088
  W8(c->r[29]+0x0000004Au,c->r[3]); // 800B308C
  c->r[3]=c->r[30]|c->r[30]; // 800B3090
  c->lr=0x800B3098u; f_8030BD1C(c); // 800B3094
  W8(c->r[29]+0x0000004Bu,c->r[3]); // 800B3098
  c->r[3]=c->r[30]|c->r[30]; // 800B309C
  c->lr=0x800B30A4u; f_8030BD1C(c); // 800B30A0
  W8(c->r[29]+0x0000004Cu,c->r[3]); // 800B30A4
  c->r[3]=c->r[30]|c->r[30]; // 800B30A8
  c->lr=0x800B30B0u; f_8030BD1C(c); // 800B30AC
  W8(c->r[29]+0x0000004Du,c->r[3]); // 800B30B0
  c->r[3]=c->r[30]|c->r[30]; // 800B30B4
  c->lr=0x800B30BCu; f_8030BD1C(c); // 800B30B8
  W8(c->r[29]+0x0000004Eu,c->r[3]); // 800B30BC
  c->r[3]=c->r[30]|c->r[30]; // 800B30C0
  c->lr=0x800B30C8u; f_8030BD1C(c); // 800B30C4
  W8(c->r[29]+0x0000004Fu,c->r[3]); // 800B30C8
  c->r[3]=c->r[30]|c->r[30]; // 800B30CC
  c->lr=0x800B30D4u; f_8030BD1C(c); // 800B30D0
  W8(c->r[29]+0x00000050u,c->r[3]); // 800B30D4
  c->r[3]=c->r[30]|c->r[30]; // 800B30D8
  c->lr=0x800B30E0u; f_8030BD1C(c); // 800B30DC
  W8(c->r[29]+0x00000051u,c->r[3]); // 800B30E0
  c->r[3]=c->r[30]|c->r[30]; // 800B30E4
  c->lr=0x800B30ECu; f_8030BD1C(c); // 800B30E8
  W8(c->r[29]+0x00000052u,c->r[3]); // 800B30EC
  c->r[3]=c->r[30]|c->r[30]; // 800B30F0
  c->lr=0x800B30F8u; f_8030BD1C(c); // 800B30F4
  W8(c->r[29]+0x00000053u,c->r[3]); // 800B30F8
  c->r[3]=c->r[30]|c->r[30]; // 800B30FC
  c->lr=0x800B3104u; f_8030BD1C(c); // 800B3100
  W8(c->r[29]+0x00000054u,c->r[3]); // 800B3104
  c->r[3]=c->r[30]|c->r[30]; // 800B3108
  c->lr=0x800B3110u; f_8030BD1C(c); // 800B310C
  W8(c->r[29]+0x00000055u,c->r[3]); // 800B3110
  c->r[3]=c->r[30]|c->r[30]; // 800B3114
  c->lr=0x800B311Cu; f_8030BD1C(c); // 800B3118
  W8(c->r[29]+0x00000056u,c->r[3]); // 800B311C
  c->r[3]=c->r[30]|c->r[30]; // 800B3120
  c->lr=0x800B3128u; f_8030BD1C(c); // 800B3124
  W8(c->r[29]+0x00000057u,c->r[3]); // 800B3128
  c->r[3]=c->r[30]|c->r[30]; // 800B312C
  c->lr=0x800B3134u; f_8030BD1C(c); // 800B3130
  W8(c->r[29]+0x00000058u,c->r[3]); // 800B3134
  c->r[3]=c->r[30]|c->r[30]; // 800B3138
  c->lr=0x800B3140u; f_8030BD1C(c); // 800B313C
  W8(c->r[29]+0x00000059u,c->r[3]); // 800B3140
  c->r[3]=c->r[30]|c->r[30]; // 800B3144
  c->lr=0x800B314Cu; f_8030BD1C(c); // 800B3148
  W8(c->r[29]+0x0000005Au,c->r[3]); // 800B314C
  c->r[3]=c->r[30]|c->r[30]; // 800B3150
  c->lr=0x800B3158u; f_8030BD1C(c); // 800B3154
  W8(c->r[29]+0x0000005Bu,c->r[3]); // 800B3158
  c->r[3]=c->r[30]|c->r[30]; // 800B315C
  c->lr=0x800B3164u; f_8030BD1C(c); // 800B3160
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B3164
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800B3168
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B316C
  c->r[3]=c->r[30]|c->r[30]; // 800B3170
  c->lr=0x800B3178u; f_8030C0A0(c); // 800B3174
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 800B3178
  c->r[3]=c->r[30]|c->r[30]; // 800B317C
  c->lr=0x800B3184u; f_8030BD1C(c); // 800B3180
  W32(c->r[29]+0x00000060u,c->r[3]); // 800B3184
  c->r[3]=c->r[30]|c->r[30]; // 800B3188
  c->lr=0x800B3190u; f_8030C0A0(c); // 800B318C
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 800B3190
  c->r[3]=c->r[30]|c->r[30]; // 800B3194
  c->lr=0x800B319Cu; f_8030C0A0(c); // 800B3198
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[1]);} // 800B319C
  c->r[3]=c->r[30]|c->r[30]; // 800B31A0
  c->lr=0x800B31A8u; f_8030BD1C(c); // 800B31A4
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B31A8
  c->r[0]=(rotl(c->r[3],26)&0x04000000u)|(c->r[0]&~0x04000000u); // 800B31AC
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B31B0
  c->r[3]=c->r[30]|c->r[30]; // 800B31B4
  c->lr=0x800B31BCu; f_8030BD1C(c); // 800B31B8
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B31BC
  c->r[0]=(rotl(c->r[3],25)&0x02000000u)|(c->r[0]&~0x02000000u); // 800B31C0
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B31C4
  c->r[3]=c->r[30]|c->r[30]; // 800B31C8
  c->lr=0x800B31D0u; f_8030BD1C(c); // 800B31CC
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B31D0
  c->r[0]=(rotl(c->r[3],24)&0x01000000u)|(c->r[0]&~0x01000000u); // 800B31D4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800B31D8
  c->r[3]=0u+0x00000000u; // 800B31DC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B31E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B31E4
  c->lr=c->r[0]; // 800B31E8
  c->r[1]=c->r[1]+0x00000020u; // 800B31EC
  return; // 800B31F0
}

// fn_800B31F4
void f_800B31F4(Ctx* __restrict c) {
  trace_call(0x800B31F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B31F4
  c->r[0]=c->lr; // 800B31F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B31FC
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B3200
  c->r[27]=c->r[3]|c->r[3]; // 800B3204
  c->r[28]=c->r[4]|c->r[4]; // 800B3208
  c->r[29]=c->r[5]|c->r[5]; // 800B320C
  c->r[30]=c->r[6]|c->r[6]; // 800B3210
  c->r[7]=R32(c->r[3]+0x0000006Cu); // 800B3214
  cmps(c,0,(int32_t)c->r[7],0); // 800B3218
  if (!crb(c,0)) { goto L_800B322C; } // 800B321C
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B3220
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800B3224
  goto L_800B323C; // 800B3228
L_800B322C:;
  c->r[0]=c->r[7]+0x00000001u; // 800B322C
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800B3230
  cmps(c,0,(int32_t)c->r[0],1); // 800B3234
  if (crb(c,1)) { goto L_800B32FC; } // 800B3238
L_800B323C:;
  c->r[3]=c->r[27]|c->r[27]; // 800B323C
  c->r[4]=c->r[28]|c->r[28]; // 800B3240
  c->r[5]=c->r[29]|c->r[29]; // 800B3244
  c->r[6]=c->r[30]|c->r[30]; // 800B3248
  c->lr=0x800B3250u; f_802B11C0(c); // 800B324C
  c->r[4]=R32(c->r[27]+0x00000020u); // 800B3250
  cmps(c,0,(int32_t)c->r[4],0); // 800B3254
  if (crb(c,2)) { goto L_800B32FC; } // 800B3258
  c->r[0]=0u+0x00000001u; // 800B325C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B3260
  c->r[6]=c->r[28]|c->r[28]; // 800B3264
  c->r[7]=c->r[29]|c->r[29]; // 800B3268
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B326C
  c->r[8]=c->r[30]|c->r[30]; // 800B3270
  c->r[9]=R32(c->r[27]+0x00000028u); // 800B3274
  c->r[5]=0u+0x00000000u; // 800B3278
  c->r[10]=0u+0x00000001u; // 800B327C
  c->lr=0x800B3284u; f_80281A84(c); // 800B3280
  cmps(c,0,(int32_t)c->r[3],0); // 800B3284
  W32(c->r[27]+0x00000024u,c->r[3]); // 800B3288
  if (crb(c,2)) { goto L_800B3298; } // 800B328C
  c->lr=0x800B3294u; f_80295B6C(c); // 800B3290
  goto L_800B32FC; // 800B3294
L_800B3298:;
  c->r[3]=R32(c->r[27]+0x00000028u); // 800B3298
  c->r[4]=c->r[30]|c->r[30]; // 800B329C
  c->r[5]=c->r[29]|c->r[29]; // 800B32A0
  c->lr=0x800B32A8u; f_802C0F98(c); // 800B32A4
  c->r[31]=c->r[3]|c->r[3]; // 800B32A8
  c->r[3]=0u+0x00000044u; // 800B32AC
  c->r[4]=c->r[13]+0xFFFFA9C3u; // 800B32B0
  c->r[5]=0u+0x00000000u; // 800B32B4
  c->r[6]=0u+0x00001001u; // 800B32B8
  c->lr=0x800B32C0u; f_80244D20(c); // 800B32BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B32C0
  if (crb(c,2)) { goto L_800B32D8; } // 800B32C4
  c->r[5]=R32(c->r[27]+0x00000020u); // 800B32C8
  c->r[4]=c->r[31]|c->r[31]; // 800B32CC
  c->r[6]=0u+0x00000000u; // 800B32D0
  c->lr=0x800B32D8u; f_8029316C(c); // 800B32D4
L_800B32D8:;
  W32(c->r[27]+0x00000024u,c->r[3]); // 800B32D8
  c->r[4]=c->r[28]|c->r[28]; // 800B32DC
  c->r[7]=R32(c->r[27]+0x00000028u); // 800B32E0
  c->r[5]=c->r[29]|c->r[29]; // 800B32E4
  c->r[6]=c->r[30]|c->r[30]; // 800B32E8
  c->r[8]=0u+0x00000001u; // 800B32EC
  c->r[9]=0u+0x00000000u; // 800B32F0
  c->lr=0x800B32F8u; f_8027FFF4(c); // 800B32F4
  W32(c->r[27]+0x00000024u,c->r[3]); // 800B32F8
L_800B32FC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B32FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B3300
  c->lr=c->r[0]; // 800B3304
  c->r[1]=c->r[1]+0x00000030u; // 800B3308
  return; // 800B330C
}

// fn_800B3310
void f_800B3310(Ctx* __restrict c) {
  trace_call(0x800B3310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3310
  c->r[0]=c->lr; // 800B3314
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B331C
  c->r[31]=c->r[3]|c->r[3]; // 800B3320
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 800B3324
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B3328
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800B332C
  if (!crb(c,2)) { goto L_800B3350; } // 800B3330
  c->lr=0x800B3338u; f_802B11D0(c); // 800B3334
  c->r[3]=R32(c->r[31]+0x00000024u); // 800B3338
  cmps(c,0,(int32_t)c->r[3],0); // 800B333C
  if (crb(c,2)) { goto L_800B3350; } // 800B3340
  c->lr=0x800B3348u; f_80295B7C(c); // 800B3344
  c->r[0]=0u+0x00000000u; // 800B3348
  W32(c->r[31]+0x00000024u,c->r[0]); // 800B334C
L_800B3350:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3350
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3354
  c->lr=c->r[0]; // 800B3358
  c->r[1]=c->r[1]+0x00000010u; // 800B335C
  return; // 800B3360
}

// fn_800B3364
void f_800B3364(Ctx* __restrict c) {
  trace_call(0x800B3364u);
  return; // 800B3364
}

// fn_800B3368
void f_800B3368(Ctx* __restrict c) {
  trace_call(0x800B3368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3368
  c->r[0]=c->lr; // 800B336C
  c->r[4]=0u+0x00000020u; // 800B3370
  c->r[6]=0u+0x00000004u; // 800B3374
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3378
  c->r[5]=0u+0x00000040u; // 800B337C
  c->r[0]=0u+0x00000006u; // 800B3380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3384
  c->r[31]=0u+0x00000000u; // 800B3388
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B338C
  c->r[30]=c->r[3]|c->r[3]; // 800B3390
  W32(c->r[3]+0x00000020u,c->r[31]); // 800B3394
  W32(c->r[3]+0x00000024u,c->r[31]); // 800B3398
  W32(c->r[3]+0x00000028u,c->r[6]); // 800B339C
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 800B33A0
  W32(c->r[3]+0x00000030u,c->r[4]); // 800B33A4
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800B33A8
  W32(c->r[3]+0x00000034u,c->r[4]); // 800B33AC
  W32(c->r[3]+0x00000038u,c->r[0]); // 800B33B0
  c->r[3]=0u+0x0000003Fu; // 800B33B4
  c->lr=0x800B33BCu; f_80248E40(c); // 800B33B8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800B33BC
  c->r[3]=0u+0x0000003Fu; // 800B33C0
  c->lr=0x800B33C8u; f_80248E40(c); // 800B33C4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B33C8
  c->r[5]=0u+0x0000007Fu; // 800B33CC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B33D0
  c->r[4]=0u+0x0000000Bu; // 800B33D4
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B33D8
  c->r[0]=c->r[0]|0x18000000u; // 800B33DC
  {uint32_t ea=c->r[2]+0xFFFF87D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B33E0
  c->r[0]=rotl(c->r[0],0)&0xF8FFFFFFu; // 800B33E4
  W32(c->r[30]+0x00000040u,c->r[3]); // 800B33E8
  W8(c->r[30]+0x00000044u,c->r[31]); // 800B33EC
  W8(c->r[30]+0x00000045u,c->r[31]); // 800B33F0
  W8(c->r[30]+0x00000046u,c->r[31]); // 800B33F4
  W8(c->r[30]+0x00000047u,c->r[5]); // 800B33F8
  W8(c->r[30]+0x00000048u,c->r[31]); // 800B33FC
  W8(c->r[30]+0x00000049u,c->r[31]); // 800B3400
  W8(c->r[30]+0x0000004Au,c->r[31]); // 800B3404
  W8(c->r[30]+0x0000004Bu,c->r[5]); // 800B3408
  W8(c->r[30]+0x0000004Cu,c->r[31]); // 800B340C
  W8(c->r[30]+0x0000004Du,c->r[31]); // 800B3410
  W8(c->r[30]+0x0000004Eu,c->r[31]); // 800B3414
  W8(c->r[30]+0x0000004Fu,c->r[5]); // 800B3418
  W8(c->r[30]+0x00000050u,c->r[31]); // 800B341C
  W8(c->r[30]+0x00000051u,c->r[31]); // 800B3420
  W8(c->r[30]+0x00000052u,c->r[31]); // 800B3424
  W8(c->r[30]+0x00000053u,c->r[5]); // 800B3428
  W8(c->r[30]+0x00000054u,c->r[31]); // 800B342C
  W8(c->r[30]+0x00000055u,c->r[31]); // 800B3430
  W8(c->r[30]+0x00000056u,c->r[31]); // 800B3434
  W8(c->r[30]+0x00000057u,c->r[5]); // 800B3438
  W8(c->r[30]+0x00000058u,c->r[31]); // 800B343C
  W8(c->r[30]+0x00000059u,c->r[31]); // 800B3440
  W8(c->r[30]+0x0000005Au,c->r[31]); // 800B3444
  W8(c->r[30]+0x0000005Bu,c->r[5]); // 800B3448
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[2]);} // 800B344C
  W32(c->r[30]+0x00000060u,c->r[4]); // 800B3450
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 800B3454
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 800B3458
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800B345C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3460
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B3464
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3468
  c->lr=c->r[0]; // 800B346C
  c->r[1]=c->r[1]+0x00000010u; // 800B3470
  return; // 800B3474
}

// fn_800B3478
void f_800B3478(Ctx* __restrict c) {
  trace_call(0x800B3478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3478
  c->r[0]=c->lr; // 800B347C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B3480
  c->r[11]=c->r[1]+0x00000020u; // 800B3484
  c->lr=0x800B348Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3488
  cmps(c,0,(int32_t)c->r[5],0); // 800B348C
  c->r[29]=c->r[3]|c->r[3]; // 800B3490
  c->r[30]=c->r[4]|c->r[4]; // 800B3494
  c->r[28]=c->r[7]|c->r[7]; // 800B3498
  if (crb(c,2)) { goto L_800B34A8; } // 800B349C
  c->r[31]=c->r[5]|c->r[5]; // 800B34A0
  goto L_800B34AC; // 800B34A4
L_800B34A8:;
  c->r[31]=c->r[29]|c->r[29]; // 800B34A8
L_800B34AC:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800B34AC
  c->r[3]=c->r[31]+0x00000020u; // 800B34B0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800B34B4
  c->r[4]=c->r[4]+0x00000020u; // 800B34B8
  c->lr=0x800B34C0u; f_8003BDD0(c); // 800B34BC
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800B34C0
  cmps(c,0,(int32_t)c->r[28],0); // 800B34C4
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800B34C8
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B34CC
  W32(c->r[31]+0x00000030u,c->r[0]); // 800B34D0
  c->r[0]=R32(c->r[30]+0x00000034u); // 800B34D4
  W32(c->r[31]+0x00000034u,c->r[0]); // 800B34D8
  c->r[0]=R32(c->r[30]+0x00000038u); // 800B34DC
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B34E0
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800B34E4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800B34E8
  c->r[0]=R32(c->r[30]+0x00000040u); // 800B34EC
  W32(c->r[31]+0x00000040u,c->r[0]); // 800B34F0
  c->r[0]=R8(c->r[30]+0x00000044u); // 800B34F4
  W8(c->r[31]+0x00000044u,c->r[0]); // 800B34F8
  c->r[0]=R8(c->r[30]+0x00000045u); // 800B34FC
  W8(c->r[31]+0x00000045u,c->r[0]); // 800B3500
  c->r[0]=R8(c->r[30]+0x00000046u); // 800B3504
  W8(c->r[31]+0x00000046u,c->r[0]); // 800B3508
  c->r[0]=R8(c->r[30]+0x00000047u); // 800B350C
  W8(c->r[31]+0x00000047u,c->r[0]); // 800B3510
  c->r[0]=R8(c->r[30]+0x00000048u); // 800B3514
  W8(c->r[31]+0x00000048u,c->r[0]); // 800B3518
  c->r[0]=R8(c->r[30]+0x00000049u); // 800B351C
  W8(c->r[31]+0x00000049u,c->r[0]); // 800B3520
  c->r[0]=R8(c->r[30]+0x0000004Au); // 800B3524
  W8(c->r[31]+0x0000004Au,c->r[0]); // 800B3528
  c->r[0]=R8(c->r[30]+0x0000004Bu); // 800B352C
  W8(c->r[31]+0x0000004Bu,c->r[0]); // 800B3530
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800B3534
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800B3538
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800B353C
  W8(c->r[31]+0x0000004Du,c->r[0]); // 800B3540
  c->r[0]=R8(c->r[30]+0x0000004Eu); // 800B3544
  W8(c->r[31]+0x0000004Eu,c->r[0]); // 800B3548
  c->r[0]=R8(c->r[30]+0x0000004Fu); // 800B354C
  W8(c->r[31]+0x0000004Fu,c->r[0]); // 800B3550
  c->r[0]=R8(c->r[30]+0x00000050u); // 800B3554
  W8(c->r[31]+0x00000050u,c->r[0]); // 800B3558
  c->r[0]=R8(c->r[30]+0x00000051u); // 800B355C
  W8(c->r[31]+0x00000051u,c->r[0]); // 800B3560
  c->r[0]=R8(c->r[30]+0x00000052u); // 800B3564
  W8(c->r[31]+0x00000052u,c->r[0]); // 800B3568
  c->r[0]=R8(c->r[30]+0x00000053u); // 800B356C
  W8(c->r[31]+0x00000053u,c->r[0]); // 800B3570
  c->r[0]=R8(c->r[30]+0x00000054u); // 800B3574
  W8(c->r[31]+0x00000054u,c->r[0]); // 800B3578
  c->r[0]=R8(c->r[30]+0x00000055u); // 800B357C
  W8(c->r[31]+0x00000055u,c->r[0]); // 800B3580
  c->r[0]=R8(c->r[30]+0x00000056u); // 800B3584
  W8(c->r[31]+0x00000056u,c->r[0]); // 800B3588
  c->r[0]=R8(c->r[30]+0x00000057u); // 800B358C
  W8(c->r[31]+0x00000057u,c->r[0]); // 800B3590
  c->r[0]=R8(c->r[30]+0x00000058u); // 800B3594
  W8(c->r[31]+0x00000058u,c->r[0]); // 800B3598
  c->r[0]=R8(c->r[30]+0x00000059u); // 800B359C
  W8(c->r[31]+0x00000059u,c->r[0]); // 800B35A0
  c->r[0]=R8(c->r[30]+0x0000005Au); // 800B35A4
  W8(c->r[31]+0x0000005Au,c->r[0]); // 800B35A8
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 800B35AC
  W8(c->r[31]+0x0000005Bu,c->r[0]); // 800B35B0
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B35B4
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B35B8
  c->r[0]=R32(c->r[30]+0x00000060u); // 800B35BC
  W32(c->r[31]+0x00000060u,c->r[0]); // 800B35C0
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B35C4
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800B35C8
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B35CC
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800B35D0
  if (crb(c,2)) { goto L_800B35F8; } // 800B35D4
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 800B35D8
  cmps(c,0,(int32_t)c->r[3],0); // 800B35DC
  if (crb(c,1)) { goto L_800B35F0; } // 800B35E0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B35E4
  W32(c->r[29]+0x0000006Cu,c->r[0]); // 800B35E8
  goto L_800B35F8; // 800B35EC
L_800B35F0:;
  c->r[0]=c->r[3]+0x00000001u; // 800B35F0
  W32(c->r[29]+0x0000006Cu,c->r[0]); // 800B35F4
L_800B35F8:;
  c->r[11]=c->r[1]+0x00000020u; // 800B35F8
  c->lr=0x800B3600u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B35FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B3600
  c->lr=c->r[0]; // 800B3604
  c->r[1]=c->r[1]+0x00000020u; // 800B3608
  return; // 800B360C
}

// fn_800B3610
void f_800B3610(Ctx* __restrict c) {
  trace_call(0x800B3610u);
  c->r[3]=0u+0x00000000u; // 800B3610
  return; // 800B3614
}

// fn_800B3618
void f_800B3618(Ctx* __restrict c) {
  trace_call(0x800B3618u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3618
  c->r[7]=0u+0x43300000u; // 800B361C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3620
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 800B3624
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 800B3628
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 800B362C
  c->r[6]=c->r[6]^0x80000000u; // 800B3630
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B3634
  c->r[0]=c->r[0]^0x80000000u; // 800B3638
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[5]=RF64(ea);} // 800B363C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3640
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800B3644
  W32(c->r[1]+0x00000010u,c->r[7]); // 800B3648
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 800B364C
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 800B3650
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3654
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3658
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B365C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[5]); // 800B3660
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3664
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3668
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B366C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 800B3670
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B3674
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800B3678
  c->r[6]=R8(c->r[4]+0x00000044u); // 800B367C
  c->r[0]=R8(c->r[5]+0x00000044u); // 800B3680
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3684
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3688
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B368C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3690
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3694
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3698
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B369C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B36A0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B36A4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B36A8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[3]);} // 800B36AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B36B0
  W8(c->r[3]+0x00000044u,c->r[0]); // 800B36B4
  c->r[6]=R8(c->r[4]+0x00000045u); // 800B36B8
  c->r[0]=R8(c->r[5]+0x00000045u); // 800B36BC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B36C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B36C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B36C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B36CC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B36D0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B36D4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B36D8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B36DC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B36E0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B36E4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[3]);} // 800B36E8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800B36EC
  W8(c->r[3]+0x00000045u,c->r[0]); // 800B36F0
  c->r[6]=R8(c->r[4]+0x00000046u); // 800B36F4
  c->r[0]=R8(c->r[5]+0x00000046u); // 800B36F8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B36FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3700
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3704
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3708
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B370C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3710
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3714
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3718
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B371C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3720
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[3]);} // 800B3724
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B3728
  W8(c->r[3]+0x00000046u,c->r[0]); // 800B372C
  c->r[6]=R8(c->r[4]+0x00000047u); // 800B3730
  c->r[0]=R8(c->r[5]+0x00000047u); // 800B3734
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3738
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B373C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3740
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3744
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3748
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B374C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3750
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3754
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3758
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B375C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800B3760
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800B3764
  W8(c->r[3]+0x00000047u,c->r[0]); // 800B3768
  c->r[6]=R8(c->r[4]+0x00000048u); // 800B376C
  c->r[0]=R8(c->r[5]+0x00000048u); // 800B3770
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3774
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3778
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B377C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3780
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3784
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3788
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B378C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3790
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3794
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3798
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 800B379C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B37A0
  W8(c->r[3]+0x00000048u,c->r[0]); // 800B37A4
  c->r[6]=R8(c->r[4]+0x00000049u); // 800B37A8
  c->r[0]=R8(c->r[5]+0x00000049u); // 800B37AC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B37B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B37B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B37B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B37BC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B37C0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B37C4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B37C8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B37CC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B37D0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B37D4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[3]);} // 800B37D8
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800B37DC
  W8(c->r[3]+0x00000049u,c->r[0]); // 800B37E0
  c->r[6]=R8(c->r[4]+0x0000004Au); // 800B37E4
  c->r[0]=R8(c->r[5]+0x0000004Au); // 800B37E8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B37EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B37F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B37F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B37F8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B37FC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3800
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3804
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3808
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B380C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3810
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[3]);} // 800B3814
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B3818
  W8(c->r[3]+0x0000004Au,c->r[0]); // 800B381C
  c->r[6]=R8(c->r[4]+0x0000004Bu); // 800B3820
  c->r[0]=R8(c->r[5]+0x0000004Bu); // 800B3824
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3828
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B382C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3830
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3834
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3838
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B383C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3840
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3844
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3848
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B384C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[3]);} // 800B3850
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800B3854
  W8(c->r[3]+0x0000004Bu,c->r[0]); // 800B3858
  c->r[6]=R8(c->r[4]+0x0000004Cu); // 800B385C
  c->r[0]=R8(c->r[5]+0x0000004Cu); // 800B3860
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3868
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B386C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3870
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3874
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3878
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B387C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3880
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3884
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3888
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[3]);} // 800B388C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B3890
  W8(c->r[3]+0x0000004Cu,c->r[0]); // 800B3894
  c->r[6]=R8(c->r[4]+0x0000004Du); // 800B3898
  c->r[0]=R8(c->r[5]+0x0000004Du); // 800B389C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B38A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B38A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B38A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B38AC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B38B0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B38B4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B38B8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B38BC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B38C0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B38C4
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[3]);} // 800B38C8
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 800B38CC
  W8(c->r[3]+0x0000004Du,c->r[0]); // 800B38D0
  c->r[6]=R8(c->r[4]+0x0000004Eu); // 800B38D4
  c->r[0]=R8(c->r[5]+0x0000004Eu); // 800B38D8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B38DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B38E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B38E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B38E8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B38EC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B38F0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B38F4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B38F8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B38FC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3900
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[3]);} // 800B3904
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B3908
  W8(c->r[3]+0x0000004Eu,c->r[0]); // 800B390C
  c->r[6]=R8(c->r[4]+0x0000004Fu); // 800B3910
  c->r[0]=R8(c->r[5]+0x0000004Fu); // 800B3914
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3918
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B391C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3920
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3924
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3928
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B392C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3930
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3934
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3938
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B393C
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[3]);} // 800B3940
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800B3944
  W8(c->r[3]+0x0000004Fu,c->r[0]); // 800B3948
  c->r[6]=R8(c->r[4]+0x00000050u); // 800B394C
  c->r[0]=R8(c->r[5]+0x00000050u); // 800B3950
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3954
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3958
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B395C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3960
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3964
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3968
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B396C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3970
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3974
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3978
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[3]);} // 800B397C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800B3980
  W8(c->r[3]+0x00000050u,c->r[0]); // 800B3984
  c->r[6]=R8(c->r[4]+0x00000051u); // 800B3988
  c->r[0]=R8(c->r[5]+0x00000051u); // 800B398C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3990
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3994
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3998
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B399C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B39A0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B39A4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B39A8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B39AC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B39B0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B39B4
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[3]);} // 800B39B8
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 800B39BC
  W8(c->r[3]+0x00000051u,c->r[0]); // 800B39C0
  c->r[6]=R8(c->r[4]+0x00000052u); // 800B39C4
  c->r[0]=R8(c->r[5]+0x00000052u); // 800B39C8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B39CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B39D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B39D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B39D8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B39DC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B39E0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B39E4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B39E8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B39EC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B39F0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[3]);} // 800B39F4
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B39F8
  W8(c->r[3]+0x00000052u,c->r[0]); // 800B39FC
  c->r[6]=R8(c->r[4]+0x00000053u); // 800B3A00
  c->r[0]=R8(c->r[5]+0x00000053u); // 800B3A04
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3A0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3A10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3A14
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3A18
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3A1C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3A20
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3A24
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3A28
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3A2C
  {uint32_t ea=c->r[1]+0x00000098u; WF64(ea,c->f[3]);} // 800B3A30
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 800B3A34
  W8(c->r[3]+0x00000053u,c->r[0]); // 800B3A38
  c->r[6]=R8(c->r[4]+0x00000054u); // 800B3A3C
  c->r[0]=R8(c->r[5]+0x00000054u); // 800B3A40
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3A44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3A48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3A4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3A50
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3A54
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3A58
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3A5C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3A60
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3A64
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3A68
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[3]);} // 800B3A6C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800B3A70
  W8(c->r[3]+0x00000054u,c->r[0]); // 800B3A74
  c->r[6]=R8(c->r[4]+0x00000055u); // 800B3A78
  c->r[0]=R8(c->r[5]+0x00000055u); // 800B3A7C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3A84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3A88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3A8C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3A90
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3A94
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3A98
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3A9C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3AA0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3AA4
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[3]);} // 800B3AA8
  c->r[0]=R32(c->r[1]+0x000000ACu); // 800B3AAC
  W8(c->r[3]+0x00000055u,c->r[0]); // 800B3AB0
  c->r[6]=R8(c->r[4]+0x00000056u); // 800B3AB4
  c->r[0]=R8(c->r[5]+0x00000056u); // 800B3AB8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3AC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3AC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3AC8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3ACC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3AD0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3AD4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3AD8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3ADC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3AE0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[3]);} // 800B3AE4
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800B3AE8
  W8(c->r[3]+0x00000056u,c->r[0]); // 800B3AEC
  c->r[6]=R8(c->r[4]+0x00000057u); // 800B3AF0
  c->r[0]=R8(c->r[5]+0x00000057u); // 800B3AF4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3AFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3B00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3B04
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3B08
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3B0C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3B10
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3B14
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3B18
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3B1C
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[3]);} // 800B3B20
  c->r[0]=R32(c->r[1]+0x000000BCu); // 800B3B24
  W8(c->r[3]+0x00000057u,c->r[0]); // 800B3B28
  c->r[6]=R8(c->r[4]+0x00000058u); // 800B3B2C
  c->r[0]=R8(c->r[5]+0x00000058u); // 800B3B30
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3B38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3B3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3B40
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3B44
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3B48
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3B4C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3B50
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3B54
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3B58
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[3]);} // 800B3B5C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B3B60
  W8(c->r[3]+0x00000058u,c->r[0]); // 800B3B64
  c->r[6]=R8(c->r[4]+0x00000059u); // 800B3B68
  c->r[0]=R8(c->r[5]+0x00000059u); // 800B3B6C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3B70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3B74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3B78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3B7C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3B80
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3B84
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3B88
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3B8C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3B90
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3B94
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[3]);} // 800B3B98
  c->r[0]=R32(c->r[1]+0x000000CCu); // 800B3B9C
  W8(c->r[3]+0x00000059u,c->r[0]); // 800B3BA0
  c->r[6]=R8(c->r[4]+0x0000005Au); // 800B3BA4
  c->r[0]=R8(c->r[5]+0x0000005Au); // 800B3BA8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3BB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3BB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3BB8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3BBC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B3BC0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 800B3BC4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B3BC8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B3BCC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B3BD0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[3]);} // 800B3BD4
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800B3BD8
  W8(c->r[3]+0x0000005Au,c->r[0]); // 800B3BDC
  c->r[6]=R8(c->r[4]+0x0000005Bu); // 800B3BE0
  c->r[0]=R8(c->r[5]+0x0000005Bu); // 800B3BE4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B3BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3BEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 800B3BF0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B3BF4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 800B3BF8
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800B3BFC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[4]); // 800B3C00
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B3C04
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B3C08
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B3C0C
  {uint32_t ea=c->r[1]+0x000000D8u; WF64(ea,c->f[0]);} // 800B3C10
  c->r[0]=R32(c->r[1]+0x000000DCu); // 800B3C14
  W8(c->r[3]+0x0000005Bu,c->r[0]); // 800B3C18
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C1C
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C20
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 800B3C24
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B3C28
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B3C2C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B3C30
  {uint32_t ea=c->r[4]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C34
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C38
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 800B3C3C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B3C40
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B3C44
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 800B3C48
  {uint32_t ea=c->r[4]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C4C
  {uint32_t ea=c->r[5]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C50
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800B3C54
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B3C58
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B3C5C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800B3C60
  c->r[1]=c->r[1]+0x000000E0u; // 800B3C64
  return; // 800B3C68
}

// fn_800B3C6C
void f_800B3C6C(Ctx* __restrict c) {
  trace_call(0x800B3C6Cu);
  c->r[3]=0u+0x00000070u; // 800B3C6C
  return; // 800B3C70
}

// fn_800B3C74
void f_800B3C74(Ctx* __restrict c) {
  trace_call(0x800B3C74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3C74
  c->r[0]=c->lr; // 800B3C78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3C7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3C80
  c->r[31]=c->r[3]|c->r[3]; // 800B3C84
  c->lr=0x800B3C8Cu; f_800B2E38(c); // 800B3C88
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B3C8C
  c->r[3]=0u+0x80420000u; // 800B3C90
  c->r[3]=c->r[3]+0xFFFFAF00u; // 800B3C94
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B3C98
  c->r[0]=c->r[0]|0x80000000u; // 800B3C9C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B3CA0
  c->r[3]=c->r[31]|c->r[31]; // 800B3CA4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B3CA8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B3CAC
  c->ctr=c->r[12]; // 800B3CB0
  if (true) { c->lr=0x800B3CB8u; dispatch(c,c->ctr); } // 800B3CB4
  c->r[3]=c->r[31]|c->r[31]; // 800B3CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3CBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3CC0
  c->lr=c->r[0]; // 800B3CC4
  c->r[1]=c->r[1]+0x00000010u; // 800B3CC8
  return; // 800B3CCC
}

// fn_800B3CD0
void f_800B3CD0(Ctx* __restrict c) {
  trace_call(0x800B3CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3CD0
  c->r[0]=c->lr; // 800B3CD4
  cmps(c,0,(int32_t)c->r[3],0); // 800B3CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3CDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B3CE0
  c->r[30]=c->r[3]|c->r[3]; // 800B3CE4
  c->r[31]=c->r[4]|c->r[4]; // 800B3CE8
  if (crb(c,2)) { goto L_800B3D08; } // 800B3CEC
  c->r[4]=0u+0x00000000u; // 800B3CF0
  c->lr=0x800B3CF8u; f_802B1180(c); // 800B3CF4
  cmps(c,0,(int32_t)c->r[31],0); // 800B3CF8
  if (!crb(c,1)) { goto L_800B3D08; } // 800B3CFC
  c->r[3]=c->r[30]|c->r[30]; // 800B3D00
  c->lr=0x800B3D08u; f_80244DC0(c); // 800B3D04
L_800B3D08:;
  c->r[3]=c->r[30]|c->r[30]; // 800B3D08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B3D0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3D10
  c->lr=c->r[0]; // 800B3D14
  c->r[1]=c->r[1]+0x00000010u; // 800B3D18
  return; // 800B3D1C
}

// fn_800B3D20
void f_800B3D20(Ctx* __restrict c) {
  trace_call(0x800B3D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3D20
  c->r[0]=c->lr; // 800B3D24
  c->r[3]=0u+0x00000070u; // 800B3D28
  c->r[4]=c->r[13]+0xFFFFA9C8u; // 800B3D2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3D30
  c->r[5]=0u+0x00000000u; // 800B3D34
  c->r[6]=0u+0x00001001u; // 800B3D38
  c->lr=0x800B3D40u; f_80244D20(c); // 800B3D3C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3D40
  if (crb(c,2)) { goto L_800B3D4C; } // 800B3D44
  c->lr=0x800B3D4Cu; f_800B3C74(c); // 800B3D48
L_800B3D4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3D4C
  c->lr=c->r[0]; // 800B3D50
  c->r[1]=c->r[1]+0x00000010u; // 800B3D54
  return; // 800B3D58
}

// fn_800B3D5C
void f_800B3D5C(Ctx* __restrict c) {
  trace_call(0x800B3D5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3D5C
  c->r[0]=c->lr; // 800B3D60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3D64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3D68
  c->r[31]=c->r[3]|c->r[3]; // 800B3D6C
  c->lr=0x800B3D74u; f_80244520(c); // 800B3D70
  c->r[7]=c->r[3]|c->r[3]; // 800B3D74
  c->r[9]=c->r[31]|c->r[31]; // 800B3D78
  c->r[3]=0u+0x00000070u; // 800B3D7C
  c->r[4]=c->r[13]+0xFFFFA9CDu; // 800B3D80
  c->r[5]=0u+0x00000000u; // 800B3D84
  c->r[6]=0u+0x00002001u; // 800B3D88
  c->r[8]=0u+0x00000000u; // 800B3D8C
  c->lr=0x800B3D94u; f_80242DF0(c); // 800B3D90
  c->r[4]=c->r[3]|c->r[3]; // 800B3D94
  c->r[3]=0u+0x00000070u; // 800B3D98
  c->r[5]=c->r[13]+0xFFFFA9D2u; // 800B3D9C
  c->r[6]=0u+0x00000000u; // 800B3DA0
  c->r[7]=0u+0x00001001u; // 800B3DA4
  c->lr=0x800B3DACu; f_80244DB0(c); // 800B3DA8
  cmps(c,0,(int32_t)c->r[3],0); // 800B3DAC
  if (crb(c,2)) { goto L_800B3DB8; } // 800B3DB0
  c->lr=0x800B3DB8u; f_800B3C74(c); // 800B3DB4
L_800B3DB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3DB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3DBC
  c->lr=c->r[0]; // 800B3DC0
  c->r[1]=c->r[1]+0x00000010u; // 800B3DC4
  return; // 800B3DC8
}

// fn_800B3DCC
void f_800B3DCC(Ctx* __restrict c) {
  trace_call(0x800B3DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3DCC
  c->r[0]=c->lr; // 800B3DD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3DD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B3DD8
  c->r[31]=c->r[3]|c->r[3]; // 800B3DDC
  c->lr=0x800B3DE4u; f_802B1168(c); // 800B3DE0
  c->r[8]=0u+0x80420000u; // 800B3DE4
  c->r[7]=0u+0x80410000u; // 800B3DE8
  c->r[5]=0u+0x5A370000u; // 800B3DEC
  c->r[4]=0u+0xF5210000u; // 800B3DF0
  c->r[3]=0u+0x7A1C0000u; // 800B3DF4
  c->r[8]=c->r[8]+0xFFFFAEC4u; // 800B3DF8
  c->r[0]=c->r[3]+0xFFFFB8C9u; // 800B3DFC
  c->r[7]=c->r[7]+0xFFFFCA77u; // 800B3E00
  c->r[5]=c->r[5]+0x000015FDu; // 800B3E04
  c->r[4]=c->r[4]+0xFFFFA55Du; // 800B3E08
  c->r[6]=0u+0x00000000u; // 800B3E0C
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B3E10
  c->r[3]=c->r[31]|c->r[31]; // 800B3E14
  W32(c->r[31]+0x00000000u,c->r[7]); // 800B3E18
  W32(c->r[31]+0x00000008u,c->r[6]); // 800B3E1C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B3E20
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B3E24
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B3E28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B3E2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3E30
  c->lr=c->r[0]; // 800B3E34
  c->r[1]=c->r[1]+0x00000010u; // 800B3E38
  return; // 800B3E3C
}

// fn_800B3E40
void f_800B3E40(Ctx* __restrict c) {
  trace_call(0x800B3E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3E40
  c->r[0]=c->lr; // 800B3E44
  cmps(c,0,(int32_t)c->r[4],0); // 800B3E48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3E4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B3E50
  c->r[30]=c->r[3]|c->r[3]; // 800B3E54
  c->r[31]=c->r[4]|c->r[4]; // 800B3E58
  if (crb(c,2)) { goto L_800B3EB0; } // 800B3E5C
  c->r[3]=c->r[31]|c->r[31]; // 800B3E60
  c->lr=0x800B3E68u; f_80244520(c); // 800B3E64
  c->r[7]=c->r[3]|c->r[3]; // 800B3E68
  c->r[9]=c->r[31]|c->r[31]; // 800B3E6C
  c->r[3]=0u+0x00000058u; // 800B3E70
  c->r[4]=c->r[13]+0xFFFFA9D7u; // 800B3E74
  c->r[5]=0u+0x00000000u; // 800B3E78
  c->r[6]=0u+0x00002001u; // 800B3E7C
  c->r[8]=0u+0x00000000u; // 800B3E80
  c->lr=0x800B3E88u; f_80242DF0(c); // 800B3E84
  c->r[4]=c->r[3]|c->r[3]; // 800B3E88
  c->r[3]=0u+0x00000058u; // 800B3E8C
  c->r[5]=c->r[13]+0xFFFFA9DCu; // 800B3E90
  c->r[6]=0u+0x00000000u; // 800B3E94
  c->r[7]=0u+0x00001001u; // 800B3E98
  c->lr=0x800B3EA0u; f_80244DB0(c); // 800B3E9C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3EA0
  if (crb(c,2)) { goto L_800B3ED0; } // 800B3EA4
  c->lr=0x800B3EACu; f_800B3DCC(c); // 800B3EA8
  goto L_800B3ED0; // 800B3EAC
L_800B3EB0:;
  c->r[3]=0u+0x00000058u; // 800B3EB0
  c->r[4]=c->r[13]+0xFFFFA9E1u; // 800B3EB4
  c->r[5]=0u+0x00000000u; // 800B3EB8
  c->r[6]=0u+0x00001001u; // 800B3EBC
  c->lr=0x800B3EC4u; f_80244D20(c); // 800B3EC0
  cmps(c,0,(int32_t)c->r[3],0); // 800B3EC4
  if (crb(c,2)) { goto L_800B3ED0; } // 800B3EC8
  c->lr=0x800B3ED0u; f_800B3DCC(c); // 800B3ECC
L_800B3ED0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B3ED0
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B3ED4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B3ED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3EDC
  c->lr=c->r[0]; // 800B3EE0
  c->r[1]=c->r[1]+0x00000010u; // 800B3EE4
  return; // 800B3EE8
}

// fn_800B3EEC
void f_800B3EEC(Ctx* __restrict c) {
  trace_call(0x800B3EECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3EEC
  c->r[0]=c->lr; // 800B3EF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3EF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B3EF8
  c->r[31]=c->r[4]|c->r[4]; // 800B3EFC
  c->r[30]=c->r[3]|c->r[3]; // 800B3F00
  c->r[4]=0u+0x00000000u; // 800B3F04
  c->r[3]=c->r[31]|c->r[31]; // 800B3F08
  c->lr=0x800B3F10u; f_8030BE30(c); // 800B3F0C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B3F10
  c->r[3]=c->r[31]|c->r[31]; // 800B3F14
  c->lr=0x800B3F1Cu; f_8030BD1C(c); // 800B3F18
  W32(c->r[30]+0x00000020u,c->r[3]); // 800B3F1C
  c->r[3]=c->r[31]|c->r[31]; // 800B3F20
  c->r[4]=0u+0x00000000u; // 800B3F24
  c->lr=0x800B3F2Cu; f_8030BE30(c); // 800B3F28
  W32(c->r[30]+0x00000028u,c->r[3]); // 800B3F2C
  c->r[3]=c->r[31]|c->r[31]; // 800B3F30
  c->lr=0x800B3F38u; f_8030BD1C(c); // 800B3F34
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 800B3F38
  c->r[3]=c->r[31]|c->r[31]; // 800B3F3C
  c->lr=0x800B3F44u; f_8030C0A0(c); // 800B3F40
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800B3F44
  c->r[3]=c->r[31]|c->r[31]; // 800B3F48
  c->lr=0x800B3F50u; f_8030BD1C(c); // 800B3F4C
  W32(c->r[30]+0x00000038u,c->r[3]); // 800B3F50
  c->r[3]=c->r[31]|c->r[31]; // 800B3F54
  c->lr=0x800B3F5Cu; f_8030BD1C(c); // 800B3F58
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800B3F5C
  c->r[3]=c->r[31]|c->r[31]; // 800B3F60
  c->lr=0x800B3F68u; f_8030C0A0(c); // 800B3F64
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800B3F68
  c->r[3]=c->r[31]|c->r[31]; // 800B3F6C
  c->lr=0x800B3F74u; f_8030C0A0(c); // 800B3F70
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800B3F74
  c->r[3]=c->r[31]|c->r[31]; // 800B3F78
  c->lr=0x800B3F80u; f_8030C0A0(c); // 800B3F7C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800B3F80
  c->r[3]=c->r[31]|c->r[31]; // 800B3F84
  c->lr=0x800B3F8Cu; f_8030C0A0(c); // 800B3F88
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B3F8C
  c->r[3]=c->r[31]|c->r[31]; // 800B3F90
  c->lr=0x800B3F98u; f_8030C0A0(c); // 800B3F94
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800B3F98
  c->r[3]=c->r[31]|c->r[31]; // 800B3F9C
  c->lr=0x800B3FA4u; f_8030C0A0(c); // 800B3FA0
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800B3FA4
  c->r[3]=0u+0x00000000u; // 800B3FA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B3FAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B3FB0
  c->lr=c->r[0]; // 800B3FB4
  c->r[1]=c->r[1]+0x00000010u; // 800B3FB8
  return; // 800B3FBC
}

// fn_800B3FC0
void f_800B3FC0(Ctx* __restrict c) {
  trace_call(0x800B3FC0u);
  return; // 800B3FC0
}

// fn_800B3FC4
void f_800B3FC4(Ctx* __restrict c) {
  trace_call(0x800B3FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3FC4
  c->r[0]=c->lr; // 800B3FC8
  cmps(c,0,(int32_t)c->r[6],0); // 800B3FCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3FD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B3FD4
  c->r[30]=c->r[3]|c->r[3]; // 800B3FD8
  c->r[31]=c->r[5]|c->r[5]; // 800B3FDC
  if (!crb(c,2)) { goto L_800B4014; } // 800B3FE0
  c->r[0]=R32(c->r[3]+0x00000020u); // 800B3FE4
  cmps(c,0,(int32_t)c->r[0],7); // 800B3FE8
  if (!crb(c,0)) { goto L_800B3FFC; } // 800B3FEC
  c->r[4]=c->r[31]|c->r[31]; // 800B3FF0
  c->r[3]=c->r[3]+0x0000001Cu; // 800B3FF4
  c->lr=0x800B3FFCu; f_8003A994(c); // 800B3FF8
L_800B3FFC:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800B3FFC
  cmps(c,0,(int32_t)c->r[0],7); // 800B4000
  if (!crb(c,0)) { goto L_800B4014; } // 800B4004
  c->r[4]=c->r[31]|c->r[31]; // 800B4008
  c->r[3]=c->r[30]+0x00000028u; // 800B400C
  c->lr=0x800B4014u; f_8003A994(c); // 800B4010
L_800B4014:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4014
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4018
  c->lr=c->r[0]; // 800B401C
  c->r[1]=c->r[1]+0x00000010u; // 800B4020
  return; // 800B4024
}

// fn_800B4028
void f_800B4028(Ctx* __restrict c) {
  trace_call(0x800B4028u);
  {uint32_t ea=c->r[2]+0xFFFF86FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4028
  c->r[5]=0u+0x00000000u; // 800B402C
  {uint32_t ea=c->r[2]+0xFFFF8740u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4030
  c->r[4]=0u+0x0000000Au; // 800B4034
  c->r[0]=0u+0x0000000Bu; // 800B4038
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 800B403C
  W32(c->r[3]+0x00000024u,c->r[5]); // 800B4040
  W32(c->r[3]+0x00000020u,c->r[5]); // 800B4044
  W32(c->r[3]+0x00000028u,c->r[5]); // 800B4048
  W32(c->r[3]+0x00000030u,c->r[5]); // 800B404C
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 800B4050
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 800B4054
  W32(c->r[3]+0x00000038u,c->r[4]); // 800B4058
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800B405C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800B4060
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 800B4064
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800B4068
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B406C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 800B4070
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800B4074
  return; // 800B4078
}

// fn_800B407C
void f_800B407C(Ctx* __restrict c) {
  trace_call(0x800B407Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B407C
  c->r[0]=c->lr; // 800B4080
  cmps(c,0,(int32_t)c->r[5],0); // 800B4084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B408C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B4090
  c->r[30]=c->r[4]|c->r[4]; // 800B4094
  if (crb(c,2)) { goto L_800B40A4; } // 800B4098
  c->r[31]=c->r[5]|c->r[5]; // 800B409C
  goto L_800B40A8; // 800B40A0
L_800B40A4:;
  c->r[31]=c->r[3]|c->r[3]; // 800B40A4
L_800B40A8:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800B40A8
  c->r[4]=c->r[4]+0x0000001Cu; // 800B40AC
  c->lr=0x800B40B4u; f_8003AB48(c); // 800B40B0
  c->r[3]=c->r[31]+0x00000028u; // 800B40B4
  c->r[4]=c->r[30]+0x00000028u; // 800B40B8
  c->lr=0x800B40C0u; f_8003AB48(c); // 800B40BC
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B40C0
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B40C4
  c->r[0]=R32(c->r[30]+0x00000038u); // 800B40C8
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B40CC
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800B40D0
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800B40D4
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B40D8
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800B40DC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B40E0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800B40E4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B40E8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800B40EC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B40F0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B40F4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B40F8
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800B40FC
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4100
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B4104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4108
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B410C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4110
  c->lr=c->r[0]; // 800B4114
  c->r[1]=c->r[1]+0x00000010u; // 800B4118
  return; // 800B411C
}

// fn_800B4120
void f_800B4120(Ctx* __restrict c) {
  trace_call(0x800B4120u);
  c->r[3]=0u+0x00000000u; // 800B4120
  return; // 800B4124
}

// fn_800B4128
void f_800B4128(Ctx* __restrict c) {
  trace_call(0x800B4128u);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4128
  c->r[0]=0u+0x43300000u; // 800B412C
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4130
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B4134
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[4]=RF64(ea);} // 800B4138
  {uint32_t ea=c->r[5]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B413C
  {uint32_t ea=c->r[4]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4140
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B4144
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4148
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B414C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B4150
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B4154
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 800B4158
  c->r[6]=R32(c->r[4]+0x00000038u); // 800B415C
  c->r[0]=R32(c->r[5]+0x00000038u); // 800B4160
  c->r[6]=c->r[6]^0x80000000u; // 800B4164
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B4168
  c->r[0]=c->r[0]^0x80000000u; // 800B416C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4170
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B4174
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B4178
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B417C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B4180
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B4184
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B4188
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B418C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B4190
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800B4194
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B4198
  W32(c->r[3]+0x00000038u,c->r[0]); // 800B419C
  c->r[6]=R32(c->r[4]+0x0000003Cu); // 800B41A0
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 800B41A4
  c->r[6]=c->r[6]^0x80000000u; // 800B41A8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B41AC
  c->r[0]=c->r[0]^0x80000000u; // 800B41B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B41B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B41B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B41BC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B41C0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B41C4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B41C8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B41CC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B41D0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B41D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800B41D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B41DC
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800B41E0
  {uint32_t ea=c->r[4]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B41E4
  {uint32_t ea=c->r[5]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B41E8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B41EC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B41F0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B41F4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 800B41F8
  {uint32_t ea=c->r[4]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B41FC
  {uint32_t ea=c->r[5]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4200
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B4204
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B4208
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B420C
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 800B4210
  {uint32_t ea=c->r[4]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4214
  {uint32_t ea=c->r[5]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4218
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B421C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B4220
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B4224
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[2]);} // 800B4228
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B422C
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4230
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B4234
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B4238
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B423C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 800B4240
  {uint32_t ea=c->r[4]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4244
  {uint32_t ea=c->r[5]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4248
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B424C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B4250
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B4254
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[2]);} // 800B4258
  {uint32_t ea=c->r[4]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B425C
  {uint32_t ea=c->r[5]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4260
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B4264
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[2]); // 800B4268
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800B426C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800B4270
  c->r[1]=c->r[1]+0x00000030u; // 800B4274
  return; // 800B4278
}

// fn_800B427C
void f_800B427C(Ctx* __restrict c) {
  trace_call(0x800B427Cu);
  c->r[3]=0u+0x00000058u; // 800B427C
  return; // 800B4280
}

// fn_800B4284
void f_800B4284(Ctx* __restrict c) {
  trace_call(0x800B4284u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4284
  c->r[0]=c->lr; // 800B4288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B428C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4290
  c->r[31]=c->r[3]|c->r[3]; // 800B4294
  c->lr=0x800B429Cu; f_800B3DCC(c); // 800B4298
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B429C
  c->r[3]=0u+0x80420000u; // 800B42A0
  c->r[3]=c->r[3]+0xFFFFAE84u; // 800B42A4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B42A8
  c->r[0]=c->r[0]|0x80000000u; // 800B42AC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B42B0
  c->r[3]=c->r[31]|c->r[31]; // 800B42B4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B42B8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B42BC
  c->ctr=c->r[12]; // 800B42C0
  if (true) { c->lr=0x800B42C8u; dispatch(c,c->ctr); } // 800B42C4
  c->r[3]=c->r[31]|c->r[31]; // 800B42C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B42CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B42D0
  c->lr=c->r[0]; // 800B42D4
  c->r[1]=c->r[1]+0x00000010u; // 800B42D8
  return; // 800B42DC
}

// fn_800B42E0
void f_800B42E0(Ctx* __restrict c) {
  trace_call(0x800B42E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B42E0
  c->r[0]=c->lr; // 800B42E4
  cmps(c,0,(int32_t)c->r[3],0); // 800B42E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B42EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B42F0
  c->r[30]=c->r[3]|c->r[3]; // 800B42F4
  c->r[31]=c->r[4]|c->r[4]; // 800B42F8
  if (crb(c,2)) { goto L_800B4318; } // 800B42FC
  c->r[4]=0u+0x00000000u; // 800B4300
  c->lr=0x800B4308u; f_802B1180(c); // 800B4304
  cmps(c,0,(int32_t)c->r[31],0); // 800B4308
  if (!crb(c,1)) { goto L_800B4318; } // 800B430C
  c->r[3]=c->r[30]|c->r[30]; // 800B4310
  c->lr=0x800B4318u; f_80244DC0(c); // 800B4314
L_800B4318:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4318
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B431C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4320
  c->lr=c->r[0]; // 800B4324
  c->r[1]=c->r[1]+0x00000010u; // 800B4328
  return; // 800B432C
}

// fn_800B4330
void f_800B4330(Ctx* __restrict c) {
  trace_call(0x800B4330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4330
  c->r[0]=c->lr; // 800B4334
  c->r[3]=0u+0x00000058u; // 800B4338
  c->r[4]=c->r[13]+0xFFFFA9E6u; // 800B433C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4340
  c->r[5]=0u+0x00000000u; // 800B4344
  c->r[6]=0u+0x00001001u; // 800B4348
  c->lr=0x800B4350u; f_80244D20(c); // 800B434C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4350
  if (crb(c,2)) { goto L_800B435C; } // 800B4354
  c->lr=0x800B435Cu; f_800B4284(c); // 800B4358
L_800B435C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B435C
  c->lr=c->r[0]; // 800B4360
  c->r[1]=c->r[1]+0x00000010u; // 800B4364
  return; // 800B4368
}

// fn_800B436C
void f_800B436C(Ctx* __restrict c) {
  trace_call(0x800B436Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B436C
  c->r[0]=c->lr; // 800B4370
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4378
  c->r[31]=c->r[3]|c->r[3]; // 800B437C
  c->lr=0x800B4384u; f_80244520(c); // 800B4380
  c->r[7]=c->r[3]|c->r[3]; // 800B4384
  c->r[9]=c->r[31]|c->r[31]; // 800B4388
  c->r[3]=0u+0x00000058u; // 800B438C
  c->r[4]=c->r[13]+0xFFFFA9EBu; // 800B4390
  c->r[5]=0u+0x00000000u; // 800B4394
  c->r[6]=0u+0x00002001u; // 800B4398
  c->r[8]=0u+0x00000000u; // 800B439C
  c->lr=0x800B43A4u; f_80242DF0(c); // 800B43A0
  c->r[4]=c->r[3]|c->r[3]; // 800B43A4
  c->r[3]=0u+0x00000058u; // 800B43A8
  c->r[5]=c->r[13]+0xFFFFA9F0u; // 800B43AC
  c->r[6]=0u+0x00000000u; // 800B43B0
  c->r[7]=0u+0x00001001u; // 800B43B4
  c->lr=0x800B43BCu; f_80244DB0(c); // 800B43B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B43BC
  if (crb(c,2)) { goto L_800B43C8; } // 800B43C0
  c->lr=0x800B43C8u; f_800B4284(c); // 800B43C4
L_800B43C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B43C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B43CC
  c->lr=c->r[0]; // 800B43D0
  c->r[1]=c->r[1]+0x00000010u; // 800B43D4
  return; // 800B43D8
}

// fn_800B43DC
void f_800B43DC(Ctx* __restrict c) {
  trace_call(0x800B43DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B43DC
  c->r[0]=c->lr; // 800B43E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B43E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B43E8
  c->r[31]=c->r[3]|c->r[3]; // 800B43EC
  c->lr=0x800B43F4u; f_802B1168(c); // 800B43F0
  c->r[8]=0u+0x80420000u; // 800B43F4
  c->r[7]=0u+0x80410000u; // 800B43F8
  c->r[5]=0u+0x02D40000u; // 800B43FC
  c->r[4]=0u+0x326D0000u; // 800B4400
  c->r[3]=0u+0xBD580000u; // 800B4404
  c->r[8]=c->r[8]+0xFFFFAE48u; // 800B4408
  c->r[0]=c->r[3]+0xFFFF9BA7u; // 800B440C
  c->r[7]=c->r[7]+0xFFFFCA86u; // 800B4410
  c->r[5]=c->r[5]+0xFFFF9272u; // 800B4414
  c->r[4]=c->r[4]+0xFFFF8633u; // 800B4418
  c->r[6]=0u+0x00000000u; // 800B441C
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B4420
  c->r[3]=c->r[31]|c->r[31]; // 800B4424
  W32(c->r[31]+0x00000000u,c->r[7]); // 800B4428
  W32(c->r[31]+0x00000008u,c->r[6]); // 800B442C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B4430
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B4434
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B4438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B443C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4440
  c->lr=c->r[0]; // 800B4444
  c->r[1]=c->r[1]+0x00000010u; // 800B4448
  return; // 800B444C
}

// fn_800B4450
void f_800B4450(Ctx* __restrict c) {
  trace_call(0x800B4450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4450
  c->r[0]=c->lr; // 800B4454
  cmps(c,0,(int32_t)c->r[4],0); // 800B4458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B445C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B4460
  c->r[30]=c->r[3]|c->r[3]; // 800B4464
  c->r[31]=c->r[4]|c->r[4]; // 800B4468
  if (crb(c,2)) { goto L_800B44C0; } // 800B446C
  c->r[3]=c->r[31]|c->r[31]; // 800B4470
  c->lr=0x800B4478u; f_80244520(c); // 800B4474
  c->r[7]=c->r[3]|c->r[3]; // 800B4478
  c->r[9]=c->r[31]|c->r[31]; // 800B447C
  c->r[3]=0u+0x0000002Cu; // 800B4480
  c->r[4]=c->r[13]+0xFFFFA9F5u; // 800B4484
  c->r[5]=0u+0x00000000u; // 800B4488
  c->r[6]=0u+0x00002001u; // 800B448C
  c->r[8]=0u+0x00000000u; // 800B4490
  c->lr=0x800B4498u; f_80242DF0(c); // 800B4494
  c->r[4]=c->r[3]|c->r[3]; // 800B4498
  c->r[3]=0u+0x0000002Cu; // 800B449C
  c->r[5]=c->r[13]+0xFFFFA9FAu; // 800B44A0
  c->r[6]=0u+0x00000000u; // 800B44A4
  c->r[7]=0u+0x00001001u; // 800B44A8
  c->lr=0x800B44B0u; f_80244DB0(c); // 800B44AC
  cmps(c,0,(int32_t)c->r[3],0); // 800B44B0
  if (crb(c,2)) { goto L_800B44E0; } // 800B44B4
  c->lr=0x800B44BCu; f_800B43DC(c); // 800B44B8
  goto L_800B44E0; // 800B44BC
L_800B44C0:;
  c->r[3]=0u+0x0000002Cu; // 800B44C0
  c->r[4]=c->r[13]+0xFFFFA9FFu; // 800B44C4
  c->r[5]=0u+0x00000000u; // 800B44C8
  c->r[6]=0u+0x00001001u; // 800B44CC
  c->lr=0x800B44D4u; f_80244D20(c); // 800B44D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B44D4
  if (crb(c,2)) { goto L_800B44E0; } // 800B44D8
  c->lr=0x800B44E0u; f_800B43DC(c); // 800B44DC
L_800B44E0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B44E0
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B44E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B44E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B44EC
  c->lr=c->r[0]; // 800B44F0
  c->r[1]=c->r[1]+0x00000010u; // 800B44F4
  return; // 800B44F8
}

// fn_800B44FC
void f_800B44FC(Ctx* __restrict c) {
  trace_call(0x800B44FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B44FC
  c->r[0]=c->lr; // 800B4500
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4504
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B4508
  c->r[31]=c->r[4]|c->r[4]; // 800B450C
  c->r[30]=c->r[3]|c->r[3]; // 800B4510
  c->r[3]=c->r[31]|c->r[31]; // 800B4514
  c->lr=0x800B451Cu; f_8030C0A0(c); // 800B4518
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B451C
  c->r[3]=c->r[31]|c->r[31]; // 800B4520
  c->r[4]=0u+0x00000000u; // 800B4524
  c->lr=0x800B452Cu; f_8030BE30(c); // 800B4528
  W32(c->r[30]+0x00000020u,c->r[3]); // 800B452C
  c->r[3]=c->r[31]|c->r[31]; // 800B4530
  c->lr=0x800B4538u; f_8030BD1C(c); // 800B4534
  W32(c->r[30]+0x00000024u,c->r[3]); // 800B4538
  c->r[3]=0u+0x00000000u; // 800B453C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4540
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4544
  c->lr=c->r[0]; // 800B4548
  c->r[1]=c->r[1]+0x00000010u; // 800B454C
  return; // 800B4550
}

// fn_800B4554
void f_800B4554(Ctx* __restrict c) {
  trace_call(0x800B4554u);
  return; // 800B4554
}

// fn_800B4558
void f_800B4558(Ctx* __restrict c) {
  trace_call(0x800B4558u);
  cmps(c,0,(int32_t)c->r[6],0); // 800B4558
  if (!crb(c,2)) return; // 800B455C
  c->r[0]=R32(c->r[3]+0x00000024u); // 800B4560
  cmps(c,0,(int32_t)c->r[0],7); // 800B4564
  if (!crb(c,0)) return; // 800B4568
  c->r[4]=c->r[5]|c->r[5]; // 800B456C
  c->r[3]=c->r[3]+0x00000020u; // 800B4570
  f_8003A994(c); return; // 800B4574
  return; // 800B4578
}

// fn_800B457C
void f_800B457C(Ctx* __restrict c) {
  trace_call(0x800B457Cu);
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B457C
  c->r[0]=0u+0x00000000u; // 800B4580
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B4584
  W32(c->r[3]+0x00000020u,c->r[0]); // 800B4588
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B458C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800B4590
  return; // 800B4594
}

// fn_800B4598
void f_800B4598(Ctx* __restrict c) {
  trace_call(0x800B4598u);
  cmps(c,0,(int32_t)c->r[5],0); // 800B4598
  if (crb(c,2)) { goto L_800B45A4; } // 800B459C
  goto L_800B45A8; // 800B45A0
L_800B45A4:;
  c->r[5]=c->r[3]|c->r[3]; // 800B45A4
L_800B45A8:;
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B45A8
  c->r[3]=c->r[5]+0x00000020u; // 800B45AC
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B45B0
  c->r[4]=c->r[4]+0x00000020u; // 800B45B4
  f_8003AB48(c); return; // 800B45B8
}

// fn_800B45BC
void f_800B45BC(Ctx* __restrict c) {
  trace_call(0x800B45BCu);
  c->r[3]=0u+0x00000000u; // 800B45BC
  return; // 800B45C0
}

// fn_800B45C4
void f_800B45C4(Ctx* __restrict c) {
  trace_call(0x800B45C4u);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B45C4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B45C8
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 800B45CC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B45D0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B45D4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800B45D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B45DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B45E0
  return; // 800B45E4
}

// fn_800B45E8
void f_800B45E8(Ctx* __restrict c) {
  trace_call(0x800B45E8u);
  c->r[3]=0u+0x0000002Cu; // 800B45E8
  return; // 800B45EC
}

// fn_800B45F0
void f_800B45F0(Ctx* __restrict c) {
  trace_call(0x800B45F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B45F0
  c->r[0]=c->lr; // 800B45F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B45F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B45FC
  c->r[31]=c->r[3]|c->r[3]; // 800B4600
  c->lr=0x800B4608u; f_800B43DC(c); // 800B4604
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B4608
  c->r[3]=0u+0x80420000u; // 800B460C
  c->r[3]=c->r[3]+0xFFFFAE08u; // 800B4610
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B4614
  c->r[0]=c->r[0]|0x80000000u; // 800B4618
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B461C
  c->r[3]=c->r[31]|c->r[31]; // 800B4620
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B4624
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B4628
  c->ctr=c->r[12]; // 800B462C
  if (true) { c->lr=0x800B4634u; dispatch(c,c->ctr); } // 800B4630
  c->r[3]=c->r[31]|c->r[31]; // 800B4634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4638
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B463C
  c->lr=c->r[0]; // 800B4640
  c->r[1]=c->r[1]+0x00000010u; // 800B4644
  return; // 800B4648
}

// fn_800B464C
void f_800B464C(Ctx* __restrict c) {
  trace_call(0x800B464Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B464C
  c->r[0]=c->lr; // 800B4650
  cmps(c,0,(int32_t)c->r[3],0); // 800B4654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4658
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B465C
  c->r[30]=c->r[3]|c->r[3]; // 800B4660
  c->r[31]=c->r[4]|c->r[4]; // 800B4664
  if (crb(c,2)) { goto L_800B4684; } // 800B4668
  c->r[4]=0u+0x00000000u; // 800B466C
  c->lr=0x800B4674u; f_802B1180(c); // 800B4670
  cmps(c,0,(int32_t)c->r[31],0); // 800B4674
  if (!crb(c,1)) { goto L_800B4684; } // 800B4678
  c->r[3]=c->r[30]|c->r[30]; // 800B467C
  c->lr=0x800B4684u; f_80244DC0(c); // 800B4680
L_800B4684:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4684
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4688
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B468C
  c->lr=c->r[0]; // 800B4690
  c->r[1]=c->r[1]+0x00000010u; // 800B4694
  return; // 800B4698
}

// fn_800B469C
void f_800B469C(Ctx* __restrict c) {
  trace_call(0x800B469Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B469C
  c->r[0]=c->lr; // 800B46A0
  c->r[3]=0u+0x0000002Cu; // 800B46A4
  c->r[4]=c->r[13]+0xFFFFAA04u; // 800B46A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B46AC
  c->r[5]=0u+0x00000000u; // 800B46B0
  c->r[6]=0u+0x00001001u; // 800B46B4
  c->lr=0x800B46BCu; f_80244D20(c); // 800B46B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B46BC
  if (crb(c,2)) { goto L_800B46C8; } // 800B46C0
  c->lr=0x800B46C8u; f_800B45F0(c); // 800B46C4
L_800B46C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B46C8
  c->lr=c->r[0]; // 800B46CC
  c->r[1]=c->r[1]+0x00000010u; // 800B46D0
  return; // 800B46D4
}

// fn_800B46D8
void f_800B46D8(Ctx* __restrict c) {
  trace_call(0x800B46D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B46D8
  c->r[0]=c->lr; // 800B46DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B46E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B46E4
  c->r[31]=c->r[3]|c->r[3]; // 800B46E8
  c->lr=0x800B46F0u; f_80244520(c); // 800B46EC
  c->r[7]=c->r[3]|c->r[3]; // 800B46F0
  c->r[9]=c->r[31]|c->r[31]; // 800B46F4
  c->r[3]=0u+0x0000002Cu; // 800B46F8
  c->r[4]=c->r[13]+0xFFFFAA09u; // 800B46FC
  c->r[5]=0u+0x00000000u; // 800B4700
  c->r[6]=0u+0x00002001u; // 800B4704
  c->r[8]=0u+0x00000000u; // 800B4708
  c->lr=0x800B4710u; f_80242DF0(c); // 800B470C
  c->r[4]=c->r[3]|c->r[3]; // 800B4710
  c->r[3]=0u+0x0000002Cu; // 800B4714
  c->r[5]=c->r[13]+0xFFFFAA0Eu; // 800B4718
  c->r[6]=0u+0x00000000u; // 800B471C
  c->r[7]=0u+0x00001001u; // 800B4720
  c->lr=0x800B4728u; f_80244DB0(c); // 800B4724
  cmps(c,0,(int32_t)c->r[3],0); // 800B4728
  if (crb(c,2)) { goto L_800B4734; } // 800B472C
  c->lr=0x800B4734u; f_800B45F0(c); // 800B4730
L_800B4734:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B4738
  c->lr=c->r[0]; // 800B473C
  c->r[1]=c->r[1]+0x00000010u; // 800B4740
  return; // 800B4744
}

// fn_800B4748
void f_800B4748(Ctx* __restrict c) {
  trace_call(0x800B4748u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4748
  c->r[0]=c->lr; // 800B474C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B4750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B4754
  c->r[31]=c->r[3]|c->r[3]; // 800B4758
  c->lr=0x800B4760u; f_802B1168(c); // 800B475C
  c->r[7]=0u+0x80420000u; // 800B4760
  c->r[5]=0u+0x80410000u; // 800B4764
  c->r[6]=0u+0x00000000u; // 800B4768
  c->r[4]=0u+0x8C0A0000u; // 800B476C
  c->r[3]=0u+0xF61F0000u; // 800B4770
  c->r[7]=c->r[7]+0xFFFFADCCu; // 800B4774
  c->r[0]=c->r[3]+0xFFFFCF72u; // 800B4778
  c->r[5]=c->r[5]+0xFFFFCA95u; // 800B477C
  c->r[4]=c->r[4]+0xFFFFA7C9u; // 800B4780
  W32(c->r[31]+0x00000018u,c->r[7]); // 800B4784
  c->r[3]=c->r[31]|c->r[31]; // 800B4788
  W32(c->r[31]+0x00000108u,c->r[6]); // 800B478C
  W32(c->r[31]+0x00000000u,c->r[5]); // 800B4790
  W32(c->r[31]+0x00000008u,c->r[6]); // 800B4794
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800B4798
  W32(c->r[31]+0x00000010u,c->r[6]); // 800B479C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B47A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B47A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B47A8
  c->lr=c->r[0]; // 800B47AC
  c->r[1]=c->r[1]+0x00000010u; // 800B47B0
  return; // 800B47B4
}

// fn_800B47B8
void f_800B47B8(Ctx* __restrict c) {
  trace_call(0x800B47B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B47B8
  c->r[0]=c->lr; // 800B47BC
  cmps(c,0,(int32_t)c->r[4],0); // 800B47C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B47C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B47C8
  c->r[30]=c->r[3]|c->r[3]; // 800B47CC
  c->r[31]=c->r[4]|c->r[4]; // 800B47D0
  if (crb(c,2)) { goto L_800B4828; } // 800B47D4
  c->r[3]=c->r[31]|c->r[31]; // 800B47D8
  c->lr=0x800B47E0u; f_80244520(c); // 800B47DC
  c->r[7]=c->r[3]|c->r[3]; // 800B47E0
  c->r[9]=c->r[31]|c->r[31]; // 800B47E4
  c->r[3]=0u+0x0000010Cu; // 800B47E8
  c->r[4]=c->r[13]+0xFFFFAA13u; // 800B47EC
  c->r[5]=0u+0x00000000u; // 800B47F0
  c->r[6]=0u+0x00002001u; // 800B47F4
  c->r[8]=0u+0x00000000u; // 800B47F8
  c->lr=0x800B4800u; f_80242DF0(c); // 800B47FC
  c->r[4]=c->r[3]|c->r[3]; // 800B4800
  c->r[3]=0u+0x0000010Cu; // 800B4804
  c->r[5]=c->r[13]+0xFFFFAA18u; // 800B4808
  c->r[6]=0u+0x00000000u; // 800B480C
  c->r[7]=0u+0x00001001u; // 800B4810
  c->lr=0x800B4818u; f_80244DB0(c); // 800B4814
  cmps(c,0,(int32_t)c->r[3],0); // 800B4818
  if (crb(c,2)) { goto L_800B4848; } // 800B481C
  c->lr=0x800B4824u; f_800B4748(c); // 800B4820
  goto L_800B4848; // 800B4824
L_800B4828:;
  c->r[3]=0u+0x0000010Cu; // 800B4828
  c->r[4]=c->r[13]+0xFFFFAA1Du; // 800B482C
  c->r[5]=0u+0x00000000u; // 800B4830
  c->r[6]=0u+0x00001001u; // 800B4834
  c->lr=0x800B483Cu; f_80244D20(c); // 800B4838
  cmps(c,0,(int32_t)c->r[3],0); // 800B483C
  if (crb(c,2)) { goto L_800B4848; } // 800B4840
  c->lr=0x800B4848u; f_800B4748(c); // 800B4844
L_800B4848:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B4848
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B484C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B4850
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B4854
  c->lr=c->r[0]; // 800B4858
  c->r[1]=c->r[1]+0x00000010u; // 800B485C
  return; // 800B4860
}

// fn_800B4864
void f_800B4864(Ctx* __restrict c) {
  trace_call(0x800B4864u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4864
  c->r[0]=c->lr; // 800B4868
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B486C
  c->r[11]=c->r[1]+0x00000020u; // 800B4870
  c->lr=0x800B4878u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B4874
  c->r[30]=c->r[4]|c->r[4]; // 800B4878
  c->r[29]=c->r[3]|c->r[3]; // 800B487C
  c->r[3]=c->r[30]|c->r[30]; // 800B4880
  c->lr=0x800B4888u; f_8030BD1C(c); // 800B4884
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 800B4888
  c->r[3]=c->r[30]|c->r[30]; // 800B488C
  c->lr=0x800B4894u; f_8030C0A0(c); // 800B4890
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[1]);} // 800B4894
  c->r[3]=c->r[30]|c->r[30]; // 800B4898
  c->lr=0x800B48A0u; f_8030C0A0(c); // 800B489C
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[1]);} // 800B48A0
  c->r[3]=c->r[30]|c->r[30]; // 800B48A4
  c->lr=0x800B48ACu; f_8030C0A0(c); // 800B48A8
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[1]);} // 800B48AC
  c->r[3]=c->r[30]|c->r[30]; // 800B48B0
  c->lr=0x800B48B8u; f_8030C0A0(c); // 800B48B4
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[1]);} // 800B48B8
  c->r[3]=c->r[30]|c->r[30]; // 800B48BC
  c->lr=0x800B48C4u; f_8030C0A0(c); // 800B48C0
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[1]);} // 800B48C4
  c->r[3]=c->r[30]|c->r[30]; // 800B48C8
  c->lr=0x800B48D0u; f_8030C0A0(c); // 800B48CC
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[1]);} // 800B48D0
  c->r[3]=c->r[30]|c->r[30]; // 800B48D4
  c->lr=0x800B48DCu; f_8030C0A0(c); // 800B48D8
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[1]);} // 800B48DC
  c->r[3]=c->r[30]|c->r[30]; // 800B48E0
  c->lr=0x800B48E8u; f_8030C0A0(c); // 800B48E4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B48E8
  c->r[3]=c->r[30]|c->r[30]; // 800B48EC
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[1]);} // 800B48F0
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800B48F4
  c->lr=0x800B48FCu; f_8030BD1C(c); // 800B48F8
  W32(c->r[29]+0x00000044u,c->r[3]); // 800B48FC
  c->r[3]=c->r[30]|c->r[30]; // 800B4900
  c->lr=0x800B4908u; f_8030BD1C(c); // 800B4904
  W32(c->r[29]+0x00000048u,c->r[3]); // 800B4908
  c->r[3]=c->r[30]|c->r[30]; // 800B490C
  c->lr=0x800B4914u; f_8030BD1C(c); // 800B4910
  W8(c->r[29]+0x0000004Cu,c->r[3]); // 800B4914
  c->r[3]=c->r[30]|c->r[30]; // 800B4918
  c->lr=0x800B4920u; f_8030BD1C(c); // 800B491C
  W8(c->r[29]+0x00000050u,c->r[3]); // 800B4920
  c->r[3]=c->r[30]|c->r[30]; // 800B4924
  c->lr=0x800B492Cu; f_8030C0A0(c); // 800B4928
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[1]);} // 800B492C
  c->r[3]=c->r[30]|c->r[30]; // 800B4930
  c->lr=0x800B4938u; f_8030C0A0(c); // 800B4934
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[1]);} // 800B4938
  c->r[3]=c->r[30]|c->r[30]; // 800B493C
  c->lr=0x800B4944u; f_8030C0A0(c); // 800B4940
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4944
  c->r[3]=c->r[30]|c->r[30]; // 800B4948
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 800B494C
  c->r[4]=0u+0x00000000u; // 800B4950
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[0]);} // 800B4954
  c->lr=0x800B495Cu; f_8030BE30(c); // 800B4958
  W32(c->r[29]+0x00000064u,c->r[3]); // 800B495C
  c->r[31]=0u+0x00000000u; // 800B4960
  c->r[3]=c->r[30]|c->r[30]; // 800B4964
  W32(c->r[29]+0x00000068u,c->r[31]); // 800B4968
  c->lr=0x800B4970u; f_8030BD1C(c); // 800B496C
  W32(c->r[29]+0x0000006Cu,c->r[3]); // 800B4970
  c->r[3]=c->r[30]|c->r[30]; // 800B4974
  c->r[4]=0u+0x00000000u; // 800B4978
  c->lr=0x800B4980u; f_8030BE30(c); // 800B497C
  W32(c->r[29]+0x00000070u,c->r[3]); // 800B4980
  c->r[3]=c->r[30]|c->r[30]; // 800B4984
  W32(c->r[29]+0x00000074u,c->r[31]); // 800B4988
  c->lr=0x800B4990u; f_8030BD1C(c); // 800B498C
  W32(c->r[29]+0x00000078u,c->r[3]); // 800B4990
  c->r[3]=c->r[30]|c->r[30]; // 800B4994
  c->lr=0x800B499Cu; f_8030C0A0(c); // 800B4998
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[1]);} // 800B499C
  c->r[3]=c->r[30]|c->r[30]; // 800B49A0
  c->r[4]=0u+0x00000000u; // 800B49A4
  c->lr=0x800B49ACu; f_8030BE30(c); // 800B49A8
  W32(c->r[29]+0x00000080u,c->r[3]); // 800B49AC
  c->r[3]=c->r[30]|c->r[30]; // 800B49B0
  W32(c->r[29]+0x00000084u,c->r[31]); // 800B49B4
  c->lr=0x800B49BCu; f_8030BD1C(c); // 800B49B8
  W32(c->r[29]+0x00000088u,c->r[3]); // 800B49BC
  c->r[3]=c->r[30]|c->r[30]; // 800B49C0
  c->lr=0x800B49C8u; f_8030BD1C(c); // 800B49C4
  W8(c->r[29]+0x0000008Cu,c->r[3]); // 800B49C8
  c->r[3]=c->r[30]|c->r[30]; // 800B49CC
  c->lr=0x800B49D4u; f_8030BD1C(c); // 800B49D0
  W32(c->r[29]+0x00000090u,c->r[3]); // 800B49D4
  c->r[3]=c->r[30]|c->r[30]; // 800B49D8
  c->lr=0x800B49E0u; f_8030C0A0(c); // 800B49DC
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[1]);} // 800B49E0
  c->r[3]=c->r[30]|c->r[30]; // 800B49E4
  c->lr=0x800B49ECu; f_8030C0A0(c); // 800B49E8
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[1]);} // 800B49EC
  c->r[3]=c->r[30]|c->r[30]; // 800B49F0
  c->r[4]=0u+0x00000000u; // 800B49F4
  c->lr=0x800B49FCu; f_8030BE30(c); // 800B49F8
  W32(c->r[29]+0x0000009Cu,c->r[3]); // 800B49FC
  c->r[3]=c->r[30]|c->r[30]; // 800B4A00
  W32(c->r[29]+0x000000A0u,c->r[31]); // 800B4A04
  c->lr=0x800B4A0Cu; f_8030BD1C(c); // 800B4A08
  W32(c->r[29]+0x000000A4u,c->r[3]); // 800B4A0C
  c->r[3]=c->r[30]|c->r[30]; // 800B4A10
  c->lr=0x800B4A18u; f_8030C0A0(c); // 800B4A14
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[1]);} // 800B4A18
  c->r[3]=c->r[30]|c->r[30]; // 800B4A1C
  c->lr=0x800B4A24u; f_8030C0A0(c); // 800B4A20
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[1]);} // 800B4A24
  c->r[3]=c->r[30]|c->r[30]; // 800B4A28
  c->lr=0x800B4A30u; f_8030BD1C(c); // 800B4A2C
  W8(c->r[29]+0x000000B0u,c->r[3]); // 800B4A30
  c->r[3]=c->r[30]|c->r[30]; // 800B4A34
  c->lr=0x800B4A3Cu; f_8030BD1C(c); // 800B4A38
  W32(c->r[29]+0x000000B4u,c->r[3]); // 800B4A3C
  c->r[3]=c->r[30]|c->r[30]; // 800B4A40
  c->r[4]=0u+0x00000000u; // 800B4A44
  c->lr=0x800B4A4Cu; f_8030BE30(c); // 800B4A48
  W32(c->r[29]+0x000000B8u,c->r[3]); // 800B4A4C
  c->r[3]=c->r[30]|c->r[30]; // 800B4A50
  W32(c->r[29]+0x000000BCu,c->r[31]); // 800B4A54
  c->lr=0x800B4A5Cu; f_8030BD1C(c); // 800B4A58
  W32(c->r[29]+0x000000C0u,c->r[3]); // 800B4A5C
  c->r[3]=c->r[30]|c->r[30]; // 800B4A60
  c->r[4]=0u+0x00000000u; // 800B4A64
  c->lr=0x800B4A6Cu; f_8030BE30(c); // 800B4A68
  W32(c->r[29]+0x000000C4u,c->r[3]); // 800B4A6C
  c->r[3]=c->r[30]|c->r[30]; // 800B4A70
  W32(c->r[29]+0x000000C8u,c->r[31]); // 800B4A74
  c->lr=0x800B4A7Cu; f_8030BD1C(c); // 800B4A78
  W32(c->r[29]+0x000000CCu,c->r[3]); // 800B4A7C
  c->r[3]=c->r[30]|c->r[30]; // 800B4A80
  c->r[4]=0u+0x00000000u; // 800B4A84
  c->lr=0x800B4A8Cu; f_8030BE30(c); // 800B4A88
  W32(c->r[29]+0x000000D0u,c->r[3]); // 800B4A8C
  c->r[3]=c->r[30]|c->r[30]; // 800B4A90
  W32(c->r[29]+0x000000D4u,c->r[31]); // 800B4A94
  c->lr=0x800B4A9Cu; f_8030BD1C(c); // 800B4A98
  W32(c->r[29]+0x000000D8u,c->r[3]); // 800B4A9C
  c->r[3]=c->r[30]|c->r[30]; // 800B4AA0
  c->r[4]=0u+0x00000000u; // 800B4AA4
  c->lr=0x800B4AACu; f_8030BE30(c); // 800B4AA8
  W32(c->r[29]+0x000000DCu,c->r[3]); // 800B4AAC
  c->r[3]=c->r[30]|c->r[30]; // 800B4AB0
  W32(c->r[29]+0x000000E0u,c->r[31]); // 800B4AB4
  c->lr=0x800B4ABCu; f_8030BD1C(c); // 800B4AB8
  W32(c->r[29]+0x000000E4u,c->r[3]); // 800B4ABC
  c->r[3]=c->r[30]|c->r[30]; // 800B4AC0
  c->r[4]=0u+0x00000000u; // 800B4AC4
  c->lr=0x800B4ACCu; f_8030BE30(c); // 800B4AC8
  W32(c->r[29]+0x000000E8u,c->r[3]); // 800B4ACC
  c->r[3]=c->r[30]|c->r[30]; // 800B4AD0
  W32(c->r[29]+0x000000ECu,c->r[31]); // 800B4AD4
  c->lr=0x800B4ADCu; f_8030BD1C(c); // 800B4AD8
  W32(c->r[29]+0x000000F0u,c->r[3]); // 800B4ADC
  c->r[3]=c->r[30]|c->r[30]; // 800B4AE0
  c->lr=0x800B4AE8u; f_8030BD1C(c); // 800B4AE4
  W8(c->r[29]+0x000000F4u,c->r[3]); // 800B4AE8
  c->r[3]=c->r[30]|c->r[30]; // 800B4AEC
  c->lr=0x800B4AF4u; f_8030C0A0(c); // 800B4AF0
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 800B4AF4
  c->r[3]=c->r[30]|c->r[30]; // 800B4AF8
  c->lr=0x800B4B00u; f_8030C0A0(c); // 800B4AFC
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 800B4B00
  c->r[3]=c->r[30]|c->r[30]; // 800B4B04
  c->lr=0x800B4B0Cu; f_8030C0A0(c); // 800B4B08
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 800B4B0C
  c->r[3]=c->r[30]|c->r[30]; // 800B4B10
  c->lr=0x800B4B18u; f_8030C0A0(c); // 800B4B14
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 800B4B18
  c->r[11]=c->r[1]+0x00000020u; // 800B4B1C
  c->r[3]=0u+0x00000000u; // 800B4B20
  c->lr=0x800B4B28u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B4B24
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B4B28
  c->lr=c->r[0]; // 800B4B2C
  c->r[1]=c->r[1]+0x00000020u; // 800B4B30
  return; // 800B4B34
}

// fn_800B4B38
void f_800B4B38(Ctx* __restrict c) {
  trace_call(0x800B4B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4B38
  c->r[0]=c->lr; // 800B4B3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B4B40
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B4B44
  c->r[28]=c->r[3]|c->r[3]; // 800B4B48
  c->r[29]=c->r[4]|c->r[4]; // 800B4B4C
  c->r[30]=c->r[5]|c->r[5]; // 800B4B50
  c->r[31]=c->r[6]|c->r[6]; // 800B4B54
  c->r[7]=R32(c->r[3]+0x00000108u); // 800B4B58
  cmps(c,0,(int32_t)c->r[7],0); // 800B4B5C
  if (!crb(c,0)) { goto L_800B4B70; } // 800B4B60
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B4B64
  W32(c->r[3]+0x00000108u,c->r[0]); // 800B4B68
  goto L_800B4B80; // 800B4B6C
L_800B4B70:;
  c->r[0]=c->r[7]+0x00000001u; // 800B4B70
  W32(c->r[3]+0x00000108u,c->r[0]); // 800B4B74
  cmps(c,0,(int32_t)c->r[0],1); // 800B4B78
  if (crb(c,1)) { goto L_800B51A0; } // 800B4B7C
L_800B4B80:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4B80
  c->r[4]=c->r[29]|c->r[29]; // 800B4B84
  c->r[5]=c->r[30]|c->r[30]; // 800B4B88
  c->r[6]=c->r[31]|c->r[31]; // 800B4B8C
  c->lr=0x800B4B94u; f_802B11C0(c); // 800B4B90
  c->r[4]=R32(c->r[28]+0x00000064u); // 800B4B94
  cmps(c,0,(int32_t)c->r[4],0); // 800B4B98
  if (crb(c,2)) { goto L_800B4C40; } // 800B4B9C
  c->r[0]=0u+0x00000001u; // 800B4BA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4BA4
  c->r[6]=c->r[29]|c->r[29]; // 800B4BA8
  c->r[7]=c->r[30]|c->r[30]; // 800B4BAC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B4BB0
  c->r[8]=c->r[31]|c->r[31]; // 800B4BB4
  c->r[9]=R32(c->r[28]+0x0000006Cu); // 800B4BB8
  c->r[5]=0u+0x00000012u; // 800B4BBC
  c->r[10]=0u+0x00000001u; // 800B4BC0
  c->lr=0x800B4BC8u; f_80281A84(c); // 800B4BC4
  cmps(c,0,(int32_t)c->r[3],0); // 800B4BC8
  W32(c->r[28]+0x00000068u,c->r[3]); // 800B4BCC
  if (crb(c,2)) { goto L_800B4BDC; } // 800B4BD0
  c->lr=0x800B4BD8u; f_80295B6C(c); // 800B4BD4
  goto L_800B4C40; // 800B4BD8
L_800B4BDC:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 800B4BDC
  c->r[4]=c->r[31]|c->r[31]; // 800B4BE0
  c->r[5]=c->r[30]|c->r[30]; // 800B4BE4
  c->lr=0x800B4BECu; f_802C0F98(c); // 800B4BE8
  c->r[27]=c->r[3]|c->r[3]; // 800B4BEC
  c->r[3]=0u+0x00000044u; // 800B4BF0
  c->r[4]=c->r[13]+0xFFFFAA22u; // 800B4BF4
  c->r[5]=0u+0x00000000u; // 800B4BF8
  c->r[6]=0u+0x00001001u; // 800B4BFC
  c->lr=0x800B4C04u; f_80244D20(c); // 800B4C00
  cmps(c,0,(int32_t)c->r[3],0); // 800B4C04
  if (crb(c,2)) { goto L_800B4C1C; } // 800B4C08
  c->r[5]=R32(c->r[28]+0x00000064u); // 800B4C0C
  c->r[4]=c->r[27]|c->r[27]; // 800B4C10
  c->r[6]=0u+0x00000012u; // 800B4C14
  c->lr=0x800B4C1Cu; f_8029316C(c); // 800B4C18
L_800B4C1C:;
  W32(c->r[28]+0x00000068u,c->r[3]); // 800B4C1C
  c->r[4]=c->r[29]|c->r[29]; // 800B4C20
  c->r[7]=R32(c->r[28]+0x0000006Cu); // 800B4C24
  c->r[5]=c->r[30]|c->r[30]; // 800B4C28
  c->r[6]=c->r[31]|c->r[31]; // 800B4C2C
  c->r[8]=0u+0x00000001u; // 800B4C30
  c->r[9]=0u+0x00000000u; // 800B4C34
  c->lr=0x800B4C3Cu; f_8027FFF4(c); // 800B4C38
  W32(c->r[28]+0x00000068u,c->r[3]); // 800B4C3C
L_800B4C40:;
  c->r[4]=R32(c->r[28]+0x00000070u); // 800B4C40
  cmps(c,0,(int32_t)c->r[4],0); // 800B4C44
  if (crb(c,2)) { goto L_800B4CEC; } // 800B4C48
  c->r[0]=0u+0x00000001u; // 800B4C4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4C50
  c->r[6]=c->r[29]|c->r[29]; // 800B4C54
  c->r[7]=c->r[30]|c->r[30]; // 800B4C58
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B4C5C
  c->r[8]=c->r[31]|c->r[31]; // 800B4C60
  c->r[9]=R32(c->r[28]+0x00000078u); // 800B4C64
  c->r[5]=0u+0x00000012u; // 800B4C68
  c->r[10]=0u+0x00000001u; // 800B4C6C
  c->lr=0x800B4C74u; f_80281A84(c); // 800B4C70
  cmps(c,0,(int32_t)c->r[3],0); // 800B4C74
  W32(c->r[28]+0x00000074u,c->r[3]); // 800B4C78
  if (crb(c,2)) { goto L_800B4C88; } // 800B4C7C
  c->lr=0x800B4C84u; f_80295B6C(c); // 800B4C80
  goto L_800B4CEC; // 800B4C84
L_800B4C88:;
  c->r[3]=R32(c->r[28]+0x00000078u); // 800B4C88
  c->r[4]=c->r[31]|c->r[31]; // 800B4C8C
  c->r[5]=c->r[30]|c->r[30]; // 800B4C90
  c->lr=0x800B4C98u; f_802C0F98(c); // 800B4C94
  c->r[27]=c->r[3]|c->r[3]; // 800B4C98
  c->r[3]=0u+0x00000044u; // 800B4C9C
  c->r[4]=c->r[13]+0xFFFFAA27u; // 800B4CA0
  c->r[5]=0u+0x00000000u; // 800B4CA4
  c->r[6]=0u+0x00001001u; // 800B4CA8
  c->lr=0x800B4CB0u; f_80244D20(c); // 800B4CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800B4CB0
  if (crb(c,2)) { goto L_800B4CC8; } // 800B4CB4
  c->r[5]=R32(c->r[28]+0x00000070u); // 800B4CB8
  c->r[4]=c->r[27]|c->r[27]; // 800B4CBC
  c->r[6]=0u+0x00000012u; // 800B4CC0
  c->lr=0x800B4CC8u; f_8029316C(c); // 800B4CC4
L_800B4CC8:;
  W32(c->r[28]+0x00000074u,c->r[3]); // 800B4CC8
  c->r[4]=c->r[29]|c->r[29]; // 800B4CCC
  c->r[7]=R32(c->r[28]+0x00000078u); // 800B4CD0
  c->r[5]=c->r[30]|c->r[30]; // 800B4CD4
  c->r[6]=c->r[31]|c->r[31]; // 800B4CD8
  c->r[8]=0u+0x00000001u; // 800B4CDC
  c->r[9]=0u+0x00000000u; // 800B4CE0
  c->lr=0x800B4CE8u; f_8027FFF4(c); // 800B4CE4
  W32(c->r[28]+0x00000074u,c->r[3]); // 800B4CE8
L_800B4CEC:;
  c->r[4]=R32(c->r[28]+0x00000080u); // 800B4CEC
  cmps(c,0,(int32_t)c->r[4],0); // 800B4CF0
  if (crb(c,2)) { goto L_800B4D98; } // 800B4CF4
  c->r[0]=0u+0x00000001u; // 800B4CF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4CFC
  c->r[6]=c->r[29]|c->r[29]; // 800B4D00
  c->r[7]=c->r[30]|c->r[30]; // 800B4D04
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B4D08
  c->r[8]=c->r[31]|c->r[31]; // 800B4D0C
  c->r[9]=R32(c->r[28]+0x00000088u); // 800B4D10
  c->r[5]=0u+0x00000012u; // 800B4D14
  c->r[10]=0u+0x00000001u; // 800B4D18
  c->lr=0x800B4D20u; f_80281A84(c); // 800B4D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4D20
  W32(c->r[28]+0x00000084u,c->r[3]); // 800B4D24
  if (crb(c,2)) { goto L_800B4D34; } // 800B4D28
  c->lr=0x800B4D30u; f_80295B6C(c); // 800B4D2C
  goto L_800B4D98; // 800B4D30
L_800B4D34:;
  c->r[3]=R32(c->r[28]+0x00000088u); // 800B4D34
  c->r[4]=c->r[31]|c->r[31]; // 800B4D38
  c->r[5]=c->r[30]|c->r[30]; // 800B4D3C
  c->lr=0x800B4D44u; f_802C0F98(c); // 800B4D40
  c->r[27]=c->r[3]|c->r[3]; // 800B4D44
  c->r[3]=0u+0x00000044u; // 800B4D48
  c->r[4]=c->r[13]+0xFFFFAA2Cu; // 800B4D4C
  c->r[5]=0u+0x00000000u; // 800B4D50
  c->r[6]=0u+0x00001001u; // 800B4D54
  c->lr=0x800B4D5Cu; f_80244D20(c); // 800B4D58
  cmps(c,0,(int32_t)c->r[3],0); // 800B4D5C
  if (crb(c,2)) { goto L_800B4D74; } // 800B4D60
  c->r[5]=R32(c->r[28]+0x00000080u); // 800B4D64
  c->r[4]=c->r[27]|c->r[27]; // 800B4D68
  c->r[6]=0u+0x00000012u; // 800B4D6C
  c->lr=0x800B4D74u; f_8029316C(c); // 800B4D70
L_800B4D74:;
  W32(c->r[28]+0x00000084u,c->r[3]); // 800B4D74
  c->r[4]=c->r[29]|c->r[29]; // 800B4D78
  c->r[7]=R32(c->r[28]+0x00000088u); // 800B4D7C
  c->r[5]=c->r[30]|c->r[30]; // 800B4D80
  c->r[6]=c->r[31]|c->r[31]; // 800B4D84
  c->r[8]=0u+0x00000001u; // 800B4D88
  c->r[9]=0u+0x00000000u; // 800B4D8C
  c->lr=0x800B4D94u; f_8027FFF4(c); // 800B4D90
  W32(c->r[28]+0x00000084u,c->r[3]); // 800B4D94
L_800B4D98:;
  c->r[4]=R32(c->r[28]+0x0000009Cu); // 800B4D98
  cmps(c,0,(int32_t)c->r[4],0); // 800B4D9C
  if (crb(c,2)) { goto L_800B4E44; } // 800B4DA0
  c->r[0]=0u+0x00000001u; // 800B4DA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4DA8
  c->r[6]=c->r[29]|c->r[29]; // 800B4DAC
  c->r[7]=c->r[30]|c->r[30]; // 800B4DB0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B4DB4
  c->r[8]=c->r[31]|c->r[31]; // 800B4DB8
  c->r[9]=R32(c->r[28]+0x000000A4u); // 800B4DBC
  c->r[5]=0u+0x00000012u; // 800B4DC0
  c->r[10]=0u+0x00000001u; // 800B4DC4
  c->lr=0x800B4DCCu; f_80281A84(c); // 800B4DC8
  cmps(c,0,(int32_t)c->r[3],0); // 800B4DCC
  W32(c->r[28]+0x000000A0u,c->r[3]); // 800B4DD0
  if (crb(c,2)) { goto L_800B4DE0; } // 800B4DD4
  c->lr=0x800B4DDCu; f_80295B6C(c); // 800B4DD8
  goto L_800B4E44; // 800B4DDC
L_800B4DE0:;
  c->r[3]=R32(c->r[28]+0x000000A4u); // 800B4DE0
  c->r[4]=c->r[31]|c->r[31]; // 800B4DE4
  c->r[5]=c->r[30]|c->r[30]; // 800B4DE8
  c->lr=0x800B4DF0u; f_802C0F98(c); // 800B4DEC
  c->r[27]=c->r[3]|c->r[3]; // 800B4DF0
  c->r[3]=0u+0x00000044u; // 800B4DF4
  c->r[4]=c->r[13]+0xFFFFAA31u; // 800B4DF8
  c->r[5]=0u+0x00000000u; // 800B4DFC
  c->r[6]=0u+0x00001001u; // 800B4E00
  c->lr=0x800B4E08u; f_80244D20(c); // 800B4E04
  cmps(c,0,(int32_t)c->r[3],0); // 800B4E08
  if (crb(c,2)) { goto L_800B4E20; } // 800B4E0C
  c->r[5]=R32(c->r[28]+0x0000009Cu); // 800B4E10
  c->r[4]=c->r[27]|c->r[27]; // 800B4E14
  c->r[6]=0u+0x00000012u; // 800B4E18
  c->lr=0x800B4E20u; f_8029316C(c); // 800B4E1C
L_800B4E20:;
  W32(c->r[28]+0x000000A0u,c->r[3]); // 800B4E20
  c->r[4]=c->r[29]|c->r[29]; // 800B4E24
  c->r[7]=R32(c->r[28]+0x000000A4u); // 800B4E28
  c->r[5]=c->r[30]|c->r[30]; // 800B4E2C
  c->r[6]=c->r[31]|c->r[31]; // 800B4E30
  c->r[8]=0u+0x00000001u; // 800B4E34
  c->r[9]=0u+0x00000000u; // 800B4E38
  c->lr=0x800B4E40u; f_8027FFF4(c); // 800B4E3C
  W32(c->r[28]+0x000000A0u,c->r[3]); // 800B4E40
L_800B4E44:;
  c->r[4]=R32(c->r[28]+0x000000B8u); // 800B4E44
  cmps(c,0,(int32_t)c->r[4],0); // 800B4E48
  if (crb(c,2)) { goto L_800B4EF0; } // 800B4E4C
  c->r[0]=0u+0x00000001u; // 800B4E50
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4E54
  c->r[6]=c->r[29]|c->r[29]; // 800B4E58
  c->r[7]=c->r[30]|c->r[30]; // 800B4E5C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B4E60
  c->r[8]=c->r[31]|c->r[31]; // 800B4E64
  c->r[9]=R32(c->r[28]+0x000000C0u); // 800B4E68
  c->r[5]=0u+0x00000012u; // 800B4E6C
  c->r[10]=0u+0x00000001u; // 800B4E70
  c->lr=0x800B4E78u; f_80281A84(c); // 800B4E74
  cmps(c,0,(int32_t)c->r[3],0); // 800B4E78
  W32(c->r[28]+0x000000BCu,c->r[3]); // 800B4E7C
  if (crb(c,2)) { goto L_800B4E8C; } // 800B4E80
  c->lr=0x800B4E88u; f_80295B6C(c); // 800B4E84
  goto L_800B4EF0; // 800B4E88
L_800B4E8C:;
  c->r[3]=R32(c->r[28]+0x000000C0u); // 800B4E8C
  c->r[4]=c->r[31]|c->r[31]; // 800B4E90
  c->r[5]=c->r[30]|c->r[30]; // 800B4E94
  c->lr=0x800B4E9Cu; f_802C0F98(c); // 800B4E98
  c->r[27]=c->r[3]|c->r[3]; // 800B4E9C
  c->r[3]=0u+0x00000044u; // 800B4EA0
  c->r[4]=c->r[13]+0xFFFFAA36u; // 800B4EA4
  c->r[5]=0u+0x00000000u; // 800B4EA8
  c->r[6]=0u+0x00001001u; // 800B4EAC
  c->lr=0x800B4EB4u; f_80244D20(c); // 800B4EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800B4EB4
  if (crb(c,2)) { goto L_800B4ECC; } // 800B4EB8
  c->r[5]=R32(c->r[28]+0x000000B8u); // 800B4EBC
  c->r[4]=c->r[27]|c->r[27]; // 800B4EC0
  c->r[6]=0u+0x00000012u; // 800B4EC4
  c->lr=0x800B4ECCu; f_8029316C(c); // 800B4EC8
L_800B4ECC:;
  W32(c->r[28]+0x000000BCu,c->r[3]); // 800B4ECC
  c->r[4]=c->r[29]|c->r[29]; // 800B4ED0
  c->r[7]=R32(c->r[28]+0x000000C0u); // 800B4ED4
  c->r[5]=c->r[30]|c->r[30]; // 800B4ED8
  c->r[6]=c->r[31]|c->r[31]; // 800B4EDC
  c->r[8]=0u+0x00000001u; // 800B4EE0
  c->r[9]=0u+0x00000000u; // 800B4EE4
  c->lr=0x800B4EECu; f_8027FFF4(c); // 800B4EE8
  W32(c->r[28]+0x000000BCu,c->r[3]); // 800B4EEC
L_800B4EF0:;
  c->r[4]=R32(c->r[28]+0x000000C4u); // 800B4EF0
  cmps(c,0,(int32_t)c->r[4],0); // 800B4EF4
  if (crb(c,2)) { goto L_800B4F9C; } // 800B4EF8
  c->r[0]=0u+0x00000001u; // 800B4EFC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4F00
  c->r[6]=c->r[29]|c->r[29]; // 800B4F04
  c->r[7]=c->r[30]|c->r[30]; // 800B4F08
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B4F0C
  c->r[8]=c->r[31]|c->r[31]; // 800B4F10
  c->r[9]=R32(c->r[28]+0x000000CCu); // 800B4F14
  c->r[5]=0u+0x00000012u; // 800B4F18
  c->r[10]=0u+0x00000001u; // 800B4F1C
  c->lr=0x800B4F24u; f_80281A84(c); // 800B4F20
  cmps(c,0,(int32_t)c->r[3],0); // 800B4F24
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800B4F28
  if (crb(c,2)) { goto L_800B4F38; } // 800B4F2C
  c->lr=0x800B4F34u; f_80295B6C(c); // 800B4F30
  goto L_800B4F9C; // 800B4F34
L_800B4F38:;
  c->r[3]=R32(c->r[28]+0x000000CCu); // 800B4F38
  c->r[4]=c->r[31]|c->r[31]; // 800B4F3C
  c->r[5]=c->r[30]|c->r[30]; // 800B4F40
  c->lr=0x800B4F48u; f_802C0F98(c); // 800B4F44
  c->r[27]=c->r[3]|c->r[3]; // 800B4F48
  c->r[3]=0u+0x00000044u; // 800B4F4C
  c->r[4]=c->r[13]+0xFFFFAA3Bu; // 800B4F50
  c->r[5]=0u+0x00000000u; // 800B4F54
  c->r[6]=0u+0x00001001u; // 800B4F58
  c->lr=0x800B4F60u; f_80244D20(c); // 800B4F5C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4F60
  if (crb(c,2)) { goto L_800B4F78; } // 800B4F64
  c->r[5]=R32(c->r[28]+0x000000C4u); // 800B4F68
  c->r[4]=c->r[27]|c->r[27]; // 800B4F6C
  c->r[6]=0u+0x00000012u; // 800B4F70
  c->lr=0x800B4F78u; f_8029316C(c); // 800B4F74
L_800B4F78:;
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800B4F78
  c->r[4]=c->r[29]|c->r[29]; // 800B4F7C
  c->r[7]=R32(c->r[28]+0x000000CCu); // 800B4F80
  c->r[5]=c->r[30]|c->r[30]; // 800B4F84
  c->r[6]=c->r[31]|c->r[31]; // 800B4F88
  c->r[8]=0u+0x00000001u; // 800B4F8C
  c->r[9]=0u+0x00000000u; // 800B4F90
  c->lr=0x800B4F98u; f_8027FFF4(c); // 800B4F94
  W32(c->r[28]+0x000000C8u,c->r[3]); // 800B4F98
L_800B4F9C:;
  c->r[4]=R32(c->r[28]+0x000000D0u); // 800B4F9C
  cmps(c,0,(int32_t)c->r[4],0); // 800B4FA0
  if (crb(c,2)) { goto L_800B5048; } // 800B4FA4
  c->r[0]=0u+0x00000001u; // 800B4FA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B4FAC
  c->r[6]=c->r[29]|c->r[29]; // 800B4FB0
  c->r[7]=c->r[30]|c->r[30]; // 800B4FB4
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B4FB8
  c->r[8]=c->r[31]|c->r[31]; // 800B4FBC
  c->r[9]=R32(c->r[28]+0x000000D8u); // 800B4FC0
  c->r[5]=0u+0x00000012u; // 800B4FC4
  c->r[10]=0u+0x00000001u; // 800B4FC8
  c->lr=0x800B4FD0u; f_80281A84(c); // 800B4FCC
  cmps(c,0,(int32_t)c->r[3],0); // 800B4FD0
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800B4FD4
  if (crb(c,2)) { goto L_800B4FE4; } // 800B4FD8
  c->lr=0x800B4FE0u; f_80295B6C(c); // 800B4FDC
  goto L_800B5048; // 800B4FE0
L_800B4FE4:;
  c->r[3]=R32(c->r[28]+0x000000D8u); // 800B4FE4
  c->r[4]=c->r[31]|c->r[31]; // 800B4FE8
  c->r[5]=c->r[30]|c->r[30]; // 800B4FEC
  c->lr=0x800B4FF4u; f_802C0F98(c); // 800B4FF0
  c->r[27]=c->r[3]|c->r[3]; // 800B4FF4
  c->r[3]=0u+0x00000044u; // 800B4FF8
  c->r[4]=c->r[13]+0xFFFFAA40u; // 800B4FFC
  c->r[5]=0u+0x00000000u; // 800B5000
  c->r[6]=0u+0x00001001u; // 800B5004
  c->lr=0x800B500Cu; f_80244D20(c); // 800B5008
  cmps(c,0,(int32_t)c->r[3],0); // 800B500C
  if (crb(c,2)) { goto L_800B5024; } // 800B5010
  c->r[5]=R32(c->r[28]+0x000000D0u); // 800B5014
  c->r[4]=c->r[27]|c->r[27]; // 800B5018
  c->r[6]=0u+0x00000012u; // 800B501C
  c->lr=0x800B5024u; f_8029316C(c); // 800B5020
L_800B5024:;
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800B5024
  c->r[4]=c->r[29]|c->r[29]; // 800B5028
  c->r[7]=R32(c->r[28]+0x000000D8u); // 800B502C
  c->r[5]=c->r[30]|c->r[30]; // 800B5030
  c->r[6]=c->r[31]|c->r[31]; // 800B5034
  c->r[8]=0u+0x00000001u; // 800B5038
  c->r[9]=0u+0x00000000u; // 800B503C
  c->lr=0x800B5044u; f_8027FFF4(c); // 800B5040
  W32(c->r[28]+0x000000D4u,c->r[3]); // 800B5044
L_800B5048:;
  c->r[4]=R32(c->r[28]+0x000000DCu); // 800B5048
  cmps(c,0,(int32_t)c->r[4],0); // 800B504C
  if (crb(c,2)) { goto L_800B50F4; } // 800B5050
  c->r[0]=0u+0x00000001u; // 800B5054
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B5058
  c->r[6]=c->r[29]|c->r[29]; // 800B505C
  c->r[7]=c->r[30]|c->r[30]; // 800B5060
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B5064
  c->r[8]=c->r[31]|c->r[31]; // 800B5068
  c->r[9]=R32(c->r[28]+0x000000E4u); // 800B506C
  c->r[5]=0u+0x00000012u; // 800B5070
  c->r[10]=0u+0x00000001u; // 800B5074
  c->lr=0x800B507Cu; f_80281A84(c); // 800B5078
  cmps(c,0,(int32_t)c->r[3],0); // 800B507C
  W32(c->r[28]+0x000000E0u,c->r[3]); // 800B5080
  if (crb(c,2)) { goto L_800B5090; } // 800B5084
  c->lr=0x800B508Cu; f_80295B6C(c); // 800B5088
  goto L_800B50F4; // 800B508C
L_800B5090:;
  c->r[3]=R32(c->r[28]+0x000000E4u); // 800B5090
  c->r[4]=c->r[31]|c->r[31]; // 800B5094
  c->r[5]=c->r[30]|c->r[30]; // 800B5098
  c->lr=0x800B50A0u; f_802C0F98(c); // 800B509C
  c->r[27]=c->r[3]|c->r[3]; // 800B50A0
  c->r[3]=0u+0x00000044u; // 800B50A4
  c->r[4]=c->r[13]+0xFFFFAA45u; // 800B50A8
  c->r[5]=0u+0x00000000u; // 800B50AC
  c->r[6]=0u+0x00001001u; // 800B50B0
  c->lr=0x800B50B8u; f_80244D20(c); // 800B50B4
  cmps(c,0,(int32_t)c->r[3],0); // 800B50B8
  if (crb(c,2)) { goto L_800B50D0; } // 800B50BC
  c->r[5]=R32(c->r[28]+0x000000DCu); // 800B50C0
  c->r[4]=c->r[27]|c->r[27]; // 800B50C4
  c->r[6]=0u+0x00000012u; // 800B50C8
  c->lr=0x800B50D0u; f_8029316C(c); // 800B50CC
L_800B50D0:;
  W32(c->r[28]+0x000000E0u,c->r[3]); // 800B50D0
  c->r[4]=c->r[29]|c->r[29]; // 800B50D4
  c->r[7]=R32(c->r[28]+0x000000E4u); // 800B50D8
  c->r[5]=c->r[30]|c->r[30]; // 800B50DC
  c->r[6]=c->r[31]|c->r[31]; // 800B50E0
  c->r[8]=0u+0x00000001u; // 800B50E4
  c->r[9]=0u+0x00000000u; // 800B50E8
  c->lr=0x800B50F0u; f_8027FFF4(c); // 800B50EC
  W32(c->r[28]+0x000000E0u,c->r[3]); // 800B50F0
L_800B50F4:;
  c->r[4]=R32(c->r[28]+0x000000E8u); // 800B50F4
  cmps(c,0,(int32_t)c->r[4],0); // 800B50F8
  if (crb(c,2)) { goto L_800B51A0; } // 800B50FC
  c->r[0]=0u+0x00000001u; // 800B5100
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B5104
  c->r[6]=c->r[29]|c->r[29]; // 800B5108
  c->r[7]=c->r[30]|c->r[30]; // 800B510C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B5110
  c->r[8]=c->r[31]|c->r[31]; // 800B5114
  c->r[9]=R32(c->r[28]+0x000000F0u); // 800B5118
  c->r[5]=0u+0x00000012u; // 800B511C
  c->r[10]=0u+0x00000001u; // 800B5120
  c->lr=0x800B5128u; f_80281A84(c); // 800B5124
  cmps(c,0,(int32_t)c->r[3],0); // 800B5128
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800B512C
  if (crb(c,2)) { goto L_800B513C; } // 800B5130
  c->lr=0x800B5138u; f_80295B6C(c); // 800B5134
  goto L_800B51A0; // 800B5138
L_800B513C:;
  c->r[3]=R32(c->r[28]+0x000000F0u); // 800B513C
  c->r[4]=c->r[31]|c->r[31]; // 800B5140
  c->r[5]=c->r[30]|c->r[30]; // 800B5144
  c->lr=0x800B514Cu; f_802C0F98(c); // 800B5148
  c->r[27]=c->r[3]|c->r[3]; // 800B514C
  c->r[3]=0u+0x00000044u; // 800B5150
  c->r[4]=c->r[13]+0xFFFFAA4Au; // 800B5154
  c->r[5]=0u+0x00000000u; // 800B5158
  c->r[6]=0u+0x00001001u; // 800B515C
  c->lr=0x800B5164u; f_80244D20(c); // 800B5160
  cmps(c,0,(int32_t)c->r[3],0); // 800B5164
  if (crb(c,2)) { goto L_800B517C; } // 800B5168
  c->r[5]=R32(c->r[28]+0x000000E8u); // 800B516C
  c->r[4]=c->r[27]|c->r[27]; // 800B5170
  c->r[6]=0u+0x00000012u; // 800B5174
  c->lr=0x800B517Cu; f_8029316C(c); // 800B5178
L_800B517C:;
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800B517C
  c->r[4]=c->r[29]|c->r[29]; // 800B5180
  c->r[7]=R32(c->r[28]+0x000000F0u); // 800B5184
  c->r[5]=c->r[30]|c->r[30]; // 800B5188
  c->r[6]=c->r[31]|c->r[31]; // 800B518C
  c->r[8]=0u+0x00000001u; // 800B5190
  c->r[9]=0u+0x00000000u; // 800B5194
  c->lr=0x800B519Cu; f_8027FFF4(c); // 800B5198
  W32(c->r[28]+0x000000ECu,c->r[3]); // 800B519C
L_800B51A0:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B51A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B51A4
  c->lr=c->r[0]; // 800B51A8
  c->r[1]=c->r[1]+0x00000030u; // 800B51AC
  return; // 800B51B0
}

// fn_800B51B4
void f_800B51B4(Ctx* __restrict c) {
  trace_call(0x800B51B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B51B4
  c->r[0]=c->lr; // 800B51B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B51BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B51C0
  c->r[31]=c->r[3]|c->r[3]; // 800B51C4
  c->r[0]=R32(c->r[3]+0x00000108u); // 800B51C8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B51CC
  W32(c->r[3]+0x00000108u,c->r[0]); // 800B51D0
  if (!crb(c,2)) { goto L_800B52B4; } // 800B51D4
  c->lr=0x800B51DCu; f_802B11D0(c); // 800B51D8
  c->r[3]=R32(c->r[31]+0x00000068u); // 800B51DC
  cmps(c,0,(int32_t)c->r[3],0); // 800B51E0
  if (crb(c,2)) { goto L_800B51F4; } // 800B51E4
  c->lr=0x800B51ECu; f_80295B7C(c); // 800B51E8
  c->r[0]=0u+0x00000000u; // 800B51EC
  W32(c->r[31]+0x00000068u,c->r[0]); // 800B51F0
L_800B51F4:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800B51F4
  cmps(c,0,(int32_t)c->r[3],0); // 800B51F8
  if (crb(c,2)) { goto L_800B520C; } // 800B51FC
  c->lr=0x800B5204u; f_80295B7C(c); // 800B5200
  c->r[0]=0u+0x00000000u; // 800B5204
  W32(c->r[31]+0x00000074u,c->r[0]); // 800B5208
L_800B520C:;
  c->r[3]=R32(c->r[31]+0x00000084u); // 800B520C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5210
  if (crb(c,2)) { goto L_800B5224; } // 800B5214
  c->lr=0x800B521Cu; f_80295B7C(c); // 800B5218
  c->r[0]=0u+0x00000000u; // 800B521C
  W32(c->r[31]+0x00000084u,c->r[0]); // 800B5220
L_800B5224:;
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800B5224
  cmps(c,0,(int32_t)c->r[3],0); // 800B5228
  if (crb(c,2)) { goto L_800B523C; } // 800B522C
  c->lr=0x800B5234u; f_80295B7C(c); // 800B5230
  c->r[0]=0u+0x00000000u; // 800B5234
  W32(c->r[31]+0x000000A0u,c->r[0]); // 800B5238
L_800B523C:;
  c->r[3]=R32(c->r[31]+0x000000BCu); // 800B523C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5240
  if (crb(c,2)) { goto L_800B5254; } // 800B5244
  c->lr=0x800B524Cu; f_80295B7C(c); // 800B5248
  c->r[0]=0u+0x00000000u; // 800B524C
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800B5250
L_800B5254:;
  c->r[3]=R32(c->r[31]+0x000000C8u); // 800B5254
  cmps(c,0,(int32_t)c->r[3],0); // 800B5258
  if (crb(c,2)) { goto L_800B526C; } // 800B525C
  c->lr=0x800B5264u; f_80295B7C(c); // 800B5260
  c->r[0]=0u+0x00000000u; // 800B5264
  W32(c->r[31]+0x000000C8u,c->r[0]); // 800B5268
L_800B526C:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 800B526C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5270
  if (crb(c,2)) { goto L_800B5284; } // 800B5274
  c->lr=0x800B527Cu; f_80295B7C(c); // 800B5278
  c->r[0]=0u+0x00000000u; // 800B527C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 800B5280
L_800B5284:;
  c->r[3]=R32(c->r[31]+0x000000E0u); // 800B5284
  cmps(c,0,(int32_t)c->r[3],0); // 800B5288
  if (crb(c,2)) { goto L_800B529C; } // 800B528C
  c->lr=0x800B5294u; f_80295B7C(c); // 800B5290
  c->r[0]=0u+0x00000000u; // 800B5294
  W32(c->r[31]+0x000000E0u,c->r[0]); // 800B5298
L_800B529C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 800B529C
  cmps(c,0,(int32_t)c->r[3],0); // 800B52A0
  if (crb(c,2)) { goto L_800B52B4; } // 800B52A4
  c->lr=0x800B52ACu; f_80295B7C(c); // 800B52A8
  c->r[0]=0u+0x00000000u; // 800B52AC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 800B52B0
L_800B52B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B52B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B52B8
  c->lr=c->r[0]; // 800B52BC
  c->r[1]=c->r[1]+0x00000010u; // 800B52C0
  return; // 800B52C4
}

// fn_800B52C8
void f_800B52C8(Ctx* __restrict c) {
  trace_call(0x800B52C8u);
  return; // 800B52C8
}

// fn_800B52CC
void f_800B52CC(Ctx* __restrict c) {
  trace_call(0x800B52CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B52CC
  c->r[12]=0u+0xC02D0000u; // 800B52D0
  c->r[10]=0u+0xCBBA0000u; // 800B52D4
  c->r[9]=0u+0x3CB40000u; // 800B52D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B52DC
  c->r[8]=0u+0x12810000u; // 800B52E0
  c->r[7]=0u+0x58FD0000u; // 800B52E4
  c->r[6]=0u+0x5FCC0000u; // 800B52E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B52EC
  c->r[5]=0u+0x5C3E0000u; // 800B52F0
  c->r[4]=0u+0x5B0D0000u; // 800B52F4
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B52F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B52FC
  c->r[30]=0u+0x00000000u; // 800B5300
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800B5304
  c->r[11]=0u+0x00000004u; // 800B5308
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B530C
  c->r[31]=0u+0x00000001u; // 800B5310
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B5314
  c->r[0]=c->r[4]+0x00001B56u; // 800B5318
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B531C
  c->r[12]=c->r[12]+0xFFFFB959u; // 800B5320
  {uint32_t ea=c->r[2]+0xFFFF8744u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B5324
  c->r[10]=c->r[10]+0x00007983u; // 800B5328
  {uint32_t ea=c->r[2]+0xFFFF8758u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B532C
  c->r[9]=c->r[9]+0xFFFF906Au; // 800B5330
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5334
  c->r[8]=c->r[8]+0x000038BAu; // 800B5338
  {uint32_t ea=c->r[2]+0xFFFF86F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B533C
  c->r[7]=c->r[7]+0xFFFF913Fu; // 800B5340
  c->r[6]=c->r[6]+0x000006E1u; // 800B5344
  c->r[5]=c->r[5]+0xFFFF8C88u; // 800B5348
  c->r[29]=0u+0x00004000u; // 800B534C
  c->r[4]=0u+0x0000012Cu; // 800B5350
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 800B5354
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[8]);} // 800B5358
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[7]);} // 800B535C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[6]);} // 800B5360
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[7]);} // 800B5364
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[5]);} // 800B5368
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[4]);} // 800B536C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B5370
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B5374
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[5]);} // 800B5378
  W32(c->r[3]+0x00000044u,c->r[30]); // 800B537C
  W32(c->r[3]+0x00000048u,c->r[30]); // 800B5380
  W8(c->r[3]+0x0000004Cu,c->r[31]); // 800B5384
  W8(c->r[3]+0x00000050u,c->r[31]); // 800B5388
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[6]);} // 800B538C
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[3]);} // 800B5390
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[6]);} // 800B5394
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[5]);} // 800B5398
  W32(c->r[3]+0x00000064u,c->r[12]); // 800B539C
  W32(c->r[3]+0x00000068u,c->r[30]); // 800B53A0
  W32(c->r[3]+0x0000006Cu,c->r[11]); // 800B53A4
  W32(c->r[3]+0x00000070u,c->r[10]); // 800B53A8
  W32(c->r[3]+0x00000074u,c->r[30]); // 800B53AC
  W32(c->r[3]+0x00000078u,c->r[11]); // 800B53B0
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[5]);} // 800B53B4
  W32(c->r[3]+0x00000080u,c->r[9]); // 800B53B8
  W32(c->r[3]+0x00000084u,c->r[30]); // 800B53BC
  W32(c->r[3]+0x00000088u,c->r[11]); // 800B53C0
  W8(c->r[3]+0x0000008Cu,c->r[30]); // 800B53C4
  W32(c->r[3]+0x00000090u,c->r[4]); // 800B53C8
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[5]);} // 800B53CC
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 800B53D0
  W32(c->r[3]+0x0000009Cu,c->r[8]); // 800B53D4
  W32(c->r[3]+0x000000A0u,c->r[30]); // 800B53D8
  W32(c->r[3]+0x000000A4u,c->r[11]); // 800B53DC
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[1]);} // 800B53E0
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 800B53E4
  W8(c->r[3]+0x000000B0u,c->r[30]); // 800B53E8
  W32(c->r[3]+0x000000B4u,c->r[11]); // 800B53EC
  W32(c->r[3]+0x000000B8u,c->r[7]); // 800B53F0
  W32(c->r[3]+0x000000BCu,c->r[30]); // 800B53F4
  W32(c->r[3]+0x000000C0u,c->r[11]); // 800B53F8
  W32(c->r[3]+0x000000C4u,c->r[6]); // 800B53FC
  W32(c->r[3]+0x000000C8u,c->r[30]); // 800B5400
  W32(c->r[3]+0x000000CCu,c->r[11]); // 800B5404
  W32(c->r[3]+0x000000D0u,c->r[5]); // 800B5408
  W32(c->r[3]+0x000000D4u,c->r[30]); // 800B540C
  W32(c->r[3]+0x000000D8u,c->r[11]); // 800B5410
  W32(c->r[3]+0x000000DCu,c->r[0]); // 800B5414
  W32(c->r[3]+0x000000E0u,c->r[30]); // 800B5418
  W32(c->r[3]+0x000000E4u,c->r[11]); // 800B541C
  W32(c->r[3]+0x000000E8u,c->r[30]); // 800B5420
  W32(c->r[3]+0x000000ECu,c->r[30]); // 800B5424
  W32(c->r[3]+0x000000F0u,c->r[11]); // 800B5428
  W8(c->r[3]+0x000000F4u,c->r[31]); // 800B542C
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[6]);} // 800B5430
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[6]);} // 800B5434
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[6]);} // 800B5438
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[6]);} // 800B543C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B5440
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B5444
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B5448
  c->r[1]=c->r[1]+0x00000020u; // 800B544C
  return; // 800B5450
}

// fn_800B5454
void f_800B5454(Ctx* __restrict c) {
  trace_call(0x800B5454u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5454
  c->r[0]=c->lr; // 800B5458
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B545C
  c->r[11]=c->r[1]+0x00000020u; // 800B5460
  c->lr=0x800B5468u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5464
  cmps(c,0,(int32_t)c->r[5],0); // 800B5468
  c->r[28]=c->r[3]|c->r[3]; // 800B546C
  c->r[29]=c->r[4]|c->r[4]; // 800B5470
  c->r[30]=c->r[7]|c->r[7]; // 800B5474
  if (crb(c,2)) { goto L_800B5484; } // 800B5478
  c->r[31]=c->r[5]|c->r[5]; // 800B547C
  goto L_800B5488; // 800B5480
L_800B5484:;
  c->r[31]=c->r[28]|c->r[28]; // 800B5484
L_800B5488:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800B5488
  c->r[3]=c->r[31]+0x00000064u; // 800B548C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800B5490
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5494
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800B5498
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B549C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800B54A0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54A4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800B54A8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54AC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B54B0
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54B4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800B54B8
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54BC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800B54C0
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54C4
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800B54C8
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54CC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B54D0
  c->r[0]=R32(c->r[4]+0x00000044u); // 800B54D4
  W32(c->r[31]+0x00000044u,c->r[0]); // 800B54D8
  c->r[0]=R32(c->r[4]+0x00000048u); // 800B54DC
  W32(c->r[31]+0x00000048u,c->r[0]); // 800B54E0
  c->r[0]=R8(c->r[4]+0x0000004Cu); // 800B54E4
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800B54E8
  c->r[0]=R8(c->r[4]+0x00000050u); // 800B54EC
  W8(c->r[31]+0x00000050u,c->r[0]); // 800B54F0
  {uint32_t ea=c->r[4]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54F4
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800B54F8
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B54FC
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800B5500
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5504
  c->r[4]=c->r[4]+0x00000064u; // 800B5508
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B550C
  c->lr=0x800B5514u; f_8003BDD0(c); // 800B5510
  c->r[3]=c->r[31]+0x00000070u; // 800B5514
  c->r[4]=c->r[29]+0x00000070u; // 800B5518
  c->lr=0x800B5520u; f_8003BDD0(c); // 800B551C
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5520
  c->r[3]=c->r[31]+0x00000080u; // 800B5524
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B5528
  c->r[4]=c->r[29]+0x00000080u; // 800B552C
  c->lr=0x800B5534u; f_8003BDD0(c); // 800B5530
  c->r[0]=R8(c->r[29]+0x0000008Cu); // 800B5534
  c->r[3]=c->r[31]+0x0000009Cu; // 800B5538
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 800B553C
  c->r[4]=c->r[29]+0x0000009Cu; // 800B5540
  c->r[0]=R32(c->r[29]+0x00000090u); // 800B5544
  W32(c->r[31]+0x00000090u,c->r[0]); // 800B5548
  {uint32_t ea=c->r[29]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B554C
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800B5550
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5554
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800B5558
  c->lr=0x800B5560u; f_8003BDD0(c); // 800B555C
  {uint32_t ea=c->r[29]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5560
  c->r[3]=c->r[31]+0x000000B8u; // 800B5564
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800B5568
  c->r[4]=c->r[29]+0x000000B8u; // 800B556C
  {uint32_t ea=c->r[29]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5570
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 800B5574
  c->r[0]=R8(c->r[29]+0x000000B0u); // 800B5578
  W8(c->r[31]+0x000000B0u,c->r[0]); // 800B557C
  c->r[0]=R32(c->r[29]+0x000000B4u); // 800B5580
  W32(c->r[31]+0x000000B4u,c->r[0]); // 800B5584
  c->lr=0x800B558Cu; f_8003BDD0(c); // 800B5588
  c->r[3]=c->r[31]+0x000000C4u; // 800B558C
  c->r[4]=c->r[29]+0x000000C4u; // 800B5590
  c->lr=0x800B5598u; f_8003BDD0(c); // 800B5594
  c->r[3]=c->r[31]+0x000000D0u; // 800B5598
  c->r[4]=c->r[29]+0x000000D0u; // 800B559C
  c->lr=0x800B55A4u; f_8003BDD0(c); // 800B55A0
  c->r[3]=c->r[31]+0x000000DCu; // 800B55A4
  c->r[4]=c->r[29]+0x000000DCu; // 800B55A8
  c->lr=0x800B55B0u; f_8003BDD0(c); // 800B55AC
  c->r[3]=c->r[31]+0x000000E8u; // 800B55B0
  c->r[4]=c->r[29]+0x000000E8u; // 800B55B4
  c->lr=0x800B55BCu; f_8003BDD0(c); // 800B55B8
  c->r[0]=R8(c->r[29]+0x000000F4u); // 800B55BC
  cmps(c,0,(int32_t)c->r[30],0); // 800B55C0
  W8(c->r[31]+0x000000F4u,c->r[0]); // 800B55C4
  {uint32_t ea=c->r[29]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B55C8
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 800B55CC
  {uint32_t ea=c->r[29]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B55D0
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 800B55D4
  {uint32_t ea=c->r[29]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B55D8
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 800B55DC
  {uint32_t ea=c->r[29]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B55E0
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 800B55E4
  if (crb(c,2)) { goto L_800B560C; } // 800B55E8
  c->r[3]=R32(c->r[28]+0x00000108u); // 800B55EC
  cmps(c,0,(int32_t)c->r[3],0); // 800B55F0
  if (crb(c,1)) { goto L_800B5604; } // 800B55F4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B55F8
  W32(c->r[28]+0x00000108u,c->r[0]); // 800B55FC
  goto L_800B560C; // 800B5600
L_800B5604:;
  c->r[0]=c->r[3]+0x00000001u; // 800B5604
  W32(c->r[28]+0x00000108u,c->r[0]); // 800B5608
L_800B560C:;
  c->r[11]=c->r[1]+0x00000020u; // 800B560C
  c->lr=0x800B5614u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5610
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5614
  c->lr=c->r[0]; // 800B5618
  c->r[1]=c->r[1]+0x00000020u; // 800B561C
  return; // 800B5620
}

// fn_800B5624
void f_800B5624(Ctx* __restrict c) {
  trace_call(0x800B5624u);
  c->r[3]=0u+0x00000000u; // 800B5624
  return; // 800B5628
}

// fn_800B562C
void f_800B562C(Ctx* __restrict c) {
  trace_call(0x800B562Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B562C
  c->r[0]=c->lr; // 800B5630
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B5634
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800B5638
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800B563C
  c->r[11]=c->r[1]+0x00000040u; // 800B5640
  c->lr=0x800B5648u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5644
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 800B5648
  c->r[7]=0u+0x43300000u; // 800B564C
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800B5650
  c->f[31]=c->f[1]; // 800B5654
  c->r[6]=c->r[6]^0x80000000u; // 800B5658
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B565C
  c->r[0]=c->r[0]^0x80000000u; // 800B5660
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5664
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800B5668
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[5]=RF64(ea);} // 800B566C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B5670
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B5674
  c->f[2]=c->f[31]; // 800B5678
  W32(c->r[1]+0x00000010u,c->r[7]); // 800B567C
  c->r[29]=c->r[3]|c->r[3]; // 800B5680
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[5]); // 800B5684
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5688
  c->r[30]=c->r[4]|c->r[4]; // 800B568C
  c->r[31]=c->r[5]|c->r[5]; // 800B5690
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800B5694
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B5698
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[5]); // 800B569C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B56A0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B56A4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800B56A8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 800B56AC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B56B0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800B56B4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B56B8
  {uint32_t ea=c->r[5]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B56BC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B56C0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B56C4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B56C8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800B56CC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B56D0
  {uint32_t ea=c->r[5]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B56D4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B56D8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B56DC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B56E0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[3]);} // 800B56E4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B56E8
  {uint32_t ea=c->r[5]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B56EC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B56F0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B56F4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B56F8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800B56FC
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B5700
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B5704
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B5708
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B570C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800B5710
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 800B5714
  {uint32_t ea=c->r[4]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B5718
  c->r[4]=c->r[4]+0x00000034u; // 800B571C
  {uint32_t ea=c->r[5]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B5720
  c->r[5]=c->r[5]+0x00000034u; // 800B5724
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 800B5728
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B572C
  c->f[1]=c->f[0]; // 800B5730
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 800B5734
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800B5738
  c->r[3]=c->r[3]+0x00000034u; // 800B573C
  c->lr=0x800B5744u; f_8025E410(c); // 800B5740
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5744
  c->f[2]=c->f[31]; // 800B5748
  c->r[3]=c->r[29]+0x00000054u; // 800B574C
  c->r[4]=c->r[30]+0x00000054u; // 800B5750
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800B5754
  c->r[5]=c->r[31]+0x00000054u; // 800B5758
  c->lr=0x800B5760u; f_8025E410(c); // 800B575C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5760
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5764
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800B5768
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B576C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[0]); // 800B5770
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[0]=RF64(ea);} // 800B5774
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B5778
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B577C
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[2]);} // 800B5780
  c->r[3]=R32(c->r[30]+0x00000090u); // 800B5784
  c->r[0]=R32(c->r[31]+0x00000090u); // 800B5788
  c->r[3]=c->r[3]^0x80000000u; // 800B578C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B5790
  c->r[0]=c->r[0]^0x80000000u; // 800B5794
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5798
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B579C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B57A0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B57A4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B57A8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B57AC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B57B0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B57B4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B57B8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800B57BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B57C0
  W32(c->r[29]+0x00000090u,c->r[0]); // 800B57C4
  {uint32_t ea=c->r[30]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B57C8
  {uint32_t ea=c->r[31]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B57CC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B57D0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B57D4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B57D8
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[2]);} // 800B57DC
  {uint32_t ea=c->r[30]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B57E0
  {uint32_t ea=c->r[31]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B57E4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B57E8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B57EC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B57F0
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[2]);} // 800B57F4
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B57F8
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B57FC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B5800
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B5804
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B5808
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[2]);} // 800B580C
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B5810
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5814
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B5818
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B581C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B5820
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[2]);} // 800B5824
  c->r[3]=R32(c->r[30]+0x000000B4u); // 800B5828
  c->r[0]=R32(c->r[31]+0x000000B4u); // 800B582C
  c->r[3]=c->r[3]^0x80000000u; // 800B5830
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B5834
  c->r[0]=c->r[0]^0x80000000u; // 800B5838
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B583C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B5840
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B5844
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B5848
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800B584C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 800B5850
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B5854
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B5858
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B585C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800B5860
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800B5864
  W32(c->r[29]+0x000000B4u,c->r[0]); // 800B5868
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B586C
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5870
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B5874
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B5878
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B587C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 800B5880
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5884
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5888
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B588C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B5890
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B5894
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[0]);} // 800B5898
  {uint32_t ea=c->r[30]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B589C
  {uint32_t ea=c->r[31]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B58A0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B58A4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B58A8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B58AC
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[0]);} // 800B58B0
  {uint32_t ea=c->r[30]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B58B4
  {uint32_t ea=c->r[31]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B58B8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800B58BC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B58C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B58C4
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[0]);} // 800B58C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800B58CC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800B58D0
  c->r[11]=c->r[1]+0x00000040u; // 800B58D4
  c->lr=0x800B58DCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B58D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B58DC
  c->lr=c->r[0]; // 800B58E0
  c->r[1]=c->r[1]+0x00000050u; // 800B58E4
  return; // 800B58E8
}

// fn_800B58EC
void f_800B58EC(Ctx* __restrict c) {
  trace_call(0x800B58ECu);
  c->r[3]=0u+0x0000010Cu; // 800B58EC
  return; // 800B58F0
}

// fn_800B58F4
void f_800B58F4(Ctx* __restrict c) {
  trace_call(0x800B58F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B58F4
  c->r[0]=c->lr; // 800B58F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B58FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5900
  c->r[31]=c->r[3]|c->r[3]; // 800B5904
  c->lr=0x800B590Cu; f_800B4748(c); // 800B5908
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B590C
  c->r[3]=0u+0x80420000u; // 800B5910
  c->r[3]=c->r[3]+0xFFFFAD8Cu; // 800B5914
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B5918
  c->r[0]=c->r[0]|0x80000000u; // 800B591C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B5920
  c->r[3]=c->r[31]|c->r[31]; // 800B5924
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B5928
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B592C
  c->ctr=c->r[12]; // 800B5930
  if (true) { c->lr=0x800B5938u; dispatch(c,c->ctr); } // 800B5934
  c->r[3]=c->r[31]|c->r[31]; // 800B5938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B593C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5940
  c->lr=c->r[0]; // 800B5944
  c->r[1]=c->r[1]+0x00000010u; // 800B5948
  return; // 800B594C
}

// fn_800B5950
void f_800B5950(Ctx* __restrict c) {
  trace_call(0x800B5950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5950
  c->r[0]=c->lr; // 800B5954
  cmps(c,0,(int32_t)c->r[3],0); // 800B5958
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B595C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B5960
  c->r[30]=c->r[3]|c->r[3]; // 800B5964
  c->r[31]=c->r[4]|c->r[4]; // 800B5968
  if (crb(c,2)) { goto L_800B5988; } // 800B596C
  c->r[4]=0u+0x00000000u; // 800B5970
  c->lr=0x800B5978u; f_802B1180(c); // 800B5974
  cmps(c,0,(int32_t)c->r[31],0); // 800B5978
  if (!crb(c,1)) { goto L_800B5988; } // 800B597C
  c->r[3]=c->r[30]|c->r[30]; // 800B5980
  c->lr=0x800B5988u; f_80244DC0(c); // 800B5984
L_800B5988:;
  c->r[3]=c->r[30]|c->r[30]; // 800B5988
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B598C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5990
  c->lr=c->r[0]; // 800B5994
  c->r[1]=c->r[1]+0x00000010u; // 800B5998
  return; // 800B599C
}

// fn_800B59A0
void f_800B59A0(Ctx* __restrict c) {
  trace_call(0x800B59A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B59A0
  c->r[0]=c->lr; // 800B59A4
  c->r[3]=0u+0x0000010Cu; // 800B59A8
  c->r[4]=c->r[13]+0xFFFFAA4Fu; // 800B59AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B59B0
  c->r[5]=0u+0x00000000u; // 800B59B4
  c->r[6]=0u+0x00001001u; // 800B59B8
  c->lr=0x800B59C0u; f_80244D20(c); // 800B59BC
  cmps(c,0,(int32_t)c->r[3],0); // 800B59C0
  if (crb(c,2)) { goto L_800B59CC; } // 800B59C4
  c->lr=0x800B59CCu; f_800B58F4(c); // 800B59C8
L_800B59CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B59CC
  c->lr=c->r[0]; // 800B59D0
  c->r[1]=c->r[1]+0x00000010u; // 800B59D4
  return; // 800B59D8
}

// fn_800B59DC
void f_800B59DC(Ctx* __restrict c) {
  trace_call(0x800B59DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B59DC
  c->r[0]=c->lr; // 800B59E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B59E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B59E8
  c->r[31]=c->r[3]|c->r[3]; // 800B59EC
  c->lr=0x800B59F4u; f_80244520(c); // 800B59F0
  c->r[7]=c->r[3]|c->r[3]; // 800B59F4
  c->r[9]=c->r[31]|c->r[31]; // 800B59F8
  c->r[3]=0u+0x0000010Cu; // 800B59FC
  c->r[4]=c->r[13]+0xFFFFAA54u; // 800B5A00
  c->r[5]=0u+0x00000000u; // 800B5A04
  c->r[6]=0u+0x00002001u; // 800B5A08
  c->r[8]=0u+0x00000000u; // 800B5A0C
  c->lr=0x800B5A14u; f_80242DF0(c); // 800B5A10
  c->r[4]=c->r[3]|c->r[3]; // 800B5A14
  c->r[3]=0u+0x0000010Cu; // 800B5A18
  c->r[5]=c->r[13]+0xFFFFAA59u; // 800B5A1C
  c->r[6]=0u+0x00000000u; // 800B5A20
  c->r[7]=0u+0x00001001u; // 800B5A24
  c->lr=0x800B5A2Cu; f_80244DB0(c); // 800B5A28
  cmps(c,0,(int32_t)c->r[3],0); // 800B5A2C
  if (crb(c,2)) { goto L_800B5A38; } // 800B5A30
  c->lr=0x800B5A38u; f_800B58F4(c); // 800B5A34
L_800B5A38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5A38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5A3C
  c->lr=c->r[0]; // 800B5A40
  c->r[1]=c->r[1]+0x00000010u; // 800B5A44
  return; // 800B5A48
}

// fn_800B5A4C
void f_800B5A4C(Ctx* __restrict c) {
  trace_call(0x800B5A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5A4C
  c->r[0]=c->lr; // 800B5A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5A58
  c->r[31]=c->r[3]|c->r[3]; // 800B5A5C
  c->lr=0x800B5A64u; f_800B4748(c); // 800B5A60
  c->r[8]=0u+0x80420000u; // 800B5A64
  c->r[6]=0u+0x80410000u; // 800B5A68
  c->r[7]=0u+0x00000000u; // 800B5A6C
  c->r[5]=0u+0xC3100000u; // 800B5A70
  c->r[4]=0u+0xCCE00000u; // 800B5A74
  c->r[3]=0u+0xA4670000u; // 800B5A78
  c->r[0]=c->r[3]+0x0000239Cu; // 800B5A7C
  c->r[8]=c->r[8]+0xFFFFAD50u; // 800B5A80
  c->r[6]=c->r[6]+0xFFFFCAABu; // 800B5A84
  c->r[5]=c->r[5]+0xFFFFB1F0u; // 800B5A88
  c->r[4]=c->r[4]+0xFFFFA987u; // 800B5A8C
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B5A90
  c->r[3]=c->r[31]|c->r[31]; // 800B5A94
  W32(c->r[31]+0x00000124u,c->r[7]); // 800B5A98
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B5A9C
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B5AA0
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B5AA4
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B5AA8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B5AAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5AB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5AB4
  c->lr=c->r[0]; // 800B5AB8
  c->r[1]=c->r[1]+0x00000010u; // 800B5ABC
  return; // 800B5AC0
}

// fn_800B5AC4
void f_800B5AC4(Ctx* __restrict c) {
  trace_call(0x800B5AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5AC4
  c->r[0]=c->lr; // 800B5AC8
  cmps(c,0,(int32_t)c->r[4],0); // 800B5ACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5AD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B5AD4
  c->r[30]=c->r[3]|c->r[3]; // 800B5AD8
  c->r[31]=c->r[4]|c->r[4]; // 800B5ADC
  if (crb(c,2)) { goto L_800B5B34; } // 800B5AE0
  c->r[3]=c->r[31]|c->r[31]; // 800B5AE4
  c->lr=0x800B5AECu; f_80244520(c); // 800B5AE8
  c->r[7]=c->r[3]|c->r[3]; // 800B5AEC
  c->r[9]=c->r[31]|c->r[31]; // 800B5AF0
  c->r[3]=0u+0x00000128u; // 800B5AF4
  c->r[4]=c->r[13]+0xFFFFAA5Eu; // 800B5AF8
  c->r[5]=0u+0x00000000u; // 800B5AFC
  c->r[6]=0u+0x00002001u; // 800B5B00
  c->r[8]=0u+0x00000000u; // 800B5B04
  c->lr=0x800B5B0Cu; f_80242DF0(c); // 800B5B08
  c->r[4]=c->r[3]|c->r[3]; // 800B5B0C
  c->r[3]=0u+0x00000128u; // 800B5B10
  c->r[5]=c->r[13]+0xFFFFAA63u; // 800B5B14
  c->r[6]=0u+0x00000000u; // 800B5B18
  c->r[7]=0u+0x00001001u; // 800B5B1C
  c->lr=0x800B5B24u; f_80244DB0(c); // 800B5B20
  cmps(c,0,(int32_t)c->r[3],0); // 800B5B24
  if (crb(c,2)) { goto L_800B5B54; } // 800B5B28
  c->lr=0x800B5B30u; f_800B5A4C(c); // 800B5B2C
  goto L_800B5B54; // 800B5B30
L_800B5B34:;
  c->r[3]=0u+0x00000128u; // 800B5B34
  c->r[4]=c->r[13]+0xFFFFAA68u; // 800B5B38
  c->r[5]=0u+0x00000000u; // 800B5B3C
  c->r[6]=0u+0x00001001u; // 800B5B40
  c->lr=0x800B5B48u; f_80244D20(c); // 800B5B44
  cmps(c,0,(int32_t)c->r[3],0); // 800B5B48
  if (crb(c,2)) { goto L_800B5B54; } // 800B5B4C
  c->lr=0x800B5B54u; f_800B5A4C(c); // 800B5B50
L_800B5B54:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B5B54
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B5B58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B5B5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5B60
  c->lr=c->r[0]; // 800B5B64
  c->r[1]=c->r[1]+0x00000010u; // 800B5B68
  return; // 800B5B6C
}

// fn_800B5B70
void f_800B5B70(Ctx* __restrict c) {
  trace_call(0x800B5B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5B70
  c->r[0]=c->lr; // 800B5B74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5B78
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B5B7C
  c->r[28]=c->r[3]|c->r[3]; // 800B5B80
  c->r[29]=c->r[4]|c->r[4]; // 800B5B84
  c->lr=0x800B5B8Cu; f_800B4864(c); // 800B5B88
  c->r[30]=c->r[3]|c->r[3]; // 800B5B8C
  c->r[3]=c->r[29]|c->r[29]; // 800B5B90
  c->r[4]=0u+0x00000000u; // 800B5B94
  c->lr=0x800B5B9Cu; f_8030BE30(c); // 800B5B98
  W32(c->r[28]+0x0000010Cu,c->r[3]); // 800B5B9C
  c->r[31]=0u+0x00000000u; // 800B5BA0
  c->r[3]=c->r[29]|c->r[29]; // 800B5BA4
  W32(c->r[28]+0x00000110u,c->r[31]); // 800B5BA8
  c->lr=0x800B5BB0u; f_8030BD1C(c); // 800B5BAC
  W32(c->r[28]+0x00000114u,c->r[3]); // 800B5BB0
  c->r[3]=c->r[29]|c->r[29]; // 800B5BB4
  c->r[4]=0u+0x00000000u; // 800B5BB8
  c->lr=0x800B5BC0u; f_8030BE30(c); // 800B5BBC
  W32(c->r[28]+0x00000118u,c->r[3]); // 800B5BC0
  c->r[3]=c->r[29]|c->r[29]; // 800B5BC4
  W32(c->r[28]+0x0000011Cu,c->r[31]); // 800B5BC8
  c->lr=0x800B5BD0u; f_8030BD1C(c); // 800B5BCC
  W32(c->r[28]+0x00000120u,c->r[3]); // 800B5BD0
  c->r[3]=c->r[30]|c->r[30]; // 800B5BD4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B5BD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5BDC
  c->lr=c->r[0]; // 800B5BE0
  c->r[1]=c->r[1]+0x00000020u; // 800B5BE4
  return; // 800B5BE8
}

// fn_800B5BEC
void f_800B5BEC(Ctx* __restrict c) {
  trace_call(0x800B5BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5BEC
  c->r[0]=c->lr; // 800B5BF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B5BF4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B5BF8
  c->r[27]=c->r[3]|c->r[3]; // 800B5BFC
  c->r[28]=c->r[4]|c->r[4]; // 800B5C00
  c->r[29]=c->r[5]|c->r[5]; // 800B5C04
  c->r[30]=c->r[6]|c->r[6]; // 800B5C08
  c->r[7]=R32(c->r[3]+0x00000124u); // 800B5C0C
  cmps(c,0,(int32_t)c->r[7],0); // 800B5C10
  if (!crb(c,0)) { goto L_800B5C24; } // 800B5C14
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B5C18
  W32(c->r[3]+0x00000124u,c->r[0]); // 800B5C1C
  goto L_800B5C34; // 800B5C20
L_800B5C24:;
  c->r[0]=c->r[7]+0x00000001u; // 800B5C24
  W32(c->r[3]+0x00000124u,c->r[0]); // 800B5C28
  cmps(c,0,(int32_t)c->r[0],1); // 800B5C2C
  if (crb(c,1)) { goto L_800B5DA0; } // 800B5C30
L_800B5C34:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5C34
  c->r[4]=c->r[28]|c->r[28]; // 800B5C38
  c->r[5]=c->r[29]|c->r[29]; // 800B5C3C
  c->r[6]=c->r[30]|c->r[30]; // 800B5C40
  c->lr=0x800B5C48u; f_800B4B38(c); // 800B5C44
  c->r[4]=R32(c->r[27]+0x0000010Cu); // 800B5C48
  cmps(c,0,(int32_t)c->r[4],0); // 800B5C4C
  if (crb(c,2)) { goto L_800B5CF4; } // 800B5C50
  c->r[0]=0u+0x00000001u; // 800B5C54
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B5C58
  c->r[6]=c->r[28]|c->r[28]; // 800B5C5C
  c->r[7]=c->r[29]|c->r[29]; // 800B5C60
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B5C64
  c->r[8]=c->r[30]|c->r[30]; // 800B5C68
  c->r[9]=R32(c->r[27]+0x00000114u); // 800B5C6C
  c->r[5]=0u+0x00000001u; // 800B5C70
  c->r[10]=0u+0x00000001u; // 800B5C74
  c->lr=0x800B5C7Cu; f_80281A84(c); // 800B5C78
  cmps(c,0,(int32_t)c->r[3],0); // 800B5C7C
  W32(c->r[27]+0x00000110u,c->r[3]); // 800B5C80
  if (crb(c,2)) { goto L_800B5C90; } // 800B5C84
  c->lr=0x800B5C8Cu; f_80295B6C(c); // 800B5C88
  goto L_800B5CF4; // 800B5C8C
L_800B5C90:;
  c->r[3]=R32(c->r[27]+0x00000114u); // 800B5C90
  c->r[4]=c->r[30]|c->r[30]; // 800B5C94
  c->r[5]=c->r[29]|c->r[29]; // 800B5C98
  c->lr=0x800B5CA0u; f_802C0F98(c); // 800B5C9C
  c->r[31]=c->r[3]|c->r[3]; // 800B5CA0
  c->r[3]=0u+0x00000044u; // 800B5CA4
  c->r[4]=c->r[13]+0xFFFFAA6Du; // 800B5CA8
  c->r[5]=0u+0x00000000u; // 800B5CAC
  c->r[6]=0u+0x00001001u; // 800B5CB0
  c->lr=0x800B5CB8u; f_80244D20(c); // 800B5CB4
  cmps(c,0,(int32_t)c->r[3],0); // 800B5CB8
  if (crb(c,2)) { goto L_800B5CD0; } // 800B5CBC
  c->r[5]=R32(c->r[27]+0x0000010Cu); // 800B5CC0
  c->r[4]=c->r[31]|c->r[31]; // 800B5CC4
  c->r[6]=0u+0x00000001u; // 800B5CC8
  c->lr=0x800B5CD0u; f_8029316C(c); // 800B5CCC
L_800B5CD0:;
  W32(c->r[27]+0x00000110u,c->r[3]); // 800B5CD0
  c->r[4]=c->r[28]|c->r[28]; // 800B5CD4
  c->r[7]=R32(c->r[27]+0x00000114u); // 800B5CD8
  c->r[5]=c->r[29]|c->r[29]; // 800B5CDC
  c->r[6]=c->r[30]|c->r[30]; // 800B5CE0
  c->r[8]=0u+0x00000001u; // 800B5CE4
  c->r[9]=0u+0x00000000u; // 800B5CE8
  c->lr=0x800B5CF0u; f_8027FFF4(c); // 800B5CEC
  W32(c->r[27]+0x00000110u,c->r[3]); // 800B5CF0
L_800B5CF4:;
  c->r[4]=R32(c->r[27]+0x00000118u); // 800B5CF4
  cmps(c,0,(int32_t)c->r[4],0); // 800B5CF8
  if (crb(c,2)) { goto L_800B5DA0; } // 800B5CFC
  c->r[0]=0u+0x00000001u; // 800B5D00
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B5D04
  c->r[6]=c->r[28]|c->r[28]; // 800B5D08
  c->r[7]=c->r[29]|c->r[29]; // 800B5D0C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B5D10
  c->r[8]=c->r[30]|c->r[30]; // 800B5D14
  c->r[9]=R32(c->r[27]+0x00000120u); // 800B5D18
  c->r[5]=0u+0x00000010u; // 800B5D1C
  c->r[10]=0u+0x00000001u; // 800B5D20
  c->lr=0x800B5D28u; f_80281A84(c); // 800B5D24
  cmps(c,0,(int32_t)c->r[3],0); // 800B5D28
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 800B5D2C
  if (crb(c,2)) { goto L_800B5D3C; } // 800B5D30
  c->lr=0x800B5D38u; f_80295B6C(c); // 800B5D34
  goto L_800B5DA0; // 800B5D38
L_800B5D3C:;
  c->r[3]=R32(c->r[27]+0x00000120u); // 800B5D3C
  c->r[4]=c->r[30]|c->r[30]; // 800B5D40
  c->r[5]=c->r[29]|c->r[29]; // 800B5D44
  c->lr=0x800B5D4Cu; f_802C0F98(c); // 800B5D48
  c->r[31]=c->r[3]|c->r[3]; // 800B5D4C
  c->r[3]=0u+0x00000044u; // 800B5D50
  c->r[4]=c->r[13]+0xFFFFAA72u; // 800B5D54
  c->r[5]=0u+0x00000000u; // 800B5D58
  c->r[6]=0u+0x00001001u; // 800B5D5C
  c->lr=0x800B5D64u; f_80244D20(c); // 800B5D60
  cmps(c,0,(int32_t)c->r[3],0); // 800B5D64
  if (crb(c,2)) { goto L_800B5D7C; } // 800B5D68
  c->r[5]=R32(c->r[27]+0x00000118u); // 800B5D6C
  c->r[4]=c->r[31]|c->r[31]; // 800B5D70
  c->r[6]=0u+0x00000010u; // 800B5D74
  c->lr=0x800B5D7Cu; f_8029316C(c); // 800B5D78
L_800B5D7C:;
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 800B5D7C
  c->r[4]=c->r[28]|c->r[28]; // 800B5D80
  c->r[7]=R32(c->r[27]+0x00000120u); // 800B5D84
  c->r[5]=c->r[29]|c->r[29]; // 800B5D88
  c->r[6]=c->r[30]|c->r[30]; // 800B5D8C
  c->r[8]=0u+0x00000001u; // 800B5D90
  c->r[9]=0u+0x00000000u; // 800B5D94
  c->lr=0x800B5D9Cu; f_8027FFF4(c); // 800B5D98
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 800B5D9C
L_800B5DA0:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B5DA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B5DA4
  c->lr=c->r[0]; // 800B5DA8
  c->r[1]=c->r[1]+0x00000030u; // 800B5DAC
  return; // 800B5DB0
}

// fn_800B5DB4
void f_800B5DB4(Ctx* __restrict c) {
  trace_call(0x800B5DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5DB4
  c->r[0]=c->lr; // 800B5DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5DBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5DC0
  c->r[31]=c->r[3]|c->r[3]; // 800B5DC4
  c->r[0]=R32(c->r[3]+0x00000124u); // 800B5DC8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B5DCC
  W32(c->r[3]+0x00000124u,c->r[0]); // 800B5DD0
  if (!crb(c,2)) { goto L_800B5E0C; } // 800B5DD4
  c->lr=0x800B5DDCu; f_800B51B4(c); // 800B5DD8
  c->r[3]=R32(c->r[31]+0x00000110u); // 800B5DDC
  cmps(c,0,(int32_t)c->r[3],0); // 800B5DE0
  if (crb(c,2)) { goto L_800B5DF4; } // 800B5DE4
  c->lr=0x800B5DECu; f_80295B7C(c); // 800B5DE8
  c->r[0]=0u+0x00000000u; // 800B5DEC
  W32(c->r[31]+0x00000110u,c->r[0]); // 800B5DF0
L_800B5DF4:;
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 800B5DF4
  cmps(c,0,(int32_t)c->r[3],0); // 800B5DF8
  if (crb(c,2)) { goto L_800B5E0C; } // 800B5DFC
  c->lr=0x800B5E04u; f_80295B7C(c); // 800B5E00
  c->r[0]=0u+0x00000000u; // 800B5E04
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 800B5E08
L_800B5E0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5E0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5E10
  c->lr=c->r[0]; // 800B5E14
  c->r[1]=c->r[1]+0x00000010u; // 800B5E18
  return; // 800B5E1C
}

// fn_800B5E20
void f_800B5E20(Ctx* __restrict c) {
  trace_call(0x800B5E20u);
  return; // 800B5E20
}

// fn_800B5E24
void f_800B5E24(Ctx* __restrict c) {
  trace_call(0x800B5E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5E24
  c->r[0]=c->lr; // 800B5E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5E30
  c->r[31]=c->r[3]|c->r[3]; // 800B5E34
  c->lr=0x800B5E3Cu; f_800B52CC(c); // 800B5E38
  c->r[6]=0u+0xED7C0000u; // 800B5E3C
  c->r[3]=0u+0xB52A0000u; // 800B5E40
  c->r[5]=0u+0x00000000u; // 800B5E44
  c->r[4]=0u+0x00000004u; // 800B5E48
  c->r[6]=c->r[6]+0x00006B6Cu; // 800B5E4C
  c->r[0]=c->r[3]+0x00006FA1u; // 800B5E50
  W32(c->r[31]+0x00000070u,c->r[6]); // 800B5E54
  W32(c->r[31]+0x00000074u,c->r[5]); // 800B5E58
  W32(c->r[31]+0x00000078u,c->r[4]); // 800B5E5C
  W32(c->r[31]+0x0000010Cu,c->r[5]); // 800B5E60
  W32(c->r[31]+0x00000110u,c->r[5]); // 800B5E64
  W32(c->r[31]+0x00000114u,c->r[4]); // 800B5E68
  W32(c->r[31]+0x00000118u,c->r[0]); // 800B5E6C
  W32(c->r[31]+0x0000011Cu,c->r[5]); // 800B5E70
  W32(c->r[31]+0x00000120u,c->r[4]); // 800B5E74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5E78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5E7C
  c->lr=c->r[0]; // 800B5E80
  c->r[1]=c->r[1]+0x00000010u; // 800B5E84
  return; // 800B5E88
}

// fn_800B5E8C
void f_800B5E8C(Ctx* __restrict c) {
  trace_call(0x800B5E8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5E8C
  c->r[0]=c->lr; // 800B5E90
  c->r[6]=0u+0x00000000u; // 800B5E94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5E98
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B5E9C
  c->r[28]=c->r[3]|c->r[3]; // 800B5EA0
  c->r[29]=c->r[4]|c->r[4]; // 800B5EA4
  c->r[30]=c->r[5]|c->r[5]; // 800B5EA8
  c->r[31]=c->r[7]|c->r[7]; // 800B5EAC
  c->lr=0x800B5EB4u; f_800B5454(c); // 800B5EB0
  cmps(c,0,(int32_t)c->r[30],0); // 800B5EB4
  if (crb(c,2)) { goto L_800B5EC0; } // 800B5EB8
  goto L_800B5EC4; // 800B5EBC
L_800B5EC0:;
  c->r[30]=c->r[28]|c->r[28]; // 800B5EC0
L_800B5EC4:;
  c->r[3]=c->r[30]+0x0000010Cu; // 800B5EC4
  c->r[4]=c->r[29]+0x0000010Cu; // 800B5EC8
  c->lr=0x800B5ED0u; f_8003BDD0(c); // 800B5ECC
  c->r[3]=c->r[30]+0x00000118u; // 800B5ED0
  c->r[4]=c->r[29]+0x00000118u; // 800B5ED4
  c->lr=0x800B5EDCu; f_8003BDD0(c); // 800B5ED8
  cmps(c,0,(int32_t)c->r[31],0); // 800B5EDC
  if (crb(c,2)) { goto L_800B5F04; } // 800B5EE0
  c->r[3]=R32(c->r[28]+0x00000124u); // 800B5EE4
  cmps(c,0,(int32_t)c->r[3],0); // 800B5EE8
  if (crb(c,1)) { goto L_800B5EFC; } // 800B5EEC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B5EF0
  W32(c->r[28]+0x00000124u,c->r[0]); // 800B5EF4
  goto L_800B5F04; // 800B5EF8
L_800B5EFC:;
  c->r[0]=c->r[3]+0x00000001u; // 800B5EFC
  W32(c->r[28]+0x00000124u,c->r[0]); // 800B5F00
L_800B5F04:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B5F04
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5F08
  c->lr=c->r[0]; // 800B5F0C
  c->r[1]=c->r[1]+0x00000020u; // 800B5F10
  return; // 800B5F14
}

// fn_800B5F18
void f_800B5F18(Ctx* __restrict c) {
  trace_call(0x800B5F18u);
  c->r[3]=0u+0xF61F0000u; // 800B5F18
  c->r[0]=c->r[3]+0xFFFFCF72u; // 800B5F1C
  c->r[0]=c->r[4]-c->r[0]; // 800B5F20
  c->r[0]=cntlz(c->r[0]); // 800B5F24
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B5F28
  return; // 800B5F2C
}

// fn_800B5F30
void f_800B5F30(Ctx* __restrict c) {
  trace_call(0x800B5F30u);
  f_800B562C(c); return; // 800B5F30
}

// fn_800B5F34
void f_800B5F34(Ctx* __restrict c) {
  trace_call(0x800B5F34u);
  c->r[3]=0u+0x00000128u; // 800B5F34
  return; // 800B5F38
}

// fn_800B5F3C
void f_800B5F3C(Ctx* __restrict c) {
  trace_call(0x800B5F3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5F3C
  c->r[0]=c->lr; // 800B5F40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5F44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5F48
  c->r[31]=c->r[3]|c->r[3]; // 800B5F4C
  c->lr=0x800B5F54u; f_800B5A4C(c); // 800B5F50
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B5F54
  c->r[3]=0u+0x80420000u; // 800B5F58
  c->r[3]=c->r[3]+0xFFFFAD10u; // 800B5F5C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B5F60
  c->r[0]=c->r[0]|0x80000000u; // 800B5F64
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B5F68
  c->r[3]=c->r[31]|c->r[31]; // 800B5F6C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B5F70
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B5F74
  c->ctr=c->r[12]; // 800B5F78
  if (true) { c->lr=0x800B5F80u; dispatch(c,c->ctr); } // 800B5F7C
  c->r[3]=c->r[31]|c->r[31]; // 800B5F80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5F84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5F88
  c->lr=c->r[0]; // 800B5F8C
  c->r[1]=c->r[1]+0x00000010u; // 800B5F90
  return; // 800B5F94
}

// fn_800B5F98
void f_800B5F98(Ctx* __restrict c) {
  trace_call(0x800B5F98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5F98
  c->r[0]=c->lr; // 800B5F9C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5FA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B5FA8
  c->r[30]=c->r[3]|c->r[3]; // 800B5FAC
  c->r[31]=c->r[4]|c->r[4]; // 800B5FB0
  if (crb(c,2)) { goto L_800B5FD4; } // 800B5FB4
  if (crb(c,2)) { goto L_800B5FC4; } // 800B5FB8
  c->r[4]=0u+0x00000000u; // 800B5FBC
  c->lr=0x800B5FC4u; f_802B1180(c); // 800B5FC0
L_800B5FC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B5FC4
  if (!crb(c,1)) { goto L_800B5FD4; } // 800B5FC8
  c->r[3]=c->r[30]|c->r[30]; // 800B5FCC
  c->lr=0x800B5FD4u; f_80244DC0(c); // 800B5FD0
L_800B5FD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800B5FD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B5FD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5FDC
  c->lr=c->r[0]; // 800B5FE0
  c->r[1]=c->r[1]+0x00000010u; // 800B5FE4
  return; // 800B5FE8
}

// fn_800B5FEC
void f_800B5FEC(Ctx* __restrict c) {
  trace_call(0x800B5FECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5FEC
  c->r[0]=c->lr; // 800B5FF0
  c->r[3]=0u+0x00000128u; // 800B5FF4
  c->r[4]=c->r[13]+0xFFFFAA77u; // 800B5FF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5FFC
  c->r[5]=0u+0x00000000u; // 800B6000
  c->r[6]=0u+0x00001001u; // 800B6004
  c->lr=0x800B600Cu; f_80244D20(c); // 800B6008
  cmps(c,0,(int32_t)c->r[3],0); // 800B600C
  if (crb(c,2)) { goto L_800B6018; } // 800B6010
  c->lr=0x800B6018u; f_800B5F3C(c); // 800B6014
L_800B6018:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6018
  c->lr=c->r[0]; // 800B601C
  c->r[1]=c->r[1]+0x00000010u; // 800B6020
  return; // 800B6024
}

// fn_800B6028
void f_800B6028(Ctx* __restrict c) {
  trace_call(0x800B6028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6028
  c->r[0]=c->lr; // 800B602C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6034
  c->r[31]=c->r[3]|c->r[3]; // 800B6038
  c->lr=0x800B6040u; f_80244520(c); // 800B603C
  c->r[7]=c->r[3]|c->r[3]; // 800B6040
  c->r[9]=c->r[31]|c->r[31]; // 800B6044
  c->r[3]=0u+0x00000128u; // 800B6048
  c->r[4]=c->r[13]+0xFFFFAA7Cu; // 800B604C
  c->r[5]=0u+0x00000000u; // 800B6050
  c->r[6]=0u+0x00002001u; // 800B6054
  c->r[8]=0u+0x00000000u; // 800B6058
  c->lr=0x800B6060u; f_80242DF0(c); // 800B605C
  c->r[4]=c->r[3]|c->r[3]; // 800B6060
  c->r[3]=0u+0x00000128u; // 800B6064
  c->r[5]=c->r[13]+0xFFFFAA81u; // 800B6068
  c->r[6]=0u+0x00000000u; // 800B606C
  c->r[7]=0u+0x00001001u; // 800B6070
  c->lr=0x800B6078u; f_80244DB0(c); // 800B6074
  cmps(c,0,(int32_t)c->r[3],0); // 800B6078
  if (crb(c,2)) { goto L_800B6084; } // 800B607C
  c->lr=0x800B6084u; f_800B5F3C(c); // 800B6080
L_800B6084:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6088
  c->lr=c->r[0]; // 800B608C
  c->r[1]=c->r[1]+0x00000010u; // 800B6090
  return; // 800B6094
}

// fn_800B6098
void f_800B6098(Ctx* __restrict c) {
  trace_call(0x800B6098u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6098
  c->r[0]=c->lr; // 800B609C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B60A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B60A4
  c->r[31]=c->r[3]|c->r[3]; // 800B60A8
  c->lr=0x800B60B0u; f_800B4748(c); // 800B60AC
  c->r[8]=0u+0x80420000u; // 800B60B0
  c->r[6]=0u+0x80410000u; // 800B60B4
  c->r[7]=0u+0x00000000u; // 800B60B8
  c->r[5]=0u+0xBD730000u; // 800B60BC
  c->r[4]=0u+0xCCE00000u; // 800B60C0
  c->r[3]=0u+0xC5E70000u; // 800B60C4
  c->r[0]=c->r[3]+0xFFFFC244u; // 800B60C8
  c->r[8]=c->r[8]+0xFFFFACD4u; // 800B60CC
  c->r[6]=c->r[6]+0xFFFFCAC9u; // 800B60D0
  c->r[5]=c->r[5]+0xFFFFB4CBu; // 800B60D4
  c->r[4]=c->r[4]+0xFFFFA987u; // 800B60D8
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B60DC
  c->r[3]=c->r[31]|c->r[31]; // 800B60E0
  W32(c->r[31]+0x0000016Cu,c->r[7]); // 800B60E4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B60E8
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B60EC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B60F0
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B60F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B60F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B60FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6100
  c->lr=c->r[0]; // 800B6104
  c->r[1]=c->r[1]+0x00000010u; // 800B6108
  return; // 800B610C
}

// fn_800B6110
void f_800B6110(Ctx* __restrict c) {
  trace_call(0x800B6110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6110
  c->r[0]=c->lr; // 800B6114
  cmps(c,0,(int32_t)c->r[4],0); // 800B6118
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B611C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6120
  c->r[30]=c->r[3]|c->r[3]; // 800B6124
  c->r[31]=c->r[4]|c->r[4]; // 800B6128
  if (crb(c,2)) { goto L_800B6180; } // 800B612C
  c->r[3]=c->r[31]|c->r[31]; // 800B6130
  c->lr=0x800B6138u; f_80244520(c); // 800B6134
  c->r[7]=c->r[3]|c->r[3]; // 800B6138
  c->r[9]=c->r[31]|c->r[31]; // 800B613C
  c->r[3]=0u+0x00000170u; // 800B6140
  c->r[4]=c->r[13]+0xFFFFAA86u; // 800B6144
  c->r[5]=0u+0x00000000u; // 800B6148
  c->r[6]=0u+0x00002001u; // 800B614C
  c->r[8]=0u+0x00000000u; // 800B6150
  c->lr=0x800B6158u; f_80242DF0(c); // 800B6154
  c->r[4]=c->r[3]|c->r[3]; // 800B6158
  c->r[3]=0u+0x00000170u; // 800B615C
  c->r[5]=c->r[13]+0xFFFFAA8Bu; // 800B6160
  c->r[6]=0u+0x00000000u; // 800B6164
  c->r[7]=0u+0x00001001u; // 800B6168
  c->lr=0x800B6170u; f_80244DB0(c); // 800B616C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6170
  if (crb(c,2)) { goto L_800B61A0; } // 800B6174
  c->lr=0x800B617Cu; f_800B6098(c); // 800B6178
  goto L_800B61A0; // 800B617C
L_800B6180:;
  c->r[3]=0u+0x00000170u; // 800B6180
  c->r[4]=c->r[13]+0xFFFFAA90u; // 800B6184
  c->r[5]=0u+0x00000000u; // 800B6188
  c->r[6]=0u+0x00001001u; // 800B618C
  c->lr=0x800B6194u; f_80244D20(c); // 800B6190
  cmps(c,0,(int32_t)c->r[3],0); // 800B6194
  if (crb(c,2)) { goto L_800B61A0; } // 800B6198
  c->lr=0x800B61A0u; f_800B6098(c); // 800B619C
L_800B61A0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B61A0
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B61A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B61A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B61AC
  c->lr=c->r[0]; // 800B61B0
  c->r[1]=c->r[1]+0x00000010u; // 800B61B4
  return; // 800B61B8
}

// fn_800B61BC
void f_800B61BC(Ctx* __restrict c) {
  trace_call(0x800B61BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B61BC
  c->r[0]=c->lr; // 800B61C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B61C4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B61C8
  c->r[28]=c->r[3]|c->r[3]; // 800B61CC
  c->r[29]=c->r[4]|c->r[4]; // 800B61D0
  c->lr=0x800B61D8u; f_800B4864(c); // 800B61D4
  c->r[30]=c->r[3]|c->r[3]; // 800B61D8
  c->r[3]=c->r[29]|c->r[29]; // 800B61DC
  c->lr=0x800B61E4u; f_8030C0A0(c); // 800B61E0
  {uint32_t ea=c->r[28]+0x0000010Cu; WF32(ea,c->f[1]);} // 800B61E4
  c->r[3]=c->r[29]|c->r[29]; // 800B61E8
  c->lr=0x800B61F0u; f_8030C0A0(c); // 800B61EC
  {uint32_t ea=c->r[28]+0x00000110u; WF32(ea,c->f[1]);} // 800B61F0
  c->r[3]=c->r[29]|c->r[29]; // 800B61F4
  c->lr=0x800B61FCu; f_8030C0A0(c); // 800B61F8
  {uint32_t ea=c->r[28]+0x00000114u; WF32(ea,c->f[1]);} // 800B61FC
  c->r[3]=c->r[29]|c->r[29]; // 800B6200
  c->lr=0x800B6208u; f_8030C0A0(c); // 800B6204
  {uint32_t ea=c->r[28]+0x00000118u; WF32(ea,c->f[1]);} // 800B6208
  c->r[3]=c->r[29]|c->r[29]; // 800B620C
  c->lr=0x800B6214u; f_8030C0A0(c); // 800B6210
  {uint32_t ea=c->r[28]+0x0000011Cu; WF32(ea,c->f[1]);} // 800B6214
  c->r[3]=c->r[29]|c->r[29]; // 800B6218
  c->r[4]=0u+0x00000000u; // 800B621C
  c->lr=0x800B6224u; f_8030BE30(c); // 800B6220
  W32(c->r[28]+0x00000120u,c->r[3]); // 800B6224
  c->r[31]=0u+0x00000000u; // 800B6228
  c->r[3]=c->r[29]|c->r[29]; // 800B622C
  W32(c->r[28]+0x00000124u,c->r[31]); // 800B6230
  c->lr=0x800B6238u; f_8030BD1C(c); // 800B6234
  W32(c->r[28]+0x00000128u,c->r[3]); // 800B6238
  c->r[3]=c->r[29]|c->r[29]; // 800B623C
  c->lr=0x800B6244u; f_8030BD1C(c); // 800B6240
  W32(c->r[28]+0x0000012Cu,c->r[3]); // 800B6244
  c->r[3]=c->r[29]|c->r[29]; // 800B6248
  c->lr=0x800B6250u; f_8030BD1C(c); // 800B624C
  W32(c->r[28]+0x00000130u,c->r[3]); // 800B6250
  c->r[3]=c->r[29]|c->r[29]; // 800B6254
  c->r[4]=0u+0x00000000u; // 800B6258
  c->lr=0x800B6260u; f_8030BE30(c); // 800B625C
  W32(c->r[28]+0x00000134u,c->r[3]); // 800B6260
  c->r[3]=c->r[29]|c->r[29]; // 800B6264
  W32(c->r[28]+0x00000138u,c->r[31]); // 800B6268
  c->lr=0x800B6270u; f_8030BD1C(c); // 800B626C
  W32(c->r[28]+0x0000013Cu,c->r[3]); // 800B6270
  c->r[3]=c->r[29]|c->r[29]; // 800B6274
  c->lr=0x800B627Cu; f_8030BD1C(c); // 800B6278
  W8(c->r[28]+0x00000140u,c->r[3]); // 800B627C
  c->r[3]=c->r[29]|c->r[29]; // 800B6280
  c->lr=0x800B6288u; f_8030BD1C(c); // 800B6284
  W8(c->r[28]+0x00000141u,c->r[3]); // 800B6288
  c->r[3]=c->r[29]|c->r[29]; // 800B628C
  c->lr=0x800B6294u; f_8030BD1C(c); // 800B6290
  W8(c->r[28]+0x00000142u,c->r[3]); // 800B6294
  c->r[3]=c->r[29]|c->r[29]; // 800B6298
  c->lr=0x800B62A0u; f_8030BD1C(c); // 800B629C
  W8(c->r[28]+0x00000143u,c->r[3]); // 800B62A0
  c->r[3]=c->r[29]|c->r[29]; // 800B62A4
  c->lr=0x800B62ACu; f_8030BD1C(c); // 800B62A8
  W8(c->r[28]+0x00000144u,c->r[3]); // 800B62AC
  c->r[3]=c->r[29]|c->r[29]; // 800B62B0
  c->lr=0x800B62B8u; f_8030BD1C(c); // 800B62B4
  W8(c->r[28]+0x00000145u,c->r[3]); // 800B62B8
  c->r[3]=c->r[29]|c->r[29]; // 800B62BC
  c->lr=0x800B62C4u; f_8030BD1C(c); // 800B62C0
  W8(c->r[28]+0x00000146u,c->r[3]); // 800B62C4
  c->r[3]=c->r[29]|c->r[29]; // 800B62C8
  c->lr=0x800B62D0u; f_8030BD1C(c); // 800B62CC
  W8(c->r[28]+0x00000147u,c->r[3]); // 800B62D0
  c->r[3]=c->r[29]|c->r[29]; // 800B62D4
  c->lr=0x800B62DCu; f_8030C0A0(c); // 800B62D8
  {uint32_t ea=c->r[28]+0x00000148u; WF32(ea,c->f[1]);} // 800B62DC
  c->r[3]=c->r[29]|c->r[29]; // 800B62E0
  c->lr=0x800B62E8u; f_8030C0A0(c); // 800B62E4
  {uint32_t ea=c->r[28]+0x0000014Cu; WF32(ea,c->f[1]);} // 800B62E8
  c->r[3]=c->r[29]|c->r[29]; // 800B62EC
  c->lr=0x800B62F4u; f_8030C0A0(c); // 800B62F0
  {uint32_t ea=c->r[28]+0x00000150u; WF32(ea,c->f[1]);} // 800B62F4
  c->r[3]=c->r[29]|c->r[29]; // 800B62F8
  c->lr=0x800B6300u; f_8030C0A0(c); // 800B62FC
  {uint32_t ea=c->r[28]+0x00000154u; WF32(ea,c->f[1]);} // 800B6300
  c->r[3]=c->r[29]|c->r[29]; // 800B6304
  c->lr=0x800B630Cu; f_8030C0A0(c); // 800B6308
  {uint32_t ea=c->r[28]+0x00000158u; WF32(ea,c->f[1]);} // 800B630C
  c->r[3]=c->r[29]|c->r[29]; // 800B6310
  c->lr=0x800B6318u; f_8030C0A0(c); // 800B6314
  {uint32_t ea=c->r[28]+0x0000015Cu; WF32(ea,c->f[1]);} // 800B6318
  c->r[3]=c->r[29]|c->r[29]; // 800B631C
  c->lr=0x800B6324u; f_8030C0A0(c); // 800B6320
  {uint32_t ea=c->r[28]+0x00000160u; WF32(ea,c->f[1]);} // 800B6324
  c->r[3]=c->r[29]|c->r[29]; // 800B6328
  c->lr=0x800B6330u; f_8030BD1C(c); // 800B632C
  W8(c->r[28]+0x00000164u,c->r[3]); // 800B6330
  c->r[3]=c->r[29]|c->r[29]; // 800B6334
  c->lr=0x800B633Cu; f_8030C0A0(c); // 800B6338
  {uint32_t ea=c->r[28]+0x00000168u; WF32(ea,c->f[1]);} // 800B633C
  c->r[3]=c->r[30]|c->r[30]; // 800B6340
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6344
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6348
  c->lr=c->r[0]; // 800B634C
  c->r[1]=c->r[1]+0x00000020u; // 800B6350
  return; // 800B6354
}

// fn_800B6358
void f_800B6358(Ctx* __restrict c) {
  trace_call(0x800B6358u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6358
  c->r[0]=c->lr; // 800B635C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B6360
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6364
  c->r[27]=c->r[3]|c->r[3]; // 800B6368
  c->r[28]=c->r[4]|c->r[4]; // 800B636C
  c->r[29]=c->r[5]|c->r[5]; // 800B6370
  c->r[30]=c->r[6]|c->r[6]; // 800B6374
  c->r[7]=R32(c->r[3]+0x0000016Cu); // 800B6378
  cmps(c,0,(int32_t)c->r[7],0); // 800B637C
  if (!crb(c,0)) { goto L_800B6390; } // 800B6380
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B6384
  W32(c->r[3]+0x0000016Cu,c->r[0]); // 800B6388
  goto L_800B63A0; // 800B638C
L_800B6390:;
  c->r[0]=c->r[7]+0x00000001u; // 800B6390
  W32(c->r[3]+0x0000016Cu,c->r[0]); // 800B6394
  cmps(c,0,(int32_t)c->r[0],1); // 800B6398
  if (crb(c,1)) { goto L_800B650C; } // 800B639C
L_800B63A0:;
  c->r[3]=c->r[27]|c->r[27]; // 800B63A0
  c->r[4]=c->r[28]|c->r[28]; // 800B63A4
  c->r[5]=c->r[29]|c->r[29]; // 800B63A8
  c->r[6]=c->r[30]|c->r[30]; // 800B63AC
  c->lr=0x800B63B4u; f_800B4B38(c); // 800B63B0
  c->r[4]=R32(c->r[27]+0x00000120u); // 800B63B4
  cmps(c,0,(int32_t)c->r[4],0); // 800B63B8
  if (crb(c,2)) { goto L_800B6460; } // 800B63BC
  c->r[0]=0u+0x00000001u; // 800B63C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B63C4
  c->r[6]=c->r[28]|c->r[28]; // 800B63C8
  c->r[7]=c->r[29]|c->r[29]; // 800B63CC
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B63D0
  c->r[8]=c->r[30]|c->r[30]; // 800B63D4
  c->r[9]=R32(c->r[27]+0x00000128u); // 800B63D8
  c->r[5]=0u+0x00000000u; // 800B63DC
  c->r[10]=0u+0x00000001u; // 800B63E0
  c->lr=0x800B63E8u; f_80281A84(c); // 800B63E4
  cmps(c,0,(int32_t)c->r[3],0); // 800B63E8
  W32(c->r[27]+0x00000124u,c->r[3]); // 800B63EC
  if (crb(c,2)) { goto L_800B63FC; } // 800B63F0
  c->lr=0x800B63F8u; f_80295B6C(c); // 800B63F4
  goto L_800B6460; // 800B63F8
L_800B63FC:;
  c->r[3]=R32(c->r[27]+0x00000128u); // 800B63FC
  c->r[4]=c->r[30]|c->r[30]; // 800B6400
  c->r[5]=c->r[29]|c->r[29]; // 800B6404
  c->lr=0x800B640Cu; f_802C0F98(c); // 800B6408
  c->r[31]=c->r[3]|c->r[3]; // 800B640C
  c->r[3]=0u+0x00000044u; // 800B6410
  c->r[4]=c->r[13]+0xFFFFAA95u; // 800B6414
  c->r[5]=0u+0x00000000u; // 800B6418
  c->r[6]=0u+0x00001001u; // 800B641C
  c->lr=0x800B6424u; f_80244D20(c); // 800B6420
  cmps(c,0,(int32_t)c->r[3],0); // 800B6424
  if (crb(c,2)) { goto L_800B643C; } // 800B6428
  c->r[5]=R32(c->r[27]+0x00000120u); // 800B642C
  c->r[4]=c->r[31]|c->r[31]; // 800B6430
  c->r[6]=0u+0x00000000u; // 800B6434
  c->lr=0x800B643Cu; f_8029316C(c); // 800B6438
L_800B643C:;
  W32(c->r[27]+0x00000124u,c->r[3]); // 800B643C
  c->r[4]=c->r[28]|c->r[28]; // 800B6440
  c->r[7]=R32(c->r[27]+0x00000128u); // 800B6444
  c->r[5]=c->r[29]|c->r[29]; // 800B6448
  c->r[6]=c->r[30]|c->r[30]; // 800B644C
  c->r[8]=0u+0x00000001u; // 800B6450
  c->r[9]=0u+0x00000000u; // 800B6454
  c->lr=0x800B645Cu; f_8027FFF4(c); // 800B6458
  W32(c->r[27]+0x00000124u,c->r[3]); // 800B645C
L_800B6460:;
  c->r[4]=R32(c->r[27]+0x00000134u); // 800B6460
  cmps(c,0,(int32_t)c->r[4],0); // 800B6464
  if (crb(c,2)) { goto L_800B650C; } // 800B6468
  c->r[0]=0u+0x00000001u; // 800B646C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B6470
  c->r[6]=c->r[28]|c->r[28]; // 800B6474
  c->r[7]=c->r[29]|c->r[29]; // 800B6478
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B647C
  c->r[8]=c->r[30]|c->r[30]; // 800B6480
  c->r[9]=R32(c->r[27]+0x0000013Cu); // 800B6484
  c->r[5]=0u+0x00000010u; // 800B6488
  c->r[10]=0u+0x00000001u; // 800B648C
  c->lr=0x800B6494u; f_80281A84(c); // 800B6490
  cmps(c,0,(int32_t)c->r[3],0); // 800B6494
  W32(c->r[27]+0x00000138u,c->r[3]); // 800B6498
  if (crb(c,2)) { goto L_800B64A8; } // 800B649C
  c->lr=0x800B64A4u; f_80295B6C(c); // 800B64A0
  goto L_800B650C; // 800B64A4
L_800B64A8:;
  c->r[3]=R32(c->r[27]+0x0000013Cu); // 800B64A8
  c->r[4]=c->r[30]|c->r[30]; // 800B64AC
  c->r[5]=c->r[29]|c->r[29]; // 800B64B0
  c->lr=0x800B64B8u; f_802C0F98(c); // 800B64B4
  c->r[31]=c->r[3]|c->r[3]; // 800B64B8
  c->r[3]=0u+0x00000044u; // 800B64BC
  c->r[4]=c->r[13]+0xFFFFAA9Au; // 800B64C0
  c->r[5]=0u+0x00000000u; // 800B64C4
  c->r[6]=0u+0x00001001u; // 800B64C8
  c->lr=0x800B64D0u; f_80244D20(c); // 800B64CC
  cmps(c,0,(int32_t)c->r[3],0); // 800B64D0
  if (crb(c,2)) { goto L_800B64E8; } // 800B64D4
  c->r[5]=R32(c->r[27]+0x00000134u); // 800B64D8
  c->r[4]=c->r[31]|c->r[31]; // 800B64DC
  c->r[6]=0u+0x00000010u; // 800B64E0
  c->lr=0x800B64E8u; f_8029316C(c); // 800B64E4
L_800B64E8:;
  W32(c->r[27]+0x00000138u,c->r[3]); // 800B64E8
  c->r[4]=c->r[28]|c->r[28]; // 800B64EC
  c->r[7]=R32(c->r[27]+0x0000013Cu); // 800B64F0
  c->r[5]=c->r[29]|c->r[29]; // 800B64F4
  c->r[6]=c->r[30]|c->r[30]; // 800B64F8
  c->r[8]=0u+0x00000001u; // 800B64FC
  c->r[9]=0u+0x00000000u; // 800B6500
  c->lr=0x800B6508u; f_8027FFF4(c); // 800B6504
  W32(c->r[27]+0x00000138u,c->r[3]); // 800B6508
L_800B650C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B650C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B6510
  c->lr=c->r[0]; // 800B6514
  c->r[1]=c->r[1]+0x00000030u; // 800B6518
  return; // 800B651C
}

// fn_800B6520
void f_800B6520(Ctx* __restrict c) {
  trace_call(0x800B6520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6520
  c->r[0]=c->lr; // 800B6524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B652C
  c->r[31]=c->r[3]|c->r[3]; // 800B6530
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 800B6534
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B6538
  W32(c->r[3]+0x0000016Cu,c->r[0]); // 800B653C
  if (!crb(c,2)) { goto L_800B6578; } // 800B6540
  c->lr=0x800B6548u; f_800B51B4(c); // 800B6544
  c->r[3]=R32(c->r[31]+0x00000124u); // 800B6548
  cmps(c,0,(int32_t)c->r[3],0); // 800B654C
  if (crb(c,2)) { goto L_800B6560; } // 800B6550
  c->lr=0x800B6558u; f_80295B7C(c); // 800B6554
  c->r[0]=0u+0x00000000u; // 800B6558
  W32(c->r[31]+0x00000124u,c->r[0]); // 800B655C
L_800B6560:;
  c->r[3]=R32(c->r[31]+0x00000138u); // 800B6560
  cmps(c,0,(int32_t)c->r[3],0); // 800B6564
  if (crb(c,2)) { goto L_800B6578; } // 800B6568
  c->lr=0x800B6570u; f_80295B7C(c); // 800B656C
  c->r[0]=0u+0x00000000u; // 800B6570
  W32(c->r[31]+0x00000138u,c->r[0]); // 800B6574
L_800B6578:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B657C
  c->lr=c->r[0]; // 800B6580
  c->r[1]=c->r[1]+0x00000010u; // 800B6584
  return; // 800B6588
}

// fn_800B658C
void f_800B658C(Ctx* __restrict c) {
  trace_call(0x800B658Cu);
  return; // 800B658C
}

// fn_800B6590
void f_800B6590(Ctx* __restrict c) {
  trace_call(0x800B6590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6590
  c->r[0]=c->lr; // 800B6594
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B659C
  c->r[31]=c->r[3]|c->r[3]; // 800B65A0
  c->lr=0x800B65A8u; f_800B52CC(c); // 800B65A4
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B65A8
  c->r[0]=0u+0x0000007Fu; // 800B65AC
  c->r[5]=0u+0x00000000u; // 800B65B0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800B65B4
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B65B8
  c->r[4]=0u+0x00000004u; // 800B65BC
  c->r[3]=0u+0x00000001u; // 800B65C0
  {uint32_t ea=c->r[2]+0xFFFF86FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B65C4
  {uint32_t ea=c->r[2]+0xFFFF86F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B65C8
  {uint32_t ea=c->r[2]+0xFFFF87D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B65CC
  {uint32_t ea=c->r[2]+0xFFFF87DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B65D0
  {uint32_t ea=c->r[2]+0xFFFF878Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B65D4
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[7]);} // 800B65D8
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[7]);} // 800B65DC
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[7]);} // 800B65E0
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[6]);} // 800B65E4
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[7]);} // 800B65E8
  W32(c->r[31]+0x00000120u,c->r[5]); // 800B65EC
  W32(c->r[31]+0x00000124u,c->r[5]); // 800B65F0
  W32(c->r[31]+0x00000128u,c->r[4]); // 800B65F4
  W32(c->r[31]+0x0000012Cu,c->r[3]); // 800B65F8
  W32(c->r[31]+0x00000130u,c->r[3]); // 800B65FC
  W32(c->r[31]+0x00000134u,c->r[5]); // 800B6600
  W32(c->r[31]+0x00000138u,c->r[5]); // 800B6604
  W32(c->r[31]+0x0000013Cu,c->r[4]); // 800B6608
  W8(c->r[31]+0x00000140u,c->r[0]); // 800B660C
  W8(c->r[31]+0x00000141u,c->r[0]); // 800B6610
  W8(c->r[31]+0x00000142u,c->r[0]); // 800B6614
  W8(c->r[31]+0x00000143u,c->r[0]); // 800B6618
  W8(c->r[31]+0x00000144u,c->r[0]); // 800B661C
  W8(c->r[31]+0x00000145u,c->r[0]); // 800B6620
  W8(c->r[31]+0x00000146u,c->r[0]); // 800B6624
  W8(c->r[31]+0x00000147u,c->r[0]); // 800B6628
  {uint32_t ea=c->r[31]+0x00000148u; WF32(ea,c->f[5]);} // 800B662C
  {uint32_t ea=c->r[31]+0x0000014Cu; WF32(ea,c->f[5]);} // 800B6630
  {uint32_t ea=c->r[31]+0x00000150u; WF32(ea,c->f[6]);} // 800B6634
  {uint32_t ea=c->r[31]+0x00000154u; WF32(ea,c->f[4]);} // 800B6638
  {uint32_t ea=c->r[31]+0x00000158u; WF32(ea,c->f[3]);} // 800B663C
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[2]);} // 800B6640
  {uint32_t ea=c->r[31]+0x00000160u; WF32(ea,c->f[1]);} // 800B6644
  W8(c->r[31]+0x00000164u,c->r[5]); // 800B6648
  {uint32_t ea=c->r[31]+0x00000168u; WF32(ea,c->f[0]);} // 800B664C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6650
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6654
  c->lr=c->r[0]; // 800B6658
  c->r[1]=c->r[1]+0x00000010u; // 800B665C
  return; // 800B6660
}

// fn_800B6664
void f_800B6664(Ctx* __restrict c) {
  trace_call(0x800B6664u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6664
  c->r[0]=c->lr; // 800B6668
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B666C
  c->r[11]=c->r[1]+0x00000020u; // 800B6670
  c->lr=0x800B6678u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B6674
  c->r[31]=c->r[3]|c->r[3]; // 800B6678
  c->r[28]=c->r[4]|c->r[4]; // 800B667C
  c->r[29]=c->r[5]|c->r[5]; // 800B6680
  c->r[30]=c->r[7]|c->r[7]; // 800B6684
  c->r[6]=0u+0x00000000u; // 800B6688
  c->lr=0x800B6690u; f_800B5454(c); // 800B668C
  cmps(c,0,(int32_t)c->r[29],0); // 800B6690
  if (crb(c,2)) { goto L_800B669C; } // 800B6694
  goto L_800B66A0; // 800B6698
L_800B669C:;
  c->r[29]=c->r[31]|c->r[31]; // 800B669C
L_800B66A0:;
  {uint32_t ea=c->r[28]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B66A0
  c->r[3]=c->r[29]+0x00000120u; // 800B66A4
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[0]);} // 800B66A8
  c->r[4]=c->r[28]+0x00000120u; // 800B66AC
  {uint32_t ea=c->r[28]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B66B0
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[0]);} // 800B66B4
  {uint32_t ea=c->r[28]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B66B8
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[0]);} // 800B66BC
  {uint32_t ea=c->r[28]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B66C0
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[0]);} // 800B66C4
  {uint32_t ea=c->r[28]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B66C8
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[0]);} // 800B66CC
  c->lr=0x800B66D4u; f_8003BDD0(c); // 800B66D0
  c->r[0]=R32(c->r[28]+0x0000012Cu); // 800B66D4
  c->r[3]=c->r[29]+0x00000134u; // 800B66D8
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 800B66DC
  c->r[4]=c->r[28]+0x00000134u; // 800B66E0
  c->r[0]=R32(c->r[28]+0x00000130u); // 800B66E4
  W32(c->r[29]+0x00000130u,c->r[0]); // 800B66E8
  c->lr=0x800B66F0u; f_8003BDD0(c); // 800B66EC
  c->r[0]=R8(c->r[28]+0x00000140u); // 800B66F0
  cmps(c,0,(int32_t)c->r[30],0); // 800B66F4
  W8(c->r[29]+0x00000140u,c->r[0]); // 800B66F8
  c->r[0]=R8(c->r[28]+0x00000141u); // 800B66FC
  W8(c->r[29]+0x00000141u,c->r[0]); // 800B6700
  c->r[0]=R8(c->r[28]+0x00000142u); // 800B6704
  W8(c->r[29]+0x00000142u,c->r[0]); // 800B6708
  c->r[0]=R8(c->r[28]+0x00000143u); // 800B670C
  W8(c->r[29]+0x00000143u,c->r[0]); // 800B6710
  c->r[0]=R8(c->r[28]+0x00000144u); // 800B6714
  W8(c->r[29]+0x00000144u,c->r[0]); // 800B6718
  c->r[0]=R8(c->r[28]+0x00000145u); // 800B671C
  W8(c->r[29]+0x00000145u,c->r[0]); // 800B6720
  c->r[0]=R8(c->r[28]+0x00000146u); // 800B6724
  W8(c->r[29]+0x00000146u,c->r[0]); // 800B6728
  c->r[0]=R8(c->r[28]+0x00000147u); // 800B672C
  W8(c->r[29]+0x00000147u,c->r[0]); // 800B6730
  {uint32_t ea=c->r[28]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6734
  {uint32_t ea=c->r[29]+0x00000148u; WF32(ea,c->f[0]);} // 800B6738
  {uint32_t ea=c->r[28]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B673C
  {uint32_t ea=c->r[29]+0x0000014Cu; WF32(ea,c->f[0]);} // 800B6740
  {uint32_t ea=c->r[28]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6744
  {uint32_t ea=c->r[29]+0x00000150u; WF32(ea,c->f[0]);} // 800B6748
  {uint32_t ea=c->r[28]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B674C
  {uint32_t ea=c->r[29]+0x00000154u; WF32(ea,c->f[0]);} // 800B6750
  {uint32_t ea=c->r[28]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6754
  {uint32_t ea=c->r[29]+0x00000158u; WF32(ea,c->f[0]);} // 800B6758
  {uint32_t ea=c->r[28]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B675C
  {uint32_t ea=c->r[29]+0x0000015Cu; WF32(ea,c->f[0]);} // 800B6760
  {uint32_t ea=c->r[28]+0x00000160u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6764
  {uint32_t ea=c->r[29]+0x00000160u; WF32(ea,c->f[0]);} // 800B6768
  c->r[0]=R8(c->r[28]+0x00000164u); // 800B676C
  W8(c->r[29]+0x00000164u,c->r[0]); // 800B6770
  {uint32_t ea=c->r[28]+0x00000168u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6774
  {uint32_t ea=c->r[29]+0x00000168u; WF32(ea,c->f[0]);} // 800B6778
  if (crb(c,2)) { goto L_800B67A0; } // 800B677C
  c->r[3]=R32(c->r[31]+0x0000016Cu); // 800B6780
  cmps(c,0,(int32_t)c->r[3],0); // 800B6784
  if (crb(c,1)) { goto L_800B6798; } // 800B6788
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B678C
  W32(c->r[31]+0x0000016Cu,c->r[0]); // 800B6790
  goto L_800B67A0; // 800B6794
L_800B6798:;
  c->r[0]=c->r[3]+0x00000001u; // 800B6798
  W32(c->r[31]+0x0000016Cu,c->r[0]); // 800B679C
L_800B67A0:;
  c->r[11]=c->r[1]+0x00000020u; // 800B67A0
  c->lr=0x800B67A8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B67A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B67A8
  c->lr=c->r[0]; // 800B67AC
  c->r[1]=c->r[1]+0x00000020u; // 800B67B0
  return; // 800B67B4
}

// fn_800B67B8
void f_800B67B8(Ctx* __restrict c) {
  trace_call(0x800B67B8u);
  c->r[3]=0u+0xF61F0000u; // 800B67B8
  c->r[0]=c->r[3]+0xFFFFCF72u; // 800B67BC
  c->r[0]=c->r[4]-c->r[0]; // 800B67C0
  c->r[0]=cntlz(c->r[0]); // 800B67C4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B67C8
  return; // 800B67CC
}

// fn_800B67D0
void f_800B67D0(Ctx* __restrict c) {
  trace_call(0x800B67D0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B67D0
  c->r[0]=c->lr; // 800B67D4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B67D8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800B67DC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800B67E0
  c->r[11]=c->r[1]+0x00000080u; // 800B67E4
  c->lr=0x800B67ECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B67E8
  c->f[31]=c->f[1]; // 800B67EC
  c->r[0]=0u+0x43300000u; // 800B67F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B67F4
  c->r[29]=c->r[3]|c->r[3]; // 800B67F8
  c->r[31]=c->r[4]|c->r[4]; // 800B67FC
  c->r[30]=c->r[5]|c->r[5]; // 800B6800
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B6804
  c->lr=0x800B680Cu; f_800B562C(c); // 800B6808
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B680C
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6810
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800B6814
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6818
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[0]); // 800B681C
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[4]=RF64(ea);} // 800B6820
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 800B6824
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6828
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B682C
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[2]);} // 800B6830
  {uint32_t ea=c->r[31]+0x00000110u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6834
  {uint32_t ea=c->r[30]+0x00000110u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6838
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B683C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6840
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6844
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[2]);} // 800B6848
  {uint32_t ea=c->r[31]+0x00000114u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B684C
  {uint32_t ea=c->r[30]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6850
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6854
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6858
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B685C
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[2]);} // 800B6860
  {uint32_t ea=c->r[31]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B6864
  {uint32_t ea=c->r[30]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6868
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B686C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6870
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6874
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[2]);} // 800B6878
  {uint32_t ea=c->r[31]+0x0000011Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B687C
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6880
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6884
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6888
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B688C
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[2]);} // 800B6890
  c->r[3]=R32(c->r[31]+0x0000012Cu); // 800B6894
  c->r[0]=R32(c->r[30]+0x0000012Cu); // 800B6898
  c->r[3]=c->r[3]^0x80000000u; // 800B689C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B68A0
  c->r[0]=c->r[0]^0x80000000u; // 800B68A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B68A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B68AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B68B0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B68B4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B68B8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B68BC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B68C0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B68C4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B68C8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800B68CC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800B68D0
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 800B68D4
  c->r[3]=R32(c->r[31]+0x00000130u); // 800B68D8
  c->r[0]=R32(c->r[30]+0x00000130u); // 800B68DC
  c->r[3]=c->r[3]^0x80000000u; // 800B68E0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B68E4
  c->r[0]=c->r[0]^0x80000000u; // 800B68E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B68EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B68F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B68F4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800B68F8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 800B68FC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6900
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6904
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6908
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B690C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800B6910
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6914
  W32(c->r[29]+0x00000130u,c->r[0]); // 800B6918
  c->r[3]=R8(c->r[31]+0x00000140u); // 800B691C
  c->r[0]=R8(c->r[30]+0x00000140u); // 800B6920
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B6924
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6928
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B692C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B6930
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B6934
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B6938
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B693C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6940
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6944
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B6948
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 800B694C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800B6950
  W8(c->r[29]+0x00000140u,c->r[0]); // 800B6954
  c->r[3]=R8(c->r[31]+0x00000141u); // 800B6958
  c->r[0]=R8(c->r[30]+0x00000141u); // 800B695C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B6960
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6964
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B6968
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B696C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B6970
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B6974
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6978
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B697C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6980
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B6984
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800B6988
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B698C
  W8(c->r[29]+0x00000141u,c->r[0]); // 800B6990
  c->r[3]=R8(c->r[31]+0x00000142u); // 800B6994
  c->r[0]=R8(c->r[30]+0x00000142u); // 800B6998
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B699C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B69A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B69A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B69A8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B69AC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B69B0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B69B4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B69B8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B69BC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B69C0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800B69C4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800B69C8
  W8(c->r[29]+0x00000142u,c->r[0]); // 800B69CC
  c->r[3]=R8(c->r[31]+0x00000143u); // 800B69D0
  c->r[0]=R8(c->r[30]+0x00000143u); // 800B69D4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B69D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B69DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B69E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B69E4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B69E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B69EC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B69F0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B69F4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B69F8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B69FC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 800B6A00
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B6A04
  W8(c->r[29]+0x00000143u,c->r[0]); // 800B6A08
  c->r[3]=R8(c->r[31]+0x00000144u); // 800B6A0C
  c->r[0]=R8(c->r[30]+0x00000144u); // 800B6A10
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B6A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6A18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B6A1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B6A20
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B6A24
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B6A28
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6A2C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6A30
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6A34
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B6A38
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 800B6A3C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800B6A40
  W8(c->r[29]+0x00000144u,c->r[0]); // 800B6A44
  c->r[3]=R8(c->r[31]+0x00000145u); // 800B6A48
  c->r[0]=R8(c->r[30]+0x00000145u); // 800B6A4C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B6A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6A54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B6A58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B6A5C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B6A60
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B6A64
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6A68
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6A6C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6A70
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B6A74
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 800B6A78
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B6A7C
  W8(c->r[29]+0x00000145u,c->r[0]); // 800B6A80
  c->r[3]=R8(c->r[31]+0x00000146u); // 800B6A84
  c->r[0]=R8(c->r[30]+0x00000146u); // 800B6A88
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B6A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6A90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B6A94
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B6A98
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B6A9C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800B6AA0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B6AA4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800B6AA8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800B6AAC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800B6AB0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 800B6AB4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800B6AB8
  W8(c->r[29]+0x00000146u,c->r[0]); // 800B6ABC
  c->r[3]=R8(c->r[31]+0x00000147u); // 800B6AC0
  c->r[0]=R8(c->r[30]+0x00000147u); // 800B6AC4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800B6AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6ACC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 800B6AD0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800B6AD4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 800B6AD8
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800B6ADC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 800B6AE0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6AE4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6AE8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800B6AEC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 800B6AF0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B6AF4
  W8(c->r[29]+0x00000147u,c->r[0]); // 800B6AF8
  {uint32_t ea=c->r[31]+0x00000148u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6AFC
  {uint32_t ea=c->r[30]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6B00
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B6B04
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6B08
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6B0C
  {uint32_t ea=c->r[29]+0x00000148u; WF32(ea,c->f[0]);} // 800B6B10
  {uint32_t ea=c->r[31]+0x0000014Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6B14
  {uint32_t ea=c->r[30]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6B18
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B6B1C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6B20
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6B24
  {uint32_t ea=c->r[29]+0x0000014Cu; WF32(ea,c->f[0]);} // 800B6B28
  {uint32_t ea=c->r[31]+0x00000150u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6B2C
  {uint32_t ea=c->r[30]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6B30
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B6B34
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6B38
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6B3C
  {uint32_t ea=c->r[29]+0x00000150u; WF32(ea,c->f[0]);} // 800B6B40
  {uint32_t ea=c->r[31]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6B44
  {uint32_t ea=c->r[30]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6B48
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B6B4C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6B50
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6B54
  {uint32_t ea=c->r[29]+0x00000154u; WF32(ea,c->f[0]);} // 800B6B58
  {uint32_t ea=c->r[31]+0x00000158u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6B5C
  {uint32_t ea=c->r[30]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6B60
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B6B64
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6B68
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6B6C
  {uint32_t ea=c->r[29]+0x00000158u; WF32(ea,c->f[0]);} // 800B6B70
  {uint32_t ea=c->r[31]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6B74
  {uint32_t ea=c->r[30]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6B78
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B6B7C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6B80
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6B84
  {uint32_t ea=c->r[29]+0x0000015Cu; WF32(ea,c->f[0]);} // 800B6B88
  {uint32_t ea=c->r[31]+0x00000160u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6B8C
  {uint32_t ea=c->r[30]+0x00000160u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6B90
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800B6B94
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6B98
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B6B9C
  {uint32_t ea=c->r[29]+0x00000160u; WF32(ea,c->f[0]);} // 800B6BA0
  {uint32_t ea=c->r[31]+0x00000168u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B6BA4
  {uint32_t ea=c->r[30]+0x00000168u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6BA8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800B6BAC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800B6BB0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B6BB4
  {uint32_t ea=c->r[29]+0x00000168u; WF32(ea,c->f[0]);} // 800B6BB8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800B6BBC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800B6BC0
  c->r[11]=c->r[1]+0x00000080u; // 800B6BC4
  c->lr=0x800B6BCCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B6BC8
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B6BCC
  c->lr=c->r[0]; // 800B6BD0
  c->r[1]=c->r[1]+0x00000090u; // 800B6BD4
  return; // 800B6BD8
}

// fn_800B6BDC
void f_800B6BDC(Ctx* __restrict c) {
  trace_call(0x800B6BDCu);
  c->r[3]=0u+0x00000170u; // 800B6BDC
  return; // 800B6BE0
}

// fn_800B6BE4
void f_800B6BE4(Ctx* __restrict c) {
  trace_call(0x800B6BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6BE4
  c->r[0]=c->lr; // 800B6BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6BF0
  c->r[31]=c->r[3]|c->r[3]; // 800B6BF4
  c->lr=0x800B6BFCu; f_800B6098(c); // 800B6BF8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B6BFC
  c->r[3]=0u+0x80420000u; // 800B6C00
  c->r[3]=c->r[3]+0xFFFFAC94u; // 800B6C04
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B6C08
  c->r[0]=c->r[0]|0x80000000u; // 800B6C0C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B6C10
  c->r[3]=c->r[31]|c->r[31]; // 800B6C14
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B6C18
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B6C1C
  c->ctr=c->r[12]; // 800B6C20
  if (true) { c->lr=0x800B6C28u; dispatch(c,c->ctr); } // 800B6C24
  c->r[3]=c->r[31]|c->r[31]; // 800B6C28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6C30
  c->lr=c->r[0]; // 800B6C34
  c->r[1]=c->r[1]+0x00000010u; // 800B6C38
  return; // 800B6C3C
}

// fn_800B6C40
void f_800B6C40(Ctx* __restrict c) {
  trace_call(0x800B6C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6C40
  c->r[0]=c->lr; // 800B6C44
  cmps(c,0,(int32_t)c->r[3],0); // 800B6C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6C4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6C50
  c->r[30]=c->r[3]|c->r[3]; // 800B6C54
  c->r[31]=c->r[4]|c->r[4]; // 800B6C58
  if (crb(c,2)) { goto L_800B6C7C; } // 800B6C5C
  if (crb(c,2)) { goto L_800B6C6C; } // 800B6C60
  c->r[4]=0u+0x00000000u; // 800B6C64
  c->lr=0x800B6C6Cu; f_802B1180(c); // 800B6C68
L_800B6C6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B6C6C
  if (!crb(c,1)) { goto L_800B6C7C; } // 800B6C70
  c->r[3]=c->r[30]|c->r[30]; // 800B6C74
  c->lr=0x800B6C7Cu; f_80244DC0(c); // 800B6C78
L_800B6C7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B6C7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6C80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6C84
  c->lr=c->r[0]; // 800B6C88
  c->r[1]=c->r[1]+0x00000010u; // 800B6C8C
  return; // 800B6C90
}

// fn_800B6C94
void f_800B6C94(Ctx* __restrict c) {
  trace_call(0x800B6C94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6C94
  c->r[0]=c->lr; // 800B6C98
  c->r[3]=0u+0x00000170u; // 800B6C9C
  c->r[4]=c->r[13]+0xFFFFAA9Fu; // 800B6CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6CA4
  c->r[5]=0u+0x00000000u; // 800B6CA8
  c->r[6]=0u+0x00001001u; // 800B6CAC
  c->lr=0x800B6CB4u; f_80244D20(c); // 800B6CB0
  cmps(c,0,(int32_t)c->r[3],0); // 800B6CB4
  if (crb(c,2)) { goto L_800B6CC0; } // 800B6CB8
  c->lr=0x800B6CC0u; f_800B6BE4(c); // 800B6CBC
L_800B6CC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6CC0
  c->lr=c->r[0]; // 800B6CC4
  c->r[1]=c->r[1]+0x00000010u; // 800B6CC8
  return; // 800B6CCC
}

// fn_800B6CD0
void f_800B6CD0(Ctx* __restrict c) {
  trace_call(0x800B6CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6CD0
  c->r[0]=c->lr; // 800B6CD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6CD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6CDC
  c->r[31]=c->r[3]|c->r[3]; // 800B6CE0
  c->lr=0x800B6CE8u; f_80244520(c); // 800B6CE4
  c->r[7]=c->r[3]|c->r[3]; // 800B6CE8
  c->r[9]=c->r[31]|c->r[31]; // 800B6CEC
  c->r[3]=0u+0x00000170u; // 800B6CF0
  c->r[4]=c->r[13]+0xFFFFAAA4u; // 800B6CF4
  c->r[5]=0u+0x00000000u; // 800B6CF8
  c->r[6]=0u+0x00002001u; // 800B6CFC
  c->r[8]=0u+0x00000000u; // 800B6D00
  c->lr=0x800B6D08u; f_80242DF0(c); // 800B6D04
  c->r[4]=c->r[3]|c->r[3]; // 800B6D08
  c->r[3]=0u+0x00000170u; // 800B6D0C
  c->r[5]=c->r[13]+0xFFFFAAA9u; // 800B6D10
  c->r[6]=0u+0x00000000u; // 800B6D14
  c->r[7]=0u+0x00001001u; // 800B6D18
  c->lr=0x800B6D20u; f_80244DB0(c); // 800B6D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6D20
  if (crb(c,2)) { goto L_800B6D2C; } // 800B6D24
  c->lr=0x800B6D2Cu; f_800B6BE4(c); // 800B6D28
L_800B6D2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6D2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6D30
  c->lr=c->r[0]; // 800B6D34
  c->r[1]=c->r[1]+0x00000010u; // 800B6D38
  return; // 800B6D3C
}

// fn_800B6D40
void f_800B6D40(Ctx* __restrict c) {
  trace_call(0x800B6D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6D40
  c->r[0]=c->lr; // 800B6D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6D4C
  c->r[31]=c->r[3]|c->r[3]; // 800B6D50
  c->lr=0x800B6D58u; f_802B1168(c); // 800B6D54
  c->r[8]=0u+0x80420000u; // 800B6D58
  c->r[6]=0u+0x80410000u; // 800B6D5C
  c->r[7]=0u+0x00000000u; // 800B6D60
  c->r[5]=0u+0x6A450000u; // 800B6D64
  c->r[4]=0u+0xB5B50000u; // 800B6D68
  c->r[3]=0u+0xF4160000u; // 800B6D6C
  c->r[0]=c->r[3]+0x00001EEEu; // 800B6D70
  c->r[8]=c->r[8]+0xFFFFAC58u; // 800B6D74
  c->r[6]=c->r[6]+0xFFFFCAE2u; // 800B6D78
  c->r[5]=c->r[5]+0x00006795u; // 800B6D7C
  c->r[4]=c->r[4]+0xFFFFBFFDu; // 800B6D80
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B6D84
  c->r[3]=c->r[31]|c->r[31]; // 800B6D88
  W32(c->r[31]+0x00000068u,c->r[7]); // 800B6D8C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800B6D90
  W32(c->r[31]+0x00000008u,c->r[7]); // 800B6D94
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B6D98
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B6D9C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B6DA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6DA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6DA8
  c->lr=c->r[0]; // 800B6DAC
  c->r[1]=c->r[1]+0x00000010u; // 800B6DB0
  return; // 800B6DB4
}

// fn_800B6DB8
void f_800B6DB8(Ctx* __restrict c) {
  trace_call(0x800B6DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6DB8
  c->r[0]=c->lr; // 800B6DBC
  cmps(c,0,(int32_t)c->r[4],0); // 800B6DC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6DC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6DC8
  c->r[30]=c->r[3]|c->r[3]; // 800B6DCC
  c->r[31]=c->r[4]|c->r[4]; // 800B6DD0
  if (crb(c,2)) { goto L_800B6E28; } // 800B6DD4
  c->r[3]=c->r[31]|c->r[31]; // 800B6DD8
  c->lr=0x800B6DE0u; f_80244520(c); // 800B6DDC
  c->r[7]=c->r[3]|c->r[3]; // 800B6DE0
  c->r[9]=c->r[31]|c->r[31]; // 800B6DE4
  c->r[3]=0u+0x0000006Cu; // 800B6DE8
  c->r[4]=c->r[13]+0xFFFFAAAEu; // 800B6DEC
  c->r[5]=0u+0x00000000u; // 800B6DF0
  c->r[6]=0u+0x00002001u; // 800B6DF4
  c->r[8]=0u+0x00000000u; // 800B6DF8
  c->lr=0x800B6E00u; f_80242DF0(c); // 800B6DFC
  c->r[4]=c->r[3]|c->r[3]; // 800B6E00
  c->r[3]=0u+0x0000006Cu; // 800B6E04
  c->r[5]=c->r[13]+0xFFFFAAB3u; // 800B6E08
  c->r[6]=0u+0x00000000u; // 800B6E0C
  c->r[7]=0u+0x00001001u; // 800B6E10
  c->lr=0x800B6E18u; f_80244DB0(c); // 800B6E14
  cmps(c,0,(int32_t)c->r[3],0); // 800B6E18
  if (crb(c,2)) { goto L_800B6E48; } // 800B6E1C
  c->lr=0x800B6E24u; f_800B6D40(c); // 800B6E20
  goto L_800B6E48; // 800B6E24
L_800B6E28:;
  c->r[3]=0u+0x0000006Cu; // 800B6E28
  c->r[4]=c->r[13]+0xFFFFAAB8u; // 800B6E2C
  c->r[5]=0u+0x00000000u; // 800B6E30
  c->r[6]=0u+0x00001001u; // 800B6E34
  c->lr=0x800B6E3Cu; f_80244D20(c); // 800B6E38
  cmps(c,0,(int32_t)c->r[3],0); // 800B6E3C
  if (crb(c,2)) { goto L_800B6E48; } // 800B6E40
  c->lr=0x800B6E48u; f_800B6D40(c); // 800B6E44
L_800B6E48:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B6E48
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B6E4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6E50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6E54
  c->lr=c->r[0]; // 800B6E58
  c->r[1]=c->r[1]+0x00000010u; // 800B6E5C
  return; // 800B6E60
}

// fn_800B6E64
void f_800B6E64(Ctx* __restrict c) {
  trace_call(0x800B6E64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6E64
  c->r[0]=c->lr; // 800B6E68
  c->r[5]=0u+0x00000000u; // 800B6E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6E70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6E74
  c->r[30]=c->r[3]|c->r[3]; // 800B6E78
  c->r[31]=c->r[4]|c->r[4]; // 800B6E7C
  c->r[3]=c->r[31]|c->r[31]; // 800B6E80
  c->r[4]=c->r[30]+0x0000001Cu; // 800B6E84
  c->lr=0x800B6E8Cu; f_8030B7F0(c); // 800B6E88
  c->r[3]=c->r[31]|c->r[31]; // 800B6E8C
  c->r[4]=0u+0x00000000u; // 800B6E90
  c->lr=0x800B6E98u; f_8030BE30(c); // 800B6E94
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800B6E98
  c->r[0]=0u+0x00000000u; // 800B6E9C
  c->r[3]=c->r[31]|c->r[31]; // 800B6EA0
  W32(c->r[30]+0x00000060u,c->r[0]); // 800B6EA4
  c->lr=0x800B6EACu; f_8030BD1C(c); // 800B6EA8
  W32(c->r[30]+0x00000064u,c->r[3]); // 800B6EAC
  c->r[3]=0u+0x00000000u; // 800B6EB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6EB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6EB8
  c->lr=c->r[0]; // 800B6EBC
  c->r[1]=c->r[1]+0x00000010u; // 800B6EC0
  return; // 800B6EC4
}

// fn_800B6EC8
void f_800B6EC8(Ctx* __restrict c) {
  trace_call(0x800B6EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6EC8
  c->r[0]=c->lr; // 800B6ECC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B6ED0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6ED4
  c->r[27]=c->r[3]|c->r[3]; // 800B6ED8
  c->r[28]=c->r[4]|c->r[4]; // 800B6EDC
  c->r[29]=c->r[5]|c->r[5]; // 800B6EE0
  c->r[30]=c->r[6]|c->r[6]; // 800B6EE4
  c->r[7]=R32(c->r[3]+0x00000068u); // 800B6EE8
  cmps(c,0,(int32_t)c->r[7],0); // 800B6EEC
  if (!crb(c,0)) { goto L_800B6F00; } // 800B6EF0
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800B6EF4
  W32(c->r[3]+0x00000068u,c->r[0]); // 800B6EF8
  goto L_800B6F10; // 800B6EFC
L_800B6F00:;
  c->r[0]=c->r[7]+0x00000001u; // 800B6F00
  W32(c->r[3]+0x00000068u,c->r[0]); // 800B6F04
  cmps(c,0,(int32_t)c->r[0],1); // 800B6F08
  if (crb(c,1)) { goto L_800B6FD0; } // 800B6F0C
L_800B6F10:;
  c->r[3]=c->r[27]|c->r[27]; // 800B6F10
  c->r[4]=c->r[28]|c->r[28]; // 800B6F14
  c->r[5]=c->r[29]|c->r[29]; // 800B6F18
  c->r[6]=c->r[30]|c->r[30]; // 800B6F1C
  c->lr=0x800B6F24u; f_802B11C0(c); // 800B6F20
  c->r[4]=R32(c->r[27]+0x0000005Cu); // 800B6F24
  cmps(c,0,(int32_t)c->r[4],0); // 800B6F28
  if (crb(c,2)) { goto L_800B6FD0; } // 800B6F2C
  c->r[0]=0u+0x00000001u; // 800B6F30
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B6F34
  c->r[6]=c->r[28]|c->r[28]; // 800B6F38
  c->r[7]=c->r[29]|c->r[29]; // 800B6F3C
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800B6F40
  c->r[8]=c->r[30]|c->r[30]; // 800B6F44
  c->r[9]=R32(c->r[27]+0x00000064u); // 800B6F48
  c->r[5]=0u+0x00000000u; // 800B6F4C
  c->r[10]=0u+0x00000001u; // 800B6F50
  c->lr=0x800B6F58u; f_80281A84(c); // 800B6F54
  cmps(c,0,(int32_t)c->r[3],0); // 800B6F58
  W32(c->r[27]+0x00000060u,c->r[3]); // 800B6F5C
  if (crb(c,2)) { goto L_800B6F6C; } // 800B6F60
  c->lr=0x800B6F68u; f_80295B6C(c); // 800B6F64
  goto L_800B6FD0; // 800B6F68
L_800B6F6C:;
  c->r[3]=R32(c->r[27]+0x00000064u); // 800B6F6C
  c->r[4]=c->r[30]|c->r[30]; // 800B6F70
  c->r[5]=c->r[29]|c->r[29]; // 800B6F74
  c->lr=0x800B6F7Cu; f_802C0F98(c); // 800B6F78
  c->r[31]=c->r[3]|c->r[3]; // 800B6F7C
  c->r[3]=0u+0x00000044u; // 800B6F80
  c->r[4]=c->r[13]+0xFFFFAABDu; // 800B6F84
  c->r[5]=0u+0x00000000u; // 800B6F88
  c->r[6]=0u+0x00001001u; // 800B6F8C
  c->lr=0x800B6F94u; f_80244D20(c); // 800B6F90
  cmps(c,0,(int32_t)c->r[3],0); // 800B6F94
  if (crb(c,2)) { goto L_800B6FAC; } // 800B6F98
  c->r[5]=R32(c->r[27]+0x0000005Cu); // 800B6F9C
  c->r[4]=c->r[31]|c->r[31]; // 800B6FA0
  c->r[6]=0u+0x00000000u; // 800B6FA4
  c->lr=0x800B6FACu; f_8029316C(c); // 800B6FA8
L_800B6FAC:;
  W32(c->r[27]+0x00000060u,c->r[3]); // 800B6FAC
  c->r[4]=c->r[28]|c->r[28]; // 800B6FB0
  c->r[7]=R32(c->r[27]+0x00000064u); // 800B6FB4
  c->r[5]=c->r[29]|c->r[29]; // 800B6FB8
  c->r[6]=c->r[30]|c->r[30]; // 800B6FBC
  c->r[8]=0u+0x00000001u; // 800B6FC0
  c->r[9]=0u+0x00000000u; // 800B6FC4
  c->lr=0x800B6FCCu; f_8027FFF4(c); // 800B6FC8
  W32(c->r[27]+0x00000060u,c->r[3]); // 800B6FCC
L_800B6FD0:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6FD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B6FD4
  c->lr=c->r[0]; // 800B6FD8
  c->r[1]=c->r[1]+0x00000030u; // 800B6FDC
  return; // 800B6FE0
}

// fn_800B6FE4
void f_800B6FE4(Ctx* __restrict c) {
  trace_call(0x800B6FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6FE4
  c->r[0]=c->lr; // 800B6FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6FEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6FF0
  c->r[31]=c->r[3]|c->r[3]; // 800B6FF4
  c->r[0]=R32(c->r[3]+0x00000068u); // 800B6FF8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800B6FFC
  W32(c->r[3]+0x00000068u,c->r[0]); // 800B7000
  if (!crb(c,2)) { goto L_800B7024; } // 800B7004
  c->lr=0x800B700Cu; f_802B11D0(c); // 800B7008
  c->r[3]=R32(c->r[31]+0x00000060u); // 800B700C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7010
  if (crb(c,2)) { goto L_800B7024; } // 800B7014
  c->lr=0x800B701Cu; f_80295B7C(c); // 800B7018
  c->r[0]=0u+0x00000000u; // 800B701C
  W32(c->r[31]+0x00000060u,c->r[0]); // 800B7020
L_800B7024:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7024
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7028
  c->lr=c->r[0]; // 800B702C
  c->r[1]=c->r[1]+0x00000010u; // 800B7030
  return; // 800B7034
}

// fn_800B7038
void f_800B7038(Ctx* __restrict c) {
  trace_call(0x800B7038u);
  return; // 800B7038
}

// fn_800B703C
void f_800B703C(Ctx* __restrict c) {
  trace_call(0x800B703Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B703C
  c->r[0]=c->lr; // 800B7040
  c->r[4]=c->r[13]+0xFFFFAAC2u; // 800B7044
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B704C
  c->r[31]=c->r[3]|c->r[3]; // 800B7050
  c->r[3]=c->r[3]+0x0000001Cu; // 800B7054
  c->lr=0x800B705Cu; f_803A6F10(c); // 800B7058
  c->r[3]=0u+0x00000000u; // 800B705C
  c->r[0]=0u+0x00000004u; // 800B7060
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 800B7064
  W32(c->r[31]+0x00000060u,c->r[3]); // 800B7068
  W32(c->r[31]+0x00000064u,c->r[0]); // 800B706C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7074
  c->lr=c->r[0]; // 800B7078
  c->r[1]=c->r[1]+0x00000010u; // 800B707C
  return; // 800B7080
}

// fn_800B7084
void f_800B7084(Ctx* __restrict c) {
  trace_call(0x800B7084u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7084
  c->r[0]=c->lr; // 800B7088
  cmps(c,0,(int32_t)c->r[5],0); // 800B708C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7090
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B7094
  c->r[28]=c->r[3]|c->r[3]; // 800B7098
  c->r[29]=c->r[4]|c->r[4]; // 800B709C
  c->r[30]=c->r[7]|c->r[7]; // 800B70A0
  if (crb(c,2)) { goto L_800B70B0; } // 800B70A4
  c->r[31]=c->r[5]|c->r[5]; // 800B70A8
  goto L_800B70B4; // 800B70AC
L_800B70B0:;
  c->r[31]=c->r[28]|c->r[28]; // 800B70B0
L_800B70B4:;
  c->r[3]=c->r[31]+0x0000001Cu; // 800B70B4
  c->r[4]=c->r[4]+0x0000001Cu; // 800B70B8
  c->lr=0x800B70C0u; f_803A6F10(c); // 800B70BC
  c->r[3]=c->r[31]+0x0000005Cu; // 800B70C0
  c->r[4]=c->r[29]+0x0000005Cu; // 800B70C4
  c->lr=0x800B70CCu; f_8003BDD0(c); // 800B70C8
  cmps(c,0,(int32_t)c->r[30],0); // 800B70CC
  if (crb(c,2)) { goto L_800B70F4; } // 800B70D0
  c->r[3]=R32(c->r[28]+0x00000068u); // 800B70D4
  cmps(c,0,(int32_t)c->r[3],0); // 800B70D8
  if (crb(c,1)) { goto L_800B70EC; } // 800B70DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B70E0
  W32(c->r[28]+0x00000068u,c->r[0]); // 800B70E4
  goto L_800B70F4; // 800B70E8
L_800B70EC:;
  c->r[0]=c->r[3]+0x00000001u; // 800B70EC
  W32(c->r[28]+0x00000068u,c->r[0]); // 800B70F0
L_800B70F4:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B70F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B70F8
  c->lr=c->r[0]; // 800B70FC
  c->r[1]=c->r[1]+0x00000020u; // 800B7100
  return; // 800B7104
}

// fn_800B7108
void f_800B7108(Ctx* __restrict c) {
  trace_call(0x800B7108u);
  c->r[3]=0u+0x00000000u; // 800B7108
  return; // 800B710C
}

// fn_800B7110
void f_800B7110(Ctx* __restrict c) {
  trace_call(0x800B7110u);
  c->r[3]=0u+0x0000006Cu; // 800B7110
  return; // 800B7114
}

// fn_800B7118
void f_800B7118(Ctx* __restrict c) {
  trace_call(0x800B7118u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7118
  c->r[0]=c->lr; // 800B711C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7120
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B7124
  c->r[31]=c->r[3]|c->r[3]; // 800B7128
  c->lr=0x800B7130u; f_800B6D40(c); // 800B712C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800B7130
  c->r[3]=0u+0x80420000u; // 800B7134
  c->r[3]=c->r[3]+0xFFFFAC18u; // 800B7138
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B713C
  c->r[0]=c->r[0]|0x80000000u; // 800B7140
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B7144
  c->r[3]=c->r[31]|c->r[31]; // 800B7148
  c->r[12]=R32(c->r[31]+0x00000018u); // 800B714C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B7150
  c->ctr=c->r[12]; // 800B7154
  if (true) { c->lr=0x800B715Cu; dispatch(c,c->ctr); } // 800B7158
  c->r[3]=c->r[31]|c->r[31]; // 800B715C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7160
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7164
  c->lr=c->r[0]; // 800B7168
  c->r[1]=c->r[1]+0x00000010u; // 800B716C
  return; // 800B7170
}

// fn_800B7174
void f_800B7174(Ctx* __restrict c) {
  trace_call(0x800B7174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7174
  c->r[0]=c->lr; // 800B7178
  cmps(c,0,(int32_t)c->r[3],0); // 800B717C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7180
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B7184
  c->r[30]=c->r[3]|c->r[3]; // 800B7188
  c->r[31]=c->r[4]|c->r[4]; // 800B718C
  if (crb(c,2)) { goto L_800B71AC; } // 800B7190
  c->r[4]=0u+0x00000000u; // 800B7194
  c->lr=0x800B719Cu; f_802B1180(c); // 800B7198
  cmps(c,0,(int32_t)c->r[31],0); // 800B719C
  if (!crb(c,1)) { goto L_800B71AC; } // 800B71A0
  c->r[3]=c->r[30]|c->r[30]; // 800B71A4
  c->lr=0x800B71ACu; f_80244DC0(c); // 800B71A8
L_800B71AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800B71AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B71B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B71B4
  c->lr=c->r[0]; // 800B71B8
  c->r[1]=c->r[1]+0x00000010u; // 800B71BC
  return; // 800B71C0
}

// fn_800B71C4
void f_800B71C4(Ctx* __restrict c) {
  trace_call(0x800B71C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B71C4
  c->r[0]=c->lr; // 800B71C8
  c->r[3]=0u+0x0000006Cu; // 800B71CC
  c->r[4]=c->r[13]+0xFFFFAAC3u; // 800B71D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B71D4
  c->r[5]=0u+0x00000000u; // 800B71D8
  c->r[6]=0u+0x00001001u; // 800B71DC
  c->lr=0x800B71E4u; f_80244D20(c); // 800B71E0
  cmps(c,0,(int32_t)c->r[3],0); // 800B71E4
  if (crb(c,2)) { goto L_800B71F0; } // 800B71E8
  c->lr=0x800B71F0u; f_800B7118(c); // 800B71EC
L_800B71F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B71F0
  c->lr=c->r[0]; // 800B71F4
  c->r[1]=c->r[1]+0x00000010u; // 800B71F8
  return; // 800B71FC
}

// fn_800B7200
void f_800B7200(Ctx* __restrict c) {
  trace_call(0x800B7200u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7200
  c->r[0]=c->lr; // 800B7204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B720C
  c->r[31]=c->r[3]|c->r[3]; // 800B7210
  c->lr=0x800B7218u; f_80244520(c); // 800B7214
  c->r[7]=c->r[3]|c->r[3]; // 800B7218
  c->r[9]=c->r[31]|c->r[31]; // 800B721C
  c->r[3]=0u+0x0000006Cu; // 800B7220
  c->r[4]=c->r[13]+0xFFFFAAC8u; // 800B7224
  c->r[5]=0u+0x00000000u; // 800B7228
  c->r[6]=0u+0x00002001u; // 800B722C
  c->r[8]=0u+0x00000000u; // 800B7230
  c->lr=0x800B7238u; f_80242DF0(c); // 800B7234
  c->r[4]=c->r[3]|c->r[3]; // 800B7238
  c->r[3]=0u+0x0000006Cu; // 800B723C
  c->r[5]=c->r[13]+0xFFFFAACDu; // 800B7240
  c->r[6]=0u+0x00000000u; // 800B7244
  c->r[7]=0u+0x00001001u; // 800B7248
  c->lr=0x800B7250u; f_80244DB0(c); // 800B724C
  cmps(c,0,(int32_t)c->r[3],0); // 800B7250
  if (crb(c,2)) { goto L_800B725C; } // 800B7254
  c->lr=0x800B725Cu; f_800B7118(c); // 800B7258
L_800B725C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B725C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B7260
  c->lr=c->r[0]; // 800B7264
  c->r[1]=c->r[1]+0x00000010u; // 800B7268
  return; // 800B726C
}

// fn_800B7270
void f_800B7270(Ctx* __restrict c) {
  trace_call(0x800B7270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7270
  c->r[0]=c->lr; // 800B7274
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B727C
  c->r[31]=c->r[3]|c->r[3]; // 800B7280
  c->lr=0x800B7288u; f_802B1168(c); // 800B7284
  c->r[8]=0u+0x80420000u; // 800B7288
  c->r[7]=0u+0x80410000u; // 800B728C
  c->r[5]=0u+0x87CC0000u; // 800B7290
  c->r[4]=0u+0x7B690000u; // 800B7294
  c->r[3]=0u+0x07F50000u; // 800B7298
  c->r[8]=c->r[8]+0xFFFFABDCu; // 800B729C
  c->r[0]=c->r[3]+0x00001902u; // 800B72A0
  c->r[7]=c->r[7]+0xFFFFCAF0u; // 800B72A4
  c->r[5]=c->r[5]+0x0000467Du; // 800B72A8
  c->r[4]=c->r[4]+0x0000596Cu; // 800B72AC
  c->r[6]=0u+0x00000000u; // 800B72B0
  W32(c->r[31]+0x00000018u,c->r[8]); // 800B72B4
  c->r[3]=c->r[31]|c->r[31]; // 800B72B8
  W32(c->r[31]+0x00000000u,c->r[7]); // 800B72BC
  W32(c->r[31]+0x00000008u,c->r[6]); // 800B72C0
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B72C4
  W32(c->r[31]+0x00000010u,c->r[4]); // 800B72C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800B72CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B72D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B72D4
  c->lr=c->r[0]; // 800B72D8
  c->r[1]=c->r[1]+0x00000010u; // 800B72DC
  return; // 800B72E0
}

// fn_800B72E4
void f_800B72E4(Ctx* __restrict c) {
  trace_call(0x800B72E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B72E4
  c->r[0]=c->lr; // 800B72E8
  cmps(c,0,(int32_t)c->r[4],0); // 800B72EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B72F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B72F4
  c->r[30]=c->r[3]|c->r[3]; // 800B72F8
  c->r[31]=c->r[4]|c->r[4]; // 800B72FC
  if (crb(c,2)) { goto L_800B7354; } // 800B7300
  c->r[3]=c->r[31]|c->r[31]; // 800B7304
  c->lr=0x800B730Cu; f_80244520(c); // 800B7308
  c->r[7]=c->r[3]|c->r[3]; // 800B730C
  c->r[9]=c->r[31]|c->r[31]; // 800B7310
  c->r[3]=0u+0x00000024u; // 800B7314
  c->r[4]=c->r[13]+0xFFFFAAD2u; // 800B7318
  c->r[5]=0u+0x00000000u; // 800B731C
  c->r[6]=0u+0x00002001u; // 800B7320
  c->r[8]=0u+0x00000000u; // 800B7324
  c->lr=0x800B732Cu; f_80242DF0(c); // 800B7328
  c->r[4]=c->r[3]|c->r[3]; // 800B732C
  c->r[3]=0u+0x00000024u; // 800B7330
  c->r[5]=c->r[13]+0xFFFFAAD7u; // 800B7334
  c->r[6]=0u+0x00000000u; // 800B7338
  c->r[7]=0u+0x00001001u; // 800B733C
  c->lr=0x800B7344u; f_80244DB0(c); // 800B7340
  cmps(c,0,(int32_t)c->r[3],0); // 800B7344
  if (crb(c,2)) { goto L_800B7374; } // 800B7348
  c->lr=0x800B7350u; f_800B7270(c); // 800B734C
  goto L_800B7374; // 800B7350
L_800B7354:;
  c->r[3]=0u+0x00000024u; // 800B7354
  c->r[4]=c->r[13]+0xFFFFAADCu; // 800B7358
  c->r[5]=0u+0x00000000u; // 800B735C
  c->r[6]=0u+0x00001001u; // 800B7360
  c->lr=0x800B7368u; f_80244D20(c); // 800B7364
  cmps(c,0,(int32_t)c->r[3],0); // 800B7368
  if (crb(c,2)) { goto L_800B7374; } // 800B736C
  c->lr=0x800B7374u; f_800B7270(c); // 800B7370
L_800B7374:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800B7374
  W16(c->r[3]+0x00000014u,c->r[0]); // 800B7378
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B737C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B7380
  c->lr=c->r[0]; // 800B7384
  c->r[1]=c->r[1]+0x00000010u; // 800B7388
  return; // 800B738C
}

// fn_800B7390
void f_800B7390(Ctx* __restrict c) {
  trace_call(0x800B7390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7390
  c->r[0]=c->lr; // 800B7394
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B7398
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B739C
  c->r[31]=c->r[4]|c->r[4]; // 800B73A0
  c->r[30]=c->r[3]|c->r[3]; // 800B73A4
  c->r[3]=c->r[31]|c->r[31]; // 800B73A8
  c->lr=0x800B73B0u; f_8030C0A0(c); // 800B73AC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B73B0
  c->r[3]=c->r[31]|c->r[31]; // 800B73B4
  c->lr=0x800B73BCu; f_8030C0A0(c); // 800B73B8
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 800B73BC
  c->r[3]=0u+0x00000000u; // 800B73C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B73C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B73C8
  c->lr=c->r[0]; // 800B73CC
  c->r[1]=c->r[1]+0x00000010u; // 800B73D0
  return; // 800B73D4
}

// fn_800B73D8
void f_800B73D8(Ctx* __restrict c) {
  trace_call(0x800B73D8u);
  return; // 800B73D8
}

// fn_800B73DC
void f_800B73DC(Ctx* __restrict c) {
  trace_call(0x800B73DCu);
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B73DC
  {uint32_t ea=c->r[2]+0xFFFF87C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B73E0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B73E4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800B73E8
  return; // 800B73EC
}

// fn_800B73F0
void f_800B73F0(Ctx* __restrict c) {
  trace_call(0x800B73F0u);
  cmps(c,0,(int32_t)c->r[5],0); // 800B73F0
  if (crb(c,2)) { goto L_800B73FC; } // 800B73F4
  goto L_800B7400; // 800B73F8
L_800B73FC:;
  c->r[5]=c->r[3]|c->r[3]; // 800B73FC
L_800B7400:;
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7400
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B7404
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7408
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[0]);} // 800B740C
  return; // 800B7410
}

// fn_800B7414
void f_800B7414(Ctx* __restrict c) {
  trace_call(0x800B7414u);
  c->r[3]=0u+0x00000000u; // 800B7414
  return; // 800B7418
}

// fn_800B741C
void f_800B741C(Ctx* __restrict c) {
  trace_call(0x800B741Cu);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B741C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7420
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 800B7424
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7428
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B742C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800B7430
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B7434
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B7438
  {uint32_t ea=c->r[4]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B743C
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7440
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800B7444
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B7448
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800B744C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800B7450
  return; // 800B7454
}

