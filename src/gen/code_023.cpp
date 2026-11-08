#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800EAB94
void f_800EAB94(Ctx* __restrict c) {
  trace_call(0x800EAB94u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EAB94
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EAB98
  c->ctr=c->r[12]; // 800EAB9C
  if (true) { dispatch(c,c->ctr); return; } // 800EABA0
}

// fn_800EABA4
void f_800EABA4(Ctx* __restrict c) {
  trace_call(0x800EABA4u);
  c->r[3]=0u+0x80410000u; // 800EABA4
  c->r[3]=c->r[3]+0xFFFFE4AAu; // 800EABA8
  return; // 800EABAC
}

// fn_800EABB0
void f_800EABB0(Ctx* __restrict c) {
  trace_call(0x800EABB0u);
  c->r[3]=0u+0x00000030u; // 800EABB0
  return; // 800EABB4
}

// fn_800EABB8
void f_800EABB8(Ctx* __restrict c) {
  trace_call(0x800EABB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EABB8
  c->r[0]=c->lr; // 800EABBC
  c->r[3]=0u+0x00000030u; // 800EABC0
  c->r[4]=c->r[13]+0xFFFFB8E9u; // 800EABC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EABC8
  c->r[5]=0u+0x00000000u; // 800EABCC
  c->r[6]=0u+0x00001001u; // 800EABD0
  c->lr=0x800EABD8u; f_80244D20(c); // 800EABD4
  cmps(c,0,(int32_t)c->r[3],0); // 800EABD8
  if (crb(c,2)) { goto L_800EABE4; } // 800EABDC
  c->lr=0x800EABE4u; f_800EAB28(c); // 800EABE0
L_800EABE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EABE4
  c->lr=c->r[0]; // 800EABE8
  c->r[1]=c->r[1]+0x00000010u; // 800EABEC
  return; // 800EABF0
}

// fn_800EABF4
void f_800EABF4(Ctx* __restrict c) {
  trace_call(0x800EABF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EABF4
  c->r[0]=c->lr; // 800EABF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EABFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAC00
  c->r[31]=c->r[3]|c->r[3]; // 800EAC04
  c->lr=0x800EAC0Cu; f_800D7120(c); // 800EAC08
  c->r[3]=0u+0x80410000u; // 800EAC0C
  c->r[0]=0u+0x00000000u; // 800EAC10
  c->r[3]=c->r[3]+0x0000586Cu; // 800EAC14
  W32(c->r[31]+0x00000008u,c->r[3]); // 800EAC18
  c->r[3]=c->r[31]|c->r[31]; // 800EAC1C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EAC20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAC24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAC28
  c->lr=c->r[0]; // 800EAC2C
  c->r[1]=c->r[1]+0x00000010u; // 800EAC30
  return; // 800EAC34
}

// fn_800EAC38
void f_800EAC38(Ctx* __restrict c) {
  trace_call(0x800EAC38u);
  f_8030D728(c); return; // 800EAC38
}

// fn_800EAC3C
void f_800EAC3C(Ctx* __restrict c) {
  trace_call(0x800EAC3Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800EAC3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EAC40
  W32(c->r[4]+0x00000000u,c->r[5]); // 800EAC44
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EAC48
  return; // 800EAC4C
}

// fn_800EAC50
void f_800EAC50(Ctx* __restrict c) {
  trace_call(0x800EAC50u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EAC50
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EAC54
  c->ctr=c->r[12]; // 800EAC58
  if (true) { dispatch(c,c->ctr); return; } // 800EAC5C
}

// fn_800EAC60
void f_800EAC60(Ctx* __restrict c) {
  trace_call(0x800EAC60u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EAC60
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EAC64
  c->ctr=c->r[12]; // 800EAC68
  if (true) { dispatch(c,c->ctr); return; } // 800EAC6C
}

// fn_800EAC70
void f_800EAC70(Ctx* __restrict c) {
  trace_call(0x800EAC70u);
  c->r[3]=c->r[13]+0xFFFFB8EEu; // 800EAC70
  return; // 800EAC74
}

// fn_800EAC78
void f_800EAC78(Ctx* __restrict c) {
  trace_call(0x800EAC78u);
  c->r[3]=0u+0x00000030u; // 800EAC78
  return; // 800EAC7C
}

// fn_800EAC80
void f_800EAC80(Ctx* __restrict c) {
  trace_call(0x800EAC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAC80
  c->r[0]=c->lr; // 800EAC84
  c->r[3]=0u+0x00000030u; // 800EAC88
  c->r[4]=c->r[13]+0xFFFFB8F6u; // 800EAC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAC90
  c->r[5]=0u+0x00000000u; // 800EAC94
  c->r[6]=0u+0x00001001u; // 800EAC98
  c->lr=0x800EACA0u; f_80244D20(c); // 800EAC9C
  cmps(c,0,(int32_t)c->r[3],0); // 800EACA0
  if (crb(c,2)) { goto L_800EACAC; } // 800EACA4
  c->lr=0x800EACACu; f_800EABF4(c); // 800EACA8
L_800EACAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EACAC
  c->lr=c->r[0]; // 800EACB0
  c->r[1]=c->r[1]+0x00000010u; // 800EACB4
  return; // 800EACB8
}

// fn_800EACBC
void f_800EACBC(Ctx* __restrict c) {
  trace_call(0x800EACBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EACBC
  c->r[0]=c->lr; // 800EACC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EACC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EACC8
  c->r[31]=c->r[3]|c->r[3]; // 800EACCC
  c->lr=0x800EACD4u; f_800D7120(c); // 800EACD0
  c->r[5]=0u+0x80410000u; // 800EACD4
  c->r[3]=0u+0xB51F0000u; // 800EACD8
  c->r[4]=0u+0x00000000u; // 800EACDC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EACE0
  c->r[0]=c->r[3]+0x00007088u; // 800EACE4
  c->r[5]=c->r[5]+0x00005838u; // 800EACE8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EACEC
  c->r[3]=c->r[31]|c->r[31]; // 800EACF0
  W32(c->r[31]+0x00000044u,c->r[4]); // 800EACF4
  W32(c->r[31]+0x00000050u,c->r[4]); // 800EACF8
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 800EACFC
  W32(c->r[31]+0x00000068u,c->r[4]); // 800EAD00
  W32(c->r[31]+0x00000074u,c->r[4]); // 800EAD04
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EAD08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAD0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAD10
  c->lr=c->r[0]; // 800EAD14
  c->r[1]=c->r[1]+0x00000010u; // 800EAD18
  return; // 800EAD1C
}

// fn_800EAD20
void f_800EAD20(Ctx* __restrict c) {
  trace_call(0x800EAD20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAD20
  c->r[0]=c->lr; // 800EAD24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAD28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EAD2C
  c->r[30]=c->r[3]|c->r[3]; // 800EAD30
  c->r[31]=c->r[4]|c->r[4]; // 800EAD34
  c->lr=0x800EAD3Cu; f_8030D728(c); // 800EAD38
  c->r[3]=c->r[31]|c->r[31]; // 800EAD3C
  c->r[4]=0u+0x00000000u; // 800EAD40
  c->lr=0x800EAD48u; f_8030BE30(c); // 800EAD44
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EAD48
  c->r[3]=c->r[31]|c->r[31]; // 800EAD4C
  c->lr=0x800EAD54u; f_8030BD1C(c); // 800EAD50
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EAD54
  c->r[3]=c->r[31]|c->r[31]; // 800EAD58
  c->r[4]=0u+0x00000000u; // 800EAD5C
  c->lr=0x800EAD64u; f_8030BE30(c); // 800EAD60
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EAD64
  c->r[3]=c->r[31]|c->r[31]; // 800EAD68
  c->lr=0x800EAD70u; f_8030BD1C(c); // 800EAD6C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EAD70
  c->r[3]=c->r[31]|c->r[31]; // 800EAD74
  c->r[4]=0u+0x00000000u; // 800EAD78
  c->lr=0x800EAD80u; f_8030BE30(c); // 800EAD7C
  W32(c->r[30]+0x00000048u,c->r[3]); // 800EAD80
  c->r[3]=c->r[31]|c->r[31]; // 800EAD84
  c->lr=0x800EAD8Cu; f_8030BD1C(c); // 800EAD88
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800EAD8C
  c->r[3]=c->r[31]|c->r[31]; // 800EAD90
  c->r[4]=0u+0x00000000u; // 800EAD94
  c->lr=0x800EAD9Cu; f_8030BE30(c); // 800EAD98
  W32(c->r[30]+0x00000054u,c->r[3]); // 800EAD9C
  c->r[3]=c->r[31]|c->r[31]; // 800EADA0
  c->lr=0x800EADA8u; f_8030BD1C(c); // 800EADA4
  W32(c->r[30]+0x00000058u,c->r[3]); // 800EADA8
  c->r[3]=c->r[31]|c->r[31]; // 800EADAC
  c->r[4]=0u+0x00000000u; // 800EADB0
  c->lr=0x800EADB8u; f_8030BE30(c); // 800EADB4
  W32(c->r[30]+0x00000060u,c->r[3]); // 800EADB8
  c->r[3]=c->r[31]|c->r[31]; // 800EADBC
  c->lr=0x800EADC4u; f_8030BD1C(c); // 800EADC0
  W32(c->r[30]+0x00000064u,c->r[3]); // 800EADC4
  c->r[3]=c->r[31]|c->r[31]; // 800EADC8
  c->r[4]=0u+0x00000000u; // 800EADCC
  c->lr=0x800EADD4u; f_8030BE30(c); // 800EADD0
  W32(c->r[30]+0x0000006Cu,c->r[3]); // 800EADD4
  c->r[3]=c->r[31]|c->r[31]; // 800EADD8
  c->lr=0x800EADE0u; f_8030BD1C(c); // 800EADDC
  W32(c->r[30]+0x00000070u,c->r[3]); // 800EADE0
  c->r[3]=c->r[31]|c->r[31]; // 800EADE4
  c->lr=0x800EADECu; f_8030BD1C(c); // 800EADE8
  W8(c->r[30]+0x00000078u,c->r[3]); // 800EADEC
  c->r[3]=c->r[31]|c->r[31]; // 800EADF0
  c->lr=0x800EADF8u; f_8030C0A0(c); // 800EADF4
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 800EADF8
  c->r[3]=c->r[31]|c->r[31]; // 800EADFC
  c->lr=0x800EAE04u; f_8030C0A0(c); // 800EAE00
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800EAE04
  c->r[3]=c->r[31]|c->r[31]; // 800EAE08
  c->lr=0x800EAE10u; f_8030C0A0(c); // 800EAE0C
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800EAE10
  c->r[3]=c->r[31]|c->r[31]; // 800EAE14
  c->lr=0x800EAE1Cu; f_8030C0A0(c); // 800EAE18
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 800EAE1C
  c->r[3]=c->r[31]|c->r[31]; // 800EAE20
  c->lr=0x800EAE28u; f_8030C0A0(c); // 800EAE24
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[1]);} // 800EAE28
  c->r[3]=c->r[31]|c->r[31]; // 800EAE2C
  c->lr=0x800EAE34u; f_8030C0A0(c); // 800EAE30
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[1]);} // 800EAE34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EAE38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAE3C
  c->lr=c->r[0]; // 800EAE40
  c->r[1]=c->r[1]+0x00000010u; // 800EAE44
  return; // 800EAE48
}

// fn_800EAE4C
void f_800EAE4C(Ctx* __restrict c) {
  trace_call(0x800EAE4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAE4C
  c->r[0]=c->lr; // 800EAE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAE54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAE58
  c->r[31]=c->r[4]|c->r[4]; // 800EAE5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAE60
  c->r[30]=c->r[3]|c->r[3]; // 800EAE64
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EAE68
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EAE6C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EAE70
  c->r[3]=c->r[4]+0x00000030u; // 800EAE74
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EAE78
  c->r[4]=c->r[30]+0x00000030u; // 800EAE7C
  c->lr=0x800EAE84u; f_8003AB48(c); // 800EAE80
  c->r[3]=c->r[31]+0x0000003Cu; // 800EAE84
  c->r[4]=c->r[30]+0x0000003Cu; // 800EAE88
  c->lr=0x800EAE90u; f_8003AB48(c); // 800EAE8C
  c->r[3]=c->r[31]+0x00000048u; // 800EAE90
  c->r[4]=c->r[30]+0x00000048u; // 800EAE94
  c->lr=0x800EAE9Cu; f_8003AB48(c); // 800EAE98
  c->r[3]=c->r[31]+0x00000054u; // 800EAE9C
  c->r[4]=c->r[30]+0x00000054u; // 800EAEA0
  c->lr=0x800EAEA8u; f_8003AB48(c); // 800EAEA4
  c->r[3]=c->r[31]+0x00000060u; // 800EAEA8
  c->r[4]=c->r[30]+0x00000060u; // 800EAEAC
  c->lr=0x800EAEB4u; f_8003AB48(c); // 800EAEB0
  c->r[3]=c->r[31]+0x0000006Cu; // 800EAEB4
  c->r[4]=c->r[30]+0x0000006Cu; // 800EAEB8
  c->lr=0x800EAEC0u; f_8003AB48(c); // 800EAEBC
  c->r[0]=R8(c->r[30]+0x00000078u); // 800EAEC0
  W8(c->r[31]+0x00000078u,c->r[0]); // 800EAEC4
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAEC8
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800EAECC
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAED0
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800EAED4
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAED8
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800EAEDC
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAEE0
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800EAEE4
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAEE8
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800EAEEC
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EAEF0
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 800EAEF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAEF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAEFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAF00
  c->lr=c->r[0]; // 800EAF04
  c->r[1]=c->r[1]+0x00000010u; // 800EAF08
  return; // 800EAF0C
}

// fn_800EAF10
void f_800EAF10(Ctx* __restrict c) {
  trace_call(0x800EAF10u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EAF10
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EAF14
  c->ctr=c->r[12]; // 800EAF18
  if (true) { dispatch(c,c->ctr); return; } // 800EAF1C
}

// fn_800EAF20
void f_800EAF20(Ctx* __restrict c) {
  trace_call(0x800EAF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAF20
  c->r[0]=c->lr; // 800EAF24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EAF28
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EAF2C
  c->r[29]=c->r[3]|c->r[3]; // 800EAF30
  c->r[30]=c->r[4]|c->r[4]; // 800EAF34
  c->r[31]=c->r[5]|c->r[5]; // 800EAF38
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EAF3C
  cmps(c,0,(int32_t)c->r[0],7); // 800EAF40
  if (!crb(c,0)) { goto L_800EAF54; } // 800EAF44
  c->r[4]=c->r[31]|c->r[31]; // 800EAF48
  c->r[3]=c->r[3]+0x00000030u; // 800EAF4C
  c->lr=0x800EAF54u; f_8003A994(c); // 800EAF50
L_800EAF54:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800EAF54
  cmps(c,0,(int32_t)c->r[0],7); // 800EAF58
  if (!crb(c,0)) { goto L_800EAF6C; } // 800EAF5C
  c->r[4]=c->r[31]|c->r[31]; // 800EAF60
  c->r[3]=c->r[29]+0x0000003Cu; // 800EAF64
  c->lr=0x800EAF6Cu; f_8003A994(c); // 800EAF68
L_800EAF6C:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800EAF6C
  cmps(c,0,(int32_t)c->r[0],7); // 800EAF70
  if (!crb(c,0)) { goto L_800EAF84; } // 800EAF74
  c->r[4]=c->r[31]|c->r[31]; // 800EAF78
  c->r[3]=c->r[29]+0x00000048u; // 800EAF7C
  c->lr=0x800EAF84u; f_8003A994(c); // 800EAF80
L_800EAF84:;
  c->r[0]=R32(c->r[29]+0x00000058u); // 800EAF84
  cmps(c,0,(int32_t)c->r[0],7); // 800EAF88
  if (!crb(c,0)) { goto L_800EAF9C; } // 800EAF8C
  c->r[4]=c->r[31]|c->r[31]; // 800EAF90
  c->r[3]=c->r[29]+0x00000054u; // 800EAF94
  c->lr=0x800EAF9Cu; f_8003A994(c); // 800EAF98
L_800EAF9C:;
  c->r[0]=R32(c->r[29]+0x00000064u); // 800EAF9C
  cmps(c,0,(int32_t)c->r[0],7); // 800EAFA0
  if (!crb(c,0)) { goto L_800EAFB4; } // 800EAFA4
  c->r[4]=c->r[31]|c->r[31]; // 800EAFA8
  c->r[3]=c->r[29]+0x00000060u; // 800EAFAC
  c->lr=0x800EAFB4u; f_8003A994(c); // 800EAFB0
L_800EAFB4:;
  c->r[0]=R32(c->r[29]+0x00000070u); // 800EAFB4
  cmps(c,0,(int32_t)c->r[0],7); // 800EAFB8
  if (!crb(c,0)) { goto L_800EAFCC; } // 800EAFBC
  c->r[4]=c->r[31]|c->r[31]; // 800EAFC0
  c->r[3]=c->r[29]+0x0000006Cu; // 800EAFC4
  c->lr=0x800EAFCCu; f_8003A994(c); // 800EAFC8
L_800EAFCC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EAFCC
  c->r[3]=c->r[29]|c->r[29]; // 800EAFD0
  c->r[4]=c->r[30]|c->r[30]; // 800EAFD4
  c->r[5]=c->r[31]|c->r[31]; // 800EAFD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EAFDC
  c->ctr=c->r[12]; // 800EAFE0
  if (true) { c->lr=0x800EAFE8u; dispatch(c,c->ctr); } // 800EAFE4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EAFE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAFEC
  c->lr=c->r[0]; // 800EAFF0
  c->r[1]=c->r[1]+0x00000020u; // 800EAFF4
  return; // 800EAFF8
}

// fn_800EAFFC
void f_800EAFFC(Ctx* __restrict c) {
  trace_call(0x800EAFFCu);
  c->r[3]=0u+0x80410000u; // 800EAFFC
  c->r[3]=c->r[3]+0xFFFFE4B4u; // 800EB000
  return; // 800EB004
}

// fn_800EB008
void f_800EB008(Ctx* __restrict c) {
  trace_call(0x800EB008u);
  c->r[3]=0u+0x00000094u; // 800EB008
  return; // 800EB00C
}

// fn_800EB010
void f_800EB010(Ctx* __restrict c) {
  trace_call(0x800EB010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB010
  c->r[0]=c->lr; // 800EB014
  c->r[3]=0u+0x00000094u; // 800EB018
  c->r[4]=c->r[13]+0xFFFFB8FBu; // 800EB01C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB020
  c->r[5]=0u+0x00000000u; // 800EB024
  c->r[6]=0u+0x00001001u; // 800EB028
  c->lr=0x800EB030u; f_80244D20(c); // 800EB02C
  cmps(c,0,(int32_t)c->r[3],0); // 800EB030
  if (crb(c,2)) { goto L_800EB03C; } // 800EB034
  c->lr=0x800EB03Cu; f_800EACBC(c); // 800EB038
L_800EB03C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB03C
  c->lr=c->r[0]; // 800EB040
  c->r[1]=c->r[1]+0x00000010u; // 800EB044
  return; // 800EB048
}

// fn_800EB04C
void f_800EB04C(Ctx* __restrict c) {
  trace_call(0x800EB04Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB04C
  c->r[0]=c->lr; // 800EB050
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB054
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB058
  c->r[31]=c->r[3]|c->r[3]; // 800EB05C
  c->lr=0x800EB064u; f_800D7120(c); // 800EB060
  c->r[5]=0u+0x80410000u; // 800EB064
  c->r[3]=0u+0x32720000u; // 800EB068
  c->r[4]=0u+0x00000000u; // 800EB06C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EB070
  c->r[0]=c->r[3]+0xFFFF8657u; // 800EB074
  c->r[5]=c->r[5]+0x00005804u; // 800EB078
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EB07C
  c->r[3]=c->r[31]|c->r[31]; // 800EB080
  W32(c->r[31]+0x00000048u,c->r[4]); // 800EB084
  W32(c->r[31]+0x00000058u,c->r[4]); // 800EB088
  W32(c->r[31]+0x00000064u,c->r[4]); // 800EB08C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EB090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB094
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB098
  c->lr=c->r[0]; // 800EB09C
  c->r[1]=c->r[1]+0x00000010u; // 800EB0A0
  return; // 800EB0A4
}

// fn_800EB0A8
void f_800EB0A8(Ctx* __restrict c) {
  trace_call(0x800EB0A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB0A8
  c->r[0]=c->lr; // 800EB0AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB0B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB0B4
  c->r[30]=c->r[3]|c->r[3]; // 800EB0B8
  c->r[31]=c->r[4]|c->r[4]; // 800EB0BC
  c->lr=0x800EB0C4u; f_8030D728(c); // 800EB0C0
  c->r[3]=c->r[31]|c->r[31]; // 800EB0C4
  c->r[4]=0u+0x00000000u; // 800EB0C8
  c->lr=0x800EB0D0u; f_8030BE30(c); // 800EB0CC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EB0D0
  c->r[3]=c->r[31]|c->r[31]; // 800EB0D4
  c->lr=0x800EB0DCu; f_8030BD1C(c); // 800EB0D8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EB0DC
  c->r[3]=c->r[31]|c->r[31]; // 800EB0E0
  c->r[4]=0u+0x00000000u; // 800EB0E4
  c->lr=0x800EB0ECu; f_8030BE30(c); // 800EB0E8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EB0EC
  c->r[3]=c->r[31]|c->r[31]; // 800EB0F0
  c->r[4]=0u+0x00000000u; // 800EB0F4
  c->lr=0x800EB0FCu; f_8030BE30(c); // 800EB0F8
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EB0FC
  c->r[3]=c->r[31]|c->r[31]; // 800EB100
  c->lr=0x800EB108u; f_8030BD1C(c); // 800EB104
  W32(c->r[30]+0x00000044u,c->r[3]); // 800EB108
  c->r[3]=c->r[31]|c->r[31]; // 800EB10C
  c->lr=0x800EB114u; f_8030C0A0(c); // 800EB110
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800EB114
  c->r[3]=c->r[31]|c->r[31]; // 800EB118
  c->r[4]=0u+0x00000000u; // 800EB11C
  c->lr=0x800EB124u; f_8030BE30(c); // 800EB120
  W32(c->r[30]+0x00000050u,c->r[3]); // 800EB124
  c->r[3]=c->r[31]|c->r[31]; // 800EB128
  c->lr=0x800EB130u; f_8030BD1C(c); // 800EB12C
  W32(c->r[30]+0x00000054u,c->r[3]); // 800EB130
  c->r[3]=c->r[31]|c->r[31]; // 800EB134
  c->r[4]=0u+0x00000000u; // 800EB138
  c->lr=0x800EB140u; f_8030BE30(c); // 800EB13C
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800EB140
  c->r[3]=c->r[31]|c->r[31]; // 800EB144
  c->lr=0x800EB14Cu; f_8030BD1C(c); // 800EB148
  W32(c->r[30]+0x00000060u,c->r[3]); // 800EB14C
  c->r[3]=c->r[31]|c->r[31]; // 800EB150
  c->lr=0x800EB158u; f_8030C0A0(c); // 800EB154
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 800EB158
  c->r[3]=c->r[31]|c->r[31]; // 800EB15C
  c->lr=0x800EB164u; f_8030C0A0(c); // 800EB160
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[1]);} // 800EB164
  c->r[3]=c->r[31]|c->r[31]; // 800EB168
  c->lr=0x800EB170u; f_8030C0A0(c); // 800EB16C
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 800EB170
  c->r[3]=c->r[31]|c->r[31]; // 800EB174
  c->lr=0x800EB17Cu; f_8030C0A0(c); // 800EB178
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 800EB17C
  c->r[3]=c->r[31]|c->r[31]; // 800EB180
  c->lr=0x800EB188u; f_8030C0A0(c); // 800EB184
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 800EB188
  c->r[3]=c->r[31]|c->r[31]; // 800EB18C
  c->lr=0x800EB194u; f_8030BD1C(c); // 800EB190
  W8(c->r[30]+0x0000007Cu,c->r[3]); // 800EB194
  c->r[3]=c->r[31]|c->r[31]; // 800EB198
  c->lr=0x800EB1A0u; f_8030C0A0(c); // 800EB19C
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[1]);} // 800EB1A0
  c->r[3]=c->r[31]|c->r[31]; // 800EB1A4
  c->lr=0x800EB1ACu; f_8030C0A0(c); // 800EB1A8
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800EB1AC
  c->r[3]=c->r[31]|c->r[31]; // 800EB1B0
  c->lr=0x800EB1B8u; f_8030C0A0(c); // 800EB1B4
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 800EB1B8
  c->r[3]=c->r[31]|c->r[31]; // 800EB1BC
  c->r[4]=0u+0x00000001u; // 800EB1C0
  c->lr=0x800EB1C8u; f_8030BE30(c); // 800EB1C4
  W32(c->r[30]+0x0000008Cu,c->r[3]); // 800EB1C8
  c->r[3]=c->r[31]|c->r[31]; // 800EB1CC
  c->lr=0x800EB1D4u; f_8030C0A0(c); // 800EB1D0
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[1]);} // 800EB1D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB1D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB1DC
  c->lr=c->r[0]; // 800EB1E0
  c->r[1]=c->r[1]+0x00000010u; // 800EB1E4
  return; // 800EB1E8
}

// fn_800EB1EC
void f_800EB1EC(Ctx* __restrict c) {
  trace_call(0x800EB1ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB1EC
  c->r[0]=c->lr; // 800EB1F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB1F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB1F8
  c->r[31]=c->r[4]|c->r[4]; // 800EB1FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB200
  c->r[30]=c->r[3]|c->r[3]; // 800EB204
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EB208
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EB20C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EB210
  c->r[3]=c->r[4]+0x00000030u; // 800EB214
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EB218
  c->r[4]=c->r[30]+0x00000030u; // 800EB21C
  c->lr=0x800EB224u; f_8003AB48(c); // 800EB220
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800EB224
  c->r[3]=c->r[31]+0x00000040u; // 800EB228
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800EB22C
  c->r[4]=c->r[30]+0x00000040u; // 800EB230
  c->lr=0x800EB238u; f_8003AB48(c); // 800EB234
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB238
  c->r[3]=c->r[31]+0x00000050u; // 800EB23C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EB240
  c->r[4]=c->r[30]+0x00000050u; // 800EB244
  c->lr=0x800EB24Cu; f_8003AB48(c); // 800EB248
  c->r[3]=c->r[31]+0x0000005Cu; // 800EB24C
  c->r[4]=c->r[30]+0x0000005Cu; // 800EB250
  c->lr=0x800EB258u; f_8003AB48(c); // 800EB254
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB258
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800EB25C
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB260
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800EB264
  {uint32_t ea=c->r[30]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB268
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800EB26C
  {uint32_t ea=c->r[30]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB270
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800EB274
  {uint32_t ea=c->r[30]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB278
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800EB27C
  c->r[0]=R8(c->r[30]+0x0000007Cu); // 800EB280
  W8(c->r[31]+0x0000007Cu,c->r[0]); // 800EB284
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB288
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800EB28C
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB290
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800EB294
  {uint32_t ea=c->r[30]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB298
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800EB29C
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 800EB2A0
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 800EB2A4
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB2A8
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 800EB2AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB2B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB2B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB2B8
  c->lr=c->r[0]; // 800EB2BC
  c->r[1]=c->r[1]+0x00000010u; // 800EB2C0
  return; // 800EB2C4
}

// fn_800EB2C8
void f_800EB2C8(Ctx* __restrict c) {
  trace_call(0x800EB2C8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EB2C8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EB2CC
  c->ctr=c->r[12]; // 800EB2D0
  if (true) { dispatch(c,c->ctr); return; } // 800EB2D4
}

// fn_800EB2D8
void f_800EB2D8(Ctx* __restrict c) {
  trace_call(0x800EB2D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB2D8
  c->r[0]=c->lr; // 800EB2DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB2E0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB2E4
  c->r[29]=c->r[3]|c->r[3]; // 800EB2E8
  c->r[30]=c->r[4]|c->r[4]; // 800EB2EC
  c->r[31]=c->r[5]|c->r[5]; // 800EB2F0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EB2F4
  cmps(c,0,(int32_t)c->r[0],7); // 800EB2F8
  if (!crb(c,0)) { goto L_800EB30C; } // 800EB2FC
  c->r[4]=c->r[31]|c->r[31]; // 800EB300
  c->r[3]=c->r[3]+0x00000030u; // 800EB304
  c->lr=0x800EB30Cu; f_8003A994(c); // 800EB308
L_800EB30C:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 800EB30C
  cmps(c,0,(int32_t)c->r[0],7); // 800EB310
  if (!crb(c,0)) { goto L_800EB324; } // 800EB314
  c->r[4]=c->r[31]|c->r[31]; // 800EB318
  c->r[3]=c->r[29]+0x00000040u; // 800EB31C
  c->lr=0x800EB324u; f_8003A994(c); // 800EB320
L_800EB324:;
  c->r[0]=R32(c->r[29]+0x00000054u); // 800EB324
  cmps(c,0,(int32_t)c->r[0],7); // 800EB328
  if (!crb(c,0)) { goto L_800EB33C; } // 800EB32C
  c->r[4]=c->r[31]|c->r[31]; // 800EB330
  c->r[3]=c->r[29]+0x00000050u; // 800EB334
  c->lr=0x800EB33Cu; f_8003A994(c); // 800EB338
L_800EB33C:;
  c->r[0]=R32(c->r[29]+0x00000060u); // 800EB33C
  cmps(c,0,(int32_t)c->r[0],7); // 800EB340
  if (!crb(c,0)) { goto L_800EB354; } // 800EB344
  c->r[4]=c->r[31]|c->r[31]; // 800EB348
  c->r[3]=c->r[29]+0x0000005Cu; // 800EB34C
  c->lr=0x800EB354u; f_8003A994(c); // 800EB350
L_800EB354:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EB354
  c->r[3]=c->r[29]|c->r[29]; // 800EB358
  c->r[4]=c->r[30]|c->r[30]; // 800EB35C
  c->r[5]=c->r[31]|c->r[31]; // 800EB360
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EB364
  c->ctr=c->r[12]; // 800EB368
  if (true) { c->lr=0x800EB370u; dispatch(c,c->ctr); } // 800EB36C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB370
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB374
  c->lr=c->r[0]; // 800EB378
  c->r[1]=c->r[1]+0x00000020u; // 800EB37C
  return; // 800EB380
}

// fn_800EB384
void f_800EB384(Ctx* __restrict c) {
  trace_call(0x800EB384u);
  c->r[3]=0u+0x80410000u; // 800EB384
  c->r[3]=c->r[3]+0xFFFFE4CFu; // 800EB388
  return; // 800EB38C
}

// fn_800EB390
void f_800EB390(Ctx* __restrict c) {
  trace_call(0x800EB390u);
  c->r[3]=0u+0x00000094u; // 800EB390
  return; // 800EB394
}

// fn_800EB398
void f_800EB398(Ctx* __restrict c) {
  trace_call(0x800EB398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB398
  c->r[0]=c->lr; // 800EB39C
  c->r[3]=0u+0x00000094u; // 800EB3A0
  c->r[4]=c->r[13]+0xFFFFB900u; // 800EB3A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB3A8
  c->r[5]=0u+0x00000000u; // 800EB3AC
  c->r[6]=0u+0x00001001u; // 800EB3B0
  c->lr=0x800EB3B8u; f_80244D20(c); // 800EB3B4
  cmps(c,0,(int32_t)c->r[3],0); // 800EB3B8
  if (crb(c,2)) { goto L_800EB3C4; } // 800EB3BC
  c->lr=0x800EB3C4u; f_800EB04C(c); // 800EB3C0
L_800EB3C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB3C4
  c->lr=c->r[0]; // 800EB3C8
  c->r[1]=c->r[1]+0x00000010u; // 800EB3CC
  return; // 800EB3D0
}

// fn_800EB3D4
void f_800EB3D4(Ctx* __restrict c) {
  trace_call(0x800EB3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB3D4
  c->r[0]=c->lr; // 800EB3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB3DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB3E0
  c->r[31]=c->r[3]|c->r[3]; // 800EB3E4
  c->lr=0x800EB3ECu; f_800D7120(c); // 800EB3E8
  c->r[4]=0u+0x80410000u; // 800EB3EC
  c->r[3]=0u+0x68970000u; // 800EB3F0
  c->r[0]=c->r[3]+0xFFFFF5E7u; // 800EB3F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EB3F8
  c->r[4]=c->r[4]+0x000057D0u; // 800EB3FC
  c->r[3]=c->r[31]|c->r[31]; // 800EB400
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EB404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB408
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB40C
  c->lr=c->r[0]; // 800EB410
  c->r[1]=c->r[1]+0x00000010u; // 800EB414
  return; // 800EB418
}

// fn_800EB41C
void f_800EB41C(Ctx* __restrict c) {
  trace_call(0x800EB41Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB41C
  c->r[0]=c->lr; // 800EB420
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB424
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB428
  c->r[30]=c->r[3]|c->r[3]; // 800EB42C
  c->r[31]=c->r[4]|c->r[4]; // 800EB430
  c->lr=0x800EB438u; f_8030D728(c); // 800EB434
  c->r[3]=c->r[31]|c->r[31]; // 800EB438
  c->r[4]=c->r[30]+0x00000030u; // 800EB43C
  c->r[5]=0u+0x00000000u; // 800EB440
  c->lr=0x800EB448u; f_8030B7F0(c); // 800EB444
  c->r[3]=c->r[31]|c->r[31]; // 800EB448
  c->lr=0x800EB450u; f_8030BD1C(c); // 800EB44C
  W8(c->r[30]+0x00000050u,c->r[3]); // 800EB450
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB454
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB458
  c->lr=c->r[0]; // 800EB45C
  c->r[1]=c->r[1]+0x00000010u; // 800EB460
  return; // 800EB464
}

// fn_800EB468
void f_800EB468(Ctx* __restrict c) {
  trace_call(0x800EB468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB468
  c->r[0]=c->lr; // 800EB46C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB470
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB474
  c->r[30]=c->r[3]|c->r[3]; // 800EB478
  c->r[31]=c->r[4]|c->r[4]; // 800EB47C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EB480
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EB484
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EB488
  c->r[3]=c->r[4]+0x00000030u; // 800EB48C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EB490
  c->r[4]=c->r[30]+0x00000030u; // 800EB494
  c->lr=0x800EB49Cu; f_803A6F10(c); // 800EB498
  c->r[0]=R8(c->r[30]+0x00000050u); // 800EB49C
  W8(c->r[31]+0x00000050u,c->r[0]); // 800EB4A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB4A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB4A8
  c->lr=c->r[0]; // 800EB4AC
  c->r[1]=c->r[1]+0x00000010u; // 800EB4B0
  return; // 800EB4B4
}

// fn_800EB4B8
void f_800EB4B8(Ctx* __restrict c) {
  trace_call(0x800EB4B8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EB4B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EB4BC
  c->ctr=c->r[12]; // 800EB4C0
  if (true) { dispatch(c,c->ctr); return; } // 800EB4C4
}

// fn_800EB4C8
void f_800EB4C8(Ctx* __restrict c) {
  trace_call(0x800EB4C8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EB4C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EB4CC
  c->ctr=c->r[12]; // 800EB4D0
  if (true) { dispatch(c,c->ctr); return; } // 800EB4D4
}

// fn_800EB4D8
void f_800EB4D8(Ctx* __restrict c) {
  trace_call(0x800EB4D8u);
  c->r[3]=0u+0x80410000u; // 800EB4D8
  c->r[3]=c->r[3]+0xFFFFE4DBu; // 800EB4DC
  return; // 800EB4E0
}

// fn_800EB4E4
void f_800EB4E4(Ctx* __restrict c) {
  trace_call(0x800EB4E4u);
  c->r[3]=0u+0x00000054u; // 800EB4E4
  return; // 800EB4E8
}

// fn_800EB4EC
void f_800EB4EC(Ctx* __restrict c) {
  trace_call(0x800EB4ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB4EC
  c->r[0]=c->lr; // 800EB4F0
  c->r[3]=0u+0x00000054u; // 800EB4F4
  c->r[4]=c->r[13]+0xFFFFB905u; // 800EB4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB4FC
  c->r[5]=0u+0x00000000u; // 800EB500
  c->r[6]=0u+0x00001001u; // 800EB504
  c->lr=0x800EB50Cu; f_80244D20(c); // 800EB508
  cmps(c,0,(int32_t)c->r[3],0); // 800EB50C
  if (crb(c,2)) { goto L_800EB518; } // 800EB510
  c->lr=0x800EB518u; f_800EB3D4(c); // 800EB514
L_800EB518:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB518
  c->lr=c->r[0]; // 800EB51C
  c->r[1]=c->r[1]+0x00000010u; // 800EB520
  return; // 800EB524
}

// fn_800EB528
void f_800EB528(Ctx* __restrict c) {
  trace_call(0x800EB528u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB528
  c->r[0]=c->lr; // 800EB52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB530
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB534
  c->r[31]=c->r[3]|c->r[3]; // 800EB538
  c->lr=0x800EB540u; f_800D7120(c); // 800EB53C
  c->r[5]=0u+0x80410000u; // 800EB540
  c->r[3]=0u+0x59710000u; // 800EB544
  c->r[0]=c->r[3]+0x000047B2u; // 800EB548
  c->r[4]=0u+0x00000000u; // 800EB54C
  c->r[5]=c->r[5]+0x0000579Cu; // 800EB550
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EB554
  c->r[3]=c->r[31]|c->r[31]; // 800EB558
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EB55C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EB560
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB564
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB568
  c->lr=c->r[0]; // 800EB56C
  c->r[1]=c->r[1]+0x00000010u; // 800EB570
  return; // 800EB574
}

// fn_800EB578
void f_800EB578(Ctx* __restrict c) {
  trace_call(0x800EB578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB578
  c->r[0]=c->lr; // 800EB57C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB580
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB584
  c->r[30]=c->r[3]|c->r[3]; // 800EB588
  c->r[31]=c->r[4]|c->r[4]; // 800EB58C
  c->lr=0x800EB594u; f_8030D728(c); // 800EB590
  c->r[3]=c->r[31]|c->r[31]; // 800EB594
  c->r[4]=0u+0x00000000u; // 800EB598
  c->lr=0x800EB5A0u; f_8030BE30(c); // 800EB59C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EB5A0
  c->r[3]=c->r[31]|c->r[31]; // 800EB5A4
  c->lr=0x800EB5ACu; f_8030BD1C(c); // 800EB5A8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EB5AC
  c->r[3]=c->r[31]|c->r[31]; // 800EB5B0
  c->lr=0x800EB5B8u; f_8030BD1C(c); // 800EB5B4
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EB5B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB5BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB5C0
  c->lr=c->r[0]; // 800EB5C4
  c->r[1]=c->r[1]+0x00000010u; // 800EB5C8
  return; // 800EB5CC
}

// fn_800EB5D0
void f_800EB5D0(Ctx* __restrict c) {
  trace_call(0x800EB5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB5D0
  c->r[0]=c->lr; // 800EB5D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB5D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB5DC
  c->r[30]=c->r[3]|c->r[3]; // 800EB5E0
  c->r[31]=c->r[4]|c->r[4]; // 800EB5E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EB5E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EB5EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EB5F0
  c->r[3]=c->r[4]+0x00000030u; // 800EB5F4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EB5F8
  c->r[4]=c->r[30]+0x00000030u; // 800EB5FC
  c->lr=0x800EB604u; f_8003AB48(c); // 800EB600
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EB604
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EB608
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB60C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB610
  c->lr=c->r[0]; // 800EB614
  c->r[1]=c->r[1]+0x00000010u; // 800EB618
  return; // 800EB61C
}

// fn_800EB620
void f_800EB620(Ctx* __restrict c) {
  trace_call(0x800EB620u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EB620
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EB624
  c->ctr=c->r[12]; // 800EB628
  if (true) { dispatch(c,c->ctr); return; } // 800EB62C
}

// fn_800EB630
void f_800EB630(Ctx* __restrict c) {
  trace_call(0x800EB630u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB630
  c->r[0]=c->lr; // 800EB634
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB638
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB63C
  c->r[29]=c->r[3]|c->r[3]; // 800EB640
  c->r[30]=c->r[4]|c->r[4]; // 800EB644
  c->r[31]=c->r[5]|c->r[5]; // 800EB648
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EB64C
  cmps(c,0,(int32_t)c->r[0],7); // 800EB650
  if (!crb(c,0)) { goto L_800EB664; } // 800EB654
  c->r[4]=c->r[31]|c->r[31]; // 800EB658
  c->r[3]=c->r[3]+0x00000030u; // 800EB65C
  c->lr=0x800EB664u; f_8003A994(c); // 800EB660
L_800EB664:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EB664
  c->r[3]=c->r[29]|c->r[29]; // 800EB668
  c->r[4]=c->r[30]|c->r[30]; // 800EB66C
  c->r[5]=c->r[31]|c->r[31]; // 800EB670
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EB674
  c->ctr=c->r[12]; // 800EB678
  if (true) { c->lr=0x800EB680u; dispatch(c,c->ctr); } // 800EB67C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB680
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB684
  c->lr=c->r[0]; // 800EB688
  c->r[1]=c->r[1]+0x00000020u; // 800EB68C
  return; // 800EB690
}

// fn_800EB694
void f_800EB694(Ctx* __restrict c) {
  trace_call(0x800EB694u);
  c->r[3]=0u+0x80410000u; // 800EB694
  c->r[3]=c->r[3]+0xFFFFE4E5u; // 800EB698
  return; // 800EB69C
}

// fn_800EB6A0
void f_800EB6A0(Ctx* __restrict c) {
  trace_call(0x800EB6A0u);
  c->r[3]=0u+0x00000040u; // 800EB6A0
  return; // 800EB6A4
}

// fn_800EB6A8
void f_800EB6A8(Ctx* __restrict c) {
  trace_call(0x800EB6A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB6A8
  c->r[0]=c->lr; // 800EB6AC
  c->r[3]=0u+0x00000040u; // 800EB6B0
  c->r[4]=c->r[13]+0xFFFFB90Au; // 800EB6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB6B8
  c->r[5]=0u+0x00000000u; // 800EB6BC
  c->r[6]=0u+0x00001001u; // 800EB6C0
  c->lr=0x800EB6C8u; f_80244D20(c); // 800EB6C4
  cmps(c,0,(int32_t)c->r[3],0); // 800EB6C8
  if (crb(c,2)) { goto L_800EB6D4; } // 800EB6CC
  c->lr=0x800EB6D4u; f_800EB528(c); // 800EB6D0
L_800EB6D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB6D4
  c->lr=c->r[0]; // 800EB6D8
  c->r[1]=c->r[1]+0x00000010u; // 800EB6DC
  return; // 800EB6E0
}

// fn_800EB6E4
void f_800EB6E4(Ctx* __restrict c) {
  trace_call(0x800EB6E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB6E4
  c->r[0]=c->lr; // 800EB6E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB6EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB6F0
  c->r[31]=c->r[3]|c->r[3]; // 800EB6F4
  c->lr=0x800EB6FCu; f_800D7120(c); // 800EB6F8
  c->r[5]=0u+0x80410000u; // 800EB6FC
  c->r[3]=0u+0x0D8F0000u; // 800EB700
  c->r[0]=c->r[3]+0xFFFF9698u; // 800EB704
  c->r[4]=0u+0x00000000u; // 800EB708
  c->r[5]=c->r[5]+0x00005768u; // 800EB70C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EB710
  c->r[3]=c->r[31]|c->r[31]; // 800EB714
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EB718
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EB71C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB720
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB724
  c->lr=c->r[0]; // 800EB728
  c->r[1]=c->r[1]+0x00000010u; // 800EB72C
  return; // 800EB730
}

// fn_800EB734
void f_800EB734(Ctx* __restrict c) {
  trace_call(0x800EB734u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB734
  c->r[0]=c->lr; // 800EB738
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB73C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB740
  c->r[31]=c->r[4]|c->r[4]; // 800EB744
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB748
  c->r[30]=c->r[3]|c->r[3]; // 800EB74C
  c->lr=0x800EB754u; f_8030D728(c); // 800EB750
  c->r[3]=c->r[31]|c->r[31]; // 800EB754
  c->r[4]=0u+0x00000000u; // 800EB758
  c->lr=0x800EB760u; f_8030BE30(c); // 800EB75C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EB760
  c->r[3]=c->r[31]|c->r[31]; // 800EB764
  c->lr=0x800EB76Cu; f_8030BD1C(c); // 800EB768
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EB76C
  c->r[3]=c->r[31]|c->r[31]; // 800EB770
  c->lr=0x800EB778u; f_8030C0A0(c); // 800EB774
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800EB778
  c->r[3]=c->r[31]|c->r[31]; // 800EB77C
  c->lr=0x800EB784u; f_8030C0A0(c); // 800EB780
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800EB784
  c->r[3]=c->r[31]|c->r[31]; // 800EB788
  c->lr=0x800EB790u; f_8030C0A0(c); // 800EB78C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB790
  c->r[3]=c->r[31]|c->r[31]; // 800EB794
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800EB798
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 800EB79C
  c->lr=0x800EB7A4u; f_8030C0A0(c); // 800EB7A0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800EB7A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB7A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB7AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB7B0
  c->lr=c->r[0]; // 800EB7B4
  c->r[1]=c->r[1]+0x00000010u; // 800EB7B8
  return; // 800EB7BC
}

// fn_800EB7C0
void f_800EB7C0(Ctx* __restrict c) {
  trace_call(0x800EB7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB7C0
  c->r[0]=c->lr; // 800EB7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB7C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB7CC
  c->r[31]=c->r[4]|c->r[4]; // 800EB7D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB7D4
  c->r[30]=c->r[3]|c->r[3]; // 800EB7D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EB7DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EB7E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EB7E4
  c->r[3]=c->r[4]+0x00000030u; // 800EB7E8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EB7EC
  c->r[4]=c->r[30]+0x00000030u; // 800EB7F0
  c->lr=0x800EB7F8u; f_8003AB48(c); // 800EB7F4
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB7F8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800EB7FC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB800
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800EB804
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB808
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800EB80C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB810
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EB814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB818
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB81C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB820
  c->lr=c->r[0]; // 800EB824
  c->r[1]=c->r[1]+0x00000010u; // 800EB828
  return; // 800EB82C
}

// fn_800EB830
void f_800EB830(Ctx* __restrict c) {
  trace_call(0x800EB830u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EB830
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EB834
  c->ctr=c->r[12]; // 800EB838
  if (true) { dispatch(c,c->ctr); return; } // 800EB83C
}

// fn_800EB840
void f_800EB840(Ctx* __restrict c) {
  trace_call(0x800EB840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB840
  c->r[0]=c->lr; // 800EB844
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB848
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB84C
  c->r[29]=c->r[3]|c->r[3]; // 800EB850
  c->r[30]=c->r[4]|c->r[4]; // 800EB854
  c->r[31]=c->r[5]|c->r[5]; // 800EB858
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EB85C
  cmps(c,0,(int32_t)c->r[0],7); // 800EB860
  if (!crb(c,0)) { goto L_800EB874; } // 800EB864
  c->r[4]=c->r[31]|c->r[31]; // 800EB868
  c->r[3]=c->r[3]+0x00000030u; // 800EB86C
  c->lr=0x800EB874u; f_8003A994(c); // 800EB870
L_800EB874:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EB874
  c->r[3]=c->r[29]|c->r[29]; // 800EB878
  c->r[4]=c->r[30]|c->r[30]; // 800EB87C
  c->r[5]=c->r[31]|c->r[31]; // 800EB880
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EB884
  c->ctr=c->r[12]; // 800EB888
  if (true) { c->lr=0x800EB890u; dispatch(c,c->ctr); } // 800EB88C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB890
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB894
  c->lr=c->r[0]; // 800EB898
  c->r[1]=c->r[1]+0x00000020u; // 800EB89C
  return; // 800EB8A0
}

// fn_800EB8A4
void f_800EB8A4(Ctx* __restrict c) {
  trace_call(0x800EB8A4u);
  c->r[3]=0u+0x80410000u; // 800EB8A4
  c->r[3]=c->r[3]+0xFFFFE4F6u; // 800EB8A8
  return; // 800EB8AC
}

// fn_800EB8B0
void f_800EB8B0(Ctx* __restrict c) {
  trace_call(0x800EB8B0u);
  c->r[3]=0u+0x00000050u; // 800EB8B0
  return; // 800EB8B4
}

// fn_800EB8B8
void f_800EB8B8(Ctx* __restrict c) {
  trace_call(0x800EB8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB8B8
  c->r[0]=c->lr; // 800EB8BC
  c->r[3]=0u+0x00000050u; // 800EB8C0
  c->r[4]=c->r[13]+0xFFFFB90Fu; // 800EB8C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB8C8
  c->r[5]=0u+0x00000000u; // 800EB8CC
  c->r[6]=0u+0x00001001u; // 800EB8D0
  c->lr=0x800EB8D8u; f_80244D20(c); // 800EB8D4
  cmps(c,0,(int32_t)c->r[3],0); // 800EB8D8
  if (crb(c,2)) { goto L_800EB8E4; } // 800EB8DC
  c->lr=0x800EB8E4u; f_800EB6E4(c); // 800EB8E0
L_800EB8E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB8E4
  c->lr=c->r[0]; // 800EB8E8
  c->r[1]=c->r[1]+0x00000010u; // 800EB8EC
  return; // 800EB8F0
}

// fn_800EB8F4
void f_800EB8F4(Ctx* __restrict c) {
  trace_call(0x800EB8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB8F4
  c->r[0]=c->lr; // 800EB8F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB8FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB900
  c->r[31]=c->r[3]|c->r[3]; // 800EB904
  c->lr=0x800EB90Cu; f_800D7120(c); // 800EB908
  c->r[4]=0u+0x80410000u; // 800EB90C
  c->r[3]=0u+0x000D0000u; // 800EB910
  c->r[0]=c->r[3]+0xFFFFE9F7u; // 800EB914
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EB918
  c->r[4]=c->r[4]+0x00005734u; // 800EB91C
  c->r[3]=c->r[31]|c->r[31]; // 800EB920
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EB924
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB928
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB92C
  c->lr=c->r[0]; // 800EB930
  c->r[1]=c->r[1]+0x00000010u; // 800EB934
  return; // 800EB938
}

// fn_800EB93C
void f_800EB93C(Ctx* __restrict c) {
  trace_call(0x800EB93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB93C
  c->r[0]=c->lr; // 800EB940
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB944
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EB948
  c->r[30]=c->r[3]|c->r[3]; // 800EB94C
  c->r[31]=c->r[4]|c->r[4]; // 800EB950
  c->lr=0x800EB958u; f_8030D728(c); // 800EB954
  c->r[3]=c->r[31]|c->r[31]; // 800EB958
  c->r[4]=0u+0x00000000u; // 800EB95C
  c->lr=0x800EB964u; f_8030BE30(c); // 800EB960
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EB964
  c->r[3]=c->r[31]|c->r[31]; // 800EB968
  c->r[4]=0u+0x00000000u; // 800EB96C
  c->lr=0x800EB974u; f_8030BE30(c); // 800EB970
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EB974
  c->r[3]=c->r[31]|c->r[31]; // 800EB978
  c->lr=0x800EB980u; f_8030C0A0(c); // 800EB97C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800EB980
  c->r[3]=c->r[31]|c->r[31]; // 800EB984
  c->lr=0x800EB98Cu; f_8030BD1C(c); // 800EB988
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EB98C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EB990
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB994
  c->lr=c->r[0]; // 800EB998
  c->r[1]=c->r[1]+0x00000010u; // 800EB99C
  return; // 800EB9A0
}

// fn_800EB9A4
void f_800EB9A4(Ctx* __restrict c) {
  trace_call(0x800EB9A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB9A4
  c->r[0]=c->lr; // 800EB9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB9AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB9B0
  c->r[31]=c->r[4]|c->r[4]; // 800EB9B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB9B8
  c->r[30]=c->r[3]|c->r[3]; // 800EB9BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EB9C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EB9C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EB9C8
  c->r[3]=c->r[4]+0x00000030u; // 800EB9CC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EB9D0
  c->r[4]=c->r[30]+0x00000030u; // 800EB9D4
  c->lr=0x800EB9DCu; f_8003F6E4(c); // 800EB9D8
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EB9DC
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800EB9E0
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800EB9E4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800EB9E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB9EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB9F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB9F4
  c->lr=c->r[0]; // 800EB9F8
  c->r[1]=c->r[1]+0x00000010u; // 800EB9FC
  return; // 800EBA00
}

// fn_800EBA04
void f_800EBA04(Ctx* __restrict c) {
  trace_call(0x800EBA04u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBA04
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EBA08
  c->ctr=c->r[12]; // 800EBA0C
  if (true) { dispatch(c,c->ctr); return; } // 800EBA10
}

// fn_800EBA14
void f_800EBA14(Ctx* __restrict c) {
  trace_call(0x800EBA14u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBA14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EBA18
  c->ctr=c->r[12]; // 800EBA1C
  if (true) { dispatch(c,c->ctr); return; } // 800EBA20
}

// fn_800EBA24
void f_800EBA24(Ctx* __restrict c) {
  trace_call(0x800EBA24u);
  c->r[3]=0u+0x80410000u; // 800EBA24
  c->r[3]=c->r[3]+0xFFFFE502u; // 800EBA28
  return; // 800EBA2C
}

// fn_800EBA30
void f_800EBA30(Ctx* __restrict c) {
  trace_call(0x800EBA30u);
  c->r[3]=0u+0x00000040u; // 800EBA30
  return; // 800EBA34
}

// fn_800EBA38
void f_800EBA38(Ctx* __restrict c) {
  trace_call(0x800EBA38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBA38
  c->r[0]=c->lr; // 800EBA3C
  c->r[3]=0u+0x00000040u; // 800EBA40
  c->r[4]=c->r[13]+0xFFFFB914u; // 800EBA44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBA48
  c->r[5]=0u+0x00000000u; // 800EBA4C
  c->r[6]=0u+0x00001001u; // 800EBA50
  c->lr=0x800EBA58u; f_80244D20(c); // 800EBA54
  cmps(c,0,(int32_t)c->r[3],0); // 800EBA58
  if (crb(c,2)) { goto L_800EBA64; } // 800EBA5C
  c->lr=0x800EBA64u; f_800EB8F4(c); // 800EBA60
L_800EBA64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBA64
  c->lr=c->r[0]; // 800EBA68
  c->r[1]=c->r[1]+0x00000010u; // 800EBA6C
  return; // 800EBA70
}

// fn_800EBA74
void f_800EBA74(Ctx* __restrict c) {
  trace_call(0x800EBA74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBA74
  c->r[0]=c->lr; // 800EBA78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBA7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBA80
  c->r[31]=c->r[3]|c->r[3]; // 800EBA84
  c->lr=0x800EBA8Cu; f_800D7120(c); // 800EBA88
  c->r[5]=0u+0x80410000u; // 800EBA8C
  c->r[3]=0u+0x59720000u; // 800EBA90
  c->r[0]=c->r[3]+0x00004EB8u; // 800EBA94
  c->r[4]=0u+0x00000000u; // 800EBA98
  c->r[5]=c->r[5]+0x00005700u; // 800EBA9C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EBAA0
  c->r[3]=c->r[31]|c->r[31]; // 800EBAA4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EBAA8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EBAAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBAB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBAB4
  c->lr=c->r[0]; // 800EBAB8
  c->r[1]=c->r[1]+0x00000010u; // 800EBABC
  return; // 800EBAC0
}

// fn_800EBAC4
void f_800EBAC4(Ctx* __restrict c) {
  trace_call(0x800EBAC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBAC4
  c->r[0]=c->lr; // 800EBAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBACC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EBAD0
  c->r[30]=c->r[3]|c->r[3]; // 800EBAD4
  c->r[31]=c->r[4]|c->r[4]; // 800EBAD8
  c->lr=0x800EBAE0u; f_8030D728(c); // 800EBADC
  c->r[3]=c->r[31]|c->r[31]; // 800EBAE0
  c->r[4]=0u+0x00000000u; // 800EBAE4
  c->lr=0x800EBAECu; f_8030BE30(c); // 800EBAE8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EBAEC
  c->r[3]=c->r[31]|c->r[31]; // 800EBAF0
  c->lr=0x800EBAF8u; f_8030BD1C(c); // 800EBAF4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EBAF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EBAFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBB00
  c->lr=c->r[0]; // 800EBB04
  c->r[1]=c->r[1]+0x00000010u; // 800EBB08
  return; // 800EBB0C
}

// fn_800EBB10
void f_800EBB10(Ctx* __restrict c) {
  trace_call(0x800EBB10u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EBB10
  c->r[5]=c->r[3]|c->r[3]; // 800EBB14
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EBB18
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EBB1C
  c->r[3]=c->r[4]+0x00000030u; // 800EBB20
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EBB24
  c->r[4]=c->r[5]+0x00000030u; // 800EBB28
  f_8003AB48(c); return; // 800EBB2C
}

// fn_800EBB30
void f_800EBB30(Ctx* __restrict c) {
  trace_call(0x800EBB30u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBB30
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EBB34
  c->ctr=c->r[12]; // 800EBB38
  if (true) { dispatch(c,c->ctr); return; } // 800EBB3C
}

// fn_800EBB40
void f_800EBB40(Ctx* __restrict c) {
  trace_call(0x800EBB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBB40
  c->r[0]=c->lr; // 800EBB44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EBB48
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EBB4C
  c->r[29]=c->r[3]|c->r[3]; // 800EBB50
  c->r[30]=c->r[4]|c->r[4]; // 800EBB54
  c->r[31]=c->r[5]|c->r[5]; // 800EBB58
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EBB5C
  cmps(c,0,(int32_t)c->r[0],7); // 800EBB60
  if (!crb(c,0)) { goto L_800EBB74; } // 800EBB64
  c->r[4]=c->r[31]|c->r[31]; // 800EBB68
  c->r[3]=c->r[3]+0x00000030u; // 800EBB6C
  c->lr=0x800EBB74u; f_8003A994(c); // 800EBB70
L_800EBB74:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EBB74
  c->r[3]=c->r[29]|c->r[29]; // 800EBB78
  c->r[4]=c->r[30]|c->r[30]; // 800EBB7C
  c->r[5]=c->r[31]|c->r[31]; // 800EBB80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EBB84
  c->ctr=c->r[12]; // 800EBB88
  if (true) { c->lr=0x800EBB90u; dispatch(c,c->ctr); } // 800EBB8C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EBB90
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EBB94
  c->lr=c->r[0]; // 800EBB98
  c->r[1]=c->r[1]+0x00000020u; // 800EBB9C
  return; // 800EBBA0
}

// fn_800EBBA4
void f_800EBBA4(Ctx* __restrict c) {
  trace_call(0x800EBBA4u);
  c->r[3]=0u+0x80410000u; // 800EBBA4
  c->r[3]=c->r[3]+0xFFFFE50Fu; // 800EBBA8
  return; // 800EBBAC
}

// fn_800EBBB0
void f_800EBBB0(Ctx* __restrict c) {
  trace_call(0x800EBBB0u);
  c->r[3]=0u+0x0000003Cu; // 800EBBB0
  return; // 800EBBB4
}

// fn_800EBBB8
void f_800EBBB8(Ctx* __restrict c) {
  trace_call(0x800EBBB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBBB8
  c->r[0]=c->lr; // 800EBBBC
  c->r[3]=0u+0x0000003Cu; // 800EBBC0
  c->r[4]=c->r[13]+0xFFFFB919u; // 800EBBC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBBC8
  c->r[5]=0u+0x00000000u; // 800EBBCC
  c->r[6]=0u+0x00001001u; // 800EBBD0
  c->lr=0x800EBBD8u; f_80244D20(c); // 800EBBD4
  cmps(c,0,(int32_t)c->r[3],0); // 800EBBD8
  if (crb(c,2)) { goto L_800EBBE4; } // 800EBBDC
  c->lr=0x800EBBE4u; f_800EBA74(c); // 800EBBE0
L_800EBBE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBBE4
  c->lr=c->r[0]; // 800EBBE8
  c->r[1]=c->r[1]+0x00000010u; // 800EBBEC
  return; // 800EBBF0
}

// fn_800EBBF4
void f_800EBBF4(Ctx* __restrict c) {
  trace_call(0x800EBBF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBBF4
  c->r[0]=c->lr; // 800EBBF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBBFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBC00
  c->r[31]=c->r[3]|c->r[3]; // 800EBC04
  c->lr=0x800EBC0Cu; f_800D7120(c); // 800EBC08
  c->r[4]=0u+0x80410000u; // 800EBC0C
  c->r[3]=0u+0x7CF50000u; // 800EBC10
  c->r[0]=c->r[3]+0x00004C05u; // 800EBC14
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EBC18
  c->r[4]=c->r[4]+0x000056CCu; // 800EBC1C
  c->r[3]=c->r[31]|c->r[31]; // 800EBC20
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EBC24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBC28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBC2C
  c->lr=c->r[0]; // 800EBC30
  c->r[1]=c->r[1]+0x00000010u; // 800EBC34
  return; // 800EBC38
}

// fn_800EBC3C
void f_800EBC3C(Ctx* __restrict c) {
  trace_call(0x800EBC3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBC3C
  c->r[0]=c->lr; // 800EBC40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBC44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EBC48
  c->r[30]=c->r[3]|c->r[3]; // 800EBC4C
  c->r[31]=c->r[4]|c->r[4]; // 800EBC50
  c->lr=0x800EBC58u; f_8030D728(c); // 800EBC54
  c->r[3]=c->r[31]|c->r[31]; // 800EBC58
  c->lr=0x800EBC60u; f_8030BD1C(c); // 800EBC5C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800EBC60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EBC64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBC68
  c->lr=c->r[0]; // 800EBC6C
  c->r[1]=c->r[1]+0x00000010u; // 800EBC70
  return; // 800EBC74
}

// fn_800EBC78
void f_800EBC78(Ctx* __restrict c) {
  trace_call(0x800EBC78u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800EBC78
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EBC7C
  c->r[0]=R8(c->r[3]+0x00000030u); // 800EBC80
  W32(c->r[4]+0x00000000u,c->r[6]); // 800EBC84
  W32(c->r[4]+0x00000004u,c->r[5]); // 800EBC88
  W8(c->r[4]+0x00000030u,c->r[0]); // 800EBC8C
  return; // 800EBC90
}

// fn_800EBC94
void f_800EBC94(Ctx* __restrict c) {
  trace_call(0x800EBC94u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBC94
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EBC98
  c->ctr=c->r[12]; // 800EBC9C
  if (true) { dispatch(c,c->ctr); return; } // 800EBCA0
}

// fn_800EBCA4
void f_800EBCA4(Ctx* __restrict c) {
  trace_call(0x800EBCA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBCA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EBCA8
  c->ctr=c->r[12]; // 800EBCAC
  if (true) { dispatch(c,c->ctr); return; } // 800EBCB0
}

// fn_800EBCB4
void f_800EBCB4(Ctx* __restrict c) {
  trace_call(0x800EBCB4u);
  c->r[3]=0u+0x80410000u; // 800EBCB4
  c->r[3]=c->r[3]+0xFFFFE51Fu; // 800EBCB8
  return; // 800EBCBC
}

// fn_800EBCC0
void f_800EBCC0(Ctx* __restrict c) {
  trace_call(0x800EBCC0u);
  c->r[3]=0u+0x00000034u; // 800EBCC0
  return; // 800EBCC4
}

// fn_800EBCC8
void f_800EBCC8(Ctx* __restrict c) {
  trace_call(0x800EBCC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBCC8
  c->r[0]=c->lr; // 800EBCCC
  c->r[3]=0u+0x00000034u; // 800EBCD0
  c->r[4]=c->r[13]+0xFFFFB91Eu; // 800EBCD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBCD8
  c->r[5]=0u+0x00000000u; // 800EBCDC
  c->r[6]=0u+0x00001001u; // 800EBCE0
  c->lr=0x800EBCE8u; f_80244D20(c); // 800EBCE4
  cmps(c,0,(int32_t)c->r[3],0); // 800EBCE8
  if (crb(c,2)) { goto L_800EBCF4; } // 800EBCEC
  c->lr=0x800EBCF4u; f_800EBBF4(c); // 800EBCF0
L_800EBCF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBCF4
  c->lr=c->r[0]; // 800EBCF8
  c->r[1]=c->r[1]+0x00000010u; // 800EBCFC
  return; // 800EBD00
}

// fn_800EBD04
void f_800EBD04(Ctx* __restrict c) {
  trace_call(0x800EBD04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBD04
  c->r[0]=c->lr; // 800EBD08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBD0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBD10
  c->r[31]=c->r[3]|c->r[3]; // 800EBD14
  c->lr=0x800EBD1Cu; f_800D7120(c); // 800EBD18
  c->r[4]=0u+0x80410000u; // 800EBD1C
  c->r[3]=0u+0xBC1A0000u; // 800EBD20
  c->r[0]=c->r[3]+0x000028D9u; // 800EBD24
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EBD28
  c->r[4]=c->r[4]+0x00005698u; // 800EBD2C
  c->r[3]=c->r[31]|c->r[31]; // 800EBD30
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EBD34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBD38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBD3C
  c->lr=c->r[0]; // 800EBD40
  c->r[1]=c->r[1]+0x00000010u; // 800EBD44
  return; // 800EBD48
}

// fn_800EBD4C
void f_800EBD4C(Ctx* __restrict c) {
  trace_call(0x800EBD4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBD4C
  c->r[0]=c->lr; // 800EBD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBD54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EBD58
  c->r[30]=c->r[3]|c->r[3]; // 800EBD5C
  c->r[31]=c->r[4]|c->r[4]; // 800EBD60
  c->lr=0x800EBD68u; f_8030D728(c); // 800EBD64
  c->r[3]=c->r[31]|c->r[31]; // 800EBD68
  c->lr=0x800EBD70u; f_8030BD1C(c); // 800EBD6C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800EBD70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EBD74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBD78
  c->lr=c->r[0]; // 800EBD7C
  c->r[1]=c->r[1]+0x00000010u; // 800EBD80
  return; // 800EBD84
}

// fn_800EBD88
void f_800EBD88(Ctx* __restrict c) {
  trace_call(0x800EBD88u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800EBD88
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EBD8C
  c->r[0]=R8(c->r[3]+0x00000030u); // 800EBD90
  W32(c->r[4]+0x00000000u,c->r[6]); // 800EBD94
  W32(c->r[4]+0x00000004u,c->r[5]); // 800EBD98
  W8(c->r[4]+0x00000030u,c->r[0]); // 800EBD9C
  return; // 800EBDA0
}

// fn_800EBDA4
void f_800EBDA4(Ctx* __restrict c) {
  trace_call(0x800EBDA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBDA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EBDA8
  c->ctr=c->r[12]; // 800EBDAC
  if (true) { dispatch(c,c->ctr); return; } // 800EBDB0
}

// fn_800EBDB4
void f_800EBDB4(Ctx* __restrict c) {
  trace_call(0x800EBDB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBDB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EBDB8
  c->ctr=c->r[12]; // 800EBDBC
  if (true) { dispatch(c,c->ctr); return; } // 800EBDC0
}

// fn_800EBDC4
void f_800EBDC4(Ctx* __restrict c) {
  trace_call(0x800EBDC4u);
  c->r[3]=0u+0x80410000u; // 800EBDC4
  c->r[3]=c->r[3]+0xFFFFE536u; // 800EBDC8
  return; // 800EBDCC
}

// fn_800EBDD0
void f_800EBDD0(Ctx* __restrict c) {
  trace_call(0x800EBDD0u);
  c->r[3]=0u+0x00000034u; // 800EBDD0
  return; // 800EBDD4
}

// fn_800EBDD8
void f_800EBDD8(Ctx* __restrict c) {
  trace_call(0x800EBDD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBDD8
  c->r[0]=c->lr; // 800EBDDC
  c->r[3]=0u+0x00000034u; // 800EBDE0
  c->r[4]=c->r[13]+0xFFFFB923u; // 800EBDE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBDE8
  c->r[5]=0u+0x00000000u; // 800EBDEC
  c->r[6]=0u+0x00001001u; // 800EBDF0
  c->lr=0x800EBDF8u; f_80244D20(c); // 800EBDF4
  cmps(c,0,(int32_t)c->r[3],0); // 800EBDF8
  if (crb(c,2)) { goto L_800EBE04; } // 800EBDFC
  c->lr=0x800EBE04u; f_800EBD04(c); // 800EBE00
L_800EBE04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBE04
  c->lr=c->r[0]; // 800EBE08
  c->r[1]=c->r[1]+0x00000010u; // 800EBE0C
  return; // 800EBE10
}

// fn_800EBE14
void f_800EBE14(Ctx* __restrict c) {
  trace_call(0x800EBE14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBE14
  c->r[0]=c->lr; // 800EBE18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBE1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBE20
  c->r[31]=c->r[3]|c->r[3]; // 800EBE24
  c->lr=0x800EBE2Cu; f_800D7120(c); // 800EBE28
  c->r[4]=0u+0x80410000u; // 800EBE2C
  c->r[3]=0u+0xBC1A0000u; // 800EBE30
  c->r[0]=c->r[3]+0x000028D9u; // 800EBE34
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EBE38
  c->r[4]=c->r[4]+0x00005664u; // 800EBE3C
  c->r[3]=c->r[31]|c->r[31]; // 800EBE40
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EBE44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBE48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBE4C
  c->lr=c->r[0]; // 800EBE50
  c->r[1]=c->r[1]+0x00000010u; // 800EBE54
  return; // 800EBE58
}

// fn_800EBE5C
void f_800EBE5C(Ctx* __restrict c) {
  trace_call(0x800EBE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBE5C
  c->r[0]=c->lr; // 800EBE60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBE64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EBE68
  c->r[30]=c->r[3]|c->r[3]; // 800EBE6C
  c->r[31]=c->r[4]|c->r[4]; // 800EBE70
  c->lr=0x800EBE78u; f_8030D728(c); // 800EBE74
  c->r[3]=c->r[31]|c->r[31]; // 800EBE78
  c->lr=0x800EBE80u; f_8030BD1C(c); // 800EBE7C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800EBE80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EBE84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBE88
  c->lr=c->r[0]; // 800EBE8C
  c->r[1]=c->r[1]+0x00000010u; // 800EBE90
  return; // 800EBE94
}

// fn_800EBE98
void f_800EBE98(Ctx* __restrict c) {
  trace_call(0x800EBE98u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800EBE98
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EBE9C
  c->r[0]=R8(c->r[3]+0x00000030u); // 800EBEA0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800EBEA4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800EBEA8
  W8(c->r[4]+0x00000030u,c->r[0]); // 800EBEAC
  return; // 800EBEB0
}

// fn_800EBEB4
void f_800EBEB4(Ctx* __restrict c) {
  trace_call(0x800EBEB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBEB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EBEB8
  c->ctr=c->r[12]; // 800EBEBC
  if (true) { dispatch(c,c->ctr); return; } // 800EBEC0
}

// fn_800EBEC4
void f_800EBEC4(Ctx* __restrict c) {
  trace_call(0x800EBEC4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBEC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EBEC8
  c->ctr=c->r[12]; // 800EBECC
  if (true) { dispatch(c,c->ctr); return; } // 800EBED0
}

// fn_800EBED4
void f_800EBED4(Ctx* __restrict c) {
  trace_call(0x800EBED4u);
  c->r[3]=0u+0x80410000u; // 800EBED4
  c->r[3]=c->r[3]+0xFFFFE54Au; // 800EBED8
  return; // 800EBEDC
}

// fn_800EBEE0
void f_800EBEE0(Ctx* __restrict c) {
  trace_call(0x800EBEE0u);
  c->r[3]=0u+0x00000034u; // 800EBEE0
  return; // 800EBEE4
}

// fn_800EBEE8
void f_800EBEE8(Ctx* __restrict c) {
  trace_call(0x800EBEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBEE8
  c->r[0]=c->lr; // 800EBEEC
  c->r[3]=0u+0x00000034u; // 800EBEF0
  c->r[4]=c->r[13]+0xFFFFB928u; // 800EBEF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBEF8
  c->r[5]=0u+0x00000000u; // 800EBEFC
  c->r[6]=0u+0x00001001u; // 800EBF00
  c->lr=0x800EBF08u; f_80244D20(c); // 800EBF04
  cmps(c,0,(int32_t)c->r[3],0); // 800EBF08
  if (crb(c,2)) { goto L_800EBF14; } // 800EBF0C
  c->lr=0x800EBF14u; f_800EBE14(c); // 800EBF10
L_800EBF14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBF14
  c->lr=c->r[0]; // 800EBF18
  c->r[1]=c->r[1]+0x00000010u; // 800EBF1C
  return; // 800EBF20
}

// fn_800EBF24
void f_800EBF24(Ctx* __restrict c) {
  trace_call(0x800EBF24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBF24
  c->r[0]=c->lr; // 800EBF28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBF2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBF30
  c->r[31]=c->r[3]|c->r[3]; // 800EBF34
  c->lr=0x800EBF3Cu; f_800D7120(c); // 800EBF38
  c->r[4]=0u+0x80410000u; // 800EBF3C
  c->r[3]=0u+0xBC1A0000u; // 800EBF40
  c->r[0]=c->r[3]+0x000028D9u; // 800EBF44
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EBF48
  c->r[4]=c->r[4]+0x00005630u; // 800EBF4C
  c->r[3]=c->r[31]|c->r[31]; // 800EBF50
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EBF54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBF58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBF5C
  c->lr=c->r[0]; // 800EBF60
  c->r[1]=c->r[1]+0x00000010u; // 800EBF64
  return; // 800EBF68
}

// fn_800EBF6C
void f_800EBF6C(Ctx* __restrict c) {
  trace_call(0x800EBF6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBF6C
  c->r[0]=c->lr; // 800EBF70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBF74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EBF78
  c->r[30]=c->r[3]|c->r[3]; // 800EBF7C
  c->r[31]=c->r[4]|c->r[4]; // 800EBF80
  c->lr=0x800EBF88u; f_8030D728(c); // 800EBF84
  c->r[3]=c->r[31]|c->r[31]; // 800EBF88
  c->lr=0x800EBF90u; f_8030BD1C(c); // 800EBF8C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800EBF90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EBF94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBF98
  c->lr=c->r[0]; // 800EBF9C
  c->r[1]=c->r[1]+0x00000010u; // 800EBFA0
  return; // 800EBFA4
}

// fn_800EBFA8
void f_800EBFA8(Ctx* __restrict c) {
  trace_call(0x800EBFA8u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800EBFA8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EBFAC
  c->r[0]=R8(c->r[3]+0x00000030u); // 800EBFB0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800EBFB4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800EBFB8
  W8(c->r[4]+0x00000030u,c->r[0]); // 800EBFBC
  return; // 800EBFC0
}

// fn_800EBFC4
void f_800EBFC4(Ctx* __restrict c) {
  trace_call(0x800EBFC4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBFC4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EBFC8
  c->ctr=c->r[12]; // 800EBFCC
  if (true) { dispatch(c,c->ctr); return; } // 800EBFD0
}

// fn_800EBFD4
void f_800EBFD4(Ctx* __restrict c) {
  trace_call(0x800EBFD4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EBFD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EBFD8
  c->ctr=c->r[12]; // 800EBFDC
  if (true) { dispatch(c,c->ctr); return; } // 800EBFE0
}

// fn_800EBFE4
void f_800EBFE4(Ctx* __restrict c) {
  trace_call(0x800EBFE4u);
  c->r[3]=0u+0x80410000u; // 800EBFE4
  c->r[3]=c->r[3]+0xFFFFE55Au; // 800EBFE8
  return; // 800EBFEC
}

// fn_800EBFF0
void f_800EBFF0(Ctx* __restrict c) {
  trace_call(0x800EBFF0u);
  c->r[3]=0u+0x00000034u; // 800EBFF0
  return; // 800EBFF4
}

// fn_800EBFF8
void f_800EBFF8(Ctx* __restrict c) {
  trace_call(0x800EBFF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBFF8
  c->r[0]=c->lr; // 800EBFFC
  c->r[3]=0u+0x00000034u; // 800EC000
  c->r[4]=c->r[13]+0xFFFFB92Du; // 800EC004
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC008
  c->r[5]=0u+0x00000000u; // 800EC00C
  c->r[6]=0u+0x00001001u; // 800EC010
  c->lr=0x800EC018u; f_80244D20(c); // 800EC014
  cmps(c,0,(int32_t)c->r[3],0); // 800EC018
  if (crb(c,2)) { goto L_800EC024; } // 800EC01C
  c->lr=0x800EC024u; f_800EBF24(c); // 800EC020
L_800EC024:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC024
  c->lr=c->r[0]; // 800EC028
  c->r[1]=c->r[1]+0x00000010u; // 800EC02C
  return; // 800EC030
}

// fn_800EC034
void f_800EC034(Ctx* __restrict c) {
  trace_call(0x800EC034u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC034
  c->r[0]=c->lr; // 800EC038
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC03C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC040
  c->r[31]=c->r[3]|c->r[3]; // 800EC044
  c->lr=0x800EC04Cu; f_800D7120(c); // 800EC048
  c->r[4]=0u+0x80410000u; // 800EC04C
  c->r[3]=0u+0xBC1A0000u; // 800EC050
  c->r[0]=c->r[3]+0x000028D9u; // 800EC054
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC058
  c->r[4]=c->r[4]+0x000055FCu; // 800EC05C
  c->r[3]=c->r[31]|c->r[31]; // 800EC060
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EC064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC068
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC06C
  c->lr=c->r[0]; // 800EC070
  c->r[1]=c->r[1]+0x00000010u; // 800EC074
  return; // 800EC078
}

// fn_800EC07C
void f_800EC07C(Ctx* __restrict c) {
  trace_call(0x800EC07Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC07C
  c->r[0]=c->lr; // 800EC080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC084
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC088
  c->r[30]=c->r[3]|c->r[3]; // 800EC08C
  c->r[31]=c->r[4]|c->r[4]; // 800EC090
  c->lr=0x800EC098u; f_8030D728(c); // 800EC094
  c->r[3]=c->r[31]|c->r[31]; // 800EC098
  c->lr=0x800EC0A0u; f_8030BD1C(c); // 800EC09C
  W8(c->r[30]+0x00000030u,c->r[3]); // 800EC0A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC0A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC0A8
  c->lr=c->r[0]; // 800EC0AC
  c->r[1]=c->r[1]+0x00000010u; // 800EC0B0
  return; // 800EC0B4
}

// fn_800EC0B8
void f_800EC0B8(Ctx* __restrict c) {
  trace_call(0x800EC0B8u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800EC0B8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EC0BC
  c->r[0]=R8(c->r[3]+0x00000030u); // 800EC0C0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800EC0C4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800EC0C8
  W8(c->r[4]+0x00000030u,c->r[0]); // 800EC0CC
  return; // 800EC0D0
}

// fn_800EC0D4
void f_800EC0D4(Ctx* __restrict c) {
  trace_call(0x800EC0D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC0D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC0D8
  c->ctr=c->r[12]; // 800EC0DC
  if (true) { dispatch(c,c->ctr); return; } // 800EC0E0
}

// fn_800EC0E4
void f_800EC0E4(Ctx* __restrict c) {
  trace_call(0x800EC0E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC0E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EC0E8
  c->ctr=c->r[12]; // 800EC0EC
  if (true) { dispatch(c,c->ctr); return; } // 800EC0F0
}

// fn_800EC0F4
void f_800EC0F4(Ctx* __restrict c) {
  trace_call(0x800EC0F4u);
  c->r[3]=0u+0x80410000u; // 800EC0F4
  c->r[3]=c->r[3]+0xFFFFE56Eu; // 800EC0F8
  return; // 800EC0FC
}

// fn_800EC100
void f_800EC100(Ctx* __restrict c) {
  trace_call(0x800EC100u);
  c->r[3]=0u+0x00000034u; // 800EC100
  return; // 800EC104
}

// fn_800EC108
void f_800EC108(Ctx* __restrict c) {
  trace_call(0x800EC108u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC108
  c->r[0]=c->lr; // 800EC10C
  c->r[3]=0u+0x00000034u; // 800EC110
  c->r[4]=c->r[13]+0xFFFFB932u; // 800EC114
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC118
  c->r[5]=0u+0x00000000u; // 800EC11C
  c->r[6]=0u+0x00001001u; // 800EC120
  c->lr=0x800EC128u; f_80244D20(c); // 800EC124
  cmps(c,0,(int32_t)c->r[3],0); // 800EC128
  if (crb(c,2)) { goto L_800EC134; } // 800EC12C
  c->lr=0x800EC134u; f_800EC034(c); // 800EC130
L_800EC134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC134
  c->lr=c->r[0]; // 800EC138
  c->r[1]=c->r[1]+0x00000010u; // 800EC13C
  return; // 800EC140
}

// fn_800EC144
void f_800EC144(Ctx* __restrict c) {
  trace_call(0x800EC144u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC144
  c->r[0]=c->lr; // 800EC148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC14C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC150
  c->r[31]=c->r[3]|c->r[3]; // 800EC154
  c->lr=0x800EC15Cu; f_800D7120(c); // 800EC158
  c->r[4]=0u+0x80410000u; // 800EC15C
  c->r[3]=0u+0x1AC60000u; // 800EC160
  c->r[0]=c->r[3]+0x00007219u; // 800EC164
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC168
  c->r[4]=c->r[4]+0x000055C8u; // 800EC16C
  c->r[3]=c->r[31]|c->r[31]; // 800EC170
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EC174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC17C
  c->lr=c->r[0]; // 800EC180
  c->r[1]=c->r[1]+0x00000010u; // 800EC184
  return; // 800EC188
}

// fn_800EC18C
void f_800EC18C(Ctx* __restrict c) {
  trace_call(0x800EC18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC18C
  c->r[0]=c->lr; // 800EC190
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC194
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC198
  c->r[30]=c->r[3]|c->r[3]; // 800EC19C
  c->r[31]=c->r[4]|c->r[4]; // 800EC1A0
  c->lr=0x800EC1A8u; f_8030D728(c); // 800EC1A4
  c->r[3]=c->r[31]|c->r[31]; // 800EC1A8
  c->lr=0x800EC1B0u; f_8030BD1C(c); // 800EC1AC
  W8(c->r[30]+0x00000030u,c->r[3]); // 800EC1B0
  c->r[3]=c->r[31]|c->r[31]; // 800EC1B4
  c->lr=0x800EC1BCu; f_8030BD1C(c); // 800EC1B8
  W8(c->r[30]+0x00000031u,c->r[3]); // 800EC1BC
  c->r[3]=c->r[31]|c->r[31]; // 800EC1C0
  c->lr=0x800EC1C8u; f_8030BD1C(c); // 800EC1C4
  W8(c->r[30]+0x00000032u,c->r[3]); // 800EC1C8
  c->r[3]=c->r[31]|c->r[31]; // 800EC1CC
  c->lr=0x800EC1D4u; f_8030BD1C(c); // 800EC1D0
  W8(c->r[30]+0x00000033u,c->r[3]); // 800EC1D4
  c->r[3]=c->r[31]|c->r[31]; // 800EC1D8
  c->lr=0x800EC1E0u; f_8030BD1C(c); // 800EC1DC
  W8(c->r[30]+0x00000034u,c->r[3]); // 800EC1E0
  c->r[3]=c->r[31]|c->r[31]; // 800EC1E4
  c->lr=0x800EC1ECu; f_8030C0A0(c); // 800EC1E8
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800EC1EC
  c->r[3]=c->r[31]|c->r[31]; // 800EC1F0
  c->lr=0x800EC1F8u; f_8030C0A0(c); // 800EC1F4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800EC1F8
  c->r[3]=c->r[31]|c->r[31]; // 800EC1FC
  c->lr=0x800EC204u; f_8030C0A0(c); // 800EC200
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800EC204
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC208
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC20C
  c->lr=c->r[0]; // 800EC210
  c->r[1]=c->r[1]+0x00000010u; // 800EC214
  return; // 800EC218
}

// fn_800EC21C
void f_800EC21C(Ctx* __restrict c) {
  trace_call(0x800EC21Cu);
  c->r[10]=R32(c->r[3]+0x00000000u); // 800EC21C
  c->r[9]=R32(c->r[3]+0x00000004u); // 800EC220
  c->r[8]=R8(c->r[3]+0x00000030u); // 800EC224
  c->r[7]=R8(c->r[3]+0x00000031u); // 800EC228
  c->r[6]=R8(c->r[3]+0x00000032u); // 800EC22C
  c->r[5]=R8(c->r[3]+0x00000033u); // 800EC230
  c->r[0]=R8(c->r[3]+0x00000034u); // 800EC234
  {uint32_t ea=c->r[3]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EC238
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC23C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC240
  W32(c->r[4]+0x00000000u,c->r[10]); // 800EC244
  W32(c->r[4]+0x00000004u,c->r[9]); // 800EC248
  W8(c->r[4]+0x00000030u,c->r[8]); // 800EC24C
  W8(c->r[4]+0x00000031u,c->r[7]); // 800EC250
  W8(c->r[4]+0x00000032u,c->r[6]); // 800EC254
  W8(c->r[4]+0x00000033u,c->r[5]); // 800EC258
  W8(c->r[4]+0x00000034u,c->r[0]); // 800EC25C
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[2]);} // 800EC260
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[1]);} // 800EC264
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 800EC268
  return; // 800EC26C
}

// fn_800EC270
void f_800EC270(Ctx* __restrict c) {
  trace_call(0x800EC270u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC270
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC274
  c->ctr=c->r[12]; // 800EC278
  if (true) { dispatch(c,c->ctr); return; } // 800EC27C
}

// fn_800EC280
void f_800EC280(Ctx* __restrict c) {
  trace_call(0x800EC280u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC280
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EC284
  c->ctr=c->r[12]; // 800EC288
  if (true) { dispatch(c,c->ctr); return; } // 800EC28C
}

// fn_800EC290
void f_800EC290(Ctx* __restrict c) {
  trace_call(0x800EC290u);
  c->r[3]=c->r[13]+0xFFFFB937u; // 800EC290
  return; // 800EC294
}

// fn_800EC298
void f_800EC298(Ctx* __restrict c) {
  trace_call(0x800EC298u);
  c->r[3]=0u+0x00000044u; // 800EC298
  return; // 800EC29C
}

// fn_800EC2A0
void f_800EC2A0(Ctx* __restrict c) {
  trace_call(0x800EC2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC2A0
  c->r[0]=c->lr; // 800EC2A4
  c->r[3]=0u+0x00000044u; // 800EC2A8
  c->r[4]=c->r[13]+0xFFFFB93Eu; // 800EC2AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC2B0
  c->r[5]=0u+0x00000000u; // 800EC2B4
  c->r[6]=0u+0x00001001u; // 800EC2B8
  c->lr=0x800EC2C0u; f_80244D20(c); // 800EC2BC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC2C0
  if (crb(c,2)) { goto L_800EC2CC; } // 800EC2C4
  c->lr=0x800EC2CCu; f_800EC144(c); // 800EC2C8
L_800EC2CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC2CC
  c->lr=c->r[0]; // 800EC2D0
  c->r[1]=c->r[1]+0x00000010u; // 800EC2D4
  return; // 800EC2D8
}

// fn_800EC2DC
void f_800EC2DC(Ctx* __restrict c) {
  trace_call(0x800EC2DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC2DC
  c->r[0]=c->lr; // 800EC2E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC2E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC2E8
  c->r[31]=c->r[3]|c->r[3]; // 800EC2EC
  c->lr=0x800EC2F4u; f_800D7120(c); // 800EC2F0
  c->r[4]=0u+0x80410000u; // 800EC2F4
  c->r[3]=0u+0xCD200000u; // 800EC2F8
  c->r[0]=c->r[3]+0x00000825u; // 800EC2FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC300
  c->r[4]=c->r[4]+0x00005594u; // 800EC304
  c->r[3]=c->r[31]|c->r[31]; // 800EC308
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EC30C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC310
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC314
  c->lr=c->r[0]; // 800EC318
  c->r[1]=c->r[1]+0x00000010u; // 800EC31C
  return; // 800EC320
}

// fn_800EC324
void f_800EC324(Ctx* __restrict c) {
  trace_call(0x800EC324u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC324
  c->r[0]=c->lr; // 800EC328
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC32C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC330
  c->r[30]=c->r[3]|c->r[3]; // 800EC334
  c->r[31]=c->r[4]|c->r[4]; // 800EC338
  c->lr=0x800EC340u; f_8030D728(c); // 800EC33C
  c->r[3]=c->r[31]|c->r[31]; // 800EC340
  c->lr=0x800EC348u; f_8030C0A0(c); // 800EC344
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800EC348
  c->r[3]=c->r[31]|c->r[31]; // 800EC34C
  c->lr=0x800EC354u; f_8030C0A0(c); // 800EC350
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800EC354
  c->r[3]=c->r[31]|c->r[31]; // 800EC358
  c->lr=0x800EC360u; f_8030C0A0(c); // 800EC35C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800EC360
  c->r[3]=c->r[31]|c->r[31]; // 800EC364
  c->lr=0x800EC36Cu; f_8030C0A0(c); // 800EC368
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800EC36C
  c->r[3]=c->r[31]|c->r[31]; // 800EC370
  c->lr=0x800EC378u; f_8030C0A0(c); // 800EC374
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800EC378
  c->r[3]=c->r[31]|c->r[31]; // 800EC37C
  c->lr=0x800EC384u; f_8030C0A0(c); // 800EC380
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800EC384
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC388
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC38C
  c->lr=c->r[0]; // 800EC390
  c->r[1]=c->r[1]+0x00000010u; // 800EC394
  return; // 800EC398
}

// fn_800EC39C
void f_800EC39C(Ctx* __restrict c) {
  trace_call(0x800EC39Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800EC39C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EC3A0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 800EC3A4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 800EC3A8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EC3AC
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EC3B0
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC3B4
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC3B8
  W32(c->r[4]+0x00000000u,c->r[5]); // 800EC3BC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EC3C0
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[5]);} // 800EC3C4
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[4]);} // 800EC3C8
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[3]);} // 800EC3CC
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[2]);} // 800EC3D0
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[1]);} // 800EC3D4
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 800EC3D8
  return; // 800EC3DC
}

// fn_800EC3E0
void f_800EC3E0(Ctx* __restrict c) {
  trace_call(0x800EC3E0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC3E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC3E4
  c->ctr=c->r[12]; // 800EC3E8
  if (true) { dispatch(c,c->ctr); return; } // 800EC3EC
}

// fn_800EC3F0
void f_800EC3F0(Ctx* __restrict c) {
  trace_call(0x800EC3F0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC3F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EC3F4
  c->ctr=c->r[12]; // 800EC3F8
  if (true) { dispatch(c,c->ctr); return; } // 800EC3FC
}

// fn_800EC400
void f_800EC400(Ctx* __restrict c) {
  trace_call(0x800EC400u);
  c->r[3]=0u+0x80410000u; // 800EC400
  c->r[3]=c->r[3]+0xFFFFE57Eu; // 800EC404
  return; // 800EC408
}

// fn_800EC40C
void f_800EC40C(Ctx* __restrict c) {
  trace_call(0x800EC40Cu);
  c->r[3]=0u+0x00000048u; // 800EC40C
  return; // 800EC410
}

// fn_800EC414
void f_800EC414(Ctx* __restrict c) {
  trace_call(0x800EC414u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC414
  c->r[0]=c->lr; // 800EC418
  c->r[3]=0u+0x00000048u; // 800EC41C
  c->r[4]=c->r[13]+0xFFFFB943u; // 800EC420
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC424
  c->r[5]=0u+0x00000000u; // 800EC428
  c->r[6]=0u+0x00001001u; // 800EC42C
  c->lr=0x800EC434u; f_80244D20(c); // 800EC430
  cmps(c,0,(int32_t)c->r[3],0); // 800EC434
  if (crb(c,2)) { goto L_800EC440; } // 800EC438
  c->lr=0x800EC440u; f_800EC2DC(c); // 800EC43C
L_800EC440:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC440
  c->lr=c->r[0]; // 800EC444
  c->r[1]=c->r[1]+0x00000010u; // 800EC448
  return; // 800EC44C
}

// fn_800EC450
void f_800EC450(Ctx* __restrict c) {
  trace_call(0x800EC450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC450
  c->r[0]=c->lr; // 800EC454
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC45C
  c->r[31]=c->r[3]|c->r[3]; // 800EC460
  c->lr=0x800EC468u; f_800D7120(c); // 800EC464
  c->r[3]=0u+0x80410000u; // 800EC468
  c->r[0]=0u+0x00000000u; // 800EC46C
  c->r[3]=c->r[3]+0x00005560u; // 800EC470
  W32(c->r[31]+0x00000008u,c->r[3]); // 800EC474
  c->r[3]=c->r[31]|c->r[31]; // 800EC478
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC47C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC480
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC484
  c->lr=c->r[0]; // 800EC488
  c->r[1]=c->r[1]+0x00000010u; // 800EC48C
  return; // 800EC490
}

// fn_800EC494
void f_800EC494(Ctx* __restrict c) {
  trace_call(0x800EC494u);
  f_8030D728(c); return; // 800EC494
}

// fn_800EC498
void f_800EC498(Ctx* __restrict c) {
  trace_call(0x800EC498u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800EC498
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EC49C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800EC4A0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EC4A4
  return; // 800EC4A8
}

// fn_800EC4AC
void f_800EC4AC(Ctx* __restrict c) {
  trace_call(0x800EC4ACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC4AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC4B0
  c->ctr=c->r[12]; // 800EC4B4
  if (true) { dispatch(c,c->ctr); return; } // 800EC4B8
}

// fn_800EC4BC
void f_800EC4BC(Ctx* __restrict c) {
  trace_call(0x800EC4BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC4BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EC4C0
  c->ctr=c->r[12]; // 800EC4C4
  if (true) { dispatch(c,c->ctr); return; } // 800EC4C8
}

// fn_800EC4CC
void f_800EC4CC(Ctx* __restrict c) {
  trace_call(0x800EC4CCu);
  c->r[3]=0u+0x80410000u; // 800EC4CC
  c->r[3]=c->r[3]+0xFFFFE593u; // 800EC4D0
  return; // 800EC4D4
}

// fn_800EC4D8
void f_800EC4D8(Ctx* __restrict c) {
  trace_call(0x800EC4D8u);
  c->r[3]=0u+0x00000030u; // 800EC4D8
  return; // 800EC4DC
}

// fn_800EC4E0
void f_800EC4E0(Ctx* __restrict c) {
  trace_call(0x800EC4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC4E0
  c->r[0]=c->lr; // 800EC4E4
  c->r[3]=0u+0x00000030u; // 800EC4E8
  c->r[4]=c->r[13]+0xFFFFB948u; // 800EC4EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC4F0
  c->r[5]=0u+0x00000000u; // 800EC4F4
  c->r[6]=0u+0x00001001u; // 800EC4F8
  c->lr=0x800EC500u; f_80244D20(c); // 800EC4FC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC500
  if (crb(c,2)) { goto L_800EC50C; } // 800EC504
  c->lr=0x800EC50Cu; f_800EC450(c); // 800EC508
L_800EC50C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC50C
  c->lr=c->r[0]; // 800EC510
  c->r[1]=c->r[1]+0x00000010u; // 800EC514
  return; // 800EC518
}

// fn_800EC51C
void f_800EC51C(Ctx* __restrict c) {
  trace_call(0x800EC51Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC51C
  c->r[0]=c->lr; // 800EC520
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC528
  c->r[31]=c->r[3]|c->r[3]; // 800EC52C
  c->lr=0x800EC534u; f_800D7120(c); // 800EC530
  c->r[4]=0u+0x80410000u; // 800EC534
  c->r[3]=0u+0xDC6E0000u; // 800EC538
  c->r[0]=c->r[3]+0xFFFF9AB7u; // 800EC53C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC540
  c->r[4]=c->r[4]+0x0000552Cu; // 800EC544
  c->r[3]=c->r[31]|c->r[31]; // 800EC548
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EC54C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC550
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC554
  c->lr=c->r[0]; // 800EC558
  c->r[1]=c->r[1]+0x00000010u; // 800EC55C
  return; // 800EC560
}

// fn_800EC564
void f_800EC564(Ctx* __restrict c) {
  trace_call(0x800EC564u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC564
  c->r[0]=c->lr; // 800EC568
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC56C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC570
  c->r[30]=c->r[3]|c->r[3]; // 800EC574
  c->r[31]=c->r[4]|c->r[4]; // 800EC578
  c->lr=0x800EC580u; f_8030D728(c); // 800EC57C
  c->r[3]=c->r[31]|c->r[31]; // 800EC580
  c->lr=0x800EC588u; f_8030C0A0(c); // 800EC584
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800EC588
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC58C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC590
  c->lr=c->r[0]; // 800EC594
  c->r[1]=c->r[1]+0x00000010u; // 800EC598
  return; // 800EC59C
}

// fn_800EC5A0
void f_800EC5A0(Ctx* __restrict c) {
  trace_call(0x800EC5A0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800EC5A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EC5A4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC5A8
  W32(c->r[4]+0x00000000u,c->r[5]); // 800EC5AC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EC5B0
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800EC5B4
  return; // 800EC5B8
}

// fn_800EC5BC
void f_800EC5BC(Ctx* __restrict c) {
  trace_call(0x800EC5BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC5BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC5C0
  c->ctr=c->r[12]; // 800EC5C4
  if (true) { dispatch(c,c->ctr); return; } // 800EC5C8
}

// fn_800EC5CC
void f_800EC5CC(Ctx* __restrict c) {
  trace_call(0x800EC5CCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC5CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EC5D0
  c->ctr=c->r[12]; // 800EC5D4
  if (true) { dispatch(c,c->ctr); return; } // 800EC5D8
}

// fn_800EC5DC
void f_800EC5DC(Ctx* __restrict c) {
  trace_call(0x800EC5DCu);
  c->r[3]=0u+0x80410000u; // 800EC5DC
  c->r[3]=c->r[3]+0xFFFFE5A3u; // 800EC5E0
  return; // 800EC5E4
}

// fn_800EC5E8
void f_800EC5E8(Ctx* __restrict c) {
  trace_call(0x800EC5E8u);
  c->r[3]=0u+0x00000034u; // 800EC5E8
  return; // 800EC5EC
}

// fn_800EC5F0
void f_800EC5F0(Ctx* __restrict c) {
  trace_call(0x800EC5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC5F0
  c->r[0]=c->lr; // 800EC5F4
  c->r[3]=0u+0x00000034u; // 800EC5F8
  c->r[4]=c->r[13]+0xFFFFB94Du; // 800EC5FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC600
  c->r[5]=0u+0x00000000u; // 800EC604
  c->r[6]=0u+0x00001001u; // 800EC608
  c->lr=0x800EC610u; f_80244D20(c); // 800EC60C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC610
  if (crb(c,2)) { goto L_800EC61C; } // 800EC614
  c->lr=0x800EC61Cu; f_800EC51C(c); // 800EC618
L_800EC61C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC61C
  c->lr=c->r[0]; // 800EC620
  c->r[1]=c->r[1]+0x00000010u; // 800EC624
  return; // 800EC628
}

// fn_800EC62C
void f_800EC62C(Ctx* __restrict c) {
  trace_call(0x800EC62Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC62C
  c->r[0]=c->lr; // 800EC630
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC638
  c->r[31]=c->r[3]|c->r[3]; // 800EC63C
  c->lr=0x800EC644u; f_800D7120(c); // 800EC640
  c->r[4]=0u+0x80410000u; // 800EC644
  c->r[3]=0u+0xBC1A0000u; // 800EC648
  c->r[0]=c->r[3]+0x000028D9u; // 800EC64C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC650
  c->r[4]=c->r[4]+0x000054F8u; // 800EC654
  c->r[3]=c->r[31]|c->r[31]; // 800EC658
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EC65C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC660
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC664
  c->lr=c->r[0]; // 800EC668
  c->r[1]=c->r[1]+0x00000010u; // 800EC66C
  return; // 800EC670
}

// fn_800EC674
void f_800EC674(Ctx* __restrict c) {
  trace_call(0x800EC674u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC674
  c->r[0]=c->lr; // 800EC678
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC67C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC680
  c->r[30]=c->r[3]|c->r[3]; // 800EC684
  c->r[31]=c->r[4]|c->r[4]; // 800EC688
  c->lr=0x800EC690u; f_8030D728(c); // 800EC68C
  c->r[3]=c->r[31]|c->r[31]; // 800EC690
  c->lr=0x800EC698u; f_8030BD1C(c); // 800EC694
  W8(c->r[30]+0x00000030u,c->r[3]); // 800EC698
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC69C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC6A0
  c->lr=c->r[0]; // 800EC6A4
  c->r[1]=c->r[1]+0x00000010u; // 800EC6A8
  return; // 800EC6AC
}

// fn_800EC6B0
void f_800EC6B0(Ctx* __restrict c) {
  trace_call(0x800EC6B0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800EC6B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800EC6B4
  c->r[0]=R8(c->r[3]+0x00000030u); // 800EC6B8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800EC6BC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800EC6C0
  W8(c->r[4]+0x00000030u,c->r[0]); // 800EC6C4
  return; // 800EC6C8
}

// fn_800EC6CC
void f_800EC6CC(Ctx* __restrict c) {
  trace_call(0x800EC6CCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC6CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC6D0
  c->ctr=c->r[12]; // 800EC6D4
  if (true) { dispatch(c,c->ctr); return; } // 800EC6D8
}

// fn_800EC6DC
void f_800EC6DC(Ctx* __restrict c) {
  trace_call(0x800EC6DCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC6DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EC6E0
  c->ctr=c->r[12]; // 800EC6E4
  if (true) { dispatch(c,c->ctr); return; } // 800EC6E8
}

// fn_800EC6EC
void f_800EC6EC(Ctx* __restrict c) {
  trace_call(0x800EC6ECu);
  c->r[3]=0u+0x80410000u; // 800EC6EC
  c->r[3]=c->r[3]+0xFFFFE5BBu; // 800EC6F0
  return; // 800EC6F4
}

// fn_800EC6F8
void f_800EC6F8(Ctx* __restrict c) {
  trace_call(0x800EC6F8u);
  c->r[3]=0u+0x00000034u; // 800EC6F8
  return; // 800EC6FC
}

// fn_800EC700
void f_800EC700(Ctx* __restrict c) {
  trace_call(0x800EC700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC700
  c->r[0]=c->lr; // 800EC704
  c->r[3]=0u+0x00000034u; // 800EC708
  c->r[4]=c->r[13]+0xFFFFB952u; // 800EC70C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC710
  c->r[5]=0u+0x00000000u; // 800EC714
  c->r[6]=0u+0x00001001u; // 800EC718
  c->lr=0x800EC720u; f_80244D20(c); // 800EC71C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC720
  if (crb(c,2)) { goto L_800EC72C; } // 800EC724
  c->lr=0x800EC72Cu; f_800EC62C(c); // 800EC728
L_800EC72C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC72C
  c->lr=c->r[0]; // 800EC730
  c->r[1]=c->r[1]+0x00000010u; // 800EC734
  return; // 800EC738
}

// fn_800EC73C
void f_800EC73C(Ctx* __restrict c) {
  trace_call(0x800EC73Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC73C
  c->r[0]=c->lr; // 800EC740
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC748
  c->r[31]=c->r[3]|c->r[3]; // 800EC74C
  c->lr=0x800EC754u; f_800D7120(c); // 800EC750
  c->r[5]=0u+0x80410000u; // 800EC754
  c->r[3]=0u+0x59710000u; // 800EC758
  c->r[0]=c->r[3]+0x000047B2u; // 800EC75C
  c->r[4]=0u+0x00000000u; // 800EC760
  c->r[5]=c->r[5]+0x000054C4u; // 800EC764
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EC768
  c->r[3]=c->r[31]|c->r[31]; // 800EC76C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EC770
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC778
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC77C
  c->lr=c->r[0]; // 800EC780
  c->r[1]=c->r[1]+0x00000010u; // 800EC784
  return; // 800EC788
}

// fn_800EC78C
void f_800EC78C(Ctx* __restrict c) {
  trace_call(0x800EC78Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC78C
  c->r[0]=c->lr; // 800EC790
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC794
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC798
  c->r[30]=c->r[3]|c->r[3]; // 800EC79C
  c->r[31]=c->r[4]|c->r[4]; // 800EC7A0
  c->lr=0x800EC7A8u; f_8030D728(c); // 800EC7A4
  c->r[3]=c->r[31]|c->r[31]; // 800EC7A8
  c->r[4]=0u+0x00000000u; // 800EC7AC
  c->lr=0x800EC7B4u; f_8030BE30(c); // 800EC7B0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EC7B4
  c->r[3]=c->r[31]|c->r[31]; // 800EC7B8
  c->lr=0x800EC7C0u; f_8030BD1C(c); // 800EC7BC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EC7C0
  c->r[3]=c->r[31]|c->r[31]; // 800EC7C4
  c->lr=0x800EC7CCu; f_8030BD1C(c); // 800EC7C8
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EC7CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC7D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC7D4
  c->lr=c->r[0]; // 800EC7D8
  c->r[1]=c->r[1]+0x00000010u; // 800EC7DC
  return; // 800EC7E0
}

// fn_800EC7E4
void f_800EC7E4(Ctx* __restrict c) {
  trace_call(0x800EC7E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC7E4
  c->r[0]=c->lr; // 800EC7E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC7EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC7F0
  c->r[30]=c->r[3]|c->r[3]; // 800EC7F4
  c->r[31]=c->r[4]|c->r[4]; // 800EC7F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EC7FC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EC800
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EC804
  c->r[3]=c->r[4]+0x00000030u; // 800EC808
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EC80C
  c->r[4]=c->r[30]+0x00000030u; // 800EC810
  c->lr=0x800EC818u; f_8003AB48(c); // 800EC814
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EC818
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EC81C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC820
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC824
  c->lr=c->r[0]; // 800EC828
  c->r[1]=c->r[1]+0x00000010u; // 800EC82C
  return; // 800EC830
}

// fn_800EC834
void f_800EC834(Ctx* __restrict c) {
  trace_call(0x800EC834u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC834
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC838
  c->ctr=c->r[12]; // 800EC83C
  if (true) { dispatch(c,c->ctr); return; } // 800EC840
}

// fn_800EC844
void f_800EC844(Ctx* __restrict c) {
  trace_call(0x800EC844u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC844
  c->r[0]=c->lr; // 800EC848
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC84C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC850
  c->r[29]=c->r[3]|c->r[3]; // 800EC854
  c->r[30]=c->r[4]|c->r[4]; // 800EC858
  c->r[31]=c->r[5]|c->r[5]; // 800EC85C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EC860
  cmps(c,0,(int32_t)c->r[0],7); // 800EC864
  if (!crb(c,0)) { goto L_800EC878; } // 800EC868
  c->r[4]=c->r[31]|c->r[31]; // 800EC86C
  c->r[3]=c->r[3]+0x00000030u; // 800EC870
  c->lr=0x800EC878u; f_8003A994(c); // 800EC874
L_800EC878:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EC878
  c->r[3]=c->r[29]|c->r[29]; // 800EC87C
  c->r[4]=c->r[30]|c->r[30]; // 800EC880
  c->r[5]=c->r[31]|c->r[31]; // 800EC884
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EC888
  c->ctr=c->r[12]; // 800EC88C
  if (true) { c->lr=0x800EC894u; dispatch(c,c->ctr); } // 800EC890
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC894
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC898
  c->lr=c->r[0]; // 800EC89C
  c->r[1]=c->r[1]+0x00000020u; // 800EC8A0
  return; // 800EC8A4
}

// fn_800EC8A8
void f_800EC8A8(Ctx* __restrict c) {
  trace_call(0x800EC8A8u);
  c->r[3]=0u+0x80410000u; // 800EC8A8
  c->r[3]=c->r[3]+0xFFFFE5D0u; // 800EC8AC
  return; // 800EC8B0
}

// fn_800EC8B4
void f_800EC8B4(Ctx* __restrict c) {
  trace_call(0x800EC8B4u);
  c->r[3]=0u+0x00000040u; // 800EC8B4
  return; // 800EC8B8
}

// fn_800EC8BC
void f_800EC8BC(Ctx* __restrict c) {
  trace_call(0x800EC8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC8BC
  c->r[0]=c->lr; // 800EC8C0
  c->r[3]=0u+0x00000040u; // 800EC8C4
  c->r[4]=c->r[13]+0xFFFFB957u; // 800EC8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC8CC
  c->r[5]=0u+0x00000000u; // 800EC8D0
  c->r[6]=0u+0x00001001u; // 800EC8D4
  c->lr=0x800EC8DCu; f_80244D20(c); // 800EC8D8
  cmps(c,0,(int32_t)c->r[3],0); // 800EC8DC
  if (crb(c,2)) { goto L_800EC8E8; } // 800EC8E0
  c->lr=0x800EC8E8u; f_800EC73C(c); // 800EC8E4
L_800EC8E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC8E8
  c->lr=c->r[0]; // 800EC8EC
  c->r[1]=c->r[1]+0x00000010u; // 800EC8F0
  return; // 800EC8F4
}

// fn_800EC8F8
void f_800EC8F8(Ctx* __restrict c) {
  trace_call(0x800EC8F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC8F8
  c->r[0]=c->lr; // 800EC8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC904
  c->r[31]=c->r[3]|c->r[3]; // 800EC908
  c->lr=0x800EC910u; f_800D7120(c); // 800EC90C
  c->r[5]=0u+0x80410000u; // 800EC910
  c->r[3]=0u+0x59710000u; // 800EC914
  c->r[0]=c->r[3]+0x000047B2u; // 800EC918
  c->r[4]=0u+0x00000000u; // 800EC91C
  c->r[5]=c->r[5]+0x00005490u; // 800EC920
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EC924
  c->r[3]=c->r[31]|c->r[31]; // 800EC928
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EC92C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EC930
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC934
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC938
  c->lr=c->r[0]; // 800EC93C
  c->r[1]=c->r[1]+0x00000010u; // 800EC940
  return; // 800EC944
}

// fn_800EC948
void f_800EC948(Ctx* __restrict c) {
  trace_call(0x800EC948u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC948
  c->r[0]=c->lr; // 800EC94C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC950
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC954
  c->r[30]=c->r[3]|c->r[3]; // 800EC958
  c->r[31]=c->r[4]|c->r[4]; // 800EC95C
  c->lr=0x800EC964u; f_8030D728(c); // 800EC960
  c->r[3]=c->r[31]|c->r[31]; // 800EC964
  c->r[4]=0u+0x00000000u; // 800EC968
  c->lr=0x800EC970u; f_8030BE30(c); // 800EC96C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EC970
  c->r[3]=c->r[31]|c->r[31]; // 800EC974
  c->lr=0x800EC97Cu; f_8030BD1C(c); // 800EC978
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EC97C
  c->r[3]=c->r[31]|c->r[31]; // 800EC980
  c->lr=0x800EC988u; f_8030BD1C(c); // 800EC984
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EC988
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC98C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC990
  c->lr=c->r[0]; // 800EC994
  c->r[1]=c->r[1]+0x00000010u; // 800EC998
  return; // 800EC99C
}

// fn_800EC9A0
void f_800EC9A0(Ctx* __restrict c) {
  trace_call(0x800EC9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC9A0
  c->r[0]=c->lr; // 800EC9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC9A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EC9AC
  c->r[30]=c->r[3]|c->r[3]; // 800EC9B0
  c->r[31]=c->r[4]|c->r[4]; // 800EC9B4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EC9B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EC9BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EC9C0
  c->r[3]=c->r[4]+0x00000030u; // 800EC9C4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EC9C8
  c->r[4]=c->r[30]+0x00000030u; // 800EC9CC
  c->lr=0x800EC9D4u; f_8003AB48(c); // 800EC9D0
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EC9D4
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EC9D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EC9DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC9E0
  c->lr=c->r[0]; // 800EC9E4
  c->r[1]=c->r[1]+0x00000010u; // 800EC9E8
  return; // 800EC9EC
}

// fn_800EC9F0
void f_800EC9F0(Ctx* __restrict c) {
  trace_call(0x800EC9F0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EC9F0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EC9F4
  c->ctr=c->r[12]; // 800EC9F8
  if (true) { dispatch(c,c->ctr); return; } // 800EC9FC
}

// fn_800ECA00
void f_800ECA00(Ctx* __restrict c) {
  trace_call(0x800ECA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECA00
  c->r[0]=c->lr; // 800ECA04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECA08
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECA0C
  c->r[29]=c->r[3]|c->r[3]; // 800ECA10
  c->r[30]=c->r[4]|c->r[4]; // 800ECA14
  c->r[31]=c->r[5]|c->r[5]; // 800ECA18
  c->r[0]=R32(c->r[3]+0x00000034u); // 800ECA1C
  cmps(c,0,(int32_t)c->r[0],7); // 800ECA20
  if (!crb(c,0)) { goto L_800ECA34; } // 800ECA24
  c->r[4]=c->r[31]|c->r[31]; // 800ECA28
  c->r[3]=c->r[3]+0x00000030u; // 800ECA2C
  c->lr=0x800ECA34u; f_8003A994(c); // 800ECA30
L_800ECA34:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800ECA34
  c->r[3]=c->r[29]|c->r[29]; // 800ECA38
  c->r[4]=c->r[30]|c->r[30]; // 800ECA3C
  c->r[5]=c->r[31]|c->r[31]; // 800ECA40
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ECA44
  c->ctr=c->r[12]; // 800ECA48
  if (true) { c->lr=0x800ECA50u; dispatch(c,c->ctr); } // 800ECA4C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECA50
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECA54
  c->lr=c->r[0]; // 800ECA58
  c->r[1]=c->r[1]+0x00000020u; // 800ECA5C
  return; // 800ECA60
}

// fn_800ECA64
void f_800ECA64(Ctx* __restrict c) {
  trace_call(0x800ECA64u);
  c->r[3]=0u+0x80410000u; // 800ECA64
  c->r[3]=c->r[3]+0xFFFFE5DAu; // 800ECA68
  return; // 800ECA6C
}

// fn_800ECA70
void f_800ECA70(Ctx* __restrict c) {
  trace_call(0x800ECA70u);
  c->r[3]=0u+0x00000040u; // 800ECA70
  return; // 800ECA74
}

// fn_800ECA78
void f_800ECA78(Ctx* __restrict c) {
  trace_call(0x800ECA78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECA78
  c->r[0]=c->lr; // 800ECA7C
  c->r[3]=0u+0x00000040u; // 800ECA80
  c->r[4]=c->r[13]+0xFFFFB95Cu; // 800ECA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECA88
  c->r[5]=0u+0x00000000u; // 800ECA8C
  c->r[6]=0u+0x00001001u; // 800ECA90
  c->lr=0x800ECA98u; f_80244D20(c); // 800ECA94
  cmps(c,0,(int32_t)c->r[3],0); // 800ECA98
  if (crb(c,2)) { goto L_800ECAA4; } // 800ECA9C
  c->lr=0x800ECAA4u; f_800EC8F8(c); // 800ECAA0
L_800ECAA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECAA4
  c->lr=c->r[0]; // 800ECAA8
  c->r[1]=c->r[1]+0x00000010u; // 800ECAAC
  return; // 800ECAB0
}

// fn_800ECAB4
void f_800ECAB4(Ctx* __restrict c) {
  trace_call(0x800ECAB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECAB4
  c->r[0]=c->lr; // 800ECAB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECAC0
  c->r[31]=c->r[3]|c->r[3]; // 800ECAC4
  c->lr=0x800ECACCu; f_800D7120(c); // 800ECAC8
  c->r[5]=0u+0x80410000u; // 800ECACC
  c->r[3]=0u+0x59720000u; // 800ECAD0
  c->r[0]=c->r[3]+0x00004EB8u; // 800ECAD4
  c->r[4]=0u+0x00000000u; // 800ECAD8
  c->r[5]=c->r[5]+0x0000545Cu; // 800ECADC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800ECAE0
  c->r[3]=c->r[31]|c->r[31]; // 800ECAE4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800ECAE8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ECAEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECAF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECAF4
  c->lr=c->r[0]; // 800ECAF8
  c->r[1]=c->r[1]+0x00000010u; // 800ECAFC
  return; // 800ECB00
}

// fn_800ECB04
void f_800ECB04(Ctx* __restrict c) {
  trace_call(0x800ECB04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECB04
  c->r[0]=c->lr; // 800ECB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECB0C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECB10
  c->r[30]=c->r[3]|c->r[3]; // 800ECB14
  c->r[31]=c->r[4]|c->r[4]; // 800ECB18
  c->lr=0x800ECB20u; f_8030D728(c); // 800ECB1C
  c->r[3]=c->r[31]|c->r[31]; // 800ECB20
  c->r[4]=0u+0x00000000u; // 800ECB24
  c->lr=0x800ECB2Cu; f_8030BE30(c); // 800ECB28
  W32(c->r[30]+0x00000030u,c->r[3]); // 800ECB2C
  c->r[3]=c->r[31]|c->r[31]; // 800ECB30
  c->lr=0x800ECB38u; f_8030BD1C(c); // 800ECB34
  W32(c->r[30]+0x00000034u,c->r[3]); // 800ECB38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECB3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECB40
  c->lr=c->r[0]; // 800ECB44
  c->r[1]=c->r[1]+0x00000010u; // 800ECB48
  return; // 800ECB4C
}

// fn_800ECB50
void f_800ECB50(Ctx* __restrict c) {
  trace_call(0x800ECB50u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800ECB50
  c->r[5]=c->r[3]|c->r[3]; // 800ECB54
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ECB58
  c->r[0]=R32(c->r[3]+0x00000004u); // 800ECB5C
  c->r[3]=c->r[4]+0x00000030u; // 800ECB60
  W32(c->r[4]+0x00000004u,c->r[0]); // 800ECB64
  c->r[4]=c->r[5]+0x00000030u; // 800ECB68
  f_8003AB48(c); return; // 800ECB6C
}

// fn_800ECB70
void f_800ECB70(Ctx* __restrict c) {
  trace_call(0x800ECB70u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ECB70
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ECB74
  c->ctr=c->r[12]; // 800ECB78
  if (true) { dispatch(c,c->ctr); return; } // 800ECB7C
}

// fn_800ECB80
void f_800ECB80(Ctx* __restrict c) {
  trace_call(0x800ECB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECB80
  c->r[0]=c->lr; // 800ECB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECB88
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECB8C
  c->r[29]=c->r[3]|c->r[3]; // 800ECB90
  c->r[30]=c->r[4]|c->r[4]; // 800ECB94
  c->r[31]=c->r[5]|c->r[5]; // 800ECB98
  c->r[0]=R32(c->r[3]+0x00000034u); // 800ECB9C
  cmps(c,0,(int32_t)c->r[0],7); // 800ECBA0
  if (!crb(c,0)) { goto L_800ECBB4; } // 800ECBA4
  c->r[4]=c->r[31]|c->r[31]; // 800ECBA8
  c->r[3]=c->r[3]+0x00000030u; // 800ECBAC
  c->lr=0x800ECBB4u; f_8003A994(c); // 800ECBB0
L_800ECBB4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800ECBB4
  c->r[3]=c->r[29]|c->r[29]; // 800ECBB8
  c->r[4]=c->r[30]|c->r[30]; // 800ECBBC
  c->r[5]=c->r[31]|c->r[31]; // 800ECBC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ECBC4
  c->ctr=c->r[12]; // 800ECBC8
  if (true) { c->lr=0x800ECBD0u; dispatch(c,c->ctr); } // 800ECBCC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECBD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECBD4
  c->lr=c->r[0]; // 800ECBD8
  c->r[1]=c->r[1]+0x00000020u; // 800ECBDC
  return; // 800ECBE0
}

// fn_800ECBE4
void f_800ECBE4(Ctx* __restrict c) {
  trace_call(0x800ECBE4u);
  c->r[3]=0u+0x80410000u; // 800ECBE4
  c->r[3]=c->r[3]+0xFFFFE5EBu; // 800ECBE8
  return; // 800ECBEC
}

// fn_800ECBF0
void f_800ECBF0(Ctx* __restrict c) {
  trace_call(0x800ECBF0u);
  c->r[3]=0u+0x0000003Cu; // 800ECBF0
  return; // 800ECBF4
}

// fn_800ECBF8
void f_800ECBF8(Ctx* __restrict c) {
  trace_call(0x800ECBF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECBF8
  c->r[0]=c->lr; // 800ECBFC
  c->r[3]=0u+0x0000003Cu; // 800ECC00
  c->r[4]=c->r[13]+0xFFFFB961u; // 800ECC04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECC08
  c->r[5]=0u+0x00000000u; // 800ECC0C
  c->r[6]=0u+0x00001001u; // 800ECC10
  c->lr=0x800ECC18u; f_80244D20(c); // 800ECC14
  cmps(c,0,(int32_t)c->r[3],0); // 800ECC18
  if (crb(c,2)) { goto L_800ECC24; } // 800ECC1C
  c->lr=0x800ECC24u; f_800ECAB4(c); // 800ECC20
L_800ECC24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECC24
  c->lr=c->r[0]; // 800ECC28
  c->r[1]=c->r[1]+0x00000010u; // 800ECC2C
  return; // 800ECC30
}

// fn_800ECC34
void f_800ECC34(Ctx* __restrict c) {
  trace_call(0x800ECC34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECC34
  c->r[0]=c->lr; // 800ECC38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECC3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECC40
  c->r[31]=c->r[3]|c->r[3]; // 800ECC44
  c->lr=0x800ECC4Cu; f_800D7120(c); // 800ECC48
  c->r[3]=0u+0x80410000u; // 800ECC4C
  c->r[0]=0u+0x00000000u; // 800ECC50
  c->r[3]=c->r[3]+0x00005428u; // 800ECC54
  W32(c->r[31]+0x00000008u,c->r[3]); // 800ECC58
  c->r[3]=c->r[31]|c->r[31]; // 800ECC5C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ECC60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECC64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECC68
  c->lr=c->r[0]; // 800ECC6C
  c->r[1]=c->r[1]+0x00000010u; // 800ECC70
  return; // 800ECC74
}

// fn_800ECC78
void f_800ECC78(Ctx* __restrict c) {
  trace_call(0x800ECC78u);
  f_8030D728(c); return; // 800ECC78
}

// fn_800ECC7C
void f_800ECC7C(Ctx* __restrict c) {
  trace_call(0x800ECC7Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800ECC7C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800ECC80
  W32(c->r[4]+0x00000000u,c->r[5]); // 800ECC84
  W32(c->r[4]+0x00000004u,c->r[0]); // 800ECC88
  return; // 800ECC8C
}

// fn_800ECC90
void f_800ECC90(Ctx* __restrict c) {
  trace_call(0x800ECC90u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ECC90
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ECC94
  c->ctr=c->r[12]; // 800ECC98
  if (true) { dispatch(c,c->ctr); return; } // 800ECC9C
}

// fn_800ECCA0
void f_800ECCA0(Ctx* __restrict c) {
  trace_call(0x800ECCA0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ECCA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ECCA4
  c->ctr=c->r[12]; // 800ECCA8
  if (true) { dispatch(c,c->ctr); return; } // 800ECCAC
}

// fn_800ECCB0
void f_800ECCB0(Ctx* __restrict c) {
  trace_call(0x800ECCB0u);
  c->r[3]=0u+0x80410000u; // 800ECCB0
  c->r[3]=c->r[3]+0xFFFFE5FFu; // 800ECCB4
  return; // 800ECCB8
}

// fn_800ECCBC
void f_800ECCBC(Ctx* __restrict c) {
  trace_call(0x800ECCBCu);
  c->r[3]=0u+0x00000030u; // 800ECCBC
  return; // 800ECCC0
}

// fn_800ECCC4
void f_800ECCC4(Ctx* __restrict c) {
  trace_call(0x800ECCC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECCC4
  c->r[0]=c->lr; // 800ECCC8
  c->r[3]=0u+0x00000030u; // 800ECCCC
  c->r[4]=c->r[13]+0xFFFFB966u; // 800ECCD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECCD4
  c->r[5]=0u+0x00000000u; // 800ECCD8
  c->r[6]=0u+0x00001001u; // 800ECCDC
  c->lr=0x800ECCE4u; f_80244D20(c); // 800ECCE0
  cmps(c,0,(int32_t)c->r[3],0); // 800ECCE4
  if (crb(c,2)) { goto L_800ECCF0; } // 800ECCE8
  c->lr=0x800ECCF0u; f_800ECC34(c); // 800ECCEC
L_800ECCF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECCF0
  c->lr=c->r[0]; // 800ECCF4
  c->r[1]=c->r[1]+0x00000010u; // 800ECCF8
  return; // 800ECCFC
}

// fn_800ECD00
void f_800ECD00(Ctx* __restrict c) {
  trace_call(0x800ECD00u);
  return; // 800ECD00
}

// fn_800ECD04
void f_800ECD04(Ctx* __restrict c) {
  trace_call(0x800ECD04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECD04
  c->r[0]=c->lr; // 800ECD08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECD0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECD10
  c->r[31]=c->r[3]|c->r[3]; // 800ECD14
  c->lr=0x800ECD1Cu; f_800D7120(c); // 800ECD18
  c->r[4]=0u+0x80410000u; // 800ECD1C
  c->r[3]=0u+0xC0EF0000u; // 800ECD20
  c->r[0]=c->r[3]+0x000064DCu; // 800ECD24
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ECD28
  c->r[4]=c->r[4]+0x000053F4u; // 800ECD2C
  c->r[3]=c->r[31]|c->r[31]; // 800ECD30
  W32(c->r[31]+0x00000008u,c->r[4]); // 800ECD34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECD38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECD3C
  c->lr=c->r[0]; // 800ECD40
  c->r[1]=c->r[1]+0x00000010u; // 800ECD44
  return; // 800ECD48
}

// fn_800ECD4C
void f_800ECD4C(Ctx* __restrict c) {
  trace_call(0x800ECD4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECD4C
  c->r[0]=c->lr; // 800ECD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECD54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECD58
  c->r[30]=c->r[3]|c->r[3]; // 800ECD5C
  c->r[31]=c->r[4]|c->r[4]; // 800ECD60
  c->lr=0x800ECD68u; f_8030D728(c); // 800ECD64
  c->r[3]=c->r[31]|c->r[31]; // 800ECD68
  c->lr=0x800ECD70u; f_8030BD1C(c); // 800ECD6C
  W16(c->r[30]+0x00000030u,c->r[3]); // 800ECD70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECD74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECD78
  c->lr=c->r[0]; // 800ECD7C
  c->r[1]=c->r[1]+0x00000010u; // 800ECD80
  return; // 800ECD84
}

// fn_800ECD88
void f_800ECD88(Ctx* __restrict c) {
  trace_call(0x800ECD88u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800ECD88
  c->r[5]=R32(c->r[3]+0x00000004u); // 800ECD8C
  c->r[0]=R16(c->r[3]+0x00000030u); // 800ECD90
  W32(c->r[4]+0x00000000u,c->r[6]); // 800ECD94
  W32(c->r[4]+0x00000004u,c->r[5]); // 800ECD98
  W16(c->r[4]+0x00000030u,c->r[0]); // 800ECD9C
  return; // 800ECDA0
}

// fn_800ECDA4
void f_800ECDA4(Ctx* __restrict c) {
  trace_call(0x800ECDA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ECDA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ECDA8
  c->ctr=c->r[12]; // 800ECDAC
  if (true) { dispatch(c,c->ctr); return; } // 800ECDB0
}

// fn_800ECDB4
void f_800ECDB4(Ctx* __restrict c) {
  trace_call(0x800ECDB4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ECDB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ECDB8
  c->ctr=c->r[12]; // 800ECDBC
  if (true) { dispatch(c,c->ctr); return; } // 800ECDC0
}

// fn_800ECDC4
void f_800ECDC4(Ctx* __restrict c) {
  trace_call(0x800ECDC4u);
  c->r[3]=0u+0x80410000u; // 800ECDC4
  c->r[3]=c->r[3]+0xFFFFE60Eu; // 800ECDC8
  return; // 800ECDCC
}

// fn_800ECDD0
void f_800ECDD0(Ctx* __restrict c) {
  trace_call(0x800ECDD0u);
  c->r[3]=0u+0x00000034u; // 800ECDD0
  return; // 800ECDD4
}

// fn_800ECDD8
void f_800ECDD8(Ctx* __restrict c) {
  trace_call(0x800ECDD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECDD8
  c->r[0]=c->lr; // 800ECDDC
  c->r[3]=0u+0x00000034u; // 800ECDE0
  c->r[4]=c->r[13]+0xFFFFB96Bu; // 800ECDE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECDE8
  c->r[5]=0u+0x00000000u; // 800ECDEC
  c->r[6]=0u+0x00001001u; // 800ECDF0
  c->lr=0x800ECDF8u; f_80244D20(c); // 800ECDF4
  cmps(c,0,(int32_t)c->r[3],0); // 800ECDF8
  if (crb(c,2)) { goto L_800ECE04; } // 800ECDFC
  c->lr=0x800ECE04u; f_800ECD04(c); // 800ECE00
L_800ECE04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECE04
  c->lr=c->r[0]; // 800ECE08
  c->r[1]=c->r[1]+0x00000010u; // 800ECE0C
  return; // 800ECE10
}

// fn_800ECE14
void f_800ECE14(Ctx* __restrict c) {
  trace_call(0x800ECE14u);
  return; // 800ECE14
}

// fn_800ECE18
void f_800ECE18(Ctx* __restrict c) {
  trace_call(0x800ECE18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECE18
  c->r[0]=c->lr; // 800ECE1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECE20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECE24
  c->r[31]=c->r[3]|c->r[3]; // 800ECE28
  c->lr=0x800ECE30u; f_800D7120(c); // 800ECE2C
  c->r[5]=0u+0x80410000u; // 800ECE30
  c->r[3]=0u+0x441F0000u; // 800ECE34
  c->r[4]=0u+0x00000000u; // 800ECE38
  W32(c->r[31]+0x00000038u,c->r[4]); // 800ECE3C
  c->r[0]=c->r[3]+0x000012EEu; // 800ECE40
  c->r[5]=c->r[5]+0x000053C0u; // 800ECE44
  W32(c->r[31]+0x00000008u,c->r[5]); // 800ECE48
  c->r[3]=c->r[31]|c->r[31]; // 800ECE4C
  W32(c->r[31]+0x00000044u,c->r[4]); // 800ECE50
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ECE54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECE58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECE5C
  c->lr=c->r[0]; // 800ECE60
  c->r[1]=c->r[1]+0x00000010u; // 800ECE64
  return; // 800ECE68
}

// fn_800ECE6C
void f_800ECE6C(Ctx* __restrict c) {
  trace_call(0x800ECE6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECE6C
  c->r[0]=c->lr; // 800ECE70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECE74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECE78
  c->r[30]=c->r[3]|c->r[3]; // 800ECE7C
  c->r[31]=c->r[4]|c->r[4]; // 800ECE80
  c->lr=0x800ECE88u; f_8030D728(c); // 800ECE84
  c->r[0]=0u+0x00000000u; // 800ECE88
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800ECE8C
  c->r[3]=c->r[31]|c->r[31]; // 800ECE90
  c->r[4]=0u+0x00000000u; // 800ECE94
  c->lr=0x800ECE9Cu; f_8030BE30(c); // 800ECE98
  W32(c->r[30]+0x00000030u,c->r[3]); // 800ECE9C
  c->r[3]=c->r[31]|c->r[31]; // 800ECEA0
  c->lr=0x800ECEA8u; f_8030BD1C(c); // 800ECEA4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800ECEA8
  c->r[3]=c->r[31]|c->r[31]; // 800ECEAC
  c->r[4]=0u+0x00000000u; // 800ECEB0
  c->lr=0x800ECEB8u; f_8030BE30(c); // 800ECEB4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800ECEB8
  c->r[3]=c->r[31]|c->r[31]; // 800ECEBC
  c->lr=0x800ECEC4u; f_8030BD1C(c); // 800ECEC0
  W32(c->r[30]+0x00000040u,c->r[3]); // 800ECEC4
  c->r[3]=c->r[31]|c->r[31]; // 800ECEC8
  c->r[4]=0u+0x00000000u; // 800ECECC
  c->lr=0x800ECED4u; f_8030BE30(c); // 800ECED0
  W32(c->r[30]+0x00000048u,c->r[3]); // 800ECED4
  c->r[3]=c->r[31]|c->r[31]; // 800ECED8
  c->lr=0x800ECEE0u; f_8030BD1C(c); // 800ECEDC
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800ECEE0
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800ECEE4
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800ECEE8
  c->r[3]=c->r[31]|c->r[31]; // 800ECEEC
  c->lr=0x800ECEF4u; f_8030BD1C(c); // 800ECEF0
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800ECEF4
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 800ECEF8
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800ECEFC
  c->r[3]=c->r[31]|c->r[31]; // 800ECF00
  c->lr=0x800ECF08u; f_8030BD1C(c); // 800ECF04
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800ECF08
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 800ECF0C
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800ECF10
  c->r[3]=c->r[31]|c->r[31]; // 800ECF14
  c->lr=0x800ECF1Cu; f_8030BD1C(c); // 800ECF18
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800ECF1C
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 800ECF20
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800ECF24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECF28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECF2C
  c->lr=c->r[0]; // 800ECF30
  c->r[1]=c->r[1]+0x00000010u; // 800ECF34
  return; // 800ECF38
}

// fn_800ECF3C
void f_800ECF3C(Ctx* __restrict c) {
  trace_call(0x800ECF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECF3C
  c->r[0]=c->lr; // 800ECF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECF44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECF48
  c->r[30]=c->r[3]|c->r[3]; // 800ECF4C
  c->r[31]=c->r[4]|c->r[4]; // 800ECF50
  c->r[0]=R32(c->r[3]+0x00000000u); // 800ECF54
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ECF58
  c->r[0]=R32(c->r[3]+0x00000004u); // 800ECF5C
  c->r[3]=c->r[4]+0x00000030u; // 800ECF60
  W32(c->r[4]+0x00000004u,c->r[0]); // 800ECF64
  c->r[4]=c->r[30]+0x00000030u; // 800ECF68
  c->lr=0x800ECF70u; f_8003AB48(c); // 800ECF6C
  c->r[3]=c->r[31]+0x0000003Cu; // 800ECF70
  c->r[4]=c->r[30]+0x0000003Cu; // 800ECF74
  c->lr=0x800ECF7Cu; f_8003AB48(c); // 800ECF78
  c->r[0]=R32(c->r[30]+0x00000048u); // 800ECF7C
  W32(c->r[31]+0x00000048u,c->r[0]); // 800ECF80
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800ECF84
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800ECF88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ECF8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECF90
  c->lr=c->r[0]; // 800ECF94
  c->r[1]=c->r[1]+0x00000010u; // 800ECF98
  return; // 800ECF9C
}

// fn_800ECFA0
void f_800ECFA0(Ctx* __restrict c) {
  trace_call(0x800ECFA0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ECFA0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ECFA4
  c->ctr=c->r[12]; // 800ECFA8
  if (true) { dispatch(c,c->ctr); return; } // 800ECFAC
}

// fn_800ECFB0
void f_800ECFB0(Ctx* __restrict c) {
  trace_call(0x800ECFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECFB0
  c->r[0]=c->lr; // 800ECFB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECFB8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ECFBC
  c->r[29]=c->r[3]|c->r[3]; // 800ECFC0
  c->r[30]=c->r[4]|c->r[4]; // 800ECFC4
  c->r[31]=c->r[5]|c->r[5]; // 800ECFC8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800ECFCC
  cmps(c,0,(int32_t)c->r[0],7); // 800ECFD0
  if (!crb(c,0)) { goto L_800ECFE4; } // 800ECFD4
  c->r[4]=c->r[31]|c->r[31]; // 800ECFD8
  c->r[3]=c->r[3]+0x00000030u; // 800ECFDC
  c->lr=0x800ECFE4u; f_8003A994(c); // 800ECFE0
L_800ECFE4:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800ECFE4
  cmps(c,0,(int32_t)c->r[0],7); // 800ECFE8
  if (!crb(c,0)) { goto L_800ECFFC; } // 800ECFEC
  c->r[4]=c->r[31]|c->r[31]; // 800ECFF0
  c->r[3]=c->r[29]+0x0000003Cu; // 800ECFF4
  c->lr=0x800ECFFCu; f_8003A994(c); // 800ECFF8
L_800ECFFC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800ECFFC
  c->r[3]=c->r[29]|c->r[29]; // 800ED000
  c->r[4]=c->r[30]|c->r[30]; // 800ED004
  c->r[5]=c->r[31]|c->r[31]; // 800ED008
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ED00C
  c->ctr=c->r[12]; // 800ED010
  if (true) { c->lr=0x800ED018u; dispatch(c,c->ctr); } // 800ED014
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED018
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED01C
  c->lr=c->r[0]; // 800ED020
  c->r[1]=c->r[1]+0x00000020u; // 800ED024
  return; // 800ED028
}

// fn_800ED02C
void f_800ED02C(Ctx* __restrict c) {
  trace_call(0x800ED02Cu);
  c->r[3]=0u+0x80410000u; // 800ED02C
  c->r[3]=c->r[3]+0xFFFFE620u; // 800ED030
  return; // 800ED034
}

// fn_800ED038
void f_800ED038(Ctx* __restrict c) {
  trace_call(0x800ED038u);
  c->r[3]=0u+0x00000050u; // 800ED038
  return; // 800ED03C
}

// fn_800ED040
void f_800ED040(Ctx* __restrict c) {
  trace_call(0x800ED040u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED040
  c->r[0]=c->lr; // 800ED044
  c->r[3]=0u+0x00000050u; // 800ED048
  c->r[4]=c->r[13]+0xFFFFB970u; // 800ED04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED050
  c->r[5]=0u+0x00000000u; // 800ED054
  c->r[6]=0u+0x00001001u; // 800ED058
  c->lr=0x800ED060u; f_80244D20(c); // 800ED05C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED060
  if (crb(c,2)) { goto L_800ED06C; } // 800ED064
  c->lr=0x800ED06Cu; f_800ECE18(c); // 800ED068
L_800ED06C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED06C
  c->lr=c->r[0]; // 800ED070
  c->r[1]=c->r[1]+0x00000010u; // 800ED074
  return; // 800ED078
}

// fn_800ED07C
void f_800ED07C(Ctx* __restrict c) {
  trace_call(0x800ED07Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED07C
  c->r[0]=c->lr; // 800ED080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED088
  c->r[31]=c->r[3]|c->r[3]; // 800ED08C
  c->lr=0x800ED094u; f_800D7120(c); // 800ED090
  c->r[5]=0u+0x80410000u; // 800ED094
  c->r[3]=0u+0x59720000u; // 800ED098
  c->r[0]=c->r[3]+0x00004EB8u; // 800ED09C
  c->r[4]=0u+0x00000000u; // 800ED0A0
  c->r[5]=c->r[5]+0x0000538Cu; // 800ED0A4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800ED0A8
  c->r[3]=c->r[31]|c->r[31]; // 800ED0AC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800ED0B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ED0B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED0B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED0BC
  c->lr=c->r[0]; // 800ED0C0
  c->r[1]=c->r[1]+0x00000010u; // 800ED0C4
  return; // 800ED0C8
}

// fn_800ED0CC
void f_800ED0CC(Ctx* __restrict c) {
  trace_call(0x800ED0CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED0CC
  c->r[0]=c->lr; // 800ED0D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED0D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED0D8
  c->r[30]=c->r[3]|c->r[3]; // 800ED0DC
  c->r[31]=c->r[4]|c->r[4]; // 800ED0E0
  c->lr=0x800ED0E8u; f_8030D728(c); // 800ED0E4
  c->r[3]=c->r[31]|c->r[31]; // 800ED0E8
  c->r[4]=0u+0x00000000u; // 800ED0EC
  c->lr=0x800ED0F4u; f_8030BE30(c); // 800ED0F0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800ED0F4
  c->r[3]=c->r[31]|c->r[31]; // 800ED0F8
  c->lr=0x800ED100u; f_8030BD1C(c); // 800ED0FC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800ED100
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED104
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED108
  c->lr=c->r[0]; // 800ED10C
  c->r[1]=c->r[1]+0x00000010u; // 800ED110
  return; // 800ED114
}

// fn_800ED118
void f_800ED118(Ctx* __restrict c) {
  trace_call(0x800ED118u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800ED118
  c->r[5]=c->r[3]|c->r[3]; // 800ED11C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ED120
  c->r[0]=R32(c->r[3]+0x00000004u); // 800ED124
  c->r[3]=c->r[4]+0x00000030u; // 800ED128
  W32(c->r[4]+0x00000004u,c->r[0]); // 800ED12C
  c->r[4]=c->r[5]+0x00000030u; // 800ED130
  f_8003AB48(c); return; // 800ED134
}

// fn_800ED138
void f_800ED138(Ctx* __restrict c) {
  trace_call(0x800ED138u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED138
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ED13C
  c->ctr=c->r[12]; // 800ED140
  if (true) { dispatch(c,c->ctr); return; } // 800ED144
}

// fn_800ED148
void f_800ED148(Ctx* __restrict c) {
  trace_call(0x800ED148u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED148
  c->r[0]=c->lr; // 800ED14C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED150
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED154
  c->r[29]=c->r[3]|c->r[3]; // 800ED158
  c->r[30]=c->r[4]|c->r[4]; // 800ED15C
  c->r[31]=c->r[5]|c->r[5]; // 800ED160
  c->r[0]=R32(c->r[3]+0x00000034u); // 800ED164
  cmps(c,0,(int32_t)c->r[0],7); // 800ED168
  if (!crb(c,0)) { goto L_800ED17C; } // 800ED16C
  c->r[4]=c->r[31]|c->r[31]; // 800ED170
  c->r[3]=c->r[3]+0x00000030u; // 800ED174
  c->lr=0x800ED17Cu; f_8003A994(c); // 800ED178
L_800ED17C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800ED17C
  c->r[3]=c->r[29]|c->r[29]; // 800ED180
  c->r[4]=c->r[30]|c->r[30]; // 800ED184
  c->r[5]=c->r[31]|c->r[31]; // 800ED188
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ED18C
  c->ctr=c->r[12]; // 800ED190
  if (true) { c->lr=0x800ED198u; dispatch(c,c->ctr); } // 800ED194
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED198
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED19C
  c->lr=c->r[0]; // 800ED1A0
  c->r[1]=c->r[1]+0x00000020u; // 800ED1A4
  return; // 800ED1A8
}

// fn_800ED1AC
void f_800ED1AC(Ctx* __restrict c) {
  trace_call(0x800ED1ACu);
  c->r[3]=0u+0x80410000u; // 800ED1AC
  c->r[3]=c->r[3]+0xFFFFE62Du; // 800ED1B0
  return; // 800ED1B4
}

// fn_800ED1B8
void f_800ED1B8(Ctx* __restrict c) {
  trace_call(0x800ED1B8u);
  c->r[3]=0u+0x0000003Cu; // 800ED1B8
  return; // 800ED1BC
}

// fn_800ED1C0
void f_800ED1C0(Ctx* __restrict c) {
  trace_call(0x800ED1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED1C0
  c->r[0]=c->lr; // 800ED1C4
  c->r[3]=0u+0x0000003Cu; // 800ED1C8
  c->r[4]=c->r[13]+0xFFFFB975u; // 800ED1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED1D0
  c->r[5]=0u+0x00000000u; // 800ED1D4
  c->r[6]=0u+0x00001001u; // 800ED1D8
  c->lr=0x800ED1E0u; f_80244D20(c); // 800ED1DC
  cmps(c,0,(int32_t)c->r[3],0); // 800ED1E0
  if (crb(c,2)) { goto L_800ED1EC; } // 800ED1E4
  c->lr=0x800ED1ECu; f_800ED07C(c); // 800ED1E8
L_800ED1EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED1EC
  c->lr=c->r[0]; // 800ED1F0
  c->r[1]=c->r[1]+0x00000010u; // 800ED1F4
  return; // 800ED1F8
}

// fn_800ED1FC
void f_800ED1FC(Ctx* __restrict c) {
  trace_call(0x800ED1FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED1FC
  c->r[0]=c->lr; // 800ED200
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED208
  c->r[31]=c->r[3]|c->r[3]; // 800ED20C
  c->lr=0x800ED214u; f_800D7120(c); // 800ED210
  c->r[4]=0u+0x80410000u; // 800ED214
  c->r[3]=0u+0x73E10000u; // 800ED218
  c->r[0]=c->r[3]+0xFFFF80F6u; // 800ED21C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ED220
  c->r[4]=c->r[4]+0x00005358u; // 800ED224
  c->r[3]=c->r[31]|c->r[31]; // 800ED228
  W32(c->r[31]+0x00000008u,c->r[4]); // 800ED22C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED230
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED234
  c->lr=c->r[0]; // 800ED238
  c->r[1]=c->r[1]+0x00000010u; // 800ED23C
  return; // 800ED240
}

// fn_800ED244
void f_800ED244(Ctx* __restrict c) {
  trace_call(0x800ED244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED244
  c->r[0]=c->lr; // 800ED248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED24C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED250
  c->r[30]=c->r[3]|c->r[3]; // 800ED254
  c->r[31]=c->r[4]|c->r[4]; // 800ED258
  c->lr=0x800ED260u; f_8030D728(c); // 800ED25C
  c->r[3]=c->r[31]|c->r[31]; // 800ED260
  c->lr=0x800ED268u; f_8030C0A0(c); // 800ED264
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800ED268
  c->r[3]=c->r[31]|c->r[31]; // 800ED26C
  c->lr=0x800ED274u; f_8030C0A0(c); // 800ED270
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800ED274
  c->r[3]=c->r[31]|c->r[31]; // 800ED278
  c->lr=0x800ED280u; f_8030C0A0(c); // 800ED27C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800ED280
  c->r[3]=c->r[31]|c->r[31]; // 800ED284
  c->lr=0x800ED28Cu; f_8030BD1C(c); // 800ED288
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800ED28C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED290
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED294
  c->lr=c->r[0]; // 800ED298
  c->r[1]=c->r[1]+0x00000010u; // 800ED29C
  return; // 800ED2A0
}

// fn_800ED2A4
void f_800ED2A4(Ctx* __restrict c) {
  trace_call(0x800ED2A4u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800ED2A4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800ED2A8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED2AC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED2B0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED2B4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800ED2B8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800ED2BC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800ED2C0
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[2]);} // 800ED2C4
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[1]);} // 800ED2C8
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 800ED2CC
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 800ED2D0
  return; // 800ED2D4
}

// fn_800ED2D8
void f_800ED2D8(Ctx* __restrict c) {
  trace_call(0x800ED2D8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED2D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ED2DC
  c->ctr=c->r[12]; // 800ED2E0
  if (true) { dispatch(c,c->ctr); return; } // 800ED2E4
}

// fn_800ED2E8
void f_800ED2E8(Ctx* __restrict c) {
  trace_call(0x800ED2E8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED2E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ED2EC
  c->ctr=c->r[12]; // 800ED2F0
  if (true) { dispatch(c,c->ctr); return; } // 800ED2F4
}

// fn_800ED2F8
void f_800ED2F8(Ctx* __restrict c) {
  trace_call(0x800ED2F8u);
  c->r[3]=0u+0x80410000u; // 800ED2F8
  c->r[3]=c->r[3]+0xFFFFE63Au; // 800ED2FC
  return; // 800ED300
}

// fn_800ED304
void f_800ED304(Ctx* __restrict c) {
  trace_call(0x800ED304u);
  c->r[3]=0u+0x00000040u; // 800ED304
  return; // 800ED308
}

// fn_800ED30C
void f_800ED30C(Ctx* __restrict c) {
  trace_call(0x800ED30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED30C
  c->r[0]=c->lr; // 800ED310
  c->r[3]=0u+0x00000040u; // 800ED314
  c->r[4]=c->r[13]+0xFFFFB97Au; // 800ED318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED31C
  c->r[5]=0u+0x00000000u; // 800ED320
  c->r[6]=0u+0x00001001u; // 800ED324
  c->lr=0x800ED32Cu; f_80244D20(c); // 800ED328
  cmps(c,0,(int32_t)c->r[3],0); // 800ED32C
  if (crb(c,2)) { goto L_800ED338; } // 800ED330
  c->lr=0x800ED338u; f_800ED1FC(c); // 800ED334
L_800ED338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED338
  c->lr=c->r[0]; // 800ED33C
  c->r[1]=c->r[1]+0x00000010u; // 800ED340
  return; // 800ED344
}

// fn_800ED348
void f_800ED348(Ctx* __restrict c) {
  trace_call(0x800ED348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED348
  c->r[0]=c->lr; // 800ED34C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED354
  c->r[31]=c->r[3]|c->r[3]; // 800ED358
  c->lr=0x800ED360u; f_800D7120(c); // 800ED35C
  c->r[4]=0u+0x80410000u; // 800ED360
  c->r[3]=0u+0xD65C0000u; // 800ED364
  c->r[0]=c->r[3]+0x00004646u; // 800ED368
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ED36C
  c->r[4]=c->r[4]+0x00005324u; // 800ED370
  c->r[3]=c->r[31]|c->r[31]; // 800ED374
  W32(c->r[31]+0x00000008u,c->r[4]); // 800ED378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED37C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED380
  c->lr=c->r[0]; // 800ED384
  c->r[1]=c->r[1]+0x00000010u; // 800ED388
  return; // 800ED38C
}

// fn_800ED390
void f_800ED390(Ctx* __restrict c) {
  trace_call(0x800ED390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED390
  c->r[0]=c->lr; // 800ED394
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED398
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED39C
  c->r[30]=c->r[3]|c->r[3]; // 800ED3A0
  c->r[31]=c->r[4]|c->r[4]; // 800ED3A4
  c->lr=0x800ED3ACu; f_8030D728(c); // 800ED3A8
  c->r[3]=c->r[31]|c->r[31]; // 800ED3AC
  c->lr=0x800ED3B4u; f_8030BD1C(c); // 800ED3B0
  W8(c->r[30]+0x00000030u,c->r[3]); // 800ED3B4
  c->r[3]=c->r[31]|c->r[31]; // 800ED3B8
  c->lr=0x800ED3C0u; f_8030BD1C(c); // 800ED3BC
  W8(c->r[30]+0x00000031u,c->r[3]); // 800ED3C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED3C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED3C8
  c->lr=c->r[0]; // 800ED3CC
  c->r[1]=c->r[1]+0x00000010u; // 800ED3D0
  return; // 800ED3D4
}

// fn_800ED3D8
void f_800ED3D8(Ctx* __restrict c) {
  trace_call(0x800ED3D8u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800ED3D8
  c->r[6]=R32(c->r[3]+0x00000004u); // 800ED3DC
  c->r[5]=R8(c->r[3]+0x00000030u); // 800ED3E0
  c->r[0]=R8(c->r[3]+0x00000031u); // 800ED3E4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800ED3E8
  W32(c->r[4]+0x00000004u,c->r[6]); // 800ED3EC
  W8(c->r[4]+0x00000030u,c->r[5]); // 800ED3F0
  W8(c->r[4]+0x00000031u,c->r[0]); // 800ED3F4
  return; // 800ED3F8
}

// fn_800ED3FC
void f_800ED3FC(Ctx* __restrict c) {
  trace_call(0x800ED3FCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED3FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ED400
  c->ctr=c->r[12]; // 800ED404
  if (true) { dispatch(c,c->ctr); return; } // 800ED408
}

// fn_800ED40C
void f_800ED40C(Ctx* __restrict c) {
  trace_call(0x800ED40Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED40C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ED410
  c->ctr=c->r[12]; // 800ED414
  if (true) { dispatch(c,c->ctr); return; } // 800ED418
}

// fn_800ED41C
void f_800ED41C(Ctx* __restrict c) {
  trace_call(0x800ED41Cu);
  c->r[3]=0u+0x80410000u; // 800ED41C
  c->r[3]=c->r[3]+0xFFFFE649u; // 800ED420
  return; // 800ED424
}

// fn_800ED428
void f_800ED428(Ctx* __restrict c) {
  trace_call(0x800ED428u);
  c->r[3]=0u+0x00000034u; // 800ED428
  return; // 800ED42C
}

// fn_800ED430
void f_800ED430(Ctx* __restrict c) {
  trace_call(0x800ED430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED430
  c->r[0]=c->lr; // 800ED434
  c->r[3]=0u+0x00000034u; // 800ED438
  c->r[4]=c->r[13]+0xFFFFB97Fu; // 800ED43C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED440
  c->r[5]=0u+0x00000000u; // 800ED444
  c->r[6]=0u+0x00001001u; // 800ED448
  c->lr=0x800ED450u; f_80244D20(c); // 800ED44C
  cmps(c,0,(int32_t)c->r[3],0); // 800ED450
  if (crb(c,2)) { goto L_800ED45C; } // 800ED454
  c->lr=0x800ED45Cu; f_800ED348(c); // 800ED458
L_800ED45C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED45C
  c->lr=c->r[0]; // 800ED460
  c->r[1]=c->r[1]+0x00000010u; // 800ED464
  return; // 800ED468
}

// fn_800ED46C
void f_800ED46C(Ctx* __restrict c) {
  trace_call(0x800ED46Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED46C
  c->r[0]=c->lr; // 800ED470
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED478
  c->r[31]=c->r[3]|c->r[3]; // 800ED47C
  c->lr=0x800ED484u; f_800D7120(c); // 800ED480
  c->r[5]=0u+0x80410000u; // 800ED484
  c->r[3]=0u+0x999E0000u; // 800ED488
  c->r[0]=c->r[3]+0x0000236Eu; // 800ED48C
  c->r[4]=0u+0x00000000u; // 800ED490
  c->r[5]=c->r[5]+0x000052F0u; // 800ED494
  W32(c->r[31]+0x00000008u,c->r[5]); // 800ED498
  c->r[3]=c->r[31]|c->r[31]; // 800ED49C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800ED4A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ED4A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED4A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED4AC
  c->lr=c->r[0]; // 800ED4B0
  c->r[1]=c->r[1]+0x00000010u; // 800ED4B4
  return; // 800ED4B8
}

// fn_800ED4BC
void f_800ED4BC(Ctx* __restrict c) {
  trace_call(0x800ED4BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED4BC
  c->r[0]=c->lr; // 800ED4C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED4C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED4C8
  c->r[30]=c->r[3]|c->r[3]; // 800ED4CC
  c->r[31]=c->r[4]|c->r[4]; // 800ED4D0
  c->lr=0x800ED4D8u; f_8030D728(c); // 800ED4D4
  c->r[3]=c->r[31]|c->r[31]; // 800ED4D8
  c->r[4]=0u+0x00000000u; // 800ED4DC
  c->lr=0x800ED4E4u; f_8030BE30(c); // 800ED4E0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800ED4E4
  c->r[3]=c->r[31]|c->r[31]; // 800ED4E8
  c->lr=0x800ED4F0u; f_8030BD1C(c); // 800ED4EC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800ED4F0
  c->r[3]=c->r[31]|c->r[31]; // 800ED4F4
  c->lr=0x800ED4FCu; f_8030BD1C(c); // 800ED4F8
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800ED4FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED500
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED504
  c->lr=c->r[0]; // 800ED508
  c->r[1]=c->r[1]+0x00000010u; // 800ED50C
  return; // 800ED510
}

// fn_800ED514
void f_800ED514(Ctx* __restrict c) {
  trace_call(0x800ED514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED514
  c->r[0]=c->lr; // 800ED518
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED51C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED520
  c->r[30]=c->r[3]|c->r[3]; // 800ED524
  c->r[31]=c->r[4]|c->r[4]; // 800ED528
  c->r[0]=R32(c->r[3]+0x00000000u); // 800ED52C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ED530
  c->r[0]=R32(c->r[3]+0x00000004u); // 800ED534
  c->r[3]=c->r[4]+0x00000030u; // 800ED538
  W32(c->r[4]+0x00000004u,c->r[0]); // 800ED53C
  c->r[4]=c->r[30]+0x00000030u; // 800ED540
  c->lr=0x800ED548u; f_8003AB48(c); // 800ED544
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800ED548
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800ED54C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED550
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED554
  c->lr=c->r[0]; // 800ED558
  c->r[1]=c->r[1]+0x00000010u; // 800ED55C
  return; // 800ED560
}

// fn_800ED564
void f_800ED564(Ctx* __restrict c) {
  trace_call(0x800ED564u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED564
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ED568
  c->ctr=c->r[12]; // 800ED56C
  if (true) { dispatch(c,c->ctr); return; } // 800ED570
}

// fn_800ED574
void f_800ED574(Ctx* __restrict c) {
  trace_call(0x800ED574u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED574
  c->r[0]=c->lr; // 800ED578
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED57C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED580
  c->r[29]=c->r[3]|c->r[3]; // 800ED584
  c->r[30]=c->r[4]|c->r[4]; // 800ED588
  c->r[31]=c->r[5]|c->r[5]; // 800ED58C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800ED590
  cmps(c,0,(int32_t)c->r[0],7); // 800ED594
  if (!crb(c,0)) { goto L_800ED5A8; } // 800ED598
  c->r[4]=c->r[31]|c->r[31]; // 800ED59C
  c->r[3]=c->r[3]+0x00000030u; // 800ED5A0
  c->lr=0x800ED5A8u; f_8003A994(c); // 800ED5A4
L_800ED5A8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800ED5A8
  c->r[3]=c->r[29]|c->r[29]; // 800ED5AC
  c->r[4]=c->r[30]|c->r[30]; // 800ED5B0
  c->r[5]=c->r[31]|c->r[31]; // 800ED5B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ED5B8
  c->ctr=c->r[12]; // 800ED5BC
  if (true) { c->lr=0x800ED5C4u; dispatch(c,c->ctr); } // 800ED5C0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED5C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED5C8
  c->lr=c->r[0]; // 800ED5CC
  c->r[1]=c->r[1]+0x00000020u; // 800ED5D0
  return; // 800ED5D4
}

// fn_800ED5D8
void f_800ED5D8(Ctx* __restrict c) {
  trace_call(0x800ED5D8u);
  c->r[3]=0u+0x80410000u; // 800ED5D8
  c->r[3]=c->r[3]+0xFFFFE65Au; // 800ED5DC
  return; // 800ED5E0
}

// fn_800ED5E4
void f_800ED5E4(Ctx* __restrict c) {
  trace_call(0x800ED5E4u);
  c->r[3]=0u+0x00000040u; // 800ED5E4
  return; // 800ED5E8
}

// fn_800ED5EC
void f_800ED5EC(Ctx* __restrict c) {
  trace_call(0x800ED5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED5EC
  c->r[0]=c->lr; // 800ED5F0
  c->r[3]=0u+0x00000040u; // 800ED5F4
  c->r[4]=c->r[13]+0xFFFFB984u; // 800ED5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED5FC
  c->r[5]=0u+0x00000000u; // 800ED600
  c->r[6]=0u+0x00001001u; // 800ED604
  c->lr=0x800ED60Cu; f_80244D20(c); // 800ED608
  cmps(c,0,(int32_t)c->r[3],0); // 800ED60C
  if (crb(c,2)) { goto L_800ED618; } // 800ED610
  c->lr=0x800ED618u; f_800ED46C(c); // 800ED614
L_800ED618:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED618
  c->lr=c->r[0]; // 800ED61C
  c->r[1]=c->r[1]+0x00000010u; // 800ED620
  return; // 800ED624
}

// fn_800ED628
void f_800ED628(Ctx* __restrict c) {
  trace_call(0x800ED628u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED628
  c->r[0]=c->lr; // 800ED62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED634
  c->r[31]=c->r[3]|c->r[3]; // 800ED638
  c->lr=0x800ED640u; f_800D7120(c); // 800ED63C
  c->r[4]=0u+0x80410000u; // 800ED640
  c->r[3]=0u+0x7F870000u; // 800ED644
  c->r[0]=c->r[3]+0x00002519u; // 800ED648
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ED64C
  c->r[4]=c->r[4]+0x000052BCu; // 800ED650
  c->r[3]=c->r[31]|c->r[31]; // 800ED654
  W32(c->r[31]+0x00000008u,c->r[4]); // 800ED658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED65C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED660
  c->lr=c->r[0]; // 800ED664
  c->r[1]=c->r[1]+0x00000010u; // 800ED668
  return; // 800ED66C
}

// fn_800ED670
void f_800ED670(Ctx* __restrict c) {
  trace_call(0x800ED670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED670
  c->r[0]=c->lr; // 800ED674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED678
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED67C
  c->r[30]=c->r[3]|c->r[3]; // 800ED680
  c->r[31]=c->r[4]|c->r[4]; // 800ED684
  c->lr=0x800ED68Cu; f_8030D728(c); // 800ED688
  c->r[3]=c->r[31]|c->r[31]; // 800ED68C
  c->lr=0x800ED694u; f_8030BD1C(c); // 800ED690
  W8(c->r[30]+0x00000030u,c->r[3]); // 800ED694
  c->r[3]=c->r[31]|c->r[31]; // 800ED698
  c->lr=0x800ED6A0u; f_8030C0A0(c); // 800ED69C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800ED6A0
  c->r[3]=c->r[31]|c->r[31]; // 800ED6A4
  c->lr=0x800ED6ACu; f_8030C0A0(c); // 800ED6A8
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800ED6AC
  c->r[3]=c->r[31]|c->r[31]; // 800ED6B0
  c->lr=0x800ED6B8u; f_8030C0A0(c); // 800ED6B4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800ED6B8
  c->r[3]=c->r[31]|c->r[31]; // 800ED6BC
  c->lr=0x800ED6C4u; f_8030C0A0(c); // 800ED6C0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800ED6C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED6C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED6CC
  c->lr=c->r[0]; // 800ED6D0
  c->r[1]=c->r[1]+0x00000010u; // 800ED6D4
  return; // 800ED6D8
}

// fn_800ED6DC
void f_800ED6DC(Ctx* __restrict c) {
  trace_call(0x800ED6DCu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800ED6DC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800ED6E0
  c->r[0]=R8(c->r[3]+0x00000030u); // 800ED6E4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ED6E8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ED6EC
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED6F0
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED6F4
  W32(c->r[4]+0x00000000u,c->r[6]); // 800ED6F8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800ED6FC
  W8(c->r[4]+0x00000030u,c->r[0]); // 800ED700
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[3]);} // 800ED704
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[2]);} // 800ED708
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[1]);} // 800ED70C
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 800ED710
  return; // 800ED714
}

// fn_800ED718
void f_800ED718(Ctx* __restrict c) {
  trace_call(0x800ED718u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED718
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ED71C
  c->ctr=c->r[12]; // 800ED720
  if (true) { dispatch(c,c->ctr); return; } // 800ED724
}

// fn_800ED728
void f_800ED728(Ctx* __restrict c) {
  trace_call(0x800ED728u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED728
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ED72C
  c->ctr=c->r[12]; // 800ED730
  if (true) { dispatch(c,c->ctr); return; } // 800ED734
}

// fn_800ED738
void f_800ED738(Ctx* __restrict c) {
  trace_call(0x800ED738u);
  c->r[3]=0u+0x80410000u; // 800ED738
  c->r[3]=c->r[3]+0xFFFFE66Cu; // 800ED73C
  return; // 800ED740
}

// fn_800ED744
void f_800ED744(Ctx* __restrict c) {
  trace_call(0x800ED744u);
  c->r[3]=0u+0x00000044u; // 800ED744
  return; // 800ED748
}

// fn_800ED74C
void f_800ED74C(Ctx* __restrict c) {
  trace_call(0x800ED74Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED74C
  c->r[0]=c->lr; // 800ED750
  c->r[3]=0u+0x00000044u; // 800ED754
  c->r[4]=c->r[13]+0xFFFFB989u; // 800ED758
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED75C
  c->r[5]=0u+0x00000000u; // 800ED760
  c->r[6]=0u+0x00001001u; // 800ED764
  c->lr=0x800ED76Cu; f_80244D20(c); // 800ED768
  cmps(c,0,(int32_t)c->r[3],0); // 800ED76C
  if (crb(c,2)) { goto L_800ED778; } // 800ED770
  c->lr=0x800ED778u; f_800ED628(c); // 800ED774
L_800ED778:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED778
  c->lr=c->r[0]; // 800ED77C
  c->r[1]=c->r[1]+0x00000010u; // 800ED780
  return; // 800ED784
}

// fn_800ED788
void f_800ED788(Ctx* __restrict c) {
  trace_call(0x800ED788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED788
  c->r[0]=c->lr; // 800ED78C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED790
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED794
  c->r[31]=c->r[3]|c->r[3]; // 800ED798
  c->lr=0x800ED7A0u; f_800D7120(c); // 800ED79C
  c->r[5]=0u+0x80440000u; // 800ED7A0
  c->r[3]=0u+0xA6200000u; // 800ED7A4
  c->r[4]=0u+0x00000000u; // 800ED7A8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800ED7AC
  c->r[0]=c->r[3]+0xFFFFDD4Du; // 800ED7B0
  c->r[5]=c->r[5]+0x00001074u; // 800ED7B4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800ED7B8
  c->r[3]=c->r[31]|c->r[31]; // 800ED7BC
  W32(c->r[31]+0x00000044u,c->r[4]); // 800ED7C0
  W32(c->r[31]+0x00000070u,c->r[4]); // 800ED7C4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800ED7C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED7CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED7D0
  c->lr=c->r[0]; // 800ED7D4
  c->r[1]=c->r[1]+0x00000010u; // 800ED7D8
  return; // 800ED7DC
}

// fn_800ED7E0
void f_800ED7E0(Ctx* __restrict c) {
  trace_call(0x800ED7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED7E0
  c->r[0]=c->lr; // 800ED7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED7E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED7EC
  c->r[30]=c->r[3]|c->r[3]; // 800ED7F0
  c->r[31]=c->r[4]|c->r[4]; // 800ED7F4
  c->lr=0x800ED7FCu; f_8030D728(c); // 800ED7F8
  c->r[3]=c->r[31]|c->r[31]; // 800ED7FC
  c->r[4]=0u+0x00000000u; // 800ED800
  c->lr=0x800ED808u; f_8030BE30(c); // 800ED804
  W32(c->r[30]+0x00000030u,c->r[3]); // 800ED808
  c->r[3]=c->r[31]|c->r[31]; // 800ED80C
  c->lr=0x800ED814u; f_8030BD1C(c); // 800ED810
  W32(c->r[30]+0x00000034u,c->r[3]); // 800ED814
  c->r[3]=c->r[31]|c->r[31]; // 800ED818
  c->r[4]=0u+0x00000000u; // 800ED81C
  c->lr=0x800ED824u; f_8030BE30(c); // 800ED820
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800ED824
  c->r[3]=c->r[31]|c->r[31]; // 800ED828
  c->lr=0x800ED830u; f_8030BD1C(c); // 800ED82C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800ED830
  c->r[3]=c->r[31]|c->r[31]; // 800ED834
  c->r[4]=c->r[30]+0x00000048u; // 800ED838
  c->r[5]=0u+0x00000000u; // 800ED83C
  c->lr=0x800ED844u; f_8030B7F0(c); // 800ED840
  c->r[3]=c->r[31]|c->r[31]; // 800ED844
  c->r[4]=0u+0x00000000u; // 800ED848
  c->lr=0x800ED850u; f_8030BE30(c); // 800ED84C
  W32(c->r[30]+0x00000068u,c->r[3]); // 800ED850
  c->r[3]=c->r[31]|c->r[31]; // 800ED854
  c->lr=0x800ED85Cu; f_8030BD1C(c); // 800ED858
  W32(c->r[30]+0x0000006Cu,c->r[3]); // 800ED85C
  c->r[3]=c->r[31]|c->r[31]; // 800ED860
  c->r[4]=c->r[30]+0x00000074u; // 800ED864
  c->r[5]=0u+0x00000000u; // 800ED868
  c->lr=0x800ED870u; f_8030B7F0(c); // 800ED86C
  c->r[3]=c->r[31]|c->r[31]; // 800ED870
  c->lr=0x800ED878u; f_8030C0A0(c); // 800ED874
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 800ED878
  c->r[3]=c->r[31]|c->r[31]; // 800ED87C
  c->lr=0x800ED884u; f_8030BD1C(c); // 800ED880
  W32(c->r[30]+0x00000098u,c->r[3]); // 800ED884
  c->r[3]=c->r[31]|c->r[31]; // 800ED888
  c->lr=0x800ED890u; f_8030BD1C(c); // 800ED88C
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 800ED890
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 800ED894
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 800ED898
  c->r[3]=c->r[31]|c->r[31]; // 800ED89C
  c->lr=0x800ED8A4u; f_8030BD1C(c); // 800ED8A0
  W32(c->r[30]+0x000000A0u,c->r[3]); // 800ED8A4
  c->r[3]=c->r[31]|c->r[31]; // 800ED8A8
  c->lr=0x800ED8B0u; f_8030BD1C(c); // 800ED8AC
  c->r[4]=R32(c->r[30]+0x0000009Cu); // 800ED8B0
  c->r[4]=(rotl(c->r[3],30)&0x40000000u)|(c->r[4]&~0x40000000u); // 800ED8B4
  c->r[0]=0u+0x00000000u; // 800ED8B8
  W32(c->r[30]+0x0000009Cu,c->r[4]); // 800ED8BC
  W32(c->r[30]+0x000000A4u,c->r[0]); // 800ED8C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ED8C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED8C8
  c->lr=c->r[0]; // 800ED8CC
  c->r[1]=c->r[1]+0x00000010u; // 800ED8D0
  return; // 800ED8D4
}

// fn_800ED8D8
void f_800ED8D8(Ctx* __restrict c) {
  trace_call(0x800ED8D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED8D8
  c->r[0]=c->lr; // 800ED8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED8E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED8E4
  c->r[31]=c->r[4]|c->r[4]; // 800ED8E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ED8EC
  c->r[30]=c->r[3]|c->r[3]; // 800ED8F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800ED8F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800ED8F8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800ED8FC
  c->r[3]=c->r[4]+0x00000030u; // 800ED900
  W32(c->r[4]+0x00000004u,c->r[0]); // 800ED904
  c->r[4]=c->r[30]+0x00000030u; // 800ED908
  c->lr=0x800ED910u; f_8003AB48(c); // 800ED90C
  c->r[3]=c->r[31]+0x0000003Cu; // 800ED910
  c->r[4]=c->r[30]+0x0000003Cu; // 800ED914
  c->lr=0x800ED91Cu; f_8003AB48(c); // 800ED918
  c->r[3]=c->r[31]+0x00000048u; // 800ED91C
  c->r[4]=c->r[30]+0x00000048u; // 800ED920
  c->lr=0x800ED928u; f_803A6F10(c); // 800ED924
  c->r[3]=c->r[31]+0x00000068u; // 800ED928
  c->r[4]=c->r[30]+0x00000068u; // 800ED92C
  c->lr=0x800ED934u; f_8003AB48(c); // 800ED930
  c->r[3]=c->r[31]+0x00000074u; // 800ED934
  c->r[4]=c->r[30]+0x00000074u; // 800ED938
  c->lr=0x800ED940u; f_803A6F10(c); // 800ED93C
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED940
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 800ED944
  c->r[0]=R32(c->r[30]+0x00000098u); // 800ED948
  W32(c->r[31]+0x00000098u,c->r[0]); // 800ED94C
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 800ED950
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 800ED954
  c->r[0]=R32(c->r[30]+0x000000A0u); // 800ED958
  W32(c->r[31]+0x000000A0u,c->r[0]); // 800ED95C
  c->r[0]=R32(c->r[30]+0x000000A4u); // 800ED960
  W32(c->r[31]+0x000000A4u,c->r[0]); // 800ED964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED968
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ED96C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED970
  c->lr=c->r[0]; // 800ED974
  c->r[1]=c->r[1]+0x00000010u; // 800ED978
  return; // 800ED97C
}

// fn_800ED980
void f_800ED980(Ctx* __restrict c) {
  trace_call(0x800ED980u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800ED980
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ED984
  c->ctr=c->r[12]; // 800ED988
  if (true) { dispatch(c,c->ctr); return; } // 800ED98C
}

// fn_800ED990
void f_800ED990(Ctx* __restrict c) {
  trace_call(0x800ED990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED990
  c->r[0]=c->lr; // 800ED994
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED998
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ED99C
  c->r[29]=c->r[3]|c->r[3]; // 800ED9A0
  c->r[30]=c->r[4]|c->r[4]; // 800ED9A4
  c->r[31]=c->r[5]|c->r[5]; // 800ED9A8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800ED9AC
  cmps(c,0,(int32_t)c->r[0],7); // 800ED9B0
  if (!crb(c,0)) { goto L_800ED9C4; } // 800ED9B4
  c->r[4]=c->r[31]|c->r[31]; // 800ED9B8
  c->r[3]=c->r[3]+0x00000030u; // 800ED9BC
  c->lr=0x800ED9C4u; f_8003A994(c); // 800ED9C0
L_800ED9C4:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800ED9C4
  cmps(c,0,(int32_t)c->r[0],7); // 800ED9C8
  if (!crb(c,0)) { goto L_800ED9DC; } // 800ED9CC
  c->r[4]=c->r[31]|c->r[31]; // 800ED9D0
  c->r[3]=c->r[29]+0x0000003Cu; // 800ED9D4
  c->lr=0x800ED9DCu; f_8003A994(c); // 800ED9D8
L_800ED9DC:;
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 800ED9DC
  cmps(c,0,(int32_t)c->r[0],7); // 800ED9E0
  if (!crb(c,0)) { goto L_800ED9F4; } // 800ED9E4
  c->r[4]=c->r[31]|c->r[31]; // 800ED9E8
  c->r[3]=c->r[29]+0x00000068u; // 800ED9EC
  c->lr=0x800ED9F4u; f_8003A994(c); // 800ED9F0
L_800ED9F4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800ED9F4
  c->r[3]=c->r[29]|c->r[29]; // 800ED9F8
  c->r[4]=c->r[30]|c->r[30]; // 800ED9FC
  c->r[5]=c->r[31]|c->r[31]; // 800EDA00
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EDA04
  c->ctr=c->r[12]; // 800EDA08
  if (true) { c->lr=0x800EDA10u; dispatch(c,c->ctr); } // 800EDA0C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDA10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDA14
  c->lr=c->r[0]; // 800EDA18
  c->r[1]=c->r[1]+0x00000020u; // 800EDA1C
  return; // 800EDA20
}

// fn_800EDA24
void f_800EDA24(Ctx* __restrict c) {
  trace_call(0x800EDA24u);
  c->r[3]=0u+0x80410000u; // 800EDA24
  c->r[3]=c->r[3]+0xFFFFE67Eu; // 800EDA28
  return; // 800EDA2C
}

// fn_800EDA30
void f_800EDA30(Ctx* __restrict c) {
  trace_call(0x800EDA30u);
  c->r[3]=0u+0x000000A8u; // 800EDA30
  return; // 800EDA34
}

// fn_800EDA38
void f_800EDA38(Ctx* __restrict c) {
  trace_call(0x800EDA38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDA38
  c->r[0]=c->lr; // 800EDA3C
  c->r[3]=0u+0x000000A8u; // 800EDA40
  c->r[4]=c->r[13]+0xFFFFB98Eu; // 800EDA44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDA48
  c->r[5]=0u+0x00000000u; // 800EDA4C
  c->r[6]=0u+0x00001001u; // 800EDA50
  c->lr=0x800EDA58u; f_80244D20(c); // 800EDA54
  cmps(c,0,(int32_t)c->r[3],0); // 800EDA58
  if (crb(c,2)) { goto L_800EDA64; } // 800EDA5C
  c->lr=0x800EDA64u; f_800ED788(c); // 800EDA60
L_800EDA64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDA64
  c->lr=c->r[0]; // 800EDA68
  c->r[1]=c->r[1]+0x00000010u; // 800EDA6C
  return; // 800EDA70
}

// fn_800EDA74
void f_800EDA74(Ctx* __restrict c) {
  trace_call(0x800EDA74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDA74
  c->r[0]=c->lr; // 800EDA78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDA7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDA80
  c->r[31]=c->r[3]|c->r[3]; // 800EDA84
  c->lr=0x800EDA8Cu; f_800D7120(c); // 800EDA88
  c->r[4]=0u+0x80410000u; // 800EDA8C
  c->r[3]=0u+0xE5680000u; // 800EDA90
  c->r[0]=c->r[3]+0x00006661u; // 800EDA94
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EDA98
  c->r[4]=c->r[4]+0x00005288u; // 800EDA9C
  c->r[3]=c->r[31]|c->r[31]; // 800EDAA0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EDAA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDAA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDAAC
  c->lr=c->r[0]; // 800EDAB0
  c->r[1]=c->r[1]+0x00000010u; // 800EDAB4
  return; // 800EDAB8
}

// fn_800EDABC
void f_800EDABC(Ctx* __restrict c) {
  trace_call(0x800EDABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDABC
  c->r[0]=c->lr; // 800EDAC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDAC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDAC8
  c->r[30]=c->r[3]|c->r[3]; // 800EDACC
  c->r[31]=c->r[4]|c->r[4]; // 800EDAD0
  c->lr=0x800EDAD8u; f_8030D728(c); // 800EDAD4
  c->r[3]=c->r[31]|c->r[31]; // 800EDAD8
  c->r[4]=0u+0x00000000u; // 800EDADC
  c->lr=0x800EDAE4u; f_8030BE30(c); // 800EDAE0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EDAE4
  c->r[0]=0u+0x00000000u; // 800EDAE8
  c->r[3]=c->r[31]|c->r[31]; // 800EDAEC
  c->r[4]=c->r[30]+0x0000003Cu; // 800EDAF0
  W32(c->r[30]+0x00000034u,c->r[0]); // 800EDAF4
  c->r[5]=0u+0x00000020u; // 800EDAF8
  c->lr=0x800EDB00u; f_8030B7F0(c); // 800EDAFC
  c->r[3]=c->r[31]|c->r[31]; // 800EDB00
  c->lr=0x800EDB08u; f_8030BD1C(c); // 800EDB04
  W32(c->r[30]+0x00000038u,c->r[3]); // 800EDB08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDB0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDB10
  c->lr=c->r[0]; // 800EDB14
  c->r[1]=c->r[1]+0x00000010u; // 800EDB18
  return; // 800EDB1C
}

// fn_800EDB20
void f_800EDB20(Ctx* __restrict c) {
  trace_call(0x800EDB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDB20
  c->r[0]=c->lr; // 800EDB24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDB28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDB2C
  c->r[30]=c->r[3]|c->r[3]; // 800EDB30
  c->r[31]=c->r[4]|c->r[4]; // 800EDB34
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EDB38
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EDB3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EDB40
  c->r[3]=c->r[4]+0x00000030u; // 800EDB44
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EDB48
  c->r[4]=c->r[30]+0x00000030u; // 800EDB4C
  c->lr=0x800EDB54u; f_800C4E14(c); // 800EDB50
  c->r[3]=c->r[31]+0x0000003Cu; // 800EDB54
  c->r[4]=c->r[30]+0x0000003Cu; // 800EDB58
  c->r[5]=0u+0x00000020u; // 800EDB5C
  c->lr=0x800EDB64u; f_8024FA70(c); // 800EDB60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDB64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDB68
  c->lr=c->r[0]; // 800EDB6C
  c->r[1]=c->r[1]+0x00000010u; // 800EDB70
  return; // 800EDB74
}

// fn_800EDB78
void f_800EDB78(Ctx* __restrict c) {
  trace_call(0x800EDB78u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDB78
  c->r[0]=c->lr; // 800EDB7C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EDB80
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDB84
  c->r[27]=c->r[3]|c->r[3]; // 800EDB88
  c->r[28]=c->r[4]|c->r[4]; // 800EDB8C
  c->r[29]=c->r[5]|c->r[5]; // 800EDB90
  c->r[30]=c->r[6]|c->r[6]; // 800EDB94
  c->r[7]=R32(c->r[3]+0x00000030u); // 800EDB98
  cmps(c,0,(int32_t)c->r[7],0); // 800EDB9C
  if (crb(c,2)) { goto L_800EDC44; } // 800EDBA0
  c->r[0]=0u+0x00000000u; // 800EDBA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EDBA8
  c->r[4]=c->r[7]|c->r[7]; // 800EDBAC
  c->r[6]=c->r[28]|c->r[28]; // 800EDBB0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800EDBB4
  c->r[7]=c->r[29]|c->r[29]; // 800EDBB8
  c->r[9]=R32(c->r[27]+0x00000038u); // 800EDBBC
  c->r[8]=c->r[30]|c->r[30]; // 800EDBC0
  c->r[5]=0u+0x000000FFu; // 800EDBC4
  c->r[10]=0u+0x00000001u; // 800EDBC8
  c->lr=0x800EDBD0u; f_80281A84(c); // 800EDBCC
  cmps(c,0,(int32_t)c->r[3],0); // 800EDBD0
  W32(c->r[27]+0x00000034u,c->r[3]); // 800EDBD4
  if (crb(c,2)) { goto L_800EDBE4; } // 800EDBD8
  c->lr=0x800EDBE0u; f_80295B6C(c); // 800EDBDC
  goto L_800EDC44; // 800EDBE0
L_800EDBE4:;
  c->r[3]=R32(c->r[27]+0x00000038u); // 800EDBE4
  c->r[4]=c->r[30]|c->r[30]; // 800EDBE8
  c->r[5]=c->r[29]|c->r[29]; // 800EDBEC
  c->lr=0x800EDBF4u; f_802C0F98(c); // 800EDBF0
  c->r[31]=c->r[3]|c->r[3]; // 800EDBF4
  c->r[3]=0u+0x00000048u; // 800EDBF8
  c->r[4]=c->r[13]+0xFFFFB993u; // 800EDBFC
  c->r[5]=0u+0x00000000u; // 800EDC00
  c->r[6]=0u+0x00001001u; // 800EDC04
  c->lr=0x800EDC0Cu; f_80244D20(c); // 800EDC08
  cmps(c,0,(int32_t)c->r[3],0); // 800EDC0C
  if (crb(c,2)) { goto L_800EDC20; } // 800EDC10
  c->r[5]=R32(c->r[27]+0x00000030u); // 800EDC14
  c->r[4]=c->r[31]|c->r[31]; // 800EDC18
  c->lr=0x800EDC20u; f_80292840(c); // 800EDC1C
L_800EDC20:;
  W32(c->r[27]+0x00000034u,c->r[3]); // 800EDC20
  c->r[4]=c->r[28]|c->r[28]; // 800EDC24
  c->r[7]=R32(c->r[27]+0x00000038u); // 800EDC28
  c->r[5]=c->r[29]|c->r[29]; // 800EDC2C
  c->r[6]=c->r[30]|c->r[30]; // 800EDC30
  c->r[8]=0u+0x00000001u; // 800EDC34
  c->r[9]=0u+0x00000000u; // 800EDC38
  c->lr=0x800EDC40u; f_8027FFF4(c); // 800EDC3C
  W32(c->r[27]+0x00000034u,c->r[3]); // 800EDC40
L_800EDC44:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDC44
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EDC48
  c->lr=c->r[0]; // 800EDC4C
  c->r[1]=c->r[1]+0x00000030u; // 800EDC50
  return; // 800EDC54
}

// fn_800EDC58
void f_800EDC58(Ctx* __restrict c) {
  trace_call(0x800EDC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDC58
  c->r[0]=c->lr; // 800EDC5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDC60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDC64
  c->r[31]=c->r[3]|c->r[3]; // 800EDC68
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EDC6C
  cmps(c,0,(int32_t)c->r[0],0); // 800EDC70
  if (crb(c,2)) { goto L_800EDC88; } // 800EDC74
  c->r[3]=c->r[0]|c->r[0]; // 800EDC78
  c->lr=0x800EDC80u; f_80295B7C(c); // 800EDC7C
  c->r[0]=0u+0x00000000u; // 800EDC80
  W32(c->r[31]+0x00000034u,c->r[0]); // 800EDC84
L_800EDC88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDC88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDC8C
  c->lr=c->r[0]; // 800EDC90
  c->r[1]=c->r[1]+0x00000010u; // 800EDC94
  return; // 800EDC98
}

// fn_800EDC9C
void f_800EDC9C(Ctx* __restrict c) {
  trace_call(0x800EDC9Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EDC9C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EDCA0
  c->ctr=c->r[12]; // 800EDCA4
  if (true) { dispatch(c,c->ctr); return; } // 800EDCA8
}

// fn_800EDCAC
void f_800EDCAC(Ctx* __restrict c) {
  trace_call(0x800EDCACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EDCAC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EDCB0
  c->ctr=c->r[12]; // 800EDCB4
  if (true) { dispatch(c,c->ctr); return; } // 800EDCB8
}

// fn_800EDCBC
void f_800EDCBC(Ctx* __restrict c) {
  trace_call(0x800EDCBCu);
  c->r[3]=0u+0x80410000u; // 800EDCBC
  c->r[3]=c->r[3]+0xFFFFE695u; // 800EDCC0
  return; // 800EDCC4
}

// fn_800EDCC8
void f_800EDCC8(Ctx* __restrict c) {
  trace_call(0x800EDCC8u);
  c->r[3]=0u+0x0000005Cu; // 800EDCC8
  return; // 800EDCCC
}

// fn_800EDCD0
void f_800EDCD0(Ctx* __restrict c) {
  trace_call(0x800EDCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDCD0
  c->r[0]=c->lr; // 800EDCD4
  c->r[3]=0u+0x0000005Cu; // 800EDCD8
  c->r[4]=c->r[13]+0xFFFFB998u; // 800EDCDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDCE0
  c->r[5]=0u+0x00000000u; // 800EDCE4
  c->r[6]=0u+0x00001001u; // 800EDCE8
  c->lr=0x800EDCF0u; f_80244D20(c); // 800EDCEC
  cmps(c,0,(int32_t)c->r[3],0); // 800EDCF0
  if (crb(c,2)) { goto L_800EDCFC; } // 800EDCF4
  c->lr=0x800EDCFCu; f_800EDA74(c); // 800EDCF8
L_800EDCFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDCFC
  c->lr=c->r[0]; // 800EDD00
  c->r[1]=c->r[1]+0x00000010u; // 800EDD04
  return; // 800EDD08
}

// fn_800EDD0C
void f_800EDD0C(Ctx* __restrict c) {
  trace_call(0x800EDD0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDD0C
  c->r[0]=c->lr; // 800EDD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDD14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDD18
  c->r[31]=c->r[3]|c->r[3]; // 800EDD1C
  c->lr=0x800EDD24u; f_800D7120(c); // 800EDD20
  c->r[5]=0u+0x80410000u; // 800EDD24
  c->r[3]=0u+0x59710000u; // 800EDD28
  c->r[0]=c->r[3]+0x000047B2u; // 800EDD2C
  c->r[4]=0u+0x00000000u; // 800EDD30
  c->r[5]=c->r[5]+0x00005254u; // 800EDD34
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EDD38
  c->r[3]=c->r[31]|c->r[31]; // 800EDD3C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EDD40
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EDD44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDD48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDD4C
  c->lr=c->r[0]; // 800EDD50
  c->r[1]=c->r[1]+0x00000010u; // 800EDD54
  return; // 800EDD58
}

// fn_800EDD5C
void f_800EDD5C(Ctx* __restrict c) {
  trace_call(0x800EDD5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDD5C
  c->r[0]=c->lr; // 800EDD60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDD64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDD68
  c->r[30]=c->r[3]|c->r[3]; // 800EDD6C
  c->r[31]=c->r[4]|c->r[4]; // 800EDD70
  c->lr=0x800EDD78u; f_8030D728(c); // 800EDD74
  c->r[3]=c->r[31]|c->r[31]; // 800EDD78
  c->r[4]=0u+0x00000000u; // 800EDD7C
  c->lr=0x800EDD84u; f_8030BE30(c); // 800EDD80
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EDD84
  c->r[3]=c->r[31]|c->r[31]; // 800EDD88
  c->lr=0x800EDD90u; f_8030BD1C(c); // 800EDD8C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EDD90
  c->r[3]=c->r[31]|c->r[31]; // 800EDD94
  c->lr=0x800EDD9Cu; f_8030BD1C(c); // 800EDD98
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800EDD9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDDA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDDA4
  c->lr=c->r[0]; // 800EDDA8
  c->r[1]=c->r[1]+0x00000010u; // 800EDDAC
  return; // 800EDDB0
}

// fn_800EDDB4
void f_800EDDB4(Ctx* __restrict c) {
  trace_call(0x800EDDB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDDB4
  c->r[0]=c->lr; // 800EDDB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDDBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDDC0
  c->r[30]=c->r[3]|c->r[3]; // 800EDDC4
  c->r[31]=c->r[4]|c->r[4]; // 800EDDC8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EDDCC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EDDD0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EDDD4
  c->r[3]=c->r[4]+0x00000030u; // 800EDDD8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EDDDC
  c->r[4]=c->r[30]+0x00000030u; // 800EDDE0
  c->lr=0x800EDDE8u; f_8003AB48(c); // 800EDDE4
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800EDDE8
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800EDDEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDDF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDDF4
  c->lr=c->r[0]; // 800EDDF8
  c->r[1]=c->r[1]+0x00000010u; // 800EDDFC
  return; // 800EDE00
}

// fn_800EDE04
void f_800EDE04(Ctx* __restrict c) {
  trace_call(0x800EDE04u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EDE04
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EDE08
  c->ctr=c->r[12]; // 800EDE0C
  if (true) { dispatch(c,c->ctr); return; } // 800EDE10
}

// fn_800EDE14
void f_800EDE14(Ctx* __restrict c) {
  trace_call(0x800EDE14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDE14
  c->r[0]=c->lr; // 800EDE18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDE1C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDE20
  c->r[29]=c->r[3]|c->r[3]; // 800EDE24
  c->r[30]=c->r[4]|c->r[4]; // 800EDE28
  c->r[31]=c->r[5]|c->r[5]; // 800EDE2C
  c->r[3]=c->r[3]+0x00000030u; // 800EDE30
  c->lr=0x800EDE38u; f_800D62F4(c); // 800EDE34
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EDE38
  c->r[3]=c->r[29]|c->r[29]; // 800EDE3C
  c->r[4]=c->r[30]|c->r[30]; // 800EDE40
  c->r[5]=c->r[31]|c->r[31]; // 800EDE44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EDE48
  c->ctr=c->r[12]; // 800EDE4C
  if (true) { c->lr=0x800EDE54u; dispatch(c,c->ctr); } // 800EDE50
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDE54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDE58
  c->lr=c->r[0]; // 800EDE5C
  c->r[1]=c->r[1]+0x00000020u; // 800EDE60
  return; // 800EDE64
}

// fn_800EDE68
void f_800EDE68(Ctx* __restrict c) {
  trace_call(0x800EDE68u);
  c->r[3]=0u+0x80410000u; // 800EDE68
  c->r[3]=c->r[3]+0xFFFFE6A2u; // 800EDE6C
  return; // 800EDE70
}

// fn_800EDE74
void f_800EDE74(Ctx* __restrict c) {
  trace_call(0x800EDE74u);
  c->r[3]=0u+0x00000040u; // 800EDE74
  return; // 800EDE78
}

// fn_800EDE7C
void f_800EDE7C(Ctx* __restrict c) {
  trace_call(0x800EDE7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDE7C
  c->r[0]=c->lr; // 800EDE80
  c->r[3]=0u+0x00000040u; // 800EDE84
  c->r[4]=c->r[13]+0xFFFFB99Du; // 800EDE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDE8C
  c->r[5]=0u+0x00000000u; // 800EDE90
  c->r[6]=0u+0x00001001u; // 800EDE94
  c->lr=0x800EDE9Cu; f_80244D20(c); // 800EDE98
  cmps(c,0,(int32_t)c->r[3],0); // 800EDE9C
  if (crb(c,2)) { goto L_800EDEA8; } // 800EDEA0
  c->lr=0x800EDEA8u; f_800EDD0C(c); // 800EDEA4
L_800EDEA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDEA8
  c->lr=c->r[0]; // 800EDEAC
  c->r[1]=c->r[1]+0x00000010u; // 800EDEB0
  return; // 800EDEB4
}

// fn_800EDEB8
void f_800EDEB8(Ctx* __restrict c) {
  trace_call(0x800EDEB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDEB8
  c->r[0]=c->lr; // 800EDEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDEC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDEC4
  c->r[31]=c->r[3]|c->r[3]; // 800EDEC8
  c->lr=0x800EDED0u; f_800D7120(c); // 800EDECC
  c->r[5]=0u+0x80410000u; // 800EDED0
  c->r[3]=0u+0x59720000u; // 800EDED4
  c->r[0]=c->r[3]+0x00004EB8u; // 800EDED8
  c->r[4]=0u+0x00000000u; // 800EDEDC
  c->r[5]=c->r[5]+0x00005220u; // 800EDEE0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EDEE4
  c->r[3]=c->r[31]|c->r[31]; // 800EDEE8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EDEEC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EDEF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDEF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDEF8
  c->lr=c->r[0]; // 800EDEFC
  c->r[1]=c->r[1]+0x00000010u; // 800EDF00
  return; // 800EDF04
}

// fn_800EDF08
void f_800EDF08(Ctx* __restrict c) {
  trace_call(0x800EDF08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDF08
  c->r[0]=c->lr; // 800EDF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDF10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDF14
  c->r[30]=c->r[3]|c->r[3]; // 800EDF18
  c->r[31]=c->r[4]|c->r[4]; // 800EDF1C
  c->lr=0x800EDF24u; f_8030D728(c); // 800EDF20
  c->r[3]=c->r[31]|c->r[31]; // 800EDF24
  c->r[4]=0u+0x00000000u; // 800EDF28
  c->lr=0x800EDF30u; f_8030BE30(c); // 800EDF2C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EDF30
  c->r[3]=c->r[31]|c->r[31]; // 800EDF34
  c->lr=0x800EDF3Cu; f_8030BD1C(c); // 800EDF38
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EDF3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDF40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDF44
  c->lr=c->r[0]; // 800EDF48
  c->r[1]=c->r[1]+0x00000010u; // 800EDF4C
  return; // 800EDF50
}

// fn_800EDF54
void f_800EDF54(Ctx* __restrict c) {
  trace_call(0x800EDF54u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EDF54
  c->r[5]=c->r[3]|c->r[3]; // 800EDF58
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EDF5C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EDF60
  c->r[3]=c->r[4]+0x00000030u; // 800EDF64
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EDF68
  c->r[4]=c->r[5]+0x00000030u; // 800EDF6C
  f_8003AB48(c); return; // 800EDF70
}

// fn_800EDF74
void f_800EDF74(Ctx* __restrict c) {
  trace_call(0x800EDF74u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EDF74
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EDF78
  c->ctr=c->r[12]; // 800EDF7C
  if (true) { dispatch(c,c->ctr); return; } // 800EDF80
}

// fn_800EDF84
void f_800EDF84(Ctx* __restrict c) {
  trace_call(0x800EDF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDF84
  c->r[0]=c->lr; // 800EDF88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDF8C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EDF90
  c->r[29]=c->r[3]|c->r[3]; // 800EDF94
  c->r[30]=c->r[4]|c->r[4]; // 800EDF98
  c->r[31]=c->r[5]|c->r[5]; // 800EDF9C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EDFA0
  cmps(c,0,(int32_t)c->r[0],7); // 800EDFA4
  if (!crb(c,0)) { goto L_800EDFB8; } // 800EDFA8
  c->r[4]=c->r[31]|c->r[31]; // 800EDFAC
  c->r[3]=c->r[3]+0x00000030u; // 800EDFB0
  c->lr=0x800EDFB8u; f_8003A994(c); // 800EDFB4
L_800EDFB8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EDFB8
  c->r[3]=c->r[29]|c->r[29]; // 800EDFBC
  c->r[4]=c->r[30]|c->r[30]; // 800EDFC0
  c->r[5]=c->r[31]|c->r[31]; // 800EDFC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EDFC8
  c->ctr=c->r[12]; // 800EDFCC
  if (true) { c->lr=0x800EDFD4u; dispatch(c,c->ctr); } // 800EDFD0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EDFD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDFD8
  c->lr=c->r[0]; // 800EDFDC
  c->r[1]=c->r[1]+0x00000020u; // 800EDFE0
  return; // 800EDFE4
}

// fn_800EDFE8
void f_800EDFE8(Ctx* __restrict c) {
  trace_call(0x800EDFE8u);
  c->r[3]=0u+0x80410000u; // 800EDFE8
  c->r[3]=c->r[3]+0xFFFFE6B6u; // 800EDFEC
  return; // 800EDFF0
}

// fn_800EDFF4
void f_800EDFF4(Ctx* __restrict c) {
  trace_call(0x800EDFF4u);
  c->r[3]=0u+0x0000003Cu; // 800EDFF4
  return; // 800EDFF8
}

// fn_800EDFFC
void f_800EDFFC(Ctx* __restrict c) {
  trace_call(0x800EDFFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDFFC
  c->r[0]=c->lr; // 800EE000
  c->r[3]=0u+0x0000003Cu; // 800EE004
  c->r[4]=c->r[13]+0xFFFFB9A2u; // 800EE008
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE00C
  c->r[5]=0u+0x00000000u; // 800EE010
  c->r[6]=0u+0x00001001u; // 800EE014
  c->lr=0x800EE01Cu; f_80244D20(c); // 800EE018
  cmps(c,0,(int32_t)c->r[3],0); // 800EE01C
  if (crb(c,2)) { goto L_800EE028; } // 800EE020
  c->lr=0x800EE028u; f_800EDEB8(c); // 800EE024
L_800EE028:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE028
  c->lr=c->r[0]; // 800EE02C
  c->r[1]=c->r[1]+0x00000010u; // 800EE030
  return; // 800EE034
}

// fn_800EE038
void f_800EE038(Ctx* __restrict c) {
  trace_call(0x800EE038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE038
  c->r[0]=c->lr; // 800EE03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE044
  c->r[31]=c->r[3]|c->r[3]; // 800EE048
  c->lr=0x800EE050u; f_800D7120(c); // 800EE04C
  c->r[4]=0u+0x80410000u; // 800EE050
  c->r[3]=0u+0xE5680000u; // 800EE054
  c->r[0]=c->r[3]+0x00006661u; // 800EE058
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EE05C
  c->r[4]=c->r[4]+0x000051ECu; // 800EE060
  c->r[3]=c->r[31]|c->r[31]; // 800EE064
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EE068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE06C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE070
  c->lr=c->r[0]; // 800EE074
  c->r[1]=c->r[1]+0x00000010u; // 800EE078
  return; // 800EE07C
}

// fn_800EE080
void f_800EE080(Ctx* __restrict c) {
  trace_call(0x800EE080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE080
  c->r[0]=c->lr; // 800EE084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE088
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE08C
  c->r[30]=c->r[3]|c->r[3]; // 800EE090
  c->r[31]=c->r[4]|c->r[4]; // 800EE094
  c->lr=0x800EE09Cu; f_8030D728(c); // 800EE098
  c->r[3]=c->r[31]|c->r[31]; // 800EE09C
  c->r[4]=0u+0x00000000u; // 800EE0A0
  c->lr=0x800EE0A8u; f_8030BE30(c); // 800EE0A4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EE0A8
  c->r[0]=0u+0x00000000u; // 800EE0AC
  c->r[3]=c->r[31]|c->r[31]; // 800EE0B0
  c->r[4]=c->r[30]+0x0000003Cu; // 800EE0B4
  W32(c->r[30]+0x00000034u,c->r[0]); // 800EE0B8
  c->r[5]=0u+0x00000020u; // 800EE0BC
  c->lr=0x800EE0C4u; f_8030B7F0(c); // 800EE0C0
  c->r[3]=c->r[31]|c->r[31]; // 800EE0C4
  c->lr=0x800EE0CCu; f_8030BD1C(c); // 800EE0C8
  W32(c->r[30]+0x00000038u,c->r[3]); // 800EE0CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE0D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE0D4
  c->lr=c->r[0]; // 800EE0D8
  c->r[1]=c->r[1]+0x00000010u; // 800EE0DC
  return; // 800EE0E0
}

// fn_800EE0E4
void f_800EE0E4(Ctx* __restrict c) {
  trace_call(0x800EE0E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE0E4
  c->r[0]=c->lr; // 800EE0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE0EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE0F0
  c->r[30]=c->r[3]|c->r[3]; // 800EE0F4
  c->r[31]=c->r[4]|c->r[4]; // 800EE0F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE0FC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EE100
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EE104
  c->r[3]=c->r[4]+0x00000030u; // 800EE108
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EE10C
  c->r[4]=c->r[30]+0x00000030u; // 800EE110
  c->lr=0x800EE118u; f_800C4E14(c); // 800EE114
  c->r[3]=c->r[31]+0x0000003Cu; // 800EE118
  c->r[4]=c->r[30]+0x0000003Cu; // 800EE11C
  c->r[5]=0u+0x00000020u; // 800EE120
  c->lr=0x800EE128u; f_8024FA70(c); // 800EE124
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE128
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE12C
  c->lr=c->r[0]; // 800EE130
  c->r[1]=c->r[1]+0x00000010u; // 800EE134
  return; // 800EE138
}

// fn_800EE13C
void f_800EE13C(Ctx* __restrict c) {
  trace_call(0x800EE13Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE13C
  c->r[0]=c->lr; // 800EE140
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE144
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE148
  c->r[27]=c->r[3]|c->r[3]; // 800EE14C
  c->r[28]=c->r[4]|c->r[4]; // 800EE150
  c->r[29]=c->r[5]|c->r[5]; // 800EE154
  c->r[30]=c->r[6]|c->r[6]; // 800EE158
  c->r[7]=R32(c->r[3]+0x00000030u); // 800EE15C
  cmps(c,0,(int32_t)c->r[7],0); // 800EE160
  if (crb(c,2)) { goto L_800EE208; } // 800EE164
  c->r[0]=0u+0x00000000u; // 800EE168
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EE16C
  c->r[4]=c->r[7]|c->r[7]; // 800EE170
  c->r[6]=c->r[28]|c->r[28]; // 800EE174
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800EE178
  c->r[7]=c->r[29]|c->r[29]; // 800EE17C
  c->r[9]=R32(c->r[27]+0x00000038u); // 800EE180
  c->r[8]=c->r[30]|c->r[30]; // 800EE184
  c->r[5]=0u+0x000000FFu; // 800EE188
  c->r[10]=0u+0x00000001u; // 800EE18C
  c->lr=0x800EE194u; f_80281A84(c); // 800EE190
  cmps(c,0,(int32_t)c->r[3],0); // 800EE194
  W32(c->r[27]+0x00000034u,c->r[3]); // 800EE198
  if (crb(c,2)) { goto L_800EE1A8; } // 800EE19C
  c->lr=0x800EE1A4u; f_80295B6C(c); // 800EE1A0
  goto L_800EE208; // 800EE1A4
L_800EE1A8:;
  c->r[3]=R32(c->r[27]+0x00000038u); // 800EE1A8
  c->r[4]=c->r[30]|c->r[30]; // 800EE1AC
  c->r[5]=c->r[29]|c->r[29]; // 800EE1B0
  c->lr=0x800EE1B8u; f_802C0F98(c); // 800EE1B4
  c->r[31]=c->r[3]|c->r[3]; // 800EE1B8
  c->r[3]=0u+0x00000048u; // 800EE1BC
  c->r[4]=c->r[13]+0xFFFFB9A7u; // 800EE1C0
  c->r[5]=0u+0x00000000u; // 800EE1C4
  c->r[6]=0u+0x00001001u; // 800EE1C8
  c->lr=0x800EE1D0u; f_80244D20(c); // 800EE1CC
  cmps(c,0,(int32_t)c->r[3],0); // 800EE1D0
  if (crb(c,2)) { goto L_800EE1E4; } // 800EE1D4
  c->r[5]=R32(c->r[27]+0x00000030u); // 800EE1D8
  c->r[4]=c->r[31]|c->r[31]; // 800EE1DC
  c->lr=0x800EE1E4u; f_80292840(c); // 800EE1E0
L_800EE1E4:;
  W32(c->r[27]+0x00000034u,c->r[3]); // 800EE1E4
  c->r[4]=c->r[28]|c->r[28]; // 800EE1E8
  c->r[7]=R32(c->r[27]+0x00000038u); // 800EE1EC
  c->r[5]=c->r[29]|c->r[29]; // 800EE1F0
  c->r[6]=c->r[30]|c->r[30]; // 800EE1F4
  c->r[8]=0u+0x00000001u; // 800EE1F8
  c->r[9]=0u+0x00000000u; // 800EE1FC
  c->lr=0x800EE204u; f_8027FFF4(c); // 800EE200
  W32(c->r[27]+0x00000034u,c->r[3]); // 800EE204
L_800EE208:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE208
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE20C
  c->lr=c->r[0]; // 800EE210
  c->r[1]=c->r[1]+0x00000030u; // 800EE214
  return; // 800EE218
}

// fn_800EE21C
void f_800EE21C(Ctx* __restrict c) {
  trace_call(0x800EE21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE21C
  c->r[0]=c->lr; // 800EE220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE228
  c->r[31]=c->r[3]|c->r[3]; // 800EE22C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EE230
  cmps(c,0,(int32_t)c->r[0],0); // 800EE234
  if (crb(c,2)) { goto L_800EE24C; } // 800EE238
  c->r[3]=c->r[0]|c->r[0]; // 800EE23C
  c->lr=0x800EE244u; f_80295B7C(c); // 800EE240
  c->r[0]=0u+0x00000000u; // 800EE244
  W32(c->r[31]+0x00000034u,c->r[0]); // 800EE248
L_800EE24C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE24C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE250
  c->lr=c->r[0]; // 800EE254
  c->r[1]=c->r[1]+0x00000010u; // 800EE258
  return; // 800EE25C
}

// fn_800EE260
void f_800EE260(Ctx* __restrict c) {
  trace_call(0x800EE260u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EE260
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EE264
  c->ctr=c->r[12]; // 800EE268
  if (true) { dispatch(c,c->ctr); return; } // 800EE26C
}

// fn_800EE270
void f_800EE270(Ctx* __restrict c) {
  trace_call(0x800EE270u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EE270
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE274
  c->ctr=c->r[12]; // 800EE278
  if (true) { dispatch(c,c->ctr); return; } // 800EE27C
}

// fn_800EE280
void f_800EE280(Ctx* __restrict c) {
  trace_call(0x800EE280u);
  c->r[3]=0u+0x80410000u; // 800EE280
  c->r[3]=c->r[3]+0xFFFFE6CCu; // 800EE284
  return; // 800EE288
}

// fn_800EE28C
void f_800EE28C(Ctx* __restrict c) {
  trace_call(0x800EE28Cu);
  c->r[3]=0u+0x0000005Cu; // 800EE28C
  return; // 800EE290
}

// fn_800EE294
void f_800EE294(Ctx* __restrict c) {
  trace_call(0x800EE294u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE294
  c->r[0]=c->lr; // 800EE298
  c->r[3]=0u+0x0000005Cu; // 800EE29C
  c->r[4]=c->r[13]+0xFFFFB9ACu; // 800EE2A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE2A4
  c->r[5]=0u+0x00000000u; // 800EE2A8
  c->r[6]=0u+0x00001001u; // 800EE2AC
  c->lr=0x800EE2B4u; f_80244D20(c); // 800EE2B0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE2B4
  if (crb(c,2)) { goto L_800EE2C0; } // 800EE2B8
  c->lr=0x800EE2C0u; f_800EE038(c); // 800EE2BC
L_800EE2C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE2C0
  c->lr=c->r[0]; // 800EE2C4
  c->r[1]=c->r[1]+0x00000010u; // 800EE2C8
  return; // 800EE2CC
}

// fn_800EE2D0
void f_800EE2D0(Ctx* __restrict c) {
  trace_call(0x800EE2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE2D0
  c->r[0]=c->lr; // 800EE2D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE2D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE2DC
  c->r[31]=c->r[3]|c->r[3]; // 800EE2E0
  c->lr=0x800EE2E8u; f_800D7120(c); // 800EE2E4
  c->r[5]=0u+0x80410000u; // 800EE2E8
  c->r[3]=0u+0x334B0000u; // 800EE2EC
  c->r[4]=0u+0x00000000u; // 800EE2F0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EE2F4
  c->r[0]=c->r[3]+0x000022C1u; // 800EE2F8
  c->r[5]=c->r[5]+0x000051B8u; // 800EE2FC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EE300
  c->r[3]=c->r[31]|c->r[31]; // 800EE304
  W32(c->r[31]+0x00000044u,c->r[4]); // 800EE308
  W32(c->r[31]+0x00000050u,c->r[4]); // 800EE30C
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 800EE310
  W32(c->r[31]+0x00000068u,c->r[4]); // 800EE314
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EE318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE31C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE320
  c->lr=c->r[0]; // 800EE324
  c->r[1]=c->r[1]+0x00000010u; // 800EE328
  return; // 800EE32C
}

// fn_800EE330
void f_800EE330(Ctx* __restrict c) {
  trace_call(0x800EE330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE330
  c->r[0]=c->lr; // 800EE334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE338
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE33C
  c->r[30]=c->r[3]|c->r[3]; // 800EE340
  c->r[31]=c->r[4]|c->r[4]; // 800EE344
  c->lr=0x800EE34Cu; f_8030D728(c); // 800EE348
  c->r[3]=c->r[31]|c->r[31]; // 800EE34C
  c->r[4]=0u+0x00000000u; // 800EE350
  c->lr=0x800EE358u; f_8030BE30(c); // 800EE354
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EE358
  c->r[3]=c->r[31]|c->r[31]; // 800EE35C
  c->lr=0x800EE364u; f_8030BD1C(c); // 800EE360
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EE364
  c->r[3]=c->r[31]|c->r[31]; // 800EE368
  c->r[4]=0u+0x00000000u; // 800EE36C
  c->lr=0x800EE374u; f_8030BE30(c); // 800EE370
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EE374
  c->r[3]=c->r[31]|c->r[31]; // 800EE378
  c->lr=0x800EE380u; f_8030BD1C(c); // 800EE37C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800EE380
  c->r[3]=c->r[31]|c->r[31]; // 800EE384
  c->r[4]=0u+0x00000000u; // 800EE388
  c->lr=0x800EE390u; f_8030BE30(c); // 800EE38C
  W32(c->r[30]+0x00000048u,c->r[3]); // 800EE390
  c->r[3]=c->r[31]|c->r[31]; // 800EE394
  c->lr=0x800EE39Cu; f_8030BD1C(c); // 800EE398
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800EE39C
  c->r[3]=c->r[31]|c->r[31]; // 800EE3A0
  c->r[4]=0u+0x00000000u; // 800EE3A4
  c->lr=0x800EE3ACu; f_8030BE30(c); // 800EE3A8
  W32(c->r[30]+0x00000054u,c->r[3]); // 800EE3AC
  c->r[3]=c->r[31]|c->r[31]; // 800EE3B0
  c->lr=0x800EE3B8u; f_8030BD1C(c); // 800EE3B4
  W32(c->r[30]+0x00000058u,c->r[3]); // 800EE3B8
  c->r[3]=c->r[31]|c->r[31]; // 800EE3BC
  c->r[4]=0u+0x00000000u; // 800EE3C0
  c->lr=0x800EE3C8u; f_8030BE30(c); // 800EE3C4
  W32(c->r[30]+0x00000060u,c->r[3]); // 800EE3C8
  c->r[3]=c->r[31]|c->r[31]; // 800EE3CC
  c->lr=0x800EE3D4u; f_8030BD1C(c); // 800EE3D0
  W32(c->r[30]+0x00000064u,c->r[3]); // 800EE3D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE3D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE3DC
  c->lr=c->r[0]; // 800EE3E0
  c->r[1]=c->r[1]+0x00000010u; // 800EE3E4
  return; // 800EE3E8
}

// fn_800EE3EC
void f_800EE3EC(Ctx* __restrict c) {
  trace_call(0x800EE3ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE3EC
  c->r[0]=c->lr; // 800EE3F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE3F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE3F8
  c->r[30]=c->r[3]|c->r[3]; // 800EE3FC
  c->r[31]=c->r[4]|c->r[4]; // 800EE400
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE404
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EE408
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EE40C
  c->r[3]=c->r[4]+0x00000030u; // 800EE410
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EE414
  c->r[4]=c->r[30]+0x00000030u; // 800EE418
  c->lr=0x800EE420u; f_8003AB48(c); // 800EE41C
  c->r[3]=c->r[31]+0x0000003Cu; // 800EE420
  c->r[4]=c->r[30]+0x0000003Cu; // 800EE424
  c->lr=0x800EE42Cu; f_8003AB48(c); // 800EE428
  c->r[3]=c->r[31]+0x00000048u; // 800EE42C
  c->r[4]=c->r[30]+0x00000048u; // 800EE430
  c->lr=0x800EE438u; f_8003AB48(c); // 800EE434
  c->r[3]=c->r[31]+0x00000054u; // 800EE438
  c->r[4]=c->r[30]+0x00000054u; // 800EE43C
  c->lr=0x800EE444u; f_8003AB48(c); // 800EE440
  c->r[3]=c->r[31]+0x00000060u; // 800EE444
  c->r[4]=c->r[30]+0x00000060u; // 800EE448
  c->lr=0x800EE450u; f_8003AB48(c); // 800EE44C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE450
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE454
  c->lr=c->r[0]; // 800EE458
  c->r[1]=c->r[1]+0x00000010u; // 800EE45C
  return; // 800EE460
}

// fn_800EE464
void f_800EE464(Ctx* __restrict c) {
  trace_call(0x800EE464u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EE464
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EE468
  c->ctr=c->r[12]; // 800EE46C
  if (true) { dispatch(c,c->ctr); return; } // 800EE470
}

// fn_800EE474
void f_800EE474(Ctx* __restrict c) {
  trace_call(0x800EE474u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE474
  c->r[0]=c->lr; // 800EE478
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE47C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE480
  c->r[29]=c->r[3]|c->r[3]; // 800EE484
  c->r[30]=c->r[4]|c->r[4]; // 800EE488
  c->r[31]=c->r[5]|c->r[5]; // 800EE48C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EE490
  cmps(c,0,(int32_t)c->r[0],7); // 800EE494
  if (!crb(c,0)) { goto L_800EE4A8; } // 800EE498
  c->r[4]=c->r[31]|c->r[31]; // 800EE49C
  c->r[3]=c->r[3]+0x00000030u; // 800EE4A0
  c->lr=0x800EE4A8u; f_8003A994(c); // 800EE4A4
L_800EE4A8:;
  c->r[4]=c->r[30]|c->r[30]; // 800EE4A8
  c->r[3]=c->r[29]+0x0000003Cu; // 800EE4AC
  c->lr=0x800EE4B4u; f_800D62F4(c); // 800EE4B0
  c->r[4]=c->r[30]|c->r[30]; // 800EE4B4
  c->r[3]=c->r[29]+0x00000048u; // 800EE4B8
  c->lr=0x800EE4C0u; f_800D62F4(c); // 800EE4BC
  c->r[4]=c->r[30]|c->r[30]; // 800EE4C0
  c->r[3]=c->r[29]+0x00000054u; // 800EE4C4
  c->lr=0x800EE4CCu; f_800D62F4(c); // 800EE4C8
  c->r[4]=c->r[30]|c->r[30]; // 800EE4CC
  c->r[3]=c->r[29]+0x00000060u; // 800EE4D0
  c->lr=0x800EE4D8u; f_800D62F4(c); // 800EE4D4
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EE4D8
  c->r[3]=c->r[29]|c->r[29]; // 800EE4DC
  c->r[4]=c->r[30]|c->r[30]; // 800EE4E0
  c->r[5]=c->r[31]|c->r[31]; // 800EE4E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE4E8
  c->ctr=c->r[12]; // 800EE4EC
  if (true) { c->lr=0x800EE4F4u; dispatch(c,c->ctr); } // 800EE4F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE4F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE4F8
  c->lr=c->r[0]; // 800EE4FC
  c->r[1]=c->r[1]+0x00000020u; // 800EE500
  return; // 800EE504
}

// fn_800EE508
void f_800EE508(Ctx* __restrict c) {
  trace_call(0x800EE508u);
  c->r[3]=0u+0x80410000u; // 800EE508
  c->r[3]=c->r[3]+0xFFFFE6D8u; // 800EE50C
  return; // 800EE510
}

// fn_800EE514
void f_800EE514(Ctx* __restrict c) {
  trace_call(0x800EE514u);
  c->r[3]=0u+0x0000006Cu; // 800EE514
  return; // 800EE518
}

// fn_800EE51C
void f_800EE51C(Ctx* __restrict c) {
  trace_call(0x800EE51Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE51C
  c->r[0]=c->lr; // 800EE520
  c->r[3]=0u+0x0000006Cu; // 800EE524
  c->r[4]=c->r[13]+0xFFFFB9B1u; // 800EE528
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE52C
  c->r[5]=0u+0x00000000u; // 800EE530
  c->r[6]=0u+0x00001001u; // 800EE534
  c->lr=0x800EE53Cu; f_80244D20(c); // 800EE538
  cmps(c,0,(int32_t)c->r[3],0); // 800EE53C
  if (crb(c,2)) { goto L_800EE548; } // 800EE540
  c->lr=0x800EE548u; f_800EE2D0(c); // 800EE544
L_800EE548:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE548
  c->lr=c->r[0]; // 800EE54C
  c->r[1]=c->r[1]+0x00000010u; // 800EE550
  return; // 800EE554
}

// fn_800EE558
void f_800EE558(Ctx* __restrict c) {
  trace_call(0x800EE558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE558
  c->r[0]=c->lr; // 800EE55C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE564
  c->r[31]=c->r[3]|c->r[3]; // 800EE568
  c->lr=0x800EE570u; f_800D7120(c); // 800EE56C
  c->r[5]=0u+0x80410000u; // 800EE570
  c->r[3]=0u+0xF9EA0000u; // 800EE574
  c->r[0]=c->r[3]+0xFFFF9100u; // 800EE578
  c->r[4]=0u+0x00000000u; // 800EE57C
  c->r[5]=c->r[5]+0x00005184u; // 800EE580
  W32(c->r[31]+0x00000008u,c->r[5]); // 800EE584
  c->r[3]=c->r[31]|c->r[31]; // 800EE588
  W32(c->r[31]+0x00000038u,c->r[4]); // 800EE58C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EE590
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE594
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE598
  c->lr=c->r[0]; // 800EE59C
  c->r[1]=c->r[1]+0x00000010u; // 800EE5A0
  return; // 800EE5A4
}

// fn_800EE5A8
void f_800EE5A8(Ctx* __restrict c) {
  trace_call(0x800EE5A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE5A8
  c->r[0]=c->lr; // 800EE5AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE5B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE5B4
  c->r[30]=c->r[3]|c->r[3]; // 800EE5B8
  c->r[31]=c->r[4]|c->r[4]; // 800EE5BC
  c->lr=0x800EE5C4u; f_8030D728(c); // 800EE5C0
  c->r[3]=c->r[31]|c->r[31]; // 800EE5C4
  c->r[4]=0u+0x00000000u; // 800EE5C8
  c->lr=0x800EE5D0u; f_8030BE30(c); // 800EE5CC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800EE5D0
  c->r[3]=c->r[31]|c->r[31]; // 800EE5D4
  c->lr=0x800EE5DCu; f_8030BD1C(c); // 800EE5D8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800EE5DC
  c->r[3]=c->r[31]|c->r[31]; // 800EE5E0
  c->lr=0x800EE5E8u; f_8030BD1C(c); // 800EE5E4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800EE5E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE5EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE5F0
  c->lr=c->r[0]; // 800EE5F4
  c->r[1]=c->r[1]+0x00000010u; // 800EE5F8
  return; // 800EE5FC
}

// fn_800EE600
void f_800EE600(Ctx* __restrict c) {
  trace_call(0x800EE600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE600
  c->r[0]=c->lr; // 800EE604
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE608
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE60C
  c->r[30]=c->r[3]|c->r[3]; // 800EE610
  c->r[31]=c->r[4]|c->r[4]; // 800EE614
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE618
  W32(c->r[4]+0x00000000u,c->r[0]); // 800EE61C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800EE620
  c->r[3]=c->r[4]+0x00000030u; // 800EE624
  W32(c->r[4]+0x00000004u,c->r[0]); // 800EE628
  c->r[4]=c->r[30]+0x00000030u; // 800EE62C
  c->lr=0x800EE634u; f_8003AB48(c); // 800EE630
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800EE634
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800EE638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE63C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE640
  c->lr=c->r[0]; // 800EE644
  c->r[1]=c->r[1]+0x00000010u; // 800EE648
  return; // 800EE64C
}

// fn_800EE650
void f_800EE650(Ctx* __restrict c) {
  trace_call(0x800EE650u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800EE650
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EE654
  c->ctr=c->r[12]; // 800EE658
  if (true) { dispatch(c,c->ctr); return; } // 800EE65C
}

// fn_800EE660
void f_800EE660(Ctx* __restrict c) {
  trace_call(0x800EE660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE660
  c->r[0]=c->lr; // 800EE664
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE668
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE66C
  c->r[29]=c->r[3]|c->r[3]; // 800EE670
  c->r[30]=c->r[4]|c->r[4]; // 800EE674
  c->r[31]=c->r[5]|c->r[5]; // 800EE678
  c->r[0]=R32(c->r[3]+0x00000034u); // 800EE67C
  cmps(c,0,(int32_t)c->r[0],7); // 800EE680
  if (!crb(c,0)) { goto L_800EE694; } // 800EE684
  c->r[4]=c->r[31]|c->r[31]; // 800EE688
  c->r[3]=c->r[3]+0x00000030u; // 800EE68C
  c->lr=0x800EE694u; f_8003A994(c); // 800EE690
L_800EE694:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EE694
  c->r[3]=c->r[29]|c->r[29]; // 800EE698
  c->r[4]=c->r[30]|c->r[30]; // 800EE69C
  c->r[5]=c->r[31]|c->r[31]; // 800EE6A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE6A4
  c->ctr=c->r[12]; // 800EE6A8
  if (true) { c->lr=0x800EE6B0u; dispatch(c,c->ctr); } // 800EE6AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE6B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE6B4
  c->lr=c->r[0]; // 800EE6B8
  c->r[1]=c->r[1]+0x00000020u; // 800EE6BC
  return; // 800EE6C0
}

// fn_800EE6C4
void f_800EE6C4(Ctx* __restrict c) {
  trace_call(0x800EE6C4u);
  c->r[3]=0u+0x80410000u; // 800EE6C4
  c->r[3]=c->r[3]+0xFFFFE6F4u; // 800EE6C8
  return; // 800EE6CC
}

// fn_800EE6D0
void f_800EE6D0(Ctx* __restrict c) {
  trace_call(0x800EE6D0u);
  c->r[3]=0u+0x00000040u; // 800EE6D0
  return; // 800EE6D4
}

// fn_800EE6D8
void f_800EE6D8(Ctx* __restrict c) {
  trace_call(0x800EE6D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE6D8
  c->r[0]=c->lr; // 800EE6DC
  c->r[3]=0u+0x00000040u; // 800EE6E0
  c->r[4]=c->r[13]+0xFFFFB9B6u; // 800EE6E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE6E8
  c->r[5]=0u+0x00000000u; // 800EE6EC
  c->r[6]=0u+0x00001001u; // 800EE6F0
  c->lr=0x800EE6F8u; f_80244D20(c); // 800EE6F4
  cmps(c,0,(int32_t)c->r[3],0); // 800EE6F8
  if (crb(c,2)) { goto L_800EE704; } // 800EE6FC
  c->lr=0x800EE704u; f_800EE558(c); // 800EE700
L_800EE704:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE704
  c->lr=c->r[0]; // 800EE708
  c->r[1]=c->r[1]+0x00000010u; // 800EE70C
  return; // 800EE710
}

// fn_800EE714
void f_800EE714(Ctx* __restrict c) {
  trace_call(0x800EE714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE714
  c->r[0]=c->lr; // 800EE718
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE71C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE720
  c->r[31]=c->r[3]|c->r[3]; // 800EE724
  c->lr=0x800EE72Cu; f_800D7120(c); // 800EE728
  c->r[4]=0u+0x80410000u; // 800EE72C
  c->r[3]=0u+0xDFD50000u; // 800EE730
  c->r[0]=c->r[3]+0x00004C73u; // 800EE734
  W32(c->r[31]+0x00000004u,c->r[0]); // 800EE738
  c->r[4]=c->r[4]+0x00005150u; // 800EE73C
  c->r[3]=c->r[31]|c->r[31]; // 800EE740
  W32(c->r[31]+0x00000008u,c->r[4]); // 800EE744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE748
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE74C
  c->lr=c->r[0]; // 800EE750
  c->r[1]=c->r[1]+0x00000010u; // 800EE754
  return; // 800EE758
}

// fn_800EE75C
void f_800EE75C(Ctx* __restrict c) {
  trace_call(0x800EE75Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE75C
  c->r[0]=c->lr; // 800EE760
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE764
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800EE768
  c->r[30]=c->r[3]|c->r[3]; // 800EE76C
  c->r[31]=c->r[4]|c->r[4]; // 800EE770
  c->lr=0x800EE778u; f_8030D728(c); // 800EE774
  c->r[3]=c->r[31]|c->r[31]; // 800EE778
  c->r[4]=c->r[30]+0x00000030u; // 800EE77C
  c->r[5]=0u+0x00000000u; // 800EE780
  c->lr=0x800EE788u; f_8030B7F0(c); // 800EE784
  c->r[3]=c->r[31]|c->r[31]; // 800EE788
  c->lr=0x800EE790u; f_8030BD1C(c); // 800EE78C
  W8(c->r[30]+0x000000B0u,c->r[3]); // 800EE790
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800EE794
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE798
  c->lr=c->r[0]; // 800EE79C
  c->r[1]=c->r[1]+0x00000010u; // 800EE7A0
  return; // 800EE7A4
}

