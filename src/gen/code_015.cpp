#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800CC578
void f_800CC578(Ctx* __restrict c) {
  trace_call(0x800CC578u);
  c->r[0]=c->r[4]+0xE4650000u; // 800CC578
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CC57C
  if (!crb(c,2)) { goto L_800CC58C; } // 800CC580
  c->r[3]=0u+0x00000001u; // 800CC584
  return; // 800CC588
L_800CC58C:;
  c->r[3]=0u+0x1E2D0000u; // 800CC58C
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CC590
  c->r[0]=c->r[4]-c->r[0]; // 800CC594
  c->r[0]=cntlz(c->r[0]); // 800CC598
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CC59C
  return; // 800CC5A0
}

// fn_800CC5A4
void f_800CC5A4(Ctx* __restrict c) {
  trace_call(0x800CC5A4u);
  f_800CAC8C(c); return; // 800CC5A4
}

// fn_800CC5A8
void f_800CC5A8(Ctx* __restrict c) {
  trace_call(0x800CC5A8u);
  c->r[3]=0u+0x00000084u; // 800CC5A8
  return; // 800CC5AC
}

// fn_800CC5B0
void f_800CC5B0(Ctx* __restrict c) {
  trace_call(0x800CC5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC5B0
  c->r[0]=c->lr; // 800CC5B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC5B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC5BC
  c->r[31]=c->r[3]|c->r[3]; // 800CC5C0
  c->lr=0x800CC5C8u; f_800CC428(c); // 800CC5C4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CC5C8
  c->r[3]=0u+0x80420000u; // 800CC5CC
  c->r[3]=c->r[3]+0xFFFF96C8u; // 800CC5D0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CC5D4
  c->r[0]=c->r[0]|0x80000000u; // 800CC5D8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CC5DC
  c->r[3]=c->r[31]|c->r[31]; // 800CC5E0
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CC5E4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CC5E8
  c->ctr=c->r[12]; // 800CC5EC
  if (true) { c->lr=0x800CC5F4u; dispatch(c,c->ctr); } // 800CC5F0
  c->r[3]=c->r[31]|c->r[31]; // 800CC5F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC5F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC5FC
  c->lr=c->r[0]; // 800CC600
  c->r[1]=c->r[1]+0x00000010u; // 800CC604
  return; // 800CC608
}

// fn_800CC60C
void f_800CC60C(Ctx* __restrict c) {
  trace_call(0x800CC60Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC60C
  c->r[0]=c->lr; // 800CC610
  cmps(c,0,(int32_t)c->r[3],0); // 800CC614
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC618
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC61C
  c->r[30]=c->r[3]|c->r[3]; // 800CC620
  c->r[31]=c->r[4]|c->r[4]; // 800CC624
  if (crb(c,2)) { goto L_800CC644; } // 800CC628
  c->r[4]=0u+0x00000000u; // 800CC62C
  c->lr=0x800CC634u; f_800CAE2C(c); // 800CC630
  cmps(c,0,(int32_t)c->r[31],0); // 800CC634
  if (!crb(c,1)) { goto L_800CC644; } // 800CC638
  c->r[3]=c->r[30]|c->r[30]; // 800CC63C
  c->lr=0x800CC644u; f_80244DC0(c); // 800CC640
L_800CC644:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC644
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC648
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC64C
  c->lr=c->r[0]; // 800CC650
  c->r[1]=c->r[1]+0x00000010u; // 800CC654
  return; // 800CC658
}

// fn_800CC65C
void f_800CC65C(Ctx* __restrict c) {
  trace_call(0x800CC65Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC65C
  c->r[0]=c->lr; // 800CC660
  c->r[3]=0u+0x00000084u; // 800CC664
  c->r[4]=c->r[13]+0xFFFFB1D5u; // 800CC668
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC66C
  c->r[5]=0u+0x00000000u; // 800CC670
  c->r[6]=0u+0x00001001u; // 800CC674
  c->lr=0x800CC67Cu; f_80244D20(c); // 800CC678
  cmps(c,0,(int32_t)c->r[3],0); // 800CC67C
  if (crb(c,2)) { goto L_800CC688; } // 800CC680
  c->lr=0x800CC688u; f_800CC5B0(c); // 800CC684
L_800CC688:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC688
  c->lr=c->r[0]; // 800CC68C
  c->r[1]=c->r[1]+0x00000010u; // 800CC690
  return; // 800CC694
}

// fn_800CC698
void f_800CC698(Ctx* __restrict c) {
  trace_call(0x800CC698u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC698
  c->r[0]=c->lr; // 800CC69C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC6A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC6A4
  c->r[31]=c->r[3]|c->r[3]; // 800CC6A8
  c->lr=0x800CC6B0u; f_80244520(c); // 800CC6AC
  c->r[7]=c->r[3]|c->r[3]; // 800CC6B0
  c->r[9]=c->r[31]|c->r[31]; // 800CC6B4
  c->r[3]=0u+0x00000084u; // 800CC6B8
  c->r[4]=c->r[13]+0xFFFFB1DAu; // 800CC6BC
  c->r[5]=0u+0x00000000u; // 800CC6C0
  c->r[6]=0u+0x00002001u; // 800CC6C4
  c->r[8]=0u+0x00000000u; // 800CC6C8
  c->lr=0x800CC6D0u; f_80242DF0(c); // 800CC6CC
  c->r[4]=c->r[3]|c->r[3]; // 800CC6D0
  c->r[3]=0u+0x00000084u; // 800CC6D4
  c->r[5]=c->r[13]+0xFFFFB1DFu; // 800CC6D8
  c->r[6]=0u+0x00000000u; // 800CC6DC
  c->r[7]=0u+0x00001001u; // 800CC6E0
  c->lr=0x800CC6E8u; f_80244DB0(c); // 800CC6E4
  cmps(c,0,(int32_t)c->r[3],0); // 800CC6E8
  if (crb(c,2)) { goto L_800CC6F4; } // 800CC6EC
  c->lr=0x800CC6F4u; f_800CC5B0(c); // 800CC6F0
L_800CC6F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC6F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC6F8
  c->lr=c->r[0]; // 800CC6FC
  c->r[1]=c->r[1]+0x00000010u; // 800CC700
  return; // 800CC704
}

// fn_800CC708
void f_800CC708(Ctx* __restrict c) {
  trace_call(0x800CC708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC708
  c->r[0]=c->lr; // 800CC70C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC714
  c->r[31]=c->r[3]|c->r[3]; // 800CC718
  c->lr=0x800CC720u; f_800CA780(c); // 800CC71C
  c->r[7]=0u+0x80420000u; // 800CC720
  c->r[6]=0u+0x80410000u; // 800CC724
  c->r[5]=0u+0x00000000u; // 800CC728
  c->r[4]=0u+0x6CA10000u; // 800CC72C
  c->r[3]=0u+0x8C8E0000u; // 800CC730
  c->r[7]=c->r[7]+0xFFFF968Cu; // 800CC734
  c->r[0]=c->r[3]+0x000052BBu; // 800CC738
  c->r[6]=c->r[6]+0xFFFFCF67u; // 800CC73C
  c->r[4]=c->r[4]+0xFFFF90A5u; // 800CC740
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CC744
  c->r[3]=c->r[31]|c->r[31]; // 800CC748
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CC74C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CC750
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CC754
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CC758
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CC75C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC760
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC764
  c->lr=c->r[0]; // 800CC768
  c->r[1]=c->r[1]+0x00000010u; // 800CC76C
  return; // 800CC770
}

// fn_800CC774
void f_800CC774(Ctx* __restrict c) {
  trace_call(0x800CC774u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC774
  c->r[0]=c->lr; // 800CC778
  cmps(c,0,(int32_t)c->r[4],0); // 800CC77C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC780
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC784
  c->r[30]=c->r[3]|c->r[3]; // 800CC788
  c->r[31]=c->r[4]|c->r[4]; // 800CC78C
  if (crb(c,2)) { goto L_800CC7E4; } // 800CC790
  c->r[3]=c->r[31]|c->r[31]; // 800CC794
  c->lr=0x800CC79Cu; f_80244520(c); // 800CC798
  c->r[7]=c->r[3]|c->r[3]; // 800CC79C
  c->r[9]=c->r[31]|c->r[31]; // 800CC7A0
  c->r[3]=0u+0x0000009Cu; // 800CC7A4
  c->r[4]=c->r[13]+0xFFFFB1E4u; // 800CC7A8
  c->r[5]=0u+0x00000000u; // 800CC7AC
  c->r[6]=0u+0x00002001u; // 800CC7B0
  c->r[8]=0u+0x00000000u; // 800CC7B4
  c->lr=0x800CC7BCu; f_80242DF0(c); // 800CC7B8
  c->r[4]=c->r[3]|c->r[3]; // 800CC7BC
  c->r[3]=0u+0x0000009Cu; // 800CC7C0
  c->r[5]=c->r[13]+0xFFFFB1E9u; // 800CC7C4
  c->r[6]=0u+0x00000000u; // 800CC7C8
  c->r[7]=0u+0x00001001u; // 800CC7CC
  c->lr=0x800CC7D4u; f_80244DB0(c); // 800CC7D0
  cmps(c,0,(int32_t)c->r[3],0); // 800CC7D4
  if (crb(c,2)) { goto L_800CC804; } // 800CC7D8
  c->lr=0x800CC7E0u; f_800CC708(c); // 800CC7DC
  goto L_800CC804; // 800CC7E0
L_800CC7E4:;
  c->r[3]=0u+0x0000009Cu; // 800CC7E4
  c->r[4]=c->r[13]+0xFFFFB1EEu; // 800CC7E8
  c->r[5]=0u+0x00000000u; // 800CC7EC
  c->r[6]=0u+0x00001001u; // 800CC7F0
  c->lr=0x800CC7F8u; f_80244D20(c); // 800CC7F4
  cmps(c,0,(int32_t)c->r[3],0); // 800CC7F8
  if (crb(c,2)) { goto L_800CC804; } // 800CC7FC
  c->lr=0x800CC804u; f_800CC708(c); // 800CC800
L_800CC804:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CC804
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CC808
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC80C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC810
  c->lr=c->r[0]; // 800CC814
  c->r[1]=c->r[1]+0x00000010u; // 800CC818
  return; // 800CC81C
}

// fn_800CC820
void f_800CC820(Ctx* __restrict c) {
  trace_call(0x800CC820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC820
  c->r[0]=c->lr; // 800CC824
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC828
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC82C
  c->r[29]=c->r[3]|c->r[3]; // 800CC830
  c->r[30]=c->r[4]|c->r[4]; // 800CC834
  c->lr=0x800CC83Cu; f_800CA894(c); // 800CC838
  c->r[31]=c->r[3]|c->r[3]; // 800CC83C
  c->r[3]=c->r[30]|c->r[30]; // 800CC840
  c->lr=0x800CC848u; f_8030C0A0(c); // 800CC844
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CC848
  c->r[3]=c->r[30]|c->r[30]; // 800CC84C
  c->lr=0x800CC854u; f_8030C0A0(c); // 800CC850
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800CC854
  c->r[3]=c->r[30]|c->r[30]; // 800CC858
  c->lr=0x800CC860u; f_8030C0A0(c); // 800CC85C
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[1]);} // 800CC860
  c->r[3]=c->r[30]|c->r[30]; // 800CC864
  c->lr=0x800CC86Cu; f_8030BD1C(c); // 800CC868
  W8(c->r[29]+0x00000090u,c->r[3]); // 800CC86C
  c->r[3]=c->r[30]|c->r[30]; // 800CC870
  c->lr=0x800CC878u; f_8030C0A0(c); // 800CC874
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[1]);} // 800CC878
  c->r[3]=c->r[30]|c->r[30]; // 800CC87C
  c->lr=0x800CC884u; f_8030C0A0(c); // 800CC880
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[1]);} // 800CC884
  c->r[3]=c->r[31]|c->r[31]; // 800CC888
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC88C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC890
  c->lr=c->r[0]; // 800CC894
  c->r[1]=c->r[1]+0x00000020u; // 800CC898
  return; // 800CC89C
}

// fn_800CC8A0
void f_800CC8A0(Ctx* __restrict c) {
  trace_call(0x800CC8A0u);
  return; // 800CC8A0
}

// fn_800CC8A4
void f_800CC8A4(Ctx* __restrict c) {
  trace_call(0x800CC8A4u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CC8A4
  if (!crb(c,2)) return; // 800CC8A8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CC8AC
  cmps(c,0,(int32_t)c->r[0],7); // 800CC8B0
  if (!crb(c,0)) return; // 800CC8B4
  c->r[4]=c->r[5]|c->r[5]; // 800CC8B8
  c->r[3]=c->r[3]+0x00000030u; // 800CC8BC
  f_8003A994(c); return; // 800CC8C0
  return; // 800CC8C4
}

// fn_800CC8C8
void f_800CC8C8(Ctx* __restrict c) {
  trace_call(0x800CC8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC8C8
  c->r[0]=c->lr; // 800CC8CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC8D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC8D4
  c->r[31]=c->r[3]|c->r[3]; // 800CC8D8
  c->lr=0x800CC8E0u; f_800CAAEC(c); // 800CC8DC
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC8E0
  c->r[0]=0u+0x00000000u; // 800CC8E4
  {uint32_t ea=c->r[2]+0xFFFF8710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC8E8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC8EC
  W8(c->r[31]+0x00000070u,c->r[0]); // 800CC8F0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[2]);} // 800CC8F4
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800CC8F8
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[2]);} // 800CC8FC
  W8(c->r[31]+0x00000090u,c->r[0]); // 800CC900
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800CC904
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800CC908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC90C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC910
  c->lr=c->r[0]; // 800CC914
  c->r[1]=c->r[1]+0x00000010u; // 800CC918
  return; // 800CC91C
}

// fn_800CC920
void f_800CC920(Ctx* __restrict c) {
  trace_call(0x800CC920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC920
  c->r[0]=c->lr; // 800CC924
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC928
  c->r[11]=c->r[1]+0x00000020u; // 800CC92C
  c->lr=0x800CC934u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC930
  c->r[29]=c->r[3]|c->r[3]; // 800CC934
  c->r[30]=c->r[4]|c->r[4]; // 800CC938
  c->r[31]=c->r[5]|c->r[5]; // 800CC93C
  c->r[6]=0u+0x00000000u; // 800CC940
  c->lr=0x800CC948u; f_800CAB88(c); // 800CC944
  cmps(c,0,(int32_t)c->r[31],0); // 800CC948
  if (crb(c,2)) { goto L_800CC954; } // 800CC94C
  goto L_800CC958; // 800CC950
L_800CC954:;
  c->r[31]=c->r[29]|c->r[29]; // 800CC954
L_800CC958:;
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC958
  c->r[11]=c->r[1]+0x00000020u; // 800CC95C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CC960
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC964
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CC968
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC96C
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800CC970
  c->r[0]=R8(c->r[30]+0x00000090u); // 800CC974
  W8(c->r[31]+0x00000090u,c->r[0]); // 800CC978
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC97C
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800CC980
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC984
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800CC988
  c->lr=0x800CC990u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC98C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC990
  c->lr=c->r[0]; // 800CC994
  c->r[1]=c->r[1]+0x00000020u; // 800CC998
  return; // 800CC99C
}

// fn_800CC9A0
void f_800CC9A0(Ctx* __restrict c) {
  trace_call(0x800CC9A0u);
  c->r[0]=c->r[4]+0xE4650000u; // 800CC9A0
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CC9A4
  if (!crb(c,2)) { goto L_800CC9B4; } // 800CC9A8
  c->r[3]=0u+0x00000001u; // 800CC9AC
  return; // 800CC9B0
L_800CC9B4:;
  c->r[3]=0u+0x1E2D0000u; // 800CC9B4
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CC9B8
  c->r[0]=c->r[4]-c->r[0]; // 800CC9BC
  c->r[0]=cntlz(c->r[0]); // 800CC9C0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CC9C4
  return; // 800CC9C8
}

// fn_800CC9CC
void f_800CC9CC(Ctx* __restrict c) {
  trace_call(0x800CC9CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC9CC
  c->r[0]=c->lr; // 800CC9D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CC9D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CC9D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CC9DC
  c->r[11]=c->r[1]+0x00000020u; // 800CC9E0
  c->lr=0x800CC9E8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC9E4
  c->f[31]=c->f[1]; // 800CC9E8
  c->r[29]=c->r[3]|c->r[3]; // 800CC9EC
  c->r[31]=c->r[4]|c->r[4]; // 800CC9F0
  c->r[30]=c->r[5]|c->r[5]; // 800CC9F4
  c->lr=0x800CC9FCu; f_800CAC8C(c); // 800CC9F8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC9FC
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCA00
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CCA04
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCA08
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CCA0C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CCA10
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CCA14
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 800CCA18
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCA1C
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCA20
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CCA24
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CCA28
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CCA2C
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[0]);} // 800CCA30
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCA34
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCA38
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CCA3C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CCA40
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CCA44
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[0]);} // 800CCA48
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCA4C
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCA50
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CCA54
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CCA58
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CCA5C
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[0]);} // 800CCA60
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCA64
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCA68
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CCA6C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CCA70
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CCA74
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[0]);} // 800CCA78
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CCA7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CCA80
  c->r[11]=c->r[1]+0x00000020u; // 800CCA84
  c->lr=0x800CCA8Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CCA88
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CCA8C
  c->lr=c->r[0]; // 800CCA90
  c->r[1]=c->r[1]+0x00000030u; // 800CCA94
  return; // 800CCA98
}

// fn_800CCA9C
void f_800CCA9C(Ctx* __restrict c) {
  trace_call(0x800CCA9Cu);
  c->r[3]=0u+0x0000009Cu; // 800CCA9C
  return; // 800CCAA0
}

// fn_800CCAA4
void f_800CCAA4(Ctx* __restrict c) {
  trace_call(0x800CCAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCAA4
  c->r[0]=c->lr; // 800CCAA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCAAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCAB0
  c->r[31]=c->r[3]|c->r[3]; // 800CCAB4
  c->lr=0x800CCABCu; f_800CC708(c); // 800CCAB8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CCABC
  c->r[3]=0u+0x80420000u; // 800CCAC0
  c->r[3]=c->r[3]+0xFFFF964Cu; // 800CCAC4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CCAC8
  c->r[0]=c->r[0]|0x80000000u; // 800CCACC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CCAD0
  c->r[3]=c->r[31]|c->r[31]; // 800CCAD4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CCAD8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CCADC
  c->ctr=c->r[12]; // 800CCAE0
  if (true) { c->lr=0x800CCAE8u; dispatch(c,c->ctr); } // 800CCAE4
  c->r[3]=c->r[31]|c->r[31]; // 800CCAE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCAEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCAF0
  c->lr=c->r[0]; // 800CCAF4
  c->r[1]=c->r[1]+0x00000010u; // 800CCAF8
  return; // 800CCAFC
}

// fn_800CCB00
void f_800CCB00(Ctx* __restrict c) {
  trace_call(0x800CCB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCB00
  c->r[0]=c->lr; // 800CCB04
  cmps(c,0,(int32_t)c->r[3],0); // 800CCB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCB0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CCB10
  c->r[30]=c->r[3]|c->r[3]; // 800CCB14
  c->r[31]=c->r[4]|c->r[4]; // 800CCB18
  if (crb(c,2)) { goto L_800CCB38; } // 800CCB1C
  c->r[4]=0u+0x00000000u; // 800CCB20
  c->lr=0x800CCB28u; f_800CAE2C(c); // 800CCB24
  cmps(c,0,(int32_t)c->r[31],0); // 800CCB28
  if (!crb(c,1)) { goto L_800CCB38; } // 800CCB2C
  c->r[3]=c->r[30]|c->r[30]; // 800CCB30
  c->lr=0x800CCB38u; f_80244DC0(c); // 800CCB34
L_800CCB38:;
  c->r[3]=c->r[30]|c->r[30]; // 800CCB38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CCB3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCB40
  c->lr=c->r[0]; // 800CCB44
  c->r[1]=c->r[1]+0x00000010u; // 800CCB48
  return; // 800CCB4C
}

// fn_800CCB50
void f_800CCB50(Ctx* __restrict c) {
  trace_call(0x800CCB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCB50
  c->r[0]=c->lr; // 800CCB54
  c->r[3]=0u+0x0000009Cu; // 800CCB58
  c->r[4]=c->r[13]+0xFFFFB1F3u; // 800CCB5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCB60
  c->r[5]=0u+0x00000000u; // 800CCB64
  c->r[6]=0u+0x00001001u; // 800CCB68
  c->lr=0x800CCB70u; f_80244D20(c); // 800CCB6C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCB70
  if (crb(c,2)) { goto L_800CCB7C; } // 800CCB74
  c->lr=0x800CCB7Cu; f_800CCAA4(c); // 800CCB78
L_800CCB7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCB7C
  c->lr=c->r[0]; // 800CCB80
  c->r[1]=c->r[1]+0x00000010u; // 800CCB84
  return; // 800CCB88
}

// fn_800CCB8C
void f_800CCB8C(Ctx* __restrict c) {
  trace_call(0x800CCB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCB8C
  c->r[0]=c->lr; // 800CCB90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCB94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCB98
  c->r[31]=c->r[3]|c->r[3]; // 800CCB9C
  c->lr=0x800CCBA4u; f_80244520(c); // 800CCBA0
  c->r[7]=c->r[3]|c->r[3]; // 800CCBA4
  c->r[9]=c->r[31]|c->r[31]; // 800CCBA8
  c->r[3]=0u+0x0000009Cu; // 800CCBAC
  c->r[4]=c->r[13]+0xFFFFB1F8u; // 800CCBB0
  c->r[5]=0u+0x00000000u; // 800CCBB4
  c->r[6]=0u+0x00002001u; // 800CCBB8
  c->r[8]=0u+0x00000000u; // 800CCBBC
  c->lr=0x800CCBC4u; f_80242DF0(c); // 800CCBC0
  c->r[4]=c->r[3]|c->r[3]; // 800CCBC4
  c->r[3]=0u+0x0000009Cu; // 800CCBC8
  c->r[5]=c->r[13]+0xFFFFB1FDu; // 800CCBCC
  c->r[6]=0u+0x00000000u; // 800CCBD0
  c->r[7]=0u+0x00001001u; // 800CCBD4
  c->lr=0x800CCBDCu; f_80244DB0(c); // 800CCBD8
  cmps(c,0,(int32_t)c->r[3],0); // 800CCBDC
  if (crb(c,2)) { goto L_800CCBE8; } // 800CCBE0
  c->lr=0x800CCBE8u; f_800CCAA4(c); // 800CCBE4
L_800CCBE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCBE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCBEC
  c->lr=c->r[0]; // 800CCBF0
  c->r[1]=c->r[1]+0x00000010u; // 800CCBF4
  return; // 800CCBF8
}

// fn_800CCBFC
void f_800CCBFC(Ctx* __restrict c) {
  trace_call(0x800CCBFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCBFC
  c->r[0]=c->lr; // 800CCC00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCC04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCC08
  c->r[31]=c->r[3]|c->r[3]; // 800CCC0C
  c->lr=0x800CCC14u; f_800CA780(c); // 800CCC10
  c->r[7]=0u+0x80420000u; // 800CCC14
  c->r[6]=0u+0x80410000u; // 800CCC18
  c->r[5]=0u+0x00000000u; // 800CCC1C
  c->r[4]=0u+0xF3ED0000u; // 800CCC20
  c->r[3]=0u+0xA8310000u; // 800CCC24
  c->r[7]=c->r[7]+0xFFFF9610u; // 800CCC28
  c->r[0]=c->r[3]+0xFFFF8612u; // 800CCC2C
  c->r[6]=c->r[6]+0xFFFFCF74u; // 800CCC30
  c->r[4]=c->r[4]+0xFFFF860Bu; // 800CCC34
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CCC38
  c->r[3]=c->r[31]|c->r[31]; // 800CCC3C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CCC40
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CCC44
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CCC48
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CCC4C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CCC50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCC54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCC58
  c->lr=c->r[0]; // 800CCC5C
  c->r[1]=c->r[1]+0x00000010u; // 800CCC60
  return; // 800CCC64
}

// fn_800CCC68
void f_800CCC68(Ctx* __restrict c) {
  trace_call(0x800CCC68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCC68
  c->r[0]=c->lr; // 800CCC6C
  cmps(c,0,(int32_t)c->r[4],0); // 800CCC70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCC74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CCC78
  c->r[30]=c->r[3]|c->r[3]; // 800CCC7C
  c->r[31]=c->r[4]|c->r[4]; // 800CCC80
  if (crb(c,2)) { goto L_800CCCD8; } // 800CCC84
  c->r[3]=c->r[31]|c->r[31]; // 800CCC88
  c->lr=0x800CCC90u; f_80244520(c); // 800CCC8C
  c->r[7]=c->r[3]|c->r[3]; // 800CCC90
  c->r[9]=c->r[31]|c->r[31]; // 800CCC94
  c->r[3]=0u+0x00000088u; // 800CCC98
  c->r[4]=c->r[13]+0xFFFFB202u; // 800CCC9C
  c->r[5]=0u+0x00000000u; // 800CCCA0
  c->r[6]=0u+0x00002001u; // 800CCCA4
  c->r[8]=0u+0x00000000u; // 800CCCA8
  c->lr=0x800CCCB0u; f_80242DF0(c); // 800CCCAC
  c->r[4]=c->r[3]|c->r[3]; // 800CCCB0
  c->r[3]=0u+0x00000088u; // 800CCCB4
  c->r[5]=c->r[13]+0xFFFFB207u; // 800CCCB8
  c->r[6]=0u+0x00000000u; // 800CCCBC
  c->r[7]=0u+0x00001001u; // 800CCCC0
  c->lr=0x800CCCC8u; f_80244DB0(c); // 800CCCC4
  cmps(c,0,(int32_t)c->r[3],0); // 800CCCC8
  if (crb(c,2)) { goto L_800CCCF8; } // 800CCCCC
  c->lr=0x800CCCD4u; f_800CCBFC(c); // 800CCCD0
  goto L_800CCCF8; // 800CCCD4
L_800CCCD8:;
  c->r[3]=0u+0x00000088u; // 800CCCD8
  c->r[4]=c->r[13]+0xFFFFB20Cu; // 800CCCDC
  c->r[5]=0u+0x00000000u; // 800CCCE0
  c->r[6]=0u+0x00001001u; // 800CCCE4
  c->lr=0x800CCCECu; f_80244D20(c); // 800CCCE8
  cmps(c,0,(int32_t)c->r[3],0); // 800CCCEC
  if (crb(c,2)) { goto L_800CCCF8; } // 800CCCF0
  c->lr=0x800CCCF8u; f_800CCBFC(c); // 800CCCF4
L_800CCCF8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CCCF8
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CCCFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CCD00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCD04
  c->lr=c->r[0]; // 800CCD08
  c->r[1]=c->r[1]+0x00000010u; // 800CCD0C
  return; // 800CCD10
}

// fn_800CCD14
void f_800CCD14(Ctx* __restrict c) {
  trace_call(0x800CCD14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCD14
  c->r[0]=c->lr; // 800CCD18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCD1C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CCD20
  c->r[29]=c->r[3]|c->r[3]; // 800CCD24
  c->r[30]=c->r[4]|c->r[4]; // 800CCD28
  c->lr=0x800CCD30u; f_800CA894(c); // 800CCD2C
  c->r[31]=c->r[3]|c->r[3]; // 800CCD30
  c->r[3]=c->r[30]|c->r[30]; // 800CCD34
  c->lr=0x800CCD3Cu; f_8030C0A0(c); // 800CCD38
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CCD3C
  c->r[3]=c->r[31]|c->r[31]; // 800CCD40
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CCD44
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCD48
  c->lr=c->r[0]; // 800CCD4C
  c->r[1]=c->r[1]+0x00000020u; // 800CCD50
  return; // 800CCD54
}

// fn_800CCD58
void f_800CCD58(Ctx* __restrict c) {
  trace_call(0x800CCD58u);
  return; // 800CCD58
}

// fn_800CCD5C
void f_800CCD5C(Ctx* __restrict c) {
  trace_call(0x800CCD5Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 800CCD5C
  if (!crb(c,2)) return; // 800CCD60
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CCD64
  cmps(c,0,(int32_t)c->r[0],7); // 800CCD68
  if (!crb(c,0)) return; // 800CCD6C
  c->r[4]=c->r[5]|c->r[5]; // 800CCD70
  c->r[3]=c->r[3]+0x00000030u; // 800CCD74
  f_8003A994(c); return; // 800CCD78
  return; // 800CCD7C
}

// fn_800CCD80
void f_800CCD80(Ctx* __restrict c) {
  trace_call(0x800CCD80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCD80
  c->r[0]=c->lr; // 800CCD84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCD88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCD8C
  c->r[31]=c->r[3]|c->r[3]; // 800CCD90
  c->lr=0x800CCD98u; f_800CAAEC(c); // 800CCD94
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCD98
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CCD9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCDA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCDA4
  c->lr=c->r[0]; // 800CCDA8
  c->r[1]=c->r[1]+0x00000010u; // 800CCDAC
  return; // 800CCDB0
}

// fn_800CCDB4
void f_800CCDB4(Ctx* __restrict c) {
  trace_call(0x800CCDB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCDB4
  c->r[0]=c->lr; // 800CCDB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCDBC
  c->r[11]=c->r[1]+0x00000020u; // 800CCDC0
  c->lr=0x800CCDC8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CCDC4
  c->r[29]=c->r[3]|c->r[3]; // 800CCDC8
  c->r[30]=c->r[4]|c->r[4]; // 800CCDCC
  c->r[31]=c->r[5]|c->r[5]; // 800CCDD0
  c->r[6]=0u+0x00000000u; // 800CCDD4
  c->lr=0x800CCDDCu; f_800CAB88(c); // 800CCDD8
  cmps(c,0,(int32_t)c->r[31],0); // 800CCDDC
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCDE0
  if (crb(c,2)) { goto L_800CCDEC; } // 800CCDE4
  goto L_800CCDF0; // 800CCDE8
L_800CCDEC:;
  c->r[31]=c->r[29]|c->r[29]; // 800CCDEC
L_800CCDF0:;
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CCDF0
  c->r[11]=c->r[1]+0x00000020u; // 800CCDF4
  c->lr=0x800CCDFCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CCDF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCDFC
  c->lr=c->r[0]; // 800CCE00
  c->r[1]=c->r[1]+0x00000020u; // 800CCE04
  return; // 800CCE08
}

// fn_800CCE0C
void f_800CCE0C(Ctx* __restrict c) {
  trace_call(0x800CCE0Cu);
  c->r[0]=c->r[4]+0xE4650000u; // 800CCE0C
  cmpu(c,0,c->r[0],0x0000A3C8u); // 800CCE10
  if (!crb(c,2)) { goto L_800CCE20; } // 800CCE14
  c->r[3]=0u+0x00000001u; // 800CCE18
  return; // 800CCE1C
L_800CCE20:;
  c->r[3]=0u+0x1E2D0000u; // 800CCE20
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CCE24
  c->r[0]=c->r[4]-c->r[0]; // 800CCE28
  c->r[0]=cntlz(c->r[0]); // 800CCE2C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CCE30
  return; // 800CCE34
}

// fn_800CCE38
void f_800CCE38(Ctx* __restrict c) {
  trace_call(0x800CCE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCE38
  c->r[0]=c->lr; // 800CCE3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CCE40
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CCE44
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CCE48
  c->r[11]=c->r[1]+0x00000020u; // 800CCE4C
  c->lr=0x800CCE54u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CCE50
  c->f[31]=c->f[1]; // 800CCE54
  c->r[29]=c->r[3]|c->r[3]; // 800CCE58
  c->r[31]=c->r[4]|c->r[4]; // 800CCE5C
  c->r[30]=c->r[5]|c->r[5]; // 800CCE60
  c->lr=0x800CCE68u; f_800CAC8C(c); // 800CCE64
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCE68
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CCE6C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CCE70
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCE74
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CCE78
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CCE7C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CCE80
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 800CCE84
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CCE88
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CCE8C
  c->r[11]=c->r[1]+0x00000020u; // 800CCE90
  c->lr=0x800CCE98u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CCE94
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CCE98
  c->lr=c->r[0]; // 800CCE9C
  c->r[1]=c->r[1]+0x00000030u; // 800CCEA0
  return; // 800CCEA4
}

// fn_800CCEA8
void f_800CCEA8(Ctx* __restrict c) {
  trace_call(0x800CCEA8u);
  c->r[3]=0u+0x00000088u; // 800CCEA8
  return; // 800CCEAC
}

// fn_800CCEB0
void f_800CCEB0(Ctx* __restrict c) {
  trace_call(0x800CCEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCEB0
  c->r[0]=c->lr; // 800CCEB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCEB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCEBC
  c->r[31]=c->r[3]|c->r[3]; // 800CCEC0
  c->lr=0x800CCEC8u; f_800CCBFC(c); // 800CCEC4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CCEC8
  c->r[3]=0u+0x80420000u; // 800CCECC
  c->r[3]=c->r[3]+0xFFFF95D0u; // 800CCED0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CCED4
  c->r[0]=c->r[0]|0x80000000u; // 800CCED8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CCEDC
  c->r[3]=c->r[31]|c->r[31]; // 800CCEE0
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CCEE4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CCEE8
  c->ctr=c->r[12]; // 800CCEEC
  if (true) { c->lr=0x800CCEF4u; dispatch(c,c->ctr); } // 800CCEF0
  c->r[3]=c->r[31]|c->r[31]; // 800CCEF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCEF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCEFC
  c->lr=c->r[0]; // 800CCF00
  c->r[1]=c->r[1]+0x00000010u; // 800CCF04
  return; // 800CCF08
}

// fn_800CCF0C
void f_800CCF0C(Ctx* __restrict c) {
  trace_call(0x800CCF0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCF0C
  c->r[0]=c->lr; // 800CCF10
  cmps(c,0,(int32_t)c->r[3],0); // 800CCF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCF18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CCF1C
  c->r[30]=c->r[3]|c->r[3]; // 800CCF20
  c->r[31]=c->r[4]|c->r[4]; // 800CCF24
  if (crb(c,2)) { goto L_800CCF44; } // 800CCF28
  c->r[4]=0u+0x00000000u; // 800CCF2C
  c->lr=0x800CCF34u; f_800CAE2C(c); // 800CCF30
  cmps(c,0,(int32_t)c->r[31],0); // 800CCF34
  if (!crb(c,1)) { goto L_800CCF44; } // 800CCF38
  c->r[3]=c->r[30]|c->r[30]; // 800CCF3C
  c->lr=0x800CCF44u; f_80244DC0(c); // 800CCF40
L_800CCF44:;
  c->r[3]=c->r[30]|c->r[30]; // 800CCF44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CCF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCF4C
  c->lr=c->r[0]; // 800CCF50
  c->r[1]=c->r[1]+0x00000010u; // 800CCF54
  return; // 800CCF58
}

// fn_800CCF5C
void f_800CCF5C(Ctx* __restrict c) {
  trace_call(0x800CCF5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCF5C
  c->r[0]=c->lr; // 800CCF60
  c->r[3]=0u+0x00000088u; // 800CCF64
  c->r[4]=c->r[13]+0xFFFFB211u; // 800CCF68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCF6C
  c->r[5]=0u+0x00000000u; // 800CCF70
  c->r[6]=0u+0x00001001u; // 800CCF74
  c->lr=0x800CCF7Cu; f_80244D20(c); // 800CCF78
  cmps(c,0,(int32_t)c->r[3],0); // 800CCF7C
  if (crb(c,2)) { goto L_800CCF88; } // 800CCF80
  c->lr=0x800CCF88u; f_800CCEB0(c); // 800CCF84
L_800CCF88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCF88
  c->lr=c->r[0]; // 800CCF8C
  c->r[1]=c->r[1]+0x00000010u; // 800CCF90
  return; // 800CCF94
}

// fn_800CCF98
void f_800CCF98(Ctx* __restrict c) {
  trace_call(0x800CCF98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCF98
  c->r[0]=c->lr; // 800CCF9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCFA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCFA4
  c->r[31]=c->r[3]|c->r[3]; // 800CCFA8
  c->lr=0x800CCFB0u; f_80244520(c); // 800CCFAC
  c->r[7]=c->r[3]|c->r[3]; // 800CCFB0
  c->r[9]=c->r[31]|c->r[31]; // 800CCFB4
  c->r[3]=0u+0x00000088u; // 800CCFB8
  c->r[4]=c->r[13]+0xFFFFB216u; // 800CCFBC
  c->r[5]=0u+0x00000000u; // 800CCFC0
  c->r[6]=0u+0x00002001u; // 800CCFC4
  c->r[8]=0u+0x00000000u; // 800CCFC8
  c->lr=0x800CCFD0u; f_80242DF0(c); // 800CCFCC
  c->r[4]=c->r[3]|c->r[3]; // 800CCFD0
  c->r[3]=0u+0x00000088u; // 800CCFD4
  c->r[5]=c->r[13]+0xFFFFB21Bu; // 800CCFD8
  c->r[6]=0u+0x00000000u; // 800CCFDC
  c->r[7]=0u+0x00001001u; // 800CCFE0
  c->lr=0x800CCFE8u; f_80244DB0(c); // 800CCFE4
  cmps(c,0,(int32_t)c->r[3],0); // 800CCFE8
  if (crb(c,2)) { goto L_800CCFF4; } // 800CCFEC
  c->lr=0x800CCFF4u; f_800CCEB0(c); // 800CCFF0
L_800CCFF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCFF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCFF8
  c->lr=c->r[0]; // 800CCFFC
  c->r[1]=c->r[1]+0x00000010u; // 800CD000
  return; // 800CD004
}

// fn_800CD008
void f_800CD008(Ctx* __restrict c) {
  trace_call(0x800CD008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD008
  c->r[0]=c->lr; // 800CD00C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD014
  c->r[31]=c->r[3]|c->r[3]; // 800CD018
  c->lr=0x800CD020u; f_800C9F78(c); // 800CD01C
  c->r[7]=0u+0x80420000u; // 800CD020
  c->r[6]=0u+0x80410000u; // 800CD024
  c->r[5]=0u+0x00000000u; // 800CD028
  c->r[4]=0u+0x89C50000u; // 800CD02C
  c->r[3]=0u+0x51610000u; // 800CD030
  c->r[7]=c->r[7]+0xFFFF9594u; // 800CD034
  c->r[0]=c->r[3]+0xFFFFA187u; // 800CD038
  c->r[6]=c->r[6]+0xFFFFCF82u; // 800CD03C
  c->r[4]=c->r[4]+0xFFFF8712u; // 800CD040
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CD044
  c->r[3]=c->r[31]|c->r[31]; // 800CD048
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CD04C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CD050
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CD054
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CD058
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CD05C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD060
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD064
  c->lr=c->r[0]; // 800CD068
  c->r[1]=c->r[1]+0x00000010u; // 800CD06C
  return; // 800CD070
}

// fn_800CD074
void f_800CD074(Ctx* __restrict c) {
  trace_call(0x800CD074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD074
  c->r[0]=c->lr; // 800CD078
  cmps(c,0,(int32_t)c->r[4],0); // 800CD07C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD080
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD084
  c->r[30]=c->r[3]|c->r[3]; // 800CD088
  c->r[31]=c->r[4]|c->r[4]; // 800CD08C
  if (crb(c,2)) { goto L_800CD0E4; } // 800CD090
  c->r[3]=c->r[31]|c->r[31]; // 800CD094
  c->lr=0x800CD09Cu; f_80244520(c); // 800CD098
  c->r[7]=c->r[3]|c->r[3]; // 800CD09C
  c->r[9]=c->r[31]|c->r[31]; // 800CD0A0
  c->r[3]=0u+0x0000009Cu; // 800CD0A4
  c->r[4]=c->r[13]+0xFFFFB220u; // 800CD0A8
  c->r[5]=0u+0x00000000u; // 800CD0AC
  c->r[6]=0u+0x00002001u; // 800CD0B0
  c->r[8]=0u+0x00000000u; // 800CD0B4
  c->lr=0x800CD0BCu; f_80242DF0(c); // 800CD0B8
  c->r[4]=c->r[3]|c->r[3]; // 800CD0BC
  c->r[3]=0u+0x0000009Cu; // 800CD0C0
  c->r[5]=c->r[13]+0xFFFFB225u; // 800CD0C4
  c->r[6]=0u+0x00000000u; // 800CD0C8
  c->r[7]=0u+0x00001001u; // 800CD0CC
  c->lr=0x800CD0D4u; f_80244DB0(c); // 800CD0D0
  cmps(c,0,(int32_t)c->r[3],0); // 800CD0D4
  if (crb(c,2)) { goto L_800CD104; } // 800CD0D8
  c->lr=0x800CD0E0u; f_800CD008(c); // 800CD0DC
  goto L_800CD104; // 800CD0E0
L_800CD0E4:;
  c->r[3]=0u+0x0000009Cu; // 800CD0E4
  c->r[4]=c->r[13]+0xFFFFB22Au; // 800CD0E8
  c->r[5]=0u+0x00000000u; // 800CD0EC
  c->r[6]=0u+0x00001001u; // 800CD0F0
  c->lr=0x800CD0F8u; f_80244D20(c); // 800CD0F4
  cmps(c,0,(int32_t)c->r[3],0); // 800CD0F8
  if (crb(c,2)) { goto L_800CD104; } // 800CD0FC
  c->lr=0x800CD104u; f_800CD008(c); // 800CD100
L_800CD104:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CD104
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CD108
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD10C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD110
  c->lr=c->r[0]; // 800CD114
  c->r[1]=c->r[1]+0x00000010u; // 800CD118
  return; // 800CD11C
}

// fn_800CD120
void f_800CD120(Ctx* __restrict c) {
  trace_call(0x800CD120u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD120
  c->r[0]=c->lr; // 800CD124
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD128
  c->r[11]=c->r[1]+0x00000020u; // 800CD12C
  c->lr=0x800CD134u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD130
  c->r[29]=c->r[3]|c->r[3]; // 800CD134
  c->r[30]=c->r[4]|c->r[4]; // 800CD138
  c->lr=0x800CD140u; f_800CA08C(c); // 800CD13C
  c->r[0]=0u+0x00000000u; // 800CD140
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CD144
  c->r[31]=c->r[3]|c->r[3]; // 800CD148
  c->r[3]=c->r[30]|c->r[30]; // 800CD14C
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD150
  c->lr=0x800CD158u; f_8030BD1C(c); // 800CD154
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CD158
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800CD15C
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CD160
  c->r[3]=c->r[30]|c->r[30]; // 800CD164
  c->lr=0x800CD16Cu; f_8030BD1C(c); // 800CD168
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CD16C
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800CD170
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CD174
  c->r[3]=c->r[30]|c->r[30]; // 800CD178
  c->lr=0x800CD180u; f_8030BD1C(c); // 800CD17C
  W32(c->r[29]+0x0000002Cu,c->r[3]); // 800CD180
  c->r[3]=c->r[30]|c->r[30]; // 800CD184
  c->r[4]=0u+0x00000000u; // 800CD188
  c->lr=0x800CD190u; f_8030BE30(c); // 800CD18C
  W32(c->r[29]+0x00000030u,c->r[3]); // 800CD190
  c->r[3]=c->r[30]|c->r[30]; // 800CD194
  c->lr=0x800CD19Cu; f_8030BD1C(c); // 800CD198
  W32(c->r[29]+0x00000034u,c->r[3]); // 800CD19C
  c->r[3]=c->r[30]|c->r[30]; // 800CD1A0
  c->r[4]=0u+0x00000000u; // 800CD1A4
  c->lr=0x800CD1ACu; f_8030BE30(c); // 800CD1A8
  W32(c->r[29]+0x0000003Cu,c->r[3]); // 800CD1AC
  c->r[3]=c->r[30]|c->r[30]; // 800CD1B0
  c->lr=0x800CD1B8u; f_8030BD1C(c); // 800CD1B4
  W32(c->r[29]+0x00000040u,c->r[3]); // 800CD1B8
  c->r[3]=c->r[30]|c->r[30]; // 800CD1BC
  c->lr=0x800CD1C4u; f_8030BD1C(c); // 800CD1C0
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CD1C4
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800CD1C8
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CD1CC
  c->r[3]=c->r[30]|c->r[30]; // 800CD1D0
  c->lr=0x800CD1D8u; f_8030BD1C(c); // 800CD1D4
  W32(c->r[29]+0x00000048u,c->r[3]); // 800CD1D8
  c->r[3]=c->r[30]|c->r[30]; // 800CD1DC
  c->lr=0x800CD1E4u; f_8030BD1C(c); // 800CD1E0
  W32(c->r[29]+0x0000004Cu,c->r[3]); // 800CD1E4
  c->r[3]=c->r[30]|c->r[30]; // 800CD1E8
  c->lr=0x800CD1F0u; f_8030BD1C(c); // 800CD1EC
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CD1F0
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800CD1F4
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CD1F8
  c->r[3]=c->r[30]|c->r[30]; // 800CD1FC
  c->lr=0x800CD204u; f_8030BD1C(c); // 800CD200
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CD204
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800CD208
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CD20C
  c->r[3]=c->r[30]|c->r[30]; // 800CD210
  c->lr=0x800CD218u; f_8030BD1C(c); // 800CD214
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CD218
  c->r[0]=(rotl(c->r[3],26)&0x04000000u)|(c->r[0]&~0x04000000u); // 800CD21C
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CD220
  c->r[3]=c->r[30]|c->r[30]; // 800CD224
  c->lr=0x800CD22Cu; f_8030C0A0(c); // 800CD228
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[1]);} // 800CD22C
  c->r[3]=c->r[30]|c->r[30]; // 800CD230
  c->lr=0x800CD238u; f_8030C0A0(c); // 800CD234
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[1]);} // 800CD238
  c->r[3]=c->r[30]|c->r[30]; // 800CD23C
  c->lr=0x800CD244u; f_8030C0A0(c); // 800CD240
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD244
  c->r[3]=c->r[30]|c->r[30]; // 800CD248
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[1]);} // 800CD24C
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 800CD250
  c->lr=0x800CD258u; f_8030C0A0(c); // 800CD254
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 800CD258
  c->r[3]=c->r[30]|c->r[30]; // 800CD25C
  c->lr=0x800CD264u; f_8030C0A0(c); // 800CD260
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 800CD264
  c->r[3]=c->r[30]|c->r[30]; // 800CD268
  c->lr=0x800CD270u; f_8030C0A0(c); // 800CD26C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD270
  c->r[3]=c->r[30]|c->r[30]; // 800CD274
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[1]);} // 800CD278
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CD27C
  c->lr=0x800CD284u; f_8030BD1C(c); // 800CD280
  W32(c->r[29]+0x00000070u,c->r[3]); // 800CD284
  c->r[3]=c->r[30]|c->r[30]; // 800CD288
  c->lr=0x800CD290u; f_8030C0A0(c); // 800CD28C
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[1]);} // 800CD290
  c->r[3]=c->r[30]|c->r[30]; // 800CD294
  c->lr=0x800CD29Cu; f_8030BD1C(c); // 800CD298
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD29C
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800CD2A0
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD2A4
  c->r[3]=c->r[30]|c->r[30]; // 800CD2A8
  c->lr=0x800CD2B0u; f_8030BD1C(c); // 800CD2AC
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD2B0
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800CD2B4
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD2B8
  c->r[3]=c->r[30]|c->r[30]; // 800CD2BC
  c->lr=0x800CD2C4u; f_8030BD1C(c); // 800CD2C0
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD2C4
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800CD2C8
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD2CC
  c->r[3]=c->r[30]|c->r[30]; // 800CD2D0
  c->lr=0x800CD2D8u; f_8030BD1C(c); // 800CD2D4
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD2D8
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800CD2DC
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD2E0
  c->r[3]=c->r[30]|c->r[30]; // 800CD2E4
  c->lr=0x800CD2ECu; f_8030BD1C(c); // 800CD2E8
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD2EC
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800CD2F0
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD2F4
  c->r[3]=c->r[30]|c->r[30]; // 800CD2F8
  c->lr=0x800CD300u; f_8030BD1C(c); // 800CD2FC
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD300
  c->r[0]=(rotl(c->r[3],26)&0x04000000u)|(c->r[0]&~0x04000000u); // 800CD304
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD308
  c->r[3]=c->r[30]|c->r[30]; // 800CD30C
  c->lr=0x800CD314u; f_8030C0A0(c); // 800CD310
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[1]);} // 800CD314
  c->r[3]=c->r[30]|c->r[30]; // 800CD318
  c->lr=0x800CD320u; f_8030BD1C(c); // 800CD31C
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD320
  c->r[0]=(rotl(c->r[3],25)&0x02000000u)|(c->r[0]&~0x02000000u); // 800CD324
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD328
  c->r[3]=c->r[30]|c->r[30]; // 800CD32C
  c->lr=0x800CD334u; f_8030C0A0(c); // 800CD330
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[1]);} // 800CD334
  c->r[3]=c->r[30]|c->r[30]; // 800CD338
  c->lr=0x800CD340u; f_8030BD1C(c); // 800CD33C
  c->r[0]=R32(c->r[29]+0x00000078u); // 800CD340
  c->r[0]=(rotl(c->r[3],24)&0x01000000u)|(c->r[0]&~0x01000000u); // 800CD344
  W32(c->r[29]+0x00000078u,c->r[0]); // 800CD348
  c->r[3]=c->r[30]|c->r[30]; // 800CD34C
  c->lr=0x800CD354u; f_8030C0A0(c); // 800CD350
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CD354
  c->r[3]=c->r[30]|c->r[30]; // 800CD358
  c->lr=0x800CD360u; f_8030C0A0(c); // 800CD35C
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800CD360
  c->r[3]=c->r[30]|c->r[30]; // 800CD364
  c->lr=0x800CD36Cu; f_8030C0A0(c); // 800CD368
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[1]);} // 800CD36C
  c->r[3]=c->r[30]|c->r[30]; // 800CD370
  c->lr=0x800CD378u; f_8030C0A0(c); // 800CD374
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[1]);} // 800CD378
  c->r[3]=c->r[30]|c->r[30]; // 800CD37C
  c->lr=0x800CD384u; f_8030C0A0(c); // 800CD380
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[1]);} // 800CD384
  c->r[3]=c->r[30]|c->r[30]; // 800CD388
  c->lr=0x800CD390u; f_8030C0A0(c); // 800CD38C
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[1]);} // 800CD390
  c->r[11]=c->r[1]+0x00000020u; // 800CD394
  c->r[3]=c->r[31]|c->r[31]; // 800CD398
  c->lr=0x800CD3A0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD39C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD3A0
  c->lr=c->r[0]; // 800CD3A4
  c->r[1]=c->r[1]+0x00000020u; // 800CD3A8
  return; // 800CD3AC
}

// fn_800CD3B0
void f_800CD3B0(Ctx* __restrict c) {
  trace_call(0x800CD3B0u);
  return; // 800CD3B0
}

// fn_800CD3B4
void f_800CD3B4(Ctx* __restrict c) {
  trace_call(0x800CD3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD3B4
  c->r[0]=c->lr; // 800CD3B8
  cmps(c,0,(int32_t)c->r[6],0); // 800CD3BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD3C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD3C4
  c->r[30]=c->r[3]|c->r[3]; // 800CD3C8
  c->r[31]=c->r[5]|c->r[5]; // 800CD3CC
  if (!crb(c,2)) { goto L_800CD404; } // 800CD3D0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800CD3D4
  cmps(c,0,(int32_t)c->r[0],7); // 800CD3D8
  if (!crb(c,0)) { goto L_800CD3EC; } // 800CD3DC
  c->r[4]=c->r[31]|c->r[31]; // 800CD3E0
  c->r[3]=c->r[3]+0x00000030u; // 800CD3E4
  c->lr=0x800CD3ECu; f_8003A994(c); // 800CD3E8
L_800CD3EC:;
  c->r[0]=R32(c->r[30]+0x00000040u); // 800CD3EC
  cmps(c,0,(int32_t)c->r[0],7); // 800CD3F0
  if (!crb(c,0)) { goto L_800CD404; } // 800CD3F4
  c->r[4]=c->r[31]|c->r[31]; // 800CD3F8
  c->r[3]=c->r[30]+0x0000003Cu; // 800CD3FC
  c->lr=0x800CD404u; f_8003A994(c); // 800CD400
L_800CD404:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD404
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD408
  c->lr=c->r[0]; // 800CD40C
  c->r[1]=c->r[1]+0x00000010u; // 800CD410
  return; // 800CD414
}

// fn_800CD418
void f_800CD418(Ctx* __restrict c) {
  trace_call(0x800CD418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD418
  c->r[0]=c->lr; // 800CD41C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD420
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD424
  c->r[31]=c->r[3]|c->r[3]; // 800CD428
  c->lr=0x800CD430u; f_800CA5D8(c); // 800CD42C
  c->r[5]=0u+0x00000000u; // 800CD430
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD434
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD438
  c->r[3]=c->r[5]|0x18000000u; // 800CD43C
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD440
  c->r[0]=c->r[5]|0x80000000u; // 800CD444
  c->r[4]=0u+0x00000002u; // 800CD448
  W32(c->r[31]+0x0000002Cu,c->r[5]); // 800CD44C
  W32(c->r[31]+0x00000030u,c->r[5]); // 800CD450
  W32(c->r[31]+0x00000038u,c->r[5]); // 800CD454
  W32(c->r[31]+0x00000034u,c->r[5]); // 800CD458
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 800CD45C
  W32(c->r[31]+0x00000044u,c->r[5]); // 800CD460
  W32(c->r[31]+0x00000040u,c->r[5]); // 800CD464
  W32(c->r[31]+0x00000048u,c->r[5]); // 800CD468
  W32(c->r[31]+0x0000004Cu,c->r[4]); // 800CD46C
  W32(c->r[31]+0x00000028u,c->r[3]); // 800CD470
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[2]);} // 800CD474
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[2]);} // 800CD478
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[2]);} // 800CD47C
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[1]);} // 800CD480
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[2]);} // 800CD484
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[2]);} // 800CD488
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[2]);} // 800CD48C
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[1]);} // 800CD490
  W32(c->r[31]+0x00000070u,c->r[5]); // 800CD494
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800CD498
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[1]);} // 800CD49C
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[1]);} // 800CD4A0
  W32(c->r[31]+0x00000078u,c->r[0]); // 800CD4A4
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CD4A8
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[2]);} // 800CD4AC
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[2]);} // 800CD4B0
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[1]);} // 800CD4B4
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 800CD4B8
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[1]);} // 800CD4BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD4C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD4C4
  c->lr=c->r[0]; // 800CD4C8
  c->r[1]=c->r[1]+0x00000010u; // 800CD4CC
  return; // 800CD4D0
}

// fn_800CD4D4
void f_800CD4D4(Ctx* __restrict c) {
  trace_call(0x800CD4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD4D4
  c->r[0]=c->lr; // 800CD4D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD4DC
  c->r[11]=c->r[1]+0x00000020u; // 800CD4E0
  c->lr=0x800CD4E8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD4E4
  c->r[29]=c->r[3]|c->r[3]; // 800CD4E8
  c->r[30]=c->r[4]|c->r[4]; // 800CD4EC
  c->r[31]=c->r[5]|c->r[5]; // 800CD4F0
  c->r[6]=0u+0x00000000u; // 800CD4F4
  c->lr=0x800CD4FCu; f_800CA5EC(c); // 800CD4F8
  cmps(c,0,(int32_t)c->r[31],0); // 800CD4FC
  if (crb(c,2)) { goto L_800CD508; } // 800CD500
  goto L_800CD50C; // 800CD504
L_800CD508:;
  c->r[31]=c->r[29]|c->r[29]; // 800CD508
L_800CD50C:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800CD50C
  c->r[3]=c->r[31]+0x00000030u; // 800CD510
  W32(c->r[31]+0x00000028u,c->r[0]); // 800CD514
  c->r[4]=c->r[30]+0x00000030u; // 800CD518
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800CD51C
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800CD520
  c->lr=0x800CD528u; f_8003AB48(c); // 800CD524
  c->r[3]=c->r[31]+0x0000003Cu; // 800CD528
  c->r[4]=c->r[30]+0x0000003Cu; // 800CD52C
  c->lr=0x800CD534u; f_8003AB48(c); // 800CD530
  c->r[0]=R32(c->r[30]+0x00000048u); // 800CD534
  c->r[11]=c->r[1]+0x00000020u; // 800CD538
  W32(c->r[31]+0x00000048u,c->r[0]); // 800CD53C
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800CD540
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800CD544
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD548
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800CD54C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD550
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800CD554
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD558
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800CD55C
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD560
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800CD564
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD568
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800CD56C
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD570
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800CD574
  c->r[0]=R32(c->r[30]+0x00000070u); // 800CD578
  W32(c->r[31]+0x00000070u,c->r[0]); // 800CD57C
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD580
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800CD584
  c->r[0]=R32(c->r[30]+0x00000078u); // 800CD588
  W32(c->r[31]+0x00000078u,c->r[0]); // 800CD58C
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD590
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800CD594
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD598
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800CD59C
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5A0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800CD5A4
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5A8
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800CD5AC
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5B0
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800CD5B4
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5B8
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 800CD5BC
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5C0
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800CD5C4
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5C8
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800CD5CC
  c->lr=0x800CD5D4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD5D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD5D4
  c->lr=c->r[0]; // 800CD5D8
  c->r[1]=c->r[1]+0x00000020u; // 800CD5DC
  return; // 800CD5E0
}

// fn_800CD5E4
void f_800CD5E4(Ctx* __restrict c) {
  trace_call(0x800CD5E4u);
  c->r[3]=0u+0x1E2D0000u; // 800CD5E4
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CD5E8
  c->r[0]=c->r[4]-c->r[0]; // 800CD5EC
  c->r[0]=cntlz(c->r[0]); // 800CD5F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CD5F4
  return; // 800CD5F8
}

// fn_800CD5FC
void f_800CD5FC(Ctx* __restrict c) {
  trace_call(0x800CD5FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD5FC
  c->r[0]=c->lr; // 800CD600
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CD604
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CD608
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CD60C
  c->r[11]=c->r[1]+0x00000020u; // 800CD610
  c->lr=0x800CD618u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD614
  c->f[31]=c->f[1]; // 800CD618
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD61C
  c->r[29]=c->r[3]|c->r[3]; // 800CD620
  c->r[30]=c->r[4]|c->r[4]; // 800CD624
  c->r[31]=c->r[5]|c->r[5]; // 800CD628
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800CD62C
  c->f[2]=c->f[31]; // 800CD630
  c->r[3]=c->r[3]+0x00000050u; // 800CD634
  c->r[4]=c->r[4]+0x00000050u; // 800CD638
  c->r[5]=c->r[5]+0x00000050u; // 800CD63C
  c->lr=0x800CD644u; f_8025E410(c); // 800CD640
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD644
  c->f[2]=c->f[31]; // 800CD648
  c->r[3]=c->r[29]+0x00000060u; // 800CD64C
  c->r[4]=c->r[30]+0x00000060u; // 800CD650
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800CD654
  c->r[5]=c->r[31]+0x00000060u; // 800CD658
  c->lr=0x800CD660u; f_8025E410(c); // 800CD65C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD660
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD664
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800CD668
  {uint32_t ea=c->r[30]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD66C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD670
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD674
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD678
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[1]);} // 800CD67C
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD680
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD684
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD688
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD68C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD690
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[1]);} // 800CD694
  {uint32_t ea=c->r[30]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD698
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD69C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD6A0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD6A4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD6A8
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[1]);} // 800CD6AC
  {uint32_t ea=c->r[30]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD6B0
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD6B4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD6B8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD6BC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD6C0
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 800CD6C4
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD6C8
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD6CC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD6D0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD6D4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD6D8
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 800CD6DC
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD6E0
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD6E4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD6E8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD6EC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD6F0
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[1]);} // 800CD6F4
  {uint32_t ea=c->r[30]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD6F8
  {uint32_t ea=c->r[31]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD6FC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD700
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD704
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD708
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[1]);} // 800CD70C
  {uint32_t ea=c->r[30]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD710
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD714
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD718
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800CD71C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800CD720
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[1]);} // 800CD724
  {uint32_t ea=c->r[30]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD728
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD72C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800CD730
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800CD734
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800CD738
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[0]);} // 800CD73C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CD740
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CD744
  c->r[11]=c->r[1]+0x00000020u; // 800CD748
  c->lr=0x800CD750u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD74C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CD750
  c->lr=c->r[0]; // 800CD754
  c->r[1]=c->r[1]+0x00000030u; // 800CD758
  return; // 800CD75C
}

// fn_800CD760
void f_800CD760(Ctx* __restrict c) {
  trace_call(0x800CD760u);
  c->r[3]=0u+0x0000009Cu; // 800CD760
  return; // 800CD764
}

// fn_800CD768
void f_800CD768(Ctx* __restrict c) {
  trace_call(0x800CD768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD768
  c->r[0]=c->lr; // 800CD76C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD770
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD774
  c->r[31]=c->r[3]|c->r[3]; // 800CD778
  c->lr=0x800CD780u; f_800CD008(c); // 800CD77C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CD780
  c->r[3]=0u+0x80420000u; // 800CD784
  c->r[3]=c->r[3]+0xFFFF9554u; // 800CD788
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CD78C
  c->r[0]=c->r[0]|0x80000000u; // 800CD790
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CD794
  c->r[3]=c->r[31]|c->r[31]; // 800CD798
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CD79C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CD7A0
  c->ctr=c->r[12]; // 800CD7A4
  if (true) { c->lr=0x800CD7ACu; dispatch(c,c->ctr); } // 800CD7A8
  c->r[3]=c->r[31]|c->r[31]; // 800CD7AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD7B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD7B4
  c->lr=c->r[0]; // 800CD7B8
  c->r[1]=c->r[1]+0x00000010u; // 800CD7BC
  return; // 800CD7C0
}

// fn_800CD7C4
void f_800CD7C4(Ctx* __restrict c) {
  trace_call(0x800CD7C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD7C4
  c->r[0]=c->lr; // 800CD7C8
  cmps(c,0,(int32_t)c->r[3],0); // 800CD7CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD7D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD7D4
  c->r[30]=c->r[3]|c->r[3]; // 800CD7D8
  c->r[31]=c->r[4]|c->r[4]; // 800CD7DC
  if (crb(c,2)) { goto L_800CD800; } // 800CD7E0
  if (crb(c,2)) { goto L_800CD7F0; } // 800CD7E4
  c->r[4]=0u+0x00000000u; // 800CD7E8
  c->lr=0x800CD7F0u; f_802B1180(c); // 800CD7EC
L_800CD7F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CD7F0
  if (!crb(c,1)) { goto L_800CD800; } // 800CD7F4
  c->r[3]=c->r[30]|c->r[30]; // 800CD7F8
  c->lr=0x800CD800u; f_80244DC0(c); // 800CD7FC
L_800CD800:;
  c->r[3]=c->r[30]|c->r[30]; // 800CD800
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD804
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD808
  c->lr=c->r[0]; // 800CD80C
  c->r[1]=c->r[1]+0x00000010u; // 800CD810
  return; // 800CD814
}

// fn_800CD818
void f_800CD818(Ctx* __restrict c) {
  trace_call(0x800CD818u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD818
  c->r[0]=c->lr; // 800CD81C
  c->r[3]=0u+0x0000009Cu; // 800CD820
  c->r[4]=c->r[13]+0xFFFFB22Fu; // 800CD824
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD828
  c->r[5]=0u+0x00000000u; // 800CD82C
  c->r[6]=0u+0x00001001u; // 800CD830
  c->lr=0x800CD838u; f_80244D20(c); // 800CD834
  cmps(c,0,(int32_t)c->r[3],0); // 800CD838
  if (crb(c,2)) { goto L_800CD844; } // 800CD83C
  c->lr=0x800CD844u; f_800CD768(c); // 800CD840
L_800CD844:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD844
  c->lr=c->r[0]; // 800CD848
  c->r[1]=c->r[1]+0x00000010u; // 800CD84C
  return; // 800CD850
}

// fn_800CD854
void f_800CD854(Ctx* __restrict c) {
  trace_call(0x800CD854u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD854
  c->r[0]=c->lr; // 800CD858
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD85C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD860
  c->r[31]=c->r[3]|c->r[3]; // 800CD864
  c->lr=0x800CD86Cu; f_80244520(c); // 800CD868
  c->r[7]=c->r[3]|c->r[3]; // 800CD86C
  c->r[9]=c->r[31]|c->r[31]; // 800CD870
  c->r[3]=0u+0x0000009Cu; // 800CD874
  c->r[4]=c->r[13]+0xFFFFB234u; // 800CD878
  c->r[5]=0u+0x00000000u; // 800CD87C
  c->r[6]=0u+0x00002001u; // 800CD880
  c->r[8]=0u+0x00000000u; // 800CD884
  c->lr=0x800CD88Cu; f_80242DF0(c); // 800CD888
  c->r[4]=c->r[3]|c->r[3]; // 800CD88C
  c->r[3]=0u+0x0000009Cu; // 800CD890
  c->r[5]=c->r[13]+0xFFFFB239u; // 800CD894
  c->r[6]=0u+0x00000000u; // 800CD898
  c->r[7]=0u+0x00001001u; // 800CD89C
  c->lr=0x800CD8A4u; f_80244DB0(c); // 800CD8A0
  cmps(c,0,(int32_t)c->r[3],0); // 800CD8A4
  if (crb(c,2)) { goto L_800CD8B0; } // 800CD8A8
  c->lr=0x800CD8B0u; f_800CD768(c); // 800CD8AC
L_800CD8B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD8B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD8B4
  c->lr=c->r[0]; // 800CD8B8
  c->r[1]=c->r[1]+0x00000010u; // 800CD8BC
  return; // 800CD8C0
}

// fn_800CD8C4
void f_800CD8C4(Ctx* __restrict c) {
  trace_call(0x800CD8C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD8C4
  c->r[0]=c->lr; // 800CD8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD8CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD8D0
  c->r[31]=c->r[3]|c->r[3]; // 800CD8D4
  c->lr=0x800CD8DCu; f_800CD008(c); // 800CD8D8
  c->r[7]=0u+0x80420000u; // 800CD8DC
  c->r[6]=0u+0x80410000u; // 800CD8E0
  c->r[5]=0u+0x00000000u; // 800CD8E4
  c->r[4]=0u+0x8EC70000u; // 800CD8E8
  c->r[3]=0u+0x712F0000u; // 800CD8EC
  c->r[7]=c->r[7]+0xFFFF9518u; // 800CD8F0
  c->r[0]=c->r[3]+0x000004BDu; // 800CD8F4
  c->r[6]=c->r[6]+0xFFFFCF8Cu; // 800CD8F8
  c->r[4]=c->r[4]+0xFFFFF1F9u; // 800CD8FC
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CD900
  c->r[3]=c->r[31]|c->r[31]; // 800CD904
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CD908
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CD90C
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CD910
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CD914
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CD918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD91C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD920
  c->lr=c->r[0]; // 800CD924
  c->r[1]=c->r[1]+0x00000010u; // 800CD928
  return; // 800CD92C
}

// fn_800CD930
void f_800CD930(Ctx* __restrict c) {
  trace_call(0x800CD930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD930
  c->r[0]=c->lr; // 800CD934
  cmps(c,0,(int32_t)c->r[4],0); // 800CD938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD93C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD940
  c->r[30]=c->r[3]|c->r[3]; // 800CD944
  c->r[31]=c->r[4]|c->r[4]; // 800CD948
  if (crb(c,2)) { goto L_800CD9A0; } // 800CD94C
  c->r[3]=c->r[31]|c->r[31]; // 800CD950
  c->lr=0x800CD958u; f_80244520(c); // 800CD954
  c->r[7]=c->r[3]|c->r[3]; // 800CD958
  c->r[9]=c->r[31]|c->r[31]; // 800CD95C
  c->r[3]=0u+0x000000B0u; // 800CD960
  c->r[4]=c->r[13]+0xFFFFB23Eu; // 800CD964
  c->r[5]=0u+0x00000000u; // 800CD968
  c->r[6]=0u+0x00002001u; // 800CD96C
  c->r[8]=0u+0x00000000u; // 800CD970
  c->lr=0x800CD978u; f_80242DF0(c); // 800CD974
  c->r[4]=c->r[3]|c->r[3]; // 800CD978
  c->r[3]=0u+0x000000B0u; // 800CD97C
  c->r[5]=c->r[13]+0xFFFFB243u; // 800CD980
  c->r[6]=0u+0x00000000u; // 800CD984
  c->r[7]=0u+0x00001001u; // 800CD988
  c->lr=0x800CD990u; f_80244DB0(c); // 800CD98C
  cmps(c,0,(int32_t)c->r[3],0); // 800CD990
  if (crb(c,2)) { goto L_800CD9C0; } // 800CD994
  c->lr=0x800CD99Cu; f_800CD8C4(c); // 800CD998
  goto L_800CD9C0; // 800CD99C
L_800CD9A0:;
  c->r[3]=0u+0x000000B0u; // 800CD9A0
  c->r[4]=c->r[13]+0xFFFFB248u; // 800CD9A4
  c->r[5]=0u+0x00000000u; // 800CD9A8
  c->r[6]=0u+0x00001001u; // 800CD9AC
  c->lr=0x800CD9B4u; f_80244D20(c); // 800CD9B0
  cmps(c,0,(int32_t)c->r[3],0); // 800CD9B4
  if (crb(c,2)) { goto L_800CD9C0; } // 800CD9B8
  c->lr=0x800CD9C0u; f_800CD8C4(c); // 800CD9BC
L_800CD9C0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CD9C0
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CD9C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD9CC
  c->lr=c->r[0]; // 800CD9D0
  c->r[1]=c->r[1]+0x00000010u; // 800CD9D4
  return; // 800CD9D8
}

// fn_800CD9DC
void f_800CD9DC(Ctx* __restrict c) {
  trace_call(0x800CD9DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD9DC
  c->r[0]=c->lr; // 800CD9E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD9E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD9E8
  c->r[29]=c->r[3]|c->r[3]; // 800CD9EC
  c->r[30]=c->r[4]|c->r[4]; // 800CD9F0
  c->lr=0x800CD9F8u; f_800CD120(c); // 800CD9F4
  c->r[31]=c->r[3]|c->r[3]; // 800CD9F8
  c->r[3]=c->r[30]|c->r[30]; // 800CD9FC
  c->lr=0x800CDA04u; f_8030C0A0(c); // 800CDA00
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[1]);} // 800CDA04
  c->r[3]=c->r[30]|c->r[30]; // 800CDA08
  c->lr=0x800CDA10u; f_8030C0A0(c); // 800CDA0C
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[1]);} // 800CDA10
  c->r[3]=c->r[30]|c->r[30]; // 800CDA14
  c->lr=0x800CDA1Cu; f_8030C0A0(c); // 800CDA18
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[1]);} // 800CDA1C
  c->r[3]=c->r[30]|c->r[30]; // 800CDA20
  c->lr=0x800CDA28u; f_8030C0A0(c); // 800CDA24
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[1]);} // 800CDA28
  c->r[3]=c->r[30]|c->r[30]; // 800CDA2C
  c->lr=0x800CDA34u; f_8030C0A0(c); // 800CDA30
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[1]);} // 800CDA34
  c->r[3]=c->r[31]|c->r[31]; // 800CDA38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDA3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDA40
  c->lr=c->r[0]; // 800CDA44
  c->r[1]=c->r[1]+0x00000020u; // 800CDA48
  return; // 800CDA4C
}

// fn_800CDA50
void f_800CDA50(Ctx* __restrict c) {
  trace_call(0x800CDA50u);
  return; // 800CDA50
}

// fn_800CDA54
void f_800CDA54(Ctx* __restrict c) {
  trace_call(0x800CDA54u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CDA54
  if (!crb(c,2)) return; // 800CDA58
  f_800CD3B4(c); return; // 800CDA5C
  return; // 800CDA60
}

// fn_800CDA64
void f_800CDA64(Ctx* __restrict c) {
  trace_call(0x800CDA64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDA64
  c->r[0]=c->lr; // 800CDA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDA6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDA70
  c->r[31]=c->r[3]|c->r[3]; // 800CDA74
  c->lr=0x800CDA7Cu; f_800CD418(c); // 800CDA78
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDA7C
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDA80
  {uint32_t ea=c->r[2]+0xFFFF87ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDA84
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[2]);} // 800CDA88
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[1]);} // 800CDA8C
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 800CDA90
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[1]);} // 800CDA94
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[1]);} // 800CDA98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDA9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDAA0
  c->lr=c->r[0]; // 800CDAA4
  c->r[1]=c->r[1]+0x00000010u; // 800CDAA8
  return; // 800CDAAC
}

// fn_800CDAB0
void f_800CDAB0(Ctx* __restrict c) {
  trace_call(0x800CDAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDAB0
  c->r[0]=c->lr; // 800CDAB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDAB8
  c->r[11]=c->r[1]+0x00000020u; // 800CDABC
  c->lr=0x800CDAC4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CDAC0
  c->r[29]=c->r[3]|c->r[3]; // 800CDAC4
  c->r[30]=c->r[4]|c->r[4]; // 800CDAC8
  c->r[31]=c->r[5]|c->r[5]; // 800CDACC
  c->r[6]=0u+0x00000000u; // 800CDAD0
  c->lr=0x800CDAD8u; f_800CD4D4(c); // 800CDAD4
  cmps(c,0,(int32_t)c->r[31],0); // 800CDAD8
  if (crb(c,2)) { goto L_800CDAE4; } // 800CDADC
  goto L_800CDAE8; // 800CDAE0
L_800CDAE4:;
  c->r[31]=c->r[29]|c->r[29]; // 800CDAE4
L_800CDAE8:;
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDAE8
  c->r[11]=c->r[1]+0x00000020u; // 800CDAEC
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800CDAF0
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDAF4
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 800CDAF8
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDAFC
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 800CDB00
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDB04
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800CDB08
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDB0C
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 800CDB10
  c->lr=0x800CDB18u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CDB14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDB18
  c->lr=c->r[0]; // 800CDB1C
  c->r[1]=c->r[1]+0x00000020u; // 800CDB20
  return; // 800CDB24
}

// fn_800CDB28
void f_800CDB28(Ctx* __restrict c) {
  trace_call(0x800CDB28u);
  c->r[0]=c->r[4]+0xAEA00000u; // 800CDB28
  cmpu(c,0,c->r[0],0x0000A187u); // 800CDB2C
  if (!crb(c,2)) { goto L_800CDB3C; } // 800CDB30
  c->r[3]=0u+0x00000001u; // 800CDB34
  return; // 800CDB38
L_800CDB3C:;
  c->r[3]=0u+0x1E2D0000u; // 800CDB3C
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CDB40
  c->r[0]=c->r[4]-c->r[0]; // 800CDB44
  c->r[0]=cntlz(c->r[0]); // 800CDB48
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDB4C
  return; // 800CDB50
}

// fn_800CDB54
void f_800CDB54(Ctx* __restrict c) {
  trace_call(0x800CDB54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDB54
  c->r[0]=c->lr; // 800CDB58
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CDB5C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CDB60
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CDB64
  c->r[11]=c->r[1]+0x00000020u; // 800CDB68
  c->lr=0x800CDB70u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CDB6C
  c->f[31]=c->f[1]; // 800CDB70
  c->r[29]=c->r[3]|c->r[3]; // 800CDB74
  c->r[31]=c->r[4]|c->r[4]; // 800CDB78
  c->r[30]=c->r[5]|c->r[5]; // 800CDB7C
  c->lr=0x800CDB84u; f_800CD5FC(c); // 800CDB80
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDB84
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDB88
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CDB8C
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDB90
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CDB94
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CDB98
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CDB9C
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[0]);} // 800CDBA0
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDBA4
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBA8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CDBAC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CDBB0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CDBB4
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[0]);} // 800CDBB8
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDBBC
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBC0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CDBC4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CDBC8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CDBCC
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[0]);} // 800CDBD0
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDBD4
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBD8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CDBDC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CDBE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CDBE4
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[0]);} // 800CDBE8
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDBEC
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBF0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CDBF4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CDBF8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CDBFC
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[0]);} // 800CDC00
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CDC04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CDC08
  c->r[11]=c->r[1]+0x00000020u; // 800CDC0C
  c->lr=0x800CDC14u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CDC10
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CDC14
  c->lr=c->r[0]; // 800CDC18
  c->r[1]=c->r[1]+0x00000030u; // 800CDC1C
  return; // 800CDC20
}

// fn_800CDC24
void f_800CDC24(Ctx* __restrict c) {
  trace_call(0x800CDC24u);
  c->r[3]=0u+0x000000B0u; // 800CDC24
  return; // 800CDC28
}

// fn_800CDC2C
void f_800CDC2C(Ctx* __restrict c) {
  trace_call(0x800CDC2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDC2C
  c->r[0]=c->lr; // 800CDC30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDC34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDC38
  c->r[31]=c->r[3]|c->r[3]; // 800CDC3C
  c->lr=0x800CDC44u; f_800CD8C4(c); // 800CDC40
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CDC44
  c->r[3]=0u+0x80420000u; // 800CDC48
  c->r[3]=c->r[3]+0xFFFF94D8u; // 800CDC4C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CDC50
  c->r[0]=c->r[0]|0x80000000u; // 800CDC54
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CDC58
  c->r[3]=c->r[31]|c->r[31]; // 800CDC5C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CDC60
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CDC64
  c->ctr=c->r[12]; // 800CDC68
  if (true) { c->lr=0x800CDC70u; dispatch(c,c->ctr); } // 800CDC6C
  c->r[3]=c->r[31]|c->r[31]; // 800CDC70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDC74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDC78
  c->lr=c->r[0]; // 800CDC7C
  c->r[1]=c->r[1]+0x00000010u; // 800CDC80
  return; // 800CDC84
}

// fn_800CDC88
void f_800CDC88(Ctx* __restrict c) {
  trace_call(0x800CDC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDC88
  c->r[0]=c->lr; // 800CDC8C
  cmps(c,0,(int32_t)c->r[3],0); // 800CDC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDC94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CDC98
  c->r[30]=c->r[3]|c->r[3]; // 800CDC9C
  c->r[31]=c->r[4]|c->r[4]; // 800CDCA0
  if (crb(c,2)) { goto L_800CDCC0; } // 800CDCA4
  c->r[4]=0u+0x00000000u; // 800CDCA8
  c->lr=0x800CDCB0u; f_800CD7C4(c); // 800CDCAC
  cmps(c,0,(int32_t)c->r[31],0); // 800CDCB0
  if (!crb(c,1)) { goto L_800CDCC0; } // 800CDCB4
  c->r[3]=c->r[30]|c->r[30]; // 800CDCB8
  c->lr=0x800CDCC0u; f_80244DC0(c); // 800CDCBC
L_800CDCC0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CDCC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDCC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDCC8
  c->lr=c->r[0]; // 800CDCCC
  c->r[1]=c->r[1]+0x00000010u; // 800CDCD0
  return; // 800CDCD4
}

// fn_800CDCD8
void f_800CDCD8(Ctx* __restrict c) {
  trace_call(0x800CDCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDCD8
  c->r[0]=c->lr; // 800CDCDC
  c->r[3]=0u+0x000000B0u; // 800CDCE0
  c->r[4]=c->r[13]+0xFFFFB24Du; // 800CDCE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDCE8
  c->r[5]=0u+0x00000000u; // 800CDCEC
  c->r[6]=0u+0x00001001u; // 800CDCF0
  c->lr=0x800CDCF8u; f_80244D20(c); // 800CDCF4
  cmps(c,0,(int32_t)c->r[3],0); // 800CDCF8
  if (crb(c,2)) { goto L_800CDD04; } // 800CDCFC
  c->lr=0x800CDD04u; f_800CDC2C(c); // 800CDD00
L_800CDD04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDD04
  c->lr=c->r[0]; // 800CDD08
  c->r[1]=c->r[1]+0x00000010u; // 800CDD0C
  return; // 800CDD10
}

// fn_800CDD14
void f_800CDD14(Ctx* __restrict c) {
  trace_call(0x800CDD14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDD14
  c->r[0]=c->lr; // 800CDD18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDD1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDD20
  c->r[31]=c->r[3]|c->r[3]; // 800CDD24
  c->lr=0x800CDD2Cu; f_80244520(c); // 800CDD28
  c->r[7]=c->r[3]|c->r[3]; // 800CDD2C
  c->r[9]=c->r[31]|c->r[31]; // 800CDD30
  c->r[3]=0u+0x000000B0u; // 800CDD34
  c->r[4]=c->r[13]+0xFFFFB252u; // 800CDD38
  c->r[5]=0u+0x00000000u; // 800CDD3C
  c->r[6]=0u+0x00002001u; // 800CDD40
  c->r[8]=0u+0x00000000u; // 800CDD44
  c->lr=0x800CDD4Cu; f_80242DF0(c); // 800CDD48
  c->r[4]=c->r[3]|c->r[3]; // 800CDD4C
  c->r[3]=0u+0x000000B0u; // 800CDD50
  c->r[5]=c->r[13]+0xFFFFB257u; // 800CDD54
  c->r[6]=0u+0x00000000u; // 800CDD58
  c->r[7]=0u+0x00001001u; // 800CDD5C
  c->lr=0x800CDD64u; f_80244DB0(c); // 800CDD60
  cmps(c,0,(int32_t)c->r[3],0); // 800CDD64
  if (crb(c,2)) { goto L_800CDD70; } // 800CDD68
  c->lr=0x800CDD70u; f_800CDC2C(c); // 800CDD6C
L_800CDD70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDD70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDD74
  c->lr=c->r[0]; // 800CDD78
  c->r[1]=c->r[1]+0x00000010u; // 800CDD7C
  return; // 800CDD80
}

// fn_800CDD84
void f_800CDD84(Ctx* __restrict c) {
  trace_call(0x800CDD84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDD84
  c->r[0]=c->lr; // 800CDD88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDD8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDD90
  c->r[31]=c->r[3]|c->r[3]; // 800CDD94
  c->lr=0x800CDD9Cu; f_800CD8C4(c); // 800CDD98
  c->r[7]=0u+0x80420000u; // 800CDD9C
  c->r[6]=0u+0x80410000u; // 800CDDA0
  c->r[5]=0u+0x00000000u; // 800CDDA4
  c->r[4]=0u+0xBCE70000u; // 800CDDA8
  c->r[3]=0u+0x361E0000u; // 800CDDAC
  c->r[7]=c->r[7]+0xFFFF949Cu; // 800CDDB0
  c->r[0]=c->r[3]+0xFFFFD736u; // 800CDDB4
  c->r[6]=c->r[6]+0xFFFFCF9Eu; // 800CDDB8
  c->r[4]=c->r[4]+0xFFFFD4DDu; // 800CDDBC
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CDDC0
  c->r[3]=c->r[31]|c->r[31]; // 800CDDC4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CDDC8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CDDCC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CDDD0
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CDDD4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CDDD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDDDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDDE0
  c->lr=c->r[0]; // 800CDDE4
  c->r[1]=c->r[1]+0x00000010u; // 800CDDE8
  return; // 800CDDEC
}

// fn_800CDDF0
void f_800CDDF0(Ctx* __restrict c) {
  trace_call(0x800CDDF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDDF0
  c->r[0]=c->lr; // 800CDDF4
  cmps(c,0,(int32_t)c->r[4],0); // 800CDDF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDDFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CDE00
  c->r[30]=c->r[3]|c->r[3]; // 800CDE04
  c->r[31]=c->r[4]|c->r[4]; // 800CDE08
  if (crb(c,2)) { goto L_800CDE60; } // 800CDE0C
  c->r[3]=c->r[31]|c->r[31]; // 800CDE10
  c->lr=0x800CDE18u; f_80244520(c); // 800CDE14
  c->r[7]=c->r[3]|c->r[3]; // 800CDE18
  c->r[9]=c->r[31]|c->r[31]; // 800CDE1C
  c->r[3]=0u+0x000000C8u; // 800CDE20
  c->r[4]=c->r[13]+0xFFFFB25Cu; // 800CDE24
  c->r[5]=0u+0x00000000u; // 800CDE28
  c->r[6]=0u+0x00002001u; // 800CDE2C
  c->r[8]=0u+0x00000000u; // 800CDE30
  c->lr=0x800CDE38u; f_80242DF0(c); // 800CDE34
  c->r[4]=c->r[3]|c->r[3]; // 800CDE38
  c->r[3]=0u+0x000000C8u; // 800CDE3C
  c->r[5]=c->r[13]+0xFFFFB261u; // 800CDE40
  c->r[6]=0u+0x00000000u; // 800CDE44
  c->r[7]=0u+0x00001001u; // 800CDE48
  c->lr=0x800CDE50u; f_80244DB0(c); // 800CDE4C
  cmps(c,0,(int32_t)c->r[3],0); // 800CDE50
  if (crb(c,2)) { goto L_800CDE80; } // 800CDE54
  c->lr=0x800CDE5Cu; f_800CDD84(c); // 800CDE58
  goto L_800CDE80; // 800CDE5C
L_800CDE60:;
  c->r[3]=0u+0x000000C8u; // 800CDE60
  c->r[4]=c->r[13]+0xFFFFB266u; // 800CDE64
  c->r[5]=0u+0x00000000u; // 800CDE68
  c->r[6]=0u+0x00001001u; // 800CDE6C
  c->lr=0x800CDE74u; f_80244D20(c); // 800CDE70
  cmps(c,0,(int32_t)c->r[3],0); // 800CDE74
  if (crb(c,2)) { goto L_800CDE80; } // 800CDE78
  c->lr=0x800CDE80u; f_800CDD84(c); // 800CDE7C
L_800CDE80:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CDE80
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CDE84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDE88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDE8C
  c->lr=c->r[0]; // 800CDE90
  c->r[1]=c->r[1]+0x00000010u; // 800CDE94
  return; // 800CDE98
}

// fn_800CDE9C
void f_800CDE9C(Ctx* __restrict c) {
  trace_call(0x800CDE9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDE9C
  c->r[0]=c->lr; // 800CDEA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDEA4
  c->r[11]=c->r[1]+0x00000020u; // 800CDEA8
  c->lr=0x800CDEB0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CDEAC
  c->r[29]=c->r[3]|c->r[3]; // 800CDEB0
  c->r[30]=c->r[4]|c->r[4]; // 800CDEB4
  c->lr=0x800CDEBCu; f_800CD9DC(c); // 800CDEB8
  c->r[31]=c->r[3]|c->r[3]; // 800CDEBC
  c->r[3]=c->r[30]|c->r[30]; // 800CDEC0
  c->lr=0x800CDEC8u; f_8030C0A0(c); // 800CDEC4
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800CDEC8
  c->r[3]=c->r[30]|c->r[30]; // 800CDECC
  c->lr=0x800CDED4u; f_8030C0A0(c); // 800CDED0
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800CDED4
  c->r[3]=c->r[30]|c->r[30]; // 800CDED8
  c->lr=0x800CDEE0u; f_8030C0A0(c); // 800CDEDC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDEE0
  c->r[3]=c->r[30]|c->r[30]; // 800CDEE4
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 800CDEE8
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[0]);} // 800CDEEC
  c->lr=0x800CDEF4u; f_8030BD1C(c); // 800CDEF0
  W32(c->r[29]+0x000000C0u,c->r[3]); // 800CDEF4
  c->r[3]=c->r[30]|c->r[30]; // 800CDEF8
  c->lr=0x800CDF00u; f_8030BD1C(c); // 800CDEFC
  W32(c->r[29]+0x000000C4u,c->r[3]); // 800CDF00
  c->r[11]=c->r[1]+0x00000020u; // 800CDF04
  c->r[3]=c->r[31]|c->r[31]; // 800CDF08
  c->lr=0x800CDF10u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CDF0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDF10
  c->lr=c->r[0]; // 800CDF14
  c->r[1]=c->r[1]+0x00000020u; // 800CDF18
  return; // 800CDF1C
}

// fn_800CDF20
void f_800CDF20(Ctx* __restrict c) {
  trace_call(0x800CDF20u);
  return; // 800CDF20
}

// fn_800CDF24
void f_800CDF24(Ctx* __restrict c) {
  trace_call(0x800CDF24u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CDF24
  if (!crb(c,2)) return; // 800CDF28
  f_800CD3B4(c); return; // 800CDF2C
  return; // 800CDF30
}

// fn_800CDF34
void f_800CDF34(Ctx* __restrict c) {
  trace_call(0x800CDF34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDF34
  c->r[0]=c->lr; // 800CDF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDF3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDF40
  c->r[31]=c->r[3]|c->r[3]; // 800CDF44
  c->lr=0x800CDF4Cu; f_800CDA64(c); // 800CDF48
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDF4C
  c->r[0]=0u+0x00000000u; // 800CDF50
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDF54
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 800CDF58
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[1]);} // 800CDF5C
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[1]);} // 800CDF60
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 800CDF64
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800CDF68
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800CDF6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDF70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDF74
  c->lr=c->r[0]; // 800CDF78
  c->r[1]=c->r[1]+0x00000010u; // 800CDF7C
  return; // 800CDF80
}

// fn_800CDF84
void f_800CDF84(Ctx* __restrict c) {
  trace_call(0x800CDF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDF84
  c->r[0]=c->lr; // 800CDF88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDF8C
  c->r[11]=c->r[1]+0x00000020u; // 800CDF90
  c->lr=0x800CDF98u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CDF94
  c->r[29]=c->r[3]|c->r[3]; // 800CDF98
  c->r[30]=c->r[4]|c->r[4]; // 800CDF9C
  c->r[31]=c->r[5]|c->r[5]; // 800CDFA0
  c->r[6]=0u+0x00000000u; // 800CDFA4
  c->lr=0x800CDFACu; f_800CDAB0(c); // 800CDFA8
  cmps(c,0,(int32_t)c->r[31],0); // 800CDFAC
  if (crb(c,2)) { goto L_800CDFB8; } // 800CDFB0
  goto L_800CDFBC; // 800CDFB4
L_800CDFB8:;
  c->r[31]=c->r[29]|c->r[29]; // 800CDFB8
L_800CDFBC:;
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDFBC
  c->r[11]=c->r[1]+0x00000020u; // 800CDFC0
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800CDFC4
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDFC8
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CDFCC
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDFD0
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 800CDFD4
  c->r[0]=R32(c->r[30]+0x000000C0u); // 800CDFD8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800CDFDC
  c->r[0]=R32(c->r[30]+0x000000C4u); // 800CDFE0
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800CDFE4
  c->lr=0x800CDFECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CDFE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDFEC
  c->lr=c->r[0]; // 800CDFF0
  c->r[1]=c->r[1]+0x00000020u; // 800CDFF4
  return; // 800CDFF8
}

// fn_800CDFFC
void f_800CDFFC(Ctx* __restrict c) {
  trace_call(0x800CDFFCu);
  c->r[0]=c->r[4]+0x8ED10000u; // 800CDFFC
  cmpu(c,0,c->r[0],0x000004BDu); // 800CE000
  if (!crb(c,2)) { goto L_800CE010; } // 800CE004
  c->r[3]=0u+0x00000001u; // 800CE008
  return; // 800CE00C
L_800CE010:;
  c->r[0]=c->r[4]+0xAEA00000u; // 800CE010
  cmpu(c,0,c->r[0],0x0000A187u); // 800CE014
  if (!crb(c,2)) { goto L_800CE024; } // 800CE018
  c->r[3]=0u+0x00000001u; // 800CE01C
  return; // 800CE020
L_800CE024:;
  c->r[3]=0u+0x1E2D0000u; // 800CE024
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CE028
  c->r[0]=c->r[4]-c->r[0]; // 800CE02C
  c->r[0]=cntlz(c->r[0]); // 800CE030
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE034
  return; // 800CE038
}

// fn_800CE03C
void f_800CE03C(Ctx* __restrict c) {
  trace_call(0x800CE03Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE03C
  c->r[0]=c->lr; // 800CE040
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CE044
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CE048
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CE04C
  c->r[11]=c->r[1]+0x00000020u; // 800CE050
  c->lr=0x800CE058u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE054
  c->f[31]=c->f[1]; // 800CE058
  c->r[29]=c->r[3]|c->r[3]; // 800CE05C
  c->r[31]=c->r[4]|c->r[4]; // 800CE060
  c->r[30]=c->r[5]|c->r[5]; // 800CE064
  c->lr=0x800CE06Cu; f_800CDB54(c); // 800CE068
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE06C
  c->f[2]=c->f[31]; // 800CE070
  c->r[3]=c->r[29]+0x000000B0u; // 800CE074
  c->r[4]=c->r[31]+0x000000B0u; // 800CE078
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800CE07C
  c->r[5]=c->r[30]+0x000000B0u; // 800CE080
  c->lr=0x800CE088u; f_8025E410(c); // 800CE084
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CE088
  c->r[11]=c->r[1]+0x00000020u; // 800CE08C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CE090
  c->lr=0x800CE098u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE094
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE098
  c->lr=c->r[0]; // 800CE09C
  c->r[1]=c->r[1]+0x00000030u; // 800CE0A0
  return; // 800CE0A4
}

// fn_800CE0A8
void f_800CE0A8(Ctx* __restrict c) {
  trace_call(0x800CE0A8u);
  c->r[3]=0u+0x000000C8u; // 800CE0A8
  return; // 800CE0AC
}

// fn_800CE0B0
void f_800CE0B0(Ctx* __restrict c) {
  trace_call(0x800CE0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE0B0
  c->r[0]=c->lr; // 800CE0B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE0B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE0BC
  c->r[31]=c->r[3]|c->r[3]; // 800CE0C0
  c->lr=0x800CE0C8u; f_800CDD84(c); // 800CE0C4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CE0C8
  c->r[3]=0u+0x80420000u; // 800CE0CC
  c->r[3]=c->r[3]+0xFFFF945Cu; // 800CE0D0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CE0D4
  c->r[0]=c->r[0]|0x80000000u; // 800CE0D8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CE0DC
  c->r[3]=c->r[31]|c->r[31]; // 800CE0E0
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CE0E4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CE0E8
  c->ctr=c->r[12]; // 800CE0EC
  if (true) { c->lr=0x800CE0F4u; dispatch(c,c->ctr); } // 800CE0F0
  c->r[3]=c->r[31]|c->r[31]; // 800CE0F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE0F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE0FC
  c->lr=c->r[0]; // 800CE100
  c->r[1]=c->r[1]+0x00000010u; // 800CE104
  return; // 800CE108
}

// fn_800CE10C
void f_800CE10C(Ctx* __restrict c) {
  trace_call(0x800CE10Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE10C
  c->r[0]=c->lr; // 800CE110
  cmps(c,0,(int32_t)c->r[3],0); // 800CE114
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE118
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE11C
  c->r[30]=c->r[3]|c->r[3]; // 800CE120
  c->r[31]=c->r[4]|c->r[4]; // 800CE124
  if (crb(c,2)) { goto L_800CE148; } // 800CE128
  if (crb(c,2)) { goto L_800CE138; } // 800CE12C
  c->r[4]=0u+0x00000000u; // 800CE130
  c->lr=0x800CE138u; f_800CD7C4(c); // 800CE134
L_800CE138:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CE138
  if (!crb(c,1)) { goto L_800CE148; } // 800CE13C
  c->r[3]=c->r[30]|c->r[30]; // 800CE140
  c->lr=0x800CE148u; f_80244DC0(c); // 800CE144
L_800CE148:;
  c->r[3]=c->r[30]|c->r[30]; // 800CE148
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE14C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE150
  c->lr=c->r[0]; // 800CE154
  c->r[1]=c->r[1]+0x00000010u; // 800CE158
  return; // 800CE15C
}

// fn_800CE160
void f_800CE160(Ctx* __restrict c) {
  trace_call(0x800CE160u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE160
  c->r[0]=c->lr; // 800CE164
  c->r[3]=0u+0x000000C8u; // 800CE168
  c->r[4]=c->r[13]+0xFFFFB26Bu; // 800CE16C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE170
  c->r[5]=0u+0x00000000u; // 800CE174
  c->r[6]=0u+0x00001001u; // 800CE178
  c->lr=0x800CE180u; f_80244D20(c); // 800CE17C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE180
  if (crb(c,2)) { goto L_800CE18C; } // 800CE184
  c->lr=0x800CE18Cu; f_800CE0B0(c); // 800CE188
L_800CE18C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE18C
  c->lr=c->r[0]; // 800CE190
  c->r[1]=c->r[1]+0x00000010u; // 800CE194
  return; // 800CE198
}

// fn_800CE19C
void f_800CE19C(Ctx* __restrict c) {
  trace_call(0x800CE19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE19C
  c->r[0]=c->lr; // 800CE1A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE1A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE1A8
  c->r[31]=c->r[3]|c->r[3]; // 800CE1AC
  c->lr=0x800CE1B4u; f_80244520(c); // 800CE1B0
  c->r[7]=c->r[3]|c->r[3]; // 800CE1B4
  c->r[9]=c->r[31]|c->r[31]; // 800CE1B8
  c->r[3]=0u+0x000000C8u; // 800CE1BC
  c->r[4]=c->r[13]+0xFFFFB270u; // 800CE1C0
  c->r[5]=0u+0x00000000u; // 800CE1C4
  c->r[6]=0u+0x00002001u; // 800CE1C8
  c->r[8]=0u+0x00000000u; // 800CE1CC
  c->lr=0x800CE1D4u; f_80242DF0(c); // 800CE1D0
  c->r[4]=c->r[3]|c->r[3]; // 800CE1D4
  c->r[3]=0u+0x000000C8u; // 800CE1D8
  c->r[5]=c->r[13]+0xFFFFB275u; // 800CE1DC
  c->r[6]=0u+0x00000000u; // 800CE1E0
  c->r[7]=0u+0x00001001u; // 800CE1E4
  c->lr=0x800CE1ECu; f_80244DB0(c); // 800CE1E8
  cmps(c,0,(int32_t)c->r[3],0); // 800CE1EC
  if (crb(c,2)) { goto L_800CE1F8; } // 800CE1F0
  c->lr=0x800CE1F8u; f_800CE0B0(c); // 800CE1F4
L_800CE1F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE1F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE1FC
  c->lr=c->r[0]; // 800CE200
  c->r[1]=c->r[1]+0x00000010u; // 800CE204
  return; // 800CE208
}

// fn_800CE20C
void f_800CE20C(Ctx* __restrict c) {
  trace_call(0x800CE20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE20C
  c->r[0]=c->lr; // 800CE210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE218
  c->r[31]=c->r[3]|c->r[3]; // 800CE21C
  c->lr=0x800CE224u; f_800CD8C4(c); // 800CE220
  c->r[7]=0u+0x80420000u; // 800CE224
  c->r[6]=0u+0x80410000u; // 800CE228
  c->r[5]=0u+0x00000000u; // 800CE22C
  c->r[4]=0u+0x00FD0000u; // 800CE230
  c->r[3]=0u+0x80770000u; // 800CE234
  c->r[7]=c->r[7]+0xFFFF9420u; // 800CE238
  c->r[0]=c->r[3]+0x00005CCAu; // 800CE23C
  c->r[6]=c->r[6]+0xFFFFCFB3u; // 800CE240
  c->r[4]=c->r[4]+0xFFFFFC04u; // 800CE244
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CE248
  c->r[3]=c->r[31]|c->r[31]; // 800CE24C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CE250
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CE254
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CE258
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CE25C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CE260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE264
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE268
  c->lr=c->r[0]; // 800CE26C
  c->r[1]=c->r[1]+0x00000010u; // 800CE270
  return; // 800CE274
}

// fn_800CE278
void f_800CE278(Ctx* __restrict c) {
  trace_call(0x800CE278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE278
  c->r[0]=c->lr; // 800CE27C
  cmps(c,0,(int32_t)c->r[4],0); // 800CE280
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE284
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE288
  c->r[30]=c->r[3]|c->r[3]; // 800CE28C
  c->r[31]=c->r[4]|c->r[4]; // 800CE290
  if (crb(c,2)) { goto L_800CE2E8; } // 800CE294
  c->r[3]=c->r[31]|c->r[31]; // 800CE298
  c->lr=0x800CE2A0u; f_80244520(c); // 800CE29C
  c->r[7]=c->r[3]|c->r[3]; // 800CE2A0
  c->r[9]=c->r[31]|c->r[31]; // 800CE2A4
  c->r[3]=0u+0x000000C0u; // 800CE2A8
  c->r[4]=c->r[13]+0xFFFFB27Au; // 800CE2AC
  c->r[5]=0u+0x00000000u; // 800CE2B0
  c->r[6]=0u+0x00002001u; // 800CE2B4
  c->r[8]=0u+0x00000000u; // 800CE2B8
  c->lr=0x800CE2C0u; f_80242DF0(c); // 800CE2BC
  c->r[4]=c->r[3]|c->r[3]; // 800CE2C0
  c->r[3]=0u+0x000000C0u; // 800CE2C4
  c->r[5]=c->r[13]+0xFFFFB27Fu; // 800CE2C8
  c->r[6]=0u+0x00000000u; // 800CE2CC
  c->r[7]=0u+0x00001001u; // 800CE2D0
  c->lr=0x800CE2D8u; f_80244DB0(c); // 800CE2D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CE2D8
  if (crb(c,2)) { goto L_800CE308; } // 800CE2DC
  c->lr=0x800CE2E4u; f_800CE20C(c); // 800CE2E0
  goto L_800CE308; // 800CE2E4
L_800CE2E8:;
  c->r[3]=0u+0x000000C0u; // 800CE2E8
  c->r[4]=c->r[13]+0xFFFFB284u; // 800CE2EC
  c->r[5]=0u+0x00000000u; // 800CE2F0
  c->r[6]=0u+0x00001001u; // 800CE2F4
  c->lr=0x800CE2FCu; f_80244D20(c); // 800CE2F8
  cmps(c,0,(int32_t)c->r[3],0); // 800CE2FC
  if (crb(c,2)) { goto L_800CE308; } // 800CE300
  c->lr=0x800CE308u; f_800CE20C(c); // 800CE304
L_800CE308:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CE308
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CE30C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE310
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE314
  c->lr=c->r[0]; // 800CE318
  c->r[1]=c->r[1]+0x00000010u; // 800CE31C
  return; // 800CE320
}

// fn_800CE324
void f_800CE324(Ctx* __restrict c) {
  trace_call(0x800CE324u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE324
  c->r[0]=c->lr; // 800CE328
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE32C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE330
  c->r[29]=c->r[3]|c->r[3]; // 800CE334
  c->r[30]=c->r[4]|c->r[4]; // 800CE338
  c->lr=0x800CE340u; f_800CD9DC(c); // 800CE33C
  c->r[31]=c->r[3]|c->r[3]; // 800CE340
  c->r[3]=c->r[30]|c->r[30]; // 800CE344
  c->lr=0x800CE34Cu; f_8030C0A0(c); // 800CE348
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800CE34C
  c->r[3]=c->r[30]|c->r[30]; // 800CE350
  c->lr=0x800CE358u; f_8030C0A0(c); // 800CE354
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800CE358
  c->r[3]=c->r[30]|c->r[30]; // 800CE35C
  c->lr=0x800CE364u; f_8030BD1C(c); // 800CE360
  W32(c->r[29]+0x000000B8u,c->r[3]); // 800CE364
  c->r[3]=c->r[30]|c->r[30]; // 800CE368
  c->lr=0x800CE370u; f_8030BD1C(c); // 800CE36C
  W32(c->r[29]+0x000000BCu,c->r[3]); // 800CE370
  c->r[3]=c->r[31]|c->r[31]; // 800CE374
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE378
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE37C
  c->lr=c->r[0]; // 800CE380
  c->r[1]=c->r[1]+0x00000020u; // 800CE384
  return; // 800CE388
}

// fn_800CE38C
void f_800CE38C(Ctx* __restrict c) {
  trace_call(0x800CE38Cu);
  return; // 800CE38C
}

// fn_800CE390
void f_800CE390(Ctx* __restrict c) {
  trace_call(0x800CE390u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CE390
  if (!crb(c,2)) return; // 800CE394
  f_800CD3B4(c); return; // 800CE398
  return; // 800CE39C
}

// fn_800CE3A0
void f_800CE3A0(Ctx* __restrict c) {
  trace_call(0x800CE3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE3A0
  c->r[0]=c->lr; // 800CE3A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE3A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE3AC
  c->r[31]=c->r[3]|c->r[3]; // 800CE3B0
  c->lr=0x800CE3B8u; f_800CDA64(c); // 800CE3B4
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE3B8
  c->r[3]=0u+0x00000001u; // 800CE3BC
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE3C0
  c->r[0]=0u+0x00000000u; // 800CE3C4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 800CE3C8
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CE3CC
  W32(c->r[31]+0x000000B8u,c->r[3]); // 800CE3D0
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800CE3D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE3D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE3DC
  c->lr=c->r[0]; // 800CE3E0
  c->r[1]=c->r[1]+0x00000010u; // 800CE3E4
  return; // 800CE3E8
}

// fn_800CE3EC
void f_800CE3EC(Ctx* __restrict c) {
  trace_call(0x800CE3ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE3EC
  c->r[0]=c->lr; // 800CE3F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE3F4
  c->r[11]=c->r[1]+0x00000020u; // 800CE3F8
  c->lr=0x800CE400u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE3FC
  c->r[29]=c->r[3]|c->r[3]; // 800CE400
  c->r[30]=c->r[4]|c->r[4]; // 800CE404
  c->r[31]=c->r[5]|c->r[5]; // 800CE408
  c->r[6]=0u+0x00000000u; // 800CE40C
  c->lr=0x800CE414u; f_800CDAB0(c); // 800CE410
  cmps(c,0,(int32_t)c->r[31],0); // 800CE414
  if (crb(c,2)) { goto L_800CE420; } // 800CE418
  goto L_800CE424; // 800CE41C
L_800CE420:;
  c->r[31]=c->r[29]|c->r[29]; // 800CE420
L_800CE424:;
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE424
  c->r[11]=c->r[1]+0x00000020u; // 800CE428
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800CE42C
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE430
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CE434
  c->r[0]=R32(c->r[30]+0x000000B8u); // 800CE438
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800CE43C
  c->r[0]=R32(c->r[30]+0x000000BCu); // 800CE440
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800CE444
  c->lr=0x800CE44Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE448
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE44C
  c->lr=c->r[0]; // 800CE450
  c->r[1]=c->r[1]+0x00000020u; // 800CE454
  return; // 800CE458
}

// fn_800CE45C
void f_800CE45C(Ctx* __restrict c) {
  trace_call(0x800CE45Cu);
  c->r[0]=c->r[4]+0x8ED10000u; // 800CE45C
  cmpu(c,0,c->r[0],0x000004BDu); // 800CE460
  if (!crb(c,2)) { goto L_800CE470; } // 800CE464
  c->r[3]=0u+0x00000001u; // 800CE468
  return; // 800CE46C
L_800CE470:;
  c->r[0]=c->r[4]+0xAEA00000u; // 800CE470
  cmpu(c,0,c->r[0],0x0000A187u); // 800CE474
  if (!crb(c,2)) { goto L_800CE484; } // 800CE478
  c->r[3]=0u+0x00000001u; // 800CE47C
  return; // 800CE480
L_800CE484:;
  c->r[3]=0u+0x1E2D0000u; // 800CE484
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CE488
  c->r[0]=c->r[4]-c->r[0]; // 800CE48C
  c->r[0]=cntlz(c->r[0]); // 800CE490
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE494
  return; // 800CE498
}

// fn_800CE49C
void f_800CE49C(Ctx* __restrict c) {
  trace_call(0x800CE49Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE49C
  c->r[0]=c->lr; // 800CE4A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CE4A4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CE4A8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CE4AC
  c->r[11]=c->r[1]+0x00000020u; // 800CE4B0
  c->lr=0x800CE4B8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE4B4
  c->f[31]=c->f[1]; // 800CE4B8
  c->r[29]=c->r[3]|c->r[3]; // 800CE4BC
  c->r[31]=c->r[4]|c->r[4]; // 800CE4C0
  c->r[30]=c->r[5]|c->r[5]; // 800CE4C4
  c->lr=0x800CE4CCu; f_800CDB54(c); // 800CE4C8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE4CC
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE4D0
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CE4D4
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE4D8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CE4DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CE4E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CE4E4
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 800CE4E8
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE4EC
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE4F0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CE4F4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CE4F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CE4FC
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[0]);} // 800CE500
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CE504
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CE508
  c->r[11]=c->r[1]+0x00000020u; // 800CE50C
  c->lr=0x800CE514u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE510
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE514
  c->lr=c->r[0]; // 800CE518
  c->r[1]=c->r[1]+0x00000030u; // 800CE51C
  return; // 800CE520
}

// fn_800CE524
void f_800CE524(Ctx* __restrict c) {
  trace_call(0x800CE524u);
  c->r[3]=0u+0x000000C0u; // 800CE524
  return; // 800CE528
}

// fn_800CE52C
void f_800CE52C(Ctx* __restrict c) {
  trace_call(0x800CE52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE52C
  c->r[0]=c->lr; // 800CE530
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE538
  c->r[31]=c->r[3]|c->r[3]; // 800CE53C
  c->lr=0x800CE544u; f_800CE20C(c); // 800CE540
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CE544
  c->r[3]=0u+0x80420000u; // 800CE548
  c->r[3]=c->r[3]+0xFFFF93E0u; // 800CE54C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CE550
  c->r[0]=c->r[0]|0x80000000u; // 800CE554
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CE558
  c->r[3]=c->r[31]|c->r[31]; // 800CE55C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CE560
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CE564
  c->ctr=c->r[12]; // 800CE568
  if (true) { c->lr=0x800CE570u; dispatch(c,c->ctr); } // 800CE56C
  c->r[3]=c->r[31]|c->r[31]; // 800CE570
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE574
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE578
  c->lr=c->r[0]; // 800CE57C
  c->r[1]=c->r[1]+0x00000010u; // 800CE580
  return; // 800CE584
}

// fn_800CE588
void f_800CE588(Ctx* __restrict c) {
  trace_call(0x800CE588u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE588
  c->r[0]=c->lr; // 800CE58C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE590
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE594
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE598
  c->r[30]=c->r[3]|c->r[3]; // 800CE59C
  c->r[31]=c->r[4]|c->r[4]; // 800CE5A0
  if (crb(c,2)) { goto L_800CE5C4; } // 800CE5A4
  if (crb(c,2)) { goto L_800CE5B4; } // 800CE5A8
  c->r[4]=0u+0x00000000u; // 800CE5AC
  c->lr=0x800CE5B4u; f_800CD7C4(c); // 800CE5B0
L_800CE5B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CE5B4
  if (!crb(c,1)) { goto L_800CE5C4; } // 800CE5B8
  c->r[3]=c->r[30]|c->r[30]; // 800CE5BC
  c->lr=0x800CE5C4u; f_80244DC0(c); // 800CE5C0
L_800CE5C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CE5C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE5C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE5CC
  c->lr=c->r[0]; // 800CE5D0
  c->r[1]=c->r[1]+0x00000010u; // 800CE5D4
  return; // 800CE5D8
}

// fn_800CE5DC
void f_800CE5DC(Ctx* __restrict c) {
  trace_call(0x800CE5DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE5DC
  c->r[0]=c->lr; // 800CE5E0
  c->r[3]=0u+0x000000C0u; // 800CE5E4
  c->r[4]=c->r[13]+0xFFFFB289u; // 800CE5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE5EC
  c->r[5]=0u+0x00000000u; // 800CE5F0
  c->r[6]=0u+0x00001001u; // 800CE5F4
  c->lr=0x800CE5FCu; f_80244D20(c); // 800CE5F8
  cmps(c,0,(int32_t)c->r[3],0); // 800CE5FC
  if (crb(c,2)) { goto L_800CE608; } // 800CE600
  c->lr=0x800CE608u; f_800CE52C(c); // 800CE604
L_800CE608:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE608
  c->lr=c->r[0]; // 800CE60C
  c->r[1]=c->r[1]+0x00000010u; // 800CE610
  return; // 800CE614
}

// fn_800CE618
void f_800CE618(Ctx* __restrict c) {
  trace_call(0x800CE618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE618
  c->r[0]=c->lr; // 800CE61C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE620
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE624
  c->r[31]=c->r[3]|c->r[3]; // 800CE628
  c->lr=0x800CE630u; f_80244520(c); // 800CE62C
  c->r[7]=c->r[3]|c->r[3]; // 800CE630
  c->r[9]=c->r[31]|c->r[31]; // 800CE634
  c->r[3]=0u+0x000000C0u; // 800CE638
  c->r[4]=c->r[13]+0xFFFFB28Eu; // 800CE63C
  c->r[5]=0u+0x00000000u; // 800CE640
  c->r[6]=0u+0x00002001u; // 800CE644
  c->r[8]=0u+0x00000000u; // 800CE648
  c->lr=0x800CE650u; f_80242DF0(c); // 800CE64C
  c->r[4]=c->r[3]|c->r[3]; // 800CE650
  c->r[3]=0u+0x000000C0u; // 800CE654
  c->r[5]=c->r[13]+0xFFFFB293u; // 800CE658
  c->r[6]=0u+0x00000000u; // 800CE65C
  c->r[7]=0u+0x00001001u; // 800CE660
  c->lr=0x800CE668u; f_80244DB0(c); // 800CE664
  cmps(c,0,(int32_t)c->r[3],0); // 800CE668
  if (crb(c,2)) { goto L_800CE674; } // 800CE66C
  c->lr=0x800CE674u; f_800CE52C(c); // 800CE670
L_800CE674:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE674
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE678
  c->lr=c->r[0]; // 800CE67C
  c->r[1]=c->r[1]+0x00000010u; // 800CE680
  return; // 800CE684
}

// fn_800CE688
void f_800CE688(Ctx* __restrict c) {
  trace_call(0x800CE688u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE688
  c->r[0]=c->lr; // 800CE68C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE690
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE694
  c->r[31]=c->r[3]|c->r[3]; // 800CE698
  c->lr=0x800CE6A0u; f_800CD8C4(c); // 800CE69C
  c->r[7]=0u+0x80420000u; // 800CE6A0
  c->r[6]=0u+0x80410000u; // 800CE6A4
  c->r[5]=0u+0x00000000u; // 800CE6A8
  c->r[4]=0u+0xDC910000u; // 800CE6AC
  c->r[3]=0u+0x41E90000u; // 800CE6B0
  c->r[7]=c->r[7]+0xFFFF93A4u; // 800CE6B4
  c->r[0]=c->r[3]+0x000005DCu; // 800CE6B8
  c->r[6]=c->r[6]+0xFFFFCFCCu; // 800CE6BC
  c->r[4]=c->r[4]+0x000066B3u; // 800CE6C0
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CE6C4
  c->r[3]=c->r[31]|c->r[31]; // 800CE6C8
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CE6CC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CE6D0
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CE6D4
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CE6D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CE6DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE6E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE6E4
  c->lr=c->r[0]; // 800CE6E8
  c->r[1]=c->r[1]+0x00000010u; // 800CE6EC
  return; // 800CE6F0
}

// fn_800CE6F4
void f_800CE6F4(Ctx* __restrict c) {
  trace_call(0x800CE6F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE6F4
  c->r[0]=c->lr; // 800CE6F8
  cmps(c,0,(int32_t)c->r[4],0); // 800CE6FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE700
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE704
  c->r[30]=c->r[3]|c->r[3]; // 800CE708
  c->r[31]=c->r[4]|c->r[4]; // 800CE70C
  if (crb(c,2)) { goto L_800CE764; } // 800CE710
  c->r[3]=c->r[31]|c->r[31]; // 800CE714
  c->lr=0x800CE71Cu; f_80244520(c); // 800CE718
  c->r[7]=c->r[3]|c->r[3]; // 800CE71C
  c->r[9]=c->r[31]|c->r[31]; // 800CE720
  c->r[3]=0u+0x000000C0u; // 800CE724
  c->r[4]=c->r[13]+0xFFFFB298u; // 800CE728
  c->r[5]=0u+0x00000000u; // 800CE72C
  c->r[6]=0u+0x00002001u; // 800CE730
  c->r[8]=0u+0x00000000u; // 800CE734
  c->lr=0x800CE73Cu; f_80242DF0(c); // 800CE738
  c->r[4]=c->r[3]|c->r[3]; // 800CE73C
  c->r[3]=0u+0x000000C0u; // 800CE740
  c->r[5]=c->r[13]+0xFFFFB29Du; // 800CE744
  c->r[6]=0u+0x00000000u; // 800CE748
  c->r[7]=0u+0x00001001u; // 800CE74C
  c->lr=0x800CE754u; f_80244DB0(c); // 800CE750
  cmps(c,0,(int32_t)c->r[3],0); // 800CE754
  if (crb(c,2)) { goto L_800CE784; } // 800CE758
  c->lr=0x800CE760u; f_800CE688(c); // 800CE75C
  goto L_800CE784; // 800CE760
L_800CE764:;
  c->r[3]=0u+0x000000C0u; // 800CE764
  c->r[4]=c->r[13]+0xFFFFB2A2u; // 800CE768
  c->r[5]=0u+0x00000000u; // 800CE76C
  c->r[6]=0u+0x00001001u; // 800CE770
  c->lr=0x800CE778u; f_80244D20(c); // 800CE774
  cmps(c,0,(int32_t)c->r[3],0); // 800CE778
  if (crb(c,2)) { goto L_800CE784; } // 800CE77C
  c->lr=0x800CE784u; f_800CE688(c); // 800CE780
L_800CE784:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CE784
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CE788
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE78C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE790
  c->lr=c->r[0]; // 800CE794
  c->r[1]=c->r[1]+0x00000010u; // 800CE798
  return; // 800CE79C
}

// fn_800CE7A0
void f_800CE7A0(Ctx* __restrict c) {
  trace_call(0x800CE7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE7A0
  c->r[0]=c->lr; // 800CE7A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE7A8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE7AC
  c->r[29]=c->r[3]|c->r[3]; // 800CE7B0
  c->r[30]=c->r[4]|c->r[4]; // 800CE7B4
  c->lr=0x800CE7BCu; f_800CD9DC(c); // 800CE7B8
  c->r[31]=c->r[3]|c->r[3]; // 800CE7BC
  c->r[3]=c->r[30]|c->r[30]; // 800CE7C0
  c->lr=0x800CE7C8u; f_8030C0A0(c); // 800CE7C4
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800CE7C8
  c->r[3]=c->r[30]|c->r[30]; // 800CE7CC
  c->lr=0x800CE7D4u; f_8030C0A0(c); // 800CE7D0
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800CE7D4
  c->r[3]=c->r[30]|c->r[30]; // 800CE7D8
  c->lr=0x800CE7E0u; f_8030BD1C(c); // 800CE7DC
  W32(c->r[29]+0x000000B8u,c->r[3]); // 800CE7E0
  c->r[3]=c->r[30]|c->r[30]; // 800CE7E4
  c->lr=0x800CE7ECu; f_8030BD1C(c); // 800CE7E8
  W32(c->r[29]+0x000000BCu,c->r[3]); // 800CE7EC
  c->r[3]=c->r[31]|c->r[31]; // 800CE7F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE7F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE7F8
  c->lr=c->r[0]; // 800CE7FC
  c->r[1]=c->r[1]+0x00000020u; // 800CE800
  return; // 800CE804
}

// fn_800CE808
void f_800CE808(Ctx* __restrict c) {
  trace_call(0x800CE808u);
  return; // 800CE808
}

// fn_800CE80C
void f_800CE80C(Ctx* __restrict c) {
  trace_call(0x800CE80Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 800CE80C
  if (!crb(c,2)) return; // 800CE810
  f_800CD3B4(c); return; // 800CE814
  return; // 800CE818
}

// fn_800CE81C
void f_800CE81C(Ctx* __restrict c) {
  trace_call(0x800CE81Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE81C
  c->r[0]=c->lr; // 800CE820
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE824
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE828
  c->r[31]=c->r[3]|c->r[3]; // 800CE82C
  c->lr=0x800CE834u; f_800CDA64(c); // 800CE830
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE834
  c->r[3]=0u+0x00000001u; // 800CE838
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE83C
  c->r[0]=0u+0x00000000u; // 800CE840
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 800CE844
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CE848
  W32(c->r[31]+0x000000B8u,c->r[3]); // 800CE84C
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800CE850
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE854
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE858
  c->lr=c->r[0]; // 800CE85C
  c->r[1]=c->r[1]+0x00000010u; // 800CE860
  return; // 800CE864
}

// fn_800CE868
void f_800CE868(Ctx* __restrict c) {
  trace_call(0x800CE868u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE868
  c->r[0]=c->lr; // 800CE86C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE870
  c->r[11]=c->r[1]+0x00000020u; // 800CE874
  c->lr=0x800CE87Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE878
  c->r[29]=c->r[3]|c->r[3]; // 800CE87C
  c->r[30]=c->r[4]|c->r[4]; // 800CE880
  c->r[31]=c->r[5]|c->r[5]; // 800CE884
  c->r[6]=0u+0x00000000u; // 800CE888
  c->lr=0x800CE890u; f_800CDAB0(c); // 800CE88C
  cmps(c,0,(int32_t)c->r[31],0); // 800CE890
  if (crb(c,2)) { goto L_800CE89C; } // 800CE894
  goto L_800CE8A0; // 800CE898
L_800CE89C:;
  c->r[31]=c->r[29]|c->r[29]; // 800CE89C
L_800CE8A0:;
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE8A0
  c->r[11]=c->r[1]+0x00000020u; // 800CE8A4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800CE8A8
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE8AC
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CE8B0
  c->r[0]=R32(c->r[30]+0x000000B8u); // 800CE8B4
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800CE8B8
  c->r[0]=R32(c->r[30]+0x000000BCu); // 800CE8BC
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800CE8C0
  c->lr=0x800CE8C8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE8C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE8C8
  c->lr=c->r[0]; // 800CE8CC
  c->r[1]=c->r[1]+0x00000020u; // 800CE8D0
  return; // 800CE8D4
}

// fn_800CE8D8
void f_800CE8D8(Ctx* __restrict c) {
  trace_call(0x800CE8D8u);
  c->r[0]=c->r[4]+0x8ED10000u; // 800CE8D8
  cmpu(c,0,c->r[0],0x000004BDu); // 800CE8DC
  if (!crb(c,2)) { goto L_800CE8EC; } // 800CE8E0
  c->r[3]=0u+0x00000001u; // 800CE8E4
  return; // 800CE8E8
L_800CE8EC:;
  c->r[0]=c->r[4]+0xAEA00000u; // 800CE8EC
  cmpu(c,0,c->r[0],0x0000A187u); // 800CE8F0
  if (!crb(c,2)) { goto L_800CE900; } // 800CE8F4
  c->r[3]=0u+0x00000001u; // 800CE8F8
  return; // 800CE8FC
L_800CE900:;
  c->r[3]=0u+0x1E2D0000u; // 800CE900
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CE904
  c->r[0]=c->r[4]-c->r[0]; // 800CE908
  c->r[0]=cntlz(c->r[0]); // 800CE90C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CE910
  return; // 800CE914
}

// fn_800CE918
void f_800CE918(Ctx* __restrict c) {
  trace_call(0x800CE918u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE918
  c->r[0]=c->lr; // 800CE91C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CE920
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CE924
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CE928
  c->r[11]=c->r[1]+0x00000020u; // 800CE92C
  c->lr=0x800CE934u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE930
  c->f[31]=c->f[1]; // 800CE934
  c->r[29]=c->r[3]|c->r[3]; // 800CE938
  c->r[31]=c->r[4]|c->r[4]; // 800CE93C
  c->r[30]=c->r[5]|c->r[5]; // 800CE940
  c->lr=0x800CE948u; f_800CDB54(c); // 800CE944
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE948
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE94C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CE950
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE954
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CE958
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CE95C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CE960
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 800CE964
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE968
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE96C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CE970
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CE974
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CE978
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[0]);} // 800CE97C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CE980
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CE984
  c->r[11]=c->r[1]+0x00000020u; // 800CE988
  c->lr=0x800CE990u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE98C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE990
  c->lr=c->r[0]; // 800CE994
  c->r[1]=c->r[1]+0x00000030u; // 800CE998
  return; // 800CE99C
}

// fn_800CE9A0
void f_800CE9A0(Ctx* __restrict c) {
  trace_call(0x800CE9A0u);
  c->r[3]=0u+0x000000C0u; // 800CE9A0
  return; // 800CE9A4
}

// fn_800CE9A8
void f_800CE9A8(Ctx* __restrict c) {
  trace_call(0x800CE9A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE9A8
  c->r[0]=c->lr; // 800CE9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE9B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE9B4
  c->r[31]=c->r[3]|c->r[3]; // 800CE9B8
  c->lr=0x800CE9C0u; f_800CE688(c); // 800CE9BC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CE9C0
  c->r[3]=0u+0x80420000u; // 800CE9C4
  c->r[3]=c->r[3]+0xFFFF9364u; // 800CE9C8
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CE9CC
  c->r[0]=c->r[0]|0x80000000u; // 800CE9D0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CE9D4
  c->r[3]=c->r[31]|c->r[31]; // 800CE9D8
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CE9DC
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CE9E0
  c->ctr=c->r[12]; // 800CE9E4
  if (true) { c->lr=0x800CE9ECu; dispatch(c,c->ctr); } // 800CE9E8
  c->r[3]=c->r[31]|c->r[31]; // 800CE9EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE9F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE9F4
  c->lr=c->r[0]; // 800CE9F8
  c->r[1]=c->r[1]+0x00000010u; // 800CE9FC
  return; // 800CEA00
}

// fn_800CEA04
void f_800CEA04(Ctx* __restrict c) {
  trace_call(0x800CEA04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEA04
  c->r[0]=c->lr; // 800CEA08
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEA10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CEA14
  c->r[30]=c->r[3]|c->r[3]; // 800CEA18
  c->r[31]=c->r[4]|c->r[4]; // 800CEA1C
  if (crb(c,2)) { goto L_800CEA40; } // 800CEA20
  if (crb(c,2)) { goto L_800CEA30; } // 800CEA24
  c->r[4]=0u+0x00000000u; // 800CEA28
  c->lr=0x800CEA30u; f_800CD7C4(c); // 800CEA2C
L_800CEA30:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CEA30
  if (!crb(c,1)) { goto L_800CEA40; } // 800CEA34
  c->r[3]=c->r[30]|c->r[30]; // 800CEA38
  c->lr=0x800CEA40u; f_80244DC0(c); // 800CEA3C
L_800CEA40:;
  c->r[3]=c->r[30]|c->r[30]; // 800CEA40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CEA44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEA48
  c->lr=c->r[0]; // 800CEA4C
  c->r[1]=c->r[1]+0x00000010u; // 800CEA50
  return; // 800CEA54
}

// fn_800CEA58
void f_800CEA58(Ctx* __restrict c) {
  trace_call(0x800CEA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEA58
  c->r[0]=c->lr; // 800CEA5C
  c->r[3]=0u+0x000000C0u; // 800CEA60
  c->r[4]=c->r[13]+0xFFFFB2A7u; // 800CEA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEA68
  c->r[5]=0u+0x00000000u; // 800CEA6C
  c->r[6]=0u+0x00001001u; // 800CEA70
  c->lr=0x800CEA78u; f_80244D20(c); // 800CEA74
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA78
  if (crb(c,2)) { goto L_800CEA84; } // 800CEA7C
  c->lr=0x800CEA84u; f_800CE9A8(c); // 800CEA80
L_800CEA84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEA84
  c->lr=c->r[0]; // 800CEA88
  c->r[1]=c->r[1]+0x00000010u; // 800CEA8C
  return; // 800CEA90
}

// fn_800CEA94
void f_800CEA94(Ctx* __restrict c) {
  trace_call(0x800CEA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEA94
  c->r[0]=c->lr; // 800CEA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEA9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEAA0
  c->r[31]=c->r[3]|c->r[3]; // 800CEAA4
  c->lr=0x800CEAACu; f_80244520(c); // 800CEAA8
  c->r[7]=c->r[3]|c->r[3]; // 800CEAAC
  c->r[9]=c->r[31]|c->r[31]; // 800CEAB0
  c->r[3]=0u+0x000000C0u; // 800CEAB4
  c->r[4]=c->r[13]+0xFFFFB2ACu; // 800CEAB8
  c->r[5]=0u+0x00000000u; // 800CEABC
  c->r[6]=0u+0x00002001u; // 800CEAC0
  c->r[8]=0u+0x00000000u; // 800CEAC4
  c->lr=0x800CEACCu; f_80242DF0(c); // 800CEAC8
  c->r[4]=c->r[3]|c->r[3]; // 800CEACC
  c->r[3]=0u+0x000000C0u; // 800CEAD0
  c->r[5]=c->r[13]+0xFFFFB2B1u; // 800CEAD4
  c->r[6]=0u+0x00000000u; // 800CEAD8
  c->r[7]=0u+0x00001001u; // 800CEADC
  c->lr=0x800CEAE4u; f_80244DB0(c); // 800CEAE0
  cmps(c,0,(int32_t)c->r[3],0); // 800CEAE4
  if (crb(c,2)) { goto L_800CEAF0; } // 800CEAE8
  c->lr=0x800CEAF0u; f_800CE9A8(c); // 800CEAEC
L_800CEAF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEAF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEAF4
  c->lr=c->r[0]; // 800CEAF8
  c->r[1]=c->r[1]+0x00000010u; // 800CEAFC
  return; // 800CEB00
}

// fn_800CEB04
void f_800CEB04(Ctx* __restrict c) {
  trace_call(0x800CEB04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEB04
  c->r[0]=c->lr; // 800CEB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEB0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEB10
  c->r[31]=c->r[3]|c->r[3]; // 800CEB14
  c->lr=0x800CEB1Cu; f_800CD8C4(c); // 800CEB18
  c->r[7]=0u+0x80420000u; // 800CEB1C
  c->r[6]=0u+0x80410000u; // 800CEB20
  c->r[5]=0u+0x00000000u; // 800CEB24
  c->r[4]=0u+0x1C7E0000u; // 800CEB28
  c->r[3]=0u+0x51E20000u; // 800CEB2C
  c->r[7]=c->r[7]+0xFFFF9328u; // 800CEB30
  c->r[0]=c->r[3]+0xFFFFB1B5u; // 800CEB34
  c->r[6]=c->r[6]+0xFFFFCFE2u; // 800CEB38
  c->r[4]=c->r[4]+0x0000026Fu; // 800CEB3C
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CEB40
  c->r[3]=c->r[31]|c->r[31]; // 800CEB44
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CEB48
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CEB4C
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CEB50
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CEB54
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CEB58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEB5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEB60
  c->lr=c->r[0]; // 800CEB64
  c->r[1]=c->r[1]+0x00000010u; // 800CEB68
  return; // 800CEB6C
}

// fn_800CEB70
void f_800CEB70(Ctx* __restrict c) {
  trace_call(0x800CEB70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEB70
  c->r[0]=c->lr; // 800CEB74
  cmps(c,0,(int32_t)c->r[4],0); // 800CEB78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEB7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CEB80
  c->r[30]=c->r[3]|c->r[3]; // 800CEB84
  c->r[31]=c->r[4]|c->r[4]; // 800CEB88
  if (crb(c,2)) { goto L_800CEBE0; } // 800CEB8C
  c->r[3]=c->r[31]|c->r[31]; // 800CEB90
  c->lr=0x800CEB98u; f_80244520(c); // 800CEB94
  c->r[7]=c->r[3]|c->r[3]; // 800CEB98
  c->r[9]=c->r[31]|c->r[31]; // 800CEB9C
  c->r[3]=0u+0x000000C0u; // 800CEBA0
  c->r[4]=c->r[13]+0xFFFFB2B6u; // 800CEBA4
  c->r[5]=0u+0x00000000u; // 800CEBA8
  c->r[6]=0u+0x00002001u; // 800CEBAC
  c->r[8]=0u+0x00000000u; // 800CEBB0
  c->lr=0x800CEBB8u; f_80242DF0(c); // 800CEBB4
  c->r[4]=c->r[3]|c->r[3]; // 800CEBB8
  c->r[3]=0u+0x000000C0u; // 800CEBBC
  c->r[5]=c->r[13]+0xFFFFB2BBu; // 800CEBC0
  c->r[6]=0u+0x00000000u; // 800CEBC4
  c->r[7]=0u+0x00001001u; // 800CEBC8
  c->lr=0x800CEBD0u; f_80244DB0(c); // 800CEBCC
  cmps(c,0,(int32_t)c->r[3],0); // 800CEBD0
  if (crb(c,2)) { goto L_800CEC00; } // 800CEBD4
  c->lr=0x800CEBDCu; f_800CEB04(c); // 800CEBD8
  goto L_800CEC00; // 800CEBDC
L_800CEBE0:;
  c->r[3]=0u+0x000000C0u; // 800CEBE0
  c->r[4]=c->r[13]+0xFFFFB2C0u; // 800CEBE4
  c->r[5]=0u+0x00000000u; // 800CEBE8
  c->r[6]=0u+0x00001001u; // 800CEBEC
  c->lr=0x800CEBF4u; f_80244D20(c); // 800CEBF0
  cmps(c,0,(int32_t)c->r[3],0); // 800CEBF4
  if (crb(c,2)) { goto L_800CEC00; } // 800CEBF8
  c->lr=0x800CEC00u; f_800CEB04(c); // 800CEBFC
L_800CEC00:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CEC00
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CEC04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CEC08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEC0C
  c->lr=c->r[0]; // 800CEC10
  c->r[1]=c->r[1]+0x00000010u; // 800CEC14
  return; // 800CEC18
}

// fn_800CEC1C
void f_800CEC1C(Ctx* __restrict c) {
  trace_call(0x800CEC1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEC1C
  c->r[0]=c->lr; // 800CEC20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CEC24
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CEC28
  c->r[29]=c->r[3]|c->r[3]; // 800CEC2C
  c->r[30]=c->r[4]|c->r[4]; // 800CEC30
  c->lr=0x800CEC38u; f_800CD9DC(c); // 800CEC34
  c->r[31]=c->r[3]|c->r[3]; // 800CEC38
  c->r[3]=c->r[30]|c->r[30]; // 800CEC3C
  c->lr=0x800CEC44u; f_8030C0A0(c); // 800CEC40
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800CEC44
  c->r[3]=c->r[30]|c->r[30]; // 800CEC48
  c->lr=0x800CEC50u; f_8030C0A0(c); // 800CEC4C
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800CEC50
  c->r[3]=c->r[30]|c->r[30]; // 800CEC54
  c->lr=0x800CEC5Cu; f_8030BD1C(c); // 800CEC58
  W32(c->r[29]+0x000000B8u,c->r[3]); // 800CEC5C
  c->r[3]=c->r[30]|c->r[30]; // 800CEC60
  c->lr=0x800CEC68u; f_8030BD1C(c); // 800CEC64
  W32(c->r[29]+0x000000BCu,c->r[3]); // 800CEC68
  c->r[3]=c->r[31]|c->r[31]; // 800CEC6C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CEC70
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CEC74
  c->lr=c->r[0]; // 800CEC78
  c->r[1]=c->r[1]+0x00000020u; // 800CEC7C
  return; // 800CEC80
}

// fn_800CEC84
void f_800CEC84(Ctx* __restrict c) {
  trace_call(0x800CEC84u);
  return; // 800CEC84
}

// fn_800CEC88
void f_800CEC88(Ctx* __restrict c) {
  trace_call(0x800CEC88u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CEC88
  if (!crb(c,2)) return; // 800CEC8C
  f_800CD3B4(c); return; // 800CEC90
  return; // 800CEC94
}

// fn_800CEC98
void f_800CEC98(Ctx* __restrict c) {
  trace_call(0x800CEC98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEC98
  c->r[0]=c->lr; // 800CEC9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CECA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CECA4
  c->r[31]=c->r[3]|c->r[3]; // 800CECA8
  c->lr=0x800CECB0u; f_800CDA64(c); // 800CECAC
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CECB0
  c->r[3]=0u+0x00000001u; // 800CECB4
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CECB8
  c->r[0]=0u+0x00000000u; // 800CECBC
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 800CECC0
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CECC4
  W32(c->r[31]+0x000000B8u,c->r[3]); // 800CECC8
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800CECCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CECD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CECD4
  c->lr=c->r[0]; // 800CECD8
  c->r[1]=c->r[1]+0x00000010u; // 800CECDC
  return; // 800CECE0
}

// fn_800CECE4
void f_800CECE4(Ctx* __restrict c) {
  trace_call(0x800CECE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CECE4
  c->r[0]=c->lr; // 800CECE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CECEC
  c->r[11]=c->r[1]+0x00000020u; // 800CECF0
  c->lr=0x800CECF8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CECF4
  c->r[29]=c->r[3]|c->r[3]; // 800CECF8
  c->r[30]=c->r[4]|c->r[4]; // 800CECFC
  c->r[31]=c->r[5]|c->r[5]; // 800CED00
  c->r[6]=0u+0x00000000u; // 800CED04
  c->lr=0x800CED0Cu; f_800CDAB0(c); // 800CED08
  cmps(c,0,(int32_t)c->r[31],0); // 800CED0C
  if (crb(c,2)) { goto L_800CED18; } // 800CED10
  goto L_800CED1C; // 800CED14
L_800CED18:;
  c->r[31]=c->r[29]|c->r[29]; // 800CED18
L_800CED1C:;
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED1C
  c->r[11]=c->r[1]+0x00000020u; // 800CED20
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800CED24
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CED28
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CED2C
  c->r[0]=R32(c->r[30]+0x000000B8u); // 800CED30
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800CED34
  c->r[0]=R32(c->r[30]+0x000000BCu); // 800CED38
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800CED3C
  c->lr=0x800CED44u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CED40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CED44
  c->lr=c->r[0]; // 800CED48
  c->r[1]=c->r[1]+0x00000020u; // 800CED4C
  return; // 800CED50
}

// fn_800CED54
void f_800CED54(Ctx* __restrict c) {
  trace_call(0x800CED54u);
  c->r[0]=c->r[4]+0x8ED10000u; // 800CED54
  cmpu(c,0,c->r[0],0x000004BDu); // 800CED58
  if (!crb(c,2)) { goto L_800CED68; } // 800CED5C
  c->r[3]=0u+0x00000001u; // 800CED60
  return; // 800CED64
L_800CED68:;
  c->r[0]=c->r[4]+0xAEA00000u; // 800CED68
  cmpu(c,0,c->r[0],0x0000A187u); // 800CED6C
  if (!crb(c,2)) { goto L_800CED7C; } // 800CED70
  c->r[3]=0u+0x00000001u; // 800CED74
  return; // 800CED78
L_800CED7C:;
  c->r[3]=0u+0x1E2D0000u; // 800CED7C
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CED80
  c->r[0]=c->r[4]-c->r[0]; // 800CED84
  c->r[0]=cntlz(c->r[0]); // 800CED88
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CED8C
  return; // 800CED90
}

// fn_800CED94
void f_800CED94(Ctx* __restrict c) {
  trace_call(0x800CED94u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CED94
  c->r[0]=c->lr; // 800CED98
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CED9C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CEDA0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CEDA4
  c->r[11]=c->r[1]+0x00000020u; // 800CEDA8
  c->lr=0x800CEDB0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CEDAC
  c->f[31]=c->f[1]; // 800CEDB0
  c->r[29]=c->r[3]|c->r[3]; // 800CEDB4
  c->r[31]=c->r[4]|c->r[4]; // 800CEDB8
  c->r[30]=c->r[5]|c->r[5]; // 800CEDBC
  c->lr=0x800CEDC4u; f_800CDB54(c); // 800CEDC0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEDC4
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDC8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CEDCC
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEDD0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CEDD4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CEDD8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CEDDC
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 800CEDE0
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEDE4
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDE8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CEDEC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CEDF0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CEDF4
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[0]);} // 800CEDF8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CEDFC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CEE00
  c->r[11]=c->r[1]+0x00000020u; // 800CEE04
  c->lr=0x800CEE0Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CEE08
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CEE0C
  c->lr=c->r[0]; // 800CEE10
  c->r[1]=c->r[1]+0x00000030u; // 800CEE14
  return; // 800CEE18
}

// fn_800CEE1C
void f_800CEE1C(Ctx* __restrict c) {
  trace_call(0x800CEE1Cu);
  c->r[3]=0u+0x000000C0u; // 800CEE1C
  return; // 800CEE20
}

// fn_800CEE24
void f_800CEE24(Ctx* __restrict c) {
  trace_call(0x800CEE24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEE24
  c->r[0]=c->lr; // 800CEE28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEE2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEE30
  c->r[31]=c->r[3]|c->r[3]; // 800CEE34
  c->lr=0x800CEE3Cu; f_800CEB04(c); // 800CEE38
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CEE3C
  c->r[3]=0u+0x80420000u; // 800CEE40
  c->r[3]=c->r[3]+0xFFFF92E8u; // 800CEE44
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CEE48
  c->r[0]=c->r[0]|0x80000000u; // 800CEE4C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CEE50
  c->r[3]=c->r[31]|c->r[31]; // 800CEE54
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CEE58
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CEE5C
  c->ctr=c->r[12]; // 800CEE60
  if (true) { c->lr=0x800CEE68u; dispatch(c,c->ctr); } // 800CEE64
  c->r[3]=c->r[31]|c->r[31]; // 800CEE68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEE6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEE70
  c->lr=c->r[0]; // 800CEE74
  c->r[1]=c->r[1]+0x00000010u; // 800CEE78
  return; // 800CEE7C
}

// fn_800CEE80
void f_800CEE80(Ctx* __restrict c) {
  trace_call(0x800CEE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEE80
  c->r[0]=c->lr; // 800CEE84
  cmps(c,0,(int32_t)c->r[3],0); // 800CEE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEE8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CEE90
  c->r[30]=c->r[3]|c->r[3]; // 800CEE94
  c->r[31]=c->r[4]|c->r[4]; // 800CEE98
  if (crb(c,2)) { goto L_800CEEBC; } // 800CEE9C
  if (crb(c,2)) { goto L_800CEEAC; } // 800CEEA0
  c->r[4]=0u+0x00000000u; // 800CEEA4
  c->lr=0x800CEEACu; f_800CD7C4(c); // 800CEEA8
L_800CEEAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CEEAC
  if (!crb(c,1)) { goto L_800CEEBC; } // 800CEEB0
  c->r[3]=c->r[30]|c->r[30]; // 800CEEB4
  c->lr=0x800CEEBCu; f_80244DC0(c); // 800CEEB8
L_800CEEBC:;
  c->r[3]=c->r[30]|c->r[30]; // 800CEEBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CEEC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEEC4
  c->lr=c->r[0]; // 800CEEC8
  c->r[1]=c->r[1]+0x00000010u; // 800CEECC
  return; // 800CEED0
}

// fn_800CEED4
void f_800CEED4(Ctx* __restrict c) {
  trace_call(0x800CEED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEED4
  c->r[0]=c->lr; // 800CEED8
  c->r[3]=0u+0x000000C0u; // 800CEEDC
  c->r[4]=c->r[13]+0xFFFFB2C5u; // 800CEEE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEEE4
  c->r[5]=0u+0x00000000u; // 800CEEE8
  c->r[6]=0u+0x00001001u; // 800CEEEC
  c->lr=0x800CEEF4u; f_80244D20(c); // 800CEEF0
  cmps(c,0,(int32_t)c->r[3],0); // 800CEEF4
  if (crb(c,2)) { goto L_800CEF00; } // 800CEEF8
  c->lr=0x800CEF00u; f_800CEE24(c); // 800CEEFC
L_800CEF00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEF00
  c->lr=c->r[0]; // 800CEF04
  c->r[1]=c->r[1]+0x00000010u; // 800CEF08
  return; // 800CEF0C
}

// fn_800CEF10
void f_800CEF10(Ctx* __restrict c) {
  trace_call(0x800CEF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEF10
  c->r[0]=c->lr; // 800CEF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEF18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEF1C
  c->r[31]=c->r[3]|c->r[3]; // 800CEF20
  c->lr=0x800CEF28u; f_80244520(c); // 800CEF24
  c->r[7]=c->r[3]|c->r[3]; // 800CEF28
  c->r[9]=c->r[31]|c->r[31]; // 800CEF2C
  c->r[3]=0u+0x000000C0u; // 800CEF30
  c->r[4]=c->r[13]+0xFFFFB2CAu; // 800CEF34
  c->r[5]=0u+0x00000000u; // 800CEF38
  c->r[6]=0u+0x00002001u; // 800CEF3C
  c->r[8]=0u+0x00000000u; // 800CEF40
  c->lr=0x800CEF48u; f_80242DF0(c); // 800CEF44
  c->r[4]=c->r[3]|c->r[3]; // 800CEF48
  c->r[3]=0u+0x000000C0u; // 800CEF4C
  c->r[5]=c->r[13]+0xFFFFB2CFu; // 800CEF50
  c->r[6]=0u+0x00000000u; // 800CEF54
  c->r[7]=0u+0x00001001u; // 800CEF58
  c->lr=0x800CEF60u; f_80244DB0(c); // 800CEF5C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEF60
  if (crb(c,2)) { goto L_800CEF6C; } // 800CEF64
  c->lr=0x800CEF6Cu; f_800CEE24(c); // 800CEF68
L_800CEF6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEF6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEF70
  c->lr=c->r[0]; // 800CEF74
  c->r[1]=c->r[1]+0x00000010u; // 800CEF78
  return; // 800CEF7C
}

// fn_800CEF80
void f_800CEF80(Ctx* __restrict c) {
  trace_call(0x800CEF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEF80
  c->r[0]=c->lr; // 800CEF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CEF8C
  c->r[31]=c->r[3]|c->r[3]; // 800CEF90
  c->lr=0x800CEF98u; f_800CD8C4(c); // 800CEF94
  c->r[7]=0u+0x80420000u; // 800CEF98
  c->r[6]=0u+0x80410000u; // 800CEF9C
  c->r[5]=0u+0x00000000u; // 800CEFA0
  c->r[4]=0u+0x8EC70000u; // 800CEFA4
  c->r[3]=0u+0x49710000u; // 800CEFA8
  c->r[7]=c->r[7]+0xFFFF92ACu; // 800CEFAC
  c->r[0]=c->r[3]+0x00007ADBu; // 800CEFB0
  c->r[6]=c->r[6]+0xFFFFCFFCu; // 800CEFB4
  c->r[4]=c->r[4]+0xFFFFF1F9u; // 800CEFB8
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CEFBC
  c->r[3]=c->r[31]|c->r[31]; // 800CEFC0
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CEFC4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CEFC8
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CEFCC
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CEFD0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CEFD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEFD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEFDC
  c->lr=c->r[0]; // 800CEFE0
  c->r[1]=c->r[1]+0x00000010u; // 800CEFE4
  return; // 800CEFE8
}

// fn_800CEFEC
void f_800CEFEC(Ctx* __restrict c) {
  trace_call(0x800CEFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEFEC
  c->r[0]=c->lr; // 800CEFF0
  cmps(c,0,(int32_t)c->r[4],0); // 800CEFF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEFF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CEFFC
  c->r[30]=c->r[3]|c->r[3]; // 800CF000
  c->r[31]=c->r[4]|c->r[4]; // 800CF004
  if (crb(c,2)) { goto L_800CF05C; } // 800CF008
  c->r[3]=c->r[31]|c->r[31]; // 800CF00C
  c->lr=0x800CF014u; f_80244520(c); // 800CF010
  c->r[7]=c->r[3]|c->r[3]; // 800CF014
  c->r[9]=c->r[31]|c->r[31]; // 800CF018
  c->r[3]=0u+0x000000B0u; // 800CF01C
  c->r[4]=c->r[13]+0xFFFFB2D4u; // 800CF020
  c->r[5]=0u+0x00000000u; // 800CF024
  c->r[6]=0u+0x00002001u; // 800CF028
  c->r[8]=0u+0x00000000u; // 800CF02C
  c->lr=0x800CF034u; f_80242DF0(c); // 800CF030
  c->r[4]=c->r[3]|c->r[3]; // 800CF034
  c->r[3]=0u+0x000000B0u; // 800CF038
  c->r[5]=c->r[13]+0xFFFFB2D9u; // 800CF03C
  c->r[6]=0u+0x00000000u; // 800CF040
  c->r[7]=0u+0x00001001u; // 800CF044
  c->lr=0x800CF04Cu; f_80244DB0(c); // 800CF048
  cmps(c,0,(int32_t)c->r[3],0); // 800CF04C
  if (crb(c,2)) { goto L_800CF07C; } // 800CF050
  c->lr=0x800CF058u; f_800CEF80(c); // 800CF054
  goto L_800CF07C; // 800CF058
L_800CF05C:;
  c->r[3]=0u+0x000000B0u; // 800CF05C
  c->r[4]=c->r[13]+0xFFFFB2DEu; // 800CF060
  c->r[5]=0u+0x00000000u; // 800CF064
  c->r[6]=0u+0x00001001u; // 800CF068
  c->lr=0x800CF070u; f_80244D20(c); // 800CF06C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF070
  if (crb(c,2)) { goto L_800CF07C; } // 800CF074
  c->lr=0x800CF07Cu; f_800CEF80(c); // 800CF078
L_800CF07C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CF07C
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CF080
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF084
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF088
  c->lr=c->r[0]; // 800CF08C
  c->r[1]=c->r[1]+0x00000010u; // 800CF090
  return; // 800CF094
}

// fn_800CF098
void f_800CF098(Ctx* __restrict c) {
  trace_call(0x800CF098u);
  f_800CD9DC(c); return; // 800CF098
}

// fn_800CF09C
void f_800CF09C(Ctx* __restrict c) {
  trace_call(0x800CF09Cu);
  return; // 800CF09C
}

// fn_800CF0A0
void f_800CF0A0(Ctx* __restrict c) {
  trace_call(0x800CF0A0u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CF0A0
  if (!crb(c,2)) return; // 800CF0A4
  f_800CD3B4(c); return; // 800CF0A8
  return; // 800CF0AC
}

// fn_800CF0B0
void f_800CF0B0(Ctx* __restrict c) {
  trace_call(0x800CF0B0u);
  f_800CDA64(c); return; // 800CF0B0
}

// fn_800CF0B4
void f_800CF0B4(Ctx* __restrict c) {
  trace_call(0x800CF0B4u);
  c->r[6]=0u+0x00000000u; // 800CF0B4
  f_800CDAB0(c); return; // 800CF0B8
}

// fn_800CF0BC
void f_800CF0BC(Ctx* __restrict c) {
  trace_call(0x800CF0BCu);
  c->r[0]=c->r[4]+0x8ED10000u; // 800CF0BC
  cmpu(c,0,c->r[0],0x000004BDu); // 800CF0C0
  if (!crb(c,2)) { goto L_800CF0D0; } // 800CF0C4
  c->r[3]=0u+0x00000001u; // 800CF0C8
  return; // 800CF0CC
L_800CF0D0:;
  c->r[0]=c->r[4]+0xAEA00000u; // 800CF0D0
  cmpu(c,0,c->r[0],0x0000A187u); // 800CF0D4
  if (!crb(c,2)) { goto L_800CF0E4; } // 800CF0D8
  c->r[3]=0u+0x00000001u; // 800CF0DC
  return; // 800CF0E0
L_800CF0E4:;
  c->r[3]=0u+0x1E2D0000u; // 800CF0E4
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CF0E8
  c->r[0]=c->r[4]-c->r[0]; // 800CF0EC
  c->r[0]=cntlz(c->r[0]); // 800CF0F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CF0F4
  return; // 800CF0F8
}

// fn_800CF0FC
void f_800CF0FC(Ctx* __restrict c) {
  trace_call(0x800CF0FCu);
  f_800CDB54(c); return; // 800CF0FC
}

// fn_800CF100
void f_800CF100(Ctx* __restrict c) {
  trace_call(0x800CF100u);
  c->r[3]=0u+0x000000B0u; // 800CF100
  return; // 800CF104
}

// fn_800CF108
void f_800CF108(Ctx* __restrict c) {
  trace_call(0x800CF108u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF108
  c->r[0]=c->lr; // 800CF10C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF114
  c->r[31]=c->r[3]|c->r[3]; // 800CF118
  c->lr=0x800CF120u; f_800CEF80(c); // 800CF11C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CF120
  c->r[3]=0u+0x80420000u; // 800CF124
  c->r[3]=c->r[3]+0xFFFF926Cu; // 800CF128
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CF12C
  c->r[0]=c->r[0]|0x80000000u; // 800CF130
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CF134
  c->r[3]=c->r[31]|c->r[31]; // 800CF138
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CF13C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CF140
  c->ctr=c->r[12]; // 800CF144
  if (true) { c->lr=0x800CF14Cu; dispatch(c,c->ctr); } // 800CF148
  c->r[3]=c->r[31]|c->r[31]; // 800CF14C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF150
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF154
  c->lr=c->r[0]; // 800CF158
  c->r[1]=c->r[1]+0x00000010u; // 800CF15C
  return; // 800CF160
}

// fn_800CF164
void f_800CF164(Ctx* __restrict c) {
  trace_call(0x800CF164u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF164
  c->r[0]=c->lr; // 800CF168
  cmps(c,0,(int32_t)c->r[3],0); // 800CF16C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF170
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF174
  c->r[30]=c->r[3]|c->r[3]; // 800CF178
  c->r[31]=c->r[4]|c->r[4]; // 800CF17C
  if (crb(c,2)) { goto L_800CF1A0; } // 800CF180
  if (crb(c,2)) { goto L_800CF190; } // 800CF184
  c->r[4]=0u+0x00000000u; // 800CF188
  c->lr=0x800CF190u; f_800CD7C4(c); // 800CF18C
L_800CF190:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CF190
  if (!crb(c,1)) { goto L_800CF1A0; } // 800CF194
  c->r[3]=c->r[30]|c->r[30]; // 800CF198
  c->lr=0x800CF1A0u; f_80244DC0(c); // 800CF19C
L_800CF1A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF1A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF1A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF1A8
  c->lr=c->r[0]; // 800CF1AC
  c->r[1]=c->r[1]+0x00000010u; // 800CF1B0
  return; // 800CF1B4
}

// fn_800CF1B8
void f_800CF1B8(Ctx* __restrict c) {
  trace_call(0x800CF1B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF1B8
  c->r[0]=c->lr; // 800CF1BC
  c->r[3]=0u+0x000000B0u; // 800CF1C0
  c->r[4]=c->r[13]+0xFFFFB2E3u; // 800CF1C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF1C8
  c->r[5]=0u+0x00000000u; // 800CF1CC
  c->r[6]=0u+0x00001001u; // 800CF1D0
  c->lr=0x800CF1D8u; f_80244D20(c); // 800CF1D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CF1D8
  if (crb(c,2)) { goto L_800CF1E4; } // 800CF1DC
  c->lr=0x800CF1E4u; f_800CF108(c); // 800CF1E0
L_800CF1E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF1E4
  c->lr=c->r[0]; // 800CF1E8
  c->r[1]=c->r[1]+0x00000010u; // 800CF1EC
  return; // 800CF1F0
}

// fn_800CF1F4
void f_800CF1F4(Ctx* __restrict c) {
  trace_call(0x800CF1F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF1F4
  c->r[0]=c->lr; // 800CF1F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF1FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF200
  c->r[31]=c->r[3]|c->r[3]; // 800CF204
  c->lr=0x800CF20Cu; f_80244520(c); // 800CF208
  c->r[7]=c->r[3]|c->r[3]; // 800CF20C
  c->r[9]=c->r[31]|c->r[31]; // 800CF210
  c->r[3]=0u+0x000000B0u; // 800CF214
  c->r[4]=c->r[13]+0xFFFFB2E8u; // 800CF218
  c->r[5]=0u+0x00000000u; // 800CF21C
  c->r[6]=0u+0x00002001u; // 800CF220
  c->r[8]=0u+0x00000000u; // 800CF224
  c->lr=0x800CF22Cu; f_80242DF0(c); // 800CF228
  c->r[4]=c->r[3]|c->r[3]; // 800CF22C
  c->r[3]=0u+0x000000B0u; // 800CF230
  c->r[5]=c->r[13]+0xFFFFB2EDu; // 800CF234
  c->r[6]=0u+0x00000000u; // 800CF238
  c->r[7]=0u+0x00001001u; // 800CF23C
  c->lr=0x800CF244u; f_80244DB0(c); // 800CF240
  cmps(c,0,(int32_t)c->r[3],0); // 800CF244
  if (crb(c,2)) { goto L_800CF250; } // 800CF248
  c->lr=0x800CF250u; f_800CF108(c); // 800CF24C
L_800CF250:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF250
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF254
  c->lr=c->r[0]; // 800CF258
  c->r[1]=c->r[1]+0x00000010u; // 800CF25C
  return; // 800CF260
}

// fn_800CF264
void f_800CF264(Ctx* __restrict c) {
  trace_call(0x800CF264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF264
  c->r[0]=c->lr; // 800CF268
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF26C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF270
  c->r[31]=c->r[3]|c->r[3]; // 800CF274
  c->lr=0x800CF27Cu; f_800CD8C4(c); // 800CF278
  c->r[7]=0u+0x80420000u; // 800CF27C
  c->r[6]=0u+0x80410000u; // 800CF280
  c->r[5]=0u+0x00000000u; // 800CF284
  c->r[4]=0u+0xB0EE0000u; // 800CF288
  c->r[3]=0u+0xA9FD0000u; // 800CF28C
  c->r[7]=c->r[7]+0xFFFF9230u; // 800CF290
  c->r[0]=c->r[3]+0x000037E5u; // 800CF294
  c->r[6]=c->r[6]+0xFFFFD012u; // 800CF298
  c->r[4]=c->r[4]+0xFFFFF0A0u; // 800CF29C
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CF2A0
  c->r[3]=c->r[31]|c->r[31]; // 800CF2A4
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF2A8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF2AC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CF2B0
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CF2B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CF2B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF2BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF2C0
  c->lr=c->r[0]; // 800CF2C4
  c->r[1]=c->r[1]+0x00000010u; // 800CF2C8
  return; // 800CF2CC
}

// fn_800CF2D0
void f_800CF2D0(Ctx* __restrict c) {
  trace_call(0x800CF2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF2D0
  c->r[0]=c->lr; // 800CF2D4
  cmps(c,0,(int32_t)c->r[4],0); // 800CF2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF2DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF2E0
  c->r[30]=c->r[3]|c->r[3]; // 800CF2E4
  c->r[31]=c->r[4]|c->r[4]; // 800CF2E8
  if (crb(c,2)) { goto L_800CF340; } // 800CF2EC
  c->r[3]=c->r[31]|c->r[31]; // 800CF2F0
  c->lr=0x800CF2F8u; f_80244520(c); // 800CF2F4
  c->r[7]=c->r[3]|c->r[3]; // 800CF2F8
  c->r[9]=c->r[31]|c->r[31]; // 800CF2FC
  c->r[3]=0u+0x000000C8u; // 800CF300
  c->r[4]=c->r[13]+0xFFFFB2F2u; // 800CF304
  c->r[5]=0u+0x00000000u; // 800CF308
  c->r[6]=0u+0x00002001u; // 800CF30C
  c->r[8]=0u+0x00000000u; // 800CF310
  c->lr=0x800CF318u; f_80242DF0(c); // 800CF314
  c->r[4]=c->r[3]|c->r[3]; // 800CF318
  c->r[3]=0u+0x000000C8u; // 800CF31C
  c->r[5]=c->r[13]+0xFFFFB2F7u; // 800CF320
  c->r[6]=0u+0x00000000u; // 800CF324
  c->r[7]=0u+0x00001001u; // 800CF328
  c->lr=0x800CF330u; f_80244DB0(c); // 800CF32C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF330
  if (crb(c,2)) { goto L_800CF360; } // 800CF334
  c->lr=0x800CF33Cu; f_800CF264(c); // 800CF338
  goto L_800CF360; // 800CF33C
L_800CF340:;
  c->r[3]=0u+0x000000C8u; // 800CF340
  c->r[4]=c->r[13]+0xFFFFB2FCu; // 800CF344
  c->r[5]=0u+0x00000000u; // 800CF348
  c->r[6]=0u+0x00001001u; // 800CF34C
  c->lr=0x800CF354u; f_80244D20(c); // 800CF350
  cmps(c,0,(int32_t)c->r[3],0); // 800CF354
  if (crb(c,2)) { goto L_800CF360; } // 800CF358
  c->lr=0x800CF360u; f_800CF264(c); // 800CF35C
L_800CF360:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CF360
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CF364
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF368
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF36C
  c->lr=c->r[0]; // 800CF370
  c->r[1]=c->r[1]+0x00000010u; // 800CF374
  return; // 800CF378
}

// fn_800CF37C
void f_800CF37C(Ctx* __restrict c) {
  trace_call(0x800CF37Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF37C
  c->r[0]=c->lr; // 800CF380
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF384
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF388
  c->r[29]=c->r[3]|c->r[3]; // 800CF38C
  c->r[30]=c->r[4]|c->r[4]; // 800CF390
  c->lr=0x800CF398u; f_800CD9DC(c); // 800CF394
  c->r[31]=c->r[3]|c->r[3]; // 800CF398
  c->r[3]=c->r[30]|c->r[30]; // 800CF39C
  c->lr=0x800CF3A4u; f_8030C0A0(c); // 800CF3A0
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800CF3A4
  c->r[3]=c->r[30]|c->r[30]; // 800CF3A8
  c->lr=0x800CF3B0u; f_8030C0A0(c); // 800CF3AC
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800CF3B0
  c->r[3]=c->r[30]|c->r[30]; // 800CF3B4
  c->lr=0x800CF3BCu; f_8030C0A0(c); // 800CF3B8
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 800CF3BC
  c->r[3]=c->r[30]|c->r[30]; // 800CF3C0
  c->lr=0x800CF3C8u; f_8030BD1C(c); // 800CF3C4
  W8(c->r[29]+0x000000BCu,c->r[3]); // 800CF3C8
  c->r[3]=c->r[30]|c->r[30]; // 800CF3CC
  c->lr=0x800CF3D4u; f_8030C0A0(c); // 800CF3D0
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800CF3D4
  c->r[3]=c->r[30]|c->r[30]; // 800CF3D8
  c->lr=0x800CF3E0u; f_8030C0A0(c); // 800CF3DC
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 800CF3E0
  c->r[3]=c->r[31]|c->r[31]; // 800CF3E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF3E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF3EC
  c->lr=c->r[0]; // 800CF3F0
  c->r[1]=c->r[1]+0x00000020u; // 800CF3F4
  return; // 800CF3F8
}

// fn_800CF3FC
void f_800CF3FC(Ctx* __restrict c) {
  trace_call(0x800CF3FCu);
  return; // 800CF3FC
}

// fn_800CF400
void f_800CF400(Ctx* __restrict c) {
  trace_call(0x800CF400u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CF400
  if (!crb(c,2)) return; // 800CF404
  f_800CD3B4(c); return; // 800CF408
  return; // 800CF40C
}

// fn_800CF410
void f_800CF410(Ctx* __restrict c) {
  trace_call(0x800CF410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF410
  c->r[0]=c->lr; // 800CF414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF418
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF41C
  c->r[31]=c->r[3]|c->r[3]; // 800CF420
  c->lr=0x800CF428u; f_800CDA64(c); // 800CF424
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CF428
  c->r[0]=0u+0x00000000u; // 800CF42C
  {uint32_t ea=c->r[2]+0xFFFF8710u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF430
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF434
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[2]);} // 800CF438
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[1]);} // 800CF43C
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[2]);} // 800CF440
  W8(c->r[31]+0x000000BCu,c->r[0]); // 800CF444
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 800CF448
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 800CF44C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF450
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF454
  c->lr=c->r[0]; // 800CF458
  c->r[1]=c->r[1]+0x00000010u; // 800CF45C
  return; // 800CF460
}

// fn_800CF464
void f_800CF464(Ctx* __restrict c) {
  trace_call(0x800CF464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF464
  c->r[0]=c->lr; // 800CF468
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF46C
  c->r[11]=c->r[1]+0x00000020u; // 800CF470
  c->lr=0x800CF478u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CF474
  c->r[29]=c->r[3]|c->r[3]; // 800CF478
  c->r[30]=c->r[4]|c->r[4]; // 800CF47C
  c->r[31]=c->r[5]|c->r[5]; // 800CF480
  c->r[6]=0u+0x00000000u; // 800CF484
  c->lr=0x800CF48Cu; f_800CDAB0(c); // 800CF488
  cmps(c,0,(int32_t)c->r[31],0); // 800CF48C
  if (crb(c,2)) { goto L_800CF498; } // 800CF490
  goto L_800CF49C; // 800CF494
L_800CF498:;
  c->r[31]=c->r[29]|c->r[29]; // 800CF498
L_800CF49C:;
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF49C
  c->r[11]=c->r[1]+0x00000020u; // 800CF4A0
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800CF4A4
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF4A8
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800CF4AC
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF4B0
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 800CF4B4
  c->r[0]=R8(c->r[30]+0x000000BCu); // 800CF4B8
  W8(c->r[31]+0x000000BCu,c->r[0]); // 800CF4BC
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF4C0
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 800CF4C4
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF4C8
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 800CF4CC
  c->lr=0x800CF4D4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CF4D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF4D4
  c->lr=c->r[0]; // 800CF4D8
  c->r[1]=c->r[1]+0x00000020u; // 800CF4DC
  return; // 800CF4E0
}

// fn_800CF4E4
void f_800CF4E4(Ctx* __restrict c) {
  trace_call(0x800CF4E4u);
  c->r[0]=c->r[4]+0x8ED10000u; // 800CF4E4
  cmpu(c,0,c->r[0],0x000004BDu); // 800CF4E8
  if (!crb(c,2)) { goto L_800CF4F8; } // 800CF4EC
  c->r[3]=0u+0x00000001u; // 800CF4F0
  return; // 800CF4F4
L_800CF4F8:;
  c->r[0]=c->r[4]+0xAEA00000u; // 800CF4F8
  cmpu(c,0,c->r[0],0x0000A187u); // 800CF4FC
  if (!crb(c,2)) { goto L_800CF50C; } // 800CF500
  c->r[3]=0u+0x00000001u; // 800CF504
  return; // 800CF508
L_800CF50C:;
  c->r[3]=0u+0x1E2D0000u; // 800CF50C
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CF510
  c->r[0]=c->r[4]-c->r[0]; // 800CF514
  c->r[0]=cntlz(c->r[0]); // 800CF518
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CF51C
  return; // 800CF520
}

// fn_800CF524
void f_800CF524(Ctx* __restrict c) {
  trace_call(0x800CF524u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF524
  c->r[0]=c->lr; // 800CF528
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CF52C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CF530
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CF534
  c->r[11]=c->r[1]+0x00000020u; // 800CF538
  c->lr=0x800CF540u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CF53C
  c->f[31]=c->f[1]; // 800CF540
  c->r[29]=c->r[3]|c->r[3]; // 800CF544
  c->r[31]=c->r[4]|c->r[4]; // 800CF548
  c->r[30]=c->r[5]|c->r[5]; // 800CF54C
  c->lr=0x800CF554u; f_800CDB54(c); // 800CF550
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF554
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF558
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CF55C
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF560
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CF564
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CF568
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CF56C
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 800CF570
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF574
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF578
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CF57C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CF580
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CF584
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[0]);} // 800CF588
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF58C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF590
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CF594
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CF598
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CF59C
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[0]);} // 800CF5A0
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF5A4
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF5A8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CF5AC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CF5B0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CF5B4
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[0]);} // 800CF5B8
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF5BC
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF5C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CF5C4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CF5C8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CF5CC
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[0]);} // 800CF5D0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CF5D4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CF5D8
  c->r[11]=c->r[1]+0x00000020u; // 800CF5DC
  c->lr=0x800CF5E4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CF5E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CF5E4
  c->lr=c->r[0]; // 800CF5E8
  c->r[1]=c->r[1]+0x00000030u; // 800CF5EC
  return; // 800CF5F0
}

// fn_800CF5F4
void f_800CF5F4(Ctx* __restrict c) {
  trace_call(0x800CF5F4u);
  c->r[3]=0u+0x000000C8u; // 800CF5F4
  return; // 800CF5F8
}

// fn_800CF5FC
void f_800CF5FC(Ctx* __restrict c) {
  trace_call(0x800CF5FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF5FC
  c->r[0]=c->lr; // 800CF600
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF604
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF608
  c->r[31]=c->r[3]|c->r[3]; // 800CF60C
  c->lr=0x800CF614u; f_800CF264(c); // 800CF610
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CF614
  c->r[3]=0u+0x80420000u; // 800CF618
  c->r[3]=c->r[3]+0xFFFF91F0u; // 800CF61C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CF620
  c->r[0]=c->r[0]|0x80000000u; // 800CF624
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CF628
  c->r[3]=c->r[31]|c->r[31]; // 800CF62C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CF630
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CF634
  c->ctr=c->r[12]; // 800CF638
  if (true) { c->lr=0x800CF640u; dispatch(c,c->ctr); } // 800CF63C
  c->r[3]=c->r[31]|c->r[31]; // 800CF640
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF644
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF648
  c->lr=c->r[0]; // 800CF64C
  c->r[1]=c->r[1]+0x00000010u; // 800CF650
  return; // 800CF654
}

// fn_800CF658
void f_800CF658(Ctx* __restrict c) {
  trace_call(0x800CF658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF658
  c->r[0]=c->lr; // 800CF65C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF668
  c->r[30]=c->r[3]|c->r[3]; // 800CF66C
  c->r[31]=c->r[4]|c->r[4]; // 800CF670
  if (crb(c,2)) { goto L_800CF694; } // 800CF674
  if (crb(c,2)) { goto L_800CF684; } // 800CF678
  c->r[4]=0u+0x00000000u; // 800CF67C
  c->lr=0x800CF684u; f_800CD7C4(c); // 800CF680
L_800CF684:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CF684
  if (!crb(c,1)) { goto L_800CF694; } // 800CF688
  c->r[3]=c->r[30]|c->r[30]; // 800CF68C
  c->lr=0x800CF694u; f_80244DC0(c); // 800CF690
L_800CF694:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF694
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF698
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF69C
  c->lr=c->r[0]; // 800CF6A0
  c->r[1]=c->r[1]+0x00000010u; // 800CF6A4
  return; // 800CF6A8
}

// fn_800CF6AC
void f_800CF6AC(Ctx* __restrict c) {
  trace_call(0x800CF6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF6AC
  c->r[0]=c->lr; // 800CF6B0
  c->r[3]=0u+0x000000C8u; // 800CF6B4
  c->r[4]=c->r[13]+0xFFFFB301u; // 800CF6B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF6BC
  c->r[5]=0u+0x00000000u; // 800CF6C0
  c->r[6]=0u+0x00001001u; // 800CF6C4
  c->lr=0x800CF6CCu; f_80244D20(c); // 800CF6C8
  cmps(c,0,(int32_t)c->r[3],0); // 800CF6CC
  if (crb(c,2)) { goto L_800CF6D8; } // 800CF6D0
  c->lr=0x800CF6D8u; f_800CF5FC(c); // 800CF6D4
L_800CF6D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF6D8
  c->lr=c->r[0]; // 800CF6DC
  c->r[1]=c->r[1]+0x00000010u; // 800CF6E0
  return; // 800CF6E4
}

// fn_800CF6E8
void f_800CF6E8(Ctx* __restrict c) {
  trace_call(0x800CF6E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF6E8
  c->r[0]=c->lr; // 800CF6EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF6F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF6F4
  c->r[31]=c->r[3]|c->r[3]; // 800CF6F8
  c->lr=0x800CF700u; f_80244520(c); // 800CF6FC
  c->r[7]=c->r[3]|c->r[3]; // 800CF700
  c->r[9]=c->r[31]|c->r[31]; // 800CF704
  c->r[3]=0u+0x000000C8u; // 800CF708
  c->r[4]=c->r[13]+0xFFFFB306u; // 800CF70C
  c->r[5]=0u+0x00000000u; // 800CF710
  c->r[6]=0u+0x00002001u; // 800CF714
  c->r[8]=0u+0x00000000u; // 800CF718
  c->lr=0x800CF720u; f_80242DF0(c); // 800CF71C
  c->r[4]=c->r[3]|c->r[3]; // 800CF720
  c->r[3]=0u+0x000000C8u; // 800CF724
  c->r[5]=c->r[13]+0xFFFFB30Bu; // 800CF728
  c->r[6]=0u+0x00000000u; // 800CF72C
  c->r[7]=0u+0x00001001u; // 800CF730
  c->lr=0x800CF738u; f_80244DB0(c); // 800CF734
  cmps(c,0,(int32_t)c->r[3],0); // 800CF738
  if (crb(c,2)) { goto L_800CF744; } // 800CF73C
  c->lr=0x800CF744u; f_800CF5FC(c); // 800CF740
L_800CF744:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF748
  c->lr=c->r[0]; // 800CF74C
  c->r[1]=c->r[1]+0x00000010u; // 800CF750
  return; // 800CF754
}

// fn_800CF758
void f_800CF758(Ctx* __restrict c) {
  trace_call(0x800CF758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF758
  c->r[0]=c->lr; // 800CF75C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF760
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF764
  c->r[31]=c->r[3]|c->r[3]; // 800CF768
  c->lr=0x800CF770u; f_800CD8C4(c); // 800CF76C
  c->r[7]=0u+0x80420000u; // 800CF770
  c->r[6]=0u+0x80410000u; // 800CF774
  c->r[5]=0u+0x00000000u; // 800CF778
  c->r[4]=0u+0xC0140000u; // 800CF77C
  c->r[3]=0u+0x54B30000u; // 800CF780
  c->r[7]=c->r[7]+0xFFFF91B4u; // 800CF784
  c->r[0]=c->r[3]+0x00000599u; // 800CF788
  c->r[6]=c->r[6]+0xFFFFD029u; // 800CF78C
  c->r[4]=c->r[4]+0xFFFF98D8u; // 800CF790
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CF794
  c->r[3]=c->r[31]|c->r[31]; // 800CF798
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CF79C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CF7A0
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CF7A4
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CF7A8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CF7AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF7B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF7B4
  c->lr=c->r[0]; // 800CF7B8
  c->r[1]=c->r[1]+0x00000010u; // 800CF7BC
  return; // 800CF7C0
}

// fn_800CF7C4
void f_800CF7C4(Ctx* __restrict c) {
  trace_call(0x800CF7C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF7C4
  c->r[0]=c->lr; // 800CF7C8
  cmps(c,0,(int32_t)c->r[4],0); // 800CF7CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF7D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF7D4
  c->r[30]=c->r[3]|c->r[3]; // 800CF7D8
  c->r[31]=c->r[4]|c->r[4]; // 800CF7DC
  if (crb(c,2)) { goto L_800CF834; } // 800CF7E0
  c->r[3]=c->r[31]|c->r[31]; // 800CF7E4
  c->lr=0x800CF7ECu; f_80244520(c); // 800CF7E8
  c->r[7]=c->r[3]|c->r[3]; // 800CF7EC
  c->r[9]=c->r[31]|c->r[31]; // 800CF7F0
  c->r[3]=0u+0x000000B4u; // 800CF7F4
  c->r[4]=c->r[13]+0xFFFFB310u; // 800CF7F8
  c->r[5]=0u+0x00000000u; // 800CF7FC
  c->r[6]=0u+0x00002001u; // 800CF800
  c->r[8]=0u+0x00000000u; // 800CF804
  c->lr=0x800CF80Cu; f_80242DF0(c); // 800CF808
  c->r[4]=c->r[3]|c->r[3]; // 800CF80C
  c->r[3]=0u+0x000000B4u; // 800CF810
  c->r[5]=c->r[13]+0xFFFFB315u; // 800CF814
  c->r[6]=0u+0x00000000u; // 800CF818
  c->r[7]=0u+0x00001001u; // 800CF81C
  c->lr=0x800CF824u; f_80244DB0(c); // 800CF820
  cmps(c,0,(int32_t)c->r[3],0); // 800CF824
  if (crb(c,2)) { goto L_800CF854; } // 800CF828
  c->lr=0x800CF830u; f_800CF758(c); // 800CF82C
  goto L_800CF854; // 800CF830
L_800CF834:;
  c->r[3]=0u+0x000000B4u; // 800CF834
  c->r[4]=c->r[13]+0xFFFFB31Au; // 800CF838
  c->r[5]=0u+0x00000000u; // 800CF83C
  c->r[6]=0u+0x00001001u; // 800CF840
  c->lr=0x800CF848u; f_80244D20(c); // 800CF844
  cmps(c,0,(int32_t)c->r[3],0); // 800CF848
  if (crb(c,2)) { goto L_800CF854; } // 800CF84C
  c->lr=0x800CF854u; f_800CF758(c); // 800CF850
L_800CF854:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CF854
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CF858
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF85C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF860
  c->lr=c->r[0]; // 800CF864
  c->r[1]=c->r[1]+0x00000010u; // 800CF868
  return; // 800CF86C
}

// fn_800CF870
void f_800CF870(Ctx* __restrict c) {
  trace_call(0x800CF870u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF870
  c->r[0]=c->lr; // 800CF874
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF878
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF87C
  c->r[29]=c->r[3]|c->r[3]; // 800CF880
  c->r[30]=c->r[4]|c->r[4]; // 800CF884
  c->lr=0x800CF88Cu; f_800CD9DC(c); // 800CF888
  c->r[31]=c->r[3]|c->r[3]; // 800CF88C
  c->r[3]=c->r[30]|c->r[30]; // 800CF890
  c->lr=0x800CF898u; f_8030C0A0(c); // 800CF894
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800CF898
  c->r[3]=c->r[31]|c->r[31]; // 800CF89C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CF8A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF8A4
  c->lr=c->r[0]; // 800CF8A8
  c->r[1]=c->r[1]+0x00000020u; // 800CF8AC
  return; // 800CF8B0
}

// fn_800CF8B4
void f_800CF8B4(Ctx* __restrict c) {
  trace_call(0x800CF8B4u);
  return; // 800CF8B4
}

// fn_800CF8B8
void f_800CF8B8(Ctx* __restrict c) {
  trace_call(0x800CF8B8u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CF8B8
  if (!crb(c,2)) return; // 800CF8BC
  f_800CD3B4(c); return; // 800CF8C0
  return; // 800CF8C4
}

// fn_800CF8C8
void f_800CF8C8(Ctx* __restrict c) {
  trace_call(0x800CF8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF8C8
  c->r[0]=c->lr; // 800CF8CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF8D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF8D4
  c->r[31]=c->r[3]|c->r[3]; // 800CF8D8
  c->lr=0x800CF8E0u; f_800CDA64(c); // 800CF8DC
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF8E0
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800CF8E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF8E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF8EC
  c->lr=c->r[0]; // 800CF8F0
  c->r[1]=c->r[1]+0x00000010u; // 800CF8F4
  return; // 800CF8F8
}

// fn_800CF8FC
void f_800CF8FC(Ctx* __restrict c) {
  trace_call(0x800CF8FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF8FC
  c->r[0]=c->lr; // 800CF900
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF904
  c->r[11]=c->r[1]+0x00000020u; // 800CF908
  c->lr=0x800CF910u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CF90C
  c->r[29]=c->r[3]|c->r[3]; // 800CF910
  c->r[30]=c->r[4]|c->r[4]; // 800CF914
  c->r[31]=c->r[5]|c->r[5]; // 800CF918
  c->r[6]=0u+0x00000000u; // 800CF91C
  c->lr=0x800CF924u; f_800CDAB0(c); // 800CF920
  cmps(c,0,(int32_t)c->r[31],0); // 800CF924
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF928
  if (crb(c,2)) { goto L_800CF934; } // 800CF92C
  goto L_800CF938; // 800CF930
L_800CF934:;
  c->r[31]=c->r[29]|c->r[29]; // 800CF934
L_800CF938:;
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800CF938
  c->r[11]=c->r[1]+0x00000020u; // 800CF93C
  c->lr=0x800CF944u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CF940
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF944
  c->lr=c->r[0]; // 800CF948
  c->r[1]=c->r[1]+0x00000020u; // 800CF94C
  return; // 800CF950
}

// fn_800CF954
void f_800CF954(Ctx* __restrict c) {
  trace_call(0x800CF954u);
  c->r[0]=c->r[4]+0x8ED10000u; // 800CF954
  cmpu(c,0,c->r[0],0x000004BDu); // 800CF958
  if (!crb(c,2)) { goto L_800CF968; } // 800CF95C
  c->r[3]=0u+0x00000001u; // 800CF960
  return; // 800CF964
L_800CF968:;
  c->r[0]=c->r[4]+0xAEA00000u; // 800CF968
  cmpu(c,0,c->r[0],0x0000A187u); // 800CF96C
  if (!crb(c,2)) { goto L_800CF97C; } // 800CF970
  c->r[3]=0u+0x00000001u; // 800CF974
  return; // 800CF978
L_800CF97C:;
  c->r[3]=0u+0x1E2D0000u; // 800CF97C
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800CF980
  c->r[0]=c->r[4]-c->r[0]; // 800CF984
  c->r[0]=cntlz(c->r[0]); // 800CF988
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CF98C
  return; // 800CF990
}

// fn_800CF994
void f_800CF994(Ctx* __restrict c) {
  trace_call(0x800CF994u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF994
  c->r[0]=c->lr; // 800CF998
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CF99C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800CF9A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800CF9A4
  c->r[11]=c->r[1]+0x00000020u; // 800CF9A8
  c->lr=0x800CF9B0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CF9AC
  c->f[31]=c->f[1]; // 800CF9B0
  c->r[29]=c->r[3]|c->r[3]; // 800CF9B4
  c->r[31]=c->r[4]|c->r[4]; // 800CF9B8
  c->r[30]=c->r[5]|c->r[5]; // 800CF9BC
  c->lr=0x800CF9C4u; f_800CDB54(c); // 800CF9C0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF9C4
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CF9C8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 800CF9CC
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF9D0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800CF9D4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800CF9D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CF9DC
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 800CF9E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800CF9E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800CF9E8
  c->r[11]=c->r[1]+0x00000020u; // 800CF9EC
  c->lr=0x800CF9F4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CF9F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CF9F4
  c->lr=c->r[0]; // 800CF9F8
  c->r[1]=c->r[1]+0x00000030u; // 800CF9FC
  return; // 800CFA00
}

// fn_800CFA04
void f_800CFA04(Ctx* __restrict c) {
  trace_call(0x800CFA04u);
  c->r[3]=0u+0x000000B4u; // 800CFA04
  return; // 800CFA08
}

// fn_800CFA0C
void f_800CFA0C(Ctx* __restrict c) {
  trace_call(0x800CFA0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFA0C
  c->r[0]=c->lr; // 800CFA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFA14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFA18
  c->r[31]=c->r[3]|c->r[3]; // 800CFA1C
  c->lr=0x800CFA24u; f_800CF758(c); // 800CFA20
  c->r[0]=R32(c->r[31]+0x00000008u); // 800CFA24
  c->r[3]=0u+0x80420000u; // 800CFA28
  c->r[3]=c->r[3]+0xFFFF9174u; // 800CFA2C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800CFA30
  c->r[0]=c->r[0]|0x80000000u; // 800CFA34
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CFA38
  c->r[3]=c->r[31]|c->r[31]; // 800CFA3C
  c->r[12]=R32(c->r[31]+0x00000018u); // 800CFA40
  c->r[12]=R32(c->r[12]+0x00000024u); // 800CFA44
  c->ctr=c->r[12]; // 800CFA48
  if (true) { c->lr=0x800CFA50u; dispatch(c,c->ctr); } // 800CFA4C
  c->r[3]=c->r[31]|c->r[31]; // 800CFA50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFA54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFA58
  c->lr=c->r[0]; // 800CFA5C
  c->r[1]=c->r[1]+0x00000010u; // 800CFA60
  return; // 800CFA64
}

// fn_800CFA68
void f_800CFA68(Ctx* __restrict c) {
  trace_call(0x800CFA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFA68
  c->r[0]=c->lr; // 800CFA6C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFA70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFA74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFA78
  c->r[30]=c->r[3]|c->r[3]; // 800CFA7C
  c->r[31]=c->r[4]|c->r[4]; // 800CFA80
  if (crb(c,2)) { goto L_800CFAA4; } // 800CFA84
  if (crb(c,2)) { goto L_800CFA94; } // 800CFA88
  c->r[4]=0u+0x00000000u; // 800CFA8C
  c->lr=0x800CFA94u; f_800CD7C4(c); // 800CFA90
L_800CFA94:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CFA94
  if (!crb(c,1)) { goto L_800CFAA4; } // 800CFA98
  c->r[3]=c->r[30]|c->r[30]; // 800CFA9C
  c->lr=0x800CFAA4u; f_80244DC0(c); // 800CFAA0
L_800CFAA4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFAA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFAA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFAAC
  c->lr=c->r[0]; // 800CFAB0
  c->r[1]=c->r[1]+0x00000010u; // 800CFAB4
  return; // 800CFAB8
}

// fn_800CFABC
void f_800CFABC(Ctx* __restrict c) {
  trace_call(0x800CFABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFABC
  c->r[0]=c->lr; // 800CFAC0
  c->r[3]=0u+0x000000B4u; // 800CFAC4
  c->r[4]=c->r[13]+0xFFFFB31Fu; // 800CFAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFACC
  c->r[5]=0u+0x00000000u; // 800CFAD0
  c->r[6]=0u+0x00001001u; // 800CFAD4
  c->lr=0x800CFADCu; f_80244D20(c); // 800CFAD8
  cmps(c,0,(int32_t)c->r[3],0); // 800CFADC
  if (crb(c,2)) { goto L_800CFAE8; } // 800CFAE0
  c->lr=0x800CFAE8u; f_800CFA0C(c); // 800CFAE4
L_800CFAE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFAE8
  c->lr=c->r[0]; // 800CFAEC
  c->r[1]=c->r[1]+0x00000010u; // 800CFAF0
  return; // 800CFAF4
}

// fn_800CFAF8
void f_800CFAF8(Ctx* __restrict c) {
  trace_call(0x800CFAF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFAF8
  c->r[0]=c->lr; // 800CFAFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFB00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFB04
  c->r[31]=c->r[3]|c->r[3]; // 800CFB08
  c->lr=0x800CFB10u; f_80244520(c); // 800CFB0C
  c->r[7]=c->r[3]|c->r[3]; // 800CFB10
  c->r[9]=c->r[31]|c->r[31]; // 800CFB14
  c->r[3]=0u+0x000000B4u; // 800CFB18
  c->r[4]=c->r[13]+0xFFFFB324u; // 800CFB1C
  c->r[5]=0u+0x00000000u; // 800CFB20
  c->r[6]=0u+0x00002001u; // 800CFB24
  c->r[8]=0u+0x00000000u; // 800CFB28
  c->lr=0x800CFB30u; f_80242DF0(c); // 800CFB2C
  c->r[4]=c->r[3]|c->r[3]; // 800CFB30
  c->r[3]=0u+0x000000B4u; // 800CFB34
  c->r[5]=c->r[13]+0xFFFFB329u; // 800CFB38
  c->r[6]=0u+0x00000000u; // 800CFB3C
  c->r[7]=0u+0x00001001u; // 800CFB40
  c->lr=0x800CFB48u; f_80244DB0(c); // 800CFB44
  cmps(c,0,(int32_t)c->r[3],0); // 800CFB48
  if (crb(c,2)) { goto L_800CFB54; } // 800CFB4C
  c->lr=0x800CFB54u; f_800CFA0C(c); // 800CFB50
L_800CFB54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFB54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFB58
  c->lr=c->r[0]; // 800CFB5C
  c->r[1]=c->r[1]+0x00000010u; // 800CFB60
  return; // 800CFB64
}

// fn_800CFB68
void f_800CFB68(Ctx* __restrict c) {
  trace_call(0x800CFB68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFB68
  c->r[0]=c->lr; // 800CFB6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFB70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFB74
  c->r[31]=c->r[3]|c->r[3]; // 800CFB78
  c->lr=0x800CFB80u; f_800CD008(c); // 800CFB7C
  c->r[7]=0u+0x80420000u; // 800CFB80
  c->r[6]=0u+0x80410000u; // 800CFB84
  c->r[5]=0u+0x00000000u; // 800CFB88
  c->r[4]=0u+0x735A0000u; // 800CFB8C
  c->r[3]=0u+0x76AD0000u; // 800CFB90
  c->r[7]=c->r[7]+0xFFFF9138u; // 800CFB94
  c->r[0]=c->r[3]+0xFFFFC6B1u; // 800CFB98
  c->r[6]=c->r[6]+0xFFFFD041u; // 800CFB9C
  c->r[4]=c->r[4]+0xFFFFC192u; // 800CFBA0
  W32(c->r[31]+0x00000018u,c->r[7]); // 800CFBA4
  c->r[3]=c->r[31]|c->r[31]; // 800CFBA8
  W32(c->r[31]+0x00000000u,c->r[6]); // 800CFBAC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CFBB0
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CFBB4
  W32(c->r[31]+0x00000010u,c->r[5]); // 800CFBB8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CFBBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFBC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFBC4
  c->lr=c->r[0]; // 800CFBC8
  c->r[1]=c->r[1]+0x00000010u; // 800CFBCC
  return; // 800CFBD0
}

// fn_800CFBD4
void f_800CFBD4(Ctx* __restrict c) {
  trace_call(0x800CFBD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFBD4
  c->r[0]=c->lr; // 800CFBD8
  cmps(c,0,(int32_t)c->r[4],0); // 800CFBDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFBE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFBE4
  c->r[30]=c->r[3]|c->r[3]; // 800CFBE8
  c->r[31]=c->r[4]|c->r[4]; // 800CFBEC
  if (crb(c,2)) { goto L_800CFC44; } // 800CFBF0
  c->r[3]=c->r[31]|c->r[31]; // 800CFBF4
  c->lr=0x800CFBFCu; f_80244520(c); // 800CFBF8
  c->r[7]=c->r[3]|c->r[3]; // 800CFBFC
  c->r[9]=c->r[31]|c->r[31]; // 800CFC00
  c->r[3]=0u+0x00000148u; // 800CFC04
  c->r[4]=c->r[13]+0xFFFFB32Eu; // 800CFC08
  c->r[5]=0u+0x00000000u; // 800CFC0C
  c->r[6]=0u+0x00002001u; // 800CFC10
  c->r[8]=0u+0x00000000u; // 800CFC14
  c->lr=0x800CFC1Cu; f_80242DF0(c); // 800CFC18
  c->r[4]=c->r[3]|c->r[3]; // 800CFC1C
  c->r[3]=0u+0x00000148u; // 800CFC20
  c->r[5]=c->r[13]+0xFFFFB333u; // 800CFC24
  c->r[6]=0u+0x00000000u; // 800CFC28
  c->r[7]=0u+0x00001001u; // 800CFC2C
  c->lr=0x800CFC34u; f_80244DB0(c); // 800CFC30
  cmps(c,0,(int32_t)c->r[3],0); // 800CFC34
  if (crb(c,2)) { goto L_800CFC64; } // 800CFC38
  c->lr=0x800CFC40u; f_800CFB68(c); // 800CFC3C
  goto L_800CFC64; // 800CFC40
L_800CFC44:;
  c->r[3]=0u+0x00000148u; // 800CFC44
  c->r[4]=c->r[13]+0xFFFFB338u; // 800CFC48
  c->r[5]=0u+0x00000000u; // 800CFC4C
  c->r[6]=0u+0x00001001u; // 800CFC50
  c->lr=0x800CFC58u; f_80244D20(c); // 800CFC54
  cmps(c,0,(int32_t)c->r[3],0); // 800CFC58
  if (crb(c,2)) { goto L_800CFC64; } // 800CFC5C
  c->lr=0x800CFC64u; f_800CFB68(c); // 800CFC60
L_800CFC64:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800CFC64
  W16(c->r[3]+0x00000014u,c->r[0]); // 800CFC68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFC6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFC70
  c->lr=c->r[0]; // 800CFC74
  c->r[1]=c->r[1]+0x00000010u; // 800CFC78
  return; // 800CFC7C
}

// fn_800CFC80
void f_800CFC80(Ctx* __restrict c) {
  trace_call(0x800CFC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFC80
  c->r[0]=c->lr; // 800CFC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CFC88
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CFC8C
  c->r[29]=c->r[3]|c->r[3]; // 800CFC90
  c->r[30]=c->r[4]|c->r[4]; // 800CFC94
  c->lr=0x800CFC9Cu; f_800CD120(c); // 800CFC98
  c->r[31]=c->r[3]|c->r[3]; // 800CFC9C
  c->r[3]=c->r[30]|c->r[30]; // 800CFCA0
  c->lr=0x800CFCA8u; f_8030C0A0(c); // 800CFCA4
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[1]);} // 800CFCA8
  c->r[3]=c->r[30]|c->r[30]; // 800CFCAC
  c->lr=0x800CFCB4u; f_8030C0A0(c); // 800CFCB0
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[1]);} // 800CFCB4
  c->r[3]=c->r[30]|c->r[30]; // 800CFCB8
  c->lr=0x800CFCC0u; f_8030C0A0(c); // 800CFCBC
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[1]);} // 800CFCC0
  c->r[3]=c->r[30]|c->r[30]; // 800CFCC4
  c->lr=0x800CFCCCu; f_8030C0A0(c); // 800CFCC8
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[1]);} // 800CFCCC
  c->r[3]=c->r[30]|c->r[30]; // 800CFCD0
  c->lr=0x800CFCD8u; f_8030C0A0(c); // 800CFCD4
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[1]);} // 800CFCD8
  c->r[3]=c->r[30]|c->r[30]; // 800CFCDC
  c->lr=0x800CFCE4u; f_8030C0A0(c); // 800CFCE0
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800CFCE4
  c->r[3]=c->r[30]|c->r[30]; // 800CFCE8
  c->lr=0x800CFCF0u; f_8030C0A0(c); // 800CFCEC
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800CFCF0
  c->r[3]=c->r[30]|c->r[30]; // 800CFCF4
  c->lr=0x800CFCFCu; f_8030C0A0(c); // 800CFCF8
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 800CFCFC
  c->r[3]=c->r[30]|c->r[30]; // 800CFD00
  c->lr=0x800CFD08u; f_8030C0A0(c); // 800CFD04
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[1]);} // 800CFD08
  c->r[3]=c->r[30]|c->r[30]; // 800CFD0C
  c->lr=0x800CFD14u; f_8030C0A0(c); // 800CFD10
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800CFD14
  c->r[3]=c->r[30]|c->r[30]; // 800CFD18
  c->lr=0x800CFD20u; f_8030C0A0(c); // 800CFD1C
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 800CFD20
  c->r[3]=c->r[30]|c->r[30]; // 800CFD24
  c->lr=0x800CFD2Cu; f_8030C0A0(c); // 800CFD28
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800CFD2C
  c->r[3]=c->r[30]|c->r[30]; // 800CFD30
  c->lr=0x800CFD38u; f_8030C0A0(c); // 800CFD34
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 800CFD38
  c->r[3]=c->r[30]|c->r[30]; // 800CFD3C
  c->lr=0x800CFD44u; f_8030C0A0(c); // 800CFD40
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 800CFD44
  c->r[3]=c->r[30]|c->r[30]; // 800CFD48
  c->lr=0x800CFD50u; f_8030C0A0(c); // 800CFD4C
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 800CFD50
  c->r[3]=c->r[30]|c->r[30]; // 800CFD54
  c->lr=0x800CFD5Cu; f_8030C0A0(c); // 800CFD58
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[1]);} // 800CFD5C
  c->r[3]=c->r[30]|c->r[30]; // 800CFD60
  c->lr=0x800CFD68u; f_8030C0A0(c); // 800CFD64
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[1]);} // 800CFD68
  c->r[3]=c->r[30]|c->r[30]; // 800CFD6C
  c->lr=0x800CFD74u; f_8030C0A0(c); // 800CFD70
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[1]);} // 800CFD74
  c->r[3]=c->r[30]|c->r[30]; // 800CFD78
  c->lr=0x800CFD80u; f_8030C0A0(c); // 800CFD7C
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 800CFD80
  c->r[3]=c->r[30]|c->r[30]; // 800CFD84
  c->lr=0x800CFD8Cu; f_8030C0A0(c); // 800CFD88
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800CFD8C
  c->r[3]=c->r[30]|c->r[30]; // 800CFD90
  c->lr=0x800CFD98u; f_8030C0A0(c); // 800CFD94
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 800CFD98
  c->r[3]=c->r[30]|c->r[30]; // 800CFD9C
  c->lr=0x800CFDA4u; f_8030C0A0(c); // 800CFDA0
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 800CFDA4
  c->r[3]=c->r[30]|c->r[30]; // 800CFDA8
  c->lr=0x800CFDB0u; f_8030C0A0(c); // 800CFDAC
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 800CFDB0
  c->r[3]=c->r[30]|c->r[30]; // 800CFDB4
  c->lr=0x800CFDBCu; f_8030C0A0(c); // 800CFDB8
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 800CFDBC
  c->r[3]=c->r[30]|c->r[30]; // 800CFDC0
  c->lr=0x800CFDC8u; f_8030C0A0(c); // 800CFDC4
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 800CFDC8
  c->r[3]=c->r[30]|c->r[30]; // 800CFDCC
  c->lr=0x800CFDD4u; f_8030C0A0(c); // 800CFDD0
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 800CFDD4
  c->r[3]=c->r[30]|c->r[30]; // 800CFDD8
  c->lr=0x800CFDE0u; f_8030C0A0(c); // 800CFDDC
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 800CFDE0
  c->r[3]=c->r[30]|c->r[30]; // 800CFDE4
  c->lr=0x800CFDECu; f_8030C0A0(c); // 800CFDE8
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 800CFDEC
  c->r[3]=c->r[30]|c->r[30]; // 800CFDF0
  c->lr=0x800CFDF8u; f_8030C0A0(c); // 800CFDF4
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 800CFDF8
  c->r[3]=c->r[30]|c->r[30]; // 800CFDFC
  c->lr=0x800CFE04u; f_8030C0A0(c); // 800CFE00
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[1]);} // 800CFE04
  c->r[3]=c->r[30]|c->r[30]; // 800CFE08
  c->lr=0x800CFE10u; f_8030C0A0(c); // 800CFE0C
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[1]);} // 800CFE10
  c->r[3]=c->r[30]|c->r[30]; // 800CFE14
  c->lr=0x800CFE1Cu; f_8030C0A0(c); // 800CFE18
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[1]);} // 800CFE1C
  c->r[3]=c->r[30]|c->r[30]; // 800CFE20
  c->lr=0x800CFE28u; f_8030C0A0(c); // 800CFE24
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[1]);} // 800CFE28
  c->r[3]=c->r[30]|c->r[30]; // 800CFE2C
  c->lr=0x800CFE34u; f_8030C0A0(c); // 800CFE30
  {uint32_t ea=c->r[29]+0x00000120u; WF32(ea,c->f[1]);} // 800CFE34
  c->r[3]=c->r[30]|c->r[30]; // 800CFE38
  c->lr=0x800CFE40u; f_8030C0A0(c); // 800CFE3C
  {uint32_t ea=c->r[29]+0x00000124u; WF32(ea,c->f[1]);} // 800CFE40
  c->r[3]=c->r[30]|c->r[30]; // 800CFE44
  c->lr=0x800CFE4Cu; f_8030C0A0(c); // 800CFE48
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[1]);} // 800CFE4C
  c->r[3]=c->r[30]|c->r[30]; // 800CFE50
  c->lr=0x800CFE58u; f_8030C0A0(c); // 800CFE54
  {uint32_t ea=c->r[29]+0x0000012Cu; WF32(ea,c->f[1]);} // 800CFE58
  c->r[3]=c->r[30]|c->r[30]; // 800CFE5C
  c->lr=0x800CFE64u; f_8030C0A0(c); // 800CFE60
  {uint32_t ea=c->r[29]+0x00000130u; WF32(ea,c->f[1]);} // 800CFE64
  c->r[3]=c->r[30]|c->r[30]; // 800CFE68
  c->lr=0x800CFE70u; f_8030C0A0(c); // 800CFE6C
  {uint32_t ea=c->r[29]+0x00000134u; WF32(ea,c->f[1]);} // 800CFE70
  c->r[3]=c->r[30]|c->r[30]; // 800CFE74
  c->lr=0x800CFE7Cu; f_8030C0A0(c); // 800CFE78
  {uint32_t ea=c->r[29]+0x00000138u; WF32(ea,c->f[1]);} // 800CFE7C
  c->r[3]=c->r[30]|c->r[30]; // 800CFE80
  c->lr=0x800CFE88u; f_8030C0A0(c); // 800CFE84
  {uint32_t ea=c->r[29]+0x0000013Cu; WF32(ea,c->f[1]);} // 800CFE88
  c->r[3]=c->r[30]|c->r[30]; // 800CFE8C
  c->lr=0x800CFE94u; f_8030C0A0(c); // 800CFE90
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[1]);} // 800CFE94
  c->r[3]=c->r[30]|c->r[30]; // 800CFE98
  c->lr=0x800CFEA0u; f_8030C0A0(c); // 800CFE9C
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[1]);} // 800CFEA0
  c->r[3]=c->r[31]|c->r[31]; // 800CFEA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFEA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CFEAC
  c->lr=c->r[0]; // 800CFEB0
  c->r[1]=c->r[1]+0x00000020u; // 800CFEB4
  return; // 800CFEB8
}

// fn_800CFEBC
void f_800CFEBC(Ctx* __restrict c) {
  trace_call(0x800CFEBCu);
  return; // 800CFEBC
}

// fn_800CFEC0
void f_800CFEC0(Ctx* __restrict c) {
  trace_call(0x800CFEC0u);
  cmps(c,0,(int32_t)c->r[6],0); // 800CFEC0
  if (!crb(c,2)) return; // 800CFEC4
  f_800CD3B4(c); return; // 800CFEC8
  return; // 800CFECC
}

// fn_800CFED0
void f_800CFED0(Ctx* __restrict c) {
  trace_call(0x800CFED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFED0
  c->r[0]=c->lr; // 800CFED4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CFED8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800CFEDC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800CFEE0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 800CFEE4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 800CFEE8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 800CFEEC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 800CFEF0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 800CFEF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 800CFEF8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[27]);} // 800CFEFC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,27,ea,0,0);} // 800CFF00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFF04
  c->r[31]=c->r[3]|c->r[3]; // 800CFF08
  c->lr=0x800CFF10u; f_800CD418(c); // 800CFF0C
  c->r[3]=R32(c->r[31]+0x00000028u); // 800CFF10
  c->r[4]=0u+0x00000001u; // 800CFF14
  c->r[0]=R32(c->r[31]+0x00000078u); // 800CFF18
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[13]=c->ps1[13]=RF32(ea);} // 800CFF1C
  c->r[3]=c->r[3]|0x40000000u; // 800CFF20
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[7]=c->ps1[7]=RF32(ea);} // 800CFF24
  c->r[3]=rotl(c->r[3],0)&0xEFFFFFFFu; // 800CFF28
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CFF2C
  c->r[0]=c->r[0]|0x02000000u; // 800CFF30
  {uint32_t ea=c->r[2]+0xFFFF8758u; c->f[10]=c->ps1[10]=RF32(ea);} // 800CFF34
  {uint32_t ea=c->r[2]+0xFFFF8750u; c->f[11]=c->ps1[11]=RF32(ea);} // 800CFF38
  {uint32_t ea=c->r[2]+0xFFFF8788u; c->f[9]=c->ps1[9]=RF32(ea);} // 800CFF3C
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[8]=c->ps1[8]=RF32(ea);} // 800CFF40
  {uint32_t ea=c->r[2]+0xFFFF87E8u; c->f[27]=c->ps1[27]=RF32(ea);} // 800CFF44
  {uint32_t ea=c->r[2]+0xFFFF87F0u; c->f[28]=c->ps1[28]=RF32(ea);} // 800CFF48
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[29]=c->ps1[29]=RF32(ea);} // 800CFF4C
  {uint32_t ea=c->r[2]+0xFFFF8730u; c->f[30]=c->ps1[30]=RF32(ea);} // 800CFF50
  {uint32_t ea=c->r[2]+0xFFFF86F8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CFF54
  {uint32_t ea=c->r[2]+0xFFFF87F4u; c->f[12]=c->ps1[12]=RF32(ea);} // 800CFF58
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[6]=c->ps1[6]=RF32(ea);} // 800CFF5C
  {uint32_t ea=c->r[2]+0xFFFF87F8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CFF60
  {uint32_t ea=c->r[2]+0xFFFF8700u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CFF64
  {uint32_t ea=c->r[2]+0xFFFF87FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CFF68
  {uint32_t ea=c->r[2]+0xFFFF8800u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFF6C
  {uint32_t ea=c->r[2]+0xFFFF869Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFF70
  W32(c->r[31]+0x00000048u,c->r[4]); // 800CFF74
  W32(c->r[31]+0x00000028u,c->r[3]); // 800CFF78
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[27]);} // 800CFF7C
  W32(c->r[31]+0x00000078u,c->r[0]); // 800CFF80
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[28]);} // 800CFF84
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[29]);} // 800CFF88
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[30]);} // 800CFF8C
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[31]);} // 800CFF90
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[13]);} // 800CFF94
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[13]);} // 800CFF98
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[12]);} // 800CFF9C
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[13]);} // 800CFFA0
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[11]);} // 800CFFA4
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[10]);} // 800CFFA8
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[13]);} // 800CFFAC
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[9]);} // 800CFFB0
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[8]);} // 800CFFB4
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[7]);} // 800CFFB8
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[10]);} // 800CFFBC
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[10]);} // 800CFFC0
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[13]);} // 800CFFC4
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[9]);} // 800CFFC8
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[8]);} // 800CFFCC
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[13]);} // 800CFFD0
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[10]);} // 800CFFD4
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[6]);} // 800CFFD8
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[13]);} // 800CFFDC
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[9]);} // 800CFFE0
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[7]);} // 800CFFE4
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[13]);} // 800CFFE8
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[7]);} // 800CFFEC
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[13]);} // 800CFFF0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[7]);} // 800CFFF4
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[13]);} // 800CFFF8
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[11]);} // 800CFFFC
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[13]);} // 800D0000
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[7]);} // 800D0004
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[13]);} // 800D0008
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[11]);} // 800D000C
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[13]);} // 800D0010
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[5]);} // 800D0014
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[4]);} // 800D0018
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[3]);} // 800D001C
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[3]);} // 800D0020
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[2]);} // 800D0024
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[1]);} // 800D0028
  {uint32_t ea=c->r[31]+0x00000138u; WF32(ea,c->f[0]);} // 800D002C
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[3]);} // 800D0030
  {uint32_t ea=c->r[31]+0x00000140u; WF32(ea,c->f[3]);} // 800D0034
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[3]);} // 800D0038
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800D003C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800D0040
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 800D0044
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 800D0048
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 800D004C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 800D0050
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 800D0054
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 800D0058
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,27,ea,0,0);} // 800D005C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[27]=RF64(ea);} // 800D0060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0064
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D0068
  c->lr=c->r[0]; // 800D006C
  c->r[1]=c->r[1]+0x00000060u; // 800D0070
  return; // 800D0074
}

// fn_800D0078
void f_800D0078(Ctx* __restrict c) {
  trace_call(0x800D0078u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0078
  c->r[0]=c->lr; // 800D007C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0080
  c->r[11]=c->r[1]+0x00000020u; // 800D0084
  c->lr=0x800D008Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0088
  c->r[29]=c->r[3]|c->r[3]; // 800D008C
  c->r[30]=c->r[4]|c->r[4]; // 800D0090
  c->r[31]=c->r[5]|c->r[5]; // 800D0094
  c->r[6]=0u+0x00000000u; // 800D0098
  c->lr=0x800D00A0u; f_800CD4D4(c); // 800D009C
  cmps(c,0,(int32_t)c->r[31],0); // 800D00A0
  if (crb(c,2)) { goto L_800D00AC; } // 800D00A4
  goto L_800D00B0; // 800D00A8
L_800D00AC:;
  c->r[31]=c->r[29]|c->r[29]; // 800D00AC
L_800D00B0:;
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00B0
  c->r[11]=c->r[1]+0x00000020u; // 800D00B4
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800D00B8
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00BC
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 800D00C0
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00C4
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 800D00C8
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00CC
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800D00D0
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00D4
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 800D00D8
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00DC
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800D00E0
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00E4
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800D00E8
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00EC
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 800D00F0
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00F4
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 800D00F8
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D00FC
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 800D0100
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0104
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 800D0108
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D010C
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 800D0110
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0114
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 800D0118
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D011C
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[0]);} // 800D0120
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0124
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[0]);} // 800D0128
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D012C
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800D0130
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0134
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 800D0138
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D013C
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 800D0140
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0144
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 800D0148
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D014C
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 800D0150
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0154
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 800D0158
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D015C
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 800D0160
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0164
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 800D0168
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D016C
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 800D0170
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0174
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 800D0178
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D017C
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 800D0180
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0184
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 800D0188
  {uint32_t ea=c->r[30]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D018C
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[0]);} // 800D0190
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0194
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 800D0198
  {uint32_t ea=c->r[30]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D019C
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[0]);} // 800D01A0
  {uint32_t ea=c->r[30]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01A4
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[0]);} // 800D01A8
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01AC
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D01B0
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01B4
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[0]);} // 800D01B8
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01BC
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[0]);} // 800D01C0
  {uint32_t ea=c->r[30]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01C4
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[0]);} // 800D01C8
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01CC
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 800D01D0
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01D4
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[0]);} // 800D01D8
  {uint32_t ea=c->r[30]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01DC
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[0]);} // 800D01E0
  {uint32_t ea=c->r[30]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01E4
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[0]);} // 800D01E8
  {uint32_t ea=c->r[30]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01EC
  {uint32_t ea=c->r[31]+0x00000138u; WF32(ea,c->f[0]);} // 800D01F0
  {uint32_t ea=c->r[30]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01F4
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[0]);} // 800D01F8
  {uint32_t ea=c->r[30]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D01FC
  {uint32_t ea=c->r[31]+0x00000140u; WF32(ea,c->f[0]);} // 800D0200
  {uint32_t ea=c->r[30]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0204
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[0]);} // 800D0208
  c->lr=0x800D0210u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D020C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0210
  c->lr=c->r[0]; // 800D0214
  c->r[1]=c->r[1]+0x00000020u; // 800D0218
  return; // 800D021C
}

// fn_800D0220
void f_800D0220(Ctx* __restrict c) {
  trace_call(0x800D0220u);
  c->r[0]=c->r[4]+0xAEA00000u; // 800D0220
  cmpu(c,0,c->r[0],0x0000A187u); // 800D0224
  if (!crb(c,2)) { goto L_800D0234; } // 800D0228
  c->r[3]=0u+0x00000001u; // 800D022C
  return; // 800D0230
L_800D0234:;
  c->r[3]=0u+0x1E2D0000u; // 800D0234
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800D0238
  c->r[0]=c->r[4]-c->r[0]; // 800D023C
  c->r[0]=cntlz(c->r[0]); // 800D0240
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D0244
  return; // 800D0248
}

// fn_800D024C
void f_800D024C(Ctx* __restrict c) {
  trace_call(0x800D024Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D024C
  c->r[0]=c->lr; // 800D0250
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D0254
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800D0258
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800D025C
  c->r[11]=c->r[1]+0x00000020u; // 800D0260
  c->lr=0x800D0268u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0264
  c->f[31]=c->f[1]; // 800D0268
  c->r[29]=c->r[3]|c->r[3]; // 800D026C
  c->r[31]=c->r[4]|c->r[4]; // 800D0270
  c->r[30]=c->r[5]|c->r[5]; // 800D0274
  c->lr=0x800D027Cu; f_800CD5FC(c); // 800D0278
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D027C
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0280
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800D0284
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0288
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D028C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0290
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0294
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[1]);} // 800D0298
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D029C
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D02A0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D02A4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D02A8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D02AC
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[1]);} // 800D02B0
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D02B4
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D02B8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D02BC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D02C0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D02C4
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[1]);} // 800D02C8
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D02CC
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D02D0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D02D4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D02D8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D02DC
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[1]);} // 800D02E0
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D02E4
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D02E8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D02EC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D02F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D02F4
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[1]);} // 800D02F8
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D02FC
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0300
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0304
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0308
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D030C
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800D0310
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0314
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0318
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D031C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0320
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0324
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800D0328
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D032C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0330
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0334
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0338
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D033C
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 800D0340
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0344
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0348
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D034C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0350
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0354
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[1]);} // 800D0358
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D035C
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0360
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0364
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0368
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D036C
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800D0370
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0374
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0378
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D037C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0380
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0384
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 800D0388
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D038C
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0390
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0394
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0398
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D039C
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800D03A0
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D03A4
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D03A8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D03AC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D03B0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D03B4
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 800D03B8
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D03BC
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D03C0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D03C4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D03C8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D03CC
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 800D03D0
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D03D4
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D03D8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D03DC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D03E0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D03E4
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 800D03E8
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D03EC
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D03F0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D03F4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D03F8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D03FC
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[1]);} // 800D0400
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0404
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0408
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D040C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0410
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0414
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[1]);} // 800D0418
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D041C
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0420
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0424
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0428
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D042C
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[1]);} // 800D0430
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0434
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0438
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D043C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0440
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0444
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 800D0448
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D044C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0450
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0454
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0458
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D045C
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800D0460
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0464
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0468
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D046C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0470
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0474
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 800D0478
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D047C
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0480
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0484
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0488
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D048C
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 800D0490
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0494
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0498
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D049C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D04A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D04A4
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 800D04A8
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D04AC
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D04B0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D04B4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D04B8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D04BC
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 800D04C0
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D04C4
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D04C8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D04CC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D04D0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D04D4
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 800D04D8
  {uint32_t ea=c->r[31]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D04DC
  {uint32_t ea=c->r[30]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D04E0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D04E4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D04E8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D04EC
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 800D04F0
  {uint32_t ea=c->r[31]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D04F4
  {uint32_t ea=c->r[30]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D04F8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D04FC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0500
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0504
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 800D0508
  {uint32_t ea=c->r[31]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D050C
  {uint32_t ea=c->r[30]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0510
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0514
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0518
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D051C
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 800D0520
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0524
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0528
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D052C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0530
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0534
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 800D0538
  {uint32_t ea=c->r[31]+0x00000110u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D053C
  {uint32_t ea=c->r[30]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0540
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0544
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0548
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D054C
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[1]);} // 800D0550
  {uint32_t ea=c->r[31]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0554
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0558
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D055C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0560
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0564
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[1]);} // 800D0568
  {uint32_t ea=c->r[31]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D056C
  {uint32_t ea=c->r[30]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0570
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0574
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0578
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D057C
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[1]);} // 800D0580
  {uint32_t ea=c->r[31]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0584
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0588
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D058C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0590
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0594
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[1]);} // 800D0598
  {uint32_t ea=c->r[31]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D059C
  {uint32_t ea=c->r[30]+0x00000120u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05A0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D05A4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D05A8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D05AC
  {uint32_t ea=c->r[29]+0x00000120u; WF32(ea,c->f[1]);} // 800D05B0
  {uint32_t ea=c->r[31]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D05B4
  {uint32_t ea=c->r[30]+0x00000124u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05B8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D05BC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D05C0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D05C4
  {uint32_t ea=c->r[29]+0x00000124u; WF32(ea,c->f[1]);} // 800D05C8
  {uint32_t ea=c->r[31]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D05CC
  {uint32_t ea=c->r[30]+0x00000128u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05D0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D05D4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D05D8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D05DC
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[1]);} // 800D05E0
  {uint32_t ea=c->r[31]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D05E4
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D05E8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D05EC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D05F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D05F4
  {uint32_t ea=c->r[29]+0x0000012Cu; WF32(ea,c->f[1]);} // 800D05F8
  {uint32_t ea=c->r[31]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D05FC
  {uint32_t ea=c->r[30]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0600
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0604
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0608
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D060C
  {uint32_t ea=c->r[29]+0x00000130u; WF32(ea,c->f[1]);} // 800D0610
  {uint32_t ea=c->r[31]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0614
  {uint32_t ea=c->r[30]+0x00000134u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0618
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D061C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0620
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0624
  {uint32_t ea=c->r[29]+0x00000134u; WF32(ea,c->f[1]);} // 800D0628
  {uint32_t ea=c->r[31]+0x00000138u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D062C
  {uint32_t ea=c->r[30]+0x00000138u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0630
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0634
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0638
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D063C
  {uint32_t ea=c->r[29]+0x00000138u; WF32(ea,c->f[1]);} // 800D0640
  {uint32_t ea=c->r[31]+0x0000013Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0644
  {uint32_t ea=c->r[30]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0648
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D064C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0650
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0654
  {uint32_t ea=c->r[29]+0x0000013Cu; WF32(ea,c->f[1]);} // 800D0658
  {uint32_t ea=c->r[31]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D065C
  {uint32_t ea=c->r[30]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0660
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0664
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0668
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D066C
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[1]);} // 800D0670
  {uint32_t ea=c->r[31]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0674
  {uint32_t ea=c->r[30]+0x00000144u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0678
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D067C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800D0680
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D0684
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[0]);} // 800D0688
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800D068C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800D0690
  c->r[11]=c->r[1]+0x00000020u; // 800D0694
  c->lr=0x800D069Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0698
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D069C
  c->lr=c->r[0]; // 800D06A0
  c->r[1]=c->r[1]+0x00000030u; // 800D06A4
  return; // 800D06A8
}

// fn_800D06AC
void f_800D06AC(Ctx* __restrict c) {
  trace_call(0x800D06ACu);
  c->r[3]=0u+0x00000148u; // 800D06AC
  return; // 800D06B0
}

// fn_800D06B4
void f_800D06B4(Ctx* __restrict c) {
  trace_call(0x800D06B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D06B4
  c->r[0]=c->lr; // 800D06B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D06BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D06C0
  c->r[31]=c->r[3]|c->r[3]; // 800D06C4
  c->lr=0x800D06CCu; f_800CFB68(c); // 800D06C8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D06CC
  c->r[3]=0u+0x80420000u; // 800D06D0
  c->r[3]=c->r[3]+0xFFFF90F8u; // 800D06D4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800D06D8
  c->r[0]=c->r[0]|0x80000000u; // 800D06DC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D06E0
  c->r[3]=c->r[31]|c->r[31]; // 800D06E4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800D06E8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800D06EC
  c->ctr=c->r[12]; // 800D06F0
  if (true) { c->lr=0x800D06F8u; dispatch(c,c->ctr); } // 800D06F4
  c->r[3]=c->r[31]|c->r[31]; // 800D06F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D06FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0700
  c->lr=c->r[0]; // 800D0704
  c->r[1]=c->r[1]+0x00000010u; // 800D0708
  return; // 800D070C
}

// fn_800D0710
void f_800D0710(Ctx* __restrict c) {
  trace_call(0x800D0710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0710
  c->r[0]=c->lr; // 800D0714
  cmps(c,0,(int32_t)c->r[3],0); // 800D0718
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D071C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0720
  c->r[30]=c->r[3]|c->r[3]; // 800D0724
  c->r[31]=c->r[4]|c->r[4]; // 800D0728
  if (crb(c,2)) { goto L_800D0748; } // 800D072C
  c->r[4]=0u+0x00000000u; // 800D0730
  c->lr=0x800D0738u; f_800CD7C4(c); // 800D0734
  cmps(c,0,(int32_t)c->r[31],0); // 800D0738
  if (!crb(c,1)) { goto L_800D0748; } // 800D073C
  c->r[3]=c->r[30]|c->r[30]; // 800D0740
  c->lr=0x800D0748u; f_80244DC0(c); // 800D0744
L_800D0748:;
  c->r[3]=c->r[30]|c->r[30]; // 800D0748
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D074C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0750
  c->lr=c->r[0]; // 800D0754
  c->r[1]=c->r[1]+0x00000010u; // 800D0758
  return; // 800D075C
}

// fn_800D0760
void f_800D0760(Ctx* __restrict c) {
  trace_call(0x800D0760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0760
  c->r[0]=c->lr; // 800D0764
  c->r[3]=0u+0x00000148u; // 800D0768
  c->r[4]=c->r[13]+0xFFFFB33Du; // 800D076C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0770
  c->r[5]=0u+0x00000000u; // 800D0774
  c->r[6]=0u+0x00001001u; // 800D0778
  c->lr=0x800D0780u; f_80244D20(c); // 800D077C
  cmps(c,0,(int32_t)c->r[3],0); // 800D0780
  if (crb(c,2)) { goto L_800D078C; } // 800D0784
  c->lr=0x800D078Cu; f_800D06B4(c); // 800D0788
L_800D078C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D078C
  c->lr=c->r[0]; // 800D0790
  c->r[1]=c->r[1]+0x00000010u; // 800D0794
  return; // 800D0798
}

// fn_800D079C
void f_800D079C(Ctx* __restrict c) {
  trace_call(0x800D079Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D079C
  c->r[0]=c->lr; // 800D07A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D07A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D07A8
  c->r[31]=c->r[3]|c->r[3]; // 800D07AC
  c->lr=0x800D07B4u; f_80244520(c); // 800D07B0
  c->r[7]=c->r[3]|c->r[3]; // 800D07B4
  c->r[9]=c->r[31]|c->r[31]; // 800D07B8
  c->r[3]=0u+0x00000148u; // 800D07BC
  c->r[4]=c->r[13]+0xFFFFB342u; // 800D07C0
  c->r[5]=0u+0x00000000u; // 800D07C4
  c->r[6]=0u+0x00002001u; // 800D07C8
  c->r[8]=0u+0x00000000u; // 800D07CC
  c->lr=0x800D07D4u; f_80242DF0(c); // 800D07D0
  c->r[4]=c->r[3]|c->r[3]; // 800D07D4
  c->r[3]=0u+0x00000148u; // 800D07D8
  c->r[5]=c->r[13]+0xFFFFB347u; // 800D07DC
  c->r[6]=0u+0x00000000u; // 800D07E0
  c->r[7]=0u+0x00001001u; // 800D07E4
  c->lr=0x800D07ECu; f_80244DB0(c); // 800D07E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D07EC
  if (crb(c,2)) { goto L_800D07F8; } // 800D07F0
  c->lr=0x800D07F8u; f_800D06B4(c); // 800D07F4
L_800D07F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D07F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D07FC
  c->lr=c->r[0]; // 800D0800
  c->r[1]=c->r[1]+0x00000010u; // 800D0804
  return; // 800D0808
}

// fn_800D080C
void f_800D080C(Ctx* __restrict c) {
  trace_call(0x800D080Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D080C
  c->r[0]=c->lr; // 800D0810
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0818
  c->r[31]=c->r[3]|c->r[3]; // 800D081C
  c->lr=0x800D0824u; f_800CD008(c); // 800D0820
  c->r[7]=0u+0x80420000u; // 800D0824
  c->r[6]=0u+0x80410000u; // 800D0828
  c->r[5]=0u+0x00000000u; // 800D082C
  c->r[4]=0u+0x735A0000u; // 800D0830
  c->r[3]=0u+0x37FF0000u; // 800D0834
  c->r[7]=c->r[7]+0xFFFF90BCu; // 800D0838
  c->r[0]=c->r[3]+0xFFFFA027u; // 800D083C
  c->r[6]=c->r[6]+0xFFFFD051u; // 800D0840
  c->r[4]=c->r[4]+0xFFFFC192u; // 800D0844
  W32(c->r[31]+0x00000018u,c->r[7]); // 800D0848
  c->r[3]=c->r[31]|c->r[31]; // 800D084C
  W32(c->r[31]+0x00000000u,c->r[6]); // 800D0850
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D0854
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800D0858
  W32(c->r[31]+0x00000010u,c->r[5]); // 800D085C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D0860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0864
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0868
  c->lr=c->r[0]; // 800D086C
  c->r[1]=c->r[1]+0x00000010u; // 800D0870
  return; // 800D0874
}

// fn_800D0878
void f_800D0878(Ctx* __restrict c) {
  trace_call(0x800D0878u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0878
  c->r[0]=c->lr; // 800D087C
  cmps(c,0,(int32_t)c->r[4],0); // 800D0880
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0884
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0888
  c->r[30]=c->r[3]|c->r[3]; // 800D088C
  c->r[31]=c->r[4]|c->r[4]; // 800D0890
  if (crb(c,2)) { goto L_800D08E8; } // 800D0894
  c->r[3]=c->r[31]|c->r[31]; // 800D0898
  c->lr=0x800D08A0u; f_80244520(c); // 800D089C
  c->r[7]=c->r[3]|c->r[3]; // 800D08A0
  c->r[9]=c->r[31]|c->r[31]; // 800D08A4
  c->r[3]=0u+0x00000148u; // 800D08A8
  c->r[4]=c->r[13]+0xFFFFB34Cu; // 800D08AC
  c->r[5]=0u+0x00000000u; // 800D08B0
  c->r[6]=0u+0x00002001u; // 800D08B4
  c->r[8]=0u+0x00000000u; // 800D08B8
  c->lr=0x800D08C0u; f_80242DF0(c); // 800D08BC
  c->r[4]=c->r[3]|c->r[3]; // 800D08C0
  c->r[3]=0u+0x00000148u; // 800D08C4
  c->r[5]=c->r[13]+0xFFFFB351u; // 800D08C8
  c->r[6]=0u+0x00000000u; // 800D08CC
  c->r[7]=0u+0x00001001u; // 800D08D0
  c->lr=0x800D08D8u; f_80244DB0(c); // 800D08D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D08D8
  if (crb(c,2)) { goto L_800D0908; } // 800D08DC
  c->lr=0x800D08E4u; f_800D080C(c); // 800D08E0
  goto L_800D0908; // 800D08E4
L_800D08E8:;
  c->r[3]=0u+0x00000148u; // 800D08E8
  c->r[4]=c->r[13]+0xFFFFB356u; // 800D08EC
  c->r[5]=0u+0x00000000u; // 800D08F0
  c->r[6]=0u+0x00001001u; // 800D08F4
  c->lr=0x800D08FCu; f_80244D20(c); // 800D08F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D08FC
  if (crb(c,2)) { goto L_800D0908; } // 800D0900
  c->lr=0x800D0908u; f_800D080C(c); // 800D0904
L_800D0908:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800D0908
  W16(c->r[3]+0x00000014u,c->r[0]); // 800D090C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0910
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0914
  c->lr=c->r[0]; // 800D0918
  c->r[1]=c->r[1]+0x00000010u; // 800D091C
  return; // 800D0920
}

// fn_800D0924
void f_800D0924(Ctx* __restrict c) {
  trace_call(0x800D0924u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0924
  c->r[0]=c->lr; // 800D0928
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D092C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0930
  c->r[29]=c->r[3]|c->r[3]; // 800D0934
  c->r[30]=c->r[4]|c->r[4]; // 800D0938
  c->lr=0x800D0940u; f_800CD120(c); // 800D093C
  c->r[31]=c->r[3]|c->r[3]; // 800D0940
  c->r[3]=c->r[30]|c->r[30]; // 800D0944
  c->lr=0x800D094Cu; f_8030C0A0(c); // 800D0948
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[1]);} // 800D094C
  c->r[3]=c->r[30]|c->r[30]; // 800D0950
  c->lr=0x800D0958u; f_8030C0A0(c); // 800D0954
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[1]);} // 800D0958
  c->r[3]=c->r[30]|c->r[30]; // 800D095C
  c->lr=0x800D0964u; f_8030C0A0(c); // 800D0960
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[1]);} // 800D0964
  c->r[3]=c->r[30]|c->r[30]; // 800D0968
  c->lr=0x800D0970u; f_8030C0A0(c); // 800D096C
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[1]);} // 800D0970
  c->r[3]=c->r[30]|c->r[30]; // 800D0974
  c->lr=0x800D097Cu; f_8030C0A0(c); // 800D0978
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[1]);} // 800D097C
  c->r[3]=c->r[30]|c->r[30]; // 800D0980
  c->lr=0x800D0988u; f_8030C0A0(c); // 800D0984
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800D0988
  c->r[3]=c->r[30]|c->r[30]; // 800D098C
  c->lr=0x800D0994u; f_8030C0A0(c); // 800D0990
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800D0994
  c->r[3]=c->r[30]|c->r[30]; // 800D0998
  c->lr=0x800D09A0u; f_8030C0A0(c); // 800D099C
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 800D09A0
  c->r[3]=c->r[30]|c->r[30]; // 800D09A4
  c->lr=0x800D09ACu; f_8030C0A0(c); // 800D09A8
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[1]);} // 800D09AC
  c->r[3]=c->r[30]|c->r[30]; // 800D09B0
  c->lr=0x800D09B8u; f_8030C0A0(c); // 800D09B4
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800D09B8
  c->r[3]=c->r[30]|c->r[30]; // 800D09BC
  c->lr=0x800D09C4u; f_8030C0A0(c); // 800D09C0
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 800D09C4
  c->r[3]=c->r[30]|c->r[30]; // 800D09C8
  c->lr=0x800D09D0u; f_8030C0A0(c); // 800D09CC
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800D09D0
  c->r[3]=c->r[30]|c->r[30]; // 800D09D4
  c->lr=0x800D09DCu; f_8030C0A0(c); // 800D09D8
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 800D09DC
  c->r[3]=c->r[30]|c->r[30]; // 800D09E0
  c->lr=0x800D09E8u; f_8030C0A0(c); // 800D09E4
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 800D09E8
  c->r[3]=c->r[30]|c->r[30]; // 800D09EC
  c->lr=0x800D09F4u; f_8030C0A0(c); // 800D09F0
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 800D09F4
  c->r[3]=c->r[30]|c->r[30]; // 800D09F8
  c->lr=0x800D0A00u; f_8030C0A0(c); // 800D09FC
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[1]);} // 800D0A00
  c->r[3]=c->r[30]|c->r[30]; // 800D0A04
  c->lr=0x800D0A0Cu; f_8030C0A0(c); // 800D0A08
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[1]);} // 800D0A0C
  c->r[3]=c->r[30]|c->r[30]; // 800D0A10
  c->lr=0x800D0A18u; f_8030C0A0(c); // 800D0A14
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[1]);} // 800D0A18
  c->r[3]=c->r[30]|c->r[30]; // 800D0A1C
  c->lr=0x800D0A24u; f_8030C0A0(c); // 800D0A20
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 800D0A24
  c->r[3]=c->r[30]|c->r[30]; // 800D0A28
  c->lr=0x800D0A30u; f_8030C0A0(c); // 800D0A2C
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800D0A30
  c->r[3]=c->r[30]|c->r[30]; // 800D0A34
  c->lr=0x800D0A3Cu; f_8030C0A0(c); // 800D0A38
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 800D0A3C
  c->r[3]=c->r[30]|c->r[30]; // 800D0A40
  c->lr=0x800D0A48u; f_8030C0A0(c); // 800D0A44
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 800D0A48
  c->r[3]=c->r[30]|c->r[30]; // 800D0A4C
  c->lr=0x800D0A54u; f_8030C0A0(c); // 800D0A50
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 800D0A54
  c->r[3]=c->r[30]|c->r[30]; // 800D0A58
  c->lr=0x800D0A60u; f_8030C0A0(c); // 800D0A5C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 800D0A60
  c->r[3]=c->r[30]|c->r[30]; // 800D0A64
  c->lr=0x800D0A6Cu; f_8030C0A0(c); // 800D0A68
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 800D0A6C
  c->r[3]=c->r[30]|c->r[30]; // 800D0A70
  c->lr=0x800D0A78u; f_8030C0A0(c); // 800D0A74
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 800D0A78
  c->r[3]=c->r[30]|c->r[30]; // 800D0A7C
  c->lr=0x800D0A84u; f_8030C0A0(c); // 800D0A80
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 800D0A84
  c->r[3]=c->r[30]|c->r[30]; // 800D0A88
  c->lr=0x800D0A90u; f_8030C0A0(c); // 800D0A8C
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 800D0A90
  c->r[3]=c->r[30]|c->r[30]; // 800D0A94
  c->lr=0x800D0A9Cu; f_8030C0A0(c); // 800D0A98
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 800D0A9C
  c->r[3]=c->r[30]|c->r[30]; // 800D0AA0
  c->lr=0x800D0AA8u; f_8030C0A0(c); // 800D0AA4
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[1]);} // 800D0AA8
  c->r[3]=c->r[30]|c->r[30]; // 800D0AAC
  c->lr=0x800D0AB4u; f_8030C0A0(c); // 800D0AB0
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[1]);} // 800D0AB4
  c->r[3]=c->r[30]|c->r[30]; // 800D0AB8
  c->lr=0x800D0AC0u; f_8030C0A0(c); // 800D0ABC
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[1]);} // 800D0AC0
  c->r[3]=c->r[30]|c->r[30]; // 800D0AC4
  c->lr=0x800D0ACCu; f_8030C0A0(c); // 800D0AC8
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[1]);} // 800D0ACC
  c->r[3]=c->r[30]|c->r[30]; // 800D0AD0
  c->lr=0x800D0AD8u; f_8030C0A0(c); // 800D0AD4
  {uint32_t ea=c->r[29]+0x00000120u; WF32(ea,c->f[1]);} // 800D0AD8
  c->r[3]=c->r[30]|c->r[30]; // 800D0ADC
  c->lr=0x800D0AE4u; f_8030C0A0(c); // 800D0AE0
  {uint32_t ea=c->r[29]+0x00000124u; WF32(ea,c->f[1]);} // 800D0AE4
  c->r[3]=c->r[30]|c->r[30]; // 800D0AE8
  c->lr=0x800D0AF0u; f_8030C0A0(c); // 800D0AEC
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[1]);} // 800D0AF0
  c->r[3]=c->r[30]|c->r[30]; // 800D0AF4
  c->lr=0x800D0AFCu; f_8030C0A0(c); // 800D0AF8
  {uint32_t ea=c->r[29]+0x0000012Cu; WF32(ea,c->f[1]);} // 800D0AFC
  c->r[3]=c->r[30]|c->r[30]; // 800D0B00
  c->lr=0x800D0B08u; f_8030C0A0(c); // 800D0B04
  {uint32_t ea=c->r[29]+0x00000130u; WF32(ea,c->f[1]);} // 800D0B08
  c->r[3]=c->r[30]|c->r[30]; // 800D0B0C
  c->lr=0x800D0B14u; f_8030C0A0(c); // 800D0B10
  {uint32_t ea=c->r[29]+0x00000134u; WF32(ea,c->f[1]);} // 800D0B14
  c->r[3]=c->r[30]|c->r[30]; // 800D0B18
  c->lr=0x800D0B20u; f_8030C0A0(c); // 800D0B1C
  {uint32_t ea=c->r[29]+0x00000138u; WF32(ea,c->f[1]);} // 800D0B20
  c->r[3]=c->r[30]|c->r[30]; // 800D0B24
  c->lr=0x800D0B2Cu; f_8030C0A0(c); // 800D0B28
  {uint32_t ea=c->r[29]+0x0000013Cu; WF32(ea,c->f[1]);} // 800D0B2C
  c->r[3]=c->r[30]|c->r[30]; // 800D0B30
  c->lr=0x800D0B38u; f_8030C0A0(c); // 800D0B34
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[1]);} // 800D0B38
  c->r[3]=c->r[30]|c->r[30]; // 800D0B3C
  c->lr=0x800D0B44u; f_8030C0A0(c); // 800D0B40
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[1]);} // 800D0B44
  c->r[3]=c->r[31]|c->r[31]; // 800D0B48
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D0B4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0B50
  c->lr=c->r[0]; // 800D0B54
  c->r[1]=c->r[1]+0x00000020u; // 800D0B58
  return; // 800D0B5C
}

// fn_800D0B60
void f_800D0B60(Ctx* __restrict c) {
  trace_call(0x800D0B60u);
  return; // 800D0B60
}

// fn_800D0B64
void f_800D0B64(Ctx* __restrict c) {
  trace_call(0x800D0B64u);
  cmps(c,0,(int32_t)c->r[6],0); // 800D0B64
  if (!crb(c,2)) return; // 800D0B68
  f_800CD3B4(c); return; // 800D0B6C
  return; // 800D0B70
}

// fn_800D0B74
void f_800D0B74(Ctx* __restrict c) {
  trace_call(0x800D0B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0B74
  c->r[0]=c->lr; // 800D0B78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0B7C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D0B80
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D0B84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0B88
  c->r[31]=c->r[3]|c->r[3]; // 800D0B8C
  c->lr=0x800D0B94u; f_800CD418(c); // 800D0B90
  c->r[3]=R32(c->r[31]+0x00000028u); // 800D0B94
  c->r[4]=0u+0x00000001u; // 800D0B98
  c->r[0]=R32(c->r[31]+0x00000078u); // 800D0B9C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800D0BA0
  c->r[3]=c->r[3]|0x40000000u; // 800D0BA4
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0BA8
  c->r[3]=rotl(c->r[3],0)&0xEFFFFFFFu; // 800D0BAC
  {uint32_t ea=c->r[2]+0xFFFF869Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 800D0BB0
  c->r[0]=c->r[0]|0x02000000u; // 800D0BB4
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[7]=c->ps1[7]=RF32(ea);} // 800D0BB8
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[10]=c->ps1[10]=RF32(ea);} // 800D0BBC
  {uint32_t ea=c->r[2]+0xFFFF8758u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D0BC0
  {uint32_t ea=c->r[2]+0xFFFF8750u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0BC4
  {uint32_t ea=c->r[2]+0xFFFF8804u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D0BC8
  {uint32_t ea=c->r[2]+0xFFFF8808u; c->f[13]=c->ps1[13]=RF32(ea);} // 800D0BCC
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[12]=c->ps1[12]=RF32(ea);} // 800D0BD0
  {uint32_t ea=c->r[2]+0xFFFF8730u; c->f[11]=c->ps1[11]=RF32(ea);} // 800D0BD4
  {uint32_t ea=c->r[2]+0xFFFF86F8u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D0BD8
  {uint32_t ea=c->r[2]+0xFFFF880Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800D0BDC
  {uint32_t ea=c->r[2]+0xFFFF86E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D0BE0
  {uint32_t ea=c->r[2]+0xFFFF874Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0BE4
  W32(c->r[31]+0x00000048u,c->r[4]); // 800D0BE8
  W32(c->r[31]+0x00000028u,c->r[3]); // 800D0BEC
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[31]);} // 800D0BF0
  W32(c->r[31]+0x00000078u,c->r[0]); // 800D0BF4
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[13]);} // 800D0BF8
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[12]);} // 800D0BFC
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[11]);} // 800D0C00
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[10]);} // 800D0C04
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[9]);} // 800D0C08
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[9]);} // 800D0C0C
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[8]);} // 800D0C10
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[9]);} // 800D0C14
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[7]);} // 800D0C18
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[6]);} // 800D0C1C
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[9]);} // 800D0C20
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[9]);} // 800D0C24
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[5]);} // 800D0C28
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[7]);} // 800D0C2C
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[9]);} // 800D0C30
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[4]);} // 800D0C34
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[9]);} // 800D0C38
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[9]);} // 800D0C3C
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[3]);} // 800D0C40
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[9]);} // 800D0C44
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[9]);} // 800D0C48
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[4]);} // 800D0C4C
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[9]);} // 800D0C50
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[9]);} // 800D0C54
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[7]);} // 800D0C58
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[9]);} // 800D0C5C
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[2]);} // 800D0C60
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[9]);} // 800D0C64
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[2]);} // 800D0C68
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[9]);} // 800D0C6C
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[9]);} // 800D0C70
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[9]);} // 800D0C74
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[9]);} // 800D0C78
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[9]);} // 800D0C7C
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[9]);} // 800D0C80
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[9]);} // 800D0C84
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[8]);} // 800D0C88
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[10]);} // 800D0C8C
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[1]);} // 800D0C90
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[0]);} // 800D0C94
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[1]);} // 800D0C98
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[8]);} // 800D0C9C
  {uint32_t ea=c->r[31]+0x00000138u; WF32(ea,c->f[1]);} // 800D0CA0
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[1]);} // 800D0CA4
  {uint32_t ea=c->r[31]+0x00000140u; WF32(ea,c->f[1]);} // 800D0CA8
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[1]);} // 800D0CAC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800D0CB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D0CB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0CB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0CBC
  c->lr=c->r[0]; // 800D0CC0
  c->r[1]=c->r[1]+0x00000020u; // 800D0CC4
  return; // 800D0CC8
}

// fn_800D0CCC
void f_800D0CCC(Ctx* __restrict c) {
  trace_call(0x800D0CCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0CCC
  c->r[0]=c->lr; // 800D0CD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0CD4
  c->r[11]=c->r[1]+0x00000020u; // 800D0CD8
  c->lr=0x800D0CE0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0CDC
  c->r[29]=c->r[3]|c->r[3]; // 800D0CE0
  c->r[30]=c->r[4]|c->r[4]; // 800D0CE4
  c->r[31]=c->r[5]|c->r[5]; // 800D0CE8
  c->r[6]=0u+0x00000000u; // 800D0CEC
  c->lr=0x800D0CF4u; f_800CD4D4(c); // 800D0CF0
  cmps(c,0,(int32_t)c->r[31],0); // 800D0CF4
  if (crb(c,2)) { goto L_800D0D00; } // 800D0CF8
  goto L_800D0D04; // 800D0CFC
L_800D0D00:;
  c->r[31]=c->r[29]|c->r[29]; // 800D0D00
L_800D0D04:;
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D04
  c->r[11]=c->r[1]+0x00000020u; // 800D0D08
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800D0D0C
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D10
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 800D0D14
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D18
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 800D0D1C
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D20
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 800D0D24
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D28
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 800D0D2C
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D30
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800D0D34
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D38
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 800D0D3C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D40
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 800D0D44
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D48
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 800D0D4C
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D50
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 800D0D54
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D58
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 800D0D5C
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D60
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 800D0D64
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D68
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 800D0D6C
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D70
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[0]);} // 800D0D74
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D78
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[0]);} // 800D0D7C
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D80
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800D0D84
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D88
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 800D0D8C
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D90
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 800D0D94
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0D98
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 800D0D9C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DA0
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 800D0DA4
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DA8
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 800D0DAC
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DB0
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 800D0DB4
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DB8
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 800D0DBC
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DC0
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 800D0DC4
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DC8
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 800D0DCC
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DD0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 800D0DD4
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DD8
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 800D0DDC
  {uint32_t ea=c->r[30]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DE0
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[0]);} // 800D0DE4
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DE8
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 800D0DEC
  {uint32_t ea=c->r[30]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DF0
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[0]);} // 800D0DF4
  {uint32_t ea=c->r[30]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0DF8
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[0]);} // 800D0DFC
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E00
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 800D0E04
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E08
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[0]);} // 800D0E0C
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E10
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[0]);} // 800D0E14
  {uint32_t ea=c->r[30]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E18
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[0]);} // 800D0E1C
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E20
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 800D0E24
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E28
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[0]);} // 800D0E2C
  {uint32_t ea=c->r[30]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E30
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[0]);} // 800D0E34
  {uint32_t ea=c->r[30]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E38
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[0]);} // 800D0E3C
  {uint32_t ea=c->r[30]+0x00000138u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E40
  {uint32_t ea=c->r[31]+0x00000138u; WF32(ea,c->f[0]);} // 800D0E44
  {uint32_t ea=c->r[30]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E48
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[0]);} // 800D0E4C
  {uint32_t ea=c->r[30]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E50
  {uint32_t ea=c->r[31]+0x00000140u; WF32(ea,c->f[0]);} // 800D0E54
  {uint32_t ea=c->r[30]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0E58
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[0]);} // 800D0E5C
  c->lr=0x800D0E64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0E60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0E64
  c->lr=c->r[0]; // 800D0E68
  c->r[1]=c->r[1]+0x00000020u; // 800D0E6C
  return; // 800D0E70
}

// fn_800D0E74
void f_800D0E74(Ctx* __restrict c) {
  trace_call(0x800D0E74u);
  c->r[0]=c->r[4]+0xAEA00000u; // 800D0E74
  cmpu(c,0,c->r[0],0x0000A187u); // 800D0E78
  if (!crb(c,2)) { goto L_800D0E88; } // 800D0E7C
  c->r[3]=0u+0x00000001u; // 800D0E80
  return; // 800D0E84
L_800D0E88:;
  c->r[3]=0u+0x1E2D0000u; // 800D0E88
  c->r[0]=c->r[3]+0xFFFFBC1Du; // 800D0E8C
  c->r[0]=c->r[4]-c->r[0]; // 800D0E90
  c->r[0]=cntlz(c->r[0]); // 800D0E94
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D0E98
  return; // 800D0E9C
}

// fn_800D0EA0
void f_800D0EA0(Ctx* __restrict c) {
  trace_call(0x800D0EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0EA0
  c->r[0]=c->lr; // 800D0EA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D0EA8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800D0EAC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800D0EB0
  c->r[11]=c->r[1]+0x00000020u; // 800D0EB4
  c->lr=0x800D0EBCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D0EB8
  c->f[31]=c->f[1]; // 800D0EBC
  c->r[29]=c->r[3]|c->r[3]; // 800D0EC0
  c->r[31]=c->r[4]|c->r[4]; // 800D0EC4
  c->r[30]=c->r[5]|c->r[5]; // 800D0EC8
  c->lr=0x800D0ED0u; f_800CD5FC(c); // 800D0ECC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0ED0
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0ED4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800D0ED8
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0EDC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0EE0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0EE4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0EE8
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[1]);} // 800D0EEC
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0EF0
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0EF4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0EF8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0EFC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0F00
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[1]);} // 800D0F04
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0F08
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0F0C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0F10
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0F14
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0F18
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[1]);} // 800D0F1C
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0F20
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0F24
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0F28
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0F2C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0F30
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[1]);} // 800D0F34
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0F38
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0F3C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0F40
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0F44
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0F48
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[1]);} // 800D0F4C
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0F50
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0F54
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0F58
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0F5C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0F60
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 800D0F64
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0F68
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0F6C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0F70
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0F74
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0F78
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 800D0F7C
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0F80
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0F84
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0F88
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0F8C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0F90
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 800D0F94
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0F98
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0F9C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0FA0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0FA4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0FA8
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[1]);} // 800D0FAC
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0FB0
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0FB4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0FB8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0FBC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0FC0
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 800D0FC4
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0FC8
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0FCC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0FD0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0FD4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0FD8
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 800D0FDC
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0FE0
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0FE4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D0FE8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D0FEC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D0FF0
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 800D0FF4
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D0FF8
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0FFC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1000
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1004
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1008
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 800D100C
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1010
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1014
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1018
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D101C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1020
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 800D1024
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1028
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D102C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1030
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1034
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1038
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 800D103C
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1040
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1044
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1048
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D104C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1050
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[1]);} // 800D1054
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1058
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D105C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1060
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1064
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1068
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[1]);} // 800D106C
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1070
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1074
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1078
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D107C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1080
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[1]);} // 800D1084
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1088
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D108C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1090
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1094
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1098
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 800D109C
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D10A0
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D10A4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D10A8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D10AC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D10B0
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 800D10B4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D10B8
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D10BC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D10C0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D10C4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D10C8
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 800D10CC
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D10D0
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D10D4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D10D8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D10DC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D10E0
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 800D10E4
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D10E8
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D10EC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D10F0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D10F4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D10F8
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 800D10FC
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1100
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1104
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1108
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D110C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1110
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 800D1114
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1118
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D111C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1120
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1124
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1128
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 800D112C
  {uint32_t ea=c->r[31]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1130
  {uint32_t ea=c->r[30]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1134
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1138
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D113C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1140
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 800D1144
  {uint32_t ea=c->r[31]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1148
  {uint32_t ea=c->r[30]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D114C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1150
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1154
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1158
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 800D115C
  {uint32_t ea=c->r[31]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1160
  {uint32_t ea=c->r[30]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1164
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1168
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D116C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1170
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 800D1174
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1178
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D117C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1180
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1184
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1188
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 800D118C
  {uint32_t ea=c->r[31]+0x00000110u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1190
  {uint32_t ea=c->r[30]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1194
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1198
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D119C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D11A0
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[1]);} // 800D11A4
  {uint32_t ea=c->r[31]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D11A8
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D11AC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D11B0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D11B4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D11B8
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[1]);} // 800D11BC
  {uint32_t ea=c->r[31]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D11C0
  {uint32_t ea=c->r[30]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D11C4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D11C8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D11CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D11D0
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[1]);} // 800D11D4
  {uint32_t ea=c->r[31]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D11D8
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D11DC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D11E0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D11E4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D11E8
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[1]);} // 800D11EC
  {uint32_t ea=c->r[31]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D11F0
  {uint32_t ea=c->r[30]+0x00000120u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D11F4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D11F8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D11FC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1200
  {uint32_t ea=c->r[29]+0x00000120u; WF32(ea,c->f[1]);} // 800D1204
  {uint32_t ea=c->r[31]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1208
  {uint32_t ea=c->r[30]+0x00000124u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D120C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1210
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1214
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1218
  {uint32_t ea=c->r[29]+0x00000124u; WF32(ea,c->f[1]);} // 800D121C
  {uint32_t ea=c->r[31]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1220
  {uint32_t ea=c->r[30]+0x00000128u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1224
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1228
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D122C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1230
  {uint32_t ea=c->r[29]+0x00000128u; WF32(ea,c->f[1]);} // 800D1234
  {uint32_t ea=c->r[31]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1238
  {uint32_t ea=c->r[30]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D123C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1240
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1244
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1248
  {uint32_t ea=c->r[29]+0x0000012Cu; WF32(ea,c->f[1]);} // 800D124C
  {uint32_t ea=c->r[31]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1250
  {uint32_t ea=c->r[30]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1254
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1258
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D125C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1260
  {uint32_t ea=c->r[29]+0x00000130u; WF32(ea,c->f[1]);} // 800D1264
  {uint32_t ea=c->r[31]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1268
  {uint32_t ea=c->r[30]+0x00000134u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D126C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1270
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D1274
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1278
  {uint32_t ea=c->r[29]+0x00000134u; WF32(ea,c->f[1]);} // 800D127C
  {uint32_t ea=c->r[31]+0x00000138u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1280
  {uint32_t ea=c->r[30]+0x00000138u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D1284
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D1288
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D128C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D1290
  {uint32_t ea=c->r[29]+0x00000138u; WF32(ea,c->f[1]);} // 800D1294
  {uint32_t ea=c->r[31]+0x0000013Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D1298
  {uint32_t ea=c->r[30]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D129C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D12A0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D12A4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D12A8
  {uint32_t ea=c->r[29]+0x0000013Cu; WF32(ea,c->f[1]);} // 800D12AC
  {uint32_t ea=c->r[31]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D12B0
  {uint32_t ea=c->r[30]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D12B4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D12B8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D12BC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800D12C0
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[1]);} // 800D12C4
  {uint32_t ea=c->r[31]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D12C8
  {uint32_t ea=c->r[30]+0x00000144u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D12CC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D12D0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800D12D4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800D12D8
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[0]);} // 800D12DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800D12E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800D12E4
  c->r[11]=c->r[1]+0x00000020u; // 800D12E8
  c->lr=0x800D12F0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D12EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D12F0
  c->lr=c->r[0]; // 800D12F4
  c->r[1]=c->r[1]+0x00000030u; // 800D12F8
  return; // 800D12FC
}

// fn_800D1300
void f_800D1300(Ctx* __restrict c) {
  trace_call(0x800D1300u);
  c->r[3]=0u+0x00000148u; // 800D1300
  return; // 800D1304
}

// fn_800D1308
void f_800D1308(Ctx* __restrict c) {
  trace_call(0x800D1308u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1308
  c->r[0]=c->lr; // 800D130C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D1314
  c->r[31]=c->r[3]|c->r[3]; // 800D1318
  c->lr=0x800D1320u; f_800D080C(c); // 800D131C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D1320
  c->r[3]=0u+0x80420000u; // 800D1324
  c->r[3]=c->r[3]+0xFFFF907Cu; // 800D1328
  W32(c->r[31]+0x00000018u,c->r[3]); // 800D132C
  c->r[0]=c->r[0]|0x80000000u; // 800D1330
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D1334
  c->r[3]=c->r[31]|c->r[31]; // 800D1338
  c->r[12]=R32(c->r[31]+0x00000018u); // 800D133C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800D1340
  c->ctr=c->r[12]; // 800D1344
  if (true) { c->lr=0x800D134Cu; dispatch(c,c->ctr); } // 800D1348
  c->r[3]=c->r[31]|c->r[31]; // 800D134C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1350
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1354
  c->lr=c->r[0]; // 800D1358
  c->r[1]=c->r[1]+0x00000010u; // 800D135C
  return; // 800D1360
}

// fn_800D1364
void f_800D1364(Ctx* __restrict c) {
  trace_call(0x800D1364u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1364
  c->r[0]=c->lr; // 800D1368
  cmps(c,0,(int32_t)c->r[3],0); // 800D136C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1370
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1374
  c->r[30]=c->r[3]|c->r[3]; // 800D1378
  c->r[31]=c->r[4]|c->r[4]; // 800D137C
  if (crb(c,2)) { goto L_800D139C; } // 800D1380
  c->r[4]=0u+0x00000000u; // 800D1384
  c->lr=0x800D138Cu; f_800CD7C4(c); // 800D1388
  cmps(c,0,(int32_t)c->r[31],0); // 800D138C
  if (!crb(c,1)) { goto L_800D139C; } // 800D1390
  c->r[3]=c->r[30]|c->r[30]; // 800D1394
  c->lr=0x800D139Cu; f_80244DC0(c); // 800D1398
L_800D139C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D139C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D13A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D13A4
  c->lr=c->r[0]; // 800D13A8
  c->r[1]=c->r[1]+0x00000010u; // 800D13AC
  return; // 800D13B0
}

// fn_800D13B4
void f_800D13B4(Ctx* __restrict c) {
  trace_call(0x800D13B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D13B4
  c->r[0]=c->lr; // 800D13B8
  c->r[3]=0u+0x00000148u; // 800D13BC
  c->r[4]=c->r[13]+0xFFFFB35Bu; // 800D13C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D13C4
  c->r[5]=0u+0x00000000u; // 800D13C8
  c->r[6]=0u+0x00001001u; // 800D13CC
  c->lr=0x800D13D4u; f_80244D20(c); // 800D13D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D13D4
  if (crb(c,2)) { goto L_800D13E0; } // 800D13D8
  c->lr=0x800D13E0u; f_800D1308(c); // 800D13DC
L_800D13E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D13E0
  c->lr=c->r[0]; // 800D13E4
  c->r[1]=c->r[1]+0x00000010u; // 800D13E8
  return; // 800D13EC
}

// fn_800D13F0
void f_800D13F0(Ctx* __restrict c) {
  trace_call(0x800D13F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D13F0
  c->r[0]=c->lr; // 800D13F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D13F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D13FC
  c->r[31]=c->r[3]|c->r[3]; // 800D1400
  c->lr=0x800D1408u; f_80244520(c); // 800D1404
  c->r[7]=c->r[3]|c->r[3]; // 800D1408
  c->r[9]=c->r[31]|c->r[31]; // 800D140C
  c->r[3]=0u+0x00000148u; // 800D1410
  c->r[4]=c->r[13]+0xFFFFB360u; // 800D1414
  c->r[5]=0u+0x00000000u; // 800D1418
  c->r[6]=0u+0x00002001u; // 800D141C
  c->r[8]=0u+0x00000000u; // 800D1420
  c->lr=0x800D1428u; f_80242DF0(c); // 800D1424
  c->r[4]=c->r[3]|c->r[3]; // 800D1428
  c->r[3]=0u+0x00000148u; // 800D142C
  c->r[5]=c->r[13]+0xFFFFB365u; // 800D1430
  c->r[6]=0u+0x00000000u; // 800D1434
  c->r[7]=0u+0x00001001u; // 800D1438
  c->lr=0x800D1440u; f_80244DB0(c); // 800D143C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1440
  if (crb(c,2)) { goto L_800D144C; } // 800D1444
  c->lr=0x800D144Cu; f_800D1308(c); // 800D1448
L_800D144C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D144C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D1450
  c->lr=c->r[0]; // 800D1454
  c->r[1]=c->r[1]+0x00000010u; // 800D1458
  return; // 800D145C
}

// fn_800D1460
void f_800D1460(Ctx* __restrict c) {
  trace_call(0x800D1460u);
  c->r[4]=0u+0x80420000u; // 800D1460
  c->r[0]=0u+0x00000000u; // 800D1464
  c->r[4]=c->r[4]+0xFFFF9048u; // 800D1468
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D146C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1470
  return; // 800D1474
}

// fn_800D1478
void f_800D1478(Ctx* __restrict c) {
  trace_call(0x800D1478u);
  f_8030D728(c); return; // 800D1478
}

// fn_800D147C
void f_800D147C(Ctx* __restrict c) {
  trace_call(0x800D147Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D147C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1480
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D1484
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D1488
  return; // 800D148C
}

// fn_800D1490
void f_800D1490(Ctx* __restrict c) {
  trace_call(0x800D1490u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D1490
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1494
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D1498
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D149C
  return; // 800D14A0
}

// fn_800D14A4
void f_800D14A4(Ctx* __restrict c) {
  trace_call(0x800D14A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D14A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D14A8
  c->ctr=c->r[12]; // 800D14AC
  if (true) { dispatch(c,c->ctr); return; } // 800D14B0
}

// fn_800D14B4
void f_800D14B4(Ctx* __restrict c) {
  trace_call(0x800D14B4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D14B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D14B8
  c->ctr=c->r[12]; // 800D14BC
  if (true) { dispatch(c,c->ctr); return; } // 800D14C0
}

// fn_800D14C4
void f_800D14C4(Ctx* __restrict c) {
  trace_call(0x800D14C4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D14C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D14C8
  c->ctr=c->r[12]; // 800D14CC
  if (true) { dispatch(c,c->ctr); return; } // 800D14D0
}

// fn_800D14D4
void f_800D14D4(Ctx* __restrict c) {
  trace_call(0x800D14D4u);
  return; // 800D14D4
}

// fn_800D14D8
void f_800D14D8(Ctx* __restrict c) {
  trace_call(0x800D14D8u);
  c->r[3]=0u+0x80410000u; // 800D14D8
  c->r[3]=c->r[3]+0xFFFFD062u; // 800D14DC
  return; // 800D14E0
}

// fn_800D14E4
void f_800D14E4(Ctx* __restrict c) {
  trace_call(0x800D14E4u);
  c->r[3]=0u+0x0000000Cu; // 800D14E4
  return; // 800D14E8
}

// fn_800D14EC
void f_800D14EC(Ctx* __restrict c) {
  trace_call(0x800D14ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D14EC
  c->r[0]=c->lr; // 800D14F0
  c->r[3]=0u+0x0000000Cu; // 800D14F4
  c->r[4]=c->r[13]+0xFFFFB36Au; // 800D14F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D14FC
  c->r[5]=0u+0x00000000u; // 800D1500
  c->r[6]=0u+0x00001001u; // 800D1504
  c->lr=0x800D150Cu; f_80244D20(c); // 800D1508
  cmps(c,0,(int32_t)c->r[3],0); // 800D150C
  if (crb(c,2)) { goto L_800D1518; } // 800D1510
  c->lr=0x800D1518u; f_800D1460(c); // 800D1514
L_800D1518:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1518
  c->lr=c->r[0]; // 800D151C
  c->r[1]=c->r[1]+0x00000010u; // 800D1520
  return; // 800D1524
}

// fn_800D1528
void f_800D1528(Ctx* __restrict c) {
  trace_call(0x800D1528u);
  c->r[4]=0u+0x80420000u; // 800D1528
  c->r[0]=0u+0x00000000u; // 800D152C
  c->r[4]=c->r[4]+0xFFFF9014u; // 800D1530
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D1534
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1538
  return; // 800D153C
}

// fn_800D1540
void f_800D1540(Ctx* __restrict c) {
  trace_call(0x800D1540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1540
  c->r[0]=c->lr; // 800D1544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1548
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D154C
  c->r[30]=c->r[3]|c->r[3]; // 800D1550
  c->r[31]=c->r[4]|c->r[4]; // 800D1554
  c->lr=0x800D155Cu; f_8030D728(c); // 800D1558
  c->r[3]=c->r[31]|c->r[31]; // 800D155C
  c->lr=0x800D1564u; f_8030BD1C(c); // 800D1560
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D1564
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1568
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D156C
  c->lr=c->r[0]; // 800D1570
  c->r[1]=c->r[1]+0x00000010u; // 800D1574
  return; // 800D1578
}

// fn_800D157C
void f_800D157C(Ctx* __restrict c) {
  trace_call(0x800D157Cu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D157C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D1580
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D1584
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D1588
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D158C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D1590
  return; // 800D1594
}

// fn_800D1598
void f_800D1598(Ctx* __restrict c) {
  trace_call(0x800D1598u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1598
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D159C
  c->ctr=c->r[12]; // 800D15A0
  if (true) { dispatch(c,c->ctr); return; } // 800D15A4
}

// fn_800D15A8
void f_800D15A8(Ctx* __restrict c) {
  trace_call(0x800D15A8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D15A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D15AC
  c->ctr=c->r[12]; // 800D15B0
  if (true) { dispatch(c,c->ctr); return; } // 800D15B4
}

// fn_800D15B8
void f_800D15B8(Ctx* __restrict c) {
  trace_call(0x800D15B8u);
  c->r[3]=0u+0x80410000u; // 800D15B8
  c->r[3]=c->r[3]+0xFFFFD071u; // 800D15BC
  return; // 800D15C0
}

// fn_800D15C4
void f_800D15C4(Ctx* __restrict c) {
  trace_call(0x800D15C4u);
  c->r[3]=0u+0x00000010u; // 800D15C4
  return; // 800D15C8
}

// fn_800D15CC
void f_800D15CC(Ctx* __restrict c) {
  trace_call(0x800D15CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D15CC
  c->r[0]=c->lr; // 800D15D0
  c->r[3]=0u+0x00000010u; // 800D15D4
  c->r[4]=c->r[13]+0xFFFFB36Fu; // 800D15D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D15DC
  c->r[5]=0u+0x00000000u; // 800D15E0
  c->r[6]=0u+0x00001001u; // 800D15E4
  c->lr=0x800D15ECu; f_80244D20(c); // 800D15E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D15EC
  if (crb(c,2)) { goto L_800D15F8; } // 800D15F0
  c->lr=0x800D15F8u; f_800D1528(c); // 800D15F4
L_800D15F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D15F8
  c->lr=c->r[0]; // 800D15FC
  c->r[1]=c->r[1]+0x00000010u; // 800D1600
  return; // 800D1604
}

// fn_800D1608
void f_800D1608(Ctx* __restrict c) {
  trace_call(0x800D1608u);
  c->r[4]=0u+0x80420000u; // 800D1608
  c->r[0]=0u+0x00000000u; // 800D160C
  c->r[4]=c->r[4]+0xFFFF8FE0u; // 800D1610
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D1614
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1618
  return; // 800D161C
}

// fn_800D1620
void f_800D1620(Ctx* __restrict c) {
  trace_call(0x800D1620u);
  f_8030D728(c); return; // 800D1620
}

// fn_800D1624
void f_800D1624(Ctx* __restrict c) {
  trace_call(0x800D1624u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D1624
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1628
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D162C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D1630
  return; // 800D1634
}

// fn_800D1638
void f_800D1638(Ctx* __restrict c) {
  trace_call(0x800D1638u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1638
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D163C
  c->ctr=c->r[12]; // 800D1640
  if (true) { dispatch(c,c->ctr); return; } // 800D1644
}

// fn_800D1648
void f_800D1648(Ctx* __restrict c) {
  trace_call(0x800D1648u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1648
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D164C
  c->ctr=c->r[12]; // 800D1650
  if (true) { dispatch(c,c->ctr); return; } // 800D1654
}

// fn_800D1658
void f_800D1658(Ctx* __restrict c) {
  trace_call(0x800D1658u);
  c->r[3]=0u+0x80410000u; // 800D1658
  c->r[3]=c->r[3]+0xFFFFD07Du; // 800D165C
  return; // 800D1660
}

// fn_800D1664
void f_800D1664(Ctx* __restrict c) {
  trace_call(0x800D1664u);
  c->r[3]=0u+0x0000000Cu; // 800D1664
  return; // 800D1668
}

// fn_800D166C
void f_800D166C(Ctx* __restrict c) {
  trace_call(0x800D166Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D166C
  c->r[0]=c->lr; // 800D1670
  c->r[3]=0u+0x0000000Cu; // 800D1674
  c->r[4]=c->r[13]+0xFFFFB374u; // 800D1678
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D167C
  c->r[5]=0u+0x00000000u; // 800D1680
  c->r[6]=0u+0x00001001u; // 800D1684
  c->lr=0x800D168Cu; f_80244D20(c); // 800D1688
  cmps(c,0,(int32_t)c->r[3],0); // 800D168C
  if (crb(c,2)) { goto L_800D1698; } // 800D1690
  c->lr=0x800D1698u; f_800D1608(c); // 800D1694
L_800D1698:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1698
  c->lr=c->r[0]; // 800D169C
  c->r[1]=c->r[1]+0x00000010u; // 800D16A0
  return; // 800D16A4
}

// fn_800D16A8
void f_800D16A8(Ctx* __restrict c) {
  trace_call(0x800D16A8u);
  c->r[3]=0u+0x00000000u; // 800D16A8
  return; // 800D16AC
}

// fn_800D16B0
void f_800D16B0(Ctx* __restrict c) {
  trace_call(0x800D16B0u);
  c->r[5]=0u+0x80420000u; // 800D16B0
  c->r[4]=0u+0x7CF50000u; // 800D16B4
  c->r[5]=c->r[5]+0xFFFF8FACu; // 800D16B8
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D16BC
  c->r[0]=c->r[4]+0x00004C05u; // 800D16C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D16C4
  return; // 800D16C8
}

// fn_800D16CC
void f_800D16CC(Ctx* __restrict c) {
  trace_call(0x800D16CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D16CC
  c->r[0]=c->lr; // 800D16D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D16D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D16D8
  c->r[30]=c->r[3]|c->r[3]; // 800D16DC
  c->r[31]=c->r[4]|c->r[4]; // 800D16E0
  c->lr=0x800D16E8u; f_8030D728(c); // 800D16E4
  c->r[3]=c->r[31]|c->r[31]; // 800D16E8
  c->lr=0x800D16F0u; f_8030BD1C(c); // 800D16EC
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D16F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D16F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D16F8
  c->lr=c->r[0]; // 800D16FC
  c->r[1]=c->r[1]+0x00000010u; // 800D1700
  return; // 800D1704
}

// fn_800D1708
void f_800D1708(Ctx* __restrict c) {
  trace_call(0x800D1708u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D1708
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D170C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D1710
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D1714
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D1718
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D171C
  return; // 800D1720
}

// fn_800D1724
void f_800D1724(Ctx* __restrict c) {
  trace_call(0x800D1724u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1724
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1728
  c->ctr=c->r[12]; // 800D172C
  if (true) { dispatch(c,c->ctr); return; } // 800D1730
}

// fn_800D1734
void f_800D1734(Ctx* __restrict c) {
  trace_call(0x800D1734u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1734
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D1738
  c->ctr=c->r[12]; // 800D173C
  if (true) { dispatch(c,c->ctr); return; } // 800D1740
}

// fn_800D1744
void f_800D1744(Ctx* __restrict c) {
  trace_call(0x800D1744u);
  c->r[3]=0u+0x80410000u; // 800D1744
  c->r[3]=c->r[3]+0xFFFFD09Cu; // 800D1748
  return; // 800D174C
}

// fn_800D1750
void f_800D1750(Ctx* __restrict c) {
  trace_call(0x800D1750u);
  c->r[3]=0u+0x00000010u; // 800D1750
  return; // 800D1754
}

// fn_800D1758
void f_800D1758(Ctx* __restrict c) {
  trace_call(0x800D1758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1758
  c->r[0]=c->lr; // 800D175C
  c->r[3]=0u+0x00000010u; // 800D1760
  c->r[4]=c->r[13]+0xFFFFB379u; // 800D1764
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1768
  c->r[5]=0u+0x00000000u; // 800D176C
  c->r[6]=0u+0x00001001u; // 800D1770
  c->lr=0x800D1778u; f_80244D20(c); // 800D1774
  cmps(c,0,(int32_t)c->r[3],0); // 800D1778
  if (crb(c,2)) { goto L_800D1784; } // 800D177C
  c->lr=0x800D1784u; f_800D16B0(c); // 800D1780
L_800D1784:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1784
  c->lr=c->r[0]; // 800D1788
  c->r[1]=c->r[1]+0x00000010u; // 800D178C
  return; // 800D1790
}

// fn_800D1794
void f_800D1794(Ctx* __restrict c) {
  trace_call(0x800D1794u);
  c->r[4]=0u+0x80420000u; // 800D1794
  c->r[0]=0u+0x00000000u; // 800D1798
  c->r[4]=c->r[4]+0xFFFF8F78u; // 800D179C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D17A0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D17A4
  return; // 800D17A8
}

// fn_800D17AC
void f_800D17AC(Ctx* __restrict c) {
  trace_call(0x800D17ACu);
  f_8030D728(c); return; // 800D17AC
}

// fn_800D17B0
void f_800D17B0(Ctx* __restrict c) {
  trace_call(0x800D17B0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D17B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D17B4
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D17B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D17BC
  return; // 800D17C0
}

// fn_800D17C4
void f_800D17C4(Ctx* __restrict c) {
  trace_call(0x800D17C4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D17C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D17C8
  c->ctr=c->r[12]; // 800D17CC
  if (true) { dispatch(c,c->ctr); return; } // 800D17D0
}

// fn_800D17D4
void f_800D17D4(Ctx* __restrict c) {
  trace_call(0x800D17D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D17D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D17D8
  c->ctr=c->r[12]; // 800D17DC
  if (true) { dispatch(c,c->ctr); return; } // 800D17E0
}

// fn_800D17E4
void f_800D17E4(Ctx* __restrict c) {
  trace_call(0x800D17E4u);
  c->r[3]=0u+0x80410000u; // 800D17E4
  c->r[3]=c->r[3]+0xFFFFD0B1u; // 800D17E8
  return; // 800D17EC
}

// fn_800D17F0
void f_800D17F0(Ctx* __restrict c) {
  trace_call(0x800D17F0u);
  c->r[3]=0u+0x0000000Cu; // 800D17F0
  return; // 800D17F4
}

// fn_800D17F8
void f_800D17F8(Ctx* __restrict c) {
  trace_call(0x800D17F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D17F8
  c->r[0]=c->lr; // 800D17FC
  c->r[3]=0u+0x0000000Cu; // 800D1800
  c->r[4]=c->r[13]+0xFFFFB37Eu; // 800D1804
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1808
  c->r[5]=0u+0x00000000u; // 800D180C
  c->r[6]=0u+0x00001001u; // 800D1810
  c->lr=0x800D1818u; f_80244D20(c); // 800D1814
  cmps(c,0,(int32_t)c->r[3],0); // 800D1818
  if (crb(c,2)) { goto L_800D1824; } // 800D181C
  c->lr=0x800D1824u; f_800D1794(c); // 800D1820
L_800D1824:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1824
  c->lr=c->r[0]; // 800D1828
  c->r[1]=c->r[1]+0x00000010u; // 800D182C
  return; // 800D1830
}

// fn_800D1834
void f_800D1834(Ctx* __restrict c) {
  trace_call(0x800D1834u);
  c->r[4]=0u+0x80420000u; // 800D1834
  c->r[0]=0u+0x00000000u; // 800D1838
  c->r[4]=c->r[4]+0xFFFF8F44u; // 800D183C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D1840
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1844
  return; // 800D1848
}

// fn_800D184C
void f_800D184C(Ctx* __restrict c) {
  trace_call(0x800D184Cu);
  f_8030D728(c); return; // 800D184C
}

// fn_800D1850
void f_800D1850(Ctx* __restrict c) {
  trace_call(0x800D1850u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D1850
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1854
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D1858
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D185C
  return; // 800D1860
}

// fn_800D1864
void f_800D1864(Ctx* __restrict c) {
  trace_call(0x800D1864u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1864
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1868
  c->ctr=c->r[12]; // 800D186C
  if (true) { dispatch(c,c->ctr); return; } // 800D1870
}

// fn_800D1874
void f_800D1874(Ctx* __restrict c) {
  trace_call(0x800D1874u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1874
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D1878
  c->ctr=c->r[12]; // 800D187C
  if (true) { dispatch(c,c->ctr); return; } // 800D1880
}

// fn_800D1884
void f_800D1884(Ctx* __restrict c) {
  trace_call(0x800D1884u);
  c->r[3]=0u+0x80410000u; // 800D1884
  c->r[3]=c->r[3]+0xFFFFD0C3u; // 800D1888
  return; // 800D188C
}

// fn_800D1890
void f_800D1890(Ctx* __restrict c) {
  trace_call(0x800D1890u);
  c->r[3]=0u+0x0000000Cu; // 800D1890
  return; // 800D1894
}

// fn_800D1898
void f_800D1898(Ctx* __restrict c) {
  trace_call(0x800D1898u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1898
  c->r[0]=c->lr; // 800D189C
  c->r[3]=0u+0x0000000Cu; // 800D18A0
  c->r[4]=c->r[13]+0xFFFFB383u; // 800D18A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D18A8
  c->r[5]=0u+0x00000000u; // 800D18AC
  c->r[6]=0u+0x00001001u; // 800D18B0
  c->lr=0x800D18B8u; f_80244D20(c); // 800D18B4
  cmps(c,0,(int32_t)c->r[3],0); // 800D18B8
  if (crb(c,2)) { goto L_800D18C4; } // 800D18BC
  c->lr=0x800D18C4u; f_800D1834(c); // 800D18C0
L_800D18C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D18C4
  c->lr=c->r[0]; // 800D18C8
  c->r[1]=c->r[1]+0x00000010u; // 800D18CC
  return; // 800D18D0
}

// fn_800D18D4
void f_800D18D4(Ctx* __restrict c) {
  trace_call(0x800D18D4u);
  c->r[5]=0u+0x80420000u; // 800D18D4
  c->r[4]=0u+0x8C960000u; // 800D18D8
  c->r[5]=c->r[5]+0xFFFF8F10u; // 800D18DC
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D18E0
  c->r[0]=c->r[4]+0xFFFFD730u; // 800D18E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D18E8
  return; // 800D18EC
}

// fn_800D18F0
void f_800D18F0(Ctx* __restrict c) {
  trace_call(0x800D18F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D18F0
  c->r[0]=c->lr; // 800D18F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D18F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D18FC
  c->r[30]=c->r[3]|c->r[3]; // 800D1900
  c->r[31]=c->r[4]|c->r[4]; // 800D1904
  c->lr=0x800D190Cu; f_8030D728(c); // 800D1908
  c->r[3]=c->r[31]|c->r[31]; // 800D190C
  c->lr=0x800D1914u; f_8030BD1C(c); // 800D1910
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D1914
  c->r[3]=c->r[31]|c->r[31]; // 800D1918
  c->lr=0x800D1920u; f_8030BD1C(c); // 800D191C
  W8(c->r[30]+0x00000010u,c->r[3]); // 800D1920
  c->r[3]=c->r[31]|c->r[31]; // 800D1924
  c->lr=0x800D192Cu; f_8030BD1C(c); // 800D1928
  W8(c->r[30]+0x00000011u,c->r[3]); // 800D192C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1930
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1934
  c->lr=c->r[0]; // 800D1938
  c->r[1]=c->r[1]+0x00000010u; // 800D193C
  return; // 800D1940
}

// fn_800D1944
void f_800D1944(Ctx* __restrict c) {
  trace_call(0x800D1944u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800D1944
  c->r[7]=R32(c->r[3]+0x00000004u); // 800D1948
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800D194C
  c->r[5]=R8(c->r[3]+0x00000010u); // 800D1950
  c->r[0]=R8(c->r[3]+0x00000011u); // 800D1954
  W32(c->r[4]+0x00000000u,c->r[8]); // 800D1958
  W32(c->r[4]+0x00000004u,c->r[7]); // 800D195C
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800D1960
  W8(c->r[4]+0x00000010u,c->r[5]); // 800D1964
  W8(c->r[4]+0x00000011u,c->r[0]); // 800D1968
  return; // 800D196C
}

// fn_800D1970
void f_800D1970(Ctx* __restrict c) {
  trace_call(0x800D1970u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1970
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1974
  c->ctr=c->r[12]; // 800D1978
  if (true) { dispatch(c,c->ctr); return; } // 800D197C
}

// fn_800D1980
void f_800D1980(Ctx* __restrict c) {
  trace_call(0x800D1980u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1980
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D1984
  c->ctr=c->r[12]; // 800D1988
  if (true) { dispatch(c,c->ctr); return; } // 800D198C
}

// fn_800D1990
void f_800D1990(Ctx* __restrict c) {
  trace_call(0x800D1990u);
  c->r[3]=0u+0x80410000u; // 800D1990
  c->r[3]=c->r[3]+0xFFFFD0D5u; // 800D1994
  return; // 800D1998
}

// fn_800D199C
void f_800D199C(Ctx* __restrict c) {
  trace_call(0x800D199Cu);
  c->r[3]=0u+0x00000014u; // 800D199C
  return; // 800D19A0
}

// fn_800D19A4
void f_800D19A4(Ctx* __restrict c) {
  trace_call(0x800D19A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D19A4
  c->r[0]=c->lr; // 800D19A8
  c->r[3]=0u+0x00000014u; // 800D19AC
  c->r[4]=c->r[13]+0xFFFFB388u; // 800D19B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D19B4
  c->r[5]=0u+0x00000000u; // 800D19B8
  c->r[6]=0u+0x00001001u; // 800D19BC
  c->lr=0x800D19C4u; f_80244D20(c); // 800D19C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D19C4
  if (crb(c,2)) { goto L_800D19D0; } // 800D19C8
  c->lr=0x800D19D0u; f_800D18D4(c); // 800D19CC
L_800D19D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D19D0
  c->lr=c->r[0]; // 800D19D4
  c->r[1]=c->r[1]+0x00000010u; // 800D19D8
  return; // 800D19DC
}

// fn_800D19E0
void f_800D19E0(Ctx* __restrict c) {
  trace_call(0x800D19E0u);
  c->r[5]=0u+0x80420000u; // 800D19E0
  c->r[4]=0u+0x60780000u; // 800D19E4
  c->r[5]=c->r[5]+0xFFFF8EDCu; // 800D19E8
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D19EC
  c->r[0]=c->r[4]+0xFFFFB26Eu; // 800D19F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D19F4
  return; // 800D19F8
}

// fn_800D19FC
void f_800D19FC(Ctx* __restrict c) {
  trace_call(0x800D19FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D19FC
  c->r[0]=c->lr; // 800D1A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1A04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1A08
  c->r[30]=c->r[3]|c->r[3]; // 800D1A0C
  c->r[31]=c->r[4]|c->r[4]; // 800D1A10
  c->lr=0x800D1A18u; f_8030D728(c); // 800D1A14
  c->r[3]=c->r[31]|c->r[31]; // 800D1A18
  c->lr=0x800D1A20u; f_8030BD1C(c); // 800D1A1C
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D1A20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1A24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1A28
  c->lr=c->r[0]; // 800D1A2C
  c->r[1]=c->r[1]+0x00000010u; // 800D1A30
  return; // 800D1A34
}

// fn_800D1A38
void f_800D1A38(Ctx* __restrict c) {
  trace_call(0x800D1A38u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D1A38
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D1A3C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D1A40
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D1A44
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D1A48
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D1A4C
  return; // 800D1A50
}

// fn_800D1A54
void f_800D1A54(Ctx* __restrict c) {
  trace_call(0x800D1A54u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1A54
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1A58
  c->ctr=c->r[12]; // 800D1A5C
  if (true) { dispatch(c,c->ctr); return; } // 800D1A60
}

// fn_800D1A64
void f_800D1A64(Ctx* __restrict c) {
  trace_call(0x800D1A64u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1A64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D1A68
  c->ctr=c->r[12]; // 800D1A6C
  if (true) { dispatch(c,c->ctr); return; } // 800D1A70
}

// fn_800D1A74
void f_800D1A74(Ctx* __restrict c) {
  trace_call(0x800D1A74u);
  c->r[3]=0u+0x80410000u; // 800D1A74
  c->r[3]=c->r[3]+0xFFFFD0E7u; // 800D1A78
  return; // 800D1A7C
}

// fn_800D1A80
void f_800D1A80(Ctx* __restrict c) {
  trace_call(0x800D1A80u);
  c->r[3]=0u+0x00000010u; // 800D1A80
  return; // 800D1A84
}

// fn_800D1A88
void f_800D1A88(Ctx* __restrict c) {
  trace_call(0x800D1A88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1A88
  c->r[0]=c->lr; // 800D1A8C
  c->r[3]=0u+0x00000010u; // 800D1A90
  c->r[4]=c->r[13]+0xFFFFB38Du; // 800D1A94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1A98
  c->r[5]=0u+0x00000000u; // 800D1A9C
  c->r[6]=0u+0x00001001u; // 800D1AA0
  c->lr=0x800D1AA8u; f_80244D20(c); // 800D1AA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D1AA8
  if (crb(c,2)) { goto L_800D1AB4; } // 800D1AAC
  c->lr=0x800D1AB4u; f_800D19E0(c); // 800D1AB0
L_800D1AB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1AB4
  c->lr=c->r[0]; // 800D1AB8
  c->r[1]=c->r[1]+0x00000010u; // 800D1ABC
  return; // 800D1AC0
}

// fn_800D1AC4
void f_800D1AC4(Ctx* __restrict c) {
  trace_call(0x800D1AC4u);
  c->r[6]=0u+0x80420000u; // 800D1AC4
  c->r[4]=0u+0xB5900000u; // 800D1AC8
  c->r[6]=c->r[6]+0xFFFF8EA8u; // 800D1ACC
  c->r[5]=0u+0x00000000u; // 800D1AD0
  c->r[0]=c->r[4]+0x00002BE6u; // 800D1AD4
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D1AD8
  W32(c->r[3]+0x00000018u,c->r[5]); // 800D1ADC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1AE0
  return; // 800D1AE4
}

// fn_800D1AE8
void f_800D1AE8(Ctx* __restrict c) {
  trace_call(0x800D1AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1AE8
  c->r[0]=c->lr; // 800D1AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1AF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1AF4
  c->r[30]=c->r[3]|c->r[3]; // 800D1AF8
  c->r[31]=c->r[4]|c->r[4]; // 800D1AFC
  c->lr=0x800D1B04u; f_8030D728(c); // 800D1B00
  c->r[3]=c->r[31]|c->r[31]; // 800D1B04
  c->lr=0x800D1B0Cu; f_8030BD1C(c); // 800D1B08
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D1B0C
  c->r[3]=c->r[31]|c->r[31]; // 800D1B10
  c->r[4]=0u+0x00000000u; // 800D1B14
  c->lr=0x800D1B1Cu; f_8030BE30(c); // 800D1B18
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D1B1C
  c->r[3]=c->r[31]|c->r[31]; // 800D1B20
  c->lr=0x800D1B28u; f_8030BD1C(c); // 800D1B24
  W32(c->r[30]+0x00000014u,c->r[3]); // 800D1B28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1B30
  c->lr=c->r[0]; // 800D1B34
  c->r[1]=c->r[1]+0x00000010u; // 800D1B38
  return; // 800D1B3C
}

// fn_800D1B40
void f_800D1B40(Ctx* __restrict c) {
  trace_call(0x800D1B40u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D1B40
  c->r[5]=c->r[3]|c->r[3]; // 800D1B44
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D1B48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1B4C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D1B50
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D1B54
  c->r[3]=c->r[4]+0x00000010u; // 800D1B58
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D1B5C
  c->r[4]=c->r[5]+0x00000010u; // 800D1B60
  f_8003AB48(c); return; // 800D1B64
}

// fn_800D1B68
void f_800D1B68(Ctx* __restrict c) {
  trace_call(0x800D1B68u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1B68
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1B6C
  c->ctr=c->r[12]; // 800D1B70
  if (true) { dispatch(c,c->ctr); return; } // 800D1B74
}

// fn_800D1B78
void f_800D1B78(Ctx* __restrict c) {
  trace_call(0x800D1B78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1B78
  c->r[0]=c->lr; // 800D1B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1B80
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1B84
  c->r[29]=c->r[3]|c->r[3]; // 800D1B88
  c->r[30]=c->r[4]|c->r[4]; // 800D1B8C
  c->r[31]=c->r[5]|c->r[5]; // 800D1B90
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D1B94
  cmps(c,0,(int32_t)c->r[0],7); // 800D1B98
  if (!crb(c,0)) { goto L_800D1BAC; } // 800D1B9C
  c->r[4]=c->r[31]|c->r[31]; // 800D1BA0
  c->r[3]=c->r[3]+0x00000010u; // 800D1BA4
  c->lr=0x800D1BACu; f_8003A994(c); // 800D1BA8
L_800D1BAC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D1BAC
  c->r[3]=c->r[29]|c->r[29]; // 800D1BB0
  c->r[4]=c->r[30]|c->r[30]; // 800D1BB4
  c->r[5]=c->r[31]|c->r[31]; // 800D1BB8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D1BBC
  c->ctr=c->r[12]; // 800D1BC0
  if (true) { c->lr=0x800D1BC8u; dispatch(c,c->ctr); } // 800D1BC4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1BC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1BCC
  c->lr=c->r[0]; // 800D1BD0
  c->r[1]=c->r[1]+0x00000020u; // 800D1BD4
  return; // 800D1BD8
}

// fn_800D1BDC
void f_800D1BDC(Ctx* __restrict c) {
  trace_call(0x800D1BDCu);
  c->r[3]=0u+0x80410000u; // 800D1BDC
  c->r[3]=c->r[3]+0xFFFFD0FAu; // 800D1BE0
  return; // 800D1BE4
}

// fn_800D1BE8
void f_800D1BE8(Ctx* __restrict c) {
  trace_call(0x800D1BE8u);
  c->r[3]=0u+0x0000001Cu; // 800D1BE8
  return; // 800D1BEC
}

// fn_800D1BF0
void f_800D1BF0(Ctx* __restrict c) {
  trace_call(0x800D1BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1BF0
  c->r[0]=c->lr; // 800D1BF4
  c->r[3]=0u+0x0000001Cu; // 800D1BF8
  c->r[4]=c->r[13]+0xFFFFB392u; // 800D1BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1C00
  c->r[5]=0u+0x00000000u; // 800D1C04
  c->r[6]=0u+0x00001001u; // 800D1C08
  c->lr=0x800D1C10u; f_80244D20(c); // 800D1C0C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C10
  if (crb(c,2)) { goto L_800D1C1C; } // 800D1C14
  c->lr=0x800D1C1Cu; f_800D1AC4(c); // 800D1C18
L_800D1C1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1C1C
  c->lr=c->r[0]; // 800D1C20
  c->r[1]=c->r[1]+0x00000010u; // 800D1C24
  return; // 800D1C28
}

// fn_800D1C2C
void f_800D1C2C(Ctx* __restrict c) {
  trace_call(0x800D1C2Cu);
  c->r[6]=0u+0x80420000u; // 800D1C2C
  c->r[4]=0u+0xE56B0000u; // 800D1C30
  c->r[6]=c->r[6]+0xFFFF8E74u; // 800D1C34
  c->r[5]=0u+0x00000000u; // 800D1C38
  c->r[0]=c->r[4]+0x00006F6Bu; // 800D1C3C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D1C40
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D1C44
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1C48
  return; // 800D1C4C
}

// fn_800D1C50
void f_800D1C50(Ctx* __restrict c) {
  trace_call(0x800D1C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1C50
  c->r[0]=c->lr; // 800D1C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1C58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1C5C
  c->r[30]=c->r[3]|c->r[3]; // 800D1C60
  c->r[31]=c->r[4]|c->r[4]; // 800D1C64
  c->lr=0x800D1C6Cu; f_8030D728(c); // 800D1C68
  c->r[3]=c->r[31]|c->r[31]; // 800D1C6C
  c->r[4]=0u+0x00000000u; // 800D1C70
  c->lr=0x800D1C78u; f_8030BE30(c); // 800D1C74
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D1C78
  c->r[3]=c->r[31]|c->r[31]; // 800D1C7C
  c->lr=0x800D1C84u; f_8030BD1C(c); // 800D1C80
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D1C84
  c->r[3]=c->r[31]|c->r[31]; // 800D1C88
  c->lr=0x800D1C90u; f_8030BD1C(c); // 800D1C8C
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D1C90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1C98
  c->lr=c->r[0]; // 800D1C9C
  c->r[1]=c->r[1]+0x00000010u; // 800D1CA0
  return; // 800D1CA4
}

// fn_800D1CA8
void f_800D1CA8(Ctx* __restrict c) {
  trace_call(0x800D1CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1CA8
  c->r[0]=c->lr; // 800D1CAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1CB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1CB4
  c->r[30]=c->r[3]|c->r[3]; // 800D1CB8
  c->r[31]=c->r[4]|c->r[4]; // 800D1CBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D1CC0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D1CC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1CC8
  c->r[3]=c->r[4]+0x0000000Cu; // 800D1CCC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D1CD0
  c->r[4]=c->r[30]+0x0000000Cu; // 800D1CD4
  c->lr=0x800D1CDCu; f_8003AB48(c); // 800D1CD8
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D1CDC
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D1CE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1CE8
  c->lr=c->r[0]; // 800D1CEC
  c->r[1]=c->r[1]+0x00000010u; // 800D1CF0
  return; // 800D1CF4
}

// fn_800D1CF8
void f_800D1CF8(Ctx* __restrict c) {
  trace_call(0x800D1CF8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1CF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1CFC
  c->ctr=c->r[12]; // 800D1D00
  if (true) { dispatch(c,c->ctr); return; } // 800D1D04
}

// fn_800D1D08
void f_800D1D08(Ctx* __restrict c) {
  trace_call(0x800D1D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1D08
  c->r[0]=c->lr; // 800D1D0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1D10
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1D14
  c->r[29]=c->r[3]|c->r[3]; // 800D1D18
  c->r[30]=c->r[4]|c->r[4]; // 800D1D1C
  c->r[31]=c->r[5]|c->r[5]; // 800D1D20
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D1D24
  cmps(c,0,(int32_t)c->r[0],7); // 800D1D28
  if (!crb(c,0)) { goto L_800D1D3C; } // 800D1D2C
  c->r[4]=c->r[31]|c->r[31]; // 800D1D30
  c->r[3]=c->r[3]+0x0000000Cu; // 800D1D34
  c->lr=0x800D1D3Cu; f_8003A994(c); // 800D1D38
L_800D1D3C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D1D3C
  c->r[3]=c->r[29]|c->r[29]; // 800D1D40
  c->r[4]=c->r[30]|c->r[30]; // 800D1D44
  c->r[5]=c->r[31]|c->r[31]; // 800D1D48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D1D4C
  c->ctr=c->r[12]; // 800D1D50
  if (true) { c->lr=0x800D1D58u; dispatch(c,c->ctr); } // 800D1D54
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1D58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1D5C
  c->lr=c->r[0]; // 800D1D60
  c->r[1]=c->r[1]+0x00000020u; // 800D1D64
  return; // 800D1D68
}

// fn_800D1D6C
void f_800D1D6C(Ctx* __restrict c) {
  trace_call(0x800D1D6Cu);
  c->r[3]=0u+0x80410000u; // 800D1D6C
  c->r[3]=c->r[3]+0xFFFFD112u; // 800D1D70
  return; // 800D1D74
}

// fn_800D1D78
void f_800D1D78(Ctx* __restrict c) {
  trace_call(0x800D1D78u);
  c->r[3]=0u+0x0000001Cu; // 800D1D78
  return; // 800D1D7C
}

// fn_800D1D80
void f_800D1D80(Ctx* __restrict c) {
  trace_call(0x800D1D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1D80
  c->r[0]=c->lr; // 800D1D84
  c->r[3]=0u+0x0000001Cu; // 800D1D88
  c->r[4]=c->r[13]+0xFFFFB397u; // 800D1D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1D90
  c->r[5]=0u+0x00000000u; // 800D1D94
  c->r[6]=0u+0x00001001u; // 800D1D98
  c->lr=0x800D1DA0u; f_80244D20(c); // 800D1D9C
  cmps(c,0,(int32_t)c->r[3],0); // 800D1DA0
  if (crb(c,2)) { goto L_800D1DAC; } // 800D1DA4
  c->lr=0x800D1DACu; f_800D1C2C(c); // 800D1DA8
L_800D1DAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1DAC
  c->lr=c->r[0]; // 800D1DB0
  c->r[1]=c->r[1]+0x00000010u; // 800D1DB4
  return; // 800D1DB8
}

// fn_800D1DBC
void f_800D1DBC(Ctx* __restrict c) {
  trace_call(0x800D1DBCu);
  c->r[6]=0u+0x80420000u; // 800D1DBC
  c->r[4]=0u+0x2CF00000u; // 800D1DC0
  c->r[6]=c->r[6]+0xFFFF8E40u; // 800D1DC4
  c->r[5]=0u+0x00000000u; // 800D1DC8
  c->r[0]=c->r[4]+0xFFFFAC3Fu; // 800D1DCC
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D1DD0
  W32(c->r[3]+0x00000018u,c->r[5]); // 800D1DD4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1DD8
  return; // 800D1DDC
}

// fn_800D1DE0
void f_800D1DE0(Ctx* __restrict c) {
  trace_call(0x800D1DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1DE0
  c->r[0]=c->lr; // 800D1DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1DE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1DEC
  c->r[30]=c->r[3]|c->r[3]; // 800D1DF0
  c->r[31]=c->r[4]|c->r[4]; // 800D1DF4
  c->lr=0x800D1DFCu; f_8030D728(c); // 800D1DF8
  c->r[3]=c->r[31]|c->r[31]; // 800D1DFC
  c->lr=0x800D1E04u; f_8030BD1C(c); // 800D1E00
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D1E04
  c->r[3]=c->r[31]|c->r[31]; // 800D1E08
  c->lr=0x800D1E10u; f_8030BD1C(c); // 800D1E0C
  W8(c->r[30]+0x0000000Du,c->r[3]); // 800D1E10
  c->r[3]=c->r[31]|c->r[31]; // 800D1E14
  c->r[4]=0u+0x00000000u; // 800D1E18
  c->lr=0x800D1E20u; f_8030BE30(c); // 800D1E1C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D1E20
  c->r[3]=c->r[31]|c->r[31]; // 800D1E24
  c->lr=0x800D1E2Cu; f_8030BD1C(c); // 800D1E28
  W32(c->r[30]+0x00000014u,c->r[3]); // 800D1E2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1E30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1E34
  c->lr=c->r[0]; // 800D1E38
  c->r[1]=c->r[1]+0x00000010u; // 800D1E3C
  return; // 800D1E40
}

// fn_800D1E44
void f_800D1E44(Ctx* __restrict c) {
  trace_call(0x800D1E44u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D1E44
  c->r[5]=c->r[3]|c->r[3]; // 800D1E48
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D1E4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1E50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D1E54
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D1E58
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D1E5C
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800D1E60
  c->r[3]=c->r[4]+0x00000010u; // 800D1E64
  W8(c->r[4]+0x0000000Du,c->r[0]); // 800D1E68
  c->r[4]=c->r[5]+0x00000010u; // 800D1E6C
  f_8003AB48(c); return; // 800D1E70
}

// fn_800D1E74
void f_800D1E74(Ctx* __restrict c) {
  trace_call(0x800D1E74u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1E74
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1E78
  c->ctr=c->r[12]; // 800D1E7C
  if (true) { dispatch(c,c->ctr); return; } // 800D1E80
}

// fn_800D1E84
void f_800D1E84(Ctx* __restrict c) {
  trace_call(0x800D1E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1E84
  c->r[0]=c->lr; // 800D1E88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1E8C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1E90
  c->r[29]=c->r[3]|c->r[3]; // 800D1E94
  c->r[30]=c->r[4]|c->r[4]; // 800D1E98
  c->r[31]=c->r[5]|c->r[5]; // 800D1E9C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D1EA0
  cmps(c,0,(int32_t)c->r[0],7); // 800D1EA4
  if (!crb(c,0)) { goto L_800D1EB8; } // 800D1EA8
  c->r[4]=c->r[31]|c->r[31]; // 800D1EAC
  c->r[3]=c->r[3]+0x00000010u; // 800D1EB0
  c->lr=0x800D1EB8u; f_8003A994(c); // 800D1EB4
L_800D1EB8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D1EB8
  c->r[3]=c->r[29]|c->r[29]; // 800D1EBC
  c->r[4]=c->r[30]|c->r[30]; // 800D1EC0
  c->r[5]=c->r[31]|c->r[31]; // 800D1EC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D1EC8
  c->ctr=c->r[12]; // 800D1ECC
  if (true) { c->lr=0x800D1ED4u; dispatch(c,c->ctr); } // 800D1ED0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1ED4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1ED8
  c->lr=c->r[0]; // 800D1EDC
  c->r[1]=c->r[1]+0x00000020u; // 800D1EE0
  return; // 800D1EE4
}

// fn_800D1EE8
void f_800D1EE8(Ctx* __restrict c) {
  trace_call(0x800D1EE8u);
  c->r[3]=0u+0x80410000u; // 800D1EE8
  c->r[3]=c->r[3]+0xFFFFD127u; // 800D1EEC
  return; // 800D1EF0
}

// fn_800D1EF4
void f_800D1EF4(Ctx* __restrict c) {
  trace_call(0x800D1EF4u);
  c->r[3]=0u+0x0000001Cu; // 800D1EF4
  return; // 800D1EF8
}

// fn_800D1EFC
void f_800D1EFC(Ctx* __restrict c) {
  trace_call(0x800D1EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1EFC
  c->r[0]=c->lr; // 800D1F00
  c->r[3]=0u+0x0000001Cu; // 800D1F04
  c->r[4]=c->r[13]+0xFFFFB39Cu; // 800D1F08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1F0C
  c->r[5]=0u+0x00000000u; // 800D1F10
  c->r[6]=0u+0x00001001u; // 800D1F14
  c->lr=0x800D1F1Cu; f_80244D20(c); // 800D1F18
  cmps(c,0,(int32_t)c->r[3],0); // 800D1F1C
  if (crb(c,2)) { goto L_800D1F28; } // 800D1F20
  c->lr=0x800D1F28u; f_800D1DBC(c); // 800D1F24
L_800D1F28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1F28
  c->lr=c->r[0]; // 800D1F2C
  c->r[1]=c->r[1]+0x00000010u; // 800D1F30
  return; // 800D1F34
}

// fn_800D1F38
void f_800D1F38(Ctx* __restrict c) {
  trace_call(0x800D1F38u);
  c->r[6]=0u+0x80420000u; // 800D1F38
  c->r[4]=0u+0x59720000u; // 800D1F3C
  c->r[6]=c->r[6]+0xFFFF8E0Cu; // 800D1F40
  c->r[5]=0u+0x00000000u; // 800D1F44
  c->r[0]=c->r[4]+0x00004EB8u; // 800D1F48
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D1F4C
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D1F50
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D1F54
  return; // 800D1F58
}

// fn_800D1F5C
void f_800D1F5C(Ctx* __restrict c) {
  trace_call(0x800D1F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1F5C
  c->r[0]=c->lr; // 800D1F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1F64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1F68
  c->r[30]=c->r[3]|c->r[3]; // 800D1F6C
  c->r[31]=c->r[4]|c->r[4]; // 800D1F70
  c->lr=0x800D1F78u; f_8030D728(c); // 800D1F74
  c->r[3]=c->r[31]|c->r[31]; // 800D1F78
  c->r[4]=0u+0x00000000u; // 800D1F7C
  c->lr=0x800D1F84u; f_8030BE30(c); // 800D1F80
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D1F84
  c->r[3]=c->r[31]|c->r[31]; // 800D1F88
  c->lr=0x800D1F90u; f_8030BD1C(c); // 800D1F8C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D1F90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1F94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1F98
  c->lr=c->r[0]; // 800D1F9C
  c->r[1]=c->r[1]+0x00000010u; // 800D1FA0
  return; // 800D1FA4
}

// fn_800D1FA8
void f_800D1FA8(Ctx* __restrict c) {
  trace_call(0x800D1FA8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D1FA8
  c->r[5]=c->r[3]|c->r[3]; // 800D1FAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D1FB0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D1FB4
  c->r[3]=c->r[4]+0x0000000Cu; // 800D1FB8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D1FBC
  c->r[4]=c->r[5]+0x0000000Cu; // 800D1FC0
  f_8003AB48(c); return; // 800D1FC4
}

// fn_800D1FC8
void f_800D1FC8(Ctx* __restrict c) {
  trace_call(0x800D1FC8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D1FC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D1FCC
  c->ctr=c->r[12]; // 800D1FD0
  if (true) { dispatch(c,c->ctr); return; } // 800D1FD4
}

// fn_800D1FD8
void f_800D1FD8(Ctx* __restrict c) {
  trace_call(0x800D1FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1FD8
  c->r[0]=c->lr; // 800D1FDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1FE0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1FE4
  c->r[29]=c->r[3]|c->r[3]; // 800D1FE8
  c->r[30]=c->r[4]|c->r[4]; // 800D1FEC
  c->r[31]=c->r[5]|c->r[5]; // 800D1FF0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D1FF4
  cmps(c,0,(int32_t)c->r[0],7); // 800D1FF8
  if (!crb(c,0)) { goto L_800D200C; } // 800D1FFC
  c->r[4]=c->r[31]|c->r[31]; // 800D2000
  c->r[3]=c->r[3]+0x0000000Cu; // 800D2004
  c->lr=0x800D200Cu; f_8003A994(c); // 800D2008
L_800D200C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D200C
  c->r[3]=c->r[29]|c->r[29]; // 800D2010
  c->r[4]=c->r[30]|c->r[30]; // 800D2014
  c->r[5]=c->r[31]|c->r[31]; // 800D2018
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D201C
  c->ctr=c->r[12]; // 800D2020
  if (true) { c->lr=0x800D2028u; dispatch(c,c->ctr); } // 800D2024
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2028
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D202C
  c->lr=c->r[0]; // 800D2030
  c->r[1]=c->r[1]+0x00000020u; // 800D2034
  return; // 800D2038
}

// fn_800D203C
void f_800D203C(Ctx* __restrict c) {
  trace_call(0x800D203Cu);
  c->r[3]=0u+0x80410000u; // 800D203C
  c->r[3]=c->r[3]+0xFFFFD144u; // 800D2040
  return; // 800D2044
}

// fn_800D2048
void f_800D2048(Ctx* __restrict c) {
  trace_call(0x800D2048u);
  c->r[3]=0u+0x00000018u; // 800D2048
  return; // 800D204C
}

// fn_800D2050
void f_800D2050(Ctx* __restrict c) {
  trace_call(0x800D2050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2050
  c->r[0]=c->lr; // 800D2054
  c->r[3]=0u+0x00000018u; // 800D2058
  c->r[4]=c->r[13]+0xFFFFB3A1u; // 800D205C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2060
  c->r[5]=0u+0x00000000u; // 800D2064
  c->r[6]=0u+0x00001001u; // 800D2068
  c->lr=0x800D2070u; f_80244D20(c); // 800D206C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2070
  if (crb(c,2)) { goto L_800D207C; } // 800D2074
  c->lr=0x800D207Cu; f_800D1F38(c); // 800D2078
L_800D207C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D207C
  c->lr=c->r[0]; // 800D2080
  c->r[1]=c->r[1]+0x00000010u; // 800D2084
  return; // 800D2088
}

// fn_800D208C
void f_800D208C(Ctx* __restrict c) {
  trace_call(0x800D208Cu);
  c->r[4]=0u+0x80420000u; // 800D208C
  c->r[0]=0u+0x00000000u; // 800D2090
  c->r[4]=c->r[4]+0xFFFF8DD8u; // 800D2094
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D2098
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D209C
  return; // 800D20A0
}

// fn_800D20A4
void f_800D20A4(Ctx* __restrict c) {
  trace_call(0x800D20A4u);
  f_8030D728(c); return; // 800D20A4
}

// fn_800D20A8
void f_800D20A8(Ctx* __restrict c) {
  trace_call(0x800D20A8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D20A8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D20AC
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D20B0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D20B4
  return; // 800D20B8
}

// fn_800D20BC
void f_800D20BC(Ctx* __restrict c) {
  trace_call(0x800D20BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D20BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D20C0
  c->ctr=c->r[12]; // 800D20C4
  if (true) { dispatch(c,c->ctr); return; } // 800D20C8
}

// fn_800D20CC
void f_800D20CC(Ctx* __restrict c) {
  trace_call(0x800D20CCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D20CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D20D0
  c->ctr=c->r[12]; // 800D20D4
  if (true) { dispatch(c,c->ctr); return; } // 800D20D8
}

// fn_800D20DC
void f_800D20DC(Ctx* __restrict c) {
  trace_call(0x800D20DCu);
  c->r[3]=0u+0x80410000u; // 800D20DC
  c->r[3]=c->r[3]+0xFFFFD15Eu; // 800D20E0
  return; // 800D20E4
}

// fn_800D20E8
void f_800D20E8(Ctx* __restrict c) {
  trace_call(0x800D20E8u);
  c->r[3]=0u+0x0000000Cu; // 800D20E8
  return; // 800D20EC
}

// fn_800D20F0
void f_800D20F0(Ctx* __restrict c) {
  trace_call(0x800D20F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D20F0
  c->r[0]=c->lr; // 800D20F4
  c->r[3]=0u+0x0000000Cu; // 800D20F8
  c->r[4]=c->r[13]+0xFFFFB3A6u; // 800D20FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2100
  c->r[5]=0u+0x00000000u; // 800D2104
  c->r[6]=0u+0x00001001u; // 800D2108
  c->lr=0x800D2110u; f_80244D20(c); // 800D210C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2110
  if (crb(c,2)) { goto L_800D211C; } // 800D2114
  c->lr=0x800D211Cu; f_800D208C(c); // 800D2118
L_800D211C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D211C
  c->lr=c->r[0]; // 800D2120
  c->r[1]=c->r[1]+0x00000010u; // 800D2124
  return; // 800D2128
}

// fn_800D212C
void f_800D212C(Ctx* __restrict c) {
  trace_call(0x800D212Cu);
  c->r[6]=0u+0x80420000u; // 800D212C
  c->r[4]=0u+0x59720000u; // 800D2130
  c->r[6]=c->r[6]+0xFFFF8DA4u; // 800D2134
  c->r[5]=0u+0x00000000u; // 800D2138
  c->r[0]=c->r[4]+0x00004EB8u; // 800D213C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D2140
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D2144
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D2148
  return; // 800D214C
}

// fn_800D2150
void f_800D2150(Ctx* __restrict c) {
  trace_call(0x800D2150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2150
  c->r[0]=c->lr; // 800D2154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2158
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D215C
  c->r[30]=c->r[3]|c->r[3]; // 800D2160
  c->r[31]=c->r[4]|c->r[4]; // 800D2164
  c->lr=0x800D216Cu; f_8030D728(c); // 800D2168
  c->r[3]=c->r[31]|c->r[31]; // 800D216C
  c->r[4]=0u+0x00000000u; // 800D2170
  c->lr=0x800D2178u; f_8030BE30(c); // 800D2174
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D2178
  c->r[3]=c->r[31]|c->r[31]; // 800D217C
  c->lr=0x800D2184u; f_8030BD1C(c); // 800D2180
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D2184
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2188
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D218C
  c->lr=c->r[0]; // 800D2190
  c->r[1]=c->r[1]+0x00000010u; // 800D2194
  return; // 800D2198
}

// fn_800D219C
void f_800D219C(Ctx* __restrict c) {
  trace_call(0x800D219Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D219C
  c->r[5]=c->r[3]|c->r[3]; // 800D21A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D21A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D21A8
  c->r[3]=c->r[4]+0x0000000Cu; // 800D21AC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D21B0
  c->r[4]=c->r[5]+0x0000000Cu; // 800D21B4
  f_8003AB48(c); return; // 800D21B8
}

