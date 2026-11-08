#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800FA940
void f_800FA940(Ctx* __restrict c) {
  trace_call(0x800FA940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA940
  c->r[0]=c->lr; // 800FA944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA94C
  c->r[31]=c->r[3]|c->r[3]; // 800FA950
  c->lr=0x800FA958u; f_800D7120(c); // 800FA954
  c->r[4]=0u+0x80410000u; // 800FA958
  c->r[3]=0u+0x33370000u; // 800FA95C
  c->r[0]=c->r[3]+0x0000292Du; // 800FA960
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FA964
  c->r[4]=c->r[4]+0x00003A90u; // 800FA968
  c->r[3]=c->r[31]|c->r[31]; // 800FA96C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800FA970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA974
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA978
  c->lr=c->r[0]; // 800FA97C
  c->r[1]=c->r[1]+0x00000010u; // 800FA980
  return; // 800FA984
}

// fn_800FA988
void f_800FA988(Ctx* __restrict c) {
  trace_call(0x800FA988u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA988
  c->r[0]=c->lr; // 800FA98C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA990
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA994
  c->r[30]=c->r[3]|c->r[3]; // 800FA998
  c->r[31]=c->r[4]|c->r[4]; // 800FA99C
  c->lr=0x800FA9A4u; f_8030D728(c); // 800FA9A0
  c->r[3]=c->r[31]|c->r[31]; // 800FA9A4
  c->r[4]=c->r[30]+0x00000030u; // 800FA9A8
  c->r[5]=0u+0x00000000u; // 800FA9AC
  c->lr=0x800FA9B4u; f_8030B7F0(c); // 800FA9B0
  c->r[3]=c->r[31]|c->r[31]; // 800FA9B4
  c->lr=0x800FA9BCu; f_8030BD1C(c); // 800FA9B8
  W8(c->r[30]+0x00000070u,c->r[3]); // 800FA9BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA9C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA9C4
  c->lr=c->r[0]; // 800FA9C8
  c->r[1]=c->r[1]+0x00000010u; // 800FA9CC
  return; // 800FA9D0
}

// fn_800FA9D4
void f_800FA9D4(Ctx* __restrict c) {
  trace_call(0x800FA9D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA9D4
  c->r[0]=c->lr; // 800FA9D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA9DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA9E0
  c->r[30]=c->r[3]|c->r[3]; // 800FA9E4
  c->r[31]=c->r[4]|c->r[4]; // 800FA9E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA9EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA9F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FA9F4
  c->r[3]=c->r[4]+0x00000030u; // 800FA9F8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA9FC
  c->r[4]=c->r[30]+0x00000030u; // 800FAA00
  c->lr=0x800FAA08u; f_803A6F10(c); // 800FAA04
  c->r[0]=R8(c->r[30]+0x00000070u); // 800FAA08
  W8(c->r[31]+0x00000070u,c->r[0]); // 800FAA0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FAA10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAA14
  c->lr=c->r[0]; // 800FAA18
  c->r[1]=c->r[1]+0x00000010u; // 800FAA1C
  return; // 800FAA20
}

// fn_800FAA24
void f_800FAA24(Ctx* __restrict c) {
  trace_call(0x800FAA24u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAA24
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FAA28
  c->ctr=c->r[12]; // 800FAA2C
  if (true) { dispatch(c,c->ctr); return; } // 800FAA30
}

// fn_800FAA34
void f_800FAA34(Ctx* __restrict c) {
  trace_call(0x800FAA34u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAA34
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FAA38
  c->ctr=c->r[12]; // 800FAA3C
  if (true) { dispatch(c,c->ctr); return; } // 800FAA40
}

// fn_800FAA44
void f_800FAA44(Ctx* __restrict c) {
  trace_call(0x800FAA44u);
  c->r[3]=0u+0x80410000u; // 800FAA44
  c->r[3]=c->r[3]+0xFFFFF011u; // 800FAA48
  return; // 800FAA4C
}

// fn_800FAA50
void f_800FAA50(Ctx* __restrict c) {
  trace_call(0x800FAA50u);
  c->r[3]=0u+0x00000074u; // 800FAA50
  return; // 800FAA54
}

// fn_800FAA58
void f_800FAA58(Ctx* __restrict c) {
  trace_call(0x800FAA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAA58
  c->r[0]=c->lr; // 800FAA5C
  c->r[3]=0u+0x00000074u; // 800FAA60
  c->r[4]=c->r[13]+0xFFFFBC06u; // 800FAA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAA68
  c->r[5]=0u+0x00000000u; // 800FAA6C
  c->r[6]=0u+0x00001001u; // 800FAA70
  c->lr=0x800FAA78u; f_80244D20(c); // 800FAA74
  cmps(c,0,(int32_t)c->r[3],0); // 800FAA78
  if (crb(c,2)) { goto L_800FAA84; } // 800FAA7C
  c->lr=0x800FAA84u; f_800FA940(c); // 800FAA80
L_800FAA84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAA84
  c->lr=c->r[0]; // 800FAA88
  c->r[1]=c->r[1]+0x00000010u; // 800FAA8C
  return; // 800FAA90
}

// fn_800FAA94
void f_800FAA94(Ctx* __restrict c) {
  trace_call(0x800FAA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAA94
  c->r[0]=c->lr; // 800FAA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAA9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FAAA0
  c->r[31]=c->r[3]|c->r[3]; // 800FAAA4
  c->lr=0x800FAAACu; f_800D7120(c); // 800FAAA8
  c->r[4]=0u+0x80410000u; // 800FAAAC
  c->r[3]=0u+0xF9EB0000u; // 800FAAB0
  c->r[0]=c->r[3]+0xFFFF980Au; // 800FAAB4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FAAB8
  c->r[4]=c->r[4]+0x00003A5Cu; // 800FAABC
  c->r[3]=c->r[31]|c->r[31]; // 800FAAC0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800FAAC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAAC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAACC
  c->lr=c->r[0]; // 800FAAD0
  c->r[1]=c->r[1]+0x00000010u; // 800FAAD4
  return; // 800FAAD8
}

// fn_800FAADC
void f_800FAADC(Ctx* __restrict c) {
  trace_call(0x800FAADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAADC
  c->r[0]=c->lr; // 800FAAE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAAE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FAAE8
  c->r[30]=c->r[3]|c->r[3]; // 800FAAEC
  c->r[31]=c->r[4]|c->r[4]; // 800FAAF0
  c->lr=0x800FAAF8u; f_8030D728(c); // 800FAAF4
  c->r[3]=c->r[31]|c->r[31]; // 800FAAF8
  c->r[4]=c->r[30]+0x00000030u; // 800FAAFC
  c->r[5]=0u+0x00000000u; // 800FAB00
  c->lr=0x800FAB08u; f_8030B7F0(c); // 800FAB04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FAB08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAB0C
  c->lr=c->r[0]; // 800FAB10
  c->r[1]=c->r[1]+0x00000010u; // 800FAB14
  return; // 800FAB18
}

// fn_800FAB1C
void f_800FAB1C(Ctx* __restrict c) {
  trace_call(0x800FAB1Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FAB1C
  c->r[5]=c->r[3]|c->r[3]; // 800FAB20
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FAB24
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FAB28
  c->r[3]=c->r[4]+0x00000030u; // 800FAB2C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FAB30
  c->r[4]=c->r[5]+0x00000030u; // 800FAB34
  f_803A6F10(c); return; // 800FAB38
}

// fn_800FAB3C
void f_800FAB3C(Ctx* __restrict c) {
  trace_call(0x800FAB3Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAB3C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FAB40
  c->ctr=c->r[12]; // 800FAB44
  if (true) { dispatch(c,c->ctr); return; } // 800FAB48
}

// fn_800FAB4C
void f_800FAB4C(Ctx* __restrict c) {
  trace_call(0x800FAB4Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAB4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FAB50
  c->ctr=c->r[12]; // 800FAB54
  if (true) { dispatch(c,c->ctr); return; } // 800FAB58
}

// fn_800FAB5C
void f_800FAB5C(Ctx* __restrict c) {
  trace_call(0x800FAB5Cu);
  c->r[3]=0u+0x80410000u; // 800FAB5C
  c->r[3]=c->r[3]+0xFFFFF024u; // 800FAB60
  return; // 800FAB64
}

// fn_800FAB68
void f_800FAB68(Ctx* __restrict c) {
  trace_call(0x800FAB68u);
  c->r[3]=0u+0x00000050u; // 800FAB68
  return; // 800FAB6C
}

// fn_800FAB70
void f_800FAB70(Ctx* __restrict c) {
  trace_call(0x800FAB70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAB70
  c->r[0]=c->lr; // 800FAB74
  c->r[3]=0u+0x00000050u; // 800FAB78
  c->r[4]=c->r[13]+0xFFFFBC0Bu; // 800FAB7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAB80
  c->r[5]=0u+0x00000000u; // 800FAB84
  c->r[6]=0u+0x00001001u; // 800FAB88
  c->lr=0x800FAB90u; f_80244D20(c); // 800FAB8C
  cmps(c,0,(int32_t)c->r[3],0); // 800FAB90
  if (crb(c,2)) { goto L_800FAB9C; } // 800FAB94
  c->lr=0x800FAB9Cu; f_800FAA94(c); // 800FAB98
L_800FAB9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAB9C
  c->lr=c->r[0]; // 800FABA0
  c->r[1]=c->r[1]+0x00000010u; // 800FABA4
  return; // 800FABA8
}

// fn_800FABAC
void f_800FABAC(Ctx* __restrict c) {
  trace_call(0x800FABACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FABAC
  c->r[0]=c->lr; // 800FABB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FABB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FABB8
  c->r[31]=c->r[3]|c->r[3]; // 800FABBC
  c->lr=0x800FABC4u; f_800D7120(c); // 800FABC0
  c->r[4]=0u+0x80410000u; // 800FABC4
  c->r[3]=0u+0xF9EB0000u; // 800FABC8
  c->r[0]=c->r[3]+0xFFFF980Au; // 800FABCC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FABD0
  c->r[4]=c->r[4]+0x00003A28u; // 800FABD4
  c->r[3]=c->r[31]|c->r[31]; // 800FABD8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800FABDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FABE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FABE4
  c->lr=c->r[0]; // 800FABE8
  c->r[1]=c->r[1]+0x00000010u; // 800FABEC
  return; // 800FABF0
}

// fn_800FABF4
void f_800FABF4(Ctx* __restrict c) {
  trace_call(0x800FABF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FABF4
  c->r[0]=c->lr; // 800FABF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FABFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FAC00
  c->r[30]=c->r[3]|c->r[3]; // 800FAC04
  c->r[31]=c->r[4]|c->r[4]; // 800FAC08
  c->lr=0x800FAC10u; f_8030D728(c); // 800FAC0C
  c->r[3]=c->r[31]|c->r[31]; // 800FAC10
  c->r[4]=c->r[30]+0x00000030u; // 800FAC14
  c->r[5]=0u+0x00000000u; // 800FAC18
  c->lr=0x800FAC20u; f_8030B7F0(c); // 800FAC1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FAC20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAC24
  c->lr=c->r[0]; // 800FAC28
  c->r[1]=c->r[1]+0x00000010u; // 800FAC2C
  return; // 800FAC30
}

// fn_800FAC34
void f_800FAC34(Ctx* __restrict c) {
  trace_call(0x800FAC34u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FAC34
  c->r[5]=c->r[3]|c->r[3]; // 800FAC38
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FAC3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FAC40
  c->r[3]=c->r[4]+0x00000030u; // 800FAC44
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FAC48
  c->r[4]=c->r[5]+0x00000030u; // 800FAC4C
  f_803A6F10(c); return; // 800FAC50
}

// fn_800FAC54
void f_800FAC54(Ctx* __restrict c) {
  trace_call(0x800FAC54u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAC54
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FAC58
  c->ctr=c->r[12]; // 800FAC5C
  if (true) { dispatch(c,c->ctr); return; } // 800FAC60
}

// fn_800FAC64
void f_800FAC64(Ctx* __restrict c) {
  trace_call(0x800FAC64u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAC64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FAC68
  c->ctr=c->r[12]; // 800FAC6C
  if (true) { dispatch(c,c->ctr); return; } // 800FAC70
}

// fn_800FAC74
void f_800FAC74(Ctx* __restrict c) {
  trace_call(0x800FAC74u);
  c->r[3]=0u+0x80410000u; // 800FAC74
  c->r[3]=c->r[3]+0xFFFFF03Au; // 800FAC78
  return; // 800FAC7C
}

// fn_800FAC80
void f_800FAC80(Ctx* __restrict c) {
  trace_call(0x800FAC80u);
  c->r[3]=0u+0x00000050u; // 800FAC80
  return; // 800FAC84
}

// fn_800FAC88
void f_800FAC88(Ctx* __restrict c) {
  trace_call(0x800FAC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAC88
  c->r[0]=c->lr; // 800FAC8C
  c->r[3]=0u+0x00000050u; // 800FAC90
  c->r[4]=c->r[13]+0xFFFFBC10u; // 800FAC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAC98
  c->r[5]=0u+0x00000000u; // 800FAC9C
  c->r[6]=0u+0x00001001u; // 800FACA0
  c->lr=0x800FACA8u; f_80244D20(c); // 800FACA4
  cmps(c,0,(int32_t)c->r[3],0); // 800FACA8
  if (crb(c,2)) { goto L_800FACB4; } // 800FACAC
  c->lr=0x800FACB4u; f_800FABAC(c); // 800FACB0
L_800FACB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FACB4
  c->lr=c->r[0]; // 800FACB8
  c->r[1]=c->r[1]+0x00000010u; // 800FACBC
  return; // 800FACC0
}

// fn_800FACC4
void f_800FACC4(Ctx* __restrict c) {
  trace_call(0x800FACC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FACC4
  c->r[0]=c->lr; // 800FACC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FACCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FACD0
  c->r[31]=c->r[3]|c->r[3]; // 800FACD4
  c->lr=0x800FACDCu; f_800D7120(c); // 800FACD8
  c->r[4]=0u+0x80410000u; // 800FACDC
  c->r[3]=0u+0xB84A0000u; // 800FACE0
  c->r[0]=c->r[3]+0xFFFFA644u; // 800FACE4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FACE8
  c->r[4]=c->r[4]+0x000039F4u; // 800FACEC
  c->r[3]=c->r[31]|c->r[31]; // 800FACF0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800FACF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FACF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FACFC
  c->lr=c->r[0]; // 800FAD00
  c->r[1]=c->r[1]+0x00000010u; // 800FAD04
  return; // 800FAD08
}

// fn_800FAD0C
void f_800FAD0C(Ctx* __restrict c) {
  trace_call(0x800FAD0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAD0C
  c->r[0]=c->lr; // 800FAD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAD14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FAD18
  c->r[30]=c->r[3]|c->r[3]; // 800FAD1C
  c->r[31]=c->r[4]|c->r[4]; // 800FAD20
  c->lr=0x800FAD28u; f_8030D728(c); // 800FAD24
  c->r[3]=c->r[31]|c->r[31]; // 800FAD28
  c->r[4]=c->r[30]+0x00000030u; // 800FAD2C
  c->r[5]=0u+0x00000000u; // 800FAD30
  c->lr=0x800FAD38u; f_8030B7F0(c); // 800FAD34
  c->r[3]=c->r[31]|c->r[31]; // 800FAD38
  c->r[4]=c->r[30]+0x00000070u; // 800FAD3C
  c->r[5]=0u+0x00000000u; // 800FAD40
  c->lr=0x800FAD48u; f_8030B7F0(c); // 800FAD44
  c->r[3]=c->r[31]|c->r[31]; // 800FAD48
  c->r[4]=c->r[30]+0x00000090u; // 800FAD4C
  c->r[5]=0u+0x00000000u; // 800FAD50
  c->lr=0x800FAD58u; f_8030B7F0(c); // 800FAD54
  c->r[3]=c->r[31]|c->r[31]; // 800FAD58
  c->lr=0x800FAD60u; f_8030BD1C(c); // 800FAD5C
  W8(c->r[30]+0x00000190u,c->r[3]); // 800FAD60
  c->r[3]=c->r[31]|c->r[31]; // 800FAD64
  c->lr=0x800FAD6Cu; f_8030BD1C(c); // 800FAD68
  W8(c->r[30]+0x00000191u,c->r[3]); // 800FAD6C
  c->r[3]=c->r[31]|c->r[31]; // 800FAD70
  c->lr=0x800FAD78u; f_8030BD1C(c); // 800FAD74
  W8(c->r[30]+0x00000192u,c->r[3]); // 800FAD78
  c->r[3]=c->r[31]|c->r[31]; // 800FAD7C
  c->lr=0x800FAD84u; f_8030C0A0(c); // 800FAD80
  {uint32_t ea=c->r[30]+0x00000194u; WF32(ea,c->f[1]);} // 800FAD84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FAD88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAD8C
  c->lr=c->r[0]; // 800FAD90
  c->r[1]=c->r[1]+0x00000010u; // 800FAD94
  return; // 800FAD98
}

// fn_800FAD9C
void f_800FAD9C(Ctx* __restrict c) {
  trace_call(0x800FAD9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAD9C
  c->r[0]=c->lr; // 800FADA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FADA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FADA8
  c->r[31]=c->r[4]|c->r[4]; // 800FADAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FADB0
  c->r[30]=c->r[3]|c->r[3]; // 800FADB4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FADB8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FADBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FADC0
  c->r[3]=c->r[4]+0x00000030u; // 800FADC4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FADC8
  c->r[4]=c->r[30]+0x00000030u; // 800FADCC
  c->lr=0x800FADD4u; f_803A6F10(c); // 800FADD0
  c->r[3]=c->r[31]+0x00000070u; // 800FADD4
  c->r[4]=c->r[30]+0x00000070u; // 800FADD8
  c->lr=0x800FADE0u; f_803A6F10(c); // 800FADDC
  c->r[3]=c->r[31]+0x00000090u; // 800FADE0
  c->r[4]=c->r[30]+0x00000090u; // 800FADE4
  c->lr=0x800FADECu; f_803A6F10(c); // 800FADE8
  c->r[0]=R8(c->r[30]+0x00000190u); // 800FADEC
  W8(c->r[31]+0x00000190u,c->r[0]); // 800FADF0
  c->r[0]=R8(c->r[30]+0x00000191u); // 800FADF4
  W8(c->r[31]+0x00000191u,c->r[0]); // 800FADF8
  c->r[0]=R8(c->r[30]+0x00000192u); // 800FADFC
  W8(c->r[31]+0x00000192u,c->r[0]); // 800FAE00
  {uint32_t ea=c->r[30]+0x00000194u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FAE04
  {uint32_t ea=c->r[31]+0x00000194u; WF32(ea,c->f[0]);} // 800FAE08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAE0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FAE10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAE14
  c->lr=c->r[0]; // 800FAE18
  c->r[1]=c->r[1]+0x00000010u; // 800FAE1C
  return; // 800FAE20
}

// fn_800FAE24
void f_800FAE24(Ctx* __restrict c) {
  trace_call(0x800FAE24u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAE24
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FAE28
  c->ctr=c->r[12]; // 800FAE2C
  if (true) { dispatch(c,c->ctr); return; } // 800FAE30
}

// fn_800FAE34
void f_800FAE34(Ctx* __restrict c) {
  trace_call(0x800FAE34u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAE34
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FAE38
  c->ctr=c->r[12]; // 800FAE3C
  if (true) { dispatch(c,c->ctr); return; } // 800FAE40
}

// fn_800FAE44
void f_800FAE44(Ctx* __restrict c) {
  trace_call(0x800FAE44u);
  c->r[3]=0u+0x80410000u; // 800FAE44
  c->r[3]=c->r[3]+0xFFFFF051u; // 800FAE48
  return; // 800FAE4C
}

// fn_800FAE50
void f_800FAE50(Ctx* __restrict c) {
  trace_call(0x800FAE50u);
  c->r[3]=0u+0x00000198u; // 800FAE50
  return; // 800FAE54
}

// fn_800FAE58
void f_800FAE58(Ctx* __restrict c) {
  trace_call(0x800FAE58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAE58
  c->r[0]=c->lr; // 800FAE5C
  c->r[3]=0u+0x00000198u; // 800FAE60
  c->r[4]=c->r[13]+0xFFFFBC15u; // 800FAE64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAE68
  c->r[5]=0u+0x00000000u; // 800FAE6C
  c->r[6]=0u+0x00001001u; // 800FAE70
  c->lr=0x800FAE78u; f_80244D20(c); // 800FAE74
  cmps(c,0,(int32_t)c->r[3],0); // 800FAE78
  if (crb(c,2)) { goto L_800FAE84; } // 800FAE7C
  c->lr=0x800FAE84u; f_800FACC4(c); // 800FAE80
L_800FAE84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAE84
  c->lr=c->r[0]; // 800FAE88
  c->r[1]=c->r[1]+0x00000010u; // 800FAE8C
  return; // 800FAE90
}

// fn_800FAE94
void f_800FAE94(Ctx* __restrict c) {
  trace_call(0x800FAE94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAE94
  c->r[0]=c->lr; // 800FAE98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAE9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FAEA0
  c->r[31]=c->r[3]|c->r[3]; // 800FAEA4
  c->lr=0x800FAEACu; f_800D7120(c); // 800FAEA8
  c->r[4]=0u+0x80410000u; // 800FAEAC
  c->r[3]=0u+0x76C80000u; // 800FAEB0
  c->r[0]=c->r[3]+0xFFFF99FEu; // 800FAEB4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FAEB8
  c->r[4]=c->r[4]+0x000039C0u; // 800FAEBC
  c->r[3]=c->r[31]|c->r[31]; // 800FAEC0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800FAEC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FAEC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAECC
  c->lr=c->r[0]; // 800FAED0
  c->r[1]=c->r[1]+0x00000010u; // 800FAED4
  return; // 800FAED8
}

// fn_800FAEDC
void f_800FAEDC(Ctx* __restrict c) {
  trace_call(0x800FAEDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAEDC
  c->r[0]=c->lr; // 800FAEE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAEE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FAEE8
  c->r[30]=c->r[3]|c->r[3]; // 800FAEEC
  c->r[31]=c->r[4]|c->r[4]; // 800FAEF0
  c->lr=0x800FAEF8u; f_8030D728(c); // 800FAEF4
  c->r[3]=c->r[31]|c->r[31]; // 800FAEF8
  c->r[4]=c->r[30]+0x00000030u; // 800FAEFC
  c->r[5]=0u+0x00000000u; // 800FAF00
  c->lr=0x800FAF08u; f_8030B7F0(c); // 800FAF04
  c->r[3]=c->r[31]|c->r[31]; // 800FAF08
  c->r[4]=c->r[30]+0x00000070u; // 800FAF0C
  c->r[5]=0u+0x00000000u; // 800FAF10
  c->lr=0x800FAF18u; f_8030B7F0(c); // 800FAF14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FAF18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAF1C
  c->lr=c->r[0]; // 800FAF20
  c->r[1]=c->r[1]+0x00000010u; // 800FAF24
  return; // 800FAF28
}

// fn_800FAF2C
void f_800FAF2C(Ctx* __restrict c) {
  trace_call(0x800FAF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAF2C
  c->r[0]=c->lr; // 800FAF30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAF34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FAF38
  c->r[30]=c->r[3]|c->r[3]; // 800FAF3C
  c->r[31]=c->r[4]|c->r[4]; // 800FAF40
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FAF44
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FAF48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FAF4C
  c->r[3]=c->r[4]+0x00000030u; // 800FAF50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FAF54
  c->r[4]=c->r[30]+0x00000030u; // 800FAF58
  c->lr=0x800FAF60u; f_803A6F10(c); // 800FAF5C
  c->r[3]=c->r[31]+0x00000070u; // 800FAF60
  c->r[4]=c->r[30]+0x00000070u; // 800FAF64
  c->lr=0x800FAF6Cu; f_803A6F10(c); // 800FAF68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FAF6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAF70
  c->lr=c->r[0]; // 800FAF74
  c->r[1]=c->r[1]+0x00000010u; // 800FAF78
  return; // 800FAF7C
}

// fn_800FAF80
void f_800FAF80(Ctx* __restrict c) {
  trace_call(0x800FAF80u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAF80
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FAF84
  c->ctr=c->r[12]; // 800FAF88
  if (true) { dispatch(c,c->ctr); return; } // 800FAF8C
}

// fn_800FAF90
void f_800FAF90(Ctx* __restrict c) {
  trace_call(0x800FAF90u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FAF90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FAF94
  c->ctr=c->r[12]; // 800FAF98
  if (true) { dispatch(c,c->ctr); return; } // 800FAF9C
}

// fn_800FAFA0
void f_800FAFA0(Ctx* __restrict c) {
  trace_call(0x800FAFA0u);
  c->r[3]=0u+0x80410000u; // 800FAFA0
  c->r[3]=c->r[3]+0xFFFFF064u; // 800FAFA4
  return; // 800FAFA8
}

// fn_800FAFAC
void f_800FAFAC(Ctx* __restrict c) {
  trace_call(0x800FAFACu);
  c->r[3]=0u+0x00000090u; // 800FAFAC
  return; // 800FAFB0
}

// fn_800FAFB4
void f_800FAFB4(Ctx* __restrict c) {
  trace_call(0x800FAFB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAFB4
  c->r[0]=c->lr; // 800FAFB8
  c->r[3]=0u+0x00000090u; // 800FAFBC
  c->r[4]=c->r[13]+0xFFFFBC1Au; // 800FAFC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAFC4
  c->r[5]=0u+0x00000000u; // 800FAFC8
  c->r[6]=0u+0x00001001u; // 800FAFCC
  c->lr=0x800FAFD4u; f_80244D20(c); // 800FAFD0
  cmps(c,0,(int32_t)c->r[3],0); // 800FAFD4
  if (crb(c,2)) { goto L_800FAFE0; } // 800FAFD8
  c->lr=0x800FAFE0u; f_800FAE94(c); // 800FAFDC
L_800FAFE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAFE0
  c->lr=c->r[0]; // 800FAFE4
  c->r[1]=c->r[1]+0x00000010u; // 800FAFE8
  return; // 800FAFEC
}

// fn_800FAFF0
void f_800FAFF0(Ctx* __restrict c) {
  trace_call(0x800FAFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAFF0
  c->r[0]=c->lr; // 800FAFF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FAFF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FAFFC
  c->r[31]=c->r[3]|c->r[3]; // 800FB000
  c->lr=0x800FB008u; f_800D7120(c); // 800FB004
  c->r[5]=0u+0x80410000u; // 800FB008
  c->r[3]=0u+0x59710000u; // 800FB00C
  c->r[0]=c->r[3]+0x000047B2u; // 800FB010
  c->r[4]=0u+0x00000000u; // 800FB014
  c->r[5]=c->r[5]+0x0000398Cu; // 800FB018
  W32(c->r[31]+0x00000008u,c->r[5]); // 800FB01C
  c->r[3]=c->r[31]|c->r[31]; // 800FB020
  W32(c->r[31]+0x00000038u,c->r[4]); // 800FB024
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FB028
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB02C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB030
  c->lr=c->r[0]; // 800FB034
  c->r[1]=c->r[1]+0x00000010u; // 800FB038
  return; // 800FB03C
}

// fn_800FB040
void f_800FB040(Ctx* __restrict c) {
  trace_call(0x800FB040u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB040
  c->r[0]=c->lr; // 800FB044
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB048
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB04C
  c->r[30]=c->r[3]|c->r[3]; // 800FB050
  c->r[31]=c->r[4]|c->r[4]; // 800FB054
  c->lr=0x800FB05Cu; f_8030D728(c); // 800FB058
  c->r[3]=c->r[31]|c->r[31]; // 800FB05C
  c->r[4]=0u+0x00000000u; // 800FB060
  c->lr=0x800FB068u; f_8030BE30(c); // 800FB064
  W32(c->r[30]+0x00000030u,c->r[3]); // 800FB068
  c->r[3]=c->r[31]|c->r[31]; // 800FB06C
  c->lr=0x800FB074u; f_8030BD1C(c); // 800FB070
  W32(c->r[30]+0x00000034u,c->r[3]); // 800FB074
  c->r[3]=c->r[31]|c->r[31]; // 800FB078
  c->lr=0x800FB080u; f_8030BD1C(c); // 800FB07C
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800FB080
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB084
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB088
  c->lr=c->r[0]; // 800FB08C
  c->r[1]=c->r[1]+0x00000010u; // 800FB090
  return; // 800FB094
}

// fn_800FB098
void f_800FB098(Ctx* __restrict c) {
  trace_call(0x800FB098u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB098
  c->r[0]=c->lr; // 800FB09C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB0A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB0A4
  c->r[30]=c->r[3]|c->r[3]; // 800FB0A8
  c->r[31]=c->r[4]|c->r[4]; // 800FB0AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FB0B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FB0B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FB0B8
  c->r[3]=c->r[4]+0x00000030u; // 800FB0BC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FB0C0
  c->r[4]=c->r[30]+0x00000030u; // 800FB0C4
  c->lr=0x800FB0CCu; f_8003AB48(c); // 800FB0C8
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800FB0CC
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800FB0D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB0D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB0D8
  c->lr=c->r[0]; // 800FB0DC
  c->r[1]=c->r[1]+0x00000010u; // 800FB0E0
  return; // 800FB0E4
}

// fn_800FB0E8
void f_800FB0E8(Ctx* __restrict c) {
  trace_call(0x800FB0E8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FB0E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FB0EC
  c->ctr=c->r[12]; // 800FB0F0
  if (true) { dispatch(c,c->ctr); return; } // 800FB0F4
}

// fn_800FB0F8
void f_800FB0F8(Ctx* __restrict c) {
  trace_call(0x800FB0F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB0F8
  c->r[0]=c->lr; // 800FB0FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB100
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB104
  c->r[29]=c->r[3]|c->r[3]; // 800FB108
  c->r[30]=c->r[4]|c->r[4]; // 800FB10C
  c->r[31]=c->r[5]|c->r[5]; // 800FB110
  c->r[0]=R32(c->r[3]+0x00000034u); // 800FB114
  cmps(c,0,(int32_t)c->r[0],7); // 800FB118
  if (!crb(c,0)) { goto L_800FB12C; } // 800FB11C
  c->r[4]=c->r[31]|c->r[31]; // 800FB120
  c->r[3]=c->r[3]+0x00000030u; // 800FB124
  c->lr=0x800FB12Cu; f_8003A994(c); // 800FB128
L_800FB12C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800FB12C
  c->r[3]=c->r[29]|c->r[29]; // 800FB130
  c->r[4]=c->r[30]|c->r[30]; // 800FB134
  c->r[5]=c->r[31]|c->r[31]; // 800FB138
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FB13C
  c->ctr=c->r[12]; // 800FB140
  if (true) { c->lr=0x800FB148u; dispatch(c,c->ctr); } // 800FB144
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB148
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB14C
  c->lr=c->r[0]; // 800FB150
  c->r[1]=c->r[1]+0x00000020u; // 800FB154
  return; // 800FB158
}

// fn_800FB15C
void f_800FB15C(Ctx* __restrict c) {
  trace_call(0x800FB15Cu);
  c->r[3]=0u+0x80410000u; // 800FB15C
  c->r[3]=c->r[3]+0xFFFFF076u; // 800FB160
  return; // 800FB164
}

// fn_800FB168
void f_800FB168(Ctx* __restrict c) {
  trace_call(0x800FB168u);
  c->r[3]=0u+0x00000040u; // 800FB168
  return; // 800FB16C
}

// fn_800FB170
void f_800FB170(Ctx* __restrict c) {
  trace_call(0x800FB170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB170
  c->r[0]=c->lr; // 800FB174
  c->r[3]=0u+0x00000040u; // 800FB178
  c->r[4]=c->r[13]+0xFFFFBC1Fu; // 800FB17C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB180
  c->r[5]=0u+0x00000000u; // 800FB184
  c->r[6]=0u+0x00001001u; // 800FB188
  c->lr=0x800FB190u; f_80244D20(c); // 800FB18C
  cmps(c,0,(int32_t)c->r[3],0); // 800FB190
  if (crb(c,2)) { goto L_800FB19C; } // 800FB194
  c->lr=0x800FB19Cu; f_800FAFF0(c); // 800FB198
L_800FB19C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB19C
  c->lr=c->r[0]; // 800FB1A0
  c->r[1]=c->r[1]+0x00000010u; // 800FB1A4
  return; // 800FB1A8
}

// fn_800FB1AC
void f_800FB1AC(Ctx* __restrict c) {
  trace_call(0x800FB1ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB1AC
  c->r[0]=c->lr; // 800FB1B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB1B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB1B8
  c->r[31]=c->r[3]|c->r[3]; // 800FB1BC
  c->lr=0x800FB1C4u; f_800D7120(c); // 800FB1C0
  c->r[5]=0u+0x80410000u; // 800FB1C4
  c->r[3]=0u+0x59710000u; // 800FB1C8
  c->r[0]=c->r[3]+0x000047B2u; // 800FB1CC
  c->r[4]=0u+0x00000000u; // 800FB1D0
  c->r[5]=c->r[5]+0x00003958u; // 800FB1D4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800FB1D8
  c->r[3]=c->r[31]|c->r[31]; // 800FB1DC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800FB1E0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FB1E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB1E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB1EC
  c->lr=c->r[0]; // 800FB1F0
  c->r[1]=c->r[1]+0x00000010u; // 800FB1F4
  return; // 800FB1F8
}

// fn_800FB1FC
void f_800FB1FC(Ctx* __restrict c) {
  trace_call(0x800FB1FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB1FC
  c->r[0]=c->lr; // 800FB200
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB204
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB208
  c->r[30]=c->r[3]|c->r[3]; // 800FB20C
  c->r[31]=c->r[4]|c->r[4]; // 800FB210
  c->lr=0x800FB218u; f_8030D728(c); // 800FB214
  c->r[3]=c->r[31]|c->r[31]; // 800FB218
  c->r[4]=0u+0x00000000u; // 800FB21C
  c->lr=0x800FB224u; f_8030BE30(c); // 800FB220
  W32(c->r[30]+0x00000030u,c->r[3]); // 800FB224
  c->r[3]=c->r[31]|c->r[31]; // 800FB228
  c->lr=0x800FB230u; f_8030BD1C(c); // 800FB22C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800FB230
  c->r[3]=c->r[31]|c->r[31]; // 800FB234
  c->lr=0x800FB23Cu; f_8030BD1C(c); // 800FB238
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800FB23C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB240
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB244
  c->lr=c->r[0]; // 800FB248
  c->r[1]=c->r[1]+0x00000010u; // 800FB24C
  return; // 800FB250
}

// fn_800FB254
void f_800FB254(Ctx* __restrict c) {
  trace_call(0x800FB254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB254
  c->r[0]=c->lr; // 800FB258
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB25C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB260
  c->r[30]=c->r[3]|c->r[3]; // 800FB264
  c->r[31]=c->r[4]|c->r[4]; // 800FB268
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FB26C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FB270
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FB274
  c->r[3]=c->r[4]+0x00000030u; // 800FB278
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FB27C
  c->r[4]=c->r[30]+0x00000030u; // 800FB280
  c->lr=0x800FB288u; f_8003AB48(c); // 800FB284
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800FB288
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800FB28C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB290
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB294
  c->lr=c->r[0]; // 800FB298
  c->r[1]=c->r[1]+0x00000010u; // 800FB29C
  return; // 800FB2A0
}

// fn_800FB2A4
void f_800FB2A4(Ctx* __restrict c) {
  trace_call(0x800FB2A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FB2A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FB2A8
  c->ctr=c->r[12]; // 800FB2AC
  if (true) { dispatch(c,c->ctr); return; } // 800FB2B0
}

// fn_800FB2B4
void f_800FB2B4(Ctx* __restrict c) {
  trace_call(0x800FB2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB2B4
  c->r[0]=c->lr; // 800FB2B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB2BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB2C0
  c->r[29]=c->r[3]|c->r[3]; // 800FB2C4
  c->r[30]=c->r[4]|c->r[4]; // 800FB2C8
  c->r[31]=c->r[5]|c->r[5]; // 800FB2CC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800FB2D0
  cmps(c,0,(int32_t)c->r[0],7); // 800FB2D4
  if (!crb(c,0)) { goto L_800FB2E8; } // 800FB2D8
  c->r[4]=c->r[31]|c->r[31]; // 800FB2DC
  c->r[3]=c->r[3]+0x00000030u; // 800FB2E0
  c->lr=0x800FB2E8u; f_8003A994(c); // 800FB2E4
L_800FB2E8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800FB2E8
  c->r[3]=c->r[29]|c->r[29]; // 800FB2EC
  c->r[4]=c->r[30]|c->r[30]; // 800FB2F0
  c->r[5]=c->r[31]|c->r[31]; // 800FB2F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FB2F8
  c->ctr=c->r[12]; // 800FB2FC
  if (true) { c->lr=0x800FB304u; dispatch(c,c->ctr); } // 800FB300
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB304
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB308
  c->lr=c->r[0]; // 800FB30C
  c->r[1]=c->r[1]+0x00000020u; // 800FB310
  return; // 800FB314
}

// fn_800FB318
void f_800FB318(Ctx* __restrict c) {
  trace_call(0x800FB318u);
  c->r[3]=0u+0x80410000u; // 800FB318
  c->r[3]=c->r[3]+0xFFFFF087u; // 800FB31C
  return; // 800FB320
}

// fn_800FB324
void f_800FB324(Ctx* __restrict c) {
  trace_call(0x800FB324u);
  c->r[3]=0u+0x00000040u; // 800FB324
  return; // 800FB328
}

// fn_800FB32C
void f_800FB32C(Ctx* __restrict c) {
  trace_call(0x800FB32Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB32C
  c->r[0]=c->lr; // 800FB330
  c->r[3]=0u+0x00000040u; // 800FB334
  c->r[4]=c->r[13]+0xFFFFBC24u; // 800FB338
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB33C
  c->r[5]=0u+0x00000000u; // 800FB340
  c->r[6]=0u+0x00001001u; // 800FB344
  c->lr=0x800FB34Cu; f_80244D20(c); // 800FB348
  cmps(c,0,(int32_t)c->r[3],0); // 800FB34C
  if (crb(c,2)) { goto L_800FB358; } // 800FB350
  c->lr=0x800FB358u; f_800FB1AC(c); // 800FB354
L_800FB358:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB358
  c->lr=c->r[0]; // 800FB35C
  c->r[1]=c->r[1]+0x00000010u; // 800FB360
  return; // 800FB364
}

// fn_800FB368
void f_800FB368(Ctx* __restrict c) {
  trace_call(0x800FB368u);
  return; // 800FB368
}

// fn_800FB36C
void f_800FB36C(Ctx* __restrict c) {
  trace_call(0x800FB36Cu);
  return; // 800FB36C
}

// fn_800FB370
void f_800FB370(Ctx* __restrict c) {
  trace_call(0x800FB370u);
  c->r[3]=0u+0x00000000u; // 800FB370
  return; // 800FB374
}

// fn_800FB378
void f_800FB378(Ctx* __restrict c) {
  trace_call(0x800FB378u);
  return; // 800FB378
}

// fn_800FB37C
void f_800FB37C(Ctx* __restrict c) {
  trace_call(0x800FB37Cu);
  return; // 800FB37C
}

// fn_800FB380
void f_800FB380(Ctx* __restrict c) {
  trace_call(0x800FB380u);
  c->r[3]=0u+0xA46C0000u; // 800FB380
  c->r[3]=c->r[3]+0xFFFFC590u; // 800FB384
  return; // 800FB388
}

// fn_800FB38C
void f_800FB38C(Ctx* __restrict c) {
  trace_call(0x800FB38Cu);
  c->r[3]=0u+0x00000000u; // 800FB38C
  return; // 800FB390
}

// fn_800FB394
void f_800FB394(Ctx* __restrict c) {
  trace_call(0x800FB394u);
  c->r[3]=0u+0x00000000u; // 800FB394
  return; // 800FB398
}

// fn_800FB39C
void f_800FB39C(Ctx* __restrict c) {
  trace_call(0x800FB39Cu);
  return; // 800FB39C
}

// fn_800FB3A0
void f_800FB3A0(Ctx* __restrict c) {
  trace_call(0x800FB3A0u);
  c->r[3]=0u+0x00000000u; // 800FB3A0
  return; // 800FB3A4
}

// fn_800FB3A8
void f_800FB3A8(Ctx* __restrict c) {
  trace_call(0x800FB3A8u);
  c->r[3]=0u+0x00000030u; // 800FB3A8
  return; // 800FB3AC
}

// fn_800FB3B0
void f_800FB3B0(Ctx* __restrict c) {
  trace_call(0x800FB3B0u);
  c->r[3]=0u+0x80420000u; // 800FB3B0
  c->r[3]=c->r[3]+0x00001C8Fu; // 800FB3B4
  return; // 800FB3B8
}

// fn_800FB3BC
void f_800FB3BC(Ctx* __restrict c) {
  trace_call(0x800FB3BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB3BC
  c->r[0]=c->lr; // 800FB3C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FB3C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB3C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB3CC
  c->r[30]=c->r[3]|c->r[3]; // 800FB3D0
  c->r[31]=c->r[4]|c->r[4]; // 800FB3D4
  if (crb(c,2)) { goto L_800FB3F8; } // 800FB3D8
  if (crb(c,2)) { goto L_800FB3E8; } // 800FB3DC
  c->r[4]=0u+0x00000000u; // 800FB3E0
  c->lr=0x800FB3E8u; f_802B1180(c); // 800FB3E4
L_800FB3E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB3E8
  if (!crb(c,1)) { goto L_800FB3F8; } // 800FB3EC
  c->r[3]=c->r[30]|c->r[30]; // 800FB3F0
  c->lr=0x800FB3F8u; f_80244DC0(c); // 800FB3F4
L_800FB3F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB3F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB3FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB400
  c->lr=c->r[0]; // 800FB404
  c->r[1]=c->r[1]+0x00000010u; // 800FB408
  return; // 800FB40C
}

// fn_800FB410
void f_800FB410(Ctx* __restrict c) {
  trace_call(0x800FB410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB410
  c->r[0]=c->lr; // 800FB414
  cmps(c,0,(int32_t)c->r[3],0); // 800FB418
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB41C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB420
  c->r[30]=c->r[3]|c->r[3]; // 800FB424
  c->r[31]=c->r[4]|c->r[4]; // 800FB428
  if (crb(c,2)) { goto L_800FB448; } // 800FB42C
  c->r[4]=0u+0x00000000u; // 800FB430
  c->lr=0x800FB438u; f_80039320(c); // 800FB434
  cmps(c,0,(int32_t)c->r[31],0); // 800FB438
  if (!crb(c,1)) { goto L_800FB448; } // 800FB43C
  c->r[3]=c->r[30]|c->r[30]; // 800FB440
  c->lr=0x800FB448u; f_80244DC0(c); // 800FB444
L_800FB448:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB448
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB44C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB450
  c->lr=c->r[0]; // 800FB454
  c->r[1]=c->r[1]+0x00000010u; // 800FB458
  return; // 800FB45C
}

// fn_800FB460
void f_800FB460(Ctx* __restrict c) {
  trace_call(0x800FB460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB460
  c->r[0]=c->lr; // 800FB464
  cmps(c,0,(int32_t)c->r[3],0); // 800FB468
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB46C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB470
  c->r[30]=c->r[3]|c->r[3]; // 800FB474
  c->r[31]=c->r[4]|c->r[4]; // 800FB478
  if (crb(c,2)) { goto L_800FB49C; } // 800FB47C
  if (crb(c,2)) { goto L_800FB48C; } // 800FB480
  c->r[4]=0u+0x00000000u; // 800FB484
  c->lr=0x800FB48Cu; f_80039320(c); // 800FB488
L_800FB48C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB48C
  if (!crb(c,1)) { goto L_800FB49C; } // 800FB490
  c->r[3]=c->r[30]|c->r[30]; // 800FB494
  c->lr=0x800FB49Cu; f_80244DC0(c); // 800FB498
L_800FB49C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB49C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB4A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB4A4
  c->lr=c->r[0]; // 800FB4A8
  c->r[1]=c->r[1]+0x00000010u; // 800FB4AC
  return; // 800FB4B0
}

// fn_800FB4B4
void f_800FB4B4(Ctx* __restrict c) {
  trace_call(0x800FB4B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB4B4
  c->r[0]=c->lr; // 800FB4B8
  cmps(c,0,(int32_t)c->r[3],0); // 800FB4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB4C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB4C4
  c->r[30]=c->r[3]|c->r[3]; // 800FB4C8
  c->r[31]=c->r[4]|c->r[4]; // 800FB4CC
  if (crb(c,2)) { goto L_800FB4F0; } // 800FB4D0
  if (crb(c,2)) { goto L_800FB4E0; } // 800FB4D4
  c->r[4]=0u+0x00000000u; // 800FB4D8
  c->lr=0x800FB4E0u; f_80039320(c); // 800FB4DC
L_800FB4E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB4E0
  if (!crb(c,1)) { goto L_800FB4F0; } // 800FB4E4
  c->r[3]=c->r[30]|c->r[30]; // 800FB4E8
  c->lr=0x800FB4F0u; f_80244DC0(c); // 800FB4EC
L_800FB4F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB4F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB4F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB4F8
  c->lr=c->r[0]; // 800FB4FC
  c->r[1]=c->r[1]+0x00000010u; // 800FB500
  return; // 800FB504
}

// fn_800FB508
void f_800FB508(Ctx* __restrict c) {
  trace_call(0x800FB508u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB508
  c->r[0]=c->lr; // 800FB50C
  cmps(c,0,(int32_t)c->r[3],0); // 800FB510
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB514
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB518
  c->r[30]=c->r[3]|c->r[3]; // 800FB51C
  c->r[31]=c->r[4]|c->r[4]; // 800FB520
  if (crb(c,2)) { goto L_800FB544; } // 800FB524
  if (crb(c,2)) { goto L_800FB534; } // 800FB528
  c->r[4]=0u+0x00000000u; // 800FB52C
  c->lr=0x800FB534u; f_80039320(c); // 800FB530
L_800FB534:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB534
  if (!crb(c,1)) { goto L_800FB544; } // 800FB538
  c->r[3]=c->r[30]|c->r[30]; // 800FB53C
  c->lr=0x800FB544u; f_80244DC0(c); // 800FB540
L_800FB544:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB544
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB548
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB54C
  c->lr=c->r[0]; // 800FB550
  c->r[1]=c->r[1]+0x00000010u; // 800FB554
  return; // 800FB558
}

// fn_800FB55C
void f_800FB55C(Ctx* __restrict c) {
  trace_call(0x800FB55Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB55C
  c->r[0]=c->lr; // 800FB560
  cmps(c,0,(int32_t)c->r[3],0); // 800FB564
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB568
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB56C
  c->r[30]=c->r[3]|c->r[3]; // 800FB570
  c->r[31]=c->r[4]|c->r[4]; // 800FB574
  if (crb(c,2)) { goto L_800FB598; } // 800FB578
  if (crb(c,2)) { goto L_800FB588; } // 800FB57C
  c->r[4]=0u+0x00000000u; // 800FB580
  c->lr=0x800FB588u; f_80039320(c); // 800FB584
L_800FB588:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB588
  if (!crb(c,1)) { goto L_800FB598; } // 800FB58C
  c->r[3]=c->r[30]|c->r[30]; // 800FB590
  c->lr=0x800FB598u; f_80244DC0(c); // 800FB594
L_800FB598:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB598
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB59C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB5A0
  c->lr=c->r[0]; // 800FB5A4
  c->r[1]=c->r[1]+0x00000010u; // 800FB5A8
  return; // 800FB5AC
}

// fn_800FB5B0
void f_800FB5B0(Ctx* __restrict c) {
  trace_call(0x800FB5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB5B0
  c->r[0]=c->lr; // 800FB5B4
  cmps(c,0,(int32_t)c->r[3],0); // 800FB5B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB5BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB5C0
  c->r[30]=c->r[3]|c->r[3]; // 800FB5C4
  c->r[31]=c->r[4]|c->r[4]; // 800FB5C8
  if (crb(c,2)) { goto L_800FB5EC; } // 800FB5CC
  if (crb(c,2)) { goto L_800FB5DC; } // 800FB5D0
  c->r[4]=0u+0x00000000u; // 800FB5D4
  c->lr=0x800FB5DCu; f_80039320(c); // 800FB5D8
L_800FB5DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB5DC
  if (!crb(c,1)) { goto L_800FB5EC; } // 800FB5E0
  c->r[3]=c->r[30]|c->r[30]; // 800FB5E4
  c->lr=0x800FB5ECu; f_80244DC0(c); // 800FB5E8
L_800FB5EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB5EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB5F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB5F4
  c->lr=c->r[0]; // 800FB5F8
  c->r[1]=c->r[1]+0x00000010u; // 800FB5FC
  return; // 800FB600
}

// fn_800FB604
void f_800FB604(Ctx* __restrict c) {
  trace_call(0x800FB604u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB604
  c->r[0]=c->lr; // 800FB608
  cmps(c,0,(int32_t)c->r[3],0); // 800FB60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB610
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB614
  c->r[30]=c->r[3]|c->r[3]; // 800FB618
  c->r[31]=c->r[4]|c->r[4]; // 800FB61C
  if (crb(c,2)) { goto L_800FB640; } // 800FB620
  if (crb(c,2)) { goto L_800FB630; } // 800FB624
  c->r[4]=0u+0x00000000u; // 800FB628
  c->lr=0x800FB630u; f_80039320(c); // 800FB62C
L_800FB630:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB630
  if (!crb(c,1)) { goto L_800FB640; } // 800FB634
  c->r[3]=c->r[30]|c->r[30]; // 800FB638
  c->lr=0x800FB640u; f_80244DC0(c); // 800FB63C
L_800FB640:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB640
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB644
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB648
  c->lr=c->r[0]; // 800FB64C
  c->r[1]=c->r[1]+0x00000010u; // 800FB650
  return; // 800FB654
}

// fn_800FB658
void f_800FB658(Ctx* __restrict c) {
  trace_call(0x800FB658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB658
  c->r[0]=c->lr; // 800FB65C
  cmps(c,0,(int32_t)c->r[3],0); // 800FB660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB668
  c->r[30]=c->r[3]|c->r[3]; // 800FB66C
  c->r[31]=c->r[4]|c->r[4]; // 800FB670
  if (crb(c,2)) { goto L_800FB694; } // 800FB674
  if (crb(c,2)) { goto L_800FB684; } // 800FB678
  c->r[4]=0u+0x00000000u; // 800FB67C
  c->lr=0x800FB684u; f_80039320(c); // 800FB680
L_800FB684:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB684
  if (!crb(c,1)) { goto L_800FB694; } // 800FB688
  c->r[3]=c->r[30]|c->r[30]; // 800FB68C
  c->lr=0x800FB694u; f_80244DC0(c); // 800FB690
L_800FB694:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB694
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB698
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB69C
  c->lr=c->r[0]; // 800FB6A0
  c->r[1]=c->r[1]+0x00000010u; // 800FB6A4
  return; // 800FB6A8
}

// fn_800FB6AC
void f_800FB6AC(Ctx* __restrict c) {
  trace_call(0x800FB6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB6AC
  c->r[0]=c->lr; // 800FB6B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FB6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB6B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB6BC
  c->r[30]=c->r[3]|c->r[3]; // 800FB6C0
  c->r[31]=c->r[4]|c->r[4]; // 800FB6C4
  if (crb(c,2)) { goto L_800FB6E4; } // 800FB6C8
  c->r[4]=0u+0x00000000u; // 800FB6CC
  c->lr=0x800FB6D4u; f_8003ABE0(c); // 800FB6D0
  cmps(c,0,(int32_t)c->r[31],0); // 800FB6D4
  if (!crb(c,1)) { goto L_800FB6E4; } // 800FB6D8
  c->r[3]=c->r[30]|c->r[30]; // 800FB6DC
  c->lr=0x800FB6E4u; f_80244DC0(c); // 800FB6E0
L_800FB6E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB6E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB6E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB6EC
  c->lr=c->r[0]; // 800FB6F0
  c->r[1]=c->r[1]+0x00000010u; // 800FB6F4
  return; // 800FB6F8
}

// fn_800FB6FC
void f_800FB6FC(Ctx* __restrict c) {
  trace_call(0x800FB6FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB6FC
  c->r[0]=c->lr; // 800FB700
  cmps(c,0,(int32_t)c->r[3],0); // 800FB704
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB708
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB70C
  c->r[30]=c->r[3]|c->r[3]; // 800FB710
  c->r[31]=c->r[4]|c->r[4]; // 800FB714
  if (crb(c,2)) { goto L_800FB738; } // 800FB718
  if (crb(c,2)) { goto L_800FB728; } // 800FB71C
  c->r[4]=0u+0x00000000u; // 800FB720
  c->lr=0x800FB728u; f_8003ABE0(c); // 800FB724
L_800FB728:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB728
  if (!crb(c,1)) { goto L_800FB738; } // 800FB72C
  c->r[3]=c->r[30]|c->r[30]; // 800FB730
  c->lr=0x800FB738u; f_80244DC0(c); // 800FB734
L_800FB738:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB738
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB73C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB740
  c->lr=c->r[0]; // 800FB744
  c->r[1]=c->r[1]+0x00000010u; // 800FB748
  return; // 800FB74C
}

// fn_800FB750
void f_800FB750(Ctx* __restrict c) {
  trace_call(0x800FB750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB750
  c->r[0]=c->lr; // 800FB754
  cmps(c,0,(int32_t)c->r[3],0); // 800FB758
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB75C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB760
  c->r[30]=c->r[3]|c->r[3]; // 800FB764
  c->r[31]=c->r[4]|c->r[4]; // 800FB768
  if (crb(c,2)) { goto L_800FB788; } // 800FB76C
  c->r[4]=0u+0x00000000u; // 800FB770
  c->lr=0x800FB778u; f_8003B7D8(c); // 800FB774
  cmps(c,0,(int32_t)c->r[31],0); // 800FB778
  if (!crb(c,1)) { goto L_800FB788; } // 800FB77C
  c->r[3]=c->r[30]|c->r[30]; // 800FB780
  c->lr=0x800FB788u; f_80244DC0(c); // 800FB784
L_800FB788:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB788
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB78C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB790
  c->lr=c->r[0]; // 800FB794
  c->r[1]=c->r[1]+0x00000010u; // 800FB798
  return; // 800FB79C
}

// fn_800FB7A0
void f_800FB7A0(Ctx* __restrict c) {
  trace_call(0x800FB7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB7A0
  c->r[0]=c->lr; // 800FB7A4
  cmps(c,0,(int32_t)c->r[3],0); // 800FB7A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB7AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB7B0
  c->r[30]=c->r[3]|c->r[3]; // 800FB7B4
  c->r[31]=c->r[4]|c->r[4]; // 800FB7B8
  if (crb(c,2)) { goto L_800FB7D8; } // 800FB7BC
  c->r[4]=0u+0x00000000u; // 800FB7C0
  c->lr=0x800FB7C8u; f_8003C11C(c); // 800FB7C4
  cmps(c,0,(int32_t)c->r[31],0); // 800FB7C8
  if (!crb(c,1)) { goto L_800FB7D8; } // 800FB7CC
  c->r[3]=c->r[30]|c->r[30]; // 800FB7D0
  c->lr=0x800FB7D8u; f_80244DC0(c); // 800FB7D4
L_800FB7D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB7D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB7DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB7E0
  c->lr=c->r[0]; // 800FB7E4
  c->r[1]=c->r[1]+0x00000010u; // 800FB7E8
  return; // 800FB7EC
}

// fn_800FB7F0
void f_800FB7F0(Ctx* __restrict c) {
  trace_call(0x800FB7F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB7F0
  c->r[0]=c->lr; // 800FB7F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FB7F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB7FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB800
  c->r[30]=c->r[3]|c->r[3]; // 800FB804
  c->r[31]=c->r[4]|c->r[4]; // 800FB808
  if (crb(c,2)) { goto L_800FB828; } // 800FB80C
  c->r[4]=0u+0x00000000u; // 800FB810
  c->lr=0x800FB818u; f_8003C780(c); // 800FB814
  cmps(c,0,(int32_t)c->r[31],0); // 800FB818
  if (!crb(c,1)) { goto L_800FB828; } // 800FB81C
  c->r[3]=c->r[30]|c->r[30]; // 800FB820
  c->lr=0x800FB828u; f_80244DC0(c); // 800FB824
L_800FB828:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB828
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB82C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB830
  c->lr=c->r[0]; // 800FB834
  c->r[1]=c->r[1]+0x00000010u; // 800FB838
  return; // 800FB83C
}

// fn_800FB840
void f_800FB840(Ctx* __restrict c) {
  trace_call(0x800FB840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB840
  c->r[0]=c->lr; // 800FB844
  cmps(c,0,(int32_t)c->r[3],0); // 800FB848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB84C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB850
  c->r[30]=c->r[3]|c->r[3]; // 800FB854
  c->r[31]=c->r[4]|c->r[4]; // 800FB858
  if (crb(c,2)) { goto L_800FB87C; } // 800FB85C
  if (crb(c,2)) { goto L_800FB86C; } // 800FB860
  c->r[4]=0u+0x00000000u; // 800FB864
  c->lr=0x800FB86Cu; f_8003C780(c); // 800FB868
L_800FB86C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB86C
  if (!crb(c,1)) { goto L_800FB87C; } // 800FB870
  c->r[3]=c->r[30]|c->r[30]; // 800FB874
  c->lr=0x800FB87Cu; f_80244DC0(c); // 800FB878
L_800FB87C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB87C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB884
  c->lr=c->r[0]; // 800FB888
  c->r[1]=c->r[1]+0x00000010u; // 800FB88C
  return; // 800FB890
}

// fn_800FB894
void f_800FB894(Ctx* __restrict c) {
  trace_call(0x800FB894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB894
  c->r[0]=c->lr; // 800FB898
  cmps(c,0,(int32_t)c->r[3],0); // 800FB89C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB8A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB8A4
  c->r[30]=c->r[3]|c->r[3]; // 800FB8A8
  c->r[31]=c->r[4]|c->r[4]; // 800FB8AC
  if (crb(c,2)) { goto L_800FB8D0; } // 800FB8B0
  if (crb(c,2)) { goto L_800FB8C0; } // 800FB8B4
  c->r[4]=0u+0x00000000u; // 800FB8B8
  c->lr=0x800FB8C0u; f_8003C780(c); // 800FB8BC
L_800FB8C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB8C0
  if (!crb(c,1)) { goto L_800FB8D0; } // 800FB8C4
  c->r[3]=c->r[30]|c->r[30]; // 800FB8C8
  c->lr=0x800FB8D0u; f_80244DC0(c); // 800FB8CC
L_800FB8D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB8D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB8D8
  c->lr=c->r[0]; // 800FB8DC
  c->r[1]=c->r[1]+0x00000010u; // 800FB8E0
  return; // 800FB8E4
}

// fn_800FB8E8
void f_800FB8E8(Ctx* __restrict c) {
  trace_call(0x800FB8E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB8E8
  c->r[0]=c->lr; // 800FB8EC
  cmps(c,0,(int32_t)c->r[3],0); // 800FB8F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB8F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB8F8
  c->r[30]=c->r[3]|c->r[3]; // 800FB8FC
  c->r[31]=c->r[4]|c->r[4]; // 800FB900
  if (crb(c,2)) { goto L_800FB924; } // 800FB904
  if (crb(c,2)) { goto L_800FB914; } // 800FB908
  c->r[4]=0u+0x00000000u; // 800FB90C
  c->lr=0x800FB914u; f_8003C780(c); // 800FB910
L_800FB914:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FB914
  if (!crb(c,1)) { goto L_800FB924; } // 800FB918
  c->r[3]=c->r[30]|c->r[30]; // 800FB91C
  c->lr=0x800FB924u; f_80244DC0(c); // 800FB920
L_800FB924:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB924
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB928
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB92C
  c->lr=c->r[0]; // 800FB930
  c->r[1]=c->r[1]+0x00000010u; // 800FB934
  return; // 800FB938
}

// fn_800FB93C
void f_800FB93C(Ctx* __restrict c) {
  trace_call(0x800FB93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB93C
  c->r[0]=c->lr; // 800FB940
  cmps(c,0,(int32_t)c->r[3],0); // 800FB944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB948
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB94C
  c->r[30]=c->r[3]|c->r[3]; // 800FB950
  c->r[31]=c->r[4]|c->r[4]; // 800FB954
  if (crb(c,2)) { goto L_800FB974; } // 800FB958
  c->r[4]=0u+0x00000000u; // 800FB95C
  c->lr=0x800FB964u; f_8003DA04(c); // 800FB960
  cmps(c,0,(int32_t)c->r[31],0); // 800FB964
  if (!crb(c,1)) { goto L_800FB974; } // 800FB968
  c->r[3]=c->r[30]|c->r[30]; // 800FB96C
  c->lr=0x800FB974u; f_80244DC0(c); // 800FB970
L_800FB974:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB974
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB978
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB97C
  c->lr=c->r[0]; // 800FB980
  c->r[1]=c->r[1]+0x00000010u; // 800FB984
  return; // 800FB988
}

// fn_800FB98C
void f_800FB98C(Ctx* __restrict c) {
  trace_call(0x800FB98Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB98C
  c->r[0]=c->lr; // 800FB990
  cmps(c,0,(int32_t)c->r[3],0); // 800FB994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB998
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB99C
  c->r[30]=c->r[3]|c->r[3]; // 800FB9A0
  c->r[31]=c->r[4]|c->r[4]; // 800FB9A4
  if (crb(c,2)) { goto L_800FB9C4; } // 800FB9A8
  c->r[4]=0u+0x00000000u; // 800FB9AC
  c->lr=0x800FB9B4u; f_8003DCE8(c); // 800FB9B0
  cmps(c,0,(int32_t)c->r[31],0); // 800FB9B4
  if (!crb(c,1)) { goto L_800FB9C4; } // 800FB9B8
  c->r[3]=c->r[30]|c->r[30]; // 800FB9BC
  c->lr=0x800FB9C4u; f_80244DC0(c); // 800FB9C0
L_800FB9C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FB9C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FB9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB9CC
  c->lr=c->r[0]; // 800FB9D0
  c->r[1]=c->r[1]+0x00000010u; // 800FB9D4
  return; // 800FB9D8
}

// fn_800FB9DC
void f_800FB9DC(Ctx* __restrict c) {
  trace_call(0x800FB9DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB9DC
  c->r[0]=c->lr; // 800FB9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FB9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB9E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FB9EC
  c->r[30]=c->r[3]|c->r[3]; // 800FB9F0
  c->r[31]=c->r[4]|c->r[4]; // 800FB9F4
  if (crb(c,2)) { goto L_800FBA14; } // 800FB9F8
  c->r[4]=0u+0x00000000u; // 800FB9FC
  c->lr=0x800FBA04u; f_8003DFC4(c); // 800FBA00
  cmps(c,0,(int32_t)c->r[31],0); // 800FBA04
  if (!crb(c,1)) { goto L_800FBA14; } // 800FBA08
  c->r[3]=c->r[30]|c->r[30]; // 800FBA0C
  c->lr=0x800FBA14u; f_80244DC0(c); // 800FBA10
L_800FBA14:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBA14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBA1C
  c->lr=c->r[0]; // 800FBA20
  c->r[1]=c->r[1]+0x00000010u; // 800FBA24
  return; // 800FBA28
}

// fn_800FBA2C
void f_800FBA2C(Ctx* __restrict c) {
  trace_call(0x800FBA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBA2C
  c->r[0]=c->lr; // 800FBA30
  cmps(c,0,(int32_t)c->r[3],0); // 800FBA34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBA38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBA3C
  c->r[30]=c->r[3]|c->r[3]; // 800FBA40
  c->r[31]=c->r[4]|c->r[4]; // 800FBA44
  if (crb(c,2)) { goto L_800FBA64; } // 800FBA48
  c->r[4]=0u+0x00000000u; // 800FBA4C
  c->lr=0x800FBA54u; f_8003E52C(c); // 800FBA50
  cmps(c,0,(int32_t)c->r[31],0); // 800FBA54
  if (!crb(c,1)) { goto L_800FBA64; } // 800FBA58
  c->r[3]=c->r[30]|c->r[30]; // 800FBA5C
  c->lr=0x800FBA64u; f_80244DC0(c); // 800FBA60
L_800FBA64:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBA64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBA68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBA6C
  c->lr=c->r[0]; // 800FBA70
  c->r[1]=c->r[1]+0x00000010u; // 800FBA74
  return; // 800FBA78
}

// fn_800FBA7C
void f_800FBA7C(Ctx* __restrict c) {
  trace_call(0x800FBA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBA7C
  c->r[0]=c->lr; // 800FBA80
  cmps(c,0,(int32_t)c->r[3],0); // 800FBA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBA88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBA8C
  c->r[30]=c->r[3]|c->r[3]; // 800FBA90
  c->r[31]=c->r[4]|c->r[4]; // 800FBA94
  if (crb(c,2)) { goto L_800FBAB8; } // 800FBA98
  if (crb(c,2)) { goto L_800FBAA8; } // 800FBA9C
  c->r[4]=0u+0x00000000u; // 800FBAA0
  c->lr=0x800FBAA8u; f_8003E52C(c); // 800FBAA4
L_800FBAA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FBAA8
  if (!crb(c,1)) { goto L_800FBAB8; } // 800FBAAC
  c->r[3]=c->r[30]|c->r[30]; // 800FBAB0
  c->lr=0x800FBAB8u; f_80244DC0(c); // 800FBAB4
L_800FBAB8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBAB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBAC0
  c->lr=c->r[0]; // 800FBAC4
  c->r[1]=c->r[1]+0x00000010u; // 800FBAC8
  return; // 800FBACC
}

// fn_800FBAD0
void f_800FBAD0(Ctx* __restrict c) {
  trace_call(0x800FBAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBAD0
  c->r[0]=c->lr; // 800FBAD4
  cmps(c,0,(int32_t)c->r[3],0); // 800FBAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBADC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBAE0
  c->r[30]=c->r[3]|c->r[3]; // 800FBAE4
  c->r[31]=c->r[4]|c->r[4]; // 800FBAE8
  if (crb(c,2)) { goto L_800FBB0C; } // 800FBAEC
  if (crb(c,2)) { goto L_800FBAFC; } // 800FBAF0
  c->r[4]=0u+0x00000000u; // 800FBAF4
  c->lr=0x800FBAFCu; f_8003E52C(c); // 800FBAF8
L_800FBAFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FBAFC
  if (!crb(c,1)) { goto L_800FBB0C; } // 800FBB00
  c->r[3]=c->r[30]|c->r[30]; // 800FBB04
  c->lr=0x800FBB0Cu; f_80244DC0(c); // 800FBB08
L_800FBB0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBB0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBB10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBB14
  c->lr=c->r[0]; // 800FBB18
  c->r[1]=c->r[1]+0x00000010u; // 800FBB1C
  return; // 800FBB20
}

// fn_800FBB24
void f_800FBB24(Ctx* __restrict c) {
  trace_call(0x800FBB24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBB24
  c->r[0]=c->lr; // 800FBB28
  cmps(c,0,(int32_t)c->r[3],0); // 800FBB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBB30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBB34
  c->r[30]=c->r[3]|c->r[3]; // 800FBB38
  c->r[31]=c->r[4]|c->r[4]; // 800FBB3C
  if (crb(c,2)) { goto L_800FBB5C; } // 800FBB40
  c->r[4]=0u+0x00000000u; // 800FBB44
  c->lr=0x800FBB4Cu; f_8003FDE4(c); // 800FBB48
  cmps(c,0,(int32_t)c->r[31],0); // 800FBB4C
  if (!crb(c,1)) { goto L_800FBB5C; } // 800FBB50
  c->r[3]=c->r[30]|c->r[30]; // 800FBB54
  c->lr=0x800FBB5Cu; f_80244DC0(c); // 800FBB58
L_800FBB5C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBB5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBB60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBB64
  c->lr=c->r[0]; // 800FBB68
  c->r[1]=c->r[1]+0x00000010u; // 800FBB6C
  return; // 800FBB70
}

// fn_800FBB74
void f_800FBB74(Ctx* __restrict c) {
  trace_call(0x800FBB74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBB74
  c->r[0]=c->lr; // 800FBB78
  cmps(c,0,(int32_t)c->r[3],0); // 800FBB7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBB80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBB84
  c->r[30]=c->r[3]|c->r[3]; // 800FBB88
  c->r[31]=c->r[4]|c->r[4]; // 800FBB8C
  if (crb(c,2)) { goto L_800FBBAC; } // 800FBB90
  c->r[4]=0u+0x00000000u; // 800FBB94
  c->lr=0x800FBB9Cu; f_80040B18(c); // 800FBB98
  cmps(c,0,(int32_t)c->r[31],0); // 800FBB9C
  if (!crb(c,1)) { goto L_800FBBAC; } // 800FBBA0
  c->r[3]=c->r[30]|c->r[30]; // 800FBBA4
  c->lr=0x800FBBACu; f_80244DC0(c); // 800FBBA8
L_800FBBAC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBBAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBBB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBBB4
  c->lr=c->r[0]; // 800FBBB8
  c->r[1]=c->r[1]+0x00000010u; // 800FBBBC
  return; // 800FBBC0
}

// fn_800FBBC4
void f_800FBBC4(Ctx* __restrict c) {
  trace_call(0x800FBBC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBBC4
  c->r[0]=c->lr; // 800FBBC8
  cmps(c,0,(int32_t)c->r[3],0); // 800FBBCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBBD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBBD4
  c->r[30]=c->r[3]|c->r[3]; // 800FBBD8
  c->r[31]=c->r[4]|c->r[4]; // 800FBBDC
  if (crb(c,2)) { goto L_800FBBFC; } // 800FBBE0
  c->r[4]=0u+0x00000000u; // 800FBBE4
  c->lr=0x800FBBECu; f_80040F74(c); // 800FBBE8
  cmps(c,0,(int32_t)c->r[31],0); // 800FBBEC
  if (!crb(c,1)) { goto L_800FBBFC; } // 800FBBF0
  c->r[3]=c->r[30]|c->r[30]; // 800FBBF4
  c->lr=0x800FBBFCu; f_80244DC0(c); // 800FBBF8
L_800FBBFC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBBFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBC00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBC04
  c->lr=c->r[0]; // 800FBC08
  c->r[1]=c->r[1]+0x00000010u; // 800FBC0C
  return; // 800FBC10
}

// fn_800FBC14
void f_800FBC14(Ctx* __restrict c) {
  trace_call(0x800FBC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBC14
  c->r[0]=c->lr; // 800FBC18
  cmps(c,0,(int32_t)c->r[3],0); // 800FBC1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBC20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBC24
  c->r[30]=c->r[3]|c->r[3]; // 800FBC28
  c->r[31]=c->r[4]|c->r[4]; // 800FBC2C
  if (crb(c,2)) { goto L_800FBC4C; } // 800FBC30
  c->r[4]=0u+0x00000000u; // 800FBC34
  c->lr=0x800FBC3Cu; f_80041258(c); // 800FBC38
  cmps(c,0,(int32_t)c->r[31],0); // 800FBC3C
  if (!crb(c,1)) { goto L_800FBC4C; } // 800FBC40
  c->r[3]=c->r[30]|c->r[30]; // 800FBC44
  c->lr=0x800FBC4Cu; f_80244DC0(c); // 800FBC48
L_800FBC4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBC4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBC50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBC54
  c->lr=c->r[0]; // 800FBC58
  c->r[1]=c->r[1]+0x00000010u; // 800FBC5C
  return; // 800FBC60
}

// fn_800FBC64
void f_800FBC64(Ctx* __restrict c) {
  trace_call(0x800FBC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBC64
  c->r[0]=c->lr; // 800FBC68
  cmps(c,0,(int32_t)c->r[3],0); // 800FBC6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBC70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBC74
  c->r[30]=c->r[3]|c->r[3]; // 800FBC78
  c->r[31]=c->r[4]|c->r[4]; // 800FBC7C
  if (crb(c,2)) { goto L_800FBC9C; } // 800FBC80
  c->r[4]=0u+0x00000000u; // 800FBC84
  c->lr=0x800FBC8Cu; f_80041F70(c); // 800FBC88
  cmps(c,0,(int32_t)c->r[31],0); // 800FBC8C
  if (!crb(c,1)) { goto L_800FBC9C; } // 800FBC90
  c->r[3]=c->r[30]|c->r[30]; // 800FBC94
  c->lr=0x800FBC9Cu; f_80244DC0(c); // 800FBC98
L_800FBC9C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBC9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBCA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBCA4
  c->lr=c->r[0]; // 800FBCA8
  c->r[1]=c->r[1]+0x00000010u; // 800FBCAC
  return; // 800FBCB0
}

// fn_800FBCB4
void f_800FBCB4(Ctx* __restrict c) {
  trace_call(0x800FBCB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBCB4
  c->r[0]=c->lr; // 800FBCB8
  cmps(c,0,(int32_t)c->r[3],0); // 800FBCBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBCC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBCC4
  c->r[30]=c->r[3]|c->r[3]; // 800FBCC8
  c->r[31]=c->r[4]|c->r[4]; // 800FBCCC
  if (crb(c,2)) { goto L_800FBCEC; } // 800FBCD0
  c->r[4]=0u+0x00000000u; // 800FBCD4
  c->lr=0x800FBCDCu; f_80043064(c); // 800FBCD8
  cmps(c,0,(int32_t)c->r[31],0); // 800FBCDC
  if (!crb(c,1)) { goto L_800FBCEC; } // 800FBCE0
  c->r[3]=c->r[30]|c->r[30]; // 800FBCE4
  c->lr=0x800FBCECu; f_80244DC0(c); // 800FBCE8
L_800FBCEC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBCEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBCF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBCF4
  c->lr=c->r[0]; // 800FBCF8
  c->r[1]=c->r[1]+0x00000010u; // 800FBCFC
  return; // 800FBD00
}

// fn_800FBD04
void f_800FBD04(Ctx* __restrict c) {
  trace_call(0x800FBD04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBD04
  c->r[0]=c->lr; // 800FBD08
  cmps(c,0,(int32_t)c->r[3],0); // 800FBD0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBD10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBD14
  c->r[30]=c->r[3]|c->r[3]; // 800FBD18
  c->r[31]=c->r[4]|c->r[4]; // 800FBD1C
  if (crb(c,2)) { goto L_800FBD3C; } // 800FBD20
  c->r[4]=0u+0x00000000u; // 800FBD24
  c->lr=0x800FBD2Cu; f_800437A4(c); // 800FBD28
  cmps(c,0,(int32_t)c->r[31],0); // 800FBD2C
  if (!crb(c,1)) { goto L_800FBD3C; } // 800FBD30
  c->r[3]=c->r[30]|c->r[30]; // 800FBD34
  c->lr=0x800FBD3Cu; f_80244DC0(c); // 800FBD38
L_800FBD3C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBD3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBD40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBD44
  c->lr=c->r[0]; // 800FBD48
  c->r[1]=c->r[1]+0x00000010u; // 800FBD4C
  return; // 800FBD50
}

// fn_800FBD54
void f_800FBD54(Ctx* __restrict c) {
  trace_call(0x800FBD54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBD54
  c->r[0]=c->lr; // 800FBD58
  cmps(c,0,(int32_t)c->r[3],0); // 800FBD5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBD60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBD64
  c->r[30]=c->r[3]|c->r[3]; // 800FBD68
  c->r[31]=c->r[4]|c->r[4]; // 800FBD6C
  if (crb(c,2)) { goto L_800FBD8C; } // 800FBD70
  c->r[4]=0u+0x00000000u; // 800FBD74
  c->lr=0x800FBD7Cu; f_80043C0C(c); // 800FBD78
  cmps(c,0,(int32_t)c->r[31],0); // 800FBD7C
  if (!crb(c,1)) { goto L_800FBD8C; } // 800FBD80
  c->r[3]=c->r[30]|c->r[30]; // 800FBD84
  c->lr=0x800FBD8Cu; f_80244DC0(c); // 800FBD88
L_800FBD8C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBD8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBD90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBD94
  c->lr=c->r[0]; // 800FBD98
  c->r[1]=c->r[1]+0x00000010u; // 800FBD9C
  return; // 800FBDA0
}

// fn_800FBDA4
void f_800FBDA4(Ctx* __restrict c) {
  trace_call(0x800FBDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBDA4
  c->r[0]=c->lr; // 800FBDA8
  cmps(c,0,(int32_t)c->r[3],0); // 800FBDAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBDB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBDB4
  c->r[30]=c->r[3]|c->r[3]; // 800FBDB8
  c->r[31]=c->r[4]|c->r[4]; // 800FBDBC
  if (crb(c,2)) { goto L_800FBDDC; } // 800FBDC0
  c->r[4]=0u+0x00000000u; // 800FBDC4
  c->lr=0x800FBDCCu; f_800440D8(c); // 800FBDC8
  cmps(c,0,(int32_t)c->r[31],0); // 800FBDCC
  if (!crb(c,1)) { goto L_800FBDDC; } // 800FBDD0
  c->r[3]=c->r[30]|c->r[30]; // 800FBDD4
  c->lr=0x800FBDDCu; f_80244DC0(c); // 800FBDD8
L_800FBDDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBDDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBDE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBDE4
  c->lr=c->r[0]; // 800FBDE8
  c->r[1]=c->r[1]+0x00000010u; // 800FBDEC
  return; // 800FBDF0
}

// fn_800FBDF4
void f_800FBDF4(Ctx* __restrict c) {
  trace_call(0x800FBDF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBDF4
  c->r[0]=c->lr; // 800FBDF8
  cmps(c,0,(int32_t)c->r[3],0); // 800FBDFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBE00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBE04
  c->r[30]=c->r[3]|c->r[3]; // 800FBE08
  c->r[31]=c->r[4]|c->r[4]; // 800FBE0C
  if (crb(c,2)) { goto L_800FBE2C; } // 800FBE10
  c->r[4]=0u+0x00000000u; // 800FBE14
  c->lr=0x800FBE1Cu; f_80044550(c); // 800FBE18
  cmps(c,0,(int32_t)c->r[31],0); // 800FBE1C
  if (!crb(c,1)) { goto L_800FBE2C; } // 800FBE20
  c->r[3]=c->r[30]|c->r[30]; // 800FBE24
  c->lr=0x800FBE2Cu; f_80244DC0(c); // 800FBE28
L_800FBE2C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBE2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBE30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBE34
  c->lr=c->r[0]; // 800FBE38
  c->r[1]=c->r[1]+0x00000010u; // 800FBE3C
  return; // 800FBE40
}

// fn_800FBE44
void f_800FBE44(Ctx* __restrict c) {
  trace_call(0x800FBE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBE44
  c->r[0]=c->lr; // 800FBE48
  cmps(c,0,(int32_t)c->r[3],0); // 800FBE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBE50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBE54
  c->r[30]=c->r[3]|c->r[3]; // 800FBE58
  c->r[31]=c->r[4]|c->r[4]; // 800FBE5C
  if (crb(c,2)) { goto L_800FBE7C; } // 800FBE60
  c->r[4]=0u+0x00000000u; // 800FBE64
  c->lr=0x800FBE6Cu; f_800449B4(c); // 800FBE68
  cmps(c,0,(int32_t)c->r[31],0); // 800FBE6C
  if (!crb(c,1)) { goto L_800FBE7C; } // 800FBE70
  c->r[3]=c->r[30]|c->r[30]; // 800FBE74
  c->lr=0x800FBE7Cu; f_80244DC0(c); // 800FBE78
L_800FBE7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBE7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBE80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBE84
  c->lr=c->r[0]; // 800FBE88
  c->r[1]=c->r[1]+0x00000010u; // 800FBE8C
  return; // 800FBE90
}

// fn_800FBE94
void f_800FBE94(Ctx* __restrict c) {
  trace_call(0x800FBE94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBE94
  c->r[0]=c->lr; // 800FBE98
  cmps(c,0,(int32_t)c->r[3],0); // 800FBE9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBEA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBEA4
  c->r[30]=c->r[3]|c->r[3]; // 800FBEA8
  c->r[31]=c->r[4]|c->r[4]; // 800FBEAC
  if (crb(c,2)) { goto L_800FBECC; } // 800FBEB0
  c->r[4]=0u+0x00000000u; // 800FBEB4
  c->lr=0x800FBEBCu; f_80044DCC(c); // 800FBEB8
  cmps(c,0,(int32_t)c->r[31],0); // 800FBEBC
  if (!crb(c,1)) { goto L_800FBECC; } // 800FBEC0
  c->r[3]=c->r[30]|c->r[30]; // 800FBEC4
  c->lr=0x800FBECCu; f_80244DC0(c); // 800FBEC8
L_800FBECC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBECC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBED4
  c->lr=c->r[0]; // 800FBED8
  c->r[1]=c->r[1]+0x00000010u; // 800FBEDC
  return; // 800FBEE0
}

// fn_800FBEE4
void f_800FBEE4(Ctx* __restrict c) {
  trace_call(0x800FBEE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBEE4
  c->r[0]=c->lr; // 800FBEE8
  cmps(c,0,(int32_t)c->r[3],0); // 800FBEEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBEF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBEF4
  c->r[30]=c->r[3]|c->r[3]; // 800FBEF8
  c->r[31]=c->r[4]|c->r[4]; // 800FBEFC
  if (crb(c,2)) { goto L_800FBF1C; } // 800FBF00
  c->r[4]=0u+0x00000000u; // 800FBF04
  c->lr=0x800FBF0Cu; f_80045290(c); // 800FBF08
  cmps(c,0,(int32_t)c->r[31],0); // 800FBF0C
  if (!crb(c,1)) { goto L_800FBF1C; } // 800FBF10
  c->r[3]=c->r[30]|c->r[30]; // 800FBF14
  c->lr=0x800FBF1Cu; f_80244DC0(c); // 800FBF18
L_800FBF1C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBF1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBF20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBF24
  c->lr=c->r[0]; // 800FBF28
  c->r[1]=c->r[1]+0x00000010u; // 800FBF2C
  return; // 800FBF30
}

// fn_800FBF34
void f_800FBF34(Ctx* __restrict c) {
  trace_call(0x800FBF34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBF34
  c->r[0]=c->lr; // 800FBF38
  cmps(c,0,(int32_t)c->r[3],0); // 800FBF3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBF40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBF44
  c->r[30]=c->r[3]|c->r[3]; // 800FBF48
  c->r[31]=c->r[4]|c->r[4]; // 800FBF4C
  if (crb(c,2)) { goto L_800FBF70; } // 800FBF50
  if (crb(c,2)) { goto L_800FBF60; } // 800FBF54
  c->r[4]=0u+0x00000000u; // 800FBF58
  c->lr=0x800FBF60u; f_8003ABE0(c); // 800FBF5C
L_800FBF60:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FBF60
  if (!crb(c,1)) { goto L_800FBF70; } // 800FBF64
  c->r[3]=c->r[30]|c->r[30]; // 800FBF68
  c->lr=0x800FBF70u; f_80244DC0(c); // 800FBF6C
L_800FBF70:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBF70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBF74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBF78
  c->lr=c->r[0]; // 800FBF7C
  c->r[1]=c->r[1]+0x00000010u; // 800FBF80
  return; // 800FBF84
}

// fn_800FBF88
void f_800FBF88(Ctx* __restrict c) {
  trace_call(0x800FBF88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBF88
  c->r[0]=c->lr; // 800FBF8C
  cmps(c,0,(int32_t)c->r[3],0); // 800FBF90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBF94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBF98
  c->r[30]=c->r[3]|c->r[3]; // 800FBF9C
  c->r[31]=c->r[4]|c->r[4]; // 800FBFA0
  if (crb(c,2)) { goto L_800FBFC4; } // 800FBFA4
  if (crb(c,2)) { goto L_800FBFB4; } // 800FBFA8
  c->r[4]=0u+0x00000000u; // 800FBFAC
  c->lr=0x800FBFB4u; f_8003ABE0(c); // 800FBFB0
L_800FBFB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FBFB4
  if (!crb(c,1)) { goto L_800FBFC4; } // 800FBFB8
  c->r[3]=c->r[30]|c->r[30]; // 800FBFBC
  c->lr=0x800FBFC4u; f_80244DC0(c); // 800FBFC0
L_800FBFC4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FBFC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FBFC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBFCC
  c->lr=c->r[0]; // 800FBFD0
  c->r[1]=c->r[1]+0x00000010u; // 800FBFD4
  return; // 800FBFD8
}

// fn_800FBFDC
void f_800FBFDC(Ctx* __restrict c) {
  trace_call(0x800FBFDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBFDC
  c->r[0]=c->lr; // 800FBFE0
  cmps(c,0,(int32_t)c->r[3],0); // 800FBFE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBFE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FBFEC
  c->r[30]=c->r[3]|c->r[3]; // 800FBFF0
  c->r[31]=c->r[4]|c->r[4]; // 800FBFF4
  if (crb(c,2)) { goto L_800FC018; } // 800FBFF8
  if (crb(c,2)) { goto L_800FC008; } // 800FBFFC
  c->r[4]=0u+0x00000000u; // 800FC000
  c->lr=0x800FC008u; f_8003ABE0(c); // 800FC004
L_800FC008:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC008
  if (!crb(c,1)) { goto L_800FC018; } // 800FC00C
  c->r[3]=c->r[30]|c->r[30]; // 800FC010
  c->lr=0x800FC018u; f_80244DC0(c); // 800FC014
L_800FC018:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC018
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC01C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC020
  c->lr=c->r[0]; // 800FC024
  c->r[1]=c->r[1]+0x00000010u; // 800FC028
  return; // 800FC02C
}

// fn_800FC030
void f_800FC030(Ctx* __restrict c) {
  trace_call(0x800FC030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC030
  c->r[0]=c->lr; // 800FC034
  cmps(c,0,(int32_t)c->r[3],0); // 800FC038
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC03C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC040
  c->r[30]=c->r[3]|c->r[3]; // 800FC044
  c->r[31]=c->r[4]|c->r[4]; // 800FC048
  if (crb(c,2)) { goto L_800FC06C; } // 800FC04C
  if (crb(c,2)) { goto L_800FC05C; } // 800FC050
  c->r[4]=0u+0x00000000u; // 800FC054
  c->lr=0x800FC05Cu; f_8003ABE0(c); // 800FC058
L_800FC05C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC05C
  if (!crb(c,1)) { goto L_800FC06C; } // 800FC060
  c->r[3]=c->r[30]|c->r[30]; // 800FC064
  c->lr=0x800FC06Cu; f_80244DC0(c); // 800FC068
L_800FC06C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC06C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC074
  c->lr=c->r[0]; // 800FC078
  c->r[1]=c->r[1]+0x00000010u; // 800FC07C
  return; // 800FC080
}

// fn_800FC084
void f_800FC084(Ctx* __restrict c) {
  trace_call(0x800FC084u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC084
  c->r[0]=c->lr; // 800FC088
  cmps(c,0,(int32_t)c->r[3],0); // 800FC08C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC090
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC094
  c->r[30]=c->r[3]|c->r[3]; // 800FC098
  c->r[31]=c->r[4]|c->r[4]; // 800FC09C
  if (crb(c,2)) { goto L_800FC0C0; } // 800FC0A0
  if (crb(c,2)) { goto L_800FC0B0; } // 800FC0A4
  c->r[4]=0u+0x00000000u; // 800FC0A8
  c->lr=0x800FC0B0u; f_8003ABE0(c); // 800FC0AC
L_800FC0B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC0B0
  if (!crb(c,1)) { goto L_800FC0C0; } // 800FC0B4
  c->r[3]=c->r[30]|c->r[30]; // 800FC0B8
  c->lr=0x800FC0C0u; f_80244DC0(c); // 800FC0BC
L_800FC0C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC0C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC0C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC0C8
  c->lr=c->r[0]; // 800FC0CC
  c->r[1]=c->r[1]+0x00000010u; // 800FC0D0
  return; // 800FC0D4
}

// fn_800FC0D8
void f_800FC0D8(Ctx* __restrict c) {
  trace_call(0x800FC0D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC0D8
  c->r[0]=c->lr; // 800FC0DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC0E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC0E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC0E8
  c->r[30]=c->r[3]|c->r[3]; // 800FC0EC
  c->r[31]=c->r[4]|c->r[4]; // 800FC0F0
  if (crb(c,2)) { goto L_800FC114; } // 800FC0F4
  if (crb(c,2)) { goto L_800FC104; } // 800FC0F8
  c->r[4]=0u+0x00000000u; // 800FC0FC
  c->lr=0x800FC104u; f_8003ABE0(c); // 800FC100
L_800FC104:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC104
  if (!crb(c,1)) { goto L_800FC114; } // 800FC108
  c->r[3]=c->r[30]|c->r[30]; // 800FC10C
  c->lr=0x800FC114u; f_80244DC0(c); // 800FC110
L_800FC114:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC114
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC118
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC11C
  c->lr=c->r[0]; // 800FC120
  c->r[1]=c->r[1]+0x00000010u; // 800FC124
  return; // 800FC128
}

// fn_800FC12C
void f_800FC12C(Ctx* __restrict c) {
  trace_call(0x800FC12Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC12C
  c->r[0]=c->lr; // 800FC130
  cmps(c,0,(int32_t)c->r[3],0); // 800FC134
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC138
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC13C
  c->r[30]=c->r[3]|c->r[3]; // 800FC140
  c->r[31]=c->r[4]|c->r[4]; // 800FC144
  if (crb(c,2)) { goto L_800FC168; } // 800FC148
  if (crb(c,2)) { goto L_800FC158; } // 800FC14C
  c->r[4]=0u+0x00000000u; // 800FC150
  c->lr=0x800FC158u; f_8003ABE0(c); // 800FC154
L_800FC158:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC158
  if (!crb(c,1)) { goto L_800FC168; } // 800FC15C
  c->r[3]=c->r[30]|c->r[30]; // 800FC160
  c->lr=0x800FC168u; f_80244DC0(c); // 800FC164
L_800FC168:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC168
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC16C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC170
  c->lr=c->r[0]; // 800FC174
  c->r[1]=c->r[1]+0x00000010u; // 800FC178
  return; // 800FC17C
}

// fn_800FC180
void f_800FC180(Ctx* __restrict c) {
  trace_call(0x800FC180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC180
  c->r[0]=c->lr; // 800FC184
  cmps(c,0,(int32_t)c->r[3],0); // 800FC188
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC18C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC190
  c->r[30]=c->r[3]|c->r[3]; // 800FC194
  c->r[31]=c->r[4]|c->r[4]; // 800FC198
  if (crb(c,2)) { goto L_800FC1BC; } // 800FC19C
  if (crb(c,2)) { goto L_800FC1AC; } // 800FC1A0
  c->r[4]=0u+0x00000000u; // 800FC1A4
  c->lr=0x800FC1ACu; f_8003ABE0(c); // 800FC1A8
L_800FC1AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC1AC
  if (!crb(c,1)) { goto L_800FC1BC; } // 800FC1B0
  c->r[3]=c->r[30]|c->r[30]; // 800FC1B4
  c->lr=0x800FC1BCu; f_80244DC0(c); // 800FC1B8
L_800FC1BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC1BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC1C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC1C4
  c->lr=c->r[0]; // 800FC1C8
  c->r[1]=c->r[1]+0x00000010u; // 800FC1CC
  return; // 800FC1D0
}

// fn_800FC1D4
void f_800FC1D4(Ctx* __restrict c) {
  trace_call(0x800FC1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC1D4
  c->r[0]=c->lr; // 800FC1D8
  cmps(c,0,(int32_t)c->r[3],0); // 800FC1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC1E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC1E4
  c->r[30]=c->r[3]|c->r[3]; // 800FC1E8
  c->r[31]=c->r[4]|c->r[4]; // 800FC1EC
  if (crb(c,2)) { goto L_800FC20C; } // 800FC1F0
  c->r[4]=0u+0x00000000u; // 800FC1F4
  c->lr=0x800FC1FCu; f_800476B8(c); // 800FC1F8
  cmps(c,0,(int32_t)c->r[31],0); // 800FC1FC
  if (!crb(c,1)) { goto L_800FC20C; } // 800FC200
  c->r[3]=c->r[30]|c->r[30]; // 800FC204
  c->lr=0x800FC20Cu; f_80244DC0(c); // 800FC208
L_800FC20C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC20C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC210
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC214
  c->lr=c->r[0]; // 800FC218
  c->r[1]=c->r[1]+0x00000010u; // 800FC21C
  return; // 800FC220
}

// fn_800FC224
void f_800FC224(Ctx* __restrict c) {
  trace_call(0x800FC224u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC224
  c->r[0]=c->lr; // 800FC228
  cmps(c,0,(int32_t)c->r[3],0); // 800FC22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC230
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC234
  c->r[30]=c->r[3]|c->r[3]; // 800FC238
  c->r[31]=c->r[4]|c->r[4]; // 800FC23C
  if (crb(c,2)) { goto L_800FC260; } // 800FC240
  if (crb(c,2)) { goto L_800FC250; } // 800FC244
  c->r[4]=0u+0x00000000u; // 800FC248
  c->lr=0x800FC250u; f_800476B8(c); // 800FC24C
L_800FC250:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC250
  if (!crb(c,1)) { goto L_800FC260; } // 800FC254
  c->r[3]=c->r[30]|c->r[30]; // 800FC258
  c->lr=0x800FC260u; f_80244DC0(c); // 800FC25C
L_800FC260:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC260
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC264
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC268
  c->lr=c->r[0]; // 800FC26C
  c->r[1]=c->r[1]+0x00000010u; // 800FC270
  return; // 800FC274
}

// fn_800FC278
void f_800FC278(Ctx* __restrict c) {
  trace_call(0x800FC278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC278
  c->r[0]=c->lr; // 800FC27C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC280
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC284
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC288
  c->r[30]=c->r[3]|c->r[3]; // 800FC28C
  c->r[31]=c->r[4]|c->r[4]; // 800FC290
  if (crb(c,2)) { goto L_800FC2B0; } // 800FC294
  c->r[4]=0u+0x00000000u; // 800FC298
  c->lr=0x800FC2A0u; f_80048040(c); // 800FC29C
  cmps(c,0,(int32_t)c->r[31],0); // 800FC2A0
  if (!crb(c,1)) { goto L_800FC2B0; } // 800FC2A4
  c->r[3]=c->r[30]|c->r[30]; // 800FC2A8
  c->lr=0x800FC2B0u; f_80244DC0(c); // 800FC2AC
L_800FC2B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC2B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC2B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC2B8
  c->lr=c->r[0]; // 800FC2BC
  c->r[1]=c->r[1]+0x00000010u; // 800FC2C0
  return; // 800FC2C4
}

// fn_800FC2C8
void f_800FC2C8(Ctx* __restrict c) {
  trace_call(0x800FC2C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC2C8
  c->r[0]=c->lr; // 800FC2CC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC2D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC2D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC2D8
  c->r[30]=c->r[3]|c->r[3]; // 800FC2DC
  c->r[31]=c->r[4]|c->r[4]; // 800FC2E0
  if (crb(c,2)) { goto L_800FC300; } // 800FC2E4
  c->r[4]=0u+0x00000000u; // 800FC2E8
  c->lr=0x800FC2F0u; f_80048324(c); // 800FC2EC
  cmps(c,0,(int32_t)c->r[31],0); // 800FC2F0
  if (!crb(c,1)) { goto L_800FC300; } // 800FC2F4
  c->r[3]=c->r[30]|c->r[30]; // 800FC2F8
  c->lr=0x800FC300u; f_80244DC0(c); // 800FC2FC
L_800FC300:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC300
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC304
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC308
  c->lr=c->r[0]; // 800FC30C
  c->r[1]=c->r[1]+0x00000010u; // 800FC310
  return; // 800FC314
}

// fn_800FC318
void f_800FC318(Ctx* __restrict c) {
  trace_call(0x800FC318u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC318
  c->r[0]=c->lr; // 800FC31C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC320
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC324
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC328
  c->r[30]=c->r[3]|c->r[3]; // 800FC32C
  c->r[31]=c->r[4]|c->r[4]; // 800FC330
  if (crb(c,2)) { goto L_800FC350; } // 800FC334
  c->r[4]=0u+0x00000000u; // 800FC338
  c->lr=0x800FC340u; f_80048758(c); // 800FC33C
  cmps(c,0,(int32_t)c->r[31],0); // 800FC340
  if (!crb(c,1)) { goto L_800FC350; } // 800FC344
  c->r[3]=c->r[30]|c->r[30]; // 800FC348
  c->lr=0x800FC350u; f_80244DC0(c); // 800FC34C
L_800FC350:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC350
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC354
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC358
  c->lr=c->r[0]; // 800FC35C
  c->r[1]=c->r[1]+0x00000010u; // 800FC360
  return; // 800FC364
}

// fn_800FC368
void f_800FC368(Ctx* __restrict c) {
  trace_call(0x800FC368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC368
  c->r[0]=c->lr; // 800FC36C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC370
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC374
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC378
  c->r[30]=c->r[3]|c->r[3]; // 800FC37C
  c->r[31]=c->r[4]|c->r[4]; // 800FC380
  if (crb(c,2)) { goto L_800FC3A4; } // 800FC384
  if (crb(c,2)) { goto L_800FC394; } // 800FC388
  c->r[4]=0u+0x00000000u; // 800FC38C
  c->lr=0x800FC394u; f_80048758(c); // 800FC390
L_800FC394:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC394
  if (!crb(c,1)) { goto L_800FC3A4; } // 800FC398
  c->r[3]=c->r[30]|c->r[30]; // 800FC39C
  c->lr=0x800FC3A4u; f_80244DC0(c); // 800FC3A0
L_800FC3A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC3A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC3A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC3AC
  c->lr=c->r[0]; // 800FC3B0
  c->r[1]=c->r[1]+0x00000010u; // 800FC3B4
  return; // 800FC3B8
}

// fn_800FC3BC
void f_800FC3BC(Ctx* __restrict c) {
  trace_call(0x800FC3BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC3BC
  c->r[0]=c->lr; // 800FC3C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FC3C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC3C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC3CC
  c->r[30]=c->r[3]|c->r[3]; // 800FC3D0
  c->r[31]=c->r[4]|c->r[4]; // 800FC3D4
  if (crb(c,2)) { goto L_800FC3F4; } // 800FC3D8
  c->r[4]=0u+0x00000000u; // 800FC3DC
  c->lr=0x800FC3E4u; f_80049038(c); // 800FC3E0
  cmps(c,0,(int32_t)c->r[31],0); // 800FC3E4
  if (!crb(c,1)) { goto L_800FC3F4; } // 800FC3E8
  c->r[3]=c->r[30]|c->r[30]; // 800FC3EC
  c->lr=0x800FC3F4u; f_80244DC0(c); // 800FC3F0
L_800FC3F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC3F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC3F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC3FC
  c->lr=c->r[0]; // 800FC400
  c->r[1]=c->r[1]+0x00000010u; // 800FC404
  return; // 800FC408
}

// fn_800FC40C
void f_800FC40C(Ctx* __restrict c) {
  trace_call(0x800FC40Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC40C
  c->r[0]=c->lr; // 800FC410
  cmps(c,0,(int32_t)c->r[3],0); // 800FC414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC418
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC41C
  c->r[30]=c->r[3]|c->r[3]; // 800FC420
  c->r[31]=c->r[4]|c->r[4]; // 800FC424
  if (crb(c,2)) { goto L_800FC444; } // 800FC428
  c->r[4]=0u+0x00000000u; // 800FC42C
  c->lr=0x800FC434u; f_800494A0(c); // 800FC430
  cmps(c,0,(int32_t)c->r[31],0); // 800FC434
  if (!crb(c,1)) { goto L_800FC444; } // 800FC438
  c->r[3]=c->r[30]|c->r[30]; // 800FC43C
  c->lr=0x800FC444u; f_80244DC0(c); // 800FC440
L_800FC444:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC444
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC448
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC44C
  c->lr=c->r[0]; // 800FC450
  c->r[1]=c->r[1]+0x00000010u; // 800FC454
  return; // 800FC458
}

// fn_800FC45C
void f_800FC45C(Ctx* __restrict c) {
  trace_call(0x800FC45Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC45C
  c->r[0]=c->lr; // 800FC460
  cmps(c,0,(int32_t)c->r[3],0); // 800FC464
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC468
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC46C
  c->r[30]=c->r[3]|c->r[3]; // 800FC470
  c->r[31]=c->r[4]|c->r[4]; // 800FC474
  if (crb(c,2)) { goto L_800FC498; } // 800FC478
  if (crb(c,2)) { goto L_800FC488; } // 800FC47C
  c->r[4]=0u+0x00000000u; // 800FC480
  c->lr=0x800FC488u; f_800494A0(c); // 800FC484
L_800FC488:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC488
  if (!crb(c,1)) { goto L_800FC498; } // 800FC48C
  c->r[3]=c->r[30]|c->r[30]; // 800FC490
  c->lr=0x800FC498u; f_80244DC0(c); // 800FC494
L_800FC498:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC498
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC4A0
  c->lr=c->r[0]; // 800FC4A4
  c->r[1]=c->r[1]+0x00000010u; // 800FC4A8
  return; // 800FC4AC
}

// fn_800FC4B0
void f_800FC4B0(Ctx* __restrict c) {
  trace_call(0x800FC4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC4B0
  c->r[0]=c->lr; // 800FC4B4
  cmps(c,0,(int32_t)c->r[3],0); // 800FC4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC4BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC4C0
  c->r[30]=c->r[3]|c->r[3]; // 800FC4C4
  c->r[31]=c->r[4]|c->r[4]; // 800FC4C8
  if (crb(c,2)) { goto L_800FC4E8; } // 800FC4CC
  c->r[4]=0u+0x00000000u; // 800FC4D0
  c->lr=0x800FC4D8u; f_80049D20(c); // 800FC4D4
  cmps(c,0,(int32_t)c->r[31],0); // 800FC4D8
  if (!crb(c,1)) { goto L_800FC4E8; } // 800FC4DC
  c->r[3]=c->r[30]|c->r[30]; // 800FC4E0
  c->lr=0x800FC4E8u; f_80244DC0(c); // 800FC4E4
L_800FC4E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC4E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC4EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC4F0
  c->lr=c->r[0]; // 800FC4F4
  c->r[1]=c->r[1]+0x00000010u; // 800FC4F8
  return; // 800FC4FC
}

// fn_800FC500
void f_800FC500(Ctx* __restrict c) {
  trace_call(0x800FC500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC500
  c->r[0]=c->lr; // 800FC504
  cmps(c,0,(int32_t)c->r[3],0); // 800FC508
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC50C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC510
  c->r[30]=c->r[3]|c->r[3]; // 800FC514
  c->r[31]=c->r[4]|c->r[4]; // 800FC518
  if (crb(c,2)) { goto L_800FC53C; } // 800FC51C
  if (crb(c,2)) { goto L_800FC52C; } // 800FC520
  c->r[4]=0u+0x00000000u; // 800FC524
  c->lr=0x800FC52Cu; f_80049D20(c); // 800FC528
L_800FC52C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC52C
  if (!crb(c,1)) { goto L_800FC53C; } // 800FC530
  c->r[3]=c->r[30]|c->r[30]; // 800FC534
  c->lr=0x800FC53Cu; f_80244DC0(c); // 800FC538
L_800FC53C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC53C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC540
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC544
  c->lr=c->r[0]; // 800FC548
  c->r[1]=c->r[1]+0x00000010u; // 800FC54C
  return; // 800FC550
}

// fn_800FC554
void f_800FC554(Ctx* __restrict c) {
  trace_call(0x800FC554u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC554
  c->r[0]=c->lr; // 800FC558
  cmps(c,0,(int32_t)c->r[3],0); // 800FC55C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC560
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC564
  c->r[30]=c->r[3]|c->r[3]; // 800FC568
  c->r[31]=c->r[4]|c->r[4]; // 800FC56C
  if (crb(c,2)) { goto L_800FC590; } // 800FC570
  if (crb(c,2)) { goto L_800FC580; } // 800FC574
  c->r[4]=0u+0x00000000u; // 800FC578
  c->lr=0x800FC580u; f_80049D20(c); // 800FC57C
L_800FC580:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC580
  if (!crb(c,1)) { goto L_800FC590; } // 800FC584
  c->r[3]=c->r[30]|c->r[30]; // 800FC588
  c->lr=0x800FC590u; f_80244DC0(c); // 800FC58C
L_800FC590:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC590
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC594
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC598
  c->lr=c->r[0]; // 800FC59C
  c->r[1]=c->r[1]+0x00000010u; // 800FC5A0
  return; // 800FC5A4
}

// fn_800FC5A8
void f_800FC5A8(Ctx* __restrict c) {
  trace_call(0x800FC5A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC5A8
  c->r[0]=c->lr; // 800FC5AC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC5B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC5B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC5B8
  c->r[30]=c->r[3]|c->r[3]; // 800FC5BC
  c->r[31]=c->r[4]|c->r[4]; // 800FC5C0
  if (crb(c,2)) { goto L_800FC5E4; } // 800FC5C4
  if (crb(c,2)) { goto L_800FC5D4; } // 800FC5C8
  c->r[4]=0u+0x00000000u; // 800FC5CC
  c->lr=0x800FC5D4u; f_8003ABE0(c); // 800FC5D0
L_800FC5D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC5D4
  if (!crb(c,1)) { goto L_800FC5E4; } // 800FC5D8
  c->r[3]=c->r[30]|c->r[30]; // 800FC5DC
  c->lr=0x800FC5E4u; f_80244DC0(c); // 800FC5E0
L_800FC5E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC5E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC5E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC5EC
  c->lr=c->r[0]; // 800FC5F0
  c->r[1]=c->r[1]+0x00000010u; // 800FC5F4
  return; // 800FC5F8
}

// fn_800FC5FC
void f_800FC5FC(Ctx* __restrict c) {
  trace_call(0x800FC5FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC5FC
  c->r[0]=c->lr; // 800FC600
  cmps(c,0,(int32_t)c->r[3],0); // 800FC604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC608
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC60C
  c->r[30]=c->r[3]|c->r[3]; // 800FC610
  c->r[31]=c->r[4]|c->r[4]; // 800FC614
  if (crb(c,2)) { goto L_800FC638; } // 800FC618
  if (crb(c,2)) { goto L_800FC628; } // 800FC61C
  c->r[4]=0u+0x00000000u; // 800FC620
  c->lr=0x800FC628u; f_8003ABE0(c); // 800FC624
L_800FC628:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC628
  if (!crb(c,1)) { goto L_800FC638; } // 800FC62C
  c->r[3]=c->r[30]|c->r[30]; // 800FC630
  c->lr=0x800FC638u; f_80244DC0(c); // 800FC634
L_800FC638:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC63C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC640
  c->lr=c->r[0]; // 800FC644
  c->r[1]=c->r[1]+0x00000010u; // 800FC648
  return; // 800FC64C
}

// fn_800FC650
void f_800FC650(Ctx* __restrict c) {
  trace_call(0x800FC650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC650
  c->r[0]=c->lr; // 800FC654
  cmps(c,0,(int32_t)c->r[3],0); // 800FC658
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC65C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC660
  c->r[30]=c->r[3]|c->r[3]; // 800FC664
  c->r[31]=c->r[4]|c->r[4]; // 800FC668
  if (crb(c,2)) { goto L_800FC68C; } // 800FC66C
  if (crb(c,2)) { goto L_800FC67C; } // 800FC670
  c->r[4]=0u+0x00000000u; // 800FC674
  c->lr=0x800FC67Cu; f_8003ABE0(c); // 800FC678
L_800FC67C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC67C
  if (!crb(c,1)) { goto L_800FC68C; } // 800FC680
  c->r[3]=c->r[30]|c->r[30]; // 800FC684
  c->lr=0x800FC68Cu; f_80244DC0(c); // 800FC688
L_800FC68C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC68C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC690
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC694
  c->lr=c->r[0]; // 800FC698
  c->r[1]=c->r[1]+0x00000010u; // 800FC69C
  return; // 800FC6A0
}

// fn_800FC6A4
void f_800FC6A4(Ctx* __restrict c) {
  trace_call(0x800FC6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC6A4
  c->r[0]=c->lr; // 800FC6A8
  cmps(c,0,(int32_t)c->r[3],0); // 800FC6AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC6B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC6B4
  c->r[30]=c->r[3]|c->r[3]; // 800FC6B8
  c->r[31]=c->r[4]|c->r[4]; // 800FC6BC
  if (crb(c,2)) { goto L_800FC6E0; } // 800FC6C0
  if (crb(c,2)) { goto L_800FC6D0; } // 800FC6C4
  c->r[4]=0u+0x00000000u; // 800FC6C8
  c->lr=0x800FC6D0u; f_8003ABE0(c); // 800FC6CC
L_800FC6D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC6D0
  if (!crb(c,1)) { goto L_800FC6E0; } // 800FC6D4
  c->r[3]=c->r[30]|c->r[30]; // 800FC6D8
  c->lr=0x800FC6E0u; f_80244DC0(c); // 800FC6DC
L_800FC6E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC6E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC6E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC6E8
  c->lr=c->r[0]; // 800FC6EC
  c->r[1]=c->r[1]+0x00000010u; // 800FC6F0
  return; // 800FC6F4
}

// fn_800FC6F8
void f_800FC6F8(Ctx* __restrict c) {
  trace_call(0x800FC6F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC6F8
  c->r[0]=c->lr; // 800FC6FC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC700
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC704
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC708
  c->r[30]=c->r[3]|c->r[3]; // 800FC70C
  c->r[31]=c->r[4]|c->r[4]; // 800FC710
  if (crb(c,2)) { goto L_800FC730; } // 800FC714
  c->r[4]=0u+0x00000000u; // 800FC718
  c->lr=0x800FC720u; f_8004BCEC(c); // 800FC71C
  cmps(c,0,(int32_t)c->r[31],0); // 800FC720
  if (!crb(c,1)) { goto L_800FC730; } // 800FC724
  c->r[3]=c->r[30]|c->r[30]; // 800FC728
  c->lr=0x800FC730u; f_80244DC0(c); // 800FC72C
L_800FC730:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC730
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC734
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC738
  c->lr=c->r[0]; // 800FC73C
  c->r[1]=c->r[1]+0x00000010u; // 800FC740
  return; // 800FC744
}

// fn_800FC748
void f_800FC748(Ctx* __restrict c) {
  trace_call(0x800FC748u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC748
  c->r[0]=c->lr; // 800FC74C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC750
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC754
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC758
  c->r[30]=c->r[3]|c->r[3]; // 800FC75C
  c->r[31]=c->r[4]|c->r[4]; // 800FC760
  if (crb(c,2)) { goto L_800FC780; } // 800FC764
  c->r[4]=0u+0x00000000u; // 800FC768
  c->lr=0x800FC770u; f_8004C338(c); // 800FC76C
  cmps(c,0,(int32_t)c->r[31],0); // 800FC770
  if (!crb(c,1)) { goto L_800FC780; } // 800FC774
  c->r[3]=c->r[30]|c->r[30]; // 800FC778
  c->lr=0x800FC780u; f_80244DC0(c); // 800FC77C
L_800FC780:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC780
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC784
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC788
  c->lr=c->r[0]; // 800FC78C
  c->r[1]=c->r[1]+0x00000010u; // 800FC790
  return; // 800FC794
}

// fn_800FC798
void f_800FC798(Ctx* __restrict c) {
  trace_call(0x800FC798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC798
  c->r[0]=c->lr; // 800FC79C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC7A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC7A8
  c->r[30]=c->r[3]|c->r[3]; // 800FC7AC
  c->r[31]=c->r[4]|c->r[4]; // 800FC7B0
  if (crb(c,2)) { goto L_800FC7D0; } // 800FC7B4
  c->r[4]=0u+0x00000000u; // 800FC7B8
  c->lr=0x800FC7C0u; f_8004CDEC(c); // 800FC7BC
  cmps(c,0,(int32_t)c->r[31],0); // 800FC7C0
  if (!crb(c,1)) { goto L_800FC7D0; } // 800FC7C4
  c->r[3]=c->r[30]|c->r[30]; // 800FC7C8
  c->lr=0x800FC7D0u; f_80244DC0(c); // 800FC7CC
L_800FC7D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC7D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC7D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC7D8
  c->lr=c->r[0]; // 800FC7DC
  c->r[1]=c->r[1]+0x00000010u; // 800FC7E0
  return; // 800FC7E4
}

// fn_800FC7E8
void f_800FC7E8(Ctx* __restrict c) {
  trace_call(0x800FC7E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC7E8
  c->r[0]=c->lr; // 800FC7EC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC7F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC7F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC7F8
  c->r[30]=c->r[3]|c->r[3]; // 800FC7FC
  c->r[31]=c->r[4]|c->r[4]; // 800FC800
  if (crb(c,2)) { goto L_800FC820; } // 800FC804
  c->r[4]=0u+0x00000000u; // 800FC808
  c->lr=0x800FC810u; f_8004D598(c); // 800FC80C
  cmps(c,0,(int32_t)c->r[31],0); // 800FC810
  if (!crb(c,1)) { goto L_800FC820; } // 800FC814
  c->r[3]=c->r[30]|c->r[30]; // 800FC818
  c->lr=0x800FC820u; f_80244DC0(c); // 800FC81C
L_800FC820:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC820
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC824
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC828
  c->lr=c->r[0]; // 800FC82C
  c->r[1]=c->r[1]+0x00000010u; // 800FC830
  return; // 800FC834
}

// fn_800FC838
void f_800FC838(Ctx* __restrict c) {
  trace_call(0x800FC838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC838
  c->r[0]=c->lr; // 800FC83C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC844
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC848
  c->r[30]=c->r[3]|c->r[3]; // 800FC84C
  c->r[31]=c->r[4]|c->r[4]; // 800FC850
  if (crb(c,2)) { goto L_800FC870; } // 800FC854
  c->r[4]=0u+0x00000000u; // 800FC858
  c->lr=0x800FC860u; f_8004DDD4(c); // 800FC85C
  cmps(c,0,(int32_t)c->r[31],0); // 800FC860
  if (!crb(c,1)) { goto L_800FC870; } // 800FC864
  c->r[3]=c->r[30]|c->r[30]; // 800FC868
  c->lr=0x800FC870u; f_80244DC0(c); // 800FC86C
L_800FC870:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC870
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC874
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC878
  c->lr=c->r[0]; // 800FC87C
  c->r[1]=c->r[1]+0x00000010u; // 800FC880
  return; // 800FC884
}

// fn_800FC888
void f_800FC888(Ctx* __restrict c) {
  trace_call(0x800FC888u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC888
  c->r[0]=c->lr; // 800FC88C
  cmps(c,0,(int32_t)c->r[3],0); // 800FC890
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC894
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC898
  c->r[30]=c->r[3]|c->r[3]; // 800FC89C
  c->r[31]=c->r[4]|c->r[4]; // 800FC8A0
  if (crb(c,2)) { goto L_800FC8C4; } // 800FC8A4
  if (crb(c,2)) { goto L_800FC8B4; } // 800FC8A8
  c->r[4]=0u+0x00000000u; // 800FC8AC
  c->lr=0x800FC8B4u; f_8003ABE0(c); // 800FC8B0
L_800FC8B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC8B4
  if (!crb(c,1)) { goto L_800FC8C4; } // 800FC8B8
  c->r[3]=c->r[30]|c->r[30]; // 800FC8BC
  c->lr=0x800FC8C4u; f_80244DC0(c); // 800FC8C0
L_800FC8C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC8C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC8C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC8CC
  c->lr=c->r[0]; // 800FC8D0
  c->r[1]=c->r[1]+0x00000010u; // 800FC8D4
  return; // 800FC8D8
}

// fn_800FC8DC
void f_800FC8DC(Ctx* __restrict c) {
  trace_call(0x800FC8DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC8DC
  c->r[0]=c->lr; // 800FC8E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FC8E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC8E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC8EC
  c->r[30]=c->r[3]|c->r[3]; // 800FC8F0
  c->r[31]=c->r[4]|c->r[4]; // 800FC8F4
  if (crb(c,2)) { goto L_800FC918; } // 800FC8F8
  if (crb(c,2)) { goto L_800FC908; } // 800FC8FC
  c->r[4]=0u+0x00000000u; // 800FC900
  c->lr=0x800FC908u; f_8003ABE0(c); // 800FC904
L_800FC908:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC908
  if (!crb(c,1)) { goto L_800FC918; } // 800FC90C
  c->r[3]=c->r[30]|c->r[30]; // 800FC910
  c->lr=0x800FC918u; f_80244DC0(c); // 800FC914
L_800FC918:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC918
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC91C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC920
  c->lr=c->r[0]; // 800FC924
  c->r[1]=c->r[1]+0x00000010u; // 800FC928
  return; // 800FC92C
}

// fn_800FC930
void f_800FC930(Ctx* __restrict c) {
  trace_call(0x800FC930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC930
  c->r[0]=c->lr; // 800FC934
  cmps(c,0,(int32_t)c->r[3],0); // 800FC938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC93C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC940
  c->r[30]=c->r[3]|c->r[3]; // 800FC944
  c->r[31]=c->r[4]|c->r[4]; // 800FC948
  if (crb(c,2)) { goto L_800FC96C; } // 800FC94C
  if (crb(c,2)) { goto L_800FC95C; } // 800FC950
  c->r[4]=0u+0x00000000u; // 800FC954
  c->lr=0x800FC95Cu; f_8003ABE0(c); // 800FC958
L_800FC95C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC95C
  if (!crb(c,1)) { goto L_800FC96C; } // 800FC960
  c->r[3]=c->r[30]|c->r[30]; // 800FC964
  c->lr=0x800FC96Cu; f_80244DC0(c); // 800FC968
L_800FC96C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC96C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC970
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC974
  c->lr=c->r[0]; // 800FC978
  c->r[1]=c->r[1]+0x00000010u; // 800FC97C
  return; // 800FC980
}

// fn_800FC984
void f_800FC984(Ctx* __restrict c) {
  trace_call(0x800FC984u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC984
  c->r[0]=c->lr; // 800FC988
  cmps(c,0,(int32_t)c->r[3],0); // 800FC98C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC990
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC994
  c->r[30]=c->r[3]|c->r[3]; // 800FC998
  c->r[31]=c->r[4]|c->r[4]; // 800FC99C
  if (crb(c,2)) { goto L_800FC9C0; } // 800FC9A0
  if (crb(c,2)) { goto L_800FC9B0; } // 800FC9A4
  c->r[4]=0u+0x00000000u; // 800FC9A8
  c->lr=0x800FC9B0u; f_8003ABE0(c); // 800FC9AC
L_800FC9B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FC9B0
  if (!crb(c,1)) { goto L_800FC9C0; } // 800FC9B4
  c->r[3]=c->r[30]|c->r[30]; // 800FC9B8
  c->lr=0x800FC9C0u; f_80244DC0(c); // 800FC9BC
L_800FC9C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FC9C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FC9C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FC9C8
  c->lr=c->r[0]; // 800FC9CC
  c->r[1]=c->r[1]+0x00000010u; // 800FC9D0
  return; // 800FC9D4
}

// fn_800FC9D8
void f_800FC9D8(Ctx* __restrict c) {
  trace_call(0x800FC9D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC9D8
  c->r[0]=c->lr; // 800FC9DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FC9E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FC9E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FC9E8
  c->r[30]=c->r[3]|c->r[3]; // 800FC9EC
  c->r[31]=c->r[4]|c->r[4]; // 800FC9F0
  if (crb(c,2)) { goto L_800FCA10; } // 800FC9F4
  c->r[4]=0u+0x00000000u; // 800FC9F8
  c->lr=0x800FCA00u; f_80050398(c); // 800FC9FC
  cmps(c,0,(int32_t)c->r[31],0); // 800FCA00
  if (!crb(c,1)) { goto L_800FCA10; } // 800FCA04
  c->r[3]=c->r[30]|c->r[30]; // 800FCA08
  c->lr=0x800FCA10u; f_80244DC0(c); // 800FCA0C
L_800FCA10:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCA10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCA14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCA18
  c->lr=c->r[0]; // 800FCA1C
  c->r[1]=c->r[1]+0x00000010u; // 800FCA20
  return; // 800FCA24
}

// fn_800FCA28
void f_800FCA28(Ctx* __restrict c) {
  trace_call(0x800FCA28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCA28
  c->r[0]=c->lr; // 800FCA2C
  cmps(c,0,(int32_t)c->r[3],0); // 800FCA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCA34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCA38
  c->r[30]=c->r[3]|c->r[3]; // 800FCA3C
  c->r[31]=c->r[4]|c->r[4]; // 800FCA40
  if (crb(c,2)) { goto L_800FCA60; } // 800FCA44
  c->r[4]=0u+0x00000000u; // 800FCA48
  c->lr=0x800FCA50u; f_80050638(c); // 800FCA4C
  cmps(c,0,(int32_t)c->r[31],0); // 800FCA50
  if (!crb(c,1)) { goto L_800FCA60; } // 800FCA54
  c->r[3]=c->r[30]|c->r[30]; // 800FCA58
  c->lr=0x800FCA60u; f_80244DC0(c); // 800FCA5C
L_800FCA60:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCA60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCA64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCA68
  c->lr=c->r[0]; // 800FCA6C
  c->r[1]=c->r[1]+0x00000010u; // 800FCA70
  return; // 800FCA74
}

// fn_800FCA78
void f_800FCA78(Ctx* __restrict c) {
  trace_call(0x800FCA78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCA78
  c->r[0]=c->lr; // 800FCA7C
  cmps(c,0,(int32_t)c->r[3],0); // 800FCA80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCA84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCA88
  c->r[30]=c->r[3]|c->r[3]; // 800FCA8C
  c->r[31]=c->r[4]|c->r[4]; // 800FCA90
  if (crb(c,2)) { goto L_800FCAB0; } // 800FCA94
  c->r[4]=0u+0x00000000u; // 800FCA98
  c->lr=0x800FCAA0u; f_80051048(c); // 800FCA9C
  cmps(c,0,(int32_t)c->r[31],0); // 800FCAA0
  if (!crb(c,1)) { goto L_800FCAB0; } // 800FCAA4
  c->r[3]=c->r[30]|c->r[30]; // 800FCAA8
  c->lr=0x800FCAB0u; f_80244DC0(c); // 800FCAAC
L_800FCAB0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCAB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCAB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCAB8
  c->lr=c->r[0]; // 800FCABC
  c->r[1]=c->r[1]+0x00000010u; // 800FCAC0
  return; // 800FCAC4
}

// fn_800FCAC8
void f_800FCAC8(Ctx* __restrict c) {
  trace_call(0x800FCAC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCAC8
  c->r[0]=c->lr; // 800FCACC
  cmps(c,0,(int32_t)c->r[3],0); // 800FCAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCAD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCAD8
  c->r[30]=c->r[3]|c->r[3]; // 800FCADC
  c->r[31]=c->r[4]|c->r[4]; // 800FCAE0
  if (crb(c,2)) { goto L_800FCB00; } // 800FCAE4
  c->r[4]=0u+0x00000000u; // 800FCAE8
  c->lr=0x800FCAF0u; f_800512E8(c); // 800FCAEC
  cmps(c,0,(int32_t)c->r[31],0); // 800FCAF0
  if (!crb(c,1)) { goto L_800FCB00; } // 800FCAF4
  c->r[3]=c->r[30]|c->r[30]; // 800FCAF8
  c->lr=0x800FCB00u; f_80244DC0(c); // 800FCAFC
L_800FCB00:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCB00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCB04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCB08
  c->lr=c->r[0]; // 800FCB0C
  c->r[1]=c->r[1]+0x00000010u; // 800FCB10
  return; // 800FCB14
}

// fn_800FCB18
void f_800FCB18(Ctx* __restrict c) {
  trace_call(0x800FCB18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCB18
  c->r[0]=c->lr; // 800FCB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800FCB20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCB24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCB28
  c->r[30]=c->r[3]|c->r[3]; // 800FCB2C
  c->r[31]=c->r[4]|c->r[4]; // 800FCB30
  if (crb(c,2)) { goto L_800FCB54; } // 800FCB34
  if (crb(c,2)) { goto L_800FCB44; } // 800FCB38
  c->r[4]=0u+0x00000000u; // 800FCB3C
  c->lr=0x800FCB44u; f_802B1180(c); // 800FCB40
L_800FCB44:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCB44
  if (!crb(c,1)) { goto L_800FCB54; } // 800FCB48
  c->r[3]=c->r[30]|c->r[30]; // 800FCB4C
  c->lr=0x800FCB54u; f_80244DC0(c); // 800FCB50
L_800FCB54:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCB54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCB58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCB5C
  c->lr=c->r[0]; // 800FCB60
  c->r[1]=c->r[1]+0x00000010u; // 800FCB64
  return; // 800FCB68
}

// fn_800FCB6C
void f_800FCB6C(Ctx* __restrict c) {
  trace_call(0x800FCB6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCB6C
  c->r[0]=c->lr; // 800FCB70
  cmps(c,0,(int32_t)c->r[3],0); // 800FCB74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCB78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCB7C
  c->r[30]=c->r[3]|c->r[3]; // 800FCB80
  c->r[31]=c->r[4]|c->r[4]; // 800FCB84
  if (crb(c,2)) { goto L_800FCBA8; } // 800FCB88
  if (crb(c,2)) { goto L_800FCB98; } // 800FCB8C
  c->r[4]=0u+0x00000000u; // 800FCB90
  c->lr=0x800FCB98u; f_802B1180(c); // 800FCB94
L_800FCB98:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCB98
  if (!crb(c,1)) { goto L_800FCBA8; } // 800FCB9C
  c->r[3]=c->r[30]|c->r[30]; // 800FCBA0
  c->lr=0x800FCBA8u; f_80244DC0(c); // 800FCBA4
L_800FCBA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCBA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCBAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCBB0
  c->lr=c->r[0]; // 800FCBB4
  c->r[1]=c->r[1]+0x00000010u; // 800FCBB8
  return; // 800FCBBC
}

// fn_800FCBC0
void f_800FCBC0(Ctx* __restrict c) {
  trace_call(0x800FCBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCBC0
  c->r[0]=c->lr; // 800FCBC4
  cmps(c,0,(int32_t)c->r[3],0); // 800FCBC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCBCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCBD0
  c->r[30]=c->r[3]|c->r[3]; // 800FCBD4
  c->r[31]=c->r[4]|c->r[4]; // 800FCBD8
  if (crb(c,2)) { goto L_800FCBF8; } // 800FCBDC
  c->r[4]=0u+0x00000000u; // 800FCBE0
  c->lr=0x800FCBE8u; f_8005204C(c); // 800FCBE4
  cmps(c,0,(int32_t)c->r[31],0); // 800FCBE8
  if (!crb(c,1)) { goto L_800FCBF8; } // 800FCBEC
  c->r[3]=c->r[30]|c->r[30]; // 800FCBF0
  c->lr=0x800FCBF8u; f_80244DC0(c); // 800FCBF4
L_800FCBF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCBF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCBFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCC00
  c->lr=c->r[0]; // 800FCC04
  c->r[1]=c->r[1]+0x00000010u; // 800FCC08
  return; // 800FCC0C
}

// fn_800FCC10
void f_800FCC10(Ctx* __restrict c) {
  trace_call(0x800FCC10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCC10
  c->r[0]=c->lr; // 800FCC14
  cmps(c,0,(int32_t)c->r[3],0); // 800FCC18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCC1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCC20
  c->r[30]=c->r[3]|c->r[3]; // 800FCC24
  c->r[31]=c->r[4]|c->r[4]; // 800FCC28
  if (crb(c,2)) { goto L_800FCC48; } // 800FCC2C
  c->r[4]=0u+0x00000000u; // 800FCC30
  c->lr=0x800FCC38u; f_80052348(c); // 800FCC34
  cmps(c,0,(int32_t)c->r[31],0); // 800FCC38
  if (!crb(c,1)) { goto L_800FCC48; } // 800FCC3C
  c->r[3]=c->r[30]|c->r[30]; // 800FCC40
  c->lr=0x800FCC48u; f_80244DC0(c); // 800FCC44
L_800FCC48:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCC48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCC4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCC50
  c->lr=c->r[0]; // 800FCC54
  c->r[1]=c->r[1]+0x00000010u; // 800FCC58
  return; // 800FCC5C
}

// fn_800FCC60
void f_800FCC60(Ctx* __restrict c) {
  trace_call(0x800FCC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCC60
  c->r[0]=c->lr; // 800FCC64
  cmps(c,0,(int32_t)c->r[3],0); // 800FCC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCC6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCC70
  c->r[30]=c->r[3]|c->r[3]; // 800FCC74
  c->r[31]=c->r[4]|c->r[4]; // 800FCC78
  if (crb(c,2)) { goto L_800FCC98; } // 800FCC7C
  c->r[4]=0u+0x00000000u; // 800FCC80
  c->lr=0x800FCC88u; f_8005261C(c); // 800FCC84
  cmps(c,0,(int32_t)c->r[31],0); // 800FCC88
  if (!crb(c,1)) { goto L_800FCC98; } // 800FCC8C
  c->r[3]=c->r[30]|c->r[30]; // 800FCC90
  c->lr=0x800FCC98u; f_80244DC0(c); // 800FCC94
L_800FCC98:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCC98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCC9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCCA0
  c->lr=c->r[0]; // 800FCCA4
  c->r[1]=c->r[1]+0x00000010u; // 800FCCA8
  return; // 800FCCAC
}

// fn_800FCCB0
void f_800FCCB0(Ctx* __restrict c) {
  trace_call(0x800FCCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCCB0
  c->r[0]=c->lr; // 800FCCB4
  cmps(c,0,(int32_t)c->r[3],0); // 800FCCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCCBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCCC0
  c->r[30]=c->r[3]|c->r[3]; // 800FCCC4
  c->r[31]=c->r[4]|c->r[4]; // 800FCCC8
  if (crb(c,2)) { goto L_800FCCE8; } // 800FCCCC
  c->r[4]=0u+0x00000000u; // 800FCCD0
  c->lr=0x800FCCD8u; f_800528FC(c); // 800FCCD4
  cmps(c,0,(int32_t)c->r[31],0); // 800FCCD8
  if (!crb(c,1)) { goto L_800FCCE8; } // 800FCCDC
  c->r[3]=c->r[30]|c->r[30]; // 800FCCE0
  c->lr=0x800FCCE8u; f_80244DC0(c); // 800FCCE4
L_800FCCE8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCCE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCCEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCCF0
  c->lr=c->r[0]; // 800FCCF4
  c->r[1]=c->r[1]+0x00000010u; // 800FCCF8
  return; // 800FCCFC
}

// fn_800FCD00
void f_800FCD00(Ctx* __restrict c) {
  trace_call(0x800FCD00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCD00
  c->r[0]=c->lr; // 800FCD04
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCD0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCD10
  c->r[30]=c->r[3]|c->r[3]; // 800FCD14
  c->r[31]=c->r[4]|c->r[4]; // 800FCD18
  if (crb(c,2)) { goto L_800FCD38; } // 800FCD1C
  c->r[4]=0u+0x00000000u; // 800FCD20
  c->lr=0x800FCD28u; f_80052BE0(c); // 800FCD24
  cmps(c,0,(int32_t)c->r[31],0); // 800FCD28
  if (!crb(c,1)) { goto L_800FCD38; } // 800FCD2C
  c->r[3]=c->r[30]|c->r[30]; // 800FCD30
  c->lr=0x800FCD38u; f_80244DC0(c); // 800FCD34
L_800FCD38:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCD38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCD3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCD40
  c->lr=c->r[0]; // 800FCD44
  c->r[1]=c->r[1]+0x00000010u; // 800FCD48
  return; // 800FCD4C
}

// fn_800FCD50
void f_800FCD50(Ctx* __restrict c) {
  trace_call(0x800FCD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCD50
  c->r[0]=c->lr; // 800FCD54
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCD5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCD60
  c->r[30]=c->r[3]|c->r[3]; // 800FCD64
  c->r[31]=c->r[4]|c->r[4]; // 800FCD68
  if (crb(c,2)) { goto L_800FCD8C; } // 800FCD6C
  if (crb(c,2)) { goto L_800FCD7C; } // 800FCD70
  c->r[4]=0u+0x00000000u; // 800FCD74
  c->lr=0x800FCD7Cu; f_802B1180(c); // 800FCD78
L_800FCD7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCD7C
  if (!crb(c,1)) { goto L_800FCD8C; } // 800FCD80
  c->r[3]=c->r[30]|c->r[30]; // 800FCD84
  c->lr=0x800FCD8Cu; f_80244DC0(c); // 800FCD88
L_800FCD8C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCD8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCD90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCD94
  c->lr=c->r[0]; // 800FCD98
  c->r[1]=c->r[1]+0x00000010u; // 800FCD9C
  return; // 800FCDA0
}

// fn_800FCDA4
void f_800FCDA4(Ctx* __restrict c) {
  trace_call(0x800FCDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCDA4
  c->r[0]=c->lr; // 800FCDA8
  cmps(c,0,(int32_t)c->r[3],0); // 800FCDAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCDB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCDB4
  c->r[30]=c->r[3]|c->r[3]; // 800FCDB8
  c->r[31]=c->r[4]|c->r[4]; // 800FCDBC
  if (crb(c,2)) { goto L_800FCDE0; } // 800FCDC0
  if (crb(c,2)) { goto L_800FCDD0; } // 800FCDC4
  c->r[4]=0u+0x00000000u; // 800FCDC8
  c->lr=0x800FCDD0u; f_802B1180(c); // 800FCDCC
L_800FCDD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCDD0
  if (!crb(c,1)) { goto L_800FCDE0; } // 800FCDD4
  c->r[3]=c->r[30]|c->r[30]; // 800FCDD8
  c->lr=0x800FCDE0u; f_80244DC0(c); // 800FCDDC
L_800FCDE0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCDE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCDE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCDE8
  c->lr=c->r[0]; // 800FCDEC
  c->r[1]=c->r[1]+0x00000010u; // 800FCDF0
  return; // 800FCDF4
}

// fn_800FCDF8
void f_800FCDF8(Ctx* __restrict c) {
  trace_call(0x800FCDF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCDF8
  c->r[0]=c->lr; // 800FCDFC
  cmps(c,0,(int32_t)c->r[3],0); // 800FCE00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCE04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCE08
  c->r[30]=c->r[3]|c->r[3]; // 800FCE0C
  c->r[31]=c->r[4]|c->r[4]; // 800FCE10
  if (crb(c,2)) { goto L_800FCE34; } // 800FCE14
  if (crb(c,2)) { goto L_800FCE24; } // 800FCE18
  c->r[4]=0u+0x00000000u; // 800FCE1C
  c->lr=0x800FCE24u; f_802B1180(c); // 800FCE20
L_800FCE24:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCE24
  if (!crb(c,1)) { goto L_800FCE34; } // 800FCE28
  c->r[3]=c->r[30]|c->r[30]; // 800FCE2C
  c->lr=0x800FCE34u; f_80244DC0(c); // 800FCE30
L_800FCE34:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCE34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCE38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCE3C
  c->lr=c->r[0]; // 800FCE40
  c->r[1]=c->r[1]+0x00000010u; // 800FCE44
  return; // 800FCE48
}

// fn_800FCE4C
void f_800FCE4C(Ctx* __restrict c) {
  trace_call(0x800FCE4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCE4C
  c->r[0]=c->lr; // 800FCE50
  cmps(c,0,(int32_t)c->r[3],0); // 800FCE54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCE58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCE5C
  c->r[30]=c->r[3]|c->r[3]; // 800FCE60
  c->r[31]=c->r[4]|c->r[4]; // 800FCE64
  if (crb(c,2)) { goto L_800FCE88; } // 800FCE68
  if (crb(c,2)) { goto L_800FCE78; } // 800FCE6C
  c->r[4]=0u+0x00000000u; // 800FCE70
  c->lr=0x800FCE78u; f_802B1180(c); // 800FCE74
L_800FCE78:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCE78
  if (!crb(c,1)) { goto L_800FCE88; } // 800FCE7C
  c->r[3]=c->r[30]|c->r[30]; // 800FCE80
  c->lr=0x800FCE88u; f_80244DC0(c); // 800FCE84
L_800FCE88:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCE88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCE8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCE90
  c->lr=c->r[0]; // 800FCE94
  c->r[1]=c->r[1]+0x00000010u; // 800FCE98
  return; // 800FCE9C
}

// fn_800FCEA0
void f_800FCEA0(Ctx* __restrict c) {
  trace_call(0x800FCEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCEA0
  c->r[0]=c->lr; // 800FCEA4
  cmps(c,0,(int32_t)c->r[3],0); // 800FCEA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCEAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCEB0
  c->r[30]=c->r[3]|c->r[3]; // 800FCEB4
  c->r[31]=c->r[4]|c->r[4]; // 800FCEB8
  if (crb(c,2)) { goto L_800FCED8; } // 800FCEBC
  c->r[4]=0u+0x00000000u; // 800FCEC0
  c->lr=0x800FCEC8u; f_80053CC0(c); // 800FCEC4
  cmps(c,0,(int32_t)c->r[31],0); // 800FCEC8
  if (!crb(c,1)) { goto L_800FCED8; } // 800FCECC
  c->r[3]=c->r[30]|c->r[30]; // 800FCED0
  c->lr=0x800FCED8u; f_80244DC0(c); // 800FCED4
L_800FCED8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCED8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCEDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCEE0
  c->lr=c->r[0]; // 800FCEE4
  c->r[1]=c->r[1]+0x00000010u; // 800FCEE8
  return; // 800FCEEC
}

// fn_800FCEF0
void f_800FCEF0(Ctx* __restrict c) {
  trace_call(0x800FCEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCEF0
  c->r[0]=c->lr; // 800FCEF4
  cmps(c,0,(int32_t)c->r[3],0); // 800FCEF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCEFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCF00
  c->r[30]=c->r[3]|c->r[3]; // 800FCF04
  c->r[31]=c->r[4]|c->r[4]; // 800FCF08
  if (crb(c,2)) { goto L_800FCF28; } // 800FCF0C
  c->r[4]=0u+0x00000000u; // 800FCF10
  c->lr=0x800FCF18u; f_80053F60(c); // 800FCF14
  cmps(c,0,(int32_t)c->r[31],0); // 800FCF18
  if (!crb(c,1)) { goto L_800FCF28; } // 800FCF1C
  c->r[3]=c->r[30]|c->r[30]; // 800FCF20
  c->lr=0x800FCF28u; f_80244DC0(c); // 800FCF24
L_800FCF28:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCF28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCF2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCF30
  c->lr=c->r[0]; // 800FCF34
  c->r[1]=c->r[1]+0x00000010u; // 800FCF38
  return; // 800FCF3C
}

// fn_800FCF40
void f_800FCF40(Ctx* __restrict c) {
  trace_call(0x800FCF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCF40
  c->r[0]=c->lr; // 800FCF44
  cmps(c,0,(int32_t)c->r[3],0); // 800FCF48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCF4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCF50
  c->r[30]=c->r[3]|c->r[3]; // 800FCF54
  c->r[31]=c->r[4]|c->r[4]; // 800FCF58
  if (crb(c,2)) { goto L_800FCF7C; } // 800FCF5C
  if (crb(c,2)) { goto L_800FCF6C; } // 800FCF60
  c->r[4]=0u+0x00000000u; // 800FCF64
  c->lr=0x800FCF6Cu; f_802B1180(c); // 800FCF68
L_800FCF6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCF6C
  if (!crb(c,1)) { goto L_800FCF7C; } // 800FCF70
  c->r[3]=c->r[30]|c->r[30]; // 800FCF74
  c->lr=0x800FCF7Cu; f_80244DC0(c); // 800FCF78
L_800FCF7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCF7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCF80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCF84
  c->lr=c->r[0]; // 800FCF88
  c->r[1]=c->r[1]+0x00000010u; // 800FCF8C
  return; // 800FCF90
}

// fn_800FCF94
void f_800FCF94(Ctx* __restrict c) {
  trace_call(0x800FCF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCF94
  c->r[0]=c->lr; // 800FCF98
  cmps(c,0,(int32_t)c->r[3],0); // 800FCF9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCFA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCFA4
  c->r[30]=c->r[3]|c->r[3]; // 800FCFA8
  c->r[31]=c->r[4]|c->r[4]; // 800FCFAC
  if (crb(c,2)) { goto L_800FCFD0; } // 800FCFB0
  if (crb(c,2)) { goto L_800FCFC0; } // 800FCFB4
  c->r[4]=0u+0x00000000u; // 800FCFB8
  c->lr=0x800FCFC0u; f_802B1180(c); // 800FCFBC
L_800FCFC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FCFC0
  if (!crb(c,1)) { goto L_800FCFD0; } // 800FCFC4
  c->r[3]=c->r[30]|c->r[30]; // 800FCFC8
  c->lr=0x800FCFD0u; f_80244DC0(c); // 800FCFCC
L_800FCFD0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FCFD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FCFD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCFD8
  c->lr=c->r[0]; // 800FCFDC
  c->r[1]=c->r[1]+0x00000010u; // 800FCFE0
  return; // 800FCFE4
}

// fn_800FCFE8
void f_800FCFE8(Ctx* __restrict c) {
  trace_call(0x800FCFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCFE8
  c->r[0]=c->lr; // 800FCFEC
  cmps(c,0,(int32_t)c->r[3],0); // 800FCFF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCFF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FCFF8
  c->r[30]=c->r[3]|c->r[3]; // 800FCFFC
  c->r[31]=c->r[4]|c->r[4]; // 800FD000
  if (crb(c,2)) { goto L_800FD024; } // 800FD004
  if (crb(c,2)) { goto L_800FD014; } // 800FD008
  c->r[4]=0u+0x00000000u; // 800FD00C
  c->lr=0x800FD014u; f_802B1180(c); // 800FD010
L_800FD014:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD014
  if (!crb(c,1)) { goto L_800FD024; } // 800FD018
  c->r[3]=c->r[30]|c->r[30]; // 800FD01C
  c->lr=0x800FD024u; f_80244DC0(c); // 800FD020
L_800FD024:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD024
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD028
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD02C
  c->lr=c->r[0]; // 800FD030
  c->r[1]=c->r[1]+0x00000010u; // 800FD034
  return; // 800FD038
}

// fn_800FD03C
void f_800FD03C(Ctx* __restrict c) {
  trace_call(0x800FD03Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD03C
  c->r[0]=c->lr; // 800FD040
  cmps(c,0,(int32_t)c->r[3],0); // 800FD044
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD048
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD04C
  c->r[30]=c->r[3]|c->r[3]; // 800FD050
  c->r[31]=c->r[4]|c->r[4]; // 800FD054
  if (crb(c,2)) { goto L_800FD078; } // 800FD058
  if (crb(c,2)) { goto L_800FD068; } // 800FD05C
  c->r[4]=0u+0x00000000u; // 800FD060
  c->lr=0x800FD068u; f_802B1180(c); // 800FD064
L_800FD068:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD068
  if (!crb(c,1)) { goto L_800FD078; } // 800FD06C
  c->r[3]=c->r[30]|c->r[30]; // 800FD070
  c->lr=0x800FD078u; f_80244DC0(c); // 800FD074
L_800FD078:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD078
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD07C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD080
  c->lr=c->r[0]; // 800FD084
  c->r[1]=c->r[1]+0x00000010u; // 800FD088
  return; // 800FD08C
}

// fn_800FD090
void f_800FD090(Ctx* __restrict c) {
  trace_call(0x800FD090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD090
  c->r[0]=c->lr; // 800FD094
  cmps(c,0,(int32_t)c->r[3],0); // 800FD098
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD09C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD0A0
  c->r[30]=c->r[3]|c->r[3]; // 800FD0A4
  c->r[31]=c->r[4]|c->r[4]; // 800FD0A8
  if (crb(c,2)) { goto L_800FD0CC; } // 800FD0AC
  if (crb(c,2)) { goto L_800FD0BC; } // 800FD0B0
  c->r[4]=0u+0x00000000u; // 800FD0B4
  c->lr=0x800FD0BCu; f_802B1180(c); // 800FD0B8
L_800FD0BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD0BC
  if (!crb(c,1)) { goto L_800FD0CC; } // 800FD0C0
  c->r[3]=c->r[30]|c->r[30]; // 800FD0C4
  c->lr=0x800FD0CCu; f_80244DC0(c); // 800FD0C8
L_800FD0CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD0CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD0D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD0D4
  c->lr=c->r[0]; // 800FD0D8
  c->r[1]=c->r[1]+0x00000010u; // 800FD0DC
  return; // 800FD0E0
}

// fn_800FD0E4
void f_800FD0E4(Ctx* __restrict c) {
  trace_call(0x800FD0E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD0E4
  c->r[0]=c->lr; // 800FD0E8
  cmps(c,0,(int32_t)c->r[3],0); // 800FD0EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD0F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD0F4
  c->r[30]=c->r[3]|c->r[3]; // 800FD0F8
  c->r[31]=c->r[4]|c->r[4]; // 800FD0FC
  if (crb(c,2)) { goto L_800FD120; } // 800FD100
  if (crb(c,2)) { goto L_800FD110; } // 800FD104
  c->r[4]=0u+0x00000000u; // 800FD108
  c->lr=0x800FD110u; f_802B1180(c); // 800FD10C
L_800FD110:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD110
  if (!crb(c,1)) { goto L_800FD120; } // 800FD114
  c->r[3]=c->r[30]|c->r[30]; // 800FD118
  c->lr=0x800FD120u; f_80244DC0(c); // 800FD11C
L_800FD120:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD120
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD124
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD128
  c->lr=c->r[0]; // 800FD12C
  c->r[1]=c->r[1]+0x00000010u; // 800FD130
  return; // 800FD134
}

// fn_800FD138
void f_800FD138(Ctx* __restrict c) {
  trace_call(0x800FD138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD138
  c->r[0]=c->lr; // 800FD13C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD140
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD144
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD148
  c->r[30]=c->r[3]|c->r[3]; // 800FD14C
  c->r[31]=c->r[4]|c->r[4]; // 800FD150
  if (crb(c,2)) { goto L_800FD174; } // 800FD154
  if (crb(c,2)) { goto L_800FD164; } // 800FD158
  c->r[4]=0u+0x00000000u; // 800FD15C
  c->lr=0x800FD164u; f_802B1180(c); // 800FD160
L_800FD164:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD164
  if (!crb(c,1)) { goto L_800FD174; } // 800FD168
  c->r[3]=c->r[30]|c->r[30]; // 800FD16C
  c->lr=0x800FD174u; f_80244DC0(c); // 800FD170
L_800FD174:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD174
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD17C
  c->lr=c->r[0]; // 800FD180
  c->r[1]=c->r[1]+0x00000010u; // 800FD184
  return; // 800FD188
}

// fn_800FD18C
void f_800FD18C(Ctx* __restrict c) {
  trace_call(0x800FD18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD18C
  c->r[0]=c->lr; // 800FD190
  cmps(c,0,(int32_t)c->r[3],0); // 800FD194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD198
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD19C
  c->r[30]=c->r[3]|c->r[3]; // 800FD1A0
  c->r[31]=c->r[4]|c->r[4]; // 800FD1A4
  if (crb(c,2)) { goto L_800FD1C4; } // 800FD1A8
  c->r[4]=0u+0x00000000u; // 800FD1AC
  c->lr=0x800FD1B4u; f_8005CFF0(c); // 800FD1B0
  cmps(c,0,(int32_t)c->r[31],0); // 800FD1B4
  if (!crb(c,1)) { goto L_800FD1C4; } // 800FD1B8
  c->r[3]=c->r[30]|c->r[30]; // 800FD1BC
  c->lr=0x800FD1C4u; f_80244DC0(c); // 800FD1C0
L_800FD1C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD1C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD1C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD1CC
  c->lr=c->r[0]; // 800FD1D0
  c->r[1]=c->r[1]+0x00000010u; // 800FD1D4
  return; // 800FD1D8
}

// fn_800FD1DC
void f_800FD1DC(Ctx* __restrict c) {
  trace_call(0x800FD1DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD1DC
  c->r[0]=c->lr; // 800FD1E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD1E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD1E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD1EC
  c->r[30]=c->r[3]|c->r[3]; // 800FD1F0
  c->r[31]=c->r[4]|c->r[4]; // 800FD1F4
  if (crb(c,2)) { goto L_800FD218; } // 800FD1F8
  if (crb(c,2)) { goto L_800FD208; } // 800FD1FC
  c->r[4]=0u+0x00000000u; // 800FD200
  c->lr=0x800FD208u; f_8005CFF0(c); // 800FD204
L_800FD208:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD208
  if (!crb(c,1)) { goto L_800FD218; } // 800FD20C
  c->r[3]=c->r[30]|c->r[30]; // 800FD210
  c->lr=0x800FD218u; f_80244DC0(c); // 800FD214
L_800FD218:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD218
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD21C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD220
  c->lr=c->r[0]; // 800FD224
  c->r[1]=c->r[1]+0x00000010u; // 800FD228
  return; // 800FD22C
}

// fn_800FD230
void f_800FD230(Ctx* __restrict c) {
  trace_call(0x800FD230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD230
  c->r[0]=c->lr; // 800FD234
  cmps(c,0,(int32_t)c->r[3],0); // 800FD238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD23C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD240
  c->r[30]=c->r[3]|c->r[3]; // 800FD244
  c->r[31]=c->r[4]|c->r[4]; // 800FD248
  if (crb(c,2)) { goto L_800FD268; } // 800FD24C
  c->r[4]=0u+0x00000000u; // 800FD250
  c->lr=0x800FD258u; f_8005DE74(c); // 800FD254
  cmps(c,0,(int32_t)c->r[31],0); // 800FD258
  if (!crb(c,1)) { goto L_800FD268; } // 800FD25C
  c->r[3]=c->r[30]|c->r[30]; // 800FD260
  c->lr=0x800FD268u; f_80244DC0(c); // 800FD264
L_800FD268:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD268
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD26C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD270
  c->lr=c->r[0]; // 800FD274
  c->r[1]=c->r[1]+0x00000010u; // 800FD278
  return; // 800FD27C
}

// fn_800FD280
void f_800FD280(Ctx* __restrict c) {
  trace_call(0x800FD280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD280
  c->r[0]=c->lr; // 800FD284
  cmps(c,0,(int32_t)c->r[3],0); // 800FD288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD28C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD290
  c->r[30]=c->r[3]|c->r[3]; // 800FD294
  c->r[31]=c->r[4]|c->r[4]; // 800FD298
  if (crb(c,2)) { goto L_800FD2BC; } // 800FD29C
  if (crb(c,2)) { goto L_800FD2AC; } // 800FD2A0
  c->r[4]=0u+0x00000000u; // 800FD2A4
  c->lr=0x800FD2ACu; f_802B1180(c); // 800FD2A8
L_800FD2AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD2AC
  if (!crb(c,1)) { goto L_800FD2BC; } // 800FD2B0
  c->r[3]=c->r[30]|c->r[30]; // 800FD2B4
  c->lr=0x800FD2BCu; f_80244DC0(c); // 800FD2B8
L_800FD2BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD2BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD2C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD2C4
  c->lr=c->r[0]; // 800FD2C8
  c->r[1]=c->r[1]+0x00000010u; // 800FD2CC
  return; // 800FD2D0
}

// fn_800FD2D4
void f_800FD2D4(Ctx* __restrict c) {
  trace_call(0x800FD2D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD2D4
  c->r[0]=c->lr; // 800FD2D8
  cmps(c,0,(int32_t)c->r[3],0); // 800FD2DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD2E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD2E4
  c->r[30]=c->r[3]|c->r[3]; // 800FD2E8
  c->r[31]=c->r[4]|c->r[4]; // 800FD2EC
  if (crb(c,2)) { goto L_800FD310; } // 800FD2F0
  if (crb(c,2)) { goto L_800FD300; } // 800FD2F4
  c->r[4]=0u+0x00000000u; // 800FD2F8
  c->lr=0x800FD300u; f_802B1180(c); // 800FD2FC
L_800FD300:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD300
  if (!crb(c,1)) { goto L_800FD310; } // 800FD304
  c->r[3]=c->r[30]|c->r[30]; // 800FD308
  c->lr=0x800FD310u; f_80244DC0(c); // 800FD30C
L_800FD310:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD310
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD314
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD318
  c->lr=c->r[0]; // 800FD31C
  c->r[1]=c->r[1]+0x00000010u; // 800FD320
  return; // 800FD324
}

// fn_800FD328
void f_800FD328(Ctx* __restrict c) {
  trace_call(0x800FD328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD328
  c->r[0]=c->lr; // 800FD32C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD330
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD334
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD338
  c->r[30]=c->r[3]|c->r[3]; // 800FD33C
  c->r[31]=c->r[4]|c->r[4]; // 800FD340
  if (crb(c,2)) { goto L_800FD360; } // 800FD344
  c->r[4]=0u+0x00000000u; // 800FD348
  c->lr=0x800FD350u; f_80061820(c); // 800FD34C
  cmps(c,0,(int32_t)c->r[31],0); // 800FD350
  if (!crb(c,1)) { goto L_800FD360; } // 800FD354
  c->r[3]=c->r[30]|c->r[30]; // 800FD358
  c->lr=0x800FD360u; f_80244DC0(c); // 800FD35C
L_800FD360:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD360
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD364
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD368
  c->lr=c->r[0]; // 800FD36C
  c->r[1]=c->r[1]+0x00000010u; // 800FD370
  return; // 800FD374
}

// fn_800FD378
void f_800FD378(Ctx* __restrict c) {
  trace_call(0x800FD378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD378
  c->r[0]=c->lr; // 800FD37C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD380
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD384
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD388
  c->r[30]=c->r[3]|c->r[3]; // 800FD38C
  c->r[31]=c->r[4]|c->r[4]; // 800FD390
  if (crb(c,2)) { goto L_800FD3B4; } // 800FD394
  if (crb(c,2)) { goto L_800FD3A4; } // 800FD398
  c->r[4]=0u+0x00000000u; // 800FD39C
  c->lr=0x800FD3A4u; f_802B1180(c); // 800FD3A0
L_800FD3A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD3A4
  if (!crb(c,1)) { goto L_800FD3B4; } // 800FD3A8
  c->r[3]=c->r[30]|c->r[30]; // 800FD3AC
  c->lr=0x800FD3B4u; f_80244DC0(c); // 800FD3B0
L_800FD3B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD3B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD3B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD3BC
  c->lr=c->r[0]; // 800FD3C0
  c->r[1]=c->r[1]+0x00000010u; // 800FD3C4
  return; // 800FD3C8
}

// fn_800FD3CC
void f_800FD3CC(Ctx* __restrict c) {
  trace_call(0x800FD3CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD3CC
  c->r[0]=c->lr; // 800FD3D0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD3D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD3D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD3DC
  c->r[30]=c->r[3]|c->r[3]; // 800FD3E0
  c->r[31]=c->r[4]|c->r[4]; // 800FD3E4
  if (crb(c,2)) { goto L_800FD408; } // 800FD3E8
  if (crb(c,2)) { goto L_800FD3F8; } // 800FD3EC
  c->r[4]=0u+0x00000000u; // 800FD3F0
  c->lr=0x800FD3F8u; f_802B1180(c); // 800FD3F4
L_800FD3F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD3F8
  if (!crb(c,1)) { goto L_800FD408; } // 800FD3FC
  c->r[3]=c->r[30]|c->r[30]; // 800FD400
  c->lr=0x800FD408u; f_80244DC0(c); // 800FD404
L_800FD408:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD408
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD40C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD410
  c->lr=c->r[0]; // 800FD414
  c->r[1]=c->r[1]+0x00000010u; // 800FD418
  return; // 800FD41C
}

// fn_800FD420
void f_800FD420(Ctx* __restrict c) {
  trace_call(0x800FD420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD420
  c->r[0]=c->lr; // 800FD424
  cmps(c,0,(int32_t)c->r[3],0); // 800FD428
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD42C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD430
  c->r[30]=c->r[3]|c->r[3]; // 800FD434
  c->r[31]=c->r[4]|c->r[4]; // 800FD438
  if (crb(c,2)) { goto L_800FD45C; } // 800FD43C
  if (crb(c,2)) { goto L_800FD44C; } // 800FD440
  c->r[4]=0u+0x00000000u; // 800FD444
  c->lr=0x800FD44Cu; f_802B1180(c); // 800FD448
L_800FD44C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD44C
  if (!crb(c,1)) { goto L_800FD45C; } // 800FD450
  c->r[3]=c->r[30]|c->r[30]; // 800FD454
  c->lr=0x800FD45Cu; f_80244DC0(c); // 800FD458
L_800FD45C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD45C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD460
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD464
  c->lr=c->r[0]; // 800FD468
  c->r[1]=c->r[1]+0x00000010u; // 800FD46C
  return; // 800FD470
}

// fn_800FD474
void f_800FD474(Ctx* __restrict c) {
  trace_call(0x800FD474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD474
  c->r[0]=c->lr; // 800FD478
  cmps(c,0,(int32_t)c->r[3],0); // 800FD47C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD480
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD484
  c->r[30]=c->r[3]|c->r[3]; // 800FD488
  c->r[31]=c->r[4]|c->r[4]; // 800FD48C
  if (crb(c,2)) { goto L_800FD4B0; } // 800FD490
  if (crb(c,2)) { goto L_800FD4A0; } // 800FD494
  c->r[4]=0u+0x00000000u; // 800FD498
  c->lr=0x800FD4A0u; f_802B1180(c); // 800FD49C
L_800FD4A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD4A0
  if (!crb(c,1)) { goto L_800FD4B0; } // 800FD4A4
  c->r[3]=c->r[30]|c->r[30]; // 800FD4A8
  c->lr=0x800FD4B0u; f_80244DC0(c); // 800FD4AC
L_800FD4B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD4B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD4B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD4B8
  c->lr=c->r[0]; // 800FD4BC
  c->r[1]=c->r[1]+0x00000010u; // 800FD4C0
  return; // 800FD4C4
}

// fn_800FD4C8
void f_800FD4C8(Ctx* __restrict c) {
  trace_call(0x800FD4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD4C8
  c->r[0]=c->lr; // 800FD4CC
  cmps(c,0,(int32_t)c->r[3],0); // 800FD4D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD4D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD4D8
  c->r[30]=c->r[3]|c->r[3]; // 800FD4DC
  c->r[31]=c->r[4]|c->r[4]; // 800FD4E0
  if (crb(c,2)) { goto L_800FD504; } // 800FD4E4
  if (crb(c,2)) { goto L_800FD4F4; } // 800FD4E8
  c->r[4]=0u+0x00000000u; // 800FD4EC
  c->lr=0x800FD4F4u; f_802B1180(c); // 800FD4F0
L_800FD4F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD4F4
  if (!crb(c,1)) { goto L_800FD504; } // 800FD4F8
  c->r[3]=c->r[30]|c->r[30]; // 800FD4FC
  c->lr=0x800FD504u; f_80244DC0(c); // 800FD500
L_800FD504:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD504
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD508
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD50C
  c->lr=c->r[0]; // 800FD510
  c->r[1]=c->r[1]+0x00000010u; // 800FD514
  return; // 800FD518
}

// fn_800FD51C
void f_800FD51C(Ctx* __restrict c) {
  trace_call(0x800FD51Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD51C
  c->r[0]=c->lr; // 800FD520
  cmps(c,0,(int32_t)c->r[3],0); // 800FD524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD528
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD52C
  c->r[30]=c->r[3]|c->r[3]; // 800FD530
  c->r[31]=c->r[4]|c->r[4]; // 800FD534
  if (crb(c,2)) { goto L_800FD558; } // 800FD538
  if (crb(c,2)) { goto L_800FD548; } // 800FD53C
  c->r[4]=0u+0x00000000u; // 800FD540
  c->lr=0x800FD548u; f_802B1180(c); // 800FD544
L_800FD548:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD548
  if (!crb(c,1)) { goto L_800FD558; } // 800FD54C
  c->r[3]=c->r[30]|c->r[30]; // 800FD550
  c->lr=0x800FD558u; f_80244DC0(c); // 800FD554
L_800FD558:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD558
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD55C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD560
  c->lr=c->r[0]; // 800FD564
  c->r[1]=c->r[1]+0x00000010u; // 800FD568
  return; // 800FD56C
}

// fn_800FD570
void f_800FD570(Ctx* __restrict c) {
  trace_call(0x800FD570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD570
  c->r[0]=c->lr; // 800FD574
  cmps(c,0,(int32_t)c->r[3],0); // 800FD578
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD57C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD580
  c->r[30]=c->r[3]|c->r[3]; // 800FD584
  c->r[31]=c->r[4]|c->r[4]; // 800FD588
  if (crb(c,2)) { goto L_800FD5AC; } // 800FD58C
  if (crb(c,2)) { goto L_800FD59C; } // 800FD590
  c->r[4]=0u+0x00000000u; // 800FD594
  c->lr=0x800FD59Cu; f_802B1180(c); // 800FD598
L_800FD59C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD59C
  if (!crb(c,1)) { goto L_800FD5AC; } // 800FD5A0
  c->r[3]=c->r[30]|c->r[30]; // 800FD5A4
  c->lr=0x800FD5ACu; f_80244DC0(c); // 800FD5A8
L_800FD5AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD5AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD5B4
  c->lr=c->r[0]; // 800FD5B8
  c->r[1]=c->r[1]+0x00000010u; // 800FD5BC
  return; // 800FD5C0
}

// fn_800FD5C4
void f_800FD5C4(Ctx* __restrict c) {
  trace_call(0x800FD5C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD5C4
  c->r[0]=c->lr; // 800FD5C8
  cmps(c,0,(int32_t)c->r[3],0); // 800FD5CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD5D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD5D4
  c->r[30]=c->r[3]|c->r[3]; // 800FD5D8
  c->r[31]=c->r[4]|c->r[4]; // 800FD5DC
  if (crb(c,2)) { goto L_800FD600; } // 800FD5E0
  if (crb(c,2)) { goto L_800FD5F0; } // 800FD5E4
  c->r[4]=0u+0x00000000u; // 800FD5E8
  c->lr=0x800FD5F0u; f_802B1180(c); // 800FD5EC
L_800FD5F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD5F0
  if (!crb(c,1)) { goto L_800FD600; } // 800FD5F4
  c->r[3]=c->r[30]|c->r[30]; // 800FD5F8
  c->lr=0x800FD600u; f_80244DC0(c); // 800FD5FC
L_800FD600:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD600
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD604
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD608
  c->lr=c->r[0]; // 800FD60C
  c->r[1]=c->r[1]+0x00000010u; // 800FD610
  return; // 800FD614
}

// fn_800FD618
void f_800FD618(Ctx* __restrict c) {
  trace_call(0x800FD618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD618
  c->r[0]=c->lr; // 800FD61C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD620
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD624
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD628
  c->r[30]=c->r[3]|c->r[3]; // 800FD62C
  c->r[31]=c->r[4]|c->r[4]; // 800FD630
  if (crb(c,2)) { goto L_800FD654; } // 800FD634
  if (crb(c,2)) { goto L_800FD644; } // 800FD638
  c->r[4]=0u+0x00000000u; // 800FD63C
  c->lr=0x800FD644u; f_802B1180(c); // 800FD640
L_800FD644:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD644
  if (!crb(c,1)) { goto L_800FD654; } // 800FD648
  c->r[3]=c->r[30]|c->r[30]; // 800FD64C
  c->lr=0x800FD654u; f_80244DC0(c); // 800FD650
L_800FD654:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD654
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD658
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD65C
  c->lr=c->r[0]; // 800FD660
  c->r[1]=c->r[1]+0x00000010u; // 800FD664
  return; // 800FD668
}

// fn_800FD66C
void f_800FD66C(Ctx* __restrict c) {
  trace_call(0x800FD66Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD66C
  c->r[0]=c->lr; // 800FD670
  cmps(c,0,(int32_t)c->r[3],0); // 800FD674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD678
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD67C
  c->r[30]=c->r[3]|c->r[3]; // 800FD680
  c->r[31]=c->r[4]|c->r[4]; // 800FD684
  if (crb(c,2)) { goto L_800FD6A8; } // 800FD688
  if (crb(c,2)) { goto L_800FD698; } // 800FD68C
  c->r[4]=0u+0x00000000u; // 800FD690
  c->lr=0x800FD698u; f_802B1180(c); // 800FD694
L_800FD698:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD698
  if (!crb(c,1)) { goto L_800FD6A8; } // 800FD69C
  c->r[3]=c->r[30]|c->r[30]; // 800FD6A0
  c->lr=0x800FD6A8u; f_80244DC0(c); // 800FD6A4
L_800FD6A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD6A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD6AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD6B0
  c->lr=c->r[0]; // 800FD6B4
  c->r[1]=c->r[1]+0x00000010u; // 800FD6B8
  return; // 800FD6BC
}

// fn_800FD6C0
void f_800FD6C0(Ctx* __restrict c) {
  trace_call(0x800FD6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD6C0
  c->r[0]=c->lr; // 800FD6C4
  cmps(c,0,(int32_t)c->r[3],0); // 800FD6C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD6CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD6D0
  c->r[30]=c->r[3]|c->r[3]; // 800FD6D4
  c->r[31]=c->r[4]|c->r[4]; // 800FD6D8
  if (crb(c,2)) { goto L_800FD6FC; } // 800FD6DC
  if (crb(c,2)) { goto L_800FD6EC; } // 800FD6E0
  c->r[4]=0u+0x00000000u; // 800FD6E4
  c->lr=0x800FD6ECu; f_802B1180(c); // 800FD6E8
L_800FD6EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD6EC
  if (!crb(c,1)) { goto L_800FD6FC; } // 800FD6F0
  c->r[3]=c->r[30]|c->r[30]; // 800FD6F4
  c->lr=0x800FD6FCu; f_80244DC0(c); // 800FD6F8
L_800FD6FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD6FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD700
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD704
  c->lr=c->r[0]; // 800FD708
  c->r[1]=c->r[1]+0x00000010u; // 800FD70C
  return; // 800FD710
}

// fn_800FD714
void f_800FD714(Ctx* __restrict c) {
  trace_call(0x800FD714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD714
  c->r[0]=c->lr; // 800FD718
  cmps(c,0,(int32_t)c->r[3],0); // 800FD71C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD720
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD724
  c->r[30]=c->r[3]|c->r[3]; // 800FD728
  c->r[31]=c->r[4]|c->r[4]; // 800FD72C
  if (crb(c,2)) { goto L_800FD750; } // 800FD730
  if (crb(c,2)) { goto L_800FD740; } // 800FD734
  c->r[4]=0u+0x00000000u; // 800FD738
  c->lr=0x800FD740u; f_802B1180(c); // 800FD73C
L_800FD740:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD740
  if (!crb(c,1)) { goto L_800FD750; } // 800FD744
  c->r[3]=c->r[30]|c->r[30]; // 800FD748
  c->lr=0x800FD750u; f_80244DC0(c); // 800FD74C
L_800FD750:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD750
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD754
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD758
  c->lr=c->r[0]; // 800FD75C
  c->r[1]=c->r[1]+0x00000010u; // 800FD760
  return; // 800FD764
}

// fn_800FD768
void f_800FD768(Ctx* __restrict c) {
  trace_call(0x800FD768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD768
  c->r[0]=c->lr; // 800FD76C
  cmps(c,0,(int32_t)c->r[3],0); // 800FD770
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD774
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD778
  c->r[30]=c->r[3]|c->r[3]; // 800FD77C
  c->r[31]=c->r[4]|c->r[4]; // 800FD780
  if (crb(c,2)) { goto L_800FD7A4; } // 800FD784
  if (crb(c,2)) { goto L_800FD794; } // 800FD788
  c->r[4]=0u+0x00000000u; // 800FD78C
  c->lr=0x800FD794u; f_802B1180(c); // 800FD790
L_800FD794:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD794
  if (!crb(c,1)) { goto L_800FD7A4; } // 800FD798
  c->r[3]=c->r[30]|c->r[30]; // 800FD79C
  c->lr=0x800FD7A4u; f_80244DC0(c); // 800FD7A0
L_800FD7A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD7A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD7AC
  c->lr=c->r[0]; // 800FD7B0
  c->r[1]=c->r[1]+0x00000010u; // 800FD7B4
  return; // 800FD7B8
}

// fn_800FD7BC
void f_800FD7BC(Ctx* __restrict c) {
  trace_call(0x800FD7BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD7BC
  c->r[0]=c->lr; // 800FD7C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD7C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD7CC
  c->r[30]=c->r[3]|c->r[3]; // 800FD7D0
  c->r[31]=c->r[4]|c->r[4]; // 800FD7D4
  if (crb(c,2)) { goto L_800FD7F8; } // 800FD7D8
  if (crb(c,2)) { goto L_800FD7E8; } // 800FD7DC
  c->r[4]=0u+0x00000000u; // 800FD7E0
  c->lr=0x800FD7E8u; f_802B1180(c); // 800FD7E4
L_800FD7E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD7E8
  if (!crb(c,1)) { goto L_800FD7F8; } // 800FD7EC
  c->r[3]=c->r[30]|c->r[30]; // 800FD7F0
  c->lr=0x800FD7F8u; f_80244DC0(c); // 800FD7F4
L_800FD7F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD7F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD7FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD800
  c->lr=c->r[0]; // 800FD804
  c->r[1]=c->r[1]+0x00000010u; // 800FD808
  return; // 800FD80C
}

// fn_800FD810
void f_800FD810(Ctx* __restrict c) {
  trace_call(0x800FD810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD810
  c->r[0]=c->lr; // 800FD814
  cmps(c,0,(int32_t)c->r[3],0); // 800FD818
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD81C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD820
  c->r[30]=c->r[3]|c->r[3]; // 800FD824
  c->r[31]=c->r[4]|c->r[4]; // 800FD828
  if (crb(c,2)) { goto L_800FD84C; } // 800FD82C
  if (crb(c,2)) { goto L_800FD83C; } // 800FD830
  c->r[4]=0u+0x00000000u; // 800FD834
  c->lr=0x800FD83Cu; f_802B1180(c); // 800FD838
L_800FD83C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD83C
  if (!crb(c,1)) { goto L_800FD84C; } // 800FD840
  c->r[3]=c->r[30]|c->r[30]; // 800FD844
  c->lr=0x800FD84Cu; f_80244DC0(c); // 800FD848
L_800FD84C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD84C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD850
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD854
  c->lr=c->r[0]; // 800FD858
  c->r[1]=c->r[1]+0x00000010u; // 800FD85C
  return; // 800FD860
}

// fn_800FD864
void f_800FD864(Ctx* __restrict c) {
  trace_call(0x800FD864u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD864
  c->r[0]=c->lr; // 800FD868
  cmps(c,0,(int32_t)c->r[3],0); // 800FD86C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD870
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD874
  c->r[30]=c->r[3]|c->r[3]; // 800FD878
  c->r[31]=c->r[4]|c->r[4]; // 800FD87C
  if (crb(c,2)) { goto L_800FD8A0; } // 800FD880
  if (crb(c,2)) { goto L_800FD890; } // 800FD884
  c->r[4]=0u+0x00000000u; // 800FD888
  c->lr=0x800FD890u; f_802B1180(c); // 800FD88C
L_800FD890:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD890
  if (!crb(c,1)) { goto L_800FD8A0; } // 800FD894
  c->r[3]=c->r[30]|c->r[30]; // 800FD898
  c->lr=0x800FD8A0u; f_80244DC0(c); // 800FD89C
L_800FD8A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD8A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD8A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD8A8
  c->lr=c->r[0]; // 800FD8AC
  c->r[1]=c->r[1]+0x00000010u; // 800FD8B0
  return; // 800FD8B4
}

// fn_800FD8B8
void f_800FD8B8(Ctx* __restrict c) {
  trace_call(0x800FD8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD8B8
  c->r[0]=c->lr; // 800FD8BC
  cmps(c,0,(int32_t)c->r[3],0); // 800FD8C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD8C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD8C8
  c->r[30]=c->r[3]|c->r[3]; // 800FD8CC
  c->r[31]=c->r[4]|c->r[4]; // 800FD8D0
  if (crb(c,2)) { goto L_800FD8F4; } // 800FD8D4
  if (crb(c,2)) { goto L_800FD8E4; } // 800FD8D8
  c->r[4]=0u+0x00000000u; // 800FD8DC
  c->lr=0x800FD8E4u; f_802B1180(c); // 800FD8E0
L_800FD8E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD8E4
  if (!crb(c,1)) { goto L_800FD8F4; } // 800FD8E8
  c->r[3]=c->r[30]|c->r[30]; // 800FD8EC
  c->lr=0x800FD8F4u; f_80244DC0(c); // 800FD8F0
L_800FD8F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD8F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD8F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD8FC
  c->lr=c->r[0]; // 800FD900
  c->r[1]=c->r[1]+0x00000010u; // 800FD904
  return; // 800FD908
}

// fn_800FD90C
void f_800FD90C(Ctx* __restrict c) {
  trace_call(0x800FD90Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD90C
  c->r[0]=c->lr; // 800FD910
  cmps(c,0,(int32_t)c->r[3],0); // 800FD914
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD918
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD91C
  c->r[30]=c->r[3]|c->r[3]; // 800FD920
  c->r[31]=c->r[4]|c->r[4]; // 800FD924
  if (crb(c,2)) { goto L_800FD948; } // 800FD928
  if (crb(c,2)) { goto L_800FD938; } // 800FD92C
  c->r[4]=0u+0x00000000u; // 800FD930
  c->lr=0x800FD938u; f_802B1180(c); // 800FD934
L_800FD938:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD938
  if (!crb(c,1)) { goto L_800FD948; } // 800FD93C
  c->r[3]=c->r[30]|c->r[30]; // 800FD940
  c->lr=0x800FD948u; f_80244DC0(c); // 800FD944
L_800FD948:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD948
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD94C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD950
  c->lr=c->r[0]; // 800FD954
  c->r[1]=c->r[1]+0x00000010u; // 800FD958
  return; // 800FD95C
}

// fn_800FD960
void f_800FD960(Ctx* __restrict c) {
  trace_call(0x800FD960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD960
  c->r[0]=c->lr; // 800FD964
  cmps(c,0,(int32_t)c->r[3],0); // 800FD968
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD96C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD970
  c->r[30]=c->r[3]|c->r[3]; // 800FD974
  c->r[31]=c->r[4]|c->r[4]; // 800FD978
  if (crb(c,2)) { goto L_800FD99C; } // 800FD97C
  if (crb(c,2)) { goto L_800FD98C; } // 800FD980
  c->r[4]=0u+0x00000000u; // 800FD984
  c->lr=0x800FD98Cu; f_802B1180(c); // 800FD988
L_800FD98C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD98C
  if (!crb(c,1)) { goto L_800FD99C; } // 800FD990
  c->r[3]=c->r[30]|c->r[30]; // 800FD994
  c->lr=0x800FD99Cu; f_80244DC0(c); // 800FD998
L_800FD99C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD99C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD9A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD9A4
  c->lr=c->r[0]; // 800FD9A8
  c->r[1]=c->r[1]+0x00000010u; // 800FD9AC
  return; // 800FD9B0
}

// fn_800FD9B4
void f_800FD9B4(Ctx* __restrict c) {
  trace_call(0x800FD9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD9B4
  c->r[0]=c->lr; // 800FD9B8
  cmps(c,0,(int32_t)c->r[3],0); // 800FD9BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD9C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FD9C4
  c->r[30]=c->r[3]|c->r[3]; // 800FD9C8
  c->r[31]=c->r[4]|c->r[4]; // 800FD9CC
  if (crb(c,2)) { goto L_800FD9F0; } // 800FD9D0
  if (crb(c,2)) { goto L_800FD9E0; } // 800FD9D4
  c->r[4]=0u+0x00000000u; // 800FD9D8
  c->lr=0x800FD9E0u; f_802B1180(c); // 800FD9DC
L_800FD9E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FD9E0
  if (!crb(c,1)) { goto L_800FD9F0; } // 800FD9E4
  c->r[3]=c->r[30]|c->r[30]; // 800FD9E8
  c->lr=0x800FD9F0u; f_80244DC0(c); // 800FD9EC
L_800FD9F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FD9F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FD9F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD9F8
  c->lr=c->r[0]; // 800FD9FC
  c->r[1]=c->r[1]+0x00000010u; // 800FDA00
  return; // 800FDA04
}

// fn_800FDA08
void f_800FDA08(Ctx* __restrict c) {
  trace_call(0x800FDA08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDA08
  c->r[0]=c->lr; // 800FDA0C
  cmps(c,0,(int32_t)c->r[3],0); // 800FDA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDA14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDA18
  c->r[30]=c->r[3]|c->r[3]; // 800FDA1C
  c->r[31]=c->r[4]|c->r[4]; // 800FDA20
  if (crb(c,2)) { goto L_800FDA44; } // 800FDA24
  if (crb(c,2)) { goto L_800FDA34; } // 800FDA28
  c->r[4]=0u+0x00000000u; // 800FDA2C
  c->lr=0x800FDA34u; f_802B1180(c); // 800FDA30
L_800FDA34:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDA34
  if (!crb(c,1)) { goto L_800FDA44; } // 800FDA38
  c->r[3]=c->r[30]|c->r[30]; // 800FDA3C
  c->lr=0x800FDA44u; f_80244DC0(c); // 800FDA40
L_800FDA44:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDA44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDA48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDA4C
  c->lr=c->r[0]; // 800FDA50
  c->r[1]=c->r[1]+0x00000010u; // 800FDA54
  return; // 800FDA58
}

// fn_800FDA5C
void f_800FDA5C(Ctx* __restrict c) {
  trace_call(0x800FDA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDA5C
  c->r[0]=c->lr; // 800FDA60
  cmps(c,0,(int32_t)c->r[3],0); // 800FDA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDA68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDA6C
  c->r[30]=c->r[3]|c->r[3]; // 800FDA70
  c->r[31]=c->r[4]|c->r[4]; // 800FDA74
  if (crb(c,2)) { goto L_800FDA98; } // 800FDA78
  if (crb(c,2)) { goto L_800FDA88; } // 800FDA7C
  c->r[4]=0u+0x00000000u; // 800FDA80
  c->lr=0x800FDA88u; f_802B1180(c); // 800FDA84
L_800FDA88:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDA88
  if (!crb(c,1)) { goto L_800FDA98; } // 800FDA8C
  c->r[3]=c->r[30]|c->r[30]; // 800FDA90
  c->lr=0x800FDA98u; f_80244DC0(c); // 800FDA94
L_800FDA98:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDA98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDA9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDAA0
  c->lr=c->r[0]; // 800FDAA4
  c->r[1]=c->r[1]+0x00000010u; // 800FDAA8
  return; // 800FDAAC
}

// fn_800FDAB0
void f_800FDAB0(Ctx* __restrict c) {
  trace_call(0x800FDAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDAB0
  c->r[0]=c->lr; // 800FDAB4
  cmps(c,0,(int32_t)c->r[3],0); // 800FDAB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDABC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDAC0
  c->r[30]=c->r[3]|c->r[3]; // 800FDAC4
  c->r[31]=c->r[4]|c->r[4]; // 800FDAC8
  if (crb(c,2)) { goto L_800FDAEC; } // 800FDACC
  if (crb(c,2)) { goto L_800FDADC; } // 800FDAD0
  c->r[4]=0u+0x00000000u; // 800FDAD4
  c->lr=0x800FDADCu; f_802B1180(c); // 800FDAD8
L_800FDADC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDADC
  if (!crb(c,1)) { goto L_800FDAEC; } // 800FDAE0
  c->r[3]=c->r[30]|c->r[30]; // 800FDAE4
  c->lr=0x800FDAECu; f_80244DC0(c); // 800FDAE8
L_800FDAEC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDAEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDAF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDAF4
  c->lr=c->r[0]; // 800FDAF8
  c->r[1]=c->r[1]+0x00000010u; // 800FDAFC
  return; // 800FDB00
}

// fn_800FDB04
void f_800FDB04(Ctx* __restrict c) {
  trace_call(0x800FDB04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDB04
  c->r[0]=c->lr; // 800FDB08
  cmps(c,0,(int32_t)c->r[3],0); // 800FDB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDB10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDB14
  c->r[30]=c->r[3]|c->r[3]; // 800FDB18
  c->r[31]=c->r[4]|c->r[4]; // 800FDB1C
  if (crb(c,2)) { goto L_800FDB40; } // 800FDB20
  if (crb(c,2)) { goto L_800FDB30; } // 800FDB24
  c->r[4]=0u+0x00000000u; // 800FDB28
  c->lr=0x800FDB30u; f_802B1180(c); // 800FDB2C
L_800FDB30:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDB30
  if (!crb(c,1)) { goto L_800FDB40; } // 800FDB34
  c->r[3]=c->r[30]|c->r[30]; // 800FDB38
  c->lr=0x800FDB40u; f_80244DC0(c); // 800FDB3C
L_800FDB40:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDB40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDB44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDB48
  c->lr=c->r[0]; // 800FDB4C
  c->r[1]=c->r[1]+0x00000010u; // 800FDB50
  return; // 800FDB54
}

// fn_800FDB58
void f_800FDB58(Ctx* __restrict c) {
  trace_call(0x800FDB58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDB58
  c->r[0]=c->lr; // 800FDB5C
  cmps(c,0,(int32_t)c->r[3],0); // 800FDB60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDB64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDB68
  c->r[30]=c->r[3]|c->r[3]; // 800FDB6C
  c->r[31]=c->r[4]|c->r[4]; // 800FDB70
  if (crb(c,2)) { goto L_800FDB94; } // 800FDB74
  if (crb(c,2)) { goto L_800FDB84; } // 800FDB78
  c->r[4]=0u+0x00000000u; // 800FDB7C
  c->lr=0x800FDB84u; f_802B1180(c); // 800FDB80
L_800FDB84:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDB84
  if (!crb(c,1)) { goto L_800FDB94; } // 800FDB88
  c->r[3]=c->r[30]|c->r[30]; // 800FDB8C
  c->lr=0x800FDB94u; f_80244DC0(c); // 800FDB90
L_800FDB94:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDB94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDB98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDB9C
  c->lr=c->r[0]; // 800FDBA0
  c->r[1]=c->r[1]+0x00000010u; // 800FDBA4
  return; // 800FDBA8
}

// fn_800FDBAC
void f_800FDBAC(Ctx* __restrict c) {
  trace_call(0x800FDBACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDBAC
  c->r[0]=c->lr; // 800FDBB0
  cmps(c,0,(int32_t)c->r[3],0); // 800FDBB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDBB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDBBC
  c->r[30]=c->r[3]|c->r[3]; // 800FDBC0
  c->r[31]=c->r[4]|c->r[4]; // 800FDBC4
  if (crb(c,2)) { goto L_800FDBE8; } // 800FDBC8
  if (crb(c,2)) { goto L_800FDBD8; } // 800FDBCC
  c->r[4]=0u+0x00000000u; // 800FDBD0
  c->lr=0x800FDBD8u; f_802B1180(c); // 800FDBD4
L_800FDBD8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDBD8
  if (!crb(c,1)) { goto L_800FDBE8; } // 800FDBDC
  c->r[3]=c->r[30]|c->r[30]; // 800FDBE0
  c->lr=0x800FDBE8u; f_80244DC0(c); // 800FDBE4
L_800FDBE8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDBE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDBEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDBF0
  c->lr=c->r[0]; // 800FDBF4
  c->r[1]=c->r[1]+0x00000010u; // 800FDBF8
  return; // 800FDBFC
}

// fn_800FDC00
void f_800FDC00(Ctx* __restrict c) {
  trace_call(0x800FDC00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDC00
  c->r[0]=c->lr; // 800FDC04
  cmps(c,0,(int32_t)c->r[3],0); // 800FDC08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDC0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDC10
  c->r[30]=c->r[3]|c->r[3]; // 800FDC14
  c->r[31]=c->r[4]|c->r[4]; // 800FDC18
  if (crb(c,2)) { goto L_800FDC3C; } // 800FDC1C
  if (crb(c,2)) { goto L_800FDC2C; } // 800FDC20
  c->r[4]=0u+0x00000000u; // 800FDC24
  c->lr=0x800FDC2Cu; f_802B1180(c); // 800FDC28
L_800FDC2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDC2C
  if (!crb(c,1)) { goto L_800FDC3C; } // 800FDC30
  c->r[3]=c->r[30]|c->r[30]; // 800FDC34
  c->lr=0x800FDC3Cu; f_80244DC0(c); // 800FDC38
L_800FDC3C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDC3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDC40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDC44
  c->lr=c->r[0]; // 800FDC48
  c->r[1]=c->r[1]+0x00000010u; // 800FDC4C
  return; // 800FDC50
}

// fn_800FDC54
void f_800FDC54(Ctx* __restrict c) {
  trace_call(0x800FDC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDC54
  c->r[0]=c->lr; // 800FDC58
  cmps(c,0,(int32_t)c->r[3],0); // 800FDC5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDC60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDC64
  c->r[30]=c->r[3]|c->r[3]; // 800FDC68
  c->r[31]=c->r[4]|c->r[4]; // 800FDC6C
  if (crb(c,2)) { goto L_800FDC90; } // 800FDC70
  if (crb(c,2)) { goto L_800FDC80; } // 800FDC74
  c->r[4]=0u+0x00000000u; // 800FDC78
  c->lr=0x800FDC80u; f_802B1180(c); // 800FDC7C
L_800FDC80:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDC80
  if (!crb(c,1)) { goto L_800FDC90; } // 800FDC84
  c->r[3]=c->r[30]|c->r[30]; // 800FDC88
  c->lr=0x800FDC90u; f_80244DC0(c); // 800FDC8C
L_800FDC90:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDC90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDC94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDC98
  c->lr=c->r[0]; // 800FDC9C
  c->r[1]=c->r[1]+0x00000010u; // 800FDCA0
  return; // 800FDCA4
}

// fn_800FDCA8
void f_800FDCA8(Ctx* __restrict c) {
  trace_call(0x800FDCA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDCA8
  c->r[0]=c->lr; // 800FDCAC
  cmps(c,0,(int32_t)c->r[3],0); // 800FDCB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDCB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDCB8
  c->r[30]=c->r[3]|c->r[3]; // 800FDCBC
  c->r[31]=c->r[4]|c->r[4]; // 800FDCC0
  if (crb(c,2)) { goto L_800FDCE4; } // 800FDCC4
  if (crb(c,2)) { goto L_800FDCD4; } // 800FDCC8
  c->r[4]=0u+0x00000000u; // 800FDCCC
  c->lr=0x800FDCD4u; f_802B1180(c); // 800FDCD0
L_800FDCD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDCD4
  if (!crb(c,1)) { goto L_800FDCE4; } // 800FDCD8
  c->r[3]=c->r[30]|c->r[30]; // 800FDCDC
  c->lr=0x800FDCE4u; f_80244DC0(c); // 800FDCE0
L_800FDCE4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDCE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDCE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDCEC
  c->lr=c->r[0]; // 800FDCF0
  c->r[1]=c->r[1]+0x00000010u; // 800FDCF4
  return; // 800FDCF8
}

// fn_800FDCFC
void f_800FDCFC(Ctx* __restrict c) {
  trace_call(0x800FDCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDCFC
  c->r[0]=c->lr; // 800FDD00
  cmps(c,0,(int32_t)c->r[3],0); // 800FDD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDD08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDD0C
  c->r[30]=c->r[3]|c->r[3]; // 800FDD10
  c->r[31]=c->r[4]|c->r[4]; // 800FDD14
  if (crb(c,2)) { goto L_800FDD38; } // 800FDD18
  if (crb(c,2)) { goto L_800FDD28; } // 800FDD1C
  c->r[4]=0u+0x00000000u; // 800FDD20
  c->lr=0x800FDD28u; f_802B1180(c); // 800FDD24
L_800FDD28:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDD28
  if (!crb(c,1)) { goto L_800FDD38; } // 800FDD2C
  c->r[3]=c->r[30]|c->r[30]; // 800FDD30
  c->lr=0x800FDD38u; f_80244DC0(c); // 800FDD34
L_800FDD38:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDD38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDD3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDD40
  c->lr=c->r[0]; // 800FDD44
  c->r[1]=c->r[1]+0x00000010u; // 800FDD48
  return; // 800FDD4C
}

// fn_800FDD50
void f_800FDD50(Ctx* __restrict c) {
  trace_call(0x800FDD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDD50
  c->r[0]=c->lr; // 800FDD54
  cmps(c,0,(int32_t)c->r[3],0); // 800FDD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDD5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDD60
  c->r[30]=c->r[3]|c->r[3]; // 800FDD64
  c->r[31]=c->r[4]|c->r[4]; // 800FDD68
  if (crb(c,2)) { goto L_800FDD8C; } // 800FDD6C
  if (crb(c,2)) { goto L_800FDD7C; } // 800FDD70
  c->r[4]=0u+0x00000000u; // 800FDD74
  c->lr=0x800FDD7Cu; f_802B1180(c); // 800FDD78
L_800FDD7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDD7C
  if (!crb(c,1)) { goto L_800FDD8C; } // 800FDD80
  c->r[3]=c->r[30]|c->r[30]; // 800FDD84
  c->lr=0x800FDD8Cu; f_80244DC0(c); // 800FDD88
L_800FDD8C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDD8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDD90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDD94
  c->lr=c->r[0]; // 800FDD98
  c->r[1]=c->r[1]+0x00000010u; // 800FDD9C
  return; // 800FDDA0
}

// fn_800FDDA4
void f_800FDDA4(Ctx* __restrict c) {
  trace_call(0x800FDDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDDA4
  c->r[0]=c->lr; // 800FDDA8
  cmps(c,0,(int32_t)c->r[3],0); // 800FDDAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDDB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDDB4
  c->r[30]=c->r[3]|c->r[3]; // 800FDDB8
  c->r[31]=c->r[4]|c->r[4]; // 800FDDBC
  if (crb(c,2)) { goto L_800FDDE0; } // 800FDDC0
  if (crb(c,2)) { goto L_800FDDD0; } // 800FDDC4
  c->r[4]=0u+0x00000000u; // 800FDDC8
  c->lr=0x800FDDD0u; f_802B1180(c); // 800FDDCC
L_800FDDD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDDD0
  if (!crb(c,1)) { goto L_800FDDE0; } // 800FDDD4
  c->r[3]=c->r[30]|c->r[30]; // 800FDDD8
  c->lr=0x800FDDE0u; f_80244DC0(c); // 800FDDDC
L_800FDDE0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDDE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDDE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDDE8
  c->lr=c->r[0]; // 800FDDEC
  c->r[1]=c->r[1]+0x00000010u; // 800FDDF0
  return; // 800FDDF4
}

// fn_800FDDF8
void f_800FDDF8(Ctx* __restrict c) {
  trace_call(0x800FDDF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDDF8
  c->r[0]=c->lr; // 800FDDFC
  cmps(c,0,(int32_t)c->r[3],0); // 800FDE00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDE04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDE08
  c->r[30]=c->r[3]|c->r[3]; // 800FDE0C
  c->r[31]=c->r[4]|c->r[4]; // 800FDE10
  if (crb(c,2)) { goto L_800FDE30; } // 800FDE14
  c->r[4]=0u+0x00000000u; // 800FDE18
  c->lr=0x800FDE20u; f_8007B180(c); // 800FDE1C
  cmps(c,0,(int32_t)c->r[31],0); // 800FDE20
  if (!crb(c,1)) { goto L_800FDE30; } // 800FDE24
  c->r[3]=c->r[30]|c->r[30]; // 800FDE28
  c->lr=0x800FDE30u; f_80244DC0(c); // 800FDE2C
L_800FDE30:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDE30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDE34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDE38
  c->lr=c->r[0]; // 800FDE3C
  c->r[1]=c->r[1]+0x00000010u; // 800FDE40
  return; // 800FDE44
}

// fn_800FDE48
void f_800FDE48(Ctx* __restrict c) {
  trace_call(0x800FDE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDE48
  c->r[0]=c->lr; // 800FDE4C
  cmps(c,0,(int32_t)c->r[3],0); // 800FDE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDE54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDE58
  c->r[30]=c->r[3]|c->r[3]; // 800FDE5C
  c->r[31]=c->r[4]|c->r[4]; // 800FDE60
  if (crb(c,2)) { goto L_800FDE84; } // 800FDE64
  if (crb(c,2)) { goto L_800FDE74; } // 800FDE68
  c->r[4]=0u+0x00000000u; // 800FDE6C
  c->lr=0x800FDE74u; f_8007B180(c); // 800FDE70
L_800FDE74:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDE74
  if (!crb(c,1)) { goto L_800FDE84; } // 800FDE78
  c->r[3]=c->r[30]|c->r[30]; // 800FDE7C
  c->lr=0x800FDE84u; f_80244DC0(c); // 800FDE80
L_800FDE84:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDE84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDE88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDE8C
  c->lr=c->r[0]; // 800FDE90
  c->r[1]=c->r[1]+0x00000010u; // 800FDE94
  return; // 800FDE98
}

// fn_800FDE9C
void f_800FDE9C(Ctx* __restrict c) {
  trace_call(0x800FDE9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDE9C
  c->r[0]=c->lr; // 800FDEA0
  cmps(c,0,(int32_t)c->r[3],0); // 800FDEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDEA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDEAC
  c->r[30]=c->r[3]|c->r[3]; // 800FDEB0
  c->r[31]=c->r[4]|c->r[4]; // 800FDEB4
  if (crb(c,2)) { goto L_800FDED4; } // 800FDEB8
  c->r[4]=0u+0x00000000u; // 800FDEBC
  c->lr=0x800FDEC4u; f_8007C5E0(c); // 800FDEC0
  cmps(c,0,(int32_t)c->r[31],0); // 800FDEC4
  if (!crb(c,1)) { goto L_800FDED4; } // 800FDEC8
  c->r[3]=c->r[30]|c->r[30]; // 800FDECC
  c->lr=0x800FDED4u; f_80244DC0(c); // 800FDED0
L_800FDED4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDED4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDEDC
  c->lr=c->r[0]; // 800FDEE0
  c->r[1]=c->r[1]+0x00000010u; // 800FDEE4
  return; // 800FDEE8
}

// fn_800FDEEC
void f_800FDEEC(Ctx* __restrict c) {
  trace_call(0x800FDEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDEEC
  c->r[0]=c->lr; // 800FDEF0
  cmps(c,0,(int32_t)c->r[3],0); // 800FDEF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDEF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDEFC
  c->r[30]=c->r[3]|c->r[3]; // 800FDF00
  c->r[31]=c->r[4]|c->r[4]; // 800FDF04
  if (crb(c,2)) { goto L_800FDF24; } // 800FDF08
  c->r[4]=0u+0x00000000u; // 800FDF0C
  c->lr=0x800FDF14u; f_8007CBCC(c); // 800FDF10
  cmps(c,0,(int32_t)c->r[31],0); // 800FDF14
  if (!crb(c,1)) { goto L_800FDF24; } // 800FDF18
  c->r[3]=c->r[30]|c->r[30]; // 800FDF1C
  c->lr=0x800FDF24u; f_80244DC0(c); // 800FDF20
L_800FDF24:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDF24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDF28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDF2C
  c->lr=c->r[0]; // 800FDF30
  c->r[1]=c->r[1]+0x00000010u; // 800FDF34
  return; // 800FDF38
}

// fn_800FDF3C
void f_800FDF3C(Ctx* __restrict c) {
  trace_call(0x800FDF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDF3C
  c->r[0]=c->lr; // 800FDF40
  cmps(c,0,(int32_t)c->r[3],0); // 800FDF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDF48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDF4C
  c->r[30]=c->r[3]|c->r[3]; // 800FDF50
  c->r[31]=c->r[4]|c->r[4]; // 800FDF54
  if (crb(c,2)) { goto L_800FDF78; } // 800FDF58
  if (crb(c,2)) { goto L_800FDF68; } // 800FDF5C
  c->r[4]=0u+0x00000000u; // 800FDF60
  c->lr=0x800FDF68u; f_8007B180(c); // 800FDF64
L_800FDF68:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDF68
  if (!crb(c,1)) { goto L_800FDF78; } // 800FDF6C
  c->r[3]=c->r[30]|c->r[30]; // 800FDF70
  c->lr=0x800FDF78u; f_80244DC0(c); // 800FDF74
L_800FDF78:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDF78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDF7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDF80
  c->lr=c->r[0]; // 800FDF84
  c->r[1]=c->r[1]+0x00000010u; // 800FDF88
  return; // 800FDF8C
}

// fn_800FDF90
void f_800FDF90(Ctx* __restrict c) {
  trace_call(0x800FDF90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDF90
  c->r[0]=c->lr; // 800FDF94
  cmps(c,0,(int32_t)c->r[3],0); // 800FDF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDF9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDFA0
  c->r[30]=c->r[3]|c->r[3]; // 800FDFA4
  c->r[31]=c->r[4]|c->r[4]; // 800FDFA8
  if (crb(c,2)) { goto L_800FDFC8; } // 800FDFAC
  c->r[4]=0u+0x00000000u; // 800FDFB0
  c->lr=0x800FDFB8u; f_8007D580(c); // 800FDFB4
  cmps(c,0,(int32_t)c->r[31],0); // 800FDFB8
  if (!crb(c,1)) { goto L_800FDFC8; } // 800FDFBC
  c->r[3]=c->r[30]|c->r[30]; // 800FDFC0
  c->lr=0x800FDFC8u; f_80244DC0(c); // 800FDFC4
L_800FDFC8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FDFC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FDFCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDFD0
  c->lr=c->r[0]; // 800FDFD4
  c->r[1]=c->r[1]+0x00000010u; // 800FDFD8
  return; // 800FDFDC
}

// fn_800FDFE0
void f_800FDFE0(Ctx* __restrict c) {
  trace_call(0x800FDFE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDFE0
  c->r[0]=c->lr; // 800FDFE4
  cmps(c,0,(int32_t)c->r[3],0); // 800FDFE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDFEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FDFF0
  c->r[30]=c->r[3]|c->r[3]; // 800FDFF4
  c->r[31]=c->r[4]|c->r[4]; // 800FDFF8
  if (crb(c,2)) { goto L_800FE018; } // 800FDFFC
  c->r[4]=0u+0x00000000u; // 800FE000
  c->lr=0x800FE008u; f_8007E3A0(c); // 800FE004
  cmps(c,0,(int32_t)c->r[31],0); // 800FE008
  if (!crb(c,1)) { goto L_800FE018; } // 800FE00C
  c->r[3]=c->r[30]|c->r[30]; // 800FE010
  c->lr=0x800FE018u; f_80244DC0(c); // 800FE014
L_800FE018:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE018
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE01C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE020
  c->lr=c->r[0]; // 800FE024
  c->r[1]=c->r[1]+0x00000010u; // 800FE028
  return; // 800FE02C
}

// fn_800FE030
void f_800FE030(Ctx* __restrict c) {
  trace_call(0x800FE030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE030
  c->r[0]=c->lr; // 800FE034
  cmps(c,0,(int32_t)c->r[3],0); // 800FE038
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE03C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE040
  c->r[30]=c->r[3]|c->r[3]; // 800FE044
  c->r[31]=c->r[4]|c->r[4]; // 800FE048
  if (crb(c,2)) { goto L_800FE068; } // 800FE04C
  c->r[4]=0u+0x00000000u; // 800FE050
  c->lr=0x800FE058u; f_8007E670(c); // 800FE054
  cmps(c,0,(int32_t)c->r[31],0); // 800FE058
  if (!crb(c,1)) { goto L_800FE068; } // 800FE05C
  c->r[3]=c->r[30]|c->r[30]; // 800FE060
  c->lr=0x800FE068u; f_80244DC0(c); // 800FE064
L_800FE068:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE068
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE06C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE070
  c->lr=c->r[0]; // 800FE074
  c->r[1]=c->r[1]+0x00000010u; // 800FE078
  return; // 800FE07C
}

// fn_800FE080
void f_800FE080(Ctx* __restrict c) {
  trace_call(0x800FE080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE080
  c->r[0]=c->lr; // 800FE084
  cmps(c,0,(int32_t)c->r[3],0); // 800FE088
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE08C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE090
  c->r[30]=c->r[3]|c->r[3]; // 800FE094
  c->r[31]=c->r[4]|c->r[4]; // 800FE098
  if (crb(c,2)) { goto L_800FE0B8; } // 800FE09C
  c->r[4]=0u+0x00000000u; // 800FE0A0
  c->lr=0x800FE0A8u; f_8007EBBC(c); // 800FE0A4
  cmps(c,0,(int32_t)c->r[31],0); // 800FE0A8
  if (!crb(c,1)) { goto L_800FE0B8; } // 800FE0AC
  c->r[3]=c->r[30]|c->r[30]; // 800FE0B0
  c->lr=0x800FE0B8u; f_80244DC0(c); // 800FE0B4
L_800FE0B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE0B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE0BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE0C0
  c->lr=c->r[0]; // 800FE0C4
  c->r[1]=c->r[1]+0x00000010u; // 800FE0C8
  return; // 800FE0CC
}

// fn_800FE0D0
void f_800FE0D0(Ctx* __restrict c) {
  trace_call(0x800FE0D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE0D0
  c->r[0]=c->lr; // 800FE0D4
  cmps(c,0,(int32_t)c->r[3],0); // 800FE0D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE0DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE0E0
  c->r[30]=c->r[3]|c->r[3]; // 800FE0E4
  c->r[31]=c->r[4]|c->r[4]; // 800FE0E8
  if (crb(c,2)) { goto L_800FE108; } // 800FE0EC
  c->r[4]=0u+0x00000000u; // 800FE0F0
  c->lr=0x800FE0F8u; f_8007F588(c); // 800FE0F4
  cmps(c,0,(int32_t)c->r[31],0); // 800FE0F8
  if (!crb(c,1)) { goto L_800FE108; } // 800FE0FC
  c->r[3]=c->r[30]|c->r[30]; // 800FE100
  c->lr=0x800FE108u; f_80244DC0(c); // 800FE104
L_800FE108:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE108
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE10C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE110
  c->lr=c->r[0]; // 800FE114
  c->r[1]=c->r[1]+0x00000010u; // 800FE118
  return; // 800FE11C
}

// fn_800FE120
void f_800FE120(Ctx* __restrict c) {
  trace_call(0x800FE120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE120
  c->r[0]=c->lr; // 800FE124
  cmps(c,0,(int32_t)c->r[3],0); // 800FE128
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE12C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE130
  c->r[30]=c->r[3]|c->r[3]; // 800FE134
  c->r[31]=c->r[4]|c->r[4]; // 800FE138
  if (crb(c,2)) { goto L_800FE158; } // 800FE13C
  c->r[4]=0u+0x00000000u; // 800FE140
  c->lr=0x800FE148u; f_80080868(c); // 800FE144
  cmps(c,0,(int32_t)c->r[31],0); // 800FE148
  if (!crb(c,1)) { goto L_800FE158; } // 800FE14C
  c->r[3]=c->r[30]|c->r[30]; // 800FE150
  c->lr=0x800FE158u; f_80244DC0(c); // 800FE154
L_800FE158:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE158
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE15C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE160
  c->lr=c->r[0]; // 800FE164
  c->r[1]=c->r[1]+0x00000010u; // 800FE168
  return; // 800FE16C
}

// fn_800FE170
void f_800FE170(Ctx* __restrict c) {
  trace_call(0x800FE170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE170
  c->r[0]=c->lr; // 800FE174
  cmps(c,0,(int32_t)c->r[3],0); // 800FE178
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE17C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE180
  c->r[30]=c->r[3]|c->r[3]; // 800FE184
  c->r[31]=c->r[4]|c->r[4]; // 800FE188
  if (crb(c,2)) { goto L_800FE1AC; } // 800FE18C
  if (crb(c,2)) { goto L_800FE19C; } // 800FE190
  c->r[4]=0u+0x00000000u; // 800FE194
  c->lr=0x800FE19Cu; f_80080868(c); // 800FE198
L_800FE19C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE19C
  if (!crb(c,1)) { goto L_800FE1AC; } // 800FE1A0
  c->r[3]=c->r[30]|c->r[30]; // 800FE1A4
  c->lr=0x800FE1ACu; f_80244DC0(c); // 800FE1A8
L_800FE1AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE1AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE1B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE1B4
  c->lr=c->r[0]; // 800FE1B8
  c->r[1]=c->r[1]+0x00000010u; // 800FE1BC
  return; // 800FE1C0
}

// fn_800FE1C4
void f_800FE1C4(Ctx* __restrict c) {
  trace_call(0x800FE1C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE1C4
  c->r[0]=c->lr; // 800FE1C8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE1D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE1D4
  c->r[30]=c->r[3]|c->r[3]; // 800FE1D8
  c->r[31]=c->r[4]|c->r[4]; // 800FE1DC
  if (crb(c,2)) { goto L_800FE1FC; } // 800FE1E0
  c->r[4]=0u+0x00000000u; // 800FE1E4
  c->lr=0x800FE1ECu; f_80080F84(c); // 800FE1E8
  cmps(c,0,(int32_t)c->r[31],0); // 800FE1EC
  if (!crb(c,1)) { goto L_800FE1FC; } // 800FE1F0
  c->r[3]=c->r[30]|c->r[30]; // 800FE1F4
  c->lr=0x800FE1FCu; f_80244DC0(c); // 800FE1F8
L_800FE1FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE1FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE200
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE204
  c->lr=c->r[0]; // 800FE208
  c->r[1]=c->r[1]+0x00000010u; // 800FE20C
  return; // 800FE210
}

// fn_800FE214
void f_800FE214(Ctx* __restrict c) {
  trace_call(0x800FE214u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE214
  c->r[0]=c->lr; // 800FE218
  cmps(c,0,(int32_t)c->r[3],0); // 800FE21C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE220
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE224
  c->r[30]=c->r[3]|c->r[3]; // 800FE228
  c->r[31]=c->r[4]|c->r[4]; // 800FE22C
  if (crb(c,2)) { goto L_800FE250; } // 800FE230
  if (crb(c,2)) { goto L_800FE240; } // 800FE234
  c->r[4]=0u+0x00000000u; // 800FE238
  c->lr=0x800FE240u; f_80080F84(c); // 800FE23C
L_800FE240:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE240
  if (!crb(c,1)) { goto L_800FE250; } // 800FE244
  c->r[3]=c->r[30]|c->r[30]; // 800FE248
  c->lr=0x800FE250u; f_80244DC0(c); // 800FE24C
L_800FE250:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE250
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE254
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE258
  c->lr=c->r[0]; // 800FE25C
  c->r[1]=c->r[1]+0x00000010u; // 800FE260
  return; // 800FE264
}

// fn_800FE268
void f_800FE268(Ctx* __restrict c) {
  trace_call(0x800FE268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE268
  c->r[0]=c->lr; // 800FE26C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE270
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE274
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE278
  c->r[30]=c->r[3]|c->r[3]; // 800FE27C
  c->r[31]=c->r[4]|c->r[4]; // 800FE280
  if (crb(c,2)) { goto L_800FE2A4; } // 800FE284
  if (crb(c,2)) { goto L_800FE294; } // 800FE288
  c->r[4]=0u+0x00000000u; // 800FE28C
  c->lr=0x800FE294u; f_80080F84(c); // 800FE290
L_800FE294:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE294
  if (!crb(c,1)) { goto L_800FE2A4; } // 800FE298
  c->r[3]=c->r[30]|c->r[30]; // 800FE29C
  c->lr=0x800FE2A4u; f_80244DC0(c); // 800FE2A0
L_800FE2A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE2A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE2A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE2AC
  c->lr=c->r[0]; // 800FE2B0
  c->r[1]=c->r[1]+0x00000010u; // 800FE2B4
  return; // 800FE2B8
}

// fn_800FE2BC
void f_800FE2BC(Ctx* __restrict c) {
  trace_call(0x800FE2BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE2BC
  c->r[0]=c->lr; // 800FE2C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE2C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE2C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE2CC
  c->r[30]=c->r[3]|c->r[3]; // 800FE2D0
  c->r[31]=c->r[4]|c->r[4]; // 800FE2D4
  if (crb(c,2)) { goto L_800FE2F8; } // 800FE2D8
  if (crb(c,2)) { goto L_800FE2E8; } // 800FE2DC
  c->r[4]=0u+0x00000000u; // 800FE2E0
  c->lr=0x800FE2E8u; f_802B1180(c); // 800FE2E4
L_800FE2E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE2E8
  if (!crb(c,1)) { goto L_800FE2F8; } // 800FE2EC
  c->r[3]=c->r[30]|c->r[30]; // 800FE2F0
  c->lr=0x800FE2F8u; f_80244DC0(c); // 800FE2F4
L_800FE2F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE2F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE2FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE300
  c->lr=c->r[0]; // 800FE304
  c->r[1]=c->r[1]+0x00000010u; // 800FE308
  return; // 800FE30C
}

// fn_800FE310
void f_800FE310(Ctx* __restrict c) {
  trace_call(0x800FE310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE310
  c->r[0]=c->lr; // 800FE314
  cmps(c,0,(int32_t)c->r[3],0); // 800FE318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE31C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE320
  c->r[30]=c->r[3]|c->r[3]; // 800FE324
  c->r[31]=c->r[4]|c->r[4]; // 800FE328
  if (crb(c,2)) { goto L_800FE34C; } // 800FE32C
  if (crb(c,2)) { goto L_800FE33C; } // 800FE330
  c->r[4]=0u+0x00000000u; // 800FE334
  c->lr=0x800FE33Cu; f_802B1180(c); // 800FE338
L_800FE33C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE33C
  if (!crb(c,1)) { goto L_800FE34C; } // 800FE340
  c->r[3]=c->r[30]|c->r[30]; // 800FE344
  c->lr=0x800FE34Cu; f_80244DC0(c); // 800FE348
L_800FE34C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE34C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE350
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE354
  c->lr=c->r[0]; // 800FE358
  c->r[1]=c->r[1]+0x00000010u; // 800FE35C
  return; // 800FE360
}

// fn_800FE364
void f_800FE364(Ctx* __restrict c) {
  trace_call(0x800FE364u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE364
  c->r[0]=c->lr; // 800FE368
  cmps(c,0,(int32_t)c->r[3],0); // 800FE36C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE370
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE374
  c->r[30]=c->r[3]|c->r[3]; // 800FE378
  c->r[31]=c->r[4]|c->r[4]; // 800FE37C
  if (crb(c,2)) { goto L_800FE3A0; } // 800FE380
  if (crb(c,2)) { goto L_800FE390; } // 800FE384
  c->r[4]=0u+0x00000000u; // 800FE388
  c->lr=0x800FE390u; f_802B1180(c); // 800FE38C
L_800FE390:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE390
  if (!crb(c,1)) { goto L_800FE3A0; } // 800FE394
  c->r[3]=c->r[30]|c->r[30]; // 800FE398
  c->lr=0x800FE3A0u; f_80244DC0(c); // 800FE39C
L_800FE3A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE3A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE3A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE3A8
  c->lr=c->r[0]; // 800FE3AC
  c->r[1]=c->r[1]+0x00000010u; // 800FE3B0
  return; // 800FE3B4
}

// fn_800FE3B8
void f_800FE3B8(Ctx* __restrict c) {
  trace_call(0x800FE3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE3B8
  c->r[0]=c->lr; // 800FE3BC
  cmps(c,0,(int32_t)c->r[3],0); // 800FE3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE3C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE3C8
  c->r[30]=c->r[3]|c->r[3]; // 800FE3CC
  c->r[31]=c->r[4]|c->r[4]; // 800FE3D0
  if (crb(c,2)) { goto L_800FE3F4; } // 800FE3D4
  if (crb(c,2)) { goto L_800FE3E4; } // 800FE3D8
  c->r[4]=0u+0x00000000u; // 800FE3DC
  c->lr=0x800FE3E4u; f_802B1180(c); // 800FE3E0
L_800FE3E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE3E4
  if (!crb(c,1)) { goto L_800FE3F4; } // 800FE3E8
  c->r[3]=c->r[30]|c->r[30]; // 800FE3EC
  c->lr=0x800FE3F4u; f_80244DC0(c); // 800FE3F0
L_800FE3F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE3F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE3F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE3FC
  c->lr=c->r[0]; // 800FE400
  c->r[1]=c->r[1]+0x00000010u; // 800FE404
  return; // 800FE408
}

// fn_800FE40C
void f_800FE40C(Ctx* __restrict c) {
  trace_call(0x800FE40Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE40C
  c->r[0]=c->lr; // 800FE410
  cmps(c,0,(int32_t)c->r[3],0); // 800FE414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE418
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE41C
  c->r[30]=c->r[3]|c->r[3]; // 800FE420
  c->r[31]=c->r[4]|c->r[4]; // 800FE424
  if (crb(c,2)) { goto L_800FE448; } // 800FE428
  if (crb(c,2)) { goto L_800FE438; } // 800FE42C
  c->r[4]=0u+0x00000000u; // 800FE430
  c->lr=0x800FE438u; f_802B1180(c); // 800FE434
L_800FE438:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE438
  if (!crb(c,1)) { goto L_800FE448; } // 800FE43C
  c->r[3]=c->r[30]|c->r[30]; // 800FE440
  c->lr=0x800FE448u; f_80244DC0(c); // 800FE444
L_800FE448:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE448
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE44C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE450
  c->lr=c->r[0]; // 800FE454
  c->r[1]=c->r[1]+0x00000010u; // 800FE458
  return; // 800FE45C
}

// fn_800FE460
void f_800FE460(Ctx* __restrict c) {
  trace_call(0x800FE460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE460
  c->r[0]=c->lr; // 800FE464
  cmps(c,0,(int32_t)c->r[3],0); // 800FE468
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE46C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE470
  c->r[30]=c->r[3]|c->r[3]; // 800FE474
  c->r[31]=c->r[4]|c->r[4]; // 800FE478
  if (crb(c,2)) { goto L_800FE49C; } // 800FE47C
  if (crb(c,2)) { goto L_800FE48C; } // 800FE480
  c->r[4]=0u+0x00000000u; // 800FE484
  c->lr=0x800FE48Cu; f_802B1180(c); // 800FE488
L_800FE48C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE48C
  if (!crb(c,1)) { goto L_800FE49C; } // 800FE490
  c->r[3]=c->r[30]|c->r[30]; // 800FE494
  c->lr=0x800FE49Cu; f_80244DC0(c); // 800FE498
L_800FE49C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE49C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE4A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE4A4
  c->lr=c->r[0]; // 800FE4A8
  c->r[1]=c->r[1]+0x00000010u; // 800FE4AC
  return; // 800FE4B0
}

// fn_800FE4B4
void f_800FE4B4(Ctx* __restrict c) {
  trace_call(0x800FE4B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE4B4
  c->r[0]=c->lr; // 800FE4B8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE4C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE4C4
  c->r[30]=c->r[3]|c->r[3]; // 800FE4C8
  c->r[31]=c->r[4]|c->r[4]; // 800FE4CC
  if (crb(c,2)) { goto L_800FE4F0; } // 800FE4D0
  if (crb(c,2)) { goto L_800FE4E0; } // 800FE4D4
  c->r[4]=0u+0x00000000u; // 800FE4D8
  c->lr=0x800FE4E0u; f_802B1180(c); // 800FE4DC
L_800FE4E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE4E0
  if (!crb(c,1)) { goto L_800FE4F0; } // 800FE4E4
  c->r[3]=c->r[30]|c->r[30]; // 800FE4E8
  c->lr=0x800FE4F0u; f_80244DC0(c); // 800FE4EC
L_800FE4F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE4F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE4F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE4F8
  c->lr=c->r[0]; // 800FE4FC
  c->r[1]=c->r[1]+0x00000010u; // 800FE500
  return; // 800FE504
}

// fn_800FE508
void f_800FE508(Ctx* __restrict c) {
  trace_call(0x800FE508u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE508
  c->r[0]=c->lr; // 800FE50C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE510
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE514
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE518
  c->r[30]=c->r[3]|c->r[3]; // 800FE51C
  c->r[31]=c->r[4]|c->r[4]; // 800FE520
  if (crb(c,2)) { goto L_800FE544; } // 800FE524
  if (crb(c,2)) { goto L_800FE534; } // 800FE528
  c->r[4]=0u+0x00000000u; // 800FE52C
  c->lr=0x800FE534u; f_802B1180(c); // 800FE530
L_800FE534:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE534
  if (!crb(c,1)) { goto L_800FE544; } // 800FE538
  c->r[3]=c->r[30]|c->r[30]; // 800FE53C
  c->lr=0x800FE544u; f_80244DC0(c); // 800FE540
L_800FE544:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE544
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE548
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE54C
  c->lr=c->r[0]; // 800FE550
  c->r[1]=c->r[1]+0x00000010u; // 800FE554
  return; // 800FE558
}

// fn_800FE55C
void f_800FE55C(Ctx* __restrict c) {
  trace_call(0x800FE55Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE55C
  c->r[0]=c->lr; // 800FE560
  cmps(c,0,(int32_t)c->r[3],0); // 800FE564
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE568
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE56C
  c->r[30]=c->r[3]|c->r[3]; // 800FE570
  c->r[31]=c->r[4]|c->r[4]; // 800FE574
  if (crb(c,2)) { goto L_800FE598; } // 800FE578
  if (crb(c,2)) { goto L_800FE588; } // 800FE57C
  c->r[4]=0u+0x00000000u; // 800FE580
  c->lr=0x800FE588u; f_802B1180(c); // 800FE584
L_800FE588:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE588
  if (!crb(c,1)) { goto L_800FE598; } // 800FE58C
  c->r[3]=c->r[30]|c->r[30]; // 800FE590
  c->lr=0x800FE598u; f_80244DC0(c); // 800FE594
L_800FE598:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE598
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE59C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE5A0
  c->lr=c->r[0]; // 800FE5A4
  c->r[1]=c->r[1]+0x00000010u; // 800FE5A8
  return; // 800FE5AC
}

// fn_800FE5B0
void f_800FE5B0(Ctx* __restrict c) {
  trace_call(0x800FE5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE5B0
  c->r[0]=c->lr; // 800FE5B4
  cmps(c,0,(int32_t)c->r[3],0); // 800FE5B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE5BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE5C0
  c->r[30]=c->r[3]|c->r[3]; // 800FE5C4
  c->r[31]=c->r[4]|c->r[4]; // 800FE5C8
  if (crb(c,2)) { goto L_800FE5EC; } // 800FE5CC
  if (crb(c,2)) { goto L_800FE5DC; } // 800FE5D0
  c->r[4]=0u+0x00000000u; // 800FE5D4
  c->lr=0x800FE5DCu; f_802B1180(c); // 800FE5D8
L_800FE5DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE5DC
  if (!crb(c,1)) { goto L_800FE5EC; } // 800FE5E0
  c->r[3]=c->r[30]|c->r[30]; // 800FE5E4
  c->lr=0x800FE5ECu; f_80244DC0(c); // 800FE5E8
L_800FE5EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE5EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE5F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE5F4
  c->lr=c->r[0]; // 800FE5F8
  c->r[1]=c->r[1]+0x00000010u; // 800FE5FC
  return; // 800FE600
}

// fn_800FE604
void f_800FE604(Ctx* __restrict c) {
  trace_call(0x800FE604u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE604
  c->r[0]=c->lr; // 800FE608
  cmps(c,0,(int32_t)c->r[3],0); // 800FE60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE610
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE614
  c->r[30]=c->r[3]|c->r[3]; // 800FE618
  c->r[31]=c->r[4]|c->r[4]; // 800FE61C
  if (crb(c,2)) { goto L_800FE640; } // 800FE620
  if (crb(c,2)) { goto L_800FE630; } // 800FE624
  c->r[4]=0u+0x00000000u; // 800FE628
  c->lr=0x800FE630u; f_802B1180(c); // 800FE62C
L_800FE630:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE630
  if (!crb(c,1)) { goto L_800FE640; } // 800FE634
  c->r[3]=c->r[30]|c->r[30]; // 800FE638
  c->lr=0x800FE640u; f_80244DC0(c); // 800FE63C
L_800FE640:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE640
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE644
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE648
  c->lr=c->r[0]; // 800FE64C
  c->r[1]=c->r[1]+0x00000010u; // 800FE650
  return; // 800FE654
}

// fn_800FE658
void f_800FE658(Ctx* __restrict c) {
  trace_call(0x800FE658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE658
  c->r[0]=c->lr; // 800FE65C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE668
  c->r[30]=c->r[3]|c->r[3]; // 800FE66C
  c->r[31]=c->r[4]|c->r[4]; // 800FE670
  if (crb(c,2)) { goto L_800FE694; } // 800FE674
  if (crb(c,2)) { goto L_800FE684; } // 800FE678
  c->r[4]=0u+0x00000000u; // 800FE67C
  c->lr=0x800FE684u; f_802B1180(c); // 800FE680
L_800FE684:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE684
  if (!crb(c,1)) { goto L_800FE694; } // 800FE688
  c->r[3]=c->r[30]|c->r[30]; // 800FE68C
  c->lr=0x800FE694u; f_80244DC0(c); // 800FE690
L_800FE694:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE694
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE698
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE69C
  c->lr=c->r[0]; // 800FE6A0
  c->r[1]=c->r[1]+0x00000010u; // 800FE6A4
  return; // 800FE6A8
}

// fn_800FE6AC
void f_800FE6AC(Ctx* __restrict c) {
  trace_call(0x800FE6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE6AC
  c->r[0]=c->lr; // 800FE6B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FE6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE6B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE6BC
  c->r[30]=c->r[3]|c->r[3]; // 800FE6C0
  c->r[31]=c->r[4]|c->r[4]; // 800FE6C4
  if (crb(c,2)) { goto L_800FE6E8; } // 800FE6C8
  if (crb(c,2)) { goto L_800FE6D8; } // 800FE6CC
  c->r[4]=0u+0x00000000u; // 800FE6D0
  c->lr=0x800FE6D8u; f_802B1180(c); // 800FE6D4
L_800FE6D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE6D8
  if (!crb(c,1)) { goto L_800FE6E8; } // 800FE6DC
  c->r[3]=c->r[30]|c->r[30]; // 800FE6E0
  c->lr=0x800FE6E8u; f_80244DC0(c); // 800FE6E4
L_800FE6E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE6E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE6EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE6F0
  c->lr=c->r[0]; // 800FE6F4
  c->r[1]=c->r[1]+0x00000010u; // 800FE6F8
  return; // 800FE6FC
}

// fn_800FE700
void f_800FE700(Ctx* __restrict c) {
  trace_call(0x800FE700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE700
  c->r[0]=c->lr; // 800FE704
  cmps(c,0,(int32_t)c->r[3],0); // 800FE708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE70C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE710
  c->r[30]=c->r[3]|c->r[3]; // 800FE714
  c->r[31]=c->r[4]|c->r[4]; // 800FE718
  if (crb(c,2)) { goto L_800FE73C; } // 800FE71C
  if (crb(c,2)) { goto L_800FE72C; } // 800FE720
  c->r[4]=0u+0x00000000u; // 800FE724
  c->lr=0x800FE72Cu; f_802B1180(c); // 800FE728
L_800FE72C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE72C
  if (!crb(c,1)) { goto L_800FE73C; } // 800FE730
  c->r[3]=c->r[30]|c->r[30]; // 800FE734
  c->lr=0x800FE73Cu; f_80244DC0(c); // 800FE738
L_800FE73C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE73C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE740
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE744
  c->lr=c->r[0]; // 800FE748
  c->r[1]=c->r[1]+0x00000010u; // 800FE74C
  return; // 800FE750
}

// fn_800FE754
void f_800FE754(Ctx* __restrict c) {
  trace_call(0x800FE754u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE754
  c->r[0]=c->lr; // 800FE758
  cmps(c,0,(int32_t)c->r[3],0); // 800FE75C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE760
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE764
  c->r[30]=c->r[3]|c->r[3]; // 800FE768
  c->r[31]=c->r[4]|c->r[4]; // 800FE76C
  if (crb(c,2)) { goto L_800FE790; } // 800FE770
  if (crb(c,2)) { goto L_800FE780; } // 800FE774
  c->r[4]=0u+0x00000000u; // 800FE778
  c->lr=0x800FE780u; f_802B1180(c); // 800FE77C
L_800FE780:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE780
  if (!crb(c,1)) { goto L_800FE790; } // 800FE784
  c->r[3]=c->r[30]|c->r[30]; // 800FE788
  c->lr=0x800FE790u; f_80244DC0(c); // 800FE78C
L_800FE790:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE790
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE794
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE798
  c->lr=c->r[0]; // 800FE79C
  c->r[1]=c->r[1]+0x00000010u; // 800FE7A0
  return; // 800FE7A4
}

// fn_800FE7A8
void f_800FE7A8(Ctx* __restrict c) {
  trace_call(0x800FE7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE7A8
  c->r[0]=c->lr; // 800FE7AC
  cmps(c,0,(int32_t)c->r[3],0); // 800FE7B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE7B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE7B8
  c->r[30]=c->r[3]|c->r[3]; // 800FE7BC
  c->r[31]=c->r[4]|c->r[4]; // 800FE7C0
  if (crb(c,2)) { goto L_800FE7E4; } // 800FE7C4
  if (crb(c,2)) { goto L_800FE7D4; } // 800FE7C8
  c->r[4]=0u+0x00000000u; // 800FE7CC
  c->lr=0x800FE7D4u; f_802B1180(c); // 800FE7D0
L_800FE7D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE7D4
  if (!crb(c,1)) { goto L_800FE7E4; } // 800FE7D8
  c->r[3]=c->r[30]|c->r[30]; // 800FE7DC
  c->lr=0x800FE7E4u; f_80244DC0(c); // 800FE7E0
L_800FE7E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE7E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE7E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE7EC
  c->lr=c->r[0]; // 800FE7F0
  c->r[1]=c->r[1]+0x00000010u; // 800FE7F4
  return; // 800FE7F8
}

// fn_800FE7FC
void f_800FE7FC(Ctx* __restrict c) {
  trace_call(0x800FE7FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE7FC
  c->r[0]=c->lr; // 800FE800
  cmps(c,0,(int32_t)c->r[3],0); // 800FE804
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE808
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE80C
  c->r[30]=c->r[3]|c->r[3]; // 800FE810
  c->r[31]=c->r[4]|c->r[4]; // 800FE814
  if (crb(c,2)) { goto L_800FE838; } // 800FE818
  if (crb(c,2)) { goto L_800FE828; } // 800FE81C
  c->r[4]=0u+0x00000000u; // 800FE820
  c->lr=0x800FE828u; f_802B1180(c); // 800FE824
L_800FE828:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE828
  if (!crb(c,1)) { goto L_800FE838; } // 800FE82C
  c->r[3]=c->r[30]|c->r[30]; // 800FE830
  c->lr=0x800FE838u; f_80244DC0(c); // 800FE834
L_800FE838:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE838
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE83C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE840
  c->lr=c->r[0]; // 800FE844
  c->r[1]=c->r[1]+0x00000010u; // 800FE848
  return; // 800FE84C
}

// fn_800FE850
void f_800FE850(Ctx* __restrict c) {
  trace_call(0x800FE850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE850
  c->r[0]=c->lr; // 800FE854
  cmps(c,0,(int32_t)c->r[3],0); // 800FE858
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE85C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE860
  c->r[30]=c->r[3]|c->r[3]; // 800FE864
  c->r[31]=c->r[4]|c->r[4]; // 800FE868
  if (crb(c,2)) { goto L_800FE88C; } // 800FE86C
  if (crb(c,2)) { goto L_800FE87C; } // 800FE870
  c->r[4]=0u+0x00000000u; // 800FE874
  c->lr=0x800FE87Cu; f_802B1180(c); // 800FE878
L_800FE87C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE87C
  if (!crb(c,1)) { goto L_800FE88C; } // 800FE880
  c->r[3]=c->r[30]|c->r[30]; // 800FE884
  c->lr=0x800FE88Cu; f_80244DC0(c); // 800FE888
L_800FE88C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE88C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE890
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE894
  c->lr=c->r[0]; // 800FE898
  c->r[1]=c->r[1]+0x00000010u; // 800FE89C
  return; // 800FE8A0
}

// fn_800FE8A4
void f_800FE8A4(Ctx* __restrict c) {
  trace_call(0x800FE8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE8A4
  c->r[0]=c->lr; // 800FE8A8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE8AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE8B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE8B4
  c->r[30]=c->r[3]|c->r[3]; // 800FE8B8
  c->r[31]=c->r[4]|c->r[4]; // 800FE8BC
  if (crb(c,2)) { goto L_800FE8E0; } // 800FE8C0
  if (crb(c,2)) { goto L_800FE8D0; } // 800FE8C4
  c->r[4]=0u+0x00000000u; // 800FE8C8
  c->lr=0x800FE8D0u; f_802B1180(c); // 800FE8CC
L_800FE8D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE8D0
  if (!crb(c,1)) { goto L_800FE8E0; } // 800FE8D4
  c->r[3]=c->r[30]|c->r[30]; // 800FE8D8
  c->lr=0x800FE8E0u; f_80244DC0(c); // 800FE8DC
L_800FE8E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE8E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE8E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE8E8
  c->lr=c->r[0]; // 800FE8EC
  c->r[1]=c->r[1]+0x00000010u; // 800FE8F0
  return; // 800FE8F4
}

// fn_800FE8F8
void f_800FE8F8(Ctx* __restrict c) {
  trace_call(0x800FE8F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE8F8
  c->r[0]=c->lr; // 800FE8FC
  cmps(c,0,(int32_t)c->r[3],0); // 800FE900
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE904
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE908
  c->r[30]=c->r[3]|c->r[3]; // 800FE90C
  c->r[31]=c->r[4]|c->r[4]; // 800FE910
  if (crb(c,2)) { goto L_800FE934; } // 800FE914
  if (crb(c,2)) { goto L_800FE924; } // 800FE918
  c->r[4]=0u+0x00000000u; // 800FE91C
  c->lr=0x800FE924u; f_802B1180(c); // 800FE920
L_800FE924:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE924
  if (!crb(c,1)) { goto L_800FE934; } // 800FE928
  c->r[3]=c->r[30]|c->r[30]; // 800FE92C
  c->lr=0x800FE934u; f_80244DC0(c); // 800FE930
L_800FE934:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE934
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE938
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE93C
  c->lr=c->r[0]; // 800FE940
  c->r[1]=c->r[1]+0x00000010u; // 800FE944
  return; // 800FE948
}

// fn_800FE94C
void f_800FE94C(Ctx* __restrict c) {
  trace_call(0x800FE94Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE94C
  c->r[0]=c->lr; // 800FE950
  cmps(c,0,(int32_t)c->r[3],0); // 800FE954
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE958
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE95C
  c->r[30]=c->r[3]|c->r[3]; // 800FE960
  c->r[31]=c->r[4]|c->r[4]; // 800FE964
  if (crb(c,2)) { goto L_800FE988; } // 800FE968
  if (crb(c,2)) { goto L_800FE978; } // 800FE96C
  c->r[4]=0u+0x00000000u; // 800FE970
  c->lr=0x800FE978u; f_802B1180(c); // 800FE974
L_800FE978:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE978
  if (!crb(c,1)) { goto L_800FE988; } // 800FE97C
  c->r[3]=c->r[30]|c->r[30]; // 800FE980
  c->lr=0x800FE988u; f_80244DC0(c); // 800FE984
L_800FE988:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE988
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE98C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE990
  c->lr=c->r[0]; // 800FE994
  c->r[1]=c->r[1]+0x00000010u; // 800FE998
  return; // 800FE99C
}

// fn_800FE9A0
void f_800FE9A0(Ctx* __restrict c) {
  trace_call(0x800FE9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE9A0
  c->r[0]=c->lr; // 800FE9A4
  cmps(c,0,(int32_t)c->r[3],0); // 800FE9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FE9AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FE9B0
  c->r[30]=c->r[3]|c->r[3]; // 800FE9B4
  c->r[31]=c->r[4]|c->r[4]; // 800FE9B8
  if (crb(c,2)) { goto L_800FE9DC; } // 800FE9BC
  if (crb(c,2)) { goto L_800FE9CC; } // 800FE9C0
  c->r[4]=0u+0x00000000u; // 800FE9C4
  c->lr=0x800FE9CCu; f_802B1180(c); // 800FE9C8
L_800FE9CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE9CC
  if (!crb(c,1)) { goto L_800FE9DC; } // 800FE9D0
  c->r[3]=c->r[30]|c->r[30]; // 800FE9D4
  c->lr=0x800FE9DCu; f_80244DC0(c); // 800FE9D8
L_800FE9DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FE9DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FE9E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FE9E4
  c->lr=c->r[0]; // 800FE9E8
  c->r[1]=c->r[1]+0x00000010u; // 800FE9EC
  return; // 800FE9F0
}

// fn_800FE9F4
void f_800FE9F4(Ctx* __restrict c) {
  trace_call(0x800FE9F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE9F4
  c->r[0]=c->lr; // 800FE9F8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE9FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEA00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEA04
  c->r[30]=c->r[3]|c->r[3]; // 800FEA08
  c->r[31]=c->r[4]|c->r[4]; // 800FEA0C
  if (crb(c,2)) { goto L_800FEA30; } // 800FEA10
  if (crb(c,2)) { goto L_800FEA20; } // 800FEA14
  c->r[4]=0u+0x00000000u; // 800FEA18
  c->lr=0x800FEA20u; f_802B1180(c); // 800FEA1C
L_800FEA20:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEA20
  if (!crb(c,1)) { goto L_800FEA30; } // 800FEA24
  c->r[3]=c->r[30]|c->r[30]; // 800FEA28
  c->lr=0x800FEA30u; f_80244DC0(c); // 800FEA2C
L_800FEA30:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEA30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEA38
  c->lr=c->r[0]; // 800FEA3C
  c->r[1]=c->r[1]+0x00000010u; // 800FEA40
  return; // 800FEA44
}

// fn_800FEA48
void f_800FEA48(Ctx* __restrict c) {
  trace_call(0x800FEA48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEA48
  c->r[0]=c->lr; // 800FEA4C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEA50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEA54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEA58
  c->r[30]=c->r[3]|c->r[3]; // 800FEA5C
  c->r[31]=c->r[4]|c->r[4]; // 800FEA60
  if (crb(c,2)) { goto L_800FEA80; } // 800FEA64
  c->r[4]=0u+0x00000000u; // 800FEA68
  c->lr=0x800FEA70u; f_8008D89C(c); // 800FEA6C
  cmps(c,0,(int32_t)c->r[31],0); // 800FEA70
  if (!crb(c,1)) { goto L_800FEA80; } // 800FEA74
  c->r[3]=c->r[30]|c->r[30]; // 800FEA78
  c->lr=0x800FEA80u; f_80244DC0(c); // 800FEA7C
L_800FEA80:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEA80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEA84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEA88
  c->lr=c->r[0]; // 800FEA8C
  c->r[1]=c->r[1]+0x00000010u; // 800FEA90
  return; // 800FEA94
}

// fn_800FEA98
void f_800FEA98(Ctx* __restrict c) {
  trace_call(0x800FEA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEA98
  c->r[0]=c->lr; // 800FEA9C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEAA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEAA8
  c->r[30]=c->r[3]|c->r[3]; // 800FEAAC
  c->r[31]=c->r[4]|c->r[4]; // 800FEAB0
  if (crb(c,2)) { goto L_800FEAD4; } // 800FEAB4
  if (crb(c,2)) { goto L_800FEAC4; } // 800FEAB8
  c->r[4]=0u+0x00000000u; // 800FEABC
  c->lr=0x800FEAC4u; f_802B1180(c); // 800FEAC0
L_800FEAC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEAC4
  if (!crb(c,1)) { goto L_800FEAD4; } // 800FEAC8
  c->r[3]=c->r[30]|c->r[30]; // 800FEACC
  c->lr=0x800FEAD4u; f_80244DC0(c); // 800FEAD0
L_800FEAD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEAD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEAD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEADC
  c->lr=c->r[0]; // 800FEAE0
  c->r[1]=c->r[1]+0x00000010u; // 800FEAE4
  return; // 800FEAE8
}

// fn_800FEAEC
void f_800FEAEC(Ctx* __restrict c) {
  trace_call(0x800FEAECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEAEC
  c->r[0]=c->lr; // 800FEAF0
  cmps(c,0,(int32_t)c->r[3],0); // 800FEAF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEAF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEAFC
  c->r[30]=c->r[3]|c->r[3]; // 800FEB00
  c->r[31]=c->r[4]|c->r[4]; // 800FEB04
  if (crb(c,2)) { goto L_800FEB28; } // 800FEB08
  if (crb(c,2)) { goto L_800FEB18; } // 800FEB0C
  c->r[4]=0u+0x00000000u; // 800FEB10
  c->lr=0x800FEB18u; f_802B1180(c); // 800FEB14
L_800FEB18:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEB18
  if (!crb(c,1)) { goto L_800FEB28; } // 800FEB1C
  c->r[3]=c->r[30]|c->r[30]; // 800FEB20
  c->lr=0x800FEB28u; f_80244DC0(c); // 800FEB24
L_800FEB28:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEB28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEB30
  c->lr=c->r[0]; // 800FEB34
  c->r[1]=c->r[1]+0x00000010u; // 800FEB38
  return; // 800FEB3C
}

// fn_800FEB40
void f_800FEB40(Ctx* __restrict c) {
  trace_call(0x800FEB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEB40
  c->r[0]=c->lr; // 800FEB44
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEB4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEB50
  c->r[30]=c->r[3]|c->r[3]; // 800FEB54
  c->r[31]=c->r[4]|c->r[4]; // 800FEB58
  if (crb(c,2)) { goto L_800FEB7C; } // 800FEB5C
  if (crb(c,2)) { goto L_800FEB6C; } // 800FEB60
  c->r[4]=0u+0x00000000u; // 800FEB64
  c->lr=0x800FEB6Cu; f_802B1180(c); // 800FEB68
L_800FEB6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEB6C
  if (!crb(c,1)) { goto L_800FEB7C; } // 800FEB70
  c->r[3]=c->r[30]|c->r[30]; // 800FEB74
  c->lr=0x800FEB7Cu; f_80244DC0(c); // 800FEB78
L_800FEB7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEB7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEB80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEB84
  c->lr=c->r[0]; // 800FEB88
  c->r[1]=c->r[1]+0x00000010u; // 800FEB8C
  return; // 800FEB90
}

// fn_800FEB94
void f_800FEB94(Ctx* __restrict c) {
  trace_call(0x800FEB94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEB94
  c->r[0]=c->lr; // 800FEB98
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEBA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEBA4
  c->r[30]=c->r[3]|c->r[3]; // 800FEBA8
  c->r[31]=c->r[4]|c->r[4]; // 800FEBAC
  if (crb(c,2)) { goto L_800FEBD0; } // 800FEBB0
  if (crb(c,2)) { goto L_800FEBC0; } // 800FEBB4
  c->r[4]=0u+0x00000000u; // 800FEBB8
  c->lr=0x800FEBC0u; f_802B1180(c); // 800FEBBC
L_800FEBC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEBC0
  if (!crb(c,1)) { goto L_800FEBD0; } // 800FEBC4
  c->r[3]=c->r[30]|c->r[30]; // 800FEBC8
  c->lr=0x800FEBD0u; f_80244DC0(c); // 800FEBCC
L_800FEBD0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEBD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEBD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEBD8
  c->lr=c->r[0]; // 800FEBDC
  c->r[1]=c->r[1]+0x00000010u; // 800FEBE0
  return; // 800FEBE4
}

// fn_800FEBE8
void f_800FEBE8(Ctx* __restrict c) {
  trace_call(0x800FEBE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEBE8
  c->r[0]=c->lr; // 800FEBEC
  cmps(c,0,(int32_t)c->r[3],0); // 800FEBF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEBF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEBF8
  c->r[30]=c->r[3]|c->r[3]; // 800FEBFC
  c->r[31]=c->r[4]|c->r[4]; // 800FEC00
  if (crb(c,2)) { goto L_800FEC24; } // 800FEC04
  if (crb(c,2)) { goto L_800FEC14; } // 800FEC08
  c->r[4]=0u+0x00000000u; // 800FEC0C
  c->lr=0x800FEC14u; f_802B1180(c); // 800FEC10
L_800FEC14:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEC14
  if (!crb(c,1)) { goto L_800FEC24; } // 800FEC18
  c->r[3]=c->r[30]|c->r[30]; // 800FEC1C
  c->lr=0x800FEC24u; f_80244DC0(c); // 800FEC20
L_800FEC24:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEC24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEC28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEC2C
  c->lr=c->r[0]; // 800FEC30
  c->r[1]=c->r[1]+0x00000010u; // 800FEC34
  return; // 800FEC38
}

// fn_800FEC3C
void f_800FEC3C(Ctx* __restrict c) {
  trace_call(0x800FEC3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEC3C
  c->r[0]=c->lr; // 800FEC40
  cmps(c,0,(int32_t)c->r[3],0); // 800FEC44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEC48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEC4C
  c->r[30]=c->r[3]|c->r[3]; // 800FEC50
  c->r[31]=c->r[4]|c->r[4]; // 800FEC54
  if (crb(c,2)) { goto L_800FEC78; } // 800FEC58
  if (crb(c,2)) { goto L_800FEC68; } // 800FEC5C
  c->r[4]=0u+0x00000000u; // 800FEC60
  c->lr=0x800FEC68u; f_802B1180(c); // 800FEC64
L_800FEC68:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEC68
  if (!crb(c,1)) { goto L_800FEC78; } // 800FEC6C
  c->r[3]=c->r[30]|c->r[30]; // 800FEC70
  c->lr=0x800FEC78u; f_80244DC0(c); // 800FEC74
L_800FEC78:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEC78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEC7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEC80
  c->lr=c->r[0]; // 800FEC84
  c->r[1]=c->r[1]+0x00000010u; // 800FEC88
  return; // 800FEC8C
}

// fn_800FEC90
void f_800FEC90(Ctx* __restrict c) {
  trace_call(0x800FEC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEC90
  c->r[0]=c->lr; // 800FEC94
  cmps(c,0,(int32_t)c->r[3],0); // 800FEC98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEC9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FECA0
  c->r[30]=c->r[3]|c->r[3]; // 800FECA4
  c->r[31]=c->r[4]|c->r[4]; // 800FECA8
  if (crb(c,2)) { goto L_800FECCC; } // 800FECAC
  if (crb(c,2)) { goto L_800FECBC; } // 800FECB0
  c->r[4]=0u+0x00000000u; // 800FECB4
  c->lr=0x800FECBCu; f_802B1180(c); // 800FECB8
L_800FECBC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FECBC
  if (!crb(c,1)) { goto L_800FECCC; } // 800FECC0
  c->r[3]=c->r[30]|c->r[30]; // 800FECC4
  c->lr=0x800FECCCu; f_80244DC0(c); // 800FECC8
L_800FECCC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FECCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FECD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FECD4
  c->lr=c->r[0]; // 800FECD8
  c->r[1]=c->r[1]+0x00000010u; // 800FECDC
  return; // 800FECE0
}

// fn_800FECE4
void f_800FECE4(Ctx* __restrict c) {
  trace_call(0x800FECE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FECE4
  c->r[0]=c->lr; // 800FECE8
  cmps(c,0,(int32_t)c->r[3],0); // 800FECEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FECF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FECF4
  c->r[30]=c->r[3]|c->r[3]; // 800FECF8
  c->r[31]=c->r[4]|c->r[4]; // 800FECFC
  if (crb(c,2)) { goto L_800FED20; } // 800FED00
  if (crb(c,2)) { goto L_800FED10; } // 800FED04
  c->r[4]=0u+0x00000000u; // 800FED08
  c->lr=0x800FED10u; f_802B1180(c); // 800FED0C
L_800FED10:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FED10
  if (!crb(c,1)) { goto L_800FED20; } // 800FED14
  c->r[3]=c->r[30]|c->r[30]; // 800FED18
  c->lr=0x800FED20u; f_80244DC0(c); // 800FED1C
L_800FED20:;
  c->r[3]=c->r[30]|c->r[30]; // 800FED20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FED24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FED28
  c->lr=c->r[0]; // 800FED2C
  c->r[1]=c->r[1]+0x00000010u; // 800FED30
  return; // 800FED34
}

// fn_800FED38
void f_800FED38(Ctx* __restrict c) {
  trace_call(0x800FED38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FED38
  c->r[0]=c->lr; // 800FED3C
  cmps(c,0,(int32_t)c->r[3],0); // 800FED40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FED44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FED48
  c->r[30]=c->r[3]|c->r[3]; // 800FED4C
  c->r[31]=c->r[4]|c->r[4]; // 800FED50
  if (crb(c,2)) { goto L_800FED74; } // 800FED54
  if (crb(c,2)) { goto L_800FED64; } // 800FED58
  c->r[4]=0u+0x00000000u; // 800FED5C
  c->lr=0x800FED64u; f_802B1180(c); // 800FED60
L_800FED64:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FED64
  if (!crb(c,1)) { goto L_800FED74; } // 800FED68
  c->r[3]=c->r[30]|c->r[30]; // 800FED6C
  c->lr=0x800FED74u; f_80244DC0(c); // 800FED70
L_800FED74:;
  c->r[3]=c->r[30]|c->r[30]; // 800FED74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FED78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FED7C
  c->lr=c->r[0]; // 800FED80
  c->r[1]=c->r[1]+0x00000010u; // 800FED84
  return; // 800FED88
}

// fn_800FED8C
void f_800FED8C(Ctx* __restrict c) {
  trace_call(0x800FED8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FED8C
  c->r[0]=c->lr; // 800FED90
  cmps(c,0,(int32_t)c->r[3],0); // 800FED94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FED98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FED9C
  c->r[30]=c->r[3]|c->r[3]; // 800FEDA0
  c->r[31]=c->r[4]|c->r[4]; // 800FEDA4
  if (crb(c,2)) { goto L_800FEDC8; } // 800FEDA8
  if (crb(c,2)) { goto L_800FEDB8; } // 800FEDAC
  c->r[4]=0u+0x00000000u; // 800FEDB0
  c->lr=0x800FEDB8u; f_802B1180(c); // 800FEDB4
L_800FEDB8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEDB8
  if (!crb(c,1)) { goto L_800FEDC8; } // 800FEDBC
  c->r[3]=c->r[30]|c->r[30]; // 800FEDC0
  c->lr=0x800FEDC8u; f_80244DC0(c); // 800FEDC4
L_800FEDC8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEDC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEDCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEDD0
  c->lr=c->r[0]; // 800FEDD4
  c->r[1]=c->r[1]+0x00000010u; // 800FEDD8
  return; // 800FEDDC
}

// fn_800FEDE0
void f_800FEDE0(Ctx* __restrict c) {
  trace_call(0x800FEDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEDE0
  c->r[0]=c->lr; // 800FEDE4
  cmps(c,0,(int32_t)c->r[3],0); // 800FEDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEDEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEDF0
  c->r[30]=c->r[3]|c->r[3]; // 800FEDF4
  c->r[31]=c->r[4]|c->r[4]; // 800FEDF8
  if (crb(c,2)) { goto L_800FEE1C; } // 800FEDFC
  if (crb(c,2)) { goto L_800FEE0C; } // 800FEE00
  c->r[4]=0u+0x00000000u; // 800FEE04
  c->lr=0x800FEE0Cu; f_802B1180(c); // 800FEE08
L_800FEE0C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEE0C
  if (!crb(c,1)) { goto L_800FEE1C; } // 800FEE10
  c->r[3]=c->r[30]|c->r[30]; // 800FEE14
  c->lr=0x800FEE1Cu; f_80244DC0(c); // 800FEE18
L_800FEE1C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEE1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEE20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEE24
  c->lr=c->r[0]; // 800FEE28
  c->r[1]=c->r[1]+0x00000010u; // 800FEE2C
  return; // 800FEE30
}

// fn_800FEE34
void f_800FEE34(Ctx* __restrict c) {
  trace_call(0x800FEE34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEE34
  c->r[0]=c->lr; // 800FEE38
  cmps(c,0,(int32_t)c->r[3],0); // 800FEE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEE40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEE44
  c->r[30]=c->r[3]|c->r[3]; // 800FEE48
  c->r[31]=c->r[4]|c->r[4]; // 800FEE4C
  if (crb(c,2)) { goto L_800FEE70; } // 800FEE50
  if (crb(c,2)) { goto L_800FEE60; } // 800FEE54
  c->r[4]=0u+0x00000000u; // 800FEE58
  c->lr=0x800FEE60u; f_802B1180(c); // 800FEE5C
L_800FEE60:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEE60
  if (!crb(c,1)) { goto L_800FEE70; } // 800FEE64
  c->r[3]=c->r[30]|c->r[30]; // 800FEE68
  c->lr=0x800FEE70u; f_80244DC0(c); // 800FEE6C
L_800FEE70:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEE70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEE74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEE78
  c->lr=c->r[0]; // 800FEE7C
  c->r[1]=c->r[1]+0x00000010u; // 800FEE80
  return; // 800FEE84
}

// fn_800FEE88
void f_800FEE88(Ctx* __restrict c) {
  trace_call(0x800FEE88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEE88
  c->r[0]=c->lr; // 800FEE8C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEE94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEE98
  c->r[30]=c->r[3]|c->r[3]; // 800FEE9C
  c->r[31]=c->r[4]|c->r[4]; // 800FEEA0
  if (crb(c,2)) { goto L_800FEEC4; } // 800FEEA4
  if (crb(c,2)) { goto L_800FEEB4; } // 800FEEA8
  c->r[4]=0u+0x00000000u; // 800FEEAC
  c->lr=0x800FEEB4u; f_802B1180(c); // 800FEEB0
L_800FEEB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEEB4
  if (!crb(c,1)) { goto L_800FEEC4; } // 800FEEB8
  c->r[3]=c->r[30]|c->r[30]; // 800FEEBC
  c->lr=0x800FEEC4u; f_80244DC0(c); // 800FEEC0
L_800FEEC4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEEC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEEC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEECC
  c->lr=c->r[0]; // 800FEED0
  c->r[1]=c->r[1]+0x00000010u; // 800FEED4
  return; // 800FEED8
}

// fn_800FEEDC
void f_800FEEDC(Ctx* __restrict c) {
  trace_call(0x800FEEDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEEDC
  c->r[0]=c->lr; // 800FEEE0
  cmps(c,0,(int32_t)c->r[3],0); // 800FEEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEEE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEEEC
  c->r[30]=c->r[3]|c->r[3]; // 800FEEF0
  c->r[31]=c->r[4]|c->r[4]; // 800FEEF4
  if (crb(c,2)) { goto L_800FEF14; } // 800FEEF8
  c->r[4]=0u+0x00000000u; // 800FEEFC
  c->lr=0x800FEF04u; f_8009BB2C(c); // 800FEF00
  cmps(c,0,(int32_t)c->r[31],0); // 800FEF04
  if (!crb(c,1)) { goto L_800FEF14; } // 800FEF08
  c->r[3]=c->r[30]|c->r[30]; // 800FEF0C
  c->lr=0x800FEF14u; f_80244DC0(c); // 800FEF10
L_800FEF14:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEF14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEF18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEF1C
  c->lr=c->r[0]; // 800FEF20
  c->r[1]=c->r[1]+0x00000010u; // 800FEF24
  return; // 800FEF28
}

// fn_800FEF2C
void f_800FEF2C(Ctx* __restrict c) {
  trace_call(0x800FEF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEF2C
  c->r[0]=c->lr; // 800FEF30
  cmps(c,0,(int32_t)c->r[3],0); // 800FEF34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEF38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEF3C
  c->r[30]=c->r[3]|c->r[3]; // 800FEF40
  c->r[31]=c->r[4]|c->r[4]; // 800FEF44
  if (crb(c,2)) { goto L_800FEF64; } // 800FEF48
  c->r[4]=0u+0x00000000u; // 800FEF4C
  c->lr=0x800FEF54u; f_8009C168(c); // 800FEF50
  cmps(c,0,(int32_t)c->r[31],0); // 800FEF54
  if (!crb(c,1)) { goto L_800FEF64; } // 800FEF58
  c->r[3]=c->r[30]|c->r[30]; // 800FEF5C
  c->lr=0x800FEF64u; f_80244DC0(c); // 800FEF60
L_800FEF64:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEF64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEF68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEF6C
  c->lr=c->r[0]; // 800FEF70
  c->r[1]=c->r[1]+0x00000010u; // 800FEF74
  return; // 800FEF78
}

// fn_800FEF7C
void f_800FEF7C(Ctx* __restrict c) {
  trace_call(0x800FEF7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEF7C
  c->r[0]=c->lr; // 800FEF80
  cmps(c,0,(int32_t)c->r[3],0); // 800FEF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEF88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEF8C
  c->r[30]=c->r[3]|c->r[3]; // 800FEF90
  c->r[31]=c->r[4]|c->r[4]; // 800FEF94
  if (crb(c,2)) { goto L_800FEFB4; } // 800FEF98
  c->r[4]=0u+0x00000000u; // 800FEF9C
  c->lr=0x800FEFA4u; f_8009C4DC(c); // 800FEFA0
  cmps(c,0,(int32_t)c->r[31],0); // 800FEFA4
  if (!crb(c,1)) { goto L_800FEFB4; } // 800FEFA8
  c->r[3]=c->r[30]|c->r[30]; // 800FEFAC
  c->lr=0x800FEFB4u; f_80244DC0(c); // 800FEFB0
L_800FEFB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FEFB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FEFB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FEFBC
  c->lr=c->r[0]; // 800FEFC0
  c->r[1]=c->r[1]+0x00000010u; // 800FEFC4
  return; // 800FEFC8
}

// fn_800FEFCC
void f_800FEFCC(Ctx* __restrict c) {
  trace_call(0x800FEFCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEFCC
  c->r[0]=c->lr; // 800FEFD0
  cmps(c,0,(int32_t)c->r[3],0); // 800FEFD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FEFD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEFDC
  c->r[30]=c->r[3]|c->r[3]; // 800FEFE0
  c->r[31]=c->r[4]|c->r[4]; // 800FEFE4
  if (crb(c,2)) { goto L_800FF008; } // 800FEFE8
  if (crb(c,2)) { goto L_800FEFF8; } // 800FEFEC
  c->r[4]=0u+0x00000000u; // 800FEFF0
  c->lr=0x800FEFF8u; f_802B1180(c); // 800FEFF4
L_800FEFF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FEFF8
  if (!crb(c,1)) { goto L_800FF008; } // 800FEFFC
  c->r[3]=c->r[30]|c->r[30]; // 800FF000
  c->lr=0x800FF008u; f_80244DC0(c); // 800FF004
L_800FF008:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF008
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF00C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF010
  c->lr=c->r[0]; // 800FF014
  c->r[1]=c->r[1]+0x00000010u; // 800FF018
  return; // 800FF01C
}

// fn_800FF020
void f_800FF020(Ctx* __restrict c) {
  trace_call(0x800FF020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF020
  c->r[0]=c->lr; // 800FF024
  cmps(c,0,(int32_t)c->r[3],0); // 800FF028
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF02C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF030
  c->r[30]=c->r[3]|c->r[3]; // 800FF034
  c->r[31]=c->r[4]|c->r[4]; // 800FF038
  if (crb(c,2)) { goto L_800FF058; } // 800FF03C
  c->r[4]=0u+0x00000000u; // 800FF040
  c->lr=0x800FF048u; f_8009CFC4(c); // 800FF044
  cmps(c,0,(int32_t)c->r[31],0); // 800FF048
  if (!crb(c,1)) { goto L_800FF058; } // 800FF04C
  c->r[3]=c->r[30]|c->r[30]; // 800FF050
  c->lr=0x800FF058u; f_80244DC0(c); // 800FF054
L_800FF058:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF058
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF05C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF060
  c->lr=c->r[0]; // 800FF064
  c->r[1]=c->r[1]+0x00000010u; // 800FF068
  return; // 800FF06C
}

// fn_800FF070
void f_800FF070(Ctx* __restrict c) {
  trace_call(0x800FF070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF070
  c->r[0]=c->lr; // 800FF074
  cmps(c,0,(int32_t)c->r[3],0); // 800FF078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF07C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF080
  c->r[30]=c->r[3]|c->r[3]; // 800FF084
  c->r[31]=c->r[4]|c->r[4]; // 800FF088
  if (crb(c,2)) { goto L_800FF0A8; } // 800FF08C
  c->r[4]=0u+0x00000000u; // 800FF090
  c->lr=0x800FF098u; f_8009D9F4(c); // 800FF094
  cmps(c,0,(int32_t)c->r[31],0); // 800FF098
  if (!crb(c,1)) { goto L_800FF0A8; } // 800FF09C
  c->r[3]=c->r[30]|c->r[30]; // 800FF0A0
  c->lr=0x800FF0A8u; f_80244DC0(c); // 800FF0A4
L_800FF0A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF0A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF0AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF0B0
  c->lr=c->r[0]; // 800FF0B4
  c->r[1]=c->r[1]+0x00000010u; // 800FF0B8
  return; // 800FF0BC
}

// fn_800FF0C0
void f_800FF0C0(Ctx* __restrict c) {
  trace_call(0x800FF0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF0C0
  c->r[0]=c->lr; // 800FF0C4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF0CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF0D0
  c->r[30]=c->r[3]|c->r[3]; // 800FF0D4
  c->r[31]=c->r[4]|c->r[4]; // 800FF0D8
  if (crb(c,2)) { goto L_800FF0FC; } // 800FF0DC
  if (crb(c,2)) { goto L_800FF0EC; } // 800FF0E0
  c->r[4]=0u+0x00000000u; // 800FF0E4
  c->lr=0x800FF0ECu; f_8009D9F4(c); // 800FF0E8
L_800FF0EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF0EC
  if (!crb(c,1)) { goto L_800FF0FC; } // 800FF0F0
  c->r[3]=c->r[30]|c->r[30]; // 800FF0F4
  c->lr=0x800FF0FCu; f_80244DC0(c); // 800FF0F8
L_800FF0FC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF0FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF100
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF104
  c->lr=c->r[0]; // 800FF108
  c->r[1]=c->r[1]+0x00000010u; // 800FF10C
  return; // 800FF110
}

// fn_800FF114
void f_800FF114(Ctx* __restrict c) {
  trace_call(0x800FF114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF114
  c->r[0]=c->lr; // 800FF118
  cmps(c,0,(int32_t)c->r[3],0); // 800FF11C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF120
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF124
  c->r[30]=c->r[3]|c->r[3]; // 800FF128
  c->r[31]=c->r[4]|c->r[4]; // 800FF12C
  if (crb(c,2)) { goto L_800FF150; } // 800FF130
  if (crb(c,2)) { goto L_800FF140; } // 800FF134
  c->r[4]=0u+0x00000000u; // 800FF138
  c->lr=0x800FF140u; f_8009D9F4(c); // 800FF13C
L_800FF140:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF140
  if (!crb(c,1)) { goto L_800FF150; } // 800FF144
  c->r[3]=c->r[30]|c->r[30]; // 800FF148
  c->lr=0x800FF150u; f_80244DC0(c); // 800FF14C
L_800FF150:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF150
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF154
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF158
  c->lr=c->r[0]; // 800FF15C
  c->r[1]=c->r[1]+0x00000010u; // 800FF160
  return; // 800FF164
}

// fn_800FF168
void f_800FF168(Ctx* __restrict c) {
  trace_call(0x800FF168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF168
  c->r[0]=c->lr; // 800FF16C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF170
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF174
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF178
  c->r[30]=c->r[3]|c->r[3]; // 800FF17C
  c->r[31]=c->r[4]|c->r[4]; // 800FF180
  if (crb(c,2)) { goto L_800FF1A4; } // 800FF184
  if (crb(c,2)) { goto L_800FF194; } // 800FF188
  c->r[4]=0u+0x00000000u; // 800FF18C
  c->lr=0x800FF194u; f_8009D9F4(c); // 800FF190
L_800FF194:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF194
  if (!crb(c,1)) { goto L_800FF1A4; } // 800FF198
  c->r[3]=c->r[30]|c->r[30]; // 800FF19C
  c->lr=0x800FF1A4u; f_80244DC0(c); // 800FF1A0
L_800FF1A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF1A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF1A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF1AC
  c->lr=c->r[0]; // 800FF1B0
  c->r[1]=c->r[1]+0x00000010u; // 800FF1B4
  return; // 800FF1B8
}

// fn_800FF1BC
void f_800FF1BC(Ctx* __restrict c) {
  trace_call(0x800FF1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF1BC
  c->r[0]=c->lr; // 800FF1C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF1C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF1C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF1CC
  c->r[30]=c->r[3]|c->r[3]; // 800FF1D0
  c->r[31]=c->r[4]|c->r[4]; // 800FF1D4
  if (crb(c,2)) { goto L_800FF1F8; } // 800FF1D8
  if (crb(c,2)) { goto L_800FF1E8; } // 800FF1DC
  c->r[4]=0u+0x00000000u; // 800FF1E0
  c->lr=0x800FF1E8u; f_8009D9F4(c); // 800FF1E4
L_800FF1E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF1E8
  if (!crb(c,1)) { goto L_800FF1F8; } // 800FF1EC
  c->r[3]=c->r[30]|c->r[30]; // 800FF1F0
  c->lr=0x800FF1F8u; f_80244DC0(c); // 800FF1F4
L_800FF1F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF1F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF1FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF200
  c->lr=c->r[0]; // 800FF204
  c->r[1]=c->r[1]+0x00000010u; // 800FF208
  return; // 800FF20C
}

// fn_800FF210
void f_800FF210(Ctx* __restrict c) {
  trace_call(0x800FF210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF210
  c->r[0]=c->lr; // 800FF214
  cmps(c,0,(int32_t)c->r[3],0); // 800FF218
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF21C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF220
  c->r[30]=c->r[3]|c->r[3]; // 800FF224
  c->r[31]=c->r[4]|c->r[4]; // 800FF228
  if (crb(c,2)) { goto L_800FF248; } // 800FF22C
  c->r[4]=0u+0x00000000u; // 800FF230
  c->lr=0x800FF238u; f_800A0A28(c); // 800FF234
  cmps(c,0,(int32_t)c->r[31],0); // 800FF238
  if (!crb(c,1)) { goto L_800FF248; } // 800FF23C
  c->r[3]=c->r[30]|c->r[30]; // 800FF240
  c->lr=0x800FF248u; f_80244DC0(c); // 800FF244
L_800FF248:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF248
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF24C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF250
  c->lr=c->r[0]; // 800FF254
  c->r[1]=c->r[1]+0x00000010u; // 800FF258
  return; // 800FF25C
}

// fn_800FF260
void f_800FF260(Ctx* __restrict c) {
  trace_call(0x800FF260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF260
  c->r[0]=c->lr; // 800FF264
  cmps(c,0,(int32_t)c->r[3],0); // 800FF268
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF26C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF270
  c->r[30]=c->r[3]|c->r[3]; // 800FF274
  c->r[31]=c->r[4]|c->r[4]; // 800FF278
  if (crb(c,2)) { goto L_800FF298; } // 800FF27C
  c->r[4]=0u+0x00000000u; // 800FF280
  c->lr=0x800FF288u; f_800A1564(c); // 800FF284
  cmps(c,0,(int32_t)c->r[31],0); // 800FF288
  if (!crb(c,1)) { goto L_800FF298; } // 800FF28C
  c->r[3]=c->r[30]|c->r[30]; // 800FF290
  c->lr=0x800FF298u; f_80244DC0(c); // 800FF294
L_800FF298:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF298
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF29C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF2A0
  c->lr=c->r[0]; // 800FF2A4
  c->r[1]=c->r[1]+0x00000010u; // 800FF2A8
  return; // 800FF2AC
}

// fn_800FF2B0
void f_800FF2B0(Ctx* __restrict c) {
  trace_call(0x800FF2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF2B0
  c->r[0]=c->lr; // 800FF2B4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF2BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF2C0
  c->r[30]=c->r[3]|c->r[3]; // 800FF2C4
  c->r[31]=c->r[4]|c->r[4]; // 800FF2C8
  if (crb(c,2)) { goto L_800FF2EC; } // 800FF2CC
  if (crb(c,2)) { goto L_800FF2DC; } // 800FF2D0
  c->r[4]=0u+0x00000000u; // 800FF2D4
  c->lr=0x800FF2DCu; f_802B1180(c); // 800FF2D8
L_800FF2DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF2DC
  if (!crb(c,1)) { goto L_800FF2EC; } // 800FF2E0
  c->r[3]=c->r[30]|c->r[30]; // 800FF2E4
  c->lr=0x800FF2ECu; f_80244DC0(c); // 800FF2E8
L_800FF2EC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF2EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF2F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF2F4
  c->lr=c->r[0]; // 800FF2F8
  c->r[1]=c->r[1]+0x00000010u; // 800FF2FC
  return; // 800FF300
}

// fn_800FF304
void f_800FF304(Ctx* __restrict c) {
  trace_call(0x800FF304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF304
  c->r[0]=c->lr; // 800FF308
  cmps(c,0,(int32_t)c->r[3],0); // 800FF30C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF310
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF314
  c->r[30]=c->r[3]|c->r[3]; // 800FF318
  c->r[31]=c->r[4]|c->r[4]; // 800FF31C
  if (crb(c,2)) { goto L_800FF340; } // 800FF320
  if (crb(c,2)) { goto L_800FF330; } // 800FF324
  c->r[4]=0u+0x00000000u; // 800FF328
  c->lr=0x800FF330u; f_802B1180(c); // 800FF32C
L_800FF330:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF330
  if (!crb(c,1)) { goto L_800FF340; } // 800FF334
  c->r[3]=c->r[30]|c->r[30]; // 800FF338
  c->lr=0x800FF340u; f_80244DC0(c); // 800FF33C
L_800FF340:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF340
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF344
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF348
  c->lr=c->r[0]; // 800FF34C
  c->r[1]=c->r[1]+0x00000010u; // 800FF350
  return; // 800FF354
}

// fn_800FF358
void f_800FF358(Ctx* __restrict c) {
  trace_call(0x800FF358u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF358
  c->r[0]=c->lr; // 800FF35C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF360
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF364
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF368
  c->r[30]=c->r[3]|c->r[3]; // 800FF36C
  c->r[31]=c->r[4]|c->r[4]; // 800FF370
  if (crb(c,2)) { goto L_800FF390; } // 800FF374
  c->r[4]=0u+0x00000000u; // 800FF378
  c->lr=0x800FF380u; f_800A29C0(c); // 800FF37C
  cmps(c,0,(int32_t)c->r[31],0); // 800FF380
  if (!crb(c,1)) { goto L_800FF390; } // 800FF384
  c->r[3]=c->r[30]|c->r[30]; // 800FF388
  c->lr=0x800FF390u; f_80244DC0(c); // 800FF38C
L_800FF390:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF390
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF394
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF398
  c->lr=c->r[0]; // 800FF39C
  c->r[1]=c->r[1]+0x00000010u; // 800FF3A0
  return; // 800FF3A4
}

// fn_800FF3A8
void f_800FF3A8(Ctx* __restrict c) {
  trace_call(0x800FF3A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF3A8
  c->r[0]=c->lr; // 800FF3AC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF3B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF3B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF3B8
  c->r[30]=c->r[3]|c->r[3]; // 800FF3BC
  c->r[31]=c->r[4]|c->r[4]; // 800FF3C0
  if (crb(c,2)) { goto L_800FF3E4; } // 800FF3C4
  if (crb(c,2)) { goto L_800FF3D4; } // 800FF3C8
  c->r[4]=0u+0x00000000u; // 800FF3CC
  c->lr=0x800FF3D4u; f_802B1180(c); // 800FF3D0
L_800FF3D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF3D4
  if (!crb(c,1)) { goto L_800FF3E4; } // 800FF3D8
  c->r[3]=c->r[30]|c->r[30]; // 800FF3DC
  c->lr=0x800FF3E4u; f_80244DC0(c); // 800FF3E0
L_800FF3E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF3E4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF3E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF3EC
  c->lr=c->r[0]; // 800FF3F0
  c->r[1]=c->r[1]+0x00000010u; // 800FF3F4
  return; // 800FF3F8
}

// fn_800FF3FC
void f_800FF3FC(Ctx* __restrict c) {
  trace_call(0x800FF3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF3FC
  c->r[0]=c->lr; // 800FF400
  cmps(c,0,(int32_t)c->r[3],0); // 800FF404
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF408
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF40C
  c->r[30]=c->r[3]|c->r[3]; // 800FF410
  c->r[31]=c->r[4]|c->r[4]; // 800FF414
  if (crb(c,2)) { goto L_800FF438; } // 800FF418
  if (crb(c,2)) { goto L_800FF428; } // 800FF41C
  c->r[4]=0u+0x00000000u; // 800FF420
  c->lr=0x800FF428u; f_802B1180(c); // 800FF424
L_800FF428:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF428
  if (!crb(c,1)) { goto L_800FF438; } // 800FF42C
  c->r[3]=c->r[30]|c->r[30]; // 800FF430
  c->lr=0x800FF438u; f_80244DC0(c); // 800FF434
L_800FF438:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF438
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF43C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF440
  c->lr=c->r[0]; // 800FF444
  c->r[1]=c->r[1]+0x00000010u; // 800FF448
  return; // 800FF44C
}

// fn_800FF450
void f_800FF450(Ctx* __restrict c) {
  trace_call(0x800FF450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF450
  c->r[0]=c->lr; // 800FF454
  cmps(c,0,(int32_t)c->r[3],0); // 800FF458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF45C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF460
  c->r[30]=c->r[3]|c->r[3]; // 800FF464
  c->r[31]=c->r[4]|c->r[4]; // 800FF468
  if (crb(c,2)) { goto L_800FF48C; } // 800FF46C
  if (crb(c,2)) { goto L_800FF47C; } // 800FF470
  c->r[4]=0u+0x00000000u; // 800FF474
  c->lr=0x800FF47Cu; f_802B1180(c); // 800FF478
L_800FF47C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF47C
  if (!crb(c,1)) { goto L_800FF48C; } // 800FF480
  c->r[3]=c->r[30]|c->r[30]; // 800FF484
  c->lr=0x800FF48Cu; f_80244DC0(c); // 800FF488
L_800FF48C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF48C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF490
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF494
  c->lr=c->r[0]; // 800FF498
  c->r[1]=c->r[1]+0x00000010u; // 800FF49C
  return; // 800FF4A0
}

// fn_800FF4A4
void f_800FF4A4(Ctx* __restrict c) {
  trace_call(0x800FF4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF4A4
  c->r[0]=c->lr; // 800FF4A8
  cmps(c,0,(int32_t)c->r[3],0); // 800FF4AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF4B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF4B4
  c->r[30]=c->r[3]|c->r[3]; // 800FF4B8
  c->r[31]=c->r[4]|c->r[4]; // 800FF4BC
  if (crb(c,2)) { goto L_800FF4E0; } // 800FF4C0
  if (crb(c,2)) { goto L_800FF4D0; } // 800FF4C4
  c->r[4]=0u+0x00000000u; // 800FF4C8
  c->lr=0x800FF4D0u; f_802B1180(c); // 800FF4CC
L_800FF4D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF4D0
  if (!crb(c,1)) { goto L_800FF4E0; } // 800FF4D4
  c->r[3]=c->r[30]|c->r[30]; // 800FF4D8
  c->lr=0x800FF4E0u; f_80244DC0(c); // 800FF4DC
L_800FF4E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF4E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF4E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF4E8
  c->lr=c->r[0]; // 800FF4EC
  c->r[1]=c->r[1]+0x00000010u; // 800FF4F0
  return; // 800FF4F4
}

// fn_800FF4F8
void f_800FF4F8(Ctx* __restrict c) {
  trace_call(0x800FF4F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF4F8
  c->r[0]=c->lr; // 800FF4FC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF500
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF504
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF508
  c->r[30]=c->r[3]|c->r[3]; // 800FF50C
  c->r[31]=c->r[4]|c->r[4]; // 800FF510
  if (crb(c,2)) { goto L_800FF534; } // 800FF514
  if (crb(c,2)) { goto L_800FF524; } // 800FF518
  c->r[4]=0u+0x00000000u; // 800FF51C
  c->lr=0x800FF524u; f_802B1180(c); // 800FF520
L_800FF524:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF524
  if (!crb(c,1)) { goto L_800FF534; } // 800FF528
  c->r[3]=c->r[30]|c->r[30]; // 800FF52C
  c->lr=0x800FF534u; f_80244DC0(c); // 800FF530
L_800FF534:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF534
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF538
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF53C
  c->lr=c->r[0]; // 800FF540
  c->r[1]=c->r[1]+0x00000010u; // 800FF544
  return; // 800FF548
}

// fn_800FF54C
void f_800FF54C(Ctx* __restrict c) {
  trace_call(0x800FF54Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF54C
  c->r[0]=c->lr; // 800FF550
  cmps(c,0,(int32_t)c->r[3],0); // 800FF554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF558
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF55C
  c->r[30]=c->r[3]|c->r[3]; // 800FF560
  c->r[31]=c->r[4]|c->r[4]; // 800FF564
  if (crb(c,2)) { goto L_800FF588; } // 800FF568
  if (crb(c,2)) { goto L_800FF578; } // 800FF56C
  c->r[4]=0u+0x00000000u; // 800FF570
  c->lr=0x800FF578u; f_802B1180(c); // 800FF574
L_800FF578:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF578
  if (!crb(c,1)) { goto L_800FF588; } // 800FF57C
  c->r[3]=c->r[30]|c->r[30]; // 800FF580
  c->lr=0x800FF588u; f_80244DC0(c); // 800FF584
L_800FF588:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF588
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF58C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF590
  c->lr=c->r[0]; // 800FF594
  c->r[1]=c->r[1]+0x00000010u; // 800FF598
  return; // 800FF59C
}

// fn_800FF5A0
void f_800FF5A0(Ctx* __restrict c) {
  trace_call(0x800FF5A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF5A0
  c->r[0]=c->lr; // 800FF5A4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF5A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF5AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF5B0
  c->r[30]=c->r[3]|c->r[3]; // 800FF5B4
  c->r[31]=c->r[4]|c->r[4]; // 800FF5B8
  if (crb(c,2)) { goto L_800FF5DC; } // 800FF5BC
  if (crb(c,2)) { goto L_800FF5CC; } // 800FF5C0
  c->r[4]=0u+0x00000000u; // 800FF5C4
  c->lr=0x800FF5CCu; f_802B1180(c); // 800FF5C8
L_800FF5CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF5CC
  if (!crb(c,1)) { goto L_800FF5DC; } // 800FF5D0
  c->r[3]=c->r[30]|c->r[30]; // 800FF5D4
  c->lr=0x800FF5DCu; f_80244DC0(c); // 800FF5D8
L_800FF5DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF5DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF5E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF5E4
  c->lr=c->r[0]; // 800FF5E8
  c->r[1]=c->r[1]+0x00000010u; // 800FF5EC
  return; // 800FF5F0
}

// fn_800FF5F4
void f_800FF5F4(Ctx* __restrict c) {
  trace_call(0x800FF5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF5F4
  c->r[0]=c->lr; // 800FF5F8
  cmps(c,0,(int32_t)c->r[3],0); // 800FF5FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF600
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF604
  c->r[30]=c->r[3]|c->r[3]; // 800FF608
  c->r[31]=c->r[4]|c->r[4]; // 800FF60C
  if (crb(c,2)) { goto L_800FF630; } // 800FF610
  if (crb(c,2)) { goto L_800FF620; } // 800FF614
  c->r[4]=0u+0x00000000u; // 800FF618
  c->lr=0x800FF620u; f_802B1180(c); // 800FF61C
L_800FF620:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF620
  if (!crb(c,1)) { goto L_800FF630; } // 800FF624
  c->r[3]=c->r[30]|c->r[30]; // 800FF628
  c->lr=0x800FF630u; f_80244DC0(c); // 800FF62C
L_800FF630:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF630
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF634
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF638
  c->lr=c->r[0]; // 800FF63C
  c->r[1]=c->r[1]+0x00000010u; // 800FF640
  return; // 800FF644
}

// fn_800FF648
void f_800FF648(Ctx* __restrict c) {
  trace_call(0x800FF648u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF648
  c->r[0]=c->lr; // 800FF64C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF650
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF654
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF658
  c->r[30]=c->r[3]|c->r[3]; // 800FF65C
  c->r[31]=c->r[4]|c->r[4]; // 800FF660
  if (crb(c,2)) { goto L_800FF684; } // 800FF664
  if (crb(c,2)) { goto L_800FF674; } // 800FF668
  c->r[4]=0u+0x00000000u; // 800FF66C
  c->lr=0x800FF674u; f_802B1180(c); // 800FF670
L_800FF674:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF674
  if (!crb(c,1)) { goto L_800FF684; } // 800FF678
  c->r[3]=c->r[30]|c->r[30]; // 800FF67C
  c->lr=0x800FF684u; f_80244DC0(c); // 800FF680
L_800FF684:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF684
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF688
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF68C
  c->lr=c->r[0]; // 800FF690
  c->r[1]=c->r[1]+0x00000010u; // 800FF694
  return; // 800FF698
}

// fn_800FF69C
void f_800FF69C(Ctx* __restrict c) {
  trace_call(0x800FF69Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF69C
  c->r[0]=c->lr; // 800FF6A0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF6A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF6AC
  c->r[30]=c->r[3]|c->r[3]; // 800FF6B0
  c->r[31]=c->r[4]|c->r[4]; // 800FF6B4
  if (crb(c,2)) { goto L_800FF6D8; } // 800FF6B8
  if (crb(c,2)) { goto L_800FF6C8; } // 800FF6BC
  c->r[4]=0u+0x00000000u; // 800FF6C0
  c->lr=0x800FF6C8u; f_802B1180(c); // 800FF6C4
L_800FF6C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF6C8
  if (!crb(c,1)) { goto L_800FF6D8; } // 800FF6CC
  c->r[3]=c->r[30]|c->r[30]; // 800FF6D0
  c->lr=0x800FF6D8u; f_80244DC0(c); // 800FF6D4
L_800FF6D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF6D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF6DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF6E0
  c->lr=c->r[0]; // 800FF6E4
  c->r[1]=c->r[1]+0x00000010u; // 800FF6E8
  return; // 800FF6EC
}

// fn_800FF6F0
void f_800FF6F0(Ctx* __restrict c) {
  trace_call(0x800FF6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF6F0
  c->r[0]=c->lr; // 800FF6F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF6F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF6FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF700
  c->r[30]=c->r[3]|c->r[3]; // 800FF704
  c->r[31]=c->r[4]|c->r[4]; // 800FF708
  if (crb(c,2)) { goto L_800FF72C; } // 800FF70C
  if (crb(c,2)) { goto L_800FF71C; } // 800FF710
  c->r[4]=0u+0x00000000u; // 800FF714
  c->lr=0x800FF71Cu; f_802B1180(c); // 800FF718
L_800FF71C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF71C
  if (!crb(c,1)) { goto L_800FF72C; } // 800FF720
  c->r[3]=c->r[30]|c->r[30]; // 800FF724
  c->lr=0x800FF72Cu; f_80244DC0(c); // 800FF728
L_800FF72C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF72C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF730
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF734
  c->lr=c->r[0]; // 800FF738
  c->r[1]=c->r[1]+0x00000010u; // 800FF73C
  return; // 800FF740
}

// fn_800FF744
void f_800FF744(Ctx* __restrict c) {
  trace_call(0x800FF744u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF744
  c->r[0]=c->lr; // 800FF748
  cmps(c,0,(int32_t)c->r[3],0); // 800FF74C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF750
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF754
  c->r[30]=c->r[3]|c->r[3]; // 800FF758
  c->r[31]=c->r[4]|c->r[4]; // 800FF75C
  if (crb(c,2)) { goto L_800FF780; } // 800FF760
  if (crb(c,2)) { goto L_800FF770; } // 800FF764
  c->r[4]=0u+0x00000000u; // 800FF768
  c->lr=0x800FF770u; f_802B1180(c); // 800FF76C
L_800FF770:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF770
  if (!crb(c,1)) { goto L_800FF780; } // 800FF774
  c->r[3]=c->r[30]|c->r[30]; // 800FF778
  c->lr=0x800FF780u; f_80244DC0(c); // 800FF77C
L_800FF780:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF780
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF784
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF788
  c->lr=c->r[0]; // 800FF78C
  c->r[1]=c->r[1]+0x00000010u; // 800FF790
  return; // 800FF794
}

// fn_800FF798
void f_800FF798(Ctx* __restrict c) {
  trace_call(0x800FF798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF798
  c->r[0]=c->lr; // 800FF79C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF7A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF7A8
  c->r[30]=c->r[3]|c->r[3]; // 800FF7AC
  c->r[31]=c->r[4]|c->r[4]; // 800FF7B0
  if (crb(c,2)) { goto L_800FF7D4; } // 800FF7B4
  if (crb(c,2)) { goto L_800FF7C4; } // 800FF7B8
  c->r[4]=0u+0x00000000u; // 800FF7BC
  c->lr=0x800FF7C4u; f_802B1180(c); // 800FF7C0
L_800FF7C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF7C4
  if (!crb(c,1)) { goto L_800FF7D4; } // 800FF7C8
  c->r[3]=c->r[30]|c->r[30]; // 800FF7CC
  c->lr=0x800FF7D4u; f_80244DC0(c); // 800FF7D0
L_800FF7D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF7D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF7D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF7DC
  c->lr=c->r[0]; // 800FF7E0
  c->r[1]=c->r[1]+0x00000010u; // 800FF7E4
  return; // 800FF7E8
}

// fn_800FF7EC
void f_800FF7EC(Ctx* __restrict c) {
  trace_call(0x800FF7ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF7EC
  c->r[0]=c->lr; // 800FF7F0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF7F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF7F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF7FC
  c->r[30]=c->r[3]|c->r[3]; // 800FF800
  c->r[31]=c->r[4]|c->r[4]; // 800FF804
  if (crb(c,2)) { goto L_800FF828; } // 800FF808
  if (crb(c,2)) { goto L_800FF818; } // 800FF80C
  c->r[4]=0u+0x00000000u; // 800FF810
  c->lr=0x800FF818u; f_802B1180(c); // 800FF814
L_800FF818:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF818
  if (!crb(c,1)) { goto L_800FF828; } // 800FF81C
  c->r[3]=c->r[30]|c->r[30]; // 800FF820
  c->lr=0x800FF828u; f_80244DC0(c); // 800FF824
L_800FF828:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF828
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF82C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF830
  c->lr=c->r[0]; // 800FF834
  c->r[1]=c->r[1]+0x00000010u; // 800FF838
  return; // 800FF83C
}

// fn_800FF840
void f_800FF840(Ctx* __restrict c) {
  trace_call(0x800FF840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF840
  c->r[0]=c->lr; // 800FF844
  cmps(c,0,(int32_t)c->r[3],0); // 800FF848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF84C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF850
  c->r[30]=c->r[3]|c->r[3]; // 800FF854
  c->r[31]=c->r[4]|c->r[4]; // 800FF858
  if (crb(c,2)) { goto L_800FF87C; } // 800FF85C
  if (crb(c,2)) { goto L_800FF86C; } // 800FF860
  c->r[4]=0u+0x00000000u; // 800FF864
  c->lr=0x800FF86Cu; f_802B1180(c); // 800FF868
L_800FF86C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF86C
  if (!crb(c,1)) { goto L_800FF87C; } // 800FF870
  c->r[3]=c->r[30]|c->r[30]; // 800FF874
  c->lr=0x800FF87Cu; f_80244DC0(c); // 800FF878
L_800FF87C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF87C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF884
  c->lr=c->r[0]; // 800FF888
  c->r[1]=c->r[1]+0x00000010u; // 800FF88C
  return; // 800FF890
}

// fn_800FF894
void f_800FF894(Ctx* __restrict c) {
  trace_call(0x800FF894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF894
  c->r[0]=c->lr; // 800FF898
  cmps(c,0,(int32_t)c->r[3],0); // 800FF89C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF8A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF8A4
  c->r[30]=c->r[3]|c->r[3]; // 800FF8A8
  c->r[31]=c->r[4]|c->r[4]; // 800FF8AC
  if (crb(c,2)) { goto L_800FF8D0; } // 800FF8B0
  if (crb(c,2)) { goto L_800FF8C0; } // 800FF8B4
  c->r[4]=0u+0x00000000u; // 800FF8B8
  c->lr=0x800FF8C0u; f_802B1180(c); // 800FF8BC
L_800FF8C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF8C0
  if (!crb(c,1)) { goto L_800FF8D0; } // 800FF8C4
  c->r[3]=c->r[30]|c->r[30]; // 800FF8C8
  c->lr=0x800FF8D0u; f_80244DC0(c); // 800FF8CC
L_800FF8D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF8D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF8D8
  c->lr=c->r[0]; // 800FF8DC
  c->r[1]=c->r[1]+0x00000010u; // 800FF8E0
  return; // 800FF8E4
}

// fn_800FF8E8
void f_800FF8E8(Ctx* __restrict c) {
  trace_call(0x800FF8E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF8E8
  c->r[0]=c->lr; // 800FF8EC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF8F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF8F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF8F8
  c->r[30]=c->r[3]|c->r[3]; // 800FF8FC
  c->r[31]=c->r[4]|c->r[4]; // 800FF900
  if (crb(c,2)) { goto L_800FF924; } // 800FF904
  if (crb(c,2)) { goto L_800FF914; } // 800FF908
  c->r[4]=0u+0x00000000u; // 800FF90C
  c->lr=0x800FF914u; f_802B1180(c); // 800FF910
L_800FF914:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF914
  if (!crb(c,1)) { goto L_800FF924; } // 800FF918
  c->r[3]=c->r[30]|c->r[30]; // 800FF91C
  c->lr=0x800FF924u; f_80244DC0(c); // 800FF920
L_800FF924:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF924
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF928
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF92C
  c->lr=c->r[0]; // 800FF930
  c->r[1]=c->r[1]+0x00000010u; // 800FF934
  return; // 800FF938
}

// fn_800FF93C
void f_800FF93C(Ctx* __restrict c) {
  trace_call(0x800FF93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF93C
  c->r[0]=c->lr; // 800FF940
  cmps(c,0,(int32_t)c->r[3],0); // 800FF944
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF948
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF94C
  c->r[30]=c->r[3]|c->r[3]; // 800FF950
  c->r[31]=c->r[4]|c->r[4]; // 800FF954
  if (crb(c,2)) { goto L_800FF974; } // 800FF958
  c->r[4]=0u+0x00000000u; // 800FF95C
  c->lr=0x800FF964u; f_800AF9A0(c); // 800FF960
  cmps(c,0,(int32_t)c->r[31],0); // 800FF964
  if (!crb(c,1)) { goto L_800FF974; } // 800FF968
  c->r[3]=c->r[30]|c->r[30]; // 800FF96C
  c->lr=0x800FF974u; f_80244DC0(c); // 800FF970
L_800FF974:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF974
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF978
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF97C
  c->lr=c->r[0]; // 800FF980
  c->r[1]=c->r[1]+0x00000010u; // 800FF984
  return; // 800FF988
}

// fn_800FF98C
void f_800FF98C(Ctx* __restrict c) {
  trace_call(0x800FF98Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF98C
  c->r[0]=c->lr; // 800FF990
  cmps(c,0,(int32_t)c->r[3],0); // 800FF994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF998
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF99C
  c->r[30]=c->r[3]|c->r[3]; // 800FF9A0
  c->r[31]=c->r[4]|c->r[4]; // 800FF9A4
  if (crb(c,2)) { goto L_800FF9C4; } // 800FF9A8
  c->r[4]=0u+0x00000000u; // 800FF9AC
  c->lr=0x800FF9B4u; f_800AFF98(c); // 800FF9B0
  cmps(c,0,(int32_t)c->r[31],0); // 800FF9B4
  if (!crb(c,1)) { goto L_800FF9C4; } // 800FF9B8
  c->r[3]=c->r[30]|c->r[30]; // 800FF9BC
  c->lr=0x800FF9C4u; f_80244DC0(c); // 800FF9C0
L_800FF9C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FF9C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF9CC
  c->lr=c->r[0]; // 800FF9D0
  c->r[1]=c->r[1]+0x00000010u; // 800FF9D4
  return; // 800FF9D8
}

// fn_800FF9DC
void f_800FF9DC(Ctx* __restrict c) {
  trace_call(0x800FF9DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF9DC
  c->r[0]=c->lr; // 800FF9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF9E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF9EC
  c->r[30]=c->r[3]|c->r[3]; // 800FF9F0
  c->r[31]=c->r[4]|c->r[4]; // 800FF9F4
  if (crb(c,2)) { goto L_800FFA14; } // 800FF9F8
  c->r[4]=0u+0x00000000u; // 800FF9FC
  c->lr=0x800FFA04u; f_800B03A4(c); // 800FFA00
  cmps(c,0,(int32_t)c->r[31],0); // 800FFA04
  if (!crb(c,1)) { goto L_800FFA14; } // 800FFA08
  c->r[3]=c->r[30]|c->r[30]; // 800FFA0C
  c->lr=0x800FFA14u; f_80244DC0(c); // 800FFA10
L_800FFA14:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFA14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFA1C
  c->lr=c->r[0]; // 800FFA20
  c->r[1]=c->r[1]+0x00000010u; // 800FFA24
  return; // 800FFA28
}

// fn_800FFA2C
void f_800FFA2C(Ctx* __restrict c) {
  trace_call(0x800FFA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFA2C
  c->r[0]=c->lr; // 800FFA30
  cmps(c,0,(int32_t)c->r[3],0); // 800FFA34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFA38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFA3C
  c->r[30]=c->r[3]|c->r[3]; // 800FFA40
  c->r[31]=c->r[4]|c->r[4]; // 800FFA44
  if (crb(c,2)) { goto L_800FFA64; } // 800FFA48
  c->r[4]=0u+0x00000000u; // 800FFA4C
  c->lr=0x800FFA54u; f_800B069C(c); // 800FFA50
  cmps(c,0,(int32_t)c->r[31],0); // 800FFA54
  if (!crb(c,1)) { goto L_800FFA64; } // 800FFA58
  c->r[3]=c->r[30]|c->r[30]; // 800FFA5C
  c->lr=0x800FFA64u; f_80244DC0(c); // 800FFA60
L_800FFA64:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFA64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFA68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFA6C
  c->lr=c->r[0]; // 800FFA70
  c->r[1]=c->r[1]+0x00000010u; // 800FFA74
  return; // 800FFA78
}

// fn_800FFA7C
void f_800FFA7C(Ctx* __restrict c) {
  trace_call(0x800FFA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFA7C
  c->r[0]=c->lr; // 800FFA80
  cmps(c,0,(int32_t)c->r[3],0); // 800FFA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFA88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFA8C
  c->r[30]=c->r[3]|c->r[3]; // 800FFA90
  c->r[31]=c->r[4]|c->r[4]; // 800FFA94
  if (crb(c,2)) { goto L_800FFAB8; } // 800FFA98
  if (crb(c,2)) { goto L_800FFAA8; } // 800FFA9C
  c->r[4]=0u+0x00000000u; // 800FFAA0
  c->lr=0x800FFAA8u; f_802B1180(c); // 800FFAA4
L_800FFAA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFAA8
  if (!crb(c,1)) { goto L_800FFAB8; } // 800FFAAC
  c->r[3]=c->r[30]|c->r[30]; // 800FFAB0
  c->lr=0x800FFAB8u; f_80244DC0(c); // 800FFAB4
L_800FFAB8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFAB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFAC0
  c->lr=c->r[0]; // 800FFAC4
  c->r[1]=c->r[1]+0x00000010u; // 800FFAC8
  return; // 800FFACC
}

// fn_800FFAD0
void f_800FFAD0(Ctx* __restrict c) {
  trace_call(0x800FFAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFAD0
  c->r[0]=c->lr; // 800FFAD4
  cmps(c,0,(int32_t)c->r[3],0); // 800FFAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFADC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFAE0
  c->r[30]=c->r[3]|c->r[3]; // 800FFAE4
  c->r[31]=c->r[4]|c->r[4]; // 800FFAE8
  if (crb(c,2)) { goto L_800FFB0C; } // 800FFAEC
  if (crb(c,2)) { goto L_800FFAFC; } // 800FFAF0
  c->r[4]=0u+0x00000000u; // 800FFAF4
  c->lr=0x800FFAFCu; f_802B1180(c); // 800FFAF8
L_800FFAFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFAFC
  if (!crb(c,1)) { goto L_800FFB0C; } // 800FFB00
  c->r[3]=c->r[30]|c->r[30]; // 800FFB04
  c->lr=0x800FFB0Cu; f_80244DC0(c); // 800FFB08
L_800FFB0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFB0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFB10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFB14
  c->lr=c->r[0]; // 800FFB18
  c->r[1]=c->r[1]+0x00000010u; // 800FFB1C
  return; // 800FFB20
}

// fn_800FFB24
void f_800FFB24(Ctx* __restrict c) {
  trace_call(0x800FFB24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFB24
  c->r[0]=c->lr; // 800FFB28
  cmps(c,0,(int32_t)c->r[3],0); // 800FFB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFB30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFB34
  c->r[30]=c->r[3]|c->r[3]; // 800FFB38
  c->r[31]=c->r[4]|c->r[4]; // 800FFB3C
  if (crb(c,2)) { goto L_800FFB60; } // 800FFB40
  if (crb(c,2)) { goto L_800FFB50; } // 800FFB44
  c->r[4]=0u+0x00000000u; // 800FFB48
  c->lr=0x800FFB50u; f_802B1180(c); // 800FFB4C
L_800FFB50:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFB50
  if (!crb(c,1)) { goto L_800FFB60; } // 800FFB54
  c->r[3]=c->r[30]|c->r[30]; // 800FFB58
  c->lr=0x800FFB60u; f_80244DC0(c); // 800FFB5C
L_800FFB60:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFB60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFB64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFB68
  c->lr=c->r[0]; // 800FFB6C
  c->r[1]=c->r[1]+0x00000010u; // 800FFB70
  return; // 800FFB74
}

// fn_800FFB78
void f_800FFB78(Ctx* __restrict c) {
  trace_call(0x800FFB78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFB78
  c->r[0]=c->lr; // 800FFB7C
  cmps(c,0,(int32_t)c->r[3],0); // 800FFB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFB84
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFB88
  c->r[30]=c->r[3]|c->r[3]; // 800FFB8C
  c->r[31]=c->r[4]|c->r[4]; // 800FFB90
  if (crb(c,2)) { goto L_800FFBB4; } // 800FFB94
  if (crb(c,2)) { goto L_800FFBA4; } // 800FFB98
  c->r[4]=0u+0x00000000u; // 800FFB9C
  c->lr=0x800FFBA4u; f_802B1180(c); // 800FFBA0
L_800FFBA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFBA4
  if (!crb(c,1)) { goto L_800FFBB4; } // 800FFBA8
  c->r[3]=c->r[30]|c->r[30]; // 800FFBAC
  c->lr=0x800FFBB4u; f_80244DC0(c); // 800FFBB0
L_800FFBB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFBB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFBB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFBBC
  c->lr=c->r[0]; // 800FFBC0
  c->r[1]=c->r[1]+0x00000010u; // 800FFBC4
  return; // 800FFBC8
}

// fn_800FFBCC
void f_800FFBCC(Ctx* __restrict c) {
  trace_call(0x800FFBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFBCC
  c->r[0]=c->lr; // 800FFBD0
  cmps(c,0,(int32_t)c->r[3],0); // 800FFBD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFBD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFBDC
  c->r[30]=c->r[3]|c->r[3]; // 800FFBE0
  c->r[31]=c->r[4]|c->r[4]; // 800FFBE4
  if (crb(c,2)) { goto L_800FFC08; } // 800FFBE8
  if (crb(c,2)) { goto L_800FFBF8; } // 800FFBEC
  c->r[4]=0u+0x00000000u; // 800FFBF0
  c->lr=0x800FFBF8u; f_802B1180(c); // 800FFBF4
L_800FFBF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFBF8
  if (!crb(c,1)) { goto L_800FFC08; } // 800FFBFC
  c->r[3]=c->r[30]|c->r[30]; // 800FFC00
  c->lr=0x800FFC08u; f_80244DC0(c); // 800FFC04
L_800FFC08:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFC08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFC10
  c->lr=c->r[0]; // 800FFC14
  c->r[1]=c->r[1]+0x00000010u; // 800FFC18
  return; // 800FFC1C
}

// fn_800FFC20
void f_800FFC20(Ctx* __restrict c) {
  trace_call(0x800FFC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC20
  c->r[0]=c->lr; // 800FFC24
  cmps(c,0,(int32_t)c->r[3],0); // 800FFC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFC2C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFC30
  c->r[30]=c->r[3]|c->r[3]; // 800FFC34
  c->r[31]=c->r[4]|c->r[4]; // 800FFC38
  if (crb(c,2)) { goto L_800FFC5C; } // 800FFC3C
  if (crb(c,2)) { goto L_800FFC4C; } // 800FFC40
  c->r[4]=0u+0x00000000u; // 800FFC44
  c->lr=0x800FFC4Cu; f_802B1180(c); // 800FFC48
L_800FFC4C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFC4C
  if (!crb(c,1)) { goto L_800FFC5C; } // 800FFC50
  c->r[3]=c->r[30]|c->r[30]; // 800FFC54
  c->lr=0x800FFC5Cu; f_80244DC0(c); // 800FFC58
L_800FFC5C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFC5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFC60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFC64
  c->lr=c->r[0]; // 800FFC68
  c->r[1]=c->r[1]+0x00000010u; // 800FFC6C
  return; // 800FFC70
}

// fn_800FFC74
void f_800FFC74(Ctx* __restrict c) {
  trace_call(0x800FFC74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC74
  c->r[0]=c->lr; // 800FFC78
  cmps(c,0,(int32_t)c->r[3],0); // 800FFC7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFC80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFC84
  c->r[30]=c->r[3]|c->r[3]; // 800FFC88
  c->r[31]=c->r[4]|c->r[4]; // 800FFC8C
  if (crb(c,2)) { goto L_800FFCB0; } // 800FFC90
  if (crb(c,2)) { goto L_800FFCA0; } // 800FFC94
  c->r[4]=0u+0x00000000u; // 800FFC98
  c->lr=0x800FFCA0u; f_802B1180(c); // 800FFC9C
L_800FFCA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFCA0
  if (!crb(c,1)) { goto L_800FFCB0; } // 800FFCA4
  c->r[3]=c->r[30]|c->r[30]; // 800FFCA8
  c->lr=0x800FFCB0u; f_80244DC0(c); // 800FFCAC
L_800FFCB0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFCB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFCB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFCB8
  c->lr=c->r[0]; // 800FFCBC
  c->r[1]=c->r[1]+0x00000010u; // 800FFCC0
  return; // 800FFCC4
}

// fn_800FFCC8
void f_800FFCC8(Ctx* __restrict c) {
  trace_call(0x800FFCC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFCC8
  c->r[0]=c->lr; // 800FFCCC
  cmps(c,0,(int32_t)c->r[3],0); // 800FFCD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFCD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFCD8
  c->r[30]=c->r[3]|c->r[3]; // 800FFCDC
  c->r[31]=c->r[4]|c->r[4]; // 800FFCE0
  if (crb(c,2)) { goto L_800FFD04; } // 800FFCE4
  if (crb(c,2)) { goto L_800FFCF4; } // 800FFCE8
  c->r[4]=0u+0x00000000u; // 800FFCEC
  c->lr=0x800FFCF4u; f_802B1180(c); // 800FFCF0
L_800FFCF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFCF4
  if (!crb(c,1)) { goto L_800FFD04; } // 800FFCF8
  c->r[3]=c->r[30]|c->r[30]; // 800FFCFC
  c->lr=0x800FFD04u; f_80244DC0(c); // 800FFD00
L_800FFD04:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFD04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFD08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFD0C
  c->lr=c->r[0]; // 800FFD10
  c->r[1]=c->r[1]+0x00000010u; // 800FFD14
  return; // 800FFD18
}

// fn_800FFD1C
void f_800FFD1C(Ctx* __restrict c) {
  trace_call(0x800FFD1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD1C
  c->r[0]=c->lr; // 800FFD20
  cmps(c,0,(int32_t)c->r[3],0); // 800FFD24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFD2C
  c->r[30]=c->r[3]|c->r[3]; // 800FFD30
  c->r[31]=c->r[4]|c->r[4]; // 800FFD34
  if (crb(c,2)) { goto L_800FFD58; } // 800FFD38
  if (crb(c,2)) { goto L_800FFD48; } // 800FFD3C
  c->r[4]=0u+0x00000000u; // 800FFD40
  c->lr=0x800FFD48u; f_802B1180(c); // 800FFD44
L_800FFD48:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFD48
  if (!crb(c,1)) { goto L_800FFD58; } // 800FFD4C
  c->r[3]=c->r[30]|c->r[30]; // 800FFD50
  c->lr=0x800FFD58u; f_80244DC0(c); // 800FFD54
L_800FFD58:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFD58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFD5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFD60
  c->lr=c->r[0]; // 800FFD64
  c->r[1]=c->r[1]+0x00000010u; // 800FFD68
  return; // 800FFD6C
}

// fn_800FFD70
void f_800FFD70(Ctx* __restrict c) {
  trace_call(0x800FFD70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD70
  c->r[0]=c->lr; // 800FFD74
  cmps(c,0,(int32_t)c->r[3],0); // 800FFD78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFD80
  c->r[30]=c->r[3]|c->r[3]; // 800FFD84
  c->r[31]=c->r[4]|c->r[4]; // 800FFD88
  if (crb(c,2)) { goto L_800FFDA8; } // 800FFD8C
  c->r[4]=0u+0x00000000u; // 800FFD90
  c->lr=0x800FFD98u; f_800B5F98(c); // 800FFD94
  cmps(c,0,(int32_t)c->r[31],0); // 800FFD98
  if (!crb(c,1)) { goto L_800FFDA8; } // 800FFD9C
  c->r[3]=c->r[30]|c->r[30]; // 800FFDA0
  c->lr=0x800FFDA8u; f_80244DC0(c); // 800FFDA4
L_800FFDA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFDA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFDAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFDB0
  c->lr=c->r[0]; // 800FFDB4
  c->r[1]=c->r[1]+0x00000010u; // 800FFDB8
  return; // 800FFDBC
}

// fn_800FFDC0
void f_800FFDC0(Ctx* __restrict c) {
  trace_call(0x800FFDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFDC0
  c->r[0]=c->lr; // 800FFDC4
  cmps(c,0,(int32_t)c->r[3],0); // 800FFDC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFDCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFDD0
  c->r[30]=c->r[3]|c->r[3]; // 800FFDD4
  c->r[31]=c->r[4]|c->r[4]; // 800FFDD8
  if (crb(c,2)) { goto L_800FFDF8; } // 800FFDDC
  c->r[4]=0u+0x00000000u; // 800FFDE0
  c->lr=0x800FFDE8u; f_800B6C40(c); // 800FFDE4
  cmps(c,0,(int32_t)c->r[31],0); // 800FFDE8
  if (!crb(c,1)) { goto L_800FFDF8; } // 800FFDEC
  c->r[3]=c->r[30]|c->r[30]; // 800FFDF0
  c->lr=0x800FFDF8u; f_80244DC0(c); // 800FFDF4
L_800FFDF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFDF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFDFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFE00
  c->lr=c->r[0]; // 800FFE04
  c->r[1]=c->r[1]+0x00000010u; // 800FFE08
  return; // 800FFE0C
}

// fn_800FFE10
void f_800FFE10(Ctx* __restrict c) {
  trace_call(0x800FFE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFE10
  c->r[0]=c->lr; // 800FFE14
  cmps(c,0,(int32_t)c->r[3],0); // 800FFE18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFE1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFE20
  c->r[30]=c->r[3]|c->r[3]; // 800FFE24
  c->r[31]=c->r[4]|c->r[4]; // 800FFE28
  if (crb(c,2)) { goto L_800FFE4C; } // 800FFE2C
  if (crb(c,2)) { goto L_800FFE3C; } // 800FFE30
  c->r[4]=0u+0x00000000u; // 800FFE34
  c->lr=0x800FFE3Cu; f_802B1180(c); // 800FFE38
L_800FFE3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFE3C
  if (!crb(c,1)) { goto L_800FFE4C; } // 800FFE40
  c->r[3]=c->r[30]|c->r[30]; // 800FFE44
  c->lr=0x800FFE4Cu; f_80244DC0(c); // 800FFE48
L_800FFE4C:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFE4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFE50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFE54
  c->lr=c->r[0]; // 800FFE58
  c->r[1]=c->r[1]+0x00000010u; // 800FFE5C
  return; // 800FFE60
}

// fn_800FFE64
void f_800FFE64(Ctx* __restrict c) {
  trace_call(0x800FFE64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFE64
  c->r[0]=c->lr; // 800FFE68
  cmps(c,0,(int32_t)c->r[3],0); // 800FFE6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFE70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFE74
  c->r[30]=c->r[3]|c->r[3]; // 800FFE78
  c->r[31]=c->r[4]|c->r[4]; // 800FFE7C
  if (crb(c,2)) { goto L_800FFEA0; } // 800FFE80
  if (crb(c,2)) { goto L_800FFE90; } // 800FFE84
  c->r[4]=0u+0x00000000u; // 800FFE88
  c->lr=0x800FFE90u; f_802B1180(c); // 800FFE8C
L_800FFE90:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FFE90
  if (!crb(c,1)) { goto L_800FFEA0; } // 800FFE94
  c->r[3]=c->r[30]|c->r[30]; // 800FFE98
  c->lr=0x800FFEA0u; f_80244DC0(c); // 800FFE9C
L_800FFEA0:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFEA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFEA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFEA8
  c->lr=c->r[0]; // 800FFEAC
  c->r[1]=c->r[1]+0x00000010u; // 800FFEB0
  return; // 800FFEB4
}

