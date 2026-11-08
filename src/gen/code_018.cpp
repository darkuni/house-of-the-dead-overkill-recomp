#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800D7B84
void f_800D7B84(Ctx* __restrict c) {
  trace_call(0x800D7B84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7B84
  c->r[0]=c->lr; // 800D7B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7B8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7B90
  c->r[30]=c->r[3]|c->r[3]; // 800D7B94
  c->r[31]=c->r[4]|c->r[4]; // 800D7B98
  c->lr=0x800D7BA0u; f_8030D728(c); // 800D7B9C
  c->r[3]=c->r[31]|c->r[31]; // 800D7BA0
  c->r[4]=0u+0x00000000u; // 800D7BA4
  c->lr=0x800D7BACu; f_8030BE30(c); // 800D7BA8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D7BAC
  c->r[3]=c->r[31]|c->r[31]; // 800D7BB0
  c->lr=0x800D7BB8u; f_8030BD1C(c); // 800D7BB4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D7BB8
  c->r[3]=c->r[31]|c->r[31]; // 800D7BBC
  c->lr=0x800D7BC4u; f_8030BD1C(c); // 800D7BC0
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D7BC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7BC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7BCC
  c->lr=c->r[0]; // 800D7BD0
  c->r[1]=c->r[1]+0x00000010u; // 800D7BD4
  return; // 800D7BD8
}

// fn_800D7BDC
void f_800D7BDC(Ctx* __restrict c) {
  trace_call(0x800D7BDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7BDC
  c->r[0]=c->lr; // 800D7BE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7BE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7BE8
  c->r[30]=c->r[3]|c->r[3]; // 800D7BEC
  c->r[31]=c->r[4]|c->r[4]; // 800D7BF0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7BF4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D7BF8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7BFC
  c->r[3]=c->r[4]+0x00000030u; // 800D7C00
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D7C04
  c->r[4]=c->r[30]+0x00000030u; // 800D7C08
  c->lr=0x800D7C10u; f_8003AB48(c); // 800D7C0C
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800D7C10
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800D7C14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7C18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7C1C
  c->lr=c->r[0]; // 800D7C20
  c->r[1]=c->r[1]+0x00000010u; // 800D7C24
  return; // 800D7C28
}

// fn_800D7C2C
void f_800D7C2C(Ctx* __restrict c) {
  trace_call(0x800D7C2Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7C2C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7C30
  c->ctr=c->r[12]; // 800D7C34
  if (true) { dispatch(c,c->ctr); return; } // 800D7C38
}

// fn_800D7C3C
void f_800D7C3C(Ctx* __restrict c) {
  trace_call(0x800D7C3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7C3C
  c->r[0]=c->lr; // 800D7C40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7C44
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7C48
  c->r[29]=c->r[3]|c->r[3]; // 800D7C4C
  c->r[30]=c->r[4]|c->r[4]; // 800D7C50
  c->r[31]=c->r[5]|c->r[5]; // 800D7C54
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D7C58
  cmps(c,0,(int32_t)c->r[0],7); // 800D7C5C
  if (!crb(c,0)) { goto L_800D7C70; } // 800D7C60
  c->r[4]=c->r[31]|c->r[31]; // 800D7C64
  c->r[3]=c->r[3]+0x00000030u; // 800D7C68
  c->lr=0x800D7C70u; f_8003A994(c); // 800D7C6C
L_800D7C70:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D7C70
  c->r[3]=c->r[29]|c->r[29]; // 800D7C74
  c->r[4]=c->r[30]|c->r[30]; // 800D7C78
  c->r[5]=c->r[31]|c->r[31]; // 800D7C7C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7C80
  c->ctr=c->r[12]; // 800D7C84
  if (true) { c->lr=0x800D7C8Cu; dispatch(c,c->ctr); } // 800D7C88
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7C8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7C90
  c->lr=c->r[0]; // 800D7C94
  c->r[1]=c->r[1]+0x00000020u; // 800D7C98
  return; // 800D7C9C
}

// fn_800D7CA0
void f_800D7CA0(Ctx* __restrict c) {
  trace_call(0x800D7CA0u);
  c->r[3]=0u+0x80410000u; // 800D7CA0
  c->r[3]=c->r[3]+0xFFFFD68Au; // 800D7CA4
  return; // 800D7CA8
}

// fn_800D7CAC
void f_800D7CAC(Ctx* __restrict c) {
  trace_call(0x800D7CACu);
  c->r[3]=0u+0x00000040u; // 800D7CAC
  return; // 800D7CB0
}

// fn_800D7CB4
void f_800D7CB4(Ctx* __restrict c) {
  trace_call(0x800D7CB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7CB4
  c->r[0]=c->lr; // 800D7CB8
  c->r[3]=0u+0x00000040u; // 800D7CBC
  c->r[4]=c->r[13]+0xFFFFB52Fu; // 800D7CC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7CC4
  c->r[5]=0u+0x00000000u; // 800D7CC8
  c->r[6]=0u+0x00001001u; // 800D7CCC
  c->lr=0x800D7CD4u; f_80244D20(c); // 800D7CD0
  cmps(c,0,(int32_t)c->r[3],0); // 800D7CD4
  if (crb(c,2)) { goto L_800D7CE0; } // 800D7CD8
  c->lr=0x800D7CE0u; f_800D7B34(c); // 800D7CDC
L_800D7CE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7CE0
  c->lr=c->r[0]; // 800D7CE4
  c->r[1]=c->r[1]+0x00000010u; // 800D7CE8
  return; // 800D7CEC
}

// fn_800D7CF0
void f_800D7CF0(Ctx* __restrict c) {
  trace_call(0x800D7CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7CF0
  c->r[0]=c->lr; // 800D7CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7CF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7CFC
  c->r[31]=c->r[3]|c->r[3]; // 800D7D00
  c->lr=0x800D7D08u; f_800D7120(c); // 800D7D04
  c->r[4]=0u+0x80410000u; // 800D7D08
  c->r[3]=0u+0xBC1A0000u; // 800D7D0C
  c->r[0]=c->r[3]+0x000028D9u; // 800D7D10
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7D14
  c->r[4]=c->r[4]+0x00007E34u; // 800D7D18
  c->r[3]=c->r[31]|c->r[31]; // 800D7D1C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800D7D20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7D24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7D28
  c->lr=c->r[0]; // 800D7D2C
  c->r[1]=c->r[1]+0x00000010u; // 800D7D30
  return; // 800D7D34
}

// fn_800D7D38
void f_800D7D38(Ctx* __restrict c) {
  trace_call(0x800D7D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7D38
  c->r[0]=c->lr; // 800D7D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7D40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7D44
  c->r[30]=c->r[3]|c->r[3]; // 800D7D48
  c->r[31]=c->r[4]|c->r[4]; // 800D7D4C
  c->lr=0x800D7D54u; f_8030D728(c); // 800D7D50
  c->r[3]=c->r[31]|c->r[31]; // 800D7D54
  c->lr=0x800D7D5Cu; f_8030BD1C(c); // 800D7D58
  W8(c->r[30]+0x00000030u,c->r[3]); // 800D7D5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7D64
  c->lr=c->r[0]; // 800D7D68
  c->r[1]=c->r[1]+0x00000010u; // 800D7D6C
  return; // 800D7D70
}

// fn_800D7D74
void f_800D7D74(Ctx* __restrict c) {
  trace_call(0x800D7D74u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D7D74
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D7D78
  c->r[0]=R8(c->r[3]+0x00000030u); // 800D7D7C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D7D80
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D7D84
  W8(c->r[4]+0x00000030u,c->r[0]); // 800D7D88
  return; // 800D7D8C
}

// fn_800D7D90
void f_800D7D90(Ctx* __restrict c) {
  trace_call(0x800D7D90u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7D90
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7D94
  c->ctr=c->r[12]; // 800D7D98
  if (true) { dispatch(c,c->ctr); return; } // 800D7D9C
}

// fn_800D7DA0
void f_800D7DA0(Ctx* __restrict c) {
  trace_call(0x800D7DA0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7DA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7DA4
  c->ctr=c->r[12]; // 800D7DA8
  if (true) { dispatch(c,c->ctr); return; } // 800D7DAC
}

// fn_800D7DB0
void f_800D7DB0(Ctx* __restrict c) {
  trace_call(0x800D7DB0u);
  c->r[3]=0u+0x80410000u; // 800D7DB0
  c->r[3]=c->r[3]+0xFFFFD69Au; // 800D7DB4
  return; // 800D7DB8
}

// fn_800D7DBC
void f_800D7DBC(Ctx* __restrict c) {
  trace_call(0x800D7DBCu);
  c->r[3]=0u+0x00000034u; // 800D7DBC
  return; // 800D7DC0
}

// fn_800D7DC4
void f_800D7DC4(Ctx* __restrict c) {
  trace_call(0x800D7DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7DC4
  c->r[0]=c->lr; // 800D7DC8
  c->r[3]=0u+0x00000034u; // 800D7DCC
  c->r[4]=c->r[13]+0xFFFFB534u; // 800D7DD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7DD4
  c->r[5]=0u+0x00000000u; // 800D7DD8
  c->r[6]=0u+0x00001001u; // 800D7DDC
  c->lr=0x800D7DE4u; f_80244D20(c); // 800D7DE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D7DE4
  if (crb(c,2)) { goto L_800D7DF0; } // 800D7DE8
  c->lr=0x800D7DF0u; f_800D7CF0(c); // 800D7DEC
L_800D7DF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7DF0
  c->lr=c->r[0]; // 800D7DF4
  c->r[1]=c->r[1]+0x00000010u; // 800D7DF8
  return; // 800D7DFC
}

// fn_800D7E00
void f_800D7E00(Ctx* __restrict c) {
  trace_call(0x800D7E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7E00
  c->r[0]=c->lr; // 800D7E04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7E08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7E0C
  c->r[31]=c->r[3]|c->r[3]; // 800D7E10
  c->lr=0x800D7E18u; f_800D7120(c); // 800D7E14
  c->r[3]=0u+0x80410000u; // 800D7E18
  c->r[0]=0u+0x00000000u; // 800D7E1C
  c->r[3]=c->r[3]+0x00007E00u; // 800D7E20
  W32(c->r[31]+0x00000008u,c->r[3]); // 800D7E24
  c->r[3]=c->r[31]|c->r[31]; // 800D7E28
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7E2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7E30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7E34
  c->lr=c->r[0]; // 800D7E38
  c->r[1]=c->r[1]+0x00000010u; // 800D7E3C
  return; // 800D7E40
}

// fn_800D7E44
void f_800D7E44(Ctx* __restrict c) {
  trace_call(0x800D7E44u);
  f_8030D728(c); return; // 800D7E44
}

// fn_800D7E48
void f_800D7E48(Ctx* __restrict c) {
  trace_call(0x800D7E48u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D7E48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7E4C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D7E50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D7E54
  return; // 800D7E58
}

// fn_800D7E5C
void f_800D7E5C(Ctx* __restrict c) {
  trace_call(0x800D7E5Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7E5C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7E60
  c->ctr=c->r[12]; // 800D7E64
  if (true) { dispatch(c,c->ctr); return; } // 800D7E68
}

// fn_800D7E6C
void f_800D7E6C(Ctx* __restrict c) {
  trace_call(0x800D7E6Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7E6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7E70
  c->ctr=c->r[12]; // 800D7E74
  if (true) { dispatch(c,c->ctr); return; } // 800D7E78
}

// fn_800D7E7C
void f_800D7E7C(Ctx* __restrict c) {
  trace_call(0x800D7E7Cu);
  c->r[3]=0u+0x80410000u; // 800D7E7C
  c->r[3]=c->r[3]+0xFFFFD6B0u; // 800D7E80
  return; // 800D7E84
}

// fn_800D7E88
void f_800D7E88(Ctx* __restrict c) {
  trace_call(0x800D7E88u);
  c->r[3]=0u+0x00000030u; // 800D7E88
  return; // 800D7E8C
}

// fn_800D7E90
void f_800D7E90(Ctx* __restrict c) {
  trace_call(0x800D7E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7E90
  c->r[0]=c->lr; // 800D7E94
  c->r[3]=0u+0x00000030u; // 800D7E98
  c->r[4]=c->r[13]+0xFFFFB539u; // 800D7E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7EA0
  c->r[5]=0u+0x00000000u; // 800D7EA4
  c->r[6]=0u+0x00001001u; // 800D7EA8
  c->lr=0x800D7EB0u; f_80244D20(c); // 800D7EAC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7EB0
  if (crb(c,2)) { goto L_800D7EBC; } // 800D7EB4
  c->lr=0x800D7EBCu; f_800D7E00(c); // 800D7EB8
L_800D7EBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7EBC
  c->lr=c->r[0]; // 800D7EC0
  c->r[1]=c->r[1]+0x00000010u; // 800D7EC4
  return; // 800D7EC8
}

// fn_800D7ECC
void f_800D7ECC(Ctx* __restrict c) {
  trace_call(0x800D7ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7ECC
  c->r[0]=c->lr; // 800D7ED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7ED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7ED8
  c->r[31]=c->r[3]|c->r[3]; // 800D7EDC
  c->lr=0x800D7EE4u; f_800D7120(c); // 800D7EE0
  c->r[5]=0u+0x80410000u; // 800D7EE4
  c->r[3]=0u+0x4CB40000u; // 800D7EE8
  c->r[0]=c->r[3]+0x0000540Du; // 800D7EEC
  c->r[4]=0u+0x00000000u; // 800D7EF0
  c->r[5]=c->r[5]+0x00007DCCu; // 800D7EF4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D7EF8
  c->r[3]=c->r[31]|c->r[31]; // 800D7EFC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D7F00
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7F04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7F08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7F0C
  c->lr=c->r[0]; // 800D7F10
  c->r[1]=c->r[1]+0x00000010u; // 800D7F14
  return; // 800D7F18
}

// fn_800D7F1C
void f_800D7F1C(Ctx* __restrict c) {
  trace_call(0x800D7F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7F1C
  c->r[0]=c->lr; // 800D7F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7F24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7F28
  c->r[30]=c->r[3]|c->r[3]; // 800D7F2C
  c->r[31]=c->r[4]|c->r[4]; // 800D7F30
  c->lr=0x800D7F38u; f_8030D728(c); // 800D7F34
  c->r[3]=c->r[31]|c->r[31]; // 800D7F38
  c->r[4]=0u+0x00000000u; // 800D7F3C
  c->lr=0x800D7F44u; f_8030BE30(c); // 800D7F40
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D7F44
  c->r[3]=c->r[31]|c->r[31]; // 800D7F48
  c->lr=0x800D7F50u; f_8030BD1C(c); // 800D7F4C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D7F50
  c->r[3]=c->r[31]|c->r[31]; // 800D7F54
  c->lr=0x800D7F5Cu; f_8030BD1C(c); // 800D7F58
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800D7F5C
  c->r[3]=c->r[31]|c->r[31]; // 800D7F60
  c->lr=0x800D7F68u; f_8030C0A0(c); // 800D7F64
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800D7F68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7F6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7F70
  c->lr=c->r[0]; // 800D7F74
  c->r[1]=c->r[1]+0x00000010u; // 800D7F78
  return; // 800D7F7C
}

// fn_800D7F80
void f_800D7F80(Ctx* __restrict c) {
  trace_call(0x800D7F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7F80
  c->r[0]=c->lr; // 800D7F84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7F88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7F8C
  c->r[31]=c->r[4]|c->r[4]; // 800D7F90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7F94
  c->r[30]=c->r[3]|c->r[3]; // 800D7F98
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7F9C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D7FA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7FA4
  c->r[3]=c->r[4]+0x00000030u; // 800D7FA8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D7FAC
  c->r[4]=c->r[30]+0x00000030u; // 800D7FB0
  c->lr=0x800D7FB8u; f_8003AB48(c); // 800D7FB4
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800D7FB8
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800D7FBC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7FC0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800D7FC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7FC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7FCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7FD0
  c->lr=c->r[0]; // 800D7FD4
  c->r[1]=c->r[1]+0x00000010u; // 800D7FD8
  return; // 800D7FDC
}

// fn_800D7FE0
void f_800D7FE0(Ctx* __restrict c) {
  trace_call(0x800D7FE0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7FE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7FE4
  c->ctr=c->r[12]; // 800D7FE8
  if (true) { dispatch(c,c->ctr); return; } // 800D7FEC
}

// fn_800D7FF0
void f_800D7FF0(Ctx* __restrict c) {
  trace_call(0x800D7FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7FF0
  c->r[0]=c->lr; // 800D7FF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7FF8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7FFC
  c->r[29]=c->r[3]|c->r[3]; // 800D8000
  c->r[30]=c->r[4]|c->r[4]; // 800D8004
  c->r[31]=c->r[5]|c->r[5]; // 800D8008
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D800C
  cmps(c,0,(int32_t)c->r[0],7); // 800D8010
  if (!crb(c,0)) { goto L_800D8024; } // 800D8014
  c->r[4]=c->r[31]|c->r[31]; // 800D8018
  c->r[3]=c->r[3]+0x00000030u; // 800D801C
  c->lr=0x800D8024u; f_8003A994(c); // 800D8020
L_800D8024:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8024
  c->r[3]=c->r[29]|c->r[29]; // 800D8028
  c->r[4]=c->r[30]|c->r[30]; // 800D802C
  c->r[5]=c->r[31]|c->r[31]; // 800D8030
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D8034
  c->ctr=c->r[12]; // 800D8038
  if (true) { c->lr=0x800D8040u; dispatch(c,c->ctr); } // 800D803C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8040
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8044
  c->lr=c->r[0]; // 800D8048
  c->r[1]=c->r[1]+0x00000020u; // 800D804C
  return; // 800D8050
}

// fn_800D8054
void f_800D8054(Ctx* __restrict c) {
  trace_call(0x800D8054u);
  c->r[3]=0u+0x80410000u; // 800D8054
  c->r[3]=c->r[3]+0xFFFFD6C9u; // 800D8058
  return; // 800D805C
}

// fn_800D8060
void f_800D8060(Ctx* __restrict c) {
  trace_call(0x800D8060u);
  c->r[3]=0u+0x00000044u; // 800D8060
  return; // 800D8064
}

// fn_800D8068
void f_800D8068(Ctx* __restrict c) {
  trace_call(0x800D8068u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8068
  c->r[0]=c->lr; // 800D806C
  c->r[3]=0u+0x00000044u; // 800D8070
  c->r[4]=c->r[13]+0xFFFFB53Eu; // 800D8074
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8078
  c->r[5]=0u+0x00000000u; // 800D807C
  c->r[6]=0u+0x00001001u; // 800D8080
  c->lr=0x800D8088u; f_80244D20(c); // 800D8084
  cmps(c,0,(int32_t)c->r[3],0); // 800D8088
  if (crb(c,2)) { goto L_800D8094; } // 800D808C
  c->lr=0x800D8094u; f_800D7ECC(c); // 800D8090
L_800D8094:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8094
  c->lr=c->r[0]; // 800D8098
  c->r[1]=c->r[1]+0x00000010u; // 800D809C
  return; // 800D80A0
}

// fn_800D80A4
void f_800D80A4(Ctx* __restrict c) {
  trace_call(0x800D80A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D80A4
  c->r[0]=c->lr; // 800D80A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D80AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D80B0
  c->r[31]=c->r[3]|c->r[3]; // 800D80B4
  c->lr=0x800D80BCu; f_800D7120(c); // 800D80B8
  c->r[5]=0u+0x80410000u; // 800D80BC
  c->r[3]=0u+0x8F6B0000u; // 800D80C0
  c->r[4]=0u+0x00000000u; // 800D80C4
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800D80C8
  c->r[0]=c->r[3]+0x00006347u; // 800D80CC
  c->r[5]=c->r[5]+0x00007D98u; // 800D80D0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D80D4
  c->r[3]=c->r[31]|c->r[31]; // 800D80D8
  W32(c->r[31]+0x0000004Cu,c->r[4]); // 800D80DC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D80E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D80E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D80E8
  c->lr=c->r[0]; // 800D80EC
  c->r[1]=c->r[1]+0x00000010u; // 800D80F0
  return; // 800D80F4
}

// fn_800D80F8
void f_800D80F8(Ctx* __restrict c) {
  trace_call(0x800D80F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D80F8
  c->r[0]=c->lr; // 800D80FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8100
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8104
  c->r[30]=c->r[3]|c->r[3]; // 800D8108
  c->r[31]=c->r[4]|c->r[4]; // 800D810C
  c->lr=0x800D8114u; f_8030D728(c); // 800D8110
  c->r[3]=c->r[31]|c->r[31]; // 800D8114
  c->lr=0x800D811Cu; f_8030BD1C(c); // 800D8118
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D811C
  c->r[3]=c->r[31]|c->r[31]; // 800D8120
  c->r[4]=0u+0x00000000u; // 800D8124
  c->lr=0x800D812Cu; f_8030BE30(c); // 800D8128
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D812C
  c->r[3]=c->r[31]|c->r[31]; // 800D8130
  c->lr=0x800D8138u; f_8030BD1C(c); // 800D8134
  W32(c->r[30]+0x00000038u,c->r[3]); // 800D8138
  c->r[3]=c->r[31]|c->r[31]; // 800D813C
  c->lr=0x800D8144u; f_8030BD1C(c); // 800D8140
  W8(c->r[30]+0x00000040u,c->r[3]); // 800D8144
  c->r[3]=c->r[31]|c->r[31]; // 800D8148
  c->r[4]=0u+0x00000000u; // 800D814C
  c->lr=0x800D8154u; f_8030BE30(c); // 800D8150
  W32(c->r[30]+0x00000044u,c->r[3]); // 800D8154
  c->r[3]=c->r[31]|c->r[31]; // 800D8158
  c->lr=0x800D8160u; f_8030BD1C(c); // 800D815C
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D8160
  c->r[3]=c->r[31]|c->r[31]; // 800D8164
  c->lr=0x800D816Cu; f_8030BD1C(c); // 800D8168
  W8(c->r[30]+0x00000050u,c->r[3]); // 800D816C
  c->r[3]=c->r[31]|c->r[31]; // 800D8170
  c->lr=0x800D8178u; f_8030BD1C(c); // 800D8174
  W32(c->r[30]+0x00000054u,c->r[3]); // 800D8178
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D817C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8180
  c->lr=c->r[0]; // 800D8184
  c->r[1]=c->r[1]+0x00000010u; // 800D8188
  return; // 800D818C
}

// fn_800D8190
void f_800D8190(Ctx* __restrict c) {
  trace_call(0x800D8190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8190
  c->r[0]=c->lr; // 800D8194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8198
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D819C
  c->r[30]=c->r[3]|c->r[3]; // 800D81A0
  c->r[31]=c->r[4]|c->r[4]; // 800D81A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D81A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D81AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D81B0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D81B4
  c->r[0]=R32(c->r[3]+0x00000030u); // 800D81B8
  c->r[3]=c->r[4]+0x00000034u; // 800D81BC
  W32(c->r[4]+0x00000030u,c->r[0]); // 800D81C0
  c->r[4]=c->r[30]+0x00000034u; // 800D81C4
  c->lr=0x800D81CCu; f_8003AB48(c); // 800D81C8
  c->r[0]=R8(c->r[30]+0x00000040u); // 800D81CC
  c->r[3]=c->r[31]+0x00000044u; // 800D81D0
  W8(c->r[31]+0x00000040u,c->r[0]); // 800D81D4
  c->r[4]=c->r[30]+0x00000044u; // 800D81D8
  c->lr=0x800D81E0u; f_8003AB48(c); // 800D81DC
  c->r[0]=R8(c->r[30]+0x00000050u); // 800D81E0
  W8(c->r[31]+0x00000050u,c->r[0]); // 800D81E4
  c->r[0]=R32(c->r[30]+0x00000054u); // 800D81E8
  W32(c->r[31]+0x00000054u,c->r[0]); // 800D81EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D81F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D81F4
  c->lr=c->r[0]; // 800D81F8
  c->r[1]=c->r[1]+0x00000010u; // 800D81FC
  return; // 800D8200
}

// fn_800D8204
void f_800D8204(Ctx* __restrict c) {
  trace_call(0x800D8204u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D8204
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8208
  c->ctr=c->r[12]; // 800D820C
  if (true) { dispatch(c,c->ctr); return; } // 800D8210
}

// fn_800D8214
void f_800D8214(Ctx* __restrict c) {
  trace_call(0x800D8214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8214
  c->r[0]=c->lr; // 800D8218
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D821C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8220
  c->r[29]=c->r[3]|c->r[3]; // 800D8224
  c->r[30]=c->r[4]|c->r[4]; // 800D8228
  c->r[31]=c->r[5]|c->r[5]; // 800D822C
  c->r[0]=R32(c->r[3]+0x00000038u); // 800D8230
  cmps(c,0,(int32_t)c->r[0],7); // 800D8234
  if (!crb(c,0)) { goto L_800D8248; } // 800D8238
  c->r[4]=c->r[31]|c->r[31]; // 800D823C
  c->r[3]=c->r[3]+0x00000034u; // 800D8240
  c->lr=0x800D8248u; f_8003A994(c); // 800D8244
L_800D8248:;
  c->r[0]=R32(c->r[29]+0x00000048u); // 800D8248
  cmps(c,0,(int32_t)c->r[0],7); // 800D824C
  if (!crb(c,0)) { goto L_800D8260; } // 800D8250
  c->r[4]=c->r[31]|c->r[31]; // 800D8254
  c->r[3]=c->r[29]+0x00000044u; // 800D8258
  c->lr=0x800D8260u; f_8003A994(c); // 800D825C
L_800D8260:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8260
  c->r[3]=c->r[29]|c->r[29]; // 800D8264
  c->r[4]=c->r[30]|c->r[30]; // 800D8268
  c->r[5]=c->r[31]|c->r[31]; // 800D826C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D8270
  c->ctr=c->r[12]; // 800D8274
  if (true) { c->lr=0x800D827Cu; dispatch(c,c->ctr); } // 800D8278
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D827C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8280
  c->lr=c->r[0]; // 800D8284
  c->r[1]=c->r[1]+0x00000020u; // 800D8288
  return; // 800D828C
}

// fn_800D8290
void f_800D8290(Ctx* __restrict c) {
  trace_call(0x800D8290u);
  c->r[3]=0u+0x80410000u; // 800D8290
  c->r[3]=c->r[3]+0xFFFFD6D5u; // 800D8294
  return; // 800D8298
}

// fn_800D829C
void f_800D829C(Ctx* __restrict c) {
  trace_call(0x800D829Cu);
  c->r[3]=0u+0x00000058u; // 800D829C
  return; // 800D82A0
}

// fn_800D82A4
void f_800D82A4(Ctx* __restrict c) {
  trace_call(0x800D82A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D82A4
  c->r[0]=c->lr; // 800D82A8
  c->r[3]=0u+0x00000058u; // 800D82AC
  c->r[4]=c->r[13]+0xFFFFB543u; // 800D82B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D82B4
  c->r[5]=0u+0x00000000u; // 800D82B8
  c->r[6]=0u+0x00001001u; // 800D82BC
  c->lr=0x800D82C4u; f_80244D20(c); // 800D82C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D82C4
  if (crb(c,2)) { goto L_800D82D0; } // 800D82C8
  c->lr=0x800D82D0u; f_800D80A4(c); // 800D82CC
L_800D82D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D82D0
  c->lr=c->r[0]; // 800D82D4
  c->r[1]=c->r[1]+0x00000010u; // 800D82D8
  return; // 800D82DC
}

// fn_800D82E0
void f_800D82E0(Ctx* __restrict c) {
  trace_call(0x800D82E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D82E0
  c->r[0]=c->lr; // 800D82E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D82E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D82EC
  c->r[31]=c->r[3]|c->r[3]; // 800D82F0
  c->lr=0x800D82F8u; f_800D7120(c); // 800D82F4
  c->r[5]=0u+0x80410000u; // 800D82F8
  c->r[3]=0u+0x9B830000u; // 800D82FC
  c->r[4]=0u+0x00000000u; // 800D8300
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D8304
  c->r[0]=c->r[3]+0x000056FDu; // 800D8308
  c->r[5]=c->r[5]+0x00007D64u; // 800D830C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D8310
  c->r[3]=c->r[31]|c->r[31]; // 800D8314
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D8318
  W32(c->r[31]+0x00000050u,c->r[4]); // 800D831C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D8320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8324
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8328
  c->lr=c->r[0]; // 800D832C
  c->r[1]=c->r[1]+0x00000010u; // 800D8330
  return; // 800D8334
}

// fn_800D8338
void f_800D8338(Ctx* __restrict c) {
  trace_call(0x800D8338u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8338
  c->r[0]=c->lr; // 800D833C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8340
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8344
  c->r[30]=c->r[3]|c->r[3]; // 800D8348
  c->r[31]=c->r[4]|c->r[4]; // 800D834C
  c->lr=0x800D8354u; f_8030D728(c); // 800D8350
  c->r[3]=c->r[31]|c->r[31]; // 800D8354
  c->r[4]=0u+0x00000000u; // 800D8358
  c->lr=0x800D8360u; f_8030BE30(c); // 800D835C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D8360
  c->r[3]=c->r[31]|c->r[31]; // 800D8364
  c->lr=0x800D836Cu; f_8030BD1C(c); // 800D8368
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D836C
  c->r[3]=c->r[31]|c->r[31]; // 800D8370
  c->r[4]=0u+0x00000000u; // 800D8374
  c->lr=0x800D837Cu; f_8030BE30(c); // 800D8378
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D837C
  c->r[3]=c->r[31]|c->r[31]; // 800D8380
  c->lr=0x800D8388u; f_8030BD1C(c); // 800D8384
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D8388
  c->r[3]=c->r[31]|c->r[31]; // 800D838C
  c->r[4]=0u+0x00000000u; // 800D8390
  c->lr=0x800D8398u; f_8030BE30(c); // 800D8394
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D8398
  c->r[3]=c->r[31]|c->r[31]; // 800D839C
  c->lr=0x800D83A4u; f_8030BD1C(c); // 800D83A0
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800D83A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D83A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D83AC
  c->lr=c->r[0]; // 800D83B0
  c->r[1]=c->r[1]+0x00000010u; // 800D83B4
  return; // 800D83B8
}

// fn_800D83BC
void f_800D83BC(Ctx* __restrict c) {
  trace_call(0x800D83BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D83BC
  c->r[0]=c->lr; // 800D83C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D83C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D83C8
  c->r[30]=c->r[3]|c->r[3]; // 800D83CC
  c->r[31]=c->r[4]|c->r[4]; // 800D83D0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D83D4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D83D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D83DC
  c->r[3]=c->r[4]+0x00000030u; // 800D83E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D83E4
  c->r[4]=c->r[30]+0x00000030u; // 800D83E8
  c->lr=0x800D83F0u; f_8003AB48(c); // 800D83EC
  c->r[3]=c->r[31]+0x0000003Cu; // 800D83F0
  c->r[4]=c->r[30]+0x0000003Cu; // 800D83F4
  c->lr=0x800D83FCu; f_8003AB48(c); // 800D83F8
  c->r[3]=c->r[31]+0x00000048u; // 800D83FC
  c->r[4]=c->r[30]+0x00000048u; // 800D8400
  c->lr=0x800D8408u; f_8003AB48(c); // 800D8404
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8408
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D840C
  c->lr=c->r[0]; // 800D8410
  c->r[1]=c->r[1]+0x00000010u; // 800D8414
  return; // 800D8418
}

// fn_800D841C
void f_800D841C(Ctx* __restrict c) {
  trace_call(0x800D841Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D841C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8420
  c->ctr=c->r[12]; // 800D8424
  if (true) { dispatch(c,c->ctr); return; } // 800D8428
}

// fn_800D842C
void f_800D842C(Ctx* __restrict c) {
  trace_call(0x800D842Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D842C
  c->r[0]=c->lr; // 800D8430
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8434
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8438
  c->r[29]=c->r[3]|c->r[3]; // 800D843C
  c->r[30]=c->r[4]|c->r[4]; // 800D8440
  c->r[31]=c->r[5]|c->r[5]; // 800D8444
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D8448
  cmps(c,0,(int32_t)c->r[0],7); // 800D844C
  if (!crb(c,0)) { goto L_800D8460; } // 800D8450
  c->r[4]=c->r[31]|c->r[31]; // 800D8454
  c->r[3]=c->r[3]+0x00000030u; // 800D8458
  c->lr=0x800D8460u; f_8003A994(c); // 800D845C
L_800D8460:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D8460
  cmps(c,0,(int32_t)c->r[0],7); // 800D8464
  if (!crb(c,0)) { goto L_800D8478; } // 800D8468
  c->r[4]=c->r[31]|c->r[31]; // 800D846C
  c->r[3]=c->r[29]+0x0000003Cu; // 800D8470
  c->lr=0x800D8478u; f_8003A994(c); // 800D8474
L_800D8478:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800D8478
  cmps(c,0,(int32_t)c->r[0],7); // 800D847C
  if (!crb(c,0)) { goto L_800D8490; } // 800D8480
  c->r[4]=c->r[31]|c->r[31]; // 800D8484
  c->r[3]=c->r[29]+0x00000048u; // 800D8488
  c->lr=0x800D8490u; f_8003A994(c); // 800D848C
L_800D8490:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8490
  c->r[3]=c->r[29]|c->r[29]; // 800D8494
  c->r[4]=c->r[30]|c->r[30]; // 800D8498
  c->r[5]=c->r[31]|c->r[31]; // 800D849C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D84A0
  c->ctr=c->r[12]; // 800D84A4
  if (true) { c->lr=0x800D84ACu; dispatch(c,c->ctr); } // 800D84A8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D84AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D84B0
  c->lr=c->r[0]; // 800D84B4
  c->r[1]=c->r[1]+0x00000020u; // 800D84B8
  return; // 800D84BC
}

// fn_800D84C0
void f_800D84C0(Ctx* __restrict c) {
  trace_call(0x800D84C0u);
  c->r[3]=0u+0x80410000u; // 800D84C0
  c->r[3]=c->r[3]+0xFFFFD6DEu; // 800D84C4
  return; // 800D84C8
}

// fn_800D84CC
void f_800D84CC(Ctx* __restrict c) {
  trace_call(0x800D84CCu);
  c->r[3]=0u+0x00000054u; // 800D84CC
  return; // 800D84D0
}

// fn_800D84D4
void f_800D84D4(Ctx* __restrict c) {
  trace_call(0x800D84D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D84D4
  c->r[0]=c->lr; // 800D84D8
  c->r[3]=0u+0x00000054u; // 800D84DC
  c->r[4]=c->r[13]+0xFFFFB548u; // 800D84E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D84E4
  c->r[5]=0u+0x00000000u; // 800D84E8
  c->r[6]=0u+0x00001001u; // 800D84EC
  c->lr=0x800D84F4u; f_80244D20(c); // 800D84F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D84F4
  if (crb(c,2)) { goto L_800D8500; } // 800D84F8
  c->lr=0x800D8500u; f_800D82E0(c); // 800D84FC
L_800D8500:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8500
  c->lr=c->r[0]; // 800D8504
  c->r[1]=c->r[1]+0x00000010u; // 800D8508
  return; // 800D850C
}

// fn_800D8510
void f_800D8510(Ctx* __restrict c) {
  trace_call(0x800D8510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8510
  c->r[0]=c->lr; // 800D8514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D851C
  c->r[31]=c->r[3]|c->r[3]; // 800D8520
  c->lr=0x800D8528u; f_800D7120(c); // 800D8524
  c->r[5]=0u+0x80410000u; // 800D8528
  c->r[3]=0u+0x3B500000u; // 800D852C
  c->r[4]=0u+0x00000000u; // 800D8530
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D8534
  c->r[0]=c->r[3]+0xFFFF9375u; // 800D8538
  c->r[5]=c->r[5]+0x00007D30u; // 800D853C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D8540
  c->r[3]=c->r[31]|c->r[31]; // 800D8544
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D8548
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D854C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8550
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8554
  c->lr=c->r[0]; // 800D8558
  c->r[1]=c->r[1]+0x00000010u; // 800D855C
  return; // 800D8560
}

// fn_800D8564
void f_800D8564(Ctx* __restrict c) {
  trace_call(0x800D8564u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8564
  c->r[0]=c->lr; // 800D8568
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D856C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8570
  c->r[30]=c->r[3]|c->r[3]; // 800D8574
  c->r[31]=c->r[4]|c->r[4]; // 800D8578
  c->lr=0x800D8580u; f_8030D728(c); // 800D857C
  c->r[3]=c->r[31]|c->r[31]; // 800D8580
  c->r[4]=0u+0x00000000u; // 800D8584
  c->lr=0x800D858Cu; f_8030BE30(c); // 800D8588
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D858C
  c->r[3]=c->r[31]|c->r[31]; // 800D8590
  c->lr=0x800D8598u; f_8030BD1C(c); // 800D8594
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D8598
  c->r[3]=c->r[31]|c->r[31]; // 800D859C
  c->r[4]=0u+0x00000000u; // 800D85A0
  c->lr=0x800D85A8u; f_8030BE30(c); // 800D85A4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D85A8
  c->r[3]=c->r[31]|c->r[31]; // 800D85AC
  c->lr=0x800D85B4u; f_8030BD1C(c); // 800D85B0
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D85B4
  c->r[3]=c->r[31]|c->r[31]; // 800D85B8
  c->lr=0x800D85C0u; f_8030C0A0(c); // 800D85BC
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800D85C0
  c->r[3]=c->r[31]|c->r[31]; // 800D85C4
  c->lr=0x800D85CCu; f_8030C0A0(c); // 800D85C8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800D85CC
  c->r[3]=c->r[31]|c->r[31]; // 800D85D0
  c->lr=0x800D85D8u; f_8030C0A0(c); // 800D85D4
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800D85D8
  c->r[3]=c->r[31]|c->r[31]; // 800D85DC
  c->r[4]=0u+0x00000000u; // 800D85E0
  c->lr=0x800D85E8u; f_8030BE30(c); // 800D85E4
  W32(c->r[30]+0x00000054u,c->r[3]); // 800D85E8
  c->r[3]=c->r[31]|c->r[31]; // 800D85EC
  c->r[4]=0u+0x00000000u; // 800D85F0
  c->lr=0x800D85F8u; f_8030BE30(c); // 800D85F4
  W32(c->r[30]+0x00000058u,c->r[3]); // 800D85F8
  c->r[3]=c->r[31]|c->r[31]; // 800D85FC
  c->r[4]=0u+0x00000000u; // 800D8600
  c->lr=0x800D8608u; f_8030BE30(c); // 800D8604
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 800D8608
  c->r[3]=c->r[31]|c->r[31]; // 800D860C
  c->r[4]=0u+0x00000000u; // 800D8610
  c->lr=0x800D8618u; f_8030BE30(c); // 800D8614
  W32(c->r[30]+0x00000060u,c->r[3]); // 800D8618
  c->r[3]=c->r[31]|c->r[31]; // 800D861C
  c->r[4]=0u+0x00000000u; // 800D8620
  c->lr=0x800D8628u; f_8030BE30(c); // 800D8624
  W32(c->r[30]+0x00000064u,c->r[3]); // 800D8628
  c->r[3]=c->r[31]|c->r[31]; // 800D862C
  c->r[4]=0u+0x00000000u; // 800D8630
  c->lr=0x800D8638u; f_8030BE30(c); // 800D8634
  W32(c->r[30]+0x00000068u,c->r[3]); // 800D8638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D863C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8640
  c->lr=c->r[0]; // 800D8644
  c->r[1]=c->r[1]+0x00000010u; // 800D8648
  return; // 800D864C
}

// fn_800D8650
void f_800D8650(Ctx* __restrict c) {
  trace_call(0x800D8650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8650
  c->r[0]=c->lr; // 800D8654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D865C
  c->r[31]=c->r[4]|c->r[4]; // 800D8660
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8664
  c->r[30]=c->r[3]|c->r[3]; // 800D8668
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D866C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8670
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D8674
  c->r[3]=c->r[4]+0x00000030u; // 800D8678
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D867C
  c->r[4]=c->r[30]+0x00000030u; // 800D8680
  c->lr=0x800D8688u; f_8003AB48(c); // 800D8684
  c->r[3]=c->r[31]+0x0000003Cu; // 800D8688
  c->r[4]=c->r[30]+0x0000003Cu; // 800D868C
  c->lr=0x800D8694u; f_8003AB48(c); // 800D8690
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8694
  c->r[3]=c->r[31]+0x00000054u; // 800D8698
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800D869C
  c->r[4]=c->r[30]+0x00000054u; // 800D86A0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D86A4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D86A8
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D86AC
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800D86B0
  c->lr=0x800D86B8u; f_8003F6E4(c); // 800D86B4
  c->r[3]=c->r[31]+0x0000005Cu; // 800D86B8
  c->r[4]=c->r[30]+0x0000005Cu; // 800D86BC
  c->lr=0x800D86C4u; f_8003F6E4(c); // 800D86C0
  c->r[3]=c->r[31]+0x00000064u; // 800D86C4
  c->r[4]=c->r[30]+0x00000064u; // 800D86C8
  c->lr=0x800D86D0u; f_8003F6E4(c); // 800D86CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D86D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D86D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D86D8
  c->lr=c->r[0]; // 800D86DC
  c->r[1]=c->r[1]+0x00000010u; // 800D86E0
  return; // 800D86E4
}

// fn_800D86E8
void f_800D86E8(Ctx* __restrict c) {
  trace_call(0x800D86E8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D86E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D86EC
  c->ctr=c->r[12]; // 800D86F0
  if (true) { dispatch(c,c->ctr); return; } // 800D86F4
}

// fn_800D86F8
void f_800D86F8(Ctx* __restrict c) {
  trace_call(0x800D86F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D86F8
  c->r[0]=c->lr; // 800D86FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8700
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8704
  c->r[29]=c->r[3]|c->r[3]; // 800D8708
  c->r[30]=c->r[4]|c->r[4]; // 800D870C
  c->r[31]=c->r[5]|c->r[5]; // 800D8710
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D8714
  cmps(c,0,(int32_t)c->r[0],7); // 800D8718
  if (!crb(c,0)) { goto L_800D872C; } // 800D871C
  c->r[4]=c->r[31]|c->r[31]; // 800D8720
  c->r[3]=c->r[3]+0x00000030u; // 800D8724
  c->lr=0x800D872Cu; f_8003A994(c); // 800D8728
L_800D872C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D872C
  cmps(c,0,(int32_t)c->r[0],7); // 800D8730
  if (!crb(c,0)) { goto L_800D8744; } // 800D8734
  c->r[4]=c->r[31]|c->r[31]; // 800D8738
  c->r[3]=c->r[29]+0x0000003Cu; // 800D873C
  c->lr=0x800D8744u; f_8003A994(c); // 800D8740
L_800D8744:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8744
  c->r[3]=c->r[29]|c->r[29]; // 800D8748
  c->r[4]=c->r[30]|c->r[30]; // 800D874C
  c->r[5]=c->r[31]|c->r[31]; // 800D8750
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D8754
  c->ctr=c->r[12]; // 800D8758
  if (true) { c->lr=0x800D8760u; dispatch(c,c->ctr); } // 800D875C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8760
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8764
  c->lr=c->r[0]; // 800D8768
  c->r[1]=c->r[1]+0x00000020u; // 800D876C
  return; // 800D8770
}

// fn_800D8774
void f_800D8774(Ctx* __restrict c) {
  trace_call(0x800D8774u);
  c->r[3]=0u+0x80410000u; // 800D8774
  c->r[3]=c->r[3]+0xFFFFD6F2u; // 800D8778
  return; // 800D877C
}

// fn_800D8780
void f_800D8780(Ctx* __restrict c) {
  trace_call(0x800D8780u);
  c->r[3]=0u+0x0000006Cu; // 800D8780
  return; // 800D8784
}

// fn_800D8788
void f_800D8788(Ctx* __restrict c) {
  trace_call(0x800D8788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8788
  c->r[0]=c->lr; // 800D878C
  c->r[3]=0u+0x0000006Cu; // 800D8790
  c->r[4]=c->r[13]+0xFFFFB54Du; // 800D8794
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8798
  c->r[5]=0u+0x00000000u; // 800D879C
  c->r[6]=0u+0x00001001u; // 800D87A0
  c->lr=0x800D87A8u; f_80244D20(c); // 800D87A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D87A8
  if (crb(c,2)) { goto L_800D87B4; } // 800D87AC
  c->lr=0x800D87B4u; f_800D8510(c); // 800D87B0
L_800D87B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D87B4
  c->lr=c->r[0]; // 800D87B8
  c->r[1]=c->r[1]+0x00000010u; // 800D87BC
  return; // 800D87C0
}

// fn_800D87C4
void f_800D87C4(Ctx* __restrict c) {
  trace_call(0x800D87C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D87C4
  c->r[0]=c->lr; // 800D87C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D87CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D87D0
  c->r[31]=c->r[3]|c->r[3]; // 800D87D4
  c->lr=0x800D87DCu; f_800D7120(c); // 800D87D8
  c->r[5]=0u+0x80410000u; // 800D87DC
  c->r[3]=0u+0x9B830000u; // 800D87E0
  c->r[4]=0u+0x00000000u; // 800D87E4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D87E8
  c->r[0]=c->r[3]+0x000056FDu; // 800D87EC
  c->r[5]=c->r[5]+0x00007CFCu; // 800D87F0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D87F4
  c->r[3]=c->r[31]|c->r[31]; // 800D87F8
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D87FC
  W32(c->r[31]+0x00000050u,c->r[4]); // 800D8800
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D8804
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8808
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D880C
  c->lr=c->r[0]; // 800D8810
  c->r[1]=c->r[1]+0x00000010u; // 800D8814
  return; // 800D8818
}

// fn_800D881C
void f_800D881C(Ctx* __restrict c) {
  trace_call(0x800D881Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D881C
  c->r[0]=c->lr; // 800D8820
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8824
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8828
  c->r[30]=c->r[3]|c->r[3]; // 800D882C
  c->r[31]=c->r[4]|c->r[4]; // 800D8830
  c->lr=0x800D8838u; f_8030D728(c); // 800D8834
  c->r[3]=c->r[31]|c->r[31]; // 800D8838
  c->r[4]=0u+0x00000000u; // 800D883C
  c->lr=0x800D8844u; f_8030BE30(c); // 800D8840
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D8844
  c->r[3]=c->r[31]|c->r[31]; // 800D8848
  c->lr=0x800D8850u; f_8030BD1C(c); // 800D884C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D8850
  c->r[3]=c->r[31]|c->r[31]; // 800D8854
  c->r[4]=0u+0x00000000u; // 800D8858
  c->lr=0x800D8860u; f_8030BE30(c); // 800D885C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D8860
  c->r[3]=c->r[31]|c->r[31]; // 800D8864
  c->lr=0x800D886Cu; f_8030BD1C(c); // 800D8868
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D886C
  c->r[3]=c->r[31]|c->r[31]; // 800D8870
  c->r[4]=0u+0x00000000u; // 800D8874
  c->lr=0x800D887Cu; f_8030BE30(c); // 800D8878
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D887C
  c->r[3]=c->r[31]|c->r[31]; // 800D8880
  c->lr=0x800D8888u; f_8030BD1C(c); // 800D8884
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800D8888
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D888C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8890
  c->lr=c->r[0]; // 800D8894
  c->r[1]=c->r[1]+0x00000010u; // 800D8898
  return; // 800D889C
}

// fn_800D88A0
void f_800D88A0(Ctx* __restrict c) {
  trace_call(0x800D88A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D88A0
  c->r[0]=c->lr; // 800D88A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D88A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D88AC
  c->r[30]=c->r[3]|c->r[3]; // 800D88B0
  c->r[31]=c->r[4]|c->r[4]; // 800D88B4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D88B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D88BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D88C0
  c->r[3]=c->r[4]+0x00000030u; // 800D88C4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D88C8
  c->r[4]=c->r[30]+0x00000030u; // 800D88CC
  c->lr=0x800D88D4u; f_8003AB48(c); // 800D88D0
  c->r[3]=c->r[31]+0x0000003Cu; // 800D88D4
  c->r[4]=c->r[30]+0x0000003Cu; // 800D88D8
  c->lr=0x800D88E0u; f_8003AB48(c); // 800D88DC
  c->r[3]=c->r[31]+0x00000048u; // 800D88E0
  c->r[4]=c->r[30]+0x00000048u; // 800D88E4
  c->lr=0x800D88ECu; f_8003AB48(c); // 800D88E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D88EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D88F0
  c->lr=c->r[0]; // 800D88F4
  c->r[1]=c->r[1]+0x00000010u; // 800D88F8
  return; // 800D88FC
}

// fn_800D8900
void f_800D8900(Ctx* __restrict c) {
  trace_call(0x800D8900u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D8900
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8904
  c->ctr=c->r[12]; // 800D8908
  if (true) { dispatch(c,c->ctr); return; } // 800D890C
}

// fn_800D8910
void f_800D8910(Ctx* __restrict c) {
  trace_call(0x800D8910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8910
  c->r[0]=c->lr; // 800D8914
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8918
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D891C
  c->r[29]=c->r[3]|c->r[3]; // 800D8920
  c->r[30]=c->r[4]|c->r[4]; // 800D8924
  c->r[31]=c->r[5]|c->r[5]; // 800D8928
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D892C
  cmps(c,0,(int32_t)c->r[0],7); // 800D8930
  if (!crb(c,0)) { goto L_800D8944; } // 800D8934
  c->r[4]=c->r[31]|c->r[31]; // 800D8938
  c->r[3]=c->r[3]+0x00000030u; // 800D893C
  c->lr=0x800D8944u; f_8003A994(c); // 800D8940
L_800D8944:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D8944
  cmps(c,0,(int32_t)c->r[0],7); // 800D8948
  if (!crb(c,0)) { goto L_800D895C; } // 800D894C
  c->r[4]=c->r[31]|c->r[31]; // 800D8950
  c->r[3]=c->r[29]+0x0000003Cu; // 800D8954
  c->lr=0x800D895Cu; f_8003A994(c); // 800D8958
L_800D895C:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800D895C
  cmps(c,0,(int32_t)c->r[0],7); // 800D8960
  if (!crb(c,0)) { goto L_800D8974; } // 800D8964
  c->r[4]=c->r[31]|c->r[31]; // 800D8968
  c->r[3]=c->r[29]+0x00000048u; // 800D896C
  c->lr=0x800D8974u; f_8003A994(c); // 800D8970
L_800D8974:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8974
  c->r[3]=c->r[29]|c->r[29]; // 800D8978
  c->r[4]=c->r[30]|c->r[30]; // 800D897C
  c->r[5]=c->r[31]|c->r[31]; // 800D8980
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D8984
  c->ctr=c->r[12]; // 800D8988
  if (true) { c->lr=0x800D8990u; dispatch(c,c->ctr); } // 800D898C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8990
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8994
  c->lr=c->r[0]; // 800D8998
  c->r[1]=c->r[1]+0x00000020u; // 800D899C
  return; // 800D89A0
}

// fn_800D89A4
void f_800D89A4(Ctx* __restrict c) {
  trace_call(0x800D89A4u);
  c->r[3]=0u+0x80410000u; // 800D89A4
  c->r[3]=c->r[3]+0xFFFFD706u; // 800D89A8
  return; // 800D89AC
}

// fn_800D89B0
void f_800D89B0(Ctx* __restrict c) {
  trace_call(0x800D89B0u);
  c->r[3]=0u+0x00000054u; // 800D89B0
  return; // 800D89B4
}

// fn_800D89B8
void f_800D89B8(Ctx* __restrict c) {
  trace_call(0x800D89B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D89B8
  c->r[0]=c->lr; // 800D89BC
  c->r[3]=0u+0x00000054u; // 800D89C0
  c->r[4]=c->r[13]+0xFFFFB552u; // 800D89C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D89C8
  c->r[5]=0u+0x00000000u; // 800D89CC
  c->r[6]=0u+0x00001001u; // 800D89D0
  c->lr=0x800D89D8u; f_80244D20(c); // 800D89D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D89D8
  if (crb(c,2)) { goto L_800D89E4; } // 800D89DC
  c->lr=0x800D89E4u; f_800D87C4(c); // 800D89E0
L_800D89E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D89E4
  c->lr=c->r[0]; // 800D89E8
  c->r[1]=c->r[1]+0x00000010u; // 800D89EC
  return; // 800D89F0
}

// fn_800D89F4
void f_800D89F4(Ctx* __restrict c) {
  trace_call(0x800D89F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D89F4
  c->r[0]=c->lr; // 800D89F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D89FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8A00
  c->r[31]=c->r[3]|c->r[3]; // 800D8A04
  c->lr=0x800D8A0Cu; f_800D7120(c); // 800D8A08
  c->r[5]=0u+0x80410000u; // 800D8A0C
  c->r[3]=0u+0x9B830000u; // 800D8A10
  c->r[4]=0u+0x00000000u; // 800D8A14
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D8A18
  c->r[0]=c->r[3]+0x000056FDu; // 800D8A1C
  c->r[5]=c->r[5]+0x00007CC8u; // 800D8A20
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D8A24
  c->r[3]=c->r[31]|c->r[31]; // 800D8A28
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D8A2C
  W32(c->r[31]+0x00000050u,c->r[4]); // 800D8A30
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D8A34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8A38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8A3C
  c->lr=c->r[0]; // 800D8A40
  c->r[1]=c->r[1]+0x00000010u; // 800D8A44
  return; // 800D8A48
}

// fn_800D8A4C
void f_800D8A4C(Ctx* __restrict c) {
  trace_call(0x800D8A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A4C
  c->r[0]=c->lr; // 800D8A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8A54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8A58
  c->r[30]=c->r[3]|c->r[3]; // 800D8A5C
  c->r[31]=c->r[4]|c->r[4]; // 800D8A60
  c->lr=0x800D8A68u; f_8030D728(c); // 800D8A64
  c->r[3]=c->r[31]|c->r[31]; // 800D8A68
  c->r[4]=0u+0x00000000u; // 800D8A6C
  c->lr=0x800D8A74u; f_8030BE30(c); // 800D8A70
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D8A74
  c->r[3]=c->r[31]|c->r[31]; // 800D8A78
  c->lr=0x800D8A80u; f_8030BD1C(c); // 800D8A7C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D8A80
  c->r[3]=c->r[31]|c->r[31]; // 800D8A84
  c->r[4]=0u+0x00000000u; // 800D8A88
  c->lr=0x800D8A90u; f_8030BE30(c); // 800D8A8C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D8A90
  c->r[3]=c->r[31]|c->r[31]; // 800D8A94
  c->lr=0x800D8A9Cu; f_8030BD1C(c); // 800D8A98
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D8A9C
  c->r[3]=c->r[31]|c->r[31]; // 800D8AA0
  c->r[4]=0u+0x00000000u; // 800D8AA4
  c->lr=0x800D8AACu; f_8030BE30(c); // 800D8AA8
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D8AAC
  c->r[3]=c->r[31]|c->r[31]; // 800D8AB0
  c->lr=0x800D8AB8u; f_8030BD1C(c); // 800D8AB4
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800D8AB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8ABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8AC0
  c->lr=c->r[0]; // 800D8AC4
  c->r[1]=c->r[1]+0x00000010u; // 800D8AC8
  return; // 800D8ACC
}

// fn_800D8AD0
void f_800D8AD0(Ctx* __restrict c) {
  trace_call(0x800D8AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8AD0
  c->r[0]=c->lr; // 800D8AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8AD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8ADC
  c->r[30]=c->r[3]|c->r[3]; // 800D8AE0
  c->r[31]=c->r[4]|c->r[4]; // 800D8AE4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D8AE8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8AEC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D8AF0
  c->r[3]=c->r[4]+0x00000030u; // 800D8AF4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D8AF8
  c->r[4]=c->r[30]+0x00000030u; // 800D8AFC
  c->lr=0x800D8B04u; f_8003AB48(c); // 800D8B00
  c->r[3]=c->r[31]+0x0000003Cu; // 800D8B04
  c->r[4]=c->r[30]+0x0000003Cu; // 800D8B08
  c->lr=0x800D8B10u; f_8003AB48(c); // 800D8B0C
  c->r[3]=c->r[31]+0x00000048u; // 800D8B10
  c->r[4]=c->r[30]+0x00000048u; // 800D8B14
  c->lr=0x800D8B1Cu; f_8003AB48(c); // 800D8B18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8B20
  c->lr=c->r[0]; // 800D8B24
  c->r[1]=c->r[1]+0x00000010u; // 800D8B28
  return; // 800D8B2C
}

// fn_800D8B30
void f_800D8B30(Ctx* __restrict c) {
  trace_call(0x800D8B30u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D8B30
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8B34
  c->ctr=c->r[12]; // 800D8B38
  if (true) { dispatch(c,c->ctr); return; } // 800D8B3C
}

// fn_800D8B40
void f_800D8B40(Ctx* __restrict c) {
  trace_call(0x800D8B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8B40
  c->r[0]=c->lr; // 800D8B44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8B48
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8B4C
  c->r[29]=c->r[3]|c->r[3]; // 800D8B50
  c->r[30]=c->r[4]|c->r[4]; // 800D8B54
  c->r[31]=c->r[5]|c->r[5]; // 800D8B58
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D8B5C
  cmps(c,0,(int32_t)c->r[0],7); // 800D8B60
  if (!crb(c,0)) { goto L_800D8B74; } // 800D8B64
  c->r[4]=c->r[31]|c->r[31]; // 800D8B68
  c->r[3]=c->r[3]+0x00000030u; // 800D8B6C
  c->lr=0x800D8B74u; f_8003A994(c); // 800D8B70
L_800D8B74:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D8B74
  cmps(c,0,(int32_t)c->r[0],7); // 800D8B78
  if (!crb(c,0)) { goto L_800D8B8C; } // 800D8B7C
  c->r[4]=c->r[31]|c->r[31]; // 800D8B80
  c->r[3]=c->r[29]+0x0000003Cu; // 800D8B84
  c->lr=0x800D8B8Cu; f_8003A994(c); // 800D8B88
L_800D8B8C:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800D8B8C
  cmps(c,0,(int32_t)c->r[0],7); // 800D8B90
  if (!crb(c,0)) { goto L_800D8BA4; } // 800D8B94
  c->r[4]=c->r[31]|c->r[31]; // 800D8B98
  c->r[3]=c->r[29]+0x00000048u; // 800D8B9C
  c->lr=0x800D8BA4u; f_8003A994(c); // 800D8BA0
L_800D8BA4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8BA4
  c->r[3]=c->r[29]|c->r[29]; // 800D8BA8
  c->r[4]=c->r[30]|c->r[30]; // 800D8BAC
  c->r[5]=c->r[31]|c->r[31]; // 800D8BB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D8BB4
  c->ctr=c->r[12]; // 800D8BB8
  if (true) { c->lr=0x800D8BC0u; dispatch(c,c->ctr); } // 800D8BBC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8BC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8BC4
  c->lr=c->r[0]; // 800D8BC8
  c->r[1]=c->r[1]+0x00000020u; // 800D8BCC
  return; // 800D8BD0
}

// fn_800D8BD4
void f_800D8BD4(Ctx* __restrict c) {
  trace_call(0x800D8BD4u);
  c->r[3]=0u+0x80410000u; // 800D8BD4
  c->r[3]=c->r[3]+0xFFFFD71Eu; // 800D8BD8
  return; // 800D8BDC
}

// fn_800D8BE0
void f_800D8BE0(Ctx* __restrict c) {
  trace_call(0x800D8BE0u);
  c->r[3]=0u+0x00000054u; // 800D8BE0
  return; // 800D8BE4
}

// fn_800D8BE8
void f_800D8BE8(Ctx* __restrict c) {
  trace_call(0x800D8BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8BE8
  c->r[0]=c->lr; // 800D8BEC
  c->r[3]=0u+0x00000054u; // 800D8BF0
  c->r[4]=c->r[13]+0xFFFFB557u; // 800D8BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8BF8
  c->r[5]=0u+0x00000000u; // 800D8BFC
  c->r[6]=0u+0x00001001u; // 800D8C00
  c->lr=0x800D8C08u; f_80244D20(c); // 800D8C04
  cmps(c,0,(int32_t)c->r[3],0); // 800D8C08
  if (crb(c,2)) { goto L_800D8C14; } // 800D8C0C
  c->lr=0x800D8C14u; f_800D89F4(c); // 800D8C10
L_800D8C14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8C14
  c->lr=c->r[0]; // 800D8C18
  c->r[1]=c->r[1]+0x00000010u; // 800D8C1C
  return; // 800D8C20
}

// fn_800D8C24
void f_800D8C24(Ctx* __restrict c) {
  trace_call(0x800D8C24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C24
  c->r[0]=c->lr; // 800D8C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8C30
  c->r[31]=c->r[3]|c->r[3]; // 800D8C34
  c->lr=0x800D8C3Cu; f_800D7120(c); // 800D8C38
  c->r[5]=0u+0x80410000u; // 800D8C3C
  c->r[3]=0u+0x93D40000u; // 800D8C40
  c->r[4]=0u+0x00000000u; // 800D8C44
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D8C48
  c->r[0]=c->r[3]+0xFFFFF473u; // 800D8C4C
  c->r[5]=c->r[5]+0x00007C94u; // 800D8C50
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D8C54
  c->r[3]=c->r[31]|c->r[31]; // 800D8C58
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D8C5C
  W32(c->r[31]+0x00000050u,c->r[4]); // 800D8C60
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 800D8C64
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D8C68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8C70
  c->lr=c->r[0]; // 800D8C74
  c->r[1]=c->r[1]+0x00000010u; // 800D8C78
  return; // 800D8C7C
}

// fn_800D8C80
void f_800D8C80(Ctx* __restrict c) {
  trace_call(0x800D8C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C80
  c->r[0]=c->lr; // 800D8C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8C88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8C8C
  c->r[30]=c->r[3]|c->r[3]; // 800D8C90
  c->r[31]=c->r[4]|c->r[4]; // 800D8C94
  c->lr=0x800D8C9Cu; f_8030D728(c); // 800D8C98
  c->r[3]=c->r[31]|c->r[31]; // 800D8C9C
  c->r[4]=0u+0x00000000u; // 800D8CA0
  c->lr=0x800D8CA8u; f_8030BE30(c); // 800D8CA4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D8CA8
  c->r[3]=c->r[31]|c->r[31]; // 800D8CAC
  c->lr=0x800D8CB4u; f_8030BD1C(c); // 800D8CB0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D8CB4
  c->r[3]=c->r[31]|c->r[31]; // 800D8CB8
  c->r[4]=0u+0x00000000u; // 800D8CBC
  c->lr=0x800D8CC4u; f_8030BE30(c); // 800D8CC0
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D8CC4
  c->r[3]=c->r[31]|c->r[31]; // 800D8CC8
  c->lr=0x800D8CD0u; f_8030BD1C(c); // 800D8CCC
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D8CD0
  c->r[3]=c->r[31]|c->r[31]; // 800D8CD4
  c->r[4]=0u+0x00000000u; // 800D8CD8
  c->lr=0x800D8CE0u; f_8030BE30(c); // 800D8CDC
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D8CE0
  c->r[3]=c->r[31]|c->r[31]; // 800D8CE4
  c->lr=0x800D8CECu; f_8030BD1C(c); // 800D8CE8
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800D8CEC
  c->r[3]=c->r[31]|c->r[31]; // 800D8CF0
  c->r[4]=0u+0x00000000u; // 800D8CF4
  c->lr=0x800D8CFCu; f_8030BE30(c); // 800D8CF8
  W32(c->r[30]+0x00000054u,c->r[3]); // 800D8CFC
  c->r[3]=c->r[31]|c->r[31]; // 800D8D00
  c->lr=0x800D8D08u; f_8030BD1C(c); // 800D8D04
  W32(c->r[30]+0x00000058u,c->r[3]); // 800D8D08
  c->r[3]=c->r[31]|c->r[31]; // 800D8D0C
  c->r[4]=0u+0x00000000u; // 800D8D10
  c->lr=0x800D8D18u; f_8030BE30(c); // 800D8D14
  W32(c->r[30]+0x00000060u,c->r[3]); // 800D8D18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8D1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8D20
  c->lr=c->r[0]; // 800D8D24
  c->r[1]=c->r[1]+0x00000010u; // 800D8D28
  return; // 800D8D2C
}

// fn_800D8D30
void f_800D8D30(Ctx* __restrict c) {
  trace_call(0x800D8D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8D30
  c->r[0]=c->lr; // 800D8D34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8D38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8D3C
  c->r[30]=c->r[3]|c->r[3]; // 800D8D40
  c->r[31]=c->r[4]|c->r[4]; // 800D8D44
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D8D48
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8D4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D8D50
  c->r[3]=c->r[4]+0x00000030u; // 800D8D54
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D8D58
  c->r[4]=c->r[30]+0x00000030u; // 800D8D5C
  c->lr=0x800D8D64u; f_8003AB48(c); // 800D8D60
  c->r[3]=c->r[31]+0x0000003Cu; // 800D8D64
  c->r[4]=c->r[30]+0x0000003Cu; // 800D8D68
  c->lr=0x800D8D70u; f_8003AB48(c); // 800D8D6C
  c->r[3]=c->r[31]+0x00000048u; // 800D8D70
  c->r[4]=c->r[30]+0x00000048u; // 800D8D74
  c->lr=0x800D8D7Cu; f_8003AB48(c); // 800D8D78
  c->r[3]=c->r[31]+0x00000054u; // 800D8D7C
  c->r[4]=c->r[30]+0x00000054u; // 800D8D80
  c->lr=0x800D8D88u; f_8003AB48(c); // 800D8D84
  c->r[0]=R32(c->r[30]+0x00000060u); // 800D8D88
  W32(c->r[31]+0x00000060u,c->r[0]); // 800D8D8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8D94
  c->lr=c->r[0]; // 800D8D98
  c->r[1]=c->r[1]+0x00000010u; // 800D8D9C
  return; // 800D8DA0
}

// fn_800D8DA4
void f_800D8DA4(Ctx* __restrict c) {
  trace_call(0x800D8DA4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D8DA4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8DA8
  c->ctr=c->r[12]; // 800D8DAC
  if (true) { dispatch(c,c->ctr); return; } // 800D8DB0
}

// fn_800D8DB4
void f_800D8DB4(Ctx* __restrict c) {
  trace_call(0x800D8DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8DB4
  c->r[0]=c->lr; // 800D8DB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8DBC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8DC0
  c->r[29]=c->r[3]|c->r[3]; // 800D8DC4
  c->r[30]=c->r[4]|c->r[4]; // 800D8DC8
  c->r[31]=c->r[5]|c->r[5]; // 800D8DCC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D8DD0
  cmps(c,0,(int32_t)c->r[0],7); // 800D8DD4
  if (!crb(c,0)) { goto L_800D8DE8; } // 800D8DD8
  c->r[4]=c->r[31]|c->r[31]; // 800D8DDC
  c->r[3]=c->r[3]+0x00000030u; // 800D8DE0
  c->lr=0x800D8DE8u; f_8003A994(c); // 800D8DE4
L_800D8DE8:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D8DE8
  cmps(c,0,(int32_t)c->r[0],7); // 800D8DEC
  if (!crb(c,0)) { goto L_800D8E00; } // 800D8DF0
  c->r[4]=c->r[31]|c->r[31]; // 800D8DF4
  c->r[3]=c->r[29]+0x0000003Cu; // 800D8DF8
  c->lr=0x800D8E00u; f_8003A994(c); // 800D8DFC
L_800D8E00:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800D8E00
  cmps(c,0,(int32_t)c->r[0],7); // 800D8E04
  if (!crb(c,0)) { goto L_800D8E18; } // 800D8E08
  c->r[4]=c->r[31]|c->r[31]; // 800D8E0C
  c->r[3]=c->r[29]+0x00000048u; // 800D8E10
  c->lr=0x800D8E18u; f_8003A994(c); // 800D8E14
L_800D8E18:;
  c->r[0]=R32(c->r[29]+0x00000058u); // 800D8E18
  cmps(c,0,(int32_t)c->r[0],7); // 800D8E1C
  if (!crb(c,0)) { goto L_800D8E30; } // 800D8E20
  c->r[4]=c->r[31]|c->r[31]; // 800D8E24
  c->r[3]=c->r[29]+0x00000054u; // 800D8E28
  c->lr=0x800D8E30u; f_8003A994(c); // 800D8E2C
L_800D8E30:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8E30
  c->r[3]=c->r[29]|c->r[29]; // 800D8E34
  c->r[4]=c->r[30]|c->r[30]; // 800D8E38
  c->r[5]=c->r[31]|c->r[31]; // 800D8E3C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D8E40
  c->ctr=c->r[12]; // 800D8E44
  if (true) { c->lr=0x800D8E4Cu; dispatch(c,c->ctr); } // 800D8E48
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8E4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8E50
  c->lr=c->r[0]; // 800D8E54
  c->r[1]=c->r[1]+0x00000020u; // 800D8E58
  return; // 800D8E5C
}

// fn_800D8E60
void f_800D8E60(Ctx* __restrict c) {
  trace_call(0x800D8E60u);
  c->r[3]=0u+0x80410000u; // 800D8E60
  c->r[3]=c->r[3]+0xFFFFD737u; // 800D8E64
  return; // 800D8E68
}

// fn_800D8E6C
void f_800D8E6C(Ctx* __restrict c) {
  trace_call(0x800D8E6Cu);
  c->r[3]=0u+0x00000064u; // 800D8E6C
  return; // 800D8E70
}

// fn_800D8E74
void f_800D8E74(Ctx* __restrict c) {
  trace_call(0x800D8E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8E74
  c->r[0]=c->lr; // 800D8E78
  c->r[3]=0u+0x00000064u; // 800D8E7C
  c->r[4]=c->r[13]+0xFFFFB55Cu; // 800D8E80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8E84
  c->r[5]=0u+0x00000000u; // 800D8E88
  c->r[6]=0u+0x00001001u; // 800D8E8C
  c->lr=0x800D8E94u; f_80244D20(c); // 800D8E90
  cmps(c,0,(int32_t)c->r[3],0); // 800D8E94
  if (crb(c,2)) { goto L_800D8EA0; } // 800D8E98
  c->lr=0x800D8EA0u; f_800D8C24(c); // 800D8E9C
L_800D8EA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8EA0
  c->lr=c->r[0]; // 800D8EA4
  c->r[1]=c->r[1]+0x00000010u; // 800D8EA8
  return; // 800D8EAC
}

// fn_800D8EB0
void f_800D8EB0(Ctx* __restrict c) {
  trace_call(0x800D8EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8EB0
  c->r[0]=c->lr; // 800D8EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8EB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8EBC
  c->r[31]=c->r[3]|c->r[3]; // 800D8EC0
  c->lr=0x800D8EC8u; f_800D7120(c); // 800D8EC4
  c->r[5]=0u+0x80410000u; // 800D8EC8
  c->r[3]=0u+0x59710000u; // 800D8ECC
  c->r[0]=c->r[3]+0x000047B2u; // 800D8ED0
  c->r[4]=0u+0x00000000u; // 800D8ED4
  c->r[5]=c->r[5]+0x00007C60u; // 800D8ED8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D8EDC
  c->r[3]=c->r[31]|c->r[31]; // 800D8EE0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D8EE4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D8EE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8EF0
  c->lr=c->r[0]; // 800D8EF4
  c->r[1]=c->r[1]+0x00000010u; // 800D8EF8
  return; // 800D8EFC
}

// fn_800D8F00
void f_800D8F00(Ctx* __restrict c) {
  trace_call(0x800D8F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8F00
  c->r[0]=c->lr; // 800D8F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8F08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8F0C
  c->r[30]=c->r[3]|c->r[3]; // 800D8F10
  c->r[31]=c->r[4]|c->r[4]; // 800D8F14
  c->lr=0x800D8F1Cu; f_8030D728(c); // 800D8F18
  c->r[3]=c->r[31]|c->r[31]; // 800D8F1C
  c->r[4]=0u+0x00000000u; // 800D8F20
  c->lr=0x800D8F28u; f_8030BE30(c); // 800D8F24
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D8F28
  c->r[3]=c->r[31]|c->r[31]; // 800D8F2C
  c->lr=0x800D8F34u; f_8030BD1C(c); // 800D8F30
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D8F34
  c->r[3]=c->r[31]|c->r[31]; // 800D8F38
  c->lr=0x800D8F40u; f_8030BD1C(c); // 800D8F3C
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800D8F40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8F44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8F48
  c->lr=c->r[0]; // 800D8F4C
  c->r[1]=c->r[1]+0x00000010u; // 800D8F50
  return; // 800D8F54
}

// fn_800D8F58
void f_800D8F58(Ctx* __restrict c) {
  trace_call(0x800D8F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8F58
  c->r[0]=c->lr; // 800D8F5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8F60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8F64
  c->r[30]=c->r[3]|c->r[3]; // 800D8F68
  c->r[31]=c->r[4]|c->r[4]; // 800D8F6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D8F70
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8F74
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D8F78
  c->r[3]=c->r[4]+0x00000030u; // 800D8F7C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D8F80
  c->r[4]=c->r[30]+0x00000030u; // 800D8F84
  c->lr=0x800D8F8Cu; f_8003AB48(c); // 800D8F88
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800D8F8C
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800D8F90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8F94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8F98
  c->lr=c->r[0]; // 800D8F9C
  c->r[1]=c->r[1]+0x00000010u; // 800D8FA0
  return; // 800D8FA4
}

// fn_800D8FA8
void f_800D8FA8(Ctx* __restrict c) {
  trace_call(0x800D8FA8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D8FA8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D8FAC
  c->ctr=c->r[12]; // 800D8FB0
  if (true) { dispatch(c,c->ctr); return; } // 800D8FB4
}

// fn_800D8FB8
void f_800D8FB8(Ctx* __restrict c) {
  trace_call(0x800D8FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8FB8
  c->r[0]=c->lr; // 800D8FBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8FC0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8FC4
  c->r[29]=c->r[3]|c->r[3]; // 800D8FC8
  c->r[30]=c->r[4]|c->r[4]; // 800D8FCC
  c->r[31]=c->r[5]|c->r[5]; // 800D8FD0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D8FD4
  cmps(c,0,(int32_t)c->r[0],7); // 800D8FD8
  if (!crb(c,0)) { goto L_800D8FEC; } // 800D8FDC
  c->r[4]=c->r[31]|c->r[31]; // 800D8FE0
  c->r[3]=c->r[3]+0x00000030u; // 800D8FE4
  c->lr=0x800D8FECu; f_8003A994(c); // 800D8FE8
L_800D8FEC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D8FEC
  c->r[3]=c->r[29]|c->r[29]; // 800D8FF0
  c->r[4]=c->r[30]|c->r[30]; // 800D8FF4
  c->r[5]=c->r[31]|c->r[31]; // 800D8FF8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D8FFC
  c->ctr=c->r[12]; // 800D9000
  if (true) { c->lr=0x800D9008u; dispatch(c,c->ctr); } // 800D9004
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9008
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D900C
  c->lr=c->r[0]; // 800D9010
  c->r[1]=c->r[1]+0x00000020u; // 800D9014
  return; // 800D9018
}

// fn_800D901C
void f_800D901C(Ctx* __restrict c) {
  trace_call(0x800D901Cu);
  c->r[3]=0u+0x80410000u; // 800D901C
  c->r[3]=c->r[3]+0xFFFFD758u; // 800D9020
  return; // 800D9024
}

// fn_800D9028
void f_800D9028(Ctx* __restrict c) {
  trace_call(0x800D9028u);
  c->r[3]=0u+0x00000040u; // 800D9028
  return; // 800D902C
}

// fn_800D9030
void f_800D9030(Ctx* __restrict c) {
  trace_call(0x800D9030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9030
  c->r[0]=c->lr; // 800D9034
  c->r[3]=0u+0x00000040u; // 800D9038
  c->r[4]=c->r[13]+0xFFFFB561u; // 800D903C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9040
  c->r[5]=0u+0x00000000u; // 800D9044
  c->r[6]=0u+0x00001001u; // 800D9048
  c->lr=0x800D9050u; f_80244D20(c); // 800D904C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9050
  if (crb(c,2)) { goto L_800D905C; } // 800D9054
  c->lr=0x800D905Cu; f_800D8EB0(c); // 800D9058
L_800D905C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D905C
  c->lr=c->r[0]; // 800D9060
  c->r[1]=c->r[1]+0x00000010u; // 800D9064
  return; // 800D9068
}

// fn_800D906C
void f_800D906C(Ctx* __restrict c) {
  trace_call(0x800D906Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D906C
  c->r[0]=c->lr; // 800D9070
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9078
  c->r[31]=c->r[3]|c->r[3]; // 800D907C
  c->lr=0x800D9084u; f_800D7120(c); // 800D9080
  c->r[5]=0u+0x80410000u; // 800D9084
  c->r[3]=0u+0xF8640000u; // 800D9088
  c->r[4]=0u+0x00000000u; // 800D908C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D9090
  c->r[0]=c->r[3]+0x00006E5Bu; // 800D9094
  c->r[5]=c->r[5]+0x00007C2Cu; // 800D9098
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D909C
  c->r[3]=c->r[31]|c->r[31]; // 800D90A0
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D90A4
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 800D90A8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D90AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D90B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D90B4
  c->lr=c->r[0]; // 800D90B8
  c->r[1]=c->r[1]+0x00000010u; // 800D90BC
  return; // 800D90C0
}

// fn_800D90C4
void f_800D90C4(Ctx* __restrict c) {
  trace_call(0x800D90C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D90C4
  c->r[0]=c->lr; // 800D90C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D90CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D90D0
  c->r[30]=c->r[3]|c->r[3]; // 800D90D4
  c->r[31]=c->r[4]|c->r[4]; // 800D90D8
  c->lr=0x800D90E0u; f_8030D728(c); // 800D90DC
  c->r[3]=c->r[31]|c->r[31]; // 800D90E0
  c->r[4]=0u+0x00000000u; // 800D90E4
  c->lr=0x800D90ECu; f_8030BE30(c); // 800D90E8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D90EC
  c->r[3]=c->r[31]|c->r[31]; // 800D90F0
  c->lr=0x800D90F8u; f_8030BD1C(c); // 800D90F4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D90F8
  c->r[3]=c->r[31]|c->r[31]; // 800D90FC
  c->r[4]=0u+0x00000000u; // 800D9100
  c->lr=0x800D9108u; f_8030BE30(c); // 800D9104
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D9108
  c->r[3]=c->r[31]|c->r[31]; // 800D910C
  c->lr=0x800D9114u; f_8030BD1C(c); // 800D9110
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D9114
  c->r[3]=c->r[31]|c->r[31]; // 800D9118
  c->lr=0x800D9120u; f_8030C0A0(c); // 800D911C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800D9120
  c->r[3]=c->r[31]|c->r[31]; // 800D9124
  c->lr=0x800D912Cu; f_8030C0A0(c); // 800D9128
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800D912C
  c->r[3]=c->r[31]|c->r[31]; // 800D9130
  c->lr=0x800D9138u; f_8030BD1C(c); // 800D9134
  W32(c->r[30]+0x00000050u,c->r[3]); // 800D9138
  c->r[3]=c->r[31]|c->r[31]; // 800D913C
  c->r[4]=0u+0x00000000u; // 800D9140
  c->lr=0x800D9148u; f_8030BE30(c); // 800D9144
  W32(c->r[30]+0x00000054u,c->r[3]); // 800D9148
  c->r[3]=c->r[31]|c->r[31]; // 800D914C
  c->lr=0x800D9154u; f_8030BD1C(c); // 800D9150
  W32(c->r[30]+0x00000058u,c->r[3]); // 800D9154
  c->r[3]=c->r[31]|c->r[31]; // 800D9158
  c->lr=0x800D9160u; f_8030BD1C(c); // 800D915C
  W32(c->r[30]+0x00000060u,c->r[3]); // 800D9160
  c->r[3]=c->r[31]|c->r[31]; // 800D9164
  c->lr=0x800D916Cu; f_8030BD1C(c); // 800D9168
  W8(c->r[30]+0x00000064u,c->r[3]); // 800D916C
  c->r[3]=c->r[31]|c->r[31]; // 800D9170
  c->lr=0x800D9178u; f_8030BD1C(c); // 800D9174
  W8(c->r[30]+0x00000065u,c->r[3]); // 800D9178
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D917C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9180
  c->lr=c->r[0]; // 800D9184
  c->r[1]=c->r[1]+0x00000010u; // 800D9188
  return; // 800D918C
}

// fn_800D9190
void f_800D9190(Ctx* __restrict c) {
  trace_call(0x800D9190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9190
  c->r[0]=c->lr; // 800D9194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D919C
  c->r[31]=c->r[4]|c->r[4]; // 800D91A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D91A4
  c->r[30]=c->r[3]|c->r[3]; // 800D91A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D91AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D91B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D91B4
  c->r[3]=c->r[4]+0x00000030u; // 800D91B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D91BC
  c->r[4]=c->r[30]+0x00000030u; // 800D91C0
  c->lr=0x800D91C8u; f_8003AB48(c); // 800D91C4
  c->r[3]=c->r[31]+0x0000003Cu; // 800D91C8
  c->r[4]=c->r[30]+0x0000003Cu; // 800D91CC
  c->lr=0x800D91D4u; f_8003AB48(c); // 800D91D0
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D91D4
  c->r[3]=c->r[31]+0x00000054u; // 800D91D8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800D91DC
  c->r[4]=c->r[30]+0x00000054u; // 800D91E0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D91E4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D91E8
  c->r[0]=R32(c->r[30]+0x00000050u); // 800D91EC
  W32(c->r[31]+0x00000050u,c->r[0]); // 800D91F0
  c->lr=0x800D91F8u; f_8003AB48(c); // 800D91F4
  c->r[0]=R32(c->r[30]+0x00000060u); // 800D91F8
  W32(c->r[31]+0x00000060u,c->r[0]); // 800D91FC
  c->r[0]=R8(c->r[30]+0x00000064u); // 800D9200
  W8(c->r[31]+0x00000064u,c->r[0]); // 800D9204
  c->r[0]=R8(c->r[30]+0x00000065u); // 800D9208
  W8(c->r[31]+0x00000065u,c->r[0]); // 800D920C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9210
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9214
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9218
  c->lr=c->r[0]; // 800D921C
  c->r[1]=c->r[1]+0x00000010u; // 800D9220
  return; // 800D9224
}

// fn_800D9228
void f_800D9228(Ctx* __restrict c) {
  trace_call(0x800D9228u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D9228
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D922C
  c->ctr=c->r[12]; // 800D9230
  if (true) { dispatch(c,c->ctr); return; } // 800D9234
}

// fn_800D9238
void f_800D9238(Ctx* __restrict c) {
  trace_call(0x800D9238u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9238
  c->r[0]=c->lr; // 800D923C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9240
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9244
  c->r[29]=c->r[3]|c->r[3]; // 800D9248
  c->r[30]=c->r[4]|c->r[4]; // 800D924C
  c->r[31]=c->r[5]|c->r[5]; // 800D9250
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9254
  cmps(c,0,(int32_t)c->r[0],7); // 800D9258
  if (!crb(c,0)) { goto L_800D926C; } // 800D925C
  c->r[4]=c->r[31]|c->r[31]; // 800D9260
  c->r[3]=c->r[3]+0x00000030u; // 800D9264
  c->lr=0x800D926Cu; f_8003A994(c); // 800D9268
L_800D926C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D926C
  cmps(c,0,(int32_t)c->r[0],7); // 800D9270
  if (!crb(c,0)) { goto L_800D9284; } // 800D9274
  c->r[4]=c->r[31]|c->r[31]; // 800D9278
  c->r[3]=c->r[29]+0x0000003Cu; // 800D927C
  c->lr=0x800D9284u; f_8003A994(c); // 800D9280
L_800D9284:;
  c->r[0]=R32(c->r[29]+0x00000058u); // 800D9284
  cmps(c,0,(int32_t)c->r[0],7); // 800D9288
  if (!crb(c,0)) { goto L_800D929C; } // 800D928C
  c->r[4]=c->r[31]|c->r[31]; // 800D9290
  c->r[3]=c->r[29]+0x00000054u; // 800D9294
  c->lr=0x800D929Cu; f_8003A994(c); // 800D9298
L_800D929C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D929C
  c->r[3]=c->r[29]|c->r[29]; // 800D92A0
  c->r[4]=c->r[30]|c->r[30]; // 800D92A4
  c->r[5]=c->r[31]|c->r[31]; // 800D92A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D92AC
  c->ctr=c->r[12]; // 800D92B0
  if (true) { c->lr=0x800D92B8u; dispatch(c,c->ctr); } // 800D92B4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D92B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D92BC
  c->lr=c->r[0]; // 800D92C0
  c->r[1]=c->r[1]+0x00000020u; // 800D92C4
  return; // 800D92C8
}

// fn_800D92CC
void f_800D92CC(Ctx* __restrict c) {
  trace_call(0x800D92CCu);
  c->r[3]=c->r[13]+0xFFFFB566u; // 800D92CC
  return; // 800D92D0
}

// fn_800D92D4
void f_800D92D4(Ctx* __restrict c) {
  trace_call(0x800D92D4u);
  c->r[3]=0u+0x00000068u; // 800D92D4
  return; // 800D92D8
}

// fn_800D92DC
void f_800D92DC(Ctx* __restrict c) {
  trace_call(0x800D92DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D92DC
  c->r[0]=c->lr; // 800D92E0
  c->r[3]=0u+0x00000068u; // 800D92E4
  c->r[4]=c->r[13]+0xFFFFB56Du; // 800D92E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D92EC
  c->r[5]=0u+0x00000000u; // 800D92F0
  c->r[6]=0u+0x00001001u; // 800D92F4
  c->lr=0x800D92FCu; f_80244D20(c); // 800D92F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D92FC
  if (crb(c,2)) { goto L_800D9308; } // 800D9300
  c->lr=0x800D9308u; f_800D906C(c); // 800D9304
L_800D9308:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9308
  c->lr=c->r[0]; // 800D930C
  c->r[1]=c->r[1]+0x00000010u; // 800D9310
  return; // 800D9314
}

// fn_800D9318
void f_800D9318(Ctx* __restrict c) {
  trace_call(0x800D9318u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9318
  c->r[0]=c->lr; // 800D931C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9320
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9324
  c->r[31]=c->r[3]|c->r[3]; // 800D9328
  c->lr=0x800D9330u; f_800D7120(c); // 800D932C
  c->r[5]=0u+0x80410000u; // 800D9330
  c->r[3]=0u+0x3C4A0000u; // 800D9334
  c->r[0]=c->r[3]+0xFFFFC5ECu; // 800D9338
  c->r[4]=0u+0x00000000u; // 800D933C
  c->r[5]=c->r[5]+0x00007BF8u; // 800D9340
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D9344
  c->r[3]=c->r[31]|c->r[31]; // 800D9348
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D934C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D9350
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9354
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9358
  c->lr=c->r[0]; // 800D935C
  c->r[1]=c->r[1]+0x00000010u; // 800D9360
  return; // 800D9364
}

// fn_800D9368
void f_800D9368(Ctx* __restrict c) {
  trace_call(0x800D9368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9368
  c->r[0]=c->lr; // 800D936C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9370
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9374
  c->r[30]=c->r[3]|c->r[3]; // 800D9378
  c->r[31]=c->r[4]|c->r[4]; // 800D937C
  c->lr=0x800D9384u; f_8030D728(c); // 800D9380
  c->r[3]=c->r[31]|c->r[31]; // 800D9384
  c->r[4]=0u+0x00000000u; // 800D9388
  c->lr=0x800D9390u; f_8030BE30(c); // 800D938C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D9390
  c->r[3]=c->r[31]|c->r[31]; // 800D9394
  c->lr=0x800D939Cu; f_8030BD1C(c); // 800D9398
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D939C
  c->r[3]=c->r[31]|c->r[31]; // 800D93A0
  c->r[4]=0u+0x00000000u; // 800D93A4
  c->lr=0x800D93ACu; f_8030BE30(c); // 800D93A8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D93AC
  c->r[3]=c->r[31]|c->r[31]; // 800D93B0
  c->r[4]=0u+0x00000000u; // 800D93B4
  c->lr=0x800D93BCu; f_8030BE30(c); // 800D93B8
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D93BC
  c->r[3]=c->r[31]|c->r[31]; // 800D93C0
  c->lr=0x800D93C8u; f_8030BD1C(c); // 800D93C4
  W16(c->r[30]+0x00000044u,c->r[3]); // 800D93C8
  c->r[3]=c->r[31]|c->r[31]; // 800D93CC
  c->lr=0x800D93D4u; f_8030C0A0(c); // 800D93D0
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800D93D4
  c->r[3]=c->r[31]|c->r[31]; // 800D93D8
  c->lr=0x800D93E0u; f_8030C0A0(c); // 800D93DC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800D93E0
  c->r[3]=c->r[31]|c->r[31]; // 800D93E4
  c->r[4]=0u+0x00000000u; // 800D93E8
  c->lr=0x800D93F0u; f_8030BE30(c); // 800D93EC
  W32(c->r[30]+0x00000050u,c->r[3]); // 800D93F0
  c->r[3]=c->r[31]|c->r[31]; // 800D93F4
  c->r[4]=0u+0x00000000u; // 800D93F8
  c->lr=0x800D9400u; f_8030BE30(c); // 800D93FC
  W32(c->r[30]+0x00000054u,c->r[3]); // 800D9400
  c->r[3]=c->r[31]|c->r[31]; // 800D9404
  c->lr=0x800D940Cu; f_8030BD1C(c); // 800D9408
  W8(c->r[30]+0x00000058u,c->r[3]); // 800D940C
  c->r[3]=c->r[31]|c->r[31]; // 800D9410
  c->lr=0x800D9418u; f_8030BD1C(c); // 800D9414
  W8(c->r[30]+0x00000059u,c->r[3]); // 800D9418
  c->r[3]=c->r[31]|c->r[31]; // 800D941C
  c->lr=0x800D9424u; f_8030BD1C(c); // 800D9420
  W8(c->r[30]+0x0000005Au,c->r[3]); // 800D9424
  c->r[3]=c->r[31]|c->r[31]; // 800D9428
  c->lr=0x800D9430u; f_8030BD1C(c); // 800D942C
  W8(c->r[30]+0x0000005Bu,c->r[3]); // 800D9430
  c->r[3]=c->r[31]|c->r[31]; // 800D9434
  c->lr=0x800D943Cu; f_8030BD1C(c); // 800D9438
  W8(c->r[30]+0x0000005Cu,c->r[3]); // 800D943C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9440
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9444
  c->lr=c->r[0]; // 800D9448
  c->r[1]=c->r[1]+0x00000010u; // 800D944C
  return; // 800D9450
}

// fn_800D9454
void f_800D9454(Ctx* __restrict c) {
  trace_call(0x800D9454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9454
  c->r[0]=c->lr; // 800D9458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D945C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9460
  c->r[31]=c->r[4]|c->r[4]; // 800D9464
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9468
  c->r[30]=c->r[3]|c->r[3]; // 800D946C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9470
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D9474
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D9478
  c->r[3]=c->r[4]+0x00000030u; // 800D947C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D9480
  c->r[4]=c->r[30]+0x00000030u; // 800D9484
  c->lr=0x800D948Cu; f_8003AB48(c); // 800D9488
  c->r[3]=c->r[31]+0x0000003Cu; // 800D948C
  c->r[4]=c->r[30]+0x0000003Cu; // 800D9490
  c->lr=0x800D9498u; f_8003F6E4(c); // 800D9494
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000044u); // 800D9498
  c->r[3]=c->r[31]+0x00000050u; // 800D949C
  W16(c->r[31]+0x00000044u,c->r[0]); // 800D94A0
  c->r[4]=c->r[30]+0x00000050u; // 800D94A4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D94A8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800D94AC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D94B0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D94B4
  c->lr=0x800D94BCu; f_8003F6E4(c); // 800D94B8
  c->r[0]=R8(c->r[30]+0x00000058u); // 800D94BC
  W8(c->r[31]+0x00000058u,c->r[0]); // 800D94C0
  c->r[0]=R8(c->r[30]+0x00000059u); // 800D94C4
  W8(c->r[31]+0x00000059u,c->r[0]); // 800D94C8
  c->r[0]=R8(c->r[30]+0x0000005Au); // 800D94CC
  W8(c->r[31]+0x0000005Au,c->r[0]); // 800D94D0
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 800D94D4
  W8(c->r[31]+0x0000005Bu,c->r[0]); // 800D94D8
  c->r[0]=R8(c->r[30]+0x0000005Cu); // 800D94DC
  W8(c->r[31]+0x0000005Cu,c->r[0]); // 800D94E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D94E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D94E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D94EC
  c->lr=c->r[0]; // 800D94F0
  c->r[1]=c->r[1]+0x00000010u; // 800D94F4
  return; // 800D94F8
}

// fn_800D94FC
void f_800D94FC(Ctx* __restrict c) {
  trace_call(0x800D94FCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D94FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D9500
  c->ctr=c->r[12]; // 800D9504
  if (true) { dispatch(c,c->ctr); return; } // 800D9508
}

// fn_800D950C
void f_800D950C(Ctx* __restrict c) {
  trace_call(0x800D950Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D950C
  c->r[0]=c->lr; // 800D9510
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9514
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9518
  c->r[29]=c->r[3]|c->r[3]; // 800D951C
  c->r[30]=c->r[4]|c->r[4]; // 800D9520
  c->r[31]=c->r[5]|c->r[5]; // 800D9524
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9528
  cmps(c,0,(int32_t)c->r[0],7); // 800D952C
  if (!crb(c,0)) { goto L_800D9540; } // 800D9530
  c->r[4]=c->r[31]|c->r[31]; // 800D9534
  c->r[3]=c->r[3]+0x00000030u; // 800D9538
  c->lr=0x800D9540u; f_8003A994(c); // 800D953C
L_800D9540:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D9540
  c->r[3]=c->r[29]|c->r[29]; // 800D9544
  c->r[4]=c->r[30]|c->r[30]; // 800D9548
  c->r[5]=c->r[31]|c->r[31]; // 800D954C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9550
  c->ctr=c->r[12]; // 800D9554
  if (true) { c->lr=0x800D955Cu; dispatch(c,c->ctr); } // 800D9558
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D955C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9560
  c->lr=c->r[0]; // 800D9564
  c->r[1]=c->r[1]+0x00000020u; // 800D9568
  return; // 800D956C
}

// fn_800D9570
void f_800D9570(Ctx* __restrict c) {
  trace_call(0x800D9570u);
  c->r[3]=0u+0x80410000u; // 800D9570
  c->r[3]=c->r[3]+0xFFFFD764u; // 800D9574
  return; // 800D9578
}

// fn_800D957C
void f_800D957C(Ctx* __restrict c) {
  trace_call(0x800D957Cu);
  c->r[3]=0u+0x00000060u; // 800D957C
  return; // 800D9580
}

// fn_800D9584
void f_800D9584(Ctx* __restrict c) {
  trace_call(0x800D9584u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9584
  c->r[0]=c->lr; // 800D9588
  c->r[3]=0u+0x00000060u; // 800D958C
  c->r[4]=c->r[13]+0xFFFFB572u; // 800D9590
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9594
  c->r[5]=0u+0x00000000u; // 800D9598
  c->r[6]=0u+0x00001001u; // 800D959C
  c->lr=0x800D95A4u; f_80244D20(c); // 800D95A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D95A4
  if (crb(c,2)) { goto L_800D95B0; } // 800D95A8
  c->lr=0x800D95B0u; f_800D9318(c); // 800D95AC
L_800D95B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D95B0
  c->lr=c->r[0]; // 800D95B4
  c->r[1]=c->r[1]+0x00000010u; // 800D95B8
  return; // 800D95BC
}

// fn_800D95C0
void f_800D95C0(Ctx* __restrict c) {
  trace_call(0x800D95C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D95C0
  c->r[0]=c->lr; // 800D95C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D95C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D95CC
  c->r[31]=c->r[3]|c->r[3]; // 800D95D0
  c->lr=0x800D95D8u; f_800D7120(c); // 800D95D4
  c->r[5]=0u+0x80410000u; // 800D95D8
  c->r[3]=0u+0x3DED0000u; // 800D95DC
  c->r[4]=0u+0x00000000u; // 800D95E0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D95E4
  c->r[0]=c->r[3]+0x00000BBCu; // 800D95E8
  c->r[5]=c->r[5]+0x00007BC4u; // 800D95EC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D95F0
  c->r[3]=c->r[31]|c->r[31]; // 800D95F4
  W32(c->r[31]+0x0000004Cu,c->r[4]); // 800D95F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D95FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9600
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9604
  c->lr=c->r[0]; // 800D9608
  c->r[1]=c->r[1]+0x00000010u; // 800D960C
  return; // 800D9610
}

// fn_800D9614
void f_800D9614(Ctx* __restrict c) {
  trace_call(0x800D9614u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9614
  c->r[0]=c->lr; // 800D9618
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D961C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9620
  c->r[30]=c->r[3]|c->r[3]; // 800D9624
  c->r[31]=c->r[4]|c->r[4]; // 800D9628
  c->lr=0x800D9630u; f_8030D728(c); // 800D962C
  c->r[3]=c->r[31]|c->r[31]; // 800D9630
  c->r[4]=0u+0x00000000u; // 800D9634
  c->lr=0x800D963Cu; f_8030BE30(c); // 800D9638
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D963C
  c->r[3]=c->r[31]|c->r[31]; // 800D9640
  c->lr=0x800D9648u; f_8030BD1C(c); // 800D9644
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D9648
  c->r[3]=c->r[31]|c->r[31]; // 800D964C
  c->r[4]=0u+0x00000000u; // 800D9650
  c->lr=0x800D9658u; f_8030BE30(c); // 800D9654
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D9658
  c->r[3]=c->r[31]|c->r[31]; // 800D965C
  c->r[4]=0u+0x00000000u; // 800D9660
  c->lr=0x800D9668u; f_8030BE30(c); // 800D9664
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D9668
  c->r[3]=c->r[31]|c->r[31]; // 800D966C
  c->r[4]=0u+0x00000000u; // 800D9670
  c->lr=0x800D9678u; f_8030BE30(c); // 800D9674
  W32(c->r[30]+0x00000044u,c->r[3]); // 800D9678
  c->r[3]=c->r[31]|c->r[31]; // 800D967C
  c->lr=0x800D9684u; f_8030BD1C(c); // 800D9680
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D9684
  c->r[3]=c->r[31]|c->r[31]; // 800D9688
  c->r[4]=0u+0x00000000u; // 800D968C
  c->lr=0x800D9694u; f_8030BE30(c); // 800D9690
  W32(c->r[30]+0x00000050u,c->r[3]); // 800D9694
  c->r[3]=c->r[31]|c->r[31]; // 800D9698
  c->r[4]=0u+0x00000000u; // 800D969C
  c->lr=0x800D96A4u; f_8030BE30(c); // 800D96A0
  W32(c->r[30]+0x00000054u,c->r[3]); // 800D96A4
  c->r[3]=c->r[31]|c->r[31]; // 800D96A8
  c->lr=0x800D96B0u; f_8030C0A0(c); // 800D96AC
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800D96B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D96B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D96B8
  c->lr=c->r[0]; // 800D96BC
  c->r[1]=c->r[1]+0x00000010u; // 800D96C0
  return; // 800D96C4
}

// fn_800D96C8
void f_800D96C8(Ctx* __restrict c) {
  trace_call(0x800D96C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D96C8
  c->r[0]=c->lr; // 800D96CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D96D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D96D4
  c->r[31]=c->r[4]|c->r[4]; // 800D96D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D96DC
  c->r[30]=c->r[3]|c->r[3]; // 800D96E0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D96E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D96E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D96EC
  c->r[3]=c->r[4]+0x00000030u; // 800D96F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D96F4
  c->r[4]=c->r[30]+0x00000030u; // 800D96F8
  c->lr=0x800D9700u; f_8003AB48(c); // 800D96FC
  c->r[3]=c->r[31]+0x0000003Cu; // 800D9700
  c->r[4]=c->r[30]+0x0000003Cu; // 800D9704
  c->lr=0x800D970Cu; f_8003F6E4(c); // 800D9708
  c->r[3]=c->r[31]+0x00000044u; // 800D970C
  c->r[4]=c->r[30]+0x00000044u; // 800D9710
  c->lr=0x800D9718u; f_8003AB48(c); // 800D9714
  c->r[3]=c->r[31]+0x00000050u; // 800D9718
  c->r[4]=c->r[30]+0x00000050u; // 800D971C
  c->lr=0x800D9724u; f_8003F6E4(c); // 800D9720
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9724
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800D9728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D972C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9730
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9734
  c->lr=c->r[0]; // 800D9738
  c->r[1]=c->r[1]+0x00000010u; // 800D973C
  return; // 800D9740
}

// fn_800D9744
void f_800D9744(Ctx* __restrict c) {
  trace_call(0x800D9744u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D9744
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D9748
  c->ctr=c->r[12]; // 800D974C
  if (true) { dispatch(c,c->ctr); return; } // 800D9750
}

// fn_800D9754
void f_800D9754(Ctx* __restrict c) {
  trace_call(0x800D9754u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9754
  c->r[0]=c->lr; // 800D9758
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D975C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9760
  c->r[29]=c->r[3]|c->r[3]; // 800D9764
  c->r[30]=c->r[4]|c->r[4]; // 800D9768
  c->r[31]=c->r[5]|c->r[5]; // 800D976C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9770
  cmps(c,0,(int32_t)c->r[0],7); // 800D9774
  if (!crb(c,0)) { goto L_800D9788; } // 800D9778
  c->r[4]=c->r[31]|c->r[31]; // 800D977C
  c->r[3]=c->r[3]+0x00000030u; // 800D9780
  c->lr=0x800D9788u; f_8003A994(c); // 800D9784
L_800D9788:;
  c->r[0]=R32(c->r[29]+0x00000048u); // 800D9788
  cmps(c,0,(int32_t)c->r[0],7); // 800D978C
  if (!crb(c,0)) { goto L_800D97A0; } // 800D9790
  c->r[4]=c->r[31]|c->r[31]; // 800D9794
  c->r[3]=c->r[29]+0x00000044u; // 800D9798
  c->lr=0x800D97A0u; f_8003A994(c); // 800D979C
L_800D97A0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D97A0
  c->r[3]=c->r[29]|c->r[29]; // 800D97A4
  c->r[4]=c->r[30]|c->r[30]; // 800D97A8
  c->r[5]=c->r[31]|c->r[31]; // 800D97AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D97B0
  c->ctr=c->r[12]; // 800D97B4
  if (true) { c->lr=0x800D97BCu; dispatch(c,c->ctr); } // 800D97B8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D97BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D97C0
  c->lr=c->r[0]; // 800D97C4
  c->r[1]=c->r[1]+0x00000020u; // 800D97C8
  return; // 800D97CC
}

// fn_800D97D0
void f_800D97D0(Ctx* __restrict c) {
  trace_call(0x800D97D0u);
  c->r[3]=0u+0x80410000u; // 800D97D0
  c->r[3]=c->r[3]+0xFFFFD76Fu; // 800D97D4
  return; // 800D97D8
}

// fn_800D97DC
void f_800D97DC(Ctx* __restrict c) {
  trace_call(0x800D97DCu);
  c->r[3]=0u+0x0000005Cu; // 800D97DC
  return; // 800D97E0
}

// fn_800D97E4
void f_800D97E4(Ctx* __restrict c) {
  trace_call(0x800D97E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D97E4
  c->r[0]=c->lr; // 800D97E8
  c->r[3]=0u+0x0000005Cu; // 800D97EC
  c->r[4]=c->r[13]+0xFFFFB577u; // 800D97F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D97F4
  c->r[5]=0u+0x00000000u; // 800D97F8
  c->r[6]=0u+0x00001001u; // 800D97FC
  c->lr=0x800D9804u; f_80244D20(c); // 800D9800
  cmps(c,0,(int32_t)c->r[3],0); // 800D9804
  if (crb(c,2)) { goto L_800D9810; } // 800D9808
  c->lr=0x800D9810u; f_800D95C0(c); // 800D980C
L_800D9810:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9810
  c->lr=c->r[0]; // 800D9814
  c->r[1]=c->r[1]+0x00000010u; // 800D9818
  return; // 800D981C
}

// fn_800D9820
void f_800D9820(Ctx* __restrict c) {
  trace_call(0x800D9820u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9820
  c->r[0]=c->lr; // 800D9824
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9828
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D982C
  c->r[31]=c->r[3]|c->r[3]; // 800D9830
  c->lr=0x800D9838u; f_800D7120(c); // 800D9834
  c->r[5]=0u+0x80410000u; // 800D9838
  c->r[3]=0u+0x59720000u; // 800D983C
  c->r[0]=c->r[3]+0x00004EB8u; // 800D9840
  c->r[4]=0u+0x00000000u; // 800D9844
  c->r[5]=c->r[5]+0x00007B90u; // 800D9848
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D984C
  c->r[3]=c->r[31]|c->r[31]; // 800D9850
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D9854
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D9858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D985C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9860
  c->lr=c->r[0]; // 800D9864
  c->r[1]=c->r[1]+0x00000010u; // 800D9868
  return; // 800D986C
}

// fn_800D9870
void f_800D9870(Ctx* __restrict c) {
  trace_call(0x800D9870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9870
  c->r[0]=c->lr; // 800D9874
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9878
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D987C
  c->r[30]=c->r[3]|c->r[3]; // 800D9880
  c->r[31]=c->r[4]|c->r[4]; // 800D9884
  c->lr=0x800D988Cu; f_8030D728(c); // 800D9888
  c->r[3]=c->r[31]|c->r[31]; // 800D988C
  c->r[4]=0u+0x00000000u; // 800D9890
  c->lr=0x800D9898u; f_8030BE30(c); // 800D9894
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D9898
  c->r[3]=c->r[31]|c->r[31]; // 800D989C
  c->lr=0x800D98A4u; f_8030BD1C(c); // 800D98A0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D98A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D98A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D98AC
  c->lr=c->r[0]; // 800D98B0
  c->r[1]=c->r[1]+0x00000010u; // 800D98B4
  return; // 800D98B8
}

// fn_800D98BC
void f_800D98BC(Ctx* __restrict c) {
  trace_call(0x800D98BCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D98BC
  c->r[5]=c->r[3]|c->r[3]; // 800D98C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D98C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D98C8
  c->r[3]=c->r[4]+0x00000030u; // 800D98CC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D98D0
  c->r[4]=c->r[5]+0x00000030u; // 800D98D4
  f_8003AB48(c); return; // 800D98D8
}

// fn_800D98DC
void f_800D98DC(Ctx* __restrict c) {
  trace_call(0x800D98DCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D98DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D98E0
  c->ctr=c->r[12]; // 800D98E4
  if (true) { dispatch(c,c->ctr); return; } // 800D98E8
}

// fn_800D98EC
void f_800D98EC(Ctx* __restrict c) {
  trace_call(0x800D98ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D98EC
  c->r[0]=c->lr; // 800D98F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D98F4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D98F8
  c->r[29]=c->r[3]|c->r[3]; // 800D98FC
  c->r[30]=c->r[4]|c->r[4]; // 800D9900
  c->r[31]=c->r[5]|c->r[5]; // 800D9904
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9908
  cmps(c,0,(int32_t)c->r[0],7); // 800D990C
  if (!crb(c,0)) { goto L_800D9920; } // 800D9910
  c->r[4]=c->r[31]|c->r[31]; // 800D9914
  c->r[3]=c->r[3]+0x00000030u; // 800D9918
  c->lr=0x800D9920u; f_8003A994(c); // 800D991C
L_800D9920:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D9920
  c->r[3]=c->r[29]|c->r[29]; // 800D9924
  c->r[4]=c->r[30]|c->r[30]; // 800D9928
  c->r[5]=c->r[31]|c->r[31]; // 800D992C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9930
  c->ctr=c->r[12]; // 800D9934
  if (true) { c->lr=0x800D993Cu; dispatch(c,c->ctr); } // 800D9938
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D993C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9940
  c->lr=c->r[0]; // 800D9944
  c->r[1]=c->r[1]+0x00000020u; // 800D9948
  return; // 800D994C
}

// fn_800D9950
void f_800D9950(Ctx* __restrict c) {
  trace_call(0x800D9950u);
  c->r[3]=c->r[13]+0xFFFFB57Cu; // 800D9950
  return; // 800D9954
}

// fn_800D9958
void f_800D9958(Ctx* __restrict c) {
  trace_call(0x800D9958u);
  c->r[3]=0u+0x0000003Cu; // 800D9958
  return; // 800D995C
}

// fn_800D9960
void f_800D9960(Ctx* __restrict c) {
  trace_call(0x800D9960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9960
  c->r[0]=c->lr; // 800D9964
  c->r[3]=0u+0x0000003Cu; // 800D9968
  c->r[4]=c->r[13]+0xFFFFB583u; // 800D996C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9970
  c->r[5]=0u+0x00000000u; // 800D9974
  c->r[6]=0u+0x00001001u; // 800D9978
  c->lr=0x800D9980u; f_80244D20(c); // 800D997C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9980
  if (crb(c,2)) { goto L_800D998C; } // 800D9984
  c->lr=0x800D998Cu; f_800D9820(c); // 800D9988
L_800D998C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D998C
  c->lr=c->r[0]; // 800D9990
  c->r[1]=c->r[1]+0x00000010u; // 800D9994
  return; // 800D9998
}

// fn_800D999C
void f_800D999C(Ctx* __restrict c) {
  trace_call(0x800D999Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D999C
  c->r[0]=c->lr; // 800D99A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D99A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D99A8
  c->r[31]=c->r[3]|c->r[3]; // 800D99AC
  c->lr=0x800D99B4u; f_800D7120(c); // 800D99B0
  c->r[5]=0u+0x80410000u; // 800D99B4
  c->r[3]=0u+0xC0220000u; // 800D99B8
  c->r[0]=c->r[3]+0xFFFF833Du; // 800D99BC
  c->r[4]=0u+0x00000000u; // 800D99C0
  c->r[5]=c->r[5]+0x00007B5Cu; // 800D99C4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D99C8
  c->r[3]=c->r[31]|c->r[31]; // 800D99CC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D99D0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D99D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D99D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D99DC
  c->lr=c->r[0]; // 800D99E0
  c->r[1]=c->r[1]+0x00000010u; // 800D99E4
  return; // 800D99E8
}

// fn_800D99EC
void f_800D99EC(Ctx* __restrict c) {
  trace_call(0x800D99ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D99EC
  c->r[0]=c->lr; // 800D99F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D99F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D99F8
  c->r[30]=c->r[3]|c->r[3]; // 800D99FC
  c->r[31]=c->r[4]|c->r[4]; // 800D9A00
  c->lr=0x800D9A08u; f_8030D728(c); // 800D9A04
  c->r[3]=c->r[31]|c->r[31]; // 800D9A08
  c->r[4]=0u+0x00000000u; // 800D9A0C
  c->lr=0x800D9A14u; f_8030BE30(c); // 800D9A10
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D9A14
  c->r[3]=c->r[31]|c->r[31]; // 800D9A18
  c->lr=0x800D9A20u; f_8030BD1C(c); // 800D9A1C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D9A20
  c->r[3]=c->r[31]|c->r[31]; // 800D9A24
  c->lr=0x800D9A2Cu; f_8030C0A0(c); // 800D9A28
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800D9A2C
  c->r[3]=c->r[31]|c->r[31]; // 800D9A30
  c->lr=0x800D9A38u; f_8030BD1C(c); // 800D9A34
  W8(c->r[30]+0x00000040u,c->r[3]); // 800D9A38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9A40
  c->lr=c->r[0]; // 800D9A44
  c->r[1]=c->r[1]+0x00000010u; // 800D9A48
  return; // 800D9A4C
}

// fn_800D9A50
void f_800D9A50(Ctx* __restrict c) {
  trace_call(0x800D9A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9A50
  c->r[0]=c->lr; // 800D9A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9A5C
  c->r[31]=c->r[4]|c->r[4]; // 800D9A60
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9A64
  c->r[30]=c->r[3]|c->r[3]; // 800D9A68
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9A6C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D9A70
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D9A74
  c->r[3]=c->r[4]+0x00000030u; // 800D9A78
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D9A7C
  c->r[4]=c->r[30]+0x00000030u; // 800D9A80
  c->lr=0x800D9A88u; f_8003AB48(c); // 800D9A84
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9A88
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800D9A8C
  c->r[0]=R8(c->r[30]+0x00000040u); // 800D9A90
  W8(c->r[31]+0x00000040u,c->r[0]); // 800D9A94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9A98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D9A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9AA0
  c->lr=c->r[0]; // 800D9AA4
  c->r[1]=c->r[1]+0x00000010u; // 800D9AA8
  return; // 800D9AAC
}

// fn_800D9AB0
void f_800D9AB0(Ctx* __restrict c) {
  trace_call(0x800D9AB0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D9AB0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D9AB4
  c->ctr=c->r[12]; // 800D9AB8
  if (true) { dispatch(c,c->ctr); return; } // 800D9ABC
}

// fn_800D9AC0
void f_800D9AC0(Ctx* __restrict c) {
  trace_call(0x800D9AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9AC0
  c->r[0]=c->lr; // 800D9AC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9AC8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9ACC
  c->r[29]=c->r[3]|c->r[3]; // 800D9AD0
  c->r[30]=c->r[4]|c->r[4]; // 800D9AD4
  c->r[31]=c->r[5]|c->r[5]; // 800D9AD8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9ADC
  cmps(c,0,(int32_t)c->r[0],7); // 800D9AE0
  if (!crb(c,0)) { goto L_800D9AF4; } // 800D9AE4
  c->r[4]=c->r[31]|c->r[31]; // 800D9AE8
  c->r[3]=c->r[3]+0x00000030u; // 800D9AEC
  c->lr=0x800D9AF4u; f_8003A994(c); // 800D9AF0
L_800D9AF4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D9AF4
  c->r[3]=c->r[29]|c->r[29]; // 800D9AF8
  c->r[4]=c->r[30]|c->r[30]; // 800D9AFC
  c->r[5]=c->r[31]|c->r[31]; // 800D9B00
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9B04
  c->ctr=c->r[12]; // 800D9B08
  if (true) { c->lr=0x800D9B10u; dispatch(c,c->ctr); } // 800D9B0C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9B10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9B14
  c->lr=c->r[0]; // 800D9B18
  c->r[1]=c->r[1]+0x00000020u; // 800D9B1C
  return; // 800D9B20
}

// fn_800D9B24
void f_800D9B24(Ctx* __restrict c) {
  trace_call(0x800D9B24u);
  c->r[3]=0u+0x80410000u; // 800D9B24
  c->r[3]=c->r[3]+0xFFFFD77Eu; // 800D9B28
  return; // 800D9B2C
}

// fn_800D9B30
void f_800D9B30(Ctx* __restrict c) {
  trace_call(0x800D9B30u);
  c->r[3]=0u+0x00000044u; // 800D9B30
  return; // 800D9B34
}

// fn_800D9B38
void f_800D9B38(Ctx* __restrict c) {
  trace_call(0x800D9B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9B38
  c->r[0]=c->lr; // 800D9B3C
  c->r[3]=0u+0x00000044u; // 800D9B40
  c->r[4]=c->r[13]+0xFFFFB588u; // 800D9B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9B48
  c->r[5]=0u+0x00000000u; // 800D9B4C
  c->r[6]=0u+0x00001001u; // 800D9B50
  c->lr=0x800D9B58u; f_80244D20(c); // 800D9B54
  cmps(c,0,(int32_t)c->r[3],0); // 800D9B58
  if (crb(c,2)) { goto L_800D9B64; } // 800D9B5C
  c->lr=0x800D9B64u; f_800D999C(c); // 800D9B60
L_800D9B64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9B64
  c->lr=c->r[0]; // 800D9B68
  c->r[1]=c->r[1]+0x00000010u; // 800D9B6C
  return; // 800D9B70
}

// fn_800D9B74
void f_800D9B74(Ctx* __restrict c) {
  trace_call(0x800D9B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9B74
  c->r[0]=c->lr; // 800D9B78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9B7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9B80
  c->r[31]=c->r[3]|c->r[3]; // 800D9B84
  c->lr=0x800D9B8Cu; f_800D7120(c); // 800D9B88
  c->r[5]=0u+0x80410000u; // 800D9B8C
  c->r[3]=0u+0x1D240000u; // 800D9B90
  c->r[0]=c->r[3]+0x00005436u; // 800D9B94
  c->r[4]=0u+0x00000000u; // 800D9B98
  c->r[5]=c->r[5]+0x00007B28u; // 800D9B9C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D9BA0
  c->r[3]=c->r[31]|c->r[31]; // 800D9BA4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D9BA8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D9BAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9BB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9BB4
  c->lr=c->r[0]; // 800D9BB8
  c->r[1]=c->r[1]+0x00000010u; // 800D9BBC
  return; // 800D9BC0
}

// fn_800D9BC4
void f_800D9BC4(Ctx* __restrict c) {
  trace_call(0x800D9BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9BC4
  c->r[0]=c->lr; // 800D9BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9BCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9BD0
  c->r[30]=c->r[3]|c->r[3]; // 800D9BD4
  c->r[31]=c->r[4]|c->r[4]; // 800D9BD8
  c->lr=0x800D9BE0u; f_8030D728(c); // 800D9BDC
  c->r[3]=c->r[31]|c->r[31]; // 800D9BE0
  c->r[4]=0u+0x00000000u; // 800D9BE4
  c->lr=0x800D9BECu; f_8030BE30(c); // 800D9BE8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D9BEC
  c->r[3]=c->r[31]|c->r[31]; // 800D9BF0
  c->lr=0x800D9BF8u; f_8030BD1C(c); // 800D9BF4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D9BF8
  c->r[3]=c->r[31]|c->r[31]; // 800D9BFC
  c->lr=0x800D9C04u; f_8030BD1C(c); // 800D9C00
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D9C04
  c->r[3]=c->r[31]|c->r[31]; // 800D9C08
  c->lr=0x800D9C10u; f_8030BD1C(c); // 800D9C0C
  W8(c->r[30]+0x00000040u,c->r[3]); // 800D9C10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9C14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9C18
  c->lr=c->r[0]; // 800D9C1C
  c->r[1]=c->r[1]+0x00000010u; // 800D9C20
  return; // 800D9C24
}

// fn_800D9C28
void f_800D9C28(Ctx* __restrict c) {
  trace_call(0x800D9C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9C28
  c->r[0]=c->lr; // 800D9C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9C30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9C34
  c->r[30]=c->r[3]|c->r[3]; // 800D9C38
  c->r[31]=c->r[4]|c->r[4]; // 800D9C3C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9C40
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D9C44
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D9C48
  c->r[3]=c->r[4]+0x00000030u; // 800D9C4C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D9C50
  c->r[4]=c->r[30]+0x00000030u; // 800D9C54
  c->lr=0x800D9C5Cu; f_8003AB48(c); // 800D9C58
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800D9C5C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800D9C60
  c->r[0]=R8(c->r[30]+0x00000040u); // 800D9C64
  W8(c->r[31]+0x00000040u,c->r[0]); // 800D9C68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9C70
  c->lr=c->r[0]; // 800D9C74
  c->r[1]=c->r[1]+0x00000010u; // 800D9C78
  return; // 800D9C7C
}

// fn_800D9C80
void f_800D9C80(Ctx* __restrict c) {
  trace_call(0x800D9C80u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D9C80
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D9C84
  c->ctr=c->r[12]; // 800D9C88
  if (true) { dispatch(c,c->ctr); return; } // 800D9C8C
}

// fn_800D9C90
void f_800D9C90(Ctx* __restrict c) {
  trace_call(0x800D9C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9C90
  c->r[0]=c->lr; // 800D9C94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9C98
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9C9C
  c->r[29]=c->r[3]|c->r[3]; // 800D9CA0
  c->r[30]=c->r[4]|c->r[4]; // 800D9CA4
  c->r[31]=c->r[5]|c->r[5]; // 800D9CA8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9CAC
  cmps(c,0,(int32_t)c->r[0],7); // 800D9CB0
  if (!crb(c,0)) { goto L_800D9CC4; } // 800D9CB4
  c->r[4]=c->r[31]|c->r[31]; // 800D9CB8
  c->r[3]=c->r[3]+0x00000030u; // 800D9CBC
  c->lr=0x800D9CC4u; f_8003A994(c); // 800D9CC0
L_800D9CC4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D9CC4
  c->r[3]=c->r[29]|c->r[29]; // 800D9CC8
  c->r[4]=c->r[30]|c->r[30]; // 800D9CCC
  c->r[5]=c->r[31]|c->r[31]; // 800D9CD0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9CD4
  c->ctr=c->r[12]; // 800D9CD8
  if (true) { c->lr=0x800D9CE0u; dispatch(c,c->ctr); } // 800D9CDC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9CE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9CE4
  c->lr=c->r[0]; // 800D9CE8
  c->r[1]=c->r[1]+0x00000020u; // 800D9CEC
  return; // 800D9CF0
}

// fn_800D9CF4
void f_800D9CF4(Ctx* __restrict c) {
  trace_call(0x800D9CF4u);
  c->r[3]=0u+0x80410000u; // 800D9CF4
  c->r[3]=c->r[3]+0xFFFFD798u; // 800D9CF8
  return; // 800D9CFC
}

// fn_800D9D00
void f_800D9D00(Ctx* __restrict c) {
  trace_call(0x800D9D00u);
  c->r[3]=0u+0x00000044u; // 800D9D00
  return; // 800D9D04
}

// fn_800D9D08
void f_800D9D08(Ctx* __restrict c) {
  trace_call(0x800D9D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9D08
  c->r[0]=c->lr; // 800D9D0C
  c->r[3]=0u+0x00000044u; // 800D9D10
  c->r[4]=c->r[13]+0xFFFFB58Du; // 800D9D14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9D18
  c->r[5]=0u+0x00000000u; // 800D9D1C
  c->r[6]=0u+0x00001001u; // 800D9D20
  c->lr=0x800D9D28u; f_80244D20(c); // 800D9D24
  cmps(c,0,(int32_t)c->r[3],0); // 800D9D28
  if (crb(c,2)) { goto L_800D9D34; } // 800D9D2C
  c->lr=0x800D9D34u; f_800D9B74(c); // 800D9D30
L_800D9D34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9D34
  c->lr=c->r[0]; // 800D9D38
  c->r[1]=c->r[1]+0x00000010u; // 800D9D3C
  return; // 800D9D40
}

// fn_800D9D44
void f_800D9D44(Ctx* __restrict c) {
  trace_call(0x800D9D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9D44
  c->r[0]=c->lr; // 800D9D48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9D4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9D50
  c->r[31]=c->r[3]|c->r[3]; // 800D9D54
  c->lr=0x800D9D5Cu; f_800D7120(c); // 800D9D58
  c->r[4]=0u+0x80410000u; // 800D9D5C
  c->r[3]=0u+0xB7440000u; // 800D9D60
  c->r[0]=c->r[3]+0xFFFFB994u; // 800D9D64
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D9D68
  c->r[4]=c->r[4]+0x00007AF4u; // 800D9D6C
  c->r[3]=c->r[31]|c->r[31]; // 800D9D70
  W32(c->r[31]+0x00000008u,c->r[4]); // 800D9D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9D78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9D7C
  c->lr=c->r[0]; // 800D9D80
  c->r[1]=c->r[1]+0x00000010u; // 800D9D84
  return; // 800D9D88
}

// fn_800D9D8C
void f_800D9D8C(Ctx* __restrict c) {
  trace_call(0x800D9D8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9D8C
  c->r[0]=c->lr; // 800D9D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9D94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9D98
  c->r[30]=c->r[3]|c->r[3]; // 800D9D9C
  c->r[31]=c->r[4]|c->r[4]; // 800D9DA0
  c->lr=0x800D9DA8u; f_8030D728(c); // 800D9DA4
  c->r[3]=c->r[31]|c->r[31]; // 800D9DA8
  c->lr=0x800D9DB0u; f_8030BD1C(c); // 800D9DAC
  W8(c->r[30]+0x00000030u,c->r[3]); // 800D9DB0
  c->r[3]=c->r[31]|c->r[31]; // 800D9DB4
  c->lr=0x800D9DBCu; f_8030BD1C(c); // 800D9DB8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D9DBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9DC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9DC4
  c->lr=c->r[0]; // 800D9DC8
  c->r[1]=c->r[1]+0x00000010u; // 800D9DCC
  return; // 800D9DD0
}

// fn_800D9DD4
void f_800D9DD4(Ctx* __restrict c) {
  trace_call(0x800D9DD4u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D9DD4
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D9DD8
  c->r[5]=R8(c->r[3]+0x00000030u); // 800D9DDC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9DE0
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D9DE4
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D9DE8
  W8(c->r[4]+0x00000030u,c->r[5]); // 800D9DEC
  W32(c->r[4]+0x00000034u,c->r[0]); // 800D9DF0
  return; // 800D9DF4
}

// fn_800D9DF8
void f_800D9DF8(Ctx* __restrict c) {
  trace_call(0x800D9DF8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D9DF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D9DFC
  c->ctr=c->r[12]; // 800D9E00
  if (true) { dispatch(c,c->ctr); return; } // 800D9E04
}

// fn_800D9E08
void f_800D9E08(Ctx* __restrict c) {
  trace_call(0x800D9E08u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D9E08
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9E0C
  c->ctr=c->r[12]; // 800D9E10
  if (true) { dispatch(c,c->ctr); return; } // 800D9E14
}

// fn_800D9E18
void f_800D9E18(Ctx* __restrict c) {
  trace_call(0x800D9E18u);
  c->r[3]=0u+0x80410000u; // 800D9E18
  c->r[3]=c->r[3]+0xFFFFD7B6u; // 800D9E1C
  return; // 800D9E20
}

// fn_800D9E24
void f_800D9E24(Ctx* __restrict c) {
  trace_call(0x800D9E24u);
  c->r[3]=0u+0x00000038u; // 800D9E24
  return; // 800D9E28
}

// fn_800D9E2C
void f_800D9E2C(Ctx* __restrict c) {
  trace_call(0x800D9E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9E2C
  c->r[0]=c->lr; // 800D9E30
  c->r[3]=0u+0x00000038u; // 800D9E34
  c->r[4]=c->r[13]+0xFFFFB592u; // 800D9E38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9E3C
  c->r[5]=0u+0x00000000u; // 800D9E40
  c->r[6]=0u+0x00001001u; // 800D9E44
  c->lr=0x800D9E4Cu; f_80244D20(c); // 800D9E48
  cmps(c,0,(int32_t)c->r[3],0); // 800D9E4C
  if (crb(c,2)) { goto L_800D9E58; } // 800D9E50
  c->lr=0x800D9E58u; f_800D9D44(c); // 800D9E54
L_800D9E58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9E58
  c->lr=c->r[0]; // 800D9E5C
  c->r[1]=c->r[1]+0x00000010u; // 800D9E60
  return; // 800D9E64
}

// fn_800D9E68
void f_800D9E68(Ctx* __restrict c) {
  trace_call(0x800D9E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9E68
  c->r[0]=c->lr; // 800D9E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9E74
  c->r[31]=c->r[3]|c->r[3]; // 800D9E78
  c->lr=0x800D9E80u; f_800D7120(c); // 800D9E7C
  c->r[5]=0u+0x80410000u; // 800D9E80
  c->r[3]=0u+0x3B1C0000u; // 800D9E84
  c->r[4]=0u+0x00000000u; // 800D9E88
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D9E8C
  c->r[0]=c->r[3]+0xFFFF804Fu; // 800D9E90
  c->r[5]=c->r[5]+0x00007AC0u; // 800D9E94
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D9E98
  c->r[3]=c->r[31]|c->r[31]; // 800D9E9C
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D9EA0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D9EA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D9EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9EAC
  c->lr=c->r[0]; // 800D9EB0
  c->r[1]=c->r[1]+0x00000010u; // 800D9EB4
  return; // 800D9EB8
}

// fn_800D9EBC
void f_800D9EBC(Ctx* __restrict c) {
  trace_call(0x800D9EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9EBC
  c->r[0]=c->lr; // 800D9EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9EC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9EC8
  c->r[30]=c->r[3]|c->r[3]; // 800D9ECC
  c->r[31]=c->r[4]|c->r[4]; // 800D9ED0
  c->lr=0x800D9ED8u; f_8030D728(c); // 800D9ED4
  c->r[3]=c->r[31]|c->r[31]; // 800D9ED8
  c->r[4]=0u+0x00000000u; // 800D9EDC
  c->lr=0x800D9EE4u; f_8030BE30(c); // 800D9EE0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D9EE4
  c->r[3]=c->r[31]|c->r[31]; // 800D9EE8
  c->lr=0x800D9EF0u; f_8030BD1C(c); // 800D9EEC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D9EF0
  c->r[3]=c->r[31]|c->r[31]; // 800D9EF4
  c->r[4]=0u+0x00000000u; // 800D9EF8
  c->lr=0x800D9F00u; f_8030BE30(c); // 800D9EFC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D9F00
  c->r[3]=c->r[31]|c->r[31]; // 800D9F04
  c->lr=0x800D9F0Cu; f_8030BD1C(c); // 800D9F08
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D9F0C
  c->r[3]=c->r[31]|c->r[31]; // 800D9F10
  c->r[4]=0u+0x00000000u; // 800D9F14
  c->lr=0x800D9F1Cu; f_8030BE30(c); // 800D9F18
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D9F1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9F20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9F24
  c->lr=c->r[0]; // 800D9F28
  c->r[1]=c->r[1]+0x00000010u; // 800D9F2C
  return; // 800D9F30
}

// fn_800D9F34
void f_800D9F34(Ctx* __restrict c) {
  trace_call(0x800D9F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9F34
  c->r[0]=c->lr; // 800D9F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9F3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9F40
  c->r[30]=c->r[3]|c->r[3]; // 800D9F44
  c->r[31]=c->r[4]|c->r[4]; // 800D9F48
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9F4C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D9F50
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D9F54
  c->r[3]=c->r[4]+0x00000030u; // 800D9F58
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D9F5C
  c->r[4]=c->r[30]+0x00000030u; // 800D9F60
  c->lr=0x800D9F68u; f_8003AB48(c); // 800D9F64
  c->r[3]=c->r[31]+0x0000003Cu; // 800D9F68
  c->r[4]=c->r[30]+0x0000003Cu; // 800D9F6C
  c->lr=0x800D9F74u; f_8003AB48(c); // 800D9F70
  c->r[0]=R32(c->r[30]+0x00000048u); // 800D9F74
  W32(c->r[31]+0x00000048u,c->r[0]); // 800D9F78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9F7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9F80
  c->lr=c->r[0]; // 800D9F84
  c->r[1]=c->r[1]+0x00000010u; // 800D9F88
  return; // 800D9F8C
}

// fn_800D9F90
void f_800D9F90(Ctx* __restrict c) {
  trace_call(0x800D9F90u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D9F90
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D9F94
  c->ctr=c->r[12]; // 800D9F98
  if (true) { dispatch(c,c->ctr); return; } // 800D9F9C
}

// fn_800D9FA0
void f_800D9FA0(Ctx* __restrict c) {
  trace_call(0x800D9FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9FA0
  c->r[0]=c->lr; // 800D9FA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9FA8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9FAC
  c->r[29]=c->r[3]|c->r[3]; // 800D9FB0
  c->r[30]=c->r[4]|c->r[4]; // 800D9FB4
  c->r[31]=c->r[5]|c->r[5]; // 800D9FB8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D9FBC
  cmps(c,0,(int32_t)c->r[0],7); // 800D9FC0
  if (!crb(c,0)) { goto L_800D9FD4; } // 800D9FC4
  c->r[4]=c->r[31]|c->r[31]; // 800D9FC8
  c->r[3]=c->r[3]+0x00000030u; // 800D9FCC
  c->lr=0x800D9FD4u; f_8003A994(c); // 800D9FD0
L_800D9FD4:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D9FD4
  cmps(c,0,(int32_t)c->r[0],7); // 800D9FD8
  if (!crb(c,0)) { goto L_800D9FEC; } // 800D9FDC
  c->r[4]=c->r[31]|c->r[31]; // 800D9FE0
  c->r[3]=c->r[29]+0x0000003Cu; // 800D9FE4
  c->lr=0x800D9FECu; f_8003A994(c); // 800D9FE8
L_800D9FEC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D9FEC
  c->r[3]=c->r[29]|c->r[29]; // 800D9FF0
  c->r[4]=c->r[30]|c->r[30]; // 800D9FF4
  c->r[5]=c->r[31]|c->r[31]; // 800D9FF8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D9FFC
  c->ctr=c->r[12]; // 800DA000
  if (true) { c->lr=0x800DA008u; dispatch(c,c->ctr); } // 800DA004
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA008
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA00C
  c->lr=c->r[0]; // 800DA010
  c->r[1]=c->r[1]+0x00000020u; // 800DA014
  return; // 800DA018
}

// fn_800DA01C
void f_800DA01C(Ctx* __restrict c) {
  trace_call(0x800DA01Cu);
  c->r[3]=0u+0x80410000u; // 800DA01C
  c->r[3]=c->r[3]+0xFFFFD7CAu; // 800DA020
  return; // 800DA024
}

// fn_800DA028
void f_800DA028(Ctx* __restrict c) {
  trace_call(0x800DA028u);
  c->r[3]=0u+0x0000004Cu; // 800DA028
  return; // 800DA02C
}

// fn_800DA030
void f_800DA030(Ctx* __restrict c) {
  trace_call(0x800DA030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA030
  c->r[0]=c->lr; // 800DA034
  c->r[3]=0u+0x0000004Cu; // 800DA038
  c->r[4]=c->r[13]+0xFFFFB597u; // 800DA03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA040
  c->r[5]=0u+0x00000000u; // 800DA044
  c->r[6]=0u+0x00001001u; // 800DA048
  c->lr=0x800DA050u; f_80244D20(c); // 800DA04C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA050
  if (crb(c,2)) { goto L_800DA05C; } // 800DA054
  c->lr=0x800DA05Cu; f_800D9E68(c); // 800DA058
L_800DA05C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA05C
  c->lr=c->r[0]; // 800DA060
  c->r[1]=c->r[1]+0x00000010u; // 800DA064
  return; // 800DA068
}

// fn_800DA06C
void f_800DA06C(Ctx* __restrict c) {
  trace_call(0x800DA06Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA06C
  c->r[0]=c->lr; // 800DA070
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA078
  c->r[31]=c->r[3]|c->r[3]; // 800DA07C
  c->lr=0x800DA084u; f_800D7120(c); // 800DA080
  c->r[5]=0u+0x80410000u; // 800DA084
  c->r[3]=0u+0x37F80000u; // 800DA088
  c->r[0]=c->r[3]+0x00004075u; // 800DA08C
  c->r[4]=0u+0x00000000u; // 800DA090
  c->r[5]=c->r[5]+0x00007A8Cu; // 800DA094
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DA098
  c->r[3]=c->r[31]|c->r[31]; // 800DA09C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DA0A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DA0A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA0A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA0AC
  c->lr=c->r[0]; // 800DA0B0
  c->r[1]=c->r[1]+0x00000010u; // 800DA0B4
  return; // 800DA0B8
}

// fn_800DA0BC
void f_800DA0BC(Ctx* __restrict c) {
  trace_call(0x800DA0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA0BC
  c->r[0]=c->lr; // 800DA0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA0C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA0C8
  c->r[30]=c->r[3]|c->r[3]; // 800DA0CC
  c->r[31]=c->r[4]|c->r[4]; // 800DA0D0
  c->lr=0x800DA0D8u; f_8030D728(c); // 800DA0D4
  c->r[3]=c->r[31]|c->r[31]; // 800DA0D8
  c->r[4]=0u+0x00000000u; // 800DA0DC
  c->lr=0x800DA0E4u; f_8030BE30(c); // 800DA0E0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DA0E4
  c->r[3]=c->r[31]|c->r[31]; // 800DA0E8
  c->lr=0x800DA0F0u; f_8030BD1C(c); // 800DA0EC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DA0F0
  c->r[3]=c->r[31]|c->r[31]; // 800DA0F4
  c->r[4]=0u+0x00000000u; // 800DA0F8
  c->lr=0x800DA100u; f_8030BE30(c); // 800DA0FC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DA100
  c->r[3]=c->r[31]|c->r[31]; // 800DA104
  c->r[4]=0u+0x00000000u; // 800DA108
  c->lr=0x800DA110u; f_8030BE30(c); // 800DA10C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DA110
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA114
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA118
  c->lr=c->r[0]; // 800DA11C
  c->r[1]=c->r[1]+0x00000010u; // 800DA120
  return; // 800DA124
}

// fn_800DA128
void f_800DA128(Ctx* __restrict c) {
  trace_call(0x800DA128u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA128
  c->r[0]=c->lr; // 800DA12C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA130
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA134
  c->r[30]=c->r[3]|c->r[3]; // 800DA138
  c->r[31]=c->r[4]|c->r[4]; // 800DA13C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DA140
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DA144
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DA148
  c->r[3]=c->r[4]+0x00000030u; // 800DA14C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DA150
  c->r[4]=c->r[30]+0x00000030u; // 800DA154
  c->lr=0x800DA15Cu; f_8003AB48(c); // 800DA158
  c->r[3]=c->r[31]+0x0000003Cu; // 800DA15C
  c->r[4]=c->r[30]+0x0000003Cu; // 800DA160
  c->lr=0x800DA168u; f_8003F6E4(c); // 800DA164
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA168
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA16C
  c->lr=c->r[0]; // 800DA170
  c->r[1]=c->r[1]+0x00000010u; // 800DA174
  return; // 800DA178
}

// fn_800DA17C
void f_800DA17C(Ctx* __restrict c) {
  trace_call(0x800DA17Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DA17C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA180
  c->ctr=c->r[12]; // 800DA184
  if (true) { dispatch(c,c->ctr); return; } // 800DA188
}

// fn_800DA18C
void f_800DA18C(Ctx* __restrict c) {
  trace_call(0x800DA18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA18C
  c->r[0]=c->lr; // 800DA190
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA194
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA198
  c->r[29]=c->r[3]|c->r[3]; // 800DA19C
  c->r[30]=c->r[4]|c->r[4]; // 800DA1A0
  c->r[31]=c->r[5]|c->r[5]; // 800DA1A4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DA1A8
  cmps(c,0,(int32_t)c->r[0],7); // 800DA1AC
  if (!crb(c,0)) { goto L_800DA1C0; } // 800DA1B0
  c->r[4]=c->r[31]|c->r[31]; // 800DA1B4
  c->r[3]=c->r[3]+0x00000030u; // 800DA1B8
  c->lr=0x800DA1C0u; f_8003A994(c); // 800DA1BC
L_800DA1C0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DA1C0
  c->r[3]=c->r[29]|c->r[29]; // 800DA1C4
  c->r[4]=c->r[30]|c->r[30]; // 800DA1C8
  c->r[5]=c->r[31]|c->r[31]; // 800DA1CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DA1D0
  c->ctr=c->r[12]; // 800DA1D4
  if (true) { c->lr=0x800DA1DCu; dispatch(c,c->ctr); } // 800DA1D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA1DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA1E0
  c->lr=c->r[0]; // 800DA1E4
  c->r[1]=c->r[1]+0x00000020u; // 800DA1E8
  return; // 800DA1EC
}

// fn_800DA1F0
void f_800DA1F0(Ctx* __restrict c) {
  trace_call(0x800DA1F0u);
  c->r[3]=0u+0x80410000u; // 800DA1F0
  c->r[3]=c->r[3]+0xFFFFD7E3u; // 800DA1F4
  return; // 800DA1F8
}

// fn_800DA1FC
void f_800DA1FC(Ctx* __restrict c) {
  trace_call(0x800DA1FCu);
  c->r[3]=0u+0x00000044u; // 800DA1FC
  return; // 800DA200
}

// fn_800DA204
void f_800DA204(Ctx* __restrict c) {
  trace_call(0x800DA204u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA204
  c->r[0]=c->lr; // 800DA208
  c->r[3]=0u+0x00000044u; // 800DA20C
  c->r[4]=c->r[13]+0xFFFFB59Cu; // 800DA210
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA214
  c->r[5]=0u+0x00000000u; // 800DA218
  c->r[6]=0u+0x00001001u; // 800DA21C
  c->lr=0x800DA224u; f_80244D20(c); // 800DA220
  cmps(c,0,(int32_t)c->r[3],0); // 800DA224
  if (crb(c,2)) { goto L_800DA230; } // 800DA228
  c->lr=0x800DA230u; f_800DA06C(c); // 800DA22C
L_800DA230:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA230
  c->lr=c->r[0]; // 800DA234
  c->r[1]=c->r[1]+0x00000010u; // 800DA238
  return; // 800DA23C
}

// fn_800DA240
void f_800DA240(Ctx* __restrict c) {
  trace_call(0x800DA240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA240
  c->r[0]=c->lr; // 800DA244
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA24C
  c->r[31]=c->r[3]|c->r[3]; // 800DA250
  c->lr=0x800DA258u; f_800D7120(c); // 800DA254
  c->r[5]=0u+0x80410000u; // 800DA258
  c->r[3]=0u+0x59720000u; // 800DA25C
  c->r[0]=c->r[3]+0x00004EB8u; // 800DA260
  c->r[4]=0u+0x00000000u; // 800DA264
  c->r[5]=c->r[5]+0x00007A58u; // 800DA268
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DA26C
  c->r[3]=c->r[31]|c->r[31]; // 800DA270
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DA274
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DA278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA27C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA280
  c->lr=c->r[0]; // 800DA284
  c->r[1]=c->r[1]+0x00000010u; // 800DA288
  return; // 800DA28C
}

// fn_800DA290
void f_800DA290(Ctx* __restrict c) {
  trace_call(0x800DA290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA290
  c->r[0]=c->lr; // 800DA294
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA298
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA29C
  c->r[30]=c->r[3]|c->r[3]; // 800DA2A0
  c->r[31]=c->r[4]|c->r[4]; // 800DA2A4
  c->lr=0x800DA2ACu; f_8030D728(c); // 800DA2A8
  c->r[3]=c->r[31]|c->r[31]; // 800DA2AC
  c->r[4]=0u+0x00000000u; // 800DA2B0
  c->lr=0x800DA2B8u; f_8030BE30(c); // 800DA2B4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DA2B8
  c->r[3]=c->r[31]|c->r[31]; // 800DA2BC
  c->lr=0x800DA2C4u; f_8030BD1C(c); // 800DA2C0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DA2C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA2C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA2CC
  c->lr=c->r[0]; // 800DA2D0
  c->r[1]=c->r[1]+0x00000010u; // 800DA2D4
  return; // 800DA2D8
}

// fn_800DA2DC
void f_800DA2DC(Ctx* __restrict c) {
  trace_call(0x800DA2DCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DA2DC
  c->r[5]=c->r[3]|c->r[3]; // 800DA2E0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DA2E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DA2E8
  c->r[3]=c->r[4]+0x00000030u; // 800DA2EC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DA2F0
  c->r[4]=c->r[5]+0x00000030u; // 800DA2F4
  f_8003AB48(c); return; // 800DA2F8
}

// fn_800DA2FC
void f_800DA2FC(Ctx* __restrict c) {
  trace_call(0x800DA2FCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DA2FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA300
  c->ctr=c->r[12]; // 800DA304
  if (true) { dispatch(c,c->ctr); return; } // 800DA308
}

// fn_800DA30C
void f_800DA30C(Ctx* __restrict c) {
  trace_call(0x800DA30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA30C
  c->r[0]=c->lr; // 800DA310
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA314
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA318
  c->r[29]=c->r[3]|c->r[3]; // 800DA31C
  c->r[30]=c->r[4]|c->r[4]; // 800DA320
  c->r[31]=c->r[5]|c->r[5]; // 800DA324
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DA328
  cmps(c,0,(int32_t)c->r[0],7); // 800DA32C
  if (!crb(c,0)) { goto L_800DA340; } // 800DA330
  c->r[4]=c->r[31]|c->r[31]; // 800DA334
  c->r[3]=c->r[3]+0x00000030u; // 800DA338
  c->lr=0x800DA340u; f_8003A994(c); // 800DA33C
L_800DA340:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DA340
  c->r[3]=c->r[29]|c->r[29]; // 800DA344
  c->r[4]=c->r[30]|c->r[30]; // 800DA348
  c->r[5]=c->r[31]|c->r[31]; // 800DA34C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DA350
  c->ctr=c->r[12]; // 800DA354
  if (true) { c->lr=0x800DA35Cu; dispatch(c,c->ctr); } // 800DA358
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA35C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA360
  c->lr=c->r[0]; // 800DA364
  c->r[1]=c->r[1]+0x00000020u; // 800DA368
  return; // 800DA36C
}

// fn_800DA370
void f_800DA370(Ctx* __restrict c) {
  trace_call(0x800DA370u);
  c->r[3]=0u+0x80410000u; // 800DA370
  c->r[3]=c->r[3]+0xFFFFD7F1u; // 800DA374
  return; // 800DA378
}

// fn_800DA37C
void f_800DA37C(Ctx* __restrict c) {
  trace_call(0x800DA37Cu);
  c->r[3]=0u+0x0000003Cu; // 800DA37C
  return; // 800DA380
}

// fn_800DA384
void f_800DA384(Ctx* __restrict c) {
  trace_call(0x800DA384u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA384
  c->r[0]=c->lr; // 800DA388
  c->r[3]=0u+0x0000003Cu; // 800DA38C
  c->r[4]=c->r[13]+0xFFFFB5A1u; // 800DA390
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA394
  c->r[5]=0u+0x00000000u; // 800DA398
  c->r[6]=0u+0x00001001u; // 800DA39C
  c->lr=0x800DA3A4u; f_80244D20(c); // 800DA3A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA3A4
  if (crb(c,2)) { goto L_800DA3B0; } // 800DA3A8
  c->lr=0x800DA3B0u; f_800DA240(c); // 800DA3AC
L_800DA3B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA3B0
  c->lr=c->r[0]; // 800DA3B4
  c->r[1]=c->r[1]+0x00000010u; // 800DA3B8
  return; // 800DA3BC
}

// fn_800DA3C0
void f_800DA3C0(Ctx* __restrict c) {
  trace_call(0x800DA3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA3C0
  c->r[0]=c->lr; // 800DA3C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA3C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA3CC
  c->r[31]=c->r[3]|c->r[3]; // 800DA3D0
  c->lr=0x800DA3D8u; f_800D7120(c); // 800DA3D4
  c->r[5]=0u+0x80410000u; // 800DA3D8
  c->r[3]=0u+0x59720000u; // 800DA3DC
  c->r[0]=c->r[3]+0x00004EB8u; // 800DA3E0
  c->r[4]=0u+0x00000000u; // 800DA3E4
  c->r[5]=c->r[5]+0x00007A24u; // 800DA3E8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DA3EC
  c->r[3]=c->r[31]|c->r[31]; // 800DA3F0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DA3F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DA3F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA3FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA400
  c->lr=c->r[0]; // 800DA404
  c->r[1]=c->r[1]+0x00000010u; // 800DA408
  return; // 800DA40C
}

// fn_800DA410
void f_800DA410(Ctx* __restrict c) {
  trace_call(0x800DA410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA410
  c->r[0]=c->lr; // 800DA414
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA418
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA41C
  c->r[30]=c->r[3]|c->r[3]; // 800DA420
  c->r[31]=c->r[4]|c->r[4]; // 800DA424
  c->lr=0x800DA42Cu; f_8030D728(c); // 800DA428
  c->r[3]=c->r[31]|c->r[31]; // 800DA42C
  c->r[4]=0u+0x00000000u; // 800DA430
  c->lr=0x800DA438u; f_8030BE30(c); // 800DA434
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DA438
  c->r[3]=c->r[31]|c->r[31]; // 800DA43C
  c->lr=0x800DA444u; f_8030BD1C(c); // 800DA440
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DA444
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA448
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA44C
  c->lr=c->r[0]; // 800DA450
  c->r[1]=c->r[1]+0x00000010u; // 800DA454
  return; // 800DA458
}

// fn_800DA45C
void f_800DA45C(Ctx* __restrict c) {
  trace_call(0x800DA45Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DA45C
  c->r[5]=c->r[3]|c->r[3]; // 800DA460
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DA464
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DA468
  c->r[3]=c->r[4]+0x00000030u; // 800DA46C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DA470
  c->r[4]=c->r[5]+0x00000030u; // 800DA474
  f_8003AB48(c); return; // 800DA478
}

// fn_800DA47C
void f_800DA47C(Ctx* __restrict c) {
  trace_call(0x800DA47Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DA47C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA480
  c->ctr=c->r[12]; // 800DA484
  if (true) { dispatch(c,c->ctr); return; } // 800DA488
}

// fn_800DA48C
void f_800DA48C(Ctx* __restrict c) {
  trace_call(0x800DA48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA48C
  c->r[0]=c->lr; // 800DA490
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA494
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA498
  c->r[29]=c->r[3]|c->r[3]; // 800DA49C
  c->r[30]=c->r[4]|c->r[4]; // 800DA4A0
  c->r[31]=c->r[5]|c->r[5]; // 800DA4A4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DA4A8
  cmps(c,0,(int32_t)c->r[0],7); // 800DA4AC
  if (!crb(c,0)) { goto L_800DA4C0; } // 800DA4B0
  c->r[4]=c->r[31]|c->r[31]; // 800DA4B4
  c->r[3]=c->r[3]+0x00000030u; // 800DA4B8
  c->lr=0x800DA4C0u; f_8003A994(c); // 800DA4BC
L_800DA4C0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DA4C0
  c->r[3]=c->r[29]|c->r[29]; // 800DA4C4
  c->r[4]=c->r[30]|c->r[30]; // 800DA4C8
  c->r[5]=c->r[31]|c->r[31]; // 800DA4CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DA4D0
  c->ctr=c->r[12]; // 800DA4D4
  if (true) { c->lr=0x800DA4DCu; dispatch(c,c->ctr); } // 800DA4D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA4DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA4E0
  c->lr=c->r[0]; // 800DA4E4
  c->r[1]=c->r[1]+0x00000020u; // 800DA4E8
  return; // 800DA4EC
}

// fn_800DA4F0
void f_800DA4F0(Ctx* __restrict c) {
  trace_call(0x800DA4F0u);
  c->r[3]=0u+0x80410000u; // 800DA4F0
  c->r[3]=c->r[3]+0xFFFFD7FFu; // 800DA4F4
  return; // 800DA4F8
}

// fn_800DA4FC
void f_800DA4FC(Ctx* __restrict c) {
  trace_call(0x800DA4FCu);
  c->r[3]=0u+0x0000003Cu; // 800DA4FC
  return; // 800DA500
}

// fn_800DA504
void f_800DA504(Ctx* __restrict c) {
  trace_call(0x800DA504u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA504
  c->r[0]=c->lr; // 800DA508
  c->r[3]=0u+0x0000003Cu; // 800DA50C
  c->r[4]=c->r[13]+0xFFFFB5A6u; // 800DA510
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA514
  c->r[5]=0u+0x00000000u; // 800DA518
  c->r[6]=0u+0x00001001u; // 800DA51C
  c->lr=0x800DA524u; f_80244D20(c); // 800DA520
  cmps(c,0,(int32_t)c->r[3],0); // 800DA524
  if (crb(c,2)) { goto L_800DA530; } // 800DA528
  c->lr=0x800DA530u; f_800DA3C0(c); // 800DA52C
L_800DA530:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA530
  c->lr=c->r[0]; // 800DA534
  c->r[1]=c->r[1]+0x00000010u; // 800DA538
  return; // 800DA53C
}

// fn_800DA540
void f_800DA540(Ctx* __restrict c) {
  trace_call(0x800DA540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA540
  c->r[0]=c->lr; // 800DA544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA54C
  c->r[31]=c->r[3]|c->r[3]; // 800DA550
  c->lr=0x800DA558u; f_800D7120(c); // 800DA554
  c->r[5]=0u+0x80410000u; // 800DA558
  c->r[3]=0u+0x59720000u; // 800DA55C
  c->r[0]=c->r[3]+0x00004EB8u; // 800DA560
  c->r[4]=0u+0x00000000u; // 800DA564
  c->r[5]=c->r[5]+0x000079F0u; // 800DA568
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DA56C
  c->r[3]=c->r[31]|c->r[31]; // 800DA570
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DA574
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DA578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA57C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA580
  c->lr=c->r[0]; // 800DA584
  c->r[1]=c->r[1]+0x00000010u; // 800DA588
  return; // 800DA58C
}

// fn_800DA590
void f_800DA590(Ctx* __restrict c) {
  trace_call(0x800DA590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA590
  c->r[0]=c->lr; // 800DA594
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA598
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA59C
  c->r[30]=c->r[3]|c->r[3]; // 800DA5A0
  c->r[31]=c->r[4]|c->r[4]; // 800DA5A4
  c->lr=0x800DA5ACu; f_8030D728(c); // 800DA5A8
  c->r[3]=c->r[31]|c->r[31]; // 800DA5AC
  c->r[4]=0u+0x00000000u; // 800DA5B0
  c->lr=0x800DA5B8u; f_8030BE30(c); // 800DA5B4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DA5B8
  c->r[3]=c->r[31]|c->r[31]; // 800DA5BC
  c->lr=0x800DA5C4u; f_8030BD1C(c); // 800DA5C0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DA5C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA5C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA5CC
  c->lr=c->r[0]; // 800DA5D0
  c->r[1]=c->r[1]+0x00000010u; // 800DA5D4
  return; // 800DA5D8
}

// fn_800DA5DC
void f_800DA5DC(Ctx* __restrict c) {
  trace_call(0x800DA5DCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DA5DC
  c->r[5]=c->r[3]|c->r[3]; // 800DA5E0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DA5E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DA5E8
  c->r[3]=c->r[4]+0x00000030u; // 800DA5EC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DA5F0
  c->r[4]=c->r[5]+0x00000030u; // 800DA5F4
  f_8003AB48(c); return; // 800DA5F8
}

// fn_800DA5FC
void f_800DA5FC(Ctx* __restrict c) {
  trace_call(0x800DA5FCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DA5FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA600
  c->ctr=c->r[12]; // 800DA604
  if (true) { dispatch(c,c->ctr); return; } // 800DA608
}

// fn_800DA60C
void f_800DA60C(Ctx* __restrict c) {
  trace_call(0x800DA60Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA60C
  c->r[0]=c->lr; // 800DA610
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA614
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA618
  c->r[29]=c->r[3]|c->r[3]; // 800DA61C
  c->r[30]=c->r[4]|c->r[4]; // 800DA620
  c->r[31]=c->r[5]|c->r[5]; // 800DA624
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DA628
  cmps(c,0,(int32_t)c->r[0],7); // 800DA62C
  if (!crb(c,0)) { goto L_800DA640; } // 800DA630
  c->r[4]=c->r[31]|c->r[31]; // 800DA634
  c->r[3]=c->r[3]+0x00000030u; // 800DA638
  c->lr=0x800DA640u; f_8003A994(c); // 800DA63C
L_800DA640:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DA640
  c->r[3]=c->r[29]|c->r[29]; // 800DA644
  c->r[4]=c->r[30]|c->r[30]; // 800DA648
  c->r[5]=c->r[31]|c->r[31]; // 800DA64C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DA650
  c->ctr=c->r[12]; // 800DA654
  if (true) { c->lr=0x800DA65Cu; dispatch(c,c->ctr); } // 800DA658
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA65C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA660
  c->lr=c->r[0]; // 800DA664
  c->r[1]=c->r[1]+0x00000020u; // 800DA668
  return; // 800DA66C
}

// fn_800DA670
void f_800DA670(Ctx* __restrict c) {
  trace_call(0x800DA670u);
  c->r[3]=0u+0x80410000u; // 800DA670
  c->r[3]=c->r[3]+0xFFFFD80Cu; // 800DA674
  return; // 800DA678
}

// fn_800DA67C
void f_800DA67C(Ctx* __restrict c) {
  trace_call(0x800DA67Cu);
  c->r[3]=0u+0x0000003Cu; // 800DA67C
  return; // 800DA680
}

// fn_800DA684
void f_800DA684(Ctx* __restrict c) {
  trace_call(0x800DA684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA684
  c->r[0]=c->lr; // 800DA688
  c->r[3]=0u+0x0000003Cu; // 800DA68C
  c->r[4]=c->r[13]+0xFFFFB5ABu; // 800DA690
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA694
  c->r[5]=0u+0x00000000u; // 800DA698
  c->r[6]=0u+0x00001001u; // 800DA69C
  c->lr=0x800DA6A4u; f_80244D20(c); // 800DA6A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA6A4
  if (crb(c,2)) { goto L_800DA6B0; } // 800DA6A8
  c->lr=0x800DA6B0u; f_800DA540(c); // 800DA6AC
L_800DA6B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA6B0
  c->lr=c->r[0]; // 800DA6B4
  c->r[1]=c->r[1]+0x00000010u; // 800DA6B8
  return; // 800DA6BC
}

// fn_800DA6C0
void f_800DA6C0(Ctx* __restrict c) {
  trace_call(0x800DA6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA6C0
  c->r[0]=c->lr; // 800DA6C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA6C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA6CC
  c->r[31]=c->r[3]|c->r[3]; // 800DA6D0
  c->lr=0x800DA6D8u; f_800D7120(c); // 800DA6D4
  c->r[5]=0u+0x80410000u; // 800DA6D8
  c->r[3]=0u+0x59720000u; // 800DA6DC
  c->r[0]=c->r[3]+0x00004EB8u; // 800DA6E0
  c->r[4]=0u+0x00000000u; // 800DA6E4
  c->r[5]=c->r[5]+0x000079BCu; // 800DA6E8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DA6EC
  c->r[3]=c->r[31]|c->r[31]; // 800DA6F0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DA6F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DA6F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA700
  c->lr=c->r[0]; // 800DA704
  c->r[1]=c->r[1]+0x00000010u; // 800DA708
  return; // 800DA70C
}

// fn_800DA710
void f_800DA710(Ctx* __restrict c) {
  trace_call(0x800DA710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA710
  c->r[0]=c->lr; // 800DA714
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA718
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA71C
  c->r[30]=c->r[3]|c->r[3]; // 800DA720
  c->r[31]=c->r[4]|c->r[4]; // 800DA724
  c->lr=0x800DA72Cu; f_8030D728(c); // 800DA728
  c->r[3]=c->r[31]|c->r[31]; // 800DA72C
  c->r[4]=0u+0x00000000u; // 800DA730
  c->lr=0x800DA738u; f_8030BE30(c); // 800DA734
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DA738
  c->r[3]=c->r[31]|c->r[31]; // 800DA73C
  c->lr=0x800DA744u; f_8030BD1C(c); // 800DA740
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DA744
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA748
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA74C
  c->lr=c->r[0]; // 800DA750
  c->r[1]=c->r[1]+0x00000010u; // 800DA754
  return; // 800DA758
}

// fn_800DA75C
void f_800DA75C(Ctx* __restrict c) {
  trace_call(0x800DA75Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DA75C
  c->r[5]=c->r[3]|c->r[3]; // 800DA760
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DA764
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DA768
  c->r[3]=c->r[4]+0x00000030u; // 800DA76C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DA770
  c->r[4]=c->r[5]+0x00000030u; // 800DA774
  f_8003AB48(c); return; // 800DA778
}

// fn_800DA77C
void f_800DA77C(Ctx* __restrict c) {
  trace_call(0x800DA77Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DA77C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA780
  c->ctr=c->r[12]; // 800DA784
  if (true) { dispatch(c,c->ctr); return; } // 800DA788
}

// fn_800DA78C
void f_800DA78C(Ctx* __restrict c) {
  trace_call(0x800DA78Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA78C
  c->r[0]=c->lr; // 800DA790
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA794
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA798
  c->r[29]=c->r[3]|c->r[3]; // 800DA79C
  c->r[30]=c->r[4]|c->r[4]; // 800DA7A0
  c->r[31]=c->r[5]|c->r[5]; // 800DA7A4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DA7A8
  cmps(c,0,(int32_t)c->r[0],7); // 800DA7AC
  if (!crb(c,0)) { goto L_800DA7C0; } // 800DA7B0
  c->r[4]=c->r[31]|c->r[31]; // 800DA7B4
  c->r[3]=c->r[3]+0x00000030u; // 800DA7B8
  c->lr=0x800DA7C0u; f_8003A994(c); // 800DA7BC
L_800DA7C0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DA7C0
  c->r[3]=c->r[29]|c->r[29]; // 800DA7C4
  c->r[4]=c->r[30]|c->r[30]; // 800DA7C8
  c->r[5]=c->r[31]|c->r[31]; // 800DA7CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DA7D0
  c->ctr=c->r[12]; // 800DA7D4
  if (true) { c->lr=0x800DA7DCu; dispatch(c,c->ctr); } // 800DA7D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA7DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA7E0
  c->lr=c->r[0]; // 800DA7E4
  c->r[1]=c->r[1]+0x00000020u; // 800DA7E8
  return; // 800DA7EC
}

// fn_800DA7F0
void f_800DA7F0(Ctx* __restrict c) {
  trace_call(0x800DA7F0u);
  c->r[3]=0u+0x80410000u; // 800DA7F0
  c->r[3]=c->r[3]+0xFFFFD817u; // 800DA7F4
  return; // 800DA7F8
}

// fn_800DA7FC
void f_800DA7FC(Ctx* __restrict c) {
  trace_call(0x800DA7FCu);
  c->r[3]=0u+0x0000003Cu; // 800DA7FC
  return; // 800DA800
}

// fn_800DA804
void f_800DA804(Ctx* __restrict c) {
  trace_call(0x800DA804u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA804
  c->r[0]=c->lr; // 800DA808
  c->r[3]=0u+0x0000003Cu; // 800DA80C
  c->r[4]=c->r[13]+0xFFFFB5B0u; // 800DA810
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA814
  c->r[5]=0u+0x00000000u; // 800DA818
  c->r[6]=0u+0x00001001u; // 800DA81C
  c->lr=0x800DA824u; f_80244D20(c); // 800DA820
  cmps(c,0,(int32_t)c->r[3],0); // 800DA824
  if (crb(c,2)) { goto L_800DA830; } // 800DA828
  c->lr=0x800DA830u; f_800DA6C0(c); // 800DA82C
L_800DA830:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA830
  c->lr=c->r[0]; // 800DA834
  c->r[1]=c->r[1]+0x00000010u; // 800DA838
  return; // 800DA83C
}

// fn_800DA840
void f_800DA840(Ctx* __restrict c) {
  trace_call(0x800DA840u);
  return; // 800DA840
}

// fn_800DA844
void f_800DA844(Ctx* __restrict c) {
  trace_call(0x800DA844u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA844
  c->r[0]=c->lr; // 800DA848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA84C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA850
  c->r[31]=c->r[3]|c->r[3]; // 800DA854
  c->lr=0x800DA85Cu; f_800D7120(c); // 800DA858
  c->r[5]=0u+0x80410000u; // 800DA85C
  c->r[3]=0u+0x59720000u; // 800DA860
  c->r[0]=c->r[3]+0x00004EB8u; // 800DA864
  c->r[4]=0u+0x00000000u; // 800DA868
  c->r[5]=c->r[5]+0x00007988u; // 800DA86C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DA870
  c->r[3]=c->r[31]|c->r[31]; // 800DA874
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DA878
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DA87C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DA880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA884
  c->lr=c->r[0]; // 800DA888
  c->r[1]=c->r[1]+0x00000010u; // 800DA88C
  return; // 800DA890
}

// fn_800DA894
void f_800DA894(Ctx* __restrict c) {
  trace_call(0x800DA894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA894
  c->r[0]=c->lr; // 800DA898
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA89C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA8A0
  c->r[30]=c->r[3]|c->r[3]; // 800DA8A4
  c->r[31]=c->r[4]|c->r[4]; // 800DA8A8
  c->lr=0x800DA8B0u; f_8030D728(c); // 800DA8AC
  c->r[3]=c->r[31]|c->r[31]; // 800DA8B0
  c->r[4]=0u+0x00000000u; // 800DA8B4
  c->lr=0x800DA8BCu; f_8030BE30(c); // 800DA8B8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DA8BC
  c->r[3]=c->r[31]|c->r[31]; // 800DA8C0
  c->lr=0x800DA8C8u; f_8030BD1C(c); // 800DA8C4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DA8C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA8CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA8D0
  c->lr=c->r[0]; // 800DA8D4
  c->r[1]=c->r[1]+0x00000010u; // 800DA8D8
  return; // 800DA8DC
}

// fn_800DA8E0
void f_800DA8E0(Ctx* __restrict c) {
  trace_call(0x800DA8E0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DA8E0
  c->r[5]=c->r[3]|c->r[3]; // 800DA8E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DA8E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DA8EC
  c->r[3]=c->r[4]+0x00000030u; // 800DA8F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DA8F4
  c->r[4]=c->r[5]+0x00000030u; // 800DA8F8
  f_8003AB48(c); return; // 800DA8FC
}

// fn_800DA900
void f_800DA900(Ctx* __restrict c) {
  trace_call(0x800DA900u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DA900
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA904
  c->ctr=c->r[12]; // 800DA908
  if (true) { dispatch(c,c->ctr); return; } // 800DA90C
}

// fn_800DA910
void f_800DA910(Ctx* __restrict c) {
  trace_call(0x800DA910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA910
  c->r[0]=c->lr; // 800DA914
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA918
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA91C
  c->r[29]=c->r[3]|c->r[3]; // 800DA920
  c->r[30]=c->r[4]|c->r[4]; // 800DA924
  c->r[31]=c->r[5]|c->r[5]; // 800DA928
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DA92C
  cmps(c,0,(int32_t)c->r[0],7); // 800DA930
  if (!crb(c,0)) { goto L_800DA944; } // 800DA934
  c->r[4]=c->r[31]|c->r[31]; // 800DA938
  c->r[3]=c->r[3]+0x00000030u; // 800DA93C
  c->lr=0x800DA944u; f_8003A994(c); // 800DA940
L_800DA944:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DA944
  c->r[3]=c->r[29]|c->r[29]; // 800DA948
  c->r[4]=c->r[30]|c->r[30]; // 800DA94C
  c->r[5]=c->r[31]|c->r[31]; // 800DA950
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DA954
  c->ctr=c->r[12]; // 800DA958
  if (true) { c->lr=0x800DA960u; dispatch(c,c->ctr); } // 800DA95C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA960
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA964
  c->lr=c->r[0]; // 800DA968
  c->r[1]=c->r[1]+0x00000020u; // 800DA96C
  return; // 800DA970
}

// fn_800DA974
void f_800DA974(Ctx* __restrict c) {
  trace_call(0x800DA974u);
  c->r[3]=0u+0x80410000u; // 800DA974
  c->r[3]=c->r[3]+0xFFFFD82Fu; // 800DA978
  return; // 800DA97C
}

// fn_800DA980
void f_800DA980(Ctx* __restrict c) {
  trace_call(0x800DA980u);
  c->r[3]=0u+0x0000003Cu; // 800DA980
  return; // 800DA984
}

// fn_800DA988
void f_800DA988(Ctx* __restrict c) {
  trace_call(0x800DA988u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA988
  c->r[0]=c->lr; // 800DA98C
  c->r[3]=0u+0x0000003Cu; // 800DA990
  c->r[4]=c->r[13]+0xFFFFB5B5u; // 800DA994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA998
  c->r[5]=0u+0x00000000u; // 800DA99C
  c->r[6]=0u+0x00001001u; // 800DA9A0
  c->lr=0x800DA9A8u; f_80244D20(c); // 800DA9A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DA9A8
  if (crb(c,2)) { goto L_800DA9B4; } // 800DA9AC
  c->lr=0x800DA9B4u; f_800DA844(c); // 800DA9B0
L_800DA9B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA9B4
  c->lr=c->r[0]; // 800DA9B8
  c->r[1]=c->r[1]+0x00000010u; // 800DA9BC
  return; // 800DA9C0
}

// fn_800DA9C4
void f_800DA9C4(Ctx* __restrict c) {
  trace_call(0x800DA9C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA9C4
  c->r[0]=c->lr; // 800DA9C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA9CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DA9D0
  c->r[31]=c->r[3]|c->r[3]; // 800DA9D4
  c->lr=0x800DA9DCu; f_800D7120(c); // 800DA9D8
  c->r[5]=0u+0x80410000u; // 800DA9DC
  c->r[3]=0u+0xD30E0000u; // 800DA9E0
  c->r[4]=0u+0x00000000u; // 800DA9E4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DA9E8
  c->r[0]=c->r[3]+0x000027FAu; // 800DA9EC
  c->r[5]=c->r[5]+0x00007954u; // 800DA9F0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DA9F4
  c->r[3]=c->r[31]|c->r[31]; // 800DA9F8
  W32(c->r[31]+0x00000044u,c->r[4]); // 800DA9FC
  W32(c->r[31]+0x00000050u,c->r[4]); // 800DAA00
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DAA04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAA08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAA0C
  c->lr=c->r[0]; // 800DAA10
  c->r[1]=c->r[1]+0x00000010u; // 800DAA14
  return; // 800DAA18
}

// fn_800DAA1C
void f_800DAA1C(Ctx* __restrict c) {
  trace_call(0x800DAA1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAA1C
  c->r[0]=c->lr; // 800DAA20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAA24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAA28
  c->r[30]=c->r[3]|c->r[3]; // 800DAA2C
  c->r[31]=c->r[4]|c->r[4]; // 800DAA30
  c->lr=0x800DAA38u; f_8030D728(c); // 800DAA34
  c->r[3]=c->r[31]|c->r[31]; // 800DAA38
  c->r[4]=0u+0x00000000u; // 800DAA3C
  c->lr=0x800DAA44u; f_8030BE30(c); // 800DAA40
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DAA44
  c->r[3]=c->r[31]|c->r[31]; // 800DAA48
  c->lr=0x800DAA50u; f_8030BD1C(c); // 800DAA4C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DAA50
  c->r[3]=c->r[31]|c->r[31]; // 800DAA54
  c->r[4]=0u+0x00000000u; // 800DAA58
  c->lr=0x800DAA60u; f_8030BE30(c); // 800DAA5C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DAA60
  c->r[3]=c->r[31]|c->r[31]; // 800DAA64
  c->lr=0x800DAA6Cu; f_8030BD1C(c); // 800DAA68
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DAA6C
  c->r[3]=c->r[31]|c->r[31]; // 800DAA70
  c->r[4]=0u+0x00000000u; // 800DAA74
  c->lr=0x800DAA7Cu; f_8030BE30(c); // 800DAA78
  W32(c->r[30]+0x00000048u,c->r[3]); // 800DAA7C
  c->r[3]=c->r[31]|c->r[31]; // 800DAA80
  c->lr=0x800DAA88u; f_8030BD1C(c); // 800DAA84
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800DAA88
  c->r[3]=c->r[31]|c->r[31]; // 800DAA8C
  c->r[4]=0u+0x00000000u; // 800DAA90
  c->lr=0x800DAA98u; f_8030BE30(c); // 800DAA94
  W32(c->r[30]+0x00000054u,c->r[3]); // 800DAA98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAA9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAAA0
  c->lr=c->r[0]; // 800DAAA4
  c->r[1]=c->r[1]+0x00000010u; // 800DAAA8
  return; // 800DAAAC
}

// fn_800DAAB0
void f_800DAAB0(Ctx* __restrict c) {
  trace_call(0x800DAAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAAB0
  c->r[0]=c->lr; // 800DAAB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAAB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAABC
  c->r[30]=c->r[3]|c->r[3]; // 800DAAC0
  c->r[31]=c->r[4]|c->r[4]; // 800DAAC4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DAAC8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DAACC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DAAD0
  c->r[3]=c->r[4]+0x00000030u; // 800DAAD4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DAAD8
  c->r[4]=c->r[30]+0x00000030u; // 800DAADC
  c->lr=0x800DAAE4u; f_8003AB48(c); // 800DAAE0
  c->r[3]=c->r[31]+0x0000003Cu; // 800DAAE4
  c->r[4]=c->r[30]+0x0000003Cu; // 800DAAE8
  c->lr=0x800DAAF0u; f_8003AB48(c); // 800DAAEC
  c->r[3]=c->r[31]+0x00000048u; // 800DAAF0
  c->r[4]=c->r[30]+0x00000048u; // 800DAAF4
  c->lr=0x800DAAFCu; f_8003AB48(c); // 800DAAF8
  c->r[0]=R32(c->r[30]+0x00000054u); // 800DAAFC
  W32(c->r[31]+0x00000054u,c->r[0]); // 800DAB00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAB04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAB08
  c->lr=c->r[0]; // 800DAB0C
  c->r[1]=c->r[1]+0x00000010u; // 800DAB10
  return; // 800DAB14
}

// fn_800DAB18
void f_800DAB18(Ctx* __restrict c) {
  trace_call(0x800DAB18u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DAB18
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAB1C
  c->ctr=c->r[12]; // 800DAB20
  if (true) { dispatch(c,c->ctr); return; } // 800DAB24
}

// fn_800DAB28
void f_800DAB28(Ctx* __restrict c) {
  trace_call(0x800DAB28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAB28
  c->r[0]=c->lr; // 800DAB2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DAB30
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAB34
  c->r[29]=c->r[3]|c->r[3]; // 800DAB38
  c->r[30]=c->r[4]|c->r[4]; // 800DAB3C
  c->r[31]=c->r[5]|c->r[5]; // 800DAB40
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DAB44
  cmps(c,0,(int32_t)c->r[0],7); // 800DAB48
  if (!crb(c,0)) { goto L_800DAB5C; } // 800DAB4C
  c->r[4]=c->r[31]|c->r[31]; // 800DAB50
  c->r[3]=c->r[3]+0x00000030u; // 800DAB54
  c->lr=0x800DAB5Cu; f_8003A994(c); // 800DAB58
L_800DAB5C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DAB5C
  cmps(c,0,(int32_t)c->r[0],7); // 800DAB60
  if (!crb(c,0)) { goto L_800DAB74; } // 800DAB64
  c->r[4]=c->r[31]|c->r[31]; // 800DAB68
  c->r[3]=c->r[29]+0x0000003Cu; // 800DAB6C
  c->lr=0x800DAB74u; f_8003A994(c); // 800DAB70
L_800DAB74:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800DAB74
  cmps(c,0,(int32_t)c->r[0],7); // 800DAB78
  if (!crb(c,0)) { goto L_800DAB8C; } // 800DAB7C
  c->r[4]=c->r[31]|c->r[31]; // 800DAB80
  c->r[3]=c->r[29]+0x00000048u; // 800DAB84
  c->lr=0x800DAB8Cu; f_8003A994(c); // 800DAB88
L_800DAB8C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DAB8C
  c->r[3]=c->r[29]|c->r[29]; // 800DAB90
  c->r[4]=c->r[30]|c->r[30]; // 800DAB94
  c->r[5]=c->r[31]|c->r[31]; // 800DAB98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DAB9C
  c->ctr=c->r[12]; // 800DABA0
  if (true) { c->lr=0x800DABA8u; dispatch(c,c->ctr); } // 800DABA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DABA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DABAC
  c->lr=c->r[0]; // 800DABB0
  c->r[1]=c->r[1]+0x00000020u; // 800DABB4
  return; // 800DABB8
}

// fn_800DABBC
void f_800DABBC(Ctx* __restrict c) {
  trace_call(0x800DABBCu);
  c->r[3]=0u+0x80410000u; // 800DABBC
  c->r[3]=c->r[3]+0xFFFFD83Fu; // 800DABC0
  return; // 800DABC4
}

// fn_800DABC8
void f_800DABC8(Ctx* __restrict c) {
  trace_call(0x800DABC8u);
  c->r[3]=0u+0x00000058u; // 800DABC8
  return; // 800DABCC
}

// fn_800DABD0
void f_800DABD0(Ctx* __restrict c) {
  trace_call(0x800DABD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DABD0
  c->r[0]=c->lr; // 800DABD4
  c->r[3]=0u+0x00000058u; // 800DABD8
  c->r[4]=c->r[13]+0xFFFFB5BAu; // 800DABDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DABE0
  c->r[5]=0u+0x00000000u; // 800DABE4
  c->r[6]=0u+0x00001001u; // 800DABE8
  c->lr=0x800DABF0u; f_80244D20(c); // 800DABEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DABF0
  if (crb(c,2)) { goto L_800DABFC; } // 800DABF4
  c->lr=0x800DABFCu; f_800DA9C4(c); // 800DABF8
L_800DABFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DABFC
  c->lr=c->r[0]; // 800DAC00
  c->r[1]=c->r[1]+0x00000010u; // 800DAC04
  return; // 800DAC08
}

// fn_800DAC0C
void f_800DAC0C(Ctx* __restrict c) {
  trace_call(0x800DAC0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAC0C
  c->r[0]=c->lr; // 800DAC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAC14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAC18
  c->r[31]=c->r[3]|c->r[3]; // 800DAC1C
  c->lr=0x800DAC24u; f_800D7120(c); // 800DAC20
  c->r[5]=0u+0x80410000u; // 800DAC24
  c->r[3]=0u+0x4CB40000u; // 800DAC28
  c->r[0]=c->r[3]+0x0000540Du; // 800DAC2C
  c->r[4]=0u+0x00000000u; // 800DAC30
  c->r[5]=c->r[5]+0x00007920u; // 800DAC34
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DAC38
  c->r[3]=c->r[31]|c->r[31]; // 800DAC3C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DAC40
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DAC44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAC48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAC4C
  c->lr=c->r[0]; // 800DAC50
  c->r[1]=c->r[1]+0x00000010u; // 800DAC54
  return; // 800DAC58
}

// fn_800DAC5C
void f_800DAC5C(Ctx* __restrict c) {
  trace_call(0x800DAC5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAC5C
  c->r[0]=c->lr; // 800DAC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAC64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAC68
  c->r[30]=c->r[3]|c->r[3]; // 800DAC6C
  c->r[31]=c->r[4]|c->r[4]; // 800DAC70
  c->lr=0x800DAC78u; f_8030D728(c); // 800DAC74
  c->r[3]=c->r[31]|c->r[31]; // 800DAC78
  c->r[4]=0u+0x00000000u; // 800DAC7C
  c->lr=0x800DAC84u; f_8030BE30(c); // 800DAC80
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DAC84
  c->r[3]=c->r[31]|c->r[31]; // 800DAC88
  c->lr=0x800DAC90u; f_8030BD1C(c); // 800DAC8C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DAC90
  c->r[3]=c->r[31]|c->r[31]; // 800DAC94
  c->lr=0x800DAC9Cu; f_8030BD1C(c); // 800DAC98
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800DAC9C
  c->r[3]=c->r[31]|c->r[31]; // 800DACA0
  c->lr=0x800DACA8u; f_8030C0A0(c); // 800DACA4
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DACA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DACAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DACB0
  c->lr=c->r[0]; // 800DACB4
  c->r[1]=c->r[1]+0x00000010u; // 800DACB8
  return; // 800DACBC
}

// fn_800DACC0
void f_800DACC0(Ctx* __restrict c) {
  trace_call(0x800DACC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DACC0
  c->r[0]=c->lr; // 800DACC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DACC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DACCC
  c->r[31]=c->r[4]|c->r[4]; // 800DACD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DACD4
  c->r[30]=c->r[3]|c->r[3]; // 800DACD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DACDC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DACE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DACE4
  c->r[3]=c->r[4]+0x00000030u; // 800DACE8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DACEC
  c->r[4]=c->r[30]+0x00000030u; // 800DACF0
  c->lr=0x800DACF8u; f_8003AB48(c); // 800DACF4
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800DACF8
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800DACFC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAD00
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800DAD04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAD08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DAD0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAD10
  c->lr=c->r[0]; // 800DAD14
  c->r[1]=c->r[1]+0x00000010u; // 800DAD18
  return; // 800DAD1C
}

// fn_800DAD20
void f_800DAD20(Ctx* __restrict c) {
  trace_call(0x800DAD20u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DAD20
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAD24
  c->ctr=c->r[12]; // 800DAD28
  if (true) { dispatch(c,c->ctr); return; } // 800DAD2C
}

// fn_800DAD30
void f_800DAD30(Ctx* __restrict c) {
  trace_call(0x800DAD30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAD30
  c->r[0]=c->lr; // 800DAD34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DAD38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAD3C
  c->r[29]=c->r[3]|c->r[3]; // 800DAD40
  c->r[30]=c->r[4]|c->r[4]; // 800DAD44
  c->r[31]=c->r[5]|c->r[5]; // 800DAD48
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DAD4C
  cmps(c,0,(int32_t)c->r[0],7); // 800DAD50
  if (!crb(c,0)) { goto L_800DAD64; } // 800DAD54
  c->r[4]=c->r[31]|c->r[31]; // 800DAD58
  c->r[3]=c->r[3]+0x00000030u; // 800DAD5C
  c->lr=0x800DAD64u; f_8003A994(c); // 800DAD60
L_800DAD64:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DAD64
  c->r[3]=c->r[29]|c->r[29]; // 800DAD68
  c->r[4]=c->r[30]|c->r[30]; // 800DAD6C
  c->r[5]=c->r[31]|c->r[31]; // 800DAD70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DAD74
  c->ctr=c->r[12]; // 800DAD78
  if (true) { c->lr=0x800DAD80u; dispatch(c,c->ctr); } // 800DAD7C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAD80
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAD84
  c->lr=c->r[0]; // 800DAD88
  c->r[1]=c->r[1]+0x00000020u; // 800DAD8C
  return; // 800DAD90
}

// fn_800DAD94
void f_800DAD94(Ctx* __restrict c) {
  trace_call(0x800DAD94u);
  c->r[3]=0u+0x80410000u; // 800DAD94
  c->r[3]=c->r[3]+0xFFFFD858u; // 800DAD98
  return; // 800DAD9C
}

// fn_800DADA0
void f_800DADA0(Ctx* __restrict c) {
  trace_call(0x800DADA0u);
  c->r[3]=0u+0x00000044u; // 800DADA0
  return; // 800DADA4
}

// fn_800DADA8
void f_800DADA8(Ctx* __restrict c) {
  trace_call(0x800DADA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DADA8
  c->r[0]=c->lr; // 800DADAC
  c->r[3]=0u+0x00000044u; // 800DADB0
  c->r[4]=c->r[13]+0xFFFFB5BFu; // 800DADB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DADB8
  c->r[5]=0u+0x00000000u; // 800DADBC
  c->r[6]=0u+0x00001001u; // 800DADC0
  c->lr=0x800DADC8u; f_80244D20(c); // 800DADC4
  cmps(c,0,(int32_t)c->r[3],0); // 800DADC8
  if (crb(c,2)) { goto L_800DADD4; } // 800DADCC
  c->lr=0x800DADD4u; f_800DAC0C(c); // 800DADD0
L_800DADD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DADD4
  c->lr=c->r[0]; // 800DADD8
  c->r[1]=c->r[1]+0x00000010u; // 800DADDC
  return; // 800DADE0
}

// fn_800DADE4
void f_800DADE4(Ctx* __restrict c) {
  trace_call(0x800DADE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DADE4
  c->r[0]=c->lr; // 800DADE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DADEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DADF0
  c->r[31]=c->r[3]|c->r[3]; // 800DADF4
  c->lr=0x800DADFCu; f_800D7120(c); // 800DADF8
  c->r[5]=0u+0x80410000u; // 800DADFC
  c->r[3]=0u+0x59710000u; // 800DAE00
  c->r[0]=c->r[3]+0x000047B2u; // 800DAE04
  c->r[4]=0u+0x00000000u; // 800DAE08
  c->r[5]=c->r[5]+0x000078ECu; // 800DAE0C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DAE10
  c->r[3]=c->r[31]|c->r[31]; // 800DAE14
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DAE18
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DAE1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAE20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAE24
  c->lr=c->r[0]; // 800DAE28
  c->r[1]=c->r[1]+0x00000010u; // 800DAE2C
  return; // 800DAE30
}

// fn_800DAE34
void f_800DAE34(Ctx* __restrict c) {
  trace_call(0x800DAE34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE34
  c->r[0]=c->lr; // 800DAE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAE3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAE40
  c->r[30]=c->r[3]|c->r[3]; // 800DAE44
  c->r[31]=c->r[4]|c->r[4]; // 800DAE48
  c->lr=0x800DAE50u; f_8030D728(c); // 800DAE4C
  c->r[3]=c->r[31]|c->r[31]; // 800DAE50
  c->r[4]=0u+0x00000000u; // 800DAE54
  c->lr=0x800DAE5Cu; f_8030BE30(c); // 800DAE58
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DAE5C
  c->r[3]=c->r[31]|c->r[31]; // 800DAE60
  c->lr=0x800DAE68u; f_8030BD1C(c); // 800DAE64
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DAE68
  c->r[3]=c->r[31]|c->r[31]; // 800DAE6C
  c->lr=0x800DAE74u; f_8030BD1C(c); // 800DAE70
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800DAE74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAE78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAE7C
  c->lr=c->r[0]; // 800DAE80
  c->r[1]=c->r[1]+0x00000010u; // 800DAE84
  return; // 800DAE88
}

// fn_800DAE8C
void f_800DAE8C(Ctx* __restrict c) {
  trace_call(0x800DAE8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE8C
  c->r[0]=c->lr; // 800DAE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAE94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAE98
  c->r[30]=c->r[3]|c->r[3]; // 800DAE9C
  c->r[31]=c->r[4]|c->r[4]; // 800DAEA0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DAEA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DAEA8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DAEAC
  c->r[3]=c->r[4]+0x00000030u; // 800DAEB0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DAEB4
  c->r[4]=c->r[30]+0x00000030u; // 800DAEB8
  c->lr=0x800DAEC0u; f_8003AB48(c); // 800DAEBC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800DAEC0
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800DAEC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAEC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAECC
  c->lr=c->r[0]; // 800DAED0
  c->r[1]=c->r[1]+0x00000010u; // 800DAED4
  return; // 800DAED8
}

// fn_800DAEDC
void f_800DAEDC(Ctx* __restrict c) {
  trace_call(0x800DAEDCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DAEDC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DAEE0
  c->ctr=c->r[12]; // 800DAEE4
  if (true) { dispatch(c,c->ctr); return; } // 800DAEE8
}

// fn_800DAEEC
void f_800DAEEC(Ctx* __restrict c) {
  trace_call(0x800DAEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAEEC
  c->r[0]=c->lr; // 800DAEF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DAEF4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAEF8
  c->r[29]=c->r[3]|c->r[3]; // 800DAEFC
  c->r[30]=c->r[4]|c->r[4]; // 800DAF00
  c->r[31]=c->r[5]|c->r[5]; // 800DAF04
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DAF08
  cmps(c,0,(int32_t)c->r[0],7); // 800DAF0C
  if (!crb(c,0)) { goto L_800DAF20; } // 800DAF10
  c->r[4]=c->r[31]|c->r[31]; // 800DAF14
  c->r[3]=c->r[3]+0x00000030u; // 800DAF18
  c->lr=0x800DAF20u; f_8003A994(c); // 800DAF1C
L_800DAF20:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DAF20
  c->r[3]=c->r[29]|c->r[29]; // 800DAF24
  c->r[4]=c->r[30]|c->r[30]; // 800DAF28
  c->r[5]=c->r[31]|c->r[31]; // 800DAF2C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DAF30
  c->ctr=c->r[12]; // 800DAF34
  if (true) { c->lr=0x800DAF3Cu; dispatch(c,c->ctr); } // 800DAF38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAF3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DAF40
  c->lr=c->r[0]; // 800DAF44
  c->r[1]=c->r[1]+0x00000020u; // 800DAF48
  return; // 800DAF4C
}

// fn_800DAF50
void f_800DAF50(Ctx* __restrict c) {
  trace_call(0x800DAF50u);
  c->r[3]=0u+0x80410000u; // 800DAF50
  c->r[3]=c->r[3]+0xFFFFD86Du; // 800DAF54
  return; // 800DAF58
}

// fn_800DAF5C
void f_800DAF5C(Ctx* __restrict c) {
  trace_call(0x800DAF5Cu);
  c->r[3]=0u+0x00000040u; // 800DAF5C
  return; // 800DAF60
}

// fn_800DAF64
void f_800DAF64(Ctx* __restrict c) {
  trace_call(0x800DAF64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAF64
  c->r[0]=c->lr; // 800DAF68
  c->r[3]=0u+0x00000040u; // 800DAF6C
  c->r[4]=c->r[13]+0xFFFFB5C4u; // 800DAF70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAF74
  c->r[5]=0u+0x00000000u; // 800DAF78
  c->r[6]=0u+0x00001001u; // 800DAF7C
  c->lr=0x800DAF84u; f_80244D20(c); // 800DAF80
  cmps(c,0,(int32_t)c->r[3],0); // 800DAF84
  if (crb(c,2)) { goto L_800DAF90; } // 800DAF88
  c->lr=0x800DAF90u; f_800DADE4(c); // 800DAF8C
L_800DAF90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAF90
  c->lr=c->r[0]; // 800DAF94
  c->r[1]=c->r[1]+0x00000010u; // 800DAF98
  return; // 800DAF9C
}

// fn_800DAFA0
void f_800DAFA0(Ctx* __restrict c) {
  trace_call(0x800DAFA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAFA0
  c->r[0]=c->lr; // 800DAFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAFA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DAFAC
  c->r[31]=c->r[3]|c->r[3]; // 800DAFB0
  c->lr=0x800DAFB8u; f_800D7120(c); // 800DAFB4
  c->r[5]=0u+0x80410000u; // 800DAFB8
  c->r[3]=0u+0xC21F0000u; // 800DAFBC
  c->r[0]=c->r[3]+0x000070CAu; // 800DAFC0
  c->r[4]=0u+0x00000000u; // 800DAFC4
  c->r[5]=c->r[5]+0x000078B8u; // 800DAFC8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DAFCC
  c->r[3]=c->r[31]|c->r[31]; // 800DAFD0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DAFD4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DAFD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DAFDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DAFE0
  c->lr=c->r[0]; // 800DAFE4
  c->r[1]=c->r[1]+0x00000010u; // 800DAFE8
  return; // 800DAFEC
}

// fn_800DAFF0
void f_800DAFF0(Ctx* __restrict c) {
  trace_call(0x800DAFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAFF0
  c->r[0]=c->lr; // 800DAFF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DAFF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAFFC
  c->r[30]=c->r[3]|c->r[3]; // 800DB000
  c->r[31]=c->r[4]|c->r[4]; // 800DB004
  c->lr=0x800DB00Cu; f_8030D728(c); // 800DB008
  c->r[3]=c->r[31]|c->r[31]; // 800DB00C
  c->r[4]=0u+0x00000000u; // 800DB010
  c->lr=0x800DB018u; f_8030BE30(c); // 800DB014
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DB018
  c->r[3]=c->r[31]|c->r[31]; // 800DB01C
  c->lr=0x800DB024u; f_8030BD1C(c); // 800DB020
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DB024
  c->r[3]=c->r[31]|c->r[31]; // 800DB028
  c->lr=0x800DB030u; f_8030C0A0(c); // 800DB02C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DB030
  c->r[3]=c->r[31]|c->r[31]; // 800DB034
  c->lr=0x800DB03Cu; f_8030C0A0(c); // 800DB038
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DB03C
  c->r[3]=c->r[31]|c->r[31]; // 800DB040
  c->lr=0x800DB048u; f_8030C0A0(c); // 800DB044
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DB048
  c->r[3]=c->r[31]|c->r[31]; // 800DB04C
  c->lr=0x800DB054u; f_8030C0A0(c); // 800DB050
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DB054
  c->r[3]=c->r[31]|c->r[31]; // 800DB058
  c->lr=0x800DB060u; f_8030C0A0(c); // 800DB05C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DB060
  c->r[3]=c->r[31]|c->r[31]; // 800DB064
  c->lr=0x800DB06Cu; f_8030C0A0(c); // 800DB068
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DB06C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB074
  c->lr=c->r[0]; // 800DB078
  c->r[1]=c->r[1]+0x00000010u; // 800DB07C
  return; // 800DB080
}

// fn_800DB084
void f_800DB084(Ctx* __restrict c) {
  trace_call(0x800DB084u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB084
  c->r[0]=c->lr; // 800DB088
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB08C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB090
  c->r[31]=c->r[4]|c->r[4]; // 800DB094
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB098
  c->r[30]=c->r[3]|c->r[3]; // 800DB09C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB0A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DB0A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DB0A8
  c->r[3]=c->r[4]+0x00000030u; // 800DB0AC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DB0B0
  c->r[4]=c->r[30]+0x00000030u; // 800DB0B4
  c->lr=0x800DB0BCu; f_8003AB48(c); // 800DB0B8
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB0BC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DB0C0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB0C4
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800DB0C8
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB0CC
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800DB0D0
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB0D4
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800DB0D8
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB0DC
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DB0E0
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB0E4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DB0E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB0EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB0F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB0F4
  c->lr=c->r[0]; // 800DB0F8
  c->r[1]=c->r[1]+0x00000010u; // 800DB0FC
  return; // 800DB100
}

// fn_800DB104
void f_800DB104(Ctx* __restrict c) {
  trace_call(0x800DB104u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DB104
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DB108
  c->ctr=c->r[12]; // 800DB10C
  if (true) { dispatch(c,c->ctr); return; } // 800DB110
}

// fn_800DB114
void f_800DB114(Ctx* __restrict c) {
  trace_call(0x800DB114u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB114
  c->r[0]=c->lr; // 800DB118
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB11C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB120
  c->r[29]=c->r[3]|c->r[3]; // 800DB124
  c->r[30]=c->r[4]|c->r[4]; // 800DB128
  c->r[31]=c->r[5]|c->r[5]; // 800DB12C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DB130
  cmps(c,0,(int32_t)c->r[0],7); // 800DB134
  if (!crb(c,0)) { goto L_800DB148; } // 800DB138
  c->r[4]=c->r[31]|c->r[31]; // 800DB13C
  c->r[3]=c->r[3]+0x00000030u; // 800DB140
  c->lr=0x800DB148u; f_8003A994(c); // 800DB144
L_800DB148:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DB148
  c->r[3]=c->r[29]|c->r[29]; // 800DB14C
  c->r[4]=c->r[30]|c->r[30]; // 800DB150
  c->r[5]=c->r[31]|c->r[31]; // 800DB154
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DB158
  c->ctr=c->r[12]; // 800DB15C
  if (true) { c->lr=0x800DB164u; dispatch(c,c->ctr); } // 800DB160
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB164
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB168
  c->lr=c->r[0]; // 800DB16C
  c->r[1]=c->r[1]+0x00000020u; // 800DB170
  return; // 800DB174
}

// fn_800DB178
void f_800DB178(Ctx* __restrict c) {
  trace_call(0x800DB178u);
  c->r[3]=0u+0x80410000u; // 800DB178
  c->r[3]=c->r[3]+0xFFFFD884u; // 800DB17C
  return; // 800DB180
}

// fn_800DB184
void f_800DB184(Ctx* __restrict c) {
  trace_call(0x800DB184u);
  c->r[3]=0u+0x00000054u; // 800DB184
  return; // 800DB188
}

// fn_800DB18C
void f_800DB18C(Ctx* __restrict c) {
  trace_call(0x800DB18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB18C
  c->r[0]=c->lr; // 800DB190
  c->r[3]=0u+0x00000054u; // 800DB194
  c->r[4]=c->r[13]+0xFFFFB5C9u; // 800DB198
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB19C
  c->r[5]=0u+0x00000000u; // 800DB1A0
  c->r[6]=0u+0x00001001u; // 800DB1A4
  c->lr=0x800DB1ACu; f_80244D20(c); // 800DB1A8
  cmps(c,0,(int32_t)c->r[3],0); // 800DB1AC
  if (crb(c,2)) { goto L_800DB1B8; } // 800DB1B0
  c->lr=0x800DB1B8u; f_800DAFA0(c); // 800DB1B4
L_800DB1B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB1B8
  c->lr=c->r[0]; // 800DB1BC
  c->r[1]=c->r[1]+0x00000010u; // 800DB1C0
  return; // 800DB1C4
}

// fn_800DB1C8
void f_800DB1C8(Ctx* __restrict c) {
  trace_call(0x800DB1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB1C8
  c->r[0]=c->lr; // 800DB1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB1D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB1D4
  c->r[31]=c->r[3]|c->r[3]; // 800DB1D8
  c->lr=0x800DB1E0u; f_800D7120(c); // 800DB1DC
  c->r[5]=0u+0x80410000u; // 800DB1E0
  c->r[3]=0u+0xC21F0000u; // 800DB1E4
  c->r[0]=c->r[3]+0x000070CAu; // 800DB1E8
  c->r[4]=0u+0x00000000u; // 800DB1EC
  c->r[5]=c->r[5]+0x00007884u; // 800DB1F0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DB1F4
  c->r[3]=c->r[31]|c->r[31]; // 800DB1F8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DB1FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DB200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB204
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB208
  c->lr=c->r[0]; // 800DB20C
  c->r[1]=c->r[1]+0x00000010u; // 800DB210
  return; // 800DB214
}

// fn_800DB218
void f_800DB218(Ctx* __restrict c) {
  trace_call(0x800DB218u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB218
  c->r[0]=c->lr; // 800DB21C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB220
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB224
  c->r[30]=c->r[3]|c->r[3]; // 800DB228
  c->r[31]=c->r[4]|c->r[4]; // 800DB22C
  c->lr=0x800DB234u; f_8030D728(c); // 800DB230
  c->r[3]=c->r[31]|c->r[31]; // 800DB234
  c->r[4]=0u+0x00000000u; // 800DB238
  c->lr=0x800DB240u; f_8030BE30(c); // 800DB23C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DB240
  c->r[3]=c->r[31]|c->r[31]; // 800DB244
  c->lr=0x800DB24Cu; f_8030BD1C(c); // 800DB248
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DB24C
  c->r[3]=c->r[31]|c->r[31]; // 800DB250
  c->lr=0x800DB258u; f_8030C0A0(c); // 800DB254
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DB258
  c->r[3]=c->r[31]|c->r[31]; // 800DB25C
  c->lr=0x800DB264u; f_8030C0A0(c); // 800DB260
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DB264
  c->r[3]=c->r[31]|c->r[31]; // 800DB268
  c->lr=0x800DB270u; f_8030C0A0(c); // 800DB26C
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DB270
  c->r[3]=c->r[31]|c->r[31]; // 800DB274
  c->lr=0x800DB27Cu; f_8030C0A0(c); // 800DB278
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DB27C
  c->r[3]=c->r[31]|c->r[31]; // 800DB280
  c->lr=0x800DB288u; f_8030C0A0(c); // 800DB284
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DB288
  c->r[3]=c->r[31]|c->r[31]; // 800DB28C
  c->lr=0x800DB294u; f_8030C0A0(c); // 800DB290
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DB294
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB298
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB29C
  c->lr=c->r[0]; // 800DB2A0
  c->r[1]=c->r[1]+0x00000010u; // 800DB2A4
  return; // 800DB2A8
}

// fn_800DB2AC
void f_800DB2AC(Ctx* __restrict c) {
  trace_call(0x800DB2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB2AC
  c->r[0]=c->lr; // 800DB2B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB2B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB2B8
  c->r[31]=c->r[4]|c->r[4]; // 800DB2BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB2C0
  c->r[30]=c->r[3]|c->r[3]; // 800DB2C4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB2C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DB2CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DB2D0
  c->r[3]=c->r[4]+0x00000030u; // 800DB2D4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DB2D8
  c->r[4]=c->r[30]+0x00000030u; // 800DB2DC
  c->lr=0x800DB2E4u; f_8003AB48(c); // 800DB2E0
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB2E4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DB2E8
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB2EC
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800DB2F0
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB2F4
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800DB2F8
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB2FC
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800DB300
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB304
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DB308
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB30C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DB310
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB314
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB318
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB31C
  c->lr=c->r[0]; // 800DB320
  c->r[1]=c->r[1]+0x00000010u; // 800DB324
  return; // 800DB328
}

// fn_800DB32C
void f_800DB32C(Ctx* __restrict c) {
  trace_call(0x800DB32Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DB32C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DB330
  c->ctr=c->r[12]; // 800DB334
  if (true) { dispatch(c,c->ctr); return; } // 800DB338
}

// fn_800DB33C
void f_800DB33C(Ctx* __restrict c) {
  trace_call(0x800DB33Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB33C
  c->r[0]=c->lr; // 800DB340
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB344
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB348
  c->r[29]=c->r[3]|c->r[3]; // 800DB34C
  c->r[30]=c->r[4]|c->r[4]; // 800DB350
  c->r[31]=c->r[5]|c->r[5]; // 800DB354
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DB358
  cmps(c,0,(int32_t)c->r[0],7); // 800DB35C
  if (!crb(c,0)) { goto L_800DB370; } // 800DB360
  c->r[4]=c->r[31]|c->r[31]; // 800DB364
  c->r[3]=c->r[3]+0x00000030u; // 800DB368
  c->lr=0x800DB370u; f_8003A994(c); // 800DB36C
L_800DB370:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DB370
  c->r[3]=c->r[29]|c->r[29]; // 800DB374
  c->r[4]=c->r[30]|c->r[30]; // 800DB378
  c->r[5]=c->r[31]|c->r[31]; // 800DB37C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DB380
  c->ctr=c->r[12]; // 800DB384
  if (true) { c->lr=0x800DB38Cu; dispatch(c,c->ctr); } // 800DB388
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB38C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB390
  c->lr=c->r[0]; // 800DB394
  c->r[1]=c->r[1]+0x00000020u; // 800DB398
  return; // 800DB39C
}

// fn_800DB3A0
void f_800DB3A0(Ctx* __restrict c) {
  trace_call(0x800DB3A0u);
  c->r[3]=0u+0x80410000u; // 800DB3A0
  c->r[3]=c->r[3]+0xFFFFD893u; // 800DB3A4
  return; // 800DB3A8
}

// fn_800DB3AC
void f_800DB3AC(Ctx* __restrict c) {
  trace_call(0x800DB3ACu);
  c->r[3]=0u+0x00000054u; // 800DB3AC
  return; // 800DB3B0
}

// fn_800DB3B4
void f_800DB3B4(Ctx* __restrict c) {
  trace_call(0x800DB3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB3B4
  c->r[0]=c->lr; // 800DB3B8
  c->r[3]=0u+0x00000054u; // 800DB3BC
  c->r[4]=c->r[13]+0xFFFFB5CEu; // 800DB3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB3C4
  c->r[5]=0u+0x00000000u; // 800DB3C8
  c->r[6]=0u+0x00001001u; // 800DB3CC
  c->lr=0x800DB3D4u; f_80244D20(c); // 800DB3D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DB3D4
  if (crb(c,2)) { goto L_800DB3E0; } // 800DB3D8
  c->lr=0x800DB3E0u; f_800DB1C8(c); // 800DB3DC
L_800DB3E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB3E0
  c->lr=c->r[0]; // 800DB3E4
  c->r[1]=c->r[1]+0x00000010u; // 800DB3E8
  return; // 800DB3EC
}

// fn_800DB3F0
void f_800DB3F0(Ctx* __restrict c) {
  trace_call(0x800DB3F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB3F0
  c->r[0]=c->lr; // 800DB3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB3FC
  c->r[31]=c->r[3]|c->r[3]; // 800DB400
  c->lr=0x800DB408u; f_800D7120(c); // 800DB404
  c->r[5]=0u+0x80410000u; // 800DB408
  c->r[3]=0u+0xC21F0000u; // 800DB40C
  c->r[0]=c->r[3]+0x000070CAu; // 800DB410
  c->r[4]=0u+0x00000000u; // 800DB414
  c->r[5]=c->r[5]+0x00007850u; // 800DB418
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DB41C
  c->r[3]=c->r[31]|c->r[31]; // 800DB420
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DB424
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DB428
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB42C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB430
  c->lr=c->r[0]; // 800DB434
  c->r[1]=c->r[1]+0x00000010u; // 800DB438
  return; // 800DB43C
}

// fn_800DB440
void f_800DB440(Ctx* __restrict c) {
  trace_call(0x800DB440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB440
  c->r[0]=c->lr; // 800DB444
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB448
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB44C
  c->r[30]=c->r[3]|c->r[3]; // 800DB450
  c->r[31]=c->r[4]|c->r[4]; // 800DB454
  c->lr=0x800DB45Cu; f_8030D728(c); // 800DB458
  c->r[3]=c->r[31]|c->r[31]; // 800DB45C
  c->r[4]=0u+0x00000000u; // 800DB460
  c->lr=0x800DB468u; f_8030BE30(c); // 800DB464
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DB468
  c->r[3]=c->r[31]|c->r[31]; // 800DB46C
  c->lr=0x800DB474u; f_8030BD1C(c); // 800DB470
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DB474
  c->r[3]=c->r[31]|c->r[31]; // 800DB478
  c->lr=0x800DB480u; f_8030C0A0(c); // 800DB47C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DB480
  c->r[3]=c->r[31]|c->r[31]; // 800DB484
  c->lr=0x800DB48Cu; f_8030C0A0(c); // 800DB488
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800DB48C
  c->r[3]=c->r[31]|c->r[31]; // 800DB490
  c->lr=0x800DB498u; f_8030C0A0(c); // 800DB494
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 800DB498
  c->r[3]=c->r[31]|c->r[31]; // 800DB49C
  c->lr=0x800DB4A4u; f_8030C0A0(c); // 800DB4A0
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800DB4A4
  c->r[3]=c->r[31]|c->r[31]; // 800DB4A8
  c->lr=0x800DB4B0u; f_8030C0A0(c); // 800DB4AC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800DB4B0
  c->r[3]=c->r[31]|c->r[31]; // 800DB4B4
  c->lr=0x800DB4BCu; f_8030C0A0(c); // 800DB4B8
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800DB4BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB4C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB4C4
  c->lr=c->r[0]; // 800DB4C8
  c->r[1]=c->r[1]+0x00000010u; // 800DB4CC
  return; // 800DB4D0
}

// fn_800DB4D4
void f_800DB4D4(Ctx* __restrict c) {
  trace_call(0x800DB4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB4D4
  c->r[0]=c->lr; // 800DB4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB4DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB4E0
  c->r[31]=c->r[4]|c->r[4]; // 800DB4E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DB4E8
  c->r[30]=c->r[3]|c->r[3]; // 800DB4EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB4F0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DB4F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DB4F8
  c->r[3]=c->r[4]+0x00000030u; // 800DB4FC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DB500
  c->r[4]=c->r[30]+0x00000030u; // 800DB504
  c->lr=0x800DB50Cu; f_8003AB48(c); // 800DB508
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB50C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DB510
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB514
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800DB518
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB51C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800DB520
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB524
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800DB528
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB52C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DB530
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB534
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800DB538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB53C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DB540
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB544
  c->lr=c->r[0]; // 800DB548
  c->r[1]=c->r[1]+0x00000010u; // 800DB54C
  return; // 800DB550
}

// fn_800DB554
void f_800DB554(Ctx* __restrict c) {
  trace_call(0x800DB554u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DB554
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DB558
  c->ctr=c->r[12]; // 800DB55C
  if (true) { dispatch(c,c->ctr); return; } // 800DB560
}

// fn_800DB564
void f_800DB564(Ctx* __restrict c) {
  trace_call(0x800DB564u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB564
  c->r[0]=c->lr; // 800DB568
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB56C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB570
  c->r[29]=c->r[3]|c->r[3]; // 800DB574
  c->r[30]=c->r[4]|c->r[4]; // 800DB578
  c->r[31]=c->r[5]|c->r[5]; // 800DB57C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DB580
  cmps(c,0,(int32_t)c->r[0],7); // 800DB584
  if (!crb(c,0)) { goto L_800DB598; } // 800DB588
  c->r[4]=c->r[31]|c->r[31]; // 800DB58C
  c->r[3]=c->r[3]+0x00000030u; // 800DB590
  c->lr=0x800DB598u; f_8003A994(c); // 800DB594
L_800DB598:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DB598
  c->r[3]=c->r[29]|c->r[29]; // 800DB59C
  c->r[4]=c->r[30]|c->r[30]; // 800DB5A0
  c->r[5]=c->r[31]|c->r[31]; // 800DB5A4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DB5A8
  c->ctr=c->r[12]; // 800DB5AC
  if (true) { c->lr=0x800DB5B4u; dispatch(c,c->ctr); } // 800DB5B0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB5B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB5B8
  c->lr=c->r[0]; // 800DB5BC
  c->r[1]=c->r[1]+0x00000020u; // 800DB5C0
  return; // 800DB5C4
}

// fn_800DB5C8
void f_800DB5C8(Ctx* __restrict c) {
  trace_call(0x800DB5C8u);
  c->r[3]=0u+0x80410000u; // 800DB5C8
  c->r[3]=c->r[3]+0xFFFFD8A2u; // 800DB5CC
  return; // 800DB5D0
}

// fn_800DB5D4
void f_800DB5D4(Ctx* __restrict c) {
  trace_call(0x800DB5D4u);
  c->r[3]=0u+0x00000054u; // 800DB5D4
  return; // 800DB5D8
}

// fn_800DB5DC
void f_800DB5DC(Ctx* __restrict c) {
  trace_call(0x800DB5DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB5DC
  c->r[0]=c->lr; // 800DB5E0
  c->r[3]=0u+0x00000054u; // 800DB5E4
  c->r[4]=c->r[13]+0xFFFFB5D3u; // 800DB5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB5EC
  c->r[5]=0u+0x00000000u; // 800DB5F0
  c->r[6]=0u+0x00001001u; // 800DB5F4
  c->lr=0x800DB5FCu; f_80244D20(c); // 800DB5F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DB5FC
  if (crb(c,2)) { goto L_800DB608; } // 800DB600
  c->lr=0x800DB608u; f_800DB3F0(c); // 800DB604
L_800DB608:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB608
  c->lr=c->r[0]; // 800DB60C
  c->r[1]=c->r[1]+0x00000010u; // 800DB610
  return; // 800DB614
}

// fn_800DB618
void f_800DB618(Ctx* __restrict c) {
  trace_call(0x800DB618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB618
  c->r[0]=c->lr; // 800DB61C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB620
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB624
  c->r[31]=c->r[3]|c->r[3]; // 800DB628
  c->lr=0x800DB630u; f_800D7120(c); // 800DB62C
  c->r[4]=0u+0x80410000u; // 800DB630
  c->r[3]=0u+0xDC6E0000u; // 800DB634
  c->r[0]=c->r[3]+0xFFFF9AB7u; // 800DB638
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DB63C
  c->r[4]=c->r[4]+0x0000781Cu; // 800DB640
  c->r[3]=c->r[31]|c->r[31]; // 800DB644
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DB648
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB64C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB650
  c->lr=c->r[0]; // 800DB654
  c->r[1]=c->r[1]+0x00000010u; // 800DB658
  return; // 800DB65C
}

// fn_800DB660
void f_800DB660(Ctx* __restrict c) {
  trace_call(0x800DB660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB660
  c->r[0]=c->lr; // 800DB664
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB668
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB66C
  c->r[30]=c->r[3]|c->r[3]; // 800DB670
  c->r[31]=c->r[4]|c->r[4]; // 800DB674
  c->lr=0x800DB67Cu; f_8030D728(c); // 800DB678
  c->r[3]=c->r[31]|c->r[31]; // 800DB67C
  c->lr=0x800DB684u; f_8030C0A0(c); // 800DB680
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800DB684
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB688
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB68C
  c->lr=c->r[0]; // 800DB690
  c->r[1]=c->r[1]+0x00000010u; // 800DB694
  return; // 800DB698
}

// fn_800DB69C
void f_800DB69C(Ctx* __restrict c) {
  trace_call(0x800DB69Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DB69C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DB6A0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB6A4
  W32(c->r[4]+0x00000000u,c->r[5]); // 800DB6A8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DB6AC
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800DB6B0
  return; // 800DB6B4
}

// fn_800DB6B8
void f_800DB6B8(Ctx* __restrict c) {
  trace_call(0x800DB6B8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DB6B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DB6BC
  c->ctr=c->r[12]; // 800DB6C0
  if (true) { dispatch(c,c->ctr); return; } // 800DB6C4
}

// fn_800DB6C8
void f_800DB6C8(Ctx* __restrict c) {
  trace_call(0x800DB6C8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DB6C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DB6CC
  c->ctr=c->r[12]; // 800DB6D0
  if (true) { dispatch(c,c->ctr); return; } // 800DB6D4
}

// fn_800DB6D8
void f_800DB6D8(Ctx* __restrict c) {
  trace_call(0x800DB6D8u);
  c->r[3]=0u+0x80410000u; // 800DB6D8
  c->r[3]=c->r[3]+0xFFFFD8B1u; // 800DB6DC
  return; // 800DB6E0
}

// fn_800DB6E4
void f_800DB6E4(Ctx* __restrict c) {
  trace_call(0x800DB6E4u);
  c->r[3]=0u+0x00000034u; // 800DB6E4
  return; // 800DB6E8
}

// fn_800DB6EC
void f_800DB6EC(Ctx* __restrict c) {
  trace_call(0x800DB6ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB6EC
  c->r[0]=c->lr; // 800DB6F0
  c->r[3]=0u+0x00000034u; // 800DB6F4
  c->r[4]=c->r[13]+0xFFFFB5D8u; // 800DB6F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB6FC
  c->r[5]=0u+0x00000000u; // 800DB700
  c->r[6]=0u+0x00001001u; // 800DB704
  c->lr=0x800DB70Cu; f_80244D20(c); // 800DB708
  cmps(c,0,(int32_t)c->r[3],0); // 800DB70C
  if (crb(c,2)) { goto L_800DB718; } // 800DB710
  c->lr=0x800DB718u; f_800DB618(c); // 800DB714
L_800DB718:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB718
  c->lr=c->r[0]; // 800DB71C
  c->r[1]=c->r[1]+0x00000010u; // 800DB720
  return; // 800DB724
}

// fn_800DB728
void f_800DB728(Ctx* __restrict c) {
  trace_call(0x800DB728u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB728
  c->r[0]=c->lr; // 800DB72C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB730
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB734
  c->r[31]=c->r[3]|c->r[3]; // 800DB738
  c->lr=0x800DB740u; f_800D7120(c); // 800DB73C
  c->r[5]=0u+0x80410000u; // 800DB740
  c->r[3]=0u+0x59720000u; // 800DB744
  c->r[0]=c->r[3]+0x00004EB8u; // 800DB748
  c->r[4]=0u+0x00000000u; // 800DB74C
  c->r[5]=c->r[5]+0x000077E8u; // 800DB750
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DB754
  c->r[3]=c->r[31]|c->r[31]; // 800DB758
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DB75C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DB760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB764
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB768
  c->lr=c->r[0]; // 800DB76C
  c->r[1]=c->r[1]+0x00000010u; // 800DB770
  return; // 800DB774
}

// fn_800DB778
void f_800DB778(Ctx* __restrict c) {
  trace_call(0x800DB778u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB778
  c->r[0]=c->lr; // 800DB77C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB780
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB784
  c->r[30]=c->r[3]|c->r[3]; // 800DB788
  c->r[31]=c->r[4]|c->r[4]; // 800DB78C
  c->lr=0x800DB794u; f_8030D728(c); // 800DB790
  c->r[3]=c->r[31]|c->r[31]; // 800DB794
  c->r[4]=0u+0x00000000u; // 800DB798
  c->lr=0x800DB7A0u; f_8030BE30(c); // 800DB79C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DB7A0
  c->r[3]=c->r[31]|c->r[31]; // 800DB7A4
  c->lr=0x800DB7ACu; f_8030BD1C(c); // 800DB7A8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DB7AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB7B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB7B4
  c->lr=c->r[0]; // 800DB7B8
  c->r[1]=c->r[1]+0x00000010u; // 800DB7BC
  return; // 800DB7C0
}

// fn_800DB7C4
void f_800DB7C4(Ctx* __restrict c) {
  trace_call(0x800DB7C4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB7C4
  c->r[5]=c->r[3]|c->r[3]; // 800DB7C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DB7CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DB7D0
  c->r[3]=c->r[4]+0x00000030u; // 800DB7D4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DB7D8
  c->r[4]=c->r[5]+0x00000030u; // 800DB7DC
  f_8003AB48(c); return; // 800DB7E0
}

// fn_800DB7E4
void f_800DB7E4(Ctx* __restrict c) {
  trace_call(0x800DB7E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DB7E4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DB7E8
  c->ctr=c->r[12]; // 800DB7EC
  if (true) { dispatch(c,c->ctr); return; } // 800DB7F0
}

// fn_800DB7F4
void f_800DB7F4(Ctx* __restrict c) {
  trace_call(0x800DB7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB7F4
  c->r[0]=c->lr; // 800DB7F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB7FC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB800
  c->r[29]=c->r[3]|c->r[3]; // 800DB804
  c->r[30]=c->r[4]|c->r[4]; // 800DB808
  c->r[31]=c->r[5]|c->r[5]; // 800DB80C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DB810
  cmps(c,0,(int32_t)c->r[0],7); // 800DB814
  if (!crb(c,0)) { goto L_800DB828; } // 800DB818
  c->r[4]=c->r[31]|c->r[31]; // 800DB81C
  c->r[3]=c->r[3]+0x00000030u; // 800DB820
  c->lr=0x800DB828u; f_8003A994(c); // 800DB824
L_800DB828:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DB828
  c->r[3]=c->r[29]|c->r[29]; // 800DB82C
  c->r[4]=c->r[30]|c->r[30]; // 800DB830
  c->r[5]=c->r[31]|c->r[31]; // 800DB834
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DB838
  c->ctr=c->r[12]; // 800DB83C
  if (true) { c->lr=0x800DB844u; dispatch(c,c->ctr); } // 800DB840
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB844
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB848
  c->lr=c->r[0]; // 800DB84C
  c->r[1]=c->r[1]+0x00000020u; // 800DB850
  return; // 800DB854
}

// fn_800DB858
void f_800DB858(Ctx* __restrict c) {
  trace_call(0x800DB858u);
  c->r[3]=0u+0x80410000u; // 800DB858
  c->r[3]=c->r[3]+0xFFFFD8C8u; // 800DB85C
  return; // 800DB860
}

// fn_800DB864
void f_800DB864(Ctx* __restrict c) {
  trace_call(0x800DB864u);
  c->r[3]=0u+0x0000003Cu; // 800DB864
  return; // 800DB868
}

// fn_800DB86C
void f_800DB86C(Ctx* __restrict c) {
  trace_call(0x800DB86Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB86C
  c->r[0]=c->lr; // 800DB870
  c->r[3]=0u+0x0000003Cu; // 800DB874
  c->r[4]=c->r[13]+0xFFFFB5DDu; // 800DB878
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB87C
  c->r[5]=0u+0x00000000u; // 800DB880
  c->r[6]=0u+0x00001001u; // 800DB884
  c->lr=0x800DB88Cu; f_80244D20(c); // 800DB888
  cmps(c,0,(int32_t)c->r[3],0); // 800DB88C
  if (crb(c,2)) { goto L_800DB898; } // 800DB890
  c->lr=0x800DB898u; f_800DB728(c); // 800DB894
L_800DB898:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB898
  c->lr=c->r[0]; // 800DB89C
  c->r[1]=c->r[1]+0x00000010u; // 800DB8A0
  return; // 800DB8A4
}

// fn_800DB8A8
void f_800DB8A8(Ctx* __restrict c) {
  trace_call(0x800DB8A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB8A8
  c->r[0]=c->lr; // 800DB8AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB8B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB8B4
  c->r[31]=c->r[3]|c->r[3]; // 800DB8B8
  c->lr=0x800DB8C0u; f_800D7120(c); // 800DB8BC
  c->r[5]=0u+0x80410000u; // 800DB8C0
  c->r[3]=0u+0xBC190000u; // 800DB8C4
  c->r[4]=0u+0x00000000u; // 800DB8C8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DB8CC
  c->r[0]=c->r[3]+0x000021D3u; // 800DB8D0
  c->r[5]=c->r[5]+0x000077B4u; // 800DB8D4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DB8D8
  c->r[3]=c->r[31]|c->r[31]; // 800DB8DC
  W32(c->r[31]+0x00000044u,c->r[4]); // 800DB8E0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DB8E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB8E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB8EC
  c->lr=c->r[0]; // 800DB8F0
  c->r[1]=c->r[1]+0x00000010u; // 800DB8F4
  return; // 800DB8F8
}

// fn_800DB8FC
void f_800DB8FC(Ctx* __restrict c) {
  trace_call(0x800DB8FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB8FC
  c->r[0]=c->lr; // 800DB900
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB904
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB908
  c->r[30]=c->r[3]|c->r[3]; // 800DB90C
  c->r[31]=c->r[4]|c->r[4]; // 800DB910
  c->lr=0x800DB918u; f_8030D728(c); // 800DB914
  c->r[3]=c->r[31]|c->r[31]; // 800DB918
  c->r[4]=0u+0x00000000u; // 800DB91C
  c->lr=0x800DB924u; f_8030BE30(c); // 800DB920
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DB924
  c->r[3]=c->r[31]|c->r[31]; // 800DB928
  c->lr=0x800DB930u; f_8030BD1C(c); // 800DB92C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DB930
  c->r[3]=c->r[31]|c->r[31]; // 800DB934
  c->r[4]=0u+0x00000000u; // 800DB938
  c->lr=0x800DB940u; f_8030BE30(c); // 800DB93C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DB940
  c->r[3]=c->r[31]|c->r[31]; // 800DB944
  c->lr=0x800DB94Cu; f_8030BD1C(c); // 800DB948
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DB94C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB950
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB954
  c->lr=c->r[0]; // 800DB958
  c->r[1]=c->r[1]+0x00000010u; // 800DB95C
  return; // 800DB960
}

// fn_800DB964
void f_800DB964(Ctx* __restrict c) {
  trace_call(0x800DB964u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB964
  c->r[0]=c->lr; // 800DB968
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB96C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB970
  c->r[30]=c->r[3]|c->r[3]; // 800DB974
  c->r[31]=c->r[4]|c->r[4]; // 800DB978
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB97C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DB980
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DB984
  c->r[3]=c->r[4]+0x00000030u; // 800DB988
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DB98C
  c->r[4]=c->r[30]+0x00000030u; // 800DB990
  c->lr=0x800DB998u; f_8003AB48(c); // 800DB994
  c->r[3]=c->r[31]+0x0000003Cu; // 800DB998
  c->r[4]=c->r[30]+0x0000003Cu; // 800DB99C
  c->lr=0x800DB9A4u; f_8003AB48(c); // 800DB9A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB9A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB9A8
  c->lr=c->r[0]; // 800DB9AC
  c->r[1]=c->r[1]+0x00000010u; // 800DB9B0
  return; // 800DB9B4
}

// fn_800DB9B8
void f_800DB9B8(Ctx* __restrict c) {
  trace_call(0x800DB9B8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DB9B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DB9BC
  c->ctr=c->r[12]; // 800DB9C0
  if (true) { dispatch(c,c->ctr); return; } // 800DB9C4
}

// fn_800DB9C8
void f_800DB9C8(Ctx* __restrict c) {
  trace_call(0x800DB9C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB9C8
  c->r[0]=c->lr; // 800DB9CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB9D0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB9D4
  c->r[29]=c->r[3]|c->r[3]; // 800DB9D8
  c->r[30]=c->r[4]|c->r[4]; // 800DB9DC
  c->r[31]=c->r[5]|c->r[5]; // 800DB9E0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DB9E4
  cmps(c,0,(int32_t)c->r[0],7); // 800DB9E8
  if (!crb(c,0)) { goto L_800DB9FC; } // 800DB9EC
  c->r[4]=c->r[31]|c->r[31]; // 800DB9F0
  c->r[3]=c->r[3]+0x00000030u; // 800DB9F4
  c->lr=0x800DB9FCu; f_8003A994(c); // 800DB9F8
L_800DB9FC:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DB9FC
  cmps(c,0,(int32_t)c->r[0],7); // 800DBA00
  if (!crb(c,0)) { goto L_800DBA14; } // 800DBA04
  c->r[4]=c->r[31]|c->r[31]; // 800DBA08
  c->r[3]=c->r[29]+0x0000003Cu; // 800DBA0C
  c->lr=0x800DBA14u; f_8003A994(c); // 800DBA10
L_800DBA14:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DBA14
  c->r[3]=c->r[29]|c->r[29]; // 800DBA18
  c->r[4]=c->r[30]|c->r[30]; // 800DBA1C
  c->r[5]=c->r[31]|c->r[31]; // 800DBA20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DBA24
  c->ctr=c->r[12]; // 800DBA28
  if (true) { c->lr=0x800DBA30u; dispatch(c,c->ctr); } // 800DBA2C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBA30
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBA34
  c->lr=c->r[0]; // 800DBA38
  c->r[1]=c->r[1]+0x00000020u; // 800DBA3C
  return; // 800DBA40
}

// fn_800DBA44
void f_800DBA44(Ctx* __restrict c) {
  trace_call(0x800DBA44u);
  c->r[3]=0u+0x80410000u; // 800DBA44
  c->r[3]=c->r[3]+0xFFFFD8E7u; // 800DBA48
  return; // 800DBA4C
}

// fn_800DBA50
void f_800DBA50(Ctx* __restrict c) {
  trace_call(0x800DBA50u);
  c->r[3]=0u+0x00000048u; // 800DBA50
  return; // 800DBA54
}

// fn_800DBA58
void f_800DBA58(Ctx* __restrict c) {
  trace_call(0x800DBA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBA58
  c->r[0]=c->lr; // 800DBA5C
  c->r[3]=0u+0x00000048u; // 800DBA60
  c->r[4]=c->r[13]+0xFFFFB5E2u; // 800DBA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBA68
  c->r[5]=0u+0x00000000u; // 800DBA6C
  c->r[6]=0u+0x00001001u; // 800DBA70
  c->lr=0x800DBA78u; f_80244D20(c); // 800DBA74
  cmps(c,0,(int32_t)c->r[3],0); // 800DBA78
  if (crb(c,2)) { goto L_800DBA84; } // 800DBA7C
  c->lr=0x800DBA84u; f_800DB8A8(c); // 800DBA80
L_800DBA84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBA84
  c->lr=c->r[0]; // 800DBA88
  c->r[1]=c->r[1]+0x00000010u; // 800DBA8C
  return; // 800DBA90
}

// fn_800DBA94
void f_800DBA94(Ctx* __restrict c) {
  trace_call(0x800DBA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBA94
  c->r[0]=c->lr; // 800DBA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBA9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBAA0
  c->r[31]=c->r[3]|c->r[3]; // 800DBAA4
  c->lr=0x800DBAACu; f_800D7120(c); // 800DBAA8
  c->r[5]=0u+0x80410000u; // 800DBAAC
  c->r[3]=0u+0x2CC40000u; // 800DBAB0
  c->r[0]=c->r[3]+0xFFFFE663u; // 800DBAB4
  c->r[4]=0u+0x00000000u; // 800DBAB8
  c->r[5]=c->r[5]+0x00007780u; // 800DBABC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DBAC0
  c->r[3]=c->r[31]|c->r[31]; // 800DBAC4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DBAC8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DBACC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBAD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBAD4
  c->lr=c->r[0]; // 800DBAD8
  c->r[1]=c->r[1]+0x00000010u; // 800DBADC
  return; // 800DBAE0
}

// fn_800DBAE4
void f_800DBAE4(Ctx* __restrict c) {
  trace_call(0x800DBAE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBAE4
  c->r[0]=c->lr; // 800DBAE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBAEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBAF0
  c->r[30]=c->r[3]|c->r[3]; // 800DBAF4
  c->r[31]=c->r[4]|c->r[4]; // 800DBAF8
  c->lr=0x800DBB00u; f_8030D728(c); // 800DBAFC
  c->r[3]=c->r[31]|c->r[31]; // 800DBB00
  c->r[4]=0u+0x00000000u; // 800DBB04
  c->lr=0x800DBB0Cu; f_8030BE30(c); // 800DBB08
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DBB0C
  c->r[3]=c->r[31]|c->r[31]; // 800DBB10
  c->lr=0x800DBB18u; f_8030BD1C(c); // 800DBB14
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DBB18
  c->r[3]=c->r[31]|c->r[31]; // 800DBB1C
  c->lr=0x800DBB24u; f_8030BD1C(c); // 800DBB20
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800DBB24
  c->r[3]=c->r[31]|c->r[31]; // 800DBB28
  c->lr=0x800DBB30u; f_8030BD1C(c); // 800DBB2C
  W8(c->r[30]+0x0000003Du,c->r[3]); // 800DBB30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBB34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBB38
  c->lr=c->r[0]; // 800DBB3C
  c->r[1]=c->r[1]+0x00000010u; // 800DBB40
  return; // 800DBB44
}

// fn_800DBB48
void f_800DBB48(Ctx* __restrict c) {
  trace_call(0x800DBB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBB48
  c->r[0]=c->lr; // 800DBB4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBB50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBB54
  c->r[30]=c->r[3]|c->r[3]; // 800DBB58
  c->r[31]=c->r[4]|c->r[4]; // 800DBB5C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBB60
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DBB64
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DBB68
  c->r[3]=c->r[4]+0x00000030u; // 800DBB6C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DBB70
  c->r[4]=c->r[30]+0x00000030u; // 800DBB74
  c->lr=0x800DBB7Cu; f_8003AB48(c); // 800DBB78
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800DBB7C
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800DBB80
  c->r[0]=R8(c->r[30]+0x0000003Du); // 800DBB84
  W8(c->r[31]+0x0000003Du,c->r[0]); // 800DBB88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBB8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBB90
  c->lr=c->r[0]; // 800DBB94
  c->r[1]=c->r[1]+0x00000010u; // 800DBB98
  return; // 800DBB9C
}

// fn_800DBBA0
void f_800DBBA0(Ctx* __restrict c) {
  trace_call(0x800DBBA0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DBBA0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DBBA4
  c->ctr=c->r[12]; // 800DBBA8
  if (true) { dispatch(c,c->ctr); return; } // 800DBBAC
}

// fn_800DBBB0
void f_800DBBB0(Ctx* __restrict c) {
  trace_call(0x800DBBB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBBB0
  c->r[0]=c->lr; // 800DBBB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBBB8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBBBC
  c->r[29]=c->r[3]|c->r[3]; // 800DBBC0
  c->r[30]=c->r[4]|c->r[4]; // 800DBBC4
  c->r[31]=c->r[5]|c->r[5]; // 800DBBC8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DBBCC
  cmps(c,0,(int32_t)c->r[0],7); // 800DBBD0
  if (!crb(c,0)) { goto L_800DBBE4; } // 800DBBD4
  c->r[4]=c->r[31]|c->r[31]; // 800DBBD8
  c->r[3]=c->r[3]+0x00000030u; // 800DBBDC
  c->lr=0x800DBBE4u; f_8003A994(c); // 800DBBE0
L_800DBBE4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DBBE4
  c->r[3]=c->r[29]|c->r[29]; // 800DBBE8
  c->r[4]=c->r[30]|c->r[30]; // 800DBBEC
  c->r[5]=c->r[31]|c->r[31]; // 800DBBF0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DBBF4
  c->ctr=c->r[12]; // 800DBBF8
  if (true) { c->lr=0x800DBC00u; dispatch(c,c->ctr); } // 800DBBFC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBC00
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBC04
  c->lr=c->r[0]; // 800DBC08
  c->r[1]=c->r[1]+0x00000020u; // 800DBC0C
  return; // 800DBC10
}

// fn_800DBC14
void f_800DBC14(Ctx* __restrict c) {
  trace_call(0x800DBC14u);
  c->r[3]=0u+0x80410000u; // 800DBC14
  c->r[3]=c->r[3]+0xFFFFD8F9u; // 800DBC18
  return; // 800DBC1C
}

// fn_800DBC20
void f_800DBC20(Ctx* __restrict c) {
  trace_call(0x800DBC20u);
  c->r[3]=0u+0x00000040u; // 800DBC20
  return; // 800DBC24
}

// fn_800DBC28
void f_800DBC28(Ctx* __restrict c) {
  trace_call(0x800DBC28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBC28
  c->r[0]=c->lr; // 800DBC2C
  c->r[3]=0u+0x00000040u; // 800DBC30
  c->r[4]=c->r[13]+0xFFFFB5E7u; // 800DBC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBC38
  c->r[5]=0u+0x00000000u; // 800DBC3C
  c->r[6]=0u+0x00001001u; // 800DBC40
  c->lr=0x800DBC48u; f_80244D20(c); // 800DBC44
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC48
  if (crb(c,2)) { goto L_800DBC54; } // 800DBC4C
  c->lr=0x800DBC54u; f_800DBA94(c); // 800DBC50
L_800DBC54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBC54
  c->lr=c->r[0]; // 800DBC58
  c->r[1]=c->r[1]+0x00000010u; // 800DBC5C
  return; // 800DBC60
}

// fn_800DBC64
void f_800DBC64(Ctx* __restrict c) {
  trace_call(0x800DBC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBC64
  c->r[0]=c->lr; // 800DBC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBC70
  c->r[31]=c->r[3]|c->r[3]; // 800DBC74
  c->lr=0x800DBC7Cu; f_800D7120(c); // 800DBC78
  c->r[4]=0u+0x80410000u; // 800DBC7C
  c->r[3]=0u+0x39060000u; // 800DBC80
  c->r[0]=c->r[3]+0xFFFFFCD6u; // 800DBC84
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DBC88
  c->r[4]=c->r[4]+0x0000774Cu; // 800DBC8C
  c->r[3]=c->r[31]|c->r[31]; // 800DBC90
  W32(c->r[31]+0x00000008u,c->r[4]); // 800DBC94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBC98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBC9C
  c->lr=c->r[0]; // 800DBCA0
  c->r[1]=c->r[1]+0x00000010u; // 800DBCA4
  return; // 800DBCA8
}

// fn_800DBCAC
void f_800DBCAC(Ctx* __restrict c) {
  trace_call(0x800DBCACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBCAC
  c->r[0]=c->lr; // 800DBCB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBCB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBCB8
  c->r[30]=c->r[3]|c->r[3]; // 800DBCBC
  c->r[31]=c->r[4]|c->r[4]; // 800DBCC0
  c->lr=0x800DBCC8u; f_8030D728(c); // 800DBCC4
  c->r[3]=c->r[31]|c->r[31]; // 800DBCC8
  c->r[4]=0u+0x00000000u; // 800DBCCC
  c->lr=0x800DBCD4u; f_8030BE30(c); // 800DBCD0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DBCD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBCDC
  c->lr=c->r[0]; // 800DBCE0
  c->r[1]=c->r[1]+0x00000010u; // 800DBCE4
  return; // 800DBCE8
}

// fn_800DBCEC
void f_800DBCEC(Ctx* __restrict c) {
  trace_call(0x800DBCECu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DBCEC
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DBCF0
  c->r[0]=R32(c->r[3]+0x00000030u); // 800DBCF4
  W32(c->r[4]+0x00000000u,c->r[6]); // 800DBCF8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800DBCFC
  W32(c->r[4]+0x00000030u,c->r[0]); // 800DBD00
  return; // 800DBD04
}

// fn_800DBD08
void f_800DBD08(Ctx* __restrict c) {
  trace_call(0x800DBD08u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DBD08
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DBD0C
  c->ctr=c->r[12]; // 800DBD10
  if (true) { dispatch(c,c->ctr); return; } // 800DBD14
}

// fn_800DBD18
void f_800DBD18(Ctx* __restrict c) {
  trace_call(0x800DBD18u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DBD18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DBD1C
  c->ctr=c->r[12]; // 800DBD20
  if (true) { dispatch(c,c->ctr); return; } // 800DBD24
}

// fn_800DBD28
void f_800DBD28(Ctx* __restrict c) {
  trace_call(0x800DBD28u);
  c->r[3]=0u+0x80410000u; // 800DBD28
  c->r[3]=c->r[3]+0xFFFFD909u; // 800DBD2C
  return; // 800DBD30
}

// fn_800DBD34
void f_800DBD34(Ctx* __restrict c) {
  trace_call(0x800DBD34u);
  c->r[3]=0u+0x00000034u; // 800DBD34
  return; // 800DBD38
}

// fn_800DBD3C
void f_800DBD3C(Ctx* __restrict c) {
  trace_call(0x800DBD3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBD3C
  c->r[0]=c->lr; // 800DBD40
  c->r[3]=0u+0x00000034u; // 800DBD44
  c->r[4]=c->r[13]+0xFFFFB5ECu; // 800DBD48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBD4C
  c->r[5]=0u+0x00000000u; // 800DBD50
  c->r[6]=0u+0x00001001u; // 800DBD54
  c->lr=0x800DBD5Cu; f_80244D20(c); // 800DBD58
  cmps(c,0,(int32_t)c->r[3],0); // 800DBD5C
  if (crb(c,2)) { goto L_800DBD68; } // 800DBD60
  c->lr=0x800DBD68u; f_800DBC64(c); // 800DBD64
L_800DBD68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBD68
  c->lr=c->r[0]; // 800DBD6C
  c->r[1]=c->r[1]+0x00000010u; // 800DBD70
  return; // 800DBD74
}

// fn_800DBD78
void f_800DBD78(Ctx* __restrict c) {
  trace_call(0x800DBD78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBD78
  c->r[0]=c->lr; // 800DBD7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBD80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBD84
  c->r[31]=c->r[3]|c->r[3]; // 800DBD88
  c->lr=0x800DBD90u; f_800D7120(c); // 800DBD8C
  c->r[5]=0u+0x80410000u; // 800DBD90
  c->r[3]=0u+0x39070000u; // 800DBD94
  c->r[0]=c->r[3]+0xFFFFF5DCu; // 800DBD98
  c->r[4]=0u+0x00000000u; // 800DBD9C
  c->r[5]=c->r[5]+0x00007718u; // 800DBDA0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DBDA4
  c->r[3]=c->r[31]|c->r[31]; // 800DBDA8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DBDAC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DBDB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBDB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBDB8
  c->lr=c->r[0]; // 800DBDBC
  c->r[1]=c->r[1]+0x00000010u; // 800DBDC0
  return; // 800DBDC4
}

// fn_800DBDC8
void f_800DBDC8(Ctx* __restrict c) {
  trace_call(0x800DBDC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBDC8
  c->r[0]=c->lr; // 800DBDCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBDD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBDD4
  c->r[30]=c->r[3]|c->r[3]; // 800DBDD8
  c->r[31]=c->r[4]|c->r[4]; // 800DBDDC
  c->lr=0x800DBDE4u; f_8030D728(c); // 800DBDE0
  c->r[3]=c->r[31]|c->r[31]; // 800DBDE4
  c->r[4]=0u+0x00000000u; // 800DBDE8
  c->lr=0x800DBDF0u; f_8030BE30(c); // 800DBDEC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DBDF0
  c->r[3]=c->r[31]|c->r[31]; // 800DBDF4
  c->lr=0x800DBDFCu; f_8030BD1C(c); // 800DBDF8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DBDFC
  c->r[3]=c->r[31]|c->r[31]; // 800DBE00
  c->lr=0x800DBE08u; f_8030C0A0(c); // 800DBE04
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800DBE08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBE0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBE10
  c->lr=c->r[0]; // 800DBE14
  c->r[1]=c->r[1]+0x00000010u; // 800DBE18
  return; // 800DBE1C
}

// fn_800DBE20
void f_800DBE20(Ctx* __restrict c) {
  trace_call(0x800DBE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBE20
  c->r[0]=c->lr; // 800DBE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBE28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBE2C
  c->r[31]=c->r[4]|c->r[4]; // 800DBE30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DBE34
  c->r[30]=c->r[3]|c->r[3]; // 800DBE38
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBE3C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DBE40
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DBE44
  c->r[3]=c->r[4]+0x00000030u; // 800DBE48
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DBE4C
  c->r[4]=c->r[30]+0x00000030u; // 800DBE50
  c->lr=0x800DBE58u; f_8003AB48(c); // 800DBE54
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DBE58
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800DBE5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBE60
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DBE64
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBE68
  c->lr=c->r[0]; // 800DBE6C
  c->r[1]=c->r[1]+0x00000010u; // 800DBE70
  return; // 800DBE74
}

// fn_800DBE78
void f_800DBE78(Ctx* __restrict c) {
  trace_call(0x800DBE78u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DBE78
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DBE7C
  c->ctr=c->r[12]; // 800DBE80
  if (true) { dispatch(c,c->ctr); return; } // 800DBE84
}

// fn_800DBE88
void f_800DBE88(Ctx* __restrict c) {
  trace_call(0x800DBE88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBE88
  c->r[0]=c->lr; // 800DBE8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBE90
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBE94
  c->r[29]=c->r[3]|c->r[3]; // 800DBE98
  c->r[30]=c->r[4]|c->r[4]; // 800DBE9C
  c->r[31]=c->r[5]|c->r[5]; // 800DBEA0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800DBEA4
  cmps(c,0,(int32_t)c->r[0],7); // 800DBEA8
  if (!crb(c,0)) { goto L_800DBEBC; } // 800DBEAC
  c->r[4]=c->r[31]|c->r[31]; // 800DBEB0
  c->r[3]=c->r[3]+0x00000030u; // 800DBEB4
  c->lr=0x800DBEBCu; f_8003A994(c); // 800DBEB8
L_800DBEBC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800DBEBC
  c->r[3]=c->r[29]|c->r[29]; // 800DBEC0
  c->r[4]=c->r[30]|c->r[30]; // 800DBEC4
  c->r[5]=c->r[31]|c->r[31]; // 800DBEC8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800DBECC
  c->ctr=c->r[12]; // 800DBED0
  if (true) { c->lr=0x800DBED8u; dispatch(c,c->ctr); } // 800DBED4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBEDC
  c->lr=c->r[0]; // 800DBEE0
  c->r[1]=c->r[1]+0x00000020u; // 800DBEE4
  return; // 800DBEE8
}

// fn_800DBEEC
void f_800DBEEC(Ctx* __restrict c) {
  trace_call(0x800DBEECu);
  c->r[3]=0u+0x80410000u; // 800DBEEC
  c->r[3]=c->r[3]+0xFFFFD91Fu; // 800DBEF0
  return; // 800DBEF4
}

// fn_800DBEF8
void f_800DBEF8(Ctx* __restrict c) {
  trace_call(0x800DBEF8u);
  c->r[3]=0u+0x00000040u; // 800DBEF8
  return; // 800DBEFC
}

// fn_800DBF00
void f_800DBF00(Ctx* __restrict c) {
  trace_call(0x800DBF00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBF00
  c->r[0]=c->lr; // 800DBF04
  c->r[3]=0u+0x00000040u; // 800DBF08
  c->r[4]=c->r[13]+0xFFFFB5F1u; // 800DBF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBF10
  c->r[5]=0u+0x00000000u; // 800DBF14
  c->r[6]=0u+0x00001001u; // 800DBF18
  c->lr=0x800DBF20u; f_80244D20(c); // 800DBF1C
  cmps(c,0,(int32_t)c->r[3],0); // 800DBF20
  if (crb(c,2)) { goto L_800DBF2C; } // 800DBF24
  c->lr=0x800DBF2Cu; f_800DBD78(c); // 800DBF28
L_800DBF2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBF2C
  c->lr=c->r[0]; // 800DBF30
  c->r[1]=c->r[1]+0x00000010u; // 800DBF34
  return; // 800DBF38
}

// fn_800DBF3C
void f_800DBF3C(Ctx* __restrict c) {
  trace_call(0x800DBF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBF3C
  c->r[0]=c->lr; // 800DBF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBF44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBF48
  c->r[31]=c->r[3]|c->r[3]; // 800DBF4C
  c->lr=0x800DBF54u; f_800D7120(c); // 800DBF50
  c->r[5]=0u+0x80410000u; // 800DBF54
  c->r[3]=0u+0xBC190000u; // 800DBF58
  c->r[4]=0u+0x00000000u; // 800DBF5C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800DBF60
  c->r[0]=c->r[3]+0x000021D3u; // 800DBF64
  c->r[5]=c->r[5]+0x000076E4u; // 800DBF68
  W32(c->r[31]+0x00000008u,c->r[5]); // 800DBF6C
  c->r[3]=c->r[31]|c->r[31]; // 800DBF70
  W32(c->r[31]+0x00000044u,c->r[4]); // 800DBF74
  W32(c->r[31]+0x00000004u,c->r[0]); // 800DBF78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBF7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBF80
  c->lr=c->r[0]; // 800DBF84
  c->r[1]=c->r[1]+0x00000010u; // 800DBF88
  return; // 800DBF8C
}

// fn_800DBF90
void f_800DBF90(Ctx* __restrict c) {
  trace_call(0x800DBF90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBF90
  c->r[0]=c->lr; // 800DBF94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBF98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBF9C
  c->r[30]=c->r[3]|c->r[3]; // 800DBFA0
  c->r[31]=c->r[4]|c->r[4]; // 800DBFA4
  c->lr=0x800DBFACu; f_8030D728(c); // 800DBFA8
  c->r[3]=c->r[31]|c->r[31]; // 800DBFAC
  c->r[4]=0u+0x00000000u; // 800DBFB0
  c->lr=0x800DBFB8u; f_8030BE30(c); // 800DBFB4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800DBFB8
  c->r[3]=c->r[31]|c->r[31]; // 800DBFBC
  c->lr=0x800DBFC4u; f_8030BD1C(c); // 800DBFC0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800DBFC4
  c->r[3]=c->r[31]|c->r[31]; // 800DBFC8
  c->r[4]=0u+0x00000000u; // 800DBFCC
  c->lr=0x800DBFD4u; f_8030BE30(c); // 800DBFD0
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DBFD4
  c->r[3]=c->r[31]|c->r[31]; // 800DBFD8
  c->lr=0x800DBFE0u; f_8030BD1C(c); // 800DBFDC
  W32(c->r[30]+0x00000040u,c->r[3]); // 800DBFE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBFE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBFE8
  c->lr=c->r[0]; // 800DBFEC
  c->r[1]=c->r[1]+0x00000010u; // 800DBFF0
  return; // 800DBFF4
}

// fn_800DBFF8
void f_800DBFF8(Ctx* __restrict c) {
  trace_call(0x800DBFF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBFF8
  c->r[0]=c->lr; // 800DBFFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC000
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DC004
  c->r[30]=c->r[3]|c->r[3]; // 800DC008
  c->r[31]=c->r[4]|c->r[4]; // 800DC00C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC010
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DC014
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DC018
  c->r[3]=c->r[4]+0x00000030u; // 800DC01C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DC020
  c->r[4]=c->r[30]+0x00000030u; // 800DC024
  c->lr=0x800DC02Cu; f_8003AB48(c); // 800DC028
  c->r[3]=c->r[31]+0x0000003Cu; // 800DC02C
  c->r[4]=c->r[30]+0x0000003Cu; // 800DC030
  c->lr=0x800DC038u; f_8003AB48(c); // 800DC034
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DC038
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC03C
  c->lr=c->r[0]; // 800DC040
  c->r[1]=c->r[1]+0x00000010u; // 800DC044
  return; // 800DC048
}

// fn_800DC04C
void f_800DC04C(Ctx* __restrict c) {
  trace_call(0x800DC04Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800DC04C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DC050
  c->ctr=c->r[12]; // 800DC054
  if (true) { dispatch(c,c->ctr); return; } // 800DC058
}

