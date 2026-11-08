#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800D4848
void f_800D4848(Ctx* __restrict c) {
  trace_call(0x800D4848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4848
  c->r[0]=c->lr; // 800D484C
  c->r[3]=0u+0x00000018u; // 800D4850
  c->r[4]=c->r[13]+0xFFFFB46Bu; // 800D4854
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4858
  c->r[5]=0u+0x00000000u; // 800D485C
  c->r[6]=0u+0x00001001u; // 800D4860
  c->lr=0x800D4868u; f_80244D20(c); // 800D4864
  cmps(c,0,(int32_t)c->r[3],0); // 800D4868
  if (crb(c,2)) { goto L_800D4874; } // 800D486C
  c->lr=0x800D4874u; f_800D4730(c); // 800D4870
L_800D4874:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4874
  c->lr=c->r[0]; // 800D4878
  c->r[1]=c->r[1]+0x00000010u; // 800D487C
  return; // 800D4880
}

// fn_800D4884
void f_800D4884(Ctx* __restrict c) {
  trace_call(0x800D4884u);
  c->r[4]=0u+0x80420000u; // 800D4884
  c->r[0]=0u+0x00000000u; // 800D4888
  c->r[4]=c->r[4]+0xFFFF85ECu; // 800D488C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4890
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4894
  return; // 800D4898
}

// fn_800D489C
void f_800D489C(Ctx* __restrict c) {
  trace_call(0x800D489Cu);
  f_8030D728(c); return; // 800D489C
}

// fn_800D48A0
void f_800D48A0(Ctx* __restrict c) {
  trace_call(0x800D48A0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D48A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D48A4
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D48A8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D48AC
  return; // 800D48B0
}

// fn_800D48B4
void f_800D48B4(Ctx* __restrict c) {
  trace_call(0x800D48B4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D48B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D48B8
  c->ctr=c->r[12]; // 800D48BC
  if (true) { dispatch(c,c->ctr); return; } // 800D48C0
}

// fn_800D48C4
void f_800D48C4(Ctx* __restrict c) {
  trace_call(0x800D48C4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D48C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D48C8
  c->ctr=c->r[12]; // 800D48CC
  if (true) { dispatch(c,c->ctr); return; } // 800D48D0
}

// fn_800D48D4
void f_800D48D4(Ctx* __restrict c) {
  trace_call(0x800D48D4u);
  c->r[3]=0u+0x80410000u; // 800D48D4
  c->r[3]=c->r[3]+0xFFFFD3F0u; // 800D48D8
  return; // 800D48DC
}

// fn_800D48E0
void f_800D48E0(Ctx* __restrict c) {
  trace_call(0x800D48E0u);
  c->r[3]=0u+0x0000000Cu; // 800D48E0
  return; // 800D48E4
}

// fn_800D48E8
void f_800D48E8(Ctx* __restrict c) {
  trace_call(0x800D48E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D48E8
  c->r[0]=c->lr; // 800D48EC
  c->r[3]=0u+0x0000000Cu; // 800D48F0
  c->r[4]=c->r[13]+0xFFFFB470u; // 800D48F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D48F8
  c->r[5]=0u+0x00000000u; // 800D48FC
  c->r[6]=0u+0x00001001u; // 800D4900
  c->lr=0x800D4908u; f_80244D20(c); // 800D4904
  cmps(c,0,(int32_t)c->r[3],0); // 800D4908
  if (crb(c,2)) { goto L_800D4914; } // 800D490C
  c->lr=0x800D4914u; f_800D4884(c); // 800D4910
L_800D4914:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4914
  c->lr=c->r[0]; // 800D4918
  c->r[1]=c->r[1]+0x00000010u; // 800D491C
  return; // 800D4920
}

// fn_800D4924
void f_800D4924(Ctx* __restrict c) {
  trace_call(0x800D4924u);
  c->r[4]=0u+0x80420000u; // 800D4924
  c->r[0]=0u+0x00000000u; // 800D4928
  c->r[4]=c->r[4]+0xFFFF85B8u; // 800D492C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4930
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4934
  return; // 800D4938
}

// fn_800D493C
void f_800D493C(Ctx* __restrict c) {
  trace_call(0x800D493Cu);
  f_8030D728(c); return; // 800D493C
}

// fn_800D4940
void f_800D4940(Ctx* __restrict c) {
  trace_call(0x800D4940u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D4940
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4944
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D4948
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D494C
  return; // 800D4950
}

// fn_800D4954
void f_800D4954(Ctx* __restrict c) {
  trace_call(0x800D4954u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4954
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4958
  c->ctr=c->r[12]; // 800D495C
  if (true) { dispatch(c,c->ctr); return; } // 800D4960
}

// fn_800D4964
void f_800D4964(Ctx* __restrict c) {
  trace_call(0x800D4964u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4964
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4968
  c->ctr=c->r[12]; // 800D496C
  if (true) { dispatch(c,c->ctr); return; } // 800D4970
}

// fn_800D4974
void f_800D4974(Ctx* __restrict c) {
  trace_call(0x800D4974u);
  c->r[3]=c->r[13]+0xFFFFB475u; // 800D4974
  return; // 800D4978
}

// fn_800D497C
void f_800D497C(Ctx* __restrict c) {
  trace_call(0x800D497Cu);
  c->r[3]=0u+0x0000000Cu; // 800D497C
  return; // 800D4980
}

// fn_800D4984
void f_800D4984(Ctx* __restrict c) {
  trace_call(0x800D4984u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4984
  c->r[0]=c->lr; // 800D4988
  c->r[3]=0u+0x0000000Cu; // 800D498C
  c->r[4]=c->r[13]+0xFFFFB47Bu; // 800D4990
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4994
  c->r[5]=0u+0x00000000u; // 800D4998
  c->r[6]=0u+0x00001001u; // 800D499C
  c->lr=0x800D49A4u; f_80244D20(c); // 800D49A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D49A4
  if (crb(c,2)) { goto L_800D49B0; } // 800D49A8
  c->lr=0x800D49B0u; f_800D4924(c); // 800D49AC
L_800D49B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D49B0
  c->lr=c->r[0]; // 800D49B4
  c->r[1]=c->r[1]+0x00000010u; // 800D49B8
  return; // 800D49BC
}

// fn_800D49C0
void f_800D49C0(Ctx* __restrict c) {
  trace_call(0x800D49C0u);
  c->r[4]=0u+0x80420000u; // 800D49C0
  c->r[0]=0u+0x00000000u; // 800D49C4
  c->r[4]=c->r[4]+0xFFFF8584u; // 800D49C8
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D49CC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D49D0
  return; // 800D49D4
}

// fn_800D49D8
void f_800D49D8(Ctx* __restrict c) {
  trace_call(0x800D49D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D49D8
  c->r[0]=c->lr; // 800D49DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D49E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D49E4
  c->r[30]=c->r[3]|c->r[3]; // 800D49E8
  c->r[31]=c->r[4]|c->r[4]; // 800D49EC
  c->lr=0x800D49F4u; f_8030D728(c); // 800D49F0
  c->r[3]=c->r[31]|c->r[31]; // 800D49F4
  c->lr=0x800D49FCu; f_8030BD1C(c); // 800D49F8
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D49FC
  c->r[3]=c->r[31]|c->r[31]; // 800D4A00
  c->lr=0x800D4A08u; f_8030BD1C(c); // 800D4A04
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D4A08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4A0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4A10
  c->lr=c->r[0]; // 800D4A14
  c->r[1]=c->r[1]+0x00000010u; // 800D4A18
  return; // 800D4A1C
}

// fn_800D4A20
void f_800D4A20(Ctx* __restrict c) {
  trace_call(0x800D4A20u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D4A20
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D4A24
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800D4A28
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D4A2C
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D4A30
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D4A34
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 800D4A38
  W32(c->r[4]+0x00000010u,c->r[0]); // 800D4A3C
  return; // 800D4A40
}

// fn_800D4A44
void f_800D4A44(Ctx* __restrict c) {
  trace_call(0x800D4A44u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4A44
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4A48
  c->ctr=c->r[12]; // 800D4A4C
  if (true) { dispatch(c,c->ctr); return; } // 800D4A50
}

// fn_800D4A54
void f_800D4A54(Ctx* __restrict c) {
  trace_call(0x800D4A54u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4A54
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4A58
  c->ctr=c->r[12]; // 800D4A5C
  if (true) { dispatch(c,c->ctr); return; } // 800D4A60
}

// fn_800D4A64
void f_800D4A64(Ctx* __restrict c) {
  trace_call(0x800D4A64u);
  c->r[3]=0u+0x80410000u; // 800D4A64
  c->r[3]=c->r[3]+0xFFFFD408u; // 800D4A68
  return; // 800D4A6C
}

// fn_800D4A70
void f_800D4A70(Ctx* __restrict c) {
  trace_call(0x800D4A70u);
  c->r[3]=0u+0x00000014u; // 800D4A70
  return; // 800D4A74
}

// fn_800D4A78
void f_800D4A78(Ctx* __restrict c) {
  trace_call(0x800D4A78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4A78
  c->r[0]=c->lr; // 800D4A7C
  c->r[3]=0u+0x00000014u; // 800D4A80
  c->r[4]=c->r[13]+0xFFFFB480u; // 800D4A84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4A88
  c->r[5]=0u+0x00000000u; // 800D4A8C
  c->r[6]=0u+0x00001001u; // 800D4A90
  c->lr=0x800D4A98u; f_80244D20(c); // 800D4A94
  cmps(c,0,(int32_t)c->r[3],0); // 800D4A98
  if (crb(c,2)) { goto L_800D4AA4; } // 800D4A9C
  c->lr=0x800D4AA4u; f_800D49C0(c); // 800D4AA0
L_800D4AA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4AA4
  c->lr=c->r[0]; // 800D4AA8
  c->r[1]=c->r[1]+0x00000010u; // 800D4AAC
  return; // 800D4AB0
}

// fn_800D4AB4
void f_800D4AB4(Ctx* __restrict c) {
  trace_call(0x800D4AB4u);
  c->r[6]=0u+0x80420000u; // 800D4AB4
  c->r[4]=0u+0x39070000u; // 800D4AB8
  c->r[6]=c->r[6]+0xFFFF8550u; // 800D4ABC
  c->r[5]=0u+0x00000000u; // 800D4AC0
  c->r[0]=c->r[4]+0xFFFFF5DCu; // 800D4AC4
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D4AC8
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D4ACC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4AD0
  return; // 800D4AD4
}

// fn_800D4AD8
void f_800D4AD8(Ctx* __restrict c) {
  trace_call(0x800D4AD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4AD8
  c->r[0]=c->lr; // 800D4ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4AE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4AE4
  c->r[30]=c->r[3]|c->r[3]; // 800D4AE8
  c->r[31]=c->r[4]|c->r[4]; // 800D4AEC
  c->lr=0x800D4AF4u; f_8030D728(c); // 800D4AF0
  c->r[3]=c->r[31]|c->r[31]; // 800D4AF4
  c->r[4]=0u+0x00000000u; // 800D4AF8
  c->lr=0x800D4B00u; f_8030BE30(c); // 800D4AFC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4B00
  c->r[3]=c->r[31]|c->r[31]; // 800D4B04
  c->lr=0x800D4B0Cu; f_8030BD1C(c); // 800D4B08
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D4B0C
  c->r[3]=c->r[31]|c->r[31]; // 800D4B10
  c->lr=0x800D4B18u; f_8030C0A0(c); // 800D4B14
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800D4B18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4B20
  c->lr=c->r[0]; // 800D4B24
  c->r[1]=c->r[1]+0x00000010u; // 800D4B28
  return; // 800D4B2C
}

// fn_800D4B30
void f_800D4B30(Ctx* __restrict c) {
  trace_call(0x800D4B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4B30
  c->r[0]=c->lr; // 800D4B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4B3C
  c->r[31]=c->r[4]|c->r[4]; // 800D4B40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4B44
  c->r[30]=c->r[3]|c->r[3]; // 800D4B48
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4B4C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D4B50
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4B54
  c->r[3]=c->r[4]+0x0000000Cu; // 800D4B58
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D4B5C
  c->r[4]=c->r[30]+0x0000000Cu; // 800D4B60
  c->lr=0x800D4B68u; f_8003AB48(c); // 800D4B64
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4B68
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800D4B6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4B70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4B74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4B78
  c->lr=c->r[0]; // 800D4B7C
  c->r[1]=c->r[1]+0x00000010u; // 800D4B80
  return; // 800D4B84
}

// fn_800D4B88
void f_800D4B88(Ctx* __restrict c) {
  trace_call(0x800D4B88u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4B88
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4B8C
  c->ctr=c->r[12]; // 800D4B90
  if (true) { dispatch(c,c->ctr); return; } // 800D4B94
}

// fn_800D4B98
void f_800D4B98(Ctx* __restrict c) {
  trace_call(0x800D4B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4B98
  c->r[0]=c->lr; // 800D4B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4BA0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4BA4
  c->r[29]=c->r[3]|c->r[3]; // 800D4BA8
  c->r[30]=c->r[4]|c->r[4]; // 800D4BAC
  c->r[31]=c->r[5]|c->r[5]; // 800D4BB0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D4BB4
  cmps(c,0,(int32_t)c->r[0],7); // 800D4BB8
  if (!crb(c,0)) { goto L_800D4BCC; } // 800D4BBC
  c->r[4]=c->r[31]|c->r[31]; // 800D4BC0
  c->r[3]=c->r[3]+0x0000000Cu; // 800D4BC4
  c->lr=0x800D4BCCu; f_8003A994(c); // 800D4BC8
L_800D4BCC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D4BCC
  c->r[3]=c->r[29]|c->r[29]; // 800D4BD0
  c->r[4]=c->r[30]|c->r[30]; // 800D4BD4
  c->r[5]=c->r[31]|c->r[31]; // 800D4BD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4BDC
  c->ctr=c->r[12]; // 800D4BE0
  if (true) { c->lr=0x800D4BE8u; dispatch(c,c->ctr); } // 800D4BE4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4BE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4BEC
  c->lr=c->r[0]; // 800D4BF0
  c->r[1]=c->r[1]+0x00000020u; // 800D4BF4
  return; // 800D4BF8
}

// fn_800D4BFC
void f_800D4BFC(Ctx* __restrict c) {
  trace_call(0x800D4BFCu);
  c->r[3]=0u+0x80410000u; // 800D4BFC
  c->r[3]=c->r[3]+0xFFFFD415u; // 800D4C00
  return; // 800D4C04
}

// fn_800D4C08
void f_800D4C08(Ctx* __restrict c) {
  trace_call(0x800D4C08u);
  c->r[3]=0u+0x0000001Cu; // 800D4C08
  return; // 800D4C0C
}

// fn_800D4C10
void f_800D4C10(Ctx* __restrict c) {
  trace_call(0x800D4C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C10
  c->r[0]=c->lr; // 800D4C14
  c->r[3]=0u+0x0000001Cu; // 800D4C18
  c->r[4]=c->r[13]+0xFFFFB485u; // 800D4C1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4C20
  c->r[5]=0u+0x00000000u; // 800D4C24
  c->r[6]=0u+0x00001001u; // 800D4C28
  c->lr=0x800D4C30u; f_80244D20(c); // 800D4C2C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4C30
  if (crb(c,2)) { goto L_800D4C3C; } // 800D4C34
  c->lr=0x800D4C3Cu; f_800D4AB4(c); // 800D4C38
L_800D4C3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4C3C
  c->lr=c->r[0]; // 800D4C40
  c->r[1]=c->r[1]+0x00000010u; // 800D4C44
  return; // 800D4C48
}

// fn_800D4C4C
void f_800D4C4C(Ctx* __restrict c) {
  trace_call(0x800D4C4Cu);
  c->r[4]=0u+0x80420000u; // 800D4C4C
  c->r[0]=0u+0x00000000u; // 800D4C50
  c->r[4]=c->r[4]+0xFFFF851Cu; // 800D4C54
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4C58
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4C5C
  return; // 800D4C60
}

// fn_800D4C64
void f_800D4C64(Ctx* __restrict c) {
  trace_call(0x800D4C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C64
  c->r[0]=c->lr; // 800D4C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4C6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4C70
  c->r[30]=c->r[3]|c->r[3]; // 800D4C74
  c->r[31]=c->r[4]|c->r[4]; // 800D4C78
  c->lr=0x800D4C80u; f_8030D728(c); // 800D4C7C
  c->r[3]=c->r[31]|c->r[31]; // 800D4C80
  c->lr=0x800D4C88u; f_8030BD1C(c); // 800D4C84
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4C88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4C90
  c->lr=c->r[0]; // 800D4C94
  c->r[1]=c->r[1]+0x00000010u; // 800D4C98
  return; // 800D4C9C
}

// fn_800D4CA0
void f_800D4CA0(Ctx* __restrict c) {
  trace_call(0x800D4CA0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D4CA0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D4CA4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D4CA8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D4CAC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D4CB0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D4CB4
  return; // 800D4CB8
}

// fn_800D4CBC
void f_800D4CBC(Ctx* __restrict c) {
  trace_call(0x800D4CBCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4CBC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4CC0
  c->ctr=c->r[12]; // 800D4CC4
  if (true) { dispatch(c,c->ctr); return; } // 800D4CC8
}

// fn_800D4CCC
void f_800D4CCC(Ctx* __restrict c) {
  trace_call(0x800D4CCCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4CCC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4CD0
  c->ctr=c->r[12]; // 800D4CD4
  if (true) { dispatch(c,c->ctr); return; } // 800D4CD8
}

// fn_800D4CDC
void f_800D4CDC(Ctx* __restrict c) {
  trace_call(0x800D4CDCu);
  c->r[3]=0u+0x80410000u; // 800D4CDC
  c->r[3]=c->r[3]+0xFFFFD42Au; // 800D4CE0
  return; // 800D4CE4
}

// fn_800D4CE8
void f_800D4CE8(Ctx* __restrict c) {
  trace_call(0x800D4CE8u);
  c->r[3]=0u+0x00000010u; // 800D4CE8
  return; // 800D4CEC
}

// fn_800D4CF0
void f_800D4CF0(Ctx* __restrict c) {
  trace_call(0x800D4CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4CF0
  c->r[0]=c->lr; // 800D4CF4
  c->r[3]=0u+0x00000010u; // 800D4CF8
  c->r[4]=c->r[13]+0xFFFFB48Au; // 800D4CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4D00
  c->r[5]=0u+0x00000000u; // 800D4D04
  c->r[6]=0u+0x00001001u; // 800D4D08
  c->lr=0x800D4D10u; f_80244D20(c); // 800D4D0C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D10
  if (crb(c,2)) { goto L_800D4D1C; } // 800D4D14
  c->lr=0x800D4D1Cu; f_800D4C4C(c); // 800D4D18
L_800D4D1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4D1C
  c->lr=c->r[0]; // 800D4D20
  c->r[1]=c->r[1]+0x00000010u; // 800D4D24
  return; // 800D4D28
}

// fn_800D4D2C
void f_800D4D2C(Ctx* __restrict c) {
  trace_call(0x800D4D2Cu);
  c->r[4]=0u+0x80420000u; // 800D4D2C
  c->r[0]=0u+0x00000000u; // 800D4D30
  c->r[4]=c->r[4]+0xFFFF84E8u; // 800D4D34
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4D38
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4D3C
  return; // 800D4D40
}

// fn_800D4D44
void f_800D4D44(Ctx* __restrict c) {
  trace_call(0x800D4D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D44
  c->r[0]=c->lr; // 800D4D48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4D4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4D50
  c->r[30]=c->r[3]|c->r[3]; // 800D4D54
  c->r[31]=c->r[4]|c->r[4]; // 800D4D58
  c->lr=0x800D4D60u; f_8030D728(c); // 800D4D5C
  c->r[3]=c->r[31]|c->r[31]; // 800D4D60
  c->lr=0x800D4D68u; f_8030BD1C(c); // 800D4D64
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4D68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4D6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4D70
  c->lr=c->r[0]; // 800D4D74
  c->r[1]=c->r[1]+0x00000010u; // 800D4D78
  return; // 800D4D7C
}

// fn_800D4D80
void f_800D4D80(Ctx* __restrict c) {
  trace_call(0x800D4D80u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D4D80
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D4D84
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D4D88
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D4D8C
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D4D90
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D4D94
  return; // 800D4D98
}

// fn_800D4D9C
void f_800D4D9C(Ctx* __restrict c) {
  trace_call(0x800D4D9Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4D9C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4DA0
  c->ctr=c->r[12]; // 800D4DA4
  if (true) { dispatch(c,c->ctr); return; } // 800D4DA8
}

// fn_800D4DAC
void f_800D4DAC(Ctx* __restrict c) {
  trace_call(0x800D4DACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4DAC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4DB0
  c->ctr=c->r[12]; // 800D4DB4
  if (true) { dispatch(c,c->ctr); return; } // 800D4DB8
}

// fn_800D4DBC
void f_800D4DBC(Ctx* __restrict c) {
  trace_call(0x800D4DBCu);
  c->r[3]=0u+0x80410000u; // 800D4DBC
  c->r[3]=c->r[3]+0xFFFFD447u; // 800D4DC0
  return; // 800D4DC4
}

// fn_800D4DC8
void f_800D4DC8(Ctx* __restrict c) {
  trace_call(0x800D4DC8u);
  c->r[3]=0u+0x00000010u; // 800D4DC8
  return; // 800D4DCC
}

// fn_800D4DD0
void f_800D4DD0(Ctx* __restrict c) {
  trace_call(0x800D4DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4DD0
  c->r[0]=c->lr; // 800D4DD4
  c->r[3]=0u+0x00000010u; // 800D4DD8
  c->r[4]=c->r[13]+0xFFFFB48Fu; // 800D4DDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4DE0
  c->r[5]=0u+0x00000000u; // 800D4DE4
  c->r[6]=0u+0x00001001u; // 800D4DE8
  c->lr=0x800D4DF0u; f_80244D20(c); // 800D4DEC
  cmps(c,0,(int32_t)c->r[3],0); // 800D4DF0
  if (crb(c,2)) { goto L_800D4DFC; } // 800D4DF4
  c->lr=0x800D4DFCu; f_800D4D2C(c); // 800D4DF8
L_800D4DFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4DFC
  c->lr=c->r[0]; // 800D4E00
  c->r[1]=c->r[1]+0x00000010u; // 800D4E04
  return; // 800D4E08
}

// fn_800D4E0C
void f_800D4E0C(Ctx* __restrict c) {
  trace_call(0x800D4E0Cu);
  c->r[6]=0u+0x80420000u; // 800D4E0C
  c->r[4]=0u+0x39070000u; // 800D4E10
  c->r[6]=c->r[6]+0xFFFF84B4u; // 800D4E14
  c->r[5]=0u+0x00000000u; // 800D4E18
  c->r[0]=c->r[4]+0xFFFFF5DCu; // 800D4E1C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D4E20
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D4E24
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4E28
  return; // 800D4E2C
}

// fn_800D4E30
void f_800D4E30(Ctx* __restrict c) {
  trace_call(0x800D4E30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E30
  c->r[0]=c->lr; // 800D4E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4E38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4E3C
  c->r[30]=c->r[3]|c->r[3]; // 800D4E40
  c->r[31]=c->r[4]|c->r[4]; // 800D4E44
  c->lr=0x800D4E4Cu; f_8030D728(c); // 800D4E48
  c->r[3]=c->r[31]|c->r[31]; // 800D4E4C
  c->r[4]=0u+0x00000000u; // 800D4E50
  c->lr=0x800D4E58u; f_8030BE30(c); // 800D4E54
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4E58
  c->r[3]=c->r[31]|c->r[31]; // 800D4E5C
  c->lr=0x800D4E64u; f_8030BD1C(c); // 800D4E60
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D4E64
  c->r[3]=c->r[31]|c->r[31]; // 800D4E68
  c->lr=0x800D4E70u; f_8030C0A0(c); // 800D4E6C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800D4E70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4E74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4E78
  c->lr=c->r[0]; // 800D4E7C
  c->r[1]=c->r[1]+0x00000010u; // 800D4E80
  return; // 800D4E84
}

// fn_800D4E88
void f_800D4E88(Ctx* __restrict c) {
  trace_call(0x800D4E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E88
  c->r[0]=c->lr; // 800D4E8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4E90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D4E94
  c->r[31]=c->r[4]|c->r[4]; // 800D4E98
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D4E9C
  c->r[30]=c->r[3]|c->r[3]; // 800D4EA0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4EA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D4EA8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4EAC
  c->r[3]=c->r[4]+0x0000000Cu; // 800D4EB0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D4EB4
  c->r[4]=c->r[30]+0x0000000Cu; // 800D4EB8
  c->lr=0x800D4EC0u; f_8003AB48(c); // 800D4EBC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D4EC0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800D4EC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4EC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4ED0
  c->lr=c->r[0]; // 800D4ED4
  c->r[1]=c->r[1]+0x00000010u; // 800D4ED8
  return; // 800D4EDC
}

// fn_800D4EE0
void f_800D4EE0(Ctx* __restrict c) {
  trace_call(0x800D4EE0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D4EE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D4EE4
  c->ctr=c->r[12]; // 800D4EE8
  if (true) { dispatch(c,c->ctr); return; } // 800D4EEC
}

// fn_800D4EF0
void f_800D4EF0(Ctx* __restrict c) {
  trace_call(0x800D4EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4EF0
  c->r[0]=c->lr; // 800D4EF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4EF8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4EFC
  c->r[29]=c->r[3]|c->r[3]; // 800D4F00
  c->r[30]=c->r[4]|c->r[4]; // 800D4F04
  c->r[31]=c->r[5]|c->r[5]; // 800D4F08
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D4F0C
  cmps(c,0,(int32_t)c->r[0],7); // 800D4F10
  if (!crb(c,0)) { goto L_800D4F24; } // 800D4F14
  c->r[4]=c->r[31]|c->r[31]; // 800D4F18
  c->r[3]=c->r[3]+0x0000000Cu; // 800D4F1C
  c->lr=0x800D4F24u; f_8003A994(c); // 800D4F20
L_800D4F24:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D4F24
  c->r[3]=c->r[29]|c->r[29]; // 800D4F28
  c->r[4]=c->r[30]|c->r[30]; // 800D4F2C
  c->r[5]=c->r[31]|c->r[31]; // 800D4F30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D4F34
  c->ctr=c->r[12]; // 800D4F38
  if (true) { c->lr=0x800D4F40u; dispatch(c,c->ctr); } // 800D4F3C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4F40
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4F44
  c->lr=c->r[0]; // 800D4F48
  c->r[1]=c->r[1]+0x00000020u; // 800D4F4C
  return; // 800D4F50
}

// fn_800D4F54
void f_800D4F54(Ctx* __restrict c) {
  trace_call(0x800D4F54u);
  c->r[3]=0u+0x80410000u; // 800D4F54
  c->r[3]=c->r[3]+0xFFFFD458u; // 800D4F58
  return; // 800D4F5C
}

// fn_800D4F60
void f_800D4F60(Ctx* __restrict c) {
  trace_call(0x800D4F60u);
  c->r[3]=0u+0x0000001Cu; // 800D4F60
  return; // 800D4F64
}

// fn_800D4F68
void f_800D4F68(Ctx* __restrict c) {
  trace_call(0x800D4F68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4F68
  c->r[0]=c->lr; // 800D4F6C
  c->r[3]=0u+0x0000001Cu; // 800D4F70
  c->r[4]=c->r[13]+0xFFFFB494u; // 800D4F74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4F78
  c->r[5]=0u+0x00000000u; // 800D4F7C
  c->r[6]=0u+0x00001001u; // 800D4F80
  c->lr=0x800D4F88u; f_80244D20(c); // 800D4F84
  cmps(c,0,(int32_t)c->r[3],0); // 800D4F88
  if (crb(c,2)) { goto L_800D4F94; } // 800D4F8C
  c->lr=0x800D4F94u; f_800D4E0C(c); // 800D4F90
L_800D4F94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4F94
  c->lr=c->r[0]; // 800D4F98
  c->r[1]=c->r[1]+0x00000010u; // 800D4F9C
  return; // 800D4FA0
}

// fn_800D4FA4
void f_800D4FA4(Ctx* __restrict c) {
  trace_call(0x800D4FA4u);
  c->r[4]=0u+0x80420000u; // 800D4FA4
  c->r[0]=0u+0x00000000u; // 800D4FA8
  c->r[4]=c->r[4]+0xFFFF8480u; // 800D4FAC
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4FB0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4FB4
  return; // 800D4FB8
}

// fn_800D4FBC
void f_800D4FBC(Ctx* __restrict c) {
  trace_call(0x800D4FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4FBC
  c->r[0]=c->lr; // 800D4FC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4FC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4FC8
  c->r[30]=c->r[3]|c->r[3]; // 800D4FCC
  c->r[31]=c->r[4]|c->r[4]; // 800D4FD0
  c->lr=0x800D4FD8u; f_8030D728(c); // 800D4FD4
  c->r[3]=c->r[31]|c->r[31]; // 800D4FD8
  c->lr=0x800D4FE0u; f_8030BD1C(c); // 800D4FDC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D4FE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4FE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4FE8
  c->lr=c->r[0]; // 800D4FEC
  c->r[1]=c->r[1]+0x00000010u; // 800D4FF0
  return; // 800D4FF4
}

// fn_800D4FF8
void f_800D4FF8(Ctx* __restrict c) {
  trace_call(0x800D4FF8u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D4FF8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D4FFC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D5000
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D5004
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D5008
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D500C
  return; // 800D5010
}

// fn_800D5014
void f_800D5014(Ctx* __restrict c) {
  trace_call(0x800D5014u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5014
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D5018
  c->ctr=c->r[12]; // 800D501C
  if (true) { dispatch(c,c->ctr); return; } // 800D5020
}

// fn_800D5024
void f_800D5024(Ctx* __restrict c) {
  trace_call(0x800D5024u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5024
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5028
  c->ctr=c->r[12]; // 800D502C
  if (true) { dispatch(c,c->ctr); return; } // 800D5030
}

// fn_800D5034
void f_800D5034(Ctx* __restrict c) {
  trace_call(0x800D5034u);
  c->r[3]=0u+0x80410000u; // 800D5034
  c->r[3]=c->r[3]+0xFFFFD46Fu; // 800D5038
  return; // 800D503C
}

// fn_800D5040
void f_800D5040(Ctx* __restrict c) {
  trace_call(0x800D5040u);
  c->r[3]=0u+0x00000010u; // 800D5040
  return; // 800D5044
}

// fn_800D5048
void f_800D5048(Ctx* __restrict c) {
  trace_call(0x800D5048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5048
  c->r[0]=c->lr; // 800D504C
  c->r[3]=0u+0x00000010u; // 800D5050
  c->r[4]=c->r[13]+0xFFFFB499u; // 800D5054
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5058
  c->r[5]=0u+0x00000000u; // 800D505C
  c->r[6]=0u+0x00001001u; // 800D5060
  c->lr=0x800D5068u; f_80244D20(c); // 800D5064
  cmps(c,0,(int32_t)c->r[3],0); // 800D5068
  if (crb(c,2)) { goto L_800D5074; } // 800D506C
  c->lr=0x800D5074u; f_800D4FA4(c); // 800D5070
L_800D5074:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5074
  c->lr=c->r[0]; // 800D5078
  c->r[1]=c->r[1]+0x00000010u; // 800D507C
  return; // 800D5080
}

// fn_800D5084
void f_800D5084(Ctx* __restrict c) {
  trace_call(0x800D5084u);
  c->r[4]=0u+0x80420000u; // 800D5084
  c->r[0]=0u+0x00000000u; // 800D5088
  c->r[4]=c->r[4]+0xFFFF844Cu; // 800D508C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D5090
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5094
  return; // 800D5098
}

// fn_800D509C
void f_800D509C(Ctx* __restrict c) {
  trace_call(0x800D509Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D509C
  c->r[0]=c->lr; // 800D50A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D50A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D50A8
  c->r[30]=c->r[3]|c->r[3]; // 800D50AC
  c->r[31]=c->r[4]|c->r[4]; // 800D50B0
  c->lr=0x800D50B8u; f_8030D728(c); // 800D50B4
  c->r[3]=c->r[31]|c->r[31]; // 800D50B8
  c->lr=0x800D50C0u; f_8030BD1C(c); // 800D50BC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D50C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D50C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D50C8
  c->lr=c->r[0]; // 800D50CC
  c->r[1]=c->r[1]+0x00000010u; // 800D50D0
  return; // 800D50D4
}

// fn_800D50D8
void f_800D50D8(Ctx* __restrict c) {
  trace_call(0x800D50D8u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D50D8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D50DC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D50E0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D50E4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D50E8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D50EC
  return; // 800D50F0
}

// fn_800D50F4
void f_800D50F4(Ctx* __restrict c) {
  trace_call(0x800D50F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D50F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D50F8
  c->ctr=c->r[12]; // 800D50FC
  if (true) { dispatch(c,c->ctr); return; } // 800D5100
}

// fn_800D5104
void f_800D5104(Ctx* __restrict c) {
  trace_call(0x800D5104u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5104
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5108
  c->ctr=c->r[12]; // 800D510C
  if (true) { dispatch(c,c->ctr); return; } // 800D5110
}

// fn_800D5114
void f_800D5114(Ctx* __restrict c) {
  trace_call(0x800D5114u);
  c->r[3]=0u+0x80410000u; // 800D5114
  c->r[3]=c->r[3]+0xFFFFD47Fu; // 800D5118
  return; // 800D511C
}

// fn_800D5120
void f_800D5120(Ctx* __restrict c) {
  trace_call(0x800D5120u);
  c->r[3]=0u+0x00000010u; // 800D5120
  return; // 800D5124
}

// fn_800D5128
void f_800D5128(Ctx* __restrict c) {
  trace_call(0x800D5128u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5128
  c->r[0]=c->lr; // 800D512C
  c->r[3]=0u+0x00000010u; // 800D5130
  c->r[4]=c->r[13]+0xFFFFB49Eu; // 800D5134
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5138
  c->r[5]=0u+0x00000000u; // 800D513C
  c->r[6]=0u+0x00001001u; // 800D5140
  c->lr=0x800D5148u; f_80244D20(c); // 800D5144
  cmps(c,0,(int32_t)c->r[3],0); // 800D5148
  if (crb(c,2)) { goto L_800D5154; } // 800D514C
  c->lr=0x800D5154u; f_800D5084(c); // 800D5150
L_800D5154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5154
  c->lr=c->r[0]; // 800D5158
  c->r[1]=c->r[1]+0x00000010u; // 800D515C
  return; // 800D5160
}

// fn_800D5164
void f_800D5164(Ctx* __restrict c) {
  trace_call(0x800D5164u);
  c->r[4]=0u+0x80420000u; // 800D5164
  c->r[0]=0u+0x00000000u; // 800D5168
  c->r[4]=c->r[4]+0xFFFF8418u; // 800D516C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D5170
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5174
  return; // 800D5178
}

// fn_800D517C
void f_800D517C(Ctx* __restrict c) {
  trace_call(0x800D517Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D517C
  c->r[0]=c->lr; // 800D5180
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5184
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5188
  c->r[30]=c->r[3]|c->r[3]; // 800D518C
  c->r[31]=c->r[4]|c->r[4]; // 800D5190
  c->lr=0x800D5198u; f_8030D728(c); // 800D5194
  c->r[3]=c->r[31]|c->r[31]; // 800D5198
  c->lr=0x800D51A0u; f_8030BD1C(c); // 800D519C
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D51A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D51A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D51A8
  c->lr=c->r[0]; // 800D51AC
  c->r[1]=c->r[1]+0x00000010u; // 800D51B0
  return; // 800D51B4
}

// fn_800D51B8
void f_800D51B8(Ctx* __restrict c) {
  trace_call(0x800D51B8u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D51B8
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D51BC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D51C0
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D51C4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D51C8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D51CC
  return; // 800D51D0
}

// fn_800D51D4
void f_800D51D4(Ctx* __restrict c) {
  trace_call(0x800D51D4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D51D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D51D8
  c->ctr=c->r[12]; // 800D51DC
  if (true) { dispatch(c,c->ctr); return; } // 800D51E0
}

// fn_800D51E4
void f_800D51E4(Ctx* __restrict c) {
  trace_call(0x800D51E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D51E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D51E8
  c->ctr=c->r[12]; // 800D51EC
  if (true) { dispatch(c,c->ctr); return; } // 800D51F0
}

// fn_800D51F4
void f_800D51F4(Ctx* __restrict c) {
  trace_call(0x800D51F4u);
  c->r[3]=0u+0x80410000u; // 800D51F4
  c->r[3]=c->r[3]+0xFFFFD48Du; // 800D51F8
  return; // 800D51FC
}

// fn_800D5200
void f_800D5200(Ctx* __restrict c) {
  trace_call(0x800D5200u);
  c->r[3]=0u+0x00000010u; // 800D5200
  return; // 800D5204
}

// fn_800D5208
void f_800D5208(Ctx* __restrict c) {
  trace_call(0x800D5208u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5208
  c->r[0]=c->lr; // 800D520C
  c->r[3]=0u+0x00000010u; // 800D5210
  c->r[4]=c->r[13]+0xFFFFB4A3u; // 800D5214
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5218
  c->r[5]=0u+0x00000000u; // 800D521C
  c->r[6]=0u+0x00001001u; // 800D5220
  c->lr=0x800D5228u; f_80244D20(c); // 800D5224
  cmps(c,0,(int32_t)c->r[3],0); // 800D5228
  if (crb(c,2)) { goto L_800D5234; } // 800D522C
  c->lr=0x800D5234u; f_800D5164(c); // 800D5230
L_800D5234:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5234
  c->lr=c->r[0]; // 800D5238
  c->r[1]=c->r[1]+0x00000010u; // 800D523C
  return; // 800D5240
}

// fn_800D5244
void f_800D5244(Ctx* __restrict c) {
  trace_call(0x800D5244u);
  c->r[5]=0u+0x80420000u; // 800D5244
  c->r[4]=0u+0x7CF50000u; // 800D5248
  c->r[5]=c->r[5]+0xFFFF83E4u; // 800D524C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D5250
  c->r[0]=c->r[4]+0x00004C05u; // 800D5254
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5258
  return; // 800D525C
}

// fn_800D5260
void f_800D5260(Ctx* __restrict c) {
  trace_call(0x800D5260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5260
  c->r[0]=c->lr; // 800D5264
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5268
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D526C
  c->r[30]=c->r[3]|c->r[3]; // 800D5270
  c->r[31]=c->r[4]|c->r[4]; // 800D5274
  c->lr=0x800D527Cu; f_8030D728(c); // 800D5278
  c->r[3]=c->r[31]|c->r[31]; // 800D527C
  c->lr=0x800D5284u; f_8030BD1C(c); // 800D5280
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 800D5284
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5288
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D528C
  c->lr=c->r[0]; // 800D5290
  c->r[1]=c->r[1]+0x00000010u; // 800D5294
  return; // 800D5298
}

// fn_800D529C
void f_800D529C(Ctx* __restrict c) {
  trace_call(0x800D529Cu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D529C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D52A0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800D52A4
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D52A8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D52AC
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800D52B0
  return; // 800D52B4
}

// fn_800D52B8
void f_800D52B8(Ctx* __restrict c) {
  trace_call(0x800D52B8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D52B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D52BC
  c->ctr=c->r[12]; // 800D52C0
  if (true) { dispatch(c,c->ctr); return; } // 800D52C4
}

// fn_800D52C8
void f_800D52C8(Ctx* __restrict c) {
  trace_call(0x800D52C8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D52C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D52CC
  c->ctr=c->r[12]; // 800D52D0
  if (true) { dispatch(c,c->ctr); return; } // 800D52D4
}

// fn_800D52D8
void f_800D52D8(Ctx* __restrict c) {
  trace_call(0x800D52D8u);
  c->r[3]=0u+0x80410000u; // 800D52D8
  c->r[3]=c->r[3]+0xFFFFD49Du; // 800D52DC
  return; // 800D52E0
}

// fn_800D52E4
void f_800D52E4(Ctx* __restrict c) {
  trace_call(0x800D52E4u);
  c->r[3]=0u+0x00000010u; // 800D52E4
  return; // 800D52E8
}

// fn_800D52EC
void f_800D52EC(Ctx* __restrict c) {
  trace_call(0x800D52ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D52EC
  c->r[0]=c->lr; // 800D52F0
  c->r[3]=0u+0x00000010u; // 800D52F4
  c->r[4]=c->r[13]+0xFFFFB4A8u; // 800D52F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D52FC
  c->r[5]=0u+0x00000000u; // 800D5300
  c->r[6]=0u+0x00001001u; // 800D5304
  c->lr=0x800D530Cu; f_80244D20(c); // 800D5308
  cmps(c,0,(int32_t)c->r[3],0); // 800D530C
  if (crb(c,2)) { goto L_800D5318; } // 800D5310
  c->lr=0x800D5318u; f_800D5244(c); // 800D5314
L_800D5318:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5318
  c->lr=c->r[0]; // 800D531C
  c->r[1]=c->r[1]+0x00000010u; // 800D5320
  return; // 800D5324
}

// fn_800D5328
void f_800D5328(Ctx* __restrict c) {
  trace_call(0x800D5328u);
  c->r[5]=0u+0x80420000u; // 800D5328
  c->r[4]=0u+0x39060000u; // 800D532C
  c->r[5]=c->r[5]+0xFFFF83B0u; // 800D5330
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D5334
  c->r[0]=c->r[4]+0xFFFFFCD6u; // 800D5338
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D533C
  return; // 800D5340
}

// fn_800D5344
void f_800D5344(Ctx* __restrict c) {
  trace_call(0x800D5344u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5344
  c->r[0]=c->lr; // 800D5348
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D534C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5350
  c->r[30]=c->r[3]|c->r[3]; // 800D5354
  c->r[31]=c->r[4]|c->r[4]; // 800D5358
  c->lr=0x800D5360u; f_8030D728(c); // 800D535C
  c->r[3]=c->r[31]|c->r[31]; // 800D5360
  c->r[4]=0u+0x00000000u; // 800D5364
  c->lr=0x800D536Cu; f_8030BE30(c); // 800D5368
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D536C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5370
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5374
  c->lr=c->r[0]; // 800D5378
  c->r[1]=c->r[1]+0x00000010u; // 800D537C
  return; // 800D5380
}

// fn_800D5384
void f_800D5384(Ctx* __restrict c) {
  trace_call(0x800D5384u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D5384
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D5388
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D538C
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D5390
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D5394
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D5398
  return; // 800D539C
}

// fn_800D53A0
void f_800D53A0(Ctx* __restrict c) {
  trace_call(0x800D53A0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D53A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D53A4
  c->ctr=c->r[12]; // 800D53A8
  if (true) { dispatch(c,c->ctr); return; } // 800D53AC
}

// fn_800D53B0
void f_800D53B0(Ctx* __restrict c) {
  trace_call(0x800D53B0u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D53B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D53B4
  c->ctr=c->r[12]; // 800D53B8
  if (true) { dispatch(c,c->ctr); return; } // 800D53BC
}

// fn_800D53C0
void f_800D53C0(Ctx* __restrict c) {
  trace_call(0x800D53C0u);
  c->r[3]=0u+0x80410000u; // 800D53C0
  c->r[3]=c->r[3]+0xFFFFD4AAu; // 800D53C4
  return; // 800D53C8
}

// fn_800D53CC
void f_800D53CC(Ctx* __restrict c) {
  trace_call(0x800D53CCu);
  c->r[3]=0u+0x00000010u; // 800D53CC
  return; // 800D53D0
}

// fn_800D53D4
void f_800D53D4(Ctx* __restrict c) {
  trace_call(0x800D53D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D53D4
  c->r[0]=c->lr; // 800D53D8
  c->r[3]=0u+0x00000010u; // 800D53DC
  c->r[4]=c->r[13]+0xFFFFB4ADu; // 800D53E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D53E4
  c->r[5]=0u+0x00000000u; // 800D53E8
  c->r[6]=0u+0x00001001u; // 800D53EC
  c->lr=0x800D53F4u; f_80244D20(c); // 800D53F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D53F4
  if (crb(c,2)) { goto L_800D5400; } // 800D53F8
  c->lr=0x800D5400u; f_800D5328(c); // 800D53FC
L_800D5400:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5400
  c->lr=c->r[0]; // 800D5404
  c->r[1]=c->r[1]+0x00000010u; // 800D5408
  return; // 800D540C
}

// fn_800D5410
void f_800D5410(Ctx* __restrict c) {
  trace_call(0x800D5410u);
  c->r[5]=0u+0x80420000u; // 800D5410
  c->r[4]=0u+0xDC6E0000u; // 800D5414
  c->r[5]=c->r[5]+0xFFFF837Cu; // 800D5418
  W32(c->r[3]+0x00000008u,c->r[5]); // 800D541C
  c->r[0]=c->r[4]+0xFFFF9AB7u; // 800D5420
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5424
  return; // 800D5428
}

// fn_800D542C
void f_800D542C(Ctx* __restrict c) {
  trace_call(0x800D542Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D542C
  c->r[0]=c->lr; // 800D5430
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5434
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5438
  c->r[30]=c->r[3]|c->r[3]; // 800D543C
  c->r[31]=c->r[4]|c->r[4]; // 800D5440
  c->lr=0x800D5448u; f_8030D728(c); // 800D5444
  c->r[3]=c->r[31]|c->r[31]; // 800D5448
  c->lr=0x800D5450u; f_8030C0A0(c); // 800D544C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 800D5450
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5454
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5458
  c->lr=c->r[0]; // 800D545C
  c->r[1]=c->r[1]+0x00000010u; // 800D5460
  return; // 800D5464
}

// fn_800D5468
void f_800D5468(Ctx* __restrict c) {
  trace_call(0x800D5468u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D5468
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D546C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D5470
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D5474
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5478
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D547C
  return; // 800D5480
}

// fn_800D5484
void f_800D5484(Ctx* __restrict c) {
  trace_call(0x800D5484u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5484
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D5488
  c->ctr=c->r[12]; // 800D548C
  if (true) { dispatch(c,c->ctr); return; } // 800D5490
}

// fn_800D5494
void f_800D5494(Ctx* __restrict c) {
  trace_call(0x800D5494u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5494
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5498
  c->ctr=c->r[12]; // 800D549C
  if (true) { dispatch(c,c->ctr); return; } // 800D54A0
}

// fn_800D54A4
void f_800D54A4(Ctx* __restrict c) {
  trace_call(0x800D54A4u);
  c->r[3]=0u+0x80410000u; // 800D54A4
  c->r[3]=c->r[3]+0xFFFFD4BCu; // 800D54A8
  return; // 800D54AC
}

// fn_800D54B0
void f_800D54B0(Ctx* __restrict c) {
  trace_call(0x800D54B0u);
  c->r[3]=0u+0x00000010u; // 800D54B0
  return; // 800D54B4
}

// fn_800D54B8
void f_800D54B8(Ctx* __restrict c) {
  trace_call(0x800D54B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D54B8
  c->r[0]=c->lr; // 800D54BC
  c->r[3]=0u+0x00000010u; // 800D54C0
  c->r[4]=c->r[13]+0xFFFFB4B2u; // 800D54C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D54C8
  c->r[5]=0u+0x00000000u; // 800D54CC
  c->r[6]=0u+0x00001001u; // 800D54D0
  c->lr=0x800D54D8u; f_80244D20(c); // 800D54D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D54D8
  if (crb(c,2)) { goto L_800D54E4; } // 800D54DC
  c->lr=0x800D54E4u; f_800D5410(c); // 800D54E0
L_800D54E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D54E4
  c->lr=c->r[0]; // 800D54E8
  c->r[1]=c->r[1]+0x00000010u; // 800D54EC
  return; // 800D54F0
}

// fn_800D54F4
void f_800D54F4(Ctx* __restrict c) {
  trace_call(0x800D54F4u);
  c->r[6]=0u+0x80420000u; // 800D54F4
  c->r[4]=0u+0x1E9D0000u; // 800D54F8
  c->r[5]=0u+0x00000000u; // 800D54FC
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D5500
  c->r[6]=c->r[6]+0xFFFF8348u; // 800D5504
  c->r[0]=c->r[4]+0xFFFF82F2u; // 800D5508
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D550C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800D5510
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5514
  return; // 800D5518
}

// fn_800D551C
void f_800D551C(Ctx* __restrict c) {
  trace_call(0x800D551Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D551C
  c->r[0]=c->lr; // 800D5520
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5524
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5528
  c->r[30]=c->r[3]|c->r[3]; // 800D552C
  c->r[31]=c->r[4]|c->r[4]; // 800D5530
  c->lr=0x800D5538u; f_8030D728(c); // 800D5534
  c->r[3]=c->r[31]|c->r[31]; // 800D5538
  c->r[4]=0u+0x00000000u; // 800D553C
  c->lr=0x800D5544u; f_8030BE30(c); // 800D5540
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D5544
  c->r[3]=c->r[31]|c->r[31]; // 800D5548
  c->lr=0x800D5550u; f_8030BD1C(c); // 800D554C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D5550
  c->r[3]=c->r[31]|c->r[31]; // 800D5554
  c->r[4]=0u+0x00000000u; // 800D5558
  c->lr=0x800D5560u; f_8030BE30(c); // 800D555C
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D5560
  c->r[3]=c->r[31]|c->r[31]; // 800D5564
  c->lr=0x800D556Cu; f_8030BD1C(c); // 800D5568
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D556C
  c->r[3]=c->r[31]|c->r[31]; // 800D5570
  c->lr=0x800D5578u; f_8030C0A0(c); // 800D5574
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 800D5578
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D557C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5580
  c->lr=c->r[0]; // 800D5584
  c->r[1]=c->r[1]+0x00000010u; // 800D5588
  return; // 800D558C
}

// fn_800D5590
void f_800D5590(Ctx* __restrict c) {
  trace_call(0x800D5590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5590
  c->r[0]=c->lr; // 800D5594
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D559C
  c->r[31]=c->r[4]|c->r[4]; // 800D55A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D55A4
  c->r[30]=c->r[3]|c->r[3]; // 800D55A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D55AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D55B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D55B4
  c->r[3]=c->r[4]+0x0000000Cu; // 800D55B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D55BC
  c->r[4]=c->r[30]+0x0000000Cu; // 800D55C0
  c->lr=0x800D55C8u; f_8003AB48(c); // 800D55C4
  c->r[3]=c->r[31]+0x00000018u; // 800D55C8
  c->r[4]=c->r[30]+0x00000018u; // 800D55CC
  c->lr=0x800D55D4u; f_8003AB48(c); // 800D55D0
  {uint32_t ea=c->r[30]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D55D4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800D55D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D55DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D55E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D55E4
  c->lr=c->r[0]; // 800D55E8
  c->r[1]=c->r[1]+0x00000010u; // 800D55EC
  return; // 800D55F0
}

// fn_800D55F4
void f_800D55F4(Ctx* __restrict c) {
  trace_call(0x800D55F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D55F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D55F8
  c->ctr=c->r[12]; // 800D55FC
  if (true) { dispatch(c,c->ctr); return; } // 800D5600
}

// fn_800D5604
void f_800D5604(Ctx* __restrict c) {
  trace_call(0x800D5604u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5604
  c->r[0]=c->lr; // 800D5608
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D560C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5610
  c->r[29]=c->r[3]|c->r[3]; // 800D5614
  c->r[30]=c->r[4]|c->r[4]; // 800D5618
  c->r[31]=c->r[5]|c->r[5]; // 800D561C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D5620
  cmps(c,0,(int32_t)c->r[0],7); // 800D5624
  if (!crb(c,0)) { goto L_800D5638; } // 800D5628
  c->r[4]=c->r[31]|c->r[31]; // 800D562C
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5630
  c->lr=0x800D5638u; f_8003A994(c); // 800D5634
L_800D5638:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D5638
  cmps(c,0,(int32_t)c->r[0],7); // 800D563C
  if (!crb(c,0)) { goto L_800D5650; } // 800D5640
  c->r[4]=c->r[31]|c->r[31]; // 800D5644
  c->r[3]=c->r[29]+0x00000018u; // 800D5648
  c->lr=0x800D5650u; f_8003A994(c); // 800D564C
L_800D5650:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D5650
  c->r[3]=c->r[29]|c->r[29]; // 800D5654
  c->r[4]=c->r[30]|c->r[30]; // 800D5658
  c->r[5]=c->r[31]|c->r[31]; // 800D565C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5660
  c->ctr=c->r[12]; // 800D5664
  if (true) { c->lr=0x800D566Cu; dispatch(c,c->ctr); } // 800D5668
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D566C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5670
  c->lr=c->r[0]; // 800D5674
  c->r[1]=c->r[1]+0x00000020u; // 800D5678
  return; // 800D567C
}

// fn_800D5680
void f_800D5680(Ctx* __restrict c) {
  trace_call(0x800D5680u);
  c->r[3]=0u+0x80410000u; // 800D5680
  c->r[3]=c->r[3]+0xFFFFD4CDu; // 800D5684
  return; // 800D5688
}

// fn_800D568C
void f_800D568C(Ctx* __restrict c) {
  trace_call(0x800D568Cu);
  c->r[3]=0u+0x00000028u; // 800D568C
  return; // 800D5690
}

// fn_800D5694
void f_800D5694(Ctx* __restrict c) {
  trace_call(0x800D5694u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5694
  c->r[0]=c->lr; // 800D5698
  c->r[3]=0u+0x00000028u; // 800D569C
  c->r[4]=c->r[13]+0xFFFFB4B7u; // 800D56A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D56A4
  c->r[5]=0u+0x00000000u; // 800D56A8
  c->r[6]=0u+0x00001001u; // 800D56AC
  c->lr=0x800D56B4u; f_80244D20(c); // 800D56B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D56B4
  if (crb(c,2)) { goto L_800D56C0; } // 800D56B8
  c->lr=0x800D56C0u; f_800D54F4(c); // 800D56BC
L_800D56C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D56C0
  c->lr=c->r[0]; // 800D56C4
  c->r[1]=c->r[1]+0x00000010u; // 800D56C8
  return; // 800D56CC
}

// fn_800D56D0
void f_800D56D0(Ctx* __restrict c) {
  trace_call(0x800D56D0u);
  c->r[6]=0u+0x80420000u; // 800D56D0
  c->r[4]=0u+0x59720000u; // 800D56D4
  c->r[6]=c->r[6]+0xFFFF8314u; // 800D56D8
  c->r[5]=0u+0x00000000u; // 800D56DC
  c->r[0]=c->r[4]+0x00004EB8u; // 800D56E0
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D56E4
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D56E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D56EC
  return; // 800D56F0
}

// fn_800D56F4
void f_800D56F4(Ctx* __restrict c) {
  trace_call(0x800D56F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D56F4
  c->r[0]=c->lr; // 800D56F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D56FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5700
  c->r[30]=c->r[3]|c->r[3]; // 800D5704
  c->r[31]=c->r[4]|c->r[4]; // 800D5708
  c->lr=0x800D5710u; f_8030D728(c); // 800D570C
  c->r[3]=c->r[31]|c->r[31]; // 800D5710
  c->r[4]=0u+0x00000000u; // 800D5714
  c->lr=0x800D571Cu; f_8030BE30(c); // 800D5718
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D571C
  c->r[3]=c->r[31]|c->r[31]; // 800D5720
  c->lr=0x800D5728u; f_8030BD1C(c); // 800D5724
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D5728
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D572C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5730
  c->lr=c->r[0]; // 800D5734
  c->r[1]=c->r[1]+0x00000010u; // 800D5738
  return; // 800D573C
}

// fn_800D5740
void f_800D5740(Ctx* __restrict c) {
  trace_call(0x800D5740u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5740
  c->r[5]=c->r[3]|c->r[3]; // 800D5744
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D5748
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D574C
  c->r[3]=c->r[4]+0x0000000Cu; // 800D5750
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5754
  c->r[4]=c->r[5]+0x0000000Cu; // 800D5758
  f_8003AB48(c); return; // 800D575C
}

// fn_800D5760
void f_800D5760(Ctx* __restrict c) {
  trace_call(0x800D5760u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5760
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D5764
  c->ctr=c->r[12]; // 800D5768
  if (true) { dispatch(c,c->ctr); return; } // 800D576C
}

// fn_800D5770
void f_800D5770(Ctx* __restrict c) {
  trace_call(0x800D5770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5770
  c->r[0]=c->lr; // 800D5774
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5778
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D577C
  c->r[29]=c->r[3]|c->r[3]; // 800D5780
  c->r[30]=c->r[4]|c->r[4]; // 800D5784
  c->r[31]=c->r[5]|c->r[5]; // 800D5788
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D578C
  cmps(c,0,(int32_t)c->r[0],7); // 800D5790
  if (!crb(c,0)) { goto L_800D57A4; } // 800D5794
  c->r[4]=c->r[31]|c->r[31]; // 800D5798
  c->r[3]=c->r[3]+0x0000000Cu; // 800D579C
  c->lr=0x800D57A4u; f_8003A994(c); // 800D57A0
L_800D57A4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D57A4
  c->r[3]=c->r[29]|c->r[29]; // 800D57A8
  c->r[4]=c->r[30]|c->r[30]; // 800D57AC
  c->r[5]=c->r[31]|c->r[31]; // 800D57B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D57B4
  c->ctr=c->r[12]; // 800D57B8
  if (true) { c->lr=0x800D57C0u; dispatch(c,c->ctr); } // 800D57BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D57C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D57C4
  c->lr=c->r[0]; // 800D57C8
  c->r[1]=c->r[1]+0x00000020u; // 800D57CC
  return; // 800D57D0
}

// fn_800D57D4
void f_800D57D4(Ctx* __restrict c) {
  trace_call(0x800D57D4u);
  c->r[3]=0u+0x80410000u; // 800D57D4
  c->r[3]=c->r[3]+0xFFFFD4E6u; // 800D57D8
  return; // 800D57DC
}

// fn_800D57E0
void f_800D57E0(Ctx* __restrict c) {
  trace_call(0x800D57E0u);
  c->r[3]=0u+0x00000018u; // 800D57E0
  return; // 800D57E4
}

// fn_800D57E8
void f_800D57E8(Ctx* __restrict c) {
  trace_call(0x800D57E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D57E8
  c->r[0]=c->lr; // 800D57EC
  c->r[3]=0u+0x00000018u; // 800D57F0
  c->r[4]=c->r[13]+0xFFFFB4BCu; // 800D57F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D57F8
  c->r[5]=0u+0x00000000u; // 800D57FC
  c->r[6]=0u+0x00001001u; // 800D5800
  c->lr=0x800D5808u; f_80244D20(c); // 800D5804
  cmps(c,0,(int32_t)c->r[3],0); // 800D5808
  if (crb(c,2)) { goto L_800D5814; } // 800D580C
  c->lr=0x800D5814u; f_800D56D0(c); // 800D5810
L_800D5814:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5814
  c->lr=c->r[0]; // 800D5818
  c->r[1]=c->r[1]+0x00000010u; // 800D581C
  return; // 800D5820
}

// fn_800D5824
void f_800D5824(Ctx* __restrict c) {
  trace_call(0x800D5824u);
  c->r[6]=0u+0x80420000u; // 800D5824
  c->r[4]=0u+0x59720000u; // 800D5828
  c->r[6]=c->r[6]+0xFFFF82E0u; // 800D582C
  c->r[5]=0u+0x00000000u; // 800D5830
  c->r[0]=c->r[4]+0x00004EB8u; // 800D5834
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D5838
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D583C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5840
  return; // 800D5844
}

// fn_800D5848
void f_800D5848(Ctx* __restrict c) {
  trace_call(0x800D5848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5848
  c->r[0]=c->lr; // 800D584C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5850
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5854
  c->r[30]=c->r[3]|c->r[3]; // 800D5858
  c->r[31]=c->r[4]|c->r[4]; // 800D585C
  c->lr=0x800D5864u; f_8030D728(c); // 800D5860
  c->r[3]=c->r[31]|c->r[31]; // 800D5864
  c->r[4]=0u+0x00000000u; // 800D5868
  c->lr=0x800D5870u; f_8030BE30(c); // 800D586C
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D5870
  c->r[3]=c->r[31]|c->r[31]; // 800D5874
  c->lr=0x800D587Cu; f_8030BD1C(c); // 800D5878
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D587C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5880
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5884
  c->lr=c->r[0]; // 800D5888
  c->r[1]=c->r[1]+0x00000010u; // 800D588C
  return; // 800D5890
}

// fn_800D5894
void f_800D5894(Ctx* __restrict c) {
  trace_call(0x800D5894u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5894
  c->r[5]=c->r[3]|c->r[3]; // 800D5898
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D589C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D58A0
  c->r[3]=c->r[4]+0x0000000Cu; // 800D58A4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D58A8
  c->r[4]=c->r[5]+0x0000000Cu; // 800D58AC
  f_8003AB48(c); return; // 800D58B0
}

// fn_800D58B4
void f_800D58B4(Ctx* __restrict c) {
  trace_call(0x800D58B4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D58B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D58B8
  c->ctr=c->r[12]; // 800D58BC
  if (true) { dispatch(c,c->ctr); return; } // 800D58C0
}

// fn_800D58C4
void f_800D58C4(Ctx* __restrict c) {
  trace_call(0x800D58C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D58C4
  c->r[0]=c->lr; // 800D58C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D58CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D58D0
  c->r[29]=c->r[3]|c->r[3]; // 800D58D4
  c->r[30]=c->r[4]|c->r[4]; // 800D58D8
  c->r[31]=c->r[5]|c->r[5]; // 800D58DC
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D58E0
  cmps(c,0,(int32_t)c->r[0],7); // 800D58E4
  if (!crb(c,0)) { goto L_800D58F8; } // 800D58E8
  c->r[4]=c->r[31]|c->r[31]; // 800D58EC
  c->r[3]=c->r[3]+0x0000000Cu; // 800D58F0
  c->lr=0x800D58F8u; f_8003A994(c); // 800D58F4
L_800D58F8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D58F8
  c->r[3]=c->r[29]|c->r[29]; // 800D58FC
  c->r[4]=c->r[30]|c->r[30]; // 800D5900
  c->r[5]=c->r[31]|c->r[31]; // 800D5904
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5908
  c->ctr=c->r[12]; // 800D590C
  if (true) { c->lr=0x800D5914u; dispatch(c,c->ctr); } // 800D5910
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5914
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5918
  c->lr=c->r[0]; // 800D591C
  c->r[1]=c->r[1]+0x00000020u; // 800D5920
  return; // 800D5924
}

// fn_800D5928
void f_800D5928(Ctx* __restrict c) {
  trace_call(0x800D5928u);
  c->r[3]=0u+0x80410000u; // 800D5928
  c->r[3]=c->r[3]+0xFFFFD501u; // 800D592C
  return; // 800D5930
}

// fn_800D5934
void f_800D5934(Ctx* __restrict c) {
  trace_call(0x800D5934u);
  c->r[3]=0u+0x00000018u; // 800D5934
  return; // 800D5938
}

// fn_800D593C
void f_800D593C(Ctx* __restrict c) {
  trace_call(0x800D593Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D593C
  c->r[0]=c->lr; // 800D5940
  c->r[3]=0u+0x00000018u; // 800D5944
  c->r[4]=c->r[13]+0xFFFFB4C1u; // 800D5948
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D594C
  c->r[5]=0u+0x00000000u; // 800D5950
  c->r[6]=0u+0x00001001u; // 800D5954
  c->lr=0x800D595Cu; f_80244D20(c); // 800D5958
  cmps(c,0,(int32_t)c->r[3],0); // 800D595C
  if (crb(c,2)) { goto L_800D5968; } // 800D5960
  c->lr=0x800D5968u; f_800D5824(c); // 800D5964
L_800D5968:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5968
  c->lr=c->r[0]; // 800D596C
  c->r[1]=c->r[1]+0x00000010u; // 800D5970
  return; // 800D5974
}

// fn_800D5978
void f_800D5978(Ctx* __restrict c) {
  trace_call(0x800D5978u);
  c->r[6]=0u+0x80420000u; // 800D5978
  c->r[4]=0u+0x7FFC0000u; // 800D597C
  c->r[5]=0u+0x00000000u; // 800D5980
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D5984
  c->r[6]=c->r[6]+0xFFFF82ACu; // 800D5988
  c->r[0]=c->r[4]+0x00007FC6u; // 800D598C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D5990
  W32(c->r[3]+0x00000020u,c->r[5]); // 800D5994
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5998
  return; // 800D599C
}

// fn_800D59A0
void f_800D59A0(Ctx* __restrict c) {
  trace_call(0x800D59A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D59A0
  c->r[0]=c->lr; // 800D59A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D59A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D59AC
  c->r[30]=c->r[3]|c->r[3]; // 800D59B0
  c->r[31]=c->r[4]|c->r[4]; // 800D59B4
  c->lr=0x800D59BCu; f_8030D728(c); // 800D59B8
  c->r[3]=c->r[31]|c->r[31]; // 800D59BC
  c->r[4]=0u+0x00000000u; // 800D59C0
  c->lr=0x800D59C8u; f_8030BE30(c); // 800D59C4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D59C8
  c->r[3]=c->r[31]|c->r[31]; // 800D59CC
  c->lr=0x800D59D4u; f_8030BD1C(c); // 800D59D0
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D59D4
  c->r[3]=c->r[31]|c->r[31]; // 800D59D8
  c->r[4]=0u+0x00000000u; // 800D59DC
  c->lr=0x800D59E4u; f_8030BE30(c); // 800D59E0
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D59E4
  c->r[3]=c->r[31]|c->r[31]; // 800D59E8
  c->lr=0x800D59F0u; f_8030BD1C(c); // 800D59EC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D59F0
  c->r[3]=c->r[31]|c->r[31]; // 800D59F4
  c->lr=0x800D59FCu; f_8030BD1C(c); // 800D59F8
  W32(c->r[30]+0x00000024u,c->r[3]); // 800D59FC
  c->r[3]=c->r[31]|c->r[31]; // 800D5A00
  c->lr=0x800D5A08u; f_8030BD1C(c); // 800D5A04
  W8(c->r[30]+0x00000028u,c->r[3]); // 800D5A08
  c->r[3]=c->r[31]|c->r[31]; // 800D5A0C
  c->lr=0x800D5A14u; f_8030BD1C(c); // 800D5A10
  W8(c->r[30]+0x00000029u,c->r[3]); // 800D5A14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5A1C
  c->lr=c->r[0]; // 800D5A20
  c->r[1]=c->r[1]+0x00000010u; // 800D5A24
  return; // 800D5A28
}

// fn_800D5A2C
void f_800D5A2C(Ctx* __restrict c) {
  trace_call(0x800D5A2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5A2C
  c->r[0]=c->lr; // 800D5A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5A34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5A38
  c->r[30]=c->r[3]|c->r[3]; // 800D5A3C
  c->r[31]=c->r[4]|c->r[4]; // 800D5A40
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5A44
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D5A48
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D5A4C
  c->r[3]=c->r[4]+0x0000000Cu; // 800D5A50
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5A54
  c->r[4]=c->r[30]+0x0000000Cu; // 800D5A58
  c->lr=0x800D5A60u; f_8003AB48(c); // 800D5A5C
  c->r[3]=c->r[31]+0x00000018u; // 800D5A60
  c->r[4]=c->r[30]+0x00000018u; // 800D5A64
  c->lr=0x800D5A6Cu; f_8003AB48(c); // 800D5A68
  c->r[0]=R32(c->r[30]+0x00000024u); // 800D5A6C
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D5A70
  c->r[0]=R8(c->r[30]+0x00000028u); // 800D5A74
  W8(c->r[31]+0x00000028u,c->r[0]); // 800D5A78
  c->r[0]=R8(c->r[30]+0x00000029u); // 800D5A7C
  W8(c->r[31]+0x00000029u,c->r[0]); // 800D5A80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5A84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5A88
  c->lr=c->r[0]; // 800D5A8C
  c->r[1]=c->r[1]+0x00000010u; // 800D5A90
  return; // 800D5A94
}

// fn_800D5A98
void f_800D5A98(Ctx* __restrict c) {
  trace_call(0x800D5A98u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5A98
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D5A9C
  c->ctr=c->r[12]; // 800D5AA0
  if (true) { dispatch(c,c->ctr); return; } // 800D5AA4
}

// fn_800D5AA8
void f_800D5AA8(Ctx* __restrict c) {
  trace_call(0x800D5AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5AA8
  c->r[0]=c->lr; // 800D5AAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5AB0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5AB4
  c->r[29]=c->r[3]|c->r[3]; // 800D5AB8
  c->r[30]=c->r[4]|c->r[4]; // 800D5ABC
  c->r[31]=c->r[5]|c->r[5]; // 800D5AC0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D5AC4
  cmps(c,0,(int32_t)c->r[0],7); // 800D5AC8
  if (!crb(c,0)) { goto L_800D5ADC; } // 800D5ACC
  c->r[4]=c->r[31]|c->r[31]; // 800D5AD0
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5AD4
  c->lr=0x800D5ADCu; f_8003A994(c); // 800D5AD8
L_800D5ADC:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D5ADC
  cmps(c,0,(int32_t)c->r[0],7); // 800D5AE0
  if (!crb(c,0)) { goto L_800D5AF4; } // 800D5AE4
  c->r[4]=c->r[31]|c->r[31]; // 800D5AE8
  c->r[3]=c->r[29]+0x00000018u; // 800D5AEC
  c->lr=0x800D5AF4u; f_8003A994(c); // 800D5AF0
L_800D5AF4:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D5AF4
  c->r[3]=c->r[29]|c->r[29]; // 800D5AF8
  c->r[4]=c->r[30]|c->r[30]; // 800D5AFC
  c->r[5]=c->r[31]|c->r[31]; // 800D5B00
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5B04
  c->ctr=c->r[12]; // 800D5B08
  if (true) { c->lr=0x800D5B10u; dispatch(c,c->ctr); } // 800D5B0C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5B10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5B14
  c->lr=c->r[0]; // 800D5B18
  c->r[1]=c->r[1]+0x00000020u; // 800D5B1C
  return; // 800D5B20
}

// fn_800D5B24
void f_800D5B24(Ctx* __restrict c) {
  trace_call(0x800D5B24u);
  c->r[3]=0u+0x80410000u; // 800D5B24
  c->r[3]=c->r[3]+0xFFFFD518u; // 800D5B28
  return; // 800D5B2C
}

// fn_800D5B30
void f_800D5B30(Ctx* __restrict c) {
  trace_call(0x800D5B30u);
  c->r[3]=0u+0x0000002Cu; // 800D5B30
  return; // 800D5B34
}

// fn_800D5B38
void f_800D5B38(Ctx* __restrict c) {
  trace_call(0x800D5B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5B38
  c->r[0]=c->lr; // 800D5B3C
  c->r[3]=0u+0x0000002Cu; // 800D5B40
  c->r[4]=c->r[13]+0xFFFFB4C6u; // 800D5B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5B48
  c->r[5]=0u+0x00000000u; // 800D5B4C
  c->r[6]=0u+0x00001001u; // 800D5B50
  c->lr=0x800D5B58u; f_80244D20(c); // 800D5B54
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B58
  if (crb(c,2)) { goto L_800D5B64; } // 800D5B5C
  c->lr=0x800D5B64u; f_800D5978(c); // 800D5B60
L_800D5B64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5B64
  c->lr=c->r[0]; // 800D5B68
  c->r[1]=c->r[1]+0x00000010u; // 800D5B6C
  return; // 800D5B70
}

// fn_800D5B74
void f_800D5B74(Ctx* __restrict c) {
  trace_call(0x800D5B74u);
  c->r[6]=0u+0x80420000u; // 800D5B74
  c->r[4]=0u+0xC14A0000u; // 800D5B78
  c->r[6]=c->r[6]+0xFFFF8278u; // 800D5B7C
  c->r[5]=0u+0x00000000u; // 800D5B80
  c->r[0]=c->r[4]+0xFFFFCE81u; // 800D5B84
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D5B88
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D5B8C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5B90
  return; // 800D5B94
}

// fn_800D5B98
void f_800D5B98(Ctx* __restrict c) {
  trace_call(0x800D5B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5B98
  c->r[0]=c->lr; // 800D5B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5BA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5BA4
  c->r[30]=c->r[3]|c->r[3]; // 800D5BA8
  c->r[31]=c->r[4]|c->r[4]; // 800D5BAC
  c->lr=0x800D5BB4u; f_8030D728(c); // 800D5BB0
  c->r[3]=c->r[31]|c->r[31]; // 800D5BB4
  c->r[4]=0u+0x00000000u; // 800D5BB8
  c->lr=0x800D5BC0u; f_8030BE30(c); // 800D5BBC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D5BC0
  c->r[3]=c->r[31]|c->r[31]; // 800D5BC4
  c->lr=0x800D5BCCu; f_8030BD1C(c); // 800D5BC8
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D5BCC
  c->r[3]=c->r[31]|c->r[31]; // 800D5BD0
  c->lr=0x800D5BD8u; f_8030BD1C(c); // 800D5BD4
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D5BD8
  c->r[3]=c->r[31]|c->r[31]; // 800D5BDC
  c->lr=0x800D5BE4u; f_8030BD1C(c); // 800D5BE0
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 800D5BE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5BE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5BEC
  c->lr=c->r[0]; // 800D5BF0
  c->r[1]=c->r[1]+0x00000010u; // 800D5BF4
  return; // 800D5BF8
}

// fn_800D5BFC
void f_800D5BFC(Ctx* __restrict c) {
  trace_call(0x800D5BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5BFC
  c->r[0]=c->lr; // 800D5C00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5C04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5C08
  c->r[30]=c->r[3]|c->r[3]; // 800D5C0C
  c->r[31]=c->r[4]|c->r[4]; // 800D5C10
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5C14
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D5C18
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D5C1C
  c->r[3]=c->r[4]+0x0000000Cu; // 800D5C20
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5C24
  c->r[4]=c->r[30]+0x0000000Cu; // 800D5C28
  c->lr=0x800D5C30u; f_8003AB48(c); // 800D5C2C
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D5C30
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D5C34
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 800D5C38
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 800D5C3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5C40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5C44
  c->lr=c->r[0]; // 800D5C48
  c->r[1]=c->r[1]+0x00000010u; // 800D5C4C
  return; // 800D5C50
}

// fn_800D5C54
void f_800D5C54(Ctx* __restrict c) {
  trace_call(0x800D5C54u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5C54
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D5C58
  c->ctr=c->r[12]; // 800D5C5C
  if (true) { dispatch(c,c->ctr); return; } // 800D5C60
}

// fn_800D5C64
void f_800D5C64(Ctx* __restrict c) {
  trace_call(0x800D5C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5C64
  c->r[0]=c->lr; // 800D5C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5C6C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5C70
  c->r[29]=c->r[3]|c->r[3]; // 800D5C74
  c->r[30]=c->r[4]|c->r[4]; // 800D5C78
  c->r[31]=c->r[5]|c->r[5]; // 800D5C7C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D5C80
  cmps(c,0,(int32_t)c->r[0],7); // 800D5C84
  if (!crb(c,0)) { goto L_800D5C98; } // 800D5C88
  c->r[4]=c->r[31]|c->r[31]; // 800D5C8C
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5C90
  c->lr=0x800D5C98u; f_8003A994(c); // 800D5C94
L_800D5C98:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D5C98
  c->r[3]=c->r[29]|c->r[29]; // 800D5C9C
  c->r[4]=c->r[30]|c->r[30]; // 800D5CA0
  c->r[5]=c->r[31]|c->r[31]; // 800D5CA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5CA8
  c->ctr=c->r[12]; // 800D5CAC
  if (true) { c->lr=0x800D5CB4u; dispatch(c,c->ctr); } // 800D5CB0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5CB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5CB8
  c->lr=c->r[0]; // 800D5CBC
  c->r[1]=c->r[1]+0x00000020u; // 800D5CC0
  return; // 800D5CC4
}

// fn_800D5CC8
void f_800D5CC8(Ctx* __restrict c) {
  trace_call(0x800D5CC8u);
  c->r[3]=0u+0x80410000u; // 800D5CC8
  c->r[3]=c->r[3]+0xFFFFD52Eu; // 800D5CCC
  return; // 800D5CD0
}

// fn_800D5CD4
void f_800D5CD4(Ctx* __restrict c) {
  trace_call(0x800D5CD4u);
  c->r[3]=0u+0x00000020u; // 800D5CD4
  return; // 800D5CD8
}

// fn_800D5CDC
void f_800D5CDC(Ctx* __restrict c) {
  trace_call(0x800D5CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5CDC
  c->r[0]=c->lr; // 800D5CE0
  c->r[3]=0u+0x00000020u; // 800D5CE4
  c->r[4]=c->r[13]+0xFFFFB4CBu; // 800D5CE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5CEC
  c->r[5]=0u+0x00000000u; // 800D5CF0
  c->r[6]=0u+0x00001001u; // 800D5CF4
  c->lr=0x800D5CFCu; f_80244D20(c); // 800D5CF8
  cmps(c,0,(int32_t)c->r[3],0); // 800D5CFC
  if (crb(c,2)) { goto L_800D5D08; } // 800D5D00
  c->lr=0x800D5D08u; f_800D5B74(c); // 800D5D04
L_800D5D08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5D08
  c->lr=c->r[0]; // 800D5D0C
  c->r[1]=c->r[1]+0x00000010u; // 800D5D10
  return; // 800D5D14
}

// fn_800D5D18
void f_800D5D18(Ctx* __restrict c) {
  trace_call(0x800D5D18u);
  c->r[6]=0u+0x80420000u; // 800D5D18
  c->r[4]=0u+0xBC190000u; // 800D5D1C
  c->r[5]=0u+0x00000000u; // 800D5D20
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D5D24
  c->r[6]=c->r[6]+0xFFFF8244u; // 800D5D28
  c->r[0]=c->r[4]+0x000021D3u; // 800D5D2C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D5D30
  W32(c->r[3]+0x00000020u,c->r[5]); // 800D5D34
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5D38
  return; // 800D5D3C
}

// fn_800D5D40
void f_800D5D40(Ctx* __restrict c) {
  trace_call(0x800D5D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5D40
  c->r[0]=c->lr; // 800D5D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5D48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5D4C
  c->r[30]=c->r[3]|c->r[3]; // 800D5D50
  c->r[31]=c->r[4]|c->r[4]; // 800D5D54
  c->lr=0x800D5D5Cu; f_8030D728(c); // 800D5D58
  c->r[3]=c->r[31]|c->r[31]; // 800D5D5C
  c->r[4]=0u+0x00000000u; // 800D5D60
  c->lr=0x800D5D68u; f_8030BE30(c); // 800D5D64
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D5D68
  c->r[3]=c->r[31]|c->r[31]; // 800D5D6C
  c->lr=0x800D5D74u; f_8030BD1C(c); // 800D5D70
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D5D74
  c->r[3]=c->r[31]|c->r[31]; // 800D5D78
  c->r[4]=0u+0x00000000u; // 800D5D7C
  c->lr=0x800D5D84u; f_8030BE30(c); // 800D5D80
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D5D84
  c->r[3]=c->r[31]|c->r[31]; // 800D5D88
  c->lr=0x800D5D90u; f_8030BD1C(c); // 800D5D8C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D5D90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5D94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5D98
  c->lr=c->r[0]; // 800D5D9C
  c->r[1]=c->r[1]+0x00000010u; // 800D5DA0
  return; // 800D5DA4
}

// fn_800D5DA8
void f_800D5DA8(Ctx* __restrict c) {
  trace_call(0x800D5DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5DA8
  c->r[0]=c->lr; // 800D5DAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5DB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5DB4
  c->r[30]=c->r[3]|c->r[3]; // 800D5DB8
  c->r[31]=c->r[4]|c->r[4]; // 800D5DBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5DC0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D5DC4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D5DC8
  c->r[3]=c->r[4]+0x0000000Cu; // 800D5DCC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5DD0
  c->r[4]=c->r[30]+0x0000000Cu; // 800D5DD4
  c->lr=0x800D5DDCu; f_8003AB48(c); // 800D5DD8
  c->r[3]=c->r[31]+0x00000018u; // 800D5DDC
  c->r[4]=c->r[30]+0x00000018u; // 800D5DE0
  c->lr=0x800D5DE8u; f_8003AB48(c); // 800D5DE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5DE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5DEC
  c->lr=c->r[0]; // 800D5DF0
  c->r[1]=c->r[1]+0x00000010u; // 800D5DF4
  return; // 800D5DF8
}

// fn_800D5DFC
void f_800D5DFC(Ctx* __restrict c) {
  trace_call(0x800D5DFCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5DFC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D5E00
  c->ctr=c->r[12]; // 800D5E04
  if (true) { dispatch(c,c->ctr); return; } // 800D5E08
}

// fn_800D5E0C
void f_800D5E0C(Ctx* __restrict c) {
  trace_call(0x800D5E0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5E0C
  c->r[0]=c->lr; // 800D5E10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5E14
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5E18
  c->r[29]=c->r[3]|c->r[3]; // 800D5E1C
  c->r[30]=c->r[4]|c->r[4]; // 800D5E20
  c->r[31]=c->r[5]|c->r[5]; // 800D5E24
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D5E28
  cmps(c,0,(int32_t)c->r[0],7); // 800D5E2C
  if (!crb(c,0)) { goto L_800D5E40; } // 800D5E30
  c->r[4]=c->r[31]|c->r[31]; // 800D5E34
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5E38
  c->lr=0x800D5E40u; f_8003A994(c); // 800D5E3C
L_800D5E40:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D5E40
  cmps(c,0,(int32_t)c->r[0],7); // 800D5E44
  if (!crb(c,0)) { goto L_800D5E58; } // 800D5E48
  c->r[4]=c->r[31]|c->r[31]; // 800D5E4C
  c->r[3]=c->r[29]+0x00000018u; // 800D5E50
  c->lr=0x800D5E58u; f_8003A994(c); // 800D5E54
L_800D5E58:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D5E58
  c->r[3]=c->r[29]|c->r[29]; // 800D5E5C
  c->r[4]=c->r[30]|c->r[30]; // 800D5E60
  c->r[5]=c->r[31]|c->r[31]; // 800D5E64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5E68
  c->ctr=c->r[12]; // 800D5E6C
  if (true) { c->lr=0x800D5E74u; dispatch(c,c->ctr); } // 800D5E70
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5E74
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5E78
  c->lr=c->r[0]; // 800D5E7C
  c->r[1]=c->r[1]+0x00000020u; // 800D5E80
  return; // 800D5E84
}

// fn_800D5E88
void f_800D5E88(Ctx* __restrict c) {
  trace_call(0x800D5E88u);
  c->r[3]=0u+0x80410000u; // 800D5E88
  c->r[3]=c->r[3]+0xFFFFD53Au; // 800D5E8C
  return; // 800D5E90
}

// fn_800D5E94
void f_800D5E94(Ctx* __restrict c) {
  trace_call(0x800D5E94u);
  c->r[3]=0u+0x00000024u; // 800D5E94
  return; // 800D5E98
}

// fn_800D5E9C
void f_800D5E9C(Ctx* __restrict c) {
  trace_call(0x800D5E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5E9C
  c->r[0]=c->lr; // 800D5EA0
  c->r[3]=0u+0x00000024u; // 800D5EA4
  c->r[4]=c->r[13]+0xFFFFB4D0u; // 800D5EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5EAC
  c->r[5]=0u+0x00000000u; // 800D5EB0
  c->r[6]=0u+0x00001001u; // 800D5EB4
  c->lr=0x800D5EBCu; f_80244D20(c); // 800D5EB8
  cmps(c,0,(int32_t)c->r[3],0); // 800D5EBC
  if (crb(c,2)) { goto L_800D5EC8; } // 800D5EC0
  c->lr=0x800D5EC8u; f_800D5D18(c); // 800D5EC4
L_800D5EC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5EC8
  c->lr=c->r[0]; // 800D5ECC
  c->r[1]=c->r[1]+0x00000010u; // 800D5ED0
  return; // 800D5ED4
}

// fn_800D5ED8
void f_800D5ED8(Ctx* __restrict c) {
  trace_call(0x800D5ED8u);
  c->r[6]=0u+0x80420000u; // 800D5ED8
  c->r[4]=0u+0x59720000u; // 800D5EDC
  c->r[6]=c->r[6]+0xFFFF8210u; // 800D5EE0
  c->r[5]=0u+0x00000000u; // 800D5EE4
  c->r[0]=c->r[4]+0x00004EB8u; // 800D5EE8
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D5EEC
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D5EF0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5EF4
  return; // 800D5EF8
}

// fn_800D5EFC
void f_800D5EFC(Ctx* __restrict c) {
  trace_call(0x800D5EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5EFC
  c->r[0]=c->lr; // 800D5F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5F04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5F08
  c->r[30]=c->r[3]|c->r[3]; // 800D5F0C
  c->r[31]=c->r[4]|c->r[4]; // 800D5F10
  c->lr=0x800D5F18u; f_8030D728(c); // 800D5F14
  c->r[3]=c->r[31]|c->r[31]; // 800D5F18
  c->r[4]=0u+0x00000000u; // 800D5F1C
  c->lr=0x800D5F24u; f_8030BE30(c); // 800D5F20
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D5F24
  c->r[3]=c->r[31]|c->r[31]; // 800D5F28
  c->lr=0x800D5F30u; f_8030BD1C(c); // 800D5F2C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D5F30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5F34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5F38
  c->lr=c->r[0]; // 800D5F3C
  c->r[1]=c->r[1]+0x00000010u; // 800D5F40
  return; // 800D5F44
}

// fn_800D5F48
void f_800D5F48(Ctx* __restrict c) {
  trace_call(0x800D5F48u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D5F48
  c->r[5]=c->r[3]|c->r[3]; // 800D5F4C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D5F50
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D5F54
  c->r[3]=c->r[4]+0x0000000Cu; // 800D5F58
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5F5C
  c->r[4]=c->r[5]+0x0000000Cu; // 800D5F60
  f_8003AB48(c); return; // 800D5F64
}

// fn_800D5F68
void f_800D5F68(Ctx* __restrict c) {
  trace_call(0x800D5F68u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D5F68
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D5F6C
  c->ctr=c->r[12]; // 800D5F70
  if (true) { dispatch(c,c->ctr); return; } // 800D5F74
}

// fn_800D5F78
void f_800D5F78(Ctx* __restrict c) {
  trace_call(0x800D5F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5F78
  c->r[0]=c->lr; // 800D5F7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5F80
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5F84
  c->r[29]=c->r[3]|c->r[3]; // 800D5F88
  c->r[30]=c->r[4]|c->r[4]; // 800D5F8C
  c->r[31]=c->r[5]|c->r[5]; // 800D5F90
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D5F94
  cmps(c,0,(int32_t)c->r[0],7); // 800D5F98
  if (!crb(c,0)) { goto L_800D5FAC; } // 800D5F9C
  c->r[4]=c->r[31]|c->r[31]; // 800D5FA0
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5FA4
  c->lr=0x800D5FACu; f_8003A994(c); // 800D5FA8
L_800D5FAC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D5FAC
  c->r[3]=c->r[29]|c->r[29]; // 800D5FB0
  c->r[4]=c->r[30]|c->r[30]; // 800D5FB4
  c->r[5]=c->r[31]|c->r[31]; // 800D5FB8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D5FBC
  c->ctr=c->r[12]; // 800D5FC0
  if (true) { c->lr=0x800D5FC8u; dispatch(c,c->ctr); } // 800D5FC4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5FC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5FCC
  c->lr=c->r[0]; // 800D5FD0
  c->r[1]=c->r[1]+0x00000020u; // 800D5FD4
  return; // 800D5FD8
}

// fn_800D5FDC
void f_800D5FDC(Ctx* __restrict c) {
  trace_call(0x800D5FDCu);
  c->r[3]=0u+0x80410000u; // 800D5FDC
  c->r[3]=c->r[3]+0xFFFFD54Au; // 800D5FE0
  return; // 800D5FE4
}

// fn_800D5FE8
void f_800D5FE8(Ctx* __restrict c) {
  trace_call(0x800D5FE8u);
  c->r[3]=0u+0x00000018u; // 800D5FE8
  return; // 800D5FEC
}

// fn_800D5FF0
void f_800D5FF0(Ctx* __restrict c) {
  trace_call(0x800D5FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5FF0
  c->r[0]=c->lr; // 800D5FF4
  c->r[3]=0u+0x00000018u; // 800D5FF8
  c->r[4]=c->r[13]+0xFFFFB4D5u; // 800D5FFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6000
  c->r[5]=0u+0x00000000u; // 800D6004
  c->r[6]=0u+0x00001001u; // 800D6008
  c->lr=0x800D6010u; f_80244D20(c); // 800D600C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6010
  if (crb(c,2)) { goto L_800D601C; } // 800D6014
  c->lr=0x800D601Cu; f_800D5ED8(c); // 800D6018
L_800D601C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D601C
  c->lr=c->r[0]; // 800D6020
  c->r[1]=c->r[1]+0x00000010u; // 800D6024
  return; // 800D6028
}

// fn_800D602C
void f_800D602C(Ctx* __restrict c) {
  trace_call(0x800D602Cu);
  c->r[6]=0u+0x80420000u; // 800D602C
  c->r[4]=0u+0xC9AC0000u; // 800D6030
  c->r[5]=0u+0x00000000u; // 800D6034
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D6038
  c->r[6]=c->r[6]+0xFFFF81DCu; // 800D603C
  c->r[0]=c->r[4]+0xFFFF8002u; // 800D6040
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D6044
  W32(c->r[3]+0x00000024u,c->r[5]); // 800D6048
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D604C
  return; // 800D6050
}

// fn_800D6054
void f_800D6054(Ctx* __restrict c) {
  trace_call(0x800D6054u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6054
  c->r[0]=c->lr; // 800D6058
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D605C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6060
  c->r[30]=c->r[3]|c->r[3]; // 800D6064
  c->r[31]=c->r[4]|c->r[4]; // 800D6068
  c->lr=0x800D6070u; f_8030D728(c); // 800D606C
  c->r[3]=c->r[31]|c->r[31]; // 800D6070
  c->r[4]=0u+0x00000000u; // 800D6074
  c->lr=0x800D607Cu; f_8030BE30(c); // 800D6078
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D607C
  c->r[3]=c->r[31]|c->r[31]; // 800D6080
  c->lr=0x800D6088u; f_8030BD1C(c); // 800D6084
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D6088
  c->r[3]=c->r[31]|c->r[31]; // 800D608C
  c->lr=0x800D6094u; f_8030BD1C(c); // 800D6090
  W8(c->r[30]+0x00000018u,c->r[3]); // 800D6094
  c->r[3]=c->r[31]|c->r[31]; // 800D6098
  c->r[4]=0u+0x00000000u; // 800D609C
  c->lr=0x800D60A4u; f_8030BE30(c); // 800D60A0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D60A4
  c->r[3]=c->r[31]|c->r[31]; // 800D60A8
  c->lr=0x800D60B0u; f_8030BD1C(c); // 800D60AC
  W32(c->r[30]+0x00000020u,c->r[3]); // 800D60B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D60B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D60B8
  c->lr=c->r[0]; // 800D60BC
  c->r[1]=c->r[1]+0x00000010u; // 800D60C0
  return; // 800D60C4
}

// fn_800D60C8
void f_800D60C8(Ctx* __restrict c) {
  trace_call(0x800D60C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D60C8
  c->r[0]=c->lr; // 800D60CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D60D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D60D4
  c->r[30]=c->r[3]|c->r[3]; // 800D60D8
  c->r[31]=c->r[4]|c->r[4]; // 800D60DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D60E0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D60E4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D60E8
  c->r[3]=c->r[4]+0x0000000Cu; // 800D60EC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D60F0
  c->r[4]=c->r[30]+0x0000000Cu; // 800D60F4
  c->lr=0x800D60FCu; f_8003AB48(c); // 800D60F8
  c->r[0]=R8(c->r[30]+0x00000018u); // 800D60FC
  c->r[3]=c->r[31]+0x0000001Cu; // 800D6100
  W8(c->r[31]+0x00000018u,c->r[0]); // 800D6104
  c->r[4]=c->r[30]+0x0000001Cu; // 800D6108
  c->lr=0x800D6110u; f_8003AB48(c); // 800D610C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6110
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6114
  c->lr=c->r[0]; // 800D6118
  c->r[1]=c->r[1]+0x00000010u; // 800D611C
  return; // 800D6120
}

// fn_800D6124
void f_800D6124(Ctx* __restrict c) {
  trace_call(0x800D6124u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D6124
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D6128
  c->ctr=c->r[12]; // 800D612C
  if (true) { dispatch(c,c->ctr); return; } // 800D6130
}

// fn_800D6134
void f_800D6134(Ctx* __restrict c) {
  trace_call(0x800D6134u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6134
  c->r[0]=c->lr; // 800D6138
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D613C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6140
  c->r[29]=c->r[3]|c->r[3]; // 800D6144
  c->r[30]=c->r[4]|c->r[4]; // 800D6148
  c->r[31]=c->r[5]|c->r[5]; // 800D614C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D6150
  cmps(c,0,(int32_t)c->r[0],7); // 800D6154
  if (!crb(c,0)) { goto L_800D6168; } // 800D6158
  c->r[4]=c->r[31]|c->r[31]; // 800D615C
  c->r[3]=c->r[3]+0x0000000Cu; // 800D6160
  c->lr=0x800D6168u; f_8003A994(c); // 800D6164
L_800D6168:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 800D6168
  cmps(c,0,(int32_t)c->r[0],7); // 800D616C
  if (!crb(c,0)) { goto L_800D6180; } // 800D6170
  c->r[4]=c->r[31]|c->r[31]; // 800D6174
  c->r[3]=c->r[29]+0x0000001Cu; // 800D6178
  c->lr=0x800D6180u; f_8003A994(c); // 800D617C
L_800D6180:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D6180
  c->r[3]=c->r[29]|c->r[29]; // 800D6184
  c->r[4]=c->r[30]|c->r[30]; // 800D6188
  c->r[5]=c->r[31]|c->r[31]; // 800D618C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D6190
  c->ctr=c->r[12]; // 800D6194
  if (true) { c->lr=0x800D619Cu; dispatch(c,c->ctr); } // 800D6198
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D619C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D61A0
  c->lr=c->r[0]; // 800D61A4
  c->r[1]=c->r[1]+0x00000020u; // 800D61A8
  return; // 800D61AC
}

// fn_800D61B0
void f_800D61B0(Ctx* __restrict c) {
  trace_call(0x800D61B0u);
  c->r[3]=0u+0x80410000u; // 800D61B0
  c->r[3]=c->r[3]+0xFFFFD558u; // 800D61B4
  return; // 800D61B8
}

// fn_800D61BC
void f_800D61BC(Ctx* __restrict c) {
  trace_call(0x800D61BCu);
  c->r[3]=0u+0x00000028u; // 800D61BC
  return; // 800D61C0
}

// fn_800D61C4
void f_800D61C4(Ctx* __restrict c) {
  trace_call(0x800D61C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D61C4
  c->r[0]=c->lr; // 800D61C8
  c->r[3]=0u+0x00000028u; // 800D61CC
  c->r[4]=c->r[13]+0xFFFFB4DAu; // 800D61D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D61D4
  c->r[5]=0u+0x00000000u; // 800D61D8
  c->r[6]=0u+0x00001001u; // 800D61DC
  c->lr=0x800D61E4u; f_80244D20(c); // 800D61E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D61E4
  if (crb(c,2)) { goto L_800D61F0; } // 800D61E8
  c->lr=0x800D61F0u; f_800D602C(c); // 800D61EC
L_800D61F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D61F0
  c->lr=c->r[0]; // 800D61F4
  c->r[1]=c->r[1]+0x00000010u; // 800D61F8
  return; // 800D61FC
}

// fn_800D6200
void f_800D6200(Ctx* __restrict c) {
  trace_call(0x800D6200u);
  c->r[6]=0u+0x80420000u; // 800D6200
  c->r[4]=0u+0x59720000u; // 800D6204
  c->r[6]=c->r[6]+0xFFFF81A8u; // 800D6208
  c->r[5]=0u+0x00000000u; // 800D620C
  c->r[0]=c->r[4]+0x00004EB8u; // 800D6210
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D6214
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D6218
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D621C
  return; // 800D6220
}

// fn_800D6224
void f_800D6224(Ctx* __restrict c) {
  trace_call(0x800D6224u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6224
  c->r[0]=c->lr; // 800D6228
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D622C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6230
  c->r[30]=c->r[3]|c->r[3]; // 800D6234
  c->r[31]=c->r[4]|c->r[4]; // 800D6238
  c->lr=0x800D6240u; f_8030D728(c); // 800D623C
  c->r[3]=c->r[31]|c->r[31]; // 800D6240
  c->r[4]=0u+0x00000000u; // 800D6244
  c->lr=0x800D624Cu; f_8030BE30(c); // 800D6248
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D624C
  c->r[3]=c->r[31]|c->r[31]; // 800D6250
  c->lr=0x800D6258u; f_8030BD1C(c); // 800D6254
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D6258
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D625C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6260
  c->lr=c->r[0]; // 800D6264
  c->r[1]=c->r[1]+0x00000010u; // 800D6268
  return; // 800D626C
}

// fn_800D6270
void f_800D6270(Ctx* __restrict c) {
  trace_call(0x800D6270u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6270
  c->r[5]=c->r[3]|c->r[3]; // 800D6274
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D6278
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D627C
  c->r[3]=c->r[4]+0x0000000Cu; // 800D6280
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D6284
  c->r[4]=c->r[5]+0x0000000Cu; // 800D6288
  f_8003AB48(c); return; // 800D628C
}

// fn_800D6290
void f_800D6290(Ctx* __restrict c) {
  trace_call(0x800D6290u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D6290
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D6294
  c->ctr=c->r[12]; // 800D6298
  if (true) { dispatch(c,c->ctr); return; } // 800D629C
}

// fn_800D62A0
void f_800D62A0(Ctx* __restrict c) {
  trace_call(0x800D62A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D62A0
  c->r[0]=c->lr; // 800D62A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D62A8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D62AC
  c->r[29]=c->r[3]|c->r[3]; // 800D62B0
  c->r[30]=c->r[4]|c->r[4]; // 800D62B4
  c->r[31]=c->r[5]|c->r[5]; // 800D62B8
  c->r[3]=c->r[3]+0x0000000Cu; // 800D62BC
  c->lr=0x800D62C4u; f_800D62F4(c); // 800D62C0
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D62C4
  c->r[3]=c->r[29]|c->r[29]; // 800D62C8
  c->r[4]=c->r[30]|c->r[30]; // 800D62CC
  c->r[5]=c->r[31]|c->r[31]; // 800D62D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D62D4
  c->ctr=c->r[12]; // 800D62D8
  if (true) { c->lr=0x800D62E0u; dispatch(c,c->ctr); } // 800D62DC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D62E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D62E4
  c->lr=c->r[0]; // 800D62E8
  c->r[1]=c->r[1]+0x00000020u; // 800D62EC
  return; // 800D62F0
}

// fn_800D62F4
void f_800D62F4(Ctx* __restrict c) {
  trace_call(0x800D62F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D62F4
  c->r[0]=c->lr; // 800D62F8
  c->r[5]=c->r[4]|c->r[4]; // 800D62FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6300
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D6304
  cmps(c,0,(int32_t)c->r[0],0); // 800D6308
  if (crb(c,2)) { goto L_800D6314; } // 800D630C
  goto L_800D6324; // 800D6310
L_800D6314:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D6314
  c->r[3]=c->r[5]|c->r[5]; // 800D6318
  c->lr=0x800D6320u; f_802BAC54(c); // 800D631C
  c->r[0]=c->r[3]|c->r[3]; // 800D6320
L_800D6324:;
  c->r[3]=c->r[0]|c->r[0]; // 800D6324
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6328
  c->lr=c->r[0]; // 800D632C
  c->r[1]=c->r[1]+0x00000010u; // 800D6330
  return; // 800D6334
}

// fn_800D6338
void f_800D6338(Ctx* __restrict c) {
  trace_call(0x800D6338u);
  c->r[3]=0u+0x80410000u; // 800D6338
  c->r[3]=c->r[3]+0xFFFFD566u; // 800D633C
  return; // 800D6340
}

// fn_800D6344
void f_800D6344(Ctx* __restrict c) {
  trace_call(0x800D6344u);
  c->r[3]=0u+0x00000018u; // 800D6344
  return; // 800D6348
}

// fn_800D634C
void f_800D634C(Ctx* __restrict c) {
  trace_call(0x800D634Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D634C
  c->r[0]=c->lr; // 800D6350
  c->r[3]=0u+0x00000018u; // 800D6354
  c->r[4]=c->r[13]+0xFFFFB4DFu; // 800D6358
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D635C
  c->r[5]=0u+0x00000000u; // 800D6360
  c->r[6]=0u+0x00001001u; // 800D6364
  c->lr=0x800D636Cu; f_80244D20(c); // 800D6368
  cmps(c,0,(int32_t)c->r[3],0); // 800D636C
  if (crb(c,2)) { goto L_800D6378; } // 800D6370
  c->lr=0x800D6378u; f_800D6200(c); // 800D6374
L_800D6378:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6378
  c->lr=c->r[0]; // 800D637C
  c->r[1]=c->r[1]+0x00000010u; // 800D6380
  return; // 800D6384
}

// fn_800D6388
void f_800D6388(Ctx* __restrict c) {
  trace_call(0x800D6388u);
  c->r[6]=0u+0x80420000u; // 800D6388
  c->r[4]=0u+0x59720000u; // 800D638C
  c->r[6]=c->r[6]+0xFFFF8174u; // 800D6390
  c->r[5]=0u+0x00000000u; // 800D6394
  c->r[0]=c->r[4]+0x00004EB8u; // 800D6398
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D639C
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D63A0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D63A4
  return; // 800D63A8
}

// fn_800D63AC
void f_800D63AC(Ctx* __restrict c) {
  trace_call(0x800D63ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D63AC
  c->r[0]=c->lr; // 800D63B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D63B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D63B8
  c->r[30]=c->r[3]|c->r[3]; // 800D63BC
  c->r[31]=c->r[4]|c->r[4]; // 800D63C0
  c->lr=0x800D63C8u; f_8030D728(c); // 800D63C4
  c->r[3]=c->r[31]|c->r[31]; // 800D63C8
  c->r[4]=0u+0x00000000u; // 800D63CC
  c->lr=0x800D63D4u; f_8030BE30(c); // 800D63D0
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D63D4
  c->r[3]=c->r[31]|c->r[31]; // 800D63D8
  c->lr=0x800D63E0u; f_8030BD1C(c); // 800D63DC
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D63E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D63E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D63E8
  c->lr=c->r[0]; // 800D63EC
  c->r[1]=c->r[1]+0x00000010u; // 800D63F0
  return; // 800D63F4
}

// fn_800D63F8
void f_800D63F8(Ctx* __restrict c) {
  trace_call(0x800D63F8u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D63F8
  c->r[5]=c->r[3]|c->r[3]; // 800D63FC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D6400
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6404
  c->r[3]=c->r[4]+0x0000000Cu; // 800D6408
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D640C
  c->r[4]=c->r[5]+0x0000000Cu; // 800D6410
  f_8003AB48(c); return; // 800D6414
}

// fn_800D6418
void f_800D6418(Ctx* __restrict c) {
  trace_call(0x800D6418u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D6418
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D641C
  c->ctr=c->r[12]; // 800D6420
  if (true) { dispatch(c,c->ctr); return; } // 800D6424
}

// fn_800D6428
void f_800D6428(Ctx* __restrict c) {
  trace_call(0x800D6428u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6428
  c->r[0]=c->lr; // 800D642C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6430
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6434
  c->r[29]=c->r[3]|c->r[3]; // 800D6438
  c->r[30]=c->r[4]|c->r[4]; // 800D643C
  c->r[31]=c->r[5]|c->r[5]; // 800D6440
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D6444
  cmps(c,0,(int32_t)c->r[0],7); // 800D6448
  if (!crb(c,0)) { goto L_800D645C; } // 800D644C
  c->r[4]=c->r[31]|c->r[31]; // 800D6450
  c->r[3]=c->r[3]+0x0000000Cu; // 800D6454
  c->lr=0x800D645Cu; f_8003A994(c); // 800D6458
L_800D645C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D645C
  c->r[3]=c->r[29]|c->r[29]; // 800D6460
  c->r[4]=c->r[30]|c->r[30]; // 800D6464
  c->r[5]=c->r[31]|c->r[31]; // 800D6468
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D646C
  c->ctr=c->r[12]; // 800D6470
  if (true) { c->lr=0x800D6478u; dispatch(c,c->ctr); } // 800D6474
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6478
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D647C
  c->lr=c->r[0]; // 800D6480
  c->r[1]=c->r[1]+0x00000020u; // 800D6484
  return; // 800D6488
}

// fn_800D648C
void f_800D648C(Ctx* __restrict c) {
  trace_call(0x800D648Cu);
  c->r[3]=0u+0x80410000u; // 800D648C
  c->r[3]=c->r[3]+0xFFFFD577u; // 800D6490
  return; // 800D6494
}

// fn_800D6498
void f_800D6498(Ctx* __restrict c) {
  trace_call(0x800D6498u);
  c->r[3]=0u+0x00000018u; // 800D6498
  return; // 800D649C
}

// fn_800D64A0
void f_800D64A0(Ctx* __restrict c) {
  trace_call(0x800D64A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D64A0
  c->r[0]=c->lr; // 800D64A4
  c->r[3]=0u+0x00000018u; // 800D64A8
  c->r[4]=c->r[13]+0xFFFFB4E4u; // 800D64AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D64B0
  c->r[5]=0u+0x00000000u; // 800D64B4
  c->r[6]=0u+0x00001001u; // 800D64B8
  c->lr=0x800D64C0u; f_80244D20(c); // 800D64BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D64C0
  if (crb(c,2)) { goto L_800D64CC; } // 800D64C4
  c->lr=0x800D64CCu; f_800D6388(c); // 800D64C8
L_800D64CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D64CC
  c->lr=c->r[0]; // 800D64D0
  c->r[1]=c->r[1]+0x00000010u; // 800D64D4
  return; // 800D64D8
}

// fn_800D64DC
void f_800D64DC(Ctx* __restrict c) {
  trace_call(0x800D64DCu);
  c->r[6]=0u+0x80420000u; // 800D64DC
  c->r[4]=0u+0x59720000u; // 800D64E0
  c->r[6]=c->r[6]+0xFFFF8140u; // 800D64E4
  c->r[5]=0u+0x00000000u; // 800D64E8
  c->r[0]=c->r[4]+0x00004EB8u; // 800D64EC
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D64F0
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D64F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D64F8
  return; // 800D64FC
}

// fn_800D6500
void f_800D6500(Ctx* __restrict c) {
  trace_call(0x800D6500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6500
  c->r[0]=c->lr; // 800D6504
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6508
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D650C
  c->r[30]=c->r[3]|c->r[3]; // 800D6510
  c->r[31]=c->r[4]|c->r[4]; // 800D6514
  c->lr=0x800D651Cu; f_8030D728(c); // 800D6518
  c->r[3]=c->r[31]|c->r[31]; // 800D651C
  c->r[4]=0u+0x00000000u; // 800D6520
  c->lr=0x800D6528u; f_8030BE30(c); // 800D6524
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D6528
  c->r[3]=c->r[31]|c->r[31]; // 800D652C
  c->lr=0x800D6534u; f_8030BD1C(c); // 800D6530
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D6534
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6538
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D653C
  c->lr=c->r[0]; // 800D6540
  c->r[1]=c->r[1]+0x00000010u; // 800D6544
  return; // 800D6548
}

// fn_800D654C
void f_800D654C(Ctx* __restrict c) {
  trace_call(0x800D654Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D654C
  c->r[5]=c->r[3]|c->r[3]; // 800D6550
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D6554
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6558
  c->r[3]=c->r[4]+0x0000000Cu; // 800D655C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D6560
  c->r[4]=c->r[5]+0x0000000Cu; // 800D6564
  f_8003AB48(c); return; // 800D6568
}

// fn_800D656C
void f_800D656C(Ctx* __restrict c) {
  trace_call(0x800D656Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D656C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D6570
  c->ctr=c->r[12]; // 800D6574
  if (true) { dispatch(c,c->ctr); return; } // 800D6578
}

// fn_800D657C
void f_800D657C(Ctx* __restrict c) {
  trace_call(0x800D657Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D657C
  c->r[0]=c->lr; // 800D6580
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6584
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6588
  c->r[29]=c->r[3]|c->r[3]; // 800D658C
  c->r[30]=c->r[4]|c->r[4]; // 800D6590
  c->r[31]=c->r[5]|c->r[5]; // 800D6594
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D6598
  cmps(c,0,(int32_t)c->r[0],7); // 800D659C
  if (!crb(c,0)) { goto L_800D65B0; } // 800D65A0
  c->r[4]=c->r[31]|c->r[31]; // 800D65A4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D65A8
  c->lr=0x800D65B0u; f_8003A994(c); // 800D65AC
L_800D65B0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D65B0
  c->r[3]=c->r[29]|c->r[29]; // 800D65B4
  c->r[4]=c->r[30]|c->r[30]; // 800D65B8
  c->r[5]=c->r[31]|c->r[31]; // 800D65BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D65C0
  c->ctr=c->r[12]; // 800D65C4
  if (true) { c->lr=0x800D65CCu; dispatch(c,c->ctr); } // 800D65C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D65CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D65D0
  c->lr=c->r[0]; // 800D65D4
  c->r[1]=c->r[1]+0x00000020u; // 800D65D8
  return; // 800D65DC
}

// fn_800D65E0
void f_800D65E0(Ctx* __restrict c) {
  trace_call(0x800D65E0u);
  c->r[3]=0u+0x80410000u; // 800D65E0
  c->r[3]=c->r[3]+0xFFFFD585u; // 800D65E4
  return; // 800D65E8
}

// fn_800D65EC
void f_800D65EC(Ctx* __restrict c) {
  trace_call(0x800D65ECu);
  c->r[3]=0u+0x00000018u; // 800D65EC
  return; // 800D65F0
}

// fn_800D65F4
void f_800D65F4(Ctx* __restrict c) {
  trace_call(0x800D65F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D65F4
  c->r[0]=c->lr; // 800D65F8
  c->r[3]=0u+0x00000018u; // 800D65FC
  c->r[4]=c->r[13]+0xFFFFB4E9u; // 800D6600
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6604
  c->r[5]=0u+0x00000000u; // 800D6608
  c->r[6]=0u+0x00001001u; // 800D660C
  c->lr=0x800D6614u; f_80244D20(c); // 800D6610
  cmps(c,0,(int32_t)c->r[3],0); // 800D6614
  if (crb(c,2)) { goto L_800D6620; } // 800D6618
  c->lr=0x800D6620u; f_800D64DC(c); // 800D661C
L_800D6620:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6620
  c->lr=c->r[0]; // 800D6624
  c->r[1]=c->r[1]+0x00000010u; // 800D6628
  return; // 800D662C
}

// fn_800D6630
void f_800D6630(Ctx* __restrict c) {
  trace_call(0x800D6630u);
  c->r[6]=0u+0x80420000u; // 800D6630
  c->r[4]=0u+0x1E9D0000u; // 800D6634
  c->r[5]=0u+0x00000000u; // 800D6638
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D663C
  c->r[6]=c->r[6]+0xFFFF810Cu; // 800D6640
  c->r[0]=c->r[4]+0xFFFF82F2u; // 800D6644
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D6648
  W32(c->r[3]+0x00000020u,c->r[5]); // 800D664C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D6650
  return; // 800D6654
}

// fn_800D6658
void f_800D6658(Ctx* __restrict c) {
  trace_call(0x800D6658u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6658
  c->r[0]=c->lr; // 800D665C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6660
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6664
  c->r[30]=c->r[3]|c->r[3]; // 800D6668
  c->r[31]=c->r[4]|c->r[4]; // 800D666C
  c->lr=0x800D6674u; f_8030D728(c); // 800D6670
  c->r[3]=c->r[31]|c->r[31]; // 800D6674
  c->r[4]=0u+0x00000000u; // 800D6678
  c->lr=0x800D6680u; f_8030BE30(c); // 800D667C
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D6680
  c->r[3]=c->r[31]|c->r[31]; // 800D6684
  c->lr=0x800D668Cu; f_8030BD1C(c); // 800D6688
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D668C
  c->r[3]=c->r[31]|c->r[31]; // 800D6690
  c->r[4]=0u+0x00000000u; // 800D6694
  c->lr=0x800D669Cu; f_8030BE30(c); // 800D6698
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D669C
  c->r[3]=c->r[31]|c->r[31]; // 800D66A0
  c->lr=0x800D66A8u; f_8030BD1C(c); // 800D66A4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D66A8
  c->r[3]=c->r[31]|c->r[31]; // 800D66AC
  c->lr=0x800D66B4u; f_8030C0A0(c); // 800D66B0
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 800D66B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D66B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D66BC
  c->lr=c->r[0]; // 800D66C0
  c->r[1]=c->r[1]+0x00000010u; // 800D66C4
  return; // 800D66C8
}

// fn_800D66CC
void f_800D66CC(Ctx* __restrict c) {
  trace_call(0x800D66CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D66CC
  c->r[0]=c->lr; // 800D66D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D66D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D66D8
  c->r[31]=c->r[4]|c->r[4]; // 800D66DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D66E0
  c->r[30]=c->r[3]|c->r[3]; // 800D66E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D66E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D66EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D66F0
  c->r[3]=c->r[4]+0x0000000Cu; // 800D66F4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D66F8
  c->r[4]=c->r[30]+0x0000000Cu; // 800D66FC
  c->lr=0x800D6704u; f_8003AB48(c); // 800D6700
  c->r[3]=c->r[31]+0x00000018u; // 800D6704
  c->r[4]=c->r[30]+0x00000018u; // 800D6708
  c->lr=0x800D6710u; f_8003AB48(c); // 800D670C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6710
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800D6714
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6718
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D671C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6720
  c->lr=c->r[0]; // 800D6724
  c->r[1]=c->r[1]+0x00000010u; // 800D6728
  return; // 800D672C
}

// fn_800D6730
void f_800D6730(Ctx* __restrict c) {
  trace_call(0x800D6730u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D6730
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D6734
  c->ctr=c->r[12]; // 800D6738
  if (true) { dispatch(c,c->ctr); return; } // 800D673C
}

// fn_800D6740
void f_800D6740(Ctx* __restrict c) {
  trace_call(0x800D6740u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6740
  c->r[0]=c->lr; // 800D6744
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6748
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D674C
  c->r[29]=c->r[3]|c->r[3]; // 800D6750
  c->r[30]=c->r[4]|c->r[4]; // 800D6754
  c->r[31]=c->r[5]|c->r[5]; // 800D6758
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D675C
  cmps(c,0,(int32_t)c->r[0],7); // 800D6760
  if (!crb(c,0)) { goto L_800D6774; } // 800D6764
  c->r[4]=c->r[31]|c->r[31]; // 800D6768
  c->r[3]=c->r[3]+0x0000000Cu; // 800D676C
  c->lr=0x800D6774u; f_8003A994(c); // 800D6770
L_800D6774:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D6774
  cmps(c,0,(int32_t)c->r[0],7); // 800D6778
  if (!crb(c,0)) { goto L_800D678C; } // 800D677C
  c->r[4]=c->r[31]|c->r[31]; // 800D6780
  c->r[3]=c->r[29]+0x00000018u; // 800D6784
  c->lr=0x800D678Cu; f_8003A994(c); // 800D6788
L_800D678C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D678C
  c->r[3]=c->r[29]|c->r[29]; // 800D6790
  c->r[4]=c->r[30]|c->r[30]; // 800D6794
  c->r[5]=c->r[31]|c->r[31]; // 800D6798
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D679C
  c->ctr=c->r[12]; // 800D67A0
  if (true) { c->lr=0x800D67A8u; dispatch(c,c->ctr); } // 800D67A4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D67A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D67AC
  c->lr=c->r[0]; // 800D67B0
  c->r[1]=c->r[1]+0x00000020u; // 800D67B4
  return; // 800D67B8
}

// fn_800D67BC
void f_800D67BC(Ctx* __restrict c) {
  trace_call(0x800D67BCu);
  c->r[3]=0u+0x80410000u; // 800D67BC
  c->r[3]=c->r[3]+0xFFFFD592u; // 800D67C0
  return; // 800D67C4
}

// fn_800D67C8
void f_800D67C8(Ctx* __restrict c) {
  trace_call(0x800D67C8u);
  c->r[3]=0u+0x00000028u; // 800D67C8
  return; // 800D67CC
}

// fn_800D67D0
void f_800D67D0(Ctx* __restrict c) {
  trace_call(0x800D67D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D67D0
  c->r[0]=c->lr; // 800D67D4
  c->r[3]=0u+0x00000028u; // 800D67D8
  c->r[4]=c->r[13]+0xFFFFB4EEu; // 800D67DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D67E0
  c->r[5]=0u+0x00000000u; // 800D67E4
  c->r[6]=0u+0x00001001u; // 800D67E8
  c->lr=0x800D67F0u; f_80244D20(c); // 800D67EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D67F0
  if (crb(c,2)) { goto L_800D67FC; } // 800D67F4
  c->lr=0x800D67FCu; f_800D6630(c); // 800D67F8
L_800D67FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D67FC
  c->lr=c->r[0]; // 800D6800
  c->r[1]=c->r[1]+0x00000010u; // 800D6804
  return; // 800D6808
}

// fn_800D680C
void f_800D680C(Ctx* __restrict c) {
  trace_call(0x800D680Cu);
  c->r[6]=0u+0x80420000u; // 800D680C
  c->r[4]=0u+0x59710000u; // 800D6810
  c->r[6]=c->r[6]+0xFFFF80D8u; // 800D6814
  c->r[5]=0u+0x00000000u; // 800D6818
  c->r[0]=c->r[4]+0x000047B2u; // 800D681C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D6820
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D6824
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D6828
  return; // 800D682C
}

// fn_800D6830
void f_800D6830(Ctx* __restrict c) {
  trace_call(0x800D6830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6830
  c->r[0]=c->lr; // 800D6834
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6838
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D683C
  c->r[30]=c->r[3]|c->r[3]; // 800D6840
  c->r[31]=c->r[4]|c->r[4]; // 800D6844
  c->lr=0x800D684Cu; f_8030D728(c); // 800D6848
  c->r[3]=c->r[31]|c->r[31]; // 800D684C
  c->r[4]=0u+0x00000000u; // 800D6850
  c->lr=0x800D6858u; f_8030BE30(c); // 800D6854
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D6858
  c->r[3]=c->r[31]|c->r[31]; // 800D685C
  c->lr=0x800D6864u; f_8030BD1C(c); // 800D6860
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D6864
  c->r[3]=c->r[31]|c->r[31]; // 800D6868
  c->lr=0x800D6870u; f_8030BD1C(c); // 800D686C
  W8(c->r[30]+0x00000018u,c->r[3]); // 800D6870
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6874
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6878
  c->lr=c->r[0]; // 800D687C
  c->r[1]=c->r[1]+0x00000010u; // 800D6880
  return; // 800D6884
}

// fn_800D6888
void f_800D6888(Ctx* __restrict c) {
  trace_call(0x800D6888u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6888
  c->r[0]=c->lr; // 800D688C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6890
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6894
  c->r[30]=c->r[3]|c->r[3]; // 800D6898
  c->r[31]=c->r[4]|c->r[4]; // 800D689C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D68A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D68A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D68A8
  c->r[3]=c->r[4]+0x0000000Cu; // 800D68AC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D68B0
  c->r[4]=c->r[30]+0x0000000Cu; // 800D68B4
  c->lr=0x800D68BCu; f_8003AB48(c); // 800D68B8
  c->r[0]=R8(c->r[30]+0x00000018u); // 800D68BC
  W8(c->r[31]+0x00000018u,c->r[0]); // 800D68C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D68C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D68C8
  c->lr=c->r[0]; // 800D68CC
  c->r[1]=c->r[1]+0x00000010u; // 800D68D0
  return; // 800D68D4
}

// fn_800D68D8
void f_800D68D8(Ctx* __restrict c) {
  trace_call(0x800D68D8u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D68D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D68DC
  c->ctr=c->r[12]; // 800D68E0
  if (true) { dispatch(c,c->ctr); return; } // 800D68E4
}

// fn_800D68E8
void f_800D68E8(Ctx* __restrict c) {
  trace_call(0x800D68E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D68E8
  c->r[0]=c->lr; // 800D68EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D68F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D68F4
  c->r[29]=c->r[3]|c->r[3]; // 800D68F8
  c->r[30]=c->r[4]|c->r[4]; // 800D68FC
  c->r[31]=c->r[5]|c->r[5]; // 800D6900
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D6904
  cmps(c,0,(int32_t)c->r[0],7); // 800D6908
  if (!crb(c,0)) { goto L_800D691C; } // 800D690C
  c->r[4]=c->r[31]|c->r[31]; // 800D6910
  c->r[3]=c->r[3]+0x0000000Cu; // 800D6914
  c->lr=0x800D691Cu; f_8003A994(c); // 800D6918
L_800D691C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D691C
  c->r[3]=c->r[29]|c->r[29]; // 800D6920
  c->r[4]=c->r[30]|c->r[30]; // 800D6924
  c->r[5]=c->r[31]|c->r[31]; // 800D6928
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D692C
  c->ctr=c->r[12]; // 800D6930
  if (true) { c->lr=0x800D6938u; dispatch(c,c->ctr); } // 800D6934
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6938
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D693C
  c->lr=c->r[0]; // 800D6940
  c->r[1]=c->r[1]+0x00000020u; // 800D6944
  return; // 800D6948
}

// fn_800D694C
void f_800D694C(Ctx* __restrict c) {
  trace_call(0x800D694Cu);
  c->r[3]=0u+0x80410000u; // 800D694C
  c->r[3]=c->r[3]+0xFFFFD5A9u; // 800D6950
  return; // 800D6954
}

// fn_800D6958
void f_800D6958(Ctx* __restrict c) {
  trace_call(0x800D6958u);
  c->r[3]=0u+0x0000001Cu; // 800D6958
  return; // 800D695C
}

// fn_800D6960
void f_800D6960(Ctx* __restrict c) {
  trace_call(0x800D6960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6960
  c->r[0]=c->lr; // 800D6964
  c->r[3]=0u+0x0000001Cu; // 800D6968
  c->r[4]=c->r[13]+0xFFFFB4F3u; // 800D696C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6970
  c->r[5]=0u+0x00000000u; // 800D6974
  c->r[6]=0u+0x00001001u; // 800D6978
  c->lr=0x800D6980u; f_80244D20(c); // 800D697C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6980
  if (crb(c,2)) { goto L_800D698C; } // 800D6984
  c->lr=0x800D698Cu; f_800D680C(c); // 800D6988
L_800D698C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D698C
  c->lr=c->r[0]; // 800D6990
  c->r[1]=c->r[1]+0x00000010u; // 800D6994
  return; // 800D6998
}

// fn_800D699C
void f_800D699C(Ctx* __restrict c) {
  trace_call(0x800D699Cu);
  c->r[6]=0u+0x80420000u; // 800D699C
  c->r[4]=0u+0xB50E0000u; // 800D69A0
  c->r[6]=c->r[6]+0xFFFF80A4u; // 800D69A4
  c->r[5]=0u+0x00000000u; // 800D69A8
  c->r[0]=c->r[4]+0xFFFF808Bu; // 800D69AC
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D69B0
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D69B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D69B8
  return; // 800D69BC
}

// fn_800D69C0
void f_800D69C0(Ctx* __restrict c) {
  trace_call(0x800D69C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D69C0
  c->r[0]=c->lr; // 800D69C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D69C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D69CC
  c->r[30]=c->r[3]|c->r[3]; // 800D69D0
  c->r[31]=c->r[4]|c->r[4]; // 800D69D4
  c->lr=0x800D69DCu; f_8030D728(c); // 800D69D8
  c->r[3]=c->r[31]|c->r[31]; // 800D69DC
  c->r[4]=0u+0x00000000u; // 800D69E0
  c->lr=0x800D69E8u; f_8030BE30(c); // 800D69E4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D69E8
  c->r[3]=c->r[31]|c->r[31]; // 800D69EC
  c->lr=0x800D69F4u; f_8030BD1C(c); // 800D69F0
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D69F4
  c->r[3]=c->r[31]|c->r[31]; // 800D69F8
  c->lr=0x800D6A00u; f_8030BD1C(c); // 800D69FC
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D6A00
  c->r[3]=c->r[31]|c->r[31]; // 800D6A04
  c->lr=0x800D6A0Cu; f_8030BD1C(c); // 800D6A08
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D6A0C
  c->r[3]=c->r[31]|c->r[31]; // 800D6A10
  c->lr=0x800D6A18u; f_8030C0A0(c); // 800D6A14
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 800D6A18
  c->r[3]=c->r[31]|c->r[31]; // 800D6A1C
  c->lr=0x800D6A24u; f_8030BD1C(c); // 800D6A20
  W8(c->r[30]+0x00000024u,c->r[3]); // 800D6A24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6A28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6A2C
  c->lr=c->r[0]; // 800D6A30
  c->r[1]=c->r[1]+0x00000010u; // 800D6A34
  return; // 800D6A38
}

// fn_800D6A3C
void f_800D6A3C(Ctx* __restrict c) {
  trace_call(0x800D6A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6A3C
  c->r[0]=c->lr; // 800D6A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6A44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6A48
  c->r[31]=c->r[4]|c->r[4]; // 800D6A4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6A50
  c->r[30]=c->r[3]|c->r[3]; // 800D6A54
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6A58
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D6A5C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6A60
  c->r[3]=c->r[4]+0x0000000Cu; // 800D6A64
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D6A68
  c->r[4]=c->r[30]+0x0000000Cu; // 800D6A6C
  c->lr=0x800D6A74u; f_8003AB48(c); // 800D6A70
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D6A74
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D6A78
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800D6A7C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800D6A80
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6A84
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800D6A88
  c->r[0]=R8(c->r[30]+0x00000024u); // 800D6A8C
  W8(c->r[31]+0x00000024u,c->r[0]); // 800D6A90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6A94
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6A98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6A9C
  c->lr=c->r[0]; // 800D6AA0
  c->r[1]=c->r[1]+0x00000010u; // 800D6AA4
  return; // 800D6AA8
}

// fn_800D6AAC
void f_800D6AAC(Ctx* __restrict c) {
  trace_call(0x800D6AACu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D6AAC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D6AB0
  c->ctr=c->r[12]; // 800D6AB4
  if (true) { dispatch(c,c->ctr); return; } // 800D6AB8
}

// fn_800D6ABC
void f_800D6ABC(Ctx* __restrict c) {
  trace_call(0x800D6ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6ABC
  c->r[0]=c->lr; // 800D6AC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6AC4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6AC8
  c->r[29]=c->r[3]|c->r[3]; // 800D6ACC
  c->r[30]=c->r[4]|c->r[4]; // 800D6AD0
  c->r[31]=c->r[5]|c->r[5]; // 800D6AD4
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D6AD8
  cmps(c,0,(int32_t)c->r[0],7); // 800D6ADC
  if (!crb(c,0)) { goto L_800D6AF0; } // 800D6AE0
  c->r[4]=c->r[31]|c->r[31]; // 800D6AE4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D6AE8
  c->lr=0x800D6AF0u; f_8003A994(c); // 800D6AEC
L_800D6AF0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D6AF0
  c->r[3]=c->r[29]|c->r[29]; // 800D6AF4
  c->r[4]=c->r[30]|c->r[30]; // 800D6AF8
  c->r[5]=c->r[31]|c->r[31]; // 800D6AFC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D6B00
  c->ctr=c->r[12]; // 800D6B04
  if (true) { c->lr=0x800D6B0Cu; dispatch(c,c->ctr); } // 800D6B08
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6B0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6B10
  c->lr=c->r[0]; // 800D6B14
  c->r[1]=c->r[1]+0x00000020u; // 800D6B18
  return; // 800D6B1C
}

// fn_800D6B20
void f_800D6B20(Ctx* __restrict c) {
  trace_call(0x800D6B20u);
  c->r[3]=0u+0x80410000u; // 800D6B20
  c->r[3]=c->r[3]+0xFFFFD5B7u; // 800D6B24
  return; // 800D6B28
}

// fn_800D6B2C
void f_800D6B2C(Ctx* __restrict c) {
  trace_call(0x800D6B2Cu);
  c->r[3]=0u+0x00000028u; // 800D6B2C
  return; // 800D6B30
}

// fn_800D6B34
void f_800D6B34(Ctx* __restrict c) {
  trace_call(0x800D6B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6B34
  c->r[0]=c->lr; // 800D6B38
  c->r[3]=0u+0x00000028u; // 800D6B3C
  c->r[4]=c->r[13]+0xFFFFB4F8u; // 800D6B40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6B44
  c->r[5]=0u+0x00000000u; // 800D6B48
  c->r[6]=0u+0x00001001u; // 800D6B4C
  c->lr=0x800D6B54u; f_80244D20(c); // 800D6B50
  cmps(c,0,(int32_t)c->r[3],0); // 800D6B54
  if (crb(c,2)) { goto L_800D6B60; } // 800D6B58
  c->lr=0x800D6B60u; f_800D699C(c); // 800D6B5C
L_800D6B60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6B60
  c->lr=c->r[0]; // 800D6B64
  c->r[1]=c->r[1]+0x00000010u; // 800D6B68
  return; // 800D6B6C
}

// fn_800D6B70
void f_800D6B70(Ctx* __restrict c) {
  trace_call(0x800D6B70u);
  c->r[6]=0u+0x80420000u; // 800D6B70
  c->r[4]=0u+0x492C0000u; // 800D6B74
  c->r[5]=0u+0x00000000u; // 800D6B78
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D6B7C
  c->r[6]=c->r[6]+0xFFFF8070u; // 800D6B80
  c->r[0]=c->r[4]+0xFFFFDB5Au; // 800D6B84
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D6B88
  W32(c->r[3]+0x00000020u,c->r[5]); // 800D6B8C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D6B90
  return; // 800D6B94
}

// fn_800D6B98
void f_800D6B98(Ctx* __restrict c) {
  trace_call(0x800D6B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6B98
  c->r[0]=c->lr; // 800D6B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6BA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6BA4
  c->r[30]=c->r[3]|c->r[3]; // 800D6BA8
  c->r[31]=c->r[4]|c->r[4]; // 800D6BAC
  c->lr=0x800D6BB4u; f_8030D728(c); // 800D6BB0
  c->r[3]=c->r[31]|c->r[31]; // 800D6BB4
  c->r[4]=0u+0x00000000u; // 800D6BB8
  c->lr=0x800D6BC0u; f_8030BE30(c); // 800D6BBC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D6BC0
  c->r[3]=c->r[31]|c->r[31]; // 800D6BC4
  c->lr=0x800D6BCCu; f_8030BD1C(c); // 800D6BC8
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D6BCC
  c->r[3]=c->r[31]|c->r[31]; // 800D6BD0
  c->r[4]=0u+0x00000000u; // 800D6BD4
  c->lr=0x800D6BDCu; f_8030BE30(c); // 800D6BD8
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D6BDC
  c->r[3]=c->r[31]|c->r[31]; // 800D6BE0
  c->lr=0x800D6BE8u; f_8030BD1C(c); // 800D6BE4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D6BE8
  c->r[3]=c->r[31]|c->r[31]; // 800D6BEC
  c->lr=0x800D6BF4u; f_8030BD1C(c); // 800D6BF0
  W32(c->r[30]+0x00000024u,c->r[3]); // 800D6BF4
  c->r[3]=c->r[31]|c->r[31]; // 800D6BF8
  c->lr=0x800D6C00u; f_8030BD1C(c); // 800D6BFC
  W32(c->r[30]+0x00000028u,c->r[3]); // 800D6C00
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6C04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6C08
  c->lr=c->r[0]; // 800D6C0C
  c->r[1]=c->r[1]+0x00000010u; // 800D6C10
  return; // 800D6C14
}

// fn_800D6C18
void f_800D6C18(Ctx* __restrict c) {
  trace_call(0x800D6C18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C18
  c->r[0]=c->lr; // 800D6C1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6C20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6C24
  c->r[30]=c->r[3]|c->r[3]; // 800D6C28
  c->r[31]=c->r[4]|c->r[4]; // 800D6C2C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6C30
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D6C34
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6C38
  c->r[3]=c->r[4]+0x0000000Cu; // 800D6C3C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D6C40
  c->r[4]=c->r[30]+0x0000000Cu; // 800D6C44
  c->lr=0x800D6C4Cu; f_8003AB48(c); // 800D6C48
  c->r[3]=c->r[31]+0x00000018u; // 800D6C4C
  c->r[4]=c->r[30]+0x00000018u; // 800D6C50
  c->lr=0x800D6C58u; f_8003AB48(c); // 800D6C54
  c->r[0]=R32(c->r[30]+0x00000024u); // 800D6C58
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D6C5C
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D6C60
  W32(c->r[31]+0x00000028u,c->r[0]); // 800D6C64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6C6C
  c->lr=c->r[0]; // 800D6C70
  c->r[1]=c->r[1]+0x00000010u; // 800D6C74
  return; // 800D6C78
}

// fn_800D6C7C
void f_800D6C7C(Ctx* __restrict c) {
  trace_call(0x800D6C7Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D6C7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D6C80
  c->ctr=c->r[12]; // 800D6C84
  if (true) { dispatch(c,c->ctr); return; } // 800D6C88
}

// fn_800D6C8C
void f_800D6C8C(Ctx* __restrict c) {
  trace_call(0x800D6C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C8C
  c->r[0]=c->lr; // 800D6C90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6C94
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6C98
  c->r[29]=c->r[3]|c->r[3]; // 800D6C9C
  c->r[30]=c->r[4]|c->r[4]; // 800D6CA0
  c->r[31]=c->r[5]|c->r[5]; // 800D6CA4
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D6CA8
  cmps(c,0,(int32_t)c->r[0],7); // 800D6CAC
  if (!crb(c,0)) { goto L_800D6CC0; } // 800D6CB0
  c->r[4]=c->r[31]|c->r[31]; // 800D6CB4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D6CB8
  c->lr=0x800D6CC0u; f_8003A994(c); // 800D6CBC
L_800D6CC0:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D6CC0
  cmps(c,0,(int32_t)c->r[0],7); // 800D6CC4
  if (!crb(c,0)) { goto L_800D6CD8; } // 800D6CC8
  c->r[4]=c->r[31]|c->r[31]; // 800D6CCC
  c->r[3]=c->r[29]+0x00000018u; // 800D6CD0
  c->lr=0x800D6CD8u; f_8003A994(c); // 800D6CD4
L_800D6CD8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D6CD8
  c->r[3]=c->r[29]|c->r[29]; // 800D6CDC
  c->r[4]=c->r[30]|c->r[30]; // 800D6CE0
  c->r[5]=c->r[31]|c->r[31]; // 800D6CE4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D6CE8
  c->ctr=c->r[12]; // 800D6CEC
  if (true) { c->lr=0x800D6CF4u; dispatch(c,c->ctr); } // 800D6CF0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6CF8
  c->lr=c->r[0]; // 800D6CFC
  c->r[1]=c->r[1]+0x00000020u; // 800D6D00
  return; // 800D6D04
}

// fn_800D6D08
void f_800D6D08(Ctx* __restrict c) {
  trace_call(0x800D6D08u);
  c->r[3]=0u+0x80410000u; // 800D6D08
  c->r[3]=c->r[3]+0xFFFFD5CAu; // 800D6D0C
  return; // 800D6D10
}

// fn_800D6D14
void f_800D6D14(Ctx* __restrict c) {
  trace_call(0x800D6D14u);
  c->r[3]=0u+0x0000002Cu; // 800D6D14
  return; // 800D6D18
}

// fn_800D6D1C
void f_800D6D1C(Ctx* __restrict c) {
  trace_call(0x800D6D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6D1C
  c->r[0]=c->lr; // 800D6D20
  c->r[3]=0u+0x0000002Cu; // 800D6D24
  c->r[4]=c->r[13]+0xFFFFB4FDu; // 800D6D28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6D2C
  c->r[5]=0u+0x00000000u; // 800D6D30
  c->r[6]=0u+0x00001001u; // 800D6D34
  c->lr=0x800D6D3Cu; f_80244D20(c); // 800D6D38
  cmps(c,0,(int32_t)c->r[3],0); // 800D6D3C
  if (crb(c,2)) { goto L_800D6D48; } // 800D6D40
  c->lr=0x800D6D48u; f_800D6B70(c); // 800D6D44
L_800D6D48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6D48
  c->lr=c->r[0]; // 800D6D4C
  c->r[1]=c->r[1]+0x00000010u; // 800D6D50
  return; // 800D6D54
}

// fn_800D6D58
void f_800D6D58(Ctx* __restrict c) {
  trace_call(0x800D6D58u);
  c->r[6]=0u+0x80420000u; // 800D6D58
  c->r[4]=0u+0x942E0000u; // 800D6D5C
  c->r[5]=0u+0x00000000u; // 800D6D60
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D6D64
  c->r[6]=c->r[6]+0xFFFF803Cu; // 800D6D68
  c->r[0]=c->r[4]+0x00000C51u; // 800D6D6C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D6D70
  W32(c->r[3]+0x00000020u,c->r[5]); // 800D6D74
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D6D78
  return; // 800D6D7C
}

// fn_800D6D80
void f_800D6D80(Ctx* __restrict c) {
  trace_call(0x800D6D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6D80
  c->r[0]=c->lr; // 800D6D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6D88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6D8C
  c->r[30]=c->r[3]|c->r[3]; // 800D6D90
  c->r[31]=c->r[4]|c->r[4]; // 800D6D94
  c->lr=0x800D6D9Cu; f_8030D728(c); // 800D6D98
  c->r[3]=c->r[31]|c->r[31]; // 800D6D9C
  c->r[4]=0u+0x00000000u; // 800D6DA0
  c->lr=0x800D6DA8u; f_8030BE30(c); // 800D6DA4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D6DA8
  c->r[3]=c->r[31]|c->r[31]; // 800D6DAC
  c->lr=0x800D6DB4u; f_8030BD1C(c); // 800D6DB0
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D6DB4
  c->r[3]=c->r[31]|c->r[31]; // 800D6DB8
  c->r[4]=0u+0x00000000u; // 800D6DBC
  c->lr=0x800D6DC4u; f_8030BE30(c); // 800D6DC0
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D6DC4
  c->r[3]=c->r[31]|c->r[31]; // 800D6DC8
  c->lr=0x800D6DD0u; f_8030BD1C(c); // 800D6DCC
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800D6DD0
  c->r[3]=c->r[31]|c->r[31]; // 800D6DD4
  c->lr=0x800D6DDCu; f_8030C0A0(c); // 800D6DD8
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 800D6DDC
  c->r[3]=c->r[31]|c->r[31]; // 800D6DE0
  c->lr=0x800D6DE8u; f_8030BD1C(c); // 800D6DE4
  W32(c->r[30]+0x00000028u,c->r[3]); // 800D6DE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6DEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6DF0
  c->lr=c->r[0]; // 800D6DF4
  c->r[1]=c->r[1]+0x00000010u; // 800D6DF8
  return; // 800D6DFC
}

// fn_800D6E00
void f_800D6E00(Ctx* __restrict c) {
  trace_call(0x800D6E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E00
  c->r[0]=c->lr; // 800D6E04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6E08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6E0C
  c->r[31]=c->r[4]|c->r[4]; // 800D6E10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6E14
  c->r[30]=c->r[3]|c->r[3]; // 800D6E18
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6E1C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D6E20
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6E24
  c->r[3]=c->r[4]+0x0000000Cu; // 800D6E28
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D6E2C
  c->r[4]=c->r[30]+0x0000000Cu; // 800D6E30
  c->lr=0x800D6E38u; f_8003AB48(c); // 800D6E34
  c->r[3]=c->r[31]+0x00000018u; // 800D6E38
  c->r[4]=c->r[30]+0x00000018u; // 800D6E3C
  c->lr=0x800D6E44u; f_8003AB48(c); // 800D6E40
  {uint32_t ea=c->r[30]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D6E44
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800D6E48
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D6E4C
  W32(c->r[31]+0x00000028u,c->r[0]); // 800D6E50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6E54
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6E58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6E5C
  c->lr=c->r[0]; // 800D6E60
  c->r[1]=c->r[1]+0x00000010u; // 800D6E64
  return; // 800D6E68
}

// fn_800D6E6C
void f_800D6E6C(Ctx* __restrict c) {
  trace_call(0x800D6E6Cu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D6E6C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D6E70
  c->ctr=c->r[12]; // 800D6E74
  if (true) { dispatch(c,c->ctr); return; } // 800D6E78
}

// fn_800D6E7C
void f_800D6E7C(Ctx* __restrict c) {
  trace_call(0x800D6E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E7C
  c->r[0]=c->lr; // 800D6E80
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6E84
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6E88
  c->r[29]=c->r[3]|c->r[3]; // 800D6E8C
  c->r[30]=c->r[4]|c->r[4]; // 800D6E90
  c->r[31]=c->r[5]|c->r[5]; // 800D6E94
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D6E98
  cmps(c,0,(int32_t)c->r[0],7); // 800D6E9C
  if (!crb(c,0)) { goto L_800D6EB0; } // 800D6EA0
  c->r[4]=c->r[31]|c->r[31]; // 800D6EA4
  c->r[3]=c->r[3]+0x0000000Cu; // 800D6EA8
  c->lr=0x800D6EB0u; f_8003A994(c); // 800D6EAC
L_800D6EB0:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D6EB0
  cmps(c,0,(int32_t)c->r[0],7); // 800D6EB4
  if (!crb(c,0)) { goto L_800D6EC8; } // 800D6EB8
  c->r[4]=c->r[31]|c->r[31]; // 800D6EBC
  c->r[3]=c->r[29]+0x00000018u; // 800D6EC0
  c->lr=0x800D6EC8u; f_8003A994(c); // 800D6EC4
L_800D6EC8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D6EC8
  c->r[3]=c->r[29]|c->r[29]; // 800D6ECC
  c->r[4]=c->r[30]|c->r[30]; // 800D6ED0
  c->r[5]=c->r[31]|c->r[31]; // 800D6ED4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D6ED8
  c->ctr=c->r[12]; // 800D6EDC
  if (true) { c->lr=0x800D6EE4u; dispatch(c,c->ctr); } // 800D6EE0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6EE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6EE8
  c->lr=c->r[0]; // 800D6EEC
  c->r[1]=c->r[1]+0x00000020u; // 800D6EF0
  return; // 800D6EF4
}

// fn_800D6EF8
void f_800D6EF8(Ctx* __restrict c) {
  trace_call(0x800D6EF8u);
  c->r[3]=0u+0x80410000u; // 800D6EF8
  c->r[3]=c->r[3]+0xFFFFD5DCu; // 800D6EFC
  return; // 800D6F00
}

// fn_800D6F04
void f_800D6F04(Ctx* __restrict c) {
  trace_call(0x800D6F04u);
  c->r[3]=0u+0x0000002Cu; // 800D6F04
  return; // 800D6F08
}

// fn_800D6F0C
void f_800D6F0C(Ctx* __restrict c) {
  trace_call(0x800D6F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F0C
  c->r[0]=c->lr; // 800D6F10
  c->r[3]=0u+0x0000002Cu; // 800D6F14
  c->r[4]=c->r[13]+0xFFFFB502u; // 800D6F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6F1C
  c->r[5]=0u+0x00000000u; // 800D6F20
  c->r[6]=0u+0x00001001u; // 800D6F24
  c->lr=0x800D6F2Cu; f_80244D20(c); // 800D6F28
  cmps(c,0,(int32_t)c->r[3],0); // 800D6F2C
  if (crb(c,2)) { goto L_800D6F38; } // 800D6F30
  c->lr=0x800D6F38u; f_800D6D58(c); // 800D6F34
L_800D6F38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6F38
  c->lr=c->r[0]; // 800D6F3C
  c->r[1]=c->r[1]+0x00000010u; // 800D6F40
  return; // 800D6F44
}

// fn_800D6F48
void f_800D6F48(Ctx* __restrict c) {
  trace_call(0x800D6F48u);
  c->r[6]=0u+0x80420000u; // 800D6F48
  c->r[4]=0u+0xE56B0000u; // 800D6F4C
  c->r[6]=c->r[6]+0xFFFF8008u; // 800D6F50
  c->r[5]=0u+0x00000000u; // 800D6F54
  c->r[0]=c->r[4]+0x00006F6Bu; // 800D6F58
  W32(c->r[3]+0x00000008u,c->r[6]); // 800D6F5C
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D6F60
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D6F64
  return; // 800D6F68
}

// fn_800D6F6C
void f_800D6F6C(Ctx* __restrict c) {
  trace_call(0x800D6F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F6C
  c->r[0]=c->lr; // 800D6F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6F74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6F78
  c->r[30]=c->r[3]|c->r[3]; // 800D6F7C
  c->r[31]=c->r[4]|c->r[4]; // 800D6F80
  c->lr=0x800D6F88u; f_8030D728(c); // 800D6F84
  c->r[3]=c->r[31]|c->r[31]; // 800D6F88
  c->r[4]=0u+0x00000000u; // 800D6F8C
  c->lr=0x800D6F94u; f_8030BE30(c); // 800D6F90
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800D6F94
  c->r[3]=c->r[31]|c->r[31]; // 800D6F98
  c->lr=0x800D6FA0u; f_8030BD1C(c); // 800D6F9C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800D6FA0
  c->r[3]=c->r[31]|c->r[31]; // 800D6FA4
  c->lr=0x800D6FACu; f_8030BD1C(c); // 800D6FA8
  W32(c->r[30]+0x00000018u,c->r[3]); // 800D6FAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6FB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6FB4
  c->lr=c->r[0]; // 800D6FB8
  c->r[1]=c->r[1]+0x00000010u; // 800D6FBC
  return; // 800D6FC0
}

// fn_800D6FC4
void f_800D6FC4(Ctx* __restrict c) {
  trace_call(0x800D6FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6FC4
  c->r[0]=c->lr; // 800D6FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6FCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6FD0
  c->r[30]=c->r[3]|c->r[3]; // 800D6FD4
  c->r[31]=c->r[4]|c->r[4]; // 800D6FD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D6FDC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D6FE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D6FE4
  c->r[3]=c->r[4]+0x0000000Cu; // 800D6FE8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D6FEC
  c->r[4]=c->r[30]+0x0000000Cu; // 800D6FF0
  c->lr=0x800D6FF8u; f_8003AB48(c); // 800D6FF4
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D6FF8
  W32(c->r[31]+0x00000018u,c->r[0]); // 800D6FFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7000
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7004
  c->lr=c->r[0]; // 800D7008
  c->r[1]=c->r[1]+0x00000010u; // 800D700C
  return; // 800D7010
}

// fn_800D7014
void f_800D7014(Ctx* __restrict c) {
  trace_call(0x800D7014u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7014
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7018
  c->ctr=c->r[12]; // 800D701C
  if (true) { dispatch(c,c->ctr); return; } // 800D7020
}

// fn_800D7024
void f_800D7024(Ctx* __restrict c) {
  trace_call(0x800D7024u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7024
  c->r[0]=c->lr; // 800D7028
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D702C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7030
  c->r[29]=c->r[3]|c->r[3]; // 800D7034
  c->r[30]=c->r[4]|c->r[4]; // 800D7038
  c->r[31]=c->r[5]|c->r[5]; // 800D703C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D7040
  cmps(c,0,(int32_t)c->r[0],7); // 800D7044
  if (!crb(c,0)) { goto L_800D7058; } // 800D7048
  c->r[4]=c->r[31]|c->r[31]; // 800D704C
  c->r[3]=c->r[3]+0x0000000Cu; // 800D7050
  c->lr=0x800D7058u; f_8003A994(c); // 800D7054
L_800D7058:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D7058
  c->r[3]=c->r[29]|c->r[29]; // 800D705C
  c->r[4]=c->r[30]|c->r[30]; // 800D7060
  c->r[5]=c->r[31]|c->r[31]; // 800D7064
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7068
  c->ctr=c->r[12]; // 800D706C
  if (true) { c->lr=0x800D7074u; dispatch(c,c->ctr); } // 800D7070
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7074
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7078
  c->lr=c->r[0]; // 800D707C
  c->r[1]=c->r[1]+0x00000020u; // 800D7080
  return; // 800D7084
}

// fn_800D7088
void f_800D7088(Ctx* __restrict c) {
  trace_call(0x800D7088u);
  c->r[3]=0u+0x80410000u; // 800D7088
  c->r[3]=c->r[3]+0xFFFFD5ECu; // 800D708C
  return; // 800D7090
}

// fn_800D7094
void f_800D7094(Ctx* __restrict c) {
  trace_call(0x800D7094u);
  c->r[3]=0u+0x0000001Cu; // 800D7094
  return; // 800D7098
}

// fn_800D709C
void f_800D709C(Ctx* __restrict c) {
  trace_call(0x800D709Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D709C
  c->r[0]=c->lr; // 800D70A0
  c->r[3]=0u+0x0000001Cu; // 800D70A4
  c->r[4]=c->r[13]+0xFFFFB507u; // 800D70A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D70AC
  c->r[5]=0u+0x00000000u; // 800D70B0
  c->r[6]=0u+0x00001001u; // 800D70B4
  c->lr=0x800D70BCu; f_80244D20(c); // 800D70B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D70BC
  if (crb(c,2)) { goto L_800D70C8; } // 800D70C0
  c->lr=0x800D70C8u; f_800D6F48(c); // 800D70C4
L_800D70C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D70C8
  c->lr=c->r[0]; // 800D70CC
  c->r[1]=c->r[1]+0x00000010u; // 800D70D0
  return; // 800D70D4
}

// fn_800D70D8
void f_800D70D8(Ctx* __restrict c) {
  trace_call(0x800D70D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D70D8
  c->r[0]=c->lr; // 800D70DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D70E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D70E4
  c->r[31]=c->r[3]|c->r[3]; // 800D70E8
  c->lr=0x800D70F0u; f_800D7120(c); // 800D70EC
  c->r[4]=0u+0x80410000u; // 800D70F0
  c->r[3]=0u+0xD7340000u; // 800D70F4
  c->r[0]=c->r[3]+0x00000BFAu; // 800D70F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D70FC
  c->r[4]=c->r[4]+0x00007FD4u; // 800D7100
  c->r[3]=c->r[31]|c->r[31]; // 800D7104
  W32(c->r[31]+0x00000008u,c->r[4]); // 800D7108
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D710C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7110
  c->lr=c->r[0]; // 800D7114
  c->r[1]=c->r[1]+0x00000010u; // 800D7118
  return; // 800D711C
}

// fn_800D7120
void f_800D7120(Ctx* __restrict c) {
  trace_call(0x800D7120u);
  c->r[4]=0u+0x80420000u; // 800D7120
  c->r[0]=0u+0x00000000u; // 800D7124
  c->r[4]=c->r[4]+0x00001C4Cu; // 800D7128
  c->r[5]=0u+0xFFFFFFFFu; // 800D712C
  W32(c->r[3]+0x00000004u,c->r[5]); // 800D7130
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D7134
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D7138
  W32(c->r[3]+0x00000024u,c->r[0]); // 800D713C
  W32(c->r[3]+0x0000002Cu,c->r[3]); // 800D7140
  W32(c->r[3]+0x00000028u,c->r[3]); // 800D7144
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D7148
  return; // 800D714C
}

// fn_800D7150
void f_800D7150(Ctx* __restrict c) {
  trace_call(0x800D7150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7150
  c->r[0]=c->lr; // 800D7154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7158
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D715C
  c->r[30]=c->r[3]|c->r[3]; // 800D7160
  c->r[31]=c->r[4]|c->r[4]; // 800D7164
  c->lr=0x800D716Cu; f_8030D728(c); // 800D7168
  c->r[3]=c->r[31]|c->r[31]; // 800D716C
  c->lr=0x800D7174u; f_8030BD1C(c); // 800D7170
  W8(c->r[30]+0x00000030u,c->r[3]); // 800D7174
  c->r[3]=c->r[31]|c->r[31]; // 800D7178
  c->lr=0x800D7180u; f_8030BD1C(c); // 800D717C
  W8(c->r[30]+0x00000031u,c->r[3]); // 800D7180
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7184
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7188
  c->lr=c->r[0]; // 800D718C
  c->r[1]=c->r[1]+0x00000010u; // 800D7190
  return; // 800D7194
}

// fn_800D7198
void f_800D7198(Ctx* __restrict c) {
  trace_call(0x800D7198u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D7198
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D719C
  c->r[5]=R8(c->r[3]+0x00000030u); // 800D71A0
  c->r[0]=R8(c->r[3]+0x00000031u); // 800D71A4
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D71A8
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D71AC
  W8(c->r[4]+0x00000030u,c->r[5]); // 800D71B0
  W8(c->r[4]+0x00000031u,c->r[0]); // 800D71B4
  return; // 800D71B8
}

// fn_800D71BC
void f_800D71BC(Ctx* __restrict c) {
  trace_call(0x800D71BCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D71BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D71C0
  c->ctr=c->r[12]; // 800D71C4
  if (true) { dispatch(c,c->ctr); return; } // 800D71C8
}

// fn_800D71CC
void f_800D71CC(Ctx* __restrict c) {
  trace_call(0x800D71CCu);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D71CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D71D0
  c->ctr=c->r[12]; // 800D71D4
  if (true) { dispatch(c,c->ctr); return; } // 800D71D8
}

// fn_800D71DC
void f_800D71DC(Ctx* __restrict c) {
  trace_call(0x800D71DCu);
  c->r[3]=0u+0x80410000u; // 800D71DC
  c->r[3]=c->r[3]+0xFFFFD5FBu; // 800D71E0
  return; // 800D71E4
}

// fn_800D71E8
void f_800D71E8(Ctx* __restrict c) {
  trace_call(0x800D71E8u);
  c->r[3]=0u+0x00000034u; // 800D71E8
  return; // 800D71EC
}

// fn_800D71F0
void f_800D71F0(Ctx* __restrict c) {
  trace_call(0x800D71F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D71F0
  c->r[0]=c->lr; // 800D71F4
  c->r[3]=0u+0x00000034u; // 800D71F8
  c->r[4]=c->r[13]+0xFFFFB50Cu; // 800D71FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7200
  c->r[5]=0u+0x00000000u; // 800D7204
  c->r[6]=0u+0x00001001u; // 800D7208
  c->lr=0x800D7210u; f_80244D20(c); // 800D720C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7210
  if (crb(c,2)) { goto L_800D721C; } // 800D7214
  c->lr=0x800D721Cu; f_800D70D8(c); // 800D7218
L_800D721C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D721C
  c->lr=c->r[0]; // 800D7220
  c->r[1]=c->r[1]+0x00000010u; // 800D7224
  return; // 800D7228
}

// fn_800D722C
void f_800D722C(Ctx* __restrict c) {
  trace_call(0x800D722Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D722C
  c->r[0]=c->lr; // 800D7230
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7238
  c->r[31]=c->r[3]|c->r[3]; // 800D723C
  c->lr=0x800D7244u; f_800D7120(c); // 800D7240
  c->r[4]=0u+0x80410000u; // 800D7244
  c->r[3]=0u+0x39060000u; // 800D7248
  c->r[0]=c->r[3]+0xFFFFFCD6u; // 800D724C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7250
  c->r[4]=c->r[4]+0x00007FA0u; // 800D7254
  c->r[3]=c->r[31]|c->r[31]; // 800D7258
  W32(c->r[31]+0x00000008u,c->r[4]); // 800D725C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7260
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7264
  c->lr=c->r[0]; // 800D7268
  c->r[1]=c->r[1]+0x00000010u; // 800D726C
  return; // 800D7270
}

// fn_800D7274
void f_800D7274(Ctx* __restrict c) {
  trace_call(0x800D7274u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7274
  c->r[0]=c->lr; // 800D7278
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D727C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7280
  c->r[30]=c->r[3]|c->r[3]; // 800D7284
  c->r[31]=c->r[4]|c->r[4]; // 800D7288
  c->lr=0x800D7290u; f_8030D728(c); // 800D728C
  c->r[3]=c->r[31]|c->r[31]; // 800D7290
  c->lr=0x800D7298u; f_8030BD1C(c); // 800D7294
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D7298
  c->r[3]=c->r[31]|c->r[31]; // 800D729C
  c->r[4]=0u+0x00000000u; // 800D72A0
  c->lr=0x800D72A8u; f_8030BE30(c); // 800D72A4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D72A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D72AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D72B0
  c->lr=c->r[0]; // 800D72B4
  c->r[1]=c->r[1]+0x00000010u; // 800D72B8
  return; // 800D72BC
}

// fn_800D72C0
void f_800D72C0(Ctx* __restrict c) {
  trace_call(0x800D72C0u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D72C0
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D72C4
  c->r[5]=R32(c->r[3]+0x00000030u); // 800D72C8
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D72CC
  W32(c->r[4]+0x00000000u,c->r[7]); // 800D72D0
  W32(c->r[4]+0x00000004u,c->r[6]); // 800D72D4
  W32(c->r[4]+0x00000030u,c->r[5]); // 800D72D8
  W32(c->r[4]+0x00000034u,c->r[0]); // 800D72DC
  return; // 800D72E0
}

// fn_800D72E4
void f_800D72E4(Ctx* __restrict c) {
  trace_call(0x800D72E4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D72E4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D72E8
  c->ctr=c->r[12]; // 800D72EC
  if (true) { dispatch(c,c->ctr); return; } // 800D72F0
}

// fn_800D72F4
void f_800D72F4(Ctx* __restrict c) {
  trace_call(0x800D72F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D72F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D72F8
  c->ctr=c->r[12]; // 800D72FC
  if (true) { dispatch(c,c->ctr); return; } // 800D7300
}

// fn_800D7304
void f_800D7304(Ctx* __restrict c) {
  trace_call(0x800D7304u);
  c->r[3]=0u+0x80410000u; // 800D7304
  c->r[3]=c->r[3]+0xFFFFD608u; // 800D7308
  return; // 800D730C
}

// fn_800D7310
void f_800D7310(Ctx* __restrict c) {
  trace_call(0x800D7310u);
  c->r[3]=0u+0x00000038u; // 800D7310
  return; // 800D7314
}

// fn_800D7318
void f_800D7318(Ctx* __restrict c) {
  trace_call(0x800D7318u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7318
  c->r[0]=c->lr; // 800D731C
  c->r[3]=0u+0x00000038u; // 800D7320
  c->r[4]=c->r[13]+0xFFFFB511u; // 800D7324
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7328
  c->r[5]=0u+0x00000000u; // 800D732C
  c->r[6]=0u+0x00001001u; // 800D7330
  c->lr=0x800D7338u; f_80244D20(c); // 800D7334
  cmps(c,0,(int32_t)c->r[3],0); // 800D7338
  if (crb(c,2)) { goto L_800D7344; } // 800D733C
  c->lr=0x800D7344u; f_800D722C(c); // 800D7340
L_800D7344:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7344
  c->lr=c->r[0]; // 800D7348
  c->r[1]=c->r[1]+0x00000010u; // 800D734C
  return; // 800D7350
}

// fn_800D7354
void f_800D7354(Ctx* __restrict c) {
  trace_call(0x800D7354u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7354
  c->r[0]=c->lr; // 800D7358
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D735C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7360
  c->r[31]=c->r[3]|c->r[3]; // 800D7364
  c->lr=0x800D736Cu; f_800D7120(c); // 800D7368
  c->r[4]=0u+0x80410000u; // 800D736C
  c->r[3]=0u+0xDC6E0000u; // 800D7370
  c->r[0]=c->r[3]+0xFFFF9AB7u; // 800D7374
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7378
  c->r[4]=c->r[4]+0x00007F6Cu; // 800D737C
  c->r[3]=c->r[31]|c->r[31]; // 800D7380
  W32(c->r[31]+0x00000008u,c->r[4]); // 800D7384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7388
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D738C
  c->lr=c->r[0]; // 800D7390
  c->r[1]=c->r[1]+0x00000010u; // 800D7394
  return; // 800D7398
}

// fn_800D739C
void f_800D739C(Ctx* __restrict c) {
  trace_call(0x800D739Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D739C
  c->r[0]=c->lr; // 800D73A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D73A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D73A8
  c->r[30]=c->r[3]|c->r[3]; // 800D73AC
  c->r[31]=c->r[4]|c->r[4]; // 800D73B0
  c->lr=0x800D73B8u; f_8030D728(c); // 800D73B4
  c->r[3]=c->r[31]|c->r[31]; // 800D73B8
  c->lr=0x800D73C0u; f_8030C0A0(c); // 800D73BC
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 800D73C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D73C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D73C8
  c->lr=c->r[0]; // 800D73CC
  c->r[1]=c->r[1]+0x00000010u; // 800D73D0
  return; // 800D73D4
}

// fn_800D73D8
void f_800D73D8(Ctx* __restrict c) {
  trace_call(0x800D73D8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D73D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D73DC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D73E0
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D73E4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D73E8
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 800D73EC
  return; // 800D73F0
}

// fn_800D73F4
void f_800D73F4(Ctx* __restrict c) {
  trace_call(0x800D73F4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D73F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D73F8
  c->ctr=c->r[12]; // 800D73FC
  if (true) { dispatch(c,c->ctr); return; } // 800D7400
}

// fn_800D7404
void f_800D7404(Ctx* __restrict c) {
  trace_call(0x800D7404u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7404
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7408
  c->ctr=c->r[12]; // 800D740C
  if (true) { dispatch(c,c->ctr); return; } // 800D7410
}

// fn_800D7414
void f_800D7414(Ctx* __restrict c) {
  trace_call(0x800D7414u);
  c->r[3]=0u+0x80410000u; // 800D7414
  c->r[3]=c->r[3]+0xFFFFD619u; // 800D7418
  return; // 800D741C
}

// fn_800D7420
void f_800D7420(Ctx* __restrict c) {
  trace_call(0x800D7420u);
  c->r[3]=0u+0x00000034u; // 800D7420
  return; // 800D7424
}

// fn_800D7428
void f_800D7428(Ctx* __restrict c) {
  trace_call(0x800D7428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7428
  c->r[0]=c->lr; // 800D742C
  c->r[3]=0u+0x00000034u; // 800D7430
  c->r[4]=c->r[13]+0xFFFFB516u; // 800D7434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7438
  c->r[5]=0u+0x00000000u; // 800D743C
  c->r[6]=0u+0x00001001u; // 800D7440
  c->lr=0x800D7448u; f_80244D20(c); // 800D7444
  cmps(c,0,(int32_t)c->r[3],0); // 800D7448
  if (crb(c,2)) { goto L_800D7454; } // 800D744C
  c->lr=0x800D7454u; f_800D7354(c); // 800D7450
L_800D7454:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7454
  c->lr=c->r[0]; // 800D7458
  c->r[1]=c->r[1]+0x00000010u; // 800D745C
  return; // 800D7460
}

// fn_800D7464
void f_800D7464(Ctx* __restrict c) {
  trace_call(0x800D7464u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7464
  c->r[0]=c->lr; // 800D7468
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D746C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7470
  c->r[31]=c->r[3]|c->r[3]; // 800D7474
  c->lr=0x800D747Cu; f_800D7120(c); // 800D7478
  c->r[5]=0u+0x80410000u; // 800D747C
  c->r[3]=0u+0x59720000u; // 800D7480
  c->r[0]=c->r[3]+0x00004EB8u; // 800D7484
  c->r[4]=0u+0x00000000u; // 800D7488
  c->r[5]=c->r[5]+0x00007F38u; // 800D748C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D7490
  c->r[3]=c->r[31]|c->r[31]; // 800D7494
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D7498
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D749C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D74A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D74A4
  c->lr=c->r[0]; // 800D74A8
  c->r[1]=c->r[1]+0x00000010u; // 800D74AC
  return; // 800D74B0
}

// fn_800D74B4
void f_800D74B4(Ctx* __restrict c) {
  trace_call(0x800D74B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D74B4
  c->r[0]=c->lr; // 800D74B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D74BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D74C0
  c->r[30]=c->r[3]|c->r[3]; // 800D74C4
  c->r[31]=c->r[4]|c->r[4]; // 800D74C8
  c->lr=0x800D74D0u; f_8030D728(c); // 800D74CC
  c->r[3]=c->r[31]|c->r[31]; // 800D74D0
  c->r[4]=0u+0x00000000u; // 800D74D4
  c->lr=0x800D74DCu; f_8030BE30(c); // 800D74D8
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D74DC
  c->r[3]=c->r[31]|c->r[31]; // 800D74E0
  c->lr=0x800D74E8u; f_8030BD1C(c); // 800D74E4
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D74E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D74EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D74F0
  c->lr=c->r[0]; // 800D74F4
  c->r[1]=c->r[1]+0x00000010u; // 800D74F8
  return; // 800D74FC
}

// fn_800D7500
void f_800D7500(Ctx* __restrict c) {
  trace_call(0x800D7500u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D7500
  c->r[5]=c->r[3]|c->r[3]; // 800D7504
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D7508
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D750C
  c->r[3]=c->r[4]+0x00000030u; // 800D7510
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D7514
  c->r[4]=c->r[5]+0x00000030u; // 800D7518
  f_8003AB48(c); return; // 800D751C
}

// fn_800D7520
void f_800D7520(Ctx* __restrict c) {
  trace_call(0x800D7520u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7520
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7524
  c->ctr=c->r[12]; // 800D7528
  if (true) { dispatch(c,c->ctr); return; } // 800D752C
}

// fn_800D7530
void f_800D7530(Ctx* __restrict c) {
  trace_call(0x800D7530u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7530
  c->r[0]=c->lr; // 800D7534
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7538
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D753C
  c->r[29]=c->r[3]|c->r[3]; // 800D7540
  c->r[30]=c->r[4]|c->r[4]; // 800D7544
  c->r[31]=c->r[5]|c->r[5]; // 800D7548
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D754C
  cmps(c,0,(int32_t)c->r[0],7); // 800D7550
  if (!crb(c,0)) { goto L_800D7564; } // 800D7554
  c->r[4]=c->r[31]|c->r[31]; // 800D7558
  c->r[3]=c->r[3]+0x00000030u; // 800D755C
  c->lr=0x800D7564u; f_8003A994(c); // 800D7560
L_800D7564:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D7564
  c->r[3]=c->r[29]|c->r[29]; // 800D7568
  c->r[4]=c->r[30]|c->r[30]; // 800D756C
  c->r[5]=c->r[31]|c->r[31]; // 800D7570
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7574
  c->ctr=c->r[12]; // 800D7578
  if (true) { c->lr=0x800D7580u; dispatch(c,c->ctr); } // 800D757C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7580
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7584
  c->lr=c->r[0]; // 800D7588
  c->r[1]=c->r[1]+0x00000020u; // 800D758C
  return; // 800D7590
}

// fn_800D7594
void f_800D7594(Ctx* __restrict c) {
  trace_call(0x800D7594u);
  c->r[3]=0u+0x80410000u; // 800D7594
  c->r[3]=c->r[3]+0xFFFFD632u; // 800D7598
  return; // 800D759C
}

// fn_800D75A0
void f_800D75A0(Ctx* __restrict c) {
  trace_call(0x800D75A0u);
  c->r[3]=0u+0x0000003Cu; // 800D75A0
  return; // 800D75A4
}

// fn_800D75A8
void f_800D75A8(Ctx* __restrict c) {
  trace_call(0x800D75A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D75A8
  c->r[0]=c->lr; // 800D75AC
  c->r[3]=0u+0x0000003Cu; // 800D75B0
  c->r[4]=c->r[13]+0xFFFFB51Bu; // 800D75B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D75B8
  c->r[5]=0u+0x00000000u; // 800D75BC
  c->r[6]=0u+0x00001001u; // 800D75C0
  c->lr=0x800D75C8u; f_80244D20(c); // 800D75C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D75C8
  if (crb(c,2)) { goto L_800D75D4; } // 800D75CC
  c->lr=0x800D75D4u; f_800D7464(c); // 800D75D0
L_800D75D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D75D4
  c->lr=c->r[0]; // 800D75D8
  c->r[1]=c->r[1]+0x00000010u; // 800D75DC
  return; // 800D75E0
}

// fn_800D75E4
void f_800D75E4(Ctx* __restrict c) {
  trace_call(0x800D75E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D75E4
  c->r[0]=c->lr; // 800D75E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D75EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D75F0
  c->r[31]=c->r[3]|c->r[3]; // 800D75F4
  c->lr=0x800D75FCu; f_800D7120(c); // 800D75F8
  c->r[5]=0u+0x80410000u; // 800D75FC
  c->r[3]=0u+0x7EEB0000u; // 800D7600
  c->r[4]=0u+0x00000000u; // 800D7604
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D7608
  c->r[0]=c->r[3]+0x0000309Cu; // 800D760C
  c->r[5]=c->r[5]+0x00007F04u; // 800D7610
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D7614
  c->r[3]=c->r[31]|c->r[31]; // 800D7618
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D761C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7624
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7628
  c->lr=c->r[0]; // 800D762C
  c->r[1]=c->r[1]+0x00000010u; // 800D7630
  return; // 800D7634
}

// fn_800D7638
void f_800D7638(Ctx* __restrict c) {
  trace_call(0x800D7638u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7638
  c->r[0]=c->lr; // 800D763C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7640
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7644
  c->r[30]=c->r[3]|c->r[3]; // 800D7648
  c->r[31]=c->r[4]|c->r[4]; // 800D764C
  c->lr=0x800D7654u; f_8030D728(c); // 800D7650
  c->r[3]=c->r[31]|c->r[31]; // 800D7654
  c->r[4]=0u+0x00000000u; // 800D7658
  c->lr=0x800D7660u; f_8030BE30(c); // 800D765C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D7660
  c->r[3]=c->r[31]|c->r[31]; // 800D7664
  c->lr=0x800D766Cu; f_8030BD1C(c); // 800D7668
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D766C
  c->r[3]=c->r[31]|c->r[31]; // 800D7670
  c->r[4]=0u+0x00000000u; // 800D7674
  c->lr=0x800D767Cu; f_8030BE30(c); // 800D7678
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D767C
  c->r[3]=c->r[31]|c->r[31]; // 800D7680
  c->lr=0x800D7688u; f_8030BD1C(c); // 800D7684
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D7688
  c->r[3]=c->r[31]|c->r[31]; // 800D768C
  c->lr=0x800D7694u; f_8030BD1C(c); // 800D7690
  W8(c->r[30]+0x00000048u,c->r[3]); // 800D7694
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7698
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D769C
  c->lr=c->r[0]; // 800D76A0
  c->r[1]=c->r[1]+0x00000010u; // 800D76A4
  return; // 800D76A8
}

// fn_800D76AC
void f_800D76AC(Ctx* __restrict c) {
  trace_call(0x800D76ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D76AC
  c->r[0]=c->lr; // 800D76B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D76B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D76B8
  c->r[30]=c->r[3]|c->r[3]; // 800D76BC
  c->r[31]=c->r[4]|c->r[4]; // 800D76C0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D76C4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D76C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D76CC
  c->r[3]=c->r[4]+0x00000030u; // 800D76D0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D76D4
  c->r[4]=c->r[30]+0x00000030u; // 800D76D8
  c->lr=0x800D76E0u; f_8003AB48(c); // 800D76DC
  c->r[3]=c->r[31]+0x0000003Cu; // 800D76E0
  c->r[4]=c->r[30]+0x0000003Cu; // 800D76E4
  c->lr=0x800D76ECu; f_8003AB48(c); // 800D76E8
  c->r[0]=R8(c->r[30]+0x00000048u); // 800D76EC
  W8(c->r[31]+0x00000048u,c->r[0]); // 800D76F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D76F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D76F8
  c->lr=c->r[0]; // 800D76FC
  c->r[1]=c->r[1]+0x00000010u; // 800D7700
  return; // 800D7704
}

// fn_800D7708
void f_800D7708(Ctx* __restrict c) {
  trace_call(0x800D7708u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7708
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D770C
  c->ctr=c->r[12]; // 800D7710
  if (true) { dispatch(c,c->ctr); return; } // 800D7714
}

// fn_800D7718
void f_800D7718(Ctx* __restrict c) {
  trace_call(0x800D7718u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7718
  c->r[0]=c->lr; // 800D771C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7720
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7724
  c->r[29]=c->r[3]|c->r[3]; // 800D7728
  c->r[30]=c->r[4]|c->r[4]; // 800D772C
  c->r[31]=c->r[5]|c->r[5]; // 800D7730
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D7734
  cmps(c,0,(int32_t)c->r[0],7); // 800D7738
  if (!crb(c,0)) { goto L_800D774C; } // 800D773C
  c->r[4]=c->r[31]|c->r[31]; // 800D7740
  c->r[3]=c->r[3]+0x00000030u; // 800D7744
  c->lr=0x800D774Cu; f_8003A994(c); // 800D7748
L_800D774C:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D774C
  cmps(c,0,(int32_t)c->r[0],7); // 800D7750
  if (!crb(c,0)) { goto L_800D7764; } // 800D7754
  c->r[4]=c->r[31]|c->r[31]; // 800D7758
  c->r[3]=c->r[29]+0x0000003Cu; // 800D775C
  c->lr=0x800D7764u; f_8003A994(c); // 800D7760
L_800D7764:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D7764
  c->r[3]=c->r[29]|c->r[29]; // 800D7768
  c->r[4]=c->r[30]|c->r[30]; // 800D776C
  c->r[5]=c->r[31]|c->r[31]; // 800D7770
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7774
  c->ctr=c->r[12]; // 800D7778
  if (true) { c->lr=0x800D7780u; dispatch(c,c->ctr); } // 800D777C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7780
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7784
  c->lr=c->r[0]; // 800D7788
  c->r[1]=c->r[1]+0x00000020u; // 800D778C
  return; // 800D7790
}

// fn_800D7794
void f_800D7794(Ctx* __restrict c) {
  trace_call(0x800D7794u);
  c->r[3]=0u+0x80410000u; // 800D7794
  c->r[3]=c->r[3]+0xFFFFD63Eu; // 800D7798
  return; // 800D779C
}

// fn_800D77A0
void f_800D77A0(Ctx* __restrict c) {
  trace_call(0x800D77A0u);
  c->r[3]=0u+0x0000004Cu; // 800D77A0
  return; // 800D77A4
}

// fn_800D77A8
void f_800D77A8(Ctx* __restrict c) {
  trace_call(0x800D77A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D77A8
  c->r[0]=c->lr; // 800D77AC
  c->r[3]=0u+0x0000004Cu; // 800D77B0
  c->r[4]=c->r[13]+0xFFFFB520u; // 800D77B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D77B8
  c->r[5]=0u+0x00000000u; // 800D77BC
  c->r[6]=0u+0x00001001u; // 800D77C0
  c->lr=0x800D77C8u; f_80244D20(c); // 800D77C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D77C8
  if (crb(c,2)) { goto L_800D77D4; } // 800D77CC
  c->lr=0x800D77D4u; f_800D75E4(c); // 800D77D0
L_800D77D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D77D4
  c->lr=c->r[0]; // 800D77D8
  c->r[1]=c->r[1]+0x00000010u; // 800D77DC
  return; // 800D77E0
}

// fn_800D77E4
void f_800D77E4(Ctx* __restrict c) {
  trace_call(0x800D77E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D77E4
  c->r[0]=c->lr; // 800D77E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D77EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D77F0
  c->r[31]=c->r[3]|c->r[3]; // 800D77F4
  c->lr=0x800D77FCu; f_800D7120(c); // 800D77F8
  c->r[5]=0u+0x80410000u; // 800D77FC
  c->r[3]=0u+0x10620000u; // 800D7800
  c->r[4]=0u+0x00000000u; // 800D7804
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D7808
  c->r[0]=c->r[3]+0x0000375Bu; // 800D780C
  c->r[5]=c->r[5]+0x00007ED0u; // 800D7810
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D7814
  c->r[3]=c->r[31]|c->r[31]; // 800D7818
  W32(c->r[31]+0x00000044u,c->r[4]); // 800D781C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7824
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7828
  c->lr=c->r[0]; // 800D782C
  c->r[1]=c->r[1]+0x00000010u; // 800D7830
  return; // 800D7834
}

// fn_800D7838
void f_800D7838(Ctx* __restrict c) {
  trace_call(0x800D7838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7838
  c->r[0]=c->lr; // 800D783C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7840
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7844
  c->r[30]=c->r[3]|c->r[3]; // 800D7848
  c->r[31]=c->r[4]|c->r[4]; // 800D784C
  c->lr=0x800D7854u; f_8030D728(c); // 800D7850
  c->r[3]=c->r[31]|c->r[31]; // 800D7854
  c->r[4]=0u+0x00000000u; // 800D7858
  c->lr=0x800D7860u; f_8030BE30(c); // 800D785C
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D7860
  c->r[3]=c->r[31]|c->r[31]; // 800D7864
  c->lr=0x800D786Cu; f_8030BD1C(c); // 800D7868
  W32(c->r[30]+0x00000034u,c->r[3]); // 800D786C
  c->r[3]=c->r[31]|c->r[31]; // 800D7870
  c->r[4]=0u+0x00000000u; // 800D7874
  c->lr=0x800D787Cu; f_8030BE30(c); // 800D7878
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800D787C
  c->r[3]=c->r[31]|c->r[31]; // 800D7880
  c->lr=0x800D7888u; f_8030BD1C(c); // 800D7884
  W32(c->r[30]+0x00000040u,c->r[3]); // 800D7888
  c->r[3]=c->r[31]|c->r[31]; // 800D788C
  c->r[4]=0u+0x00000000u; // 800D7890
  c->lr=0x800D7898u; f_8030BE30(c); // 800D7894
  W32(c->r[30]+0x00000048u,c->r[3]); // 800D7898
  c->r[3]=c->r[31]|c->r[31]; // 800D789C
  c->r[4]=0u+0x00000000u; // 800D78A0
  c->lr=0x800D78A8u; f_8030BE30(c); // 800D78A4
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 800D78A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D78AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D78B0
  c->lr=c->r[0]; // 800D78B4
  c->r[1]=c->r[1]+0x00000010u; // 800D78B8
  return; // 800D78BC
}

// fn_800D78C0
void f_800D78C0(Ctx* __restrict c) {
  trace_call(0x800D78C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D78C0
  c->r[0]=c->lr; // 800D78C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D78C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D78CC
  c->r[30]=c->r[3]|c->r[3]; // 800D78D0
  c->r[31]=c->r[4]|c->r[4]; // 800D78D4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D78D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D78DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D78E0
  c->r[3]=c->r[4]+0x00000030u; // 800D78E4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D78E8
  c->r[4]=c->r[30]+0x00000030u; // 800D78EC
  c->lr=0x800D78F4u; f_8003AB48(c); // 800D78F0
  c->r[3]=c->r[31]+0x0000003Cu; // 800D78F4
  c->r[4]=c->r[30]+0x0000003Cu; // 800D78F8
  c->lr=0x800D7900u; f_8003AB48(c); // 800D78FC
  c->r[3]=c->r[31]+0x00000048u; // 800D7900
  c->r[4]=c->r[30]+0x00000048u; // 800D7904
  c->lr=0x800D790Cu; f_8003F6E4(c); // 800D7908
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D790C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7910
  c->lr=c->r[0]; // 800D7914
  c->r[1]=c->r[1]+0x00000010u; // 800D7918
  return; // 800D791C
}

// fn_800D7920
void f_800D7920(Ctx* __restrict c) {
  trace_call(0x800D7920u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7920
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7924
  c->ctr=c->r[12]; // 800D7928
  if (true) { dispatch(c,c->ctr); return; } // 800D792C
}

// fn_800D7930
void f_800D7930(Ctx* __restrict c) {
  trace_call(0x800D7930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7930
  c->r[0]=c->lr; // 800D7934
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7938
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D793C
  c->r[29]=c->r[3]|c->r[3]; // 800D7940
  c->r[30]=c->r[4]|c->r[4]; // 800D7944
  c->r[31]=c->r[5]|c->r[5]; // 800D7948
  c->r[0]=R32(c->r[3]+0x00000034u); // 800D794C
  cmps(c,0,(int32_t)c->r[0],7); // 800D7950
  if (!crb(c,0)) { goto L_800D7964; } // 800D7954
  c->r[4]=c->r[31]|c->r[31]; // 800D7958
  c->r[3]=c->r[3]+0x00000030u; // 800D795C
  c->lr=0x800D7964u; f_8003A994(c); // 800D7960
L_800D7964:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800D7964
  cmps(c,0,(int32_t)c->r[0],7); // 800D7968
  if (!crb(c,0)) { goto L_800D797C; } // 800D796C
  c->r[4]=c->r[31]|c->r[31]; // 800D7970
  c->r[3]=c->r[29]+0x0000003Cu; // 800D7974
  c->lr=0x800D797Cu; f_8003A994(c); // 800D7978
L_800D797C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D797C
  c->r[3]=c->r[29]|c->r[29]; // 800D7980
  c->r[4]=c->r[30]|c->r[30]; // 800D7984
  c->r[5]=c->r[31]|c->r[31]; // 800D7988
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D798C
  c->ctr=c->r[12]; // 800D7990
  if (true) { c->lr=0x800D7998u; dispatch(c,c->ctr); } // 800D7994
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7998
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D799C
  c->lr=c->r[0]; // 800D79A0
  c->r[1]=c->r[1]+0x00000020u; // 800D79A4
  return; // 800D79A8
}

// fn_800D79AC
void f_800D79AC(Ctx* __restrict c) {
  trace_call(0x800D79ACu);
  c->r[3]=0u+0x80410000u; // 800D79AC
  c->r[3]=c->r[3]+0xFFFFD654u; // 800D79B0
  return; // 800D79B4
}

// fn_800D79B8
void f_800D79B8(Ctx* __restrict c) {
  trace_call(0x800D79B8u);
  c->r[3]=0u+0x00000050u; // 800D79B8
  return; // 800D79BC
}

// fn_800D79C0
void f_800D79C0(Ctx* __restrict c) {
  trace_call(0x800D79C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D79C0
  c->r[0]=c->lr; // 800D79C4
  c->r[3]=0u+0x00000050u; // 800D79C8
  c->r[4]=c->r[13]+0xFFFFB525u; // 800D79CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D79D0
  c->r[5]=0u+0x00000000u; // 800D79D4
  c->r[6]=0u+0x00001001u; // 800D79D8
  c->lr=0x800D79E0u; f_80244D20(c); // 800D79DC
  cmps(c,0,(int32_t)c->r[3],0); // 800D79E0
  if (crb(c,2)) { goto L_800D79EC; } // 800D79E4
  c->lr=0x800D79ECu; f_800D77E4(c); // 800D79E8
L_800D79EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D79EC
  c->lr=c->r[0]; // 800D79F0
  c->r[1]=c->r[1]+0x00000010u; // 800D79F4
  return; // 800D79F8
}

// fn_800D79FC
void f_800D79FC(Ctx* __restrict c) {
  trace_call(0x800D79FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D79FC
  c->r[0]=c->lr; // 800D7A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7A04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7A08
  c->r[31]=c->r[3]|c->r[3]; // 800D7A0C
  c->lr=0x800D7A14u; f_800D7120(c); // 800D7A10
  c->r[4]=0u+0x80410000u; // 800D7A14
  c->r[3]=0u+0x87CC0000u; // 800D7A18
  c->r[0]=c->r[3]+0x0000467Du; // 800D7A1C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7A20
  c->r[4]=c->r[4]+0x00007E9Cu; // 800D7A24
  c->r[3]=c->r[31]|c->r[31]; // 800D7A28
  W32(c->r[31]+0x00000008u,c->r[4]); // 800D7A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7A30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7A34
  c->lr=c->r[0]; // 800D7A38
  c->r[1]=c->r[1]+0x00000010u; // 800D7A3C
  return; // 800D7A40
}

// fn_800D7A44
void f_800D7A44(Ctx* __restrict c) {
  trace_call(0x800D7A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7A44
  c->r[0]=c->lr; // 800D7A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7A4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7A50
  c->r[30]=c->r[3]|c->r[3]; // 800D7A54
  c->r[31]=c->r[4]|c->r[4]; // 800D7A58
  c->lr=0x800D7A60u; f_8030D728(c); // 800D7A5C
  c->r[3]=c->r[31]|c->r[31]; // 800D7A60
  c->lr=0x800D7A68u; f_8030BD1C(c); // 800D7A64
  W32(c->r[30]+0x00000030u,c->r[3]); // 800D7A68
  c->r[3]=c->r[31]|c->r[31]; // 800D7A6C
  c->lr=0x800D7A74u; f_8030C0A0(c); // 800D7A70
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800D7A74
  c->r[3]=c->r[31]|c->r[31]; // 800D7A78
  c->lr=0x800D7A80u; f_8030C0A0(c); // 800D7A7C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 800D7A80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7A84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7A88
  c->lr=c->r[0]; // 800D7A8C
  c->r[1]=c->r[1]+0x00000010u; // 800D7A90
  return; // 800D7A94
}

// fn_800D7A98
void f_800D7A98(Ctx* __restrict c) {
  trace_call(0x800D7A98u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800D7A98
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D7A9C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800D7AA0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7AA4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7AA8
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D7AAC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D7AB0
  W32(c->r[4]+0x00000030u,c->r[0]); // 800D7AB4
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[1]);} // 800D7AB8
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 800D7ABC
  return; // 800D7AC0
}

// fn_800D7AC4
void f_800D7AC4(Ctx* __restrict c) {
  trace_call(0x800D7AC4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7AC4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D7AC8
  c->ctr=c->r[12]; // 800D7ACC
  if (true) { dispatch(c,c->ctr); return; } // 800D7AD0
}

// fn_800D7AD4
void f_800D7AD4(Ctx* __restrict c) {
  trace_call(0x800D7AD4u);
  c->r[12]=R32(c->r[3]+0x00000008u); // 800D7AD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800D7AD8
  c->ctr=c->r[12]; // 800D7ADC
  if (true) { dispatch(c,c->ctr); return; } // 800D7AE0
}

// fn_800D7AE4
void f_800D7AE4(Ctx* __restrict c) {
  trace_call(0x800D7AE4u);
  c->r[3]=0u+0x80410000u; // 800D7AE4
  c->r[3]=c->r[3]+0xFFFFD678u; // 800D7AE8
  return; // 800D7AEC
}

// fn_800D7AF0
void f_800D7AF0(Ctx* __restrict c) {
  trace_call(0x800D7AF0u);
  c->r[3]=0u+0x0000003Cu; // 800D7AF0
  return; // 800D7AF4
}

// fn_800D7AF8
void f_800D7AF8(Ctx* __restrict c) {
  trace_call(0x800D7AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7AF8
  c->r[0]=c->lr; // 800D7AFC
  c->r[3]=0u+0x0000003Cu; // 800D7B00
  c->r[4]=c->r[13]+0xFFFFB52Au; // 800D7B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7B08
  c->r[5]=0u+0x00000000u; // 800D7B0C
  c->r[6]=0u+0x00001001u; // 800D7B10
  c->lr=0x800D7B18u; f_80244D20(c); // 800D7B14
  cmps(c,0,(int32_t)c->r[3],0); // 800D7B18
  if (crb(c,2)) { goto L_800D7B24; } // 800D7B1C
  c->lr=0x800D7B24u; f_800D79FC(c); // 800D7B20
L_800D7B24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7B24
  c->lr=c->r[0]; // 800D7B28
  c->r[1]=c->r[1]+0x00000010u; // 800D7B2C
  return; // 800D7B30
}

// fn_800D7B34
void f_800D7B34(Ctx* __restrict c) {
  trace_call(0x800D7B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7B34
  c->r[0]=c->lr; // 800D7B38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7B3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7B40
  c->r[31]=c->r[3]|c->r[3]; // 800D7B44
  c->lr=0x800D7B4Cu; f_800D7120(c); // 800D7B48
  c->r[5]=0u+0x80410000u; // 800D7B4C
  c->r[3]=0u+0xE56B0000u; // 800D7B50
  c->r[0]=c->r[3]+0x00006F6Bu; // 800D7B54
  c->r[4]=0u+0x00000000u; // 800D7B58
  c->r[5]=c->r[5]+0x00007E68u; // 800D7B5C
  W32(c->r[31]+0x00000008u,c->r[5]); // 800D7B60
  c->r[3]=c->r[31]|c->r[31]; // 800D7B64
  W32(c->r[31]+0x00000038u,c->r[4]); // 800D7B68
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7B6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7B70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7B74
  c->lr=c->r[0]; // 800D7B78
  c->r[1]=c->r[1]+0x00000010u; // 800D7B7C
  return; // 800D7B80
}

