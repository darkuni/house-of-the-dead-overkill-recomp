#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800E34F8
void f_800E34F8(Ctx* __restrict c) {
  trace_call(0x800E34F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E34F8
  c->r[0]=c->lr; // 800E34FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3504
  c->r[31]=c->r[3]|c->r[3]; // 800E3508
  c->lr=0x800E3510u; f_800D7120(c); // 800E350C
  c->r[3]=0u+0x80410000u; // 800E3510
  c->r[0]=0u+0x00000000u; // 800E3514
  c->r[3]=c->r[3]+0x000067A8u; // 800E3518
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E351C
  c->r[3]=c->r[31]|c->r[31]; // 800E3520
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3528
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E352C
  c->lr=c->r[0]; // 800E3530
  c->r[1]=c->r[1]+0x00000010u; // 800E3534
  return; // 800E3538
}

// fn_800E353C
void f_800E353C(Ctx* __restrict c) {
  trace_call(0x800E353Cu);
  f_8030D728(c); return; // 800E353C
}

// fn_800E3540
void f_800E3540(Ctx* __restrict c) {
  trace_call(0x800E3540u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800E3540
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E3544
  W32(c->r[4]+0x00000000u,c->r[5]); // 800E3548
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E354C
  return; // 800E3550
}

// fn_800E3554
void f_800E3554(Ctx* __restrict c) {
  trace_call(0x800E3554u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3554
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E3558
  c->ctr=c->r[12]; // 800E355C
  if (true) { dispatch(c,c->ctr); return; } // 800E3560
}

// fn_800E3564
void f_800E3564(Ctx* __restrict c) {
  trace_call(0x800E3564u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3564
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3568
  c->ctr=c->r[12]; // 800E356C
  if (true) { dispatch(c,c->ctr); return; } // 800E3570
}

// fn_800E3574
void f_800E3574(Ctx* __restrict c) {
  trace_call(0x800E3574u);
  c->r[3]=0u+0x80410000u; // 800E3574
  c->r[3]=c->r[3]+0xFFFFDEF0u; // 800E3578
  return; // 800E357C
}

// fn_800E3580
void f_800E3580(Ctx* __restrict c) {
  trace_call(0x800E3580u);
  c->r[3]=0u+0x00000030u; // 800E3580
  return; // 800E3584
}

// fn_800E3588
void f_800E3588(Ctx* __restrict c) {
  trace_call(0x800E3588u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3588
  c->r[0]=c->lr; // 800E358C
  c->r[3]=0u+0x00000030u; // 800E3590
  c->r[4]=c->r[13]+0xFFFFB76Du; // 800E3594
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3598
  c->r[5]=0u+0x00000000u; // 800E359C
  c->r[6]=0u+0x00001001u; // 800E35A0
  c->lr=0x800E35A8u; f_80244D20(c); // 800E35A4
  cmps(c,0,(int32_t)c->r[3],0); // 800E35A8
  if (crb(c,2)) { goto L_800E35B4; } // 800E35AC
  c->lr=0x800E35B4u; f_800E34F8(c); // 800E35B0
L_800E35B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E35B4
  c->lr=c->r[0]; // 800E35B8
  c->r[1]=c->r[1]+0x00000010u; // 800E35BC
  return; // 800E35C0
}

// fn_800E35C4
void f_800E35C4(Ctx* __restrict c) {
  trace_call(0x800E35C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E35C4
  c->r[0]=c->lr; // 800E35C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E35CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E35D0
  c->r[31]=c->r[3]|c->r[3]; // 800E35D4
  c->lr=0x800E35DCu; f_800D7120(c); // 800E35D8
  c->r[4]=0u+0x80410000u; // 800E35DC
  c->r[3]=0u+0xF9EB0000u; // 800E35E0
  c->r[0]=c->r[3]+0xFFFF980Au; // 800E35E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E35E8
  c->r[4]=c->r[4]+0x00006774u; // 800E35EC
  c->r[3]=c->r[31]|c->r[31]; // 800E35F0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E35F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E35F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E35FC
  c->lr=c->r[0]; // 800E3600
  c->r[1]=c->r[1]+0x00000010u; // 800E3604
  return; // 800E3608
}

// fn_800E360C
void f_800E360C(Ctx* __restrict c) {
  trace_call(0x800E360Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E360C
  c->r[0]=c->lr; // 800E3610
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3614
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3618
  c->r[30]=c->r[3]|c->r[3]; // 800E361C
  c->r[31]=c->r[4]|c->r[4]; // 800E3620
  c->lr=0x800E3628u; f_8030D728(c); // 800E3624
  c->r[3]=c->r[31]|c->r[31]; // 800E3628
  c->r[4]=c->r[30]+0x00000030u; // 800E362C
  c->r[5]=0u+0x00000000u; // 800E3630
  c->lr=0x800E3638u; f_8030B7F0(c); // 800E3634
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3638
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E363C
  c->lr=c->r[0]; // 800E3640
  c->r[1]=c->r[1]+0x00000010u; // 800E3644
  return; // 800E3648
}

// fn_800E364C
void f_800E364C(Ctx* __restrict c) {
  trace_call(0x800E364Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E364C
  c->r[5]=c->r[3]|c->r[3]; // 800E3650
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E3654
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E3658
  c->r[3]=c->r[4]+0x00000030u; // 800E365C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E3660
  c->r[4]=c->r[5]+0x00000030u; // 800E3664
  f_803A6F10(c); return; // 800E3668
}

// fn_800E366C
void f_800E366C(Ctx* __restrict c) {
  trace_call(0x800E366Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E366C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E3670
  c->ctr=c->r[12]; // 800E3674
  if (true) { dispatch(c,c->ctr); return; } // 800E3678
}

// fn_800E367C
void f_800E367C(Ctx* __restrict c) {
  trace_call(0x800E367Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E367C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3680
  c->ctr=c->r[12]; // 800E3684
  if (true) { dispatch(c,c->ctr); return; } // 800E3688
}

// fn_800E368C
void f_800E368C(Ctx* __restrict c) {
  trace_call(0x800E368Cu);
  c->r[3]=0u+0x80410000u; // 800E368C
  c->r[3]=c->r[3]+0xFFFFDF07u; // 800E3690
  return; // 800E3694
}

// fn_800E3698
void f_800E3698(Ctx* __restrict c) {
  trace_call(0x800E3698u);
  c->r[3]=0u+0x00000050u; // 800E3698
  return; // 800E369C
}

// fn_800E36A0
void f_800E36A0(Ctx* __restrict c) {
  trace_call(0x800E36A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E36A0
  c->r[0]=c->lr; // 800E36A4
  c->r[3]=0u+0x00000050u; // 800E36A8
  c->r[4]=c->r[13]+0xFFFFB772u; // 800E36AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E36B0
  c->r[5]=0u+0x00000000u; // 800E36B4
  c->r[6]=0u+0x00001001u; // 800E36B8
  c->lr=0x800E36C0u; f_80244D20(c); // 800E36BC
  cmps(c,0,(int32_t)c->r[3],0); // 800E36C0
  if (crb(c,2)) { goto L_800E36CC; } // 800E36C4
  c->lr=0x800E36CCu; f_800E35C4(c); // 800E36C8
L_800E36CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E36CC
  c->lr=c->r[0]; // 800E36D0
  c->r[1]=c->r[1]+0x00000010u; // 800E36D4
  return; // 800E36D8
}

// fn_800E36DC
void f_800E36DC(Ctx* __restrict c) {
  trace_call(0x800E36DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E36DC
  c->r[0]=c->lr; // 800E36E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E36E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E36E8
  c->r[31]=c->r[3]|c->r[3]; // 800E36EC
  c->lr=0x800E36F4u; f_800D7120(c); // 800E36F0
  c->r[3]=0u+0x80410000u; // 800E36F4
  c->r[0]=0u+0x00000000u; // 800E36F8
  c->r[3]=c->r[3]+0x00006740u; // 800E36FC
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E3700
  c->r[3]=c->r[31]|c->r[31]; // 800E3704
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E370C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3710
  c->lr=c->r[0]; // 800E3714
  c->r[1]=c->r[1]+0x00000010u; // 800E3718
  return; // 800E371C
}

// fn_800E3720
void f_800E3720(Ctx* __restrict c) {
  trace_call(0x800E3720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3720
  c->r[0]=c->lr; // 800E3724
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3728
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E372C
  c->r[30]=c->r[3]|c->r[3]; // 800E3730
  c->r[31]=c->r[4]|c->r[4]; // 800E3734
  c->lr=0x800E373Cu; f_8030D728(c); // 800E3738
  c->r[3]=c->r[31]|c->r[31]; // 800E373C
  c->lr=0x800E3744u; f_8030BD1C(c); // 800E3740
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E3744
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3748
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E374C
  c->lr=c->r[0]; // 800E3750
  c->r[1]=c->r[1]+0x00000010u; // 800E3754
  return; // 800E3758
}

// fn_800E375C
void f_800E375C(Ctx* __restrict c) {
  trace_call(0x800E375Cu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E375C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E3760
  c->r[0]=R32(c->r[3]+0x00000030u); // 800E3764
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E3768
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E376C
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E3770
  return; // 800E3774
}

// fn_800E3778
void f_800E3778(Ctx* __restrict c) {
  trace_call(0x800E3778u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3778
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E377C
  c->ctr=c->r[12]; // 800E3780
  if (true) { dispatch(c,c->ctr); return; } // 800E3784
}

// fn_800E3788
void f_800E3788(Ctx* __restrict c) {
  trace_call(0x800E3788u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3788
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E378C
  c->ctr=c->r[12]; // 800E3790
  if (true) { dispatch(c,c->ctr); return; } // 800E3794
}

// fn_800E3798
void f_800E3798(Ctx* __restrict c) {
  trace_call(0x800E3798u);
  c->r[3]=0u+0x80410000u; // 800E3798
  c->r[3]=c->r[3]+0xFFFFDF16u; // 800E379C
  return; // 800E37A0
}

// fn_800E37A4
void f_800E37A4(Ctx* __restrict c) {
  trace_call(0x800E37A4u);
  c->r[3]=0u+0x00000034u; // 800E37A4
  return; // 800E37A8
}

// fn_800E37AC
void f_800E37AC(Ctx* __restrict c) {
  trace_call(0x800E37ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E37AC
  c->r[0]=c->lr; // 800E37B0
  c->r[3]=0u+0x00000034u; // 800E37B4
  c->r[4]=c->r[13]+0xFFFFB777u; // 800E37B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E37BC
  c->r[5]=0u+0x00000000u; // 800E37C0
  c->r[6]=0u+0x00001001u; // 800E37C4
  c->lr=0x800E37CCu; f_80244D20(c); // 800E37C8
  cmps(c,0,(int32_t)c->r[3],0); // 800E37CC
  if (crb(c,2)) { goto L_800E37D8; } // 800E37D0
  c->lr=0x800E37D8u; f_800E36DC(c); // 800E37D4
L_800E37D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E37D8
  c->lr=c->r[0]; // 800E37DC
  c->r[1]=c->r[1]+0x00000010u; // 800E37E0
  return; // 800E37E4
}

// fn_800E37E8
void f_800E37E8(Ctx* __restrict c) {
  trace_call(0x800E37E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E37E8
  c->r[0]=c->lr; // 800E37EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E37F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E37F4
  c->r[31]=c->r[3]|c->r[3]; // 800E37F8
  c->lr=0x800E3800u; f_800D7120(c); // 800E37FC
  c->r[4]=0u+0x80410000u; // 800E3800
  c->r[3]=0u+0x6EF20000u; // 800E3804
  c->r[0]=c->r[3]+0x000039DEu; // 800E3808
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E380C
  c->r[4]=c->r[4]+0x0000670Cu; // 800E3810
  c->r[3]=c->r[31]|c->r[31]; // 800E3814
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E3818
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E381C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3820
  c->lr=c->r[0]; // 800E3824
  c->r[1]=c->r[1]+0x00000010u; // 800E3828
  return; // 800E382C
}

// fn_800E3830
void f_800E3830(Ctx* __restrict c) {
  trace_call(0x800E3830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3830
  c->r[0]=c->lr; // 800E3834
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3838
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E383C
  c->r[30]=c->r[3]|c->r[3]; // 800E3840
  c->r[31]=c->r[4]|c->r[4]; // 800E3844
  c->lr=0x800E384Cu; f_8030D728(c); // 800E3848
  c->r[3]=c->r[31]|c->r[31]; // 800E384C
  c->lr=0x800E3854u; f_8030BD1C(c); // 800E3850
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E3854
  c->r[3]=c->r[31]|c->r[31]; // 800E3858
  c->lr=0x800E3860u; f_8030BD1C(c); // 800E385C
  W16(c->r[30]+0x00000032u,c->r[3]); // 800E3860
  c->r[3]=c->r[31]|c->r[31]; // 800E3864
  c->lr=0x800E386Cu; f_8030BD1C(c); // 800E3868
  W8(c->r[30]+0x00000034u,c->r[3]); // 800E386C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3870
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3874
  c->lr=c->r[0]; // 800E3878
  c->r[1]=c->r[1]+0x00000010u; // 800E387C
  return; // 800E3880
}

// fn_800E3884
void f_800E3884(Ctx* __restrict c) {
  trace_call(0x800E3884u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800E3884
  c->r[7]=R32(c->r[3]+0x00000004u); // 800E3888
  c->r[6]=R8(c->r[3]+0x00000030u); // 800E388C
  c->r[5]=R16(c->r[3]+0x00000032u); // 800E3890
  c->r[0]=R8(c->r[3]+0x00000034u); // 800E3894
  W32(c->r[4]+0x00000000u,c->r[8]); // 800E3898
  W32(c->r[4]+0x00000004u,c->r[7]); // 800E389C
  W8(c->r[4]+0x00000030u,c->r[6]); // 800E38A0
  W16(c->r[4]+0x00000032u,c->r[5]); // 800E38A4
  W8(c->r[4]+0x00000034u,c->r[0]); // 800E38A8
  return; // 800E38AC
}

// fn_800E38B0
void f_800E38B0(Ctx* __restrict c) {
  trace_call(0x800E38B0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E38B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E38B4
  c->ctr=c->r[12]; // 800E38B8
  if (true) { dispatch(c,c->ctr); return; } // 800E38BC
}

// fn_800E38C0
void f_800E38C0(Ctx* __restrict c) {
  trace_call(0x800E38C0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E38C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E38C4
  c->ctr=c->r[12]; // 800E38C8
  if (true) { dispatch(c,c->ctr); return; } // 800E38CC
}

// fn_800E38D0
void f_800E38D0(Ctx* __restrict c) {
  trace_call(0x800E38D0u);
  c->r[3]=0u+0x80410000u; // 800E38D0
  c->r[3]=c->r[3]+0xFFFFDF28u; // 800E38D4
  return; // 800E38D8
}

// fn_800E38DC
void f_800E38DC(Ctx* __restrict c) {
  trace_call(0x800E38DCu);
  c->r[3]=0u+0x00000038u; // 800E38DC
  return; // 800E38E0
}

// fn_800E38E4
void f_800E38E4(Ctx* __restrict c) {
  trace_call(0x800E38E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E38E4
  c->r[0]=c->lr; // 800E38E8
  c->r[3]=0u+0x00000038u; // 800E38EC
  c->r[4]=c->r[13]+0xFFFFB77Cu; // 800E38F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E38F4
  c->r[5]=0u+0x00000000u; // 800E38F8
  c->r[6]=0u+0x00001001u; // 800E38FC
  c->lr=0x800E3904u; f_80244D20(c); // 800E3900
  cmps(c,0,(int32_t)c->r[3],0); // 800E3904
  if (crb(c,2)) { goto L_800E3910; } // 800E3908
  c->lr=0x800E3910u; f_800E37E8(c); // 800E390C
L_800E3910:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3910
  c->lr=c->r[0]; // 800E3914
  c->r[1]=c->r[1]+0x00000010u; // 800E3918
  return; // 800E391C
}

// fn_800E3920
void f_800E3920(Ctx* __restrict c) {
  trace_call(0x800E3920u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3920
  c->r[0]=c->lr; // 800E3924
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3928
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E392C
  c->r[31]=c->r[3]|c->r[3]; // 800E3930
  c->lr=0x800E3938u; f_800D7120(c); // 800E3934
  c->r[4]=0u+0x80410000u; // 800E3938
  c->r[3]=0u+0xE8560000u; // 800E393C
  c->r[0]=c->r[3]+0x0000321Fu; // 800E3940
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3944
  c->r[4]=c->r[4]+0x000066D8u; // 800E3948
  c->r[3]=c->r[31]|c->r[31]; // 800E394C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E3950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3954
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3958
  c->lr=c->r[0]; // 800E395C
  c->r[1]=c->r[1]+0x00000010u; // 800E3960
  return; // 800E3964
}

// fn_800E3968
void f_800E3968(Ctx* __restrict c) {
  trace_call(0x800E3968u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3968
  c->r[0]=c->lr; // 800E396C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3970
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3974
  c->r[30]=c->r[3]|c->r[3]; // 800E3978
  c->r[31]=c->r[4]|c->r[4]; // 800E397C
  c->lr=0x800E3984u; f_8030D728(c); // 800E3980
  c->r[3]=c->r[31]|c->r[31]; // 800E3984
  c->lr=0x800E398Cu; f_8030BD1C(c); // 800E3988
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E398C
  c->r[3]=c->r[31]|c->r[31]; // 800E3990
  c->lr=0x800E3998u; f_8030C0A0(c); // 800E3994
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800E3998
  c->r[3]=c->r[31]|c->r[31]; // 800E399C
  c->lr=0x800E39A4u; f_8030BD1C(c); // 800E39A0
  W8(c->r[30]+0x00000038u,c->r[3]); // 800E39A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E39A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E39AC
  c->lr=c->r[0]; // 800E39B0
  c->r[1]=c->r[1]+0x00000010u; // 800E39B4
  return; // 800E39B8
}

// fn_800E39BC
void f_800E39BC(Ctx* __restrict c) {
  trace_call(0x800E39BCu);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800E39BC
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E39C0
  c->r[5]=R8(c->r[3]+0x00000030u); // 800E39C4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E39C8
  c->r[0]=R8(c->r[3]+0x00000038u); // 800E39CC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E39D0
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E39D4
  W8(c->r[4]+0x00000030u,c->r[5]); // 800E39D8
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800E39DC
  W8(c->r[4]+0x00000038u,c->r[0]); // 800E39E0
  return; // 800E39E4
}

// fn_800E39E8
void f_800E39E8(Ctx* __restrict c) {
  trace_call(0x800E39E8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E39E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E39EC
  c->ctr=c->r[12]; // 800E39F0
  if (true) { dispatch(c,c->ctr); return; } // 800E39F4
}

// fn_800E39F8
void f_800E39F8(Ctx* __restrict c) {
  trace_call(0x800E39F8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E39F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E39FC
  c->ctr=c->r[12]; // 800E3A00
  if (true) { dispatch(c,c->ctr); return; } // 800E3A04
}

// fn_800E3A08
void f_800E3A08(Ctx* __restrict c) {
  trace_call(0x800E3A08u);
  c->r[3]=0u+0x80410000u; // 800E3A08
  c->r[3]=c->r[3]+0xFFFFDF36u; // 800E3A0C
  return; // 800E3A10
}

// fn_800E3A14
void f_800E3A14(Ctx* __restrict c) {
  trace_call(0x800E3A14u);
  c->r[3]=0u+0x0000003Cu; // 800E3A14
  return; // 800E3A18
}

// fn_800E3A1C
void f_800E3A1C(Ctx* __restrict c) {
  trace_call(0x800E3A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3A1C
  c->r[0]=c->lr; // 800E3A20
  c->r[3]=0u+0x0000003Cu; // 800E3A24
  c->r[4]=c->r[13]+0xFFFFB781u; // 800E3A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3A2C
  c->r[5]=0u+0x00000000u; // 800E3A30
  c->r[6]=0u+0x00001001u; // 800E3A34
  c->lr=0x800E3A3Cu; f_80244D20(c); // 800E3A38
  cmps(c,0,(int32_t)c->r[3],0); // 800E3A3C
  if (crb(c,2)) { goto L_800E3A48; } // 800E3A40
  c->lr=0x800E3A48u; f_800E3920(c); // 800E3A44
L_800E3A48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3A48
  c->lr=c->r[0]; // 800E3A4C
  c->r[1]=c->r[1]+0x00000010u; // 800E3A50
  return; // 800E3A54
}

// fn_800E3A58
void f_800E3A58(Ctx* __restrict c) {
  trace_call(0x800E3A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3A58
  c->r[0]=c->lr; // 800E3A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3A64
  c->r[31]=c->r[3]|c->r[3]; // 800E3A68
  c->lr=0x800E3A70u; f_800D7120(c); // 800E3A6C
  c->r[4]=0u+0x80410000u; // 800E3A70
  c->r[3]=0u+0xCF930000u; // 800E3A74
  c->r[0]=c->r[3]+0x000020E7u; // 800E3A78
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3A7C
  c->r[4]=c->r[4]+0x000066A4u; // 800E3A80
  c->r[3]=c->r[31]|c->r[31]; // 800E3A84
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E3A88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3A90
  c->lr=c->r[0]; // 800E3A94
  c->r[1]=c->r[1]+0x00000010u; // 800E3A98
  return; // 800E3A9C
}

// fn_800E3AA0
void f_800E3AA0(Ctx* __restrict c) {
  trace_call(0x800E3AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3AA0
  c->r[0]=c->lr; // 800E3AA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3AA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3AAC
  c->r[30]=c->r[3]|c->r[3]; // 800E3AB0
  c->r[31]=c->r[4]|c->r[4]; // 800E3AB4
  c->lr=0x800E3ABCu; f_8030D728(c); // 800E3AB8
  c->r[3]=c->r[31]|c->r[31]; // 800E3ABC
  c->lr=0x800E3AC4u; f_8030BD1C(c); // 800E3AC0
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E3AC4
  c->r[3]=c->r[31]|c->r[31]; // 800E3AC8
  c->lr=0x800E3AD0u; f_8030C0A0(c); // 800E3ACC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800E3AD0
  c->r[3]=c->r[31]|c->r[31]; // 800E3AD4
  c->lr=0x800E3ADCu; f_8030BD1C(c); // 800E3AD8
  W8(c->r[30]+0x00000038u,c->r[3]); // 800E3ADC
  c->r[3]=c->r[31]|c->r[31]; // 800E3AE0
  c->lr=0x800E3AE8u; f_8030C0A0(c); // 800E3AE4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E3AE8
  c->r[3]=c->r[31]|c->r[31]; // 800E3AEC
  c->lr=0x800E3AF4u; f_8030C0A0(c); // 800E3AF0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800E3AF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3AF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3AFC
  c->lr=c->r[0]; // 800E3B00
  c->r[1]=c->r[1]+0x00000010u; // 800E3B04
  return; // 800E3B08
}

// fn_800E3B0C
void f_800E3B0C(Ctx* __restrict c) {
  trace_call(0x800E3B0Cu);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800E3B0C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E3B10
  c->r[5]=R8(c->r[3]+0x00000030u); // 800E3B14
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E3B18
  c->r[0]=R8(c->r[3]+0x00000038u); // 800E3B1C
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3B20
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E3B24
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E3B28
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E3B2C
  W8(c->r[4]+0x00000030u,c->r[5]); // 800E3B30
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[2]);} // 800E3B34
  W8(c->r[4]+0x00000038u,c->r[0]); // 800E3B38
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E3B3C
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 800E3B40
  return; // 800E3B44
}

// fn_800E3B48
void f_800E3B48(Ctx* __restrict c) {
  trace_call(0x800E3B48u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3B48
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E3B4C
  c->ctr=c->r[12]; // 800E3B50
  if (true) { dispatch(c,c->ctr); return; } // 800E3B54
}

// fn_800E3B58
void f_800E3B58(Ctx* __restrict c) {
  trace_call(0x800E3B58u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3B58
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3B5C
  c->ctr=c->r[12]; // 800E3B60
  if (true) { dispatch(c,c->ctr); return; } // 800E3B64
}

// fn_800E3B68
void f_800E3B68(Ctx* __restrict c) {
  trace_call(0x800E3B68u);
  c->r[3]=0u+0x80410000u; // 800E3B68
  c->r[3]=c->r[3]+0xFFFFDF43u; // 800E3B6C
  return; // 800E3B70
}

// fn_800E3B74
void f_800E3B74(Ctx* __restrict c) {
  trace_call(0x800E3B74u);
  c->r[3]=0u+0x00000044u; // 800E3B74
  return; // 800E3B78
}

// fn_800E3B7C
void f_800E3B7C(Ctx* __restrict c) {
  trace_call(0x800E3B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3B7C
  c->r[0]=c->lr; // 800E3B80
  c->r[3]=0u+0x00000044u; // 800E3B84
  c->r[4]=c->r[13]+0xFFFFB786u; // 800E3B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3B8C
  c->r[5]=0u+0x00000000u; // 800E3B90
  c->r[6]=0u+0x00001001u; // 800E3B94
  c->lr=0x800E3B9Cu; f_80244D20(c); // 800E3B98
  cmps(c,0,(int32_t)c->r[3],0); // 800E3B9C
  if (crb(c,2)) { goto L_800E3BA8; } // 800E3BA0
  c->lr=0x800E3BA8u; f_800E3A58(c); // 800E3BA4
L_800E3BA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3BA8
  c->lr=c->r[0]; // 800E3BAC
  c->r[1]=c->r[1]+0x00000010u; // 800E3BB0
  return; // 800E3BB4
}

// fn_800E3BB8
void f_800E3BB8(Ctx* __restrict c) {
  trace_call(0x800E3BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3BB8
  c->r[0]=c->lr; // 800E3BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3BC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3BC4
  c->r[31]=c->r[3]|c->r[3]; // 800E3BC8
  c->lr=0x800E3BD0u; f_800D7120(c); // 800E3BCC
  c->r[5]=0u+0x80410000u; // 800E3BD0
  c->r[3]=0u+0x04B20000u; // 800E3BD4
  c->r[4]=0u+0x00000000u; // 800E3BD8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E3BDC
  c->r[0]=c->r[3]+0x00006EC9u; // 800E3BE0
  c->r[5]=c->r[5]+0x00006670u; // 800E3BE4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E3BE8
  c->r[3]=c->r[31]|c->r[31]; // 800E3BEC
  W32(c->r[31]+0x00000048u,c->r[4]); // 800E3BF0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3BFC
  c->lr=c->r[0]; // 800E3C00
  c->r[1]=c->r[1]+0x00000010u; // 800E3C04
  return; // 800E3C08
}

// fn_800E3C0C
void f_800E3C0C(Ctx* __restrict c) {
  trace_call(0x800E3C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3C0C
  c->r[0]=c->lr; // 800E3C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3C14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3C18
  c->r[30]=c->r[3]|c->r[3]; // 800E3C1C
  c->r[31]=c->r[4]|c->r[4]; // 800E3C20
  c->lr=0x800E3C28u; f_8030D728(c); // 800E3C24
  c->r[3]=c->r[31]|c->r[31]; // 800E3C28
  c->r[4]=0u+0x00000000u; // 800E3C2C
  c->lr=0x800E3C34u; f_8030BE30(c); // 800E3C30
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E3C34
  c->r[3]=c->r[31]|c->r[31]; // 800E3C38
  c->lr=0x800E3C40u; f_8030BD1C(c); // 800E3C3C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E3C40
  c->r[3]=c->r[31]|c->r[31]; // 800E3C44
  c->lr=0x800E3C4Cu; f_8030BD1C(c); // 800E3C48
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E3C4C
  c->r[3]=c->r[31]|c->r[31]; // 800E3C50
  c->r[4]=0u+0x00000000u; // 800E3C54
  c->lr=0x800E3C5Cu; f_8030BE30(c); // 800E3C58
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E3C5C
  c->r[3]=c->r[31]|c->r[31]; // 800E3C60
  c->lr=0x800E3C68u; f_8030BD1C(c); // 800E3C64
  W32(c->r[30]+0x00000044u,c->r[3]); // 800E3C68
  c->r[3]=c->r[31]|c->r[31]; // 800E3C6C
  c->lr=0x800E3C74u; f_8030BD1C(c); // 800E3C70
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800E3C74
  c->r[3]=c->r[31]|c->r[31]; // 800E3C78
  c->r[4]=0u+0x00000000u; // 800E3C7C
  c->lr=0x800E3C84u; f_8030BE30(c); // 800E3C80
  W32(c->r[30]+0x00000050u,c->r[3]); // 800E3C84
  c->r[3]=c->r[31]|c->r[31]; // 800E3C88
  c->r[4]=0u+0x00000000u; // 800E3C8C
  c->lr=0x800E3C94u; f_8030BE30(c); // 800E3C90
  W32(c->r[30]+0x00000054u,c->r[3]); // 800E3C94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3C98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3C9C
  c->lr=c->r[0]; // 800E3CA0
  c->r[1]=c->r[1]+0x00000010u; // 800E3CA4
  return; // 800E3CA8
}

// fn_800E3CAC
void f_800E3CAC(Ctx* __restrict c) {
  trace_call(0x800E3CACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3CAC
  c->r[0]=c->lr; // 800E3CB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3CB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3CB8
  c->r[30]=c->r[3]|c->r[3]; // 800E3CBC
  c->r[31]=c->r[4]|c->r[4]; // 800E3CC0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E3CC4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E3CC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E3CCC
  c->r[3]=c->r[4]+0x00000030u; // 800E3CD0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E3CD4
  c->r[4]=c->r[30]+0x00000030u; // 800E3CD8
  c->lr=0x800E3CE0u; f_8003AB48(c); // 800E3CDC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E3CE0
  c->r[3]=c->r[31]+0x00000040u; // 800E3CE4
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E3CE8
  c->r[4]=c->r[30]+0x00000040u; // 800E3CEC
  c->lr=0x800E3CF4u; f_8003AB48(c); // 800E3CF0
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800E3CF4
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800E3CF8
  c->r[0]=R32(c->r[30]+0x00000050u); // 800E3CFC
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E3D00
  c->r[0]=R32(c->r[30]+0x00000054u); // 800E3D04
  W32(c->r[31]+0x00000054u,c->r[0]); // 800E3D08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3D0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3D10
  c->lr=c->r[0]; // 800E3D14
  c->r[1]=c->r[1]+0x00000010u; // 800E3D18
  return; // 800E3D1C
}

// fn_800E3D20
void f_800E3D20(Ctx* __restrict c) {
  trace_call(0x800E3D20u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3D20
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E3D24
  c->ctr=c->r[12]; // 800E3D28
  if (true) { dispatch(c,c->ctr); return; } // 800E3D2C
}

// fn_800E3D30
void f_800E3D30(Ctx* __restrict c) {
  trace_call(0x800E3D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3D30
  c->r[0]=c->lr; // 800E3D34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3D38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3D3C
  c->r[29]=c->r[3]|c->r[3]; // 800E3D40
  c->r[30]=c->r[4]|c->r[4]; // 800E3D44
  c->r[31]=c->r[5]|c->r[5]; // 800E3D48
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E3D4C
  cmps(c,0,(int32_t)c->r[0],7); // 800E3D50
  if (!crb(c,0)) { goto L_800E3D64; } // 800E3D54
  c->r[4]=c->r[31]|c->r[31]; // 800E3D58
  c->r[3]=c->r[3]+0x00000030u; // 800E3D5C
  c->lr=0x800E3D64u; f_8003A994(c); // 800E3D60
L_800E3D64:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 800E3D64
  cmps(c,0,(int32_t)c->r[0],7); // 800E3D68
  if (!crb(c,0)) { goto L_800E3D7C; } // 800E3D6C
  c->r[4]=c->r[31]|c->r[31]; // 800E3D70
  c->r[3]=c->r[29]+0x00000040u; // 800E3D74
  c->lr=0x800E3D7Cu; f_8003A994(c); // 800E3D78
L_800E3D7C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E3D7C
  c->r[3]=c->r[29]|c->r[29]; // 800E3D80
  c->r[4]=c->r[30]|c->r[30]; // 800E3D84
  c->r[5]=c->r[31]|c->r[31]; // 800E3D88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3D8C
  c->ctr=c->r[12]; // 800E3D90
  if (true) { c->lr=0x800E3D98u; dispatch(c,c->ctr); } // 800E3D94
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3D98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3D9C
  c->lr=c->r[0]; // 800E3DA0
  c->r[1]=c->r[1]+0x00000020u; // 800E3DA4
  return; // 800E3DA8
}

// fn_800E3DAC
void f_800E3DAC(Ctx* __restrict c) {
  trace_call(0x800E3DACu);
  c->r[3]=0u+0x80410000u; // 800E3DAC
  c->r[3]=c->r[3]+0xFFFFDF5Du; // 800E3DB0
  return; // 800E3DB4
}

// fn_800E3DB8
void f_800E3DB8(Ctx* __restrict c) {
  trace_call(0x800E3DB8u);
  c->r[3]=0u+0x00000058u; // 800E3DB8
  return; // 800E3DBC
}

// fn_800E3DC0
void f_800E3DC0(Ctx* __restrict c) {
  trace_call(0x800E3DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3DC0
  c->r[0]=c->lr; // 800E3DC4
  c->r[3]=0u+0x00000058u; // 800E3DC8
  c->r[4]=c->r[13]+0xFFFFB78Bu; // 800E3DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3DD0
  c->r[5]=0u+0x00000000u; // 800E3DD4
  c->r[6]=0u+0x00001001u; // 800E3DD8
  c->lr=0x800E3DE0u; f_80244D20(c); // 800E3DDC
  cmps(c,0,(int32_t)c->r[3],0); // 800E3DE0
  if (crb(c,2)) { goto L_800E3DEC; } // 800E3DE4
  c->lr=0x800E3DECu; f_800E3BB8(c); // 800E3DE8
L_800E3DEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3DEC
  c->lr=c->r[0]; // 800E3DF0
  c->r[1]=c->r[1]+0x00000010u; // 800E3DF4
  return; // 800E3DF8
}

// fn_800E3DFC
void f_800E3DFC(Ctx* __restrict c) {
  trace_call(0x800E3DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3DFC
  c->r[0]=c->lr; // 800E3E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3E08
  c->r[31]=c->r[3]|c->r[3]; // 800E3E0C
  c->lr=0x800E3E14u; f_800D7120(c); // 800E3E10
  c->r[5]=0u+0x80410000u; // 800E3E14
  c->r[3]=0u+0x1C820000u; // 800E3E18
  c->r[0]=c->r[3]+0xFFFFF761u; // 800E3E1C
  c->r[4]=0u+0x00000000u; // 800E3E20
  c->r[5]=c->r[5]+0x0000663Cu; // 800E3E24
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E3E28
  c->r[3]=c->r[31]|c->r[31]; // 800E3E2C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E3E30
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3E34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3E38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3E3C
  c->lr=c->r[0]; // 800E3E40
  c->r[1]=c->r[1]+0x00000010u; // 800E3E44
  return; // 800E3E48
}

// fn_800E3E4C
void f_800E3E4C(Ctx* __restrict c) {
  trace_call(0x800E3E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3E4C
  c->r[0]=c->lr; // 800E3E50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3E54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3E58
  c->r[30]=c->r[3]|c->r[3]; // 800E3E5C
  c->r[31]=c->r[4]|c->r[4]; // 800E3E60
  c->lr=0x800E3E68u; f_8030D728(c); // 800E3E64
  c->r[3]=c->r[31]|c->r[31]; // 800E3E68
  c->r[4]=0u+0x00000000u; // 800E3E6C
  c->lr=0x800E3E74u; f_8030BE30(c); // 800E3E70
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E3E74
  c->r[3]=c->r[31]|c->r[31]; // 800E3E78
  c->lr=0x800E3E80u; f_8030BD1C(c); // 800E3E7C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E3E80
  c->r[3]=c->r[31]|c->r[31]; // 800E3E84
  c->r[4]=c->r[30]+0x0000003Cu; // 800E3E88
  c->r[5]=0u+0x00000000u; // 800E3E8C
  c->lr=0x800E3E94u; f_8030B7F0(c); // 800E3E90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3E94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3E98
  c->lr=c->r[0]; // 800E3E9C
  c->r[1]=c->r[1]+0x00000010u; // 800E3EA0
  return; // 800E3EA4
}

// fn_800E3EA8
void f_800E3EA8(Ctx* __restrict c) {
  trace_call(0x800E3EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3EA8
  c->r[0]=c->lr; // 800E3EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3EB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3EB4
  c->r[30]=c->r[3]|c->r[3]; // 800E3EB8
  c->r[31]=c->r[4]|c->r[4]; // 800E3EBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E3EC0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E3EC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E3EC8
  c->r[3]=c->r[4]+0x00000030u; // 800E3ECC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E3ED0
  c->r[4]=c->r[30]+0x00000030u; // 800E3ED4
  c->lr=0x800E3EDCu; f_8003AB48(c); // 800E3ED8
  c->r[3]=c->r[31]+0x0000003Cu; // 800E3EDC
  c->r[4]=c->r[30]+0x0000003Cu; // 800E3EE0
  c->lr=0x800E3EE8u; f_803A6F10(c); // 800E3EE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3EE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3EEC
  c->lr=c->r[0]; // 800E3EF0
  c->r[1]=c->r[1]+0x00000010u; // 800E3EF4
  return; // 800E3EF8
}

// fn_800E3EFC
void f_800E3EFC(Ctx* __restrict c) {
  trace_call(0x800E3EFCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3EFC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E3F00
  c->ctr=c->r[12]; // 800E3F04
  if (true) { dispatch(c,c->ctr); return; } // 800E3F08
}

// fn_800E3F0C
void f_800E3F0C(Ctx* __restrict c) {
  trace_call(0x800E3F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3F0C
  c->r[0]=c->lr; // 800E3F10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3F14
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3F18
  c->r[29]=c->r[3]|c->r[3]; // 800E3F1C
  c->r[30]=c->r[4]|c->r[4]; // 800E3F20
  c->r[31]=c->r[5]|c->r[5]; // 800E3F24
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E3F28
  cmps(c,0,(int32_t)c->r[0],7); // 800E3F2C
  if (!crb(c,0)) { goto L_800E3F40; } // 800E3F30
  c->r[4]=c->r[31]|c->r[31]; // 800E3F34
  c->r[3]=c->r[3]+0x00000030u; // 800E3F38
  c->lr=0x800E3F40u; f_8003A994(c); // 800E3F3C
L_800E3F40:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E3F40
  c->r[3]=c->r[29]|c->r[29]; // 800E3F44
  c->r[4]=c->r[30]|c->r[30]; // 800E3F48
  c->r[5]=c->r[31]|c->r[31]; // 800E3F4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3F50
  c->ctr=c->r[12]; // 800E3F54
  if (true) { c->lr=0x800E3F5Cu; dispatch(c,c->ctr); } // 800E3F58
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3F5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3F60
  c->lr=c->r[0]; // 800E3F64
  c->r[1]=c->r[1]+0x00000020u; // 800E3F68
  return; // 800E3F6C
}

// fn_800E3F70
void f_800E3F70(Ctx* __restrict c) {
  trace_call(0x800E3F70u);
  c->r[3]=0u+0x80410000u; // 800E3F70
  c->r[3]=c->r[3]+0xFFFFDF69u; // 800E3F74
  return; // 800E3F78
}

// fn_800E3F7C
void f_800E3F7C(Ctx* __restrict c) {
  trace_call(0x800E3F7Cu);
  c->r[3]=0u+0x0000005Cu; // 800E3F7C
  return; // 800E3F80
}

// fn_800E3F84
void f_800E3F84(Ctx* __restrict c) {
  trace_call(0x800E3F84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3F84
  c->r[0]=c->lr; // 800E3F88
  c->r[3]=0u+0x0000005Cu; // 800E3F8C
  c->r[4]=c->r[13]+0xFFFFB790u; // 800E3F90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3F94
  c->r[5]=0u+0x00000000u; // 800E3F98
  c->r[6]=0u+0x00001001u; // 800E3F9C
  c->lr=0x800E3FA4u; f_80244D20(c); // 800E3FA0
  cmps(c,0,(int32_t)c->r[3],0); // 800E3FA4
  if (crb(c,2)) { goto L_800E3FB0; } // 800E3FA8
  c->lr=0x800E3FB0u; f_800E3DFC(c); // 800E3FAC
L_800E3FB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3FB0
  c->lr=c->r[0]; // 800E3FB4
  c->r[1]=c->r[1]+0x00000010u; // 800E3FB8
  return; // 800E3FBC
}

// fn_800E3FC0
void f_800E3FC0(Ctx* __restrict c) {
  trace_call(0x800E3FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3FC0
  c->r[0]=c->lr; // 800E3FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3FCC
  c->r[31]=c->r[3]|c->r[3]; // 800E3FD0
  c->lr=0x800E3FD8u; f_800D7120(c); // 800E3FD4
  c->r[5]=0u+0x80410000u; // 800E3FD8
  c->r[3]=0u+0xC74C0000u; // 800E3FDC
  c->r[4]=0u+0x00000000u; // 800E3FE0
  W32(c->r[31]+0x00000058u,c->r[4]); // 800E3FE4
  c->r[0]=c->r[3]+0xFFFFCE0Du; // 800E3FE8
  c->r[5]=c->r[5]+0x00006608u; // 800E3FEC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E3FF0
  c->r[3]=c->r[31]|c->r[31]; // 800E3FF4
  W32(c->r[31]+0x00000070u,c->r[4]); // 800E3FF8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3FFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4000
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4004
  c->lr=c->r[0]; // 800E4008
  c->r[1]=c->r[1]+0x00000010u; // 800E400C
  return; // 800E4010
}

// fn_800E4014
void f_800E4014(Ctx* __restrict c) {
  trace_call(0x800E4014u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4014
  c->r[0]=c->lr; // 800E4018
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E401C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4020
  c->r[30]=c->r[3]|c->r[3]; // 800E4024
  c->r[31]=c->r[4]|c->r[4]; // 800E4028
  c->lr=0x800E4030u; f_8030D728(c); // 800E402C
  c->r[3]=c->r[31]|c->r[31]; // 800E4030
  c->r[4]=c->r[30]+0x00000030u; // 800E4034
  c->r[5]=0u+0x00000000u; // 800E4038
  c->lr=0x800E4040u; f_8030B7F0(c); // 800E403C
  c->r[3]=c->r[31]|c->r[31]; // 800E4040
  c->r[4]=0u+0x00000000u; // 800E4044
  c->lr=0x800E404Cu; f_8030BE30(c); // 800E4048
  W32(c->r[30]+0x00000050u,c->r[3]); // 800E404C
  c->r[3]=c->r[31]|c->r[31]; // 800E4050
  c->lr=0x800E4058u; f_8030BD1C(c); // 800E4054
  W32(c->r[30]+0x00000054u,c->r[3]); // 800E4058
  c->r[3]=c->r[31]|c->r[31]; // 800E405C
  c->lr=0x800E4064u; f_8030C0A0(c); // 800E4060
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 800E4064
  c->r[3]=c->r[31]|c->r[31]; // 800E4068
  c->lr=0x800E4070u; f_8030BD1C(c); // 800E406C
  W8(c->r[30]+0x00000060u,c->r[3]); // 800E4070
  c->r[3]=c->r[31]|c->r[31]; // 800E4074
  c->r[4]=0u+0x00000000u; // 800E4078
  c->lr=0x800E4080u; f_8030BE30(c); // 800E407C
  W32(c->r[30]+0x00000064u,c->r[3]); // 800E4080
  c->r[3]=c->r[31]|c->r[31]; // 800E4084
  c->r[4]=0u+0x00000000u; // 800E4088
  c->lr=0x800E4090u; f_8030BE30(c); // 800E408C
  W32(c->r[30]+0x00000068u,c->r[3]); // 800E4090
  c->r[3]=c->r[31]|c->r[31]; // 800E4094
  c->lr=0x800E409Cu; f_8030BD1C(c); // 800E4098
  W32(c->r[30]+0x0000006Cu,c->r[3]); // 800E409C
  c->r[3]=c->r[31]|c->r[31]; // 800E40A0
  c->lr=0x800E40A8u; f_8030C0A0(c); // 800E40A4
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800E40A8
  c->r[3]=c->r[31]|c->r[31]; // 800E40AC
  c->r[4]=c->r[30]+0x00000078u; // 800E40B0
  c->r[5]=0u+0x00000000u; // 800E40B4
  c->lr=0x800E40BCu; f_8030B7F0(c); // 800E40B8
  c->r[3]=c->r[31]|c->r[31]; // 800E40BC
  c->lr=0x800E40C4u; f_8030BD1C(c); // 800E40C0
  W8(c->r[30]+0x00000098u,c->r[3]); // 800E40C4
  c->r[3]=c->r[31]|c->r[31]; // 800E40C8
  c->lr=0x800E40D0u; f_8030C0A0(c); // 800E40CC
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[1]);} // 800E40D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E40D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E40D8
  c->lr=c->r[0]; // 800E40DC
  c->r[1]=c->r[1]+0x00000010u; // 800E40E0
  return; // 800E40E4
}

// fn_800E40E8
void f_800E40E8(Ctx* __restrict c) {
  trace_call(0x800E40E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E40E8
  c->r[0]=c->lr; // 800E40EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E40F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E40F4
  c->r[31]=c->r[4]|c->r[4]; // 800E40F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E40FC
  c->r[30]=c->r[3]|c->r[3]; // 800E4100
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E4104
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E4108
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E410C
  c->r[3]=c->r[4]+0x00000030u; // 800E4110
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E4114
  c->r[4]=c->r[30]+0x00000030u; // 800E4118
  c->lr=0x800E4120u; f_803A6F10(c); // 800E411C
  c->r[3]=c->r[31]+0x00000050u; // 800E4120
  c->r[4]=c->r[30]+0x00000050u; // 800E4124
  c->lr=0x800E412Cu; f_8003AB48(c); // 800E4128
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E412C
  c->r[3]=c->r[31]+0x00000068u; // 800E4130
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800E4134
  c->r[4]=c->r[30]+0x00000068u; // 800E4138
  c->r[0]=R8(c->r[30]+0x00000060u); // 800E413C
  W8(c->r[31]+0x00000060u,c->r[0]); // 800E4140
  c->r[0]=R32(c->r[30]+0x00000064u); // 800E4144
  W32(c->r[31]+0x00000064u,c->r[0]); // 800E4148
  c->lr=0x800E4150u; f_8003AB48(c); // 800E414C
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4150
  c->r[3]=c->r[31]+0x00000078u; // 800E4154
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800E4158
  c->r[4]=c->r[30]+0x00000078u; // 800E415C
  c->lr=0x800E4164u; f_803A6F10(c); // 800E4160
  c->r[0]=R8(c->r[30]+0x00000098u); // 800E4164
  W8(c->r[31]+0x00000098u,c->r[0]); // 800E4168
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E416C
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800E4170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4174
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E4178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E417C
  c->lr=c->r[0]; // 800E4180
  c->r[1]=c->r[1]+0x00000010u; // 800E4184
  return; // 800E4188
}

// fn_800E418C
void f_800E418C(Ctx* __restrict c) {
  trace_call(0x800E418Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E418C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E4190
  c->ctr=c->r[12]; // 800E4194
  if (true) { dispatch(c,c->ctr); return; } // 800E4198
}

// fn_800E419C
void f_800E419C(Ctx* __restrict c) {
  trace_call(0x800E419Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E419C
  c->r[0]=c->lr; // 800E41A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E41A4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E41A8
  c->r[29]=c->r[3]|c->r[3]; // 800E41AC
  c->r[30]=c->r[4]|c->r[4]; // 800E41B0
  c->r[31]=c->r[5]|c->r[5]; // 800E41B4
  c->r[0]=R32(c->r[3]+0x00000054u); // 800E41B8
  cmps(c,0,(int32_t)c->r[0],7); // 800E41BC
  if (!crb(c,0)) { goto L_800E41D0; } // 800E41C0
  c->r[4]=c->r[31]|c->r[31]; // 800E41C4
  c->r[3]=c->r[3]+0x00000050u; // 800E41C8
  c->lr=0x800E41D0u; f_8003A994(c); // 800E41CC
L_800E41D0:;
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 800E41D0
  cmps(c,0,(int32_t)c->r[0],7); // 800E41D4
  if (!crb(c,0)) { goto L_800E41E8; } // 800E41D8
  c->r[4]=c->r[31]|c->r[31]; // 800E41DC
  c->r[3]=c->r[29]+0x00000068u; // 800E41E0
  c->lr=0x800E41E8u; f_8003A994(c); // 800E41E4
L_800E41E8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E41E8
  c->r[3]=c->r[29]|c->r[29]; // 800E41EC
  c->r[4]=c->r[30]|c->r[30]; // 800E41F0
  c->r[5]=c->r[31]|c->r[31]; // 800E41F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E41F8
  c->ctr=c->r[12]; // 800E41FC
  if (true) { c->lr=0x800E4204u; dispatch(c,c->ctr); } // 800E4200
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4204
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4208
  c->lr=c->r[0]; // 800E420C
  c->r[1]=c->r[1]+0x00000020u; // 800E4210
  return; // 800E4214
}

// fn_800E4218
void f_800E4218(Ctx* __restrict c) {
  trace_call(0x800E4218u);
  c->r[3]=0u+0x80410000u; // 800E4218
  c->r[3]=c->r[3]+0xFFFFDF86u; // 800E421C
  return; // 800E4220
}

// fn_800E4224
void f_800E4224(Ctx* __restrict c) {
  trace_call(0x800E4224u);
  c->r[3]=0u+0x000000A0u; // 800E4224
  return; // 800E4228
}

// fn_800E422C
void f_800E422C(Ctx* __restrict c) {
  trace_call(0x800E422Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E422C
  c->r[0]=c->lr; // 800E4230
  c->r[3]=0u+0x000000A0u; // 800E4234
  c->r[4]=c->r[13]+0xFFFFB795u; // 800E4238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E423C
  c->r[5]=0u+0x00000000u; // 800E4240
  c->r[6]=0u+0x00001001u; // 800E4244
  c->lr=0x800E424Cu; f_80244D20(c); // 800E4248
  cmps(c,0,(int32_t)c->r[3],0); // 800E424C
  if (crb(c,2)) { goto L_800E4258; } // 800E4250
  c->lr=0x800E4258u; f_800E3FC0(c); // 800E4254
L_800E4258:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4258
  c->lr=c->r[0]; // 800E425C
  c->r[1]=c->r[1]+0x00000010u; // 800E4260
  return; // 800E4264
}

// fn_800E4268
void f_800E4268(Ctx* __restrict c) {
  trace_call(0x800E4268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4268
  c->r[0]=c->lr; // 800E426C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4274
  c->r[31]=c->r[3]|c->r[3]; // 800E4278
  c->lr=0x800E4280u; f_800D7120(c); // 800E427C
  c->r[5]=0u+0x80410000u; // 800E4280
  c->r[3]=0u+0x59710000u; // 800E4284
  c->r[0]=c->r[3]+0x000047B2u; // 800E4288
  c->r[4]=0u+0x00000000u; // 800E428C
  c->r[5]=c->r[5]+0x000065D4u; // 800E4290
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E4294
  c->r[3]=c->r[31]|c->r[31]; // 800E4298
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E429C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E42A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E42A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E42A8
  c->lr=c->r[0]; // 800E42AC
  c->r[1]=c->r[1]+0x00000010u; // 800E42B0
  return; // 800E42B4
}

// fn_800E42B8
void f_800E42B8(Ctx* __restrict c) {
  trace_call(0x800E42B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E42B8
  c->r[0]=c->lr; // 800E42BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E42C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E42C4
  c->r[30]=c->r[3]|c->r[3]; // 800E42C8
  c->r[31]=c->r[4]|c->r[4]; // 800E42CC
  c->lr=0x800E42D4u; f_8030D728(c); // 800E42D0
  c->r[3]=c->r[31]|c->r[31]; // 800E42D4
  c->r[4]=0u+0x00000000u; // 800E42D8
  c->lr=0x800E42E0u; f_8030BE30(c); // 800E42DC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E42E0
  c->r[3]=c->r[31]|c->r[31]; // 800E42E4
  c->lr=0x800E42ECu; f_8030BD1C(c); // 800E42E8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E42EC
  c->r[3]=c->r[31]|c->r[31]; // 800E42F0
  c->lr=0x800E42F8u; f_8030BD1C(c); // 800E42F4
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E42F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E42FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4300
  c->lr=c->r[0]; // 800E4304
  c->r[1]=c->r[1]+0x00000010u; // 800E4308
  return; // 800E430C
}

// fn_800E4310
void f_800E4310(Ctx* __restrict c) {
  trace_call(0x800E4310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4310
  c->r[0]=c->lr; // 800E4314
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4318
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E431C
  c->r[30]=c->r[3]|c->r[3]; // 800E4320
  c->r[31]=c->r[4]|c->r[4]; // 800E4324
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E4328
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E432C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E4330
  c->r[3]=c->r[4]+0x00000030u; // 800E4334
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E4338
  c->r[4]=c->r[30]+0x00000030u; // 800E433C
  c->lr=0x800E4344u; f_8003AB48(c); // 800E4340
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E4344
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E4348
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E434C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4350
  c->lr=c->r[0]; // 800E4354
  c->r[1]=c->r[1]+0x00000010u; // 800E4358
  return; // 800E435C
}

// fn_800E4360
void f_800E4360(Ctx* __restrict c) {
  trace_call(0x800E4360u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E4360
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E4364
  c->ctr=c->r[12]; // 800E4368
  if (true) { dispatch(c,c->ctr); return; } // 800E436C
}

// fn_800E4370
void f_800E4370(Ctx* __restrict c) {
  trace_call(0x800E4370u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4370
  c->r[0]=c->lr; // 800E4374
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4378
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E437C
  c->r[29]=c->r[3]|c->r[3]; // 800E4380
  c->r[30]=c->r[4]|c->r[4]; // 800E4384
  c->r[31]=c->r[5]|c->r[5]; // 800E4388
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E438C
  cmps(c,0,(int32_t)c->r[0],7); // 800E4390
  if (!crb(c,0)) { goto L_800E43A4; } // 800E4394
  c->r[4]=c->r[31]|c->r[31]; // 800E4398
  c->r[3]=c->r[3]+0x00000030u; // 800E439C
  c->lr=0x800E43A4u; f_8003A994(c); // 800E43A0
L_800E43A4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E43A4
  c->r[3]=c->r[29]|c->r[29]; // 800E43A8
  c->r[4]=c->r[30]|c->r[30]; // 800E43AC
  c->r[5]=c->r[31]|c->r[31]; // 800E43B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E43B4
  c->ctr=c->r[12]; // 800E43B8
  if (true) { c->lr=0x800E43C0u; dispatch(c,c->ctr); } // 800E43BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E43C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E43C4
  c->lr=c->r[0]; // 800E43C8
  c->r[1]=c->r[1]+0x00000020u; // 800E43CC
  return; // 800E43D0
}

// fn_800E43D4
void f_800E43D4(Ctx* __restrict c) {
  trace_call(0x800E43D4u);
  c->r[3]=0u+0x80410000u; // 800E43D4
  c->r[3]=c->r[3]+0xFFFFDFA0u; // 800E43D8
  return; // 800E43DC
}

// fn_800E43E0
void f_800E43E0(Ctx* __restrict c) {
  trace_call(0x800E43E0u);
  c->r[3]=0u+0x00000040u; // 800E43E0
  return; // 800E43E4
}

// fn_800E43E8
void f_800E43E8(Ctx* __restrict c) {
  trace_call(0x800E43E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E43E8
  c->r[0]=c->lr; // 800E43EC
  c->r[3]=0u+0x00000040u; // 800E43F0
  c->r[4]=c->r[13]+0xFFFFB79Au; // 800E43F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E43F8
  c->r[5]=0u+0x00000000u; // 800E43FC
  c->r[6]=0u+0x00001001u; // 800E4400
  c->lr=0x800E4408u; f_80244D20(c); // 800E4404
  cmps(c,0,(int32_t)c->r[3],0); // 800E4408
  if (crb(c,2)) { goto L_800E4414; } // 800E440C
  c->lr=0x800E4414u; f_800E4268(c); // 800E4410
L_800E4414:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4414
  c->lr=c->r[0]; // 800E4418
  c->r[1]=c->r[1]+0x00000010u; // 800E441C
  return; // 800E4420
}

// fn_800E4424
void f_800E4424(Ctx* __restrict c) {
  trace_call(0x800E4424u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4424
  c->r[0]=c->lr; // 800E4428
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E442C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4430
  c->r[31]=c->r[3]|c->r[3]; // 800E4434
  c->lr=0x800E443Cu; f_800D7120(c); // 800E4438
  c->r[5]=0u+0x80410000u; // 800E443C
  c->r[3]=0u+0xEE320000u; // 800E4440
  c->r[0]=c->r[3]+0xFFFFF72Cu; // 800E4444
  c->r[4]=0u+0x00000000u; // 800E4448
  c->r[5]=c->r[5]+0x000065A0u; // 800E444C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E4450
  c->r[3]=c->r[31]|c->r[31]; // 800E4454
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800E4458
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E445C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4460
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4464
  c->lr=c->r[0]; // 800E4468
  c->r[1]=c->r[1]+0x00000010u; // 800E446C
  return; // 800E4470
}

// fn_800E4474
void f_800E4474(Ctx* __restrict c) {
  trace_call(0x800E4474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4474
  c->r[0]=c->lr; // 800E4478
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E447C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4480
  c->r[30]=c->r[3]|c->r[3]; // 800E4484
  c->r[31]=c->r[4]|c->r[4]; // 800E4488
  c->lr=0x800E4490u; f_8030D728(c); // 800E448C
  c->r[3]=c->r[31]|c->r[31]; // 800E4490
  c->lr=0x800E4498u; f_8030BD1C(c); // 800E4494
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E4498
  c->r[3]=c->r[31]|c->r[31]; // 800E449C
  c->r[4]=0u+0x00000000u; // 800E44A0
  c->lr=0x800E44A8u; f_8030BE30(c); // 800E44A4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E44A8
  c->r[3]=c->r[31]|c->r[31]; // 800E44AC
  c->lr=0x800E44B4u; f_8030BD1C(c); // 800E44B0
  W32(c->r[30]+0x00000038u,c->r[3]); // 800E44B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E44B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E44BC
  c->lr=c->r[0]; // 800E44C0
  c->r[1]=c->r[1]+0x00000010u; // 800E44C4
  return; // 800E44C8
}

// fn_800E44CC
void f_800E44CC(Ctx* __restrict c) {
  trace_call(0x800E44CCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E44CC
  c->r[5]=c->r[3]|c->r[3]; // 800E44D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E44D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E44D8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E44DC
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E44E0
  c->r[3]=c->r[4]+0x00000034u; // 800E44E4
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E44E8
  c->r[4]=c->r[5]+0x00000034u; // 800E44EC
  f_8003AB48(c); return; // 800E44F0
}

// fn_800E44F4
void f_800E44F4(Ctx* __restrict c) {
  trace_call(0x800E44F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E44F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E44F8
  c->ctr=c->r[12]; // 800E44FC
  if (true) { dispatch(c,c->ctr); return; } // 800E4500
}

// fn_800E4504
void f_800E4504(Ctx* __restrict c) {
  trace_call(0x800E4504u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4504
  c->r[0]=c->lr; // 800E4508
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E450C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4510
  c->r[29]=c->r[3]|c->r[3]; // 800E4514
  c->r[30]=c->r[4]|c->r[4]; // 800E4518
  c->r[31]=c->r[5]|c->r[5]; // 800E451C
  c->r[0]=R32(c->r[3]+0x00000038u); // 800E4520
  cmps(c,0,(int32_t)c->r[0],7); // 800E4524
  if (!crb(c,0)) { goto L_800E4538; } // 800E4528
  c->r[4]=c->r[31]|c->r[31]; // 800E452C
  c->r[3]=c->r[3]+0x00000034u; // 800E4530
  c->lr=0x800E4538u; f_8003A994(c); // 800E4534
L_800E4538:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E4538
  c->r[3]=c->r[29]|c->r[29]; // 800E453C
  c->r[4]=c->r[30]|c->r[30]; // 800E4540
  c->r[5]=c->r[31]|c->r[31]; // 800E4544
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E4548
  c->ctr=c->r[12]; // 800E454C
  if (true) { c->lr=0x800E4554u; dispatch(c,c->ctr); } // 800E4550
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4554
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4558
  c->lr=c->r[0]; // 800E455C
  c->r[1]=c->r[1]+0x00000020u; // 800E4560
  return; // 800E4564
}

// fn_800E4568
void f_800E4568(Ctx* __restrict c) {
  trace_call(0x800E4568u);
  c->r[3]=0u+0x80410000u; // 800E4568
  c->r[3]=c->r[3]+0xFFFFDFB1u; // 800E456C
  return; // 800E4570
}

// fn_800E4574
void f_800E4574(Ctx* __restrict c) {
  trace_call(0x800E4574u);
  c->r[3]=0u+0x00000040u; // 800E4574
  return; // 800E4578
}

// fn_800E457C
void f_800E457C(Ctx* __restrict c) {
  trace_call(0x800E457Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E457C
  c->r[0]=c->lr; // 800E4580
  c->r[3]=0u+0x00000040u; // 800E4584
  c->r[4]=c->r[13]+0xFFFFB79Fu; // 800E4588
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E458C
  c->r[5]=0u+0x00000000u; // 800E4590
  c->r[6]=0u+0x00001001u; // 800E4594
  c->lr=0x800E459Cu; f_80244D20(c); // 800E4598
  cmps(c,0,(int32_t)c->r[3],0); // 800E459C
  if (crb(c,2)) { goto L_800E45A8; } // 800E45A0
  c->lr=0x800E45A8u; f_800E4424(c); // 800E45A4
L_800E45A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E45A8
  c->lr=c->r[0]; // 800E45AC
  c->r[1]=c->r[1]+0x00000010u; // 800E45B0
  return; // 800E45B4
}

// fn_800E45B8
void f_800E45B8(Ctx* __restrict c) {
  trace_call(0x800E45B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E45B8
  c->r[0]=c->lr; // 800E45BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E45C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E45C4
  c->r[31]=c->r[3]|c->r[3]; // 800E45C8
  c->lr=0x800E45D0u; f_800D7120(c); // 800E45CC
  c->r[4]=0u+0x80410000u; // 800E45D0
  c->r[3]=0u+0xBC1A0000u; // 800E45D4
  c->r[0]=c->r[3]+0x000028D9u; // 800E45D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E45DC
  c->r[4]=c->r[4]+0x0000656Cu; // 800E45E0
  c->r[3]=c->r[31]|c->r[31]; // 800E45E4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E45E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E45EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E45F0
  c->lr=c->r[0]; // 800E45F4
  c->r[1]=c->r[1]+0x00000010u; // 800E45F8
  return; // 800E45FC
}

// fn_800E4600
void f_800E4600(Ctx* __restrict c) {
  trace_call(0x800E4600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4600
  c->r[0]=c->lr; // 800E4604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4608
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E460C
  c->r[30]=c->r[3]|c->r[3]; // 800E4610
  c->r[31]=c->r[4]|c->r[4]; // 800E4614
  c->lr=0x800E461Cu; f_8030D728(c); // 800E4618
  c->r[3]=c->r[31]|c->r[31]; // 800E461C
  c->lr=0x800E4624u; f_8030BD1C(c); // 800E4620
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E4624
  c->r[3]=c->r[31]|c->r[31]; // 800E4628
  c->lr=0x800E4630u; f_8030BD1C(c); // 800E462C
  W8(c->r[30]+0x00000034u,c->r[3]); // 800E4630
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4634
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4638
  c->lr=c->r[0]; // 800E463C
  c->r[1]=c->r[1]+0x00000010u; // 800E4640
  return; // 800E4644
}

// fn_800E4648
void f_800E4648(Ctx* __restrict c) {
  trace_call(0x800E4648u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800E4648
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E464C
  c->r[5]=R32(c->r[3]+0x00000030u); // 800E4650
  c->r[0]=R8(c->r[3]+0x00000034u); // 800E4654
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E4658
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E465C
  W32(c->r[4]+0x00000030u,c->r[5]); // 800E4660
  W8(c->r[4]+0x00000034u,c->r[0]); // 800E4664
  return; // 800E4668
}

// fn_800E466C
void f_800E466C(Ctx* __restrict c) {
  trace_call(0x800E466Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E466C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E4670
  c->ctr=c->r[12]; // 800E4674
  if (true) { dispatch(c,c->ctr); return; } // 800E4678
}

// fn_800E467C
void f_800E467C(Ctx* __restrict c) {
  trace_call(0x800E467Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E467C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E4680
  c->ctr=c->r[12]; // 800E4684
  if (true) { dispatch(c,c->ctr); return; } // 800E4688
}

// fn_800E468C
void f_800E468C(Ctx* __restrict c) {
  trace_call(0x800E468Cu);
  c->r[3]=0u+0x80410000u; // 800E468C
  c->r[3]=c->r[3]+0xFFFFDFBFu; // 800E4690
  return; // 800E4694
}

// fn_800E4698
void f_800E4698(Ctx* __restrict c) {
  trace_call(0x800E4698u);
  c->r[3]=0u+0x00000038u; // 800E4698
  return; // 800E469C
}

// fn_800E46A0
void f_800E46A0(Ctx* __restrict c) {
  trace_call(0x800E46A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E46A0
  c->r[0]=c->lr; // 800E46A4
  c->r[3]=0u+0x00000038u; // 800E46A8
  c->r[4]=c->r[13]+0xFFFFB7A4u; // 800E46AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E46B0
  c->r[5]=0u+0x00000000u; // 800E46B4
  c->r[6]=0u+0x00001001u; // 800E46B8
  c->lr=0x800E46C0u; f_80244D20(c); // 800E46BC
  cmps(c,0,(int32_t)c->r[3],0); // 800E46C0
  if (crb(c,2)) { goto L_800E46CC; } // 800E46C4
  c->lr=0x800E46CCu; f_800E45B8(c); // 800E46C8
L_800E46CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E46CC
  c->lr=c->r[0]; // 800E46D0
  c->r[1]=c->r[1]+0x00000010u; // 800E46D4
  return; // 800E46D8
}

// fn_800E46DC
void f_800E46DC(Ctx* __restrict c) {
  trace_call(0x800E46DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E46DC
  c->r[0]=c->lr; // 800E46E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E46E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E46E8
  c->r[31]=c->r[3]|c->r[3]; // 800E46EC
  c->lr=0x800E46F4u; f_800D7120(c); // 800E46F0
  c->r[5]=0u+0x80410000u; // 800E46F4
  c->r[3]=0u+0x9B800000u; // 800E46F8
  c->r[0]=c->r[3]+0x00005FF7u; // 800E46FC
  c->r[4]=0u+0x00000000u; // 800E4700
  c->r[5]=c->r[5]+0x00006538u; // 800E4704
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E4708
  c->r[3]=c->r[31]|c->r[31]; // 800E470C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E4710
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E4714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4718
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E471C
  c->lr=c->r[0]; // 800E4720
  c->r[1]=c->r[1]+0x00000010u; // 800E4724
  return; // 800E4728
}

// fn_800E472C
void f_800E472C(Ctx* __restrict c) {
  trace_call(0x800E472Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E472C
  c->r[0]=c->lr; // 800E4730
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4734
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4738
  c->r[30]=c->r[3]|c->r[3]; // 800E473C
  c->r[31]=c->r[4]|c->r[4]; // 800E4740
  c->lr=0x800E4748u; f_8030D728(c); // 800E4744
  c->r[3]=c->r[31]|c->r[31]; // 800E4748
  c->r[4]=0u+0x00000000u; // 800E474C
  c->lr=0x800E4754u; f_8030BE30(c); // 800E4750
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E4754
  c->r[3]=c->r[31]|c->r[31]; // 800E4758
  c->lr=0x800E4760u; f_8030BD1C(c); // 800E475C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E4760
  c->r[3]=c->r[31]|c->r[31]; // 800E4764
  c->lr=0x800E476Cu; f_8030BD1C(c); // 800E4768
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E476C
  c->r[3]=c->r[31]|c->r[31]; // 800E4770
  c->lr=0x800E4778u; f_8030BD1C(c); // 800E4774
  W8(c->r[30]+0x00000040u,c->r[3]); // 800E4778
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E477C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4780
  c->lr=c->r[0]; // 800E4784
  c->r[1]=c->r[1]+0x00000010u; // 800E4788
  return; // 800E478C
}

// fn_800E4790
void f_800E4790(Ctx* __restrict c) {
  trace_call(0x800E4790u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4790
  c->r[0]=c->lr; // 800E4794
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4798
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E479C
  c->r[30]=c->r[3]|c->r[3]; // 800E47A0
  c->r[31]=c->r[4]|c->r[4]; // 800E47A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E47A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E47AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E47B0
  c->r[3]=c->r[4]+0x00000030u; // 800E47B4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E47B8
  c->r[4]=c->r[30]+0x00000030u; // 800E47BC
  c->lr=0x800E47C4u; f_8003AB48(c); // 800E47C0
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800E47C4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800E47C8
  c->r[0]=R8(c->r[30]+0x00000040u); // 800E47CC
  W8(c->r[31]+0x00000040u,c->r[0]); // 800E47D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E47D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E47D8
  c->lr=c->r[0]; // 800E47DC
  c->r[1]=c->r[1]+0x00000010u; // 800E47E0
  return; // 800E47E4
}

// fn_800E47E8
void f_800E47E8(Ctx* __restrict c) {
  trace_call(0x800E47E8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E47E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E47EC
  c->ctr=c->r[12]; // 800E47F0
  if (true) { dispatch(c,c->ctr); return; } // 800E47F4
}

// fn_800E47F8
void f_800E47F8(Ctx* __restrict c) {
  trace_call(0x800E47F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E47F8
  c->r[0]=c->lr; // 800E47FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4800
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4804
  c->r[29]=c->r[3]|c->r[3]; // 800E4808
  c->r[30]=c->r[4]|c->r[4]; // 800E480C
  c->r[31]=c->r[5]|c->r[5]; // 800E4810
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E4814
  cmps(c,0,(int32_t)c->r[0],7); // 800E4818
  if (!crb(c,0)) { goto L_800E482C; } // 800E481C
  c->r[4]=c->r[31]|c->r[31]; // 800E4820
  c->r[3]=c->r[3]+0x00000030u; // 800E4824
  c->lr=0x800E482Cu; f_8003A994(c); // 800E4828
L_800E482C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E482C
  c->r[3]=c->r[29]|c->r[29]; // 800E4830
  c->r[4]=c->r[30]|c->r[30]; // 800E4834
  c->r[5]=c->r[31]|c->r[31]; // 800E4838
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E483C
  c->ctr=c->r[12]; // 800E4840
  if (true) { c->lr=0x800E4848u; dispatch(c,c->ctr); } // 800E4844
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4848
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E484C
  c->lr=c->r[0]; // 800E4850
  c->r[1]=c->r[1]+0x00000020u; // 800E4854
  return; // 800E4858
}

// fn_800E485C
void f_800E485C(Ctx* __restrict c) {
  trace_call(0x800E485Cu);
  c->r[3]=0u+0x80410000u; // 800E485C
  c->r[3]=c->r[3]+0xFFFFDFCEu; // 800E4860
  return; // 800E4864
}

// fn_800E4868
void f_800E4868(Ctx* __restrict c) {
  trace_call(0x800E4868u);
  c->r[3]=0u+0x00000044u; // 800E4868
  return; // 800E486C
}

// fn_800E4870
void f_800E4870(Ctx* __restrict c) {
  trace_call(0x800E4870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4870
  c->r[0]=c->lr; // 800E4874
  c->r[3]=0u+0x00000044u; // 800E4878
  c->r[4]=c->r[13]+0xFFFFB7A9u; // 800E487C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4880
  c->r[5]=0u+0x00000000u; // 800E4884
  c->r[6]=0u+0x00001001u; // 800E4888
  c->lr=0x800E4890u; f_80244D20(c); // 800E488C
  cmps(c,0,(int32_t)c->r[3],0); // 800E4890
  if (crb(c,2)) { goto L_800E489C; } // 800E4894
  c->lr=0x800E489Cu; f_800E46DC(c); // 800E4898
L_800E489C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E489C
  c->lr=c->r[0]; // 800E48A0
  c->r[1]=c->r[1]+0x00000010u; // 800E48A4
  return; // 800E48A8
}

// fn_800E48AC
void f_800E48AC(Ctx* __restrict c) {
  trace_call(0x800E48ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E48AC
  c->r[0]=c->lr; // 800E48B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E48B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E48B8
  c->r[31]=c->r[3]|c->r[3]; // 800E48BC
  c->lr=0x800E48C4u; f_800D7120(c); // 800E48C0
  c->r[5]=0u+0x80410000u; // 800E48C4
  c->r[3]=0u+0x14780000u; // 800E48C8
  c->r[0]=c->r[3]+0xFFFFDB00u; // 800E48CC
  c->r[4]=0u+0x00000000u; // 800E48D0
  c->r[5]=c->r[5]+0x00006504u; // 800E48D4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E48D8
  c->r[3]=c->r[31]|c->r[31]; // 800E48DC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E48E0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E48E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E48E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E48EC
  c->lr=c->r[0]; // 800E48F0
  c->r[1]=c->r[1]+0x00000010u; // 800E48F4
  return; // 800E48F8
}

// fn_800E48FC
void f_800E48FC(Ctx* __restrict c) {
  trace_call(0x800E48FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E48FC
  c->r[0]=c->lr; // 800E4900
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4904
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4908
  c->r[30]=c->r[3]|c->r[3]; // 800E490C
  c->r[31]=c->r[4]|c->r[4]; // 800E4910
  c->lr=0x800E4918u; f_8030D728(c); // 800E4914
  c->r[3]=c->r[31]|c->r[31]; // 800E4918
  c->r[4]=0u+0x00000000u; // 800E491C
  c->lr=0x800E4924u; f_8030BE30(c); // 800E4920
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E4924
  c->r[3]=c->r[31]|c->r[31]; // 800E4928
  c->lr=0x800E4930u; f_8030BD1C(c); // 800E492C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E4930
  c->r[3]=c->r[31]|c->r[31]; // 800E4934
  c->lr=0x800E493Cu; f_8030C0A0(c); // 800E4938
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E493C
  c->r[3]=c->r[31]|c->r[31]; // 800E4940
  c->lr=0x800E4948u; f_8030C0A0(c); // 800E4944
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800E4948
  c->r[3]=c->r[31]|c->r[31]; // 800E494C
  c->lr=0x800E4954u; f_8030C0A0(c); // 800E4950
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800E4954
  c->r[3]=c->r[31]|c->r[31]; // 800E4958
  c->lr=0x800E4960u; f_8030BD1C(c); // 800E495C
  W32(c->r[30]+0x00000048u,c->r[3]); // 800E4960
  c->r[3]=c->r[31]|c->r[31]; // 800E4964
  c->lr=0x800E496Cu; f_8030BD1C(c); // 800E4968
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800E496C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4970
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4974
  c->lr=c->r[0]; // 800E4978
  c->r[1]=c->r[1]+0x00000010u; // 800E497C
  return; // 800E4980
}

// fn_800E4984
void f_800E4984(Ctx* __restrict c) {
  trace_call(0x800E4984u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4984
  c->r[0]=c->lr; // 800E4988
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E498C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4990
  c->r[31]=c->r[4]|c->r[4]; // 800E4994
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E4998
  c->r[30]=c->r[3]|c->r[3]; // 800E499C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E49A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E49A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E49A8
  c->r[3]=c->r[4]+0x00000030u; // 800E49AC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E49B0
  c->r[4]=c->r[30]+0x00000030u; // 800E49B4
  c->lr=0x800E49BCu; f_8003AB48(c); // 800E49B8
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E49BC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800E49C0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E49C4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800E49C8
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E49CC
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800E49D0
  c->r[0]=R32(c->r[30]+0x00000048u); // 800E49D4
  W32(c->r[31]+0x00000048u,c->r[0]); // 800E49D8
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800E49DC
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800E49E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E49E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E49E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E49EC
  c->lr=c->r[0]; // 800E49F0
  c->r[1]=c->r[1]+0x00000010u; // 800E49F4
  return; // 800E49F8
}

// fn_800E49FC
void f_800E49FC(Ctx* __restrict c) {
  trace_call(0x800E49FCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E49FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E4A00
  c->ctr=c->r[12]; // 800E4A04
  if (true) { dispatch(c,c->ctr); return; } // 800E4A08
}

// fn_800E4A0C
void f_800E4A0C(Ctx* __restrict c) {
  trace_call(0x800E4A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4A0C
  c->r[0]=c->lr; // 800E4A10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4A14
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4A18
  c->r[29]=c->r[3]|c->r[3]; // 800E4A1C
  c->r[30]=c->r[4]|c->r[4]; // 800E4A20
  c->r[31]=c->r[5]|c->r[5]; // 800E4A24
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E4A28
  cmps(c,0,(int32_t)c->r[0],7); // 800E4A2C
  if (!crb(c,0)) { goto L_800E4A40; } // 800E4A30
  c->r[4]=c->r[31]|c->r[31]; // 800E4A34
  c->r[3]=c->r[3]+0x00000030u; // 800E4A38
  c->lr=0x800E4A40u; f_8003A994(c); // 800E4A3C
L_800E4A40:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E4A40
  c->r[3]=c->r[29]|c->r[29]; // 800E4A44
  c->r[4]=c->r[30]|c->r[30]; // 800E4A48
  c->r[5]=c->r[31]|c->r[31]; // 800E4A4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E4A50
  c->ctr=c->r[12]; // 800E4A54
  if (true) { c->lr=0x800E4A5Cu; dispatch(c,c->ctr); } // 800E4A58
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4A5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4A60
  c->lr=c->r[0]; // 800E4A64
  c->r[1]=c->r[1]+0x00000020u; // 800E4A68
  return; // 800E4A6C
}

// fn_800E4A70
void f_800E4A70(Ctx* __restrict c) {
  trace_call(0x800E4A70u);
  c->r[3]=0u+0x80410000u; // 800E4A70
  c->r[3]=c->r[3]+0xFFFFDFE0u; // 800E4A74
  return; // 800E4A78
}

// fn_800E4A7C
void f_800E4A7C(Ctx* __restrict c) {
  trace_call(0x800E4A7Cu);
  c->r[3]=0u+0x00000050u; // 800E4A7C
  return; // 800E4A80
}

// fn_800E4A84
void f_800E4A84(Ctx* __restrict c) {
  trace_call(0x800E4A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4A84
  c->r[0]=c->lr; // 800E4A88
  c->r[3]=0u+0x00000050u; // 800E4A8C
  c->r[4]=c->r[13]+0xFFFFB7AEu; // 800E4A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4A94
  c->r[5]=0u+0x00000000u; // 800E4A98
  c->r[6]=0u+0x00001001u; // 800E4A9C
  c->lr=0x800E4AA4u; f_80244D20(c); // 800E4AA0
  cmps(c,0,(int32_t)c->r[3],0); // 800E4AA4
  if (crb(c,2)) { goto L_800E4AB0; } // 800E4AA8
  c->lr=0x800E4AB0u; f_800E48AC(c); // 800E4AAC
L_800E4AB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4AB0
  c->lr=c->r[0]; // 800E4AB4
  c->r[1]=c->r[1]+0x00000010u; // 800E4AB8
  return; // 800E4ABC
}

// fn_800E4AC0
void f_800E4AC0(Ctx* __restrict c) {
  trace_call(0x800E4AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4AC0
  c->r[0]=c->lr; // 800E4AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4ACC
  c->r[31]=c->r[3]|c->r[3]; // 800E4AD0
  c->lr=0x800E4AD8u; f_800D7120(c); // 800E4AD4
  c->r[5]=0u+0x80410000u; // 800E4AD8
  c->r[3]=0u+0x14780000u; // 800E4ADC
  c->r[0]=c->r[3]+0xFFFFDB00u; // 800E4AE0
  c->r[4]=0u+0x00000000u; // 800E4AE4
  c->r[5]=c->r[5]+0x000064D0u; // 800E4AE8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E4AEC
  c->r[3]=c->r[31]|c->r[31]; // 800E4AF0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E4AF4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E4AF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4B00
  c->lr=c->r[0]; // 800E4B04
  c->r[1]=c->r[1]+0x00000010u; // 800E4B08
  return; // 800E4B0C
}

// fn_800E4B10
void f_800E4B10(Ctx* __restrict c) {
  trace_call(0x800E4B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4B10
  c->r[0]=c->lr; // 800E4B14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4B18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4B1C
  c->r[30]=c->r[3]|c->r[3]; // 800E4B20
  c->r[31]=c->r[4]|c->r[4]; // 800E4B24
  c->lr=0x800E4B2Cu; f_8030D728(c); // 800E4B28
  c->r[3]=c->r[31]|c->r[31]; // 800E4B2C
  c->r[4]=0u+0x00000000u; // 800E4B30
  c->lr=0x800E4B38u; f_8030BE30(c); // 800E4B34
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E4B38
  c->r[3]=c->r[31]|c->r[31]; // 800E4B3C
  c->lr=0x800E4B44u; f_8030BD1C(c); // 800E4B40
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E4B44
  c->r[3]=c->r[31]|c->r[31]; // 800E4B48
  c->lr=0x800E4B50u; f_8030C0A0(c); // 800E4B4C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E4B50
  c->r[3]=c->r[31]|c->r[31]; // 800E4B54
  c->lr=0x800E4B5Cu; f_8030C0A0(c); // 800E4B58
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800E4B5C
  c->r[3]=c->r[31]|c->r[31]; // 800E4B60
  c->lr=0x800E4B68u; f_8030C0A0(c); // 800E4B64
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800E4B68
  c->r[3]=c->r[31]|c->r[31]; // 800E4B6C
  c->lr=0x800E4B74u; f_8030BD1C(c); // 800E4B70
  W32(c->r[30]+0x00000048u,c->r[3]); // 800E4B74
  c->r[3]=c->r[31]|c->r[31]; // 800E4B78
  c->lr=0x800E4B80u; f_8030BD1C(c); // 800E4B7C
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800E4B80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4B84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4B88
  c->lr=c->r[0]; // 800E4B8C
  c->r[1]=c->r[1]+0x00000010u; // 800E4B90
  return; // 800E4B94
}

// fn_800E4B98
void f_800E4B98(Ctx* __restrict c) {
  trace_call(0x800E4B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4B98
  c->r[0]=c->lr; // 800E4B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4BA4
  c->r[31]=c->r[4]|c->r[4]; // 800E4BA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E4BAC
  c->r[30]=c->r[3]|c->r[3]; // 800E4BB0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E4BB4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E4BB8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E4BBC
  c->r[3]=c->r[4]+0x00000030u; // 800E4BC0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E4BC4
  c->r[4]=c->r[30]+0x00000030u; // 800E4BC8
  c->lr=0x800E4BD0u; f_8003AB48(c); // 800E4BCC
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4BD0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800E4BD4
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4BD8
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800E4BDC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4BE0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800E4BE4
  c->r[0]=R32(c->r[30]+0x00000048u); // 800E4BE8
  W32(c->r[31]+0x00000048u,c->r[0]); // 800E4BEC
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800E4BF0
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800E4BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4BF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E4BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4C00
  c->lr=c->r[0]; // 800E4C04
  c->r[1]=c->r[1]+0x00000010u; // 800E4C08
  return; // 800E4C0C
}

// fn_800E4C10
void f_800E4C10(Ctx* __restrict c) {
  trace_call(0x800E4C10u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E4C10
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E4C14
  c->ctr=c->r[12]; // 800E4C18
  if (true) { dispatch(c,c->ctr); return; } // 800E4C1C
}

// fn_800E4C20
void f_800E4C20(Ctx* __restrict c) {
  trace_call(0x800E4C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4C20
  c->r[0]=c->lr; // 800E4C24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4C28
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4C2C
  c->r[29]=c->r[3]|c->r[3]; // 800E4C30
  c->r[30]=c->r[4]|c->r[4]; // 800E4C34
  c->r[31]=c->r[5]|c->r[5]; // 800E4C38
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E4C3C
  cmps(c,0,(int32_t)c->r[0],7); // 800E4C40
  if (!crb(c,0)) { goto L_800E4C54; } // 800E4C44
  c->r[4]=c->r[31]|c->r[31]; // 800E4C48
  c->r[3]=c->r[3]+0x00000030u; // 800E4C4C
  c->lr=0x800E4C54u; f_8003A994(c); // 800E4C50
L_800E4C54:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E4C54
  c->r[3]=c->r[29]|c->r[29]; // 800E4C58
  c->r[4]=c->r[30]|c->r[30]; // 800E4C5C
  c->r[5]=c->r[31]|c->r[31]; // 800E4C60
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E4C64
  c->ctr=c->r[12]; // 800E4C68
  if (true) { c->lr=0x800E4C70u; dispatch(c,c->ctr); } // 800E4C6C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4C70
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4C74
  c->lr=c->r[0]; // 800E4C78
  c->r[1]=c->r[1]+0x00000020u; // 800E4C7C
  return; // 800E4C80
}

// fn_800E4C84
void f_800E4C84(Ctx* __restrict c) {
  trace_call(0x800E4C84u);
  c->r[3]=0u+0x80410000u; // 800E4C84
  c->r[3]=c->r[3]+0xFFFFDFFAu; // 800E4C88
  return; // 800E4C8C
}

// fn_800E4C90
void f_800E4C90(Ctx* __restrict c) {
  trace_call(0x800E4C90u);
  c->r[3]=0u+0x00000050u; // 800E4C90
  return; // 800E4C94
}

// fn_800E4C98
void f_800E4C98(Ctx* __restrict c) {
  trace_call(0x800E4C98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4C98
  c->r[0]=c->lr; // 800E4C9C
  c->r[3]=0u+0x00000050u; // 800E4CA0
  c->r[4]=c->r[13]+0xFFFFB7B3u; // 800E4CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4CA8
  c->r[5]=0u+0x00000000u; // 800E4CAC
  c->r[6]=0u+0x00001001u; // 800E4CB0
  c->lr=0x800E4CB8u; f_80244D20(c); // 800E4CB4
  cmps(c,0,(int32_t)c->r[3],0); // 800E4CB8
  if (crb(c,2)) { goto L_800E4CC4; } // 800E4CBC
  c->lr=0x800E4CC4u; f_800E4AC0(c); // 800E4CC0
L_800E4CC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4CC4
  c->lr=c->r[0]; // 800E4CC8
  c->r[1]=c->r[1]+0x00000010u; // 800E4CCC
  return; // 800E4CD0
}

// fn_800E4CD4
void f_800E4CD4(Ctx* __restrict c) {
  trace_call(0x800E4CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4CD4
  c->r[0]=c->lr; // 800E4CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4CE0
  c->r[31]=c->r[3]|c->r[3]; // 800E4CE4
  c->lr=0x800E4CECu; f_800D7120(c); // 800E4CE8
  c->r[5]=0u+0x80410000u; // 800E4CEC
  c->r[3]=0u+0xBC190000u; // 800E4CF0
  c->r[4]=0u+0x00000000u; // 800E4CF4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E4CF8
  c->r[0]=c->r[3]+0x000021D3u; // 800E4CFC
  c->r[5]=c->r[5]+0x0000649Cu; // 800E4D00
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E4D04
  c->r[3]=c->r[31]|c->r[31]; // 800E4D08
  W32(c->r[31]+0x00000044u,c->r[4]); // 800E4D0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E4D10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4D14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4D18
  c->lr=c->r[0]; // 800E4D1C
  c->r[1]=c->r[1]+0x00000010u; // 800E4D20
  return; // 800E4D24
}

// fn_800E4D28
void f_800E4D28(Ctx* __restrict c) {
  trace_call(0x800E4D28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4D28
  c->r[0]=c->lr; // 800E4D2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4D30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4D34
  c->r[30]=c->r[3]|c->r[3]; // 800E4D38
  c->r[31]=c->r[4]|c->r[4]; // 800E4D3C
  c->lr=0x800E4D44u; f_8030D728(c); // 800E4D40
  c->r[3]=c->r[31]|c->r[31]; // 800E4D44
  c->r[4]=0u+0x00000000u; // 800E4D48
  c->lr=0x800E4D50u; f_8030BE30(c); // 800E4D4C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E4D50
  c->r[3]=c->r[31]|c->r[31]; // 800E4D54
  c->lr=0x800E4D5Cu; f_8030BD1C(c); // 800E4D58
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E4D5C
  c->r[3]=c->r[31]|c->r[31]; // 800E4D60
  c->r[4]=0u+0x00000000u; // 800E4D64
  c->lr=0x800E4D6Cu; f_8030BE30(c); // 800E4D68
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E4D6C
  c->r[3]=c->r[31]|c->r[31]; // 800E4D70
  c->lr=0x800E4D78u; f_8030BD1C(c); // 800E4D74
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E4D78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4D7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4D80
  c->lr=c->r[0]; // 800E4D84
  c->r[1]=c->r[1]+0x00000010u; // 800E4D88
  return; // 800E4D8C
}

// fn_800E4D90
void f_800E4D90(Ctx* __restrict c) {
  trace_call(0x800E4D90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4D90
  c->r[0]=c->lr; // 800E4D94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4D98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4D9C
  c->r[30]=c->r[3]|c->r[3]; // 800E4DA0
  c->r[31]=c->r[4]|c->r[4]; // 800E4DA4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E4DA8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E4DAC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E4DB0
  c->r[3]=c->r[4]+0x00000030u; // 800E4DB4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E4DB8
  c->r[4]=c->r[30]+0x00000030u; // 800E4DBC
  c->lr=0x800E4DC4u; f_8003AB48(c); // 800E4DC0
  c->r[3]=c->r[31]+0x0000003Cu; // 800E4DC4
  c->r[4]=c->r[30]+0x0000003Cu; // 800E4DC8
  c->lr=0x800E4DD0u; f_8003AB48(c); // 800E4DCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4DD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4DD4
  c->lr=c->r[0]; // 800E4DD8
  c->r[1]=c->r[1]+0x00000010u; // 800E4DDC
  return; // 800E4DE0
}

// fn_800E4DE4
void f_800E4DE4(Ctx* __restrict c) {
  trace_call(0x800E4DE4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E4DE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E4DE8
  c->ctr=c->r[12]; // 800E4DEC
  if (true) { dispatch(c,c->ctr); return; } // 800E4DF0
}

// fn_800E4DF4
void f_800E4DF4(Ctx* __restrict c) {
  trace_call(0x800E4DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4DF4
  c->r[0]=c->lr; // 800E4DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E4DFC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E4E00
  c->r[29]=c->r[3]|c->r[3]; // 800E4E04
  c->r[30]=c->r[4]|c->r[4]; // 800E4E08
  c->r[31]=c->r[5]|c->r[5]; // 800E4E0C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E4E10
  cmps(c,0,(int32_t)c->r[0],7); // 800E4E14
  if (!crb(c,0)) { goto L_800E4E28; } // 800E4E18
  c->r[4]=c->r[31]|c->r[31]; // 800E4E1C
  c->r[3]=c->r[3]+0x00000030u; // 800E4E20
  c->lr=0x800E4E28u; f_8003A994(c); // 800E4E24
L_800E4E28:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800E4E28
  cmps(c,0,(int32_t)c->r[0],7); // 800E4E2C
  if (!crb(c,0)) { goto L_800E4E40; } // 800E4E30
  c->r[4]=c->r[31]|c->r[31]; // 800E4E34
  c->r[3]=c->r[29]+0x0000003Cu; // 800E4E38
  c->lr=0x800E4E40u; f_8003A994(c); // 800E4E3C
L_800E4E40:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E4E40
  c->r[3]=c->r[29]|c->r[29]; // 800E4E44
  c->r[4]=c->r[30]|c->r[30]; // 800E4E48
  c->r[5]=c->r[31]|c->r[31]; // 800E4E4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E4E50
  c->ctr=c->r[12]; // 800E4E54
  if (true) { c->lr=0x800E4E5Cu; dispatch(c,c->ctr); } // 800E4E58
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E4E5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E4E60
  c->lr=c->r[0]; // 800E4E64
  c->r[1]=c->r[1]+0x00000020u; // 800E4E68
  return; // 800E4E6C
}

// fn_800E4E70
void f_800E4E70(Ctx* __restrict c) {
  trace_call(0x800E4E70u);
  c->r[3]=0u+0x80410000u; // 800E4E70
  c->r[3]=c->r[3]+0xFFFFE011u; // 800E4E74
  return; // 800E4E78
}

// fn_800E4E7C
void f_800E4E7C(Ctx* __restrict c) {
  trace_call(0x800E4E7Cu);
  c->r[3]=0u+0x00000048u; // 800E4E7C
  return; // 800E4E80
}

// fn_800E4E84
void f_800E4E84(Ctx* __restrict c) {
  trace_call(0x800E4E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4E84
  c->r[0]=c->lr; // 800E4E88
  c->r[3]=0u+0x00000048u; // 800E4E8C
  c->r[4]=c->r[13]+0xFFFFB7B8u; // 800E4E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4E94
  c->r[5]=0u+0x00000000u; // 800E4E98
  c->r[6]=0u+0x00001001u; // 800E4E9C
  c->lr=0x800E4EA4u; f_80244D20(c); // 800E4EA0
  cmps(c,0,(int32_t)c->r[3],0); // 800E4EA4
  if (crb(c,2)) { goto L_800E4EB0; } // 800E4EA8
  c->lr=0x800E4EB0u; f_800E4CD4(c); // 800E4EAC
L_800E4EB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4EB0
  c->lr=c->r[0]; // 800E4EB4
  c->r[1]=c->r[1]+0x00000010u; // 800E4EB8
  return; // 800E4EBC
}

// fn_800E4EC0
void f_800E4EC0(Ctx* __restrict c) {
  trace_call(0x800E4EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4EC0
  c->r[0]=c->lr; // 800E4EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4ECC
  c->r[31]=c->r[3]|c->r[3]; // 800E4ED0
  c->lr=0x800E4ED8u; f_800D7120(c); // 800E4ED4
  c->r[5]=0u+0x80410000u; // 800E4ED8
  c->r[3]=0u+0xC36C0000u; // 800E4EDC
  c->r[0]=c->r[3]+0x000010A1u; // 800E4EE0
  c->r[4]=0u+0x00000000u; // 800E4EE4
  c->r[5]=c->r[5]+0x00006468u; // 800E4EE8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E4EEC
  c->r[3]=c->r[31]|c->r[31]; // 800E4EF0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E4EF4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E4EF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4F00
  c->lr=c->r[0]; // 800E4F04
  c->r[1]=c->r[1]+0x00000010u; // 800E4F08
  return; // 800E4F0C
}

// fn_800E4F10
void f_800E4F10(Ctx* __restrict c) {
  trace_call(0x800E4F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4F10
  c->r[0]=c->lr; // 800E4F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4F18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4F1C
  c->r[31]=c->r[4]|c->r[4]; // 800E4F20
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E4F24
  c->r[30]=c->r[3]|c->r[3]; // 800E4F28
  c->lr=0x800E4F30u; f_8030D728(c); // 800E4F2C
  c->r[3]=c->r[31]|c->r[31]; // 800E4F30
  c->r[4]=0u+0x00000000u; // 800E4F34
  c->lr=0x800E4F3Cu; f_8030BE30(c); // 800E4F38
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E4F3C
  c->r[3]=c->r[31]|c->r[31]; // 800E4F40
  c->lr=0x800E4F48u; f_8030BD1C(c); // 800E4F44
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E4F48
  c->r[3]=c->r[31]|c->r[31]; // 800E4F4C
  c->lr=0x800E4F54u; f_8030BD1C(c); // 800E4F50
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E4F54
  c->r[3]=c->r[31]|c->r[31]; // 800E4F58
  c->lr=0x800E4F60u; f_8030BD1C(c); // 800E4F5C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E4F60
  c->r[3]=c->r[31]|c->r[31]; // 800E4F64
  c->lr=0x800E4F6Cu; f_8030C0A0(c); // 800E4F68
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800E4F6C
  c->r[3]=c->r[31]|c->r[31]; // 800E4F70
  c->lr=0x800E4F78u; f_8030C0A0(c); // 800E4F74
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800E4F78
  c->r[3]=c->r[31]|c->r[31]; // 800E4F7C
  c->lr=0x800E4F84u; f_8030C0A0(c); // 800E4F80
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4F84
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800E4F88
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 800E4F8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4F90
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E4F94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4F98
  c->lr=c->r[0]; // 800E4F9C
  c->r[1]=c->r[1]+0x00000010u; // 800E4FA0
  return; // 800E4FA4
}

// fn_800E4FA8
void f_800E4FA8(Ctx* __restrict c) {
  trace_call(0x800E4FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4FA8
  c->r[0]=c->lr; // 800E4FAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4FB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4FB4
  c->r[31]=c->r[4]|c->r[4]; // 800E4FB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E4FBC
  c->r[30]=c->r[3]|c->r[3]; // 800E4FC0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E4FC4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E4FC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E4FCC
  c->r[3]=c->r[4]+0x00000030u; // 800E4FD0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E4FD4
  c->r[4]=c->r[30]+0x00000030u; // 800E4FD8
  c->lr=0x800E4FE0u; f_8003AB48(c); // 800E4FDC
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800E4FE0
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800E4FE4
  c->r[0]=R32(c->r[30]+0x00000040u); // 800E4FE8
  W32(c->r[31]+0x00000040u,c->r[0]); // 800E4FEC
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4FF0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800E4FF4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E4FF8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800E4FFC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E5000
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800E5004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5008
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E500C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5010
  c->lr=c->r[0]; // 800E5014
  c->r[1]=c->r[1]+0x00000010u; // 800E5018
  return; // 800E501C
}

// fn_800E5020
void f_800E5020(Ctx* __restrict c) {
  trace_call(0x800E5020u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E5020
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5024
  c->ctr=c->r[12]; // 800E5028
  if (true) { dispatch(c,c->ctr); return; } // 800E502C
}

// fn_800E5030
void f_800E5030(Ctx* __restrict c) {
  trace_call(0x800E5030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5030
  c->r[0]=c->lr; // 800E5034
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5038
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E503C
  c->r[29]=c->r[3]|c->r[3]; // 800E5040
  c->r[30]=c->r[4]|c->r[4]; // 800E5044
  c->r[31]=c->r[5]|c->r[5]; // 800E5048
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E504C
  cmps(c,0,(int32_t)c->r[0],7); // 800E5050
  if (!crb(c,0)) { goto L_800E5064; } // 800E5054
  c->r[4]=c->r[31]|c->r[31]; // 800E5058
  c->r[3]=c->r[3]+0x00000030u; // 800E505C
  c->lr=0x800E5064u; f_8003A994(c); // 800E5060
L_800E5064:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E5064
  c->r[3]=c->r[29]|c->r[29]; // 800E5068
  c->r[4]=c->r[30]|c->r[30]; // 800E506C
  c->r[5]=c->r[31]|c->r[31]; // 800E5070
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5074
  c->ctr=c->r[12]; // 800E5078
  if (true) { c->lr=0x800E5080u; dispatch(c,c->ctr); } // 800E507C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5080
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5084
  c->lr=c->r[0]; // 800E5088
  c->r[1]=c->r[1]+0x00000020u; // 800E508C
  return; // 800E5090
}

// fn_800E5094
void f_800E5094(Ctx* __restrict c) {
  trace_call(0x800E5094u);
  c->r[3]=0u+0x80410000u; // 800E5094
  c->r[3]=c->r[3]+0xFFFFE01Fu; // 800E5098
  return; // 800E509C
}

// fn_800E50A0
void f_800E50A0(Ctx* __restrict c) {
  trace_call(0x800E50A0u);
  c->r[3]=0u+0x00000054u; // 800E50A0
  return; // 800E50A4
}

// fn_800E50A8
void f_800E50A8(Ctx* __restrict c) {
  trace_call(0x800E50A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E50A8
  c->r[0]=c->lr; // 800E50AC
  c->r[3]=0u+0x00000054u; // 800E50B0
  c->r[4]=c->r[13]+0xFFFFB7BDu; // 800E50B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E50B8
  c->r[5]=0u+0x00000000u; // 800E50BC
  c->r[6]=0u+0x00001001u; // 800E50C0
  c->lr=0x800E50C8u; f_80244D20(c); // 800E50C4
  cmps(c,0,(int32_t)c->r[3],0); // 800E50C8
  if (crb(c,2)) { goto L_800E50D4; } // 800E50CC
  c->lr=0x800E50D4u; f_800E4EC0(c); // 800E50D0
L_800E50D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E50D4
  c->lr=c->r[0]; // 800E50D8
  c->r[1]=c->r[1]+0x00000010u; // 800E50DC
  return; // 800E50E0
}

// fn_800E50E4
void f_800E50E4(Ctx* __restrict c) {
  trace_call(0x800E50E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E50E4
  c->r[0]=c->lr; // 800E50E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E50EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E50F0
  c->r[31]=c->r[3]|c->r[3]; // 800E50F4
  c->lr=0x800E50FCu; f_800D7120(c); // 800E50F8
  c->r[5]=0u+0x80410000u; // 800E50FC
  c->r[3]=0u+0x77620000u; // 800E5100
  c->r[0]=c->r[3]+0x00003AA9u; // 800E5104
  c->r[4]=0u+0x00000000u; // 800E5108
  c->r[5]=c->r[5]+0x00006434u; // 800E510C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E5110
  c->r[3]=c->r[31]|c->r[31]; // 800E5114
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E5118
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E511C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5120
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5124
  c->lr=c->r[0]; // 800E5128
  c->r[1]=c->r[1]+0x00000010u; // 800E512C
  return; // 800E5130
}

// fn_800E5134
void f_800E5134(Ctx* __restrict c) {
  trace_call(0x800E5134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5134
  c->r[0]=c->lr; // 800E5138
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E513C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5140
  c->r[30]=c->r[3]|c->r[3]; // 800E5144
  c->r[31]=c->r[4]|c->r[4]; // 800E5148
  c->lr=0x800E5150u; f_8030D728(c); // 800E514C
  c->r[3]=c->r[31]|c->r[31]; // 800E5150
  c->r[4]=0u+0x00000000u; // 800E5154
  c->lr=0x800E515Cu; f_8030BE30(c); // 800E5158
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E515C
  c->r[3]=c->r[31]|c->r[31]; // 800E5160
  c->lr=0x800E5168u; f_8030BD1C(c); // 800E5164
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E5168
  c->r[3]=c->r[31]|c->r[31]; // 800E516C
  c->lr=0x800E5174u; f_8030BD1C(c); // 800E5170
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E5174
  c->r[3]=c->r[31]|c->r[31]; // 800E5178
  c->lr=0x800E5180u; f_8030BD1C(c); // 800E517C
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800E5180
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5184
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5188
  c->lr=c->r[0]; // 800E518C
  c->r[1]=c->r[1]+0x00000010u; // 800E5190
  return; // 800E5194
}

// fn_800E5198
void f_800E5198(Ctx* __restrict c) {
  trace_call(0x800E5198u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5198
  c->r[0]=c->lr; // 800E519C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E51A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E51A4
  c->r[30]=c->r[3]|c->r[3]; // 800E51A8
  c->r[31]=c->r[4]|c->r[4]; // 800E51AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E51B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E51B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E51B8
  c->r[3]=c->r[4]+0x00000030u; // 800E51BC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E51C0
  c->r[4]=c->r[30]+0x00000030u; // 800E51C4
  c->lr=0x800E51CCu; f_8003AB48(c); // 800E51C8
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E51CC
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E51D0
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800E51D4
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800E51D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E51DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E51E0
  c->lr=c->r[0]; // 800E51E4
  c->r[1]=c->r[1]+0x00000010u; // 800E51E8
  return; // 800E51EC
}

// fn_800E51F0
void f_800E51F0(Ctx* __restrict c) {
  trace_call(0x800E51F0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E51F0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E51F4
  c->ctr=c->r[12]; // 800E51F8
  if (true) { dispatch(c,c->ctr); return; } // 800E51FC
}

// fn_800E5200
void f_800E5200(Ctx* __restrict c) {
  trace_call(0x800E5200u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5200
  c->r[0]=c->lr; // 800E5204
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5208
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E520C
  c->r[29]=c->r[3]|c->r[3]; // 800E5210
  c->r[30]=c->r[4]|c->r[4]; // 800E5214
  c->r[31]=c->r[5]|c->r[5]; // 800E5218
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E521C
  cmps(c,0,(int32_t)c->r[0],7); // 800E5220
  if (!crb(c,0)) { goto L_800E5234; } // 800E5224
  c->r[4]=c->r[31]|c->r[31]; // 800E5228
  c->r[3]=c->r[3]+0x00000030u; // 800E522C
  c->lr=0x800E5234u; f_8003A994(c); // 800E5230
L_800E5234:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E5234
  c->r[3]=c->r[29]|c->r[29]; // 800E5238
  c->r[4]=c->r[30]|c->r[30]; // 800E523C
  c->r[5]=c->r[31]|c->r[31]; // 800E5240
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5244
  c->ctr=c->r[12]; // 800E5248
  if (true) { c->lr=0x800E5250u; dispatch(c,c->ctr); } // 800E524C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5250
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5254
  c->lr=c->r[0]; // 800E5258
  c->r[1]=c->r[1]+0x00000020u; // 800E525C
  return; // 800E5260
}

// fn_800E5264
void f_800E5264(Ctx* __restrict c) {
  trace_call(0x800E5264u);
  c->r[3]=0u+0x80410000u; // 800E5264
  c->r[3]=c->r[3]+0xFFFFE038u; // 800E5268
  return; // 800E526C
}

// fn_800E5270
void f_800E5270(Ctx* __restrict c) {
  trace_call(0x800E5270u);
  c->r[3]=0u+0x00000040u; // 800E5270
  return; // 800E5274
}

// fn_800E5278
void f_800E5278(Ctx* __restrict c) {
  trace_call(0x800E5278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5278
  c->r[0]=c->lr; // 800E527C
  c->r[3]=0u+0x00000040u; // 800E5280
  c->r[4]=c->r[13]+0xFFFFB7C2u; // 800E5284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5288
  c->r[5]=0u+0x00000000u; // 800E528C
  c->r[6]=0u+0x00001001u; // 800E5290
  c->lr=0x800E5298u; f_80244D20(c); // 800E5294
  cmps(c,0,(int32_t)c->r[3],0); // 800E5298
  if (crb(c,2)) { goto L_800E52A4; } // 800E529C
  c->lr=0x800E52A4u; f_800E50E4(c); // 800E52A0
L_800E52A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E52A4
  c->lr=c->r[0]; // 800E52A8
  c->r[1]=c->r[1]+0x00000010u; // 800E52AC
  return; // 800E52B0
}

// fn_800E52B4
void f_800E52B4(Ctx* __restrict c) {
  trace_call(0x800E52B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E52B4
  c->r[0]=c->lr; // 800E52B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E52BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E52C0
  c->r[31]=c->r[3]|c->r[3]; // 800E52C4
  c->lr=0x800E52CCu; f_800D7120(c); // 800E52C8
  c->r[5]=0u+0x80410000u; // 800E52CC
  c->r[3]=0u+0x10260000u; // 800E52D0
  c->r[0]=c->r[3]+0xFFFF9E0Eu; // 800E52D4
  c->r[4]=0u+0x00000000u; // 800E52D8
  c->r[5]=c->r[5]+0x00006400u; // 800E52DC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E52E0
  c->r[3]=c->r[31]|c->r[31]; // 800E52E4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E52E8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E52EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E52F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E52F4
  c->lr=c->r[0]; // 800E52F8
  c->r[1]=c->r[1]+0x00000010u; // 800E52FC
  return; // 800E5300
}

// fn_800E5304
void f_800E5304(Ctx* __restrict c) {
  trace_call(0x800E5304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5304
  c->r[0]=c->lr; // 800E5308
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E530C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5310
  c->r[30]=c->r[3]|c->r[3]; // 800E5314
  c->r[31]=c->r[4]|c->r[4]; // 800E5318
  c->lr=0x800E5320u; f_8030D728(c); // 800E531C
  c->r[3]=c->r[31]|c->r[31]; // 800E5320
  c->r[4]=0u+0x00000000u; // 800E5324
  c->lr=0x800E532Cu; f_8030BE30(c); // 800E5328
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E532C
  c->r[3]=c->r[31]|c->r[31]; // 800E5330
  c->lr=0x800E5338u; f_8030BD1C(c); // 800E5334
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E5338
  c->r[3]=c->r[31]|c->r[31]; // 800E533C
  c->lr=0x800E5344u; f_8030BD1C(c); // 800E5340
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E5344
  c->r[3]=c->r[31]|c->r[31]; // 800E5348
  c->lr=0x800E5350u; f_8030BD1C(c); // 800E534C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E5350
  c->r[3]=c->r[31]|c->r[31]; // 800E5354
  c->lr=0x800E535Cu; f_8030BD1C(c); // 800E5358
  W8(c->r[30]+0x00000044u,c->r[3]); // 800E535C
  c->r[3]=c->r[31]|c->r[31]; // 800E5360
  c->lr=0x800E5368u; f_8030BD1C(c); // 800E5364
  W8(c->r[30]+0x00000045u,c->r[3]); // 800E5368
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E536C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5370
  c->lr=c->r[0]; // 800E5374
  c->r[1]=c->r[1]+0x00000010u; // 800E5378
  return; // 800E537C
}

// fn_800E5380
void f_800E5380(Ctx* __restrict c) {
  trace_call(0x800E5380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5380
  c->r[0]=c->lr; // 800E5384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5388
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E538C
  c->r[30]=c->r[3]|c->r[3]; // 800E5390
  c->r[31]=c->r[4]|c->r[4]; // 800E5394
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5398
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E539C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E53A0
  c->r[3]=c->r[4]+0x00000030u; // 800E53A4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E53A8
  c->r[4]=c->r[30]+0x00000030u; // 800E53AC
  c->lr=0x800E53B4u; f_8003AB48(c); // 800E53B0
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800E53B4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800E53B8
  c->r[0]=R32(c->r[30]+0x00000040u); // 800E53BC
  W32(c->r[31]+0x00000040u,c->r[0]); // 800E53C0
  c->r[0]=R8(c->r[30]+0x00000044u); // 800E53C4
  W8(c->r[31]+0x00000044u,c->r[0]); // 800E53C8
  c->r[0]=R8(c->r[30]+0x00000045u); // 800E53CC
  W8(c->r[31]+0x00000045u,c->r[0]); // 800E53D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E53D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E53D8
  c->lr=c->r[0]; // 800E53DC
  c->r[1]=c->r[1]+0x00000010u; // 800E53E0
  return; // 800E53E4
}

// fn_800E53E8
void f_800E53E8(Ctx* __restrict c) {
  trace_call(0x800E53E8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E53E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E53EC
  c->ctr=c->r[12]; // 800E53F0
  if (true) { dispatch(c,c->ctr); return; } // 800E53F4
}

// fn_800E53F8
void f_800E53F8(Ctx* __restrict c) {
  trace_call(0x800E53F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E53F8
  c->r[0]=c->lr; // 800E53FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5400
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5404
  c->r[29]=c->r[3]|c->r[3]; // 800E5408
  c->r[30]=c->r[4]|c->r[4]; // 800E540C
  c->r[31]=c->r[5]|c->r[5]; // 800E5410
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E5414
  cmps(c,0,(int32_t)c->r[0],7); // 800E5418
  if (!crb(c,0)) { goto L_800E542C; } // 800E541C
  c->r[4]=c->r[31]|c->r[31]; // 800E5420
  c->r[3]=c->r[3]+0x00000030u; // 800E5424
  c->lr=0x800E542Cu; f_8003A994(c); // 800E5428
L_800E542C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E542C
  c->r[3]=c->r[29]|c->r[29]; // 800E5430
  c->r[4]=c->r[30]|c->r[30]; // 800E5434
  c->r[5]=c->r[31]|c->r[31]; // 800E5438
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E543C
  c->ctr=c->r[12]; // 800E5440
  if (true) { c->lr=0x800E5448u; dispatch(c,c->ctr); } // 800E5444
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5448
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E544C
  c->lr=c->r[0]; // 800E5450
  c->r[1]=c->r[1]+0x00000020u; // 800E5454
  return; // 800E5458
}

// fn_800E545C
void f_800E545C(Ctx* __restrict c) {
  trace_call(0x800E545Cu);
  c->r[3]=0u+0x80410000u; // 800E545C
  c->r[3]=c->r[3]+0xFFFFE052u; // 800E5460
  return; // 800E5464
}

// fn_800E5468
void f_800E5468(Ctx* __restrict c) {
  trace_call(0x800E5468u);
  c->r[3]=0u+0x00000048u; // 800E5468
  return; // 800E546C
}

// fn_800E5470
void f_800E5470(Ctx* __restrict c) {
  trace_call(0x800E5470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5470
  c->r[0]=c->lr; // 800E5474
  c->r[3]=0u+0x00000048u; // 800E5478
  c->r[4]=c->r[13]+0xFFFFB7C7u; // 800E547C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5480
  c->r[5]=0u+0x00000000u; // 800E5484
  c->r[6]=0u+0x00001001u; // 800E5488
  c->lr=0x800E5490u; f_80244D20(c); // 800E548C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5490
  if (crb(c,2)) { goto L_800E549C; } // 800E5494
  c->lr=0x800E549Cu; f_800E52B4(c); // 800E5498
L_800E549C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E549C
  c->lr=c->r[0]; // 800E54A0
  c->r[1]=c->r[1]+0x00000010u; // 800E54A4
  return; // 800E54A8
}

// fn_800E54AC
void f_800E54AC(Ctx* __restrict c) {
  trace_call(0x800E54ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E54AC
  c->r[0]=c->lr; // 800E54B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E54B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E54B8
  c->r[31]=c->r[3]|c->r[3]; // 800E54BC
  c->lr=0x800E54C4u; f_800D7120(c); // 800E54C0
  c->r[4]=0u+0x80410000u; // 800E54C4
  c->r[3]=0u+0xC0EF0000u; // 800E54C8
  c->r[0]=c->r[3]+0x000064DCu; // 800E54CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E54D0
  c->r[4]=c->r[4]+0x000063CCu; // 800E54D4
  c->r[3]=c->r[31]|c->r[31]; // 800E54D8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E54DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E54E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E54E4
  c->lr=c->r[0]; // 800E54E8
  c->r[1]=c->r[1]+0x00000010u; // 800E54EC
  return; // 800E54F0
}

// fn_800E54F4
void f_800E54F4(Ctx* __restrict c) {
  trace_call(0x800E54F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E54F4
  c->r[0]=c->lr; // 800E54F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E54FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5500
  c->r[30]=c->r[3]|c->r[3]; // 800E5504
  c->r[31]=c->r[4]|c->r[4]; // 800E5508
  c->lr=0x800E5510u; f_8030D728(c); // 800E550C
  c->r[3]=c->r[31]|c->r[31]; // 800E5510
  c->lr=0x800E5518u; f_8030BD1C(c); // 800E5514
  W16(c->r[30]+0x00000030u,c->r[3]); // 800E5518
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E551C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5520
  c->lr=c->r[0]; // 800E5524
  c->r[1]=c->r[1]+0x00000010u; // 800E5528
  return; // 800E552C
}

// fn_800E5530
void f_800E5530(Ctx* __restrict c) {
  trace_call(0x800E5530u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E5530
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E5534
  c->r[0]=R16(c->r[3]+0x00000030u); // 800E5538
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E553C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E5540
  W16(c->r[4]+0x00000030u,c->r[0]); // 800E5544
  return; // 800E5548
}

// fn_800E554C
void f_800E554C(Ctx* __restrict c) {
  trace_call(0x800E554Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E554C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5550
  c->ctr=c->r[12]; // 800E5554
  if (true) { dispatch(c,c->ctr); return; } // 800E5558
}

// fn_800E555C
void f_800E555C(Ctx* __restrict c) {
  trace_call(0x800E555Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E555C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5560
  c->ctr=c->r[12]; // 800E5564
  if (true) { dispatch(c,c->ctr); return; } // 800E5568
}

// fn_800E556C
void f_800E556C(Ctx* __restrict c) {
  trace_call(0x800E556Cu);
  c->r[3]=0u+0x80410000u; // 800E556C
  c->r[3]=c->r[3]+0xFFFFE06Au; // 800E5570
  return; // 800E5574
}

// fn_800E5578
void f_800E5578(Ctx* __restrict c) {
  trace_call(0x800E5578u);
  c->r[3]=0u+0x00000034u; // 800E5578
  return; // 800E557C
}

// fn_800E5580
void f_800E5580(Ctx* __restrict c) {
  trace_call(0x800E5580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5580
  c->r[0]=c->lr; // 800E5584
  c->r[3]=0u+0x00000034u; // 800E5588
  c->r[4]=c->r[13]+0xFFFFB7CCu; // 800E558C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5590
  c->r[5]=0u+0x00000000u; // 800E5594
  c->r[6]=0u+0x00001001u; // 800E5598
  c->lr=0x800E55A0u; f_80244D20(c); // 800E559C
  cmps(c,0,(int32_t)c->r[3],0); // 800E55A0
  if (crb(c,2)) { goto L_800E55AC; } // 800E55A4
  c->lr=0x800E55ACu; f_800E54AC(c); // 800E55A8
L_800E55AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E55AC
  c->lr=c->r[0]; // 800E55B0
  c->r[1]=c->r[1]+0x00000010u; // 800E55B4
  return; // 800E55B8
}

// fn_800E55BC
void f_800E55BC(Ctx* __restrict c) {
  trace_call(0x800E55BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E55BC
  c->r[0]=c->lr; // 800E55C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E55C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E55C8
  c->r[31]=c->r[3]|c->r[3]; // 800E55CC
  c->lr=0x800E55D4u; f_800D7120(c); // 800E55D0
  c->r[5]=0u+0x80410000u; // 800E55D4
  c->r[3]=0u+0xECA20000u; // 800E55D8
  c->r[0]=c->r[3]+0xFFFFF0F4u; // 800E55DC
  c->r[4]=0u+0x00000000u; // 800E55E0
  c->r[5]=c->r[5]+0x00006398u; // 800E55E4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E55E8
  c->r[3]=c->r[31]|c->r[31]; // 800E55EC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E55F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E55F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E55F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E55FC
  c->lr=c->r[0]; // 800E5600
  c->r[1]=c->r[1]+0x00000010u; // 800E5604
  return; // 800E5608
}

// fn_800E560C
void f_800E560C(Ctx* __restrict c) {
  trace_call(0x800E560Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E560C
  c->r[0]=c->lr; // 800E5610
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5614
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5618
  c->r[30]=c->r[3]|c->r[3]; // 800E561C
  c->r[31]=c->r[4]|c->r[4]; // 800E5620
  c->lr=0x800E5628u; f_8030D728(c); // 800E5624
  c->r[3]=c->r[31]|c->r[31]; // 800E5628
  c->r[4]=0u+0x00000000u; // 800E562C
  c->lr=0x800E5634u; f_8030BE30(c); // 800E5630
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E5634
  c->r[3]=c->r[31]|c->r[31]; // 800E5638
  c->lr=0x800E5640u; f_8030BD1C(c); // 800E563C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E5640
  c->r[3]=c->r[31]|c->r[31]; // 800E5644
  c->lr=0x800E564Cu; f_8030BD1C(c); // 800E5648
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E564C
  c->r[3]=c->r[31]|c->r[31]; // 800E5650
  c->lr=0x800E5658u; f_8030BD1C(c); // 800E5654
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800E5658
  c->r[3]=c->r[31]|c->r[31]; // 800E565C
  c->lr=0x800E5664u; f_8030BD1C(c); // 800E5660
  W8(c->r[30]+0x0000003Eu,c->r[3]); // 800E5664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5668
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E566C
  c->lr=c->r[0]; // 800E5670
  c->r[1]=c->r[1]+0x00000010u; // 800E5674
  return; // 800E5678
}

// fn_800E567C
void f_800E567C(Ctx* __restrict c) {
  trace_call(0x800E567Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E567C
  c->r[0]=c->lr; // 800E5680
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5684
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5688
  c->r[30]=c->r[3]|c->r[3]; // 800E568C
  c->r[31]=c->r[4]|c->r[4]; // 800E5690
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5694
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E5698
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E569C
  c->r[3]=c->r[4]+0x00000030u; // 800E56A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E56A4
  c->r[4]=c->r[30]+0x00000030u; // 800E56A8
  c->lr=0x800E56B0u; f_8003AB48(c); // 800E56AC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E56B0
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E56B4
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800E56B8
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800E56BC
  c->r[0]=R8(c->r[30]+0x0000003Eu); // 800E56C0
  W8(c->r[31]+0x0000003Eu,c->r[0]); // 800E56C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E56C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E56CC
  c->lr=c->r[0]; // 800E56D0
  c->r[1]=c->r[1]+0x00000010u; // 800E56D4
  return; // 800E56D8
}

// fn_800E56DC
void f_800E56DC(Ctx* __restrict c) {
  trace_call(0x800E56DCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E56DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E56E0
  c->ctr=c->r[12]; // 800E56E4
  if (true) { dispatch(c,c->ctr); return; } // 800E56E8
}

// fn_800E56EC
void f_800E56EC(Ctx* __restrict c) {
  trace_call(0x800E56ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E56EC
  c->r[0]=c->lr; // 800E56F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E56F4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E56F8
  c->r[29]=c->r[3]|c->r[3]; // 800E56FC
  c->r[30]=c->r[4]|c->r[4]; // 800E5700
  c->r[31]=c->r[5]|c->r[5]; // 800E5704
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E5708
  cmps(c,0,(int32_t)c->r[0],7); // 800E570C
  if (!crb(c,0)) { goto L_800E5720; } // 800E5710
  c->r[4]=c->r[31]|c->r[31]; // 800E5714
  c->r[3]=c->r[3]+0x00000030u; // 800E5718
  c->lr=0x800E5720u; f_8003A994(c); // 800E571C
L_800E5720:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E5720
  c->r[3]=c->r[29]|c->r[29]; // 800E5724
  c->r[4]=c->r[30]|c->r[30]; // 800E5728
  c->r[5]=c->r[31]|c->r[31]; // 800E572C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5730
  c->ctr=c->r[12]; // 800E5734
  if (true) { c->lr=0x800E573Cu; dispatch(c,c->ctr); } // 800E5738
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E573C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5740
  c->lr=c->r[0]; // 800E5744
  c->r[1]=c->r[1]+0x00000020u; // 800E5748
  return; // 800E574C
}

// fn_800E5750
void f_800E5750(Ctx* __restrict c) {
  trace_call(0x800E5750u);
  c->r[3]=0u+0x80410000u; // 800E5750
  c->r[3]=c->r[3]+0xFFFFE074u; // 800E5754
  return; // 800E5758
}

// fn_800E575C
void f_800E575C(Ctx* __restrict c) {
  trace_call(0x800E575Cu);
  c->r[3]=0u+0x00000040u; // 800E575C
  return; // 800E5760
}

// fn_800E5764
void f_800E5764(Ctx* __restrict c) {
  trace_call(0x800E5764u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5764
  c->r[0]=c->lr; // 800E5768
  c->r[3]=0u+0x00000040u; // 800E576C
  c->r[4]=c->r[13]+0xFFFFB7D1u; // 800E5770
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5774
  c->r[5]=0u+0x00000000u; // 800E5778
  c->r[6]=0u+0x00001001u; // 800E577C
  c->lr=0x800E5784u; f_80244D20(c); // 800E5780
  cmps(c,0,(int32_t)c->r[3],0); // 800E5784
  if (crb(c,2)) { goto L_800E5790; } // 800E5788
  c->lr=0x800E5790u; f_800E55BC(c); // 800E578C
L_800E5790:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5790
  c->lr=c->r[0]; // 800E5794
  c->r[1]=c->r[1]+0x00000010u; // 800E5798
  return; // 800E579C
}

// fn_800E57A0
void f_800E57A0(Ctx* __restrict c) {
  trace_call(0x800E57A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E57A0
  c->r[0]=c->lr; // 800E57A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E57A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E57AC
  c->r[31]=c->r[3]|c->r[3]; // 800E57B0
  c->lr=0x800E57B8u; f_800D7120(c); // 800E57B4
  c->r[5]=0u+0x80410000u; // 800E57B8
  c->r[3]=0u+0xEE320000u; // 800E57BC
  c->r[0]=c->r[3]+0xFFFFF72Cu; // 800E57C0
  c->r[4]=0u+0x00000000u; // 800E57C4
  c->r[5]=c->r[5]+0x00006364u; // 800E57C8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E57CC
  c->r[3]=c->r[31]|c->r[31]; // 800E57D0
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800E57D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E57D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E57DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E57E0
  c->lr=c->r[0]; // 800E57E4
  c->r[1]=c->r[1]+0x00000010u; // 800E57E8
  return; // 800E57EC
}

// fn_800E57F0
void f_800E57F0(Ctx* __restrict c) {
  trace_call(0x800E57F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E57F0
  c->r[0]=c->lr; // 800E57F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E57F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E57FC
  c->r[30]=c->r[3]|c->r[3]; // 800E5800
  c->r[31]=c->r[4]|c->r[4]; // 800E5804
  c->lr=0x800E580Cu; f_8030D728(c); // 800E5808
  c->r[3]=c->r[31]|c->r[31]; // 800E580C
  c->lr=0x800E5814u; f_8030BD1C(c); // 800E5810
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E5814
  c->r[3]=c->r[31]|c->r[31]; // 800E5818
  c->r[4]=0u+0x00000000u; // 800E581C
  c->lr=0x800E5824u; f_8030BE30(c); // 800E5820
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E5824
  c->r[3]=c->r[31]|c->r[31]; // 800E5828
  c->lr=0x800E5830u; f_8030BD1C(c); // 800E582C
  W32(c->r[30]+0x00000038u,c->r[3]); // 800E5830
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5838
  c->lr=c->r[0]; // 800E583C
  c->r[1]=c->r[1]+0x00000010u; // 800E5840
  return; // 800E5844
}

// fn_800E5848
void f_800E5848(Ctx* __restrict c) {
  trace_call(0x800E5848u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5848
  c->r[5]=c->r[3]|c->r[3]; // 800E584C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E5850
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E5854
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E5858
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E585C
  c->r[3]=c->r[4]+0x00000034u; // 800E5860
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E5864
  c->r[4]=c->r[5]+0x00000034u; // 800E5868
  f_8003AB48(c); return; // 800E586C
}

// fn_800E5870
void f_800E5870(Ctx* __restrict c) {
  trace_call(0x800E5870u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E5870
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5874
  c->ctr=c->r[12]; // 800E5878
  if (true) { dispatch(c,c->ctr); return; } // 800E587C
}

// fn_800E5880
void f_800E5880(Ctx* __restrict c) {
  trace_call(0x800E5880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5880
  c->r[0]=c->lr; // 800E5884
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5888
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E588C
  c->r[29]=c->r[3]|c->r[3]; // 800E5890
  c->r[30]=c->r[4]|c->r[4]; // 800E5894
  c->r[31]=c->r[5]|c->r[5]; // 800E5898
  c->r[0]=R32(c->r[3]+0x00000038u); // 800E589C
  cmps(c,0,(int32_t)c->r[0],7); // 800E58A0
  if (!crb(c,0)) { goto L_800E58B4; } // 800E58A4
  c->r[4]=c->r[31]|c->r[31]; // 800E58A8
  c->r[3]=c->r[3]+0x00000034u; // 800E58AC
  c->lr=0x800E58B4u; f_8003A994(c); // 800E58B0
L_800E58B4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E58B4
  c->r[3]=c->r[29]|c->r[29]; // 800E58B8
  c->r[4]=c->r[30]|c->r[30]; // 800E58BC
  c->r[5]=c->r[31]|c->r[31]; // 800E58C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E58C4
  c->ctr=c->r[12]; // 800E58C8
  if (true) { c->lr=0x800E58D0u; dispatch(c,c->ctr); } // 800E58CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E58D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E58D4
  c->lr=c->r[0]; // 800E58D8
  c->r[1]=c->r[1]+0x00000020u; // 800E58DC
  return; // 800E58E0
}

// fn_800E58E4
void f_800E58E4(Ctx* __restrict c) {
  trace_call(0x800E58E4u);
  c->r[3]=0u+0x80410000u; // 800E58E4
  c->r[3]=c->r[3]+0xFFFFE085u; // 800E58E8
  return; // 800E58EC
}

// fn_800E58F0
void f_800E58F0(Ctx* __restrict c) {
  trace_call(0x800E58F0u);
  c->r[3]=0u+0x00000040u; // 800E58F0
  return; // 800E58F4
}

// fn_800E58F8
void f_800E58F8(Ctx* __restrict c) {
  trace_call(0x800E58F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E58F8
  c->r[0]=c->lr; // 800E58FC
  c->r[3]=0u+0x00000040u; // 800E5900
  c->r[4]=c->r[13]+0xFFFFB7D6u; // 800E5904
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5908
  c->r[5]=0u+0x00000000u; // 800E590C
  c->r[6]=0u+0x00001001u; // 800E5910
  c->lr=0x800E5918u; f_80244D20(c); // 800E5914
  cmps(c,0,(int32_t)c->r[3],0); // 800E5918
  if (crb(c,2)) { goto L_800E5924; } // 800E591C
  c->lr=0x800E5924u; f_800E57A0(c); // 800E5920
L_800E5924:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5924
  c->lr=c->r[0]; // 800E5928
  c->r[1]=c->r[1]+0x00000010u; // 800E592C
  return; // 800E5930
}

// fn_800E5934
void f_800E5934(Ctx* __restrict c) {
  trace_call(0x800E5934u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5934
  c->r[0]=c->lr; // 800E5938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E593C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5940
  c->r[31]=c->r[3]|c->r[3]; // 800E5944
  c->lr=0x800E594Cu; f_800D7120(c); // 800E5948
  c->r[4]=0u+0x80410000u; // 800E594C
  c->r[3]=0u+0xBC1A0000u; // 800E5950
  c->r[0]=c->r[3]+0x000028D9u; // 800E5954
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E5958
  c->r[4]=c->r[4]+0x00006330u; // 800E595C
  c->r[3]=c->r[31]|c->r[31]; // 800E5960
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E5964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5968
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E596C
  c->lr=c->r[0]; // 800E5970
  c->r[1]=c->r[1]+0x00000010u; // 800E5974
  return; // 800E5978
}

// fn_800E597C
void f_800E597C(Ctx* __restrict c) {
  trace_call(0x800E597Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E597C
  c->r[0]=c->lr; // 800E5980
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5984
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5988
  c->r[30]=c->r[3]|c->r[3]; // 800E598C
  c->r[31]=c->r[4]|c->r[4]; // 800E5990
  c->lr=0x800E5998u; f_8030D728(c); // 800E5994
  c->r[3]=c->r[31]|c->r[31]; // 800E5998
  c->lr=0x800E59A0u; f_8030BD1C(c); // 800E599C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E59A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E59A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E59A8
  c->lr=c->r[0]; // 800E59AC
  c->r[1]=c->r[1]+0x00000010u; // 800E59B0
  return; // 800E59B4
}

// fn_800E59B8
void f_800E59B8(Ctx* __restrict c) {
  trace_call(0x800E59B8u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E59B8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E59BC
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E59C0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E59C4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E59C8
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E59CC
  return; // 800E59D0
}

// fn_800E59D4
void f_800E59D4(Ctx* __restrict c) {
  trace_call(0x800E59D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E59D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E59D8
  c->ctr=c->r[12]; // 800E59DC
  if (true) { dispatch(c,c->ctr); return; } // 800E59E0
}

// fn_800E59E4
void f_800E59E4(Ctx* __restrict c) {
  trace_call(0x800E59E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E59E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E59E8
  c->ctr=c->r[12]; // 800E59EC
  if (true) { dispatch(c,c->ctr); return; } // 800E59F0
}

// fn_800E59F4
void f_800E59F4(Ctx* __restrict c) {
  trace_call(0x800E59F4u);
  c->r[3]=0u+0x80410000u; // 800E59F4
  c->r[3]=c->r[3]+0xFFFFE095u; // 800E59F8
  return; // 800E59FC
}

// fn_800E5A00
void f_800E5A00(Ctx* __restrict c) {
  trace_call(0x800E5A00u);
  c->r[3]=0u+0x00000034u; // 800E5A00
  return; // 800E5A04
}

// fn_800E5A08
void f_800E5A08(Ctx* __restrict c) {
  trace_call(0x800E5A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5A08
  c->r[0]=c->lr; // 800E5A0C
  c->r[3]=0u+0x00000034u; // 800E5A10
  c->r[4]=c->r[13]+0xFFFFB7DBu; // 800E5A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5A18
  c->r[5]=0u+0x00000000u; // 800E5A1C
  c->r[6]=0u+0x00001001u; // 800E5A20
  c->lr=0x800E5A28u; f_80244D20(c); // 800E5A24
  cmps(c,0,(int32_t)c->r[3],0); // 800E5A28
  if (crb(c,2)) { goto L_800E5A34; } // 800E5A2C
  c->lr=0x800E5A34u; f_800E5934(c); // 800E5A30
L_800E5A34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5A34
  c->lr=c->r[0]; // 800E5A38
  c->r[1]=c->r[1]+0x00000010u; // 800E5A3C
  return; // 800E5A40
}

// fn_800E5A44
void f_800E5A44(Ctx* __restrict c) {
  trace_call(0x800E5A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5A44
  c->r[0]=c->lr; // 800E5A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5A4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5A50
  c->r[31]=c->r[3]|c->r[3]; // 800E5A54
  c->lr=0x800E5A5Cu; f_800D7120(c); // 800E5A58
  c->r[5]=0u+0x80410000u; // 800E5A5C
  c->r[3]=0u+0x59710000u; // 800E5A60
  c->r[0]=c->r[3]+0x000047B2u; // 800E5A64
  c->r[4]=0u+0x00000000u; // 800E5A68
  c->r[5]=c->r[5]+0x000062FCu; // 800E5A6C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E5A70
  c->r[3]=c->r[31]|c->r[31]; // 800E5A74
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E5A78
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E5A7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5A80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5A84
  c->lr=c->r[0]; // 800E5A88
  c->r[1]=c->r[1]+0x00000010u; // 800E5A8C
  return; // 800E5A90
}

// fn_800E5A94
void f_800E5A94(Ctx* __restrict c) {
  trace_call(0x800E5A94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5A94
  c->r[0]=c->lr; // 800E5A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5A9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5AA0
  c->r[30]=c->r[3]|c->r[3]; // 800E5AA4
  c->r[31]=c->r[4]|c->r[4]; // 800E5AA8
  c->lr=0x800E5AB0u; f_8030D728(c); // 800E5AAC
  c->r[3]=c->r[31]|c->r[31]; // 800E5AB0
  c->r[4]=0u+0x00000000u; // 800E5AB4
  c->lr=0x800E5ABCu; f_8030BE30(c); // 800E5AB8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E5ABC
  c->r[3]=c->r[31]|c->r[31]; // 800E5AC0
  c->lr=0x800E5AC8u; f_8030BD1C(c); // 800E5AC4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E5AC8
  c->r[3]=c->r[31]|c->r[31]; // 800E5ACC
  c->lr=0x800E5AD4u; f_8030BD1C(c); // 800E5AD0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E5AD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5AD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5ADC
  c->lr=c->r[0]; // 800E5AE0
  c->r[1]=c->r[1]+0x00000010u; // 800E5AE4
  return; // 800E5AE8
}

// fn_800E5AEC
void f_800E5AEC(Ctx* __restrict c) {
  trace_call(0x800E5AECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5AEC
  c->r[0]=c->lr; // 800E5AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5AF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5AF8
  c->r[30]=c->r[3]|c->r[3]; // 800E5AFC
  c->r[31]=c->r[4]|c->r[4]; // 800E5B00
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5B04
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E5B08
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E5B0C
  c->r[3]=c->r[4]+0x00000030u; // 800E5B10
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E5B14
  c->r[4]=c->r[30]+0x00000030u; // 800E5B18
  c->lr=0x800E5B20u; f_8003AB48(c); // 800E5B1C
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E5B20
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E5B24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5B28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5B2C
  c->lr=c->r[0]; // 800E5B30
  c->r[1]=c->r[1]+0x00000010u; // 800E5B34
  return; // 800E5B38
}

// fn_800E5B3C
void f_800E5B3C(Ctx* __restrict c) {
  trace_call(0x800E5B3Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E5B3C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5B40
  c->ctr=c->r[12]; // 800E5B44
  if (true) { dispatch(c,c->ctr); return; } // 800E5B48
}

// fn_800E5B4C
void f_800E5B4C(Ctx* __restrict c) {
  trace_call(0x800E5B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5B4C
  c->r[0]=c->lr; // 800E5B50
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5B54
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5B58
  c->r[29]=c->r[3]|c->r[3]; // 800E5B5C
  c->r[30]=c->r[4]|c->r[4]; // 800E5B60
  c->r[31]=c->r[5]|c->r[5]; // 800E5B64
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E5B68
  cmps(c,0,(int32_t)c->r[0],7); // 800E5B6C
  if (!crb(c,0)) { goto L_800E5B80; } // 800E5B70
  c->r[4]=c->r[31]|c->r[31]; // 800E5B74
  c->r[3]=c->r[3]+0x00000030u; // 800E5B78
  c->lr=0x800E5B80u; f_8003A994(c); // 800E5B7C
L_800E5B80:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E5B80
  c->r[3]=c->r[29]|c->r[29]; // 800E5B84
  c->r[4]=c->r[30]|c->r[30]; // 800E5B88
  c->r[5]=c->r[31]|c->r[31]; // 800E5B8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5B90
  c->ctr=c->r[12]; // 800E5B94
  if (true) { c->lr=0x800E5B9Cu; dispatch(c,c->ctr); } // 800E5B98
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5B9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5BA0
  c->lr=c->r[0]; // 800E5BA4
  c->r[1]=c->r[1]+0x00000020u; // 800E5BA8
  return; // 800E5BAC
}

// fn_800E5BB0
void f_800E5BB0(Ctx* __restrict c) {
  trace_call(0x800E5BB0u);
  c->r[3]=0u+0x80410000u; // 800E5BB0
  c->r[3]=c->r[3]+0xFFFFE0A3u; // 800E5BB4
  return; // 800E5BB8
}

// fn_800E5BBC
void f_800E5BBC(Ctx* __restrict c) {
  trace_call(0x800E5BBCu);
  c->r[3]=0u+0x00000040u; // 800E5BBC
  return; // 800E5BC0
}

// fn_800E5BC4
void f_800E5BC4(Ctx* __restrict c) {
  trace_call(0x800E5BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5BC4
  c->r[0]=c->lr; // 800E5BC8
  c->r[3]=0u+0x00000040u; // 800E5BCC
  c->r[4]=c->r[13]+0xFFFFB7E0u; // 800E5BD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5BD4
  c->r[5]=0u+0x00000000u; // 800E5BD8
  c->r[6]=0u+0x00001001u; // 800E5BDC
  c->lr=0x800E5BE4u; f_80244D20(c); // 800E5BE0
  cmps(c,0,(int32_t)c->r[3],0); // 800E5BE4
  if (crb(c,2)) { goto L_800E5BF0; } // 800E5BE8
  c->lr=0x800E5BF0u; f_800E5A44(c); // 800E5BEC
L_800E5BF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5BF0
  c->lr=c->r[0]; // 800E5BF4
  c->r[1]=c->r[1]+0x00000010u; // 800E5BF8
  return; // 800E5BFC
}

// fn_800E5C00
void f_800E5C00(Ctx* __restrict c) {
  trace_call(0x800E5C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5C00
  c->r[0]=c->lr; // 800E5C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5C08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5C0C
  c->r[31]=c->r[3]|c->r[3]; // 800E5C10
  c->lr=0x800E5C18u; f_800D7120(c); // 800E5C14
  c->r[5]=0u+0x80410000u; // 800E5C18
  c->r[3]=0u+0x59710000u; // 800E5C1C
  c->r[0]=c->r[3]+0x000047B2u; // 800E5C20
  c->r[4]=0u+0x00000000u; // 800E5C24
  c->r[5]=c->r[5]+0x000062C8u; // 800E5C28
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E5C2C
  c->r[3]=c->r[31]|c->r[31]; // 800E5C30
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E5C34
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E5C38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5C3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5C40
  c->lr=c->r[0]; // 800E5C44
  c->r[1]=c->r[1]+0x00000010u; // 800E5C48
  return; // 800E5C4C
}

// fn_800E5C50
void f_800E5C50(Ctx* __restrict c) {
  trace_call(0x800E5C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5C50
  c->r[0]=c->lr; // 800E5C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5C58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5C5C
  c->r[30]=c->r[3]|c->r[3]; // 800E5C60
  c->r[31]=c->r[4]|c->r[4]; // 800E5C64
  c->lr=0x800E5C6Cu; f_8030D728(c); // 800E5C68
  c->r[3]=c->r[31]|c->r[31]; // 800E5C6C
  c->r[4]=0u+0x00000000u; // 800E5C70
  c->lr=0x800E5C78u; f_8030BE30(c); // 800E5C74
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E5C78
  c->r[3]=c->r[31]|c->r[31]; // 800E5C7C
  c->lr=0x800E5C84u; f_8030BD1C(c); // 800E5C80
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E5C84
  c->r[3]=c->r[31]|c->r[31]; // 800E5C88
  c->lr=0x800E5C90u; f_8030BD1C(c); // 800E5C8C
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E5C90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5C98
  c->lr=c->r[0]; // 800E5C9C
  c->r[1]=c->r[1]+0x00000010u; // 800E5CA0
  return; // 800E5CA4
}

// fn_800E5CA8
void f_800E5CA8(Ctx* __restrict c) {
  trace_call(0x800E5CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5CA8
  c->r[0]=c->lr; // 800E5CAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5CB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5CB4
  c->r[30]=c->r[3]|c->r[3]; // 800E5CB8
  c->r[31]=c->r[4]|c->r[4]; // 800E5CBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5CC0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E5CC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E5CC8
  c->r[3]=c->r[4]+0x00000030u; // 800E5CCC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E5CD0
  c->r[4]=c->r[30]+0x00000030u; // 800E5CD4
  c->lr=0x800E5CDCu; f_8003AB48(c); // 800E5CD8
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E5CDC
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E5CE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5CE8
  c->lr=c->r[0]; // 800E5CEC
  c->r[1]=c->r[1]+0x00000010u; // 800E5CF0
  return; // 800E5CF4
}

// fn_800E5CF8
void f_800E5CF8(Ctx* __restrict c) {
  trace_call(0x800E5CF8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E5CF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5CFC
  c->ctr=c->r[12]; // 800E5D00
  if (true) { dispatch(c,c->ctr); return; } // 800E5D04
}

// fn_800E5D08
void f_800E5D08(Ctx* __restrict c) {
  trace_call(0x800E5D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5D08
  c->r[0]=c->lr; // 800E5D0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5D10
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5D14
  c->r[29]=c->r[3]|c->r[3]; // 800E5D18
  c->r[30]=c->r[4]|c->r[4]; // 800E5D1C
  c->r[31]=c->r[5]|c->r[5]; // 800E5D20
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E5D24
  cmps(c,0,(int32_t)c->r[0],7); // 800E5D28
  if (!crb(c,0)) { goto L_800E5D3C; } // 800E5D2C
  c->r[4]=c->r[31]|c->r[31]; // 800E5D30
  c->r[3]=c->r[3]+0x00000030u; // 800E5D34
  c->lr=0x800E5D3Cu; f_8003A994(c); // 800E5D38
L_800E5D3C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E5D3C
  c->r[3]=c->r[29]|c->r[29]; // 800E5D40
  c->r[4]=c->r[30]|c->r[30]; // 800E5D44
  c->r[5]=c->r[31]|c->r[31]; // 800E5D48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5D4C
  c->ctr=c->r[12]; // 800E5D50
  if (true) { c->lr=0x800E5D58u; dispatch(c,c->ctr); } // 800E5D54
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5D58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5D5C
  c->lr=c->r[0]; // 800E5D60
  c->r[1]=c->r[1]+0x00000020u; // 800E5D64
  return; // 800E5D68
}

// fn_800E5D6C
void f_800E5D6C(Ctx* __restrict c) {
  trace_call(0x800E5D6Cu);
  c->r[3]=0u+0x80410000u; // 800E5D6C
  c->r[3]=c->r[3]+0xFFFFE0B3u; // 800E5D70
  return; // 800E5D74
}

// fn_800E5D78
void f_800E5D78(Ctx* __restrict c) {
  trace_call(0x800E5D78u);
  c->r[3]=0u+0x00000040u; // 800E5D78
  return; // 800E5D7C
}

// fn_800E5D80
void f_800E5D80(Ctx* __restrict c) {
  trace_call(0x800E5D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5D80
  c->r[0]=c->lr; // 800E5D84
  c->r[3]=0u+0x00000040u; // 800E5D88
  c->r[4]=c->r[13]+0xFFFFB7E5u; // 800E5D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5D90
  c->r[5]=0u+0x00000000u; // 800E5D94
  c->r[6]=0u+0x00001001u; // 800E5D98
  c->lr=0x800E5DA0u; f_80244D20(c); // 800E5D9C
  cmps(c,0,(int32_t)c->r[3],0); // 800E5DA0
  if (crb(c,2)) { goto L_800E5DAC; } // 800E5DA4
  c->lr=0x800E5DACu; f_800E5C00(c); // 800E5DA8
L_800E5DAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5DAC
  c->lr=c->r[0]; // 800E5DB0
  c->r[1]=c->r[1]+0x00000010u; // 800E5DB4
  return; // 800E5DB8
}

// fn_800E5DBC
void f_800E5DBC(Ctx* __restrict c) {
  trace_call(0x800E5DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5DBC
  c->r[0]=c->lr; // 800E5DC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5DC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5DC8
  c->r[31]=c->r[3]|c->r[3]; // 800E5DCC
  c->lr=0x800E5DD4u; f_800D7120(c); // 800E5DD0
  c->r[3]=0u+0x80410000u; // 800E5DD4
  c->r[0]=0u+0x00000000u; // 800E5DD8
  c->r[3]=c->r[3]+0x00006294u; // 800E5DDC
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E5DE0
  c->r[3]=c->r[31]|c->r[31]; // 800E5DE4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E5DE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5DEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5DF0
  c->lr=c->r[0]; // 800E5DF4
  c->r[1]=c->r[1]+0x00000010u; // 800E5DF8
  return; // 800E5DFC
}

// fn_800E5E00
void f_800E5E00(Ctx* __restrict c) {
  trace_call(0x800E5E00u);
  f_8030D728(c); return; // 800E5E00
}

// fn_800E5E04
void f_800E5E04(Ctx* __restrict c) {
  trace_call(0x800E5E04u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800E5E04
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E5E08
  W32(c->r[4]+0x00000000u,c->r[5]); // 800E5E0C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E5E10
  return; // 800E5E14
}

// fn_800E5E18
void f_800E5E18(Ctx* __restrict c) {
  trace_call(0x800E5E18u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E5E18
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5E1C
  c->ctr=c->r[12]; // 800E5E20
  if (true) { dispatch(c,c->ctr); return; } // 800E5E24
}

// fn_800E5E28
void f_800E5E28(Ctx* __restrict c) {
  trace_call(0x800E5E28u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E5E28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5E2C
  c->ctr=c->r[12]; // 800E5E30
  if (true) { dispatch(c,c->ctr); return; } // 800E5E34
}

// fn_800E5E38
void f_800E5E38(Ctx* __restrict c) {
  trace_call(0x800E5E38u);
  c->r[3]=0u+0x80410000u; // 800E5E38
  c->r[3]=c->r[3]+0xFFFFE0C2u; // 800E5E3C
  return; // 800E5E40
}

// fn_800E5E44
void f_800E5E44(Ctx* __restrict c) {
  trace_call(0x800E5E44u);
  c->r[3]=0u+0x00000030u; // 800E5E44
  return; // 800E5E48
}

// fn_800E5E4C
void f_800E5E4C(Ctx* __restrict c) {
  trace_call(0x800E5E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5E4C
  c->r[0]=c->lr; // 800E5E50
  c->r[3]=0u+0x00000030u; // 800E5E54
  c->r[4]=c->r[13]+0xFFFFB7EAu; // 800E5E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5E5C
  c->r[5]=0u+0x00000000u; // 800E5E60
  c->r[6]=0u+0x00001001u; // 800E5E64
  c->lr=0x800E5E6Cu; f_80244D20(c); // 800E5E68
  cmps(c,0,(int32_t)c->r[3],0); // 800E5E6C
  if (crb(c,2)) { goto L_800E5E78; } // 800E5E70
  c->lr=0x800E5E78u; f_800E5DBC(c); // 800E5E74
L_800E5E78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5E78
  c->lr=c->r[0]; // 800E5E7C
  c->r[1]=c->r[1]+0x00000010u; // 800E5E80
  return; // 800E5E84
}

// fn_800E5E88
void f_800E5E88(Ctx* __restrict c) {
  trace_call(0x800E5E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5E88
  c->r[0]=c->lr; // 800E5E8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5E90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E5E94
  c->r[31]=c->r[3]|c->r[3]; // 800E5E98
  c->lr=0x800E5EA0u; f_800D7120(c); // 800E5E9C
  c->r[5]=0u+0x80410000u; // 800E5EA0
  c->r[3]=0u+0x999E0000u; // 800E5EA4
  c->r[0]=c->r[3]+0x0000236Eu; // 800E5EA8
  c->r[4]=0u+0x00000000u; // 800E5EAC
  c->r[5]=c->r[5]+0x00006260u; // 800E5EB0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E5EB4
  c->r[3]=c->r[31]|c->r[31]; // 800E5EB8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E5EBC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E5EC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E5EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5EC8
  c->lr=c->r[0]; // 800E5ECC
  c->r[1]=c->r[1]+0x00000010u; // 800E5ED0
  return; // 800E5ED4
}

// fn_800E5ED8
void f_800E5ED8(Ctx* __restrict c) {
  trace_call(0x800E5ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5ED8
  c->r[0]=c->lr; // 800E5EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5EE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5EE4
  c->r[30]=c->r[3]|c->r[3]; // 800E5EE8
  c->r[31]=c->r[4]|c->r[4]; // 800E5EEC
  c->lr=0x800E5EF4u; f_8030D728(c); // 800E5EF0
  c->r[3]=c->r[31]|c->r[31]; // 800E5EF4
  c->r[4]=0u+0x00000000u; // 800E5EF8
  c->lr=0x800E5F00u; f_8030BE30(c); // 800E5EFC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E5F00
  c->r[3]=c->r[31]|c->r[31]; // 800E5F04
  c->lr=0x800E5F0Cu; f_8030BD1C(c); // 800E5F08
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E5F0C
  c->r[3]=c->r[31]|c->r[31]; // 800E5F10
  c->lr=0x800E5F18u; f_8030BD1C(c); // 800E5F14
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E5F18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5F1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5F20
  c->lr=c->r[0]; // 800E5F24
  c->r[1]=c->r[1]+0x00000010u; // 800E5F28
  return; // 800E5F2C
}

// fn_800E5F30
void f_800E5F30(Ctx* __restrict c) {
  trace_call(0x800E5F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5F30
  c->r[0]=c->lr; // 800E5F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E5F38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5F3C
  c->r[30]=c->r[3]|c->r[3]; // 800E5F40
  c->r[31]=c->r[4]|c->r[4]; // 800E5F44
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E5F48
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E5F4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E5F50
  c->r[3]=c->r[4]+0x00000030u; // 800E5F54
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E5F58
  c->r[4]=c->r[30]+0x00000030u; // 800E5F5C
  c->lr=0x800E5F64u; f_8003AB48(c); // 800E5F60
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E5F64
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E5F68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5F6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E5F70
  c->lr=c->r[0]; // 800E5F74
  c->r[1]=c->r[1]+0x00000010u; // 800E5F78
  return; // 800E5F7C
}

// fn_800E5F80
void f_800E5F80(Ctx* __restrict c) {
  trace_call(0x800E5F80u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E5F80
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E5F84
  c->ctr=c->r[12]; // 800E5F88
  if (true) { dispatch(c,c->ctr); return; } // 800E5F8C
}

// fn_800E5F90
void f_800E5F90(Ctx* __restrict c) {
  trace_call(0x800E5F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E5F90
  c->r[0]=c->lr; // 800E5F94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E5F98
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E5F9C
  c->r[29]=c->r[3]|c->r[3]; // 800E5FA0
  c->r[30]=c->r[4]|c->r[4]; // 800E5FA4
  c->r[31]=c->r[5]|c->r[5]; // 800E5FA8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E5FAC
  cmps(c,0,(int32_t)c->r[0],7); // 800E5FB0
  if (!crb(c,0)) { goto L_800E5FC4; } // 800E5FB4
  c->r[4]=c->r[31]|c->r[31]; // 800E5FB8
  c->r[3]=c->r[3]+0x00000030u; // 800E5FBC
  c->lr=0x800E5FC4u; f_8003A994(c); // 800E5FC0
L_800E5FC4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E5FC4
  c->r[3]=c->r[29]|c->r[29]; // 800E5FC8
  c->r[4]=c->r[30]|c->r[30]; // 800E5FCC
  c->r[5]=c->r[31]|c->r[31]; // 800E5FD0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E5FD4
  c->ctr=c->r[12]; // 800E5FD8
  if (true) { c->lr=0x800E5FE0u; dispatch(c,c->ctr); } // 800E5FDC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E5FE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E5FE4
  c->lr=c->r[0]; // 800E5FE8
  c->r[1]=c->r[1]+0x00000020u; // 800E5FEC
  return; // 800E5FF0
}

// fn_800E5FF4
void f_800E5FF4(Ctx* __restrict c) {
  trace_call(0x800E5FF4u);
  c->r[3]=0u+0x80410000u; // 800E5FF4
  c->r[3]=c->r[3]+0xFFFFE0DEu; // 800E5FF8
  return; // 800E5FFC
}

// fn_800E6000
void f_800E6000(Ctx* __restrict c) {
  trace_call(0x800E6000u);
  c->r[3]=0u+0x00000040u; // 800E6000
  return; // 800E6004
}

// fn_800E6008
void f_800E6008(Ctx* __restrict c) {
  trace_call(0x800E6008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6008
  c->r[0]=c->lr; // 800E600C
  c->r[3]=0u+0x00000040u; // 800E6010
  c->r[4]=c->r[13]+0xFFFFB7EFu; // 800E6014
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6018
  c->r[5]=0u+0x00000000u; // 800E601C
  c->r[6]=0u+0x00001001u; // 800E6020
  c->lr=0x800E6028u; f_80244D20(c); // 800E6024
  cmps(c,0,(int32_t)c->r[3],0); // 800E6028
  if (crb(c,2)) { goto L_800E6034; } // 800E602C
  c->lr=0x800E6034u; f_800E5E88(c); // 800E6030
L_800E6034:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6034
  c->lr=c->r[0]; // 800E6038
  c->r[1]=c->r[1]+0x00000010u; // 800E603C
  return; // 800E6040
}

// fn_800E6044
void f_800E6044(Ctx* __restrict c) {
  trace_call(0x800E6044u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6044
  c->r[0]=c->lr; // 800E6048
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E604C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6050
  c->r[31]=c->r[3]|c->r[3]; // 800E6054
  c->lr=0x800E605Cu; f_800D7120(c); // 800E6058
  c->r[5]=0u+0x80410000u; // 800E605C
  c->r[3]=0u+0x999E0000u; // 800E6060
  c->r[0]=c->r[3]+0x0000236Eu; // 800E6064
  c->r[4]=0u+0x00000000u; // 800E6068
  c->r[5]=c->r[5]+0x0000622Cu; // 800E606C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E6070
  c->r[3]=c->r[31]|c->r[31]; // 800E6074
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E6078
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E607C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6080
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6084
  c->lr=c->r[0]; // 800E6088
  c->r[1]=c->r[1]+0x00000010u; // 800E608C
  return; // 800E6090
}

// fn_800E6094
void f_800E6094(Ctx* __restrict c) {
  trace_call(0x800E6094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6094
  c->r[0]=c->lr; // 800E6098
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E609C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E60A0
  c->r[30]=c->r[3]|c->r[3]; // 800E60A4
  c->r[31]=c->r[4]|c->r[4]; // 800E60A8
  c->lr=0x800E60B0u; f_8030D728(c); // 800E60AC
  c->r[3]=c->r[31]|c->r[31]; // 800E60B0
  c->r[4]=0u+0x00000000u; // 800E60B4
  c->lr=0x800E60BCu; f_8030BE30(c); // 800E60B8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E60BC
  c->r[3]=c->r[31]|c->r[31]; // 800E60C0
  c->lr=0x800E60C8u; f_8030BD1C(c); // 800E60C4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E60C8
  c->r[3]=c->r[31]|c->r[31]; // 800E60CC
  c->lr=0x800E60D4u; f_8030BD1C(c); // 800E60D0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E60D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E60D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E60DC
  c->lr=c->r[0]; // 800E60E0
  c->r[1]=c->r[1]+0x00000010u; // 800E60E4
  return; // 800E60E8
}

// fn_800E60EC
void f_800E60EC(Ctx* __restrict c) {
  trace_call(0x800E60ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E60EC
  c->r[0]=c->lr; // 800E60F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E60F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E60F8
  c->r[30]=c->r[3]|c->r[3]; // 800E60FC
  c->r[31]=c->r[4]|c->r[4]; // 800E6100
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E6104
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E6108
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E610C
  c->r[3]=c->r[4]+0x00000030u; // 800E6110
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E6114
  c->r[4]=c->r[30]+0x00000030u; // 800E6118
  c->lr=0x800E6120u; f_8003AB48(c); // 800E611C
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E6120
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E6124
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6128
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E612C
  c->lr=c->r[0]; // 800E6130
  c->r[1]=c->r[1]+0x00000010u; // 800E6134
  return; // 800E6138
}

// fn_800E613C
void f_800E613C(Ctx* __restrict c) {
  trace_call(0x800E613Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E613C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6140
  c->ctr=c->r[12]; // 800E6144
  if (true) { dispatch(c,c->ctr); return; } // 800E6148
}

// fn_800E614C
void f_800E614C(Ctx* __restrict c) {
  trace_call(0x800E614Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E614C
  c->r[0]=c->lr; // 800E6150
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6154
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6158
  c->r[29]=c->r[3]|c->r[3]; // 800E615C
  c->r[30]=c->r[4]|c->r[4]; // 800E6160
  c->r[31]=c->r[5]|c->r[5]; // 800E6164
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E6168
  cmps(c,0,(int32_t)c->r[0],7); // 800E616C
  if (!crb(c,0)) { goto L_800E6180; } // 800E6170
  c->r[4]=c->r[31]|c->r[31]; // 800E6174
  c->r[3]=c->r[3]+0x00000030u; // 800E6178
  c->lr=0x800E6180u; f_8003A994(c); // 800E617C
L_800E6180:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E6180
  c->r[3]=c->r[29]|c->r[29]; // 800E6184
  c->r[4]=c->r[30]|c->r[30]; // 800E6188
  c->r[5]=c->r[31]|c->r[31]; // 800E618C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E6190
  c->ctr=c->r[12]; // 800E6194
  if (true) { c->lr=0x800E619Cu; dispatch(c,c->ctr); } // 800E6198
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E619C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E61A0
  c->lr=c->r[0]; // 800E61A4
  c->r[1]=c->r[1]+0x00000020u; // 800E61A8
  return; // 800E61AC
}

// fn_800E61B0
void f_800E61B0(Ctx* __restrict c) {
  trace_call(0x800E61B0u);
  c->r[3]=0u+0x80410000u; // 800E61B0
  c->r[3]=c->r[3]+0xFFFFE0EDu; // 800E61B4
  return; // 800E61B8
}

// fn_800E61BC
void f_800E61BC(Ctx* __restrict c) {
  trace_call(0x800E61BCu);
  c->r[3]=0u+0x00000040u; // 800E61BC
  return; // 800E61C0
}

// fn_800E61C4
void f_800E61C4(Ctx* __restrict c) {
  trace_call(0x800E61C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E61C4
  c->r[0]=c->lr; // 800E61C8
  c->r[3]=0u+0x00000040u; // 800E61CC
  c->r[4]=c->r[13]+0xFFFFB7F4u; // 800E61D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E61D4
  c->r[5]=0u+0x00000000u; // 800E61D8
  c->r[6]=0u+0x00001001u; // 800E61DC
  c->lr=0x800E61E4u; f_80244D20(c); // 800E61E0
  cmps(c,0,(int32_t)c->r[3],0); // 800E61E4
  if (crb(c,2)) { goto L_800E61F0; } // 800E61E8
  c->lr=0x800E61F0u; f_800E6044(c); // 800E61EC
L_800E61F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E61F0
  c->lr=c->r[0]; // 800E61F4
  c->r[1]=c->r[1]+0x00000010u; // 800E61F8
  return; // 800E61FC
}

// fn_800E6200
void f_800E6200(Ctx* __restrict c) {
  trace_call(0x800E6200u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6200
  c->r[0]=c->lr; // 800E6204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E620C
  c->r[31]=c->r[3]|c->r[3]; // 800E6210
  c->lr=0x800E6218u; f_800D7120(c); // 800E6214
  c->r[5]=0u+0x80410000u; // 800E6218
  c->r[3]=0u+0x59720000u; // 800E621C
  c->r[0]=c->r[3]+0x00004EB8u; // 800E6220
  c->r[4]=0u+0x00000000u; // 800E6224
  c->r[5]=c->r[5]+0x000061F8u; // 800E6228
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E622C
  c->r[3]=c->r[31]|c->r[31]; // 800E6230
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800E6234
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E6238
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E623C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6240
  c->lr=c->r[0]; // 800E6244
  c->r[1]=c->r[1]+0x00000010u; // 800E6248
  return; // 800E624C
}

// fn_800E6250
void f_800E6250(Ctx* __restrict c) {
  trace_call(0x800E6250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6250
  c->r[0]=c->lr; // 800E6254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6258
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E625C
  c->r[30]=c->r[3]|c->r[3]; // 800E6260
  c->r[31]=c->r[4]|c->r[4]; // 800E6264
  c->lr=0x800E626Cu; f_8030D728(c); // 800E6268
  c->r[3]=c->r[31]|c->r[31]; // 800E626C
  c->lr=0x800E6274u; f_8030BD1C(c); // 800E6270
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E6274
  c->r[3]=c->r[31]|c->r[31]; // 800E6278
  c->r[4]=0u+0x00000000u; // 800E627C
  c->lr=0x800E6284u; f_8030BE30(c); // 800E6280
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E6284
  c->r[3]=c->r[31]|c->r[31]; // 800E6288
  c->lr=0x800E6290u; f_8030BD1C(c); // 800E628C
  W32(c->r[30]+0x00000038u,c->r[3]); // 800E6290
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6294
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6298
  c->lr=c->r[0]; // 800E629C
  c->r[1]=c->r[1]+0x00000010u; // 800E62A0
  return; // 800E62A4
}

// fn_800E62A8
void f_800E62A8(Ctx* __restrict c) {
  trace_call(0x800E62A8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E62A8
  c->r[5]=c->r[3]|c->r[3]; // 800E62AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E62B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E62B4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E62B8
  c->r[0]=R32(c->r[3]+0x00000030u); // 800E62BC
  c->r[3]=c->r[4]+0x00000034u; // 800E62C0
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E62C4
  c->r[4]=c->r[5]+0x00000034u; // 800E62C8
  f_8003AB48(c); return; // 800E62CC
}

// fn_800E62D0
void f_800E62D0(Ctx* __restrict c) {
  trace_call(0x800E62D0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E62D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E62D4
  c->ctr=c->r[12]; // 800E62D8
  if (true) { dispatch(c,c->ctr); return; } // 800E62DC
}

// fn_800E62E0
void f_800E62E0(Ctx* __restrict c) {
  trace_call(0x800E62E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E62E0
  c->r[0]=c->lr; // 800E62E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E62E8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E62EC
  c->r[29]=c->r[3]|c->r[3]; // 800E62F0
  c->r[30]=c->r[4]|c->r[4]; // 800E62F4
  c->r[31]=c->r[5]|c->r[5]; // 800E62F8
  c->r[0]=R32(c->r[3]+0x00000038u); // 800E62FC
  cmps(c,0,(int32_t)c->r[0],7); // 800E6300
  if (!crb(c,0)) { goto L_800E6314; } // 800E6304
  c->r[4]=c->r[31]|c->r[31]; // 800E6308
  c->r[3]=c->r[3]+0x00000034u; // 800E630C
  c->lr=0x800E6314u; f_8003A994(c); // 800E6310
L_800E6314:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E6314
  c->r[3]=c->r[29]|c->r[29]; // 800E6318
  c->r[4]=c->r[30]|c->r[30]; // 800E631C
  c->r[5]=c->r[31]|c->r[31]; // 800E6320
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E6324
  c->ctr=c->r[12]; // 800E6328
  if (true) { c->lr=0x800E6330u; dispatch(c,c->ctr); } // 800E632C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6330
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E6334
  c->lr=c->r[0]; // 800E6338
  c->r[1]=c->r[1]+0x00000020u; // 800E633C
  return; // 800E6340
}

// fn_800E6344
void f_800E6344(Ctx* __restrict c) {
  trace_call(0x800E6344u);
  c->r[3]=0u+0x80410000u; // 800E6344
  c->r[3]=c->r[3]+0xFFFFE0FAu; // 800E6348
  return; // 800E634C
}

// fn_800E6350
void f_800E6350(Ctx* __restrict c) {
  trace_call(0x800E6350u);
  c->r[3]=0u+0x00000040u; // 800E6350
  return; // 800E6354
}

// fn_800E6358
void f_800E6358(Ctx* __restrict c) {
  trace_call(0x800E6358u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6358
  c->r[0]=c->lr; // 800E635C
  c->r[3]=0u+0x00000040u; // 800E6360
  c->r[4]=c->r[13]+0xFFFFB7F9u; // 800E6364
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6368
  c->r[5]=0u+0x00000000u; // 800E636C
  c->r[6]=0u+0x00001001u; // 800E6370
  c->lr=0x800E6378u; f_80244D20(c); // 800E6374
  cmps(c,0,(int32_t)c->r[3],0); // 800E6378
  if (crb(c,2)) { goto L_800E6384; } // 800E637C
  c->lr=0x800E6384u; f_800E6200(c); // 800E6380
L_800E6384:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6384
  c->lr=c->r[0]; // 800E6388
  c->r[1]=c->r[1]+0x00000010u; // 800E638C
  return; // 800E6390
}

// fn_800E6394
void f_800E6394(Ctx* __restrict c) {
  trace_call(0x800E6394u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6394
  c->r[0]=c->lr; // 800E6398
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E639C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E63A0
  c->r[31]=c->r[3]|c->r[3]; // 800E63A4
  c->lr=0x800E63ACu; f_800D7120(c); // 800E63A8
  c->r[4]=0u+0x80410000u; // 800E63AC
  c->r[3]=0u+0x50F80000u; // 800E63B0
  c->r[0]=c->r[3]+0x00004D87u; // 800E63B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E63B8
  c->r[4]=c->r[4]+0x000061C4u; // 800E63BC
  c->r[3]=c->r[31]|c->r[31]; // 800E63C0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E63C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E63C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E63CC
  c->lr=c->r[0]; // 800E63D0
  c->r[1]=c->r[1]+0x00000010u; // 800E63D4
  return; // 800E63D8
}

// fn_800E63DC
void f_800E63DC(Ctx* __restrict c) {
  trace_call(0x800E63DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E63DC
  c->r[0]=c->lr; // 800E63E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E63E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E63E8
  c->r[30]=c->r[3]|c->r[3]; // 800E63EC
  c->r[31]=c->r[4]|c->r[4]; // 800E63F0
  c->lr=0x800E63F8u; f_8030D728(c); // 800E63F4
  c->r[3]=c->r[31]|c->r[31]; // 800E63F8
  c->lr=0x800E6400u; f_8030BD1C(c); // 800E63FC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E6400
  c->r[3]=c->r[31]|c->r[31]; // 800E6404
  c->lr=0x800E640Cu; f_8030BD1C(c); // 800E6408
  W8(c->r[30]+0x00000034u,c->r[3]); // 800E640C
  c->r[3]=c->r[31]|c->r[31]; // 800E6410
  c->lr=0x800E6418u; f_8030BD1C(c); // 800E6414
  W8(c->r[30]+0x00000035u,c->r[3]); // 800E6418
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E641C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6420
  c->lr=c->r[0]; // 800E6424
  c->r[1]=c->r[1]+0x00000010u; // 800E6428
  return; // 800E642C
}

// fn_800E6430
void f_800E6430(Ctx* __restrict c) {
  trace_call(0x800E6430u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800E6430
  c->r[7]=R32(c->r[3]+0x00000004u); // 800E6434
  c->r[6]=R32(c->r[3]+0x00000030u); // 800E6438
  c->r[5]=R8(c->r[3]+0x00000034u); // 800E643C
  c->r[0]=R8(c->r[3]+0x00000035u); // 800E6440
  W32(c->r[4]+0x00000000u,c->r[8]); // 800E6444
  W32(c->r[4]+0x00000004u,c->r[7]); // 800E6448
  W32(c->r[4]+0x00000030u,c->r[6]); // 800E644C
  W8(c->r[4]+0x00000034u,c->r[5]); // 800E6450
  W8(c->r[4]+0x00000035u,c->r[0]); // 800E6454
  return; // 800E6458
}

// fn_800E645C
void f_800E645C(Ctx* __restrict c) {
  trace_call(0x800E645Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E645C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6460
  c->ctr=c->r[12]; // 800E6464
  if (true) { dispatch(c,c->ctr); return; } // 800E6468
}

// fn_800E646C
void f_800E646C(Ctx* __restrict c) {
  trace_call(0x800E646Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E646C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E6470
  c->ctr=c->r[12]; // 800E6474
  if (true) { dispatch(c,c->ctr); return; } // 800E6478
}

// fn_800E647C
void f_800E647C(Ctx* __restrict c) {
  trace_call(0x800E647Cu);
  c->r[3]=0u+0x80410000u; // 800E647C
  c->r[3]=c->r[3]+0xFFFFE107u; // 800E6480
  return; // 800E6484
}

// fn_800E6488
void f_800E6488(Ctx* __restrict c) {
  trace_call(0x800E6488u);
  c->r[3]=0u+0x00000038u; // 800E6488
  return; // 800E648C
}

// fn_800E6490
void f_800E6490(Ctx* __restrict c) {
  trace_call(0x800E6490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6490
  c->r[0]=c->lr; // 800E6494
  c->r[3]=0u+0x00000038u; // 800E6498
  c->r[4]=c->r[13]+0xFFFFB7FEu; // 800E649C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E64A0
  c->r[5]=0u+0x00000000u; // 800E64A4
  c->r[6]=0u+0x00001001u; // 800E64A8
  c->lr=0x800E64B0u; f_80244D20(c); // 800E64AC
  cmps(c,0,(int32_t)c->r[3],0); // 800E64B0
  if (crb(c,2)) { goto L_800E64BC; } // 800E64B4
  c->lr=0x800E64BCu; f_800E6394(c); // 800E64B8
L_800E64BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E64BC
  c->lr=c->r[0]; // 800E64C0
  c->r[1]=c->r[1]+0x00000010u; // 800E64C4
  return; // 800E64C8
}

// fn_800E64CC
void f_800E64CC(Ctx* __restrict c) {
  trace_call(0x800E64CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E64CC
  c->r[0]=c->lr; // 800E64D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E64D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E64D8
  c->r[31]=c->r[3]|c->r[3]; // 800E64DC
  c->lr=0x800E64E4u; f_800D7120(c); // 800E64E0
  c->r[4]=0u+0x80410000u; // 800E64E4
  c->r[3]=0u+0x50F80000u; // 800E64E8
  c->r[0]=c->r[3]+0x00004D87u; // 800E64EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E64F0
  c->r[4]=c->r[4]+0x00006190u; // 800E64F4
  c->r[3]=c->r[31]|c->r[31]; // 800E64F8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E64FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6500
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6504
  c->lr=c->r[0]; // 800E6508
  c->r[1]=c->r[1]+0x00000010u; // 800E650C
  return; // 800E6510
}

// fn_800E6514
void f_800E6514(Ctx* __restrict c) {
  trace_call(0x800E6514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6514
  c->r[0]=c->lr; // 800E6518
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E651C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6520
  c->r[30]=c->r[3]|c->r[3]; // 800E6524
  c->r[31]=c->r[4]|c->r[4]; // 800E6528
  c->lr=0x800E6530u; f_8030D728(c); // 800E652C
  c->r[3]=c->r[31]|c->r[31]; // 800E6530
  c->lr=0x800E6538u; f_8030BD1C(c); // 800E6534
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E6538
  c->r[3]=c->r[31]|c->r[31]; // 800E653C
  c->lr=0x800E6544u; f_8030BD1C(c); // 800E6540
  W8(c->r[30]+0x00000034u,c->r[3]); // 800E6544
  c->r[3]=c->r[31]|c->r[31]; // 800E6548
  c->lr=0x800E6550u; f_8030BD1C(c); // 800E654C
  W8(c->r[30]+0x00000035u,c->r[3]); // 800E6550
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6554
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6558
  c->lr=c->r[0]; // 800E655C
  c->r[1]=c->r[1]+0x00000010u; // 800E6560
  return; // 800E6564
}

// fn_800E6568
void f_800E6568(Ctx* __restrict c) {
  trace_call(0x800E6568u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800E6568
  c->r[7]=R32(c->r[3]+0x00000004u); // 800E656C
  c->r[6]=R32(c->r[3]+0x00000030u); // 800E6570
  c->r[5]=R8(c->r[3]+0x00000034u); // 800E6574
  c->r[0]=R8(c->r[3]+0x00000035u); // 800E6578
  W32(c->r[4]+0x00000000u,c->r[8]); // 800E657C
  W32(c->r[4]+0x00000004u,c->r[7]); // 800E6580
  W32(c->r[4]+0x00000030u,c->r[6]); // 800E6584
  W8(c->r[4]+0x00000034u,c->r[5]); // 800E6588
  W8(c->r[4]+0x00000035u,c->r[0]); // 800E658C
  return; // 800E6590
}

// fn_800E6594
void f_800E6594(Ctx* __restrict c) {
  trace_call(0x800E6594u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6594
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6598
  c->ctr=c->r[12]; // 800E659C
  if (true) { dispatch(c,c->ctr); return; } // 800E65A0
}

// fn_800E65A4
void f_800E65A4(Ctx* __restrict c) {
  trace_call(0x800E65A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E65A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E65A8
  c->ctr=c->r[12]; // 800E65AC
  if (true) { dispatch(c,c->ctr); return; } // 800E65B0
}

// fn_800E65B4
void f_800E65B4(Ctx* __restrict c) {
  trace_call(0x800E65B4u);
  c->r[3]=0u+0x80410000u; // 800E65B4
  c->r[3]=c->r[3]+0xFFFFE11Du; // 800E65B8
  return; // 800E65BC
}

// fn_800E65C0
void f_800E65C0(Ctx* __restrict c) {
  trace_call(0x800E65C0u);
  c->r[3]=0u+0x00000038u; // 800E65C0
  return; // 800E65C4
}

// fn_800E65C8
void f_800E65C8(Ctx* __restrict c) {
  trace_call(0x800E65C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E65C8
  c->r[0]=c->lr; // 800E65CC
  c->r[3]=0u+0x00000038u; // 800E65D0
  c->r[4]=c->r[13]+0xFFFFB803u; // 800E65D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E65D8
  c->r[5]=0u+0x00000000u; // 800E65DC
  c->r[6]=0u+0x00001001u; // 800E65E0
  c->lr=0x800E65E8u; f_80244D20(c); // 800E65E4
  cmps(c,0,(int32_t)c->r[3],0); // 800E65E8
  if (crb(c,2)) { goto L_800E65F4; } // 800E65EC
  c->lr=0x800E65F4u; f_800E64CC(c); // 800E65F0
L_800E65F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E65F4
  c->lr=c->r[0]; // 800E65F8
  c->r[1]=c->r[1]+0x00000010u; // 800E65FC
  return; // 800E6600
}

// fn_800E6604
void f_800E6604(Ctx* __restrict c) {
  trace_call(0x800E6604u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6604
  c->r[0]=c->lr; // 800E6608
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E660C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6610
  c->r[31]=c->r[3]|c->r[3]; // 800E6614
  c->lr=0x800E661Cu; f_800D7120(c); // 800E6618
  c->r[3]=0u+0x80410000u; // 800E661C
  c->r[0]=0u+0x00000000u; // 800E6620
  c->r[3]=c->r[3]+0x0000615Cu; // 800E6624
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E6628
  c->r[3]=c->r[31]|c->r[31]; // 800E662C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E6630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6634
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6638
  c->lr=c->r[0]; // 800E663C
  c->r[1]=c->r[1]+0x00000010u; // 800E6640
  return; // 800E6644
}

// fn_800E6648
void f_800E6648(Ctx* __restrict c) {
  trace_call(0x800E6648u);
  f_8030D728(c); return; // 800E6648
}

// fn_800E664C
void f_800E664C(Ctx* __restrict c) {
  trace_call(0x800E664Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800E664C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E6650
  W32(c->r[4]+0x00000000u,c->r[5]); // 800E6654
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E6658
  return; // 800E665C
}

// fn_800E6660
void f_800E6660(Ctx* __restrict c) {
  trace_call(0x800E6660u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6660
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6664
  c->ctr=c->r[12]; // 800E6668
  if (true) { dispatch(c,c->ctr); return; } // 800E666C
}

// fn_800E6670
void f_800E6670(Ctx* __restrict c) {
  trace_call(0x800E6670u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6670
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E6674
  c->ctr=c->r[12]; // 800E6678
  if (true) { dispatch(c,c->ctr); return; } // 800E667C
}

// fn_800E6680
void f_800E6680(Ctx* __restrict c) {
  trace_call(0x800E6680u);
  c->r[3]=0u+0x80410000u; // 800E6680
  c->r[3]=c->r[3]+0xFFFFE13Au; // 800E6684
  return; // 800E6688
}

// fn_800E668C
void f_800E668C(Ctx* __restrict c) {
  trace_call(0x800E668Cu);
  c->r[3]=0u+0x00000030u; // 800E668C
  return; // 800E6690
}

// fn_800E6694
void f_800E6694(Ctx* __restrict c) {
  trace_call(0x800E6694u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6694
  c->r[0]=c->lr; // 800E6698
  c->r[3]=0u+0x00000030u; // 800E669C
  c->r[4]=c->r[13]+0xFFFFB808u; // 800E66A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E66A4
  c->r[5]=0u+0x00000000u; // 800E66A8
  c->r[6]=0u+0x00001001u; // 800E66AC
  c->lr=0x800E66B4u; f_80244D20(c); // 800E66B0
  cmps(c,0,(int32_t)c->r[3],0); // 800E66B4
  if (crb(c,2)) { goto L_800E66C0; } // 800E66B8
  c->lr=0x800E66C0u; f_800E6604(c); // 800E66BC
L_800E66C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E66C0
  c->lr=c->r[0]; // 800E66C4
  c->r[1]=c->r[1]+0x00000010u; // 800E66C8
  return; // 800E66CC
}

// fn_800E66D0
void f_800E66D0(Ctx* __restrict c) {
  trace_call(0x800E66D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E66D0
  c->r[0]=c->lr; // 800E66D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E66D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E66DC
  c->r[31]=c->r[3]|c->r[3]; // 800E66E0
  c->lr=0x800E66E8u; f_800D7120(c); // 800E66E4
  c->r[4]=0u+0x80410000u; // 800E66E8
  c->r[3]=0u+0x616E0000u; // 800E66EC
  c->r[0]=c->r[3]+0x00003A28u; // 800E66F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E66F4
  c->r[4]=c->r[4]+0x00006128u; // 800E66F8
  c->r[3]=c->r[31]|c->r[31]; // 800E66FC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E6700
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6704
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6708
  c->lr=c->r[0]; // 800E670C
  c->r[1]=c->r[1]+0x00000010u; // 800E6710
  return; // 800E6714
}

// fn_800E6718
void f_800E6718(Ctx* __restrict c) {
  trace_call(0x800E6718u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6718
  c->r[0]=c->lr; // 800E671C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6720
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6724
  c->r[30]=c->r[3]|c->r[3]; // 800E6728
  c->r[31]=c->r[4]|c->r[4]; // 800E672C
  c->lr=0x800E6734u; f_8030D728(c); // 800E6730
  c->r[3]=c->r[31]|c->r[31]; // 800E6734
  c->lr=0x800E673Cu; f_8030BD1C(c); // 800E6738
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E673C
  c->r[3]=c->r[31]|c->r[31]; // 800E6740
  c->lr=0x800E6748u; f_8030BD1C(c); // 800E6744
  c->r[4]=c->r[3]|c->r[3]; // 800E6748
  c->r[3]=c->r[31]|c->r[31]; // 800E674C
  c->lr=0x800E6754u; f_8030C2D8(c); // 800E6750
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E6754
  c->r[3]=c->r[31]|c->r[31]; // 800E6758
  c->lr=0x800E6760u; f_8030BD1C(c); // 800E675C
  c->r[4]=c->r[3]|c->r[3]; // 800E6760
  c->r[3]=c->r[31]|c->r[31]; // 800E6764
  c->lr=0x800E676Cu; f_8030C2D8(c); // 800E6768
  W32(c->r[30]+0x00000038u,c->r[3]); // 800E676C
  c->r[3]=c->r[31]|c->r[31]; // 800E6770
  c->lr=0x800E6778u; f_8030BD1C(c); // 800E6774
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E6778
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E677C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6780
  c->lr=c->r[0]; // 800E6784
  c->r[1]=c->r[1]+0x00000010u; // 800E6788
  return; // 800E678C
}

// fn_800E6790
void f_800E6790(Ctx* __restrict c) {
  trace_call(0x800E6790u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6790
  c->r[0]=c->lr; // 800E6794
  c->r[7]=R32(c->r[3]+0x00000000u); // 800E6798
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E679C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E67A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E67A4
  c->r[29]=c->r[3]|c->r[3]; // 800E67A8
  c->r[0]=R32(c->r[3]+0x00000030u); // 800E67AC
  c->r[31]=c->r[5]|c->r[5]; // 800E67B0
  c->r[3]=R32(c->r[3]+0x00000034u); // 800E67B4
  c->r[30]=c->r[4]|c->r[4]; // 800E67B8
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E67BC
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E67C0
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E67C4
  c->r[4]=c->r[31]|c->r[31]; // 800E67C8
  c->lr=0x800E67D0u; f_8030D5B4(c); // 800E67CC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E67D0
  c->r[4]=c->r[31]|c->r[31]; // 800E67D4
  c->r[3]=R32(c->r[29]+0x00000038u); // 800E67D8
  c->lr=0x800E67E0u; f_8030D5B4(c); // 800E67DC
  c->r[0]=R8(c->r[29]+0x0000003Cu); // 800E67E0
  W32(c->r[30]+0x00000038u,c->r[3]); // 800E67E4
  W8(c->r[30]+0x0000003Cu,c->r[0]); // 800E67E8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E67EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E67F0
  c->lr=c->r[0]; // 800E67F4
  c->r[1]=c->r[1]+0x00000020u; // 800E67F8
  return; // 800E67FC
}

// fn_800E6800
void f_800E6800(Ctx* __restrict c) {
  trace_call(0x800E6800u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6800
  c->r[0]=c->lr; // 800E6804
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E680C
  c->r[31]=c->r[3]|c->r[3]; // 800E6810
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6814
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6818
  c->ctr=c->r[12]; // 800E681C
  if (true) { c->lr=0x800E6824u; dispatch(c,c->ctr); } // 800E6820
  c->r[3]=R32(c->r[31]+0x00000034u); // 800E6824
  cmps(c,0,(int32_t)c->r[3],0); // 800E6828
  if (crb(c,2)) { goto L_800E683C; } // 800E682C
  c->lr=0x800E6834u; f_800416A8(c); // 800E6830
  c->r[0]=0u+0x00000000u; // 800E6834
  W32(c->r[31]+0x00000034u,c->r[0]); // 800E6838
L_800E683C:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 800E683C
  cmps(c,0,(int32_t)c->r[3],0); // 800E6840
  if (crb(c,2)) { goto L_800E6854; } // 800E6844
  c->lr=0x800E684Cu; f_800416A8(c); // 800E6848
  c->r[0]=0u+0x00000000u; // 800E684C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800E6850
L_800E6854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6858
  c->lr=c->r[0]; // 800E685C
  c->r[1]=c->r[1]+0x00000010u; // 800E6860
  return; // 800E6864
}

// fn_800E6868
void f_800E6868(Ctx* __restrict c) {
  trace_call(0x800E6868u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6868
  c->r[0]=c->lr; // 800E686C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6870
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6874
  c->r[29]=c->r[3]|c->r[3]; // 800E6878
  c->r[30]=c->r[4]|c->r[4]; // 800E687C
  c->r[31]=c->r[5]|c->r[5]; // 800E6880
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E6884
  cmps(c,0,(int32_t)c->r[0],0); // 800E6888
  if (crb(c,2)) { goto L_800E6898; } // 800E688C
  c->r[3]=c->r[0]|c->r[0]; // 800E6890
  c->lr=0x800E6898u; f_8030D100(c); // 800E6894
L_800E6898:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800E6898
  cmps(c,0,(int32_t)c->r[3],0); // 800E689C
  if (crb(c,2)) { goto L_800E68B0; } // 800E68A0
  c->r[4]=c->r[30]|c->r[30]; // 800E68A4
  c->r[5]=c->r[31]|c->r[31]; // 800E68A8
  c->lr=0x800E68B0u; f_8030D100(c); // 800E68AC
L_800E68B0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E68B0
  c->r[3]=c->r[29]|c->r[29]; // 800E68B4
  c->r[4]=c->r[30]|c->r[30]; // 800E68B8
  c->r[5]=c->r[31]|c->r[31]; // 800E68BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E68C0
  c->ctr=c->r[12]; // 800E68C4
  if (true) { c->lr=0x800E68CCu; dispatch(c,c->ctr); } // 800E68C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E68CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E68D0
  c->lr=c->r[0]; // 800E68D4
  c->r[1]=c->r[1]+0x00000020u; // 800E68D8
  return; // 800E68DC
}

// fn_800E68E0
void f_800E68E0(Ctx* __restrict c) {
  trace_call(0x800E68E0u);
  c->r[3]=0u+0x80410000u; // 800E68E0
  c->r[3]=c->r[3]+0xFFFFE14Fu; // 800E68E4
  return; // 800E68E8
}

// fn_800E68EC
void f_800E68EC(Ctx* __restrict c) {
  trace_call(0x800E68ECu);
  c->r[3]=0u+0x00000040u; // 800E68EC
  return; // 800E68F0
}

// fn_800E68F4
void f_800E68F4(Ctx* __restrict c) {
  trace_call(0x800E68F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E68F4
  c->r[0]=c->lr; // 800E68F8
  c->r[3]=0u+0x00000040u; // 800E68FC
  c->r[4]=c->r[13]+0xFFFFB80Du; // 800E6900
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6904
  c->r[5]=0u+0x00000000u; // 800E6908
  c->r[6]=0u+0x00001001u; // 800E690C
  c->lr=0x800E6914u; f_80244D20(c); // 800E6910
  cmps(c,0,(int32_t)c->r[3],0); // 800E6914
  if (crb(c,2)) { goto L_800E6920; } // 800E6918
  c->lr=0x800E6920u; f_800E66D0(c); // 800E691C
L_800E6920:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6920
  c->lr=c->r[0]; // 800E6924
  c->r[1]=c->r[1]+0x00000010u; // 800E6928
  return; // 800E692C
}

// fn_800E6930
void f_800E6930(Ctx* __restrict c) {
  trace_call(0x800E6930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6930
  c->r[0]=c->lr; // 800E6934
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6938
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E693C
  c->r[31]=c->r[3]|c->r[3]; // 800E6940
  c->lr=0x800E6948u; f_800D7120(c); // 800E6944
  c->r[3]=0u+0x80410000u; // 800E6948
  c->r[0]=0u+0x00000000u; // 800E694C
  c->r[3]=c->r[3]+0x000060F4u; // 800E6950
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E6954
  c->r[3]=c->r[31]|c->r[31]; // 800E6958
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E695C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6960
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6964
  c->lr=c->r[0]; // 800E6968
  c->r[1]=c->r[1]+0x00000010u; // 800E696C
  return; // 800E6970
}

// fn_800E6974
void f_800E6974(Ctx* __restrict c) {
  trace_call(0x800E6974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6974
  c->r[0]=c->lr; // 800E6978
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E697C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6980
  c->r[30]=c->r[3]|c->r[3]; // 800E6984
  c->r[31]=c->r[4]|c->r[4]; // 800E6988
  c->lr=0x800E6990u; f_8030D728(c); // 800E698C
  c->r[3]=c->r[31]|c->r[31]; // 800E6990
  c->lr=0x800E6998u; f_8030BD1C(c); // 800E6994
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E6998
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E699C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E69A0
  c->lr=c->r[0]; // 800E69A4
  c->r[1]=c->r[1]+0x00000010u; // 800E69A8
  return; // 800E69AC
}

// fn_800E69B0
void f_800E69B0(Ctx* __restrict c) {
  trace_call(0x800E69B0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E69B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E69B4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800E69B8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E69BC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E69C0
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E69C4
  return; // 800E69C8
}

// fn_800E69CC
void f_800E69CC(Ctx* __restrict c) {
  trace_call(0x800E69CCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E69CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E69D0
  c->ctr=c->r[12]; // 800E69D4
  if (true) { dispatch(c,c->ctr); return; } // 800E69D8
}

// fn_800E69DC
void f_800E69DC(Ctx* __restrict c) {
  trace_call(0x800E69DCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E69DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E69E0
  c->ctr=c->r[12]; // 800E69E4
  if (true) { dispatch(c,c->ctr); return; } // 800E69E8
}

// fn_800E69EC
void f_800E69EC(Ctx* __restrict c) {
  trace_call(0x800E69ECu);
  c->r[3]=0u+0x80410000u; // 800E69EC
  c->r[3]=c->r[3]+0xFFFFE158u; // 800E69F0
  return; // 800E69F4
}

// fn_800E69F8
void f_800E69F8(Ctx* __restrict c) {
  trace_call(0x800E69F8u);
  c->r[3]=0u+0x00000034u; // 800E69F8
  return; // 800E69FC
}

// fn_800E6A00
void f_800E6A00(Ctx* __restrict c) {
  trace_call(0x800E6A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6A00
  c->r[0]=c->lr; // 800E6A04
  c->r[3]=0u+0x00000034u; // 800E6A08
  c->r[4]=c->r[13]+0xFFFFB812u; // 800E6A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6A10
  c->r[5]=0u+0x00000000u; // 800E6A14
  c->r[6]=0u+0x00001001u; // 800E6A18
  c->lr=0x800E6A20u; f_80244D20(c); // 800E6A1C
  cmps(c,0,(int32_t)c->r[3],0); // 800E6A20
  if (crb(c,2)) { goto L_800E6A2C; } // 800E6A24
  c->lr=0x800E6A2Cu; f_800E6930(c); // 800E6A28
L_800E6A2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6A2C
  c->lr=c->r[0]; // 800E6A30
  c->r[1]=c->r[1]+0x00000010u; // 800E6A34
  return; // 800E6A38
}

// fn_800E6A3C
void f_800E6A3C(Ctx* __restrict c) {
  trace_call(0x800E6A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6A3C
  c->r[0]=c->lr; // 800E6A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6A44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6A48
  c->r[31]=c->r[3]|c->r[3]; // 800E6A4C
  c->lr=0x800E6A54u; f_800D7120(c); // 800E6A50
  c->r[5]=0u+0x80410000u; // 800E6A54
  c->r[3]=0u+0x59710000u; // 800E6A58
  c->r[0]=c->r[3]+0x000047B2u; // 800E6A5C
  c->r[4]=0u+0x00000000u; // 800E6A60
  c->r[5]=c->r[5]+0x000060C0u; // 800E6A64
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E6A68
  c->r[3]=c->r[31]|c->r[31]; // 800E6A6C
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800E6A70
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E6A74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6A78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6A7C
  c->lr=c->r[0]; // 800E6A80
  c->r[1]=c->r[1]+0x00000010u; // 800E6A84
  return; // 800E6A88
}

// fn_800E6A8C
void f_800E6A8C(Ctx* __restrict c) {
  trace_call(0x800E6A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6A8C
  c->r[0]=c->lr; // 800E6A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6A94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6A98
  c->r[30]=c->r[3]|c->r[3]; // 800E6A9C
  c->r[31]=c->r[4]|c->r[4]; // 800E6AA0
  c->lr=0x800E6AA8u; f_8030D728(c); // 800E6AA4
  c->r[3]=c->r[31]|c->r[31]; // 800E6AA8
  c->lr=0x800E6AB0u; f_8030BD1C(c); // 800E6AAC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E6AB0
  c->r[3]=c->r[31]|c->r[31]; // 800E6AB4
  c->r[4]=0u+0x00000000u; // 800E6AB8
  c->lr=0x800E6AC0u; f_8030BE30(c); // 800E6ABC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E6AC0
  c->r[3]=c->r[31]|c->r[31]; // 800E6AC4
  c->lr=0x800E6ACCu; f_8030BD1C(c); // 800E6AC8
  W32(c->r[30]+0x00000038u,c->r[3]); // 800E6ACC
  c->r[3]=c->r[31]|c->r[31]; // 800E6AD0
  c->lr=0x800E6AD8u; f_8030BD1C(c); // 800E6AD4
  W8(c->r[30]+0x00000040u,c->r[3]); // 800E6AD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6ADC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6AE0
  c->lr=c->r[0]; // 800E6AE4
  c->r[1]=c->r[1]+0x00000010u; // 800E6AE8
  return; // 800E6AEC
}

// fn_800E6AF0
void f_800E6AF0(Ctx* __restrict c) {
  trace_call(0x800E6AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6AF0
  c->r[0]=c->lr; // 800E6AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6AF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6AFC
  c->r[30]=c->r[3]|c->r[3]; // 800E6B00
  c->r[31]=c->r[4]|c->r[4]; // 800E6B04
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E6B08
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E6B0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E6B10
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E6B14
  c->r[0]=R32(c->r[3]+0x00000030u); // 800E6B18
  c->r[3]=c->r[4]+0x00000034u; // 800E6B1C
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E6B20
  c->r[4]=c->r[30]+0x00000034u; // 800E6B24
  c->lr=0x800E6B2Cu; f_8003AB48(c); // 800E6B28
  c->r[0]=R8(c->r[30]+0x00000040u); // 800E6B2C
  W8(c->r[31]+0x00000040u,c->r[0]); // 800E6B30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6B34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6B38
  c->lr=c->r[0]; // 800E6B3C
  c->r[1]=c->r[1]+0x00000010u; // 800E6B40
  return; // 800E6B44
}

// fn_800E6B48
void f_800E6B48(Ctx* __restrict c) {
  trace_call(0x800E6B48u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6B48
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6B4C
  c->ctr=c->r[12]; // 800E6B50
  if (true) { dispatch(c,c->ctr); return; } // 800E6B54
}

// fn_800E6B58
void f_800E6B58(Ctx* __restrict c) {
  trace_call(0x800E6B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6B58
  c->r[0]=c->lr; // 800E6B5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E6B60
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6B64
  c->r[29]=c->r[3]|c->r[3]; // 800E6B68
  c->r[30]=c->r[4]|c->r[4]; // 800E6B6C
  c->r[31]=c->r[5]|c->r[5]; // 800E6B70
  c->r[0]=R32(c->r[3]+0x00000038u); // 800E6B74
  cmps(c,0,(int32_t)c->r[0],7); // 800E6B78
  if (!crb(c,0)) { goto L_800E6B8C; } // 800E6B7C
  c->r[4]=c->r[31]|c->r[31]; // 800E6B80
  c->r[3]=c->r[3]+0x00000034u; // 800E6B84
  c->lr=0x800E6B8Cu; f_8003A994(c); // 800E6B88
L_800E6B8C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E6B8C
  c->r[3]=c->r[29]|c->r[29]; // 800E6B90
  c->r[4]=c->r[30]|c->r[30]; // 800E6B94
  c->r[5]=c->r[31]|c->r[31]; // 800E6B98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E6B9C
  c->ctr=c->r[12]; // 800E6BA0
  if (true) { c->lr=0x800E6BA8u; dispatch(c,c->ctr); } // 800E6BA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6BA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E6BAC
  c->lr=c->r[0]; // 800E6BB0
  c->r[1]=c->r[1]+0x00000020u; // 800E6BB4
  return; // 800E6BB8
}

// fn_800E6BBC
void f_800E6BBC(Ctx* __restrict c) {
  trace_call(0x800E6BBCu);
  c->r[3]=0u+0x80410000u; // 800E6BBC
  c->r[3]=c->r[3]+0xFFFFE16Bu; // 800E6BC0
  return; // 800E6BC4
}

// fn_800E6BC8
void f_800E6BC8(Ctx* __restrict c) {
  trace_call(0x800E6BC8u);
  c->r[3]=0u+0x00000044u; // 800E6BC8
  return; // 800E6BCC
}

// fn_800E6BD0
void f_800E6BD0(Ctx* __restrict c) {
  trace_call(0x800E6BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6BD0
  c->r[0]=c->lr; // 800E6BD4
  c->r[3]=0u+0x00000044u; // 800E6BD8
  c->r[4]=c->r[13]+0xFFFFB817u; // 800E6BDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6BE0
  c->r[5]=0u+0x00000000u; // 800E6BE4
  c->r[6]=0u+0x00001001u; // 800E6BE8
  c->lr=0x800E6BF0u; f_80244D20(c); // 800E6BEC
  cmps(c,0,(int32_t)c->r[3],0); // 800E6BF0
  if (crb(c,2)) { goto L_800E6BFC; } // 800E6BF4
  c->lr=0x800E6BFCu; f_800E6A3C(c); // 800E6BF8
L_800E6BFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6BFC
  c->lr=c->r[0]; // 800E6C00
  c->r[1]=c->r[1]+0x00000010u; // 800E6C04
  return; // 800E6C08
}

// fn_800E6C0C
void f_800E6C0C(Ctx* __restrict c) {
  trace_call(0x800E6C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6C0C
  c->r[0]=c->lr; // 800E6C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6C14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6C18
  c->r[31]=c->r[3]|c->r[3]; // 800E6C1C
  c->lr=0x800E6C24u; f_800D7120(c); // 800E6C20
  c->r[4]=0u+0x80410000u; // 800E6C24
  c->r[3]=0u+0x7CF50000u; // 800E6C28
  c->r[0]=c->r[3]+0x00004C05u; // 800E6C2C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E6C30
  c->r[4]=c->r[4]+0x0000608Cu; // 800E6C34
  c->r[3]=c->r[31]|c->r[31]; // 800E6C38
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E6C3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6C40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6C44
  c->lr=c->r[0]; // 800E6C48
  c->r[1]=c->r[1]+0x00000010u; // 800E6C4C
  return; // 800E6C50
}

// fn_800E6C54
void f_800E6C54(Ctx* __restrict c) {
  trace_call(0x800E6C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6C54
  c->r[0]=c->lr; // 800E6C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6C5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6C60
  c->r[30]=c->r[3]|c->r[3]; // 800E6C64
  c->r[31]=c->r[4]|c->r[4]; // 800E6C68
  c->lr=0x800E6C70u; f_8030D728(c); // 800E6C6C
  c->r[3]=c->r[31]|c->r[31]; // 800E6C70
  c->lr=0x800E6C78u; f_8030BD1C(c); // 800E6C74
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E6C78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6C80
  c->lr=c->r[0]; // 800E6C84
  c->r[1]=c->r[1]+0x00000010u; // 800E6C88
  return; // 800E6C8C
}

// fn_800E6C90
void f_800E6C90(Ctx* __restrict c) {
  trace_call(0x800E6C90u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E6C90
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E6C94
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E6C98
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E6C9C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E6CA0
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E6CA4
  return; // 800E6CA8
}

// fn_800E6CAC
void f_800E6CAC(Ctx* __restrict c) {
  trace_call(0x800E6CACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6CAC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6CB0
  c->ctr=c->r[12]; // 800E6CB4
  if (true) { dispatch(c,c->ctr); return; } // 800E6CB8
}

// fn_800E6CBC
void f_800E6CBC(Ctx* __restrict c) {
  trace_call(0x800E6CBCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6CBC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E6CC0
  c->ctr=c->r[12]; // 800E6CC4
  if (true) { dispatch(c,c->ctr); return; } // 800E6CC8
}

// fn_800E6CCC
void f_800E6CCC(Ctx* __restrict c) {
  trace_call(0x800E6CCCu);
  c->r[3]=0u+0x80410000u; // 800E6CCC
  c->r[3]=c->r[3]+0xFFFFE189u; // 800E6CD0
  return; // 800E6CD4
}

// fn_800E6CD8
void f_800E6CD8(Ctx* __restrict c) {
  trace_call(0x800E6CD8u);
  c->r[3]=0u+0x00000034u; // 800E6CD8
  return; // 800E6CDC
}

// fn_800E6CE0
void f_800E6CE0(Ctx* __restrict c) {
  trace_call(0x800E6CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6CE0
  c->r[0]=c->lr; // 800E6CE4
  c->r[3]=0u+0x00000034u; // 800E6CE8
  c->r[4]=c->r[13]+0xFFFFB81Cu; // 800E6CEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6CF0
  c->r[5]=0u+0x00000000u; // 800E6CF4
  c->r[6]=0u+0x00001001u; // 800E6CF8
  c->lr=0x800E6D00u; f_80244D20(c); // 800E6CFC
  cmps(c,0,(int32_t)c->r[3],0); // 800E6D00
  if (crb(c,2)) { goto L_800E6D0C; } // 800E6D04
  c->lr=0x800E6D0Cu; f_800E6C0C(c); // 800E6D08
L_800E6D0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6D0C
  c->lr=c->r[0]; // 800E6D10
  c->r[1]=c->r[1]+0x00000010u; // 800E6D14
  return; // 800E6D18
}

// fn_800E6D1C
void f_800E6D1C(Ctx* __restrict c) {
  trace_call(0x800E6D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6D1C
  c->r[0]=c->lr; // 800E6D20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6D24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6D28
  c->r[31]=c->r[3]|c->r[3]; // 800E6D2C
  c->lr=0x800E6D34u; f_800D7120(c); // 800E6D30
  c->r[4]=0u+0x80410000u; // 800E6D34
  c->r[3]=0u+0x7CF50000u; // 800E6D38
  c->r[0]=c->r[3]+0x00004C05u; // 800E6D3C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E6D40
  c->r[4]=c->r[4]+0x00006058u; // 800E6D44
  c->r[3]=c->r[31]|c->r[31]; // 800E6D48
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E6D4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6D50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6D54
  c->lr=c->r[0]; // 800E6D58
  c->r[1]=c->r[1]+0x00000010u; // 800E6D5C
  return; // 800E6D60
}

// fn_800E6D64
void f_800E6D64(Ctx* __restrict c) {
  trace_call(0x800E6D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6D64
  c->r[0]=c->lr; // 800E6D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6D6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6D70
  c->r[30]=c->r[3]|c->r[3]; // 800E6D74
  c->r[31]=c->r[4]|c->r[4]; // 800E6D78
  c->lr=0x800E6D80u; f_8030D728(c); // 800E6D7C
  c->r[3]=c->r[31]|c->r[31]; // 800E6D80
  c->lr=0x800E6D88u; f_8030BD1C(c); // 800E6D84
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E6D88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6D8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6D90
  c->lr=c->r[0]; // 800E6D94
  c->r[1]=c->r[1]+0x00000010u; // 800E6D98
  return; // 800E6D9C
}

// fn_800E6DA0
void f_800E6DA0(Ctx* __restrict c) {
  trace_call(0x800E6DA0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E6DA0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E6DA4
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E6DA8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E6DAC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E6DB0
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E6DB4
  return; // 800E6DB8
}

// fn_800E6DBC
void f_800E6DBC(Ctx* __restrict c) {
  trace_call(0x800E6DBCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6DBC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6DC0
  c->ctr=c->r[12]; // 800E6DC4
  if (true) { dispatch(c,c->ctr); return; } // 800E6DC8
}

// fn_800E6DCC
void f_800E6DCC(Ctx* __restrict c) {
  trace_call(0x800E6DCCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6DCC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E6DD0
  c->ctr=c->r[12]; // 800E6DD4
  if (true) { dispatch(c,c->ctr); return; } // 800E6DD8
}

// fn_800E6DDC
void f_800E6DDC(Ctx* __restrict c) {
  trace_call(0x800E6DDCu);
  c->r[3]=0u+0x80410000u; // 800E6DDC
  c->r[3]=c->r[3]+0xFFFFE195u; // 800E6DE0
  return; // 800E6DE4
}

// fn_800E6DE8
void f_800E6DE8(Ctx* __restrict c) {
  trace_call(0x800E6DE8u);
  c->r[3]=0u+0x00000034u; // 800E6DE8
  return; // 800E6DEC
}

// fn_800E6DF0
void f_800E6DF0(Ctx* __restrict c) {
  trace_call(0x800E6DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6DF0
  c->r[0]=c->lr; // 800E6DF4
  c->r[3]=0u+0x00000034u; // 800E6DF8
  c->r[4]=c->r[13]+0xFFFFB821u; // 800E6DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6E00
  c->r[5]=0u+0x00000000u; // 800E6E04
  c->r[6]=0u+0x00001001u; // 800E6E08
  c->lr=0x800E6E10u; f_80244D20(c); // 800E6E0C
  cmps(c,0,(int32_t)c->r[3],0); // 800E6E10
  if (crb(c,2)) { goto L_800E6E1C; } // 800E6E14
  c->lr=0x800E6E1Cu; f_800E6D1C(c); // 800E6E18
L_800E6E1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6E1C
  c->lr=c->r[0]; // 800E6E20
  c->r[1]=c->r[1]+0x00000010u; // 800E6E24
  return; // 800E6E28
}

// fn_800E6E2C
void f_800E6E2C(Ctx* __restrict c) {
  trace_call(0x800E6E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6E2C
  c->r[0]=c->lr; // 800E6E30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6E34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E6E38
  c->r[31]=c->r[3]|c->r[3]; // 800E6E3C
  c->lr=0x800E6E44u; f_800D7120(c); // 800E6E40
  c->r[4]=0u+0x80410000u; // 800E6E44
  c->r[3]=0u+0x60780000u; // 800E6E48
  c->r[0]=c->r[3]+0xFFFFB26Eu; // 800E6E4C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E6E50
  c->r[4]=c->r[4]+0x00006024u; // 800E6E54
  c->r[3]=c->r[31]|c->r[31]; // 800E6E58
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E6E5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E6E60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6E64
  c->lr=c->r[0]; // 800E6E68
  c->r[1]=c->r[1]+0x00000010u; // 800E6E6C
  return; // 800E6E70
}

// fn_800E6E74
void f_800E6E74(Ctx* __restrict c) {
  trace_call(0x800E6E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E6E74
  c->r[0]=c->lr; // 800E6E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E6E7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E6E80
  c->r[30]=c->r[3]|c->r[3]; // 800E6E84
  c->r[31]=c->r[4]|c->r[4]; // 800E6E88
  c->lr=0x800E6E90u; f_8030D728(c); // 800E6E8C
  c->r[3]=c->r[31]|c->r[31]; // 800E6E90
  c->lr=0x800E6E98u; f_8030BD1C(c); // 800E6E94
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E6E98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E6E9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E6EA0
  c->lr=c->r[0]; // 800E6EA4
  c->r[1]=c->r[1]+0x00000010u; // 800E6EA8
  return; // 800E6EAC
}

// fn_800E6EB0
void f_800E6EB0(Ctx* __restrict c) {
  trace_call(0x800E6EB0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E6EB0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E6EB4
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E6EB8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E6EBC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E6EC0
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E6EC4
  return; // 800E6EC8
}

// fn_800E6ECC
void f_800E6ECC(Ctx* __restrict c) {
  trace_call(0x800E6ECCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E6ECC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E6ED0
  c->ctr=c->r[12]; // 800E6ED4
  if (true) { dispatch(c,c->ctr); return; } // 800E6ED8
}

