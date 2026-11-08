#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800DF8B8
void f_800DF8B8(Ctx* __restrict c) {
  trace_call(0x800DF8B8u);
  c->r[3]=0u+0x80410000u; // 800DF8B8
  c->r[3]=c->r[3]+0xFFFFDC29u; // 800DF8BC
  return; // 800DF8C0
}

// fn_800DF8C4
void f_800DF8C4(Ctx* __restrict c) {
  trace_call(0x800DF8C4u);
  c->r[3]=0u+0x0000005Cu; // 800DF8C4
  return; // 800DF8C8
}

// fn_800DF8CC
void f_800DF8CC(Ctx* __restrict c) {
  trace_call(0x800DF8CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF8CC
  c->r[0]=c->lr; // 800DF8D0
  c->r[3]=0u+0x0000005Cu; // 800DF8D4
  c->r[4]=c->r[13]+0xFFFFB6AFu; // 800DF8D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF8DC
  c->r[5]=0u+0x00000000u; // 800DF8E0
  c->r[6]=0u+0x00001001u; // 800DF8E4
  c->lr=0x800DF8ECu; f_80244D20(c); // 800DF8E8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF8EC
  if (crb(c,2)) { goto L_800DF8F8; } // 800DF8F0
  c->lr=0x800DF8F8u; f_800DF6B0(c); // 800DF8F4
L_800DF8F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF8F8
  c->lr=c->r[0]; // 800DF8FC
  c->r[1]=c->r[1]+0x00000010u; // 800DF900
  return; // 800DF904
}

// fn_800DF908
void f_800DF908(Ctx* __restrict c) {
  trace_call(0x800DF908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF908
  c->r[0]=c->lr; // 800DF90C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF914
  c->r[31]=c->r[3]|c->r[3]; // 800DF918
  c->lr=0x800DF920u; f_800D7120(c); // 800DF91C
  c->r[5]=0u+0x80410000u; // 800DF920
  c->r[3]=0u+0xA0560000u; // 800DF924
  c->r[0]=c->r[3]+0x00003153u; // 800DF928
  c->r[4]=0u+0x00000000u; // 800DF92C
  c->r[5]=c->r[5]+0x00006F2Cu; // 800DF930
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DF934
  c->r[3]=c->r[31]|c->r[31]; // 800DF938
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DF93C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DF940
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF944
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF948
  c->lr=c->r[0]; // 800DF94C
  c->r[1]=c->r[1]+0x00000010u; // 800DF950
  return; // 800DF954
}

// fn_800DF958
void f_800DF958(Ctx* __restrict c) {
  trace_call(0x800DF958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF958
  c->r[0]=c->lr; // 800DF95C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF960
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DF964
  c->r[30]=c->r[3]|c->r[3]; // 800DF968
  c->r[31]=c->r[4]|c->r[4]; // 800DF96C
  c->lr=0x800DF974u; f_8030D728(c); // 800DF970
  c->r[3]=c->r[31]|c->r[31]; // 800DF974
  c->r[4]=0u+0x00000000u; // 800DF978
  c->lr=0x800DF980u; f_8030BE30(c); // 800DF97C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DF980
  c->r[3]=c->r[31]|c->r[31]; // 800DF984
  c->lr=0x800DF98Cu; f_8030BD1C(c); // 800DF988
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DF98C
  c->r[3]=c->r[31]|c->r[31]; // 800DF990
  c->lr=0x800DF998u; f_8030C0A0(c); // 800DF994
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DF998
  c->r[3]=c->r[31]|c->r[31]; // 800DF99C
  c->lr=0x800DF9A4u; f_8030C0A0(c); // 800DF9A0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DF9A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DF9A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF9AC
  c->lr=c->r[0]; // 800DF9B0
  c->r[1]=c->r[1]+0x00000010u; // 800DF9B4
  return; // 800DF9B8
}

// fn_800DF9BC
void f_800DF9BC(Ctx* __restrict c) {
  trace_call(0x800DF9BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF9BC
  c->r[0]=c->lr; // 800DF9C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF9C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF9C8
  c->r[31]=c->r[4]|c->r[4]; // 800DF9CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF9D0
  c->r[30]=c->r[3]|c->r[3]; // 800DF9D4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DF9D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DF9DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DF9E0
  c->r[3]=c->r[4]+0x00000030u; // 800DF9E4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DF9E8
  c->r[4]=c->r[30]+0x00000030u; // 800DF9EC
  c->lr=0x800DF9F4u; f_8003AB48(c); // 800DF9F0
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF9F4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DF9F8
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF9FC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800DFA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFA04
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DFA08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFA0C
  c->lr=c->r[0]; // 800DFA10
  c->r[1]=c->r[1]+0x00000010u; // 800DFA14
  return; // 800DFA18
}

// fn_800DFA1C
void f_800DFA1C(Ctx* __restrict c) {
  trace_call(0x800DFA1Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DFA1C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DFA20
  c->ctr=c->r[12]; // 800DFA24
  if (true) { dispatch(c,c->ctr); return; } // 800DFA28
}

// fn_800DFA2C
void f_800DFA2C(Ctx* __restrict c) {
  trace_call(0x800DFA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFA2C
  c->r[0]=c->lr; // 800DFA30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DFA34
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFA38
  c->r[29]=c->r[3]|c->r[3]; // 800DFA3C
  c->r[30]=c->r[4]|c->r[4]; // 800DFA40
  c->r[31]=c->r[5]|c->r[5]; // 800DFA44
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DFA48
  cmps(c,0,(int32_t)c->r[0],7); // 800DFA4C
  if (!crb(c,0)) { goto L_800DFA60; } // 800DFA50
  c->r[4]=c->r[31]|c->r[31]; // 800DFA54
  c->r[3]=c->r[3]+0x00000030u; // 800DFA58
  c->lr=0x800DFA60u; f_8003A994(c); // 800DFA5C
L_800DFA60:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DFA60
  c->r[3]=c->r[29]|c->r[29]; // 800DFA64
  c->r[4]=c->r[30]|c->r[30]; // 800DFA68
  c->r[5]=c->r[31]|c->r[31]; // 800DFA6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DFA70
  c->ctr=c->r[12]; // 800DFA74
  if (true) { c->lr=0x800DFA7Cu; dispatch(c,c->ctr); } // 800DFA78
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DFA7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DFA80
  c->lr=c->r[0]; // 800DFA84
  c->r[1]=c->r[1]+0x00000020u; // 800DFA88
  return; // 800DFA8C
}

// fn_800DFA90
void f_800DFA90(Ctx* __restrict c) {
  trace_call(0x800DFA90u);
  c->r[3]=0u+0x80410000u; // 800DFA90
  c->r[3]=c->r[3]+0xFFFFDC44u; // 800DFA94
  return; // 800DFA98
}

// fn_800DFA9C
void f_800DFA9C(Ctx* __restrict c) {
  trace_call(0x800DFA9Cu);
  c->r[3]=0u+0x00000044u; // 800DFA9C
  return; // 800DFAA0
}

// fn_800DFAA4
void f_800DFAA4(Ctx* __restrict c) {
  trace_call(0x800DFAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFAA4
  c->r[0]=c->lr; // 800DFAA8
  c->r[3]=0u+0x00000044u; // 800DFAAC
  c->r[4]=c->r[13]+0xFFFFB6B4u; // 800DFAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFAB4
  c->r[5]=0u+0x00000000u; // 800DFAB8
  c->r[6]=0u+0x00001001u; // 800DFABC
  c->lr=0x800DFAC4u; f_80244D20(c); // 800DFAC0
  cmps(c,0,(int32_t)c->r[3],0); // 800DFAC4
  if (crb(c,2)) { goto L_800DFAD0; } // 800DFAC8
  c->lr=0x800DFAD0u; f_800DF908(c); // 800DFACC
L_800DFAD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFAD0
  c->lr=c->r[0]; // 800DFAD4
  c->r[1]=c->r[1]+0x00000010u; // 800DFAD8
  return; // 800DFADC
}

// fn_800DFAE0
void f_800DFAE0(Ctx* __restrict c) {
  trace_call(0x800DFAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFAE0
  c->r[0]=c->lr; // 800DFAE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFAE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFAEC
  c->r[31]=c->r[3]|c->r[3]; // 800DFAF0
  c->lr=0x800DFAF8u; f_800D7120(c); // 800DFAF4
  c->r[4]=0u+0x80410000u; // 800DFAF8
  c->r[3]=0u+0xBC1A0000u; // 800DFAFC
  c->r[0]=c->r[3]+0x000028D9u; // 800DFB00
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DFB04
  c->r[4]=c->r[4]+0x00006EF8u; // 800DFB08
  c->r[3]=c->r[31]|c->r[31]; // 800DFB0C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DFB10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFB14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFB18
  c->lr=c->r[0]; // 800DFB1C
  c->r[1]=c->r[1]+0x00000010u; // 800DFB20
  return; // 800DFB24
}

// fn_800DFB28
void f_800DFB28(Ctx* __restrict c) {
  trace_call(0x800DFB28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFB28
  c->r[0]=c->lr; // 800DFB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFB30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFB34
  c->r[30]=c->r[3]|c->r[3]; // 800DFB38
  c->r[31]=c->r[4]|c->r[4]; // 800DFB3C
  c->lr=0x800DFB44u; f_8030D728(c); // 800DFB40
  c->r[3]=c->r[31]|c->r[31]; // 800DFB44
  c->lr=0x800DFB4Cu; f_8030BD1C(c); // 800DFB48
  W8(c->r[30]+0x00000030u,c->r[3]); // 800DFB4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DFB50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFB54
  c->lr=c->r[0]; // 800DFB58
  c->r[1]=c->r[1]+0x00000010u; // 800DFB5C
  return; // 800DFB60
}

// fn_800DFB64
void f_800DFB64(Ctx* __restrict c) {
  trace_call(0x800DFB64u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DFB64
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DFB68
  c->r[0]=R8(c->r[3]+0x00000030u); // 800DFB6C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800DFB70
  W32(c->r[4]+0x00000004u,c->r[5]); // 800DFB74
  W8(c->r[4]+0x00000030u,c->r[0]); // 800DFB78
  return; // 800DFB7C
}

// fn_800DFB80
void f_800DFB80(Ctx* __restrict c) {
  trace_call(0x800DFB80u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DFB80
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DFB84
  c->ctr=c->r[12]; // 800DFB88
  if (true) { dispatch(c,c->ctr); return; } // 800DFB8C
}

// fn_800DFB90
void f_800DFB90(Ctx* __restrict c) {
  trace_call(0x800DFB90u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DFB90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DFB94
  c->ctr=c->r[12]; // 800DFB98
  if (true) { dispatch(c,c->ctr); return; } // 800DFB9C
}

// fn_800DFBA0
void f_800DFBA0(Ctx* __restrict c) {
  trace_call(0x800DFBA0u);
  c->r[3]=0u+0x80410000u; // 800DFBA0
  c->r[3]=c->r[3]+0xFFFFDC63u; // 800DFBA4
  return; // 800DFBA8
}

// fn_800DFBAC
void f_800DFBAC(Ctx* __restrict c) {
  trace_call(0x800DFBACu);
  c->r[3]=0u+0x00000034u; // 800DFBAC
  return; // 800DFBB0
}

// fn_800DFBB4
void f_800DFBB4(Ctx* __restrict c) {
  trace_call(0x800DFBB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFBB4
  c->r[0]=c->lr; // 800DFBB8
  c->r[3]=0u+0x00000034u; // 800DFBBC
  c->r[4]=c->r[13]+0xFFFFB6B9u; // 800DFBC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFBC4
  c->r[5]=0u+0x00000000u; // 800DFBC8
  c->r[6]=0u+0x00001001u; // 800DFBCC
  c->lr=0x800DFBD4u; f_80244D20(c); // 800DFBD0
  cmps(c,0,(int32_t)c->r[3],0); // 800DFBD4
  if (crb(c,2)) { goto L_800DFBE0; } // 800DFBD8
  c->lr=0x800DFBE0u; f_800DFAE0(c); // 800DFBDC
L_800DFBE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFBE0
  c->lr=c->r[0]; // 800DFBE4
  c->r[1]=c->r[1]+0x00000010u; // 800DFBE8
  return; // 800DFBEC
}

// fn_800DFBF0
void f_800DFBF0(Ctx* __restrict c) {
  trace_call(0x800DFBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFBF0
  c->r[0]=c->lr; // 800DFBF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFBF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFBFC
  c->r[31]=c->r[3]|c->r[3]; // 800DFC00
  c->lr=0x800DFC08u; f_800D7120(c); // 800DFC04
  c->r[4]=0u+0x80410000u; // 800DFC08
  c->r[3]=0u+0x6B2E0000u; // 800DFC0C
  c->r[0]=c->r[3]+0x00002323u; // 800DFC10
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DFC14
  c->r[4]=c->r[4]+0x00006EC4u; // 800DFC18
  c->r[3]=c->r[31]|c->r[31]; // 800DFC1C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DFC20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFC24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFC28
  c->lr=c->r[0]; // 800DFC2C
  c->r[1]=c->r[1]+0x00000010u; // 800DFC30
  return; // 800DFC34
}

// fn_800DFC38
void f_800DFC38(Ctx* __restrict c) {
  trace_call(0x800DFC38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFC38
  c->r[0]=c->lr; // 800DFC3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFC40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFC44
  c->r[30]=c->r[3]|c->r[3]; // 800DFC48
  c->r[31]=c->r[4]|c->r[4]; // 800DFC4C
  c->lr=0x800DFC54u; f_8030D728(c); // 800DFC50
  c->r[3]=c->r[31]|c->r[31]; // 800DFC54
  c->lr=0x800DFC5Cu; f_8030BD1C(c); // 800DFC58
  W8(c->r[30]+0x00000030u,c->r[3]); // 800DFC5C
  c->r[3]=c->r[31]|c->r[31]; // 800DFC60
  c->lr=0x800DFC68u; f_8030C0A0(c); // 800DFC64
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800DFC68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DFC6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFC70
  c->lr=c->r[0]; // 800DFC74
  c->r[1]=c->r[1]+0x00000010u; // 800DFC78
  return; // 800DFC7C
}

// fn_800DFC80
void f_800DFC80(Ctx* __restrict c) {
  trace_call(0x800DFC80u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DFC80
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DFC84
  c->r[0]=R8(c->r[3]+0x00000030u); // 800DFC88
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFC8C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800DFC90
  W32(c->r[4]+0x00000004u,c->r[5]); // 800DFC94
  W8(c->r[4]+0x00000030u,c->r[0]); // 800DFC98
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800DFC9C
  return; // 800DFCA0
}

// fn_800DFCA4
void f_800DFCA4(Ctx* __restrict c) {
  trace_call(0x800DFCA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DFCA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DFCA8
  c->ctr=c->r[12]; // 800DFCAC
  if (true) { dispatch(c,c->ctr); return; } // 800DFCB0
}

// fn_800DFCB4
void f_800DFCB4(Ctx* __restrict c) {
  trace_call(0x800DFCB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DFCB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DFCB8
  c->ctr=c->r[12]; // 800DFCBC
  if (true) { dispatch(c,c->ctr); return; } // 800DFCC0
}

// fn_800DFCC4
void f_800DFCC4(Ctx* __restrict c) {
  trace_call(0x800DFCC4u);
  c->r[3]=0u+0x80410000u; // 800DFCC4
  c->r[3]=c->r[3]+0xFFFFDC77u; // 800DFCC8
  return; // 800DFCCC
}

// fn_800DFCD0
void f_800DFCD0(Ctx* __restrict c) {
  trace_call(0x800DFCD0u);
  c->r[3]=0u+0x00000038u; // 800DFCD0
  return; // 800DFCD4
}

// fn_800DFCD8
void f_800DFCD8(Ctx* __restrict c) {
  trace_call(0x800DFCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFCD8
  c->r[0]=c->lr; // 800DFCDC
  c->r[3]=0u+0x00000038u; // 800DFCE0
  c->r[4]=c->r[13]+0xFFFFB6BEu; // 800DFCE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFCE8
  c->r[5]=0u+0x00000000u; // 800DFCEC
  c->r[6]=0u+0x00001001u; // 800DFCF0
  c->lr=0x800DFCF8u; f_80244D20(c); // 800DFCF4
  cmps(c,0,(int32_t)c->r[3],0); // 800DFCF8
  if (crb(c,2)) { goto L_800DFD04; } // 800DFCFC
  c->lr=0x800DFD04u; f_800DFBF0(c); // 800DFD00
L_800DFD04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFD04
  c->lr=c->r[0]; // 800DFD08
  c->r[1]=c->r[1]+0x00000010u; // 800DFD0C
  return; // 800DFD10
}

// fn_800DFD14
void f_800DFD14(Ctx* __restrict c) {
  trace_call(0x800DFD14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFD14
  c->r[0]=c->lr; // 800DFD18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFD1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFD20
  c->r[31]=c->r[3]|c->r[3]; // 800DFD24
  c->lr=0x800DFD2Cu; f_800D7120(c); // 800DFD28
  c->r[5]=0u+0x80410000u; // 800DFD2C
  c->r[3]=0u+0x229E0000u; // 800DFD30
  c->r[0]=c->r[3]+0x00005EB1u; // 800DFD34
  c->r[4]=0u+0x00000000u; // 800DFD38
  c->r[5]=c->r[5]+0x00006E90u; // 800DFD3C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DFD40
  c->r[3]=c->r[31]|c->r[31]; // 800DFD44
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DFD48
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DFD4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFD50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFD54
  c->lr=c->r[0]; // 800DFD58
  c->r[1]=c->r[1]+0x00000010u; // 800DFD5C
  return; // 800DFD60
}

// fn_800DFD64
void f_800DFD64(Ctx* __restrict c) {
  trace_call(0x800DFD64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFD64
  c->r[0]=c->lr; // 800DFD68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFD6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFD70
  c->r[30]=c->r[3]|c->r[3]; // 800DFD74
  c->r[31]=c->r[4]|c->r[4]; // 800DFD78
  c->lr=0x800DFD80u; f_8030D728(c); // 800DFD7C
  c->r[3]=c->r[31]|c->r[31]; // 800DFD80
  c->r[4]=0u+0x00000000u; // 800DFD84
  c->lr=0x800DFD8Cu; f_8030BE30(c); // 800DFD88
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DFD8C
  c->r[3]=c->r[31]|c->r[31]; // 800DFD90
  c->lr=0x800DFD98u; f_8030BD1C(c); // 800DFD94
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DFD98
  c->r[3]=c->r[31]|c->r[31]; // 800DFD9C
  c->r[4]=0u+0x00000000u; // 800DFDA0
  c->lr=0x800DFDA8u; f_8030BE30(c); // 800DFDA4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DFDA8
  c->r[3]=c->r[31]|c->r[31]; // 800DFDAC
  c->r[4]=0u+0x00000000u; // 800DFDB0
  c->lr=0x800DFDB8u; f_8030BE30(c); // 800DFDB4
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DFDB8
  c->r[3]=c->r[31]|c->r[31]; // 800DFDBC
  c->lr=0x800DFDC4u; f_8030C0A0(c); // 800DFDC0
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DFDC4
  c->r[3]=c->r[31]|c->r[31]; // 800DFDC8
  c->lr=0x800DFDD0u; f_8030BD1C(c); // 800DFDCC
  W8(c->r[30]+0x00000048u,c->r[3]); // 800DFDD0
  c->r[3]=c->r[31]|c->r[31]; // 800DFDD4
  c->lr=0x800DFDDCu; f_8030C0A0(c); // 800DFDD8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DFDDC
  c->r[3]=c->r[31]|c->r[31]; // 800DFDE0
  c->lr=0x800DFDE8u; f_8030C0A0(c); // 800DFDE4
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DFDE8
  c->r[3]=c->r[31]|c->r[31]; // 800DFDEC
  c->lr=0x800DFDF4u; f_8030C0A0(c); // 800DFDF0
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800DFDF4
  c->r[3]=c->r[31]|c->r[31]; // 800DFDF8
  c->lr=0x800DFE00u; f_8030BD1C(c); // 800DFDFC
  W8(c->r[30]+0x00000058u,c->r[3]); // 800DFE00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DFE04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFE08
  c->lr=c->r[0]; // 800DFE0C
  c->r[1]=c->r[1]+0x00000010u; // 800DFE10
  return; // 800DFE14
}

// fn_800DFE18
void f_800DFE18(Ctx* __restrict c) {
  trace_call(0x800DFE18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFE18
  c->r[0]=c->lr; // 800DFE1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFE20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFE24
  c->r[31]=c->r[4]|c->r[4]; // 800DFE28
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DFE2C
  c->r[30]=c->r[3]|c->r[3]; // 800DFE30
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DFE34
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DFE38
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DFE3C
  c->r[3]=c->r[4]+0x00000030u; // 800DFE40
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DFE44
  c->r[4]=c->r[30]+0x00000030u; // 800DFE48
  c->lr=0x800DFE50u; f_8003AB48(c); // 800DFE4C
  c->r[3]=c->r[31]+0x0000003Cu; // 800DFE50
  c->r[4]=c->r[30]+0x0000003Cu; // 800DFE54
  c->lr=0x800DFE5Cu; f_8003F6E4(c); // 800DFE58
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFE5C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800DFE60
  c->r[0]=R8(c->r[30]+0x00000048u); // 800DFE64
  W8(c->r[31]+0x00000048u,c->r[0]); // 800DFE68
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFE6C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DFE70
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFE74
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DFE78
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFE7C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800DFE80
  c->r[0]=R8(c->r[30]+0x00000058u); // 800DFE84
  W8(c->r[31]+0x00000058u,c->r[0]); // 800DFE88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFE8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DFE90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFE94
  c->lr=c->r[0]; // 800DFE98
  c->r[1]=c->r[1]+0x00000010u; // 800DFE9C
  return; // 800DFEA0
}

// fn_800DFEA4
void f_800DFEA4(Ctx* __restrict c) {
  trace_call(0x800DFEA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DFEA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DFEA8
  c->ctr=c->r[12]; // 800DFEAC
  if (true) { dispatch(c,c->ctr); return; } // 800DFEB0
}

// fn_800DFEB4
void f_800DFEB4(Ctx* __restrict c) {
  trace_call(0x800DFEB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFEB4
  c->r[0]=c->lr; // 800DFEB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DFEBC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFEC0
  c->r[29]=c->r[3]|c->r[3]; // 800DFEC4
  c->r[30]=c->r[4]|c->r[4]; // 800DFEC8
  c->r[31]=c->r[5]|c->r[5]; // 800DFECC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DFED0
  cmps(c,0,(int32_t)c->r[0],7); // 800DFED4
  if (!crb(c,0)) { goto L_800DFEE8; } // 800DFED8
  c->r[4]=c->r[31]|c->r[31]; // 800DFEDC
  c->r[3]=c->r[3]+0x00000030u; // 800DFEE0
  c->lr=0x800DFEE8u; f_8003A994(c); // 800DFEE4
L_800DFEE8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DFEE8
  c->r[3]=c->r[29]|c->r[29]; // 800DFEEC
  c->r[4]=c->r[30]|c->r[30]; // 800DFEF0
  c->r[5]=c->r[31]|c->r[31]; // 800DFEF4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DFEF8
  c->ctr=c->r[12]; // 800DFEFC
  if (true) { c->lr=0x800DFF04u; dispatch(c,c->ctr); } // 800DFF00
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DFF04
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DFF08
  c->lr=c->r[0]; // 800DFF0C
  c->r[1]=c->r[1]+0x00000020u; // 800DFF10
  return; // 800DFF14
}

// fn_800DFF18
void f_800DFF18(Ctx* __restrict c) {
  trace_call(0x800DFF18u);
  c->r[3]=0u+0x80410000u; // 800DFF18
  c->r[3]=c->r[3]+0xFFFFDC8Cu; // 800DFF1C
  return; // 800DFF20
}

// fn_800DFF24
void f_800DFF24(Ctx* __restrict c) {
  trace_call(0x800DFF24u);
  c->r[3]=0u+0x0000005Cu; // 800DFF24
  return; // 800DFF28
}

// fn_800DFF2C
void f_800DFF2C(Ctx* __restrict c) {
  trace_call(0x800DFF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFF2C
  c->r[0]=c->lr; // 800DFF30
  c->r[3]=0u+0x0000005Cu; // 800DFF34
  c->r[4]=c->r[13]+0xFFFFB6C3u; // 800DFF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFF3C
  c->r[5]=0u+0x00000000u; // 800DFF40
  c->r[6]=0u+0x00001001u; // 800DFF44
  c->lr=0x800DFF4Cu; f_80244D20(c); // 800DFF48
  cmps(c,0,(int32_t)c->r[3],0); // 800DFF4C
  if (crb(c,2)) { goto L_800DFF58; } // 800DFF50
  c->lr=0x800DFF58u; f_800DFD14(c); // 800DFF54
L_800DFF58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFF58
  c->lr=c->r[0]; // 800DFF5C
  c->r[1]=c->r[1]+0x00000010u; // 800DFF60
  return; // 800DFF64
}

// fn_800DFF68
void f_800DFF68(Ctx* __restrict c) {
  trace_call(0x800DFF68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFF68
  c->r[0]=c->lr; // 800DFF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFF70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFF74
  c->r[31]=c->r[3]|c->r[3]; // 800DFF78
  c->lr=0x800DFF80u; f_800D7120(c); // 800DFF7C
  c->r[4]=0u+0x80410000u; // 800DFF80
  c->r[3]=0u+0xBC1A0000u; // 800DFF84
  c->r[0]=c->r[3]+0x000028D9u; // 800DFF88
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DFF8C
  c->r[4]=c->r[4]+0x00006E5Cu; // 800DFF90
  c->r[3]=c->r[31]|c->r[31]; // 800DFF94
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DFF98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFF9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFFA0
  c->lr=c->r[0]; // 800DFFA4
  c->r[1]=c->r[1]+0x00000010u; // 800DFFA8
  return; // 800DFFAC
}

// fn_800DFFB0
void f_800DFFB0(Ctx* __restrict c) {
  trace_call(0x800DFFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFFB0
  c->r[0]=c->lr; // 800DFFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFFB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DFFBC
  c->r[30]=c->r[3]|c->r[3]; // 800DFFC0
  c->r[31]=c->r[4]|c->r[4]; // 800DFFC4
  c->lr=0x800DFFCCu; f_8030D728(c); // 800DFFC8
  c->r[3]=c->r[31]|c->r[31]; // 800DFFCC
  c->lr=0x800DFFD4u; f_8030BD1C(c); // 800DFFD0
  W8(c->r[30]+0x00000030u,c->r[3]); // 800DFFD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DFFD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFFDC
  c->lr=c->r[0]; // 800DFFE0
  c->r[1]=c->r[1]+0x00000010u; // 800DFFE4
  return; // 800DFFE8
}

// fn_800DFFEC
void f_800DFFEC(Ctx* __restrict c) {
  trace_call(0x800DFFECu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DFFEC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DFFF0
  c->r[0]=R8(c->r[3]+0x00000030u); // 800DFFF4
  W32(c->r[4]+0x00000000u,c->r[6]); // 800DFFF8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800DFFFC
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E0000
  return; // 800E0004
}

// fn_800E0008
void f_800E0008(Ctx* __restrict c) {
  trace_call(0x800E0008u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0008
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E000C
  c->ctr=c->r[12]; // 800E0010
  if (true) { dispatch(c,c->ctr); return; } // 800E0014
}

// fn_800E0018
void f_800E0018(Ctx* __restrict c) {
  trace_call(0x800E0018u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0018
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E001C
  c->ctr=c->r[12]; // 800E0020
  if (true) { dispatch(c,c->ctr); return; } // 800E0024
}

// fn_800E0028
void f_800E0028(Ctx* __restrict c) {
  trace_call(0x800E0028u);
  c->r[3]=0u+0x80410000u; // 800E0028
  c->r[3]=c->r[3]+0xFFFFDC9Cu; // 800E002C
  return; // 800E0030
}

// fn_800E0034
void f_800E0034(Ctx* __restrict c) {
  trace_call(0x800E0034u);
  c->r[3]=0u+0x00000034u; // 800E0034
  return; // 800E0038
}

// fn_800E003C
void f_800E003C(Ctx* __restrict c) {
  trace_call(0x800E003Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E003C
  c->r[0]=c->lr; // 800E0040
  c->r[3]=0u+0x00000034u; // 800E0044
  c->r[4]=c->r[13]+0xFFFFB6C8u; // 800E0048
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E004C
  c->r[5]=0u+0x00000000u; // 800E0050
  c->r[6]=0u+0x00001001u; // 800E0054
  c->lr=0x800E005Cu; f_80244D20(c); // 800E0058
  cmps(c,0,(int32_t)c->r[3],0); // 800E005C
  if (crb(c,2)) { goto L_800E0068; } // 800E0060
  c->lr=0x800E0068u; f_800DFF68(c); // 800E0064
L_800E0068:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0068
  c->lr=c->r[0]; // 800E006C
  c->r[1]=c->r[1]+0x00000010u; // 800E0070
  return; // 800E0074
}

// fn_800E0078
void f_800E0078(Ctx* __restrict c) {
  trace_call(0x800E0078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0078
  c->r[0]=c->lr; // 800E007C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0084
  c->r[31]=c->r[3]|c->r[3]; // 800E0088
  c->lr=0x800E0090u; f_800D7120(c); // 800E008C
  c->r[5]=0u+0x80410000u; // 800E0090
  c->r[3]=0u+0xFC850000u; // 800E0094
  c->r[0]=c->r[3]+0x0000491Bu; // 800E0098
  c->r[4]=0u+0x00000000u; // 800E009C
  c->r[5]=c->r[5]+0x00006E28u; // 800E00A0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E00A4
  c->r[3]=c->r[31]|c->r[31]; // 800E00A8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E00AC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E00B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E00B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E00B8
  c->lr=c->r[0]; // 800E00BC
  c->r[1]=c->r[1]+0x00000010u; // 800E00C0
  return; // 800E00C4
}

// fn_800E00C8
void f_800E00C8(Ctx* __restrict c) {
  trace_call(0x800E00C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E00C8
  c->r[0]=c->lr; // 800E00CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E00D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E00D4
  c->r[30]=c->r[3]|c->r[3]; // 800E00D8
  c->r[31]=c->r[4]|c->r[4]; // 800E00DC
  c->lr=0x800E00E4u; f_8030D728(c); // 800E00E0
  c->r[3]=c->r[31]|c->r[31]; // 800E00E4
  c->r[4]=0u+0x00000000u; // 800E00E8
  c->lr=0x800E00F0u; f_8030BE30(c); // 800E00EC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E00F0
  c->r[3]=c->r[31]|c->r[31]; // 800E00F4
  c->lr=0x800E00FCu; f_8030BD1C(c); // 800E00F8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E00FC
  c->r[3]=c->r[31]|c->r[31]; // 800E0100
  c->r[4]=0u+0x00000000u; // 800E0104
  c->lr=0x800E010Cu; f_8030BE30(c); // 800E0108
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E010C
  c->r[3]=c->r[31]|c->r[31]; // 800E0110
  c->r[4]=0u+0x00000000u; // 800E0114
  c->lr=0x800E011Cu; f_8030BE30(c); // 800E0118
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E011C
  c->r[3]=c->r[31]|c->r[31]; // 800E0120
  c->r[4]=c->r[30]+0x00000044u; // 800E0124
  c->r[5]=0u+0x00000000u; // 800E0128
  c->lr=0x800E0130u; f_8030B7F0(c); // 800E012C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0130
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0134
  c->lr=c->r[0]; // 800E0138
  c->r[1]=c->r[1]+0x00000010u; // 800E013C
  return; // 800E0140
}

// fn_800E0144
void f_800E0144(Ctx* __restrict c) {
  trace_call(0x800E0144u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0144
  c->r[0]=c->lr; // 800E0148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E014C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0150
  c->r[30]=c->r[3]|c->r[3]; // 800E0154
  c->r[31]=c->r[4]|c->r[4]; // 800E0158
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E015C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E0160
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E0164
  c->r[3]=c->r[4]+0x00000030u; // 800E0168
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E016C
  c->r[4]=c->r[30]+0x00000030u; // 800E0170
  c->lr=0x800E0178u; f_8003AB48(c); // 800E0174
  c->r[3]=c->r[31]+0x0000003Cu; // 800E0178
  c->r[4]=c->r[30]+0x0000003Cu; // 800E017C
  c->lr=0x800E0184u; f_8003F6E4(c); // 800E0180
  c->r[3]=c->r[31]+0x00000044u; // 800E0184
  c->r[4]=c->r[30]+0x00000044u; // 800E0188
  c->lr=0x800E0190u; f_803A6F10(c); // 800E018C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0190
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0194
  c->lr=c->r[0]; // 800E0198
  c->r[1]=c->r[1]+0x00000010u; // 800E019C
  return; // 800E01A0
}

// fn_800E01A4
void f_800E01A4(Ctx* __restrict c) {
  trace_call(0x800E01A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E01A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E01A8
  c->ctr=c->r[12]; // 800E01AC
  if (true) { dispatch(c,c->ctr); return; } // 800E01B0
}

// fn_800E01B4
void f_800E01B4(Ctx* __restrict c) {
  trace_call(0x800E01B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E01B4
  c->r[0]=c->lr; // 800E01B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E01BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E01C0
  c->r[29]=c->r[3]|c->r[3]; // 800E01C4
  c->r[30]=c->r[4]|c->r[4]; // 800E01C8
  c->r[31]=c->r[5]|c->r[5]; // 800E01CC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E01D0
  cmps(c,0,(int32_t)c->r[0],7); // 800E01D4
  if (!crb(c,0)) { goto L_800E01E8; } // 800E01D8
  c->r[4]=c->r[31]|c->r[31]; // 800E01DC
  c->r[3]=c->r[3]+0x00000030u; // 800E01E0
  c->lr=0x800E01E8u; f_8003A994(c); // 800E01E4
L_800E01E8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E01E8
  c->r[3]=c->r[29]|c->r[29]; // 800E01EC
  c->r[4]=c->r[30]|c->r[30]; // 800E01F0
  c->r[5]=c->r[31]|c->r[31]; // 800E01F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E01F8
  c->ctr=c->r[12]; // 800E01FC
  if (true) { c->lr=0x800E0204u; dispatch(c,c->ctr); } // 800E0200
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0204
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0208
  c->lr=c->r[0]; // 800E020C
  c->r[1]=c->r[1]+0x00000020u; // 800E0210
  return; // 800E0214
}

// fn_800E0218
void f_800E0218(Ctx* __restrict c) {
  trace_call(0x800E0218u);
  c->r[3]=0u+0x80410000u; // 800E0218
  c->r[3]=c->r[3]+0xFFFFDCADu; // 800E021C
  return; // 800E0220
}

// fn_800E0224
void f_800E0224(Ctx* __restrict c) {
  trace_call(0x800E0224u);
  c->r[3]=0u+0x00000064u; // 800E0224
  return; // 800E0228
}

// fn_800E022C
void f_800E022C(Ctx* __restrict c) {
  trace_call(0x800E022Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E022C
  c->r[0]=c->lr; // 800E0230
  c->r[3]=0u+0x00000064u; // 800E0234
  c->r[4]=c->r[13]+0xFFFFB6CDu; // 800E0238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E023C
  c->r[5]=0u+0x00000000u; // 800E0240
  c->r[6]=0u+0x00001001u; // 800E0244
  c->lr=0x800E024Cu; f_80244D20(c); // 800E0248
  cmps(c,0,(int32_t)c->r[3],0); // 800E024C
  if (crb(c,2)) { goto L_800E0258; } // 800E0250
  c->lr=0x800E0258u; f_800E0078(c); // 800E0254
L_800E0258:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0258
  c->lr=c->r[0]; // 800E025C
  c->r[1]=c->r[1]+0x00000010u; // 800E0260
  return; // 800E0264
}

// fn_800E0268
void f_800E0268(Ctx* __restrict c) {
  trace_call(0x800E0268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0268
  c->r[0]=c->lr; // 800E026C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0274
  c->r[31]=c->r[3]|c->r[3]; // 800E0278
  c->lr=0x800E0280u; f_800D7120(c); // 800E027C
  c->r[5]=0u+0x80410000u; // 800E0280
  c->r[3]=0u+0x09FD0000u; // 800E0284
  c->r[0]=c->r[3]+0xFFFFFCB4u; // 800E0288
  c->r[4]=0u+0x00000000u; // 800E028C
  c->r[5]=c->r[5]+0x00006DF4u; // 800E0290
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E0294
  c->r[3]=c->r[31]|c->r[31]; // 800E0298
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E029C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E02A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E02A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E02A8
  c->lr=c->r[0]; // 800E02AC
  c->r[1]=c->r[1]+0x00000010u; // 800E02B0
  return; // 800E02B4
}

// fn_800E02B8
void f_800E02B8(Ctx* __restrict c) {
  trace_call(0x800E02B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E02B8
  c->r[0]=c->lr; // 800E02BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E02C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E02C4
  c->r[30]=c->r[3]|c->r[3]; // 800E02C8
  c->r[31]=c->r[4]|c->r[4]; // 800E02CC
  c->lr=0x800E02D4u; f_8030D728(c); // 800E02D0
  c->r[3]=c->r[31]|c->r[31]; // 800E02D4
  c->r[4]=0u+0x00000000u; // 800E02D8
  c->lr=0x800E02E0u; f_8030BE30(c); // 800E02DC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E02E0
  c->r[3]=c->r[31]|c->r[31]; // 800E02E4
  c->lr=0x800E02ECu; f_8030BD1C(c); // 800E02E8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E02EC
  c->r[3]=c->r[31]|c->r[31]; // 800E02F0
  c->r[4]=0u+0x00000000u; // 800E02F4
  c->lr=0x800E02FCu; f_8030BE30(c); // 800E02F8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E02FC
  c->r[3]=c->r[31]|c->r[31]; // 800E0300
  c->r[4]=0u+0x00000000u; // 800E0304
  c->lr=0x800E030Cu; f_8030BE30(c); // 800E0308
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E030C
  c->r[3]=c->r[31]|c->r[31]; // 800E0310
  c->lr=0x800E0318u; f_8030BD1C(c); // 800E0314
  W8(c->r[30]+0x00000044u,c->r[3]); // 800E0318
  c->r[3]=c->r[31]|c->r[31]; // 800E031C
  c->lr=0x800E0324u; f_8030BD1C(c); // 800E0320
  W8(c->r[30]+0x00000045u,c->r[3]); // 800E0324
  c->r[3]=c->r[31]|c->r[31]; // 800E0328
  c->lr=0x800E0330u; f_8030C0A0(c); // 800E032C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800E0330
  c->r[3]=c->r[31]|c->r[31]; // 800E0334
  c->lr=0x800E033Cu; f_8030BD1C(c); // 800E0338
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800E033C
  c->r[3]=c->r[31]|c->r[31]; // 800E0340
  c->lr=0x800E0348u; f_8030C0A0(c); // 800E0344
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800E0348
  c->r[3]=c->r[31]|c->r[31]; // 800E034C
  c->lr=0x800E0354u; f_8030C0A0(c); // 800E0350
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800E0354
  c->r[3]=c->r[31]|c->r[31]; // 800E0358
  c->lr=0x800E0360u; f_8030BD1C(c); // 800E035C
  W8(c->r[30]+0x00000058u,c->r[3]); // 800E0360
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0364
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0368
  c->lr=c->r[0]; // 800E036C
  c->r[1]=c->r[1]+0x00000010u; // 800E0370
  return; // 800E0374
}

// fn_800E0378
void f_800E0378(Ctx* __restrict c) {
  trace_call(0x800E0378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0378
  c->r[0]=c->lr; // 800E037C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0384
  c->r[31]=c->r[4]|c->r[4]; // 800E0388
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E038C
  c->r[30]=c->r[3]|c->r[3]; // 800E0390
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E0394
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E0398
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E039C
  c->r[3]=c->r[4]+0x00000030u; // 800E03A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E03A4
  c->r[4]=c->r[30]+0x00000030u; // 800E03A8
  c->lr=0x800E03B0u; f_8003AB48(c); // 800E03AC
  c->r[3]=c->r[31]+0x0000003Cu; // 800E03B0
  c->r[4]=c->r[30]+0x0000003Cu; // 800E03B4
  c->lr=0x800E03BCu; f_8003F6E4(c); // 800E03B8
  c->r[0]=R8(c->r[30]+0x00000044u); // 800E03BC
  W8(c->r[31]+0x00000044u,c->r[0]); // 800E03C0
  c->r[0]=R8(c->r[30]+0x00000045u); // 800E03C4
  W8(c->r[31]+0x00000045u,c->r[0]); // 800E03C8
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E03CC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800E03D0
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800E03D4
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800E03D8
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E03DC
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800E03E0
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E03E4
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800E03E8
  c->r[0]=R8(c->r[30]+0x00000058u); // 800E03EC
  W8(c->r[31]+0x00000058u,c->r[0]); // 800E03F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E03F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E03F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E03FC
  c->lr=c->r[0]; // 800E0400
  c->r[1]=c->r[1]+0x00000010u; // 800E0404
  return; // 800E0408
}

// fn_800E040C
void f_800E040C(Ctx* __restrict c) {
  trace_call(0x800E040Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E040C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E0410
  c->ctr=c->r[12]; // 800E0414
  if (true) { dispatch(c,c->ctr); return; } // 800E0418
}

// fn_800E041C
void f_800E041C(Ctx* __restrict c) {
  trace_call(0x800E041Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E041C
  c->r[0]=c->lr; // 800E0420
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0424
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0428
  c->r[29]=c->r[3]|c->r[3]; // 800E042C
  c->r[30]=c->r[4]|c->r[4]; // 800E0430
  c->r[31]=c->r[5]|c->r[5]; // 800E0434
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E0438
  cmps(c,0,(int32_t)c->r[0],7); // 800E043C
  if (!crb(c,0)) { goto L_800E0450; } // 800E0440
  c->r[4]=c->r[31]|c->r[31]; // 800E0444
  c->r[3]=c->r[3]+0x00000030u; // 800E0448
  c->lr=0x800E0450u; f_8003A994(c); // 800E044C
L_800E0450:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E0450
  c->r[3]=c->r[29]|c->r[29]; // 800E0454
  c->r[4]=c->r[30]|c->r[30]; // 800E0458
  c->r[5]=c->r[31]|c->r[31]; // 800E045C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E0460
  c->ctr=c->r[12]; // 800E0464
  if (true) { c->lr=0x800E046Cu; dispatch(c,c->ctr); } // 800E0468
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E046C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0470
  c->lr=c->r[0]; // 800E0474
  c->r[1]=c->r[1]+0x00000020u; // 800E0478
  return; // 800E047C
}

// fn_800E0480
void f_800E0480(Ctx* __restrict c) {
  trace_call(0x800E0480u);
  c->r[3]=0u+0x80410000u; // 800E0480
  c->r[3]=c->r[3]+0xFFFFDCB6u; // 800E0484
  return; // 800E0488
}

// fn_800E048C
void f_800E048C(Ctx* __restrict c) {
  trace_call(0x800E048Cu);
  c->r[3]=0u+0x0000005Cu; // 800E048C
  return; // 800E0490
}

// fn_800E0494
void f_800E0494(Ctx* __restrict c) {
  trace_call(0x800E0494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0494
  c->r[0]=c->lr; // 800E0498
  c->r[3]=0u+0x0000005Cu; // 800E049C
  c->r[4]=c->r[13]+0xFFFFB6D2u; // 800E04A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E04A4
  c->r[5]=0u+0x00000000u; // 800E04A8
  c->r[6]=0u+0x00001001u; // 800E04AC
  c->lr=0x800E04B4u; f_80244D20(c); // 800E04B0
  cmps(c,0,(int32_t)c->r[3],0); // 800E04B4
  if (crb(c,2)) { goto L_800E04C0; } // 800E04B8
  c->lr=0x800E04C0u; f_800E0268(c); // 800E04BC
L_800E04C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E04C0
  c->lr=c->r[0]; // 800E04C4
  c->r[1]=c->r[1]+0x00000010u; // 800E04C8
  return; // 800E04CC
}

// fn_800E04D0
void f_800E04D0(Ctx* __restrict c) {
  trace_call(0x800E04D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E04D0
  c->r[0]=c->lr; // 800E04D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E04D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E04DC
  c->r[31]=c->r[3]|c->r[3]; // 800E04E0
  c->lr=0x800E04E8u; f_800D7120(c); // 800E04E4
  c->r[4]=0u+0x80410000u; // 800E04E8
  c->r[3]=0u+0xA4AD0000u; // 800E04EC
  c->r[0]=c->r[3]+0xFFFFE696u; // 800E04F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E04F4
  c->r[4]=c->r[4]+0x00006DC0u; // 800E04F8
  c->r[3]=c->r[31]|c->r[31]; // 800E04FC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E0500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0504
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0508
  c->lr=c->r[0]; // 800E050C
  c->r[1]=c->r[1]+0x00000010u; // 800E0510
  return; // 800E0514
}

// fn_800E0518
void f_800E0518(Ctx* __restrict c) {
  trace_call(0x800E0518u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0518
  c->r[0]=c->lr; // 800E051C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0520
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0524
  c->r[30]=c->r[3]|c->r[3]; // 800E0528
  c->r[31]=c->r[4]|c->r[4]; // 800E052C
  c->lr=0x800E0534u; f_8030D728(c); // 800E0530
  c->r[3]=c->r[31]|c->r[31]; // 800E0534
  c->lr=0x800E053Cu; f_8030BD1C(c); // 800E0538
  W16(c->r[30]+0x00000030u,c->r[3]); // 800E053C
  c->r[3]=c->r[31]|c->r[31]; // 800E0540
  c->lr=0x800E0548u; f_8030BD1C(c); // 800E0544
  W16(c->r[30]+0x00000032u,c->r[3]); // 800E0548
  c->r[3]=c->r[31]|c->r[31]; // 800E054C
  c->lr=0x800E0554u; f_8030BD1C(c); // 800E0550
  W16(c->r[30]+0x00000034u,c->r[3]); // 800E0554
  c->r[3]=c->r[31]|c->r[31]; // 800E0558
  c->lr=0x800E0560u; f_8030BD1C(c); // 800E055C
  W16(c->r[30]+0x00000036u,c->r[3]); // 800E0560
  c->r[3]=c->r[31]|c->r[31]; // 800E0564
  c->lr=0x800E056Cu; f_8030BD1C(c); // 800E0568
  W16(c->r[30]+0x00000038u,c->r[3]); // 800E056C
  c->r[3]=c->r[31]|c->r[31]; // 800E0570
  c->lr=0x800E0578u; f_8030BD1C(c); // 800E0574
  W16(c->r[30]+0x0000003Au,c->r[3]); // 800E0578
  c->r[3]=c->r[31]|c->r[31]; // 800E057C
  c->lr=0x800E0584u; f_8030BD1C(c); // 800E0580
  W16(c->r[30]+0x0000003Cu,c->r[3]); // 800E0584
  c->r[3]=c->r[31]|c->r[31]; // 800E0588
  c->lr=0x800E0590u; f_8030BD1C(c); // 800E058C
  W16(c->r[30]+0x0000003Eu,c->r[3]); // 800E0590
  c->r[3]=c->r[31]|c->r[31]; // 800E0594
  c->lr=0x800E059Cu; f_8030BD1C(c); // 800E0598
  W16(c->r[30]+0x00000040u,c->r[3]); // 800E059C
  c->r[3]=c->r[31]|c->r[31]; // 800E05A0
  c->lr=0x800E05A8u; f_8030BD1C(c); // 800E05A4
  W16(c->r[30]+0x00000042u,c->r[3]); // 800E05A8
  c->r[3]=c->r[31]|c->r[31]; // 800E05AC
  c->lr=0x800E05B4u; f_8030BD1C(c); // 800E05B0
  W16(c->r[30]+0x00000044u,c->r[3]); // 800E05B4
  c->r[3]=c->r[31]|c->r[31]; // 800E05B8
  c->lr=0x800E05C0u; f_8030BD1C(c); // 800E05BC
  W16(c->r[30]+0x00000046u,c->r[3]); // 800E05C0
  c->r[3]=c->r[31]|c->r[31]; // 800E05C4
  c->lr=0x800E05CCu; f_8030BD1C(c); // 800E05C8
  W16(c->r[30]+0x00000048u,c->r[3]); // 800E05CC
  c->r[3]=c->r[31]|c->r[31]; // 800E05D0
  c->lr=0x800E05D8u; f_8030BD1C(c); // 800E05D4
  W16(c->r[30]+0x0000004Au,c->r[3]); // 800E05D8
  c->r[3]=c->r[31]|c->r[31]; // 800E05DC
  c->lr=0x800E05E4u; f_8030BD1C(c); // 800E05E0
  W16(c->r[30]+0x0000004Cu,c->r[3]); // 800E05E4
  c->r[3]=c->r[31]|c->r[31]; // 800E05E8
  c->lr=0x800E05F0u; f_8030BD1C(c); // 800E05EC
  W16(c->r[30]+0x0000004Eu,c->r[3]); // 800E05F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E05F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E05F8
  c->lr=c->r[0]; // 800E05FC
  c->r[1]=c->r[1]+0x00000010u; // 800E0600
  return; // 800E0604
}

// fn_800E0608
void f_800E0608(Ctx* __restrict c) {
  trace_call(0x800E0608u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0608
  c->r[12]=R16(c->r[3]+0x0000003Eu); // 800E060C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0610
  c->r[23]=R32(c->r[3]+0x00000000u); // 800E0614
  c->r[24]=R32(c->r[3]+0x00000004u); // 800E0618
  c->r[25]=R16(c->r[3]+0x00000030u); // 800E061C
  c->r[26]=R16(c->r[3]+0x00000032u); // 800E0620
  c->r[27]=R16(c->r[3]+0x00000034u); // 800E0624
  c->r[28]=R16(c->r[3]+0x00000036u); // 800E0628
  c->r[29]=R16(c->r[3]+0x00000038u); // 800E062C
  c->r[30]=R16(c->r[3]+0x0000003Au); // 800E0630
  c->r[31]=R16(c->r[3]+0x0000003Cu); // 800E0634
  c->r[11]=R16(c->r[3]+0x00000040u); // 800E0638
  c->r[10]=R16(c->r[3]+0x00000042u); // 800E063C
  c->r[9]=R16(c->r[3]+0x00000044u); // 800E0640
  c->r[8]=R16(c->r[3]+0x00000046u); // 800E0644
  c->r[7]=R16(c->r[3]+0x00000048u); // 800E0648
  c->r[6]=R16(c->r[3]+0x0000004Au); // 800E064C
  c->r[5]=R16(c->r[3]+0x0000004Cu); // 800E0650
  c->r[0]=R16(c->r[3]+0x0000004Eu); // 800E0654
  W32(c->r[4]+0x00000000u,c->r[23]); // 800E0658
  W32(c->r[4]+0x00000004u,c->r[24]); // 800E065C
  W16(c->r[4]+0x00000030u,c->r[25]); // 800E0660
  W16(c->r[4]+0x00000032u,c->r[26]); // 800E0664
  W16(c->r[4]+0x00000034u,c->r[27]); // 800E0668
  W16(c->r[4]+0x00000036u,c->r[28]); // 800E066C
  W16(c->r[4]+0x00000038u,c->r[29]); // 800E0670
  W16(c->r[4]+0x0000003Au,c->r[30]); // 800E0674
  W16(c->r[4]+0x0000003Cu,c->r[31]); // 800E0678
  W16(c->r[4]+0x0000003Eu,c->r[12]); // 800E067C
  W16(c->r[4]+0x00000040u,c->r[11]); // 800E0680
  W16(c->r[4]+0x00000042u,c->r[10]); // 800E0684
  W16(c->r[4]+0x00000044u,c->r[9]); // 800E0688
  W16(c->r[4]+0x00000046u,c->r[8]); // 800E068C
  W16(c->r[4]+0x00000048u,c->r[7]); // 800E0690
  W16(c->r[4]+0x0000004Au,c->r[6]); // 800E0694
  W16(c->r[4]+0x0000004Cu,c->r[5]); // 800E0698
  W16(c->r[4]+0x0000004Eu,c->r[0]); // 800E069C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E06A0
  c->r[1]=c->r[1]+0x00000030u; // 800E06A4
  return; // 800E06A8
}

// fn_800E06AC
void f_800E06AC(Ctx* __restrict c) {
  trace_call(0x800E06ACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E06AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E06B0
  c->ctr=c->r[12]; // 800E06B4
  if (true) { dispatch(c,c->ctr); return; } // 800E06B8
}

// fn_800E06BC
void f_800E06BC(Ctx* __restrict c) {
  trace_call(0x800E06BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E06BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E06C0
  c->ctr=c->r[12]; // 800E06C4
  if (true) { dispatch(c,c->ctr); return; } // 800E06C8
}

// fn_800E06CC
void f_800E06CC(Ctx* __restrict c) {
  trace_call(0x800E06CCu);
  c->r[3]=0u+0x80410000u; // 800E06CC
  c->r[3]=c->r[3]+0xFFFFDCBFu; // 800E06D0
  return; // 800E06D4
}

// fn_800E06D8
void f_800E06D8(Ctx* __restrict c) {
  trace_call(0x800E06D8u);
  c->r[3]=0u+0x00000050u; // 800E06D8
  return; // 800E06DC
}

// fn_800E06E0
void f_800E06E0(Ctx* __restrict c) {
  trace_call(0x800E06E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E06E0
  c->r[0]=c->lr; // 800E06E4
  c->r[3]=0u+0x00000050u; // 800E06E8
  c->r[4]=c->r[13]+0xFFFFB6D7u; // 800E06EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E06F0
  c->r[5]=0u+0x00000000u; // 800E06F4
  c->r[6]=0u+0x00001001u; // 800E06F8
  c->lr=0x800E0700u; f_80244D20(c); // 800E06FC
  cmps(c,0,(int32_t)c->r[3],0); // 800E0700
  if (crb(c,2)) { goto L_800E070C; } // 800E0704
  c->lr=0x800E070Cu; f_800E04D0(c); // 800E0708
L_800E070C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E070C
  c->lr=c->r[0]; // 800E0710
  c->r[1]=c->r[1]+0x00000010u; // 800E0714
  return; // 800E0718
}

// fn_800E071C
void f_800E071C(Ctx* __restrict c) {
  trace_call(0x800E071Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E071C
  c->r[0]=c->lr; // 800E0720
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0728
  c->r[31]=c->r[3]|c->r[3]; // 800E072C
  c->lr=0x800E0734u; f_800D7120(c); // 800E0730
  c->r[3]=0u+0x80410000u; // 800E0734
  c->r[0]=0u+0x00000000u; // 800E0738
  c->r[3]=c->r[3]+0x00006D8Cu; // 800E073C
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E0740
  c->r[3]=c->r[31]|c->r[31]; // 800E0744
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E0748
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E074C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0750
  c->lr=c->r[0]; // 800E0754
  c->r[1]=c->r[1]+0x00000010u; // 800E0758
  return; // 800E075C
}

// fn_800E0760
void f_800E0760(Ctx* __restrict c) {
  trace_call(0x800E0760u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0760
  c->r[0]=c->lr; // 800E0764
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0768
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E076C
  c->r[30]=c->r[3]|c->r[3]; // 800E0770
  c->r[31]=c->r[4]|c->r[4]; // 800E0774
  c->lr=0x800E077Cu; f_8030D728(c); // 800E0778
  c->r[3]=c->r[31]|c->r[31]; // 800E077C
  c->lr=0x800E0784u; f_8030BD1C(c); // 800E0780
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E0784
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0788
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E078C
  c->lr=c->r[0]; // 800E0790
  c->r[1]=c->r[1]+0x00000010u; // 800E0794
  return; // 800E0798
}

// fn_800E079C
void f_800E079C(Ctx* __restrict c) {
  trace_call(0x800E079Cu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E079C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E07A0
  c->r[0]=R32(c->r[3]+0x00000030u); // 800E07A4
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E07A8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E07AC
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E07B0
  return; // 800E07B4
}

// fn_800E07B8
void f_800E07B8(Ctx* __restrict c) {
  trace_call(0x800E07B8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E07B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E07BC
  c->ctr=c->r[12]; // 800E07C0
  if (true) { dispatch(c,c->ctr); return; } // 800E07C4
}

// fn_800E07C8
void f_800E07C8(Ctx* __restrict c) {
  trace_call(0x800E07C8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E07C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E07CC
  c->ctr=c->r[12]; // 800E07D0
  if (true) { dispatch(c,c->ctr); return; } // 800E07D4
}

// fn_800E07D8
void f_800E07D8(Ctx* __restrict c) {
  trace_call(0x800E07D8u);
  c->r[3]=0u+0x80410000u; // 800E07D8
  c->r[3]=c->r[3]+0xFFFFDCD2u; // 800E07DC
  return; // 800E07E0
}

// fn_800E07E4
void f_800E07E4(Ctx* __restrict c) {
  trace_call(0x800E07E4u);
  c->r[3]=0u+0x00000034u; // 800E07E4
  return; // 800E07E8
}

// fn_800E07EC
void f_800E07EC(Ctx* __restrict c) {
  trace_call(0x800E07ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E07EC
  c->r[0]=c->lr; // 800E07F0
  c->r[3]=0u+0x00000034u; // 800E07F4
  c->r[4]=c->r[13]+0xFFFFB6DCu; // 800E07F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E07FC
  c->r[5]=0u+0x00000000u; // 800E0800
  c->r[6]=0u+0x00001001u; // 800E0804
  c->lr=0x800E080Cu; f_80244D20(c); // 800E0808
  cmps(c,0,(int32_t)c->r[3],0); // 800E080C
  if (crb(c,2)) { goto L_800E0818; } // 800E0810
  c->lr=0x800E0818u; f_800E071C(c); // 800E0814
L_800E0818:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0818
  c->lr=c->r[0]; // 800E081C
  c->r[1]=c->r[1]+0x00000010u; // 800E0820
  return; // 800E0824
}

// fn_800E0828
void f_800E0828(Ctx* __restrict c) {
  trace_call(0x800E0828u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0828
  c->r[0]=c->lr; // 800E082C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0834
  c->r[31]=c->r[3]|c->r[3]; // 800E0838
  c->lr=0x800E0840u; f_800D7120(c); // 800E083C
  c->r[4]=0u+0x80410000u; // 800E0840
  c->r[3]=0u+0xF99E0000u; // 800E0844
  c->r[0]=c->r[3]+0xFFFF815Cu; // 800E0848
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E084C
  c->r[4]=c->r[4]+0x00006D58u; // 800E0850
  c->r[3]=c->r[31]|c->r[31]; // 800E0854
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E0858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E085C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0860
  c->lr=c->r[0]; // 800E0864
  c->r[1]=c->r[1]+0x00000010u; // 800E0868
  return; // 800E086C
}

// fn_800E0870
void f_800E0870(Ctx* __restrict c) {
  trace_call(0x800E0870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0870
  c->r[0]=c->lr; // 800E0874
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0878
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E087C
  c->r[30]=c->r[3]|c->r[3]; // 800E0880
  c->r[31]=c->r[4]|c->r[4]; // 800E0884
  c->lr=0x800E088Cu; f_8030D728(c); // 800E0888
  c->r[3]=c->r[31]|c->r[31]; // 800E088C
  c->lr=0x800E0894u; f_8030BD1C(c); // 800E0890
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E0894
  c->r[3]=c->r[31]|c->r[31]; // 800E0898
  c->lr=0x800E08A0u; f_8030BD1C(c); // 800E089C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E08A0
  c->r[3]=c->r[31]|c->r[31]; // 800E08A4
  c->lr=0x800E08ACu; f_8030BD1C(c); // 800E08A8
  W8(c->r[30]+0x00000038u,c->r[3]); // 800E08AC
  c->r[3]=c->r[31]|c->r[31]; // 800E08B0
  c->lr=0x800E08B8u; f_8030BD1C(c); // 800E08B4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E08B8
  c->r[3]=c->r[31]|c->r[31]; // 800E08BC
  c->lr=0x800E08C4u; f_8030BD1C(c); // 800E08C0
  W8(c->r[30]+0x00000040u,c->r[3]); // 800E08C4
  c->r[3]=c->r[31]|c->r[31]; // 800E08C8
  c->lr=0x800E08D0u; f_8030C0A0(c); // 800E08CC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800E08D0
  c->r[3]=c->r[31]|c->r[31]; // 800E08D4
  c->lr=0x800E08DCu; f_8030BD1C(c); // 800E08D8
  W32(c->r[30]+0x00000048u,c->r[3]); // 800E08DC
  c->r[3]=c->r[31]|c->r[31]; // 800E08E0
  c->lr=0x800E08E8u; f_8030BD1C(c); // 800E08E4
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800E08E8
  c->r[3]=c->r[31]|c->r[31]; // 800E08EC
  c->lr=0x800E08F4u; f_8030BD1C(c); // 800E08F0
  W8(c->r[30]+0x0000004Du,c->r[3]); // 800E08F4
  c->r[3]=c->r[31]|c->r[31]; // 800E08F8
  c->lr=0x800E0900u; f_8030BD1C(c); // 800E08FC
  W8(c->r[30]+0x0000004Eu,c->r[3]); // 800E0900
  c->r[3]=c->r[31]|c->r[31]; // 800E0904
  c->lr=0x800E090Cu; f_8030BD1C(c); // 800E0908
  W8(c->r[30]+0x0000004Fu,c->r[3]); // 800E090C
  c->r[3]=c->r[31]|c->r[31]; // 800E0910
  c->lr=0x800E0918u; f_8030BD1C(c); // 800E0914
  W8(c->r[30]+0x00000050u,c->r[3]); // 800E0918
  c->r[3]=c->r[31]|c->r[31]; // 800E091C
  c->lr=0x800E0924u; f_8030BD1C(c); // 800E0920
  W8(c->r[30]+0x00000051u,c->r[3]); // 800E0924
  c->r[3]=c->r[31]|c->r[31]; // 800E0928
  c->lr=0x800E0930u; f_8030BD1C(c); // 800E092C
  W8(c->r[30]+0x00000052u,c->r[3]); // 800E0930
  c->r[3]=c->r[31]|c->r[31]; // 800E0934
  c->lr=0x800E093Cu; f_8030BD1C(c); // 800E0938
  W8(c->r[30]+0x00000053u,c->r[3]); // 800E093C
  c->r[3]=c->r[31]|c->r[31]; // 800E0940
  c->lr=0x800E0948u; f_8030BD1C(c); // 800E0944
  W8(c->r[30]+0x00000054u,c->r[3]); // 800E0948
  c->r[3]=c->r[31]|c->r[31]; // 800E094C
  c->lr=0x800E0954u; f_8030BD1C(c); // 800E0950
  W8(c->r[30]+0x00000055u,c->r[3]); // 800E0954
  c->r[3]=c->r[31]|c->r[31]; // 800E0958
  c->lr=0x800E0960u; f_8030BD1C(c); // 800E095C
  W8(c->r[30]+0x00000056u,c->r[3]); // 800E0960
  c->r[3]=c->r[31]|c->r[31]; // 800E0964
  c->lr=0x800E096Cu; f_8030BD1C(c); // 800E0968
  W8(c->r[30]+0x00000057u,c->r[3]); // 800E096C
  c->r[3]=c->r[31]|c->r[31]; // 800E0970
  c->lr=0x800E0978u; f_8030BD1C(c); // 800E0974
  W8(c->r[30]+0x00000058u,c->r[3]); // 800E0978
  c->r[3]=c->r[31]|c->r[31]; // 800E097C
  c->lr=0x800E0984u; f_8030C0A0(c); // 800E0980
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 800E0984
  c->r[3]=c->r[31]|c->r[31]; // 800E0988
  c->lr=0x800E0990u; f_8030BD1C(c); // 800E098C
  W8(c->r[30]+0x00000060u,c->r[3]); // 800E0990
  c->r[3]=c->r[31]|c->r[31]; // 800E0994
  c->lr=0x800E099Cu; f_8030BD1C(c); // 800E0998
  W8(c->r[30]+0x00000061u,c->r[3]); // 800E099C
  c->r[3]=c->r[31]|c->r[31]; // 800E09A0
  c->lr=0x800E09A8u; f_8030BD1C(c); // 800E09A4
  W8(c->r[30]+0x00000062u,c->r[3]); // 800E09A8
  c->r[3]=c->r[31]|c->r[31]; // 800E09AC
  c->lr=0x800E09B4u; f_8030BD1C(c); // 800E09B0
  W8(c->r[30]+0x00000063u,c->r[3]); // 800E09B4
  c->r[3]=c->r[31]|c->r[31]; // 800E09B8
  c->lr=0x800E09C0u; f_8030BD1C(c); // 800E09BC
  W8(c->r[30]+0x00000064u,c->r[3]); // 800E09C0
  c->r[3]=c->r[31]|c->r[31]; // 800E09C4
  c->lr=0x800E09CCu; f_8030C0A0(c); // 800E09C8
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 800E09CC
  c->r[3]=c->r[31]|c->r[31]; // 800E09D0
  c->lr=0x800E09D8u; f_8030C0A0(c); // 800E09D4
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[1]);} // 800E09D8
  c->r[3]=c->r[31]|c->r[31]; // 800E09DC
  c->lr=0x800E09E4u; f_8030BD1C(c); // 800E09E0
  W8(c->r[30]+0x00000070u,c->r[3]); // 800E09E4
  c->r[3]=c->r[31]|c->r[31]; // 800E09E8
  c->lr=0x800E09F0u; f_8030BD1C(c); // 800E09EC
  W8(c->r[30]+0x00000071u,c->r[3]); // 800E09F0
  c->r[3]=c->r[31]|c->r[31]; // 800E09F4
  c->lr=0x800E09FCu; f_8030BD1C(c); // 800E09F8
  W8(c->r[30]+0x00000072u,c->r[3]); // 800E09FC
  c->r[3]=c->r[31]|c->r[31]; // 800E0A00
  c->lr=0x800E0A08u; f_8030BD1C(c); // 800E0A04
  W8(c->r[30]+0x00000073u,c->r[3]); // 800E0A08
  c->r[3]=c->r[31]|c->r[31]; // 800E0A0C
  c->lr=0x800E0A14u; f_8030C0A0(c); // 800E0A10
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800E0A14
  c->r[3]=c->r[31]|c->r[31]; // 800E0A18
  c->lr=0x800E0A20u; f_8030C0A0(c); // 800E0A1C
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 800E0A20
  c->r[3]=c->r[31]|c->r[31]; // 800E0A24
  c->lr=0x800E0A2Cu; f_8030C0A0(c); // 800E0A28
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800E0A2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0A30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0A34
  c->lr=c->r[0]; // 800E0A38
  c->r[1]=c->r[1]+0x00000010u; // 800E0A3C
  return; // 800E0A40
}

// fn_800E0A44
void f_800E0A44(Ctx* __restrict c) {
  trace_call(0x800E0A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0A44
  c->r[0]=c->lr; // 800E0A48
  W32(c->r[1]+0x00000064u,c->r[0]); // 800E0A4C
  c->r[11]=c->r[1]+0x00000060u; // 800E0A50
  c->lr=0x800E0A58u; f_803ADD08(c); // 800E0A54
  c->r[15]=R8(c->r[3]+0x00000070u); // 800E0A58
  W32(c->r[1]+0x00000014u,c->r[15]); // 800E0A5C
  c->r[15]=R8(c->r[3]+0x00000071u); // 800E0A60
  c->r[0]=R8(c->r[3]+0x00000063u); // 800E0A64
  W32(c->r[1]+0x00000008u,c->r[15]); // 800E0A68
  c->r[15]=R8(c->r[3]+0x00000072u); // 800E0A6C
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 800E0A70
  c->r[15]=R8(c->r[3]+0x00000073u); // 800E0A74
  W8(c->r[4]+0x00000063u,c->r[0]); // 800E0A78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0A7C
  W8(c->r[4]+0x00000070u,c->r[0]); // 800E0A80
  c->r[0]=R32(c->r[1]+0x00000008u); // 800E0A84
  c->r[16]=R32(c->r[3]+0x00000000u); // 800E0A88
  c->r[17]=R32(c->r[3]+0x00000004u); // 800E0A8C
  c->r[18]=R8(c->r[3]+0x00000030u); // 800E0A90
  c->r[19]=R32(c->r[3]+0x00000034u); // 800E0A94
  c->r[20]=R8(c->r[3]+0x00000038u); // 800E0A98
  c->r[21]=R32(c->r[3]+0x0000003Cu); // 800E0A9C
  c->r[22]=R8(c->r[3]+0x00000040u); // 800E0AA0
  {uint32_t ea=c->r[3]+0x00000044u; c->f[6]=c->ps1[6]=RF32(ea);} // 800E0AA4
  c->r[23]=R32(c->r[3]+0x00000048u); // 800E0AA8
  c->r[24]=R8(c->r[3]+0x0000004Cu); // 800E0AAC
  c->r[25]=R8(c->r[3]+0x0000004Du); // 800E0AB0
  c->r[26]=R8(c->r[3]+0x0000004Eu); // 800E0AB4
  c->r[27]=R8(c->r[3]+0x0000004Fu); // 800E0AB8
  c->r[28]=R8(c->r[3]+0x00000050u); // 800E0ABC
  c->r[29]=R8(c->r[3]+0x00000051u); // 800E0AC0
  c->r[30]=R8(c->r[3]+0x00000052u); // 800E0AC4
  c->r[31]=R8(c->r[3]+0x00000053u); // 800E0AC8
  c->r[12]=R8(c->r[3]+0x00000054u); // 800E0ACC
  c->r[11]=R8(c->r[3]+0x00000055u); // 800E0AD0
  c->r[10]=R8(c->r[3]+0x00000056u); // 800E0AD4
  c->r[9]=R8(c->r[3]+0x00000057u); // 800E0AD8
  c->r[8]=R8(c->r[3]+0x00000058u); // 800E0ADC
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800E0AE0
  c->r[7]=R8(c->r[3]+0x00000060u); // 800E0AE4
  c->r[6]=R8(c->r[3]+0x00000061u); // 800E0AE8
  c->r[5]=R8(c->r[3]+0x00000062u); // 800E0AEC
  c->r[14]=R8(c->r[3]+0x00000064u); // 800E0AF0
  {uint32_t ea=c->r[3]+0x00000068u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E0AF4
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E0AF8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E0AFC
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0B00
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0B04
  W8(c->r[4]+0x00000071u,c->r[0]); // 800E0B08
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800E0B0C
  W8(c->r[4]+0x00000055u,c->r[11]); // 800E0B10
  c->r[11]=c->r[1]+0x00000060u; // 800E0B14
  W8(c->r[4]+0x00000072u,c->r[0]); // 800E0B18
  c->r[0]=c->r[15]|c->r[15]; // 800E0B1C
  W32(c->r[4]+0x00000000u,c->r[16]); // 800E0B20
  W32(c->r[4]+0x00000004u,c->r[17]); // 800E0B24
  W8(c->r[4]+0x00000030u,c->r[18]); // 800E0B28
  W32(c->r[4]+0x00000034u,c->r[19]); // 800E0B2C
  W8(c->r[4]+0x00000038u,c->r[20]); // 800E0B30
  W32(c->r[4]+0x0000003Cu,c->r[21]); // 800E0B34
  W8(c->r[4]+0x00000040u,c->r[22]); // 800E0B38
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[6]);} // 800E0B3C
  W32(c->r[4]+0x00000048u,c->r[23]); // 800E0B40
  W8(c->r[4]+0x0000004Cu,c->r[24]); // 800E0B44
  W8(c->r[4]+0x0000004Du,c->r[25]); // 800E0B48
  W8(c->r[4]+0x0000004Eu,c->r[26]); // 800E0B4C
  W8(c->r[4]+0x0000004Fu,c->r[27]); // 800E0B50
  W8(c->r[4]+0x00000050u,c->r[28]); // 800E0B54
  W8(c->r[4]+0x00000051u,c->r[29]); // 800E0B58
  W8(c->r[4]+0x00000052u,c->r[30]); // 800E0B5C
  W8(c->r[4]+0x00000053u,c->r[31]); // 800E0B60
  W8(c->r[4]+0x00000054u,c->r[12]); // 800E0B64
  W8(c->r[4]+0x00000056u,c->r[10]); // 800E0B68
  W8(c->r[4]+0x00000057u,c->r[9]); // 800E0B6C
  W8(c->r[4]+0x00000058u,c->r[8]); // 800E0B70
  {uint32_t ea=c->r[4]+0x0000005Cu; WF32(ea,c->f[5]);} // 800E0B74
  W8(c->r[4]+0x00000060u,c->r[7]); // 800E0B78
  W8(c->r[4]+0x00000061u,c->r[6]); // 800E0B7C
  W8(c->r[4]+0x00000062u,c->r[5]); // 800E0B80
  W8(c->r[4]+0x00000064u,c->r[14]); // 800E0B84
  {uint32_t ea=c->r[4]+0x00000068u; WF32(ea,c->f[4]);} // 800E0B88
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[3]);} // 800E0B8C
  W8(c->r[4]+0x00000073u,c->r[0]); // 800E0B90
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[2]);} // 800E0B94
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[1]);} // 800E0B98
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[0]);} // 800E0B9C
  W32(c->r[1]+0x00000010u,c->r[15]); // 800E0BA0
  c->lr=0x800E0BA8u; f_803ADD54(c); // 800E0BA4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800E0BA8
  c->lr=c->r[0]; // 800E0BAC
  c->r[1]=c->r[1]+0x00000060u; // 800E0BB0
  return; // 800E0BB4
}

// fn_800E0BB8
void f_800E0BB8(Ctx* __restrict c) {
  trace_call(0x800E0BB8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0BB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E0BBC
  c->ctr=c->r[12]; // 800E0BC0
  if (true) { dispatch(c,c->ctr); return; } // 800E0BC4
}

// fn_800E0BC8
void f_800E0BC8(Ctx* __restrict c) {
  trace_call(0x800E0BC8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0BC8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E0BCC
  c->ctr=c->r[12]; // 800E0BD0
  if (true) { dispatch(c,c->ctr); return; } // 800E0BD4
}

// fn_800E0BD8
void f_800E0BD8(Ctx* __restrict c) {
  trace_call(0x800E0BD8u);
  c->r[3]=0u+0x80410000u; // 800E0BD8
  c->r[3]=c->r[3]+0xFFFFDCE1u; // 800E0BDC
  return; // 800E0BE0
}

// fn_800E0BE4
void f_800E0BE4(Ctx* __restrict c) {
  trace_call(0x800E0BE4u);
  c->r[3]=0u+0x00000080u; // 800E0BE4
  return; // 800E0BE8
}

// fn_800E0BEC
void f_800E0BEC(Ctx* __restrict c) {
  trace_call(0x800E0BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0BEC
  c->r[0]=c->lr; // 800E0BF0
  c->r[3]=0u+0x00000080u; // 800E0BF4
  c->r[4]=c->r[13]+0xFFFFB6E1u; // 800E0BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0BFC
  c->r[5]=0u+0x00000000u; // 800E0C00
  c->r[6]=0u+0x00001001u; // 800E0C04
  c->lr=0x800E0C0Cu; f_80244D20(c); // 800E0C08
  cmps(c,0,(int32_t)c->r[3],0); // 800E0C0C
  if (crb(c,2)) { goto L_800E0C18; } // 800E0C10
  c->lr=0x800E0C18u; f_800E0828(c); // 800E0C14
L_800E0C18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0C18
  c->lr=c->r[0]; // 800E0C1C
  c->r[1]=c->r[1]+0x00000010u; // 800E0C20
  return; // 800E0C24
}

// fn_800E0C28
void f_800E0C28(Ctx* __restrict c) {
  trace_call(0x800E0C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0C28
  c->r[0]=c->lr; // 800E0C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0C30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0C34
  c->r[31]=c->r[3]|c->r[3]; // 800E0C38
  c->lr=0x800E0C40u; f_800D7120(c); // 800E0C3C
  c->r[4]=0u+0x80410000u; // 800E0C40
  c->r[3]=0u+0x9AC80000u; // 800E0C44
  c->r[0]=c->r[3]+0xFFFF9173u; // 800E0C48
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E0C4C
  c->r[4]=c->r[4]+0x00006D24u; // 800E0C50
  c->r[3]=c->r[31]|c->r[31]; // 800E0C54
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E0C58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0C5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0C60
  c->lr=c->r[0]; // 800E0C64
  c->r[1]=c->r[1]+0x00000010u; // 800E0C68
  return; // 800E0C6C
}

// fn_800E0C70
void f_800E0C70(Ctx* __restrict c) {
  trace_call(0x800E0C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0C70
  c->r[0]=c->lr; // 800E0C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0C78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0C7C
  c->r[30]=c->r[3]|c->r[3]; // 800E0C80
  c->r[31]=c->r[4]|c->r[4]; // 800E0C84
  c->lr=0x800E0C8Cu; f_8030D728(c); // 800E0C88
  c->r[3]=c->r[31]|c->r[31]; // 800E0C8C
  c->lr=0x800E0C94u; f_8030BD1C(c); // 800E0C90
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E0C94
  c->r[3]=c->r[31]|c->r[31]; // 800E0C98
  c->lr=0x800E0CA0u; f_8030BD1C(c); // 800E0C9C
  W8(c->r[30]+0x00000031u,c->r[3]); // 800E0CA0
  c->r[3]=c->r[31]|c->r[31]; // 800E0CA4
  c->lr=0x800E0CACu; f_8030C0A0(c); // 800E0CA8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800E0CAC
  c->r[3]=c->r[31]|c->r[31]; // 800E0CB0
  c->lr=0x800E0CB8u; f_8030C0A0(c); // 800E0CB4
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800E0CB8
  c->r[3]=c->r[31]|c->r[31]; // 800E0CBC
  c->lr=0x800E0CC4u; f_8030BD1C(c); // 800E0CC0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E0CC4
  c->r[3]=c->r[31]|c->r[31]; // 800E0CC8
  c->lr=0x800E0CD0u; f_8030C0A0(c); // 800E0CCC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800E0CD0
  c->r[3]=c->r[31]|c->r[31]; // 800E0CD4
  c->lr=0x800E0CDCu; f_8030C0A0(c); // 800E0CD8
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800E0CDC
  c->r[3]=c->r[31]|c->r[31]; // 800E0CE0
  c->lr=0x800E0CE8u; f_8030C0A0(c); // 800E0CE4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800E0CE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0CEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0CF0
  c->lr=c->r[0]; // 800E0CF4
  c->r[1]=c->r[1]+0x00000010u; // 800E0CF8
  return; // 800E0CFC
}

// fn_800E0D00
void f_800E0D00(Ctx* __restrict c) {
  trace_call(0x800E0D00u);
  c->r[8]=R32(c->r[3]+0x00000000u); // 800E0D00
  c->r[7]=R32(c->r[3]+0x00000004u); // 800E0D04
  c->r[6]=R8(c->r[3]+0x00000030u); // 800E0D08
  c->r[5]=R8(c->r[3]+0x00000031u); // 800E0D0C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E0D10
  {uint32_t ea=c->r[3]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E0D14
  c->r[0]=R8(c->r[3]+0x0000003Cu); // 800E0D18
  {uint32_t ea=c->r[3]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E0D1C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0D20
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0D24
  W32(c->r[4]+0x00000000u,c->r[8]); // 800E0D28
  W32(c->r[4]+0x00000004u,c->r[7]); // 800E0D2C
  W8(c->r[4]+0x00000030u,c->r[6]); // 800E0D30
  W8(c->r[4]+0x00000031u,c->r[5]); // 800E0D34
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[4]);} // 800E0D38
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[3]);} // 800E0D3C
  W8(c->r[4]+0x0000003Cu,c->r[0]); // 800E0D40
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[2]);} // 800E0D44
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[1]);} // 800E0D48
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[0]);} // 800E0D4C
  return; // 800E0D50
}

// fn_800E0D54
void f_800E0D54(Ctx* __restrict c) {
  trace_call(0x800E0D54u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0D54
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E0D58
  c->ctr=c->r[12]; // 800E0D5C
  if (true) { dispatch(c,c->ctr); return; } // 800E0D60
}

// fn_800E0D64
void f_800E0D64(Ctx* __restrict c) {
  trace_call(0x800E0D64u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0D64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E0D68
  c->ctr=c->r[12]; // 800E0D6C
  if (true) { dispatch(c,c->ctr); return; } // 800E0D70
}

// fn_800E0D74
void f_800E0D74(Ctx* __restrict c) {
  trace_call(0x800E0D74u);
  c->r[3]=0u+0x80410000u; // 800E0D74
  c->r[3]=c->r[3]+0xFFFFDCF4u; // 800E0D78
  return; // 800E0D7C
}

// fn_800E0D80
void f_800E0D80(Ctx* __restrict c) {
  trace_call(0x800E0D80u);
  c->r[3]=0u+0x0000004Cu; // 800E0D80
  return; // 800E0D84
}

// fn_800E0D88
void f_800E0D88(Ctx* __restrict c) {
  trace_call(0x800E0D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0D88
  c->r[0]=c->lr; // 800E0D8C
  c->r[3]=0u+0x0000004Cu; // 800E0D90
  c->r[4]=c->r[13]+0xFFFFB6E6u; // 800E0D94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0D98
  c->r[5]=0u+0x00000000u; // 800E0D9C
  c->r[6]=0u+0x00001001u; // 800E0DA0
  c->lr=0x800E0DA8u; f_80244D20(c); // 800E0DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800E0DA8
  if (crb(c,2)) { goto L_800E0DB4; } // 800E0DAC
  c->lr=0x800E0DB4u; f_800E0C28(c); // 800E0DB0
L_800E0DB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0DB4
  c->lr=c->r[0]; // 800E0DB8
  c->r[1]=c->r[1]+0x00000010u; // 800E0DBC
  return; // 800E0DC0
}

// fn_800E0DC4
void f_800E0DC4(Ctx* __restrict c) {
  trace_call(0x800E0DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0DC4
  c->r[0]=c->lr; // 800E0DC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0DCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0DD0
  c->r[31]=c->r[3]|c->r[3]; // 800E0DD4
  c->lr=0x800E0DDCu; f_800D7120(c); // 800E0DD8
  c->r[4]=0u+0x80410000u; // 800E0DDC
  c->r[3]=0u+0xC7880000u; // 800E0DE0
  c->r[0]=c->r[3]+0x000005EDu; // 800E0DE4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E0DE8
  c->r[4]=c->r[4]+0x00006CF0u; // 800E0DEC
  c->r[3]=c->r[31]|c->r[31]; // 800E0DF0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E0DF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0DFC
  c->lr=c->r[0]; // 800E0E00
  c->r[1]=c->r[1]+0x00000010u; // 800E0E04
  return; // 800E0E08
}

// fn_800E0E0C
void f_800E0E0C(Ctx* __restrict c) {
  trace_call(0x800E0E0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0E0C
  c->r[0]=c->lr; // 800E0E10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0E14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0E18
  c->r[30]=c->r[3]|c->r[3]; // 800E0E1C
  c->r[31]=c->r[4]|c->r[4]; // 800E0E20
  c->lr=0x800E0E28u; f_8030D728(c); // 800E0E24
  c->r[3]=c->r[31]|c->r[31]; // 800E0E28
  c->lr=0x800E0E30u; f_8030BD1C(c); // 800E0E2C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E0E30
  c->r[3]=c->r[31]|c->r[31]; // 800E0E34
  c->lr=0x800E0E3Cu; f_8030C0A0(c); // 800E0E38
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800E0E3C
  c->r[3]=c->r[31]|c->r[31]; // 800E0E40
  c->lr=0x800E0E48u; f_8030C0A0(c); // 800E0E44
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800E0E48
  c->r[3]=c->r[31]|c->r[31]; // 800E0E4C
  c->lr=0x800E0E54u; f_8030C0A0(c); // 800E0E50
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E0E54
  c->r[3]=c->r[31]|c->r[31]; // 800E0E58
  c->lr=0x800E0E60u; f_8030C0A0(c); // 800E0E5C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800E0E60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0E64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0E68
  c->lr=c->r[0]; // 800E0E6C
  c->r[1]=c->r[1]+0x00000010u; // 800E0E70
  return; // 800E0E74
}

// fn_800E0E78
void f_800E0E78(Ctx* __restrict c) {
  trace_call(0x800E0E78u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E0E78
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E0E7C
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E0E80
  {uint32_t ea=c->r[3]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E0E84
  {uint32_t ea=c->r[3]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E0E88
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0E8C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0E90
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E0E94
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E0E98
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E0E9C
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[3]);} // 800E0EA0
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[2]);} // 800E0EA4
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E0EA8
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 800E0EAC
  return; // 800E0EB0
}

// fn_800E0EB4
void f_800E0EB4(Ctx* __restrict c) {
  trace_call(0x800E0EB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0EB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E0EB8
  c->ctr=c->r[12]; // 800E0EBC
  if (true) { dispatch(c,c->ctr); return; } // 800E0EC0
}

// fn_800E0EC4
void f_800E0EC4(Ctx* __restrict c) {
  trace_call(0x800E0EC4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0EC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E0EC8
  c->ctr=c->r[12]; // 800E0ECC
  if (true) { dispatch(c,c->ctr); return; } // 800E0ED0
}

// fn_800E0ED4
void f_800E0ED4(Ctx* __restrict c) {
  trace_call(0x800E0ED4u);
  c->r[3]=0u+0x80410000u; // 800E0ED4
  c->r[3]=c->r[3]+0xFFFFDD06u; // 800E0ED8
  return; // 800E0EDC
}

// fn_800E0EE0
void f_800E0EE0(Ctx* __restrict c) {
  trace_call(0x800E0EE0u);
  c->r[3]=0u+0x00000044u; // 800E0EE0
  return; // 800E0EE4
}

// fn_800E0EE8
void f_800E0EE8(Ctx* __restrict c) {
  trace_call(0x800E0EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0EE8
  c->r[0]=c->lr; // 800E0EEC
  c->r[3]=0u+0x00000044u; // 800E0EF0
  c->r[4]=c->r[13]+0xFFFFB6EBu; // 800E0EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0EF8
  c->r[5]=0u+0x00000000u; // 800E0EFC
  c->r[6]=0u+0x00001001u; // 800E0F00
  c->lr=0x800E0F08u; f_80244D20(c); // 800E0F04
  cmps(c,0,(int32_t)c->r[3],0); // 800E0F08
  if (crb(c,2)) { goto L_800E0F14; } // 800E0F0C
  c->lr=0x800E0F14u; f_800E0DC4(c); // 800E0F10
L_800E0F14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0F14
  c->lr=c->r[0]; // 800E0F18
  c->r[1]=c->r[1]+0x00000010u; // 800E0F1C
  return; // 800E0F20
}

// fn_800E0F24
void f_800E0F24(Ctx* __restrict c) {
  trace_call(0x800E0F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0F24
  c->r[0]=c->lr; // 800E0F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0F30
  c->r[31]=c->r[3]|c->r[3]; // 800E0F34
  c->lr=0x800E0F3Cu; f_800D7120(c); // 800E0F38
  c->r[4]=0u+0x80410000u; // 800E0F3C
  c->r[3]=0u+0x88220000u; // 800E0F40
  c->r[0]=c->r[3]+0xFFFF8071u; // 800E0F44
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E0F48
  c->r[4]=c->r[4]+0x00006CBCu; // 800E0F4C
  c->r[3]=c->r[31]|c->r[31]; // 800E0F50
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E0F54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0F58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0F5C
  c->lr=c->r[0]; // 800E0F60
  c->r[1]=c->r[1]+0x00000010u; // 800E0F64
  return; // 800E0F68
}

// fn_800E0F6C
void f_800E0F6C(Ctx* __restrict c) {
  trace_call(0x800E0F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0F6C
  c->r[0]=c->lr; // 800E0F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0F74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E0F78
  c->r[30]=c->r[3]|c->r[3]; // 800E0F7C
  c->r[31]=c->r[4]|c->r[4]; // 800E0F80
  c->lr=0x800E0F88u; f_8030D728(c); // 800E0F84
  c->r[3]=c->r[31]|c->r[31]; // 800E0F88
  c->lr=0x800E0F90u; f_8030BD1C(c); // 800E0F8C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E0F90
  c->r[3]=c->r[31]|c->r[31]; // 800E0F94
  c->lr=0x800E0F9Cu; f_8030C0A0(c); // 800E0F98
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800E0F9C
  c->r[3]=c->r[31]|c->r[31]; // 800E0FA0
  c->lr=0x800E0FA8u; f_8030C0A0(c); // 800E0FA4
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800E0FA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E0FAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0FB0
  c->lr=c->r[0]; // 800E0FB4
  c->r[1]=c->r[1]+0x00000010u; // 800E0FB8
  return; // 800E0FBC
}

// fn_800E0FC0
void f_800E0FC0(Ctx* __restrict c) {
  trace_call(0x800E0FC0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E0FC0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E0FC4
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E0FC8
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0FCC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0FD0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E0FD4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E0FD8
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E0FDC
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[1]);} // 800E0FE0
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 800E0FE4
  return; // 800E0FE8
}

// fn_800E0FEC
void f_800E0FEC(Ctx* __restrict c) {
  trace_call(0x800E0FECu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0FEC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E0FF0
  c->ctr=c->r[12]; // 800E0FF4
  if (true) { dispatch(c,c->ctr); return; } // 800E0FF8
}

// fn_800E0FFC
void f_800E0FFC(Ctx* __restrict c) {
  trace_call(0x800E0FFCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E0FFC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E1000
  c->ctr=c->r[12]; // 800E1004
  if (true) { dispatch(c,c->ctr); return; } // 800E1008
}

// fn_800E100C
void f_800E100C(Ctx* __restrict c) {
  trace_call(0x800E100Cu);
  c->r[3]=0u+0x80410000u; // 800E100C
  c->r[3]=c->r[3]+0xFFFFDD16u; // 800E1010
  return; // 800E1014
}

// fn_800E1018
void f_800E1018(Ctx* __restrict c) {
  trace_call(0x800E1018u);
  c->r[3]=0u+0x0000003Cu; // 800E1018
  return; // 800E101C
}

// fn_800E1020
void f_800E1020(Ctx* __restrict c) {
  trace_call(0x800E1020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1020
  c->r[0]=c->lr; // 800E1024
  c->r[3]=0u+0x0000003Cu; // 800E1028
  c->r[4]=c->r[13]+0xFFFFB6F0u; // 800E102C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1030
  c->r[5]=0u+0x00000000u; // 800E1034
  c->r[6]=0u+0x00001001u; // 800E1038
  c->lr=0x800E1040u; f_80244D20(c); // 800E103C
  cmps(c,0,(int32_t)c->r[3],0); // 800E1040
  if (crb(c,2)) { goto L_800E104C; } // 800E1044
  c->lr=0x800E104Cu; f_800E0F24(c); // 800E1048
L_800E104C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E104C
  c->lr=c->r[0]; // 800E1050
  c->r[1]=c->r[1]+0x00000010u; // 800E1054
  return; // 800E1058
}

// fn_800E105C
void f_800E105C(Ctx* __restrict c) {
  trace_call(0x800E105Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E105C
  c->r[0]=c->lr; // 800E1060
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1064
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1068
  c->r[31]=c->r[3]|c->r[3]; // 800E106C
  c->lr=0x800E1074u; f_800D7120(c); // 800E1070
  c->r[4]=0u+0x80410000u; // 800E1074
  c->r[3]=0u+0xA6F30000u; // 800E1078
  c->r[0]=c->r[3]+0x00006DCDu; // 800E107C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E1080
  c->r[4]=c->r[4]+0x00006C88u; // 800E1084
  c->r[3]=c->r[31]|c->r[31]; // 800E1088
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E108C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1090
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1094
  c->lr=c->r[0]; // 800E1098
  c->r[1]=c->r[1]+0x00000010u; // 800E109C
  return; // 800E10A0
}

// fn_800E10A4
void f_800E10A4(Ctx* __restrict c) {
  trace_call(0x800E10A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E10A4
  c->r[0]=c->lr; // 800E10A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E10AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E10B0
  c->r[30]=c->r[3]|c->r[3]; // 800E10B4
  c->r[31]=c->r[4]|c->r[4]; // 800E10B8
  c->lr=0x800E10C0u; f_8030D728(c); // 800E10BC
  c->r[3]=c->r[31]|c->r[31]; // 800E10C0
  c->lr=0x800E10C8u; f_8030BD1C(c); // 800E10C4
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E10C8
  c->r[3]=c->r[31]|c->r[31]; // 800E10CC
  c->lr=0x800E10D4u; f_8030C0A0(c); // 800E10D0
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800E10D4
  c->r[3]=c->r[31]|c->r[31]; // 800E10D8
  c->lr=0x800E10E0u; f_8030C0A0(c); // 800E10DC
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800E10E0
  c->r[3]=c->r[31]|c->r[31]; // 800E10E4
  c->lr=0x800E10ECu; f_8030C0A0(c); // 800E10E8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E10EC
  c->r[3]=c->r[31]|c->r[31]; // 800E10F0
  c->lr=0x800E10F8u; f_8030C0A0(c); // 800E10F4
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800E10F8
  c->r[3]=c->r[31]|c->r[31]; // 800E10FC
  c->lr=0x800E1104u; f_8030C0A0(c); // 800E1100
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800E1104
  c->r[3]=c->r[31]|c->r[31]; // 800E1108
  c->lr=0x800E1110u; f_8030C0A0(c); // 800E110C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800E1110
  c->r[3]=c->r[31]|c->r[31]; // 800E1114
  c->lr=0x800E111Cu; f_8030C0A0(c); // 800E1118
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800E111C
  c->r[3]=c->r[31]|c->r[31]; // 800E1120
  c->lr=0x800E1128u; f_8030C0A0(c); // 800E1124
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800E1128
  c->r[3]=c->r[31]|c->r[31]; // 800E112C
  c->lr=0x800E1134u; f_8030C0A0(c); // 800E1130
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800E1134
  c->r[3]=c->r[31]|c->r[31]; // 800E1138
  c->lr=0x800E1140u; f_8030C0A0(c); // 800E113C
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800E1140
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1144
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1148
  c->lr=c->r[0]; // 800E114C
  c->r[1]=c->r[1]+0x00000010u; // 800E1150
  return; // 800E1154
}

// fn_800E1158
void f_800E1158(Ctx* __restrict c) {
  trace_call(0x800E1158u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E1158
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E115C
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E1160
  {uint32_t ea=c->r[3]+0x00000034u; c->f[9]=c->ps1[9]=RF32(ea);} // 800E1164
  {uint32_t ea=c->r[3]+0x00000038u; c->f[8]=c->ps1[8]=RF32(ea);} // 800E1168
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 800E116C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[6]=c->ps1[6]=RF32(ea);} // 800E1170
  {uint32_t ea=c->r[3]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 800E1174
  {uint32_t ea=c->r[3]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 800E1178
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E117C
  {uint32_t ea=c->r[3]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1180
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1184
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1188
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E118C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E1190
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E1194
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[9]);} // 800E1198
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[8]);} // 800E119C
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[7]);} // 800E11A0
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[6]);} // 800E11A4
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[5]);} // 800E11A8
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[4]);} // 800E11AC
  {uint32_t ea=c->r[4]+0x0000004Cu; WF32(ea,c->f[3]);} // 800E11B0
  {uint32_t ea=c->r[4]+0x00000050u; WF32(ea,c->f[2]);} // 800E11B4
  {uint32_t ea=c->r[4]+0x00000054u; WF32(ea,c->f[1]);} // 800E11B8
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 800E11BC
  return; // 800E11C0
}

// fn_800E11C4
void f_800E11C4(Ctx* __restrict c) {
  trace_call(0x800E11C4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E11C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E11C8
  c->ctr=c->r[12]; // 800E11CC
  if (true) { dispatch(c,c->ctr); return; } // 800E11D0
}

// fn_800E11D4
void f_800E11D4(Ctx* __restrict c) {
  trace_call(0x800E11D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E11D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E11D8
  c->ctr=c->r[12]; // 800E11DC
  if (true) { dispatch(c,c->ctr); return; } // 800E11E0
}

// fn_800E11E4
void f_800E11E4(Ctx* __restrict c) {
  trace_call(0x800E11E4u);
  c->r[3]=0u+0x80410000u; // 800E11E4
  c->r[3]=c->r[3]+0xFFFFDD26u; // 800E11E8
  return; // 800E11EC
}

// fn_800E11F0
void f_800E11F0(Ctx* __restrict c) {
  trace_call(0x800E11F0u);
  c->r[3]=0u+0x0000005Cu; // 800E11F0
  return; // 800E11F4
}

// fn_800E11F8
void f_800E11F8(Ctx* __restrict c) {
  trace_call(0x800E11F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E11F8
  c->r[0]=c->lr; // 800E11FC
  c->r[3]=0u+0x0000005Cu; // 800E1200
  c->r[4]=c->r[13]+0xFFFFB6F5u; // 800E1204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1208
  c->r[5]=0u+0x00000000u; // 800E120C
  c->r[6]=0u+0x00001001u; // 800E1210
  c->lr=0x800E1218u; f_80244D20(c); // 800E1214
  cmps(c,0,(int32_t)c->r[3],0); // 800E1218
  if (crb(c,2)) { goto L_800E1224; } // 800E121C
  c->lr=0x800E1224u; f_800E105C(c); // 800E1220
L_800E1224:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1224
  c->lr=c->r[0]; // 800E1228
  c->r[1]=c->r[1]+0x00000010u; // 800E122C
  return; // 800E1230
}

// fn_800E1234
void f_800E1234(Ctx* __restrict c) {
  trace_call(0x800E1234u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1234
  c->r[0]=c->lr; // 800E1238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E123C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1240
  c->r[31]=c->r[3]|c->r[3]; // 800E1244
  c->lr=0x800E124Cu; f_800D7120(c); // 800E1248
  c->r[5]=0u+0x80410000u; // 800E124C
  c->r[3]=0u+0x93160000u; // 800E1250
  c->r[0]=c->r[3]+0x000008B6u; // 800E1254
  c->r[4]=0u+0x00000000u; // 800E1258
  c->r[5]=c->r[5]+0x00006C54u; // 800E125C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E1260
  c->r[3]=c->r[31]|c->r[31]; // 800E1264
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E1268
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E126C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1270
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1274
  c->lr=c->r[0]; // 800E1278
  c->r[1]=c->r[1]+0x00000010u; // 800E127C
  return; // 800E1280
}

// fn_800E1284
void f_800E1284(Ctx* __restrict c) {
  trace_call(0x800E1284u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1284
  c->r[0]=c->lr; // 800E1288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E128C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1290
  c->r[30]=c->r[3]|c->r[3]; // 800E1294
  c->r[31]=c->r[4]|c->r[4]; // 800E1298
  c->lr=0x800E12A0u; f_8030D728(c); // 800E129C
  c->r[3]=c->r[31]|c->r[31]; // 800E12A0
  c->r[4]=0u+0x00000000u; // 800E12A4
  c->lr=0x800E12ACu; f_8030BE30(c); // 800E12A8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E12AC
  c->r[3]=c->r[31]|c->r[31]; // 800E12B0
  c->lr=0x800E12B8u; f_8030BD1C(c); // 800E12B4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E12B8
  c->r[3]=c->r[31]|c->r[31]; // 800E12BC
  c->lr=0x800E12C4u; f_8030C0A0(c); // 800E12C0
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E12C4
  c->r[3]=c->r[31]|c->r[31]; // 800E12C8
  c->lr=0x800E12D0u; f_8030BD1C(c); // 800E12CC
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E12D0
  c->r[3]=c->r[31]|c->r[31]; // 800E12D4
  c->lr=0x800E12DCu; f_8030BD1C(c); // 800E12D8
  W8(c->r[30]+0x00000044u,c->r[3]); // 800E12DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E12E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E12E4
  c->lr=c->r[0]; // 800E12E8
  c->r[1]=c->r[1]+0x00000010u; // 800E12EC
  return; // 800E12F0
}

// fn_800E12F4
void f_800E12F4(Ctx* __restrict c) {
  trace_call(0x800E12F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E12F4
  c->r[0]=c->lr; // 800E12F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E12FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1300
  c->r[31]=c->r[4]|c->r[4]; // 800E1304
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1308
  c->r[30]=c->r[3]|c->r[3]; // 800E130C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E1310
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E1314
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E1318
  c->r[3]=c->r[4]+0x00000030u; // 800E131C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E1320
  c->r[4]=c->r[30]+0x00000030u; // 800E1324
  c->lr=0x800E132Cu; f_8003AB48(c); // 800E1328
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E132C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800E1330
  c->r[0]=R32(c->r[30]+0x00000040u); // 800E1334
  W32(c->r[31]+0x00000040u,c->r[0]); // 800E1338
  c->r[0]=R8(c->r[30]+0x00000044u); // 800E133C
  W8(c->r[31]+0x00000044u,c->r[0]); // 800E1340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1344
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1348
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E134C
  c->lr=c->r[0]; // 800E1350
  c->r[1]=c->r[1]+0x00000010u; // 800E1354
  return; // 800E1358
}

// fn_800E135C
void f_800E135C(Ctx* __restrict c) {
  trace_call(0x800E135Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E135C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E1360
  c->ctr=c->r[12]; // 800E1364
  if (true) { dispatch(c,c->ctr); return; } // 800E1368
}

// fn_800E136C
void f_800E136C(Ctx* __restrict c) {
  trace_call(0x800E136Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E136C
  c->r[0]=c->lr; // 800E1370
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1374
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1378
  c->r[29]=c->r[3]|c->r[3]; // 800E137C
  c->r[30]=c->r[4]|c->r[4]; // 800E1380
  c->r[31]=c->r[5]|c->r[5]; // 800E1384
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E1388
  cmps(c,0,(int32_t)c->r[0],7); // 800E138C
  if (!crb(c,0)) { goto L_800E13A0; } // 800E1390
  c->r[4]=c->r[31]|c->r[31]; // 800E1394
  c->r[3]=c->r[3]+0x00000030u; // 800E1398
  c->lr=0x800E13A0u; f_8003A994(c); // 800E139C
L_800E13A0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E13A0
  c->r[3]=c->r[29]|c->r[29]; // 800E13A4
  c->r[4]=c->r[30]|c->r[30]; // 800E13A8
  c->r[5]=c->r[31]|c->r[31]; // 800E13AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E13B0
  c->ctr=c->r[12]; // 800E13B4
  if (true) { c->lr=0x800E13BCu; dispatch(c,c->ctr); } // 800E13B8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E13BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E13C0
  c->lr=c->r[0]; // 800E13C4
  c->r[1]=c->r[1]+0x00000020u; // 800E13C8
  return; // 800E13CC
}

// fn_800E13D0
void f_800E13D0(Ctx* __restrict c) {
  trace_call(0x800E13D0u);
  c->r[3]=0u+0x80410000u; // 800E13D0
  c->r[3]=c->r[3]+0xFFFFDD3Fu; // 800E13D4
  return; // 800E13D8
}

// fn_800E13DC
void f_800E13DC(Ctx* __restrict c) {
  trace_call(0x800E13DCu);
  c->r[3]=0u+0x00000048u; // 800E13DC
  return; // 800E13E0
}

// fn_800E13E4
void f_800E13E4(Ctx* __restrict c) {
  trace_call(0x800E13E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E13E4
  c->r[0]=c->lr; // 800E13E8
  c->r[3]=0u+0x00000048u; // 800E13EC
  c->r[4]=c->r[13]+0xFFFFB6FAu; // 800E13F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E13F4
  c->r[5]=0u+0x00000000u; // 800E13F8
  c->r[6]=0u+0x00001001u; // 800E13FC
  c->lr=0x800E1404u; f_80244D20(c); // 800E1400
  cmps(c,0,(int32_t)c->r[3],0); // 800E1404
  if (crb(c,2)) { goto L_800E1410; } // 800E1408
  c->lr=0x800E1410u; f_800E1234(c); // 800E140C
L_800E1410:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1410
  c->lr=c->r[0]; // 800E1414
  c->r[1]=c->r[1]+0x00000010u; // 800E1418
  return; // 800E141C
}

// fn_800E1420
void f_800E1420(Ctx* __restrict c) {
  trace_call(0x800E1420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1420
  c->r[0]=c->lr; // 800E1424
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E142C
  c->r[31]=c->r[3]|c->r[3]; // 800E1430
  c->lr=0x800E1438u; f_800D7120(c); // 800E1434
  c->r[5]=0u+0x80410000u; // 800E1438
  c->r[3]=0u+0x8CDE0000u; // 800E143C
  c->r[0]=c->r[3]+0xFFFFE8BAu; // 800E1440
  c->r[4]=0u+0x00000000u; // 800E1444
  c->r[5]=c->r[5]+0x00006C20u; // 800E1448
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E144C
  c->r[3]=c->r[31]|c->r[31]; // 800E1450
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E1454
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E1458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E145C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1460
  c->lr=c->r[0]; // 800E1464
  c->r[1]=c->r[1]+0x00000010u; // 800E1468
  return; // 800E146C
}

// fn_800E1470
void f_800E1470(Ctx* __restrict c) {
  trace_call(0x800E1470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1470
  c->r[0]=c->lr; // 800E1474
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1478
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E147C
  c->r[30]=c->r[3]|c->r[3]; // 800E1480
  c->r[31]=c->r[4]|c->r[4]; // 800E1484
  c->lr=0x800E148Cu; f_8030D728(c); // 800E1488
  c->r[3]=c->r[31]|c->r[31]; // 800E148C
  c->r[4]=0u+0x00000000u; // 800E1490
  c->lr=0x800E1498u; f_8030BE30(c); // 800E1494
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E1498
  c->r[3]=c->r[31]|c->r[31]; // 800E149C
  c->lr=0x800E14A4u; f_8030BD1C(c); // 800E14A0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E14A4
  c->r[3]=c->r[31]|c->r[31]; // 800E14A8
  c->r[4]=0u+0x00000000u; // 800E14AC
  c->lr=0x800E14B4u; f_8030BE30(c); // 800E14B0
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E14B4
  c->r[3]=c->r[31]|c->r[31]; // 800E14B8
  c->r[4]=0u+0x00000000u; // 800E14BC
  c->lr=0x800E14C4u; f_8030BE30(c); // 800E14C0
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E14C4
  c->r[3]=c->r[31]|c->r[31]; // 800E14C8
  c->lr=0x800E14D0u; f_8030BD1C(c); // 800E14CC
  W16(c->r[30]+0x00000044u,c->r[3]); // 800E14D0
  c->r[3]=c->r[31]|c->r[31]; // 800E14D4
  c->lr=0x800E14DCu; f_8030C0A0(c); // 800E14D8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800E14DC
  c->r[3]=c->r[31]|c->r[31]; // 800E14E0
  c->lr=0x800E14E8u; f_8030C0A0(c); // 800E14E4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800E14E8
  c->r[3]=c->r[31]|c->r[31]; // 800E14EC
  c->r[4]=0u+0x00000000u; // 800E14F0
  c->lr=0x800E14F8u; f_8030BE30(c); // 800E14F4
  W32(c->r[30]+0x00000050u,c->r[3]); // 800E14F8
  c->r[3]=c->r[31]|c->r[31]; // 800E14FC
  c->r[4]=0u+0x00000000u; // 800E1500
  c->lr=0x800E1508u; f_8030BE30(c); // 800E1504
  W32(c->r[30]+0x00000054u,c->r[3]); // 800E1508
  c->r[3]=c->r[31]|c->r[31]; // 800E150C
  c->lr=0x800E1514u; f_8030BD1C(c); // 800E1510
  W8(c->r[30]+0x00000058u,c->r[3]); // 800E1514
  c->r[3]=c->r[31]|c->r[31]; // 800E1518
  c->lr=0x800E1520u; f_8030BD1C(c); // 800E151C
  W8(c->r[30]+0x00000059u,c->r[3]); // 800E1520
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1524
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1528
  c->lr=c->r[0]; // 800E152C
  c->r[1]=c->r[1]+0x00000010u; // 800E1530
  return; // 800E1534
}

// fn_800E1538
void f_800E1538(Ctx* __restrict c) {
  trace_call(0x800E1538u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1538
  c->r[0]=c->lr; // 800E153C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1544
  c->r[31]=c->r[4]|c->r[4]; // 800E1548
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E154C
  c->r[30]=c->r[3]|c->r[3]; // 800E1550
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E1554
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E1558
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E155C
  c->r[3]=c->r[4]+0x00000030u; // 800E1560
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E1564
  c->r[4]=c->r[30]+0x00000030u; // 800E1568
  c->lr=0x800E1570u; f_8003AB48(c); // 800E156C
  c->r[3]=c->r[31]+0x0000003Cu; // 800E1570
  c->r[4]=c->r[30]+0x0000003Cu; // 800E1574
  c->lr=0x800E157Cu; f_8003F6E4(c); // 800E1578
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000044u); // 800E157C
  c->r[3]=c->r[31]+0x00000050u; // 800E1580
  W16(c->r[31]+0x00000044u,c->r[0]); // 800E1584
  c->r[4]=c->r[30]+0x00000050u; // 800E1588
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E158C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800E1590
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1594
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800E1598
  c->lr=0x800E15A0u; f_8003F6E4(c); // 800E159C
  c->r[0]=R8(c->r[30]+0x00000058u); // 800E15A0
  W8(c->r[31]+0x00000058u,c->r[0]); // 800E15A4
  c->r[0]=R8(c->r[30]+0x00000059u); // 800E15A8
  W8(c->r[31]+0x00000059u,c->r[0]); // 800E15AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E15B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E15B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E15B8
  c->lr=c->r[0]; // 800E15BC
  c->r[1]=c->r[1]+0x00000010u; // 800E15C0
  return; // 800E15C4
}

// fn_800E15C8
void f_800E15C8(Ctx* __restrict c) {
  trace_call(0x800E15C8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E15C8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E15CC
  c->ctr=c->r[12]; // 800E15D0
  if (true) { dispatch(c,c->ctr); return; } // 800E15D4
}

// fn_800E15D8
void f_800E15D8(Ctx* __restrict c) {
  trace_call(0x800E15D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E15D8
  c->r[0]=c->lr; // 800E15DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E15E0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E15E4
  c->r[29]=c->r[3]|c->r[3]; // 800E15E8
  c->r[30]=c->r[4]|c->r[4]; // 800E15EC
  c->r[31]=c->r[5]|c->r[5]; // 800E15F0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E15F4
  cmps(c,0,(int32_t)c->r[0],7); // 800E15F8
  if (!crb(c,0)) { goto L_800E160C; } // 800E15FC
  c->r[4]=c->r[31]|c->r[31]; // 800E1600
  c->r[3]=c->r[3]+0x00000030u; // 800E1604
  c->lr=0x800E160Cu; f_8003A994(c); // 800E1608
L_800E160C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E160C
  c->r[3]=c->r[29]|c->r[29]; // 800E1610
  c->r[4]=c->r[30]|c->r[30]; // 800E1614
  c->r[5]=c->r[31]|c->r[31]; // 800E1618
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E161C
  c->ctr=c->r[12]; // 800E1620
  if (true) { c->lr=0x800E1628u; dispatch(c,c->ctr); } // 800E1624
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1628
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E162C
  c->lr=c->r[0]; // 800E1630
  c->r[1]=c->r[1]+0x00000020u; // 800E1634
  return; // 800E1638
}

// fn_800E163C
void f_800E163C(Ctx* __restrict c) {
  trace_call(0x800E163Cu);
  c->r[3]=0u+0x80410000u; // 800E163C
  c->r[3]=c->r[3]+0xFFFFDD54u; // 800E1640
  return; // 800E1644
}

// fn_800E1648
void f_800E1648(Ctx* __restrict c) {
  trace_call(0x800E1648u);
  c->r[3]=0u+0x0000005Cu; // 800E1648
  return; // 800E164C
}

// fn_800E1650
void f_800E1650(Ctx* __restrict c) {
  trace_call(0x800E1650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1650
  c->r[0]=c->lr; // 800E1654
  c->r[3]=0u+0x0000005Cu; // 800E1658
  c->r[4]=c->r[13]+0xFFFFB6FFu; // 800E165C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1660
  c->r[5]=0u+0x00000000u; // 800E1664
  c->r[6]=0u+0x00001001u; // 800E1668
  c->lr=0x800E1670u; f_80244D20(c); // 800E166C
  cmps(c,0,(int32_t)c->r[3],0); // 800E1670
  if (crb(c,2)) { goto L_800E167C; } // 800E1674
  c->lr=0x800E167Cu; f_800E1420(c); // 800E1678
L_800E167C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E167C
  c->lr=c->r[0]; // 800E1680
  c->r[1]=c->r[1]+0x00000010u; // 800E1684
  return; // 800E1688
}

// fn_800E168C
void f_800E168C(Ctx* __restrict c) {
  trace_call(0x800E168Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E168C
  c->r[0]=c->lr; // 800E1690
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1698
  c->r[31]=c->r[3]|c->r[3]; // 800E169C
  c->lr=0x800E16A4u; f_800D7120(c); // 800E16A0
  c->r[5]=0u+0x80410000u; // 800E16A4
  c->r[3]=0u+0xBD7D0000u; // 800E16A8
  c->r[0]=c->r[3]+0x00000429u; // 800E16AC
  c->r[4]=0u+0x00000000u; // 800E16B0
  c->r[5]=c->r[5]+0x00006BECu; // 800E16B4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E16B8
  c->r[3]=c->r[31]|c->r[31]; // 800E16BC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E16C0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E16C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E16C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E16CC
  c->lr=c->r[0]; // 800E16D0
  c->r[1]=c->r[1]+0x00000010u; // 800E16D4
  return; // 800E16D8
}

// fn_800E16DC
void f_800E16DC(Ctx* __restrict c) {
  trace_call(0x800E16DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E16DC
  c->r[0]=c->lr; // 800E16E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E16E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E16E8
  c->r[30]=c->r[3]|c->r[3]; // 800E16EC
  c->r[31]=c->r[4]|c->r[4]; // 800E16F0
  c->lr=0x800E16F8u; f_8030D728(c); // 800E16F4
  c->r[3]=c->r[31]|c->r[31]; // 800E16F8
  c->r[4]=0u+0x00000000u; // 800E16FC
  c->lr=0x800E1704u; f_8030BE30(c); // 800E1700
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E1704
  c->r[3]=c->r[31]|c->r[31]; // 800E1708
  c->lr=0x800E1710u; f_8030BD1C(c); // 800E170C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E1710
  c->r[3]=c->r[31]|c->r[31]; // 800E1714
  c->lr=0x800E171Cu; f_8030C0A0(c); // 800E1718
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800E171C
  c->r[3]=c->r[31]|c->r[31]; // 800E1720
  c->lr=0x800E1728u; f_8030C0A0(c); // 800E1724
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800E1728
  c->r[3]=c->r[31]|c->r[31]; // 800E172C
  c->r[4]=0u+0x00000000u; // 800E1730
  c->lr=0x800E1738u; f_8030BE30(c); // 800E1734
  W32(c->r[30]+0x00000044u,c->r[3]); // 800E1738
  c->r[3]=c->r[31]|c->r[31]; // 800E173C
  c->r[4]=0u+0x00000000u; // 800E1740
  c->lr=0x800E1748u; f_8030BE30(c); // 800E1744
  W32(c->r[30]+0x00000048u,c->r[3]); // 800E1748
  c->r[3]=c->r[31]|c->r[31]; // 800E174C
  c->lr=0x800E1754u; f_8030BD1C(c); // 800E1750
  W8(c->r[30]+0x0000004Cu,c->r[3]); // 800E1754
  c->r[3]=c->r[31]|c->r[31]; // 800E1758
  c->lr=0x800E1760u; f_8030BD1C(c); // 800E175C
  W8(c->r[30]+0x0000004Du,c->r[3]); // 800E1760
  c->r[3]=c->r[31]|c->r[31]; // 800E1764
  c->lr=0x800E176Cu; f_8030BD1C(c); // 800E1768
  W8(c->r[30]+0x0000004Eu,c->r[3]); // 800E176C
  c->r[3]=c->r[31]|c->r[31]; // 800E1770
  c->lr=0x800E1778u; f_8030BD1C(c); // 800E1774
  W8(c->r[30]+0x0000004Fu,c->r[3]); // 800E1778
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E177C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1780
  c->lr=c->r[0]; // 800E1784
  c->r[1]=c->r[1]+0x00000010u; // 800E1788
  return; // 800E178C
}

// fn_800E1790
void f_800E1790(Ctx* __restrict c) {
  trace_call(0x800E1790u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1790
  c->r[0]=c->lr; // 800E1794
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1798
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E179C
  c->r[31]=c->r[4]|c->r[4]; // 800E17A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E17A4
  c->r[30]=c->r[3]|c->r[3]; // 800E17A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E17AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E17B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E17B4
  c->r[3]=c->r[4]+0x00000030u; // 800E17B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E17BC
  c->r[4]=c->r[30]+0x00000030u; // 800E17C0
  c->lr=0x800E17C8u; f_8003AB48(c); // 800E17C4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E17C8
  c->r[3]=c->r[31]+0x00000044u; // 800E17CC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800E17D0
  c->r[4]=c->r[30]+0x00000044u; // 800E17D4
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E17D8
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800E17DC
  c->lr=0x800E17E4u; f_8003F6E4(c); // 800E17E0
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800E17E4
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 800E17E8
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800E17EC
  W8(c->r[31]+0x0000004Du,c->r[0]); // 800E17F0
  c->r[0]=R8(c->r[30]+0x0000004Eu); // 800E17F4
  W8(c->r[31]+0x0000004Eu,c->r[0]); // 800E17F8
  c->r[0]=R8(c->r[30]+0x0000004Fu); // 800E17FC
  W8(c->r[31]+0x0000004Fu,c->r[0]); // 800E1800
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1804
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1808
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E180C
  c->lr=c->r[0]; // 800E1810
  c->r[1]=c->r[1]+0x00000010u; // 800E1814
  return; // 800E1818
}

// fn_800E181C
void f_800E181C(Ctx* __restrict c) {
  trace_call(0x800E181Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E181C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E1820
  c->ctr=c->r[12]; // 800E1824
  if (true) { dispatch(c,c->ctr); return; } // 800E1828
}

// fn_800E182C
void f_800E182C(Ctx* __restrict c) {
  trace_call(0x800E182Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E182C
  c->r[0]=c->lr; // 800E1830
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1834
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1838
  c->r[29]=c->r[3]|c->r[3]; // 800E183C
  c->r[30]=c->r[4]|c->r[4]; // 800E1840
  c->r[31]=c->r[5]|c->r[5]; // 800E1844
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E1848
  cmps(c,0,(int32_t)c->r[0],7); // 800E184C
  if (!crb(c,0)) { goto L_800E1860; } // 800E1850
  c->r[4]=c->r[31]|c->r[31]; // 800E1854
  c->r[3]=c->r[3]+0x00000030u; // 800E1858
  c->lr=0x800E1860u; f_8003A994(c); // 800E185C
L_800E1860:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E1860
  c->r[3]=c->r[29]|c->r[29]; // 800E1864
  c->r[4]=c->r[30]|c->r[30]; // 800E1868
  c->r[5]=c->r[31]|c->r[31]; // 800E186C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E1870
  c->ctr=c->r[12]; // 800E1874
  if (true) { c->lr=0x800E187Cu; dispatch(c,c->ctr); } // 800E1878
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E187C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1880
  c->lr=c->r[0]; // 800E1884
  c->r[1]=c->r[1]+0x00000020u; // 800E1888
  return; // 800E188C
}

// fn_800E1890
void f_800E1890(Ctx* __restrict c) {
  trace_call(0x800E1890u);
  c->r[3]=0u+0x80410000u; // 800E1890
  c->r[3]=c->r[3]+0xFFFFDD64u; // 800E1894
  return; // 800E1898
}

// fn_800E189C
void f_800E189C(Ctx* __restrict c) {
  trace_call(0x800E189Cu);
  c->r[3]=0u+0x00000050u; // 800E189C
  return; // 800E18A0
}

// fn_800E18A4
void f_800E18A4(Ctx* __restrict c) {
  trace_call(0x800E18A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E18A4
  c->r[0]=c->lr; // 800E18A8
  c->r[3]=0u+0x00000050u; // 800E18AC
  c->r[4]=c->r[13]+0xFFFFB704u; // 800E18B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E18B4
  c->r[5]=0u+0x00000000u; // 800E18B8
  c->r[6]=0u+0x00001001u; // 800E18BC
  c->lr=0x800E18C4u; f_80244D20(c); // 800E18C0
  cmps(c,0,(int32_t)c->r[3],0); // 800E18C4
  if (crb(c,2)) { goto L_800E18D0; } // 800E18C8
  c->lr=0x800E18D0u; f_800E168C(c); // 800E18CC
L_800E18D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E18D0
  c->lr=c->r[0]; // 800E18D4
  c->r[1]=c->r[1]+0x00000010u; // 800E18D8
  return; // 800E18DC
}

// fn_800E18E0
void f_800E18E0(Ctx* __restrict c) {
  trace_call(0x800E18E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E18E0
  c->r[0]=c->lr; // 800E18E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E18E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E18EC
  c->r[31]=c->r[3]|c->r[3]; // 800E18F0
  c->lr=0x800E18F8u; f_800D7120(c); // 800E18F4
  c->r[5]=0u+0x80410000u; // 800E18F8
  c->r[3]=0u+0x48440000u; // 800E18FC
  c->r[4]=0u+0x00000000u; // 800E1900
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E1904
  c->r[0]=c->r[3]+0xFFFF96E6u; // 800E1908
  c->r[5]=c->r[5]+0x00006BB8u; // 800E190C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E1910
  c->r[3]=c->r[31]|c->r[31]; // 800E1914
  W32(c->r[31]+0x00000044u,c->r[4]); // 800E1918
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E191C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1920
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1924
  c->lr=c->r[0]; // 800E1928
  c->r[1]=c->r[1]+0x00000010u; // 800E192C
  return; // 800E1930
}

// fn_800E1934
void f_800E1934(Ctx* __restrict c) {
  trace_call(0x800E1934u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1934
  c->r[0]=c->lr; // 800E1938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E193C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1940
  c->r[30]=c->r[3]|c->r[3]; // 800E1944
  c->r[31]=c->r[4]|c->r[4]; // 800E1948
  c->lr=0x800E1950u; f_8030D728(c); // 800E194C
  c->r[3]=c->r[31]|c->r[31]; // 800E1950
  c->r[4]=0u+0x00000000u; // 800E1954
  c->lr=0x800E195Cu; f_8030BE30(c); // 800E1958
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E195C
  c->r[3]=c->r[31]|c->r[31]; // 800E1960
  c->lr=0x800E1968u; f_8030BD1C(c); // 800E1964
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E1968
  c->r[3]=c->r[31]|c->r[31]; // 800E196C
  c->r[4]=0u+0x00000000u; // 800E1970
  c->lr=0x800E1978u; f_8030BE30(c); // 800E1974
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E1978
  c->r[3]=c->r[31]|c->r[31]; // 800E197C
  c->lr=0x800E1984u; f_8030BD1C(c); // 800E1980
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E1984
  c->r[3]=c->r[31]|c->r[31]; // 800E1988
  c->lr=0x800E1990u; f_8030C0A0(c); // 800E198C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800E1990
  c->r[3]=c->r[31]|c->r[31]; // 800E1994
  c->lr=0x800E199Cu; f_8030C0A0(c); // 800E1998
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800E199C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E19A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E19A4
  c->lr=c->r[0]; // 800E19A8
  c->r[1]=c->r[1]+0x00000010u; // 800E19AC
  return; // 800E19B0
}

// fn_800E19B4
void f_800E19B4(Ctx* __restrict c) {
  trace_call(0x800E19B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E19B4
  c->r[0]=c->lr; // 800E19B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E19BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E19C0
  c->r[31]=c->r[4]|c->r[4]; // 800E19C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E19C8
  c->r[30]=c->r[3]|c->r[3]; // 800E19CC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E19D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E19D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E19D8
  c->r[3]=c->r[4]+0x00000030u; // 800E19DC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E19E0
  c->r[4]=c->r[30]+0x00000030u; // 800E19E4
  c->lr=0x800E19ECu; f_8003AB48(c); // 800E19E8
  c->r[3]=c->r[31]+0x0000003Cu; // 800E19EC
  c->r[4]=c->r[30]+0x0000003Cu; // 800E19F0
  c->lr=0x800E19F8u; f_8003AB48(c); // 800E19F4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E19F8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800E19FC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1A00
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800E1A04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1A08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1A0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1A10
  c->lr=c->r[0]; // 800E1A14
  c->r[1]=c->r[1]+0x00000010u; // 800E1A18
  return; // 800E1A1C
}

// fn_800E1A20
void f_800E1A20(Ctx* __restrict c) {
  trace_call(0x800E1A20u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E1A20
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E1A24
  c->ctr=c->r[12]; // 800E1A28
  if (true) { dispatch(c,c->ctr); return; } // 800E1A2C
}

// fn_800E1A30
void f_800E1A30(Ctx* __restrict c) {
  trace_call(0x800E1A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1A30
  c->r[0]=c->lr; // 800E1A34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1A38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1A3C
  c->r[29]=c->r[3]|c->r[3]; // 800E1A40
  c->r[30]=c->r[4]|c->r[4]; // 800E1A44
  c->r[31]=c->r[5]|c->r[5]; // 800E1A48
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E1A4C
  cmps(c,0,(int32_t)c->r[0],7); // 800E1A50
  if (!crb(c,0)) { goto L_800E1A64; } // 800E1A54
  c->r[4]=c->r[31]|c->r[31]; // 800E1A58
  c->r[3]=c->r[3]+0x00000030u; // 800E1A5C
  c->lr=0x800E1A64u; f_8003A994(c); // 800E1A60
L_800E1A64:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800E1A64
  cmps(c,0,(int32_t)c->r[0],7); // 800E1A68
  if (!crb(c,0)) { goto L_800E1A7C; } // 800E1A6C
  c->r[4]=c->r[31]|c->r[31]; // 800E1A70
  c->r[3]=c->r[29]+0x0000003Cu; // 800E1A74
  c->lr=0x800E1A7Cu; f_8003A994(c); // 800E1A78
L_800E1A7C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E1A7C
  c->r[3]=c->r[29]|c->r[29]; // 800E1A80
  c->r[4]=c->r[30]|c->r[30]; // 800E1A84
  c->r[5]=c->r[31]|c->r[31]; // 800E1A88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E1A8C
  c->ctr=c->r[12]; // 800E1A90
  if (true) { c->lr=0x800E1A98u; dispatch(c,c->ctr); } // 800E1A94
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1A98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1A9C
  c->lr=c->r[0]; // 800E1AA0
  c->r[1]=c->r[1]+0x00000020u; // 800E1AA4
  return; // 800E1AA8
}

// fn_800E1AAC
void f_800E1AAC(Ctx* __restrict c) {
  trace_call(0x800E1AACu);
  c->r[3]=0u+0x80410000u; // 800E1AAC
  c->r[3]=c->r[3]+0xFFFFDD74u; // 800E1AB0
  return; // 800E1AB4
}

// fn_800E1AB8
void f_800E1AB8(Ctx* __restrict c) {
  trace_call(0x800E1AB8u);
  c->r[3]=0u+0x00000050u; // 800E1AB8
  return; // 800E1ABC
}

// fn_800E1AC0
void f_800E1AC0(Ctx* __restrict c) {
  trace_call(0x800E1AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1AC0
  c->r[0]=c->lr; // 800E1AC4
  c->r[3]=0u+0x00000050u; // 800E1AC8
  c->r[4]=c->r[13]+0xFFFFB709u; // 800E1ACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1AD0
  c->r[5]=0u+0x00000000u; // 800E1AD4
  c->r[6]=0u+0x00001001u; // 800E1AD8
  c->lr=0x800E1AE0u; f_80244D20(c); // 800E1ADC
  cmps(c,0,(int32_t)c->r[3],0); // 800E1AE0
  if (crb(c,2)) { goto L_800E1AEC; } // 800E1AE4
  c->lr=0x800E1AECu; f_800E18E0(c); // 800E1AE8
L_800E1AEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1AEC
  c->lr=c->r[0]; // 800E1AF0
  c->r[1]=c->r[1]+0x00000010u; // 800E1AF4
  return; // 800E1AF8
}

// fn_800E1AFC
void f_800E1AFC(Ctx* __restrict c) {
  trace_call(0x800E1AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1AFC
  c->r[0]=c->lr; // 800E1B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1B04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1B08
  c->r[31]=c->r[3]|c->r[3]; // 800E1B0C
  c->lr=0x800E1B14u; f_800D7120(c); // 800E1B10
  c->r[5]=0u+0x80410000u; // 800E1B14
  c->r[3]=0u+0x59710000u; // 800E1B18
  c->r[0]=c->r[3]+0x000047B2u; // 800E1B1C
  c->r[4]=0u+0x00000000u; // 800E1B20
  c->r[5]=c->r[5]+0x00006B84u; // 800E1B24
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E1B28
  c->r[3]=c->r[31]|c->r[31]; // 800E1B2C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E1B30
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E1B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1B3C
  c->lr=c->r[0]; // 800E1B40
  c->r[1]=c->r[1]+0x00000010u; // 800E1B44
  return; // 800E1B48
}

// fn_800E1B4C
void f_800E1B4C(Ctx* __restrict c) {
  trace_call(0x800E1B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1B4C
  c->r[0]=c->lr; // 800E1B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1B54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1B58
  c->r[30]=c->r[3]|c->r[3]; // 800E1B5C
  c->r[31]=c->r[4]|c->r[4]; // 800E1B60
  c->lr=0x800E1B68u; f_8030D728(c); // 800E1B64
  c->r[3]=c->r[31]|c->r[31]; // 800E1B68
  c->r[4]=0u+0x00000000u; // 800E1B6C
  c->lr=0x800E1B74u; f_8030BE30(c); // 800E1B70
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E1B74
  c->r[3]=c->r[31]|c->r[31]; // 800E1B78
  c->lr=0x800E1B80u; f_8030BD1C(c); // 800E1B7C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E1B80
  c->r[3]=c->r[31]|c->r[31]; // 800E1B84
  c->lr=0x800E1B8Cu; f_8030BD1C(c); // 800E1B88
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E1B8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1B90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1B94
  c->lr=c->r[0]; // 800E1B98
  c->r[1]=c->r[1]+0x00000010u; // 800E1B9C
  return; // 800E1BA0
}

// fn_800E1BA4
void f_800E1BA4(Ctx* __restrict c) {
  trace_call(0x800E1BA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1BA4
  c->r[0]=c->lr; // 800E1BA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1BAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1BB0
  c->r[30]=c->r[3]|c->r[3]; // 800E1BB4
  c->r[31]=c->r[4]|c->r[4]; // 800E1BB8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E1BBC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E1BC0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E1BC4
  c->r[3]=c->r[4]+0x00000030u; // 800E1BC8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E1BCC
  c->r[4]=c->r[30]+0x00000030u; // 800E1BD0
  c->lr=0x800E1BD8u; f_8003AB48(c); // 800E1BD4
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E1BD8
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E1BDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1BE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1BE4
  c->lr=c->r[0]; // 800E1BE8
  c->r[1]=c->r[1]+0x00000010u; // 800E1BEC
  return; // 800E1BF0
}

// fn_800E1BF4
void f_800E1BF4(Ctx* __restrict c) {
  trace_call(0x800E1BF4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E1BF4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E1BF8
  c->ctr=c->r[12]; // 800E1BFC
  if (true) { dispatch(c,c->ctr); return; } // 800E1C00
}

// fn_800E1C04
void f_800E1C04(Ctx* __restrict c) {
  trace_call(0x800E1C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1C04
  c->r[0]=c->lr; // 800E1C08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1C0C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1C10
  c->r[29]=c->r[3]|c->r[3]; // 800E1C14
  c->r[30]=c->r[4]|c->r[4]; // 800E1C18
  c->r[31]=c->r[5]|c->r[5]; // 800E1C1C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E1C20
  cmps(c,0,(int32_t)c->r[0],7); // 800E1C24
  if (!crb(c,0)) { goto L_800E1C38; } // 800E1C28
  c->r[4]=c->r[31]|c->r[31]; // 800E1C2C
  c->r[3]=c->r[3]+0x00000030u; // 800E1C30
  c->lr=0x800E1C38u; f_8003A994(c); // 800E1C34
L_800E1C38:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E1C38
  c->r[3]=c->r[29]|c->r[29]; // 800E1C3C
  c->r[4]=c->r[30]|c->r[30]; // 800E1C40
  c->r[5]=c->r[31]|c->r[31]; // 800E1C44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E1C48
  c->ctr=c->r[12]; // 800E1C4C
  if (true) { c->lr=0x800E1C54u; dispatch(c,c->ctr); } // 800E1C50
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1C54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1C58
  c->lr=c->r[0]; // 800E1C5C
  c->r[1]=c->r[1]+0x00000020u; // 800E1C60
  return; // 800E1C64
}

// fn_800E1C68
void f_800E1C68(Ctx* __restrict c) {
  trace_call(0x800E1C68u);
  c->r[3]=0u+0x80410000u; // 800E1C68
  c->r[3]=c->r[3]+0xFFFFDD80u; // 800E1C6C
  return; // 800E1C70
}

// fn_800E1C74
void f_800E1C74(Ctx* __restrict c) {
  trace_call(0x800E1C74u);
  c->r[3]=0u+0x00000040u; // 800E1C74
  return; // 800E1C78
}

// fn_800E1C7C
void f_800E1C7C(Ctx* __restrict c) {
  trace_call(0x800E1C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1C7C
  c->r[0]=c->lr; // 800E1C80
  c->r[3]=0u+0x00000040u; // 800E1C84
  c->r[4]=c->r[13]+0xFFFFB70Eu; // 800E1C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1C8C
  c->r[5]=0u+0x00000000u; // 800E1C90
  c->r[6]=0u+0x00001001u; // 800E1C94
  c->lr=0x800E1C9Cu; f_80244D20(c); // 800E1C98
  cmps(c,0,(int32_t)c->r[3],0); // 800E1C9C
  if (crb(c,2)) { goto L_800E1CA8; } // 800E1CA0
  c->lr=0x800E1CA8u; f_800E1AFC(c); // 800E1CA4
L_800E1CA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1CA8
  c->lr=c->r[0]; // 800E1CAC
  c->r[1]=c->r[1]+0x00000010u; // 800E1CB0
  return; // 800E1CB4
}

// fn_800E1CB8
void f_800E1CB8(Ctx* __restrict c) {
  trace_call(0x800E1CB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1CB8
  c->r[0]=c->lr; // 800E1CBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1CC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1CC4
  c->r[31]=c->r[3]|c->r[3]; // 800E1CC8
  c->lr=0x800E1CD0u; f_800D7120(c); // 800E1CCC
  c->r[5]=0u+0x80410000u; // 800E1CD0
  c->r[3]=0u+0xBC190000u; // 800E1CD4
  c->r[4]=0u+0x00000000u; // 800E1CD8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E1CDC
  c->r[0]=c->r[3]+0x000021D3u; // 800E1CE0
  c->r[5]=c->r[5]+0x00006B50u; // 800E1CE4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E1CE8
  c->r[3]=c->r[31]|c->r[31]; // 800E1CEC
  W32(c->r[31]+0x00000044u,c->r[4]); // 800E1CF0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E1CF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1CF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1CFC
  c->lr=c->r[0]; // 800E1D00
  c->r[1]=c->r[1]+0x00000010u; // 800E1D04
  return; // 800E1D08
}

// fn_800E1D0C
void f_800E1D0C(Ctx* __restrict c) {
  trace_call(0x800E1D0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1D0C
  c->r[0]=c->lr; // 800E1D10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1D14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1D18
  c->r[30]=c->r[3]|c->r[3]; // 800E1D1C
  c->r[31]=c->r[4]|c->r[4]; // 800E1D20
  c->lr=0x800E1D28u; f_8030D728(c); // 800E1D24
  c->r[3]=c->r[31]|c->r[31]; // 800E1D28
  c->r[4]=0u+0x00000000u; // 800E1D2C
  c->lr=0x800E1D34u; f_8030BE30(c); // 800E1D30
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E1D34
  c->r[3]=c->r[31]|c->r[31]; // 800E1D38
  c->lr=0x800E1D40u; f_8030BD1C(c); // 800E1D3C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E1D40
  c->r[3]=c->r[31]|c->r[31]; // 800E1D44
  c->r[4]=0u+0x00000000u; // 800E1D48
  c->lr=0x800E1D50u; f_8030BE30(c); // 800E1D4C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800E1D50
  c->r[3]=c->r[31]|c->r[31]; // 800E1D54
  c->lr=0x800E1D5Cu; f_8030BD1C(c); // 800E1D58
  W32(c->r[30]+0x00000040u,c->r[3]); // 800E1D5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1D64
  c->lr=c->r[0]; // 800E1D68
  c->r[1]=c->r[1]+0x00000010u; // 800E1D6C
  return; // 800E1D70
}

// fn_800E1D74
void f_800E1D74(Ctx* __restrict c) {
  trace_call(0x800E1D74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1D74
  c->r[0]=c->lr; // 800E1D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1D7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1D80
  c->r[30]=c->r[3]|c->r[3]; // 800E1D84
  c->r[31]=c->r[4]|c->r[4]; // 800E1D88
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E1D8C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E1D90
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E1D94
  c->r[3]=c->r[4]+0x00000030u; // 800E1D98
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E1D9C
  c->r[4]=c->r[30]+0x00000030u; // 800E1DA0
  c->lr=0x800E1DA8u; f_8003AB48(c); // 800E1DA4
  c->r[3]=c->r[31]+0x0000003Cu; // 800E1DA8
  c->r[4]=c->r[30]+0x0000003Cu; // 800E1DAC
  c->lr=0x800E1DB4u; f_8003AB48(c); // 800E1DB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1DB8
  c->lr=c->r[0]; // 800E1DBC
  c->r[1]=c->r[1]+0x00000010u; // 800E1DC0
  return; // 800E1DC4
}

// fn_800E1DC8
void f_800E1DC8(Ctx* __restrict c) {
  trace_call(0x800E1DC8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E1DC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E1DCC
  c->ctr=c->r[12]; // 800E1DD0
  if (true) { dispatch(c,c->ctr); return; } // 800E1DD4
}

// fn_800E1DD8
void f_800E1DD8(Ctx* __restrict c) {
  trace_call(0x800E1DD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1DD8
  c->r[0]=c->lr; // 800E1DDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1DE0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1DE4
  c->r[29]=c->r[3]|c->r[3]; // 800E1DE8
  c->r[30]=c->r[4]|c->r[4]; // 800E1DEC
  c->r[31]=c->r[5]|c->r[5]; // 800E1DF0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E1DF4
  cmps(c,0,(int32_t)c->r[0],7); // 800E1DF8
  if (!crb(c,0)) { goto L_800E1E0C; } // 800E1DFC
  c->r[4]=c->r[31]|c->r[31]; // 800E1E00
  c->r[3]=c->r[3]+0x00000030u; // 800E1E04
  c->lr=0x800E1E0Cu; f_8003A994(c); // 800E1E08
L_800E1E0C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800E1E0C
  cmps(c,0,(int32_t)c->r[0],7); // 800E1E10
  if (!crb(c,0)) { goto L_800E1E24; } // 800E1E14
  c->r[4]=c->r[31]|c->r[31]; // 800E1E18
  c->r[3]=c->r[29]+0x0000003Cu; // 800E1E1C
  c->lr=0x800E1E24u; f_8003A994(c); // 800E1E20
L_800E1E24:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E1E24
  c->r[3]=c->r[29]|c->r[29]; // 800E1E28
  c->r[4]=c->r[30]|c->r[30]; // 800E1E2C
  c->r[5]=c->r[31]|c->r[31]; // 800E1E30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E1E34
  c->ctr=c->r[12]; // 800E1E38
  if (true) { c->lr=0x800E1E40u; dispatch(c,c->ctr); } // 800E1E3C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1E40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1E44
  c->lr=c->r[0]; // 800E1E48
  c->r[1]=c->r[1]+0x00000020u; // 800E1E4C
  return; // 800E1E50
}

// fn_800E1E54
void f_800E1E54(Ctx* __restrict c) {
  trace_call(0x800E1E54u);
  c->r[3]=0u+0x80410000u; // 800E1E54
  c->r[3]=c->r[3]+0xFFFFDD99u; // 800E1E58
  return; // 800E1E5C
}

// fn_800E1E60
void f_800E1E60(Ctx* __restrict c) {
  trace_call(0x800E1E60u);
  c->r[3]=0u+0x00000048u; // 800E1E60
  return; // 800E1E64
}

// fn_800E1E68
void f_800E1E68(Ctx* __restrict c) {
  trace_call(0x800E1E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1E68
  c->r[0]=c->lr; // 800E1E6C
  c->r[3]=0u+0x00000048u; // 800E1E70
  c->r[4]=c->r[13]+0xFFFFB713u; // 800E1E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1E78
  c->r[5]=0u+0x00000000u; // 800E1E7C
  c->r[6]=0u+0x00001001u; // 800E1E80
  c->lr=0x800E1E88u; f_80244D20(c); // 800E1E84
  cmps(c,0,(int32_t)c->r[3],0); // 800E1E88
  if (crb(c,2)) { goto L_800E1E94; } // 800E1E8C
  c->lr=0x800E1E94u; f_800E1CB8(c); // 800E1E90
L_800E1E94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1E94
  c->lr=c->r[0]; // 800E1E98
  c->r[1]=c->r[1]+0x00000010u; // 800E1E9C
  return; // 800E1EA0
}

// fn_800E1EA4
void f_800E1EA4(Ctx* __restrict c) {
  trace_call(0x800E1EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1EA4
  c->r[0]=c->lr; // 800E1EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1EB0
  c->r[31]=c->r[3]|c->r[3]; // 800E1EB4
  c->lr=0x800E1EBCu; f_800D7120(c); // 800E1EB8
  c->r[5]=0u+0x80410000u; // 800E1EBC
  c->r[3]=0u+0xF0AE0000u; // 800E1EC0
  c->r[0]=c->r[3]+0x00007CD4u; // 800E1EC4
  c->r[4]=0u+0x00000000u; // 800E1EC8
  c->r[5]=c->r[5]+0x00006B1Cu; // 800E1ECC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E1ED0
  c->r[3]=c->r[31]|c->r[31]; // 800E1ED4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E1ED8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E1EDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1EE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1EE4
  c->lr=c->r[0]; // 800E1EE8
  c->r[1]=c->r[1]+0x00000010u; // 800E1EEC
  return; // 800E1EF0
}

// fn_800E1EF4
void f_800E1EF4(Ctx* __restrict c) {
  trace_call(0x800E1EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1EF4
  c->r[0]=c->lr; // 800E1EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1EFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1F00
  c->r[30]=c->r[3]|c->r[3]; // 800E1F04
  c->r[31]=c->r[4]|c->r[4]; // 800E1F08
  c->lr=0x800E1F10u; f_8030D728(c); // 800E1F0C
  c->r[3]=c->r[31]|c->r[31]; // 800E1F10
  c->r[4]=0u+0x00000000u; // 800E1F14
  c->lr=0x800E1F1Cu; f_8030BE30(c); // 800E1F18
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E1F1C
  c->r[3]=c->r[31]|c->r[31]; // 800E1F20
  c->lr=0x800E1F28u; f_8030BD1C(c); // 800E1F24
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E1F28
  c->r[3]=c->r[31]|c->r[31]; // 800E1F2C
  c->lr=0x800E1F34u; f_8030BD1C(c); // 800E1F30
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E1F34
  c->r[3]=c->r[31]|c->r[31]; // 800E1F38
  c->lr=0x800E1F40u; f_8030BD1C(c); // 800E1F3C
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800E1F40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1F44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1F48
  c->lr=c->r[0]; // 800E1F4C
  c->r[1]=c->r[1]+0x00000010u; // 800E1F50
  return; // 800E1F54
}

// fn_800E1F58
void f_800E1F58(Ctx* __restrict c) {
  trace_call(0x800E1F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1F58
  c->r[0]=c->lr; // 800E1F5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1F60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1F64
  c->r[30]=c->r[3]|c->r[3]; // 800E1F68
  c->r[31]=c->r[4]|c->r[4]; // 800E1F6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E1F70
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E1F74
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E1F78
  c->r[3]=c->r[4]+0x00000030u; // 800E1F7C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E1F80
  c->r[4]=c->r[30]+0x00000030u; // 800E1F84
  c->lr=0x800E1F8Cu; f_8003AB48(c); // 800E1F88
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E1F8C
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E1F90
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800E1F94
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800E1F98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E1F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1FA0
  c->lr=c->r[0]; // 800E1FA4
  c->r[1]=c->r[1]+0x00000010u; // 800E1FA8
  return; // 800E1FAC
}

// fn_800E1FB0
void f_800E1FB0(Ctx* __restrict c) {
  trace_call(0x800E1FB0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E1FB0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E1FB4
  c->ctr=c->r[12]; // 800E1FB8
  if (true) { dispatch(c,c->ctr); return; } // 800E1FBC
}

// fn_800E1FC0
void f_800E1FC0(Ctx* __restrict c) {
  trace_call(0x800E1FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1FC0
  c->r[0]=c->lr; // 800E1FC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1FC8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E1FCC
  c->r[29]=c->r[3]|c->r[3]; // 800E1FD0
  c->r[30]=c->r[4]|c->r[4]; // 800E1FD4
  c->r[31]=c->r[5]|c->r[5]; // 800E1FD8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E1FDC
  cmps(c,0,(int32_t)c->r[0],7); // 800E1FE0
  if (!crb(c,0)) { goto L_800E1FF4; } // 800E1FE4
  c->r[4]=c->r[31]|c->r[31]; // 800E1FE8
  c->r[3]=c->r[3]+0x00000030u; // 800E1FEC
  c->lr=0x800E1FF4u; f_8003A994(c); // 800E1FF0
L_800E1FF4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E1FF4
  c->r[3]=c->r[29]|c->r[29]; // 800E1FF8
  c->r[4]=c->r[30]|c->r[30]; // 800E1FFC
  c->r[5]=c->r[31]|c->r[31]; // 800E2000
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2004
  c->ctr=c->r[12]; // 800E2008
  if (true) { c->lr=0x800E2010u; dispatch(c,c->ctr); } // 800E200C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2010
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2014
  c->lr=c->r[0]; // 800E2018
  c->r[1]=c->r[1]+0x00000020u; // 800E201C
  return; // 800E2020
}

// fn_800E2024
void f_800E2024(Ctx* __restrict c) {
  trace_call(0x800E2024u);
  c->r[3]=0u+0x80410000u; // 800E2024
  c->r[3]=c->r[3]+0xFFFFDDB4u; // 800E2028
  return; // 800E202C
}

// fn_800E2030
void f_800E2030(Ctx* __restrict c) {
  trace_call(0x800E2030u);
  c->r[3]=0u+0x00000040u; // 800E2030
  return; // 800E2034
}

// fn_800E2038
void f_800E2038(Ctx* __restrict c) {
  trace_call(0x800E2038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2038
  c->r[0]=c->lr; // 800E203C
  c->r[3]=0u+0x00000040u; // 800E2040
  c->r[4]=c->r[13]+0xFFFFB718u; // 800E2044
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2048
  c->r[5]=0u+0x00000000u; // 800E204C
  c->r[6]=0u+0x00001001u; // 800E2050
  c->lr=0x800E2058u; f_80244D20(c); // 800E2054
  cmps(c,0,(int32_t)c->r[3],0); // 800E2058
  if (crb(c,2)) { goto L_800E2064; } // 800E205C
  c->lr=0x800E2064u; f_800E1EA4(c); // 800E2060
L_800E2064:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2064
  c->lr=c->r[0]; // 800E2068
  c->r[1]=c->r[1]+0x00000010u; // 800E206C
  return; // 800E2070
}

// fn_800E2074
void f_800E2074(Ctx* __restrict c) {
  trace_call(0x800E2074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2074
  c->r[0]=c->lr; // 800E2078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E207C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2080
  c->r[31]=c->r[3]|c->r[3]; // 800E2084
  c->lr=0x800E208Cu; f_800D7120(c); // 800E2088
  c->r[5]=0u+0x80410000u; // 800E208C
  c->r[3]=0u+0x59720000u; // 800E2090
  c->r[0]=c->r[3]+0x00004EB8u; // 800E2094
  c->r[4]=0u+0x00000000u; // 800E2098
  c->r[5]=c->r[5]+0x00006AE8u; // 800E209C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E20A0
  c->r[3]=c->r[31]|c->r[31]; // 800E20A4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E20A8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E20AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E20B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E20B4
  c->lr=c->r[0]; // 800E20B8
  c->r[1]=c->r[1]+0x00000010u; // 800E20BC
  return; // 800E20C0
}

// fn_800E20C4
void f_800E20C4(Ctx* __restrict c) {
  trace_call(0x800E20C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E20C4
  c->r[0]=c->lr; // 800E20C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E20CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E20D0
  c->r[30]=c->r[3]|c->r[3]; // 800E20D4
  c->r[31]=c->r[4]|c->r[4]; // 800E20D8
  c->lr=0x800E20E0u; f_8030D728(c); // 800E20DC
  c->r[3]=c->r[31]|c->r[31]; // 800E20E0
  c->r[4]=0u+0x00000000u; // 800E20E4
  c->lr=0x800E20ECu; f_8030BE30(c); // 800E20E8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E20EC
  c->r[3]=c->r[31]|c->r[31]; // 800E20F0
  c->lr=0x800E20F8u; f_8030BD1C(c); // 800E20F4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E20F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E20FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2100
  c->lr=c->r[0]; // 800E2104
  c->r[1]=c->r[1]+0x00000010u; // 800E2108
  return; // 800E210C
}

// fn_800E2110
void f_800E2110(Ctx* __restrict c) {
  trace_call(0x800E2110u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E2110
  c->r[5]=c->r[3]|c->r[3]; // 800E2114
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E2118
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E211C
  c->r[3]=c->r[4]+0x00000030u; // 800E2120
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E2124
  c->r[4]=c->r[5]+0x00000030u; // 800E2128
  f_8003AB48(c); return; // 800E212C
}

// fn_800E2130
void f_800E2130(Ctx* __restrict c) {
  trace_call(0x800E2130u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2130
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2134
  c->ctr=c->r[12]; // 800E2138
  if (true) { dispatch(c,c->ctr); return; } // 800E213C
}

// fn_800E2140
void f_800E2140(Ctx* __restrict c) {
  trace_call(0x800E2140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2140
  c->r[0]=c->lr; // 800E2144
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2148
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E214C
  c->r[29]=c->r[3]|c->r[3]; // 800E2150
  c->r[30]=c->r[4]|c->r[4]; // 800E2154
  c->r[31]=c->r[5]|c->r[5]; // 800E2158
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E215C
  cmps(c,0,(int32_t)c->r[0],7); // 800E2160
  if (!crb(c,0)) { goto L_800E2174; } // 800E2164
  c->r[4]=c->r[31]|c->r[31]; // 800E2168
  c->r[3]=c->r[3]+0x00000030u; // 800E216C
  c->lr=0x800E2174u; f_8003A994(c); // 800E2170
L_800E2174:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E2174
  c->r[3]=c->r[29]|c->r[29]; // 800E2178
  c->r[4]=c->r[30]|c->r[30]; // 800E217C
  c->r[5]=c->r[31]|c->r[31]; // 800E2180
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2184
  c->ctr=c->r[12]; // 800E2188
  if (true) { c->lr=0x800E2190u; dispatch(c,c->ctr); } // 800E218C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2190
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2194
  c->lr=c->r[0]; // 800E2198
  c->r[1]=c->r[1]+0x00000020u; // 800E219C
  return; // 800E21A0
}

// fn_800E21A4
void f_800E21A4(Ctx* __restrict c) {
  trace_call(0x800E21A4u);
  c->r[3]=0u+0x80410000u; // 800E21A4
  c->r[3]=c->r[3]+0xFFFFDDC7u; // 800E21A8
  return; // 800E21AC
}

// fn_800E21B0
void f_800E21B0(Ctx* __restrict c) {
  trace_call(0x800E21B0u);
  c->r[3]=0u+0x0000003Cu; // 800E21B0
  return; // 800E21B4
}

// fn_800E21B8
void f_800E21B8(Ctx* __restrict c) {
  trace_call(0x800E21B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E21B8
  c->r[0]=c->lr; // 800E21BC
  c->r[3]=0u+0x0000003Cu; // 800E21C0
  c->r[4]=c->r[13]+0xFFFFB71Du; // 800E21C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E21C8
  c->r[5]=0u+0x00000000u; // 800E21CC
  c->r[6]=0u+0x00001001u; // 800E21D0
  c->lr=0x800E21D8u; f_80244D20(c); // 800E21D4
  cmps(c,0,(int32_t)c->r[3],0); // 800E21D8
  if (crb(c,2)) { goto L_800E21E4; } // 800E21DC
  c->lr=0x800E21E4u; f_800E2074(c); // 800E21E0
L_800E21E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E21E4
  c->lr=c->r[0]; // 800E21E8
  c->r[1]=c->r[1]+0x00000010u; // 800E21EC
  return; // 800E21F0
}

// fn_800E21F4
void f_800E21F4(Ctx* __restrict c) {
  trace_call(0x800E21F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E21F4
  c->r[0]=c->lr; // 800E21F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E21FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2200
  c->r[31]=c->r[3]|c->r[3]; // 800E2204
  c->lr=0x800E220Cu; f_800D7120(c); // 800E2208
  c->r[5]=0u+0x80410000u; // 800E220C
  c->r[3]=0u+0x59720000u; // 800E2210
  c->r[0]=c->r[3]+0x00004EB8u; // 800E2214
  c->r[4]=0u+0x00000000u; // 800E2218
  c->r[5]=c->r[5]+0x00006AB4u; // 800E221C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E2220
  c->r[3]=c->r[31]|c->r[31]; // 800E2224
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E2228
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E222C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2230
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2234
  c->lr=c->r[0]; // 800E2238
  c->r[1]=c->r[1]+0x00000010u; // 800E223C
  return; // 800E2240
}

// fn_800E2244
void f_800E2244(Ctx* __restrict c) {
  trace_call(0x800E2244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2244
  c->r[0]=c->lr; // 800E2248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E224C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2250
  c->r[30]=c->r[3]|c->r[3]; // 800E2254
  c->r[31]=c->r[4]|c->r[4]; // 800E2258
  c->lr=0x800E2260u; f_8030D728(c); // 800E225C
  c->r[3]=c->r[31]|c->r[31]; // 800E2260
  c->r[4]=0u+0x00000000u; // 800E2264
  c->lr=0x800E226Cu; f_8030BE30(c); // 800E2268
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E226C
  c->r[3]=c->r[31]|c->r[31]; // 800E2270
  c->lr=0x800E2278u; f_8030BD1C(c); // 800E2274
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E2278
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E227C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2280
  c->lr=c->r[0]; // 800E2284
  c->r[1]=c->r[1]+0x00000010u; // 800E2288
  return; // 800E228C
}

// fn_800E2290
void f_800E2290(Ctx* __restrict c) {
  trace_call(0x800E2290u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E2290
  c->r[5]=c->r[3]|c->r[3]; // 800E2294
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E2298
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E229C
  c->r[3]=c->r[4]+0x00000030u; // 800E22A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E22A4
  c->r[4]=c->r[5]+0x00000030u; // 800E22A8
  f_8003AB48(c); return; // 800E22AC
}

// fn_800E22B0
void f_800E22B0(Ctx* __restrict c) {
  trace_call(0x800E22B0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E22B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E22B4
  c->ctr=c->r[12]; // 800E22B8
  if (true) { dispatch(c,c->ctr); return; } // 800E22BC
}

// fn_800E22C0
void f_800E22C0(Ctx* __restrict c) {
  trace_call(0x800E22C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E22C0
  c->r[0]=c->lr; // 800E22C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E22C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E22CC
  c->r[29]=c->r[3]|c->r[3]; // 800E22D0
  c->r[30]=c->r[4]|c->r[4]; // 800E22D4
  c->r[31]=c->r[5]|c->r[5]; // 800E22D8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E22DC
  cmps(c,0,(int32_t)c->r[0],7); // 800E22E0
  if (!crb(c,0)) { goto L_800E22F4; } // 800E22E4
  c->r[4]=c->r[31]|c->r[31]; // 800E22E8
  c->r[3]=c->r[3]+0x00000030u; // 800E22EC
  c->lr=0x800E22F4u; f_8003A994(c); // 800E22F0
L_800E22F4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E22F4
  c->r[3]=c->r[29]|c->r[29]; // 800E22F8
  c->r[4]=c->r[30]|c->r[30]; // 800E22FC
  c->r[5]=c->r[31]|c->r[31]; // 800E2300
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2304
  c->ctr=c->r[12]; // 800E2308
  if (true) { c->lr=0x800E2310u; dispatch(c,c->ctr); } // 800E230C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2310
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2314
  c->lr=c->r[0]; // 800E2318
  c->r[1]=c->r[1]+0x00000020u; // 800E231C
  return; // 800E2320
}

// fn_800E2324
void f_800E2324(Ctx* __restrict c) {
  trace_call(0x800E2324u);
  c->r[3]=0u+0x80410000u; // 800E2324
  c->r[3]=c->r[3]+0xFFFFDDDBu; // 800E2328
  return; // 800E232C
}

// fn_800E2330
void f_800E2330(Ctx* __restrict c) {
  trace_call(0x800E2330u);
  c->r[3]=0u+0x0000003Cu; // 800E2330
  return; // 800E2334
}

// fn_800E2338
void f_800E2338(Ctx* __restrict c) {
  trace_call(0x800E2338u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2338
  c->r[0]=c->lr; // 800E233C
  c->r[3]=0u+0x0000003Cu; // 800E2340
  c->r[4]=c->r[13]+0xFFFFB722u; // 800E2344
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2348
  c->r[5]=0u+0x00000000u; // 800E234C
  c->r[6]=0u+0x00001001u; // 800E2350
  c->lr=0x800E2358u; f_80244D20(c); // 800E2354
  cmps(c,0,(int32_t)c->r[3],0); // 800E2358
  if (crb(c,2)) { goto L_800E2364; } // 800E235C
  c->lr=0x800E2364u; f_800E21F4(c); // 800E2360
L_800E2364:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2364
  c->lr=c->r[0]; // 800E2368
  c->r[1]=c->r[1]+0x00000010u; // 800E236C
  return; // 800E2370
}

// fn_800E2374
void f_800E2374(Ctx* __restrict c) {
  trace_call(0x800E2374u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2374
  c->r[0]=c->lr; // 800E2378
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E237C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2380
  c->r[31]=c->r[3]|c->r[3]; // 800E2384
  c->lr=0x800E238Cu; f_800D7120(c); // 800E2388
  c->r[5]=0u+0x80410000u; // 800E238C
  c->r[3]=0u+0x77620000u; // 800E2390
  c->r[0]=c->r[3]+0x00003AA9u; // 800E2394
  c->r[4]=0u+0x00000000u; // 800E2398
  c->r[5]=c->r[5]+0x00006A80u; // 800E239C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E23A0
  c->r[3]=c->r[31]|c->r[31]; // 800E23A4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E23A8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E23AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E23B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E23B4
  c->lr=c->r[0]; // 800E23B8
  c->r[1]=c->r[1]+0x00000010u; // 800E23BC
  return; // 800E23C0
}

// fn_800E23C4
void f_800E23C4(Ctx* __restrict c) {
  trace_call(0x800E23C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E23C4
  c->r[0]=c->lr; // 800E23C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E23CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E23D0
  c->r[30]=c->r[3]|c->r[3]; // 800E23D4
  c->r[31]=c->r[4]|c->r[4]; // 800E23D8
  c->lr=0x800E23E0u; f_8030D728(c); // 800E23DC
  c->r[3]=c->r[31]|c->r[31]; // 800E23E0
  c->r[4]=0u+0x00000000u; // 800E23E4
  c->lr=0x800E23ECu; f_8030BE30(c); // 800E23E8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E23EC
  c->r[3]=c->r[31]|c->r[31]; // 800E23F0
  c->lr=0x800E23F8u; f_8030BD1C(c); // 800E23F4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E23F8
  c->r[3]=c->r[31]|c->r[31]; // 800E23FC
  c->lr=0x800E2404u; f_8030BD1C(c); // 800E2400
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E2404
  c->r[3]=c->r[31]|c->r[31]; // 800E2408
  c->lr=0x800E2410u; f_8030BD1C(c); // 800E240C
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800E2410
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2414
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2418
  c->lr=c->r[0]; // 800E241C
  c->r[1]=c->r[1]+0x00000010u; // 800E2420
  return; // 800E2424
}

// fn_800E2428
void f_800E2428(Ctx* __restrict c) {
  trace_call(0x800E2428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2428
  c->r[0]=c->lr; // 800E242C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2430
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2434
  c->r[30]=c->r[3]|c->r[3]; // 800E2438
  c->r[31]=c->r[4]|c->r[4]; // 800E243C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E2440
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E2444
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E2448
  c->r[3]=c->r[4]+0x00000030u; // 800E244C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E2450
  c->r[4]=c->r[30]+0x00000030u; // 800E2454
  c->lr=0x800E245Cu; f_8003AB48(c); // 800E2458
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E245C
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E2460
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800E2464
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800E2468
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E246C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2470
  c->lr=c->r[0]; // 800E2474
  c->r[1]=c->r[1]+0x00000010u; // 800E2478
  return; // 800E247C
}

// fn_800E2480
void f_800E2480(Ctx* __restrict c) {
  trace_call(0x800E2480u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2480
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2484
  c->ctr=c->r[12]; // 800E2488
  if (true) { dispatch(c,c->ctr); return; } // 800E248C
}

// fn_800E2490
void f_800E2490(Ctx* __restrict c) {
  trace_call(0x800E2490u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2490
  c->r[0]=c->lr; // 800E2494
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2498
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E249C
  c->r[29]=c->r[3]|c->r[3]; // 800E24A0
  c->r[30]=c->r[4]|c->r[4]; // 800E24A4
  c->r[31]=c->r[5]|c->r[5]; // 800E24A8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E24AC
  cmps(c,0,(int32_t)c->r[0],7); // 800E24B0
  if (!crb(c,0)) { goto L_800E24C4; } // 800E24B4
  c->r[4]=c->r[31]|c->r[31]; // 800E24B8
  c->r[3]=c->r[3]+0x00000030u; // 800E24BC
  c->lr=0x800E24C4u; f_8003A994(c); // 800E24C0
L_800E24C4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E24C4
  c->r[3]=c->r[29]|c->r[29]; // 800E24C8
  c->r[4]=c->r[30]|c->r[30]; // 800E24CC
  c->r[5]=c->r[31]|c->r[31]; // 800E24D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E24D4
  c->ctr=c->r[12]; // 800E24D8
  if (true) { c->lr=0x800E24E0u; dispatch(c,c->ctr); } // 800E24DC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E24E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E24E4
  c->lr=c->r[0]; // 800E24E8
  c->r[1]=c->r[1]+0x00000020u; // 800E24EC
  return; // 800E24F0
}

// fn_800E24F4
void f_800E24F4(Ctx* __restrict c) {
  trace_call(0x800E24F4u);
  c->r[3]=0u+0x80410000u; // 800E24F4
  c->r[3]=c->r[3]+0xFFFFDDEFu; // 800E24F8
  return; // 800E24FC
}

// fn_800E2500
void f_800E2500(Ctx* __restrict c) {
  trace_call(0x800E2500u);
  c->r[3]=0u+0x00000040u; // 800E2500
  return; // 800E2504
}

// fn_800E2508
void f_800E2508(Ctx* __restrict c) {
  trace_call(0x800E2508u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2508
  c->r[0]=c->lr; // 800E250C
  c->r[3]=0u+0x00000040u; // 800E2510
  c->r[4]=c->r[13]+0xFFFFB727u; // 800E2514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2518
  c->r[5]=0u+0x00000000u; // 800E251C
  c->r[6]=0u+0x00001001u; // 800E2520
  c->lr=0x800E2528u; f_80244D20(c); // 800E2524
  cmps(c,0,(int32_t)c->r[3],0); // 800E2528
  if (crb(c,2)) { goto L_800E2534; } // 800E252C
  c->lr=0x800E2534u; f_800E2374(c); // 800E2530
L_800E2534:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2534
  c->lr=c->r[0]; // 800E2538
  c->r[1]=c->r[1]+0x00000010u; // 800E253C
  return; // 800E2540
}

// fn_800E2544
void f_800E2544(Ctx* __restrict c) {
  trace_call(0x800E2544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2544
  c->r[0]=c->lr; // 800E2548
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E254C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2550
  c->r[31]=c->r[3]|c->r[3]; // 800E2554
  c->lr=0x800E255Cu; f_800D7120(c); // 800E2558
  c->r[5]=0u+0x80410000u; // 800E255C
  c->r[3]=0u+0x77620000u; // 800E2560
  c->r[0]=c->r[3]+0x00003AA9u; // 800E2564
  c->r[4]=0u+0x00000000u; // 800E2568
  c->r[5]=c->r[5]+0x00006A4Cu; // 800E256C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E2570
  c->r[3]=c->r[31]|c->r[31]; // 800E2574
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E2578
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E257C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2580
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2584
  c->lr=c->r[0]; // 800E2588
  c->r[1]=c->r[1]+0x00000010u; // 800E258C
  return; // 800E2590
}

// fn_800E2594
void f_800E2594(Ctx* __restrict c) {
  trace_call(0x800E2594u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2594
  c->r[0]=c->lr; // 800E2598
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E259C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E25A0
  c->r[30]=c->r[3]|c->r[3]; // 800E25A4
  c->r[31]=c->r[4]|c->r[4]; // 800E25A8
  c->lr=0x800E25B0u; f_8030D728(c); // 800E25AC
  c->r[3]=c->r[31]|c->r[31]; // 800E25B0
  c->r[4]=0u+0x00000000u; // 800E25B4
  c->lr=0x800E25BCu; f_8030BE30(c); // 800E25B8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E25BC
  c->r[3]=c->r[31]|c->r[31]; // 800E25C0
  c->lr=0x800E25C8u; f_8030BD1C(c); // 800E25C4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E25C8
  c->r[3]=c->r[31]|c->r[31]; // 800E25CC
  c->lr=0x800E25D4u; f_8030BD1C(c); // 800E25D0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E25D4
  c->r[3]=c->r[31]|c->r[31]; // 800E25D8
  c->lr=0x800E25E0u; f_8030BD1C(c); // 800E25DC
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800E25E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E25E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E25E8
  c->lr=c->r[0]; // 800E25EC
  c->r[1]=c->r[1]+0x00000010u; // 800E25F0
  return; // 800E25F4
}

// fn_800E25F8
void f_800E25F8(Ctx* __restrict c) {
  trace_call(0x800E25F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E25F8
  c->r[0]=c->lr; // 800E25FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2600
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2604
  c->r[30]=c->r[3]|c->r[3]; // 800E2608
  c->r[31]=c->r[4]|c->r[4]; // 800E260C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E2610
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E2614
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E2618
  c->r[3]=c->r[4]+0x00000030u; // 800E261C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E2620
  c->r[4]=c->r[30]+0x00000030u; // 800E2624
  c->lr=0x800E262Cu; f_8003AB48(c); // 800E2628
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E262C
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E2630
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800E2634
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800E2638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E263C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2640
  c->lr=c->r[0]; // 800E2644
  c->r[1]=c->r[1]+0x00000010u; // 800E2648
  return; // 800E264C
}

// fn_800E2650
void f_800E2650(Ctx* __restrict c) {
  trace_call(0x800E2650u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2650
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2654
  c->ctr=c->r[12]; // 800E2658
  if (true) { dispatch(c,c->ctr); return; } // 800E265C
}

// fn_800E2660
void f_800E2660(Ctx* __restrict c) {
  trace_call(0x800E2660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2660
  c->r[0]=c->lr; // 800E2664
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2668
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E266C
  c->r[29]=c->r[3]|c->r[3]; // 800E2670
  c->r[30]=c->r[4]|c->r[4]; // 800E2674
  c->r[31]=c->r[5]|c->r[5]; // 800E2678
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E267C
  cmps(c,0,(int32_t)c->r[0],7); // 800E2680
  if (!crb(c,0)) { goto L_800E2694; } // 800E2684
  c->r[4]=c->r[31]|c->r[31]; // 800E2688
  c->r[3]=c->r[3]+0x00000030u; // 800E268C
  c->lr=0x800E2694u; f_8003A994(c); // 800E2690
L_800E2694:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E2694
  c->r[3]=c->r[29]|c->r[29]; // 800E2698
  c->r[4]=c->r[30]|c->r[30]; // 800E269C
  c->r[5]=c->r[31]|c->r[31]; // 800E26A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E26A4
  c->ctr=c->r[12]; // 800E26A8
  if (true) { c->lr=0x800E26B0u; dispatch(c,c->ctr); } // 800E26AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E26B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E26B4
  c->lr=c->r[0]; // 800E26B8
  c->r[1]=c->r[1]+0x00000020u; // 800E26BC
  return; // 800E26C0
}

// fn_800E26C4
void f_800E26C4(Ctx* __restrict c) {
  trace_call(0x800E26C4u);
  c->r[3]=0u+0x80410000u; // 800E26C4
  c->r[3]=c->r[3]+0xFFFFDE0Au; // 800E26C8
  return; // 800E26CC
}

// fn_800E26D0
void f_800E26D0(Ctx* __restrict c) {
  trace_call(0x800E26D0u);
  c->r[3]=0u+0x00000040u; // 800E26D0
  return; // 800E26D4
}

// fn_800E26D8
void f_800E26D8(Ctx* __restrict c) {
  trace_call(0x800E26D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E26D8
  c->r[0]=c->lr; // 800E26DC
  c->r[3]=0u+0x00000040u; // 800E26E0
  c->r[4]=c->r[13]+0xFFFFB72Cu; // 800E26E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E26E8
  c->r[5]=0u+0x00000000u; // 800E26EC
  c->r[6]=0u+0x00001001u; // 800E26F0
  c->lr=0x800E26F8u; f_80244D20(c); // 800E26F4
  cmps(c,0,(int32_t)c->r[3],0); // 800E26F8
  if (crb(c,2)) { goto L_800E2704; } // 800E26FC
  c->lr=0x800E2704u; f_800E2544(c); // 800E2700
L_800E2704:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2704
  c->lr=c->r[0]; // 800E2708
  c->r[1]=c->r[1]+0x00000010u; // 800E270C
  return; // 800E2710
}

// fn_800E2714
void f_800E2714(Ctx* __restrict c) {
  trace_call(0x800E2714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2714
  c->r[0]=c->lr; // 800E2718
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E271C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2720
  c->r[31]=c->r[3]|c->r[3]; // 800E2724
  c->lr=0x800E272Cu; f_800D7120(c); // 800E2728
  c->r[5]=0u+0x80410000u; // 800E272C
  c->r[3]=0u+0x59710000u; // 800E2730
  c->r[0]=c->r[3]+0x000047B2u; // 800E2734
  c->r[4]=0u+0x00000000u; // 800E2738
  c->r[5]=c->r[5]+0x00006A18u; // 800E273C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E2740
  c->r[3]=c->r[31]|c->r[31]; // 800E2744
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E2748
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E274C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2750
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2754
  c->lr=c->r[0]; // 800E2758
  c->r[1]=c->r[1]+0x00000010u; // 800E275C
  return; // 800E2760
}

// fn_800E2764
void f_800E2764(Ctx* __restrict c) {
  trace_call(0x800E2764u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2764
  c->r[0]=c->lr; // 800E2768
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E276C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2770
  c->r[30]=c->r[3]|c->r[3]; // 800E2774
  c->r[31]=c->r[4]|c->r[4]; // 800E2778
  c->lr=0x800E2780u; f_8030D728(c); // 800E277C
  c->r[3]=c->r[31]|c->r[31]; // 800E2780
  c->r[4]=0u+0x00000000u; // 800E2784
  c->lr=0x800E278Cu; f_8030BE30(c); // 800E2788
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E278C
  c->r[3]=c->r[31]|c->r[31]; // 800E2790
  c->lr=0x800E2798u; f_8030BD1C(c); // 800E2794
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E2798
  c->r[3]=c->r[31]|c->r[31]; // 800E279C
  c->lr=0x800E27A4u; f_8030BD1C(c); // 800E27A0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800E27A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E27A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E27AC
  c->lr=c->r[0]; // 800E27B0
  c->r[1]=c->r[1]+0x00000010u; // 800E27B4
  return; // 800E27B8
}

// fn_800E27BC
void f_800E27BC(Ctx* __restrict c) {
  trace_call(0x800E27BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E27BC
  c->r[0]=c->lr; // 800E27C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E27C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E27C8
  c->r[30]=c->r[3]|c->r[3]; // 800E27CC
  c->r[31]=c->r[4]|c->r[4]; // 800E27D0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E27D4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E27D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E27DC
  c->r[3]=c->r[4]+0x00000030u; // 800E27E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E27E4
  c->r[4]=c->r[30]+0x00000030u; // 800E27E8
  c->lr=0x800E27F0u; f_8003AB48(c); // 800E27EC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800E27F0
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800E27F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E27F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E27FC
  c->lr=c->r[0]; // 800E2800
  c->r[1]=c->r[1]+0x00000010u; // 800E2804
  return; // 800E2808
}

// fn_800E280C
void f_800E280C(Ctx* __restrict c) {
  trace_call(0x800E280Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E280C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2810
  c->ctr=c->r[12]; // 800E2814
  if (true) { dispatch(c,c->ctr); return; } // 800E2818
}

// fn_800E281C
void f_800E281C(Ctx* __restrict c) {
  trace_call(0x800E281Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E281C
  c->r[0]=c->lr; // 800E2820
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2824
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2828
  c->r[29]=c->r[3]|c->r[3]; // 800E282C
  c->r[30]=c->r[4]|c->r[4]; // 800E2830
  c->r[31]=c->r[5]|c->r[5]; // 800E2834
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E2838
  cmps(c,0,(int32_t)c->r[0],7); // 800E283C
  if (!crb(c,0)) { goto L_800E2850; } // 800E2840
  c->r[4]=c->r[31]|c->r[31]; // 800E2844
  c->r[3]=c->r[3]+0x00000030u; // 800E2848
  c->lr=0x800E2850u; f_8003A994(c); // 800E284C
L_800E2850:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E2850
  c->r[3]=c->r[29]|c->r[29]; // 800E2854
  c->r[4]=c->r[30]|c->r[30]; // 800E2858
  c->r[5]=c->r[31]|c->r[31]; // 800E285C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2860
  c->ctr=c->r[12]; // 800E2864
  if (true) { c->lr=0x800E286Cu; dispatch(c,c->ctr); } // 800E2868
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E286C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2870
  c->lr=c->r[0]; // 800E2874
  c->r[1]=c->r[1]+0x00000020u; // 800E2878
  return; // 800E287C
}

// fn_800E2880
void f_800E2880(Ctx* __restrict c) {
  trace_call(0x800E2880u);
  c->r[3]=0u+0x80410000u; // 800E2880
  c->r[3]=c->r[3]+0xFFFFDE24u; // 800E2884
  return; // 800E2888
}

// fn_800E288C
void f_800E288C(Ctx* __restrict c) {
  trace_call(0x800E288Cu);
  c->r[3]=0u+0x00000040u; // 800E288C
  return; // 800E2890
}

// fn_800E2894
void f_800E2894(Ctx* __restrict c) {
  trace_call(0x800E2894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2894
  c->r[0]=c->lr; // 800E2898
  c->r[3]=0u+0x00000040u; // 800E289C
  c->r[4]=c->r[13]+0xFFFFB731u; // 800E28A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E28A4
  c->r[5]=0u+0x00000000u; // 800E28A8
  c->r[6]=0u+0x00001001u; // 800E28AC
  c->lr=0x800E28B4u; f_80244D20(c); // 800E28B0
  cmps(c,0,(int32_t)c->r[3],0); // 800E28B4
  if (crb(c,2)) { goto L_800E28C0; } // 800E28B8
  c->lr=0x800E28C0u; f_800E2714(c); // 800E28BC
L_800E28C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E28C0
  c->lr=c->r[0]; // 800E28C4
  c->r[1]=c->r[1]+0x00000010u; // 800E28C8
  return; // 800E28CC
}

// fn_800E28D0
void f_800E28D0(Ctx* __restrict c) {
  trace_call(0x800E28D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E28D0
  c->r[0]=c->lr; // 800E28D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E28D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E28DC
  c->r[31]=c->r[3]|c->r[3]; // 800E28E0
  c->lr=0x800E28E8u; f_800D7120(c); // 800E28E4
  c->r[3]=0u+0x80410000u; // 800E28E8
  c->r[0]=0u+0x00000000u; // 800E28EC
  c->r[3]=c->r[3]+0x000069E4u; // 800E28F0
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E28F4
  c->r[3]=c->r[31]|c->r[31]; // 800E28F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E28FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2900
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2904
  c->lr=c->r[0]; // 800E2908
  c->r[1]=c->r[1]+0x00000010u; // 800E290C
  return; // 800E2910
}

// fn_800E2914
void f_800E2914(Ctx* __restrict c) {
  trace_call(0x800E2914u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2914
  c->r[0]=c->lr; // 800E2918
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E291C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2920
  c->r[30]=c->r[3]|c->r[3]; // 800E2924
  c->r[31]=c->r[4]|c->r[4]; // 800E2928
  c->lr=0x800E2930u; f_8030D728(c); // 800E292C
  c->r[3]=c->r[31]|c->r[31]; // 800E2930
  c->lr=0x800E2938u; f_8030BD1C(c); // 800E2934
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E2938
  c->r[3]=c->r[31]|c->r[31]; // 800E293C
  c->lr=0x800E2944u; f_8030BD1C(c); // 800E2940
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E2944
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2948
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E294C
  c->lr=c->r[0]; // 800E2950
  c->r[1]=c->r[1]+0x00000010u; // 800E2954
  return; // 800E2958
}

// fn_800E295C
void f_800E295C(Ctx* __restrict c) {
  trace_call(0x800E295Cu);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800E295C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E2960
  c->r[5]=R32(c->r[3]+0x00000030u); // 800E2964
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E2968
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E296C
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E2970
  W32(c->r[4]+0x00000030u,c->r[5]); // 800E2974
  W32(c->r[4]+0x00000034u,c->r[0]); // 800E2978
  return; // 800E297C
}

// fn_800E2980
void f_800E2980(Ctx* __restrict c) {
  trace_call(0x800E2980u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2980
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2984
  c->ctr=c->r[12]; // 800E2988
  if (true) { dispatch(c,c->ctr); return; } // 800E298C
}

// fn_800E2990
void f_800E2990(Ctx* __restrict c) {
  trace_call(0x800E2990u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2990
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2994
  c->ctr=c->r[12]; // 800E2998
  if (true) { dispatch(c,c->ctr); return; } // 800E299C
}

// fn_800E29A0
void f_800E29A0(Ctx* __restrict c) {
  trace_call(0x800E29A0u);
  c->r[3]=0u+0x80410000u; // 800E29A0
  c->r[3]=c->r[3]+0xFFFFDE3Au; // 800E29A4
  return; // 800E29A8
}

// fn_800E29AC
void f_800E29AC(Ctx* __restrict c) {
  trace_call(0x800E29ACu);
  c->r[3]=0u+0x00000038u; // 800E29AC
  return; // 800E29B0
}

// fn_800E29B4
void f_800E29B4(Ctx* __restrict c) {
  trace_call(0x800E29B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E29B4
  c->r[0]=c->lr; // 800E29B8
  c->r[3]=0u+0x00000038u; // 800E29BC
  c->r[4]=c->r[13]+0xFFFFB736u; // 800E29C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E29C4
  c->r[5]=0u+0x00000000u; // 800E29C8
  c->r[6]=0u+0x00001001u; // 800E29CC
  c->lr=0x800E29D4u; f_80244D20(c); // 800E29D0
  cmps(c,0,(int32_t)c->r[3],0); // 800E29D4
  if (crb(c,2)) { goto L_800E29E0; } // 800E29D8
  c->lr=0x800E29E0u; f_800E28D0(c); // 800E29DC
L_800E29E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E29E0
  c->lr=c->r[0]; // 800E29E4
  c->r[1]=c->r[1]+0x00000010u; // 800E29E8
  return; // 800E29EC
}

// fn_800E29F0
void f_800E29F0(Ctx* __restrict c) {
  trace_call(0x800E29F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E29F0
  c->r[0]=c->lr; // 800E29F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E29F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E29FC
  c->r[31]=c->r[3]|c->r[3]; // 800E2A00
  c->lr=0x800E2A08u; f_800D7120(c); // 800E2A04
  c->r[3]=0u+0x80410000u; // 800E2A08
  c->r[0]=0u+0x00000000u; // 800E2A0C
  c->r[3]=c->r[3]+0x000069B0u; // 800E2A10
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E2A14
  c->r[3]=c->r[31]|c->r[31]; // 800E2A18
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E2A1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2A20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2A24
  c->lr=c->r[0]; // 800E2A28
  c->r[1]=c->r[1]+0x00000010u; // 800E2A2C
  return; // 800E2A30
}

// fn_800E2A34
void f_800E2A34(Ctx* __restrict c) {
  trace_call(0x800E2A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2A34
  c->r[0]=c->lr; // 800E2A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2A3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2A40
  c->r[30]=c->r[3]|c->r[3]; // 800E2A44
  c->r[31]=c->r[4]|c->r[4]; // 800E2A48
  c->lr=0x800E2A50u; f_8030D728(c); // 800E2A4C
  c->r[3]=c->r[31]|c->r[31]; // 800E2A50
  c->lr=0x800E2A58u; f_8030BD1C(c); // 800E2A54
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E2A58
  c->r[3]=c->r[31]|c->r[31]; // 800E2A5C
  c->lr=0x800E2A64u; f_8030BD1C(c); // 800E2A60
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E2A64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2A68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2A6C
  c->lr=c->r[0]; // 800E2A70
  c->r[1]=c->r[1]+0x00000010u; // 800E2A74
  return; // 800E2A78
}

// fn_800E2A7C
void f_800E2A7C(Ctx* __restrict c) {
  trace_call(0x800E2A7Cu);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800E2A7C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E2A80
  c->r[5]=R32(c->r[3]+0x00000030u); // 800E2A84
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E2A88
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E2A8C
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E2A90
  W32(c->r[4]+0x00000030u,c->r[5]); // 800E2A94
  W32(c->r[4]+0x00000034u,c->r[0]); // 800E2A98
  return; // 800E2A9C
}

// fn_800E2AA0
void f_800E2AA0(Ctx* __restrict c) {
  trace_call(0x800E2AA0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2AA0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2AA4
  c->ctr=c->r[12]; // 800E2AA8
  if (true) { dispatch(c,c->ctr); return; } // 800E2AAC
}

// fn_800E2AB0
void f_800E2AB0(Ctx* __restrict c) {
  trace_call(0x800E2AB0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2AB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2AB4
  c->ctr=c->r[12]; // 800E2AB8
  if (true) { dispatch(c,c->ctr); return; } // 800E2ABC
}

// fn_800E2AC0
void f_800E2AC0(Ctx* __restrict c) {
  trace_call(0x800E2AC0u);
  c->r[3]=0u+0x80410000u; // 800E2AC0
  c->r[3]=c->r[3]+0xFFFFDE47u; // 800E2AC4
  return; // 800E2AC8
}

// fn_800E2ACC
void f_800E2ACC(Ctx* __restrict c) {
  trace_call(0x800E2ACCu);
  c->r[3]=0u+0x00000038u; // 800E2ACC
  return; // 800E2AD0
}

// fn_800E2AD4
void f_800E2AD4(Ctx* __restrict c) {
  trace_call(0x800E2AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2AD4
  c->r[0]=c->lr; // 800E2AD8
  c->r[3]=0u+0x00000038u; // 800E2ADC
  c->r[4]=c->r[13]+0xFFFFB73Bu; // 800E2AE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2AE4
  c->r[5]=0u+0x00000000u; // 800E2AE8
  c->r[6]=0u+0x00001001u; // 800E2AEC
  c->lr=0x800E2AF4u; f_80244D20(c); // 800E2AF0
  cmps(c,0,(int32_t)c->r[3],0); // 800E2AF4
  if (crb(c,2)) { goto L_800E2B00; } // 800E2AF8
  c->lr=0x800E2B00u; f_800E29F0(c); // 800E2AFC
L_800E2B00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2B00
  c->lr=c->r[0]; // 800E2B04
  c->r[1]=c->r[1]+0x00000010u; // 800E2B08
  return; // 800E2B0C
}

// fn_800E2B10
void f_800E2B10(Ctx* __restrict c) {
  trace_call(0x800E2B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2B10
  c->r[0]=c->lr; // 800E2B14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2B18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2B1C
  c->r[31]=c->r[3]|c->r[3]; // 800E2B20
  c->lr=0x800E2B28u; f_800D7120(c); // 800E2B24
  c->r[4]=0u+0x80410000u; // 800E2B28
  c->r[3]=0u+0xBC1A0000u; // 800E2B2C
  c->r[0]=c->r[3]+0x000028D9u; // 800E2B30
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E2B34
  c->r[4]=c->r[4]+0x0000697Cu; // 800E2B38
  c->r[3]=c->r[31]|c->r[31]; // 800E2B3C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E2B40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2B44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2B48
  c->lr=c->r[0]; // 800E2B4C
  c->r[1]=c->r[1]+0x00000010u; // 800E2B50
  return; // 800E2B54
}

// fn_800E2B58
void f_800E2B58(Ctx* __restrict c) {
  trace_call(0x800E2B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2B58
  c->r[0]=c->lr; // 800E2B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2B60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2B64
  c->r[30]=c->r[3]|c->r[3]; // 800E2B68
  c->r[31]=c->r[4]|c->r[4]; // 800E2B6C
  c->lr=0x800E2B74u; f_8030D728(c); // 800E2B70
  c->r[3]=c->r[31]|c->r[31]; // 800E2B74
  c->lr=0x800E2B7Cu; f_8030BD1C(c); // 800E2B78
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E2B7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2B80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2B84
  c->lr=c->r[0]; // 800E2B88
  c->r[1]=c->r[1]+0x00000010u; // 800E2B8C
  return; // 800E2B90
}

// fn_800E2B94
void f_800E2B94(Ctx* __restrict c) {
  trace_call(0x800E2B94u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E2B94
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E2B98
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E2B9C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E2BA0
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E2BA4
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E2BA8
  return; // 800E2BAC
}

// fn_800E2BB0
void f_800E2BB0(Ctx* __restrict c) {
  trace_call(0x800E2BB0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2BB0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2BB4
  c->ctr=c->r[12]; // 800E2BB8
  if (true) { dispatch(c,c->ctr); return; } // 800E2BBC
}

// fn_800E2BC0
void f_800E2BC0(Ctx* __restrict c) {
  trace_call(0x800E2BC0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2BC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2BC4
  c->ctr=c->r[12]; // 800E2BC8
  if (true) { dispatch(c,c->ctr); return; } // 800E2BCC
}

// fn_800E2BD0
void f_800E2BD0(Ctx* __restrict c) {
  trace_call(0x800E2BD0u);
  c->r[3]=0u+0x80410000u; // 800E2BD0
  c->r[3]=c->r[3]+0xFFFFDE54u; // 800E2BD4
  return; // 800E2BD8
}

// fn_800E2BDC
void f_800E2BDC(Ctx* __restrict c) {
  trace_call(0x800E2BDCu);
  c->r[3]=0u+0x00000034u; // 800E2BDC
  return; // 800E2BE0
}

// fn_800E2BE4
void f_800E2BE4(Ctx* __restrict c) {
  trace_call(0x800E2BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2BE4
  c->r[0]=c->lr; // 800E2BE8
  c->r[3]=0u+0x00000034u; // 800E2BEC
  c->r[4]=c->r[13]+0xFFFFB740u; // 800E2BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2BF4
  c->r[5]=0u+0x00000000u; // 800E2BF8
  c->r[6]=0u+0x00001001u; // 800E2BFC
  c->lr=0x800E2C04u; f_80244D20(c); // 800E2C00
  cmps(c,0,(int32_t)c->r[3],0); // 800E2C04
  if (crb(c,2)) { goto L_800E2C10; } // 800E2C08
  c->lr=0x800E2C10u; f_800E2B10(c); // 800E2C0C
L_800E2C10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2C10
  c->lr=c->r[0]; // 800E2C14
  c->r[1]=c->r[1]+0x00000010u; // 800E2C18
  return; // 800E2C1C
}

// fn_800E2C20
void f_800E2C20(Ctx* __restrict c) {
  trace_call(0x800E2C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2C20
  c->r[0]=c->lr; // 800E2C24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2C28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2C2C
  c->r[31]=c->r[3]|c->r[3]; // 800E2C30
  c->lr=0x800E2C38u; f_800D7120(c); // 800E2C34
  c->r[4]=0u+0x80410000u; // 800E2C38
  c->r[3]=0u+0xF9EB0000u; // 800E2C3C
  c->r[0]=c->r[3]+0xFFFF980Au; // 800E2C40
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E2C44
  c->r[4]=c->r[4]+0x00006948u; // 800E2C48
  c->r[3]=c->r[31]|c->r[31]; // 800E2C4C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E2C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2C54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2C58
  c->lr=c->r[0]; // 800E2C5C
  c->r[1]=c->r[1]+0x00000010u; // 800E2C60
  return; // 800E2C64
}

// fn_800E2C68
void f_800E2C68(Ctx* __restrict c) {
  trace_call(0x800E2C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2C68
  c->r[0]=c->lr; // 800E2C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2C70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2C74
  c->r[30]=c->r[3]|c->r[3]; // 800E2C78
  c->r[31]=c->r[4]|c->r[4]; // 800E2C7C
  c->lr=0x800E2C84u; f_8030D728(c); // 800E2C80
  c->r[3]=c->r[31]|c->r[31]; // 800E2C84
  c->r[4]=c->r[30]+0x00000030u; // 800E2C88
  c->r[5]=0u+0x00000000u; // 800E2C8C
  c->lr=0x800E2C94u; f_8030B7F0(c); // 800E2C90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2C98
  c->lr=c->r[0]; // 800E2C9C
  c->r[1]=c->r[1]+0x00000010u; // 800E2CA0
  return; // 800E2CA4
}

// fn_800E2CA8
void f_800E2CA8(Ctx* __restrict c) {
  trace_call(0x800E2CA8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E2CA8
  c->r[5]=c->r[3]|c->r[3]; // 800E2CAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E2CB0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E2CB4
  c->r[3]=c->r[4]+0x00000030u; // 800E2CB8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E2CBC
  c->r[4]=c->r[5]+0x00000030u; // 800E2CC0
  f_803A6F10(c); return; // 800E2CC4
}

// fn_800E2CC8
void f_800E2CC8(Ctx* __restrict c) {
  trace_call(0x800E2CC8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2CC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2CCC
  c->ctr=c->r[12]; // 800E2CD0
  if (true) { dispatch(c,c->ctr); return; } // 800E2CD4
}

// fn_800E2CD8
void f_800E2CD8(Ctx* __restrict c) {
  trace_call(0x800E2CD8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2CD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2CDC
  c->ctr=c->r[12]; // 800E2CE0
  if (true) { dispatch(c,c->ctr); return; } // 800E2CE4
}

// fn_800E2CE8
void f_800E2CE8(Ctx* __restrict c) {
  trace_call(0x800E2CE8u);
  c->r[3]=0u+0x80410000u; // 800E2CE8
  c->r[3]=c->r[3]+0xFFFFDE69u; // 800E2CEC
  return; // 800E2CF0
}

// fn_800E2CF4
void f_800E2CF4(Ctx* __restrict c) {
  trace_call(0x800E2CF4u);
  c->r[3]=0u+0x00000050u; // 800E2CF4
  return; // 800E2CF8
}

// fn_800E2CFC
void f_800E2CFC(Ctx* __restrict c) {
  trace_call(0x800E2CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2CFC
  c->r[0]=c->lr; // 800E2D00
  c->r[3]=0u+0x00000050u; // 800E2D04
  c->r[4]=c->r[13]+0xFFFFB745u; // 800E2D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2D0C
  c->r[5]=0u+0x00000000u; // 800E2D10
  c->r[6]=0u+0x00001001u; // 800E2D14
  c->lr=0x800E2D1Cu; f_80244D20(c); // 800E2D18
  cmps(c,0,(int32_t)c->r[3],0); // 800E2D1C
  if (crb(c,2)) { goto L_800E2D28; } // 800E2D20
  c->lr=0x800E2D28u; f_800E2C20(c); // 800E2D24
L_800E2D28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2D28
  c->lr=c->r[0]; // 800E2D2C
  c->r[1]=c->r[1]+0x00000010u; // 800E2D30
  return; // 800E2D34
}

// fn_800E2D38
void f_800E2D38(Ctx* __restrict c) {
  trace_call(0x800E2D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2D38
  c->r[0]=c->lr; // 800E2D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2D40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2D44
  c->r[31]=c->r[3]|c->r[3]; // 800E2D48
  c->lr=0x800E2D50u; f_800D7120(c); // 800E2D4C
  c->r[3]=0u+0x80410000u; // 800E2D50
  c->r[0]=0u+0x00000000u; // 800E2D54
  c->r[3]=c->r[3]+0x00006914u; // 800E2D58
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E2D5C
  c->r[3]=c->r[31]|c->r[31]; // 800E2D60
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E2D64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2D68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2D6C
  c->lr=c->r[0]; // 800E2D70
  c->r[1]=c->r[1]+0x00000010u; // 800E2D74
  return; // 800E2D78
}

// fn_800E2D7C
void f_800E2D7C(Ctx* __restrict c) {
  trace_call(0x800E2D7Cu);
  f_8030D728(c); return; // 800E2D7C
}

// fn_800E2D80
void f_800E2D80(Ctx* __restrict c) {
  trace_call(0x800E2D80u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800E2D80
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E2D84
  W32(c->r[4]+0x00000000u,c->r[5]); // 800E2D88
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E2D8C
  return; // 800E2D90
}

// fn_800E2D94
void f_800E2D94(Ctx* __restrict c) {
  trace_call(0x800E2D94u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2D94
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2D98
  c->ctr=c->r[12]; // 800E2D9C
  if (true) { dispatch(c,c->ctr); return; } // 800E2DA0
}

// fn_800E2DA4
void f_800E2DA4(Ctx* __restrict c) {
  trace_call(0x800E2DA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2DA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2DA8
  c->ctr=c->r[12]; // 800E2DAC
  if (true) { dispatch(c,c->ctr); return; } // 800E2DB0
}

// fn_800E2DB4
void f_800E2DB4(Ctx* __restrict c) {
  trace_call(0x800E2DB4u);
  c->r[3]=0u+0x80410000u; // 800E2DB4
  c->r[3]=c->r[3]+0xFFFFDE7Au; // 800E2DB8
  return; // 800E2DBC
}

// fn_800E2DC0
void f_800E2DC0(Ctx* __restrict c) {
  trace_call(0x800E2DC0u);
  c->r[3]=0u+0x00000030u; // 800E2DC0
  return; // 800E2DC4
}

// fn_800E2DC8
void f_800E2DC8(Ctx* __restrict c) {
  trace_call(0x800E2DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2DC8
  c->r[0]=c->lr; // 800E2DCC
  c->r[3]=0u+0x00000030u; // 800E2DD0
  c->r[4]=c->r[13]+0xFFFFB74Au; // 800E2DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2DD8
  c->r[5]=0u+0x00000000u; // 800E2DDC
  c->r[6]=0u+0x00001001u; // 800E2DE0
  c->lr=0x800E2DE8u; f_80244D20(c); // 800E2DE4
  cmps(c,0,(int32_t)c->r[3],0); // 800E2DE8
  if (crb(c,2)) { goto L_800E2DF4; } // 800E2DEC
  c->lr=0x800E2DF4u; f_800E2D38(c); // 800E2DF0
L_800E2DF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2DF4
  c->lr=c->r[0]; // 800E2DF8
  c->r[1]=c->r[1]+0x00000010u; // 800E2DFC
  return; // 800E2E00
}

// fn_800E2E04
void f_800E2E04(Ctx* __restrict c) {
  trace_call(0x800E2E04u);
  return; // 800E2E04
}

// fn_800E2E08
void f_800E2E08(Ctx* __restrict c) {
  trace_call(0x800E2E08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2E08
  c->r[0]=c->lr; // 800E2E0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2E10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2E14
  c->r[31]=c->r[3]|c->r[3]; // 800E2E18
  c->lr=0x800E2E20u; f_800D7120(c); // 800E2E1C
  c->r[3]=0u+0x80410000u; // 800E2E20
  c->r[0]=0u+0x00000000u; // 800E2E24
  c->r[3]=c->r[3]+0x000068E0u; // 800E2E28
  W32(c->r[31]+0x00000008u,c->r[3]); // 800E2E2C
  c->r[3]=c->r[31]|c->r[31]; // 800E2E30
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E2E34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2E38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2E3C
  c->lr=c->r[0]; // 800E2E40
  c->r[1]=c->r[1]+0x00000010u; // 800E2E44
  return; // 800E2E48
}

// fn_800E2E4C
void f_800E2E4C(Ctx* __restrict c) {
  trace_call(0x800E2E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2E4C
  c->r[0]=c->lr; // 800E2E50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2E54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2E58
  c->r[30]=c->r[3]|c->r[3]; // 800E2E5C
  c->r[31]=c->r[4]|c->r[4]; // 800E2E60
  c->lr=0x800E2E68u; f_8030D728(c); // 800E2E64
  c->r[3]=c->r[31]|c->r[31]; // 800E2E68
  c->lr=0x800E2E70u; f_8030BD1C(c); // 800E2E6C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E2E70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2E74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2E78
  c->lr=c->r[0]; // 800E2E7C
  c->r[1]=c->r[1]+0x00000010u; // 800E2E80
  return; // 800E2E84
}

// fn_800E2E88
void f_800E2E88(Ctx* __restrict c) {
  trace_call(0x800E2E88u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E2E88
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E2E8C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800E2E90
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E2E94
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E2E98
  W32(c->r[4]+0x00000030u,c->r[0]); // 800E2E9C
  return; // 800E2EA0
}

// fn_800E2EA4
void f_800E2EA4(Ctx* __restrict c) {
  trace_call(0x800E2EA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2EA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2EA8
  c->ctr=c->r[12]; // 800E2EAC
  if (true) { dispatch(c,c->ctr); return; } // 800E2EB0
}

// fn_800E2EB4
void f_800E2EB4(Ctx* __restrict c) {
  trace_call(0x800E2EB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2EB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2EB8
  c->ctr=c->r[12]; // 800E2EBC
  if (true) { dispatch(c,c->ctr); return; } // 800E2EC0
}

// fn_800E2EC4
void f_800E2EC4(Ctx* __restrict c) {
  trace_call(0x800E2EC4u);
  c->r[3]=0u+0x80410000u; // 800E2EC4
  c->r[3]=c->r[3]+0xFFFFDE91u; // 800E2EC8
  return; // 800E2ECC
}

// fn_800E2ED0
void f_800E2ED0(Ctx* __restrict c) {
  trace_call(0x800E2ED0u);
  c->r[3]=0u+0x00000034u; // 800E2ED0
  return; // 800E2ED4
}

// fn_800E2ED8
void f_800E2ED8(Ctx* __restrict c) {
  trace_call(0x800E2ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2ED8
  c->r[0]=c->lr; // 800E2EDC
  c->r[3]=0u+0x00000034u; // 800E2EE0
  c->r[4]=c->r[13]+0xFFFFB74Fu; // 800E2EE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2EE8
  c->r[5]=0u+0x00000000u; // 800E2EEC
  c->r[6]=0u+0x00001001u; // 800E2EF0
  c->lr=0x800E2EF8u; f_80244D20(c); // 800E2EF4
  cmps(c,0,(int32_t)c->r[3],0); // 800E2EF8
  if (crb(c,2)) { goto L_800E2F04; } // 800E2EFC
  c->lr=0x800E2F04u; f_800E2E08(c); // 800E2F00
L_800E2F04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2F04
  c->lr=c->r[0]; // 800E2F08
  c->r[1]=c->r[1]+0x00000010u; // 800E2F0C
  return; // 800E2F10
}

// fn_800E2F14
void f_800E2F14(Ctx* __restrict c) {
  trace_call(0x800E2F14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2F14
  c->r[0]=c->lr; // 800E2F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2F1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2F20
  c->r[31]=c->r[3]|c->r[3]; // 800E2F24
  c->lr=0x800E2F2Cu; f_800D7120(c); // 800E2F28
  c->r[4]=0u+0x80410000u; // 800E2F2C
  c->r[3]=0u+0xBC1A0000u; // 800E2F30
  c->r[0]=c->r[3]+0x000028D9u; // 800E2F34
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E2F38
  c->r[4]=c->r[4]+0x000068ACu; // 800E2F3C
  c->r[3]=c->r[31]|c->r[31]; // 800E2F40
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E2F44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2F48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2F4C
  c->lr=c->r[0]; // 800E2F50
  c->r[1]=c->r[1]+0x00000010u; // 800E2F54
  return; // 800E2F58
}

// fn_800E2F5C
void f_800E2F5C(Ctx* __restrict c) {
  trace_call(0x800E2F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2F5C
  c->r[0]=c->lr; // 800E2F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2F64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E2F68
  c->r[30]=c->r[3]|c->r[3]; // 800E2F6C
  c->r[31]=c->r[4]|c->r[4]; // 800E2F70
  c->lr=0x800E2F78u; f_8030D728(c); // 800E2F74
  c->r[3]=c->r[31]|c->r[31]; // 800E2F78
  c->lr=0x800E2F80u; f_8030BD1C(c); // 800E2F7C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E2F80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E2F84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2F88
  c->lr=c->r[0]; // 800E2F8C
  c->r[1]=c->r[1]+0x00000010u; // 800E2F90
  return; // 800E2F94
}

// fn_800E2F98
void f_800E2F98(Ctx* __restrict c) {
  trace_call(0x800E2F98u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800E2F98
  c->r[5]=R32(c->r[3]+0x00000004u); // 800E2F9C
  c->r[0]=R8(c->r[3]+0x00000030u); // 800E2FA0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800E2FA4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800E2FA8
  W8(c->r[4]+0x00000030u,c->r[0]); // 800E2FAC
  return; // 800E2FB0
}

// fn_800E2FB4
void f_800E2FB4(Ctx* __restrict c) {
  trace_call(0x800E2FB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2FB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E2FB8
  c->ctr=c->r[12]; // 800E2FBC
  if (true) { dispatch(c,c->ctr); return; } // 800E2FC0
}

// fn_800E2FC4
void f_800E2FC4(Ctx* __restrict c) {
  trace_call(0x800E2FC4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E2FC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E2FC8
  c->ctr=c->r[12]; // 800E2FCC
  if (true) { dispatch(c,c->ctr); return; } // 800E2FD0
}

// fn_800E2FD4
void f_800E2FD4(Ctx* __restrict c) {
  trace_call(0x800E2FD4u);
  c->r[3]=0u+0x80410000u; // 800E2FD4
  c->r[3]=c->r[3]+0xFFFFDEA6u; // 800E2FD8
  return; // 800E2FDC
}

// fn_800E2FE0
void f_800E2FE0(Ctx* __restrict c) {
  trace_call(0x800E2FE0u);
  c->r[3]=0u+0x00000034u; // 800E2FE0
  return; // 800E2FE4
}

// fn_800E2FE8
void f_800E2FE8(Ctx* __restrict c) {
  trace_call(0x800E2FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2FE8
  c->r[0]=c->lr; // 800E2FEC
  c->r[3]=0u+0x00000034u; // 800E2FF0
  c->r[4]=c->r[13]+0xFFFFB754u; // 800E2FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2FF8
  c->r[5]=0u+0x00000000u; // 800E2FFC
  c->r[6]=0u+0x00001001u; // 800E3000
  c->lr=0x800E3008u; f_80244D20(c); // 800E3004
  cmps(c,0,(int32_t)c->r[3],0); // 800E3008
  if (crb(c,2)) { goto L_800E3014; } // 800E300C
  c->lr=0x800E3014u; f_800E2F14(c); // 800E3010
L_800E3014:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3014
  c->lr=c->r[0]; // 800E3018
  c->r[1]=c->r[1]+0x00000010u; // 800E301C
  return; // 800E3020
}

// fn_800E3024
void f_800E3024(Ctx* __restrict c) {
  trace_call(0x800E3024u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3024
  c->r[0]=c->lr; // 800E3028
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E302C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3030
  c->r[31]=c->r[3]|c->r[3]; // 800E3034
  c->lr=0x800E303Cu; f_800D7120(c); // 800E3038
  c->r[5]=0u+0x80410000u; // 800E303C
  c->r[3]=0u+0x59720000u; // 800E3040
  c->r[0]=c->r[3]+0x00004EB8u; // 800E3044
  c->r[4]=0u+0x00000000u; // 800E3048
  c->r[5]=c->r[5]+0x00006878u; // 800E304C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800E3050
  c->r[3]=c->r[31]|c->r[31]; // 800E3054
  W32(c->r[31]+0x00000038u,c->r[4]); // 800E3058
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E305C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3060
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3064
  c->lr=c->r[0]; // 800E3068
  c->r[1]=c->r[1]+0x00000010u; // 800E306C
  return; // 800E3070
}

// fn_800E3074
void f_800E3074(Ctx* __restrict c) {
  trace_call(0x800E3074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3074
  c->r[0]=c->lr; // 800E3078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E307C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3080
  c->r[30]=c->r[3]|c->r[3]; // 800E3084
  c->r[31]=c->r[4]|c->r[4]; // 800E3088
  c->lr=0x800E3090u; f_8030D728(c); // 800E308C
  c->r[3]=c->r[31]|c->r[31]; // 800E3090
  c->r[4]=0u+0x00000000u; // 800E3094
  c->lr=0x800E309Cu; f_8030BE30(c); // 800E3098
  W32(c->r[30]+0x00000030u,c->r[3]); // 800E309C
  c->r[3]=c->r[31]|c->r[31]; // 800E30A0
  c->lr=0x800E30A8u; f_8030BD1C(c); // 800E30A4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E30A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E30AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E30B0
  c->lr=c->r[0]; // 800E30B4
  c->r[1]=c->r[1]+0x00000010u; // 800E30B8
  return; // 800E30BC
}

// fn_800E30C0
void f_800E30C0(Ctx* __restrict c) {
  trace_call(0x800E30C0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E30C0
  c->r[5]=c->r[3]|c->r[3]; // 800E30C4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E30C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E30CC
  c->r[3]=c->r[4]+0x00000030u; // 800E30D0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E30D4
  c->r[4]=c->r[5]+0x00000030u; // 800E30D8
  f_8003AB48(c); return; // 800E30DC
}

// fn_800E30E0
void f_800E30E0(Ctx* __restrict c) {
  trace_call(0x800E30E0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E30E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E30E4
  c->ctr=c->r[12]; // 800E30E8
  if (true) { dispatch(c,c->ctr); return; } // 800E30EC
}

// fn_800E30F0
void f_800E30F0(Ctx* __restrict c) {
  trace_call(0x800E30F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E30F0
  c->r[0]=c->lr; // 800E30F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E30F8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E30FC
  c->r[29]=c->r[3]|c->r[3]; // 800E3100
  c->r[30]=c->r[4]|c->r[4]; // 800E3104
  c->r[31]=c->r[5]|c->r[5]; // 800E3108
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E310C
  cmps(c,0,(int32_t)c->r[0],7); // 800E3110
  if (!crb(c,0)) { goto L_800E3124; } // 800E3114
  c->r[4]=c->r[31]|c->r[31]; // 800E3118
  c->r[3]=c->r[3]+0x00000030u; // 800E311C
  c->lr=0x800E3124u; f_8003A994(c); // 800E3120
L_800E3124:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800E3124
  c->r[3]=c->r[29]|c->r[29]; // 800E3128
  c->r[4]=c->r[30]|c->r[30]; // 800E312C
  c->r[5]=c->r[31]|c->r[31]; // 800E3130
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3134
  c->ctr=c->r[12]; // 800E3138
  if (true) { c->lr=0x800E3140u; dispatch(c,c->ctr); } // 800E313C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3140
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3144
  c->lr=c->r[0]; // 800E3148
  c->r[1]=c->r[1]+0x00000020u; // 800E314C
  return; // 800E3150
}

// fn_800E3154
void f_800E3154(Ctx* __restrict c) {
  trace_call(0x800E3154u);
  c->r[3]=0u+0x80410000u; // 800E3154
  c->r[3]=c->r[3]+0xFFFFDEB4u; // 800E3158
  return; // 800E315C
}

// fn_800E3160
void f_800E3160(Ctx* __restrict c) {
  trace_call(0x800E3160u);
  c->r[3]=0u+0x0000003Cu; // 800E3160
  return; // 800E3164
}

// fn_800E3168
void f_800E3168(Ctx* __restrict c) {
  trace_call(0x800E3168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3168
  c->r[0]=c->lr; // 800E316C
  c->r[3]=0u+0x0000003Cu; // 800E3170
  c->r[4]=c->r[13]+0xFFFFB759u; // 800E3174
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3178
  c->r[5]=0u+0x00000000u; // 800E317C
  c->r[6]=0u+0x00001001u; // 800E3180
  c->lr=0x800E3188u; f_80244D20(c); // 800E3184
  cmps(c,0,(int32_t)c->r[3],0); // 800E3188
  if (crb(c,2)) { goto L_800E3194; } // 800E318C
  c->lr=0x800E3194u; f_800E3024(c); // 800E3190
L_800E3194:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3194
  c->lr=c->r[0]; // 800E3198
  c->r[1]=c->r[1]+0x00000010u; // 800E319C
  return; // 800E31A0
}

// fn_800E31A4
void f_800E31A4(Ctx* __restrict c) {
  trace_call(0x800E31A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E31A4
  c->r[0]=c->lr; // 800E31A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E31AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E31B0
  c->r[31]=c->r[3]|c->r[3]; // 800E31B4
  c->lr=0x800E31BCu; f_800D7120(c); // 800E31B8
  c->r[4]=0u+0x80410000u; // 800E31BC
  c->r[3]=0u+0xF9EB0000u; // 800E31C0
  c->r[0]=c->r[3]+0xFFFF980Au; // 800E31C4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E31C8
  c->r[4]=c->r[4]+0x00006844u; // 800E31CC
  c->r[3]=c->r[31]|c->r[31]; // 800E31D0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E31D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E31D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E31DC
  c->lr=c->r[0]; // 800E31E0
  c->r[1]=c->r[1]+0x00000010u; // 800E31E4
  return; // 800E31E8
}

// fn_800E31EC
void f_800E31EC(Ctx* __restrict c) {
  trace_call(0x800E31ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E31EC
  c->r[0]=c->lr; // 800E31F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E31F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E31F8
  c->r[30]=c->r[3]|c->r[3]; // 800E31FC
  c->r[31]=c->r[4]|c->r[4]; // 800E3200
  c->lr=0x800E3208u; f_8030D728(c); // 800E3204
  c->r[3]=c->r[31]|c->r[31]; // 800E3208
  c->r[4]=c->r[30]+0x00000030u; // 800E320C
  c->r[5]=0u+0x00000000u; // 800E3210
  c->lr=0x800E3218u; f_8030B7F0(c); // 800E3214
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3218
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E321C
  c->lr=c->r[0]; // 800E3220
  c->r[1]=c->r[1]+0x00000010u; // 800E3224
  return; // 800E3228
}

// fn_800E322C
void f_800E322C(Ctx* __restrict c) {
  trace_call(0x800E322Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E322C
  c->r[5]=c->r[3]|c->r[3]; // 800E3230
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E3234
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E3238
  c->r[3]=c->r[4]+0x00000030u; // 800E323C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E3240
  c->r[4]=c->r[5]+0x00000030u; // 800E3244
  f_803A6F10(c); return; // 800E3248
}

// fn_800E324C
void f_800E324C(Ctx* __restrict c) {
  trace_call(0x800E324Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E324C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E3250
  c->ctr=c->r[12]; // 800E3254
  if (true) { dispatch(c,c->ctr); return; } // 800E3258
}

// fn_800E325C
void f_800E325C(Ctx* __restrict c) {
  trace_call(0x800E325Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E325C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3260
  c->ctr=c->r[12]; // 800E3264
  if (true) { dispatch(c,c->ctr); return; } // 800E3268
}

// fn_800E326C
void f_800E326C(Ctx* __restrict c) {
  trace_call(0x800E326Cu);
  c->r[3]=0u+0x80410000u; // 800E326C
  c->r[3]=c->r[3]+0xFFFFDECCu; // 800E3270
  return; // 800E3274
}

// fn_800E3278
void f_800E3278(Ctx* __restrict c) {
  trace_call(0x800E3278u);
  c->r[3]=0u+0x00000050u; // 800E3278
  return; // 800E327C
}

// fn_800E3280
void f_800E3280(Ctx* __restrict c) {
  trace_call(0x800E3280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3280
  c->r[0]=c->lr; // 800E3284
  c->r[3]=0u+0x00000050u; // 800E3288
  c->r[4]=c->r[13]+0xFFFFB75Eu; // 800E328C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3290
  c->r[5]=0u+0x00000000u; // 800E3294
  c->r[6]=0u+0x00001001u; // 800E3298
  c->lr=0x800E32A0u; f_80244D20(c); // 800E329C
  cmps(c,0,(int32_t)c->r[3],0); // 800E32A0
  if (crb(c,2)) { goto L_800E32AC; } // 800E32A4
  c->lr=0x800E32ACu; f_800E31A4(c); // 800E32A8
L_800E32AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E32AC
  c->lr=c->r[0]; // 800E32B0
  c->r[1]=c->r[1]+0x00000010u; // 800E32B4
  return; // 800E32B8
}

// fn_800E32BC
void f_800E32BC(Ctx* __restrict c) {
  trace_call(0x800E32BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E32BC
  c->r[0]=c->lr; // 800E32C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E32C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E32C8
  c->r[31]=c->r[3]|c->r[3]; // 800E32CC
  c->lr=0x800E32D4u; f_800D7120(c); // 800E32D0
  c->r[4]=0u+0x80410000u; // 800E32D4
  c->r[3]=0u+0xB7440000u; // 800E32D8
  c->r[0]=c->r[3]+0xFFFFB994u; // 800E32DC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E32E0
  c->r[4]=c->r[4]+0x00006810u; // 800E32E4
  c->r[3]=c->r[31]|c->r[31]; // 800E32E8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E32EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E32F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E32F4
  c->lr=c->r[0]; // 800E32F8
  c->r[1]=c->r[1]+0x00000010u; // 800E32FC
  return; // 800E3300
}

// fn_800E3304
void f_800E3304(Ctx* __restrict c) {
  trace_call(0x800E3304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3304
  c->r[0]=c->lr; // 800E3308
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E330C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3310
  c->r[30]=c->r[3]|c->r[3]; // 800E3314
  c->r[31]=c->r[4]|c->r[4]; // 800E3318
  c->lr=0x800E3320u; f_8030D728(c); // 800E331C
  c->r[3]=c->r[31]|c->r[31]; // 800E3320
  c->lr=0x800E3328u; f_8030BD1C(c); // 800E3324
  W8(c->r[30]+0x00000030u,c->r[3]); // 800E3328
  c->r[3]=c->r[31]|c->r[31]; // 800E332C
  c->lr=0x800E3334u; f_8030BD1C(c); // 800E3330
  W32(c->r[30]+0x00000034u,c->r[3]); // 800E3334
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3338
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E333C
  c->lr=c->r[0]; // 800E3340
  c->r[1]=c->r[1]+0x00000010u; // 800E3344
  return; // 800E3348
}

// fn_800E334C
void f_800E334C(Ctx* __restrict c) {
  trace_call(0x800E334Cu);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800E334C
  c->r[6]=R32(c->r[3]+0x00000004u); // 800E3350
  c->r[5]=R8(c->r[3]+0x00000030u); // 800E3354
  c->r[0]=R32(c->r[3]+0x00000034u); // 800E3358
  W32(c->r[4]+0x00000000u,c->r[7]); // 800E335C
  W32(c->r[4]+0x00000004u,c->r[6]); // 800E3360
  W8(c->r[4]+0x00000030u,c->r[5]); // 800E3364
  W32(c->r[4]+0x00000034u,c->r[0]); // 800E3368
  return; // 800E336C
}

// fn_800E3370
void f_800E3370(Ctx* __restrict c) {
  trace_call(0x800E3370u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3370
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E3374
  c->ctr=c->r[12]; // 800E3378
  if (true) { dispatch(c,c->ctr); return; } // 800E337C
}

// fn_800E3380
void f_800E3380(Ctx* __restrict c) {
  trace_call(0x800E3380u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3380
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E3384
  c->ctr=c->r[12]; // 800E3388
  if (true) { dispatch(c,c->ctr); return; } // 800E338C
}

// fn_800E3390
void f_800E3390(Ctx* __restrict c) {
  trace_call(0x800E3390u);
  c->r[3]=0u+0x80410000u; // 800E3390
  c->r[3]=c->r[3]+0xFFFFDEDDu; // 800E3394
  return; // 800E3398
}

// fn_800E339C
void f_800E339C(Ctx* __restrict c) {
  trace_call(0x800E339Cu);
  c->r[3]=0u+0x00000038u; // 800E339C
  return; // 800E33A0
}

// fn_800E33A4
void f_800E33A4(Ctx* __restrict c) {
  trace_call(0x800E33A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E33A4
  c->r[0]=c->lr; // 800E33A8
  c->r[3]=0u+0x00000038u; // 800E33AC
  c->r[4]=c->r[13]+0xFFFFB763u; // 800E33B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E33B4
  c->r[5]=0u+0x00000000u; // 800E33B8
  c->r[6]=0u+0x00001001u; // 800E33BC
  c->lr=0x800E33C4u; f_80244D20(c); // 800E33C0
  cmps(c,0,(int32_t)c->r[3],0); // 800E33C4
  if (crb(c,2)) { goto L_800E33D0; } // 800E33C8
  c->lr=0x800E33D0u; f_800E32BC(c); // 800E33CC
L_800E33D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E33D0
  c->lr=c->r[0]; // 800E33D4
  c->r[1]=c->r[1]+0x00000010u; // 800E33D8
  return; // 800E33DC
}

// fn_800E33E0
void f_800E33E0(Ctx* __restrict c) {
  trace_call(0x800E33E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E33E0
  c->r[0]=c->lr; // 800E33E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E33E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E33EC
  c->r[31]=c->r[3]|c->r[3]; // 800E33F0
  c->lr=0x800E33F8u; f_800D7120(c); // 800E33F4
  c->r[4]=0u+0x80410000u; // 800E33F8
  c->r[3]=0u+0xF9EB0000u; // 800E33FC
  c->r[0]=c->r[3]+0xFFFF980Au; // 800E3400
  W32(c->r[31]+0x00000004u,c->r[0]); // 800E3404
  c->r[4]=c->r[4]+0x000067DCu; // 800E3408
  c->r[3]=c->r[31]|c->r[31]; // 800E340C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800E3410
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3414
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3418
  c->lr=c->r[0]; // 800E341C
  c->r[1]=c->r[1]+0x00000010u; // 800E3420
  return; // 800E3424
}

// fn_800E3428
void f_800E3428(Ctx* __restrict c) {
  trace_call(0x800E3428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3428
  c->r[0]=c->lr; // 800E342C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3430
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800E3434
  c->r[30]=c->r[3]|c->r[3]; // 800E3438
  c->r[31]=c->r[4]|c->r[4]; // 800E343C
  c->lr=0x800E3444u; f_8030D728(c); // 800E3440
  c->r[3]=c->r[31]|c->r[31]; // 800E3444
  c->r[4]=c->r[30]+0x00000030u; // 800E3448
  c->r[5]=0u+0x00000000u; // 800E344C
  c->lr=0x800E3454u; f_8030B7F0(c); // 800E3450
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800E3454
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3458
  c->lr=c->r[0]; // 800E345C
  c->r[1]=c->r[1]+0x00000010u; // 800E3460
  return; // 800E3464
}

// fn_800E3468
void f_800E3468(Ctx* __restrict c) {
  trace_call(0x800E3468u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E3468
  c->r[5]=c->r[3]|c->r[3]; // 800E346C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E3470
  c->r[0]=R32(c->r[3]+0x00000004u); // 800E3474
  c->r[3]=c->r[4]+0x00000030u; // 800E3478
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E347C
  c->r[4]=c->r[5]+0x00000030u; // 800E3480
  f_803A6F10(c); return; // 800E3484
}

// fn_800E3488
void f_800E3488(Ctx* __restrict c) {
  trace_call(0x800E3488u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3488
  c->r[12]=R32(c->r[12]+0x00000010u); // 800E348C
  c->ctr=c->r[12]; // 800E3490
  if (true) { dispatch(c,c->ctr); return; } // 800E3494
}

// fn_800E3498
void f_800E3498(Ctx* __restrict c) {
  trace_call(0x800E3498u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800E3498
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800E349C
  c->ctr=c->r[12]; // 800E34A0
  if (true) { dispatch(c,c->ctr); return; } // 800E34A4
}

// fn_800E34A8
void f_800E34A8(Ctx* __restrict c) {
  trace_call(0x800E34A8u);
  c->r[3]=0u+0x80410000u; // 800E34A8
  c->r[3]=c->r[3]+0xFFFFDEE7u; // 800E34AC
  return; // 800E34B0
}

// fn_800E34B4
void f_800E34B4(Ctx* __restrict c) {
  trace_call(0x800E34B4u);
  c->r[3]=0u+0x00000050u; // 800E34B4
  return; // 800E34B8
}

// fn_800E34BC
void f_800E34BC(Ctx* __restrict c) {
  trace_call(0x800E34BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E34BC
  c->r[0]=c->lr; // 800E34C0
  c->r[3]=0u+0x00000050u; // 800E34C4
  c->r[4]=c->r[13]+0xFFFFB768u; // 800E34C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E34CC
  c->r[5]=0u+0x00000000u; // 800E34D0
  c->r[6]=0u+0x00001001u; // 800E34D4
  c->lr=0x800E34DCu; f_80244D20(c); // 800E34D8
  cmps(c,0,(int32_t)c->r[3],0); // 800E34DC
  if (crb(c,2)) { goto L_800E34E8; } // 800E34E0
  c->lr=0x800E34E8u; f_800E33E0(c); // 800E34E4
L_800E34E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E34E8
  c->lr=c->r[0]; // 800E34EC
  c->r[1]=c->r[1]+0x00000010u; // 800E34F0
  return; // 800E34F4
}

