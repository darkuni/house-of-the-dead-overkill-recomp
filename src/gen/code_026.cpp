#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800F6B20
void f_800F6B20(Ctx* __restrict c) {
  trace_call(0x800F6B20u);
  c->r[3]=0u+0x00000048u; // 800F6B20
  return; // 800F6B24
}

// fn_800F6B28
void f_800F6B28(Ctx* __restrict c) {
  trace_call(0x800F6B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6B28
  c->r[0]=c->lr; // 800F6B2C
  c->r[3]=0u+0x00000048u; // 800F6B30
  c->r[4]=c->r[13]+0xFFFFBB3Eu; // 800F6B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6B38
  c->r[5]=0u+0x00000000u; // 800F6B3C
  c->r[6]=0u+0x00001001u; // 800F6B40
  c->lr=0x800F6B48u; f_80244D20(c); // 800F6B44
  cmps(c,0,(int32_t)c->r[3],0); // 800F6B48
  if (crb(c,2)) { goto L_800F6B54; } // 800F6B4C
  c->lr=0x800F6B54u; f_800F6868(c); // 800F6B50
L_800F6B54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6B54
  c->lr=c->r[0]; // 800F6B58
  c->r[1]=c->r[1]+0x00000010u; // 800F6B5C
  return; // 800F6B60
}

// fn_800F6B64
void f_800F6B64(Ctx* __restrict c) {
  trace_call(0x800F6B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6B64
  c->r[0]=c->lr; // 800F6B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6B70
  c->r[31]=c->r[3]|c->r[3]; // 800F6B74
  c->lr=0x800F6B7Cu; f_800D7120(c); // 800F6B78
  c->r[5]=0u+0x80410000u; // 800F6B7C
  c->r[3]=0u+0xB9760000u; // 800F6B80
  c->r[0]=c->r[3]+0xFFFFF9C8u; // 800F6B84
  c->r[4]=0u+0x00000000u; // 800F6B88
  c->r[5]=c->r[5]+0x00004214u; // 800F6B8C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F6B90
  c->r[3]=c->r[31]|c->r[31]; // 800F6B94
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F6B98
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F6B9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6BA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6BA4
  c->lr=c->r[0]; // 800F6BA8
  c->r[1]=c->r[1]+0x00000010u; // 800F6BAC
  return; // 800F6BB0
}

// fn_800F6BB4
void f_800F6BB4(Ctx* __restrict c) {
  trace_call(0x800F6BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6BB4
  c->r[0]=c->lr; // 800F6BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6BBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F6BC0
  c->r[30]=c->r[3]|c->r[3]; // 800F6BC4
  c->r[31]=c->r[4]|c->r[4]; // 800F6BC8
  c->lr=0x800F6BD0u; f_8030D728(c); // 800F6BCC
  c->r[3]=c->r[31]|c->r[31]; // 800F6BD0
  c->r[4]=0u+0x00000000u; // 800F6BD4
  c->lr=0x800F6BDCu; f_8030BE30(c); // 800F6BD8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F6BDC
  c->r[3]=c->r[31]|c->r[31]; // 800F6BE0
  c->lr=0x800F6BE8u; f_8030BD1C(c); // 800F6BE4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F6BE8
  c->r[3]=c->r[31]|c->r[31]; // 800F6BEC
  c->r[4]=0u+0x00000000u; // 800F6BF0
  c->lr=0x800F6BF8u; f_8030BE30(c); // 800F6BF4
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F6BF8
  c->r[3]=c->r[31]|c->r[31]; // 800F6BFC
  c->r[4]=0u+0x00000000u; // 800F6C00
  c->lr=0x800F6C08u; f_8030BE30(c); // 800F6C04
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F6C08
  c->r[3]=c->r[31]|c->r[31]; // 800F6C0C
  c->lr=0x800F6C14u; f_8030BD1C(c); // 800F6C10
  W8(c->r[30]+0x00000044u,c->r[3]); // 800F6C14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F6C18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6C1C
  c->lr=c->r[0]; // 800F6C20
  c->r[1]=c->r[1]+0x00000010u; // 800F6C24
  return; // 800F6C28
}

// fn_800F6C2C
void f_800F6C2C(Ctx* __restrict c) {
  trace_call(0x800F6C2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6C2C
  c->r[0]=c->lr; // 800F6C30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6C34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F6C38
  c->r[30]=c->r[3]|c->r[3]; // 800F6C3C
  c->r[31]=c->r[4]|c->r[4]; // 800F6C40
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6C44
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6C48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6C4C
  c->r[3]=c->r[4]+0x00000030u; // 800F6C50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6C54
  c->r[4]=c->r[30]+0x00000030u; // 800F6C58
  c->lr=0x800F6C60u; f_8003AB48(c); // 800F6C5C
  c->r[3]=c->r[31]+0x0000003Cu; // 800F6C60
  c->r[4]=c->r[30]+0x0000003Cu; // 800F6C64
  c->lr=0x800F6C6Cu; f_8003F6E4(c); // 800F6C68
  c->r[0]=R8(c->r[30]+0x00000044u); // 800F6C6C
  W8(c->r[31]+0x00000044u,c->r[0]); // 800F6C70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F6C74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6C78
  c->lr=c->r[0]; // 800F6C7C
  c->r[1]=c->r[1]+0x00000010u; // 800F6C80
  return; // 800F6C84
}

// fn_800F6C88
void f_800F6C88(Ctx* __restrict c) {
  trace_call(0x800F6C88u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F6C88
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F6C8C
  c->ctr=c->r[12]; // 800F6C90
  if (true) { dispatch(c,c->ctr); return; } // 800F6C94
}

// fn_800F6C98
void f_800F6C98(Ctx* __restrict c) {
  trace_call(0x800F6C98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6C98
  c->r[0]=c->lr; // 800F6C9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F6CA0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F6CA4
  c->r[29]=c->r[3]|c->r[3]; // 800F6CA8
  c->r[30]=c->r[4]|c->r[4]; // 800F6CAC
  c->r[31]=c->r[5]|c->r[5]; // 800F6CB0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F6CB4
  cmps(c,0,(int32_t)c->r[0],7); // 800F6CB8
  if (!crb(c,0)) { goto L_800F6CCC; } // 800F6CBC
  c->r[4]=c->r[31]|c->r[31]; // 800F6CC0
  c->r[3]=c->r[3]+0x00000030u; // 800F6CC4
  c->lr=0x800F6CCCu; f_8003A994(c); // 800F6CC8
L_800F6CCC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F6CCC
  c->r[3]=c->r[29]|c->r[29]; // 800F6CD0
  c->r[4]=c->r[30]|c->r[30]; // 800F6CD4
  c->r[5]=c->r[31]|c->r[31]; // 800F6CD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F6CDC
  c->ctr=c->r[12]; // 800F6CE0
  if (true) { c->lr=0x800F6CE8u; dispatch(c,c->ctr); } // 800F6CE4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F6CE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6CEC
  c->lr=c->r[0]; // 800F6CF0
  c->r[1]=c->r[1]+0x00000020u; // 800F6CF4
  return; // 800F6CF8
}

// fn_800F6CFC
void f_800F6CFC(Ctx* __restrict c) {
  trace_call(0x800F6CFCu);
  c->r[3]=0u+0x80410000u; // 800F6CFC
  c->r[3]=c->r[3]+0xFFFFED3Eu; // 800F6D00
  return; // 800F6D04
}

// fn_800F6D08
void f_800F6D08(Ctx* __restrict c) {
  trace_call(0x800F6D08u);
  c->r[3]=0u+0x00000048u; // 800F6D08
  return; // 800F6D0C
}

// fn_800F6D10
void f_800F6D10(Ctx* __restrict c) {
  trace_call(0x800F6D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6D10
  c->r[0]=c->lr; // 800F6D14
  c->r[3]=0u+0x00000048u; // 800F6D18
  c->r[4]=c->r[13]+0xFFFFBB43u; // 800F6D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6D20
  c->r[5]=0u+0x00000000u; // 800F6D24
  c->r[6]=0u+0x00001001u; // 800F6D28
  c->lr=0x800F6D30u; f_80244D20(c); // 800F6D2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6D30
  if (crb(c,2)) { goto L_800F6D3C; } // 800F6D34
  c->lr=0x800F6D3Cu; f_800F6B64(c); // 800F6D38
L_800F6D3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6D3C
  c->lr=c->r[0]; // 800F6D40
  c->r[1]=c->r[1]+0x00000010u; // 800F6D44
  return; // 800F6D48
}

// fn_800F6D4C
void f_800F6D4C(Ctx* __restrict c) {
  trace_call(0x800F6D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6D4C
  c->r[0]=c->lr; // 800F6D50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6D54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6D58
  c->r[31]=c->r[3]|c->r[3]; // 800F6D5C
  c->lr=0x800F6D64u; f_800D7120(c); // 800F6D60
  c->r[5]=0u+0x80410000u; // 800F6D64
  c->r[3]=0u+0x40DA0000u; // 800F6D68
  c->r[0]=c->r[3]+0xFFFFEF76u; // 800F6D6C
  c->r[4]=0u+0x00000000u; // 800F6D70
  c->r[5]=c->r[5]+0x000041E0u; // 800F6D74
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F6D78
  c->r[3]=c->r[31]|c->r[31]; // 800F6D7C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F6D80
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F6D84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6D88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6D8C
  c->lr=c->r[0]; // 800F6D90
  c->r[1]=c->r[1]+0x00000010u; // 800F6D94
  return; // 800F6D98
}

// fn_800F6D9C
void f_800F6D9C(Ctx* __restrict c) {
  trace_call(0x800F6D9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6D9C
  c->r[0]=c->lr; // 800F6DA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F6DA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F6DA8
  c->r[29]=c->r[3]|c->r[3]; // 800F6DAC
  c->r[30]=c->r[4]|c->r[4]; // 800F6DB0
  c->lr=0x800F6DB8u; f_8030D728(c); // 800F6DB4
  c->r[3]=c->r[30]|c->r[30]; // 800F6DB8
  c->r[4]=0u+0x00000000u; // 800F6DBC
  c->lr=0x800F6DC4u; f_8030BE30(c); // 800F6DC0
  W32(c->r[29]+0x00000030u,c->r[3]); // 800F6DC4
  c->r[3]=c->r[30]|c->r[30]; // 800F6DC8
  c->lr=0x800F6DD0u; f_8030BD1C(c); // 800F6DCC
  W32(c->r[29]+0x00000034u,c->r[3]); // 800F6DD0
  c->r[3]=c->r[30]|c->r[30]; // 800F6DD4
  c->r[4]=0u+0x00000000u; // 800F6DD8
  c->lr=0x800F6DE0u; f_8030BE30(c); // 800F6DDC
  W32(c->r[29]+0x0000003Cu,c->r[3]); // 800F6DE0
  c->r[31]=0u+0x00000000u; // 800F6DE4
  c->r[3]=c->r[30]|c->r[30]; // 800F6DE8
  W32(c->r[29]+0x00000040u,c->r[31]); // 800F6DEC
  c->lr=0x800F6DF4u; f_8030BD1C(c); // 800F6DF0
  W32(c->r[29]+0x00000044u,c->r[3]); // 800F6DF4
  c->r[3]=c->r[30]|c->r[30]; // 800F6DF8
  c->r[4]=0u+0x00000000u; // 800F6DFC
  c->lr=0x800F6E04u; f_8030BE30(c); // 800F6E00
  W32(c->r[29]+0x00000048u,c->r[3]); // 800F6E04
  c->r[3]=c->r[30]|c->r[30]; // 800F6E08
  W32(c->r[29]+0x0000004Cu,c->r[31]); // 800F6E0C
  c->lr=0x800F6E14u; f_8030BD1C(c); // 800F6E10
  W32(c->r[29]+0x00000050u,c->r[3]); // 800F6E14
  c->r[3]=c->r[30]|c->r[30]; // 800F6E18
  c->r[4]=0u+0x00000000u; // 800F6E1C
  c->lr=0x800F6E24u; f_8030BE30(c); // 800F6E20
  W32(c->r[29]+0x00000054u,c->r[3]); // 800F6E24
  c->r[3]=c->r[30]|c->r[30]; // 800F6E28
  c->r[4]=0u+0x00000000u; // 800F6E2C
  c->lr=0x800F6E34u; f_8030BE30(c); // 800F6E30
  W32(c->r[29]+0x00000058u,c->r[3]); // 800F6E34
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F6E38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6E3C
  c->lr=c->r[0]; // 800F6E40
  c->r[1]=c->r[1]+0x00000020u; // 800F6E44
  return; // 800F6E48
}

// fn_800F6E4C
void f_800F6E4C(Ctx* __restrict c) {
  trace_call(0x800F6E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6E4C
  c->r[0]=c->lr; // 800F6E50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6E54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F6E58
  c->r[30]=c->r[3]|c->r[3]; // 800F6E5C
  c->r[31]=c->r[4]|c->r[4]; // 800F6E60
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F6E64
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F6E68
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F6E6C
  c->r[3]=c->r[4]+0x00000030u; // 800F6E70
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F6E74
  c->r[4]=c->r[30]+0x00000030u; // 800F6E78
  c->lr=0x800F6E80u; f_8003AB48(c); // 800F6E7C
  c->r[3]=c->r[31]+0x0000003Cu; // 800F6E80
  c->r[4]=c->r[30]+0x0000003Cu; // 800F6E84
  c->lr=0x800F6E8Cu; f_8003BDD0(c); // 800F6E88
  c->r[3]=c->r[31]+0x00000048u; // 800F6E8C
  c->r[4]=c->r[30]+0x00000048u; // 800F6E90
  c->lr=0x800F6E98u; f_8003BDD0(c); // 800F6E94
  c->r[3]=c->r[31]+0x00000054u; // 800F6E98
  c->r[4]=c->r[30]+0x00000054u; // 800F6E9C
  c->lr=0x800F6EA4u; f_8003F6E4(c); // 800F6EA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F6EA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6EA8
  c->lr=c->r[0]; // 800F6EAC
  c->r[1]=c->r[1]+0x00000010u; // 800F6EB0
  return; // 800F6EB4
}

// fn_800F6EB8
void f_800F6EB8(Ctx* __restrict c) {
  trace_call(0x800F6EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6EB8
  c->r[0]=c->lr; // 800F6EBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F6EC0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F6EC4
  c->r[27]=c->r[3]|c->r[3]; // 800F6EC8
  c->r[28]=c->r[4]|c->r[4]; // 800F6ECC
  c->r[29]=c->r[5]|c->r[5]; // 800F6ED0
  c->r[30]=c->r[6]|c->r[6]; // 800F6ED4
  c->r[7]=R32(c->r[3]+0x0000003Cu); // 800F6ED8
  cmps(c,0,(int32_t)c->r[7],0); // 800F6EDC
  if (crb(c,2)) { goto L_800F6F88; } // 800F6EE0
  c->r[0]=0u+0x00000001u; // 800F6EE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F6EE8
  c->r[4]=c->r[7]|c->r[7]; // 800F6EEC
  c->r[6]=c->r[28]|c->r[28]; // 800F6EF0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800F6EF4
  c->r[7]=c->r[29]|c->r[29]; // 800F6EF8
  c->r[9]=R32(c->r[27]+0x00000044u); // 800F6EFC
  c->r[8]=c->r[30]|c->r[30]; // 800F6F00
  c->r[5]=0u+0x00000001u; // 800F6F04
  c->r[10]=0u+0x00000001u; // 800F6F08
  c->lr=0x800F6F10u; f_80281A84(c); // 800F6F0C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6F10
  W32(c->r[27]+0x00000040u,c->r[3]); // 800F6F14
  if (crb(c,2)) { goto L_800F6F24; } // 800F6F18
  c->lr=0x800F6F20u; f_80295B6C(c); // 800F6F1C
  goto L_800F6F88; // 800F6F20
L_800F6F24:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 800F6F24
  c->r[4]=c->r[30]|c->r[30]; // 800F6F28
  c->r[5]=c->r[29]|c->r[29]; // 800F6F2C
  c->lr=0x800F6F34u; f_802C0F98(c); // 800F6F30
  c->r[31]=c->r[3]|c->r[3]; // 800F6F34
  c->r[3]=0u+0x00000044u; // 800F6F38
  c->r[4]=c->r[13]+0xFFFFBB48u; // 800F6F3C
  c->r[5]=0u+0x00000000u; // 800F6F40
  c->r[6]=0u+0x00001001u; // 800F6F44
  c->lr=0x800F6F4Cu; f_80244D20(c); // 800F6F48
  cmps(c,0,(int32_t)c->r[3],0); // 800F6F4C
  if (crb(c,2)) { goto L_800F6F64; } // 800F6F50
  c->r[5]=R32(c->r[27]+0x0000003Cu); // 800F6F54
  c->r[4]=c->r[31]|c->r[31]; // 800F6F58
  c->r[6]=0u+0x00000001u; // 800F6F5C
  c->lr=0x800F6F64u; f_8029316C(c); // 800F6F60
L_800F6F64:;
  W32(c->r[27]+0x00000040u,c->r[3]); // 800F6F64
  c->r[4]=c->r[28]|c->r[28]; // 800F6F68
  c->r[7]=R32(c->r[27]+0x00000044u); // 800F6F6C
  c->r[5]=c->r[29]|c->r[29]; // 800F6F70
  c->r[6]=c->r[30]|c->r[30]; // 800F6F74
  c->r[8]=0u+0x00000001u; // 800F6F78
  c->r[9]=0u+0x00000000u; // 800F6F7C
  c->lr=0x800F6F84u; f_8027FFF4(c); // 800F6F80
  W32(c->r[27]+0x00000040u,c->r[3]); // 800F6F84
L_800F6F88:;
  c->r[4]=R32(c->r[27]+0x00000048u); // 800F6F88
  cmps(c,0,(int32_t)c->r[4],0); // 800F6F8C
  if (crb(c,2)) { goto L_800F7034; } // 800F6F90
  c->r[0]=0u+0x00000001u; // 800F6F94
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F6F98
  c->r[6]=c->r[28]|c->r[28]; // 800F6F9C
  c->r[7]=c->r[29]|c->r[29]; // 800F6FA0
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 800F6FA4
  c->r[8]=c->r[30]|c->r[30]; // 800F6FA8
  c->r[9]=R32(c->r[27]+0x00000050u); // 800F6FAC
  c->r[5]=0u+0x00000001u; // 800F6FB0
  c->r[10]=0u+0x00000001u; // 800F6FB4
  c->lr=0x800F6FBCu; f_80281A84(c); // 800F6FB8
  cmps(c,0,(int32_t)c->r[3],0); // 800F6FBC
  W32(c->r[27]+0x0000004Cu,c->r[3]); // 800F6FC0
  if (crb(c,2)) { goto L_800F6FD0; } // 800F6FC4
  c->lr=0x800F6FCCu; f_80295B6C(c); // 800F6FC8
  goto L_800F7034; // 800F6FCC
L_800F6FD0:;
  c->r[3]=R32(c->r[27]+0x00000050u); // 800F6FD0
  c->r[4]=c->r[30]|c->r[30]; // 800F6FD4
  c->r[5]=c->r[29]|c->r[29]; // 800F6FD8
  c->lr=0x800F6FE0u; f_802C0F98(c); // 800F6FDC
  c->r[31]=c->r[3]|c->r[3]; // 800F6FE0
  c->r[3]=0u+0x00000044u; // 800F6FE4
  c->r[4]=c->r[13]+0xFFFFBB4Du; // 800F6FE8
  c->r[5]=0u+0x00000000u; // 800F6FEC
  c->r[6]=0u+0x00001001u; // 800F6FF0
  c->lr=0x800F6FF8u; f_80244D20(c); // 800F6FF4
  cmps(c,0,(int32_t)c->r[3],0); // 800F6FF8
  if (crb(c,2)) { goto L_800F7010; } // 800F6FFC
  c->r[5]=R32(c->r[27]+0x00000048u); // 800F7000
  c->r[4]=c->r[31]|c->r[31]; // 800F7004
  c->r[6]=0u+0x00000001u; // 800F7008
  c->lr=0x800F7010u; f_8029316C(c); // 800F700C
L_800F7010:;
  W32(c->r[27]+0x0000004Cu,c->r[3]); // 800F7010
  c->r[4]=c->r[28]|c->r[28]; // 800F7014
  c->r[7]=R32(c->r[27]+0x00000050u); // 800F7018
  c->r[5]=c->r[29]|c->r[29]; // 800F701C
  c->r[6]=c->r[30]|c->r[30]; // 800F7020
  c->r[8]=0u+0x00000001u; // 800F7024
  c->r[9]=0u+0x00000000u; // 800F7028
  c->lr=0x800F7030u; f_8027FFF4(c); // 800F702C
  W32(c->r[27]+0x0000004Cu,c->r[3]); // 800F7030
L_800F7034:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7034
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F7038
  c->lr=c->r[0]; // 800F703C
  c->r[1]=c->r[1]+0x00000030u; // 800F7040
  return; // 800F7044
}

// fn_800F7048
void f_800F7048(Ctx* __restrict c) {
  trace_call(0x800F7048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7048
  c->r[0]=c->lr; // 800F704C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7054
  c->r[31]=c->r[3]|c->r[3]; // 800F7058
  c->r[0]=R32(c->r[3]+0x00000040u); // 800F705C
  cmps(c,0,(int32_t)c->r[0],0); // 800F7060
  if (crb(c,2)) { goto L_800F7078; } // 800F7064
  c->r[3]=c->r[0]|c->r[0]; // 800F7068
  c->lr=0x800F7070u; f_80295B7C(c); // 800F706C
  c->r[0]=0u+0x00000000u; // 800F7070
  W32(c->r[31]+0x00000040u,c->r[0]); // 800F7074
L_800F7078:;
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800F7078
  cmps(c,0,(int32_t)c->r[3],0); // 800F707C
  if (crb(c,2)) { goto L_800F7090; } // 800F7080
  c->lr=0x800F7088u; f_80295B7C(c); // 800F7084
  c->r[0]=0u+0x00000000u; // 800F7088
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800F708C
L_800F7090:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7094
  c->lr=c->r[0]; // 800F7098
  c->r[1]=c->r[1]+0x00000010u; // 800F709C
  return; // 800F70A0
}

// fn_800F70A4
void f_800F70A4(Ctx* __restrict c) {
  trace_call(0x800F70A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F70A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F70A8
  c->ctr=c->r[12]; // 800F70AC
  if (true) { dispatch(c,c->ctr); return; } // 800F70B0
}

// fn_800F70B4
void f_800F70B4(Ctx* __restrict c) {
  trace_call(0x800F70B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F70B4
  c->r[0]=c->lr; // 800F70B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F70BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F70C0
  c->r[29]=c->r[3]|c->r[3]; // 800F70C4
  c->r[30]=c->r[4]|c->r[4]; // 800F70C8
  c->r[31]=c->r[5]|c->r[5]; // 800F70CC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F70D0
  cmps(c,0,(int32_t)c->r[0],7); // 800F70D4
  if (!crb(c,0)) { goto L_800F70E8; } // 800F70D8
  c->r[4]=c->r[31]|c->r[31]; // 800F70DC
  c->r[3]=c->r[3]+0x00000030u; // 800F70E0
  c->lr=0x800F70E8u; f_8003A994(c); // 800F70E4
L_800F70E8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F70E8
  c->r[3]=c->r[29]|c->r[29]; // 800F70EC
  c->r[4]=c->r[30]|c->r[30]; // 800F70F0
  c->r[5]=c->r[31]|c->r[31]; // 800F70F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F70F8
  c->ctr=c->r[12]; // 800F70FC
  if (true) { c->lr=0x800F7104u; dispatch(c,c->ctr); } // 800F7100
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7104
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7108
  c->lr=c->r[0]; // 800F710C
  c->r[1]=c->r[1]+0x00000020u; // 800F7110
  return; // 800F7114
}

// fn_800F7118
void f_800F7118(Ctx* __restrict c) {
  trace_call(0x800F7118u);
  c->r[3]=0u+0x80410000u; // 800F7118
  c->r[3]=c->r[3]+0xFFFFED4Fu; // 800F711C
  return; // 800F7120
}

// fn_800F7124
void f_800F7124(Ctx* __restrict c) {
  trace_call(0x800F7124u);
  c->r[3]=0u+0x0000005Cu; // 800F7124
  return; // 800F7128
}

// fn_800F712C
void f_800F712C(Ctx* __restrict c) {
  trace_call(0x800F712Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F712C
  c->r[0]=c->lr; // 800F7130
  c->r[3]=0u+0x0000005Cu; // 800F7134
  c->r[4]=c->r[13]+0xFFFFBB52u; // 800F7138
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F713C
  c->r[5]=0u+0x00000000u; // 800F7140
  c->r[6]=0u+0x00001001u; // 800F7144
  c->lr=0x800F714Cu; f_80244D20(c); // 800F7148
  cmps(c,0,(int32_t)c->r[3],0); // 800F714C
  if (crb(c,2)) { goto L_800F7158; } // 800F7150
  c->lr=0x800F7158u; f_800F6D4C(c); // 800F7154
L_800F7158:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7158
  c->lr=c->r[0]; // 800F715C
  c->r[1]=c->r[1]+0x00000010u; // 800F7160
  return; // 800F7164
}

// fn_800F7168
void f_800F7168(Ctx* __restrict c) {
  trace_call(0x800F7168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7168
  c->r[0]=c->lr; // 800F716C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7174
  c->r[31]=c->r[3]|c->r[3]; // 800F7178
  c->lr=0x800F7180u; f_800D7120(c); // 800F717C
  c->r[4]=0u+0x80410000u; // 800F7180
  c->r[3]=0u+0x00350000u; // 800F7184
  c->r[0]=c->r[3]+0x00004AB2u; // 800F7188
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F718C
  c->r[4]=c->r[4]+0x000041ACu; // 800F7190
  c->r[3]=c->r[31]|c->r[31]; // 800F7194
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F7198
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F719C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F71A0
  c->lr=c->r[0]; // 800F71A4
  c->r[1]=c->r[1]+0x00000010u; // 800F71A8
  return; // 800F71AC
}

// fn_800F71B0
void f_800F71B0(Ctx* __restrict c) {
  trace_call(0x800F71B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F71B0
  c->r[0]=c->lr; // 800F71B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F71B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F71BC
  c->r[30]=c->r[3]|c->r[3]; // 800F71C0
  c->r[31]=c->r[4]|c->r[4]; // 800F71C4
  c->lr=0x800F71CCu; f_8030D728(c); // 800F71C8
  c->r[3]=c->r[31]|c->r[31]; // 800F71CC
  c->r[4]=0u+0x00000000u; // 800F71D0
  c->lr=0x800F71D8u; f_8030BE30(c); // 800F71D4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F71D8
  c->r[3]=c->r[31]|c->r[31]; // 800F71DC
  c->lr=0x800F71E4u; f_8030BD1C(c); // 800F71E0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F71E4
  c->r[3]=c->r[31]|c->r[31]; // 800F71E8
  c->lr=0x800F71F0u; f_8030BD1C(c); // 800F71EC
  W32(c->r[30]+0x00000038u,c->r[3]); // 800F71F0
  c->r[3]=c->r[31]|c->r[31]; // 800F71F4
  c->lr=0x800F71FCu; f_8030BD1C(c); // 800F71F8
  c->r[4]=c->r[3]|c->r[3]; // 800F71FC
  c->r[3]=c->r[31]|c->r[31]; // 800F7200
  c->lr=0x800F7208u; f_8030C2D8(c); // 800F7204
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F7208
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F720C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7210
  c->lr=c->r[0]; // 800F7214
  c->r[1]=c->r[1]+0x00000010u; // 800F7218
  return; // 800F721C
}

// fn_800F7220
void f_800F7220(Ctx* __restrict c) {
  trace_call(0x800F7220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7220
  c->r[0]=c->lr; // 800F7224
  c->r[8]=R32(c->r[3]+0x00000000u); // 800F7228
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F722C
  c->r[7]=R32(c->r[3]+0x00000004u); // 800F7230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7234
  c->r[31]=c->r[4]|c->r[4]; // 800F7238
  c->r[4]=c->r[5]|c->r[5]; // 800F723C
  c->r[6]=R32(c->r[3]+0x00000030u); // 800F7240
  c->r[5]=R32(c->r[3]+0x00000034u); // 800F7244
  c->r[0]=R32(c->r[3]+0x00000038u); // 800F7248
  W32(c->r[31]+0x00000000u,c->r[8]); // 800F724C
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 800F7250
  W32(c->r[31]+0x00000004u,c->r[7]); // 800F7254
  W32(c->r[31]+0x00000030u,c->r[6]); // 800F7258
  W32(c->r[31]+0x00000034u,c->r[5]); // 800F725C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F7260
  c->lr=0x800F7268u; f_8030D5B4(c); // 800F7264
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 800F7268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F726C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7270
  c->lr=c->r[0]; // 800F7274
  c->r[1]=c->r[1]+0x00000010u; // 800F7278
  return; // 800F727C
}

// fn_800F7280
void f_800F7280(Ctx* __restrict c) {
  trace_call(0x800F7280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7280
  c->r[0]=c->lr; // 800F7284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F728C
  c->r[31]=c->r[3]|c->r[3]; // 800F7290
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7294
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7298
  c->ctr=c->r[12]; // 800F729C
  if (true) { c->lr=0x800F72A4u; dispatch(c,c->ctr); } // 800F72A0
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800F72A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F72A8
  if (crb(c,2)) { goto L_800F72BC; } // 800F72AC
  c->lr=0x800F72B4u; f_800416A8(c); // 800F72B0
  c->r[0]=0u+0x00000000u; // 800F72B4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F72B8
L_800F72BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F72BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F72C0
  c->lr=c->r[0]; // 800F72C4
  c->r[1]=c->r[1]+0x00000010u; // 800F72C8
  return; // 800F72CC
}

// fn_800F72D0
void f_800F72D0(Ctx* __restrict c) {
  trace_call(0x800F72D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F72D0
  c->r[0]=c->lr; // 800F72D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F72D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F72DC
  c->r[29]=c->r[3]|c->r[3]; // 800F72E0
  c->r[30]=c->r[4]|c->r[4]; // 800F72E4
  c->r[31]=c->r[5]|c->r[5]; // 800F72E8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800F72EC
  cmps(c,0,(int32_t)c->r[0],0); // 800F72F0
  if (crb(c,2)) { goto L_800F7300; } // 800F72F4
  c->r[3]=c->r[0]|c->r[0]; // 800F72F8
  c->lr=0x800F7300u; f_8030D100(c); // 800F72FC
L_800F7300:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F7300
  c->r[3]=c->r[29]|c->r[29]; // 800F7304
  c->r[4]=c->r[30]|c->r[30]; // 800F7308
  c->r[5]=c->r[31]|c->r[31]; // 800F730C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7310
  c->ctr=c->r[12]; // 800F7314
  if (true) { c->lr=0x800F731Cu; dispatch(c,c->ctr); } // 800F7318
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F731C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7320
  c->lr=c->r[0]; // 800F7324
  c->r[1]=c->r[1]+0x00000020u; // 800F7328
  return; // 800F732C
}

// fn_800F7330
void f_800F7330(Ctx* __restrict c) {
  trace_call(0x800F7330u);
  c->r[3]=0u+0x80410000u; // 800F7330
  c->r[3]=c->r[3]+0xFFFFED5Du; // 800F7334
  return; // 800F7338
}

// fn_800F733C
void f_800F733C(Ctx* __restrict c) {
  trace_call(0x800F733Cu);
  c->r[3]=0u+0x00000040u; // 800F733C
  return; // 800F7340
}

// fn_800F7344
void f_800F7344(Ctx* __restrict c) {
  trace_call(0x800F7344u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7344
  c->r[0]=c->lr; // 800F7348
  c->r[3]=0u+0x00000040u; // 800F734C
  c->r[4]=c->r[13]+0xFFFFBB57u; // 800F7350
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7354
  c->r[5]=0u+0x00000000u; // 800F7358
  c->r[6]=0u+0x00001001u; // 800F735C
  c->lr=0x800F7364u; f_80244D20(c); // 800F7360
  cmps(c,0,(int32_t)c->r[3],0); // 800F7364
  if (crb(c,2)) { goto L_800F7370; } // 800F7368
  c->lr=0x800F7370u; f_800F7168(c); // 800F736C
L_800F7370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7370
  c->lr=c->r[0]; // 800F7374
  c->r[1]=c->r[1]+0x00000010u; // 800F7378
  return; // 800F737C
}

// fn_800F7380
void f_800F7380(Ctx* __restrict c) {
  trace_call(0x800F7380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7380
  c->r[0]=c->lr; // 800F7384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F738C
  c->r[31]=c->r[3]|c->r[3]; // 800F7390
  c->lr=0x800F7398u; f_800D7120(c); // 800F7394
  c->r[4]=0u+0x80410000u; // 800F7398
  c->r[3]=0u+0x1C830000u; // 800F739C
  c->r[0]=c->r[3]+0xFFFFFE6Bu; // 800F73A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F73A4
  c->r[4]=c->r[4]+0x00004178u; // 800F73A8
  c->r[3]=c->r[31]|c->r[31]; // 800F73AC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F73B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F73B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F73B8
  c->lr=c->r[0]; // 800F73BC
  c->r[1]=c->r[1]+0x00000010u; // 800F73C0
  return; // 800F73C4
}

// fn_800F73C8
void f_800F73C8(Ctx* __restrict c) {
  trace_call(0x800F73C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F73C8
  c->r[0]=c->lr; // 800F73CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F73D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F73D4
  c->r[30]=c->r[3]|c->r[3]; // 800F73D8
  c->r[31]=c->r[4]|c->r[4]; // 800F73DC
  c->lr=0x800F73E4u; f_8030D728(c); // 800F73E0
  c->r[3]=c->r[31]|c->r[31]; // 800F73E4
  c->lr=0x800F73ECu; f_8030BD1C(c); // 800F73E8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F73EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F73F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F73F4
  c->lr=c->r[0]; // 800F73F8
  c->r[1]=c->r[1]+0x00000010u; // 800F73FC
  return; // 800F7400
}

// fn_800F7404
void f_800F7404(Ctx* __restrict c) {
  trace_call(0x800F7404u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F7404
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F7408
  c->r[0]=R32(c->r[3]+0x00000030u); // 800F740C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F7410
  W32(c->r[4]+0x00000004u,c->r[5]); // 800F7414
  W32(c->r[4]+0x00000030u,c->r[0]); // 800F7418
  return; // 800F741C
}

// fn_800F7420
void f_800F7420(Ctx* __restrict c) {
  trace_call(0x800F7420u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7420
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7424
  c->ctr=c->r[12]; // 800F7428
  if (true) { dispatch(c,c->ctr); return; } // 800F742C
}

// fn_800F7430
void f_800F7430(Ctx* __restrict c) {
  trace_call(0x800F7430u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7430
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7434
  c->ctr=c->r[12]; // 800F7438
  if (true) { dispatch(c,c->ctr); return; } // 800F743C
}

// fn_800F7440
void f_800F7440(Ctx* __restrict c) {
  trace_call(0x800F7440u);
  c->r[3]=0u+0x80410000u; // 800F7440
  c->r[3]=c->r[3]+0xFFFFED71u; // 800F7444
  return; // 800F7448
}

// fn_800F744C
void f_800F744C(Ctx* __restrict c) {
  trace_call(0x800F744Cu);
  c->r[3]=0u+0x00000034u; // 800F744C
  return; // 800F7450
}

// fn_800F7454
void f_800F7454(Ctx* __restrict c) {
  trace_call(0x800F7454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7454
  c->r[0]=c->lr; // 800F7458
  c->r[3]=0u+0x00000034u; // 800F745C
  c->r[4]=c->r[13]+0xFFFFBB5Cu; // 800F7460
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7464
  c->r[5]=0u+0x00000000u; // 800F7468
  c->r[6]=0u+0x00001001u; // 800F746C
  c->lr=0x800F7474u; f_80244D20(c); // 800F7470
  cmps(c,0,(int32_t)c->r[3],0); // 800F7474
  if (crb(c,2)) { goto L_800F7480; } // 800F7478
  c->lr=0x800F7480u; f_800F7380(c); // 800F747C
L_800F7480:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7480
  c->lr=c->r[0]; // 800F7484
  c->r[1]=c->r[1]+0x00000010u; // 800F7488
  return; // 800F748C
}

// fn_800F7490
void f_800F7490(Ctx* __restrict c) {
  trace_call(0x800F7490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7490
  c->r[0]=c->lr; // 800F7494
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F749C
  c->r[31]=c->r[3]|c->r[3]; // 800F74A0
  c->lr=0x800F74A8u; f_800D7120(c); // 800F74A4
  c->r[4]=0u+0x80410000u; // 800F74A8
  c->r[3]=0u+0x87CC0000u; // 800F74AC
  c->r[0]=c->r[3]+0x0000467Du; // 800F74B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F74B4
  c->r[4]=c->r[4]+0x00004144u; // 800F74B8
  c->r[3]=c->r[31]|c->r[31]; // 800F74BC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F74C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F74C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F74C8
  c->lr=c->r[0]; // 800F74CC
  c->r[1]=c->r[1]+0x00000010u; // 800F74D0
  return; // 800F74D4
}

// fn_800F74D8
void f_800F74D8(Ctx* __restrict c) {
  trace_call(0x800F74D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F74D8
  c->r[0]=c->lr; // 800F74DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F74E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F74E4
  c->r[30]=c->r[3]|c->r[3]; // 800F74E8
  c->r[31]=c->r[4]|c->r[4]; // 800F74EC
  c->lr=0x800F74F4u; f_8030D728(c); // 800F74F0
  c->r[3]=c->r[31]|c->r[31]; // 800F74F4
  c->lr=0x800F74FCu; f_8030C0A0(c); // 800F74F8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800F74FC
  c->r[3]=c->r[31]|c->r[31]; // 800F7500
  c->lr=0x800F7508u; f_8030C0A0(c); // 800F7504
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800F7508
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F750C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7510
  c->lr=c->r[0]; // 800F7514
  c->r[1]=c->r[1]+0x00000010u; // 800F7518
  return; // 800F751C
}

// fn_800F7520
void f_800F7520(Ctx* __restrict c) {
  trace_call(0x800F7520u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800F7520
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F7524
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F7528
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F752C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800F7530
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7534
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 800F7538
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800F753C
  return; // 800F7540
}

// fn_800F7544
void f_800F7544(Ctx* __restrict c) {
  trace_call(0x800F7544u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7544
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7548
  c->ctr=c->r[12]; // 800F754C
  if (true) { dispatch(c,c->ctr); return; } // 800F7550
}

// fn_800F7554
void f_800F7554(Ctx* __restrict c) {
  trace_call(0x800F7554u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7554
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7558
  c->ctr=c->r[12]; // 800F755C
  if (true) { dispatch(c,c->ctr); return; } // 800F7560
}

// fn_800F7564
void f_800F7564(Ctx* __restrict c) {
  trace_call(0x800F7564u);
  c->r[3]=0u+0x80410000u; // 800F7564
  c->r[3]=c->r[3]+0xFFFFED89u; // 800F7568
  return; // 800F756C
}

// fn_800F7570
void f_800F7570(Ctx* __restrict c) {
  trace_call(0x800F7570u);
  c->r[3]=0u+0x00000038u; // 800F7570
  return; // 800F7574
}

// fn_800F7578
void f_800F7578(Ctx* __restrict c) {
  trace_call(0x800F7578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7578
  c->r[0]=c->lr; // 800F757C
  c->r[3]=0u+0x00000038u; // 800F7580
  c->r[4]=c->r[13]+0xFFFFBB61u; // 800F7584
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7588
  c->r[5]=0u+0x00000000u; // 800F758C
  c->r[6]=0u+0x00001001u; // 800F7590
  c->lr=0x800F7598u; f_80244D20(c); // 800F7594
  cmps(c,0,(int32_t)c->r[3],0); // 800F7598
  if (crb(c,2)) { goto L_800F75A4; } // 800F759C
  c->lr=0x800F75A4u; f_800F7490(c); // 800F75A0
L_800F75A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F75A4
  c->lr=c->r[0]; // 800F75A8
  c->r[1]=c->r[1]+0x00000010u; // 800F75AC
  return; // 800F75B0
}

// fn_800F75B4
void f_800F75B4(Ctx* __restrict c) {
  trace_call(0x800F75B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F75B4
  c->r[0]=c->lr; // 800F75B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F75BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F75C0
  c->r[31]=c->r[3]|c->r[3]; // 800F75C4
  c->lr=0x800F75CCu; f_800D7120(c); // 800F75C8
  c->r[4]=0u+0x80410000u; // 800F75CC
  c->r[3]=0u+0x87CC0000u; // 800F75D0
  c->r[0]=c->r[3]+0x0000467Du; // 800F75D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F75D8
  c->r[4]=c->r[4]+0x00004110u; // 800F75DC
  c->r[3]=c->r[31]|c->r[31]; // 800F75E0
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F75E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F75E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F75EC
  c->lr=c->r[0]; // 800F75F0
  c->r[1]=c->r[1]+0x00000010u; // 800F75F4
  return; // 800F75F8
}

// fn_800F75FC
void f_800F75FC(Ctx* __restrict c) {
  trace_call(0x800F75FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F75FC
  c->r[0]=c->lr; // 800F7600
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7604
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7608
  c->r[30]=c->r[3]|c->r[3]; // 800F760C
  c->r[31]=c->r[4]|c->r[4]; // 800F7610
  c->lr=0x800F7618u; f_8030D728(c); // 800F7614
  c->r[3]=c->r[31]|c->r[31]; // 800F7618
  c->lr=0x800F7620u; f_8030C0A0(c); // 800F761C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800F7620
  c->r[3]=c->r[31]|c->r[31]; // 800F7624
  c->lr=0x800F762Cu; f_8030C0A0(c); // 800F7628
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800F762C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7630
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7634
  c->lr=c->r[0]; // 800F7638
  c->r[1]=c->r[1]+0x00000010u; // 800F763C
  return; // 800F7640
}

// fn_800F7644
void f_800F7644(Ctx* __restrict c) {
  trace_call(0x800F7644u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800F7644
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F7648
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F764C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7650
  W32(c->r[4]+0x00000000u,c->r[5]); // 800F7654
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7658
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 800F765C
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800F7660
  return; // 800F7664
}

// fn_800F7668
void f_800F7668(Ctx* __restrict c) {
  trace_call(0x800F7668u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7668
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F766C
  c->ctr=c->r[12]; // 800F7670
  if (true) { dispatch(c,c->ctr); return; } // 800F7674
}

// fn_800F7678
void f_800F7678(Ctx* __restrict c) {
  trace_call(0x800F7678u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7678
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F767C
  c->ctr=c->r[12]; // 800F7680
  if (true) { dispatch(c,c->ctr); return; } // 800F7684
}

// fn_800F7688
void f_800F7688(Ctx* __restrict c) {
  trace_call(0x800F7688u);
  c->r[3]=0u+0x80410000u; // 800F7688
  c->r[3]=c->r[3]+0xFFFFEDA0u; // 800F768C
  return; // 800F7690
}

// fn_800F7694
void f_800F7694(Ctx* __restrict c) {
  trace_call(0x800F7694u);
  c->r[3]=0u+0x00000038u; // 800F7694
  return; // 800F7698
}

// fn_800F769C
void f_800F769C(Ctx* __restrict c) {
  trace_call(0x800F769Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F769C
  c->r[0]=c->lr; // 800F76A0
  c->r[3]=0u+0x00000038u; // 800F76A4
  c->r[4]=c->r[13]+0xFFFFBB66u; // 800F76A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F76AC
  c->r[5]=0u+0x00000000u; // 800F76B0
  c->r[6]=0u+0x00001001u; // 800F76B4
  c->lr=0x800F76BCu; f_80244D20(c); // 800F76B8
  cmps(c,0,(int32_t)c->r[3],0); // 800F76BC
  if (crb(c,2)) { goto L_800F76C8; } // 800F76C0
  c->lr=0x800F76C8u; f_800F75B4(c); // 800F76C4
L_800F76C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F76C8
  c->lr=c->r[0]; // 800F76CC
  c->r[1]=c->r[1]+0x00000010u; // 800F76D0
  return; // 800F76D4
}

// fn_800F76D8
void f_800F76D8(Ctx* __restrict c) {
  trace_call(0x800F76D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F76D8
  c->r[0]=c->lr; // 800F76DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F76E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F76E4
  c->r[31]=c->r[3]|c->r[3]; // 800F76E8
  c->lr=0x800F76F0u; f_800D7120(c); // 800F76EC
  c->r[4]=0u+0x80410000u; // 800F76F0
  c->r[3]=0u+0xF9EB0000u; // 800F76F4
  c->r[0]=c->r[3]+0xFFFF980Au; // 800F76F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F76FC
  c->r[4]=c->r[4]+0x000040DCu; // 800F7700
  c->r[3]=c->r[31]|c->r[31]; // 800F7704
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F7708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F770C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7710
  c->lr=c->r[0]; // 800F7714
  c->r[1]=c->r[1]+0x00000010u; // 800F7718
  return; // 800F771C
}

// fn_800F7720
void f_800F7720(Ctx* __restrict c) {
  trace_call(0x800F7720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7720
  c->r[0]=c->lr; // 800F7724
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7728
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F772C
  c->r[30]=c->r[3]|c->r[3]; // 800F7730
  c->r[31]=c->r[4]|c->r[4]; // 800F7734
  c->lr=0x800F773Cu; f_8030D728(c); // 800F7738
  c->r[3]=c->r[31]|c->r[31]; // 800F773C
  c->r[4]=0u+0x00000000u; // 800F7740
  c->lr=0x800F7748u; f_8030BE30(c); // 800F7744
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F7748
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F774C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7750
  c->lr=c->r[0]; // 800F7754
  c->r[1]=c->r[1]+0x00000010u; // 800F7758
  return; // 800F775C
}

// fn_800F7760
void f_800F7760(Ctx* __restrict c) {
  trace_call(0x800F7760u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F7760
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F7764
  c->r[0]=R32(c->r[3]+0x00000030u); // 800F7768
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F776C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800F7770
  W32(c->r[4]+0x00000030u,c->r[0]); // 800F7774
  return; // 800F7778
}

// fn_800F777C
void f_800F777C(Ctx* __restrict c) {
  trace_call(0x800F777Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F777C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7780
  c->ctr=c->r[12]; // 800F7784
  if (true) { dispatch(c,c->ctr); return; } // 800F7788
}

// fn_800F778C
void f_800F778C(Ctx* __restrict c) {
  trace_call(0x800F778Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F778C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7790
  c->ctr=c->r[12]; // 800F7794
  if (true) { dispatch(c,c->ctr); return; } // 800F7798
}

// fn_800F779C
void f_800F779C(Ctx* __restrict c) {
  trace_call(0x800F779Cu);
  c->r[3]=0u+0x80410000u; // 800F779C
  c->r[3]=c->r[3]+0xFFFFEDADu; // 800F77A0
  return; // 800F77A4
}

// fn_800F77A8
void f_800F77A8(Ctx* __restrict c) {
  trace_call(0x800F77A8u);
  c->r[3]=0u+0x00000034u; // 800F77A8
  return; // 800F77AC
}

// fn_800F77B0
void f_800F77B0(Ctx* __restrict c) {
  trace_call(0x800F77B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F77B0
  c->r[0]=c->lr; // 800F77B4
  c->r[3]=0u+0x00000034u; // 800F77B8
  c->r[4]=c->r[13]+0xFFFFBB6Bu; // 800F77BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F77C0
  c->r[5]=0u+0x00000000u; // 800F77C4
  c->r[6]=0u+0x00001001u; // 800F77C8
  c->lr=0x800F77D0u; f_80244D20(c); // 800F77CC
  cmps(c,0,(int32_t)c->r[3],0); // 800F77D0
  if (crb(c,2)) { goto L_800F77DC; } // 800F77D4
  c->lr=0x800F77DCu; f_800F76D8(c); // 800F77D8
L_800F77DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F77DC
  c->lr=c->r[0]; // 800F77E0
  c->r[1]=c->r[1]+0x00000010u; // 800F77E4
  return; // 800F77E8
}

// fn_800F77EC
void f_800F77EC(Ctx* __restrict c) {
  trace_call(0x800F77ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F77EC
  c->r[0]=c->lr; // 800F77F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F77F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F77F8
  c->r[31]=c->r[3]|c->r[3]; // 800F77FC
  c->lr=0x800F7804u; f_800D7120(c); // 800F7800
  c->r[5]=0u+0x80410000u; // 800F7804
  c->r[3]=0u+0x59710000u; // 800F7808
  c->r[0]=c->r[3]+0x000047B2u; // 800F780C
  c->r[4]=0u+0x00000000u; // 800F7810
  c->r[5]=c->r[5]+0x000040A8u; // 800F7814
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F7818
  c->r[3]=c->r[31]|c->r[31]; // 800F781C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F7820
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F7824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7828
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F782C
  c->lr=c->r[0]; // 800F7830
  c->r[1]=c->r[1]+0x00000010u; // 800F7834
  return; // 800F7838
}

// fn_800F783C
void f_800F783C(Ctx* __restrict c) {
  trace_call(0x800F783Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F783C
  c->r[0]=c->lr; // 800F7840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7844
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7848
  c->r[30]=c->r[3]|c->r[3]; // 800F784C
  c->r[31]=c->r[4]|c->r[4]; // 800F7850
  c->lr=0x800F7858u; f_8030D728(c); // 800F7854
  c->r[3]=c->r[31]|c->r[31]; // 800F7858
  c->r[4]=0u+0x00000000u; // 800F785C
  c->lr=0x800F7864u; f_8030BE30(c); // 800F7860
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F7864
  c->r[3]=c->r[31]|c->r[31]; // 800F7868
  c->lr=0x800F7870u; f_8030BD1C(c); // 800F786C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F7870
  c->r[3]=c->r[31]|c->r[31]; // 800F7874
  c->lr=0x800F787Cu; f_8030BD1C(c); // 800F7878
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F787C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7884
  c->lr=c->r[0]; // 800F7888
  c->r[1]=c->r[1]+0x00000010u; // 800F788C
  return; // 800F7890
}

// fn_800F7894
void f_800F7894(Ctx* __restrict c) {
  trace_call(0x800F7894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7894
  c->r[0]=c->lr; // 800F7898
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F789C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F78A0
  c->r[30]=c->r[3]|c->r[3]; // 800F78A4
  c->r[31]=c->r[4]|c->r[4]; // 800F78A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F78AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F78B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F78B4
  c->r[3]=c->r[4]+0x00000030u; // 800F78B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F78BC
  c->r[4]=c->r[30]+0x00000030u; // 800F78C0
  c->lr=0x800F78C8u; f_8003AB48(c); // 800F78C4
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F78C8
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F78CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F78D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F78D4
  c->lr=c->r[0]; // 800F78D8
  c->r[1]=c->r[1]+0x00000010u; // 800F78DC
  return; // 800F78E0
}

// fn_800F78E4
void f_800F78E4(Ctx* __restrict c) {
  trace_call(0x800F78E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F78E4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F78E8
  c->ctr=c->r[12]; // 800F78EC
  if (true) { dispatch(c,c->ctr); return; } // 800F78F0
}

// fn_800F78F4
void f_800F78F4(Ctx* __restrict c) {
  trace_call(0x800F78F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F78F4
  c->r[0]=c->lr; // 800F78F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F78FC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7900
  c->r[29]=c->r[3]|c->r[3]; // 800F7904
  c->r[30]=c->r[4]|c->r[4]; // 800F7908
  c->r[31]=c->r[5]|c->r[5]; // 800F790C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F7910
  cmps(c,0,(int32_t)c->r[0],7); // 800F7914
  if (!crb(c,0)) { goto L_800F7928; } // 800F7918
  c->r[4]=c->r[31]|c->r[31]; // 800F791C
  c->r[3]=c->r[3]+0x00000030u; // 800F7920
  c->lr=0x800F7928u; f_8003A994(c); // 800F7924
L_800F7928:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F7928
  c->r[3]=c->r[29]|c->r[29]; // 800F792C
  c->r[4]=c->r[30]|c->r[30]; // 800F7930
  c->r[5]=c->r[31]|c->r[31]; // 800F7934
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7938
  c->ctr=c->r[12]; // 800F793C
  if (true) { c->lr=0x800F7944u; dispatch(c,c->ctr); } // 800F7940
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7944
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7948
  c->lr=c->r[0]; // 800F794C
  c->r[1]=c->r[1]+0x00000020u; // 800F7950
  return; // 800F7954
}

// fn_800F7958
void f_800F7958(Ctx* __restrict c) {
  trace_call(0x800F7958u);
  c->r[3]=0u+0x80410000u; // 800F7958
  c->r[3]=c->r[3]+0xFFFFEDC4u; // 800F795C
  return; // 800F7960
}

// fn_800F7964
void f_800F7964(Ctx* __restrict c) {
  trace_call(0x800F7964u);
  c->r[3]=0u+0x00000040u; // 800F7964
  return; // 800F7968
}

// fn_800F796C
void f_800F796C(Ctx* __restrict c) {
  trace_call(0x800F796Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F796C
  c->r[0]=c->lr; // 800F7970
  c->r[3]=0u+0x00000040u; // 800F7974
  c->r[4]=c->r[13]+0xFFFFBB70u; // 800F7978
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F797C
  c->r[5]=0u+0x00000000u; // 800F7980
  c->r[6]=0u+0x00001001u; // 800F7984
  c->lr=0x800F798Cu; f_80244D20(c); // 800F7988
  cmps(c,0,(int32_t)c->r[3],0); // 800F798C
  if (crb(c,2)) { goto L_800F7998; } // 800F7990
  c->lr=0x800F7998u; f_800F77EC(c); // 800F7994
L_800F7998:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7998
  c->lr=c->r[0]; // 800F799C
  c->r[1]=c->r[1]+0x00000010u; // 800F79A0
  return; // 800F79A4
}

// fn_800F79A8
void f_800F79A8(Ctx* __restrict c) {
  trace_call(0x800F79A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F79A8
  c->r[0]=c->lr; // 800F79AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F79B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F79B4
  c->r[31]=c->r[3]|c->r[3]; // 800F79B8
  c->lr=0x800F79C0u; f_800D7120(c); // 800F79BC
  c->r[5]=0u+0x80410000u; // 800F79C0
  c->r[3]=0u+0x59710000u; // 800F79C4
  c->r[0]=c->r[3]+0x000047B2u; // 800F79C8
  c->r[4]=0u+0x00000000u; // 800F79CC
  c->r[5]=c->r[5]+0x00004074u; // 800F79D0
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F79D4
  c->r[3]=c->r[31]|c->r[31]; // 800F79D8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F79DC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F79E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F79E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F79E8
  c->lr=c->r[0]; // 800F79EC
  c->r[1]=c->r[1]+0x00000010u; // 800F79F0
  return; // 800F79F4
}

// fn_800F79F8
void f_800F79F8(Ctx* __restrict c) {
  trace_call(0x800F79F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F79F8
  c->r[0]=c->lr; // 800F79FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7A00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7A04
  c->r[30]=c->r[3]|c->r[3]; // 800F7A08
  c->r[31]=c->r[4]|c->r[4]; // 800F7A0C
  c->lr=0x800F7A14u; f_8030D728(c); // 800F7A10
  c->r[3]=c->r[31]|c->r[31]; // 800F7A14
  c->r[4]=0u+0x00000000u; // 800F7A18
  c->lr=0x800F7A20u; f_8030BE30(c); // 800F7A1C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F7A20
  c->r[3]=c->r[31]|c->r[31]; // 800F7A24
  c->lr=0x800F7A2Cu; f_8030BD1C(c); // 800F7A28
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F7A2C
  c->r[3]=c->r[31]|c->r[31]; // 800F7A30
  c->lr=0x800F7A38u; f_8030BD1C(c); // 800F7A34
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F7A38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7A40
  c->lr=c->r[0]; // 800F7A44
  c->r[1]=c->r[1]+0x00000010u; // 800F7A48
  return; // 800F7A4C
}

// fn_800F7A50
void f_800F7A50(Ctx* __restrict c) {
  trace_call(0x800F7A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7A50
  c->r[0]=c->lr; // 800F7A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7A58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7A5C
  c->r[30]=c->r[3]|c->r[3]; // 800F7A60
  c->r[31]=c->r[4]|c->r[4]; // 800F7A64
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F7A68
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7A6C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F7A70
  c->r[3]=c->r[4]+0x00000030u; // 800F7A74
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7A78
  c->r[4]=c->r[30]+0x00000030u; // 800F7A7C
  c->lr=0x800F7A84u; f_8003AB48(c); // 800F7A80
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F7A84
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F7A88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7A90
  c->lr=c->r[0]; // 800F7A94
  c->r[1]=c->r[1]+0x00000010u; // 800F7A98
  return; // 800F7A9C
}

// fn_800F7AA0
void f_800F7AA0(Ctx* __restrict c) {
  trace_call(0x800F7AA0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7AA0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7AA4
  c->ctr=c->r[12]; // 800F7AA8
  if (true) { dispatch(c,c->ctr); return; } // 800F7AAC
}

// fn_800F7AB0
void f_800F7AB0(Ctx* __restrict c) {
  trace_call(0x800F7AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7AB0
  c->r[0]=c->lr; // 800F7AB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7AB8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7ABC
  c->r[29]=c->r[3]|c->r[3]; // 800F7AC0
  c->r[30]=c->r[4]|c->r[4]; // 800F7AC4
  c->r[31]=c->r[5]|c->r[5]; // 800F7AC8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F7ACC
  cmps(c,0,(int32_t)c->r[0],7); // 800F7AD0
  if (!crb(c,0)) { goto L_800F7AE4; } // 800F7AD4
  c->r[4]=c->r[31]|c->r[31]; // 800F7AD8
  c->r[3]=c->r[3]+0x00000030u; // 800F7ADC
  c->lr=0x800F7AE4u; f_8003A994(c); // 800F7AE0
L_800F7AE4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F7AE4
  c->r[3]=c->r[29]|c->r[29]; // 800F7AE8
  c->r[4]=c->r[30]|c->r[30]; // 800F7AEC
  c->r[5]=c->r[31]|c->r[31]; // 800F7AF0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7AF4
  c->ctr=c->r[12]; // 800F7AF8
  if (true) { c->lr=0x800F7B00u; dispatch(c,c->ctr); } // 800F7AFC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7B00
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7B04
  c->lr=c->r[0]; // 800F7B08
  c->r[1]=c->r[1]+0x00000020u; // 800F7B0C
  return; // 800F7B10
}

// fn_800F7B14
void f_800F7B14(Ctx* __restrict c) {
  trace_call(0x800F7B14u);
  c->r[3]=0u+0x80410000u; // 800F7B14
  c->r[3]=c->r[3]+0xFFFFEDD6u; // 800F7B18
  return; // 800F7B1C
}

// fn_800F7B20
void f_800F7B20(Ctx* __restrict c) {
  trace_call(0x800F7B20u);
  c->r[3]=0u+0x00000040u; // 800F7B20
  return; // 800F7B24
}

// fn_800F7B28
void f_800F7B28(Ctx* __restrict c) {
  trace_call(0x800F7B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7B28
  c->r[0]=c->lr; // 800F7B2C
  c->r[3]=0u+0x00000040u; // 800F7B30
  c->r[4]=c->r[13]+0xFFFFBB75u; // 800F7B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7B38
  c->r[5]=0u+0x00000000u; // 800F7B3C
  c->r[6]=0u+0x00001001u; // 800F7B40
  c->lr=0x800F7B48u; f_80244D20(c); // 800F7B44
  cmps(c,0,(int32_t)c->r[3],0); // 800F7B48
  if (crb(c,2)) { goto L_800F7B54; } // 800F7B4C
  c->lr=0x800F7B54u; f_800F79A8(c); // 800F7B50
L_800F7B54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7B54
  c->lr=c->r[0]; // 800F7B58
  c->r[1]=c->r[1]+0x00000010u; // 800F7B5C
  return; // 800F7B60
}

// fn_800F7B64
void f_800F7B64(Ctx* __restrict c) {
  trace_call(0x800F7B64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7B64
  c->r[0]=c->lr; // 800F7B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7B70
  c->r[31]=c->r[3]|c->r[3]; // 800F7B74
  c->lr=0x800F7B7Cu; f_800D7120(c); // 800F7B78
  c->r[5]=0u+0x80410000u; // 800F7B7C
  c->r[3]=0u+0x59710000u; // 800F7B80
  c->r[0]=c->r[3]+0x000047B2u; // 800F7B84
  c->r[4]=0u+0x00000000u; // 800F7B88
  c->r[5]=c->r[5]+0x00004040u; // 800F7B8C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F7B90
  c->r[3]=c->r[31]|c->r[31]; // 800F7B94
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F7B98
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F7B9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7BA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7BA4
  c->lr=c->r[0]; // 800F7BA8
  c->r[1]=c->r[1]+0x00000010u; // 800F7BAC
  return; // 800F7BB0
}

// fn_800F7BB4
void f_800F7BB4(Ctx* __restrict c) {
  trace_call(0x800F7BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7BB4
  c->r[0]=c->lr; // 800F7BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7BBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7BC0
  c->r[30]=c->r[3]|c->r[3]; // 800F7BC4
  c->r[31]=c->r[4]|c->r[4]; // 800F7BC8
  c->lr=0x800F7BD0u; f_8030D728(c); // 800F7BCC
  c->r[3]=c->r[31]|c->r[31]; // 800F7BD0
  c->r[4]=0u+0x00000000u; // 800F7BD4
  c->lr=0x800F7BDCu; f_8030BE30(c); // 800F7BD8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F7BDC
  c->r[3]=c->r[31]|c->r[31]; // 800F7BE0
  c->lr=0x800F7BE8u; f_8030BD1C(c); // 800F7BE4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F7BE8
  c->r[3]=c->r[31]|c->r[31]; // 800F7BEC
  c->lr=0x800F7BF4u; f_8030BD1C(c); // 800F7BF0
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F7BF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7BFC
  c->lr=c->r[0]; // 800F7C00
  c->r[1]=c->r[1]+0x00000010u; // 800F7C04
  return; // 800F7C08
}

// fn_800F7C0C
void f_800F7C0C(Ctx* __restrict c) {
  trace_call(0x800F7C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7C0C
  c->r[0]=c->lr; // 800F7C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7C14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7C18
  c->r[30]=c->r[3]|c->r[3]; // 800F7C1C
  c->r[31]=c->r[4]|c->r[4]; // 800F7C20
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F7C24
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7C28
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F7C2C
  c->r[3]=c->r[4]+0x00000030u; // 800F7C30
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7C34
  c->r[4]=c->r[30]+0x00000030u; // 800F7C38
  c->lr=0x800F7C40u; f_8003AB48(c); // 800F7C3C
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F7C40
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F7C44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7C48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7C4C
  c->lr=c->r[0]; // 800F7C50
  c->r[1]=c->r[1]+0x00000010u; // 800F7C54
  return; // 800F7C58
}

// fn_800F7C5C
void f_800F7C5C(Ctx* __restrict c) {
  trace_call(0x800F7C5Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7C5C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7C60
  c->ctr=c->r[12]; // 800F7C64
  if (true) { dispatch(c,c->ctr); return; } // 800F7C68
}

// fn_800F7C6C
void f_800F7C6C(Ctx* __restrict c) {
  trace_call(0x800F7C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7C6C
  c->r[0]=c->lr; // 800F7C70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7C74
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7C78
  c->r[29]=c->r[3]|c->r[3]; // 800F7C7C
  c->r[30]=c->r[4]|c->r[4]; // 800F7C80
  c->r[31]=c->r[5]|c->r[5]; // 800F7C84
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F7C88
  cmps(c,0,(int32_t)c->r[0],7); // 800F7C8C
  if (!crb(c,0)) { goto L_800F7CA0; } // 800F7C90
  c->r[4]=c->r[31]|c->r[31]; // 800F7C94
  c->r[3]=c->r[3]+0x00000030u; // 800F7C98
  c->lr=0x800F7CA0u; f_8003A994(c); // 800F7C9C
L_800F7CA0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F7CA0
  c->r[3]=c->r[29]|c->r[29]; // 800F7CA4
  c->r[4]=c->r[30]|c->r[30]; // 800F7CA8
  c->r[5]=c->r[31]|c->r[31]; // 800F7CAC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7CB0
  c->ctr=c->r[12]; // 800F7CB4
  if (true) { c->lr=0x800F7CBCu; dispatch(c,c->ctr); } // 800F7CB8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7CBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7CC0
  c->lr=c->r[0]; // 800F7CC4
  c->r[1]=c->r[1]+0x00000020u; // 800F7CC8
  return; // 800F7CCC
}

// fn_800F7CD0
void f_800F7CD0(Ctx* __restrict c) {
  trace_call(0x800F7CD0u);
  c->r[3]=0u+0x80410000u; // 800F7CD0
  c->r[3]=c->r[3]+0xFFFFEDE4u; // 800F7CD4
  return; // 800F7CD8
}

// fn_800F7CDC
void f_800F7CDC(Ctx* __restrict c) {
  trace_call(0x800F7CDCu);
  c->r[3]=0u+0x00000040u; // 800F7CDC
  return; // 800F7CE0
}

// fn_800F7CE4
void f_800F7CE4(Ctx* __restrict c) {
  trace_call(0x800F7CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7CE4
  c->r[0]=c->lr; // 800F7CE8
  c->r[3]=0u+0x00000040u; // 800F7CEC
  c->r[4]=c->r[13]+0xFFFFBB7Au; // 800F7CF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7CF4
  c->r[5]=0u+0x00000000u; // 800F7CF8
  c->r[6]=0u+0x00001001u; // 800F7CFC
  c->lr=0x800F7D04u; f_80244D20(c); // 800F7D00
  cmps(c,0,(int32_t)c->r[3],0); // 800F7D04
  if (crb(c,2)) { goto L_800F7D10; } // 800F7D08
  c->lr=0x800F7D10u; f_800F7B64(c); // 800F7D0C
L_800F7D10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7D10
  c->lr=c->r[0]; // 800F7D14
  c->r[1]=c->r[1]+0x00000010u; // 800F7D18
  return; // 800F7D1C
}

// fn_800F7D20
void f_800F7D20(Ctx* __restrict c) {
  trace_call(0x800F7D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7D20
  c->r[0]=c->lr; // 800F7D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7D2C
  c->r[31]=c->r[3]|c->r[3]; // 800F7D30
  c->lr=0x800F7D38u; f_800D7120(c); // 800F7D34
  c->r[5]=0u+0x80410000u; // 800F7D38
  c->r[3]=0u+0x39070000u; // 800F7D3C
  c->r[0]=c->r[3]+0xFFFFF5DCu; // 800F7D40
  c->r[4]=0u+0x00000000u; // 800F7D44
  c->r[5]=c->r[5]+0x0000400Cu; // 800F7D48
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F7D4C
  c->r[3]=c->r[31]|c->r[31]; // 800F7D50
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F7D54
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F7D58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7D5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7D60
  c->lr=c->r[0]; // 800F7D64
  c->r[1]=c->r[1]+0x00000010u; // 800F7D68
  return; // 800F7D6C
}

// fn_800F7D70
void f_800F7D70(Ctx* __restrict c) {
  trace_call(0x800F7D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7D70
  c->r[0]=c->lr; // 800F7D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7D78
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7D7C
  c->r[30]=c->r[3]|c->r[3]; // 800F7D80
  c->r[31]=c->r[4]|c->r[4]; // 800F7D84
  c->lr=0x800F7D8Cu; f_8030D728(c); // 800F7D88
  c->r[3]=c->r[31]|c->r[31]; // 800F7D8C
  c->r[4]=0u+0x00000000u; // 800F7D90
  c->lr=0x800F7D98u; f_8030BE30(c); // 800F7D94
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F7D98
  c->r[3]=c->r[31]|c->r[31]; // 800F7D9C
  c->lr=0x800F7DA4u; f_8030BD1C(c); // 800F7DA0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F7DA4
  c->r[3]=c->r[31]|c->r[31]; // 800F7DA8
  c->lr=0x800F7DB0u; f_8030C0A0(c); // 800F7DAC
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F7DB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7DB8
  c->lr=c->r[0]; // 800F7DBC
  c->r[1]=c->r[1]+0x00000010u; // 800F7DC0
  return; // 800F7DC4
}

// fn_800F7DC8
void f_800F7DC8(Ctx* __restrict c) {
  trace_call(0x800F7DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7DC8
  c->r[0]=c->lr; // 800F7DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7DD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7DD4
  c->r[31]=c->r[4]|c->r[4]; // 800F7DD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7DDC
  c->r[30]=c->r[3]|c->r[3]; // 800F7DE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F7DE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7DE8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F7DEC
  c->r[3]=c->r[4]+0x00000030u; // 800F7DF0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7DF4
  c->r[4]=c->r[30]+0x00000030u; // 800F7DF8
  c->lr=0x800F7E00u; f_8003AB48(c); // 800F7DFC
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7E00
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F7E04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7E08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7E0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7E10
  c->lr=c->r[0]; // 800F7E14
  c->r[1]=c->r[1]+0x00000010u; // 800F7E18
  return; // 800F7E1C
}

// fn_800F7E20
void f_800F7E20(Ctx* __restrict c) {
  trace_call(0x800F7E20u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7E20
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7E24
  c->ctr=c->r[12]; // 800F7E28
  if (true) { dispatch(c,c->ctr); return; } // 800F7E2C
}

// fn_800F7E30
void f_800F7E30(Ctx* __restrict c) {
  trace_call(0x800F7E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7E30
  c->r[0]=c->lr; // 800F7E34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7E38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7E3C
  c->r[29]=c->r[3]|c->r[3]; // 800F7E40
  c->r[30]=c->r[4]|c->r[4]; // 800F7E44
  c->r[31]=c->r[5]|c->r[5]; // 800F7E48
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F7E4C
  cmps(c,0,(int32_t)c->r[0],7); // 800F7E50
  if (!crb(c,0)) { goto L_800F7E64; } // 800F7E54
  c->r[4]=c->r[31]|c->r[31]; // 800F7E58
  c->r[3]=c->r[3]+0x00000030u; // 800F7E5C
  c->lr=0x800F7E64u; f_8003A994(c); // 800F7E60
L_800F7E64:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F7E64
  c->r[3]=c->r[29]|c->r[29]; // 800F7E68
  c->r[4]=c->r[30]|c->r[30]; // 800F7E6C
  c->r[5]=c->r[31]|c->r[31]; // 800F7E70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F7E74
  c->ctr=c->r[12]; // 800F7E78
  if (true) { c->lr=0x800F7E80u; dispatch(c,c->ctr); } // 800F7E7C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7E80
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7E84
  c->lr=c->r[0]; // 800F7E88
  c->r[1]=c->r[1]+0x00000020u; // 800F7E8C
  return; // 800F7E90
}

// fn_800F7E94
void f_800F7E94(Ctx* __restrict c) {
  trace_call(0x800F7E94u);
  c->r[3]=0u+0x80410000u; // 800F7E94
  c->r[3]=c->r[3]+0xFFFFEDFCu; // 800F7E98
  return; // 800F7E9C
}

// fn_800F7EA0
void f_800F7EA0(Ctx* __restrict c) {
  trace_call(0x800F7EA0u);
  c->r[3]=0u+0x00000040u; // 800F7EA0
  return; // 800F7EA4
}

// fn_800F7EA8
void f_800F7EA8(Ctx* __restrict c) {
  trace_call(0x800F7EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7EA8
  c->r[0]=c->lr; // 800F7EAC
  c->r[3]=0u+0x00000040u; // 800F7EB0
  c->r[4]=c->r[13]+0xFFFFBB7Fu; // 800F7EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7EB8
  c->r[5]=0u+0x00000000u; // 800F7EBC
  c->r[6]=0u+0x00001001u; // 800F7EC0
  c->lr=0x800F7EC8u; f_80244D20(c); // 800F7EC4
  cmps(c,0,(int32_t)c->r[3],0); // 800F7EC8
  if (crb(c,2)) { goto L_800F7ED4; } // 800F7ECC
  c->lr=0x800F7ED4u; f_800F7D20(c); // 800F7ED0
L_800F7ED4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7ED4
  c->lr=c->r[0]; // 800F7ED8
  c->r[1]=c->r[1]+0x00000010u; // 800F7EDC
  return; // 800F7EE0
}

// fn_800F7EE4
void f_800F7EE4(Ctx* __restrict c) {
  trace_call(0x800F7EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7EE4
  c->r[0]=c->lr; // 800F7EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7EEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7EF0
  c->r[31]=c->r[3]|c->r[3]; // 800F7EF4
  c->lr=0x800F7EFCu; f_800D7120(c); // 800F7EF8
  c->r[5]=0u+0x80410000u; // 800F7EFC
  c->r[3]=0u+0x39070000u; // 800F7F00
  c->r[0]=c->r[3]+0xFFFFF5DCu; // 800F7F04
  c->r[4]=0u+0x00000000u; // 800F7F08
  c->r[5]=c->r[5]+0x00003FD8u; // 800F7F0C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F7F10
  c->r[3]=c->r[31]|c->r[31]; // 800F7F14
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F7F18
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F7F1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7F20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7F24
  c->lr=c->r[0]; // 800F7F28
  c->r[1]=c->r[1]+0x00000010u; // 800F7F2C
  return; // 800F7F30
}

// fn_800F7F34
void f_800F7F34(Ctx* __restrict c) {
  trace_call(0x800F7F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7F34
  c->r[0]=c->lr; // 800F7F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7F3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F7F40
  c->r[30]=c->r[3]|c->r[3]; // 800F7F44
  c->r[31]=c->r[4]|c->r[4]; // 800F7F48
  c->lr=0x800F7F50u; f_8030D728(c); // 800F7F4C
  c->r[3]=c->r[31]|c->r[31]; // 800F7F50
  c->r[4]=0u+0x00000000u; // 800F7F54
  c->lr=0x800F7F5Cu; f_8030BE30(c); // 800F7F58
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F7F5C
  c->r[3]=c->r[31]|c->r[31]; // 800F7F60
  c->lr=0x800F7F68u; f_8030BD1C(c); // 800F7F64
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F7F68
  c->r[3]=c->r[31]|c->r[31]; // 800F7F6C
  c->lr=0x800F7F74u; f_8030C0A0(c); // 800F7F70
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F7F74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F7F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7F7C
  c->lr=c->r[0]; // 800F7F80
  c->r[1]=c->r[1]+0x00000010u; // 800F7F84
  return; // 800F7F88
}

// fn_800F7F8C
void f_800F7F8C(Ctx* __restrict c) {
  trace_call(0x800F7F8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7F8C
  c->r[0]=c->lr; // 800F7F90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7F94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7F98
  c->r[31]=c->r[4]|c->r[4]; // 800F7F9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7FA0
  c->r[30]=c->r[3]|c->r[3]; // 800F7FA4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F7FA8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F7FAC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F7FB0
  c->r[3]=c->r[4]+0x00000030u; // 800F7FB4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F7FB8
  c->r[4]=c->r[30]+0x00000030u; // 800F7FBC
  c->lr=0x800F7FC4u; f_8003AB48(c); // 800F7FC0
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F7FC4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F7FC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7FCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7FD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7FD4
  c->lr=c->r[0]; // 800F7FD8
  c->r[1]=c->r[1]+0x00000010u; // 800F7FDC
  return; // 800F7FE0
}

// fn_800F7FE4
void f_800F7FE4(Ctx* __restrict c) {
  trace_call(0x800F7FE4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F7FE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F7FE8
  c->ctr=c->r[12]; // 800F7FEC
  if (true) { dispatch(c,c->ctr); return; } // 800F7FF0
}

// fn_800F7FF4
void f_800F7FF4(Ctx* __restrict c) {
  trace_call(0x800F7FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7FF4
  c->r[0]=c->lr; // 800F7FF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7FFC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8000
  c->r[29]=c->r[3]|c->r[3]; // 800F8004
  c->r[30]=c->r[4]|c->r[4]; // 800F8008
  c->r[31]=c->r[5]|c->r[5]; // 800F800C
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F8010
  cmps(c,0,(int32_t)c->r[0],7); // 800F8014
  if (!crb(c,0)) { goto L_800F8028; } // 800F8018
  c->r[4]=c->r[31]|c->r[31]; // 800F801C
  c->r[3]=c->r[3]+0x00000030u; // 800F8020
  c->lr=0x800F8028u; f_8003A994(c); // 800F8024
L_800F8028:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F8028
  c->r[3]=c->r[29]|c->r[29]; // 800F802C
  c->r[4]=c->r[30]|c->r[30]; // 800F8030
  c->r[5]=c->r[31]|c->r[31]; // 800F8034
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8038
  c->ctr=c->r[12]; // 800F803C
  if (true) { c->lr=0x800F8044u; dispatch(c,c->ctr); } // 800F8040
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8044
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8048
  c->lr=c->r[0]; // 800F804C
  c->r[1]=c->r[1]+0x00000020u; // 800F8050
  return; // 800F8054
}

// fn_800F8058
void f_800F8058(Ctx* __restrict c) {
  trace_call(0x800F8058u);
  c->r[3]=0u+0x80410000u; // 800F8058
  c->r[3]=c->r[3]+0xFFFFEE0Fu; // 800F805C
  return; // 800F8060
}

// fn_800F8064
void f_800F8064(Ctx* __restrict c) {
  trace_call(0x800F8064u);
  c->r[3]=0u+0x00000040u; // 800F8064
  return; // 800F8068
}

// fn_800F806C
void f_800F806C(Ctx* __restrict c) {
  trace_call(0x800F806Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F806C
  c->r[0]=c->lr; // 800F8070
  c->r[3]=0u+0x00000040u; // 800F8074
  c->r[4]=c->r[13]+0xFFFFBB84u; // 800F8078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F807C
  c->r[5]=0u+0x00000000u; // 800F8080
  c->r[6]=0u+0x00001001u; // 800F8084
  c->lr=0x800F808Cu; f_80244D20(c); // 800F8088
  cmps(c,0,(int32_t)c->r[3],0); // 800F808C
  if (crb(c,2)) { goto L_800F8098; } // 800F8090
  c->lr=0x800F8098u; f_800F7EE4(c); // 800F8094
L_800F8098:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8098
  c->lr=c->r[0]; // 800F809C
  c->r[1]=c->r[1]+0x00000010u; // 800F80A0
  return; // 800F80A4
}

// fn_800F80A8
void f_800F80A8(Ctx* __restrict c) {
  trace_call(0x800F80A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F80A8
  c->r[0]=c->lr; // 800F80AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F80B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F80B4
  c->r[31]=c->r[3]|c->r[3]; // 800F80B8
  c->lr=0x800F80C0u; f_800D7120(c); // 800F80BC
  c->r[4]=0u+0x80410000u; // 800F80C0
  c->r[3]=0u+0xDC6E0000u; // 800F80C4
  c->r[0]=c->r[3]+0xFFFF9AB7u; // 800F80C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F80CC
  c->r[4]=c->r[4]+0x00003FA4u; // 800F80D0
  c->r[3]=c->r[31]|c->r[31]; // 800F80D4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F80D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F80DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F80E0
  c->lr=c->r[0]; // 800F80E4
  c->r[1]=c->r[1]+0x00000010u; // 800F80E8
  return; // 800F80EC
}

// fn_800F80F0
void f_800F80F0(Ctx* __restrict c) {
  trace_call(0x800F80F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F80F0
  c->r[0]=c->lr; // 800F80F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F80F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F80FC
  c->r[30]=c->r[3]|c->r[3]; // 800F8100
  c->r[31]=c->r[4]|c->r[4]; // 800F8104
  c->lr=0x800F810Cu; f_8030D728(c); // 800F8108
  c->r[3]=c->r[31]|c->r[31]; // 800F810C
  c->lr=0x800F8114u; f_8030BD1C(c); // 800F8110
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F8114
  c->r[3]=c->r[31]|c->r[31]; // 800F8118
  c->lr=0x800F8120u; f_8030C0A0(c); // 800F811C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800F8120
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8124
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8128
  c->lr=c->r[0]; // 800F812C
  c->r[1]=c->r[1]+0x00000010u; // 800F8130
  return; // 800F8134
}

// fn_800F8138
void f_800F8138(Ctx* __restrict c) {
  trace_call(0x800F8138u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F8138
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F813C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800F8140
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8144
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F8148
  W32(c->r[4]+0x00000004u,c->r[5]); // 800F814C
  W32(c->r[4]+0x00000030u,c->r[0]); // 800F8150
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800F8154
  return; // 800F8158
}

// fn_800F815C
void f_800F815C(Ctx* __restrict c) {
  trace_call(0x800F815Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F815C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F8160
  c->ctr=c->r[12]; // 800F8164
  if (true) { dispatch(c,c->ctr); return; } // 800F8168
}

// fn_800F816C
void f_800F816C(Ctx* __restrict c) {
  trace_call(0x800F816Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F816C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8170
  c->ctr=c->r[12]; // 800F8174
  if (true) { dispatch(c,c->ctr); return; } // 800F8178
}

// fn_800F817C
void f_800F817C(Ctx* __restrict c) {
  trace_call(0x800F817Cu);
  c->r[3]=0u+0x80410000u; // 800F817C
  c->r[3]=c->r[3]+0xFFFFEE26u; // 800F8180
  return; // 800F8184
}

// fn_800F8188
void f_800F8188(Ctx* __restrict c) {
  trace_call(0x800F8188u);
  c->r[3]=0u+0x00000038u; // 800F8188
  return; // 800F818C
}

// fn_800F8190
void f_800F8190(Ctx* __restrict c) {
  trace_call(0x800F8190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8190
  c->r[0]=c->lr; // 800F8194
  c->r[3]=0u+0x00000038u; // 800F8198
  c->r[4]=c->r[13]+0xFFFFBB89u; // 800F819C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F81A0
  c->r[5]=0u+0x00000000u; // 800F81A4
  c->r[6]=0u+0x00001001u; // 800F81A8
  c->lr=0x800F81B0u; f_80244D20(c); // 800F81AC
  cmps(c,0,(int32_t)c->r[3],0); // 800F81B0
  if (crb(c,2)) { goto L_800F81BC; } // 800F81B4
  c->lr=0x800F81BCu; f_800F80A8(c); // 800F81B8
L_800F81BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F81BC
  c->lr=c->r[0]; // 800F81C0
  c->r[1]=c->r[1]+0x00000010u; // 800F81C4
  return; // 800F81C8
}

// fn_800F81CC
void f_800F81CC(Ctx* __restrict c) {
  trace_call(0x800F81CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F81CC
  c->r[0]=c->lr; // 800F81D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F81D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F81D8
  c->r[31]=c->r[3]|c->r[3]; // 800F81DC
  c->lr=0x800F81E4u; f_800D7120(c); // 800F81E0
  c->r[5]=0u+0x80410000u; // 800F81E4
  c->r[3]=0u+0x9B800000u; // 800F81E8
  c->r[0]=c->r[3]+0x00005FF7u; // 800F81EC
  c->r[4]=0u+0x00000000u; // 800F81F0
  c->r[5]=c->r[5]+0x00003F70u; // 800F81F4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F81F8
  c->r[3]=c->r[31]|c->r[31]; // 800F81FC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F8200
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F8204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8208
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F820C
  c->lr=c->r[0]; // 800F8210
  c->r[1]=c->r[1]+0x00000010u; // 800F8214
  return; // 800F8218
}

// fn_800F821C
void f_800F821C(Ctx* __restrict c) {
  trace_call(0x800F821Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F821C
  c->r[0]=c->lr; // 800F8220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8224
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8228
  c->r[30]=c->r[3]|c->r[3]; // 800F822C
  c->r[31]=c->r[4]|c->r[4]; // 800F8230
  c->lr=0x800F8238u; f_8030D728(c); // 800F8234
  c->r[3]=c->r[31]|c->r[31]; // 800F8238
  c->r[4]=0u+0x00000000u; // 800F823C
  c->lr=0x800F8244u; f_8030BE30(c); // 800F8240
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F8244
  c->r[3]=c->r[31]|c->r[31]; // 800F8248
  c->lr=0x800F8250u; f_8030BD1C(c); // 800F824C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F8250
  c->r[3]=c->r[31]|c->r[31]; // 800F8254
  c->lr=0x800F825Cu; f_8030BD1C(c); // 800F8258
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F825C
  c->r[3]=c->r[31]|c->r[31]; // 800F8260
  c->lr=0x800F8268u; f_8030BD1C(c); // 800F8264
  W8(c->r[30]+0x00000040u,c->r[3]); // 800F8268
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F826C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8270
  c->lr=c->r[0]; // 800F8274
  c->r[1]=c->r[1]+0x00000010u; // 800F8278
  return; // 800F827C
}

// fn_800F8280
void f_800F8280(Ctx* __restrict c) {
  trace_call(0x800F8280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8280
  c->r[0]=c->lr; // 800F8284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8288
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F828C
  c->r[30]=c->r[3]|c->r[3]; // 800F8290
  c->r[31]=c->r[4]|c->r[4]; // 800F8294
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8298
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F829C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F82A0
  c->r[3]=c->r[4]+0x00000030u; // 800F82A4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F82A8
  c->r[4]=c->r[30]+0x00000030u; // 800F82AC
  c->lr=0x800F82B4u; f_8003AB48(c); // 800F82B0
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F82B4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F82B8
  c->r[0]=R8(c->r[30]+0x00000040u); // 800F82BC
  W8(c->r[31]+0x00000040u,c->r[0]); // 800F82C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F82C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F82C8
  c->lr=c->r[0]; // 800F82CC
  c->r[1]=c->r[1]+0x00000010u; // 800F82D0
  return; // 800F82D4
}

// fn_800F82D8
void f_800F82D8(Ctx* __restrict c) {
  trace_call(0x800F82D8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F82D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F82DC
  c->ctr=c->r[12]; // 800F82E0
  if (true) { dispatch(c,c->ctr); return; } // 800F82E4
}

// fn_800F82E8
void f_800F82E8(Ctx* __restrict c) {
  trace_call(0x800F82E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F82E8
  c->r[0]=c->lr; // 800F82EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F82F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F82F4
  c->r[29]=c->r[3]|c->r[3]; // 800F82F8
  c->r[30]=c->r[4]|c->r[4]; // 800F82FC
  c->r[31]=c->r[5]|c->r[5]; // 800F8300
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F8304
  cmps(c,0,(int32_t)c->r[0],7); // 800F8308
  if (!crb(c,0)) { goto L_800F831C; } // 800F830C
  c->r[4]=c->r[31]|c->r[31]; // 800F8310
  c->r[3]=c->r[3]+0x00000030u; // 800F8314
  c->lr=0x800F831Cu; f_8003A994(c); // 800F8318
L_800F831C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F831C
  c->r[3]=c->r[29]|c->r[29]; // 800F8320
  c->r[4]=c->r[30]|c->r[30]; // 800F8324
  c->r[5]=c->r[31]|c->r[31]; // 800F8328
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F832C
  c->ctr=c->r[12]; // 800F8330
  if (true) { c->lr=0x800F8338u; dispatch(c,c->ctr); } // 800F8334
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8338
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F833C
  c->lr=c->r[0]; // 800F8340
  c->r[1]=c->r[1]+0x00000020u; // 800F8344
  return; // 800F8348
}

// fn_800F834C
void f_800F834C(Ctx* __restrict c) {
  trace_call(0x800F834Cu);
  c->r[3]=0u+0x80410000u; // 800F834C
  c->r[3]=c->r[3]+0xFFFFEE3Cu; // 800F8350
  return; // 800F8354
}

// fn_800F8358
void f_800F8358(Ctx* __restrict c) {
  trace_call(0x800F8358u);
  c->r[3]=0u+0x00000044u; // 800F8358
  return; // 800F835C
}

// fn_800F8360
void f_800F8360(Ctx* __restrict c) {
  trace_call(0x800F8360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8360
  c->r[0]=c->lr; // 800F8364
  c->r[3]=0u+0x00000044u; // 800F8368
  c->r[4]=c->r[13]+0xFFFFBB8Eu; // 800F836C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8370
  c->r[5]=0u+0x00000000u; // 800F8374
  c->r[6]=0u+0x00001001u; // 800F8378
  c->lr=0x800F8380u; f_80244D20(c); // 800F837C
  cmps(c,0,(int32_t)c->r[3],0); // 800F8380
  if (crb(c,2)) { goto L_800F838C; } // 800F8384
  c->lr=0x800F838Cu; f_800F81CC(c); // 800F8388
L_800F838C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F838C
  c->lr=c->r[0]; // 800F8390
  c->r[1]=c->r[1]+0x00000010u; // 800F8394
  return; // 800F8398
}

// fn_800F839C
void f_800F839C(Ctx* __restrict c) {
  trace_call(0x800F839Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F839C
  c->r[0]=c->lr; // 800F83A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F83A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F83A8
  c->r[31]=c->r[3]|c->r[3]; // 800F83AC
  c->lr=0x800F83B4u; f_800D7120(c); // 800F83B0
  c->r[5]=0u+0x80410000u; // 800F83B4
  c->r[3]=0u+0x2F7B0000u; // 800F83B8
  c->r[0]=c->r[3]+0x000030A7u; // 800F83BC
  c->r[4]=0u+0x00000000u; // 800F83C0
  c->r[5]=c->r[5]+0x00003F3Cu; // 800F83C4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F83C8
  c->r[3]=c->r[31]|c->r[31]; // 800F83CC
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F83D0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F83D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F83D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F83DC
  c->lr=c->r[0]; // 800F83E0
  c->r[1]=c->r[1]+0x00000010u; // 800F83E4
  return; // 800F83E8
}

// fn_800F83EC
void f_800F83EC(Ctx* __restrict c) {
  trace_call(0x800F83ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F83EC
  c->r[0]=c->lr; // 800F83F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F83F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F83F8
  c->r[30]=c->r[3]|c->r[3]; // 800F83FC
  c->r[31]=c->r[4]|c->r[4]; // 800F8400
  c->lr=0x800F8408u; f_8030D728(c); // 800F8404
  c->r[3]=c->r[31]|c->r[31]; // 800F8408
  c->r[4]=0u+0x00000000u; // 800F840C
  c->lr=0x800F8414u; f_8030BE30(c); // 800F8410
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F8414
  c->r[3]=c->r[31]|c->r[31]; // 800F8418
  c->lr=0x800F8420u; f_8030BD1C(c); // 800F841C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F8420
  c->r[3]=c->r[31]|c->r[31]; // 800F8424
  c->r[4]=0u+0x00000000u; // 800F8428
  c->lr=0x800F8430u; f_8030BE30(c); // 800F842C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F8430
  c->r[3]=c->r[31]|c->r[31]; // 800F8434
  c->lr=0x800F843Cu; f_8030C0A0(c); // 800F8438
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800F843C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8440
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8444
  c->lr=c->r[0]; // 800F8448
  c->r[1]=c->r[1]+0x00000010u; // 800F844C
  return; // 800F8450
}

// fn_800F8454
void f_800F8454(Ctx* __restrict c) {
  trace_call(0x800F8454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8454
  c->r[0]=c->lr; // 800F8458
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F845C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8460
  c->r[31]=c->r[4]|c->r[4]; // 800F8464
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8468
  c->r[30]=c->r[3]|c->r[3]; // 800F846C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8470
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F8474
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F8478
  c->r[3]=c->r[4]+0x00000030u; // 800F847C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8480
  c->r[4]=c->r[30]+0x00000030u; // 800F8484
  c->lr=0x800F848Cu; f_8003AB48(c); // 800F8488
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F848C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F8490
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8494
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800F8498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F849C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F84A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F84A4
  c->lr=c->r[0]; // 800F84A8
  c->r[1]=c->r[1]+0x00000010u; // 800F84AC
  return; // 800F84B0
}

// fn_800F84B4
void f_800F84B4(Ctx* __restrict c) {
  trace_call(0x800F84B4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F84B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F84B8
  c->ctr=c->r[12]; // 800F84BC
  if (true) { dispatch(c,c->ctr); return; } // 800F84C0
}

// fn_800F84C4
void f_800F84C4(Ctx* __restrict c) {
  trace_call(0x800F84C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F84C4
  c->r[0]=c->lr; // 800F84C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F84CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F84D0
  c->r[29]=c->r[3]|c->r[3]; // 800F84D4
  c->r[30]=c->r[4]|c->r[4]; // 800F84D8
  c->r[31]=c->r[5]|c->r[5]; // 800F84DC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F84E0
  cmps(c,0,(int32_t)c->r[0],7); // 800F84E4
  if (!crb(c,0)) { goto L_800F84F8; } // 800F84E8
  c->r[4]=c->r[31]|c->r[31]; // 800F84EC
  c->r[3]=c->r[3]+0x00000030u; // 800F84F0
  c->lr=0x800F84F8u; f_8003A994(c); // 800F84F4
L_800F84F8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F84F8
  c->r[3]=c->r[29]|c->r[29]; // 800F84FC
  c->r[4]=c->r[30]|c->r[30]; // 800F8500
  c->r[5]=c->r[31]|c->r[31]; // 800F8504
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8508
  c->ctr=c->r[12]; // 800F850C
  if (true) { c->lr=0x800F8514u; dispatch(c,c->ctr); } // 800F8510
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8514
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8518
  c->lr=c->r[0]; // 800F851C
  c->r[1]=c->r[1]+0x00000020u; // 800F8520
  return; // 800F8524
}

// fn_800F8528
void f_800F8528(Ctx* __restrict c) {
  trace_call(0x800F8528u);
  c->r[3]=0u+0x80410000u; // 800F8528
  c->r[3]=c->r[3]+0xFFFFEE50u; // 800F852C
  return; // 800F8530
}

// fn_800F8534
void f_800F8534(Ctx* __restrict c) {
  trace_call(0x800F8534u);
  c->r[3]=0u+0x00000044u; // 800F8534
  return; // 800F8538
}

// fn_800F853C
void f_800F853C(Ctx* __restrict c) {
  trace_call(0x800F853Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F853C
  c->r[0]=c->lr; // 800F8540
  c->r[3]=0u+0x00000044u; // 800F8544
  c->r[4]=c->r[13]+0xFFFFBB93u; // 800F8548
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F854C
  c->r[5]=0u+0x00000000u; // 800F8550
  c->r[6]=0u+0x00001001u; // 800F8554
  c->lr=0x800F855Cu; f_80244D20(c); // 800F8558
  cmps(c,0,(int32_t)c->r[3],0); // 800F855C
  if (crb(c,2)) { goto L_800F8568; } // 800F8560
  c->lr=0x800F8568u; f_800F839C(c); // 800F8564
L_800F8568:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8568
  c->lr=c->r[0]; // 800F856C
  c->r[1]=c->r[1]+0x00000010u; // 800F8570
  return; // 800F8574
}

// fn_800F8578
void f_800F8578(Ctx* __restrict c) {
  trace_call(0x800F8578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8578
  c->r[0]=c->lr; // 800F857C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8584
  c->r[31]=c->r[3]|c->r[3]; // 800F8588
  c->lr=0x800F8590u; f_800D7120(c); // 800F858C
  c->r[5]=0u+0x80410000u; // 800F8590
  c->r[3]=0u+0x2E4B0000u; // 800F8594
  c->r[4]=0u+0x00000000u; // 800F8598
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F859C
  c->r[0]=c->r[3]+0x00002E85u; // 800F85A0
  c->r[5]=c->r[5]+0x00003F08u; // 800F85A4
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F85A8
  c->r[3]=c->r[31]|c->r[31]; // 800F85AC
  W32(c->r[31]+0x00000048u,c->r[4]); // 800F85B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F85B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F85B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F85BC
  c->lr=c->r[0]; // 800F85C0
  c->r[1]=c->r[1]+0x00000010u; // 800F85C4
  return; // 800F85C8
}

// fn_800F85CC
void f_800F85CC(Ctx* __restrict c) {
  trace_call(0x800F85CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F85CC
  c->r[0]=c->lr; // 800F85D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F85D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F85D8
  c->r[30]=c->r[3]|c->r[3]; // 800F85DC
  c->r[31]=c->r[4]|c->r[4]; // 800F85E0
  c->lr=0x800F85E8u; f_8030D728(c); // 800F85E4
  c->r[3]=c->r[31]|c->r[31]; // 800F85E8
  c->r[4]=0u+0x00000000u; // 800F85EC
  c->lr=0x800F85F4u; f_8030BE30(c); // 800F85F0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F85F4
  c->r[3]=c->r[31]|c->r[31]; // 800F85F8
  c->lr=0x800F8600u; f_8030BD1C(c); // 800F85FC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F8600
  c->r[3]=c->r[31]|c->r[31]; // 800F8604
  c->r[4]=0u+0x00000000u; // 800F8608
  c->lr=0x800F8610u; f_8030BE30(c); // 800F860C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F8610
  c->r[3]=c->r[31]|c->r[31]; // 800F8614
  c->r[4]=0u+0x00000000u; // 800F8618
  c->lr=0x800F8620u; f_8030BE30(c); // 800F861C
  W32(c->r[30]+0x00000040u,c->r[3]); // 800F8620
  c->r[3]=c->r[31]|c->r[31]; // 800F8624
  c->lr=0x800F862Cu; f_8030BD1C(c); // 800F8628
  W32(c->r[30]+0x00000044u,c->r[3]); // 800F862C
  c->r[3]=c->r[31]|c->r[31]; // 800F8630
  c->lr=0x800F8638u; f_8030BD1C(c); // 800F8634
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800F8638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F863C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8640
  c->lr=c->r[0]; // 800F8644
  c->r[1]=c->r[1]+0x00000010u; // 800F8648
  return; // 800F864C
}

// fn_800F8650
void f_800F8650(Ctx* __restrict c) {
  trace_call(0x800F8650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8650
  c->r[0]=c->lr; // 800F8654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8658
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F865C
  c->r[30]=c->r[3]|c->r[3]; // 800F8660
  c->r[31]=c->r[4]|c->r[4]; // 800F8664
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8668
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F866C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F8670
  c->r[3]=c->r[4]+0x00000030u; // 800F8674
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8678
  c->r[4]=c->r[30]+0x00000030u; // 800F867C
  c->lr=0x800F8684u; f_8003AB48(c); // 800F8680
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F8684
  c->r[3]=c->r[31]+0x00000040u; // 800F8688
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F868C
  c->r[4]=c->r[30]+0x00000040u; // 800F8690
  c->lr=0x800F8698u; f_8003AB48(c); // 800F8694
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800F8698
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800F869C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F86A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F86A4
  c->lr=c->r[0]; // 800F86A8
  c->r[1]=c->r[1]+0x00000010u; // 800F86AC
  return; // 800F86B0
}

// fn_800F86B4
void f_800F86B4(Ctx* __restrict c) {
  trace_call(0x800F86B4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F86B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F86B8
  c->ctr=c->r[12]; // 800F86BC
  if (true) { dispatch(c,c->ctr); return; } // 800F86C0
}

// fn_800F86C4
void f_800F86C4(Ctx* __restrict c) {
  trace_call(0x800F86C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F86C4
  c->r[0]=c->lr; // 800F86C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F86CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F86D0
  c->r[29]=c->r[3]|c->r[3]; // 800F86D4
  c->r[30]=c->r[4]|c->r[4]; // 800F86D8
  c->r[31]=c->r[5]|c->r[5]; // 800F86DC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F86E0
  cmps(c,0,(int32_t)c->r[0],7); // 800F86E4
  if (!crb(c,0)) { goto L_800F86F8; } // 800F86E8
  c->r[4]=c->r[31]|c->r[31]; // 800F86EC
  c->r[3]=c->r[3]+0x00000030u; // 800F86F0
  c->lr=0x800F86F8u; f_8003A994(c); // 800F86F4
L_800F86F8:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 800F86F8
  cmps(c,0,(int32_t)c->r[0],7); // 800F86FC
  if (!crb(c,0)) { goto L_800F8710; } // 800F8700
  c->r[4]=c->r[31]|c->r[31]; // 800F8704
  c->r[3]=c->r[29]+0x00000040u; // 800F8708
  c->lr=0x800F8710u; f_8003A994(c); // 800F870C
L_800F8710:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F8710
  c->r[3]=c->r[29]|c->r[29]; // 800F8714
  c->r[4]=c->r[30]|c->r[30]; // 800F8718
  c->r[5]=c->r[31]|c->r[31]; // 800F871C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8720
  c->ctr=c->r[12]; // 800F8724
  if (true) { c->lr=0x800F872Cu; dispatch(c,c->ctr); } // 800F8728
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F872C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8730
  c->lr=c->r[0]; // 800F8734
  c->r[1]=c->r[1]+0x00000020u; // 800F8738
  return; // 800F873C
}

// fn_800F8740
void f_800F8740(Ctx* __restrict c) {
  trace_call(0x800F8740u);
  c->r[3]=0u+0x80410000u; // 800F8740
  c->r[3]=c->r[3]+0xFFFFEE6Bu; // 800F8744
  return; // 800F8748
}

// fn_800F874C
void f_800F874C(Ctx* __restrict c) {
  trace_call(0x800F874Cu);
  c->r[3]=0u+0x00000050u; // 800F874C
  return; // 800F8750
}

// fn_800F8754
void f_800F8754(Ctx* __restrict c) {
  trace_call(0x800F8754u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8754
  c->r[0]=c->lr; // 800F8758
  c->r[3]=0u+0x00000050u; // 800F875C
  c->r[4]=c->r[13]+0xFFFFBB98u; // 800F8760
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8764
  c->r[5]=0u+0x00000000u; // 800F8768
  c->r[6]=0u+0x00001001u; // 800F876C
  c->lr=0x800F8774u; f_80244D20(c); // 800F8770
  cmps(c,0,(int32_t)c->r[3],0); // 800F8774
  if (crb(c,2)) { goto L_800F8780; } // 800F8778
  c->lr=0x800F8780u; f_800F8578(c); // 800F877C
L_800F8780:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8780
  c->lr=c->r[0]; // 800F8784
  c->r[1]=c->r[1]+0x00000010u; // 800F8788
  return; // 800F878C
}

// fn_800F8790
void f_800F8790(Ctx* __restrict c) {
  trace_call(0x800F8790u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8790
  c->r[0]=c->lr; // 800F8794
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8798
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F879C
  c->r[31]=c->r[3]|c->r[3]; // 800F87A0
  c->lr=0x800F87A8u; f_800D7120(c); // 800F87A4
  c->r[4]=0u+0x80410000u; // 800F87A8
  c->r[3]=0u+0x91740000u; // 800F87AC
  c->r[0]=c->r[3]+0xFFFF8D10u; // 800F87B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F87B4
  c->r[4]=c->r[4]+0x00003ED4u; // 800F87B8
  c->r[3]=c->r[31]|c->r[31]; // 800F87BC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F87C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F87C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F87C8
  c->lr=c->r[0]; // 800F87CC
  c->r[1]=c->r[1]+0x00000010u; // 800F87D0
  return; // 800F87D4
}

// fn_800F87D8
void f_800F87D8(Ctx* __restrict c) {
  trace_call(0x800F87D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F87D8
  c->r[0]=c->lr; // 800F87DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F87E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F87E4
  c->r[30]=c->r[3]|c->r[3]; // 800F87E8
  c->r[31]=c->r[4]|c->r[4]; // 800F87EC
  c->lr=0x800F87F4u; f_8030D728(c); // 800F87F0
  c->r[3]=c->r[31]|c->r[31]; // 800F87F4
  c->r[4]=0u+0x00000000u; // 800F87F8
  c->lr=0x800F8800u; f_8030BE30(c); // 800F87FC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F8800
  c->r[3]=c->r[31]|c->r[31]; // 800F8804
  c->r[4]=0u+0x00000000u; // 800F8808
  c->lr=0x800F8810u; f_8030BE30(c); // 800F880C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F8810
  c->r[3]=c->r[31]|c->r[31]; // 800F8814
  c->lr=0x800F881Cu; f_8030BD1C(c); // 800F8818
  W8(c->r[30]+0x00000038u,c->r[3]); // 800F881C
  c->r[3]=c->r[31]|c->r[31]; // 800F8820
  c->lr=0x800F8828u; f_8030BD1C(c); // 800F8824
  W8(c->r[30]+0x00000039u,c->r[3]); // 800F8828
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F882C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8830
  c->lr=c->r[0]; // 800F8834
  c->r[1]=c->r[1]+0x00000010u; // 800F8838
  return; // 800F883C
}

// fn_800F8840
void f_800F8840(Ctx* __restrict c) {
  trace_call(0x800F8840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8840
  c->r[0]=c->lr; // 800F8844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8848
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F884C
  c->r[30]=c->r[3]|c->r[3]; // 800F8850
  c->r[31]=c->r[4]|c->r[4]; // 800F8854
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8858
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F885C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F8860
  c->r[3]=c->r[4]+0x00000030u; // 800F8864
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8868
  c->r[4]=c->r[30]+0x00000030u; // 800F886C
  c->lr=0x800F8874u; f_8003F6E4(c); // 800F8870
  c->r[0]=R8(c->r[30]+0x00000038u); // 800F8874
  W8(c->r[31]+0x00000038u,c->r[0]); // 800F8878
  c->r[0]=R8(c->r[30]+0x00000039u); // 800F887C
  W8(c->r[31]+0x00000039u,c->r[0]); // 800F8880
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8884
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8888
  c->lr=c->r[0]; // 800F888C
  c->r[1]=c->r[1]+0x00000010u; // 800F8890
  return; // 800F8894
}

// fn_800F8898
void f_800F8898(Ctx* __restrict c) {
  trace_call(0x800F8898u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F8898
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F889C
  c->ctr=c->r[12]; // 800F88A0
  if (true) { dispatch(c,c->ctr); return; } // 800F88A4
}

// fn_800F88A8
void f_800F88A8(Ctx* __restrict c) {
  trace_call(0x800F88A8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F88A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F88AC
  c->ctr=c->r[12]; // 800F88B0
  if (true) { dispatch(c,c->ctr); return; } // 800F88B4
}

// fn_800F88B8
void f_800F88B8(Ctx* __restrict c) {
  trace_call(0x800F88B8u);
  c->r[3]=0u+0x80410000u; // 800F88B8
  c->r[3]=c->r[3]+0xFFFFEE8Fu; // 800F88BC
  return; // 800F88C0
}

// fn_800F88C4
void f_800F88C4(Ctx* __restrict c) {
  trace_call(0x800F88C4u);
  c->r[3]=0u+0x0000003Cu; // 800F88C4
  return; // 800F88C8
}

// fn_800F88CC
void f_800F88CC(Ctx* __restrict c) {
  trace_call(0x800F88CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F88CC
  c->r[0]=c->lr; // 800F88D0
  c->r[3]=0u+0x0000003Cu; // 800F88D4
  c->r[4]=c->r[13]+0xFFFFBB9Du; // 800F88D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F88DC
  c->r[5]=0u+0x00000000u; // 800F88E0
  c->r[6]=0u+0x00001001u; // 800F88E4
  c->lr=0x800F88ECu; f_80244D20(c); // 800F88E8
  cmps(c,0,(int32_t)c->r[3],0); // 800F88EC
  if (crb(c,2)) { goto L_800F88F8; } // 800F88F0
  c->lr=0x800F88F8u; f_800F8790(c); // 800F88F4
L_800F88F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F88F8
  c->lr=c->r[0]; // 800F88FC
  c->r[1]=c->r[1]+0x00000010u; // 800F8900
  return; // 800F8904
}

// fn_800F8908
void f_800F8908(Ctx* __restrict c) {
  trace_call(0x800F8908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8908
  c->r[0]=c->lr; // 800F890C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8914
  c->r[31]=c->r[3]|c->r[3]; // 800F8918
  c->lr=0x800F8920u; f_800D7120(c); // 800F891C
  c->r[5]=0u+0x80410000u; // 800F8920
  c->r[3]=0u+0xC82B0000u; // 800F8924
  c->r[0]=c->r[3]+0xFFFFB339u; // 800F8928
  c->r[4]=0u+0x00000000u; // 800F892C
  c->r[5]=c->r[5]+0x00003EA0u; // 800F8930
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F8934
  c->r[3]=c->r[31]|c->r[31]; // 800F8938
  W32(c->r[31]+0x00000040u,c->r[4]); // 800F893C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F8940
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8944
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8948
  c->lr=c->r[0]; // 800F894C
  c->r[1]=c->r[1]+0x00000010u; // 800F8950
  return; // 800F8954
}

// fn_800F8958
void f_800F8958(Ctx* __restrict c) {
  trace_call(0x800F8958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8958
  c->r[0]=c->lr; // 800F895C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8960
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8964
  c->r[30]=c->r[3]|c->r[3]; // 800F8968
  c->r[31]=c->r[4]|c->r[4]; // 800F896C
  c->lr=0x800F8974u; f_8030D728(c); // 800F8970
  c->r[3]=c->r[31]|c->r[31]; // 800F8974
  c->r[4]=0u+0x00000000u; // 800F8978
  c->lr=0x800F8980u; f_8030BE30(c); // 800F897C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F8980
  c->r[3]=c->r[31]|c->r[31]; // 800F8984
  c->r[4]=0u+0x00000000u; // 800F8988
  c->lr=0x800F8990u; f_8030BE30(c); // 800F898C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F8990
  c->r[3]=c->r[31]|c->r[31]; // 800F8994
  c->r[4]=0u+0x00000000u; // 800F8998
  c->lr=0x800F89A0u; f_8030BE30(c); // 800F899C
  W32(c->r[30]+0x00000038u,c->r[3]); // 800F89A0
  c->r[3]=c->r[31]|c->r[31]; // 800F89A4
  c->lr=0x800F89ACu; f_8030BD1C(c); // 800F89A8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F89AC
  c->r[3]=c->r[31]|c->r[31]; // 800F89B0
  c->lr=0x800F89B8u; f_8030BD1C(c); // 800F89B4
  W8(c->r[30]+0x00000044u,c->r[3]); // 800F89B8
  c->r[3]=c->r[31]|c->r[31]; // 800F89BC
  c->lr=0x800F89C4u; f_8030BD1C(c); // 800F89C0
  W8(c->r[30]+0x00000045u,c->r[3]); // 800F89C4
  c->r[3]=c->r[31]|c->r[31]; // 800F89C8
  c->lr=0x800F89D0u; f_8030BD1C(c); // 800F89CC
  W8(c->r[30]+0x00000046u,c->r[3]); // 800F89D0
  c->r[3]=c->r[31]|c->r[31]; // 800F89D4
  c->lr=0x800F89DCu; f_8030C0A0(c); // 800F89D8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800F89DC
  c->r[3]=c->r[31]|c->r[31]; // 800F89E0
  c->lr=0x800F89E8u; f_8030C0A0(c); // 800F89E4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800F89E8
  c->r[3]=c->r[31]|c->r[31]; // 800F89EC
  c->lr=0x800F89F4u; f_8030C0A0(c); // 800F89F0
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 800F89F4
  c->r[3]=c->r[31]|c->r[31]; // 800F89F8
  c->lr=0x800F8A00u; f_8030C0A0(c); // 800F89FC
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 800F8A00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8A04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8A08
  c->lr=c->r[0]; // 800F8A0C
  c->r[1]=c->r[1]+0x00000010u; // 800F8A10
  return; // 800F8A14
}

// fn_800F8A18
void f_800F8A18(Ctx* __restrict c) {
  trace_call(0x800F8A18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8A18
  c->r[0]=c->lr; // 800F8A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8A20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8A24
  c->r[31]=c->r[4]|c->r[4]; // 800F8A28
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8A2C
  c->r[30]=c->r[3]|c->r[3]; // 800F8A30
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8A34
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F8A38
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F8A3C
  c->r[3]=c->r[4]+0x00000030u; // 800F8A40
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8A44
  c->r[4]=c->r[30]+0x00000030u; // 800F8A48
  c->lr=0x800F8A50u; f_8003F6E4(c); // 800F8A4C
  c->r[3]=c->r[31]+0x00000038u; // 800F8A50
  c->r[4]=c->r[30]+0x00000038u; // 800F8A54
  c->lr=0x800F8A5Cu; f_8003AB48(c); // 800F8A58
  c->r[0]=R8(c->r[30]+0x00000044u); // 800F8A5C
  W8(c->r[31]+0x00000044u,c->r[0]); // 800F8A60
  c->r[0]=R8(c->r[30]+0x00000045u); // 800F8A64
  W8(c->r[31]+0x00000045u,c->r[0]); // 800F8A68
  c->r[0]=R8(c->r[30]+0x00000046u); // 800F8A6C
  W8(c->r[31]+0x00000046u,c->r[0]); // 800F8A70
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8A74
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800F8A78
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8A7C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800F8A80
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8A84
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800F8A88
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F8A8C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800F8A90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8A94
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F8A98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8A9C
  c->lr=c->r[0]; // 800F8AA0
  c->r[1]=c->r[1]+0x00000010u; // 800F8AA4
  return; // 800F8AA8
}

// fn_800F8AAC
void f_800F8AAC(Ctx* __restrict c) {
  trace_call(0x800F8AACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F8AAC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F8AB0
  c->ctr=c->r[12]; // 800F8AB4
  if (true) { dispatch(c,c->ctr); return; } // 800F8AB8
}

// fn_800F8ABC
void f_800F8ABC(Ctx* __restrict c) {
  trace_call(0x800F8ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8ABC
  c->r[0]=c->lr; // 800F8AC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F8AC4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8AC8
  c->r[29]=c->r[3]|c->r[3]; // 800F8ACC
  c->r[30]=c->r[4]|c->r[4]; // 800F8AD0
  c->r[31]=c->r[5]|c->r[5]; // 800F8AD4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800F8AD8
  cmps(c,0,(int32_t)c->r[0],7); // 800F8ADC
  if (!crb(c,0)) { goto L_800F8AF0; } // 800F8AE0
  c->r[4]=c->r[31]|c->r[31]; // 800F8AE4
  c->r[3]=c->r[3]+0x00000038u; // 800F8AE8
  c->lr=0x800F8AF0u; f_8003A994(c); // 800F8AEC
L_800F8AF0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F8AF0
  c->r[3]=c->r[29]|c->r[29]; // 800F8AF4
  c->r[4]=c->r[30]|c->r[30]; // 800F8AF8
  c->r[5]=c->r[31]|c->r[31]; // 800F8AFC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8B00
  c->ctr=c->r[12]; // 800F8B04
  if (true) { c->lr=0x800F8B0Cu; dispatch(c,c->ctr); } // 800F8B08
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8B0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8B10
  c->lr=c->r[0]; // 800F8B14
  c->r[1]=c->r[1]+0x00000020u; // 800F8B18
  return; // 800F8B1C
}

// fn_800F8B20
void f_800F8B20(Ctx* __restrict c) {
  trace_call(0x800F8B20u);
  c->r[3]=0u+0x80410000u; // 800F8B20
  c->r[3]=c->r[3]+0xFFFFEE9Du; // 800F8B24
  return; // 800F8B28
}

// fn_800F8B2C
void f_800F8B2C(Ctx* __restrict c) {
  trace_call(0x800F8B2Cu);
  c->r[3]=0u+0x00000058u; // 800F8B2C
  return; // 800F8B30
}

// fn_800F8B34
void f_800F8B34(Ctx* __restrict c) {
  trace_call(0x800F8B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8B34
  c->r[0]=c->lr; // 800F8B38
  c->r[3]=0u+0x00000058u; // 800F8B3C
  c->r[4]=c->r[13]+0xFFFFBBA2u; // 800F8B40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8B44
  c->r[5]=0u+0x00000000u; // 800F8B48
  c->r[6]=0u+0x00001001u; // 800F8B4C
  c->lr=0x800F8B54u; f_80244D20(c); // 800F8B50
  cmps(c,0,(int32_t)c->r[3],0); // 800F8B54
  if (crb(c,2)) { goto L_800F8B60; } // 800F8B58
  c->lr=0x800F8B60u; f_800F8908(c); // 800F8B5C
L_800F8B60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8B60
  c->lr=c->r[0]; // 800F8B64
  c->r[1]=c->r[1]+0x00000010u; // 800F8B68
  return; // 800F8B6C
}

// fn_800F8B70
void f_800F8B70(Ctx* __restrict c) {
  trace_call(0x800F8B70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8B70
  c->r[0]=c->lr; // 800F8B74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8B78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8B7C
  c->r[31]=c->r[3]|c->r[3]; // 800F8B80
  c->lr=0x800F8B88u; f_800D7120(c); // 800F8B84
  c->r[4]=0u+0x80410000u; // 800F8B88
  c->r[3]=0u+0xF9EB0000u; // 800F8B8C
  c->r[0]=c->r[3]+0xFFFF980Au; // 800F8B90
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F8B94
  c->r[4]=c->r[4]+0x00003E6Cu; // 800F8B98
  c->r[3]=c->r[31]|c->r[31]; // 800F8B9C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F8BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8BA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8BA8
  c->lr=c->r[0]; // 800F8BAC
  c->r[1]=c->r[1]+0x00000010u; // 800F8BB0
  return; // 800F8BB4
}

// fn_800F8BB8
void f_800F8BB8(Ctx* __restrict c) {
  trace_call(0x800F8BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8BB8
  c->r[0]=c->lr; // 800F8BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8BC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8BC4
  c->r[30]=c->r[3]|c->r[3]; // 800F8BC8
  c->r[31]=c->r[4]|c->r[4]; // 800F8BCC
  c->lr=0x800F8BD4u; f_8030D728(c); // 800F8BD0
  c->r[3]=c->r[31]|c->r[31]; // 800F8BD4
  c->r[4]=c->r[30]+0x00000030u; // 800F8BD8
  c->r[5]=0u+0x00000000u; // 800F8BDC
  c->lr=0x800F8BE4u; f_8030B7F0(c); // 800F8BE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8BE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8BE8
  c->lr=c->r[0]; // 800F8BEC
  c->r[1]=c->r[1]+0x00000010u; // 800F8BF0
  return; // 800F8BF4
}

// fn_800F8BF8
void f_800F8BF8(Ctx* __restrict c) {
  trace_call(0x800F8BF8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8BF8
  c->r[5]=c->r[3]|c->r[3]; // 800F8BFC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F8C00
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F8C04
  c->r[3]=c->r[4]+0x00000030u; // 800F8C08
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8C0C
  c->r[4]=c->r[5]+0x00000030u; // 800F8C10
  f_803A6F10(c); return; // 800F8C14
}

// fn_800F8C18
void f_800F8C18(Ctx* __restrict c) {
  trace_call(0x800F8C18u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F8C18
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F8C1C
  c->ctr=c->r[12]; // 800F8C20
  if (true) { dispatch(c,c->ctr); return; } // 800F8C24
}

// fn_800F8C28
void f_800F8C28(Ctx* __restrict c) {
  trace_call(0x800F8C28u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F8C28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8C2C
  c->ctr=c->r[12]; // 800F8C30
  if (true) { dispatch(c,c->ctr); return; } // 800F8C34
}

// fn_800F8C38
void f_800F8C38(Ctx* __restrict c) {
  trace_call(0x800F8C38u);
  c->r[3]=0u+0x80410000u; // 800F8C38
  c->r[3]=c->r[3]+0xFFFFEEABu; // 800F8C3C
  return; // 800F8C40
}

// fn_800F8C44
void f_800F8C44(Ctx* __restrict c) {
  trace_call(0x800F8C44u);
  c->r[3]=0u+0x00000050u; // 800F8C44
  return; // 800F8C48
}

// fn_800F8C4C
void f_800F8C4C(Ctx* __restrict c) {
  trace_call(0x800F8C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8C4C
  c->r[0]=c->lr; // 800F8C50
  c->r[3]=0u+0x00000050u; // 800F8C54
  c->r[4]=c->r[13]+0xFFFFBBA7u; // 800F8C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8C5C
  c->r[5]=0u+0x00000000u; // 800F8C60
  c->r[6]=0u+0x00001001u; // 800F8C64
  c->lr=0x800F8C6Cu; f_80244D20(c); // 800F8C68
  cmps(c,0,(int32_t)c->r[3],0); // 800F8C6C
  if (crb(c,2)) { goto L_800F8C78; } // 800F8C70
  c->lr=0x800F8C78u; f_800F8B70(c); // 800F8C74
L_800F8C78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8C78
  c->lr=c->r[0]; // 800F8C7C
  c->r[1]=c->r[1]+0x00000010u; // 800F8C80
  return; // 800F8C84
}

// fn_800F8C88
void f_800F8C88(Ctx* __restrict c) {
  trace_call(0x800F8C88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8C88
  c->r[0]=c->lr; // 800F8C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8C90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8C94
  c->r[31]=c->r[3]|c->r[3]; // 800F8C98
  c->lr=0x800F8CA0u; f_800D7120(c); // 800F8C9C
  c->r[4]=0u+0x80410000u; // 800F8CA0
  c->r[3]=0u+0x68970000u; // 800F8CA4
  c->r[0]=c->r[3]+0xFFFFF5E7u; // 800F8CA8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F8CAC
  c->r[4]=c->r[4]+0x00003E38u; // 800F8CB0
  c->r[3]=c->r[31]|c->r[31]; // 800F8CB4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F8CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8CBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8CC0
  c->lr=c->r[0]; // 800F8CC4
  c->r[1]=c->r[1]+0x00000010u; // 800F8CC8
  return; // 800F8CCC
}

// fn_800F8CD0
void f_800F8CD0(Ctx* __restrict c) {
  trace_call(0x800F8CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8CD0
  c->r[0]=c->lr; // 800F8CD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8CD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8CDC
  c->r[30]=c->r[3]|c->r[3]; // 800F8CE0
  c->r[31]=c->r[4]|c->r[4]; // 800F8CE4
  c->lr=0x800F8CECu; f_8030D728(c); // 800F8CE8
  c->r[3]=c->r[31]|c->r[31]; // 800F8CEC
  c->r[4]=c->r[30]+0x00000030u; // 800F8CF0
  c->r[5]=0u+0x00000000u; // 800F8CF4
  c->lr=0x800F8CFCu; f_8030B7F0(c); // 800F8CF8
  c->r[3]=c->r[31]|c->r[31]; // 800F8CFC
  c->lr=0x800F8D04u; f_8030BD1C(c); // 800F8D00
  W8(c->r[30]+0x00000050u,c->r[3]); // 800F8D04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8D08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8D0C
  c->lr=c->r[0]; // 800F8D10
  c->r[1]=c->r[1]+0x00000010u; // 800F8D14
  return; // 800F8D18
}

// fn_800F8D1C
void f_800F8D1C(Ctx* __restrict c) {
  trace_call(0x800F8D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8D1C
  c->r[0]=c->lr; // 800F8D20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8D24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8D28
  c->r[30]=c->r[3]|c->r[3]; // 800F8D2C
  c->r[31]=c->r[4]|c->r[4]; // 800F8D30
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8D34
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F8D38
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F8D3C
  c->r[3]=c->r[4]+0x00000030u; // 800F8D40
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8D44
  c->r[4]=c->r[30]+0x00000030u; // 800F8D48
  c->lr=0x800F8D50u; f_803A6F10(c); // 800F8D4C
  c->r[0]=R8(c->r[30]+0x00000050u); // 800F8D50
  W8(c->r[31]+0x00000050u,c->r[0]); // 800F8D54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8D5C
  c->lr=c->r[0]; // 800F8D60
  c->r[1]=c->r[1]+0x00000010u; // 800F8D64
  return; // 800F8D68
}

// fn_800F8D6C
void f_800F8D6C(Ctx* __restrict c) {
  trace_call(0x800F8D6Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F8D6C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F8D70
  c->ctr=c->r[12]; // 800F8D74
  if (true) { dispatch(c,c->ctr); return; } // 800F8D78
}

// fn_800F8D7C
void f_800F8D7C(Ctx* __restrict c) {
  trace_call(0x800F8D7Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F8D7C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8D80
  c->ctr=c->r[12]; // 800F8D84
  if (true) { dispatch(c,c->ctr); return; } // 800F8D88
}

// fn_800F8D8C
void f_800F8D8C(Ctx* __restrict c) {
  trace_call(0x800F8D8Cu);
  c->r[3]=0u+0x80410000u; // 800F8D8C
  c->r[3]=c->r[3]+0xFFFFEEBCu; // 800F8D90
  return; // 800F8D94
}

// fn_800F8D98
void f_800F8D98(Ctx* __restrict c) {
  trace_call(0x800F8D98u);
  c->r[3]=0u+0x00000054u; // 800F8D98
  return; // 800F8D9C
}

// fn_800F8DA0
void f_800F8DA0(Ctx* __restrict c) {
  trace_call(0x800F8DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8DA0
  c->r[0]=c->lr; // 800F8DA4
  c->r[3]=0u+0x00000054u; // 800F8DA8
  c->r[4]=c->r[13]+0xFFFFBBACu; // 800F8DAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8DB0
  c->r[5]=0u+0x00000000u; // 800F8DB4
  c->r[6]=0u+0x00001001u; // 800F8DB8
  c->lr=0x800F8DC0u; f_80244D20(c); // 800F8DBC
  cmps(c,0,(int32_t)c->r[3],0); // 800F8DC0
  if (crb(c,2)) { goto L_800F8DCC; } // 800F8DC4
  c->lr=0x800F8DCCu; f_800F8C88(c); // 800F8DC8
L_800F8DCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8DCC
  c->lr=c->r[0]; // 800F8DD0
  c->r[1]=c->r[1]+0x00000010u; // 800F8DD4
  return; // 800F8DD8
}

// fn_800F8DDC
void f_800F8DDC(Ctx* __restrict c) {
  trace_call(0x800F8DDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8DDC
  c->r[0]=c->lr; // 800F8DE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8DE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8DE8
  c->r[31]=c->r[3]|c->r[3]; // 800F8DEC
  c->lr=0x800F8DF4u; f_800D7120(c); // 800F8DF0
  c->r[5]=0u+0x80410000u; // 800F8DF4
  c->r[3]=0u+0x999E0000u; // 800F8DF8
  c->r[0]=c->r[3]+0x0000236Eu; // 800F8DFC
  c->r[4]=0u+0x00000000u; // 800F8E00
  c->r[5]=c->r[5]+0x00003E04u; // 800F8E04
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F8E08
  c->r[3]=c->r[31]|c->r[31]; // 800F8E0C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F8E10
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F8E14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8E18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8E1C
  c->lr=c->r[0]; // 800F8E20
  c->r[1]=c->r[1]+0x00000010u; // 800F8E24
  return; // 800F8E28
}

// fn_800F8E2C
void f_800F8E2C(Ctx* __restrict c) {
  trace_call(0x800F8E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8E2C
  c->r[0]=c->lr; // 800F8E30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8E34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8E38
  c->r[30]=c->r[3]|c->r[3]; // 800F8E3C
  c->r[31]=c->r[4]|c->r[4]; // 800F8E40
  c->lr=0x800F8E48u; f_8030D728(c); // 800F8E44
  c->r[3]=c->r[31]|c->r[31]; // 800F8E48
  c->r[4]=0u+0x00000000u; // 800F8E4C
  c->lr=0x800F8E54u; f_8030BE30(c); // 800F8E50
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F8E54
  c->r[3]=c->r[31]|c->r[31]; // 800F8E58
  c->lr=0x800F8E60u; f_8030BD1C(c); // 800F8E5C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F8E60
  c->r[3]=c->r[31]|c->r[31]; // 800F8E64
  c->lr=0x800F8E6Cu; f_8030BD1C(c); // 800F8E68
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F8E6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8E70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8E74
  c->lr=c->r[0]; // 800F8E78
  c->r[1]=c->r[1]+0x00000010u; // 800F8E7C
  return; // 800F8E80
}

// fn_800F8E84
void f_800F8E84(Ctx* __restrict c) {
  trace_call(0x800F8E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8E84
  c->r[0]=c->lr; // 800F8E88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8E8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8E90
  c->r[30]=c->r[3]|c->r[3]; // 800F8E94
  c->r[31]=c->r[4]|c->r[4]; // 800F8E98
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8E9C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F8EA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F8EA4
  c->r[3]=c->r[4]+0x00000030u; // 800F8EA8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F8EAC
  c->r[4]=c->r[30]+0x00000030u; // 800F8EB0
  c->lr=0x800F8EB8u; f_8003AB48(c); // 800F8EB4
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F8EB8
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F8EBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8EC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8EC4
  c->lr=c->r[0]; // 800F8EC8
  c->r[1]=c->r[1]+0x00000010u; // 800F8ECC
  return; // 800F8ED0
}

// fn_800F8ED4
void f_800F8ED4(Ctx* __restrict c) {
  trace_call(0x800F8ED4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F8ED4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F8ED8
  c->ctr=c->r[12]; // 800F8EDC
  if (true) { dispatch(c,c->ctr); return; } // 800F8EE0
}

// fn_800F8EE4
void f_800F8EE4(Ctx* __restrict c) {
  trace_call(0x800F8EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8EE4
  c->r[0]=c->lr; // 800F8EE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F8EEC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8EF0
  c->r[29]=c->r[3]|c->r[3]; // 800F8EF4
  c->r[30]=c->r[4]|c->r[4]; // 800F8EF8
  c->r[31]=c->r[5]|c->r[5]; // 800F8EFC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F8F00
  cmps(c,0,(int32_t)c->r[0],7); // 800F8F04
  if (!crb(c,0)) { goto L_800F8F18; } // 800F8F08
  c->r[4]=c->r[31]|c->r[31]; // 800F8F0C
  c->r[3]=c->r[3]+0x00000030u; // 800F8F10
  c->lr=0x800F8F18u; f_8003A994(c); // 800F8F14
L_800F8F18:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F8F18
  c->r[3]=c->r[29]|c->r[29]; // 800F8F1C
  c->r[4]=c->r[30]|c->r[30]; // 800F8F20
  c->r[5]=c->r[31]|c->r[31]; // 800F8F24
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F8F28
  c->ctr=c->r[12]; // 800F8F2C
  if (true) { c->lr=0x800F8F34u; dispatch(c,c->ctr); } // 800F8F30
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F8F34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8F38
  c->lr=c->r[0]; // 800F8F3C
  c->r[1]=c->r[1]+0x00000020u; // 800F8F40
  return; // 800F8F44
}

// fn_800F8F48
void f_800F8F48(Ctx* __restrict c) {
  trace_call(0x800F8F48u);
  c->r[3]=0u+0x80410000u; // 800F8F48
  c->r[3]=c->r[3]+0xFFFFEECEu; // 800F8F4C
  return; // 800F8F50
}

// fn_800F8F54
void f_800F8F54(Ctx* __restrict c) {
  trace_call(0x800F8F54u);
  c->r[3]=0u+0x00000040u; // 800F8F54
  return; // 800F8F58
}

// fn_800F8F5C
void f_800F8F5C(Ctx* __restrict c) {
  trace_call(0x800F8F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8F5C
  c->r[0]=c->lr; // 800F8F60
  c->r[3]=0u+0x00000040u; // 800F8F64
  c->r[4]=c->r[13]+0xFFFFBBB1u; // 800F8F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8F6C
  c->r[5]=0u+0x00000000u; // 800F8F70
  c->r[6]=0u+0x00001001u; // 800F8F74
  c->lr=0x800F8F7Cu; f_80244D20(c); // 800F8F78
  cmps(c,0,(int32_t)c->r[3],0); // 800F8F7C
  if (crb(c,2)) { goto L_800F8F88; } // 800F8F80
  c->lr=0x800F8F88u; f_800F8DDC(c); // 800F8F84
L_800F8F88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8F88
  c->lr=c->r[0]; // 800F8F8C
  c->r[1]=c->r[1]+0x00000010u; // 800F8F90
  return; // 800F8F94
}

// fn_800F8F98
void f_800F8F98(Ctx* __restrict c) {
  trace_call(0x800F8F98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8F98
  c->r[0]=c->lr; // 800F8F9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8FA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8FA4
  c->r[31]=c->r[3]|c->r[3]; // 800F8FA8
  c->lr=0x800F8FB0u; f_800D7120(c); // 800F8FAC
  c->r[4]=0u+0x80410000u; // 800F8FB0
  c->r[3]=0u+0x09690000u; // 800F8FB4
  c->r[0]=c->r[3]+0xFFFFAE82u; // 800F8FB8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F8FBC
  c->r[4]=c->r[4]+0x00003DD0u; // 800F8FC0
  c->r[3]=c->r[31]|c->r[31]; // 800F8FC4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F8FC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8FCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8FD0
  c->lr=c->r[0]; // 800F8FD4
  c->r[1]=c->r[1]+0x00000010u; // 800F8FD8
  return; // 800F8FDC
}

// fn_800F8FE0
void f_800F8FE0(Ctx* __restrict c) {
  trace_call(0x800F8FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8FE0
  c->r[0]=c->lr; // 800F8FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8FE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F8FEC
  c->r[30]=c->r[3]|c->r[3]; // 800F8FF0
  c->r[31]=c->r[4]|c->r[4]; // 800F8FF4
  c->lr=0x800F8FFCu; f_8030D728(c); // 800F8FF8
  c->r[3]=c->r[31]|c->r[31]; // 800F8FFC
  c->lr=0x800F9004u; f_8030BD1C(c); // 800F9000
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9004
  c->r[3]=c->r[31]|c->r[31]; // 800F9008
  c->lr=0x800F9010u; f_8030BD1C(c); // 800F900C
  W8(c->r[30]+0x00000034u,c->r[3]); // 800F9010
  c->r[3]=c->r[31]|c->r[31]; // 800F9014
  c->lr=0x800F901Cu; f_8030BD1C(c); // 800F9018
  W8(c->r[30]+0x00000035u,c->r[3]); // 800F901C
  c->r[3]=c->r[31]|c->r[31]; // 800F9020
  c->lr=0x800F9028u; f_8030BD1C(c); // 800F9024
  W8(c->r[30]+0x00000036u,c->r[3]); // 800F9028
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F902C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9030
  c->lr=c->r[0]; // 800F9034
  c->r[1]=c->r[1]+0x00000010u; // 800F9038
  return; // 800F903C
}

// fn_800F9040
void f_800F9040(Ctx* __restrict c) {
  trace_call(0x800F9040u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 800F9040
  c->r[8]=R32(c->r[3]+0x00000004u); // 800F9044
  c->r[7]=R32(c->r[3]+0x00000030u); // 800F9048
  c->r[6]=R8(c->r[3]+0x00000034u); // 800F904C
  c->r[5]=R8(c->r[3]+0x00000035u); // 800F9050
  c->r[0]=R8(c->r[3]+0x00000036u); // 800F9054
  W32(c->r[4]+0x00000000u,c->r[9]); // 800F9058
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F905C
  W32(c->r[4]+0x00000030u,c->r[7]); // 800F9060
  W8(c->r[4]+0x00000034u,c->r[6]); // 800F9064
  W8(c->r[4]+0x00000035u,c->r[5]); // 800F9068
  W8(c->r[4]+0x00000036u,c->r[0]); // 800F906C
  return; // 800F9070
}

// fn_800F9074
void f_800F9074(Ctx* __restrict c) {
  trace_call(0x800F9074u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9074
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F9078
  c->ctr=c->r[12]; // 800F907C
  if (true) { dispatch(c,c->ctr); return; } // 800F9080
}

// fn_800F9084
void f_800F9084(Ctx* __restrict c) {
  trace_call(0x800F9084u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9084
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F9088
  c->ctr=c->r[12]; // 800F908C
  if (true) { dispatch(c,c->ctr); return; } // 800F9090
}

// fn_800F9094
void f_800F9094(Ctx* __restrict c) {
  trace_call(0x800F9094u);
  c->r[3]=0u+0x80410000u; // 800F9094
  c->r[3]=c->r[3]+0xFFFFEEECu; // 800F9098
  return; // 800F909C
}

// fn_800F90A0
void f_800F90A0(Ctx* __restrict c) {
  trace_call(0x800F90A0u);
  c->r[3]=0u+0x00000038u; // 800F90A0
  return; // 800F90A4
}

// fn_800F90A8
void f_800F90A8(Ctx* __restrict c) {
  trace_call(0x800F90A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F90A8
  c->r[0]=c->lr; // 800F90AC
  c->r[3]=0u+0x00000038u; // 800F90B0
  c->r[4]=c->r[13]+0xFFFFBBB6u; // 800F90B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F90B8
  c->r[5]=0u+0x00000000u; // 800F90BC
  c->r[6]=0u+0x00001001u; // 800F90C0
  c->lr=0x800F90C8u; f_80244D20(c); // 800F90C4
  cmps(c,0,(int32_t)c->r[3],0); // 800F90C8
  if (crb(c,2)) { goto L_800F90D4; } // 800F90CC
  c->lr=0x800F90D4u; f_800F8F98(c); // 800F90D0
L_800F90D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F90D4
  c->lr=c->r[0]; // 800F90D8
  c->r[1]=c->r[1]+0x00000010u; // 800F90DC
  return; // 800F90E0
}

// fn_800F90E4
void f_800F90E4(Ctx* __restrict c) {
  trace_call(0x800F90E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F90E4
  c->r[0]=c->lr; // 800F90E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F90EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F90F0
  c->r[31]=c->r[3]|c->r[3]; // 800F90F4
  c->lr=0x800F90FCu; f_800D7120(c); // 800F90F8
  c->r[4]=0u+0x80410000u; // 800F90FC
  c->r[3]=0u+0x09690000u; // 800F9100
  c->r[0]=c->r[3]+0xFFFFAE82u; // 800F9104
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9108
  c->r[4]=c->r[4]+0x00003D9Cu; // 800F910C
  c->r[3]=c->r[31]|c->r[31]; // 800F9110
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F9114
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9118
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F911C
  c->lr=c->r[0]; // 800F9120
  c->r[1]=c->r[1]+0x00000010u; // 800F9124
  return; // 800F9128
}

// fn_800F912C
void f_800F912C(Ctx* __restrict c) {
  trace_call(0x800F912Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F912C
  c->r[0]=c->lr; // 800F9130
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9134
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9138
  c->r[30]=c->r[3]|c->r[3]; // 800F913C
  c->r[31]=c->r[4]|c->r[4]; // 800F9140
  c->lr=0x800F9148u; f_8030D728(c); // 800F9144
  c->r[3]=c->r[31]|c->r[31]; // 800F9148
  c->lr=0x800F9150u; f_8030BD1C(c); // 800F914C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9150
  c->r[3]=c->r[31]|c->r[31]; // 800F9154
  c->lr=0x800F915Cu; f_8030BD1C(c); // 800F9158
  W8(c->r[30]+0x00000034u,c->r[3]); // 800F915C
  c->r[3]=c->r[31]|c->r[31]; // 800F9160
  c->lr=0x800F9168u; f_8030BD1C(c); // 800F9164
  W8(c->r[30]+0x00000035u,c->r[3]); // 800F9168
  c->r[3]=c->r[31]|c->r[31]; // 800F916C
  c->lr=0x800F9174u; f_8030BD1C(c); // 800F9170
  W8(c->r[30]+0x00000036u,c->r[3]); // 800F9174
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F917C
  c->lr=c->r[0]; // 800F9180
  c->r[1]=c->r[1]+0x00000010u; // 800F9184
  return; // 800F9188
}

// fn_800F918C
void f_800F918C(Ctx* __restrict c) {
  trace_call(0x800F918Cu);
  c->r[9]=R32(c->r[3]+0x00000000u); // 800F918C
  c->r[8]=R32(c->r[3]+0x00000004u); // 800F9190
  c->r[7]=R32(c->r[3]+0x00000030u); // 800F9194
  c->r[6]=R8(c->r[3]+0x00000034u); // 800F9198
  c->r[5]=R8(c->r[3]+0x00000035u); // 800F919C
  c->r[0]=R8(c->r[3]+0x00000036u); // 800F91A0
  W32(c->r[4]+0x00000000u,c->r[9]); // 800F91A4
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F91A8
  W32(c->r[4]+0x00000030u,c->r[7]); // 800F91AC
  W8(c->r[4]+0x00000034u,c->r[6]); // 800F91B0
  W8(c->r[4]+0x00000035u,c->r[5]); // 800F91B4
  W8(c->r[4]+0x00000036u,c->r[0]); // 800F91B8
  return; // 800F91BC
}

// fn_800F91C0
void f_800F91C0(Ctx* __restrict c) {
  trace_call(0x800F91C0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F91C0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F91C4
  c->ctr=c->r[12]; // 800F91C8
  if (true) { dispatch(c,c->ctr); return; } // 800F91CC
}

// fn_800F91D0
void f_800F91D0(Ctx* __restrict c) {
  trace_call(0x800F91D0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F91D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F91D4
  c->ctr=c->r[12]; // 800F91D8
  if (true) { dispatch(c,c->ctr); return; } // 800F91DC
}

// fn_800F91E0
void f_800F91E0(Ctx* __restrict c) {
  trace_call(0x800F91E0u);
  c->r[3]=0u+0x80410000u; // 800F91E0
  c->r[3]=c->r[3]+0xFFFFEF00u; // 800F91E4
  return; // 800F91E8
}

// fn_800F91EC
void f_800F91EC(Ctx* __restrict c) {
  trace_call(0x800F91ECu);
  c->r[3]=0u+0x00000038u; // 800F91EC
  return; // 800F91F0
}

// fn_800F91F4
void f_800F91F4(Ctx* __restrict c) {
  trace_call(0x800F91F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F91F4
  c->r[0]=c->lr; // 800F91F8
  c->r[3]=0u+0x00000038u; // 800F91FC
  c->r[4]=c->r[13]+0xFFFFBBBBu; // 800F9200
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9204
  c->r[5]=0u+0x00000000u; // 800F9208
  c->r[6]=0u+0x00001001u; // 800F920C
  c->lr=0x800F9214u; f_80244D20(c); // 800F9210
  cmps(c,0,(int32_t)c->r[3],0); // 800F9214
  if (crb(c,2)) { goto L_800F9220; } // 800F9218
  c->lr=0x800F9220u; f_800F90E4(c); // 800F921C
L_800F9220:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9220
  c->lr=c->r[0]; // 800F9224
  c->r[1]=c->r[1]+0x00000010u; // 800F9228
  return; // 800F922C
}

// fn_800F9230
void f_800F9230(Ctx* __restrict c) {
  trace_call(0x800F9230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9230
  c->r[0]=c->lr; // 800F9234
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9238
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F923C
  c->r[31]=c->r[3]|c->r[3]; // 800F9240
  c->lr=0x800F9248u; f_800D7120(c); // 800F9244
  c->r[4]=0u+0x80410000u; // 800F9248
  c->r[3]=0u+0x09690000u; // 800F924C
  c->r[0]=c->r[3]+0xFFFFAE82u; // 800F9250
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9254
  c->r[4]=c->r[4]+0x00003D68u; // 800F9258
  c->r[3]=c->r[31]|c->r[31]; // 800F925C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F9260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9264
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9268
  c->lr=c->r[0]; // 800F926C
  c->r[1]=c->r[1]+0x00000010u; // 800F9270
  return; // 800F9274
}

// fn_800F9278
void f_800F9278(Ctx* __restrict c) {
  trace_call(0x800F9278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9278
  c->r[0]=c->lr; // 800F927C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9280
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9284
  c->r[30]=c->r[3]|c->r[3]; // 800F9288
  c->r[31]=c->r[4]|c->r[4]; // 800F928C
  c->lr=0x800F9294u; f_8030D728(c); // 800F9290
  c->r[3]=c->r[31]|c->r[31]; // 800F9294
  c->lr=0x800F929Cu; f_8030BD1C(c); // 800F9298
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F929C
  c->r[3]=c->r[31]|c->r[31]; // 800F92A0
  c->lr=0x800F92A8u; f_8030BD1C(c); // 800F92A4
  W8(c->r[30]+0x00000034u,c->r[3]); // 800F92A8
  c->r[3]=c->r[31]|c->r[31]; // 800F92AC
  c->lr=0x800F92B4u; f_8030BD1C(c); // 800F92B0
  W8(c->r[30]+0x00000035u,c->r[3]); // 800F92B4
  c->r[3]=c->r[31]|c->r[31]; // 800F92B8
  c->lr=0x800F92C0u; f_8030BD1C(c); // 800F92BC
  W8(c->r[30]+0x00000036u,c->r[3]); // 800F92C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F92C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F92C8
  c->lr=c->r[0]; // 800F92CC
  c->r[1]=c->r[1]+0x00000010u; // 800F92D0
  return; // 800F92D4
}

// fn_800F92D8
void f_800F92D8(Ctx* __restrict c) {
  trace_call(0x800F92D8u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 800F92D8
  c->r[8]=R32(c->r[3]+0x00000004u); // 800F92DC
  c->r[7]=R32(c->r[3]+0x00000030u); // 800F92E0
  c->r[6]=R8(c->r[3]+0x00000034u); // 800F92E4
  c->r[5]=R8(c->r[3]+0x00000035u); // 800F92E8
  c->r[0]=R8(c->r[3]+0x00000036u); // 800F92EC
  W32(c->r[4]+0x00000000u,c->r[9]); // 800F92F0
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F92F4
  W32(c->r[4]+0x00000030u,c->r[7]); // 800F92F8
  W8(c->r[4]+0x00000034u,c->r[6]); // 800F92FC
  W8(c->r[4]+0x00000035u,c->r[5]); // 800F9300
  W8(c->r[4]+0x00000036u,c->r[0]); // 800F9304
  return; // 800F9308
}

// fn_800F930C
void f_800F930C(Ctx* __restrict c) {
  trace_call(0x800F930Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F930C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F9310
  c->ctr=c->r[12]; // 800F9314
  if (true) { dispatch(c,c->ctr); return; } // 800F9318
}

// fn_800F931C
void f_800F931C(Ctx* __restrict c) {
  trace_call(0x800F931Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F931C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F9320
  c->ctr=c->r[12]; // 800F9324
  if (true) { dispatch(c,c->ctr); return; } // 800F9328
}

// fn_800F932C
void f_800F932C(Ctx* __restrict c) {
  trace_call(0x800F932Cu);
  c->r[3]=0u+0x80410000u; // 800F932C
  c->r[3]=c->r[3]+0xFFFFEF13u; // 800F9330
  return; // 800F9334
}

// fn_800F9338
void f_800F9338(Ctx* __restrict c) {
  trace_call(0x800F9338u);
  c->r[3]=0u+0x00000038u; // 800F9338
  return; // 800F933C
}

// fn_800F9340
void f_800F9340(Ctx* __restrict c) {
  trace_call(0x800F9340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9340
  c->r[0]=c->lr; // 800F9344
  c->r[3]=0u+0x00000038u; // 800F9348
  c->r[4]=c->r[13]+0xFFFFBBC0u; // 800F934C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9350
  c->r[5]=0u+0x00000000u; // 800F9354
  c->r[6]=0u+0x00001001u; // 800F9358
  c->lr=0x800F9360u; f_80244D20(c); // 800F935C
  cmps(c,0,(int32_t)c->r[3],0); // 800F9360
  if (crb(c,2)) { goto L_800F936C; } // 800F9364
  c->lr=0x800F936Cu; f_800F9230(c); // 800F9368
L_800F936C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F936C
  c->lr=c->r[0]; // 800F9370
  c->r[1]=c->r[1]+0x00000010u; // 800F9374
  return; // 800F9378
}

// fn_800F937C
void f_800F937C(Ctx* __restrict c) {
  trace_call(0x800F937Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F937C
  c->r[0]=c->lr; // 800F9380
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9388
  c->r[31]=c->r[3]|c->r[3]; // 800F938C
  c->lr=0x800F9394u; f_800D7120(c); // 800F9390
  c->r[4]=0u+0x80410000u; // 800F9394
  c->r[3]=0u+0x09690000u; // 800F9398
  c->r[0]=c->r[3]+0xFFFFAE82u; // 800F939C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F93A0
  c->r[4]=c->r[4]+0x00003D34u; // 800F93A4
  c->r[3]=c->r[31]|c->r[31]; // 800F93A8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F93AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F93B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F93B4
  c->lr=c->r[0]; // 800F93B8
  c->r[1]=c->r[1]+0x00000010u; // 800F93BC
  return; // 800F93C0
}

// fn_800F93C4
void f_800F93C4(Ctx* __restrict c) {
  trace_call(0x800F93C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F93C4
  c->r[0]=c->lr; // 800F93C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F93CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F93D0
  c->r[30]=c->r[3]|c->r[3]; // 800F93D4
  c->r[31]=c->r[4]|c->r[4]; // 800F93D8
  c->lr=0x800F93E0u; f_8030D728(c); // 800F93DC
  c->r[3]=c->r[31]|c->r[31]; // 800F93E0
  c->lr=0x800F93E8u; f_8030BD1C(c); // 800F93E4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F93E8
  c->r[3]=c->r[31]|c->r[31]; // 800F93EC
  c->lr=0x800F93F4u; f_8030BD1C(c); // 800F93F0
  W8(c->r[30]+0x00000034u,c->r[3]); // 800F93F4
  c->r[3]=c->r[31]|c->r[31]; // 800F93F8
  c->lr=0x800F9400u; f_8030BD1C(c); // 800F93FC
  W8(c->r[30]+0x00000035u,c->r[3]); // 800F9400
  c->r[3]=c->r[31]|c->r[31]; // 800F9404
  c->lr=0x800F940Cu; f_8030BD1C(c); // 800F9408
  W8(c->r[30]+0x00000036u,c->r[3]); // 800F940C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9410
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9414
  c->lr=c->r[0]; // 800F9418
  c->r[1]=c->r[1]+0x00000010u; // 800F941C
  return; // 800F9420
}

// fn_800F9424
void f_800F9424(Ctx* __restrict c) {
  trace_call(0x800F9424u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 800F9424
  c->r[8]=R32(c->r[3]+0x00000004u); // 800F9428
  c->r[7]=R32(c->r[3]+0x00000030u); // 800F942C
  c->r[6]=R8(c->r[3]+0x00000034u); // 800F9430
  c->r[5]=R8(c->r[3]+0x00000035u); // 800F9434
  c->r[0]=R8(c->r[3]+0x00000036u); // 800F9438
  W32(c->r[4]+0x00000000u,c->r[9]); // 800F943C
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F9440
  W32(c->r[4]+0x00000030u,c->r[7]); // 800F9444
  W8(c->r[4]+0x00000034u,c->r[6]); // 800F9448
  W8(c->r[4]+0x00000035u,c->r[5]); // 800F944C
  W8(c->r[4]+0x00000036u,c->r[0]); // 800F9450
  return; // 800F9454
}

// fn_800F9458
void f_800F9458(Ctx* __restrict c) {
  trace_call(0x800F9458u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9458
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F945C
  c->ctr=c->r[12]; // 800F9460
  if (true) { dispatch(c,c->ctr); return; } // 800F9464
}

// fn_800F9468
void f_800F9468(Ctx* __restrict c) {
  trace_call(0x800F9468u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9468
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F946C
  c->ctr=c->r[12]; // 800F9470
  if (true) { dispatch(c,c->ctr); return; } // 800F9474
}

// fn_800F9478
void f_800F9478(Ctx* __restrict c) {
  trace_call(0x800F9478u);
  c->r[3]=0u+0x80410000u; // 800F9478
  c->r[3]=c->r[3]+0xFFFFEF21u; // 800F947C
  return; // 800F9480
}

// fn_800F9484
void f_800F9484(Ctx* __restrict c) {
  trace_call(0x800F9484u);
  c->r[3]=0u+0x00000038u; // 800F9484
  return; // 800F9488
}

// fn_800F948C
void f_800F948C(Ctx* __restrict c) {
  trace_call(0x800F948Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F948C
  c->r[0]=c->lr; // 800F9490
  c->r[3]=0u+0x00000038u; // 800F9494
  c->r[4]=c->r[13]+0xFFFFBBC5u; // 800F9498
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F949C
  c->r[5]=0u+0x00000000u; // 800F94A0
  c->r[6]=0u+0x00001001u; // 800F94A4
  c->lr=0x800F94ACu; f_80244D20(c); // 800F94A8
  cmps(c,0,(int32_t)c->r[3],0); // 800F94AC
  if (crb(c,2)) { goto L_800F94B8; } // 800F94B0
  c->lr=0x800F94B8u; f_800F937C(c); // 800F94B4
L_800F94B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F94B8
  c->lr=c->r[0]; // 800F94BC
  c->r[1]=c->r[1]+0x00000010u; // 800F94C0
  return; // 800F94C4
}

// fn_800F94C8
void f_800F94C8(Ctx* __restrict c) {
  trace_call(0x800F94C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F94C8
  c->r[0]=c->lr; // 800F94CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F94D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F94D4
  c->r[31]=c->r[3]|c->r[3]; // 800F94D8
  c->lr=0x800F94E0u; f_800D7120(c); // 800F94DC
  c->r[4]=0u+0x80410000u; // 800F94E0
  c->r[3]=0u+0x09690000u; // 800F94E4
  c->r[0]=c->r[3]+0xFFFFAE82u; // 800F94E8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F94EC
  c->r[4]=c->r[4]+0x00003D00u; // 800F94F0
  c->r[3]=c->r[31]|c->r[31]; // 800F94F4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F94F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F94FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9500
  c->lr=c->r[0]; // 800F9504
  c->r[1]=c->r[1]+0x00000010u; // 800F9508
  return; // 800F950C
}

// fn_800F9510
void f_800F9510(Ctx* __restrict c) {
  trace_call(0x800F9510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9510
  c->r[0]=c->lr; // 800F9514
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9518
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F951C
  c->r[30]=c->r[3]|c->r[3]; // 800F9520
  c->r[31]=c->r[4]|c->r[4]; // 800F9524
  c->lr=0x800F952Cu; f_8030D728(c); // 800F9528
  c->r[3]=c->r[31]|c->r[31]; // 800F952C
  c->lr=0x800F9534u; f_8030BD1C(c); // 800F9530
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9534
  c->r[3]=c->r[31]|c->r[31]; // 800F9538
  c->lr=0x800F9540u; f_8030BD1C(c); // 800F953C
  W8(c->r[30]+0x00000034u,c->r[3]); // 800F9540
  c->r[3]=c->r[31]|c->r[31]; // 800F9544
  c->lr=0x800F954Cu; f_8030BD1C(c); // 800F9548
  W8(c->r[30]+0x00000035u,c->r[3]); // 800F954C
  c->r[3]=c->r[31]|c->r[31]; // 800F9550
  c->lr=0x800F9558u; f_8030BD1C(c); // 800F9554
  W8(c->r[30]+0x00000036u,c->r[3]); // 800F9558
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F955C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9560
  c->lr=c->r[0]; // 800F9564
  c->r[1]=c->r[1]+0x00000010u; // 800F9568
  return; // 800F956C
}

// fn_800F9570
void f_800F9570(Ctx* __restrict c) {
  trace_call(0x800F9570u);
  c->r[9]=R32(c->r[3]+0x00000000u); // 800F9570
  c->r[8]=R32(c->r[3]+0x00000004u); // 800F9574
  c->r[7]=R32(c->r[3]+0x00000030u); // 800F9578
  c->r[6]=R8(c->r[3]+0x00000034u); // 800F957C
  c->r[5]=R8(c->r[3]+0x00000035u); // 800F9580
  c->r[0]=R8(c->r[3]+0x00000036u); // 800F9584
  W32(c->r[4]+0x00000000u,c->r[9]); // 800F9588
  W32(c->r[4]+0x00000004u,c->r[8]); // 800F958C
  W32(c->r[4]+0x00000030u,c->r[7]); // 800F9590
  W8(c->r[4]+0x00000034u,c->r[6]); // 800F9594
  W8(c->r[4]+0x00000035u,c->r[5]); // 800F9598
  W8(c->r[4]+0x00000036u,c->r[0]); // 800F959C
  return; // 800F95A0
}

// fn_800F95A4
void f_800F95A4(Ctx* __restrict c) {
  trace_call(0x800F95A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F95A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F95A8
  c->ctr=c->r[12]; // 800F95AC
  if (true) { dispatch(c,c->ctr); return; } // 800F95B0
}

// fn_800F95B4
void f_800F95B4(Ctx* __restrict c) {
  trace_call(0x800F95B4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F95B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F95B8
  c->ctr=c->r[12]; // 800F95BC
  if (true) { dispatch(c,c->ctr); return; } // 800F95C0
}

// fn_800F95C4
void f_800F95C4(Ctx* __restrict c) {
  trace_call(0x800F95C4u);
  c->r[3]=0u+0x80410000u; // 800F95C4
  c->r[3]=c->r[3]+0xFFFFEF30u; // 800F95C8
  return; // 800F95CC
}

// fn_800F95D0
void f_800F95D0(Ctx* __restrict c) {
  trace_call(0x800F95D0u);
  c->r[3]=0u+0x00000038u; // 800F95D0
  return; // 800F95D4
}

// fn_800F95D8
void f_800F95D8(Ctx* __restrict c) {
  trace_call(0x800F95D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F95D8
  c->r[0]=c->lr; // 800F95DC
  c->r[3]=0u+0x00000038u; // 800F95E0
  c->r[4]=c->r[13]+0xFFFFBBCAu; // 800F95E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F95E8
  c->r[5]=0u+0x00000000u; // 800F95EC
  c->r[6]=0u+0x00001001u; // 800F95F0
  c->lr=0x800F95F8u; f_80244D20(c); // 800F95F4
  cmps(c,0,(int32_t)c->r[3],0); // 800F95F8
  if (crb(c,2)) { goto L_800F9604; } // 800F95FC
  c->lr=0x800F9604u; f_800F94C8(c); // 800F9600
L_800F9604:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9604
  c->lr=c->r[0]; // 800F9608
  c->r[1]=c->r[1]+0x00000010u; // 800F960C
  return; // 800F9610
}

// fn_800F9614
void f_800F9614(Ctx* __restrict c) {
  trace_call(0x800F9614u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9614
  c->r[0]=c->lr; // 800F9618
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F961C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9620
  c->r[31]=c->r[3]|c->r[3]; // 800F9624
  c->lr=0x800F962Cu; f_800D7120(c); // 800F9628
  c->r[4]=0u+0x80410000u; // 800F962C
  c->r[3]=0u+0x30770000u; // 800F9630
  c->r[0]=c->r[3]+0xFFFF9056u; // 800F9634
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9638
  c->r[4]=c->r[4]+0x00003CCCu; // 800F963C
  c->r[3]=c->r[31]|c->r[31]; // 800F9640
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F9644
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9648
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F964C
  c->lr=c->r[0]; // 800F9650
  c->r[1]=c->r[1]+0x00000010u; // 800F9654
  return; // 800F9658
}

// fn_800F965C
void f_800F965C(Ctx* __restrict c) {
  trace_call(0x800F965Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F965C
  c->r[0]=c->lr; // 800F9660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9668
  c->r[30]=c->r[3]|c->r[3]; // 800F966C
  c->r[31]=c->r[4]|c->r[4]; // 800F9670
  c->lr=0x800F9678u; f_8030D728(c); // 800F9674
  c->r[3]=c->r[31]|c->r[31]; // 800F9678
  c->r[4]=c->r[30]+0x00000030u; // 800F967C
  c->r[5]=0u+0x00000000u; // 800F9680
  c->lr=0x800F9688u; f_8030B7F0(c); // 800F9684
  c->r[3]=c->r[31]|c->r[31]; // 800F9688
  c->r[4]=c->r[30]+0x000000B0u; // 800F968C
  c->r[5]=0u+0x00000000u; // 800F9690
  c->lr=0x800F9698u; f_8030B7F0(c); // 800F9694
  c->r[3]=c->r[31]|c->r[31]; // 800F9698
  c->r[4]=c->r[30]+0x00000130u; // 800F969C
  c->r[5]=0u+0x00000000u; // 800F96A0
  c->lr=0x800F96A8u; f_8030B7F0(c); // 800F96A4
  c->r[3]=c->r[31]|c->r[31]; // 800F96A8
  c->r[4]=c->r[30]+0x000001B0u; // 800F96AC
  c->r[5]=0u+0x00000000u; // 800F96B0
  c->lr=0x800F96B8u; f_8030B7F0(c); // 800F96B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F96B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F96BC
  c->lr=c->r[0]; // 800F96C0
  c->r[1]=c->r[1]+0x00000010u; // 800F96C4
  return; // 800F96C8
}

// fn_800F96CC
void f_800F96CC(Ctx* __restrict c) {
  trace_call(0x800F96CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F96CC
  c->r[0]=c->lr; // 800F96D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F96D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F96D8
  c->r[30]=c->r[3]|c->r[3]; // 800F96DC
  c->r[31]=c->r[4]|c->r[4]; // 800F96E0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F96E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F96E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F96EC
  c->r[3]=c->r[4]+0x00000030u; // 800F96F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F96F4
  c->r[4]=c->r[30]+0x00000030u; // 800F96F8
  c->lr=0x800F9700u; f_803A6F10(c); // 800F96FC
  c->r[3]=c->r[31]+0x000000B0u; // 800F9700
  c->r[4]=c->r[30]+0x000000B0u; // 800F9704
  c->lr=0x800F970Cu; f_803A6F10(c); // 800F9708
  c->r[3]=c->r[31]+0x00000130u; // 800F970C
  c->r[4]=c->r[30]+0x00000130u; // 800F9710
  c->lr=0x800F9718u; f_803A6F10(c); // 800F9714
  c->r[3]=c->r[31]+0x000001B0u; // 800F9718
  c->r[4]=c->r[30]+0x000001B0u; // 800F971C
  c->lr=0x800F9724u; f_803A6F10(c); // 800F9720
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9724
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9728
  c->lr=c->r[0]; // 800F972C
  c->r[1]=c->r[1]+0x00000010u; // 800F9730
  return; // 800F9734
}

// fn_800F9738
void f_800F9738(Ctx* __restrict c) {
  trace_call(0x800F9738u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9738
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F973C
  c->ctr=c->r[12]; // 800F9740
  if (true) { dispatch(c,c->ctr); return; } // 800F9744
}

// fn_800F9748
void f_800F9748(Ctx* __restrict c) {
  trace_call(0x800F9748u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9748
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F974C
  c->ctr=c->r[12]; // 800F9750
  if (true) { dispatch(c,c->ctr); return; } // 800F9754
}

// fn_800F9758
void f_800F9758(Ctx* __restrict c) {
  trace_call(0x800F9758u);
  c->r[3]=0u+0x80410000u; // 800F9758
  c->r[3]=c->r[3]+0xFFFFEF40u; // 800F975C
  return; // 800F9760
}

// fn_800F9764
void f_800F9764(Ctx* __restrict c) {
  trace_call(0x800F9764u);
  c->r[3]=0u+0x00000230u; // 800F9764
  return; // 800F9768
}

// fn_800F976C
void f_800F976C(Ctx* __restrict c) {
  trace_call(0x800F976Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F976C
  c->r[0]=c->lr; // 800F9770
  c->r[3]=0u+0x00000230u; // 800F9774
  c->r[4]=c->r[13]+0xFFFFBBCFu; // 800F9778
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F977C
  c->r[5]=0u+0x00000000u; // 800F9780
  c->r[6]=0u+0x00001001u; // 800F9784
  c->lr=0x800F978Cu; f_80244D20(c); // 800F9788
  cmps(c,0,(int32_t)c->r[3],0); // 800F978C
  if (crb(c,2)) { goto L_800F9798; } // 800F9790
  c->lr=0x800F9798u; f_800F9614(c); // 800F9794
L_800F9798:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9798
  c->lr=c->r[0]; // 800F979C
  c->r[1]=c->r[1]+0x00000010u; // 800F97A0
  return; // 800F97A4
}

// fn_800F97A8
void f_800F97A8(Ctx* __restrict c) {
  trace_call(0x800F97A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F97A8
  c->r[0]=c->lr; // 800F97AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F97B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F97B4
  c->r[31]=c->r[3]|c->r[3]; // 800F97B8
  c->lr=0x800F97C0u; f_800D7120(c); // 800F97BC
  c->r[4]=0u+0x80410000u; // 800F97C0
  c->r[3]=0u+0x519D0000u; // 800F97C4
  c->r[0]=c->r[3]+0xFFFFE9CCu; // 800F97C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F97CC
  c->r[4]=c->r[4]+0x00003C98u; // 800F97D0
  c->r[3]=c->r[31]|c->r[31]; // 800F97D4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F97D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F97DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F97E0
  c->lr=c->r[0]; // 800F97E4
  c->r[1]=c->r[1]+0x00000010u; // 800F97E8
  return; // 800F97EC
}

// fn_800F97F0
void f_800F97F0(Ctx* __restrict c) {
  trace_call(0x800F97F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F97F0
  c->r[0]=c->lr; // 800F97F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F97F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F97FC
  c->r[30]=c->r[3]|c->r[3]; // 800F9800
  c->r[31]=c->r[4]|c->r[4]; // 800F9804
  c->lr=0x800F980Cu; f_8030D728(c); // 800F9808
  c->r[3]=c->r[31]|c->r[31]; // 800F980C
  c->r[4]=0u+0x00000000u; // 800F9810
  c->lr=0x800F9818u; f_8030BE30(c); // 800F9814
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9818
  c->r[3]=c->r[31]|c->r[31]; // 800F981C
  c->r[4]=0u+0x00000000u; // 800F9820
  c->lr=0x800F9828u; f_8030BE30(c); // 800F9824
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F9828
  c->r[3]=c->r[31]|c->r[31]; // 800F982C
  c->lr=0x800F9834u; f_8030BD1C(c); // 800F9830
  W8(c->r[30]+0x00000038u,c->r[3]); // 800F9834
  c->r[3]=c->r[31]|c->r[31]; // 800F9838
  c->lr=0x800F9840u; f_8030BD1C(c); // 800F983C
  W8(c->r[30]+0x00000039u,c->r[3]); // 800F9840
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9844
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9848
  c->lr=c->r[0]; // 800F984C
  c->r[1]=c->r[1]+0x00000010u; // 800F9850
  return; // 800F9854
}

// fn_800F9858
void f_800F9858(Ctx* __restrict c) {
  trace_call(0x800F9858u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9858
  c->r[0]=c->lr; // 800F985C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9860
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9864
  c->r[30]=c->r[3]|c->r[3]; // 800F9868
  c->r[31]=c->r[4]|c->r[4]; // 800F986C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F9870
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F9874
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F9878
  c->r[3]=c->r[4]+0x00000030u; // 800F987C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F9880
  c->r[4]=c->r[30]+0x00000030u; // 800F9884
  c->lr=0x800F988Cu; f_8003F6E4(c); // 800F9888
  c->r[0]=R8(c->r[30]+0x00000038u); // 800F988C
  W8(c->r[31]+0x00000038u,c->r[0]); // 800F9890
  c->r[0]=R8(c->r[30]+0x00000039u); // 800F9894
  W8(c->r[31]+0x00000039u,c->r[0]); // 800F9898
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F989C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F98A0
  c->lr=c->r[0]; // 800F98A4
  c->r[1]=c->r[1]+0x00000010u; // 800F98A8
  return; // 800F98AC
}

// fn_800F98B0
void f_800F98B0(Ctx* __restrict c) {
  trace_call(0x800F98B0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F98B0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F98B4
  c->ctr=c->r[12]; // 800F98B8
  if (true) { dispatch(c,c->ctr); return; } // 800F98BC
}

// fn_800F98C0
void f_800F98C0(Ctx* __restrict c) {
  trace_call(0x800F98C0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F98C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F98C4
  c->ctr=c->r[12]; // 800F98C8
  if (true) { dispatch(c,c->ctr); return; } // 800F98CC
}

// fn_800F98D0
void f_800F98D0(Ctx* __restrict c) {
  trace_call(0x800F98D0u);
  c->r[3]=0u+0x80410000u; // 800F98D0
  c->r[3]=c->r[3]+0xFFFFEF53u; // 800F98D4
  return; // 800F98D8
}

// fn_800F98DC
void f_800F98DC(Ctx* __restrict c) {
  trace_call(0x800F98DCu);
  c->r[3]=0u+0x0000003Cu; // 800F98DC
  return; // 800F98E0
}

// fn_800F98E4
void f_800F98E4(Ctx* __restrict c) {
  trace_call(0x800F98E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F98E4
  c->r[0]=c->lr; // 800F98E8
  c->r[3]=0u+0x0000003Cu; // 800F98EC
  c->r[4]=c->r[13]+0xFFFFBBD4u; // 800F98F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F98F4
  c->r[5]=0u+0x00000000u; // 800F98F8
  c->r[6]=0u+0x00001001u; // 800F98FC
  c->lr=0x800F9904u; f_80244D20(c); // 800F9900
  cmps(c,0,(int32_t)c->r[3],0); // 800F9904
  if (crb(c,2)) { goto L_800F9910; } // 800F9908
  c->lr=0x800F9910u; f_800F97A8(c); // 800F990C
L_800F9910:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9910
  c->lr=c->r[0]; // 800F9914
  c->r[1]=c->r[1]+0x00000010u; // 800F9918
  return; // 800F991C
}

// fn_800F9920
void f_800F9920(Ctx* __restrict c) {
  trace_call(0x800F9920u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9920
  c->r[0]=c->lr; // 800F9924
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9928
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F992C
  c->r[31]=c->r[3]|c->r[3]; // 800F9930
  c->lr=0x800F9938u; f_800D7120(c); // 800F9934
  c->r[4]=0u+0x80410000u; // 800F9938
  c->r[3]=0u+0x5E010000u; // 800F993C
  c->r[0]=c->r[3]+0xFFFFEA3Au; // 800F9940
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9944
  c->r[4]=c->r[4]+0x00003C64u; // 800F9948
  c->r[3]=c->r[31]|c->r[31]; // 800F994C
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F9950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9954
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9958
  c->lr=c->r[0]; // 800F995C
  c->r[1]=c->r[1]+0x00000010u; // 800F9960
  return; // 800F9964
}

// fn_800F9968
void f_800F9968(Ctx* __restrict c) {
  trace_call(0x800F9968u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9968
  c->r[0]=c->lr; // 800F996C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9970
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9974
  c->r[30]=c->r[3]|c->r[3]; // 800F9978
  c->r[31]=c->r[4]|c->r[4]; // 800F997C
  c->lr=0x800F9984u; f_8030D728(c); // 800F9980
  c->r[3]=c->r[31]|c->r[31]; // 800F9984
  c->r[4]=0u+0x00000000u; // 800F9988
  c->lr=0x800F9990u; f_8030BE30(c); // 800F998C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9990
  c->r[3]=c->r[31]|c->r[31]; // 800F9994
  c->r[4]=0u+0x00000000u; // 800F9998
  c->lr=0x800F99A0u; f_8030BE30(c); // 800F999C
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F99A0
  c->r[3]=c->r[31]|c->r[31]; // 800F99A4
  c->lr=0x800F99ACu; f_8030BD1C(c); // 800F99A8
  W8(c->r[30]+0x00000038u,c->r[3]); // 800F99AC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F99B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F99B4
  c->lr=c->r[0]; // 800F99B8
  c->r[1]=c->r[1]+0x00000010u; // 800F99BC
  return; // 800F99C0
}

// fn_800F99C4
void f_800F99C4(Ctx* __restrict c) {
  trace_call(0x800F99C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F99C4
  c->r[0]=c->lr; // 800F99C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F99CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F99D0
  c->r[30]=c->r[3]|c->r[3]; // 800F99D4
  c->r[31]=c->r[4]|c->r[4]; // 800F99D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F99DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F99E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F99E4
  c->r[3]=c->r[4]+0x00000030u; // 800F99E8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F99EC
  c->r[4]=c->r[30]+0x00000030u; // 800F99F0
  c->lr=0x800F99F8u; f_8003F6E4(c); // 800F99F4
  c->r[0]=R8(c->r[30]+0x00000038u); // 800F99F8
  W8(c->r[31]+0x00000038u,c->r[0]); // 800F99FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9A00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9A04
  c->lr=c->r[0]; // 800F9A08
  c->r[1]=c->r[1]+0x00000010u; // 800F9A0C
  return; // 800F9A10
}

// fn_800F9A14
void f_800F9A14(Ctx* __restrict c) {
  trace_call(0x800F9A14u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9A14
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F9A18
  c->ctr=c->r[12]; // 800F9A1C
  if (true) { dispatch(c,c->ctr); return; } // 800F9A20
}

// fn_800F9A24
void f_800F9A24(Ctx* __restrict c) {
  trace_call(0x800F9A24u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9A24
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F9A28
  c->ctr=c->r[12]; // 800F9A2C
  if (true) { dispatch(c,c->ctr); return; } // 800F9A30
}

// fn_800F9A34
void f_800F9A34(Ctx* __restrict c) {
  trace_call(0x800F9A34u);
  c->r[3]=0u+0x80410000u; // 800F9A34
  c->r[3]=c->r[3]+0xFFFFEF67u; // 800F9A38
  return; // 800F9A3C
}

// fn_800F9A40
void f_800F9A40(Ctx* __restrict c) {
  trace_call(0x800F9A40u);
  c->r[3]=0u+0x0000003Cu; // 800F9A40
  return; // 800F9A44
}

// fn_800F9A48
void f_800F9A48(Ctx* __restrict c) {
  trace_call(0x800F9A48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9A48
  c->r[0]=c->lr; // 800F9A4C
  c->r[3]=0u+0x0000003Cu; // 800F9A50
  c->r[4]=c->r[13]+0xFFFFBBD9u; // 800F9A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9A58
  c->r[5]=0u+0x00000000u; // 800F9A5C
  c->r[6]=0u+0x00001001u; // 800F9A60
  c->lr=0x800F9A68u; f_80244D20(c); // 800F9A64
  cmps(c,0,(int32_t)c->r[3],0); // 800F9A68
  if (crb(c,2)) { goto L_800F9A74; } // 800F9A6C
  c->lr=0x800F9A74u; f_800F9920(c); // 800F9A70
L_800F9A74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9A74
  c->lr=c->r[0]; // 800F9A78
  c->r[1]=c->r[1]+0x00000010u; // 800F9A7C
  return; // 800F9A80
}

// fn_800F9A84
void f_800F9A84(Ctx* __restrict c) {
  trace_call(0x800F9A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9A84
  c->r[0]=c->lr; // 800F9A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9A8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9A90
  c->r[31]=c->r[3]|c->r[3]; // 800F9A94
  c->lr=0x800F9A9Cu; f_800D7120(c); // 800F9A98
  c->r[5]=0u+0x80410000u; // 800F9A9C
  c->r[3]=0u+0xF9EA0000u; // 800F9AA0
  c->r[0]=c->r[3]+0xFFFF9100u; // 800F9AA4
  c->r[4]=0u+0x00000000u; // 800F9AA8
  c->r[5]=c->r[5]+0x00003C30u; // 800F9AAC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F9AB0
  c->r[3]=c->r[31]|c->r[31]; // 800F9AB4
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F9AB8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9ABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9AC4
  c->lr=c->r[0]; // 800F9AC8
  c->r[1]=c->r[1]+0x00000010u; // 800F9ACC
  return; // 800F9AD0
}

// fn_800F9AD4
void f_800F9AD4(Ctx* __restrict c) {
  trace_call(0x800F9AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9AD4
  c->r[0]=c->lr; // 800F9AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9ADC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9AE0
  c->r[30]=c->r[3]|c->r[3]; // 800F9AE4
  c->r[31]=c->r[4]|c->r[4]; // 800F9AE8
  c->lr=0x800F9AF0u; f_8030D728(c); // 800F9AEC
  c->r[3]=c->r[31]|c->r[31]; // 800F9AF0
  c->r[4]=0u+0x00000000u; // 800F9AF4
  c->lr=0x800F9AFCu; f_8030BE30(c); // 800F9AF8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9AFC
  c->r[3]=c->r[31]|c->r[31]; // 800F9B00
  c->lr=0x800F9B08u; f_8030BD1C(c); // 800F9B04
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F9B08
  c->r[3]=c->r[31]|c->r[31]; // 800F9B0C
  c->lr=0x800F9B14u; f_8030BD1C(c); // 800F9B10
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800F9B14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9B18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9B1C
  c->lr=c->r[0]; // 800F9B20
  c->r[1]=c->r[1]+0x00000010u; // 800F9B24
  return; // 800F9B28
}

// fn_800F9B2C
void f_800F9B2C(Ctx* __restrict c) {
  trace_call(0x800F9B2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9B2C
  c->r[0]=c->lr; // 800F9B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9B34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9B38
  c->r[30]=c->r[3]|c->r[3]; // 800F9B3C
  c->r[31]=c->r[4]|c->r[4]; // 800F9B40
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F9B44
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F9B48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F9B4C
  c->r[3]=c->r[4]+0x00000030u; // 800F9B50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F9B54
  c->r[4]=c->r[30]+0x00000030u; // 800F9B58
  c->lr=0x800F9B60u; f_8003AB48(c); // 800F9B5C
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F9B60
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F9B64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9B68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9B6C
  c->lr=c->r[0]; // 800F9B70
  c->r[1]=c->r[1]+0x00000010u; // 800F9B74
  return; // 800F9B78
}

// fn_800F9B7C
void f_800F9B7C(Ctx* __restrict c) {
  trace_call(0x800F9B7Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9B7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F9B80
  c->ctr=c->r[12]; // 800F9B84
  if (true) { dispatch(c,c->ctr); return; } // 800F9B88
}

// fn_800F9B8C
void f_800F9B8C(Ctx* __restrict c) {
  trace_call(0x800F9B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9B8C
  c->r[0]=c->lr; // 800F9B90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9B94
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9B98
  c->r[29]=c->r[3]|c->r[3]; // 800F9B9C
  c->r[30]=c->r[4]|c->r[4]; // 800F9BA0
  c->r[31]=c->r[5]|c->r[5]; // 800F9BA4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F9BA8
  cmps(c,0,(int32_t)c->r[0],7); // 800F9BAC
  if (!crb(c,0)) { goto L_800F9BC0; } // 800F9BB0
  c->r[4]=c->r[31]|c->r[31]; // 800F9BB4
  c->r[3]=c->r[3]+0x00000030u; // 800F9BB8
  c->lr=0x800F9BC0u; f_8003A994(c); // 800F9BBC
L_800F9BC0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F9BC0
  c->r[3]=c->r[29]|c->r[29]; // 800F9BC4
  c->r[4]=c->r[30]|c->r[30]; // 800F9BC8
  c->r[5]=c->r[31]|c->r[31]; // 800F9BCC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F9BD0
  c->ctr=c->r[12]; // 800F9BD4
  if (true) { c->lr=0x800F9BDCu; dispatch(c,c->ctr); } // 800F9BD8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9BDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9BE0
  c->lr=c->r[0]; // 800F9BE4
  c->r[1]=c->r[1]+0x00000020u; // 800F9BE8
  return; // 800F9BEC
}

// fn_800F9BF0
void f_800F9BF0(Ctx* __restrict c) {
  trace_call(0x800F9BF0u);
  c->r[3]=0u+0x80410000u; // 800F9BF0
  c->r[3]=c->r[3]+0xFFFFEF7Au; // 800F9BF4
  return; // 800F9BF8
}

// fn_800F9BFC
void f_800F9BFC(Ctx* __restrict c) {
  trace_call(0x800F9BFCu);
  c->r[3]=0u+0x00000040u; // 800F9BFC
  return; // 800F9C00
}

// fn_800F9C04
void f_800F9C04(Ctx* __restrict c) {
  trace_call(0x800F9C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9C04
  c->r[0]=c->lr; // 800F9C08
  c->r[3]=0u+0x00000040u; // 800F9C0C
  c->r[4]=c->r[13]+0xFFFFBBDEu; // 800F9C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9C14
  c->r[5]=0u+0x00000000u; // 800F9C18
  c->r[6]=0u+0x00001001u; // 800F9C1C
  c->lr=0x800F9C24u; f_80244D20(c); // 800F9C20
  cmps(c,0,(int32_t)c->r[3],0); // 800F9C24
  if (crb(c,2)) { goto L_800F9C30; } // 800F9C28
  c->lr=0x800F9C30u; f_800F9A84(c); // 800F9C2C
L_800F9C30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9C30
  c->lr=c->r[0]; // 800F9C34
  c->r[1]=c->r[1]+0x00000010u; // 800F9C38
  return; // 800F9C3C
}

// fn_800F9C40
void f_800F9C40(Ctx* __restrict c) {
  trace_call(0x800F9C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9C40
  c->r[0]=c->lr; // 800F9C44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9C48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9C4C
  c->r[31]=c->r[3]|c->r[3]; // 800F9C50
  c->lr=0x800F9C58u; f_800D7120(c); // 800F9C54
  c->r[5]=0u+0x80410000u; // 800F9C58
  c->r[3]=0u+0x39070000u; // 800F9C5C
  c->r[0]=c->r[3]+0xFFFFF5DCu; // 800F9C60
  c->r[4]=0u+0x00000000u; // 800F9C64
  c->r[5]=c->r[5]+0x00003BFCu; // 800F9C68
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F9C6C
  c->r[3]=c->r[31]|c->r[31]; // 800F9C70
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F9C74
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9C80
  c->lr=c->r[0]; // 800F9C84
  c->r[1]=c->r[1]+0x00000010u; // 800F9C88
  return; // 800F9C8C
}

// fn_800F9C90
void f_800F9C90(Ctx* __restrict c) {
  trace_call(0x800F9C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9C90
  c->r[0]=c->lr; // 800F9C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9C98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9C9C
  c->r[30]=c->r[3]|c->r[3]; // 800F9CA0
  c->r[31]=c->r[4]|c->r[4]; // 800F9CA4
  c->lr=0x800F9CACu; f_8030D728(c); // 800F9CA8
  c->r[3]=c->r[31]|c->r[31]; // 800F9CAC
  c->r[4]=0u+0x00000000u; // 800F9CB0
  c->lr=0x800F9CB8u; f_8030BE30(c); // 800F9CB4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9CB8
  c->r[3]=c->r[31]|c->r[31]; // 800F9CBC
  c->lr=0x800F9CC4u; f_8030BD1C(c); // 800F9CC0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F9CC4
  c->r[3]=c->r[31]|c->r[31]; // 800F9CC8
  c->lr=0x800F9CD0u; f_8030C0A0(c); // 800F9CCC
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800F9CD0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9CD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9CD8
  c->lr=c->r[0]; // 800F9CDC
  c->r[1]=c->r[1]+0x00000010u; // 800F9CE0
  return; // 800F9CE4
}

// fn_800F9CE8
void f_800F9CE8(Ctx* __restrict c) {
  trace_call(0x800F9CE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9CE8
  c->r[0]=c->lr; // 800F9CEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9CF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9CF4
  c->r[31]=c->r[4]|c->r[4]; // 800F9CF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F9CFC
  c->r[30]=c->r[3]|c->r[3]; // 800F9D00
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F9D04
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F9D08
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F9D0C
  c->r[3]=c->r[4]+0x00000030u; // 800F9D10
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F9D14
  c->r[4]=c->r[30]+0x00000030u; // 800F9D18
  c->lr=0x800F9D20u; f_8003AB48(c); // 800F9D1C
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F9D20
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800F9D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9D28
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F9D2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9D30
  c->lr=c->r[0]; // 800F9D34
  c->r[1]=c->r[1]+0x00000010u; // 800F9D38
  return; // 800F9D3C
}

// fn_800F9D40
void f_800F9D40(Ctx* __restrict c) {
  trace_call(0x800F9D40u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9D40
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F9D44
  c->ctr=c->r[12]; // 800F9D48
  if (true) { dispatch(c,c->ctr); return; } // 800F9D4C
}

// fn_800F9D50
void f_800F9D50(Ctx* __restrict c) {
  trace_call(0x800F9D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9D50
  c->r[0]=c->lr; // 800F9D54
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9D58
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9D5C
  c->r[29]=c->r[3]|c->r[3]; // 800F9D60
  c->r[30]=c->r[4]|c->r[4]; // 800F9D64
  c->r[31]=c->r[5]|c->r[5]; // 800F9D68
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F9D6C
  cmps(c,0,(int32_t)c->r[0],7); // 800F9D70
  if (!crb(c,0)) { goto L_800F9D84; } // 800F9D74
  c->r[4]=c->r[31]|c->r[31]; // 800F9D78
  c->r[3]=c->r[3]+0x00000030u; // 800F9D7C
  c->lr=0x800F9D84u; f_8003A994(c); // 800F9D80
L_800F9D84:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F9D84
  c->r[3]=c->r[29]|c->r[29]; // 800F9D88
  c->r[4]=c->r[30]|c->r[30]; // 800F9D8C
  c->r[5]=c->r[31]|c->r[31]; // 800F9D90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F9D94
  c->ctr=c->r[12]; // 800F9D98
  if (true) { c->lr=0x800F9DA0u; dispatch(c,c->ctr); } // 800F9D9C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9DA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9DA4
  c->lr=c->r[0]; // 800F9DA8
  c->r[1]=c->r[1]+0x00000020u; // 800F9DAC
  return; // 800F9DB0
}

// fn_800F9DB4
void f_800F9DB4(Ctx* __restrict c) {
  trace_call(0x800F9DB4u);
  c->r[3]=0u+0x80410000u; // 800F9DB4
  c->r[3]=c->r[3]+0xFFFFEF91u; // 800F9DB8
  return; // 800F9DBC
}

// fn_800F9DC0
void f_800F9DC0(Ctx* __restrict c) {
  trace_call(0x800F9DC0u);
  c->r[3]=0u+0x00000040u; // 800F9DC0
  return; // 800F9DC4
}

// fn_800F9DC8
void f_800F9DC8(Ctx* __restrict c) {
  trace_call(0x800F9DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9DC8
  c->r[0]=c->lr; // 800F9DCC
  c->r[3]=0u+0x00000040u; // 800F9DD0
  c->r[4]=c->r[13]+0xFFFFBBE3u; // 800F9DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9DD8
  c->r[5]=0u+0x00000000u; // 800F9DDC
  c->r[6]=0u+0x00001001u; // 800F9DE0
  c->lr=0x800F9DE8u; f_80244D20(c); // 800F9DE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F9DE8
  if (crb(c,2)) { goto L_800F9DF4; } // 800F9DEC
  c->lr=0x800F9DF4u; f_800F9C40(c); // 800F9DF0
L_800F9DF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9DF4
  c->lr=c->r[0]; // 800F9DF8
  c->r[1]=c->r[1]+0x00000010u; // 800F9DFC
  return; // 800F9E00
}

// fn_800F9E04
void f_800F9E04(Ctx* __restrict c) {
  trace_call(0x800F9E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9E04
  c->r[0]=c->lr; // 800F9E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9E0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9E10
  c->r[31]=c->r[3]|c->r[3]; // 800F9E14
  c->lr=0x800F9E1Cu; f_800D7120(c); // 800F9E18
  c->r[5]=0u+0x80410000u; // 800F9E1C
  c->r[3]=0u+0x59710000u; // 800F9E20
  c->r[0]=c->r[3]+0x000047B2u; // 800F9E24
  c->r[4]=0u+0x00000000u; // 800F9E28
  c->r[5]=c->r[5]+0x00003BC8u; // 800F9E2C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F9E30
  c->r[3]=c->r[31]|c->r[31]; // 800F9E34
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F9E38
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9E3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9E40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9E44
  c->lr=c->r[0]; // 800F9E48
  c->r[1]=c->r[1]+0x00000010u; // 800F9E4C
  return; // 800F9E50
}

// fn_800F9E54
void f_800F9E54(Ctx* __restrict c) {
  trace_call(0x800F9E54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9E54
  c->r[0]=c->lr; // 800F9E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9E5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9E60
  c->r[30]=c->r[3]|c->r[3]; // 800F9E64
  c->r[31]=c->r[4]|c->r[4]; // 800F9E68
  c->lr=0x800F9E70u; f_8030D728(c); // 800F9E6C
  c->r[3]=c->r[31]|c->r[31]; // 800F9E70
  c->r[4]=0u+0x00000000u; // 800F9E74
  c->lr=0x800F9E7Cu; f_8030BE30(c); // 800F9E78
  W32(c->r[30]+0x00000030u,c->r[3]); // 800F9E7C
  c->r[3]=c->r[31]|c->r[31]; // 800F9E80
  c->lr=0x800F9E88u; f_8030BD1C(c); // 800F9E84
  W32(c->r[30]+0x00000034u,c->r[3]); // 800F9E88
  c->r[3]=c->r[31]|c->r[31]; // 800F9E8C
  c->lr=0x800F9E94u; f_8030BD1C(c); // 800F9E90
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 800F9E94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9E98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9E9C
  c->lr=c->r[0]; // 800F9EA0
  c->r[1]=c->r[1]+0x00000010u; // 800F9EA4
  return; // 800F9EA8
}

// fn_800F9EAC
void f_800F9EAC(Ctx* __restrict c) {
  trace_call(0x800F9EACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9EAC
  c->r[0]=c->lr; // 800F9EB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9EB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9EB8
  c->r[30]=c->r[3]|c->r[3]; // 800F9EBC
  c->r[31]=c->r[4]|c->r[4]; // 800F9EC0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F9EC4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F9EC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F9ECC
  c->r[3]=c->r[4]+0x00000030u; // 800F9ED0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F9ED4
  c->r[4]=c->r[30]+0x00000030u; // 800F9ED8
  c->lr=0x800F9EE0u; f_8003AB48(c); // 800F9EDC
  c->r[0]=R8(c->r[30]+0x0000003Cu); // 800F9EE0
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 800F9EE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9EE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9EEC
  c->lr=c->r[0]; // 800F9EF0
  c->r[1]=c->r[1]+0x00000010u; // 800F9EF4
  return; // 800F9EF8
}

// fn_800F9EFC
void f_800F9EFC(Ctx* __restrict c) {
  trace_call(0x800F9EFCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F9EFC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F9F00
  c->ctr=c->r[12]; // 800F9F04
  if (true) { dispatch(c,c->ctr); return; } // 800F9F08
}

// fn_800F9F0C
void f_800F9F0C(Ctx* __restrict c) {
  trace_call(0x800F9F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9F0C
  c->r[0]=c->lr; // 800F9F10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9F14
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800F9F18
  c->r[29]=c->r[3]|c->r[3]; // 800F9F1C
  c->r[30]=c->r[4]|c->r[4]; // 800F9F20
  c->r[31]=c->r[5]|c->r[5]; // 800F9F24
  c->r[0]=R32(c->r[3]+0x00000034u); // 800F9F28
  cmps(c,0,(int32_t)c->r[0],7); // 800F9F2C
  if (!crb(c,0)) { goto L_800F9F40; } // 800F9F30
  c->r[4]=c->r[31]|c->r[31]; // 800F9F34
  c->r[3]=c->r[3]+0x00000030u; // 800F9F38
  c->lr=0x800F9F40u; f_8003A994(c); // 800F9F3C
L_800F9F40:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800F9F40
  c->r[3]=c->r[29]|c->r[29]; // 800F9F44
  c->r[4]=c->r[30]|c->r[30]; // 800F9F48
  c->r[5]=c->r[31]|c->r[31]; // 800F9F4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800F9F50
  c->ctr=c->r[12]; // 800F9F54
  if (true) { c->lr=0x800F9F5Cu; dispatch(c,c->ctr); } // 800F9F58
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800F9F5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9F60
  c->lr=c->r[0]; // 800F9F64
  c->r[1]=c->r[1]+0x00000020u; // 800F9F68
  return; // 800F9F6C
}

// fn_800F9F70
void f_800F9F70(Ctx* __restrict c) {
  trace_call(0x800F9F70u);
  c->r[3]=0u+0x80410000u; // 800F9F70
  c->r[3]=c->r[3]+0xFFFFEFA6u; // 800F9F74
  return; // 800F9F78
}

// fn_800F9F7C
void f_800F9F7C(Ctx* __restrict c) {
  trace_call(0x800F9F7Cu);
  c->r[3]=0u+0x00000040u; // 800F9F7C
  return; // 800F9F80
}

// fn_800F9F84
void f_800F9F84(Ctx* __restrict c) {
  trace_call(0x800F9F84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9F84
  c->r[0]=c->lr; // 800F9F88
  c->r[3]=0u+0x00000040u; // 800F9F8C
  c->r[4]=c->r[13]+0xFFFFBBE8u; // 800F9F90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9F94
  c->r[5]=0u+0x00000000u; // 800F9F98
  c->r[6]=0u+0x00001001u; // 800F9F9C
  c->lr=0x800F9FA4u; f_80244D20(c); // 800F9FA0
  cmps(c,0,(int32_t)c->r[3],0); // 800F9FA4
  if (crb(c,2)) { goto L_800F9FB0; } // 800F9FA8
  c->lr=0x800F9FB0u; f_800F9E04(c); // 800F9FAC
L_800F9FB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9FB0
  c->lr=c->r[0]; // 800F9FB4
  c->r[1]=c->r[1]+0x00000010u; // 800F9FB8
  return; // 800F9FBC
}

// fn_800F9FC0
void f_800F9FC0(Ctx* __restrict c) {
  trace_call(0x800F9FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9FC0
  c->r[0]=c->lr; // 800F9FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9FCC
  c->r[31]=c->r[3]|c->r[3]; // 800F9FD0
  c->lr=0x800F9FD8u; f_800D7120(c); // 800F9FD4
  c->r[5]=0u+0x80410000u; // 800F9FD8
  c->r[3]=0u+0xBDBD0000u; // 800F9FDC
  c->r[0]=c->r[3]+0xFFFF8284u; // 800F9FE0
  c->r[4]=0u+0x00000000u; // 800F9FE4
  c->r[5]=c->r[5]+0x00003B94u; // 800F9FE8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F9FEC
  c->r[3]=c->r[31]|c->r[31]; // 800F9FF0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800F9FF4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F9FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9FFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA000
  c->lr=c->r[0]; // 800FA004
  c->r[1]=c->r[1]+0x00000010u; // 800FA008
  return; // 800FA00C
}

// fn_800FA010
void f_800FA010(Ctx* __restrict c) {
  trace_call(0x800FA010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA010
  c->r[0]=c->lr; // 800FA014
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA018
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA01C
  c->r[30]=c->r[3]|c->r[3]; // 800FA020
  c->r[31]=c->r[4]|c->r[4]; // 800FA024
  c->lr=0x800FA02Cu; f_8030D728(c); // 800FA028
  c->r[3]=c->r[31]|c->r[31]; // 800FA02C
  c->r[4]=0u+0x00000000u; // 800FA030
  c->lr=0x800FA038u; f_8030BE30(c); // 800FA034
  W32(c->r[30]+0x00000030u,c->r[3]); // 800FA038
  c->r[3]=c->r[31]|c->r[31]; // 800FA03C
  c->lr=0x800FA044u; f_8030BD1C(c); // 800FA040
  W32(c->r[30]+0x00000034u,c->r[3]); // 800FA044
  c->r[3]=c->r[31]|c->r[31]; // 800FA048
  c->lr=0x800FA050u; f_8030BD1C(c); // 800FA04C
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800FA050
  c->r[3]=c->r[31]|c->r[31]; // 800FA054
  c->lr=0x800FA05Cu; f_8030BD1C(c); // 800FA058
  W32(c->r[30]+0x00000040u,c->r[3]); // 800FA05C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA060
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA064
  c->lr=c->r[0]; // 800FA068
  c->r[1]=c->r[1]+0x00000010u; // 800FA06C
  return; // 800FA070
}

// fn_800FA074
void f_800FA074(Ctx* __restrict c) {
  trace_call(0x800FA074u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA074
  c->r[0]=c->lr; // 800FA078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA07C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA080
  c->r[30]=c->r[3]|c->r[3]; // 800FA084
  c->r[31]=c->r[4]|c->r[4]; // 800FA088
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA08C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA090
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FA094
  c->r[3]=c->r[4]+0x00000030u; // 800FA098
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA09C
  c->r[4]=c->r[30]+0x00000030u; // 800FA0A0
  c->lr=0x800FA0A8u; f_8003AB48(c); // 800FA0A4
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800FA0A8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800FA0AC
  c->r[0]=R32(c->r[30]+0x00000040u); // 800FA0B0
  W32(c->r[31]+0x00000040u,c->r[0]); // 800FA0B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA0B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA0BC
  c->lr=c->r[0]; // 800FA0C0
  c->r[1]=c->r[1]+0x00000010u; // 800FA0C4
  return; // 800FA0C8
}

// fn_800FA0CC
void f_800FA0CC(Ctx* __restrict c) {
  trace_call(0x800FA0CCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FA0CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FA0D0
  c->ctr=c->r[12]; // 800FA0D4
  if (true) { dispatch(c,c->ctr); return; } // 800FA0D8
}

// fn_800FA0DC
void f_800FA0DC(Ctx* __restrict c) {
  trace_call(0x800FA0DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA0DC
  c->r[0]=c->lr; // 800FA0E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA0E4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA0E8
  c->r[29]=c->r[3]|c->r[3]; // 800FA0EC
  c->r[30]=c->r[4]|c->r[4]; // 800FA0F0
  c->r[31]=c->r[5]|c->r[5]; // 800FA0F4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800FA0F8
  cmps(c,0,(int32_t)c->r[0],7); // 800FA0FC
  if (!crb(c,0)) { goto L_800FA110; } // 800FA100
  c->r[4]=c->r[31]|c->r[31]; // 800FA104
  c->r[3]=c->r[3]+0x00000030u; // 800FA108
  c->lr=0x800FA110u; f_8003A994(c); // 800FA10C
L_800FA110:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800FA110
  c->r[3]=c->r[29]|c->r[29]; // 800FA114
  c->r[4]=c->r[30]|c->r[30]; // 800FA118
  c->r[5]=c->r[31]|c->r[31]; // 800FA11C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FA120
  c->ctr=c->r[12]; // 800FA124
  if (true) { c->lr=0x800FA12Cu; dispatch(c,c->ctr); } // 800FA128
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA12C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA130
  c->lr=c->r[0]; // 800FA134
  c->r[1]=c->r[1]+0x00000020u; // 800FA138
  return; // 800FA13C
}

// fn_800FA140
void f_800FA140(Ctx* __restrict c) {
  trace_call(0x800FA140u);
  c->r[3]=0u+0x80410000u; // 800FA140
  c->r[3]=c->r[3]+0xFFFFEFB7u; // 800FA144
  return; // 800FA148
}

// fn_800FA14C
void f_800FA14C(Ctx* __restrict c) {
  trace_call(0x800FA14Cu);
  c->r[3]=0u+0x00000044u; // 800FA14C
  return; // 800FA150
}

// fn_800FA154
void f_800FA154(Ctx* __restrict c) {
  trace_call(0x800FA154u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA154
  c->r[0]=c->lr; // 800FA158
  c->r[3]=0u+0x00000044u; // 800FA15C
  c->r[4]=c->r[13]+0xFFFFBBEDu; // 800FA160
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA164
  c->r[5]=0u+0x00000000u; // 800FA168
  c->r[6]=0u+0x00001001u; // 800FA16C
  c->lr=0x800FA174u; f_80244D20(c); // 800FA170
  cmps(c,0,(int32_t)c->r[3],0); // 800FA174
  if (crb(c,2)) { goto L_800FA180; } // 800FA178
  c->lr=0x800FA180u; f_800F9FC0(c); // 800FA17C
L_800FA180:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA180
  c->lr=c->r[0]; // 800FA184
  c->r[1]=c->r[1]+0x00000010u; // 800FA188
  return; // 800FA18C
}

// fn_800FA190
void f_800FA190(Ctx* __restrict c) {
  trace_call(0x800FA190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA190
  c->r[0]=c->lr; // 800FA194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA19C
  c->r[31]=c->r[3]|c->r[3]; // 800FA1A0
  c->lr=0x800FA1A8u; f_800D7120(c); // 800FA1A4
  c->r[5]=0u+0x80410000u; // 800FA1A8
  c->r[3]=0u+0xA0560000u; // 800FA1AC
  c->r[0]=c->r[3]+0x00003153u; // 800FA1B0
  c->r[4]=0u+0x00000000u; // 800FA1B4
  c->r[5]=c->r[5]+0x00003B60u; // 800FA1B8
  W32(c->r[31]+0x00000008u,c->r[5]); // 800FA1BC
  c->r[3]=c->r[31]|c->r[31]; // 800FA1C0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800FA1C4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FA1C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA1CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA1D0
  c->lr=c->r[0]; // 800FA1D4
  c->r[1]=c->r[1]+0x00000010u; // 800FA1D8
  return; // 800FA1DC
}

// fn_800FA1E0
void f_800FA1E0(Ctx* __restrict c) {
  trace_call(0x800FA1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA1E0
  c->r[0]=c->lr; // 800FA1E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA1E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA1EC
  c->r[30]=c->r[3]|c->r[3]; // 800FA1F0
  c->r[31]=c->r[4]|c->r[4]; // 800FA1F4
  c->lr=0x800FA1FCu; f_8030D728(c); // 800FA1F8
  c->r[3]=c->r[31]|c->r[31]; // 800FA1FC
  c->r[4]=0u+0x00000000u; // 800FA200
  c->lr=0x800FA208u; f_8030BE30(c); // 800FA204
  W32(c->r[30]+0x00000030u,c->r[3]); // 800FA208
  c->r[3]=c->r[31]|c->r[31]; // 800FA20C
  c->lr=0x800FA214u; f_8030BD1C(c); // 800FA210
  W32(c->r[30]+0x00000034u,c->r[3]); // 800FA214
  c->r[3]=c->r[31]|c->r[31]; // 800FA218
  c->lr=0x800FA220u; f_8030C0A0(c); // 800FA21C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800FA220
  c->r[3]=c->r[31]|c->r[31]; // 800FA224
  c->lr=0x800FA22Cu; f_8030C0A0(c); // 800FA228
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800FA22C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA230
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA234
  c->lr=c->r[0]; // 800FA238
  c->r[1]=c->r[1]+0x00000010u; // 800FA23C
  return; // 800FA240
}

// fn_800FA244
void f_800FA244(Ctx* __restrict c) {
  trace_call(0x800FA244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA244
  c->r[0]=c->lr; // 800FA248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA24C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA250
  c->r[31]=c->r[4]|c->r[4]; // 800FA254
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA258
  c->r[30]=c->r[3]|c->r[3]; // 800FA25C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA260
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA264
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FA268
  c->r[3]=c->r[4]+0x00000030u; // 800FA26C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA270
  c->r[4]=c->r[30]+0x00000030u; // 800FA274
  c->lr=0x800FA27Cu; f_8003AB48(c); // 800FA278
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA27C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800FA280
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA284
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800FA288
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA28C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA290
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA294
  c->lr=c->r[0]; // 800FA298
  c->r[1]=c->r[1]+0x00000010u; // 800FA29C
  return; // 800FA2A0
}

// fn_800FA2A4
void f_800FA2A4(Ctx* __restrict c) {
  trace_call(0x800FA2A4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FA2A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FA2A8
  c->ctr=c->r[12]; // 800FA2AC
  if (true) { dispatch(c,c->ctr); return; } // 800FA2B0
}

// fn_800FA2B4
void f_800FA2B4(Ctx* __restrict c) {
  trace_call(0x800FA2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA2B4
  c->r[0]=c->lr; // 800FA2B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA2BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA2C0
  c->r[29]=c->r[3]|c->r[3]; // 800FA2C4
  c->r[30]=c->r[4]|c->r[4]; // 800FA2C8
  c->r[31]=c->r[5]|c->r[5]; // 800FA2CC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800FA2D0
  cmps(c,0,(int32_t)c->r[0],7); // 800FA2D4
  if (!crb(c,0)) { goto L_800FA2E8; } // 800FA2D8
  c->r[4]=c->r[31]|c->r[31]; // 800FA2DC
  c->r[3]=c->r[3]+0x00000030u; // 800FA2E0
  c->lr=0x800FA2E8u; f_8003A994(c); // 800FA2E4
L_800FA2E8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800FA2E8
  c->r[3]=c->r[29]|c->r[29]; // 800FA2EC
  c->r[4]=c->r[30]|c->r[30]; // 800FA2F0
  c->r[5]=c->r[31]|c->r[31]; // 800FA2F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FA2F8
  c->ctr=c->r[12]; // 800FA2FC
  if (true) { c->lr=0x800FA304u; dispatch(c,c->ctr); } // 800FA300
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA304
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA308
  c->lr=c->r[0]; // 800FA30C
  c->r[1]=c->r[1]+0x00000020u; // 800FA310
  return; // 800FA314
}

// fn_800FA318
void f_800FA318(Ctx* __restrict c) {
  trace_call(0x800FA318u);
  c->r[3]=0u+0x80410000u; // 800FA318
  c->r[3]=c->r[3]+0xFFFFEFCEu; // 800FA31C
  return; // 800FA320
}

// fn_800FA324
void f_800FA324(Ctx* __restrict c) {
  trace_call(0x800FA324u);
  c->r[3]=0u+0x00000044u; // 800FA324
  return; // 800FA328
}

// fn_800FA32C
void f_800FA32C(Ctx* __restrict c) {
  trace_call(0x800FA32Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA32C
  c->r[0]=c->lr; // 800FA330
  c->r[3]=0u+0x00000044u; // 800FA334
  c->r[4]=c->r[13]+0xFFFFBBF2u; // 800FA338
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA33C
  c->r[5]=0u+0x00000000u; // 800FA340
  c->r[6]=0u+0x00001001u; // 800FA344
  c->lr=0x800FA34Cu; f_80244D20(c); // 800FA348
  cmps(c,0,(int32_t)c->r[3],0); // 800FA34C
  if (crb(c,2)) { goto L_800FA358; } // 800FA350
  c->lr=0x800FA358u; f_800FA190(c); // 800FA354
L_800FA358:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA358
  c->lr=c->r[0]; // 800FA35C
  c->r[1]=c->r[1]+0x00000010u; // 800FA360
  return; // 800FA364
}

// fn_800FA368
void f_800FA368(Ctx* __restrict c) {
  trace_call(0x800FA368u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA368
  c->r[0]=c->lr; // 800FA36C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA370
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA374
  c->r[31]=c->r[3]|c->r[3]; // 800FA378
  c->lr=0x800FA380u; f_800D7120(c); // 800FA37C
  c->r[5]=0u+0x80410000u; // 800FA380
  c->r[3]=0u+0xDE740000u; // 800FA384
  c->r[4]=0u+0x00000000u; // 800FA388
  W32(c->r[31]+0x00000038u,c->r[4]); // 800FA38C
  c->r[0]=c->r[3]+0xFFFFE62Eu; // 800FA390
  c->r[5]=c->r[5]+0x00003B2Cu; // 800FA394
  W32(c->r[31]+0x00000008u,c->r[5]); // 800FA398
  c->r[3]=c->r[31]|c->r[31]; // 800FA39C
  W32(c->r[31]+0x00000044u,c->r[4]); // 800FA3A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FA3A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA3A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA3AC
  c->lr=c->r[0]; // 800FA3B0
  c->r[1]=c->r[1]+0x00000010u; // 800FA3B4
  return; // 800FA3B8
}

// fn_800FA3BC
void f_800FA3BC(Ctx* __restrict c) {
  trace_call(0x800FA3BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA3BC
  c->r[0]=c->lr; // 800FA3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA3C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA3C8
  c->r[30]=c->r[3]|c->r[3]; // 800FA3CC
  c->r[31]=c->r[4]|c->r[4]; // 800FA3D0
  c->lr=0x800FA3D8u; f_8030D728(c); // 800FA3D4
  c->r[3]=c->r[31]|c->r[31]; // 800FA3D8
  c->r[4]=0u+0x00000000u; // 800FA3DC
  c->lr=0x800FA3E4u; f_8030BE30(c); // 800FA3E0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800FA3E4
  c->r[3]=c->r[31]|c->r[31]; // 800FA3E8
  c->lr=0x800FA3F0u; f_8030BD1C(c); // 800FA3EC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800FA3F0
  c->r[3]=c->r[31]|c->r[31]; // 800FA3F4
  c->r[4]=0u+0x00000000u; // 800FA3F8
  c->lr=0x800FA400u; f_8030BE30(c); // 800FA3FC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800FA400
  c->r[3]=c->r[31]|c->r[31]; // 800FA404
  c->lr=0x800FA40Cu; f_8030BD1C(c); // 800FA408
  W32(c->r[30]+0x00000040u,c->r[3]); // 800FA40C
  c->r[3]=c->r[31]|c->r[31]; // 800FA410
  c->lr=0x800FA418u; f_8030BD1C(c); // 800FA414
  W32(c->r[30]+0x00000048u,c->r[3]); // 800FA418
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA41C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA420
  c->lr=c->r[0]; // 800FA424
  c->r[1]=c->r[1]+0x00000010u; // 800FA428
  return; // 800FA42C
}

// fn_800FA430
void f_800FA430(Ctx* __restrict c) {
  trace_call(0x800FA430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA430
  c->r[0]=c->lr; // 800FA434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA438
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA43C
  c->r[30]=c->r[3]|c->r[3]; // 800FA440
  c->r[31]=c->r[4]|c->r[4]; // 800FA444
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA448
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA44C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FA450
  c->r[3]=c->r[4]+0x00000030u; // 800FA454
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA458
  c->r[4]=c->r[30]+0x00000030u; // 800FA45C
  c->lr=0x800FA464u; f_8003AB48(c); // 800FA460
  c->r[3]=c->r[31]+0x0000003Cu; // 800FA464
  c->r[4]=c->r[30]+0x0000003Cu; // 800FA468
  c->lr=0x800FA470u; f_8003AB48(c); // 800FA46C
  c->r[0]=R32(c->r[30]+0x00000048u); // 800FA470
  W32(c->r[31]+0x00000048u,c->r[0]); // 800FA474
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA478
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA47C
  c->lr=c->r[0]; // 800FA480
  c->r[1]=c->r[1]+0x00000010u; // 800FA484
  return; // 800FA488
}

// fn_800FA48C
void f_800FA48C(Ctx* __restrict c) {
  trace_call(0x800FA48Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FA48C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FA490
  c->ctr=c->r[12]; // 800FA494
  if (true) { dispatch(c,c->ctr); return; } // 800FA498
}

// fn_800FA49C
void f_800FA49C(Ctx* __restrict c) {
  trace_call(0x800FA49Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA49C
  c->r[0]=c->lr; // 800FA4A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA4A4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA4A8
  c->r[29]=c->r[3]|c->r[3]; // 800FA4AC
  c->r[30]=c->r[4]|c->r[4]; // 800FA4B0
  c->r[31]=c->r[5]|c->r[5]; // 800FA4B4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800FA4B8
  cmps(c,0,(int32_t)c->r[0],7); // 800FA4BC
  if (!crb(c,0)) { goto L_800FA4D0; } // 800FA4C0
  c->r[4]=c->r[31]|c->r[31]; // 800FA4C4
  c->r[3]=c->r[3]+0x00000030u; // 800FA4C8
  c->lr=0x800FA4D0u; f_8003A994(c); // 800FA4CC
L_800FA4D0:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800FA4D0
  cmps(c,0,(int32_t)c->r[0],7); // 800FA4D4
  if (!crb(c,0)) { goto L_800FA4E8; } // 800FA4D8
  c->r[4]=c->r[31]|c->r[31]; // 800FA4DC
  c->r[3]=c->r[29]+0x0000003Cu; // 800FA4E0
  c->lr=0x800FA4E8u; f_8003A994(c); // 800FA4E4
L_800FA4E8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800FA4E8
  c->r[3]=c->r[29]|c->r[29]; // 800FA4EC
  c->r[4]=c->r[30]|c->r[30]; // 800FA4F0
  c->r[5]=c->r[31]|c->r[31]; // 800FA4F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FA4F8
  c->ctr=c->r[12]; // 800FA4FC
  if (true) { c->lr=0x800FA504u; dispatch(c,c->ctr); } // 800FA500
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA504
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA508
  c->lr=c->r[0]; // 800FA50C
  c->r[1]=c->r[1]+0x00000020u; // 800FA510
  return; // 800FA514
}

// fn_800FA518
void f_800FA518(Ctx* __restrict c) {
  trace_call(0x800FA518u);
  c->r[3]=0u+0x80410000u; // 800FA518
  c->r[3]=c->r[3]+0xFFFFEFE3u; // 800FA51C
  return; // 800FA520
}

// fn_800FA524
void f_800FA524(Ctx* __restrict c) {
  trace_call(0x800FA524u);
  c->r[3]=0u+0x0000004Cu; // 800FA524
  return; // 800FA528
}

// fn_800FA52C
void f_800FA52C(Ctx* __restrict c) {
  trace_call(0x800FA52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA52C
  c->r[0]=c->lr; // 800FA530
  c->r[3]=0u+0x0000004Cu; // 800FA534
  c->r[4]=c->r[13]+0xFFFFBBF7u; // 800FA538
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA53C
  c->r[5]=0u+0x00000000u; // 800FA540
  c->r[6]=0u+0x00001001u; // 800FA544
  c->lr=0x800FA54Cu; f_80244D20(c); // 800FA548
  cmps(c,0,(int32_t)c->r[3],0); // 800FA54C
  if (crb(c,2)) { goto L_800FA558; } // 800FA550
  c->lr=0x800FA558u; f_800FA368(c); // 800FA554
L_800FA558:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA558
  c->lr=c->r[0]; // 800FA55C
  c->r[1]=c->r[1]+0x00000010u; // 800FA560
  return; // 800FA564
}

// fn_800FA568
void f_800FA568(Ctx* __restrict c) {
  trace_call(0x800FA568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA568
  c->r[0]=c->lr; // 800FA56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA574
  c->r[31]=c->r[3]|c->r[3]; // 800FA578
  c->lr=0x800FA580u; f_800D7120(c); // 800FA57C
  c->r[5]=0u+0x80410000u; // 800FA580
  c->r[3]=0u+0x1E9D0000u; // 800FA584
  c->r[4]=0u+0x00000000u; // 800FA588
  W32(c->r[31]+0x00000038u,c->r[4]); // 800FA58C
  c->r[0]=c->r[3]+0xFFFF82F2u; // 800FA590
  c->r[5]=c->r[5]+0x00003AF8u; // 800FA594
  W32(c->r[31]+0x00000008u,c->r[5]); // 800FA598
  c->r[3]=c->r[31]|c->r[31]; // 800FA59C
  W32(c->r[31]+0x00000044u,c->r[4]); // 800FA5A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FA5A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA5A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA5AC
  c->lr=c->r[0]; // 800FA5B0
  c->r[1]=c->r[1]+0x00000010u; // 800FA5B4
  return; // 800FA5B8
}

// fn_800FA5BC
void f_800FA5BC(Ctx* __restrict c) {
  trace_call(0x800FA5BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA5BC
  c->r[0]=c->lr; // 800FA5C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA5C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA5C8
  c->r[30]=c->r[3]|c->r[3]; // 800FA5CC
  c->r[31]=c->r[4]|c->r[4]; // 800FA5D0
  c->lr=0x800FA5D8u; f_8030D728(c); // 800FA5D4
  c->r[3]=c->r[31]|c->r[31]; // 800FA5D8
  c->r[4]=0u+0x00000000u; // 800FA5DC
  c->lr=0x800FA5E4u; f_8030BE30(c); // 800FA5E0
  W32(c->r[30]+0x00000030u,c->r[3]); // 800FA5E4
  c->r[3]=c->r[31]|c->r[31]; // 800FA5E8
  c->lr=0x800FA5F0u; f_8030BD1C(c); // 800FA5EC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800FA5F0
  c->r[3]=c->r[31]|c->r[31]; // 800FA5F4
  c->r[4]=0u+0x00000000u; // 800FA5F8
  c->lr=0x800FA600u; f_8030BE30(c); // 800FA5FC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800FA600
  c->r[3]=c->r[31]|c->r[31]; // 800FA604
  c->lr=0x800FA60Cu; f_8030BD1C(c); // 800FA608
  W32(c->r[30]+0x00000040u,c->r[3]); // 800FA60C
  c->r[3]=c->r[31]|c->r[31]; // 800FA610
  c->lr=0x800FA618u; f_8030C0A0(c); // 800FA614
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 800FA618
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA61C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA620
  c->lr=c->r[0]; // 800FA624
  c->r[1]=c->r[1]+0x00000010u; // 800FA628
  return; // 800FA62C
}

// fn_800FA630
void f_800FA630(Ctx* __restrict c) {
  trace_call(0x800FA630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA630
  c->r[0]=c->lr; // 800FA634
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA638
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA63C
  c->r[31]=c->r[4]|c->r[4]; // 800FA640
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA644
  c->r[30]=c->r[3]|c->r[3]; // 800FA648
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA64C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA650
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FA654
  c->r[3]=c->r[4]+0x00000030u; // 800FA658
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA65C
  c->r[4]=c->r[30]+0x00000030u; // 800FA660
  c->lr=0x800FA668u; f_8003AB48(c); // 800FA664
  c->r[3]=c->r[31]+0x0000003Cu; // 800FA668
  c->r[4]=c->r[30]+0x0000003Cu; // 800FA66C
  c->lr=0x800FA674u; f_8003AB48(c); // 800FA670
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FA674
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800FA678
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA67C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA680
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA684
  c->lr=c->r[0]; // 800FA688
  c->r[1]=c->r[1]+0x00000010u; // 800FA68C
  return; // 800FA690
}

// fn_800FA694
void f_800FA694(Ctx* __restrict c) {
  trace_call(0x800FA694u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FA694
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FA698
  c->ctr=c->r[12]; // 800FA69C
  if (true) { dispatch(c,c->ctr); return; } // 800FA6A0
}

// fn_800FA6A4
void f_800FA6A4(Ctx* __restrict c) {
  trace_call(0x800FA6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA6A4
  c->r[0]=c->lr; // 800FA6A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA6AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA6B0
  c->r[29]=c->r[3]|c->r[3]; // 800FA6B4
  c->r[30]=c->r[4]|c->r[4]; // 800FA6B8
  c->r[31]=c->r[5]|c->r[5]; // 800FA6BC
  c->r[0]=R32(c->r[3]+0x00000034u); // 800FA6C0
  cmps(c,0,(int32_t)c->r[0],7); // 800FA6C4
  if (!crb(c,0)) { goto L_800FA6D8; } // 800FA6C8
  c->r[4]=c->r[31]|c->r[31]; // 800FA6CC
  c->r[3]=c->r[3]+0x00000030u; // 800FA6D0
  c->lr=0x800FA6D8u; f_8003A994(c); // 800FA6D4
L_800FA6D8:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800FA6D8
  cmps(c,0,(int32_t)c->r[0],7); // 800FA6DC
  if (!crb(c,0)) { goto L_800FA6F0; } // 800FA6E0
  c->r[4]=c->r[31]|c->r[31]; // 800FA6E4
  c->r[3]=c->r[29]+0x0000003Cu; // 800FA6E8
  c->lr=0x800FA6F0u; f_8003A994(c); // 800FA6EC
L_800FA6F0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800FA6F0
  c->r[3]=c->r[29]|c->r[29]; // 800FA6F4
  c->r[4]=c->r[30]|c->r[30]; // 800FA6F8
  c->r[5]=c->r[31]|c->r[31]; // 800FA6FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FA700
  c->ctr=c->r[12]; // 800FA704
  if (true) { c->lr=0x800FA70Cu; dispatch(c,c->ctr); } // 800FA708
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA70C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA710
  c->lr=c->r[0]; // 800FA714
  c->r[1]=c->r[1]+0x00000020u; // 800FA718
  return; // 800FA71C
}

// fn_800FA720
void f_800FA720(Ctx* __restrict c) {
  trace_call(0x800FA720u);
  c->r[3]=0u+0x80410000u; // 800FA720
  c->r[3]=c->r[3]+0xFFFFEFF4u; // 800FA724
  return; // 800FA728
}

// fn_800FA72C
void f_800FA72C(Ctx* __restrict c) {
  trace_call(0x800FA72Cu);
  c->r[3]=0u+0x0000004Cu; // 800FA72C
  return; // 800FA730
}

// fn_800FA734
void f_800FA734(Ctx* __restrict c) {
  trace_call(0x800FA734u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA734
  c->r[0]=c->lr; // 800FA738
  c->r[3]=0u+0x0000004Cu; // 800FA73C
  c->r[4]=c->r[13]+0xFFFFBBFCu; // 800FA740
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA744
  c->r[5]=0u+0x00000000u; // 800FA748
  c->r[6]=0u+0x00001001u; // 800FA74C
  c->lr=0x800FA754u; f_80244D20(c); // 800FA750
  cmps(c,0,(int32_t)c->r[3],0); // 800FA754
  if (crb(c,2)) { goto L_800FA760; } // 800FA758
  c->lr=0x800FA760u; f_800FA568(c); // 800FA75C
L_800FA760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA760
  c->lr=c->r[0]; // 800FA764
  c->r[1]=c->r[1]+0x00000010u; // 800FA768
  return; // 800FA76C
}

// fn_800FA770
void f_800FA770(Ctx* __restrict c) {
  trace_call(0x800FA770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA770
  c->r[0]=c->lr; // 800FA774
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA77C
  c->r[31]=c->r[3]|c->r[3]; // 800FA780
  c->lr=0x800FA788u; f_800D7120(c); // 800FA784
  c->r[5]=0u+0x80410000u; // 800FA788
  c->r[3]=0u+0x9B800000u; // 800FA78C
  c->r[0]=c->r[3]+0x00005FF7u; // 800FA790
  c->r[4]=0u+0x00000000u; // 800FA794
  c->r[5]=c->r[5]+0x00003AC4u; // 800FA798
  W32(c->r[31]+0x00000008u,c->r[5]); // 800FA79C
  c->r[3]=c->r[31]|c->r[31]; // 800FA7A0
  W32(c->r[31]+0x00000038u,c->r[4]); // 800FA7A4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800FA7A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA7AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA7B0
  c->lr=c->r[0]; // 800FA7B4
  c->r[1]=c->r[1]+0x00000010u; // 800FA7B8
  return; // 800FA7BC
}

// fn_800FA7C0
void f_800FA7C0(Ctx* __restrict c) {
  trace_call(0x800FA7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA7C0
  c->r[0]=c->lr; // 800FA7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA7C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA7CC
  c->r[30]=c->r[3]|c->r[3]; // 800FA7D0
  c->r[31]=c->r[4]|c->r[4]; // 800FA7D4
  c->lr=0x800FA7DCu; f_8030D728(c); // 800FA7D8
  c->r[3]=c->r[31]|c->r[31]; // 800FA7DC
  c->r[4]=0u+0x00000000u; // 800FA7E0
  c->lr=0x800FA7E8u; f_8030BE30(c); // 800FA7E4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800FA7E8
  c->r[3]=c->r[31]|c->r[31]; // 800FA7EC
  c->lr=0x800FA7F4u; f_8030BD1C(c); // 800FA7F0
  W32(c->r[30]+0x00000034u,c->r[3]); // 800FA7F4
  c->r[3]=c->r[31]|c->r[31]; // 800FA7F8
  c->lr=0x800FA800u; f_8030BD1C(c); // 800FA7FC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800FA800
  c->r[3]=c->r[31]|c->r[31]; // 800FA804
  c->lr=0x800FA80Cu; f_8030BD1C(c); // 800FA808
  W8(c->r[30]+0x00000040u,c->r[3]); // 800FA80C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA810
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA814
  c->lr=c->r[0]; // 800FA818
  c->r[1]=c->r[1]+0x00000010u; // 800FA81C
  return; // 800FA820
}

// fn_800FA824
void f_800FA824(Ctx* __restrict c) {
  trace_call(0x800FA824u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA824
  c->r[0]=c->lr; // 800FA828
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA82C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA830
  c->r[30]=c->r[3]|c->r[3]; // 800FA834
  c->r[31]=c->r[4]|c->r[4]; // 800FA838
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FA83C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FA840
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FA844
  c->r[3]=c->r[4]+0x00000030u; // 800FA848
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FA84C
  c->r[4]=c->r[30]+0x00000030u; // 800FA850
  c->lr=0x800FA858u; f_8003AB48(c); // 800FA854
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800FA858
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800FA85C
  c->r[0]=R8(c->r[30]+0x00000040u); // 800FA860
  W8(c->r[31]+0x00000040u,c->r[0]); // 800FA864
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA868
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA86C
  c->lr=c->r[0]; // 800FA870
  c->r[1]=c->r[1]+0x00000010u; // 800FA874
  return; // 800FA878
}

// fn_800FA87C
void f_800FA87C(Ctx* __restrict c) {
  trace_call(0x800FA87Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800FA87C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FA880
  c->ctr=c->r[12]; // 800FA884
  if (true) { dispatch(c,c->ctr); return; } // 800FA888
}

// fn_800FA88C
void f_800FA88C(Ctx* __restrict c) {
  trace_call(0x800FA88Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA88C
  c->r[0]=c->lr; // 800FA890
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA894
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FA898
  c->r[29]=c->r[3]|c->r[3]; // 800FA89C
  c->r[30]=c->r[4]|c->r[4]; // 800FA8A0
  c->r[31]=c->r[5]|c->r[5]; // 800FA8A4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800FA8A8
  cmps(c,0,(int32_t)c->r[0],7); // 800FA8AC
  if (!crb(c,0)) { goto L_800FA8C0; } // 800FA8B0
  c->r[4]=c->r[31]|c->r[31]; // 800FA8B4
  c->r[3]=c->r[3]+0x00000030u; // 800FA8B8
  c->lr=0x800FA8C0u; f_8003A994(c); // 800FA8BC
L_800FA8C0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800FA8C0
  c->r[3]=c->r[29]|c->r[29]; // 800FA8C4
  c->r[4]=c->r[30]|c->r[30]; // 800FA8C8
  c->r[5]=c->r[31]|c->r[31]; // 800FA8CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FA8D0
  c->ctr=c->r[12]; // 800FA8D4
  if (true) { c->lr=0x800FA8DCu; dispatch(c,c->ctr); } // 800FA8D8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FA8DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA8E0
  c->lr=c->r[0]; // 800FA8E4
  c->r[1]=c->r[1]+0x00000020u; // 800FA8E8
  return; // 800FA8EC
}

// fn_800FA8F0
void f_800FA8F0(Ctx* __restrict c) {
  trace_call(0x800FA8F0u);
  c->r[3]=0u+0x80410000u; // 800FA8F0
  c->r[3]=c->r[3]+0xFFFFF003u; // 800FA8F4
  return; // 800FA8F8
}

// fn_800FA8FC
void f_800FA8FC(Ctx* __restrict c) {
  trace_call(0x800FA8FCu);
  c->r[3]=0u+0x00000044u; // 800FA8FC
  return; // 800FA900
}

// fn_800FA904
void f_800FA904(Ctx* __restrict c) {
  trace_call(0x800FA904u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA904
  c->r[0]=c->lr; // 800FA908
  c->r[3]=0u+0x00000044u; // 800FA90C
  c->r[4]=c->r[13]+0xFFFFBC01u; // 800FA910
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA914
  c->r[5]=0u+0x00000000u; // 800FA918
  c->r[6]=0u+0x00001001u; // 800FA91C
  c->lr=0x800FA924u; f_80244D20(c); // 800FA920
  cmps(c,0,(int32_t)c->r[3],0); // 800FA924
  if (crb(c,2)) { goto L_800FA930; } // 800FA928
  c->lr=0x800FA930u; f_800FA770(c); // 800FA92C
L_800FA930:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA930
  c->lr=c->r[0]; // 800FA934
  c->r[1]=c->r[1]+0x00000010u; // 800FA938
  return; // 800FA93C
}

