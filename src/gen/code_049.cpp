#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// __GXSetViewport
void f_80349ADC(Ctx* __restrict c) {
  trace_call(0x80349ADCu);
  c->r[6]=R32(c->r[2]+0xFFFF9E00u); // 80349ADC
  c->r[3]=0u+0x00050000u; // 80349AE0
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80349AE4
  c->r[4]=0u+0xCC010000u; // 80349AE8
  {uint32_t ea=c->r[6]+0x00000550u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349AEC
  c->r[5]=0u+0x00000010u; // 80349AF0
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80349AF4
  c->r[0]=c->r[3]+0x0000101Au; // 80349AF8
  c->f[1]=-c->f[2]; // 80349AFC
  {uint32_t ea=c->r[6]+0x00000544u; c->f[0]=c->ps1[0]=RF32(ea);} // 80349B00
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[6]); // 80349B04
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 80349B08
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[6]); // 80349B0C
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 80349B10
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[6]); // 80349B14
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 80349B18
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 80349B1C
  c->f[6]=c->ps1[6]=S(c->f[0]+c->f[7]); // 80349B20
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80349B24
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 80349B28
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[2]); // 80349B2C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 80349B30
  {uint32_t ea=c->r[2]+0xFFFF9ECCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80349B34
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 80349B38
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 80349B3C
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[3]); // 80349B40
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 80349B44
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 80349B48
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80349B4C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 80349B50
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[0]); // 80349B54
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 80349B58
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 80349B5C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 80349B60
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 80349B64
  return; // 80349B68
}

// GXSetViewportJitter
void f_80349B6C(Ctx* __restrict c) {
  trace_call(0x80349B6Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 80349B6C
  if (!crb(c,2)) { goto L_80349B7C; } // 80349B70
  {uint32_t ea=c->r[2]+0xFFFF9EC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80349B74
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 80349B78
L_80349B7C:;
  c->r[3]=R32(c->r[2]+0xFFFF9E00u); // 80349B7C
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 80349B80
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 80349B84
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 80349B88
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 80349B8C
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 80349B90
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 80349B94
  c->r[0]=R32(c->r[3]+0x000005FCu); // 80349B98
  c->r[0]=c->r[0]|0x10000000u; // 80349B9C
  W32(c->r[3]+0x000005FCu,c->r[0]); // 80349BA0
  return; // 80349BA4
}

// GXSetViewport
void f_80349BA8(Ctx* __restrict c) {
  trace_call(0x80349BA8u);
  c->r[3]=R32(c->r[2]+0xFFFF9E00u); // 80349BA8
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 80349BAC
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 80349BB0
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 80349BB4
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 80349BB8
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 80349BBC
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 80349BC0
  c->r[0]=R32(c->r[3]+0x000005FCu); // 80349BC4
  c->r[0]=c->r[0]|0x10000000u; // 80349BC8
  W32(c->r[3]+0x000005FCu,c->r[0]); // 80349BCC
  return; // 80349BD0
}

// GXSetScissor
void f_80349BD4(Ctx* __restrict c) {
  trace_call(0x80349BD4u);
  c->r[8]=R32(c->r[2]+0xFFFF9E00u); // 80349BD4
  c->r[4]=c->r[4]+0x00000156u; // 80349BD8
  c->r[9]=c->r[3]+0x00000156u; // 80349BDC
  c->r[7]=0u+0xCC010000u; // 80349BE0
  c->r[0]=R32(c->r[8]+0x00000148u); // 80349BE4
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 80349BE8
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 80349BEC
  c->r[6]=c->r[4]+c->r[6]; // 80349BF0
  W32(c->r[8]+0x00000148u,c->r[0]); // 80349BF4
  c->r[3]=c->r[9]+c->r[5]; // 80349BF8
  c->r[5]=c->r[6]+0xFFFFFFFFu; // 80349BFC
  c->r[4]=0u+0x00000061u; // 80349C00
  c->r[6]=R32(c->r[8]+0x0000014Cu); // 80349C04
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80349C08
  c->r[6]=(rotl(c->r[5],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 80349C0C
  c->r[0]=0u+0x00000000u; // 80349C10
  c->r[6]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 80349C14
  W32(c->r[8]+0x0000014Cu,c->r[6]); // 80349C18
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80349C1C
  c->r[3]=R32(c->r[8]+0x00000148u); // 80349C20
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80349C24
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80349C28
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 80349C2C
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 80349C30
  W16(c->r[8]+0x00000002u,c->r[0]); // 80349C34
  return; // 80349C38
}

// GXSetScissorBoxOffset
void f_80349C3C(Ctx* __restrict c) {
  trace_call(0x80349C3Cu);
  c->r[0]=c->r[3]+0x00000156u; // 80349C3C
  c->r[6]=0u+0x00000000u; // 80349C40
  c->r[6]=(rotl(c->r[0],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 80349C44
  c->r[5]=0u+0xCC010000u; // 80349C48
  c->r[0]=0u+0x00000061u; // 80349C4C
  c->r[3]=c->r[4]+0x00000156u; // 80349C50
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80349C54
  c->r[6]=(rotl(c->r[3],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 80349C58
  c->r[0]=0u+0x00000059u; // 80349C5C
  c->r[3]=R32(c->r[2]+0xFFFF9E00u); // 80349C60
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 80349C64
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 80349C68
  c->r[0]=0u+0x00000000u; // 80349C6C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80349C70
  return; // 80349C74
}

// GXSetClipMode
void f_80349C78(Ctx* __restrict c) {
  trace_call(0x80349C78u);
  c->r[6]=0u+0xCC010000u; // 80349C78
  c->r[0]=0u+0x00000010u; // 80349C7C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349C80
  c->r[5]=0u+0x00001005u; // 80349C84
  c->r[4]=R32(c->r[2]+0xFFFF9E00u); // 80349C88
  c->r[0]=0u+0x00000001u; // 80349C8C
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 80349C90
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349C94
  W16(c->r[4]+0x00000002u,c->r[0]); // 80349C98
  return; // 80349C9C
}

// __GXSetMatrixIndex
void f_80349CA0(Ctx* __restrict c) {
  trace_call(0x80349CA0u);
  cmps(c,0,(int32_t)c->r[3],5); // 80349CA0
  if (!crb(c,0)) { goto L_80349CE4; } // 80349CA4
  c->r[5]=0u+0xCC010000u; // 80349CA8
  c->r[0]=0u+0x00000008u; // 80349CAC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80349CB0
  c->r[0]=0u+0x00000030u; // 80349CB4
  c->r[6]=R32(c->r[2]+0xFFFF9E00u); // 80349CB8
  c->r[3]=0u+0x00000010u; // 80349CBC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80349CC0
  c->r[0]=0u+0x00001018u; // 80349CC4
  c->r[4]=R32(c->r[6]+0x00000080u); // 80349CC8
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80349CCC
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80349CD0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80349CD4
  c->r[0]=R32(c->r[6]+0x00000080u); // 80349CD8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80349CDC
  goto L_80349D1C; // 80349CE0
L_80349CE4:;
  c->r[5]=0u+0xCC010000u; // 80349CE4
  c->r[0]=0u+0x00000008u; // 80349CE8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80349CEC
  c->r[0]=0u+0x00000040u; // 80349CF0
  c->r[6]=R32(c->r[2]+0xFFFF9E00u); // 80349CF4
  c->r[3]=0u+0x00000010u; // 80349CF8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80349CFC
  c->r[0]=0u+0x00001019u; // 80349D00
  c->r[4]=R32(c->r[6]+0x00000084u); // 80349D04
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 80349D08
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80349D0C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80349D10
  c->r[0]=R32(c->r[6]+0x00000084u); // 80349D14
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80349D18
L_80349D1C:;
  c->r[0]=0u+0x00000001u; // 80349D1C
  W16(c->r[6]+0x00000002u,c->r[0]); // 80349D20
  return; // 80349D24
}

// GXSetGPMetric
void f_80349D28(Ctx* __restrict c) {
  trace_call(0x80349D28u);
  c->r[5]=R32(c->r[2]+0xFFFF9E00u); // 80349D28
  c->r[0]=R32(c->r[5]+0x000005ECu); // 80349D2C
  cmps(c,0,(int32_t)c->r[0],34); // 80349D30
  if (crb(c,2)) { goto L_80349D60; } // 80349D34
  if (!crb(c,0)) { goto L_80349DAC; } // 80349D38
  cmps(c,0,(int32_t)c->r[0],11); // 80349D3C
  if (!crb(c,0)) { goto L_80349D50; } // 80349D40
  cmps(c,0,(int32_t)c->r[0],0); // 80349D44
  if (!crb(c,0)) { goto L_80349D60; } // 80349D48
  goto L_80349DAC; // 80349D4C
L_80349D50:;
  cmps(c,0,(int32_t)c->r[0],27); // 80349D50
  if (!crb(c,0)) { goto L_80349D98; } // 80349D54
  goto L_80349D80; // 80349D58
  goto L_80349DAC; // 80349D5C
L_80349D60:;
  c->r[7]=0u+0xCC010000u; // 80349D60
  c->r[0]=0u+0x00000010u; // 80349D64
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 80349D68
  c->r[6]=0u+0x00001006u; // 80349D6C
  c->r[0]=0u+0x00000000u; // 80349D70
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 80349D74
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80349D78
  goto L_80349DAC; // 80349D7C
L_80349D80:;
  c->r[6]=0u+0xCC010000u; // 80349D80
  c->r[0]=0u+0x00000061u; // 80349D84
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349D88
  c->r[0]=0u+0x23000000u; // 80349D8C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349D90
  goto L_80349DAC; // 80349D94
L_80349D98:;
  c->r[6]=0u+0xCC010000u; // 80349D98
  c->r[0]=0u+0x00000061u; // 80349D9C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349DA0
  c->r[0]=0u+0x24000000u; // 80349DA4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349DA8
L_80349DAC:;
  c->r[0]=R32(c->r[5]+0x000005F0u); // 80349DAC
  cmps(c,0,(int32_t)c->r[0],21); // 80349DB0
  if (crb(c,2)) { goto L_80349DE0; } // 80349DB4
  if (!crb(c,0)) { goto L_80349E30; } // 80349DB8
  cmps(c,0,(int32_t)c->r[0],9); // 80349DBC
  if (!crb(c,0)) { goto L_80349DD0; } // 80349DC0
  cmps(c,0,(int32_t)c->r[0],0); // 80349DC4
  if (!crb(c,0)) { goto L_80349DE0; } // 80349DC8
  goto L_80349E30; // 80349DCC
L_80349DD0:;
  cmps(c,0,(int32_t)c->r[0],17); // 80349DD0
  if (!crb(c,0)) { goto L_80349E24; } // 80349DD4
  goto L_80349DF8; // 80349DD8
  goto L_80349E30; // 80349DDC
L_80349DE0:;
  c->r[6]=0u+0xCC010000u; // 80349DE0
  c->r[0]=0u+0x00000061u; // 80349DE4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349DE8
  c->r[0]=0u+0x67000000u; // 80349DEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349DF0
  goto L_80349E30; // 80349DF4
L_80349DF8:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 80349DF8
  c->r[6]=0u+0xCC010000u; // 80349DFC
  c->r[7]=0u+0x00000008u; // 80349E00
  c->r[0]=0u+0x00000020u; // 80349E04
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 80349E08
  W32(c->r[5]+0x000005F4u,c->r[8]); // 80349E0C
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 80349E10
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349E14
  c->r[0]=R32(c->r[5]+0x000005F4u); // 80349E18
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349E1C
  goto L_80349E30; // 80349E20
L_80349E24:;
  c->r[6]=R32(c->r[13]+0xFFFFEE74u); // 80349E24
  c->r[0]=0u+0x00000000u; // 80349E28
  W16(c->r[6]+0x00000006u,c->r[0]); // 80349E2C
L_80349E30:;
  cmpu(c,0,c->r[3],0x00000023u); // 80349E30
  W32(c->r[5]+0x000005ECu,c->r[3]); // 80349E34
  if (crb(c,1)) { goto L_8034A254; } // 80349E38
  c->r[6]=0u+0x80460000u; // 80349E3C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80349E40
  c->r[6]=c->r[6]+0xFFFF98FCu; // 80349E44
  c->r[6]=R32(c->r[6]+c->r[0]); // 80349E48
  c->ctr=c->r[6]; // 80349E4C
  if (true) { switch (c->ctr) { case 0x80349E54u: goto L_80349E54; case 0x80349E74u: goto L_80349E74; case 0x80349E94u: goto L_80349E94; case 0x80349EB4u: goto L_80349EB4; case 0x80349ED4u: goto L_80349ED4; case 0x80349EF4u: goto L_80349EF4; case 0x80349F14u: goto L_80349F14; case 0x80349F34u: goto L_80349F34; case 0x80349F54u: goto L_80349F54; case 0x80349F74u: goto L_80349F74; case 0x80349F94u: goto L_80349F94; case 0x80349FB4u: goto L_80349FB4; case 0x80349FD4u: goto L_80349FD4; case 0x80349FF0u: goto L_80349FF0; case 0x8034A00Cu: goto L_8034A00C; case 0x8034A028u: goto L_8034A028; case 0x8034A044u: goto L_8034A044; case 0x8034A060u: goto L_8034A060; case 0x8034A07Cu: goto L_8034A07C; case 0x8034A098u: goto L_8034A098; case 0x8034A0B4u: goto L_8034A0B4; case 0x8034A0D0u: goto L_8034A0D0; case 0x8034A0ECu: goto L_8034A0EC; case 0x8034A108u: goto L_8034A108; case 0x8034A124u: goto L_8034A124; case 0x8034A140u: goto L_8034A140; case 0x8034A15Cu: goto L_8034A15C; case 0x8034A178u: goto L_8034A178; case 0x8034A194u: goto L_8034A194; case 0x8034A1B0u: goto L_8034A1B0; case 0x8034A1CCu: goto L_8034A1CC; case 0x8034A1E8u: goto L_8034A1E8; case 0x8034A204u: goto L_8034A204; case 0x8034A220u: goto L_8034A220; case 0x8034A23Cu: goto L_8034A23C; case 0x8034A254u: goto L_8034A254; case 0x8034A278u: goto L_8034A278; case 0x8034A294u: goto L_8034A294; case 0x8034A2B0u: goto L_8034A2B0; case 0x8034A2CCu: goto L_8034A2CC; case 0x8034A2E8u: goto L_8034A2E8; case 0x8034A304u: goto L_8034A304; case 0x8034A320u: goto L_8034A320; case 0x8034A33Cu: goto L_8034A33C; case 0x8034A358u: goto L_8034A358; case 0x8034A374u: goto L_8034A374; case 0x8034A390u: goto L_8034A390; case 0x8034A3C0u: goto L_8034A3C0; case 0x8034A3F0u: goto L_8034A3F0; case 0x8034A420u: goto L_8034A420; case 0x8034A450u: goto L_8034A450; case 0x8034A480u: goto L_8034A480; case 0x8034A4B0u: goto L_8034A4B0; case 0x8034A4E0u: goto L_8034A4E0; case 0x8034A50Cu: goto L_8034A50C; case 0x8034A51Cu: goto L_8034A51C; case 0x8034A52Cu: goto L_8034A52C; case 0x8034A53Cu: goto L_8034A53C; case 0x8034A548u: goto L_8034A548; default: break; } dispatch(c,c->ctr); return; } // 80349E50
L_80349E54:;
  c->r[6]=0u+0xCC010000u; // 80349E54
  c->r[0]=0u+0x00000010u; // 80349E58
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349E5C
  c->r[3]=0u+0x00001006u; // 80349E60
  c->r[0]=0u+0x00000273u; // 80349E64
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349E68
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349E6C
  goto L_8034A254; // 80349E70
L_80349E74:;
  c->r[6]=0u+0xCC010000u; // 80349E74
  c->r[0]=0u+0x00000010u; // 80349E78
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349E7C
  c->r[3]=0u+0x00001006u; // 80349E80
  c->r[0]=0u+0x0000014Au; // 80349E84
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349E88
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349E8C
  goto L_8034A254; // 80349E90
L_80349E94:;
  c->r[6]=0u+0xCC010000u; // 80349E94
  c->r[0]=0u+0x00000010u; // 80349E98
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349E9C
  c->r[3]=0u+0x00001006u; // 80349EA0
  c->r[0]=0u+0x0000016Bu; // 80349EA4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349EA8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349EAC
  goto L_8034A254; // 80349EB0
L_80349EB4:;
  c->r[6]=0u+0xCC010000u; // 80349EB4
  c->r[0]=0u+0x00000010u; // 80349EB8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349EBC
  c->r[3]=0u+0x00001006u; // 80349EC0
  c->r[0]=0u+0x00000084u; // 80349EC4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349EC8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349ECC
  goto L_8034A254; // 80349ED0
L_80349ED4:;
  c->r[6]=0u+0xCC010000u; // 80349ED4
  c->r[0]=0u+0x00000010u; // 80349ED8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349EDC
  c->r[3]=0u+0x00001006u; // 80349EE0
  c->r[0]=0u+0x000000C6u; // 80349EE4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349EE8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349EEC
  goto L_8034A254; // 80349EF0
L_80349EF4:;
  c->r[6]=0u+0xCC010000u; // 80349EF4
  c->r[0]=0u+0x00000010u; // 80349EF8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349EFC
  c->r[3]=0u+0x00001006u; // 80349F00
  c->r[0]=0u+0x00000210u; // 80349F04
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349F08
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F0C
  goto L_8034A254; // 80349F10
L_80349F14:;
  c->r[6]=0u+0xCC010000u; // 80349F14
  c->r[0]=0u+0x00000010u; // 80349F18
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F1C
  c->r[3]=0u+0x00001006u; // 80349F20
  c->r[0]=0u+0x00000252u; // 80349F24
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349F28
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F2C
  goto L_8034A254; // 80349F30
L_80349F34:;
  c->r[6]=0u+0xCC010000u; // 80349F34
  c->r[0]=0u+0x00000010u; // 80349F38
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F3C
  c->r[3]=0u+0x00001006u; // 80349F40
  c->r[0]=0u+0x00000231u; // 80349F44
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349F48
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F4C
  goto L_8034A254; // 80349F50
L_80349F54:;
  c->r[6]=0u+0xCC010000u; // 80349F54
  c->r[0]=0u+0x00000010u; // 80349F58
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F5C
  c->r[3]=0u+0x00001006u; // 80349F60
  c->r[0]=0u+0x000001ADu; // 80349F64
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349F68
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F6C
  goto L_8034A254; // 80349F70
L_80349F74:;
  c->r[6]=0u+0xCC010000u; // 80349F74
  c->r[0]=0u+0x00000010u; // 80349F78
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F7C
  c->r[3]=0u+0x00001006u; // 80349F80
  c->r[0]=0u+0x000001CEu; // 80349F84
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349F88
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F8C
  goto L_8034A254; // 80349F90
L_80349F94:;
  c->r[6]=0u+0xCC010000u; // 80349F94
  c->r[0]=0u+0x00000010u; // 80349F98
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349F9C
  c->r[3]=0u+0x00001006u; // 80349FA0
  c->r[0]=0u+0x00000021u; // 80349FA4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349FA8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349FAC
  goto L_8034A254; // 80349FB0
L_80349FB4:;
  c->r[6]=0u+0xCC010000u; // 80349FB4
  c->r[0]=0u+0x00000010u; // 80349FB8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349FBC
  c->r[3]=0u+0x00001006u; // 80349FC0
  c->r[0]=0u+0x00000153u; // 80349FC4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 80349FC8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349FCC
  goto L_8034A254; // 80349FD0
L_80349FD4:;
  c->r[6]=0u+0xCC010000u; // 80349FD4
  c->r[0]=0u+0x00000061u; // 80349FD8
  c->r[3]=0u+0x23010000u; // 80349FDC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349FE0
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 80349FE4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 80349FE8
  goto L_8034A254; // 80349FEC
L_80349FF0:;
  c->r[6]=0u+0xCC010000u; // 80349FF0
  c->r[0]=0u+0x00000061u; // 80349FF4
  c->r[3]=0u+0x23010000u; // 80349FF8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 80349FFC
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 8034A000
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A004
  goto L_8034A254; // 8034A008
L_8034A00C:;
  c->r[6]=0u+0xCC010000u; // 8034A00C
  c->r[0]=0u+0x00000061u; // 8034A010
  c->r[3]=0u+0x23010000u; // 8034A014
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A018
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 8034A01C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A020
  goto L_8034A254; // 8034A024
L_8034A028:;
  c->r[6]=0u+0xCC010000u; // 8034A028
  c->r[0]=0u+0x00000061u; // 8034A02C
  c->r[3]=0u+0x23000000u; // 8034A030
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A034
  c->r[0]=c->r[3]+0x00001E7Fu; // 8034A038
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A03C
  goto L_8034A254; // 8034A040
L_8034A044:;
  c->r[6]=0u+0xCC010000u; // 8034A044
  c->r[0]=0u+0x00000061u; // 8034A048
  c->r[3]=0u+0x23010000u; // 8034A04C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A050
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 8034A054
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A058
  goto L_8034A254; // 8034A05C
L_8034A060:;
  c->r[6]=0u+0xCC010000u; // 8034A060
  c->r[0]=0u+0x00000061u; // 8034A064
  c->r[3]=0u+0x23010000u; // 8034A068
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A06C
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 8034A070
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A074
  goto L_8034A254; // 8034A078
L_8034A07C:;
  c->r[6]=0u+0xCC010000u; // 8034A07C
  c->r[0]=0u+0x00000061u; // 8034A080
  c->r[3]=0u+0x23010000u; // 8034A084
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A088
  c->r[0]=c->r[3]+0xFFFFACBFu; // 8034A08C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A090
  goto L_8034A254; // 8034A094
L_8034A098:;
  c->r[6]=0u+0xCC010000u; // 8034A098
  c->r[0]=0u+0x00000061u; // 8034A09C
  c->r[3]=0u+0x23010000u; // 8034A0A0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A0A4
  c->r[0]=c->r[3]+0xFFFFACFFu; // 8034A0A8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A0AC
  goto L_8034A254; // 8034A0B0
L_8034A0B4:;
  c->r[6]=0u+0xCC010000u; // 8034A0B4
  c->r[0]=0u+0x00000061u; // 8034A0B8
  c->r[3]=0u+0x23010000u; // 8034A0BC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A0C0
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 8034A0C4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A0C8
  goto L_8034A254; // 8034A0CC
L_8034A0D0:;
  c->r[6]=0u+0xCC010000u; // 8034A0D0
  c->r[0]=0u+0x00000061u; // 8034A0D4
  c->r[3]=0u+0x23010000u; // 8034A0D8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A0DC
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 8034A0E0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A0E4
  goto L_8034A254; // 8034A0E8
L_8034A0EC:;
  c->r[6]=0u+0xCC010000u; // 8034A0EC
  c->r[0]=0u+0x00000061u; // 8034A0F0
  c->r[3]=0u+0x23010000u; // 8034A0F4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A0F8
  c->r[0]=c->r[3]+0xFFFFADBFu; // 8034A0FC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A100
  goto L_8034A254; // 8034A104
L_8034A108:;
  c->r[6]=0u+0xCC010000u; // 8034A108
  c->r[0]=0u+0x00000061u; // 8034A10C
  c->r[3]=0u+0x23010000u; // 8034A110
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A114
  c->r[0]=c->r[3]+0xFFFFADFFu; // 8034A118
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A11C
  goto L_8034A254; // 8034A120
L_8034A124:;
  c->r[6]=0u+0xCC010000u; // 8034A124
  c->r[0]=0u+0x00000061u; // 8034A128
  c->r[3]=0u+0x23010000u; // 8034A12C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A130
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 8034A134
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A138
  goto L_8034A254; // 8034A13C
L_8034A140:;
  c->r[6]=0u+0xCC010000u; // 8034A140
  c->r[0]=0u+0x00000061u; // 8034A144
  c->r[3]=0u+0x23010000u; // 8034A148
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A14C
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 8034A150
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A154
  goto L_8034A254; // 8034A158
L_8034A15C:;
  c->r[6]=0u+0xCC010000u; // 8034A15C
  c->r[0]=0u+0x00000061u; // 8034A160
  c->r[3]=0u+0x23010000u; // 8034A164
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A168
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 8034A16C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A170
  goto L_8034A254; // 8034A174
L_8034A178:;
  c->r[6]=0u+0xCC010000u; // 8034A178
  c->r[0]=0u+0x00000061u; // 8034A17C
  c->r[3]=0u+0x23010000u; // 8034A180
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A184
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 8034A188
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A18C
  goto L_8034A254; // 8034A190
L_8034A194:;
  c->r[6]=0u+0xCC010000u; // 8034A194
  c->r[0]=0u+0x00000061u; // 8034A198
  c->r[3]=0u+0x24030000u; // 8034A19C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1A0
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 8034A1A4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1A8
  goto L_8034A254; // 8034A1AC
L_8034A1B0:;
  c->r[6]=0u+0xCC010000u; // 8034A1B0
  c->r[0]=0u+0x00000061u; // 8034A1B4
  c->r[3]=0u+0x24030000u; // 8034A1B8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1BC
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 8034A1C0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1C4
  goto L_8034A254; // 8034A1C8
L_8034A1CC:;
  c->r[6]=0u+0xCC010000u; // 8034A1CC
  c->r[0]=0u+0x00000061u; // 8034A1D0
  c->r[3]=0u+0x24030000u; // 8034A1D4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1D8
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 8034A1DC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1E0
  goto L_8034A254; // 8034A1E4
L_8034A1E8:;
  c->r[6]=0u+0xCC010000u; // 8034A1E8
  c->r[0]=0u+0x00000061u; // 8034A1EC
  c->r[3]=0u+0x24030000u; // 8034A1F0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1F4
  c->r[0]=c->r[3]+0xFFFFC108u; // 8034A1F8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A1FC
  goto L_8034A254; // 8034A200
L_8034A204:;
  c->r[6]=0u+0xCC010000u; // 8034A204
  c->r[0]=0u+0x00000061u; // 8034A208
  c->r[3]=0u+0x24030000u; // 8034A20C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A210
  c->r[0]=c->r[3]+0xFFFFC129u; // 8034A214
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A218
  goto L_8034A254; // 8034A21C
L_8034A220:;
  c->r[6]=0u+0xCC010000u; // 8034A220
  c->r[0]=0u+0x00000061u; // 8034A224
  c->r[3]=0u+0x24030000u; // 8034A228
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A22C
  c->r[0]=c->r[3]+0xFFFFC14Au; // 8034A230
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A234
  goto L_8034A254; // 8034A238
L_8034A23C:;
  c->r[6]=0u+0xCC010000u; // 8034A23C
  c->r[0]=0u+0x00000061u; // 8034A240
  c->r[3]=0u+0x24030000u; // 8034A244
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A248
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 8034A24C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8034A250
L_8034A254:;
  cmpu(c,0,c->r[4],0x00000016u); // 8034A254
  W32(c->r[5]+0x000005F0u,c->r[4]); // 8034A258
  if (crb(c,1)) { goto L_8034A548; } // 8034A25C
  c->r[3]=0u+0x80460000u; // 8034A260
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8034A264
  c->r[3]=c->r[3]+0xFFFF98A0u; // 8034A268
  c->r[3]=R32(c->r[3]+c->r[0]); // 8034A26C
  c->ctr=c->r[3]; // 8034A270
  if (true) { switch (c->ctr) { case 0x80349E54u: goto L_80349E54; case 0x80349E74u: goto L_80349E74; case 0x80349E94u: goto L_80349E94; case 0x80349EB4u: goto L_80349EB4; case 0x80349ED4u: goto L_80349ED4; case 0x80349EF4u: goto L_80349EF4; case 0x80349F14u: goto L_80349F14; case 0x80349F34u: goto L_80349F34; case 0x80349F54u: goto L_80349F54; case 0x80349F74u: goto L_80349F74; case 0x80349F94u: goto L_80349F94; case 0x80349FB4u: goto L_80349FB4; case 0x80349FD4u: goto L_80349FD4; case 0x80349FF0u: goto L_80349FF0; case 0x8034A00Cu: goto L_8034A00C; case 0x8034A028u: goto L_8034A028; case 0x8034A044u: goto L_8034A044; case 0x8034A060u: goto L_8034A060; case 0x8034A07Cu: goto L_8034A07C; case 0x8034A098u: goto L_8034A098; case 0x8034A0B4u: goto L_8034A0B4; case 0x8034A0D0u: goto L_8034A0D0; case 0x8034A0ECu: goto L_8034A0EC; case 0x8034A108u: goto L_8034A108; case 0x8034A124u: goto L_8034A124; case 0x8034A140u: goto L_8034A140; case 0x8034A15Cu: goto L_8034A15C; case 0x8034A178u: goto L_8034A178; case 0x8034A194u: goto L_8034A194; case 0x8034A1B0u: goto L_8034A1B0; case 0x8034A1CCu: goto L_8034A1CC; case 0x8034A1E8u: goto L_8034A1E8; case 0x8034A204u: goto L_8034A204; case 0x8034A220u: goto L_8034A220; case 0x8034A23Cu: goto L_8034A23C; case 0x8034A254u: goto L_8034A254; case 0x8034A278u: goto L_8034A278; case 0x8034A294u: goto L_8034A294; case 0x8034A2B0u: goto L_8034A2B0; case 0x8034A2CCu: goto L_8034A2CC; case 0x8034A2E8u: goto L_8034A2E8; case 0x8034A304u: goto L_8034A304; case 0x8034A320u: goto L_8034A320; case 0x8034A33Cu: goto L_8034A33C; case 0x8034A358u: goto L_8034A358; case 0x8034A374u: goto L_8034A374; case 0x8034A390u: goto L_8034A390; case 0x8034A3C0u: goto L_8034A3C0; case 0x8034A3F0u: goto L_8034A3F0; case 0x8034A420u: goto L_8034A420; case 0x8034A450u: goto L_8034A450; case 0x8034A480u: goto L_8034A480; case 0x8034A4B0u: goto L_8034A4B0; case 0x8034A4E0u: goto L_8034A4E0; case 0x8034A50Cu: goto L_8034A50C; case 0x8034A51Cu: goto L_8034A51C; case 0x8034A52Cu: goto L_8034A52C; case 0x8034A53Cu: goto L_8034A53C; case 0x8034A548u: goto L_8034A548; default: break; } dispatch(c,c->ctr); return; } // 8034A274
L_8034A278:;
  c->r[4]=0u+0xCC010000u; // 8034A278
  c->r[0]=0u+0x00000061u; // 8034A27C
  c->r[3]=0u+0x67000000u; // 8034A280
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A284
  c->r[0]=c->r[3]+0x00000042u; // 8034A288
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A28C
  goto L_8034A548; // 8034A290
L_8034A294:;
  c->r[4]=0u+0xCC010000u; // 8034A294
  c->r[0]=0u+0x00000061u; // 8034A298
  c->r[3]=0u+0x67000000u; // 8034A29C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2A0
  c->r[0]=c->r[3]+0x00000084u; // 8034A2A4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2A8
  goto L_8034A548; // 8034A2AC
L_8034A2B0:;
  c->r[4]=0u+0xCC010000u; // 8034A2B0
  c->r[0]=0u+0x00000061u; // 8034A2B4
  c->r[3]=0u+0x67000000u; // 8034A2B8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2BC
  c->r[0]=c->r[3]+0x00000063u; // 8034A2C0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2C4
  goto L_8034A548; // 8034A2C8
L_8034A2CC:;
  c->r[4]=0u+0xCC010000u; // 8034A2CC
  c->r[0]=0u+0x00000061u; // 8034A2D0
  c->r[3]=0u+0x67000000u; // 8034A2D4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2D8
  c->r[0]=c->r[3]+0x00000129u; // 8034A2DC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2E0
  goto L_8034A548; // 8034A2E4
L_8034A2E8:;
  c->r[4]=0u+0xCC010000u; // 8034A2E8
  c->r[0]=0u+0x00000061u; // 8034A2EC
  c->r[3]=0u+0x67000000u; // 8034A2F0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2F4
  c->r[0]=c->r[3]+0x00000252u; // 8034A2F8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A2FC
  goto L_8034A548; // 8034A300
L_8034A304:;
  c->r[4]=0u+0xCC010000u; // 8034A304
  c->r[0]=0u+0x00000061u; // 8034A308
  c->r[3]=0u+0x67000000u; // 8034A30C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A310
  c->r[0]=c->r[3]+0x00000021u; // 8034A314
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A318
  goto L_8034A548; // 8034A31C
L_8034A320:;
  c->r[4]=0u+0xCC010000u; // 8034A320
  c->r[0]=0u+0x00000061u; // 8034A324
  c->r[3]=0u+0x67000000u; // 8034A328
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A32C
  c->r[0]=c->r[3]+0x0000014Bu; // 8034A330
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A334
  goto L_8034A548; // 8034A338
L_8034A33C:;
  c->r[4]=0u+0xCC010000u; // 8034A33C
  c->r[0]=0u+0x00000061u; // 8034A340
  c->r[3]=0u+0x67000000u; // 8034A344
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A348
  c->r[0]=c->r[3]+0x0000018Du; // 8034A34C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A350
  goto L_8034A548; // 8034A354
L_8034A358:;
  c->r[4]=0u+0xCC010000u; // 8034A358
  c->r[0]=0u+0x00000061u; // 8034A35C
  c->r[3]=0u+0x67000000u; // 8034A360
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A364
  c->r[0]=c->r[3]+0x000001CFu; // 8034A368
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A36C
  goto L_8034A548; // 8034A370
L_8034A374:;
  c->r[4]=0u+0xCC010000u; // 8034A374
  c->r[0]=0u+0x00000061u; // 8034A378
  c->r[3]=0u+0x67000000u; // 8034A37C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A380
  c->r[0]=c->r[3]+0x00000211u; // 8034A384
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8034A388
  goto L_8034A548; // 8034A38C
L_8034A390:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8034A390
  c->r[0]=0u+0x00000002u; // 8034A394
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8034A398
  c->r[3]=0u+0xCC010000u; // 8034A39C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8034A3A0
  c->r[4]=0u+0x00000008u; // 8034A3A4
  c->r[0]=0u+0x00000020u; // 8034A3A8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A3AC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A3B0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A3B4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A3B8
  goto L_8034A548; // 8034A3BC
L_8034A3C0:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8034A3C0
  c->r[0]=0u+0x00000003u; // 8034A3C4
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8034A3C8
  c->r[3]=0u+0xCC010000u; // 8034A3CC
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8034A3D0
  c->r[4]=0u+0x00000008u; // 8034A3D4
  c->r[0]=0u+0x00000020u; // 8034A3D8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A3DC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A3E0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A3E4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A3E8
  goto L_8034A548; // 8034A3EC
L_8034A3F0:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8034A3F0
  c->r[0]=0u+0x00000004u; // 8034A3F4
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8034A3F8
  c->r[3]=0u+0xCC010000u; // 8034A3FC
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8034A400
  c->r[4]=0u+0x00000008u; // 8034A404
  c->r[0]=0u+0x00000020u; // 8034A408
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A40C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A410
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A414
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A418
  goto L_8034A548; // 8034A41C
L_8034A420:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8034A420
  c->r[0]=0u+0x00000005u; // 8034A424
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8034A428
  c->r[3]=0u+0xCC010000u; // 8034A42C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8034A430
  c->r[4]=0u+0x00000008u; // 8034A434
  c->r[0]=0u+0x00000020u; // 8034A438
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A43C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A440
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A444
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A448
  goto L_8034A548; // 8034A44C
L_8034A450:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8034A450
  c->r[0]=0u+0x00000006u; // 8034A454
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8034A458
  c->r[3]=0u+0xCC010000u; // 8034A45C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8034A460
  c->r[4]=0u+0x00000008u; // 8034A464
  c->r[0]=0u+0x00000020u; // 8034A468
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A46C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A470
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A474
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A478
  goto L_8034A548; // 8034A47C
L_8034A480:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8034A480
  c->r[0]=0u+0x00000007u; // 8034A484
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8034A488
  c->r[3]=0u+0xCC010000u; // 8034A48C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8034A490
  c->r[4]=0u+0x00000008u; // 8034A494
  c->r[0]=0u+0x00000020u; // 8034A498
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A49C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A4A0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A4A4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A4A8
  goto L_8034A548; // 8034A4AC
L_8034A4B0:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8034A4B0
  c->r[0]=0u+0x00000009u; // 8034A4B4
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8034A4B8
  c->r[3]=0u+0xCC010000u; // 8034A4BC
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8034A4C0
  c->r[4]=0u+0x00000008u; // 8034A4C4
  c->r[0]=0u+0x00000020u; // 8034A4C8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A4CC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A4D0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A4D4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A4D8
  goto L_8034A548; // 8034A4DC
L_8034A4E0:;
  c->r[4]=0u+0x00000008u; // 8034A4E0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A4E4
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8034A4E8
  c->r[3]=0u+0xCC010000u; // 8034A4EC
  W32(c->r[5]+0x000005F4u,c->r[0]); // 8034A4F0
  c->r[0]=0u+0x00000020u; // 8034A4F4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8034A4F8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A4FC
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8034A500
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8034A504
  goto L_8034A548; // 8034A508
L_8034A50C:;
  c->r[3]=R32(c->r[13]+0xFFFFEE74u); // 8034A50C
  c->r[0]=0u+0x00000002u; // 8034A510
  W16(c->r[3]+0x00000006u,c->r[0]); // 8034A514
  goto L_8034A548; // 8034A518
L_8034A51C:;
  c->r[3]=R32(c->r[13]+0xFFFFEE74u); // 8034A51C
  c->r[0]=0u+0x00000003u; // 8034A520
  W16(c->r[3]+0x00000006u,c->r[0]); // 8034A524
  goto L_8034A548; // 8034A528
L_8034A52C:;
  c->r[3]=R32(c->r[13]+0xFFFFEE74u); // 8034A52C
  c->r[0]=0u+0x00000004u; // 8034A530
  W16(c->r[3]+0x00000006u,c->r[0]); // 8034A534
  goto L_8034A548; // 8034A538
L_8034A53C:;
  c->r[3]=R32(c->r[13]+0xFFFFEE74u); // 8034A53C
  c->r[0]=0u+0x00000005u; // 8034A540
  W16(c->r[3]+0x00000006u,c->r[0]); // 8034A544
L_8034A548:;
  c->r[0]=0u+0x00000000u; // 8034A548
  W16(c->r[5]+0x00000002u,c->r[0]); // 8034A54C
  return; // 8034A550
}

// GXClearGPMetric
void f_8034A554(Ctx* __restrict c) {
  trace_call(0x8034A554u);
  c->r[3]=R32(c->r[13]+0xFFFFEE74u); // 8034A554
  c->r[0]=0u+0x00000004u; // 8034A558
  W16(c->r[3]+0x00000004u,c->r[0]); // 8034A55C
  return; // 8034A560
}

// fn_8034A564
void f_8034A564(Ctx* __restrict c) {
  trace_call(0x8034A564u);
  c->r[9]=R32(c->r[13]+0xFFFFEE74u); // 8034A564
  c->r[8]=R16(c->r[9]+0x00000042u); // 8034A568
L_8034A56C:;
  c->r[0]=c->r[8]|c->r[8]; // 8034A56C
  c->r[7]=R16(c->r[9]+0x00000040u); // 8034A570
  c->r[8]=R16(c->r[9]+0x00000042u); // 8034A574
  cmpu(c,0,c->r[8],c->r[0]); // 8034A578
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A56C; } // 8034A57C
  c->r[0]=rotl(c->r[8],16)&0xFFFF0000u; // 8034A580
  c->r[0]=c->r[0]|c->r[7]; // 8034A584
  W32(c->r[5]+0x00000000u,c->r[0]); // 8034A588
  c->r[8]=R32(c->r[13]+0xFFFFEE74u); // 8034A58C
  c->r[7]=R16(c->r[8]+0x00000046u); // 8034A590
L_8034A594:;
  c->r[0]=c->r[7]|c->r[7]; // 8034A594
  c->r[5]=R16(c->r[8]+0x00000044u); // 8034A598
  c->r[7]=R16(c->r[8]+0x00000046u); // 8034A59C
  cmpu(c,0,c->r[7],c->r[0]); // 8034A5A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A594; } // 8034A5A4
  c->r[0]=rotl(c->r[7],16)&0xFFFF0000u; // 8034A5A8
  c->r[0]=c->r[0]|c->r[5]; // 8034A5AC
  W32(c->r[6]+0x00000000u,c->r[0]); // 8034A5B0
  c->r[7]=R32(c->r[13]+0xFFFFEE74u); // 8034A5B4
  c->r[6]=R16(c->r[7]+0x0000004Au); // 8034A5B8
L_8034A5BC:;
  c->r[0]=c->r[6]|c->r[6]; // 8034A5BC
  c->r[5]=R16(c->r[7]+0x00000048u); // 8034A5C0
  c->r[6]=R16(c->r[7]+0x0000004Au); // 8034A5C4
  cmpu(c,0,c->r[6],c->r[0]); // 8034A5C8
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A5BC; } // 8034A5CC
  c->r[0]=rotl(c->r[6],16)&0xFFFF0000u; // 8034A5D0
  c->r[0]=c->r[0]|c->r[5]; // 8034A5D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034A5D8
  c->r[6]=R32(c->r[13]+0xFFFFEE74u); // 8034A5DC
  c->r[5]=R16(c->r[6]+0x0000004Eu); // 8034A5E0
L_8034A5E4:;
  c->r[0]=c->r[5]|c->r[5]; // 8034A5E4
  c->r[3]=R16(c->r[6]+0x0000004Cu); // 8034A5E8
  c->r[5]=R16(c->r[6]+0x0000004Eu); // 8034A5EC
  cmpu(c,0,c->r[5],c->r[0]); // 8034A5F0
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A5E4; } // 8034A5F4
  c->r[0]=rotl(c->r[5],16)&0xFFFF0000u; // 8034A5F8
  c->r[0]=c->r[0]|c->r[3]; // 8034A5FC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8034A600
  return; // 8034A604
}

// FindContainHeap_
void f_8034A608(Ctx* __restrict c) {
  trace_call(0x8034A608u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A608
  c->r[0]=c->lr; // 8034A60C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A610
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034A614
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034A618
  c->r[30]=c->r[3]|c->r[3]; // 8034A61C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034A620
  c->r[29]=0u+0x00000000u; // 8034A624
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034A628
  c->r[28]=c->r[4]|c->r[4]; // 8034A62C
  goto L_8034A70C; // 8034A630
L_8034A634:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A634
  cmpu(c,0,c->r[0],c->r[28]); // 8034A638
  if (crb(c,1)) { goto L_8034A70C; } // 8034A63C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A640
  cmpu(c,0,c->r[28],c->r[0]); // 8034A644
  if (!crb(c,0)) { goto L_8034A70C; } // 8034A648
  c->r[31]=0u+0x00000000u; // 8034A64C
  goto L_8034A6DC; // 8034A650
L_8034A654:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A654
  cmpu(c,0,c->r[0],c->r[28]); // 8034A658
  if (crb(c,1)) { goto L_8034A6DC; } // 8034A65C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A660
  cmpu(c,0,c->r[28],c->r[0]); // 8034A664
  if (!crb(c,0)) { goto L_8034A6DC; } // 8034A668
  c->r[30]=0u+0x00000000u; // 8034A66C
  goto L_8034A6AC; // 8034A670
L_8034A674:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A674
  cmpu(c,0,c->r[0],c->r[28]); // 8034A678
  if (crb(c,1)) { goto L_8034A6AC; } // 8034A67C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A680
  cmpu(c,0,c->r[28],c->r[0]); // 8034A684
  if (!crb(c,0)) { goto L_8034A6AC; } // 8034A688
  c->r[4]=c->r[28]|c->r[28]; // 8034A68C
  c->r[3]=c->r[3]+0x0000000Cu; // 8034A690
  c->lr=0x8034A698u; f_8034A608(c); // 8034A694
  cmps(c,0,(int32_t)c->r[3],0); // 8034A698
  if (crb(c,2)) { goto L_8034A6A4; } // 8034A69C
  goto L_8034A6C8; // 8034A6A0
L_8034A6A4:;
  c->r[3]=c->r[30]|c->r[30]; // 8034A6A4
  goto L_8034A6C8; // 8034A6A8
L_8034A6AC:;
  c->r[4]=c->r[30]|c->r[30]; // 8034A6AC
  c->r[3]=c->r[31]+0x0000000Cu; // 8034A6B0
  c->lr=0x8034A6B8u; f_8034B328(c); // 8034A6B4
  cmps(c,0,(int32_t)c->r[3],0); // 8034A6B8
  c->r[30]=c->r[3]|c->r[3]; // 8034A6BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A674; } // 8034A6C0
  c->r[3]=0u+0x00000000u; // 8034A6C4
L_8034A6C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034A6C8
  if (crb(c,2)) { goto L_8034A6D4; } // 8034A6CC
  goto L_8034A6F8; // 8034A6D0
L_8034A6D4:;
  c->r[3]=c->r[31]|c->r[31]; // 8034A6D4
  goto L_8034A6F8; // 8034A6D8
L_8034A6DC:;
  c->r[4]=c->r[31]|c->r[31]; // 8034A6DC
  c->r[3]=c->r[29]+0x0000000Cu; // 8034A6E0
  c->lr=0x8034A6E8u; f_8034B328(c); // 8034A6E4
  cmps(c,0,(int32_t)c->r[3],0); // 8034A6E8
  c->r[31]=c->r[3]|c->r[3]; // 8034A6EC
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A654; } // 8034A6F0
  c->r[3]=0u+0x00000000u; // 8034A6F4
L_8034A6F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034A6F8
  if (crb(c,2)) { goto L_8034A704; } // 8034A6FC
  goto L_8034A728; // 8034A700
L_8034A704:;
  c->r[3]=c->r[29]|c->r[29]; // 8034A704
  goto L_8034A728; // 8034A708
L_8034A70C:;
  c->r[3]=c->r[30]|c->r[30]; // 8034A70C
  c->r[4]=c->r[29]|c->r[29]; // 8034A710
  c->lr=0x8034A718u; f_8034B328(c); // 8034A714
  cmps(c,0,(int32_t)c->r[3],0); // 8034A718
  c->r[29]=c->r[3]|c->r[3]; // 8034A71C
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A634; } // 8034A720
  c->r[3]=0u+0x00000000u; // 8034A724
L_8034A728:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034A728
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034A72C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034A730
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034A734
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034A738
  c->lr=c->r[0]; // 8034A73C
  c->r[1]=c->r[1]+0x00000020u; // 8034A740
  return; // 8034A744
}

// MEMiInitHeapHead
void f_8034A748(Ctx* __restrict c) {
  trace_call(0x8034A748u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A748
  c->r[0]=c->lr; // 8034A74C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A750
  c->r[11]=c->r[1]+0x00000020u; // 8034A754
  c->lr=0x8034A75Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034A758
  c->r[0]=0u+0x00000000u; // 8034A75C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8034A760
  c->r[0]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8034A764
  c->r[27]=c->r[3]|c->r[3]; // 8034A768
  W32(c->r[3]+0x00000018u,c->r[5]); // 8034A76C
  c->r[4]=0u+0x00000004u; // 8034A770
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 8034A774
  W32(c->r[3]+0x00000038u,c->r[0]); // 8034A778
  c->r[3]=c->r[3]+0x0000000Cu; // 8034A77C
  c->lr=0x8034A784u; f_8034B234(c); // 8034A780
  c->r[0]=R32(c->r[13]+0xFFFFEED0u); // 8034A784
  cmps(c,0,(int32_t)c->r[0],0); // 8034A788
  if (!crb(c,2)) { goto L_8034A7B4; } // 8034A78C
  c->r[3]=0u+0x80530000u; // 8034A790
  c->r[4]=0u+0x00000004u; // 8034A794
  c->r[3]=c->r[3]+0xFFFF8FA8u; // 8034A798
  c->lr=0x8034A7A0u; f_8034B234(c); // 8034A79C
  c->r[3]=0u+0x80530000u; // 8034A7A0
  c->r[3]=c->r[3]+0xFFFF8FB8u; // 8034A7A4
  c->lr=0x8034A7ACu; f_80323850(c); // 8034A7A8
  c->r[0]=0u+0x00000001u; // 8034A7AC
  W32(c->r[13]+0xFFFFEED0u,c->r[0]); // 8034A7B0
L_8034A7B4:;
  c->r[3]=c->r[27]+0x00000020u; // 8034A7B4
  c->lr=0x8034A7BCu; f_80323850(c); // 8034A7B8
  c->r[3]=0u+0x80530000u; // 8034A7BC
  c->r[3]=c->r[3]+0xFFFF8FB8u; // 8034A7C0
  c->lr=0x8034A7C8u; f_80323888(c); // 8034A7C4
  c->r[31]=0u+0x80530000u; // 8034A7C8
  c->r[30]=0u+0x00000000u; // 8034A7CC
  c->r[28]=c->r[31]+0xFFFF8FA8u; // 8034A7D0
  goto L_8034A8B0; // 8034A7D4
L_8034A7D8:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A7D8
  cmpu(c,0,c->r[0],c->r[27]); // 8034A7DC
  if (crb(c,1)) { goto L_8034A8B0; } // 8034A7E0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A7E4
  cmpu(c,0,c->r[27],c->r[0]); // 8034A7E8
  if (!crb(c,0)) { goto L_8034A8B0; } // 8034A7EC
  c->r[31]=0u+0x00000000u; // 8034A7F0
  goto L_8034A880; // 8034A7F4
L_8034A7F8:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A7F8
  cmpu(c,0,c->r[0],c->r[27]); // 8034A7FC
  if (crb(c,1)) { goto L_8034A880; } // 8034A800
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A804
  cmpu(c,0,c->r[27],c->r[0]); // 8034A808
  if (!crb(c,0)) { goto L_8034A880; } // 8034A80C
  c->r[29]=0u+0x00000000u; // 8034A810
  goto L_8034A850; // 8034A814
L_8034A818:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A818
  cmpu(c,0,c->r[0],c->r[27]); // 8034A81C
  if (crb(c,1)) { goto L_8034A850; } // 8034A820
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A824
  cmpu(c,0,c->r[27],c->r[0]); // 8034A828
  if (!crb(c,0)) { goto L_8034A850; } // 8034A82C
  c->r[4]=c->r[27]|c->r[27]; // 8034A830
  c->r[3]=c->r[3]+0x0000000Cu; // 8034A834
  c->lr=0x8034A83Cu; f_8034A608(c); // 8034A838
  cmps(c,0,(int32_t)c->r[3],0); // 8034A83C
  if (crb(c,2)) { goto L_8034A848; } // 8034A840
  goto L_8034A86C; // 8034A844
L_8034A848:;
  c->r[3]=c->r[29]|c->r[29]; // 8034A848
  goto L_8034A86C; // 8034A84C
L_8034A850:;
  c->r[4]=c->r[29]|c->r[29]; // 8034A850
  c->r[3]=c->r[31]+0x0000000Cu; // 8034A854
  c->lr=0x8034A85Cu; f_8034B328(c); // 8034A858
  cmps(c,0,(int32_t)c->r[3],0); // 8034A85C
  c->r[29]=c->r[3]|c->r[3]; // 8034A860
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A818; } // 8034A864
  c->r[3]=0u+0x00000000u; // 8034A868
L_8034A86C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034A86C
  if (crb(c,2)) { goto L_8034A878; } // 8034A870
  goto L_8034A89C; // 8034A874
L_8034A878:;
  c->r[3]=c->r[31]|c->r[31]; // 8034A878
  goto L_8034A89C; // 8034A87C
L_8034A880:;
  c->r[4]=c->r[31]|c->r[31]; // 8034A880
  c->r[3]=c->r[30]+0x0000000Cu; // 8034A884
  c->lr=0x8034A88Cu; f_8034B328(c); // 8034A888
  cmps(c,0,(int32_t)c->r[3],0); // 8034A88C
  c->r[31]=c->r[3]|c->r[3]; // 8034A890
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A7F8; } // 8034A894
  c->r[3]=0u+0x00000000u; // 8034A898
L_8034A89C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034A89C
  if (crb(c,2)) { goto L_8034A8A8; } // 8034A8A0
  goto L_8034A8CC; // 8034A8A4
L_8034A8A8:;
  c->r[3]=c->r[30]|c->r[30]; // 8034A8A8
  goto L_8034A8CC; // 8034A8AC
L_8034A8B0:;
  c->r[4]=c->r[30]|c->r[30]; // 8034A8B0
  c->r[3]=c->r[31]+0xFFFF8FA8u; // 8034A8B4
  c->lr=0x8034A8BCu; f_8034B328(c); // 8034A8B8
  cmps(c,0,(int32_t)c->r[3],0); // 8034A8BC
  c->r[30]=c->r[3]|c->r[3]; // 8034A8C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A7D8; } // 8034A8C4
  c->r[3]=0u+0x00000000u; // 8034A8C8
L_8034A8CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034A8CC
  if (crb(c,2)) { goto L_8034A8D8; } // 8034A8D0
  c->r[28]=c->r[3]+0x0000000Cu; // 8034A8D4
L_8034A8D8:;
  c->r[3]=c->r[28]|c->r[28]; // 8034A8D8
  c->r[4]=c->r[27]|c->r[27]; // 8034A8DC
  c->lr=0x8034A8E4u; f_8034B24C(c); // 8034A8E0
  c->r[3]=0u+0x80530000u; // 8034A8E4
  c->r[3]=c->r[3]+0xFFFF8FB8u; // 8034A8E8
  c->lr=0x8034A8F0u; f_80323964(c); // 8034A8EC
  c->r[11]=c->r[1]+0x00000020u; // 8034A8F0
  c->lr=0x8034A8F8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034A8F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034A8F8
  c->lr=c->r[0]; // 8034A8FC
  c->r[1]=c->r[1]+0x00000020u; // 8034A900
  return; // 8034A904
}

// MEMiFinalizeHeap
void f_8034A908(Ctx* __restrict c) {
  trace_call(0x8034A908u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034A908
  c->r[0]=c->lr; // 8034A90C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034A910
  c->r[11]=c->r[1]+0x00000020u; // 8034A914
  c->lr=0x8034A91Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034A918
  c->r[4]=0u+0x80530000u; // 8034A91C
  c->r[27]=c->r[3]|c->r[3]; // 8034A920
  c->r[3]=c->r[4]+0xFFFF8FB8u; // 8034A924
  c->lr=0x8034A92Cu; f_80323888(c); // 8034A928
  c->r[31]=0u+0x80530000u; // 8034A92C
  c->r[30]=0u+0x00000000u; // 8034A930
  c->r[28]=c->r[31]+0xFFFF8FA8u; // 8034A934
  goto L_8034AA14; // 8034A938
L_8034A93C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A93C
  cmpu(c,0,c->r[0],c->r[27]); // 8034A940
  if (crb(c,1)) { goto L_8034AA14; } // 8034A944
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A948
  cmpu(c,0,c->r[27],c->r[0]); // 8034A94C
  if (!crb(c,0)) { goto L_8034AA14; } // 8034A950
  c->r[31]=0u+0x00000000u; // 8034A954
  goto L_8034A9E4; // 8034A958
L_8034A95C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A95C
  cmpu(c,0,c->r[0],c->r[27]); // 8034A960
  if (crb(c,1)) { goto L_8034A9E4; } // 8034A964
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A968
  cmpu(c,0,c->r[27],c->r[0]); // 8034A96C
  if (!crb(c,0)) { goto L_8034A9E4; } // 8034A970
  c->r[29]=0u+0x00000000u; // 8034A974
  goto L_8034A9B4; // 8034A978
L_8034A97C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8034A97C
  cmpu(c,0,c->r[0],c->r[27]); // 8034A980
  if (crb(c,1)) { goto L_8034A9B4; } // 8034A984
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8034A988
  cmpu(c,0,c->r[27],c->r[0]); // 8034A98C
  if (!crb(c,0)) { goto L_8034A9B4; } // 8034A990
  c->r[4]=c->r[27]|c->r[27]; // 8034A994
  c->r[3]=c->r[3]+0x0000000Cu; // 8034A998
  c->lr=0x8034A9A0u; f_8034A608(c); // 8034A99C
  cmps(c,0,(int32_t)c->r[3],0); // 8034A9A0
  if (crb(c,2)) { goto L_8034A9AC; } // 8034A9A4
  goto L_8034A9D0; // 8034A9A8
L_8034A9AC:;
  c->r[3]=c->r[29]|c->r[29]; // 8034A9AC
  goto L_8034A9D0; // 8034A9B0
L_8034A9B4:;
  c->r[4]=c->r[29]|c->r[29]; // 8034A9B4
  c->r[3]=c->r[31]+0x0000000Cu; // 8034A9B8
  c->lr=0x8034A9C0u; f_8034B328(c); // 8034A9BC
  cmps(c,0,(int32_t)c->r[3],0); // 8034A9C0
  c->r[29]=c->r[3]|c->r[3]; // 8034A9C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A97C; } // 8034A9C8
  c->r[3]=0u+0x00000000u; // 8034A9CC
L_8034A9D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034A9D0
  if (crb(c,2)) { goto L_8034A9DC; } // 8034A9D4
  goto L_8034AA00; // 8034A9D8
L_8034A9DC:;
  c->r[3]=c->r[31]|c->r[31]; // 8034A9DC
  goto L_8034AA00; // 8034A9E0
L_8034A9E4:;
  c->r[4]=c->r[31]|c->r[31]; // 8034A9E4
  c->r[3]=c->r[30]+0x0000000Cu; // 8034A9E8
  c->lr=0x8034A9F0u; f_8034B328(c); // 8034A9EC
  cmps(c,0,(int32_t)c->r[3],0); // 8034A9F0
  c->r[31]=c->r[3]|c->r[3]; // 8034A9F4
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A95C; } // 8034A9F8
  c->r[3]=0u+0x00000000u; // 8034A9FC
L_8034AA00:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034AA00
  if (crb(c,2)) { goto L_8034AA0C; } // 8034AA04
  goto L_8034AA30; // 8034AA08
L_8034AA0C:;
  c->r[3]=c->r[30]|c->r[30]; // 8034AA0C
  goto L_8034AA30; // 8034AA10
L_8034AA14:;
  c->r[4]=c->r[30]|c->r[30]; // 8034AA14
  c->r[3]=c->r[31]+0xFFFF8FA8u; // 8034AA18
  c->lr=0x8034AA20u; f_8034B328(c); // 8034AA1C
  cmps(c,0,(int32_t)c->r[3],0); // 8034AA20
  c->r[30]=c->r[3]|c->r[3]; // 8034AA24
  if (!crb(c,2)) { IRQCHK(c); goto L_8034A93C; } // 8034AA28
  c->r[3]=0u+0x00000000u; // 8034AA2C
L_8034AA30:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034AA30
  if (crb(c,2)) { goto L_8034AA3C; } // 8034AA34
  c->r[28]=c->r[3]+0x0000000Cu; // 8034AA38
L_8034AA3C:;
  c->r[3]=c->r[28]|c->r[28]; // 8034AA3C
  c->r[4]=c->r[27]|c->r[27]; // 8034AA40
  c->lr=0x8034AA48u; f_8034B2BC(c); // 8034AA44
  c->r[3]=0u+0x80530000u; // 8034AA48
  c->r[3]=c->r[3]+0xFFFF8FB8u; // 8034AA4C
  c->lr=0x8034AA54u; f_80323964(c); // 8034AA50
  c->r[0]=0u+0x00000000u; // 8034AA54
  c->r[11]=c->r[1]+0x00000020u; // 8034AA58
  W32(c->r[27]+0x00000000u,c->r[0]); // 8034AA5C
  c->lr=0x8034AA64u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034AA60
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034AA64
  c->lr=c->r[0]; // 8034AA68
  c->r[1]=c->r[1]+0x00000020u; // 8034AA6C
  return; // 8034AA70
}

// MEM_ExpAllocNewBlock
void f_8034AA74(Ctx* __restrict c) {
  trace_call(0x8034AA74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034AA74
  c->r[0]=c->lr; // 8034AA78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034AA7C
  c->r[11]=c->r[1]+0x00000020u; // 8034AA80
  c->lr=0x8034AA88u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034AA84
  c->r[8]=R32(c->r[4]+0x00000008u); // 8034AA88
  c->r[30]=c->r[6]+c->r[5]; // 8034AA8C
  c->r[6]=R16(c->r[4]+0x00000002u); // 8034AA90
  c->r[29]=c->r[5]+0xFFFFFFF0u; // 8034AA94
  c->r[0]=R32(c->r[4]+0x00000004u); // 8034AA98
  cmps(c,0,(int32_t)c->r[8],0); // 8034AA9C
  c->r[9]=rotl(c->r[6],24)&0x0000007Fu; // 8034AAA0
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 8034AAA4
  c->r[6]=c->r[4]+c->r[0]; // 8034AAA8
  c->r[27]=c->r[5]|c->r[5]; // 8034AAAC
  c->r[26]=c->r[3]|c->r[3]; // 8034AAB0
  c->r[28]=c->r[7]|c->r[7]; // 8034AAB4
  c->r[31]=c->r[29]|c->r[29]; // 8034AAB8
  c->r[5]=c->r[4]-c->r[9]; // 8034AABC
  c->r[6]=c->r[6]+0x00000010u; // 8034AAC0
  if (crb(c,2)) { goto L_8034AAD0; } // 8034AAC4
  W32(c->r[8]+0x0000000Cu,c->r[10]); // 8034AAC8
  goto L_8034AAD4; // 8034AACC
L_8034AAD0:;
  W32(c->r[3]+0x00000000u,c->r[10]); // 8034AAD0
L_8034AAD4:;
  cmps(c,0,(int32_t)c->r[10],0); // 8034AAD4
  if (crb(c,2)) { goto L_8034AAE4; } // 8034AAD8
  W32(c->r[10]+0x00000008u,c->r[8]); // 8034AADC
  goto L_8034AAE8; // 8034AAE0
L_8034AAE4:;
  W32(c->r[3]+0x00000004u,c->r[8]); // 8034AAE4
L_8034AAE8:;
  c->r[0]=c->r[29]-c->r[5]; // 8034AAE8
  cmpu(c,0,c->r[0],0x00000014u); // 8034AAEC
  if (!crb(c,0)) { goto L_8034AAFC; } // 8034AAF0
  c->r[31]=c->r[5]|c->r[5]; // 8034AAF4
  goto L_8034AB58; // 8034AAF8
L_8034AAFC:;
  c->r[4]=0u+0x00004652u; // 8034AAFC
  c->r[0]=c->r[5]+0x00000010u; // 8034AB00
  W16(c->r[5]+0x00000000u,c->r[4]); // 8034AB04
  c->r[4]=0u+0x00000000u; // 8034AB08
  c->r[0]=c->r[29]-c->r[0]; // 8034AB0C
  cmps(c,0,(int32_t)c->r[8],0); // 8034AB10
  W16(c->r[5]+0x00000002u,c->r[4]); // 8034AB14
  W32(c->r[5]+0x00000004u,c->r[0]); // 8034AB18
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8034AB1C
  W32(c->r[5]+0x00000008u,c->r[8]); // 8034AB20
  if (crb(c,2)) { goto L_8034AB34; } // 8034AB24
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8034AB28
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 8034AB2C
  goto L_8034AB3C; // 8034AB30
L_8034AB34:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8034AB34
  W32(c->r[3]+0x00000000u,c->r[5]); // 8034AB38
L_8034AB3C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8034AB3C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8034AB40
  if (crb(c,2)) { goto L_8034AB50; } // 8034AB44
  W32(c->r[4]+0x00000008u,c->r[5]); // 8034AB48
  goto L_8034AB54; // 8034AB4C
L_8034AB50:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 8034AB50
L_8034AB54:;
  c->r[8]=c->r[5]|c->r[5]; // 8034AB54
L_8034AB58:;
  c->r[0]=c->r[6]-c->r[30]; // 8034AB58
  cmpu(c,0,c->r[0],0x00000014u); // 8034AB5C
  if (!crb(c,0)) { goto L_8034AB6C; } // 8034AB60
  c->r[30]=c->r[6]|c->r[6]; // 8034AB64
  goto L_8034ABC4; // 8034AB68
L_8034AB6C:;
  c->r[4]=0u+0x00004652u; // 8034AB6C
  c->r[0]=c->r[30]+0x00000010u; // 8034AB70
  W16(c->r[30]+0x00000000u,c->r[4]); // 8034AB74
  c->r[4]=0u+0x00000000u; // 8034AB78
  c->r[0]=c->r[6]-c->r[0]; // 8034AB7C
  cmps(c,0,(int32_t)c->r[8],0); // 8034AB80
  W16(c->r[30]+0x00000002u,c->r[4]); // 8034AB84
  W32(c->r[30]+0x00000004u,c->r[0]); // 8034AB88
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 8034AB8C
  W32(c->r[30]+0x00000008u,c->r[8]); // 8034AB90
  if (crb(c,2)) { goto L_8034ABA4; } // 8034AB94
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8034AB98
  W32(c->r[8]+0x0000000Cu,c->r[30]); // 8034AB9C
  goto L_8034ABAC; // 8034ABA0
L_8034ABA4:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8034ABA4
  W32(c->r[3]+0x00000000u,c->r[30]); // 8034ABA8
L_8034ABAC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8034ABAC
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 8034ABB0
  if (crb(c,2)) { goto L_8034ABC0; } // 8034ABB4
  W32(c->r[4]+0x00000008u,c->r[30]); // 8034ABB8
  goto L_8034ABC4; // 8034ABBC
L_8034ABC0:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 8034ABC0
L_8034ABC4:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 8034ABC4
  c->r[5]=c->r[30]-c->r[31]; // 8034ABC8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8034ABCC
  if (crb(c,2)) { goto L_8034ABE0; } // 8034ABD0
  c->r[3]=c->r[31]|c->r[31]; // 8034ABD4
  c->r[4]=0u+0x00000000u; // 8034ABD8
  c->lr=0x8034ABE0u; f_80006370(c); // 8034ABDC
L_8034ABE0:;
  c->r[5]=0u+0x00000000u; // 8034ABE0
  c->r[4]=c->r[29]+0x00000010u; // 8034ABE4
  c->r[3]=c->r[5]|c->r[5]; // 8034ABE8
  c->r[6]=0u+0x00005544u; // 8034ABEC
  c->r[4]=c->r[30]-c->r[4]; // 8034ABF0
  c->r[0]=c->r[29]-c->r[31]; // 8034ABF4
  c->r[3]=(rotl(c->r[28],15)&0x00008000u)|(c->r[3]&~0x00008000u); // 8034ABF8
  W16(c->r[29]+0x00000000u,c->r[6]); // 8034ABFC
  c->r[3]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[3]&~0x00007F00u); // 8034AC00
  W32(c->r[29]+0x00000004u,c->r[4]); // 8034AC04
  W32(c->r[29]+0x00000008u,c->r[5]); // 8034AC08
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 8034AC0C
  W16(c->r[29]+0x00000002u,c->r[3]); // 8034AC10
  c->r[0]=R16(c->r[26]+0x00000010u); // 8034AC14
  c->r[3]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 8034AC18
  W16(c->r[29]+0x00000002u,c->r[3]); // 8034AC1C
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 8034AC20
  cmps(c,0,(int32_t)c->r[4],0); // 8034AC24
  W32(c->r[29]+0x00000008u,c->r[4]); // 8034AC28
  if (crb(c,2)) { goto L_8034AC3C; } // 8034AC2C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8034AC30
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 8034AC34
  goto L_8034AC44; // 8034AC38
L_8034AC3C:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 8034AC3C
  W32(c->r[26]+0x00000008u,c->r[29]); // 8034AC40
L_8034AC44:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034AC44
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8034AC48
  if (crb(c,2)) { goto L_8034AC58; } // 8034AC4C
  W32(c->r[3]+0x00000008u,c->r[29]); // 8034AC50
  goto L_8034AC5C; // 8034AC54
L_8034AC58:;
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 8034AC58
L_8034AC5C:;
  c->r[11]=c->r[1]+0x00000020u; // 8034AC5C
  c->r[3]=c->r[27]|c->r[27]; // 8034AC60
  c->lr=0x8034AC68u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034AC64
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034AC68
  c->lr=c->r[0]; // 8034AC6C
  c->r[1]=c->r[1]+0x00000020u; // 8034AC70
  return; // 8034AC74
}

// AllocFromHead_
void f_8034AC78(Ctx* __restrict c) {
  trace_call(0x8034AC78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034AC78
  c->r[0]=c->lr; // 8034AC7C
  c->r[3]=c->r[3]+0x0000003Cu; // 8034AC80
  c->r[6]=c->r[4]|c->r[4]; // 8034AC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034AC88
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8034AC8C
  c->r[8]=~(c->r[0]|c->r[0]); // 8034AC90
  c->r[12]=0u+0x00000000u; // 8034AC94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034AC98
  c->r[31]=0u+0xFFFFFFFFu; // 8034AC9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034ACA0
  c->r[30]=0u+0x00000000u; // 8034ACA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034ACA8
  c->r[7]=R16(c->r[3]+0x00000012u); // 8034ACAC
  c->r[11]=R32(c->r[3]+0x00000000u); // 8034ACB0
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 8034ACB4
  c->r[0]=cntlz(c->r[0]); // 8034ACB8
  c->r[10]=rotl(c->r[0],27)&0x07FFFFFFu; // 8034ACBC
  goto L_8034AD10; // 8034ACC0
L_8034ACC4:;
  c->r[29]=c->r[11]+0x00000010u; // 8034ACC4
  c->r[9]=R32(c->r[11]+0x00000004u); // 8034ACC8
  c->r[7]=c->r[5]+c->r[29]; // 8034ACCC
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 8034ACD0
  c->r[7]=c->r[8]&c->r[0]; // 8034ACD4
  c->r[0]=c->r[7]-c->r[29]; // 8034ACD8
  c->r[0]=c->r[4]+c->r[0]; // 8034ACDC
  cmpu(c,0,c->r[9],c->r[0]); // 8034ACE0
  if (crb(c,0)) { goto L_8034AD0C; } // 8034ACE4
  cmpu(c,0,c->r[31],c->r[9]); // 8034ACE8
  if (!crb(c,1)) { goto L_8034AD0C; } // 8034ACEC
  cmps(c,0,(int32_t)c->r[10],0); // 8034ACF0
  c->r[12]=c->r[11]|c->r[11]; // 8034ACF4
  c->r[31]=c->r[9]|c->r[9]; // 8034ACF8
  c->r[30]=c->r[7]|c->r[7]; // 8034ACFC
  if (!crb(c,2)) { goto L_8034AD18; } // 8034AD00
  cmpu(c,0,c->r[9],c->r[4]); // 8034AD04
  if (crb(c,2)) { goto L_8034AD18; } // 8034AD08
L_8034AD0C:;
  c->r[11]=R32(c->r[11]+0x0000000Cu); // 8034AD0C
L_8034AD10:;
  cmps(c,0,(int32_t)c->r[11],0); // 8034AD10
  if (!crb(c,2)) { IRQCHK(c); goto L_8034ACC4; } // 8034AD14
L_8034AD18:;
  cmps(c,0,(int32_t)c->r[12],0); // 8034AD18
  if (crb(c,2)) { goto L_8034AD34; } // 8034AD1C
  c->r[4]=c->r[12]|c->r[12]; // 8034AD20
  c->r[5]=c->r[30]|c->r[30]; // 8034AD24
  c->r[7]=0u+0x00000000u; // 8034AD28
  c->lr=0x8034AD30u; f_8034AA74(c); // 8034AD2C
  goto L_8034AD38; // 8034AD30
L_8034AD34:;
  c->r[3]=0u+0x00000000u; // 8034AD34
L_8034AD38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034AD38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034AD3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034AD40
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034AD44
  c->lr=c->r[0]; // 8034AD48
  c->r[1]=c->r[1]+0x00000020u; // 8034AD4C
  return; // 8034AD50
}

// AllocFromTail_
void f_8034AD54(Ctx* __restrict c) {
  trace_call(0x8034AD54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034AD54
  c->r[0]=c->lr; // 8034AD58
  c->r[3]=c->r[3]+0x0000003Cu; // 8034AD5C
  c->r[6]=c->r[4]|c->r[4]; // 8034AD60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034AD64
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8034AD68
  c->r[7]=~(c->r[0]|c->r[0]); // 8034AD6C
  c->r[11]=0u+0x00000000u; // 8034AD70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034AD74
  c->r[12]=0u+0xFFFFFFFFu; // 8034AD78
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034AD7C
  c->r[5]=R16(c->r[3]+0x00000012u); // 8034AD80
  c->r[10]=R32(c->r[3]+0x00000004u); // 8034AD84
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 8034AD88
  c->r[5]=0u+0x00000000u; // 8034AD8C
  c->r[0]=cntlz(c->r[0]); // 8034AD90
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 8034AD94
  goto L_8034ADE0; // 8034AD98
L_8034AD9C:;
  c->r[8]=R32(c->r[10]+0x00000004u); // 8034AD9C
  c->r[31]=c->r[10]+0x00000010u; // 8034ADA0
  c->r[0]=c->r[8]+c->r[31]; // 8034ADA4
  c->r[0]=c->r[0]-c->r[4]; // 8034ADA8
  c->r[30]=c->r[7]&c->r[0]; // 8034ADAC
  c->r[0]=c->r[30]-c->r[31]; cr0(c,c->r[0]); // 8034ADB0
  if (crb(c,0)) { goto L_8034ADDC; } // 8034ADB4
  cmpu(c,0,c->r[12],c->r[8]); // 8034ADB8
  if (!crb(c,1)) { goto L_8034ADDC; } // 8034ADBC
  cmps(c,0,(int32_t)c->r[9],0); // 8034ADC0
  c->r[11]=c->r[10]|c->r[10]; // 8034ADC4
  c->r[12]=c->r[8]|c->r[8]; // 8034ADC8
  c->r[5]=c->r[30]|c->r[30]; // 8034ADCC
  if (!crb(c,2)) { goto L_8034ADE8; } // 8034ADD0
  cmpu(c,0,c->r[8],c->r[4]); // 8034ADD4
  if (crb(c,2)) { goto L_8034ADE8; } // 8034ADD8
L_8034ADDC:;
  c->r[10]=R32(c->r[10]+0x00000008u); // 8034ADDC
L_8034ADE0:;
  cmps(c,0,(int32_t)c->r[10],0); // 8034ADE0
  if (!crb(c,2)) { IRQCHK(c); goto L_8034AD9C; } // 8034ADE4
L_8034ADE8:;
  cmps(c,0,(int32_t)c->r[11],0); // 8034ADE8
  if (crb(c,2)) { goto L_8034AE00; } // 8034ADEC
  c->r[4]=c->r[11]|c->r[11]; // 8034ADF0
  c->r[7]=0u+0x00000001u; // 8034ADF4
  c->lr=0x8034ADFCu; f_8034AA74(c); // 8034ADF8
  goto L_8034AE04; // 8034ADFC
L_8034AE00:;
  c->r[3]=0u+0x00000000u; // 8034AE00
L_8034AE04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034AE04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034AE08
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034AE0C
  c->lr=c->r[0]; // 8034AE10
  c->r[1]=c->r[1]+0x00000010u; // 8034AE14
  return; // 8034AE18
}

// RecycleRegion_
void f_8034AE1C(Ctx* __restrict c) {
  trace_call(0x8034AE1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034AE1C
  c->r[8]=0u+0x00000000u; // 8034AE20
  c->r[5]=R32(c->r[4]+0x00000000u); // 8034AE24
  c->r[0]=R32(c->r[4]+0x00000004u); // 8034AE28
  W32(c->r[1]+0x00000008u,c->r[5]); // 8034AE2C
  c->r[6]=R32(c->r[3]+0x00000000u); // 8034AE30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034AE34
  goto L_8034AEA4; // 8034AE38
L_8034AE3C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034AE3C
  cmpu(c,0,c->r[6],c->r[0]); // 8034AE40
  if (!crb(c,0)) { goto L_8034AE50; } // 8034AE44
  c->r[8]=c->r[6]|c->r[6]; // 8034AE48
  goto L_8034AEA0; // 8034AE4C
L_8034AE50:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8034AE50
  cmpu(c,0,c->r[6],c->r[0]); // 8034AE54
  if (!crb(c,2)) { goto L_8034AEAC; } // 8034AE58
  c->r[0]=R32(c->r[6]+0x00000004u); // 8034AE5C
  c->r[7]=R32(c->r[6]+0x00000008u); // 8034AE60
  c->r[5]=c->r[6]+c->r[0]; // 8034AE64
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8034AE68
  c->r[0]=c->r[5]+0x00000010u; // 8034AE6C
  cmps(c,0,(int32_t)c->r[7],0); // 8034AE70
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034AE74
  if (crb(c,2)) { goto L_8034AE84; } // 8034AE78
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 8034AE7C
  goto L_8034AE88; // 8034AE80
L_8034AE84:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 8034AE84
L_8034AE88:;
  cmps(c,0,(int32_t)c->r[6],0); // 8034AE88
  if (crb(c,2)) { goto L_8034AE98; } // 8034AE8C
  W32(c->r[6]+0x00000008u,c->r[7]); // 8034AE90
  goto L_8034AEAC; // 8034AE94
L_8034AE98:;
  W32(c->r[3]+0x00000004u,c->r[7]); // 8034AE98
  goto L_8034AEAC; // 8034AE9C
L_8034AEA0:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8034AEA0
L_8034AEA4:;
  cmps(c,0,(int32_t)c->r[6],0); // 8034AEA4
  if (!crb(c,2)) { IRQCHK(c); goto L_8034AE3C; } // 8034AEA8
L_8034AEAC:;
  cmps(c,0,(int32_t)c->r[8],0); // 8034AEAC
  if (crb(c,2)) { goto L_8034AF04; } // 8034AEB0
  c->r[5]=R32(c->r[8]+0x00000004u); // 8034AEB4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034AEB8
  c->r[4]=c->r[8]+c->r[5]; // 8034AEBC
  c->r[4]=c->r[4]+0x00000010u; // 8034AEC0
  cmpu(c,0,c->r[4],c->r[0]); // 8034AEC4
  if (!crb(c,2)) { goto L_8034AF04; } // 8034AEC8
  c->r[5]=R32(c->r[8]+0x00000008u); // 8034AECC
  W32(c->r[1]+0x00000008u,c->r[8]); // 8034AED0
  cmps(c,0,(int32_t)c->r[5],0); // 8034AED4
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8034AED8
  if (crb(c,2)) { goto L_8034AEE8; } // 8034AEDC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8034AEE0
  goto L_8034AEEC; // 8034AEE4
L_8034AEE8:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 8034AEE8
L_8034AEEC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8034AEEC
  if (crb(c,2)) { goto L_8034AEFC; } // 8034AEF0
  W32(c->r[4]+0x00000008u,c->r[5]); // 8034AEF4
  goto L_8034AF00; // 8034AEF8
L_8034AEFC:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 8034AEFC
L_8034AF00:;
  c->r[8]=c->r[5]|c->r[5]; // 8034AF00
L_8034AF04:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8034AF04
  c->r[5]=R32(c->r[1]+0x00000008u); // 8034AF08
  c->r[0]=c->r[6]-c->r[5]; // 8034AF0C
  cmpu(c,0,c->r[0],0x00000010u); // 8034AF10
  if (!crb(c,0)) { goto L_8034AF20; } // 8034AF14
  c->r[3]=0u+0x00000000u; // 8034AF18
  goto L_8034AF7C; // 8034AF1C
L_8034AF20:;
  c->r[4]=0u+0x00004652u; // 8034AF20
  c->r[0]=c->r[5]+0x00000010u; // 8034AF24
  W16(c->r[5]+0x00000000u,c->r[4]); // 8034AF28
  c->r[4]=0u+0x00000000u; // 8034AF2C
  c->r[0]=c->r[6]-c->r[0]; // 8034AF30
  cmps(c,0,(int32_t)c->r[8],0); // 8034AF34
  W16(c->r[5]+0x00000002u,c->r[4]); // 8034AF38
  W32(c->r[5]+0x00000004u,c->r[0]); // 8034AF3C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8034AF40
  W32(c->r[5]+0x00000008u,c->r[8]); // 8034AF44
  if (crb(c,2)) { goto L_8034AF58; } // 8034AF48
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8034AF4C
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 8034AF50
  goto L_8034AF60; // 8034AF54
L_8034AF58:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8034AF58
  W32(c->r[3]+0x00000000u,c->r[5]); // 8034AF5C
L_8034AF60:;
  cmps(c,0,(int32_t)c->r[4],0); // 8034AF60
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8034AF64
  if (crb(c,2)) { goto L_8034AF74; } // 8034AF68
  W32(c->r[4]+0x00000008u,c->r[5]); // 8034AF6C
  goto L_8034AF78; // 8034AF70
L_8034AF74:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 8034AF74
L_8034AF78:;
  c->r[3]=0u+0x00000001u; // 8034AF78
L_8034AF7C:;
  c->r[1]=c->r[1]+0x00000010u; // 8034AF7C
  return; // 8034AF80
}

// MEMCreateExpHeapEx
void f_8034AF84(Ctx* __restrict c) {
  trace_call(0x8034AF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034AF84
  c->r[0]=c->lr; // 8034AF88
  c->r[4]=c->r[4]+c->r[3]; // 8034AF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034AF90
  c->r[0]=c->r[3]+0x00000003u; // 8034AF94
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8034AF98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034AF9C
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8034AFA0
  cmpu(c,0,c->r[31],c->r[6]); // 8034AFA4
  if (crb(c,1)) { goto L_8034AFB8; } // 8034AFA8
  c->r[0]=c->r[6]-c->r[31]; // 8034AFAC
  cmpu(c,0,c->r[0],0x00000064u); // 8034AFB0
  if (!crb(c,0)) { goto L_8034AFC0; } // 8034AFB4
L_8034AFB8:;
  c->r[3]=0u+0x00000000u; // 8034AFB8
  goto L_8034B020; // 8034AFBC
L_8034AFC0:;
  c->r[4]=0u+0x45580000u; // 8034AFC0
  c->r[7]=c->r[5]|c->r[5]; // 8034AFC4
  c->r[3]=c->r[31]|c->r[31]; // 8034AFC8
  c->r[5]=c->r[31]+0x00000050u; // 8034AFCC
  c->r[4]=c->r[4]+0x00005048u; // 8034AFD0
  c->lr=0x8034AFD8u; f_8034A748(c); // 8034AFD4
  c->r[5]=0u+0x00000000u; // 8034AFD8
  c->r[4]=0u+0x00004652u; // 8034AFDC
  W16(c->r[31]+0x0000004Cu,c->r[5]); // 8034AFE0
  c->r[3]=c->r[31]|c->r[31]; // 8034AFE4
  W16(c->r[31]+0x0000004Eu,c->r[5]); // 8034AFE8
  c->r[6]=R32(c->r[31]+0x00000018u); // 8034AFEC
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 8034AFF0
  c->r[0]=c->r[6]+0x00000010u; // 8034AFF4
  W16(c->r[6]+0x00000000u,c->r[4]); // 8034AFF8
  c->r[0]=c->r[7]-c->r[0]; // 8034AFFC
  W16(c->r[6]+0x00000002u,c->r[5]); // 8034B000
  W32(c->r[6]+0x00000004u,c->r[0]); // 8034B004
  W32(c->r[6]+0x00000008u,c->r[5]); // 8034B008
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 8034B00C
  W32(c->r[31]+0x0000003Cu,c->r[6]); // 8034B010
  W32(c->r[31]+0x00000040u,c->r[6]); // 8034B014
  W32(c->r[31]+0x00000044u,c->r[5]); // 8034B018
  W32(c->r[31]+0x00000048u,c->r[5]); // 8034B01C
L_8034B020:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034B020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034B024
  c->lr=c->r[0]; // 8034B028
  c->r[1]=c->r[1]+0x00000010u; // 8034B02C
  return; // 8034B030
}

// fn_8034B034
void f_8034B034(Ctx* __restrict c) {
  trace_call(0x8034B034u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B034
  c->r[0]=c->lr; // 8034B038
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034B03C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034B040
  c->r[31]=c->r[3]|c->r[3]; // 8034B044
  c->lr=0x8034B04Cu; f_8034A908(c); // 8034B048
  c->r[3]=c->r[31]|c->r[31]; // 8034B04C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034B050
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034B054
  c->lr=c->r[0]; // 8034B058
  c->r[1]=c->r[1]+0x00000010u; // 8034B05C
  return; // 8034B060
}

// MEMAllocFromExpHeapEx
void f_8034B064(Ctx* __restrict c) {
  trace_call(0x8034B064u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B064
  c->r[0]=c->lr; // 8034B068
  cmps(c,0,(int32_t)c->r[4],0); // 8034B06C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034B070
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034B074
  c->r[31]=c->r[5]|c->r[5]; // 8034B078
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034B07C
  c->r[30]=c->r[4]|c->r[4]; // 8034B080
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034B084
  c->r[29]=c->r[3]|c->r[3]; // 8034B088
  if (!crb(c,2)) { goto L_8034B094; } // 8034B08C
  c->r[30]=0u+0x00000001u; // 8034B090
L_8034B094:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 8034B094
  c->r[4]=c->r[30]+0x00000003u; // 8034B098
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8034B09C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8034B0A0
  if (crb(c,2)) { goto L_8034B0B0; } // 8034B0A4
  c->r[3]=c->r[3]+0x00000020u; // 8034B0A8
  c->lr=0x8034B0B0u; f_80323888(c); // 8034B0AC
L_8034B0B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034B0B0
  if (crb(c,0)) { goto L_8034B0CC; } // 8034B0B4
  c->r[3]=c->r[29]|c->r[29]; // 8034B0B8
  c->r[4]=c->r[30]|c->r[30]; // 8034B0BC
  c->r[5]=c->r[31]|c->r[31]; // 8034B0C0
  c->lr=0x8034B0C8u; f_8034AC78(c); // 8034B0C4
  goto L_8034B0DC; // 8034B0C8
L_8034B0CC:;
  c->r[3]=c->r[29]|c->r[29]; // 8034B0CC
  c->r[4]=c->r[30]|c->r[30]; // 8034B0D0
  c->r[5]=0u-c->r[31]; // 8034B0D4
  c->lr=0x8034B0DCu; f_8034AD54(c); // 8034B0D8
L_8034B0DC:;
  c->r[0]=R32(c->r[29]+0x00000038u); // 8034B0DC
  c->r[31]=c->r[3]|c->r[3]; // 8034B0E0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8034B0E4
  if (crb(c,2)) { goto L_8034B0F4; } // 8034B0E8
  c->r[3]=c->r[29]+0x00000020u; // 8034B0EC
  c->lr=0x8034B0F4u; f_80323964(c); // 8034B0F0
L_8034B0F4:;
  c->r[3]=c->r[31]|c->r[31]; // 8034B0F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034B0F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034B0FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034B100
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034B104
  c->lr=c->r[0]; // 8034B108
  c->r[1]=c->r[1]+0x00000020u; // 8034B10C
  return; // 8034B110
}

// fn_8034B114
void f_8034B114(Ctx* __restrict c) {
  trace_call(0x8034B114u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B114
  c->r[0]=c->lr; // 8034B118
  cmps(c,0,(int32_t)c->r[4],0); // 8034B11C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034B120
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034B124
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034B128
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034B12C
  c->r[29]=c->r[3]|c->r[3]; // 8034B130
  if (crb(c,2)) { goto L_8034B1C4; } // 8034B134
  c->r[0]=R32(c->r[3]+0x00000038u); // 8034B138
  c->r[31]=c->r[3]+0x0000003Cu; // 8034B13C
  c->r[30]=c->r[4]+0xFFFFFFF0u; // 8034B140
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8034B144
  if (crb(c,2)) { goto L_8034B154; } // 8034B148
  c->r[3]=c->r[3]+0x00000020u; // 8034B14C
  c->lr=0x8034B154u; f_80323888(c); // 8034B150
L_8034B154:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 8034B154
  c->r[0]=rotl(c->r[0],24)&0x0000007Fu; // 8034B158
  c->r[0]=c->r[30]-c->r[0]; // 8034B15C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034B160
  c->r[0]=R32(c->r[30]+0x00000004u); // 8034B164
  c->r[3]=c->r[30]+c->r[0]; // 8034B168
  c->r[0]=c->r[3]+0x00000010u; // 8034B16C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034B170
  c->r[4]=R32(c->r[30]+0x00000008u); // 8034B174
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8034B178
  cmps(c,0,(int32_t)c->r[4],0); // 8034B17C
  if (crb(c,2)) { goto L_8034B18C; } // 8034B180
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8034B184
  goto L_8034B190; // 8034B188
L_8034B18C:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 8034B18C
L_8034B190:;
  cmps(c,0,(int32_t)c->r[3],0); // 8034B190
  if (crb(c,2)) { goto L_8034B1A0; } // 8034B194
  W32(c->r[3]+0x00000008u,c->r[4]); // 8034B198
  goto L_8034B1A4; // 8034B19C
L_8034B1A0:;
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8034B1A0
L_8034B1A4:;
  c->r[3]=c->r[31]|c->r[31]; // 8034B1A4
  c->r[4]=c->r[1]+0x00000008u; // 8034B1A8
  c->lr=0x8034B1B0u; f_8034AE1C(c); // 8034B1AC
  c->r[0]=R32(c->r[29]+0x00000038u); // 8034B1B0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8034B1B4
  if (crb(c,2)) { goto L_8034B1C4; } // 8034B1B8
  c->r[3]=c->r[29]+0x00000020u; // 8034B1BC
  c->lr=0x8034B1C4u; f_80323964(c); // 8034B1C0
L_8034B1C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034B1C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034B1C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034B1CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034B1D0
  c->lr=c->r[0]; // 8034B1D4
  c->r[1]=c->r[1]+0x00000020u; // 8034B1D8
  return; // 8034B1DC
}

// AllocatorAllocForExpHeap_
void f_8034B1E0(Ctx* __restrict c) {
  trace_call(0x8034B1E0u);
  c->r[5]=c->r[3]|c->r[3]; // 8034B1E0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8034B1E4
  c->r[5]=R32(c->r[5]+0x00000008u); // 8034B1E8
  f_8034B064(c); return; // 8034B1EC
}

// fn_8034B1F0
void f_8034B1F0(Ctx* __restrict c) {
  trace_call(0x8034B1F0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8034B1F0
  f_8034B114(c); return; // 8034B1F4
}

// MEMAllocFromAllocator
void f_8034B1F8(Ctx* __restrict c) {
  trace_call(0x8034B1F8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8034B1F8
  c->r[12]=R32(c->r[5]+0x00000000u); // 8034B1FC
  c->ctr=c->r[12]; // 8034B200
  if (true) { dispatch(c,c->ctr); return; } // 8034B204
}

// MEMFreeToAllocator
void f_8034B208(Ctx* __restrict c) {
  trace_call(0x8034B208u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 8034B208
  c->r[12]=R32(c->r[5]+0x00000004u); // 8034B20C
  c->ctr=c->r[12]; // 8034B210
  if (true) { dispatch(c,c->ctr); return; } // 8034B214
}

// MEMInitAllocatorForExpHeap
void f_8034B218(Ctx* __restrict c) {
  trace_call(0x8034B218u);
  c->r[6]=c->r[2]+0xFFFF9ED0u; // 8034B218
  c->r[0]=0u+0x00000000u; // 8034B21C
  W32(c->r[3]+0x00000000u,c->r[6]); // 8034B220
  W32(c->r[3]+0x00000004u,c->r[4]); // 8034B224
  W32(c->r[3]+0x00000008u,c->r[5]); // 8034B228
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8034B22C
  return; // 8034B230
}

// MEMInitList
void f_8034B234(Ctx* __restrict c) {
  trace_call(0x8034B234u);
  c->r[0]=0u+0x00000000u; // 8034B234
  W16(c->r[3]+0x0000000Au,c->r[4]); // 8034B238
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B23C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8034B240
  W16(c->r[3]+0x00000008u,c->r[0]); // 8034B244
  return; // 8034B248
}

// MEMAppendListObject
void f_8034B24C(Ctx* __restrict c) {
  trace_call(0x8034B24Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8034B24C
  cmps(c,0,(int32_t)c->r[0],0); // 8034B250
  if (!crb(c,2)) { goto L_8034B284; } // 8034B254
  c->r[5]=R16(c->r[3]+0x0000000Au); // 8034B258
  c->r[0]=0u+0x00000000u; // 8034B25C
  c->r[5]=c->r[4]+c->r[5]; // 8034B260
  W32(c->r[5]+0x00000004u,c->r[0]); // 8034B264
  W32(c->r[5]+0x00000000u,c->r[0]); // 8034B268
  c->r[5]=R16(c->r[3]+0x00000008u); // 8034B26C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8034B270
  c->r[0]=c->r[5]+0x00000001u; // 8034B274
  W32(c->r[3]+0x00000004u,c->r[4]); // 8034B278
  W16(c->r[3]+0x00000008u,c->r[0]); // 8034B27C
  return; // 8034B280
L_8034B284:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 8034B284
  c->r[0]=0u+0x00000000u; // 8034B288
  c->r[5]=R32(c->r[3]+0x00000004u); // 8034B28C
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 8034B290
  W32(c->r[6]+0x00000004u,c->r[0]); // 8034B294
  c->r[5]=R32(c->r[3]+0x00000004u); // 8034B298
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8034B29C
  c->r[5]=c->r[5]+c->r[0]; // 8034B2A0
  W32(c->r[5]+0x00000004u,c->r[4]); // 8034B2A4
  c->r[5]=R16(c->r[3]+0x00000008u); // 8034B2A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 8034B2AC
  c->r[0]=c->r[5]+0x00000001u; // 8034B2B0
  W16(c->r[3]+0x00000008u,c->r[0]); // 8034B2B4
  return; // 8034B2B8
}

// MEMRemoveListObject
void f_8034B2BC(Ctx* __restrict c) {
  trace_call(0x8034B2BCu);
  c->r[5]=R16(c->r[3]+0x0000000Au); // 8034B2BC
  c->r[6]=c->r[4]+c->r[5]; // 8034B2C0
  c->r[4]=R32(c->r[4]+c->r[5]); // 8034B2C4
  cmps(c,0,(int32_t)c->r[4],0); // 8034B2C8
  if (!crb(c,2)) { goto L_8034B2DC; } // 8034B2CC
  c->r[0]=R32(c->r[6]+0x00000004u); // 8034B2D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B2D4
  goto L_8034B2E8; // 8034B2D8
L_8034B2DC:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 8034B2DC
  c->r[4]=c->r[4]+c->r[5]; // 8034B2E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 8034B2E4
L_8034B2E8:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 8034B2E8
  cmps(c,0,(int32_t)c->r[5],0); // 8034B2EC
  if (!crb(c,2)) { goto L_8034B300; } // 8034B2F0
  c->r[0]=R32(c->r[6]+0x00000000u); // 8034B2F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8034B2F8
  goto L_8034B30C; // 8034B2FC
L_8034B300:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8034B300
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8034B304
  W32(c->r[5]+c->r[0],c->r[4]); // 8034B308
L_8034B30C:;
  c->r[0]=0u+0x00000000u; // 8034B30C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8034B310
  W32(c->r[6]+0x00000004u,c->r[0]); // 8034B314
  c->r[4]=R16(c->r[3]+0x00000008u); // 8034B318
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8034B31C
  W16(c->r[3]+0x00000008u,c->r[0]); // 8034B320
  return; // 8034B324
}

// MEMGetNextListObject
void f_8034B328(Ctx* __restrict c) {
  trace_call(0x8034B328u);
  cmps(c,0,(int32_t)c->r[4],0); // 8034B328
  if (!crb(c,2)) { goto L_8034B338; } // 8034B32C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8034B330
  return; // 8034B334
L_8034B338:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8034B338
  c->r[3]=c->r[4]+c->r[0]; // 8034B33C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8034B340
  return; // 8034B344
}

// EUARTInit
void f_8034B348(Ctx* __restrict c) {
  trace_call(0x8034B348u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B348
  c->r[0]=c->lr; // 8034B34C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034B350
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034B354
  c->r[0]=R32(c->r[13]+0xFFFFEED8u); // 8034B358
  cmps(c,0,(int32_t)c->r[0],0); // 8034B35C
  if (crb(c,2)) { goto L_8034B36C; } // 8034B360
  c->r[3]=0u+0x00000001u; // 8034B364
  goto L_8034B430; // 8034B368
L_8034B36C:;
  c->lr=0x8034B370u; f_8031B8F4(c); // 8034B36C
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 8034B370
  if (!crb(c,2)) { goto L_8034B388; } // 8034B374
  c->r[0]=0u+0x00000002u; // 8034B378
  c->r[3]=0u+0x00000000u; // 8034B37C
  W32(c->r[13]+0xFFFFEEDCu,c->r[0]); // 8034B380
  goto L_8034B430; // 8034B384
L_8034B388:;
  c->lr=0x8034B38Cu; f_8032269C(c); // 8034B388
  c->r[0]=0u+0x000000F2u; // 8034B38C
  c->r[31]=c->r[3]|c->r[3]; // 8034B390
  W8(c->r[1]+0x00000008u,c->r[0]); // 8034B394
  c->r[6]=c->r[1]+0x00000008u; // 8034B398
  c->r[3]=0u+0x00000000u; // 8034B39C
  c->r[4]=0u+0x00000001u; // 8034B3A0
  c->r[5]=0u+0xB0000000u; // 8034B3A4
  c->r[7]=0u+0x00000001u; // 8034B3A8
  c->lr=0x8034B3B0u; f_8031A364(c); // 8034B3AC
  cmps(c,0,(int32_t)c->r[3],0); // 8034B3B0
  if (!crb(c,2)) { goto L_8034B3D0; } // 8034B3B4
  c->r[0]=0u+0x00000005u; // 8034B3B8
  c->r[3]=c->r[31]|c->r[31]; // 8034B3BC
  W32(c->r[13]+0xFFFFEEDCu,c->r[0]); // 8034B3C0
  c->lr=0x8034B3C8u; f_803226C4(c); // 8034B3C4
  c->r[3]=0u+0x00000000u; // 8034B3C8
  goto L_8034B430; // 8034B3CC
L_8034B3D0:;
  c->r[0]=0u+0x000000F3u; // 8034B3D0
  c->r[6]=c->r[1]+0x00000008u; // 8034B3D4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8034B3D8
  c->r[3]=0u+0x00000000u; // 8034B3DC
  c->r[4]=0u+0x00000001u; // 8034B3E0
  c->r[5]=0u+0xB0000000u; // 8034B3E4
  c->r[7]=0u+0x00000001u; // 8034B3E8
  c->lr=0x8034B3F0u; f_8031A364(c); // 8034B3EC
  cmps(c,0,(int32_t)c->r[3],0); // 8034B3F0
  if (!crb(c,2)) { goto L_8034B410; } // 8034B3F4
  c->r[0]=0u+0x00000005u; // 8034B3F8
  c->r[3]=c->r[31]|c->r[31]; // 8034B3FC
  W32(c->r[13]+0xFFFFEEDCu,c->r[0]); // 8034B400
  c->lr=0x8034B408u; f_803226C4(c); // 8034B404
  c->r[3]=0u+0x00000000u; // 8034B408
  goto L_8034B430; // 8034B40C
L_8034B410:;
  c->r[3]=c->r[31]|c->r[31]; // 8034B410
  c->lr=0x8034B418u; f_803226C4(c); // 8034B414
  c->r[0]=0u+0x00000000u; // 8034B418
  c->r[3]=0u+0x00000001u; // 8034B41C
  W32(c->r[13]+0xFFFFEED8u,c->r[3]); // 8034B420
  c->r[3]=0u+0x00000001u; // 8034B424
  W32(c->r[13]+0xFFFFEEDCu,c->r[0]); // 8034B428
  W32(c->r[13]+0xFFFFEEE0u,c->r[0]); // 8034B42C
L_8034B430:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034B430
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034B434
  c->lr=c->r[0]; // 8034B438
  c->r[1]=c->r[1]+0x00000020u; // 8034B43C
  return; // 8034B440
}

// InitializeUART
void f_8034B444(Ctx* __restrict c) {
  trace_call(0x8034B444u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B444
  c->r[0]=c->lr; // 8034B448
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034B44C
  c->lr=0x8034B454u; f_8031B8F4(c); // 8034B450
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 8034B454
  if (!crb(c,2)) { goto L_8034B46C; } // 8034B458
  c->r[0]=0u+0x00000000u; // 8034B45C
  c->r[3]=0u+0x00000002u; // 8034B460
  W32(c->r[13]+0xFFFFEEE4u,c->r[0]); // 8034B464
  goto L_8034B47C; // 8034B468
L_8034B46C:;
  c->r[4]=0u+0xA5FF0000u; // 8034B46C
  c->r[3]=0u+0x00000000u; // 8034B470
  c->r[0]=c->r[4]+0x0000005Au; // 8034B474
  W32(c->r[13]+0xFFFFEEE4u,c->r[0]); // 8034B478
L_8034B47C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034B47C
  c->lr=c->r[0]; // 8034B480
  c->r[1]=c->r[1]+0x00000010u; // 8034B484
  return; // 8034B488
}

// WriteUARTN
void f_8034B48C(Ctx* __restrict c) {
  trace_call(0x8034B48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B48C
  c->r[0]=c->lr; // 8034B490
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034B494
  c->r[11]=c->r[1]+0x00000030u; // 8034B498
  c->lr=0x8034B4A0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034B49C
  c->r[5]=R32(c->r[13]+0xFFFFEEE4u); // 8034B4A0
  c->r[30]=c->r[3]|c->r[3]; // 8034B4A4
  c->r[31]=c->r[4]|c->r[4]; // 8034B4A8
  c->r[0]=c->r[5]+0x5A010000u; // 8034B4AC
  cmpu(c,0,c->r[0],0x0000005Au); // 8034B4B0
  if (crb(c,2)) { goto L_8034B4C0; } // 8034B4B4
  c->r[3]=0u+0x00000002u; // 8034B4B8
  goto L_8034B6A0; // 8034B4BC
L_8034B4C0:;
  c->r[0]=R32(c->r[13]+0xFFFFEED8u); // 8034B4C0
  cmps(c,0,(int32_t)c->r[0],0); // 8034B4C4
  if (!crb(c,2)) { goto L_8034B4E0; } // 8034B4C8
  c->lr=0x8034B4D0u; f_8034B348(c); // 8034B4CC
  cmps(c,0,(int32_t)c->r[3],0); // 8034B4D0
  if (!crb(c,2)) { goto L_8034B4E0; } // 8034B4D4
  c->r[3]=0u+0x00000002u; // 8034B4D8
  goto L_8034B6A0; // 8034B4DC
L_8034B4E0:;
  c->r[0]=R32(c->r[13]+0xFFFFEED8u); // 8034B4E0
  cmps(c,0,(int32_t)c->r[0],0); // 8034B4E4
  if (!crb(c,2)) { goto L_8034B4FC; } // 8034B4E8
  c->r[0]=0u+0x00000001u; // 8034B4EC
  c->r[3]=0u+0x00000002u; // 8034B4F0
  W32(c->r[13]+0xFFFFEEDCu,c->r[0]); // 8034B4F4
  goto L_8034B6A0; // 8034B4F8
L_8034B4FC:;
  c->r[3]=0u+0x00000000u; // 8034B4FC
  c->r[4]=0u+0x00000001u; // 8034B500
  c->r[5]=0u+0x00000000u; // 8034B504
  c->lr=0x8034B50Cu; f_80319A88(c); // 8034B508
  cmps(c,0,(int32_t)c->r[3],0); // 8034B50C
  if (!crb(c,2)) { goto L_8034B51C; } // 8034B510
  c->r[3]=0u+0x00000000u; // 8034B514
  goto L_8034B6A0; // 8034B518
L_8034B51C:;
  c->r[4]=c->r[30]|c->r[30]; // 8034B51C
  c->r[3]=0u+0x0000000Du; // 8034B520
  goto L_8034B53C; // 8034B524
L_8034B528:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8034B528
  cmps(c,0,(int32_t)c->r[0],10); // 8034B52C
  if (!crb(c,2)) { goto L_8034B538; } // 8034B530
  W8(c->r[4]+0x00000000u,c->r[3]); // 8034B534
L_8034B538:;
  c->r[4]=c->r[4]+0x00000001u; // 8034B538
L_8034B53C:;
  c->r[0]=c->r[4]-c->r[30]; // 8034B53C
  cmpu(c,0,c->r[0],c->r[31]); // 8034B540
  if (crb(c,0)) { IRQCHK(c); goto L_8034B528; } // 8034B544
  c->r[3]=0u+0xB0000000u; // 8034B548
  c->r[28]=R32(c->r[2]+0xFFFF9C98u); // 8034B54C
  c->r[0]=c->r[3]+0x00000100u; // 8034B550
  c->r[26]=0u+0x00000000u; // 8034B554
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034B558
  c->r[29]=0u+0x30000000u; // 8034B55C
  goto L_8034B68C; // 8034B560
L_8034B564:;
  c->r[5]=c->r[28]|c->r[28]; // 8034B564
  c->r[3]=0u+0x00000000u; // 8034B568
  c->r[4]=0u+0x00000001u; // 8034B56C
  c->lr=0x8034B574u; f_803192F4(c); // 8034B570
  cmps(c,0,(int32_t)c->r[3],0); // 8034B574
  if (!crb(c,2)) { goto L_8034B584; } // 8034B578
  c->r[27]=0u+0xFFFFFFFFu; // 8034B57C
  goto L_8034B5E0; // 8034B580
L_8034B584:;
  c->r[0]=c->r[29]+0x00000100u; // 8034B584
  c->r[4]=c->r[1]+0x00000008u; // 8034B588
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034B58C
  c->r[3]=0u+0x00000000u; // 8034B590
  c->r[5]=0u+0x00000004u; // 8034B594
  c->r[6]=0u+0x00000001u; // 8034B598
  c->r[7]=0u+0x00000000u; // 8034B59C
  c->lr=0x8034B5A4u; f_8031888C(c); // 8034B5A0
  c->r[3]=0u+0x00000000u; // 8034B5A4
  c->lr=0x8034B5ACu; f_80318CA4(c); // 8034B5A8
  c->r[4]=c->r[1]+0x0000000Cu; // 8034B5AC
  c->r[3]=0u+0x00000000u; // 8034B5B0
  c->r[5]=0u+0x00000004u; // 8034B5B4
  c->r[6]=0u+0x00000000u; // 8034B5B8
  c->r[7]=0u+0x00000000u; // 8034B5BC
  c->lr=0x8034B5C4u; f_8031888C(c); // 8034B5C0
  c->r[3]=0u+0x00000000u; // 8034B5C4
  c->lr=0x8034B5CCu; f_80318CA4(c); // 8034B5C8
  c->r[3]=0u+0x00000000u; // 8034B5CC
  c->lr=0x8034B5D4u; f_80319424(c); // 8034B5D0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8034B5D4
  c->r[0]=rotl(c->r[0],8)&0x0000003Fu; // 8034B5D8
  c->r[27]=addc(c,~c->r[0],0x00000020u,1); // 8034B5DC
L_8034B5E0:;
  cmps(c,0,(int32_t)c->r[27],0); // 8034B5E0
  if (!crb(c,0)) { goto L_8034B5F0; } // 8034B5E4
  c->r[26]=0u+0x00000003u; // 8034B5E8
  goto L_8034B694; // 8034B5EC
L_8034B5F0:;
  cmps(c,0,(int32_t)c->r[27],32); // 8034B5F0
  if (!crb(c,2)) { goto L_8034B68C; } // 8034B5F4
  c->r[5]=c->r[28]|c->r[28]; // 8034B5F8
  c->r[3]=0u+0x00000000u; // 8034B5FC
  c->r[4]=0u+0x00000001u; // 8034B600
  c->lr=0x8034B608u; f_803192F4(c); // 8034B604
  cmps(c,0,(int32_t)c->r[3],0); // 8034B608
  if (!crb(c,2)) { goto L_8034B618; } // 8034B60C
  c->r[26]=0u+0x00000003u; // 8034B610
  goto L_8034B694; // 8034B614
L_8034B618:;
  c->r[4]=c->r[1]+0x00000014u; // 8034B618
  c->r[3]=0u+0x00000000u; // 8034B61C
  c->r[5]=0u+0x00000004u; // 8034B620
  c->r[6]=0u+0x00000001u; // 8034B624
  c->r[7]=0u+0x00000000u; // 8034B628
  c->lr=0x8034B630u; f_8031888C(c); // 8034B62C
  c->r[3]=0u+0x00000000u; // 8034B630
  c->lr=0x8034B638u; f_80318CA4(c); // 8034B634
  goto L_8034B674; // 8034B638
L_8034B63C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8034B63C
  c->r[4]=c->r[1]+0x00000010u; // 8034B640
  c->r[3]=0u+0x00000000u; // 8034B644
  c->r[5]=0u+0x00000004u; // 8034B648
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 8034B64C
  c->r[6]=0u+0x00000001u; // 8034B650
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034B654
  c->r[7]=0u+0x00000000u; // 8034B658
  c->lr=0x8034B660u; f_8031888C(c); // 8034B65C
  c->r[3]=0u+0x00000000u; // 8034B660
  c->lr=0x8034B668u; f_80318CA4(c); // 8034B664
  c->r[30]=c->r[30]+0x00000001u; // 8034B668
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 8034B66C
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 8034B670
L_8034B674:;
  cmps(c,0,(int32_t)c->r[27],0); // 8034B674
  if (!crb(c,1)) { goto L_8034B684; } // 8034B678
  cmps(c,0,(int32_t)c->r[31],0); // 8034B67C
  if (!crb(c,2)) { IRQCHK(c); goto L_8034B63C; } // 8034B680
L_8034B684:;
  c->r[3]=0u+0x00000000u; // 8034B684
  c->lr=0x8034B68Cu; f_80319424(c); // 8034B688
L_8034B68C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034B68C
  if (!crb(c,2)) { IRQCHK(c); goto L_8034B564; } // 8034B690
L_8034B694:;
  c->r[3]=0u+0x00000000u; // 8034B694
  c->lr=0x8034B69Cu; f_80319B84(c); // 8034B698
  c->r[3]=c->r[26]|c->r[26]; // 8034B69C
L_8034B6A0:;
  c->r[11]=c->r[1]+0x00000030u; // 8034B6A0
  c->lr=0x8034B6A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034B6A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034B6A8
  c->lr=c->r[0]; // 8034B6AC
  c->r[1]=c->r[1]+0x00000030u; // 8034B6B0
  return; // 8034B6B4
}

// ISFS_OpenLib
void f_8034B6B8(Ctx* __restrict c) {
  trace_call(0x8034B6B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B6B8
  c->r[0]=c->lr; // 8034B6BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034B6C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034B6C4
  c->r[31]=0u+0x00000000u; // 8034B6C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034B6CC
  c->r[0]=R32(c->r[13]+0xFFFFEEE8u); // 8034B6D0
  cmps(c,0,(int32_t)c->r[0],0); // 8034B6D4
  if (!crb(c,2)) { goto L_8034B6EC; } // 8034B6D8
  c->lr=0x8034B6E0u; f_8034CCC8(c); // 8034B6DC
  W32(c->r[13]+0xFFFFEEF4u,c->r[3]); // 8034B6E0
  c->lr=0x8034B6E8u; f_8034CCC0(c); // 8034B6E4
  W32(c->r[13]+0xFFFFEEF8u,c->r[3]); // 8034B6E8
L_8034B6EC:;
  c->r[3]=R32(c->r[13]+0xFFFFEEF4u); // 8034B6EC
  c->r[0]=R32(c->r[13]+0xFFFFEEE8u); // 8034B6F0
  c->r[3]=c->r[3]+0x0000001Fu; // 8034B6F4
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFE0u; // 8034B6F8
  cmps(c,0,(int32_t)c->r[0],0); // 8034B6FC
  W32(c->r[13]+0xFFFFEEECu,c->r[3]); // 8034B700
  if (!crb(c,2)) { goto L_8034B730; } // 8034B704
  c->r[0]=R32(c->r[13]+0xFFFFEEF8u); // 8034B708
  c->r[4]=c->r[3]+0x00000040u; // 8034B70C
  cmpu(c,0,c->r[4],c->r[0]); // 8034B710
  if (!crb(c,1)) { goto L_8034B730; } // 8034B714
  c->r[3]=0u+0x80460000u; // 8034B718
  c->r[3]=c->r[3]+0xFFFF9990u; // 8034B71C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8034B720
  c->lr=0x8034B728u; f_8031E9FC(c); // 8034B724
  c->r[31]=0u+0xFFFFFFEAu; // 8034B728
  goto L_8034B7C4; // 8034B72C
L_8034B730:;
  c->r[4]=c->r[13]+0xFFFFDAB8u; // 8034B730
  c->lr=0x8034B738u; f_803A6F10(c); // 8034B734
  c->r[3]=R32(c->r[13]+0xFFFFEEECu); // 8034B738
  c->r[4]=0u+0x00000000u; // 8034B73C
  c->lr=0x8034B744u; f_8034D588(c); // 8034B740
  cmps(c,0,(int32_t)c->r[3],0); // 8034B744
  W32(c->r[13]+0xFFFFDAB0u,c->r[3]); // 8034B748
  if (!crb(c,0)) { goto L_8034B758; } // 8034B74C
  c->r[31]=c->r[3]|c->r[3]; // 8034B750
  goto L_8034B7C4; // 8034B754
L_8034B758:;
  c->r[4]=R32(c->r[13]+0xFFFFEEE8u); // 8034B758
  c->r[30]=R32(c->r[13]+0xFFFFEEECu); // 8034B75C
  cmps(c,0,(int32_t)c->r[4],0); // 8034B760
  if (!crb(c,2)) { goto L_8034B790; } // 8034B764
  c->r[0]=R32(c->r[13]+0xFFFFEEF8u); // 8034B768
  c->r[3]=c->r[30]+0x00001540u; // 8034B76C
  cmpu(c,0,c->r[3],c->r[0]); // 8034B770
  if (!crb(c,1)) { goto L_8034B790; } // 8034B774
  c->r[3]=0u+0x80460000u; // 8034B778
  c->r[3]=c->r[3]+0xFFFF9990u; // 8034B77C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8034B780
  c->lr=0x8034B788u; f_8031E9FC(c); // 8034B784
  c->r[31]=0u+0xFFFFFFEAu; // 8034B788
  goto L_8034B7C4; // 8034B78C
L_8034B790:;
  cmps(c,0,(int32_t)c->r[4],0); // 8034B790
  if (!crb(c,2)) { goto L_8034B7A8; } // 8034B794
  c->r[3]=c->r[30]+0x00001540u; // 8034B798
  c->lr=0x8034B7A0u; f_8034CCD0(c); // 8034B79C
  c->r[0]=0u+0x00000001u; // 8034B7A0
  W32(c->r[13]+0xFFFFEEE8u,c->r[0]); // 8034B7A4
L_8034B7A8:;
  c->r[3]=c->r[30]|c->r[30]; // 8034B7A8
  c->r[4]=0u+0x00001540u; // 8034B7AC
  c->lr=0x8034B7B4u; f_8034E560(c); // 8034B7B0
  cmps(c,0,(int32_t)c->r[3],0); // 8034B7B4
  W32(c->r[13]+0xFFFFEEFCu,c->r[3]); // 8034B7B8
  if (!crb(c,0)) { goto L_8034B7C4; } // 8034B7BC
  c->r[31]=0u+0xFFFFFFEAu; // 8034B7C0
L_8034B7C4:;
  c->r[3]=c->r[31]|c->r[31]; // 8034B7C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034B7C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034B7CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034B7D0
  c->lr=c->r[0]; // 8034B7D4
  c->r[1]=c->r[1]+0x00000010u; // 8034B7D8
  return; // 8034B7DC
}

// _isfsFuncCb
void f_8034B7E0(Ctx* __restrict c) {
  trace_call(0x8034B7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B7E0
  c->r[0]=c->lr; // 8034B7E4
  cmps(c,1,(int32_t)c->r[3],0); // 8034B7E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034B7EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034B7F0
  c->r[31]=c->r[4]|c->r[4]; // 8034B7F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034B7F8
  c->r[30]=c->r[3]|c->r[3]; // 8034B7FC
  if (crb(c,4)) { goto L_8034B90C; } // 8034B800
  c->r[0]=R32(c->r[4]+0x00000108u); // 8034B804
  cmps(c,0,(int32_t)c->r[0],3); // 8034B808
  if (crb(c,2)) { goto L_8034B86C; } // 8034B80C
  if (!crb(c,0)) { goto L_8034B824; } // 8034B810
  cmps(c,0,(int32_t)c->r[0],1); // 8034B814
  if (crb(c,2)) { goto L_8034B834; } // 8034B818
  if (!crb(c,0)) { goto L_8034B848; } // 8034B81C
  goto L_8034B90C; // 8034B820
L_8034B824:;
  cmps(c,0,(int32_t)c->r[0],5); // 8034B824
  if (crb(c,2)) { goto L_8034B8FC; } // 8034B828
  if (!crb(c,0)) { goto L_8034B90C; } // 8034B82C
  goto L_8034B8C4; // 8034B830
L_8034B834:;
  if (!crb(c,6)) { goto L_8034B90C; } // 8034B834
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 8034B838
  c->r[5]=0u+0x0000001Cu; // 8034B83C
  c->lr=0x8034B844u; f_8000626C(c); // 8034B840
  goto L_8034B90C; // 8034B844
L_8034B848:;
  if (!crb(c,6)) { goto L_8034B90C; } // 8034B848
  c->r[0]=c->r[4]+0x0000003Fu; // 8034B84C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 8034B850
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034B854
  c->r[0]=c->r[4]+0x0000005Fu; // 8034B858
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034B85C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034B860
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B864
  goto L_8034B90C; // 8034B868
L_8034B86C:;
  if (!crb(c,6)) { goto L_8034B90C; } // 8034B86C
  c->r[0]=c->r[4]+0x0000005Fu; // 8034B870
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 8034B874
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034B878
  c->r[0]=R32(c->r[5]+0x00000000u); // 8034B87C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B880
  c->r[0]=R16(c->r[5]+0x00000004u); // 8034B884
  c->r[3]=R32(c->r[4]+0x00000110u); // 8034B888
  W16(c->r[3]+0x00000000u,c->r[0]); // 8034B88C
  c->r[0]=R8(c->r[5]+0x00000049u); // 8034B890
  c->r[3]=R32(c->r[4]+0x00000114u); // 8034B894
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B898
  c->r[0]=R8(c->r[5]+0x00000046u); // 8034B89C
  c->r[3]=R32(c->r[4]+0x00000118u); // 8034B8A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B8A4
  c->r[0]=R8(c->r[5]+0x00000047u); // 8034B8A8
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 8034B8AC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B8B0
  c->r[0]=R8(c->r[5]+0x00000048u); // 8034B8B4
  c->r[3]=R32(c->r[4]+0x00000120u); // 8034B8B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B8BC
  goto L_8034B90C; // 8034B8C0
L_8034B8C4:;
  if (!crb(c,6)) { goto L_8034B90C; } // 8034B8C4
  c->r[0]=c->r[4]+0x0000003Fu; // 8034B8C8
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 8034B8CC
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034B8D0
  c->r[0]=c->r[5]+0x0000005Fu; // 8034B8D4
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034B8D8
  c->r[5]=R32(c->r[6]+0x00000000u); // 8034B8DC
  c->r[0]=c->r[6]+0x00000023u; // 8034B8E0
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034B8E4
  W32(c->r[3]+0x00000000u,c->r[5]); // 8034B8E8
  c->r[0]=R32(c->r[6]+0x00000000u); // 8034B8EC
  c->r[3]=R32(c->r[4]+0x00000110u); // 8034B8F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034B8F4
  goto L_8034B90C; // 8034B8F8
L_8034B8FC:;
  if (!crb(c,6)) { goto L_8034B90C; } // 8034B8FC
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 8034B900
  c->r[5]=0u+0x00000008u; // 8034B904
  c->lr=0x8034B90Cu; f_8000626C(c); // 8034B908
L_8034B90C:;
  c->r[0]=0u+0x00000000u; // 8034B90C
  W32(c->r[13]+0xFFFFEEF0u,c->r[0]); // 8034B910
  c->r[12]=R32(c->r[31]+0x00000100u); // 8034B914
  cmps(c,0,(int32_t)c->r[12],0); // 8034B918
  if (crb(c,2)) { goto L_8034B930; } // 8034B91C
  c->r[3]=c->r[30]|c->r[30]; // 8034B920
  c->r[4]=R32(c->r[31]+0x00000104u); // 8034B924
  c->ctr=c->r[12]; // 8034B928
  if (true) { c->lr=0x8034B930u; dispatch(c,c->ctr); } // 8034B92C
L_8034B930:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034B930
  if (crb(c,2)) { goto L_8034B944; } // 8034B934
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034B938
  c->r[4]=c->r[31]|c->r[31]; // 8034B93C
  c->lr=0x8034B944u; f_8034E898(c); // 8034B940
L_8034B944:;
  c->r[3]=c->r[30]|c->r[30]; // 8034B944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034B948
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034B94C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034B950
  c->lr=c->r[0]; // 8034B954
  c->r[1]=c->r[1]+0x00000010u; // 8034B958
  return; // 8034B95C
}

// ISFS_CreateDir
void f_8034B960(Ctx* __restrict c) {
  trace_call(0x8034B960u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034B960
  c->r[0]=c->lr; // 8034B964
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034B968
  c->r[11]=c->r[1]+0x00000030u; // 8034B96C
  c->lr=0x8034B974u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034B970
  cmps(c,0,(int32_t)c->r[3],0); // 8034B974
  c->r[25]=c->r[3]|c->r[3]; // 8034B978
  c->r[26]=c->r[4]|c->r[4]; // 8034B97C
  c->r[27]=c->r[5]|c->r[5]; // 8034B980
  c->r[28]=c->r[6]|c->r[6]; // 8034B984
  c->r[29]=c->r[7]|c->r[7]; // 8034B988
  c->r[30]=0u+0x00000000u; // 8034B98C
  if (crb(c,2)) { goto L_8034B9B4; } // 8034B990
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034B994
  cmps(c,0,(int32_t)c->r[0],0); // 8034B998
  if (crb(c,0)) { goto L_8034B9B4; } // 8034B99C
  c->r[4]=0u+0x00000040u; // 8034B9A0
  c->lr=0x8034B9A8u; f_8034CCD8(c); // 8034B9A4
  cmpu(c,0,c->r[3],0x00000040u); // 8034B9A8
  c->r[31]=c->r[3]|c->r[3]; // 8034B9AC
  if (!crb(c,2)) { goto L_8034B9BC; } // 8034B9B0
L_8034B9B4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8034B9B4
  goto L_8034BA20; // 8034B9B8
L_8034B9BC:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034B9BC
  c->r[4]=0u+0x00000140u; // 8034B9C0
  c->r[5]=0u+0x00000020u; // 8034B9C4
  c->lr=0x8034B9CCu; f_8034E894(c); // 8034B9C8
  cmps(c,0,(int32_t)c->r[3],0); // 8034B9CC
  c->r[30]=c->r[3]|c->r[3]; // 8034B9D0
  if (!crb(c,2)) { goto L_8034B9E0; } // 8034B9D4
  c->r[31]=0u+0xFFFFFFEAu; // 8034B9D8
  goto L_8034BA20; // 8034B9DC
L_8034B9E0:;
  c->r[4]=c->r[25]|c->r[25]; // 8034B9E0
  c->r[5]=c->r[31]+0x00000001u; // 8034B9E4
  c->r[3]=c->r[3]+0x00000006u; // 8034B9E8
  c->lr=0x8034B9F0u; f_8000626C(c); // 8034B9EC
  W8(c->r[30]+0x00000049u,c->r[26]); // 8034B9F0
  c->r[5]=c->r[30]|c->r[30]; // 8034B9F4
  c->r[4]=0u+0x00000003u; // 8034B9F8
  c->r[6]=0u+0x0000004Cu; // 8034B9FC
  W8(c->r[30]+0x00000046u,c->r[27]); // 8034BA00
  c->r[7]=0u+0x00000000u; // 8034BA04
  c->r[8]=0u+0x00000000u; // 8034BA08
  W8(c->r[30]+0x00000047u,c->r[28]); // 8034BA0C
  W8(c->r[30]+0x00000048u,c->r[29]); // 8034BA10
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034BA14
  c->lr=0x8034BA1Cu; f_8034DE38(c); // 8034BA18
  c->r[31]=c->r[3]|c->r[3]; // 8034BA1C
L_8034BA20:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034BA20
  if (crb(c,2)) { goto L_8034BA38; } // 8034BA24
  if (crb(c,2)) { goto L_8034BA38; } // 8034BA28
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BA2C
  c->r[4]=c->r[30]|c->r[30]; // 8034BA30
  c->lr=0x8034BA38u; f_8034E898(c); // 8034BA34
L_8034BA38:;
  c->r[11]=c->r[1]+0x00000030u; // 8034BA38
  c->r[3]=c->r[31]|c->r[31]; // 8034BA3C
  c->lr=0x8034BA44u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034BA40
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034BA44
  c->lr=c->r[0]; // 8034BA48
  c->r[1]=c->r[1]+0x00000030u; // 8034BA4C
  return; // 8034BA50
}

// ISFS_CreateDirAsync
void f_8034BA54(Ctx* __restrict c) {
  trace_call(0x8034BA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034BA54
  c->r[0]=c->lr; // 8034BA58
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034BA5C
  c->r[11]=c->r[1]+0x00000030u; // 8034BA60
  c->lr=0x8034BA68u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034BA64
  cmps(c,0,(int32_t)c->r[3],0); // 8034BA68
  c->r[23]=c->r[3]|c->r[3]; // 8034BA6C
  c->r[24]=c->r[4]|c->r[4]; // 8034BA70
  c->r[25]=c->r[5]|c->r[5]; // 8034BA74
  c->r[26]=c->r[6]|c->r[6]; // 8034BA78
  c->r[27]=c->r[7]|c->r[7]; // 8034BA7C
  c->r[28]=c->r[8]|c->r[8]; // 8034BA80
  c->r[29]=c->r[9]|c->r[9]; // 8034BA84
  if (crb(c,2)) { goto L_8034BAAC; } // 8034BA88
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034BA8C
  cmps(c,0,(int32_t)c->r[0],0); // 8034BA90
  if (crb(c,0)) { goto L_8034BAAC; } // 8034BA94
  c->r[4]=0u+0x00000040u; // 8034BA98
  c->lr=0x8034BAA0u; f_8034CCD8(c); // 8034BA9C
  cmpu(c,0,c->r[3],0x00000040u); // 8034BAA0
  c->r[31]=c->r[3]|c->r[3]; // 8034BAA4
  if (!crb(c,2)) { goto L_8034BAB4; } // 8034BAA8
L_8034BAAC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034BAAC
  goto L_8034BB30; // 8034BAB0
L_8034BAB4:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BAB4
  c->r[4]=0u+0x00000140u; // 8034BAB8
  c->r[5]=0u+0x00000020u; // 8034BABC
  c->lr=0x8034BAC4u; f_8034E894(c); // 8034BAC0
  cmps(c,0,(int32_t)c->r[3],0); // 8034BAC4
  c->r[30]=c->r[3]|c->r[3]; // 8034BAC8
  if (!crb(c,2)) { goto L_8034BAD8; } // 8034BACC
  c->r[3]=0u+0xFFFFFF8Au; // 8034BAD0
  goto L_8034BB30; // 8034BAD4
L_8034BAD8:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 8034BAD8
  c->r[0]=0u+0x00000000u; // 8034BADC
  c->r[4]=c->r[23]|c->r[23]; // 8034BAE0
  c->r[5]=c->r[31]+0x00000001u; // 8034BAE4
  W32(c->r[3]+0x00000104u,c->r[29]); // 8034BAE8
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034BAEC
  c->r[3]=c->r[3]+0x00000006u; // 8034BAF0
  c->lr=0x8034BAF8u; f_8000626C(c); // 8034BAF4
  W8(c->r[30]+0x00000049u,c->r[24]); // 8034BAF8
  c->r[9]=0u+0x80350000u; // 8034BAFC
  c->r[5]=c->r[30]|c->r[30]; // 8034BB00
  c->r[10]=c->r[30]|c->r[30]; // 8034BB04
  W8(c->r[30]+0x00000046u,c->r[25]); // 8034BB08
  c->r[9]=c->r[9]+0xFFFFB7E0u; // 8034BB0C
  c->r[4]=0u+0x00000003u; // 8034BB10
  c->r[6]=0u+0x0000004Cu; // 8034BB14
  W8(c->r[30]+0x00000047u,c->r[26]); // 8034BB18
  c->r[7]=0u+0x00000000u; // 8034BB1C
  c->r[8]=0u+0x00000000u; // 8034BB20
  W8(c->r[30]+0x00000048u,c->r[27]); // 8034BB24
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034BB28
  c->lr=0x8034BB30u; f_8034DD00(c); // 8034BB2C
L_8034BB30:;
  c->r[11]=c->r[1]+0x00000030u; // 8034BB30
  c->lr=0x8034BB38u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034BB34
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034BB38
  c->lr=c->r[0]; // 8034BB3C
  c->r[1]=c->r[1]+0x00000030u; // 8034BB40
  return; // 8034BB44
}

// ISFS_ReadDir
void f_8034BB48(Ctx* __restrict c) {
  trace_call(0x8034BB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034BB48
  c->r[0]=c->lr; // 8034BB4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034BB50
  c->r[11]=c->r[1]+0x00000020u; // 8034BB54
  c->lr=0x8034BB5Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034BB58
  cmps(c,0,(int32_t)c->r[3],0); // 8034BB5C
  c->r[26]=c->r[3]|c->r[3]; // 8034BB60
  c->r[27]=c->r[4]|c->r[4]; // 8034BB64
  c->r[28]=c->r[5]|c->r[5]; // 8034BB68
  c->r[29]=0u+0x00000000u; // 8034BB6C
  if (crb(c,2)) { goto L_8034BBA4; } // 8034BB70
  cmps(c,0,(int32_t)c->r[5],0); // 8034BB74
  if (crb(c,2)) { goto L_8034BBA4; } // 8034BB78
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034BB7C
  cmps(c,0,(int32_t)c->r[0],0); // 8034BB80
  if (crb(c,0)) { goto L_8034BBA4; } // 8034BB84
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 8034BB88
  if (!crb(c,2)) { goto L_8034BBA4; } // 8034BB8C
  c->r[4]=0u+0x00000040u; // 8034BB90
  c->lr=0x8034BB98u; f_8034CCD8(c); // 8034BB94
  cmpu(c,0,c->r[3],0x00000040u); // 8034BB98
  c->r[31]=c->r[3]|c->r[3]; // 8034BB9C
  if (!crb(c,2)) { goto L_8034BBAC; } // 8034BBA0
L_8034BBA4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8034BBA4
  goto L_8034BC68; // 8034BBA8
L_8034BBAC:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BBAC
  c->r[4]=0u+0x00000140u; // 8034BBB0
  c->r[5]=0u+0x00000020u; // 8034BBB4
  c->lr=0x8034BBBCu; f_8034E894(c); // 8034BBB8
  cmps(c,0,(int32_t)c->r[3],0); // 8034BBBC
  c->r[29]=c->r[3]|c->r[3]; // 8034BBC0
  if (!crb(c,2)) { goto L_8034BBD0; } // 8034BBC4
  c->r[31]=0u+0xFFFFFFEAu; // 8034BBC8
  goto L_8034BC68; // 8034BBCC
L_8034BBD0:;
  c->r[0]=c->r[3]+0x0000003Fu; // 8034BBD0
  c->r[4]=c->r[26]|c->r[26]; // 8034BBD4
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034BBD8
  c->r[5]=c->r[31]+0x00000001u; // 8034BBDC
  c->r[3]=c->r[30]|c->r[30]; // 8034BBE0
  c->lr=0x8034BBE8u; f_8000626C(c); // 8034BBE4
  W32(c->r[29]+0x00000000u,c->r[30]); // 8034BBE8
  c->r[3]=0u+0x00000040u; // 8034BBEC
  c->r[0]=c->r[30]+0x0000005Fu; // 8034BBF0
  cmps(c,0,(int32_t)c->r[27],0); // 8034BBF4
  W32(c->r[29]+0x00000004u,c->r[3]); // 8034BBF8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034BBFC
  c->r[3]=0u+0x00000004u; // 8034BC00
  W32(c->r[29]+0x00000008u,c->r[30]); // 8034BC04
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8034BC08
  if (crb(c,2)) { goto L_8034BC3C; } // 8034BC0C
  c->r[0]=R32(c->r[28]+0x00000000u); // 8034BC10
  c->r[5]=0u+0x00000002u; // 8034BC14
  c->r[6]=0u+0x00000002u; // 8034BC18
  W32(c->r[30]+0x00000000u,c->r[0]); // 8034BC1C
  W32(c->r[29]+0x00000010u,c->r[27]); // 8034BC20
  c->r[0]=R32(c->r[28]+0x00000000u); // 8034BC24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 8034BC28
  W32(c->r[29]+0x00000014u,c->r[0]); // 8034BC2C
  W32(c->r[29]+0x00000018u,c->r[30]); // 8034BC30
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 8034BC34
  goto L_8034BC44; // 8034BC38
L_8034BC3C:;
  c->r[5]=0u+0x00000001u; // 8034BC3C
  c->r[6]=0u+0x00000001u; // 8034BC40
L_8034BC44:;
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034BC44
  c->r[7]=c->r[29]|c->r[29]; // 8034BC48
  c->r[4]=0u+0x00000004u; // 8034BC4C
  c->lr=0x8034BC54u; f_8034E188(c); // 8034BC50
  cmps(c,0,(int32_t)c->r[3],0); // 8034BC54
  c->r[31]=c->r[3]|c->r[3]; // 8034BC58
  if (!crb(c,2)) { goto L_8034BC68; } // 8034BC5C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8034BC60
  W32(c->r[28]+0x00000000u,c->r[0]); // 8034BC64
L_8034BC68:;
  cmps(c,0,(int32_t)c->r[29],0); // 8034BC68
  if (crb(c,2)) { goto L_8034BC80; } // 8034BC6C
  if (crb(c,2)) { goto L_8034BC80; } // 8034BC70
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BC74
  c->r[4]=c->r[29]|c->r[29]; // 8034BC78
  c->lr=0x8034BC80u; f_8034E898(c); // 8034BC7C
L_8034BC80:;
  c->r[11]=c->r[1]+0x00000020u; // 8034BC80
  c->r[3]=c->r[31]|c->r[31]; // 8034BC84
  c->lr=0x8034BC8Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034BC88
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034BC8C
  c->lr=c->r[0]; // 8034BC90
  c->r[1]=c->r[1]+0x00000020u; // 8034BC94
  return; // 8034BC98
}

// ISFS_ReadDirAsync
void f_8034BC9C(Ctx* __restrict c) {
  trace_call(0x8034BC9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034BC9C
  c->r[0]=c->lr; // 8034BCA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034BCA4
  c->r[11]=c->r[1]+0x00000030u; // 8034BCA8
  c->lr=0x8034BCB0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034BCAC
  cmps(c,0,(int32_t)c->r[3],0); // 8034BCB0
  c->r[25]=c->r[3]|c->r[3]; // 8034BCB4
  c->r[26]=c->r[4]|c->r[4]; // 8034BCB8
  c->r[27]=c->r[5]|c->r[5]; // 8034BCBC
  c->r[28]=c->r[6]|c->r[6]; // 8034BCC0
  c->r[29]=c->r[7]|c->r[7]; // 8034BCC4
  if (crb(c,2)) { goto L_8034BCFC; } // 8034BCC8
  cmps(c,0,(int32_t)c->r[5],0); // 8034BCCC
  if (crb(c,2)) { goto L_8034BCFC; } // 8034BCD0
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034BCD4
  cmps(c,0,(int32_t)c->r[0],0); // 8034BCD8
  if (crb(c,0)) { goto L_8034BCFC; } // 8034BCDC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 8034BCE0
  if (!crb(c,2)) { goto L_8034BCFC; } // 8034BCE4
  c->r[4]=0u+0x00000040u; // 8034BCE8
  c->lr=0x8034BCF0u; f_8034CCD8(c); // 8034BCEC
  cmpu(c,0,c->r[3],0x00000040u); // 8034BCF0
  c->r[31]=c->r[3]|c->r[3]; // 8034BCF4
  if (!crb(c,2)) { goto L_8034BD04; } // 8034BCF8
L_8034BCFC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034BCFC
  goto L_8034BDCC; // 8034BD00
L_8034BD04:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BD04
  c->r[4]=0u+0x00000140u; // 8034BD08
  c->r[5]=0u+0x00000020u; // 8034BD0C
  c->lr=0x8034BD14u; f_8034E894(c); // 8034BD10
  cmps(c,0,(int32_t)c->r[3],0); // 8034BD14
  c->r[30]=c->r[3]|c->r[3]; // 8034BD18
  if (!crb(c,2)) { goto L_8034BD28; } // 8034BD1C
  c->r[3]=0u+0xFFFFFF8Au; // 8034BD20
  goto L_8034BDCC; // 8034BD24
L_8034BD28:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 8034BD28
  c->r[6]=0u+0x00000002u; // 8034BD2C
  c->r[0]=c->r[3]+0x0000003Fu; // 8034BD30
  c->r[4]=c->r[25]|c->r[25]; // 8034BD34
  W32(c->r[3]+0x00000104u,c->r[29]); // 8034BD38
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034BD3C
  c->r[5]=c->r[31]+0x00000001u; // 8034BD40
  W32(c->r[3]+0x00000108u,c->r[6]); // 8034BD44
  W32(c->r[3]+0x0000010Cu,c->r[27]); // 8034BD48
  c->r[3]=c->r[29]|c->r[29]; // 8034BD4C
  c->lr=0x8034BD54u; f_8000626C(c); // 8034BD50
  W32(c->r[30]+0x00000000u,c->r[29]); // 8034BD54
  c->r[3]=0u+0x00000040u; // 8034BD58
  c->r[0]=c->r[29]+0x0000005Fu; // 8034BD5C
  cmps(c,0,(int32_t)c->r[26],0); // 8034BD60
  W32(c->r[30]+0x00000004u,c->r[3]); // 8034BD64
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034BD68
  c->r[3]=0u+0x00000004u; // 8034BD6C
  W32(c->r[30]+0x00000008u,c->r[4]); // 8034BD70
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8034BD74
  if (crb(c,2)) { goto L_8034BDA8; } // 8034BD78
  c->r[0]=R32(c->r[27]+0x00000000u); // 8034BD7C
  c->r[5]=0u+0x00000002u; // 8034BD80
  c->r[6]=0u+0x00000002u; // 8034BD84
  W32(c->r[4]+0x00000000u,c->r[0]); // 8034BD88
  W32(c->r[30]+0x00000010u,c->r[26]); // 8034BD8C
  c->r[0]=R32(c->r[27]+0x00000000u); // 8034BD90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 8034BD94
  W32(c->r[30]+0x00000014u,c->r[0]); // 8034BD98
  W32(c->r[30]+0x00000018u,c->r[4]); // 8034BD9C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 8034BDA0
  goto L_8034BDB0; // 8034BDA4
L_8034BDA8:;
  c->r[5]=0u+0x00000001u; // 8034BDA8
  c->r[6]=0u+0x00000001u; // 8034BDAC
L_8034BDB0:;
  c->r[8]=0u+0x80350000u; // 8034BDB0
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034BDB4
  c->r[7]=c->r[30]|c->r[30]; // 8034BDB8
  c->r[9]=c->r[30]|c->r[30]; // 8034BDBC
  c->r[8]=c->r[8]+0xFFFFB7E0u; // 8034BDC0
  c->r[4]=0u+0x00000004u; // 8034BDC4
  c->lr=0x8034BDCCu; f_8034E0A4(c); // 8034BDC8
L_8034BDCC:;
  c->r[11]=c->r[1]+0x00000030u; // 8034BDCC
  c->lr=0x8034BDD4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034BDD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034BDD4
  c->lr=c->r[0]; // 8034BDD8
  c->r[1]=c->r[1]+0x00000030u; // 8034BDDC
  return; // 8034BDE0
}

// ISFS_GetAttr
void f_8034BDE4(Ctx* __restrict c) {
  trace_call(0x8034BDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034BDE4
  c->r[0]=c->lr; // 8034BDE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034BDEC
  c->r[11]=c->r[1]+0x00000030u; // 8034BDF0
  c->lr=0x8034BDF8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034BDF4
  cmps(c,0,(int32_t)c->r[3],0); // 8034BDF8
  c->r[30]=c->r[3]|c->r[3]; // 8034BDFC
  c->r[23]=c->r[4]|c->r[4]; // 8034BE00
  c->r[24]=c->r[5]|c->r[5]; // 8034BE04
  c->r[25]=c->r[6]|c->r[6]; // 8034BE08
  c->r[26]=c->r[7]|c->r[7]; // 8034BE0C
  c->r[27]=c->r[8]|c->r[8]; // 8034BE10
  c->r[28]=c->r[9]|c->r[9]; // 8034BE14
  c->r[29]=0u+0x00000000u; // 8034BE18
  if (crb(c,2)) { goto L_8034BE70; } // 8034BE1C
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034BE20
  cmps(c,0,(int32_t)c->r[0],0); // 8034BE24
  if (crb(c,0)) { goto L_8034BE70; } // 8034BE28
  c->r[4]=0u+0x00000040u; // 8034BE2C
  c->lr=0x8034BE34u; f_8034CCD8(c); // 8034BE30
  cmpu(c,0,c->r[3],0x00000040u); // 8034BE34
  c->r[31]=c->r[3]|c->r[3]; // 8034BE38
  if (crb(c,2)) { goto L_8034BE70; } // 8034BE3C
  cmps(c,0,(int32_t)c->r[23],0); // 8034BE40
  if (crb(c,2)) { goto L_8034BE70; } // 8034BE44
  cmps(c,0,(int32_t)c->r[24],0); // 8034BE48
  if (crb(c,2)) { goto L_8034BE70; } // 8034BE4C
  cmps(c,0,(int32_t)c->r[25],0); // 8034BE50
  if (crb(c,2)) { goto L_8034BE70; } // 8034BE54
  cmps(c,0,(int32_t)c->r[26],0); // 8034BE58
  if (crb(c,2)) { goto L_8034BE70; } // 8034BE5C
  cmps(c,0,(int32_t)c->r[27],0); // 8034BE60
  if (crb(c,2)) { goto L_8034BE70; } // 8034BE64
  cmps(c,0,(int32_t)c->r[28],0); // 8034BE68
  if (!crb(c,2)) { goto L_8034BE78; } // 8034BE6C
L_8034BE70:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8034BE70
  goto L_8034BF08; // 8034BE74
L_8034BE78:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BE78
  c->r[4]=0u+0x00000140u; // 8034BE7C
  c->r[5]=0u+0x00000020u; // 8034BE80
  c->lr=0x8034BE88u; f_8034E894(c); // 8034BE84
  cmps(c,0,(int32_t)c->r[3],0); // 8034BE88
  c->r[29]=c->r[3]|c->r[3]; // 8034BE8C
  if (!crb(c,2)) { goto L_8034BE9C; } // 8034BE90
  c->r[31]=0u+0xFFFFFFEAu; // 8034BE94
  goto L_8034BF08; // 8034BE98
L_8034BE9C:;
  c->r[4]=c->r[30]|c->r[30]; // 8034BE9C
  c->r[5]=c->r[31]+0x00000001u; // 8034BEA0
  c->lr=0x8034BEA8u; f_8000626C(c); // 8034BEA4
  c->r[0]=c->r[29]+0x0000005Fu; // 8034BEA8
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034BEAC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034BEB0
  c->r[5]=c->r[29]|c->r[29]; // 8034BEB4
  c->r[7]=c->r[30]|c->r[30]; // 8034BEB8
  c->r[4]=0u+0x00000006u; // 8034BEBC
  c->r[6]=0u+0x00000040u; // 8034BEC0
  c->r[8]=0u+0x0000004Cu; // 8034BEC4
  c->lr=0x8034BECCu; f_8034DE38(c); // 8034BEC8
  cmps(c,0,(int32_t)c->r[3],0); // 8034BECC
  c->r[31]=c->r[3]|c->r[3]; // 8034BED0
  if (!crb(c,2)) { goto L_8034BF08; } // 8034BED4
  c->r[0]=R32(c->r[30]+0x00000000u); // 8034BED8
  W32(c->r[23]+0x00000000u,c->r[0]); // 8034BEDC
  c->r[0]=R16(c->r[30]+0x00000004u); // 8034BEE0
  W16(c->r[24]+0x00000000u,c->r[0]); // 8034BEE4
  c->r[0]=R8(c->r[30]+0x00000049u); // 8034BEE8
  W32(c->r[25]+0x00000000u,c->r[0]); // 8034BEEC
  c->r[0]=R8(c->r[30]+0x00000046u); // 8034BEF0
  W32(c->r[26]+0x00000000u,c->r[0]); // 8034BEF4
  c->r[0]=R8(c->r[30]+0x00000047u); // 8034BEF8
  W32(c->r[27]+0x00000000u,c->r[0]); // 8034BEFC
  c->r[0]=R8(c->r[30]+0x00000048u); // 8034BF00
  W32(c->r[28]+0x00000000u,c->r[0]); // 8034BF04
L_8034BF08:;
  cmps(c,0,(int32_t)c->r[29],0); // 8034BF08
  if (crb(c,2)) { goto L_8034BF20; } // 8034BF0C
  if (crb(c,2)) { goto L_8034BF20; } // 8034BF10
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BF14
  c->r[4]=c->r[29]|c->r[29]; // 8034BF18
  c->lr=0x8034BF20u; f_8034E898(c); // 8034BF1C
L_8034BF20:;
  c->r[11]=c->r[1]+0x00000030u; // 8034BF20
  c->r[3]=c->r[31]|c->r[31]; // 8034BF24
  c->lr=0x8034BF2Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034BF28
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034BF2C
  c->lr=c->r[0]; // 8034BF30
  c->r[1]=c->r[1]+0x00000030u; // 8034BF34
  return; // 8034BF38
}

// ISFS_GetAttrAsync
void f_8034BF3C(Ctx* __restrict c) {
  trace_call(0x8034BF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034BF3C
  c->r[0]=c->lr; // 8034BF40
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034BF44
  c->r[11]=c->r[1]+0x00000040u; // 8034BF48
  c->lr=0x8034BF50u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034BF4C
  cmps(c,0,(int32_t)c->r[3],0); // 8034BF50
  c->r[29]=R32(c->r[1]+0x00000048u); // 8034BF54
  c->r[21]=c->r[3]|c->r[3]; // 8034BF58
  c->r[22]=c->r[4]|c->r[4]; // 8034BF5C
  c->r[23]=c->r[5]|c->r[5]; // 8034BF60
  c->r[24]=c->r[6]|c->r[6]; // 8034BF64
  c->r[25]=c->r[7]|c->r[7]; // 8034BF68
  c->r[26]=c->r[8]|c->r[8]; // 8034BF6C
  c->r[27]=c->r[9]|c->r[9]; // 8034BF70
  c->r[28]=c->r[10]|c->r[10]; // 8034BF74
  if (crb(c,2)) { goto L_8034BFCC; } // 8034BF78
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034BF7C
  cmps(c,0,(int32_t)c->r[0],0); // 8034BF80
  if (crb(c,0)) { goto L_8034BFCC; } // 8034BF84
  c->r[4]=0u+0x00000040u; // 8034BF88
  c->lr=0x8034BF90u; f_8034CCD8(c); // 8034BF8C
  cmpu(c,0,c->r[3],0x00000040u); // 8034BF90
  c->r[31]=c->r[3]|c->r[3]; // 8034BF94
  if (crb(c,2)) { goto L_8034BFCC; } // 8034BF98
  cmps(c,0,(int32_t)c->r[22],0); // 8034BF9C
  if (crb(c,2)) { goto L_8034BFCC; } // 8034BFA0
  cmps(c,0,(int32_t)c->r[23],0); // 8034BFA4
  if (crb(c,2)) { goto L_8034BFCC; } // 8034BFA8
  cmps(c,0,(int32_t)c->r[24],0); // 8034BFAC
  if (crb(c,2)) { goto L_8034BFCC; } // 8034BFB0
  cmps(c,0,(int32_t)c->r[25],0); // 8034BFB4
  if (crb(c,2)) { goto L_8034BFCC; } // 8034BFB8
  cmps(c,0,(int32_t)c->r[26],0); // 8034BFBC
  if (crb(c,2)) { goto L_8034BFCC; } // 8034BFC0
  cmps(c,0,(int32_t)c->r[27],0); // 8034BFC4
  if (!crb(c,2)) { goto L_8034BFD4; } // 8034BFC8
L_8034BFCC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034BFCC
  goto L_8034C058; // 8034BFD0
L_8034BFD4:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034BFD4
  c->r[4]=0u+0x00000140u; // 8034BFD8
  c->r[5]=0u+0x00000020u; // 8034BFDC
  c->lr=0x8034BFE4u; f_8034E894(c); // 8034BFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8034BFE4
  c->r[30]=c->r[3]|c->r[3]; // 8034BFE8
  if (!crb(c,2)) { goto L_8034BFF8; } // 8034BFEC
  c->r[3]=0u+0xFFFFFF8Au; // 8034BFF0
  goto L_8034C058; // 8034BFF4
L_8034BFF8:;
  W32(c->r[3]+0x0000010Cu,c->r[22]); // 8034BFF8
  c->r[0]=0u+0x00000003u; // 8034BFFC
  c->r[4]=c->r[21]|c->r[21]; // 8034C000
  c->r[5]=c->r[31]+0x00000001u; // 8034C004
  W32(c->r[3]+0x00000110u,c->r[23]); // 8034C008
  W32(c->r[3]+0x00000114u,c->r[24]); // 8034C00C
  W32(c->r[3]+0x00000118u,c->r[25]); // 8034C010
  W32(c->r[3]+0x0000011Cu,c->r[26]); // 8034C014
  W32(c->r[3]+0x00000120u,c->r[27]); // 8034C018
  W32(c->r[3]+0x00000100u,c->r[28]); // 8034C01C
  W32(c->r[3]+0x00000104u,c->r[29]); // 8034C020
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034C024
  c->lr=0x8034C02Cu; f_8000626C(c); // 8034C028
  c->r[0]=c->r[30]+0x0000005Fu; // 8034C02C
  c->r[9]=0u+0x80350000u; // 8034C030
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C034
  c->r[5]=c->r[30]|c->r[30]; // 8034C038
  c->r[10]=c->r[30]|c->r[30]; // 8034C03C
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034C040
  c->r[9]=c->r[9]+0xFFFFB7E0u; // 8034C044
  c->r[4]=0u+0x00000006u; // 8034C048
  c->r[6]=0u+0x00000040u; // 8034C04C
  c->r[8]=0u+0x0000004Cu; // 8034C050
  c->lr=0x8034C058u; f_8034DD00(c); // 8034C054
L_8034C058:;
  c->r[11]=c->r[1]+0x00000040u; // 8034C058
  c->lr=0x8034C060u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C05C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8034C060
  c->lr=c->r[0]; // 8034C064
  c->r[1]=c->r[1]+0x00000040u; // 8034C068
  return; // 8034C06C
}

// ISFS_Delete
void f_8034C070(Ctx* __restrict c) {
  trace_call(0x8034C070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C070
  c->r[0]=c->lr; // 8034C074
  cmps(c,0,(int32_t)c->r[3],0); // 8034C078
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034C07C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034C080
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034C084
  c->r[30]=0u+0x00000000u; // 8034C088
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034C08C
  c->r[29]=c->r[3]|c->r[3]; // 8034C090
  if (crb(c,2)) { goto L_8034C0B8; } // 8034C094
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034C098
  cmps(c,0,(int32_t)c->r[0],0); // 8034C09C
  if (crb(c,0)) { goto L_8034C0B8; } // 8034C0A0
  c->r[4]=0u+0x00000040u; // 8034C0A4
  c->lr=0x8034C0ACu; f_8034CCD8(c); // 8034C0A8
  cmpu(c,0,c->r[3],0x00000040u); // 8034C0AC
  c->r[31]=c->r[3]|c->r[3]; // 8034C0B0
  if (!crb(c,2)) { goto L_8034C0C0; } // 8034C0B4
L_8034C0B8:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8034C0B8
  goto L_8034C110; // 8034C0BC
L_8034C0C0:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C0C0
  c->r[4]=0u+0x00000140u; // 8034C0C4
  c->r[5]=0u+0x00000020u; // 8034C0C8
  c->lr=0x8034C0D0u; f_8034E894(c); // 8034C0CC
  cmps(c,0,(int32_t)c->r[3],0); // 8034C0D0
  c->r[30]=c->r[3]|c->r[3]; // 8034C0D4
  if (!crb(c,2)) { goto L_8034C0E4; } // 8034C0D8
  c->r[31]=0u+0xFFFFFFEAu; // 8034C0DC
  goto L_8034C110; // 8034C0E0
L_8034C0E4:;
  c->r[4]=c->r[29]|c->r[29]; // 8034C0E4
  c->r[5]=c->r[31]+0x00000001u; // 8034C0E8
  c->lr=0x8034C0F0u; f_8000626C(c); // 8034C0EC
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C0F0
  c->r[5]=c->r[30]|c->r[30]; // 8034C0F4
  c->r[4]=0u+0x00000007u; // 8034C0F8
  c->r[6]=0u+0x00000040u; // 8034C0FC
  c->r[7]=0u+0x00000000u; // 8034C100
  c->r[8]=0u+0x00000000u; // 8034C104
  c->lr=0x8034C10Cu; f_8034DE38(c); // 8034C108
  c->r[31]=c->r[3]|c->r[3]; // 8034C10C
L_8034C110:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034C110
  if (crb(c,2)) { goto L_8034C128; } // 8034C114
  if (crb(c,2)) { goto L_8034C128; } // 8034C118
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C11C
  c->r[4]=c->r[30]|c->r[30]; // 8034C120
  c->lr=0x8034C128u; f_8034E898(c); // 8034C124
L_8034C128:;
  c->r[3]=c->r[31]|c->r[31]; // 8034C128
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034C12C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034C130
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034C134
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034C138
  c->lr=c->r[0]; // 8034C13C
  c->r[1]=c->r[1]+0x00000020u; // 8034C140
  return; // 8034C144
}

// ISFS_DeleteAsync
void f_8034C148(Ctx* __restrict c) {
  trace_call(0x8034C148u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C148
  c->r[0]=c->lr; // 8034C14C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034C150
  c->r[11]=c->r[1]+0x00000020u; // 8034C154
  c->lr=0x8034C15Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C158
  cmps(c,0,(int32_t)c->r[3],0); // 8034C15C
  c->r[27]=c->r[3]|c->r[3]; // 8034C160
  c->r[28]=c->r[4]|c->r[4]; // 8034C164
  c->r[29]=c->r[5]|c->r[5]; // 8034C168
  if (crb(c,2)) { goto L_8034C190; } // 8034C16C
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034C170
  cmps(c,0,(int32_t)c->r[0],0); // 8034C174
  if (crb(c,0)) { goto L_8034C190; } // 8034C178
  c->r[4]=0u+0x00000040u; // 8034C17C
  c->lr=0x8034C184u; f_8034CCD8(c); // 8034C180
  cmpu(c,0,c->r[3],0x00000040u); // 8034C184
  c->r[31]=c->r[3]|c->r[3]; // 8034C188
  if (!crb(c,2)) { goto L_8034C198; } // 8034C18C
L_8034C190:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034C190
  goto L_8034C200; // 8034C194
L_8034C198:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C198
  c->r[4]=0u+0x00000140u; // 8034C19C
  c->r[5]=0u+0x00000020u; // 8034C1A0
  c->lr=0x8034C1A8u; f_8034E894(c); // 8034C1A4
  cmps(c,0,(int32_t)c->r[3],0); // 8034C1A8
  c->r[30]=c->r[3]|c->r[3]; // 8034C1AC
  if (!crb(c,2)) { goto L_8034C1BC; } // 8034C1B0
  c->r[3]=0u+0xFFFFFF8Au; // 8034C1B4
  goto L_8034C200; // 8034C1B8
L_8034C1BC:;
  c->r[4]=c->r[27]|c->r[27]; // 8034C1BC
  c->r[5]=c->r[31]+0x00000001u; // 8034C1C0
  c->lr=0x8034C1C8u; f_8000626C(c); // 8034C1C4
  W32(c->r[30]+0x00000100u,c->r[28]); // 8034C1C8
  c->r[9]=0u+0x80350000u; // 8034C1CC
  c->r[0]=0u+0x00000000u; // 8034C1D0
  c->r[5]=c->r[30]|c->r[30]; // 8034C1D4
  W32(c->r[30]+0x00000104u,c->r[29]); // 8034C1D8
  c->r[10]=c->r[30]|c->r[30]; // 8034C1DC
  c->r[9]=c->r[9]+0xFFFFB7E0u; // 8034C1E0
  c->r[4]=0u+0x00000007u; // 8034C1E4
  W32(c->r[30]+0x00000108u,c->r[0]); // 8034C1E8
  c->r[6]=0u+0x00000040u; // 8034C1EC
  c->r[7]=0u+0x00000000u; // 8034C1F0
  c->r[8]=0u+0x00000000u; // 8034C1F4
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C1F8
  c->lr=0x8034C200u; f_8034DD00(c); // 8034C1FC
L_8034C200:;
  c->r[11]=c->r[1]+0x00000020u; // 8034C200
  c->lr=0x8034C208u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C204
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034C208
  c->lr=c->r[0]; // 8034C20C
  c->r[1]=c->r[1]+0x00000020u; // 8034C210
  return; // 8034C214
}

// ISFS_RenameAsync
void f_8034C218(Ctx* __restrict c) {
  trace_call(0x8034C218u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C218
  c->r[0]=c->lr; // 8034C21C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034C220
  c->r[11]=c->r[1]+0x00000030u; // 8034C224
  c->lr=0x8034C22Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C228
  cmps(c,0,(int32_t)c->r[3],0); // 8034C22C
  c->r[25]=c->r[3]|c->r[3]; // 8034C230
  c->r[26]=c->r[4]|c->r[4]; // 8034C234
  c->r[27]=c->r[5]|c->r[5]; // 8034C238
  c->r[28]=c->r[6]|c->r[6]; // 8034C23C
  if (crb(c,2)) { goto L_8034C284; } // 8034C240
  cmps(c,0,(int32_t)c->r[4],0); // 8034C244
  if (crb(c,2)) { goto L_8034C284; } // 8034C248
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034C24C
  cmps(c,0,(int32_t)c->r[0],0); // 8034C250
  if (crb(c,0)) { goto L_8034C284; } // 8034C254
  c->r[4]=0u+0x00000040u; // 8034C258
  c->lr=0x8034C260u; f_8034CCD8(c); // 8034C25C
  cmpu(c,0,c->r[3],0x00000040u); // 8034C260
  c->r[30]=c->r[3]|c->r[3]; // 8034C264
  if (crb(c,2)) { goto L_8034C284; } // 8034C268
  c->r[3]=c->r[26]|c->r[26]; // 8034C26C
  c->r[4]=0u+0x00000040u; // 8034C270
  c->lr=0x8034C278u; f_8034CCD8(c); // 8034C274
  cmpu(c,0,c->r[3],0x00000040u); // 8034C278
  c->r[31]=c->r[3]|c->r[3]; // 8034C27C
  if (!crb(c,2)) { goto L_8034C28C; } // 8034C280
L_8034C284:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034C284
  goto L_8034C304; // 8034C288
L_8034C28C:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C28C
  c->r[4]=0u+0x00000140u; // 8034C290
  c->r[5]=0u+0x00000020u; // 8034C294
  c->lr=0x8034C29Cu; f_8034E894(c); // 8034C298
  cmps(c,0,(int32_t)c->r[3],0); // 8034C29C
  c->r[29]=c->r[3]|c->r[3]; // 8034C2A0
  if (!crb(c,2)) { goto L_8034C2B0; } // 8034C2A4
  c->r[3]=0u+0xFFFFFF8Au; // 8034C2A8
  goto L_8034C304; // 8034C2AC
L_8034C2B0:;
  W32(c->r[3]+0x00000100u,c->r[27]); // 8034C2B0
  c->r[0]=0u+0x00000000u; // 8034C2B4
  c->r[4]=c->r[25]|c->r[25]; // 8034C2B8
  c->r[5]=c->r[30]+0x00000001u; // 8034C2BC
  W32(c->r[3]+0x00000104u,c->r[28]); // 8034C2C0
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034C2C4
  c->lr=0x8034C2CCu; f_8000626C(c); // 8034C2C8
  c->r[4]=c->r[26]|c->r[26]; // 8034C2CC
  c->r[3]=c->r[29]+0x00000040u; // 8034C2D0
  c->r[5]=c->r[31]+0x00000001u; // 8034C2D4
  c->lr=0x8034C2DCu; f_8000626C(c); // 8034C2D8
  c->r[9]=0u+0x80350000u; // 8034C2DC
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C2E0
  c->r[5]=c->r[29]|c->r[29]; // 8034C2E4
  c->r[10]=c->r[29]|c->r[29]; // 8034C2E8
  c->r[9]=c->r[9]+0xFFFFB7E0u; // 8034C2EC
  c->r[4]=0u+0x00000008u; // 8034C2F0
  c->r[6]=0u+0x00000080u; // 8034C2F4
  c->r[7]=0u+0x00000000u; // 8034C2F8
  c->r[8]=0u+0x00000000u; // 8034C2FC
  c->lr=0x8034C304u; f_8034DD00(c); // 8034C300
L_8034C304:;
  c->r[11]=c->r[1]+0x00000030u; // 8034C304
  c->lr=0x8034C30Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C308
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034C30C
  c->lr=c->r[0]; // 8034C310
  c->r[1]=c->r[1]+0x00000030u; // 8034C314
  return; // 8034C318
}

// ISFS_GetUsage
void f_8034C31C(Ctx* __restrict c) {
  trace_call(0x8034C31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C31C
  c->r[0]=c->lr; // 8034C320
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034C324
  c->r[11]=c->r[1]+0x00000020u; // 8034C328
  c->lr=0x8034C330u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C32C
  cmps(c,0,(int32_t)c->r[3],0); // 8034C330
  c->r[30]=c->r[3]|c->r[3]; // 8034C334
  c->r[26]=c->r[4]|c->r[4]; // 8034C338
  c->r[27]=c->r[5]|c->r[5]; // 8034C33C
  c->r[28]=0u+0x00000000u; // 8034C340
  if (crb(c,2)) { goto L_8034C378; } // 8034C344
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034C348
  cmps(c,0,(int32_t)c->r[0],0); // 8034C34C
  if (crb(c,0)) { goto L_8034C378; } // 8034C350
  cmps(c,0,(int32_t)c->r[4],0); // 8034C354
  if (crb(c,2)) { goto L_8034C378; } // 8034C358
  cmps(c,0,(int32_t)c->r[5],0); // 8034C35C
  if (crb(c,2)) { goto L_8034C378; } // 8034C360
  c->r[4]=0u+0x00000040u; // 8034C364
  c->lr=0x8034C36Cu; f_8034CCD8(c); // 8034C368
  cmpu(c,0,c->r[3],0x00000040u); // 8034C36C
  c->r[31]=c->r[3]|c->r[3]; // 8034C370
  if (!crb(c,2)) { goto L_8034C380; } // 8034C374
L_8034C378:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8034C378
  goto L_8034C420; // 8034C37C
L_8034C380:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C380
  c->r[4]=0u+0x00000140u; // 8034C384
  c->r[5]=0u+0x00000020u; // 8034C388
  c->lr=0x8034C390u; f_8034E894(c); // 8034C38C
  cmps(c,0,(int32_t)c->r[3],0); // 8034C390
  c->r[28]=c->r[3]|c->r[3]; // 8034C394
  if (!crb(c,2)) { goto L_8034C3A4; } // 8034C398
  c->r[31]=0u+0xFFFFFFEAu; // 8034C39C
  goto L_8034C420; // 8034C3A0
L_8034C3A4:;
  c->r[0]=c->r[3]+0x00000037u; // 8034C3A4
  c->r[4]=c->r[30]|c->r[30]; // 8034C3A8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034C3AC
  c->r[5]=c->r[31]+0x00000001u; // 8034C3B0
  c->r[3]=c->r[29]|c->r[29]; // 8034C3B4
  c->lr=0x8034C3BCu; f_8000626C(c); // 8034C3B8
  W32(c->r[28]+0x00000000u,c->r[29]); // 8034C3BC
  c->r[4]=0u+0x00000040u; // 8034C3C0
  c->r[3]=c->r[29]+0x0000005Fu; // 8034C3C4
  c->r[0]=0u+0x00000004u; // 8034C3C8
  W32(c->r[28]+0x00000004u,c->r[4]); // 8034C3CC
  c->r[30]=rotl(c->r[3],0)&0xFFFFFFE0u; // 8034C3D0
  c->r[3]=c->r[30]+0x00000023u; // 8034C3D4
  c->r[7]=c->r[28]|c->r[28]; // 8034C3D8
  W32(c->r[28]+0x00000008u,c->r[30]); // 8034C3DC
  c->r[29]=rotl(c->r[3],0)&0xFFFFFFE0u; // 8034C3E0
  c->r[4]=0u+0x0000000Cu; // 8034C3E4
  c->r[5]=0u+0x00000001u; // 8034C3E8
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8034C3EC
  c->r[6]=0u+0x00000002u; // 8034C3F0
  W32(c->r[28]+0x00000010u,c->r[29]); // 8034C3F4
  W32(c->r[28]+0x00000014u,c->r[0]); // 8034C3F8
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C3FC
  c->lr=0x8034C404u; f_8034E188(c); // 8034C400
  cmps(c,0,(int32_t)c->r[3],0); // 8034C404
  c->r[31]=c->r[3]|c->r[3]; // 8034C408
  if (!crb(c,2)) { goto L_8034C420; } // 8034C40C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8034C410
  W32(c->r[26]+0x00000000u,c->r[0]); // 8034C414
  c->r[0]=R32(c->r[29]+0x00000000u); // 8034C418
  W32(c->r[27]+0x00000000u,c->r[0]); // 8034C41C
L_8034C420:;
  cmps(c,0,(int32_t)c->r[28],0); // 8034C420
  if (crb(c,2)) { goto L_8034C438; } // 8034C424
  if (crb(c,2)) { goto L_8034C438; } // 8034C428
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C42C
  c->r[4]=c->r[28]|c->r[28]; // 8034C430
  c->lr=0x8034C438u; f_8034E898(c); // 8034C434
L_8034C438:;
  c->r[11]=c->r[1]+0x00000020u; // 8034C438
  c->r[3]=c->r[31]|c->r[31]; // 8034C43C
  c->lr=0x8034C444u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C440
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034C444
  c->lr=c->r[0]; // 8034C448
  c->r[1]=c->r[1]+0x00000020u; // 8034C44C
  return; // 8034C450
}

// fn_8034C454
void f_8034C454(Ctx* __restrict c) {
  trace_call(0x8034C454u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C454
  c->r[0]=c->lr; // 8034C458
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034C45C
  c->r[11]=c->r[1]+0x00000030u; // 8034C460
  c->lr=0x8034C468u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C464
  cmps(c,0,(int32_t)c->r[3],0); // 8034C468
  c->r[25]=c->r[3]|c->r[3]; // 8034C46C
  c->r[26]=c->r[4]|c->r[4]; // 8034C470
  c->r[27]=c->r[5]|c->r[5]; // 8034C474
  c->r[31]=c->r[6]|c->r[6]; // 8034C478
  c->r[28]=c->r[7]|c->r[7]; // 8034C47C
  if (crb(c,2)) { goto L_8034C4B4; } // 8034C480
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034C484
  cmps(c,0,(int32_t)c->r[0],0); // 8034C488
  if (crb(c,0)) { goto L_8034C4B4; } // 8034C48C
  cmps(c,0,(int32_t)c->r[4],0); // 8034C490
  if (crb(c,2)) { goto L_8034C4B4; } // 8034C494
  cmps(c,0,(int32_t)c->r[5],0); // 8034C498
  if (crb(c,2)) { goto L_8034C4B4; } // 8034C49C
  c->r[4]=0u+0x00000040u; // 8034C4A0
  c->lr=0x8034C4A8u; f_8034CCD8(c); // 8034C4A4
  cmpu(c,0,c->r[3],0x00000040u); // 8034C4A8
  c->r[30]=c->r[3]|c->r[3]; // 8034C4AC
  if (!crb(c,2)) { goto L_8034C4BC; } // 8034C4B0
L_8034C4B4:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034C4B4
  goto L_8034C560; // 8034C4B8
L_8034C4BC:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C4BC
  c->r[4]=0u+0x00000140u; // 8034C4C0
  c->r[5]=0u+0x00000020u; // 8034C4C4
  c->lr=0x8034C4CCu; f_8034E894(c); // 8034C4C8
  cmps(c,0,(int32_t)c->r[3],0); // 8034C4CC
  c->r[29]=c->r[3]|c->r[3]; // 8034C4D0
  if (!crb(c,2)) { goto L_8034C4E0; } // 8034C4D4
  c->r[3]=0u+0xFFFFFF8Au; // 8034C4D8
  goto L_8034C560; // 8034C4DC
L_8034C4E0:;
  W32(c->r[3]+0x00000100u,c->r[31]); // 8034C4E0
  c->r[31]=0u+0x00000004u; // 8034C4E4
  c->r[0]=c->r[3]+0x00000037u; // 8034C4E8
  c->r[4]=c->r[25]|c->r[25]; // 8034C4EC
  W32(c->r[3]+0x00000104u,c->r[28]); // 8034C4F0
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034C4F4
  c->r[5]=c->r[30]+0x00000001u; // 8034C4F8
  W32(c->r[3]+0x00000108u,c->r[31]); // 8034C4FC
  W32(c->r[3]+0x0000010Cu,c->r[26]); // 8034C500
  W32(c->r[3]+0x00000110u,c->r[27]); // 8034C504
  c->r[3]=c->r[28]|c->r[28]; // 8034C508
  c->lr=0x8034C510u; f_8000626C(c); // 8034C50C
  W32(c->r[29]+0x00000000u,c->r[28]); // 8034C510
  c->r[3]=0u+0x00000040u; // 8034C514
  c->r[8]=0u+0x80350000u; // 8034C518
  c->r[0]=c->r[28]+0x0000005Fu; // 8034C51C
  W32(c->r[29]+0x00000004u,c->r[3]); // 8034C520
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034C524
  c->r[0]=c->r[3]+0x00000023u; // 8034C528
  c->r[7]=c->r[29]|c->r[29]; // 8034C52C
  W32(c->r[29]+0x00000008u,c->r[3]); // 8034C530
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034C534
  c->r[9]=c->r[29]|c->r[29]; // 8034C538
  c->r[8]=c->r[8]+0xFFFFB7E0u; // 8034C53C
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 8034C540
  c->r[4]=0u+0x0000000Cu; // 8034C544
  c->r[5]=0u+0x00000001u; // 8034C548
  c->r[6]=0u+0x00000002u; // 8034C54C
  W32(c->r[29]+0x00000010u,c->r[0]); // 8034C550
  W32(c->r[29]+0x00000014u,c->r[31]); // 8034C554
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C558
  c->lr=0x8034C560u; f_8034E0A4(c); // 8034C55C
L_8034C560:;
  c->r[11]=c->r[1]+0x00000030u; // 8034C560
  c->lr=0x8034C568u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C564
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034C568
  c->lr=c->r[0]; // 8034C56C
  c->r[1]=c->r[1]+0x00000030u; // 8034C570
  return; // 8034C574
}

// ISFS_CreateFile
void f_8034C578(Ctx* __restrict c) {
  trace_call(0x8034C578u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C578
  c->r[0]=c->lr; // 8034C57C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034C580
  c->r[11]=c->r[1]+0x00000030u; // 8034C584
  c->lr=0x8034C58Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C588
  cmps(c,0,(int32_t)c->r[3],0); // 8034C58C
  c->r[25]=c->r[3]|c->r[3]; // 8034C590
  c->r[26]=c->r[4]|c->r[4]; // 8034C594
  c->r[27]=c->r[5]|c->r[5]; // 8034C598
  c->r[28]=c->r[6]|c->r[6]; // 8034C59C
  c->r[29]=c->r[7]|c->r[7]; // 8034C5A0
  c->r[30]=0u+0x00000000u; // 8034C5A4
  if (crb(c,2)) { goto L_8034C5CC; } // 8034C5A8
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034C5AC
  cmps(c,0,(int32_t)c->r[0],0); // 8034C5B0
  if (crb(c,0)) { goto L_8034C5CC; } // 8034C5B4
  c->r[4]=0u+0x00000040u; // 8034C5B8
  c->lr=0x8034C5C0u; f_8034CCD8(c); // 8034C5BC
  cmpu(c,0,c->r[3],0x00000040u); // 8034C5C0
  c->r[31]=c->r[3]|c->r[3]; // 8034C5C4
  if (!crb(c,2)) { goto L_8034C5D4; } // 8034C5C8
L_8034C5CC:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8034C5CC
  goto L_8034C638; // 8034C5D0
L_8034C5D4:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C5D4
  c->r[4]=0u+0x00000140u; // 8034C5D8
  c->r[5]=0u+0x00000020u; // 8034C5DC
  c->lr=0x8034C5E4u; f_8034E894(c); // 8034C5E0
  cmps(c,0,(int32_t)c->r[3],0); // 8034C5E4
  c->r[30]=c->r[3]|c->r[3]; // 8034C5E8
  if (!crb(c,2)) { goto L_8034C5F8; } // 8034C5EC
  c->r[31]=0u+0xFFFFFFEAu; // 8034C5F0
  goto L_8034C638; // 8034C5F4
L_8034C5F8:;
  c->r[4]=c->r[25]|c->r[25]; // 8034C5F8
  c->r[5]=c->r[31]+0x00000001u; // 8034C5FC
  c->r[3]=c->r[3]+0x00000006u; // 8034C600
  c->lr=0x8034C608u; f_8000626C(c); // 8034C604
  W8(c->r[30]+0x00000049u,c->r[26]); // 8034C608
  c->r[5]=c->r[30]|c->r[30]; // 8034C60C
  c->r[4]=0u+0x00000009u; // 8034C610
  c->r[6]=0u+0x0000004Cu; // 8034C614
  W8(c->r[30]+0x00000046u,c->r[27]); // 8034C618
  c->r[7]=0u+0x00000000u; // 8034C61C
  c->r[8]=0u+0x00000000u; // 8034C620
  W8(c->r[30]+0x00000047u,c->r[28]); // 8034C624
  W8(c->r[30]+0x00000048u,c->r[29]); // 8034C628
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C62C
  c->lr=0x8034C634u; f_8034DE38(c); // 8034C630
  c->r[31]=c->r[3]|c->r[3]; // 8034C634
L_8034C638:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034C638
  if (crb(c,2)) { goto L_8034C650; } // 8034C63C
  if (crb(c,2)) { goto L_8034C650; } // 8034C640
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C644
  c->r[4]=c->r[30]|c->r[30]; // 8034C648
  c->lr=0x8034C650u; f_8034E898(c); // 8034C64C
L_8034C650:;
  c->r[11]=c->r[1]+0x00000030u; // 8034C650
  c->r[3]=c->r[31]|c->r[31]; // 8034C654
  c->lr=0x8034C65Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C658
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034C65C
  c->lr=c->r[0]; // 8034C660
  c->r[1]=c->r[1]+0x00000030u; // 8034C664
  return; // 8034C668
}

// ISFS_CreateFileAsync
void f_8034C66C(Ctx* __restrict c) {
  trace_call(0x8034C66Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C66C
  c->r[0]=c->lr; // 8034C670
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034C674
  c->r[11]=c->r[1]+0x00000030u; // 8034C678
  c->lr=0x8034C680u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C67C
  cmps(c,0,(int32_t)c->r[3],0); // 8034C680
  c->r[23]=c->r[3]|c->r[3]; // 8034C684
  c->r[24]=c->r[4]|c->r[4]; // 8034C688
  c->r[25]=c->r[5]|c->r[5]; // 8034C68C
  c->r[26]=c->r[6]|c->r[6]; // 8034C690
  c->r[27]=c->r[7]|c->r[7]; // 8034C694
  c->r[28]=c->r[8]|c->r[8]; // 8034C698
  c->r[29]=c->r[9]|c->r[9]; // 8034C69C
  if (crb(c,2)) { goto L_8034C6C4; } // 8034C6A0
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034C6A4
  cmps(c,0,(int32_t)c->r[0],0); // 8034C6A8
  if (crb(c,0)) { goto L_8034C6C4; } // 8034C6AC
  c->r[4]=0u+0x00000040u; // 8034C6B0
  c->lr=0x8034C6B8u; f_8034CCD8(c); // 8034C6B4
  cmpu(c,0,c->r[3],0x00000040u); // 8034C6B8
  c->r[31]=c->r[3]|c->r[3]; // 8034C6BC
  if (!crb(c,2)) { goto L_8034C6CC; } // 8034C6C0
L_8034C6C4:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034C6C4
  goto L_8034C748; // 8034C6C8
L_8034C6CC:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C6CC
  c->r[4]=0u+0x00000140u; // 8034C6D0
  c->r[5]=0u+0x00000020u; // 8034C6D4
  c->lr=0x8034C6DCu; f_8034E894(c); // 8034C6D8
  cmps(c,0,(int32_t)c->r[3],0); // 8034C6DC
  c->r[30]=c->r[3]|c->r[3]; // 8034C6E0
  if (!crb(c,2)) { goto L_8034C6F0; } // 8034C6E4
  c->r[3]=0u+0xFFFFFF8Au; // 8034C6E8
  goto L_8034C748; // 8034C6EC
L_8034C6F0:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 8034C6F0
  c->r[0]=0u+0x00000000u; // 8034C6F4
  c->r[4]=c->r[23]|c->r[23]; // 8034C6F8
  c->r[5]=c->r[31]+0x00000001u; // 8034C6FC
  W32(c->r[3]+0x00000104u,c->r[29]); // 8034C700
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034C704
  c->r[3]=c->r[3]+0x00000006u; // 8034C708
  c->lr=0x8034C710u; f_8000626C(c); // 8034C70C
  W8(c->r[30]+0x00000049u,c->r[24]); // 8034C710
  c->r[9]=0u+0x80350000u; // 8034C714
  c->r[5]=c->r[30]|c->r[30]; // 8034C718
  c->r[10]=c->r[30]|c->r[30]; // 8034C71C
  W8(c->r[30]+0x00000046u,c->r[25]); // 8034C720
  c->r[9]=c->r[9]+0xFFFFB7E0u; // 8034C724
  c->r[4]=0u+0x00000009u; // 8034C728
  c->r[6]=0u+0x0000004Cu; // 8034C72C
  W8(c->r[30]+0x00000047u,c->r[26]); // 8034C730
  c->r[7]=0u+0x00000000u; // 8034C734
  c->r[8]=0u+0x00000000u; // 8034C738
  W8(c->r[30]+0x00000048u,c->r[27]); // 8034C73C
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034C740
  c->lr=0x8034C748u; f_8034DD00(c); // 8034C744
L_8034C748:;
  c->r[11]=c->r[1]+0x00000030u; // 8034C748
  c->lr=0x8034C750u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C74C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034C750
  c->lr=c->r[0]; // 8034C754
  c->r[1]=c->r[1]+0x00000030u; // 8034C758
  return; // 8034C75C
}

// ISFS_Open
void f_8034C760(Ctx* __restrict c) {
  trace_call(0x8034C760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C760
  c->r[0]=c->lr; // 8034C764
  cmps(c,0,(int32_t)c->r[3],0); // 8034C768
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034C76C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034C770
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034C774
  c->r[30]=0u+0x00000000u; // 8034C778
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034C77C
  c->r[29]=c->r[4]|c->r[4]; // 8034C780
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034C784
  c->r[28]=c->r[3]|c->r[3]; // 8034C788
  if (crb(c,2)) { goto L_8034C7A4; } // 8034C78C
  c->r[4]=0u+0x00000040u; // 8034C790
  c->lr=0x8034C798u; f_8034CCD8(c); // 8034C794
  cmpu(c,0,c->r[3],0x00000040u); // 8034C798
  c->r[31]=c->r[3]|c->r[3]; // 8034C79C
  if (!crb(c,2)) { goto L_8034C7AC; } // 8034C7A0
L_8034C7A4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 8034C7A4
  goto L_8034C7EC; // 8034C7A8
L_8034C7AC:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C7AC
  c->r[4]=0u+0x00000140u; // 8034C7B0
  c->r[5]=0u+0x00000020u; // 8034C7B4
  c->lr=0x8034C7BCu; f_8034E894(c); // 8034C7B8
  cmps(c,0,(int32_t)c->r[3],0); // 8034C7BC
  c->r[30]=c->r[3]|c->r[3]; // 8034C7C0
  if (!crb(c,2)) { goto L_8034C7D0; } // 8034C7C4
  c->r[31]=0u+0xFFFFFFEAu; // 8034C7C8
  goto L_8034C7EC; // 8034C7CC
L_8034C7D0:;
  c->r[4]=c->r[28]|c->r[28]; // 8034C7D0
  c->r[5]=c->r[31]+0x00000001u; // 8034C7D4
  c->lr=0x8034C7DCu; f_8000626C(c); // 8034C7D8
  c->r[3]=c->r[30]|c->r[30]; // 8034C7DC
  c->r[4]=c->r[29]|c->r[29]; // 8034C7E0
  c->lr=0x8034C7E8u; f_8034D588(c); // 8034C7E4
  c->r[31]=c->r[3]|c->r[3]; // 8034C7E8
L_8034C7EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034C7EC
  if (crb(c,2)) { goto L_8034C804; } // 8034C7F0
  if (crb(c,2)) { goto L_8034C804; } // 8034C7F4
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C7F8
  c->r[4]=c->r[30]|c->r[30]; // 8034C7FC
  c->lr=0x8034C804u; f_8034E898(c); // 8034C800
L_8034C804:;
  c->r[3]=c->r[31]|c->r[31]; // 8034C804
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034C808
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034C80C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034C810
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034C814
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034C818
  c->lr=c->r[0]; // 8034C81C
  c->r[1]=c->r[1]+0x00000020u; // 8034C820
  return; // 8034C824
}

// ISFS_OpenAsync
void f_8034C828(Ctx* __restrict c) {
  trace_call(0x8034C828u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C828
  c->r[0]=c->lr; // 8034C82C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034C830
  c->r[11]=c->r[1]+0x00000020u; // 8034C834
  c->lr=0x8034C83Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C838
  cmps(c,0,(int32_t)c->r[3],0); // 8034C83C
  c->r[26]=c->r[3]|c->r[3]; // 8034C840
  c->r[27]=c->r[4]|c->r[4]; // 8034C844
  c->r[28]=c->r[5]|c->r[5]; // 8034C848
  c->r[29]=c->r[6]|c->r[6]; // 8034C84C
  if (crb(c,2)) { goto L_8034C868; } // 8034C850
  c->r[4]=0u+0x00000040u; // 8034C854
  c->lr=0x8034C85Cu; f_8034CCD8(c); // 8034C858
  cmpu(c,0,c->r[3],0x00000040u); // 8034C85C
  c->r[31]=c->r[3]|c->r[3]; // 8034C860
  if (!crb(c,2)) { goto L_8034C870; } // 8034C864
L_8034C868:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034C868
  goto L_8034C8C8; // 8034C86C
L_8034C870:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C870
  c->r[4]=0u+0x00000140u; // 8034C874
  c->r[5]=0u+0x00000020u; // 8034C878
  c->lr=0x8034C880u; f_8034E894(c); // 8034C87C
  cmps(c,0,(int32_t)c->r[3],0); // 8034C880
  c->r[30]=c->r[3]|c->r[3]; // 8034C884
  if (!crb(c,2)) { goto L_8034C894; } // 8034C888
  c->r[3]=0u+0xFFFFFF8Au; // 8034C88C
  goto L_8034C8C8; // 8034C890
L_8034C894:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 8034C894
  c->r[0]=0u+0x00000000u; // 8034C898
  c->r[4]=c->r[26]|c->r[26]; // 8034C89C
  c->r[5]=c->r[31]+0x00000001u; // 8034C8A0
  W32(c->r[3]+0x00000104u,c->r[29]); // 8034C8A4
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034C8A8
  c->lr=0x8034C8B0u; f_8000626C(c); // 8034C8AC
  c->r[5]=0u+0x80350000u; // 8034C8B0
  c->r[3]=c->r[30]|c->r[30]; // 8034C8B4
  c->r[4]=c->r[27]|c->r[27]; // 8034C8B8
  c->r[6]=c->r[30]|c->r[30]; // 8034C8BC
  c->r[5]=c->r[5]+0xFFFFB7E0u; // 8034C8C0
  c->lr=0x8034C8C8u; f_8034D470(c); // 8034C8C4
L_8034C8C8:;
  c->r[11]=c->r[1]+0x00000020u; // 8034C8C8
  c->lr=0x8034C8D0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C8CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034C8D0
  c->lr=c->r[0]; // 8034C8D4
  c->r[1]=c->r[1]+0x00000020u; // 8034C8D8
  return; // 8034C8DC
}

// ISFS_SeekAsync
void f_8034C8E0(Ctx* __restrict c) {
  trace_call(0x8034C8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C8E0
  c->r[0]=c->lr; // 8034C8E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034C8E8
  c->r[11]=c->r[1]+0x00000020u; // 8034C8EC
  c->lr=0x8034C8F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C8F0
  c->r[27]=c->r[3]|c->r[3]; // 8034C8F4
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C8F8
  c->r[28]=c->r[4]|c->r[4]; // 8034C8FC
  c->r[29]=c->r[5]|c->r[5]; // 8034C900
  c->r[30]=c->r[6]|c->r[6]; // 8034C904
  c->r[31]=c->r[7]|c->r[7]; // 8034C908
  c->r[4]=0u+0x00000140u; // 8034C90C
  c->r[5]=0u+0x00000020u; // 8034C910
  c->lr=0x8034C918u; f_8034E894(c); // 8034C914
  cmps(c,0,(int32_t)c->r[3],0); // 8034C918
  if (!crb(c,2)) { goto L_8034C928; } // 8034C91C
  c->r[3]=0u+0xFFFFFF8Au; // 8034C920
  goto L_8034C954; // 8034C924
L_8034C928:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 8034C928
  c->r[6]=0u+0x80350000u; // 8034C92C
  c->r[0]=0u+0x00000000u; // 8034C930
  c->r[4]=c->r[28]|c->r[28]; // 8034C934
  W32(c->r[3]+0x00000104u,c->r[31]); // 8034C938
  c->r[5]=c->r[29]|c->r[29]; // 8034C93C
  c->r[7]=c->r[3]|c->r[3]; // 8034C940
  c->r[6]=c->r[6]+0xFFFFB7E0u; // 8034C944
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034C948
  c->r[3]=c->r[27]|c->r[27]; // 8034C94C
  c->lr=0x8034C954u; f_8034DC20(c); // 8034C950
L_8034C954:;
  c->r[11]=c->r[1]+0x00000020u; // 8034C954
  c->lr=0x8034C95Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034C958
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034C95C
  c->lr=c->r[0]; // 8034C960
  c->r[1]=c->r[1]+0x00000020u; // 8034C964
  return; // 8034C968
}

// ISFS_Read
void f_8034C96C(Ctx* __restrict c) {
  trace_call(0x8034C96Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8034C96C
  if (crb(c,2)) { goto L_8034C97C; } // 8034C970
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 8034C974
  if (crb(c,2)) { goto L_8034C984; } // 8034C978
L_8034C97C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034C97C
  return; // 8034C980
L_8034C984:;
  f_8034D910(c); return; // 8034C984
  return; // 8034C988
}

// ISFS_ReadAsync
void f_8034C98C(Ctx* __restrict c) {
  trace_call(0x8034C98Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034C98C
  c->r[0]=c->lr; // 8034C990
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034C994
  c->r[11]=c->r[1]+0x00000020u; // 8034C998
  c->lr=0x8034C9A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034C99C
  cmps(c,0,(int32_t)c->r[4],0); // 8034C9A0
  c->r[27]=c->r[3]|c->r[3]; // 8034C9A4
  c->r[28]=c->r[4]|c->r[4]; // 8034C9A8
  c->r[29]=c->r[5]|c->r[5]; // 8034C9AC
  c->r[30]=c->r[6]|c->r[6]; // 8034C9B0
  c->r[31]=c->r[7]|c->r[7]; // 8034C9B4
  if (crb(c,2)) { goto L_8034C9C4; } // 8034C9B8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 8034C9BC
  if (crb(c,2)) { goto L_8034C9CC; } // 8034C9C0
L_8034C9C4:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034C9C4
  goto L_8034CA18; // 8034C9C8
L_8034C9CC:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034C9CC
  c->r[4]=0u+0x00000140u; // 8034C9D0
  c->r[5]=0u+0x00000020u; // 8034C9D4
  c->lr=0x8034C9DCu; f_8034E894(c); // 8034C9D8
  cmps(c,0,(int32_t)c->r[3],0); // 8034C9DC
  if (!crb(c,2)) { goto L_8034C9EC; } // 8034C9E0
  c->r[3]=0u+0xFFFFFF8Au; // 8034C9E4
  goto L_8034CA18; // 8034C9E8
L_8034C9EC:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 8034C9EC
  c->r[6]=0u+0x80350000u; // 8034C9F0
  c->r[0]=0u+0x00000000u; // 8034C9F4
  c->r[4]=c->r[28]|c->r[28]; // 8034C9F8
  W32(c->r[3]+0x00000104u,c->r[31]); // 8034C9FC
  c->r[5]=c->r[29]|c->r[29]; // 8034CA00
  c->r[7]=c->r[3]|c->r[3]; // 8034CA04
  c->r[6]=c->r[6]+0xFFFFB7E0u; // 8034CA08
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034CA0C
  c->r[3]=c->r[27]|c->r[27]; // 8034CA10
  c->lr=0x8034CA18u; f_8034D810(c); // 8034CA14
L_8034CA18:;
  c->r[11]=c->r[1]+0x00000020u; // 8034CA18
  c->lr=0x8034CA20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034CA1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034CA20
  c->lr=c->r[0]; // 8034CA24
  c->r[1]=c->r[1]+0x00000020u; // 8034CA28
  return; // 8034CA2C
}

// ISFS_Write
void f_8034CA30(Ctx* __restrict c) {
  trace_call(0x8034CA30u);
  cmps(c,0,(int32_t)c->r[4],0); // 8034CA30
  if (crb(c,2)) { goto L_8034CA40; } // 8034CA34
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 8034CA38
  if (crb(c,2)) { goto L_8034CA48; } // 8034CA3C
L_8034CA40:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034CA40
  return; // 8034CA44
L_8034CA48:;
  f_8034DB18(c); return; // 8034CA48
  return; // 8034CA4C
}

// ISFS_WriteAsync
void f_8034CA50(Ctx* __restrict c) {
  trace_call(0x8034CA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034CA50
  c->r[0]=c->lr; // 8034CA54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034CA58
  c->r[11]=c->r[1]+0x00000020u; // 8034CA5C
  c->lr=0x8034CA64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034CA60
  cmps(c,0,(int32_t)c->r[4],0); // 8034CA64
  c->r[27]=c->r[3]|c->r[3]; // 8034CA68
  c->r[28]=c->r[4]|c->r[4]; // 8034CA6C
  c->r[29]=c->r[5]|c->r[5]; // 8034CA70
  c->r[30]=c->r[6]|c->r[6]; // 8034CA74
  c->r[31]=c->r[7]|c->r[7]; // 8034CA78
  if (crb(c,2)) { goto L_8034CA88; } // 8034CA7C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 8034CA80
  if (crb(c,2)) { goto L_8034CA90; } // 8034CA84
L_8034CA88:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8034CA88
  goto L_8034CADC; // 8034CA8C
L_8034CA90:;
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034CA90
  c->r[4]=0u+0x00000140u; // 8034CA94
  c->r[5]=0u+0x00000020u; // 8034CA98
  c->lr=0x8034CAA0u; f_8034E894(c); // 8034CA9C
  cmps(c,0,(int32_t)c->r[3],0); // 8034CAA0
  if (!crb(c,2)) { goto L_8034CAB0; } // 8034CAA4
  c->r[3]=0u+0xFFFFFF8Au; // 8034CAA8
  goto L_8034CADC; // 8034CAAC
L_8034CAB0:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 8034CAB0
  c->r[6]=0u+0x80350000u; // 8034CAB4
  c->r[0]=0u+0x00000000u; // 8034CAB8
  c->r[4]=c->r[28]|c->r[28]; // 8034CABC
  W32(c->r[3]+0x00000104u,c->r[31]); // 8034CAC0
  c->r[5]=c->r[29]|c->r[29]; // 8034CAC4
  c->r[7]=c->r[3]|c->r[3]; // 8034CAC8
  c->r[6]=c->r[6]+0xFFFFB7E0u; // 8034CACC
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034CAD0
  c->r[3]=c->r[27]|c->r[27]; // 8034CAD4
  c->lr=0x8034CADCu; f_8034DA18(c); // 8034CAD8
L_8034CADC:;
  c->r[11]=c->r[1]+0x00000020u; // 8034CADC
  c->lr=0x8034CAE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034CAE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034CAE4
  c->lr=c->r[0]; // 8034CAE8
  c->r[1]=c->r[1]+0x00000020u; // 8034CAEC
  return; // 8034CAF0
}

// fn_8034CAF4
void f_8034CAF4(Ctx* __restrict c) {
  trace_call(0x8034CAF4u);
  f_8034D768(c); return; // 8034CAF4
}

// ISFS_CloseAsync
void f_8034CAF8(Ctx* __restrict c) {
  trace_call(0x8034CAF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034CAF8
  c->r[0]=c->lr; // 8034CAFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034CB00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034CB04
  c->r[31]=c->r[5]|c->r[5]; // 8034CB08
  c->r[5]=0u+0x00000020u; // 8034CB0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034CB10
  c->r[30]=c->r[4]|c->r[4]; // 8034CB14
  c->r[4]=0u+0x00000140u; // 8034CB18
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034CB1C
  c->r[29]=c->r[3]|c->r[3]; // 8034CB20
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034CB24
  c->lr=0x8034CB2Cu; f_8034E894(c); // 8034CB28
  cmps(c,0,(int32_t)c->r[3],0); // 8034CB2C
  if (!crb(c,2)) { goto L_8034CB3C; } // 8034CB30
  c->r[3]=0u+0xFFFFFF8Au; // 8034CB34
  goto L_8034CB60; // 8034CB38
L_8034CB3C:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 8034CB3C
  c->r[4]=0u+0x80350000u; // 8034CB40
  c->r[0]=0u+0x00000000u; // 8034CB44
  c->r[5]=c->r[3]|c->r[3]; // 8034CB48
  W32(c->r[3]+0x00000104u,c->r[31]); // 8034CB4C
  c->r[4]=c->r[4]+0xFFFFB7E0u; // 8034CB50
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034CB54
  c->r[3]=c->r[29]|c->r[29]; // 8034CB58
  c->lr=0x8034CB60u; f_8034D6A8(c); // 8034CB5C
L_8034CB60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034CB60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034CB64
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034CB68
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034CB6C
  c->lr=c->r[0]; // 8034CB70
  c->r[1]=c->r[1]+0x00000020u; // 8034CB74
  return; // 8034CB78
}

// ISFS_ShutdownAsync
void f_8034CB7C(Ctx* __restrict c) {
  trace_call(0x8034CB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034CB7C
  c->r[0]=c->lr; // 8034CB80
  c->r[5]=0u+0x00000020u; // 8034CB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034CB88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034CB8C
  c->r[31]=c->r[4]|c->r[4]; // 8034CB90
  c->r[4]=0u+0x00000140u; // 8034CB94
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034CB98
  c->r[30]=c->r[3]|c->r[3]; // 8034CB9C
  c->r[3]=R32(c->r[13]+0xFFFFEEFCu); // 8034CBA0
  c->lr=0x8034CBA8u; f_8034E894(c); // 8034CBA4
  c->r[0]=R32(c->r[13]+0xFFFFDAB0u); // 8034CBA8
  cmps(c,0,(int32_t)c->r[0],0); // 8034CBAC
  if (!crb(c,0)) { goto L_8034CBBC; } // 8034CBB0
  c->r[3]=0u+0xFFFFFF9Bu; // 8034CBB4
  goto L_8034CBF4; // 8034CBB8
L_8034CBBC:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 8034CBBC
  c->r[9]=0u+0x80350000u; // 8034CBC0
  c->r[0]=0u+0x00000000u; // 8034CBC4
  c->r[10]=c->r[3]|c->r[3]; // 8034CBC8
  W32(c->r[3]+0x00000104u,c->r[31]); // 8034CBCC
  c->r[9]=c->r[9]+0xFFFFB7E0u; // 8034CBD0
  c->r[4]=0u+0x0000000Du; // 8034CBD4
  c->r[5]=0u+0x00000000u; // 8034CBD8
  W32(c->r[3]+0x00000108u,c->r[0]); // 8034CBDC
  c->r[6]=0u+0x00000000u; // 8034CBE0
  c->r[7]=0u+0x00000000u; // 8034CBE4
  c->r[8]=0u+0x00000000u; // 8034CBE8
  c->r[3]=R32(c->r[13]+0xFFFFDAB0u); // 8034CBEC
  c->lr=0x8034CBF4u; f_8034DD00(c); // 8034CBF0
L_8034CBF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034CBF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034CBF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034CBFC
  c->lr=c->r[0]; // 8034CC00
  c->r[1]=c->r[1]+0x00000010u; // 8034CC04
  return; // 8034CC08
}

// IPCInit
void f_8034CC0C(Ctx* __restrict c) {
  trace_call(0x8034CC0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034CC0C
  c->r[0]=c->lr; // 8034CC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034CC14
  c->r[0]=R8(c->r[13]+0xFFFFEF00u); // 8034CC18
  cmps(c,0,(int32_t)c->r[0],0); // 8034CC1C
  if (!crb(c,2)) { goto L_8034CC48; } // 8034CC20
  c->lr=0x8034CC28u; f_80326B14(c); // 8034CC24
  W32(c->r[13]+0xFFFFEF10u,c->r[3]); // 8034CC28
  c->lr=0x8034CC30u; f_80326B1C(c); // 8034CC2C
  c->r[4]=R32(c->r[13]+0xFFFFEF10u); // 8034CC30
  c->r[0]=0u+0x00000001u; // 8034CC34
  W32(c->r[13]+0xFFFFEF0Cu,c->r[3]); // 8034CC38
  W32(c->r[13]+0xFFFFEF08u,c->r[4]); // 8034CC3C
  W32(c->r[13]+0xFFFFEF04u,c->r[3]); // 8034CC40
  W8(c->r[13]+0xFFFFEF00u,c->r[0]); // 8034CC44
L_8034CC48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034CC48
  c->lr=c->r[0]; // 8034CC4C
  c->r[1]=c->r[1]+0x00000010u; // 8034CC50
  return; // 8034CC54
}

// IPCReInit
void f_8034CC58(Ctx* __restrict c) {
  trace_call(0x8034CC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034CC58
  c->r[0]=c->lr; // 8034CC5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034CC60
  c->r[0]=0u+0x00000000u; // 8034CC64
  W8(c->r[13]+0xFFFFEF00u,c->r[0]); // 8034CC68
  c->lr=0x8034CC70u; f_80326B14(c); // 8034CC6C
  W32(c->r[13]+0xFFFFEF10u,c->r[3]); // 8034CC70
  c->lr=0x8034CC78u; f_80326B1C(c); // 8034CC74
  c->r[4]=R32(c->r[13]+0xFFFFEF10u); // 8034CC78
  c->r[0]=0u+0x00000001u; // 8034CC7C
  W32(c->r[13]+0xFFFFEF0Cu,c->r[3]); // 8034CC80
  W32(c->r[13]+0xFFFFEF08u,c->r[4]); // 8034CC84
  W32(c->r[13]+0xFFFFEF04u,c->r[3]); // 8034CC88
  W8(c->r[13]+0xFFFFEF00u,c->r[0]); // 8034CC8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034CC90
  c->lr=c->r[0]; // 8034CC94
  c->r[1]=c->r[1]+0x00000010u; // 8034CC98
  return; // 8034CC9C
}

// IPCReadReg
void f_8034CCA0(Ctx* __restrict c) {
  trace_call(0x8034CCA0u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8034CCA0
  c->r[3]=0u+0xCD000000u; // 8034CCA4
  c->r[3]=R32(c->r[3]+c->r[0]); // 8034CCA8
  return; // 8034CCAC
}

// IPCWriteReg
void f_8034CCB0(Ctx* __restrict c) {
  trace_call(0x8034CCB0u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8034CCB0
  c->r[3]=0u+0xCD000000u; // 8034CCB4
  W32(c->r[3]+c->r[0],c->r[4]); // 8034CCB8
  return; // 8034CCBC
}

// IPCGetBufferHi
void f_8034CCC0(Ctx* __restrict c) {
  trace_call(0x8034CCC0u);
  c->r[3]=R32(c->r[13]+0xFFFFEF08u); // 8034CCC0
  return; // 8034CCC4
}

// IPCGetBufferLo
void f_8034CCC8(Ctx* __restrict c) {
  trace_call(0x8034CCC8u);
  c->r[3]=R32(c->r[13]+0xFFFFEF04u); // 8034CCC8
  return; // 8034CCCC
}

// IPCSetBufferLo
void f_8034CCD0(Ctx* __restrict c) {
  trace_call(0x8034CCD0u);
  W32(c->r[13]+0xFFFFEF04u,c->r[3]); // 8034CCD0
  return; // 8034CCD4
}

// strnlen
void f_8034CCD8(Ctx* __restrict c) {
  trace_call(0x8034CCD8u);
  c->r[5]=c->r[3]|c->r[3]; // 8034CCD8
  goto L_8034CCE4; // 8034CCDC
L_8034CCE0:;
  c->r[5]=c->r[5]+0x00000001u; // 8034CCE0
L_8034CCE4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8034CCE4
  cmps(c,0,(int32_t)c->r[0],0); // 8034CCE8
  if (crb(c,2)) { goto L_8034CCFC; } // 8034CCEC
  cmps(c,0,(int32_t)c->r[4],0); // 8034CCF0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8034CCF4
  if (!crb(c,2)) { IRQCHK(c); goto L_8034CCE0; } // 8034CCF8
L_8034CCFC:;
  c->r[3]=c->r[5]-c->r[3]; // 8034CCFC
  return; // 8034CD00
}

// IpcReplyHandler
void f_8034CD04(Ctx* __restrict c) {
  trace_call(0x8034CD04u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034CD04
  c->r[0]=c->lr; // 8034CD08
  c->r[3]=0u+0x00000002u; // 8034CD0C
  W32(c->r[1]+0x000002E4u,c->r[0]); // 8034CD10
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8034CD14
  W32(c->r[1]+0x000002D8u,c->r[30]); // 8034CD18
  c->r[30]=c->r[4]|c->r[4]; // 8034CD1C
  W32(c->r[1]+0x000002D4u,c->r[29]); // 8034CD20
  W32(c->r[1]+0x000002D0u,c->r[28]); // 8034CD24
  c->lr=0x8034CD2Cu; f_8034CCA0(c); // 8034CD28
  cmps(c,0,(int32_t)c->r[3],0); // 8034CD2C
  if (crb(c,2)) { goto L_8034CF3C; } // 8034CD30
  c->r[31]=c->r[3]+0x80000000u; // 8034CD34
  c->r[3]=0u+0x00000001u; // 8034CD38
  c->lr=0x8034CD40u; f_8034CCA0(c); // 8034CD3C
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 8034CD40
  c->r[3]=0u+0x00000001u; // 8034CD44
  c->r[4]=c->r[0]|0x00000004u; // 8034CD48
  c->lr=0x8034CD50u; f_8034CCB0(c); // 8034CD4C
  c->r[0]=0u+0x40000000u; // 8034CD50
  c->r[3]=0u+0xCD000000u; // 8034CD54
  W32(c->r[3]+0x00000030u,c->r[0]); // 8034CD58
  c->r[3]=c->r[31]|c->r[31]; // 8034CD5C
  c->r[4]=0u+0x00000020u; // 8034CD60
  c->lr=0x8034CD68u; f_8031DAC4(c); // 8034CD64
  c->r[0]=R32(c->r[31]+0x00000008u); // 8034CD68
  cmps(c,0,(int32_t)c->r[0],6); // 8034CD6C
  if (crb(c,2)) { goto L_8034CDC4; } // 8034CD70
  if (!crb(c,0)) { goto L_8034CD84; } // 8034CD74
  cmps(c,0,(int32_t)c->r[0],3); // 8034CD78
  if (crb(c,2)) { goto L_8034CD90; } // 8034CD7C
  goto L_8034CEC0; // 8034CD80
L_8034CD84:;
  cmps(c,0,(int32_t)c->r[0],8); // 8034CD84
  if (!crb(c,0)) { goto L_8034CEC0; } // 8034CD88
  goto L_8034CDFC; // 8034CD8C
L_8034CD90:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8034CD90
  cmps(c,0,(int32_t)c->r[3],0); // 8034CD94
  if (crb(c,2)) { goto L_8034CDA4; } // 8034CD98
  c->r[0]=c->r[3]+0x80000000u; // 8034CD9C
  goto L_8034CDA8; // 8034CDA0
L_8034CDA4:;
  c->r[0]=0u+0x00000000u; // 8034CDA4
L_8034CDA8:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8034CDA8
  c->r[4]=R32(c->r[31]+0x00000004u); // 8034CDAC
  cmps(c,0,(int32_t)c->r[4],0); // 8034CDB0
  if (!crb(c,1)) { goto L_8034CEC0; } // 8034CDB4
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8034CDB8
  c->lr=0x8034CDC0u; f_8031DAC4(c); // 8034CDBC
  goto L_8034CEC0; // 8034CDC0
L_8034CDC4:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8034CDC4
  cmps(c,0,(int32_t)c->r[3],0); // 8034CDC8
  if (crb(c,2)) { goto L_8034CDD8; } // 8034CDCC
  c->r[0]=c->r[3]+0x80000000u; // 8034CDD0
  goto L_8034CDDC; // 8034CDD4
L_8034CDD8:;
  c->r[0]=0u+0x00000000u; // 8034CDD8
L_8034CDDC:;
  W32(c->r[31]+0x00000018u,c->r[0]); // 8034CDDC
  c->r[3]=R32(c->r[31]+0x00000010u); // 8034CDE0
  c->r[4]=R32(c->r[31]+0x00000014u); // 8034CDE4
  c->lr=0x8034CDECu; f_8031DAC4(c); // 8034CDE8
  c->r[3]=R32(c->r[31]+0x00000018u); // 8034CDEC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8034CDF0
  c->lr=0x8034CDF8u; f_8031DAC4(c); // 8034CDF4
  goto L_8034CEC0; // 8034CDF8
L_8034CDFC:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8034CDFC
  cmps(c,0,(int32_t)c->r[3],0); // 8034CE00
  if (crb(c,2)) { goto L_8034CE10; } // 8034CE04
  c->r[3]=c->r[3]+0x80000000u; // 8034CE08
  goto L_8034CE14; // 8034CE0C
L_8034CE10:;
  c->r[3]=0u+0x00000000u; // 8034CE10
L_8034CE14:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 8034CE14
  c->r[4]=R32(c->r[31]+0x00000010u); // 8034CE18
  c->r[0]=R32(c->r[31]+0x00000014u); // 8034CE1C
  c->r[0]=c->r[4]+c->r[0]; // 8034CE20
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8034CE24
  c->lr=0x8034CE2Cu; f_8031DAC4(c); // 8034CE28
  c->r[28]=0u+0x00000000u; // 8034CE2C
  c->r[29]=0u+0x00000000u; // 8034CE30
  goto L_8034CE78; // 8034CE34
L_8034CE38:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8034CE38
  c->r[3]=R32(c->r[3]+c->r[29]); // 8034CE3C
  cmps(c,0,(int32_t)c->r[3],0); // 8034CE40
  if (crb(c,2)) { goto L_8034CE50; } // 8034CE44
  c->r[0]=c->r[3]+0x80000000u; // 8034CE48
  goto L_8034CE54; // 8034CE4C
L_8034CE50:;
  c->r[0]=0u+0x00000000u; // 8034CE50
L_8034CE54:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8034CE54
  W32(c->r[3]+c->r[29],c->r[0]); // 8034CE58
  c->r[3]=R32(c->r[31]+0x00000018u); // 8034CE5C
  c->r[4]=c->r[3]+c->r[29]; // 8034CE60
  c->r[3]=R32(c->r[3]+c->r[29]); // 8034CE64
  c->r[4]=R32(c->r[4]+0x00000004u); // 8034CE68
  c->lr=0x8034CE70u; f_8031DAC4(c); // 8034CE6C
  c->r[28]=c->r[28]+0x00000001u; // 8034CE70
  c->r[29]=c->r[29]+0x00000008u; // 8034CE74
L_8034CE78:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8034CE78
  c->r[0]=R32(c->r[31]+0x00000014u); // 8034CE7C
  c->r[0]=c->r[3]+c->r[0]; // 8034CE80
  cmpu(c,0,c->r[28],c->r[0]); // 8034CE84
  if (crb(c,0)) { IRQCHK(c); goto L_8034CE38; } // 8034CE88
  c->r[0]=R32(c->r[13]+0xFFFFEF18u); // 8034CE8C
  cmps(c,0,(int32_t)c->r[0],0); // 8034CE90
  if (crb(c,2)) { goto L_8034CEC0; } // 8034CE94
  c->r[0]=R32(c->r[13]+0xFFFFEF20u); // 8034CE98
  cmpu(c,0,c->r[0],c->r[31]); // 8034CE9C
  if (!crb(c,2)) { goto L_8034CEC0; } // 8034CEA0
  c->r[3]=R32(c->r[13]+0xFFFFDAC0u); // 8034CEA4
  c->r[0]=0u+0x00000000u; // 8034CEA8
  W32(c->r[13]+0xFFFFEF18u,c->r[0]); // 8034CEAC
  cmps(c,0,(int32_t)c->r[3],1); // 8034CEB0
  if (!crb(c,0)) { goto L_8034CEC0; } // 8034CEB4
  c->r[0]=c->r[3]+0x00000001u; // 8034CEB8
  W32(c->r[13]+0xFFFFDAC0u,c->r[0]); // 8034CEBC
L_8034CEC0:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 8034CEC0
  cmps(c,0,(int32_t)c->r[0],0); // 8034CEC4
  if (crb(c,2)) { goto L_8034CF10; } // 8034CEC8
  c->r[3]=c->r[1]+0x00000008u; // 8034CECC
  c->lr=0x8034CED4u; f_8031E5F0(c); // 8034CED0
  c->r[3]=c->r[1]+0x00000008u; // 8034CED4
  c->lr=0x8034CEDCu; f_8031E3C8(c); // 8034CED8
  c->r[12]=R32(c->r[31]+0x00000020u); // 8034CEDC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8034CEE0
  c->r[4]=R32(c->r[31]+0x00000024u); // 8034CEE4
  c->ctr=c->r[12]; // 8034CEE8
  if (true) { c->lr=0x8034CEF0u; dispatch(c,c->ctr); } // 8034CEEC
  c->r[3]=c->r[1]+0x00000008u; // 8034CEF0
  c->lr=0x8034CEF8u; f_8031E5F0(c); // 8034CEF4
  c->r[3]=c->r[30]|c->r[30]; // 8034CEF8
  c->lr=0x8034CF00u; f_8031E3C8(c); // 8034CEFC
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034CF00
  c->r[4]=c->r[31]|c->r[31]; // 8034CF04
  c->lr=0x8034CF0Cu; f_8034E898(c); // 8034CF08
  goto L_8034CF18; // 8034CF0C
L_8034CF10:;
  c->r[3]=c->r[31]+0x0000002Cu; // 8034CF10
  c->lr=0x8034CF18u; f_803263D4(c); // 8034CF14
L_8034CF18:;
  c->r[3]=0u+0x00000001u; // 8034CF18
  c->lr=0x8034CF20u; f_8034CCA0(c); // 8034CF1C
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 8034CF20
  c->r[3]=0u+0x00000001u; // 8034CF24
  c->r[4]=c->r[0]|0x00000008u; // 8034CF28
  c->lr=0x8034CF30u; f_8034CCB0(c); // 8034CF2C
  c->r[4]=R32(c->r[31]+0x00000008u); // 8034CF30
  c->r[3]=c->r[31]|c->r[31]; // 8034CF34
  c->lr=0x8034CF3Cu; f_8034EBCC(c); // 8034CF38
L_8034CF3C:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 8034CF3C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 8034CF40
  c->r[30]=R32(c->r[1]+0x000002D8u); // 8034CF44
  c->r[29]=R32(c->r[1]+0x000002D4u); // 8034CF48
  c->r[28]=R32(c->r[1]+0x000002D0u); // 8034CF4C
  c->lr=c->r[0]; // 8034CF50
  c->r[1]=c->r[1]+0x000002E0u; // 8034CF54
  return; // 8034CF58
}

// IPCInterruptHandler
void f_8034CF5C(Ctx* __restrict c) {
  trace_call(0x8034CF5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034CF5C
  c->r[0]=c->lr; // 8034CF60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034CF64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034CF68
  c->r[31]=c->r[4]|c->r[4]; // 8034CF6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034CF70
  c->r[30]=c->r[3]|c->r[3]; // 8034CF74
  c->r[3]=0u+0x00000001u; // 8034CF78
  c->lr=0x8034CF80u; f_8034CCA0(c); // 8034CF7C
  c->r[0]=c->r[3]&0x00000014u; cr0(c,c->r[0]); // 8034CF80
  cmpu(c,0,c->r[0],0x00000014u); // 8034CF84
  if (!crb(c,2)) { goto L_8034CF98; } // 8034CF88
  c->r[3]=c->r[30]|c->r[30]; // 8034CF8C
  c->r[4]=c->r[31]|c->r[31]; // 8034CF90
  c->lr=0x8034CF98u; f_8034CD04(c); // 8034CF94
L_8034CF98:;
  c->r[3]=0u+0x00000001u; // 8034CF98
  c->lr=0x8034CFA0u; f_8034CCA0(c); // 8034CF9C
  c->r[0]=c->r[3]&0x00000022u; cr0(c,c->r[0]); // 8034CFA0
  cmpu(c,0,c->r[0],0x00000022u); // 8034CFA4
  if (!crb(c,2)) { goto L_8034D0F0; } // 8034CFA8
  c->r[3]=0u+0x00000001u; // 8034CFAC
  c->lr=0x8034CFB4u; f_8034CCA0(c); // 8034CFB0
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 8034CFB4
  c->r[3]=0u+0x00000001u; // 8034CFB8
  c->r[4]=c->r[0]|0x00000002u; // 8034CFBC
  c->lr=0x8034CFC4u; f_8034CCB0(c); // 8034CFC0
  c->r[0]=0u+0x40000000u; // 8034CFC4
  c->r[3]=0u+0xCD000000u; // 8034CFC8
  W32(c->r[3]+0x00000030u,c->r[0]); // 8034CFCC
  c->r[31]=R32(c->r[13]+0xFFFFDAC0u); // 8034CFD0
  cmps(c,0,(int32_t)c->r[31],1); // 8034CFD4
  if (!crb(c,0)) { goto L_8034CFE8; } // 8034CFD8
  c->r[31]=c->r[31]+0x00000001u; // 8034CFDC
  W32(c->r[13]+0xFFFFDAC0u,c->r[31]); // 8034CFE0
  c->lr=0x8034CFE8u; f_8034EBBC(c); // 8034CFE4
L_8034CFE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034CFE8
  if (!crb(c,1)) { goto L_8034D0F0; } // 8034CFEC
  c->r[0]=R32(c->r[13]+0xFFFFEF18u); // 8034CFF0
  cmps(c,0,(int32_t)c->r[0],0); // 8034CFF4
  if (crb(c,2)) { goto L_8034D030; } // 8034CFF8
  c->r[3]=R32(c->r[13]+0xFFFFEF1Cu); // 8034CFFC
  c->r[0]=0u+0x00000000u; // 8034D000
  W32(c->r[3]+0x00000004u,c->r[0]); // 8034D004
  c->r[3]=R32(c->r[13]+0xFFFFEF1Cu); // 8034D008
  W32(c->r[13]+0xFFFFEF18u,c->r[0]); // 8034D00C
  c->r[3]=c->r[3]+0x0000002Cu; // 8034D010
  c->lr=0x8034D018u; f_803263D4(c); // 8034D014
  c->r[3]=0u+0x00000001u; // 8034D018
  c->lr=0x8034D020u; f_8034CCA0(c); // 8034D01C
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 8034D020
  c->r[3]=0u+0x00000001u; // 8034D024
  c->r[4]=c->r[0]|0x00000008u; // 8034D028
  c->lr=0x8034D030u; f_8034CCB0(c); // 8034D02C
L_8034D030:;
  c->r[4]=0u+0x80530000u; // 8034D030
  c->r[3]=c->r[4]+0xFFFF8FE0u; // 8034D034
  c->r[4]=R32(c->r[4]+0xFFFF8FE0u); // 8034D038
  c->r[0]=R32(c->r[3]+0x00000004u); // 8034D03C
  cmpu(c,0,c->r[0],c->r[4]); // 8034D040
  if (!crb(c,0)) { goto L_8034D050; } // 8034D044
  c->r[0]=c->r[0]-c->r[4]; // 8034D048
  goto L_8034D05C; // 8034D04C
L_8034D050:;
  c->r[0]=c->r[0]-c->r[4]; // 8034D050
  c->r[0]=cntlz(c->r[0]); // 8034D054
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8034D058
L_8034D05C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8034D05C
  if (!crb(c,2)) { goto L_8034D0F0; } // 8034D060
  c->r[3]=0u+0x80530000u; // 8034D064
  c->r[3]=c->r[3]+0xFFFF8FE0u; // 8034D068
  c->r[0]=R32(c->r[3]+0x00000008u); // 8034D06C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8034D070
  c->r[3]=c->r[3]+c->r[0]; // 8034D074
  c->r[4]=R32(c->r[3]+0x00000010u); // 8034D078
  cmps(c,0,(int32_t)c->r[4],0); // 8034D07C
  if (crb(c,2)) { goto L_8034D0F0; } // 8034D080
  c->r[0]=R32(c->r[4]+0x00000028u); // 8034D084
  cmps(c,0,(int32_t)c->r[0],0); // 8034D088
  if (crb(c,2)) { goto L_8034D09C; } // 8034D08C
  c->r[3]=R32(c->r[13]+0xFFFFDAC0u); // 8034D090
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8034D094
  W32(c->r[13]+0xFFFFDAC0u,c->r[0]); // 8034D098
L_8034D09C:;
  c->r[4]=c->r[4]+0x80000000u; // 8034D09C
  c->r[3]=0u+0x00000000u; // 8034D0A0
  c->lr=0x8034D0A8u; f_8034CCB0(c); // 8034D0A4
  c->r[7]=0u+0x80530000u; // 8034D0A8
  c->r[3]=R32(c->r[13]+0xFFFFDAC0u); // 8034D0AC
  c->r[6]=c->r[7]+0xFFFF8FE0u; // 8034D0B0
  c->r[4]=R32(c->r[7]+0xFFFF8FE0u); // 8034D0B4
  c->r[5]=R32(c->r[6]+0x00000008u); // 8034D0B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8034D0BC
  W32(c->r[13]+0xFFFFDAC0u,c->r[0]); // 8034D0C0
  c->r[4]=c->r[4]+0x00000001u; // 8034D0C4
  c->r[0]=c->r[5]+0x00000001u; // 8034D0C8
  c->r[3]=0u+0x00000001u; // 8034D0CC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8034D0D0
  W32(c->r[7]+0xFFFF8FE0u,c->r[4]); // 8034D0D4
  W32(c->r[6]+0x00000008u,c->r[0]); // 8034D0D8
  c->lr=0x8034D0E0u; f_8034CCA0(c); // 8034D0DC
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 8034D0E0
  c->r[3]=0u+0x00000001u; // 8034D0E4
  c->r[4]=c->r[0]|0x00000001u; // 8034D0E8
  c->lr=0x8034D0F0u; f_8034CCB0(c); // 8034D0EC
L_8034D0F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034D0F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034D0F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034D0F8
  c->lr=c->r[0]; // 8034D0FC
  c->r[1]=c->r[1]+0x00000010u; // 8034D100
  return; // 8034D104
}

// IPCCltInit
void f_8034D108(Ctx* __restrict c) {
  trace_call(0x8034D108u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D108
  c->r[0]=c->lr; // 8034D10C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034D110
  c->r[0]=R32(c->r[13]+0xFFFFEF24u); // 8034D114
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034D118
  cmps(c,0,(int32_t)c->r[0],0); // 8034D11C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034D120
  c->r[30]=0u+0x00000000u; // 8034D124
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034D128
  if (!crb(c,2)) { goto L_8034D19C; } // 8034D12C
  c->r[0]=0u+0x00000001u; // 8034D130
  W32(c->r[13]+0xFFFFEF24u,c->r[0]); // 8034D134
  c->lr=0x8034D13Cu; f_8034CC0C(c); // 8034D138
  c->lr=0x8034D140u; f_8034CCC8(c); // 8034D13C
  c->r[29]=c->r[3]|c->r[3]; // 8034D140
  c->r[31]=c->r[3]+0x00001000u; // 8034D144
  c->lr=0x8034D14Cu; f_8034CCC0(c); // 8034D148
  cmpu(c,0,c->r[31],c->r[3]); // 8034D14C
  if (!crb(c,1)) { goto L_8034D15C; } // 8034D150
  c->r[30]=0u+0xFFFFFFEAu; // 8034D154
  goto L_8034D19C; // 8034D158
L_8034D15C:;
  c->r[3]=c->r[29]|c->r[29]; // 8034D15C
  c->r[4]=0u+0x00001000u; // 8034D160
  c->lr=0x8034D168u; f_8034E560(c); // 8034D164
  W32(c->r[13]+0xFFFFDAC4u,c->r[3]); // 8034D168
  c->r[3]=c->r[31]|c->r[31]; // 8034D16C
  c->lr=0x8034D174u; f_8034CCD0(c); // 8034D170
  c->r[4]=0u+0x80350000u; // 8034D174
  c->r[3]=0u+0x0000001Bu; // 8034D178
  c->r[4]=c->r[4]+0xFFFFCF5Cu; // 8034D17C
  c->lr=0x8034D184u; f_803226E8(c); // 8034D180
  c->r[3]=0u+0x00000010u; // 8034D184
  c->lr=0x8034D18Cu; f_80322AAC(c); // 8034D188
  c->r[3]=0u+0x00000001u; // 8034D18C
  c->r[4]=0u+0x00000038u; // 8034D190
  c->lr=0x8034D198u; f_8034CCB0(c); // 8034D194
  c->lr=0x8034D19Cu; f_8034EA84(c); // 8034D198
L_8034D19C:;
  c->r[3]=c->r[30]|c->r[30]; // 8034D19C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034D1A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034D1A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034D1A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034D1AC
  c->lr=c->r[0]; // 8034D1B0
  c->r[1]=c->r[1]+0x00000020u; // 8034D1B4
  return; // 8034D1B8
}

// IPCCltReInit
void f_8034D1BC(Ctx* __restrict c) {
  trace_call(0x8034D1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D1BC
  c->r[0]=c->lr; // 8034D1C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034D1C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034D1C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034D1CC
  c->r[30]=0u+0x00000000u; // 8034D1D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034D1D4
  c->lr=0x8034D1DCu; f_8034CCC8(c); // 8034D1D8
  c->r[29]=c->r[3]|c->r[3]; // 8034D1DC
  c->r[31]=c->r[3]+0x00000800u; // 8034D1E0
  c->lr=0x8034D1E8u; f_8034CCC0(c); // 8034D1E4
  cmpu(c,0,c->r[31],c->r[3]); // 8034D1E8
  if (!crb(c,1)) { goto L_8034D1F8; } // 8034D1EC
  c->r[30]=0u+0xFFFFFFEAu; // 8034D1F0
  goto L_8034D210; // 8034D1F4
L_8034D1F8:;
  c->r[3]=c->r[29]|c->r[29]; // 8034D1F8
  c->r[4]=0u+0x00000800u; // 8034D1FC
  c->lr=0x8034D204u; f_8034E560(c); // 8034D200
  W32(c->r[13]+0xFFFFDAC4u,c->r[3]); // 8034D204
  c->r[3]=c->r[31]|c->r[31]; // 8034D208
  c->lr=0x8034D210u; f_8034CCD0(c); // 8034D20C
L_8034D210:;
  c->r[3]=c->r[30]|c->r[30]; // 8034D210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034D214
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034D218
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034D21C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034D220
  c->lr=c->r[0]; // 8034D224
  c->r[1]=c->r[1]+0x00000020u; // 8034D228
  return; // 8034D22C
}

void hle___ios_Ipc2(Ctx*);
// __ios_Ipc2
void f_8034D230(Ctx* __restrict c) {
  hle___ios_Ipc2(c);
}

// IOS_OpenAsync
void f_8034D470(Ctx* __restrict c) {
  trace_call(0x8034D470u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D470
  c->r[0]=c->lr; // 8034D474
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034D478
  c->r[11]=c->r[1]+0x00000030u; // 8034D47C
  c->lr=0x8034D484u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034D480
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034D484
  c->r[27]=c->r[3]|c->r[3]; // 8034D488
  c->r[28]=c->r[4]|c->r[4]; // 8034D48C
  c->r[29]=c->r[5]|c->r[5]; // 8034D490
  c->r[31]=c->r[6]|c->r[6]; // 8034D494
  c->r[30]=0u+0x00000000u; // 8034D498
  if (!crb(c,2)) { goto L_8034D4A8; } // 8034D49C
  c->r[30]=0u+0xFFFFFFFCu; // 8034D4A0
  goto L_8034D4F0; // 8034D4A4
L_8034D4A8:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034D4A8
  c->r[4]=0u+0x00000040u; // 8034D4AC
  c->r[5]=0u+0x00000020u; // 8034D4B0
  c->lr=0x8034D4B8u; f_8034E894(c); // 8034D4B4
  cmps(c,0,(int32_t)c->r[3],0); // 8034D4B8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034D4BC
  if (!crb(c,2)) { goto L_8034D4CC; } // 8034D4C0
  c->r[30]=0u+0xFFFFFFEAu; // 8034D4C4
  goto L_8034D4F0; // 8034D4C8
L_8034D4CC:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8034D4CC
  c->r[5]=0u+0x00000000u; // 8034D4D0
  c->r[0]=0u+0x00000001u; // 8034D4D4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D4D8
  W32(c->r[4]+0x00000024u,c->r[31]); // 8034D4DC
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D4E0
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034D4E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034D4E8
  W32(c->r[3]+0x00000008u,c->r[5]); // 8034D4EC
L_8034D4F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D4F0
  if (!crb(c,2)) { goto L_8034D56C; } // 8034D4F4
  c->r[31]=R32(c->r[1]+0x00000008u); // 8034D4F8
  c->r[30]=0u+0x00000000u; // 8034D4FC
  cmps(c,0,(int32_t)c->r[31],0); // 8034D500
  if (!crb(c,2)) { goto L_8034D510; } // 8034D504
  c->r[30]=0u+0xFFFFFFFCu; // 8034D508
  goto L_8034D554; // 8034D50C
L_8034D510:;
  c->r[3]=c->r[27]|c->r[27]; // 8034D510
  c->r[4]=0u+0x00000040u; // 8034D514
  goto L_8034D520; // 8034D518
L_8034D51C:;
  c->r[3]=c->r[3]+0x00000001u; // 8034D51C
L_8034D520:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8034D520
  cmps(c,0,(int32_t)c->r[0],0); // 8034D524
  if (crb(c,2)) { goto L_8034D538; } // 8034D528
  cmps(c,0,(int32_t)c->r[4],0); // 8034D52C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8034D530
  if (!crb(c,2)) { IRQCHK(c); goto L_8034D51C; } // 8034D534
L_8034D538:;
  c->r[4]=c->r[3]-c->r[27]; // 8034D538
  c->r[3]=c->r[27]|c->r[27]; // 8034D53C
  c->r[4]=c->r[4]+0x00000001u; // 8034D540
  c->lr=0x8034D548u; f_8031DAF0(c); // 8034D544
  c->r[0]=c->r[27]+0x80000000u; // 8034D548
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8034D54C
  W32(c->r[31]+0x00000010u,c->r[28]); // 8034D550
L_8034D554:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D554
  if (!crb(c,2)) { goto L_8034D56C; } // 8034D558
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034D55C
  c->r[4]=c->r[29]|c->r[29]; // 8034D560
  c->lr=0x8034D568u; f_8034D230(c); // 8034D564
  c->r[30]=c->r[3]|c->r[3]; // 8034D568
L_8034D56C:;
  c->r[11]=c->r[1]+0x00000030u; // 8034D56C
  c->r[3]=c->r[30]|c->r[30]; // 8034D570
  c->lr=0x8034D578u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034D574
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034D578
  c->lr=c->r[0]; // 8034D57C
  c->r[1]=c->r[1]+0x00000030u; // 8034D580
  return; // 8034D584
}

// IOS_Open
void f_8034D588(Ctx* __restrict c) {
  trace_call(0x8034D588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D588
  c->r[0]=c->lr; // 8034D58C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034D590
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034D594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034D598
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034D59C
  c->r[30]=0u+0x00000000u; // 8034D5A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034D5A4
  c->r[29]=c->r[4]|c->r[4]; // 8034D5A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034D5AC
  c->r[28]=c->r[3]|c->r[3]; // 8034D5B0
  if (!crb(c,2)) { goto L_8034D5C0; } // 8034D5B4
  c->r[30]=0u+0xFFFFFFFCu; // 8034D5B8
  goto L_8034D608; // 8034D5BC
L_8034D5C0:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034D5C0
  c->r[4]=0u+0x00000040u; // 8034D5C4
  c->r[5]=0u+0x00000020u; // 8034D5C8
  c->lr=0x8034D5D0u; f_8034E894(c); // 8034D5CC
  cmps(c,0,(int32_t)c->r[3],0); // 8034D5D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034D5D4
  if (!crb(c,2)) { goto L_8034D5E4; } // 8034D5D8
  c->r[30]=0u+0xFFFFFFEAu; // 8034D5DC
  goto L_8034D608; // 8034D5E0
L_8034D5E4:;
  c->r[5]=0u+0x00000000u; // 8034D5E4
  c->r[0]=0u+0x00000001u; // 8034D5E8
  W32(c->r[3]+0x00000020u,c->r[5]); // 8034D5EC
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D5F0
  W32(c->r[4]+0x00000024u,c->r[5]); // 8034D5F4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D5F8
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034D5FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034D600
  W32(c->r[3]+0x00000008u,c->r[5]); // 8034D604
L_8034D608:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D608
  if (!crb(c,2)) { goto L_8034D684; } // 8034D60C
  c->r[31]=R32(c->r[1]+0x00000008u); // 8034D610
  c->r[30]=0u+0x00000000u; // 8034D614
  cmps(c,0,(int32_t)c->r[31],0); // 8034D618
  if (!crb(c,2)) { goto L_8034D628; } // 8034D61C
  c->r[30]=0u+0xFFFFFFFCu; // 8034D620
  goto L_8034D66C; // 8034D624
L_8034D628:;
  c->r[3]=c->r[28]|c->r[28]; // 8034D628
  c->r[4]=0u+0x00000040u; // 8034D62C
  goto L_8034D638; // 8034D630
L_8034D634:;
  c->r[3]=c->r[3]+0x00000001u; // 8034D634
L_8034D638:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8034D638
  cmps(c,0,(int32_t)c->r[0],0); // 8034D63C
  if (crb(c,2)) { goto L_8034D650; } // 8034D640
  cmps(c,0,(int32_t)c->r[4],0); // 8034D644
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8034D648
  if (!crb(c,2)) { IRQCHK(c); goto L_8034D634; } // 8034D64C
L_8034D650:;
  c->r[4]=c->r[3]-c->r[28]; // 8034D650
  c->r[3]=c->r[28]|c->r[28]; // 8034D654
  c->r[4]=c->r[4]+0x00000001u; // 8034D658
  c->lr=0x8034D660u; f_8031DAF0(c); // 8034D65C
  c->r[0]=c->r[28]+0x80000000u; // 8034D660
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8034D664
  W32(c->r[31]+0x00000010u,c->r[29]); // 8034D668
L_8034D66C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D66C
  if (!crb(c,2)) { goto L_8034D684; } // 8034D670
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034D674
  c->r[4]=0u+0x00000000u; // 8034D678
  c->lr=0x8034D680u; f_8034D230(c); // 8034D67C
  c->r[30]=c->r[3]|c->r[3]; // 8034D680
L_8034D684:;
  c->r[3]=c->r[30]|c->r[30]; // 8034D684
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034D688
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034D68C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034D690
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034D694
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034D698
  c->lr=c->r[0]; // 8034D69C
  c->r[1]=c->r[1]+0x00000020u; // 8034D6A0
  return; // 8034D6A4
}

// IOS_CloseAsync
void f_8034D6A8(Ctx* __restrict c) {
  trace_call(0x8034D6A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D6A8
  c->r[0]=c->lr; // 8034D6AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034D6B0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034D6B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034D6B8
  c->r[31]=0u+0x00000000u; // 8034D6BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034D6C0
  c->r[30]=c->r[5]|c->r[5]; // 8034D6C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034D6C8
  c->r[29]=c->r[4]|c->r[4]; // 8034D6CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034D6D0
  c->r[28]=c->r[3]|c->r[3]; // 8034D6D4
  if (!crb(c,2)) { goto L_8034D6E4; } // 8034D6D8
  c->r[31]=0u+0xFFFFFFFCu; // 8034D6DC
  goto L_8034D72C; // 8034D6E0
L_8034D6E4:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034D6E4
  c->r[4]=0u+0x00000040u; // 8034D6E8
  c->r[5]=0u+0x00000020u; // 8034D6EC
  c->lr=0x8034D6F4u; f_8034E894(c); // 8034D6F0
  cmps(c,0,(int32_t)c->r[3],0); // 8034D6F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034D6F8
  if (!crb(c,2)) { goto L_8034D708; } // 8034D6FC
  c->r[31]=0u+0xFFFFFFEAu; // 8034D700
  goto L_8034D72C; // 8034D704
L_8034D708:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8034D708
  c->r[5]=0u+0x00000000u; // 8034D70C
  c->r[0]=0u+0x00000002u; // 8034D710
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D714
  W32(c->r[4]+0x00000024u,c->r[30]); // 8034D718
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D71C
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034D720
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034D724
  W32(c->r[3]+0x00000008u,c->r[28]); // 8034D728
L_8034D72C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034D72C
  if (!crb(c,2)) { goto L_8034D744; } // 8034D730
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034D734
  c->r[4]=c->r[29]|c->r[29]; // 8034D738
  c->lr=0x8034D740u; f_8034D230(c); // 8034D73C
  c->r[31]=c->r[3]|c->r[3]; // 8034D740
L_8034D744:;
  c->r[3]=c->r[31]|c->r[31]; // 8034D744
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034D748
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034D74C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034D750
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034D754
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034D758
  c->lr=c->r[0]; // 8034D75C
  c->r[1]=c->r[1]+0x00000020u; // 8034D760
  return; // 8034D764
}

// IOS_Close
void f_8034D768(Ctx* __restrict c) {
  trace_call(0x8034D768u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D768
  c->r[0]=c->lr; // 8034D76C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034D770
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034D774
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034D778
  c->r[31]=0u+0x00000000u; // 8034D77C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034D780
  c->r[30]=c->r[3]|c->r[3]; // 8034D784
  if (!crb(c,2)) { goto L_8034D794; } // 8034D788
  c->r[31]=0u+0xFFFFFFFCu; // 8034D78C
  goto L_8034D7DC; // 8034D790
L_8034D794:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034D794
  c->r[4]=0u+0x00000040u; // 8034D798
  c->r[5]=0u+0x00000020u; // 8034D79C
  c->lr=0x8034D7A4u; f_8034E894(c); // 8034D7A0
  cmps(c,0,(int32_t)c->r[3],0); // 8034D7A4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034D7A8
  if (!crb(c,2)) { goto L_8034D7B8; } // 8034D7AC
  c->r[31]=0u+0xFFFFFFEAu; // 8034D7B0
  goto L_8034D7DC; // 8034D7B4
L_8034D7B8:;
  c->r[5]=0u+0x00000000u; // 8034D7B8
  c->r[0]=0u+0x00000002u; // 8034D7BC
  W32(c->r[3]+0x00000020u,c->r[5]); // 8034D7C0
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D7C4
  W32(c->r[4]+0x00000024u,c->r[5]); // 8034D7C8
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D7CC
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034D7D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034D7D4
  W32(c->r[3]+0x00000008u,c->r[30]); // 8034D7D8
L_8034D7DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034D7DC
  if (!crb(c,2)) { goto L_8034D7F4; } // 8034D7E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034D7E4
  c->r[4]=0u+0x00000000u; // 8034D7E8
  c->lr=0x8034D7F0u; f_8034D230(c); // 8034D7EC
  c->r[31]=c->r[3]|c->r[3]; // 8034D7F0
L_8034D7F4:;
  c->r[3]=c->r[31]|c->r[31]; // 8034D7F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034D7F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034D7FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034D800
  c->lr=c->r[0]; // 8034D804
  c->r[1]=c->r[1]+0x00000020u; // 8034D808
  return; // 8034D80C
}

// IOS_ReadAsync
void f_8034D810(Ctx* __restrict c) {
  trace_call(0x8034D810u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D810
  c->r[0]=c->lr; // 8034D814
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034D818
  c->r[11]=c->r[1]+0x00000030u; // 8034D81C
  c->lr=0x8034D824u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034D820
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034D824
  c->r[26]=c->r[3]|c->r[3]; // 8034D828
  c->r[27]=c->r[4]|c->r[4]; // 8034D82C
  c->r[28]=c->r[5]|c->r[5]; // 8034D830
  c->r[29]=c->r[6]|c->r[6]; // 8034D834
  c->r[31]=c->r[7]|c->r[7]; // 8034D838
  c->r[30]=0u+0x00000000u; // 8034D83C
  if (!crb(c,2)) { goto L_8034D84C; } // 8034D840
  c->r[30]=0u+0xFFFFFFFCu; // 8034D844
  goto L_8034D894; // 8034D848
L_8034D84C:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034D84C
  c->r[4]=0u+0x00000040u; // 8034D850
  c->r[5]=0u+0x00000020u; // 8034D854
  c->lr=0x8034D85Cu; f_8034E894(c); // 8034D858
  cmps(c,0,(int32_t)c->r[3],0); // 8034D85C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034D860
  if (!crb(c,2)) { goto L_8034D870; } // 8034D864
  c->r[30]=0u+0xFFFFFFEAu; // 8034D868
  goto L_8034D894; // 8034D86C
L_8034D870:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8034D870
  c->r[5]=0u+0x00000000u; // 8034D874
  c->r[0]=0u+0x00000003u; // 8034D878
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D87C
  W32(c->r[4]+0x00000024u,c->r[31]); // 8034D880
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D884
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034D888
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034D88C
  W32(c->r[3]+0x00000008u,c->r[26]); // 8034D890
L_8034D894:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D894
  if (!crb(c,2)) { goto L_8034D8F4; } // 8034D898
  c->r[31]=R32(c->r[1]+0x00000008u); // 8034D89C
  c->r[30]=0u+0x00000000u; // 8034D8A0
  cmps(c,0,(int32_t)c->r[31],0); // 8034D8A4
  if (!crb(c,2)) { goto L_8034D8B4; } // 8034D8A8
  c->r[30]=0u+0xFFFFFFFCu; // 8034D8AC
  goto L_8034D8DC; // 8034D8B0
L_8034D8B4:;
  c->r[3]=c->r[27]|c->r[27]; // 8034D8B4
  c->r[4]=c->r[28]|c->r[28]; // 8034D8B8
  c->lr=0x8034D8C0u; f_8031DAC4(c); // 8034D8BC
  cmps(c,0,(int32_t)c->r[27],0); // 8034D8C0
  if (crb(c,2)) { goto L_8034D8D0; } // 8034D8C4
  c->r[0]=c->r[27]+0x80000000u; // 8034D8C8
  goto L_8034D8D4; // 8034D8CC
L_8034D8D0:;
  c->r[0]=0u+0x00000000u; // 8034D8D0
L_8034D8D4:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8034D8D4
  W32(c->r[31]+0x00000010u,c->r[28]); // 8034D8D8
L_8034D8DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D8DC
  if (!crb(c,2)) { goto L_8034D8F4; } // 8034D8E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034D8E4
  c->r[4]=c->r[29]|c->r[29]; // 8034D8E8
  c->lr=0x8034D8F0u; f_8034D230(c); // 8034D8EC
  c->r[30]=c->r[3]|c->r[3]; // 8034D8F0
L_8034D8F4:;
  c->r[11]=c->r[1]+0x00000030u; // 8034D8F4
  c->r[3]=c->r[30]|c->r[30]; // 8034D8F8
  c->lr=0x8034D900u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034D8FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034D900
  c->lr=c->r[0]; // 8034D904
  c->r[1]=c->r[1]+0x00000030u; // 8034D908
  return; // 8034D90C
}

// IOS_Read
void f_8034D910(Ctx* __restrict c) {
  trace_call(0x8034D910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034D910
  c->r[0]=c->lr; // 8034D914
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034D918
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034D91C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034D920
  c->r[31]=c->r[3]|c->r[3]; // 8034D924
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034D928
  c->r[30]=0u+0x00000000u; // 8034D92C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034D930
  c->r[29]=c->r[5]|c->r[5]; // 8034D934
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034D938
  c->r[28]=c->r[4]|c->r[4]; // 8034D93C
  if (!crb(c,2)) { goto L_8034D94C; } // 8034D940
  c->r[30]=0u+0xFFFFFFFCu; // 8034D944
  goto L_8034D994; // 8034D948
L_8034D94C:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034D94C
  c->r[4]=0u+0x00000040u; // 8034D950
  c->r[5]=0u+0x00000020u; // 8034D954
  c->lr=0x8034D95Cu; f_8034E894(c); // 8034D958
  cmps(c,0,(int32_t)c->r[3],0); // 8034D95C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034D960
  if (!crb(c,2)) { goto L_8034D970; } // 8034D964
  c->r[30]=0u+0xFFFFFFEAu; // 8034D968
  goto L_8034D994; // 8034D96C
L_8034D970:;
  c->r[5]=0u+0x00000000u; // 8034D970
  c->r[0]=0u+0x00000003u; // 8034D974
  W32(c->r[3]+0x00000020u,c->r[5]); // 8034D978
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D97C
  W32(c->r[4]+0x00000024u,c->r[5]); // 8034D980
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034D984
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034D988
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034D98C
  W32(c->r[3]+0x00000008u,c->r[31]); // 8034D990
L_8034D994:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D994
  if (!crb(c,2)) { goto L_8034D9F4; } // 8034D998
  c->r[31]=R32(c->r[1]+0x00000008u); // 8034D99C
  c->r[30]=0u+0x00000000u; // 8034D9A0
  cmps(c,0,(int32_t)c->r[31],0); // 8034D9A4
  if (!crb(c,2)) { goto L_8034D9B4; } // 8034D9A8
  c->r[30]=0u+0xFFFFFFFCu; // 8034D9AC
  goto L_8034D9DC; // 8034D9B0
L_8034D9B4:;
  c->r[3]=c->r[28]|c->r[28]; // 8034D9B4
  c->r[4]=c->r[29]|c->r[29]; // 8034D9B8
  c->lr=0x8034D9C0u; f_8031DAC4(c); // 8034D9BC
  cmps(c,0,(int32_t)c->r[28],0); // 8034D9C0
  if (crb(c,2)) { goto L_8034D9D0; } // 8034D9C4
  c->r[0]=c->r[28]+0x80000000u; // 8034D9C8
  goto L_8034D9D4; // 8034D9CC
L_8034D9D0:;
  c->r[0]=0u+0x00000000u; // 8034D9D0
L_8034D9D4:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8034D9D4
  W32(c->r[31]+0x00000010u,c->r[29]); // 8034D9D8
L_8034D9DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034D9DC
  if (!crb(c,2)) { goto L_8034D9F4; } // 8034D9E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034D9E4
  c->r[4]=0u+0x00000000u; // 8034D9E8
  c->lr=0x8034D9F0u; f_8034D230(c); // 8034D9EC
  c->r[30]=c->r[3]|c->r[3]; // 8034D9F0
L_8034D9F4:;
  c->r[3]=c->r[30]|c->r[30]; // 8034D9F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034D9F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034D9FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034DA00
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034DA04
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034DA08
  c->lr=c->r[0]; // 8034DA0C
  c->r[1]=c->r[1]+0x00000020u; // 8034DA10
  return; // 8034DA14
}

// IOS_WriteAsync
void f_8034DA18(Ctx* __restrict c) {
  trace_call(0x8034DA18u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034DA18
  c->r[0]=c->lr; // 8034DA1C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034DA20
  c->r[11]=c->r[1]+0x00000030u; // 8034DA24
  c->lr=0x8034DA2Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034DA28
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034DA2C
  c->r[26]=c->r[3]|c->r[3]; // 8034DA30
  c->r[27]=c->r[4]|c->r[4]; // 8034DA34
  c->r[28]=c->r[5]|c->r[5]; // 8034DA38
  c->r[29]=c->r[6]|c->r[6]; // 8034DA3C
  c->r[30]=c->r[7]|c->r[7]; // 8034DA40
  c->r[31]=0u+0x00000000u; // 8034DA44
  if (!crb(c,2)) { goto L_8034DA54; } // 8034DA48
  c->r[31]=0u+0xFFFFFFFCu; // 8034DA4C
  goto L_8034DA9C; // 8034DA50
L_8034DA54:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034DA54
  c->r[4]=0u+0x00000040u; // 8034DA58
  c->r[5]=0u+0x00000020u; // 8034DA5C
  c->lr=0x8034DA64u; f_8034E894(c); // 8034DA60
  cmps(c,0,(int32_t)c->r[3],0); // 8034DA64
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034DA68
  if (!crb(c,2)) { goto L_8034DA78; } // 8034DA6C
  c->r[31]=0u+0xFFFFFFEAu; // 8034DA70
  goto L_8034DA9C; // 8034DA74
L_8034DA78:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8034DA78
  c->r[5]=0u+0x00000000u; // 8034DA7C
  c->r[0]=0u+0x00000004u; // 8034DA80
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DA84
  W32(c->r[4]+0x00000024u,c->r[30]); // 8034DA88
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DA8C
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034DA90
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034DA94
  W32(c->r[3]+0x00000008u,c->r[26]); // 8034DA98
L_8034DA9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DA9C
  if (!crb(c,2)) { goto L_8034DAFC; } // 8034DAA0
  c->r[5]=R32(c->r[1]+0x00000008u); // 8034DAA4
  c->r[31]=0u+0x00000000u; // 8034DAA8
  cmps(c,0,(int32_t)c->r[5],0); // 8034DAAC
  if (!crb(c,2)) { goto L_8034DABC; } // 8034DAB0
  c->r[31]=0u+0xFFFFFFFCu; // 8034DAB4
  goto L_8034DAE4; // 8034DAB8
L_8034DABC:;
  cmps(c,0,(int32_t)c->r[27],0); // 8034DABC
  if (crb(c,2)) { goto L_8034DACC; } // 8034DAC0
  c->r[0]=c->r[27]+0x80000000u; // 8034DAC4
  goto L_8034DAD0; // 8034DAC8
L_8034DACC:;
  c->r[0]=0u+0x00000000u; // 8034DACC
L_8034DAD0:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8034DAD0
  c->r[3]=c->r[27]|c->r[27]; // 8034DAD4
  c->r[4]=c->r[28]|c->r[28]; // 8034DAD8
  W32(c->r[5]+0x00000010u,c->r[28]); // 8034DADC
  c->lr=0x8034DAE4u; f_8031DAF0(c); // 8034DAE0
L_8034DAE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DAE4
  if (!crb(c,2)) { goto L_8034DAFC; } // 8034DAE8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034DAEC
  c->r[4]=c->r[29]|c->r[29]; // 8034DAF0
  c->lr=0x8034DAF8u; f_8034D230(c); // 8034DAF4
  c->r[31]=c->r[3]|c->r[3]; // 8034DAF8
L_8034DAFC:;
  c->r[11]=c->r[1]+0x00000030u; // 8034DAFC
  c->r[3]=c->r[31]|c->r[31]; // 8034DB00
  c->lr=0x8034DB08u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034DB04
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034DB08
  c->lr=c->r[0]; // 8034DB0C
  c->r[1]=c->r[1]+0x00000030u; // 8034DB10
  return; // 8034DB14
}

// IOS_Write
void f_8034DB18(Ctx* __restrict c) {
  trace_call(0x8034DB18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034DB18
  c->r[0]=c->lr; // 8034DB1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034DB20
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034DB24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034DB28
  c->r[31]=0u+0x00000000u; // 8034DB2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034DB30
  c->r[30]=c->r[5]|c->r[5]; // 8034DB34
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034DB38
  c->r[29]=c->r[4]|c->r[4]; // 8034DB3C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034DB40
  c->r[28]=c->r[3]|c->r[3]; // 8034DB44
  if (!crb(c,2)) { goto L_8034DB54; } // 8034DB48
  c->r[31]=0u+0xFFFFFFFCu; // 8034DB4C
  goto L_8034DB9C; // 8034DB50
L_8034DB54:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034DB54
  c->r[4]=0u+0x00000040u; // 8034DB58
  c->r[5]=0u+0x00000020u; // 8034DB5C
  c->lr=0x8034DB64u; f_8034E894(c); // 8034DB60
  cmps(c,0,(int32_t)c->r[3],0); // 8034DB64
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034DB68
  if (!crb(c,2)) { goto L_8034DB78; } // 8034DB6C
  c->r[31]=0u+0xFFFFFFEAu; // 8034DB70
  goto L_8034DB9C; // 8034DB74
L_8034DB78:;
  c->r[5]=0u+0x00000000u; // 8034DB78
  c->r[0]=0u+0x00000004u; // 8034DB7C
  W32(c->r[3]+0x00000020u,c->r[5]); // 8034DB80
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DB84
  W32(c->r[4]+0x00000024u,c->r[5]); // 8034DB88
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DB8C
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034DB90
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034DB94
  W32(c->r[3]+0x00000008u,c->r[28]); // 8034DB98
L_8034DB9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DB9C
  if (!crb(c,2)) { goto L_8034DBFC; } // 8034DBA0
  c->r[5]=R32(c->r[1]+0x00000008u); // 8034DBA4
  c->r[31]=0u+0x00000000u; // 8034DBA8
  cmps(c,0,(int32_t)c->r[5],0); // 8034DBAC
  if (!crb(c,2)) { goto L_8034DBBC; } // 8034DBB0
  c->r[31]=0u+0xFFFFFFFCu; // 8034DBB4
  goto L_8034DBE4; // 8034DBB8
L_8034DBBC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8034DBBC
  if (crb(c,2)) { goto L_8034DBCC; } // 8034DBC0
  c->r[0]=c->r[29]+0x80000000u; // 8034DBC4
  goto L_8034DBD0; // 8034DBC8
L_8034DBCC:;
  c->r[0]=0u+0x00000000u; // 8034DBCC
L_8034DBD0:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8034DBD0
  c->r[3]=c->r[29]|c->r[29]; // 8034DBD4
  c->r[4]=c->r[30]|c->r[30]; // 8034DBD8
  W32(c->r[5]+0x00000010u,c->r[30]); // 8034DBDC
  c->lr=0x8034DBE4u; f_8031DAF0(c); // 8034DBE0
L_8034DBE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DBE4
  if (!crb(c,2)) { goto L_8034DBFC; } // 8034DBE8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034DBEC
  c->r[4]=0u+0x00000000u; // 8034DBF0
  c->lr=0x8034DBF8u; f_8034D230(c); // 8034DBF4
  c->r[31]=c->r[3]|c->r[3]; // 8034DBF8
L_8034DBFC:;
  c->r[3]=c->r[31]|c->r[31]; // 8034DBFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034DC00
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034DC04
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034DC08
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034DC0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034DC10
  c->lr=c->r[0]; // 8034DC14
  c->r[1]=c->r[1]+0x00000020u; // 8034DC18
  return; // 8034DC1C
}

// IOS_SeekAsync
void f_8034DC20(Ctx* __restrict c) {
  trace_call(0x8034DC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034DC20
  c->r[0]=c->lr; // 8034DC24
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034DC28
  c->r[11]=c->r[1]+0x00000030u; // 8034DC2C
  c->lr=0x8034DC34u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034DC30
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034DC34
  c->r[26]=c->r[3]|c->r[3]; // 8034DC38
  c->r[27]=c->r[4]|c->r[4]; // 8034DC3C
  c->r[28]=c->r[5]|c->r[5]; // 8034DC40
  c->r[29]=c->r[6]|c->r[6]; // 8034DC44
  c->r[30]=c->r[7]|c->r[7]; // 8034DC48
  c->r[31]=0u+0x00000000u; // 8034DC4C
  if (!crb(c,2)) { goto L_8034DC5C; } // 8034DC50
  c->r[31]=0u+0xFFFFFFFCu; // 8034DC54
  goto L_8034DCA4; // 8034DC58
L_8034DC5C:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034DC5C
  c->r[4]=0u+0x00000040u; // 8034DC60
  c->r[5]=0u+0x00000020u; // 8034DC64
  c->lr=0x8034DC6Cu; f_8034E894(c); // 8034DC68
  cmps(c,0,(int32_t)c->r[3],0); // 8034DC6C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034DC70
  if (!crb(c,2)) { goto L_8034DC80; } // 8034DC74
  c->r[31]=0u+0xFFFFFFEAu; // 8034DC78
  goto L_8034DCA4; // 8034DC7C
L_8034DC80:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8034DC80
  c->r[5]=0u+0x00000000u; // 8034DC84
  c->r[0]=0u+0x00000005u; // 8034DC88
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DC8C
  W32(c->r[4]+0x00000024u,c->r[30]); // 8034DC90
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DC94
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034DC98
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034DC9C
  W32(c->r[3]+0x00000008u,c->r[26]); // 8034DCA0
L_8034DCA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DCA4
  if (!crb(c,2)) { goto L_8034DCE4; } // 8034DCA8
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034DCAC
  c->r[31]=0u+0x00000000u; // 8034DCB0
  cmps(c,0,(int32_t)c->r[3],0); // 8034DCB4
  if (!crb(c,2)) { goto L_8034DCC4; } // 8034DCB8
  c->r[31]=0u+0xFFFFFFFCu; // 8034DCBC
  goto L_8034DCCC; // 8034DCC0
L_8034DCC4:;
  W32(c->r[3]+0x0000000Cu,c->r[27]); // 8034DCC4
  W32(c->r[3]+0x00000010u,c->r[28]); // 8034DCC8
L_8034DCCC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DCCC
  if (!crb(c,2)) { goto L_8034DCE4; } // 8034DCD0
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034DCD4
  c->r[4]=c->r[29]|c->r[29]; // 8034DCD8
  c->lr=0x8034DCE0u; f_8034D230(c); // 8034DCDC
  c->r[31]=c->r[3]|c->r[3]; // 8034DCE0
L_8034DCE4:;
  c->r[11]=c->r[1]+0x00000030u; // 8034DCE4
  c->r[3]=c->r[31]|c->r[31]; // 8034DCE8
  c->lr=0x8034DCF0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034DCEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034DCF0
  c->lr=c->r[0]; // 8034DCF4
  c->r[1]=c->r[1]+0x00000030u; // 8034DCF8
  return; // 8034DCFC
}

// IOS_IoctlAsync
void f_8034DD00(Ctx* __restrict c) {
  trace_call(0x8034DD00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034DD00
  c->r[0]=c->lr; // 8034DD04
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034DD08
  c->r[11]=c->r[1]+0x00000040u; // 8034DD0C
  c->lr=0x8034DD14u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034DD10
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034DD14
  c->r[23]=c->r[3]|c->r[3]; // 8034DD18
  c->r[24]=c->r[4]|c->r[4]; // 8034DD1C
  c->r[25]=c->r[5]|c->r[5]; // 8034DD20
  c->r[26]=c->r[6]|c->r[6]; // 8034DD24
  c->r[27]=c->r[7]|c->r[7]; // 8034DD28
  c->r[28]=c->r[8]|c->r[8]; // 8034DD2C
  c->r[29]=c->r[9]|c->r[9]; // 8034DD30
  c->r[30]=c->r[10]|c->r[10]; // 8034DD34
  c->r[31]=0u+0x00000000u; // 8034DD38
  if (!crb(c,2)) { goto L_8034DD48; } // 8034DD3C
  c->r[31]=0u+0xFFFFFFFCu; // 8034DD40
  goto L_8034DD90; // 8034DD44
L_8034DD48:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034DD48
  c->r[4]=0u+0x00000040u; // 8034DD4C
  c->r[5]=0u+0x00000020u; // 8034DD50
  c->lr=0x8034DD58u; f_8034E894(c); // 8034DD54
  cmps(c,0,(int32_t)c->r[3],0); // 8034DD58
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034DD5C
  if (!crb(c,2)) { goto L_8034DD6C; } // 8034DD60
  c->r[31]=0u+0xFFFFFFEAu; // 8034DD64
  goto L_8034DD90; // 8034DD68
L_8034DD6C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8034DD6C
  c->r[5]=0u+0x00000000u; // 8034DD70
  c->r[0]=0u+0x00000006u; // 8034DD74
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DD78
  W32(c->r[4]+0x00000024u,c->r[30]); // 8034DD7C
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DD80
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034DD84
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034DD88
  W32(c->r[3]+0x00000008u,c->r[23]); // 8034DD8C
L_8034DD90:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DD90
  if (!crb(c,2)) { goto L_8034DE1C; } // 8034DD94
  c->r[5]=R32(c->r[1]+0x00000008u); // 8034DD98
  c->r[31]=0u+0x00000000u; // 8034DD9C
  cmps(c,0,(int32_t)c->r[5],0); // 8034DDA0
  if (!crb(c,2)) { goto L_8034DDB0; } // 8034DDA4
  c->r[31]=0u+0xFFFFFFFCu; // 8034DDA8
  goto L_8034DE04; // 8034DDAC
L_8034DDB0:;
  cmps(c,0,(int32_t)c->r[27],0); // 8034DDB0
  W32(c->r[5]+0x0000000Cu,c->r[24]); // 8034DDB4
  if (crb(c,2)) { goto L_8034DDC4; } // 8034DDB8
  c->r[0]=c->r[27]+0x80000000u; // 8034DDBC
  goto L_8034DDC8; // 8034DDC0
L_8034DDC4:;
  c->r[0]=0u+0x00000000u; // 8034DDC4
L_8034DDC8:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 8034DDC8
  cmps(c,0,(int32_t)c->r[25],0); // 8034DDCC
  W32(c->r[5]+0x0000001Cu,c->r[28]); // 8034DDD0
  if (crb(c,2)) { goto L_8034DDE0; } // 8034DDD4
  c->r[0]=c->r[25]+0x80000000u; // 8034DDD8
  goto L_8034DDE4; // 8034DDDC
L_8034DDE0:;
  c->r[0]=0u+0x00000000u; // 8034DDE0
L_8034DDE4:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 8034DDE4
  c->r[3]=c->r[25]|c->r[25]; // 8034DDE8
  c->r[4]=c->r[26]|c->r[26]; // 8034DDEC
  W32(c->r[5]+0x00000014u,c->r[26]); // 8034DDF0
  c->lr=0x8034DDF8u; f_8031DAF0(c); // 8034DDF4
  c->r[3]=c->r[27]|c->r[27]; // 8034DDF8
  c->r[4]=c->r[28]|c->r[28]; // 8034DDFC
  c->lr=0x8034DE04u; f_8031DAF0(c); // 8034DE00
L_8034DE04:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DE04
  if (!crb(c,2)) { goto L_8034DE1C; } // 8034DE08
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034DE0C
  c->r[4]=c->r[29]|c->r[29]; // 8034DE10
  c->lr=0x8034DE18u; f_8034D230(c); // 8034DE14
  c->r[31]=c->r[3]|c->r[3]; // 8034DE18
L_8034DE1C:;
  c->r[11]=c->r[1]+0x00000040u; // 8034DE1C
  c->r[3]=c->r[31]|c->r[31]; // 8034DE20
  c->lr=0x8034DE28u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034DE24
  c->r[0]=R32(c->r[1]+0x00000044u); // 8034DE28
  c->lr=c->r[0]; // 8034DE2C
  c->r[1]=c->r[1]+0x00000040u; // 8034DE30
  return; // 8034DE34
}

// IOS_Ioctl
void f_8034DE38(Ctx* __restrict c) {
  trace_call(0x8034DE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034DE38
  c->r[0]=c->lr; // 8034DE3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034DE40
  c->r[11]=c->r[1]+0x00000030u; // 8034DE44
  c->lr=0x8034DE4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034DE48
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034DE4C
  c->r[25]=c->r[3]|c->r[3]; // 8034DE50
  c->r[26]=c->r[4]|c->r[4]; // 8034DE54
  c->r[27]=c->r[5]|c->r[5]; // 8034DE58
  c->r[28]=c->r[6]|c->r[6]; // 8034DE5C
  c->r[29]=c->r[7]|c->r[7]; // 8034DE60
  c->r[30]=c->r[8]|c->r[8]; // 8034DE64
  c->r[31]=0u+0x00000000u; // 8034DE68
  if (!crb(c,2)) { goto L_8034DE78; } // 8034DE6C
  c->r[31]=0u+0xFFFFFFFCu; // 8034DE70
  goto L_8034DEC0; // 8034DE74
L_8034DE78:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034DE78
  c->r[4]=0u+0x00000040u; // 8034DE7C
  c->r[5]=0u+0x00000020u; // 8034DE80
  c->lr=0x8034DE88u; f_8034E894(c); // 8034DE84
  cmps(c,0,(int32_t)c->r[3],0); // 8034DE88
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034DE8C
  if (!crb(c,2)) { goto L_8034DE9C; } // 8034DE90
  c->r[31]=0u+0xFFFFFFEAu; // 8034DE94
  goto L_8034DEC0; // 8034DE98
L_8034DE9C:;
  c->r[5]=0u+0x00000000u; // 8034DE9C
  c->r[0]=0u+0x00000006u; // 8034DEA0
  W32(c->r[3]+0x00000020u,c->r[5]); // 8034DEA4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DEA8
  W32(c->r[4]+0x00000024u,c->r[5]); // 8034DEAC
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034DEB0
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034DEB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034DEB8
  W32(c->r[3]+0x00000008u,c->r[25]); // 8034DEBC
L_8034DEC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DEC0
  if (!crb(c,2)) { goto L_8034DF4C; } // 8034DEC4
  c->r[5]=R32(c->r[1]+0x00000008u); // 8034DEC8
  c->r[31]=0u+0x00000000u; // 8034DECC
  cmps(c,0,(int32_t)c->r[5],0); // 8034DED0
  if (!crb(c,2)) { goto L_8034DEE0; } // 8034DED4
  c->r[31]=0u+0xFFFFFFFCu; // 8034DED8
  goto L_8034DF34; // 8034DEDC
L_8034DEE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 8034DEE0
  W32(c->r[5]+0x0000000Cu,c->r[26]); // 8034DEE4
  if (crb(c,2)) { goto L_8034DEF4; } // 8034DEE8
  c->r[0]=c->r[29]+0x80000000u; // 8034DEEC
  goto L_8034DEF8; // 8034DEF0
L_8034DEF4:;
  c->r[0]=0u+0x00000000u; // 8034DEF4
L_8034DEF8:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 8034DEF8
  cmps(c,0,(int32_t)c->r[27],0); // 8034DEFC
  W32(c->r[5]+0x0000001Cu,c->r[30]); // 8034DF00
  if (crb(c,2)) { goto L_8034DF10; } // 8034DF04
  c->r[0]=c->r[27]+0x80000000u; // 8034DF08
  goto L_8034DF14; // 8034DF0C
L_8034DF10:;
  c->r[0]=0u+0x00000000u; // 8034DF10
L_8034DF14:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 8034DF14
  c->r[3]=c->r[27]|c->r[27]; // 8034DF18
  c->r[4]=c->r[28]|c->r[28]; // 8034DF1C
  W32(c->r[5]+0x00000014u,c->r[28]); // 8034DF20
  c->lr=0x8034DF28u; f_8031DAF0(c); // 8034DF24
  c->r[3]=c->r[29]|c->r[29]; // 8034DF28
  c->r[4]=c->r[30]|c->r[30]; // 8034DF2C
  c->lr=0x8034DF34u; f_8031DAF0(c); // 8034DF30
L_8034DF34:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034DF34
  if (!crb(c,2)) { goto L_8034DF4C; } // 8034DF38
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034DF3C
  c->r[4]=0u+0x00000000u; // 8034DF40
  c->lr=0x8034DF48u; f_8034D230(c); // 8034DF44
  c->r[31]=c->r[3]|c->r[3]; // 8034DF48
L_8034DF4C:;
  c->r[11]=c->r[1]+0x00000030u; // 8034DF4C
  c->r[3]=c->r[31]|c->r[31]; // 8034DF50
  c->lr=0x8034DF58u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034DF54
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034DF58
  c->lr=c->r[0]; // 8034DF5C
  c->r[1]=c->r[1]+0x00000030u; // 8034DF60
  return; // 8034DF64
}

// __ios_Ioctlv
void f_8034DF68(Ctx* __restrict c) {
  trace_call(0x8034DF68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034DF68
  c->r[0]=c->lr; // 8034DF6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034DF70
  c->r[11]=c->r[1]+0x00000020u; // 8034DF74
  c->lr=0x8034DF7Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034DF78
  cmps(c,0,(int32_t)c->r[3],0); // 8034DF7C
  c->r[29]=c->r[3]|c->r[3]; // 8034DF80
  c->r[30]=c->r[7]|c->r[7]; // 8034DF84
  c->r[31]=0u+0x00000000u; // 8034DF88
  if (!crb(c,2)) { goto L_8034DF98; } // 8034DF8C
  c->r[31]=0u+0xFFFFFFFCu; // 8034DF90
  goto L_8034E088; // 8034DF94
L_8034DF98:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8034DF98
  c->r[27]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8034DF9C
  c->r[26]=0u+0x00000000u; // 8034DFA0
  c->r[28]=0u+0x00000000u; // 8034DFA4
  W32(c->r[3]+0x00000010u,c->r[5]); // 8034DFA8
  W32(c->r[3]+0x00000014u,c->r[6]); // 8034DFAC
  W32(c->r[3]+0x00000018u,c->r[7]); // 8034DFB0
  goto L_8034DFFC; // 8034DFB4
L_8034DFB8:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 8034DFB8
  c->r[0]=c->r[28]+c->r[27]; // 8034DFBC
  c->r[4]=c->r[3]+c->r[0]; // 8034DFC0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8034DFC4
  c->r[4]=R32(c->r[4]+0x00000004u); // 8034DFC8
  c->lr=0x8034DFD0u; f_8031DAF0(c); // 8034DFCC
  c->r[4]=R32(c->r[29]+0x00000018u); // 8034DFD0
  c->r[3]=c->r[28]+c->r[27]; // 8034DFD4
  c->r[5]=R32(c->r[4]+c->r[3]); // 8034DFD8
  cmps(c,0,(int32_t)c->r[5],0); // 8034DFDC
  if (crb(c,2)) { goto L_8034DFEC; } // 8034DFE0
  c->r[0]=c->r[5]+0x80000000u; // 8034DFE4
  goto L_8034DFF0; // 8034DFE8
L_8034DFEC:;
  c->r[0]=0u+0x00000000u; // 8034DFEC
L_8034DFF0:;
  W32(c->r[4]+c->r[3],c->r[0]); // 8034DFF0
  c->r[28]=c->r[28]+0x00000008u; // 8034DFF4
  c->r[26]=c->r[26]+0x00000001u; // 8034DFF8
L_8034DFFC:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 8034DFFC
  cmpu(c,0,c->r[26],c->r[0]); // 8034E000
  if (crb(c,0)) { IRQCHK(c); goto L_8034DFB8; } // 8034E004
  c->r[27]=0u+0x00000000u; // 8034E008
  c->r[28]=0u+0x00000000u; // 8034E00C
  goto L_8034E050; // 8034E010
L_8034E014:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 8034E014
  c->r[4]=c->r[0]+c->r[28]; // 8034E018
  c->r[3]=R32(c->r[28]+c->r[0]); // 8034E01C
  c->r[4]=R32(c->r[4]+0x00000004u); // 8034E020
  c->lr=0x8034E028u; f_8031DAF0(c); // 8034E024
  c->r[3]=R32(c->r[29]+0x00000018u); // 8034E028
  c->r[4]=R32(c->r[3]+c->r[28]); // 8034E02C
  cmps(c,0,(int32_t)c->r[4],0); // 8034E030
  if (crb(c,2)) { goto L_8034E040; } // 8034E034
  c->r[0]=c->r[4]+0x80000000u; // 8034E038
  goto L_8034E044; // 8034E03C
L_8034E040:;
  c->r[0]=0u+0x00000000u; // 8034E040
L_8034E044:;
  W32(c->r[3]+c->r[28],c->r[0]); // 8034E044
  c->r[28]=c->r[28]+0x00000008u; // 8034E048
  c->r[27]=c->r[27]+0x00000001u; // 8034E04C
L_8034E050:;
  c->r[4]=R32(c->r[29]+0x00000010u); // 8034E050
  cmpu(c,0,c->r[27],c->r[4]); // 8034E054
  if (crb(c,0)) { IRQCHK(c); goto L_8034E014; } // 8034E058
  c->r[0]=R32(c->r[29]+0x00000014u); // 8034E05C
  c->r[3]=R32(c->r[29]+0x00000018u); // 8034E060
  c->r[0]=c->r[4]+c->r[0]; // 8034E064
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8034E068
  c->lr=0x8034E070u; f_8031DAF0(c); // 8034E06C
  cmps(c,0,(int32_t)c->r[30],0); // 8034E070
  if (crb(c,2)) { goto L_8034E080; } // 8034E074
  c->r[0]=c->r[30]+0x80000000u; // 8034E078
  goto L_8034E084; // 8034E07C
L_8034E080:;
  c->r[0]=0u+0x00000000u; // 8034E080
L_8034E084:;
  W32(c->r[29]+0x00000018u,c->r[0]); // 8034E084
L_8034E088:;
  c->r[11]=c->r[1]+0x00000020u; // 8034E088
  c->r[3]=c->r[31]|c->r[31]; // 8034E08C
  c->lr=0x8034E094u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034E090
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034E094
  c->lr=c->r[0]; // 8034E098
  c->r[1]=c->r[1]+0x00000020u; // 8034E09C
  return; // 8034E0A0
}

// IOS_IoctlvAsync
void f_8034E0A4(Ctx* __restrict c) {
  trace_call(0x8034E0A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034E0A4
  c->r[0]=c->lr; // 8034E0A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034E0AC
  c->r[11]=c->r[1]+0x00000030u; // 8034E0B0
  c->lr=0x8034E0B8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034E0B4
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034E0B8
  c->r[24]=c->r[3]|c->r[3]; // 8034E0BC
  c->r[25]=c->r[4]|c->r[4]; // 8034E0C0
  c->r[26]=c->r[5]|c->r[5]; // 8034E0C4
  c->r[27]=c->r[6]|c->r[6]; // 8034E0C8
  c->r[28]=c->r[7]|c->r[7]; // 8034E0CC
  c->r[29]=c->r[8]|c->r[8]; // 8034E0D0
  c->r[30]=c->r[9]|c->r[9]; // 8034E0D4
  c->r[31]=0u+0x00000000u; // 8034E0D8
  if (!crb(c,2)) { goto L_8034E0E8; } // 8034E0DC
  c->r[31]=0u+0xFFFFFFFCu; // 8034E0E0
  goto L_8034E130; // 8034E0E4
L_8034E0E8:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034E0E8
  c->r[4]=0u+0x00000040u; // 8034E0EC
  c->r[5]=0u+0x00000020u; // 8034E0F0
  c->lr=0x8034E0F8u; f_8034E894(c); // 8034E0F4
  cmps(c,0,(int32_t)c->r[3],0); // 8034E0F8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034E0FC
  if (!crb(c,2)) { goto L_8034E10C; } // 8034E100
  c->r[31]=0u+0xFFFFFFEAu; // 8034E104
  goto L_8034E130; // 8034E108
L_8034E10C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 8034E10C
  c->r[5]=0u+0x00000000u; // 8034E110
  c->r[0]=0u+0x00000007u; // 8034E114
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E118
  W32(c->r[4]+0x00000024u,c->r[30]); // 8034E11C
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E120
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034E124
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034E128
  W32(c->r[3]+0x00000008u,c->r[24]); // 8034E12C
L_8034E130:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034E130
  if (!crb(c,2)) { goto L_8034E16C; } // 8034E134
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034E138
  c->r[4]=c->r[25]|c->r[25]; // 8034E13C
  c->r[5]=c->r[26]|c->r[26]; // 8034E140
  c->r[6]=c->r[27]|c->r[27]; // 8034E144
  c->r[7]=c->r[28]|c->r[28]; // 8034E148
  c->lr=0x8034E150u; f_8034DF68(c); // 8034E14C
  cmps(c,0,(int32_t)c->r[3],0); // 8034E150
  c->r[31]=c->r[3]|c->r[3]; // 8034E154
  if (!crb(c,2)) { goto L_8034E16C; } // 8034E158
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034E15C
  c->r[4]=c->r[29]|c->r[29]; // 8034E160
  c->lr=0x8034E168u; f_8034D230(c); // 8034E164
  c->r[31]=c->r[3]|c->r[3]; // 8034E168
L_8034E16C:;
  c->r[11]=c->r[1]+0x00000030u; // 8034E16C
  c->r[3]=c->r[31]|c->r[31]; // 8034E170
  c->lr=0x8034E178u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034E174
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034E178
  c->lr=c->r[0]; // 8034E17C
  c->r[1]=c->r[1]+0x00000030u; // 8034E180
  return; // 8034E184
}

// IOS_Ioctlv
void f_8034E188(Ctx* __restrict c) {
  trace_call(0x8034E188u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034E188
  c->r[0]=c->lr; // 8034E18C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034E190
  c->r[11]=c->r[1]+0x00000030u; // 8034E194
  c->lr=0x8034E19Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034E198
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034E19C
  c->r[26]=c->r[3]|c->r[3]; // 8034E1A0
  c->r[27]=c->r[4]|c->r[4]; // 8034E1A4
  c->r[28]=c->r[5]|c->r[5]; // 8034E1A8
  c->r[29]=c->r[6]|c->r[6]; // 8034E1AC
  c->r[30]=c->r[7]|c->r[7]; // 8034E1B0
  c->r[31]=0u+0x00000000u; // 8034E1B4
  if (!crb(c,2)) { goto L_8034E1C4; } // 8034E1B8
  c->r[31]=0u+0xFFFFFFFCu; // 8034E1BC
  goto L_8034E20C; // 8034E1C0
L_8034E1C4:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034E1C4
  c->r[4]=0u+0x00000040u; // 8034E1C8
  c->r[5]=0u+0x00000020u; // 8034E1CC
  c->lr=0x8034E1D4u; f_8034E894(c); // 8034E1D0
  cmps(c,0,(int32_t)c->r[3],0); // 8034E1D4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034E1D8
  if (!crb(c,2)) { goto L_8034E1E8; } // 8034E1DC
  c->r[31]=0u+0xFFFFFFEAu; // 8034E1E0
  goto L_8034E20C; // 8034E1E4
L_8034E1E8:;
  c->r[5]=0u+0x00000000u; // 8034E1E8
  c->r[0]=0u+0x00000007u; // 8034E1EC
  W32(c->r[3]+0x00000020u,c->r[5]); // 8034E1F0
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E1F4
  W32(c->r[4]+0x00000024u,c->r[5]); // 8034E1F8
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E1FC
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034E200
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034E204
  W32(c->r[3]+0x00000008u,c->r[26]); // 8034E208
L_8034E20C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034E20C
  if (!crb(c,2)) { goto L_8034E248; } // 8034E210
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034E214
  c->r[4]=c->r[27]|c->r[27]; // 8034E218
  c->r[5]=c->r[28]|c->r[28]; // 8034E21C
  c->r[6]=c->r[29]|c->r[29]; // 8034E220
  c->r[7]=c->r[30]|c->r[30]; // 8034E224
  c->lr=0x8034E22Cu; f_8034DF68(c); // 8034E228
  cmps(c,0,(int32_t)c->r[3],0); // 8034E22C
  c->r[31]=c->r[3]|c->r[3]; // 8034E230
  if (!crb(c,2)) { goto L_8034E248; } // 8034E234
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034E238
  c->r[4]=0u+0x00000000u; // 8034E23C
  c->lr=0x8034E244u; f_8034D230(c); // 8034E240
  c->r[31]=c->r[3]|c->r[3]; // 8034E244
L_8034E248:;
  c->r[11]=c->r[1]+0x00000030u; // 8034E248
  c->r[3]=c->r[31]|c->r[31]; // 8034E24C
  c->lr=0x8034E254u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034E250
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034E254
  c->lr=c->r[0]; // 8034E258
  c->r[1]=c->r[1]+0x00000030u; // 8034E25C
  return; // 8034E260
}

// IOS_IoctlvReboot
void f_8034E264(Ctx* __restrict c) {
  trace_call(0x8034E264u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034E264
  c->r[0]=c->lr; // 8034E268
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034E26C
  c->r[11]=c->r[1]+0x00000030u; // 8034E270
  c->lr=0x8034E278u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034E274
  c->r[26]=c->r[3]|c->r[3]; // 8034E278
  c->r[27]=c->r[4]|c->r[4]; // 8034E27C
  c->r[28]=c->r[5]|c->r[5]; // 8034E280
  c->r[30]=c->r[6]|c->r[6]; // 8034E284
  c->r[29]=c->r[7]|c->r[7]; // 8034E288
  c->lr=0x8034E290u; f_8032269C(c); // 8034E28C
  c->r[0]=R32(c->r[13]+0xFFFFEF18u); // 8034E290
  cmps(c,0,(int32_t)c->r[0],0); // 8034E294
  if (crb(c,2)) { goto L_8034E2A8; } // 8034E298
  c->lr=0x8034E2A0u; f_803226C4(c); // 8034E29C
  c->r[31]=0u+0xFFFFFFF6u; // 8034E2A0
  goto L_8034E544; // 8034E2A4
L_8034E2A8:;
  c->r[0]=0u+0x00000001u; // 8034E2A8
  W32(c->r[13]+0xFFFFEF18u,c->r[0]); // 8034E2AC
  c->lr=0x8034E2B4u; f_803226C4(c); // 8034E2B0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 8034E2B4
  c->r[31]=0u+0x00000000u; // 8034E2B8
  if (!crb(c,2)) { goto L_8034E2C8; } // 8034E2BC
  c->r[31]=0u+0xFFFFFFFCu; // 8034E2C0
  goto L_8034E310; // 8034E2C4
L_8034E2C8:;
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034E2C8
  c->r[4]=0u+0x00000040u; // 8034E2CC
  c->r[5]=0u+0x00000020u; // 8034E2D0
  c->lr=0x8034E2D8u; f_8034E894(c); // 8034E2D4
  cmps(c,0,(int32_t)c->r[3],0); // 8034E2D8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8034E2DC
  if (!crb(c,2)) { goto L_8034E2EC; } // 8034E2E0
  c->r[31]=0u+0xFFFFFFEAu; // 8034E2E4
  goto L_8034E310; // 8034E2E8
L_8034E2EC:;
  c->r[5]=0u+0x00000000u; // 8034E2EC
  c->r[0]=0u+0x00000007u; // 8034E2F0
  W32(c->r[3]+0x00000020u,c->r[5]); // 8034E2F4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E2F8
  W32(c->r[4]+0x00000024u,c->r[5]); // 8034E2FC
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E300
  W32(c->r[4]+0x00000028u,c->r[5]); // 8034E304
  W32(c->r[3]+0x00000000u,c->r[0]); // 8034E308
  W32(c->r[3]+0x00000008u,c->r[26]); // 8034E30C
L_8034E310:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034E310
  if (!crb(c,2)) { goto L_8034E51C; } // 8034E314
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034E318
  c->r[0]=0u+0x00000001u; // 8034E31C
  c->r[4]=c->r[27]|c->r[27]; // 8034E320
  c->r[5]=c->r[28]|c->r[28]; // 8034E324
  W32(c->r[13]+0xFFFFEF20u,c->r[3]); // 8034E328
  c->r[6]=c->r[30]|c->r[30]; // 8034E32C
  c->r[7]=c->r[29]|c->r[29]; // 8034E330
  W32(c->r[3]+0x00000028u,c->r[0]); // 8034E334
  c->r[3]=R32(c->r[1]+0x00000008u); // 8034E338
  c->lr=0x8034E340u; f_8034DF68(c); // 8034E33C
  cmps(c,0,(int32_t)c->r[3],0); // 8034E340
  c->r[31]=c->r[3]|c->r[3]; // 8034E344
  if (!crb(c,2)) { goto L_8034E51C; } // 8034E348
  c->r[29]=0u+0x80530000u; // 8034E34C
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E350
  c->r[3]=c->r[29]+0xFFFF9040u; // 8034E354
  c->r[5]=0u+0x00000040u; // 8034E358
  c->lr=0x8034E360u; f_8000626C(c); // 8034E35C
  c->r[3]=c->r[29]+0xFFFF9040u; // 8034E360
  c->r[29]=R32(c->r[1]+0x00000008u); // 8034E364
  W32(c->r[13]+0xFFFFEF1Cu,c->r[3]); // 8034E368
  c->r[3]=c->r[3]+0x0000002Cu; // 8034E36C
  c->lr=0x8034E374u; f_803253DC(c); // 8034E370
  c->r[3]=c->r[29]|c->r[29]; // 8034E374
  c->r[4]=0u+0x00000020u; // 8034E378
  c->lr=0x8034E380u; f_8031DAF0(c); // 8034E37C
  c->lr=0x8034E384u; f_8032269C(c); // 8034E380
  c->r[4]=0u+0x80530000u; // 8034E384
  c->r[30]=c->r[3]|c->r[3]; // 8034E388
  c->r[3]=c->r[4]+0xFFFF8FE0u; // 8034E38C
  c->r[0]=R32(c->r[4]+0xFFFF8FE0u); // 8034E390
  c->r[3]=R32(c->r[3]+0x00000004u); // 8034E394
  c->r[31]=0u+0x00000000u; // 8034E398
  cmpu(c,0,c->r[3],c->r[0]); // 8034E39C
  if (!crb(c,0)) { goto L_8034E3B0; } // 8034E3A0
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 8034E3A4
  c->r[0]=c->r[0]+c->r[3]; // 8034E3A8
  goto L_8034E3CC; // 8034E3AC
L_8034E3B0:;
  c->r[4]=c->r[3]-c->r[0]; // 8034E3B0
  c->r[3]=0u+0x00000010u; // 8034E3B4
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 8034E3B8
  c->r[3]=c->r[4]|~c->r[3]; // 8034E3BC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8034E3C0
  c->r[0]=c->r[3]-c->r[0]; // 8034E3C4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8034E3C8
L_8034E3CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8034E3CC
  if (crb(c,2)) { goto L_8034E3DC; } // 8034E3D0
  c->r[31]=0u+0xFFFFFFF8u; // 8034E3D4
  goto L_8034E41C; // 8034E3D8
L_8034E3DC:;
  c->r[6]=0u+0x80530000u; // 8034E3DC
  c->r[3]=c->r[29]|c->r[29]; // 8034E3E0
  c->r[6]=c->r[6]+0xFFFF8FE0u; // 8034E3E4
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8034E3E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8034E3EC
  c->r[4]=c->r[6]+c->r[0]; // 8034E3F0
  W32(c->r[4]+0x00000010u,c->r[29]); // 8034E3F4
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 8034E3F8
  c->r[4]=R32(c->r[6]+0x00000004u); // 8034E3FC
  c->r[0]=c->r[5]+0x00000001u; // 8034E400
  c->r[5]=rotl(c->r[0],0)&0x0000000Fu; // 8034E404
  c->r[0]=c->r[4]+0x00000001u; // 8034E408
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 8034E40C
  W32(c->r[6]+0x00000004u,c->r[0]); // 8034E410
  c->r[4]=R32(c->r[29]+0x00000008u); // 8034E414
  c->lr=0x8034E41Cu; f_8034EB3C(c); // 8034E418
L_8034E41C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034E41C
  if (crb(c,2)) { goto L_8034E430; } // 8034E420
  c->r[3]=c->r[30]|c->r[30]; // 8034E424
  c->lr=0x8034E42Cu; f_803226C4(c); // 8034E428
  goto L_8034E51C; // 8034E42C
L_8034E430:;
  c->r[0]=R32(c->r[13]+0xFFFFDAC0u); // 8034E430
  cmps(c,0,(int32_t)c->r[0],0); // 8034E434
  if (!crb(c,1)) { goto L_8034E500; } // 8034E438
  c->r[4]=0u+0x80530000u; // 8034E43C
  c->r[3]=c->r[4]+0xFFFF8FE0u; // 8034E440
  c->r[0]=R32(c->r[4]+0xFFFF8FE0u); // 8034E444
  c->r[3]=R32(c->r[3]+0x00000004u); // 8034E448
  cmpu(c,0,c->r[3],c->r[0]); // 8034E44C
  if (!crb(c,0)) { goto L_8034E460; } // 8034E450
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 8034E454
  c->r[0]=c->r[0]+c->r[3]; // 8034E458
  goto L_8034E46C; // 8034E45C
L_8034E460:;
  c->r[0]=c->r[3]-c->r[0]; // 8034E460
  c->r[0]=cntlz(c->r[0]); // 8034E464
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8034E468
L_8034E46C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8034E46C
  if (!crb(c,2)) { goto L_8034E500; } // 8034E470
  c->r[3]=0u+0x80530000u; // 8034E474
  c->r[3]=c->r[3]+0xFFFF8FE0u; // 8034E478
  c->r[0]=R32(c->r[3]+0x00000008u); // 8034E47C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8034E480
  c->r[3]=c->r[3]+c->r[0]; // 8034E484
  c->r[4]=R32(c->r[3]+0x00000010u); // 8034E488
  cmps(c,0,(int32_t)c->r[4],0); // 8034E48C
  if (crb(c,2)) { goto L_8034E500; } // 8034E490
  c->r[0]=R32(c->r[4]+0x00000028u); // 8034E494
  cmps(c,0,(int32_t)c->r[0],0); // 8034E498
  if (crb(c,2)) { goto L_8034E4AC; } // 8034E49C
  c->r[3]=R32(c->r[13]+0xFFFFDAC0u); // 8034E4A0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8034E4A4
  W32(c->r[13]+0xFFFFDAC0u,c->r[0]); // 8034E4A8
L_8034E4AC:;
  c->r[4]=c->r[4]+0x80000000u; // 8034E4AC
  c->r[3]=0u+0x00000000u; // 8034E4B0
  c->lr=0x8034E4B8u; f_8034CCB0(c); // 8034E4B4
  c->r[7]=0u+0x80530000u; // 8034E4B8
  c->r[3]=R32(c->r[13]+0xFFFFDAC0u); // 8034E4BC
  c->r[6]=c->r[7]+0xFFFF8FE0u; // 8034E4C0
  c->r[4]=R32(c->r[7]+0xFFFF8FE0u); // 8034E4C4
  c->r[5]=R32(c->r[6]+0x00000008u); // 8034E4C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8034E4CC
  W32(c->r[13]+0xFFFFDAC0u,c->r[0]); // 8034E4D0
  c->r[4]=c->r[4]+0x00000001u; // 8034E4D4
  c->r[0]=c->r[5]+0x00000001u; // 8034E4D8
  c->r[3]=0u+0x00000001u; // 8034E4DC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8034E4E0
  W32(c->r[7]+0xFFFF8FE0u,c->r[4]); // 8034E4E4
  W32(c->r[6]+0x00000008u,c->r[0]); // 8034E4E8
  c->lr=0x8034E4F0u; f_8034CCA0(c); // 8034E4EC
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 8034E4F0
  c->r[3]=0u+0x00000001u; // 8034E4F4
  c->r[4]=c->r[0]|0x00000001u; // 8034E4F8
  c->lr=0x8034E500u; f_8034CCB0(c); // 8034E4FC
L_8034E500:;
  c->r[3]=R32(c->r[13]+0xFFFFEF1Cu); // 8034E500
  c->r[3]=c->r[3]+0x0000002Cu; // 8034E504
  c->lr=0x8034E50Cu; f_803262E8(c); // 8034E508
  c->r[3]=c->r[30]|c->r[30]; // 8034E50C
  c->lr=0x8034E514u; f_803226C4(c); // 8034E510
  c->r[3]=R32(c->r[13]+0xFFFFEF1Cu); // 8034E514
  c->r[31]=R32(c->r[3]+0x00000004u); // 8034E518
L_8034E51C:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 8034E51C
  c->r[0]=0u+0x00000000u; // 8034E520
  W32(c->r[13]+0xFFFFEF18u,c->r[0]); // 8034E524
  cmps(c,0,(int32_t)c->r[4],0); // 8034E528
  W32(c->r[13]+0xFFFFEF20u,c->r[0]); // 8034E52C
  if (crb(c,2)) { goto L_8034E544; } // 8034E530
  cmps(c,0,(int32_t)c->r[31],0); // 8034E534
  if (crb(c,2)) { goto L_8034E544; } // 8034E538
  c->r[3]=R32(c->r[13]+0xFFFFDAC4u); // 8034E53C
  c->lr=0x8034E544u; f_8034E898(c); // 8034E540
L_8034E544:;
  c->r[11]=c->r[1]+0x00000030u; // 8034E544
  c->r[3]=c->r[31]|c->r[31]; // 8034E548
  c->lr=0x8034E550u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034E54C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8034E550
  c->lr=c->r[0]; // 8034E554
  c->r[1]=c->r[1]+0x00000030u; // 8034E558
  return; // 8034E55C
}

// iosCreateHeap
void f_8034E560(Ctx* __restrict c) {
  trace_call(0x8034E560u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034E560
  c->r[0]=c->lr; // 8034E564
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034E568
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034E56C
  c->r[31]=0u+0xFFFFFFFCu; // 8034E570
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034E574
  c->r[30]=c->r[4]|c->r[4]; // 8034E578
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034E57C
  c->r[29]=c->r[3]|c->r[3]; // 8034E580
  c->lr=0x8034E588u; f_8032269C(c); // 8034E584
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 8034E588
  if (!crb(c,2)) { goto L_8034E66C; } // 8034E58C
  c->r[4]=0u+0x80530000u; // 8034E590
  {uint32_t ea=c->r[4]+0xFFFF9080u; c->r[0]=R32(ea); c->r[4]=ea;} // 8034E594
  c->r[31]=0u+0x00000000u; // 8034E598
  cmps(c,0,(int32_t)c->r[0],0); // 8034E59C
  if (crb(c,2)) { goto L_8034E618; } // 8034E5A0
  c->r[0]=R32(c->r[4]+0x00000010u); // 8034E5A4
  c->r[31]=0u+0x00000001u; // 8034E5A8
  cmps(c,0,(int32_t)c->r[0],0); // 8034E5AC
  if (crb(c,2)) { goto L_8034E618; } // 8034E5B0
  c->r[0]=R32(c->r[4]+0x00000020u); // 8034E5B4
  c->r[31]=0u+0x00000002u; // 8034E5B8
  cmps(c,0,(int32_t)c->r[0],0); // 8034E5BC
  if (crb(c,2)) { goto L_8034E618; } // 8034E5C0
  c->r[0]=R32(c->r[4]+0x00000030u); // 8034E5C4
  c->r[31]=0u+0x00000003u; // 8034E5C8
  cmps(c,0,(int32_t)c->r[0],0); // 8034E5CC
  if (crb(c,2)) { goto L_8034E618; } // 8034E5D0
  c->r[0]=R32(c->r[4]+0x00000040u); // 8034E5D4
  c->r[31]=0u+0x00000004u; // 8034E5D8
  cmps(c,0,(int32_t)c->r[0],0); // 8034E5DC
  if (crb(c,2)) { goto L_8034E618; } // 8034E5E0
  c->r[0]=R32(c->r[4]+0x00000050u); // 8034E5E4
  c->r[31]=0u+0x00000005u; // 8034E5E8
  cmps(c,0,(int32_t)c->r[0],0); // 8034E5EC
  if (crb(c,2)) { goto L_8034E618; } // 8034E5F0
  c->r[0]=R32(c->r[4]+0x00000060u); // 8034E5F4
  c->r[31]=0u+0x00000006u; // 8034E5F8
  cmps(c,0,(int32_t)c->r[0],0); // 8034E5FC
  if (crb(c,2)) { goto L_8034E618; } // 8034E600
  c->r[0]=R32(c->r[4]+0x00000070u); // 8034E604
  c->r[31]=0u+0x00000007u; // 8034E608
  cmps(c,0,(int32_t)c->r[0],0); // 8034E60C
  if (crb(c,2)) { goto L_8034E618; } // 8034E610
  c->r[31]=0u+0x00000008u; // 8034E614
L_8034E618:;
  cmps(c,0,(int32_t)c->r[31],8); // 8034E618
  if (!crb(c,2)) { goto L_8034E628; } // 8034E61C
  c->r[31]=0u+0xFFFFFFFBu; // 8034E620
  goto L_8034E66C; // 8034E624
L_8034E628:;
  c->r[5]=0u+0x80530000u; // 8034E628
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8034E62C
  c->r[5]=c->r[5]+0xFFFF9080u; // 8034E630
  c->r[4]=0u+0xBABE0000u; // 8034E634
  c->r[6]=c->r[5]+c->r[0]; // 8034E638
  c->r[0]=0u+0x00000000u; // 8034E63C
  W32(c->r[6]+0x00000000u,c->r[29]); // 8034E640
  c->r[5]=c->r[30]+0xFFFFFFF0u; // 8034E644
  W32(c->r[6]+0x00000008u,c->r[30]); // 8034E648
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 8034E64C
  W32(c->r[29]+0x00000000u,c->r[4]); // 8034E650
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8034E654
  W32(c->r[4]+0x00000004u,c->r[5]); // 8034E658
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8034E65C
  W32(c->r[4]+0x00000008u,c->r[0]); // 8034E660
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8034E664
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8034E668
L_8034E66C:;
  c->lr=0x8034E670u; f_803226C4(c); // 8034E66C
  c->r[3]=c->r[31]|c->r[31]; // 8034E670
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034E674
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034E678
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034E67C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034E680
  c->lr=c->r[0]; // 8034E684
  c->r[1]=c->r[1]+0x00000020u; // 8034E688
  return; // 8034E68C
}

// __iosAlloc
void f_8034E690(Ctx* __restrict c) {
  trace_call(0x8034E690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034E690
  c->r[0]=c->lr; // 8034E694
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034E698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034E69C
  c->r[31]=0u+0x00000000u; // 8034E6A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034E6A4
  c->r[30]=c->r[5]|c->r[5]; // 8034E6A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034E6AC
  c->r[29]=c->r[4]|c->r[4]; // 8034E6B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034E6B4
  c->r[28]=c->r[3]|c->r[3]; // 8034E6B8
  c->lr=0x8034E6C0u; f_8032269C(c); // 8034E6BC
  cmps(c,0,(int32_t)c->r[29],0); // 8034E6C0
  if (crb(c,2)) { goto L_8034E86C; } // 8034E6C4
  cmps(c,0,(int32_t)c->r[30],0); // 8034E6C8
  if (crb(c,2)) { goto L_8034E86C; } // 8034E6CC
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 8034E6D0
  c->r[0]=c->r[30]&c->r[0]; cr0(c,c->r[0]); // 8034E6D4
  if (!crb(c,2)) { goto L_8034E86C; } // 8034E6D8
  cmpu(c,0,c->r[30],0x00000020u); // 8034E6DC
  if (!crb(c,0)) { goto L_8034E6E8; } // 8034E6E0
  c->r[30]=0u+0x00000020u; // 8034E6E4
L_8034E6E8:;
  cmps(c,0,(int32_t)c->r[28],0); // 8034E6E8
  c->r[0]=c->r[29]+0x0000001Fu; // 8034E6EC
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8034E6F0
  if (crb(c,0)) { goto L_8034E718; } // 8034E6F4
  cmps(c,0,(int32_t)c->r[28],8); // 8034E6F8
  if (!crb(c,0)) { goto L_8034E718; } // 8034E6FC
  c->r[4]=0u+0x80530000u; // 8034E700
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 8034E704
  c->r[4]=c->r[4]+0xFFFF9080u; // 8034E708
  {uint32_t ea=c->r[4]+c->r[0]; c->r[0]=R32(ea); c->r[4]=ea;} // 8034E70C
  cmps(c,0,(int32_t)c->r[0],0); // 8034E710
  if (!crb(c,2)) { goto L_8034E720; } // 8034E714
L_8034E718:;
  c->r[31]=0u+0x00000000u; // 8034E718
  goto L_8034E86C; // 8034E71C
L_8034E720:;
  c->r[8]=R32(c->r[4]+0x0000000Cu); // 8034E720
  c->r[6]=c->r[30]+0xFFFFFFFFu; // 8034E724
  c->r[5]=0u+0x00000000u; // 8034E728
  goto L_8034E784; // 8034E72C
L_8034E730:;
  c->r[7]=R32(c->r[8]+0x00000004u); // 8034E730
  c->r[0]=c->r[8]+0x00000010u; // 8034E734
  c->r[0]=c->r[0]&c->r[6]; // 8034E738
  cmpu(c,0,c->r[7],c->r[29]); // 8034E73C
  c->r[0]=c->r[30]-c->r[0]; // 8034E740
  c->r[0]=c->r[6]&c->r[0]; // 8034E744
  if (!crb(c,2)) { goto L_8034E75C; } // 8034E748
  cmps(c,0,(int32_t)c->r[0],0); // 8034E74C
  if (!crb(c,2)) { goto L_8034E75C; } // 8034E750
  c->r[5]=c->r[8]|c->r[8]; // 8034E754
  goto L_8034E78C; // 8034E758
L_8034E75C:;
  c->r[0]=c->r[29]+c->r[0]; // 8034E75C
  cmpu(c,0,c->r[7],c->r[0]); // 8034E760
  if (crb(c,0)) { goto L_8034E780; } // 8034E764
  cmps(c,0,(int32_t)c->r[5],0); // 8034E768
  if (crb(c,2)) { goto L_8034E77C; } // 8034E76C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8034E770
  cmpu(c,0,c->r[7],c->r[0]); // 8034E774
  if (!crb(c,0)) { goto L_8034E780; } // 8034E778
L_8034E77C:;
  c->r[5]=c->r[8]|c->r[8]; // 8034E77C
L_8034E780:;
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 8034E780
L_8034E784:;
  cmps(c,0,(int32_t)c->r[8],0); // 8034E784
  if (!crb(c,2)) { IRQCHK(c); goto L_8034E730; } // 8034E788
L_8034E78C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8034E78C
  if (crb(c,2)) { goto L_8034E86C; } // 8034E790
  c->r[7]=c->r[30]+0xFFFFFFFFu; // 8034E794
  c->r[0]=c->r[5]+0x00000010u; // 8034E798
  c->r[0]=c->r[0]&c->r[7]; // 8034E79C
  c->r[6]=R32(c->r[5]+0x00000004u); // 8034E7A0
  c->r[0]=c->r[30]-c->r[0]; // 8034E7A4
  c->r[8]=c->r[7]&c->r[0]; // 8034E7A8
  c->r[7]=c->r[29]+c->r[8]; // 8034E7AC
  c->r[0]=c->r[7]+0x00000010u; // 8034E7B0
  cmpu(c,0,c->r[6],c->r[0]); // 8034E7B4
  if (!crb(c,1)) { goto L_8034E800; } // 8034E7B8
  c->r[6]=c->r[5]+c->r[29]; // 8034E7BC
  c->r[0]=0u+0xBABE0000u; // 8034E7C0
  c->r[9]=c->r[8]+c->r[6]; // 8034E7C4
  W32(c->r[9]+0x00000010u,c->r[0]); // 8034E7C8
  c->r[0]=R32(c->r[5]+0x00000004u); // 8034E7CC
  c->r[0]=c->r[0]-c->r[29]; // 8034E7D0
  c->r[6]=c->r[0]-c->r[8]; // 8034E7D4
  c->r[0]=c->r[6]+0xFFFFFFF0u; // 8034E7D8
  W32(c->r[9]+0x00000014u,c->r[0]); // 8034E7DC
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 8034E7E0
  cmps(c,0,(int32_t)c->r[6],0); // 8034E7E4
  W32(c->r[9]+0x0000001Cu,c->r[6]); // 8034E7E8
  c->r[9]=c->r[9]+0x00000010u; // 8034E7EC
  if (crb(c,2)) { goto L_8034E7F8; } // 8034E7F0
  W32(c->r[6]+0x00000008u,c->r[9]); // 8034E7F4
L_8034E7F8:;
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 8034E7F8
  W32(c->r[5]+0x00000004u,c->r[7]); // 8034E7FC
L_8034E800:;
  c->r[6]=0u+0xBABE0000u; // 8034E800
  c->r[0]=c->r[6]+0x00000001u; // 8034E804
  W32(c->r[5]+0x00000000u,c->r[0]); // 8034E808
  c->r[6]=R32(c->r[5]+0x00000008u); // 8034E80C
  cmps(c,0,(int32_t)c->r[6],0); // 8034E810
  if (crb(c,2)) { goto L_8034E824; } // 8034E814
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8034E818
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 8034E81C
  goto L_8034E82C; // 8034E820
L_8034E824:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8034E824
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8034E828
L_8034E82C:;
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8034E82C
  cmps(c,0,(int32_t)c->r[4],0); // 8034E830
  if (crb(c,2)) { goto L_8034E840; } // 8034E834
  c->r[0]=R32(c->r[5]+0x00000008u); // 8034E838
  W32(c->r[4]+0x00000008u,c->r[0]); // 8034E83C
L_8034E840:;
  c->r[0]=0u+0x00000000u; // 8034E840
  c->r[31]=c->r[5]+c->r[8]; // 8034E844
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8034E848
  cmps(c,0,(int32_t)c->r[8],0); // 8034E84C
  c->r[31]=c->r[31]+0x00000010u; // 8034E850
  W32(c->r[5]+0x00000008u,c->r[0]); // 8034E854
  if (crb(c,2)) { goto L_8034E86C; } // 8034E858
  c->r[4]=0u+0xBABE0000u; // 8034E85C
  c->r[0]=c->r[4]+0x00000002u; // 8034E860
  W32(c->r[31]+0xFFFFFFF0u,c->r[0]); // 8034E864
  W32(c->r[31]+0xFFFFFFF8u,c->r[5]); // 8034E868
L_8034E86C:;
  c->lr=0x8034E870u; f_803226C4(c); // 8034E86C
  c->r[3]=c->r[31]|c->r[31]; // 8034E870
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034E874
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034E878
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034E87C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034E880
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034E884
  c->lr=c->r[0]; // 8034E888
  c->r[1]=c->r[1]+0x00000020u; // 8034E88C
  return; // 8034E890
}

// iosAllocAligned
void f_8034E894(Ctx* __restrict c) {
  trace_call(0x8034E894u);
  f_8034E690(c); return; // 8034E894
}

// iosFree
void f_8034E898(Ctx* __restrict c) {
  trace_call(0x8034E898u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034E898
  c->r[0]=c->lr; // 8034E89C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034E8A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034E8A4
  c->r[31]=0u+0xFFFFFFFCu; // 8034E8A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034E8AC
  c->r[30]=c->r[4]|c->r[4]; // 8034E8B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034E8B4
  c->r[29]=c->r[3]|c->r[3]; // 8034E8B8
  c->lr=0x8034E8C0u; f_8032269C(c); // 8034E8BC
  cmps(c,0,(int32_t)c->r[30],0); // 8034E8C0
  if (crb(c,2)) { goto L_8034EA60; } // 8034E8C4
  cmps(c,0,(int32_t)c->r[29],0); // 8034E8C8
  if (crb(c,0)) { goto L_8034E8F4; } // 8034E8CC
  cmps(c,0,(int32_t)c->r[29],8); // 8034E8D0
  if (!crb(c,0)) { goto L_8034E8F4; } // 8034E8D4
  c->r[4]=0u+0x80530000u; // 8034E8D8
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 8034E8DC
  c->r[4]=c->r[4]+0xFFFF9080u; // 8034E8E0
  c->r[5]=c->r[4]+c->r[0]; // 8034E8E4
  c->r[4]=R32(c->r[4]+c->r[0]); // 8034E8E8
  cmps(c,0,(int32_t)c->r[4],0); // 8034E8EC
  if (!crb(c,2)) { goto L_8034E8FC; } // 8034E8F0
L_8034E8F4:;
  c->r[31]=0u+0xFFFFFFFCu; // 8034E8F4
  goto L_8034EA60; // 8034E8F8
L_8034E8FC:;
  c->r[0]=c->r[4]+0x00000010u; // 8034E8FC
  cmpu(c,0,c->r[30],c->r[0]); // 8034E900
  if (crb(c,0)) { goto L_8034EA60; } // 8034E904
  c->r[0]=R32(c->r[5]+0x00000008u); // 8034E908
  c->r[0]=c->r[4]+c->r[0]; // 8034E90C
  cmpu(c,0,c->r[30],c->r[0]); // 8034E910
  if (crb(c,1)) { goto L_8034EA60; } // 8034E914
  c->r[4]=R32(c->r[30]+0xFFFFFFF0u); // 8034E918
  c->r[6]=c->r[30]+0xFFFFFFF0u; // 8034E91C
  c->r[0]=c->r[4]+0x45420000u; // 8034E920
  cmpu(c,0,c->r[0],0x00000002u); // 8034E924
  if (!crb(c,2)) { goto L_8034E930; } // 8034E928
  c->r[6]=R32(c->r[6]+0x00000008u); // 8034E92C
L_8034E930:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8034E930
  c->r[0]=c->r[4]+0x45420000u; // 8034E934
  cmpu(c,0,c->r[0],0x00000001u); // 8034E938
  if (!crb(c,2)) { goto L_8034EA60; } // 8034E93C
  c->r[0]=0u+0xBABE0000u; // 8034E940
  W32(c->r[6]+0x00000000u,c->r[0]); // 8034E944
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8034E948
  c->r[7]=c->r[4]|c->r[4]; // 8034E94C
  goto L_8034E96C; // 8034E950
L_8034E954:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 8034E954
  cmps(c,0,(int32_t)c->r[0],0); // 8034E958
  if (crb(c,2)) { goto L_8034E974; } // 8034E95C
  cmpu(c,0,c->r[0],c->r[6]); // 8034E960
  if (crb(c,1)) { goto L_8034E974; } // 8034E964
  c->r[7]=c->r[0]|c->r[0]; // 8034E968
L_8034E96C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8034E96C
  if (!crb(c,2)) { IRQCHK(c); goto L_8034E954; } // 8034E970
L_8034E974:;
  cmps(c,0,(int32_t)c->r[7],0); // 8034E974
  if (crb(c,2)) { goto L_8034E9A8; } // 8034E978
  cmpu(c,0,c->r[6],c->r[7]); // 8034E97C
  if (!crb(c,1)) { goto L_8034E9A8; } // 8034E980
  W32(c->r[6]+0x00000008u,c->r[7]); // 8034E984
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 8034E988
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 8034E98C
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 8034E990
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8034E994
  cmps(c,0,(int32_t)c->r[4],0); // 8034E998
  if (crb(c,2)) { goto L_8034E9C8; } // 8034E99C
  W32(c->r[4]+0x00000008u,c->r[6]); // 8034E9A0
  goto L_8034E9C8; // 8034E9A4
L_8034E9A8:;
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 8034E9A8
  c->r[0]=0u+0x00000000u; // 8034E9AC
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 8034E9B0
  W32(c->r[6]+0x00000008u,c->r[0]); // 8034E9B4
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8034E9B8
  cmps(c,0,(int32_t)c->r[4],0); // 8034E9BC
  if (crb(c,2)) { goto L_8034E9C8; } // 8034E9C0
  W32(c->r[4]+0x00000008u,c->r[6]); // 8034E9C4
L_8034E9C8:;
  cmps(c,0,(int32_t)c->r[6],0); // 8034E9C8
  if (crb(c,2)) { goto L_8034EA10; } // 8034E9CC
  c->r[0]=R32(c->r[6]+0x00000004u); // 8034E9D0
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 8034E9D4
  c->r[4]=c->r[6]+c->r[0]; // 8034E9D8
  c->r[0]=c->r[4]+0x00000010u; // 8034E9DC
  cmpu(c,0,c->r[5],c->r[0]); // 8034E9E0
  if (!crb(c,2)) { goto L_8034EA10; } // 8034E9E4
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8034E9E8
  cmps(c,0,(int32_t)c->r[4],0); // 8034E9EC
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 8034E9F0
  if (crb(c,2)) { goto L_8034E9FC; } // 8034E9F4
  W32(c->r[4]+0x00000008u,c->r[6]); // 8034E9F8
L_8034E9FC:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 8034E9FC
  c->r[0]=R32(c->r[5]+0x00000004u); // 8034EA00
  c->r[4]=c->r[0]+c->r[4]; // 8034EA04
  c->r[0]=c->r[4]+0x00000010u; // 8034EA08
  W32(c->r[6]+0x00000004u,c->r[0]); // 8034EA0C
L_8034EA10:;
  c->r[5]=R32(c->r[6]+0x00000008u); // 8034EA10
  cmps(c,0,(int32_t)c->r[5],0); // 8034EA14
  if (crb(c,2)) { goto L_8034EA5C; } // 8034EA18
  c->r[0]=R32(c->r[5]+0x00000004u); // 8034EA1C
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 8034EA20
  c->r[4]=c->r[5]+c->r[0]; // 8034EA24
  c->r[0]=c->r[4]+0x00000010u; // 8034EA28
  cmpu(c,0,c->r[6],c->r[0]); // 8034EA2C
  if (!crb(c,2)) { goto L_8034EA5C; } // 8034EA30
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 8034EA34
  cmps(c,0,(int32_t)c->r[4],0); // 8034EA38
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8034EA3C
  if (crb(c,2)) { goto L_8034EA48; } // 8034EA40
  W32(c->r[4]+0x00000008u,c->r[5]); // 8034EA44
L_8034EA48:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8034EA48
  c->r[0]=R32(c->r[6]+0x00000004u); // 8034EA4C
  c->r[4]=c->r[0]+c->r[4]; // 8034EA50
  c->r[0]=c->r[4]+0x00000010u; // 8034EA54
  W32(c->r[5]+0x00000004u,c->r[0]); // 8034EA58
L_8034EA5C:;
  c->r[31]=0u+0x00000000u; // 8034EA5C
L_8034EA60:;
  c->lr=0x8034EA64u; f_803226C4(c); // 8034EA60
  c->r[3]=c->r[31]|c->r[31]; // 8034EA64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034EA68
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034EA6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034EA70
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034EA74
  c->lr=c->r[0]; // 8034EA78
  c->r[1]=c->r[1]+0x00000020u; // 8034EA7C
  return; // 8034EA80
}

// IPCiProfInit
void f_8034EA84(Ctx* __restrict c) {
  trace_call(0x8034EA84u);
  c->r[4]=0u+0x00000000u; // 8034EA84
  c->r[5]=0u+0x80530000u; // 8034EA88
  c->r[6]=0u+0x80530000u; // 8034EA8C
  c->r[0]=0u+0x00000002u; // 8034EA90
  W32(c->r[13]+0xFFFFEF28u,c->r[4]); // 8034EA94
  c->r[5]=c->r[5]+0xFFFF9180u; // 8034EA98
  c->r[6]=c->r[6]+0xFFFF9100u; // 8034EA9C
  c->r[3]=0u+0xFFFFFFFFu; // 8034EAA0
  W32(c->r[13]+0xFFFFEF2Cu,c->r[4]); // 8034EAA4
  c->ctr=c->r[0]; // 8034EAA8
L_8034EAAC:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 8034EAAC
  W32(c->r[6]+0x00000000u,c->r[3]); // 8034EAB0
  W32(c->r[5]+0x00000004u,c->r[4]); // 8034EAB4
  W32(c->r[6]+0x00000004u,c->r[3]); // 8034EAB8
  W32(c->r[5]+0x00000008u,c->r[4]); // 8034EABC
  W32(c->r[6]+0x00000008u,c->r[3]); // 8034EAC0
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8034EAC4
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 8034EAC8
  W32(c->r[5]+0x00000010u,c->r[4]); // 8034EACC
  W32(c->r[6]+0x00000010u,c->r[3]); // 8034EAD0
  W32(c->r[5]+0x00000014u,c->r[4]); // 8034EAD4
  W32(c->r[6]+0x00000014u,c->r[3]); // 8034EAD8
  W32(c->r[5]+0x00000018u,c->r[4]); // 8034EADC
  W32(c->r[6]+0x00000018u,c->r[3]); // 8034EAE0
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 8034EAE4
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 8034EAE8
  W32(c->r[5]+0x00000020u,c->r[4]); // 8034EAEC
  W32(c->r[6]+0x00000020u,c->r[3]); // 8034EAF0
  W32(c->r[5]+0x00000024u,c->r[4]); // 8034EAF4
  W32(c->r[6]+0x00000024u,c->r[3]); // 8034EAF8
  W32(c->r[5]+0x00000028u,c->r[4]); // 8034EAFC
  W32(c->r[6]+0x00000028u,c->r[3]); // 8034EB00
  W32(c->r[5]+0x0000002Cu,c->r[4]); // 8034EB04
  W32(c->r[6]+0x0000002Cu,c->r[3]); // 8034EB08
  W32(c->r[5]+0x00000030u,c->r[4]); // 8034EB0C
  W32(c->r[6]+0x00000030u,c->r[3]); // 8034EB10
  W32(c->r[5]+0x00000034u,c->r[4]); // 8034EB14
  W32(c->r[6]+0x00000034u,c->r[3]); // 8034EB18
  W32(c->r[5]+0x00000038u,c->r[4]); // 8034EB1C
  W32(c->r[6]+0x00000038u,c->r[3]); // 8034EB20
  W32(c->r[5]+0x0000003Cu,c->r[4]); // 8034EB24
  c->r[5]=c->r[5]+0x00000040u; // 8034EB28
  W32(c->r[6]+0x0000003Cu,c->r[3]); // 8034EB2C
  c->r[6]=c->r[6]+0x00000040u; // 8034EB30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034EAAC; } // 8034EB34
  return; // 8034EB38
}

// IPCiProfQueueReq
void f_8034EB3C(Ctx* __restrict c) {
  trace_call(0x8034EB3Cu);
  c->r[6]=R32(c->r[13]+0xFFFFEF28u); // 8034EB3C
  c->r[8]=0u+0x80530000u; // 8034EB40
  c->r[5]=R32(c->r[13]+0xFFFFEF2Cu); // 8034EB44
  c->r[9]=0u+0x80530000u; // 8034EB48
  c->r[6]=c->r[6]+0x00000001u; // 8034EB4C
  c->r[0]=0u+0x00000020u; // 8034EB50
  c->r[5]=c->r[5]+0x00000001u; // 8034EB54
  W32(c->r[13]+0xFFFFEF28u,c->r[6]); // 8034EB58
  c->r[8]=c->r[8]+0xFFFF9180u; // 8034EB5C
  c->r[9]=c->r[9]+0xFFFF9100u; // 8034EB60
  W32(c->r[13]+0xFFFFEF2Cu,c->r[5]); // 8034EB64
  c->r[7]=0u+0x00000000u; // 8034EB68
  c->ctr=c->r[0]; // 8034EB6C
L_8034EB70:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 8034EB70
  cmps(c,0,(int32_t)c->r[0],0); // 8034EB74
  if (!crb(c,2)) { goto L_8034EBA8; } // 8034EB78
  c->r[0]=R32(c->r[9]+0x00000000u); // 8034EB7C
  cmps(c,0,(int32_t)c->r[0],-1); // 8034EB80
  if (!crb(c,2)) { goto L_8034EBA8; } // 8034EB84
  c->r[6]=0u+0x80530000u; // 8034EB88
  c->r[5]=0u+0x80530000u; // 8034EB8C
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8034EB90
  c->r[6]=c->r[6]+0xFFFF9180u; // 8034EB94
  c->r[5]=c->r[5]+0xFFFF9100u; // 8034EB98
  W32(c->r[6]+c->r[0],c->r[3]); // 8034EB9C
  W32(c->r[5]+c->r[0],c->r[4]); // 8034EBA0
  return; // 8034EBA4
L_8034EBA8:;
  c->r[8]=c->r[8]+0x00000004u; // 8034EBA8
  c->r[9]=c->r[9]+0x00000004u; // 8034EBAC
  c->r[7]=c->r[7]+0x00000001u; // 8034EBB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034EB70; } // 8034EBB4
  return; // 8034EBB8
}

// IPCiProfAck
void f_8034EBBC(Ctx* __restrict c) {
  trace_call(0x8034EBBCu);
  c->r[3]=R32(c->r[13]+0xFFFFEF2Cu); // 8034EBBC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8034EBC0
  W32(c->r[13]+0xFFFFEF2Cu,c->r[0]); // 8034EBC4
  return; // 8034EBC8
}

// IPCiProfReply
void f_8034EBCC(Ctx* __restrict c) {
  trace_call(0x8034EBCCu);
  c->r[5]=R32(c->r[13]+0xFFFFEF28u); // 8034EBCC
  c->r[6]=0u+0x80530000u; // 8034EBD0
  c->r[7]=0u+0x80530000u; // 8034EBD4
  c->r[0]=0u+0x00000020u; // 8034EBD8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8034EBDC
  c->r[6]=c->r[6]+0xFFFF9180u; // 8034EBE0
  W32(c->r[13]+0xFFFFEF28u,c->r[5]); // 8034EBE4
  c->r[7]=c->r[7]+0xFFFF9100u; // 8034EBE8
  c->r[5]=0u+0x00000000u; // 8034EBEC
  c->ctr=c->r[0]; // 8034EBF0
L_8034EBF4:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8034EBF4
  cmpu(c,0,c->r[3],c->r[0]); // 8034EBF8
  if (!crb(c,2)) { goto L_8034EC34; } // 8034EBFC
  c->r[0]=R32(c->r[7]+0x00000000u); // 8034EC00
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8034EC04
  if (!crb(c,2)) { goto L_8034EC34; } // 8034EC08
  c->r[4]=0u+0x80530000u; // 8034EC0C
  c->r[3]=0u+0x80530000u; // 8034EC10
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8034EC14
  c->r[5]=0u+0x00000000u; // 8034EC18
  c->r[4]=c->r[4]+0xFFFF9180u; // 8034EC1C
  c->r[3]=c->r[3]+0xFFFF9100u; // 8034EC20
  c->r[0]=0u+0xFFFFFFFFu; // 8034EC24
  W32(c->r[4]+c->r[6],c->r[5]); // 8034EC28
  W32(c->r[3]+c->r[6],c->r[0]); // 8034EC2C
  return; // 8034EC30
L_8034EC34:;
  c->r[6]=c->r[6]+0x00000004u; // 8034EC34
  c->r[7]=c->r[7]+0x00000004u; // 8034EC38
  c->r[5]=c->r[5]+0x00000001u; // 8034EC3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8034EBF4; } // 8034EC40
  return; // 8034EC44
}

// nandCreate
void f_8034EC48(Ctx* __restrict c) {
  trace_call(0x8034EC48u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034EC48
  c->r[0]=c->lr; // 8034EC4C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8034EC50
  c->r[11]=c->r[1]+0x00000070u; // 8034EC54
  c->lr=0x8034EC5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034EC58
  c->r[0]=0u+0x00000000u; // 8034EC5C
  c->r[27]=c->r[4]|c->r[4]; // 8034EC60
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034EC64
  c->r[4]=c->r[3]|c->r[3]; // 8034EC68
  c->r[28]=c->r[5]|c->r[5]; // 8034EC6C
  c->r[29]=c->r[6]|c->r[6]; // 8034EC70
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034EC74
  c->r[30]=c->r[7]|c->r[7]; // 8034EC78
  c->r[31]=c->r[8]|c->r[8]; // 8034EC7C
  c->r[3]=c->r[1]+0x00000018u; // 8034EC80
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034EC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034EC88
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034EC8C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034EC90
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034EC94
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034EC98
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034EC9C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034ECA0
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034ECA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034ECA8
  W32(c->r[1]+0x00000048u,c->r[0]); // 8034ECAC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8034ECB0
  W32(c->r[1]+0x00000050u,c->r[0]); // 8034ECB4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8034ECB8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034ECBC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034ECC0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034ECC4
  c->lr=0x8034ECCCu; f_80350E40(c); // 8034ECC8
  cmps(c,0,(int32_t)c->r[31],0); // 8034ECCC
  if (!crb(c,2)) { goto L_8034ECEC; } // 8034ECD0
  c->r[3]=c->r[1]+0x00000018u; // 8034ECD4
  c->lr=0x8034ECDCu; f_80350C3C(c); // 8034ECD8
  cmps(c,0,(int32_t)c->r[3],0); // 8034ECDC
  if (crb(c,2)) { goto L_8034ECEC; } // 8034ECE0
  c->r[3]=0u+0xFFFFFF9Au; // 8034ECE4
  goto L_8034ED58; // 8034ECE8
L_8034ECEC:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 8034ECEC
  if (!crb(c,2)) { goto L_8034ECFC; } // 8034ECF0
  c->r[3]=0u+0xFFFFFF9Bu; // 8034ECF4
  goto L_8034ED58; // 8034ECF8
L_8034ECFC:;
  c->r[3]=c->r[27]|c->r[27]; // 8034ECFC
  c->r[4]=c->r[1]+0x00000010u; // 8034ED00
  c->r[5]=c->r[1]+0x0000000Cu; // 8034ED04
  c->r[6]=c->r[1]+0x00000008u; // 8034ED08
  c->lr=0x8034ED10u; f_8034F6FC(c); // 8034ED0C
  cmps(c,0,(int32_t)c->r[30],0); // 8034ED10
  if (crb(c,2)) { goto L_8034ED40; } // 8034ED14
  c->r[8]=0u+0x80350000u; // 8034ED18
  c->r[5]=R32(c->r[1]+0x00000010u); // 8034ED1C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8034ED20
  c->r[4]=c->r[28]|c->r[28]; // 8034ED24
  c->r[7]=R32(c->r[1]+0x00000008u); // 8034ED28
  c->r[9]=c->r[29]|c->r[29]; // 8034ED2C
  c->r[3]=c->r[1]+0x00000018u; // 8034ED30
  c->r[8]=c->r[8]+0x00001280u; // 8034ED34
  c->lr=0x8034ED3Cu; f_8034C66C(c); // 8034ED38
  goto L_8034ED58; // 8034ED3C
L_8034ED40:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 8034ED40
  c->r[4]=c->r[28]|c->r[28]; // 8034ED44
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8034ED48
  c->r[3]=c->r[1]+0x00000018u; // 8034ED4C
  c->r[7]=R32(c->r[1]+0x00000008u); // 8034ED50
  c->lr=0x8034ED58u; f_8034C578(c); // 8034ED54
L_8034ED58:;
  c->r[11]=c->r[1]+0x00000070u; // 8034ED58
  c->lr=0x8034ED60u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034ED5C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8034ED60
  c->lr=c->r[0]; // 8034ED64
  c->r[1]=c->r[1]+0x00000070u; // 8034ED68
  return; // 8034ED6C
}

// NANDPrivateCreate
void f_8034ED70(Ctx* __restrict c) {
  trace_call(0x8034ED70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034ED70
  c->r[0]=c->lr; // 8034ED74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034ED78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034ED7C
  c->r[31]=c->r[5]|c->r[5]; // 8034ED80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034ED84
  c->r[30]=c->r[4]|c->r[4]; // 8034ED88
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034ED8C
  c->r[29]=c->r[3]|c->r[3]; // 8034ED90
  c->lr=0x8034ED98u; f_80350CC8(c); // 8034ED94
  cmps(c,0,(int32_t)c->r[3],0); // 8034ED98
  if (crb(c,2)) { goto L_8034EDC4; } // 8034ED9C
  c->r[3]=c->r[29]|c->r[29]; // 8034EDA0
  c->r[4]=c->r[30]|c->r[30]; // 8034EDA4
  c->r[5]=c->r[31]|c->r[31]; // 8034EDA8
  c->r[6]=0u+0x00000000u; // 8034EDAC
  c->r[7]=0u+0x00000000u; // 8034EDB0
  c->r[8]=0u+0x00000001u; // 8034EDB4
  c->lr=0x8034EDBCu; f_8034EC48(c); // 8034EDB8
  c->lr=0x8034EDC0u; f_80350CE0(c); // 8034EDBC
  goto L_8034EDC8; // 8034EDC0
L_8034EDC4:;
  c->r[3]=0u+0xFFFFFF80u; // 8034EDC4
L_8034EDC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034EDC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034EDCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034EDD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034EDD4
  c->lr=c->r[0]; // 8034EDD8
  c->r[1]=c->r[1]+0x00000020u; // 8034EDDC
  return; // 8034EDE0
}

// fn_8034EDE4
void f_8034EDE4(Ctx* __restrict c) {
  trace_call(0x8034EDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034EDE4
  c->r[0]=c->lr; // 8034EDE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034EDEC
  c->r[11]=c->r[1]+0x00000020u; // 8034EDF0
  c->lr=0x8034EDF8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034EDF4
  c->r[27]=c->r[3]|c->r[3]; // 8034EDF8
  c->r[28]=c->r[4]|c->r[4]; // 8034EDFC
  c->r[29]=c->r[5]|c->r[5]; // 8034EE00
  c->r[30]=c->r[6]|c->r[6]; // 8034EE04
  c->r[31]=c->r[7]|c->r[7]; // 8034EE08
  c->lr=0x8034EE10u; f_80350CC8(c); // 8034EE0C
  cmps(c,0,(int32_t)c->r[3],0); // 8034EE10
  if (!crb(c,2)) { goto L_8034EE20; } // 8034EE14
  c->r[3]=0u+0xFFFFFF80u; // 8034EE18
  goto L_8034EE44; // 8034EE1C
L_8034EE20:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034EE20
  c->r[3]=c->r[27]|c->r[27]; // 8034EE24
  c->r[4]=c->r[28]|c->r[28]; // 8034EE28
  c->r[5]=c->r[29]|c->r[29]; // 8034EE2C
  c->r[6]=c->r[31]|c->r[31]; // 8034EE30
  c->r[7]=0u+0x00000001u; // 8034EE34
  c->r[8]=0u+0x00000000u; // 8034EE38
  c->lr=0x8034EE40u; f_8034EC48(c); // 8034EE3C
  c->lr=0x8034EE44u; f_80350CE0(c); // 8034EE40
L_8034EE44:;
  c->r[11]=c->r[1]+0x00000020u; // 8034EE44
  c->lr=0x8034EE4Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034EE48
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034EE4C
  c->lr=c->r[0]; // 8034EE50
  c->r[1]=c->r[1]+0x00000020u; // 8034EE54
  return; // 8034EE58
}

// NANDPrivateCreateAsync
void f_8034EE5C(Ctx* __restrict c) {
  trace_call(0x8034EE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034EE5C
  c->r[0]=c->lr; // 8034EE60
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034EE64
  c->r[11]=c->r[1]+0x00000020u; // 8034EE68
  c->lr=0x8034EE70u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034EE6C
  c->r[27]=c->r[3]|c->r[3]; // 8034EE70
  c->r[28]=c->r[4]|c->r[4]; // 8034EE74
  c->r[29]=c->r[5]|c->r[5]; // 8034EE78
  c->r[30]=c->r[6]|c->r[6]; // 8034EE7C
  c->r[31]=c->r[7]|c->r[7]; // 8034EE80
  c->lr=0x8034EE88u; f_80350CC8(c); // 8034EE84
  cmps(c,0,(int32_t)c->r[3],0); // 8034EE88
  if (!crb(c,2)) { goto L_8034EE98; } // 8034EE8C
  c->r[3]=0u+0xFFFFFF80u; // 8034EE90
  goto L_8034EEBC; // 8034EE94
L_8034EE98:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034EE98
  c->r[3]=c->r[27]|c->r[27]; // 8034EE9C
  c->r[4]=c->r[28]|c->r[28]; // 8034EEA0
  c->r[5]=c->r[29]|c->r[29]; // 8034EEA4
  c->r[6]=c->r[31]|c->r[31]; // 8034EEA8
  c->r[7]=0u+0x00000001u; // 8034EEAC
  c->r[8]=0u+0x00000001u; // 8034EEB0
  c->lr=0x8034EEB8u; f_8034EC48(c); // 8034EEB4
  c->lr=0x8034EEBCu; f_80350CE0(c); // 8034EEB8
L_8034EEBC:;
  c->r[11]=c->r[1]+0x00000020u; // 8034EEBC
  c->lr=0x8034EEC4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034EEC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034EEC4
  c->lr=c->r[0]; // 8034EEC8
  c->r[1]=c->r[1]+0x00000020u; // 8034EECC
  return; // 8034EED0
}

// NANDDelete
void f_8034EED4(Ctx* __restrict c) {
  trace_call(0x8034EED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034EED4
  c->r[0]=c->lr; // 8034EED8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8034EEDC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8034EEE0
  c->r[31]=c->r[3]|c->r[3]; // 8034EEE4
  c->lr=0x8034EEECu; f_80350CC8(c); // 8034EEE8
  cmps(c,0,(int32_t)c->r[3],0); // 8034EEEC
  if (!crb(c,2)) { goto L_8034EEFC; } // 8034EEF0
  c->r[3]=0u+0xFFFFFF80u; // 8034EEF4
  goto L_8034EF70; // 8034EEF8
L_8034EEFC:;
  c->r[0]=0u+0x00000000u; // 8034EEFC
  c->r[4]=c->r[31]|c->r[31]; // 8034EF00
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034EF04
  c->r[3]=c->r[1]+0x00000008u; // 8034EF08
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034EF0C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034EF10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034EF14
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034EF18
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034EF1C
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034EF20
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034EF24
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034EF28
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034EF2C
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034EF30
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034EF34
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034EF38
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034EF3C
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034EF40
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034EF44
  c->lr=0x8034EF4Cu; f_80350E40(c); // 8034EF48
  c->r[3]=c->r[1]+0x00000008u; // 8034EF4C
  c->lr=0x8034EF54u; f_80350C3C(c); // 8034EF50
  cmps(c,0,(int32_t)c->r[3],0); // 8034EF54
  if (crb(c,2)) { goto L_8034EF64; } // 8034EF58
  c->r[3]=0u+0xFFFFFF9Au; // 8034EF5C
  goto L_8034EF6C; // 8034EF60
L_8034EF64:;
  c->r[3]=c->r[1]+0x00000008u; // 8034EF64
  c->lr=0x8034EF6Cu; f_8034C070(c); // 8034EF68
L_8034EF6C:;
  c->lr=0x8034EF70u; f_80350CE0(c); // 8034EF6C
L_8034EF70:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8034EF70
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8034EF74
  c->lr=c->r[0]; // 8034EF78
  c->r[1]=c->r[1]+0x00000050u; // 8034EF7C
  return; // 8034EF80
}

// NANDPrivateDelete
void f_8034EF84(Ctx* __restrict c) {
  trace_call(0x8034EF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034EF84
  c->r[0]=c->lr; // 8034EF88
  W32(c->r[1]+0x00000054u,c->r[0]); // 8034EF8C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8034EF90
  c->r[31]=c->r[3]|c->r[3]; // 8034EF94
  c->lr=0x8034EF9Cu; f_80350CC8(c); // 8034EF98
  cmps(c,0,(int32_t)c->r[3],0); // 8034EF9C
  if (!crb(c,2)) { goto L_8034EFAC; } // 8034EFA0
  c->r[3]=0u+0xFFFFFF80u; // 8034EFA4
  goto L_8034F008; // 8034EFA8
L_8034EFAC:;
  c->r[0]=0u+0x00000000u; // 8034EFAC
  c->r[4]=c->r[31]|c->r[31]; // 8034EFB0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034EFB4
  c->r[3]=c->r[1]+0x00000008u; // 8034EFB8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034EFBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034EFC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034EFC4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034EFC8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034EFCC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034EFD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034EFD4
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034EFD8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034EFDC
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034EFE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034EFE4
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034EFE8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034EFEC
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034EFF0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034EFF4
  c->lr=0x8034EFFCu; f_80350E40(c); // 8034EFF8
  c->r[3]=c->r[1]+0x00000008u; // 8034EFFC
  c->lr=0x8034F004u; f_8034C070(c); // 8034F000
  c->lr=0x8034F008u; f_80350CE0(c); // 8034F004
L_8034F008:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8034F008
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8034F00C
  c->lr=c->r[0]; // 8034F010
  c->r[1]=c->r[1]+0x00000050u; // 8034F014
  return; // 8034F018
}

// fn_8034F01C
void f_8034F01C(Ctx* __restrict c) {
  trace_call(0x8034F01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F01C
  c->r[0]=c->lr; // 8034F020
  W32(c->r[1]+0x00000064u,c->r[0]); // 8034F024
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8034F028
  c->r[31]=c->r[5]|c->r[5]; // 8034F02C
  W32(c->r[1]+0x00000058u,c->r[30]); // 8034F030
  c->r[30]=c->r[4]|c->r[4]; // 8034F034
  W32(c->r[1]+0x00000054u,c->r[29]); // 8034F038
  c->r[29]=c->r[3]|c->r[3]; // 8034F03C
  c->lr=0x8034F044u; f_80350CC8(c); // 8034F040
  cmps(c,0,(int32_t)c->r[3],0); // 8034F044
  if (!crb(c,2)) { goto L_8034F054; } // 8034F048
  c->r[3]=0u+0xFFFFFF80u; // 8034F04C
  goto L_8034F0D8; // 8034F050
L_8034F054:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034F054
  c->r[0]=0u+0x00000000u; // 8034F058
  c->r[4]=c->r[29]|c->r[29]; // 8034F05C
  c->r[3]=c->r[1]+0x00000008u; // 8034F060
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034F064
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034F068
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034F06C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034F070
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034F074
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034F078
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034F07C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F080
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034F084
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034F088
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034F08C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034F090
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034F094
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034F098
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034F09C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034F0A0
  c->lr=0x8034F0A8u; f_80350E40(c); // 8034F0A4
  c->r[3]=c->r[1]+0x00000008u; // 8034F0A8
  c->lr=0x8034F0B0u; f_80350C3C(c); // 8034F0AC
  cmps(c,0,(int32_t)c->r[3],0); // 8034F0B0
  if (crb(c,2)) { goto L_8034F0C0; } // 8034F0B4
  c->r[3]=0u+0xFFFFFF9Au; // 8034F0B8
  goto L_8034F0D4; // 8034F0BC
L_8034F0C0:;
  c->r[4]=0u+0x80350000u; // 8034F0C0
  c->r[5]=c->r[31]|c->r[31]; // 8034F0C4
  c->r[3]=c->r[1]+0x00000008u; // 8034F0C8
  c->r[4]=c->r[4]+0x00001280u; // 8034F0CC
  c->lr=0x8034F0D4u; f_8034C148(c); // 8034F0D0
L_8034F0D4:;
  c->lr=0x8034F0D8u; f_80350CE0(c); // 8034F0D4
L_8034F0D8:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8034F0D8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8034F0DC
  c->r[30]=R32(c->r[1]+0x00000058u); // 8034F0E0
  c->r[29]=R32(c->r[1]+0x00000054u); // 8034F0E4
  c->lr=c->r[0]; // 8034F0E8
  c->r[1]=c->r[1]+0x00000060u; // 8034F0EC
  return; // 8034F0F0
}

// NANDPrivateDeleteAsync
void f_8034F0F4(Ctx* __restrict c) {
  trace_call(0x8034F0F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F0F4
  c->r[0]=c->lr; // 8034F0F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 8034F0FC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8034F100
  c->r[31]=c->r[5]|c->r[5]; // 8034F104
  W32(c->r[1]+0x00000058u,c->r[30]); // 8034F108
  c->r[30]=c->r[4]|c->r[4]; // 8034F10C
  W32(c->r[1]+0x00000054u,c->r[29]); // 8034F110
  c->r[29]=c->r[3]|c->r[3]; // 8034F114
  c->lr=0x8034F11Cu; f_80350CC8(c); // 8034F118
  cmps(c,0,(int32_t)c->r[3],0); // 8034F11C
  if (!crb(c,2)) { goto L_8034F12C; } // 8034F120
  c->r[3]=0u+0xFFFFFF80u; // 8034F124
  goto L_8034F198; // 8034F128
L_8034F12C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034F12C
  c->r[0]=0u+0x00000000u; // 8034F130
  c->r[4]=c->r[29]|c->r[29]; // 8034F134
  c->r[3]=c->r[1]+0x00000008u; // 8034F138
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034F13C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034F140
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034F144
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034F148
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034F14C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034F150
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034F154
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F158
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034F15C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034F160
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034F164
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034F168
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034F16C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034F170
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034F174
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034F178
  c->lr=0x8034F180u; f_80350E40(c); // 8034F17C
  c->r[4]=0u+0x80350000u; // 8034F180
  c->r[5]=c->r[31]|c->r[31]; // 8034F184
  c->r[3]=c->r[1]+0x00000008u; // 8034F188
  c->r[4]=c->r[4]+0x00001280u; // 8034F18C
  c->lr=0x8034F194u; f_8034C148(c); // 8034F190
  c->lr=0x8034F198u; f_80350CE0(c); // 8034F194
L_8034F198:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8034F198
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8034F19C
  c->r[30]=R32(c->r[1]+0x00000058u); // 8034F1A0
  c->r[29]=R32(c->r[1]+0x00000054u); // 8034F1A4
  c->lr=c->r[0]; // 8034F1A8
  c->r[1]=c->r[1]+0x00000060u; // 8034F1AC
  return; // 8034F1B0
}

// NANDRead
void f_8034F1B4(Ctx* __restrict c) {
  trace_call(0x8034F1B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F1B4
  c->r[0]=c->lr; // 8034F1B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F1BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034F1C0
  c->r[31]=c->r[5]|c->r[5]; // 8034F1C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034F1C8
  c->r[30]=c->r[4]|c->r[4]; // 8034F1CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034F1D0
  c->r[29]=c->r[3]|c->r[3]; // 8034F1D4
  c->lr=0x8034F1DCu; f_80350CC8(c); // 8034F1D8
  cmps(c,0,(int32_t)c->r[3],0); // 8034F1DC
  if (crb(c,2)) { goto L_8034F1FC; } // 8034F1E0
  c->r[3]=R32(c->r[29]+0x00000000u); // 8034F1E4
  c->r[4]=c->r[30]|c->r[30]; // 8034F1E8
  c->r[5]=c->r[31]|c->r[31]; // 8034F1EC
  c->lr=0x8034F1F4u; f_8034C96C(c); // 8034F1F0
  c->lr=0x8034F1F8u; f_80350CE0(c); // 8034F1F4
  goto L_8034F200; // 8034F1F8
L_8034F1FC:;
  c->r[3]=0u+0xFFFFFF80u; // 8034F1FC
L_8034F200:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034F200
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034F204
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034F208
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034F20C
  c->lr=c->r[0]; // 8034F210
  c->r[1]=c->r[1]+0x00000020u; // 8034F214
  return; // 8034F218
}

// NANDReadAsync
void f_8034F21C(Ctx* __restrict c) {
  trace_call(0x8034F21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F21C
  c->r[0]=c->lr; // 8034F220
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F224
  c->r[11]=c->r[1]+0x00000020u; // 8034F228
  c->lr=0x8034F230u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034F22C
  c->r[27]=c->r[3]|c->r[3]; // 8034F230
  c->r[28]=c->r[4]|c->r[4]; // 8034F234
  c->r[29]=c->r[5]|c->r[5]; // 8034F238
  c->r[30]=c->r[6]|c->r[6]; // 8034F23C
  c->r[31]=c->r[7]|c->r[7]; // 8034F240
  c->lr=0x8034F248u; f_80350CC8(c); // 8034F244
  cmps(c,0,(int32_t)c->r[3],0); // 8034F248
  if (!crb(c,2)) { goto L_8034F258; } // 8034F24C
  c->r[3]=0u+0xFFFFFF80u; // 8034F250
  goto L_8034F27C; // 8034F254
L_8034F258:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034F258
  c->r[6]=0u+0x80350000u; // 8034F25C
  c->r[4]=c->r[28]|c->r[28]; // 8034F260
  c->r[5]=c->r[29]|c->r[29]; // 8034F264
  c->r[3]=R32(c->r[27]+0x00000000u); // 8034F268
  c->r[7]=c->r[31]|c->r[31]; // 8034F26C
  c->r[6]=c->r[6]+0x00001280u; // 8034F270
  c->lr=0x8034F278u; f_8034C98C(c); // 8034F274
  c->lr=0x8034F27Cu; f_80350CE0(c); // 8034F278
L_8034F27C:;
  c->r[11]=c->r[1]+0x00000020u; // 8034F27C
  c->lr=0x8034F284u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034F280
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034F284
  c->lr=c->r[0]; // 8034F288
  c->r[1]=c->r[1]+0x00000020u; // 8034F28C
  return; // 8034F290
}

// NANDWrite
void f_8034F294(Ctx* __restrict c) {
  trace_call(0x8034F294u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F294
  c->r[0]=c->lr; // 8034F298
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F29C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034F2A0
  c->r[31]=c->r[5]|c->r[5]; // 8034F2A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034F2A8
  c->r[30]=c->r[4]|c->r[4]; // 8034F2AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034F2B0
  c->r[29]=c->r[3]|c->r[3]; // 8034F2B4
  c->lr=0x8034F2BCu; f_80350CC8(c); // 8034F2B8
  cmps(c,0,(int32_t)c->r[3],0); // 8034F2BC
  if (crb(c,2)) { goto L_8034F2DC; } // 8034F2C0
  c->r[3]=R32(c->r[29]+0x00000000u); // 8034F2C4
  c->r[4]=c->r[30]|c->r[30]; // 8034F2C8
  c->r[5]=c->r[31]|c->r[31]; // 8034F2CC
  c->lr=0x8034F2D4u; f_8034CA30(c); // 8034F2D0
  c->lr=0x8034F2D8u; f_80350CE0(c); // 8034F2D4
  goto L_8034F2E0; // 8034F2D8
L_8034F2DC:;
  c->r[3]=0u+0xFFFFFF80u; // 8034F2DC
L_8034F2E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034F2E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034F2E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034F2E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034F2EC
  c->lr=c->r[0]; // 8034F2F0
  c->r[1]=c->r[1]+0x00000020u; // 8034F2F4
  return; // 8034F2F8
}

// NANDWriteAsync
void f_8034F2FC(Ctx* __restrict c) {
  trace_call(0x8034F2FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F2FC
  c->r[0]=c->lr; // 8034F300
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F304
  c->r[11]=c->r[1]+0x00000020u; // 8034F308
  c->lr=0x8034F310u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034F30C
  c->r[27]=c->r[3]|c->r[3]; // 8034F310
  c->r[28]=c->r[4]|c->r[4]; // 8034F314
  c->r[29]=c->r[5]|c->r[5]; // 8034F318
  c->r[30]=c->r[6]|c->r[6]; // 8034F31C
  c->r[31]=c->r[7]|c->r[7]; // 8034F320
  c->lr=0x8034F328u; f_80350CC8(c); // 8034F324
  cmps(c,0,(int32_t)c->r[3],0); // 8034F328
  if (!crb(c,2)) { goto L_8034F338; } // 8034F32C
  c->r[3]=0u+0xFFFFFF80u; // 8034F330
  goto L_8034F35C; // 8034F334
L_8034F338:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034F338
  c->r[6]=0u+0x80350000u; // 8034F33C
  c->r[4]=c->r[28]|c->r[28]; // 8034F340
  c->r[5]=c->r[29]|c->r[29]; // 8034F344
  c->r[3]=R32(c->r[27]+0x00000000u); // 8034F348
  c->r[7]=c->r[31]|c->r[31]; // 8034F34C
  c->r[6]=c->r[6]+0x00001280u; // 8034F350
  c->lr=0x8034F358u; f_8034CA50(c); // 8034F354
  c->lr=0x8034F35Cu; f_80350CE0(c); // 8034F358
L_8034F35C:;
  c->r[11]=c->r[1]+0x00000020u; // 8034F35C
  c->lr=0x8034F364u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034F360
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034F364
  c->lr=c->r[0]; // 8034F368
  c->r[1]=c->r[1]+0x00000020u; // 8034F36C
  return; // 8034F370
}

// NANDSeekAsync
void f_8034F374(Ctx* __restrict c) {
  trace_call(0x8034F374u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F374
  c->r[0]=c->lr; // 8034F378
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F37C
  c->r[11]=c->r[1]+0x00000020u; // 8034F380
  c->lr=0x8034F388u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034F384
  c->r[27]=c->r[3]|c->r[3]; // 8034F388
  c->r[28]=c->r[4]|c->r[4]; // 8034F38C
  c->r[29]=c->r[5]|c->r[5]; // 8034F390
  c->r[30]=c->r[6]|c->r[6]; // 8034F394
  c->r[31]=c->r[7]|c->r[7]; // 8034F398
  c->lr=0x8034F3A0u; f_80350CC8(c); // 8034F39C
  cmps(c,0,(int32_t)c->r[3],0); // 8034F3A0
  if (!crb(c,2)) { goto L_8034F3B0; } // 8034F3A4
  c->r[3]=0u+0xFFFFFF80u; // 8034F3A8
  goto L_8034F40C; // 8034F3AC
L_8034F3B0:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034F3B0
  cmps(c,0,(int32_t)c->r[29],1); // 8034F3B4
  c->r[5]=0u+0xFFFFFFFFu; // 8034F3B8
  c->r[3]=R32(c->r[27]+0x00000000u); // 8034F3BC
  if (crb(c,2)) { goto L_8034F3E8; } // 8034F3C0
  if (!crb(c,0)) { goto L_8034F3D4; } // 8034F3C4
  cmps(c,0,(int32_t)c->r[29],0); // 8034F3C8
  if (!crb(c,0)) { goto L_8034F3E0; } // 8034F3CC
  goto L_8034F3F4; // 8034F3D0
L_8034F3D4:;
  cmps(c,0,(int32_t)c->r[29],3); // 8034F3D4
  if (!crb(c,0)) { goto L_8034F3F4; } // 8034F3D8
  goto L_8034F3F0; // 8034F3DC
L_8034F3E0:;
  c->r[5]=0u+0x00000000u; // 8034F3E0
  goto L_8034F3F4; // 8034F3E4
L_8034F3E8:;
  c->r[5]=0u+0x00000001u; // 8034F3E8
  goto L_8034F3F4; // 8034F3EC
L_8034F3F0:;
  c->r[5]=0u+0x00000002u; // 8034F3F0
L_8034F3F4:;
  c->r[6]=0u+0x80350000u; // 8034F3F4
  c->r[4]=c->r[28]|c->r[28]; // 8034F3F8
  c->r[7]=c->r[31]|c->r[31]; // 8034F3FC
  c->r[6]=c->r[6]+0x00001280u; // 8034F400
  c->lr=0x8034F408u; f_8034C8E0(c); // 8034F404
  c->lr=0x8034F40Cu; f_80350CE0(c); // 8034F408
L_8034F40C:;
  c->r[11]=c->r[1]+0x00000020u; // 8034F40C
  c->lr=0x8034F414u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034F410
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034F414
  c->lr=c->r[0]; // 8034F418
  c->r[1]=c->r[1]+0x00000020u; // 8034F41C
  return; // 8034F420
}

// fn_8034F424
void f_8034F424(Ctx* __restrict c) {
  trace_call(0x8034F424u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F424
  c->r[0]=c->lr; // 8034F428
  W32(c->r[1]+0x00000064u,c->r[0]); // 8034F42C
  c->r[11]=c->r[1]+0x00000060u; // 8034F430
  c->lr=0x8034F438u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034F434
  c->r[27]=c->r[3]|c->r[3]; // 8034F438
  c->r[28]=c->r[4]|c->r[4]; // 8034F43C
  c->r[29]=c->r[5]|c->r[5]; // 8034F440
  c->r[30]=c->r[6]|c->r[6]; // 8034F444
  c->r[31]=c->r[7]|c->r[7]; // 8034F448
  c->lr=0x8034F450u; f_80350CC8(c); // 8034F44C
  cmps(c,0,(int32_t)c->r[3],0); // 8034F450
  if (!crb(c,2)) { goto L_8034F460; } // 8034F454
  c->r[3]=0u+0xFFFFFF80u; // 8034F458
  goto L_8034F4EC; // 8034F45C
L_8034F460:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034F460
  c->r[0]=0u+0x00000000u; // 8034F464
  c->r[4]=c->r[27]|c->r[27]; // 8034F468
  c->r[3]=c->r[1]+0x00000008u; // 8034F46C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034F470
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034F474
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034F478
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034F47C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034F480
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034F484
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034F488
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F48C
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034F490
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034F494
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034F498
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034F49C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034F4A0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034F4A4
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034F4A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034F4AC
  c->lr=0x8034F4B4u; f_80350E40(c); // 8034F4B0
  c->r[3]=c->r[1]+0x00000008u; // 8034F4B4
  c->lr=0x8034F4BCu; f_80350C3C(c); // 8034F4B8
  cmps(c,0,(int32_t)c->r[3],0); // 8034F4BC
  if (crb(c,2)) { goto L_8034F4CC; } // 8034F4C0
  c->r[3]=0u+0xFFFFFF9Au; // 8034F4C4
  goto L_8034F4E8; // 8034F4C8
L_8034F4CC:;
  c->r[6]=0u+0x80350000u; // 8034F4CC
  c->r[4]=c->r[28]|c->r[28]; // 8034F4D0
  c->r[5]=c->r[29]|c->r[29]; // 8034F4D4
  c->r[7]=c->r[31]|c->r[31]; // 8034F4D8
  c->r[3]=c->r[1]+0x00000008u; // 8034F4DC
  c->r[6]=c->r[6]+0x00001280u; // 8034F4E0
  c->lr=0x8034F4E8u; f_8034BC9C(c); // 8034F4E4
L_8034F4E8:;
  c->lr=0x8034F4ECu; f_80350CE0(c); // 8034F4E8
L_8034F4EC:;
  c->r[11]=c->r[1]+0x00000060u; // 8034F4EC
  c->lr=0x8034F4F4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034F4F0
  c->r[0]=R32(c->r[1]+0x00000064u); // 8034F4F4
  c->lr=c->r[0]; // 8034F4F8
  c->r[1]=c->r[1]+0x00000060u; // 8034F4FC
  return; // 8034F500
}

// nandCreateDir
void f_8034F504(Ctx* __restrict c) {
  trace_call(0x8034F504u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F504
  c->r[0]=c->lr; // 8034F508
  W32(c->r[1]+0x00000074u,c->r[0]); // 8034F50C
  c->r[11]=c->r[1]+0x00000070u; // 8034F510
  c->lr=0x8034F518u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034F514
  c->r[0]=0u+0x00000000u; // 8034F518
  c->r[27]=c->r[4]|c->r[4]; // 8034F51C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034F520
  c->r[4]=c->r[3]|c->r[3]; // 8034F524
  c->r[28]=c->r[5]|c->r[5]; // 8034F528
  c->r[29]=c->r[6]|c->r[6]; // 8034F52C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034F530
  c->r[30]=c->r[7]|c->r[7]; // 8034F534
  c->r[31]=c->r[8]|c->r[8]; // 8034F538
  c->r[3]=c->r[1]+0x00000018u; // 8034F53C
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034F540
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F544
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034F548
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034F54C
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034F550
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034F554
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034F558
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034F55C
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034F560
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034F564
  W32(c->r[1]+0x00000048u,c->r[0]); // 8034F568
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8034F56C
  W32(c->r[1]+0x00000050u,c->r[0]); // 8034F570
  W32(c->r[1]+0x00000054u,c->r[0]); // 8034F574
  c->lr=0x8034F57Cu; f_80350E40(c); // 8034F578
  cmps(c,0,(int32_t)c->r[31],0); // 8034F57C
  if (!crb(c,2)) { goto L_8034F59C; } // 8034F580
  c->r[3]=c->r[1]+0x00000018u; // 8034F584
  c->lr=0x8034F58Cu; f_80350C3C(c); // 8034F588
  cmps(c,0,(int32_t)c->r[3],0); // 8034F58C
  if (crb(c,2)) { goto L_8034F59C; } // 8034F590
  c->r[3]=0u+0xFFFFFF9Au; // 8034F594
  goto L_8034F618; // 8034F598
L_8034F59C:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 8034F59C
  if (!crb(c,2)) { goto L_8034F5AC; } // 8034F5A0
  c->r[3]=0u+0xFFFFFF9Bu; // 8034F5A4
  goto L_8034F618; // 8034F5A8
L_8034F5AC:;
  c->r[0]=0u+0x00000000u; // 8034F5AC
  c->r[3]=c->r[27]|c->r[27]; // 8034F5B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034F5B4
  c->r[4]=c->r[1]+0x00000010u; // 8034F5B8
  c->r[5]=c->r[1]+0x0000000Cu; // 8034F5BC
  c->r[6]=c->r[1]+0x00000008u; // 8034F5C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034F5C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034F5C8
  c->lr=0x8034F5D0u; f_8034F6FC(c); // 8034F5CC
  cmps(c,0,(int32_t)c->r[30],0); // 8034F5D0
  if (crb(c,2)) { goto L_8034F600; } // 8034F5D4
  c->r[8]=0u+0x80350000u; // 8034F5D8
  c->r[5]=R32(c->r[1]+0x00000010u); // 8034F5DC
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8034F5E0
  c->r[4]=c->r[28]|c->r[28]; // 8034F5E4
  c->r[7]=R32(c->r[1]+0x00000008u); // 8034F5E8
  c->r[9]=c->r[29]|c->r[29]; // 8034F5EC
  c->r[3]=c->r[1]+0x00000018u; // 8034F5F0
  c->r[8]=c->r[8]+0x00001280u; // 8034F5F4
  c->lr=0x8034F5FCu; f_8034BA54(c); // 8034F5F8
  goto L_8034F618; // 8034F5FC
L_8034F600:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 8034F600
  c->r[4]=c->r[28]|c->r[28]; // 8034F604
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8034F608
  c->r[3]=c->r[1]+0x00000018u; // 8034F60C
  c->r[7]=R32(c->r[1]+0x00000008u); // 8034F610
  c->lr=0x8034F618u; f_8034B960(c); // 8034F614
L_8034F618:;
  c->r[11]=c->r[1]+0x00000070u; // 8034F618
  c->lr=0x8034F620u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034F61C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8034F620
  c->lr=c->r[0]; // 8034F624
  c->r[1]=c->r[1]+0x00000070u; // 8034F628
  return; // 8034F62C
}

// NANDPrivateCreateDirAsync
void f_8034F630(Ctx* __restrict c) {
  trace_call(0x8034F630u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F630
  c->r[0]=c->lr; // 8034F634
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F638
  c->r[11]=c->r[1]+0x00000020u; // 8034F63C
  c->lr=0x8034F644u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034F640
  c->r[27]=c->r[3]|c->r[3]; // 8034F644
  c->r[28]=c->r[4]|c->r[4]; // 8034F648
  c->r[29]=c->r[5]|c->r[5]; // 8034F64C
  c->r[30]=c->r[6]|c->r[6]; // 8034F650
  c->r[31]=c->r[7]|c->r[7]; // 8034F654
  c->lr=0x8034F65Cu; f_80350CC8(c); // 8034F658
  cmps(c,0,(int32_t)c->r[3],0); // 8034F65C
  if (!crb(c,2)) { goto L_8034F66C; } // 8034F660
  c->r[3]=0u+0xFFFFFF80u; // 8034F664
  goto L_8034F690; // 8034F668
L_8034F66C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034F66C
  c->r[3]=c->r[27]|c->r[27]; // 8034F670
  c->r[4]=c->r[28]|c->r[28]; // 8034F674
  c->r[5]=c->r[29]|c->r[29]; // 8034F678
  c->r[6]=c->r[31]|c->r[31]; // 8034F67C
  c->r[7]=0u+0x00000001u; // 8034F680
  c->r[8]=0u+0x00000001u; // 8034F684
  c->lr=0x8034F68Cu; f_8034F504(c); // 8034F688
  c->lr=0x8034F690u; f_80350CE0(c); // 8034F68C
L_8034F690:;
  c->r[11]=c->r[1]+0x00000020u; // 8034F690
  c->lr=0x8034F698u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034F694
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034F698
  c->lr=c->r[0]; // 8034F69C
  c->r[1]=c->r[1]+0x00000020u; // 8034F6A0
  return; // 8034F6A4
}

// nandComposePerm
void f_8034F6A8(Ctx* __restrict c) {
  trace_call(0x8034F6A8u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 8034F6A8
  c->r[7]=0u+0x00000000u; // 8034F6AC
  if (crb(c,2)) { goto L_8034F6B8; } // 8034F6B0
  c->r[7]=c->r[7]|0x00000010u; // 8034F6B4
L_8034F6B8:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 8034F6B8
  if (crb(c,2)) { goto L_8034F6C4; } // 8034F6BC
  c->r[7]=c->r[7]|0x00000020u; // 8034F6C0
L_8034F6C4:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 8034F6C4
  if (crb(c,2)) { goto L_8034F6D0; } // 8034F6C8
  c->r[7]=c->r[7]|0x00000004u; // 8034F6CC
L_8034F6D0:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 8034F6D0
  if (crb(c,2)) { goto L_8034F6DC; } // 8034F6D4
  c->r[7]=c->r[7]|0x00000008u; // 8034F6D8
L_8034F6DC:;
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 8034F6DC
  if (crb(c,2)) { goto L_8034F6E8; } // 8034F6E0
  c->r[7]=c->r[7]|0x00000001u; // 8034F6E4
L_8034F6E8:;
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 8034F6E8
  if (crb(c,2)) { goto L_8034F6F4; } // 8034F6EC
  c->r[7]=c->r[7]|0x00000002u; // 8034F6F0
L_8034F6F4:;
  W8(c->r[3]+0x00000000u,c->r[7]); // 8034F6F4
  return; // 8034F6F8
}

// nandSplitPerm
void f_8034F6FC(Ctx* __restrict c) {
  trace_call(0x8034F6FCu);
  c->r[7]=0u+0x00000000u; // 8034F6FC
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8034F700
  W32(c->r[4]+0x00000000u,c->r[7]); // 8034F704
  W32(c->r[5]+0x00000000u,c->r[7]); // 8034F708
  W32(c->r[6]+0x00000000u,c->r[7]); // 8034F70C
  if (crb(c,2)) { goto L_8034F720; } // 8034F710
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034F714
  c->r[0]=c->r[0]|0x00000001u; // 8034F718
  W32(c->r[4]+0x00000000u,c->r[0]); // 8034F71C
L_8034F720:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 8034F720
  if (crb(c,2)) { goto L_8034F734; } // 8034F724
  c->r[0]=R32(c->r[4]+0x00000000u); // 8034F728
  c->r[0]=c->r[0]|0x00000002u; // 8034F72C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8034F730
L_8034F734:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8034F734
  if (crb(c,2)) { goto L_8034F748; } // 8034F738
  c->r[0]=R32(c->r[5]+0x00000000u); // 8034F73C
  c->r[0]=c->r[0]|0x00000001u; // 8034F740
  W32(c->r[5]+0x00000000u,c->r[0]); // 8034F744
L_8034F748:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 8034F748
  if (crb(c,2)) { goto L_8034F75C; } // 8034F74C
  c->r[0]=R32(c->r[5]+0x00000000u); // 8034F750
  c->r[0]=c->r[0]|0x00000002u; // 8034F754
  W32(c->r[5]+0x00000000u,c->r[0]); // 8034F758
L_8034F75C:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8034F75C
  if (crb(c,2)) { goto L_8034F770; } // 8034F760
  c->r[0]=R32(c->r[6]+0x00000000u); // 8034F764
  c->r[0]=c->r[0]|0x00000001u; // 8034F768
  W32(c->r[6]+0x00000000u,c->r[0]); // 8034F76C
L_8034F770:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8034F770
  if (crb(c,2)) return; // 8034F774
  c->r[0]=R32(c->r[6]+0x00000000u); // 8034F778
  c->r[0]=c->r[0]|0x00000002u; // 8034F77C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8034F780
  return; // 8034F784
}

// nandGetStatus
void f_8034F788(Ctx* __restrict c) {
  trace_call(0x8034F788u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F788
  c->r[0]=c->lr; // 8034F78C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8034F790
  c->r[0]=0u+0x00000000u; // 8034F794
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8034F798
  c->r[31]=c->r[7]|c->r[7]; // 8034F79C
  W32(c->r[1]+0x00000068u,c->r[30]); // 8034F7A0
  c->r[30]=c->r[6]|c->r[6]; // 8034F7A4
  W32(c->r[1]+0x00000064u,c->r[29]); // 8034F7A8
  c->r[29]=c->r[5]|c->r[5]; // 8034F7AC
  W32(c->r[1]+0x00000060u,c->r[28]); // 8034F7B0
  c->r[28]=c->r[4]|c->r[4]; // 8034F7B4
  c->r[4]=c->r[3]|c->r[3]; // 8034F7B8
  c->r[3]=c->r[1]+0x00000020u; // 8034F7BC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034F7C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034F7C4
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034F7C8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034F7CC
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034F7D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034F7D4
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034F7D8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034F7DC
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034F7E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034F7E4
  W32(c->r[1]+0x00000048u,c->r[0]); // 8034F7E8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8034F7EC
  W32(c->r[1]+0x00000050u,c->r[0]); // 8034F7F0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8034F7F4
  W32(c->r[1]+0x00000058u,c->r[0]); // 8034F7F8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8034F7FC
  c->lr=0x8034F804u; f_80350E40(c); // 8034F800
  cmps(c,0,(int32_t)c->r[31],0); // 8034F804
  if (!crb(c,2)) { goto L_8034F824; } // 8034F808
  c->r[3]=c->r[1]+0x00000020u; // 8034F80C
  c->lr=0x8034F814u; f_80350C70(c); // 8034F810
  cmps(c,0,(int32_t)c->r[3],0); // 8034F814
  if (crb(c,2)) { goto L_8034F824; } // 8034F818
  c->r[3]=0u+0xFFFFFF9Au; // 8034F81C
  goto L_8034F8BC; // 8034F820
L_8034F824:;
  cmps(c,0,(int32_t)c->r[30],0); // 8034F824
  if (crb(c,2)) { goto L_8034F85C; } // 8034F828
  c->r[10]=0u+0x80350000u; // 8034F82C
  W32(c->r[1]+0x00000008u,c->r[29]); // 8034F830
  c->r[4]=c->r[28]|c->r[28]; // 8034F834
  c->r[3]=c->r[1]+0x00000020u; // 8034F838
  c->r[5]=c->r[28]+0x00000004u; // 8034F83C
  c->r[6]=c->r[29]+0x00000020u; // 8034F840
  c->r[7]=c->r[29]+0x00000024u; // 8034F844
  c->r[8]=c->r[29]+0x00000028u; // 8034F848
  c->r[9]=c->r[29]+0x0000002Cu; // 8034F84C
  c->r[10]=c->r[10]+0xFFFFF8DCu; // 8034F850
  c->lr=0x8034F858u; f_8034BF3C(c); // 8034F854
  goto L_8034F8BC; // 8034F858
L_8034F85C:;
  c->r[0]=0u+0x00000000u; // 8034F85C
  c->r[4]=c->r[28]|c->r[28]; // 8034F860
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034F864
  c->r[3]=c->r[1]+0x00000020u; // 8034F868
  c->r[5]=c->r[28]+0x00000004u; // 8034F86C
  c->r[6]=c->r[1]+0x0000001Cu; // 8034F870
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034F874
  c->r[7]=c->r[1]+0x00000018u; // 8034F878
  c->r[8]=c->r[1]+0x00000014u; // 8034F87C
  c->r[9]=c->r[1]+0x00000010u; // 8034F880
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034F884
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034F888
  c->lr=0x8034F890u; f_8034BDE4(c); // 8034F88C
  cmps(c,0,(int32_t)c->r[3],0); // 8034F890
  c->r[31]=c->r[3]|c->r[3]; // 8034F894
  if (!crb(c,2)) { goto L_8034F8B8; } // 8034F898
  c->r[4]=R32(c->r[1]+0x00000018u); // 8034F89C
  c->r[3]=c->r[28]+0x00000007u; // 8034F8A0
  c->r[5]=R32(c->r[1]+0x00000014u); // 8034F8A4
  c->r[6]=R32(c->r[1]+0x00000010u); // 8034F8A8
  c->lr=0x8034F8B0u; f_8034F6A8(c); // 8034F8AC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8034F8B0
  W8(c->r[28]+0x00000006u,c->r[0]); // 8034F8B4
L_8034F8B8:;
  c->r[3]=c->r[31]|c->r[31]; // 8034F8B8
L_8034F8BC:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 8034F8BC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8034F8C0
  c->r[30]=R32(c->r[1]+0x00000068u); // 8034F8C4
  c->r[29]=R32(c->r[1]+0x00000064u); // 8034F8C8
  c->r[28]=R32(c->r[1]+0x00000060u); // 8034F8CC
  c->lr=c->r[0]; // 8034F8D0
  c->r[1]=c->r[1]+0x00000070u; // 8034F8D4
  return; // 8034F8D8
}

// nandGetStatusCallback
void f_8034F8DC(Ctx* __restrict c) {
  trace_call(0x8034F8DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F8DC
  c->r[0]=c->lr; // 8034F8E0
  cmps(c,0,(int32_t)c->r[3],0); // 8034F8E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034F8E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034F8EC
  c->r[31]=c->r[4]|c->r[4]; // 8034F8F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034F8F4
  c->r[30]=c->r[3]|c->r[3]; // 8034F8F8
  if (!crb(c,2)) { goto L_8034F920; } // 8034F8FC
  c->r[5]=R32(c->r[4]+0x00000014u); // 8034F900
  c->r[0]=R32(c->r[4]+0x00000020u); // 8034F904
  c->r[3]=c->r[5]+0x00000007u; // 8034F908
  W8(c->r[5]+0x00000006u,c->r[0]); // 8034F90C
  c->r[4]=R32(c->r[4]+0x00000024u); // 8034F910
  c->r[5]=R32(c->r[31]+0x00000028u); // 8034F914
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 8034F918
  c->lr=0x8034F920u; f_8034F6A8(c); // 8034F91C
L_8034F920:;
  c->r[3]=c->r[30]|c->r[30]; // 8034F920
  c->lr=0x8034F928u; f_80350CE0(c); // 8034F924
  c->r[12]=R32(c->r[31]+0x00000004u); // 8034F928
  c->r[4]=c->r[31]|c->r[31]; // 8034F92C
  c->ctr=c->r[12]; // 8034F930
  if (true) { c->lr=0x8034F938u; dispatch(c,c->ctr); } // 8034F934
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034F938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034F93C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034F940
  c->lr=c->r[0]; // 8034F944
  c->r[1]=c->r[1]+0x00000010u; // 8034F948
  return; // 8034F94C
}

// NANDGetStatus
void f_8034F950(Ctx* __restrict c) {
  trace_call(0x8034F950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F950
  c->r[0]=c->lr; // 8034F954
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034F958
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034F95C
  c->r[31]=c->r[4]|c->r[4]; // 8034F960
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034F964
  c->r[30]=c->r[3]|c->r[3]; // 8034F968
  c->lr=0x8034F970u; f_80350CC8(c); // 8034F96C
  cmps(c,0,(int32_t)c->r[3],0); // 8034F970
  if (crb(c,2)) { goto L_8034F998; } // 8034F974
  c->r[3]=c->r[30]|c->r[30]; // 8034F978
  c->r[4]=c->r[31]|c->r[31]; // 8034F97C
  c->r[5]=0u+0x00000000u; // 8034F980
  c->r[6]=0u+0x00000000u; // 8034F984
  c->r[7]=0u+0x00000000u; // 8034F988
  c->lr=0x8034F990u; f_8034F788(c); // 8034F98C
  c->lr=0x8034F994u; f_80350CE0(c); // 8034F990
  goto L_8034F99C; // 8034F994
L_8034F998:;
  c->r[3]=0u+0xFFFFFF80u; // 8034F998
L_8034F99C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034F99C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034F9A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034F9A4
  c->lr=c->r[0]; // 8034F9A8
  c->r[1]=c->r[1]+0x00000010u; // 8034F9AC
  return; // 8034F9B0
}

// NANDPrivateGetStatus
void f_8034F9B4(Ctx* __restrict c) {
  trace_call(0x8034F9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034F9B4
  c->r[0]=c->lr; // 8034F9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034F9BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034F9C0
  c->r[31]=c->r[4]|c->r[4]; // 8034F9C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8034F9C8
  c->r[30]=c->r[3]|c->r[3]; // 8034F9CC
  c->lr=0x8034F9D4u; f_80350CC8(c); // 8034F9D0
  cmps(c,0,(int32_t)c->r[3],0); // 8034F9D4
  if (crb(c,2)) { goto L_8034F9FC; } // 8034F9D8
  c->r[3]=c->r[30]|c->r[30]; // 8034F9DC
  c->r[4]=c->r[31]|c->r[31]; // 8034F9E0
  c->r[5]=0u+0x00000000u; // 8034F9E4
  c->r[6]=0u+0x00000000u; // 8034F9E8
  c->r[7]=0u+0x00000001u; // 8034F9EC
  c->lr=0x8034F9F4u; f_8034F788(c); // 8034F9F0
  c->lr=0x8034F9F8u; f_80350CE0(c); // 8034F9F4
  goto L_8034FA00; // 8034F9F8
L_8034F9FC:;
  c->r[3]=0u+0xFFFFFF80u; // 8034F9FC
L_8034FA00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034FA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034FA04
  c->r[30]=R32(c->r[1]+0x00000008u); // 8034FA08
  c->lr=c->r[0]; // 8034FA0C
  c->r[1]=c->r[1]+0x00000010u; // 8034FA10
  return; // 8034FA14
}

// NANDPrivateGetStatusAsync
void f_8034FA18(Ctx* __restrict c) {
  trace_call(0x8034FA18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FA18
  c->r[0]=c->lr; // 8034FA1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034FA20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034FA24
  c->r[31]=c->r[6]|c->r[6]; // 8034FA28
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034FA2C
  c->r[30]=c->r[5]|c->r[5]; // 8034FA30
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034FA34
  c->r[29]=c->r[4]|c->r[4]; // 8034FA38
  W32(c->r[1]+0x00000010u,c->r[28]); // 8034FA3C
  c->r[28]=c->r[3]|c->r[3]; // 8034FA40
  c->lr=0x8034FA48u; f_80350CC8(c); // 8034FA44
  cmps(c,0,(int32_t)c->r[3],0); // 8034FA48
  if (!crb(c,2)) { goto L_8034FA58; } // 8034FA4C
  c->r[3]=0u+0xFFFFFF80u; // 8034FA50
  goto L_8034FA7C; // 8034FA54
L_8034FA58:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034FA58
  c->r[3]=c->r[28]|c->r[28]; // 8034FA5C
  c->r[4]=c->r[29]|c->r[29]; // 8034FA60
  c->r[5]=c->r[31]|c->r[31]; // 8034FA64
  W32(c->r[31]+0x00000014u,c->r[29]); // 8034FA68
  c->r[6]=0u+0x00000001u; // 8034FA6C
  c->r[7]=0u+0x00000001u; // 8034FA70
  c->lr=0x8034FA78u; f_8034F788(c); // 8034FA74
  c->lr=0x8034FA7Cu; f_80350CE0(c); // 8034FA78
L_8034FA7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034FA7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034FA80
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034FA84
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034FA88
  c->r[28]=R32(c->r[1]+0x00000010u); // 8034FA8C
  c->lr=c->r[0]; // 8034FA90
  c->r[1]=c->r[1]+0x00000020u; // 8034FA94
  return; // 8034FA98
}

// nandOpen
void f_8034FA9C(Ctx* __restrict c) {
  trace_call(0x8034FA9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FA9C
  c->r[0]=c->lr; // 8034FAA0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8034FAA4
  c->r[11]=c->r[1]+0x00000060u; // 8034FAA8
  c->lr=0x8034FAB0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034FAAC
  c->r[0]=0u+0x00000000u; // 8034FAB0
  c->r[27]=c->r[4]|c->r[4]; // 8034FAB4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034FAB8
  c->r[4]=c->r[3]|c->r[3]; // 8034FABC
  c->r[28]=c->r[5]|c->r[5]; // 8034FAC0
  c->r[29]=c->r[6]|c->r[6]; // 8034FAC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8034FAC8
  c->r[30]=c->r[7]|c->r[7]; // 8034FACC
  c->r[3]=c->r[1]+0x00000008u; // 8034FAD0
  c->r[31]=0u+0x00000000u; // 8034FAD4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8034FAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034FADC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8034FAE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8034FAE4
  W32(c->r[1]+0x00000020u,c->r[0]); // 8034FAE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034FAEC
  W32(c->r[1]+0x00000028u,c->r[0]); // 8034FAF0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8034FAF4
  W32(c->r[1]+0x00000030u,c->r[0]); // 8034FAF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034FAFC
  W32(c->r[1]+0x00000038u,c->r[0]); // 8034FB00
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8034FB04
  W32(c->r[1]+0x00000040u,c->r[0]); // 8034FB08
  W32(c->r[1]+0x00000044u,c->r[0]); // 8034FB0C
  c->lr=0x8034FB14u; f_80350E40(c); // 8034FB10
  cmps(c,0,(int32_t)c->r[30],0); // 8034FB14
  if (!crb(c,2)) { goto L_8034FB34; } // 8034FB18
  c->r[3]=c->r[1]+0x00000008u; // 8034FB1C
  c->lr=0x8034FB24u; f_80350C3C(c); // 8034FB20
  cmps(c,0,(int32_t)c->r[3],0); // 8034FB24
  if (crb(c,2)) { goto L_8034FB34; } // 8034FB28
  c->r[3]=0u+0xFFFFFF9Au; // 8034FB2C
  goto L_8034FB98; // 8034FB30
L_8034FB34:;
  cmps(c,0,(int32_t)c->r[27],2); // 8034FB34
  if (crb(c,2)) { goto L_8034FB64; } // 8034FB38
  if (!crb(c,0)) { goto L_8034FB4C; } // 8034FB3C
  cmps(c,0,(int32_t)c->r[27],1); // 8034FB40
  if (!crb(c,0)) { goto L_8034FB5C; } // 8034FB44
  goto L_8034FB68; // 8034FB48
L_8034FB4C:;
  cmps(c,0,(int32_t)c->r[27],4); // 8034FB4C
  if (!crb(c,0)) { goto L_8034FB68; } // 8034FB50
  c->r[31]=0u+0x00000003u; // 8034FB54
  goto L_8034FB68; // 8034FB58
L_8034FB5C:;
  c->r[31]=0u+0x00000001u; // 8034FB5C
  goto L_8034FB68; // 8034FB60
L_8034FB64:;
  c->r[31]=0u+0x00000002u; // 8034FB64
L_8034FB68:;
  cmps(c,0,(int32_t)c->r[29],0); // 8034FB68
  if (crb(c,2)) { goto L_8034FB8C; } // 8034FB6C
  c->r[5]=0u+0x80350000u; // 8034FB70
  c->r[4]=c->r[31]|c->r[31]; // 8034FB74
  c->r[6]=c->r[28]|c->r[28]; // 8034FB78
  c->r[3]=c->r[1]+0x00000008u; // 8034FB7C
  c->r[5]=c->r[5]+0xFFFFFDB8u; // 8034FB80
  c->lr=0x8034FB88u; f_8034C828(c); // 8034FB84
  goto L_8034FB98; // 8034FB88
L_8034FB8C:;
  c->r[4]=c->r[31]|c->r[31]; // 8034FB8C
  c->r[3]=c->r[1]+0x00000008u; // 8034FB90
  c->lr=0x8034FB98u; f_8034C760(c); // 8034FB94
L_8034FB98:;
  c->r[11]=c->r[1]+0x00000060u; // 8034FB98
  c->lr=0x8034FBA0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034FB9C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8034FBA0
  c->lr=c->r[0]; // 8034FBA4
  c->r[1]=c->r[1]+0x00000060u; // 8034FBA8
  return; // 8034FBAC
}

// NANDOpen
void f_8034FBB0(Ctx* __restrict c) {
  trace_call(0x8034FBB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FBB0
  c->r[0]=c->lr; // 8034FBB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034FBB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034FBBC
  c->r[31]=c->r[5]|c->r[5]; // 8034FBC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034FBC4
  c->r[30]=c->r[4]|c->r[4]; // 8034FBC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034FBCC
  c->r[29]=c->r[3]|c->r[3]; // 8034FBD0
  c->lr=0x8034FBD8u; f_80350CC8(c); // 8034FBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8034FBD8
  if (!crb(c,2)) { goto L_8034FBE8; } // 8034FBDC
  c->r[3]=0u+0xFFFFFF80u; // 8034FBE0
  goto L_8034FC20; // 8034FBE4
L_8034FBE8:;
  c->r[3]=c->r[29]|c->r[29]; // 8034FBE8
  c->r[4]=c->r[31]|c->r[31]; // 8034FBEC
  c->r[5]=0u+0x00000000u; // 8034FBF0
  c->r[6]=0u+0x00000000u; // 8034FBF4
  c->r[7]=0u+0x00000000u; // 8034FBF8
  c->lr=0x8034FC00u; f_8034FA9C(c); // 8034FBFC
  cmps(c,0,(int32_t)c->r[3],0); // 8034FC00
  if (crb(c,0)) { goto L_8034FC1C; } // 8034FC04
  c->r[0]=0u+0x00000001u; // 8034FC08
  W32(c->r[30]+0x00000000u,c->r[3]); // 8034FC0C
  c->r[3]=0u+0x00000000u; // 8034FC10
  W8(c->r[30]+0x0000008Au,c->r[0]); // 8034FC14
  goto L_8034FC20; // 8034FC18
L_8034FC1C:;
  c->lr=0x8034FC20u; f_80350CE0(c); // 8034FC1C
L_8034FC20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034FC20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034FC24
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034FC28
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034FC2C
  c->lr=c->r[0]; // 8034FC30
  c->r[1]=c->r[1]+0x00000020u; // 8034FC34
  return; // 8034FC38
}

// NANDPrivateOpen
void f_8034FC3C(Ctx* __restrict c) {
  trace_call(0x8034FC3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FC3C
  c->r[0]=c->lr; // 8034FC40
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034FC44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034FC48
  c->r[31]=c->r[5]|c->r[5]; // 8034FC4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034FC50
  c->r[30]=c->r[4]|c->r[4]; // 8034FC54
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034FC58
  c->r[29]=c->r[3]|c->r[3]; // 8034FC5C
  c->lr=0x8034FC64u; f_80350CC8(c); // 8034FC60
  cmps(c,0,(int32_t)c->r[3],0); // 8034FC64
  if (!crb(c,2)) { goto L_8034FC74; } // 8034FC68
  c->r[3]=0u+0xFFFFFF80u; // 8034FC6C
  goto L_8034FCAC; // 8034FC70
L_8034FC74:;
  c->r[3]=c->r[29]|c->r[29]; // 8034FC74
  c->r[4]=c->r[31]|c->r[31]; // 8034FC78
  c->r[5]=0u+0x00000000u; // 8034FC7C
  c->r[6]=0u+0x00000000u; // 8034FC80
  c->r[7]=0u+0x00000001u; // 8034FC84
  c->lr=0x8034FC8Cu; f_8034FA9C(c); // 8034FC88
  cmps(c,0,(int32_t)c->r[3],0); // 8034FC8C
  if (crb(c,0)) { goto L_8034FCA8; } // 8034FC90
  c->r[0]=0u+0x00000001u; // 8034FC94
  W32(c->r[30]+0x00000000u,c->r[3]); // 8034FC98
  c->r[3]=0u+0x00000000u; // 8034FC9C
  W8(c->r[30]+0x0000008Au,c->r[0]); // 8034FCA0
  goto L_8034FCAC; // 8034FCA4
L_8034FCA8:;
  c->lr=0x8034FCACu; f_80350CE0(c); // 8034FCA8
L_8034FCAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034FCAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034FCB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034FCB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034FCB8
  c->lr=c->r[0]; // 8034FCBC
  c->r[1]=c->r[1]+0x00000020u; // 8034FCC0
  return; // 8034FCC4
}

// NANDOpenAsync
void f_8034FCC8(Ctx* __restrict c) {
  trace_call(0x8034FCC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FCC8
  c->r[0]=c->lr; // 8034FCCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034FCD0
  c->r[11]=c->r[1]+0x00000020u; // 8034FCD4
  c->lr=0x8034FCDCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034FCD8
  c->r[27]=c->r[3]|c->r[3]; // 8034FCDC
  c->r[28]=c->r[4]|c->r[4]; // 8034FCE0
  c->r[29]=c->r[5]|c->r[5]; // 8034FCE4
  c->r[30]=c->r[6]|c->r[6]; // 8034FCE8
  c->r[31]=c->r[7]|c->r[7]; // 8034FCEC
  c->lr=0x8034FCF4u; f_80350CC8(c); // 8034FCF0
  cmps(c,0,(int32_t)c->r[3],0); // 8034FCF4
  if (!crb(c,2)) { goto L_8034FD04; } // 8034FCF8
  c->r[3]=0u+0xFFFFFF80u; // 8034FCFC
  goto L_8034FD28; // 8034FD00
L_8034FD04:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034FD04
  c->r[3]=c->r[27]|c->r[27]; // 8034FD08
  c->r[4]=c->r[29]|c->r[29]; // 8034FD0C
  c->r[5]=c->r[31]|c->r[31]; // 8034FD10
  W32(c->r[31]+0x00000008u,c->r[28]); // 8034FD14
  c->r[6]=0u+0x00000001u; // 8034FD18
  c->r[7]=0u+0x00000000u; // 8034FD1C
  c->lr=0x8034FD24u; f_8034FA9C(c); // 8034FD20
  c->lr=0x8034FD28u; f_80350CE0(c); // 8034FD24
L_8034FD28:;
  c->r[11]=c->r[1]+0x00000020u; // 8034FD28
  c->lr=0x8034FD30u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034FD2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034FD30
  c->lr=c->r[0]; // 8034FD34
  c->r[1]=c->r[1]+0x00000020u; // 8034FD38
  return; // 8034FD3C
}

// NANDPrivateOpenAsync
void f_8034FD40(Ctx* __restrict c) {
  trace_call(0x8034FD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FD40
  c->r[0]=c->lr; // 8034FD44
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034FD48
  c->r[11]=c->r[1]+0x00000020u; // 8034FD4C
  c->lr=0x8034FD54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034FD50
  c->r[27]=c->r[3]|c->r[3]; // 8034FD54
  c->r[28]=c->r[4]|c->r[4]; // 8034FD58
  c->r[29]=c->r[5]|c->r[5]; // 8034FD5C
  c->r[30]=c->r[6]|c->r[6]; // 8034FD60
  c->r[31]=c->r[7]|c->r[7]; // 8034FD64
  c->lr=0x8034FD6Cu; f_80350CC8(c); // 8034FD68
  cmps(c,0,(int32_t)c->r[3],0); // 8034FD6C
  if (!crb(c,2)) { goto L_8034FD7C; } // 8034FD70
  c->r[3]=0u+0xFFFFFF80u; // 8034FD74
  goto L_8034FDA0; // 8034FD78
L_8034FD7C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034FD7C
  c->r[3]=c->r[27]|c->r[27]; // 8034FD80
  c->r[4]=c->r[29]|c->r[29]; // 8034FD84
  c->r[5]=c->r[31]|c->r[31]; // 8034FD88
  W32(c->r[31]+0x00000008u,c->r[28]); // 8034FD8C
  c->r[6]=0u+0x00000001u; // 8034FD90
  c->r[7]=0u+0x00000001u; // 8034FD94
  c->lr=0x8034FD9Cu; f_8034FA9C(c); // 8034FD98
  c->lr=0x8034FDA0u; f_80350CE0(c); // 8034FD9C
L_8034FDA0:;
  c->r[11]=c->r[1]+0x00000020u; // 8034FDA0
  c->lr=0x8034FDA8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8034FDA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034FDA8
  c->lr=c->r[0]; // 8034FDAC
  c->r[1]=c->r[1]+0x00000020u; // 8034FDB0
  return; // 8034FDB4
}

// nandOpenCallback
void f_8034FDB8(Ctx* __restrict c) {
  trace_call(0x8034FDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FDB8
  c->r[0]=c->lr; // 8034FDBC
  cmps(c,0,(int32_t)c->r[3],0); // 8034FDC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034FDC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034FDC8
  c->r[31]=c->r[4]|c->r[4]; // 8034FDCC
  if (crb(c,0)) { goto L_8034FE08; } // 8034FDD0
  c->r[5]=R32(c->r[4]+0x00000008u); // 8034FDD4
  c->r[6]=0u+0x00000002u; // 8034FDD8
  c->r[0]=0u+0x00000001u; // 8034FDDC
  W32(c->r[5]+0x00000000u,c->r[3]); // 8034FDE0
  c->r[3]=0u+0x00000000u; // 8034FDE4
  c->r[5]=R32(c->r[4]+0x00000008u); // 8034FDE8
  W8(c->r[5]+0x00000089u,c->r[6]); // 8034FDEC
  c->r[5]=R32(c->r[4]+0x00000008u); // 8034FDF0
  W8(c->r[5]+0x0000008Au,c->r[0]); // 8034FDF4
  c->r[12]=R32(c->r[4]+0x00000004u); // 8034FDF8
  c->ctr=c->r[12]; // 8034FDFC
  if (true) { c->lr=0x8034FE04u; dispatch(c,c->ctr); } // 8034FE00
  goto L_8034FE1C; // 8034FE04
L_8034FE08:;
  c->lr=0x8034FE0Cu; f_80350CE0(c); // 8034FE08
  c->r[12]=R32(c->r[31]+0x00000004u); // 8034FE0C
  c->r[4]=c->r[31]|c->r[31]; // 8034FE10
  c->ctr=c->r[12]; // 8034FE14
  if (true) { c->lr=0x8034FE1Cu; dispatch(c,c->ctr); } // 8034FE18
L_8034FE1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034FE1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034FE20
  c->lr=c->r[0]; // 8034FE24
  c->r[1]=c->r[1]+0x00000010u; // 8034FE28
  return; // 8034FE2C
}

// NANDClose
void f_8034FE30(Ctx* __restrict c) {
  trace_call(0x8034FE30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FE30
  c->r[0]=c->lr; // 8034FE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034FE38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8034FE3C
  c->r[31]=c->r[3]|c->r[3]; // 8034FE40
  c->lr=0x8034FE48u; f_80350CC8(c); // 8034FE44
  cmps(c,0,(int32_t)c->r[3],0); // 8034FE48
  if (!crb(c,2)) { goto L_8034FE58; } // 8034FE4C
  c->r[3]=0u+0xFFFFFF80u; // 8034FE50
  goto L_8034FE88; // 8034FE54
L_8034FE58:;
  c->r[0]=R8(c->r[31]+0x0000008Au); // 8034FE58
  cmpu(c,0,c->r[0],0x00000001u); // 8034FE5C
  if (crb(c,2)) { goto L_8034FE6C; } // 8034FE60
  c->r[3]=0u+0xFFFFFFF8u; // 8034FE64
  goto L_8034FE88; // 8034FE68
L_8034FE6C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8034FE6C
  c->lr=0x8034FE74u; f_8034CAF4(c); // 8034FE70
  cmps(c,0,(int32_t)c->r[3],0); // 8034FE74
  if (!crb(c,2)) { goto L_8034FE84; } // 8034FE78
  c->r[0]=0u+0x00000002u; // 8034FE7C
  W8(c->r[31]+0x0000008Au,c->r[0]); // 8034FE80
L_8034FE84:;
  c->lr=0x8034FE88u; f_80350CE0(c); // 8034FE84
L_8034FE88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034FE88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8034FE8C
  c->lr=c->r[0]; // 8034FE90
  c->r[1]=c->r[1]+0x00000010u; // 8034FE94
  return; // 8034FE98
}

// NANDCloseAsync
void f_8034FE9C(Ctx* __restrict c) {
  trace_call(0x8034FE9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FE9C
  c->r[0]=c->lr; // 8034FEA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8034FEA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8034FEA8
  c->r[31]=c->r[5]|c->r[5]; // 8034FEAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8034FEB0
  c->r[30]=c->r[4]|c->r[4]; // 8034FEB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8034FEB8
  c->r[29]=c->r[3]|c->r[3]; // 8034FEBC
  c->lr=0x8034FEC4u; f_80350CC8(c); // 8034FEC0
  cmps(c,0,(int32_t)c->r[3],0); // 8034FEC4
  if (!crb(c,2)) { goto L_8034FED4; } // 8034FEC8
  c->r[3]=0u+0xFFFFFF80u; // 8034FECC
  goto L_8034FF08; // 8034FED0
L_8034FED4:;
  c->r[0]=R8(c->r[29]+0x0000008Au); // 8034FED4
  cmpu(c,0,c->r[0],0x00000001u); // 8034FED8
  if (crb(c,2)) { goto L_8034FEE8; } // 8034FEDC
  c->r[3]=0u+0xFFFFFFF8u; // 8034FEE0
  goto L_8034FF08; // 8034FEE4
L_8034FEE8:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 8034FEE8
  c->r[4]=0u+0x80350000u; // 8034FEEC
  c->r[5]=c->r[31]|c->r[31]; // 8034FEF0
  W32(c->r[31]+0x00000008u,c->r[29]); // 8034FEF4
  c->r[4]=c->r[4]+0x00000864u; // 8034FEF8
  c->r[3]=R32(c->r[29]+0x00000000u); // 8034FEFC
  c->lr=0x8034FF04u; f_8034CAF8(c); // 8034FF00
  c->lr=0x8034FF08u; f_80350CE0(c); // 8034FF04
L_8034FF08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8034FF08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8034FF0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8034FF10
  c->r[29]=R32(c->r[1]+0x00000014u); // 8034FF14
  c->lr=c->r[0]; // 8034FF18
  c->r[1]=c->r[1]+0x00000020u; // 8034FF1C
  return; // 8034FF20
}

// fn_8034FF24
void f_8034FF24(Ctx* __restrict c) {
  trace_call(0x8034FF24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FF24
  c->r[0]=c->lr; // 8034FF28
  c->r[10]=0u+0x00000000u; // 8034FF2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8034FF30
  c->r[0]=0u+0x00000000u; // 8034FF34
  W32(c->r[1]+0x00000008u,c->r[0]); // 8034FF38
  c->lr=0x8034FF40u; f_8034FF50(c); // 8034FF3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8034FF40
  c->lr=c->r[0]; // 8034FF44
  c->r[1]=c->r[1]+0x00000010u; // 8034FF48
  return; // 8034FF4C
}

// fn_8034FF50
void f_8034FF50(Ctx* __restrict c) {
  trace_call(0x8034FF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8034FF50
  c->r[0]=c->lr; // 8034FF54
  W32(c->r[1]+0x00000034u,c->r[0]); // 8034FF58
  c->r[11]=c->r[1]+0x00000030u; // 8034FF5C
  c->lr=0x8034FF64u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8034FF60
  c->r[31]=R32(c->r[1]+0x00000038u); // 8034FF64
  c->r[23]=c->r[3]|c->r[3]; // 8034FF68
  c->r[24]=c->r[4]|c->r[4]; // 8034FF6C
  c->r[25]=c->r[5]|c->r[5]; // 8034FF70
  c->r[26]=c->r[6]|c->r[6]; // 8034FF74
  c->r[27]=c->r[7]|c->r[7]; // 8034FF78
  c->r[28]=c->r[8]|c->r[8]; // 8034FF7C
  c->r[29]=c->r[9]|c->r[9]; // 8034FF80
  c->r[30]=c->r[10]|c->r[10]; // 8034FF84
  c->lr=0x8034FF8Cu; f_80350CC8(c); // 8034FF88
  cmps(c,0,(int32_t)c->r[3],0); // 8034FF8C
  if (!crb(c,2)) { goto L_8034FF9C; } // 8034FF90
  c->r[3]=0u+0xFFFFFF80u; // 8034FF94
  goto L_803500A0; // 8034FF98
L_8034FF9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8034FF9C
  if (crb(c,2)) { goto L_8034FFB4; } // 8034FFA0
  c->r[0]=rotl(c->r[27],0)&0x00003FFFu; cr0(c,c->r[0]); // 8034FFA4
  if (crb(c,2)) { goto L_8034FFB4; } // 8034FFA8
  c->r[3]=0u+0xFFFFFFF8u; // 8034FFAC
  goto L_803500A0; // 8034FFB0
L_8034FFB4:;
  c->r[0]=0u+0x00000000u; // 8034FFB4
  W8(c->r[24]+0x00000088u,c->r[25]); // 8034FFB8
  c->r[4]=c->r[23]|c->r[23]; // 8034FFBC
  c->r[3]=c->r[24]+0x00000008u; // 8034FFC0
  W8(c->r[24]+0x00000089u,c->r[0]); // 8034FFC4
  W32(c->r[29]+0x000000B8u,c->r[31]); // 8034FFC8
  c->lr=0x8034FFD0u; f_80350E40(c); // 8034FFCC
  cmps(c,0,(int32_t)c->r[30],0); // 8034FFD0
  if (!crb(c,2)) { goto L_8034FFF0; } // 8034FFD4
  c->r[3]=c->r[24]+0x00000008u; // 8034FFD8
  c->lr=0x8034FFE0u; f_80350C3C(c); // 8034FFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8034FFE0
  if (crb(c,2)) { goto L_8034FFF0; } // 8034FFE4
  c->r[3]=0u+0xFFFFFFFFu; // 8034FFE8
  goto L_803500A0; // 8034FFEC
L_8034FFF0:;
  cmpu(c,0,c->r[25],0x00000001u); // 8034FFF0
  if (!crb(c,2)) { goto L_80350030; } // 8034FFF4
  c->r[5]=0u+0x80350000u; // 8034FFF8
  W32(c->r[29]+0x00000008u,c->r[24]); // 8034FFFC
  c->r[6]=c->r[29]|c->r[29]; // 80350000
  c->r[3]=c->r[24]+0x00000008u; // 80350004
  W32(c->r[29]+0x00000004u,c->r[28]); // 80350008
  c->r[5]=c->r[5]+0x000004A8u; // 8035000C
  c->r[4]=0u+0x00000001u; // 80350010
  c->lr=0x80350018u; f_8034C828(c); // 80350014
  cmps(c,0,(int32_t)c->r[3],0); // 80350018
  if (!crb(c,2)) { goto L_80350028; } // 8035001C
  c->r[3]=0u+0x00000000u; // 80350020
  goto L_803500A0; // 80350024
L_80350028:;
  c->lr=0x8035002Cu; f_80350CE0(c); // 80350028
  goto L_803500A0; // 8035002C
L_80350030:;
  c->r[0]=c->r[25]+0x000000FEu; // 80350030
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80350034
  cmpu(c,0,c->r[0],0x00000001u); // 80350038
  if (crb(c,1)) { goto L_8035009C; } // 8035003C
  c->r[31]=0u+0x00000000u; // 80350040
  c->r[3]=0u+0x80460000u; // 80350044
  c->r[8]=0u+0x80350000u; // 80350048
  W32(c->r[29]+0x00000008u,c->r[24]); // 8035004C
  c->r[9]=c->r[29]|c->r[29]; // 80350050
  c->r[3]=c->r[3]+0xFFFF99B8u; // 80350054
  W32(c->r[29]+0x00000004u,c->r[28]); // 80350058
  c->r[8]=c->r[8]+0x000000B8u; // 8035005C
  c->r[4]=0u+0x00000000u; // 80350060
  c->r[5]=0u+0x00000003u; // 80350064
  W32(c->r[29]+0x0000007Cu,c->r[31]); // 80350068
  c->r[6]=0u+0x00000003u; // 8035006C
  c->r[7]=0u+0x00000003u; // 80350070
  W32(c->r[29]+0x00000080u,c->r[26]); // 80350074
  W32(c->r[29]+0x00000084u,c->r[27]); // 80350078
  c->lr=0x80350080u; f_8034BA54(c); // 8035007C
  cmps(c,0,(int32_t)c->r[3],0); // 80350080
  if (!crb(c,2)) { goto L_8035008C; } // 80350084
  goto L_80350094; // 80350088
L_8035008C:;
  c->lr=0x80350090u; f_80350CE0(c); // 8035008C
  c->r[31]=c->r[3]|c->r[3]; // 80350090
L_80350094:;
  c->r[3]=c->r[31]|c->r[31]; // 80350094
  goto L_803500A0; // 80350098
L_8035009C:;
  c->r[3]=0u+0xFFFFFFF8u; // 8035009C
L_803500A0:;
  c->r[11]=c->r[1]+0x00000030u; // 803500A0
  c->lr=0x803500A8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803500A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803500A8
  c->lr=c->r[0]; // 803500AC
  c->r[1]=c->r[1]+0x00000030u; // 803500B0
  return; // 803500B4
}

// fn_803500B8
void f_803500B8(Ctx* __restrict c) {
  trace_call(0x803500B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803500B8
  c->r[0]=c->lr; // 803500BC
  cmps(c,0,(int32_t)c->r[3],0); // 803500C0
  W32(c->r[1]+0x00000074u,c->r[0]); // 803500C4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 803500C8
  W32(c->r[1]+0x00000068u,c->r[30]); // 803500CC
  c->r[30]=c->r[4]|c->r[4]; // 803500D0
  if (!crb(c,0)) { goto L_803500EC; } // 803500D4
  cmps(c,0,(int32_t)c->r[3],-105); // 803500D8
  if (!crb(c,2)) { goto L_8035047C; } // 803500DC
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 803500E0
  cmps(c,0,(int32_t)c->r[0],0); // 803500E4
  if (!crb(c,2)) { goto L_8035047C; } // 803500E8
L_803500EC:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 803500EC
  c->r[6]=0u+0xFFFFFF8Bu; // 803500F0
  c->r[31]=R32(c->r[4]+0x00000008u); // 803500F4
  cmps(c,0,(int32_t)c->r[0],0); // 803500F8
  if (!crb(c,2)) { goto L_80350108; } // 803500FC
  c->r[0]=0u+0x00000001u; // 80350100
  W8(c->r[31]+0x00000089u,c->r[0]); // 80350104
L_80350108:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 80350108
  cmps(c,0,(int32_t)c->r[0],2); // 8035010C
  if (!crb(c,2)) { goto L_80350120; } // 80350110
  W32(c->r[31]+0x00000004u,c->r[3]); // 80350114
  c->r[0]=0u+0x00000002u; // 80350118
  W8(c->r[31]+0x00000089u,c->r[0]); // 8035011C
L_80350120:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 80350120
  cmps(c,0,(int32_t)c->r[5],2); // 80350124
  if (!crb(c,2)) { goto L_80350144; } // 80350128
  c->r[0]=R32(c->r[4]+0x000000B8u); // 8035012C
  cmps(c,0,(int32_t)c->r[0],0); // 80350130
  if (crb(c,2)) { goto L_80350144; } // 80350134
  c->r[0]=c->r[5]+0x00000002u; // 80350138
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8035013C
  goto L_80350150; // 80350140
L_80350144:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 80350144
  c->r[0]=c->r[5]+0x00000001u; // 80350148
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8035014C
L_80350150:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 80350150
  cmps(c,0,(int32_t)c->r[0],1); // 80350154
  if (!crb(c,2)) { goto L_80350190; } // 80350158
  c->r[10]=0u+0x80350000u; // 8035015C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80350160
  c->r[3]=c->r[31]+0x00000008u; // 80350164
  c->r[5]=c->r[4]+0x0000001Cu; // 80350168
  c->r[6]=c->r[4]+0x00000020u; // 8035016C
  c->r[7]=c->r[4]+0x00000024u; // 80350170
  c->r[8]=c->r[4]+0x00000028u; // 80350174
  c->r[9]=c->r[4]+0x0000002Cu; // 80350178
  c->r[10]=c->r[10]+0x000000B8u; // 8035017C
  c->r[4]=c->r[4]+0x00000018u; // 80350180
  c->lr=0x80350188u; f_8034BF3C(c); // 80350184
  c->r[6]=c->r[3]|c->r[3]; // 80350188
  goto L_80350458; // 8035018C
L_80350190:;
  cmps(c,0,(int32_t)c->r[0],2); // 80350190
  if (!crb(c,2)) { goto L_803501B8; } // 80350194
  c->r[5]=0u+0x80350000u; // 80350198
  c->r[6]=c->r[30]|c->r[30]; // 8035019C
  c->r[3]=c->r[31]+0x00000008u; // 803501A0
  c->r[4]=0u+0x00000001u; // 803501A4
  c->r[5]=c->r[5]+0x000000B8u; // 803501A8
  c->lr=0x803501B0u; f_8034C828(c); // 803501AC
  c->r[6]=c->r[3]|c->r[3]; // 803501B0
  goto L_80350458; // 803501B4
L_803501B8:;
  cmps(c,0,(int32_t)c->r[0],3); // 803501B8
  if (!crb(c,2)) { goto L_80350220; } // 803501BC
  c->lr=0x803501C4u; f_8032269C(c); // 803501C0
  c->r[31]=R32(c->r[13]+0xFFFFEF30u); // 803501C4
  c->r[0]=c->r[31]+0x00000001u; // 803501C8
  W32(c->r[13]+0xFFFFEF30u,c->r[0]); // 803501CC
  c->lr=0x803501D4u; f_803226C4(c); // 803501D0
  c->r[5]=0u+0x80460000u; // 803501D4
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 803501D8
  c->r[6]=c->r[31]|c->r[31]; // 803501DC
  c->r[3]=c->r[1]+0x00000020u; // 803501E0
  c->r[5]=c->r[5]+0xFFFF99B8u; // 803501E4
  c->r[4]=c->r[13]+0xFFFFDAC8u; // 803501E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803501EC
  c->lr=0x803501F4u; f_803A5824(c); // 803501F0
  c->r[8]=0u+0x80350000u; // 803501F4
  c->r[9]=c->r[30]|c->r[30]; // 803501F8
  c->r[3]=c->r[1]+0x00000020u; // 803501FC
  c->r[4]=0u+0x00000000u; // 80350200
  c->r[8]=c->r[8]+0x000000B8u; // 80350204
  c->r[5]=0u+0x00000003u; // 80350208
  c->r[6]=0u+0x00000000u; // 8035020C
  c->r[7]=0u+0x00000000u; // 80350210
  c->lr=0x80350218u; f_8034BA54(c); // 80350214
  c->r[6]=c->r[3]|c->r[3]; // 80350218
  goto L_80350458; // 8035021C
L_80350220:;
  cmps(c,0,(int32_t)c->r[0],4); // 80350220
  if (!crb(c,2)) { goto L_803502B8; } // 80350224
  c->r[3]=c->r[1]+0x00000010u; // 80350228
  c->r[4]=c->r[31]+0x00000008u; // 8035022C
  c->lr=0x80350234u; f_80350A68(c); // 80350230
  c->r[0]=R32(c->r[30]+0x000000B8u); // 80350234
  cmps(c,0,(int32_t)c->r[0],0); // 80350238
  if (!crb(c,2)) { goto L_80350270; } // 8035023C
  c->r[0]=0u+0x00000003u; // 80350240
  c->r[4]=0u+0x80460000u; // 80350244
  W8(c->r[31]+0x00000089u,c->r[0]); // 80350248
  c->r[5]=0u+0x80460000u; // 8035024C
  c->r[3]=c->r[31]+0x00000048u; // 80350250
  c->r[4]=c->r[4]+0xFFFF99C4u; // 80350254
  c->r[6]=R32(c->r[30]+0x0000008Cu); // 80350258
  c->r[5]=c->r[5]+0xFFFF99B8u; // 8035025C
  c->r[7]=c->r[1]+0x00000010u; // 80350260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350264
  c->lr=0x8035026Cu; f_803A5824(c); // 80350268
  goto L_8035028C; // 8035026C
L_80350270:;
  c->r[5]=0u+0x80460000u; // 80350270
  c->r[3]=c->r[31]+0x00000048u; // 80350274
  c->r[5]=c->r[5]+0xFFFF99B8u; // 80350278
  c->r[6]=c->r[1]+0x00000010u; // 8035027C
  c->r[4]=c->r[13]+0xFFFFDAD0u; // 80350280
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350284
  c->lr=0x8035028Cu; f_803A5824(c); // 80350288
L_8035028C:;
  c->r[8]=0u+0x80350000u; // 8035028C
  c->r[4]=R32(c->r[30]+0x00000020u); // 80350290
  c->r[5]=R32(c->r[30]+0x00000024u); // 80350294
  c->r[9]=c->r[30]|c->r[30]; // 80350298
  c->r[6]=R32(c->r[30]+0x00000028u); // 8035029C
  c->r[3]=c->r[31]+0x00000048u; // 803502A0
  c->r[7]=R32(c->r[30]+0x0000002Cu); // 803502A4
  c->r[8]=c->r[8]+0x000000B8u; // 803502A8
  c->lr=0x803502B0u; f_8034C66C(c); // 803502AC
  c->r[6]=c->r[3]|c->r[3]; // 803502B0
  goto L_80350458; // 803502B4
L_803502B8:;
  cmps(c,0,(int32_t)c->r[0],5); // 803502B8
  if (!crb(c,2)) { goto L_80350324; } // 803502BC
  c->r[0]=0u+0x00000004u; // 803502C0
  W8(c->r[31]+0x00000089u,c->r[0]); // 803502C4
  c->r[0]=R8(c->r[31]+0x00000088u); // 803502C8
  cmpu(c,0,c->r[0],0x00000002u); // 803502CC
  if (!crb(c,2)) { goto L_803502F4; } // 803502D0
  c->r[5]=0u+0x80350000u; // 803502D4
  c->r[6]=c->r[30]|c->r[30]; // 803502D8
  c->r[3]=c->r[31]+0x00000048u; // 803502DC
  c->r[4]=0u+0x00000002u; // 803502E0
  c->r[5]=c->r[5]+0x000000B8u; // 803502E4
  c->lr=0x803502ECu; f_8034C828(c); // 803502E8
  c->r[6]=c->r[3]|c->r[3]; // 803502EC
  goto L_80350458; // 803502F0
L_803502F4:;
  cmpu(c,0,c->r[0],0x00000003u); // 803502F4
  if (!crb(c,2)) { goto L_8035031C; } // 803502F8
  c->r[5]=0u+0x80350000u; // 803502FC
  c->r[6]=c->r[30]|c->r[30]; // 80350300
  c->r[3]=c->r[31]+0x00000048u; // 80350304
  c->r[4]=0u+0x00000003u; // 80350308
  c->r[5]=c->r[5]+0x000000B8u; // 8035030C
  c->lr=0x80350314u; f_8034C828(c); // 80350310
  c->r[6]=c->r[3]|c->r[3]; // 80350314
  goto L_80350458; // 80350318
L_8035031C:;
  c->r[6]=0u+0xFFFFFF8Bu; // 8035031C
  goto L_80350458; // 80350320
L_80350324:;
  cmps(c,0,(int32_t)c->r[0],6); // 80350324
  if (!crb(c,2)) { goto L_80350364; } // 80350328
  W32(c->r[31]+0x00000000u,c->r[3]); // 8035032C
  c->r[3]=0u+0x00000005u; // 80350330
  c->r[6]=0u+0x80350000u; // 80350334
  c->r[0]=0u+0x00000007u; // 80350338
  W8(c->r[31]+0x00000089u,c->r[3]); // 8035033C
  c->r[7]=c->r[30]|c->r[30]; // 80350340
  c->r[6]=c->r[6]+0x000000B8u; // 80350344
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 80350348
  c->r[4]=R32(c->r[4]+0x00000080u); // 8035034C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80350350
  c->r[5]=R32(c->r[30]+0x00000084u); // 80350354
  c->lr=0x8035035Cu; f_8034C98C(c); // 80350358
  c->r[6]=c->r[3]|c->r[3]; // 8035035C
  goto L_80350458; // 80350360
L_80350364:;
  cmps(c,0,(int32_t)c->r[0],7); // 80350364
  if (!crb(c,2)) { goto L_80350390; } // 80350368
  c->r[6]=0u+0x80350000u; // 8035036C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80350370
  c->r[4]=R32(c->r[4]+0x00000080u); // 80350374
  c->r[7]=c->r[30]|c->r[30]; // 80350378
  c->r[5]=R32(c->r[30]+0x00000084u); // 8035037C
  c->r[6]=c->r[6]+0x000000B8u; // 80350380
  c->lr=0x80350388u; f_8034C98C(c); // 80350384
  c->r[6]=c->r[3]|c->r[3]; // 80350388
  goto L_80350458; // 8035038C
L_80350390:;
  cmps(c,0,(int32_t)c->r[0],8); // 80350390
  if (!crb(c,2)) { goto L_803503F4; } // 80350394
  cmps(c,0,(int32_t)c->r[3],0); // 80350398
  if (!crb(c,1)) { goto L_803503CC; } // 8035039C
  c->r[0]=0u+0x00000006u; // 803503A0
  c->r[6]=0u+0x80350000u; // 803503A4
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 803503A8
  c->r[5]=c->r[3]|c->r[3]; // 803503AC
  c->r[4]=R32(c->r[4]+0x00000080u); // 803503B0
  c->r[7]=c->r[30]|c->r[30]; // 803503B4
  c->r[3]=R32(c->r[31]+0x00000000u); // 803503B8
  c->r[6]=c->r[6]+0x000000B8u; // 803503BC
  c->lr=0x803503C4u; f_8034CA50(c); // 803503C0
  c->r[6]=c->r[3]|c->r[3]; // 803503C4
  goto L_80350458; // 803503C8
L_803503CC:;
  if (!crb(c,2)) { goto L_80350458; } // 803503CC
  c->r[6]=0u+0x80350000u; // 803503D0
  c->r[3]=R32(c->r[31]+0x00000000u); // 803503D4
  c->r[7]=c->r[30]|c->r[30]; // 803503D8
  c->r[4]=0u+0x00000000u; // 803503DC
  c->r[6]=c->r[6]+0x000000B8u; // 803503E0
  c->r[5]=0u+0x00000000u; // 803503E4
  c->lr=0x803503ECu; f_8034C8E0(c); // 803503E8
  c->r[6]=c->r[3]|c->r[3]; // 803503EC
  goto L_80350458; // 803503F0
L_803503F4:;
  cmps(c,0,(int32_t)c->r[0],9); // 803503F4
  if (!crb(c,2)) { goto L_80350458; } // 803503F8
  cmps(c,0,(int32_t)c->r[3],0); // 803503FC
  if (!crb(c,2)) { goto L_80350440; } // 80350400
  c->r[0]=R32(c->r[4]+0x000000B8u); // 80350404
  cmps(c,0,(int32_t)c->r[0],0); // 80350408
  if (!crb(c,2)) { goto L_8035041C; } // 8035040C
  c->r[0]=0u+0x00000003u; // 80350410
  W8(c->r[31]+0x0000008Au,c->r[0]); // 80350414
  goto L_80350424; // 80350418
L_8035041C:;
  c->r[0]=0u+0x00000005u; // 8035041C
  W8(c->r[31]+0x0000008Au,c->r[0]); // 80350420
L_80350424:;
  c->r[3]=0u+0x00000000u; // 80350424
  c->lr=0x8035042Cu; f_80350CE0(c); // 80350428
  c->r[12]=R32(c->r[30]+0x00000004u); // 8035042C
  c->r[4]=c->r[30]|c->r[30]; // 80350430
  c->ctr=c->r[12]; // 80350434
  if (true) { c->lr=0x8035043Cu; dispatch(c,c->ctr); } // 80350438
  goto L_80350490; // 8035043C
L_80350440:;
  c->lr=0x80350444u; f_80350CE0(c); // 80350440
  c->r[12]=R32(c->r[30]+0x00000004u); // 80350444
  c->r[4]=c->r[30]|c->r[30]; // 80350448
  c->ctr=c->r[12]; // 8035044C
  if (true) { c->lr=0x80350454u; dispatch(c,c->ctr); } // 80350450
  goto L_80350490; // 80350454
L_80350458:;
  cmps(c,0,(int32_t)c->r[6],0); // 80350458
  if (crb(c,2)) { goto L_80350490; } // 8035045C
  c->r[3]=c->r[6]|c->r[6]; // 80350460
  c->lr=0x80350468u; f_80350CE0(c); // 80350464
  c->r[12]=R32(c->r[30]+0x00000004u); // 80350468
  c->r[4]=c->r[30]|c->r[30]; // 8035046C
  c->ctr=c->r[12]; // 80350470
  if (true) { c->lr=0x80350478u; dispatch(c,c->ctr); } // 80350474
  goto L_80350490; // 80350478
L_8035047C:;
  c->lr=0x80350480u; f_80350CE0(c); // 8035047C
  c->r[12]=R32(c->r[30]+0x00000004u); // 80350480
  c->r[4]=c->r[30]|c->r[30]; // 80350484
  c->ctr=c->r[12]; // 80350488
  if (true) { c->lr=0x80350490u; dispatch(c,c->ctr); } // 8035048C
L_80350490:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 80350490
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80350494
  c->r[30]=R32(c->r[1]+0x00000068u); // 80350498
  c->lr=c->r[0]; // 8035049C
  c->r[1]=c->r[1]+0x00000070u; // 803504A0
  return; // 803504A4
}

// fn_803504A8
void f_803504A8(Ctx* __restrict c) {
  trace_call(0x803504A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803504A8
  c->r[0]=c->lr; // 803504AC
  cmps(c,0,(int32_t)c->r[3],0); // 803504B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803504B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803504B8
  c->r[31]=c->r[4]|c->r[4]; // 803504BC
  if (crb(c,0)) { goto L_80350518; } // 803504C0
  c->r[5]=R32(c->r[4]+0x00000008u); // 803504C4
  c->r[0]=0u+0x00000002u; // 803504C8
  W32(c->r[5]+0x00000000u,c->r[3]); // 803504CC
  c->r[3]=R32(c->r[4]+0x00000008u); // 803504D0
  W8(c->r[3]+0x00000089u,c->r[0]); // 803504D4
  c->r[0]=R32(c->r[4]+0x000000B8u); // 803504D8
  cmps(c,0,(int32_t)c->r[0],0); // 803504DC
  if (!crb(c,2)) { goto L_803504F4; } // 803504E0
  c->r[3]=R32(c->r[4]+0x00000008u); // 803504E4
  c->r[0]=0u+0x00000003u; // 803504E8
  W8(c->r[3]+0x0000008Au,c->r[0]); // 803504EC
  goto L_80350500; // 803504F0
L_803504F4:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 803504F4
  c->r[0]=0u+0x00000005u; // 803504F8
  W8(c->r[3]+0x0000008Au,c->r[0]); // 803504FC
L_80350500:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80350500
  c->r[4]=c->r[31]|c->r[31]; // 80350504
  c->r[3]=0u+0x00000000u; // 80350508
  c->ctr=c->r[12]; // 8035050C
  if (true) { c->lr=0x80350514u; dispatch(c,c->ctr); } // 80350510
  goto L_8035052C; // 80350514
L_80350518:;
  c->lr=0x8035051Cu; f_80350CE0(c); // 80350518
  c->r[12]=R32(c->r[31]+0x00000004u); // 8035051C
  c->r[4]=c->r[31]|c->r[31]; // 80350520
  c->ctr=c->r[12]; // 80350524
  if (true) { c->lr=0x8035052Cu; dispatch(c,c->ctr); } // 80350528
L_8035052C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8035052C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80350530
  c->lr=c->r[0]; // 80350534
  c->r[1]=c->r[1]+0x00000010u; // 80350538
  return; // 8035053C
}

// fn_80350540
void f_80350540(Ctx* __restrict c) {
  trace_call(0x80350540u);
  c->r[6]=0u+0x00000000u; // 80350540
  f_80350548(c); return; // 80350544
}

// fn_80350548
void f_80350548(Ctx* __restrict c) {
  trace_call(0x80350548u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350548
  c->r[0]=c->lr; // 8035054C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80350550
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80350554
  c->r[31]=c->r[6]|c->r[6]; // 80350558
  W32(c->r[1]+0x00000018u,c->r[30]); // 8035055C
  c->r[30]=c->r[5]|c->r[5]; // 80350560
  W32(c->r[1]+0x00000014u,c->r[29]); // 80350564
  c->r[29]=c->r[4]|c->r[4]; // 80350568
  W32(c->r[1]+0x00000010u,c->r[28]); // 8035056C
  c->r[28]=c->r[3]|c->r[3]; // 80350570
  c->lr=0x80350578u; f_80350CC8(c); // 80350574
  cmps(c,0,(int32_t)c->r[3],0); // 80350578
  if (!crb(c,2)) { goto L_80350588; } // 8035057C
  c->r[3]=0u+0xFFFFFF80u; // 80350580
  goto L_80350624; // 80350584
L_80350588:;
  c->r[0]=R8(c->r[28]+0x0000008Au); // 80350588
  cmpu(c,0,c->r[0],0x00000003u); // 8035058C
  if (!crb(c,2)) { goto L_8035059C; } // 80350590
  cmps(c,0,(int32_t)c->r[31],0); // 80350594
  if (crb(c,2)) { goto L_803505B4; } // 80350598
L_8035059C:;
  cmpu(c,0,c->r[0],0x00000005u); // 8035059C
  if (!crb(c,2)) { goto L_803505AC; } // 803505A0
  cmps(c,0,(int32_t)c->r[31],0); // 803505A4
  if (!crb(c,2)) { goto L_803505B4; } // 803505A8
L_803505AC:;
  c->r[3]=0u+0xFFFFFFF8u; // 803505AC
  goto L_80350624; // 803505B0
L_803505B4:;
  W32(c->r[30]+0x000000B8u,c->r[31]); // 803505B4
  c->r[3]=R8(c->r[28]+0x00000088u); // 803505B8
  cmpu(c,0,c->r[3],0x00000001u); // 803505BC
  if (!crb(c,2)) { goto L_803505E4; } // 803505C0
  W32(c->r[30]+0x00000008u,c->r[28]); // 803505C4
  c->r[4]=0u+0x80350000u; // 803505C8
  c->r[5]=c->r[30]|c->r[30]; // 803505CC
  W32(c->r[30]+0x00000004u,c->r[29]); // 803505D0
  c->r[4]=c->r[4]+0x00000808u; // 803505D4
  c->r[3]=R32(c->r[28]+0x00000000u); // 803505D8
  c->lr=0x803505E0u; f_8034CAF8(c); // 803505DC
  goto L_80350620; // 803505E0
L_803505E4:;
  c->r[0]=c->r[3]+0x000000FEu; // 803505E4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803505E8
  cmpu(c,0,c->r[0],0x00000001u); // 803505EC
  if (crb(c,1)) { goto L_8035061C; } // 803505F0
  c->r[0]=0u+0x0000000Au; // 803505F4
  c->r[4]=0u+0x80350000u; // 803505F8
  W32(c->r[30]+0x00000008u,c->r[28]); // 803505FC
  c->r[5]=c->r[30]|c->r[30]; // 80350600
  c->r[4]=c->r[4]+0x00000644u; // 80350604
  W32(c->r[30]+0x00000004u,c->r[29]); // 80350608
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8035060C
  c->r[3]=R32(c->r[28]+0x00000000u); // 80350610
  c->lr=0x80350618u; f_8034CAF8(c); // 80350614
  goto L_80350620; // 80350618
L_8035061C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 8035061C
L_80350620:;
  c->lr=0x80350624u; f_80350CE0(c); // 80350620
L_80350624:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80350624
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80350628
  c->r[30]=R32(c->r[1]+0x00000018u); // 8035062C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80350630
  c->r[28]=R32(c->r[1]+0x00000010u); // 80350634
  c->lr=c->r[0]; // 80350638
  c->r[1]=c->r[1]+0x00000020u; // 8035063C
  return; // 80350640
}

// fn_80350644
void f_80350644(Ctx* __restrict c) {
  trace_call(0x80350644u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350644
  c->r[0]=c->lr; // 80350648
  cmps(c,0,(int32_t)c->r[3],0); // 8035064C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80350650
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80350654
  c->r[31]=c->r[4]|c->r[4]; // 80350658
  if (!crb(c,2)) { goto L_803507E0; } // 8035065C
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 80350660
  c->r[6]=0u+0xFFFFFF8Bu; // 80350664
  c->r[7]=R32(c->r[4]+0x00000008u); // 80350668
  cmps(c,0,(int32_t)c->r[0],12); // 8035066C
  if (!crb(c,2)) { goto L_8035067C; } // 80350670
  c->r[0]=0u+0x00000008u; // 80350674
  W8(c->r[7]+0x00000089u,c->r[0]); // 80350678
L_8035067C:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 8035067C
  cmps(c,0,(int32_t)c->r[5],12); // 80350680
  if (!crb(c,2)) { goto L_803506A0; } // 80350684
  c->r[0]=R32(c->r[4]+0x000000B8u); // 80350688
  cmps(c,0,(int32_t)c->r[0],0); // 8035068C
  if (crb(c,2)) { goto L_803506A0; } // 80350690
  c->r[0]=c->r[5]+0x00000002u; // 80350694
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 80350698
  goto L_803506AC; // 8035069C
L_803506A0:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 803506A0
  c->r[0]=c->r[5]+0x00000001u; // 803506A4
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 803506A8
L_803506AC:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 803506AC
  cmps(c,0,(int32_t)c->r[0],11); // 803506B0
  if (!crb(c,2)) { goto L_803506DC; } // 803506B4
  c->r[0]=0u+0x00000006u; // 803506B8
  c->r[4]=0u+0x80350000u; // 803506BC
  W8(c->r[7]+0x00000089u,c->r[0]); // 803506C0
  c->r[5]=c->r[31]|c->r[31]; // 803506C4
  c->r[4]=c->r[4]+0x00000644u; // 803506C8
  c->r[3]=R32(c->r[7]+0x00000004u); // 803506CC
  c->lr=0x803506D4u; f_8034CAF8(c); // 803506D0
  c->r[6]=c->r[3]|c->r[3]; // 803506D4
  goto L_803507BC; // 803506D8
L_803506DC:;
  cmps(c,0,(int32_t)c->r[0],12); // 803506DC
  if (!crb(c,2)) { goto L_8035070C; } // 803506E0
  c->r[0]=0u+0x00000007u; // 803506E4
  c->r[5]=0u+0x80350000u; // 803506E8
  W8(c->r[7]+0x00000089u,c->r[0]); // 803506EC
  c->r[6]=c->r[31]|c->r[31]; // 803506F0
  c->r[3]=c->r[7]+0x00000048u; // 803506F4
  c->r[4]=c->r[7]+0x00000008u; // 803506F8
  c->r[5]=c->r[5]+0x00000644u; // 803506FC
  c->lr=0x80350704u; f_8034C218(c); // 80350700
  c->r[6]=c->r[3]|c->r[3]; // 80350704
  goto L_803507BC; // 80350708
L_8035070C:;
  cmps(c,0,(int32_t)c->r[0],13); // 8035070C
  if (!crb(c,2)) { goto L_80350780; } // 80350710
  c->r[0]=0u+0x00000000u; // 80350714
  c->r[3]=c->r[1]+0x00000008u; // 80350718
  W32(c->r[1]+0x00000008u,c->r[0]); // 8035071C
  c->r[4]=c->r[7]+0x00000048u; // 80350720
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80350724
  W32(c->r[1]+0x00000010u,c->r[0]); // 80350728
  W32(c->r[1]+0x00000014u,c->r[0]); // 8035072C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80350730
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80350734
  W32(c->r[1]+0x00000020u,c->r[0]); // 80350738
  W32(c->r[1]+0x00000024u,c->r[0]); // 8035073C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80350740
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80350744
  W32(c->r[1]+0x00000030u,c->r[0]); // 80350748
  W32(c->r[1]+0x00000034u,c->r[0]); // 8035074C
  W32(c->r[1]+0x00000038u,c->r[0]); // 80350750
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80350754
  W32(c->r[1]+0x00000040u,c->r[0]); // 80350758
  W32(c->r[1]+0x00000044u,c->r[0]); // 8035075C
  c->lr=0x80350764u; f_80350F08(c); // 80350760
  c->r[4]=0u+0x80350000u; // 80350764
  c->r[5]=c->r[31]|c->r[31]; // 80350768
  c->r[3]=c->r[1]+0x00000008u; // 8035076C
  c->r[4]=c->r[4]+0x00000644u; // 80350770
  c->lr=0x80350778u; f_8034C148(c); // 80350774
  c->r[6]=c->r[3]|c->r[3]; // 80350778
  goto L_803507BC; // 8035077C
L_80350780:;
  cmps(c,0,(int32_t)c->r[0],14); // 80350780
  if (!crb(c,2)) { goto L_803507BC; } // 80350784
  c->r[0]=R32(c->r[4]+0x000000B8u); // 80350788
  cmps(c,0,(int32_t)c->r[0],0); // 8035078C
  if (!crb(c,2)) { goto L_8035079C; } // 80350790
  c->r[0]=0u+0x00000009u; // 80350794
  W8(c->r[7]+0x00000089u,c->r[0]); // 80350798
L_8035079C:;
  c->r[0]=0u+0x00000004u; // 8035079C
  W8(c->r[7]+0x0000008Au,c->r[0]); // 803507A0
  c->lr=0x803507A8u; f_80350CE0(c); // 803507A4
  c->r[12]=R32(c->r[31]+0x00000004u); // 803507A8
  c->r[4]=c->r[31]|c->r[31]; // 803507AC
  c->ctr=c->r[12]; // 803507B0
  if (true) { c->lr=0x803507B8u; dispatch(c,c->ctr); } // 803507B4
  goto L_803507F4; // 803507B8
L_803507BC:;
  cmps(c,0,(int32_t)c->r[6],0); // 803507BC
  if (crb(c,2)) { goto L_803507F4; } // 803507C0
  c->r[3]=c->r[6]|c->r[6]; // 803507C4
  c->lr=0x803507CCu; f_80350CE0(c); // 803507C8
  c->r[12]=R32(c->r[31]+0x00000004u); // 803507CC
  c->r[4]=c->r[31]|c->r[31]; // 803507D0
  c->ctr=c->r[12]; // 803507D4
  if (true) { c->lr=0x803507DCu; dispatch(c,c->ctr); } // 803507D8
  goto L_803507F4; // 803507DC
L_803507E0:;
  c->lr=0x803507E4u; f_80350CE0(c); // 803507E0
  c->r[12]=R32(c->r[31]+0x00000004u); // 803507E4
  c->r[4]=c->r[31]|c->r[31]; // 803507E8
  c->ctr=c->r[12]; // 803507EC
  if (true) { c->lr=0x803507F4u; dispatch(c,c->ctr); } // 803507F0
L_803507F4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 803507F4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803507F8
  c->lr=c->r[0]; // 803507FC
  c->r[1]=c->r[1]+0x00000050u; // 80350800
  return; // 80350804
}

// fn_80350808
void f_80350808(Ctx* __restrict c) {
  trace_call(0x80350808u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350808
  c->r[0]=c->lr; // 8035080C
  cmps(c,0,(int32_t)c->r[3],0); // 80350810
  W32(c->r[1]+0x00000014u,c->r[0]); // 80350814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80350818
  c->r[31]=c->r[4]|c->r[4]; // 8035081C
  if (!crb(c,2)) { goto L_8035083C; } // 80350820
  c->r[5]=R32(c->r[4]+0x00000008u); // 80350824
  c->r[6]=0u+0x00000007u; // 80350828
  c->r[0]=0u+0x00000004u; // 8035082C
  W8(c->r[5]+0x00000089u,c->r[6]); // 80350830
  c->r[4]=R32(c->r[4]+0x00000008u); // 80350834
  W8(c->r[4]+0x0000008Au,c->r[0]); // 80350838
L_8035083C:;
  c->lr=0x80350840u; f_80350CE0(c); // 8035083C
  c->r[12]=R32(c->r[31]+0x00000004u); // 80350840
  c->r[4]=c->r[31]|c->r[31]; // 80350844
  c->ctr=c->r[12]; // 80350848
  if (true) { c->lr=0x80350850u; dispatch(c,c->ctr); } // 8035084C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80350850
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80350854
  c->lr=c->r[0]; // 80350858
  c->r[1]=c->r[1]+0x00000010u; // 8035085C
  return; // 80350860
}

// fn_80350864
void f_80350864(Ctx* __restrict c) {
  trace_call(0x80350864u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350864
  c->r[0]=c->lr; // 80350868
  cmps(c,0,(int32_t)c->r[3],0); // 8035086C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80350870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80350874
  c->r[31]=c->r[4]|c->r[4]; // 80350878
  if (!crb(c,2)) { goto L_80350898; } // 8035087C
  c->r[5]=R32(c->r[4]+0x00000008u); // 80350880
  c->r[6]=0u+0x00000007u; // 80350884
  c->r[0]=0u+0x00000002u; // 80350888
  W8(c->r[5]+0x00000089u,c->r[6]); // 8035088C
  c->r[4]=R32(c->r[4]+0x00000008u); // 80350890
  W8(c->r[4]+0x0000008Au,c->r[0]); // 80350894
L_80350898:;
  c->lr=0x8035089Cu; f_80350CE0(c); // 80350898
  c->r[12]=R32(c->r[31]+0x00000004u); // 8035089C
  c->r[4]=c->r[31]|c->r[31]; // 803508A0
  c->ctr=c->r[12]; // 803508A4
  if (true) { c->lr=0x803508ACu; dispatch(c,c->ctr); } // 803508A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803508AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803508B0
  c->lr=c->r[0]; // 803508B4
  c->r[1]=c->r[1]+0x00000010u; // 803508B8
  return; // 803508BC
}

// nandRemoveTailToken
void f_803508C0(Ctx* __restrict c) {
  trace_call(0x803508C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803508C0
  c->r[0]=c->lr; // 803508C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803508C8
  c->r[0]=R8(c->r[4]+0x00000000u); // 803508CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803508D0
  cmps(c,0,(int32_t)c->r[0],47); // 803508D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803508D8
  c->r[30]=c->r[4]|c->r[4]; // 803508DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803508E0
  c->r[29]=c->r[3]|c->r[3]; // 803508E4
  if (!crb(c,2)) { goto L_8035090C; } // 803508E8
  c->r[0]=R8(c->r[4]+0x00000001u); // 803508EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803508F0
  if (!crb(c,2)) { goto L_8035090C; } // 803508F4
  c->r[4]=0u+0x0000002Fu; // 803508F8
  c->r[0]=0u+0x00000000u; // 803508FC
  W8(c->r[3]+0x00000000u,c->r[4]); // 80350900
  W8(c->r[3]+0x00000001u,c->r[0]); // 80350904
  goto L_80350978; // 80350908
L_8035090C:;
  c->r[3]=c->r[30]|c->r[30]; // 8035090C
  c->lr=0x80350914u; f_803ADAA8(c); // 80350910
  c->r[31]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 80350914
  c->r[0]=c->r[31]+0x00000001u; // 80350918
  c->r[3]=c->r[30]+c->r[31]; // 8035091C
  c->ctr=c->r[0]; // 80350920
  if (crb(c,0)) { goto L_80350978; } // 80350924
L_80350928:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80350928
  cmps(c,0,(int32_t)c->r[0],47); // 8035092C
  if (!crb(c,2)) { goto L_8035096C; } // 80350930
  cmps(c,0,(int32_t)c->r[31],0); // 80350934
  if (crb(c,2)) { goto L_80350958; } // 80350938
  c->r[3]=c->r[29]|c->r[29]; // 8035093C
  c->r[4]=c->r[30]|c->r[30]; // 80350940
  c->r[5]=c->r[31]|c->r[31]; // 80350944
  c->lr=0x8035094Cu; f_803A6FD0(c); // 80350948
  c->r[0]=0u+0x00000000u; // 8035094C
  W8(c->r[29]+c->r[31],c->r[0]); // 80350950
  goto L_80350978; // 80350954
L_80350958:;
  c->r[3]=0u+0x0000002Fu; // 80350958
  c->r[0]=0u+0x00000000u; // 8035095C
  W8(c->r[29]+0x00000000u,c->r[3]); // 80350960
  W8(c->r[29]+0x00000001u,c->r[0]); // 80350964
  goto L_80350978; // 80350968
L_8035096C:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 8035096C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80350970
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80350928; } // 80350974
L_80350978:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80350978
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8035097C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80350980
  c->r[29]=R32(c->r[1]+0x00000014u); // 80350984
  c->lr=c->r[0]; // 80350988
  c->r[1]=c->r[1]+0x00000020u; // 8035098C
  return; // 80350990
}

// nandGetHeadToken
void f_80350994(Ctx* __restrict c) {
  trace_call(0x80350994u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350994
  c->r[0]=c->lr; // 80350998
  W32(c->r[1]+0x00000024u,c->r[0]); // 8035099C
  c->r[11]=c->r[1]+0x00000020u; // 803509A0
  c->lr=0x803509A8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803509A4
  c->r[27]=c->r[3]|c->r[3]; // 803509A8
  c->r[28]=c->r[4]|c->r[4]; // 803509AC
  c->r[29]=c->r[5]|c->r[5]; // 803509B0
  c->r[31]=c->r[5]|c->r[5]; // 803509B4
  c->r[30]=0u+0x00000000u; // 803509B8
  goto L_80350A40; // 803509BC
L_803509C0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 803509C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803509C4
  cmps(c,0,(int32_t)c->r[0],47); // 803509C8
  if (!crb(c,2)) { goto L_80350A10; } // 803509CC
  c->r[3]=c->r[27]|c->r[27]; // 803509D0
  c->r[4]=c->r[29]|c->r[29]; // 803509D4
  c->r[5]=c->r[30]|c->r[30]; // 803509D8
  c->lr=0x803509E0u; f_803A6FD0(c); // 803509DC
  c->r[4]=c->r[30]+c->r[29]; // 803509E0
  c->r[3]=0u+0x00000000u; // 803509E4
  c->r[0]=R8(c->r[4]+0x00000001u); // 803509E8
  W8(c->r[27]+c->r[30],c->r[3]); // 803509EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803509F0
  if (!crb(c,2)) { goto L_80350A00; } // 803509F4
  W8(c->r[28]+0x00000000u,c->r[3]); // 803509F8
  goto L_80350A50; // 803509FC
L_80350A00:;
  c->r[3]=c->r[28]|c->r[28]; // 80350A00
  c->r[4]=c->r[4]+0x00000001u; // 80350A04
  c->lr=0x80350A0Cu; f_803A6F10(c); // 80350A08
  goto L_80350A50; // 80350A0C
L_80350A10:;
  cmps(c,0,(int32_t)c->r[0],0); // 80350A10
  if (!crb(c,2)) { goto L_80350A38; } // 80350A14
  c->r[3]=c->r[27]|c->r[27]; // 80350A18
  c->r[4]=c->r[29]|c->r[29]; // 80350A1C
  c->r[5]=c->r[30]|c->r[30]; // 80350A20
  c->lr=0x80350A28u; f_803A6FD0(c); // 80350A24
  c->r[0]=0u+0x00000000u; // 80350A28
  W8(c->r[27]+c->r[30],c->r[0]); // 80350A2C
  W8(c->r[28]+0x00000000u,c->r[0]); // 80350A30
  goto L_80350A50; // 80350A34
L_80350A38:;
  c->r[30]=c->r[30]+0x00000001u; // 80350A38
  c->r[31]=c->r[31]+0x00000001u; // 80350A3C
L_80350A40:;
  c->r[3]=c->r[29]|c->r[29]; // 80350A40
  c->lr=0x80350A48u; f_803ADAA8(c); // 80350A44
  cmpu(c,0,c->r[30],c->r[3]); // 80350A48
  if (!crb(c,1)) { IRQCHK(c); goto L_803509C0; } // 80350A4C
L_80350A50:;
  c->r[11]=c->r[1]+0x00000020u; // 80350A50
  c->lr=0x80350A58u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80350A54
  c->r[0]=R32(c->r[1]+0x00000024u); // 80350A58
  c->lr=c->r[0]; // 80350A5C
  c->r[1]=c->r[1]+0x00000020u; // 80350A60
  return; // 80350A64
}

// nandGetRelativeName
void f_80350A68(Ctx* __restrict c) {
  trace_call(0x80350A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350A68
  c->r[0]=c->lr; // 80350A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80350A70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80350A74
  c->r[31]=c->r[4]|c->r[4]; // 80350A78
  W32(c->r[1]+0x00000008u,c->r[30]); // 80350A7C
  c->r[30]=c->r[3]|c->r[3]; // 80350A80
  c->r[3]=c->r[13]+0xFFFFDADCu; // 80350A84
  c->lr=0x80350A8Cu; f_803A7040(c); // 80350A88
  cmps(c,0,(int32_t)c->r[3],0); // 80350A8C
  if (!crb(c,2)) { goto L_80350AA4; } // 80350A90
  c->r[3]=c->r[30]|c->r[30]; // 80350A94
  c->r[4]=c->r[13]+0xFFFFDAE0u; // 80350A98
  c->lr=0x80350AA0u; f_803A6F10(c); // 80350A9C
  goto L_80350AE8; // 80350AA0
L_80350AA4:;
  c->r[3]=c->r[31]|c->r[31]; // 80350AA4
  c->lr=0x80350AACu; f_803ADAA8(c); // 80350AA8
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 80350AAC
  c->r[0]=c->r[4]+0x00000001u; // 80350AB0
  c->r[3]=c->r[31]+c->r[4]; // 80350AB4
  c->ctr=c->r[0]; // 80350AB8
  if (crb(c,0)) { goto L_80350AD8; } // 80350ABC
L_80350AC0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80350AC0
  cmps(c,0,(int32_t)c->r[0],47); // 80350AC4
  if (crb(c,2)) { goto L_80350AD8; } // 80350AC8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80350ACC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80350AD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80350AC0; } // 80350AD4
L_80350AD8:;
  c->r[4]=c->r[31]+c->r[4]; // 80350AD8
  c->r[3]=c->r[30]|c->r[30]; // 80350ADC
  c->r[4]=c->r[4]+0x00000001u; // 80350AE0
  c->lr=0x80350AE8u; f_803A6F10(c); // 80350AE4
L_80350AE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80350AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80350AEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80350AF0
  c->lr=c->r[0]; // 80350AF4
  c->r[1]=c->r[1]+0x00000010u; // 80350AF8
  return; // 80350AFC
}

// nandConvertPath
void f_80350B00(Ctx* __restrict c) {
  trace_call(0x80350B00u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350B00
  c->r[0]=c->lr; // 80350B04
  W32(c->r[1]+0x00000224u,c->r[0]); // 80350B08
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 80350B0C
  c->r[31]=c->r[5]|c->r[5]; // 80350B10
  W32(c->r[1]+0x00000218u,c->r[30]); // 80350B14
  c->r[30]=c->r[4]|c->r[4]; // 80350B18
  W32(c->r[1]+0x00000214u,c->r[29]); // 80350B1C
  c->r[29]=c->r[3]|c->r[3]; // 80350B20
  c->r[3]=c->r[31]|c->r[31]; // 80350B24
  c->lr=0x80350B2Cu; f_803ADAA8(c); // 80350B28
  cmps(c,0,(int32_t)c->r[3],0); // 80350B2C
  if (!crb(c,2)) { goto L_80350B44; } // 80350B30
  c->r[3]=c->r[29]|c->r[29]; // 80350B34
  c->r[4]=c->r[30]|c->r[30]; // 80350B38
  c->lr=0x80350B40u; f_803A6F10(c); // 80350B3C
  goto L_80350C20; // 80350B40
L_80350B44:;
  c->r[5]=c->r[31]|c->r[31]; // 80350B44
  c->r[3]=c->r[1]+0x00000188u; // 80350B48
  c->r[4]=c->r[1]+0x00000108u; // 80350B4C
  c->lr=0x80350B54u; f_80350994(c); // 80350B50
  c->r[3]=c->r[1]+0x00000188u; // 80350B54
  c->r[4]=c->r[13]+0xFFFFDAE4u; // 80350B58
  c->lr=0x80350B60u; f_803A7040(c); // 80350B5C
  cmps(c,0,(int32_t)c->r[3],0); // 80350B60
  if (!crb(c,2)) { goto L_80350B7C; } // 80350B64
  c->r[3]=c->r[29]|c->r[29]; // 80350B68
  c->r[4]=c->r[30]|c->r[30]; // 80350B6C
  c->r[5]=c->r[1]+0x00000108u; // 80350B70
  c->lr=0x80350B78u; f_80350B00(c); // 80350B74
  goto L_80350C20; // 80350B78
L_80350B7C:;
  c->r[3]=c->r[1]+0x00000188u; // 80350B7C
  c->r[4]=c->r[13]+0xFFFFDAE8u; // 80350B80
  c->lr=0x80350B88u; f_803A7040(c); // 80350B84
  cmps(c,0,(int32_t)c->r[3],0); // 80350B88
  if (!crb(c,2)) { goto L_80350BB0; } // 80350B8C
  c->r[4]=c->r[30]|c->r[30]; // 80350B90
  c->r[3]=c->r[1]+0x00000088u; // 80350B94
  c->lr=0x80350B9Cu; f_803508C0(c); // 80350B98
  c->r[3]=c->r[29]|c->r[29]; // 80350B9C
  c->r[4]=c->r[1]+0x00000088u; // 80350BA0
  c->r[5]=c->r[1]+0x00000108u; // 80350BA4
  c->lr=0x80350BACu; f_80350B00(c); // 80350BA8
  goto L_80350C20; // 80350BAC
L_80350BB0:;
  c->r[0]=R8(c->r[1]+0x00000188u); // 80350BB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80350BB4
  if (crb(c,2)) { goto L_80350C14; } // 80350BB8
  c->r[3]=c->r[30]|c->r[30]; // 80350BBC
  c->r[4]=c->r[13]+0xFFFFDADCu; // 80350BC0
  c->lr=0x80350BC8u; f_803A7040(c); // 80350BC4
  cmps(c,0,(int32_t)c->r[3],0); // 80350BC8
  if (!crb(c,2)) { goto L_80350BE8; } // 80350BCC
  c->r[3]=c->r[1]+0x00000008u; // 80350BD0
  c->r[5]=c->r[1]+0x00000188u; // 80350BD4
  c->r[4]=c->r[13]+0xFFFFDAECu; // 80350BD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350BDC
  c->lr=0x80350BE4u; f_803A5824(c); // 80350BE0
  goto L_80350C00; // 80350BE4
L_80350BE8:;
  c->r[5]=c->r[30]|c->r[30]; // 80350BE8
  c->r[3]=c->r[1]+0x00000008u; // 80350BEC
  c->r[6]=c->r[1]+0x00000188u; // 80350BF0
  c->r[4]=c->r[13]+0xFFFFDAF0u; // 80350BF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350BF8
  c->lr=0x80350C00u; f_803A5824(c); // 80350BFC
L_80350C00:;
  c->r[3]=c->r[29]|c->r[29]; // 80350C00
  c->r[4]=c->r[1]+0x00000008u; // 80350C04
  c->r[5]=c->r[1]+0x00000108u; // 80350C08
  c->lr=0x80350C10u; f_80350B00(c); // 80350C0C
  goto L_80350C20; // 80350C10
L_80350C14:;
  c->r[3]=c->r[29]|c->r[29]; // 80350C14
  c->r[4]=c->r[30]|c->r[30]; // 80350C18
  c->lr=0x80350C20u; f_803A6F10(c); // 80350C1C
L_80350C20:;
  c->r[0]=R32(c->r[1]+0x00000224u); // 80350C20
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 80350C24
  c->r[30]=R32(c->r[1]+0x00000218u); // 80350C28
  c->r[29]=R32(c->r[1]+0x00000214u); // 80350C2C
  c->lr=c->r[0]; // 80350C30
  c->r[1]=c->r[1]+0x00000220u; // 80350C34
  return; // 80350C38
}

// nandIsPrivatePath
void f_80350C3C(Ctx* __restrict c) {
  trace_call(0x80350C3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350C3C
  c->r[0]=c->lr; // 80350C40
  c->r[4]=0u+0x80460000u; // 80350C44
  c->r[5]=0u+0x00000008u; // 80350C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80350C4C
  c->r[4]=c->r[4]+0xFFFF9A90u; // 80350C50
  c->lr=0x80350C58u; f_803A715C(c); // 80350C54
  c->r[0]=cntlz(c->r[3]); // 80350C58
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80350C5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80350C60
  c->lr=c->r[0]; // 80350C64
  c->r[1]=c->r[1]+0x00000010u; // 80350C68
  return; // 80350C6C
}

// nandIsUnderPrivatePath
void f_80350C70(Ctx* __restrict c) {
  trace_call(0x80350C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350C70
  c->r[0]=c->lr; // 80350C74
  c->r[4]=0u+0x80460000u; // 80350C78
  c->r[5]=0u+0x00000009u; // 80350C7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80350C80
  c->r[4]=c->r[4]+0xFFFF9A9Cu; // 80350C84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80350C88
  c->r[31]=c->r[3]|c->r[3]; // 80350C8C
  c->lr=0x80350C94u; f_803A715C(c); // 80350C90
  cmps(c,0,(int32_t)c->r[3],0); // 80350C94
  if (!crb(c,2)) { goto L_80350CB0; } // 80350C98
  c->r[0]=R8(c->r[31]+0x00000009u); // 80350C9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80350CA0
  if (crb(c,2)) { goto L_80350CB0; } // 80350CA4
  c->r[3]=0u+0x00000001u; // 80350CA8
  goto L_80350CB4; // 80350CAC
L_80350CB0:;
  c->r[3]=0u+0x00000000u; // 80350CB0
L_80350CB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80350CB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80350CB8
  c->lr=c->r[0]; // 80350CBC
  c->r[1]=c->r[1]+0x00000010u; // 80350CC0
  return; // 80350CC4
}

// nandIsInitialized
void f_80350CC8(Ctx* __restrict c) {
  trace_call(0x80350CC8u);
  c->r[3]=R32(c->r[13]+0xFFFFEF38u); // 80350CC8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80350CCC
  c->r[0]=cntlz(c->r[0]); // 80350CD0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80350CD4
  return; // 80350CD8
}

// nandReportErrorCode
void f_80350CDC(Ctx* __restrict c) {
  trace_call(0x80350CDCu);
  return; // 80350CDC
}

// nandConvertErrorCode
void f_80350CE0(Ctx* __restrict c) {
  trace_call(0x80350CE0u);
  c->r[11]=rotl(c->r[1],0)&0x0000003Fu; // 80350CE0
  c->r[12]=c->r[1]|c->r[1]; // 80350CE4
  c->r[11]=addc(c,~c->r[11],0xFFFFFD00u,1); // 80350CE8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 80350CEC
  c->r[0]=c->lr; // 80350CF0
  c->r[4]=0u+0x80400000u; // 80350CF4
  W32(c->r[12]+0x00000004u,c->r[0]); // 80350CF8
  c->r[4]=c->r[4]+0x00005998u; // 80350CFC
  c->r[0]=0u+0x00000029u; // 80350D00
  c->r[6]=c->r[1]+0x0000013Cu; // 80350D04
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 80350D08
  c->r[31]=0u+0x80460000u; // 80350D0C
  c->r[31]=c->r[31]+0xFFFF99E0u; // 80350D10
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80350D14
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 80350D18
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 80350D1C
  c->r[29]=c->r[3]|c->r[3]; // 80350D20
  c->ctr=c->r[0]; // 80350D24
L_80350D28:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80350D28
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80350D2C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80350D30
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80350D34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80350D28; } // 80350D38
  cmps(c,0,(int32_t)c->r[3],0); // 80350D3C
  c->r[30]=0u+0x00000000u; // 80350D40
  c->r[4]=0u+0x00000000u; // 80350D44
  if (crb(c,0)) { goto L_80350D54; } // 80350D48
  c->r[3]=c->r[29]|c->r[29]; // 80350D4C
  goto L_80350E20; // 80350D50
L_80350D54:;
  c->r[0]=0u+0x00000029u; // 80350D54
  c->r[5]=c->r[1]+0x00000140u; // 80350D58
  c->ctr=c->r[0]; // 80350D5C
L_80350D60:;
  c->r[0]=R32(c->r[5]+c->r[4]); // 80350D60
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80350D64
  if (!crb(c,2)) { goto L_80350DD4; } // 80350D68
  cmps(c,0,(int32_t)c->r[3],-114); // 80350D6C
  if (crb(c,2)) { goto L_80350D94; } // 80350D70
  cmps(c,0,(int32_t)c->r[3],-116); // 80350D74
  if (crb(c,2)) { goto L_80350D94; } // 80350D78
  cmps(c,0,(int32_t)c->r[3],-117); // 80350D7C
  if (crb(c,2)) { goto L_80350D94; } // 80350D80
  cmps(c,0,(int32_t)c->r[3],-9); // 80350D84
  if (crb(c,2)) { goto L_80350D94; } // 80350D88
  cmps(c,0,(int32_t)c->r[3],-12); // 80350D8C
  if (!crb(c,2)) { goto L_80350DB8; } // 80350D90
L_80350D94:;
  c->r[5]=c->r[29]|c->r[29]; // 80350D94
  c->r[3]=c->r[1]+0x000000C0u; // 80350D98
  c->r[4]=c->r[31]+0x000000C8u; // 80350D9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350DA0
  c->lr=0x80350DA8u; f_803A5824(c); // 80350DA4
  c->r[4]=c->r[1]+0x000000C0u; // 80350DA8
  c->r[3]=0u+0x00000000u; // 80350DAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350DB0
  c->lr=0x80350DB8u; f_80351B24(c); // 80350DB4
L_80350DB8:;
  c->r[3]=c->r[29]|c->r[29]; // 80350DB8
  c->lr=0x80350DC0u; f_80350CDC(c); // 80350DBC
  c->r[0]=c->r[30]+0x00000001u; // 80350DC0
  c->r[3]=c->r[1]+0x00000140u; // 80350DC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80350DC8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80350DCC
  goto L_80350E20; // 80350DD0
L_80350DD4:;
  c->r[30]=c->r[30]+0x00000002u; // 80350DD4
  c->r[4]=c->r[4]+0x00000008u; // 80350DD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80350D60; } // 80350DDC
  c->r[4]=c->r[29]|c->r[29]; // 80350DE0
  c->r[3]=c->r[31]+0x000000DCu; // 80350DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350DE8
  c->lr=0x80350DF0u; f_8031E9FC(c); // 80350DEC
  c->r[5]=c->r[29]|c->r[29]; // 80350DF0
  c->r[3]=c->r[1]+0x00000040u; // 80350DF4
  c->r[4]=c->r[31]+0x00000110u; // 80350DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350DFC
  c->lr=0x80350E04u; f_803A5824(c); // 80350E00
  c->r[4]=c->r[1]+0x00000040u; // 80350E04
  c->r[3]=0u+0x00000000u; // 80350E08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80350E0C
  c->lr=0x80350E14u; f_80351B24(c); // 80350E10
  c->r[3]=c->r[29]|c->r[29]; // 80350E14
  c->lr=0x80350E1Cu; f_80350CDC(c); // 80350E18
  c->r[3]=0u+0xFFFFFFC0u; // 80350E1C
L_80350E20:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 80350E20
  c->r[0]=R32(c->r[10]+0x00000004u); // 80350E24
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 80350E28
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 80350E2C
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 80350E30
  c->lr=c->r[0]; // 80350E34
  c->r[1]=c->r[10]|c->r[10]; // 80350E38
  return; // 80350E3C
}

// nandGenerateAbsPath
void f_80350E40(Ctx* __restrict c) {
  trace_call(0x80350E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350E40
  c->r[0]=c->lr; // 80350E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80350E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80350E4C
  c->r[31]=c->r[4]|c->r[4]; // 80350E50
  W32(c->r[1]+0x00000008u,c->r[30]); // 80350E54
  c->r[30]=c->r[3]|c->r[3]; // 80350E58
  c->r[3]=c->r[31]|c->r[31]; // 80350E5C
  c->lr=0x80350E64u; f_803ADAA8(c); // 80350E60
  cmps(c,0,(int32_t)c->r[3],0); // 80350E64
  if (!crb(c,2)) { goto L_80350E7C; } // 80350E68
  c->r[3]=c->r[30]|c->r[30]; // 80350E6C
  c->r[4]=c->r[13]+0xFFFFDAE0u; // 80350E70
  c->lr=0x80350E78u; f_803A6F10(c); // 80350E74
  goto L_80350EF0; // 80350E78
L_80350E7C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80350E7C
  cmps(c,0,(int32_t)c->r[0],47); // 80350E80
  if (!crb(c,2)) { goto L_80350E90; } // 80350E84
  c->r[0]=0u+0x00000000u; // 80350E88
  goto L_80350E94; // 80350E8C
L_80350E90:;
  c->r[0]=0u+0x00000001u; // 80350E90
L_80350E94:;
  cmps(c,0,(int32_t)c->r[0],0); // 80350E94
  if (crb(c,2)) { goto L_80350EB4; } // 80350E98
  c->r[4]=0u+0x80460000u; // 80350E9C
  c->r[3]=c->r[30]|c->r[30]; // 80350EA0
  c->r[5]=c->r[31]|c->r[31]; // 80350EA4
  c->r[4]=c->r[4]+0xFFFF9A40u; // 80350EA8
  c->lr=0x80350EB0u; f_80350B00(c); // 80350EAC
  goto L_80350EF0; // 80350EB0
L_80350EB4:;
  c->r[3]=c->r[30]|c->r[30]; // 80350EB4
  c->r[4]=c->r[31]|c->r[31]; // 80350EB8
  c->lr=0x80350EC0u; f_803A6F10(c); // 80350EBC
  c->r[3]=c->r[30]|c->r[30]; // 80350EC0
  c->lr=0x80350EC8u; f_803ADAA8(c); // 80350EC4
  cmps(c,0,(int32_t)c->r[3],0); // 80350EC8
  if (crb(c,2)) { goto L_80350EF0; } // 80350ECC
  c->r[4]=c->r[3]+c->r[30]; // 80350ED0
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 80350ED4
  cmps(c,0,(int32_t)c->r[0],47); // 80350ED8
  if (!crb(c,2)) { goto L_80350EF0; } // 80350EDC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80350EE0
  if (crb(c,2)) { goto L_80350EF0; } // 80350EE4
  c->r[0]=0u+0x00000000u; // 80350EE8
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 80350EEC
L_80350EF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80350EF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80350EF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80350EF8
  c->lr=c->r[0]; // 80350EFC
  c->r[1]=c->r[1]+0x00000010u; // 80350F00
  return; // 80350F04
}

// nandGetParentDirectory
void f_80350F08(Ctx* __restrict c) {
  trace_call(0x80350F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350F08
  c->r[0]=c->lr; // 80350F0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80350F10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80350F14
  W32(c->r[1]+0x00000018u,c->r[30]); // 80350F18
  c->r[30]=c->r[4]|c->r[4]; // 80350F1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80350F20
  c->r[29]=c->r[3]|c->r[3]; // 80350F24
  c->r[3]=c->r[30]|c->r[30]; // 80350F28
  c->lr=0x80350F30u; f_803ADAA8(c); // 80350F2C
  c->r[0]=c->r[3]+0x00000001u; // 80350F30
  c->r[31]=c->r[3]|c->r[3]; // 80350F34
  c->r[4]=c->r[30]+c->r[3]; // 80350F38
  c->ctr=c->r[0]; // 80350F3C
  cmps(c,0,(int32_t)c->r[3],0); // 80350F40
  if (crb(c,0)) { goto L_80350F60; } // 80350F44
L_80350F48:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80350F48
  cmps(c,0,(int32_t)c->r[0],47); // 80350F4C
  if (crb(c,2)) { goto L_80350F60; } // 80350F50
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80350F54
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80350F58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80350F48; } // 80350F5C
L_80350F60:;
  cmps(c,0,(int32_t)c->r[31],0); // 80350F60
  if (!crb(c,2)) { goto L_80350F78; } // 80350F64
  c->r[3]=c->r[29]|c->r[29]; // 80350F68
  c->r[4]=c->r[13]+0xFFFFDADCu; // 80350F6C
  c->lr=0x80350F74u; f_803A6F10(c); // 80350F70
  goto L_80350F90; // 80350F74
L_80350F78:;
  c->r[3]=c->r[29]|c->r[29]; // 80350F78
  c->r[4]=c->r[30]|c->r[30]; // 80350F7C
  c->r[5]=c->r[31]|c->r[31]; // 80350F80
  c->lr=0x80350F88u; f_803A6FD0(c); // 80350F84
  c->r[0]=0u+0x00000000u; // 80350F88
  W8(c->r[29]+c->r[31],c->r[0]); // 80350F8C
L_80350F90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80350F90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80350F94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80350F98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80350F9C
  c->lr=c->r[0]; // 80350FA0
  c->r[1]=c->r[1]+0x00000020u; // 80350FA4
  return; // 80350FA8
}

// NANDInit
void f_80350FAC(Ctx* __restrict c) {
  trace_call(0x80350FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80350FAC
  c->r[0]=c->lr; // 80350FB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80350FB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80350FB8
  c->r[31]=0u+0x80460000u; // 80350FBC
  c->r[31]=c->r[31]+0xFFFF99E0u; // 80350FC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80350FC4
  c->lr=0x80350FCCu; f_8032269C(c); // 80350FC8
  c->r[0]=R32(c->r[13]+0xFFFFEF38u); // 80350FCC
  cmps(c,0,(int32_t)c->r[0],1); // 80350FD0
  if (!crb(c,2)) { goto L_80350FE4; } // 80350FD4
  c->lr=0x80350FDCu; f_803226C4(c); // 80350FD8
  c->r[3]=0u+0xFFFFFFFDu; // 80350FDC
  goto L_803510C0; // 80350FE0
L_80350FE4:;
  cmps(c,0,(int32_t)c->r[0],2); // 80350FE4
  if (!crb(c,2)) { goto L_80350FF8; } // 80350FE8
  c->lr=0x80350FF0u; f_803226C4(c); // 80350FEC
  c->r[3]=0u+0x00000000u; // 80350FF0
  goto L_803510C0; // 80350FF4
L_80350FF8:;
  c->r[0]=0u+0x00000001u; // 80350FF8
  W32(c->r[13]+0xFFFFEF38u,c->r[0]); // 80350FFC
  c->lr=0x80351004u; f_803226C4(c); // 80351000
  c->lr=0x80351008u; f_8034B6B8(c); // 80351004
  cmps(c,0,(int32_t)c->r[3],0); // 80351008
  c->r[30]=c->r[3]|c->r[3]; // 8035100C
  if (!crb(c,2)) { goto L_803510A8; } // 80351010
  c->lr=0x80351018u; f_80404338(c); // 80351014
  cmps(c,0,(int32_t)c->r[3],0); // 80351018
  c->r[30]=c->r[3]|c->r[3]; // 8035101C
  if (!crb(c,2)) { goto L_80351030; } // 80351020
  c->r[3]=c->r[1]+0x00000008u; // 80351024
  c->lr=0x8035102Cu; f_804048C0(c); // 80351028
  c->r[30]=c->r[3]|c->r[3]; // 8035102C
L_80351030:;
  cmps(c,0,(int32_t)c->r[30],0); // 80351030
  if (!crb(c,2)) { goto L_80351050; } // 80351034
  c->r[5]=0u+0x80530000u; // 80351038
  c->r[3]=R32(c->r[1]+0x00000008u); // 8035103C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80351040
  c->r[5]=c->r[5]+0xFFFF9200u; // 80351044
  c->lr=0x8035104Cu; f_80404828(c); // 80351048
  c->r[30]=c->r[3]|c->r[3]; // 8035104C
L_80351050:;
  cmps(c,0,(int32_t)c->r[30],0); // 80351050
  if (!crb(c,2)) { goto L_80351068; } // 80351054
  c->r[4]=0u+0x80530000u; // 80351058
  c->r[3]=c->r[31]+0x00000060u; // 8035105C
  c->r[4]=c->r[4]+0xFFFF9200u; // 80351060
  c->lr=0x80351068u; f_803A6F10(c); // 80351064
L_80351068:;
  c->lr=0x8035106Cu; f_8040438C(c); // 80351068
  cmps(c,0,(int32_t)c->r[30],0); // 8035106C
  if (crb(c,2)) { goto L_80351080; } // 80351070
  c->r[3]=c->r[31]+0x00000130u; // 80351074
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80351078
  c->lr=0x80351080u; f_8031E9FC(c); // 8035107C
L_80351080:;
  c->r[3]=c->r[31]+0x000000A0u; // 80351080
  c->lr=0x80351088u; f_80323CB8(c); // 80351084
  c->lr=0x8035108Cu; f_8032269C(c); // 80351088
  c->r[0]=0u+0x00000002u; // 8035108C
  W32(c->r[13]+0xFFFFEF38u,c->r[0]); // 80351090
  c->lr=0x80351098u; f_803226C4(c); // 80351094
  c->r[3]=R32(c->r[13]+0xFFFFDAD8u); // 80351098
  c->lr=0x803510A0u; f_8031CABC(c); // 8035109C
  c->r[3]=0u+0x00000000u; // 803510A0
  goto L_803510C0; // 803510A4
L_803510A8:;
  c->lr=0x803510ACu; f_8032269C(c); // 803510A8
  c->r[0]=0u+0x00000000u; // 803510AC
  W32(c->r[13]+0xFFFFEF38u,c->r[0]); // 803510B0
  c->lr=0x803510B8u; f_803226C4(c); // 803510B4
  c->r[3]=c->r[30]|c->r[30]; // 803510B8
  c->lr=0x803510C0u; f_80350CE0(c); // 803510BC
L_803510C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803510C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803510C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803510C8
  c->lr=c->r[0]; // 803510CC
  c->r[1]=c->r[1]+0x00000020u; // 803510D0
  return; // 803510D4
}

// nandOnShutdown
void f_803510D8(Ctx* __restrict c) {
  trace_call(0x803510D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803510D8
  c->r[0]=c->lr; // 803510DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803510E0
  c->r[11]=c->r[1]+0x00000030u; // 803510E4
  c->lr=0x803510ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803510E8
  cmps(c,0,(int32_t)c->r[3],0); // 803510EC
  if (!crb(c,2)) { goto L_80351188; } // 803510F0
  cmpu(c,0,c->r[4],0x00000002u); // 803510F4
  if (!crb(c,2)) { goto L_80351180; } // 803510F8
  c->r[26]=0u+0x00000000u; // 803510FC
  W32(c->r[1]+0x00000008u,c->r[26]); // 80351100
  c->lr=0x80351108u; f_803264C8(c); // 80351104
  c->r[5]=0u+0x80350000u; // 80351108
  c->r[27]=c->r[4]|c->r[4]; // 8035110C
  c->r[28]=c->r[3]|c->r[3]; // 80351110
  c->r[4]=c->r[1]+0x00000008u; // 80351114
  c->r[3]=c->r[5]+0x000011A4u; // 80351118
  c->lr=0x80351120u; f_8034CB7C(c); // 8035111C
  c->r[3]=0u+0x10620000u; // 80351120
  c->r[30]=0u+0x80000000u; // 80351124
  c->r[29]=c->r[3]+0x00004DD3u; // 80351128
  c->r[31]=0u+0x000001F4u; // 8035112C
  goto L_80351140; // 80351130
L_80351134:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80351134
  cmps(c,0,(int32_t)c->r[0],0); // 80351138
  if (!crb(c,2)) { goto L_80351180; } // 8035113C
L_80351140:;
  c->lr=0x80351144u; f_803264C8(c); // 80351140
  c->r[0]=R32(c->r[30]+0x000000F8u); // 80351144
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 80351148
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 8035114C
  c->r[5]=0u+0x00000000u; // 80351150
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80351154
  c->r[0]=(uint32_t)(((uint64_t)c->r[29]*(uint64_t)c->r[0])>>32); // 80351158
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 8035115C
  c->lr=0x80351164u; f_803ADE8C(c); // 80351160
  c->r[0]=c->r[3]^0x80000000u; // 80351164
  c->r[5]=c->r[26]^0x80000000u; // 80351168
  c->r[3]=addc(c,~c->r[31],c->r[4],1); // 8035116C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80351170
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80351174
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80351178
  if (!crb(c,2)) { IRQCHK(c); goto L_80351134; } // 8035117C
L_80351180:;
  c->r[3]=0u+0x00000001u; // 80351180
  goto L_8035118C; // 80351184
L_80351188:;
  c->r[3]=0u+0x00000001u; // 80351188
L_8035118C:;
  c->r[11]=c->r[1]+0x00000030u; // 8035118C
  c->lr=0x80351194u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80351190
  c->r[0]=R32(c->r[1]+0x00000034u); // 80351194
  c->lr=c->r[0]; // 80351198
  c->r[1]=c->r[1]+0x00000030u; // 8035119C
  return; // 803511A0
}

// nandShutdownCallback
void f_803511A4(Ctx* __restrict c) {
  trace_call(0x803511A4u);
  c->r[0]=0u+0x00000001u; // 803511A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 803511A8
  return; // 803511AC
}

// fn_803511B0
void f_803511B0(Ctx* __restrict c) {
  trace_call(0x803511B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803511B0
  c->r[0]=c->lr; // 803511B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803511B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803511BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803511C0
  c->r[30]=c->r[3]|c->r[3]; // 803511C4
  c->r[0]=R32(c->r[13]+0xFFFFEF38u); // 803511C8
  cmps(c,0,(int32_t)c->r[0],2); // 803511CC
  if (!crb(c,2)) { goto L_803511DC; } // 803511D0
  c->r[0]=0u+0x00000001u; // 803511D4
  goto L_803511E0; // 803511D8
L_803511DC:;
  c->r[0]=0u+0x00000000u; // 803511DC
L_803511E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 803511E0
  if (!crb(c,2)) { goto L_803511F0; } // 803511E4
  c->r[3]=0u+0xFFFFFF80u; // 803511E8
  goto L_80351214; // 803511EC
L_803511F0:;
  c->lr=0x803511F4u; f_8032269C(c); // 803511F0
  c->r[4]=0u+0x80460000u; // 803511F4
  c->r[31]=c->r[3]|c->r[3]; // 803511F8
  c->r[3]=c->r[30]|c->r[30]; // 803511FC
  c->r[4]=c->r[4]+0xFFFF9A40u; // 80351200
  c->lr=0x80351208u; f_803A6F10(c); // 80351204
  c->r[3]=c->r[31]|c->r[31]; // 80351208
  c->lr=0x80351210u; f_803226C4(c); // 8035120C
  c->r[3]=0u+0x00000000u; // 80351210
L_80351214:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80351214
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80351218
  c->r[30]=R32(c->r[1]+0x00000008u); // 8035121C
  c->lr=c->r[0]; // 80351220
  c->r[1]=c->r[1]+0x00000010u; // 80351224
  return; // 80351228
}

// NANDGetHomeDir
void f_8035122C(Ctx* __restrict c) {
  trace_call(0x8035122Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035122C
  c->r[0]=c->lr; // 80351230
  W32(c->r[1]+0x00000014u,c->r[0]); // 80351234
  c->r[0]=R32(c->r[13]+0xFFFFEF38u); // 80351238
  cmps(c,0,(int32_t)c->r[0],2); // 8035123C
  if (!crb(c,2)) { goto L_8035124C; } // 80351240
  c->r[0]=0u+0x00000001u; // 80351244
  goto L_80351250; // 80351248
L_8035124C:;
  c->r[0]=0u+0x00000000u; // 8035124C
L_80351250:;
  cmps(c,0,(int32_t)c->r[0],0); // 80351250
  if (!crb(c,2)) { goto L_80351260; } // 80351254
  c->r[3]=0u+0xFFFFFF80u; // 80351258
  goto L_80351270; // 8035125C
L_80351260:;
  c->r[4]=0u+0x80530000u; // 80351260
  c->r[4]=c->r[4]+0xFFFF9200u; // 80351264
  c->lr=0x8035126Cu; f_803A6F10(c); // 80351268
  c->r[3]=0u+0x00000000u; // 8035126C
L_80351270:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80351270
  c->lr=c->r[0]; // 80351274
  c->r[1]=c->r[1]+0x00000010u; // 80351278
  return; // 8035127C
}

// nandCallback
void f_80351280(Ctx* __restrict c) {
  trace_call(0x80351280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80351280
  c->r[0]=c->lr; // 80351284
  W32(c->r[1]+0x00000014u,c->r[0]); // 80351288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8035128C
  c->r[31]=c->r[4]|c->r[4]; // 80351290
  c->lr=0x80351298u; f_80350CE0(c); // 80351294
  c->r[12]=R32(c->r[31]+0x00000004u); // 80351298
  c->r[4]=c->r[31]|c->r[31]; // 8035129C
  c->ctr=c->r[12]; // 803512A0
  if (true) { c->lr=0x803512A8u; dispatch(c,c->ctr); } // 803512A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803512A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803512AC
  c->lr=c->r[0]; // 803512B0
  c->r[1]=c->r[1]+0x00000010u; // 803512B4
  return; // 803512B8
}

// nandGetType
void f_803512BC(Ctx* __restrict c) {
  trace_call(0x803512BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803512BC
  c->r[0]=c->lr; // 803512C0
  W32(c->r[1]+0x00000074u,c->r[0]); // 803512C4
  c->r[11]=c->r[1]+0x00000070u; // 803512C8
  c->lr=0x803512D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803512CC
  c->r[27]=c->r[3]|c->r[3]; // 803512D0
  c->r[30]=c->r[4]|c->r[4]; // 803512D4
  c->r[28]=c->r[5]|c->r[5]; // 803512D8
  c->r[29]=c->r[6]|c->r[6]; // 803512DC
  c->r[31]=c->r[7]|c->r[7]; // 803512E0
  c->lr=0x803512E8u; f_803ADAA8(c); // 803512E4
  cmps(c,0,(int32_t)c->r[3],0); // 803512E8
  if (!crb(c,2)) { goto L_803512F8; } // 803512EC
  c->r[3]=0u+0xFFFFFF9Bu; // 803512F0
  goto L_80351578; // 803512F4
L_803512F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 803512F8
  if (crb(c,2)) { goto L_80351404; } // 803512FC
  c->r[3]=c->r[27]|c->r[27]; // 80351300
  c->lr=0x80351308u; f_803ADAA8(c); // 80351304
  cmps(c,0,(int32_t)c->r[3],0); // 80351308
  if (!crb(c,2)) { goto L_80351320; } // 8035130C
  c->r[3]=c->r[28]+0x00000034u; // 80351310
  c->r[4]=c->r[13]+0xFFFFDAE0u; // 80351314
  c->lr=0x8035131Cu; f_803A6F10(c); // 80351318
  goto L_80351394; // 8035131C
L_80351320:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80351320
  cmps(c,0,(int32_t)c->r[0],47); // 80351324
  if (!crb(c,2)) { goto L_80351334; } // 80351328
  c->r[0]=0u+0x00000000u; // 8035132C
  goto L_80351338; // 80351330
L_80351334:;
  c->r[0]=0u+0x00000001u; // 80351334
L_80351338:;
  cmps(c,0,(int32_t)c->r[0],0); // 80351338
  if (crb(c,2)) { goto L_80351358; } // 8035133C
  c->r[4]=0u+0x80460000u; // 80351340
  c->r[5]=c->r[27]|c->r[27]; // 80351344
  c->r[3]=c->r[28]+0x00000034u; // 80351348
  c->r[4]=c->r[4]+0xFFFF9A40u; // 8035134C
  c->lr=0x80351354u; f_80350B00(c); // 80351350
  goto L_80351394; // 80351354
L_80351358:;
  c->r[4]=c->r[27]|c->r[27]; // 80351358
  c->r[3]=c->r[28]+0x00000034u; // 8035135C
  c->lr=0x80351364u; f_803A6F10(c); // 80351360
  c->r[3]=c->r[28]+0x00000034u; // 80351364
  c->lr=0x8035136Cu; f_803ADAA8(c); // 80351368
  cmps(c,0,(int32_t)c->r[3],0); // 8035136C
  if (crb(c,2)) { goto L_80351394; } // 80351370
  c->r[4]=c->r[3]+c->r[28]; // 80351374
  c->r[0]=R8(c->r[4]+0x00000033u); // 80351378
  cmps(c,0,(int32_t)c->r[0],47); // 8035137C
  if (!crb(c,2)) { goto L_80351394; } // 80351380
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80351384
  if (crb(c,2)) { goto L_80351394; } // 80351388
  c->r[0]=0u+0x00000000u; // 8035138C
  W8(c->r[4]+0x00000033u,c->r[0]); // 80351390
L_80351394:;
  cmps(c,0,(int32_t)c->r[31],0); // 80351394
  if (!crb(c,2)) { goto L_803513E0; } // 80351398
  c->r[4]=0u+0x80460000u; // 8035139C
  c->r[3]=c->r[28]+0x00000034u; // 803513A0
  c->r[4]=c->r[4]+0xFFFF9A9Cu; // 803513A4
  c->r[5]=0u+0x00000009u; // 803513A8
  c->lr=0x803513B0u; f_803A715C(c); // 803513AC
  cmps(c,0,(int32_t)c->r[3],0); // 803513B0
  if (!crb(c,2)) { goto L_803513CC; } // 803513B4
  c->r[0]=R8(c->r[28]+0x0000003Du); // 803513B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803513BC
  if (crb(c,2)) { goto L_803513CC; } // 803513C0
  c->r[0]=0u+0x00000001u; // 803513C4
  goto L_803513D0; // 803513C8
L_803513CC:;
  c->r[0]=0u+0x00000000u; // 803513CC
L_803513D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 803513D0
  if (crb(c,2)) { goto L_803513E0; } // 803513D4
  c->r[3]=0u+0xFFFFFF9Au; // 803513D8
  goto L_80351578; // 803513DC
L_803513E0:;
  c->r[6]=0u+0x80350000u; // 803513E0
  W32(c->r[28]+0x00000088u,c->r[30]); // 803513E4
  c->r[7]=c->r[28]|c->r[28]; // 803513E8
  c->r[3]=c->r[28]+0x00000034u; // 803513EC
  c->r[5]=c->r[28]+0x00000030u; // 803513F0
  c->r[6]=c->r[6]+0x000015D8u; // 803513F4
  c->r[4]=0u+0x00000000u; // 803513F8
  c->lr=0x80351400u; f_8034BC9C(c); // 803513FC
  goto L_80351578; // 80351400
L_80351404:;
  c->r[0]=0u+0x00000000u; // 80351404
  c->r[3]=c->r[27]|c->r[27]; // 80351408
  W32(c->r[1]+0x00000010u,c->r[0]); // 8035140C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80351410
  W32(c->r[1]+0x00000018u,c->r[0]); // 80351414
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80351418
  W32(c->r[1]+0x00000020u,c->r[0]); // 8035141C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80351420
  W32(c->r[1]+0x00000028u,c->r[0]); // 80351424
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80351428
  W32(c->r[1]+0x00000030u,c->r[0]); // 8035142C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80351430
  W32(c->r[1]+0x00000038u,c->r[0]); // 80351434
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80351438
  W32(c->r[1]+0x00000040u,c->r[0]); // 8035143C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80351440
  W32(c->r[1]+0x00000048u,c->r[0]); // 80351444
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80351448
  c->lr=0x80351450u; f_803ADAA8(c); // 8035144C
  cmps(c,0,(int32_t)c->r[3],0); // 80351450
  if (!crb(c,2)) { goto L_80351468; } // 80351454
  c->r[3]=c->r[1]+0x00000010u; // 80351458
  c->r[4]=c->r[13]+0xFFFFDAE0u; // 8035145C
  c->lr=0x80351464u; f_803A6F10(c); // 80351460
  goto L_803514E0; // 80351464
L_80351468:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80351468
  cmps(c,0,(int32_t)c->r[0],47); // 8035146C
  if (!crb(c,2)) { goto L_8035147C; } // 80351470
  c->r[0]=0u+0x00000000u; // 80351474
  goto L_80351480; // 80351478
L_8035147C:;
  c->r[0]=0u+0x00000001u; // 8035147C
L_80351480:;
  cmps(c,0,(int32_t)c->r[0],0); // 80351480
  if (crb(c,2)) { goto L_803514A0; } // 80351484
  c->r[4]=0u+0x80460000u; // 80351488
  c->r[5]=c->r[27]|c->r[27]; // 8035148C
  c->r[3]=c->r[1]+0x00000010u; // 80351490
  c->r[4]=c->r[4]+0xFFFF9A40u; // 80351494
  c->lr=0x8035149Cu; f_80350B00(c); // 80351498
  goto L_803514E0; // 8035149C
L_803514A0:;
  c->r[4]=c->r[27]|c->r[27]; // 803514A0
  c->r[3]=c->r[1]+0x00000010u; // 803514A4
  c->lr=0x803514ACu; f_803A6F10(c); // 803514A8
  c->r[3]=c->r[1]+0x00000010u; // 803514AC
  c->lr=0x803514B4u; f_803ADAA8(c); // 803514B0
  cmps(c,0,(int32_t)c->r[3],0); // 803514B4
  if (crb(c,2)) { goto L_803514E0; } // 803514B8
  c->r[0]=c->r[1]+0x00000010u; // 803514BC
  c->r[4]=c->r[3]+c->r[0]; // 803514C0
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 803514C4
  cmps(c,0,(int32_t)c->r[0],47); // 803514C8
  if (!crb(c,2)) { goto L_803514E0; } // 803514CC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 803514D0
  if (crb(c,2)) { goto L_803514E0; } // 803514D4
  c->r[0]=0u+0x00000000u; // 803514D8
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 803514DC
L_803514E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803514E0
  if (!crb(c,2)) { goto L_8035152C; } // 803514E4
  c->r[4]=0u+0x80460000u; // 803514E8
  c->r[3]=c->r[1]+0x00000010u; // 803514EC
  c->r[4]=c->r[4]+0xFFFF9A9Cu; // 803514F0
  c->r[5]=0u+0x00000009u; // 803514F4
  c->lr=0x803514FCu; f_803A715C(c); // 803514F8
  cmps(c,0,(int32_t)c->r[3],0); // 803514FC
  if (!crb(c,2)) { goto L_80351518; } // 80351500
  c->r[0]=R8(c->r[1]+0x00000019u); // 80351504
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80351508
  if (crb(c,2)) { goto L_80351518; } // 8035150C
  c->r[0]=0u+0x00000001u; // 80351510
  goto L_8035151C; // 80351514
L_80351518:;
  c->r[0]=0u+0x00000000u; // 80351518
L_8035151C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8035151C
  if (crb(c,2)) { goto L_8035152C; } // 80351520
  c->r[3]=0u+0xFFFFFF9Au; // 80351524
  goto L_80351578; // 80351528
L_8035152C:;
  c->r[0]=0u+0x00000000u; // 8035152C
  c->r[3]=c->r[1]+0x00000010u; // 80351530
  W32(c->r[1]+0x00000008u,c->r[0]); // 80351534
  c->r[5]=c->r[1]+0x00000008u; // 80351538
  c->r[4]=0u+0x00000000u; // 8035153C
  c->lr=0x80351544u; f_8034BB48(c); // 80351540
  cmps(c,0,(int32_t)c->r[3],0); // 80351544
  if (crb(c,2)) { goto L_80351554; } // 80351548
  cmps(c,0,(int32_t)c->r[3],-102); // 8035154C
  if (!crb(c,2)) { goto L_80351564; } // 80351550
L_80351554:;
  c->r[0]=0u+0x00000002u; // 80351554
  c->r[3]=0u+0x00000000u; // 80351558
  W8(c->r[30]+0x00000000u,c->r[0]); // 8035155C
  goto L_80351578; // 80351560
L_80351564:;
  cmps(c,0,(int32_t)c->r[3],-101); // 80351564
  if (!crb(c,2)) { goto L_80351578; } // 80351568
  c->r[0]=0u+0x00000001u; // 8035156C
  c->r[3]=0u+0x00000000u; // 80351570
  W8(c->r[30]+0x00000000u,c->r[0]); // 80351574
L_80351578:;
  c->r[11]=c->r[1]+0x00000070u; // 80351578
  c->lr=0x80351580u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8035157C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80351580
  c->lr=c->r[0]; // 80351584
  c->r[1]=c->r[1]+0x00000070u; // 80351588
  return; // 8035158C
}

// NANDPrivateGetTypeAsync
void f_80351590(Ctx* __restrict c) {
  trace_call(0x80351590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80351590
  c->r[0]=c->lr; // 80351594
  W32(c->r[1]+0x00000014u,c->r[0]); // 80351598
  c->r[0]=R32(c->r[13]+0xFFFFEF38u); // 8035159C
  cmps(c,0,(int32_t)c->r[0],2); // 803515A0
  if (crb(c,2)) { goto L_803515B0; } // 803515A4
  c->r[3]=0u+0xFFFFFF80u; // 803515A8
  goto L_803515C8; // 803515AC
L_803515B0:;
  W32(c->r[6]+0x00000004u,c->r[5]); // 803515B0
  c->r[5]=c->r[6]|c->r[6]; // 803515B4
  c->r[6]=0u+0x00000001u; // 803515B8
  c->r[7]=0u+0x00000001u; // 803515BC
  c->lr=0x803515C4u; f_803512BC(c); // 803515C0
  c->lr=0x803515C8u; f_80350CE0(c); // 803515C4
L_803515C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803515C8
  c->lr=c->r[0]; // 803515CC
  c->r[1]=c->r[1]+0x00000010u; // 803515D0
  return; // 803515D4
}

// nandGetTypeCallback
void f_803515D8(Ctx* __restrict c) {
  trace_call(0x803515D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803515D8
  c->r[0]=c->lr; // 803515DC
  cmps(c,0,(int32_t)c->r[3],0); // 803515E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803515E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803515E8
  c->r[31]=c->r[4]|c->r[4]; // 803515EC
  if (crb(c,2)) { goto L_803515FC; } // 803515F0
  cmps(c,0,(int32_t)c->r[3],-102); // 803515F4
  if (!crb(c,2)) { goto L_80351610; } // 803515F8
L_803515FC:;
  c->r[4]=R32(c->r[4]+0x00000088u); // 803515FC
  c->r[0]=0u+0x00000002u; // 80351600
  c->r[3]=0u+0x00000000u; // 80351604
  W8(c->r[4]+0x00000000u,c->r[0]); // 80351608
  goto L_80351628; // 8035160C
L_80351610:;
  cmps(c,0,(int32_t)c->r[3],-101); // 80351610
  if (!crb(c,2)) { goto L_80351628; } // 80351614
  c->r[4]=R32(c->r[4]+0x00000088u); // 80351618
  c->r[0]=0u+0x00000001u; // 8035161C
  c->r[3]=0u+0x00000000u; // 80351620
  W8(c->r[4]+0x00000000u,c->r[0]); // 80351624
L_80351628:;
  c->lr=0x8035162Cu; f_80350CE0(c); // 80351628
  c->r[12]=R32(c->r[31]+0x00000004u); // 8035162C
  c->r[4]=c->r[31]|c->r[31]; // 80351630
  c->ctr=c->r[12]; // 80351634
  if (true) { c->lr=0x8035163Cu; dispatch(c,c->ctr); } // 80351638
  c->r[0]=R32(c->r[1]+0x00000014u); // 8035163C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80351640
  c->lr=c->r[0]; // 80351644
  c->r[1]=c->r[1]+0x00000010u; // 80351648
  return; // 8035164C
}

// nandGetHomeDir
void f_80351650(Ctx* __restrict c) {
  trace_call(0x80351650u);
  c->r[3]=0u+0x80530000u; // 80351650
  c->r[3]=c->r[3]+0xFFFF9200u; // 80351654
  return; // 80351658
}

// NANDInitBanner
void f_8035165C(Ctx* __restrict c) {
  trace_call(0x8035165Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035165C
  c->r[0]=c->lr; // 80351660
  c->r[7]=0u+0x00010000u; // 80351664
  W32(c->r[1]+0x00000024u,c->r[0]); // 80351668
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8035166C
  c->r[31]=c->r[6]|c->r[6]; // 80351670
  W32(c->r[1]+0x00000018u,c->r[30]); // 80351674
  c->r[30]=c->r[5]|c->r[5]; // 80351678
  c->r[5]=c->r[7]+0xFFFFF0A0u; // 8035167C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80351680
  c->r[29]=c->r[4]|c->r[4]; // 80351684
  c->r[4]=0u+0x00000000u; // 80351688
  W32(c->r[1]+0x00000010u,c->r[28]); // 8035168C
  c->r[28]=c->r[3]|c->r[3]; // 80351690
  c->lr=0x80351698u; f_80006370(c); // 80351694
  c->r[3]=0u+0x57490000u; // 80351698
  W32(c->r[28]+0x00000004u,c->r[29]); // 8035169C
  c->r[0]=c->r[3]+0x0000424Eu; // 803516A0
  c->r[4]=c->r[13]+0xFFFFDAF8u; // 803516A4
  W32(c->r[28]+0x00000000u,c->r[0]); // 803516A8
  c->r[3]=c->r[30]|c->r[30]; // 803516AC
  c->lr=0x803516B4u; f_803A9138(c); // 803516B0
  cmps(c,0,(int32_t)c->r[3],0); // 803516B4
  if (!crb(c,2)) { goto L_803516D0; } // 803516B8
  c->r[3]=c->r[28]+0x00000020u; // 803516BC
  c->r[4]=c->r[13]+0xFFFFDAFCu; // 803516C0
  c->r[5]=0u+0x00000020u; // 803516C4
  c->lr=0x803516CCu; f_803A90F4(c); // 803516C8
  goto L_803516E0; // 803516CC
L_803516D0:;
  c->r[4]=c->r[30]|c->r[30]; // 803516D0
  c->r[3]=c->r[28]+0x00000020u; // 803516D4
  c->r[5]=0u+0x00000020u; // 803516D8
  c->lr=0x803516E0u; f_803A90F4(c); // 803516DC
L_803516E0:;
  c->r[3]=c->r[31]|c->r[31]; // 803516E0
  c->r[4]=c->r[13]+0xFFFFDAF8u; // 803516E4
  c->lr=0x803516ECu; f_803A9138(c); // 803516E8
  cmps(c,0,(int32_t)c->r[3],0); // 803516EC
  if (!crb(c,2)) { goto L_80351708; } // 803516F0
  c->r[3]=c->r[28]+0x00000060u; // 803516F4
  c->r[4]=c->r[13]+0xFFFFDAFCu; // 803516F8
  c->r[5]=0u+0x00000020u; // 803516FC
  c->lr=0x80351704u; f_803A90F4(c); // 80351700
  goto L_80351718; // 80351704
L_80351708:;
  c->r[4]=c->r[31]|c->r[31]; // 80351708
  c->r[3]=c->r[28]+0x00000060u; // 8035170C
  c->r[5]=0u+0x00000020u; // 80351710
  c->lr=0x80351718u; f_803A90F4(c); // 80351714
L_80351718:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80351718
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8035171C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80351720
  c->r[29]=R32(c->r[1]+0x00000014u); // 80351724
  c->r[28]=R32(c->r[1]+0x00000010u); // 80351728
  c->lr=c->r[0]; // 8035172C
  c->r[1]=c->r[1]+0x00000020u; // 80351730
  return; // 80351734
}

// NANDSecretGetUsage
void f_80351738(Ctx* __restrict c) {
  trace_call(0x80351738u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80351738
  c->r[0]=c->lr; // 8035173C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80351740
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80351744
  c->r[31]=c->r[5]|c->r[5]; // 80351748
  W32(c->r[1]+0x00000058u,c->r[30]); // 8035174C
  c->r[30]=c->r[4]|c->r[4]; // 80351750
  W32(c->r[1]+0x00000054u,c->r[29]); // 80351754
  c->r[29]=c->r[3]|c->r[3]; // 80351758
  c->lr=0x80351760u; f_80350CC8(c); // 8035175C
  cmps(c,0,(int32_t)c->r[3],0); // 80351760
  if (!crb(c,2)) { goto L_80351770; } // 80351764
  c->r[3]=0u+0xFFFFFF80u; // 80351768
  goto L_803517D4; // 8035176C
L_80351770:;
  c->r[0]=0u+0x00000000u; // 80351770
  c->r[4]=c->r[29]|c->r[29]; // 80351774
  W32(c->r[1]+0x00000008u,c->r[0]); // 80351778
  c->r[3]=c->r[1]+0x00000008u; // 8035177C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80351780
  W32(c->r[1]+0x00000010u,c->r[0]); // 80351784
  W32(c->r[1]+0x00000014u,c->r[0]); // 80351788
  W32(c->r[1]+0x00000018u,c->r[0]); // 8035178C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80351790
  W32(c->r[1]+0x00000020u,c->r[0]); // 80351794
  W32(c->r[1]+0x00000024u,c->r[0]); // 80351798
  W32(c->r[1]+0x00000028u,c->r[0]); // 8035179C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803517A0
  W32(c->r[1]+0x00000030u,c->r[0]); // 803517A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803517A8
  W32(c->r[1]+0x00000038u,c->r[0]); // 803517AC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803517B0
  W32(c->r[1]+0x00000040u,c->r[0]); // 803517B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803517B8
  c->lr=0x803517C0u; f_80350E40(c); // 803517BC
  c->r[4]=c->r[30]|c->r[30]; // 803517C0
  c->r[5]=c->r[31]|c->r[31]; // 803517C4
  c->r[3]=c->r[1]+0x00000008u; // 803517C8
  c->lr=0x803517D0u; f_8034C31C(c); // 803517CC
  c->lr=0x803517D4u; f_80350CE0(c); // 803517D0
L_803517D4:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 803517D4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 803517D8
  c->r[30]=R32(c->r[1]+0x00000058u); // 803517DC
  c->r[29]=R32(c->r[1]+0x00000054u); // 803517E0
  c->lr=c->r[0]; // 803517E4
  c->r[1]=c->r[1]+0x00000060u; // 803517E8
  return; // 803517EC
}

// fn_803517F0
void f_803517F0(Ctx* __restrict c) {
  trace_call(0x803517F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803517F0
  c->r[0]=c->lr; // 803517F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803517F8
  c->r[11]=c->r[1]+0x00000020u; // 803517FC
  c->lr=0x80351804u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80351800
  c->r[27]=c->r[3]|c->r[3]; // 80351804
  c->r[28]=c->r[4]|c->r[4]; // 80351808
  c->r[29]=c->r[5]|c->r[5]; // 8035180C
  c->r[30]=c->r[6]|c->r[6]; // 80351810
  c->r[31]=c->r[7]|c->r[7]; // 80351814
  c->lr=0x8035181Cu; f_80350CC8(c); // 80351818
  cmps(c,0,(int32_t)c->r[3],0); // 8035181C
  if (!crb(c,2)) { goto L_8035182C; } // 80351820
  c->r[3]=0u+0xFFFFFF80u; // 80351824
  goto L_80351884; // 80351828
L_8035182C:;
  c->r[3]=0u+0x80460000u; // 8035182C
  c->r[4]=0u+0x00000000u; // 80351830
  c->r[3]=c->r[3]+0xFFFF9BB0u; // 80351834
  c->r[0]=0u+0x00000014u; // 80351838
  W32(c->r[31]+0x00000004u,c->r[30]); // 8035183C
  W32(c->r[31]+0x00000090u,c->r[27]); // 80351840
  W32(c->r[31]+0x00000094u,c->r[28]); // 80351844
  W32(c->r[31]+0x00000098u,c->r[29]); // 80351848
  W32(c->r[31]+0x000000A4u,c->r[4]); // 8035184C
  W32(c->r[31]+0x000000A8u,c->r[4]); // 80351850
  W32(c->r[31]+0x000000ACu,c->r[4]); // 80351854
  W32(c->r[31]+0x000000B0u,c->r[4]); // 80351858
  W32(c->r[31]+0x000000B4u,c->r[3]); // 8035185C
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 80351860
  c->lr=0x80351868u; f_80351650(c); // 80351864
  c->r[6]=0u+0x80350000u; // 80351868
  c->r[7]=c->r[31]|c->r[31]; // 8035186C
  c->r[4]=c->r[31]+0x0000009Cu; // 80351870
  c->r[5]=c->r[31]+0x000000A0u; // 80351874
  c->r[6]=c->r[6]+0x0000189Cu; // 80351878
  c->lr=0x80351880u; f_8034C454(c); // 8035187C
  c->lr=0x80351884u; f_80350CE0(c); // 80351880
L_80351884:;
  c->r[11]=c->r[1]+0x00000020u; // 80351884
  c->lr=0x8035188Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80351888
  c->r[0]=R32(c->r[1]+0x00000024u); // 8035188C
  c->lr=c->r[0]; // 80351890
  c->r[1]=c->r[1]+0x00000020u; // 80351894
  return; // 80351898
}

// fn_8035189C
void f_8035189C(Ctx* __restrict c) {
  trace_call(0x8035189Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035189C
  c->r[0]=c->lr; // 803518A0
  cmps(c,0,(int32_t)c->r[3],0); // 803518A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803518A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803518AC
  c->r[31]=c->r[4]|c->r[4]; // 803518B0
  if (crb(c,2)) { goto L_803518C0; } // 803518B4
  cmps(c,0,(int32_t)c->r[3],-106); // 803518B8
  if (!crb(c,2)) { goto L_80351AA8; } // 803518BC
L_803518C0:;
  c->r[5]=R32(c->r[4]+0x000000B4u); // 803518C0
  cmps(c,0,(int32_t)c->r[3],0); // 803518C4
  c->r[3]=R32(c->r[5]+0x00000000u); // 803518C8
  if (!crb(c,2)) { goto L_803518F0; } // 803518CC
  c->r[7]=R32(c->r[4]+0x000000A4u); // 803518D0
  c->r[6]=R32(c->r[4]+0x000000ACu); // 803518D4
  c->r[5]=R32(c->r[4]+0x000000A8u); // 803518D8
  c->r[0]=R32(c->r[4]+0x000000B0u); // 803518DC
  c->r[6]=c->r[7]+c->r[6]; // 803518E0
  W32(c->r[4]+0x000000A4u,c->r[6]); // 803518E4
  c->r[0]=c->r[5]+c->r[0]; // 803518E8
  W32(c->r[4]+0x000000A8u,c->r[0]); // 803518EC
L_803518F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803518F0
  if (crb(c,2)) { goto L_8035193C; } // 803518F4
  c->r[5]=R32(c->r[4]+0x000000B4u); // 803518F8
  c->r[6]=0u+0x80350000u; // 803518FC
  c->r[7]=c->r[31]|c->r[31]; // 80351900
  c->r[0]=c->r[5]+0x00000004u; // 80351904
  c->r[5]=c->r[31]+0x000000B0u; // 80351908
  W32(c->r[4]+0x000000B4u,c->r[0]); // 8035190C
  c->r[4]=c->r[4]+0x000000ACu; // 80351910
  c->r[6]=c->r[6]+0x0000189Cu; // 80351914
  c->lr=0x8035191Cu; f_8034C454(c); // 80351918
  cmps(c,0,(int32_t)c->r[3],0); // 8035191C
  if (crb(c,2)) { goto L_80351ABC; } // 80351920
  c->lr=0x80351928u; f_80350CE0(c); // 80351924
  c->r[12]=R32(c->r[31]+0x00000004u); // 80351928
  c->r[4]=c->r[31]|c->r[31]; // 8035192C
  c->ctr=c->r[12]; // 80351930
  if (true) { c->lr=0x80351938u; dispatch(c,c->ctr); } // 80351934
  goto L_80351ABC; // 80351938
L_8035193C:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8035193C
  cmps(c,0,(int32_t)c->r[0],20); // 80351940
  if (!crb(c,2)) { goto L_803519C8; } // 80351944
  c->r[3]=R32(c->r[4]+0x00000090u); // 80351948
  c->r[8]=0u+0x00000000u; // 8035194C
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 80351950
  c->r[7]=R32(c->r[4]+0x000000A8u); // 80351954
  c->r[0]=c->r[0]+c->r[3]; // 80351958
  c->r[6]=R32(c->r[4]+0x000000A4u); // 8035195C
  cmpu(c,0,c->r[0],0x00000400u); // 80351960
  c->r[0]=R32(c->r[4]+0x000000A0u); // 80351964
  c->r[5]=R32(c->r[4]+0x00000094u); // 80351968
  if (!crb(c,1)) { goto L_80351974; } // 8035196C
  c->r[8]=c->r[8]|0x00000001u; // 80351970
L_80351974:;
  c->r[0]=c->r[0]+c->r[5]; // 80351974
  cmpu(c,0,c->r[0],0x00000021u); // 80351978
  if (!crb(c,1)) { goto L_80351984; } // 8035197C
  c->r[8]=c->r[8]|0x00000002u; // 80351980
L_80351984:;
  c->r[0]=c->r[6]+c->r[3]; // 80351984
  cmpu(c,0,c->r[0],0x00004400u); // 80351988
  if (!crb(c,1)) { goto L_80351994; } // 8035198C
  c->r[8]=c->r[8]|0x00000004u; // 80351990
L_80351994:;
  c->r[0]=c->r[7]+c->r[5]; // 80351994
  cmpu(c,0,c->r[0],0x00000FA0u); // 80351998
  if (!crb(c,1)) { goto L_803519A4; } // 8035199C
  c->r[8]=c->r[8]|0x00000008u; // 803519A0
L_803519A4:;
  c->r[4]=R32(c->r[4]+0x00000098u); // 803519A4
  c->r[3]=0u+0x00000000u; // 803519A8
  W32(c->r[4]+0x00000000u,c->r[8]); // 803519AC
  c->lr=0x803519B4u; f_80350CE0(c); // 803519B0
  c->r[12]=R32(c->r[31]+0x00000004u); // 803519B4
  c->r[4]=c->r[31]|c->r[31]; // 803519B8
  c->ctr=c->r[12]; // 803519BC
  if (true) { c->lr=0x803519C4u; dispatch(c,c->ctr); } // 803519C0
  goto L_80351ABC; // 803519C4
L_803519C8:;
  cmps(c,0,(int32_t)c->r[0],21); // 803519C8
  if (!crb(c,2)) { goto L_80351A74; } // 803519CC
  c->r[5]=R32(c->r[4]+0x000000A4u); // 803519D0
  c->r[3]=0u+0x00004400u; // 803519D4
  c->r[9]=R32(c->r[4]+0x000000A8u); // 803519D8
  c->r[0]=0u+0x00000FA0u; // 803519DC
  c->r[3]=addc(c,~c->r[5],c->r[3],1); // 803519E0
  c->r[10]=R32(c->r[4]+0x0000009Cu); // 803519E4
  c->r[8]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 803519E8
  c->r[11]=R32(c->r[4]+0x000000A0u); // 803519EC
  c->r[6]=addc(c,~c->r[5],0x00004400u,1); // 803519F0
  c->r[3]=0u+0x00000400u; // 803519F4
  c->r[5]=addc(c,~c->r[9],c->r[0],1); // 803519F8
  c->r[0]=0u+0x00000021u; // 803519FC
  c->r[7]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 80351A00
  c->r[8]=c->r[6]&~c->r[8]; // 80351A04
  c->r[6]=addc(c,~c->r[9],0x00000FA0u,1); // 80351A08
  c->r[3]=addc(c,~c->r[10],c->r[3],1); // 80351A0C
  c->r[5]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 80351A10
  c->r[6]=c->r[6]&~c->r[7]; // 80351A14
  c->r[3]=addc(c,~c->r[10],0x00000400u,1); // 80351A18
  c->r[5]=c->r[3]&~c->r[5]; // 80351A1C
  c->r[0]=addc(c,~c->r[11],c->r[0],1); // 80351A20
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80351A24
  c->r[0]=addc(c,~c->r[11],0x00000021u,1); // 80351A28
  cmpu(c,0,c->r[8],c->r[5]); // 80351A2C
  c->r[0]=c->r[0]&~c->r[3]; // 80351A30
  if (!crb(c,0)) { goto L_80351A3C; } // 80351A34
  c->r[5]=c->r[8]|c->r[8]; // 80351A38
L_80351A3C:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80351A3C
  cmpu(c,0,c->r[6],c->r[0]); // 80351A40
  W32(c->r[3]+0x00000000u,c->r[5]); // 80351A44
  if (!crb(c,0)) { goto L_80351A50; } // 80351A48
  c->r[0]=c->r[6]|c->r[6]; // 80351A4C
L_80351A50:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 80351A50
  c->r[3]=0u+0x00000000u; // 80351A54
  W32(c->r[4]+0x00000000u,c->r[0]); // 80351A58
  c->lr=0x80351A60u; f_80350CE0(c); // 80351A5C
  c->r[12]=R32(c->r[31]+0x00000004u); // 80351A60
  c->r[4]=c->r[31]|c->r[31]; // 80351A64
  c->ctr=c->r[12]; // 80351A68
  if (true) { c->lr=0x80351A70u; dispatch(c,c->ctr); } // 80351A6C
  goto L_80351ABC; // 80351A70
L_80351A74:;
  c->r[3]=0u+0x80460000u; // 80351A74
  c->r[4]=0u+0x80460000u; // 80351A78
  c->r[3]=c->r[3]+0xFFFF9BF4u; // 80351A7C
  c->r[4]=c->r[4]+0xFFFF9BDCu; // 80351A80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80351A84
  c->lr=0x80351A8Cu; f_8031E9FC(c); // 80351A88
  c->r[3]=0u+0xFFFFFF8Bu; // 80351A8C
  c->lr=0x80351A94u; f_80350CE0(c); // 80351A90
  c->r[12]=R32(c->r[31]+0x00000004u); // 80351A94
  c->r[4]=c->r[31]|c->r[31]; // 80351A98
  c->ctr=c->r[12]; // 80351A9C
  if (true) { c->lr=0x80351AA4u; dispatch(c,c->ctr); } // 80351AA0
  goto L_80351ABC; // 80351AA4
L_80351AA8:;
  c->lr=0x80351AACu; f_80350CE0(c); // 80351AA8
  c->r[12]=R32(c->r[31]+0x00000004u); // 80351AAC
  c->r[4]=c->r[31]|c->r[31]; // 80351AB0
  c->ctr=c->r[12]; // 80351AB4
  if (true) { c->lr=0x80351ABCu; dispatch(c,c->ctr); } // 80351AB8
L_80351ABC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80351ABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80351AC0
  c->lr=c->r[0]; // 80351AC4
  c->r[1]=c->r[1]+0x00000010u; // 80351AC8
  return; // 80351ACC
}

// reserveFileDescriptor
void f_80351AD0(Ctx* __restrict c) {
  trace_call(0x80351AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80351AD0
  c->r[0]=c->lr; // 80351AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80351AD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80351ADC
  c->lr=0x80351AE4u; f_8032269C(c); // 80351AE0
  c->r[0]=R32(c->r[13]+0xFFFFDB10u); // 80351AE4
  cmps(c,0,(int32_t)c->r[0],-255); // 80351AE8
  if (!crb(c,2)) { goto L_80351B00; } // 80351AEC
  c->r[0]=0u+0xFFFFFF02u; // 80351AF0
  c->r[31]=0u+0x00000000u; // 80351AF4
  W32(c->r[13]+0xFFFFDB10u,c->r[0]); // 80351AF8
  goto L_80351B04; // 80351AFC
L_80351B00:;
  c->r[31]=0u+0x00000001u; // 80351B00
L_80351B04:;
  c->lr=0x80351B08u; f_803226C4(c); // 80351B04
  c->r[0]=cntlz(c->r[31]); // 80351B08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80351B0C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80351B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80351B14
  c->lr=c->r[0]; // 80351B18
  c->r[1]=c->r[1]+0x00000010u; // 80351B1C
  return; // 80351B20
}

// NANDLoggingAddMessageAsync
void f_80351B24(Ctx* __restrict c) {
  trace_call(0x80351B24u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80351B24
  c->r[0]=c->lr; // 80351B28
  W32(c->r[1]+0x00000084u,c->r[0]); // 80351B2C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80351B30
  c->r[31]=c->r[4]|c->r[4]; // 80351B34
  W32(c->r[1]+0x00000078u,c->r[30]); // 80351B38
  c->r[30]=c->r[3]|c->r[3]; // 80351B3C
  if (!crb(c,6)) { goto L_80351B64; } // 80351B40
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80351B44
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80351B48
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80351B4C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 80351B50
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 80351B54
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 80351B58
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 80351B5C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 80351B60
L_80351B64:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 80351B64
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80351B68
  W32(c->r[1]+0x00000010u,c->r[5]); // 80351B6C
  W32(c->r[1]+0x00000014u,c->r[6]); // 80351B70
  W32(c->r[1]+0x00000018u,c->r[7]); // 80351B74
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80351B78
  W32(c->r[1]+0x00000020u,c->r[9]); // 80351B7C
  W32(c->r[1]+0x00000024u,c->r[10]); // 80351B80
  c->lr=0x80351B88u; f_80351AD0(c); // 80351B84
  cmps(c,0,(int32_t)c->r[3],0); // 80351B88
  if (!crb(c,2)) { goto L_80351B98; } // 80351B8C
  c->r[3]=0u+0x00000000u; // 80351B90
  goto L_80351C04; // 80351B94
L_80351B98:;
  c->r[4]=c->r[1]+0x00000088u; // 80351B98
  c->r[0]=c->r[1]+0x00000008u; // 80351B9C
  c->r[5]=0u+0x02000000u; // 80351BA0
  c->r[3]=0u+0x80530000u; // 80351BA4
  W32(c->r[1]+0x00000068u,c->r[5]); // 80351BA8
  c->r[6]=c->r[1]+0x00000068u; // 80351BAC
  c->r[5]=c->r[31]|c->r[31]; // 80351BB0
  c->r[3]=c->r[3]+0xFFFF9240u; // 80351BB4
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 80351BB8
  c->r[4]=0u+0x00000100u; // 80351BBC
  W32(c->r[1]+0x00000070u,c->r[0]); // 80351BC0
  c->lr=0x80351BC8u; f_803A5624(c); // 80351BC4
  c->r[0]=0u+0x00000001u; // 80351BC8
  c->r[3]=0u+0x80460000u; // 80351BCC
  c->r[5]=0u+0x80350000u; // 80351BD0
  W32(c->r[13]+0xFFFFEF40u,c->r[30]); // 80351BD4
  c->r[3]=c->r[3]+0xFFFF9C18u; // 80351BD8
  c->r[4]=0u+0x00000003u; // 80351BDC
  W32(c->r[13]+0xFFFFEF44u,c->r[0]); // 80351BE0
  c->r[5]=c->r[5]+0x00001C1Cu; // 80351BE4
  c->r[6]=0u+0x00000000u; // 80351BE8
  c->lr=0x80351BF0u; f_8034C828(c); // 80351BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80351BF0
  if (!crb(c,2)) { goto L_80351C00; } // 80351BF4
  c->r[3]=0u+0x00000001u; // 80351BF8
  goto L_80351C04; // 80351BFC
L_80351C00:;
  c->r[3]=0u+0x00000000u; // 80351C00
L_80351C04:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 80351C04
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80351C08
  c->r[30]=R32(c->r[1]+0x00000078u); // 80351C0C
  c->lr=c->r[0]; // 80351C10
  c->r[1]=c->r[1]+0x00000080u; // 80351C14
  return; // 80351C18
}

// asyncRoutine
void f_80351C1C(Ctx* __restrict c) {
  trace_call(0x80351C1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80351C1C
  c->r[0]=c->lr; // 80351C20
  W32(c->r[1]+0x00000094u,c->r[0]); // 80351C24
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80351C28
  c->r[31]=c->r[3]|c->r[3]; // 80351C2C
  W32(c->r[1]+0x00000088u,c->r[30]); // 80351C30
  c->r[30]=0u+0x80530000u; // 80351C34
  c->r[30]=c->r[30]+0xFFFF9240u; // 80351C38
  c->r[4]=R32(c->r[13]+0xFFFFEF44u); // 80351C3C
  c->r[0]=c->r[4]+0x00000001u; // 80351C40
  cmps(c,0,(int32_t)c->r[0],2); // 80351C44
  W32(c->r[13]+0xFFFFEF44u,c->r[0]); // 80351C48
  if (!crb(c,2)) { goto L_80351CB4; } // 80351C4C
  cmps(c,0,(int32_t)c->r[3],0); // 80351C50
  if (crb(c,0)) { goto L_80351C98; } // 80351C54
  c->r[6]=0u+0x80350000u; // 80351C58
  W32(c->r[13]+0xFFFFDB10u,c->r[3]); // 80351C5C
  c->r[6]=c->r[6]+0x00001C1Cu; // 80351C60
  c->r[4]=0u+0x00000000u; // 80351C64
  c->r[5]=0u+0x00000000u; // 80351C68
  c->r[7]=0u+0x00000000u; // 80351C6C
  c->lr=0x80351C74u; f_8034C8E0(c); // 80351C70
  cmps(c,0,(int32_t)c->r[3],0); // 80351C74
  if (crb(c,2)) { goto L_80352088; } // 80351C78
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351C7C
  cmps(c,0,(int32_t)c->r[12],0); // 80351C80
  if (crb(c,2)) { goto L_80352088; } // 80351C84
  c->r[3]=0u+0x00000000u; // 80351C88
  c->ctr=c->r[12]; // 80351C8C
  if (true) { c->lr=0x80351C94u; dispatch(c,c->ctr); } // 80351C90
  goto L_80352088; // 80351C94
L_80351C98:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351C98
  cmps(c,0,(int32_t)c->r[12],0); // 80351C9C
  if (crb(c,2)) { goto L_80352088; } // 80351CA0
  c->r[3]=0u+0x00000000u; // 80351CA4
  c->ctr=c->r[12]; // 80351CA8
  if (true) { c->lr=0x80351CB0u; dispatch(c,c->ctr); } // 80351CAC
  goto L_80352088; // 80351CB0
L_80351CB4:;
  cmps(c,0,(int32_t)c->r[0],3); // 80351CB4
  if (!crb(c,2)) { goto L_80351D20; } // 80351CB8
  cmps(c,0,(int32_t)c->r[3],0); // 80351CBC
  if (!crb(c,2)) { goto L_80351D04; } // 80351CC0
  c->r[6]=0u+0x80350000u; // 80351CC4
  c->r[3]=R32(c->r[13]+0xFFFFDB10u); // 80351CC8
  c->r[4]=c->r[30]+0x00000100u; // 80351CCC
  c->r[5]=0u+0x00000100u; // 80351CD0
  c->r[6]=c->r[6]+0x00001C1Cu; // 80351CD4
  c->r[7]=0u+0x00000000u; // 80351CD8
  c->lr=0x80351CE0u; f_8034C98C(c); // 80351CDC
  cmps(c,0,(int32_t)c->r[3],0); // 80351CE0
  if (crb(c,2)) { goto L_80352088; } // 80351CE4
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351CE8
  cmps(c,0,(int32_t)c->r[12],0); // 80351CEC
  if (crb(c,2)) { goto L_80352088; } // 80351CF0
  c->r[3]=0u+0x00000000u; // 80351CF4
  c->ctr=c->r[12]; // 80351CF8
  if (true) { c->lr=0x80351D00u; dispatch(c,c->ctr); } // 80351CFC
  goto L_80352088; // 80351D00
L_80351D04:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351D04
  cmps(c,0,(int32_t)c->r[12],0); // 80351D08
  if (crb(c,2)) { goto L_80352088; } // 80351D0C
  c->r[3]=0u+0x00000000u; // 80351D10
  c->ctr=c->r[12]; // 80351D14
  if (true) { c->lr=0x80351D1Cu; dispatch(c,c->ctr); } // 80351D18
  goto L_80352088; // 80351D1C
L_80351D20:;
  cmps(c,0,(int32_t)c->r[0],4); // 80351D20
  if (!crb(c,2)) { goto L_80351D8C; } // 80351D24
  cmps(c,0,(int32_t)c->r[3],256); // 80351D28
  if (!crb(c,2)) { goto L_80351D70; } // 80351D2C
  c->r[6]=0u+0x80350000u; // 80351D30
  c->r[3]=R32(c->r[13]+0xFFFFDB10u); // 80351D34
  c->r[6]=c->r[6]+0x00001C1Cu; // 80351D38
  c->r[4]=0u+0x00000000u; // 80351D3C
  c->r[5]=0u+0x00000000u; // 80351D40
  c->r[7]=0u+0x00000000u; // 80351D44
  c->lr=0x80351D4Cu; f_8034C8E0(c); // 80351D48
  cmps(c,0,(int32_t)c->r[3],0); // 80351D4C
  if (crb(c,2)) { goto L_80352088; } // 80351D50
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351D54
  cmps(c,0,(int32_t)c->r[12],0); // 80351D58
  if (crb(c,2)) { goto L_80352088; } // 80351D5C
  c->r[3]=0u+0x00000000u; // 80351D60
  c->ctr=c->r[12]; // 80351D64
  if (true) { c->lr=0x80351D6Cu; dispatch(c,c->ctr); } // 80351D68
  goto L_80352088; // 80351D6C
L_80351D70:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351D70
  cmps(c,0,(int32_t)c->r[12],0); // 80351D74
  if (crb(c,2)) { goto L_80352088; } // 80351D78
  c->r[3]=0u+0x00000000u; // 80351D7C
  c->ctr=c->r[12]; // 80351D80
  if (true) { c->lr=0x80351D88u; dispatch(c,c->ctr); } // 80351D84
  goto L_80352088; // 80351D88
L_80351D8C:;
  cmps(c,0,(int32_t)c->r[0],5); // 80351D8C
  if (!crb(c,2)) { goto L_80351EE8; } // 80351D90
  cmps(c,0,(int32_t)c->r[3],0); // 80351D94
  if (!crb(c,2)) { goto L_80351ECC; } // 80351D98
  c->r[3]=c->r[30]+0x00000100u; // 80351D9C
  c->r[0]=0u+0x00000000u; // 80351DA0
  W8(c->r[3]+0x000000FFu,c->r[0]); // 80351DA4
  c->lr=0x80351DACu; f_803A8ECC(c); // 80351DA8
  c->r[31]=c->r[3]|c->r[3]; // 80351DAC
  c->r[3]=c->r[30]+0x00000200u; // 80351DB0
  c->r[4]=0u+0x00000020u; // 80351DB4
  c->r[5]=0u+0x000000FEu; // 80351DB8
  c->lr=0x80351DC0u; f_80006370(c); // 80351DBC
  c->lr=0x80351DC4u; f_803264C8(c); // 80351DC0
  c->r[5]=c->r[1]+0x00000058u; // 80351DC4
  c->lr=0x80351DCCu; f_80326714(c); // 80351DC8
  c->lr=0x80351DD0u; f_80351650(c); // 80351DCC
  c->r[4]=c->r[3]|c->r[3]; // 80351DD0
  c->r[3]=c->r[1]+0x00000018u; // 80351DD4
  c->r[4]=c->r[4]+0x00000007u; // 80351DD8
  c->r[5]=0u+0x00000011u; // 80351DDC
  c->lr=0x80351DE4u; f_803A6FD0(c); // 80351DE0
  c->r[0]=0u+0x0000002Du; // 80351DE4
  c->r[4]=0u+0x00000000u; // 80351DE8
  W8(c->r[1]+0x00000029u,c->r[4]); // 80351DEC
  c->r[3]=0u+0x82080000u; // 80351DF0
  c->r[5]=0u+0x80460000u; // 80351DF4
  c->r[4]=c->r[1]+0x00000018u; // 80351DF8
  W8(c->r[1]+0x00000020u,c->r[0]); // 80351DFC
  c->r[0]=c->r[3]+0x00002083u; // 80351E00
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 80351E04
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[31])>>32); // 80351E08
  c->r[6]=c->r[30]+0x00000000u; // 80351E0C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80351E10
  c->r[5]=c->r[5]+0xFFFF9C34u; // 80351E14
  c->r[3]=R32(c->r[1]+0x00000058u); // 80351E18
  c->r[0]=c->r[0]+c->r[31]; // 80351E1C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80351E20
  c->r[0]=sraw(c,c->r[0],5); // 80351E24
  c->r[3]=c->r[30]+0x00000200u; // 80351E28
  W32(c->r[1]+0x00000010u,c->r[4]); // 80351E2C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80351E30
  c->r[0]=c->r[0]+c->r[4]; // 80351E34
  W32(c->r[1]+0x00000014u,c->r[6]); // 80351E38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)63); // 80351E3C
  c->r[4]=0u+0x00000100u; // 80351E40
  c->r[8]=R32(c->r[1]+0x00000068u); // 80351E44
  c->r[6]=c->r[31]-c->r[0]; // 80351E48
  c->r[7]=R32(c->r[1]+0x0000006Cu); // 80351E4C
  c->r[9]=R32(c->r[1]+0x00000064u); // 80351E50
  c->r[6]=c->r[6]+0x00000001u; // 80351E54
  c->r[10]=R32(c->r[1]+0x00000060u); // 80351E58
  c->r[8]=c->r[8]+0x00000001u; // 80351E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80351E60
  c->lr=0x80351E68u; f_803A5730(c); // 80351E64
  cmps(c,0,(int32_t)c->r[3],256); // 80351E68
  if (!crb(c,0)) { goto L_80351E7C; } // 80351E6C
  c->r[4]=c->r[30]+0x00000200u; // 80351E70
  c->r[0]=0u+0x00000020u; // 80351E74
  W8(c->r[4]+c->r[3],c->r[0]); // 80351E78
L_80351E7C:;
  c->r[4]=c->r[30]+0x00000200u; // 80351E7C
  c->r[3]=0u+0x0000000Du; // 80351E80
  c->r[0]=0u+0x0000000Au; // 80351E84
  c->r[6]=0u+0x80350000u; // 80351E88
  W8(c->r[4]+0x000000FEu,c->r[3]); // 80351E8C
  c->r[6]=c->r[6]+0x00001C1Cu; // 80351E90
  c->r[3]=R32(c->r[13]+0xFFFFDB10u); // 80351E94
  c->r[5]=0u+0x00000100u; // 80351E98
  W8(c->r[4]+0x000000FFu,c->r[0]); // 80351E9C
  c->r[7]=0u+0x00000000u; // 80351EA0
  c->lr=0x80351EA8u; f_8034CA50(c); // 80351EA4
  cmps(c,0,(int32_t)c->r[3],0); // 80351EA8
  if (crb(c,2)) { goto L_80352088; } // 80351EAC
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351EB0
  cmps(c,0,(int32_t)c->r[12],0); // 80351EB4
  if (crb(c,2)) { goto L_80352088; } // 80351EB8
  c->r[3]=0u+0x00000000u; // 80351EBC
  c->ctr=c->r[12]; // 80351EC0
  if (true) { c->lr=0x80351EC8u; dispatch(c,c->ctr); } // 80351EC4
  goto L_80352088; // 80351EC8
L_80351ECC:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351ECC
  cmps(c,0,(int32_t)c->r[12],0); // 80351ED0
  if (crb(c,2)) { goto L_80352088; } // 80351ED4
  c->r[3]=0u+0x00000000u; // 80351ED8
  c->ctr=c->r[12]; // 80351EDC
  if (true) { c->lr=0x80351EE4u; dispatch(c,c->ctr); } // 80351EE0
  goto L_80352088; // 80351EE4
L_80351EE8:;
  cmps(c,0,(int32_t)c->r[0],6); // 80351EE8
  if (!crb(c,2)) { goto L_80351F60; } // 80351EEC
  cmps(c,0,(int32_t)c->r[3],256); // 80351EF0
  if (!crb(c,2)) { goto L_80351F44; } // 80351EF4
  c->r[3]=c->r[30]+0x00000100u; // 80351EF8
  c->lr=0x80351F00u; f_803A8ECC(c); // 80351EFC
  c->r[0]=c->r[3]|c->r[3]; // 80351F00
  c->r[6]=0u+0x80350000u; // 80351F04
  c->r[3]=R32(c->r[13]+0xFFFFDB10u); // 80351F08
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 80351F0C
  c->r[6]=c->r[6]+0x00001C1Cu; // 80351F10
  c->r[5]=0u+0x00000000u; // 80351F14
  c->r[7]=0u+0x00000000u; // 80351F18
  c->lr=0x80351F20u; f_8034C8E0(c); // 80351F1C
  cmps(c,0,(int32_t)c->r[3],0); // 80351F20
  if (crb(c,2)) { goto L_80352088; } // 80351F24
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351F28
  cmps(c,0,(int32_t)c->r[12],0); // 80351F2C
  if (crb(c,2)) { goto L_80352088; } // 80351F30
  c->r[3]=0u+0x00000000u; // 80351F34
  c->ctr=c->r[12]; // 80351F38
  if (true) { c->lr=0x80351F40u; dispatch(c,c->ctr); } // 80351F3C
  goto L_80352088; // 80351F40
L_80351F44:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351F44
  cmps(c,0,(int32_t)c->r[12],0); // 80351F48
  if (crb(c,2)) { goto L_80352088; } // 80351F4C
  c->r[3]=0u+0x00000000u; // 80351F50
  c->ctr=c->r[12]; // 80351F54
  if (true) { c->lr=0x80351F5Cu; dispatch(c,c->ctr); } // 80351F58
  goto L_80352088; // 80351F5C
L_80351F60:;
  cmps(c,0,(int32_t)c->r[0],7); // 80351F60
  if (!crb(c,2)) { goto L_80351FD8; } // 80351F64
  c->r[3]=c->r[30]+0x00000100u; // 80351F68
  c->lr=0x80351F70u; f_803A8ECC(c); // 80351F6C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 80351F70
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80351F74
  if (!crb(c,2)) { goto L_80351FBC; } // 80351F78
  c->r[6]=0u+0x80350000u; // 80351F7C
  c->r[3]=R32(c->r[13]+0xFFFFDB10u); // 80351F80
  c->r[4]=c->r[30]+0x00000200u; // 80351F84
  c->r[5]=0u+0x00000100u; // 80351F88
  c->r[6]=c->r[6]+0x00001C1Cu; // 80351F8C
  c->r[7]=0u+0x00000000u; // 80351F90
  c->lr=0x80351F98u; f_8034CA50(c); // 80351F94
  cmps(c,0,(int32_t)c->r[3],0); // 80351F98
  if (crb(c,2)) { goto L_80352088; } // 80351F9C
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351FA0
  cmps(c,0,(int32_t)c->r[12],0); // 80351FA4
  if (crb(c,2)) { goto L_80352088; } // 80351FA8
  c->r[3]=0u+0x00000000u; // 80351FAC
  c->ctr=c->r[12]; // 80351FB0
  if (true) { c->lr=0x80351FB8u; dispatch(c,c->ctr); } // 80351FB4
  goto L_80352088; // 80351FB8
L_80351FBC:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80351FBC
  cmps(c,0,(int32_t)c->r[12],0); // 80351FC0
  if (crb(c,2)) { goto L_80352088; } // 80351FC4
  c->r[3]=0u+0x00000000u; // 80351FC8
  c->ctr=c->r[12]; // 80351FCC
  if (true) { c->lr=0x80351FD4u; dispatch(c,c->ctr); } // 80351FD0
  goto L_80352088; // 80351FD4
L_80351FD8:;
  cmps(c,0,(int32_t)c->r[0],8); // 80351FD8
  if (!crb(c,2)) { goto L_8035203C; } // 80351FDC
  cmps(c,0,(int32_t)c->r[3],256); // 80351FE0
  if (!crb(c,2)) { goto L_80352020; } // 80351FE4
  c->r[4]=0u+0x80350000u; // 80351FE8
  c->r[3]=R32(c->r[13]+0xFFFFDB10u); // 80351FEC
  c->r[4]=c->r[4]+0x00001C1Cu; // 80351FF0
  c->r[5]=0u+0x00000000u; // 80351FF4
  c->lr=0x80351FFCu; f_8034CAF8(c); // 80351FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80351FFC
  if (crb(c,2)) { goto L_80352088; } // 80352000
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80352004
  cmps(c,0,(int32_t)c->r[12],0); // 80352008
  if (crb(c,2)) { goto L_80352088; } // 8035200C
  c->r[3]=0u+0x00000000u; // 80352010
  c->ctr=c->r[12]; // 80352014
  if (true) { c->lr=0x8035201Cu; dispatch(c,c->ctr); } // 80352018
  goto L_80352088; // 8035201C
L_80352020:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80352020
  cmps(c,0,(int32_t)c->r[12],0); // 80352024
  if (crb(c,2)) { goto L_80352088; } // 80352028
  c->r[3]=0u+0x00000000u; // 8035202C
  c->ctr=c->r[12]; // 80352030
  if (true) { c->lr=0x80352038u; dispatch(c,c->ctr); } // 80352034
  goto L_80352088; // 80352038
L_8035203C:;
  cmps(c,0,(int32_t)c->r[0],9); // 8035203C
  if (!crb(c,2)) { goto L_80352088; } // 80352040
  cmps(c,0,(int32_t)c->r[3],0); // 80352044
  if (!crb(c,2)) { goto L_80352070; } // 80352048
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 8035204C
  c->r[0]=0u+0xFFFFFF01u; // 80352050
  W32(c->r[13]+0xFFFFDB10u,c->r[0]); // 80352054
  cmps(c,0,(int32_t)c->r[12],0); // 80352058
  if (crb(c,2)) { goto L_80352088; } // 8035205C
  c->r[3]=0u+0x00000001u; // 80352060
  c->ctr=c->r[12]; // 80352064
  if (true) { c->lr=0x8035206Cu; dispatch(c,c->ctr); } // 80352068
  goto L_80352088; // 8035206C
L_80352070:;
  c->r[12]=R32(c->r[13]+0xFFFFEF40u); // 80352070
  cmps(c,0,(int32_t)c->r[12],0); // 80352074
  if (crb(c,2)) { goto L_80352088; } // 80352078
  c->r[3]=0u+0x00000000u; // 8035207C
  c->ctr=c->r[12]; // 80352080
  if (true) { c->lr=0x80352088u; dispatch(c,c->ctr); } // 80352084
L_80352088:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80352088
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8035208C
  c->r[30]=R32(c->r[1]+0x00000088u); // 80352090
  c->lr=c->r[0]; // 80352094
  c->r[1]=c->r[1]+0x00000090u; // 80352098
  return; // 8035209C
}

// SCInit
void f_803520A0(Ctx* __restrict c) {
  trace_call(0x803520A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803520A0
  c->r[0]=c->lr; // 803520A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803520A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803520AC
  c->lr=0x803520B4u; f_8032269C(c); // 803520B0
  c->r[0]=R8(c->r[13]+0xFFFFEF5Eu); // 803520B4
  cmps(c,0,(int32_t)c->r[0],0); // 803520B8
  if (crb(c,2)) { goto L_803520C8; } // 803520BC
  c->lr=0x803520C4u; f_803226C4(c); // 803520C0
  goto L_8035212C; // 803520C4
L_803520C8:;
  c->r[31]=0u+0x00000001u; // 803520C8
  W8(c->r[13]+0xFFFFEF5Eu,c->r[31]); // 803520CC
  W8(c->r[13]+0xFFFFEF48u,c->r[31]); // 803520D0
  c->lr=0x803520D8u; f_803226C4(c); // 803520D4
  c->r[3]=R32(c->r[13]+0xFFFFDB18u); // 803520D8
  c->lr=0x803520E0u; f_8031CABC(c); // 803520DC
  c->r[3]=0u+0x80530000u; // 803520E0
  c->r[3]=c->r[3]+0xFFFF9540u; // 803520E4
  c->lr=0x803520ECu; f_803253DC(c); // 803520E8
  c->lr=0x803520F0u; f_8031B8F4(c); // 803520EC
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 803520F0
  if (crb(c,2)) { goto L_803520FC; } // 803520F4
  W8(c->r[13]+0xFFFFEF5Cu,c->r[31]); // 803520F8
L_803520FC:;
  c->lr=0x80352100u; f_80350FAC(c); // 803520FC
  cmps(c,0,(int32_t)c->r[3],0); // 80352100
  if (!crb(c,2)) { goto L_80352124; } // 80352104
  c->r[3]=0u+0x80530000u; // 80352108
  c->r[4]=0u+0x00004000u; // 8035210C
  c->r[3]=c->r[3]+0xFFFF96E0u; // 80352110
  c->r[5]=0u+0x00000000u; // 80352114
  c->lr=0x8035211Cu; f_8035225C(c); // 80352118
  cmps(c,0,(int32_t)c->r[3],0); // 8035211C
  if (crb(c,2)) { goto L_8035212C; } // 80352120
L_80352124:;
  c->r[0]=0u+0x00000002u; // 80352124
  W8(c->r[13]+0xFFFFEF48u,c->r[0]); // 80352128
L_8035212C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8035212C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80352130
  c->lr=c->r[0]; // 80352134
  c->r[1]=c->r[1]+0x00000010u; // 80352138
  return; // 8035213C
}

// SCCheckStatus
void f_80352140(Ctx* __restrict c) {
  trace_call(0x80352140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352140
  c->r[0]=c->lr; // 80352144
  W32(c->r[1]+0x00000024u,c->r[0]); // 80352148
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8035214C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80352150
  W32(c->r[1]+0x00000014u,c->r[29]); // 80352154
  c->lr=0x8035215Cu; f_8032269C(c); // 80352158
  c->r[29]=R8(c->r[13]+0xFFFFEF48u); // 8035215C
  cmpu(c,0,c->r[29],0x00000003u); // 80352160
  if (!crb(c,2)) { goto L_80352238; } // 80352164
  c->r[0]=0u+0x00000001u; // 80352168
  W8(c->r[13]+0xFFFFEF48u,c->r[0]); // 8035216C
  c->lr=0x80352174u; f_803226C4(c); // 80352170
  c->r[31]=0u+0x80530000u; // 80352174
  c->r[31]=c->r[31]+0xFFFF9540u; // 80352178
  c->r[3]=R32(c->r[31]+0x0000016Cu); // 8035217C
  c->r[4]=R32(c->r[31]+0x0000017Cu); // 80352180
  c->lr=0x80352188u; f_803526F4(c); // 80352184
  cmps(c,0,(int32_t)c->r[3],0); // 80352188
  if (!crb(c,2)) { goto L_803521CC; } // 8035218C
  c->lr=0x80352194u; f_8032269C(c); // 80352190
  c->r[5]=0u+0x80530000u; // 80352194
  c->r[4]=R32(c->r[31]+0x0000016Cu); // 80352198
  c->r[5]=c->r[5]+0xFFFF96E0u; // 8035219C
  c->r[29]=c->r[3]|c->r[3]; // 803521A0
  cmpu(c,0,c->r[5],c->r[4]); // 803521A4
  if (crb(c,2)) { goto L_803521B8; } // 803521A8
  c->r[3]=c->r[5]|c->r[5]; // 803521AC
  c->r[5]=0u+0x00004000u; // 803521B0
  c->lr=0x803521B8u; f_8000626C(c); // 803521B4
L_803521B8:;
  c->r[0]=0u+0x00000000u; // 803521B8
  c->r[3]=c->r[29]|c->r[29]; // 803521BC
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 803521C0
  c->lr=0x803521C8u; f_803226C4(c); // 803521C4
  goto L_8035222C; // 803521C8
L_803521CC:;
  c->lr=0x803521D0u; f_8032269C(c); // 803521CC
  c->r[31]=R32(c->r[31]+0x0000016Cu); // 803521D0
  c->r[29]=c->r[3]|c->r[3]; // 803521D4
  c->r[30]=0u+0x00004000u; // 803521D8
  c->r[4]=0u+0x00000000u; // 803521DC
  c->r[3]=c->r[31]|c->r[31]; // 803521E0
  c->r[5]=0u+0x00004000u; // 803521E4
  c->lr=0x803521ECu; f_80006370(c); // 803521E8
  cmpu(c,0,c->r[30],0x0000000Cu); // 803521EC
  if (!crb(c,1)) { goto L_8035221C; } // 803521F0
  c->r[3]=c->r[31]|c->r[31]; // 803521F4
  c->r[4]=c->r[13]+0xFFFFDC10u; // 803521F8
  c->r[5]=0u+0x00000004u; // 803521FC
  c->lr=0x80352204u; f_8000626C(c); // 80352200
  c->r[3]=c->r[31]+0x00003FFCu; // 80352204
  c->r[4]=c->r[13]+0xFFFFDC18u; // 80352208
  c->r[5]=0u+0x00000004u; // 8035220C
  c->lr=0x80352214u; f_8000626C(c); // 80352210
  c->r[0]=0u+0x00000008u; // 80352214
  W16(c->r[31]+0x00000006u,c->r[0]); // 80352218
L_8035221C:;
  c->r[0]=0u+0x00000000u; // 8035221C
  c->r[3]=c->r[29]|c->r[29]; // 80352220
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 80352224
  c->lr=0x8035222Cu; f_803226C4(c); // 80352228
L_8035222C:;
  c->r[29]=0u+0x00000000u; // 8035222C
  W8(c->r[13]+0xFFFFEF48u,c->r[29]); // 80352230
  goto L_8035223C; // 80352234
L_80352238:;
  c->lr=0x8035223Cu; f_803226C4(c); // 80352238
L_8035223C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8035223C
  c->r[3]=c->r[29]|c->r[29]; // 80352240
  c->r[30]=R32(c->r[1]+0x00000018u); // 80352244
  c->r[29]=R32(c->r[1]+0x00000014u); // 80352248
  c->r[0]=R32(c->r[1]+0x00000024u); // 8035224C
  c->lr=c->r[0]; // 80352250
  c->r[1]=c->r[1]+0x00000020u; // 80352254
  return; // 80352258
}

// SCReloadConfFileAsync
void f_8035225C(Ctx* __restrict c) {
  trace_call(0x8035225Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035225C
  c->r[0]=c->lr; // 80352260
  cmpu(c,0,c->r[4],0x00004000u); // 80352264
  W32(c->r[1]+0x00000024u,c->r[0]); // 80352268
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8035226C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80352270
  W32(c->r[1]+0x00000014u,c->r[29]); // 80352274
  c->r[29]=c->r[3]|c->r[3]; // 80352278
  if (!crb(c,0)) { goto L_80352288; } // 8035227C
  c->r[3]=0u+0xFFFFFF80u; // 80352280
  goto L_80352354; // 80352284
L_80352288:;
  c->r[30]=0u+0x80530000u; // 80352288
  c->r[9]=0u+0x80400000u; // 8035228C
  c->r[30]=c->r[30]+0xFFFF9540u; // 80352290
  c->r[31]=0u+0x00000000u; // 80352294
  c->r[8]=0u+0x80400000u; // 80352298
  c->r[4]=0u+0x80000000u; // 8035229C
  c->r[7]=c->r[4]+0x00003800u; // 803522A0
  c->r[9]=c->r[9]+0x00005AF0u; // 803522A4
  c->r[10]=0u+0x00000001u; // 803522A8
  c->r[8]=c->r[8]+0x00005B08u; // 803522AC
  c->r[6]=0u+0x00004000u; // 803522B0
  c->r[0]=0u+0x00000100u; // 803522B4
  W32(c->r[30]+0x0000015Cu,c->r[5]); // 803522B8
  c->r[4]=0u+0x00000000u; // 803522BC
  c->r[5]=0u+0x00004000u; // 803522C0
  W8(c->r[13]+0xFFFFEF48u,c->r[10]); // 803522C4
  W32(c->r[30]+0x00000160u,c->r[31]); // 803522C8
  W8(c->r[30]+0x0000015Au,c->r[31]); // 803522CC
  W32(c->r[30]+0x0000017Cu,c->r[31]); // 803522D0
  W32(c->r[30]+0x00000180u,c->r[31]); // 803522D4
  W32(c->r[30]+0x00000164u,c->r[9]); // 803522D8
  W32(c->r[30]+0x00000168u,c->r[8]); // 803522DC
  W32(c->r[30]+0x0000016Cu,c->r[3]); // 803522E0
  W32(c->r[30]+0x00000170u,c->r[7]); // 803522E4
  W32(c->r[30]+0x00000174u,c->r[6]); // 803522E8
  W32(c->r[30]+0x00000178u,c->r[0]); // 803522EC
  c->lr=0x803522F4u; f_80006370(c); // 803522F0
  c->r[3]=c->r[29]|c->r[29]; // 803522F4
  c->r[4]=c->r[13]+0xFFFFDC10u; // 803522F8
  c->r[5]=0u+0x00000004u; // 803522FC
  c->lr=0x80352304u; f_8000626C(c); // 80352300
  c->r[3]=c->r[29]+0x00003FFCu; // 80352304
  c->r[4]=c->r[13]+0xFFFFDC18u; // 80352308
  c->r[5]=0u+0x00000004u; // 8035230C
  c->lr=0x80352314u; f_8000626C(c); // 80352310
  c->r[0]=0u+0x00000008u; // 80352314
  c->r[6]=0u+0x80350000u; // 80352318
  W16(c->r[29]+0x00000006u,c->r[0]); // 8035231C
  c->r[4]=c->r[30]+0x00000008u; // 80352320
  c->r[6]=c->r[6]+0x00002370u; // 80352324
  c->r[7]=c->r[30]+0x00000094u; // 80352328
  c->r[0]=R8(c->r[30]+0x0000015Au); // 8035232C
  c->r[5]=0u+0x00000001u; // 80352330
  W8(c->r[30]+0x00000159u,c->r[31]); // 80352334
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80352338
  c->r[3]=c->r[30]+c->r[0]; // 8035233C
  W32(c->r[13]+0xFFFFEF58u,c->r[31]); // 80352340
  c->r[3]=R32(c->r[3]+0x00000164u); // 80352344
  W32(c->r[13]+0xFFFFEF50u,c->r[31]); // 80352348
  W32(c->r[13]+0xFFFFEF4Cu,c->r[31]); // 8035234C
  c->lr=0x80352354u; f_8034FD40(c); // 80352350
L_80352354:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80352354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80352358
  c->r[30]=R32(c->r[1]+0x00000018u); // 8035235C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80352360
  c->lr=c->r[0]; // 80352364
  c->r[1]=c->r[1]+0x00000020u; // 80352368
  return; // 8035236C
}

// OpenCallbackFromReload
void f_80352370(Ctx* __restrict c) {
  trace_call(0x80352370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352370
  c->r[0]=c->lr; // 80352374
  cmps(c,0,(int32_t)c->r[3],0); // 80352378
  W32(c->r[1]+0x00000014u,c->r[0]); // 8035237C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80352380
  c->r[31]=c->r[3]|c->r[3]; // 80352384
  if (!crb(c,2)) { goto L_803523CC; } // 80352388
  c->r[4]=0u+0x80530000u; // 8035238C
  c->r[6]=0u+0x80350000u; // 80352390
  c->r[4]=c->r[4]+0xFFFF9540u; // 80352394
  c->r[5]=0u+0x00000001u; // 80352398
  c->r[0]=R8(c->r[4]+0x0000015Au); // 8035239C
  c->r[3]=c->r[4]+0x00000008u; // 803523A0
  W8(c->r[4]+0x00000159u,c->r[5]); // 803523A4
  c->r[7]=c->r[4]+0x00000094u; // 803523A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803523AC
  c->r[6]=c->r[6]+0x00002440u; // 803523B0
  c->r[5]=c->r[4]+c->r[0]; // 803523B4
  c->r[4]=R32(c->r[5]+0x0000016Cu); // 803523B8
  c->r[5]=R32(c->r[5]+0x00000174u); // 803523BC
  c->lr=0x803523C4u; f_8034F21C(c); // 803523C0
  cmps(c,0,(int32_t)c->r[3],0); // 803523C4
  if (crb(c,2)) { goto L_8035242C; } // 803523C8
L_803523CC:;
  c->r[3]=0u+0x80530000u; // 803523CC
  c->r[3]=c->r[3]+0xFFFF9540u; // 803523D0
  c->r[0]=R8(c->r[3]+0x0000015Au); // 803523D4
  cmps(c,0,(int32_t)c->r[0],0); // 803523D8
  if (!crb(c,2)) { goto L_803523E4; } // 803523DC
  W32(c->r[3]+0x00000160u,c->r[31]); // 803523E0
L_803523E4:;
  c->r[5]=0u+0x80530000u; // 803523E4
  c->r[4]=0u+0x00000000u; // 803523E8
  c->r[5]=c->r[5]+0xFFFF9540u; // 803523EC
  c->r[0]=R8(c->r[5]+0x0000015Au); // 803523F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803523F4
  c->r[3]=c->r[5]+c->r[0]; // 803523F8
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 803523FC
  c->r[0]=R8(c->r[5]+0x00000159u); // 80352400
  cmps(c,0,(int32_t)c->r[0],0); // 80352404
  if (crb(c,2)) { goto L_80352428; } // 80352408
  c->r[4]=0u+0x80350000u; // 8035240C
  c->r[3]=c->r[5]+0x00000008u; // 80352410
  c->r[4]=c->r[4]+0x000026F0u; // 80352414
  c->r[5]=c->r[5]+0x00000094u; // 80352418
  c->lr=0x80352420u; f_8034FE9C(c); // 8035241C
  cmps(c,0,(int32_t)c->r[3],0); // 80352420
  if (crb(c,2)) { goto L_8035242C; } // 80352424
L_80352428:;
  c->lr=0x8035242Cu; f_803525B4(c); // 80352428
L_8035242C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8035242C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80352430
  c->lr=c->r[0]; // 80352434
  c->r[1]=c->r[1]+0x00000010u; // 80352438
  return; // 8035243C
}

// ReadCallbackFromReload
void f_80352440(Ctx* __restrict c) {
  trace_call(0x80352440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352440
  c->r[0]=c->lr; // 80352444
  c->r[5]=0u+0x80530000u; // 80352448
  W32(c->r[1]+0x00000014u,c->r[0]); // 8035244C
  c->r[5]=c->r[5]+0xFFFF9540u; // 80352450
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80352454
  c->r[31]=c->r[3]|c->r[3]; // 80352458
  c->r[0]=R8(c->r[5]+0x0000015Au); // 8035245C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80352460
  c->r[4]=c->r[5]+c->r[0]; // 80352464
  c->r[0]=R32(c->r[4]+0x00000174u); // 80352468
  cmpu(c,0,c->r[3],c->r[0]); // 8035246C
  if (!crb(c,2)) { goto L_8035249C; } // 80352470
  W32(c->r[4]+0x0000017Cu,c->r[3]); // 80352474
  c->r[0]=0u+0x00000000u; // 80352478
  c->r[4]=0u+0x80350000u; // 8035247C
  c->r[3]=c->r[5]+0x00000008u; // 80352480
  W8(c->r[5]+0x00000159u,c->r[0]); // 80352484
  c->r[4]=c->r[4]+0x00002528u; // 80352488
  c->r[5]=c->r[5]+0x00000094u; // 8035248C
  c->lr=0x80352494u; f_8034FE9C(c); // 80352490
  cmps(c,0,(int32_t)c->r[3],0); // 80352494
  if (crb(c,2)) { goto L_80352514; } // 80352498
L_8035249C:;
  c->r[3]=0u+0x80530000u; // 8035249C
  c->r[3]=c->r[3]+0xFFFF9540u; // 803524A0
  c->r[0]=R8(c->r[3]+0x0000015Au); // 803524A4
  cmps(c,0,(int32_t)c->r[0],0); // 803524A8
  if (!crb(c,2)) { goto L_803524CC; } // 803524AC
  cmps(c,0,(int32_t)c->r[31],0); // 803524B0
  c->r[0]=0u+0xFFFFFF80u; // 803524B4
  if (crb(c,2)) { goto L_803524C0; } // 803524B8
  c->r[0]=c->r[31]|c->r[31]; // 803524BC
L_803524C0:;
  c->r[3]=0u+0x80530000u; // 803524C0
  c->r[3]=c->r[3]+0xFFFF9540u; // 803524C4
  W32(c->r[3]+0x00000160u,c->r[0]); // 803524C8
L_803524CC:;
  c->r[5]=0u+0x80530000u; // 803524CC
  c->r[4]=0u+0x00000000u; // 803524D0
  c->r[5]=c->r[5]+0xFFFF9540u; // 803524D4
  c->r[0]=R8(c->r[5]+0x0000015Au); // 803524D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803524DC
  c->r[3]=c->r[5]+c->r[0]; // 803524E0
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 803524E4
  c->r[0]=R8(c->r[5]+0x00000159u); // 803524E8
  cmps(c,0,(int32_t)c->r[0],0); // 803524EC
  if (crb(c,2)) { goto L_80352510; } // 803524F0
  c->r[4]=0u+0x80350000u; // 803524F4
  c->r[3]=c->r[5]+0x00000008u; // 803524F8
  c->r[4]=c->r[4]+0x000026F0u; // 803524FC
  c->r[5]=c->r[5]+0x00000094u; // 80352500
  c->lr=0x80352508u; f_8034FE9C(c); // 80352504
  cmps(c,0,(int32_t)c->r[3],0); // 80352508
  if (crb(c,2)) { goto L_80352514; } // 8035250C
L_80352510:;
  c->lr=0x80352514u; f_803525B4(c); // 80352510
L_80352514:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80352514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80352518
  c->lr=c->r[0]; // 8035251C
  c->r[1]=c->r[1]+0x00000010u; // 80352520
  return; // 80352524
}

// CloseCallbackFromReload
void f_80352528(Ctx* __restrict c) {
  trace_call(0x80352528u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352528
  c->r[0]=c->lr; // 8035252C
  cmps(c,0,(int32_t)c->r[3],0); // 80352530
  W32(c->r[1]+0x00000014u,c->r[0]); // 80352534
  if (!crb(c,2)) { goto L_80352544; } // 80352538
  c->lr=0x80352540u; f_803525B4(c); // 8035253C
  goto L_803525A4; // 80352540
L_80352544:;
  c->r[4]=0u+0x80530000u; // 80352544
  c->r[4]=c->r[4]+0xFFFF9540u; // 80352548
  c->r[0]=R8(c->r[4]+0x0000015Au); // 8035254C
  cmps(c,0,(int32_t)c->r[0],0); // 80352550
  if (!crb(c,2)) { goto L_8035255C; } // 80352554
  W32(c->r[4]+0x00000160u,c->r[3]); // 80352558
L_8035255C:;
  c->r[5]=0u+0x80530000u; // 8035255C
  c->r[4]=0u+0x00000000u; // 80352560
  c->r[5]=c->r[5]+0xFFFF9540u; // 80352564
  c->r[0]=R8(c->r[5]+0x0000015Au); // 80352568
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8035256C
  c->r[3]=c->r[5]+c->r[0]; // 80352570
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 80352574
  c->r[0]=R8(c->r[5]+0x00000159u); // 80352578
  cmps(c,0,(int32_t)c->r[0],0); // 8035257C
  if (crb(c,2)) { goto L_803525A0; } // 80352580
  c->r[4]=0u+0x80350000u; // 80352584
  c->r[3]=c->r[5]+0x00000008u; // 80352588
  c->r[4]=c->r[4]+0x000026F0u; // 8035258C
  c->r[5]=c->r[5]+0x00000094u; // 80352590
  c->lr=0x80352598u; f_8034FE9C(c); // 80352594
  cmps(c,0,(int32_t)c->r[3],0); // 80352598
  if (crb(c,2)) { goto L_803525A4; } // 8035259C
L_803525A0:;
  c->lr=0x803525A4u; f_803525B4(c); // 803525A0
L_803525A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803525A4
  c->lr=c->r[0]; // 803525A8
  c->r[1]=c->r[1]+0x00000010u; // 803525AC
  return; // 803525B0
}

// FinishFromReload
void f_803525B4(Ctx* __restrict c) {
  trace_call(0x803525B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803525B4
  c->r[0]=c->lr; // 803525B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803525BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803525C0
  c->r[31]=0u+0x00000000u; // 803525C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803525C8
  c->r[30]=0u+0x80350000u; // 803525CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803525D0
  c->r[29]=0u+0x80530000u; // 803525D4
  c->r[29]=c->r[29]+0xFFFF9540u; // 803525D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803525DC
L_803525E0:;
  c->r[3]=R8(c->r[29]+0x0000015Au); // 803525E0
  c->r[3]=c->r[3]+0x00000001u; // 803525E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803525E8
  W8(c->r[29]+0x0000015Au,c->r[3]); // 803525EC
  cmpu(c,0,c->r[0],0x00000002u); // 803525F0
  if (!crb(c,0)) { goto L_80352628; } // 803525F4
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803525F8
  W8(c->r[29]+0x00000159u,c->r[31]); // 803525FC
  c->r[3]=c->r[29]+c->r[0]; // 80352600
  c->r[4]=c->r[29]+0x00000008u; // 80352604
  c->r[3]=R32(c->r[3]+0x00000164u); // 80352608
  c->r[6]=c->r[30]+0x00002370u; // 8035260C
  c->r[7]=c->r[29]+0x00000094u; // 80352610
  c->r[5]=0u+0x00000001u; // 80352614
  c->lr=0x8035261Cu; f_8034FD40(c); // 80352618
  cmps(c,0,(int32_t)c->r[3],0); // 8035261C
  if (!crb(c,2)) { IRQCHK(c); goto L_803525E0; } // 80352620
  goto L_803526D0; // 80352624
L_80352628:;
  c->r[0]=R32(c->r[29]+0x00000160u); // 80352628
  cmps(c,0,(int32_t)c->r[0],0); // 8035262C
  if (crb(c,2)) { goto L_80352644; } // 80352630
  if (!crb(c,0)) { goto L_8035264C; } // 80352634
  cmps(c,0,(int32_t)c->r[0],-12); // 80352638
  if (crb(c,2)) { goto L_8035264C; } // 8035263C
  goto L_8035264C; // 80352640
L_80352644:;
  c->r[28]=0u+0x00000003u; // 80352644
  goto L_8035269C; // 80352648
L_8035264C:;
  c->r[30]=0u+0x80530000u; // 8035264C
  c->r[4]=0u+0x00000000u; // 80352650
  c->r[30]=c->r[30]+0xFFFF9540u; // 80352654
  c->r[5]=0u+0x00004000u; // 80352658
  c->r[29]=R32(c->r[30]+0x0000016Cu); // 8035265C
  c->r[3]=c->r[29]|c->r[29]; // 80352660
  c->lr=0x80352668u; f_80006370(c); // 80352664
  c->r[3]=c->r[29]|c->r[29]; // 80352668
  c->r[4]=c->r[13]+0xFFFFDC10u; // 8035266C
  c->r[5]=0u+0x00000004u; // 80352670
  c->lr=0x80352678u; f_8000626C(c); // 80352674
  c->r[3]=c->r[29]+0x00003FFCu; // 80352678
  c->r[4]=c->r[13]+0xFFFFDC18u; // 8035267C
  c->r[5]=0u+0x00000004u; // 80352680
  c->lr=0x80352688u; f_8000626C(c); // 80352684
  c->r[0]=0u+0x00000008u; // 80352688
  c->r[28]=0u+0x00000003u; // 8035268C
  W16(c->r[29]+0x00000006u,c->r[0]); // 80352690
  c->r[0]=R32(c->r[30]+0x00000174u); // 80352694
  W32(c->r[30]+0x0000017Cu,c->r[0]); // 80352698
L_8035269C:;
  c->r[30]=0u+0x00000000u; // 8035269C
  c->r[3]=0u+0x80000000u; // 803526A0
  c->r[31]=0u+0x80530000u; // 803526A4
  W8(c->r[3]+0x000038FFu,c->r[30]); // 803526A8
  c->r[31]=c->r[31]+0xFFFF9540u; // 803526AC
  c->r[12]=R32(c->r[31]+0x0000015Cu); // 803526B0
  cmps(c,0,(int32_t)c->r[12],0); // 803526B4
  if (crb(c,2)) { goto L_803526CC; } // 803526B8
  c->r[3]=R32(c->r[31]+0x00000160u); // 803526BC
  c->ctr=c->r[12]; // 803526C0
  if (true) { c->lr=0x803526C8u; dispatch(c,c->ctr); } // 803526C4
  W32(c->r[31]+0x0000015Cu,c->r[30]); // 803526C8
L_803526CC:;
  W8(c->r[13]+0xFFFFEF48u,c->r[28]); // 803526CC
L_803526D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803526D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803526D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803526D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803526DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 803526E0
  c->lr=c->r[0]; // 803526E4
  c->r[1]=c->r[1]+0x00000020u; // 803526E8
  return; // 803526EC
}

// fn_803526F0
void f_803526F0(Ctx* __restrict c) {
  trace_call(0x803526F0u);
  f_803525B4(c); return; // 803526F0
}

// ParseConfBuf
void f_803526F4(Ctx* __restrict c) {
  trace_call(0x803526F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803526F4
  c->r[0]=c->lr; // 803526F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803526FC
  c->r[11]=c->r[1]+0x00000060u; // 80352700
  c->lr=0x80352708u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80352704
  cmpu(c,0,c->r[4],0x0000000Cu); // 80352708
  c->r[27]=0u+0x80460000u; // 8035270C
  c->r[25]=c->r[3]|c->r[3]; // 80352710
  c->r[26]=c->r[4]|c->r[4]; // 80352714
  c->r[27]=c->r[27]+0xFFFF9CF0u; // 80352718
  if (crb(c,0)) { goto L_80352924; } // 8035271C
  cmpu(c,0,c->r[4],0x00004000u); // 80352720
  if (crb(c,1)) { goto L_80352924; } // 80352724
  c->r[0]=0u+0x00000024u; // 80352728
  c->r[31]=c->r[3]+c->r[4]; // 8035272C
  W32(c->r[13]+0xFFFFEF54u,c->r[0]); // 80352730
  c->r[4]=c->r[13]+0xFFFFDC10u; // 80352734
  c->r[5]=0u+0x00000004u; // 80352738
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 8035273C
  c->lr=0x80352744u; f_803A31C8(c); // 80352740
  cmps(c,0,(int32_t)c->r[3],0); // 80352744
  if (!crb(c,2)) { goto L_80352924; } // 80352748
  c->r[3]=c->r[31]|c->r[31]; // 8035274C
  c->r[4]=c->r[13]+0xFFFFDC18u; // 80352750
  c->r[5]=0u+0x00000004u; // 80352754
  c->lr=0x8035275Cu; f_803A31C8(c); // 80352758
  cmps(c,0,(int32_t)c->r[3],0); // 8035275C
  if (!crb(c,2)) { goto L_80352924; } // 80352760
  cmpu(c,0,c->r[26],0x00004000u); // 80352764
  if (!crb(c,0)) { goto L_80352794; } // 80352768
  c->r[22]=addc(c,~c->r[26],0x00004000u,1); // 8035276C
  c->r[3]=c->r[31]|c->r[31]; // 80352770
  c->r[5]=c->r[22]|c->r[22]; // 80352774
  c->r[4]=0u+0x00000000u; // 80352778
  c->lr=0x80352780u; f_80006370(c); // 8035277C
  c->r[31]=c->r[31]+c->r[22]; // 80352780
  c->r[4]=c->r[13]+0xFFFFDC18u; // 80352784
  c->r[3]=c->r[31]|c->r[31]; // 80352788
  c->r[5]=0u+0x00000004u; // 8035278C
  c->lr=0x80352794u; f_8000626C(c); // 80352790
L_80352794:;
  c->r[0]=c->r[25]+0x00000006u; // 80352794
  cmpu(c,0,c->r[0],c->r[31]); // 80352798
  if (!crb(c,1)) { goto L_803527A8; } // 8035279C
  c->r[0]=0u+0x00000000u; // 803527A0
  goto L_803527B8; // 803527A4
L_803527A8:;
  c->r[3]=R8(c->r[25]+0x00000004u); // 803527A8
  c->r[0]=0u+0x00000001u; // 803527AC
  c->r[30]=R8(c->r[25]+0x00000005u); // 803527B0
  c->r[30]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 803527B4
L_803527B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 803527B8
  if (crb(c,2)) { goto L_80352924; } // 803527BC
  c->r[29]=c->r[25]+0x00000006u; // 803527C0
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 803527C4
  c->r[3]=c->r[29]+c->r[0]; // 803527C8
  c->r[23]=0u+0x00000000u; // 803527CC
  c->r[0]=c->r[3]+0x00000002u; // 803527D0
  c->r[24]=c->r[29]|c->r[29]; // 803527D4
  c->r[28]=c->r[0]-c->r[25]; // 803527D8
  goto L_80352824; // 803527DC
L_803527E0:;
  cmpu(c,0,c->r[28],c->r[26]); // 803527E0
  if (crb(c,1)) { goto L_80352924; } // 803527E4
  c->r[0]=c->r[24]-c->r[25]; // 803527E8
  cmpu(c,0,c->r[0],c->r[26]); // 803527EC
  if (crb(c,1)) { goto L_80352924; } // 803527F0
  c->r[0]=R16(c->r[24]+0x00000000u); // 803527F4
  cmpu(c,0,c->r[28],c->r[0]); // 803527F8
  if (!crb(c,2)) { goto L_80352924; } // 803527FC
  c->r[3]=c->r[25]+c->r[28]; // 80352800
  c->r[4]=c->r[1]+0x00000008u; // 80352804
  c->lr=0x8035280Cu; f_80352940(c); // 80352808
  cmps(c,0,(int32_t)c->r[3],0); // 8035280C
  if (crb(c,2)) { goto L_80352924; } // 80352810
  c->r[0]=R32(c->r[1]+0x00000024u); // 80352814
  c->r[24]=c->r[24]+0x00000002u; // 80352818
  c->r[23]=c->r[23]+0x00000001u; // 8035281C
  c->r[28]=c->r[28]+c->r[0]; // 80352820
L_80352824:;
  cmpu(c,0,c->r[23],c->r[30]); // 80352824
  if (crb(c,0)) { IRQCHK(c); goto L_803527E0; } // 80352828
  cmpu(c,0,c->r[28],c->r[26]); // 8035282C
  if (crb(c,1)) { goto L_80352924; } // 80352830
  c->r[0]=rotl(c->r[23],1)&0xFFFFFFFEu; // 80352834
  c->r[0]=R16(c->r[29]+c->r[0]); // 80352838
  cmpu(c,0,c->r[28],c->r[0]); // 8035283C
  if (!crb(c,2)) { goto L_80352924; } // 80352840
  c->r[3]=c->r[31]+0xFFFFFFBAu; // 80352844
  c->r[0]=c->r[25]+c->r[28]; // 80352848
  cmpu(c,0,c->r[0],c->r[3]); // 8035284C
  if (crb(c,1)) { goto L_80352924; } // 80352850
  c->r[28]=c->r[3]-c->r[0]; // 80352854
  c->r[5]=c->r[31]-c->r[3]; // 80352858
  c->r[4]=0u+0x00000000u; // 8035285C
  c->lr=0x80352864u; f_80006370(c); // 80352860
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80352864
  c->r[31]=c->r[31]+0xFFFFFFFEu; // 80352868
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8035286C
  c->r[26]=c->r[27]+c->r[0]; // 80352870
  goto L_803528F8; // 80352874
L_80352878:;
  c->r[3]=c->r[22]|c->r[22]; // 80352878
  c->lr=0x80352880u; f_803ADAA8(c); // 8035287C
  c->r[21]=c->r[3]|c->r[3]; // 80352880
  c->r[24]=c->r[29]|c->r[29]; // 80352884
  c->r[23]=0u+0x00000000u; // 80352888
  goto L_803528EC; // 8035288C
L_80352890:;
  c->r[0]=R16(c->r[24]+0x00000000u); // 80352890
  c->r[4]=c->r[25]+c->r[0]; // 80352894
  c->r[0]=R8(c->r[25]+c->r[0]); // 80352898
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 8035289C
  c->r[0]=c->r[3]+0x00000001u; // 803528A0
  cmpu(c,0,c->r[21],c->r[0]); // 803528A4
  if (!crb(c,2)) { goto L_803528E4; } // 803528A8
  c->r[3]=c->r[22]|c->r[22]; // 803528AC
  c->r[5]=c->r[21]|c->r[21]; // 803528B0
  c->r[4]=c->r[4]+0x00000001u; // 803528B4
  c->lr=0x803528BCu; f_803A31C8(c); // 803528B8
  cmps(c,0,(int32_t)c->r[3],0); // 803528BC
  if (!crb(c,2)) { goto L_803528E4; } // 803528C0
  c->r[0]=R32(c->r[27]+0x00000004u); // 803528C4
  c->r[3]=rotl(c->r[23],1)&0xFFFFFFFEu; // 803528C8
  c->r[3]=c->r[29]+c->r[3]; // 803528CC
  c->r[0]=0u-c->r[0]; // 803528D0
  c->r[3]=c->r[3]-c->r[25]; // 803528D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803528D8
  W16(c->r[31]+c->r[0],c->r[3]); // 803528DC
  goto L_803528F4; // 803528E0
L_803528E4:;
  c->r[24]=c->r[24]+0x00000002u; // 803528E4
  c->r[23]=c->r[23]+0x00000001u; // 803528E8
L_803528EC:;
  cmpu(c,0,c->r[23],c->r[30]); // 803528EC
  if (crb(c,0)) { IRQCHK(c); goto L_80352890; } // 803528F0
L_803528F4:;
  c->r[27]=c->r[27]+0x00000008u; // 803528F4
L_803528F8:;
  cmpu(c,0,c->r[27],c->r[26]); // 803528F8
  if (!crb(c,0)) { goto L_8035290C; } // 803528FC
  c->r[22]=R32(c->r[27]+0x00000000u); // 80352900
  cmps(c,0,(int32_t)c->r[22],0); // 80352904
  if (!crb(c,2)) { IRQCHK(c); goto L_80352878; } // 80352908
L_8035290C:;
  c->r[0]=c->r[31]-c->r[25]; // 8035290C
  W32(c->r[13]+0xFFFFEF50u,c->r[30]); // 80352910
  c->r[3]=0u+0x00000000u; // 80352914
  W32(c->r[13]+0xFFFFEF58u,c->r[0]); // 80352918
  W32(c->r[13]+0xFFFFEF4Cu,c->r[28]); // 8035291C
  goto L_80352928; // 80352920
L_80352924:;
  c->r[3]=0u+0x00000002u; // 80352924
L_80352928:;
  c->r[11]=c->r[1]+0x00000060u; // 80352928
  c->lr=0x80352930u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8035292C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80352930
  c->lr=c->r[0]; // 80352934
  c->r[1]=c->r[1]+0x00000060u; // 80352938
  return; // 8035293C
}

// UnpackItem
void f_80352940(Ctx* __restrict c) {
  trace_call(0x80352940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352940
  c->r[0]=c->lr; // 80352944
  c->r[5]=0u+0x00000020u; // 80352948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8035294C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80352950
  c->r[31]=c->r[4]|c->r[4]; // 80352954
  c->r[4]=0u+0x00000000u; // 80352958
  W32(c->r[1]+0x00000008u,c->r[30]); // 8035295C
  c->r[30]=c->r[3]|c->r[3]; // 80352960
  c->r[3]=c->r[31]|c->r[31]; // 80352964
  c->lr=0x8035296Cu; f_80006370(c); // 80352968
  c->r[4]=R8(c->r[30]+0x00000000u); // 8035296C
  c->r[0]=c->r[30]+0x00000001u; // 80352970
  W32(c->r[31]+0x00000014u,c->r[0]); // 80352974
  c->r[3]=rotl(c->r[4],0)&0x0000001Fu; // 80352978
  c->r[6]=rotl(c->r[4],0)&0x000000E0u; // 8035297C
  c->r[0]=c->r[3]+0x00000001u; // 80352980
  c->r[3]=c->r[30]+c->r[0]; // 80352984
  cmps(c,0,(int32_t)c->r[6],128); // 80352988
  c->r[3]=c->r[3]+0x00000001u; // 8035298C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80352990
  W32(c->r[31]+0x00000018u,c->r[3]); // 80352994
  if (crb(c,2)) { goto L_803529F4; } // 80352998
  if (!crb(c,0)) { goto L_803529C4; } // 8035299C
  cmps(c,0,(int32_t)c->r[6],64); // 803529A0
  if (crb(c,2)) { goto L_80352A18; } // 803529A4
  if (!crb(c,0)) { goto L_803529B8; } // 803529A8
  cmps(c,0,(int32_t)c->r[6],32); // 803529AC
  if (crb(c,2)) { goto L_80352A3C; } // 803529B0
  goto L_80352AB0; // 803529B4
L_803529B8:;
  cmps(c,0,(int32_t)c->r[6],96); // 803529B8
  if (crb(c,2)) { goto L_803529E8; } // 803529BC
  goto L_80352AB0; // 803529C0
L_803529C4:;
  cmps(c,0,(int32_t)c->r[6],192); // 803529C4
  if (crb(c,2)) { goto L_80352A0C; } // 803529C8
  if (!crb(c,0)) { goto L_803529DC; } // 803529CC
  cmps(c,0,(int32_t)c->r[6],160); // 803529D0
  if (crb(c,2)) { goto L_80352A00; } // 803529D4
  goto L_80352AB0; // 803529D8
L_803529DC:;
  cmps(c,0,(int32_t)c->r[6],224); // 803529DC
  if (crb(c,2)) { goto L_803529E8; } // 803529E0
  goto L_80352AB0; // 803529E4
L_803529E8:;
  c->r[0]=0u+0x00000001u; // 803529E8
  W32(c->r[31]+0x00000010u,c->r[0]); // 803529EC
  goto L_80352A64; // 803529F0
L_803529F4:;
  c->r[0]=0u+0x00000002u; // 803529F4
  W32(c->r[31]+0x00000010u,c->r[0]); // 803529F8
  goto L_80352A64; // 803529FC
L_80352A00:;
  c->r[0]=0u+0x00000004u; // 80352A00
  W32(c->r[31]+0x00000010u,c->r[0]); // 80352A04
  goto L_80352A64; // 80352A08
L_80352A0C:;
  c->r[0]=0u+0x00000008u; // 80352A0C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80352A10
  goto L_80352A64; // 80352A14
L_80352A18:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 80352A18
  c->r[0]=c->r[3]+0x00000001u; // 80352A1C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80352A20
  c->r[4]=c->r[4]+0x00000001u; // 80352A24
  W32(c->r[31]+0x00000018u,c->r[0]); // 80352A28
  c->r[0]=c->r[3]+0x00000001u; // 80352A2C
  W32(c->r[31]+0x00000010u,c->r[4]); // 80352A30
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80352A34
  goto L_80352A64; // 80352A38
L_80352A3C:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 80352A3C
  c->r[0]=c->r[3]+0x00000002u; // 80352A40
  c->r[4]=R8(c->r[3]+0x00000001u); // 80352A44
  c->r[4]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 80352A48
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80352A4C
  c->r[4]=c->r[4]+0x00000001u; // 80352A50
  W32(c->r[31]+0x00000018u,c->r[0]); // 80352A54
  c->r[0]=c->r[3]+0x00000002u; // 80352A58
  W32(c->r[31]+0x00000010u,c->r[4]); // 80352A5C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80352A60
L_80352A64:;
  cmpu(c,0,c->r[6],0x00000040u); // 80352A64
  if (crb(c,2)) { goto L_80352A74; } // 80352A68
  cmpu(c,0,c->r[6],0x00000020u); // 80352A6C
  if (!crb(c,2)) { goto L_80352A80; } // 80352A70
L_80352A74:;
  c->r[0]=0u+0x00000040u; // 80352A74
  W8(c->r[31]+0x00000009u,c->r[0]); // 80352A78
  goto L_80352A94; // 80352A7C
L_80352A80:;
  W8(c->r[31]+0x00000008u,c->r[6]); // 80352A80
  c->r[3]=c->r[31]|c->r[31]; // 80352A84
  c->r[4]=R32(c->r[31]+0x00000018u); // 80352A88
  c->r[5]=R32(c->r[31]+0x00000010u); // 80352A8C
  c->lr=0x80352A94u; f_8000626C(c); // 80352A90
L_80352A94:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80352A94
  c->r[0]=R32(c->r[31]+0x00000010u); // 80352A98
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80352A9C
  c->r[0]=c->r[3]+c->r[0]; // 80352AA0
  c->r[3]=c->r[0]+c->r[4]; // 80352AA4
  c->r[0]=c->r[3]+0x00000001u; // 80352AA8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80352AAC
L_80352AB0:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80352AB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80352AB4
  c->r[0]=0u-c->r[3]; // 80352AB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80352ABC
  c->r[0]=c->r[0]|c->r[3]; // 80352AC0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80352AC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80352AC8
  c->lr=c->r[0]; // 80352ACC
  c->r[1]=c->r[1]+0x00000010u; // 80352AD0
  return; // 80352AD4
}

// DeleteItemByID
void f_80352AD8(Ctx* __restrict c) {
  trace_call(0x80352AD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352AD8
  c->r[0]=c->lr; // 80352ADC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80352AE0
  c->r[11]=c->r[1]+0x00000030u; // 80352AE4
  c->lr=0x80352AECu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80352AE8
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80352AEC
  c->r[31]=0u+0x80530000u; // 80352AF0
  c->r[31]=c->r[31]+0xFFFF96E0u; // 80352AF4
  cmpu(c,0,c->r[3],c->r[0]); // 80352AF8
  if (!crb(c,0)) { goto L_80352C50; } // 80352AFC
  c->r[4]=R32(c->r[13]+0xFFFFEF58u); // 80352B00
  cmps(c,0,(int32_t)c->r[4],0); // 80352B04
  if (crb(c,2)) { goto L_80352C50; } // 80352B08
  c->r[0]=0u-c->r[3]; // 80352B0C
  c->r[28]=c->r[31]+c->r[4]; // 80352B10
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80352B14
  c->r[30]=R16(c->r[28]+c->r[0]); // 80352B18
  cmps(c,0,(int32_t)c->r[30],0); // 80352B1C
  if (crb(c,2)) { goto L_80352C50; } // 80352B20
  c->r[0]=R32(c->r[13]+0xFFFFEF50u); // 80352B24
  cmps(c,0,(int32_t)c->r[0],0); // 80352B28
  if (crb(c,2)) { goto L_80352C50; } // 80352B2C
  c->r[27]=c->r[31]+c->r[30]; // 80352B30
  c->r[25]=c->r[31]+0x00000006u; // 80352B34
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80352B38
  c->r[5]=R16(c->r[31]+c->r[30]); // 80352B3C
  c->r[24]=c->r[25]+c->r[0]; // 80352B40
  c->r[3]=R16(c->r[27]+0x00000002u); // 80352B44
  c->r[4]=c->r[27]|c->r[27]; // 80352B48
  c->r[0]=c->r[30]+0x00000002u; // 80352B4C
  c->r[6]=c->r[3]-c->r[5]; // 80352B50
  c->r[26]=R16(c->r[24]+0x00000000u); // 80352B54
  c->r[3]=c->r[27]|c->r[27]; // 80352B58
  c->r[5]=c->r[5]-c->r[0]; // 80352B5C
  c->r[29]=c->r[6]+0x00000002u; // 80352B60
  c->r[4]=c->r[4]+0x00000002u; // 80352B64
  c->lr=0x80352B6Cu; f_803A30A4(c); // 80352B68
  c->r[4]=c->r[24]+0xFFFFFFFEu; // 80352B6C
  c->r[0]=c->r[4]+0x00000002u; // 80352B70
  c->r[0]=c->r[0]-c->r[25]; // 80352B74
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80352B78
  c->ctr=c->r[0]; // 80352B7C
  cmpu(c,0,c->r[4],c->r[25]); // 80352B80
  if (crb(c,0)) { goto L_80352BB4; } // 80352B84
L_80352B88:;
  cmpu(c,0,c->r[4],c->r[27]); // 80352B88
  if (!crb(c,0)) { goto L_80352BA0; } // 80352B8C
  c->r[3]=R16(c->r[4]+0x00000000u); // 80352B90
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80352B94
  W16(c->r[4]+0x00000000u,c->r[0]); // 80352B98
  goto L_80352BAC; // 80352B9C
L_80352BA0:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 80352BA0
  c->r[0]=c->r[0]-c->r[29]; // 80352BA4
  W16(c->r[4]+0x00000000u,c->r[0]); // 80352BA8
L_80352BAC:;
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 80352BAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80352B88; } // 80352BB0
L_80352BB4:;
  c->r[5]=R16(c->r[27]+0x00000000u); // 80352BB4
  c->r[4]=c->r[31]+c->r[29]; // 80352BB8
  c->r[0]=c->r[5]+c->r[29]; // 80352BBC
  c->r[3]=c->r[31]+c->r[5]; // 80352BC0
  c->r[4]=c->r[5]+c->r[4]; // 80352BC4
  c->r[5]=c->r[26]-c->r[0]; // 80352BC8
  c->lr=0x80352BD0u; f_803A30A4(c); // 80352BCC
  c->r[0]=c->r[26]-c->r[29]; // 80352BD0
  c->r[5]=c->r[29]|c->r[29]; // 80352BD4
  c->r[3]=c->r[31]+c->r[0]; // 80352BD8
  c->r[4]=0u+0x00000000u; // 80352BDC
  c->lr=0x80352BE4u; f_80006370(c); // 80352BE0
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80352BE4
  c->r[6]=0u+0x00000000u; // 80352BE8
  c->r[3]=0u+0x00000000u; // 80352BEC
  c->ctr=c->r[0]; // 80352BF0
  cmpu(c,0,c->r[0],0x00000000u); // 80352BF4
  if (!crb(c,1)) { goto L_80352C2C; } // 80352BF8
L_80352BFC:;
  c->r[0]=0u-c->r[6]; // 80352BFC
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80352C00
  c->r[4]=R16(c->r[28]+c->r[5]); // 80352C04
  cmpu(c,0,c->r[4],c->r[30]); // 80352C08
  if (crb(c,0)) { goto L_80352C24; } // 80352C0C
  if (!crb(c,1)) { goto L_80352C20; } // 80352C10
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 80352C14
  W16(c->r[28]+c->r[5],c->r[0]); // 80352C18
  goto L_80352C24; // 80352C1C
L_80352C20:;
  W16(c->r[28]+c->r[5],c->r[3]); // 80352C20
L_80352C24:;
  c->r[6]=c->r[6]+0x00000001u; // 80352C24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80352BFC; } // 80352C28
L_80352C2C:;
  c->r[4]=R32(c->r[13]+0xFFFFEF4Cu); // 80352C2C
  c->r[0]=0u+0x00000001u; // 80352C30
  c->r[3]=R32(c->r[13]+0xFFFFEF50u); // 80352C34
  c->r[4]=c->r[4]+c->r[29]; // 80352C38
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 80352C3C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80352C40
  W32(c->r[13]+0xFFFFEF4Cu,c->r[4]); // 80352C44
  W32(c->r[13]+0xFFFFEF50u,c->r[0]); // 80352C48
  W16(c->r[31]+0x00000004u,c->r[0]); // 80352C4C
L_80352C50:;
  c->r[11]=c->r[1]+0x00000030u; // 80352C50
  c->lr=0x80352C58u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80352C54
  c->r[0]=R32(c->r[1]+0x00000034u); // 80352C58
  c->lr=c->r[0]; // 80352C5C
  c->r[1]=c->r[1]+0x00000030u; // 80352C60
  return; // 80352C64
}

// CreateItemByID
void f_80352C68(Ctx* __restrict c) {
  trace_call(0x80352C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352C68
  c->r[0]=c->lr; // 80352C6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80352C70
  c->r[11]=c->r[1]+0x00000030u; // 80352C74
  c->lr=0x80352C7Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80352C78
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80352C7C
  c->r[31]=0u+0x80530000u; // 80352C80
  c->r[7]=0u+0x80460000u; // 80352C84
  c->r[23]=c->r[3]|c->r[3]; // 80352C88
  cmpu(c,0,c->r[3],c->r[0]); // 80352C8C
  c->r[24]=c->r[4]|c->r[4]; // 80352C90
  c->r[25]=c->r[5]|c->r[5]; // 80352C94
  c->r[26]=c->r[6]|c->r[6]; // 80352C98
  c->r[31]=c->r[31]+0xFFFF96E0u; // 80352C9C
  c->r[7]=c->r[7]+0xFFFF9CF0u; // 80352CA0
  c->r[29]=0u+0x00000001u; // 80352CA4
  if (!crb(c,0)) { goto L_80352EC4; } // 80352CA8
  c->r[0]=0u+0x00000000u; // 80352CAC
  cmpu(c,0,c->r[5],c->r[0]); // 80352CB0
  if (crb(c,2)) { goto L_80352EC4; } // 80352CB4
  c->r[0]=R32(c->r[13]+0xFFFFEF50u); // 80352CB8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80352CBC
  if (!crb(c,0)) { goto L_80352EC4; } // 80352CC0
  c->r[0]=R32(c->r[13]+0xFFFFEF58u); // 80352CC4
  cmps(c,0,(int32_t)c->r[0],0); // 80352CC8
  if (crb(c,2)) { goto L_80352EC4; } // 80352CCC
  cmps(c,0,(int32_t)c->r[4],160); // 80352CD0
  if (crb(c,2)) { goto L_80352D28; } // 80352CD4
  if (!crb(c,0)) { goto L_80352D00; } // 80352CD8
  cmps(c,0,(int32_t)c->r[4],96); // 80352CDC
  if (crb(c,2)) { goto L_80352D18; } // 80352CE0
  if (!crb(c,0)) { goto L_80352CF4; } // 80352CE4
  cmps(c,0,(int32_t)c->r[4],64); // 80352CE8
  if (crb(c,2)) { goto L_80352D38; } // 80352CEC
  goto L_80352EC4; // 80352CF0
L_80352CF4:;
  cmps(c,0,(int32_t)c->r[4],128); // 80352CF4
  if (crb(c,2)) { goto L_80352D20; } // 80352CF8
  goto L_80352EC4; // 80352CFC
L_80352D00:;
  cmps(c,0,(int32_t)c->r[4],224); // 80352D00
  if (crb(c,2)) { goto L_80352D18; } // 80352D04
  if (!crb(c,0)) { goto L_80352EC4; } // 80352D08
  cmps(c,0,(int32_t)c->r[4],192); // 80352D0C
  if (crb(c,2)) { goto L_80352D30; } // 80352D10
  goto L_80352EC4; // 80352D14
L_80352D18:;
  c->r[26]=0u+0x00000001u; // 80352D18
  goto L_80352D64; // 80352D1C
L_80352D20:;
  c->r[26]=0u+0x00000002u; // 80352D20
  goto L_80352D64; // 80352D24
L_80352D28:;
  c->r[26]=0u+0x00000004u; // 80352D28
  goto L_80352D64; // 80352D2C
L_80352D30:;
  c->r[26]=0u+0x00000008u; // 80352D30
  goto L_80352D64; // 80352D34
L_80352D38:;
  cmps(c,0,(int32_t)c->r[6],0); // 80352D38
  if (crb(c,2)) { goto L_80352EC4; } // 80352D3C
  c->r[0]=0u+0x00010000u; // 80352D40
  cmpu(c,0,c->r[6],c->r[0]); // 80352D44
  if (crb(c,1)) { goto L_80352EC4; } // 80352D48
  cmpu(c,0,c->r[6],0x00000100u); // 80352D4C
  if (!crb(c,1)) { goto L_80352D60; } // 80352D50
  c->r[24]=0u+0x00000020u; // 80352D54
  c->r[29]=0u+0x00000003u; // 80352D58
  goto L_80352D64; // 80352D5C
L_80352D60:;
  c->r[29]=0u+0x00000002u; // 80352D60
L_80352D64:;
  c->r[29]=c->r[29]+c->r[26]; // 80352D64
  c->r[0]=0u+0x00000000u; // 80352D68
  goto L_80352D80; // 80352D6C
L_80352D70:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 80352D70
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80352D74
  if (crb(c,2)) { goto L_80352D8C; } // 80352D78
  c->r[7]=c->r[7]+0x00000008u; // 80352D7C
L_80352D80:;
  c->r[28]=R32(c->r[7]+0x00000000u); // 80352D80
  cmpu(c,0,c->r[28],c->r[0]); // 80352D84
  if (!crb(c,2)) { IRQCHK(c); goto L_80352D70; } // 80352D88
L_80352D8C:;
  c->r[0]=0u+0x00000000u; // 80352D8C
  cmpu(c,0,c->r[28],c->r[0]); // 80352D90
  if (crb(c,2)) { goto L_80352EC4; } // 80352D94
  c->r[3]=c->r[28]|c->r[28]; // 80352D98
  c->lr=0x80352DA0u; f_803ADAA8(c); // 80352D9C
  cmpu(c,0,c->r[3],0x00000020u); // 80352DA0
  c->r[30]=c->r[3]|c->r[3]; // 80352DA4
  if (crb(c,1)) { goto L_80352EC4; } // 80352DA8
  c->r[29]=c->r[29]+c->r[3]; // 80352DAC
  c->r[3]=R32(c->r[13]+0xFFFFEF4Cu); // 80352DB0
  c->r[0]=c->r[29]+0x00000002u; // 80352DB4
  cmpu(c,0,c->r[3],c->r[0]); // 80352DB8
  if (crb(c,0)) { goto L_80352EC4; } // 80352DBC
  c->r[3]=R32(c->r[13]+0xFFFFEF50u); // 80352DC0
  c->r[22]=c->r[31]+0x00000006u; // 80352DC4
  c->r[0]=R16(c->r[31]+0x00000006u); // 80352DC8
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80352DCC
  c->r[5]=R16(c->r[22]+c->r[3]); // 80352DD0
  c->r[4]=c->r[0]+c->r[31]; // 80352DD4
  c->r[27]=c->r[22]+c->r[3]; // 80352DD8
  c->r[3]=c->r[4]+0x00000002u; // 80352DDC
  c->r[5]=c->r[5]-c->r[0]; // 80352DE0
  c->lr=0x80352DE8u; f_803A30A4(c); // 80352DE4
L_80352DE8:;
  c->r[3]=R16(c->r[22]+0x00000000u); // 80352DE8
  c->r[0]=c->r[3]+0x00000002u; // 80352DEC
  W16(c->r[22]+0x00000000u,c->r[0]); // 80352DF0
  c->r[22]=c->r[22]+0x00000002u; // 80352DF4
  cmpu(c,0,c->r[22],c->r[27]); // 80352DF8
  if (!crb(c,1)) { IRQCHK(c); goto L_80352DE8; } // 80352DFC
  c->r[5]=R16(c->r[27]+0x00000000u); // 80352E00
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 80352E04
  c->r[4]=c->r[28]|c->r[28]; // 80352E08
  c->r[28]=c->r[31]+c->r[5]; // 80352E0C
  c->r[0]=c->r[24]|c->r[0]; // 80352E10
  W8(c->r[28]+0x00000000u,c->r[0]); // 80352E14
  c->r[5]=c->r[30]|c->r[30]; // 80352E18
  c->r[3]=c->r[28]+0x00000001u; // 80352E1C
  c->lr=0x80352E24u; f_8000626C(c); // 80352E20
  cmpu(c,0,c->r[24],0x00000040u); // 80352E24
  c->r[3]=c->r[30]+c->r[28]; // 80352E28
  c->r[28]=c->r[3]+0x00000001u; // 80352E2C
  if (!crb(c,2)) { goto L_80352E44; } // 80352E30
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 80352E34
  W8(c->r[28]+0x00000000u,c->r[0]); // 80352E38
  c->r[28]=c->r[28]+0x00000001u; // 80352E3C
  goto L_80352E60; // 80352E40
L_80352E44:;
  cmpu(c,0,c->r[24],0x00000020u); // 80352E44
  if (!crb(c,2)) { goto L_80352E60; } // 80352E48
  c->r[3]=c->r[26]+0xFFFFFFFFu; // 80352E4C
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 80352E50
  W8(c->r[28]+0x00000000u,c->r[0]); // 80352E54
  W8(c->r[28]+0x00000001u,c->r[3]); // 80352E58
  c->r[28]=c->r[28]+0x00000002u; // 80352E5C
L_80352E60:;
  c->r[3]=c->r[28]|c->r[28]; // 80352E60
  c->r[4]=c->r[25]|c->r[25]; // 80352E64
  c->r[5]=c->r[26]|c->r[26]; // 80352E68
  c->lr=0x80352E70u; f_8000626C(c); // 80352E6C
  c->r[5]=R32(c->r[13]+0xFFFFEF58u); // 80352E70
  c->r[0]=0u+0x00000001u; // 80352E74
  c->r[4]=0u-c->r[23]; // 80352E78
  c->r[6]=c->r[27]-c->r[31]; // 80352E7C
  c->r[7]=c->r[31]+c->r[5]; // 80352E80
  c->r[3]=R32(c->r[13]+0xFFFFEF50u); // 80352E84
  c->r[5]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80352E88
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 80352E8C
  c->r[4]=c->r[3]+0x00000001u; // 80352E90
  c->r[3]=0u+0x00000001u; // 80352E94
  W16(c->r[7]+c->r[5],c->r[6]); // 80352E98
  c->r[6]=c->r[29]+0x00000002u; // 80352E9C
  c->r[5]=R32(c->r[13]+0xFFFFEF4Cu); // 80352EA0
  c->r[7]=R16(c->r[27]+0x00000000u); // 80352EA4
  c->r[5]=c->r[5]-c->r[6]; // 80352EA8
  W32(c->r[13]+0xFFFFEF50u,c->r[4]); // 80352EAC
  c->r[6]=c->r[7]+c->r[29]; // 80352EB0
  W16(c->r[27]+0x00000002u,c->r[6]); // 80352EB4
  W32(c->r[13]+0xFFFFEF4Cu,c->r[5]); // 80352EB8
  W16(c->r[31]+0x00000004u,c->r[4]); // 80352EBC
  goto L_80352EC8; // 80352EC0
L_80352EC4:;
  c->r[3]=0u+0x00000000u; // 80352EC4
L_80352EC8:;
  c->r[11]=c->r[1]+0x00000030u; // 80352EC8
  c->lr=0x80352ED0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80352ECC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80352ED0
  c->lr=c->r[0]; // 80352ED4
  c->r[1]=c->r[1]+0x00000030u; // 80352ED8
  return; // 80352EDC
}

// SCFindByteArrayItem
void f_80352EE0(Ctx* __restrict c) {
  trace_call(0x80352EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352EE0
  c->r[0]=c->lr; // 80352EE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80352EE8
  c->r[11]=c->r[1]+0x00000040u; // 80352EEC
  c->lr=0x80352EF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80352EF0
  c->r[27]=c->r[3]|c->r[3]; // 80352EF4
  c->r[28]=c->r[4]|c->r[4]; // 80352EF8
  c->r[29]=c->r[5]|c->r[5]; // 80352EFC
  c->r[31]=0u+0x00000000u; // 80352F00
  c->lr=0x80352F08u; f_8032269C(c); // 80352F04
  c->r[0]=0u+0x00000000u; // 80352F08
  c->r[30]=c->r[3]|c->r[3]; // 80352F0C
  cmpu(c,0,c->r[27],c->r[0]); // 80352F10
  if (crb(c,2)) { goto L_80352F9C; } // 80352F14
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80352F18
  c->r[5]=0u+0x80530000u; // 80352F1C
  c->r[5]=c->r[5]+0xFFFF96E0u; // 80352F20
  cmpu(c,0,c->r[29],c->r[0]); // 80352F24
  if (!crb(c,0)) { goto L_80352F64; } // 80352F28
  c->r[3]=R32(c->r[13]+0xFFFFEF58u); // 80352F2C
  cmps(c,0,(int32_t)c->r[3],0); // 80352F30
  if (crb(c,2)) { goto L_80352F64; } // 80352F34
  c->r[0]=0u-c->r[29]; // 80352F38
  c->r[3]=c->r[5]+c->r[3]; // 80352F3C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80352F40
  c->r[0]=R16(c->r[3]+c->r[0]); // 80352F44
  cmps(c,0,(int32_t)c->r[0],0); // 80352F48
  if (crb(c,2)) { goto L_80352F64; } // 80352F4C
  c->r[0]=R16(c->r[5]+c->r[0]); // 80352F50
  c->r[4]=c->r[1]+0x00000008u; // 80352F54
  c->r[3]=c->r[5]+c->r[0]; // 80352F58
  c->lr=0x80352F60u; f_80352940(c); // 80352F5C
  goto L_80352F68; // 80352F60
L_80352F64:;
  c->r[3]=0u+0x00000000u; // 80352F64
L_80352F68:;
  cmps(c,0,(int32_t)c->r[3],0); // 80352F68
  if (crb(c,2)) { goto L_80352F9C; } // 80352F6C
  c->r[0]=R8(c->r[1]+0x00000011u); // 80352F70
  cmps(c,0,(int32_t)c->r[0],0); // 80352F74
  if (crb(c,2)) { goto L_80352F9C; } // 80352F78
  c->r[0]=R32(c->r[1]+0x00000018u); // 80352F7C
  cmpu(c,0,c->r[0],c->r[28]); // 80352F80
  if (!crb(c,2)) { goto L_80352F9C; } // 80352F84
  c->r[4]=R32(c->r[1]+0x00000020u); // 80352F88
  c->r[3]=c->r[27]|c->r[27]; // 80352F8C
  c->r[5]=c->r[28]|c->r[28]; // 80352F90
  c->lr=0x80352F98u; f_8000626C(c); // 80352F94
  c->r[31]=0u+0x00000001u; // 80352F98
L_80352F9C:;
  c->r[3]=c->r[30]|c->r[30]; // 80352F9C
  c->lr=0x80352FA4u; f_803226C4(c); // 80352FA0
  c->r[11]=c->r[1]+0x00000040u; // 80352FA4
  c->r[3]=c->r[31]|c->r[31]; // 80352FA8
  c->lr=0x80352FB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80352FAC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80352FB0
  c->lr=c->r[0]; // 80352FB4
  c->r[1]=c->r[1]+0x00000040u; // 80352FB8
  return; // 80352FBC
}

// SCReplaceByteArrayItem
void f_80352FC0(Ctx* __restrict c) {
  trace_call(0x80352FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80352FC0
  c->r[0]=c->lr; // 80352FC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80352FC8
  c->r[11]=c->r[1]+0x00000040u; // 80352FCC
  c->lr=0x80352FD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80352FD0
  c->r[27]=c->r[3]|c->r[3]; // 80352FD4
  c->r[28]=c->r[4]|c->r[4]; // 80352FD8
  c->r[29]=c->r[5]|c->r[5]; // 80352FDC
  c->r[31]=0u+0x00000000u; // 80352FE0
  c->lr=0x80352FE8u; f_8032269C(c); // 80352FE4
  c->r[0]=0u+0x00000000u; // 80352FE8
  c->r[30]=c->r[3]|c->r[3]; // 80352FEC
  cmpu(c,0,c->r[27],c->r[0]); // 80352FF0
  if (crb(c,2)) { goto L_803530C0; } // 80352FF4
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80352FF8
  c->r[5]=0u+0x80530000u; // 80352FFC
  c->r[5]=c->r[5]+0xFFFF96E0u; // 80353000
  cmpu(c,0,c->r[29],c->r[0]); // 80353004
  if (!crb(c,0)) { goto L_80353044; } // 80353008
  c->r[3]=R32(c->r[13]+0xFFFFEF58u); // 8035300C
  cmps(c,0,(int32_t)c->r[3],0); // 80353010
  if (crb(c,2)) { goto L_80353044; } // 80353014
  c->r[0]=0u-c->r[29]; // 80353018
  c->r[3]=c->r[5]+c->r[3]; // 8035301C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80353020
  c->r[0]=R16(c->r[3]+c->r[0]); // 80353024
  cmps(c,0,(int32_t)c->r[0],0); // 80353028
  if (crb(c,2)) { goto L_80353044; } // 8035302C
  c->r[0]=R16(c->r[5]+c->r[0]); // 80353030
  c->r[4]=c->r[1]+0x00000008u; // 80353034
  c->r[3]=c->r[5]+c->r[0]; // 80353038
  c->lr=0x80353040u; f_80352940(c); // 8035303C
  goto L_80353048; // 80353040
L_80353044:;
  c->r[3]=0u+0x00000000u; // 80353044
L_80353048:;
  cmps(c,0,(int32_t)c->r[3],0); // 80353048
  if (crb(c,2)) { goto L_803530A8; } // 8035304C
  c->r[0]=R8(c->r[1]+0x00000011u); // 80353050
  cmps(c,0,(int32_t)c->r[0],0); // 80353054
  if (crb(c,2)) { goto L_803530A0; } // 80353058
  c->r[0]=R32(c->r[1]+0x00000018u); // 8035305C
  cmpu(c,0,c->r[0],c->r[28]); // 80353060
  if (!crb(c,2)) { goto L_803530A0; } // 80353064
  c->r[3]=R32(c->r[1]+0x00000020u); // 80353068
  c->r[4]=c->r[27]|c->r[27]; // 8035306C
  c->r[5]=c->r[28]|c->r[28]; // 80353070
  c->lr=0x80353078u; f_803A31C8(c); // 80353074
  cmps(c,0,(int32_t)c->r[3],0); // 80353078
  if (crb(c,2)) { goto L_80353098; } // 8035307C
  c->r[3]=R32(c->r[1]+0x00000020u); // 80353080
  c->r[4]=c->r[27]|c->r[27]; // 80353084
  c->r[5]=c->r[28]|c->r[28]; // 80353088
  c->lr=0x80353090u; f_8000626C(c); // 8035308C
  c->r[0]=0u+0x00000001u; // 80353090
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 80353094
L_80353098:;
  c->r[31]=0u+0x00000001u; // 80353098
  goto L_803530C0; // 8035309C
L_803530A0:;
  c->r[3]=c->r[29]|c->r[29]; // 803530A0
  c->lr=0x803530A8u; f_80352AD8(c); // 803530A4
L_803530A8:;
  c->r[3]=c->r[29]|c->r[29]; // 803530A8
  c->r[5]=c->r[27]|c->r[27]; // 803530AC
  c->r[6]=c->r[28]|c->r[28]; // 803530B0
  c->r[4]=0u+0x00000040u; // 803530B4
  c->lr=0x803530BCu; f_80352C68(c); // 803530B8
  c->r[31]=c->r[3]|c->r[3]; // 803530BC
L_803530C0:;
  c->r[3]=c->r[30]|c->r[30]; // 803530C0
  c->lr=0x803530C8u; f_803226C4(c); // 803530C4
  c->r[11]=c->r[1]+0x00000040u; // 803530C8
  c->r[3]=c->r[31]|c->r[31]; // 803530CC
  c->lr=0x803530D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803530D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803530D4
  c->lr=c->r[0]; // 803530D8
  c->r[1]=c->r[1]+0x00000040u; // 803530DC
  return; // 803530E0
}

// SCReplaceIntegerItem
void f_803530E4(Ctx* __restrict c) {
  trace_call(0x803530E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803530E4
  c->r[0]=c->lr; // 803530E8
  W32(c->r[1]+0x00000044u,c->r[0]); // 803530EC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803530F0
  c->r[31]=c->r[5]|c->r[5]; // 803530F4
  W32(c->r[1]+0x00000038u,c->r[30]); // 803530F8
  W32(c->r[1]+0x00000034u,c->r[29]); // 803530FC
  c->r[29]=c->r[4]|c->r[4]; // 80353100
  W32(c->r[1]+0x00000030u,c->r[28]); // 80353104
  c->r[28]=c->r[3]|c->r[3]; // 80353108
  c->lr=0x80353110u; f_8032269C(c); // 8035310C
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80353110
  c->r[5]=0u+0x80530000u; // 80353114
  c->r[30]=c->r[3]|c->r[3]; // 80353118
  cmpu(c,0,c->r[29],c->r[0]); // 8035311C
  c->r[5]=c->r[5]+0xFFFF96E0u; // 80353120
  if (!crb(c,0)) { goto L_80353160; } // 80353124
  c->r[3]=R32(c->r[13]+0xFFFFEF58u); // 80353128
  cmps(c,0,(int32_t)c->r[3],0); // 8035312C
  if (crb(c,2)) { goto L_80353160; } // 80353130
  c->r[0]=0u-c->r[29]; // 80353134
  c->r[3]=c->r[5]+c->r[3]; // 80353138
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8035313C
  c->r[0]=R16(c->r[3]+c->r[0]); // 80353140
  cmps(c,0,(int32_t)c->r[0],0); // 80353144
  if (crb(c,2)) { goto L_80353160; } // 80353148
  c->r[0]=R16(c->r[5]+c->r[0]); // 8035314C
  c->r[4]=c->r[1]+0x00000008u; // 80353150
  c->r[3]=c->r[5]+c->r[0]; // 80353154
  c->lr=0x8035315Cu; f_80352940(c); // 80353158
  goto L_80353164; // 8035315C
L_80353160:;
  c->r[3]=0u+0x00000000u; // 80353160
L_80353164:;
  cmps(c,0,(int32_t)c->r[3],0); // 80353164
  if (crb(c,2)) { goto L_803531B8; } // 80353168
  c->r[0]=R8(c->r[1]+0x00000010u); // 8035316C
  cmpu(c,0,c->r[0],c->r[31]); // 80353170
  if (!crb(c,2)) { goto L_803531B0; } // 80353174
  c->r[3]=R32(c->r[1]+0x00000020u); // 80353178
  c->r[4]=c->r[28]|c->r[28]; // 8035317C
  c->r[5]=R32(c->r[1]+0x00000018u); // 80353180
  c->lr=0x80353188u; f_803A31C8(c); // 80353184
  cmps(c,0,(int32_t)c->r[3],0); // 80353188
  if (crb(c,2)) { goto L_803531A8; } // 8035318C
  c->r[3]=R32(c->r[1]+0x00000020u); // 80353190
  c->r[4]=c->r[28]|c->r[28]; // 80353194
  c->r[5]=R32(c->r[1]+0x00000018u); // 80353198
  c->lr=0x803531A0u; f_8000626C(c); // 8035319C
  c->r[0]=0u+0x00000001u; // 803531A0
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 803531A4
L_803531A8:;
  c->r[31]=0u+0x00000001u; // 803531A8
  goto L_803531D0; // 803531AC
L_803531B0:;
  c->r[3]=c->r[29]|c->r[29]; // 803531B0
  c->lr=0x803531B8u; f_80352AD8(c); // 803531B4
L_803531B8:;
  c->r[3]=c->r[29]|c->r[29]; // 803531B8
  c->r[4]=c->r[31]|c->r[31]; // 803531BC
  c->r[5]=c->r[28]|c->r[28]; // 803531C0
  c->r[6]=0u+0x00000000u; // 803531C4
  c->lr=0x803531CCu; f_80352C68(c); // 803531C8
  c->r[31]=c->r[3]|c->r[3]; // 803531CC
L_803531D0:;
  c->r[3]=c->r[30]|c->r[30]; // 803531D0
  c->lr=0x803531D8u; f_803226C4(c); // 803531D4
  c->r[3]=c->r[31]|c->r[31]; // 803531D8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803531DC
  c->r[30]=R32(c->r[1]+0x00000038u); // 803531E0
  c->r[29]=R32(c->r[1]+0x00000034u); // 803531E4
  c->r[28]=R32(c->r[1]+0x00000030u); // 803531E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 803531EC
  c->lr=c->r[0]; // 803531F0
  c->r[1]=c->r[1]+0x00000040u; // 803531F4
  return; // 803531F8
}

// SCFindU8Item
void f_803531FC(Ctx* __restrict c) {
  trace_call(0x803531FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803531FC
  c->r[0]=c->lr; // 80353200
  W32(c->r[1]+0x00000044u,c->r[0]); // 80353204
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80353208
  W32(c->r[1]+0x00000038u,c->r[30]); // 8035320C
  c->r[30]=0u+0x00000000u; // 80353210
  W32(c->r[1]+0x00000034u,c->r[29]); // 80353214
  c->r[29]=c->r[4]|c->r[4]; // 80353218
  W32(c->r[1]+0x00000030u,c->r[28]); // 8035321C
  c->r[28]=c->r[3]|c->r[3]; // 80353220
  c->lr=0x80353228u; f_8032269C(c); // 80353224
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 80353228
  c->r[5]=0u+0x80530000u; // 8035322C
  c->r[31]=c->r[3]|c->r[3]; // 80353230
  cmpu(c,0,c->r[29],c->r[0]); // 80353234
  c->r[5]=c->r[5]+0xFFFF96E0u; // 80353238
  if (!crb(c,0)) { goto L_80353278; } // 8035323C
  c->r[3]=R32(c->r[13]+0xFFFFEF58u); // 80353240
  cmps(c,0,(int32_t)c->r[3],0); // 80353244
  if (crb(c,2)) { goto L_80353278; } // 80353248
  c->r[0]=0u-c->r[29]; // 8035324C
  c->r[3]=c->r[5]+c->r[3]; // 80353250
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80353254
  c->r[0]=R16(c->r[3]+c->r[0]); // 80353258
  cmps(c,0,(int32_t)c->r[0],0); // 8035325C
  if (crb(c,2)) { goto L_80353278; } // 80353260
  c->r[0]=R16(c->r[5]+c->r[0]); // 80353264
  c->r[4]=c->r[1]+0x00000008u; // 80353268
  c->r[3]=c->r[5]+c->r[0]; // 8035326C
  c->lr=0x80353274u; f_80352940(c); // 80353270
  goto L_8035327C; // 80353274
L_80353278:;
  c->r[3]=0u+0x00000000u; // 80353278
L_8035327C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8035327C
  if (crb(c,2)) { goto L_803532A4; } // 80353280
  c->r[0]=R8(c->r[1]+0x00000010u); // 80353284
  cmpu(c,0,c->r[0],0x00000060u); // 80353288
  if (!crb(c,2)) { goto L_803532A4; } // 8035328C
  c->r[4]=R32(c->r[1]+0x00000020u); // 80353290
  c->r[3]=c->r[28]|c->r[28]; // 80353294
  c->r[5]=R32(c->r[1]+0x00000018u); // 80353298
  c->lr=0x803532A0u; f_8000626C(c); // 8035329C
  c->r[30]=0u+0x00000001u; // 803532A0
L_803532A4:;
  c->r[3]=c->r[31]|c->r[31]; // 803532A4
  c->lr=0x803532ACu; f_803226C4(c); // 803532A8
  c->r[3]=c->r[30]|c->r[30]; // 803532AC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803532B0
  c->r[30]=R32(c->r[1]+0x00000038u); // 803532B4
  c->r[29]=R32(c->r[1]+0x00000034u); // 803532B8
  c->r[28]=R32(c->r[1]+0x00000030u); // 803532BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 803532C0
  c->lr=c->r[0]; // 803532C4
  c->r[1]=c->r[1]+0x00000040u; // 803532C8
  return; // 803532CC
}

// SCFindS8Item
void f_803532D0(Ctx* __restrict c) {
  trace_call(0x803532D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803532D0
  c->r[0]=c->lr; // 803532D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803532D8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803532DC
  W32(c->r[1]+0x00000038u,c->r[30]); // 803532E0
  c->r[30]=0u+0x00000000u; // 803532E4
  W32(c->r[1]+0x00000034u,c->r[29]); // 803532E8
  c->r[29]=c->r[4]|c->r[4]; // 803532EC
  W32(c->r[1]+0x00000030u,c->r[28]); // 803532F0
  c->r[28]=c->r[3]|c->r[3]; // 803532F4
  c->lr=0x803532FCu; f_8032269C(c); // 803532F8
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 803532FC
  c->r[5]=0u+0x80530000u; // 80353300
  c->r[31]=c->r[3]|c->r[3]; // 80353304
  cmpu(c,0,c->r[29],c->r[0]); // 80353308
  c->r[5]=c->r[5]+0xFFFF96E0u; // 8035330C
  if (!crb(c,0)) { goto L_8035334C; } // 80353310
  c->r[3]=R32(c->r[13]+0xFFFFEF58u); // 80353314
  cmps(c,0,(int32_t)c->r[3],0); // 80353318
  if (crb(c,2)) { goto L_8035334C; } // 8035331C
  c->r[0]=0u-c->r[29]; // 80353320
  c->r[3]=c->r[5]+c->r[3]; // 80353324
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80353328
  c->r[0]=R16(c->r[3]+c->r[0]); // 8035332C
  cmps(c,0,(int32_t)c->r[0],0); // 80353330
  if (crb(c,2)) { goto L_8035334C; } // 80353334
  c->r[0]=R16(c->r[5]+c->r[0]); // 80353338
  c->r[4]=c->r[1]+0x00000008u; // 8035333C
  c->r[3]=c->r[5]+c->r[0]; // 80353340
  c->lr=0x80353348u; f_80352940(c); // 80353344
  goto L_80353350; // 80353348
L_8035334C:;
  c->r[3]=0u+0x00000000u; // 8035334C
L_80353350:;
  cmps(c,0,(int32_t)c->r[3],0); // 80353350
  if (crb(c,2)) { goto L_80353378; } // 80353354
  c->r[0]=R8(c->r[1]+0x00000010u); // 80353358
  cmpu(c,0,c->r[0],0x00000060u); // 8035335C
  if (!crb(c,2)) { goto L_80353378; } // 80353360
  c->r[4]=R32(c->r[1]+0x00000020u); // 80353364
  c->r[3]=c->r[28]|c->r[28]; // 80353368
  c->r[5]=R32(c->r[1]+0x00000018u); // 8035336C
  c->lr=0x80353374u; f_8000626C(c); // 80353370
  c->r[30]=0u+0x00000001u; // 80353374
L_80353378:;
  c->r[3]=c->r[31]|c->r[31]; // 80353378
  c->lr=0x80353380u; f_803226C4(c); // 8035337C
  c->r[3]=c->r[30]|c->r[30]; // 80353380
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80353384
  c->r[30]=R32(c->r[1]+0x00000038u); // 80353388
  c->r[29]=R32(c->r[1]+0x00000034u); // 8035338C
  c->r[28]=R32(c->r[1]+0x00000030u); // 80353390
  c->r[0]=R32(c->r[1]+0x00000044u); // 80353394
  c->lr=c->r[0]; // 80353398
  c->r[1]=c->r[1]+0x00000040u; // 8035339C
  return; // 803533A0
}

// SCFindU32Item
void f_803533A4(Ctx* __restrict c) {
  trace_call(0x803533A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803533A4
  c->r[0]=c->lr; // 803533A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 803533AC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803533B0
  W32(c->r[1]+0x00000038u,c->r[30]); // 803533B4
  c->r[30]=0u+0x00000000u; // 803533B8
  W32(c->r[1]+0x00000034u,c->r[29]); // 803533BC
  c->r[29]=c->r[4]|c->r[4]; // 803533C0
  W32(c->r[1]+0x00000030u,c->r[28]); // 803533C4
  c->r[28]=c->r[3]|c->r[3]; // 803533C8
  c->lr=0x803533D0u; f_8032269C(c); // 803533CC
  c->r[0]=R32(c->r[13]+0xFFFFEF54u); // 803533D0
  c->r[5]=0u+0x80530000u; // 803533D4
  c->r[31]=c->r[3]|c->r[3]; // 803533D8
  cmpu(c,0,c->r[29],c->r[0]); // 803533DC
  c->r[5]=c->r[5]+0xFFFF96E0u; // 803533E0
  if (!crb(c,0)) { goto L_80353420; } // 803533E4
  c->r[3]=R32(c->r[13]+0xFFFFEF58u); // 803533E8
  cmps(c,0,(int32_t)c->r[3],0); // 803533EC
  if (crb(c,2)) { goto L_80353420; } // 803533F0
  c->r[0]=0u-c->r[29]; // 803533F4
  c->r[3]=c->r[5]+c->r[3]; // 803533F8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803533FC
  c->r[0]=R16(c->r[3]+c->r[0]); // 80353400
  cmps(c,0,(int32_t)c->r[0],0); // 80353404
  if (crb(c,2)) { goto L_80353420; } // 80353408
  c->r[0]=R16(c->r[5]+c->r[0]); // 8035340C
  c->r[4]=c->r[1]+0x00000008u; // 80353410
  c->r[3]=c->r[5]+c->r[0]; // 80353414
  c->lr=0x8035341Cu; f_80352940(c); // 80353418
  goto L_80353424; // 8035341C
L_80353420:;
  c->r[3]=0u+0x00000000u; // 80353420
L_80353424:;
  cmps(c,0,(int32_t)c->r[3],0); // 80353424
  if (crb(c,2)) { goto L_8035344C; } // 80353428
  c->r[0]=R8(c->r[1]+0x00000010u); // 8035342C
  cmpu(c,0,c->r[0],0x000000A0u); // 80353430
  if (!crb(c,2)) { goto L_8035344C; } // 80353434
  c->r[4]=R32(c->r[1]+0x00000020u); // 80353438
  c->r[3]=c->r[28]|c->r[28]; // 8035343C
  c->r[5]=R32(c->r[1]+0x00000018u); // 80353440
  c->lr=0x80353448u; f_8000626C(c); // 80353444
  c->r[30]=0u+0x00000001u; // 80353448
L_8035344C:;
  c->r[3]=c->r[31]|c->r[31]; // 8035344C
  c->lr=0x80353454u; f_803226C4(c); // 80353450
  c->r[3]=c->r[30]|c->r[30]; // 80353454
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80353458
  c->r[30]=R32(c->r[1]+0x00000038u); // 8035345C
  c->r[29]=R32(c->r[1]+0x00000034u); // 80353460
  c->r[28]=R32(c->r[1]+0x00000030u); // 80353464
  c->r[0]=R32(c->r[1]+0x00000044u); // 80353468
  c->lr=c->r[0]; // 8035346C
  c->r[1]=c->r[1]+0x00000040u; // 80353470
  return; // 80353474
}

// SCReplaceU8Item
void f_80353478(Ctx* __restrict c) {
  trace_call(0x80353478u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353478
  c->r[0]=c->lr; // 8035347C
  c->r[5]=0u+0x00000060u; // 80353480
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353484
  W8(c->r[1]+0x00000008u,c->r[3]); // 80353488
  c->r[3]=c->r[1]+0x00000008u; // 8035348C
  c->lr=0x80353494u; f_803530E4(c); // 80353490
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353494
  c->lr=c->r[0]; // 80353498
  c->r[1]=c->r[1]+0x00000010u; // 8035349C
  return; // 803534A0
}

// fn_803534A4
void f_803534A4(Ctx* __restrict c) {
  trace_call(0x803534A4u);
  c->r[3]=0u+0x80530000u; // 803534A4
  c->r[3]=c->r[3]+0xFFFF9540u; // 803534A8
  f_803263D4(c); return; // 803534AC
}

// fn_803534B0
void f_803534B0(Ctx* __restrict c) {
  trace_call(0x803534B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803534B0
  c->r[0]=c->lr; // 803534B4
  c->r[3]=0u+0x80350000u; // 803534B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803534BC
  c->r[3]=c->r[3]+0x000034A4u; // 803534C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803534C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803534C8
  c->lr=0x803534D0u; f_80353520(c); // 803534CC
  c->lr=0x803534D4u; f_8032269C(c); // 803534D0
  c->r[31]=0u+0x80530000u; // 803534D4
  c->r[30]=c->r[3]|c->r[3]; // 803534D8
  c->r[31]=c->r[31]+0xFFFF9540u; // 803534DC
  goto L_803534EC; // 803534E0
L_803534E4:;
  c->r[3]=c->r[31]|c->r[31]; // 803534E4
  c->lr=0x803534ECu; f_803262E8(c); // 803534E8
L_803534EC:;
  c->r[0]=R32(c->r[31]+0x00000184u); // 803534EC
  cmps(c,0,(int32_t)c->r[0],0); // 803534F0
  if (!crb(c,2)) { IRQCHK(c); goto L_803534E4; } // 803534F4
  c->r[31]=R32(c->r[31]+0x00000188u); // 803534F8
  c->r[3]=c->r[30]|c->r[30]; // 803534FC
  c->lr=0x80353504u; f_803226C4(c); // 80353500
  c->r[3]=c->r[31]|c->r[31]; // 80353504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80353508
  c->r[30]=R32(c->r[1]+0x00000008u); // 8035350C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353510
  c->lr=c->r[0]; // 80353514
  c->r[1]=c->r[1]+0x00000010u; // 80353518
  return; // 8035351C
}

// SCFlushAsync
void f_80353520(Ctx* __restrict c) {
  trace_call(0x80353520u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353520
  c->r[0]=c->lr; // 80353524
  W32(c->r[1]+0x00000024u,c->r[0]); // 80353528
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8035352C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80353530
  c->r[30]=c->r[3]|c->r[3]; // 80353534
  W32(c->r[1]+0x00000014u,c->r[29]); // 80353538
  c->r[29]=0u+0x80530000u; // 8035353C
  c->r[29]=c->r[29]+0xFFFF9540u; // 80353540
  W32(c->r[1]+0x00000010u,c->r[28]); // 80353544
  c->r[28]=c->r[29]+0x00000000u; // 80353548
  c->lr=0x80353550u; f_8032269C(c); // 8035354C
  c->r[0]=R8(c->r[13]+0xFFFFEF48u); // 80353550
  c->r[31]=c->r[3]|c->r[3]; // 80353554
  cmps(c,0,(int32_t)c->r[0],0); // 80353558
  if (!crb(c,2)) { goto L_803536EC; } // 8035355C
  c->r[0]=0u+0x00000000u; // 80353560
  c->r[3]=0u+0x00000001u; // 80353564
  cmpu(c,0,c->r[30],c->r[0]); // 80353568
  W8(c->r[13]+0xFFFFEF48u,c->r[3]); // 8035356C
  if (!crb(c,2)) { goto L_8035357C; } // 80353570
  c->r[30]=0u+0x80350000u; // 80353574
  c->r[30]=c->r[30]+0x000034A4u; // 80353578
L_8035357C:;
  c->r[0]=R8(c->r[13]+0xFFFFEF5Du); // 8035357C
  c->r[4]=0u+0x00000000u; // 80353580
  c->r[3]=0u+0x00004000u; // 80353584
  W32(c->r[28]+0x00000184u,c->r[30]); // 80353588
  cmps(c,0,(int32_t)c->r[0],0); // 8035358C
  W32(c->r[28]+0x00000188u,c->r[4]); // 80353590
  W8(c->r[28]+0x00000159u,c->r[4]); // 80353594
  W32(c->r[28]+0x0000018Cu,c->r[3]); // 80353598
  if (crb(c,2)) { goto L_803535A8; } // 8035359C
  c->r[0]=0u+0x00000001u; // 803535A0
  goto L_803535AC; // 803535A4
L_803535A8:;
  c->r[0]=0u+0x00000000u; // 803535A8
L_803535AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 803535AC
  if (!crb(c,2)) { goto L_80353614; } // 803535B0
  c->r[3]=c->r[31]|c->r[31]; // 803535B4
  c->lr=0x803535BCu; f_803226C4(c); // 803535B8
  c->r[29]=c->r[29]+0x00000000u; // 803535BC
  c->r[0]=R32(c->r[29]+0x00000188u); // 803535C0
  cmps(c,0,(int32_t)c->r[0],0); // 803535C4
  if (crb(c,2)) { goto L_803535D4; } // 803535C8
  c->r[0]=0u+0x00000001u; // 803535CC
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 803535D0
L_803535D4:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 803535D4
  cmps(c,0,(int32_t)c->r[12],0); // 803535D8
  if (crb(c,2)) { goto L_80353608; } // 803535DC
  c->r[30]=0u+0x00000000u; // 803535E0
  c->r[3]=R32(c->r[29]+0x00000188u); // 803535E4
  W32(c->r[29]+0x00000184u,c->r[30]); // 803535E8
  c->ctr=c->r[12]; // 803535EC
  if (true) { c->lr=0x803535F4u; dispatch(c,c->ctr); } // 803535F0
  c->r[0]=R32(c->r[29]+0x00000000u); // 803535F4
  cmpu(c,0,c->r[0],c->r[30]); // 803535F8
  if (crb(c,2)) { goto L_80353608; } // 803535FC
  c->r[3]=c->r[29]|c->r[29]; // 80353600
  c->lr=0x80353608u; f_803263D4(c); // 80353604
L_80353608:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 80353608
  W8(c->r[13]+0xFFFFEF48u,c->r[0]); // 8035360C
  goto L_8035371C; // 80353610
L_80353614:;
  c->r[30]=0u+0x00000000u; // 80353614
  c->r[3]=c->r[29]+0x000041A0u; // 80353618
  W8(c->r[13]+0xFFFFEF5Du,c->r[30]); // 8035361C
  c->r[4]=c->r[29]+0x000001A0u; // 80353620
  c->r[5]=0u+0x00004000u; // 80353624
  c->lr=0x8035362Cu; f_8000626C(c); // 80353628
  c->r[3]=c->r[31]|c->r[31]; // 8035362C
  c->lr=0x80353634u; f_803226C4(c); // 80353630
  c->r[3]=0u+0x80400000u; // 80353634
  c->r[31]=0u+0x80350000u; // 80353638
  W8(c->r[28]+0x00000158u,c->r[30]); // 8035363C
  c->r[3]=c->r[3]+0x00005AF0u; // 80353640
  c->r[4]=c->r[28]+0x00000150u; // 80353644
  c->r[5]=c->r[31]+0x0000373Cu; // 80353648
  c->r[6]=c->r[28]+0x00000094u; // 8035364C
  c->lr=0x80353654u; f_80351590(c); // 80353650
  cmps(c,0,(int32_t)c->r[3],0); // 80353654
  if (crb(c,2)) { goto L_8035371C; } // 80353658
  c->r[5]=c->r[29]+0x00000000u; // 8035365C
  c->r[3]=0u+0x00000002u; // 80353660
  c->r[0]=R8(c->r[5]+0x00000159u); // 80353664
  W32(c->r[5]+0x00000188u,c->r[3]); // 80353668
  cmps(c,0,(int32_t)c->r[0],0); // 8035366C
  if (crb(c,2)) { goto L_80353694; } // 80353670
  c->r[0]=0u+0x00000009u; // 80353674
  c->r[3]=c->r[5]+0x00000008u; // 80353678
  W8(c->r[5]+0x00000158u,c->r[0]); // 8035367C
  c->r[4]=c->r[31]+0x0000373Cu; // 80353680
  c->r[5]=c->r[5]+0x00000094u; // 80353684
  c->lr=0x8035368Cu; f_8034FE9C(c); // 80353688
  cmps(c,0,(int32_t)c->r[3],0); // 8035368C
  if (crb(c,2)) { goto L_8035371C; } // 80353690
L_80353694:;
  c->r[29]=c->r[29]+0x00000000u; // 80353694
  c->r[0]=R32(c->r[29]+0x00000188u); // 80353698
  cmps(c,0,(int32_t)c->r[0],0); // 8035369C
  if (crb(c,2)) { goto L_803536AC; } // 803536A0
  c->r[0]=0u+0x00000001u; // 803536A4
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 803536A8
L_803536AC:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 803536AC
  cmps(c,0,(int32_t)c->r[12],0); // 803536B0
  if (crb(c,2)) { goto L_803536E0; } // 803536B4
  c->r[31]=0u+0x00000000u; // 803536B8
  c->r[3]=R32(c->r[29]+0x00000188u); // 803536BC
  W32(c->r[29]+0x00000184u,c->r[31]); // 803536C0
  c->ctr=c->r[12]; // 803536C4
  if (true) { c->lr=0x803536CCu; dispatch(c,c->ctr); } // 803536C8
  c->r[0]=R32(c->r[29]+0x00000000u); // 803536CC
  cmpu(c,0,c->r[0],c->r[31]); // 803536D0
  if (crb(c,2)) { goto L_803536E0; } // 803536D4
  c->r[3]=c->r[29]|c->r[29]; // 803536D8
  c->lr=0x803536E0u; f_803263D4(c); // 803536DC
L_803536E0:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 803536E0
  W8(c->r[13]+0xFFFFEF48u,c->r[0]); // 803536E4
  goto L_8035371C; // 803536E8
L_803536EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803536EC
  if (crb(c,2)) { goto L_80353714; } // 803536F0
  cmpu(c,0,c->r[0],0x00000001u); // 803536F4
  if (!crb(c,2)) { goto L_80353700; } // 803536F8
  goto L_80353704; // 803536FC
L_80353700:;
  c->r[0]=0u+0x00000002u; // 80353700
L_80353704:;
  c->r[12]=c->r[30]|c->r[30]; // 80353704
  c->r[3]=c->r[0]|c->r[0]; // 80353708
  c->ctr=c->r[12]; // 8035370C
  if (true) { c->lr=0x80353714u; dispatch(c,c->ctr); } // 80353710
L_80353714:;
  c->r[3]=c->r[31]|c->r[31]; // 80353714
  c->lr=0x8035371Cu; f_803226C4(c); // 80353718
L_8035371C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8035371C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80353720
  c->r[30]=R32(c->r[1]+0x00000018u); // 80353724
  c->r[29]=R32(c->r[1]+0x00000014u); // 80353728
  c->r[28]=R32(c->r[1]+0x00000010u); // 8035372C
  c->lr=c->r[0]; // 80353730
  c->r[1]=c->r[1]+0x00000020u; // 80353734
  return; // 80353738
}

// MyNandCallback
void f_8035373C(Ctx* __restrict c) {
  trace_call(0x8035373Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035373C
  c->r[0]=c->lr; // 80353740
  c->r[7]=0u+0x80530000u; // 80353744
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353748
  c->r[7]=c->r[7]+0xFFFF9540u; // 8035374C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80353750
  W32(c->r[1]+0x00000008u,c->r[30]); // 80353754
  c->r[0]=R8(c->r[7]+0x00000158u); // 80353758
  cmpu(c,0,c->r[0],0x00000009u); // 8035375C
  if (crb(c,1)) { goto L_80353A5C; } // 80353760
  c->r[4]=0u+0x80460000u; // 80353764
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80353768
  c->r[4]=c->r[4]+0xFFFF9E10u; // 8035376C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80353770
  c->ctr=c->r[4]; // 80353774
  if (true) { switch (c->ctr) { case 0x8035377Cu: goto L_8035377C; case 0x803537C0u: goto L_803537C0; case 0x80353800u: goto L_80353800; case 0x80353830u: goto L_80353830; case 0x80353878u: goto L_80353878; case 0x803538ACu: goto L_803538AC; case 0x803538E0u: goto L_803538E0; case 0x80353924u: goto L_80353924; case 0x80353960u: goto L_80353960; case 0x80353968u: goto L_80353968; default: break; } dispatch(c,c->ctr); return; } // 80353778
L_8035377C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8035377C
  if (!crb(c,2)) { goto L_803537D4; } // 80353780
  c->r[0]=R8(c->r[7]+0x00000150u); // 80353784
  cmpu(c,0,c->r[0],0x00000001u); // 80353788
  if (!crb(c,2)) { goto L_803537D4; } // 8035378C
  c->r[0]=0u+0x00000001u; // 80353790
  c->r[3]=0u+0x80400000u; // 80353794
  c->r[5]=0u+0x80350000u; // 80353798
  W8(c->r[7]+0x00000158u,c->r[0]); // 8035379C
  c->r[3]=c->r[3]+0x00005AF0u; // 803537A0
  c->r[4]=c->r[7]+0x00000150u; // 803537A4
  c->r[5]=c->r[5]+0x0000373Cu; // 803537A8
  c->r[6]=c->r[7]+0x00000094u; // 803537AC
  c->lr=0x803537B4u; f_8034FA18(c); // 803537B0
  cmps(c,0,(int32_t)c->r[3],0); // 803537B4
  if (!crb(c,2)) { goto L_803539C4; } // 803537B8
  goto L_80353A5C; // 803537BC
L_803537C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803537C0
  if (!crb(c,2)) { goto L_803537D4; } // 803537C4
  c->r[0]=R8(c->r[7]+0x00000157u); // 803537C8
  cmpu(c,0,c->r[0],0x0000003Fu); // 803537CC
  if (crb(c,2)) { goto L_803538AC; } // 803537D0
L_803537D4:;
  c->r[0]=0u+0x00000002u; // 803537D4
  c->r[3]=0u+0x80400000u; // 803537D8
  c->r[4]=0u+0x80350000u; // 803537DC
  W8(c->r[7]+0x00000158u,c->r[0]); // 803537E0
  c->r[3]=c->r[3]+0x00005AF0u; // 803537E4
  c->r[5]=c->r[7]+0x00000094u; // 803537E8
  c->r[4]=c->r[4]+0x0000373Cu; // 803537EC
  c->lr=0x803537F4u; f_8034F0F4(c); // 803537F0
  cmps(c,0,(int32_t)c->r[3],0); // 803537F4
  if (!crb(c,2)) { goto L_803539C4; } // 803537F8
  goto L_80353A5C; // 803537FC
L_80353800:;
  c->r[0]=0u+0x00000003u; // 80353800
  c->r[3]=0u+0x80400000u; // 80353804
  c->r[5]=0u+0x80350000u; // 80353808
  W8(c->r[7]+0x00000158u,c->r[0]); // 8035380C
  c->r[3]=c->r[3]+0x00005AE0u; // 80353810
  c->r[4]=c->r[7]+0x00000150u; // 80353814
  c->r[5]=c->r[5]+0x0000373Cu; // 80353818
  c->r[6]=c->r[7]+0x00000094u; // 8035381C
  c->lr=0x80353824u; f_80351590(c); // 80353820
  cmps(c,0,(int32_t)c->r[3],0); // 80353824
  if (!crb(c,2)) { goto L_803539C4; } // 80353828
  goto L_80353A5C; // 8035382C
L_80353830:;
  cmps(c,0,(int32_t)c->r[3],0); // 80353830
  if (!crb(c,2)) { goto L_80353844; } // 80353834
  c->r[0]=R8(c->r[7]+0x00000150u); // 80353838
  cmpu(c,0,c->r[0],0x00000002u); // 8035383C
  if (crb(c,2)) { goto L_80353878; } // 80353840
L_80353844:;
  c->r[0]=0u+0x00000004u; // 80353844
  c->r[3]=0u+0x80400000u; // 80353848
  c->r[6]=0u+0x80350000u; // 8035384C
  W8(c->r[7]+0x00000158u,c->r[0]); // 80353850
  c->r[3]=c->r[3]+0x00005AE0u; // 80353854
  c->r[7]=c->r[7]+0x00000094u; // 80353858
  c->r[6]=c->r[6]+0x0000373Cu; // 8035385C
  c->r[4]=0u+0x0000003Fu; // 80353860
  c->r[5]=0u+0x00000000u; // 80353864
  c->lr=0x8035386Cu; f_8034F630(c); // 80353868
  cmps(c,0,(int32_t)c->r[3],0); // 8035386C
  if (!crb(c,2)) { goto L_803539C4; } // 80353870
  goto L_80353A5C; // 80353874
L_80353878:;
  c->r[0]=0u+0x00000005u; // 80353878
  c->r[3]=0u+0x80400000u; // 8035387C
  c->r[6]=0u+0x80350000u; // 80353880
  W8(c->r[7]+0x00000158u,c->r[0]); // 80353884
  c->r[3]=c->r[3]+0x00005AF0u; // 80353888
  c->r[7]=c->r[7]+0x00000094u; // 8035388C
  c->r[6]=c->r[6]+0x0000373Cu; // 80353890
  c->r[4]=0u+0x0000003Fu; // 80353894
  c->r[5]=0u+0x00000000u; // 80353898
  c->lr=0x803538A0u; f_8034EE5C(c); // 8035389C
  cmps(c,0,(int32_t)c->r[3],0); // 803538A0
  if (!crb(c,2)) { goto L_803539C4; } // 803538A4
  goto L_80353A5C; // 803538A8
L_803538AC:;
  c->r[0]=0u+0x00000006u; // 803538AC
  c->r[3]=0u+0x80400000u; // 803538B0
  c->r[6]=0u+0x80350000u; // 803538B4
  W8(c->r[7]+0x00000158u,c->r[0]); // 803538B8
  c->r[4]=c->r[7]+0x00000008u; // 803538BC
  c->r[3]=c->r[3]+0x00005AF0u; // 803538C0
  c->r[6]=c->r[6]+0x0000373Cu; // 803538C4
  c->r[7]=c->r[7]+0x00000094u; // 803538C8
  c->r[5]=0u+0x00000002u; // 803538CC
  c->lr=0x803538D4u; f_8034FD40(c); // 803538D0
  cmps(c,0,(int32_t)c->r[3],0); // 803538D4
  if (!crb(c,2)) { goto L_803539C4; } // 803538D8
  goto L_80353A5C; // 803538DC
L_803538E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803538E0
  if (!crb(c,2)) { goto L_803539C4; } // 803538E4
  c->r[3]=0u+0x00000001u; // 803538E8
  c->r[0]=0u+0x00000007u; // 803538EC
  c->r[4]=0u+0x80530000u; // 803538F0
  c->r[6]=0u+0x80350000u; // 803538F4
  W8(c->r[7]+0x00000159u,c->r[3]); // 803538F8
  c->r[3]=c->r[7]+0x00000008u; // 803538FC
  c->r[5]=R32(c->r[7]+0x0000018Cu); // 80353900
  c->r[4]=c->r[4]+0xFFFFD6E0u; // 80353904
  W8(c->r[7]+0x00000158u,c->r[0]); // 80353908
  c->r[6]=c->r[6]+0x0000373Cu; // 8035390C
  c->r[7]=c->r[7]+0x00000094u; // 80353910
  c->lr=0x80353918u; f_8034F2FC(c); // 80353914
  cmps(c,0,(int32_t)c->r[3],0); // 80353918
  if (!crb(c,2)) { goto L_803539C4; } // 8035391C
  goto L_80353A5C; // 80353920
L_80353924:;
  c->r[0]=R32(c->r[7]+0x0000018Cu); // 80353924
  cmpu(c,0,c->r[3],c->r[0]); // 80353928
  if (!crb(c,2)) { goto L_803539C4; } // 8035392C
  c->r[3]=0u+0x00000000u; // 80353930
  c->r[0]=0u+0x00000008u; // 80353934
  c->r[4]=0u+0x80350000u; // 80353938
  W8(c->r[7]+0x00000159u,c->r[3]); // 8035393C
  c->r[3]=c->r[7]+0x00000008u; // 80353940
  c->r[5]=c->r[7]+0x00000094u; // 80353944
  W8(c->r[7]+0x00000158u,c->r[0]); // 80353948
  c->r[4]=c->r[4]+0x0000373Cu; // 8035394C
  c->lr=0x80353954u; f_8034FE9C(c); // 80353950
  cmps(c,0,(int32_t)c->r[3],0); // 80353954
  if (!crb(c,2)) { goto L_803539C4; } // 80353958
  goto L_80353A5C; // 8035395C
L_80353960:;
  cmps(c,0,(int32_t)c->r[3],0); // 80353960
  if (!crb(c,2)) { goto L_803539C4; } // 80353964
L_80353968:;
  c->r[30]=0u+0x80530000u; // 80353968
  c->r[30]=c->r[30]+0xFFFF9540u; // 8035396C
  c->r[0]=R32(c->r[30]+0x00000188u); // 80353970
  cmps(c,0,(int32_t)c->r[0],0); // 80353974
  if (crb(c,2)) { goto L_80353984; } // 80353978
  c->r[0]=0u+0x00000001u; // 8035397C
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 80353980
L_80353984:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 80353984
  cmps(c,0,(int32_t)c->r[12],0); // 80353988
  if (crb(c,2)) { goto L_803539B8; } // 8035398C
  c->r[31]=0u+0x00000000u; // 80353990
  c->r[3]=R32(c->r[30]+0x00000188u); // 80353994
  W32(c->r[30]+0x00000184u,c->r[31]); // 80353998
  c->ctr=c->r[12]; // 8035399C
  if (true) { c->lr=0x803539A4u; dispatch(c,c->ctr); } // 803539A0
  c->r[0]=R32(c->r[30]+0x00000000u); // 803539A4
  cmpu(c,0,c->r[0],c->r[31]); // 803539A8
  if (crb(c,2)) { goto L_803539B8; } // 803539AC
  c->r[3]=c->r[30]|c->r[30]; // 803539B0
  c->lr=0x803539B8u; f_803263D4(c); // 803539B4
L_803539B8:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 803539B8
  W8(c->r[13]+0xFFFFEF48u,c->r[0]); // 803539BC
  goto L_80353A5C; // 803539C0
L_803539C4:;
  c->r[5]=0u+0x80530000u; // 803539C4
  c->r[3]=0u+0x00000002u; // 803539C8
  c->r[5]=c->r[5]+0xFFFF9540u; // 803539CC
  c->r[0]=R8(c->r[5]+0x00000159u); // 803539D0
  W32(c->r[5]+0x00000188u,c->r[3]); // 803539D4
  cmps(c,0,(int32_t)c->r[0],0); // 803539D8
  if (crb(c,2)) { goto L_80353A04; } // 803539DC
  c->r[0]=0u+0x00000009u; // 803539E0
  c->r[4]=0u+0x80350000u; // 803539E4
  W8(c->r[5]+0x00000158u,c->r[0]); // 803539E8
  c->r[3]=c->r[5]+0x00000008u; // 803539EC
  c->r[4]=c->r[4]+0x0000373Cu; // 803539F0
  c->r[5]=c->r[5]+0x00000094u; // 803539F4
  c->lr=0x803539FCu; f_8034FE9C(c); // 803539F8
  cmps(c,0,(int32_t)c->r[3],0); // 803539FC
  if (crb(c,2)) { goto L_80353A5C; } // 80353A00
L_80353A04:;
  c->r[30]=0u+0x80530000u; // 80353A04
  c->r[30]=c->r[30]+0xFFFF9540u; // 80353A08
  c->r[0]=R32(c->r[30]+0x00000188u); // 80353A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80353A10
  if (crb(c,2)) { goto L_80353A20; } // 80353A14
  c->r[0]=0u+0x00000001u; // 80353A18
  W8(c->r[13]+0xFFFFEF5Du,c->r[0]); // 80353A1C
L_80353A20:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 80353A20
  cmps(c,0,(int32_t)c->r[12],0); // 80353A24
  if (crb(c,2)) { goto L_80353A54; } // 80353A28
  c->r[31]=0u+0x00000000u; // 80353A2C
  c->r[3]=R32(c->r[30]+0x00000188u); // 80353A30
  W32(c->r[30]+0x00000184u,c->r[31]); // 80353A34
  c->ctr=c->r[12]; // 80353A38
  if (true) { c->lr=0x80353A40u; dispatch(c,c->ctr); } // 80353A3C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80353A40
  cmpu(c,0,c->r[0],c->r[31]); // 80353A44
  if (crb(c,2)) { goto L_80353A54; } // 80353A48
  c->r[3]=c->r[30]|c->r[30]; // 80353A4C
  c->lr=0x80353A54u; f_803263D4(c); // 80353A50
L_80353A54:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 80353A54
  W8(c->r[13]+0xFFFFEF48u,c->r[0]); // 80353A58
L_80353A5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353A5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80353A60
  c->r[30]=R32(c->r[1]+0x00000008u); // 80353A64
  c->lr=c->r[0]; // 80353A68
  c->r[1]=c->r[1]+0x00000010u; // 80353A6C
  return; // 80353A70
}

void hle_SCGetAspectRatio(Ctx*);
// SCGetAspectRatio
void f_80353A74(Ctx* __restrict c) {
  hle_SCGetAspectRatio(c);
}

// SCGetDisplayOffsetH
void f_80353AC8(Ctx* __restrict c) {
  trace_call(0x80353AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353AC8
  c->r[0]=c->lr; // 80353ACC
  c->r[4]=0u+0x00000005u; // 80353AD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353AD4
  c->r[3]=c->r[1]+0x00000008u; // 80353AD8
  c->lr=0x80353AE0u; f_803532D0(c); // 80353ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80353AE0
  if (!crb(c,2)) { goto L_80353AF4; } // 80353AE4
  c->r[0]=0u+0x00000000u; // 80353AE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353AEC
  goto L_80353B20; // 80353AF0
L_80353AF4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353AF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80353AF8
  cmps(c,0,(int32_t)c->r[0],-32); // 80353AFC
  if (!crb(c,0)) { goto L_80353B10; } // 80353B00
  c->r[0]=0u+0xFFFFFFE0u; // 80353B04
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353B08
  goto L_80353B20; // 80353B0C
L_80353B10:;
  cmps(c,0,(int32_t)c->r[0],32); // 80353B10
  if (!crb(c,1)) { goto L_80353B20; } // 80353B14
  c->r[0]=0u+0x00000020u; // 80353B18
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353B1C
L_80353B20:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353B20
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80353B24
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80353B28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353B2C
  c->lr=c->r[0]; // 80353B30
  c->r[1]=c->r[1]+0x00000010u; // 80353B34
  return; // 80353B38
}

// fn_80353B3C
void f_80353B3C(Ctx* __restrict c) {
  trace_call(0x80353B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353B3C
  c->r[0]=c->lr; // 80353B40
  c->r[4]=0u+0x00000006u; // 80353B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353B48
  c->r[3]=c->r[1]+0x00000008u; // 80353B4C
  c->lr=0x80353B54u; f_803531FC(c); // 80353B50
  cmps(c,0,(int32_t)c->r[3],0); // 80353B54
  if (!crb(c,2)) { goto L_80353B68; } // 80353B58
  c->r[0]=0u+0x00000000u; // 80353B5C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353B60
  goto L_80353B7C; // 80353B64
L_80353B68:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353B68
  cmpu(c,0,c->r[0],0x00000001u); // 80353B6C
  if (crb(c,2)) { goto L_80353B7C; } // 80353B70
  c->r[0]=0u+0x00000000u; // 80353B74
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353B78
L_80353B7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353B7C
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353B80
  c->lr=c->r[0]; // 80353B84
  c->r[1]=c->r[1]+0x00000010u; // 80353B88
  return; // 80353B8C
}

// SCGetIdleMode
void f_80353B90(Ctx* __restrict c) {
  trace_call(0x80353B90u);
  c->r[4]=0u+0x00000002u; // 80353B90
  c->r[5]=0u+0x00000009u; // 80353B94
  f_80352EE0(c); return; // 80353B98
}

// SCGetLanguage
void f_80353B9C(Ctx* __restrict c) {
  trace_call(0x80353B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353B9C
  c->r[0]=c->lr; // 80353BA0
  c->r[4]=0u+0x0000000Bu; // 80353BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353BA8
  c->r[3]=c->r[1]+0x00000008u; // 80353BAC
  c->lr=0x80353BB4u; f_803531FC(c); // 80353BB0
  cmps(c,0,(int32_t)c->r[3],0); // 80353BB4
  if (!crb(c,2)) { goto L_80353BE0; } // 80353BB8
  c->lr=0x80353BC0u; f_80354064(c); // 80353BBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80353BC0
  if (!crb(c,2)) { goto L_80353BD4; } // 80353BC4
  c->r[0]=0u+0x00000000u; // 80353BC8
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353BCC
  goto L_80353BF4; // 80353BD0
L_80353BD4:;
  c->r[0]=0u+0x00000001u; // 80353BD4
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353BD8
  goto L_80353BF4; // 80353BDC
L_80353BE0:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353BE0
  cmpu(c,0,c->r[0],0x00000009u); // 80353BE4
  if (!crb(c,1)) { goto L_80353BF4; } // 80353BE8
  c->r[0]=0u+0x00000001u; // 80353BEC
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353BF0
L_80353BF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353BF4
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353BF8
  c->lr=c->r[0]; // 80353BFC
  c->r[1]=c->r[1]+0x00000010u; // 80353C00
  return; // 80353C04
}

// fn_80353C08
void f_80353C08(Ctx* __restrict c) {
  trace_call(0x80353C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353C08
  c->r[0]=c->lr; // 80353C0C
  c->r[4]=0u+0x0000000Eu; // 80353C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353C14
  c->r[3]=c->r[1]+0x00000008u; // 80353C18
  c->lr=0x80353C20u; f_803531FC(c); // 80353C1C
  cmps(c,0,(int32_t)c->r[3],0); // 80353C20
  if (!crb(c,2)) { goto L_80353C34; } // 80353C24
  c->r[0]=0u+0x00000000u; // 80353C28
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353C2C
  goto L_80353C48; // 80353C30
L_80353C34:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353C34
  cmpu(c,0,c->r[0],0x00000001u); // 80353C38
  if (crb(c,2)) { goto L_80353C48; } // 80353C3C
  c->r[0]=0u+0x00000000u; // 80353C40
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353C44
L_80353C48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353C48
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353C4C
  c->lr=c->r[0]; // 80353C50
  c->r[1]=c->r[1]+0x00000010u; // 80353C54
  return; // 80353C58
}

// SCGetScreenSaverMode
void f_80353C5C(Ctx* __restrict c) {
  trace_call(0x80353C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353C5C
  c->r[0]=c->lr; // 80353C60
  c->r[4]=0u+0x0000000Fu; // 80353C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353C68
  c->r[3]=c->r[1]+0x00000008u; // 80353C6C
  c->lr=0x80353C74u; f_803531FC(c); // 80353C70
  cmps(c,0,(int32_t)c->r[3],0); // 80353C74
  if (!crb(c,2)) { goto L_80353C88; } // 80353C78
  c->r[0]=0u+0x00000001u; // 80353C7C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353C80
  goto L_80353C9C; // 80353C84
L_80353C88:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353C88
  cmpu(c,0,c->r[0],0x00000001u); // 80353C8C
  if (crb(c,2)) { goto L_80353C9C; } // 80353C90
  c->r[0]=0u+0x00000000u; // 80353C94
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353C98
L_80353C9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353C9C
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353CA0
  c->lr=c->r[0]; // 80353CA4
  c->r[1]=c->r[1]+0x00000010u; // 80353CA8
  return; // 80353CAC
}

// SCGetSoundMode
void f_80353CB0(Ctx* __restrict c) {
  trace_call(0x80353CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353CB0
  c->r[0]=c->lr; // 80353CB4
  c->r[4]=0u+0x00000011u; // 80353CB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353CBC
  c->r[3]=c->r[1]+0x00000008u; // 80353CC0
  c->lr=0x80353CC8u; f_803531FC(c); // 80353CC4
  cmps(c,0,(int32_t)c->r[3],0); // 80353CC8
  if (!crb(c,2)) { goto L_80353CDC; } // 80353CCC
  c->r[0]=0u+0x00000001u; // 80353CD0
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353CD4
  goto L_80353D00; // 80353CD8
L_80353CDC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353CDC
  cmps(c,0,(int32_t)c->r[0],0); // 80353CE0
  if (crb(c,2)) { goto L_80353D00; } // 80353CE4
  cmpu(c,0,c->r[0],0x00000001u); // 80353CE8
  if (crb(c,2)) { goto L_80353D00; } // 80353CEC
  cmpu(c,0,c->r[0],0x00000002u); // 80353CF0
  if (crb(c,2)) { goto L_80353D00; } // 80353CF4
  c->r[0]=0u+0x00000001u; // 80353CF8
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353CFC
L_80353D00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353D00
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353D04
  c->lr=c->r[0]; // 80353D08
  c->r[1]=c->r[1]+0x00000010u; // 80353D0C
  return; // 80353D10
}

// SCGetCounterBias
void f_80353D14(Ctx* __restrict c) {
  trace_call(0x80353D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353D14
  c->r[0]=c->lr; // 80353D18
  c->r[4]=0u+0x00000000u; // 80353D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353D20
  c->r[3]=c->r[1]+0x00000008u; // 80353D24
  c->lr=0x80353D2Cu; f_803533A4(c); // 80353D28
  cmps(c,0,(int32_t)c->r[3],0); // 80353D2C
  if (!crb(c,2)) { goto L_80353D40; } // 80353D30
  c->r[3]=0u+0x0B4A0000u; // 80353D34
  c->r[0]=c->r[3]+0xFFFFD800u; // 80353D38
  W32(c->r[1]+0x00000008u,c->r[0]); // 80353D3C
L_80353D40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353D40
  c->r[3]=R32(c->r[1]+0x00000008u); // 80353D44
  c->lr=c->r[0]; // 80353D48
  c->r[1]=c->r[1]+0x00000010u; // 80353D4C
  return; // 80353D50
}

// SCGetBtDeviceInfoArray
void f_80353D54(Ctx* __restrict c) {
  trace_call(0x80353D54u);
  c->r[4]=0u+0x00000461u; // 80353D54
  c->r[5]=0u+0x0000001Cu; // 80353D58
  f_80352EE0(c); return; // 80353D5C
}

// SCSetBtDeviceInfoArray
void f_80353D60(Ctx* __restrict c) {
  trace_call(0x80353D60u);
  c->r[4]=0u+0x00000461u; // 80353D60
  c->r[5]=0u+0x0000001Cu; // 80353D64
  f_80352FC0(c); return; // 80353D68
}

// fn_80353D6C
void f_80353D6C(Ctx* __restrict c) {
  trace_call(0x80353D6Cu);
  c->r[4]=0u+0x00000205u; // 80353D6C
  c->r[5]=0u+0x0000001Du; // 80353D70
  f_80352EE0(c); return; // 80353D74
}

// SCSetBtCmpDevInfoArray
void f_80353D78(Ctx* __restrict c) {
  trace_call(0x80353D78u);
  c->r[4]=0u+0x00000205u; // 80353D78
  c->r[5]=0u+0x0000001Du; // 80353D7C
  f_80352FC0(c); return; // 80353D80
}

// SCGetBtDpdSensibility
void f_80353D84(Ctx* __restrict c) {
  trace_call(0x80353D84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353D84
  c->r[0]=c->lr; // 80353D88
  c->r[4]=0u+0x0000001Eu; // 80353D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353D90
  c->r[3]=c->r[1]+0x00000008u; // 80353D94
  c->lr=0x80353D9Cu; f_803533A4(c); // 80353D98
  cmps(c,0,(int32_t)c->r[3],0); // 80353D9C
  if (!crb(c,2)) { goto L_80353DB0; } // 80353DA0
  c->r[0]=0u+0x00000002u; // 80353DA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80353DA8
  goto L_80353DD8; // 80353DAC
L_80353DB0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80353DB0
  cmpu(c,0,c->r[0],0x00000001u); // 80353DB4
  if (!crb(c,0)) { goto L_80353DC8; } // 80353DB8
  c->r[0]=0u+0x00000001u; // 80353DBC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80353DC0
  goto L_80353DD8; // 80353DC4
L_80353DC8:;
  cmpu(c,0,c->r[0],0x00000005u); // 80353DC8
  if (!crb(c,1)) { goto L_80353DD8; } // 80353DCC
  c->r[0]=0u+0x00000005u; // 80353DD0
  W32(c->r[1]+0x00000008u,c->r[0]); // 80353DD4
L_80353DD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353DD8
  c->r[3]=R32(c->r[1]+0x00000008u); // 80353DDC
  c->lr=c->r[0]; // 80353DE0
  c->r[1]=c->r[1]+0x00000010u; // 80353DE4
  return; // 80353DE8
}

// fn_80353DEC
void f_80353DEC(Ctx* __restrict c) {
  trace_call(0x80353DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353DEC
  c->r[0]=c->lr; // 80353DF0
  c->r[4]=0u+0x00000020u; // 80353DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353DF8
  c->r[3]=c->r[1]+0x00000008u; // 80353DFC
  c->lr=0x80353E04u; f_803531FC(c); // 80353E00
  cmps(c,0,(int32_t)c->r[3],0); // 80353E04
  if (!crb(c,2)) { goto L_80353E18; } // 80353E08
  c->r[0]=0u+0x00000001u; // 80353E0C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353E10
  goto L_80353E2C; // 80353E14
L_80353E18:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353E18
  cmpu(c,0,c->r[0],0x00000001u); // 80353E1C
  if (crb(c,2)) { goto L_80353E2C; } // 80353E20
  c->r[0]=0u+0x00000000u; // 80353E24
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353E28
L_80353E2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353E2C
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353E30
  c->lr=c->r[0]; // 80353E34
  c->r[1]=c->r[1]+0x00000010u; // 80353E38
  return; // 80353E3C
}

// SCSetWpadMotorMode
void f_80353E40(Ctx* __restrict c) {
  trace_call(0x80353E40u);
  c->r[4]=0u+0x00000020u; // 80353E40
  f_80353478(c); return; // 80353E44
}

// fn_80353E48
void f_80353E48(Ctx* __restrict c) {
  trace_call(0x80353E48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353E48
  c->r[0]=c->lr; // 80353E4C
  c->r[4]=0u+0x00000021u; // 80353E50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353E54
  c->r[3]=c->r[1]+0x00000008u; // 80353E58
  c->lr=0x80353E60u; f_803531FC(c); // 80353E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80353E60
  if (!crb(c,2)) { goto L_80353E74; } // 80353E64
  c->r[0]=0u+0x00000000u; // 80353E68
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353E6C
  goto L_80353E88; // 80353E70
L_80353E74:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353E74
  cmpu(c,0,c->r[0],0x00000001u); // 80353E78
  if (crb(c,2)) { goto L_80353E88; } // 80353E7C
  c->r[0]=0u+0x00000000u; // 80353E80
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353E84
L_80353E88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353E88
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353E8C
  c->lr=c->r[0]; // 80353E90
  c->r[1]=c->r[1]+0x00000010u; // 80353E94
  return; // 80353E98
}

// SCGetWpadSpeakerVolume
void f_80353E9C(Ctx* __restrict c) {
  trace_call(0x80353E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80353E9C
  c->r[0]=c->lr; // 80353EA0
  c->r[4]=0u+0x0000001Fu; // 80353EA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80353EA8
  c->r[3]=c->r[1]+0x00000008u; // 80353EAC
  c->lr=0x80353EB4u; f_803531FC(c); // 80353EB0
  cmps(c,0,(int32_t)c->r[3],0); // 80353EB4
  if (!crb(c,2)) { goto L_80353EC8; } // 80353EB8
  c->r[0]=0u+0x00000059u; // 80353EBC
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353EC0
  goto L_80353EDC; // 80353EC4
L_80353EC8:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80353EC8
  cmpu(c,0,c->r[0],0x0000007Fu); // 80353ECC
  if (!crb(c,1)) { goto L_80353EDC; } // 80353ED0
  c->r[0]=0u+0x0000007Fu; // 80353ED4
  W8(c->r[1]+0x00000008u,c->r[0]); // 80353ED8
L_80353EDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80353EDC
  c->r[3]=R8(c->r[1]+0x00000008u); // 80353EE0
  c->lr=c->r[0]; // 80353EE4
  c->r[1]=c->r[1]+0x00000010u; // 80353EE8
  return; // 80353EEC
}

// SCSetWpadSpeakerVolume
void f_80353EF0(Ctx* __restrict c) {
  trace_call(0x80353EF0u);
  c->r[4]=0u+0x0000001Fu; // 80353EF0
  f_80353478(c); return; // 80353EF4
}

// __SCF1
void f_80353EF8(Ctx* __restrict c) {
  trace_call(0x80353EF8u);
  c->r[6]=0u+0x73B60000u; // 80353EF8
  c->r[0]=0u+0x00000080u; // 80353EFC
  c->r[11]=c->r[6]+0xFFFFDBFAu; // 80353F00
  c->r[9]=0u+0x00000000u; // 80353F04
  c->r[12]=0u+0x00000000u; // 80353F08
  c->r[6]=0u+0x00000000u; // 80353F0C
  c->r[10]=0u+0x00000000u; // 80353F10
  c->ctr=c->r[0]; // 80353F14
L_80353F18:;
  c->r[8]=c->r[10]+0x80000000u; // 80353F18
  c->r[8]=R8(c->r[8]+0x00003800u); // 80353F1C
  cmps(c,0,(int32_t)c->r[8],0); // 80353F20
  if (crb(c,2)) { goto L_80353F6C; } // 80353F24
  c->r[7]=R8(c->r[3]+c->r[12]); // 80353F28
  c->r[0]=c->r[8]^c->r[11]; // 80353F2C
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 80353F30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 80353F34
  if (!crb(c,2)) { goto L_80353F4C; } // 80353F38
  cmpu(c,0,c->r[8],0x0000003Du); // 80353F3C
  if (!crb(c,2)) { goto L_80353F4C; } // 80353F40
  c->r[9]=0u+0x00000001u; // 80353F44
  goto L_80353FE4; // 80353F48
L_80353F4C:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80353F4C
  c->r[0]=c->r[12]+0x00000001u; // 80353F50
  c->r[7]=c->r[8]^c->r[7]; // 80353F54
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 80353F58
  c->r[7]=cntlz(c->r[7]); // 80353F5C
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 80353F60
  c->r[7]=0u-c->r[7]; // 80353F64
  c->r[12]=c->r[0]&c->r[7]; // 80353F68
L_80353F6C:;
  c->r[10]=c->r[10]+0x00000001u; // 80353F6C
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80353F70
  c->r[8]=c->r[10]+0x80000000u; // 80353F74
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80353F78
  c->r[8]=R8(c->r[8]+0x00003800u); // 80353F7C
  c->r[11]=c->r[7]|c->r[0]; // 80353F80
  cmps(c,0,(int32_t)c->r[8],0); // 80353F84
  if (crb(c,2)) { goto L_80353FD0; } // 80353F88
  c->r[7]=R8(c->r[3]+c->r[12]); // 80353F8C
  c->r[0]=c->r[8]^c->r[11]; // 80353F90
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 80353F94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 80353F98
  if (!crb(c,2)) { goto L_80353FB0; } // 80353F9C
  cmpu(c,0,c->r[8],0x0000003Du); // 80353FA0
  if (!crb(c,2)) { goto L_80353FB0; } // 80353FA4
  c->r[9]=0u+0x00000001u; // 80353FA8
  goto L_80353FE4; // 80353FAC
L_80353FB0:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 80353FB0
  c->r[0]=c->r[12]+0x00000001u; // 80353FB4
  c->r[7]=c->r[8]^c->r[7]; // 80353FB8
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 80353FBC
  c->r[7]=cntlz(c->r[7]); // 80353FC0
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 80353FC4
  c->r[7]=0u-c->r[7]; // 80353FC8
  c->r[12]=c->r[0]&c->r[7]; // 80353FCC
L_80353FD0:;
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80353FD0
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80353FD4
  c->r[11]=c->r[7]|c->r[0]; // 80353FD8
  c->r[10]=c->r[10]+0x00000001u; // 80353FDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80353F18; } // 80353FE0
L_80353FE4:;
  cmps(c,0,(int32_t)c->r[9],0); // 80353FE4
  if (crb(c,2)) { goto L_8035405C; } // 80353FE8
  c->r[10]=c->r[10]+0x00000001u; // 80353FEC
  goto L_8035404C; // 80353FF0
L_80353FF4:;
  c->r[3]=c->r[10]+0x80000000u; // 80353FF4
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 80353FF8
  c->r[3]=R8(c->r[3]+0x00003800u); // 80353FFC
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 80354000
  c->r[11]=c->r[7]|c->r[0]; // 80354004
  cmps(c,0,(int32_t)c->r[3],0); // 80354008
  if (crb(c,2)) { goto L_8035402C; } // 8035400C
  c->r[0]=c->r[3]^c->r[11]; // 80354010
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 80354014
  cmpu(c,0,c->r[3],0x0000000Du); // 80354018
  if (crb(c,2)) { goto L_80354028; } // 8035401C
  cmpu(c,0,c->r[3],0x0000000Au); // 80354020
  if (!crb(c,2)) { goto L_8035402C; } // 80354024
L_80354028:;
  c->r[3]=0u+0x00000000u; // 80354028
L_8035402C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8035402C
  W8(c->r[4]+0x00000000u,c->r[3]); // 80354030
  c->r[6]=c->r[6]+0x00000001u; // 80354034
  c->r[4]=c->r[4]+0x00000001u; // 80354038
  if (!crb(c,2)) { goto L_80354048; } // 8035403C
  c->r[3]=0u+0x00000001u; // 80354040
  return; // 80354044
L_80354048:;
  c->r[10]=c->r[10]+0x00000001u; // 80354048
L_8035404C:;
  cmpu(c,0,c->r[10],0x00000100u); // 8035404C
  if (!crb(c,0)) { goto L_8035405C; } // 80354050
  cmpu(c,0,c->r[6],c->r[5]); // 80354054
  if (crb(c,0)) { IRQCHK(c); goto L_80353FF4; } // 80354058
L_8035405C:;
  c->r[3]=0u+0x00000000u; // 8035405C
  return; // 80354060
}

// SCGetProductArea
void f_80354064(Ctx* __restrict c) {
  trace_call(0x80354064u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80354064
  c->r[0]=c->lr; // 80354068
  c->r[3]=c->r[13]+0xFFFFDC20u; // 8035406C
  c->r[5]=0u+0x00000004u; // 80354070
  W32(c->r[1]+0x00000024u,c->r[0]); // 80354074
  c->r[4]=c->r[1]+0x00000008u; // 80354078
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8035407C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80354080
  c->r[30]=0u+0x80460000u; // 80354084
  c->r[30]=c->r[30]+0xFFFF9E38u; // 80354088
  c->lr=0x80354090u; f_80353EF8(c); // 8035408C
  cmps(c,0,(int32_t)c->r[3],0); // 80354090
  if (crb(c,2)) { goto L_803540CC; } // 80354094
  goto L_803540BC; // 80354098
L_8035409C:;
  c->r[3]=c->r[30]+0x00000001u; // 8035409C
  c->r[4]=c->r[1]+0x00000008u; // 803540A0
  c->lr=0x803540A8u; f_803A7040(c); // 803540A4
  cmps(c,0,(int32_t)c->r[3],0); // 803540A8
  if (!crb(c,2)) { goto L_803540B8; } // 803540AC
  c->r[3]=c->r[31]|c->r[31]; // 803540B0
  goto L_803540D0; // 803540B4
L_803540B8:;
  c->r[30]=c->r[30]+0x00000005u; // 803540B8
L_803540BC:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 803540BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 803540C0
  cmps(c,0,(int32_t)c->r[0],-1); // 803540C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8035409C; } // 803540C8
L_803540CC:;
  c->r[3]=0u+0xFFFFFFFFu; // 803540CC
L_803540D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803540D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803540D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803540D8
  c->lr=c->r[0]; // 803540DC
  c->r[1]=c->r[1]+0x00000020u; // 803540E0
  return; // 803540E4
}

// SCGetProductGameRegion
void f_803540E8(Ctx* __restrict c) {
  trace_call(0x803540E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803540E8
  c->r[0]=c->lr; // 803540EC
  c->r[3]=c->r[13]+0xFFFFDC28u; // 803540F0
  c->r[5]=0u+0x00000003u; // 803540F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803540F8
  c->r[4]=c->r[1]+0x00000008u; // 803540FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80354100
  W32(c->r[1]+0x00000018u,c->r[30]); // 80354104
  c->r[30]=0u+0x80460000u; // 80354108
  c->r[30]=c->r[30]+0xFFFF9E80u; // 8035410C
  c->lr=0x80354114u; f_80353EF8(c); // 80354110
  cmps(c,0,(int32_t)c->r[3],0); // 80354114
  if (crb(c,2)) { goto L_80354150; } // 80354118
  goto L_80354140; // 8035411C
L_80354120:;
  c->r[3]=c->r[30]+0x00000001u; // 80354120
  c->r[4]=c->r[1]+0x00000008u; // 80354124
  c->lr=0x8035412Cu; f_803A7040(c); // 80354128
  cmps(c,0,(int32_t)c->r[3],0); // 8035412C
  if (!crb(c,2)) { goto L_8035413C; } // 80354130
  c->r[3]=c->r[31]|c->r[31]; // 80354134
  goto L_80354154; // 80354138
L_8035413C:;
  c->r[30]=c->r[30]+0x00000004u; // 8035413C
L_80354140:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 80354140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80354144
  cmps(c,0,(int32_t)c->r[0],-1); // 80354148
  if (!crb(c,2)) { IRQCHK(c); goto L_80354120; } // 8035414C
L_80354150:;
  c->r[3]=0u+0xFFFFFFFFu; // 80354150
L_80354154:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80354154
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80354158
  c->r[30]=R32(c->r[1]+0x00000018u); // 8035415C
  c->lr=c->r[0]; // 80354160
  c->r[1]=c->r[1]+0x00000020u; // 80354164
  return; // 80354168
}

// WENCGetEncodeData
void f_8035416C(Ctx* __restrict c) {
  trace_call(0x8035416Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035416C
  c->r[0]=c->lr; // 80354170
  W32(c->r[1]+0x00000094u,c->r[0]); // 80354174
  c->r[11]=c->r[1]+0x00000090u; // 80354178
  c->lr=0x80354180u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8035417C
  c->r[10]=0u+0x80400000u; // 80354180
  {uint32_t ea=c->r[10]+0x00005B38u; c->r[9]=R32(ea); c->r[10]=ea;} // 80354184
  c->r[11]=c->r[6]+0x00000001u; // 80354188
  c->r[25]=c->r[4]|c->r[4]; // 8035418C
  c->r[4]=rotl(c->r[11],1)&0x00000001u; // 80354190
  c->r[8]=R32(c->r[10]+0x00000004u); // 80354194
  c->r[31]=c->r[7]|c->r[7]; // 80354198
  c->r[0]=R32(c->r[10]+0x00000008u); // 8035419C
  c->r[4]=c->r[4]+c->r[11]; // 803541A0
  c->r[18]=R32(c->r[10]+0x0000000Cu); // 803541A4
  c->r[27]=R32(c->r[10]+0x00000010u); // 803541A8
  c->r[30]=c->r[6]|c->r[6]; // 803541AC
  c->r[26]=R32(c->r[10]+0x00000014u); // 803541B0
  c->r[28]=c->r[3]|c->r[3]; // 803541B4
  c->r[24]=R32(c->r[10]+0x00000018u); // 803541B8
  c->r[29]=c->r[5]|c->r[5]; // 803541BC
  c->r[23]=R32(c->r[10]+0x0000001Cu); // 803541C0
  c->r[5]=sraw(c,c->r[4],1); // 803541C4
  c->r[22]=R32(c->r[10]+0x00000020u); // 803541C8
  c->r[3]=c->r[31]|c->r[31]; // 803541CC
  c->r[21]=R32(c->r[10]+0x00000024u); // 803541D0
  c->r[4]=0u+0x00000000u; // 803541D4
  c->r[20]=R32(c->r[10]+0x00000028u); // 803541D8
  c->r[19]=R32(c->r[10]+0x0000002Cu); // 803541DC
  c->r[12]=R32(c->r[10]+0x00000030u); // 803541E0
  c->r[11]=R32(c->r[10]+0x00000034u); // 803541E4
  c->r[7]=R32(c->r[10]+0x00000038u); // 803541E8
  c->r[6]=R32(c->r[10]+0x0000003Cu); // 803541EC
  W32(c->r[1]+0x00000008u,c->r[9]); // 803541F0
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 803541F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 803541F8
  W32(c->r[1]+0x00000014u,c->r[18]); // 803541FC
  W32(c->r[1]+0x00000018u,c->r[27]); // 80354200
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 80354204
  W32(c->r[1]+0x00000020u,c->r[24]); // 80354208
  W32(c->r[1]+0x00000024u,c->r[23]); // 8035420C
  W32(c->r[1]+0x00000028u,c->r[22]); // 80354210
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 80354214
  W32(c->r[1]+0x00000030u,c->r[20]); // 80354218
  W32(c->r[1]+0x00000034u,c->r[19]); // 8035421C
  W32(c->r[1]+0x00000038u,c->r[12]); // 80354220
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 80354224
  W32(c->r[1]+0x00000040u,c->r[7]); // 80354228
  W32(c->r[1]+0x00000044u,c->r[6]); // 8035422C
  c->lr=0x80354234u; f_80006370(c); // 80354230
  c->r[0]=rotl(c->r[25],0)&0x00000001u; cr0(c,c->r[0]); // 80354234
  if (!crb(c,2)) { goto L_80354258; } // 80354238
  c->r[11]=0u+0x00000000u; // 8035423C
  c->r[12]=0u+0x0000007Fu; // 80354240
  c->r[5]=0u+0x00000000u; // 80354244
  c->r[27]=0u+0x00000000u; // 80354248
  c->r[26]=0u+0x00000000u; // 8035424C
  c->r[25]=0u+0x00000000u; // 80354250
  goto L_80354270; // 80354254
L_80354258:;
  c->r[11]=R32(c->r[28]+0x00000000u); // 80354258
  c->r[12]=R32(c->r[28]+0x00000004u); // 8035425C
  c->r[5]=R32(c->r[28]+0x00000008u); // 80354260
  c->r[27]=R32(c->r[28]+0x0000000Cu); // 80354264
  c->r[26]=R32(c->r[28]+0x00000010u); // 80354268
  c->r[25]=R32(c->r[28]+0x00000014u); // 8035426C
L_80354270:;
  c->r[3]=0u+0x00010000u; // 80354270
  c->r[24]=c->r[1]+0x00000008u; // 80354274
  {uint32_t ea=c->r[2]+0xFFFF9ED8u; c->f[2]=RF64(ea);} // 80354278
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8035427C
  c->r[6]=0u+0x00000000u; // 80354280
  c->r[0]=0u+0xFFFF0000u; // 80354284
  c->r[23]=0u+0x43300000u; // 80354288
  c->ctr=c->r[30]; // 8035428C
  cmps(c,0,(int32_t)c->r[30],0); // 80354290
  if (!crb(c,1)) { goto L_80354410; } // 80354294
L_80354298:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 80354298
  c->r[10]=0u+0x00000000u; // 8035429C
  c->r[9]=0u+0x00000000u; // 803542A0
  c->r[8]=0u+0x00000000u; // 803542A4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[11]); // 803542A8
  c->r[7]=0u+0x00000000u; // 803542AC
  c->r[29]=c->r[29]+0x00000002u; // 803542B0
  if (!crb(c,0)) { goto L_803542BC; } // 803542B4
  c->r[7]=0u+0x00000001u; // 803542B8
L_803542BC:;
  c->r[19]=c->r[5]-c->r[11]; // 803542BC
  c->r[5]=sraw(c,c->r[19],31); // 803542C0
  c->r[27]=c->r[5]^c->r[19]; // 803542C4
  c->r[27]=c->r[27]-c->r[5]; // 803542C8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[12]); // 803542CC
  if (crb(c,0)) { goto L_803542DC; } // 803542D0
  c->r[8]=0u+0x00000001u; // 803542D4
  c->r[27]=c->r[27]-c->r[12]; // 803542D8
L_803542DC:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 803542DC
  c->r[5]=c->r[5]+c->r[12]; // 803542E0
  c->r[26]=sraw(c,c->r[5],1); // 803542E4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 803542E8
  if (crb(c,0)) { goto L_803542F8; } // 803542EC
  c->r[9]=0u+0x00000001u; // 803542F0
  c->r[27]=c->r[27]-c->r[26]; // 803542F4
L_803542F8:;
  c->r[5]=rotl(c->r[26],1)&0x00000001u; // 803542F8
  c->r[5]=c->r[5]+c->r[26]; // 803542FC
  c->r[25]=sraw(c,c->r[5],1); // 80354300
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[25]); // 80354304
  if (crb(c,0)) { goto L_80354314; } // 80354308
  c->r[10]=0u+0x00000001u; // 8035430C
  c->r[27]=c->r[27]-c->r[25]; // 80354310
L_80354314:;
  c->r[20]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 80354314
  c->r[5]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80354318
  c->r[19]=rotl(c->r[25],1)&0x00000001u; // 8035431C
  c->r[5]=addc(c,~c->r[5],0x00000001u,1); // 80354320
  c->r[19]=c->r[19]+c->r[25]; // 80354324
  c->r[21]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 80354328
  c->r[19]=sraw(c,c->r[19],1); // 8035432C
  c->r[22]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[9]); // 80354330
  c->r[21]=c->r[20]+c->r[21]; // 80354334
  c->r[22]=c->r[19]+c->r[22]; // 80354338
  c->r[22]=c->r[21]+c->r[22]; // 8035433C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 80354340
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80354344
  if (!crb(c,1)) { goto L_80354350; } // 80354348
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8035434C
L_80354350:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80354350
  if (!crb(c,0)) { goto L_8035435C; } // 80354354
  c->r[5]=0u+0xFFFF0000u; // 80354358
L_8035435C:;
  c->r[11]=c->r[11]+c->r[5]; // 8035435C
  cmps(c,0,(int32_t)c->r[11],32767); // 80354360
  if (!crb(c,1)) { goto L_8035436C; } // 80354364
  c->r[11]=0u+0x00007FFFu; // 80354368
L_8035436C:;
  cmps(c,0,(int32_t)c->r[11],-32768); // 8035436C
  if (!crb(c,0)) { goto L_80354378; } // 80354370
  c->r[11]=0u+0xFFFF8000u; // 80354374
L_80354378:;
  c->r[12]=c->r[12]^0x80000000u; // 80354378
  c->r[18]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8035437C
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 80354380
  c->r[22]=rotl(c->r[6],0)&0x00000001u; // 80354384
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80354388
  c->r[8]=c->r[10]+c->r[18]; // 8035438C
  W32(c->r[1]+0x00000048u,c->r[23]); // 80354390
  c->r[8]=c->r[9]+c->r[8]; // 80354394
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 80354398
  c->r[12]=rotl(c->r[6],1)&0x00000001u; // 8035439C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 803543A0
  c->r[9]=c->r[9]+c->r[18]; // 803543A4
  {uint32_t ea=c->r[24]+c->r[8]; c->f[0]=RF64(ea);} // 803543A8
  c->r[8]=c->r[12]+c->r[6]; // 803543AC
  c->f[1]=c->f[1]-c->f[2]; // 803543B0
  c->r[12]=sraw(c,c->r[8],1); // 803543B4
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 803543B8
  c->r[7]=c->r[10]+c->r[9]; // 803543BC
  c->r[7]=c->r[8]+c->r[7]; // 803543C0
  c->r[22]=c->r[22]+0xFFFFFFFFu; // 803543C4
  c->f[0]=c->f[1]*c->f[0]; // 803543C8
  c->r[9]=rotl(c->r[22],0)&0x00000004u; // 803543CC
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 803543D0
  c->r[8]=R8(c->r[31]+c->r[12]); // 803543D4
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[7]<<((c->r[9])&31)); // 803543D8
  c->r[7]=c->r[8]|c->r[7]; // 803543DC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803543E0
  W8(c->r[31]+c->r[12],c->r[7]); // 803543E4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 803543E8
  c->r[12]=R32(c->r[1]+0x00000054u); // 803543EC
  cmps(c,0,(int32_t)c->r[12],127); // 803543F0
  if (crb(c,1)) { goto L_803543FC; } // 803543F4
  c->r[12]=0u+0x0000007Fu; // 803543F8
L_803543FC:;
  cmps(c,0,(int32_t)c->r[12],24576); // 803543FC
  if (crb(c,0)) { goto L_80354408; } // 80354400
  c->r[12]=0u+0x00006000u; // 80354404
L_80354408:;
  c->r[6]=c->r[6]+0x00000001u; // 80354408
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80354298; } // 8035440C
L_80354410:;
  W32(c->r[28]+0x00000000u,c->r[11]); // 80354410
  c->r[11]=c->r[1]+0x00000090u; // 80354414
  c->r[3]=c->r[30]|c->r[30]; // 80354418
  W32(c->r[28]+0x00000004u,c->r[12]); // 8035441C
  W32(c->r[28]+0x00000008u,c->r[5]); // 80354420
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 80354424
  W32(c->r[28]+0x00000010u,c->r[26]); // 80354428
  W32(c->r[28]+0x00000014u,c->r[25]); // 8035442C
  c->lr=0x80354434u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80354430
  c->r[0]=R32(c->r[1]+0x00000094u); // 80354434
  c->lr=c->r[0]; // 80354438
  c->r[1]=c->r[1]+0x00000090u; // 8035443C
  return; // 80354440
}

// ARCInitHandle
void f_80354444(Ctx* __restrict c) {
  trace_call(0x80354444u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80354444
  c->r[0]=c->lr; // 80354448
  W32(c->r[1]+0x00000014u,c->r[0]); // 8035444C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80354450
  c->r[31]=c->r[4]|c->r[4]; // 80354454
  W32(c->r[1]+0x00000008u,c->r[30]); // 80354458
  c->r[30]=c->r[3]|c->r[3]; // 8035445C
  c->r[5]=R32(c->r[3]+0x00000000u); // 80354460
  c->r[0]=c->r[5]+0xAA560000u; // 80354464
  cmpu(c,0,c->r[0],0x0000382Du); // 80354468
  if (crb(c,2)) { goto L_80354488; } // 8035446C
  c->r[5]=0u+0x80460000u; // 80354470
  c->r[3]=c->r[13]+0xFFFFDC30u; // 80354474
  c->r[5]=c->r[5]+0xFFFF9E90u; // 80354478
  c->r[4]=0u+0x0000004Au; // 8035447C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80354480
  c->lr=0x80354488u; f_8031EA88(c); // 80354484
L_80354488:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 80354488
  c->r[0]=0u+0x00000000u; // 8035448C
  c->r[3]=0u+0x00000001u; // 80354490
  c->r[4]=R32(c->r[30]+0x00000004u); // 80354494
  c->r[6]=c->r[30]+c->r[4]; // 80354498
  W32(c->r[31]+0x00000004u,c->r[6]); // 8035449C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 803544A0
  c->r[4]=c->r[30]+c->r[4]; // 803544A4
  W32(c->r[31]+0x00000008u,c->r[4]); // 803544A8
  c->r[5]=R32(c->r[6]+0x00000008u); // 803544AC
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 803544B0
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 803544B4
  c->r[4]=c->r[6]+c->r[4]; // 803544B8
  W32(c->r[31]+0x00000010u,c->r[4]); // 803544BC
  c->r[4]=R32(c->r[30]+0x00000008u); // 803544C0
  W32(c->r[31]+0x00000014u,c->r[4]); // 803544C4
  W32(c->r[31]+0x00000018u,c->r[0]); // 803544C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803544CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803544D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803544D4
  c->lr=c->r[0]; // 803544D8
  c->r[1]=c->r[1]+0x00000010u; // 803544DC
  return; // 803544E0
}

// ARCOpen
void f_803544E4(Ctx* __restrict c) {
  trace_call(0x803544E4u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803544E4
  c->r[0]=c->lr; // 803544E8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803544EC
  c->r[11]=c->r[1]+0x000000A0u; // 803544F0
  c->lr=0x803544F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803544F4
  c->r[28]=R32(c->r[3]+0x00000004u); // 803544F8
  c->r[26]=c->r[3]|c->r[3]; // 803544FC
  c->r[27]=c->r[4]|c->r[4]; // 80354500
  c->r[29]=c->r[5]|c->r[5]; // 80354504
  c->lr=0x8035450Cu; f_803547D8(c); // 80354508
  cmps(c,0,(int32_t)c->r[3],0); // 8035450C
  if (!crb(c,0)) { goto L_80354738; } // 80354510
  c->r[29]=R32(c->r[26]+0x00000018u); // 80354514
  c->r[28]=R32(c->r[26]+0x00000004u); // 80354518
  cmps(c,0,(int32_t)c->r[29],0); // 8035451C
  if (!crb(c,2)) { goto L_8035452C; } // 80354520
  c->r[4]=0u+0x00000000u; // 80354524
  goto L_803546C0; // 80354528
L_8035452C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 8035452C
  c->r[7]=R32(c->r[26]+0x00000010u); // 80354530
  c->r[3]=c->r[28]+c->r[0]; // 80354534
  c->r[0]=R32(c->r[28]+c->r[0]); // 80354538
  c->r[3]=R32(c->r[3]+0x00000004u); // 8035453C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80354540
  cmps(c,0,(int32_t)c->r[3],0); // 80354544
  c->r[30]=c->r[7]+c->r[0]; // 80354548
  if (!crb(c,2)) { goto L_80354558; } // 8035454C
  c->r[4]=0u+0x00000000u; // 80354550
  goto L_80354664; // 80354554
L_80354558:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80354558
  c->r[3]=c->r[28]+c->r[0]; // 8035455C
  c->r[0]=R32(c->r[28]+c->r[0]); // 80354560
  c->r[3]=R32(c->r[3]+0x00000004u); // 80354564
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80354568
  cmps(c,0,(int32_t)c->r[3],0); // 8035456C
  c->r[31]=c->r[7]+c->r[0]; // 80354570
  if (!crb(c,2)) { goto L_80354580; } // 80354574
  c->r[4]=0u+0x00000000u; // 80354578
  goto L_80354608; // 8035457C
L_80354580:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80354580
  c->r[3]=c->r[26]|c->r[26]; // 80354584
  c->r[5]=c->r[1]+0x00000008u; // 80354588
  c->r[6]=0u+0x00000080u; // 8035458C
  c->r[0]=R32(c->r[28]+c->r[4]); // 80354590
  c->r[4]=c->r[28]+c->r[4]; // 80354594
  c->r[4]=R32(c->r[4]+0x00000004u); // 80354598
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 8035459C
  c->r[26]=c->r[7]+c->r[0]; // 803545A0
  c->lr=0x803545A8u; f_80354A3C(c); // 803545A4
  cmpu(c,0,c->r[3],0x00000080u); // 803545A8
  c->r[4]=c->r[3]|c->r[3]; // 803545AC
  if (!crb(c,2)) { goto L_803545B8; } // 803545B0
  goto L_80354608; // 803545B4
L_803545B8:;
  c->r[4]=c->r[3]+0x00000001u; // 803545B8
  c->r[5]=c->r[1]+0x00000008u; // 803545BC
  c->r[0]=0u+0x0000002Fu; // 803545C0
  W8(c->r[5]+c->r[3],c->r[0]); // 803545C4
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 803545C8
  c->r[3]=c->r[6]|c->r[6]; // 803545CC
  c->r[5]=c->r[5]+c->r[4]; // 803545D0
  goto L_803545EC; // 803545D4
L_803545D8:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 803545D8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803545DC
  c->r[26]=c->r[26]+0x00000001u; // 803545E0
  W8(c->r[5]+0x00000000u,c->r[0]); // 803545E4
  c->r[5]=c->r[5]+0x00000001u; // 803545E8
L_803545EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 803545EC
  if (crb(c,2)) { goto L_80354600; } // 803545F0
  c->r[0]=R8(c->r[26]+0x00000000u); // 803545F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803545F8
  if (!crb(c,2)) { IRQCHK(c); goto L_803545D8; } // 803545FC
L_80354600:;
  c->r[0]=c->r[6]-c->r[3]; // 80354600
  c->r[4]=c->r[4]+c->r[0]; // 80354604
L_80354608:;
  cmpu(c,0,c->r[4],0x00000080u); // 80354608
  if (!crb(c,2)) { goto L_80354614; } // 8035460C
  goto L_80354664; // 80354610
L_80354614:;
  c->r[5]=c->r[4]+0x00000001u; // 80354614
  c->r[3]=c->r[1]+0x00000008u; // 80354618
  c->r[0]=0u+0x0000002Fu; // 8035461C
  W8(c->r[3]+c->r[4],c->r[0]); // 80354620
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 80354624
  c->r[4]=c->r[6]|c->r[6]; // 80354628
  c->r[3]=c->r[3]+c->r[5]; // 8035462C
  goto L_80354648; // 80354630
L_80354634:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80354634
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80354638
  c->r[31]=c->r[31]+0x00000001u; // 8035463C
  W8(c->r[3]+0x00000000u,c->r[0]); // 80354640
  c->r[3]=c->r[3]+0x00000001u; // 80354644
L_80354648:;
  cmps(c,0,(int32_t)c->r[4],0); // 80354648
  if (crb(c,2)) { goto L_8035465C; } // 8035464C
  c->r[0]=R8(c->r[31]+0x00000000u); // 80354650
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80354654
  if (!crb(c,2)) { IRQCHK(c); goto L_80354634; } // 80354658
L_8035465C:;
  c->r[0]=c->r[6]-c->r[4]; // 8035465C
  c->r[4]=c->r[5]+c->r[0]; // 80354660
L_80354664:;
  cmpu(c,0,c->r[4],0x00000080u); // 80354664
  if (!crb(c,2)) { goto L_80354670; } // 80354668
  goto L_803546C0; // 8035466C
L_80354670:;
  c->r[5]=c->r[4]+0x00000001u; // 80354670
  c->r[3]=c->r[1]+0x00000008u; // 80354674
  c->r[0]=0u+0x0000002Fu; // 80354678
  W8(c->r[3]+c->r[4],c->r[0]); // 8035467C
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 80354680
  c->r[4]=c->r[6]|c->r[6]; // 80354684
  c->r[3]=c->r[3]+c->r[5]; // 80354688
  goto L_803546A4; // 8035468C
L_80354690:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80354690
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80354694
  c->r[30]=c->r[30]+0x00000001u; // 80354698
  W8(c->r[3]+0x00000000u,c->r[0]); // 8035469C
  c->r[3]=c->r[3]+0x00000001u; // 803546A0
L_803546A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803546A4
  if (crb(c,2)) { goto L_803546B8; } // 803546A8
  c->r[0]=R8(c->r[30]+0x00000000u); // 803546AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803546B0
  if (!crb(c,2)) { IRQCHK(c); goto L_80354690; } // 803546B4
L_803546B8:;
  c->r[0]=c->r[6]-c->r[4]; // 803546B8
  c->r[4]=c->r[5]+c->r[0]; // 803546BC
L_803546C0:;
  cmpu(c,0,c->r[4],0x00000080u); // 803546C0
  if (!crb(c,2)) { goto L_803546D4; } // 803546C4
  c->r[0]=0u+0x00000000u; // 803546C8
  W8(c->r[1]+0x00000087u,c->r[0]); // 803546CC
  goto L_80354718; // 803546D0
L_803546D4:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 803546D4
  c->r[0]=R32(c->r[28]+c->r[0]); // 803546D8
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 803546DC
  if (crb(c,2)) { goto L_8035470C; } // 803546E0
  cmpu(c,0,c->r[4],0x0000007Fu); // 803546E4
  if (!crb(c,2)) { goto L_803546FC; } // 803546E8
  c->r[3]=c->r[1]+0x00000008u; // 803546EC
  c->r[0]=0u+0x00000000u; // 803546F0
  W8(c->r[3]+c->r[4],c->r[0]); // 803546F4
  goto L_80354718; // 803546F8
L_803546FC:;
  c->r[3]=c->r[1]+0x00000008u; // 803546FC
  c->r[0]=0u+0x0000002Fu; // 80354700
  W8(c->r[3]+c->r[4],c->r[0]); // 80354704
  c->r[4]=c->r[4]+0x00000001u; // 80354708
L_8035470C:;
  c->r[3]=c->r[1]+0x00000008u; // 8035470C
  c->r[0]=0u+0x00000000u; // 80354710
  W8(c->r[3]+c->r[4],c->r[0]); // 80354714
L_80354718:;
  c->r[3]=0u+0x80460000u; // 80354718
  c->r[4]=c->r[27]|c->r[27]; // 8035471C
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 80354720
  c->r[5]=c->r[1]+0x00000008u; // 80354724
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80354728
  c->lr=0x80354730u; f_8031E9FC(c); // 8035472C
  c->r[3]=0u+0x00000000u; // 80354730
  goto L_80354770; // 80354734
L_80354738:;
  if (crb(c,0)) { goto L_8035474C; } // 80354738
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8035473C
  c->r[0]=R32(c->r[28]+c->r[3]); // 80354740
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80354744
  if (crb(c,2)) { goto L_80354754; } // 80354748
L_8035474C:;
  c->r[3]=0u+0x00000000u; // 8035474C
  goto L_80354770; // 80354750
L_80354754:;
  W32(c->r[29]+0x00000000u,c->r[26]); // 80354754
  c->r[4]=c->r[28]+c->r[3]; // 80354758
  c->r[3]=0u+0x00000001u; // 8035475C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80354760
  W32(c->r[29]+0x00000004u,c->r[0]); // 80354764
  c->r[0]=R32(c->r[4]+0x00000008u); // 80354768
  W32(c->r[29]+0x00000008u,c->r[0]); // 8035476C
L_80354770:;
  c->r[11]=c->r[1]+0x000000A0u; // 80354770
  c->lr=0x80354778u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80354774
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80354778
  c->lr=c->r[0]; // 8035477C
  c->r[1]=c->r[1]+0x000000A0u; // 80354780
  return; // 80354784
}

// ARCFastOpen
void f_80354788(Ctx* __restrict c) {
  trace_call(0x80354788u);
  cmps(c,0,(int32_t)c->r[4],0); // 80354788
  c->r[6]=R32(c->r[3]+0x00000004u); // 8035478C
  if (crb(c,0)) { goto L_803547B0; } // 80354790
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80354794
  cmpu(c,0,c->r[4],c->r[0]); // 80354798
  if (!crb(c,0)) { goto L_803547B0; } // 8035479C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 803547A0
  c->r[0]=R32(c->r[6]+c->r[4]); // 803547A4
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 803547A8
  if (crb(c,2)) { goto L_803547B8; } // 803547AC
L_803547B0:;
  c->r[3]=0u+0x00000000u; // 803547B0
  return; // 803547B4
L_803547B8:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 803547B8
  c->r[4]=c->r[6]+c->r[4]; // 803547BC
  c->r[3]=0u+0x00000001u; // 803547C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 803547C4
  W32(c->r[5]+0x00000004u,c->r[0]); // 803547C8
  c->r[0]=R32(c->r[4]+0x00000008u); // 803547CC
  W32(c->r[5]+0x00000008u,c->r[0]); // 803547D0
  return; // 803547D4
}

// ARCConvertPathToEntrynum
void f_803547D8(Ctx* __restrict c) {
  trace_call(0x803547D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803547D8
  c->r[5]=0u+0x80460000u; // 803547DC
  c->r[5]=c->r[5]+0x000032B8u; // 803547E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803547E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803547E8
  c->r[8]=R32(c->r[3]+0x00000018u); // 803547EC
  c->r[9]=R32(c->r[3]+0x00000004u); // 803547F0
  c->r[6]=R32(c->r[5]+0x00000038u); // 803547F4
L_803547F8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 803547F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803547FC
  if (!crb(c,2)) { goto L_8035480C; } // 80354800
  c->r[3]=c->r[8]|c->r[8]; // 80354804
  goto L_80354A2C; // 80354808
L_8035480C:;
  cmps(c,0,(int32_t)c->r[0],47); // 8035480C
  if (!crb(c,2)) { goto L_80354820; } // 80354810
  c->r[8]=0u+0x00000000u; // 80354814
  c->r[4]=c->r[4]+0x00000001u; // 80354818
  IRQCHK(c); goto L_803547F8; // 8035481C
L_80354820:;
  cmps(c,0,(int32_t)c->r[0],46); // 80354820
  if (!crb(c,2)) { goto L_80354894; } // 80354824
  c->r[0]=R8(c->r[4]+0x00000001u); // 80354828
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8035482C
  cmps(c,0,(int32_t)c->r[0],46); // 80354830
  if (!crb(c,2)) { goto L_80354874; } // 80354834
  c->r[0]=R8(c->r[4]+0x00000002u); // 80354838
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8035483C
  cmps(c,0,(int32_t)c->r[0],47); // 80354840
  if (!crb(c,2)) { goto L_8035485C; } // 80354844
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80354848
  c->r[4]=c->r[4]+0x00000003u; // 8035484C
  c->r[5]=c->r[9]+c->r[0]; // 80354850
  c->r[8]=R32(c->r[5]+0x00000004u); // 80354854
  IRQCHK(c); goto L_803547F8; // 80354858
L_8035485C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8035485C
  if (!crb(c,2)) { goto L_80354894; } // 80354860
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 80354864
  c->r[3]=c->r[9]+c->r[0]; // 80354868
  c->r[3]=R32(c->r[3]+0x00000004u); // 8035486C
  goto L_80354A2C; // 80354870
L_80354874:;
  cmps(c,0,(int32_t)c->r[0],47); // 80354874
  if (!crb(c,2)) { goto L_80354884; } // 80354878
  c->r[4]=c->r[4]+0x00000002u; // 8035487C
  IRQCHK(c); goto L_803547F8; // 80354880
L_80354884:;
  cmps(c,0,(int32_t)c->r[0],0); // 80354884
  if (!crb(c,2)) { goto L_80354894; } // 80354888
  c->r[3]=c->r[8]|c->r[8]; // 8035488C
  goto L_80354A2C; // 80354890
L_80354894:;
  c->r[7]=c->r[4]|c->r[4]; // 80354894
  goto L_803548A0; // 80354898
L_8035489C:;
  c->r[7]=c->r[7]+0x00000001u; // 8035489C
L_803548A0:;
  c->r[5]=R8(c->r[7]+0x00000000u); // 803548A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 803548A4
  if (crb(c,2)) { goto L_803548B4; } // 803548A8
  cmps(c,0,(int32_t)c->r[0],47); // 803548AC
  if (!crb(c,2)) { IRQCHK(c); goto L_8035489C; } // 803548B0
L_803548B4:;
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 803548B4
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 803548B8
  c->r[7]=c->r[7]-c->r[4]; // 803548BC
  c->r[10]=0u-c->r[11]; // 803548C0
  c->r[5]=c->r[9]+c->r[0]; // 803548C4
  c->r[8]=c->r[8]+0x00000001u; // 803548C8
  c->r[0]=c->r[10]|c->r[11]; // 803548CC
  c->r[5]=R32(c->r[5]+0x00000008u); // 803548D0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803548D4
  goto L_80354A00; // 803548D8
L_803548DC:;
  c->r[10]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 803548DC
  c->r[12]=c->r[9]+c->r[10]; // 803548E0
L_803548E4:;
  c->r[31]=R32(c->r[12]+0x00000000u); // 803548E4
  c->r[10]=rotl(c->r[31],0)&0xFF000000u; cr0(c,c->r[10]); // 803548E8
  if (!crb(c,2)) { goto L_803548F8; } // 803548EC
  cmps(c,0,(int32_t)c->r[0],1); // 803548F0
  if (crb(c,2)) { goto L_803549E0; } // 803548F4
L_803548F8:;
  c->r[11]=R32(c->r[3]+0x00000010u); // 803548F8
  c->r[10]=rotl(c->r[31],0)&0x00FFFFFFu; // 803548FC
  c->r[30]=c->r[11]+c->r[10]; // 80354900
  c->r[10]=R8(c->r[11]+c->r[10]); // 80354904
  cmps(c,0,(int32_t)c->r[10],46); // 80354908
  if (!crb(c,2)) { goto L_80354928; } // 8035490C
  c->r[10]=R8(c->r[30]+0x00000001u); // 80354910
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 80354914
  if (!crb(c,2)) { goto L_80354928; } // 80354918
  c->r[12]=c->r[12]+0x0000000Cu; // 8035491C
  c->r[8]=c->r[8]+0x00000001u; // 80354920
  IRQCHK(c); goto L_803548E4; // 80354924
L_80354928:;
  c->r[12]=c->r[4]|c->r[4]; // 80354928
  goto L_803549A8; // 8035492C
L_80354930:;
  c->r[11]=R8(c->r[30]+0x00000000u); // 80354930
  c->r[10]=0u+0x00000000u; // 80354934
  c->r[30]=c->r[30]+0x00000001u; // 80354938
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[31]); // 8035493C
  if (crb(c,0)) { goto L_8035494C; } // 80354940
  cmps(c,0,(int32_t)c->r[31],256); // 80354944
  if (crb(c,0)) { goto L_80354950; } // 80354948
L_8035494C:;
  c->r[10]=0u+0x00000001u; // 8035494C
L_80354950:;
  cmps(c,0,(int32_t)c->r[10],0); // 80354950
  if (crb(c,2)) { goto L_8035495C; } // 80354954
  goto L_80354964; // 80354958
L_8035495C:;
  c->r[10]=R32(c->r[6]+0x00000010u); // 8035495C
  c->r[31]=R8(c->r[10]+c->r[31]); // 80354960
L_80354964:;
  c->r[11]=R8(c->r[12]+0x00000000u); // 80354964
  c->r[10]=0u+0x00000000u; // 80354968
  c->r[12]=c->r[12]+0x00000001u; // 8035496C
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 80354970
  if (crb(c,0)) { goto L_80354980; } // 80354974
  cmps(c,0,(int32_t)c->r[11],256); // 80354978
  if (crb(c,0)) { goto L_80354984; } // 8035497C
L_80354980:;
  c->r[10]=0u+0x00000001u; // 80354980
L_80354984:;
  cmps(c,0,(int32_t)c->r[10],0); // 80354984
  if (crb(c,2)) { goto L_80354990; } // 80354988
  goto L_80354998; // 8035498C
L_80354990:;
  c->r[10]=R32(c->r[6]+0x00000010u); // 80354990
  c->r[11]=R8(c->r[10]+c->r[11]); // 80354994
L_80354998:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[31]); // 80354998
  if (crb(c,2)) { goto L_803549A8; } // 8035499C
  c->r[10]=0u+0x00000000u; // 803549A0
  goto L_803549D8; // 803549A4
L_803549A8:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 803549A8
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 803549AC
  if (!crb(c,2)) { IRQCHK(c); goto L_80354930; } // 803549B0
  c->r[10]=R8(c->r[12]+0x00000000u); // 803549B4
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 803549B8
  cmps(c,0,(int32_t)c->r[10],47); // 803549BC
  if (crb(c,2)) { goto L_803549CC; } // 803549C0
  cmps(c,0,(int32_t)c->r[10],0); // 803549C4
  if (!crb(c,2)) { goto L_803549D4; } // 803549C8
L_803549CC:;
  c->r[10]=0u+0x00000001u; // 803549CC
  goto L_803549D8; // 803549D0
L_803549D4:;
  c->r[10]=0u+0x00000000u; // 803549D4
L_803549D8:;
  cmps(c,0,(int32_t)c->r[10],1); // 803549D8
  if (crb(c,2)) { goto L_80354A10; } // 803549DC
L_803549E0:;
  c->r[10]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 803549E0
  c->r[11]=c->r[9]+c->r[10]; // 803549E4
  c->r[10]=R32(c->r[9]+c->r[10]); // 803549E8
  c->r[10]=rotl(c->r[10],0)&0xFF000000u; cr0(c,c->r[10]); // 803549EC
  if (crb(c,2)) { goto L_803549FC; } // 803549F0
  c->r[8]=R32(c->r[11]+0x00000008u); // 803549F4
  goto L_80354A00; // 803549F8
L_803549FC:;
  c->r[8]=c->r[8]+0x00000001u; // 803549FC
L_80354A00:;
  cmpu(c,0,c->r[8],c->r[5]); // 80354A00
  if (crb(c,0)) { IRQCHK(c); goto L_803548DC; } // 80354A04
  c->r[3]=0u+0xFFFFFFFFu; // 80354A08
  goto L_80354A2C; // 80354A0C
L_80354A10:;
  cmps(c,0,(int32_t)c->r[0],0); // 80354A10
  if (!crb(c,2)) { goto L_80354A20; } // 80354A14
  c->r[3]=c->r[8]|c->r[8]; // 80354A18
  goto L_80354A2C; // 80354A1C
L_80354A20:;
  c->r[4]=c->r[7]+c->r[4]; // 80354A20
  c->r[4]=c->r[4]+0x00000001u; // 80354A24
  IRQCHK(c); goto L_803547F8; // 80354A28
L_80354A2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80354A2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80354A30
  c->r[1]=c->r[1]+0x00000010u; // 80354A34
  return; // 80354A38
}

// entryToPath_80354A3C
void f_80354A3C(Ctx* __restrict c) {
  trace_call(0x80354A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80354A3C
  c->r[0]=c->lr; // 80354A40
  W32(c->r[1]+0x00000024u,c->r[0]); // 80354A44
  c->r[11]=c->r[1]+0x00000020u; // 80354A48
  c->lr=0x80354A50u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80354A4C
  cmps(c,0,(int32_t)c->r[4],0); // 80354A50
  c->r[7]=R32(c->r[3]+0x00000004u); // 80354A54
  c->r[28]=c->r[5]|c->r[5]; // 80354A58
  c->r[29]=c->r[6]|c->r[6]; // 80354A5C
  if (!crb(c,2)) { goto L_80354A6C; } // 80354A60
  c->r[3]=0u+0x00000000u; // 80354A64
  goto L_80354BEC; // 80354A68
L_80354A6C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80354A6C
  c->r[8]=R32(c->r[3]+0x00000010u); // 80354A70
  c->r[4]=c->r[7]+c->r[0]; // 80354A74
  c->r[0]=R32(c->r[7]+c->r[0]); // 80354A78
  c->r[4]=R32(c->r[4]+0x00000004u); // 80354A7C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80354A80
  cmps(c,0,(int32_t)c->r[4],0); // 80354A84
  c->r[30]=c->r[8]+c->r[0]; // 80354A88
  if (!crb(c,2)) { goto L_80354A98; } // 80354A8C
  c->r[4]=0u+0x00000000u; // 80354A90
  goto L_80354B90; // 80354A94
L_80354A98:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80354A98
  c->r[4]=c->r[7]+c->r[0]; // 80354A9C
  c->r[0]=R32(c->r[7]+c->r[0]); // 80354AA0
  c->r[4]=R32(c->r[4]+0x00000004u); // 80354AA4
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80354AA8
  cmps(c,0,(int32_t)c->r[4],0); // 80354AAC
  c->r[31]=c->r[8]+c->r[0]; // 80354AB0
  if (!crb(c,2)) { goto L_80354AC0; } // 80354AB4
  c->r[4]=0u+0x00000000u; // 80354AB8
  goto L_80354B38; // 80354ABC
L_80354AC0:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80354AC0
  c->r[0]=R32(c->r[7]+c->r[4]); // 80354AC4
  c->r[4]=c->r[7]+c->r[4]; // 80354AC8
  c->r[4]=R32(c->r[4]+0x00000004u); // 80354ACC
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80354AD0
  c->r[27]=c->r[8]+c->r[0]; // 80354AD4
  c->lr=0x80354ADCu; f_80354A3C(c); // 80354AD8
  cmpu(c,0,c->r[3],c->r[29]); // 80354ADC
  c->r[4]=c->r[3]|c->r[3]; // 80354AE0
  if (!crb(c,2)) { goto L_80354AEC; } // 80354AE4
  goto L_80354B38; // 80354AE8
L_80354AEC:;
  c->r[4]=c->r[3]+0x00000001u; // 80354AEC
  c->r[0]=0u+0x0000002Fu; // 80354AF0
  c->r[6]=c->r[29]-c->r[4]; // 80354AF4
  W8(c->r[28]+c->r[3],c->r[0]); // 80354AF8
  c->r[3]=c->r[28]+c->r[4]; // 80354AFC
  c->r[5]=c->r[6]|c->r[6]; // 80354B00
  goto L_80354B1C; // 80354B04
L_80354B08:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80354B08
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80354B0C
  c->r[27]=c->r[27]+0x00000001u; // 80354B10
  W8(c->r[3]+0x00000000u,c->r[0]); // 80354B14
  c->r[3]=c->r[3]+0x00000001u; // 80354B18
L_80354B1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80354B1C
  if (crb(c,2)) { goto L_80354B30; } // 80354B20
  c->r[0]=R8(c->r[27]+0x00000000u); // 80354B24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80354B28
  if (!crb(c,2)) { IRQCHK(c); goto L_80354B08; } // 80354B2C
L_80354B30:;
  c->r[0]=c->r[6]-c->r[5]; // 80354B30
  c->r[4]=c->r[4]+c->r[0]; // 80354B34
L_80354B38:;
  cmpu(c,0,c->r[4],c->r[29]); // 80354B38
  if (!crb(c,2)) { goto L_80354B44; } // 80354B3C
  goto L_80354B90; // 80354B40
L_80354B44:;
  c->r[3]=c->r[4]+0x00000001u; // 80354B44
  c->r[0]=0u+0x0000002Fu; // 80354B48
  c->r[6]=c->r[29]-c->r[3]; // 80354B4C
  W8(c->r[28]+c->r[4],c->r[0]); // 80354B50
  c->r[4]=c->r[28]+c->r[3]; // 80354B54
  c->r[5]=c->r[6]|c->r[6]; // 80354B58
  goto L_80354B74; // 80354B5C
L_80354B60:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80354B60
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80354B64
  c->r[31]=c->r[31]+0x00000001u; // 80354B68
  W8(c->r[4]+0x00000000u,c->r[0]); // 80354B6C
  c->r[4]=c->r[4]+0x00000001u; // 80354B70
L_80354B74:;
  cmps(c,0,(int32_t)c->r[5],0); // 80354B74
  if (crb(c,2)) { goto L_80354B88; } // 80354B78
  c->r[0]=R8(c->r[31]+0x00000000u); // 80354B7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80354B80
  if (!crb(c,2)) { IRQCHK(c); goto L_80354B60; } // 80354B84
L_80354B88:;
  c->r[0]=c->r[6]-c->r[5]; // 80354B88
  c->r[4]=c->r[3]+c->r[0]; // 80354B8C
L_80354B90:;
  cmpu(c,0,c->r[4],c->r[29]); // 80354B90
  if (!crb(c,2)) { goto L_80354BA0; } // 80354B94
  c->r[3]=c->r[4]|c->r[4]; // 80354B98
  goto L_80354BEC; // 80354B9C
L_80354BA0:;
  c->r[6]=c->r[4]+0x00000001u; // 80354BA0
  c->r[0]=0u+0x0000002Fu; // 80354BA4
  c->r[5]=c->r[29]-c->r[6]; // 80354BA8
  W8(c->r[28]+c->r[4],c->r[0]); // 80354BAC
  c->r[3]=c->r[28]+c->r[6]; // 80354BB0
  c->r[4]=c->r[5]|c->r[5]; // 80354BB4
  goto L_80354BD0; // 80354BB8
L_80354BBC:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80354BBC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80354BC0
  c->r[30]=c->r[30]+0x00000001u; // 80354BC4
  W8(c->r[3]+0x00000000u,c->r[0]); // 80354BC8
  c->r[3]=c->r[3]+0x00000001u; // 80354BCC
L_80354BD0:;
  cmps(c,0,(int32_t)c->r[4],0); // 80354BD0
  if (crb(c,2)) { goto L_80354BE4; } // 80354BD4
  c->r[0]=R8(c->r[30]+0x00000000u); // 80354BD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80354BDC
  if (!crb(c,2)) { IRQCHK(c); goto L_80354BBC; } // 80354BE0
L_80354BE4:;
  c->r[0]=c->r[5]-c->r[4]; // 80354BE4
  c->r[3]=c->r[6]+c->r[0]; // 80354BE8
L_80354BEC:;
  c->r[11]=c->r[1]+0x00000020u; // 80354BEC
  c->lr=0x80354BF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80354BF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80354BF4
  c->lr=c->r[0]; // 80354BF8
  c->r[1]=c->r[1]+0x00000020u; // 80354BFC
  return; // 80354C00
}

// ARCGetStartAddrInMem
void f_80354C04(Ctx* __restrict c) {
  trace_call(0x80354C04u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 80354C04
  c->r[0]=R32(c->r[3]+0x00000004u); // 80354C08
  c->r[3]=R32(c->r[4]+0x00000000u); // 80354C0C
  c->r[3]=c->r[3]+c->r[0]; // 80354C10
  return; // 80354C14
}

// ARCGetLength
void f_80354C18(Ctx* __restrict c) {
  trace_call(0x80354C18u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80354C18
  return; // 80354C1C
}

// ARCClose
void f_80354C20(Ctx* __restrict c) {
  trace_call(0x80354C20u);
  c->r[3]=0u+0x00000001u; // 80354C20
  return; // 80354C24
}

// ARCChangeDir
void f_80354C28(Ctx* __restrict c) {
  trace_call(0x80354C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80354C28
  c->r[0]=c->lr; // 80354C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80354C30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80354C34
  c->r[31]=c->r[3]|c->r[3]; // 80354C38
  c->lr=0x80354C40u; f_803547D8(c); // 80354C3C
  cmps(c,0,(int32_t)c->r[3],0); // 80354C40
  c->r[4]=R32(c->r[31]+0x00000004u); // 80354C44
  if (crb(c,0)) { goto L_80354C5C; } // 80354C48
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80354C4C
  c->r[0]=R32(c->r[4]+c->r[0]); // 80354C50
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80354C54
  if (!crb(c,2)) { goto L_80354C64; } // 80354C58
L_80354C5C:;
  c->r[3]=0u+0x00000000u; // 80354C5C
  goto L_80354C6C; // 80354C60
L_80354C64:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 80354C64
  c->r[3]=0u+0x00000001u; // 80354C68
L_80354C6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80354C6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80354C70
  c->lr=c->r[0]; // 80354C74
  c->r[1]=c->r[1]+0x00000010u; // 80354C78
  return; // 80354C7C
}

// ARCOpenDir
void f_80354C80(Ctx* __restrict c) {
  trace_call(0x80354C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80354C80
  c->r[0]=c->lr; // 80354C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80354C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80354C8C
  c->r[31]=c->r[5]|c->r[5]; // 80354C90
  W32(c->r[1]+0x00000008u,c->r[30]); // 80354C94
  c->r[30]=c->r[3]|c->r[3]; // 80354C98
  c->lr=0x80354CA0u; f_803547D8(c); // 80354C9C
  cmps(c,0,(int32_t)c->r[3],0); // 80354CA0
  c->r[5]=R32(c->r[30]+0x00000004u); // 80354CA4
  if (crb(c,0)) { goto L_80354CBC; } // 80354CA8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80354CAC
  c->r[0]=R32(c->r[5]+c->r[4]); // 80354CB0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80354CB4
  if (!crb(c,2)) { goto L_80354CC4; } // 80354CB8
L_80354CBC:;
  c->r[3]=0u+0x00000000u; // 80354CBC
  goto L_80354CE4; // 80354CC0
L_80354CC4:;
  c->r[0]=c->r[3]+0x00000001u; // 80354CC4
  W32(c->r[31]+0x00000004u,c->r[3]); // 80354CC8
  c->r[4]=c->r[5]+c->r[4]; // 80354CCC
  c->r[3]=0u+0x00000001u; // 80354CD0
  W32(c->r[31]+0x00000000u,c->r[30]); // 80354CD4
  W32(c->r[31]+0x00000008u,c->r[0]); // 80354CD8
  c->r[0]=R32(c->r[4]+0x00000008u); // 80354CDC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80354CE0
L_80354CE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80354CE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80354CE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80354CEC
  c->lr=c->r[0]; // 80354CF0
  c->r[1]=c->r[1]+0x00000010u; // 80354CF4
  return; // 80354CF8
}

// ARCReadDir
void f_80354CFC(Ctx* __restrict c) {
  trace_call(0x80354CFCu);
  c->r[7]=R32(c->r[3]+0x00000008u); // 80354CFC
  c->r[9]=R32(c->r[3]+0x00000000u); // 80354D00
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80354D04
  c->r[8]=R32(c->r[9]+0x00000004u); // 80354D08
  c->r[6]=c->r[8]+c->r[0]; // 80354D0C
L_80354D10:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80354D10
  cmpu(c,0,c->r[7],c->r[0]); // 80354D14
  if (!crb(c,1)) { goto L_80354D28; } // 80354D18
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80354D1C
  cmpu(c,0,c->r[0],c->r[7]); // 80354D20
  if (crb(c,1)) { goto L_80354D30; } // 80354D24
L_80354D28:;
  c->r[3]=0u+0x00000000u; // 80354D28
  return; // 80354D2C
L_80354D30:;
  W32(c->r[4]+0x00000000u,c->r[9]); // 80354D30
  W32(c->r[4]+0x00000004u,c->r[7]); // 80354D34
  c->r[0]=R32(c->r[6]+0x00000000u); // 80354D38
  c->r[5]=rotl(c->r[0],0)&0xFF000000u; // 80354D3C
  c->r[0]=0u-c->r[5]; // 80354D40
  c->r[0]=c->r[0]|c->r[5]; // 80354D44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80354D48
  W32(c->r[4]+0x00000008u,c->r[0]); // 80354D4C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80354D50
  c->r[5]=R32(c->r[9]+0x00000010u); // 80354D54
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80354D58
  c->r[5]=c->r[5]+c->r[0]; // 80354D5C
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 80354D60
  c->r[0]=R8(c->r[5]+0x00000000u); // 80354D64
  cmps(c,0,(int32_t)c->r[0],46); // 80354D68
  if (!crb(c,2)) { goto L_80354D88; } // 80354D6C
  c->r[0]=R8(c->r[5]+0x00000001u); // 80354D70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80354D74
  if (!crb(c,2)) { goto L_80354D88; } // 80354D78
  c->r[6]=c->r[6]+0x0000000Cu; // 80354D7C
  c->r[7]=c->r[7]+0x00000001u; // 80354D80
  IRQCHK(c); goto L_80354D10; // 80354D84
L_80354D88:;
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80354D88
  c->r[0]=R32(c->r[8]+c->r[4]); // 80354D8C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80354D90
  if (crb(c,2)) { goto L_80354DA4; } // 80354D94
  c->r[4]=c->r[8]+c->r[4]; // 80354D98
  c->r[0]=R32(c->r[4]+0x00000008u); // 80354D9C
  goto L_80354DA8; // 80354DA0
L_80354DA4:;
  c->r[0]=c->r[7]+0x00000001u; // 80354DA4
L_80354DA8:;
  W32(c->r[3]+0x00000008u,c->r[0]); // 80354DA8
  c->r[3]=0u+0x00000001u; // 80354DAC
  return; // 80354DB0
}

// ARCCloseDir
void f_80354DB4(Ctx* __restrict c) {
  trace_call(0x80354DB4u);
  c->r[3]=0u+0x00000001u; // 80354DB4
  return; // 80354DB8
}

// gki_init_free_queue
void f_80354DBC(Ctx* __restrict c) {
  trace_call(0x80354DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80354DBC
  c->r[0]=c->lr; // 80354DC0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80354DC4
  c->r[11]=c->r[1]+0x00000040u; // 80354DC8
  c->lr=0x80354DD0u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80354DCC
  c->r[12]=c->r[4]+0x00000003u; // 80354DD0
  c->r[4]=0u+0x80530000u; // 80354DD4
  c->r[9]=rotl(c->r[12],0)&0xFFFFFFFCu; // 80354DD8
  c->r[11]=rotl(c->r[3],2)&0x000003FCu; // 80354DDC
  c->r[26]=c->r[9]+0x0000000Cu; // 80354DE0
  c->r[4]=c->r[4]+0x000016E0u; // 80354DE4
  c->r[8]=rotl(c->r[26],0)&0x0000FFFFu; // 80354DE8
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 80354DEC
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[5]); // 80354DF0
  c->r[10]=c->r[4]+0x00000054u; // 80354DF4
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 80354DF8
  c->r[25]=c->r[10]+0x00030000u; // 80354DFC
  c->r[12]=rotl(c->r[12],0)&0x0000FFFCu; // 80354E00
  c->r[24]=c->r[25]+c->r[11]; // 80354E04
  c->r[11]=c->r[6]+c->r[7]; // 80354E08
  W32(c->r[24]+0xFFFF8A1Cu,c->r[6]); // 80354E0C
  c->r[7]=c->r[25]+c->r[4]; // 80354E10
  c->r[4]=0u+0x00000000u; // 80354E14
  W32(c->r[24]+0xFFFF8A40u,c->r[11]); // 80354E18
  c->r[11]=c->r[25]+c->r[0]; // 80354E1C
  cmps(c,0,(int32_t)c->r[5],0); // 80354E20
  W16(c->r[7]+0xFFFF8A64u,c->r[26]); // 80354E24
  c->r[7]=0u+0x00000000u; // 80354E28
  W16(c->r[11]+0xFFFF8994u,c->r[12]); // 80354E2C
  W16(c->r[11]+0xFFFF8996u,c->r[5]); // 80354E30
  W16(c->r[11]+0xFFFF8998u,c->r[4]); // 80354E34
  W16(c->r[11]+0xFFFF899Au,c->r[4]); // 80354E38
  W32(c->r[11]+0xFFFF898Cu,c->r[6]); // 80354E3C
  if (crb(c,2)) { goto L_80354FB0; } // 80354E40
  cmpu(c,0,c->r[5],0x00000008u); // 80354E44
  c->r[11]=c->r[5]+0x00010000u; // 80354E48
  c->r[11]=c->r[11]+0xFFFFFFF8u; // 80354E4C
  if (!crb(c,1)) { goto L_80354F64; } // 80354E50
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 80354E54
  c->r[27]=0u+0xDDBB0000u; // 80354E58
  c->r[11]=c->r[12]+0x00000007u; // 80354E5C
  c->r[24]=0u+0x000000F0u; // 80354E60
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 80354E64
  c->r[26]=c->r[27]+0xFFFFDDBAu; // 80354E68
  c->r[25]=0u+0x00000000u; // 80354E6C
  c->ctr=c->r[11]; // 80354E70
  cmpu(c,0,c->r[12],0x00000000u); // 80354E74
  if (!crb(c,1)) { goto L_80354F64; } // 80354E78
L_80354E7C:;
  W8(c->r[6]+0x00000005u,c->r[24]); // 80354E7C
  c->r[18]=c->r[6]+c->r[8]; // 80354E80
  c->r[19]=c->r[18]+c->r[8]; // 80354E84
  c->r[4]=c->r[6]+c->r[9]; // 80354E88
  W8(c->r[6]+0x00000004u,c->r[3]); // 80354E8C
  c->r[20]=c->r[19]+c->r[8]; // 80354E90
  c->r[21]=c->r[20]+c->r[8]; // 80354E94
  c->r[27]=c->r[18]+c->r[9]; // 80354E98
  W8(c->r[6]+0x00000006u,c->r[25]); // 80354E9C
  c->r[22]=c->r[21]+c->r[8]; // 80354EA0
  c->r[23]=c->r[22]+c->r[8]; // 80354EA4
  c->r[28]=c->r[19]+c->r[9]; // 80354EA8
  W32(c->r[4]+0x00000008u,c->r[26]); // 80354EAC
  c->r[4]=c->r[23]+c->r[8]; // 80354EB0
  c->r[31]=c->r[20]+c->r[9]; // 80354EB4
  c->r[30]=c->r[21]+c->r[9]; // 80354EB8
  W32(c->r[6]+0x00000000u,c->r[18]); // 80354EBC
  c->r[29]=c->r[22]+c->r[9]; // 80354EC0
  c->r[12]=c->r[23]+c->r[9]; // 80354EC4
  c->r[11]=c->r[4]+c->r[9]; // 80354EC8
  W8(c->r[18]+0x00000005u,c->r[24]); // 80354ECC
  c->r[6]=c->r[4]+c->r[8]; // 80354ED0
  c->r[7]=c->r[7]+0x00000008u; // 80354ED4
  W8(c->r[18]+0x00000004u,c->r[3]); // 80354ED8
  W8(c->r[18]+0x00000006u,c->r[25]); // 80354EDC
  W32(c->r[27]+0x00000008u,c->r[26]); // 80354EE0
  W32(c->r[18]+0x00000000u,c->r[19]); // 80354EE4
  W8(c->r[19]+0x00000005u,c->r[24]); // 80354EE8
  W8(c->r[19]+0x00000004u,c->r[3]); // 80354EEC
  W8(c->r[19]+0x00000006u,c->r[25]); // 80354EF0
  W32(c->r[28]+0x00000008u,c->r[26]); // 80354EF4
  W32(c->r[18]+c->r[8],c->r[20]); // 80354EF8
  W8(c->r[20]+0x00000005u,c->r[24]); // 80354EFC
  W8(c->r[20]+0x00000004u,c->r[3]); // 80354F00
  W8(c->r[20]+0x00000006u,c->r[25]); // 80354F04
  W32(c->r[31]+0x00000008u,c->r[26]); // 80354F08
  W32(c->r[19]+c->r[8],c->r[21]); // 80354F0C
  W8(c->r[21]+0x00000005u,c->r[24]); // 80354F10
  W8(c->r[21]+0x00000004u,c->r[3]); // 80354F14
  W8(c->r[21]+0x00000006u,c->r[25]); // 80354F18
  W32(c->r[30]+0x00000008u,c->r[26]); // 80354F1C
  W32(c->r[20]+c->r[8],c->r[22]); // 80354F20
  W8(c->r[22]+0x00000005u,c->r[24]); // 80354F24
  W8(c->r[22]+0x00000004u,c->r[3]); // 80354F28
  W8(c->r[22]+0x00000006u,c->r[25]); // 80354F2C
  W32(c->r[29]+0x00000008u,c->r[26]); // 80354F30
  W32(c->r[21]+c->r[8],c->r[23]); // 80354F34
  W8(c->r[23]+0x00000005u,c->r[24]); // 80354F38
  W8(c->r[23]+0x00000004u,c->r[3]); // 80354F3C
  W8(c->r[23]+0x00000006u,c->r[25]); // 80354F40
  W32(c->r[12]+0x00000008u,c->r[26]); // 80354F44
  W32(c->r[22]+c->r[8],c->r[4]); // 80354F48
  W8(c->r[4]+0x00000005u,c->r[24]); // 80354F4C
  W8(c->r[4]+0x00000004u,c->r[3]); // 80354F50
  W8(c->r[4]+0x00000006u,c->r[25]); // 80354F54
  W32(c->r[11]+0x00000008u,c->r[26]); // 80354F58
  W32(c->r[23]+c->r[8],c->r[6]); // 80354F5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80354E7C; } // 80354F60
L_80354F64:;
  c->r[12]=rotl(c->r[7],0)&0x0000FFFFu; // 80354F64
  c->r[31]=0u+0xDDBB0000u; // 80354F68
  c->r[11]=c->r[5]-c->r[12]; // 80354F6C
  c->r[29]=0u+0x000000F0u; // 80354F70
  c->r[31]=c->r[31]+0xFFFFDDBAu; // 80354F74
  c->r[30]=0u+0x00000000u; // 80354F78
  c->ctr=c->r[11]; // 80354F7C
  cmpu(c,0,c->r[12],c->r[5]); // 80354F80
  if (!crb(c,0)) { goto L_80354FB0; } // 80354F84
L_80354F88:;
  W8(c->r[6]+0x00000005u,c->r[29]); // 80354F88
  c->r[5]=c->r[6]+c->r[9]; // 80354F8C
  c->r[4]=c->r[6]|c->r[6]; // 80354F90
  c->r[7]=c->r[7]+0x00000001u; // 80354F94
  W8(c->r[6]+0x00000004u,c->r[3]); // 80354F98
  W8(c->r[6]+0x00000006u,c->r[30]); // 80354F9C
  c->r[6]=c->r[6]+c->r[8]; // 80354FA0
  W32(c->r[5]+0x00000008u,c->r[31]); // 80354FA4
  W32(c->r[4]+0x00000000u,c->r[6]); // 80354FA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80354F88; } // 80354FAC
L_80354FB0:;
  c->r[5]=0u+0x00000000u; // 80354FB0
  c->r[3]=c->r[10]+0x00030000u; // 80354FB4
  W32(c->r[4]+0x00000000u,c->r[5]); // 80354FB8
  c->r[3]=c->r[3]+c->r[0]; // 80354FBC
  c->r[11]=c->r[1]+0x00000040u; // 80354FC0
  W32(c->r[3]+0xFFFF8990u,c->r[4]); // 80354FC4
  c->lr=0x80354FCCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80354FC8
  c->r[0]=R32(c->r[1]+0x00000044u); // 80354FCC
  c->lr=c->r[0]; // 80354FD0
  c->r[1]=c->r[1]+0x00000040u; // 80354FD4
  return; // 80354FD8
}

// gki_buffer_init
void f_80354FDC(Ctx* __restrict c) {
  trace_call(0x80354FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80354FDC
  c->r[0]=c->lr; // 80354FE0
  c->r[3]=0u+0x80530000u; // 80354FE4
  c->r[6]=0u+0x00000000u; // 80354FE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80354FEC
  c->r[0]=0u+0x00000002u; // 80354FF0
  c->r[3]=c->r[3]+0x000016E0u; // 80354FF4
  c->r[4]=0u+0x00000000u; // 80354FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80354FFC
  c->r[31]=c->r[3]+0x00000054u; // 80355000
  c->ctr=c->r[0]; // 80355004
L_80355008:;
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 80355008
  c->r[6]=c->r[6]+0x00000001u; // 8035500C
  c->r[5]=c->r[31]+c->r[0]; // 80355010
  c->r[3]=c->r[5]+0x00030000u; // 80355014
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 80355018
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 8035501C
  c->r[5]=c->r[31]+c->r[0]; // 80355020
  c->r[6]=c->r[6]+0x00000001u; // 80355024
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 80355028
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 8035502C
  c->r[6]=c->r[6]+0x00000001u; // 80355030
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 80355034
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 80355038
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 8035503C
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 80355040
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 80355044
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 80355048
  c->r[3]=c->r[5]+0x00030000u; // 8035504C
  c->r[5]=c->r[31]+c->r[0]; // 80355050
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 80355054
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 80355058
  c->r[6]=c->r[6]+0x00000001u; // 8035505C
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 80355060
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 80355064
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 80355068
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 8035506C
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 80355070
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 80355074
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 80355078
  c->r[3]=c->r[5]+0x00030000u; // 8035507C
  c->r[5]=c->r[31]+c->r[0]; // 80355080
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 80355084
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 80355088
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 8035508C
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 80355090
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 80355094
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 80355098
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 8035509C
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 803550A0
  c->r[3]=c->r[5]+0x00030000u; // 803550A4
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 803550A8
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 803550AC
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 803550B0
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 803550B4
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 803550B8
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 803550BC
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 803550C0
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 803550C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80355008; } // 803550C8
  c->r[0]=0u+0x00000003u; // 803550CC
  c->r[10]=0u+0x00000000u; // 803550D0
  c->r[7]=0u+0x00000000u; // 803550D4
  c->ctr=c->r[0]; // 803550D8
L_803550DC:;
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 803550DC
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 803550E0
  c->r[8]=c->r[31]+c->r[0]; // 803550E4
  c->r[6]=c->r[8]+0x00030000u; // 803550E8
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 803550EC
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 803550F0
  c->r[4]=c->r[4]+0x00030000u; // 803550F4
  c->r[9]=c->r[31]+c->r[0]; // 803550F8
  c->r[10]=c->r[10]+0x00000001u; // 803550FC
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 80355100
  c->r[5]=c->r[4]+0xFFFF8A64u; // 80355104
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 80355108
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 8035510C
  W16(c->r[31]+c->r[5],c->r[7]); // 80355110
  c->r[8]=c->r[31]+c->r[0]; // 80355114
  c->r[3]=c->r[9]+0x00030000u; // 80355118
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 8035511C
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 80355120
  c->r[4]=c->r[4]+0x00030000u; // 80355124
  c->r[6]=c->r[8]+0x00030000u; // 80355128
  c->r[9]=c->r[31]+c->r[0]; // 8035512C
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 80355130
  c->r[10]=c->r[10]+0x00000001u; // 80355134
  c->r[5]=c->r[4]+0xFFFF8A64u; // 80355138
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 8035513C
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 80355140
  c->r[8]=c->r[31]+c->r[0]; // 80355144
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 80355148
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 8035514C
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 80355150
  c->r[4]=c->r[4]+0x00030000u; // 80355154
  c->r[10]=c->r[10]+0x00000001u; // 80355158
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 8035515C
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 80355160
  c->r[3]=c->r[9]+0x00030000u; // 80355164
  c->r[9]=c->r[31]+c->r[0]; // 80355168
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 8035516C
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 80355170
  c->r[6]=c->r[8]+0x00030000u; // 80355174
  W16(c->r[31]+c->r[5],c->r[7]); // 80355178
  c->r[5]=c->r[4]+0xFFFF8A64u; // 8035517C
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 80355180
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 80355184
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 80355188
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 8035518C
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 80355190
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 80355194
  c->r[3]=c->r[9]+0x00030000u; // 80355198
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 8035519C
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 803551A0
  W16(c->r[31]+c->r[5],c->r[7]); // 803551A4
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 803551A8
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 803551AC
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 803551B0
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 803551B4
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 803551B8
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 803551BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803550DC; } // 803551C0
  c->r[4]=0u+0x00010000u; // 803551C4
  c->r[3]=c->r[31]+0x00030000u; // 803551C8
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 803551CC
  c->r[6]=c->r[31]|c->r[31]; // 803551D0
  W16(c->r[3]+0xFFFF8A7Cu,c->r[0]); // 803551D4
  c->r[3]=0u+0x00000000u; // 803551D8
  c->r[4]=0u+0x00000040u; // 803551DC
  c->r[5]=0u+0x00000030u; // 803551E0
  c->lr=0x803551E8u; f_80354DBC(c); // 803551E4
  c->r[6]=c->r[31]+0x00000E40u; // 803551E8
  c->r[3]=0u+0x00000001u; // 803551EC
  c->r[4]=0u+0x00000080u; // 803551F0
  c->r[5]=0u+0x0000001Au; // 803551F4
  c->lr=0x803551FCu; f_80354DBC(c); // 803551F8
  c->r[6]=c->r[31]+0x00001C78u; // 803551FC
  c->r[3]=0u+0x00000002u; // 80355200
  c->r[4]=0u+0x00000294u; // 80355204
  c->r[5]=0u+0x0000002Du; // 80355208
  c->lr=0x80355210u; f_80354DBC(c); // 8035520C
  c->r[6]=c->r[31]+0x00010000u; // 80355210
  c->r[3]=0u+0x00000003u; // 80355214
  c->r[4]=0u+0x00000708u; // 80355218
  c->r[5]=0u+0x0000001Eu; // 8035521C
  c->r[6]=c->r[6]+0xFFFF9298u; // 80355220
  c->lr=0x80355228u; f_80354DBC(c); // 80355224
  c->r[6]=c->r[31]+0x00010000u; // 80355228
  c->r[3]=0u+0x00000004u; // 8035522C
  c->r[4]=0u+0x00002000u; // 80355230
  c->r[5]=0u+0x00000009u; // 80355234
  c->r[6]=c->r[6]+0x000066F0u; // 80355238
  c->lr=0x80355240u; f_80354DBC(c); // 8035523C
  c->r[6]=c->r[31]+0x00030000u; // 80355240
  c->r[0]=0u+0x00000000u; // 80355244
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 80355248
  c->r[0]=0u+0x00000001u; // 8035524C
  c->r[5]=0u+0x00000002u; // 80355250
  c->r[4]=0u+0x00000003u; // 80355254
  W8(c->r[6]+0xFFFF8A7Fu,c->r[0]); // 80355258
  c->r[3]=0u+0x00000004u; // 8035525C
  c->r[0]=0u+0x00000005u; // 80355260
  W8(c->r[6]+0xFFFF8A80u,c->r[5]); // 80355264
  W8(c->r[6]+0xFFFF8A81u,c->r[4]); // 80355268
  W8(c->r[6]+0xFFFF8A82u,c->r[3]); // 8035526C
  W8(c->r[6]+0xFFFF8A87u,c->r[0]); // 80355270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80355274
  c->r[0]=R32(c->r[1]+0x00000014u); // 80355278
  c->lr=c->r[0]; // 8035527C
  c->r[1]=c->r[1]+0x00000010u; // 80355280
  return; // 80355284
}

// GKI_init_q
void f_80355288(Ctx* __restrict c) {
  trace_call(0x80355288u);
  c->r[0]=0u+0x00000000u; // 80355288
  W32(c->r[3]+0x00000004u,c->r[0]); // 8035528C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80355290
  W16(c->r[3]+0x00000008u,c->r[0]); // 80355294
  return; // 80355298
}

// GKI_getbuf
void f_8035529C(Ctx* __restrict c) {
  trace_call(0x8035529Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035529C
  c->r[0]=c->lr; // 803552A0
  c->r[4]=0u+0x80530000u; // 803552A4
  cmps(c,0,(int32_t)c->r[3],0); // 803552A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803552AC
  c->r[4]=c->r[4]+0x000016E0u; // 803552B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803552B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803552B8
  c->r[30]=c->r[4]+0x00000054u; // 803552BC
  if (!crb(c,2)) { goto L_803552E4; } // 803552C0
  c->r[3]=0u+0x00010000u; // 803552C4
  c->r[4]=0u+0x80460000u; // 803552C8
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 803552CC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803552D0
  c->r[4]=c->r[4]+0xFFFF9F00u; // 803552D4
  c->lr=0x803552DCu; f_803569B4(c); // 803552D8
  c->r[3]=0u+0x00000000u; // 803552DC
  goto L_80355424; // 803552E0
L_803552E4:;
  c->r[4]=c->r[30]+0x00030000u; // 803552E4
  c->r[31]=0u+0x00000000u; // 803552E8
  c->r[5]=R8(c->r[4]+0xFFFF8A87u); // 803552EC
  goto L_80355320; // 803552F0
L_803552F4:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 803552F4
  c->r[4]=c->r[4]+0x00030000u; // 803552F8
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 803552FC
  c->r[0]=R8(c->r[30]+c->r[0]); // 80355300
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80355304
  c->r[4]=c->r[4]+0x00030000u; // 80355308
  c->r[0]=c->r[4]+0xFFFF8994u; // 8035530C
  c->r[0]=R16(c->r[30]+c->r[0]); // 80355310
  cmpu(c,0,c->r[3],c->r[0]); // 80355314
  if (!crb(c,1)) { goto L_8035532C; } // 80355318
  c->r[31]=c->r[31]+0x00000001u; // 8035531C
L_80355320:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80355320
  cmpu(c,0,c->r[0],c->r[5]); // 80355324
  if (crb(c,0)) { IRQCHK(c); goto L_803552F4; } // 80355328
L_8035532C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8035532C
  cmpu(c,0,c->r[0],c->r[5]); // 80355330
  if (!crb(c,2)) { goto L_80355358; } // 80355334
  c->r[3]=0u+0x00010000u; // 80355338
  c->r[4]=0u+0x80460000u; // 8035533C
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 80355340
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80355344
  c->r[4]=c->r[4]+0xFFFF9F18u; // 80355348
  c->lr=0x80355350u; f_803569B4(c); // 8035534C
  c->r[3]=0u+0x00000000u; // 80355350
  goto L_80355424; // 80355354
L_80355358:;
  c->lr=0x8035535Cu; f_80356970(c); // 80355358
  c->r[6]=c->r[30]+0x00030000u; // 8035535C
  c->r[5]=0u+0x00000001u; // 80355360
  c->r[7]=R8(c->r[6]+0xFFFF8A87u); // 80355364
  goto L_80355410; // 80355368
L_8035536C:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8035536C
  c->r[3]=R16(c->r[6]+0xFFFF8A7Cu); // 80355370
  c->r[4]=c->r[4]+0x00030000u; // 80355374
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 80355378
  c->r[4]=R8(c->r[30]+c->r[0]); // 8035537C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 80355380
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80355384
  if (!crb(c,2)) { goto L_8035540C; } // 80355388
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 8035538C
  c->r[4]=c->r[6]+c->r[0]; // 80355390
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 80355394
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 80355398
  cmpu(c,0,c->r[3],c->r[0]); // 8035539C
  if (!crb(c,0)) { goto L_8035540C; } // 803553A0
  c->r[30]=R32(c->r[4]+0xFFFF898Cu); // 803553A4
  c->r[0]=R32(c->r[30]+0x00000000u); // 803553A8
  cmps(c,0,(int32_t)c->r[0],0); // 803553AC
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 803553B0
  if (!crb(c,2)) { goto L_803553C0; } // 803553B4
  c->r[0]=0u+0x00000000u; // 803553B8
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 803553BC
L_803553C0:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 803553C0
  c->r[0]=c->r[3]+0x00000001u; // 803553C4
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 803553C8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803553CC
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 803553D0
  cmpu(c,0,c->r[3],c->r[0]); // 803553D4
  if (!crb(c,1)) { goto L_803553E4; } // 803553D8
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 803553DC
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 803553E0
L_803553E4:;
  c->lr=0x803553E8u; f_8035694C(c); // 803553E4
  c->lr=0x803553ECu; f_80356944(c); // 803553E8
  W8(c->r[30]+0x00000005u,c->r[3]); // 803553EC
  c->r[4]=0u+0x00000001u; // 803553F0
  c->r[0]=0u+0x00000000u; // 803553F4
  c->r[3]=c->r[30]+0x00000008u; // 803553F8
  W8(c->r[30]+0x00000006u,c->r[4]); // 803553FC
  W32(c->r[30]+0x00000000u,c->r[0]); // 80355400
  W8(c->r[30]+0x00000007u,c->r[0]); // 80355404
  goto L_80355424; // 80355408
L_8035540C:;
  c->r[31]=c->r[31]+0x00000001u; // 8035540C
L_80355410:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80355410
  cmpu(c,0,c->r[0],c->r[7]); // 80355414
  if (crb(c,0)) { IRQCHK(c); goto L_8035536C; } // 80355418
  c->lr=0x80355420u; f_8035694C(c); // 8035541C
  c->r[3]=0u+0x00000000u; // 80355420
L_80355424:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80355424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80355428
  c->r[30]=R32(c->r[1]+0x00000008u); // 8035542C
  c->lr=c->r[0]; // 80355430
  c->r[1]=c->r[1]+0x00000010u; // 80355434
  return; // 80355438
}

// GKI_getpoolbuf
void f_8035543C(Ctx* __restrict c) {
  trace_call(0x8035543Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035543C
  c->r[0]=c->lr; // 80355440
  c->r[4]=0u+0x80530000u; // 80355444
  cmpu(c,0,c->r[3],0x00000009u); // 80355448
  W32(c->r[1]+0x00000014u,c->r[0]); // 8035544C
  c->r[4]=c->r[4]+0x000016E0u; // 80355450
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80355454
  c->r[31]=c->r[3]|c->r[3]; // 80355458
  W32(c->r[1]+0x00000008u,c->r[30]); // 8035545C
  c->r[30]=c->r[4]+0x00000054u; // 80355460
  if (crb(c,0)) { goto L_80355470; } // 80355464
  c->r[3]=0u+0x00000000u; // 80355468
  goto L_8035550C; // 8035546C
L_80355470:;
  c->lr=0x80355474u; f_80356970(c); // 80355470
  c->r[31]=rotl(c->r[31],4)&0x00000FF0u; // 80355474
  c->r[0]=c->r[30]+0x00030000u; // 80355478
  c->r[4]=c->r[0]+c->r[31]; // 8035547C
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 80355480
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 80355484
  cmpu(c,0,c->r[3],c->r[0]); // 80355488
  if (!crb(c,0)) { goto L_803554F8; } // 8035548C
  c->r[31]=R32(c->r[4]+0xFFFF898Cu); // 80355490
  c->r[0]=R32(c->r[31]+0x00000000u); // 80355494
  cmps(c,0,(int32_t)c->r[0],0); // 80355498
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 8035549C
  if (!crb(c,2)) { goto L_803554AC; } // 803554A0
  c->r[0]=0u+0x00000000u; // 803554A4
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 803554A8
L_803554AC:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 803554AC
  c->r[0]=c->r[3]+0x00000001u; // 803554B0
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 803554B4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803554B8
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 803554BC
  cmpu(c,0,c->r[3],c->r[0]); // 803554C0
  if (!crb(c,1)) { goto L_803554D0; } // 803554C4
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 803554C8
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 803554CC
L_803554D0:;
  c->lr=0x803554D4u; f_8035694C(c); // 803554D0
  c->lr=0x803554D8u; f_80356944(c); // 803554D4
  W8(c->r[31]+0x00000005u,c->r[3]); // 803554D8
  c->r[4]=0u+0x00000001u; // 803554DC
  c->r[0]=0u+0x00000000u; // 803554E0
  c->r[3]=c->r[31]+0x00000008u; // 803554E4
  W8(c->r[31]+0x00000006u,c->r[4]); // 803554E8
  W32(c->r[31]+0x00000000u,c->r[0]); // 803554EC
  W8(c->r[31]+0x00000007u,c->r[0]); // 803554F0
  goto L_8035550C; // 803554F4
L_803554F8:;
  c->lr=0x803554FCu; f_8035694C(c); // 803554F8
  c->r[0]=c->r[30]+0x00030000u; // 803554FC
  c->r[3]=c->r[0]+c->r[31]; // 80355500
  c->r[3]=R16(c->r[3]+0xFFFF8994u); // 80355504
  c->lr=0x8035550Cu; f_8035529C(c); // 80355508
L_8035550C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8035550C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80355510
  c->r[30]=R32(c->r[1]+0x00000008u); // 80355514
  c->lr=c->r[0]; // 80355518
  c->r[1]=c->r[1]+0x00000010u; // 8035551C
  return; // 80355520
}

// GKI_freebuf
void f_80355524(Ctx* __restrict c) {
  trace_call(0x80355524u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80355524
  c->r[0]=c->lr; // 80355528
  c->r[5]=0u+0x80460000u; // 8035552C
  cmps(c,0,(int32_t)c->r[3],0); // 80355530
  W32(c->r[1]+0x00000014u,c->r[0]); // 80355534
  c->r[5]=c->r[5]+0xFFFF9F00u; // 80355538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8035553C
  if (crb(c,2)) { goto L_803555BC; } // 80355540
  c->r[31]=c->r[3]+0xFFFFFFF8u; // 80355544
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80355548
  if (crb(c,2)) { goto L_80355558; } // 8035554C
  c->r[0]=0u+0x00000000u; // 80355550
  goto L_80355584; // 80355554
L_80355558:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 80355558
  cmpu(c,0,c->r[0],0x00000009u); // 8035555C
  if (!crb(c,0)) { goto L_80355580; } // 80355560
  c->r[4]=0u+0x80530000u; // 80355564
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80355568
  c->r[4]=c->r[4]+0x000016E0u; // 8035556C
  c->r[4]=c->r[4]+0x00030000u; // 80355570
  c->r[4]=c->r[4]+c->r[0]; // 80355574
  c->r[0]=R16(c->r[4]+0xFFFF89E8u); // 80355578
  goto L_80355584; // 8035557C
L_80355580:;
  c->r[0]=0u+0x00000000u; // 80355580
L_80355584:;
  c->r[4]=c->r[3]+c->r[0]; // 80355584
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80355588
  if (crb(c,2)) { goto L_80355598; } // 8035558C
  c->r[0]=0u+0x00000001u; // 80355590
  goto L_803555B4; // 80355594
L_80355598:;
  c->r[3]=0u+0xDDBB0000u; // 80355598
  c->r[4]=R32(c->r[4]+0x00000000u); // 8035559C
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 803555A0
  c->r[3]=c->r[0]-c->r[4]; // 803555A4
  c->r[0]=c->r[4]-c->r[0]; // 803555A8
  c->r[0]=c->r[3]|c->r[0]; // 803555AC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803555B0
L_803555B4:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 803555B4
  if (crb(c,2)) { goto L_803555D4; } // 803555B8
L_803555BC:;
  c->r[3]=0u+0x00010000u; // 803555BC
  c->r[4]=c->r[5]+0x00000030u; // 803555C0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803555C4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803555C8
  c->lr=0x803555D0u; f_803569B4(c); // 803555CC
  goto L_80355680; // 803555D0
L_803555D4:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 803555D4
  cmpu(c,0,c->r[0],0x00000001u); // 803555D8
  if (crb(c,2)) { goto L_803555F8; } // 803555DC
  c->r[3]=0u+0x00010000u; // 803555E0
  c->r[4]=c->r[5]+0x00000048u; // 803555E4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 803555E8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803555EC
  c->lr=0x803555F4u; f_803569B4(c); // 803555F0
  goto L_80355680; // 803555F4
L_803555F8:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 803555F8
  cmpu(c,0,c->r[0],0x00000009u); // 803555FC
  if (crb(c,0)) { goto L_8035561C; } // 80355600
  c->r[3]=0u+0x00010000u; // 80355604
  c->r[4]=c->r[5]+0x0000005Cu; // 80355608
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8035560C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80355610
  c->lr=0x80355618u; f_803569B4(c); // 80355614
  goto L_80355680; // 80355618
L_8035561C:;
  c->lr=0x80355620u; f_80356970(c); // 8035561C
  c->r[0]=R8(c->r[31]+0x00000004u); // 80355620
  c->r[3]=0u+0x80530000u; // 80355624
  c->r[3]=c->r[3]+0x000016E0u; // 80355628
  c->r[3]=c->r[3]+0x00030000u; // 8035562C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80355630
  c->r[4]=c->r[3]+c->r[0]; // 80355634
  c->r[3]=R32(c->r[4]+0xFFFF89E4u); // 80355638
  cmps(c,0,(int32_t)c->r[3],0); // 8035563C
  if (crb(c,2)) { goto L_8035564C; } // 80355640
  W32(c->r[3]+0x00000000u,c->r[31]); // 80355644
  goto L_80355650; // 80355648
L_8035564C:;
  W32(c->r[4]+0xFFFF89E0u,c->r[31]); // 8035564C
L_80355650:;
  W32(c->r[4]+0xFFFF89E4u,c->r[31]); // 80355650
  c->r[3]=0u+0x00000000u; // 80355654
  c->r[0]=0u+0x000000F0u; // 80355658
  W32(c->r[31]+0x00000000u,c->r[3]); // 8035565C
  W8(c->r[31]+0x00000006u,c->r[3]); // 80355660
  W8(c->r[31]+0x00000005u,c->r[0]); // 80355664
  c->r[3]=R16(c->r[4]+0xFFFF89ECu); // 80355668
  cmps(c,0,(int32_t)c->r[3],0); // 8035566C
  if (crb(c,2)) { goto L_8035567C; } // 80355670
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80355674
  W16(c->r[4]+0xFFFF89ECu,c->r[0]); // 80355678
L_8035567C:;
  c->lr=0x80355680u; f_8035694C(c); // 8035567C
L_80355680:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80355680
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80355684
  c->lr=c->r[0]; // 80355688
  c->r[1]=c->r[1]+0x00000010u; // 8035568C
  return; // 80355690
}

// GKI_get_buf_size
void f_80355694(Ctx* __restrict c) {
  trace_call(0x80355694u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80355694
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80355698
  if (crb(c,2)) { goto L_803556A8; } // 8035569C
  c->r[3]=0u+0x00000000u; // 803556A0
  return; // 803556A4
L_803556A8:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 803556A8
  cmpu(c,0,c->r[0],0x00000009u); // 803556AC
  if (!crb(c,0)) { goto L_803556D0; } // 803556B0
  c->r[3]=0u+0x80530000u; // 803556B4
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 803556B8
  c->r[3]=c->r[3]+0x000016E0u; // 803556BC
  c->r[3]=c->r[3]+0x00030000u; // 803556C0
  c->r[3]=c->r[3]+c->r[0]; // 803556C4
  c->r[3]=R16(c->r[3]+0xFFFF89E8u); // 803556C8
  return; // 803556CC
L_803556D0:;
  c->r[3]=0u+0x00000000u; // 803556D0
  return; // 803556D4
}

// GKI_send_msg
void f_803556D8(Ctx* __restrict c) {
  trace_call(0x803556D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803556D8
  c->r[0]=c->lr; // 803556DC
  c->r[7]=0u+0x80530000u; // 803556E0
  c->r[6]=0u+0x80460000u; // 803556E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803556E8
  cmpu(c,0,c->r[3],0x00000008u); // 803556EC
  c->r[7]=c->r[7]+0x000016E0u; // 803556F0
  c->r[6]=c->r[6]+0xFFFF9F00u; // 803556F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803556F8
  c->r[31]=c->r[5]|c->r[5]; // 803556FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80355700
  c->r[30]=c->r[7]+0x00000054u; // 80355704
  W32(c->r[1]+0x00000014u,c->r[29]); // 80355708
  c->r[29]=c->r[4]|c->r[4]; // 8035570C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80355710
  c->r[28]=c->r[3]|c->r[3]; // 80355714
  if (!crb(c,0)) { goto L_80355738; } // 80355718
  cmpu(c,0,c->r[4],0x00000004u); // 8035571C
  if (!crb(c,0)) { goto L_80355738; } // 80355720
  c->r[0]=c->r[30]+0x00030000u; // 80355724
  c->r[3]=c->r[0]+c->r[3]; // 80355728
  c->r[0]=R8(c->r[3]+0xFFFF87ACu); // 8035572C
  cmps(c,0,(int32_t)c->r[0],0); // 80355730
  if (!crb(c,2)) { goto L_80355758; } // 80355734
L_80355738:;
  c->r[3]=0u+0x00010000u; // 80355738
  c->r[4]=c->r[6]+0x00000068u; // 8035573C
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 80355740
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80355744
  c->lr=0x8035574Cu; f_803569B4(c); // 80355748
  c->r[3]=c->r[31]|c->r[31]; // 8035574C
  c->lr=0x80355754u; f_80355524(c); // 80355750
  goto L_80355874; // 80355754
L_80355758:;
  c->r[31]=c->r[5]+0xFFFFFFF8u; // 80355758
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8035575C
  if (crb(c,2)) { goto L_8035576C; } // 80355760
  c->r[0]=0u+0x00000000u; // 80355764
  goto L_80355790; // 80355768
L_8035576C:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 8035576C
  cmpu(c,0,c->r[0],0x00000009u); // 80355770
  if (!crb(c,0)) { goto L_8035578C; } // 80355774
  c->r[3]=c->r[7]+0x00030000u; // 80355778
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 8035577C
  c->r[3]=c->r[3]+c->r[0]; // 80355780
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 80355784
  goto L_80355790; // 80355788
L_8035578C:;
  c->r[0]=0u+0x00000000u; // 8035578C
L_80355790:;
  c->r[4]=c->r[5]+c->r[0]; // 80355790
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80355794
  if (crb(c,2)) { goto L_803557A4; } // 80355798
  c->r[0]=0u+0x00000001u; // 8035579C
  goto L_803557C0; // 803557A0
L_803557A4:;
  c->r[3]=0u+0xDDBB0000u; // 803557A4
  c->r[4]=R32(c->r[4]+0x00000000u); // 803557A8
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 803557AC
  c->r[3]=c->r[0]-c->r[4]; // 803557B0
  c->r[0]=c->r[4]-c->r[0]; // 803557B4
  c->r[0]=c->r[3]|c->r[0]; // 803557B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803557BC
L_803557C0:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 803557C0
  if (crb(c,2)) { goto L_803557E0; } // 803557C4
  c->r[3]=0u+0x00010000u; // 803557C8
  c->r[4]=c->r[6]+0x00000080u; // 803557CC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803557D0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803557D4
  c->lr=0x803557DCu; f_803569B4(c); // 803557D8
  goto L_80355874; // 803557DC
L_803557E0:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 803557E0
  cmpu(c,0,c->r[0],0x00000001u); // 803557E4
  if (crb(c,2)) { goto L_80355804; } // 803557E8
  c->r[3]=0u+0x00010000u; // 803557EC
  c->r[4]=c->r[6]+0x00000098u; // 803557F0
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 803557F4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803557F8
  c->lr=0x80355800u; f_803569B4(c); // 803557FC
  goto L_80355874; // 80355800
L_80355804:;
  c->lr=0x80355808u; f_80356970(c); // 80355804
  c->r[4]=rotl(c->r[28],4)&0x00000FF0u; // 80355808
  c->r[0]=c->r[30]+0x00030000u; // 8035580C
  c->r[5]=rotl(c->r[29],2)&0x000003FCu; // 80355810
  c->r[0]=c->r[0]+c->r[4]; // 80355814
  c->r[3]=c->r[0]+c->r[5]; // 80355818
  c->r[0]=R32(c->r[3]+0xFFFF888Cu); // 8035581C
  cmps(c,0,(int32_t)c->r[0],0); // 80355820
  if (crb(c,2)) { goto L_80355834; } // 80355824
  c->r[3]=R32(c->r[3]+0xFFFF890Cu); // 80355828
  W32(c->r[3]+0x00000000u,c->r[31]); // 8035582C
  goto L_80355838; // 80355830
L_80355834:;
  W32(c->r[3]+0xFFFF888Cu,c->r[31]); // 80355834
L_80355838:;
  c->r[0]=c->r[30]+0x00030000u; // 80355838
  c->r[3]=0u+0x00000000u; // 8035583C
  c->r[4]=c->r[0]+c->r[4]; // 80355840
  c->r[4]=c->r[4]+c->r[5]; // 80355844
  c->r[0]=0u+0x00000002u; // 80355848
  W32(c->r[4]+0xFFFF890Cu,c->r[31]); // 8035584C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80355850
  W8(c->r[31]+0x00000006u,c->r[0]); // 80355854
  W8(c->r[31]+0x00000005u,c->r[28]); // 80355858
  c->lr=0x80355860u; f_8035694C(c); // 8035585C
  c->r[0]=0u+0x00000001u; // 80355860
  c->r[3]=c->r[28]|c->r[28]; // 80355864
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]<<((c->r[29])&31)); // 80355868
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8035586C
  c->lr=0x80355874u; f_803568A0(c); // 80355870
L_80355874:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80355874
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80355878
  c->r[30]=R32(c->r[1]+0x00000018u); // 8035587C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80355880
  c->r[28]=R32(c->r[1]+0x00000010u); // 80355884
  c->lr=c->r[0]; // 80355888
  c->r[1]=c->r[1]+0x00000020u; // 8035588C
  return; // 80355890
}

// GKI_read_mbox
void f_80355894(Ctx* __restrict c) {
  trace_call(0x80355894u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80355894
  c->r[0]=c->lr; // 80355898
  W32(c->r[1]+0x00000024u,c->r[0]); // 8035589C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803558A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803558A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803558A8
  c->r[29]=c->r[3]|c->r[3]; // 803558AC
  c->lr=0x803558B4u; f_80356944(c); // 803558B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803558B4
  c->r[31]=c->r[3]|c->r[3]; // 803558B8
  cmpu(c,0,c->r[0],0x00000008u); // 803558BC
  c->r[30]=0u+0x00000000u; // 803558C0
  if (!crb(c,0)) { goto L_803558D0; } // 803558C4
  cmpu(c,0,c->r[29],0x00000004u); // 803558C8
  if (crb(c,0)) { goto L_803558D8; } // 803558CC
L_803558D0:;
  c->r[3]=0u+0x00000000u; // 803558D0
  goto L_80355928; // 803558D4
L_803558D8:;
  c->lr=0x803558DCu; f_80356970(c); // 803558D8
  c->r[3]=0u+0x80530000u; // 803558DC
  c->r[4]=rotl(c->r[31],4)&0x00000FF0u; // 803558E0
  c->r[3]=c->r[3]+0x000016E0u; // 803558E4
  c->r[6]=rotl(c->r[29],2)&0x000003FCu; // 803558E8
  c->r[0]=c->r[3]+0x00030000u; // 803558EC
  c->r[3]=c->r[0]+c->r[4]; // 803558F0
  c->r[7]=c->r[3]+0xFFFF88E0u; // 803558F4
  c->r[5]=R32(c->r[7]+c->r[6]); // 803558F8
  cmps(c,0,(int32_t)c->r[5],0); // 803558FC
  if (crb(c,2)) { goto L_80355920; } // 80355900
  c->r[4]=R32(c->r[5]+0x00000000u); // 80355904
  c->r[3]=0u+0x00000000u; // 80355908
  c->r[0]=0u+0x00000001u; // 8035590C
  c->r[30]=c->r[5]+0x00000008u; // 80355910
  W32(c->r[7]+c->r[6],c->r[4]); // 80355914
  W32(c->r[5]+0x00000000u,c->r[3]); // 80355918
  W8(c->r[5]+0x00000006u,c->r[0]); // 8035591C
L_80355920:;
  c->lr=0x80355924u; f_8035694C(c); // 80355920
  c->r[3]=c->r[30]|c->r[30]; // 80355924
L_80355928:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80355928
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8035592C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80355930
  c->r[29]=R32(c->r[1]+0x00000014u); // 80355934
  c->lr=c->r[0]; // 80355938
  c->r[1]=c->r[1]+0x00000020u; // 8035593C
  return; // 80355940
}

// GKI_enqueue
void f_80355944(Ctx* __restrict c) {
  trace_call(0x80355944u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80355944
  c->r[0]=c->lr; // 80355948
  W32(c->r[1]+0x00000024u,c->r[0]); // 8035594C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80355950
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 80355954
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80355958
  W32(c->r[1]+0x00000018u,c->r[30]); // 8035595C
  c->r[30]=c->r[4]|c->r[4]; // 80355960
  W32(c->r[1]+0x00000014u,c->r[29]); // 80355964
  c->r[29]=c->r[3]|c->r[3]; // 80355968
  if (crb(c,2)) { goto L_80355978; } // 8035596C
  c->r[0]=0u+0x00000000u; // 80355970
  goto L_803559A4; // 80355974
L_80355978:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 80355978
  cmpu(c,0,c->r[0],0x00000009u); // 8035597C
  if (!crb(c,0)) { goto L_803559A0; } // 80355980
  c->r[3]=0u+0x80530000u; // 80355984
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80355988
  c->r[3]=c->r[3]+0x000016E0u; // 8035598C
  c->r[3]=c->r[3]+0x00030000u; // 80355990
  c->r[3]=c->r[3]+c->r[0]; // 80355994
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 80355998
  goto L_803559A4; // 8035599C
L_803559A0:;
  c->r[0]=0u+0x00000000u; // 803559A0
L_803559A4:;
  c->r[4]=c->r[4]+c->r[0]; // 803559A4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 803559A8
  if (crb(c,2)) { goto L_803559B8; } // 803559AC
  c->r[0]=0u+0x00000001u; // 803559B0
  goto L_803559D4; // 803559B4
L_803559B8:;
  c->r[3]=0u+0xDDBB0000u; // 803559B8
  c->r[4]=R32(c->r[4]+0x00000000u); // 803559BC
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 803559C0
  c->r[3]=c->r[0]-c->r[4]; // 803559C4
  c->r[0]=c->r[4]-c->r[0]; // 803559C8
  c->r[0]=c->r[3]|c->r[0]; // 803559CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803559D0
L_803559D4:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 803559D4
  if (crb(c,2)) { goto L_803559F8; } // 803559D8
  c->r[3]=0u+0x00010000u; // 803559DC
  c->r[4]=0u+0x80460000u; // 803559E0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803559E4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803559E8
  c->r[4]=c->r[4]+0xFFFF9FB0u; // 803559EC
  c->lr=0x803559F4u; f_803569B4(c); // 803559F0
  goto L_80355A64; // 803559F4
L_803559F8:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 803559F8
  cmpu(c,0,c->r[0],0x00000001u); // 803559FC
  if (crb(c,2)) { goto L_80355A20; } // 80355A00
  c->r[3]=0u+0x00010000u; // 80355A04
  c->r[4]=0u+0x80460000u; // 80355A08
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 80355A0C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80355A10
  c->r[4]=c->r[4]+0xFFFF9FCCu; // 80355A14
  c->lr=0x80355A1Cu; f_803569B4(c); // 80355A18
  goto L_80355A64; // 80355A1C
L_80355A20:;
  c->lr=0x80355A24u; f_80356970(c); // 80355A20
  c->r[0]=R32(c->r[29]+0x00000000u); // 80355A24
  cmps(c,0,(int32_t)c->r[0],0); // 80355A28
  if (crb(c,2)) { goto L_80355A3C; } // 80355A2C
  c->r[3]=R32(c->r[29]+0x00000004u); // 80355A30
  W32(c->r[3]+0xFFFFFFF8u,c->r[31]); // 80355A34
  goto L_80355A40; // 80355A38
L_80355A3C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 80355A3C
L_80355A40:;
  c->r[4]=R16(c->r[29]+0x00000008u); // 80355A40
  c->r[3]=0u+0x00000000u; // 80355A44
  W32(c->r[29]+0x00000004u,c->r[30]); // 80355A48
  c->r[0]=0u+0x00000002u; // 80355A4C
  c->r[4]=c->r[4]+0x00000001u; // 80355A50
  W16(c->r[29]+0x00000008u,c->r[4]); // 80355A54
  W32(c->r[31]+0x00000000u,c->r[3]); // 80355A58
  W8(c->r[31]+0x00000006u,c->r[0]); // 80355A5C
  c->lr=0x80355A64u; f_8035694C(c); // 80355A60
L_80355A64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80355A64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80355A68
  c->r[30]=R32(c->r[1]+0x00000018u); // 80355A6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80355A70
  c->lr=c->r[0]; // 80355A74
  c->r[1]=c->r[1]+0x00000020u; // 80355A78
  return; // 80355A7C
}

// GKI_enqueue_head
void f_80355A80(Ctx* __restrict c) {
  trace_call(0x80355A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80355A80
  c->r[0]=c->lr; // 80355A84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80355A88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80355A8C
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 80355A90
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80355A94
  W32(c->r[1]+0x00000018u,c->r[30]); // 80355A98
  c->r[30]=c->r[4]|c->r[4]; // 80355A9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80355AA0
  c->r[29]=c->r[3]|c->r[3]; // 80355AA4
  if (crb(c,2)) { goto L_80355AB4; } // 80355AA8
  c->r[0]=0u+0x00000000u; // 80355AAC
  goto L_80355AE0; // 80355AB0
L_80355AB4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 80355AB4
  cmpu(c,0,c->r[0],0x00000009u); // 80355AB8
  if (!crb(c,0)) { goto L_80355ADC; } // 80355ABC
  c->r[3]=0u+0x80530000u; // 80355AC0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 80355AC4
  c->r[3]=c->r[3]+0x000016E0u; // 80355AC8
  c->r[3]=c->r[3]+0x00030000u; // 80355ACC
  c->r[3]=c->r[3]+c->r[0]; // 80355AD0
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 80355AD4
  goto L_80355AE0; // 80355AD8
L_80355ADC:;
  c->r[0]=0u+0x00000000u; // 80355ADC
L_80355AE0:;
  c->r[4]=c->r[4]+c->r[0]; // 80355AE0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80355AE4
  if (crb(c,2)) { goto L_80355AF4; } // 80355AE8
  c->r[0]=0u+0x00000001u; // 80355AEC
  goto L_80355B10; // 80355AF0
L_80355AF4:;
  c->r[3]=0u+0xDDBB0000u; // 80355AF4
  c->r[4]=R32(c->r[4]+0x00000000u); // 80355AF8
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 80355AFC
  c->r[3]=c->r[0]-c->r[4]; // 80355B00
  c->r[0]=c->r[4]-c->r[0]; // 80355B04
  c->r[0]=c->r[3]|c->r[0]; // 80355B08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80355B0C
L_80355B10:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 80355B10
  if (crb(c,2)) { goto L_80355B34; } // 80355B14
  c->r[3]=0u+0x00010000u; // 80355B18
  c->r[4]=0u+0x80460000u; // 80355B1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80355B20
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80355B24
  c->r[4]=c->r[4]+0xFFFF9FB0u; // 80355B28
  c->lr=0x80355B30u; f_803569B4(c); // 80355B2C
  goto L_80355BA4; // 80355B30
L_80355B34:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 80355B34
  cmpu(c,0,c->r[0],0x00000001u); // 80355B38
  if (crb(c,2)) { goto L_80355B5C; } // 80355B3C
  c->r[3]=0u+0x00010000u; // 80355B40
  c->r[4]=0u+0x80460000u; // 80355B44
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 80355B48
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80355B4C
  c->r[4]=c->r[4]+0xFFFF9FECu; // 80355B50
  c->lr=0x80355B58u; f_803569B4(c); // 80355B54
  goto L_80355BA4; // 80355B58
L_80355B5C:;
  c->lr=0x80355B60u; f_80356970(c); // 80355B5C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80355B60
  cmps(c,0,(int32_t)c->r[3],0); // 80355B64
  if (crb(c,2)) { goto L_80355B7C; } // 80355B68
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 80355B6C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80355B70
  W32(c->r[29]+0x00000000u,c->r[30]); // 80355B74
  goto L_80355B8C; // 80355B78
L_80355B7C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 80355B7C
  c->r[0]=0u+0x00000000u; // 80355B80
  W32(c->r[29]+0x00000004u,c->r[30]); // 80355B84
  W32(c->r[31]+0x00000000u,c->r[0]); // 80355B88
L_80355B8C:;
  c->r[3]=R16(c->r[29]+0x00000008u); // 80355B8C
  c->r[0]=0u+0x00000002u; // 80355B90
  c->r[3]=c->r[3]+0x00000001u; // 80355B94
  W16(c->r[29]+0x00000008u,c->r[3]); // 80355B98
  W8(c->r[31]+0x00000006u,c->r[0]); // 80355B9C
  c->lr=0x80355BA4u; f_8035694C(c); // 80355BA0
L_80355BA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80355BA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80355BA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80355BAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80355BB0
  c->lr=c->r[0]; // 80355BB4
  c->r[1]=c->r[1]+0x00000020u; // 80355BB8
  return; // 80355BBC
}

// GKI_dequeue
void f_80355BC0(Ctx* __restrict c) {
  trace_call(0x80355BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80355BC0
  c->r[0]=c->lr; // 80355BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80355BC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80355BCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80355BD0
  c->r[30]=c->r[3]|c->r[3]; // 80355BD4
  c->lr=0x80355BDCu; f_80356970(c); // 80355BD8
  cmps(c,0,(int32_t)c->r[30],0); // 80355BDC
  if (crb(c,2)) { goto L_80355BF0; } // 80355BE0
  c->r[0]=R16(c->r[30]+0x00000008u); // 80355BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80355BE8
  if (!crb(c,2)) { goto L_80355BFC; } // 80355BEC
L_80355BF0:;
  c->lr=0x80355BF4u; f_8035694C(c); // 80355BF0
  c->r[3]=0u+0x00000000u; // 80355BF4
  goto L_80355C48; // 80355BF8
L_80355BFC:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 80355BFC
  c->r[3]=R32(c->r[31]+0xFFFFFFF8u); // 80355C00
  cmps(c,0,(int32_t)c->r[3],0); // 80355C04
  if (crb(c,2)) { goto L_80355C18; } // 80355C08
  c->r[0]=c->r[3]+0x00000008u; // 80355C0C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80355C10
  goto L_80355C24; // 80355C14
L_80355C18:;
  c->r[0]=0u+0x00000000u; // 80355C18
  W32(c->r[30]+0x00000000u,c->r[0]); // 80355C1C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80355C20
L_80355C24:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 80355C24
  c->r[3]=0u+0x00000000u; // 80355C28
  c->r[0]=0u+0x00000001u; // 80355C2C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80355C30
  W16(c->r[30]+0x00000008u,c->r[4]); // 80355C34
  W32(c->r[31]+0xFFFFFFF8u,c->r[3]); // 80355C38
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 80355C3C
  c->lr=0x80355C44u; f_8035694C(c); // 80355C40
  c->r[3]=c->r[31]|c->r[31]; // 80355C44
L_80355C48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80355C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80355C4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80355C50
  c->lr=c->r[0]; // 80355C54
  c->r[1]=c->r[1]+0x00000010u; // 80355C58
  return; // 80355C5C
}

// GKI_remove_from_queue
void f_80355C60(Ctx* __restrict c) {
  trace_call(0x80355C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80355C60
  c->r[0]=c->lr; // 80355C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80355C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80355C6C
  c->r[31]=c->r[4]|c->r[4]; // 80355C70
  W32(c->r[1]+0x00000008u,c->r[30]); // 80355C74
  c->r[30]=c->r[3]|c->r[3]; // 80355C78
  c->lr=0x80355C80u; f_80356970(c); // 80355C7C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80355C80
  cmpu(c,0,c->r[31],c->r[3]); // 80355C84
  if (!crb(c,2)) { goto L_80355C9C; } // 80355C88
  c->lr=0x80355C90u; f_8035694C(c); // 80355C8C
  c->r[3]=c->r[30]|c->r[30]; // 80355C90
  c->lr=0x80355C98u; f_80355BC0(c); // 80355C94
  goto L_80355D0C; // 80355C98
L_80355C9C:;
  c->r[5]=c->r[31]+0xFFFFFFF8u; // 80355C9C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80355CA0
  goto L_80355CFC; // 80355CA4
L_80355CA8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80355CA8
  cmpu(c,0,c->r[0],c->r[5]); // 80355CAC
  if (!crb(c,2)) { goto L_80355CF8; } // 80355CB0
  c->r[0]=R32(c->r[5]+0x00000000u); // 80355CB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80355CB8
  c->r[0]=R32(c->r[30]+0x00000004u); // 80355CBC
  cmpu(c,0,c->r[31],c->r[0]); // 80355CC0
  if (!crb(c,2)) { goto L_80355CD0; } // 80355CC4
  c->r[0]=c->r[3]+0x00000008u; // 80355CC8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80355CCC
L_80355CD0:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 80355CD0
  c->r[3]=0u+0x00000000u; // 80355CD4
  c->r[0]=0u+0x00000001u; // 80355CD8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80355CDC
  W16(c->r[30]+0x00000008u,c->r[4]); // 80355CE0
  W32(c->r[5]+0x00000000u,c->r[3]); // 80355CE4
  W8(c->r[5]+0x00000006u,c->r[0]); // 80355CE8
  c->lr=0x80355CF0u; f_8035694C(c); // 80355CEC
  c->r[3]=c->r[31]|c->r[31]; // 80355CF0
  goto L_80355D0C; // 80355CF4
L_80355CF8:;
  c->r[3]=c->r[0]|c->r[0]; // 80355CF8
L_80355CFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80355CFC
  if (!crb(c,2)) { IRQCHK(c); goto L_80355CA8; } // 80355D00
  c->lr=0x80355D08u; f_8035694C(c); // 80355D04
  c->r[3]=0u+0x00000000u; // 80355D08
L_80355D0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80355D0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80355D10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80355D14
  c->lr=c->r[0]; // 80355D18
  c->r[1]=c->r[1]+0x00000010u; // 80355D1C
  return; // 80355D20
}

// GKI_getfirst
void f_80355D24(Ctx* __restrict c) {
  trace_call(0x80355D24u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80355D24
  return; // 80355D28
}

// GKI_getnext
void f_80355D2C(Ctx* __restrict c) {
  trace_call(0x80355D2Cu);
  c->r[3]=R32(c->r[3]+0xFFFFFFF8u); // 80355D2C
  cmps(c,0,(int32_t)c->r[3],0); // 80355D30
  if (crb(c,2)) { goto L_80355D40; } // 80355D34
  c->r[3]=c->r[3]+0x00000008u; // 80355D38
  return; // 80355D3C
L_80355D40:;
  c->r[3]=0u+0x00000000u; // 80355D40
  return; // 80355D44
}

// GKI_queue_is_empty
void f_80355D48(Ctx* __restrict c) {
  trace_call(0x80355D48u);
  c->r[0]=R16(c->r[3]+0x00000008u); // 80355D48
  c->r[0]=cntlz(c->r[0]); // 80355D4C
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 80355D50
  return; // 80355D54
}

// GKI_create_pool
void f_80355D58(Ctx* __restrict c) {
  trace_call(0x80355D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80355D58
  c->r[0]=c->lr; // 80355D5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80355D60
  c->r[11]=c->r[1]+0x00000020u; // 80355D64
  c->lr=0x80355D6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80355D68
  c->r[7]=0u+0x80530000u; // 80355D6C
  cmpu(c,0,c->r[3],0x0000FFF3u); // 80355D70
  c->r[7]=c->r[7]+0x000016E0u; // 80355D74
  c->r[27]=c->r[3]|c->r[3]; // 80355D78
  c->r[28]=c->r[4]|c->r[4]; // 80355D7C
  c->r[29]=c->r[5]|c->r[5]; // 80355D80
  c->r[30]=c->r[7]+0x00000054u; // 80355D84
  if (!crb(c,1)) { goto L_80355D94; } // 80355D88
  c->r[3]=0u+0x000000FFu; // 80355D8C
  goto L_80356088; // 80355D90
L_80355D94:;
  c->r[0]=0u+0x00000003u; // 80355D94
  c->r[31]=0u+0x00000000u; // 80355D98
  c->ctr=c->r[0]; // 80355D9C
L_80355DA0:;
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 80355DA0
  c->r[5]=c->r[5]+0x00030000u; // 80355DA4
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 80355DA8
  c->r[0]=R32(c->r[30]+c->r[0]); // 80355DAC
  cmps(c,0,(int32_t)c->r[0],0); // 80355DB0
  if (crb(c,2)) { goto L_80355DF8; } // 80355DB4
  c->r[31]=c->r[31]+0x00000001u; // 80355DB8
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 80355DBC
  c->r[5]=c->r[5]+0x00030000u; // 80355DC0
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 80355DC4
  c->r[0]=R32(c->r[30]+c->r[0]); // 80355DC8
  cmps(c,0,(int32_t)c->r[0],0); // 80355DCC
  if (crb(c,2)) { goto L_80355DF8; } // 80355DD0
  c->r[31]=c->r[31]+0x00000001u; // 80355DD4
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 80355DD8
  c->r[5]=c->r[5]+0x00030000u; // 80355DDC
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 80355DE0
  c->r[0]=R32(c->r[30]+c->r[0]); // 80355DE4
  cmps(c,0,(int32_t)c->r[0],0); // 80355DE8
  if (crb(c,2)) { goto L_80355DF8; } // 80355DEC
  c->r[31]=c->r[31]+0x00000001u; // 80355DF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80355DA0; } // 80355DF4
L_80355DF8:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80355DF8
  cmpu(c,0,c->r[0],0x00000009u); // 80355DFC
  if (!crb(c,2)) { goto L_80355E0C; } // 80355E00
  c->r[3]=0u+0x000000FFu; // 80355E04
  goto L_80356088; // 80355E08
L_80355E0C:;
  c->r[0]=c->r[3]+0x00000003u; // 80355E0C
  cmps(c,0,(int32_t)c->r[6],0); // 80355E10
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80355E14
  c->r[0]=c->r[3]+0x0000000Cu; // 80355E18
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80355E1C
  if (!crb(c,2)) { goto L_80355E2C; } // 80355E20
  c->lr=0x80355E28u; f_803569B8(c); // 80355E24
  c->r[6]=c->r[3]|c->r[3]; // 80355E28
L_80355E2C:;
  cmps(c,0,(int32_t)c->r[6],0); // 80355E2C
  if (crb(c,2)) { goto L_80356084; } // 80355E30
  c->r[4]=c->r[27]|c->r[27]; // 80355E34
  c->r[5]=c->r[28]|c->r[28]; // 80355E38
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 80355E3C
  c->lr=0x80355E44u; f_80354DBC(c); // 80355E40
  c->r[3]=0u+0x80530000u; // 80355E44
  c->r[5]=rotl(c->r[31],4)&0x00000FF0u; // 80355E48
  c->r[3]=c->r[3]+0x000016E0u; // 80355E4C
  c->r[4]=0u+0x00000000u; // 80355E50
  c->r[3]=c->r[3]+0x00000054u; // 80355E54
  c->r[6]=c->r[5]+0x00030000u; // 80355E58
  c->r[5]=c->r[3]+0x00030000u; // 80355E5C
  c->r[5]=R8(c->r[5]+0xFFFF8A87u); // 80355E60
  c->r[0]=c->r[6]+0xFFFF8994u; // 80355E64
  c->r[7]=R16(c->r[3]+c->r[0]); // 80355E68
  c->ctr=c->r[5]; // 80355E6C
  cmps(c,0,(int32_t)c->r[5],0); // 80355E70
  if (!crb(c,1)) { goto L_80355EA4; } // 80355E74
L_80355E78:;
  c->r[6]=c->r[4]+0x00030000u; // 80355E78
  c->r[0]=c->r[6]+0xFFFF8A7Eu; // 80355E7C
  c->r[0]=R8(c->r[3]+c->r[0]); // 80355E80
  c->r[6]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80355E84
  c->r[6]=c->r[6]+0x00030000u; // 80355E88
  c->r[0]=c->r[6]+0xFFFF8994u; // 80355E8C
  c->r[0]=R16(c->r[3]+c->r[0]); // 80355E90
  cmpu(c,0,c->r[7],c->r[0]); // 80355E94
  if (!crb(c,1)) { goto L_80355EA4; } // 80355E98
  c->r[4]=c->r[4]+0x00000001u; // 80355E9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80355E78; } // 80355EA0
L_80355EA4:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80355EA4
  if (!crb(c,1)) { goto L_8035600C; } // 80355EA8
  c->r[0]=c->r[5]-c->r[4]; // 80355EAC
  c->r[8]=c->r[4]+0x00000008u; // 80355EB0
  cmps(c,0,(int32_t)c->r[0],8); // 80355EB4
  if (!crb(c,1)) { goto L_80355FE4; } // 80355EB8
  c->r[6]=c->r[3]+0x00030000u; // 80355EBC
  c->r[9]=0u+0x00000000u; // 80355EC0
  c->r[0]=R8(c->r[6]+0xFFFF8A87u); // 80355EC4
  c->r[10]=0u+0x00000000u; // 80355EC8
  c->r[11]=0u+0x00000000u; // 80355ECC
  c->r[7]=0u+0x00000000u; // 80355ED0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80355ED4
  if (crb(c,0)) { goto L_80355EF0; } // 80355ED8
  c->r[6]=0u+0x80000000u; // 80355EDC
  c->r[0]=c->r[6]+0x00000001u; // 80355EE0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80355EE4
  if (crb(c,0)) { goto L_80355EF0; } // 80355EE8
  c->r[7]=0u+0x00000001u; // 80355EEC
L_80355EF0:;
  cmps(c,0,(int32_t)c->r[7],0); // 80355EF0
  if (crb(c,2)) { goto L_80355F14; } // 80355EF4
  c->r[7]=c->r[3]+0x00030000u; // 80355EF8
  c->r[6]=0u+0x80000000u; // 80355EFC
  c->r[7]=R8(c->r[7]+0xFFFF8A87u); // 80355F00
  c->r[0]=c->r[6]+0x00000001u; // 80355F04
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80355F08
  if (crb(c,0)) { goto L_80355F14; } // 80355F0C
  c->r[11]=0u+0x00000001u; // 80355F10
L_80355F14:;
  cmps(c,0,(int32_t)c->r[11],0); // 80355F14
  if (crb(c,2)) { goto L_80355F2C; } // 80355F18
  c->r[0]=c->r[4]+0x80000000u; // 80355F1C
  cmpu(c,0,c->r[0],0x00000000u); // 80355F20
  if (crb(c,2)) { goto L_80355F2C; } // 80355F24
  c->r[10]=0u+0x00000001u; // 80355F28
L_80355F2C:;
  cmps(c,0,(int32_t)c->r[10],0); // 80355F2C
  if (crb(c,2)) { goto L_80355F74; } // 80355F30
  c->r[6]=c->r[3]+0x00030000u; // 80355F34
  c->r[0]=0u-c->r[4]; // 80355F38
  c->r[10]=R8(c->r[6]+0xFFFF8A87u); // 80355F3C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 80355F40
  c->r[6]=0u+0x00000001u; // 80355F44
  c->r[7]=rotl(c->r[10],0)&0x80000000u; // 80355F48
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80355F4C
  if (!crb(c,2)) { goto L_80355F68; } // 80355F50
  c->r[0]=c->r[10]-c->r[4]; // 80355F54
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 80355F58
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80355F5C
  if (crb(c,2)) { goto L_80355F68; } // 80355F60
  c->r[6]=0u+0x00000000u; // 80355F64
L_80355F68:;
  cmps(c,0,(int32_t)c->r[6],0); // 80355F68
  if (crb(c,2)) { goto L_80355F74; } // 80355F6C
  c->r[9]=0u+0x00000001u; // 80355F70
L_80355F74:;
  cmps(c,0,(int32_t)c->r[9],0); // 80355F74
  if (crb(c,2)) { goto L_80355FE4; } // 80355F78
  c->r[0]=c->r[5]+0x00000007u; // 80355F7C
  c->r[0]=c->r[0]-c->r[8]; // 80355F80
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80355F84
  c->ctr=c->r[0]; // 80355F88
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[8]); // 80355F8C
  if (!crb(c,1)) { goto L_80355FE4; } // 80355F90
L_80355F94:;
  c->r[6]=c->r[3]+c->r[5]; // 80355F94
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 80355F98
  c->r[6]=c->r[6]+0x00030000u; // 80355F9C
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 80355FA0
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 80355FA4
  c->r[0]=R8(c->r[6]+0xFFFF8A7Cu); // 80355FA8
  W8(c->r[6]+0xFFFF8A7Du,c->r[0]); // 80355FAC
  c->r[0]=R8(c->r[6]+0xFFFF8A7Bu); // 80355FB0
  W8(c->r[6]+0xFFFF8A7Cu,c->r[0]); // 80355FB4
  c->r[0]=R8(c->r[6]+0xFFFF8A7Au); // 80355FB8
  W8(c->r[6]+0xFFFF8A7Bu,c->r[0]); // 80355FBC
  c->r[0]=R8(c->r[6]+0xFFFF8A79u); // 80355FC0
  W8(c->r[6]+0xFFFF8A7Au,c->r[0]); // 80355FC4
  c->r[0]=R8(c->r[6]+0xFFFF8A78u); // 80355FC8
  W8(c->r[6]+0xFFFF8A79u,c->r[0]); // 80355FCC
  c->r[0]=R8(c->r[6]+0xFFFF8A77u); // 80355FD0
  W8(c->r[6]+0xFFFF8A78u,c->r[0]); // 80355FD4
  c->r[0]=R8(c->r[6]+0xFFFF8A76u); // 80355FD8
  W8(c->r[6]+0xFFFF8A77u,c->r[0]); // 80355FDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80355F94; } // 80355FE0
L_80355FE4:;
  c->r[0]=c->r[5]-c->r[4]; // 80355FE4
  c->ctr=c->r[0]; // 80355FE8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 80355FEC
  if (!crb(c,1)) { goto L_8035600C; } // 80355FF0
L_80355FF4:;
  c->r[6]=c->r[3]+c->r[5]; // 80355FF4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80355FF8
  c->r[6]=c->r[6]+0x00030000u; // 80355FFC
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 80356000
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 80356004
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80355FF4; } // 80356008
L_8035600C:;
  c->r[0]=c->r[3]+0x00030000u; // 8035600C
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 80356010
  c->r[4]=c->r[0]+c->r[4]; // 80356014
  c->r[3]=0u+0x80530000u; // 80356018
  c->r[3]=c->r[3]+0x000016E0u; // 8035601C
  cmpu(c,0,c->r[5],0x00000009u); // 80356020
  W8(c->r[4]+0xFFFF8A7Eu,c->r[31]); // 80356024
  c->r[3]=c->r[3]+0x00000054u; // 80356028
  if (!crb(c,0)) { goto L_8035606C; } // 8035602C
  cmpu(c,0,c->r[29],0x00000001u); // 80356030
  if (!crb(c,2)) { goto L_80356054; } // 80356034
  c->r[4]=c->r[3]+0x00030000u; // 80356038
  c->r[0]=0u+0x00000001u; // 8035603C
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 80356040
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80356044
  c->r[0]=c->r[3]|c->r[0]; // 80356048
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 8035604C
  goto L_8035606C; // 80356050
L_80356054:;
  c->r[4]=c->r[3]+0x00030000u; // 80356054
  c->r[0]=0u+0x00000001u; // 80356058
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 8035605C
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 80356060
  c->r[0]=c->r[3]&~c->r[0]; // 80356064
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 80356068
L_8035606C:;
  c->r[5]=c->r[30]+0x00030000u; // 8035606C
  c->r[3]=c->r[31]|c->r[31]; // 80356070
  c->r[4]=R8(c->r[5]+0xFFFF8A87u); // 80356074
  c->r[0]=c->r[4]+0x00000001u; // 80356078
  W8(c->r[5]+0xFFFF8A87u,c->r[0]); // 8035607C
  goto L_80356088; // 80356080
L_80356084:;
  c->r[3]=0u+0x000000FFu; // 80356084
L_80356088:;
  c->r[11]=c->r[1]+0x00000020u; // 80356088
  c->lr=0x80356090u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8035608C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80356090
  c->lr=c->r[0]; // 80356094
  c->r[1]=c->r[1]+0x00000020u; // 80356098
  return; // 8035609C
}

// GKI_delete_pool
void f_803560A0(Ctx* __restrict c) {
  trace_call(0x803560A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803560A0
  c->r[0]=c->lr; // 803560A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803560A8
  c->r[11]=c->r[1]+0x00000020u; // 803560AC
  c->lr=0x803560B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803560B0
  c->r[27]=0u+0x80530000u; // 803560B4
  cmpu(c,0,c->r[3],0x00000009u); // 803560B8
  c->r[27]=c->r[27]+0x000016E0u; // 803560BC
  c->r[30]=c->r[3]|c->r[3]; // 803560C0
  c->r[31]=c->r[27]+0x00000054u; // 803560C4
  if (!crb(c,0)) { goto L_803561E8; } // 803560C8
  c->r[26]=rotl(c->r[3],2)&0x000003FCu; // 803560CC
  c->r[0]=c->r[31]+0x00030000u; // 803560D0
  c->r[3]=c->r[0]+c->r[26]; // 803560D4
  c->r[0]=R32(c->r[3]+0xFFFF8A1Cu); // 803560D8
  cmps(c,0,(int32_t)c->r[0],0); // 803560DC
  if (!crb(c,2)) { goto L_803560E8; } // 803560E0
  goto L_803561E8; // 803560E4
L_803560E8:;
  c->lr=0x803560ECu; f_80356970(c); // 803560E8
  c->r[4]=c->r[31]+0x00030000u; // 803560EC
  c->r[0]=rotl(c->r[30],4)&0x00000FF0u; // 803560F0
  c->r[3]=c->r[4]+c->r[0]; // 803560F4
  c->r[0]=R16(c->r[3]+0xFFFF8998u); // 803560F8
  cmps(c,0,(int32_t)c->r[0],0); // 803560FC
  if (!crb(c,2)) { goto L_803561CC; } // 80356100
  c->r[28]=0u+0x00000000u; // 80356104
  c->r[29]=c->r[4]+c->r[26]; // 80356108
  W16(c->r[3]+0xFFFF8994u,c->r[28]); // 8035610C
  W16(c->r[3]+0xFFFF8996u,c->r[28]); // 80356110
  W16(c->r[3]+0xFFFF8998u,c->r[28]); // 80356114
  W16(c->r[3]+0xFFFF899Au,c->r[28]); // 80356118
  W32(c->r[3]+0xFFFF898Cu,c->r[28]); // 8035611C
  W32(c->r[3]+0xFFFF8990u,c->r[28]); // 80356120
  c->r[3]=R32(c->r[29]+0xFFFF8A1Cu); // 80356124
  c->lr=0x8035612Cu; f_803569E4(c); // 80356128
  c->r[4]=c->r[31]+0x00030000u; // 8035612C
  W32(c->r[29]+0xFFFF8A1Cu,c->r[28]); // 80356130
  c->r[3]=c->r[4]+c->r[26]; // 80356134
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 80356138
  W32(c->r[3]+0xFFFF8A40u,c->r[28]); // 8035613C
  c->r[3]=c->r[4]+c->r[0]; // 80356140
  c->r[7]=c->r[31]|c->r[31]; // 80356144
  c->r[6]=0u+0x00000000u; // 80356148
  W16(c->r[3]+0xFFFF8A64u,c->r[28]); // 8035614C
  c->r[4]=R8(c->r[4]+0xFFFF8A87u); // 80356150
  goto L_80356174; // 80356154
L_80356158:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 80356158
  c->r[3]=c->r[3]+0x00030000u; // 8035615C
  c->r[0]=c->r[3]+0xFFFF8A7Eu; // 80356160
  c->r[0]=R8(c->r[7]+c->r[0]); // 80356164
  cmpu(c,0,c->r[30],c->r[0]); // 80356168
  if (crb(c,2)) { goto L_80356180; } // 8035616C
  c->r[6]=c->r[6]+0x00000001u; // 80356170
L_80356174:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 80356174
  cmpu(c,0,c->r[0],c->r[4]); // 80356178
  if (crb(c,0)) { IRQCHK(c); goto L_80356158; } // 8035617C
L_80356180:;
  c->r[4]=c->r[7]+0x00030000u; // 80356180
  goto L_803561A4; // 80356184
L_80356188:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 80356188
  c->r[6]=c->r[6]+0x00000001u; // 8035618C
  c->r[3]=c->r[3]+0x00030000u; // 80356190
  c->r[3]=c->r[3]+0xFFFF8A7Eu; // 80356194
  c->r[3]=c->r[7]+c->r[3]; // 80356198
  c->r[0]=R8(c->r[3]+0x00000001u); // 8035619C
  W8(c->r[3]+0x00000000u,c->r[0]); // 803561A0
L_803561A4:;
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 803561A4
  c->r[5]=rotl(c->r[6],0)&0x000000FFu; // 803561A8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803561AC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 803561B0
  if (crb(c,0)) { IRQCHK(c); goto L_80356188; } // 803561B4
  c->r[4]=c->r[31]+0x00030000u; // 803561B8
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 803561BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803561C0
  W8(c->r[4]+0xFFFF8A87u,c->r[0]); // 803561C4
  goto L_803561E4; // 803561C8
L_803561CC:;
  c->r[3]=0u+0x00010000u; // 803561CC
  c->r[4]=0u+0x80460000u; // 803561D0
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 803561D4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803561D8
  c->r[4]=c->r[4]+0xFFFFA030u; // 803561DC
  c->lr=0x803561E4u; f_803569B4(c); // 803561E0
L_803561E4:;
  c->lr=0x803561E8u; f_8035694C(c); // 803561E4
L_803561E8:;
  c->r[11]=c->r[1]+0x00000020u; // 803561E8
  c->lr=0x803561F0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803561EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803561F0
  c->lr=c->r[0]; // 803561F4
  c->r[1]=c->r[1]+0x00000020u; // 803561F8
  return; // 803561FC
}

// gki_timers_init
void f_80356200(Ctx* __restrict c) {
  trace_call(0x80356200u);
  c->r[3]=0u+0x80530000u; // 80356200
  c->r[0]=0u+0x00000000u; // 80356204
  c->r[3]=c->r[3]+0x000016E0u; // 80356208
  c->r[3]=c->r[3]+0x00030000u; // 8035620C
  W32(c->r[3]+0xFFFF8838u,c->r[0]); // 80356210
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 80356214
  W32(c->r[3]+0xFFFF8840u,c->r[0]); // 80356218
  W32(c->r[3]+0xFFFF8860u,c->r[0]); // 8035621C
  W32(c->r[3]+0xFFFF8880u,c->r[0]); // 80356220
  W32(c->r[3]+0xFFFF88A0u,c->r[0]); // 80356224
  W32(c->r[3]+0xFFFF88C0u,c->r[0]); // 80356228
  W32(c->r[3]+0xFFFF8844u,c->r[0]); // 8035622C
  W32(c->r[3]+0xFFFF8864u,c->r[0]); // 80356230
  W32(c->r[3]+0xFFFF8884u,c->r[0]); // 80356234
  W32(c->r[3]+0xFFFF88A4u,c->r[0]); // 80356238
  W32(c->r[3]+0xFFFF88C4u,c->r[0]); // 8035623C
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 80356240
  W32(c->r[3]+0xFFFF8868u,c->r[0]); // 80356244
  W32(c->r[3]+0xFFFF8888u,c->r[0]); // 80356248
  W32(c->r[3]+0xFFFF88A8u,c->r[0]); // 8035624C
  W32(c->r[3]+0xFFFF88C8u,c->r[0]); // 80356250
  W32(c->r[3]+0xFFFF884Cu,c->r[0]); // 80356254
  W32(c->r[3]+0xFFFF886Cu,c->r[0]); // 80356258
  W32(c->r[3]+0xFFFF888Cu,c->r[0]); // 8035625C
  W32(c->r[3]+0xFFFF88ACu,c->r[0]); // 80356260
  W32(c->r[3]+0xFFFF88CCu,c->r[0]); // 80356264
  W32(c->r[3]+0xFFFF8850u,c->r[0]); // 80356268
  W32(c->r[3]+0xFFFF8870u,c->r[0]); // 8035626C
  W32(c->r[3]+0xFFFF8890u,c->r[0]); // 80356270
  W32(c->r[3]+0xFFFF88B0u,c->r[0]); // 80356274
  W32(c->r[3]+0xFFFF88D0u,c->r[0]); // 80356278
  W32(c->r[3]+0xFFFF8854u,c->r[0]); // 8035627C
  W32(c->r[3]+0xFFFF8874u,c->r[0]); // 80356280
  W32(c->r[3]+0xFFFF8894u,c->r[0]); // 80356284
  W32(c->r[3]+0xFFFF88B4u,c->r[0]); // 80356288
  W32(c->r[3]+0xFFFF88D4u,c->r[0]); // 8035628C
  W32(c->r[3]+0xFFFF8858u,c->r[0]); // 80356290
  W32(c->r[3]+0xFFFF8878u,c->r[0]); // 80356294
  W32(c->r[3]+0xFFFF8898u,c->r[0]); // 80356298
  W32(c->r[3]+0xFFFF88B8u,c->r[0]); // 8035629C
  W32(c->r[3]+0xFFFF88D8u,c->r[0]); // 803562A0
  W32(c->r[3]+0xFFFF885Cu,c->r[0]); // 803562A4
  W32(c->r[3]+0xFFFF887Cu,c->r[0]); // 803562A8
  W32(c->r[3]+0xFFFF889Cu,c->r[0]); // 803562AC
  W32(c->r[3]+0xFFFF88BCu,c->r[0]); // 803562B0
  W32(c->r[3]+0xFFFF88DCu,c->r[0]); // 803562B4
  return; // 803562B8
}

// GKI_get_tick_count
void f_803562BC(Ctx* __restrict c) {
  trace_call(0x803562BCu);
  c->r[3]=0u+0x80530000u; // 803562BC
  c->r[3]=c->r[3]+0x000016E0u; // 803562C0
  c->r[3]=c->r[3]+0x00030000u; // 803562C4
  c->r[3]=R32(c->r[3]+0xFFFF8828u); // 803562C8
  return; // 803562CC
}

// GKI_start_timer
void f_803562D0(Ctx* __restrict c) {
  trace_call(0x803562D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803562D0
  c->r[0]=c->lr; // 803562D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803562D8
  c->r[11]=c->r[1]+0x00000020u; // 803562DC
  c->lr=0x803562E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803562E0
  c->r[27]=c->r[3]|c->r[3]; // 803562E4
  c->r[29]=c->r[4]|c->r[4]; // 803562E8
  c->r[31]=c->r[5]|c->r[5]; // 803562EC
  c->lr=0x803562F4u; f_80356944(c); // 803562F0
  cmps(c,0,(int32_t)c->r[29],0); // 803562F4
  c->r[28]=c->r[3]|c->r[3]; // 803562F8
  c->r[30]=0u+0x00000000u; // 803562FC
  if (crb(c,1)) { goto L_80356308; } // 80356300
  c->r[29]=0u+0x00000001u; // 80356304
L_80356308:;
  c->r[0]=0u-c->r[31]; // 80356308
  c->r[0]=c->r[0]|c->r[31]; // 8035630C
  c->r[0]=sraw(c,c->r[0],31); // 80356310
  c->r[31]=c->r[29]&c->r[0]; // 80356314
  c->lr=0x8035631Cu; f_80356970(c); // 80356318
  c->r[4]=0u+0x80530000u; // 8035631C
  c->r[3]=0u+0x80000000u; // 80356320
  c->r[4]=c->r[4]+0x000016E0u; // 80356324
  c->r[5]=c->r[4]+0x00030000u; // 80356328
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8035632C
  c->r[3]=R32(c->r[5]+0xFFFF8838u); // 80356330
  c->r[0]=R32(c->r[5]+0xFFFF883Cu); // 80356334
  c->r[3]=c->r[0]-c->r[3]; // 80356338
  c->r[0]=c->r[4]-c->r[3]; // 8035633C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 80356340
  if (!crb(c,1)) { goto L_8035634C; } // 80356344
  c->r[4]=c->r[29]+c->r[3]; // 80356348
L_8035634C:;
  cmps(c,0,(int32_t)c->r[27],1); // 8035634C
  if (crb(c,2)) { goto L_80356384; } // 80356350
  if (!crb(c,0)) { goto L_803563A4; } // 80356354
  cmps(c,0,(int32_t)c->r[27],0); // 80356358
  if (!crb(c,0)) { goto L_80356364; } // 8035635C
  goto L_803563A4; // 80356360
L_80356364:;
  c->r[3]=0u+0x80530000u; // 80356364
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 80356368
  c->r[3]=c->r[3]+0x000016E0u; // 8035636C
  c->r[0]=c->r[3]+0x00030000u; // 80356370
  c->r[3]=c->r[0]+c->r[5]; // 80356374
  W32(c->r[3]+0xFFFF8880u,c->r[31]); // 80356378
  W32(c->r[3]+0xFFFF8860u,c->r[4]); // 8035637C
  goto L_803563A8; // 80356380
L_80356384:;
  c->r[3]=0u+0x80530000u; // 80356384
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 80356388
  c->r[3]=c->r[3]+0x000016E0u; // 8035638C
  c->r[0]=c->r[3]+0x00030000u; // 80356390
  c->r[3]=c->r[0]+c->r[5]; // 80356394
  W32(c->r[3]+0xFFFF88C0u,c->r[31]); // 80356398
  W32(c->r[3]+0xFFFF88A0u,c->r[4]); // 8035639C
  goto L_803563A8; // 803563A0
L_803563A4:;
  c->r[30]=0u+0x00000001u; // 803563A4
L_803563A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803563A8
  if (!crb(c,2)) { goto L_80356404; } // 803563AC
  cmps(c,0,(int32_t)c->r[29],0); // 803563B0
  if (!crb(c,1)) { goto L_80356404; } // 803563B4
  c->r[3]=0u+0x80530000u; // 803563B8
  c->r[3]=c->r[3]+0x000016E0u; // 803563BC
  c->r[3]=c->r[3]+0x00030000u; // 803563C0
  c->r[4]=R32(c->r[3]+0xFFFF883Cu); // 803563C4
  cmps(c,0,(int32_t)c->r[4],0); // 803563C8
  if (crb(c,2)) { goto L_803563E4; } // 803563CC
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 803563D0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803563D4
  if (!crb(c,0)) { goto L_80356404; } // 803563D8
  cmps(c,0,(int32_t)c->r[0],0); // 803563DC
  if (!crb(c,1)) { goto L_80356404; } // 803563E0
L_803563E4:;
  c->r[3]=0u+0x80530000u; // 803563E4
  c->r[3]=c->r[3]+0x000016E0u; // 803563E8
  c->r[3]=c->r[3]+0x00030000u; // 803563EC
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 803563F0
  c->r[0]=c->r[4]-c->r[0]; // 803563F4
  c->r[0]=c->r[29]+c->r[0]; // 803563F8
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 803563FC
  W32(c->r[3]+0xFFFF8838u,c->r[29]); // 80356400
L_80356404:;
  c->lr=0x80356408u; f_8035694C(c); // 80356404
  c->r[11]=c->r[1]+0x00000020u; // 80356408
  c->lr=0x80356410u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8035640C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80356410
  c->lr=c->r[0]; // 80356414
  c->r[1]=c->r[1]+0x00000020u; // 80356418
  return; // 8035641C
}

// GKI_stop_timer
void f_80356420(Ctx* __restrict c) {
  trace_call(0x80356420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80356420
  c->r[0]=c->lr; // 80356424
  W32(c->r[1]+0x00000014u,c->r[0]); // 80356428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8035642C
  c->r[31]=c->r[3]|c->r[3]; // 80356430
  c->lr=0x80356438u; f_80356944(c); // 80356434
  cmps(c,0,(int32_t)c->r[31],1); // 80356438
  if (crb(c,2)) { goto L_80356474; } // 8035643C
  if (!crb(c,0)) { goto L_80356494; } // 80356440
  cmps(c,0,(int32_t)c->r[31],0); // 80356444
  if (!crb(c,0)) { goto L_80356450; } // 80356448
  goto L_80356494; // 8035644C
L_80356450:;
  c->r[4]=0u+0x80530000u; // 80356450
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 80356454
  c->r[4]=c->r[4]+0x000016E0u; // 80356458
  c->r[5]=0u+0x00000000u; // 8035645C
  c->r[0]=c->r[4]+0x00030000u; // 80356460
  c->r[3]=c->r[0]+c->r[3]; // 80356464
  W32(c->r[3]+0xFFFF8880u,c->r[5]); // 80356468
  W32(c->r[3]+0xFFFF8860u,c->r[5]); // 8035646C
  goto L_80356494; // 80356470
L_80356474:;
  c->r[4]=0u+0x80530000u; // 80356474
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 80356478
  c->r[4]=c->r[4]+0x000016E0u; // 8035647C
  c->r[5]=0u+0x00000000u; // 80356480
  c->r[0]=c->r[4]+0x00030000u; // 80356484
  c->r[3]=c->r[0]+c->r[3]; // 80356488
  W32(c->r[3]+0xFFFF88C0u,c->r[5]); // 8035648C
  W32(c->r[3]+0xFFFF88A0u,c->r[5]); // 80356490
L_80356494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80356494
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80356498
  c->lr=c->r[0]; // 8035649C
  c->r[1]=c->r[1]+0x00000010u; // 803564A0
  return; // 803564A4
}

// GKI_init_timer_list
void f_803564A8(Ctx* __restrict c) {
  trace_call(0x803564A8u);
  c->r[0]=0u+0x00000000u; // 803564A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 803564AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 803564B0
  W32(c->r[3]+0x00000008u,c->r[0]); // 803564B4
  return; // 803564B8
}

// GKI_update_timer_list
void f_803564BC(Ctx* __restrict c) {
  trace_call(0x803564BCu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 803564BC
  c->r[7]=0u+0x00000000u; // 803564C0
  goto L_803564D0; // 803564C4
L_803564C8:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 803564C8
  c->r[7]=c->r[7]+0x00000001u; // 803564CC
L_803564D0:;
  cmps(c,0,(int32_t)c->r[6],0); // 803564D0
  if (crb(c,2)) { goto L_803564E4; } // 803564D4
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 803564D8
  cmps(c,0,(int32_t)c->r[0],0); // 803564DC
  if (!crb(c,1)) { IRQCHK(c); goto L_803564C8; } // 803564E0
L_803564E4:;
  c->r[8]=c->r[4]|c->r[4]; // 803564E4
  c->r[0]=0u+0x00000000u; // 803564E8
  goto L_80356510; // 803564EC
L_803564F0:;
  c->r[9]=R32(c->r[6]+0x0000000Cu); // 803564F0
  c->r[5]=c->r[9]-c->r[8]; cr0(c,c->r[5]); // 803564F4
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 803564F8
  if (crb(c,1)) { goto L_80356508; } // 803564FC
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80356500
  c->r[7]=c->r[7]+0x00000001u; // 80356504
L_80356508:;
  c->r[8]=c->r[8]-c->r[9]; // 80356508
  c->r[6]=R32(c->r[6]+0x00000000u); // 8035650C
L_80356510:;
  cmps(c,0,(int32_t)c->r[6],0); // 80356510
  if (crb(c,2)) { goto L_80356520; } // 80356514
  cmps(c,0,(int32_t)c->r[8],0); // 80356518
  if (crb(c,1)) { IRQCHK(c); goto L_803564F0; } // 8035651C
L_80356520:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80356520
  cmps(c,0,(int32_t)c->r[0],0); // 80356524
  if (!crb(c,1)) { goto L_80356540; } // 80356528
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 8035652C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80356530
  if (!crb(c,0)) { goto L_80356540; } // 80356534
  c->r[0]=0u+0x00000000u; // 80356538
  W32(c->r[3]+0x00000008u,c->r[0]); // 8035653C
L_80356540:;
  c->r[3]=c->r[7]|c->r[7]; // 80356540
  return; // 80356544
}

// GKI_add_to_timer_list
void f_80356548(Ctx* __restrict c) {
  trace_call(0x80356548u);
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 80356548
  cmps(c,0,(int32_t)c->r[5],0); // 8035654C
  if (crb(c,0)) return; // 80356550
  c->r[0]=R32(c->r[3]+0x00000008u); // 80356554
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80356558
  if (crb(c,0)) { goto L_803565B0; } // 8035655C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80356560
  cmps(c,0,(int32_t)c->r[0],0); // 80356564
  if (!crb(c,2)) { goto L_80356574; } // 80356568
  W32(c->r[3]+0x00000000u,c->r[4]); // 8035656C
  goto L_8035658C; // 80356570
L_80356574:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 80356574
  cmps(c,0,(int32_t)c->r[5],0); // 80356578
  if (crb(c,2)) { goto L_80356584; } // 8035657C
  W32(c->r[5]+0x00000000u,c->r[4]); // 80356580
L_80356584:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80356584
  W32(c->r[4]+0x00000004u,c->r[0]); // 80356588
L_8035658C:;
  c->r[0]=0u+0x00000000u; // 8035658C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80356590
  W32(c->r[3]+0x00000004u,c->r[4]); // 80356594
  c->r[0]=R32(c->r[3]+0x00000008u); // 80356598
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 8035659C
  c->r[0]=c->r[5]-c->r[0]; // 803565A0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803565A4
  W32(c->r[3]+0x00000008u,c->r[5]); // 803565A8
  goto L_80356628; // 803565AC
L_803565B0:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 803565B0
  goto L_803565D0; // 803565B4
L_803565B8:;
  cmps(c,0,(int32_t)c->r[5],0); // 803565B8
  if (!crb(c,1)) { goto L_803565CC; } // 803565BC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803565C0
  c->r[0]=c->r[0]-c->r[5]; // 803565C4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803565C8
L_803565CC:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 803565CC
L_803565D0:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 803565D0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803565D4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 803565D8
  if (crb(c,1)) { IRQCHK(c); goto L_803565B8; } // 803565DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 803565E0
  cmpu(c,0,c->r[6],c->r[0]); // 803565E4
  if (!crb(c,2)) { goto L_80356600; } // 803565E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 803565EC
  c->r[5]=R32(c->r[3]+0x00000000u); // 803565F0
  W32(c->r[5]+0x00000004u,c->r[4]); // 803565F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 803565F8
  goto L_80356618; // 803565FC
L_80356600:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 80356600
  W32(c->r[3]+0x00000000u,c->r[4]); // 80356604
  c->r[0]=R32(c->r[6]+0x00000004u); // 80356608
  W32(c->r[4]+0x00000004u,c->r[0]); // 8035660C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80356610
  W32(c->r[4]+0x00000000u,c->r[6]); // 80356614
L_80356618:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80356618
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8035661C
  c->r[0]=c->r[0]-c->r[3]; // 80356620
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80356624
L_80356628:;
  c->r[0]=0u+0x00000001u; // 80356628
  W8(c->r[4]+0x00000016u,c->r[0]); // 8035662C
  return; // 80356630
}

// GKI_remove_from_timer_list
void f_80356634(Ctx* __restrict c) {
  trace_call(0x80356634u);
  cmps(c,0,(int32_t)c->r[4],0); // 80356634
  if (crb(c,2)) return; // 80356638
  c->r[0]=R8(c->r[4]+0x00000016u); // 8035663C
  cmps(c,0,(int32_t)c->r[0],0); // 80356640
  if (crb(c,2)) return; // 80356644
  c->r[0]=R32(c->r[3]+0x00000000u); // 80356648
  cmps(c,0,(int32_t)c->r[0],0); // 8035664C
  if (!crb(c,2)) { goto L_80356658; } // 80356650
  return; // 80356654
L_80356658:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 80356658
  cmps(c,0,(int32_t)c->r[6],0); // 8035665C
  if (crb(c,2)) { goto L_80356678; } // 80356660
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80356664
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80356668
  c->r[0]=c->r[5]+c->r[0]; // 8035666C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 80356670
  goto L_80356688; // 80356674
L_80356678:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 80356678
  c->r[0]=R32(c->r[3]+0x00000008u); // 8035667C
  c->r[0]=c->r[0]-c->r[5]; // 80356680
  W32(c->r[3]+0x00000008u,c->r[0]); // 80356684
L_80356688:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80356688
  cmpu(c,0,c->r[0],c->r[4]); // 8035668C
  if (!crb(c,2)) { goto L_803566C4; } // 80356690
  c->r[5]=R32(c->r[4]+0x00000000u); // 80356694
  cmps(c,0,(int32_t)c->r[5],0); // 80356698
  W32(c->r[3]+0x00000000u,c->r[5]); // 8035669C
  if (crb(c,2)) { goto L_803566AC; } // 803566A0
  c->r[0]=0u+0x00000000u; // 803566A4
  W32(c->r[5]+0x00000004u,c->r[0]); // 803566A8
L_803566AC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803566AC
  cmpu(c,0,c->r[0],c->r[4]); // 803566B0
  if (!crb(c,2)) { goto L_8035673C; } // 803566B4
  c->r[0]=0u+0x00000000u; // 803566B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 803566BC
  goto L_8035673C; // 803566C0
L_803566C4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803566C4
  cmpu(c,0,c->r[0],c->r[4]); // 803566C8
  if (!crb(c,2)) { goto L_803566EC; } // 803566CC
  c->r[5]=R32(c->r[4]+0x00000004u); // 803566D0
  cmps(c,0,(int32_t)c->r[5],0); // 803566D4
  W32(c->r[3]+0x00000004u,c->r[5]); // 803566D8
  if (crb(c,2)) { goto L_8035673C; } // 803566DC
  c->r[0]=0u+0x00000000u; // 803566E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 803566E4
  goto L_8035673C; // 803566E8
L_803566EC:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 803566EC
  cmps(c,0,(int32_t)c->r[3],0); // 803566F0
  if (crb(c,2)) return; // 803566F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 803566F8
  cmpu(c,0,c->r[0],c->r[4]); // 803566FC
  if (!crb(c,2)) return; // 80356700
  c->r[0]=R32(c->r[4]+0x00000004u); // 80356704
  W32(c->r[3]+0x00000004u,c->r[0]); // 80356708
  goto L_80356714; // 8035670C
  return; // 80356710
L_80356714:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80356714
  cmps(c,0,(int32_t)c->r[3],0); // 80356718
  if (crb(c,2)) return; // 8035671C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80356720
  cmpu(c,0,c->r[0],c->r[4]); // 80356724
  if (!crb(c,2)) return; // 80356728
  c->r[0]=R32(c->r[4]+0x00000000u); // 8035672C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80356730
  goto L_8035673C; // 80356734
  return; // 80356738
L_8035673C:;
  c->r[3]=0u+0x00000000u; // 8035673C
  c->r[0]=0u+0x80000000u; // 80356740
  W32(c->r[4]+0x00000004u,c->r[3]); // 80356744
  W32(c->r[4]+0x00000000u,c->r[3]); // 80356748
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8035674C
  W8(c->r[4]+0x00000016u,c->r[3]); // 80356750
  return; // 80356754
}

// GKI_init
void f_80356758(Ctx* __restrict c) {
  trace_call(0x80356758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80356758
  c->r[0]=c->lr; // 8035675C
  c->r[5]=0u+0x00030000u; // 80356760
  c->r[4]=0u+0x00000000u; // 80356764
  W32(c->r[1]+0x00000014u,c->r[0]); // 80356768
  c->r[5]=c->r[5]+0xFFFF8AE0u; // 8035676C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80356770
  W32(c->r[1]+0x00000008u,c->r[30]); // 80356774
  c->r[30]=0u+0x80530000u; // 80356778
  c->r[3]=c->r[30]+0x000016E0u; // 8035677C
  c->lr=0x80356784u; f_80006370(c); // 80356780
  c->lr=0x80356788u; f_80354FDC(c); // 80356784
  c->lr=0x8035678Cu; f_80356200(c); // 80356788
  c->r[31]=c->r[30]+0x000016E0u; // 8035678C
  c->r[4]=0u+0x00000001u; // 80356790
  c->r[3]=c->r[31]+0x00030000u; // 80356794
  c->r[0]=0u+0x00000000u; // 80356798
  W8(c->r[3]+0xFFFF8802u,c->r[4]); // 8035679C
  W32(c->r[3]+0xFFFF87E8u,c->r[0]); // 803567A0
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 803567A4
  W16(c->r[3]+0xFFFF880Cu,c->r[0]); // 803567A8
  W8(c->r[30]+0x000016E0u,c->r[0]); // 803567AC
  c->lr=0x803567B4u; f_803226B0(c); // 803567B0
  c->r[0]=R8(c->r[30]+0x000016E0u); // 803567B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803567B8
  c->r[4]=c->r[31]+c->r[0]; // 803567BC
  W32(c->r[4]+0x00000004u,c->r[3]); // 803567C0
  c->r[3]=R8(c->r[30]+0x000016E0u); // 803567C4
  c->r[0]=c->r[3]+0x00000001u; // 803567C8
  W8(c->r[30]+0x000016E0u,c->r[0]); // 803567CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803567D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803567D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803567D8
  c->lr=c->r[0]; // 803567DC
  c->r[1]=c->r[1]+0x00000010u; // 803567E0
  return; // 803567E4
}

// GKI_shutdown
void f_803567E8(Ctx* __restrict c) {
  trace_call(0x803567E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803567E8
  c->r[0]=c->lr; // 803567EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803567F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803567F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803567F8
  c->lr=0x80356800u; f_8032269C(c); // 803567FC
  c->r[30]=0u+0x80530000u; // 80356800
  c->r[0]=0u+0x00000000u; // 80356804
  c->r[5]=R8(c->r[30]+0x000016E0u); // 80356808
  c->r[31]=c->r[30]+0x000016E0u; // 8035680C
  c->r[4]=c->r[31]+0x00030000u; // 80356810
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80356814
  c->r[5]=c->r[31]+c->r[5]; // 80356818
  W32(c->r[5]+0x00000004u,c->r[3]); // 8035681C
  c->r[3]=R8(c->r[30]+0x000016E0u); // 80356820
  c->r[3]=c->r[3]+0x00000001u; // 80356824
  W8(c->r[30]+0x000016E0u,c->r[3]); // 80356828
  W8(c->r[4]+0xFFFF8802u,c->r[0]); // 8035682C
  c->r[3]=R8(c->r[30]+0x000016E0u); // 80356830
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80356834
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80356838
  W8(c->r[30]+0x000016E0u,c->r[3]); // 8035683C
  c->r[3]=c->r[31]+c->r[0]; // 80356840
  c->r[3]=R32(c->r[3]+0x00000004u); // 80356844
  c->lr=0x8035684Cu; f_803226C4(c); // 80356848
  goto L_8035686C; // 8035684C
L_80356850:;
  c->r[3]=R8(c->r[30]+0x000016E0u); // 80356850
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80356854
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80356858
  W8(c->r[30]+0x000016E0u,c->r[3]); // 8035685C
  c->r[3]=c->r[31]+c->r[0]; // 80356860
  c->r[3]=R32(c->r[3]+0x00000004u); // 80356864
  c->lr=0x8035686Cu; f_803226C4(c); // 80356868
L_8035686C:;
  c->r[0]=R8(c->r[30]+0x000016E0u); // 8035686C
  cmps(c,0,(int32_t)c->r[0],0); // 80356870
  if (!crb(c,2)) { IRQCHK(c); goto L_80356850; } // 80356874
  c->r[0]=R32(c->r[1]+0x00000014u); // 80356878
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8035687C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80356880
  c->lr=c->r[0]; // 80356884
  c->r[1]=c->r[1]+0x00000010u; // 80356888
  return; // 8035688C
}

// fn_80356890
void f_80356890(Ctx* __restrict c) {
  trace_call(0x80356890u);
  return; // 80356890
}

// fn_80356894
void f_80356894(Ctx* __restrict c) {
  trace_call(0x80356894u);
  return; // 80356894
}

// fn_80356898
void f_80356898(Ctx* __restrict c) {
  trace_call(0x80356898u);
  return; // 80356898
}

// fn_8035689C
void f_8035689C(Ctx* __restrict c) {
  trace_call(0x8035689Cu);
  return; // 8035689C
}

// GKI_send_event
void f_803568A0(Ctx* __restrict c) {
  trace_call(0x803568A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803568A0
  c->r[0]=c->lr; // 803568A4
  cmpu(c,0,c->r[3],0x00000008u); // 803568A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803568AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803568B0
  c->r[31]=c->r[4]|c->r[4]; // 803568B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803568B8
  c->r[30]=c->r[3]|c->r[3]; // 803568BC
  if (crb(c,0)) { goto L_803568CC; } // 803568C0
  c->r[3]=0u+0x00000001u; // 803568C4
  goto L_8035692C; // 803568C8
L_803568CC:;
  c->lr=0x803568D0u; f_8032269C(c); // 803568CC
  c->r[7]=0u+0x80530000u; // 803568D0
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 803568D4
  c->r[5]=R8(c->r[7]+0x000016E0u); // 803568D8
  c->r[6]=c->r[7]+0x000016E0u; // 803568DC
  c->r[4]=c->r[6]+0x00030000u; // 803568E0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803568E4
  c->r[5]=c->r[6]+c->r[5]; // 803568E8
  c->r[4]=c->r[4]+c->r[0]; // 803568EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 803568F0
  c->r[3]=R8(c->r[7]+0x000016E0u); // 803568F4
  c->r[0]=c->r[3]+0x00000001u; // 803568F8
  W8(c->r[7]+0x000016E0u,c->r[0]); // 803568FC
  c->r[0]=R16(c->r[4]+0xFFFF8808u); // 80356900
  c->r[0]=c->r[0]|c->r[31]; // 80356904
  W16(c->r[4]+0xFFFF8808u,c->r[0]); // 80356908
  c->r[3]=R8(c->r[7]+0x000016E0u); // 8035690C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80356910
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80356914
  W8(c->r[7]+0x000016E0u,c->r[3]); // 80356918
  c->r[3]=c->r[6]+c->r[0]; // 8035691C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80356920
  c->lr=0x80356928u; f_803226C4(c); // 80356924
  c->r[3]=0u+0x00000000u; // 80356928
L_8035692C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8035692C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80356930
  c->r[30]=R32(c->r[1]+0x00000008u); // 80356934
  c->lr=c->r[0]; // 80356938
  c->r[1]=c->r[1]+0x00000010u; // 8035693C
  return; // 80356940
}

// GKI_get_taskid
void f_80356944(Ctx* __restrict c) {
  trace_call(0x80356944u);
  c->r[3]=0u+0x00000002u; // 80356944
  return; // 80356948
}

// GKI_enable
void f_8035694C(Ctx* __restrict c) {
  trace_call(0x8035694Cu);
  c->r[5]=0u+0x80530000u; // 8035694C
  c->r[4]=R8(c->r[5]+0x000016E0u); // 80356950
  c->r[3]=c->r[5]+0x000016E0u; // 80356954
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80356958
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 8035695C
  W8(c->r[5]+0x000016E0u,c->r[4]); // 80356960
  c->r[3]=c->r[3]+c->r[0]; // 80356964
  c->r[3]=R32(c->r[3]+0x00000004u); // 80356968
  f_803226C4(c); return; // 8035696C
}

// GKI_disable
void f_80356970(Ctx* __restrict c) {
  trace_call(0x80356970u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80356970
  c->r[0]=c->lr; // 80356974
  W32(c->r[1]+0x00000014u,c->r[0]); // 80356978
  c->lr=0x80356980u; f_8032269C(c); // 8035697C
  c->r[5]=0u+0x80530000u; // 80356980
  c->r[0]=R8(c->r[5]+0x000016E0u); // 80356984
  c->r[4]=c->r[5]+0x000016E0u; // 80356988
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8035698C
  c->r[4]=c->r[4]+c->r[0]; // 80356990
  W32(c->r[4]+0x00000004u,c->r[3]); // 80356994
  c->r[3]=R8(c->r[5]+0x000016E0u); // 80356998
  c->r[0]=c->r[3]+0x00000001u; // 8035699C
  W8(c->r[5]+0x000016E0u,c->r[0]); // 803569A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803569A4
  c->lr=c->r[0]; // 803569A8
  c->r[1]=c->r[1]+0x00000010u; // 803569AC
  return; // 803569B0
}

// fn_803569B4
void f_803569B4(Ctx* __restrict c) {
  trace_call(0x803569B4u);
  return; // 803569B4
}

// GKI_os_malloc
void f_803569B8(Ctx* __restrict c) {
  trace_call(0x803569B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803569B8
  c->r[0]=c->lr; // 803569BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803569C0
  c->lr=0x803569C8u; f_80394518(c); // 803569C4
  cmps(c,0,(int32_t)c->r[3],0); // 803569C8
  if (!crb(c,2)) { goto L_803569D4; } // 803569CC
  c->r[3]=0u+0x00000000u; // 803569D0
L_803569D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803569D4
  c->lr=c->r[0]; // 803569D8
  c->r[1]=c->r[1]+0x00000010u; // 803569DC
  return; // 803569E0
}

// fn_803569E4
void f_803569E4(Ctx* __restrict c) {
  trace_call(0x803569E4u);
  f_80394568(c); return; // 803569E4
}

// hcisu_h2_usb_cback
void f_803569E8(Ctx* __restrict c) {
  trace_call(0x803569E8u);
  cmps(c,0,(int32_t)c->r[3],4); // 803569E8
  if (crb(c,2)) { goto L_80356A00; } // 803569EC
  if (!crb(c,0)) return; // 803569F0
  cmps(c,0,(int32_t)c->r[3],0); // 803569F4
  if (crb(c,2)) return; // 803569F8
  return; // 803569FC
L_80356A00:;
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80356A00
  f_80357FEC(c); return; // 80356A04
  return; // 80356A08
}

// hcisu_h2_receive_msg
void f_80356A0C(Ctx* __restrict c) {
  trace_call(0x80356A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80356A0C
  c->r[0]=c->lr; // 80356A10
  W32(c->r[1]+0x00000064u,c->r[0]); // 80356A14
  c->r[11]=c->r[1]+0x00000060u; // 80356A18
  c->lr=0x80356A20u; f_803ADD08(c); // 80356A1C
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 80356A20
  c->r[15]=c->r[4]|c->r[4]; // 80356A24
  c->r[19]=0u+0x00000000u; // 80356A28
  cmpu(c,0,c->r[0],0x00000002u); // 80356A2C
  if (crb(c,2)) { goto L_80356A3C; } // 80356A30
  c->r[3]=0u+0x00000000u; // 80356A34
  goto L_80356D8C; // 80356A38
L_80356A3C:;
  c->r[20]=c->r[3]+0x00000001u; // 80356A3C
  c->r[0]=rotl(c->r[3],1)&0x0001FFFEu; // 80356A40
  c->r[31]=0u+0x80560000u; // 80356A44
  c->r[22]=c->r[4]+c->r[3]; // 80356A48
  c->r[16]=rotl(c->r[20],0)&0x0000FFFFu; // 80356A4C
  c->r[23]=rotl(c->r[3],2)&0x0003FFFCu; // 80356A50
  c->r[21]=c->r[4]+c->r[0]; // 80356A54
  c->r[31]=c->r[31]+0xFFFFA1C0u; // 80356A58
  c->r[29]=0u+0x00000000u; // 80356A5C
  c->r[30]=0u+0x00000004u; // 80356A60
  c->r[28]=c->r[2]+0xFFFF9EE0u; // 80356A64
  c->r[25]=0u+0x00000003u; // 80356A68
  c->r[24]=0u+0x00000002u; // 80356A6C
  c->r[14]=0u+0x80460000u; // 80356A70
  c->r[26]=c->r[2]+0xFFFF9EE8u; // 80356A74
  c->r[27]=0u+0x00000001u; // 80356A78
L_80356A7C:;
  c->r[3]=rotl(c->r[16],0)&0x000000FFu; // 80356A7C
  c->r[4]=c->r[1]+0x00000008u; // 80356A80
  c->r[5]=0u+0x00000001u; // 80356A84
  c->lr=0x80356A8Cu; f_80357970(c); // 80356A88
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80356A8C
  if (crb(c,2)) { goto L_80356D88; } // 80356A90
  c->r[0]=R8(c->r[22]+0x0000001Au); // 80356A94
  c->r[17]=0u+0x00000000u; // 80356A98
  c->r[19]=c->r[19]+0x00000001u; // 80356A9C
  cmps(c,0,(int32_t)c->r[0],2); // 80356AA0
  if (crb(c,2)) { goto L_80356C6C; } // 80356AA4
  if (!crb(c,0)) { goto L_80356ABC; } // 80356AA8
  cmps(c,0,(int32_t)c->r[0],0); // 80356AAC
  if (crb(c,2)) { goto L_80356ACC; } // 80356AB0
  if (!crb(c,0)) { goto L_80356B74; } // 80356AB4
  goto L_80356D68; // 80356AB8
L_80356ABC:;
  cmps(c,0,(int32_t)c->r[0],4); // 80356ABC
  if (crb(c,2)) { goto L_80356D50; } // 80356AC0
  if (!crb(c,0)) { goto L_80356D68; } // 80356AC4
  goto L_80356CB8; // 80356AC8
L_80356ACC:;
  cmpu(c,0,c->r[16],0x00000001u); // 80356ACC
  if (!crb(c,2)) { goto L_80356AE8; } // 80356AD0
  c->r[3]=0u+0x00000002u; // 80356AD4
  c->lr=0x80356ADCu; f_8035543C(c); // 80356AD8
  W32(c->r[15]+c->r[23],c->r[3]); // 80356ADC
  W8(c->r[22]+0x00000014u,c->r[30]); // 80356AE0
  goto L_80356B1C; // 80356AE4
L_80356AE8:;
  cmpu(c,0,c->r[16],0x00000002u); // 80356AE8
  if (!crb(c,2)) { goto L_80356B04; } // 80356AEC
  c->r[3]=0u+0x00000003u; // 80356AF0
  c->lr=0x80356AF8u; f_8035543C(c); // 80356AF4
  W32(c->r[15]+c->r[23],c->r[3]); // 80356AF8
  W8(c->r[22]+0x00000014u,c->r[24]); // 80356AFC
  goto L_80356B1C; // 80356B00
L_80356B04:;
  cmpu(c,0,c->r[16],0x00000003u); // 80356B04
  if (!crb(c,2)) { goto L_80356D68; } // 80356B08
  c->r[3]=0u+0x00000001u; // 80356B0C
  c->lr=0x80356B14u; f_8035543C(c); // 80356B10
  W32(c->r[15]+c->r[23],c->r[3]); // 80356B14
  W8(c->r[22]+0x00000014u,c->r[25]); // 80356B18
L_80356B1C:;
  c->r[3]=R32(c->r[15]+c->r[23]); // 80356B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80356B20
  if (crb(c,2)) { goto L_80356B54; } // 80356B24
  W16(c->r[3]+0x00000002u,c->r[29]); // 80356B28
  c->r[0]=R8(c->r[22]+0x00000014u); // 80356B2C
  c->r[3]=R32(c->r[15]+c->r[23]); // 80356B30
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80356B34
  c->r[4]=c->r[26]+c->r[0]; // 80356B38
  c->r[0]=R16(c->r[4]+0xFFFFFFFEu); // 80356B3C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80356B40
  c->r[3]=R32(c->r[15]+c->r[23]); // 80356B44
  W16(c->r[3]+0x00000004u,c->r[29]); // 80356B48
  W8(c->r[22]+0x0000001Au,c->r[27]); // 80356B4C
  goto L_80356B64; // 80356B50
L_80356B54:;
  c->r[4]=c->r[14]+0xFFFFA048u; // 80356B54
  c->r[3]=0u+0x00070000u; // 80356B58
  c->lr=0x80356B60u; f_80357E1C(c); // 80356B5C
  W8(c->r[22]+0x0000001Au,c->r[24]); // 80356B60
L_80356B64:;
  c->r[0]=R8(c->r[22]+0x00000014u); // 80356B64
  c->r[3]=c->r[28]+c->r[0]; // 80356B68
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80356B6C
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 80356B70
L_80356B74:;
  c->r[6]=R32(c->r[15]+c->r[23]); // 80356B74
  c->r[5]=R8(c->r[1]+0x00000008u); // 80356B78
  c->r[4]=R16(c->r[6]+0x00000002u); // 80356B7C
  c->r[3]=c->r[6]+c->r[4]; // 80356B80
  c->r[0]=c->r[4]+0x00000001u; // 80356B84
  W8(c->r[3]+0x00000008u,c->r[5]); // 80356B88
  W16(c->r[6]+0x00000002u,c->r[0]); // 80356B8C
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 80356B90
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80356B94
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80356B98
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 80356B9C
  if (!crb(c,2)) { goto L_80356C60; } // 80356BA0
  c->r[0]=R8(c->r[22]+0x00000014u); // 80356BA4
  c->r[18]=R8(c->r[1]+0x00000008u); // 80356BA8
  cmpu(c,0,c->r[0],0x00000002u); // 80356BAC
  if (!crb(c,2)) { goto L_80356BF4; } // 80356BB0
  c->r[0]=R8(c->r[22]+0x00000017u); // 80356BB4
  c->r[4]=rotl(c->r[18],8)&0x00FFFF00u; // 80356BB8
  c->r[3]=R32(c->r[15]+c->r[23]); // 80356BBC
  c->r[0]=c->r[4]+c->r[0]; // 80356BC0
  c->r[18]=rotl(c->r[0],0)&0x0000FFFFu; // 80356BC4
  c->lr=0x80356BCCu; f_80373528(c); // 80356BC8
  cmps(c,0,(int32_t)c->r[3],0); // 80356BCC
  W32(c->r[15]+c->r[23],c->r[3]); // 80356BD0
  if (!crb(c,2)) { goto L_80356BF4; } // 80356BD4
  cmps(c,0,(int32_t)c->r[18],0); // 80356BD8
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 80356BDC
  if (!crb(c,2)) { goto L_80356BEC; } // 80356BE0
  W8(c->r[22]+0x0000001Au,c->r[29]); // 80356BE4
  goto L_80356D68; // 80356BE8
L_80356BEC:;
  W8(c->r[22]+0x0000001Au,c->r[30]); // 80356BEC
  goto L_80356D68; // 80356BF0
L_80356BF4:;
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 80356BF4
  c->r[3]=R32(c->r[15]+c->r[23]); // 80356BF8
  c->lr=0x80356C00u; f_80355694(c); // 80356BFC
  c->r[0]=R8(c->r[22]+0x00000014u); // 80356C00
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 80356C04
  c->r[3]=c->r[28]+c->r[0]; // 80356C08
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80356C0C
  c->r[3]=c->r[18]+c->r[0]; // 80356C10
  c->r[0]=c->r[3]+0x00000008u; // 80356C14
  cmpu(c,0,c->r[0],c->r[4]); // 80356C18
  if (!crb(c,1)) { goto L_80356C44; } // 80356C1C
  c->r[3]=R32(c->r[15]+c->r[23]); // 80356C20
  c->lr=0x80356C28u; f_80355524(c); // 80356C24
  W32(c->r[15]+c->r[23],c->r[29]); // 80356C28
  c->r[3]=0u+0x80460000u; // 80356C2C
  c->r[4]=c->r[3]+0xFFFFA084u; // 80356C30
  W8(c->r[22]+0x0000001Au,c->r[30]); // 80356C34
  c->r[3]=0u+0x00070000u; // 80356C38
  c->lr=0x80356C40u; f_80357E1C(c); // 80356C3C
  goto L_80356D68; // 80356C40
L_80356C44:;
  cmps(c,0,(int32_t)c->r[18],0); // 80356C44
  if (crb(c,2)) { goto L_80356C54; } // 80356C48
  W8(c->r[22]+0x0000001Au,c->r[25]); // 80356C4C
  goto L_80356D68; // 80356C50
L_80356C54:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 80356C54
  c->r[17]=0u+0x00000001u; // 80356C58
  goto L_80356D68; // 80356C5C
L_80356C60:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80356C60
  W8(c->r[22]+0x00000017u,c->r[0]); // 80356C64
  goto L_80356D68; // 80356C68
L_80356C6C:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 80356C6C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80356C70
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80356C74
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 80356C78
  if (!crb(c,2)) { goto L_80356CAC; } // 80356C7C
  c->r[0]=R8(c->r[22]+0x00000014u); // 80356C80
  c->r[3]=R8(c->r[1]+0x00000008u); // 80356C84
  cmpu(c,0,c->r[0],0x00000002u); // 80356C88
  if (!crb(c,2)) { goto L_80356CA0; } // 80356C8C
  c->r[0]=R8(c->r[22]+0x00000017u); // 80356C90
  c->r[3]=rotl(c->r[3],8)&0x00FFFF00u; // 80356C94
  c->r[0]=c->r[3]+c->r[0]; // 80356C98
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80356C9C
L_80356CA0:;
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 80356CA0
  W8(c->r[22]+0x0000001Au,c->r[30]); // 80356CA4
  goto L_80356D68; // 80356CA8
L_80356CAC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80356CAC
  W8(c->r[22]+0x00000017u,c->r[0]); // 80356CB0
  goto L_80356D68; // 80356CB4
L_80356CB8:;
  c->r[7]=R32(c->r[15]+c->r[23]); // 80356CB8
  c->r[3]=rotl(c->r[20],0)&0x000000FFu; // 80356CBC
  c->r[6]=R8(c->r[1]+0x00000008u); // 80356CC0
  c->r[5]=R16(c->r[7]+0x00000002u); // 80356CC4
  c->r[4]=c->r[7]+c->r[5]; // 80356CC8
  c->r[0]=c->r[5]+0x00000001u; // 80356CCC
  W8(c->r[4]+0x00000008u,c->r[6]); // 80356CD0
  W16(c->r[7]+0x00000002u,c->r[0]); // 80356CD4
  c->r[4]=R16(c->r[21]+0x0000000Cu); // 80356CD8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80356CDC
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 80356CE0
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80356CE4
  c->r[4]=R32(c->r[15]+c->r[23]); // 80356CE8
  c->r[0]=R16(c->r[4]+0x00000002u); // 80356CEC
  c->r[4]=c->r[4]+c->r[0]; // 80356CF0
  c->r[4]=c->r[4]+0x00000008u; // 80356CF4
  c->lr=0x80356CFCu; f_80357970(c); // 80356CF8
  c->r[4]=R32(c->r[15]+c->r[23]); // 80356CFC
  c->r[19]=c->r[19]+c->r[3]; // 80356D00
  c->r[0]=R16(c->r[4]+0x00000002u); // 80356D04
  c->r[0]=c->r[0]+c->r[3]; // 80356D08
  W16(c->r[4]+0x00000002u,c->r[0]); // 80356D0C
  c->r[0]=R16(c->r[21]+0x0000000Cu); // 80356D10
  c->r[3]=c->r[0]-c->r[3]; // 80356D14
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80356D18
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 80356D1C
  if (!crb(c,2)) { goto L_80356D68; } // 80356D20
  c->r[0]=R8(c->r[22]+0x00000014u); // 80356D24
  cmpu(c,0,c->r[0],0x00000002u); // 80356D28
  if (!crb(c,2)) { goto L_80356D44; } // 80356D2C
  c->lr=0x80356D34u; f_803736F8(c); // 80356D30
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80356D34
  if (!crb(c,2)) { goto L_80356D44; } // 80356D38
  W8(c->r[22]+0x0000001Au,c->r[29]); // 80356D3C
  goto L_80356D68; // 80356D40
L_80356D44:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 80356D44
  c->r[17]=0u+0x00000001u; // 80356D48
  goto L_80356D68; // 80356D4C
L_80356D50:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 80356D50
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80356D54
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80356D58
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 80356D5C
  if (!crb(c,2)) { goto L_80356D68; } // 80356D60
  W8(c->r[22]+0x0000001Au,c->r[29]); // 80356D64
L_80356D68:;
  cmps(c,0,(int32_t)c->r[17],0); // 80356D68
  if (crb(c,2)) { IRQCHK(c); goto L_80356A7C; } // 80356D6C
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 80356D70
  c->r[4]=0u+0x00000000u; // 80356D74
  c->r[5]=R32(c->r[15]+c->r[23]); // 80356D78
  c->lr=0x80356D80u; f_803556D8(c); // 80356D7C
  W32(c->r[15]+c->r[23],c->r[29]); // 80356D80
  IRQCHK(c); goto L_80356A7C; // 80356D84
L_80356D88:;
  c->r[3]=c->r[19]|c->r[19]; // 80356D88
L_80356D8C:;
  c->r[11]=c->r[1]+0x00000060u; // 80356D8C
  c->lr=0x80356D94u; f_803ADD54(c); // 80356D90
  c->r[0]=R32(c->r[1]+0x00000064u); // 80356D94
  c->lr=c->r[0]; // 80356D98
  c->r[1]=c->r[1]+0x00000060u; // 80356D9C
  return; // 80356DA0
}

// hcisu_h2_send_msg_now
void f_80356DA4(Ctx* __restrict c) {
  trace_call(0x80356DA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80356DA4
  c->r[0]=c->lr; // 80356DA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80356DAC
  c->r[11]=c->r[1]+0x00000020u; // 80356DB0
  c->lr=0x80356DB8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80356DB4
  c->r[5]=R16(c->r[4]+0x00000000u); // 80356DB8
  c->r[27]=c->r[4]|c->r[4]; // 80356DBC
  c->r[0]=R16(c->r[4]+0x00000004u); // 80356DC0
  cmpu(c,0,c->r[5],0x00002100u); // 80356DC4
  c->r[3]=c->r[4]+c->r[0]; // 80356DC8
  c->r[6]=c->r[3]+0x00000008u; // 80356DCC
  if (!crb(c,2)) { goto L_80356DDC; } // 80356DD0
  c->r[28]=0u+0x00000002u; // 80356DD4
  goto L_80356DF8; // 80356DD8
L_80356DDC:;
  cmpu(c,0,c->r[5],0x00002200u); // 80356DDC
  if (!crb(c,2)) { goto L_80356DEC; } // 80356DE0
  c->r[28]=0u+0x00000003u; // 80356DE4
  goto L_80356DF8; // 80356DE8
L_80356DEC:;
  cmpu(c,0,c->r[5],0x00002000u); // 80356DEC
  if (!crb(c,2)) { goto L_80356DF8; } // 80356DF0
  c->r[28]=0u+0x00000000u; // 80356DF4
L_80356DF8:;
  cmpu(c,0,c->r[5],0x00002100u); // 80356DF8
  if (!crb(c,2)) { goto L_80356F1C; } // 80356DFC
  c->r[3]=0u+0x80560000u; // 80356E00
  c->r[4]=R16(c->r[4]+0x00000002u); // 80356E04
  c->r[30]=c->r[3]+0xFFFFDA70u; // 80356E08
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 80356E0C
  cmpu(c,0,c->r[4],c->r[0]); // 80356E10
  if (!crb(c,1)) { goto L_80356F1C; } // 80356E14
  c->r[0]=R8(c->r[6]+0x00000001u); // 80356E18
  c->r[3]=R8(c->r[6]+0x00000000u); // 80356E1C
  c->r[6]=c->r[6]+0x00000002u; // 80356E20
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 80356E24
  c->r[0]=c->r[3]+c->r[0]; // 80356E28
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80356E2C
  c->r[0]=c->r[0]&0x0000CFFFu; cr0(c,c->r[0]); // 80356E30
  c->r[31]=c->r[0]|0x00001000u; // 80356E34
  c->r[29]=sraw(c,c->r[31],8); // 80356E38
  goto L_80356F0C; // 80356E3C
L_80356E40:;
  c->r[4]=c->r[6]|c->r[6]; // 80356E40
  c->r[3]=c->r[28]|c->r[28]; // 80356E44
  c->r[6]=c->r[27]|c->r[27]; // 80356E48
  c->lr=0x80356E50u; f_80357978(c); // 80356E4C
  c->r[3]=R16(c->r[27]+0x00000004u); // 80356E50
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 80356E54
  c->r[4]=R16(c->r[27]+0x00000002u); // 80356E58
  c->r[0]=c->r[3]+c->r[0]; // 80356E5C
  W16(c->r[27]+0x00000004u,c->r[0]); // 80356E60
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80356E64
  c->r[3]=c->r[27]+c->r[0]; // 80356E68
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 80356E6C
  c->r[6]=c->r[3]+0x0000000Au; // 80356E70
  c->r[0]=c->r[4]-c->r[0]; // 80356E74
  W16(c->r[27]+0x00000002u,c->r[0]); // 80356E78
  W8(c->r[3]+0x00000008u,c->r[31]); // 80356E7C
  W8(c->r[3]+0x00000009u,c->r[29]); // 80356E80
  c->r[3]=R16(c->r[27]+0x00000002u); // 80356E84
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 80356E88
  cmpu(c,0,c->r[3],c->r[0]); // 80356E8C
  if (!crb(c,1)) { goto L_80356EB0; } // 80356E90
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 80356E94
  W8(c->r[6]+0x00000000u,c->r[0]); // 80356E98
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 80356E9C
  c->r[0]=sraw(c,c->r[0],8); // 80356EA0
  W8(c->r[6]+0x00000001u,c->r[0]); // 80356EA4
  c->r[6]=c->r[6]+0x00000002u; // 80356EA8
  goto L_80356ECC; // 80356EAC
L_80356EB0:;
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 80356EB0
  W8(c->r[6]+0x00000000u,c->r[0]); // 80356EB4
  c->r[3]=R16(c->r[27]+0x00000002u); // 80356EB8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 80356EBC
  c->r[0]=sraw(c,c->r[0],8); // 80356EC0
  W8(c->r[6]+0x00000001u,c->r[0]); // 80356EC4
  c->r[6]=c->r[6]+0x00000002u; // 80356EC8
L_80356ECC:;
  c->r[3]=R16(c->r[27]+0x00000006u); // 80356ECC
  cmps(c,0,(int32_t)c->r[3],0); // 80356ED0
  if (crb(c,2)) { goto L_80356F0C; } // 80356ED4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80356ED8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80356EDC
  W16(c->r[27]+0x00000006u,c->r[3]); // 80356EE0
  if (!crb(c,2)) { goto L_80356F0C; } // 80356EE4
  c->r[0]=0u+0x00001900u; // 80356EE8
  c->r[3]=0u+0x80560000u; // 80356EEC
  W16(c->r[27]+0x00000000u,c->r[0]); // 80356EF0
  c->r[3]=c->r[3]+0xFFFFA1C0u; // 80356EF4
  c->r[5]=c->r[27]|c->r[27]; // 80356EF8
  c->r[4]=0u+0x00000000u; // 80356EFC
  c->r[3]=R8(c->r[3]+0x0000001Fu); // 80356F00
  c->lr=0x80356F08u; f_803556D8(c); // 80356F04
  goto L_80356F38; // 80356F08
L_80356F0C:;
  c->r[5]=R16(c->r[30]+0x0000007Eu); // 80356F0C
  c->r[0]=R16(c->r[27]+0x00000002u); // 80356F10
  cmpu(c,0,c->r[0],c->r[5]); // 80356F14
  if (crb(c,1)) { IRQCHK(c); goto L_80356E40; } // 80356F18
L_80356F1C:;
  c->r[5]=R16(c->r[27]+0x00000002u); // 80356F1C
  c->r[4]=c->r[6]|c->r[6]; // 80356F20
  c->r[3]=c->r[28]|c->r[28]; // 80356F24
  c->r[6]=c->r[27]|c->r[27]; // 80356F28
  c->lr=0x80356F30u; f_80357978(c); // 80356F2C
  c->r[3]=c->r[27]|c->r[27]; // 80356F30
  c->lr=0x80356F38u; f_80355524(c); // 80356F34
L_80356F38:;
  c->r[11]=c->r[1]+0x00000020u; // 80356F38
  c->lr=0x80356F40u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80356F3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80356F40
  c->lr=c->r[0]; // 80356F44
  c->r[1]=c->r[1]+0x00000020u; // 80356F48
  return; // 80356F4C
}

// hcisu_h2_init
void f_80356F50(Ctx* __restrict c) {
  trace_call(0x80356F50u);
  c->r[6]=0u+0x80560000u; // 80356F50
  c->r[0]=0u+0x00000000u; // 80356F54
  c->r[6]=c->r[6]+0xFFFFA1C0u; // 80356F58
  W8(c->r[6]+0x0000001Eu,c->r[0]); // 80356F5C
  W8(c->r[6]+0x0000001Au,c->r[0]); // 80356F60
  W8(c->r[6]+0x0000001Bu,c->r[0]); // 80356F64
  W8(c->r[6]+0x0000001Cu,c->r[0]); // 80356F68
  W8(c->r[6]+0x0000001Fu,c->r[3]); // 80356F6C
  W8(c->r[6]+0x00000020u,c->r[4]); // 80356F70
  W16(c->r[6]+0x00000012u,c->r[5]); // 80356F74
  return; // 80356F78
}

// hcisu_h2_open
void f_80356F7C(Ctx* __restrict c) {
  trace_call(0x80356F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80356F7C
  c->r[0]=c->lr; // 80356F80
  c->r[5]=0u+0x80560000u; // 80356F84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80356F88
  c->r[0]=0u+0x00000000u; // 80356F8C
  c->r[5]=c->r[5]+0xFFFFA1C0u; // 80356F90
  W8(c->r[1]+0x00000013u,c->r[0]); // 80356F94
  c->r[0]=0u+0x00000002u; // 80356F98
  c->r[4]=R8(c->r[5]+0x0000001Fu); // 80356F9C
  c->r[6]=R16(c->r[3]+0x00000000u); // 80356FA0
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 80356FA4
  c->r[6]=R16(c->r[3]+0x00000002u); // 80356FA8
  c->r[3]=c->r[1]+0x00000008u; // 80356FAC
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 80356FB0
  W16(c->r[1]+0x00000010u,c->r[4]); // 80356FB4
  W8(c->r[5]+0x0000001Eu,c->r[0]); // 80356FB8
  c->lr=0x80356FC0u; f_80357660(c); // 80356FBC
  c->r[4]=0u+0x80350000u; // 80356FC0
  c->r[3]=c->r[1]+0x00000008u; // 80356FC4
  c->r[4]=c->r[4]+0x000069E8u; // 80356FC8
  c->lr=0x80356FD0u; f_80357868(c); // 80356FCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80356FD0
  c->r[3]=0u+0x00000001u; // 80356FD4
  c->lr=c->r[0]; // 80356FD8
  c->r[1]=c->r[1]+0x00000020u; // 80356FDC
  return; // 80356FE0
}

// hcisu_h2_close
void f_80356FE4(Ctx* __restrict c) {
  trace_call(0x80356FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80356FE4
  c->r[0]=c->lr; // 80356FE8
  c->r[3]=0u+0x80560000u; // 80356FEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80356FF0
  c->r[0]=0u+0x00000000u; // 80356FF4
  c->r[3]=c->r[3]+0xFFFFA1C0u; // 80356FF8
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 80356FFC
  c->lr=0x80357004u; f_80357B8C(c); // 80357000
  c->lr=0x80357008u; f_80357C38(c); // 80357004
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357008
  c->lr=c->r[0]; // 8035700C
  c->r[1]=c->r[1]+0x00000010u; // 80357010
  return; // 80357014
}

// hcisu_h2_send
void f_80357018(Ctx* __restrict c) {
  trace_call(0x80357018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357018
  c->r[0]=c->lr; // 8035701C
  c->r[5]=0u+0x80560000u; // 80357020
  c->r[4]=c->r[3]|c->r[3]; // 80357024
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357028
  c->r[3]=c->r[5]+0xFFFFA1C0u; // 8035702C
  c->lr=0x80357034u; f_80356DA4(c); // 80357030
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357034
  c->r[3]=0u+0x00000001u; // 80357038
  c->lr=c->r[0]; // 8035703C
  c->r[1]=c->r[1]+0x00000010u; // 80357040
  return; // 80357044
}

// hcisu_h2_handle_event
void f_80357048(Ctx* __restrict c) {
  trace_call(0x80357048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357048
  c->r[0]=c->lr; // 8035704C
  c->r[4]=0u+0x80560000u; // 80357050
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357054
  c->r[4]=c->r[4]+0xFFFFA1C0u; // 80357058
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 8035705C
  c->r[3]=R16(c->r[4]+0x00000012u); // 80357060
  c->r[0]=c->r[0]-c->r[3]; // 80357064
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80357068
  c->lr=0x80357070u; f_80356A0C(c); // 8035706C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357070
  c->r[3]=0u+0x00000000u; // 80357074
  c->lr=c->r[0]; // 80357078
  c->r[1]=c->r[1]+0x00000010u; // 8035707C
  return; // 80357080
}

// uusb_CloseDeviceCB
void f_80357084(Ctx* __restrict c) {
  trace_call(0x80357084u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357084
  c->r[0]=c->lr; // 80357088
  c->r[4]=0u+0x80560000u; // 8035708C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80357090
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80357094
  c->r[31]=c->r[4]+0xFFFFA200u; // 80357098
  W32(c->r[1]+0x00000018u,c->r[30]); // 8035709C
  c->r[30]=0u+0x00000000u; // 803570A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803570A4
  c->r[29]=c->r[3]|c->r[3]; // 803570A8
  W32(c->r[4]+0xFFFFA200u,c->r[30]); // 803570AC
  W8(c->r[31]+0x00000010u,c->r[30]); // 803570B0
  W8(c->r[31]+0x00000011u,c->r[30]); // 803570B4
  W8(c->r[31]+0x00000012u,c->r[30]); // 803570B8
  W8(c->r[31]+0x00000013u,c->r[30]); // 803570BC
  W8(c->r[13]+0xFFFFEF60u,c->r[30]); // 803570C0
  c->lr=0x803570C8u; f_80385870(c); // 803570C4
  c->lr=0x803570CCu; f_80356970(c); // 803570C8
  c->r[0]=0u+0x00000005u; // 803570CC
  W8(c->r[31]+0x00000028u,c->r[30]); // 803570D0
  W8(c->r[31]+0x00000029u,c->r[0]); // 803570D4
  W8(c->r[13]+0xFFFFEF61u,c->r[30]); // 803570D8
  c->lr=0x803570E0u; f_8035694C(c); // 803570DC
  c->r[12]=R32(c->r[31]+0x00000020u); // 803570E0
  cmps(c,0,(int32_t)c->r[12],0); // 803570E4
  if (crb(c,2)) { goto L_803570FC; } // 803570E8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 803570EC
  c->r[3]=0u+0x00000004u; // 803570F0
  c->ctr=c->r[12]; // 803570F4
  if (true) { c->lr=0x803570FCu; dispatch(c,c->ctr); } // 803570F8
L_803570FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803570FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80357100
  c->r[30]=R32(c->r[1]+0x00000018u); // 80357104
  c->r[29]=R32(c->r[1]+0x00000014u); // 80357108
  c->lr=c->r[0]; // 8035710C
  c->r[1]=c->r[1]+0x00000020u; // 80357110
  return; // 80357114
}

// uusb_ReadIntrDataCB
void f_80357118(Ctx* __restrict c) {
  trace_call(0x80357118u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357118
  c->r[0]=c->lr; // 8035711C
  c->r[5]=0u+0x00000000u; // 80357120
  W32(c->r[1]+0x00000024u,c->r[0]); // 80357124
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80357128
  c->r[31]=0u+0x80560000u; // 8035712C
  c->r[31]=c->r[31]+0xFFFFA200u; // 80357130
  W32(c->r[1]+0x00000018u,c->r[30]); // 80357134
  c->r[30]=c->r[4]|c->r[4]; // 80357138
  W32(c->r[1]+0x00000014u,c->r[29]); // 8035713C
  c->r[29]=c->r[3]|c->r[3]; // 80357140
  c->r[0]=R8(c->r[31]+0x00000029u); // 80357144
  W8(c->r[31]+0x0000002Bu,c->r[5]); // 80357148
  cmpu(c,0,c->r[0],0x00000002u); // 8035714C
  if (crb(c,2)) { goto L_80357170; } // 80357150
  c->r[3]=c->r[30]|c->r[30]; // 80357154
  c->lr=0x8035715Cu; f_80355524(c); // 80357158
  c->r[3]=R8(c->r[31]+0x0000001Cu); // 8035715C
  c->lr=0x80357164u; f_803560A0(c); // 80357160
  c->r[0]=0u+0x000000FFu; // 80357164
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 80357168
  goto L_80357210; // 8035716C
L_80357170:;
  c->r[0]=0u+0x00000000u; // 80357170
  cmpu(c,0,c->r[4],c->r[0]); // 80357174
  if (crb(c,2)) { goto L_8035720C; } // 80357178
  cmps(c,0,(int32_t)c->r[3],0); // 8035717C
  if (crb(c,1)) { goto L_80357190; } // 80357180
  c->r[3]=c->r[30]|c->r[30]; // 80357184
  c->lr=0x8035718Cu; f_80355524(c); // 80357188
  goto L_8035720C; // 8035718C
L_80357190:;
  c->r[3]=0u+0x00000002u; // 80357190
  c->lr=0x80357198u; f_8035543C(c); // 80357194
  cmps(c,0,(int32_t)c->r[3],0); // 80357198
  c->r[31]=c->r[3]|c->r[3]; // 8035719C
  if (!crb(c,2)) { goto L_803571B0; } // 803571A0
  c->r[3]=c->r[30]|c->r[30]; // 803571A4
  c->lr=0x803571ACu; f_80355524(c); // 803571A8
  goto L_8035720C; // 803571AC
L_803571B0:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 803571B0
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 803571B4
  c->r[6]=0u+0x00001000u; // 803571B8
  W16(c->r[30]+0x00000002u,c->r[29]); // 803571BC
  c->r[5]=c->r[4]+c->r[0]; // 803571C0
  c->r[4]=c->r[30]|c->r[30]; // 803571C4
  c->r[0]=c->r[5]+0x00000008u; // 803571C8
  W16(c->r[30]+0x00000000u,c->r[6]); // 803571CC
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803571D0
  c->r[5]=c->r[5]+0x00000004u; // 803571D4
  c->lr=0x803571DCu; f_8000626C(c); // 803571D8
  c->r[5]=0u+0x80560000u; // 803571DC
  c->r[7]=0u+0x80350000u; // 803571E0
  c->r[5]=c->r[5]+0xFFFFA260u; // 803571E4
  c->r[3]=c->r[31]|c->r[31]; // 803571E8
  c->r[8]=c->r[5]+0x00001000u; // 803571EC
  c->r[7]=c->r[7]+0x00007D24u; // 803571F0
  c->r[4]=0u+0x00000000u; // 803571F4
  c->r[5]=0u+0x00000000u; // 803571F8
  c->r[6]=0u+0x00000000u; // 803571FC
  c->lr=0x80357204u; f_8031E5C0(c); // 80357200
  c->r[3]=c->r[30]|c->r[30]; // 80357204
  c->lr=0x8035720Cu; f_80355524(c); // 80357208
L_8035720C:;
  c->lr=0x80357210u; f_803573C8(c); // 8035720C
L_80357210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80357210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80357214
  c->r[30]=R32(c->r[1]+0x00000018u); // 80357218
  c->r[29]=R32(c->r[1]+0x00000014u); // 8035721C
  c->lr=c->r[0]; // 80357220
  c->r[1]=c->r[1]+0x00000020u; // 80357224
  return; // 80357228
}

// uusb_ReadBulkDataCB
void f_8035722C(Ctx* __restrict c) {
  trace_call(0x8035722Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035722C
  c->r[0]=c->lr; // 80357230
  W32(c->r[1]+0x00000024u,c->r[0]); // 80357234
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80357238
  W32(c->r[1]+0x00000018u,c->r[30]); // 8035723C
  c->r[30]=0u+0x80560000u; // 80357240
  c->r[30]=c->r[30]+0xFFFFA200u; // 80357244
  W32(c->r[1]+0x00000014u,c->r[29]); // 80357248
  c->r[29]=c->r[4]|c->r[4]; // 8035724C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80357250
  c->r[0]=R8(c->r[30]+0x00000029u); // 80357254
  cmpu(c,0,c->r[0],0x00000002u); // 80357258
  if (crb(c,2)) { goto L_8035727C; } // 8035725C
  c->r[3]=c->r[29]|c->r[29]; // 80357260
  c->lr=0x80357268u; f_80355524(c); // 80357264
  c->r[3]=R8(c->r[30]+0x0000001Du); // 80357268
  c->lr=0x80357270u; f_803560A0(c); // 8035726C
  c->r[0]=0u+0x000000FFu; // 80357270
  W8(c->r[30]+0x0000001Du,c->r[0]); // 80357274
  goto L_803573A8; // 80357278
L_8035727C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8035727C
  if (crb(c,1)) { goto L_80357290; } // 80357280
  c->r[3]=c->r[29]|c->r[29]; // 80357284
  c->lr=0x8035728Cu; f_80355524(c); // 80357288
  goto L_80357328; // 8035728C
L_80357290:;
  W16(c->r[4]+0x00000002u,c->r[3]); // 80357290
  c->r[3]=0u+0x00000003u; // 80357294
  c->lr=0x8035729Cu; f_8035543C(c); // 80357298
  cmps(c,0,(int32_t)c->r[3],0); // 8035729C
  c->r[28]=c->r[3]|c->r[3]; // 803572A0
  if (!crb(c,2)) { goto L_803572B4; } // 803572A4
  c->r[3]=c->r[29]|c->r[29]; // 803572A8
  c->lr=0x803572B0u; f_80355524(c); // 803572AC
  goto L_80357328; // 803572B0
L_803572B4:;
  c->r[5]=R16(c->r[29]+0x00000002u); // 803572B4
  c->r[4]=c->r[29]|c->r[29]; // 803572B8
  c->r[0]=R16(c->r[29]+0x00000004u); // 803572BC
  c->r[5]=c->r[5]+c->r[0]; // 803572C0
  c->r[0]=c->r[5]+0x00000008u; // 803572C4
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803572C8
  c->r[5]=c->r[5]+0x00000004u; // 803572CC
  c->lr=0x803572D4u; f_8000626C(c); // 803572D0
  c->r[3]=c->r[28]|c->r[28]; // 803572D4
  c->lr=0x803572DCu; f_80373528(c); // 803572D8
  c->r[0]=0u+0x00000000u; // 803572DC
  c->r[28]=c->r[3]|c->r[3]; // 803572E0
  cmpu(c,0,c->r[3],c->r[0]); // 803572E4
  if (crb(c,2)) { goto L_80357320; } // 803572E8
  c->lr=0x803572F0u; f_803736F8(c); // 803572EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803572F0
  if (crb(c,2)) { goto L_80357320; } // 803572F4
  c->r[5]=0u+0x80560000u; // 803572F8
  c->r[7]=0u+0x80350000u; // 803572FC
  c->r[5]=c->r[5]+0xFFFFB260u; // 80357300
  c->r[3]=c->r[28]|c->r[28]; // 80357304
  c->r[8]=c->r[5]+0x00001000u; // 80357308
  c->r[7]=c->r[7]+0x00007D24u; // 8035730C
  c->r[4]=0u+0x00000000u; // 80357310
  c->r[5]=0u+0x00000000u; // 80357314
  c->r[6]=0u+0x00000000u; // 80357318
  c->lr=0x80357320u; f_8031E5C0(c); // 8035731C
L_80357320:;
  c->r[3]=c->r[29]|c->r[29]; // 80357320
  c->lr=0x80357328u; f_80355524(c); // 80357324
L_80357328:;
  c->r[30]=0u+0x80560000u; // 80357328
  c->r[31]=c->r[30]+0xFFFFA200u; // 8035732C
L_80357330:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 80357330
  c->lr=0x80357338u; f_8035543C(c); // 80357334
  cmps(c,0,(int32_t)c->r[3],0); // 80357338
  c->r[28]=c->r[3]|c->r[3]; // 8035733C
  if (crb(c,2)) { IRQCHK(c); goto L_80357330; } // 80357340
  c->r[4]=0u+0x00001100u; // 80357344
  c->r[0]=c->r[3]+0x00000027u; // 80357348
  W16(c->r[3]+0x00000000u,c->r[4]); // 8035734C
  c->r[4]=0u+0x00000000u; // 80357350
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80357354
  c->r[0]=c->r[3]+0x00000008u; // 80357358
  W16(c->r[3]+0x00000002u,c->r[4]); // 8035735C
  c->r[0]=c->r[29]-c->r[0]; // 80357360
  W16(c->r[3]+0x00000004u,c->r[0]); // 80357364
  c->lr=0x8035736Cu; f_80355694(c); // 80357368
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 8035736C
  c->r[0]=R16(c->r[28]+0x00000004u); // 80357370
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 80357374
  c->r[7]=0u+0x80350000u; // 80357378
  c->r[3]=R32(c->r[30]+0xFFFFA200u); // 8035737C
  c->r[6]=c->r[29]|c->r[29]; // 80357380
  c->r[4]=R8(c->r[31]+0x00000011u); // 80357384
  c->r[8]=c->r[28]|c->r[28]; // 80357388
  c->r[5]=c->r[5]-c->r[0]; // 8035738C
  c->r[7]=c->r[7]+0x0000722Cu; // 80357390
  c->lr=0x80357398u; f_80386038(c); // 80357394
  cmps(c,0,(int32_t)c->r[3],0); // 80357398
  if (crb(c,2)) { goto L_803573A8; } // 8035739C
  c->r[3]=c->r[28]|c->r[28]; // 803573A0
  c->lr=0x803573A8u; f_80355524(c); // 803573A4
L_803573A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803573A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803573AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803573B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803573B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 803573B8
  c->lr=c->r[0]; // 803573BC
  c->r[1]=c->r[1]+0x00000020u; // 803573C0
  return; // 803573C4
}

// uusb_issue_intr_read
void f_803573C8(Ctx* __restrict c) {
  trace_call(0x803573C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803573C8
  c->r[0]=c->lr; // 803573CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803573D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803573D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803573D8
  c->r[30]=0u+0x80560000u; // 803573DC
  c->r[31]=c->r[30]+0xFFFFA200u; // 803573E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803573E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803573E8
L_803573EC:;
  c->r[3]=R8(c->r[31]+0x0000001Cu); // 803573EC
  c->lr=0x803573F4u; f_8035543C(c); // 803573F0
  cmps(c,0,(int32_t)c->r[3],0); // 803573F4
  c->r[29]=c->r[3]|c->r[3]; // 803573F8
  if (crb(c,2)) { IRQCHK(c); goto L_803573EC; } // 803573FC
  c->r[4]=0u+0x00001000u; // 80357400
  c->r[0]=c->r[3]+0x00000027u; // 80357404
  W16(c->r[3]+0x00000000u,c->r[4]); // 80357408
  c->r[4]=0u+0x00000000u; // 8035740C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80357410
  c->r[0]=c->r[3]+0x00000008u; // 80357414
  W16(c->r[3]+0x00000002u,c->r[4]); // 80357418
  c->r[0]=c->r[28]-c->r[0]; // 8035741C
  W16(c->r[3]+0x00000004u,c->r[0]); // 80357420
  c->lr=0x80357428u; f_80355694(c); // 80357424
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80357428
  c->r[0]=R16(c->r[29]+0x00000004u); // 8035742C
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 80357430
  c->r[7]=0u+0x80350000u; // 80357434
  c->r[3]=R32(c->r[30]+0xFFFFA200u); // 80357438
  c->r[6]=c->r[28]|c->r[28]; // 8035743C
  c->r[4]=R8(c->r[31]+0x00000012u); // 80357440
  c->r[8]=c->r[29]|c->r[29]; // 80357444
  c->r[5]=c->r[5]-c->r[0]; // 80357448
  c->r[7]=c->r[7]+0x00007118u; // 8035744C
  c->lr=0x80357454u; f_80385FC4(c); // 80357450
  cmps(c,0,(int32_t)c->r[3],0); // 80357454
  if (crb(c,2)) { goto L_80357464; } // 80357458
  c->r[3]=c->r[29]|c->r[29]; // 8035745C
  c->lr=0x80357464u; f_80355524(c); // 80357460
L_80357464:;
  c->r[3]=0u+0x80560000u; // 80357464
  c->r[0]=0u+0x00000001u; // 80357468
  c->r[3]=c->r[3]+0xFFFFA200u; // 8035746C
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 80357470
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80357474
  c->r[30]=R32(c->r[1]+0x00000018u); // 80357478
  c->r[29]=R32(c->r[1]+0x00000014u); // 8035747C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80357480
  c->r[0]=R32(c->r[1]+0x00000024u); // 80357484
  c->lr=c->r[0]; // 80357488
  c->r[1]=c->r[1]+0x00000020u; // 8035748C
  return; // 80357490
}

// uusb_WriteCtrlDataCB
void f_80357494(Ctx* __restrict c) {
  trace_call(0x80357494u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357494
  c->r[0]=c->lr; // 80357498
  cmps(c,0,(int32_t)c->r[4],0); // 8035749C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803574A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803574A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803574A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803574AC
  if (crb(c,2)) { goto L_803574D8; } // 803574B0
  c->r[3]=c->r[4]|c->r[4]; // 803574B4
  c->lr=0x803574BCu; f_80355524(c); // 803574B8
  c->lr=0x803574C0u; f_80356970(c); // 803574BC
  c->r[4]=0u+0x80560000u; // 803574C0
  c->r[4]=c->r[4]+0xFFFFA200u; // 803574C4
  c->r[3]=R8(c->r[4]+0x00000048u); // 803574C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803574CC
  W8(c->r[4]+0x00000048u,c->r[0]); // 803574D0
  c->lr=0x803574D8u; f_8035694C(c); // 803574D4
L_803574D8:;
  c->r[30]=0u+0x80560000u; // 803574D8
  c->r[31]=c->r[30]+0xFFFFA200u; // 803574DC
  c->r[0]=R8(c->r[31]+0x00000048u); // 803574E0
  cmpu(c,0,c->r[0],0x00000005u); // 803574E4
  if (!crb(c,0)) { goto L_80357564; } // 803574E8
  c->r[0]=R16(c->r[31]+0x00000044u); // 803574EC
  cmps(c,0,(int32_t)c->r[0],0); // 803574F0
  if (crb(c,2)) { goto L_80357564; } // 803574F4
  c->r[3]=c->r[31]+0x0000003Cu; // 803574F8
  c->lr=0x80357500u; f_80355BC0(c); // 803574FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80357500
  c->r[29]=c->r[3]|c->r[3]; // 80357504
  c->r[10]=0u+0x80350000u; // 80357508
  c->r[4]=0u+0x00000020u; // 8035750C
  c->r[0]=R16(c->r[3]+0x00000004u); // 80357510
  c->r[10]=c->r[10]+0x00007494u; // 80357514
  c->r[3]=R32(c->r[30]+0xFFFFA200u); // 80357518
  c->r[5]=0u+0x00000000u; // 8035751C
  c->r[6]=c->r[29]+c->r[0]; // 80357520
  c->r[8]=R16(c->r[29]+0x00000002u); // 80357524
  c->r[9]=c->r[6]+0x00000008u; // 80357528
  c->r[7]=0u+0x00000000u; // 8035752C
  c->r[6]=0u+0x00000000u; // 80357530
  c->lr=0x80357538u; f_803866C4(c); // 80357534
  cmps(c,0,(int32_t)c->r[3],0); // 80357538
  if (!crb(c,0)) { goto L_80357550; } // 8035753C
  c->r[4]=c->r[29]|c->r[29]; // 80357540
  c->r[3]=c->r[31]+0x0000003Cu; // 80357544
  c->lr=0x8035754Cu; f_80355A80(c); // 80357548
  goto L_80357564; // 8035754C
L_80357550:;
  c->lr=0x80357554u; f_80356970(c); // 80357550
  c->r[3]=R8(c->r[31]+0x00000048u); // 80357554
  c->r[0]=c->r[3]+0x00000001u; // 80357558
  W8(c->r[31]+0x00000048u,c->r[0]); // 8035755C
  c->lr=0x80357564u; f_8035694C(c); // 80357560
L_80357564:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80357564
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80357568
  c->r[30]=R32(c->r[1]+0x00000018u); // 8035756C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80357570
  c->lr=c->r[0]; // 80357574
  c->r[1]=c->r[1]+0x00000020u; // 80357578
  return; // 8035757C
}

// uusb_WriteBulkDataCB
void f_80357580(Ctx* __restrict c) {
  trace_call(0x80357580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357580
  c->r[0]=c->lr; // 80357584
  cmps(c,0,(int32_t)c->r[4],0); // 80357588
  W32(c->r[1]+0x00000024u,c->r[0]); // 8035758C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80357590
  W32(c->r[1]+0x00000018u,c->r[30]); // 80357594
  W32(c->r[1]+0x00000014u,c->r[29]); // 80357598
  if (crb(c,2)) { goto L_803575C4; } // 8035759C
  c->r[3]=c->r[4]|c->r[4]; // 803575A0
  c->lr=0x803575A8u; f_80355524(c); // 803575A4
  c->lr=0x803575ACu; f_80356970(c); // 803575A8
  c->r[4]=0u+0x80560000u; // 803575AC
  c->r[4]=c->r[4]+0xFFFFA200u; // 803575B0
  c->r[3]=R8(c->r[4]+0x00000038u); // 803575B4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803575B8
  W8(c->r[4]+0x00000038u,c->r[0]); // 803575BC
  c->lr=0x803575C4u; f_8035694C(c); // 803575C0
L_803575C4:;
  c->r[30]=0u+0x80560000u; // 803575C4
  c->r[31]=c->r[30]+0xFFFFA200u; // 803575C8
  c->r[0]=R8(c->r[31]+0x00000038u); // 803575CC
  cmpu(c,0,c->r[0],0x00000005u); // 803575D0
  if (!crb(c,0)) { goto L_80357644; } // 803575D4
  c->r[0]=R16(c->r[31]+0x00000034u); // 803575D8
  cmps(c,0,(int32_t)c->r[0],0); // 803575DC
  if (crb(c,2)) { goto L_80357644; } // 803575E0
  c->r[3]=c->r[31]+0x0000002Cu; // 803575E4
  c->lr=0x803575ECu; f_80355BC0(c); // 803575E8
  c->r[0]=R16(c->r[3]+0x00000004u); // 803575EC
  c->r[29]=c->r[3]|c->r[3]; // 803575F0
  c->r[7]=0u+0x80350000u; // 803575F4
  c->r[3]=R32(c->r[30]+0xFFFFA200u); // 803575F8
  c->r[6]=c->r[29]+c->r[0]; // 803575FC
  c->r[4]=R8(c->r[31]+0x00000010u); // 80357600
  c->r[5]=R16(c->r[29]+0x00000002u); // 80357604
  c->r[8]=c->r[29]|c->r[29]; // 80357608
  c->r[7]=c->r[7]+0x00007580u; // 8035760C
  c->r[6]=c->r[6]+0x00000008u; // 80357610
  c->lr=0x80357618u; f_803860AC(c); // 80357614
  cmps(c,0,(int32_t)c->r[3],0); // 80357618
  if (!crb(c,0)) { goto L_80357630; } // 8035761C
  c->r[4]=c->r[29]|c->r[29]; // 80357620
  c->r[3]=c->r[31]+0x0000002Cu; // 80357624
  c->lr=0x8035762Cu; f_80355A80(c); // 80357628
  goto L_80357644; // 8035762C
L_80357630:;
  c->lr=0x80357634u; f_80356970(c); // 80357630
  c->r[3]=R8(c->r[31]+0x00000038u); // 80357634
  c->r[0]=c->r[3]+0x00000001u; // 80357638
  W8(c->r[31]+0x00000038u,c->r[0]); // 8035763C
  c->lr=0x80357644u; f_8035694C(c); // 80357640
L_80357644:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80357644
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80357648
  c->r[30]=R32(c->r[1]+0x00000018u); // 8035764C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80357650
  c->lr=c->r[0]; // 80357654
  c->r[1]=c->r[1]+0x00000020u; // 80357658
  return; // 8035765C
}

// UUSB_Register
void f_80357660(Ctx* __restrict c) {
  trace_call(0x80357660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357660
  c->r[0]=c->lr; // 80357664
  c->r[4]=0u+0x00000000u; // 80357668
  c->r[5]=0u+0x0000004Cu; // 8035766C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357670
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80357674
  c->r[31]=c->r[3]|c->r[3]; // 80357678
  W32(c->r[1]+0x00000008u,c->r[30]); // 8035767C
  c->r[30]=0u+0x80560000u; // 80357680
  c->r[3]=c->r[30]+0xFFFFA200u; // 80357684
  c->lr=0x8035768Cu; f_80006370(c); // 80357688
  c->lr=0x80357690u; f_80356970(c); // 8035768C
  c->r[30]=c->r[30]+0xFFFFA200u; // 80357690
  c->r[0]=0u+0x00000005u; // 80357694
  W8(c->r[30]+0x00000029u,c->r[0]); // 80357698
  c->lr=0x803576A0u; f_8035694C(c); // 8035769C
  c->r[0]=R8(c->r[13]+0xFFFFEF61u); // 803576A0
  cmps(c,0,(int32_t)c->r[0],0); // 803576A4
  if (!crb(c,2)) { goto L_803576BC; } // 803576A8
  c->r[3]=0u+0x00000000u; // 803576AC
  c->r[0]=0u+0x00000001u; // 803576B0
  W8(c->r[30]+0x00000028u,c->r[3]); // 803576B4
  W8(c->r[13]+0xFFFFEF61u,c->r[0]); // 803576B8
L_803576BC:;
  c->lr=0x803576C0u; f_8034D108(c); // 803576BC
  cmps(c,0,(int32_t)c->r[3],0); // 803576C0
  if (!crb(c,2)) { goto L_80357850; } // 803576C4
  c->lr=0x803576CCu; f_80385778(c); // 803576C8
  cmps(c,0,(int32_t)c->r[3],0); // 803576CC
  if (!crb(c,2)) { goto L_80357850; } // 803576D0
  c->r[0]=R8(c->r[13]+0xFFFFEF6Cu); // 803576D4
  c->r[4]=0u+0x80560000u; // 803576D8
  c->r[4]=c->r[4]+0xFFFFA200u; // 803576DC
  cmpu(c,0,c->r[0],0x00000001u); // 803576E0
  W32(c->r[4]+0x00000024u,c->r[31]); // 803576E4
  if (!crb(c,2)) { goto L_80357700; } // 803576E8
  c->r[3]=R32(c->r[13]+0xFFFFEF70u); // 803576EC
  c->r[0]=R32(c->r[13]+0xFFFFEF74u); // 803576F0
  W32(c->r[4]+0x00000014u,c->r[3]); // 803576F4
  W32(c->r[4]+0x00000018u,c->r[0]); // 803576F8
  goto L_80357710; // 803576FC
L_80357700:;
  c->r[3]=0u+0x0000057Eu; // 80357700
  c->r[0]=0u+0x00000305u; // 80357704
  W32(c->r[4]+0x00000014u,c->r[3]); // 80357708
  W32(c->r[4]+0x00000018u,c->r[0]); // 8035770C
L_80357710:;
  c->r[0]=R32(c->r[13]+0xFFFFEF68u); // 80357710
  c->r[6]=0u+0x80560000u; // 80357714
  c->r[6]=c->r[6]+0xFFFFA200u; // 80357718
  c->r[3]=0u+0x00000000u; // 8035771C
  cmpu(c,0,c->r[0],0x00000001u); // 80357720
  W8(c->r[6]+0x00000010u,c->r[3]); // 80357724
  c->r[5]=R32(c->r[6]+0x00000018u); // 80357728
  W8(c->r[6]+0x00000011u,c->r[3]); // 8035772C
  c->r[0]=R32(c->r[6]+0x00000014u); // 80357730
  W8(c->r[6]+0x00000012u,c->r[3]); // 80357734
  W8(c->r[6]+0x00000013u,c->r[3]); // 80357738
  if (!crb(c,2)) { goto L_80357784; } // 8035773C
  c->r[3]=R32(c->r[13]+0xFFFFEF64u); // 80357740
  cmps(c,0,(int32_t)c->r[3],0); // 80357744
  if (!crb(c,2)) { goto L_80357764; } // 80357748
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8035774C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 80357750
  c->r[3]=c->r[13]+0xFFFFDC40u; // 80357754
  c->lr=0x8035775Cu; f_80385A20(c); // 80357758
  c->r[30]=c->r[3]|c->r[3]; // 8035775C
  goto L_80357798; // 80357760
L_80357764:;
  cmpu(c,0,c->r[3],0x00000001u); // 80357764
  if (!crb(c,2)) { goto L_80357798; } // 80357768
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8035776C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 80357770
  c->r[3]=c->r[13]+0xFFFFDC44u; // 80357774
  c->lr=0x8035777Cu; f_80385A20(c); // 80357778
  c->r[30]=c->r[3]|c->r[3]; // 8035777C
  goto L_80357798; // 80357780
L_80357784:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80357784
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 80357788
  c->r[3]=c->r[13]+0xFFFFDC44u; // 8035778C
  c->lr=0x80357794u; f_80385A20(c); // 80357790
  c->r[30]=c->r[3]|c->r[3]; // 80357794
L_80357798:;
  cmps(c,0,(int32_t)c->r[30],0); // 80357798
  if (crb(c,0)) { goto L_803577A4; } // 8035779C
  W32(c->r[13]+0xFFFFDC3Cu,c->r[30]); // 803577A0
L_803577A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803577A4
  if (crb(c,0)) { goto L_80357850; } // 803577A8
  c->r[30]=0u+0x80560000u; // 803577AC
  c->r[3]=0u+0x00000002u; // 803577B0
  c->r[30]=c->r[30]+0xFFFFA200u; // 803577B4
  c->r[4]=0u+0x00000082u; // 803577B8
  c->r[0]=0u+0x00000081u; // 803577BC
  c->r[31]=0u+0x00000000u; // 803577C0
  W8(c->r[30]+0x00000010u,c->r[3]); // 803577C4
  c->r[3]=c->r[30]+0x0000002Cu; // 803577C8
  W8(c->r[30]+0x00000011u,c->r[4]); // 803577CC
  W8(c->r[30]+0x00000012u,c->r[0]); // 803577D0
  W8(c->r[30]+0x00000013u,c->r[31]); // 803577D4
  c->lr=0x803577DCu; f_80355288(c); // 803577D8
  W8(c->r[30]+0x00000038u,c->r[31]); // 803577DC
  c->r[3]=c->r[30]+0x0000003Cu; // 803577E0
  c->lr=0x803577E8u; f_80355288(c); // 803577E4
  W8(c->r[30]+0x00000048u,c->r[31]); // 803577E8
  c->r[3]=0u+0x00000294u; // 803577EC
  c->r[4]=0u+0x0000002Du; // 803577F0
  c->r[5]=0u+0x00000001u; // 803577F4
  c->r[6]=0u+0x00000000u; // 803577F8
  c->lr=0x80357800u; f_80355D58(c); // 803577FC
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 80357800
  c->r[3]=0u+0x00000708u; // 80357804
  c->r[4]=0u+0x0000001Eu; // 80357808
  c->r[5]=0u+0x00000001u; // 8035780C
  c->r[6]=0u+0x00000000u; // 80357810
  c->lr=0x80357818u; f_80355D58(c); // 80357814
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 80357818
  W8(c->r[30]+0x0000001Du,c->r[3]); // 8035781C
  cmpu(c,0,c->r[0],0x000000FFu); // 80357820
  if (crb(c,2)) { goto L_80357850; } // 80357824
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80357828
  cmpu(c,0,c->r[0],0x000000FFu); // 8035782C
  if (!crb(c,2)) { goto L_80357838; } // 80357830
  goto L_80357850; // 80357834
L_80357838:;
  c->lr=0x8035783Cu; f_80356970(c); // 80357838
  c->r[0]=0u+0x00000004u; // 8035783C
  W8(c->r[30]+0x00000029u,c->r[0]); // 80357840
  c->lr=0x80357848u; f_8035694C(c); // 80357844
  c->r[0]=0u+0x00000001u; // 80357848
  W32(c->r[13]+0xFFFFDC38u,c->r[0]); // 8035784C
L_80357850:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357850
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80357854
  c->r[30]=R32(c->r[1]+0x00000008u); // 80357858
  c->lr=c->r[0]; // 8035785C
  c->r[1]=c->r[1]+0x00000010u; // 80357860
  return; // 80357864
}

// UUSB_Open
void f_80357868(Ctx* __restrict c) {
  trace_call(0x80357868u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357868
  c->r[0]=c->lr; // 8035786C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80357870
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80357874
  W32(c->r[1]+0x00000018u,c->r[30]); // 80357878
  c->r[30]=0u+0x80560000u; // 8035787C
  c->r[31]=c->r[30]+0xFFFFA200u; // 80357880
  W32(c->r[1]+0x00000014u,c->r[29]); // 80357884
  W32(c->r[1]+0x00000010u,c->r[28]); // 80357888
  c->r[28]=c->r[4]|c->r[4]; // 8035788C
  c->r[0]=R8(c->r[31]+0x00000029u); // 80357890
  cmpu(c,0,c->r[0],0x00000004u); // 80357894
  if (!crb(c,2)) { goto L_80357950; } // 80357898
  c->r[0]=R8(c->r[31]+0x0000001Cu); // 8035789C
  cmpu(c,0,c->r[0],0x000000FFu); // 803578A0
  if (crb(c,2)) { goto L_80357950; } // 803578A4
  c->r[0]=R8(c->r[31]+0x0000001Du); // 803578A8
  cmpu(c,0,c->r[0],0x000000FFu); // 803578AC
  if (!crb(c,2)) { goto L_803578B8; } // 803578B0
  goto L_80357950; // 803578B4
L_803578B8:;
  c->lr=0x803578BCu; f_80356970(c); // 803578B8
  c->r[0]=0u+0x00000002u; // 803578BC
  W32(c->r[31]+0x00000020u,c->r[28]); // 803578C0
  W8(c->r[31]+0x00000029u,c->r[0]); // 803578C4
  c->lr=0x803578CCu; f_8035694C(c); // 803578C8
  c->lr=0x803578D0u; f_803573C8(c); // 803578CC
L_803578D0:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 803578D0
  c->lr=0x803578D8u; f_8035543C(c); // 803578D4
  cmps(c,0,(int32_t)c->r[3],0); // 803578D8
  c->r[28]=c->r[3]|c->r[3]; // 803578DC
  if (crb(c,2)) { IRQCHK(c); goto L_803578D0; } // 803578E0
  c->r[4]=0u+0x00001100u; // 803578E4
  c->r[0]=c->r[3]+0x00000027u; // 803578E8
  W16(c->r[3]+0x00000000u,c->r[4]); // 803578EC
  c->r[4]=0u+0x00000000u; // 803578F0
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803578F4
  c->r[0]=c->r[3]+0x00000008u; // 803578F8
  W16(c->r[3]+0x00000002u,c->r[4]); // 803578FC
  c->r[0]=c->r[29]-c->r[0]; // 80357900
  W16(c->r[3]+0x00000004u,c->r[0]); // 80357904
  c->lr=0x8035790Cu; f_80355694(c); // 80357908
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 8035790C
  c->r[0]=R16(c->r[28]+0x00000004u); // 80357910
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 80357914
  c->r[7]=0u+0x80350000u; // 80357918
  c->r[3]=R32(c->r[30]+0xFFFFA200u); // 8035791C
  c->r[6]=c->r[29]|c->r[29]; // 80357920
  c->r[4]=R8(c->r[31]+0x00000011u); // 80357924
  c->r[8]=c->r[28]|c->r[28]; // 80357928
  c->r[5]=c->r[5]-c->r[0]; // 8035792C
  c->r[7]=c->r[7]+0x0000722Cu; // 80357930
  c->lr=0x80357938u; f_80386038(c); // 80357934
  cmps(c,0,(int32_t)c->r[3],0); // 80357938
  if (crb(c,2)) { goto L_80357948; } // 8035793C
  c->r[3]=c->r[28]|c->r[28]; // 80357940
  c->lr=0x80357948u; f_80355524(c); // 80357944
L_80357948:;
  c->r[0]=0u+0x00000000u; // 80357948
  W32(c->r[13]+0xFFFFDC38u,c->r[0]); // 8035794C
L_80357950:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80357950
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80357954
  c->r[30]=R32(c->r[1]+0x00000018u); // 80357958
  c->r[29]=R32(c->r[1]+0x00000014u); // 8035795C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80357960
  c->lr=c->r[0]; // 80357964
  c->r[1]=c->r[1]+0x00000020u; // 80357968
  return; // 8035796C
}

// UUSB_Read
void f_80357970(Ctx* __restrict c) {
  trace_call(0x80357970u);
  c->r[3]=0u+0x00000000u; // 80357970
  return; // 80357974
}

// UUSB_Write
void f_80357978(Ctx* __restrict c) {
  trace_call(0x80357978u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357978
  c->r[0]=c->lr; // 8035797C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80357980
  c->r[11]=c->r[1]+0x00000030u; // 80357984
  c->lr=0x8035798Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80357988
  c->r[29]=0u+0x80560000u; // 8035798C
  c->r[25]=c->r[4]|c->r[4]; // 80357990
  c->r[30]=c->r[29]+0xFFFFA200u; // 80357994
  c->r[31]=c->r[5]|c->r[5]; // 80357998
  c->r[0]=R8(c->r[30]+0x00000029u); // 8035799C
  c->r[28]=0u+0x00000000u; // 803579A0
  cmpu(c,0,c->r[0],0x00000002u); // 803579A4
  if (crb(c,2)) { goto L_803579B4; } // 803579A8
  c->r[3]=0u+0x00000000u; // 803579AC
  goto L_80357B74; // 803579B0
L_803579B4:;
  cmps(c,0,(int32_t)c->r[3],2); // 803579B4
  if (crb(c,2)) { goto L_80357AA8; } // 803579B8
  if (!crb(c,0)) { goto L_80357B70; } // 803579BC
  cmps(c,0,(int32_t)c->r[3],0); // 803579C0
  if (crb(c,2)) { goto L_803579D0; } // 803579C4
  goto L_80357B70; // 803579C8
  goto L_80357B70; // 803579CC
L_803579D0:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 803579D0
  c->lr=0x803579D8u; f_8035543C(c); // 803579D4
  cmps(c,0,(int32_t)c->r[3],0); // 803579D8
  c->r[26]=c->r[3]|c->r[3]; // 803579DC
  if (!crb(c,2)) { goto L_803579EC; } // 803579E0
  c->r[3]=0u+0x00000000u; // 803579E4
  goto L_80357B74; // 803579E8
L_803579EC:;
  c->r[0]=c->r[3]+0x00000027u; // 803579EC
  W16(c->r[3]+0x00000002u,c->r[31]); // 803579F0
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803579F4
  c->r[4]=c->r[25]|c->r[25]; // 803579F8
  c->r[0]=c->r[3]+0x00000008u; // 803579FC
  c->r[5]=c->r[31]|c->r[31]; // 80357A00
  c->r[0]=c->r[27]-c->r[0]; // 80357A04
  W16(c->r[3]+0x00000004u,c->r[0]); // 80357A08
  c->r[3]=c->r[27]|c->r[27]; // 80357A0C
  c->lr=0x80357A14u; f_8000626C(c); // 80357A10
  c->r[0]=R8(c->r[30]+0x00000048u); // 80357A14
  cmpu(c,0,c->r[0],0x00000005u); // 80357A18
  if (!crb(c,0)) { goto L_80357A60; } // 80357A1C
  c->r[0]=R16(c->r[30]+0x00000044u); // 80357A20
  cmps(c,0,(int32_t)c->r[0],0); // 80357A24
  if (!crb(c,2)) { goto L_80357A60; } // 80357A28
  W32(c->r[1]+0x00000008u,c->r[26]); // 80357A2C
  c->r[10]=0u+0x80350000u; // 80357A30
  c->r[8]=c->r[31]|c->r[31]; // 80357A34
  c->r[9]=c->r[27]|c->r[27]; // 80357A38
  c->r[3]=R32(c->r[29]+0xFFFFA200u); // 80357A3C
  c->r[10]=c->r[10]+0x00007494u; // 80357A40
  c->r[4]=0u+0x00000020u; // 80357A44
  c->r[5]=0u+0x00000000u; // 80357A48
  c->r[6]=0u+0x00000000u; // 80357A4C
  c->r[7]=0u+0x00000000u; // 80357A50
  c->lr=0x80357A58u; f_803866C4(c); // 80357A54
  c->r[28]=c->r[3]|c->r[3]; // 80357A58
  goto L_80357A7C; // 80357A5C
L_80357A60:;
  c->r[3]=0u+0x80560000u; // 80357A60
  c->r[4]=c->r[26]|c->r[26]; // 80357A64
  c->r[3]=c->r[3]+0xFFFFA200u; // 80357A68
  c->r[3]=c->r[3]+0x0000003Cu; // 80357A6C
  c->lr=0x80357A74u; f_80355944(c); // 80357A70
  c->r[3]=0u+0x00000000u; // 80357A74
  goto L_80357B74; // 80357A78
L_80357A7C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80357A7C
  if (crb(c,2)) { goto L_80357A90; } // 80357A80
  c->r[3]=c->r[26]|c->r[26]; // 80357A84
  c->lr=0x80357A8Cu; f_80355524(c); // 80357A88
  goto L_80357B70; // 80357A8C
L_80357A90:;
  c->lr=0x80357A94u; f_80356970(c); // 80357A90
  c->r[3]=R8(c->r[30]+0x00000048u); // 80357A94
  c->r[0]=c->r[3]+0x00000001u; // 80357A98
  W8(c->r[30]+0x00000048u,c->r[0]); // 80357A9C
  c->lr=0x80357AA4u; f_8035694C(c); // 80357AA0
  goto L_80357B70; // 80357AA4
L_80357AA8:;
  c->r[3]=R8(c->r[30]+0x0000001Du); // 80357AA8
  c->lr=0x80357AB0u; f_8035543C(c); // 80357AAC
  cmps(c,0,(int32_t)c->r[3],0); // 80357AB0
  c->r[27]=c->r[3]|c->r[3]; // 80357AB4
  if (!crb(c,2)) { goto L_80357AC4; } // 80357AB8
  c->r[3]=0u+0x00000000u; // 80357ABC
  goto L_80357B74; // 80357AC0
L_80357AC4:;
  c->r[0]=c->r[3]+0x00000027u; // 80357AC4
  W16(c->r[3]+0x00000002u,c->r[31]); // 80357AC8
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80357ACC
  c->r[4]=c->r[25]|c->r[25]; // 80357AD0
  c->r[0]=c->r[3]+0x00000008u; // 80357AD4
  c->r[5]=c->r[31]|c->r[31]; // 80357AD8
  c->r[0]=c->r[28]-c->r[0]; // 80357ADC
  W16(c->r[3]+0x00000004u,c->r[0]); // 80357AE0
  c->r[3]=c->r[28]|c->r[28]; // 80357AE4
  c->lr=0x80357AECu; f_8000626C(c); // 80357AE8
  c->r[0]=R8(c->r[30]+0x00000038u); // 80357AEC
  cmpu(c,0,c->r[0],0x00000005u); // 80357AF0
  if (!crb(c,0)) { goto L_80357B2C; } // 80357AF4
  c->r[0]=R16(c->r[30]+0x00000034u); // 80357AF8
  cmps(c,0,(int32_t)c->r[0],0); // 80357AFC
  if (!crb(c,2)) { goto L_80357B2C; } // 80357B00
  c->r[7]=0u+0x80350000u; // 80357B04
  c->r[3]=R32(c->r[29]+0xFFFFA200u); // 80357B08
  c->r[4]=R8(c->r[30]+0x00000010u); // 80357B0C
  c->r[5]=c->r[31]|c->r[31]; // 80357B10
  c->r[6]=c->r[28]|c->r[28]; // 80357B14
  c->r[8]=c->r[27]|c->r[27]; // 80357B18
  c->r[7]=c->r[7]+0x00007580u; // 80357B1C
  c->lr=0x80357B24u; f_803860AC(c); // 80357B20
  c->r[28]=c->r[3]|c->r[3]; // 80357B24
  goto L_80357B48; // 80357B28
L_80357B2C:;
  c->r[3]=0u+0x80560000u; // 80357B2C
  c->r[4]=c->r[27]|c->r[27]; // 80357B30
  c->r[3]=c->r[3]+0xFFFFA200u; // 80357B34
  c->r[3]=c->r[3]+0x0000002Cu; // 80357B38
  c->lr=0x80357B40u; f_80355944(c); // 80357B3C
  c->r[3]=0u+0x00000000u; // 80357B40
  goto L_80357B74; // 80357B44
L_80357B48:;
  cmps(c,0,(int32_t)c->r[3],0); // 80357B48
  if (crb(c,2)) { goto L_80357B5C; } // 80357B4C
  c->r[3]=c->r[27]|c->r[27]; // 80357B50
  c->lr=0x80357B58u; f_80355524(c); // 80357B54
  goto L_80357B70; // 80357B58
L_80357B5C:;
  c->lr=0x80357B60u; f_80356970(c); // 80357B5C
  c->r[3]=R8(c->r[30]+0x00000038u); // 80357B60
  c->r[0]=c->r[3]+0x00000001u; // 80357B64
  W8(c->r[30]+0x00000038u,c->r[0]); // 80357B68
  c->lr=0x80357B70u; f_8035694C(c); // 80357B6C
L_80357B70:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 80357B70
L_80357B74:;
  c->r[11]=c->r[1]+0x00000030u; // 80357B74
  c->lr=0x80357B7Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80357B78
  c->r[0]=R32(c->r[1]+0x00000034u); // 80357B7C
  c->lr=c->r[0]; // 80357B80
  c->r[1]=c->r[1]+0x00000030u; // 80357B84
  return; // 80357B88
}

// UUSB_Close
void f_80357B8C(Ctx* __restrict c) {
  trace_call(0x80357B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357B8C
  c->r[0]=c->lr; // 80357B90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357B94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80357B98
  c->lr=0x80357BA0u; f_80356970(c); // 80357B9C
  c->r[3]=0u+0x80560000u; // 80357BA0
  c->r[0]=0u+0x00000000u; // 80357BA4
  c->r[31]=c->r[3]+0xFFFFA200u; // 80357BA8
  W8(c->r[31]+0x00000029u,c->r[0]); // 80357BAC
  c->lr=0x80357BB4u; f_8035694C(c); // 80357BB0
  c->r[0]=R16(c->r[31]+0x00000034u); // 80357BB4
  cmps(c,0,(int32_t)c->r[0],0); // 80357BB8
  if (crb(c,2)) { goto L_80357BDC; } // 80357BBC
  goto L_80357BD0; // 80357BC0
L_80357BC4:;
  c->r[3]=c->r[31]+0x0000002Cu; // 80357BC4
  c->lr=0x80357BCCu; f_80355BC0(c); // 80357BC8
  c->lr=0x80357BD0u; f_80355524(c); // 80357BCC
L_80357BD0:;
  c->r[0]=R16(c->r[31]+0x00000034u); // 80357BD0
  cmps(c,0,(int32_t)c->r[0],0); // 80357BD4
  if (!crb(c,2)) { IRQCHK(c); goto L_80357BC4; } // 80357BD8
L_80357BDC:;
  c->r[3]=0u+0x80560000u; // 80357BDC
  c->r[31]=c->r[3]+0xFFFFA200u; // 80357BE0
  c->r[0]=R16(c->r[31]+0x00000044u); // 80357BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80357BE8
  if (crb(c,2)) { goto L_80357C0C; } // 80357BEC
  goto L_80357C00; // 80357BF0
L_80357BF4:;
  c->r[3]=c->r[31]+0x0000003Cu; // 80357BF4
  c->lr=0x80357BFCu; f_80355BC0(c); // 80357BF8
  c->lr=0x80357C00u; f_80355524(c); // 80357BFC
L_80357C00:;
  c->r[0]=R16(c->r[31]+0x00000044u); // 80357C00
  cmps(c,0,(int32_t)c->r[0],0); // 80357C04
  if (!crb(c,2)) { IRQCHK(c); goto L_80357BF4; } // 80357C08
L_80357C0C:;
  c->r[3]=0u+0x80560000u; // 80357C0C
  c->r[4]=0u+0x80350000u; // 80357C10
  c->r[3]=R32(c->r[3]+0xFFFFA200u); // 80357C14
  c->r[4]=c->r[4]+0x00007084u; // 80357C18
  c->r[5]=0u+0x00000000u; // 80357C1C
  c->lr=0x80357C24u; f_80385B64(c); // 80357C20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357C24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80357C28
  c->lr=c->r[0]; // 80357C2C
  c->r[1]=c->r[1]+0x00000010u; // 80357C30
  return; // 80357C34
}

// UUSB_Unregister
void f_80357C38(Ctx* __restrict c) {
  trace_call(0x80357C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357C38
  c->r[0]=c->lr; // 80357C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357C40
  c->lr=0x80357C48u; f_80385870(c); // 80357C44
  c->lr=0x80357C4Cu; f_80356970(c); // 80357C48
  c->r[3]=0u+0x80560000u; // 80357C4C
  c->r[0]=0u+0x00000000u; // 80357C50
  c->r[3]=c->r[3]+0xFFFFA200u; // 80357C54
  c->r[4]=0u+0x00000005u; // 80357C58
  W8(c->r[3]+0x00000029u,c->r[4]); // 80357C5C
  W8(c->r[3]+0x00000028u,c->r[0]); // 80357C60
  W8(c->r[13]+0xFFFFEF61u,c->r[0]); // 80357C64
  c->lr=0x80357C6Cu; f_8035694C(c); // 80357C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357C6C
  c->lr=c->r[0]; // 80357C70
  c->r[1]=c->r[1]+0x00000010u; // 80357C74
  return; // 80357C78
}

// bte_hcisu_send
void f_80357C7C(Ctx* __restrict c) {
  trace_call(0x80357C7Cu);
  W16(c->r[3]+0x00000000u,c->r[4]); // 80357C7C
  c->r[4]=R32(c->r[13]+0xFFFFEF78u); // 80357C80
  cmps(c,0,(int32_t)c->r[4],0); // 80357C84
  if (crb(c,2)) { goto L_80357C98; } // 80357C88
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80357C8C
  c->ctr=c->r[12]; // 80357C90
  if (true) { dispatch(c,c->ctr); return; } // 80357C94
L_80357C98:;
  f_80355524(c); return; // 80357C98
}

// bte_hcisu_task
void f_80357C9C(Ctx* __restrict c) {
  trace_call(0x80357C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357C9C
  c->r[0]=c->lr; // 80357CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357CA4
  c->r[3]=R32(c->r[13]+0xFFFFEF78u); // 80357CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80357CAC
  if (crb(c,2)) { goto L_80357CF0; } // 80357CB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80357CB4
  cmps(c,0,(int32_t)c->r[12],0); // 80357CB8
  if (crb(c,2)) { goto L_80357CD4; } // 80357CBC
  c->r[3]=0u+0x00000002u; // 80357CC0
  c->r[4]=0u+0x00000001u; // 80357CC4
  c->r[5]=0u+0x00000800u; // 80357CC8
  c->ctr=c->r[12]; // 80357CCC
  if (true) { c->lr=0x80357CD4u; dispatch(c,c->ctr); } // 80357CD0
L_80357CD4:;
  c->r[3]=R32(c->r[13]+0xFFFFEF78u); // 80357CD4
  c->r[12]=R32(c->r[3]+0x00000004u); // 80357CD8
  cmps(c,0,(int32_t)c->r[12],0); // 80357CDC
  if (crb(c,2)) { goto L_80357CF0; } // 80357CE0
  c->r[3]=R32(c->r[13]+0xFFFFEF7Cu); // 80357CE4
  c->ctr=c->r[12]; // 80357CE8
  if (true) { c->lr=0x80357CF0u; dispatch(c,c->ctr); } // 80357CEC
L_80357CF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357CF0
  c->lr=c->r[0]; // 80357CF4
  c->r[1]=c->r[1]+0x00000010u; // 80357CF8
  return; // 80357CFC
}

// bte_hcisu_close
void f_80357D00(Ctx* __restrict c) {
  trace_call(0x80357D00u);
  c->r[3]=R32(c->r[13]+0xFFFFEF78u); // 80357D00
  cmps(c,0,(int32_t)c->r[3],0); // 80357D04
  if (crb(c,2)) return; // 80357D08
  c->r[12]=R32(c->r[3]+0x00000008u); // 80357D0C
  cmps(c,0,(int32_t)c->r[12],0); // 80357D10
  if (crb(c,2)) return; // 80357D14
  c->ctr=c->r[12]; // 80357D18
  if (true) { dispatch(c,c->ctr); return; } // 80357D1C
  return; // 80357D20
}

// bta_ci_hci_msg_handler
void f_80357D24(Ctx* __restrict c) {
  trace_call(0x80357D24u);
  c->r[5]=c->r[3]|c->r[3]; // 80357D24
  c->r[3]=0u+0x00000002u; // 80357D28
  c->r[4]=0u+0x00000000u; // 80357D2C
  f_803556D8(c); return; // 80357D30
}

// BTE_InitStack
void f_80357D34(Ctx* __restrict c) {
  trace_call(0x80357D34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357D34
  c->r[0]=c->lr; // 80357D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357D3C
  c->lr=0x80357D44u; f_80376864(c); // 80357D40
  c->lr=0x80357D48u; f_80369B3C(c); // 80357D44
  c->lr=0x80357D4Cu; f_8036D410(c); // 80357D48
  c->lr=0x80357D50u; f_8036DE94(c); // 80357D4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357D50
  c->lr=c->r[0]; // 80357D54
  c->r[1]=c->r[1]+0x00000010u; // 80357D58
  return; // 80357D5C
}

// LogMsg
void f_80357D60(Ctx* __restrict c) {
  trace_call(0x80357D60u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357D60
  c->r[0]=c->lr; // 80357D64
  W32(c->r[1]+0x00000084u,c->r[0]); // 80357D68
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80357D6C
  W32(c->r[1]+0x00000078u,c->r[30]); // 80357D70
  if (!crb(c,6)) { goto L_80357D98; } // 80357D74
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80357D78
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80357D7C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80357D80
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 80357D84
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 80357D88
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 80357D8C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 80357D90
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 80357D94
L_80357D98:;
  c->r[11]=c->r[1]+0x00000088u; // 80357D98
  c->r[0]=c->r[1]+0x00000008u; // 80357D9C
  c->r[12]=0u+0x02000000u; // 80357DA0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80357DA4
  c->r[30]=c->r[1]+0x00000068u; // 80357DA8
  c->r[31]=0u+0x80560000u; // 80357DAC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80357DB0
  c->r[3]=c->r[31]+0xFFFFC260u; // 80357DB4
  W32(c->r[1]+0x00000010u,c->r[5]); // 80357DB8
  c->r[5]=c->r[30]|c->r[30]; // 80357DBC
  W32(c->r[1]+0x00000014u,c->r[6]); // 80357DC0
  W32(c->r[1]+0x00000018u,c->r[7]); // 80357DC4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80357DC8
  W32(c->r[1]+0x00000020u,c->r[9]); // 80357DCC
  W32(c->r[1]+0x00000024u,c->r[10]); // 80357DD0
  W32(c->r[1]+0x00000068u,c->r[12]); // 80357DD4
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 80357DD8
  W32(c->r[1]+0x00000070u,c->r[0]); // 80357DDC
  c->lr=0x80357DE4u; f_803A56AC(c); // 80357DE0
  c->r[3]=c->r[31]+0xFFFFC260u; // 80357DE4
  c->r[4]=c->r[13]+0xFFFFDC78u; // 80357DE8
  c->r[5]=c->r[3]|c->r[3]; // 80357DEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357DF0
  c->lr=0x80357DF8u; f_803A5824(c); // 80357DF4
  c->r[3]=c->r[31]+0xFFFFC260u; // 80357DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357DFC
  c->lr=0x80357E04u; f_8031E9FC(c); // 80357E00
  c->r[0]=R32(c->r[1]+0x00000084u); // 80357E04
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 80357E08
  c->r[30]=R32(c->r[1]+0x00000078u); // 80357E0C
  c->lr=c->r[0]; // 80357E10
  c->r[1]=c->r[1]+0x00000080u; // 80357E14
  return; // 80357E18
}

// LogMsg_0
void f_80357E1C(Ctx* __restrict c) {
  trace_call(0x80357E1Cu);
  c->r[0]=R8(c->r[13]+0xFFFFEF80u); // 80357E1C
  cmps(c,0,(int32_t)c->r[0],0); // 80357E20
  if (!crb(c,2)) return; // 80357E24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357E28
  f_80357D60(c); return; // 80357E2C
  return; // 80357E30
}

// LogMsg_1
void f_80357E34(Ctx* __restrict c) {
  trace_call(0x80357E34u);
  c->r[0]=R8(c->r[13]+0xFFFFEF80u); // 80357E34
  cmps(c,0,(int32_t)c->r[0],0); // 80357E38
  if (!crb(c,2)) return; // 80357E3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357E40
  f_80357D60(c); return; // 80357E44
  return; // 80357E48
}

// LogMsg_2
void f_80357E4C(Ctx* __restrict c) {
  trace_call(0x80357E4Cu);
  c->r[0]=R8(c->r[13]+0xFFFFEF80u); // 80357E4C
  cmps(c,0,(int32_t)c->r[0],0); // 80357E50
  if (!crb(c,2)) return; // 80357E54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357E58
  f_80357D60(c); return; // 80357E5C
  return; // 80357E60
}

// LogMsg_3
void f_80357E64(Ctx* __restrict c) {
  trace_call(0x80357E64u);
  c->r[0]=R8(c->r[13]+0xFFFFEF80u); // 80357E64
  cmps(c,0,(int32_t)c->r[0],0); // 80357E68
  if (!crb(c,2)) return; // 80357E6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357E70
  f_80357D60(c); return; // 80357E74
  return; // 80357E78
}

// LogMsg_4
void f_80357E7C(Ctx* __restrict c) {
  trace_call(0x80357E7Cu);
  c->r[0]=R8(c->r[13]+0xFFFFEF80u); // 80357E7C
  cmps(c,0,(int32_t)c->r[0],0); // 80357E80
  if (!crb(c,2)) return; // 80357E84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357E88
  f_80357D60(c); return; // 80357E8C
  return; // 80357E90
}

// LogMsg_5
void f_80357E94(Ctx* __restrict c) {
  trace_call(0x80357E94u);
  c->r[0]=R8(c->r[13]+0xFFFFEF80u); // 80357E94
  cmps(c,0,(int32_t)c->r[0],0); // 80357E98
  if (!crb(c,2)) return; // 80357E9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357EA0
  f_80357D60(c); return; // 80357EA4
  return; // 80357EA8
}

// LogMsg_6
void f_80357EAC(Ctx* __restrict c) {
  trace_call(0x80357EACu);
  c->r[0]=R8(c->r[13]+0xFFFFEF80u); // 80357EAC
  cmps(c,0,(int32_t)c->r[0],0); // 80357EB0
  if (!crb(c,2)) return; // 80357EB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80357EB8
  f_80357D60(c); return; // 80357EBC
  return; // 80357EC0
}

// BTUInterruptHandler
void f_80357EC4(Ctx* __restrict c) {
  trace_call(0x80357EC4u);
  c->r[4]=0u+0x80560000u; // 80357EC4
  c->r[3]=0u+0x80360000u; // 80357EC8
  c->r[4]=c->r[4]+0xFFFFCA40u; // 80357ECC
  c->r[3]=c->r[3]+0xFFFF805Cu; // 80357ED0
  c->r[4]=c->r[4]+0x00001000u; // 80357ED4
  f_8031E590(c); return; // 80357ED8
}

// BTA_Init
void f_80357EDC(Ctx* __restrict c) {
  trace_call(0x80357EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357EDC
  c->r[0]=c->lr; // 80357EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357EE4
  c->r[0]=0u+0x00000000u; // 80357EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80357EEC
  W32(c->r[13]+0xFFFFEF84u,c->r[0]); // 80357EF0
  c->lr=0x80357EF8u; f_80356758(c); // 80357EF4
  c->lr=0x80357EFCu; f_8035694C(c); // 80357EF8
  c->lr=0x80357F00u; f_80369A10(c); // 80357EFC
  c->r[4]=0u+0x80400000u; // 80357F00
  c->r[0]=c->r[13]+0xFFFFDC80u; // 80357F04
  c->r[4]=c->r[4]+0x00005B78u; // 80357F08
  W32(c->r[13]+0xFFFFEF7Cu,c->r[0]); // 80357F0C
  c->r[3]=0u+0x00000000u; // 80357F10
  W32(c->r[13]+0xFFFFEF78u,c->r[4]); // 80357F14
  c->lr=0x80357F1Cu; f_80357C9C(c); // 80357F18
  goto L_80357F28; // 80357F1C
L_80357F20:;
  c->r[3]=0u+0x00000064u; // 80357F20
  c->lr=0x80357F28u; f_8035689C(c); // 80357F24
L_80357F28:;
  c->r[0]=R32(c->r[13]+0xFFFFDC38u); // 80357F28
  cmps(c,0,(int32_t)c->r[0],0); // 80357F2C
  if (!crb(c,2)) { IRQCHK(c); goto L_80357F20; } // 80357F30
  c->lr=0x80357F38u; f_8035801C(c); // 80357F34
  c->r[31]=0u+0x80560000u; // 80357F38
  c->r[3]=c->r[31]+0xFFFFDA40u; // 80357F3C
  c->lr=0x80357F44u; f_8031CBC8(c); // 80357F40
  c->lr=0x80357F48u; f_803264C8(c); // 80357F44
  c->r[5]=0u+0x80000000u; // 80357F48
  c->r[9]=0u+0x80350000u; // 80357F4C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80357F50
  c->r[6]=0u+0x10620000u; // 80357F54
  c->r[5]=c->r[3]|c->r[3]; // 80357F58
  c->r[9]=c->r[9]+0x00007EC4u; // 80357F5C
  c->r[3]=c->r[6]+0x00004DD3u; // 80357F60
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80357F64
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 80357F68
  c->r[6]=c->r[4]|c->r[4]; // 80357F6C
  c->r[3]=c->r[31]+0xFFFFDA40u; // 80357F70
  c->r[7]=0u+0x00000000u; // 80357F74
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFEu; // 80357F78
  c->lr=0x80357F80u; f_8031CE98(c); // 80357F7C
  c->r[3]=0u+0x00000000u; // 80357F80
  c->lr=0x80357F88u; f_80356890(c); // 80357F84
  goto L_80357F94; // 80357F88
L_80357F8C:;
  c->r[3]=0u+0x000007D0u; // 80357F8C
  c->lr=0x80357F94u; f_8035689C(c); // 80357F90
L_80357F94:;
  c->lr=0x80357F98u; f_8035AFF8(c); // 80357F94
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80357F98
  if (crb(c,2)) { IRQCHK(c); goto L_80357F8C; } // 80357F9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80357FA0
  c->r[3]=0u+0x00000000u; // 80357FA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357FA8
  c->lr=c->r[0]; // 80357FAC
  c->r[1]=c->r[1]+0x00000010u; // 80357FB0
  return; // 80357FB4
}

// BTA_CleanUp
void f_80357FB8(Ctx* __restrict c) {
  trace_call(0x80357FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80357FB8
  c->r[0]=c->lr; // 80357FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80357FC0
  W32(c->r[13]+0xFFFFEF84u,c->r[3]); // 80357FC4
  c->r[3]=0u+0x80560000u; // 80357FC8
  c->r[3]=c->r[3]+0xFFFFDA40u; // 80357FCC
  c->lr=0x80357FD4u; f_8031CF1C(c); // 80357FD0
  c->lr=0x80357FD8u; f_80357D00(c); // 80357FD4
  c->lr=0x80357FDCu; f_803567E8(c); // 80357FD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80357FDC
  c->lr=c->r[0]; // 80357FE0
  c->r[1]=c->r[1]+0x00000010u; // 80357FE4
  return; // 80357FE8
}

// bta_usb_close_evt
void f_80357FEC(Ctx* __restrict c) {
  trace_call(0x80357FECu);
  c->r[12]=R32(c->r[13]+0xFFFFEF84u); // 80357FEC
  cmps(c,0,(int32_t)c->r[12],0); // 80357FF0
  if (crb(c,2)) return; // 80357FF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80357FF8
  if (crb(c,0)) { goto L_8035800C; } // 80357FFC
  c->r[3]=0u+0x00000000u; // 80358000
  c->ctr=c->r[12]; // 80358004
  if (true) { dispatch(c,c->ctr); return; } // 80358008
L_8035800C:;
  c->r[3]=0u+0x00000001u; // 8035800C
  c->ctr=c->r[12]; // 80358010
  if (true) { dispatch(c,c->ctr); return; } // 80358014
  return; // 80358018
}

// btu_task_init
void f_8035801C(Ctx* __restrict c) {
  trace_call(0x8035801Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035801C
  c->r[0]=c->lr; // 80358020
  c->r[3]=0u+0x00000001u; // 80358024
  W32(c->r[1]+0x00000014u,c->r[0]); // 80358028
  c->r[0]=0u+0x00000000u; // 8035802C
  W8(c->r[13]+0xFFFFDC88u,c->r[3]); // 80358030
  W32(c->r[13]+0xFFFFDC8Cu,c->r[3]); // 80358034
  W32(c->r[13]+0xFFFFEF88u,c->r[0]); // 80358038
  W32(c->r[13]+0xFFFFEF8Cu,c->r[0]); // 8035803C
  c->lr=0x80358044u; f_803699E4(c); // 80358040
  c->lr=0x80358048u; f_80357D34(c); // 80358044
  c->lr=0x8035804Cu; f_80358794(c); // 80358048
  c->r[0]=R32(c->r[1]+0x00000014u); // 8035804C
  c->lr=c->r[0]; // 80358050
  c->r[1]=c->r[1]+0x00000010u; // 80358054
  return; // 80358058
}

// btu_task_msg_handler
void f_8035805C(Ctx* __restrict c) {
  trace_call(0x8035805Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8035805C
  c->r[0]=c->lr; // 80358060
  W32(c->r[1]+0x00000024u,c->r[0]); // 80358064
  c->r[11]=c->r[1]+0x00000020u; // 80358068
  c->lr=0x80358070u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8035806C
  c->r[30]=0u+0x00000000u; // 80358070
  c->lr=0x80358078u; f_803264C8(c); // 80358074
  c->r[3]=R32(c->r[13]+0xFFFFEF88u); // 80358078
  c->r[0]=c->r[3]+0x00000001u; // 8035807C
  W32(c->r[13]+0xFFFFEF88u,c->r[0]); // 80358080
  c->lr=0x80358088u; f_80356970(c); // 80358084
  c->r[0]=R32(c->r[13]+0xFFFFDC8Cu); // 80358088
  cmps(c,0,(int32_t)c->r[0],0); // 8035808C
  if (crb(c,2)) { goto L_803580A8; } // 80358090
  c->r[3]=0u+0x00000000u; // 80358094
  c->r[0]=0u+0x00000001u; // 80358098
  W32(c->r[13]+0xFFFFDC8Cu,c->r[3]); // 8035809C
  W8(c->r[13]+0xFFFFDC88u,c->r[0]); // 803580A0
  goto L_803580BC; // 803580A4
L_803580A8:;
  c->r[3]=R8(c->r[13]+0xFFFFDC88u); // 803580A8
  c->r[0]=c->r[3]+0x00000001u; // 803580AC
  W8(c->r[13]+0xFFFFDC88u,c->r[0]); // 803580B0
  c->lr=0x803580B8u; f_8035694C(c); // 803580B4
  goto L_803583D0; // 803580B8
L_803580BC:;
  c->lr=0x803580C0u; f_8035694C(c); // 803580BC
  c->r[3]=R32(c->r[13]+0xFFFFEF8Cu); // 803580C0
  c->r[31]=0u+0x00000005u; // 803580C4
  c->r[4]=R32(c->r[13]+0xFFFFEF88u); // 803580C8
  c->r[0]=c->r[3]+0x000001F4u; // 803580CC
  cmpu(c,0,c->r[4],c->r[0]); // 803580D0
  if (!crb(c,1)) { goto L_803580E0; } // 803580D4
  W32(c->r[13]+0xFFFFEF8Cu,c->r[4]); // 803580D8
  c->r[31]=c->r[31]|0x00000030u; // 803580DC
L_803580E0:;
  c->r[3]=0u+0x80560000u; // 803580E0
  c->r[29]=c->r[3]+0xFFFFDA70u; // 803580E4
  goto L_803583C0; // 803580E8
L_803580EC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 803580EC
  c->r[30]=0u+0x00000001u; // 803580F0
  if (crb(c,2)) { goto L_80358204; } // 803580F4
  goto L_803581F0; // 803580F8
L_803580FC:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 803580FC
  c->r[30]=0u+0x00000000u; // 80358100
  c->r[28]=rotl(c->r[0],0)&0x0000FF00u; // 80358104
  cmps(c,0,(int32_t)c->r[28],4608); // 80358108
  if (crb(c,2)) { goto L_8035815C; } // 8035810C
  if (!crb(c,0)) { goto L_8035812C; } // 80358110
  cmps(c,0,(int32_t)c->r[28],4352); // 80358114
  if (crb(c,2)) { goto L_80358144; } // 80358118
  if (!crb(c,0)) { goto L_80358188; } // 8035811C
  cmps(c,0,(int32_t)c->r[28],4096); // 80358120
  if (crb(c,2)) { goto L_80358168; } // 80358124
  goto L_80358188; // 80358128
L_8035812C:;
  cmps(c,0,(int32_t)c->r[28],6400); // 8035812C
  if (crb(c,2)) { goto L_80358150; } // 80358130
  if (!crb(c,0)) { goto L_80358188; } // 80358134
  cmps(c,0,(int32_t)c->r[28],5632); // 80358138
  if (crb(c,2)) { goto L_8035817C; } // 8035813C
  goto L_80358188; // 80358140
L_80358144:;
  c->r[3]=c->r[27]|c->r[27]; // 80358144
  c->lr=0x8035814Cu; f_80373A84(c); // 80358148
  goto L_803581F0; // 8035814C
L_80358150:;
  c->r[3]=c->r[27]|c->r[27]; // 80358150
  c->lr=0x80358158u; f_80373850(c); // 80358154
  goto L_803581F0; // 80358158
L_8035815C:;
  c->r[3]=c->r[27]|c->r[27]; // 8035815C
  c->lr=0x80358164u; f_803653BC(c); // 80358160
  goto L_803581F0; // 80358164
L_80358168:;
  c->r[3]=c->r[27]|c->r[27]; // 80358168
  c->lr=0x80358170u; f_80368788(c); // 8035816C
  c->r[3]=c->r[27]|c->r[27]; // 80358170
  c->lr=0x80358178u; f_80355524(c); // 80358174
  goto L_803581F0; // 80358178
L_8035817C:;
  c->r[3]=c->r[27]|c->r[27]; // 8035817C
  c->lr=0x80358184u; f_80368D40(c); // 80358180
  goto L_803581F0; // 80358184
L_80358188:;
  c->r[26]=0u+0x00000000u; // 80358188
  c->r[4]=0u+0x00000000u; // 8035818C
  goto L_803581CC; // 80358190
L_80358194:;
  c->r[0]=rotl(c->r[26],3)&0x000007F8u; // 80358194
  c->r[3]=c->r[29]+c->r[0]; // 80358198
  c->r[12]=R32(c->r[3]+0x00000014u); // 8035819C
  cmps(c,1,(int32_t)c->r[12],0); // 803581A0
  if (crb(c,6)) { goto L_803581C8; } // 803581A4
  c->r[0]=R16(c->r[3]+0x00000010u); // 803581A8
  cmpu(c,0,c->r[28],c->r[0]); // 803581AC
  if (!crb(c,2)) { goto L_803581C8; } // 803581B0
  if (crb(c,6)) { goto L_803581C8; } // 803581B4
  c->r[3]=c->r[27]|c->r[27]; // 803581B8
  c->ctr=c->r[12]; // 803581BC
  if (true) { c->lr=0x803581C4u; dispatch(c,c->ctr); } // 803581C0
  c->r[4]=0u+0x00000001u; // 803581C4
L_803581C8:;
  c->r[26]=c->r[26]+0x00000001u; // 803581C8
L_803581CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 803581CC
  if (!crb(c,2)) { goto L_803581E0; } // 803581D0
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 803581D4
  cmpu(c,0,c->r[0],0x00000006u); // 803581D8
  if (crb(c,0)) { IRQCHK(c); goto L_80358194; } // 803581DC
L_803581E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 803581E0
  if (!crb(c,2)) { goto L_803581F0; } // 803581E4
  c->r[3]=c->r[27]|c->r[27]; // 803581E8
  c->lr=0x803581F0u; f_80355524(c); // 803581EC
L_803581F0:;
  c->r[3]=0u+0x00000000u; // 803581F0
  c->lr=0x803581F8u; f_80355894(c); // 803581F4
  cmps(c,0,(int32_t)c->r[3],0); // 803581F8
  c->r[27]=c->r[3]|c->r[3]; // 803581FC
  if (!crb(c,2)) { IRQCHK(c); goto L_803580FC; } // 80358200
L_80358204:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 80358204
  if (crb(c,2)) { goto L_80358380; } // 80358208
  c->r[3]=c->r[29]+0x00000040u; // 8035820C
  c->r[4]=0u+0x00000001u; // 80358210
  c->lr=0x80358218u; f_803564BC(c); // 80358214
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFEFu; // 80358218
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 8035821C
  goto L_80358368; // 80358220
L_80358224:;
  c->r[4]=c->r[28]|c->r[28]; // 80358224
  c->r[3]=c->r[29]+0x00000040u; // 80358228
  c->r[30]=0u+0x00000000u; // 8035822C
  c->lr=0x80358234u; f_80356634(c); // 80358230
  c->r[0]=R16(c->r[28]+0x00000014u); // 80358234
  cmps(c,0,(int32_t)c->r[0],10); // 80358238
  if (crb(c,2)) { goto L_803582D0; } // 8035823C
  if (!crb(c,0)) { goto L_80358270; } // 80358240
  cmps(c,0,(int32_t)c->r[0],5); // 80358244
  if (crb(c,2)) { goto L_803582C4; } // 80358248
  if (!crb(c,0)) { goto L_80358260; } // 8035824C
  cmps(c,0,(int32_t)c->r[0],1); // 80358250
  if (crb(c,2)) { goto L_803582A0; } // 80358254
  if (!crb(c,0)) { goto L_803582B8; } // 80358258
  goto L_80358314; // 8035825C
L_80358260:;
  cmps(c,0,(int32_t)c->r[0],8); // 80358260
  if (crb(c,2)) { goto L_803582D8; } // 80358264
  if (!crb(c,0)) { goto L_803582AC; } // 80358268
  goto L_80358314; // 8035826C
L_80358270:;
  cmps(c,0,(int32_t)c->r[0],60); // 80358270
  if (crb(c,2)) { goto L_803582EC; } // 80358274
  if (!crb(c,0)) { goto L_80358294; } // 80358278
  cmps(c,0,(int32_t)c->r[0],22); // 8035827C
  if (crb(c,2)) { goto L_80358300; } // 80358280
  if (!crb(c,0)) { goto L_80358314; } // 80358284
  cmps(c,0,(int32_t)c->r[0],13); // 80358288
  if (!crb(c,0)) { goto L_80358314; } // 8035828C
  goto L_803582E0; // 80358290
L_80358294:;
  cmps(c,0,(int32_t)c->r[0],66); // 80358294
  if (crb(c,2)) { goto L_803582F4; } // 80358298
  goto L_80358314; // 8035829C
L_803582A0:;
  c->r[3]=c->r[28]|c->r[28]; // 803582A0
  c->lr=0x803582A8u; f_80360AE8(c); // 803582A4
  goto L_80358368; // 803582A8
L_803582AC:;
  c->r[3]=c->r[28]|c->r[28]; // 803582AC
  c->lr=0x803582B4u; f_8035F5DC(c); // 803582B0
  goto L_80358368; // 803582B4
L_803582B8:;
  c->r[3]=c->r[28]|c->r[28]; // 803582B8
  c->lr=0x803582C0u; f_80374824(c); // 803582BC
  goto L_80358368; // 803582C0
L_803582C4:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 803582C4
  c->lr=0x803582CCu; f_80380584(c); // 803582C8
  goto L_80358368; // 803582CC
L_803582D0:;
  c->lr=0x803582D4u; f_80363C5C(c); // 803582D0
  goto L_80358368; // 803582D4
L_803582D8:;
  c->lr=0x803582DCu; f_80362200(c); // 803582D8
  goto L_80358368; // 803582DC
L_803582E0:;
  c->r[3]=c->r[28]|c->r[28]; // 803582E0
  c->lr=0x803582E8u; f_8037C9E0(c); // 803582E4
  goto L_80358368; // 803582E8
L_803582EC:;
  c->lr=0x803582F0u; f_803697AC(c); // 803582EC
  goto L_80358368; // 803582F0
L_803582F4:;
  c->r[3]=c->r[28]|c->r[28]; // 803582F4
  c->lr=0x803582FCu; f_8036EC80(c); // 803582F8
  goto L_80358368; // 803582FC
L_80358300:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 80358300
  c->r[3]=c->r[28]|c->r[28]; // 80358304
  c->ctr=c->r[12]; // 80358308
  if (true) { c->lr=0x80358310u; dispatch(c,c->ctr); } // 8035830C
  goto L_80358368; // 80358310
L_80358314:;
  c->r[27]=0u+0x00000000u; // 80358314
  c->r[4]=0u+0x00000000u; // 80358318
  goto L_80358354; // 8035831C
L_80358320:;
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 80358320
  c->r[3]=c->r[29]+c->r[0]; // 80358324
  c->r[12]=R32(c->r[3]+0x00000004u); // 80358328
  cmps(c,0,(int32_t)c->r[12],0); // 8035832C
  if (crb(c,2)) { goto L_80358350; } // 80358330
  c->r[0]=R32(c->r[3]+0x00000000u); // 80358334
  cmpu(c,0,c->r[0],c->r[28]); // 80358338
  if (!crb(c,2)) { goto L_80358350; } // 8035833C
  c->r[3]=c->r[28]|c->r[28]; // 80358340
  c->ctr=c->r[12]; // 80358344
  if (true) { c->lr=0x8035834Cu; dispatch(c,c->ctr); } // 80358348
  c->r[4]=0u+0x00000001u; // 8035834C
L_80358350:;
  c->r[27]=c->r[27]+0x00000001u; // 80358350
L_80358354:;
  cmps(c,0,(int32_t)c->r[4],0); // 80358354
  if (!crb(c,2)) { goto L_80358368; } // 80358358
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 8035835C
  cmpu(c,0,c->r[0],0x00000002u); // 80358360
  if (crb(c,0)) { IRQCHK(c); goto L_80358320; } // 80358364
L_80358368:;
  c->r[28]=R32(c->r[29]+0x00000040u); // 80358368
  cmps(c,0,(int32_t)c->r[28],0); // 8035836C
  if (crb(c,2)) { goto L_80358380; } // 80358370
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80358374
  cmps(c,0,(int32_t)c->r[0],0); // 80358378
  if (crb(c,2)) { IRQCHK(c); goto L_80358224; } // 8035837C
L_80358380:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 80358380
  if (crb(c,2)) { goto L_803583A4; } // 80358384
  goto L_80358394; // 80358388
L_8035838C:;
  c->r[30]=0u+0x00000000u; // 8035838C
  c->lr=0x80358394u; f_803587F8(c); // 80358390
L_80358394:;
  c->r[3]=0u+0x00000002u; // 80358394
  c->lr=0x8035839Cu; f_80355894(c); // 80358398
  cmps(c,0,(int32_t)c->r[3],0); // 8035839C
  if (!crb(c,2)) { IRQCHK(c); goto L_8035838C; } // 803583A0
L_803583A4:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 803583A4
  if (crb(c,2)) { goto L_803583B8; } // 803583A8
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFDFu; // 803583AC
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 803583B0
  c->lr=0x803583B8u; f_803588E4(c); // 803583B4
L_803583B8:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 803583B8
  if (!crb(c,2)) { goto L_803583C8; } // 803583BC
L_803583C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 803583C0
  if (crb(c,2)) { IRQCHK(c); goto L_803580EC; } // 803583C4
L_803583C8:;
  c->r[0]=0u+0x00000001u; // 803583C8
  W32(c->r[13]+0xFFFFDC8Cu,c->r[0]); // 803583CC
L_803583D0:;
  c->r[11]=c->r[1]+0x00000020u; // 803583D0
  c->lr=0x803583D8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803583D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803583D8
  c->lr=c->r[0]; // 803583DC
  c->r[1]=c->r[1]+0x00000020u; // 803583E0
  return; // 803583E4
}

// btu_start_timer
void f_803583E8(Ctx* __restrict c) {
  trace_call(0x803583E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803583E8
  c->r[0]=c->lr; // 803583EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803583F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803583F4
  c->r[31]=0u+0x80560000u; // 803583F8
  c->r[31]=c->r[31]+0xFFFFDA70u; // 803583FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80358400
  c->r[30]=c->r[5]|c->r[5]; // 80358404
  W32(c->r[1]+0x00000014u,c->r[29]); // 80358408
  c->r[29]=c->r[4]|c->r[4]; // 8035840C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80358410
  c->r[28]=c->r[3]|c->r[3]; // 80358414
  c->r[4]=c->r[28]|c->r[28]; // 80358418
  c->r[3]=c->r[31]+0x00000040u; // 8035841C
  c->lr=0x80358424u; f_80356634(c); // 80358420
  W16(c->r[28]+0x00000014u,c->r[29]); // 80358424
  c->r[4]=c->r[28]|c->r[28]; // 80358428
  c->r[3]=c->r[31]+0x00000040u; // 8035842C
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 80358430
  c->lr=0x80358438u; f_80356548(c); // 80358434
  c->r[0]=R32(c->r[1]+0x00000024u); // 80358438
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8035843C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80358440
  c->r[29]=R32(c->r[1]+0x00000014u); // 80358444
  c->r[28]=R32(c->r[1]+0x00000010u); // 80358448
  c->lr=c->r[0]; // 8035844C
  c->r[1]=c->r[1]+0x00000020u; // 80358450
  return; // 80358454
}

// btu_stop_timer
void f_80358458(Ctx* __restrict c) {
  trace_call(0x80358458u);
  c->r[5]=0u+0x80560000u; // 80358458
  c->r[4]=c->r[3]|c->r[3]; // 8035845C
  c->r[5]=c->r[5]+0xFFFFDA70u; // 80358460
  c->r[3]=c->r[5]+0x00000040u; // 80358464
  f_80356634(c); return; // 80358468
}

