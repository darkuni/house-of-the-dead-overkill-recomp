#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800EE7A8
void f_800EE7A8(Ctx* __restrict c) {
  trace_call(0x800EE7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE7A8
  c->r[0]=c->lr; // 800EE7AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE7B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE7B4
  c->r[30]=c->r[3]|c->r[3]; // 800EE7B8
  c->r[31]=c->r[4]|c->r[4]; // 800EE7BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE7C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EE7C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EE7C8
  c->r[3]=c->r[4]+0x00000030u; // 800EE7CC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EE7D0
  c->r[4]=c->r[30]+0x00000030u; // 800EE7D4
  c->lr=0x800EE7DCu; f_803A6F10(c); // 800EE7D8
  c->r[0]=R8(c->r[30]+0x000000B0u); // 800EE7DC
  W8(c->r[31]+0x000000B0u,c->r[0]); // 800EE7E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE7E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE7E8
  c->lr=c->r[0]; // 800EE7EC
  c->r[1]=c->r[1]+0x00000010u; // 800EE7F0
  return; // 800EE7F4
}

// fn_800EE7F8
void f_800EE7F8(Ctx* __restrict c) {
  trace_call(0x800EE7F8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EE7F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EE7FC
  c->ctr=c->r[12]; // 800EE800
  if (true) { dispatch(c,c->ctr); return; } // 800EE804
}

// fn_800EE808
void f_800EE808(Ctx* __restrict c) {
  trace_call(0x800EE808u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EE808
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE80C
  c->ctr=c->r[12]; // 800EE810
  if (true) { dispatch(c,c->ctr); return; } // 800EE814
}

// fn_800EE818
void f_800EE818(Ctx* __restrict c) {
  trace_call(0x800EE818u);
  c->r[3]=0u+0x80410000u; // 800EE818
  c->r[3]=c->r[3]+0xFFFFE709u; // 800EE81C
  return; // 800EE820
}

// fn_800EE824
void f_800EE824(Ctx* __restrict c) {
  trace_call(0x800EE824u);
  c->r[3]=0u+0x000000B4u; // 800EE824
  return; // 800EE828
}

// fn_800EE82C
void f_800EE82C(Ctx* __restrict c) {
  trace_call(0x800EE82Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE82C
  c->r[0]=c->lr; // 800EE830
  c->r[3]=0u+0x000000B4u; // 800EE834
  c->r[4]=c->r[13]+0xFFFFB9BBu; // 800EE838
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE83C
  c->r[5]=0u+0x00000000u; // 800EE840
  c->r[6]=0u+0x00001001u; // 800EE844
  c->lr=0x800EE84Cu; f_80244D20(c); // 800EE848
  cmps(c,0,(int32_t)c->r[3],0); // 800EE84C
  if (crb(c,2)) { goto L_800EE858; } // 800EE850
  c->lr=0x800EE858u; f_800EE714(c); // 800EE854
L_800EE858:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE858
  c->lr=c->r[0]; // 800EE85C
  c->r[1]=c->r[1]+0x00000010u; // 800EE860
  return; // 800EE864
}

// fn_800EE868
void f_800EE868(Ctx* __restrict c) {
  trace_call(0x800EE868u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE868
  c->r[0]=c->lr; // 800EE86C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE874
  c->r[31]=c->r[3]|c->r[3]; // 800EE878
  c->lr=0x800EE880u; f_800D7120(c); // 800EE87C
  c->r[5]=0u+0x80410000u; // 800EE880
  c->r[3]=0u+0x7EEB0000u; // 800EE884
  c->r[4]=0u+0x00000000u; // 800EE888
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EE88C
  c->r[0]=c->r[3]+0x0000309Cu; // 800EE890
  c->r[5]=c->r[5]+0x0000511Cu; // 800EE894
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EE898
  c->r[3]=c->r[31]|c->r[31]; // 800EE89C
  W32(c->r[31]+0x00000044u,c->r[4]); // 800EE8A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EE8A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE8A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE8AC
  c->lr=c->r[0]; // 800EE8B0
  c->r[1]=c->r[1]+0x00000010u; // 800EE8B4
  return; // 800EE8B8
}

// fn_800EE8BC
void f_800EE8BC(Ctx* __restrict c) {
  trace_call(0x800EE8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE8BC
  c->r[0]=c->lr; // 800EE8C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE8C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE8C8
  c->r[30]=c->r[3]|c->r[3]; // 800EE8CC
  c->r[31]=c->r[4]|c->r[4]; // 800EE8D0
  c->lr=0x800EE8D8u; f_8030D728(c); // 800EE8D4
  c->r[3]=c->r[31]|c->r[31]; // 800EE8D8
  c->r[4]=0u+0x00000000u; // 800EE8DC
  c->lr=0x800EE8E4u; f_8030BE30(c); // 800EE8E0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EE8E4
  c->r[3]=c->r[31]|c->r[31]; // 800EE8E8
  c->lr=0x800EE8F0u; f_8030BD1C(c); // 800EE8EC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EE8F0
  c->r[3]=c->r[31]|c->r[31]; // 800EE8F4
  c->r[4]=0u+0x00000000u; // 800EE8F8
  c->lr=0x800EE900u; f_8030BE30(c); // 800EE8FC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EE900
  c->r[3]=c->r[31]|c->r[31]; // 800EE904
  c->lr=0x800EE90Cu; f_8030BD1C(c); // 800EE908
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EE90C
  c->r[3]=c->r[31]|c->r[31]; // 800EE910
  c->lr=0x800EE918u; f_8030BD1C(c); // 800EE914
  W8(c->r[30]+0x00000048u,c->r[3]); // 800EE918
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE91C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE920
  c->lr=c->r[0]; // 800EE924
  c->r[1]=c->r[1]+0x00000010u; // 800EE928
  return; // 800EE92C
}

// fn_800EE930
void f_800EE930(Ctx* __restrict c) {
  trace_call(0x800EE930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE930
  c->r[0]=c->lr; // 800EE934
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE938
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE93C
  c->r[30]=c->r[3]|c->r[3]; // 800EE940
  c->r[31]=c->r[4]|c->r[4]; // 800EE944
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE948
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EE94C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EE950
  c->r[3]=c->r[4]+0x00000030u; // 800EE954
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EE958
  c->r[4]=c->r[30]+0x00000030u; // 800EE95C
  c->lr=0x800EE964u; f_8003AB48(c); // 800EE960
  c->r[3]=c->r[31]+0x0000003Cu; // 800EE964
  c->r[4]=c->r[30]+0x0000003Cu; // 800EE968
  c->lr=0x800EE970u; f_8003AB48(c); // 800EE96C
  c->r[0]=R8(c->r[30]+0x00000048u); // 800EE970
  W8(c->r[31]+0x00000048u,c->r[0]); // 800EE974
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE978
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE97C
  c->lr=c->r[0]; // 800EE980
  c->r[1]=c->r[1]+0x00000010u; // 800EE984
  return; // 800EE988
}

// fn_800EE98C
void f_800EE98C(Ctx* __restrict c) {
  trace_call(0x800EE98Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EE98C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EE990
  c->ctr=c->r[12]; // 800EE994
  if (true) { dispatch(c,c->ctr); return; } // 800EE998
}

// fn_800EE99C
void f_800EE99C(Ctx* __restrict c) {
  trace_call(0x800EE99Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE99C
  c->r[0]=c->lr; // 800EE9A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE9A4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE9A8
  c->r[29]=c->r[3]|c->r[3]; // 800EE9AC
  c->r[30]=c->r[4]|c->r[4]; // 800EE9B0
  c->r[31]=c->r[5]|c->r[5]; // 800EE9B4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EE9B8
  cmps(c,0,(int32_t)c->r[0],7); // 800EE9BC
  if (!crb(c,0)) { goto L_800EE9D0; } // 800EE9C0
  c->r[4]=c->r[31]|c->r[31]; // 800EE9C4
  c->r[3]=c->r[3]+0x00000030u; // 800EE9C8
  c->lr=0x800EE9D0u; f_8003A994(c); // 800EE9CC
L_800EE9D0:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800EE9D0
  cmps(c,0,(int32_t)c->r[0],7); // 800EE9D4
  if (!crb(c,0)) { goto L_800EE9E8; } // 800EE9D8
  c->r[4]=c->r[31]|c->r[31]; // 800EE9DC
  c->r[3]=c->r[29]+0x0000003Cu; // 800EE9E0
  c->lr=0x800EE9E8u; f_8003A994(c); // 800EE9E4
L_800EE9E8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EE9E8
  c->r[3]=c->r[29]|c->r[29]; // 800EE9EC
  c->r[4]=c->r[30]|c->r[30]; // 800EE9F0
  c->r[5]=c->r[31]|c->r[31]; // 800EE9F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE9F8
  c->ctr=c->r[12]; // 800EE9FC
  if (true) { c->lr=0x800EEA04u; dispatch(c,c->ctr); } // 800EEA00
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEA04
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EEA08
  c->lr=c->r[0]; // 800EEA0C
  c->r[1]=c->r[1]+0x00000020u; // 800EEA10
  return; // 800EEA14
}

// fn_800EEA18
void f_800EEA18(Ctx* __restrict c) {
  trace_call(0x800EEA18u);
  c->r[3]=0u+0x80410000u; // 800EEA18
  c->r[3]=c->r[3]+0xFFFFE715u; // 800EEA1C
  return; // 800EEA20
}

// fn_800EEA24
void f_800EEA24(Ctx* __restrict c) {
  trace_call(0x800EEA24u);
  c->r[3]=0u+0x0000004Cu; // 800EEA24
  return; // 800EEA28
}

// fn_800EEA2C
void f_800EEA2C(Ctx* __restrict c) {
  trace_call(0x800EEA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA2C
  c->r[0]=c->lr; // 800EEA30
  c->r[3]=0u+0x0000004Cu; // 800EEA34
  c->r[4]=c->r[13]+0xFFFFB9C0u; // 800EEA38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEA3C
  c->r[5]=0u+0x00000000u; // 800EEA40
  c->r[6]=0u+0x00001001u; // 800EEA44
  c->lr=0x800EEA4Cu; f_80244D20(c); // 800EEA48
  cmps(c,0,(int32_t)c->r[3],0); // 800EEA4C
  if (crb(c,2)) { goto L_800EEA58; } // 800EEA50
  c->lr=0x800EEA58u; f_800EE868(c); // 800EEA54
L_800EEA58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEA58
  c->lr=c->r[0]; // 800EEA5C
  c->r[1]=c->r[1]+0x00000010u; // 800EEA60
  return; // 800EEA64
}

// fn_800EEA68
void f_800EEA68(Ctx* __restrict c) {
  trace_call(0x800EEA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA68
  c->r[0]=c->lr; // 800EEA6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEA70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEA74
  c->r[31]=c->r[3]|c->r[3]; // 800EEA78
  c->lr=0x800EEA80u; f_800D7120(c); // 800EEA7C
  c->r[5]=0u+0x80410000u; // 800EEA80
  c->r[3]=0u+0x1D240000u; // 800EEA84
  c->r[0]=c->r[3]+0x00005436u; // 800EEA88
  c->r[4]=0u+0x00000000u; // 800EEA8C
  c->r[5]=c->r[5]+0x000050E8u; // 800EEA90
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EEA94
  c->r[3]=c->r[31]|c->r[31]; // 800EEA98
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EEA9C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EEAA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEAA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEAA8
  c->lr=c->r[0]; // 800EEAAC
  c->r[1]=c->r[1]+0x00000010u; // 800EEAB0
  return; // 800EEAB4
}

// fn_800EEAB8
void f_800EEAB8(Ctx* __restrict c) {
  trace_call(0x800EEAB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEAB8
  c->r[0]=c->lr; // 800EEABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEAC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEAC4
  c->r[30]=c->r[3]|c->r[3]; // 800EEAC8
  c->r[31]=c->r[4]|c->r[4]; // 800EEACC
  c->lr=0x800EEAD4u; f_8030D728(c); // 800EEAD0
  c->r[3]=c->r[31]|c->r[31]; // 800EEAD4
  c->r[4]=0u+0x00000000u; // 800EEAD8
  c->lr=0x800EEAE0u; f_8030BE30(c); // 800EEADC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EEAE0
  c->r[3]=c->r[31]|c->r[31]; // 800EEAE4
  c->lr=0x800EEAECu; f_8030BD1C(c); // 800EEAE8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EEAEC
  c->r[3]=c->r[31]|c->r[31]; // 800EEAF0
  c->lr=0x800EEAF8u; f_8030BD1C(c); // 800EEAF4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EEAF8
  c->r[3]=c->r[31]|c->r[31]; // 800EEAFC
  c->lr=0x800EEB04u; f_8030BD1C(c); // 800EEB00
  W8(c->r[30]+0x00000040u,c->r[3]); // 800EEB04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEB08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEB0C
  c->lr=c->r[0]; // 800EEB10
  c->r[1]=c->r[1]+0x00000010u; // 800EEB14
  return; // 800EEB18
}

// fn_800EEB1C
void f_800EEB1C(Ctx* __restrict c) {
  trace_call(0x800EEB1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEB1C
  c->r[0]=c->lr; // 800EEB20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEB24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEB28
  c->r[30]=c->r[3]|c->r[3]; // 800EEB2C
  c->r[31]=c->r[4]|c->r[4]; // 800EEB30
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EEB34
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EEB38
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EEB3C
  c->r[3]=c->r[4]+0x00000030u; // 800EEB40
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EEB44
  c->r[4]=c->r[30]+0x00000030u; // 800EEB48
  c->lr=0x800EEB50u; f_8003AB48(c); // 800EEB4C
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800EEB50
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800EEB54
  c->r[0]=R8(c->r[30]+0x00000040u); // 800EEB58
  W8(c->r[31]+0x00000040u,c->r[0]); // 800EEB5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEB60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEB64
  c->lr=c->r[0]; // 800EEB68
  c->r[1]=c->r[1]+0x00000010u; // 800EEB6C
  return; // 800EEB70
}

// fn_800EEB74
void f_800EEB74(Ctx* __restrict c) {
  trace_call(0x800EEB74u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EEB74
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EEB78
  c->ctr=c->r[12]; // 800EEB7C
  if (true) { dispatch(c,c->ctr); return; } // 800EEB80
}

// fn_800EEB84
void f_800EEB84(Ctx* __restrict c) {
  trace_call(0x800EEB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEB84
  c->r[0]=c->lr; // 800EEB88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EEB8C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEB90
  c->r[29]=c->r[3]|c->r[3]; // 800EEB94
  c->r[30]=c->r[4]|c->r[4]; // 800EEB98
  c->r[31]=c->r[5]|c->r[5]; // 800EEB9C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EEBA0
  cmps(c,0,(int32_t)c->r[0],7); // 800EEBA4
  if (!crb(c,0)) { goto L_800EEBB8; } // 800EEBA8
  c->r[4]=c->r[31]|c->r[31]; // 800EEBAC
  c->r[3]=c->r[3]+0x00000030u; // 800EEBB0
  c->lr=0x800EEBB8u; f_8003A994(c); // 800EEBB4
L_800EEBB8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EEBB8
  c->r[3]=c->r[29]|c->r[29]; // 800EEBBC
  c->r[4]=c->r[30]|c->r[30]; // 800EEBC0
  c->r[5]=c->r[31]|c->r[31]; // 800EEBC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EEBC8
  c->ctr=c->r[12]; // 800EEBCC
  if (true) { c->lr=0x800EEBD4u; dispatch(c,c->ctr); } // 800EEBD0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEBD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EEBD8
  c->lr=c->r[0]; // 800EEBDC
  c->r[1]=c->r[1]+0x00000020u; // 800EEBE0
  return; // 800EEBE4
}

// fn_800EEBE8
void f_800EEBE8(Ctx* __restrict c) {
  trace_call(0x800EEBE8u);
  c->r[3]=0u+0x80410000u; // 800EEBE8
  c->r[3]=c->r[3]+0xFFFFE72Du; // 800EEBEC
  return; // 800EEBF0
}

// fn_800EEBF4
void f_800EEBF4(Ctx* __restrict c) {
  trace_call(0x800EEBF4u);
  c->r[3]=0u+0x00000044u; // 800EEBF4
  return; // 800EEBF8
}

// fn_800EEBFC
void f_800EEBFC(Ctx* __restrict c) {
  trace_call(0x800EEBFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEBFC
  c->r[0]=c->lr; // 800EEC00
  c->r[3]=0u+0x00000044u; // 800EEC04
  c->r[4]=c->r[13]+0xFFFFB9C5u; // 800EEC08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEC0C
  c->r[5]=0u+0x00000000u; // 800EEC10
  c->r[6]=0u+0x00001001u; // 800EEC14
  c->lr=0x800EEC1Cu; f_80244D20(c); // 800EEC18
  cmps(c,0,(int32_t)c->r[3],0); // 800EEC1C
  if (crb(c,2)) { goto L_800EEC28; } // 800EEC20
  c->lr=0x800EEC28u; f_800EEA68(c); // 800EEC24
L_800EEC28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEC28
  c->lr=c->r[0]; // 800EEC2C
  c->r[1]=c->r[1]+0x00000010u; // 800EEC30
  return; // 800EEC34
}

// fn_800EEC38
void f_800EEC38(Ctx* __restrict c) {
  trace_call(0x800EEC38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEC38
  c->r[0]=c->lr; // 800EEC3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEC40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEC44
  c->r[31]=c->r[3]|c->r[3]; // 800EEC48
  c->lr=0x800EEC50u; f_800D7120(c); // 800EEC4C
  c->r[5]=0u+0x80410000u; // 800EEC50
  c->r[3]=0u+0xBC190000u; // 800EEC54
  c->r[4]=0u+0x00000000u; // 800EEC58
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EEC5C
  c->r[0]=c->r[3]+0x000021D3u; // 800EEC60
  c->r[5]=c->r[5]+0x000050B4u; // 800EEC64
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EEC68
  c->r[3]=c->r[31]|c->r[31]; // 800EEC6C
  W32(c->r[31]+0x00000044u,c->r[4]); // 800EEC70
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EEC74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEC7C
  c->lr=c->r[0]; // 800EEC80
  c->r[1]=c->r[1]+0x00000010u; // 800EEC84
  return; // 800EEC88
}

// fn_800EEC8C
void f_800EEC8C(Ctx* __restrict c) {
  trace_call(0x800EEC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEC8C
  c->r[0]=c->lr; // 800EEC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEC94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEC98
  c->r[30]=c->r[3]|c->r[3]; // 800EEC9C
  c->r[31]=c->r[4]|c->r[4]; // 800EECA0
  c->lr=0x800EECA8u; f_8030D728(c); // 800EECA4
  c->r[3]=c->r[31]|c->r[31]; // 800EECA8
  c->r[4]=0u+0x00000000u; // 800EECAC
  c->lr=0x800EECB4u; f_8030BE30(c); // 800EECB0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EECB4
  c->r[3]=c->r[31]|c->r[31]; // 800EECB8
  c->lr=0x800EECC0u; f_8030BD1C(c); // 800EECBC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EECC0
  c->r[3]=c->r[31]|c->r[31]; // 800EECC4
  c->r[4]=0u+0x00000000u; // 800EECC8
  c->lr=0x800EECD0u; f_8030BE30(c); // 800EECCC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EECD0
  c->r[3]=c->r[31]|c->r[31]; // 800EECD4
  c->lr=0x800EECDCu; f_8030BD1C(c); // 800EECD8
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EECDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EECE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EECE4
  c->lr=c->r[0]; // 800EECE8
  c->r[1]=c->r[1]+0x00000010u; // 800EECEC
  return; // 800EECF0
}

// fn_800EECF4
void f_800EECF4(Ctx* __restrict c) {
  trace_call(0x800EECF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EECF4
  c->r[0]=c->lr; // 800EECF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EECFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EED00
  c->r[30]=c->r[3]|c->r[3]; // 800EED04
  c->r[31]=c->r[4]|c->r[4]; // 800EED08
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EED0C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EED10
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EED14
  c->r[3]=c->r[4]+0x00000030u; // 800EED18
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EED1C
  c->r[4]=c->r[30]+0x00000030u; // 800EED20
  c->lr=0x800EED28u; f_8003AB48(c); // 800EED24
  c->r[3]=c->r[31]+0x0000003Cu; // 800EED28
  c->r[4]=c->r[30]+0x0000003Cu; // 800EED2C
  c->lr=0x800EED34u; f_8003AB48(c); // 800EED30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EED34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EED38
  c->lr=c->r[0]; // 800EED3C
  c->r[1]=c->r[1]+0x00000010u; // 800EED40
  return; // 800EED44
}

// fn_800EED48
void f_800EED48(Ctx* __restrict c) {
  trace_call(0x800EED48u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EED48
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EED4C
  c->ctr=c->r[12]; // 800EED50
  if (true) { dispatch(c,c->ctr); return; } // 800EED54
}

// fn_800EED58
void f_800EED58(Ctx* __restrict c) {
  trace_call(0x800EED58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EED58
  c->r[0]=c->lr; // 800EED5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EED60
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EED64
  c->r[29]=c->r[3]|c->r[3]; // 800EED68
  c->r[30]=c->r[4]|c->r[4]; // 800EED6C
  c->r[31]=c->r[5]|c->r[5]; // 800EED70
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EED74
  cmps(c,0,(int32_t)c->r[0],7); // 800EED78
  if (!crb(c,0)) { goto L_800EED8C; } // 800EED7C
  c->r[4]=c->r[31]|c->r[31]; // 800EED80
  c->r[3]=c->r[3]+0x00000030u; // 800EED84
  c->lr=0x800EED8Cu; f_8003A994(c); // 800EED88
L_800EED8C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800EED8C
  cmps(c,0,(int32_t)c->r[0],7); // 800EED90
  if (!crb(c,0)) { goto L_800EEDA4; } // 800EED94
  c->r[4]=c->r[31]|c->r[31]; // 800EED98
  c->r[3]=c->r[29]+0x0000003Cu; // 800EED9C
  c->lr=0x800EEDA4u; f_8003A994(c); // 800EEDA0
L_800EEDA4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EEDA4
  c->r[3]=c->r[29]|c->r[29]; // 800EEDA8
  c->r[4]=c->r[30]|c->r[30]; // 800EEDAC
  c->r[5]=c->r[31]|c->r[31]; // 800EEDB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EEDB4
  c->ctr=c->r[12]; // 800EEDB8
  if (true) { c->lr=0x800EEDC0u; dispatch(c,c->ctr); } // 800EEDBC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEDC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EEDC4
  c->lr=c->r[0]; // 800EEDC8
  c->r[1]=c->r[1]+0x00000020u; // 800EEDCC
  return; // 800EEDD0
}

// fn_800EEDD4
void f_800EEDD4(Ctx* __restrict c) {
  trace_call(0x800EEDD4u);
  c->r[3]=0u+0x80410000u; // 800EEDD4
  c->r[3]=c->r[3]+0xFFFFE73Cu; // 800EEDD8
  return; // 800EEDDC
}

// fn_800EEDE0
void f_800EEDE0(Ctx* __restrict c) {
  trace_call(0x800EEDE0u);
  c->r[3]=0u+0x00000048u; // 800EEDE0
  return; // 800EEDE4
}

// fn_800EEDE8
void f_800EEDE8(Ctx* __restrict c) {
  trace_call(0x800EEDE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEDE8
  c->r[0]=c->lr; // 800EEDEC
  c->r[3]=0u+0x00000048u; // 800EEDF0
  c->r[4]=c->r[13]+0xFFFFB9CAu; // 800EEDF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEDF8
  c->r[5]=0u+0x00000000u; // 800EEDFC
  c->r[6]=0u+0x00001001u; // 800EEE00
  c->lr=0x800EEE08u; f_80244D20(c); // 800EEE04
  cmps(c,0,(int32_t)c->r[3],0); // 800EEE08
  if (crb(c,2)) { goto L_800EEE14; } // 800EEE0C
  c->lr=0x800EEE14u; f_800EEC38(c); // 800EEE10
L_800EEE14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEE14
  c->lr=c->r[0]; // 800EEE18
  c->r[1]=c->r[1]+0x00000010u; // 800EEE1C
  return; // 800EEE20
}

// fn_800EEE24
void f_800EEE24(Ctx* __restrict c) {
  trace_call(0x800EEE24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEE24
  c->r[0]=c->lr; // 800EEE28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEE2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEE30
  c->r[31]=c->r[3]|c->r[3]; // 800EEE34
  c->lr=0x800EEE3Cu; f_800D7120(c); // 800EEE38
  c->r[5]=0u+0x80410000u; // 800EEE3C
  c->r[3]=0u+0xBC190000u; // 800EEE40
  c->r[4]=0u+0x00000000u; // 800EEE44
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EEE48
  c->r[0]=c->r[3]+0x000021D3u; // 800EEE4C
  c->r[5]=c->r[5]+0x00005080u; // 800EEE50
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EEE54
  c->r[3]=c->r[31]|c->r[31]; // 800EEE58
  W32(c->r[31]+0x00000044u,c->r[4]); // 800EEE5C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EEE60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEE64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEE68
  c->lr=c->r[0]; // 800EEE6C
  c->r[1]=c->r[1]+0x00000010u; // 800EEE70
  return; // 800EEE74
}

// fn_800EEE78
void f_800EEE78(Ctx* __restrict c) {
  trace_call(0x800EEE78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEE78
  c->r[0]=c->lr; // 800EEE7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEE80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEE84
  c->r[30]=c->r[3]|c->r[3]; // 800EEE88
  c->r[31]=c->r[4]|c->r[4]; // 800EEE8C
  c->lr=0x800EEE94u; f_8030D728(c); // 800EEE90
  c->r[3]=c->r[31]|c->r[31]; // 800EEE94
  c->r[4]=0u+0x00000000u; // 800EEE98
  c->lr=0x800EEEA0u; f_8030BE30(c); // 800EEE9C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EEEA0
  c->r[3]=c->r[31]|c->r[31]; // 800EEEA4
  c->lr=0x800EEEACu; f_8030BD1C(c); // 800EEEA8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EEEAC
  c->r[3]=c->r[31]|c->r[31]; // 800EEEB0
  c->r[4]=0u+0x00000000u; // 800EEEB4
  c->lr=0x800EEEBCu; f_8030BE30(c); // 800EEEB8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EEEBC
  c->r[3]=c->r[31]|c->r[31]; // 800EEEC0
  c->lr=0x800EEEC8u; f_8030BD1C(c); // 800EEEC4
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EEEC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEED0
  c->lr=c->r[0]; // 800EEED4
  c->r[1]=c->r[1]+0x00000010u; // 800EEED8
  return; // 800EEEDC
}

// fn_800EEEE0
void f_800EEEE0(Ctx* __restrict c) {
  trace_call(0x800EEEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEEE0
  c->r[0]=c->lr; // 800EEEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEEE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEEEC
  c->r[30]=c->r[3]|c->r[3]; // 800EEEF0
  c->r[31]=c->r[4]|c->r[4]; // 800EEEF4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EEEF8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EEEFC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EEF00
  c->r[3]=c->r[4]+0x00000030u; // 800EEF04
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EEF08
  c->r[4]=c->r[30]+0x00000030u; // 800EEF0C
  c->lr=0x800EEF14u; f_8003AB48(c); // 800EEF10
  c->r[3]=c->r[31]+0x0000003Cu; // 800EEF14
  c->r[4]=c->r[30]+0x0000003Cu; // 800EEF18
  c->lr=0x800EEF20u; f_8003AB48(c); // 800EEF1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEF20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEF24
  c->lr=c->r[0]; // 800EEF28
  c->r[1]=c->r[1]+0x00000010u; // 800EEF2C
  return; // 800EEF30
}

// fn_800EEF34
void f_800EEF34(Ctx* __restrict c) {
  trace_call(0x800EEF34u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EEF34
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EEF38
  c->ctr=c->r[12]; // 800EEF3C
  if (true) { dispatch(c,c->ctr); return; } // 800EEF40
}

// fn_800EEF44
void f_800EEF44(Ctx* __restrict c) {
  trace_call(0x800EEF44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEF44
  c->r[0]=c->lr; // 800EEF48
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EEF4C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EEF50
  c->r[29]=c->r[3]|c->r[3]; // 800EEF54
  c->r[30]=c->r[4]|c->r[4]; // 800EEF58
  c->r[31]=c->r[5]|c->r[5]; // 800EEF5C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EEF60
  cmps(c,0,(int32_t)c->r[0],7); // 800EEF64
  if (!crb(c,0)) { goto L_800EEF78; } // 800EEF68
  c->r[4]=c->r[31]|c->r[31]; // 800EEF6C
  c->r[3]=c->r[3]+0x00000030u; // 800EEF70
  c->lr=0x800EEF78u; f_8003A994(c); // 800EEF74
L_800EEF78:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800EEF78
  cmps(c,0,(int32_t)c->r[0],7); // 800EEF7C
  if (!crb(c,0)) { goto L_800EEF90; } // 800EEF80
  c->r[4]=c->r[31]|c->r[31]; // 800EEF84
  c->r[3]=c->r[29]+0x0000003Cu; // 800EEF88
  c->lr=0x800EEF90u; f_8003A994(c); // 800EEF8C
L_800EEF90:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EEF90
  c->r[3]=c->r[29]|c->r[29]; // 800EEF94
  c->r[4]=c->r[30]|c->r[30]; // 800EEF98
  c->r[5]=c->r[31]|c->r[31]; // 800EEF9C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EEFA0
  c->ctr=c->r[12]; // 800EEFA4
  if (true) { c->lr=0x800EEFACu; dispatch(c,c->ctr); } // 800EEFA8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EEFAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EEFB0
  c->lr=c->r[0]; // 800EEFB4
  c->r[1]=c->r[1]+0x00000020u; // 800EEFB8
  return; // 800EEFBC
}

// fn_800EEFC0
void f_800EEFC0(Ctx* __restrict c) {
  trace_call(0x800EEFC0u);
  c->r[3]=0u+0x80410000u; // 800EEFC0
  c->r[3]=c->r[3]+0xFFFFE74Du; // 800EEFC4
  return; // 800EEFC8
}

// fn_800EEFCC
void f_800EEFCC(Ctx* __restrict c) {
  trace_call(0x800EEFCCu);
  c->r[3]=0u+0x00000048u; // 800EEFCC
  return; // 800EEFD0
}

// fn_800EEFD4
void f_800EEFD4(Ctx* __restrict c) {
  trace_call(0x800EEFD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEFD4
  c->r[0]=c->lr; // 800EEFD8
  c->r[3]=0u+0x00000048u; // 800EEFDC
  c->r[4]=c->r[13]+0xFFFFB9CFu; // 800EEFE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEFE4
  c->r[5]=0u+0x00000000u; // 800EEFE8
  c->r[6]=0u+0x00001001u; // 800EEFEC
  c->lr=0x800EEFF4u; f_80244D20(c); // 800EEFF0
  cmps(c,0,(int32_t)c->r[3],0); // 800EEFF4
  if (crb(c,2)) { goto L_800EF000; } // 800EEFF8
  c->lr=0x800EF000u; f_800EEE24(c); // 800EEFFC
L_800EF000:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF000
  c->lr=c->r[0]; // 800EF004
  c->r[1]=c->r[1]+0x00000010u; // 800EF008
  return; // 800EF00C
}

// fn_800EF010
void f_800EF010(Ctx* __restrict c) {
  trace_call(0x800EF010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF010
  c->r[0]=c->lr; // 800EF014
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF01C
  c->r[31]=c->r[3]|c->r[3]; // 800EF020
  c->lr=0x800EF028u; f_800D7120(c); // 800EF024
  c->r[5]=0u+0x80410000u; // 800EF028
  c->r[3]=0u+0x39070000u; // 800EF02C
  c->r[0]=c->r[3]+0xFFFFF5DCu; // 800EF030
  c->r[4]=0u+0x00000000u; // 800EF034
  c->r[5]=c->r[5]+0x0000504Cu; // 800EF038
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EF03C
  c->r[3]=c->r[31]|c->r[31]; // 800EF040
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EF044
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EF048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF050
  c->lr=c->r[0]; // 800EF054
  c->r[1]=c->r[1]+0x00000010u; // 800EF058
  return; // 800EF05C
}

// fn_800EF060
void f_800EF060(Ctx* __restrict c) {
  trace_call(0x800EF060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF060
  c->r[0]=c->lr; // 800EF064
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF068
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF06C
  c->r[30]=c->r[3]|c->r[3]; // 800EF070
  c->r[31]=c->r[4]|c->r[4]; // 800EF074
  c->lr=0x800EF07Cu; f_8030D728(c); // 800EF078
  c->r[3]=c->r[31]|c->r[31]; // 800EF07C
  c->r[4]=0u+0x00000000u; // 800EF080
  c->lr=0x800EF088u; f_8030BE30(c); // 800EF084
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EF088
  c->r[3]=c->r[31]|c->r[31]; // 800EF08C
  c->lr=0x800EF094u; f_8030BD1C(c); // 800EF090
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EF094
  c->r[3]=c->r[31]|c->r[31]; // 800EF098
  c->lr=0x800EF0A0u; f_8030C0A0(c); // 800EF09C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800EF0A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF0A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF0A8
  c->lr=c->r[0]; // 800EF0AC
  c->r[1]=c->r[1]+0x00000010u; // 800EF0B0
  return; // 800EF0B4
}

// fn_800EF0B8
void f_800EF0B8(Ctx* __restrict c) {
  trace_call(0x800EF0B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF0B8
  c->r[0]=c->lr; // 800EF0BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF0C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF0C4
  c->r[31]=c->r[4]|c->r[4]; // 800EF0C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EF0CC
  c->r[30]=c->r[3]|c->r[3]; // 800EF0D0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EF0D4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EF0D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EF0DC
  c->r[3]=c->r[4]+0x00000030u; // 800EF0E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EF0E4
  c->r[4]=c->r[30]+0x00000030u; // 800EF0E8
  c->lr=0x800EF0F0u; f_8003AB48(c); // 800EF0EC
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF0F0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800EF0F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF0F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EF0FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF100
  c->lr=c->r[0]; // 800EF104
  c->r[1]=c->r[1]+0x00000010u; // 800EF108
  return; // 800EF10C
}

// fn_800EF110
void f_800EF110(Ctx* __restrict c) {
  trace_call(0x800EF110u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EF110
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EF114
  c->ctr=c->r[12]; // 800EF118
  if (true) { dispatch(c,c->ctr); return; } // 800EF11C
}

// fn_800EF120
void f_800EF120(Ctx* __restrict c) {
  trace_call(0x800EF120u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF120
  c->r[0]=c->lr; // 800EF124
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF128
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF12C
  c->r[29]=c->r[3]|c->r[3]; // 800EF130
  c->r[30]=c->r[4]|c->r[4]; // 800EF134
  c->r[31]=c->r[5]|c->r[5]; // 800EF138
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EF13C
  cmps(c,0,(int32_t)c->r[0],7); // 800EF140
  if (!crb(c,0)) { goto L_800EF154; } // 800EF144
  c->r[4]=c->r[31]|c->r[31]; // 800EF148
  c->r[3]=c->r[3]+0x00000030u; // 800EF14C
  c->lr=0x800EF154u; f_8003A994(c); // 800EF150
L_800EF154:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EF154
  c->r[3]=c->r[29]|c->r[29]; // 800EF158
  c->r[4]=c->r[30]|c->r[30]; // 800EF15C
  c->r[5]=c->r[31]|c->r[31]; // 800EF160
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EF164
  c->ctr=c->r[12]; // 800EF168
  if (true) { c->lr=0x800EF170u; dispatch(c,c->ctr); } // 800EF16C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF170
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF174
  c->lr=c->r[0]; // 800EF178
  c->r[1]=c->r[1]+0x00000020u; // 800EF17C
  return; // 800EF180
}

// fn_800EF184
void f_800EF184(Ctx* __restrict c) {
  trace_call(0x800EF184u);
  c->r[3]=0u+0x80410000u; // 800EF184
  c->r[3]=c->r[3]+0xFFFFE760u; // 800EF188
  return; // 800EF18C
}

// fn_800EF190
void f_800EF190(Ctx* __restrict c) {
  trace_call(0x800EF190u);
  c->r[3]=0u+0x00000040u; // 800EF190
  return; // 800EF194
}

// fn_800EF198
void f_800EF198(Ctx* __restrict c) {
  trace_call(0x800EF198u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF198
  c->r[0]=c->lr; // 800EF19C
  c->r[3]=0u+0x00000040u; // 800EF1A0
  c->r[4]=c->r[13]+0xFFFFB9D4u; // 800EF1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF1A8
  c->r[5]=0u+0x00000000u; // 800EF1AC
  c->r[6]=0u+0x00001001u; // 800EF1B0
  c->lr=0x800EF1B8u; f_80244D20(c); // 800EF1B4
  cmps(c,0,(int32_t)c->r[3],0); // 800EF1B8
  if (crb(c,2)) { goto L_800EF1C4; } // 800EF1BC
  c->lr=0x800EF1C4u; f_800EF010(c); // 800EF1C0
L_800EF1C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF1C4
  c->lr=c->r[0]; // 800EF1C8
  c->r[1]=c->r[1]+0x00000010u; // 800EF1CC
  return; // 800EF1D0
}

// fn_800EF1D4
void f_800EF1D4(Ctx* __restrict c) {
  trace_call(0x800EF1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF1D4
  c->r[0]=c->lr; // 800EF1D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF1DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF1E0
  c->r[31]=c->r[3]|c->r[3]; // 800EF1E4
  c->lr=0x800EF1ECu; f_800D7120(c); // 800EF1E8
  c->r[5]=0u+0x80410000u; // 800EF1EC
  c->r[3]=0u+0x798A0000u; // 800EF1F0
  c->r[4]=0u+0x00000000u; // 800EF1F4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EF1F8
  c->r[0]=c->r[3]+0xFFFFDDEBu; // 800EF1FC
  c->r[5]=c->r[5]+0x00005018u; // 800EF200
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EF204
  c->r[3]=c->r[31]|c->r[31]; // 800EF208
  W32(c->r[31]+0x00000048u,c->r[4]); // 800EF20C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EF210
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF214
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF218
  c->lr=c->r[0]; // 800EF21C
  c->r[1]=c->r[1]+0x00000010u; // 800EF220
  return; // 800EF224
}

// fn_800EF228
void f_800EF228(Ctx* __restrict c) {
  trace_call(0x800EF228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF228
  c->r[0]=c->lr; // 800EF22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF230
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF234
  c->r[30]=c->r[3]|c->r[3]; // 800EF238
  c->r[31]=c->r[4]|c->r[4]; // 800EF23C
  c->lr=0x800EF244u; f_8030D728(c); // 800EF240
  c->r[3]=c->r[31]|c->r[31]; // 800EF244
  c->r[4]=0u+0x00000000u; // 800EF248
  c->lr=0x800EF250u; f_8030BE30(c); // 800EF24C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EF250
  c->r[3]=c->r[31]|c->r[31]; // 800EF254
  c->lr=0x800EF25Cu; f_8030BD1C(c); // 800EF258
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EF25C
  c->r[3]=c->r[31]|c->r[31]; // 800EF260
  c->lr=0x800EF268u; f_8030BD1C(c); // 800EF264
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EF268
  c->r[3]=c->r[31]|c->r[31]; // 800EF26C
  c->r[4]=0u+0x00000000u; // 800EF270
  c->lr=0x800EF278u; f_8030BE30(c); // 800EF274
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EF278
  c->r[3]=c->r[31]|c->r[31]; // 800EF27C
  c->lr=0x800EF284u; f_8030BD1C(c); // 800EF280
  W32(c->r[30]+0x00000044u,c->r[3]); // 800EF284
  c->r[3]=c->r[31]|c->r[31]; // 800EF288
  c->lr=0x800EF290u; f_8030BD1C(c); // 800EF28C
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800EF290
  c->r[3]=c->r[31]|c->r[31]; // 800EF294
  c->lr=0x800EF29Cu; f_8030BD1C(c); // 800EF298
  W8(c->r[30]+0x0000004Du,c->r[3]); // 800EF29C
  c->r[3]=c->r[31]|c->r[31]; // 800EF2A0
  c->lr=0x800EF2A8u; f_8030BD1C(c); // 800EF2A4
  W8(c->r[30]+0x0000004Eu,c->r[3]); // 800EF2A8
  c->r[3]=c->r[31]|c->r[31]; // 800EF2AC
  c->lr=0x800EF2B4u; f_8030BD1C(c); // 800EF2B0
  W8(c->r[30]+0x0000004Fu,c->r[3]); // 800EF2B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF2B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF2BC
  c->lr=c->r[0]; // 800EF2C0
  c->r[1]=c->r[1]+0x00000010u; // 800EF2C4
  return; // 800EF2C8
}

// fn_800EF2CC
void f_800EF2CC(Ctx* __restrict c) {
  trace_call(0x800EF2CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF2CC
  c->r[0]=c->lr; // 800EF2D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF2D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF2D8
  c->r[30]=c->r[3]|c->r[3]; // 800EF2DC
  c->r[31]=c->r[4]|c->r[4]; // 800EF2E0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EF2E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EF2E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EF2EC
  c->r[3]=c->r[4]+0x00000030u; // 800EF2F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EF2F4
  c->r[4]=c->r[30]+0x00000030u; // 800EF2F8
  c->lr=0x800EF300u; f_8003AB48(c); // 800EF2FC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EF300
  c->r[3]=c->r[31]+0x00000040u; // 800EF304
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EF308
  c->r[4]=c->r[30]+0x00000040u; // 800EF30C
  c->lr=0x800EF314u; f_8003AB48(c); // 800EF310
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800EF314
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800EF318
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800EF31C
  W8(c->r[31]+0x0000004Du,c->r[0]); // 800EF320
  c->r[0]=R8(c->r[30]+0x0000004Eu); // 800EF324
  W8(c->r[31]+0x0000004Eu,c->r[0]); // 800EF328
  c->r[0]=R8(c->r[30]+0x0000004Fu); // 800EF32C
  W8(c->r[31]+0x0000004Fu,c->r[0]); // 800EF330
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF334
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF338
  c->lr=c->r[0]; // 800EF33C
  c->r[1]=c->r[1]+0x00000010u; // 800EF340
  return; // 800EF344
}

// fn_800EF348
void f_800EF348(Ctx* __restrict c) {
  trace_call(0x800EF348u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EF348
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EF34C
  c->ctr=c->r[12]; // 800EF350
  if (true) { dispatch(c,c->ctr); return; } // 800EF354
}

// fn_800EF358
void f_800EF358(Ctx* __restrict c) {
  trace_call(0x800EF358u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF358
  c->r[0]=c->lr; // 800EF35C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF360
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF364
  c->r[29]=c->r[3]|c->r[3]; // 800EF368
  c->r[30]=c->r[4]|c->r[4]; // 800EF36C
  c->r[31]=c->r[5]|c->r[5]; // 800EF370
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EF374
  cmps(c,0,(int32_t)c->r[0],7); // 800EF378
  if (!crb(c,0)) { goto L_800EF38C; } // 800EF37C
  c->r[4]=c->r[31]|c->r[31]; // 800EF380
  c->r[3]=c->r[3]+0x00000030u; // 800EF384
  c->lr=0x800EF38Cu; f_8003A994(c); // 800EF388
L_800EF38C:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 800EF38C
  cmps(c,0,(int32_t)c->r[0],7); // 800EF390
  if (!crb(c,0)) { goto L_800EF3A4; } // 800EF394
  c->r[4]=c->r[31]|c->r[31]; // 800EF398
  c->r[3]=c->r[29]+0x00000040u; // 800EF39C
  c->lr=0x800EF3A4u; f_8003A994(c); // 800EF3A0
L_800EF3A4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EF3A4
  c->r[3]=c->r[29]|c->r[29]; // 800EF3A8
  c->r[4]=c->r[30]|c->r[30]; // 800EF3AC
  c->r[5]=c->r[31]|c->r[31]; // 800EF3B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EF3B4
  c->ctr=c->r[12]; // 800EF3B8
  if (true) { c->lr=0x800EF3C0u; dispatch(c,c->ctr); } // 800EF3BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF3C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF3C4
  c->lr=c->r[0]; // 800EF3C8
  c->r[1]=c->r[1]+0x00000020u; // 800EF3CC
  return; // 800EF3D0
}

// fn_800EF3D4
void f_800EF3D4(Ctx* __restrict c) {
  trace_call(0x800EF3D4u);
  c->r[3]=0u+0x80410000u; // 800EF3D4
  c->r[3]=c->r[3]+0xFFFFE76Fu; // 800EF3D8
  return; // 800EF3DC
}

// fn_800EF3E0
void f_800EF3E0(Ctx* __restrict c) {
  trace_call(0x800EF3E0u);
  c->r[3]=0u+0x00000050u; // 800EF3E0
  return; // 800EF3E4
}

// fn_800EF3E8
void f_800EF3E8(Ctx* __restrict c) {
  trace_call(0x800EF3E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF3E8
  c->r[0]=c->lr; // 800EF3EC
  c->r[3]=0u+0x00000050u; // 800EF3F0
  c->r[4]=c->r[13]+0xFFFFB9D9u; // 800EF3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF3F8
  c->r[5]=0u+0x00000000u; // 800EF3FC
  c->r[6]=0u+0x00001001u; // 800EF400
  c->lr=0x800EF408u; f_80244D20(c); // 800EF404
  cmps(c,0,(int32_t)c->r[3],0); // 800EF408
  if (crb(c,2)) { goto L_800EF414; } // 800EF40C
  c->lr=0x800EF414u; f_800EF1D4(c); // 800EF410
L_800EF414:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF414
  c->lr=c->r[0]; // 800EF418
  c->r[1]=c->r[1]+0x00000010u; // 800EF41C
  return; // 800EF420
}

// fn_800EF424
void f_800EF424(Ctx* __restrict c) {
  trace_call(0x800EF424u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF424
  c->r[0]=c->lr; // 800EF428
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF42C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF430
  c->r[31]=c->r[3]|c->r[3]; // 800EF434
  c->lr=0x800EF43Cu; f_800D7120(c); // 800EF438
  c->r[5]=0u+0x80410000u; // 800EF43C
  c->r[3]=0u+0x59710000u; // 800EF440
  c->r[0]=c->r[3]+0x000047B2u; // 800EF444
  c->r[4]=0u+0x00000000u; // 800EF448
  c->r[5]=c->r[5]+0x00004FE4u; // 800EF44C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EF450
  c->r[3]=c->r[31]|c->r[31]; // 800EF454
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EF458
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EF45C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF460
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF464
  c->lr=c->r[0]; // 800EF468
  c->r[1]=c->r[1]+0x00000010u; // 800EF46C
  return; // 800EF470
}

// fn_800EF474
void f_800EF474(Ctx* __restrict c) {
  trace_call(0x800EF474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF474
  c->r[0]=c->lr; // 800EF478
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF47C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF480
  c->r[30]=c->r[3]|c->r[3]; // 800EF484
  c->r[31]=c->r[4]|c->r[4]; // 800EF488
  c->lr=0x800EF490u; f_8030D728(c); // 800EF48C
  c->r[3]=c->r[31]|c->r[31]; // 800EF490
  c->r[4]=0u+0x00000000u; // 800EF494
  c->lr=0x800EF49Cu; f_8030BE30(c); // 800EF498
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EF49C
  c->r[3]=c->r[31]|c->r[31]; // 800EF4A0
  c->lr=0x800EF4A8u; f_8030BD1C(c); // 800EF4A4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EF4A8
  c->r[3]=c->r[31]|c->r[31]; // 800EF4AC
  c->lr=0x800EF4B4u; f_8030BD1C(c); // 800EF4B0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EF4B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF4B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF4BC
  c->lr=c->r[0]; // 800EF4C0
  c->r[1]=c->r[1]+0x00000010u; // 800EF4C4
  return; // 800EF4C8
}

// fn_800EF4CC
void f_800EF4CC(Ctx* __restrict c) {
  trace_call(0x800EF4CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF4CC
  c->r[0]=c->lr; // 800EF4D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF4D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF4D8
  c->r[30]=c->r[3]|c->r[3]; // 800EF4DC
  c->r[31]=c->r[4]|c->r[4]; // 800EF4E0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EF4E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EF4E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EF4EC
  c->r[3]=c->r[4]+0x00000030u; // 800EF4F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EF4F4
  c->r[4]=c->r[30]+0x00000030u; // 800EF4F8
  c->lr=0x800EF500u; f_8003AB48(c); // 800EF4FC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EF500
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EF504
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF508
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF50C
  c->lr=c->r[0]; // 800EF510
  c->r[1]=c->r[1]+0x00000010u; // 800EF514
  return; // 800EF518
}

// fn_800EF51C
void f_800EF51C(Ctx* __restrict c) {
  trace_call(0x800EF51Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EF51C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EF520
  c->ctr=c->r[12]; // 800EF524
  if (true) { dispatch(c,c->ctr); return; } // 800EF528
}

// fn_800EF52C
void f_800EF52C(Ctx* __restrict c) {
  trace_call(0x800EF52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF52C
  c->r[0]=c->lr; // 800EF530
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF534
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF538
  c->r[29]=c->r[3]|c->r[3]; // 800EF53C
  c->r[30]=c->r[4]|c->r[4]; // 800EF540
  c->r[31]=c->r[5]|c->r[5]; // 800EF544
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EF548
  cmps(c,0,(int32_t)c->r[0],7); // 800EF54C
  if (!crb(c,0)) { goto L_800EF560; } // 800EF550
  c->r[4]=c->r[31]|c->r[31]; // 800EF554
  c->r[3]=c->r[3]+0x00000030u; // 800EF558
  c->lr=0x800EF560u; f_8003A994(c); // 800EF55C
L_800EF560:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EF560
  c->r[3]=c->r[29]|c->r[29]; // 800EF564
  c->r[4]=c->r[30]|c->r[30]; // 800EF568
  c->r[5]=c->r[31]|c->r[31]; // 800EF56C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EF570
  c->ctr=c->r[12]; // 800EF574
  if (true) { c->lr=0x800EF57Cu; dispatch(c,c->ctr); } // 800EF578
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF57C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF580
  c->lr=c->r[0]; // 800EF584
  c->r[1]=c->r[1]+0x00000020u; // 800EF588
  return; // 800EF58C
}

// fn_800EF590
void f_800EF590(Ctx* __restrict c) {
  trace_call(0x800EF590u);
  c->r[3]=0u+0x80410000u; // 800EF590
  c->r[3]=c->r[3]+0xFFFFE77Fu; // 800EF594
  return; // 800EF598
}

// fn_800EF59C
void f_800EF59C(Ctx* __restrict c) {
  trace_call(0x800EF59Cu);
  c->r[3]=0u+0x00000040u; // 800EF59C
  return; // 800EF5A0
}

// fn_800EF5A4
void f_800EF5A4(Ctx* __restrict c) {
  trace_call(0x800EF5A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF5A4
  c->r[0]=c->lr; // 800EF5A8
  c->r[3]=0u+0x00000040u; // 800EF5AC
  c->r[4]=c->r[13]+0xFFFFB9DEu; // 800EF5B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF5B4
  c->r[5]=0u+0x00000000u; // 800EF5B8
  c->r[6]=0u+0x00001001u; // 800EF5BC
  c->lr=0x800EF5C4u; f_80244D20(c); // 800EF5C0
  cmps(c,0,(int32_t)c->r[3],0); // 800EF5C4
  if (crb(c,2)) { goto L_800EF5D0; } // 800EF5C8
  c->lr=0x800EF5D0u; f_800EF424(c); // 800EF5CC
L_800EF5D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF5D0
  c->lr=c->r[0]; // 800EF5D4
  c->r[1]=c->r[1]+0x00000010u; // 800EF5D8
  return; // 800EF5DC
}

// fn_800EF5E0
void f_800EF5E0(Ctx* __restrict c) {
  trace_call(0x800EF5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF5E0
  c->r[0]=c->lr; // 800EF5E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF5E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF5EC
  c->r[31]=c->r[3]|c->r[3]; // 800EF5F0
  c->lr=0x800EF5F8u; f_800D7120(c); // 800EF5F4
  c->r[5]=0u+0x80410000u; // 800EF5F8
  c->r[3]=0u+0x59710000u; // 800EF5FC
  c->r[0]=c->r[3]+0x000047B2u; // 800EF600
  c->r[4]=0u+0x00000000u; // 800EF604
  c->r[5]=c->r[5]+0x00004FB0u; // 800EF608
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EF60C
  c->r[3]=c->r[31]|c->r[31]; // 800EF610
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EF614
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EF618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF61C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF620
  c->lr=c->r[0]; // 800EF624
  c->r[1]=c->r[1]+0x00000010u; // 800EF628
  return; // 800EF62C
}

// fn_800EF630
void f_800EF630(Ctx* __restrict c) {
  trace_call(0x800EF630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF630
  c->r[0]=c->lr; // 800EF634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF63C
  c->r[30]=c->r[3]|c->r[3]; // 800EF640
  c->r[31]=c->r[4]|c->r[4]; // 800EF644
  c->lr=0x800EF64Cu; f_8030D728(c); // 800EF648
  c->r[3]=c->r[31]|c->r[31]; // 800EF64C
  c->r[4]=0u+0x00000000u; // 800EF650
  c->lr=0x800EF658u; f_8030BE30(c); // 800EF654
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EF658
  c->r[3]=c->r[31]|c->r[31]; // 800EF65C
  c->lr=0x800EF664u; f_8030BD1C(c); // 800EF660
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EF664
  c->r[3]=c->r[31]|c->r[31]; // 800EF668
  c->lr=0x800EF670u; f_8030BD1C(c); // 800EF66C
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EF670
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF674
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF678
  c->lr=c->r[0]; // 800EF67C
  c->r[1]=c->r[1]+0x00000010u; // 800EF680
  return; // 800EF684
}

// fn_800EF688
void f_800EF688(Ctx* __restrict c) {
  trace_call(0x800EF688u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF688
  c->r[0]=c->lr; // 800EF68C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF690
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF694
  c->r[30]=c->r[3]|c->r[3]; // 800EF698
  c->r[31]=c->r[4]|c->r[4]; // 800EF69C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EF6A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EF6A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EF6A8
  c->r[3]=c->r[4]+0x00000030u; // 800EF6AC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EF6B0
  c->r[4]=c->r[30]+0x00000030u; // 800EF6B4
  c->lr=0x800EF6BCu; f_8003AB48(c); // 800EF6B8
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EF6BC
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EF6C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF6C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF6C8
  c->lr=c->r[0]; // 800EF6CC
  c->r[1]=c->r[1]+0x00000010u; // 800EF6D0
  return; // 800EF6D4
}

// fn_800EF6D8
void f_800EF6D8(Ctx* __restrict c) {
  trace_call(0x800EF6D8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EF6D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EF6DC
  c->ctr=c->r[12]; // 800EF6E0
  if (true) { dispatch(c,c->ctr); return; } // 800EF6E4
}

// fn_800EF6E8
void f_800EF6E8(Ctx* __restrict c) {
  trace_call(0x800EF6E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF6E8
  c->r[0]=c->lr; // 800EF6EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF6F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF6F4
  c->r[29]=c->r[3]|c->r[3]; // 800EF6F8
  c->r[30]=c->r[4]|c->r[4]; // 800EF6FC
  c->r[31]=c->r[5]|c->r[5]; // 800EF700
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EF704
  cmps(c,0,(int32_t)c->r[0],7); // 800EF708
  if (!crb(c,0)) { goto L_800EF71C; } // 800EF70C
  c->r[4]=c->r[31]|c->r[31]; // 800EF710
  c->r[3]=c->r[3]+0x00000030u; // 800EF714
  c->lr=0x800EF71Cu; f_8003A994(c); // 800EF718
L_800EF71C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EF71C
  c->r[3]=c->r[29]|c->r[29]; // 800EF720
  c->r[4]=c->r[30]|c->r[30]; // 800EF724
  c->r[5]=c->r[31]|c->r[31]; // 800EF728
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EF72C
  c->ctr=c->r[12]; // 800EF730
  if (true) { c->lr=0x800EF738u; dispatch(c,c->ctr); } // 800EF734
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF738
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF73C
  c->lr=c->r[0]; // 800EF740
  c->r[1]=c->r[1]+0x00000020u; // 800EF744
  return; // 800EF748
}

// fn_800EF74C
void f_800EF74C(Ctx* __restrict c) {
  trace_call(0x800EF74Cu);
  c->r[3]=0u+0x80410000u; // 800EF74C
  c->r[3]=c->r[3]+0xFFFFE791u; // 800EF750
  return; // 800EF754
}

// fn_800EF758
void f_800EF758(Ctx* __restrict c) {
  trace_call(0x800EF758u);
  c->r[3]=0u+0x00000040u; // 800EF758
  return; // 800EF75C
}

// fn_800EF760
void f_800EF760(Ctx* __restrict c) {
  trace_call(0x800EF760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF760
  c->r[0]=c->lr; // 800EF764
  c->r[3]=0u+0x00000040u; // 800EF768
  c->r[4]=c->r[13]+0xFFFFB9E3u; // 800EF76C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF770
  c->r[5]=0u+0x00000000u; // 800EF774
  c->r[6]=0u+0x00001001u; // 800EF778
  c->lr=0x800EF780u; f_80244D20(c); // 800EF77C
  cmps(c,0,(int32_t)c->r[3],0); // 800EF780
  if (crb(c,2)) { goto L_800EF78C; } // 800EF784
  c->lr=0x800EF78Cu; f_800EF5E0(c); // 800EF788
L_800EF78C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF78C
  c->lr=c->r[0]; // 800EF790
  c->r[1]=c->r[1]+0x00000010u; // 800EF794
  return; // 800EF798
}

// fn_800EF79C
void f_800EF79C(Ctx* __restrict c) {
  trace_call(0x800EF79Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF79C
  c->r[0]=c->lr; // 800EF7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF7A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF7A8
  c->r[31]=c->r[3]|c->r[3]; // 800EF7AC
  c->lr=0x800EF7B4u; f_800D7120(c); // 800EF7B0
  c->r[5]=0u+0x80410000u; // 800EF7B4
  c->r[3]=0u+0x59710000u; // 800EF7B8
  c->r[0]=c->r[3]+0x000047B2u; // 800EF7BC
  c->r[4]=0u+0x00000000u; // 800EF7C0
  c->r[5]=c->r[5]+0x00004F7Cu; // 800EF7C4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EF7C8
  c->r[3]=c->r[31]|c->r[31]; // 800EF7CC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EF7D0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EF7D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF7D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF7DC
  c->lr=c->r[0]; // 800EF7E0
  c->r[1]=c->r[1]+0x00000010u; // 800EF7E4
  return; // 800EF7E8
}

// fn_800EF7EC
void f_800EF7EC(Ctx* __restrict c) {
  trace_call(0x800EF7ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF7EC
  c->r[0]=c->lr; // 800EF7F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF7F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF7F8
  c->r[30]=c->r[3]|c->r[3]; // 800EF7FC
  c->r[31]=c->r[4]|c->r[4]; // 800EF800
  c->lr=0x800EF808u; f_8030D728(c); // 800EF804
  c->r[3]=c->r[31]|c->r[31]; // 800EF808
  c->r[4]=0u+0x00000000u; // 800EF80C
  c->lr=0x800EF814u; f_8030BE30(c); // 800EF810
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EF814
  c->r[3]=c->r[31]|c->r[31]; // 800EF818
  c->lr=0x800EF820u; f_8030BD1C(c); // 800EF81C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EF820
  c->r[3]=c->r[31]|c->r[31]; // 800EF824
  c->lr=0x800EF82Cu; f_8030BD1C(c); // 800EF828
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EF82C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF830
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF834
  c->lr=c->r[0]; // 800EF838
  c->r[1]=c->r[1]+0x00000010u; // 800EF83C
  return; // 800EF840
}

// fn_800EF844
void f_800EF844(Ctx* __restrict c) {
  trace_call(0x800EF844u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF844
  c->r[0]=c->lr; // 800EF848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF84C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF850
  c->r[30]=c->r[3]|c->r[3]; // 800EF854
  c->r[31]=c->r[4]|c->r[4]; // 800EF858
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EF85C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EF860
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EF864
  c->r[3]=c->r[4]+0x00000030u; // 800EF868
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EF86C
  c->r[4]=c->r[30]+0x00000030u; // 800EF870
  c->lr=0x800EF878u; f_8003AB48(c); // 800EF874
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EF878
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EF87C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF884
  c->lr=c->r[0]; // 800EF888
  c->r[1]=c->r[1]+0x00000010u; // 800EF88C
  return; // 800EF890
}

// fn_800EF894
void f_800EF894(Ctx* __restrict c) {
  trace_call(0x800EF894u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EF894
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EF898
  c->ctr=c->r[12]; // 800EF89C
  if (true) { dispatch(c,c->ctr); return; } // 800EF8A0
}

// fn_800EF8A4
void f_800EF8A4(Ctx* __restrict c) {
  trace_call(0x800EF8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF8A4
  c->r[0]=c->lr; // 800EF8A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF8AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF8B0
  c->r[29]=c->r[3]|c->r[3]; // 800EF8B4
  c->r[30]=c->r[4]|c->r[4]; // 800EF8B8
  c->r[31]=c->r[5]|c->r[5]; // 800EF8BC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EF8C0
  cmps(c,0,(int32_t)c->r[0],7); // 800EF8C4
  if (!crb(c,0)) { goto L_800EF8D8; } // 800EF8C8
  c->r[4]=c->r[31]|c->r[31]; // 800EF8CC
  c->r[3]=c->r[3]+0x00000030u; // 800EF8D0
  c->lr=0x800EF8D8u; f_8003A994(c); // 800EF8D4
L_800EF8D8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EF8D8
  c->r[3]=c->r[29]|c->r[29]; // 800EF8DC
  c->r[4]=c->r[30]|c->r[30]; // 800EF8E0
  c->r[5]=c->r[31]|c->r[31]; // 800EF8E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EF8E8
  c->ctr=c->r[12]; // 800EF8EC
  if (true) { c->lr=0x800EF8F4u; dispatch(c,c->ctr); } // 800EF8F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF8F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF8F8
  c->lr=c->r[0]; // 800EF8FC
  c->r[1]=c->r[1]+0x00000020u; // 800EF900
  return; // 800EF904
}

// fn_800EF908
void f_800EF908(Ctx* __restrict c) {
  trace_call(0x800EF908u);
  c->r[3]=0u+0x80410000u; // 800EF908
  c->r[3]=c->r[3]+0xFFFFE7A2u; // 800EF90C
  return; // 800EF910
}

// fn_800EF914
void f_800EF914(Ctx* __restrict c) {
  trace_call(0x800EF914u);
  c->r[3]=0u+0x00000040u; // 800EF914
  return; // 800EF918
}

// fn_800EF91C
void f_800EF91C(Ctx* __restrict c) {
  trace_call(0x800EF91Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF91C
  c->r[0]=c->lr; // 800EF920
  c->r[3]=0u+0x00000040u; // 800EF924
  c->r[4]=c->r[13]+0xFFFFB9E8u; // 800EF928
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF92C
  c->r[5]=0u+0x00000000u; // 800EF930
  c->r[6]=0u+0x00001001u; // 800EF934
  c->lr=0x800EF93Cu; f_80244D20(c); // 800EF938
  cmps(c,0,(int32_t)c->r[3],0); // 800EF93C
  if (crb(c,2)) { goto L_800EF948; } // 800EF940
  c->lr=0x800EF948u; f_800EF79C(c); // 800EF944
L_800EF948:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF948
  c->lr=c->r[0]; // 800EF94C
  c->r[1]=c->r[1]+0x00000010u; // 800EF950
  return; // 800EF954
}

// fn_800EF958
void f_800EF958(Ctx* __restrict c) {
  trace_call(0x800EF958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF958
  c->r[0]=c->lr; // 800EF95C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF960
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF964
  c->r[31]=c->r[3]|c->r[3]; // 800EF968
  c->lr=0x800EF970u; f_800D7120(c); // 800EF96C
  c->r[5]=0u+0x80410000u; // 800EF970
  c->r[3]=0u+0x59710000u; // 800EF974
  c->r[0]=c->r[3]+0x000047B2u; // 800EF978
  c->r[4]=0u+0x00000000u; // 800EF97C
  c->r[5]=c->r[5]+0x00004F48u; // 800EF980
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EF984
  c->r[3]=c->r[31]|c->r[31]; // 800EF988
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EF98C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EF990
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF994
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF998
  c->lr=c->r[0]; // 800EF99C
  c->r[1]=c->r[1]+0x00000010u; // 800EF9A0
  return; // 800EF9A4
}

// fn_800EF9A8
void f_800EF9A8(Ctx* __restrict c) {
  trace_call(0x800EF9A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF9A8
  c->r[0]=c->lr; // 800EF9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF9B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EF9B4
  c->r[30]=c->r[3]|c->r[3]; // 800EF9B8
  c->r[31]=c->r[4]|c->r[4]; // 800EF9BC
  c->lr=0x800EF9C4u; f_8030D728(c); // 800EF9C0
  c->r[3]=c->r[31]|c->r[31]; // 800EF9C4
  c->r[4]=0u+0x00000000u; // 800EF9C8
  c->lr=0x800EF9D0u; f_8030BE30(c); // 800EF9CC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EF9D0
  c->r[3]=c->r[31]|c->r[31]; // 800EF9D4
  c->lr=0x800EF9DCu; f_8030BD1C(c); // 800EF9D8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EF9DC
  c->r[3]=c->r[31]|c->r[31]; // 800EF9E0
  c->lr=0x800EF9E8u; f_8030BD1C(c); // 800EF9E4
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EF9E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EF9EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF9F0
  c->lr=c->r[0]; // 800EF9F4
  c->r[1]=c->r[1]+0x00000010u; // 800EF9F8
  return; // 800EF9FC
}

// fn_800EFA00
void f_800EFA00(Ctx* __restrict c) {
  trace_call(0x800EFA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFA00
  c->r[0]=c->lr; // 800EFA04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFA08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFA0C
  c->r[30]=c->r[3]|c->r[3]; // 800EFA10
  c->r[31]=c->r[4]|c->r[4]; // 800EFA14
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EFA18
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EFA1C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EFA20
  c->r[3]=c->r[4]+0x00000030u; // 800EFA24
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EFA28
  c->r[4]=c->r[30]+0x00000030u; // 800EFA2C
  c->lr=0x800EFA34u; f_8003AB48(c); // 800EFA30
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EFA34
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EFA38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFA3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFA40
  c->lr=c->r[0]; // 800EFA44
  c->r[1]=c->r[1]+0x00000010u; // 800EFA48
  return; // 800EFA4C
}

// fn_800EFA50
void f_800EFA50(Ctx* __restrict c) {
  trace_call(0x800EFA50u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EFA50
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EFA54
  c->ctr=c->r[12]; // 800EFA58
  if (true) { dispatch(c,c->ctr); return; } // 800EFA5C
}

// fn_800EFA60
void f_800EFA60(Ctx* __restrict c) {
  trace_call(0x800EFA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFA60
  c->r[0]=c->lr; // 800EFA64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFA68
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFA6C
  c->r[29]=c->r[3]|c->r[3]; // 800EFA70
  c->r[30]=c->r[4]|c->r[4]; // 800EFA74
  c->r[31]=c->r[5]|c->r[5]; // 800EFA78
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EFA7C
  cmps(c,0,(int32_t)c->r[0],7); // 800EFA80
  if (!crb(c,0)) { goto L_800EFA94; } // 800EFA84
  c->r[4]=c->r[31]|c->r[31]; // 800EFA88
  c->r[3]=c->r[3]+0x00000030u; // 800EFA8C
  c->lr=0x800EFA94u; f_8003A994(c); // 800EFA90
L_800EFA94:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EFA94
  c->r[3]=c->r[29]|c->r[29]; // 800EFA98
  c->r[4]=c->r[30]|c->r[30]; // 800EFA9C
  c->r[5]=c->r[31]|c->r[31]; // 800EFAA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EFAA4
  c->ctr=c->r[12]; // 800EFAA8
  if (true) { c->lr=0x800EFAB0u; dispatch(c,c->ctr); } // 800EFAAC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFAB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFAB4
  c->lr=c->r[0]; // 800EFAB8
  c->r[1]=c->r[1]+0x00000020u; // 800EFABC
  return; // 800EFAC0
}

// fn_800EFAC4
void f_800EFAC4(Ctx* __restrict c) {
  trace_call(0x800EFAC4u);
  c->r[3]=0u+0x80410000u; // 800EFAC4
  c->r[3]=c->r[3]+0xFFFFE7B0u; // 800EFAC8
  return; // 800EFACC
}

// fn_800EFAD0
void f_800EFAD0(Ctx* __restrict c) {
  trace_call(0x800EFAD0u);
  c->r[3]=0u+0x00000040u; // 800EFAD0
  return; // 800EFAD4
}

// fn_800EFAD8
void f_800EFAD8(Ctx* __restrict c) {
  trace_call(0x800EFAD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFAD8
  c->r[0]=c->lr; // 800EFADC
  c->r[3]=0u+0x00000040u; // 800EFAE0
  c->r[4]=c->r[13]+0xFFFFB9EDu; // 800EFAE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFAE8
  c->r[5]=0u+0x00000000u; // 800EFAEC
  c->r[6]=0u+0x00001001u; // 800EFAF0
  c->lr=0x800EFAF8u; f_80244D20(c); // 800EFAF4
  cmps(c,0,(int32_t)c->r[3],0); // 800EFAF8
  if (crb(c,2)) { goto L_800EFB04; } // 800EFAFC
  c->lr=0x800EFB04u; f_800EF958(c); // 800EFB00
L_800EFB04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFB04
  c->lr=c->r[0]; // 800EFB08
  c->r[1]=c->r[1]+0x00000010u; // 800EFB0C
  return; // 800EFB10
}

// fn_800EFB14
void f_800EFB14(Ctx* __restrict c) {
  trace_call(0x800EFB14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB14
  c->r[0]=c->lr; // 800EFB18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFB1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFB20
  c->r[31]=c->r[3]|c->r[3]; // 800EFB24
  c->lr=0x800EFB2Cu; f_800D7120(c); // 800EFB28
  c->r[5]=0u+0x80410000u; // 800EFB2C
  c->r[3]=0u+0x127F0000u; // 800EFB30
  c->r[0]=c->r[3]+0x000042C8u; // 800EFB34
  c->r[4]=0u+0x00000000u; // 800EFB38
  c->r[5]=c->r[5]+0x00004F14u; // 800EFB3C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EFB40
  c->r[3]=c->r[31]|c->r[31]; // 800EFB44
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EFB48
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EFB4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFB50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFB54
  c->lr=c->r[0]; // 800EFB58
  c->r[1]=c->r[1]+0x00000010u; // 800EFB5C
  return; // 800EFB60
}

// fn_800EFB64
void f_800EFB64(Ctx* __restrict c) {
  trace_call(0x800EFB64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB64
  c->r[0]=c->lr; // 800EFB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFB6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFB70
  c->r[30]=c->r[3]|c->r[3]; // 800EFB74
  c->r[31]=c->r[4]|c->r[4]; // 800EFB78
  c->lr=0x800EFB80u; f_8030D728(c); // 800EFB7C
  c->r[3]=c->r[31]|c->r[31]; // 800EFB80
  c->r[4]=0u+0x00000000u; // 800EFB84
  c->lr=0x800EFB8Cu; f_8030BE30(c); // 800EFB88
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EFB8C
  c->r[3]=c->r[31]|c->r[31]; // 800EFB90
  c->lr=0x800EFB98u; f_8030BD1C(c); // 800EFB94
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EFB98
  c->r[3]=c->r[31]|c->r[31]; // 800EFB9C
  c->lr=0x800EFBA4u; f_8030BD1C(c); // 800EFBA0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EFBA4
  c->r[3]=c->r[31]|c->r[31]; // 800EFBA8
  c->lr=0x800EFBB0u; f_8030BD1C(c); // 800EFBAC
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800EFBB0
  c->r[3]=c->r[31]|c->r[31]; // 800EFBB4
  c->lr=0x800EFBBCu; f_8030BD1C(c); // 800EFBB8
  W8(c->r[30]+0x0000003Eu,c->r[3]); // 800EFBBC
  c->r[3]=c->r[31]|c->r[31]; // 800EFBC0
  c->lr=0x800EFBC8u; f_8030BD1C(c); // 800EFBC4
  W8(c->r[30]+0x0000003Fu,c->r[3]); // 800EFBC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFBCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFBD0
  c->lr=c->r[0]; // 800EFBD4
  c->r[1]=c->r[1]+0x00000010u; // 800EFBD8
  return; // 800EFBDC
}

// fn_800EFBE0
void f_800EFBE0(Ctx* __restrict c) {
  trace_call(0x800EFBE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFBE0
  c->r[0]=c->lr; // 800EFBE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFBE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFBEC
  c->r[30]=c->r[3]|c->r[3]; // 800EFBF0
  c->r[31]=c->r[4]|c->r[4]; // 800EFBF4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EFBF8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EFBFC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EFC00
  c->r[3]=c->r[4]+0x00000030u; // 800EFC04
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EFC08
  c->r[4]=c->r[30]+0x00000030u; // 800EFC0C
  c->lr=0x800EFC14u; f_8003AB48(c); // 800EFC10
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EFC14
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EFC18
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800EFC1C
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800EFC20
  c->r[0]=R8(c->r[30]+0x0000003Eu); // 800EFC24
  W8(c->r[31]+0x0000003Eu,c->r[0]); // 800EFC28
  c->r[0]=R8(c->r[30]+0x0000003Fu); // 800EFC2C
  W8(c->r[31]+0x0000003Fu,c->r[0]); // 800EFC30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFC34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFC38
  c->lr=c->r[0]; // 800EFC3C
  c->r[1]=c->r[1]+0x00000010u; // 800EFC40
  return; // 800EFC44
}

// fn_800EFC48
void f_800EFC48(Ctx* __restrict c) {
  trace_call(0x800EFC48u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EFC48
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EFC4C
  c->ctr=c->r[12]; // 800EFC50
  if (true) { dispatch(c,c->ctr); return; } // 800EFC54
}

// fn_800EFC58
void f_800EFC58(Ctx* __restrict c) {
  trace_call(0x800EFC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFC58
  c->r[0]=c->lr; // 800EFC5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFC60
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFC64
  c->r[29]=c->r[3]|c->r[3]; // 800EFC68
  c->r[30]=c->r[4]|c->r[4]; // 800EFC6C
  c->r[31]=c->r[5]|c->r[5]; // 800EFC70
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EFC74
  cmps(c,0,(int32_t)c->r[0],7); // 800EFC78
  if (!crb(c,0)) { goto L_800EFC8C; } // 800EFC7C
  c->r[4]=c->r[31]|c->r[31]; // 800EFC80
  c->r[3]=c->r[3]+0x00000030u; // 800EFC84
  c->lr=0x800EFC8Cu; f_8003A994(c); // 800EFC88
L_800EFC8C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EFC8C
  c->r[3]=c->r[29]|c->r[29]; // 800EFC90
  c->r[4]=c->r[30]|c->r[30]; // 800EFC94
  c->r[5]=c->r[31]|c->r[31]; // 800EFC98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EFC9C
  c->ctr=c->r[12]; // 800EFCA0
  if (true) { c->lr=0x800EFCA8u; dispatch(c,c->ctr); } // 800EFCA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFCA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFCAC
  c->lr=c->r[0]; // 800EFCB0
  c->r[1]=c->r[1]+0x00000020u; // 800EFCB4
  return; // 800EFCB8
}

// fn_800EFCBC
void f_800EFCBC(Ctx* __restrict c) {
  trace_call(0x800EFCBCu);
  c->r[3]=0u+0x80410000u; // 800EFCBC
  c->r[3]=c->r[3]+0xFFFFE7BCu; // 800EFCC0
  return; // 800EFCC4
}

// fn_800EFCC8
void f_800EFCC8(Ctx* __restrict c) {
  trace_call(0x800EFCC8u);
  c->r[3]=0u+0x00000040u; // 800EFCC8
  return; // 800EFCCC
}

// fn_800EFCD0
void f_800EFCD0(Ctx* __restrict c) {
  trace_call(0x800EFCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFCD0
  c->r[0]=c->lr; // 800EFCD4
  c->r[3]=0u+0x00000040u; // 800EFCD8
  c->r[4]=c->r[13]+0xFFFFB9F2u; // 800EFCDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFCE0
  c->r[5]=0u+0x00000000u; // 800EFCE4
  c->r[6]=0u+0x00001001u; // 800EFCE8
  c->lr=0x800EFCF0u; f_80244D20(c); // 800EFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 800EFCF0
  if (crb(c,2)) { goto L_800EFCFC; } // 800EFCF4
  c->lr=0x800EFCFCu; f_800EFB14(c); // 800EFCF8
L_800EFCFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFCFC
  c->lr=c->r[0]; // 800EFD00
  c->r[1]=c->r[1]+0x00000010u; // 800EFD04
  return; // 800EFD08
}

// fn_800EFD0C
void f_800EFD0C(Ctx* __restrict c) {
  trace_call(0x800EFD0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFD0C
  c->r[0]=c->lr; // 800EFD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFD14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFD18
  c->r[31]=c->r[3]|c->r[3]; // 800EFD1C
  c->lr=0x800EFD24u; f_800D7120(c); // 800EFD20
  c->r[5]=0u+0x80410000u; // 800EFD24
  c->r[3]=0u+0x7EEB0000u; // 800EFD28
  c->r[4]=0u+0x00000000u; // 800EFD2C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EFD30
  c->r[0]=c->r[3]+0x0000309Cu; // 800EFD34
  c->r[5]=c->r[5]+0x00004EE0u; // 800EFD38
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EFD3C
  c->r[3]=c->r[31]|c->r[31]; // 800EFD40
  W32(c->r[31]+0x00000044u,c->r[4]); // 800EFD44
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EFD48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFD4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFD50
  c->lr=c->r[0]; // 800EFD54
  c->r[1]=c->r[1]+0x00000010u; // 800EFD58
  return; // 800EFD5C
}

// fn_800EFD60
void f_800EFD60(Ctx* __restrict c) {
  trace_call(0x800EFD60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFD60
  c->r[0]=c->lr; // 800EFD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFD68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFD6C
  c->r[30]=c->r[3]|c->r[3]; // 800EFD70
  c->r[31]=c->r[4]|c->r[4]; // 800EFD74
  c->lr=0x800EFD7Cu; f_8030D728(c); // 800EFD78
  c->r[3]=c->r[31]|c->r[31]; // 800EFD7C
  c->r[4]=0u+0x00000000u; // 800EFD80
  c->lr=0x800EFD88u; f_8030BE30(c); // 800EFD84
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EFD88
  c->r[3]=c->r[31]|c->r[31]; // 800EFD8C
  c->lr=0x800EFD94u; f_8030BD1C(c); // 800EFD90
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EFD94
  c->r[3]=c->r[31]|c->r[31]; // 800EFD98
  c->r[4]=0u+0x00000000u; // 800EFD9C
  c->lr=0x800EFDA4u; f_8030BE30(c); // 800EFDA0
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EFDA4
  c->r[3]=c->r[31]|c->r[31]; // 800EFDA8
  c->lr=0x800EFDB0u; f_8030BD1C(c); // 800EFDAC
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EFDB0
  c->r[3]=c->r[31]|c->r[31]; // 800EFDB4
  c->lr=0x800EFDBCu; f_8030BD1C(c); // 800EFDB8
  W8(c->r[30]+0x00000048u,c->r[3]); // 800EFDBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFDC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFDC4
  c->lr=c->r[0]; // 800EFDC8
  c->r[1]=c->r[1]+0x00000010u; // 800EFDCC
  return; // 800EFDD0
}

// fn_800EFDD4
void f_800EFDD4(Ctx* __restrict c) {
  trace_call(0x800EFDD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFDD4
  c->r[0]=c->lr; // 800EFDD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFDDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFDE0
  c->r[30]=c->r[3]|c->r[3]; // 800EFDE4
  c->r[31]=c->r[4]|c->r[4]; // 800EFDE8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EFDEC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EFDF0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EFDF4
  c->r[3]=c->r[4]+0x00000030u; // 800EFDF8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EFDFC
  c->r[4]=c->r[30]+0x00000030u; // 800EFE00
  c->lr=0x800EFE08u; f_8003AB48(c); // 800EFE04
  c->r[3]=c->r[31]+0x0000003Cu; // 800EFE08
  c->r[4]=c->r[30]+0x0000003Cu; // 800EFE0C
  c->lr=0x800EFE14u; f_8003AB48(c); // 800EFE10
  c->r[0]=R8(c->r[30]+0x00000048u); // 800EFE14
  W8(c->r[31]+0x00000048u,c->r[0]); // 800EFE18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFE1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFE20
  c->lr=c->r[0]; // 800EFE24
  c->r[1]=c->r[1]+0x00000010u; // 800EFE28
  return; // 800EFE2C
}

// fn_800EFE30
void f_800EFE30(Ctx* __restrict c) {
  trace_call(0x800EFE30u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EFE30
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EFE34
  c->ctr=c->r[12]; // 800EFE38
  if (true) { dispatch(c,c->ctr); return; } // 800EFE3C
}

// fn_800EFE40
void f_800EFE40(Ctx* __restrict c) {
  trace_call(0x800EFE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFE40
  c->r[0]=c->lr; // 800EFE44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFE48
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFE4C
  c->r[29]=c->r[3]|c->r[3]; // 800EFE50
  c->r[30]=c->r[4]|c->r[4]; // 800EFE54
  c->r[31]=c->r[5]|c->r[5]; // 800EFE58
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EFE5C
  cmps(c,0,(int32_t)c->r[0],7); // 800EFE60
  if (!crb(c,0)) { goto L_800EFE74; } // 800EFE64
  c->r[4]=c->r[31]|c->r[31]; // 800EFE68
  c->r[3]=c->r[3]+0x00000030u; // 800EFE6C
  c->lr=0x800EFE74u; f_8003A994(c); // 800EFE70
L_800EFE74:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800EFE74
  cmps(c,0,(int32_t)c->r[0],7); // 800EFE78
  if (!crb(c,0)) { goto L_800EFE8C; } // 800EFE7C
  c->r[4]=c->r[31]|c->r[31]; // 800EFE80
  c->r[3]=c->r[29]+0x0000003Cu; // 800EFE84
  c->lr=0x800EFE8Cu; f_8003A994(c); // 800EFE88
L_800EFE8C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EFE8C
  c->r[3]=c->r[29]|c->r[29]; // 800EFE90
  c->r[4]=c->r[30]|c->r[30]; // 800EFE94
  c->r[5]=c->r[31]|c->r[31]; // 800EFE98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EFE9C
  c->ctr=c->r[12]; // 800EFEA0
  if (true) { c->lr=0x800EFEA8u; dispatch(c,c->ctr); } // 800EFEA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFEA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFEAC
  c->lr=c->r[0]; // 800EFEB0
  c->r[1]=c->r[1]+0x00000020u; // 800EFEB4
  return; // 800EFEB8
}

// fn_800EFEBC
void f_800EFEBC(Ctx* __restrict c) {
  trace_call(0x800EFEBCu);
  c->r[3]=0u+0x80410000u; // 800EFEBC
  c->r[3]=c->r[3]+0xFFFFE7CDu; // 800EFEC0
  return; // 800EFEC4
}

// fn_800EFEC8
void f_800EFEC8(Ctx* __restrict c) {
  trace_call(0x800EFEC8u);
  c->r[3]=0u+0x0000004Cu; // 800EFEC8
  return; // 800EFECC
}

// fn_800EFED0
void f_800EFED0(Ctx* __restrict c) {
  trace_call(0x800EFED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFED0
  c->r[0]=c->lr; // 800EFED4
  c->r[3]=0u+0x0000004Cu; // 800EFED8
  c->r[4]=c->r[13]+0xFFFFB9F7u; // 800EFEDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFEE0
  c->r[5]=0u+0x00000000u; // 800EFEE4
  c->r[6]=0u+0x00001001u; // 800EFEE8
  c->lr=0x800EFEF0u; f_80244D20(c); // 800EFEEC
  cmps(c,0,(int32_t)c->r[3],0); // 800EFEF0
  if (crb(c,2)) { goto L_800EFEFC; } // 800EFEF4
  c->lr=0x800EFEFCu; f_800EFD0C(c); // 800EFEF8
L_800EFEFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFEFC
  c->lr=c->r[0]; // 800EFF00
  c->r[1]=c->r[1]+0x00000010u; // 800EFF04
  return; // 800EFF08
}

// fn_800EFF0C
void f_800EFF0C(Ctx* __restrict c) {
  trace_call(0x800EFF0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFF0C
  c->r[0]=c->lr; // 800EFF10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFF14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EFF18
  c->r[31]=c->r[3]|c->r[3]; // 800EFF1C
  c->lr=0x800EFF24u; f_800D7120(c); // 800EFF20
  c->r[4]=0u+0x80410000u; // 800EFF24
  c->r[3]=0u+0x917C0000u; // 800EFF28
  c->r[0]=c->r[3]+0x00006DEDu; // 800EFF2C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EFF30
  c->r[4]=c->r[4]+0x00004EACu; // 800EFF34
  c->r[3]=c->r[31]|c->r[31]; // 800EFF38
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EFF3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EFF40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFF44
  c->lr=c->r[0]; // 800EFF48
  c->r[1]=c->r[1]+0x00000010u; // 800EFF4C
  return; // 800EFF50
}

// fn_800EFF54
void f_800EFF54(Ctx* __restrict c) {
  trace_call(0x800EFF54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFF54
  c->r[0]=c->lr; // 800EFF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFF5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFF60
  c->r[30]=c->r[3]|c->r[3]; // 800EFF64
  c->r[31]=c->r[4]|c->r[4]; // 800EFF68
  c->lr=0x800EFF70u; f_8030D728(c); // 800EFF6C
  c->r[3]=c->r[31]|c->r[31]; // 800EFF70
  c->r[4]=c->r[30]+0x00000030u; // 800EFF74
  c->r[5]=0u+0x00000000u; // 800EFF78
  c->lr=0x800EFF80u; f_8030B7F0(c); // 800EFF7C
  c->r[3]=c->r[31]|c->r[31]; // 800EFF80
  c->r[4]=c->r[30]+0x00000050u; // 800EFF84
  c->r[5]=0u+0x00000000u; // 800EFF88
  c->lr=0x800EFF90u; f_8030B7F0(c); // 800EFF8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFF90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFF94
  c->lr=c->r[0]; // 800EFF98
  c->r[1]=c->r[1]+0x00000010u; // 800EFF9C
  return; // 800EFFA0
}

// fn_800EFFA4
void f_800EFFA4(Ctx* __restrict c) {
  trace_call(0x800EFFA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFFA4
  c->r[0]=c->lr; // 800EFFA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFFAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EFFB0
  c->r[30]=c->r[3]|c->r[3]; // 800EFFB4
  c->r[31]=c->r[4]|c->r[4]; // 800EFFB8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EFFBC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EFFC0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EFFC4
  c->r[3]=c->r[4]+0x00000030u; // 800EFFC8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EFFCC
  c->r[4]=c->r[30]+0x00000030u; // 800EFFD0
  c->lr=0x800EFFD8u; f_803A6F10(c); // 800EFFD4
  c->r[3]=c->r[31]+0x00000050u; // 800EFFD8
  c->r[4]=c->r[30]+0x00000050u; // 800EFFDC
  c->lr=0x800EFFE4u; f_803A6F10(c); // 800EFFE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EFFE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EFFE8
  c->lr=c->r[0]; // 800EFFEC
  c->r[1]=c->r[1]+0x00000010u; // 800EFFF0
  return; // 800EFFF4
}

// fn_800EFFF8
void f_800EFFF8(Ctx* __restrict c) {
  trace_call(0x800EFFF8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EFFF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EFFFC
  c->ctr=c->r[12]; // 800F0000
  if (true) { dispatch(c,c->ctr); return; } // 800F0004
}

// fn_800F0008
void f_800F0008(Ctx* __restrict c) {
  trace_call(0x800F0008u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F0008
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F000C
  c->ctr=c->r[12]; // 800F0010
  if (true) { dispatch(c,c->ctr); return; } // 800F0014
}

// fn_800F0018
void f_800F0018(Ctx* __restrict c) {
  trace_call(0x800F0018u);
  c->r[3]=0u+0x80410000u; // 800F0018
  c->r[3]=c->r[3]+0xFFFFE7E0u; // 800F001C
  return; // 800F0020
}

// fn_800F0024
void f_800F0024(Ctx* __restrict c) {
  trace_call(0x800F0024u);
  c->r[3]=0u+0x000000D0u; // 800F0024
  return; // 800F0028
}

// fn_800F002C
void f_800F002C(Ctx* __restrict c) {
  trace_call(0x800F002Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F002C
  c->r[0]=c->lr; // 800F0030
  c->r[3]=0u+0x000000D0u; // 800F0034
  c->r[4]=c->r[13]+0xFFFFB9FCu; // 800F0038
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F003C
  c->r[5]=0u+0x00000000u; // 800F0040
  c->r[6]=0u+0x00001001u; // 800F0044
  c->lr=0x800F004Cu; f_80244D20(c); // 800F0048
  cmps(c,0,(int32_t)c->r[3],0); // 800F004C
  if (crb(c,2)) { goto L_800F0058; } // 800F0050
  c->lr=0x800F0058u; f_800EFF0C(c); // 800F0054
L_800F0058:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0058
  c->lr=c->r[0]; // 800F005C
  c->r[1]=c->r[1]+0x00000010u; // 800F0060
  return; // 800F0064
}

// fn_800F0068
void f_800F0068(Ctx* __restrict c) {
  trace_call(0x800F0068u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0068
  c->r[0]=c->lr; // 800F006C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0070
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0074
  c->r[31]=c->r[3]|c->r[3]; // 800F0078
  c->lr=0x800F0080u; f_800D7120(c); // 800F007C
  c->r[5]=0u+0x80410000u; // 800F0080
  c->r[3]=0u+0x59710000u; // 800F0084
  c->r[0]=c->r[3]+0x000047B2u; // 800F0088
  c->r[4]=0u+0x00000000u; // 800F008C
  c->r[5]=c->r[5]+0x00004E78u; // 800F0090
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F0094
  c->r[3]=c->r[31]|c->r[31]; // 800F0098
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F009C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F00A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F00A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F00A8
  c->lr=c->r[0]; // 800F00AC
  c->r[1]=c->r[1]+0x00000010u; // 800F00B0
  return; // 800F00B4
}

// fn_800F00B8
void f_800F00B8(Ctx* __restrict c) {
  trace_call(0x800F00B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F00B8
  c->r[0]=c->lr; // 800F00BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F00C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F00C4
  c->r[30]=c->r[3]|c->r[3]; // 800F00C8
  c->r[31]=c->r[4]|c->r[4]; // 800F00CC
  c->lr=0x800F00D4u; f_8030D728(c); // 800F00D0
  c->r[3]=c->r[31]|c->r[31]; // 800F00D4
  c->r[4]=0u+0x00000000u; // 800F00D8
  c->lr=0x800F00E0u; f_8030BE30(c); // 800F00DC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F00E0
  c->r[3]=c->r[31]|c->r[31]; // 800F00E4
  c->lr=0x800F00ECu; f_8030BD1C(c); // 800F00E8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F00EC
  c->r[3]=c->r[31]|c->r[31]; // 800F00F0
  c->lr=0x800F00F8u; f_8030BD1C(c); // 800F00F4
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F00F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F00FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0100
  c->lr=c->r[0]; // 800F0104
  c->r[1]=c->r[1]+0x00000010u; // 800F0108
  return; // 800F010C
}

// fn_800F0110
void f_800F0110(Ctx* __restrict c) {
  trace_call(0x800F0110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0110
  c->r[0]=c->lr; // 800F0114
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0118
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F011C
  c->r[30]=c->r[3]|c->r[3]; // 800F0120
  c->r[31]=c->r[4]|c->r[4]; // 800F0124
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F0128
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F012C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F0130
  c->r[3]=c->r[4]+0x00000030u; // 800F0134
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F0138
  c->r[4]=c->r[30]+0x00000030u; // 800F013C
  c->lr=0x800F0144u; f_8003AB48(c); // 800F0140
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F0144
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F0148
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F014C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0150
  c->lr=c->r[0]; // 800F0154
  c->r[1]=c->r[1]+0x00000010u; // 800F0158
  return; // 800F015C
}

// fn_800F0160
void f_800F0160(Ctx* __restrict c) {
  trace_call(0x800F0160u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F0160
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F0164
  c->ctr=c->r[12]; // 800F0168
  if (true) { dispatch(c,c->ctr); return; } // 800F016C
}

// fn_800F0170
void f_800F0170(Ctx* __restrict c) {
  trace_call(0x800F0170u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0170
  c->r[0]=c->lr; // 800F0174
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0178
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F017C
  c->r[29]=c->r[3]|c->r[3]; // 800F0180
  c->r[30]=c->r[4]|c->r[4]; // 800F0184
  c->r[31]=c->r[5]|c->r[5]; // 800F0188
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F018C
  cmps(c,0,(int32_t)c->r[0],7); // 800F0190
  if (!crb(c,0)) { goto L_800F01A4; } // 800F0194
  c->r[4]=c->r[31]|c->r[31]; // 800F0198
  c->r[3]=c->r[3]+0x00000030u; // 800F019C
  c->lr=0x800F01A4u; f_8003A994(c); // 800F01A0
L_800F01A4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F01A4
  c->r[3]=c->r[29]|c->r[29]; // 800F01A8
  c->r[4]=c->r[30]|c->r[30]; // 800F01AC
  c->r[5]=c->r[31]|c->r[31]; // 800F01B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F01B4
  c->ctr=c->r[12]; // 800F01B8
  if (true) { c->lr=0x800F01C0u; dispatch(c,c->ctr); } // 800F01BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F01C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F01C4
  c->lr=c->r[0]; // 800F01C8
  c->r[1]=c->r[1]+0x00000020u; // 800F01CC
  return; // 800F01D0
}

// fn_800F01D4
void f_800F01D4(Ctx* __restrict c) {
  trace_call(0x800F01D4u);
  c->r[3]=0u+0x80410000u; // 800F01D4
  c->r[3]=c->r[3]+0xFFFFE7EDu; // 800F01D8
  return; // 800F01DC
}

// fn_800F01E0
void f_800F01E0(Ctx* __restrict c) {
  trace_call(0x800F01E0u);
  c->r[3]=0u+0x00000040u; // 800F01E0
  return; // 800F01E4
}

// fn_800F01E8
void f_800F01E8(Ctx* __restrict c) {
  trace_call(0x800F01E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F01E8
  c->r[0]=c->lr; // 800F01EC
  c->r[3]=0u+0x00000040u; // 800F01F0
  c->r[4]=c->r[13]+0xFFFFBA01u; // 800F01F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F01F8
  c->r[5]=0u+0x00000000u; // 800F01FC
  c->r[6]=0u+0x00001001u; // 800F0200
  c->lr=0x800F0208u; f_80244D20(c); // 800F0204
  cmps(c,0,(int32_t)c->r[3],0); // 800F0208
  if (crb(c,2)) { goto L_800F0214; } // 800F020C
  c->lr=0x800F0214u; f_800F0068(c); // 800F0210
L_800F0214:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0214
  c->lr=c->r[0]; // 800F0218
  c->r[1]=c->r[1]+0x00000010u; // 800F021C
  return; // 800F0220
}

// fn_800F0224
void f_800F0224(Ctx* __restrict c) {
  trace_call(0x800F0224u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0224
  c->r[0]=c->lr; // 800F0228
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F022C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0230
  c->r[31]=c->r[3]|c->r[3]; // 800F0234
  c->lr=0x800F023Cu; f_800D7120(c); // 800F0238
  c->r[5]=0u+0x80410000u; // 800F023C
  c->r[3]=0u+0x59710000u; // 800F0240
  c->r[0]=c->r[3]+0x000047B2u; // 800F0244
  c->r[4]=0u+0x00000000u; // 800F0248
  c->r[5]=c->r[5]+0x00004E44u; // 800F024C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F0250
  c->r[3]=c->r[31]|c->r[31]; // 800F0254
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F0258
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F025C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0260
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0264
  c->lr=c->r[0]; // 800F0268
  c->r[1]=c->r[1]+0x00000010u; // 800F026C
  return; // 800F0270
}

// fn_800F0274
void f_800F0274(Ctx* __restrict c) {
  trace_call(0x800F0274u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0274
  c->r[0]=c->lr; // 800F0278
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F027C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0280
  c->r[30]=c->r[3]|c->r[3]; // 800F0284
  c->r[31]=c->r[4]|c->r[4]; // 800F0288
  c->lr=0x800F0290u; f_8030D728(c); // 800F028C
  c->r[3]=c->r[31]|c->r[31]; // 800F0290
  c->r[4]=0u+0x00000000u; // 800F0294
  c->lr=0x800F029Cu; f_8030BE30(c); // 800F0298
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F029C
  c->r[3]=c->r[31]|c->r[31]; // 800F02A0
  c->lr=0x800F02A8u; f_8030BD1C(c); // 800F02A4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F02A8
  c->r[3]=c->r[31]|c->r[31]; // 800F02AC
  c->lr=0x800F02B4u; f_8030BD1C(c); // 800F02B0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F02B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F02B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F02BC
  c->lr=c->r[0]; // 800F02C0
  c->r[1]=c->r[1]+0x00000010u; // 800F02C4
  return; // 800F02C8
}

// fn_800F02CC
void f_800F02CC(Ctx* __restrict c) {
  trace_call(0x800F02CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F02CC
  c->r[0]=c->lr; // 800F02D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F02D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F02D8
  c->r[30]=c->r[3]|c->r[3]; // 800F02DC
  c->r[31]=c->r[4]|c->r[4]; // 800F02E0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F02E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F02E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F02EC
  c->r[3]=c->r[4]+0x00000030u; // 800F02F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F02F4
  c->r[4]=c->r[30]+0x00000030u; // 800F02F8
  c->lr=0x800F0300u; f_8003AB48(c); // 800F02FC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F0300
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F0304
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0308
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F030C
  c->lr=c->r[0]; // 800F0310
  c->r[1]=c->r[1]+0x00000010u; // 800F0314
  return; // 800F0318
}

// fn_800F031C
void f_800F031C(Ctx* __restrict c) {
  trace_call(0x800F031Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F031C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F0320
  c->ctr=c->r[12]; // 800F0324
  if (true) { dispatch(c,c->ctr); return; } // 800F0328
}

// fn_800F032C
void f_800F032C(Ctx* __restrict c) {
  trace_call(0x800F032Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F032C
  c->r[0]=c->lr; // 800F0330
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0334
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0338
  c->r[29]=c->r[3]|c->r[3]; // 800F033C
  c->r[30]=c->r[4]|c->r[4]; // 800F0340
  c->r[31]=c->r[5]|c->r[5]; // 800F0344
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F0348
  cmps(c,0,(int32_t)c->r[0],7); // 800F034C
  if (!crb(c,0)) { goto L_800F0360; } // 800F0350
  c->r[4]=c->r[31]|c->r[31]; // 800F0354
  c->r[3]=c->r[3]+0x00000030u; // 800F0358
  c->lr=0x800F0360u; f_8003A994(c); // 800F035C
L_800F0360:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F0360
  c->r[3]=c->r[29]|c->r[29]; // 800F0364
  c->r[4]=c->r[30]|c->r[30]; // 800F0368
  c->r[5]=c->r[31]|c->r[31]; // 800F036C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F0370
  c->ctr=c->r[12]; // 800F0374
  if (true) { c->lr=0x800F037Cu; dispatch(c,c->ctr); } // 800F0378
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F037C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0380
  c->lr=c->r[0]; // 800F0384
  c->r[1]=c->r[1]+0x00000020u; // 800F0388
  return; // 800F038C
}

// fn_800F0390
void f_800F0390(Ctx* __restrict c) {
  trace_call(0x800F0390u);
  c->r[3]=0u+0x80410000u; // 800F0390
  c->r[3]=c->r[3]+0xFFFFE800u; // 800F0394
  return; // 800F0398
}

// fn_800F039C
void f_800F039C(Ctx* __restrict c) {
  trace_call(0x800F039Cu);
  c->r[3]=0u+0x00000040u; // 800F039C
  return; // 800F03A0
}

// fn_800F03A4
void f_800F03A4(Ctx* __restrict c) {
  trace_call(0x800F03A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F03A4
  c->r[0]=c->lr; // 800F03A8
  c->r[3]=0u+0x00000040u; // 800F03AC
  c->r[4]=c->r[13]+0xFFFFBA06u; // 800F03B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F03B4
  c->r[5]=0u+0x00000000u; // 800F03B8
  c->r[6]=0u+0x00001001u; // 800F03BC
  c->lr=0x800F03C4u; f_80244D20(c); // 800F03C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F03C4
  if (crb(c,2)) { goto L_800F03D0; } // 800F03C8
  c->lr=0x800F03D0u; f_800F0224(c); // 800F03CC
L_800F03D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F03D0
  c->lr=c->r[0]; // 800F03D4
  c->r[1]=c->r[1]+0x00000010u; // 800F03D8
  return; // 800F03DC
}

// fn_800F03E0
void f_800F03E0(Ctx* __restrict c) {
  trace_call(0x800F03E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F03E0
  c->r[0]=c->lr; // 800F03E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F03E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F03EC
  c->r[31]=c->r[3]|c->r[3]; // 800F03F0
  c->lr=0x800F03F8u; f_800D7120(c); // 800F03F4
  c->r[5]=0u+0x80410000u; // 800F03F8
  c->r[3]=0u+0x3C050000u; // 800F03FC
  c->r[4]=0u+0x00000000u; // 800F0400
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800F0404
  c->r[0]=c->r[3]+0xFFFFA027u; // 800F0408
  c->r[5]=c->r[5]+0x00004E10u; // 800F040C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F0410
  c->r[3]=c->r[31]|c->r[31]; // 800F0414
  W32(c->r[31]+0x00000048u,c->r[4]); // 800F0418
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F041C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0420
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0424
  c->lr=c->r[0]; // 800F0428
  c->r[1]=c->r[1]+0x00000010u; // 800F042C
  return; // 800F0430
}

// fn_800F0434
void f_800F0434(Ctx* __restrict c) {
  trace_call(0x800F0434u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0434
  c->r[0]=c->lr; // 800F0438
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F043C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0440
  c->r[30]=c->r[3]|c->r[3]; // 800F0444
  c->r[31]=c->r[4]|c->r[4]; // 800F0448
  c->lr=0x800F0450u; f_8030D728(c); // 800F044C
  c->r[3]=c->r[31]|c->r[31]; // 800F0450
  c->lr=0x800F0458u; f_8030BD1C(c); // 800F0454
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F0458
  c->r[3]=c->r[31]|c->r[31]; // 800F045C
  c->r[4]=0u+0x00000000u; // 800F0460
  c->lr=0x800F0468u; f_8030BE30(c); // 800F0464
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F0468
  c->r[3]=c->r[31]|c->r[31]; // 800F046C
  c->lr=0x800F0474u; f_8030BD1C(c); // 800F0470
  W32(c->r[30]+0x00000038u,c->r[3]); // 800F0474
  c->r[3]=c->r[31]|c->r[31]; // 800F0478
  c->r[4]=0u+0x00000000u; // 800F047C
  c->lr=0x800F0484u; f_8030BE30(c); // 800F0480
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F0484
  c->r[3]=c->r[31]|c->r[31]; // 800F0488
  c->lr=0x800F0490u; f_8030BD1C(c); // 800F048C
  W32(c->r[30]+0x00000044u,c->r[3]); // 800F0490
  c->r[3]=c->r[31]|c->r[31]; // 800F0494
  c->lr=0x800F049Cu; f_8030BD1C(c); // 800F0498
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800F049C
  c->r[3]=c->r[31]|c->r[31]; // 800F04A0
  c->lr=0x800F04A8u; f_8030BD1C(c); // 800F04A4
  W32(c->r[30]+0x00000050u,c->r[3]); // 800F04A8
  c->r[3]=c->r[31]|c->r[31]; // 800F04AC
  c->lr=0x800F04B4u; f_8030BD1C(c); // 800F04B0
  W8(c->r[30]+0x00000054u,c->r[3]); // 800F04B4
  c->r[3]=c->r[31]|c->r[31]; // 800F04B8
  c->lr=0x800F04C0u; f_8030BD1C(c); // 800F04BC
  W8(c->r[30]+0x00000055u,c->r[3]); // 800F04C0
  c->r[3]=c->r[31]|c->r[31]; // 800F04C4
  c->lr=0x800F04CCu; f_8030BD1C(c); // 800F04C8
  W8(c->r[30]+0x00000056u,c->r[3]); // 800F04CC
  c->r[3]=c->r[31]|c->r[31]; // 800F04D0
  c->lr=0x800F04D8u; f_8030BD1C(c); // 800F04D4
  W8(c->r[30]+0x00000057u,c->r[3]); // 800F04D8
  c->r[3]=c->r[31]|c->r[31]; // 800F04DC
  c->lr=0x800F04E4u; f_8030BD1C(c); // 800F04E0
  W32(c->r[30]+0x00000058u,c->r[3]); // 800F04E4
  c->r[3]=c->r[31]|c->r[31]; // 800F04E8
  c->lr=0x800F04F0u; f_8030C0A0(c); // 800F04EC
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 800F04F0
  c->r[3]=c->r[31]|c->r[31]; // 800F04F4
  c->lr=0x800F04FCu; f_8030BD1C(c); // 800F04F8
  W32(c->r[30]+0x00000060u,c->r[3]); // 800F04FC
  c->r[3]=c->r[31]|c->r[31]; // 800F0500
  c->lr=0x800F0508u; f_8030BD1C(c); // 800F0504
  W32(c->r[30]+0x00000064u,c->r[3]); // 800F0508
  c->r[3]=c->r[31]|c->r[31]; // 800F050C
  c->lr=0x800F0514u; f_8030C0A0(c); // 800F0510
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 800F0514
  c->r[3]=c->r[31]|c->r[31]; // 800F0518
  c->lr=0x800F0520u; f_8030BD1C(c); // 800F051C
  W32(c->r[30]+0x0000006Cu,c->r[3]); // 800F0520
  c->r[3]=c->r[31]|c->r[31]; // 800F0524
  c->lr=0x800F052Cu; f_8030BD1C(c); // 800F0528
  W8(c->r[30]+0x00000070u,c->r[3]); // 800F052C
  c->r[3]=c->r[31]|c->r[31]; // 800F0530
  c->lr=0x800F0538u; f_8030BD1C(c); // 800F0534
  W32(c->r[30]+0x00000074u,c->r[3]); // 800F0538
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F053C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0540
  c->lr=c->r[0]; // 800F0544
  c->r[1]=c->r[1]+0x00000010u; // 800F0548
  return; // 800F054C
}

// fn_800F0550
void f_800F0550(Ctx* __restrict c) {
  trace_call(0x800F0550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0550
  c->r[0]=c->lr; // 800F0554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F055C
  c->r[31]=c->r[4]|c->r[4]; // 800F0560
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0564
  c->r[30]=c->r[3]|c->r[3]; // 800F0568
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F056C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F0570
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F0574
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F0578
  c->r[0]=R32(c->r[3]+0x00000030u); // 800F057C
  c->r[3]=c->r[4]+0x00000034u; // 800F0580
  W32(c->r[4]+0x00000030u,c->r[0]); // 800F0584
  c->r[4]=c->r[30]+0x00000034u; // 800F0588
  c->lr=0x800F0590u; f_8003AB48(c); // 800F058C
  c->r[3]=c->r[31]+0x00000040u; // 800F0590
  c->r[4]=c->r[30]+0x00000040u; // 800F0594
  c->lr=0x800F059Cu; f_8003AB48(c); // 800F0598
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800F059C
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800F05A0
  c->r[0]=R32(c->r[30]+0x00000050u); // 800F05A4
  W32(c->r[31]+0x00000050u,c->r[0]); // 800F05A8
  c->r[0]=R8(c->r[30]+0x00000054u); // 800F05AC
  W8(c->r[31]+0x00000054u,c->r[0]); // 800F05B0
  c->r[0]=R8(c->r[30]+0x00000055u); // 800F05B4
  W8(c->r[31]+0x00000055u,c->r[0]); // 800F05B8
  c->r[0]=R8(c->r[30]+0x00000056u); // 800F05BC
  W8(c->r[31]+0x00000056u,c->r[0]); // 800F05C0
  c->r[0]=R8(c->r[30]+0x00000057u); // 800F05C4
  W8(c->r[31]+0x00000057u,c->r[0]); // 800F05C8
  c->r[0]=R32(c->r[30]+0x00000058u); // 800F05CC
  W32(c->r[31]+0x00000058u,c->r[0]); // 800F05D0
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F05D4
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800F05D8
  c->r[0]=R32(c->r[30]+0x00000060u); // 800F05DC
  W32(c->r[31]+0x00000060u,c->r[0]); // 800F05E0
  c->r[0]=R32(c->r[30]+0x00000064u); // 800F05E4
  W32(c->r[31]+0x00000064u,c->r[0]); // 800F05E8
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F05EC
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800F05F0
  c->r[0]=R32(c->r[30]+0x0000006Cu); // 800F05F4
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800F05F8
  c->r[0]=R8(c->r[30]+0x00000070u); // 800F05FC
  W8(c->r[31]+0x00000070u,c->r[0]); // 800F0600
  c->r[0]=R32(c->r[30]+0x00000074u); // 800F0604
  W32(c->r[31]+0x00000074u,c->r[0]); // 800F0608
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F060C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F0610
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0614
  c->lr=c->r[0]; // 800F0618
  c->r[1]=c->r[1]+0x00000010u; // 800F061C
  return; // 800F0620
}

// fn_800F0624
void f_800F0624(Ctx* __restrict c) {
  trace_call(0x800F0624u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F0624
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F0628
  c->ctr=c->r[12]; // 800F062C
  if (true) { dispatch(c,c->ctr); return; } // 800F0630
}

// fn_800F0634
void f_800F0634(Ctx* __restrict c) {
  trace_call(0x800F0634u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0634
  c->r[0]=c->lr; // 800F0638
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F063C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0640
  c->r[29]=c->r[3]|c->r[3]; // 800F0644
  c->r[30]=c->r[4]|c->r[4]; // 800F0648
  c->r[31]=c->r[5]|c->r[5]; // 800F064C
  c->r[0]=R32(c->r[3]+0x00000038u); // 800F0650
  cmps(c,0,(int32_t)c->r[0],7); // 800F0654
  if (!crb(c,0)) { goto L_800F0668; } // 800F0658
  c->r[4]=c->r[31]|c->r[31]; // 800F065C
  c->r[3]=c->r[3]+0x00000034u; // 800F0660
  c->lr=0x800F0668u; f_8003A994(c); // 800F0664
L_800F0668:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 800F0668
  cmps(c,0,(int32_t)c->r[0],7); // 800F066C
  if (!crb(c,0)) { goto L_800F0680; } // 800F0670
  c->r[4]=c->r[31]|c->r[31]; // 800F0674
  c->r[3]=c->r[29]+0x00000040u; // 800F0678
  c->lr=0x800F0680u; f_8003A994(c); // 800F067C
L_800F0680:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F0680
  c->r[3]=c->r[29]|c->r[29]; // 800F0684
  c->r[4]=c->r[30]|c->r[30]; // 800F0688
  c->r[5]=c->r[31]|c->r[31]; // 800F068C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F0690
  c->ctr=c->r[12]; // 800F0694
  if (true) { c->lr=0x800F069Cu; dispatch(c,c->ctr); } // 800F0698
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F069C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F06A0
  c->lr=c->r[0]; // 800F06A4
  c->r[1]=c->r[1]+0x00000020u; // 800F06A8
  return; // 800F06AC
}

// fn_800F06B0
void f_800F06B0(Ctx* __restrict c) {
  trace_call(0x800F06B0u);
  c->r[3]=0u+0x80410000u; // 800F06B0
  c->r[3]=c->r[3]+0xFFFFE811u; // 800F06B4
  return; // 800F06B8
}

// fn_800F06BC
void f_800F06BC(Ctx* __restrict c) {
  trace_call(0x800F06BCu);
  c->r[3]=0u+0x00000078u; // 800F06BC
  return; // 800F06C0
}

// fn_800F06C4
void f_800F06C4(Ctx* __restrict c) {
  trace_call(0x800F06C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F06C4
  c->r[0]=c->lr; // 800F06C8
  c->r[3]=0u+0x00000078u; // 800F06CC
  c->r[4]=c->r[13]+0xFFFFBA0Bu; // 800F06D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F06D4
  c->r[5]=0u+0x00000000u; // 800F06D8
  c->r[6]=0u+0x00001001u; // 800F06DC
  c->lr=0x800F06E4u; f_80244D20(c); // 800F06E0
  cmps(c,0,(int32_t)c->r[3],0); // 800F06E4
  if (crb(c,2)) { goto L_800F06F0; } // 800F06E8
  c->lr=0x800F06F0u; f_800F03E0(c); // 800F06EC
L_800F06F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F06F0
  c->lr=c->r[0]; // 800F06F4
  c->r[1]=c->r[1]+0x00000010u; // 800F06F8
  return; // 800F06FC
}

// fn_800F0700
void f_800F0700(Ctx* __restrict c) {
  trace_call(0x800F0700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0700
  c->r[0]=c->lr; // 800F0704
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F070C
  c->r[31]=c->r[3]|c->r[3]; // 800F0710
  c->lr=0x800F0718u; f_800D7120(c); // 800F0714
  c->r[3]=0u+0x80410000u; // 800F0718
  c->r[0]=0u+0x00000000u; // 800F071C
  c->r[3]=c->r[3]+0x00004DDCu; // 800F0720
  W32(c->r[31]+0x00000008u,c->r[3]); // 800F0724
  c->r[3]=c->r[31]|c->r[31]; // 800F0728
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F072C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0730
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0734
  c->lr=c->r[0]; // 800F0738
  c->r[1]=c->r[1]+0x00000010u; // 800F073C
  return; // 800F0740
}

// fn_800F0744
void f_800F0744(Ctx* __restrict c) {
  trace_call(0x800F0744u);
  f_8030D728(c); return; // 800F0744
}

// fn_800F0748
void f_800F0748(Ctx* __restrict c) {
  trace_call(0x800F0748u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800F0748
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F074C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800F0750
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F0754
  return; // 800F0758
}

// fn_800F075C
void f_800F075C(Ctx* __restrict c) {
  trace_call(0x800F075Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F075C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F0760
  c->ctr=c->r[12]; // 800F0764
  if (true) { dispatch(c,c->ctr); return; } // 800F0768
}

// fn_800F076C
void f_800F076C(Ctx* __restrict c) {
  trace_call(0x800F076Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F076C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F0770
  c->ctr=c->r[12]; // 800F0774
  if (true) { dispatch(c,c->ctr); return; } // 800F0778
}

// fn_800F077C
void f_800F077C(Ctx* __restrict c) {
  trace_call(0x800F077Cu);
  c->r[3]=c->r[13]+0xFFFFBA10u; // 800F077C
  return; // 800F0780
}

// fn_800F0784
void f_800F0784(Ctx* __restrict c) {
  trace_call(0x800F0784u);
  c->r[3]=0u+0x00000030u; // 800F0784
  return; // 800F0788
}

// fn_800F078C
void f_800F078C(Ctx* __restrict c) {
  trace_call(0x800F078Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F078C
  c->r[0]=c->lr; // 800F0790
  c->r[3]=0u+0x00000030u; // 800F0794
  c->r[4]=c->r[13]+0xFFFFBA17u; // 800F0798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F079C
  c->r[5]=0u+0x00000000u; // 800F07A0
  c->r[6]=0u+0x00001001u; // 800F07A4
  c->lr=0x800F07ACu; f_80244D20(c); // 800F07A8
  cmps(c,0,(int32_t)c->r[3],0); // 800F07AC
  if (crb(c,2)) { goto L_800F07B8; } // 800F07B0
  c->lr=0x800F07B8u; f_800F0700(c); // 800F07B4
L_800F07B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F07B8
  c->lr=c->r[0]; // 800F07BC
  c->r[1]=c->r[1]+0x00000010u; // 800F07C0
  return; // 800F07C4
}

// fn_800F07C8
void f_800F07C8(Ctx* __restrict c) {
  trace_call(0x800F07C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F07C8
  c->r[0]=c->lr; // 800F07CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F07D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F07D4
  c->r[31]=c->r[3]|c->r[3]; // 800F07D8
  c->lr=0x800F07E0u; f_800D7120(c); // 800F07DC
  c->r[5]=0u+0x80410000u; // 800F07E0
  c->r[3]=0u+0xBC190000u; // 800F07E4
  c->r[4]=0u+0x00000000u; // 800F07E8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F07EC
  c->r[0]=c->r[3]+0x000021D3u; // 800F07F0
  c->r[5]=c->r[5]+0x00004DA8u; // 800F07F4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F07F8
  c->r[3]=c->r[31]|c->r[31]; // 800F07FC
  W32(c->r[31]+0x00000044u,c->r[4]); // 800F0800
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F0804
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0808
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F080C
  c->lr=c->r[0]; // 800F0810
  c->r[1]=c->r[1]+0x00000010u; // 800F0814
  return; // 800F0818
}

// fn_800F081C
void f_800F081C(Ctx* __restrict c) {
  trace_call(0x800F081Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F081C
  c->r[0]=c->lr; // 800F0820
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0824
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0828
  c->r[30]=c->r[3]|c->r[3]; // 800F082C
  c->r[31]=c->r[4]|c->r[4]; // 800F0830
  c->lr=0x800F0838u; f_8030D728(c); // 800F0834
  c->r[3]=c->r[31]|c->r[31]; // 800F0838
  c->r[4]=0u+0x00000000u; // 800F083C
  c->lr=0x800F0844u; f_8030BE30(c); // 800F0840
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F0844
  c->r[3]=c->r[31]|c->r[31]; // 800F0848
  c->lr=0x800F0850u; f_8030BD1C(c); // 800F084C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F0850
  c->r[3]=c->r[31]|c->r[31]; // 800F0854
  c->r[4]=0u+0x00000000u; // 800F0858
  c->lr=0x800F0860u; f_8030BE30(c); // 800F085C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F0860
  c->r[3]=c->r[31]|c->r[31]; // 800F0864
  c->lr=0x800F086Cu; f_8030BD1C(c); // 800F0868
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F086C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0870
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0874
  c->lr=c->r[0]; // 800F0878
  c->r[1]=c->r[1]+0x00000010u; // 800F087C
  return; // 800F0880
}

// fn_800F0884
void f_800F0884(Ctx* __restrict c) {
  trace_call(0x800F0884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0884
  c->r[0]=c->lr; // 800F0888
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F088C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0890
  c->r[30]=c->r[3]|c->r[3]; // 800F0894
  c->r[31]=c->r[4]|c->r[4]; // 800F0898
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F089C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F08A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F08A4
  c->r[3]=c->r[4]+0x00000030u; // 800F08A8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F08AC
  c->r[4]=c->r[30]+0x00000030u; // 800F08B0
  c->lr=0x800F08B8u; f_8003AB48(c); // 800F08B4
  c->r[3]=c->r[31]+0x0000003Cu; // 800F08B8
  c->r[4]=c->r[30]+0x0000003Cu; // 800F08BC
  c->lr=0x800F08C4u; f_8003AB48(c); // 800F08C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F08C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F08C8
  c->lr=c->r[0]; // 800F08CC
  c->r[1]=c->r[1]+0x00000010u; // 800F08D0
  return; // 800F08D4
}

// fn_800F08D8
void f_800F08D8(Ctx* __restrict c) {
  trace_call(0x800F08D8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F08D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F08DC
  c->ctr=c->r[12]; // 800F08E0
  if (true) { dispatch(c,c->ctr); return; } // 800F08E4
}

// fn_800F08E8
void f_800F08E8(Ctx* __restrict c) {
  trace_call(0x800F08E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F08E8
  c->r[0]=c->lr; // 800F08EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F08F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F08F4
  c->r[29]=c->r[3]|c->r[3]; // 800F08F8
  c->r[30]=c->r[4]|c->r[4]; // 800F08FC
  c->r[31]=c->r[5]|c->r[5]; // 800F0900
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F0904
  cmps(c,0,(int32_t)c->r[0],7); // 800F0908
  if (!crb(c,0)) { goto L_800F091C; } // 800F090C
  c->r[4]=c->r[31]|c->r[31]; // 800F0910
  c->r[3]=c->r[3]+0x00000030u; // 800F0914
  c->lr=0x800F091Cu; f_8003A994(c); // 800F0918
L_800F091C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800F091C
  cmps(c,0,(int32_t)c->r[0],7); // 800F0920
  if (!crb(c,0)) { goto L_800F0934; } // 800F0924
  c->r[4]=c->r[31]|c->r[31]; // 800F0928
  c->r[3]=c->r[29]+0x0000003Cu; // 800F092C
  c->lr=0x800F0934u; f_8003A994(c); // 800F0930
L_800F0934:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F0934
  c->r[3]=c->r[29]|c->r[29]; // 800F0938
  c->r[4]=c->r[30]|c->r[30]; // 800F093C
  c->r[5]=c->r[31]|c->r[31]; // 800F0940
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F0944
  c->ctr=c->r[12]; // 800F0948
  if (true) { c->lr=0x800F0950u; dispatch(c,c->ctr); } // 800F094C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0950
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0954
  c->lr=c->r[0]; // 800F0958
  c->r[1]=c->r[1]+0x00000020u; // 800F095C
  return; // 800F0960
}

// fn_800F0964
void f_800F0964(Ctx* __restrict c) {
  trace_call(0x800F0964u);
  c->r[3]=0u+0x80410000u; // 800F0964
  c->r[3]=c->r[3]+0xFFFFE82Bu; // 800F0968
  return; // 800F096C
}

// fn_800F0970
void f_800F0970(Ctx* __restrict c) {
  trace_call(0x800F0970u);
  c->r[3]=0u+0x00000048u; // 800F0970
  return; // 800F0974
}

// fn_800F0978
void f_800F0978(Ctx* __restrict c) {
  trace_call(0x800F0978u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0978
  c->r[0]=c->lr; // 800F097C
  c->r[3]=0u+0x00000048u; // 800F0980
  c->r[4]=c->r[13]+0xFFFFBA1Cu; // 800F0984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0988
  c->r[5]=0u+0x00000000u; // 800F098C
  c->r[6]=0u+0x00001001u; // 800F0990
  c->lr=0x800F0998u; f_80244D20(c); // 800F0994
  cmps(c,0,(int32_t)c->r[3],0); // 800F0998
  if (crb(c,2)) { goto L_800F09A4; } // 800F099C
  c->lr=0x800F09A4u; f_800F07C8(c); // 800F09A0
L_800F09A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F09A4
  c->lr=c->r[0]; // 800F09A8
  c->r[1]=c->r[1]+0x00000010u; // 800F09AC
  return; // 800F09B0
}

// fn_800F09B4
void f_800F09B4(Ctx* __restrict c) {
  trace_call(0x800F09B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F09B4
  c->r[0]=c->lr; // 800F09B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F09BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F09C0
  c->r[31]=c->r[3]|c->r[3]; // 800F09C4
  c->lr=0x800F09CCu; f_800D7120(c); // 800F09C8
  c->r[5]=0u+0x80410000u; // 800F09CC
  c->r[3]=0u+0x28F30000u; // 800F09D0
  c->r[4]=0u+0x00000000u; // 800F09D4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F09D8
  c->r[0]=c->r[3]+0xFFFFD147u; // 800F09DC
  c->r[5]=c->r[5]+0x00004D74u; // 800F09E0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F09E4
  c->r[3]=c->r[31]|c->r[31]; // 800F09E8
  W32(c->r[31]+0x00000044u,c->r[4]); // 800F09EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F09F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F09F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F09F8
  c->lr=c->r[0]; // 800F09FC
  c->r[1]=c->r[1]+0x00000010u; // 800F0A00
  return; // 800F0A04
}

// fn_800F0A08
void f_800F0A08(Ctx* __restrict c) {
  trace_call(0x800F0A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0A08
  c->r[0]=c->lr; // 800F0A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0A10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0A14
  c->r[30]=c->r[3]|c->r[3]; // 800F0A18
  c->r[31]=c->r[4]|c->r[4]; // 800F0A1C
  c->lr=0x800F0A24u; f_8030D728(c); // 800F0A20
  c->r[3]=c->r[31]|c->r[31]; // 800F0A24
  c->r[4]=0u+0x00000000u; // 800F0A28
  c->lr=0x800F0A30u; f_8030BE30(c); // 800F0A2C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F0A30
  c->r[3]=c->r[31]|c->r[31]; // 800F0A34
  c->lr=0x800F0A3Cu; f_8030BD1C(c); // 800F0A38
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F0A3C
  c->r[3]=c->r[31]|c->r[31]; // 800F0A40
  c->r[4]=0u+0x00000000u; // 800F0A44
  c->lr=0x800F0A4Cu; f_8030BE30(c); // 800F0A48
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F0A4C
  c->r[3]=c->r[31]|c->r[31]; // 800F0A50
  c->lr=0x800F0A58u; f_8030BD1C(c); // 800F0A54
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F0A58
  c->r[3]=c->r[31]|c->r[31]; // 800F0A5C
  c->lr=0x800F0A64u; f_8030C0A0(c); // 800F0A60
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800F0A64
  c->r[3]=c->r[31]|c->r[31]; // 800F0A68
  c->lr=0x800F0A70u; f_8030C0A0(c); // 800F0A6C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800F0A70
  c->r[3]=c->r[31]|c->r[31]; // 800F0A74
  c->lr=0x800F0A7Cu; f_8030C0A0(c); // 800F0A78
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800F0A7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0A80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0A84
  c->lr=c->r[0]; // 800F0A88
  c->r[1]=c->r[1]+0x00000010u; // 800F0A8C
  return; // 800F0A90
}

// fn_800F0A94
void f_800F0A94(Ctx* __restrict c) {
  trace_call(0x800F0A94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0A94
  c->r[0]=c->lr; // 800F0A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0AA0
  c->r[31]=c->r[4]|c->r[4]; // 800F0AA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0AA8
  c->r[30]=c->r[3]|c->r[3]; // 800F0AAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F0AB0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F0AB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F0AB8
  c->r[3]=c->r[4]+0x00000030u; // 800F0ABC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F0AC0
  c->r[4]=c->r[30]+0x00000030u; // 800F0AC4
  c->lr=0x800F0ACCu; f_8003AB48(c); // 800F0AC8
  c->r[3]=c->r[31]+0x0000003Cu; // 800F0ACC
  c->r[4]=c->r[30]+0x0000003Cu; // 800F0AD0
  c->lr=0x800F0AD8u; f_8003AB48(c); // 800F0AD4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0AD8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800F0ADC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0AE0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800F0AE4
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0AE8
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800F0AEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0AF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F0AF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0AF8
  c->lr=c->r[0]; // 800F0AFC
  c->r[1]=c->r[1]+0x00000010u; // 800F0B00
  return; // 800F0B04
}

// fn_800F0B08
void f_800F0B08(Ctx* __restrict c) {
  trace_call(0x800F0B08u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F0B08
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F0B0C
  c->ctr=c->r[12]; // 800F0B10
  if (true) { dispatch(c,c->ctr); return; } // 800F0B14
}

// fn_800F0B18
void f_800F0B18(Ctx* __restrict c) {
  trace_call(0x800F0B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0B18
  c->r[0]=c->lr; // 800F0B1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0B20
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0B24
  c->r[29]=c->r[3]|c->r[3]; // 800F0B28
  c->r[30]=c->r[4]|c->r[4]; // 800F0B2C
  c->r[31]=c->r[5]|c->r[5]; // 800F0B30
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F0B34
  cmps(c,0,(int32_t)c->r[0],7); // 800F0B38
  if (!crb(c,0)) { goto L_800F0B4C; } // 800F0B3C
  c->r[4]=c->r[31]|c->r[31]; // 800F0B40
  c->r[3]=c->r[3]+0x00000030u; // 800F0B44
  c->lr=0x800F0B4Cu; f_8003A994(c); // 800F0B48
L_800F0B4C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800F0B4C
  cmps(c,0,(int32_t)c->r[0],7); // 800F0B50
  if (!crb(c,0)) { goto L_800F0B64; } // 800F0B54
  c->r[4]=c->r[31]|c->r[31]; // 800F0B58
  c->r[3]=c->r[29]+0x0000003Cu; // 800F0B5C
  c->lr=0x800F0B64u; f_8003A994(c); // 800F0B60
L_800F0B64:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F0B64
  c->r[3]=c->r[29]|c->r[29]; // 800F0B68
  c->r[4]=c->r[30]|c->r[30]; // 800F0B6C
  c->r[5]=c->r[31]|c->r[31]; // 800F0B70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F0B74
  c->ctr=c->r[12]; // 800F0B78
  if (true) { c->lr=0x800F0B80u; dispatch(c,c->ctr); } // 800F0B7C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0B80
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0B84
  c->lr=c->r[0]; // 800F0B88
  c->r[1]=c->r[1]+0x00000020u; // 800F0B8C
  return; // 800F0B90
}

// fn_800F0B94
void f_800F0B94(Ctx* __restrict c) {
  trace_call(0x800F0B94u);
  c->r[3]=0u+0x80410000u; // 800F0B94
  c->r[3]=c->r[3]+0xFFFFE83Du; // 800F0B98
  return; // 800F0B9C
}

// fn_800F0BA0
void f_800F0BA0(Ctx* __restrict c) {
  trace_call(0x800F0BA0u);
  c->r[3]=0u+0x00000054u; // 800F0BA0
  return; // 800F0BA4
}

// fn_800F0BA8
void f_800F0BA8(Ctx* __restrict c) {
  trace_call(0x800F0BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0BA8
  c->r[0]=c->lr; // 800F0BAC
  c->r[3]=0u+0x00000054u; // 800F0BB0
  c->r[4]=c->r[13]+0xFFFFBA21u; // 800F0BB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0BB8
  c->r[5]=0u+0x00000000u; // 800F0BBC
  c->r[6]=0u+0x00001001u; // 800F0BC0
  c->lr=0x800F0BC8u; f_80244D20(c); // 800F0BC4
  cmps(c,0,(int32_t)c->r[3],0); // 800F0BC8
  if (crb(c,2)) { goto L_800F0BD4; } // 800F0BCC
  c->lr=0x800F0BD4u; f_800F09B4(c); // 800F0BD0
L_800F0BD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0BD4
  c->lr=c->r[0]; // 800F0BD8
  c->r[1]=c->r[1]+0x00000010u; // 800F0BDC
  return; // 800F0BE0
}

// fn_800F0BE4
void f_800F0BE4(Ctx* __restrict c) {
  trace_call(0x800F0BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0BE4
  c->r[0]=c->lr; // 800F0BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0BF0
  c->r[31]=c->r[3]|c->r[3]; // 800F0BF4
  c->lr=0x800F0BFCu; f_800D7120(c); // 800F0BF8
  c->r[5]=0u+0x80410000u; // 800F0BFC
  c->r[3]=0u+0x1FB10000u; // 800F0C00
  c->r[4]=0u+0x00000000u; // 800F0C04
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F0C08
  c->r[0]=c->r[3]+0xFFFF9CFEu; // 800F0C0C
  c->r[5]=c->r[5]+0x00004D40u; // 800F0C10
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F0C14
  c->r[3]=c->r[31]|c->r[31]; // 800F0C18
  W32(c->r[31]+0x00000044u,c->r[4]); // 800F0C1C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F0C20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0C24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0C28
  c->lr=c->r[0]; // 800F0C2C
  c->r[1]=c->r[1]+0x00000010u; // 800F0C30
  return; // 800F0C34
}

// fn_800F0C38
void f_800F0C38(Ctx* __restrict c) {
  trace_call(0x800F0C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0C38
  c->r[0]=c->lr; // 800F0C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0C40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0C44
  c->r[30]=c->r[3]|c->r[3]; // 800F0C48
  c->r[31]=c->r[4]|c->r[4]; // 800F0C4C
  c->lr=0x800F0C54u; f_8030D728(c); // 800F0C50
  c->r[0]=0u+0x00000000u; // 800F0C54
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800F0C58
  c->r[3]=c->r[31]|c->r[31]; // 800F0C5C
  c->r[4]=0u+0x00000000u; // 800F0C60
  c->lr=0x800F0C68u; f_8030BE30(c); // 800F0C64
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F0C68
  c->r[3]=c->r[31]|c->r[31]; // 800F0C6C
  c->lr=0x800F0C74u; f_8030BD1C(c); // 800F0C70
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F0C74
  c->r[3]=c->r[31]|c->r[31]; // 800F0C78
  c->r[4]=0u+0x00000000u; // 800F0C7C
  c->lr=0x800F0C84u; f_8030BE30(c); // 800F0C80
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F0C84
  c->r[3]=c->r[31]|c->r[31]; // 800F0C88
  c->lr=0x800F0C90u; f_8030BD1C(c); // 800F0C8C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F0C90
  c->r[3]=c->r[31]|c->r[31]; // 800F0C94
  c->lr=0x800F0C9Cu; f_8030BD1C(c); // 800F0C98
  W32(c->r[30]+0x00000048u,c->r[3]); // 800F0C9C
  c->r[3]=c->r[31]|c->r[31]; // 800F0CA0
  c->lr=0x800F0CA8u; f_8030BD1C(c); // 800F0CA4
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F0CA8
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800F0CAC
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800F0CB0
  c->r[3]=c->r[31]|c->r[31]; // 800F0CB4
  c->lr=0x800F0CBCu; f_8030BD1C(c); // 800F0CB8
  W32(c->r[30]+0x00000050u,c->r[3]); // 800F0CBC
  c->r[3]=c->r[31]|c->r[31]; // 800F0CC0
  c->lr=0x800F0CC8u; f_8030C0A0(c); // 800F0CC4
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800F0CC8
  c->r[3]=c->r[31]|c->r[31]; // 800F0CCC
  c->lr=0x800F0CD4u; f_8030C0A0(c); // 800F0CD0
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800F0CD4
  c->r[3]=c->r[31]|c->r[31]; // 800F0CD8
  c->lr=0x800F0CE0u; f_8030BD1C(c); // 800F0CDC
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F0CE0
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800F0CE4
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800F0CE8
  c->r[3]=c->r[31]|c->r[31]; // 800F0CEC
  c->lr=0x800F0CF4u; f_8030BD1C(c); // 800F0CF0
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F0CF4
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800F0CF8
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800F0CFC
  c->r[3]=c->r[31]|c->r[31]; // 800F0D00
  c->lr=0x800F0D08u; f_8030BD1C(c); // 800F0D04
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F0D08
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800F0D0C
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800F0D10
  c->r[3]=c->r[31]|c->r[31]; // 800F0D14
  c->lr=0x800F0D1Cu; f_8030BD1C(c); // 800F0D18
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F0D1C
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800F0D20
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800F0D24
  c->r[3]=c->r[31]|c->r[31]; // 800F0D28
  c->lr=0x800F0D30u; f_8030C0A0(c); // 800F0D2C
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 800F0D30
  c->r[3]=c->r[31]|c->r[31]; // 800F0D34
  c->lr=0x800F0D3Cu; f_8030C0A0(c); // 800F0D38
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 800F0D3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0D40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0D44
  c->lr=c->r[0]; // 800F0D48
  c->r[1]=c->r[1]+0x00000010u; // 800F0D4C
  return; // 800F0D50
}

// fn_800F0D54
void f_800F0D54(Ctx* __restrict c) {
  trace_call(0x800F0D54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0D54
  c->r[0]=c->lr; // 800F0D58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0D5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0D60
  c->r[31]=c->r[4]|c->r[4]; // 800F0D64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0D68
  c->r[30]=c->r[3]|c->r[3]; // 800F0D6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F0D70
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F0D74
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F0D78
  c->r[3]=c->r[4]+0x00000030u; // 800F0D7C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F0D80
  c->r[4]=c->r[30]+0x00000030u; // 800F0D84
  c->lr=0x800F0D8Cu; f_8003AB48(c); // 800F0D88
  c->r[3]=c->r[31]+0x0000003Cu; // 800F0D8C
  c->r[4]=c->r[30]+0x0000003Cu; // 800F0D90
  c->lr=0x800F0D98u; f_8003AB48(c); // 800F0D94
  c->r[0]=R32(c->r[30]+0x00000048u); // 800F0D98
  W32(c->r[31]+0x00000048u,c->r[0]); // 800F0D9C
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F0DA0
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800F0DA4
  c->r[0]=R32(c->r[30]+0x00000050u); // 800F0DA8
  W32(c->r[31]+0x00000050u,c->r[0]); // 800F0DAC
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0DB0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F0DB4
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0DB8
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800F0DBC
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0DC0
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800F0DC4
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0DC8
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800F0DCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0DD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F0DD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0DD8
  c->lr=c->r[0]; // 800F0DDC
  c->r[1]=c->r[1]+0x00000010u; // 800F0DE0
  return; // 800F0DE4
}

// fn_800F0DE8
void f_800F0DE8(Ctx* __restrict c) {
  trace_call(0x800F0DE8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F0DE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F0DEC
  c->ctr=c->r[12]; // 800F0DF0
  if (true) { dispatch(c,c->ctr); return; } // 800F0DF4
}

// fn_800F0DF8
void f_800F0DF8(Ctx* __restrict c) {
  trace_call(0x800F0DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0DF8
  c->r[0]=c->lr; // 800F0DFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0E00
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F0E04
  c->r[29]=c->r[3]|c->r[3]; // 800F0E08
  c->r[30]=c->r[4]|c->r[4]; // 800F0E0C
  c->r[31]=c->r[5]|c->r[5]; // 800F0E10
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F0E14
  cmps(c,0,(int32_t)c->r[0],7); // 800F0E18
  if (!crb(c,0)) { goto L_800F0E2C; } // 800F0E1C
  c->r[4]=c->r[31]|c->r[31]; // 800F0E20
  c->r[3]=c->r[3]+0x00000030u; // 800F0E24
  c->lr=0x800F0E2Cu; f_8003A994(c); // 800F0E28
L_800F0E2C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800F0E2C
  cmps(c,0,(int32_t)c->r[0],7); // 800F0E30
  if (!crb(c,0)) { goto L_800F0E44; } // 800F0E34
  c->r[4]=c->r[31]|c->r[31]; // 800F0E38
  c->r[3]=c->r[29]+0x0000003Cu; // 800F0E3C
  c->lr=0x800F0E44u; f_8003A994(c); // 800F0E40
L_800F0E44:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F0E44
  c->r[3]=c->r[29]|c->r[29]; // 800F0E48
  c->r[4]=c->r[30]|c->r[30]; // 800F0E4C
  c->r[5]=c->r[31]|c->r[31]; // 800F0E50
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F0E54
  c->ctr=c->r[12]; // 800F0E58
  if (true) { c->lr=0x800F0E60u; dispatch(c,c->ctr); } // 800F0E5C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F0E60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0E64
  c->lr=c->r[0]; // 800F0E68
  c->r[1]=c->r[1]+0x00000020u; // 800F0E6C
  return; // 800F0E70
}

// fn_800F0E74
void f_800F0E74(Ctx* __restrict c) {
  trace_call(0x800F0E74u);
  c->r[3]=0u+0x80410000u; // 800F0E74
  c->r[3]=c->r[3]+0xFFFFE84Au; // 800F0E78
  return; // 800F0E7C
}

// fn_800F0E80
void f_800F0E80(Ctx* __restrict c) {
  trace_call(0x800F0E80u);
  c->r[3]=0u+0x00000064u; // 800F0E80
  return; // 800F0E84
}

// fn_800F0E88
void f_800F0E88(Ctx* __restrict c) {
  trace_call(0x800F0E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E88
  c->r[0]=c->lr; // 800F0E8C
  c->r[3]=0u+0x00000064u; // 800F0E90
  c->r[4]=c->r[13]+0xFFFFBA26u; // 800F0E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0E98
  c->r[5]=0u+0x00000000u; // 800F0E9C
  c->r[6]=0u+0x00001001u; // 800F0EA0
  c->lr=0x800F0EA8u; f_80244D20(c); // 800F0EA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F0EA8
  if (crb(c,2)) { goto L_800F0EB4; } // 800F0EAC
  c->lr=0x800F0EB4u; f_800F0BE4(c); // 800F0EB0
L_800F0EB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0EB4
  c->lr=c->r[0]; // 800F0EB8
  c->r[1]=c->r[1]+0x00000010u; // 800F0EBC
  return; // 800F0EC0
}

// fn_800F0EC4
void f_800F0EC4(Ctx* __restrict c) {
  trace_call(0x800F0EC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0EC4
  c->r[0]=c->lr; // 800F0EC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0ECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0ED0
  c->r[31]=c->r[3]|c->r[3]; // 800F0ED4
  c->lr=0x800F0EDCu; f_800D7120(c); // 800F0ED8
  c->r[5]=0u+0x80410000u; // 800F0EDC
  c->r[3]=0u+0x9BD50000u; // 800F0EE0
  c->r[0]=c->r[3]+0xFFFFE59Eu; // 800F0EE4
  c->r[4]=0u+0x00000000u; // 800F0EE8
  c->r[5]=c->r[5]+0x00004D0Cu; // 800F0EEC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F0EF0
  c->r[3]=c->r[31]|c->r[31]; // 800F0EF4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F0EF8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F0EFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0F00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0F04
  c->lr=c->r[0]; // 800F0F08
  c->r[1]=c->r[1]+0x00000010u; // 800F0F0C
  return; // 800F0F10
}

// fn_800F0F14
void f_800F0F14(Ctx* __restrict c) {
  trace_call(0x800F0F14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0F14
  c->r[0]=c->lr; // 800F0F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0F1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0F20
  c->r[31]=c->r[4]|c->r[4]; // 800F0F24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0F28
  c->r[30]=c->r[3]|c->r[3]; // 800F0F2C
  c->lr=0x800F0F34u; f_8030D728(c); // 800F0F30
  c->r[3]=c->r[31]|c->r[31]; // 800F0F34
  c->r[4]=0u+0x00000000u; // 800F0F38
  c->lr=0x800F0F40u; f_8030BE30(c); // 800F0F3C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F0F40
  c->r[3]=c->r[31]|c->r[31]; // 800F0F44
  c->lr=0x800F0F4Cu; f_8030BD1C(c); // 800F0F48
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F0F4C
  c->r[3]=c->r[31]|c->r[31]; // 800F0F50
  c->lr=0x800F0F58u; f_8030C0A0(c); // 800F0F54
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F0F58
  c->r[3]=c->r[31]|c->r[31]; // 800F0F5C
  c->lr=0x800F0F64u; f_8030C0A0(c); // 800F0F60
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F0F64
  c->r[3]=c->r[31]|c->r[31]; // 800F0F68
  c->lr=0x800F0F70u; f_8030C0A0(c); // 800F0F6C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0F70
  c->r[3]=c->r[31]|c->r[31]; // 800F0F74
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F0F78
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800F0F7C
  c->lr=0x800F0F84u; f_8030BD1C(c); // 800F0F80
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800F0F84
  c->r[3]=c->r[31]|c->r[31]; // 800F0F88
  c->lr=0x800F0F90u; f_8030BD1C(c); // 800F0F8C
  W8(c->r[30]+0x0000004Du,c->r[3]); // 800F0F90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0F94
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F0F98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0F9C
  c->lr=c->r[0]; // 800F0FA0
  c->r[1]=c->r[1]+0x00000010u; // 800F0FA4
  return; // 800F0FA8
}

// fn_800F0FAC
void f_800F0FAC(Ctx* __restrict c) {
  trace_call(0x800F0FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0FAC
  c->r[0]=c->lr; // 800F0FB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0FB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0FB8
  c->r[31]=c->r[4]|c->r[4]; // 800F0FBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0FC0
  c->r[30]=c->r[3]|c->r[3]; // 800F0FC4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F0FC8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F0FCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F0FD0
  c->r[3]=c->r[4]+0x00000030u; // 800F0FD4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F0FD8
  c->r[4]=c->r[30]+0x00000030u; // 800F0FDC
  c->lr=0x800F0FE4u; f_8003AB48(c); // 800F0FE0
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0FE4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F0FE8
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0FEC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F0FF0
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F0FF4
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F0FF8
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800F0FFC
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800F1000
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800F1004
  W8(c->r[31]+0x0000004Du,c->r[0]); // 800F1008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F100C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1010
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1014
  c->lr=c->r[0]; // 800F1018
  c->r[1]=c->r[1]+0x00000010u; // 800F101C
  return; // 800F1020
}

// fn_800F1024
void f_800F1024(Ctx* __restrict c) {
  trace_call(0x800F1024u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1024
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1028
  c->ctr=c->r[12]; // 800F102C
  if (true) { dispatch(c,c->ctr); return; } // 800F1030
}

// fn_800F1034
void f_800F1034(Ctx* __restrict c) {
  trace_call(0x800F1034u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1034
  c->r[0]=c->lr; // 800F1038
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F103C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1040
  c->r[29]=c->r[3]|c->r[3]; // 800F1044
  c->r[30]=c->r[4]|c->r[4]; // 800F1048
  c->r[31]=c->r[5]|c->r[5]; // 800F104C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F1050
  cmps(c,0,(int32_t)c->r[0],7); // 800F1054
  if (!crb(c,0)) { goto L_800F1068; } // 800F1058
  c->r[4]=c->r[31]|c->r[31]; // 800F105C
  c->r[3]=c->r[3]+0x00000030u; // 800F1060
  c->lr=0x800F1068u; f_8003A994(c); // 800F1064
L_800F1068:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F1068
  c->r[3]=c->r[29]|c->r[29]; // 800F106C
  c->r[4]=c->r[30]|c->r[30]; // 800F1070
  c->r[5]=c->r[31]|c->r[31]; // 800F1074
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F1078
  c->ctr=c->r[12]; // 800F107C
  if (true) { c->lr=0x800F1084u; dispatch(c,c->ctr); } // 800F1080
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1084
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1088
  c->lr=c->r[0]; // 800F108C
  c->r[1]=c->r[1]+0x00000020u; // 800F1090
  return; // 800F1094
}

// fn_800F1098
void f_800F1098(Ctx* __restrict c) {
  trace_call(0x800F1098u);
  c->r[3]=0u+0x80410000u; // 800F1098
  c->r[3]=c->r[3]+0xFFFFE859u; // 800F109C
  return; // 800F10A0
}

// fn_800F10A4
void f_800F10A4(Ctx* __restrict c) {
  trace_call(0x800F10A4u);
  c->r[3]=0u+0x00000050u; // 800F10A4
  return; // 800F10A8
}

// fn_800F10AC
void f_800F10AC(Ctx* __restrict c) {
  trace_call(0x800F10ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F10AC
  c->r[0]=c->lr; // 800F10B0
  c->r[3]=0u+0x00000050u; // 800F10B4
  c->r[4]=c->r[13]+0xFFFFBA2Bu; // 800F10B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F10BC
  c->r[5]=0u+0x00000000u; // 800F10C0
  c->r[6]=0u+0x00001001u; // 800F10C4
  c->lr=0x800F10CCu; f_80244D20(c); // 800F10C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F10CC
  if (crb(c,2)) { goto L_800F10D8; } // 800F10D0
  c->lr=0x800F10D8u; f_800F0EC4(c); // 800F10D4
L_800F10D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F10D8
  c->lr=c->r[0]; // 800F10DC
  c->r[1]=c->r[1]+0x00000010u; // 800F10E0
  return; // 800F10E4
}

// fn_800F10E8
void f_800F10E8(Ctx* __restrict c) {
  trace_call(0x800F10E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F10E8
  c->r[0]=c->lr; // 800F10EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F10F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F10F4
  c->r[31]=c->r[3]|c->r[3]; // 800F10F8
  c->lr=0x800F1100u; f_800D7120(c); // 800F10FC
  c->r[5]=0u+0x80410000u; // 800F1100
  c->r[3]=0u+0xAC7C0000u; // 800F1104
  c->r[4]=0u+0x00000000u; // 800F1108
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F110C
  c->r[0]=c->r[3]+0x0000237Du; // 800F1110
  c->r[5]=c->r[5]+0x00004CD8u; // 800F1114
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F1118
  c->r[3]=c->r[31]|c->r[31]; // 800F111C
  W32(c->r[31]+0x00000044u,c->r[4]); // 800F1120
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F1124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1128
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F112C
  c->lr=c->r[0]; // 800F1130
  c->r[1]=c->r[1]+0x00000010u; // 800F1134
  return; // 800F1138
}

// fn_800F113C
void f_800F113C(Ctx* __restrict c) {
  trace_call(0x800F113Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F113C
  c->r[0]=c->lr; // 800F1140
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1144
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1148
  c->r[30]=c->r[3]|c->r[3]; // 800F114C
  c->r[31]=c->r[4]|c->r[4]; // 800F1150
  c->lr=0x800F1158u; f_8030D728(c); // 800F1154
  c->r[3]=c->r[31]|c->r[31]; // 800F1158
  c->r[4]=0u+0x00000000u; // 800F115C
  c->lr=0x800F1164u; f_8030BE30(c); // 800F1160
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F1164
  c->r[3]=c->r[31]|c->r[31]; // 800F1168
  c->lr=0x800F1170u; f_8030BD1C(c); // 800F116C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F1170
  c->r[3]=c->r[31]|c->r[31]; // 800F1174
  c->r[4]=0u+0x00000000u; // 800F1178
  c->lr=0x800F1180u; f_8030BE30(c); // 800F117C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F1180
  c->r[3]=c->r[31]|c->r[31]; // 800F1184
  c->lr=0x800F118Cu; f_8030BD1C(c); // 800F1188
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F118C
  c->r[3]=c->r[31]|c->r[31]; // 800F1190
  c->lr=0x800F1198u; f_8030BD1C(c); // 800F1194
  W8(c->r[30]+0x00000048u,c->r[3]); // 800F1198
  c->r[3]=c->r[31]|c->r[31]; // 800F119C
  c->lr=0x800F11A4u; f_8030BD1C(c); // 800F11A0
  W8(c->r[30]+0x00000049u,c->r[3]); // 800F11A4
  c->r[3]=c->r[31]|c->r[31]; // 800F11A8
  c->lr=0x800F11B0u; f_8030BD1C(c); // 800F11AC
  W8(c->r[30]+0x0000004Au,c->r[3]); // 800F11B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F11B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F11B8
  c->lr=c->r[0]; // 800F11BC
  c->r[1]=c->r[1]+0x00000010u; // 800F11C0
  return; // 800F11C4
}

// fn_800F11C8
void f_800F11C8(Ctx* __restrict c) {
  trace_call(0x800F11C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F11C8
  c->r[0]=c->lr; // 800F11CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F11D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F11D4
  c->r[30]=c->r[3]|c->r[3]; // 800F11D8
  c->r[31]=c->r[4]|c->r[4]; // 800F11DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F11E0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F11E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F11E8
  c->r[3]=c->r[4]+0x00000030u; // 800F11EC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F11F0
  c->r[4]=c->r[30]+0x00000030u; // 800F11F4
  c->lr=0x800F11FCu; f_8003AB48(c); // 800F11F8
  c->r[3]=c->r[31]+0x0000003Cu; // 800F11FC
  c->r[4]=c->r[30]+0x0000003Cu; // 800F1200
  c->lr=0x800F1208u; f_8003AB48(c); // 800F1204
  c->r[0]=R8(c->r[30]+0x00000048u); // 800F1208
  W8(c->r[31]+0x00000048u,c->r[0]); // 800F120C
  c->r[0]=R8(c->r[30]+0x00000049u); // 800F1210
  W8(c->r[31]+0x00000049u,c->r[0]); // 800F1214
  c->r[0]=R8(c->r[30]+0x0000004Au); // 800F1218
  W8(c->r[31]+0x0000004Au,c->r[0]); // 800F121C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1220
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1224
  c->lr=c->r[0]; // 800F1228
  c->r[1]=c->r[1]+0x00000010u; // 800F122C
  return; // 800F1230
}

// fn_800F1234
void f_800F1234(Ctx* __restrict c) {
  trace_call(0x800F1234u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1234
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1238
  c->ctr=c->r[12]; // 800F123C
  if (true) { dispatch(c,c->ctr); return; } // 800F1240
}

// fn_800F1244
void f_800F1244(Ctx* __restrict c) {
  trace_call(0x800F1244u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1244
  c->r[0]=c->lr; // 800F1248
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F124C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1250
  c->r[29]=c->r[3]|c->r[3]; // 800F1254
  c->r[30]=c->r[4]|c->r[4]; // 800F1258
  c->r[31]=c->r[5]|c->r[5]; // 800F125C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F1260
  cmps(c,0,(int32_t)c->r[0],7); // 800F1264
  if (!crb(c,0)) { goto L_800F1278; } // 800F1268
  c->r[4]=c->r[31]|c->r[31]; // 800F126C
  c->r[3]=c->r[3]+0x00000030u; // 800F1270
  c->lr=0x800F1278u; f_8003A994(c); // 800F1274
L_800F1278:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800F1278
  cmps(c,0,(int32_t)c->r[0],7); // 800F127C
  if (!crb(c,0)) { goto L_800F1290; } // 800F1280
  c->r[4]=c->r[31]|c->r[31]; // 800F1284
  c->r[3]=c->r[29]+0x0000003Cu; // 800F1288
  c->lr=0x800F1290u; f_8003A994(c); // 800F128C
L_800F1290:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F1290
  c->r[3]=c->r[29]|c->r[29]; // 800F1294
  c->r[4]=c->r[30]|c->r[30]; // 800F1298
  c->r[5]=c->r[31]|c->r[31]; // 800F129C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F12A0
  c->ctr=c->r[12]; // 800F12A4
  if (true) { c->lr=0x800F12ACu; dispatch(c,c->ctr); } // 800F12A8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F12AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F12B0
  c->lr=c->r[0]; // 800F12B4
  c->r[1]=c->r[1]+0x00000020u; // 800F12B8
  return; // 800F12BC
}

// fn_800F12C0
void f_800F12C0(Ctx* __restrict c) {
  trace_call(0x800F12C0u);
  c->r[3]=0u+0x80410000u; // 800F12C0
  c->r[3]=c->r[3]+0xFFFFE864u; // 800F12C4
  return; // 800F12C8
}

// fn_800F12CC
void f_800F12CC(Ctx* __restrict c) {
  trace_call(0x800F12CCu);
  c->r[3]=0u+0x0000004Cu; // 800F12CC
  return; // 800F12D0
}

// fn_800F12D4
void f_800F12D4(Ctx* __restrict c) {
  trace_call(0x800F12D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F12D4
  c->r[0]=c->lr; // 800F12D8
  c->r[3]=0u+0x0000004Cu; // 800F12DC
  c->r[4]=c->r[13]+0xFFFFBA30u; // 800F12E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F12E4
  c->r[5]=0u+0x00000000u; // 800F12E8
  c->r[6]=0u+0x00001001u; // 800F12EC
  c->lr=0x800F12F4u; f_80244D20(c); // 800F12F0
  cmps(c,0,(int32_t)c->r[3],0); // 800F12F4
  if (crb(c,2)) { goto L_800F1300; } // 800F12F8
  c->lr=0x800F1300u; f_800F10E8(c); // 800F12FC
L_800F1300:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1300
  c->lr=c->r[0]; // 800F1304
  c->r[1]=c->r[1]+0x00000010u; // 800F1308
  return; // 800F130C
}

// fn_800F1310
void f_800F1310(Ctx* __restrict c) {
  trace_call(0x800F1310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1310
  c->r[0]=c->lr; // 800F1314
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F131C
  c->r[31]=c->r[3]|c->r[3]; // 800F1320
  c->lr=0x800F1328u; f_800D7120(c); // 800F1324
  c->r[5]=0u+0x80410000u; // 800F1328
  c->r[3]=0u+0x27CF0000u; // 800F132C
  c->r[0]=c->r[3]+0xFFFFCD47u; // 800F1330
  c->r[4]=0u+0x00000000u; // 800F1334
  c->r[5]=c->r[5]+0x00004CA4u; // 800F1338
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F133C
  c->r[3]=c->r[31]|c->r[31]; // 800F1340
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F1344
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F1348
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F134C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1350
  c->lr=c->r[0]; // 800F1354
  c->r[1]=c->r[1]+0x00000010u; // 800F1358
  return; // 800F135C
}

// fn_800F1360
void f_800F1360(Ctx* __restrict c) {
  trace_call(0x800F1360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1360
  c->r[0]=c->lr; // 800F1364
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F136C
  c->r[31]=c->r[4]|c->r[4]; // 800F1370
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1374
  c->r[30]=c->r[3]|c->r[3]; // 800F1378
  c->lr=0x800F1380u; f_8030D728(c); // 800F137C
  c->r[3]=c->r[31]|c->r[31]; // 800F1380
  c->r[4]=0u+0x00000000u; // 800F1384
  c->lr=0x800F138Cu; f_8030BE30(c); // 800F1388
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F138C
  c->r[3]=c->r[31]|c->r[31]; // 800F1390
  c->lr=0x800F1398u; f_8030BD1C(c); // 800F1394
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F1398
  c->r[3]=c->r[31]|c->r[31]; // 800F139C
  c->lr=0x800F13A4u; f_8030C0A0(c); // 800F13A0
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F13A4
  c->r[3]=c->r[31]|c->r[31]; // 800F13A8
  c->lr=0x800F13B0u; f_8030C0A0(c); // 800F13AC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F13B0
  c->r[3]=c->r[31]|c->r[31]; // 800F13B4
  c->lr=0x800F13BCu; f_8030C0A0(c); // 800F13B8
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F13BC
  c->r[3]=c->r[31]|c->r[31]; // 800F13C0
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F13C4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800F13C8
  c->lr=0x800F13D0u; f_8030BD1C(c); // 800F13CC
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800F13D0
  c->r[3]=c->r[31]|c->r[31]; // 800F13D4
  c->lr=0x800F13DCu; f_8030BD1C(c); // 800F13D8
  W32(c->r[30]+0x00000050u,c->r[3]); // 800F13DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F13E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F13E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F13E8
  c->lr=c->r[0]; // 800F13EC
  c->r[1]=c->r[1]+0x00000010u; // 800F13F0
  return; // 800F13F4
}

// fn_800F13F8
void f_800F13F8(Ctx* __restrict c) {
  trace_call(0x800F13F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F13F8
  c->r[0]=c->lr; // 800F13FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1400
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1404
  c->r[31]=c->r[4]|c->r[4]; // 800F1408
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F140C
  c->r[30]=c->r[3]|c->r[3]; // 800F1410
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F1414
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F1418
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F141C
  c->r[3]=c->r[4]+0x00000030u; // 800F1420
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F1424
  c->r[4]=c->r[30]+0x00000030u; // 800F1428
  c->lr=0x800F1430u; f_8003AB48(c); // 800F142C
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1430
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F1434
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1438
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F143C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1440
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F1444
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800F1448
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800F144C
  c->r[0]=R32(c->r[30]+0x00000050u); // 800F1450
  W32(c->r[31]+0x00000050u,c->r[0]); // 800F1454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1458
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F145C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1460
  c->lr=c->r[0]; // 800F1464
  c->r[1]=c->r[1]+0x00000010u; // 800F1468
  return; // 800F146C
}

// fn_800F1470
void f_800F1470(Ctx* __restrict c) {
  trace_call(0x800F1470u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1470
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1474
  c->ctr=c->r[12]; // 800F1478
  if (true) { dispatch(c,c->ctr); return; } // 800F147C
}

// fn_800F1480
void f_800F1480(Ctx* __restrict c) {
  trace_call(0x800F1480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1480
  c->r[0]=c->lr; // 800F1484
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1488
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F148C
  c->r[29]=c->r[3]|c->r[3]; // 800F1490
  c->r[30]=c->r[4]|c->r[4]; // 800F1494
  c->r[31]=c->r[5]|c->r[5]; // 800F1498
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F149C
  cmps(c,0,(int32_t)c->r[0],7); // 800F14A0
  if (!crb(c,0)) { goto L_800F14B4; } // 800F14A4
  c->r[4]=c->r[31]|c->r[31]; // 800F14A8
  c->r[3]=c->r[3]+0x00000030u; // 800F14AC
  c->lr=0x800F14B4u; f_8003A994(c); // 800F14B0
L_800F14B4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F14B4
  c->r[3]=c->r[29]|c->r[29]; // 800F14B8
  c->r[4]=c->r[30]|c->r[30]; // 800F14BC
  c->r[5]=c->r[31]|c->r[31]; // 800F14C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F14C4
  c->ctr=c->r[12]; // 800F14C8
  if (true) { c->lr=0x800F14D0u; dispatch(c,c->ctr); } // 800F14CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F14D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F14D4
  c->lr=c->r[0]; // 800F14D8
  c->r[1]=c->r[1]+0x00000020u; // 800F14DC
  return; // 800F14E0
}

// fn_800F14E4
void f_800F14E4(Ctx* __restrict c) {
  trace_call(0x800F14E4u);
  c->r[3]=0u+0x80410000u; // 800F14E4
  c->r[3]=c->r[3]+0xFFFFE870u; // 800F14E8
  return; // 800F14EC
}

// fn_800F14F0
void f_800F14F0(Ctx* __restrict c) {
  trace_call(0x800F14F0u);
  c->r[3]=0u+0x00000054u; // 800F14F0
  return; // 800F14F4
}

// fn_800F14F8
void f_800F14F8(Ctx* __restrict c) {
  trace_call(0x800F14F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F14F8
  c->r[0]=c->lr; // 800F14FC
  c->r[3]=0u+0x00000054u; // 800F1500
  c->r[4]=c->r[13]+0xFFFFBA35u; // 800F1504
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1508
  c->r[5]=0u+0x00000000u; // 800F150C
  c->r[6]=0u+0x00001001u; // 800F1510
  c->lr=0x800F1518u; f_80244D20(c); // 800F1514
  cmps(c,0,(int32_t)c->r[3],0); // 800F1518
  if (crb(c,2)) { goto L_800F1524; } // 800F151C
  c->lr=0x800F1524u; f_800F1310(c); // 800F1520
L_800F1524:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1524
  c->lr=c->r[0]; // 800F1528
  c->r[1]=c->r[1]+0x00000010u; // 800F152C
  return; // 800F1530
}

// fn_800F1534
void f_800F1534(Ctx* __restrict c) {
  trace_call(0x800F1534u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1534
  c->r[0]=c->lr; // 800F1538
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F153C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1540
  c->r[31]=c->r[3]|c->r[3]; // 800F1544
  c->lr=0x800F154Cu; f_800D7120(c); // 800F1548
  c->r[5]=0u+0x80410000u; // 800F154C
  c->r[3]=0u+0x6DF90000u; // 800F1550
  c->r[0]=c->r[3]+0x000024F6u; // 800F1554
  c->r[4]=0u+0x00000000u; // 800F1558
  c->r[5]=c->r[5]+0x00004C70u; // 800F155C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F1560
  c->r[3]=c->r[31]|c->r[31]; // 800F1564
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F1568
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F156C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1570
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1574
  c->lr=c->r[0]; // 800F1578
  c->r[1]=c->r[1]+0x00000010u; // 800F157C
  return; // 800F1580
}

// fn_800F1584
void f_800F1584(Ctx* __restrict c) {
  trace_call(0x800F1584u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1584
  c->r[0]=c->lr; // 800F1588
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F158C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1590
  c->r[31]=c->r[4]|c->r[4]; // 800F1594
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1598
  c->r[30]=c->r[3]|c->r[3]; // 800F159C
  c->lr=0x800F15A4u; f_8030D728(c); // 800F15A0
  c->r[3]=c->r[31]|c->r[31]; // 800F15A4
  c->r[4]=0u+0x00000000u; // 800F15A8
  c->lr=0x800F15B0u; f_8030BE30(c); // 800F15AC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F15B0
  c->r[3]=c->r[31]|c->r[31]; // 800F15B4
  c->lr=0x800F15BCu; f_8030BD1C(c); // 800F15B8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F15BC
  c->r[3]=c->r[31]|c->r[31]; // 800F15C0
  c->lr=0x800F15C8u; f_8030C0A0(c); // 800F15C4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F15C8
  c->r[3]=c->r[31]|c->r[31]; // 800F15CC
  c->lr=0x800F15D4u; f_8030C0A0(c); // 800F15D0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F15D4
  c->r[3]=c->r[31]|c->r[31]; // 800F15D8
  c->lr=0x800F15E0u; f_8030C0A0(c); // 800F15DC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F15E0
  c->r[3]=c->r[31]|c->r[31]; // 800F15E4
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F15E8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800F15EC
  c->lr=0x800F15F4u; f_8030BD1C(c); // 800F15F0
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800F15F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F15F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F15FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1600
  c->lr=c->r[0]; // 800F1604
  c->r[1]=c->r[1]+0x00000010u; // 800F1608
  return; // 800F160C
}

// fn_800F1610
void f_800F1610(Ctx* __restrict c) {
  trace_call(0x800F1610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1610
  c->r[0]=c->lr; // 800F1614
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F161C
  c->r[31]=c->r[4]|c->r[4]; // 800F1620
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1624
  c->r[30]=c->r[3]|c->r[3]; // 800F1628
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F162C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F1630
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F1634
  c->r[3]=c->r[4]+0x00000030u; // 800F1638
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F163C
  c->r[4]=c->r[30]+0x00000030u; // 800F1640
  c->lr=0x800F1648u; f_8003AB48(c); // 800F1644
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1648
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F164C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1650
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F1654
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1658
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F165C
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800F1660
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800F1664
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1668
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F166C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1670
  c->lr=c->r[0]; // 800F1674
  c->r[1]=c->r[1]+0x00000010u; // 800F1678
  return; // 800F167C
}

// fn_800F1680
void f_800F1680(Ctx* __restrict c) {
  trace_call(0x800F1680u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1680
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1684
  c->ctr=c->r[12]; // 800F1688
  if (true) { dispatch(c,c->ctr); return; } // 800F168C
}

// fn_800F1690
void f_800F1690(Ctx* __restrict c) {
  trace_call(0x800F1690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1690
  c->r[0]=c->lr; // 800F1694
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1698
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F169C
  c->r[29]=c->r[3]|c->r[3]; // 800F16A0
  c->r[30]=c->r[4]|c->r[4]; // 800F16A4
  c->r[31]=c->r[5]|c->r[5]; // 800F16A8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F16AC
  cmps(c,0,(int32_t)c->r[0],7); // 800F16B0
  if (!crb(c,0)) { goto L_800F16C4; } // 800F16B4
  c->r[4]=c->r[31]|c->r[31]; // 800F16B8
  c->r[3]=c->r[3]+0x00000030u; // 800F16BC
  c->lr=0x800F16C4u; f_8003A994(c); // 800F16C0
L_800F16C4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F16C4
  c->r[3]=c->r[29]|c->r[29]; // 800F16C8
  c->r[4]=c->r[30]|c->r[30]; // 800F16CC
  c->r[5]=c->r[31]|c->r[31]; // 800F16D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F16D4
  c->ctr=c->r[12]; // 800F16D8
  if (true) { c->lr=0x800F16E0u; dispatch(c,c->ctr); } // 800F16DC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F16E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F16E4
  c->lr=c->r[0]; // 800F16E8
  c->r[1]=c->r[1]+0x00000020u; // 800F16EC
  return; // 800F16F0
}

// fn_800F16F4
void f_800F16F4(Ctx* __restrict c) {
  trace_call(0x800F16F4u);
  c->r[3]=0u+0x80410000u; // 800F16F4
  c->r[3]=c->r[3]+0xFFFFE87Du; // 800F16F8
  return; // 800F16FC
}

// fn_800F1700
void f_800F1700(Ctx* __restrict c) {
  trace_call(0x800F1700u);
  c->r[3]=0u+0x00000050u; // 800F1700
  return; // 800F1704
}

// fn_800F1708
void f_800F1708(Ctx* __restrict c) {
  trace_call(0x800F1708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1708
  c->r[0]=c->lr; // 800F170C
  c->r[3]=0u+0x00000050u; // 800F1710
  c->r[4]=c->r[13]+0xFFFFBA3Au; // 800F1714
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1718
  c->r[5]=0u+0x00000000u; // 800F171C
  c->r[6]=0u+0x00001001u; // 800F1720
  c->lr=0x800F1728u; f_80244D20(c); // 800F1724
  cmps(c,0,(int32_t)c->r[3],0); // 800F1728
  if (crb(c,2)) { goto L_800F1734; } // 800F172C
  c->lr=0x800F1734u; f_800F1534(c); // 800F1730
L_800F1734:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1734
  c->lr=c->r[0]; // 800F1738
  c->r[1]=c->r[1]+0x00000010u; // 800F173C
  return; // 800F1740
}

// fn_800F1744
void f_800F1744(Ctx* __restrict c) {
  trace_call(0x800F1744u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1744
  c->r[0]=c->lr; // 800F1748
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F174C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1750
  c->r[31]=c->r[3]|c->r[3]; // 800F1754
  c->lr=0x800F175Cu; f_800D7120(c); // 800F1758
  c->r[5]=0u+0x80410000u; // 800F175C
  c->r[3]=0u+0x59720000u; // 800F1760
  c->r[0]=c->r[3]+0x00004EB8u; // 800F1764
  c->r[4]=0u+0x00000000u; // 800F1768
  c->r[5]=c->r[5]+0x00004C3Cu; // 800F176C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F1770
  c->r[3]=c->r[31]|c->r[31]; // 800F1774
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F1778
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F177C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1780
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1784
  c->lr=c->r[0]; // 800F1788
  c->r[1]=c->r[1]+0x00000010u; // 800F178C
  return; // 800F1790
}

// fn_800F1794
void f_800F1794(Ctx* __restrict c) {
  trace_call(0x800F1794u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1794
  c->r[0]=c->lr; // 800F1798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F179C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F17A0
  c->r[30]=c->r[3]|c->r[3]; // 800F17A4
  c->r[31]=c->r[4]|c->r[4]; // 800F17A8
  c->lr=0x800F17B0u; f_8030D728(c); // 800F17AC
  c->r[3]=c->r[31]|c->r[31]; // 800F17B0
  c->r[4]=0u+0x00000000u; // 800F17B4
  c->lr=0x800F17BCu; f_8030BE30(c); // 800F17B8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F17BC
  c->r[3]=c->r[31]|c->r[31]; // 800F17C0
  c->lr=0x800F17C8u; f_8030BD1C(c); // 800F17C4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F17C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F17CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F17D0
  c->lr=c->r[0]; // 800F17D4
  c->r[1]=c->r[1]+0x00000010u; // 800F17D8
  return; // 800F17DC
}

// fn_800F17E0
void f_800F17E0(Ctx* __restrict c) {
  trace_call(0x800F17E0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F17E0
  c->r[5]=c->r[3]|c->r[3]; // 800F17E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F17E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F17EC
  c->r[3]=c->r[4]+0x00000030u; // 800F17F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F17F4
  c->r[4]=c->r[5]+0x00000030u; // 800F17F8
  f_8003AB48(c); return; // 800F17FC
}

// fn_800F1800
void f_800F1800(Ctx* __restrict c) {
  trace_call(0x800F1800u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1800
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1804
  c->ctr=c->r[12]; // 800F1808
  if (true) { dispatch(c,c->ctr); return; } // 800F180C
}

// fn_800F1810
void f_800F1810(Ctx* __restrict c) {
  trace_call(0x800F1810u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1810
  c->r[0]=c->lr; // 800F1814
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1818
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F181C
  c->r[29]=c->r[3]|c->r[3]; // 800F1820
  c->r[30]=c->r[4]|c->r[4]; // 800F1824
  c->r[31]=c->r[5]|c->r[5]; // 800F1828
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F182C
  cmps(c,0,(int32_t)c->r[0],7); // 800F1830
  if (!crb(c,0)) { goto L_800F1844; } // 800F1834
  c->r[4]=c->r[31]|c->r[31]; // 800F1838
  c->r[3]=c->r[3]+0x00000030u; // 800F183C
  c->lr=0x800F1844u; f_8003A994(c); // 800F1840
L_800F1844:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F1844
  c->r[3]=c->r[29]|c->r[29]; // 800F1848
  c->r[4]=c->r[30]|c->r[30]; // 800F184C
  c->r[5]=c->r[31]|c->r[31]; // 800F1850
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F1854
  c->ctr=c->r[12]; // 800F1858
  if (true) { c->lr=0x800F1860u; dispatch(c,c->ctr); } // 800F185C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1860
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1864
  c->lr=c->r[0]; // 800F1868
  c->r[1]=c->r[1]+0x00000020u; // 800F186C
  return; // 800F1870
}

// fn_800F1874
void f_800F1874(Ctx* __restrict c) {
  trace_call(0x800F1874u);
  c->r[3]=0u+0x80410000u; // 800F1874
  c->r[3]=c->r[3]+0xFFFFE88Bu; // 800F1878
  return; // 800F187C
}

// fn_800F1880
void f_800F1880(Ctx* __restrict c) {
  trace_call(0x800F1880u);
  c->r[3]=0u+0x0000003Cu; // 800F1880
  return; // 800F1884
}

// fn_800F1888
void f_800F1888(Ctx* __restrict c) {
  trace_call(0x800F1888u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1888
  c->r[0]=c->lr; // 800F188C
  c->r[3]=0u+0x0000003Cu; // 800F1890
  c->r[4]=c->r[13]+0xFFFFBA3Fu; // 800F1894
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1898
  c->r[5]=0u+0x00000000u; // 800F189C
  c->r[6]=0u+0x00001001u; // 800F18A0
  c->lr=0x800F18A8u; f_80244D20(c); // 800F18A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F18A8
  if (crb(c,2)) { goto L_800F18B4; } // 800F18AC
  c->lr=0x800F18B4u; f_800F1744(c); // 800F18B0
L_800F18B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F18B4
  c->lr=c->r[0]; // 800F18B8
  c->r[1]=c->r[1]+0x00000010u; // 800F18BC
  return; // 800F18C0
}

// fn_800F18C4
void f_800F18C4(Ctx* __restrict c) {
  trace_call(0x800F18C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F18C4
  c->r[0]=c->lr; // 800F18C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F18CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F18D0
  c->r[31]=c->r[3]|c->r[3]; // 800F18D4
  c->lr=0x800F18DCu; f_800D7120(c); // 800F18D8
  c->r[5]=0u+0x80410000u; // 800F18DC
  c->r[3]=0u+0x2CC40000u; // 800F18E0
  c->r[0]=c->r[3]+0xFFFFE663u; // 800F18E4
  c->r[4]=0u+0x00000000u; // 800F18E8
  c->r[5]=c->r[5]+0x00004C08u; // 800F18EC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F18F0
  c->r[3]=c->r[31]|c->r[31]; // 800F18F4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F18F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F18FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1900
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1904
  c->lr=c->r[0]; // 800F1908
  c->r[1]=c->r[1]+0x00000010u; // 800F190C
  return; // 800F1910
}

// fn_800F1914
void f_800F1914(Ctx* __restrict c) {
  trace_call(0x800F1914u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1914
  c->r[0]=c->lr; // 800F1918
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F191C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1920
  c->r[30]=c->r[3]|c->r[3]; // 800F1924
  c->r[31]=c->r[4]|c->r[4]; // 800F1928
  c->lr=0x800F1930u; f_8030D728(c); // 800F192C
  c->r[0]=0u+0x00000000u; // 800F1930
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800F1934
  c->r[3]=c->r[31]|c->r[31]; // 800F1938
  c->r[4]=0u+0x00000000u; // 800F193C
  c->lr=0x800F1944u; f_8030BE30(c); // 800F1940
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F1944
  c->r[3]=c->r[31]|c->r[31]; // 800F1948
  c->lr=0x800F1950u; f_8030BD1C(c); // 800F194C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F1950
  c->r[3]=c->r[31]|c->r[31]; // 800F1954
  c->lr=0x800F195Cu; f_8030BD1C(c); // 800F1958
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F195C
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800F1960
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800F1964
  c->r[3]=c->r[31]|c->r[31]; // 800F1968
  c->lr=0x800F1970u; f_8030BD1C(c); // 800F196C
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F1970
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800F1974
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800F1978
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F197C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1980
  c->lr=c->r[0]; // 800F1984
  c->r[1]=c->r[1]+0x00000010u; // 800F1988
  return; // 800F198C
}

// fn_800F1990
void f_800F1990(Ctx* __restrict c) {
  trace_call(0x800F1990u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1990
  c->r[0]=c->lr; // 800F1994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1998
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F199C
  c->r[30]=c->r[3]|c->r[3]; // 800F19A0
  c->r[31]=c->r[4]|c->r[4]; // 800F19A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F19A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F19AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F19B0
  c->r[3]=c->r[4]+0x00000030u; // 800F19B4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F19B8
  c->r[4]=c->r[30]+0x00000030u; // 800F19BC
  c->lr=0x800F19C4u; f_8003AB48(c); // 800F19C0
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F19C4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F19C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F19CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F19D0
  c->lr=c->r[0]; // 800F19D4
  c->r[1]=c->r[1]+0x00000010u; // 800F19D8
  return; // 800F19DC
}

// fn_800F19E0
void f_800F19E0(Ctx* __restrict c) {
  trace_call(0x800F19E0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F19E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F19E4
  c->ctr=c->r[12]; // 800F19E8
  if (true) { dispatch(c,c->ctr); return; } // 800F19EC
}

// fn_800F19F0
void f_800F19F0(Ctx* __restrict c) {
  trace_call(0x800F19F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F19F0
  c->r[0]=c->lr; // 800F19F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F19F8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F19FC
  c->r[29]=c->r[3]|c->r[3]; // 800F1A00
  c->r[30]=c->r[4]|c->r[4]; // 800F1A04
  c->r[31]=c->r[5]|c->r[5]; // 800F1A08
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F1A0C
  cmps(c,0,(int32_t)c->r[0],7); // 800F1A10
  if (!crb(c,0)) { goto L_800F1A24; } // 800F1A14
  c->r[4]=c->r[31]|c->r[31]; // 800F1A18
  c->r[3]=c->r[3]+0x00000030u; // 800F1A1C
  c->lr=0x800F1A24u; f_8003A994(c); // 800F1A20
L_800F1A24:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F1A24
  c->r[3]=c->r[29]|c->r[29]; // 800F1A28
  c->r[4]=c->r[30]|c->r[30]; // 800F1A2C
  c->r[5]=c->r[31]|c->r[31]; // 800F1A30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F1A34
  c->ctr=c->r[12]; // 800F1A38
  if (true) { c->lr=0x800F1A40u; dispatch(c,c->ctr); } // 800F1A3C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1A40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1A44
  c->lr=c->r[0]; // 800F1A48
  c->r[1]=c->r[1]+0x00000020u; // 800F1A4C
  return; // 800F1A50
}

// fn_800F1A54
void f_800F1A54(Ctx* __restrict c) {
  trace_call(0x800F1A54u);
  c->r[3]=0u+0x80410000u; // 800F1A54
  c->r[3]=c->r[3]+0xFFFFE898u; // 800F1A58
  return; // 800F1A5C
}

// fn_800F1A60
void f_800F1A60(Ctx* __restrict c) {
  trace_call(0x800F1A60u);
  c->r[3]=0u+0x00000040u; // 800F1A60
  return; // 800F1A64
}

// fn_800F1A68
void f_800F1A68(Ctx* __restrict c) {
  trace_call(0x800F1A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1A68
  c->r[0]=c->lr; // 800F1A6C
  c->r[3]=0u+0x00000040u; // 800F1A70
  c->r[4]=c->r[13]+0xFFFFBA44u; // 800F1A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1A78
  c->r[5]=0u+0x00000000u; // 800F1A7C
  c->r[6]=0u+0x00001001u; // 800F1A80
  c->lr=0x800F1A88u; f_80244D20(c); // 800F1A84
  cmps(c,0,(int32_t)c->r[3],0); // 800F1A88
  if (crb(c,2)) { goto L_800F1A94; } // 800F1A8C
  c->lr=0x800F1A94u; f_800F18C4(c); // 800F1A90
L_800F1A94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1A94
  c->lr=c->r[0]; // 800F1A98
  c->r[1]=c->r[1]+0x00000010u; // 800F1A9C
  return; // 800F1AA0
}

// fn_800F1AA4
void f_800F1AA4(Ctx* __restrict c) {
  trace_call(0x800F1AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1AA4
  c->r[0]=c->lr; // 800F1AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1AAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1AB0
  c->r[31]=c->r[3]|c->r[3]; // 800F1AB4
  c->lr=0x800F1ABCu; f_800D7120(c); // 800F1AB8
  c->r[5]=0u+0x80410000u; // 800F1ABC
  c->r[3]=0u+0x9B830000u; // 800F1AC0
  c->r[4]=0u+0x00000000u; // 800F1AC4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F1AC8
  c->r[0]=c->r[3]+0x000056FDu; // 800F1ACC
  c->r[5]=c->r[5]+0x00004BD4u; // 800F1AD0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F1AD4
  c->r[3]=c->r[31]|c->r[31]; // 800F1AD8
  W32(c->r[31]+0x00000044u,c->r[4]); // 800F1ADC
  W32(c->r[31]+0x00000050u,c->r[4]); // 800F1AE0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F1AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1AE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1AEC
  c->lr=c->r[0]; // 800F1AF0
  c->r[1]=c->r[1]+0x00000010u; // 800F1AF4
  return; // 800F1AF8
}

// fn_800F1AFC
void f_800F1AFC(Ctx* __restrict c) {
  trace_call(0x800F1AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1AFC
  c->r[0]=c->lr; // 800F1B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1B08
  c->r[30]=c->r[3]|c->r[3]; // 800F1B0C
  c->r[31]=c->r[4]|c->r[4]; // 800F1B10
  c->lr=0x800F1B18u; f_8030D728(c); // 800F1B14
  c->r[3]=c->r[31]|c->r[31]; // 800F1B18
  c->r[4]=0u+0x00000000u; // 800F1B1C
  c->lr=0x800F1B24u; f_8030BE30(c); // 800F1B20
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F1B24
  c->r[3]=c->r[31]|c->r[31]; // 800F1B28
  c->lr=0x800F1B30u; f_8030BD1C(c); // 800F1B2C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F1B30
  c->r[3]=c->r[31]|c->r[31]; // 800F1B34
  c->r[4]=0u+0x00000000u; // 800F1B38
  c->lr=0x800F1B40u; f_8030BE30(c); // 800F1B3C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F1B40
  c->r[3]=c->r[31]|c->r[31]; // 800F1B44
  c->lr=0x800F1B4Cu; f_8030BD1C(c); // 800F1B48
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F1B4C
  c->r[3]=c->r[31]|c->r[31]; // 800F1B50
  c->r[4]=0u+0x00000000u; // 800F1B54
  c->lr=0x800F1B5Cu; f_8030BE30(c); // 800F1B58
  W32(c->r[30]+0x00000048u,c->r[3]); // 800F1B5C
  c->r[3]=c->r[31]|c->r[31]; // 800F1B60
  c->lr=0x800F1B68u; f_8030BD1C(c); // 800F1B64
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800F1B68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1B6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1B70
  c->lr=c->r[0]; // 800F1B74
  c->r[1]=c->r[1]+0x00000010u; // 800F1B78
  return; // 800F1B7C
}

// fn_800F1B80
void f_800F1B80(Ctx* __restrict c) {
  trace_call(0x800F1B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B80
  c->r[0]=c->lr; // 800F1B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1B8C
  c->r[30]=c->r[3]|c->r[3]; // 800F1B90
  c->r[31]=c->r[4]|c->r[4]; // 800F1B94
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F1B98
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F1B9C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F1BA0
  c->r[3]=c->r[4]+0x00000030u; // 800F1BA4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F1BA8
  c->r[4]=c->r[30]+0x00000030u; // 800F1BAC
  c->lr=0x800F1BB4u; f_8003AB48(c); // 800F1BB0
  c->r[3]=c->r[31]+0x0000003Cu; // 800F1BB4
  c->r[4]=c->r[30]+0x0000003Cu; // 800F1BB8
  c->lr=0x800F1BC0u; f_8003AB48(c); // 800F1BBC
  c->r[3]=c->r[31]+0x00000048u; // 800F1BC0
  c->r[4]=c->r[30]+0x00000048u; // 800F1BC4
  c->lr=0x800F1BCCu; f_8003AB48(c); // 800F1BC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1BD0
  c->lr=c->r[0]; // 800F1BD4
  c->r[1]=c->r[1]+0x00000010u; // 800F1BD8
  return; // 800F1BDC
}

// fn_800F1BE0
void f_800F1BE0(Ctx* __restrict c) {
  trace_call(0x800F1BE0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1BE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1BE4
  c->ctr=c->r[12]; // 800F1BE8
  if (true) { dispatch(c,c->ctr); return; } // 800F1BEC
}

// fn_800F1BF0
void f_800F1BF0(Ctx* __restrict c) {
  trace_call(0x800F1BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1BF0
  c->r[0]=c->lr; // 800F1BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1BF8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1BFC
  c->r[29]=c->r[3]|c->r[3]; // 800F1C00
  c->r[30]=c->r[4]|c->r[4]; // 800F1C04
  c->r[31]=c->r[5]|c->r[5]; // 800F1C08
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F1C0C
  cmps(c,0,(int32_t)c->r[0],7); // 800F1C10
  if (!crb(c,0)) { goto L_800F1C24; } // 800F1C14
  c->r[4]=c->r[31]|c->r[31]; // 800F1C18
  c->r[3]=c->r[3]+0x00000030u; // 800F1C1C
  c->lr=0x800F1C24u; f_8003A994(c); // 800F1C20
L_800F1C24:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800F1C24
  cmps(c,0,(int32_t)c->r[0],7); // 800F1C28
  if (!crb(c,0)) { goto L_800F1C3C; } // 800F1C2C
  c->r[4]=c->r[31]|c->r[31]; // 800F1C30
  c->r[3]=c->r[29]+0x0000003Cu; // 800F1C34
  c->lr=0x800F1C3Cu; f_8003A994(c); // 800F1C38
L_800F1C3C:;
  c->r[4]=c->r[30]|c->r[30]; // 800F1C3C
  c->r[3]=c->r[29]+0x00000048u; // 800F1C40
  c->lr=0x800F1C48u; f_800D62F4(c); // 800F1C44
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F1C48
  c->r[3]=c->r[29]|c->r[29]; // 800F1C4C
  c->r[4]=c->r[30]|c->r[30]; // 800F1C50
  c->r[5]=c->r[31]|c->r[31]; // 800F1C54
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F1C58
  c->ctr=c->r[12]; // 800F1C5C
  if (true) { c->lr=0x800F1C64u; dispatch(c,c->ctr); } // 800F1C60
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1C64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1C68
  c->lr=c->r[0]; // 800F1C6C
  c->r[1]=c->r[1]+0x00000020u; // 800F1C70
  return; // 800F1C74
}

// fn_800F1C78
void f_800F1C78(Ctx* __restrict c) {
  trace_call(0x800F1C78u);
  c->r[3]=0u+0x80410000u; // 800F1C78
  c->r[3]=c->r[3]+0xFFFFE8A5u; // 800F1C7C
  return; // 800F1C80
}

// fn_800F1C84
void f_800F1C84(Ctx* __restrict c) {
  trace_call(0x800F1C84u);
  c->r[3]=0u+0x00000054u; // 800F1C84
  return; // 800F1C88
}

// fn_800F1C8C
void f_800F1C8C(Ctx* __restrict c) {
  trace_call(0x800F1C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1C8C
  c->r[0]=c->lr; // 800F1C90
  c->r[3]=0u+0x00000054u; // 800F1C94
  c->r[4]=c->r[13]+0xFFFFBA49u; // 800F1C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1C9C
  c->r[5]=0u+0x00000000u; // 800F1CA0
  c->r[6]=0u+0x00001001u; // 800F1CA4
  c->lr=0x800F1CACu; f_80244D20(c); // 800F1CA8
  cmps(c,0,(int32_t)c->r[3],0); // 800F1CAC
  if (crb(c,2)) { goto L_800F1CB8; } // 800F1CB0
  c->lr=0x800F1CB8u; f_800F1AA4(c); // 800F1CB4
L_800F1CB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1CB8
  c->lr=c->r[0]; // 800F1CBC
  c->r[1]=c->r[1]+0x00000010u; // 800F1CC0
  return; // 800F1CC4
}

// fn_800F1CC8
void f_800F1CC8(Ctx* __restrict c) {
  trace_call(0x800F1CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1CC8
  c->r[0]=c->lr; // 800F1CCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1CD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1CD4
  c->r[31]=c->r[3]|c->r[3]; // 800F1CD8
  c->lr=0x800F1CE0u; f_800D7120(c); // 800F1CDC
  c->r[5]=0u+0x80410000u; // 800F1CE0
  c->r[3]=0u+0xDC6F0000u; // 800F1CE4
  c->r[0]=c->r[3]+0xFFFF93BDu; // 800F1CE8
  c->r[4]=0u+0x00000000u; // 800F1CEC
  c->r[5]=c->r[5]+0x00004BA0u; // 800F1CF0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F1CF4
  c->r[3]=c->r[31]|c->r[31]; // 800F1CF8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F1CFC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F1D00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1D04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1D08
  c->lr=c->r[0]; // 800F1D0C
  c->r[1]=c->r[1]+0x00000010u; // 800F1D10
  return; // 800F1D14
}

// fn_800F1D18
void f_800F1D18(Ctx* __restrict c) {
  trace_call(0x800F1D18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1D18
  c->r[0]=c->lr; // 800F1D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1D20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1D24
  c->r[30]=c->r[3]|c->r[3]; // 800F1D28
  c->r[31]=c->r[4]|c->r[4]; // 800F1D2C
  c->lr=0x800F1D34u; f_8030D728(c); // 800F1D30
  c->r[3]=c->r[31]|c->r[31]; // 800F1D34
  c->r[4]=0u+0x00000000u; // 800F1D38
  c->lr=0x800F1D40u; f_8030BE30(c); // 800F1D3C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F1D40
  c->r[3]=c->r[31]|c->r[31]; // 800F1D44
  c->lr=0x800F1D4Cu; f_8030BD1C(c); // 800F1D48
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F1D4C
  c->r[3]=c->r[31]|c->r[31]; // 800F1D50
  c->r[4]=0u+0x00000000u; // 800F1D54
  c->lr=0x800F1D5Cu; f_8030BE30(c); // 800F1D58
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F1D5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1D64
  c->lr=c->r[0]; // 800F1D68
  c->r[1]=c->r[1]+0x00000010u; // 800F1D6C
  return; // 800F1D70
}

// fn_800F1D74
void f_800F1D74(Ctx* __restrict c) {
  trace_call(0x800F1D74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1D74
  c->r[0]=c->lr; // 800F1D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1D7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1D80
  c->r[30]=c->r[3]|c->r[3]; // 800F1D84
  c->r[31]=c->r[4]|c->r[4]; // 800F1D88
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F1D8C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F1D90
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F1D94
  c->r[3]=c->r[4]+0x00000030u; // 800F1D98
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F1D9C
  c->r[4]=c->r[30]+0x00000030u; // 800F1DA0
  c->lr=0x800F1DA8u; f_8003AB48(c); // 800F1DA4
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F1DA8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F1DAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1DB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1DB4
  c->lr=c->r[0]; // 800F1DB8
  c->r[1]=c->r[1]+0x00000010u; // 800F1DBC
  return; // 800F1DC0
}

// fn_800F1DC4
void f_800F1DC4(Ctx* __restrict c) {
  trace_call(0x800F1DC4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1DC4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1DC8
  c->ctr=c->r[12]; // 800F1DCC
  if (true) { dispatch(c,c->ctr); return; } // 800F1DD0
}

// fn_800F1DD4
void f_800F1DD4(Ctx* __restrict c) {
  trace_call(0x800F1DD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1DD4
  c->r[0]=c->lr; // 800F1DD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1DDC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1DE0
  c->r[29]=c->r[3]|c->r[3]; // 800F1DE4
  c->r[30]=c->r[4]|c->r[4]; // 800F1DE8
  c->r[31]=c->r[5]|c->r[5]; // 800F1DEC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F1DF0
  cmps(c,0,(int32_t)c->r[0],7); // 800F1DF4
  if (!crb(c,0)) { goto L_800F1E08; } // 800F1DF8
  c->r[4]=c->r[31]|c->r[31]; // 800F1DFC
  c->r[3]=c->r[3]+0x00000030u; // 800F1E00
  c->lr=0x800F1E08u; f_8003A994(c); // 800F1E04
L_800F1E08:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F1E08
  c->r[3]=c->r[29]|c->r[29]; // 800F1E0C
  c->r[4]=c->r[30]|c->r[30]; // 800F1E10
  c->r[5]=c->r[31]|c->r[31]; // 800F1E14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F1E18
  c->ctr=c->r[12]; // 800F1E1C
  if (true) { c->lr=0x800F1E24u; dispatch(c,c->ctr); } // 800F1E20
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1E24
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1E28
  c->lr=c->r[0]; // 800F1E2C
  c->r[1]=c->r[1]+0x00000020u; // 800F1E30
  return; // 800F1E34
}

// fn_800F1E38
void f_800F1E38(Ctx* __restrict c) {
  trace_call(0x800F1E38u);
  c->r[3]=0u+0x80410000u; // 800F1E38
  c->r[3]=c->r[3]+0xFFFFE8B5u; // 800F1E3C
  return; // 800F1E40
}

// fn_800F1E44
void f_800F1E44(Ctx* __restrict c) {
  trace_call(0x800F1E44u);
  c->r[3]=0u+0x00000040u; // 800F1E44
  return; // 800F1E48
}

// fn_800F1E4C
void f_800F1E4C(Ctx* __restrict c) {
  trace_call(0x800F1E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1E4C
  c->r[0]=c->lr; // 800F1E50
  c->r[3]=0u+0x00000040u; // 800F1E54
  c->r[4]=c->r[13]+0xFFFFBA4Eu; // 800F1E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1E5C
  c->r[5]=0u+0x00000000u; // 800F1E60
  c->r[6]=0u+0x00001001u; // 800F1E64
  c->lr=0x800F1E6Cu; f_80244D20(c); // 800F1E68
  cmps(c,0,(int32_t)c->r[3],0); // 800F1E6C
  if (crb(c,2)) { goto L_800F1E78; } // 800F1E70
  c->lr=0x800F1E78u; f_800F1CC8(c); // 800F1E74
L_800F1E78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1E78
  c->lr=c->r[0]; // 800F1E7C
  c->r[1]=c->r[1]+0x00000010u; // 800F1E80
  return; // 800F1E84
}

// fn_800F1E88
void f_800F1E88(Ctx* __restrict c) {
  trace_call(0x800F1E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1E88
  c->r[0]=c->lr; // 800F1E8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1E90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1E94
  c->r[31]=c->r[3]|c->r[3]; // 800F1E98
  c->lr=0x800F1EA0u; f_800D7120(c); // 800F1E9C
  c->r[5]=0u+0x80410000u; // 800F1EA0
  c->r[3]=0u+0x2CC40000u; // 800F1EA4
  c->r[0]=c->r[3]+0xFFFFE663u; // 800F1EA8
  c->r[4]=0u+0x00000000u; // 800F1EAC
  c->r[5]=c->r[5]+0x00004B6Cu; // 800F1EB0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F1EB4
  c->r[3]=c->r[31]|c->r[31]; // 800F1EB8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F1EBC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F1EC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1EC8
  c->lr=c->r[0]; // 800F1ECC
  c->r[1]=c->r[1]+0x00000010u; // 800F1ED0
  return; // 800F1ED4
}

// fn_800F1ED8
void f_800F1ED8(Ctx* __restrict c) {
  trace_call(0x800F1ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1ED8
  c->r[0]=c->lr; // 800F1EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1EE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1EE4
  c->r[30]=c->r[3]|c->r[3]; // 800F1EE8
  c->r[31]=c->r[4]|c->r[4]; // 800F1EEC
  c->lr=0x800F1EF4u; f_8030D728(c); // 800F1EF0
  c->r[0]=0u+0x00000000u; // 800F1EF4
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800F1EF8
  c->r[3]=c->r[31]|c->r[31]; // 800F1EFC
  c->r[4]=0u+0x00000000u; // 800F1F00
  c->lr=0x800F1F08u; f_8030BE30(c); // 800F1F04
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F1F08
  c->r[3]=c->r[31]|c->r[31]; // 800F1F0C
  c->lr=0x800F1F14u; f_8030BD1C(c); // 800F1F10
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F1F14
  c->r[3]=c->r[31]|c->r[31]; // 800F1F18
  c->lr=0x800F1F20u; f_8030BD1C(c); // 800F1F1C
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F1F20
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800F1F24
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800F1F28
  c->r[3]=c->r[31]|c->r[31]; // 800F1F2C
  c->lr=0x800F1F34u; f_8030BD1C(c); // 800F1F30
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F1F34
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800F1F38
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800F1F3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1F40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1F44
  c->lr=c->r[0]; // 800F1F48
  c->r[1]=c->r[1]+0x00000010u; // 800F1F4C
  return; // 800F1F50
}

// fn_800F1F54
void f_800F1F54(Ctx* __restrict c) {
  trace_call(0x800F1F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1F54
  c->r[0]=c->lr; // 800F1F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1F5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1F60
  c->r[30]=c->r[3]|c->r[3]; // 800F1F64
  c->r[31]=c->r[4]|c->r[4]; // 800F1F68
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F1F6C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F1F70
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F1F74
  c->r[3]=c->r[4]+0x00000030u; // 800F1F78
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F1F7C
  c->r[4]=c->r[30]+0x00000030u; // 800F1F80
  c->lr=0x800F1F88u; f_8003AB48(c); // 800F1F84
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F1F88
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F1F8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F1F90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1F94
  c->lr=c->r[0]; // 800F1F98
  c->r[1]=c->r[1]+0x00000010u; // 800F1F9C
  return; // 800F1FA0
}

// fn_800F1FA4
void f_800F1FA4(Ctx* __restrict c) {
  trace_call(0x800F1FA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F1FA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F1FA8
  c->ctr=c->r[12]; // 800F1FAC
  if (true) { dispatch(c,c->ctr); return; } // 800F1FB0
}

// fn_800F1FB4
void f_800F1FB4(Ctx* __restrict c) {
  trace_call(0x800F1FB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1FB4
  c->r[0]=c->lr; // 800F1FB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1FBC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F1FC0
  c->r[29]=c->r[3]|c->r[3]; // 800F1FC4
  c->r[30]=c->r[4]|c->r[4]; // 800F1FC8
  c->r[31]=c->r[5]|c->r[5]; // 800F1FCC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F1FD0
  cmps(c,0,(int32_t)c->r[0],7); // 800F1FD4
  if (!crb(c,0)) { goto L_800F1FE8; } // 800F1FD8
  c->r[4]=c->r[31]|c->r[31]; // 800F1FDC
  c->r[3]=c->r[3]+0x00000030u; // 800F1FE0
  c->lr=0x800F1FE8u; f_8003A994(c); // 800F1FE4
L_800F1FE8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F1FE8
  c->r[3]=c->r[29]|c->r[29]; // 800F1FEC
  c->r[4]=c->r[30]|c->r[30]; // 800F1FF0
  c->r[5]=c->r[31]|c->r[31]; // 800F1FF4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F1FF8
  c->ctr=c->r[12]; // 800F1FFC
  if (true) { c->lr=0x800F2004u; dispatch(c,c->ctr); } // 800F2000
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2004
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2008
  c->lr=c->r[0]; // 800F200C
  c->r[1]=c->r[1]+0x00000020u; // 800F2010
  return; // 800F2014
}

// fn_800F2018
void f_800F2018(Ctx* __restrict c) {
  trace_call(0x800F2018u);
  c->r[3]=0u+0x80410000u; // 800F2018
  c->r[3]=c->r[3]+0xFFFFE8CAu; // 800F201C
  return; // 800F2020
}

// fn_800F2024
void f_800F2024(Ctx* __restrict c) {
  trace_call(0x800F2024u);
  c->r[3]=0u+0x00000040u; // 800F2024
  return; // 800F2028
}

// fn_800F202C
void f_800F202C(Ctx* __restrict c) {
  trace_call(0x800F202Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F202C
  c->r[0]=c->lr; // 800F2030
  c->r[3]=0u+0x00000040u; // 800F2034
  c->r[4]=c->r[13]+0xFFFFBA53u; // 800F2038
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F203C
  c->r[5]=0u+0x00000000u; // 800F2040
  c->r[6]=0u+0x00001001u; // 800F2044
  c->lr=0x800F204Cu; f_80244D20(c); // 800F2048
  cmps(c,0,(int32_t)c->r[3],0); // 800F204C
  if (crb(c,2)) { goto L_800F2058; } // 800F2050
  c->lr=0x800F2058u; f_800F1E88(c); // 800F2054
L_800F2058:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2058
  c->lr=c->r[0]; // 800F205C
  c->r[1]=c->r[1]+0x00000010u; // 800F2060
  return; // 800F2064
}

// fn_800F2068
void f_800F2068(Ctx* __restrict c) {
  trace_call(0x800F2068u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2068
  c->r[0]=c->lr; // 800F206C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2070
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2074
  c->r[31]=c->r[3]|c->r[3]; // 800F2078
  c->lr=0x800F2080u; f_800D7120(c); // 800F207C
  c->r[5]=0u+0x80410000u; // 800F2080
  c->r[3]=0u+0x32370000u; // 800F2084
  c->r[0]=c->r[3]+0xFFFF8A95u; // 800F2088
  c->r[4]=0u+0x00000000u; // 800F208C
  c->r[5]=c->r[5]+0x00004B38u; // 800F2090
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F2094
  c->r[3]=c->r[31]|c->r[31]; // 800F2098
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F209C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F20A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F20A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F20A8
  c->lr=c->r[0]; // 800F20AC
  c->r[1]=c->r[1]+0x00000010u; // 800F20B0
  return; // 800F20B4
}

// fn_800F20B8
void f_800F20B8(Ctx* __restrict c) {
  trace_call(0x800F20B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F20B8
  c->r[0]=c->lr; // 800F20BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F20C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F20C4
  c->r[30]=c->r[3]|c->r[3]; // 800F20C8
  c->r[31]=c->r[4]|c->r[4]; // 800F20CC
  c->lr=0x800F20D4u; f_8030D728(c); // 800F20D0
  c->r[3]=c->r[31]|c->r[31]; // 800F20D4
  c->r[4]=0u+0x00000000u; // 800F20D8
  c->lr=0x800F20E0u; f_8030BE30(c); // 800F20DC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F20E0
  c->r[3]=c->r[31]|c->r[31]; // 800F20E4
  c->lr=0x800F20ECu; f_8030BD1C(c); // 800F20E8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F20EC
  c->r[3]=c->r[31]|c->r[31]; // 800F20F0
  c->lr=0x800F20F8u; f_8030BD1C(c); // 800F20F4
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F20F8
  c->r[3]=c->r[31]|c->r[31]; // 800F20FC
  c->lr=0x800F2104u; f_8030BD1C(c); // 800F2100
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800F2104
  c->r[3]=c->r[31]|c->r[31]; // 800F2108
  c->lr=0x800F2110u; f_8030C0A0(c); // 800F210C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F2110
  c->r[3]=c->r[31]|c->r[31]; // 800F2114
  c->lr=0x800F211Cu; f_8030C0A0(c); // 800F2118
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F211C
  c->r[3]=c->r[31]|c->r[31]; // 800F2120
  c->lr=0x800F2128u; f_8030BD1C(c); // 800F2124
  W32(c->r[30]+0x00000048u,c->r[3]); // 800F2128
  c->r[3]=c->r[31]|c->r[31]; // 800F212C
  c->lr=0x800F2134u; f_8030BD1C(c); // 800F2130
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800F2134
  c->r[3]=c->r[31]|c->r[31]; // 800F2138
  c->lr=0x800F2140u; f_8030BD1C(c); // 800F213C
  W8(c->r[30]+0x00000050u,c->r[3]); // 800F2140
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2144
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2148
  c->lr=c->r[0]; // 800F214C
  c->r[1]=c->r[1]+0x00000010u; // 800F2150
  return; // 800F2154
}

// fn_800F2158
void f_800F2158(Ctx* __restrict c) {
  trace_call(0x800F2158u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2158
  c->r[0]=c->lr; // 800F215C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2164
  c->r[31]=c->r[4]|c->r[4]; // 800F2168
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F216C
  c->r[30]=c->r[3]|c->r[3]; // 800F2170
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F2174
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F2178
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F217C
  c->r[3]=c->r[4]+0x00000030u; // 800F2180
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F2184
  c->r[4]=c->r[30]+0x00000030u; // 800F2188
  c->lr=0x800F2190u; f_8003AB48(c); // 800F218C
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F2190
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F2194
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800F2198
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800F219C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F21A0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F21A4
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F21A8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F21AC
  c->r[0]=R32(c->r[30]+0x00000048u); // 800F21B0
  W32(c->r[31]+0x00000048u,c->r[0]); // 800F21B4
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F21B8
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800F21BC
  c->r[0]=R8(c->r[30]+0x00000050u); // 800F21C0
  W8(c->r[31]+0x00000050u,c->r[0]); // 800F21C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F21C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F21CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F21D0
  c->lr=c->r[0]; // 800F21D4
  c->r[1]=c->r[1]+0x00000010u; // 800F21D8
  return; // 800F21DC
}

// fn_800F21E0
void f_800F21E0(Ctx* __restrict c) {
  trace_call(0x800F21E0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F21E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F21E4
  c->ctr=c->r[12]; // 800F21E8
  if (true) { dispatch(c,c->ctr); return; } // 800F21EC
}

// fn_800F21F0
void f_800F21F0(Ctx* __restrict c) {
  trace_call(0x800F21F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F21F0
  c->r[0]=c->lr; // 800F21F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F21F8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F21FC
  c->r[29]=c->r[3]|c->r[3]; // 800F2200
  c->r[30]=c->r[4]|c->r[4]; // 800F2204
  c->r[31]=c->r[5]|c->r[5]; // 800F2208
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F220C
  cmps(c,0,(int32_t)c->r[0],7); // 800F2210
  if (!crb(c,0)) { goto L_800F2224; } // 800F2214
  c->r[4]=c->r[31]|c->r[31]; // 800F2218
  c->r[3]=c->r[3]+0x00000030u; // 800F221C
  c->lr=0x800F2224u; f_8003A994(c); // 800F2220
L_800F2224:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F2224
  c->r[3]=c->r[29]|c->r[29]; // 800F2228
  c->r[4]=c->r[30]|c->r[30]; // 800F222C
  c->r[5]=c->r[31]|c->r[31]; // 800F2230
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F2234
  c->ctr=c->r[12]; // 800F2238
  if (true) { c->lr=0x800F2240u; dispatch(c,c->ctr); } // 800F223C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2240
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2244
  c->lr=c->r[0]; // 800F2248
  c->r[1]=c->r[1]+0x00000020u; // 800F224C
  return; // 800F2250
}

// fn_800F2254
void f_800F2254(Ctx* __restrict c) {
  trace_call(0x800F2254u);
  c->r[3]=0u+0x80410000u; // 800F2254
  c->r[3]=c->r[3]+0xFFFFE8D5u; // 800F2258
  return; // 800F225C
}

// fn_800F2260
void f_800F2260(Ctx* __restrict c) {
  trace_call(0x800F2260u);
  c->r[3]=0u+0x00000054u; // 800F2260
  return; // 800F2264
}

// fn_800F2268
void f_800F2268(Ctx* __restrict c) {
  trace_call(0x800F2268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2268
  c->r[0]=c->lr; // 800F226C
  c->r[3]=0u+0x00000054u; // 800F2270
  c->r[4]=c->r[13]+0xFFFFBA58u; // 800F2274
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2278
  c->r[5]=0u+0x00000000u; // 800F227C
  c->r[6]=0u+0x00001001u; // 800F2280
  c->lr=0x800F2288u; f_80244D20(c); // 800F2284
  cmps(c,0,(int32_t)c->r[3],0); // 800F2288
  if (crb(c,2)) { goto L_800F2294; } // 800F228C
  c->lr=0x800F2294u; f_800F2068(c); // 800F2290
L_800F2294:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2294
  c->lr=c->r[0]; // 800F2298
  c->r[1]=c->r[1]+0x00000010u; // 800F229C
  return; // 800F22A0
}

// fn_800F22A4
void f_800F22A4(Ctx* __restrict c) {
  trace_call(0x800F22A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F22A4
  c->r[0]=c->lr; // 800F22A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F22AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F22B0
  c->r[31]=c->r[3]|c->r[3]; // 800F22B4
  c->lr=0x800F22BCu; f_800D7120(c); // 800F22B8
  c->r[5]=0u+0x80410000u; // 800F22BC
  c->r[3]=0u+0x3E530000u; // 800F22C0
  c->r[0]=c->r[3]+0xFFFFFE6Fu; // 800F22C4
  c->r[4]=0u+0x00000000u; // 800F22C8
  c->r[5]=c->r[5]+0x00004B04u; // 800F22CC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F22D0
  c->r[3]=c->r[31]|c->r[31]; // 800F22D4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F22D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F22DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F22E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F22E4
  c->lr=c->r[0]; // 800F22E8
  c->r[1]=c->r[1]+0x00000010u; // 800F22EC
  return; // 800F22F0
}

// fn_800F22F4
void f_800F22F4(Ctx* __restrict c) {
  trace_call(0x800F22F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F22F4
  c->r[0]=c->lr; // 800F22F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F22FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2300
  c->r[30]=c->r[3]|c->r[3]; // 800F2304
  c->r[31]=c->r[4]|c->r[4]; // 800F2308
  c->lr=0x800F2310u; f_8030D728(c); // 800F230C
  c->r[3]=c->r[31]|c->r[31]; // 800F2310
  c->r[4]=0u+0x00000000u; // 800F2314
  c->lr=0x800F231Cu; f_8030BE30(c); // 800F2318
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F231C
  c->r[3]=c->r[31]|c->r[31]; // 800F2320
  c->lr=0x800F2328u; f_8030BD1C(c); // 800F2324
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F2328
  c->r[3]=c->r[31]|c->r[31]; // 800F232C
  c->lr=0x800F2334u; f_8030C0A0(c); // 800F2330
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F2334
  c->r[3]=c->r[31]|c->r[31]; // 800F2338
  c->lr=0x800F2340u; f_8030C0A0(c); // 800F233C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F2340
  c->r[3]=c->r[31]|c->r[31]; // 800F2344
  c->lr=0x800F234Cu; f_8030C0A0(c); // 800F2348
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F234C
  c->r[3]=c->r[31]|c->r[31]; // 800F2350
  c->lr=0x800F2358u; f_8030C0A0(c); // 800F2354
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800F2358
  c->r[3]=c->r[31]|c->r[31]; // 800F235C
  c->lr=0x800F2364u; f_8030BD1C(c); // 800F2360
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800F2364
  c->r[3]=c->r[31]|c->r[31]; // 800F2368
  c->lr=0x800F2370u; f_8030BD1C(c); // 800F236C
  W32(c->r[30]+0x00000050u,c->r[3]); // 800F2370
  c->r[3]=c->r[31]|c->r[31]; // 800F2374
  c->lr=0x800F237Cu; f_8030BD1C(c); // 800F2378
  W8(c->r[30]+0x00000054u,c->r[3]); // 800F237C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2380
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2384
  c->lr=c->r[0]; // 800F2388
  c->r[1]=c->r[1]+0x00000010u; // 800F238C
  return; // 800F2390
}

// fn_800F2394
void f_800F2394(Ctx* __restrict c) {
  trace_call(0x800F2394u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2394
  c->r[0]=c->lr; // 800F2398
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F239C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F23A0
  c->r[31]=c->r[4]|c->r[4]; // 800F23A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F23A8
  c->r[30]=c->r[3]|c->r[3]; // 800F23AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F23B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F23B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F23B8
  c->r[3]=c->r[4]+0x00000030u; // 800F23BC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F23C0
  c->r[4]=c->r[30]+0x00000030u; // 800F23C4
  c->lr=0x800F23CCu; f_8003AB48(c); // 800F23C8
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F23CC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F23D0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F23D4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F23D8
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F23DC
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F23E0
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F23E4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800F23E8
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F23EC
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800F23F0
  c->r[0]=R32(c->r[30]+0x00000050u); // 800F23F4
  W32(c->r[31]+0x00000050u,c->r[0]); // 800F23F8
  c->r[0]=R8(c->r[30]+0x00000054u); // 800F23FC
  W8(c->r[31]+0x00000054u,c->r[0]); // 800F2400
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2404
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2408
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F240C
  c->lr=c->r[0]; // 800F2410
  c->r[1]=c->r[1]+0x00000010u; // 800F2414
  return; // 800F2418
}

// fn_800F241C
void f_800F241C(Ctx* __restrict c) {
  trace_call(0x800F241Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F241C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F2420
  c->ctr=c->r[12]; // 800F2424
  if (true) { dispatch(c,c->ctr); return; } // 800F2428
}

// fn_800F242C
void f_800F242C(Ctx* __restrict c) {
  trace_call(0x800F242Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F242C
  c->r[0]=c->lr; // 800F2430
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2434
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2438
  c->r[29]=c->r[3]|c->r[3]; // 800F243C
  c->r[30]=c->r[4]|c->r[4]; // 800F2440
  c->r[31]=c->r[5]|c->r[5]; // 800F2444
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F2448
  cmps(c,0,(int32_t)c->r[0],7); // 800F244C
  if (!crb(c,0)) { goto L_800F2460; } // 800F2450
  c->r[4]=c->r[31]|c->r[31]; // 800F2454
  c->r[3]=c->r[3]+0x00000030u; // 800F2458
  c->lr=0x800F2460u; f_8003A994(c); // 800F245C
L_800F2460:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F2460
  c->r[3]=c->r[29]|c->r[29]; // 800F2464
  c->r[4]=c->r[30]|c->r[30]; // 800F2468
  c->r[5]=c->r[31]|c->r[31]; // 800F246C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F2470
  c->ctr=c->r[12]; // 800F2474
  if (true) { c->lr=0x800F247Cu; dispatch(c,c->ctr); } // 800F2478
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F247C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2480
  c->lr=c->r[0]; // 800F2484
  c->r[1]=c->r[1]+0x00000020u; // 800F2488
  return; // 800F248C
}

// fn_800F2490
void f_800F2490(Ctx* __restrict c) {
  trace_call(0x800F2490u);
  c->r[3]=0u+0x80410000u; // 800F2490
  c->r[3]=c->r[3]+0xFFFFE8E2u; // 800F2494
  return; // 800F2498
}

// fn_800F249C
void f_800F249C(Ctx* __restrict c) {
  trace_call(0x800F249Cu);
  c->r[3]=0u+0x00000058u; // 800F249C
  return; // 800F24A0
}

// fn_800F24A4
void f_800F24A4(Ctx* __restrict c) {
  trace_call(0x800F24A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F24A4
  c->r[0]=c->lr; // 800F24A8
  c->r[3]=0u+0x00000058u; // 800F24AC
  c->r[4]=c->r[13]+0xFFFFBA5Du; // 800F24B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F24B4
  c->r[5]=0u+0x00000000u; // 800F24B8
  c->r[6]=0u+0x00001001u; // 800F24BC
  c->lr=0x800F24C4u; f_80244D20(c); // 800F24C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F24C4
  if (crb(c,2)) { goto L_800F24D0; } // 800F24C8
  c->lr=0x800F24D0u; f_800F22A4(c); // 800F24CC
L_800F24D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F24D0
  c->lr=c->r[0]; // 800F24D4
  c->r[1]=c->r[1]+0x00000010u; // 800F24D8
  return; // 800F24DC
}

// fn_800F24E0
void f_800F24E0(Ctx* __restrict c) {
  trace_call(0x800F24E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F24E0
  c->r[0]=c->lr; // 800F24E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F24E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F24EC
  c->r[31]=c->r[3]|c->r[3]; // 800F24F0
  c->lr=0x800F24F8u; f_800D7120(c); // 800F24F4
  c->r[5]=0u+0x80410000u; // 800F24F8
  c->r[3]=0u+0x17290000u; // 800F24FC
  c->r[0]=c->r[3]+0x00004F21u; // 800F2500
  c->r[4]=0u+0x00000000u; // 800F2504
  c->r[5]=c->r[5]+0x00004AD0u; // 800F2508
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F250C
  c->r[3]=c->r[31]|c->r[31]; // 800F2510
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F2514
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F2518
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F251C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2520
  c->lr=c->r[0]; // 800F2524
  c->r[1]=c->r[1]+0x00000010u; // 800F2528
  return; // 800F252C
}

// fn_800F2530
void f_800F2530(Ctx* __restrict c) {
  trace_call(0x800F2530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2530
  c->r[0]=c->lr; // 800F2534
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2538
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F253C
  c->r[30]=c->r[3]|c->r[3]; // 800F2540
  c->r[31]=c->r[4]|c->r[4]; // 800F2544
  c->lr=0x800F254Cu; f_8030D728(c); // 800F2548
  c->r[3]=c->r[31]|c->r[31]; // 800F254C
  c->r[4]=0u+0x00000000u; // 800F2550
  c->lr=0x800F2558u; f_8030BE30(c); // 800F2554
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F2558
  c->r[3]=c->r[31]|c->r[31]; // 800F255C
  c->lr=0x800F2564u; f_8030BD1C(c); // 800F2560
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F2564
  c->r[3]=c->r[31]|c->r[31]; // 800F2568
  c->lr=0x800F2570u; f_8030BD1C(c); // 800F256C
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F2570
  c->r[3]=c->r[31]|c->r[31]; // 800F2574
  c->lr=0x800F257Cu; f_8030BD1C(c); // 800F2578
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800F257C
  c->r[3]=c->r[31]|c->r[31]; // 800F2580
  c->lr=0x800F2588u; f_8030BD1C(c); // 800F2584
  W8(c->r[30]+0x0000003Eu,c->r[3]); // 800F2588
  c->r[3]=c->r[31]|c->r[31]; // 800F258C
  c->lr=0x800F2594u; f_8030BD1C(c); // 800F2590
  W8(c->r[30]+0x0000003Fu,c->r[3]); // 800F2594
  c->r[3]=c->r[31]|c->r[31]; // 800F2598
  c->lr=0x800F25A0u; f_8030BD1C(c); // 800F259C
  W8(c->r[30]+0x00000040u,c->r[3]); // 800F25A0
  c->r[3]=c->r[31]|c->r[31]; // 800F25A4
  c->lr=0x800F25ACu; f_8030BD1C(c); // 800F25A8
  W8(c->r[30]+0x00000041u,c->r[3]); // 800F25AC
  c->r[3]=c->r[31]|c->r[31]; // 800F25B0
  c->lr=0x800F25B8u; f_8030BD1C(c); // 800F25B4
  W8(c->r[30]+0x00000042u,c->r[3]); // 800F25B8
  c->r[3]=c->r[31]|c->r[31]; // 800F25BC
  c->lr=0x800F25C4u; f_8030BD1C(c); // 800F25C0
  W8(c->r[30]+0x00000043u,c->r[3]); // 800F25C4
  c->r[3]=c->r[31]|c->r[31]; // 800F25C8
  c->lr=0x800F25D0u; f_8030C0A0(c); // 800F25CC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F25D0
  c->r[3]=c->r[31]|c->r[31]; // 800F25D4
  c->lr=0x800F25DCu; f_8030C0A0(c); // 800F25D8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800F25DC
  c->r[3]=c->r[31]|c->r[31]; // 800F25E0
  c->lr=0x800F25E8u; f_8030BD1C(c); // 800F25E4
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800F25E8
  c->r[3]=c->r[31]|c->r[31]; // 800F25EC
  c->lr=0x800F25F4u; f_8030BD1C(c); // 800F25F0
  W32(c->r[30]+0x00000050u,c->r[3]); // 800F25F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F25F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F25FC
  c->lr=c->r[0]; // 800F2600
  c->r[1]=c->r[1]+0x00000010u; // 800F2604
  return; // 800F2608
}

// fn_800F260C
void f_800F260C(Ctx* __restrict c) {
  trace_call(0x800F260Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F260C
  c->r[0]=c->lr; // 800F2610
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2614
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2618
  c->r[31]=c->r[4]|c->r[4]; // 800F261C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2620
  c->r[30]=c->r[3]|c->r[3]; // 800F2624
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F2628
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F262C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F2630
  c->r[3]=c->r[4]+0x00000030u; // 800F2634
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F2638
  c->r[4]=c->r[30]+0x00000030u; // 800F263C
  c->lr=0x800F2644u; f_8003AB48(c); // 800F2640
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F2644
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F2648
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800F264C
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800F2650
  c->r[0]=R8(c->r[30]+0x0000003Eu); // 800F2654
  W8(c->r[31]+0x0000003Eu,c->r[0]); // 800F2658
  c->r[0]=R8(c->r[30]+0x0000003Fu); // 800F265C
  W8(c->r[31]+0x0000003Fu,c->r[0]); // 800F2660
  c->r[0]=R8(c->r[30]+0x00000040u); // 800F2664
  W8(c->r[31]+0x00000040u,c->r[0]); // 800F2668
  c->r[0]=R8(c->r[30]+0x00000041u); // 800F266C
  W8(c->r[31]+0x00000041u,c->r[0]); // 800F2670
  c->r[0]=R8(c->r[30]+0x00000042u); // 800F2674
  W8(c->r[31]+0x00000042u,c->r[0]); // 800F2678
  c->r[0]=R8(c->r[30]+0x00000043u); // 800F267C
  W8(c->r[31]+0x00000043u,c->r[0]); // 800F2680
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2684
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F2688
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F268C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800F2690
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F2694
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800F2698
  c->r[0]=R32(c->r[30]+0x00000050u); // 800F269C
  W32(c->r[31]+0x00000050u,c->r[0]); // 800F26A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F26A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F26A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F26AC
  c->lr=c->r[0]; // 800F26B0
  c->r[1]=c->r[1]+0x00000010u; // 800F26B4
  return; // 800F26B8
}

// fn_800F26BC
void f_800F26BC(Ctx* __restrict c) {
  trace_call(0x800F26BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F26BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F26C0
  c->ctr=c->r[12]; // 800F26C4
  if (true) { dispatch(c,c->ctr); return; } // 800F26C8
}

// fn_800F26CC
void f_800F26CC(Ctx* __restrict c) {
  trace_call(0x800F26CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F26CC
  c->r[0]=c->lr; // 800F26D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F26D4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F26D8
  c->r[29]=c->r[3]|c->r[3]; // 800F26DC
  c->r[30]=c->r[4]|c->r[4]; // 800F26E0
  c->r[31]=c->r[5]|c->r[5]; // 800F26E4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F26E8
  cmps(c,0,(int32_t)c->r[0],7); // 800F26EC
  if (!crb(c,0)) { goto L_800F2700; } // 800F26F0
  c->r[4]=c->r[31]|c->r[31]; // 800F26F4
  c->r[3]=c->r[3]+0x00000030u; // 800F26F8
  c->lr=0x800F2700u; f_8003A994(c); // 800F26FC
L_800F2700:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F2700
  c->r[3]=c->r[29]|c->r[29]; // 800F2704
  c->r[4]=c->r[30]|c->r[30]; // 800F2708
  c->r[5]=c->r[31]|c->r[31]; // 800F270C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F2710
  c->ctr=c->r[12]; // 800F2714
  if (true) { c->lr=0x800F271Cu; dispatch(c,c->ctr); } // 800F2718
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F271C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2720
  c->lr=c->r[0]; // 800F2724
  c->r[1]=c->r[1]+0x00000020u; // 800F2728
  return; // 800F272C
}

// fn_800F2730
void f_800F2730(Ctx* __restrict c) {
  trace_call(0x800F2730u);
  c->r[3]=0u+0x80410000u; // 800F2730
  c->r[3]=c->r[3]+0xFFFFE8F8u; // 800F2734
  return; // 800F2738
}

// fn_800F273C
void f_800F273C(Ctx* __restrict c) {
  trace_call(0x800F273Cu);
  c->r[3]=0u+0x00000054u; // 800F273C
  return; // 800F2740
}

// fn_800F2744
void f_800F2744(Ctx* __restrict c) {
  trace_call(0x800F2744u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2744
  c->r[0]=c->lr; // 800F2748
  c->r[3]=0u+0x00000054u; // 800F274C
  c->r[4]=c->r[13]+0xFFFFBA62u; // 800F2750
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2754
  c->r[5]=0u+0x00000000u; // 800F2758
  c->r[6]=0u+0x00001001u; // 800F275C
  c->lr=0x800F2764u; f_80244D20(c); // 800F2760
  cmps(c,0,(int32_t)c->r[3],0); // 800F2764
  if (crb(c,2)) { goto L_800F2770; } // 800F2768
  c->lr=0x800F2770u; f_800F24E0(c); // 800F276C
L_800F2770:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2770
  c->lr=c->r[0]; // 800F2774
  c->r[1]=c->r[1]+0x00000010u; // 800F2778
  return; // 800F277C
}

// fn_800F2780
void f_800F2780(Ctx* __restrict c) {
  trace_call(0x800F2780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2780
  c->r[0]=c->lr; // 800F2784
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F278C
  c->r[31]=c->r[3]|c->r[3]; // 800F2790
  c->lr=0x800F2798u; f_800D7120(c); // 800F2794
  c->r[5]=0u+0x80410000u; // 800F2798
  c->r[3]=0u+0x45F00000u; // 800F279C
  c->r[0]=c->r[3]+0xFFFFE4BEu; // 800F27A0
  c->r[4]=0u+0x00000000u; // 800F27A4
  c->r[5]=c->r[5]+0x00004A9Cu; // 800F27A8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F27AC
  c->r[3]=c->r[31]|c->r[31]; // 800F27B0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F27B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F27B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F27BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F27C0
  c->lr=c->r[0]; // 800F27C4
  c->r[1]=c->r[1]+0x00000010u; // 800F27C8
  return; // 800F27CC
}

// fn_800F27D0
void f_800F27D0(Ctx* __restrict c) {
  trace_call(0x800F27D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F27D0
  c->r[0]=c->lr; // 800F27D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F27D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F27DC
  c->r[30]=c->r[3]|c->r[3]; // 800F27E0
  c->r[31]=c->r[4]|c->r[4]; // 800F27E4
  c->lr=0x800F27ECu; f_8030D728(c); // 800F27E8
  c->r[3]=c->r[31]|c->r[31]; // 800F27EC
  c->r[4]=0u+0x00000000u; // 800F27F0
  c->lr=0x800F27F8u; f_8030BE30(c); // 800F27F4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F27F8
  c->r[3]=c->r[31]|c->r[31]; // 800F27FC
  c->lr=0x800F2804u; f_8030BD1C(c); // 800F2800
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F2804
  c->r[3]=c->r[31]|c->r[31]; // 800F2808
  c->lr=0x800F2810u; f_8030BD1C(c); // 800F280C
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F2810
  c->r[3]=c->r[31]|c->r[31]; // 800F2814
  c->lr=0x800F281Cu; f_8030C0A0(c); // 800F2818
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F281C
  c->r[3]=c->r[31]|c->r[31]; // 800F2820
  c->lr=0x800F2828u; f_8030BD1C(c); // 800F2824
  W32(c->r[30]+0x00000044u,c->r[3]); // 800F2828
  c->r[3]=c->r[31]|c->r[31]; // 800F282C
  c->lr=0x800F2834u; f_8030BD1C(c); // 800F2830
  W8(c->r[30]+0x00000048u,c->r[3]); // 800F2834
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2838
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F283C
  c->lr=c->r[0]; // 800F2840
  c->r[1]=c->r[1]+0x00000010u; // 800F2844
  return; // 800F2848
}

// fn_800F284C
void f_800F284C(Ctx* __restrict c) {
  trace_call(0x800F284Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F284C
  c->r[0]=c->lr; // 800F2850
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2854
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2858
  c->r[31]=c->r[4]|c->r[4]; // 800F285C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2860
  c->r[30]=c->r[3]|c->r[3]; // 800F2864
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F2868
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F286C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F2870
  c->r[3]=c->r[4]+0x00000030u; // 800F2874
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F2878
  c->r[4]=c->r[30]+0x00000030u; // 800F287C
  c->lr=0x800F2884u; f_8003AB48(c); // 800F2880
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F2884
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F2888
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F288C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F2890
  c->r[0]=R32(c->r[30]+0x00000044u); // 800F2894
  W32(c->r[31]+0x00000044u,c->r[0]); // 800F2898
  c->r[0]=R8(c->r[30]+0x00000048u); // 800F289C
  W8(c->r[31]+0x00000048u,c->r[0]); // 800F28A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F28A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F28A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F28AC
  c->lr=c->r[0]; // 800F28B0
  c->r[1]=c->r[1]+0x00000010u; // 800F28B4
  return; // 800F28B8
}

// fn_800F28BC
void f_800F28BC(Ctx* __restrict c) {
  trace_call(0x800F28BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F28BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F28C0
  c->ctr=c->r[12]; // 800F28C4
  if (true) { dispatch(c,c->ctr); return; } // 800F28C8
}

// fn_800F28CC
void f_800F28CC(Ctx* __restrict c) {
  trace_call(0x800F28CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F28CC
  c->r[0]=c->lr; // 800F28D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F28D4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F28D8
  c->r[29]=c->r[3]|c->r[3]; // 800F28DC
  c->r[30]=c->r[4]|c->r[4]; // 800F28E0
  c->r[31]=c->r[5]|c->r[5]; // 800F28E4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F28E8
  cmps(c,0,(int32_t)c->r[0],7); // 800F28EC
  if (!crb(c,0)) { goto L_800F2900; } // 800F28F0
  c->r[4]=c->r[31]|c->r[31]; // 800F28F4
  c->r[3]=c->r[3]+0x00000030u; // 800F28F8
  c->lr=0x800F2900u; f_8003A994(c); // 800F28FC
L_800F2900:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F2900
  c->r[3]=c->r[29]|c->r[29]; // 800F2904
  c->r[4]=c->r[30]|c->r[30]; // 800F2908
  c->r[5]=c->r[31]|c->r[31]; // 800F290C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F2910
  c->ctr=c->r[12]; // 800F2914
  if (true) { c->lr=0x800F291Cu; dispatch(c,c->ctr); } // 800F2918
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F291C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2920
  c->lr=c->r[0]; // 800F2924
  c->r[1]=c->r[1]+0x00000020u; // 800F2928
  return; // 800F292C
}

// fn_800F2930
void f_800F2930(Ctx* __restrict c) {
  trace_call(0x800F2930u);
  c->r[3]=0u+0x80410000u; // 800F2930
  c->r[3]=c->r[3]+0xFFFFE906u; // 800F2934
  return; // 800F2938
}

// fn_800F293C
void f_800F293C(Ctx* __restrict c) {
  trace_call(0x800F293Cu);
  c->r[3]=0u+0x0000004Cu; // 800F293C
  return; // 800F2940
}

// fn_800F2944
void f_800F2944(Ctx* __restrict c) {
  trace_call(0x800F2944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2944
  c->r[0]=c->lr; // 800F2948
  c->r[3]=0u+0x0000004Cu; // 800F294C
  c->r[4]=c->r[13]+0xFFFFBA67u; // 800F2950
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2954
  c->r[5]=0u+0x00000000u; // 800F2958
  c->r[6]=0u+0x00001001u; // 800F295C
  c->lr=0x800F2964u; f_80244D20(c); // 800F2960
  cmps(c,0,(int32_t)c->r[3],0); // 800F2964
  if (crb(c,2)) { goto L_800F2970; } // 800F2968
  c->lr=0x800F2970u; f_800F2780(c); // 800F296C
L_800F2970:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2970
  c->lr=c->r[0]; // 800F2974
  c->r[1]=c->r[1]+0x00000010u; // 800F2978
  return; // 800F297C
}

// fn_800F2980
void f_800F2980(Ctx* __restrict c) {
  trace_call(0x800F2980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2980
  c->r[0]=c->lr; // 800F2984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F298C
  c->r[31]=c->r[3]|c->r[3]; // 800F2990
  c->lr=0x800F2998u; f_800D7120(c); // 800F2994
  c->r[5]=0u+0x80410000u; // 800F2998
  c->r[3]=0u+0xD4870000u; // 800F299C
  c->r[0]=c->r[3]+0xFFFFA76Cu; // 800F29A0
  c->r[4]=0u+0x00000000u; // 800F29A4
  c->r[5]=c->r[5]+0x00004A68u; // 800F29A8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F29AC
  c->r[3]=c->r[31]|c->r[31]; // 800F29B0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F29B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F29B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F29BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F29C0
  c->lr=c->r[0]; // 800F29C4
  c->r[1]=c->r[1]+0x00000010u; // 800F29C8
  return; // 800F29CC
}

// fn_800F29D0
void f_800F29D0(Ctx* __restrict c) {
  trace_call(0x800F29D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F29D0
  c->r[0]=c->lr; // 800F29D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F29D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F29DC
  c->r[30]=c->r[3]|c->r[3]; // 800F29E0
  c->r[31]=c->r[4]|c->r[4]; // 800F29E4
  c->lr=0x800F29ECu; f_8030D728(c); // 800F29E8
  c->r[3]=c->r[31]|c->r[31]; // 800F29EC
  c->r[4]=0u+0x00000000u; // 800F29F0
  c->lr=0x800F29F8u; f_8030BE30(c); // 800F29F4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F29F8
  c->r[3]=c->r[31]|c->r[31]; // 800F29FC
  c->lr=0x800F2A04u; f_8030BD1C(c); // 800F2A00
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F2A04
  c->r[3]=c->r[31]|c->r[31]; // 800F2A08
  c->lr=0x800F2A10u; f_8030C0A0(c); // 800F2A0C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F2A10
  c->r[3]=c->r[31]|c->r[31]; // 800F2A14
  c->lr=0x800F2A1Cu; f_8030C0A0(c); // 800F2A18
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F2A1C
  c->r[3]=c->r[31]|c->r[31]; // 800F2A20
  c->lr=0x800F2A28u; f_8030BD1C(c); // 800F2A24
  W32(c->r[30]+0x00000044u,c->r[3]); // 800F2A28
  c->r[3]=c->r[31]|c->r[31]; // 800F2A2C
  c->lr=0x800F2A34u; f_8030BD1C(c); // 800F2A30
  W8(c->r[30]+0x00000048u,c->r[3]); // 800F2A34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2A38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2A3C
  c->lr=c->r[0]; // 800F2A40
  c->r[1]=c->r[1]+0x00000010u; // 800F2A44
  return; // 800F2A48
}

// fn_800F2A4C
void f_800F2A4C(Ctx* __restrict c) {
  trace_call(0x800F2A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2A4C
  c->r[0]=c->lr; // 800F2A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2A58
  c->r[31]=c->r[4]|c->r[4]; // 800F2A5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2A60
  c->r[30]=c->r[3]|c->r[3]; // 800F2A64
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F2A68
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F2A6C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F2A70
  c->r[3]=c->r[4]+0x00000030u; // 800F2A74
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F2A78
  c->r[4]=c->r[30]+0x00000030u; // 800F2A7C
  c->lr=0x800F2A84u; f_8003AB48(c); // 800F2A80
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2A84
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F2A88
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2A8C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F2A90
  c->r[0]=R32(c->r[30]+0x00000044u); // 800F2A94
  W32(c->r[31]+0x00000044u,c->r[0]); // 800F2A98
  c->r[0]=R8(c->r[30]+0x00000048u); // 800F2A9C
  W8(c->r[31]+0x00000048u,c->r[0]); // 800F2AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2AA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2AA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2AAC
  c->lr=c->r[0]; // 800F2AB0
  c->r[1]=c->r[1]+0x00000010u; // 800F2AB4
  return; // 800F2AB8
}

// fn_800F2ABC
void f_800F2ABC(Ctx* __restrict c) {
  trace_call(0x800F2ABCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F2ABC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F2AC0
  c->ctr=c->r[12]; // 800F2AC4
  if (true) { dispatch(c,c->ctr); return; } // 800F2AC8
}

// fn_800F2ACC
void f_800F2ACC(Ctx* __restrict c) {
  trace_call(0x800F2ACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2ACC
  c->r[0]=c->lr; // 800F2AD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2AD4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2AD8
  c->r[29]=c->r[3]|c->r[3]; // 800F2ADC
  c->r[30]=c->r[4]|c->r[4]; // 800F2AE0
  c->r[31]=c->r[5]|c->r[5]; // 800F2AE4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F2AE8
  cmps(c,0,(int32_t)c->r[0],7); // 800F2AEC
  if (!crb(c,0)) { goto L_800F2B00; } // 800F2AF0
  c->r[4]=c->r[31]|c->r[31]; // 800F2AF4
  c->r[3]=c->r[3]+0x00000030u; // 800F2AF8
  c->lr=0x800F2B00u; f_8003A994(c); // 800F2AFC
L_800F2B00:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F2B00
  c->r[3]=c->r[29]|c->r[29]; // 800F2B04
  c->r[4]=c->r[30]|c->r[30]; // 800F2B08
  c->r[5]=c->r[31]|c->r[31]; // 800F2B0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F2B10
  c->ctr=c->r[12]; // 800F2B14
  if (true) { c->lr=0x800F2B1Cu; dispatch(c,c->ctr); } // 800F2B18
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2B1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2B20
  c->lr=c->r[0]; // 800F2B24
  c->r[1]=c->r[1]+0x00000020u; // 800F2B28
  return; // 800F2B2C
}

// fn_800F2B30
void f_800F2B30(Ctx* __restrict c) {
  trace_call(0x800F2B30u);
  c->r[3]=0u+0x80410000u; // 800F2B30
  c->r[3]=c->r[3]+0xFFFFE917u; // 800F2B34
  return; // 800F2B38
}

// fn_800F2B3C
void f_800F2B3C(Ctx* __restrict c) {
  trace_call(0x800F2B3Cu);
  c->r[3]=0u+0x0000004Cu; // 800F2B3C
  return; // 800F2B40
}

// fn_800F2B44
void f_800F2B44(Ctx* __restrict c) {
  trace_call(0x800F2B44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2B44
  c->r[0]=c->lr; // 800F2B48
  c->r[3]=0u+0x0000004Cu; // 800F2B4C
  c->r[4]=c->r[13]+0xFFFFBA6Cu; // 800F2B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2B54
  c->r[5]=0u+0x00000000u; // 800F2B58
  c->r[6]=0u+0x00001001u; // 800F2B5C
  c->lr=0x800F2B64u; f_80244D20(c); // 800F2B60
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B64
  if (crb(c,2)) { goto L_800F2B70; } // 800F2B68
  c->lr=0x800F2B70u; f_800F2980(c); // 800F2B6C
L_800F2B70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2B70
  c->lr=c->r[0]; // 800F2B74
  c->r[1]=c->r[1]+0x00000010u; // 800F2B78
  return; // 800F2B7C
}

// fn_800F2B80
void f_800F2B80(Ctx* __restrict c) {
  trace_call(0x800F2B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2B80
  c->r[0]=c->lr; // 800F2B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2B88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2B8C
  c->r[31]=c->r[3]|c->r[3]; // 800F2B90
  c->lr=0x800F2B98u; f_800D7120(c); // 800F2B94
  c->r[5]=0u+0x80410000u; // 800F2B98
  c->r[3]=0u+0xCCDA0000u; // 800F2B9C
  c->r[0]=c->r[3]+0x00004B1Fu; // 800F2BA0
  c->r[4]=0u+0x00000000u; // 800F2BA4
  c->r[5]=c->r[5]+0x00004A34u; // 800F2BA8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F2BAC
  c->r[3]=c->r[31]|c->r[31]; // 800F2BB0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F2BB4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F2BB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2BBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2BC0
  c->lr=c->r[0]; // 800F2BC4
  c->r[1]=c->r[1]+0x00000010u; // 800F2BC8
  return; // 800F2BCC
}

// fn_800F2BD0
void f_800F2BD0(Ctx* __restrict c) {
  trace_call(0x800F2BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2BD0
  c->r[0]=c->lr; // 800F2BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2BD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2BDC
  c->r[30]=c->r[3]|c->r[3]; // 800F2BE0
  c->r[31]=c->r[4]|c->r[4]; // 800F2BE4
  c->lr=0x800F2BECu; f_8030D728(c); // 800F2BE8
  c->r[3]=c->r[31]|c->r[31]; // 800F2BEC
  c->r[4]=0u+0x00000000u; // 800F2BF0
  c->lr=0x800F2BF8u; f_8030BE30(c); // 800F2BF4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F2BF8
  c->r[3]=c->r[31]|c->r[31]; // 800F2BFC
  c->lr=0x800F2C04u; f_8030BD1C(c); // 800F2C00
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F2C04
  c->r[3]=c->r[31]|c->r[31]; // 800F2C08
  c->lr=0x800F2C10u; f_8030BD1C(c); // 800F2C0C
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F2C10
  c->r[3]=c->r[31]|c->r[31]; // 800F2C14
  c->lr=0x800F2C1Cu; f_8030BD1C(c); // 800F2C18
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800F2C1C
  c->r[3]=c->r[31]|c->r[31]; // 800F2C20
  c->lr=0x800F2C28u; f_8030BD1C(c); // 800F2C24
  W8(c->r[30]+0x0000003Eu,c->r[3]); // 800F2C28
  c->r[3]=c->r[31]|c->r[31]; // 800F2C2C
  c->lr=0x800F2C34u; f_8030BD1C(c); // 800F2C30
  W8(c->r[30]+0x0000003Fu,c->r[3]); // 800F2C34
  c->r[3]=c->r[31]|c->r[31]; // 800F2C38
  c->lr=0x800F2C40u; f_8030C0A0(c); // 800F2C3C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F2C40
  c->r[3]=c->r[31]|c->r[31]; // 800F2C44
  c->lr=0x800F2C4Cu; f_8030BD1C(c); // 800F2C48
  W32(c->r[30]+0x00000044u,c->r[3]); // 800F2C4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2C54
  c->lr=c->r[0]; // 800F2C58
  c->r[1]=c->r[1]+0x00000010u; // 800F2C5C
  return; // 800F2C60
}

// fn_800F2C64
void f_800F2C64(Ctx* __restrict c) {
  trace_call(0x800F2C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2C64
  c->r[0]=c->lr; // 800F2C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2C6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2C70
  c->r[31]=c->r[4]|c->r[4]; // 800F2C74
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2C78
  c->r[30]=c->r[3]|c->r[3]; // 800F2C7C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F2C80
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F2C84
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F2C88
  c->r[3]=c->r[4]+0x00000030u; // 800F2C8C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F2C90
  c->r[4]=c->r[30]+0x00000030u; // 800F2C94
  c->lr=0x800F2C9Cu; f_8003AB48(c); // 800F2C98
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F2C9C
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F2CA0
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800F2CA4
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800F2CA8
  c->r[0]=R8(c->r[30]+0x0000003Eu); // 800F2CAC
  W8(c->r[31]+0x0000003Eu,c->r[0]); // 800F2CB0
  c->r[0]=R8(c->r[30]+0x0000003Fu); // 800F2CB4
  W8(c->r[31]+0x0000003Fu,c->r[0]); // 800F2CB8
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2CBC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F2CC0
  c->r[0]=R32(c->r[30]+0x00000044u); // 800F2CC4
  W32(c->r[31]+0x00000044u,c->r[0]); // 800F2CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2CD4
  c->lr=c->r[0]; // 800F2CD8
  c->r[1]=c->r[1]+0x00000010u; // 800F2CDC
  return; // 800F2CE0
}

// fn_800F2CE4
void f_800F2CE4(Ctx* __restrict c) {
  trace_call(0x800F2CE4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F2CE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F2CE8
  c->ctr=c->r[12]; // 800F2CEC
  if (true) { dispatch(c,c->ctr); return; } // 800F2CF0
}

// fn_800F2CF4
void f_800F2CF4(Ctx* __restrict c) {
  trace_call(0x800F2CF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2CF4
  c->r[0]=c->lr; // 800F2CF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2CFC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2D00
  c->r[29]=c->r[3]|c->r[3]; // 800F2D04
  c->r[30]=c->r[4]|c->r[4]; // 800F2D08
  c->r[31]=c->r[5]|c->r[5]; // 800F2D0C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F2D10
  cmps(c,0,(int32_t)c->r[0],7); // 800F2D14
  if (!crb(c,0)) { goto L_800F2D28; } // 800F2D18
  c->r[4]=c->r[31]|c->r[31]; // 800F2D1C
  c->r[3]=c->r[3]+0x00000030u; // 800F2D20
  c->lr=0x800F2D28u; f_8003A994(c); // 800F2D24
L_800F2D28:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F2D28
  c->r[3]=c->r[29]|c->r[29]; // 800F2D2C
  c->r[4]=c->r[30]|c->r[30]; // 800F2D30
  c->r[5]=c->r[31]|c->r[31]; // 800F2D34
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F2D38
  c->ctr=c->r[12]; // 800F2D3C
  if (true) { c->lr=0x800F2D44u; dispatch(c,c->ctr); } // 800F2D40
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2D44
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2D48
  c->lr=c->r[0]; // 800F2D4C
  c->r[1]=c->r[1]+0x00000020u; // 800F2D50
  return; // 800F2D54
}

// fn_800F2D58
void f_800F2D58(Ctx* __restrict c) {
  trace_call(0x800F2D58u);
  c->r[3]=0u+0x80410000u; // 800F2D58
  c->r[3]=c->r[3]+0xFFFFE931u; // 800F2D5C
  return; // 800F2D60
}

// fn_800F2D64
void f_800F2D64(Ctx* __restrict c) {
  trace_call(0x800F2D64u);
  c->r[3]=0u+0x00000048u; // 800F2D64
  return; // 800F2D68
}

// fn_800F2D6C
void f_800F2D6C(Ctx* __restrict c) {
  trace_call(0x800F2D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2D6C
  c->r[0]=c->lr; // 800F2D70
  c->r[3]=0u+0x00000048u; // 800F2D74
  c->r[4]=c->r[13]+0xFFFFBA71u; // 800F2D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2D7C
  c->r[5]=0u+0x00000000u; // 800F2D80
  c->r[6]=0u+0x00001001u; // 800F2D84
  c->lr=0x800F2D8Cu; f_80244D20(c); // 800F2D88
  cmps(c,0,(int32_t)c->r[3],0); // 800F2D8C
  if (crb(c,2)) { goto L_800F2D98; } // 800F2D90
  c->lr=0x800F2D98u; f_800F2B80(c); // 800F2D94
L_800F2D98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2D98
  c->lr=c->r[0]; // 800F2D9C
  c->r[1]=c->r[1]+0x00000010u; // 800F2DA0
  return; // 800F2DA4
}

// fn_800F2DA8
void f_800F2DA8(Ctx* __restrict c) {
  trace_call(0x800F2DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2DA8
  c->r[0]=c->lr; // 800F2DAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2DB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2DB4
  c->r[31]=c->r[3]|c->r[3]; // 800F2DB8
  c->lr=0x800F2DC0u; f_800D7120(c); // 800F2DBC
  c->r[5]=0u+0x80410000u; // 800F2DC0
  c->r[3]=0u+0xD4870000u; // 800F2DC4
  c->r[0]=c->r[3]+0xFFFFA76Cu; // 800F2DC8
  c->r[4]=0u+0x00000000u; // 800F2DCC
  c->r[5]=c->r[5]+0x00004A00u; // 800F2DD0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F2DD4
  c->r[3]=c->r[31]|c->r[31]; // 800F2DD8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F2DDC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F2DE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2DE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2DE8
  c->lr=c->r[0]; // 800F2DEC
  c->r[1]=c->r[1]+0x00000010u; // 800F2DF0
  return; // 800F2DF4
}

// fn_800F2DF8
void f_800F2DF8(Ctx* __restrict c) {
  trace_call(0x800F2DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2DF8
  c->r[0]=c->lr; // 800F2DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2E00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2E04
  c->r[30]=c->r[3]|c->r[3]; // 800F2E08
  c->r[31]=c->r[4]|c->r[4]; // 800F2E0C
  c->lr=0x800F2E14u; f_8030D728(c); // 800F2E10
  c->r[3]=c->r[31]|c->r[31]; // 800F2E14
  c->r[4]=0u+0x00000000u; // 800F2E18
  c->lr=0x800F2E20u; f_8030BE30(c); // 800F2E1C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F2E20
  c->r[3]=c->r[31]|c->r[31]; // 800F2E24
  c->lr=0x800F2E2Cu; f_8030BD1C(c); // 800F2E28
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F2E2C
  c->r[3]=c->r[31]|c->r[31]; // 800F2E30
  c->lr=0x800F2E38u; f_8030C0A0(c); // 800F2E34
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F2E38
  c->r[3]=c->r[31]|c->r[31]; // 800F2E3C
  c->lr=0x800F2E44u; f_8030C0A0(c); // 800F2E40
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F2E44
  c->r[3]=c->r[31]|c->r[31]; // 800F2E48
  c->lr=0x800F2E50u; f_8030BD1C(c); // 800F2E4C
  W32(c->r[30]+0x00000044u,c->r[3]); // 800F2E50
  c->r[3]=c->r[31]|c->r[31]; // 800F2E54
  c->lr=0x800F2E5Cu; f_8030BD1C(c); // 800F2E58
  W8(c->r[30]+0x00000048u,c->r[3]); // 800F2E5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2E60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2E64
  c->lr=c->r[0]; // 800F2E68
  c->r[1]=c->r[1]+0x00000010u; // 800F2E6C
  return; // 800F2E70
}

// fn_800F2E74
void f_800F2E74(Ctx* __restrict c) {
  trace_call(0x800F2E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2E74
  c->r[0]=c->lr; // 800F2E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2E7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2E80
  c->r[31]=c->r[4]|c->r[4]; // 800F2E84
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2E88
  c->r[30]=c->r[3]|c->r[3]; // 800F2E8C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F2E90
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F2E94
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F2E98
  c->r[3]=c->r[4]+0x00000030u; // 800F2E9C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F2EA0
  c->r[4]=c->r[30]+0x00000030u; // 800F2EA4
  c->lr=0x800F2EACu; f_8003AB48(c); // 800F2EA8
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2EAC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F2EB0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2EB4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F2EB8
  c->r[0]=R32(c->r[30]+0x00000044u); // 800F2EBC
  W32(c->r[31]+0x00000044u,c->r[0]); // 800F2EC0
  c->r[0]=R8(c->r[30]+0x00000048u); // 800F2EC4
  W8(c->r[31]+0x00000048u,c->r[0]); // 800F2EC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2ECC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2ED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2ED4
  c->lr=c->r[0]; // 800F2ED8
  c->r[1]=c->r[1]+0x00000010u; // 800F2EDC
  return; // 800F2EE0
}

// fn_800F2EE4
void f_800F2EE4(Ctx* __restrict c) {
  trace_call(0x800F2EE4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F2EE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F2EE8
  c->ctr=c->r[12]; // 800F2EEC
  if (true) { dispatch(c,c->ctr); return; } // 800F2EF0
}

// fn_800F2EF4
void f_800F2EF4(Ctx* __restrict c) {
  trace_call(0x800F2EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2EF4
  c->r[0]=c->lr; // 800F2EF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2EFC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F2F00
  c->r[29]=c->r[3]|c->r[3]; // 800F2F04
  c->r[30]=c->r[4]|c->r[4]; // 800F2F08
  c->r[31]=c->r[5]|c->r[5]; // 800F2F0C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F2F10
  cmps(c,0,(int32_t)c->r[0],7); // 800F2F14
  if (!crb(c,0)) { goto L_800F2F28; } // 800F2F18
  c->r[4]=c->r[31]|c->r[31]; // 800F2F1C
  c->r[3]=c->r[3]+0x00000030u; // 800F2F20
  c->lr=0x800F2F28u; f_8003A994(c); // 800F2F24
L_800F2F28:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F2F28
  c->r[3]=c->r[29]|c->r[29]; // 800F2F2C
  c->r[4]=c->r[30]|c->r[30]; // 800F2F30
  c->r[5]=c->r[31]|c->r[31]; // 800F2F34
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F2F38
  c->ctr=c->r[12]; // 800F2F3C
  if (true) { c->lr=0x800F2F44u; dispatch(c,c->ctr); } // 800F2F40
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F2F44
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2F48
  c->lr=c->r[0]; // 800F2F4C
  c->r[1]=c->r[1]+0x00000020u; // 800F2F50
  return; // 800F2F54
}

// fn_800F2F58
void f_800F2F58(Ctx* __restrict c) {
  trace_call(0x800F2F58u);
  c->r[3]=0u+0x80410000u; // 800F2F58
  c->r[3]=c->r[3]+0xFFFFE943u; // 800F2F5C
  return; // 800F2F60
}

// fn_800F2F64
void f_800F2F64(Ctx* __restrict c) {
  trace_call(0x800F2F64u);
  c->r[3]=0u+0x0000004Cu; // 800F2F64
  return; // 800F2F68
}

// fn_800F2F6C
void f_800F2F6C(Ctx* __restrict c) {
  trace_call(0x800F2F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2F6C
  c->r[0]=c->lr; // 800F2F70
  c->r[3]=0u+0x0000004Cu; // 800F2F74
  c->r[4]=c->r[13]+0xFFFFBA76u; // 800F2F78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2F7C
  c->r[5]=0u+0x00000000u; // 800F2F80
  c->r[6]=0u+0x00001001u; // 800F2F84
  c->lr=0x800F2F8Cu; f_80244D20(c); // 800F2F88
  cmps(c,0,(int32_t)c->r[3],0); // 800F2F8C
  if (crb(c,2)) { goto L_800F2F98; } // 800F2F90
  c->lr=0x800F2F98u; f_800F2DA8(c); // 800F2F94
L_800F2F98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2F98
  c->lr=c->r[0]; // 800F2F9C
  c->r[1]=c->r[1]+0x00000010u; // 800F2FA0
  return; // 800F2FA4
}

// fn_800F2FA8
void f_800F2FA8(Ctx* __restrict c) {
  trace_call(0x800F2FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2FA8
  c->r[0]=c->lr; // 800F2FAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2FB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2FB4
  c->r[31]=c->r[3]|c->r[3]; // 800F2FB8
  c->lr=0x800F2FC0u; f_800D7120(c); // 800F2FBC
  c->r[5]=0u+0x80410000u; // 800F2FC0
  c->r[3]=0u+0x14780000u; // 800F2FC4
  c->r[0]=c->r[3]+0xFFFFDB00u; // 800F2FC8
  c->r[4]=0u+0x00000000u; // 800F2FCC
  c->r[5]=c->r[5]+0x000049CCu; // 800F2FD0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F2FD4
  c->r[3]=c->r[31]|c->r[31]; // 800F2FD8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F2FDC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F2FE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2FE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2FE8
  c->lr=c->r[0]; // 800F2FEC
  c->r[1]=c->r[1]+0x00000010u; // 800F2FF0
  return; // 800F2FF4
}

// fn_800F2FF8
void f_800F2FF8(Ctx* __restrict c) {
  trace_call(0x800F2FF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2FF8
  c->r[0]=c->lr; // 800F2FFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3000
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3004
  c->r[30]=c->r[3]|c->r[3]; // 800F3008
  c->r[31]=c->r[4]|c->r[4]; // 800F300C
  c->lr=0x800F3014u; f_8030D728(c); // 800F3010
  c->r[3]=c->r[31]|c->r[31]; // 800F3014
  c->r[4]=0u+0x00000000u; // 800F3018
  c->lr=0x800F3020u; f_8030BE30(c); // 800F301C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F3020
  c->r[3]=c->r[31]|c->r[31]; // 800F3024
  c->lr=0x800F302Cu; f_8030BD1C(c); // 800F3028
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F302C
  c->r[3]=c->r[31]|c->r[31]; // 800F3030
  c->lr=0x800F3038u; f_8030C0A0(c); // 800F3034
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F3038
  c->r[3]=c->r[31]|c->r[31]; // 800F303C
  c->lr=0x800F3044u; f_8030C0A0(c); // 800F3040
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F3044
  c->r[3]=c->r[31]|c->r[31]; // 800F3048
  c->lr=0x800F3050u; f_8030C0A0(c); // 800F304C
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800F3050
  c->r[3]=c->r[31]|c->r[31]; // 800F3054
  c->lr=0x800F305Cu; f_8030BD1C(c); // 800F3058
  W32(c->r[30]+0x00000048u,c->r[3]); // 800F305C
  c->r[3]=c->r[31]|c->r[31]; // 800F3060
  c->lr=0x800F3068u; f_8030BD1C(c); // 800F3064
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800F3068
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F306C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3070
  c->lr=c->r[0]; // 800F3074
  c->r[1]=c->r[1]+0x00000010u; // 800F3078
  return; // 800F307C
}

// fn_800F3080
void f_800F3080(Ctx* __restrict c) {
  trace_call(0x800F3080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3080
  c->r[0]=c->lr; // 800F3084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F308C
  c->r[31]=c->r[4]|c->r[4]; // 800F3090
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3094
  c->r[30]=c->r[3]|c->r[3]; // 800F3098
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F309C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F30A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F30A4
  c->r[3]=c->r[4]+0x00000030u; // 800F30A8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F30AC
  c->r[4]=c->r[30]+0x00000030u; // 800F30B0
  c->lr=0x800F30B8u; f_8003AB48(c); // 800F30B4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F30B8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F30BC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F30C0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F30C4
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F30C8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800F30CC
  c->r[0]=R32(c->r[30]+0x00000048u); // 800F30D0
  W32(c->r[31]+0x00000048u,c->r[0]); // 800F30D4
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800F30D8
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800F30DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F30E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F30E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F30E8
  c->lr=c->r[0]; // 800F30EC
  c->r[1]=c->r[1]+0x00000010u; // 800F30F0
  return; // 800F30F4
}

// fn_800F30F8
void f_800F30F8(Ctx* __restrict c) {
  trace_call(0x800F30F8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F30F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F30FC
  c->ctr=c->r[12]; // 800F3100
  if (true) { dispatch(c,c->ctr); return; } // 800F3104
}

// fn_800F3108
void f_800F3108(Ctx* __restrict c) {
  trace_call(0x800F3108u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3108
  c->r[0]=c->lr; // 800F310C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3110
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F3114
  c->r[29]=c->r[3]|c->r[3]; // 800F3118
  c->r[30]=c->r[4]|c->r[4]; // 800F311C
  c->r[31]=c->r[5]|c->r[5]; // 800F3120
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F3124
  cmps(c,0,(int32_t)c->r[0],7); // 800F3128
  if (!crb(c,0)) { goto L_800F313C; } // 800F312C
  c->r[4]=c->r[31]|c->r[31]; // 800F3130
  c->r[3]=c->r[3]+0x00000030u; // 800F3134
  c->lr=0x800F313Cu; f_8003A994(c); // 800F3138
L_800F313C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F313C
  c->r[3]=c->r[29]|c->r[29]; // 800F3140
  c->r[4]=c->r[30]|c->r[30]; // 800F3144
  c->r[5]=c->r[31]|c->r[31]; // 800F3148
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F314C
  c->ctr=c->r[12]; // 800F3150
  if (true) { c->lr=0x800F3158u; dispatch(c,c->ctr); } // 800F3154
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F3158
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F315C
  c->lr=c->r[0]; // 800F3160
  c->r[1]=c->r[1]+0x00000020u; // 800F3164
  return; // 800F3168
}

// fn_800F316C
void f_800F316C(Ctx* __restrict c) {
  trace_call(0x800F316Cu);
  c->r[3]=0u+0x80410000u; // 800F316C
  c->r[3]=c->r[3]+0xFFFFE95Au; // 800F3170
  return; // 800F3174
}

