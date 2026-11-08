#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8004A868
void f_8004A868(Ctx* __restrict c) {
  trace_call(0x8004A868u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004A868
  if (!crb(c,2)) return; // 8004A86C
  f_8003A92C(c); return; // 8004A870
  return; // 8004A874
}

// fn_8004A878
void f_8004A878(Ctx* __restrict c) {
  trace_call(0x8004A878u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A878
  c->r[0]=c->lr; // 8004A87C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004A880
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004A884
  c->r[31]=c->r[3]|c->r[3]; // 8004A888
  c->lr=0x8004A890u; f_8003AA04(c); // 8004A88C
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004A890
  c->r[4]=0u+0x00000000u; // 8004A894
  {uint32_t ea=c->r[2]+0xFFFF870Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A898
  c->r[3]=0u+0x00000010u; // 8004A89C
  c->r[0]=0u+0x00000008u; // 8004A8A0
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[1]);} // 8004A8A4
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[1]);} // 8004A8A8
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 8004A8AC
  W8(c->r[31]+0x000000B4u,c->r[4]); // 8004A8B0
  W32(c->r[31]+0x000000B8u,c->r[3]); // 8004A8B4
  W32(c->r[31]+0x000000BCu,c->r[0]); // 8004A8B8
  W32(c->r[31]+0x000000C0u,c->r[3]); // 8004A8BC
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8004A8C0
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8004A8C4
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 8004A8C8
  W32(c->r[31]+0x000000D0u,c->r[4]); // 8004A8CC
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 8004A8D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004A8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004A8D8
  c->lr=c->r[0]; // 8004A8DC
  c->r[1]=c->r[1]+0x00000010u; // 8004A8E0
  return; // 8004A8E4
}

// fn_8004A8E8
void f_8004A8E8(Ctx* __restrict c) {
  trace_call(0x8004A8E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A8E8
  c->r[0]=c->lr; // 8004A8EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004A8F0
  c->r[11]=c->r[1]+0x00000020u; // 8004A8F4
  c->lr=0x8004A8FCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004A8F8
  c->r[29]=c->r[3]|c->r[3]; // 8004A8FC
  c->r[30]=c->r[4]|c->r[4]; // 8004A900
  c->r[31]=c->r[5]|c->r[5]; // 8004A904
  c->r[6]=0u+0x00000000u; // 8004A908
  c->lr=0x8004A910u; f_8003AA90(c); // 8004A90C
  cmps(c,0,(int32_t)c->r[31],0); // 8004A910
  if (crb(c,2)) { goto L_8004A91C; } // 8004A914
  goto L_8004A920; // 8004A918
L_8004A91C:;
  c->r[31]=c->r[29]|c->r[29]; // 8004A91C
L_8004A920:;
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A920
  c->r[11]=c->r[1]+0x00000020u; // 8004A924
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 8004A928
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A92C
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 8004A930
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A934
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8004A938
  c->r[0]=R8(c->r[30]+0x000000B4u); // 8004A93C
  W8(c->r[31]+0x000000B4u,c->r[0]); // 8004A940
  c->r[0]=R32(c->r[30]+0x000000B8u); // 8004A944
  W32(c->r[31]+0x000000B8u,c->r[0]); // 8004A948
  c->r[0]=R32(c->r[30]+0x000000BCu); // 8004A94C
  W32(c->r[31]+0x000000BCu,c->r[0]); // 8004A950
  c->r[0]=R32(c->r[30]+0x000000C0u); // 8004A954
  W32(c->r[31]+0x000000C0u,c->r[0]); // 8004A958
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A95C
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8004A960
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A964
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8004A968
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A96C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 8004A970
  c->r[0]=R32(c->r[30]+0x000000D0u); // 8004A974
  W32(c->r[31]+0x000000D0u,c->r[0]); // 8004A978
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A97C
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[0]);} // 8004A980
  c->lr=0x8004A988u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004A984
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004A988
  c->lr=c->r[0]; // 8004A98C
  c->r[1]=c->r[1]+0x00000020u; // 8004A990
  return; // 8004A994
}

// fn_8004A998
void f_8004A998(Ctx* __restrict c) {
  trace_call(0x8004A998u);
  c->r[0]=c->r[4]+0x05C00000u; // 8004A998
  cmpu(c,0,c->r[0],0x00000802u); // 8004A99C
  if (!crb(c,2)) { goto L_8004A9AC; } // 8004A9A0
  c->r[3]=0u+0x00000001u; // 8004A9A4
  return; // 8004A9A8
L_8004A9AC:;
  c->r[3]=0u+0xD12F0000u; // 8004A9AC
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004A9B0
  c->r[0]=c->r[4]-c->r[0]; // 8004A9B4
  c->r[0]=cntlz(c->r[0]); // 8004A9B8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004A9BC
  return; // 8004A9C0
}

// fn_8004A9C4
void f_8004A9C4(Ctx* __restrict c) {
  trace_call(0x8004A9C4u);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004A9C4
  c->r[0]=0u+0x43300000u; // 8004A9C8
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004A9CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8004A9D0
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[4]=RF64(ea);} // 8004A9D4
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004A9D8
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004A9DC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004A9E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004A9E4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004A9E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004A9EC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004A9F0
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[2]);} // 8004A9F4
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004A9F8
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004A9FC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AA00
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AA04
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AA08
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[2]);} // 8004AA0C
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004AA10
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004AA14
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AA18
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AA1C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AA20
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 8004AA24
  c->r[6]=R32(c->r[4]+0x000000B8u); // 8004AA28
  c->r[0]=R32(c->r[5]+0x000000B8u); // 8004AA2C
  c->r[6]=c->r[6]^0x80000000u; // 8004AA30
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004AA34
  c->r[0]=c->r[0]^0x80000000u; // 8004AA38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AA3C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004AA40
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004AA44
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8004AA48
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8004AA4C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AA50
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AA54
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AA58
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004AA5C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 8004AA60
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004AA64
  W32(c->r[3]+0x000000B8u,c->r[0]); // 8004AA68
  c->r[6]=R32(c->r[4]+0x000000BCu); // 8004AA6C
  c->r[0]=R32(c->r[5]+0x000000BCu); // 8004AA70
  c->r[6]=c->r[6]^0x80000000u; // 8004AA74
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004AA78
  c->r[0]=c->r[0]^0x80000000u; // 8004AA7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AA80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004AA84
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004AA88
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8004AA8C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8004AA90
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AA94
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AA98
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AA9C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004AAA0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 8004AAA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004AAA8
  W32(c->r[3]+0x000000BCu,c->r[0]); // 8004AAAC
  c->r[6]=R32(c->r[4]+0x000000C0u); // 8004AAB0
  c->r[0]=R32(c->r[5]+0x000000C0u); // 8004AAB4
  c->r[6]=c->r[6]^0x80000000u; // 8004AAB8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004AABC
  c->r[0]=c->r[0]^0x80000000u; // 8004AAC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AAC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004AAC8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004AACC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8004AAD0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8004AAD4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AAD8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AADC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AAE0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004AAE4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 8004AAE8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8004AAEC
  W32(c->r[3]+0x000000C0u,c->r[0]); // 8004AAF0
  {uint32_t ea=c->r[4]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004AAF4
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004AAF8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AAFC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AB00
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AB04
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[2]);} // 8004AB08
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004AB0C
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004AB10
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AB14
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AB18
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AB1C
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[2]);} // 8004AB20
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004AB24
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004AB28
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AB2C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004AB30
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004AB34
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[2]);} // 8004AB38
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004AB3C
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004AB40
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004AB44
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[2]); // 8004AB48
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8004AB4C
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 8004AB50
  c->r[1]=c->r[1]+0x00000030u; // 8004AB54
  return; // 8004AB58
}

// fn_8004AB5C
void f_8004AB5C(Ctx* __restrict c) {
  trace_call(0x8004AB5Cu);
  c->r[3]=0u+0x000000D8u; // 8004AB5C
  return; // 8004AB60
}

// fn_8004AB64
void f_8004AB64(Ctx* __restrict c) {
  trace_call(0x8004AB64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AB64
  c->r[0]=c->lr; // 8004AB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AB6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AB70
  c->r[31]=c->r[3]|c->r[3]; // 8004AB74
  c->lr=0x8004AB7Cu; f_8004A67C(c); // 8004AB78
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004AB7C
  c->r[3]=0u+0x80420000u; // 8004AB80
  c->r[3]=c->r[3]+0x00000088u; // 8004AB84
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004AB88
  c->r[0]=c->r[0]|0x80000000u; // 8004AB8C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004AB90
  c->r[3]=c->r[31]|c->r[31]; // 8004AB94
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004AB98
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004AB9C
  c->ctr=c->r[12]; // 8004ABA0
  if (true) { c->lr=0x8004ABA8u; dispatch(c,c->ctr); } // 8004ABA4
  c->r[3]=c->r[31]|c->r[31]; // 8004ABA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004ABAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ABB0
  c->lr=c->r[0]; // 8004ABB4
  c->r[1]=c->r[1]+0x00000010u; // 8004ABB8
  return; // 8004ABBC
}

// fn_8004ABC0
void f_8004ABC0(Ctx* __restrict c) {
  trace_call(0x8004ABC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ABC0
  c->r[0]=c->lr; // 8004ABC4
  cmps(c,0,(int32_t)c->r[3],0); // 8004ABC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004ABCC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004ABD0
  c->r[30]=c->r[3]|c->r[3]; // 8004ABD4
  c->r[31]=c->r[4]|c->r[4]; // 8004ABD8
  if (crb(c,2)) { goto L_8004ABF8; } // 8004ABDC
  c->r[4]=0u+0x00000000u; // 8004ABE0
  c->lr=0x8004ABE8u; f_8003ABE0(c); // 8004ABE4
  cmps(c,0,(int32_t)c->r[31],0); // 8004ABE8
  if (!crb(c,1)) { goto L_8004ABF8; } // 8004ABEC
  c->r[3]=c->r[30]|c->r[30]; // 8004ABF0
  c->lr=0x8004ABF8u; f_80244DC0(c); // 8004ABF4
L_8004ABF8:;
  c->r[3]=c->r[30]|c->r[30]; // 8004ABF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004ABFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AC00
  c->lr=c->r[0]; // 8004AC04
  c->r[1]=c->r[1]+0x00000010u; // 8004AC08
  return; // 8004AC0C
}

// fn_8004AC10
void f_8004AC10(Ctx* __restrict c) {
  trace_call(0x8004AC10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AC10
  c->r[0]=c->lr; // 8004AC14
  c->r[3]=0u+0x000000D8u; // 8004AC18
  c->r[4]=c->r[13]+0xFFFF91EFu; // 8004AC1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AC20
  c->r[5]=0u+0x00000000u; // 8004AC24
  c->r[6]=0u+0x00001001u; // 8004AC28
  c->lr=0x8004AC30u; f_80244D20(c); // 8004AC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8004AC30
  if (crb(c,2)) { goto L_8004AC3C; } // 8004AC34
  c->lr=0x8004AC3Cu; f_8004AB64(c); // 8004AC38
L_8004AC3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AC3C
  c->lr=c->r[0]; // 8004AC40
  c->r[1]=c->r[1]+0x00000010u; // 8004AC44
  return; // 8004AC48
}

// fn_8004AC4C
void f_8004AC4C(Ctx* __restrict c) {
  trace_call(0x8004AC4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AC4C
  c->r[0]=c->lr; // 8004AC50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AC54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AC58
  c->r[31]=c->r[3]|c->r[3]; // 8004AC5C
  c->lr=0x8004AC64u; f_80244520(c); // 8004AC60
  c->r[7]=c->r[3]|c->r[3]; // 8004AC64
  c->r[9]=c->r[31]|c->r[31]; // 8004AC68
  c->r[3]=0u+0x000000D8u; // 8004AC6C
  c->r[4]=c->r[13]+0xFFFF91F4u; // 8004AC70
  c->r[5]=0u+0x00000000u; // 8004AC74
  c->r[6]=0u+0x00002001u; // 8004AC78
  c->r[8]=0u+0x00000000u; // 8004AC7C
  c->lr=0x8004AC84u; f_80242DF0(c); // 8004AC80
  c->r[4]=c->r[3]|c->r[3]; // 8004AC84
  c->r[3]=0u+0x000000D8u; // 8004AC88
  c->r[5]=c->r[13]+0xFFFF91F9u; // 8004AC8C
  c->r[6]=0u+0x00000000u; // 8004AC90
  c->r[7]=0u+0x00001001u; // 8004AC94
  c->lr=0x8004AC9Cu; f_80244DB0(c); // 8004AC98
  cmps(c,0,(int32_t)c->r[3],0); // 8004AC9C
  if (crb(c,2)) { goto L_8004ACA8; } // 8004ACA0
  c->lr=0x8004ACA8u; f_8004AB64(c); // 8004ACA4
L_8004ACA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ACA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004ACAC
  c->lr=c->r[0]; // 8004ACB0
  c->r[1]=c->r[1]+0x00000010u; // 8004ACB4
  return; // 8004ACB8
}

// fn_8004ACBC
void f_8004ACBC(Ctx* __restrict c) {
  trace_call(0x8004ACBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ACBC
  c->r[0]=c->lr; // 8004ACC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004ACC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004ACC8
  c->r[31]=c->r[3]|c->r[3]; // 8004ACCC
  c->lr=0x8004ACD4u; f_8003A6F0(c); // 8004ACD0
  c->r[8]=0u+0x80420000u; // 8004ACD4
  c->r[6]=0u+0x80410000u; // 8004ACD8
  c->r[7]=0u+0x00000000u; // 8004ACDC
  c->r[5]=0u+0x81CB0000u; // 8004ACE0
  c->r[4]=0u+0x64190000u; // 8004ACE4
  c->r[3]=0u+0x428E0000u; // 8004ACE8
  c->r[0]=c->r[3]+0x000027F0u; // 8004ACEC
  c->r[8]=c->r[8]+0x0000004Cu; // 8004ACF0
  c->r[6]=c->r[6]+0xFFFFBD94u; // 8004ACF4
  c->r[5]=c->r[5]+0xFFFF9784u; // 8004ACF8
  c->r[4]=c->r[4]+0xFFFF8F81u; // 8004ACFC
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004AD00
  c->r[3]=c->r[31]|c->r[31]; // 8004AD04
  W32(c->r[31]+0x000000C8u,c->r[7]); // 8004AD08
  W32(c->r[31]+0x00000000u,c->r[6]); // 8004AD0C
  W32(c->r[31]+0x00000008u,c->r[7]); // 8004AD10
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004AD14
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004AD18
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004AD1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AD20
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AD24
  c->lr=c->r[0]; // 8004AD28
  c->r[1]=c->r[1]+0x00000010u; // 8004AD2C
  return; // 8004AD30
}

// fn_8004AD34
void f_8004AD34(Ctx* __restrict c) {
  trace_call(0x8004AD34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AD34
  c->r[0]=c->lr; // 8004AD38
  cmps(c,0,(int32_t)c->r[4],0); // 8004AD3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AD40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004AD44
  c->r[30]=c->r[3]|c->r[3]; // 8004AD48
  c->r[31]=c->r[4]|c->r[4]; // 8004AD4C
  if (crb(c,2)) { goto L_8004ADA4; } // 8004AD50
  c->r[3]=c->r[31]|c->r[31]; // 8004AD54
  c->lr=0x8004AD5Cu; f_80244520(c); // 8004AD58
  c->r[7]=c->r[3]|c->r[3]; // 8004AD5C
  c->r[9]=c->r[31]|c->r[31]; // 8004AD60
  c->r[3]=0u+0x000000CCu; // 8004AD64
  c->r[4]=c->r[13]+0xFFFF91FEu; // 8004AD68
  c->r[5]=0u+0x00000000u; // 8004AD6C
  c->r[6]=0u+0x00002001u; // 8004AD70
  c->r[8]=0u+0x00000000u; // 8004AD74
  c->lr=0x8004AD7Cu; f_80242DF0(c); // 8004AD78
  c->r[4]=c->r[3]|c->r[3]; // 8004AD7C
  c->r[3]=0u+0x000000CCu; // 8004AD80
  c->r[5]=c->r[13]+0xFFFF9203u; // 8004AD84
  c->r[6]=0u+0x00000000u; // 8004AD88
  c->r[7]=0u+0x00001001u; // 8004AD8C
  c->lr=0x8004AD94u; f_80244DB0(c); // 8004AD90
  cmps(c,0,(int32_t)c->r[3],0); // 8004AD94
  if (crb(c,2)) { goto L_8004ADC4; } // 8004AD98
  c->lr=0x8004ADA0u; f_8004ACBC(c); // 8004AD9C
  goto L_8004ADC4; // 8004ADA0
L_8004ADA4:;
  c->r[3]=0u+0x000000CCu; // 8004ADA4
  c->r[4]=c->r[13]+0xFFFF9208u; // 8004ADA8
  c->r[5]=0u+0x00000000u; // 8004ADAC
  c->r[6]=0u+0x00001001u; // 8004ADB0
  c->lr=0x8004ADB8u; f_80244D20(c); // 8004ADB4
  cmps(c,0,(int32_t)c->r[3],0); // 8004ADB8
  if (crb(c,2)) { goto L_8004ADC4; } // 8004ADBC
  c->lr=0x8004ADC4u; f_8004ACBC(c); // 8004ADC0
L_8004ADC4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004ADC4
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004ADC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004ADCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ADD0
  c->lr=c->r[0]; // 8004ADD4
  c->r[1]=c->r[1]+0x00000010u; // 8004ADD8
  return; // 8004ADDC
}

// fn_8004ADE0
void f_8004ADE0(Ctx* __restrict c) {
  trace_call(0x8004ADE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ADE0
  c->r[0]=c->lr; // 8004ADE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004ADE8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004ADEC
  c->r[28]=c->r[3]|c->r[3]; // 8004ADF0
  c->r[29]=c->r[4]|c->r[4]; // 8004ADF4
  c->lr=0x8004ADFCu; f_8003A810(c); // 8004ADF8
  c->r[30]=c->r[3]|c->r[3]; // 8004ADFC
  c->r[3]=c->r[29]|c->r[29]; // 8004AE00
  c->r[4]=0u+0x00000000u; // 8004AE04
  c->lr=0x8004AE0Cu; f_8030BE30(c); // 8004AE08
  W32(c->r[28]+0x000000A8u,c->r[3]); // 8004AE0C
  c->r[31]=0u+0x00000000u; // 8004AE10
  c->r[3]=c->r[29]|c->r[29]; // 8004AE14
  W32(c->r[28]+0x000000ACu,c->r[31]); // 8004AE18
  c->lr=0x8004AE20u; f_8030BD1C(c); // 8004AE1C
  W32(c->r[28]+0x000000B0u,c->r[3]); // 8004AE20
  c->r[3]=c->r[29]|c->r[29]; // 8004AE24
  c->lr=0x8004AE2Cu; f_8030BD1C(c); // 8004AE28
  W8(c->r[28]+0x000000B4u,c->r[3]); // 8004AE2C
  c->r[3]=c->r[29]|c->r[29]; // 8004AE30
  c->r[4]=0u+0x00000000u; // 8004AE34
  c->lr=0x8004AE3Cu; f_8030BE30(c); // 8004AE38
  W32(c->r[28]+0x000000B8u,c->r[3]); // 8004AE3C
  c->r[3]=c->r[29]|c->r[29]; // 8004AE40
  c->r[4]=0u+0x00000000u; // 8004AE44
  W32(c->r[28]+0x000000BCu,c->r[31]); // 8004AE48
  c->lr=0x8004AE50u; f_8030BE30(c); // 8004AE4C
  W32(c->r[28]+0x000000C0u,c->r[3]); // 8004AE50
  c->r[3]=c->r[30]|c->r[30]; // 8004AE54
  W32(c->r[28]+0x000000C4u,c->r[31]); // 8004AE58
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004AE5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004AE60
  c->lr=c->r[0]; // 8004AE64
  c->r[1]=c->r[1]+0x00000020u; // 8004AE68
  return; // 8004AE6C
}

// fn_8004AE70
void f_8004AE70(Ctx* __restrict c) {
  trace_call(0x8004AE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AE70
  c->r[0]=c->lr; // 8004AE74
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004AE78
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004AE7C
  c->r[27]=c->r[3]|c->r[3]; // 8004AE80
  c->r[28]=c->r[4]|c->r[4]; // 8004AE84
  c->r[29]=c->r[5]|c->r[5]; // 8004AE88
  c->r[30]=c->r[6]|c->r[6]; // 8004AE8C
  c->r[7]=R32(c->r[3]+0x000000C8u); // 8004AE90
  cmps(c,0,(int32_t)c->r[7],0); // 8004AE94
  if (!crb(c,0)) { goto L_8004AEA8; } // 8004AE98
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8004AE9C
  W32(c->r[3]+0x000000C8u,c->r[0]); // 8004AEA0
  goto L_8004AEB8; // 8004AEA4
L_8004AEA8:;
  c->r[0]=c->r[7]+0x00000001u; // 8004AEA8
  W32(c->r[3]+0x000000C8u,c->r[0]); // 8004AEAC
  cmps(c,0,(int32_t)c->r[0],1); // 8004AEB0
  if (crb(c,1)) { goto L_8004AF78; } // 8004AEB4
L_8004AEB8:;
  c->r[3]=c->r[27]|c->r[27]; // 8004AEB8
  c->r[4]=c->r[28]|c->r[28]; // 8004AEBC
  c->r[5]=c->r[29]|c->r[29]; // 8004AEC0
  c->r[6]=c->r[30]|c->r[30]; // 8004AEC4
  c->lr=0x8004AECCu; f_802B11C0(c); // 8004AEC8
  c->r[4]=R32(c->r[27]+0x000000A8u); // 8004AECC
  cmps(c,0,(int32_t)c->r[4],0); // 8004AED0
  if (crb(c,2)) { goto L_8004AF78; } // 8004AED4
  c->r[0]=0u+0x00000001u; // 8004AED8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004AEDC
  c->r[6]=c->r[28]|c->r[28]; // 8004AEE0
  c->r[7]=c->r[29]|c->r[29]; // 8004AEE4
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8004AEE8
  c->r[8]=c->r[30]|c->r[30]; // 8004AEEC
  c->r[9]=R32(c->r[27]+0x000000B0u); // 8004AEF0
  c->r[5]=0u+0x00000006u; // 8004AEF4
  c->r[10]=0u+0x00000001u; // 8004AEF8
  c->lr=0x8004AF00u; f_80281A84(c); // 8004AEFC
  cmps(c,0,(int32_t)c->r[3],0); // 8004AF00
  W32(c->r[27]+0x000000ACu,c->r[3]); // 8004AF04
  if (crb(c,2)) { goto L_8004AF14; } // 8004AF08
  c->lr=0x8004AF10u; f_80295B6C(c); // 8004AF0C
  goto L_8004AF78; // 8004AF10
L_8004AF14:;
  c->r[3]=R32(c->r[27]+0x000000B0u); // 8004AF14
  c->r[4]=c->r[30]|c->r[30]; // 8004AF18
  c->r[5]=c->r[29]|c->r[29]; // 8004AF1C
  c->lr=0x8004AF24u; f_802C0F98(c); // 8004AF20
  c->r[31]=c->r[3]|c->r[3]; // 8004AF24
  c->r[3]=0u+0x00000044u; // 8004AF28
  c->r[4]=c->r[13]+0xFFFF920Du; // 8004AF2C
  c->r[5]=0u+0x00000000u; // 8004AF30
  c->r[6]=0u+0x00001001u; // 8004AF34
  c->lr=0x8004AF3Cu; f_80244D20(c); // 8004AF38
  cmps(c,0,(int32_t)c->r[3],0); // 8004AF3C
  if (crb(c,2)) { goto L_8004AF54; } // 8004AF40
  c->r[5]=R32(c->r[27]+0x000000A8u); // 8004AF44
  c->r[4]=c->r[31]|c->r[31]; // 8004AF48
  c->r[6]=0u+0x00000006u; // 8004AF4C
  c->lr=0x8004AF54u; f_8029316C(c); // 8004AF50
L_8004AF54:;
  W32(c->r[27]+0x000000ACu,c->r[3]); // 8004AF54
  c->r[4]=c->r[28]|c->r[28]; // 8004AF58
  c->r[7]=R32(c->r[27]+0x000000B0u); // 8004AF5C
  c->r[5]=c->r[29]|c->r[29]; // 8004AF60
  c->r[6]=c->r[30]|c->r[30]; // 8004AF64
  c->r[8]=0u+0x00000001u; // 8004AF68
  c->r[9]=0u+0x00000000u; // 8004AF6C
  c->lr=0x8004AF74u; f_8027FFF4(c); // 8004AF70
  W32(c->r[27]+0x000000ACu,c->r[3]); // 8004AF74
L_8004AF78:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004AF78
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004AF7C
  c->lr=c->r[0]; // 8004AF80
  c->r[1]=c->r[1]+0x00000030u; // 8004AF84
  return; // 8004AF88
}

// fn_8004AF8C
void f_8004AF8C(Ctx* __restrict c) {
  trace_call(0x8004AF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AF8C
  c->r[0]=c->lr; // 8004AF90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AF94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AF98
  c->r[31]=c->r[3]|c->r[3]; // 8004AF9C
  c->r[0]=R32(c->r[3]+0x000000C8u); // 8004AFA0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004AFA4
  W32(c->r[3]+0x000000C8u,c->r[0]); // 8004AFA8
  if (!crb(c,2)) { goto L_8004AFCC; } // 8004AFAC
  c->lr=0x8004AFB4u; f_802B11D0(c); // 8004AFB0
  c->r[3]=R32(c->r[31]+0x000000ACu); // 8004AFB4
  cmps(c,0,(int32_t)c->r[3],0); // 8004AFB8
  if (crb(c,2)) { goto L_8004AFCC; } // 8004AFBC
  c->lr=0x8004AFC4u; f_80295B7C(c); // 8004AFC0
  c->r[0]=0u+0x00000000u; // 8004AFC4
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004AFC8
L_8004AFCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AFCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AFD0
  c->lr=c->r[0]; // 8004AFD4
  c->r[1]=c->r[1]+0x00000010u; // 8004AFD8
  return; // 8004AFDC
}

// fn_8004AFE0
void f_8004AFE0(Ctx* __restrict c) {
  trace_call(0x8004AFE0u);
  f_80038EC8(c); return; // 8004AFE0
}

// fn_8004AFE4
void f_8004AFE4(Ctx* __restrict c) {
  trace_call(0x8004AFE4u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004AFE4
  if (!crb(c,2)) return; // 8004AFE8
  f_8003A92C(c); return; // 8004AFEC
  return; // 8004AFF0
}

// fn_8004AFF4
void f_8004AFF4(Ctx* __restrict c) {
  trace_call(0x8004AFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AFF4
  c->r[0]=c->lr; // 8004AFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AFFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B000
  c->r[31]=c->r[3]|c->r[3]; // 8004B004
  c->lr=0x8004B00Cu; f_8003AA04(c); // 8004B008
  c->r[4]=0u+0x00000000u; // 8004B00C
  c->r[3]=0u+0x00000004u; // 8004B010
  c->r[0]=0u+0x00000001u; // 8004B014
  W32(c->r[31]+0x000000A8u,c->r[4]); // 8004B018
  W32(c->r[31]+0x000000ACu,c->r[4]); // 8004B01C
  W32(c->r[31]+0x000000B0u,c->r[3]); // 8004B020
  W8(c->r[31]+0x000000B4u,c->r[0]); // 8004B024
  W32(c->r[31]+0x000000B8u,c->r[4]); // 8004B028
  W32(c->r[31]+0x000000BCu,c->r[4]); // 8004B02C
  W32(c->r[31]+0x000000C0u,c->r[4]); // 8004B030
  W32(c->r[31]+0x000000C4u,c->r[4]); // 8004B034
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B038
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B03C
  c->lr=c->r[0]; // 8004B040
  c->r[1]=c->r[1]+0x00000010u; // 8004B044
  return; // 8004B048
}

// fn_8004B04C
void f_8004B04C(Ctx* __restrict c) {
  trace_call(0x8004B04Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B04C
  c->r[0]=c->lr; // 8004B050
  c->r[6]=0u+0x00000000u; // 8004B054
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B058
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004B05C
  c->r[28]=c->r[3]|c->r[3]; // 8004B060
  c->r[29]=c->r[4]|c->r[4]; // 8004B064
  c->r[30]=c->r[5]|c->r[5]; // 8004B068
  c->r[31]=c->r[7]|c->r[7]; // 8004B06C
  c->lr=0x8004B074u; f_8003AA90(c); // 8004B070
  cmps(c,0,(int32_t)c->r[30],0); // 8004B074
  if (crb(c,2)) { goto L_8004B080; } // 8004B078
  goto L_8004B084; // 8004B07C
L_8004B080:;
  c->r[30]=c->r[28]|c->r[28]; // 8004B080
L_8004B084:;
  c->r[3]=c->r[30]+0x000000A8u; // 8004B084
  c->r[4]=c->r[29]+0x000000A8u; // 8004B088
  c->lr=0x8004B090u; f_8003BDD0(c); // 8004B08C
  c->r[0]=R8(c->r[29]+0x000000B4u); // 8004B090
  c->r[3]=c->r[30]+0x000000B8u; // 8004B094
  W8(c->r[30]+0x000000B4u,c->r[0]); // 8004B098
  c->r[4]=c->r[29]+0x000000B8u; // 8004B09C
  c->lr=0x8004B0A4u; f_8004B0EC(c); // 8004B0A0
  c->r[3]=c->r[30]+0x000000C0u; // 8004B0A4
  c->r[4]=c->r[29]+0x000000C0u; // 8004B0A8
  c->lr=0x8004B0B0u; f_8004B0EC(c); // 8004B0AC
  cmps(c,0,(int32_t)c->r[31],0); // 8004B0B0
  if (crb(c,2)) { goto L_8004B0D8; } // 8004B0B4
  c->r[3]=R32(c->r[28]+0x000000C8u); // 8004B0B8
  cmps(c,0,(int32_t)c->r[3],0); // 8004B0BC
  if (crb(c,1)) { goto L_8004B0D0; } // 8004B0C0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004B0C4
  W32(c->r[28]+0x000000C8u,c->r[0]); // 8004B0C8
  goto L_8004B0D8; // 8004B0CC
L_8004B0D0:;
  c->r[0]=c->r[3]+0x00000001u; // 8004B0D0
  W32(c->r[28]+0x000000C8u,c->r[0]); // 8004B0D4
L_8004B0D8:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004B0D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004B0DC
  c->lr=c->r[0]; // 8004B0E0
  c->r[1]=c->r[1]+0x00000020u; // 8004B0E4
  return; // 8004B0E8
}

// fn_8004B0EC
void f_8004B0EC(Ctx* __restrict c) {
  trace_call(0x8004B0ECu);
  c->r[5]=R32(c->r[4]+0x00000000u); // 8004B0EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 8004B0F0
  W32(c->r[3]+0x00000000u,c->r[5]); // 8004B0F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8004B0F8
  return; // 8004B0FC
}

// fn_8004B100
void f_8004B100(Ctx* __restrict c) {
  trace_call(0x8004B100u);
  c->r[0]=c->r[4]+0x05C00000u; // 8004B100
  cmpu(c,0,c->r[0],0x00000802u); // 8004B104
  if (!crb(c,2)) { goto L_8004B114; } // 8004B108
  c->r[3]=0u+0x00000001u; // 8004B10C
  return; // 8004B110
L_8004B114:;
  c->r[3]=0u+0xD12F0000u; // 8004B114
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004B118
  c->r[0]=c->r[4]-c->r[0]; // 8004B11C
  c->r[0]=cntlz(c->r[0]); // 8004B120
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B124
  return; // 8004B128
}

// fn_8004B12C
void f_8004B12C(Ctx* __restrict c) {
  trace_call(0x8004B12Cu);
  c->r[3]=0u+0x000000CCu; // 8004B12C
  return; // 8004B130
}

// fn_8004B134
void f_8004B134(Ctx* __restrict c) {
  trace_call(0x8004B134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B134
  c->r[0]=c->lr; // 8004B138
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B13C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B140
  c->r[31]=c->r[3]|c->r[3]; // 8004B144
  c->lr=0x8004B14Cu; f_8004ACBC(c); // 8004B148
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004B14C
  c->r[3]=0u+0x80420000u; // 8004B150
  c->r[3]=c->r[3]+0x0000000Cu; // 8004B154
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004B158
  c->r[0]=c->r[0]|0x80000000u; // 8004B15C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004B160
  c->r[3]=c->r[31]|c->r[31]; // 8004B164
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004B168
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004B16C
  c->ctr=c->r[12]; // 8004B170
  if (true) { c->lr=0x8004B178u; dispatch(c,c->ctr); } // 8004B174
  c->r[3]=c->r[31]|c->r[31]; // 8004B178
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B17C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B180
  c->lr=c->r[0]; // 8004B184
  c->r[1]=c->r[1]+0x00000010u; // 8004B188
  return; // 8004B18C
}

// fn_8004B190
void f_8004B190(Ctx* __restrict c) {
  trace_call(0x8004B190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B190
  c->r[0]=c->lr; // 8004B194
  cmps(c,0,(int32_t)c->r[3],0); // 8004B198
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B19C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004B1A0
  c->r[30]=c->r[3]|c->r[3]; // 8004B1A4
  c->r[31]=c->r[4]|c->r[4]; // 8004B1A8
  if (crb(c,2)) { goto L_8004B1C8; } // 8004B1AC
  c->r[4]=0u+0x00000000u; // 8004B1B0
  c->lr=0x8004B1B8u; f_8003ABE0(c); // 8004B1B4
  cmps(c,0,(int32_t)c->r[31],0); // 8004B1B8
  if (!crb(c,1)) { goto L_8004B1C8; } // 8004B1BC
  c->r[3]=c->r[30]|c->r[30]; // 8004B1C0
  c->lr=0x8004B1C8u; f_80244DC0(c); // 8004B1C4
L_8004B1C8:;
  c->r[3]=c->r[30]|c->r[30]; // 8004B1C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004B1CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B1D0
  c->lr=c->r[0]; // 8004B1D4
  c->r[1]=c->r[1]+0x00000010u; // 8004B1D8
  return; // 8004B1DC
}

// fn_8004B1E0
void f_8004B1E0(Ctx* __restrict c) {
  trace_call(0x8004B1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B1E0
  c->r[0]=c->lr; // 8004B1E4
  c->r[3]=0u+0x000000CCu; // 8004B1E8
  c->r[4]=c->r[13]+0xFFFF9212u; // 8004B1EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B1F0
  c->r[5]=0u+0x00000000u; // 8004B1F4
  c->r[6]=0u+0x00001001u; // 8004B1F8
  c->lr=0x8004B200u; f_80244D20(c); // 8004B1FC
  cmps(c,0,(int32_t)c->r[3],0); // 8004B200
  if (crb(c,2)) { goto L_8004B20C; } // 8004B204
  c->lr=0x8004B20Cu; f_8004B134(c); // 8004B208
L_8004B20C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B20C
  c->lr=c->r[0]; // 8004B210
  c->r[1]=c->r[1]+0x00000010u; // 8004B214
  return; // 8004B218
}

// fn_8004B21C
void f_8004B21C(Ctx* __restrict c) {
  trace_call(0x8004B21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B21C
  c->r[0]=c->lr; // 8004B220
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B228
  c->r[31]=c->r[3]|c->r[3]; // 8004B22C
  c->lr=0x8004B234u; f_80244520(c); // 8004B230
  c->r[7]=c->r[3]|c->r[3]; // 8004B234
  c->r[9]=c->r[31]|c->r[31]; // 8004B238
  c->r[3]=0u+0x000000CCu; // 8004B23C
  c->r[4]=c->r[13]+0xFFFF9217u; // 8004B240
  c->r[5]=0u+0x00000000u; // 8004B244
  c->r[6]=0u+0x00002001u; // 8004B248
  c->r[8]=0u+0x00000000u; // 8004B24C
  c->lr=0x8004B254u; f_80242DF0(c); // 8004B250
  c->r[4]=c->r[3]|c->r[3]; // 8004B254
  c->r[3]=0u+0x000000CCu; // 8004B258
  c->r[5]=c->r[13]+0xFFFF921Cu; // 8004B25C
  c->r[6]=0u+0x00000000u; // 8004B260
  c->r[7]=0u+0x00001001u; // 8004B264
  c->lr=0x8004B26Cu; f_80244DB0(c); // 8004B268
  cmps(c,0,(int32_t)c->r[3],0); // 8004B26C
  if (crb(c,2)) { goto L_8004B278; } // 8004B270
  c->lr=0x8004B278u; f_8004B134(c); // 8004B274
L_8004B278:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B27C
  c->lr=c->r[0]; // 8004B280
  c->r[1]=c->r[1]+0x00000010u; // 8004B284
  return; // 8004B288
}

// fn_8004B28C
void f_8004B28C(Ctx* __restrict c) {
  trace_call(0x8004B28Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B28C
  c->r[0]=c->lr; // 8004B290
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B298
  c->r[31]=c->r[3]|c->r[3]; // 8004B29C
  c->lr=0x8004B2A4u; f_8003A6F0(c); // 8004B2A0
  c->r[8]=0u+0x80420000u; // 8004B2A4
  c->r[7]=0u+0x80410000u; // 8004B2A8
  c->r[5]=0u+0x251C0000u; // 8004B2AC
  c->r[4]=0u+0x1CEA0000u; // 8004B2B0
  c->r[3]=0u+0xE8CB0000u; // 8004B2B4
  c->r[8]=c->r[8]+0xFFFFFFD0u; // 8004B2B8
  c->r[0]=c->r[3]+0xFFFFCD62u; // 8004B2BC
  c->r[7]=c->r[7]+0xFFFFBDA7u; // 8004B2C0
  c->r[5]=c->r[5]+0x0000241Eu; // 8004B2C4
  c->r[4]=c->r[4]+0xFFFFC888u; // 8004B2C8
  c->r[6]=0u+0x00000000u; // 8004B2CC
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004B2D0
  c->r[3]=c->r[31]|c->r[31]; // 8004B2D4
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004B2D8
  W32(c->r[31]+0x00000008u,c->r[6]); // 8004B2DC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004B2E0
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004B2E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004B2E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B2EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B2F0
  c->lr=c->r[0]; // 8004B2F4
  c->r[1]=c->r[1]+0x00000010u; // 8004B2F8
  return; // 8004B2FC
}

// fn_8004B300
void f_8004B300(Ctx* __restrict c) {
  trace_call(0x8004B300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B300
  c->r[0]=c->lr; // 8004B304
  cmps(c,0,(int32_t)c->r[4],0); // 8004B308
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B30C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004B310
  c->r[30]=c->r[3]|c->r[3]; // 8004B314
  c->r[31]=c->r[4]|c->r[4]; // 8004B318
  if (crb(c,2)) { goto L_8004B370; } // 8004B31C
  c->r[3]=c->r[31]|c->r[31]; // 8004B320
  c->lr=0x8004B328u; f_80244520(c); // 8004B324
  c->r[7]=c->r[3]|c->r[3]; // 8004B328
  c->r[9]=c->r[31]|c->r[31]; // 8004B32C
  c->r[3]=0u+0x000000A8u; // 8004B330
  c->r[4]=c->r[13]+0xFFFF9221u; // 8004B334
  c->r[5]=0u+0x00000000u; // 8004B338
  c->r[6]=0u+0x00002001u; // 8004B33C
  c->r[8]=0u+0x00000000u; // 8004B340
  c->lr=0x8004B348u; f_80242DF0(c); // 8004B344
  c->r[4]=c->r[3]|c->r[3]; // 8004B348
  c->r[3]=0u+0x000000A8u; // 8004B34C
  c->r[5]=c->r[13]+0xFFFF9226u; // 8004B350
  c->r[6]=0u+0x00000000u; // 8004B354
  c->r[7]=0u+0x00001001u; // 8004B358
  c->lr=0x8004B360u; f_80244DB0(c); // 8004B35C
  cmps(c,0,(int32_t)c->r[3],0); // 8004B360
  if (crb(c,2)) { goto L_8004B390; } // 8004B364
  c->lr=0x8004B36Cu; f_8004B28C(c); // 8004B368
  goto L_8004B390; // 8004B36C
L_8004B370:;
  c->r[3]=0u+0x000000A8u; // 8004B370
  c->r[4]=c->r[13]+0xFFFF922Bu; // 8004B374
  c->r[5]=0u+0x00000000u; // 8004B378
  c->r[6]=0u+0x00001001u; // 8004B37C
  c->lr=0x8004B384u; f_80244D20(c); // 8004B380
  cmps(c,0,(int32_t)c->r[3],0); // 8004B384
  if (crb(c,2)) { goto L_8004B390; } // 8004B388
  c->lr=0x8004B390u; f_8004B28C(c); // 8004B38C
L_8004B390:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004B390
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004B394
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004B398
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B39C
  c->lr=c->r[0]; // 8004B3A0
  c->r[1]=c->r[1]+0x00000010u; // 8004B3A4
  return; // 8004B3A8
}

// fn_8004B3AC
void f_8004B3AC(Ctx* __restrict c) {
  trace_call(0x8004B3ACu);
  f_8003A810(c); return; // 8004B3AC
}

// fn_8004B3B0
void f_8004B3B0(Ctx* __restrict c) {
  trace_call(0x8004B3B0u);
  f_80038EC8(c); return; // 8004B3B0
}

// fn_8004B3B4
void f_8004B3B4(Ctx* __restrict c) {
  trace_call(0x8004B3B4u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004B3B4
  if (!crb(c,2)) return; // 8004B3B8
  f_8003A92C(c); return; // 8004B3BC
  return; // 8004B3C0
}

// fn_8004B3C4
void f_8004B3C4(Ctx* __restrict c) {
  trace_call(0x8004B3C4u);
  f_8003AA04(c); return; // 8004B3C4
}

// fn_8004B3C8
void f_8004B3C8(Ctx* __restrict c) {
  trace_call(0x8004B3C8u);
  c->r[0]=c->r[4]+0x05C00000u; // 8004B3C8
  cmpu(c,0,c->r[0],0x00000802u); // 8004B3CC
  if (!crb(c,2)) { goto L_8004B3DC; } // 8004B3D0
  c->r[3]=0u+0x00000001u; // 8004B3D4
  return; // 8004B3D8
L_8004B3DC:;
  c->r[3]=0u+0xD12F0000u; // 8004B3DC
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004B3E0
  c->r[0]=c->r[4]-c->r[0]; // 8004B3E4
  c->r[0]=cntlz(c->r[0]); // 8004B3E8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B3EC
  return; // 8004B3F0
}

// fn_8004B3F4
void f_8004B3F4(Ctx* __restrict c) {
  trace_call(0x8004B3F4u);
  c->r[3]=0u+0x000000A8u; // 8004B3F4
  return; // 8004B3F8
}

// fn_8004B3FC
void f_8004B3FC(Ctx* __restrict c) {
  trace_call(0x8004B3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B3FC
  c->r[0]=c->lr; // 8004B400
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B408
  c->r[31]=c->r[3]|c->r[3]; // 8004B40C
  c->lr=0x8004B414u; f_8004B28C(c); // 8004B410
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004B414
  c->r[3]=0u+0x80420000u; // 8004B418
  c->r[3]=c->r[3]+0xFFFFFF90u; // 8004B41C
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004B420
  c->r[0]=c->r[0]|0x80000000u; // 8004B424
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004B428
  c->r[3]=c->r[31]|c->r[31]; // 8004B42C
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004B430
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004B434
  c->ctr=c->r[12]; // 8004B438
  if (true) { c->lr=0x8004B440u; dispatch(c,c->ctr); } // 8004B43C
  c->r[3]=c->r[31]|c->r[31]; // 8004B440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B444
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B448
  c->lr=c->r[0]; // 8004B44C
  c->r[1]=c->r[1]+0x00000010u; // 8004B450
  return; // 8004B454
}

// fn_8004B458
void f_8004B458(Ctx* __restrict c) {
  trace_call(0x8004B458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B458
  c->r[0]=c->lr; // 8004B45C
  cmps(c,0,(int32_t)c->r[3],0); // 8004B460
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B464
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004B468
  c->r[30]=c->r[3]|c->r[3]; // 8004B46C
  c->r[31]=c->r[4]|c->r[4]; // 8004B470
  if (crb(c,2)) { goto L_8004B490; } // 8004B474
  c->r[4]=0u+0x00000000u; // 8004B478
  c->lr=0x8004B480u; f_8003ABE0(c); // 8004B47C
  cmps(c,0,(int32_t)c->r[31],0); // 8004B480
  if (!crb(c,1)) { goto L_8004B490; } // 8004B484
  c->r[3]=c->r[30]|c->r[30]; // 8004B488
  c->lr=0x8004B490u; f_80244DC0(c); // 8004B48C
L_8004B490:;
  c->r[3]=c->r[30]|c->r[30]; // 8004B490
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004B494
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B498
  c->lr=c->r[0]; // 8004B49C
  c->r[1]=c->r[1]+0x00000010u; // 8004B4A0
  return; // 8004B4A4
}

// fn_8004B4A8
void f_8004B4A8(Ctx* __restrict c) {
  trace_call(0x8004B4A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B4A8
  c->r[0]=c->lr; // 8004B4AC
  c->r[3]=0u+0x000000A8u; // 8004B4B0
  c->r[4]=c->r[13]+0xFFFF9230u; // 8004B4B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B4B8
  c->r[5]=0u+0x00000000u; // 8004B4BC
  c->r[6]=0u+0x00001001u; // 8004B4C0
  c->lr=0x8004B4C8u; f_80244D20(c); // 8004B4C4
  cmps(c,0,(int32_t)c->r[3],0); // 8004B4C8
  if (crb(c,2)) { goto L_8004B4D4; } // 8004B4CC
  c->lr=0x8004B4D4u; f_8004B3FC(c); // 8004B4D0
L_8004B4D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B4D4
  c->lr=c->r[0]; // 8004B4D8
  c->r[1]=c->r[1]+0x00000010u; // 8004B4DC
  return; // 8004B4E0
}

// fn_8004B4E4
void f_8004B4E4(Ctx* __restrict c) {
  trace_call(0x8004B4E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B4E4
  c->r[0]=c->lr; // 8004B4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B4EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B4F0
  c->r[31]=c->r[3]|c->r[3]; // 8004B4F4
  c->lr=0x8004B4FCu; f_80244520(c); // 8004B4F8
  c->r[7]=c->r[3]|c->r[3]; // 8004B4FC
  c->r[9]=c->r[31]|c->r[31]; // 8004B500
  c->r[3]=0u+0x000000A8u; // 8004B504
  c->r[4]=c->r[13]+0xFFFF9235u; // 8004B508
  c->r[5]=0u+0x00000000u; // 8004B50C
  c->r[6]=0u+0x00002001u; // 8004B510
  c->r[8]=0u+0x00000000u; // 8004B514
  c->lr=0x8004B51Cu; f_80242DF0(c); // 8004B518
  c->r[4]=c->r[3]|c->r[3]; // 8004B51C
  c->r[3]=0u+0x000000A8u; // 8004B520
  c->r[5]=c->r[13]+0xFFFF923Au; // 8004B524
  c->r[6]=0u+0x00000000u; // 8004B528
  c->r[7]=0u+0x00001001u; // 8004B52C
  c->lr=0x8004B534u; f_80244DB0(c); // 8004B530
  cmps(c,0,(int32_t)c->r[3],0); // 8004B534
  if (crb(c,2)) { goto L_8004B540; } // 8004B538
  c->lr=0x8004B540u; f_8004B3FC(c); // 8004B53C
L_8004B540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B544
  c->lr=c->r[0]; // 8004B548
  c->r[1]=c->r[1]+0x00000010u; // 8004B54C
  return; // 8004B550
}

// fn_8004B554
void f_8004B554(Ctx* __restrict c) {
  trace_call(0x8004B554u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B554
  c->r[0]=c->lr; // 8004B558
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B560
  c->r[31]=c->r[3]|c->r[3]; // 8004B564
  c->lr=0x8004B56Cu; f_8003A6F0(c); // 8004B568
  c->r[8]=0u+0x80420000u; // 8004B56C
  c->r[7]=0u+0x80410000u; // 8004B570
  c->r[5]=0u+0x7B320000u; // 8004B574
  c->r[4]=0u+0x19F10000u; // 8004B578
  c->r[3]=0u+0xEDD40000u; // 8004B57C
  c->r[8]=c->r[8]+0xFFFFFF54u; // 8004B580
  c->r[0]=c->r[3]+0xFFFFAB11u; // 8004B584
  c->r[7]=c->r[7]+0xFFFFBDB8u; // 8004B588
  c->r[5]=c->r[5]+0xFFFF9F03u; // 8004B58C
  c->r[4]=c->r[4]+0xFFFFAEFBu; // 8004B590
  c->r[6]=0u+0x00000000u; // 8004B594
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004B598
  c->r[3]=c->r[31]|c->r[31]; // 8004B59C
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004B5A0
  W32(c->r[31]+0x00000008u,c->r[6]); // 8004B5A4
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004B5A8
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004B5AC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004B5B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B5B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B5B8
  c->lr=c->r[0]; // 8004B5BC
  c->r[1]=c->r[1]+0x00000010u; // 8004B5C0
  return; // 8004B5C4
}

// fn_8004B5C8
void f_8004B5C8(Ctx* __restrict c) {
  trace_call(0x8004B5C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B5C8
  c->r[0]=c->lr; // 8004B5CC
  cmps(c,0,(int32_t)c->r[4],0); // 8004B5D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B5D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004B5D8
  c->r[30]=c->r[3]|c->r[3]; // 8004B5DC
  c->r[31]=c->r[4]|c->r[4]; // 8004B5E0
  if (crb(c,2)) { goto L_8004B638; } // 8004B5E4
  c->r[3]=c->r[31]|c->r[31]; // 8004B5E8
  c->lr=0x8004B5F0u; f_80244520(c); // 8004B5EC
  c->r[7]=c->r[3]|c->r[3]; // 8004B5F0
  c->r[9]=c->r[31]|c->r[31]; // 8004B5F4
  c->r[3]=0u+0x000000D4u; // 8004B5F8
  c->r[4]=c->r[13]+0xFFFF923Fu; // 8004B5FC
  c->r[5]=0u+0x00000000u; // 8004B600
  c->r[6]=0u+0x00002001u; // 8004B604
  c->r[8]=0u+0x00000000u; // 8004B608
  c->lr=0x8004B610u; f_80242DF0(c); // 8004B60C
  c->r[4]=c->r[3]|c->r[3]; // 8004B610
  c->r[3]=0u+0x000000D4u; // 8004B614
  c->r[5]=c->r[13]+0xFFFF9244u; // 8004B618
  c->r[6]=0u+0x00000000u; // 8004B61C
  c->r[7]=0u+0x00001001u; // 8004B620
  c->lr=0x8004B628u; f_80244DB0(c); // 8004B624
  cmps(c,0,(int32_t)c->r[3],0); // 8004B628
  if (crb(c,2)) { goto L_8004B658; } // 8004B62C
  c->lr=0x8004B634u; f_8004B554(c); // 8004B630
  goto L_8004B658; // 8004B634
L_8004B638:;
  c->r[3]=0u+0x000000D4u; // 8004B638
  c->r[4]=c->r[13]+0xFFFF9249u; // 8004B63C
  c->r[5]=0u+0x00000000u; // 8004B640
  c->r[6]=0u+0x00001001u; // 8004B644
  c->lr=0x8004B64Cu; f_80244D20(c); // 8004B648
  cmps(c,0,(int32_t)c->r[3],0); // 8004B64C
  if (crb(c,2)) { goto L_8004B658; } // 8004B650
  c->lr=0x8004B658u; f_8004B554(c); // 8004B654
L_8004B658:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004B658
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004B65C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004B660
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B664
  c->lr=c->r[0]; // 8004B668
  c->r[1]=c->r[1]+0x00000010u; // 8004B66C
  return; // 8004B670
}

// fn_8004B674
void f_8004B674(Ctx* __restrict c) {
  trace_call(0x8004B674u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B674
  c->r[0]=c->lr; // 8004B678
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B67C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004B680
  c->r[29]=c->r[3]|c->r[3]; // 8004B684
  c->r[30]=c->r[4]|c->r[4]; // 8004B688
  c->lr=0x8004B690u; f_8003A810(c); // 8004B68C
  c->r[31]=c->r[3]|c->r[3]; // 8004B690
  c->r[3]=c->r[30]|c->r[30]; // 8004B694
  c->lr=0x8004B69Cu; f_8030BD1C(c); // 8004B698
  W32(c->r[29]+0x000000A8u,c->r[3]); // 8004B69C
  c->r[3]=c->r[30]|c->r[30]; // 8004B6A0
  c->lr=0x8004B6A8u; f_8030C0A0(c); // 8004B6A4
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[1]);} // 8004B6A8
  c->r[3]=c->r[30]|c->r[30]; // 8004B6AC
  c->lr=0x8004B6B4u; f_8030C0A0(c); // 8004B6B0
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 8004B6B4
  c->r[3]=c->r[30]|c->r[30]; // 8004B6B8
  c->lr=0x8004B6C0u; f_8030C0A0(c); // 8004B6BC
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 8004B6C0
  c->r[3]=c->r[30]|c->r[30]; // 8004B6C4
  c->lr=0x8004B6CCu; f_8030C0A0(c); // 8004B6C8
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 8004B6CC
  c->r[3]=c->r[30]|c->r[30]; // 8004B6D0
  c->lr=0x8004B6D8u; f_8030BD1C(c); // 8004B6D4
  W32(c->r[29]+0x000000BCu,c->r[3]); // 8004B6D8
  c->r[3]=c->r[30]|c->r[30]; // 8004B6DC
  c->lr=0x8004B6E4u; f_8030C0A0(c); // 8004B6E0
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 8004B6E4
  c->r[3]=c->r[30]|c->r[30]; // 8004B6E8
  c->lr=0x8004B6F0u; f_8030C0A0(c); // 8004B6EC
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 8004B6F0
  c->r[3]=c->r[30]|c->r[30]; // 8004B6F4
  c->lr=0x8004B6FCu; f_8030BD1C(c); // 8004B6F8
  W8(c->r[29]+0x000000C8u,c->r[3]); // 8004B6FC
  c->r[3]=c->r[30]|c->r[30]; // 8004B700
  c->r[4]=0u+0x00000001u; // 8004B704
  c->lr=0x8004B70Cu; f_8030BE30(c); // 8004B708
  W32(c->r[29]+0x000000CCu,c->r[3]); // 8004B70C
  c->r[3]=c->r[30]|c->r[30]; // 8004B710
  c->lr=0x8004B718u; f_8030C0A0(c); // 8004B714
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 8004B718
  c->r[3]=c->r[31]|c->r[31]; // 8004B71C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004B720
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004B724
  c->lr=c->r[0]; // 8004B728
  c->r[1]=c->r[1]+0x00000020u; // 8004B72C
  return; // 8004B730
}

// fn_8004B734
void f_8004B734(Ctx* __restrict c) {
  trace_call(0x8004B734u);
  f_80038EC8(c); return; // 8004B734
}

// fn_8004B738
void f_8004B738(Ctx* __restrict c) {
  trace_call(0x8004B738u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004B738
  if (!crb(c,2)) return; // 8004B73C
  f_8003A92C(c); return; // 8004B740
  return; // 8004B744
}

// fn_8004B748
void f_8004B748(Ctx* __restrict c) {
  trace_call(0x8004B748u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B748
  c->r[0]=c->lr; // 8004B74C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B754
  c->r[31]=c->r[3]|c->r[3]; // 8004B758
  c->lr=0x8004B760u; f_8003AA04(c); // 8004B75C
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B760
  c->r[3]=0u+0x00000050u; // 8004B764
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004B768
  c->r[4]=0u+0x00000004u; // 8004B76C
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B770
  c->r[0]=0u+0x00000000u; // 8004B774
  W32(c->r[31]+0x000000A8u,c->r[3]); // 8004B778
  c->r[3]=0u+0x000003FFu; // 8004B77C
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[2]);} // 8004B780
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[2]);} // 8004B784
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[1]);} // 8004B788
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[1]);} // 8004B78C
  W32(c->r[31]+0x000000BCu,c->r[4]); // 8004B790
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 8004B794
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8004B798
  W8(c->r[31]+0x000000C8u,c->r[0]); // 8004B79C
  c->lr=0x8004B7A4u; f_80248E40(c); // 8004B7A0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B7A4
  W32(c->r[31]+0x000000CCu,c->r[3]); // 8004B7A8
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[0]);} // 8004B7AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B7B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B7B4
  c->lr=c->r[0]; // 8004B7B8
  c->r[1]=c->r[1]+0x00000010u; // 8004B7BC
  return; // 8004B7C0
}

// fn_8004B7C4
void f_8004B7C4(Ctx* __restrict c) {
  trace_call(0x8004B7C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B7C4
  c->r[0]=c->lr; // 8004B7C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B7CC
  c->r[11]=c->r[1]+0x00000020u; // 8004B7D0
  c->lr=0x8004B7D8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004B7D4
  c->r[29]=c->r[3]|c->r[3]; // 8004B7D8
  c->r[30]=c->r[4]|c->r[4]; // 8004B7DC
  c->r[31]=c->r[5]|c->r[5]; // 8004B7E0
  c->r[6]=0u+0x00000000u; // 8004B7E4
  c->lr=0x8004B7ECu; f_8003AA90(c); // 8004B7E8
  cmps(c,0,(int32_t)c->r[31],0); // 8004B7EC
  if (crb(c,2)) { goto L_8004B7F8; } // 8004B7F0
  goto L_8004B7FC; // 8004B7F4
L_8004B7F8:;
  c->r[31]=c->r[29]|c->r[29]; // 8004B7F8
L_8004B7FC:;
  c->r[0]=R32(c->r[30]+0x000000A8u); // 8004B7FC
  c->r[11]=c->r[1]+0x00000020u; // 8004B800
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004B804
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B808
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 8004B80C
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B810
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8004B814
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B818
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8004B81C
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B820
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 8004B824
  c->r[0]=R32(c->r[30]+0x000000BCu); // 8004B828
  W32(c->r[31]+0x000000BCu,c->r[0]); // 8004B82C
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B830
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 8004B834
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B838
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8004B83C
  c->r[0]=R8(c->r[30]+0x000000C8u); // 8004B840
  W8(c->r[31]+0x000000C8u,c->r[0]); // 8004B844
  c->r[0]=R32(c->r[30]+0x000000CCu); // 8004B848
  W32(c->r[31]+0x000000CCu,c->r[0]); // 8004B84C
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B850
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[0]);} // 8004B854
  c->lr=0x8004B85Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004B858
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004B85C
  c->lr=c->r[0]; // 8004B860
  c->r[1]=c->r[1]+0x00000020u; // 8004B864
  return; // 8004B868
}

// fn_8004B86C
void f_8004B86C(Ctx* __restrict c) {
  trace_call(0x8004B86Cu);
  c->r[0]=c->r[4]+0x05C00000u; // 8004B86C
  cmpu(c,0,c->r[0],0x00000802u); // 8004B870
  if (!crb(c,2)) { goto L_8004B880; } // 8004B874
  c->r[3]=0u+0x00000001u; // 8004B878
  return; // 8004B87C
L_8004B880:;
  c->r[3]=0u+0xD12F0000u; // 8004B880
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004B884
  c->r[0]=c->r[4]-c->r[0]; // 8004B888
  c->r[0]=cntlz(c->r[0]); // 8004B88C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004B890
  return; // 8004B894
}

// fn_8004B898
void f_8004B898(Ctx* __restrict c) {
  trace_call(0x8004B898u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B898
  c->r[6]=0u+0x43300000u; // 8004B89C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B8A0
  c->r[7]=R32(c->r[4]+0x000000A8u); // 8004B8A4
  c->r[0]=R32(c->r[5]+0x000000A8u); // 8004B8A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8004B8AC
  c->r[7]=c->r[7]^0x80000000u; // 8004B8B0
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8004B8B4
  c->r[0]=c->r[0]^0x80000000u; // 8004B8B8
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[4]=RF64(ea);} // 8004B8BC
  W32(c->r[1]+0x00000008u,c->r[6]); // 8004B8C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004B8C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B8C8
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 8004B8CC
  W32(c->r[1]+0x00000010u,c->r[6]); // 8004B8D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004B8D4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B8D8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8004B8DC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004B8E0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004B8E4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004B8E8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 8004B8EC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004B8F0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8004B8F4
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004B8F8
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B8FC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B900
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004B904
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004B908
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[2]);} // 8004B90C
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004B910
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B914
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B918
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004B91C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004B920
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 8004B924
  {uint32_t ea=c->r[4]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004B928
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B92C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B930
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004B934
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004B938
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[2]);} // 8004B93C
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004B940
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B944
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B948
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004B94C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004B950
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[2]);} // 8004B954
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004B958
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B95C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B960
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004B964
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004B968
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 8004B96C
  {uint32_t ea=c->r[4]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004B970
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B974
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B978
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8004B97C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004B980
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[2]);} // 8004B984
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004B988
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004B98C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8004B990
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[2]); // 8004B994
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8004B998
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 8004B99C
  c->r[1]=c->r[1]+0x00000020u; // 8004B9A0
  return; // 8004B9A4
}

// fn_8004B9A8
void f_8004B9A8(Ctx* __restrict c) {
  trace_call(0x8004B9A8u);
  c->r[3]=0u+0x000000D4u; // 8004B9A8
  return; // 8004B9AC
}

// fn_8004B9B0
void f_8004B9B0(Ctx* __restrict c) {
  trace_call(0x8004B9B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B9B0
  c->r[0]=c->lr; // 8004B9B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B9B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B9BC
  c->r[31]=c->r[3]|c->r[3]; // 8004B9C0
  c->lr=0x8004B9C8u; f_8004B554(c); // 8004B9C4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004B9C8
  c->r[3]=0u+0x80420000u; // 8004B9CC
  c->r[3]=c->r[3]+0xFFFFFF14u; // 8004B9D0
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004B9D4
  c->r[0]=c->r[0]|0x80000000u; // 8004B9D8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004B9DC
  c->r[3]=c->r[31]|c->r[31]; // 8004B9E0
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004B9E4
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004B9E8
  c->ctr=c->r[12]; // 8004B9EC
  if (true) { c->lr=0x8004B9F4u; dispatch(c,c->ctr); } // 8004B9F0
  c->r[3]=c->r[31]|c->r[31]; // 8004B9F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B9F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B9FC
  c->lr=c->r[0]; // 8004BA00
  c->r[1]=c->r[1]+0x00000010u; // 8004BA04
  return; // 8004BA08
}

// fn_8004BA0C
void f_8004BA0C(Ctx* __restrict c) {
  trace_call(0x8004BA0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BA0C
  c->r[0]=c->lr; // 8004BA10
  cmps(c,0,(int32_t)c->r[3],0); // 8004BA14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BA18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004BA1C
  c->r[30]=c->r[3]|c->r[3]; // 8004BA20
  c->r[31]=c->r[4]|c->r[4]; // 8004BA24
  if (crb(c,2)) { goto L_8004BA44; } // 8004BA28
  c->r[4]=0u+0x00000000u; // 8004BA2C
  c->lr=0x8004BA34u; f_8003ABE0(c); // 8004BA30
  cmps(c,0,(int32_t)c->r[31],0); // 8004BA34
  if (!crb(c,1)) { goto L_8004BA44; } // 8004BA38
  c->r[3]=c->r[30]|c->r[30]; // 8004BA3C
  c->lr=0x8004BA44u; f_80244DC0(c); // 8004BA40
L_8004BA44:;
  c->r[3]=c->r[30]|c->r[30]; // 8004BA44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004BA48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BA4C
  c->lr=c->r[0]; // 8004BA50
  c->r[1]=c->r[1]+0x00000010u; // 8004BA54
  return; // 8004BA58
}

// fn_8004BA5C
void f_8004BA5C(Ctx* __restrict c) {
  trace_call(0x8004BA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BA5C
  c->r[0]=c->lr; // 8004BA60
  c->r[3]=0u+0x000000D4u; // 8004BA64
  c->r[4]=c->r[13]+0xFFFF924Eu; // 8004BA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BA6C
  c->r[5]=0u+0x00000000u; // 8004BA70
  c->r[6]=0u+0x00001001u; // 8004BA74
  c->lr=0x8004BA7Cu; f_80244D20(c); // 8004BA78
  cmps(c,0,(int32_t)c->r[3],0); // 8004BA7C
  if (crb(c,2)) { goto L_8004BA88; } // 8004BA80
  c->lr=0x8004BA88u; f_8004B9B0(c); // 8004BA84
L_8004BA88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BA88
  c->lr=c->r[0]; // 8004BA8C
  c->r[1]=c->r[1]+0x00000010u; // 8004BA90
  return; // 8004BA94
}

// fn_8004BA98
void f_8004BA98(Ctx* __restrict c) {
  trace_call(0x8004BA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BA98
  c->r[0]=c->lr; // 8004BA9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BAA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BAA4
  c->r[31]=c->r[3]|c->r[3]; // 8004BAA8
  c->lr=0x8004BAB0u; f_80244520(c); // 8004BAAC
  c->r[7]=c->r[3]|c->r[3]; // 8004BAB0
  c->r[9]=c->r[31]|c->r[31]; // 8004BAB4
  c->r[3]=0u+0x000000D4u; // 8004BAB8
  c->r[4]=c->r[13]+0xFFFF9253u; // 8004BABC
  c->r[5]=0u+0x00000000u; // 8004BAC0
  c->r[6]=0u+0x00002001u; // 8004BAC4
  c->r[8]=0u+0x00000000u; // 8004BAC8
  c->lr=0x8004BAD0u; f_80242DF0(c); // 8004BACC
  c->r[4]=c->r[3]|c->r[3]; // 8004BAD0
  c->r[3]=0u+0x000000D4u; // 8004BAD4
  c->r[5]=c->r[13]+0xFFFF9258u; // 8004BAD8
  c->r[6]=0u+0x00000000u; // 8004BADC
  c->r[7]=0u+0x00001001u; // 8004BAE0
  c->lr=0x8004BAE8u; f_80244DB0(c); // 8004BAE4
  cmps(c,0,(int32_t)c->r[3],0); // 8004BAE8
  if (crb(c,2)) { goto L_8004BAF4; } // 8004BAEC
  c->lr=0x8004BAF4u; f_8004B9B0(c); // 8004BAF0
L_8004BAF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BAF8
  c->lr=c->r[0]; // 8004BAFC
  c->r[1]=c->r[1]+0x00000010u; // 8004BB00
  return; // 8004BB04
}

// fn_8004BB08
void f_8004BB08(Ctx* __restrict c) {
  trace_call(0x8004BB08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BB08
  c->r[0]=c->lr; // 8004BB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BB10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BB14
  c->r[31]=c->r[3]|c->r[3]; // 8004BB18
  c->lr=0x8004BB20u; f_8004B554(c); // 8004BB1C
  c->r[8]=0u+0x80420000u; // 8004BB20
  c->r[7]=0u+0x80410000u; // 8004BB24
  c->r[5]=0u+0x7B320000u; // 8004BB28
  c->r[4]=0u+0xC03E0000u; // 8004BB2C
  c->r[3]=0u+0xB9C90000u; // 8004BB30
  c->r[8]=c->r[8]+0xFFFFFED8u; // 8004BB34
  c->r[0]=c->r[3]+0x00007B04u; // 8004BB38
  c->r[7]=c->r[7]+0xFFFFBDC9u; // 8004BB3C
  c->r[5]=c->r[5]+0xFFFF9F03u; // 8004BB40
  c->r[4]=c->r[4]+0x00005AABu; // 8004BB44
  c->r[6]=0u+0x00000000u; // 8004BB48
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004BB4C
  c->r[3]=c->r[31]|c->r[31]; // 8004BB50
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004BB54
  W32(c->r[31]+0x00000008u,c->r[6]); // 8004BB58
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004BB5C
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004BB60
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004BB64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BB68
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BB6C
  c->lr=c->r[0]; // 8004BB70
  c->r[1]=c->r[1]+0x00000010u; // 8004BB74
  return; // 8004BB78
}

// fn_8004BB7C
void f_8004BB7C(Ctx* __restrict c) {
  trace_call(0x8004BB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BB7C
  c->r[0]=c->lr; // 8004BB80
  cmps(c,0,(int32_t)c->r[4],0); // 8004BB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BB88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004BB8C
  c->r[30]=c->r[3]|c->r[3]; // 8004BB90
  c->r[31]=c->r[4]|c->r[4]; // 8004BB94
  if (crb(c,2)) { goto L_8004BBEC; } // 8004BB98
  c->r[3]=c->r[31]|c->r[31]; // 8004BB9C
  c->lr=0x8004BBA4u; f_80244520(c); // 8004BBA0
  c->r[7]=c->r[3]|c->r[3]; // 8004BBA4
  c->r[9]=c->r[31]|c->r[31]; // 8004BBA8
  c->r[3]=0u+0x000000D4u; // 8004BBAC
  c->r[4]=c->r[13]+0xFFFF925Du; // 8004BBB0
  c->r[5]=0u+0x00000000u; // 8004BBB4
  c->r[6]=0u+0x00002001u; // 8004BBB8
  c->r[8]=0u+0x00000000u; // 8004BBBC
  c->lr=0x8004BBC4u; f_80242DF0(c); // 8004BBC0
  c->r[4]=c->r[3]|c->r[3]; // 8004BBC4
  c->r[3]=0u+0x000000D4u; // 8004BBC8
  c->r[5]=c->r[13]+0xFFFF9262u; // 8004BBCC
  c->r[6]=0u+0x00000000u; // 8004BBD0
  c->r[7]=0u+0x00001001u; // 8004BBD4
  c->lr=0x8004BBDCu; f_80244DB0(c); // 8004BBD8
  cmps(c,0,(int32_t)c->r[3],0); // 8004BBDC
  if (crb(c,2)) { goto L_8004BC0C; } // 8004BBE0
  c->lr=0x8004BBE8u; f_8004BB08(c); // 8004BBE4
  goto L_8004BC0C; // 8004BBE8
L_8004BBEC:;
  c->r[3]=0u+0x000000D4u; // 8004BBEC
  c->r[4]=c->r[13]+0xFFFF9267u; // 8004BBF0
  c->r[5]=0u+0x00000000u; // 8004BBF4
  c->r[6]=0u+0x00001001u; // 8004BBF8
  c->lr=0x8004BC00u; f_80244D20(c); // 8004BBFC
  cmps(c,0,(int32_t)c->r[3],0); // 8004BC00
  if (crb(c,2)) { goto L_8004BC0C; } // 8004BC04
  c->lr=0x8004BC0Cu; f_8004BB08(c); // 8004BC08
L_8004BC0C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004BC0C
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004BC10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004BC14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BC18
  c->lr=c->r[0]; // 8004BC1C
  c->r[1]=c->r[1]+0x00000010u; // 8004BC20
  return; // 8004BC24
}

// fn_8004BC28
void f_8004BC28(Ctx* __restrict c) {
  trace_call(0x8004BC28u);
  f_8004B674(c); return; // 8004BC28
}

// fn_8004BC2C
void f_8004BC2C(Ctx* __restrict c) {
  trace_call(0x8004BC2Cu);
  f_80038EC8(c); return; // 8004BC2C
}

// fn_8004BC30
void f_8004BC30(Ctx* __restrict c) {
  trace_call(0x8004BC30u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004BC30
  if (!crb(c,2)) return; // 8004BC34
  f_8003A92C(c); return; // 8004BC38
  return; // 8004BC3C
}

// fn_8004BC40
void f_8004BC40(Ctx* __restrict c) {
  trace_call(0x8004BC40u);
  f_8004B748(c); return; // 8004BC40
}

// fn_8004BC44
void f_8004BC44(Ctx* __restrict c) {
  trace_call(0x8004BC44u);
  c->r[0]=c->r[4]+0x122D0000u; // 8004BC44
  cmpu(c,0,c->r[0],0x0000AB11u); // 8004BC48
  if (!crb(c,2)) { goto L_8004BC58; } // 8004BC4C
  c->r[3]=0u+0x00000001u; // 8004BC50
  return; // 8004BC54
L_8004BC58:;
  c->r[0]=c->r[4]+0x05C00000u; // 8004BC58
  cmpu(c,0,c->r[0],0x00000802u); // 8004BC5C
  if (!crb(c,2)) { goto L_8004BC6C; } // 8004BC60
  c->r[3]=0u+0x00000001u; // 8004BC64
  return; // 8004BC68
L_8004BC6C:;
  c->r[3]=0u+0xD12F0000u; // 8004BC6C
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004BC70
  c->r[0]=c->r[4]-c->r[0]; // 8004BC74
  c->r[0]=cntlz(c->r[0]); // 8004BC78
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004BC7C
  return; // 8004BC80
}

// fn_8004BC84
void f_8004BC84(Ctx* __restrict c) {
  trace_call(0x8004BC84u);
  f_8004B898(c); return; // 8004BC84
}

// fn_8004BC88
void f_8004BC88(Ctx* __restrict c) {
  trace_call(0x8004BC88u);
  c->r[3]=0u+0x000000D4u; // 8004BC88
  return; // 8004BC8C
}

// fn_8004BC90
void f_8004BC90(Ctx* __restrict c) {
  trace_call(0x8004BC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BC90
  c->r[0]=c->lr; // 8004BC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BC98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BC9C
  c->r[31]=c->r[3]|c->r[3]; // 8004BCA0
  c->lr=0x8004BCA8u; f_8004BB08(c); // 8004BCA4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004BCA8
  c->r[3]=0u+0x80420000u; // 8004BCAC
  c->r[3]=c->r[3]+0xFFFFFE98u; // 8004BCB0
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004BCB4
  c->r[0]=c->r[0]|0x80000000u; // 8004BCB8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004BCBC
  c->r[3]=c->r[31]|c->r[31]; // 8004BCC0
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004BCC4
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004BCC8
  c->ctr=c->r[12]; // 8004BCCC
  if (true) { c->lr=0x8004BCD4u; dispatch(c,c->ctr); } // 8004BCD0
  c->r[3]=c->r[31]|c->r[31]; // 8004BCD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BCDC
  c->lr=c->r[0]; // 8004BCE0
  c->r[1]=c->r[1]+0x00000010u; // 8004BCE4
  return; // 8004BCE8
}

// fn_8004BCEC
void f_8004BCEC(Ctx* __restrict c) {
  trace_call(0x8004BCECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BCEC
  c->r[0]=c->lr; // 8004BCF0
  cmps(c,0,(int32_t)c->r[3],0); // 8004BCF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BCF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004BCFC
  c->r[30]=c->r[3]|c->r[3]; // 8004BD00
  c->r[31]=c->r[4]|c->r[4]; // 8004BD04
  if (crb(c,2)) { goto L_8004BD28; } // 8004BD08
  if (crb(c,2)) { goto L_8004BD18; } // 8004BD0C
  c->r[4]=0u+0x00000000u; // 8004BD10
  c->lr=0x8004BD18u; f_8003ABE0(c); // 8004BD14
L_8004BD18:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004BD18
  if (!crb(c,1)) { goto L_8004BD28; } // 8004BD1C
  c->r[3]=c->r[30]|c->r[30]; // 8004BD20
  c->lr=0x8004BD28u; f_80244DC0(c); // 8004BD24
L_8004BD28:;
  c->r[3]=c->r[30]|c->r[30]; // 8004BD28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004BD2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BD30
  c->lr=c->r[0]; // 8004BD34
  c->r[1]=c->r[1]+0x00000010u; // 8004BD38
  return; // 8004BD3C
}

// fn_8004BD40
void f_8004BD40(Ctx* __restrict c) {
  trace_call(0x8004BD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BD40
  c->r[0]=c->lr; // 8004BD44
  c->r[3]=0u+0x000000D4u; // 8004BD48
  c->r[4]=c->r[13]+0xFFFF926Cu; // 8004BD4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BD50
  c->r[5]=0u+0x00000000u; // 8004BD54
  c->r[6]=0u+0x00001001u; // 8004BD58
  c->lr=0x8004BD60u; f_80244D20(c); // 8004BD5C
  cmps(c,0,(int32_t)c->r[3],0); // 8004BD60
  if (crb(c,2)) { goto L_8004BD6C; } // 8004BD64
  c->lr=0x8004BD6Cu; f_8004BC90(c); // 8004BD68
L_8004BD6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BD6C
  c->lr=c->r[0]; // 8004BD70
  c->r[1]=c->r[1]+0x00000010u; // 8004BD74
  return; // 8004BD78
}

// fn_8004BD7C
void f_8004BD7C(Ctx* __restrict c) {
  trace_call(0x8004BD7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BD7C
  c->r[0]=c->lr; // 8004BD80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BD84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BD88
  c->r[31]=c->r[3]|c->r[3]; // 8004BD8C
  c->lr=0x8004BD94u; f_80244520(c); // 8004BD90
  c->r[7]=c->r[3]|c->r[3]; // 8004BD94
  c->r[9]=c->r[31]|c->r[31]; // 8004BD98
  c->r[3]=0u+0x000000D4u; // 8004BD9C
  c->r[4]=c->r[13]+0xFFFF9271u; // 8004BDA0
  c->r[5]=0u+0x00000000u; // 8004BDA4
  c->r[6]=0u+0x00002001u; // 8004BDA8
  c->r[8]=0u+0x00000000u; // 8004BDAC
  c->lr=0x8004BDB4u; f_80242DF0(c); // 8004BDB0
  c->r[4]=c->r[3]|c->r[3]; // 8004BDB4
  c->r[3]=0u+0x000000D4u; // 8004BDB8
  c->r[5]=c->r[13]+0xFFFF9276u; // 8004BDBC
  c->r[6]=0u+0x00000000u; // 8004BDC0
  c->r[7]=0u+0x00001001u; // 8004BDC4
  c->lr=0x8004BDCCu; f_80244DB0(c); // 8004BDC8
  cmps(c,0,(int32_t)c->r[3],0); // 8004BDCC
  if (crb(c,2)) { goto L_8004BDD8; } // 8004BDD0
  c->lr=0x8004BDD8u; f_8004BC90(c); // 8004BDD4
L_8004BDD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BDD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BDDC
  c->lr=c->r[0]; // 8004BDE0
  c->r[1]=c->r[1]+0x00000010u; // 8004BDE4
  return; // 8004BDE8
}

// fn_8004BDEC
void f_8004BDEC(Ctx* __restrict c) {
  trace_call(0x8004BDECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BDEC
  c->r[0]=c->lr; // 8004BDF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BDF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BDF8
  c->r[31]=c->r[3]|c->r[3]; // 8004BDFC
  c->lr=0x8004BE04u; f_8004B554(c); // 8004BE00
  c->r[8]=0u+0x80420000u; // 8004BE04
  c->r[6]=0u+0x80410000u; // 8004BE08
  c->r[7]=0u+0x00000000u; // 8004BE0C
  c->r[5]=0u+0xC3E30000u; // 8004BE10
  c->r[4]=0u+0x2E490000u; // 8004BE14
  c->r[3]=0u+0x7CD70000u; // 8004BE18
  c->r[0]=c->r[3]+0xFFFFCC1Au; // 8004BE1C
  c->r[8]=c->r[8]+0xFFFFFE5Cu; // 8004BE20
  c->r[6]=c->r[6]+0xFFFFBDE3u; // 8004BE24
  c->r[5]=c->r[5]+0xFFFFC616u; // 8004BE28
  c->r[4]=c->r[4]+0x000033B6u; // 8004BE2C
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004BE30
  c->r[3]=c->r[31]|c->r[31]; // 8004BE34
  W32(c->r[31]+0x000000ECu,c->r[7]); // 8004BE38
  W32(c->r[31]+0x00000000u,c->r[6]); // 8004BE3C
  W32(c->r[31]+0x00000008u,c->r[7]); // 8004BE40
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004BE44
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004BE48
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004BE4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BE50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BE54
  c->lr=c->r[0]; // 8004BE58
  c->r[1]=c->r[1]+0x00000010u; // 8004BE5C
  return; // 8004BE60
}

// fn_8004BE64
void f_8004BE64(Ctx* __restrict c) {
  trace_call(0x8004BE64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BE64
  c->r[0]=c->lr; // 8004BE68
  cmps(c,0,(int32_t)c->r[4],0); // 8004BE6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BE70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004BE74
  c->r[30]=c->r[3]|c->r[3]; // 8004BE78
  c->r[31]=c->r[4]|c->r[4]; // 8004BE7C
  if (crb(c,2)) { goto L_8004BED4; } // 8004BE80
  c->r[3]=c->r[31]|c->r[31]; // 8004BE84
  c->lr=0x8004BE8Cu; f_80244520(c); // 8004BE88
  c->r[7]=c->r[3]|c->r[3]; // 8004BE8C
  c->r[9]=c->r[31]|c->r[31]; // 8004BE90
  c->r[3]=0u+0x000000F0u; // 8004BE94
  c->r[4]=c->r[13]+0xFFFF927Bu; // 8004BE98
  c->r[5]=0u+0x00000000u; // 8004BE9C
  c->r[6]=0u+0x00002001u; // 8004BEA0
  c->r[8]=0u+0x00000000u; // 8004BEA4
  c->lr=0x8004BEACu; f_80242DF0(c); // 8004BEA8
  c->r[4]=c->r[3]|c->r[3]; // 8004BEAC
  c->r[3]=0u+0x000000F0u; // 8004BEB0
  c->r[5]=c->r[13]+0xFFFF9280u; // 8004BEB4
  c->r[6]=0u+0x00000000u; // 8004BEB8
  c->r[7]=0u+0x00001001u; // 8004BEBC
  c->lr=0x8004BEC4u; f_80244DB0(c); // 8004BEC0
  cmps(c,0,(int32_t)c->r[3],0); // 8004BEC4
  if (crb(c,2)) { goto L_8004BEF4; } // 8004BEC8
  c->lr=0x8004BED0u; f_8004BDEC(c); // 8004BECC
  goto L_8004BEF4; // 8004BED0
L_8004BED4:;
  c->r[3]=0u+0x000000F0u; // 8004BED4
  c->r[4]=c->r[13]+0xFFFF9285u; // 8004BED8
  c->r[5]=0u+0x00000000u; // 8004BEDC
  c->r[6]=0u+0x00001001u; // 8004BEE0
  c->lr=0x8004BEE8u; f_80244D20(c); // 8004BEE4
  cmps(c,0,(int32_t)c->r[3],0); // 8004BEE8
  if (crb(c,2)) { goto L_8004BEF4; } // 8004BEEC
  c->lr=0x8004BEF4u; f_8004BDEC(c); // 8004BEF0
L_8004BEF4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004BEF4
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004BEF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004BEFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BF00
  c->lr=c->r[0]; // 8004BF04
  c->r[1]=c->r[1]+0x00000010u; // 8004BF08
  return; // 8004BF0C
}

// fn_8004BF10
void f_8004BF10(Ctx* __restrict c) {
  trace_call(0x8004BF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BF10
  c->r[0]=c->lr; // 8004BF14
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004BF18
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004BF1C
  c->r[29]=c->r[3]|c->r[3]; // 8004BF20
  c->r[30]=c->r[4]|c->r[4]; // 8004BF24
  c->lr=0x8004BF2Cu; f_8004B674(c); // 8004BF28
  c->r[31]=c->r[3]|c->r[3]; // 8004BF2C
  c->r[3]=c->r[30]|c->r[30]; // 8004BF30
  c->r[4]=0u+0x00000000u; // 8004BF34
  c->lr=0x8004BF3Cu; f_8030BE30(c); // 8004BF38
  W32(c->r[29]+0x000000D4u,c->r[3]); // 8004BF3C
  c->r[0]=0u+0x00000000u; // 8004BF40
  c->r[3]=c->r[30]|c->r[30]; // 8004BF44
  W32(c->r[29]+0x000000D8u,c->r[0]); // 8004BF48
  c->lr=0x8004BF50u; f_8030BD1C(c); // 8004BF4C
  W32(c->r[29]+0x000000DCu,c->r[3]); // 8004BF50
  c->r[3]=c->r[30]|c->r[30]; // 8004BF54
  c->lr=0x8004BF5Cu; f_8030BD1C(c); // 8004BF58
  W8(c->r[29]+0x000000E0u,c->r[3]); // 8004BF5C
  c->r[3]=c->r[30]|c->r[30]; // 8004BF60
  c->lr=0x8004BF68u; f_8030C0A0(c); // 8004BF64
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[1]);} // 8004BF68
  c->r[3]=c->r[30]|c->r[30]; // 8004BF6C
  c->lr=0x8004BF74u; f_8030C0A0(c); // 8004BF70
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 8004BF74
  c->r[3]=c->r[31]|c->r[31]; // 8004BF78
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004BF7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004BF80
  c->lr=c->r[0]; // 8004BF84
  c->r[1]=c->r[1]+0x00000020u; // 8004BF88
  return; // 8004BF8C
}

// fn_8004BF90
void f_8004BF90(Ctx* __restrict c) {
  trace_call(0x8004BF90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BF90
  c->r[0]=c->lr; // 8004BF94
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004BF98
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004BF9C
  c->r[27]=c->r[3]|c->r[3]; // 8004BFA0
  c->r[28]=c->r[4]|c->r[4]; // 8004BFA4
  c->r[29]=c->r[5]|c->r[5]; // 8004BFA8
  c->r[30]=c->r[6]|c->r[6]; // 8004BFAC
  c->r[7]=R32(c->r[3]+0x000000ECu); // 8004BFB0
  cmps(c,0,(int32_t)c->r[7],0); // 8004BFB4
  if (!crb(c,0)) { goto L_8004BFC8; } // 8004BFB8
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8004BFBC
  W32(c->r[3]+0x000000ECu,c->r[0]); // 8004BFC0
  goto L_8004BFD8; // 8004BFC4
L_8004BFC8:;
  c->r[0]=c->r[7]+0x00000001u; // 8004BFC8
  W32(c->r[3]+0x000000ECu,c->r[0]); // 8004BFCC
  cmps(c,0,(int32_t)c->r[0],1); // 8004BFD0
  if (crb(c,1)) { goto L_8004C098; } // 8004BFD4
L_8004BFD8:;
  c->r[3]=c->r[27]|c->r[27]; // 8004BFD8
  c->r[4]=c->r[28]|c->r[28]; // 8004BFDC
  c->r[5]=c->r[29]|c->r[29]; // 8004BFE0
  c->r[6]=c->r[30]|c->r[30]; // 8004BFE4
  c->lr=0x8004BFECu; f_802B11C0(c); // 8004BFE8
  c->r[4]=R32(c->r[27]+0x000000D4u); // 8004BFEC
  cmps(c,0,(int32_t)c->r[4],0); // 8004BFF0
  if (crb(c,2)) { goto L_8004C098; } // 8004BFF4
  c->r[0]=0u+0x00000001u; // 8004BFF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004BFFC
  c->r[6]=c->r[28]|c->r[28]; // 8004C000
  c->r[7]=c->r[29]|c->r[29]; // 8004C004
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8004C008
  c->r[8]=c->r[30]|c->r[30]; // 8004C00C
  c->r[9]=R32(c->r[27]+0x000000DCu); // 8004C010
  c->r[5]=0u+0x00000001u; // 8004C014
  c->r[10]=0u+0x00000001u; // 8004C018
  c->lr=0x8004C020u; f_80281A84(c); // 8004C01C
  cmps(c,0,(int32_t)c->r[3],0); // 8004C020
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004C024
  if (crb(c,2)) { goto L_8004C034; } // 8004C028
  c->lr=0x8004C030u; f_80295B6C(c); // 8004C02C
  goto L_8004C098; // 8004C030
L_8004C034:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 8004C034
  c->r[4]=c->r[30]|c->r[30]; // 8004C038
  c->r[5]=c->r[29]|c->r[29]; // 8004C03C
  c->lr=0x8004C044u; f_802C0F98(c); // 8004C040
  c->r[31]=c->r[3]|c->r[3]; // 8004C044
  c->r[3]=0u+0x00000044u; // 8004C048
  c->r[4]=c->r[13]+0xFFFF928Au; // 8004C04C
  c->r[5]=0u+0x00000000u; // 8004C050
  c->r[6]=0u+0x00001001u; // 8004C054
  c->lr=0x8004C05Cu; f_80244D20(c); // 8004C058
  cmps(c,0,(int32_t)c->r[3],0); // 8004C05C
  if (crb(c,2)) { goto L_8004C074; } // 8004C060
  c->r[5]=R32(c->r[27]+0x000000D4u); // 8004C064
  c->r[4]=c->r[31]|c->r[31]; // 8004C068
  c->r[6]=0u+0x00000001u; // 8004C06C
  c->lr=0x8004C074u; f_8029316C(c); // 8004C070
L_8004C074:;
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004C074
  c->r[4]=c->r[28]|c->r[28]; // 8004C078
  c->r[7]=R32(c->r[27]+0x000000DCu); // 8004C07C
  c->r[5]=c->r[29]|c->r[29]; // 8004C080
  c->r[6]=c->r[30]|c->r[30]; // 8004C084
  c->r[8]=0u+0x00000001u; // 8004C088
  c->r[9]=0u+0x00000000u; // 8004C08C
  c->lr=0x8004C094u; f_8027FFF4(c); // 8004C090
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004C094
L_8004C098:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004C098
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004C09C
  c->lr=c->r[0]; // 8004C0A0
  c->r[1]=c->r[1]+0x00000030u; // 8004C0A4
  return; // 8004C0A8
}

// fn_8004C0AC
void f_8004C0AC(Ctx* __restrict c) {
  trace_call(0x8004C0ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C0AC
  c->r[0]=c->lr; // 8004C0B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C0B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C0B8
  c->r[31]=c->r[3]|c->r[3]; // 8004C0BC
  c->r[0]=R32(c->r[3]+0x000000ECu); // 8004C0C0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004C0C4
  W32(c->r[3]+0x000000ECu,c->r[0]); // 8004C0C8
  if (!crb(c,2)) { goto L_8004C0EC; } // 8004C0CC
  c->lr=0x8004C0D4u; f_802B11D0(c); // 8004C0D0
  c->r[3]=R32(c->r[31]+0x000000D8u); // 8004C0D4
  cmps(c,0,(int32_t)c->r[3],0); // 8004C0D8
  if (crb(c,2)) { goto L_8004C0EC; } // 8004C0DC
  c->lr=0x8004C0E4u; f_80295B7C(c); // 8004C0E0
  c->r[0]=0u+0x00000000u; // 8004C0E4
  W32(c->r[31]+0x000000D8u,c->r[0]); // 8004C0E8
L_8004C0EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C0EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C0F0
  c->lr=c->r[0]; // 8004C0F4
  c->r[1]=c->r[1]+0x00000010u; // 8004C0F8
  return; // 8004C0FC
}

// fn_8004C100
void f_8004C100(Ctx* __restrict c) {
  trace_call(0x8004C100u);
  f_80038EC8(c); return; // 8004C100
}

// fn_8004C104
void f_8004C104(Ctx* __restrict c) {
  trace_call(0x8004C104u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004C104
  if (!crb(c,2)) return; // 8004C108
  f_8003A92C(c); return; // 8004C10C
  return; // 8004C110
}

// fn_8004C114
void f_8004C114(Ctx* __restrict c) {
  trace_call(0x8004C114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C114
  c->r[0]=c->lr; // 8004C118
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C11C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C120
  c->r[31]=c->r[3]|c->r[3]; // 8004C124
  c->lr=0x8004C12Cu; f_8004B748(c); // 8004C128
  {uint32_t ea=c->r[2]+0xFFFF86FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C12C
  c->r[4]=0u+0x00000000u; // 8004C130
  {uint32_t ea=c->r[2]+0xFFFF8698u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C134
  c->r[3]=0u+0x00000004u; // 8004C138
  c->r[0]=0u+0x00000001u; // 8004C13C
  W32(c->r[31]+0x000000D4u,c->r[4]); // 8004C140
  W32(c->r[31]+0x000000D8u,c->r[4]); // 8004C144
  W32(c->r[31]+0x000000DCu,c->r[3]); // 8004C148
  W8(c->r[31]+0x000000E0u,c->r[0]); // 8004C14C
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[1]);} // 8004C150
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 8004C154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C158
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C15C
  c->lr=c->r[0]; // 8004C160
  c->r[1]=c->r[1]+0x00000010u; // 8004C164
  return; // 8004C168
}

// fn_8004C16C
void f_8004C16C(Ctx* __restrict c) {
  trace_call(0x8004C16Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C16C
  c->r[0]=c->lr; // 8004C170
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004C174
  c->r[11]=c->r[1]+0x00000020u; // 8004C178
  c->lr=0x8004C180u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004C17C
  c->r[28]=c->r[3]|c->r[3]; // 8004C180
  c->r[29]=c->r[4]|c->r[4]; // 8004C184
  c->r[30]=c->r[5]|c->r[5]; // 8004C188
  c->r[31]=c->r[7]|c->r[7]; // 8004C18C
  c->r[6]=0u+0x00000000u; // 8004C190
  c->lr=0x8004C198u; f_8004B7C4(c); // 8004C194
  cmps(c,0,(int32_t)c->r[30],0); // 8004C198
  if (crb(c,2)) { goto L_8004C1A4; } // 8004C19C
  goto L_8004C1A8; // 8004C1A0
L_8004C1A4:;
  c->r[30]=c->r[28]|c->r[28]; // 8004C1A4
L_8004C1A8:;
  c->r[3]=c->r[30]+0x000000D4u; // 8004C1A8
  c->r[4]=c->r[29]+0x000000D4u; // 8004C1AC
  c->lr=0x8004C1B4u; f_8003BDD0(c); // 8004C1B0
  c->r[0]=R8(c->r[29]+0x000000E0u); // 8004C1B4
  cmps(c,0,(int32_t)c->r[31],0); // 8004C1B8
  W8(c->r[30]+0x000000E0u,c->r[0]); // 8004C1BC
  {uint32_t ea=c->r[29]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C1C0
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[0]);} // 8004C1C4
  {uint32_t ea=c->r[29]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C1C8
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 8004C1CC
  if (crb(c,2)) { goto L_8004C1F4; } // 8004C1D0
  c->r[3]=R32(c->r[28]+0x000000ECu); // 8004C1D4
  cmps(c,0,(int32_t)c->r[3],0); // 8004C1D8
  if (crb(c,1)) { goto L_8004C1EC; } // 8004C1DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004C1E0
  W32(c->r[28]+0x000000ECu,c->r[0]); // 8004C1E4
  goto L_8004C1F4; // 8004C1E8
L_8004C1EC:;
  c->r[0]=c->r[3]+0x00000001u; // 8004C1EC
  W32(c->r[28]+0x000000ECu,c->r[0]); // 8004C1F0
L_8004C1F4:;
  c->r[11]=c->r[1]+0x00000020u; // 8004C1F4
  c->lr=0x8004C1FCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004C1F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004C1FC
  c->lr=c->r[0]; // 8004C200
  c->r[1]=c->r[1]+0x00000020u; // 8004C204
  return; // 8004C208
}

// fn_8004C20C
void f_8004C20C(Ctx* __restrict c) {
  trace_call(0x8004C20Cu);
  c->r[0]=c->r[4]+0x122D0000u; // 8004C20C
  cmpu(c,0,c->r[0],0x0000AB11u); // 8004C210
  if (!crb(c,2)) { goto L_8004C220; } // 8004C214
  c->r[3]=0u+0x00000001u; // 8004C218
  return; // 8004C21C
L_8004C220:;
  c->r[0]=c->r[4]+0x05C00000u; // 8004C220
  cmpu(c,0,c->r[0],0x00000802u); // 8004C224
  if (!crb(c,2)) { goto L_8004C234; } // 8004C228
  c->r[3]=0u+0x00000001u; // 8004C22C
  return; // 8004C230
L_8004C234:;
  c->r[3]=0u+0xD12F0000u; // 8004C234
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004C238
  c->r[0]=c->r[4]-c->r[0]; // 8004C23C
  c->r[0]=cntlz(c->r[0]); // 8004C240
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004C244
  return; // 8004C248
}

// fn_8004C24C
void f_8004C24C(Ctx* __restrict c) {
  trace_call(0x8004C24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C24C
  c->r[0]=c->lr; // 8004C250
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004C254
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8004C258
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8004C25C
  c->r[11]=c->r[1]+0x00000020u; // 8004C260
  c->lr=0x8004C268u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004C264
  c->f[31]=c->f[1]; // 8004C268
  c->r[29]=c->r[3]|c->r[3]; // 8004C26C
  c->r[31]=c->r[4]|c->r[4]; // 8004C270
  c->r[30]=c->r[5]|c->r[5]; // 8004C274
  c->lr=0x8004C27Cu; f_8004B898(c); // 8004C278
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C27C
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C280
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 8004C284
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C288
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004C28C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8004C290
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004C294
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[0]);} // 8004C298
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C29C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C2A0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8004C2A4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004C2A8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004C2AC
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8004C2B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8004C2B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8004C2B8
  c->r[11]=c->r[1]+0x00000020u; // 8004C2BC
  c->lr=0x8004C2C4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004C2C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004C2C4
  c->lr=c->r[0]; // 8004C2C8
  c->r[1]=c->r[1]+0x00000030u; // 8004C2CC
  return; // 8004C2D0
}

// fn_8004C2D4
void f_8004C2D4(Ctx* __restrict c) {
  trace_call(0x8004C2D4u);
  c->r[3]=0u+0x000000F0u; // 8004C2D4
  return; // 8004C2D8
}

// fn_8004C2DC
void f_8004C2DC(Ctx* __restrict c) {
  trace_call(0x8004C2DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C2DC
  c->r[0]=c->lr; // 8004C2E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C2E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C2E8
  c->r[31]=c->r[3]|c->r[3]; // 8004C2EC
  c->lr=0x8004C2F4u; f_8004BDEC(c); // 8004C2F0
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004C2F4
  c->r[3]=0u+0x80420000u; // 8004C2F8
  c->r[3]=c->r[3]+0xFFFFFE1Cu; // 8004C2FC
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004C300
  c->r[0]=c->r[0]|0x80000000u; // 8004C304
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004C308
  c->r[3]=c->r[31]|c->r[31]; // 8004C30C
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004C310
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004C314
  c->ctr=c->r[12]; // 8004C318
  if (true) { c->lr=0x8004C320u; dispatch(c,c->ctr); } // 8004C31C
  c->r[3]=c->r[31]|c->r[31]; // 8004C320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C324
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C328
  c->lr=c->r[0]; // 8004C32C
  c->r[1]=c->r[1]+0x00000010u; // 8004C330
  return; // 8004C334
}

// fn_8004C338
void f_8004C338(Ctx* __restrict c) {
  trace_call(0x8004C338u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C338
  c->r[0]=c->lr; // 8004C33C
  cmps(c,0,(int32_t)c->r[3],0); // 8004C340
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C344
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004C348
  c->r[30]=c->r[3]|c->r[3]; // 8004C34C
  c->r[31]=c->r[4]|c->r[4]; // 8004C350
  if (crb(c,2)) { goto L_8004C374; } // 8004C354
  if (crb(c,2)) { goto L_8004C364; } // 8004C358
  c->r[4]=0u+0x00000000u; // 8004C35C
  c->lr=0x8004C364u; f_8003ABE0(c); // 8004C360
L_8004C364:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004C364
  if (!crb(c,1)) { goto L_8004C374; } // 8004C368
  c->r[3]=c->r[30]|c->r[30]; // 8004C36C
  c->lr=0x8004C374u; f_80244DC0(c); // 8004C370
L_8004C374:;
  c->r[3]=c->r[30]|c->r[30]; // 8004C374
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004C378
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C37C
  c->lr=c->r[0]; // 8004C380
  c->r[1]=c->r[1]+0x00000010u; // 8004C384
  return; // 8004C388
}

// fn_8004C38C
void f_8004C38C(Ctx* __restrict c) {
  trace_call(0x8004C38Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C38C
  c->r[0]=c->lr; // 8004C390
  c->r[3]=0u+0x000000F0u; // 8004C394
  c->r[4]=c->r[13]+0xFFFF928Fu; // 8004C398
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C39C
  c->r[5]=0u+0x00000000u; // 8004C3A0
  c->r[6]=0u+0x00001001u; // 8004C3A4
  c->lr=0x8004C3ACu; f_80244D20(c); // 8004C3A8
  cmps(c,0,(int32_t)c->r[3],0); // 8004C3AC
  if (crb(c,2)) { goto L_8004C3B8; } // 8004C3B0
  c->lr=0x8004C3B8u; f_8004C2DC(c); // 8004C3B4
L_8004C3B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C3B8
  c->lr=c->r[0]; // 8004C3BC
  c->r[1]=c->r[1]+0x00000010u; // 8004C3C0
  return; // 8004C3C4
}

// fn_8004C3C8
void f_8004C3C8(Ctx* __restrict c) {
  trace_call(0x8004C3C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C3C8
  c->r[0]=c->lr; // 8004C3CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C3D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C3D4
  c->r[31]=c->r[3]|c->r[3]; // 8004C3D8
  c->lr=0x8004C3E0u; f_80244520(c); // 8004C3DC
  c->r[7]=c->r[3]|c->r[3]; // 8004C3E0
  c->r[9]=c->r[31]|c->r[31]; // 8004C3E4
  c->r[3]=0u+0x000000F0u; // 8004C3E8
  c->r[4]=c->r[13]+0xFFFF9294u; // 8004C3EC
  c->r[5]=0u+0x00000000u; // 8004C3F0
  c->r[6]=0u+0x00002001u; // 8004C3F4
  c->r[8]=0u+0x00000000u; // 8004C3F8
  c->lr=0x8004C400u; f_80242DF0(c); // 8004C3FC
  c->r[4]=c->r[3]|c->r[3]; // 8004C400
  c->r[3]=0u+0x000000F0u; // 8004C404
  c->r[5]=c->r[13]+0xFFFF9299u; // 8004C408
  c->r[6]=0u+0x00000000u; // 8004C40C
  c->r[7]=0u+0x00001001u; // 8004C410
  c->lr=0x8004C418u; f_80244DB0(c); // 8004C414
  cmps(c,0,(int32_t)c->r[3],0); // 8004C418
  if (crb(c,2)) { goto L_8004C424; } // 8004C41C
  c->lr=0x8004C424u; f_8004C2DC(c); // 8004C420
L_8004C424:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C428
  c->lr=c->r[0]; // 8004C42C
  c->r[1]=c->r[1]+0x00000010u; // 8004C430
  return; // 8004C434
}

// fn_8004C438
void f_8004C438(Ctx* __restrict c) {
  trace_call(0x8004C438u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C438
  c->r[0]=c->lr; // 8004C43C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C444
  c->r[31]=c->r[3]|c->r[3]; // 8004C448
  c->lr=0x8004C450u; f_8004B554(c); // 8004C44C
  c->r[8]=0u+0x80420000u; // 8004C450
  c->r[6]=0u+0x80410000u; // 8004C454
  c->r[7]=0u+0x00000000u; // 8004C458
  c->r[5]=0u+0xC0A20000u; // 8004C45C
  c->r[4]=0u+0x8CED0000u; // 8004C460
  c->r[3]=0u+0x9FF70000u; // 8004C464
  c->r[0]=c->r[3]+0xFFFFAE81u; // 8004C468
  c->r[8]=c->r[8]+0xFFFFFDE0u; // 8004C46C
  c->r[6]=c->r[6]+0xFFFFBDF8u; // 8004C470
  c->r[5]=c->r[5]+0xFFFF90C8u; // 8004C474
  c->r[4]=c->r[4]+0x000041F2u; // 8004C478
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004C47C
  c->r[3]=c->r[31]|c->r[31]; // 8004C480
  W32(c->r[31]+0x00000120u,c->r[7]); // 8004C484
  W32(c->r[31]+0x00000000u,c->r[6]); // 8004C488
  W32(c->r[31]+0x00000008u,c->r[7]); // 8004C48C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004C490
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004C494
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004C498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C4A0
  c->lr=c->r[0]; // 8004C4A4
  c->r[1]=c->r[1]+0x00000010u; // 8004C4A8
  return; // 8004C4AC
}

// fn_8004C4B0
void f_8004C4B0(Ctx* __restrict c) {
  trace_call(0x8004C4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C4B0
  c->r[0]=c->lr; // 8004C4B4
  cmps(c,0,(int32_t)c->r[4],0); // 8004C4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C4BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004C4C0
  c->r[30]=c->r[3]|c->r[3]; // 8004C4C4
  c->r[31]=c->r[4]|c->r[4]; // 8004C4C8
  if (crb(c,2)) { goto L_8004C520; } // 8004C4CC
  c->r[3]=c->r[31]|c->r[31]; // 8004C4D0
  c->lr=0x8004C4D8u; f_80244520(c); // 8004C4D4
  c->r[7]=c->r[3]|c->r[3]; // 8004C4D8
  c->r[9]=c->r[31]|c->r[31]; // 8004C4DC
  c->r[3]=0u+0x00000124u; // 8004C4E0
  c->r[4]=c->r[13]+0xFFFF929Eu; // 8004C4E4
  c->r[5]=0u+0x00000000u; // 8004C4E8
  c->r[6]=0u+0x00002001u; // 8004C4EC
  c->r[8]=0u+0x00000000u; // 8004C4F0
  c->lr=0x8004C4F8u; f_80242DF0(c); // 8004C4F4
  c->r[4]=c->r[3]|c->r[3]; // 8004C4F8
  c->r[3]=0u+0x00000124u; // 8004C4FC
  c->r[5]=c->r[13]+0xFFFF92A3u; // 8004C500
  c->r[6]=0u+0x00000000u; // 8004C504
  c->r[7]=0u+0x00001001u; // 8004C508
  c->lr=0x8004C510u; f_80244DB0(c); // 8004C50C
  cmps(c,0,(int32_t)c->r[3],0); // 8004C510
  if (crb(c,2)) { goto L_8004C540; } // 8004C514
  c->lr=0x8004C51Cu; f_8004C438(c); // 8004C518
  goto L_8004C540; // 8004C51C
L_8004C520:;
  c->r[3]=0u+0x00000124u; // 8004C520
  c->r[4]=c->r[13]+0xFFFF92A8u; // 8004C524
  c->r[5]=0u+0x00000000u; // 8004C528
  c->r[6]=0u+0x00001001u; // 8004C52C
  c->lr=0x8004C534u; f_80244D20(c); // 8004C530
  cmps(c,0,(int32_t)c->r[3],0); // 8004C534
  if (crb(c,2)) { goto L_8004C540; } // 8004C538
  c->lr=0x8004C540u; f_8004C438(c); // 8004C53C
L_8004C540:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004C540
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004C544
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004C548
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C54C
  c->lr=c->r[0]; // 8004C550
  c->r[1]=c->r[1]+0x00000010u; // 8004C554
  return; // 8004C558
}

// fn_8004C55C
void f_8004C55C(Ctx* __restrict c) {
  trace_call(0x8004C55Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C55C
  c->r[0]=c->lr; // 8004C560
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004C564
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004C568
  c->r[29]=c->r[3]|c->r[3]; // 8004C56C
  c->r[30]=c->r[4]|c->r[4]; // 8004C570
  c->lr=0x8004C578u; f_8004B674(c); // 8004C574
  c->r[31]=c->r[3]|c->r[3]; // 8004C578
  c->r[3]=c->r[30]|c->r[30]; // 8004C57C
  c->r[4]=0u+0x00000000u; // 8004C580
  c->lr=0x8004C588u; f_8030BE30(c); // 8004C584
  W32(c->r[29]+0x000000D4u,c->r[3]); // 8004C588
  c->r[3]=c->r[30]|c->r[30]; // 8004C58C
  c->r[4]=0u+0x00000000u; // 8004C590
  c->lr=0x8004C598u; f_8030BE30(c); // 8004C594
  W32(c->r[29]+0x000000D8u,c->r[3]); // 8004C598
  c->r[3]=c->r[30]|c->r[30]; // 8004C59C
  c->r[4]=0u+0x00000000u; // 8004C5A0
  c->lr=0x8004C5A8u; f_8030BE30(c); // 8004C5A4
  W32(c->r[29]+0x000000DCu,c->r[3]); // 8004C5A8
  c->r[0]=0u+0x00000000u; // 8004C5AC
  c->r[3]=c->r[30]|c->r[30]; // 8004C5B0
  W32(c->r[29]+0x000000E0u,c->r[0]); // 8004C5B4
  c->lr=0x8004C5BCu; f_8030BD1C(c); // 8004C5B8
  W32(c->r[29]+0x000000E4u,c->r[3]); // 8004C5BC
  c->r[3]=c->r[30]|c->r[30]; // 8004C5C0
  c->lr=0x8004C5C8u; f_8030BD1C(c); // 8004C5C4
  W8(c->r[29]+0x000000E8u,c->r[3]); // 8004C5C8
  c->r[3]=c->r[30]|c->r[30]; // 8004C5CC
  c->lr=0x8004C5D4u; f_8030BD1C(c); // 8004C5D0
  W8(c->r[29]+0x000000E9u,c->r[3]); // 8004C5D4
  c->r[3]=c->r[30]|c->r[30]; // 8004C5D8
  c->lr=0x8004C5E0u; f_8030BD1C(c); // 8004C5DC
  W8(c->r[29]+0x000000EAu,c->r[3]); // 8004C5E0
  c->r[3]=c->r[30]|c->r[30]; // 8004C5E4
  c->lr=0x8004C5ECu; f_8030BD1C(c); // 8004C5E8
  W8(c->r[29]+0x000000EBu,c->r[3]); // 8004C5EC
  c->r[3]=c->r[30]|c->r[30]; // 8004C5F0
  c->lr=0x8004C5F8u; f_8030BD1C(c); // 8004C5F4
  W32(c->r[29]+0x000000ECu,c->r[3]); // 8004C5F8
  c->r[3]=c->r[30]|c->r[30]; // 8004C5FC
  c->lr=0x8004C604u; f_8030BD1C(c); // 8004C600
  W32(c->r[29]+0x000000F0u,c->r[3]); // 8004C604
  c->r[3]=c->r[30]|c->r[30]; // 8004C608
  c->lr=0x8004C610u; f_8030BD1C(c); // 8004C60C
  W8(c->r[29]+0x000000F4u,c->r[3]); // 8004C610
  c->r[3]=c->r[30]|c->r[30]; // 8004C614
  c->lr=0x8004C61Cu; f_8030C0A0(c); // 8004C618
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 8004C61C
  c->r[3]=c->r[30]|c->r[30]; // 8004C620
  c->lr=0x8004C628u; f_8030C0A0(c); // 8004C624
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 8004C628
  c->r[3]=c->r[30]|c->r[30]; // 8004C62C
  c->lr=0x8004C634u; f_8030C0A0(c); // 8004C630
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 8004C634
  c->r[3]=c->r[30]|c->r[30]; // 8004C638
  c->lr=0x8004C640u; f_8030C0A0(c); // 8004C63C
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 8004C640
  c->r[3]=c->r[30]|c->r[30]; // 8004C644
  c->lr=0x8004C64Cu; f_8030BD1C(c); // 8004C648
  W8(c->r[29]+0x00000108u,c->r[3]); // 8004C64C
  c->r[3]=c->r[30]|c->r[30]; // 8004C650
  c->lr=0x8004C658u; f_8030BD1C(c); // 8004C654
  W32(c->r[29]+0x0000010Cu,c->r[3]); // 8004C658
  c->r[3]=c->r[30]|c->r[30]; // 8004C65C
  c->lr=0x8004C664u; f_8030BD1C(c); // 8004C660
  W8(c->r[29]+0x00000110u,c->r[3]); // 8004C664
  c->r[3]=c->r[30]|c->r[30]; // 8004C668
  c->lr=0x8004C670u; f_8030BD1C(c); // 8004C66C
  W8(c->r[29]+0x00000111u,c->r[3]); // 8004C670
  c->r[3]=c->r[30]|c->r[30]; // 8004C674
  c->lr=0x8004C67Cu; f_8030BD1C(c); // 8004C678
  W8(c->r[29]+0x00000112u,c->r[3]); // 8004C67C
  c->r[3]=c->r[30]|c->r[30]; // 8004C680
  c->lr=0x8004C688u; f_8030BD1C(c); // 8004C684
  W8(c->r[29]+0x00000113u,c->r[3]); // 8004C688
  c->r[3]=c->r[30]|c->r[30]; // 8004C68C
  c->lr=0x8004C694u; f_8030BD1C(c); // 8004C690
  W8(c->r[29]+0x00000114u,c->r[3]); // 8004C694
  c->r[3]=c->r[30]|c->r[30]; // 8004C698
  c->lr=0x8004C6A0u; f_8030C0A0(c); // 8004C69C
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[1]);} // 8004C6A0
  c->r[3]=c->r[30]|c->r[30]; // 8004C6A4
  c->lr=0x8004C6ACu; f_8030BD1C(c); // 8004C6A8
  W8(c->r[29]+0x0000011Cu,c->r[3]); // 8004C6AC
  c->r[3]=c->r[30]|c->r[30]; // 8004C6B0
  c->lr=0x8004C6B8u; f_8030BD1C(c); // 8004C6B4
  W8(c->r[29]+0x0000011Du,c->r[3]); // 8004C6B8
  c->r[3]=c->r[31]|c->r[31]; // 8004C6BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004C6C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004C6C4
  c->lr=c->r[0]; // 8004C6C8
  c->r[1]=c->r[1]+0x00000020u; // 8004C6CC
  return; // 8004C6D0
}

// fn_8004C6D4
void f_8004C6D4(Ctx* __restrict c) {
  trace_call(0x8004C6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C6D4
  c->r[0]=c->lr; // 8004C6D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004C6DC
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004C6E0
  c->r[27]=c->r[3]|c->r[3]; // 8004C6E4
  c->r[28]=c->r[4]|c->r[4]; // 8004C6E8
  c->r[29]=c->r[5]|c->r[5]; // 8004C6EC
  c->r[30]=c->r[6]|c->r[6]; // 8004C6F0
  c->r[7]=R32(c->r[3]+0x00000120u); // 8004C6F4
  cmps(c,0,(int32_t)c->r[7],0); // 8004C6F8
  if (!crb(c,0)) { goto L_8004C70C; } // 8004C6FC
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8004C700
  W32(c->r[3]+0x00000120u,c->r[0]); // 8004C704
  goto L_8004C71C; // 8004C708
L_8004C70C:;
  c->r[0]=c->r[7]+0x00000001u; // 8004C70C
  W32(c->r[3]+0x00000120u,c->r[0]); // 8004C710
  cmps(c,0,(int32_t)c->r[0],1); // 8004C714
  if (crb(c,1)) { goto L_8004C7DC; } // 8004C718
L_8004C71C:;
  c->r[3]=c->r[27]|c->r[27]; // 8004C71C
  c->r[4]=c->r[28]|c->r[28]; // 8004C720
  c->r[5]=c->r[29]|c->r[29]; // 8004C724
  c->r[6]=c->r[30]|c->r[30]; // 8004C728
  c->lr=0x8004C730u; f_802B11C0(c); // 8004C72C
  c->r[4]=R32(c->r[27]+0x000000DCu); // 8004C730
  cmps(c,0,(int32_t)c->r[4],0); // 8004C734
  if (crb(c,2)) { goto L_8004C7DC; } // 8004C738
  c->r[0]=0u+0x00000001u; // 8004C73C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004C740
  c->r[6]=c->r[28]|c->r[28]; // 8004C744
  c->r[7]=c->r[29]|c->r[29]; // 8004C748
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8004C74C
  c->r[8]=c->r[30]|c->r[30]; // 8004C750
  c->r[9]=R32(c->r[27]+0x000000E4u); // 8004C754
  c->r[5]=0u+0x00000003u; // 8004C758
  c->r[10]=0u+0x00000001u; // 8004C75C
  c->lr=0x8004C764u; f_80281A84(c); // 8004C760
  cmps(c,0,(int32_t)c->r[3],0); // 8004C764
  W32(c->r[27]+0x000000E0u,c->r[3]); // 8004C768
  if (crb(c,2)) { goto L_8004C778; } // 8004C76C
  c->lr=0x8004C774u; f_80295B6C(c); // 8004C770
  goto L_8004C7DC; // 8004C774
L_8004C778:;
  c->r[3]=R32(c->r[27]+0x000000E4u); // 8004C778
  c->r[4]=c->r[30]|c->r[30]; // 8004C77C
  c->r[5]=c->r[29]|c->r[29]; // 8004C780
  c->lr=0x8004C788u; f_802C0F98(c); // 8004C784
  c->r[31]=c->r[3]|c->r[3]; // 8004C788
  c->r[3]=0u+0x00000044u; // 8004C78C
  c->r[4]=c->r[13]+0xFFFF92ADu; // 8004C790
  c->r[5]=0u+0x00000000u; // 8004C794
  c->r[6]=0u+0x00001001u; // 8004C798
  c->lr=0x8004C7A0u; f_80244D20(c); // 8004C79C
  cmps(c,0,(int32_t)c->r[3],0); // 8004C7A0
  if (crb(c,2)) { goto L_8004C7B8; } // 8004C7A4
  c->r[5]=R32(c->r[27]+0x000000DCu); // 8004C7A8
  c->r[4]=c->r[31]|c->r[31]; // 8004C7AC
  c->r[6]=0u+0x00000003u; // 8004C7B0
  c->lr=0x8004C7B8u; f_8029316C(c); // 8004C7B4
L_8004C7B8:;
  W32(c->r[27]+0x000000E0u,c->r[3]); // 8004C7B8
  c->r[4]=c->r[28]|c->r[28]; // 8004C7BC
  c->r[7]=R32(c->r[27]+0x000000E4u); // 8004C7C0
  c->r[5]=c->r[29]|c->r[29]; // 8004C7C4
  c->r[6]=c->r[30]|c->r[30]; // 8004C7C8
  c->r[8]=0u+0x00000001u; // 8004C7CC
  c->r[9]=0u+0x00000000u; // 8004C7D0
  c->lr=0x8004C7D8u; f_8027FFF4(c); // 8004C7D4
  W32(c->r[27]+0x000000E0u,c->r[3]); // 8004C7D8
L_8004C7DC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004C7DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004C7E0
  c->lr=c->r[0]; // 8004C7E4
  c->r[1]=c->r[1]+0x00000030u; // 8004C7E8
  return; // 8004C7EC
}

// fn_8004C7F0
void f_8004C7F0(Ctx* __restrict c) {
  trace_call(0x8004C7F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C7F0
  c->r[0]=c->lr; // 8004C7F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C7F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C7FC
  c->r[31]=c->r[3]|c->r[3]; // 8004C800
  c->r[0]=R32(c->r[3]+0x00000120u); // 8004C804
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004C808
  W32(c->r[3]+0x00000120u,c->r[0]); // 8004C80C
  if (!crb(c,2)) { goto L_8004C830; } // 8004C810
  c->lr=0x8004C818u; f_802B11D0(c); // 8004C814
  c->r[3]=R32(c->r[31]+0x000000E0u); // 8004C818
  cmps(c,0,(int32_t)c->r[3],0); // 8004C81C
  if (crb(c,2)) { goto L_8004C830; } // 8004C820
  c->lr=0x8004C828u; f_80295B7C(c); // 8004C824
  c->r[0]=0u+0x00000000u; // 8004C828
  W32(c->r[31]+0x000000E0u,c->r[0]); // 8004C82C
L_8004C830:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C834
  c->lr=c->r[0]; // 8004C838
  c->r[1]=c->r[1]+0x00000010u; // 8004C83C
  return; // 8004C840
}

// fn_8004C844
void f_8004C844(Ctx* __restrict c) {
  trace_call(0x8004C844u);
  f_80038EC8(c); return; // 8004C844
}

// fn_8004C848
void f_8004C848(Ctx* __restrict c) {
  trace_call(0x8004C848u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004C848
  if (!crb(c,2)) return; // 8004C84C
  f_8003A92C(c); return; // 8004C850
  return; // 8004C854
}

// fn_8004C858
void f_8004C858(Ctx* __restrict c) {
  trace_call(0x8004C858u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C858
  c->r[0]=c->lr; // 8004C85C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C864
  c->r[31]=c->r[3]|c->r[3]; // 8004C868
  c->lr=0x8004C870u; f_8004B748(c); // 8004C86C
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C870
  c->r[5]=0u+0x00000000u; // 8004C874
  c->r[3]=0u+0x0000007Fu; // 8004C878
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C87C
  c->r[4]=0u+0x00000004u; // 8004C880
  c->r[0]=0u+0x00000040u; // 8004C884
  W32(c->r[31]+0x000000D4u,c->r[5]); // 8004C888
  W32(c->r[31]+0x000000D8u,c->r[5]); // 8004C88C
  W32(c->r[31]+0x000000DCu,c->r[5]); // 8004C890
  W32(c->r[31]+0x000000E0u,c->r[5]); // 8004C894
  W32(c->r[31]+0x000000E4u,c->r[4]); // 8004C898
  W8(c->r[31]+0x000000E8u,c->r[3]); // 8004C89C
  W8(c->r[31]+0x000000E9u,c->r[3]); // 8004C8A0
  W8(c->r[31]+0x000000EAu,c->r[3]); // 8004C8A4
  W8(c->r[31]+0x000000EBu,c->r[3]); // 8004C8A8
  W32(c->r[31]+0x000000ECu,c->r[5]); // 8004C8AC
  W32(c->r[31]+0x000000F0u,c->r[4]); // 8004C8B0
  W8(c->r[31]+0x000000F4u,c->r[5]); // 8004C8B4
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[1]);} // 8004C8B8
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[1]);} // 8004C8BC
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 8004C8C0
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8004C8C4
  W8(c->r[31]+0x00000108u,c->r[5]); // 8004C8C8
  W32(c->r[31]+0x0000010Cu,c->r[5]); // 8004C8CC
  W8(c->r[31]+0x00000110u,c->r[5]); // 8004C8D0
  W8(c->r[31]+0x00000111u,c->r[5]); // 8004C8D4
  W8(c->r[31]+0x00000112u,c->r[5]); // 8004C8D8
  W8(c->r[31]+0x00000113u,c->r[5]); // 8004C8DC
  W8(c->r[31]+0x00000114u,c->r[0]); // 8004C8E0
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 8004C8E4
  W8(c->r[31]+0x0000011Cu,c->r[5]); // 8004C8E8
  W8(c->r[31]+0x0000011Du,c->r[5]); // 8004C8EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C8F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C8F4
  c->lr=c->r[0]; // 8004C8F8
  c->r[1]=c->r[1]+0x00000010u; // 8004C8FC
  return; // 8004C900
}

// fn_8004C904
void f_8004C904(Ctx* __restrict c) {
  trace_call(0x8004C904u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C904
  c->r[0]=c->lr; // 8004C908
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004C90C
  c->r[11]=c->r[1]+0x00000020u; // 8004C910
  c->lr=0x8004C918u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004C914
  c->r[29]=c->r[3]|c->r[3]; // 8004C918
  c->r[30]=c->r[4]|c->r[4]; // 8004C91C
  c->r[31]=c->r[5]|c->r[5]; // 8004C920
  c->r[28]=c->r[7]|c->r[7]; // 8004C924
  c->r[6]=0u+0x00000000u; // 8004C928
  c->lr=0x8004C930u; f_8004B7C4(c); // 8004C92C
  cmps(c,0,(int32_t)c->r[31],0); // 8004C930
  if (crb(c,2)) { goto L_8004C93C; } // 8004C934
  goto L_8004C940; // 8004C938
L_8004C93C:;
  c->r[31]=c->r[29]|c->r[29]; // 8004C93C
L_8004C940:;
  c->r[3]=c->r[31]+0x000000D4u; // 8004C940
  c->r[4]=c->r[30]+0x000000D4u; // 8004C944
  c->lr=0x8004C94Cu; f_8003F6E4(c); // 8004C948
  c->r[3]=c->r[31]+0x000000DCu; // 8004C94C
  c->r[4]=c->r[30]+0x000000DCu; // 8004C950
  c->lr=0x8004C958u; f_8003BDD0(c); // 8004C954
  c->r[0]=R8(c->r[30]+0x000000E8u); // 8004C958
  cmps(c,0,(int32_t)c->r[28],0); // 8004C95C
  W8(c->r[31]+0x000000E8u,c->r[0]); // 8004C960
  c->r[0]=R8(c->r[30]+0x000000E9u); // 8004C964
  W8(c->r[31]+0x000000E9u,c->r[0]); // 8004C968
  c->r[0]=R8(c->r[30]+0x000000EAu); // 8004C96C
  W8(c->r[31]+0x000000EAu,c->r[0]); // 8004C970
  c->r[0]=R8(c->r[30]+0x000000EBu); // 8004C974
  W8(c->r[31]+0x000000EBu,c->r[0]); // 8004C978
  c->r[0]=R32(c->r[30]+0x000000ECu); // 8004C97C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8004C980
  c->r[0]=R32(c->r[30]+0x000000F0u); // 8004C984
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8004C988
  c->r[0]=R8(c->r[30]+0x000000F4u); // 8004C98C
  W8(c->r[31]+0x000000F4u,c->r[0]); // 8004C990
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C994
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 8004C998
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C99C
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 8004C9A0
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C9A4
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 8004C9A8
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C9AC
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8004C9B0
  c->r[0]=R8(c->r[30]+0x00000108u); // 8004C9B4
  W8(c->r[31]+0x00000108u,c->r[0]); // 8004C9B8
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 8004C9BC
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 8004C9C0
  c->r[0]=R8(c->r[30]+0x00000110u); // 8004C9C4
  W8(c->r[31]+0x00000110u,c->r[0]); // 8004C9C8
  c->r[0]=R8(c->r[30]+0x00000111u); // 8004C9CC
  W8(c->r[31]+0x00000111u,c->r[0]); // 8004C9D0
  c->r[0]=R8(c->r[30]+0x00000112u); // 8004C9D4
  W8(c->r[31]+0x00000112u,c->r[0]); // 8004C9D8
  c->r[0]=R8(c->r[30]+0x00000113u); // 8004C9DC
  W8(c->r[31]+0x00000113u,c->r[0]); // 8004C9E0
  c->r[0]=R8(c->r[30]+0x00000114u); // 8004C9E4
  W8(c->r[31]+0x00000114u,c->r[0]); // 8004C9E8
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C9EC
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 8004C9F0
  c->r[0]=R8(c->r[30]+0x0000011Cu); // 8004C9F4
  W8(c->r[31]+0x0000011Cu,c->r[0]); // 8004C9F8
  c->r[0]=R8(c->r[30]+0x0000011Du); // 8004C9FC
  W8(c->r[31]+0x0000011Du,c->r[0]); // 8004CA00
  if (crb(c,2)) { goto L_8004CA28; } // 8004CA04
  c->r[3]=R32(c->r[29]+0x00000120u); // 8004CA08
  cmps(c,0,(int32_t)c->r[3],0); // 8004CA0C
  if (crb(c,1)) { goto L_8004CA20; } // 8004CA10
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004CA14
  W32(c->r[29]+0x00000120u,c->r[0]); // 8004CA18
  goto L_8004CA28; // 8004CA1C
L_8004CA20:;
  c->r[0]=c->r[3]+0x00000001u; // 8004CA20
  W32(c->r[29]+0x00000120u,c->r[0]); // 8004CA24
L_8004CA28:;
  c->r[11]=c->r[1]+0x00000020u; // 8004CA28
  c->lr=0x8004CA30u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004CA2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004CA30
  c->lr=c->r[0]; // 8004CA34
  c->r[1]=c->r[1]+0x00000020u; // 8004CA38
  return; // 8004CA3C
}

// fn_8004CA40
void f_8004CA40(Ctx* __restrict c) {
  trace_call(0x8004CA40u);
  c->r[0]=c->r[4]+0x122D0000u; // 8004CA40
  cmpu(c,0,c->r[0],0x0000AB11u); // 8004CA44
  if (!crb(c,2)) { goto L_8004CA54; } // 8004CA48
  c->r[3]=0u+0x00000001u; // 8004CA4C
  return; // 8004CA50
L_8004CA54:;
  c->r[0]=c->r[4]+0x05C00000u; // 8004CA54
  cmpu(c,0,c->r[0],0x00000802u); // 8004CA58
  if (!crb(c,2)) { goto L_8004CA68; } // 8004CA5C
  c->r[3]=0u+0x00000001u; // 8004CA60
  return; // 8004CA64
L_8004CA68:;
  c->r[3]=0u+0xD12F0000u; // 8004CA68
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004CA6C
  c->r[0]=c->r[4]-c->r[0]; // 8004CA70
  c->r[0]=cntlz(c->r[0]); // 8004CA74
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004CA78
  return; // 8004CA7C
}

// fn_8004CA80
void f_8004CA80(Ctx* __restrict c) {
  trace_call(0x8004CA80u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CA80
  c->r[0]=c->lr; // 8004CA84
  W32(c->r[1]+0x00000084u,c->r[0]); // 8004CA88
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8004CA8C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8004CA90
  c->r[11]=c->r[1]+0x00000070u; // 8004CA94
  c->lr=0x8004CA9Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004CA98
  c->f[31]=c->f[1]; // 8004CA9C
  c->r[0]=0u+0x43300000u; // 8004CAA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004CAA4
  c->r[29]=c->r[3]|c->r[3]; // 8004CAA8
  c->r[31]=c->r[4]|c->r[4]; // 8004CAAC
  c->r[30]=c->r[5]|c->r[5]; // 8004CAB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004CAB4
  c->lr=0x8004CABCu; f_8004B898(c); // 8004CAB8
  c->r[3]=R8(c->r[31]+0x000000E8u); // 8004CABC
  c->r[0]=R8(c->r[30]+0x000000E8u); // 8004CAC0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CAC4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004CAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CACC
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 8004CAD0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8004CAD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CAD8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CADC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CAE0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004CAE4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CAE8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CAEC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CAF0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CAF4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 8004CAF8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004CAFC
  W8(c->r[29]+0x000000E8u,c->r[0]); // 8004CB00
  c->r[3]=R8(c->r[31]+0x000000E9u); // 8004CB04
  c->r[0]=R8(c->r[30]+0x000000E9u); // 8004CB08
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CB0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CB10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CB14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CB18
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CB1C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004CB20
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CB24
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CB28
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CB2C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CB30
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 8004CB34
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004CB38
  W8(c->r[29]+0x000000E9u,c->r[0]); // 8004CB3C
  c->r[3]=R8(c->r[31]+0x000000EAu); // 8004CB40
  c->r[0]=R8(c->r[30]+0x000000EAu); // 8004CB44
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CB48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CB4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CB50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CB54
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CB58
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004CB5C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CB60
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CB64
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CB68
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CB6C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 8004CB70
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8004CB74
  W8(c->r[29]+0x000000EAu,c->r[0]); // 8004CB78
  c->r[3]=R8(c->r[31]+0x000000EBu); // 8004CB7C
  c->r[0]=R8(c->r[30]+0x000000EBu); // 8004CB80
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CB88
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CB8C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CB90
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CB94
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004CB98
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CB9C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CBA0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CBA4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CBA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8004CBAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004CBB0
  W8(c->r[29]+0x000000EBu,c->r[0]); // 8004CBB4
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004CBB8
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004CBBC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CBC0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CBC4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CBC8
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[2]);} // 8004CBCC
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004CBD0
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004CBD4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CBD8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CBDC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CBE0
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[2]);} // 8004CBE4
  {uint32_t ea=c->r[31]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004CBE8
  {uint32_t ea=c->r[30]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004CBEC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CBF0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CBF4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CBF8
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[2]);} // 8004CBFC
  {uint32_t ea=c->r[31]+0x00000104u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004CC00
  {uint32_t ea=c->r[30]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004CC04
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CC08
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CC0C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CC10
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[2]);} // 8004CC14
  c->r[3]=R32(c->r[31]+0x0000010Cu); // 8004CC18
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 8004CC1C
  c->r[3]=c->r[3]^0x80000000u; // 8004CC20
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CC24
  c->r[0]=c->r[0]^0x80000000u; // 8004CC28
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[4]=RF64(ea);} // 8004CC2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CC30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CC34
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CC38
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 8004CC3C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 8004CC40
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CC44
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CC48
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CC4C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CC50
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 8004CC54
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8004CC58
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 8004CC5C
  c->r[3]=R8(c->r[31]+0x00000111u); // 8004CC60
  c->r[0]=R8(c->r[30]+0x00000111u); // 8004CC64
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CC6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CC70
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CC74
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CC78
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004CC7C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CC80
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CC84
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CC88
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CC8C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 8004CC90
  c->r[0]=R32(c->r[1]+0x00000044u); // 8004CC94
  W8(c->r[29]+0x00000111u,c->r[0]); // 8004CC98
  c->r[3]=R8(c->r[31]+0x00000112u); // 8004CC9C
  c->r[0]=R8(c->r[30]+0x00000112u); // 8004CCA0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CCA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CCA8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CCAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CCB0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CCB4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004CCB8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CCBC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CCC0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CCC4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CCC8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8004CCCC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8004CCD0
  W8(c->r[29]+0x00000112u,c->r[0]); // 8004CCD4
  c->r[3]=R8(c->r[31]+0x00000113u); // 8004CCD8
  c->r[0]=R8(c->r[30]+0x00000113u); // 8004CCDC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CCE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CCE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CCE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CCEC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CCF0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004CCF4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004CCF8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004CCFC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004CD00
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004CD04
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 8004CD08
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004CD0C
  W8(c->r[29]+0x00000113u,c->r[0]); // 8004CD10
  c->r[3]=R8(c->r[31]+0x00000114u); // 8004CD14
  c->r[0]=R8(c->r[30]+0x00000114u); // 8004CD18
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004CD1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CD20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004CD24
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004CD28
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004CD2C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8004CD30
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 8004CD34
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004CD38
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8004CD3C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8004CD40
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 8004CD44
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8004CD48
  W8(c->r[29]+0x00000114u,c->r[0]); // 8004CD4C
  {uint32_t ea=c->r[31]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004CD50
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004CD54
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8004CD58
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004CD5C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004CD60
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[0]);} // 8004CD64
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8004CD68
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8004CD6C
  c->r[11]=c->r[1]+0x00000070u; // 8004CD70
  c->lr=0x8004CD78u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004CD74
  c->r[0]=R32(c->r[1]+0x00000084u); // 8004CD78
  c->lr=c->r[0]; // 8004CD7C
  c->r[1]=c->r[1]+0x00000080u; // 8004CD80
  return; // 8004CD84
}

// fn_8004CD88
void f_8004CD88(Ctx* __restrict c) {
  trace_call(0x8004CD88u);
  c->r[3]=0u+0x00000124u; // 8004CD88
  return; // 8004CD8C
}

// fn_8004CD90
void f_8004CD90(Ctx* __restrict c) {
  trace_call(0x8004CD90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CD90
  c->r[0]=c->lr; // 8004CD94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CD98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004CD9C
  c->r[31]=c->r[3]|c->r[3]; // 8004CDA0
  c->lr=0x8004CDA8u; f_8004C438(c); // 8004CDA4
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004CDA8
  c->r[3]=0u+0x80420000u; // 8004CDAC
  c->r[3]=c->r[3]+0xFFFFFDA0u; // 8004CDB0
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004CDB4
  c->r[0]=c->r[0]|0x80000000u; // 8004CDB8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004CDBC
  c->r[3]=c->r[31]|c->r[31]; // 8004CDC0
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004CDC4
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004CDC8
  c->ctr=c->r[12]; // 8004CDCC
  if (true) { c->lr=0x8004CDD4u; dispatch(c,c->ctr); } // 8004CDD0
  c->r[3]=c->r[31]|c->r[31]; // 8004CDD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004CDD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CDDC
  c->lr=c->r[0]; // 8004CDE0
  c->r[1]=c->r[1]+0x00000010u; // 8004CDE4
  return; // 8004CDE8
}

// fn_8004CDEC
void f_8004CDEC(Ctx* __restrict c) {
  trace_call(0x8004CDECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CDEC
  c->r[0]=c->lr; // 8004CDF0
  cmps(c,0,(int32_t)c->r[3],0); // 8004CDF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CDF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004CDFC
  c->r[30]=c->r[3]|c->r[3]; // 8004CE00
  c->r[31]=c->r[4]|c->r[4]; // 8004CE04
  if (crb(c,2)) { goto L_8004CE28; } // 8004CE08
  if (crb(c,2)) { goto L_8004CE18; } // 8004CE0C
  c->r[4]=0u+0x00000000u; // 8004CE10
  c->lr=0x8004CE18u; f_8003ABE0(c); // 8004CE14
L_8004CE18:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004CE18
  if (!crb(c,1)) { goto L_8004CE28; } // 8004CE1C
  c->r[3]=c->r[30]|c->r[30]; // 8004CE20
  c->lr=0x8004CE28u; f_80244DC0(c); // 8004CE24
L_8004CE28:;
  c->r[3]=c->r[30]|c->r[30]; // 8004CE28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004CE2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CE30
  c->lr=c->r[0]; // 8004CE34
  c->r[1]=c->r[1]+0x00000010u; // 8004CE38
  return; // 8004CE3C
}

// fn_8004CE40
void f_8004CE40(Ctx* __restrict c) {
  trace_call(0x8004CE40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CE40
  c->r[0]=c->lr; // 8004CE44
  c->r[3]=0u+0x00000124u; // 8004CE48
  c->r[4]=c->r[13]+0xFFFF92B2u; // 8004CE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CE50
  c->r[5]=0u+0x00000000u; // 8004CE54
  c->r[6]=0u+0x00001001u; // 8004CE58
  c->lr=0x8004CE60u; f_80244D20(c); // 8004CE5C
  cmps(c,0,(int32_t)c->r[3],0); // 8004CE60
  if (crb(c,2)) { goto L_8004CE6C; } // 8004CE64
  c->lr=0x8004CE6Cu; f_8004CD90(c); // 8004CE68
L_8004CE6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CE6C
  c->lr=c->r[0]; // 8004CE70
  c->r[1]=c->r[1]+0x00000010u; // 8004CE74
  return; // 8004CE78
}

// fn_8004CE7C
void f_8004CE7C(Ctx* __restrict c) {
  trace_call(0x8004CE7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CE7C
  c->r[0]=c->lr; // 8004CE80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CE84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004CE88
  c->r[31]=c->r[3]|c->r[3]; // 8004CE8C
  c->lr=0x8004CE94u; f_80244520(c); // 8004CE90
  c->r[7]=c->r[3]|c->r[3]; // 8004CE94
  c->r[9]=c->r[31]|c->r[31]; // 8004CE98
  c->r[3]=0u+0x00000124u; // 8004CE9C
  c->r[4]=c->r[13]+0xFFFF92B7u; // 8004CEA0
  c->r[5]=0u+0x00000000u; // 8004CEA4
  c->r[6]=0u+0x00002001u; // 8004CEA8
  c->r[8]=0u+0x00000000u; // 8004CEAC
  c->lr=0x8004CEB4u; f_80242DF0(c); // 8004CEB0
  c->r[4]=c->r[3]|c->r[3]; // 8004CEB4
  c->r[3]=0u+0x00000124u; // 8004CEB8
  c->r[5]=c->r[13]+0xFFFF92BCu; // 8004CEBC
  c->r[6]=0u+0x00000000u; // 8004CEC0
  c->r[7]=0u+0x00001001u; // 8004CEC4
  c->lr=0x8004CECCu; f_80244DB0(c); // 8004CEC8
  cmps(c,0,(int32_t)c->r[3],0); // 8004CECC
  if (crb(c,2)) { goto L_8004CED8; } // 8004CED0
  c->lr=0x8004CED8u; f_8004CD90(c); // 8004CED4
L_8004CED8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004CEDC
  c->lr=c->r[0]; // 8004CEE0
  c->r[1]=c->r[1]+0x00000010u; // 8004CEE4
  return; // 8004CEE8
}

// fn_8004CEEC
void f_8004CEEC(Ctx* __restrict c) {
  trace_call(0x8004CEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CEEC
  c->r[0]=c->lr; // 8004CEF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CEF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004CEF8
  c->r[31]=c->r[3]|c->r[3]; // 8004CEFC
  c->lr=0x8004CF04u; f_8004B554(c); // 8004CF00
  c->r[8]=0u+0x80420000u; // 8004CF04
  c->r[6]=0u+0x80410000u; // 8004CF08
  c->r[7]=0u+0x00000000u; // 8004CF0C
  c->r[5]=0u+0x26C40000u; // 8004CF10
  c->r[4]=0u+0x52C20000u; // 8004CF14
  c->r[3]=0u+0x679E0000u; // 8004CF18
  c->r[0]=c->r[3]+0xFFFF8DD0u; // 8004CF1C
  c->r[8]=c->r[8]+0xFFFFFD64u; // 8004CF20
  c->r[6]=c->r[6]+0xFFFFBE0Fu; // 8004CF24
  c->r[5]=c->r[5]+0x00001A1Au; // 8004CF28
  c->r[4]=c->r[4]+0xFFFFCF38u; // 8004CF2C
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004CF30
  c->r[3]=c->r[31]|c->r[31]; // 8004CF34
  W32(c->r[31]+0x000000F0u,c->r[7]); // 8004CF38
  W32(c->r[31]+0x00000000u,c->r[6]); // 8004CF3C
  W32(c->r[31]+0x00000008u,c->r[7]); // 8004CF40
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004CF44
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004CF48
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004CF4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004CF50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004CF54
  c->lr=c->r[0]; // 8004CF58
  c->r[1]=c->r[1]+0x00000010u; // 8004CF5C
  return; // 8004CF60
}

// fn_8004CF64
void f_8004CF64(Ctx* __restrict c) {
  trace_call(0x8004CF64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CF64
  c->r[0]=c->lr; // 8004CF68
  cmps(c,0,(int32_t)c->r[4],0); // 8004CF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004CF70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004CF74
  c->r[30]=c->r[3]|c->r[3]; // 8004CF78
  c->r[31]=c->r[4]|c->r[4]; // 8004CF7C
  if (crb(c,2)) { goto L_8004CFD4; } // 8004CF80
  c->r[3]=c->r[31]|c->r[31]; // 8004CF84
  c->lr=0x8004CF8Cu; f_80244520(c); // 8004CF88
  c->r[7]=c->r[3]|c->r[3]; // 8004CF8C
  c->r[9]=c->r[31]|c->r[31]; // 8004CF90
  c->r[3]=0u+0x000000F4u; // 8004CF94
  c->r[4]=c->r[13]+0xFFFF92C1u; // 8004CF98
  c->r[5]=0u+0x00000000u; // 8004CF9C
  c->r[6]=0u+0x00002001u; // 8004CFA0
  c->r[8]=0u+0x00000000u; // 8004CFA4
  c->lr=0x8004CFACu; f_80242DF0(c); // 8004CFA8
  c->r[4]=c->r[3]|c->r[3]; // 8004CFAC
  c->r[3]=0u+0x000000F4u; // 8004CFB0
  c->r[5]=c->r[13]+0xFFFF92C6u; // 8004CFB4
  c->r[6]=0u+0x00000000u; // 8004CFB8
  c->r[7]=0u+0x00001001u; // 8004CFBC
  c->lr=0x8004CFC4u; f_80244DB0(c); // 8004CFC0
  cmps(c,0,(int32_t)c->r[3],0); // 8004CFC4
  if (crb(c,2)) { goto L_8004CFF4; } // 8004CFC8
  c->lr=0x8004CFD0u; f_8004CEEC(c); // 8004CFCC
  goto L_8004CFF4; // 8004CFD0
L_8004CFD4:;
  c->r[3]=0u+0x000000F4u; // 8004CFD4
  c->r[4]=c->r[13]+0xFFFF92CBu; // 8004CFD8
  c->r[5]=0u+0x00000000u; // 8004CFDC
  c->r[6]=0u+0x00001001u; // 8004CFE0
  c->lr=0x8004CFE8u; f_80244D20(c); // 8004CFE4
  cmps(c,0,(int32_t)c->r[3],0); // 8004CFE8
  if (crb(c,2)) { goto L_8004CFF4; } // 8004CFEC
  c->lr=0x8004CFF4u; f_8004CEEC(c); // 8004CFF0
L_8004CFF4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004CFF4
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004CFF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004CFFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D000
  c->lr=c->r[0]; // 8004D004
  c->r[1]=c->r[1]+0x00000010u; // 8004D008
  return; // 8004D00C
}

// fn_8004D010
void f_8004D010(Ctx* __restrict c) {
  trace_call(0x8004D010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D010
  c->r[0]=c->lr; // 8004D014
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004D018
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004D01C
  c->r[29]=c->r[3]|c->r[3]; // 8004D020
  c->r[30]=c->r[4]|c->r[4]; // 8004D024
  c->lr=0x8004D02Cu; f_8004B674(c); // 8004D028
  c->r[31]=c->r[3]|c->r[3]; // 8004D02C
  c->r[3]=c->r[30]|c->r[30]; // 8004D030
  c->r[4]=0u+0x00000000u; // 8004D034
  c->lr=0x8004D03Cu; f_8030BE30(c); // 8004D038
  W32(c->r[29]+0x000000D4u,c->r[3]); // 8004D03C
  c->r[0]=0u+0x00000000u; // 8004D040
  c->r[3]=c->r[30]|c->r[30]; // 8004D044
  W32(c->r[29]+0x000000D8u,c->r[0]); // 8004D048
  c->lr=0x8004D050u; f_8030BD1C(c); // 8004D04C
  W32(c->r[29]+0x000000DCu,c->r[3]); // 8004D050
  c->r[3]=c->r[30]|c->r[30]; // 8004D054
  c->lr=0x8004D05Cu; f_8030BD1C(c); // 8004D058
  W32(c->r[29]+0x000000E0u,c->r[3]); // 8004D05C
  c->r[3]=c->r[30]|c->r[30]; // 8004D060
  c->lr=0x8004D068u; f_8030BD1C(c); // 8004D064
  W8(c->r[29]+0x000000E4u,c->r[3]); // 8004D068
  c->r[3]=c->r[30]|c->r[30]; // 8004D06C
  c->lr=0x8004D074u; f_8030BD1C(c); // 8004D070
  W8(c->r[29]+0x000000E5u,c->r[3]); // 8004D074
  c->r[3]=c->r[30]|c->r[30]; // 8004D078
  c->lr=0x8004D080u; f_8030BD1C(c); // 8004D07C
  W8(c->r[29]+0x000000E6u,c->r[3]); // 8004D080
  c->r[3]=c->r[30]|c->r[30]; // 8004D084
  c->lr=0x8004D08Cu; f_8030BD1C(c); // 8004D088
  W8(c->r[29]+0x000000E7u,c->r[3]); // 8004D08C
  c->r[3]=c->r[30]|c->r[30]; // 8004D090
  c->lr=0x8004D098u; f_8030C0A0(c); // 8004D094
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 8004D098
  c->r[3]=c->r[30]|c->r[30]; // 8004D09C
  c->lr=0x8004D0A4u; f_8030C0A0(c); // 8004D0A0
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 8004D0A4
  c->r[3]=c->r[31]|c->r[31]; // 8004D0A8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004D0AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004D0B0
  c->lr=c->r[0]; // 8004D0B4
  c->r[1]=c->r[1]+0x00000020u; // 8004D0B8
  return; // 8004D0BC
}

// fn_8004D0C0
void f_8004D0C0(Ctx* __restrict c) {
  trace_call(0x8004D0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D0C0
  c->r[0]=c->lr; // 8004D0C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004D0C8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004D0CC
  c->r[27]=c->r[3]|c->r[3]; // 8004D0D0
  c->r[28]=c->r[4]|c->r[4]; // 8004D0D4
  c->r[29]=c->r[5]|c->r[5]; // 8004D0D8
  c->r[30]=c->r[6]|c->r[6]; // 8004D0DC
  c->r[7]=R32(c->r[3]+0x000000F0u); // 8004D0E0
  cmps(c,0,(int32_t)c->r[7],0); // 8004D0E4
  if (!crb(c,0)) { goto L_8004D0F8; } // 8004D0E8
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8004D0EC
  W32(c->r[3]+0x000000F0u,c->r[0]); // 8004D0F0
  goto L_8004D108; // 8004D0F4
L_8004D0F8:;
  c->r[0]=c->r[7]+0x00000001u; // 8004D0F8
  W32(c->r[3]+0x000000F0u,c->r[0]); // 8004D0FC
  cmps(c,0,(int32_t)c->r[0],1); // 8004D100
  if (crb(c,1)) { goto L_8004D1C8; } // 8004D104
L_8004D108:;
  c->r[3]=c->r[27]|c->r[27]; // 8004D108
  c->r[4]=c->r[28]|c->r[28]; // 8004D10C
  c->r[5]=c->r[29]|c->r[29]; // 8004D110
  c->r[6]=c->r[30]|c->r[30]; // 8004D114
  c->lr=0x8004D11Cu; f_802B11C0(c); // 8004D118
  c->r[4]=R32(c->r[27]+0x000000D4u); // 8004D11C
  cmps(c,0,(int32_t)c->r[4],0); // 8004D120
  if (crb(c,2)) { goto L_8004D1C8; } // 8004D124
  c->r[0]=0u+0x00000001u; // 8004D128
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004D12C
  c->r[6]=c->r[28]|c->r[28]; // 8004D130
  c->r[7]=c->r[29]|c->r[29]; // 8004D134
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8004D138
  c->r[8]=c->r[30]|c->r[30]; // 8004D13C
  c->r[9]=R32(c->r[27]+0x000000DCu); // 8004D140
  c->r[5]=0u+0x00000000u; // 8004D144
  c->r[10]=0u+0x00000001u; // 8004D148
  c->lr=0x8004D150u; f_80281A84(c); // 8004D14C
  cmps(c,0,(int32_t)c->r[3],0); // 8004D150
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004D154
  if (crb(c,2)) { goto L_8004D164; } // 8004D158
  c->lr=0x8004D160u; f_80295B6C(c); // 8004D15C
  goto L_8004D1C8; // 8004D160
L_8004D164:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 8004D164
  c->r[4]=c->r[30]|c->r[30]; // 8004D168
  c->r[5]=c->r[29]|c->r[29]; // 8004D16C
  c->lr=0x8004D174u; f_802C0F98(c); // 8004D170
  c->r[31]=c->r[3]|c->r[3]; // 8004D174
  c->r[3]=0u+0x00000044u; // 8004D178
  c->r[4]=c->r[13]+0xFFFF92D0u; // 8004D17C
  c->r[5]=0u+0x00000000u; // 8004D180
  c->r[6]=0u+0x00001001u; // 8004D184
  c->lr=0x8004D18Cu; f_80244D20(c); // 8004D188
  cmps(c,0,(int32_t)c->r[3],0); // 8004D18C
  if (crb(c,2)) { goto L_8004D1A4; } // 8004D190
  c->r[5]=R32(c->r[27]+0x000000D4u); // 8004D194
  c->r[4]=c->r[31]|c->r[31]; // 8004D198
  c->r[6]=0u+0x00000000u; // 8004D19C
  c->lr=0x8004D1A4u; f_8029316C(c); // 8004D1A0
L_8004D1A4:;
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004D1A4
  c->r[4]=c->r[28]|c->r[28]; // 8004D1A8
  c->r[7]=R32(c->r[27]+0x000000DCu); // 8004D1AC
  c->r[5]=c->r[29]|c->r[29]; // 8004D1B0
  c->r[6]=c->r[30]|c->r[30]; // 8004D1B4
  c->r[8]=0u+0x00000001u; // 8004D1B8
  c->r[9]=0u+0x00000000u; // 8004D1BC
  c->lr=0x8004D1C4u; f_8027FFF4(c); // 8004D1C0
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004D1C4
L_8004D1C8:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004D1C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004D1CC
  c->lr=c->r[0]; // 8004D1D0
  c->r[1]=c->r[1]+0x00000030u; // 8004D1D4
  return; // 8004D1D8
}

// fn_8004D1DC
void f_8004D1DC(Ctx* __restrict c) {
  trace_call(0x8004D1DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D1DC
  c->r[0]=c->lr; // 8004D1E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D1E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D1E8
  c->r[31]=c->r[3]|c->r[3]; // 8004D1EC
  c->r[0]=R32(c->r[3]+0x000000F0u); // 8004D1F0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004D1F4
  W32(c->r[3]+0x000000F0u,c->r[0]); // 8004D1F8
  if (!crb(c,2)) { goto L_8004D21C; } // 8004D1FC
  c->lr=0x8004D204u; f_802B11D0(c); // 8004D200
  c->r[3]=R32(c->r[31]+0x000000D8u); // 8004D204
  cmps(c,0,(int32_t)c->r[3],0); // 8004D208
  if (crb(c,2)) { goto L_8004D21C; } // 8004D20C
  c->lr=0x8004D214u; f_80295B7C(c); // 8004D210
  c->r[0]=0u+0x00000000u; // 8004D214
  W32(c->r[31]+0x000000D8u,c->r[0]); // 8004D218
L_8004D21C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D21C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D220
  c->lr=c->r[0]; // 8004D224
  c->r[1]=c->r[1]+0x00000010u; // 8004D228
  return; // 8004D22C
}

// fn_8004D230
void f_8004D230(Ctx* __restrict c) {
  trace_call(0x8004D230u);
  f_80038EC8(c); return; // 8004D230
}

// fn_8004D234
void f_8004D234(Ctx* __restrict c) {
  trace_call(0x8004D234u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004D234
  if (!crb(c,2)) return; // 8004D238
  f_8003A92C(c); return; // 8004D23C
  return; // 8004D240
}

// fn_8004D244
void f_8004D244(Ctx* __restrict c) {
  trace_call(0x8004D244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D244
  c->r[0]=c->lr; // 8004D248
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D24C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D250
  c->r[31]=c->r[3]|c->r[3]; // 8004D254
  c->lr=0x8004D25Cu; f_8004B748(c); // 8004D258
  {uint32_t ea=c->r[2]+0xFFFF8720u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004D25C
  c->r[0]=0u+0x0000007Fu; // 8004D260
  c->r[4]=0u+0x00000000u; // 8004D264
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D268
  c->r[3]=0u+0x00000004u; // 8004D26C
  W32(c->r[31]+0x000000D4u,c->r[4]); // 8004D270
  W32(c->r[31]+0x000000D8u,c->r[4]); // 8004D274
  W32(c->r[31]+0x000000DCu,c->r[3]); // 8004D278
  W32(c->r[31]+0x000000E0u,c->r[4]); // 8004D27C
  W8(c->r[31]+0x000000E4u,c->r[0]); // 8004D280
  W8(c->r[31]+0x000000E5u,c->r[0]); // 8004D284
  W8(c->r[31]+0x000000E6u,c->r[0]); // 8004D288
  W8(c->r[31]+0x000000E7u,c->r[0]); // 8004D28C
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[1]);} // 8004D290
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[0]);} // 8004D294
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D298
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D29C
  c->lr=c->r[0]; // 8004D2A0
  c->r[1]=c->r[1]+0x00000010u; // 8004D2A4
  return; // 8004D2A8
}

// fn_8004D2AC
void f_8004D2AC(Ctx* __restrict c) {
  trace_call(0x8004D2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D2AC
  c->r[0]=c->lr; // 8004D2B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004D2B4
  c->r[11]=c->r[1]+0x00000020u; // 8004D2B8
  c->lr=0x8004D2C0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004D2BC
  c->r[28]=c->r[3]|c->r[3]; // 8004D2C0
  c->r[29]=c->r[4]|c->r[4]; // 8004D2C4
  c->r[30]=c->r[5]|c->r[5]; // 8004D2C8
  c->r[31]=c->r[7]|c->r[7]; // 8004D2CC
  c->r[6]=0u+0x00000000u; // 8004D2D0
  c->lr=0x8004D2D8u; f_8004B7C4(c); // 8004D2D4
  cmps(c,0,(int32_t)c->r[30],0); // 8004D2D8
  if (crb(c,2)) { goto L_8004D2E4; } // 8004D2DC
  goto L_8004D2E8; // 8004D2E0
L_8004D2E4:;
  c->r[30]=c->r[28]|c->r[28]; // 8004D2E4
L_8004D2E8:;
  c->r[3]=c->r[30]+0x000000D4u; // 8004D2E8
  c->r[4]=c->r[29]+0x000000D4u; // 8004D2EC
  c->lr=0x8004D2F4u; f_8003BDD0(c); // 8004D2F0
  c->r[0]=R32(c->r[29]+0x000000E0u); // 8004D2F4
  cmps(c,0,(int32_t)c->r[31],0); // 8004D2F8
  W32(c->r[30]+0x000000E0u,c->r[0]); // 8004D2FC
  c->r[0]=R8(c->r[29]+0x000000E4u); // 8004D300
  W8(c->r[30]+0x000000E4u,c->r[0]); // 8004D304
  c->r[0]=R8(c->r[29]+0x000000E5u); // 8004D308
  W8(c->r[30]+0x000000E5u,c->r[0]); // 8004D30C
  c->r[0]=R8(c->r[29]+0x000000E6u); // 8004D310
  W8(c->r[30]+0x000000E6u,c->r[0]); // 8004D314
  c->r[0]=R8(c->r[29]+0x000000E7u); // 8004D318
  W8(c->r[30]+0x000000E7u,c->r[0]); // 8004D31C
  {uint32_t ea=c->r[29]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D320
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 8004D324
  {uint32_t ea=c->r[29]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D328
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 8004D32C
  if (crb(c,2)) { goto L_8004D354; } // 8004D330
  c->r[3]=R32(c->r[28]+0x000000F0u); // 8004D334
  cmps(c,0,(int32_t)c->r[3],0); // 8004D338
  if (crb(c,1)) { goto L_8004D34C; } // 8004D33C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004D340
  W32(c->r[28]+0x000000F0u,c->r[0]); // 8004D344
  goto L_8004D354; // 8004D348
L_8004D34C:;
  c->r[0]=c->r[3]+0x00000001u; // 8004D34C
  W32(c->r[28]+0x000000F0u,c->r[0]); // 8004D350
L_8004D354:;
  c->r[11]=c->r[1]+0x00000020u; // 8004D354
  c->lr=0x8004D35Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004D358
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004D35C
  c->lr=c->r[0]; // 8004D360
  c->r[1]=c->r[1]+0x00000020u; // 8004D364
  return; // 8004D368
}

// fn_8004D36C
void f_8004D36C(Ctx* __restrict c) {
  trace_call(0x8004D36Cu);
  c->r[0]=c->r[4]+0x122D0000u; // 8004D36C
  cmpu(c,0,c->r[0],0x0000AB11u); // 8004D370
  if (!crb(c,2)) { goto L_8004D380; } // 8004D374
  c->r[3]=0u+0x00000001u; // 8004D378
  return; // 8004D37C
L_8004D380:;
  c->r[0]=c->r[4]+0x05C00000u; // 8004D380
  cmpu(c,0,c->r[0],0x00000802u); // 8004D384
  if (!crb(c,2)) { goto L_8004D394; } // 8004D388
  c->r[3]=0u+0x00000001u; // 8004D38C
  return; // 8004D390
L_8004D394:;
  c->r[3]=0u+0xD12F0000u; // 8004D394
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004D398
  c->r[0]=c->r[4]-c->r[0]; // 8004D39C
  c->r[0]=cntlz(c->r[0]); // 8004D3A0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004D3A4
  return; // 8004D3A8
}

// fn_8004D3AC
void f_8004D3AC(Ctx* __restrict c) {
  trace_call(0x8004D3ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D3AC
  c->r[0]=c->lr; // 8004D3B0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8004D3B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8004D3B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8004D3BC
  c->r[11]=c->r[1]+0x00000050u; // 8004D3C0
  c->lr=0x8004D3C8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004D3C4
  c->f[31]=c->f[1]; // 8004D3C8
  c->r[0]=0u+0x43300000u; // 8004D3CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004D3D0
  c->r[29]=c->r[3]|c->r[3]; // 8004D3D4
  c->r[31]=c->r[4]|c->r[4]; // 8004D3D8
  c->r[30]=c->r[5]|c->r[5]; // 8004D3DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004D3E0
  c->lr=0x8004D3E8u; f_8004B898(c); // 8004D3E4
  c->r[3]=R8(c->r[31]+0x000000E4u); // 8004D3E8
  c->r[0]=R8(c->r[30]+0x000000E4u); // 8004D3EC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004D3F0
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D3F8
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[3]=RF64(ea);} // 8004D3FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8004D400
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004D404
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004D408
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004D40C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004D410
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004D414
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004D418
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004D41C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004D420
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 8004D424
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004D428
  W8(c->r[29]+0x000000E4u,c->r[0]); // 8004D42C
  c->r[3]=R8(c->r[31]+0x000000E5u); // 8004D430
  c->r[0]=R8(c->r[30]+0x000000E5u); // 8004D434
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004D438
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D43C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004D440
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004D444
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004D448
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004D44C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004D450
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004D454
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004D458
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004D45C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 8004D460
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004D464
  W8(c->r[29]+0x000000E5u,c->r[0]); // 8004D468
  c->r[3]=R8(c->r[31]+0x000000E6u); // 8004D46C
  c->r[0]=R8(c->r[30]+0x000000E6u); // 8004D470
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004D474
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D478
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004D47C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004D480
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004D484
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004D488
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004D48C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004D490
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004D494
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004D498
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8004D49C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8004D4A0
  W8(c->r[29]+0x000000E6u,c->r[0]); // 8004D4A4
  c->r[3]=R8(c->r[31]+0x000000E7u); // 8004D4A8
  c->r[0]=R8(c->r[30]+0x000000E7u); // 8004D4AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004D4B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D4B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004D4B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004D4BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004D4C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004D4C4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004D4C8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004D4CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004D4D0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004D4D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[1]);} // 8004D4D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004D4DC
  W8(c->r[29]+0x000000E7u,c->r[0]); // 8004D4E0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004D4E4
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004D4E8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004D4EC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004D4F0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004D4F4
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[1]);} // 8004D4F8
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004D4FC
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004D500
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004D504
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 8004D508
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8004D50C
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 8004D510
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8004D514
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8004D518
  c->r[11]=c->r[1]+0x00000050u; // 8004D51C
  c->lr=0x8004D524u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004D520
  c->r[0]=R32(c->r[1]+0x00000064u); // 8004D524
  c->lr=c->r[0]; // 8004D528
  c->r[1]=c->r[1]+0x00000060u; // 8004D52C
  return; // 8004D530
}

// fn_8004D534
void f_8004D534(Ctx* __restrict c) {
  trace_call(0x8004D534u);
  c->r[3]=0u+0x000000F4u; // 8004D534
  return; // 8004D538
}

// fn_8004D53C
void f_8004D53C(Ctx* __restrict c) {
  trace_call(0x8004D53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D53C
  c->r[0]=c->lr; // 8004D540
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D548
  c->r[31]=c->r[3]|c->r[3]; // 8004D54C
  c->lr=0x8004D554u; f_8004CEEC(c); // 8004D550
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004D554
  c->r[3]=0u+0x80420000u; // 8004D558
  c->r[3]=c->r[3]+0xFFFFFD24u; // 8004D55C
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004D560
  c->r[0]=c->r[0]|0x80000000u; // 8004D564
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004D568
  c->r[3]=c->r[31]|c->r[31]; // 8004D56C
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004D570
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004D574
  c->ctr=c->r[12]; // 8004D578
  if (true) { c->lr=0x8004D580u; dispatch(c,c->ctr); } // 8004D57C
  c->r[3]=c->r[31]|c->r[31]; // 8004D580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D584
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D588
  c->lr=c->r[0]; // 8004D58C
  c->r[1]=c->r[1]+0x00000010u; // 8004D590
  return; // 8004D594
}

// fn_8004D598
void f_8004D598(Ctx* __restrict c) {
  trace_call(0x8004D598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D598
  c->r[0]=c->lr; // 8004D59C
  cmps(c,0,(int32_t)c->r[3],0); // 8004D5A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D5A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004D5A8
  c->r[30]=c->r[3]|c->r[3]; // 8004D5AC
  c->r[31]=c->r[4]|c->r[4]; // 8004D5B0
  if (crb(c,2)) { goto L_8004D5D4; } // 8004D5B4
  if (crb(c,2)) { goto L_8004D5C4; } // 8004D5B8
  c->r[4]=0u+0x00000000u; // 8004D5BC
  c->lr=0x8004D5C4u; f_8003ABE0(c); // 8004D5C0
L_8004D5C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004D5C4
  if (!crb(c,1)) { goto L_8004D5D4; } // 8004D5C8
  c->r[3]=c->r[30]|c->r[30]; // 8004D5CC
  c->lr=0x8004D5D4u; f_80244DC0(c); // 8004D5D0
L_8004D5D4:;
  c->r[3]=c->r[30]|c->r[30]; // 8004D5D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004D5D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D5DC
  c->lr=c->r[0]; // 8004D5E0
  c->r[1]=c->r[1]+0x00000010u; // 8004D5E4
  return; // 8004D5E8
}

// fn_8004D5EC
void f_8004D5EC(Ctx* __restrict c) {
  trace_call(0x8004D5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D5EC
  c->r[0]=c->lr; // 8004D5F0
  c->r[3]=0u+0x000000F4u; // 8004D5F4
  c->r[4]=c->r[13]+0xFFFF92D5u; // 8004D5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D5FC
  c->r[5]=0u+0x00000000u; // 8004D600
  c->r[6]=0u+0x00001001u; // 8004D604
  c->lr=0x8004D60Cu; f_80244D20(c); // 8004D608
  cmps(c,0,(int32_t)c->r[3],0); // 8004D60C
  if (crb(c,2)) { goto L_8004D618; } // 8004D610
  c->lr=0x8004D618u; f_8004D53C(c); // 8004D614
L_8004D618:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D618
  c->lr=c->r[0]; // 8004D61C
  c->r[1]=c->r[1]+0x00000010u; // 8004D620
  return; // 8004D624
}

// fn_8004D628
void f_8004D628(Ctx* __restrict c) {
  trace_call(0x8004D628u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D628
  c->r[0]=c->lr; // 8004D62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D634
  c->r[31]=c->r[3]|c->r[3]; // 8004D638
  c->lr=0x8004D640u; f_80244520(c); // 8004D63C
  c->r[7]=c->r[3]|c->r[3]; // 8004D640
  c->r[9]=c->r[31]|c->r[31]; // 8004D644
  c->r[3]=0u+0x000000F4u; // 8004D648
  c->r[4]=c->r[13]+0xFFFF92DAu; // 8004D64C
  c->r[5]=0u+0x00000000u; // 8004D650
  c->r[6]=0u+0x00002001u; // 8004D654
  c->r[8]=0u+0x00000000u; // 8004D658
  c->lr=0x8004D660u; f_80242DF0(c); // 8004D65C
  c->r[4]=c->r[3]|c->r[3]; // 8004D660
  c->r[3]=0u+0x000000F4u; // 8004D664
  c->r[5]=c->r[13]+0xFFFF92DFu; // 8004D668
  c->r[6]=0u+0x00000000u; // 8004D66C
  c->r[7]=0u+0x00001001u; // 8004D670
  c->lr=0x8004D678u; f_80244DB0(c); // 8004D674
  cmps(c,0,(int32_t)c->r[3],0); // 8004D678
  if (crb(c,2)) { goto L_8004D684; } // 8004D67C
  c->lr=0x8004D684u; f_8004D53C(c); // 8004D680
L_8004D684:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D688
  c->lr=c->r[0]; // 8004D68C
  c->r[1]=c->r[1]+0x00000010u; // 8004D690
  return; // 8004D694
}

// fn_8004D698
void f_8004D698(Ctx* __restrict c) {
  trace_call(0x8004D698u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D698
  c->r[0]=c->lr; // 8004D69C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D6A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D6A4
  c->r[31]=c->r[3]|c->r[3]; // 8004D6A8
  c->lr=0x8004D6B0u; f_8004B554(c); // 8004D6AC
  c->r[8]=0u+0x80420000u; // 8004D6B0
  c->r[6]=0u+0x80410000u; // 8004D6B4
  c->r[7]=0u+0x00000000u; // 8004D6B8
  c->r[5]=0u+0xAED70000u; // 8004D6BC
  c->r[4]=0u+0x39AD0000u; // 8004D6C0
  c->r[3]=0u+0x63110000u; // 8004D6C4
  c->r[0]=c->r[3]+0xFFFF9396u; // 8004D6C8
  c->r[8]=c->r[8]+0xFFFFFCE8u; // 8004D6CC
  c->r[6]=c->r[6]+0xFFFFBE2Au; // 8004D6D0
  c->r[5]=c->r[5]+0xFFFFE975u; // 8004D6D4
  c->r[4]=c->r[4]+0x00001D3Fu; // 8004D6D8
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004D6DC
  c->r[3]=c->r[31]|c->r[31]; // 8004D6E0
  W32(c->r[31]+0x000000FCu,c->r[7]); // 8004D6E4
  W32(c->r[31]+0x00000000u,c->r[6]); // 8004D6E8
  W32(c->r[31]+0x00000008u,c->r[7]); // 8004D6EC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004D6F0
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004D6F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004D6F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D700
  c->lr=c->r[0]; // 8004D704
  c->r[1]=c->r[1]+0x00000010u; // 8004D708
  return; // 8004D70C
}

// fn_8004D710
void f_8004D710(Ctx* __restrict c) {
  trace_call(0x8004D710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D710
  c->r[0]=c->lr; // 8004D714
  cmps(c,0,(int32_t)c->r[4],0); // 8004D718
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D71C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004D720
  c->r[30]=c->r[3]|c->r[3]; // 8004D724
  c->r[31]=c->r[4]|c->r[4]; // 8004D728
  if (crb(c,2)) { goto L_8004D780; } // 8004D72C
  c->r[3]=c->r[31]|c->r[31]; // 8004D730
  c->lr=0x8004D738u; f_80244520(c); // 8004D734
  c->r[7]=c->r[3]|c->r[3]; // 8004D738
  c->r[9]=c->r[31]|c->r[31]; // 8004D73C
  c->r[3]=0u+0x00000100u; // 8004D740
  c->r[4]=c->r[13]+0xFFFF92E4u; // 8004D744
  c->r[5]=0u+0x00000000u; // 8004D748
  c->r[6]=0u+0x00002001u; // 8004D74C
  c->r[8]=0u+0x00000000u; // 8004D750
  c->lr=0x8004D758u; f_80242DF0(c); // 8004D754
  c->r[4]=c->r[3]|c->r[3]; // 8004D758
  c->r[3]=0u+0x00000100u; // 8004D75C
  c->r[5]=c->r[13]+0xFFFF92E9u; // 8004D760
  c->r[6]=0u+0x00000000u; // 8004D764
  c->r[7]=0u+0x00001001u; // 8004D768
  c->lr=0x8004D770u; f_80244DB0(c); // 8004D76C
  cmps(c,0,(int32_t)c->r[3],0); // 8004D770
  if (crb(c,2)) { goto L_8004D7A0; } // 8004D774
  c->lr=0x8004D77Cu; f_8004D698(c); // 8004D778
  goto L_8004D7A0; // 8004D77C
L_8004D780:;
  c->r[3]=0u+0x00000100u; // 8004D780
  c->r[4]=c->r[13]+0xFFFF92EEu; // 8004D784
  c->r[5]=0u+0x00000000u; // 8004D788
  c->r[6]=0u+0x00001001u; // 8004D78C
  c->lr=0x8004D794u; f_80244D20(c); // 8004D790
  cmps(c,0,(int32_t)c->r[3],0); // 8004D794
  if (crb(c,2)) { goto L_8004D7A0; } // 8004D798
  c->lr=0x8004D7A0u; f_8004D698(c); // 8004D79C
L_8004D7A0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004D7A0
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004D7A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004D7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D7AC
  c->lr=c->r[0]; // 8004D7B0
  c->r[1]=c->r[1]+0x00000010u; // 8004D7B4
  return; // 8004D7B8
}

// fn_8004D7BC
void f_8004D7BC(Ctx* __restrict c) {
  trace_call(0x8004D7BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D7BC
  c->r[0]=c->lr; // 8004D7C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004D7C4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004D7C8
  c->r[29]=c->r[3]|c->r[3]; // 8004D7CC
  c->r[30]=c->r[4]|c->r[4]; // 8004D7D0
  c->lr=0x8004D7D8u; f_8004B674(c); // 8004D7D4
  c->r[31]=c->r[3]|c->r[3]; // 8004D7D8
  c->r[3]=c->r[30]|c->r[30]; // 8004D7DC
  c->r[4]=0u+0x00000000u; // 8004D7E0
  c->lr=0x8004D7E8u; f_8030BE30(c); // 8004D7E4
  W32(c->r[29]+0x000000D4u,c->r[3]); // 8004D7E8
  c->r[0]=0u+0x00000000u; // 8004D7EC
  c->r[3]=c->r[30]|c->r[30]; // 8004D7F0
  W32(c->r[29]+0x000000D8u,c->r[0]); // 8004D7F4
  c->lr=0x8004D7FCu; f_8030BD1C(c); // 8004D7F8
  W32(c->r[29]+0x000000DCu,c->r[3]); // 8004D7FC
  c->r[3]=c->r[30]|c->r[30]; // 8004D800
  c->lr=0x8004D808u; f_8030BD1C(c); // 8004D804
  W32(c->r[29]+0x000000E0u,c->r[3]); // 8004D808
  c->r[3]=c->r[30]|c->r[30]; // 8004D80C
  c->lr=0x8004D814u; f_8030BD1C(c); // 8004D810
  W8(c->r[29]+0x000000E4u,c->r[3]); // 8004D814
  c->r[3]=c->r[30]|c->r[30]; // 8004D818
  c->lr=0x8004D820u; f_8030BD1C(c); // 8004D81C
  W8(c->r[29]+0x000000E5u,c->r[3]); // 8004D820
  c->r[3]=c->r[30]|c->r[30]; // 8004D824
  c->lr=0x8004D82Cu; f_8030BD1C(c); // 8004D828
  W8(c->r[29]+0x000000E6u,c->r[3]); // 8004D82C
  c->r[3]=c->r[30]|c->r[30]; // 8004D830
  c->lr=0x8004D838u; f_8030BD1C(c); // 8004D834
  W8(c->r[29]+0x000000E7u,c->r[3]); // 8004D838
  c->r[3]=c->r[30]|c->r[30]; // 8004D83C
  c->lr=0x8004D844u; f_8030BD1C(c); // 8004D840
  W8(c->r[29]+0x000000E8u,c->r[3]); // 8004D844
  c->r[3]=c->r[30]|c->r[30]; // 8004D848
  c->lr=0x8004D850u; f_8030BD1C(c); // 8004D84C
  W8(c->r[29]+0x000000E9u,c->r[3]); // 8004D850
  c->r[3]=c->r[30]|c->r[30]; // 8004D854
  c->lr=0x8004D85Cu; f_8030C0A0(c); // 8004D858
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 8004D85C
  c->r[3]=c->r[30]|c->r[30]; // 8004D860
  c->lr=0x8004D868u; f_8030C0A0(c); // 8004D864
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 8004D868
  c->r[3]=c->r[30]|c->r[30]; // 8004D86C
  c->lr=0x8004D874u; f_8030C0A0(c); // 8004D870
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 8004D874
  c->r[3]=c->r[30]|c->r[30]; // 8004D878
  c->lr=0x8004D880u; f_8030C0A0(c); // 8004D87C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 8004D880
  c->r[3]=c->r[31]|c->r[31]; // 8004D884
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004D888
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004D88C
  c->lr=c->r[0]; // 8004D890
  c->r[1]=c->r[1]+0x00000020u; // 8004D894
  return; // 8004D898
}

// fn_8004D89C
void f_8004D89C(Ctx* __restrict c) {
  trace_call(0x8004D89Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D89C
  c->r[0]=c->lr; // 8004D8A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004D8A4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004D8A8
  c->r[27]=c->r[3]|c->r[3]; // 8004D8AC
  c->r[28]=c->r[4]|c->r[4]; // 8004D8B0
  c->r[29]=c->r[5]|c->r[5]; // 8004D8B4
  c->r[30]=c->r[6]|c->r[6]; // 8004D8B8
  c->r[7]=R32(c->r[3]+0x000000FCu); // 8004D8BC
  cmps(c,0,(int32_t)c->r[7],0); // 8004D8C0
  if (!crb(c,0)) { goto L_8004D8D4; } // 8004D8C4
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 8004D8C8
  W32(c->r[3]+0x000000FCu,c->r[0]); // 8004D8CC
  goto L_8004D8E4; // 8004D8D0
L_8004D8D4:;
  c->r[0]=c->r[7]+0x00000001u; // 8004D8D4
  W32(c->r[3]+0x000000FCu,c->r[0]); // 8004D8D8
  cmps(c,0,(int32_t)c->r[0],1); // 8004D8DC
  if (crb(c,1)) { goto L_8004D9A4; } // 8004D8E0
L_8004D8E4:;
  c->r[3]=c->r[27]|c->r[27]; // 8004D8E4
  c->r[4]=c->r[28]|c->r[28]; // 8004D8E8
  c->r[5]=c->r[29]|c->r[29]; // 8004D8EC
  c->r[6]=c->r[30]|c->r[30]; // 8004D8F0
  c->lr=0x8004D8F8u; f_802B11C0(c); // 8004D8F4
  c->r[4]=R32(c->r[27]+0x000000D4u); // 8004D8F8
  cmps(c,0,(int32_t)c->r[4],0); // 8004D8FC
  if (crb(c,2)) { goto L_8004D9A4; } // 8004D900
  c->r[0]=0u+0x00000001u; // 8004D904
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004D908
  c->r[6]=c->r[28]|c->r[28]; // 8004D90C
  c->r[7]=c->r[29]|c->r[29]; // 8004D910
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 8004D914
  c->r[8]=c->r[30]|c->r[30]; // 8004D918
  c->r[9]=R32(c->r[27]+0x000000DCu); // 8004D91C
  c->r[5]=0u+0x00000000u; // 8004D920
  c->r[10]=0u+0x00000001u; // 8004D924
  c->lr=0x8004D92Cu; f_80281A84(c); // 8004D928
  cmps(c,0,(int32_t)c->r[3],0); // 8004D92C
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004D930
  if (crb(c,2)) { goto L_8004D940; } // 8004D934
  c->lr=0x8004D93Cu; f_80295B6C(c); // 8004D938
  goto L_8004D9A4; // 8004D93C
L_8004D940:;
  c->r[3]=R32(c->r[27]+0x000000DCu); // 8004D940
  c->r[4]=c->r[30]|c->r[30]; // 8004D944
  c->r[5]=c->r[29]|c->r[29]; // 8004D948
  c->lr=0x8004D950u; f_802C0F98(c); // 8004D94C
  c->r[31]=c->r[3]|c->r[3]; // 8004D950
  c->r[3]=0u+0x00000044u; // 8004D954
  c->r[4]=c->r[13]+0xFFFF92F3u; // 8004D958
  c->r[5]=0u+0x00000000u; // 8004D95C
  c->r[6]=0u+0x00001001u; // 8004D960
  c->lr=0x8004D968u; f_80244D20(c); // 8004D964
  cmps(c,0,(int32_t)c->r[3],0); // 8004D968
  if (crb(c,2)) { goto L_8004D980; } // 8004D96C
  c->r[5]=R32(c->r[27]+0x000000D4u); // 8004D970
  c->r[4]=c->r[31]|c->r[31]; // 8004D974
  c->r[6]=0u+0x00000000u; // 8004D978
  c->lr=0x8004D980u; f_8029316C(c); // 8004D97C
L_8004D980:;
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004D980
  c->r[4]=c->r[28]|c->r[28]; // 8004D984
  c->r[7]=R32(c->r[27]+0x000000DCu); // 8004D988
  c->r[5]=c->r[29]|c->r[29]; // 8004D98C
  c->r[6]=c->r[30]|c->r[30]; // 8004D990
  c->r[8]=0u+0x00000001u; // 8004D994
  c->r[9]=0u+0x00000000u; // 8004D998
  c->lr=0x8004D9A0u; f_8027FFF4(c); // 8004D99C
  W32(c->r[27]+0x000000D8u,c->r[3]); // 8004D9A0
L_8004D9A4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004D9A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004D9A8
  c->lr=c->r[0]; // 8004D9AC
  c->r[1]=c->r[1]+0x00000030u; // 8004D9B0
  return; // 8004D9B4
}

// fn_8004D9B8
void f_8004D9B8(Ctx* __restrict c) {
  trace_call(0x8004D9B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D9B8
  c->r[0]=c->lr; // 8004D9BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004D9C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004D9C4
  c->r[31]=c->r[3]|c->r[3]; // 8004D9C8
  c->r[0]=R32(c->r[3]+0x000000FCu); // 8004D9CC
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8004D9D0
  W32(c->r[3]+0x000000FCu,c->r[0]); // 8004D9D4
  if (!crb(c,2)) { goto L_8004D9F8; } // 8004D9D8
  c->lr=0x8004D9E0u; f_802B11D0(c); // 8004D9DC
  c->r[3]=R32(c->r[31]+0x000000D8u); // 8004D9E0
  cmps(c,0,(int32_t)c->r[3],0); // 8004D9E4
  if (crb(c,2)) { goto L_8004D9F8; } // 8004D9E8
  c->lr=0x8004D9F0u; f_80295B7C(c); // 8004D9EC
  c->r[0]=0u+0x00000000u; // 8004D9F0
  W32(c->r[31]+0x000000D8u,c->r[0]); // 8004D9F4
L_8004D9F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004D9F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004D9FC
  c->lr=c->r[0]; // 8004DA00
  c->r[1]=c->r[1]+0x00000010u; // 8004DA04
  return; // 8004DA08
}

// fn_8004DA0C
void f_8004DA0C(Ctx* __restrict c) {
  trace_call(0x8004DA0Cu);
  f_80038EC8(c); return; // 8004DA0C
}

// fn_8004DA10
void f_8004DA10(Ctx* __restrict c) {
  trace_call(0x8004DA10u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004DA10
  if (!crb(c,2)) return; // 8004DA14
  f_8003A92C(c); return; // 8004DA18
  return; // 8004DA1C
}

// fn_8004DA20
void f_8004DA20(Ctx* __restrict c) {
  trace_call(0x8004DA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DA20
  c->r[0]=c->lr; // 8004DA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004DA2C
  c->r[31]=c->r[3]|c->r[3]; // 8004DA30
  c->lr=0x8004DA38u; f_8004B748(c); // 8004DA34
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004DA38
  c->r[4]=0u+0x00000000u; // 8004DA3C
  c->r[0]=0u+0x0000007Fu; // 8004DA40
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004DA44
  c->r[3]=0u+0x00000004u; // 8004DA48
  W32(c->r[31]+0x000000D4u,c->r[4]); // 8004DA4C
  W32(c->r[31]+0x000000D8u,c->r[4]); // 8004DA50
  W32(c->r[31]+0x000000DCu,c->r[3]); // 8004DA54
  W32(c->r[31]+0x000000E0u,c->r[4]); // 8004DA58
  W8(c->r[31]+0x000000E4u,c->r[0]); // 8004DA5C
  W8(c->r[31]+0x000000E5u,c->r[0]); // 8004DA60
  W8(c->r[31]+0x000000E6u,c->r[0]); // 8004DA64
  W8(c->r[31]+0x000000E7u,c->r[0]); // 8004DA68
  W8(c->r[31]+0x000000E8u,c->r[4]); // 8004DA6C
  W8(c->r[31]+0x000000E9u,c->r[4]); // 8004DA70
  {uint32_t ea=c->r[31]+0x000000ECu; WF32(ea,c->f[1]);} // 8004DA74
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 8004DA78
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[1]);} // 8004DA7C
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 8004DA80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004DA84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DA88
  c->lr=c->r[0]; // 8004DA8C
  c->r[1]=c->r[1]+0x00000010u; // 8004DA90
  return; // 8004DA94
}

// fn_8004DA98
void f_8004DA98(Ctx* __restrict c) {
  trace_call(0x8004DA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DA98
  c->r[0]=c->lr; // 8004DA9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004DAA0
  c->r[11]=c->r[1]+0x00000020u; // 8004DAA4
  c->lr=0x8004DAACu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004DAA8
  c->r[28]=c->r[3]|c->r[3]; // 8004DAAC
  c->r[29]=c->r[4]|c->r[4]; // 8004DAB0
  c->r[30]=c->r[5]|c->r[5]; // 8004DAB4
  c->r[31]=c->r[7]|c->r[7]; // 8004DAB8
  c->r[6]=0u+0x00000000u; // 8004DABC
  c->lr=0x8004DAC4u; f_8004B7C4(c); // 8004DAC0
  cmps(c,0,(int32_t)c->r[30],0); // 8004DAC4
  if (crb(c,2)) { goto L_8004DAD0; } // 8004DAC8
  goto L_8004DAD4; // 8004DACC
L_8004DAD0:;
  c->r[30]=c->r[28]|c->r[28]; // 8004DAD0
L_8004DAD4:;
  c->r[3]=c->r[30]+0x000000D4u; // 8004DAD4
  c->r[4]=c->r[29]+0x000000D4u; // 8004DAD8
  c->lr=0x8004DAE0u; f_8003BDD0(c); // 8004DADC
  c->r[0]=R32(c->r[29]+0x000000E0u); // 8004DAE0
  cmps(c,0,(int32_t)c->r[31],0); // 8004DAE4
  W32(c->r[30]+0x000000E0u,c->r[0]); // 8004DAE8
  c->r[0]=R8(c->r[29]+0x000000E4u); // 8004DAEC
  W8(c->r[30]+0x000000E4u,c->r[0]); // 8004DAF0
  c->r[0]=R8(c->r[29]+0x000000E5u); // 8004DAF4
  W8(c->r[30]+0x000000E5u,c->r[0]); // 8004DAF8
  c->r[0]=R8(c->r[29]+0x000000E6u); // 8004DAFC
  W8(c->r[30]+0x000000E6u,c->r[0]); // 8004DB00
  c->r[0]=R8(c->r[29]+0x000000E7u); // 8004DB04
  W8(c->r[30]+0x000000E7u,c->r[0]); // 8004DB08
  c->r[0]=R8(c->r[29]+0x000000E8u); // 8004DB0C
  W8(c->r[30]+0x000000E8u,c->r[0]); // 8004DB10
  c->r[0]=R8(c->r[29]+0x000000E9u); // 8004DB14
  W8(c->r[30]+0x000000E9u,c->r[0]); // 8004DB18
  {uint32_t ea=c->r[29]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004DB1C
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 8004DB20
  {uint32_t ea=c->r[29]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004DB24
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[0]);} // 8004DB28
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004DB2C
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[0]);} // 8004DB30
  {uint32_t ea=c->r[29]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004DB34
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[0]);} // 8004DB38
  if (crb(c,2)) { goto L_8004DB60; } // 8004DB3C
  c->r[3]=R32(c->r[28]+0x000000FCu); // 8004DB40
  cmps(c,0,(int32_t)c->r[3],0); // 8004DB44
  if (crb(c,1)) { goto L_8004DB58; } // 8004DB48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8004DB4C
  W32(c->r[28]+0x000000FCu,c->r[0]); // 8004DB50
  goto L_8004DB60; // 8004DB54
L_8004DB58:;
  c->r[0]=c->r[3]+0x00000001u; // 8004DB58
  W32(c->r[28]+0x000000FCu,c->r[0]); // 8004DB5C
L_8004DB60:;
  c->r[11]=c->r[1]+0x00000020u; // 8004DB60
  c->lr=0x8004DB68u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004DB64
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004DB68
  c->lr=c->r[0]; // 8004DB6C
  c->r[1]=c->r[1]+0x00000020u; // 8004DB70
  return; // 8004DB74
}

// fn_8004DB78
void f_8004DB78(Ctx* __restrict c) {
  trace_call(0x8004DB78u);
  c->r[0]=c->r[4]+0x122D0000u; // 8004DB78
  cmpu(c,0,c->r[0],0x0000AB11u); // 8004DB7C
  if (!crb(c,2)) { goto L_8004DB8C; } // 8004DB80
  c->r[3]=0u+0x00000001u; // 8004DB84
  return; // 8004DB88
L_8004DB8C:;
  c->r[0]=c->r[4]+0x05C00000u; // 8004DB8C
  cmpu(c,0,c->r[0],0x00000802u); // 8004DB90
  if (!crb(c,2)) { goto L_8004DBA0; } // 8004DB94
  c->r[3]=0u+0x00000001u; // 8004DB98
  return; // 8004DB9C
L_8004DBA0:;
  c->r[3]=0u+0xD12F0000u; // 8004DBA0
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004DBA4
  c->r[0]=c->r[4]-c->r[0]; // 8004DBA8
  c->r[0]=cntlz(c->r[0]); // 8004DBAC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004DBB0
  return; // 8004DBB4
}

// fn_8004DBB8
void f_8004DBB8(Ctx* __restrict c) {
  trace_call(0x8004DBB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DBB8
  c->r[0]=c->lr; // 8004DBBC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8004DBC0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8004DBC4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8004DBC8
  c->r[11]=c->r[1]+0x00000050u; // 8004DBCC
  c->lr=0x8004DBD4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004DBD0
  c->f[31]=c->f[1]; // 8004DBD4
  c->r[0]=0u+0x43300000u; // 8004DBD8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004DBDC
  c->r[29]=c->r[3]|c->r[3]; // 8004DBE0
  c->r[31]=c->r[4]|c->r[4]; // 8004DBE4
  c->r[30]=c->r[5]|c->r[5]; // 8004DBE8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004DBEC
  c->lr=0x8004DBF4u; f_8004B898(c); // 8004DBF0
  c->r[3]=R8(c->r[31]+0x000000E4u); // 8004DBF4
  c->r[0]=R8(c->r[30]+0x000000E4u); // 8004DBF8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004DBFC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004DC00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DC04
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[3]=RF64(ea);} // 8004DC08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8004DC0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004DC10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004DC14
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004DC18
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004DC1C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DC20
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004DC24
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004DC28
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004DC2C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 8004DC30
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004DC34
  W8(c->r[29]+0x000000E4u,c->r[0]); // 8004DC38
  c->r[3]=R8(c->r[31]+0x000000E5u); // 8004DC3C
  c->r[0]=R8(c->r[30]+0x000000E5u); // 8004DC40
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004DC44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DC48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004DC4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004DC50
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004DC54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004DC58
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DC5C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004DC60
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004DC64
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004DC68
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 8004DC6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004DC70
  W8(c->r[29]+0x000000E5u,c->r[0]); // 8004DC74
  c->r[3]=R8(c->r[31]+0x000000E6u); // 8004DC78
  c->r[0]=R8(c->r[30]+0x000000E6u); // 8004DC7C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004DC80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DC84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004DC88
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004DC8C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004DC90
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004DC94
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DC98
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004DC9C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004DCA0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004DCA4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8004DCA8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8004DCAC
  W8(c->r[29]+0x000000E6u,c->r[0]); // 8004DCB0
  c->r[3]=R8(c->r[31]+0x000000E7u); // 8004DCB4
  c->r[0]=R8(c->r[30]+0x000000E7u); // 8004DCB8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004DCBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DCC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8004DCC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8004DCC8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8004DCCC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004DCD0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DCD4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004DCD8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004DCDC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8004DCE0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[1]);} // 8004DCE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004DCE8
  W8(c->r[29]+0x000000E7u,c->r[0]); // 8004DCEC
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004DCF0
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004DCF4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DCF8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004DCFC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004DD00
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[1]);} // 8004DD04
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004DD08
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004DD0C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DD10
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004DD14
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004DD18
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 8004DD1C
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004DD20
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004DD24
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DD28
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 8004DD2C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8004DD30
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 8004DD34
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004DD38
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004DD3C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8004DD40
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 8004DD44
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8004DD48
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 8004DD4C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8004DD50
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8004DD54
  c->r[11]=c->r[1]+0x00000050u; // 8004DD58
  c->lr=0x8004DD60u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004DD5C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8004DD60
  c->lr=c->r[0]; // 8004DD64
  c->r[1]=c->r[1]+0x00000060u; // 8004DD68
  return; // 8004DD6C
}

// fn_8004DD70
void f_8004DD70(Ctx* __restrict c) {
  trace_call(0x8004DD70u);
  c->r[3]=0u+0x00000100u; // 8004DD70
  return; // 8004DD74
}

// fn_8004DD78
void f_8004DD78(Ctx* __restrict c) {
  trace_call(0x8004DD78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DD78
  c->r[0]=c->lr; // 8004DD7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DD80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004DD84
  c->r[31]=c->r[3]|c->r[3]; // 8004DD88
  c->lr=0x8004DD90u; f_8004D698(c); // 8004DD8C
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004DD90
  c->r[3]=0u+0x80420000u; // 8004DD94
  c->r[3]=c->r[3]+0xFFFFFCA8u; // 8004DD98
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004DD9C
  c->r[0]=c->r[0]|0x80000000u; // 8004DDA0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004DDA4
  c->r[3]=c->r[31]|c->r[31]; // 8004DDA8
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004DDAC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004DDB0
  c->ctr=c->r[12]; // 8004DDB4
  if (true) { c->lr=0x8004DDBCu; dispatch(c,c->ctr); } // 8004DDB8
  c->r[3]=c->r[31]|c->r[31]; // 8004DDBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004DDC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DDC4
  c->lr=c->r[0]; // 8004DDC8
  c->r[1]=c->r[1]+0x00000010u; // 8004DDCC
  return; // 8004DDD0
}

// fn_8004DDD4
void f_8004DDD4(Ctx* __restrict c) {
  trace_call(0x8004DDD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DDD4
  c->r[0]=c->lr; // 8004DDD8
  cmps(c,0,(int32_t)c->r[3],0); // 8004DDDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DDE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004DDE4
  c->r[30]=c->r[3]|c->r[3]; // 8004DDE8
  c->r[31]=c->r[4]|c->r[4]; // 8004DDEC
  if (crb(c,2)) { goto L_8004DE10; } // 8004DDF0
  if (crb(c,2)) { goto L_8004DE00; } // 8004DDF4
  c->r[4]=0u+0x00000000u; // 8004DDF8
  c->lr=0x8004DE00u; f_8003ABE0(c); // 8004DDFC
L_8004DE00:;
  cmps(c,0,(int32_t)c->r[31],0); // 8004DE00
  if (!crb(c,1)) { goto L_8004DE10; } // 8004DE04
  c->r[3]=c->r[30]|c->r[30]; // 8004DE08
  c->lr=0x8004DE10u; f_80244DC0(c); // 8004DE0C
L_8004DE10:;
  c->r[3]=c->r[30]|c->r[30]; // 8004DE10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004DE14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DE18
  c->lr=c->r[0]; // 8004DE1C
  c->r[1]=c->r[1]+0x00000010u; // 8004DE20
  return; // 8004DE24
}

// fn_8004DE28
void f_8004DE28(Ctx* __restrict c) {
  trace_call(0x8004DE28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DE28
  c->r[0]=c->lr; // 8004DE2C
  c->r[3]=0u+0x00000100u; // 8004DE30
  c->r[4]=c->r[13]+0xFFFF92F8u; // 8004DE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DE38
  c->r[5]=0u+0x00000000u; // 8004DE3C
  c->r[6]=0u+0x00001001u; // 8004DE40
  c->lr=0x8004DE48u; f_80244D20(c); // 8004DE44
  cmps(c,0,(int32_t)c->r[3],0); // 8004DE48
  if (crb(c,2)) { goto L_8004DE54; } // 8004DE4C
  c->lr=0x8004DE54u; f_8004DD78(c); // 8004DE50
L_8004DE54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DE54
  c->lr=c->r[0]; // 8004DE58
  c->r[1]=c->r[1]+0x00000010u; // 8004DE5C
  return; // 8004DE60
}

// fn_8004DE64
void f_8004DE64(Ctx* __restrict c) {
  trace_call(0x8004DE64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DE64
  c->r[0]=c->lr; // 8004DE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004DE70
  c->r[31]=c->r[3]|c->r[3]; // 8004DE74
  c->lr=0x8004DE7Cu; f_80244520(c); // 8004DE78
  c->r[7]=c->r[3]|c->r[3]; // 8004DE7C
  c->r[9]=c->r[31]|c->r[31]; // 8004DE80
  c->r[3]=0u+0x00000100u; // 8004DE84
  c->r[4]=c->r[13]+0xFFFF92FDu; // 8004DE88
  c->r[5]=0u+0x00000000u; // 8004DE8C
  c->r[6]=0u+0x00002001u; // 8004DE90
  c->r[8]=0u+0x00000000u; // 8004DE94
  c->lr=0x8004DE9Cu; f_80242DF0(c); // 8004DE98
  c->r[4]=c->r[3]|c->r[3]; // 8004DE9C
  c->r[3]=0u+0x00000100u; // 8004DEA0
  c->r[5]=c->r[13]+0xFFFF9302u; // 8004DEA4
  c->r[6]=0u+0x00000000u; // 8004DEA8
  c->r[7]=0u+0x00001001u; // 8004DEAC
  c->lr=0x8004DEB4u; f_80244DB0(c); // 8004DEB0
  cmps(c,0,(int32_t)c->r[3],0); // 8004DEB4
  if (crb(c,2)) { goto L_8004DEC0; } // 8004DEB8
  c->lr=0x8004DEC0u; f_8004DD78(c); // 8004DEBC
L_8004DEC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DEC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004DEC4
  c->lr=c->r[0]; // 8004DEC8
  c->r[1]=c->r[1]+0x00000010u; // 8004DECC
  return; // 8004DED0
}

// fn_8004DED4
void f_8004DED4(Ctx* __restrict c) {
  trace_call(0x8004DED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DED4
  c->r[0]=c->lr; // 8004DED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DEDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004DEE0
  c->r[31]=c->r[3]|c->r[3]; // 8004DEE4
  c->lr=0x8004DEECu; f_8003A6F0(c); // 8004DEE8
  c->r[8]=0u+0x80420000u; // 8004DEEC
  c->r[7]=0u+0x80410000u; // 8004DEF0
  c->r[5]=0u+0x4FDA0000u; // 8004DEF4
  c->r[4]=0u+0x8ABE0000u; // 8004DEF8
  c->r[3]=0u+0xCE6C0000u; // 8004DEFC
  c->r[8]=c->r[8]+0xFFFFFC6Cu; // 8004DF00
  c->r[0]=c->r[3]+0xFFFF9683u; // 8004DF04
  c->r[7]=c->r[7]+0xFFFFBE42u; // 8004DF08
  c->r[5]=c->r[5]+0x00006E63u; // 8004DF0C
  c->r[4]=c->r[4]+0xFFFF88B1u; // 8004DF10
  c->r[6]=0u+0x00000000u; // 8004DF14
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004DF18
  c->r[3]=c->r[31]|c->r[31]; // 8004DF1C
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004DF20
  W32(c->r[31]+0x00000008u,c->r[6]); // 8004DF24
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004DF28
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004DF2C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004DF30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004DF34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DF38
  c->lr=c->r[0]; // 8004DF3C
  c->r[1]=c->r[1]+0x00000010u; // 8004DF40
  return; // 8004DF44
}

// fn_8004DF48
void f_8004DF48(Ctx* __restrict c) {
  trace_call(0x8004DF48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DF48
  c->r[0]=c->lr; // 8004DF4C
  cmps(c,0,(int32_t)c->r[4],0); // 8004DF50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004DF54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004DF58
  c->r[30]=c->r[3]|c->r[3]; // 8004DF5C
  c->r[31]=c->r[4]|c->r[4]; // 8004DF60
  if (crb(c,2)) { goto L_8004DFB8; } // 8004DF64
  c->r[3]=c->r[31]|c->r[31]; // 8004DF68
  c->lr=0x8004DF70u; f_80244520(c); // 8004DF6C
  c->r[7]=c->r[3]|c->r[3]; // 8004DF70
  c->r[9]=c->r[31]|c->r[31]; // 8004DF74
  c->r[3]=0u+0x00000150u; // 8004DF78
  c->r[4]=c->r[13]+0xFFFF9307u; // 8004DF7C
  c->r[5]=0u+0x00000000u; // 8004DF80
  c->r[6]=0u+0x00002001u; // 8004DF84
  c->r[8]=0u+0x00000000u; // 8004DF88
  c->lr=0x8004DF90u; f_80242DF0(c); // 8004DF8C
  c->r[4]=c->r[3]|c->r[3]; // 8004DF90
  c->r[3]=0u+0x00000150u; // 8004DF94
  c->r[5]=c->r[13]+0xFFFF930Cu; // 8004DF98
  c->r[6]=0u+0x00000000u; // 8004DF9C
  c->r[7]=0u+0x00001001u; // 8004DFA0
  c->lr=0x8004DFA8u; f_80244DB0(c); // 8004DFA4
  cmps(c,0,(int32_t)c->r[3],0); // 8004DFA8
  if (crb(c,2)) { goto L_8004DFD8; } // 8004DFAC
  c->lr=0x8004DFB4u; f_8004DED4(c); // 8004DFB0
  goto L_8004DFD8; // 8004DFB4
L_8004DFB8:;
  c->r[3]=0u+0x00000150u; // 8004DFB8
  c->r[4]=c->r[13]+0xFFFF9311u; // 8004DFBC
  c->r[5]=0u+0x00000000u; // 8004DFC0
  c->r[6]=0u+0x00001001u; // 8004DFC4
  c->lr=0x8004DFCCu; f_80244D20(c); // 8004DFC8
  cmps(c,0,(int32_t)c->r[3],0); // 8004DFCC
  if (crb(c,2)) { goto L_8004DFD8; } // 8004DFD0
  c->lr=0x8004DFD8u; f_8004DED4(c); // 8004DFD4
L_8004DFD8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004DFD8
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004DFDC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004DFE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004DFE4
  c->lr=c->r[0]; // 8004DFE8
  c->r[1]=c->r[1]+0x00000010u; // 8004DFEC
  return; // 8004DFF0
}

// fn_8004DFF4
void f_8004DFF4(Ctx* __restrict c) {
  trace_call(0x8004DFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DFF4
  c->r[0]=c->lr; // 8004DFF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004DFFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004E000
  c->r[26]=c->r[3]|c->r[3]; // 8004E004
  c->r[27]=c->r[4]|c->r[4]; // 8004E008
  c->lr=0x8004E010u; f_8003A810(c); // 8004E00C
  c->r[29]=c->r[3]|c->r[3]; // 8004E010
  c->r[3]=c->r[27]|c->r[27]; // 8004E014
  c->lr=0x8004E01Cu; f_8030BD1C(c); // 8004E018
  c->r[30]=c->r[3]|c->r[3]; // 8004E01C
  c->r[28]=0u+0x00000000u; // 8004E020
  c->r[31]=0u+0x00000000u; // 8004E024
  goto L_8004E048; // 8004E028
L_8004E02C:;
  c->r[3]=c->r[27]|c->r[27]; // 8004E02C
  c->r[4]=0u+0x00000000u; // 8004E030
  c->lr=0x8004E038u; f_8030BE30(c); // 8004E034
  c->r[4]=c->r[26]+c->r[31]; // 8004E038
  c->r[31]=c->r[31]+0x00000004u; // 8004E03C
  W32(c->r[4]+0x000000A8u,c->r[3]); // 8004E040
  c->r[28]=c->r[28]+0x00000001u; // 8004E044
L_8004E048:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[30]); // 8004E048
  if (crb(c,0)) { IRQCHK(c); goto L_8004E02C; } // 8004E04C
  c->r[3]=c->r[27]|c->r[27]; // 8004E050
  c->lr=0x8004E058u; f_8030BD1C(c); // 8004E054
  W8(c->r[26]+0x000000D0u,c->r[3]); // 8004E058
  c->r[3]=c->r[27]|c->r[27]; // 8004E05C
  c->lr=0x8004E064u; f_8030BD1C(c); // 8004E060
  W8(c->r[26]+0x000000D1u,c->r[3]); // 8004E064
  c->r[3]=c->r[27]|c->r[27]; // 8004E068
  c->lr=0x8004E070u; f_8030BD1C(c); // 8004E06C
  W8(c->r[26]+0x000000D2u,c->r[3]); // 8004E070
  c->r[3]=c->r[27]|c->r[27]; // 8004E074
  c->lr=0x8004E07Cu; f_8030BD1C(c); // 8004E078
  W8(c->r[26]+0x000000D3u,c->r[3]); // 8004E07C
  c->r[3]=c->r[27]|c->r[27]; // 8004E080
  c->lr=0x8004E088u; f_8030BD1C(c); // 8004E084
  W8(c->r[26]+0x000000D4u,c->r[3]); // 8004E088
  c->r[3]=c->r[27]|c->r[27]; // 8004E08C
  c->lr=0x8004E094u; f_8030C0A0(c); // 8004E090
  {uint32_t ea=c->r[26]+0x000000D8u; WF32(ea,c->f[1]);} // 8004E094
  c->r[3]=c->r[27]|c->r[27]; // 8004E098
  c->lr=0x8004E0A0u; f_8030BD1C(c); // 8004E09C
  W8(c->r[26]+0x000000DCu,c->r[3]); // 8004E0A0
  c->r[3]=c->r[27]|c->r[27]; // 8004E0A4
  c->lr=0x8004E0ACu; f_8030BD1C(c); // 8004E0A8
  W8(c->r[26]+0x000000DDu,c->r[3]); // 8004E0AC
  c->r[3]=c->r[27]|c->r[27]; // 8004E0B0
  c->lr=0x8004E0B8u; f_8030BD1C(c); // 8004E0B4
  W8(c->r[26]+0x000000DEu,c->r[3]); // 8004E0B8
  c->r[3]=c->r[27]|c->r[27]; // 8004E0BC
  c->lr=0x8004E0C4u; f_8030BD1C(c); // 8004E0C0
  W8(c->r[26]+0x000000DFu,c->r[3]); // 8004E0C4
  c->r[3]=c->r[27]|c->r[27]; // 8004E0C8
  c->lr=0x8004E0D0u; f_8030BD1C(c); // 8004E0CC
  W8(c->r[26]+0x000000E0u,c->r[3]); // 8004E0D0
  c->r[3]=c->r[27]|c->r[27]; // 8004E0D4
  c->lr=0x8004E0DCu; f_8030BD1C(c); // 8004E0D8
  W8(c->r[26]+0x000000E1u,c->r[3]); // 8004E0DC
  c->r[3]=c->r[27]|c->r[27]; // 8004E0E0
  c->lr=0x8004E0E8u; f_8030C0A0(c); // 8004E0E4
  {uint32_t ea=c->r[26]+0x000000E4u; WF32(ea,c->f[1]);} // 8004E0E8
  c->r[3]=c->r[27]|c->r[27]; // 8004E0EC
  c->lr=0x8004E0F4u; f_8030C0A0(c); // 8004E0F0
  {uint32_t ea=c->r[26]+0x000000E8u; WF32(ea,c->f[1]);} // 8004E0F4
  c->r[3]=c->r[27]|c->r[27]; // 8004E0F8
  c->lr=0x8004E100u; f_8030BD1C(c); // 8004E0FC
  W8(c->r[26]+0x000000ECu,c->r[3]); // 8004E100
  c->r[3]=c->r[27]|c->r[27]; // 8004E104
  c->lr=0x8004E10Cu; f_8030BD1C(c); // 8004E108
  W8(c->r[26]+0x000000EDu,c->r[3]); // 8004E10C
  c->r[3]=c->r[27]|c->r[27]; // 8004E110
  c->lr=0x8004E118u; f_8030BD1C(c); // 8004E114
  W8(c->r[26]+0x000000EEu,c->r[3]); // 8004E118
  c->r[3]=c->r[27]|c->r[27]; // 8004E11C
  c->lr=0x8004E124u; f_8030BD1C(c); // 8004E120
  W8(c->r[26]+0x000000EFu,c->r[3]); // 8004E124
  c->r[3]=c->r[27]|c->r[27]; // 8004E128
  c->lr=0x8004E130u; f_8030BD1C(c); // 8004E12C
  W8(c->r[26]+0x000000F0u,c->r[3]); // 8004E130
  c->r[3]=c->r[27]|c->r[27]; // 8004E134
  c->lr=0x8004E13Cu; f_8030C0A0(c); // 8004E138
  {uint32_t ea=c->r[26]+0x000000F4u; WF32(ea,c->f[1]);} // 8004E13C
  c->r[3]=c->r[27]|c->r[27]; // 8004E140
  c->lr=0x8004E148u; f_8030BD1C(c); // 8004E144
  W8(c->r[26]+0x000000F8u,c->r[3]); // 8004E148
  c->r[3]=c->r[27]|c->r[27]; // 8004E14C
  c->lr=0x8004E154u; f_8030BD1C(c); // 8004E150
  W8(c->r[26]+0x000000F9u,c->r[3]); // 8004E154
  c->r[3]=c->r[27]|c->r[27]; // 8004E158
  c->lr=0x8004E160u; f_8030BD1C(c); // 8004E15C
  W8(c->r[26]+0x000000FAu,c->r[3]); // 8004E160
  c->r[3]=c->r[27]|c->r[27]; // 8004E164
  c->lr=0x8004E16Cu; f_8030BD1C(c); // 8004E168
  W8(c->r[26]+0x000000FBu,c->r[3]); // 8004E16C
  c->r[3]=c->r[27]|c->r[27]; // 8004E170
  c->lr=0x8004E178u; f_8030BD1C(c); // 8004E174
  W8(c->r[26]+0x000000FCu,c->r[3]); // 8004E178
  c->r[3]=c->r[27]|c->r[27]; // 8004E17C
  c->lr=0x8004E184u; f_8030C0A0(c); // 8004E180
  {uint32_t ea=c->r[26]+0x00000100u; WF32(ea,c->f[1]);} // 8004E184
  c->r[3]=c->r[27]|c->r[27]; // 8004E188
  c->lr=0x8004E190u; f_8030C0A0(c); // 8004E18C
  {uint32_t ea=c->r[26]+0x00000104u; WF32(ea,c->f[1]);} // 8004E190
  c->r[3]=c->r[27]|c->r[27]; // 8004E194
  c->r[4]=0u+0x00000000u; // 8004E198
  c->lr=0x8004E1A0u; f_8030BE30(c); // 8004E19C
  W32(c->r[26]+0x00000108u,c->r[3]); // 8004E1A0
  c->r[3]=c->r[27]|c->r[27]; // 8004E1A4
  c->lr=0x8004E1ACu; f_8030BD1C(c); // 8004E1A8
  W8(c->r[26]+0x0000010Cu,c->r[3]); // 8004E1AC
  c->r[3]=c->r[27]|c->r[27]; // 8004E1B0
  c->lr=0x8004E1B8u; f_8030BD1C(c); // 8004E1B4
  W32(c->r[26]+0x00000110u,c->r[3]); // 8004E1B8
  c->r[3]=c->r[27]|c->r[27]; // 8004E1BC
  c->lr=0x8004E1C4u; f_8030BD1C(c); // 8004E1C0
  W8(c->r[26]+0x00000114u,c->r[3]); // 8004E1C4
  c->r[3]=c->r[27]|c->r[27]; // 8004E1C8
  c->lr=0x8004E1D0u; f_8030BD1C(c); // 8004E1CC
  W8(c->r[26]+0x00000115u,c->r[3]); // 8004E1D0
  c->r[3]=c->r[27]|c->r[27]; // 8004E1D4
  c->lr=0x8004E1DCu; f_8030BD1C(c); // 8004E1D8
  W8(c->r[26]+0x00000116u,c->r[3]); // 8004E1DC
  c->r[3]=c->r[27]|c->r[27]; // 8004E1E0
  c->lr=0x8004E1E8u; f_8030BD1C(c); // 8004E1E4
  W8(c->r[26]+0x00000117u,c->r[3]); // 8004E1E8
  c->r[3]=c->r[27]|c->r[27]; // 8004E1EC
  c->lr=0x8004E1F4u; f_8030BD1C(c); // 8004E1F0
  W8(c->r[26]+0x00000118u,c->r[3]); // 8004E1F4
  c->r[3]=c->r[27]|c->r[27]; // 8004E1F8
  c->lr=0x8004E200u; f_8030BD1C(c); // 8004E1FC
  W32(c->r[26]+0x0000011Cu,c->r[3]); // 8004E200
  c->r[3]=c->r[27]|c->r[27]; // 8004E204
  c->lr=0x8004E20Cu; f_8030BD1C(c); // 8004E208
  W8(c->r[26]+0x00000120u,c->r[3]); // 8004E20C
  c->r[3]=c->r[27]|c->r[27]; // 8004E210
  c->lr=0x8004E218u; f_8030BD1C(c); // 8004E214
  W8(c->r[26]+0x00000121u,c->r[3]); // 8004E218
  c->r[3]=c->r[27]|c->r[27]; // 8004E21C
  c->r[4]=0u+0x00000000u; // 8004E220
  c->lr=0x8004E228u; f_8030BE30(c); // 8004E224
  W32(c->r[26]+0x00000124u,c->r[3]); // 8004E228
  c->r[3]=c->r[27]|c->r[27]; // 8004E22C
  c->lr=0x8004E234u; f_8030BD1C(c); // 8004E230
  W32(c->r[26]+0x00000128u,c->r[3]); // 8004E234
  c->r[3]=c->r[27]|c->r[27]; // 8004E238
  c->lr=0x8004E240u; f_8030BD1C(c); // 8004E23C
  W32(c->r[26]+0x0000012Cu,c->r[3]); // 8004E240
  c->r[3]=c->r[27]|c->r[27]; // 8004E244
  c->r[4]=c->r[26]+0x00000130u; // 8004E248
  c->r[5]=0u+0x00000000u; // 8004E24C
  c->lr=0x8004E254u; f_8030B7F0(c); // 8004E250
  c->r[3]=c->r[29]|c->r[29]; // 8004E254
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004E258
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E25C
  c->lr=c->r[0]; // 8004E260
  c->r[1]=c->r[1]+0x00000020u; // 8004E264
  return; // 8004E268
}

// fn_8004E26C
void f_8004E26C(Ctx* __restrict c) {
  trace_call(0x8004E26Cu);
  f_80038EC8(c); return; // 8004E26C
}

// fn_8004E270
void f_8004E270(Ctx* __restrict c) {
  trace_call(0x8004E270u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004E270
  if (!crb(c,2)) return; // 8004E274
  f_8003A92C(c); return; // 8004E278
  return; // 8004E27C
}

// fn_8004E280
void f_8004E280(Ctx* __restrict c) {
  trace_call(0x8004E280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E280
  c->r[0]=c->lr; // 8004E284
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004E28C
  c->r[31]=c->r[3]|c->r[3]; // 8004E290
  c->lr=0x8004E298u; f_8003AA04(c); // 8004E294
  c->r[0]=0u+0x0000000Au; // 8004E298
  c->r[5]=0u+0x00000000u; // 8004E29C
  c->r[3]=0u+0x00000000u; // 8004E2A0
  c->ctr=c->r[0]; // 8004E2A4
L_8004E2A8:;
  c->r[4]=c->r[31]+c->r[3]; // 8004E2A8
  c->r[3]=c->r[3]+0x00000004u; // 8004E2AC
  W32(c->r[4]+0x000000A8u,c->r[5]); // 8004E2B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004E2A8; } // 8004E2B4
  {uint32_t ea=c->r[2]+0xFFFF86F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004E2B8
  c->r[9]=0u+0x00000000u; // 8004E2BC
  c->r[8]=0u+0x000000FFu; // 8004E2C0
  c->r[6]=0u+0x000000AAu; // 8004E2C4
  c->r[7]=0u+0x00000001u; // 8004E2C8
  c->r[5]=0u+0x0000007Fu; // 8004E2CC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004E2D0
  c->r[0]=0u+0x00001000u; // 8004E2D4
  {uint32_t ea=c->r[2]+0xFFFF86A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004E2D8
  c->r[3]=c->r[31]+0x00000130u; // 8004E2DC
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004E2E0
  c->r[4]=c->r[13]+0xFFFF9316u; // 8004E2E4
  {uint32_t ea=c->r[2]+0xFFFF86B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E2E8
  W8(c->r[31]+0x000000D0u,c->r[9]); // 8004E2EC
  W8(c->r[31]+0x000000D1u,c->r[8]); // 8004E2F0
  W8(c->r[31]+0x000000D2u,c->r[8]); // 8004E2F4
  W8(c->r[31]+0x000000D3u,c->r[8]); // 8004E2F8
  W8(c->r[31]+0x000000D4u,c->r[8]); // 8004E2FC
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[4]);} // 8004E300
  W8(c->r[31]+0x000000DCu,c->r[9]); // 8004E304
  W8(c->r[31]+0x000000DDu,c->r[7]); // 8004E308
  W8(c->r[31]+0x000000DEu,c->r[8]); // 8004E30C
  W8(c->r[31]+0x000000DFu,c->r[8]); // 8004E310
  W8(c->r[31]+0x000000E0u,c->r[8]); // 8004E314
  W8(c->r[31]+0x000000E1u,c->r[8]); // 8004E318
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[4]);} // 8004E31C
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[3]);} // 8004E320
  W8(c->r[31]+0x000000ECu,c->r[9]); // 8004E324
  W8(c->r[31]+0x000000EDu,c->r[6]); // 8004E328
  W8(c->r[31]+0x000000EEu,c->r[6]); // 8004E32C
  W8(c->r[31]+0x000000EFu,c->r[6]); // 8004E330
  W8(c->r[31]+0x000000F0u,c->r[5]); // 8004E334
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[2]);} // 8004E338
  W8(c->r[31]+0x000000F8u,c->r[9]); // 8004E33C
  W8(c->r[31]+0x000000F9u,c->r[6]); // 8004E340
  W8(c->r[31]+0x000000FAu,c->r[6]); // 8004E344
  W8(c->r[31]+0x000000FBu,c->r[6]); // 8004E348
  W8(c->r[31]+0x000000FCu,c->r[5]); // 8004E34C
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[1]);} // 8004E350
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8004E354
  W32(c->r[31]+0x00000108u,c->r[9]); // 8004E358
  W8(c->r[31]+0x0000010Cu,c->r[9]); // 8004E35C
  W32(c->r[31]+0x00000110u,c->r[0]); // 8004E360
  W8(c->r[31]+0x00000114u,c->r[9]); // 8004E364
  W8(c->r[31]+0x00000115u,c->r[9]); // 8004E368
  W8(c->r[31]+0x00000116u,c->r[9]); // 8004E36C
  W8(c->r[31]+0x00000117u,c->r[9]); // 8004E370
  W8(c->r[31]+0x00000118u,c->r[9]); // 8004E374
  W32(c->r[31]+0x0000011Cu,c->r[9]); // 8004E378
  W8(c->r[31]+0x00000120u,c->r[7]); // 8004E37C
  W8(c->r[31]+0x00000121u,c->r[9]); // 8004E380
  W32(c->r[31]+0x00000124u,c->r[9]); // 8004E384
  W32(c->r[31]+0x00000128u,c->r[9]); // 8004E388
  W32(c->r[31]+0x0000012Cu,c->r[9]); // 8004E38C
  c->lr=0x8004E394u; f_803A6F10(c); // 8004E390
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004E394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004E398
  c->lr=c->r[0]; // 8004E39C
  c->r[1]=c->r[1]+0x00000010u; // 8004E3A0
  return; // 8004E3A4
}

// fn_8004E3A8
void f_8004E3A8(Ctx* __restrict c) {
  trace_call(0x8004E3A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E3A8
  c->r[0]=c->lr; // 8004E3AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E3B0
  c->r[11]=c->r[1]+0x00000020u; // 8004E3B4
  c->lr=0x8004E3BCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004E3B8
  c->r[29]=c->r[3]|c->r[3]; // 8004E3BC
  c->r[30]=c->r[4]|c->r[4]; // 8004E3C0
  c->r[31]=c->r[5]|c->r[5]; // 8004E3C4
  c->r[6]=0u+0x00000000u; // 8004E3C8
  c->lr=0x8004E3D0u; f_8003AA90(c); // 8004E3CC
  cmps(c,0,(int32_t)c->r[31],0); // 8004E3D0
  if (crb(c,2)) { goto L_8004E3DC; } // 8004E3D4
  goto L_8004E3E0; // 8004E3D8
L_8004E3DC:;
  c->r[31]=c->r[29]|c->r[29]; // 8004E3DC
L_8004E3E0:;
  c->r[3]=c->r[31]+0x000000A8u; // 8004E3E0
  c->r[4]=c->r[30]+0x000000A8u; // 8004E3E4
  c->r[5]=0u+0x00000028u; // 8004E3E8
  c->lr=0x8004E3F0u; f_8000626C(c); // 8004E3EC
  c->r[0]=R8(c->r[30]+0x000000D0u); // 8004E3F0
  c->r[3]=c->r[31]+0x00000130u; // 8004E3F4
  W8(c->r[31]+0x000000D0u,c->r[0]); // 8004E3F8
  c->r[4]=c->r[30]+0x00000130u; // 8004E3FC
  c->r[0]=R8(c->r[30]+0x000000D1u); // 8004E400
  W8(c->r[31]+0x000000D1u,c->r[0]); // 8004E404
  c->r[0]=R8(c->r[30]+0x000000D2u); // 8004E408
  W8(c->r[31]+0x000000D2u,c->r[0]); // 8004E40C
  c->r[0]=R8(c->r[30]+0x000000D3u); // 8004E410
  W8(c->r[31]+0x000000D3u,c->r[0]); // 8004E414
  c->r[0]=R8(c->r[30]+0x000000D4u); // 8004E418
  W8(c->r[31]+0x000000D4u,c->r[0]); // 8004E41C
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E420
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 8004E424
  c->r[0]=R8(c->r[30]+0x000000DCu); // 8004E428
  W8(c->r[31]+0x000000DCu,c->r[0]); // 8004E42C
  c->r[0]=R8(c->r[30]+0x000000DDu); // 8004E430
  W8(c->r[31]+0x000000DDu,c->r[0]); // 8004E434
  c->r[0]=R8(c->r[30]+0x000000DEu); // 8004E438
  W8(c->r[31]+0x000000DEu,c->r[0]); // 8004E43C
  c->r[0]=R8(c->r[30]+0x000000DFu); // 8004E440
  W8(c->r[31]+0x000000DFu,c->r[0]); // 8004E444
  c->r[0]=R8(c->r[30]+0x000000E0u); // 8004E448
  W8(c->r[31]+0x000000E0u,c->r[0]); // 8004E44C
  c->r[0]=R8(c->r[30]+0x000000E1u); // 8004E450
  W8(c->r[31]+0x000000E1u,c->r[0]); // 8004E454
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E458
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 8004E45C
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E460
  {uint32_t ea=c->r[31]+0x000000E8u; WF32(ea,c->f[0]);} // 8004E464
  c->r[0]=R8(c->r[30]+0x000000ECu); // 8004E468
  W8(c->r[31]+0x000000ECu,c->r[0]); // 8004E46C
  c->r[0]=R8(c->r[30]+0x000000EDu); // 8004E470
  W8(c->r[31]+0x000000EDu,c->r[0]); // 8004E474
  c->r[0]=R8(c->r[30]+0x000000EEu); // 8004E478
  W8(c->r[31]+0x000000EEu,c->r[0]); // 8004E47C
  c->r[0]=R8(c->r[30]+0x000000EFu); // 8004E480
  W8(c->r[31]+0x000000EFu,c->r[0]); // 8004E484
  c->r[0]=R8(c->r[30]+0x000000F0u); // 8004E488
  W8(c->r[31]+0x000000F0u,c->r[0]); // 8004E48C
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E490
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 8004E494
  c->r[0]=R8(c->r[30]+0x000000F8u); // 8004E498
  W8(c->r[31]+0x000000F8u,c->r[0]); // 8004E49C
  c->r[0]=R8(c->r[30]+0x000000F9u); // 8004E4A0
  W8(c->r[31]+0x000000F9u,c->r[0]); // 8004E4A4
  c->r[0]=R8(c->r[30]+0x000000FAu); // 8004E4A8
  W8(c->r[31]+0x000000FAu,c->r[0]); // 8004E4AC
  c->r[0]=R8(c->r[30]+0x000000FBu); // 8004E4B0
  W8(c->r[31]+0x000000FBu,c->r[0]); // 8004E4B4
  c->r[0]=R8(c->r[30]+0x000000FCu); // 8004E4B8
  W8(c->r[31]+0x000000FCu,c->r[0]); // 8004E4BC
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E4C0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 8004E4C4
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E4C8
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8004E4CC
  c->r[0]=R32(c->r[30]+0x00000108u); // 8004E4D0
  W32(c->r[31]+0x00000108u,c->r[0]); // 8004E4D4
  c->r[0]=R8(c->r[30]+0x0000010Cu); // 8004E4D8
  W8(c->r[31]+0x0000010Cu,c->r[0]); // 8004E4DC
  c->r[0]=R32(c->r[30]+0x00000110u); // 8004E4E0
  W32(c->r[31]+0x00000110u,c->r[0]); // 8004E4E4
  c->r[0]=R8(c->r[30]+0x00000114u); // 8004E4E8
  W8(c->r[31]+0x00000114u,c->r[0]); // 8004E4EC
  c->r[0]=R8(c->r[30]+0x00000115u); // 8004E4F0
  W8(c->r[31]+0x00000115u,c->r[0]); // 8004E4F4
  c->r[0]=R8(c->r[30]+0x00000116u); // 8004E4F8
  W8(c->r[31]+0x00000116u,c->r[0]); // 8004E4FC
  c->r[0]=R8(c->r[30]+0x00000117u); // 8004E500
  W8(c->r[31]+0x00000117u,c->r[0]); // 8004E504
  c->r[0]=R8(c->r[30]+0x00000118u); // 8004E508
  W8(c->r[31]+0x00000118u,c->r[0]); // 8004E50C
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 8004E510
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 8004E514
  c->r[0]=R8(c->r[30]+0x00000120u); // 8004E518
  W8(c->r[31]+0x00000120u,c->r[0]); // 8004E51C
  c->r[0]=R8(c->r[30]+0x00000121u); // 8004E520
  W8(c->r[31]+0x00000121u,c->r[0]); // 8004E524
  c->r[0]=R32(c->r[30]+0x00000124u); // 8004E528
  W32(c->r[31]+0x00000124u,c->r[0]); // 8004E52C
  c->r[0]=R32(c->r[30]+0x00000128u); // 8004E530
  W32(c->r[31]+0x00000128u,c->r[0]); // 8004E534
  c->r[0]=R32(c->r[30]+0x0000012Cu); // 8004E538
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 8004E53C
  c->lr=0x8004E544u; f_803A6F10(c); // 8004E540
  c->r[11]=c->r[1]+0x00000020u; // 8004E544
  c->lr=0x8004E54Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004E548
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E54C
  c->lr=c->r[0]; // 8004E550
  c->r[1]=c->r[1]+0x00000020u; // 8004E554
  return; // 8004E558
}

// fn_8004E55C
void f_8004E55C(Ctx* __restrict c) {
  trace_call(0x8004E55Cu);
  c->r[0]=c->r[4]+0x05C00000u; // 8004E55C
  cmpu(c,0,c->r[0],0x00000802u); // 8004E560
  if (!crb(c,2)) { goto L_8004E570; } // 8004E564
  c->r[3]=0u+0x00000001u; // 8004E568
  return; // 8004E56C
L_8004E570:;
  c->r[3]=0u+0xD12F0000u; // 8004E570
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004E574
  c->r[0]=c->r[4]-c->r[0]; // 8004E578
  c->r[0]=cntlz(c->r[0]); // 8004E57C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004E580
  return; // 8004E584
}

// fn_8004E588
void f_8004E588(Ctx* __restrict c) {
  trace_call(0x8004E588u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E588
  c->r[0]=c->lr; // 8004E58C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8004E590
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 8004E594
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 8004E598
  c->r[11]=c->r[1]+0x000000B0u; // 8004E59C
  c->lr=0x8004E5A4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004E5A0
  c->r[6]=R8(c->r[4]+0x000000D1u); // 8004E5A4
  c->r[7]=0u+0x43300000u; // 8004E5A8
  W32(c->r[1]+0x00000008u,c->r[7]); // 8004E5AC
  c->f[31]=c->f[1]; // 8004E5B0
  c->r[0]=R8(c->r[5]+0x000000D1u); // 8004E5B4
  c->r[29]=c->r[3]|c->r[3]; // 8004E5B8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E5BC
  c->r[30]=c->r[4]|c->r[4]; // 8004E5C0
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 8004E5C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004E5C8
  c->r[31]=c->r[5]|c->r[5]; // 8004E5CC
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004E5D0
  W32(c->r[1]+0x00000010u,c->r[7]); // 8004E5D4
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 8004E5D8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8004E5DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E5E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E5E4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E5E8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E5EC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E5F0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E5F4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E5F8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 8004E5FC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004E600
  W8(c->r[3]+0x000000D1u,c->r[0]); // 8004E604
  c->r[6]=R8(c->r[4]+0x000000D2u); // 8004E608
  c->r[0]=R8(c->r[5]+0x000000D2u); // 8004E60C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E610
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E614
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E618
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E61C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E620
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E624
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E628
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E62C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E630
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E634
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[3]);} // 8004E638
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E63C
  W8(c->r[3]+0x000000D2u,c->r[0]); // 8004E640
  c->r[6]=R8(c->r[4]+0x000000D3u); // 8004E644
  c->r[0]=R8(c->r[5]+0x000000D3u); // 8004E648
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E64C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E650
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E654
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E658
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E65C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E660
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E664
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E668
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E66C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E670
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[3]);} // 8004E674
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8004E678
  W8(c->r[3]+0x000000D3u,c->r[0]); // 8004E67C
  c->r[6]=R8(c->r[4]+0x000000D4u); // 8004E680
  c->r[0]=R8(c->r[5]+0x000000D4u); // 8004E684
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E688
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E68C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E690
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E694
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E698
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E69C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E6A0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E6A4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E6A8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E6AC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[3]);} // 8004E6B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004E6B4
  W8(c->r[3]+0x000000D4u,c->r[0]); // 8004E6B8
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004E6BC
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004E6C0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E6C4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E6C8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E6CC
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[3]);} // 8004E6D0
  c->r[6]=R8(c->r[4]+0x000000DEu); // 8004E6D4
  c->r[0]=R8(c->r[5]+0x000000DEu); // 8004E6D8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E6DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E6E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E6E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E6E8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E6EC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E6F0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E6F4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E6F8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E6FC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E700
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8004E704
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8004E708
  W8(c->r[3]+0x000000DEu,c->r[0]); // 8004E70C
  c->r[6]=R8(c->r[4]+0x000000DFu); // 8004E710
  c->r[0]=R8(c->r[5]+0x000000DFu); // 8004E714
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E718
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E71C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E720
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E724
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E728
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E72C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E730
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E734
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E738
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E73C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 8004E740
  c->r[0]=R32(c->r[1]+0x00000044u); // 8004E744
  W8(c->r[3]+0x000000DFu,c->r[0]); // 8004E748
  c->r[6]=R8(c->r[4]+0x000000E0u); // 8004E74C
  c->r[0]=R8(c->r[5]+0x000000E0u); // 8004E750
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E754
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E758
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E75C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E760
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E764
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E768
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E76C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E770
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E774
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E778
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[3]);} // 8004E77C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8004E780
  W8(c->r[3]+0x000000E0u,c->r[0]); // 8004E784
  c->r[6]=R8(c->r[4]+0x000000E1u); // 8004E788
  c->r[0]=R8(c->r[5]+0x000000E1u); // 8004E78C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E790
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E794
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E798
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E79C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E7A0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E7A4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E7A8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E7AC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E7B0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E7B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[3]);} // 8004E7B8
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004E7BC
  W8(c->r[3]+0x000000E1u,c->r[0]); // 8004E7C0
  {uint32_t ea=c->r[4]+0x000000E4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004E7C4
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004E7C8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E7CC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E7D0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E7D4
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[3]);} // 8004E7D8
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004E7DC
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004E7E0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E7E4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E7E8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E7EC
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[3]);} // 8004E7F0
  c->r[6]=R8(c->r[4]+0x000000EDu); // 8004E7F4
  c->r[0]=R8(c->r[5]+0x000000EDu); // 8004E7F8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E7FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E800
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E804
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E808
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E80C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E810
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E814
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E818
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E81C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E820
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[3]);} // 8004E824
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8004E828
  W8(c->r[3]+0x000000EDu,c->r[0]); // 8004E82C
  c->r[6]=R8(c->r[4]+0x000000EEu); // 8004E830
  c->r[0]=R8(c->r[5]+0x000000EEu); // 8004E834
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E838
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E83C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E840
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E844
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E848
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E84C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E850
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E854
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E858
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E85C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[3]);} // 8004E860
  c->r[0]=R32(c->r[1]+0x00000064u); // 8004E864
  W8(c->r[3]+0x000000EEu,c->r[0]); // 8004E868
  c->r[6]=R8(c->r[4]+0x000000EFu); // 8004E86C
  c->r[0]=R8(c->r[5]+0x000000EFu); // 8004E870
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E874
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E878
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E87C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E880
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E884
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E888
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E88C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E890
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E894
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E898
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[3]);} // 8004E89C
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 8004E8A0
  W8(c->r[3]+0x000000EFu,c->r[0]); // 8004E8A4
  c->r[6]=R8(c->r[4]+0x000000F0u); // 8004E8A8
  c->r[0]=R8(c->r[5]+0x000000F0u); // 8004E8AC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E8B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E8B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E8B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E8BC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E8C0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E8C4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E8C8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E8CC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E8D0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E8D4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[3]);} // 8004E8D8
  c->r[0]=R32(c->r[1]+0x00000074u); // 8004E8DC
  W8(c->r[3]+0x000000F0u,c->r[0]); // 8004E8E0
  {uint32_t ea=c->r[4]+0x000000F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004E8E4
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004E8E8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E8EC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E8F0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E8F4
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[3]);} // 8004E8F8
  c->r[6]=R8(c->r[4]+0x000000F9u); // 8004E8FC
  c->r[0]=R8(c->r[5]+0x000000F9u); // 8004E900
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E904
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E908
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E90C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E910
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E914
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E918
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E91C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E920
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E924
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E928
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[3]);} // 8004E92C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8004E930
  W8(c->r[3]+0x000000F9u,c->r[0]); // 8004E934
  c->r[6]=R8(c->r[4]+0x000000FAu); // 8004E938
  c->r[0]=R8(c->r[5]+0x000000FAu); // 8004E93C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E940
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E944
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E948
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E94C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E950
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E954
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E958
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E95C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E960
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E964
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[3]);} // 8004E968
  c->r[0]=R32(c->r[1]+0x00000084u); // 8004E96C
  W8(c->r[3]+0x000000FAu,c->r[0]); // 8004E970
  c->r[6]=R8(c->r[4]+0x000000FBu); // 8004E974
  c->r[0]=R8(c->r[5]+0x000000FBu); // 8004E978
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E980
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E984
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E988
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E98C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E990
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E994
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E998
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E99C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E9A0
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[3]);} // 8004E9A4
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 8004E9A8
  W8(c->r[3]+0x000000FBu,c->r[0]); // 8004E9AC
  c->r[6]=R8(c->r[4]+0x000000FCu); // 8004E9B0
  c->r[0]=R8(c->r[5]+0x000000FCu); // 8004E9B4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004E9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004E9BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004E9C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004E9C4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004E9C8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004E9CC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E9D0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E9D4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E9D8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004E9DC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[3]);} // 8004E9E0
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004E9E4
  W8(c->r[3]+0x000000FCu,c->r[0]); // 8004E9E8
  {uint32_t ea=c->r[4]+0x00000100u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004E9EC
  {uint32_t ea=c->r[5]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004E9F0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004E9F4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004E9F8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004E9FC
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[3]);} // 8004EA00
  {uint32_t ea=c->r[4]+0x00000104u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004EA04
  {uint32_t ea=c->r[5]+0x00000104u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004EA08
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004EA0C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004EA10
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004EA14
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[3]);} // 8004EA18
  c->r[3]=R32(c->r[4]+0x00000108u); // 8004EA1C
  c->r[0]=R32(c->r[5]+0x00000108u); // 8004EA20
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004EA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EA28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004EA2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004EA30
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004EA34
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8004EA38
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 8004EA3C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8004EA40
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8004EA44
  c->lr=0x8004EA4Cu; f_803ADC14(c); // 8004EA48
  W32(c->r[29]+0x00000108u,c->r[3]); // 8004EA4C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EA50
  c->r[3]=R32(c->r[30]+0x00000110u); // 8004EA54
  c->r[0]=R32(c->r[31]+0x00000110u); // 8004EA58
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 8004EA5C
  c->r[3]=c->r[3]^0x80000000u; // 8004EA60
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004EA64
  c->r[0]=c->r[0]^0x80000000u; // 8004EA68
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[2]=RF64(ea);} // 8004EA6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EA70
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8004EA74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8004EA78
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8004EA7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8004EA80
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8004EA84
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004EA88
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004EA8C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8004EA90
  {uint32_t ea=c->r[1]+0x00000098u; WF64(ea,c->f[0]);} // 8004EA94
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 8004EA98
  W32(c->r[29]+0x00000110u,c->r[0]); // 8004EA9C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 8004EAA0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 8004EAA4
  c->r[11]=c->r[1]+0x000000B0u; // 8004EAA8
  c->lr=0x8004EAB0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004EAAC
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8004EAB0
  c->lr=c->r[0]; // 8004EAB4
  c->r[1]=c->r[1]+0x000000C0u; // 8004EAB8
  return; // 8004EABC
}

// fn_8004EAC0
void f_8004EAC0(Ctx* __restrict c) {
  trace_call(0x8004EAC0u);
  c->r[3]=0u+0x00000150u; // 8004EAC0
  return; // 8004EAC4
}

// fn_8004EAC8
void f_8004EAC8(Ctx* __restrict c) {
  trace_call(0x8004EAC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EAC8
  c->r[0]=c->lr; // 8004EACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EAD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004EAD4
  c->r[31]=c->r[3]|c->r[3]; // 8004EAD8
  c->lr=0x8004EAE0u; f_8004DED4(c); // 8004EADC
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004EAE0
  c->r[3]=0u+0x80420000u; // 8004EAE4
  c->r[3]=c->r[3]+0xFFFFFC2Cu; // 8004EAE8
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004EAEC
  c->r[0]=c->r[0]|0x80000000u; // 8004EAF0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004EAF4
  c->r[3]=c->r[31]|c->r[31]; // 8004EAF8
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004EAFC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004EB00
  c->ctr=c->r[12]; // 8004EB04
  if (true) { c->lr=0x8004EB0Cu; dispatch(c,c->ctr); } // 8004EB08
  c->r[3]=c->r[31]|c->r[31]; // 8004EB0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004EB10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004EB14
  c->lr=c->r[0]; // 8004EB18
  c->r[1]=c->r[1]+0x00000010u; // 8004EB1C
  return; // 8004EB20
}

// fn_8004EB24
void f_8004EB24(Ctx* __restrict c) {
  trace_call(0x8004EB24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EB24
  c->r[0]=c->lr; // 8004EB28
  cmps(c,0,(int32_t)c->r[3],0); // 8004EB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EB30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004EB34
  c->r[30]=c->r[3]|c->r[3]; // 8004EB38
  c->r[31]=c->r[4]|c->r[4]; // 8004EB3C
  if (crb(c,2)) { goto L_8004EB5C; } // 8004EB40
  c->r[4]=0u+0x00000000u; // 8004EB44
  c->lr=0x8004EB4Cu; f_8003ABE0(c); // 8004EB48
  cmps(c,0,(int32_t)c->r[31],0); // 8004EB4C
  if (!crb(c,1)) { goto L_8004EB5C; } // 8004EB50
  c->r[3]=c->r[30]|c->r[30]; // 8004EB54
  c->lr=0x8004EB5Cu; f_80244DC0(c); // 8004EB58
L_8004EB5C:;
  c->r[3]=c->r[30]|c->r[30]; // 8004EB5C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004EB60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004EB64
  c->lr=c->r[0]; // 8004EB68
  c->r[1]=c->r[1]+0x00000010u; // 8004EB6C
  return; // 8004EB70
}

// fn_8004EB74
void f_8004EB74(Ctx* __restrict c) {
  trace_call(0x8004EB74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EB74
  c->r[0]=c->lr; // 8004EB78
  c->r[3]=0u+0x00000150u; // 8004EB7C
  c->r[4]=c->r[13]+0xFFFF9317u; // 8004EB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EB84
  c->r[5]=0u+0x00000000u; // 8004EB88
  c->r[6]=0u+0x00001001u; // 8004EB8C
  c->lr=0x8004EB94u; f_80244D20(c); // 8004EB90
  cmps(c,0,(int32_t)c->r[3],0); // 8004EB94
  if (crb(c,2)) { goto L_8004EBA0; } // 8004EB98
  c->lr=0x8004EBA0u; f_8004EAC8(c); // 8004EB9C
L_8004EBA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004EBA0
  c->lr=c->r[0]; // 8004EBA4
  c->r[1]=c->r[1]+0x00000010u; // 8004EBA8
  return; // 8004EBAC
}

// fn_8004EBB0
void f_8004EBB0(Ctx* __restrict c) {
  trace_call(0x8004EBB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EBB0
  c->r[0]=c->lr; // 8004EBB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EBB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004EBBC
  c->r[31]=c->r[3]|c->r[3]; // 8004EBC0
  c->lr=0x8004EBC8u; f_80244520(c); // 8004EBC4
  c->r[7]=c->r[3]|c->r[3]; // 8004EBC8
  c->r[9]=c->r[31]|c->r[31]; // 8004EBCC
  c->r[3]=0u+0x00000150u; // 8004EBD0
  c->r[4]=c->r[13]+0xFFFF931Cu; // 8004EBD4
  c->r[5]=0u+0x00000000u; // 8004EBD8
  c->r[6]=0u+0x00002001u; // 8004EBDC
  c->r[8]=0u+0x00000000u; // 8004EBE0
  c->lr=0x8004EBE8u; f_80242DF0(c); // 8004EBE4
  c->r[4]=c->r[3]|c->r[3]; // 8004EBE8
  c->r[3]=0u+0x00000150u; // 8004EBEC
  c->r[5]=c->r[13]+0xFFFF9321u; // 8004EBF0
  c->r[6]=0u+0x00000000u; // 8004EBF4
  c->r[7]=0u+0x00001001u; // 8004EBF8
  c->lr=0x8004EC00u; f_80244DB0(c); // 8004EBFC
  cmps(c,0,(int32_t)c->r[3],0); // 8004EC00
  if (crb(c,2)) { goto L_8004EC0C; } // 8004EC04
  c->lr=0x8004EC0Cu; f_8004EAC8(c); // 8004EC08
L_8004EC0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004EC0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004EC10
  c->lr=c->r[0]; // 8004EC14
  c->r[1]=c->r[1]+0x00000010u; // 8004EC18
  return; // 8004EC1C
}

// fn_8004EC20
void f_8004EC20(Ctx* __restrict c) {
  trace_call(0x8004EC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EC20
  c->r[0]=c->lr; // 8004EC24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EC28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004EC2C
  c->r[31]=c->r[3]|c->r[3]; // 8004EC30
  c->lr=0x8004EC38u; f_8003A6F0(c); // 8004EC34
  c->r[8]=0u+0x80420000u; // 8004EC38
  c->r[7]=0u+0x80410000u; // 8004EC3C
  c->r[5]=0u+0x91B20000u; // 8004EC40
  c->r[4]=0u+0xCE3A0000u; // 8004EC44
  c->r[3]=0u+0xDA380000u; // 8004EC48
  c->r[8]=c->r[8]+0xFFFFFBF0u; // 8004EC4C
  c->r[0]=c->r[3]+0xFFFFDB14u; // 8004EC50
  c->r[7]=c->r[7]+0xFFFFBE52u; // 8004EC54
  c->r[5]=c->r[5]+0x00004EE3u; // 8004EC58
  c->r[4]=c->r[4]+0x00005146u; // 8004EC5C
  c->r[6]=0u+0x00000000u; // 8004EC60
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004EC64
  c->r[3]=c->r[31]|c->r[31]; // 8004EC68
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004EC6C
  W32(c->r[31]+0x00000008u,c->r[6]); // 8004EC70
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004EC74
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004EC78
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004EC7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004EC80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004EC84
  c->lr=c->r[0]; // 8004EC88
  c->r[1]=c->r[1]+0x00000010u; // 8004EC8C
  return; // 8004EC90
}

// fn_8004EC94
void f_8004EC94(Ctx* __restrict c) {
  trace_call(0x8004EC94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EC94
  c->r[0]=c->lr; // 8004EC98
  cmps(c,0,(int32_t)c->r[4],0); // 8004EC9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004ECA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004ECA4
  c->r[30]=c->r[3]|c->r[3]; // 8004ECA8
  c->r[31]=c->r[4]|c->r[4]; // 8004ECAC
  if (crb(c,2)) { goto L_8004ED04; } // 8004ECB0
  c->r[3]=c->r[31]|c->r[31]; // 8004ECB4
  c->lr=0x8004ECBCu; f_80244520(c); // 8004ECB8
  c->r[7]=c->r[3]|c->r[3]; // 8004ECBC
  c->r[9]=c->r[31]|c->r[31]; // 8004ECC0
  c->r[3]=0u+0x00000130u; // 8004ECC4
  c->r[4]=c->r[13]+0xFFFF9326u; // 8004ECC8
  c->r[5]=0u+0x00000000u; // 8004ECCC
  c->r[6]=0u+0x00002001u; // 8004ECD0
  c->r[8]=0u+0x00000000u; // 8004ECD4
  c->lr=0x8004ECDCu; f_80242DF0(c); // 8004ECD8
  c->r[4]=c->r[3]|c->r[3]; // 8004ECDC
  c->r[3]=0u+0x00000130u; // 8004ECE0
  c->r[5]=c->r[13]+0xFFFF932Bu; // 8004ECE4
  c->r[6]=0u+0x00000000u; // 8004ECE8
  c->r[7]=0u+0x00001001u; // 8004ECEC
  c->lr=0x8004ECF4u; f_80244DB0(c); // 8004ECF0
  cmps(c,0,(int32_t)c->r[3],0); // 8004ECF4
  if (crb(c,2)) { goto L_8004ED24; } // 8004ECF8
  c->lr=0x8004ED00u; f_8004EC20(c); // 8004ECFC
  goto L_8004ED24; // 8004ED00
L_8004ED04:;
  c->r[3]=0u+0x00000130u; // 8004ED04
  c->r[4]=c->r[13]+0xFFFF9330u; // 8004ED08
  c->r[5]=0u+0x00000000u; // 8004ED0C
  c->r[6]=0u+0x00001001u; // 8004ED10
  c->lr=0x8004ED18u; f_80244D20(c); // 8004ED14
  cmps(c,0,(int32_t)c->r[3],0); // 8004ED18
  if (crb(c,2)) { goto L_8004ED24; } // 8004ED1C
  c->lr=0x8004ED24u; f_8004EC20(c); // 8004ED20
L_8004ED24:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004ED24
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004ED28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004ED2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ED30
  c->lr=c->r[0]; // 8004ED34
  c->r[1]=c->r[1]+0x00000010u; // 8004ED38
  return; // 8004ED3C
}

// fn_8004ED40
void f_8004ED40(Ctx* __restrict c) {
  trace_call(0x8004ED40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ED40
  c->r[0]=c->lr; // 8004ED44
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004ED48
  c->r[11]=c->r[1]+0x00000020u; // 8004ED4C
  c->lr=0x8004ED54u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004ED50
  c->r[29]=c->r[3]|c->r[3]; // 8004ED54
  c->r[30]=c->r[4]|c->r[4]; // 8004ED58
  c->lr=0x8004ED60u; f_8003A810(c); // 8004ED5C
  c->r[31]=c->r[3]|c->r[3]; // 8004ED60
  c->r[3]=c->r[30]|c->r[30]; // 8004ED64
  c->lr=0x8004ED6Cu; f_8030BD1C(c); // 8004ED68
  W8(c->r[29]+0x000000A8u,c->r[3]); // 8004ED6C
  c->r[3]=c->r[30]|c->r[30]; // 8004ED70
  c->lr=0x8004ED78u; f_8030BD1C(c); // 8004ED74
  W32(c->r[29]+0x000000ACu,c->r[3]); // 8004ED78
  c->r[3]=c->r[30]|c->r[30]; // 8004ED7C
  c->lr=0x8004ED84u; f_8030C0A0(c); // 8004ED80
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 8004ED84
  c->r[3]=c->r[30]|c->r[30]; // 8004ED88
  c->lr=0x8004ED90u; f_8030C0A0(c); // 8004ED8C
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 8004ED90
  c->r[3]=c->r[30]|c->r[30]; // 8004ED94
  c->lr=0x8004ED9Cu; f_8030C0A0(c); // 8004ED98
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004ED9C
  c->r[3]=c->r[30]|c->r[30]; // 8004EDA0
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 8004EDA4
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[0]);} // 8004EDA8
  c->lr=0x8004EDB0u; f_8030C0A0(c); // 8004EDAC
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 8004EDB0
  c->r[3]=c->r[30]|c->r[30]; // 8004EDB4
  c->lr=0x8004EDBCu; f_8030C0A0(c); // 8004EDB8
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 8004EDBC
  c->r[3]=c->r[30]|c->r[30]; // 8004EDC0
  c->lr=0x8004EDC8u; f_8030C0A0(c); // 8004EDC4
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 8004EDC8
  c->r[3]=c->r[30]|c->r[30]; // 8004EDCC
  c->lr=0x8004EDD4u; f_8030BD1C(c); // 8004EDD0
  W8(c->r[29]+0x000000CCu,c->r[3]); // 8004EDD4
  c->r[3]=c->r[30]|c->r[30]; // 8004EDD8
  c->lr=0x8004EDE0u; f_8030C0A0(c); // 8004EDDC
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 8004EDE0
  c->r[3]=c->r[30]|c->r[30]; // 8004EDE4
  c->lr=0x8004EDECu; f_8030BD1C(c); // 8004EDE8
  W32(c->r[29]+0x000000D4u,c->r[3]); // 8004EDEC
  c->r[3]=c->r[30]|c->r[30]; // 8004EDF0
  c->lr=0x8004EDF8u; f_8030BD1C(c); // 8004EDF4
  W32(c->r[29]+0x000000D8u,c->r[3]); // 8004EDF8
  c->r[3]=c->r[30]|c->r[30]; // 8004EDFC
  c->lr=0x8004EE04u; f_8030BD1C(c); // 8004EE00
  W32(c->r[29]+0x000000DCu,c->r[3]); // 8004EE04
  c->r[3]=c->r[30]|c->r[30]; // 8004EE08
  c->lr=0x8004EE10u; f_8030BD1C(c); // 8004EE0C
  W32(c->r[29]+0x000000E0u,c->r[3]); // 8004EE10
  c->r[3]=c->r[30]|c->r[30]; // 8004EE14
  c->lr=0x8004EE1Cu; f_8030BD1C(c); // 8004EE18
  W32(c->r[29]+0x000000E4u,c->r[3]); // 8004EE1C
  c->r[3]=c->r[30]|c->r[30]; // 8004EE20
  c->lr=0x8004EE28u; f_8030BD1C(c); // 8004EE24
  W32(c->r[29]+0x000000E8u,c->r[3]); // 8004EE28
  c->r[3]=c->r[30]|c->r[30]; // 8004EE2C
  c->lr=0x8004EE34u; f_8030BD1C(c); // 8004EE30
  W32(c->r[29]+0x000000ECu,c->r[3]); // 8004EE34
  c->r[3]=c->r[30]|c->r[30]; // 8004EE38
  c->lr=0x8004EE40u; f_8030C0A0(c); // 8004EE3C
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[1]);} // 8004EE40
  c->r[3]=c->r[30]|c->r[30]; // 8004EE44
  c->lr=0x8004EE4Cu; f_8030C0A0(c); // 8004EE48
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[1]);} // 8004EE4C
  c->r[3]=c->r[30]|c->r[30]; // 8004EE50
  c->lr=0x8004EE58u; f_8030C0A0(c); // 8004EE54
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 8004EE58
  c->r[3]=c->r[30]|c->r[30]; // 8004EE5C
  c->lr=0x8004EE64u; f_8030C0A0(c); // 8004EE60
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 8004EE64
  c->r[3]=c->r[30]|c->r[30]; // 8004EE68
  c->lr=0x8004EE70u; f_8030BD1C(c); // 8004EE6C
  W8(c->r[29]+0x00000100u,c->r[3]); // 8004EE70
  c->r[3]=c->r[30]|c->r[30]; // 8004EE74
  c->lr=0x8004EE7Cu; f_8030BD1C(c); // 8004EE78
  W8(c->r[29]+0x00000101u,c->r[3]); // 8004EE7C
  c->r[3]=c->r[30]|c->r[30]; // 8004EE80
  c->lr=0x8004EE88u; f_8030BD1C(c); // 8004EE84
  W8(c->r[29]+0x00000102u,c->r[3]); // 8004EE88
  c->r[3]=c->r[30]|c->r[30]; // 8004EE8C
  c->lr=0x8004EE94u; f_8030C0A0(c); // 8004EE90
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 8004EE94
  c->r[3]=c->r[30]|c->r[30]; // 8004EE98
  c->lr=0x8004EEA0u; f_8030C0A0(c); // 8004EE9C
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 8004EEA0
  c->r[3]=c->r[30]|c->r[30]; // 8004EEA4
  c->lr=0x8004EEACu; f_8030C0A0(c); // 8004EEA8
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 8004EEAC
  c->r[3]=c->r[30]|c->r[30]; // 8004EEB0
  c->lr=0x8004EEB8u; f_8030C0A0(c); // 8004EEB4
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[1]);} // 8004EEB8
  c->r[3]=c->r[30]|c->r[30]; // 8004EEBC
  c->lr=0x8004EEC4u; f_8030C0A0(c); // 8004EEC0
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[1]);} // 8004EEC4
  c->r[3]=c->r[30]|c->r[30]; // 8004EEC8
  c->lr=0x8004EED0u; f_8030C0A0(c); // 8004EECC
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[1]);} // 8004EED0
  c->r[3]=c->r[30]|c->r[30]; // 8004EED4
  c->lr=0x8004EEDCu; f_8030C0A0(c); // 8004EED8
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[1]);} // 8004EEDC
  c->r[3]=c->r[30]|c->r[30]; // 8004EEE0
  c->lr=0x8004EEE8u; f_8030BD1C(c); // 8004EEE4
  W8(c->r[29]+0x00000120u,c->r[3]); // 8004EEE8
  c->r[3]=c->r[30]|c->r[30]; // 8004EEEC
  c->lr=0x8004EEF4u; f_8030BD1C(c); // 8004EEF0
  W8(c->r[29]+0x00000124u,c->r[3]); // 8004EEF4
  c->r[3]=c->r[30]|c->r[30]; // 8004EEF8
  c->lr=0x8004EF00u; f_8030BD1C(c); // 8004EEFC
  W8(c->r[29]+0x00000125u,c->r[3]); // 8004EF00
  c->r[3]=c->r[30]|c->r[30]; // 8004EF04
  c->lr=0x8004EF0Cu; f_8030BD1C(c); // 8004EF08
  W8(c->r[29]+0x00000126u,c->r[3]); // 8004EF0C
  c->r[3]=c->r[30]|c->r[30]; // 8004EF10
  c->lr=0x8004EF18u; f_8030BD1C(c); // 8004EF14
  W32(c->r[29]+0x00000128u,c->r[3]); // 8004EF18
  c->r[3]=c->r[30]|c->r[30]; // 8004EF1C
  c->lr=0x8004EF24u; f_8030BD1C(c); // 8004EF20
  W32(c->r[29]+0x0000012Cu,c->r[3]); // 8004EF24
  c->r[11]=c->r[1]+0x00000020u; // 8004EF28
  c->r[3]=c->r[31]|c->r[31]; // 8004EF2C
  c->lr=0x8004EF34u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004EF30
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004EF34
  c->lr=c->r[0]; // 8004EF38
  c->r[1]=c->r[1]+0x00000020u; // 8004EF3C
  return; // 8004EF40
}

// fn_8004EF44
void f_8004EF44(Ctx* __restrict c) {
  trace_call(0x8004EF44u);
  f_80038EC8(c); return; // 8004EF44
}

// fn_8004EF48
void f_8004EF48(Ctx* __restrict c) {
  trace_call(0x8004EF48u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004EF48
  if (!crb(c,2)) return; // 8004EF4C
  f_8003A92C(c); return; // 8004EF50
  return; // 8004EF54
}

// fn_8004EF58
void f_8004EF58(Ctx* __restrict c) {
  trace_call(0x8004EF58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EF58
  c->r[0]=c->lr; // 8004EF5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EF60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004EF64
  c->r[31]=c->r[3]|c->r[3]; // 8004EF68
  c->lr=0x8004EF70u; f_8003AA04(c); // 8004EF6C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8004EF70
  c->r[8]=0u+0x00000000u; // 8004EF74
  c->r[7]=0u+0x00000001u; // 8004EF78
  {uint32_t ea=c->r[2]+0xFFFF8724u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004EF7C
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[11]=c->ps1[11]=RF32(ea);} // 8004EF80
  c->r[6]=0u+0x000000C8u; // 8004EF84
  {uint32_t ea=c->r[2]+0xFFFF86D8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004EF88
  c->r[5]=0u+0x00000064u; // 8004EF8C
  {uint32_t ea=c->r[2]+0xFFFF86D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004EF90
  c->r[4]=0u+0x00000014u; // 8004EF94
  {uint32_t ea=c->r[2]+0xFFFF8728u; c->f[10]=c->ps1[10]=RF32(ea);} // 8004EF98
  c->r[3]=0u+0x00000010u; // 8004EF9C
  {uint32_t ea=c->r[2]+0xFFFF872Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8004EFA0
  c->r[0]=0u+0x0000003Cu; // 8004EFA4
  {uint32_t ea=c->r[2]+0xFFFF8714u; c->f[7]=c->ps1[7]=RF32(ea);} // 8004EFA8
  {uint32_t ea=c->r[2]+0xFFFF8730u; c->f[6]=c->ps1[6]=RF32(ea);} // 8004EFAC
  {uint32_t ea=c->r[2]+0xFFFF8734u; c->f[5]=c->ps1[5]=RF32(ea);} // 8004EFB0
  {uint32_t ea=c->r[2]+0xFFFF86C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004EFB4
  {uint32_t ea=c->r[2]+0xFFFF8738u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004EFB8
  W8(c->r[31]+0x000000A8u,c->r[8]); // 8004EFBC
  W32(c->r[31]+0x000000ACu,c->r[7]); // 8004EFC0
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[11]);} // 8004EFC4
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[10]);} // 8004EFC8
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[11]);} // 8004EFCC
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[9]);} // 8004EFD0
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[9]);} // 8004EFD4
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[8]);} // 8004EFD8
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[7]);} // 8004EFDC
  W8(c->r[31]+0x000000CCu,c->r[8]); // 8004EFE0
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[6]);} // 8004EFE4
  W32(c->r[31]+0x000000D4u,c->r[6]); // 8004EFE8
  W32(c->r[31]+0x000000D8u,c->r[5]); // 8004EFEC
  W32(c->r[31]+0x000000DCu,c->r[5]); // 8004EFF0
  W32(c->r[31]+0x000000E0u,c->r[6]); // 8004EFF4
  W32(c->r[31]+0x000000E4u,c->r[4]); // 8004EFF8
  W32(c->r[31]+0x000000E8u,c->r[3]); // 8004EFFC
  W32(c->r[31]+0x000000ECu,c->r[8]); // 8004F000
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[5]);} // 8004F004
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[9]);} // 8004F008
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[4]);} // 8004F00C
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[4]);} // 8004F010
  W8(c->r[31]+0x00000100u,c->r[8]); // 8004F014
  W8(c->r[31]+0x00000101u,c->r[8]); // 8004F018
  W8(c->r[31]+0x00000102u,c->r[8]); // 8004F01C
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[3]);} // 8004F020
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[2]);} // 8004F024
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[2]);} // 8004F028
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[2]);} // 8004F02C
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[3]);} // 8004F030
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[1]);} // 8004F034
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[0]);} // 8004F038
  W8(c->r[31]+0x00000120u,c->r[8]); // 8004F03C
  W8(c->r[31]+0x00000124u,c->r[7]); // 8004F040
  W8(c->r[31]+0x00000125u,c->r[7]); // 8004F044
  W8(c->r[31]+0x00000126u,c->r[7]); // 8004F048
  W32(c->r[31]+0x00000128u,c->r[4]); // 8004F04C
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 8004F050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F054
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F058
  c->lr=c->r[0]; // 8004F05C
  c->r[1]=c->r[1]+0x00000010u; // 8004F060
  return; // 8004F064
}

// fn_8004F068
void f_8004F068(Ctx* __restrict c) {
  trace_call(0x8004F068u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F068
  c->r[0]=c->lr; // 8004F06C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004F070
  c->r[11]=c->r[1]+0x00000020u; // 8004F074
  c->lr=0x8004F07Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004F078
  c->r[29]=c->r[3]|c->r[3]; // 8004F07C
  c->r[30]=c->r[4]|c->r[4]; // 8004F080
  c->r[31]=c->r[5]|c->r[5]; // 8004F084
  c->r[6]=0u+0x00000000u; // 8004F088
  c->lr=0x8004F090u; f_8003AA90(c); // 8004F08C
  cmps(c,0,(int32_t)c->r[31],0); // 8004F090
  if (crb(c,2)) { goto L_8004F09C; } // 8004F094
  goto L_8004F0A0; // 8004F098
L_8004F09C:;
  c->r[31]=c->r[29]|c->r[29]; // 8004F09C
L_8004F0A0:;
  c->r[0]=R8(c->r[30]+0x000000A8u); // 8004F0A0
  c->r[11]=c->r[1]+0x00000020u; // 8004F0A4
  W8(c->r[31]+0x000000A8u,c->r[0]); // 8004F0A8
  c->r[0]=R32(c->r[30]+0x000000ACu); // 8004F0AC
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004F0B0
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0B4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8004F0B8
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0BC
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8004F0C0
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0C4
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 8004F0C8
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0CC
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 8004F0D0
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0D4
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8004F0D8
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0DC
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8004F0E0
  c->r[0]=R8(c->r[30]+0x000000CCu); // 8004F0E4
  W8(c->r[31]+0x000000CCu,c->r[0]); // 8004F0E8
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F0EC
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[0]);} // 8004F0F0
  c->r[0]=R32(c->r[30]+0x000000D4u); // 8004F0F4
  W32(c->r[31]+0x000000D4u,c->r[0]); // 8004F0F8
  c->r[0]=R32(c->r[30]+0x000000D8u); // 8004F0FC
  W32(c->r[31]+0x000000D8u,c->r[0]); // 8004F100
  c->r[0]=R32(c->r[30]+0x000000DCu); // 8004F104
  W32(c->r[31]+0x000000DCu,c->r[0]); // 8004F108
  c->r[0]=R32(c->r[30]+0x000000E0u); // 8004F10C
  W32(c->r[31]+0x000000E0u,c->r[0]); // 8004F110
  c->r[0]=R32(c->r[30]+0x000000E4u); // 8004F114
  W32(c->r[31]+0x000000E4u,c->r[0]); // 8004F118
  c->r[0]=R32(c->r[30]+0x000000E8u); // 8004F11C
  W32(c->r[31]+0x000000E8u,c->r[0]); // 8004F120
  c->r[0]=R32(c->r[30]+0x000000ECu); // 8004F124
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8004F128
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F12C
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 8004F130
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F134
  {uint32_t ea=c->r[31]+0x000000F4u; WF32(ea,c->f[0]);} // 8004F138
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F13C
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 8004F140
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F144
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 8004F148
  c->r[0]=R8(c->r[30]+0x00000100u); // 8004F14C
  W8(c->r[31]+0x00000100u,c->r[0]); // 8004F150
  c->r[0]=R8(c->r[30]+0x00000101u); // 8004F154
  W8(c->r[31]+0x00000101u,c->r[0]); // 8004F158
  c->r[0]=R8(c->r[30]+0x00000102u); // 8004F15C
  W8(c->r[31]+0x00000102u,c->r[0]); // 8004F160
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F164
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 8004F168
  {uint32_t ea=c->r[30]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F16C
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[0]);} // 8004F170
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F174
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 8004F178
  {uint32_t ea=c->r[30]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F17C
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[0]);} // 8004F180
  {uint32_t ea=c->r[30]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F184
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[0]);} // 8004F188
  {uint32_t ea=c->r[30]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F18C
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 8004F190
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F194
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[0]);} // 8004F198
  c->r[0]=R8(c->r[30]+0x00000120u); // 8004F19C
  W8(c->r[31]+0x00000120u,c->r[0]); // 8004F1A0
  c->r[0]=R8(c->r[30]+0x00000124u); // 8004F1A4
  W8(c->r[31]+0x00000124u,c->r[0]); // 8004F1A8
  c->r[0]=R8(c->r[30]+0x00000125u); // 8004F1AC
  W8(c->r[31]+0x00000125u,c->r[0]); // 8004F1B0
  c->r[0]=R8(c->r[30]+0x00000126u); // 8004F1B4
  W8(c->r[31]+0x00000126u,c->r[0]); // 8004F1B8
  c->r[0]=R32(c->r[30]+0x00000128u); // 8004F1BC
  W32(c->r[31]+0x00000128u,c->r[0]); // 8004F1C0
  c->r[0]=R32(c->r[30]+0x0000012Cu); // 8004F1C4
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 8004F1C8
  c->lr=0x8004F1D0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004F1CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F1D0
  c->lr=c->r[0]; // 8004F1D4
  c->r[1]=c->r[1]+0x00000020u; // 8004F1D8
  return; // 8004F1DC
}

// fn_8004F1E0
void f_8004F1E0(Ctx* __restrict c) {
  trace_call(0x8004F1E0u);
  c->r[0]=c->r[4]+0x05C00000u; // 8004F1E0
  cmpu(c,0,c->r[0],0x00000802u); // 8004F1E4
  if (!crb(c,2)) { goto L_8004F1F4; } // 8004F1E8
  c->r[3]=0u+0x00000001u; // 8004F1EC
  return; // 8004F1F0
L_8004F1F4:;
  c->r[3]=0u+0xD12F0000u; // 8004F1F4
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004F1F8
  c->r[0]=c->r[4]-c->r[0]; // 8004F1FC
  c->r[0]=cntlz(c->r[0]); // 8004F200
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004F204
  return; // 8004F208
}

// fn_8004F20C
void f_8004F20C(Ctx* __restrict c) {
  trace_call(0x8004F20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F20C
  c->r[0]=c->lr; // 8004F210
  W32(c->r[1]+0x00000084u,c->r[0]); // 8004F214
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8004F218
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8004F21C
  c->r[11]=c->r[1]+0x00000070u; // 8004F220
  c->lr=0x8004F228u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004F224
  c->f[31]=c->f[1]; // 8004F228
  c->r[0]=0u+0x43300000u; // 8004F22C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F230
  c->r[29]=c->r[3]|c->r[3]; // 8004F234
  c->r[30]=c->r[4]|c->r[4]; // 8004F238
  c->r[31]=c->r[5]|c->r[5]; // 8004F23C
  c->f[2]=c->f[31]; // 8004F240
  W32(c->r[1]+0x00000008u,c->r[0]); // 8004F244
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8004F248
  c->r[4]=c->r[4]+0x000000B0u; // 8004F24C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8004F250
  c->r[5]=c->r[5]+0x000000B0u; // 8004F254
  c->r[3]=c->r[3]+0x000000B0u; // 8004F258
  c->lr=0x8004F260u; f_8025E410(c); // 8004F25C
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F260
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F264
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8004F268
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F26C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[0]); // 8004F270
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[0]=RF64(ea);} // 8004F274
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F278
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F27C
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[2]);} // 8004F280
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F284
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F288
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F28C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F290
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F294
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[2]);} // 8004F298
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F29C
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F2A0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F2A4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F2A8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F2AC
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[2]);} // 8004F2B0
  {uint32_t ea=c->r[30]+0x000000D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F2B4
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F2B8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F2BC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F2C0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F2C4
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[2]);} // 8004F2C8
  c->r[3]=R32(c->r[30]+0x000000D4u); // 8004F2CC
  c->r[0]=R32(c->r[31]+0x000000D4u); // 8004F2D0
  c->r[3]=c->r[3]^0x80000000u; // 8004F2D4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F2D8
  c->r[0]=c->r[0]^0x80000000u; // 8004F2DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F2E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F2E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F2E8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F2EC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004F2F0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F2F4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F2F8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F2FC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004F300
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 8004F304
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004F308
  W32(c->r[29]+0x000000D4u,c->r[0]); // 8004F30C
  c->r[3]=R32(c->r[30]+0x000000D8u); // 8004F310
  c->r[0]=R32(c->r[31]+0x000000D8u); // 8004F314
  c->r[3]=c->r[3]^0x80000000u; // 8004F318
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F31C
  c->r[0]=c->r[0]^0x80000000u; // 8004F320
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F324
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F328
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F32C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F330
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004F334
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F338
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F33C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F340
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004F344
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 8004F348
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F34C
  W32(c->r[29]+0x000000D8u,c->r[0]); // 8004F350
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8004F354
  c->r[0]=R32(c->r[31]+0x000000DCu); // 8004F358
  c->r[3]=c->r[3]^0x80000000u; // 8004F35C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F360
  c->r[0]=c->r[0]^0x80000000u; // 8004F364
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F368
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F36C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F370
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F374
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004F378
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F37C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F380
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F384
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004F388
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 8004F38C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8004F390
  W32(c->r[29]+0x000000DCu,c->r[0]); // 8004F394
  c->r[3]=R32(c->r[30]+0x000000E0u); // 8004F398
  c->r[0]=R32(c->r[31]+0x000000E0u); // 8004F39C
  c->r[3]=c->r[3]^0x80000000u; // 8004F3A0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F3A4
  c->r[0]=c->r[0]^0x80000000u; // 8004F3A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F3AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F3B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F3B4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F3B8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004F3BC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F3C0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F3C4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F3C8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004F3CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8004F3D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004F3D4
  W32(c->r[29]+0x000000E0u,c->r[0]); // 8004F3D8
  c->r[3]=R32(c->r[30]+0x000000E4u); // 8004F3DC
  c->r[0]=R32(c->r[31]+0x000000E4u); // 8004F3E0
  c->r[3]=c->r[3]^0x80000000u; // 8004F3E4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F3E8
  c->r[0]=c->r[0]^0x80000000u; // 8004F3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F3F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F3F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F3F8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F3FC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004F400
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F404
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F408
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F40C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004F410
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 8004F414
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8004F418
  W32(c->r[29]+0x000000E4u,c->r[0]); // 8004F41C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8004F420
  c->r[0]=R32(c->r[31]+0x000000E8u); // 8004F424
  c->r[3]=c->r[3]^0x80000000u; // 8004F428
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F42C
  c->r[0]=c->r[0]^0x80000000u; // 8004F430
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F434
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F438
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F43C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F440
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004F444
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F448
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F44C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F450
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004F454
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 8004F458
  c->r[0]=R32(c->r[1]+0x00000044u); // 8004F45C
  W32(c->r[29]+0x000000E8u,c->r[0]); // 8004F460
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F464
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F468
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F46C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F470
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F474
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[2]);} // 8004F478
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F47C
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F480
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F484
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F488
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F48C
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[2]);} // 8004F490
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F494
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F498
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F49C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F4A0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F4A4
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[2]);} // 8004F4A8
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F4AC
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F4B0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F4B4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F4B8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F4BC
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[2]);} // 8004F4C0
  {uint32_t ea=c->r[30]+0x00000104u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F4C4
  {uint32_t ea=c->r[31]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F4C8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F4CC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F4D0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F4D4
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[2]);} // 8004F4D8
  {uint32_t ea=c->r[30]+0x00000108u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F4DC
  {uint32_t ea=c->r[31]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F4E0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F4E4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F4E8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F4EC
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[2]);} // 8004F4F0
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F4F4
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F4F8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F4FC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F500
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F504
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[2]);} // 8004F508
  {uint32_t ea=c->r[30]+0x00000110u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F50C
  {uint32_t ea=c->r[31]+0x00000110u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F510
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F514
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F518
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F51C
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[2]);} // 8004F520
  {uint32_t ea=c->r[30]+0x00000114u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F524
  {uint32_t ea=c->r[31]+0x00000114u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F528
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F52C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F530
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F534
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[2]);} // 8004F538
  {uint32_t ea=c->r[30]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F53C
  {uint32_t ea=c->r[31]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F540
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F544
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F548
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F54C
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[2]);} // 8004F550
  {uint32_t ea=c->r[30]+0x0000011Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004F554
  {uint32_t ea=c->r[31]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F558
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F55C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F560
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F564
  {uint32_t ea=c->r[29]+0x0000011Cu; WF32(ea,c->f[2]);} // 8004F568
  c->r[3]=R32(c->r[30]+0x00000128u); // 8004F56C
  c->r[0]=R32(c->r[31]+0x00000128u); // 8004F570
  c->r[3]=c->r[3]^0x80000000u; // 8004F574
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F578
  c->r[0]=c->r[0]^0x80000000u; // 8004F57C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F580
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F584
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F588
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F58C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8004F590
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004F594
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 8004F598
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8004F59C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8004F5A0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 8004F5A4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8004F5A8
  W32(c->r[29]+0x00000128u,c->r[0]); // 8004F5AC
  c->r[3]=R32(c->r[30]+0x0000012Cu); // 8004F5B0
  c->r[0]=R32(c->r[31]+0x0000012Cu); // 8004F5B4
  c->r[3]=c->r[3]^0x80000000u; // 8004F5B8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8004F5BC
  c->r[0]=c->r[0]^0x80000000u; // 8004F5C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F5C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004F5C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8004F5CC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004F5D0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8004F5D4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8004F5D8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8004F5DC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004F5E0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8004F5E4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 8004F5E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004F5EC
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 8004F5F0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8004F5F4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8004F5F8
  c->r[11]=c->r[1]+0x00000070u; // 8004F5FC
  c->lr=0x8004F604u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004F600
  c->r[0]=R32(c->r[1]+0x00000084u); // 8004F604
  c->lr=c->r[0]; // 8004F608
  c->r[1]=c->r[1]+0x00000080u; // 8004F60C
  return; // 8004F610
}

// fn_8004F614
void f_8004F614(Ctx* __restrict c) {
  trace_call(0x8004F614u);
  c->r[3]=0u+0x00000130u; // 8004F614
  return; // 8004F618
}

// fn_8004F61C
void f_8004F61C(Ctx* __restrict c) {
  trace_call(0x8004F61Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F61C
  c->r[0]=c->lr; // 8004F620
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F628
  c->r[31]=c->r[3]|c->r[3]; // 8004F62C
  c->lr=0x8004F634u; f_8004EC20(c); // 8004F630
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004F634
  c->r[3]=0u+0x80420000u; // 8004F638
  c->r[3]=c->r[3]+0xFFFFFBB0u; // 8004F63C
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004F640
  c->r[0]=c->r[0]|0x80000000u; // 8004F644
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004F648
  c->r[3]=c->r[31]|c->r[31]; // 8004F64C
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004F650
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004F654
  c->ctr=c->r[12]; // 8004F658
  if (true) { c->lr=0x8004F660u; dispatch(c,c->ctr); } // 8004F65C
  c->r[3]=c->r[31]|c->r[31]; // 8004F660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F664
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F668
  c->lr=c->r[0]; // 8004F66C
  c->r[1]=c->r[1]+0x00000010u; // 8004F670
  return; // 8004F674
}

// fn_8004F678
void f_8004F678(Ctx* __restrict c) {
  trace_call(0x8004F678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F678
  c->r[0]=c->lr; // 8004F67C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F680
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F684
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004F688
  c->r[30]=c->r[3]|c->r[3]; // 8004F68C
  c->r[31]=c->r[4]|c->r[4]; // 8004F690
  if (crb(c,2)) { goto L_8004F6B0; } // 8004F694
  c->r[4]=0u+0x00000000u; // 8004F698
  c->lr=0x8004F6A0u; f_8003ABE0(c); // 8004F69C
  cmps(c,0,(int32_t)c->r[31],0); // 8004F6A0
  if (!crb(c,1)) { goto L_8004F6B0; } // 8004F6A4
  c->r[3]=c->r[30]|c->r[30]; // 8004F6A8
  c->lr=0x8004F6B0u; f_80244DC0(c); // 8004F6AC
L_8004F6B0:;
  c->r[3]=c->r[30]|c->r[30]; // 8004F6B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004F6B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F6B8
  c->lr=c->r[0]; // 8004F6BC
  c->r[1]=c->r[1]+0x00000010u; // 8004F6C0
  return; // 8004F6C4
}

// fn_8004F6C8
void f_8004F6C8(Ctx* __restrict c) {
  trace_call(0x8004F6C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F6C8
  c->r[0]=c->lr; // 8004F6CC
  c->r[3]=0u+0x00000130u; // 8004F6D0
  c->r[4]=c->r[13]+0xFFFF9335u; // 8004F6D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F6D8
  c->r[5]=0u+0x00000000u; // 8004F6DC
  c->r[6]=0u+0x00001001u; // 8004F6E0
  c->lr=0x8004F6E8u; f_80244D20(c); // 8004F6E4
  cmps(c,0,(int32_t)c->r[3],0); // 8004F6E8
  if (crb(c,2)) { goto L_8004F6F4; } // 8004F6EC
  c->lr=0x8004F6F4u; f_8004F61C(c); // 8004F6F0
L_8004F6F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F6F4
  c->lr=c->r[0]; // 8004F6F8
  c->r[1]=c->r[1]+0x00000010u; // 8004F6FC
  return; // 8004F700
}

// fn_8004F704
void f_8004F704(Ctx* __restrict c) {
  trace_call(0x8004F704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F704
  c->r[0]=c->lr; // 8004F708
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F70C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F710
  c->r[31]=c->r[3]|c->r[3]; // 8004F714
  c->lr=0x8004F71Cu; f_80244520(c); // 8004F718
  c->r[7]=c->r[3]|c->r[3]; // 8004F71C
  c->r[9]=c->r[31]|c->r[31]; // 8004F720
  c->r[3]=0u+0x00000130u; // 8004F724
  c->r[4]=c->r[13]+0xFFFF933Au; // 8004F728
  c->r[5]=0u+0x00000000u; // 8004F72C
  c->r[6]=0u+0x00002001u; // 8004F730
  c->r[8]=0u+0x00000000u; // 8004F734
  c->lr=0x8004F73Cu; f_80242DF0(c); // 8004F738
  c->r[4]=c->r[3]|c->r[3]; // 8004F73C
  c->r[3]=0u+0x00000130u; // 8004F740
  c->r[5]=c->r[13]+0xFFFF933Fu; // 8004F744
  c->r[6]=0u+0x00000000u; // 8004F748
  c->r[7]=0u+0x00001001u; // 8004F74C
  c->lr=0x8004F754u; f_80244DB0(c); // 8004F750
  cmps(c,0,(int32_t)c->r[3],0); // 8004F754
  if (crb(c,2)) { goto L_8004F760; } // 8004F758
  c->lr=0x8004F760u; f_8004F61C(c); // 8004F75C
L_8004F760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F764
  c->lr=c->r[0]; // 8004F768
  c->r[1]=c->r[1]+0x00000010u; // 8004F76C
  return; // 8004F770
}

// fn_8004F774
void f_8004F774(Ctx* __restrict c) {
  trace_call(0x8004F774u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F774
  c->r[0]=c->lr; // 8004F778
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F77C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F780
  c->r[31]=c->r[3]|c->r[3]; // 8004F784
  c->lr=0x8004F78Cu; f_8003A6F0(c); // 8004F788
  c->r[8]=0u+0x80420000u; // 8004F78C
  c->r[7]=0u+0x80410000u; // 8004F790
  c->r[5]=0u+0xAB220000u; // 8004F794
  c->r[4]=0u+0x5E270000u; // 8004F798
  c->r[3]=0u+0xB0CD0000u; // 8004F79C
  c->r[8]=c->r[8]+0xFFFFFB74u; // 8004F7A0
  c->r[0]=c->r[3]+0x00002389u; // 8004F7A4
  c->r[7]=c->r[7]+0xFFFFBE66u; // 8004F7A8
  c->r[5]=c->r[5]+0xFFFFD806u; // 8004F7AC
  c->r[4]=c->r[4]+0x00001FE0u; // 8004F7B0
  c->r[6]=0u+0x00000000u; // 8004F7B4
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004F7B8
  c->r[3]=c->r[31]|c->r[31]; // 8004F7BC
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004F7C0
  W32(c->r[31]+0x00000008u,c->r[6]); // 8004F7C4
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004F7C8
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004F7CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004F7D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F7D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F7D8
  c->lr=c->r[0]; // 8004F7DC
  c->r[1]=c->r[1]+0x00000010u; // 8004F7E0
  return; // 8004F7E4
}

// fn_8004F7E8
void f_8004F7E8(Ctx* __restrict c) {
  trace_call(0x8004F7E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F7E8
  c->r[0]=c->lr; // 8004F7EC
  cmps(c,0,(int32_t)c->r[4],0); // 8004F7F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F7F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004F7F8
  c->r[30]=c->r[3]|c->r[3]; // 8004F7FC
  c->r[31]=c->r[4]|c->r[4]; // 8004F800
  if (crb(c,2)) { goto L_8004F858; } // 8004F804
  c->r[3]=c->r[31]|c->r[31]; // 8004F808
  c->lr=0x8004F810u; f_80244520(c); // 8004F80C
  c->r[7]=c->r[3]|c->r[3]; // 8004F810
  c->r[9]=c->r[31]|c->r[31]; // 8004F814
  c->r[3]=0u+0x000000E4u; // 8004F818
  c->r[4]=c->r[13]+0xFFFF9344u; // 8004F81C
  c->r[5]=0u+0x00000000u; // 8004F820
  c->r[6]=0u+0x00002001u; // 8004F824
  c->r[8]=0u+0x00000000u; // 8004F828
  c->lr=0x8004F830u; f_80242DF0(c); // 8004F82C
  c->r[4]=c->r[3]|c->r[3]; // 8004F830
  c->r[3]=0u+0x000000E4u; // 8004F834
  c->r[5]=c->r[13]+0xFFFF9349u; // 8004F838
  c->r[6]=0u+0x00000000u; // 8004F83C
  c->r[7]=0u+0x00001001u; // 8004F840
  c->lr=0x8004F848u; f_80244DB0(c); // 8004F844
  cmps(c,0,(int32_t)c->r[3],0); // 8004F848
  if (crb(c,2)) { goto L_8004F878; } // 8004F84C
  c->lr=0x8004F854u; f_8004F774(c); // 8004F850
  goto L_8004F878; // 8004F854
L_8004F858:;
  c->r[3]=0u+0x000000E4u; // 8004F858
  c->r[4]=c->r[13]+0xFFFF934Eu; // 8004F85C
  c->r[5]=0u+0x00000000u; // 8004F860
  c->r[6]=0u+0x00001001u; // 8004F864
  c->lr=0x8004F86Cu; f_80244D20(c); // 8004F868
  cmps(c,0,(int32_t)c->r[3],0); // 8004F86C
  if (crb(c,2)) { goto L_8004F878; } // 8004F870
  c->lr=0x8004F878u; f_8004F774(c); // 8004F874
L_8004F878:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004F878
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004F87C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004F880
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F884
  c->lr=c->r[0]; // 8004F888
  c->r[1]=c->r[1]+0x00000010u; // 8004F88C
  return; // 8004F890
}

// fn_8004F894
void f_8004F894(Ctx* __restrict c) {
  trace_call(0x8004F894u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F894
  c->r[0]=c->lr; // 8004F898
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004F89C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004F8A0
  c->r[29]=c->r[3]|c->r[3]; // 8004F8A4
  c->r[30]=c->r[4]|c->r[4]; // 8004F8A8
  c->lr=0x8004F8B0u; f_8003A810(c); // 8004F8AC
  c->r[31]=c->r[3]|c->r[3]; // 8004F8B0
  c->r[3]=c->r[30]|c->r[30]; // 8004F8B4
  c->r[4]=0u+0x00000000u; // 8004F8B8
  c->lr=0x8004F8C0u; f_8030BE30(c); // 8004F8BC
  W32(c->r[29]+0x000000A8u,c->r[3]); // 8004F8C0
  c->r[3]=c->r[30]|c->r[30]; // 8004F8C4
  c->r[4]=0u+0x00000000u; // 8004F8C8
  c->lr=0x8004F8D0u; f_8030BE30(c); // 8004F8CC
  W32(c->r[29]+0x000000ACu,c->r[3]); // 8004F8D0
  c->r[3]=c->r[30]|c->r[30]; // 8004F8D4
  c->lr=0x8004F8DCu; f_8030BD1C(c); // 8004F8D8
  W32(c->r[29]+0x000000B0u,c->r[3]); // 8004F8DC
  c->r[3]=c->r[30]|c->r[30]; // 8004F8E0
  c->lr=0x8004F8E8u; f_8030BD1C(c); // 8004F8E4
  W32(c->r[29]+0x000000B4u,c->r[3]); // 8004F8E8
  c->r[3]=c->r[30]|c->r[30]; // 8004F8EC
  c->lr=0x8004F8F4u; f_8030C0A0(c); // 8004F8F0
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 8004F8F4
  c->r[3]=c->r[30]|c->r[30]; // 8004F8F8
  c->lr=0x8004F900u; f_8030C0A0(c); // 8004F8FC
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[1]);} // 8004F900
  c->r[3]=c->r[30]|c->r[30]; // 8004F904
  c->lr=0x8004F90Cu; f_8030C0A0(c); // 8004F908
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 8004F90C
  c->r[3]=c->r[30]|c->r[30]; // 8004F910
  c->lr=0x8004F918u; f_8030C0A0(c); // 8004F914
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 8004F918
  c->r[3]=c->r[30]|c->r[30]; // 8004F91C
  c->lr=0x8004F924u; f_8030C0A0(c); // 8004F920
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 8004F924
  c->r[3]=c->r[30]|c->r[30]; // 8004F928
  c->lr=0x8004F930u; f_8030C0A0(c); // 8004F92C
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 8004F930
  c->r[3]=c->r[30]|c->r[30]; // 8004F934
  c->lr=0x8004F93Cu; f_8030BD1C(c); // 8004F938
  W32(c->r[29]+0x000000D0u,c->r[3]); // 8004F93C
  c->r[3]=c->r[30]|c->r[30]; // 8004F940
  c->lr=0x8004F948u; f_8030BD1C(c); // 8004F944
  W8(c->r[29]+0x000000D4u,c->r[3]); // 8004F948
  c->r[3]=c->r[30]|c->r[30]; // 8004F94C
  c->lr=0x8004F954u; f_8030BD1C(c); // 8004F950
  W32(c->r[29]+0x000000D8u,c->r[3]); // 8004F954
  c->r[3]=c->r[30]|c->r[30]; // 8004F958
  c->lr=0x8004F960u; f_8030C0A0(c); // 8004F95C
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[1]);} // 8004F960
  c->r[3]=c->r[30]|c->r[30]; // 8004F964
  c->lr=0x8004F96Cu; f_8030C0A0(c); // 8004F968
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[1]);} // 8004F96C
  c->r[3]=c->r[31]|c->r[31]; // 8004F970
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004F974
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F978
  c->lr=c->r[0]; // 8004F97C
  c->r[1]=c->r[1]+0x00000020u; // 8004F980
  return; // 8004F984
}

// fn_8004F988
void f_8004F988(Ctx* __restrict c) {
  trace_call(0x8004F988u);
  f_80038EC8(c); return; // 8004F988
}

// fn_8004F98C
void f_8004F98C(Ctx* __restrict c) {
  trace_call(0x8004F98Cu);
  cmps(c,0,(int32_t)c->r[6],0); // 8004F98C
  if (!crb(c,2)) return; // 8004F990
  f_8003A92C(c); return; // 8004F994
  return; // 8004F998
}

// fn_8004F99C
void f_8004F99C(Ctx* __restrict c) {
  trace_call(0x8004F99Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F99C
  c->r[0]=c->lr; // 8004F9A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F9A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F9A8
  c->r[31]=c->r[3]|c->r[3]; // 8004F9AC
  c->lr=0x8004F9B4u; f_8003AA04(c); // 8004F9B0
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004F9B4
  c->r[4]=0u+0x00000000u; // 8004F9B8
  {uint32_t ea=c->r[2]+0xFFFF86F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004F9BC
  c->r[3]=0u+0x00000002u; // 8004F9C0
  {uint32_t ea=c->r[2]+0xFFFF86ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004F9C4
  c->r[0]=0u+0x000000FFu; // 8004F9C8
  W32(c->r[31]+0x000000A8u,c->r[4]); // 8004F9CC
  W32(c->r[31]+0x000000ACu,c->r[4]); // 8004F9D0
  W32(c->r[31]+0x000000B0u,c->r[3]); // 8004F9D4
  W32(c->r[31]+0x000000B4u,c->r[0]); // 8004F9D8
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[2]);} // 8004F9DC
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[1]);} // 8004F9E0
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 8004F9E4
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8004F9E8
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8004F9EC
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 8004F9F0
  W32(c->r[31]+0x000000D0u,c->r[4]); // 8004F9F4
  W8(c->r[31]+0x000000D4u,c->r[4]); // 8004F9F8
  W32(c->r[31]+0x000000D8u,c->r[4]); // 8004F9FC
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 8004FA00
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 8004FA04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FA08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FA0C
  c->lr=c->r[0]; // 8004FA10
  c->r[1]=c->r[1]+0x00000010u; // 8004FA14
  return; // 8004FA18
}

// fn_8004FA1C
void f_8004FA1C(Ctx* __restrict c) {
  trace_call(0x8004FA1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FA1C
  c->r[0]=c->lr; // 8004FA20
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004FA24
  c->r[11]=c->r[1]+0x00000020u; // 8004FA28
  c->lr=0x8004FA30u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004FA2C
  c->r[29]=c->r[3]|c->r[3]; // 8004FA30
  c->r[30]=c->r[4]|c->r[4]; // 8004FA34
  c->r[31]=c->r[5]|c->r[5]; // 8004FA38
  c->r[6]=0u+0x00000000u; // 8004FA3C
  c->lr=0x8004FA44u; f_8003AA90(c); // 8004FA40
  cmps(c,0,(int32_t)c->r[31],0); // 8004FA44
  if (crb(c,2)) { goto L_8004FA50; } // 8004FA48
  goto L_8004FA54; // 8004FA4C
L_8004FA50:;
  c->r[31]=c->r[29]|c->r[29]; // 8004FA50
L_8004FA54:;
  c->r[3]=c->r[31]+0x000000A8u; // 8004FA54
  c->r[4]=c->r[30]+0x000000A8u; // 8004FA58
  c->lr=0x8004FA60u; f_8003F6E4(c); // 8004FA5C
  c->r[0]=R32(c->r[30]+0x000000B0u); // 8004FA60
  c->r[11]=c->r[1]+0x00000020u; // 8004FA64
  W32(c->r[31]+0x000000B0u,c->r[0]); // 8004FA68
  c->r[0]=R32(c->r[30]+0x000000B4u); // 8004FA6C
  W32(c->r[31]+0x000000B4u,c->r[0]); // 8004FA70
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA74
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 8004FA78
  {uint32_t ea=c->r[30]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA7C
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 8004FA80
  {uint32_t ea=c->r[30]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA84
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 8004FA88
  {uint32_t ea=c->r[30]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA8C
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 8004FA90
  {uint32_t ea=c->r[30]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA94
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 8004FA98
  {uint32_t ea=c->r[30]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FA9C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 8004FAA0
  c->r[0]=R32(c->r[30]+0x000000D0u); // 8004FAA4
  W32(c->r[31]+0x000000D0u,c->r[0]); // 8004FAA8
  c->r[0]=R8(c->r[30]+0x000000D4u); // 8004FAAC
  W8(c->r[31]+0x000000D4u,c->r[0]); // 8004FAB0
  c->r[0]=R32(c->r[30]+0x000000D8u); // 8004FAB4
  W32(c->r[31]+0x000000D8u,c->r[0]); // 8004FAB8
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FABC
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 8004FAC0
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FAC4
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 8004FAC8
  c->lr=0x8004FAD0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004FACC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004FAD0
  c->lr=c->r[0]; // 8004FAD4
  c->r[1]=c->r[1]+0x00000020u; // 8004FAD8
  return; // 8004FADC
}

// fn_8004FAE0
void f_8004FAE0(Ctx* __restrict c) {
  trace_call(0x8004FAE0u);
  c->r[0]=c->r[4]+0x05C00000u; // 8004FAE0
  cmpu(c,0,c->r[0],0x00000802u); // 8004FAE4
  if (!crb(c,2)) { goto L_8004FAF4; } // 8004FAE8
  c->r[3]=0u+0x00000001u; // 8004FAEC
  return; // 8004FAF0
L_8004FAF4:;
  c->r[3]=0u+0xD12F0000u; // 8004FAF4
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004FAF8
  c->r[0]=c->r[4]-c->r[0]; // 8004FAFC
  c->r[0]=cntlz(c->r[0]); // 8004FB00
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004FB04
  return; // 8004FB08
}

// fn_8004FB0C
void f_8004FB0C(Ctx* __restrict c) {
  trace_call(0x8004FB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FB0C
  c->r[7]=0u+0x43300000u; // 8004FB10
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004FB14
  c->r[6]=R32(c->r[4]+0x000000B4u); // 8004FB18
  c->r[0]=R32(c->r[5]+0x000000B4u); // 8004FB1C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8004FB20
  c->r[6]=c->r[6]^0x80000000u; // 8004FB24
  W32(c->r[1]+0x00000008u,c->r[7]); // 8004FB28
  c->r[0]=c->r[0]^0x80000000u; // 8004FB2C
  {uint32_t ea=c->r[2]+0xFFFF8690u; c->f[0]=RF64(ea);} // 8004FB30
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004FB34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 8004FB38
  W32(c->r[1]+0x00000010u,c->r[7]); // 8004FB3C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 8004FB40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FB44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004FB48
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004FB4C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 8004FB50
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004FB54
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004FB58
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8004FB5C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 8004FB60
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8004FB64
  W32(c->r[3]+0x000000B4u,c->r[0]); // 8004FB68
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004FB6C
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FB70
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004FB74
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004FB78
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004FB7C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[3]);} // 8004FB80
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8004FB84
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FB88
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004FB8C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004FB90
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004FB94
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[3]);} // 8004FB98
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004FB9C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FBA0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004FBA4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004FBA8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004FBAC
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[3]);} // 8004FBB0
  {uint32_t ea=c->r[4]+0x000000C4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004FBB4
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FBB8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004FBBC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004FBC0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004FBC4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 8004FBC8
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8004FBCC
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FBD0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004FBD4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004FBD8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004FBDC
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[3]);} // 8004FBE0
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8004FBE4
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FBE8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8004FBEC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 8004FBF0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 8004FBF4
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[3]);} // 8004FBF8
  c->r[6]=R32(c->r[4]+0x000000D0u); // 8004FBFC
  c->r[0]=R32(c->r[5]+0x000000D0u); // 8004FC00
  c->r[6]=c->r[6]^0x80000000u; // 8004FC04
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8004FC08
  c->r[0]=c->r[0]^0x80000000u; // 8004FC0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FC10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 8004FC14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 8004FC18
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8004FC1C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8004FC20
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[4]); // 8004FC24
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8004FC28
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8004FC2C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8004FC30
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8004FC34
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004FC38
  W32(c->r[3]+0x000000D0u,c->r[0]); // 8004FC3C
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FC40
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FC44
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 8004FC48
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8004FC4C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8004FC50
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8004FC54
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004FC58
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004FC5C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 8004FC60
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8004FC64
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8004FC68
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8004FC6C
  c->r[1]=c->r[1]+0x00000030u; // 8004FC70
  return; // 8004FC74
}

// fn_8004FC78
void f_8004FC78(Ctx* __restrict c) {
  trace_call(0x8004FC78u);
  c->r[3]=0u+0x000000E4u; // 8004FC78
  return; // 8004FC7C
}

// fn_8004FC80
void f_8004FC80(Ctx* __restrict c) {
  trace_call(0x8004FC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FC80
  c->r[0]=c->lr; // 8004FC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FC8C
  c->r[31]=c->r[3]|c->r[3]; // 8004FC90
  c->lr=0x8004FC98u; f_8004F774(c); // 8004FC94
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004FC98
  c->r[3]=0u+0x80420000u; // 8004FC9C
  c->r[3]=c->r[3]+0xFFFFFB34u; // 8004FCA0
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004FCA4
  c->r[0]=c->r[0]|0x80000000u; // 8004FCA8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004FCAC
  c->r[3]=c->r[31]|c->r[31]; // 8004FCB0
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004FCB4
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004FCB8
  c->ctr=c->r[12]; // 8004FCBC
  if (true) { c->lr=0x8004FCC4u; dispatch(c,c->ctr); } // 8004FCC0
  c->r[3]=c->r[31]|c->r[31]; // 8004FCC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FCC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FCCC
  c->lr=c->r[0]; // 8004FCD0
  c->r[1]=c->r[1]+0x00000010u; // 8004FCD4
  return; // 8004FCD8
}

// fn_8004FCDC
void f_8004FCDC(Ctx* __restrict c) {
  trace_call(0x8004FCDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FCDC
  c->r[0]=c->lr; // 8004FCE0
  cmps(c,0,(int32_t)c->r[3],0); // 8004FCE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FCE8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004FCEC
  c->r[30]=c->r[3]|c->r[3]; // 8004FCF0
  c->r[31]=c->r[4]|c->r[4]; // 8004FCF4
  if (crb(c,2)) { goto L_8004FD14; } // 8004FCF8
  c->r[4]=0u+0x00000000u; // 8004FCFC
  c->lr=0x8004FD04u; f_8003ABE0(c); // 8004FD00
  cmps(c,0,(int32_t)c->r[31],0); // 8004FD04
  if (!crb(c,1)) { goto L_8004FD14; } // 8004FD08
  c->r[3]=c->r[30]|c->r[30]; // 8004FD0C
  c->lr=0x8004FD14u; f_80244DC0(c); // 8004FD10
L_8004FD14:;
  c->r[3]=c->r[30]|c->r[30]; // 8004FD14
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004FD18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FD1C
  c->lr=c->r[0]; // 8004FD20
  c->r[1]=c->r[1]+0x00000010u; // 8004FD24
  return; // 8004FD28
}

// fn_8004FD2C
void f_8004FD2C(Ctx* __restrict c) {
  trace_call(0x8004FD2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FD2C
  c->r[0]=c->lr; // 8004FD30
  c->r[3]=0u+0x000000E4u; // 8004FD34
  c->r[4]=c->r[13]+0xFFFF9353u; // 8004FD38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FD3C
  c->r[5]=0u+0x00000000u; // 8004FD40
  c->r[6]=0u+0x00001001u; // 8004FD44
  c->lr=0x8004FD4Cu; f_80244D20(c); // 8004FD48
  cmps(c,0,(int32_t)c->r[3],0); // 8004FD4C
  if (crb(c,2)) { goto L_8004FD58; } // 8004FD50
  c->lr=0x8004FD58u; f_8004FC80(c); // 8004FD54
L_8004FD58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FD58
  c->lr=c->r[0]; // 8004FD5C
  c->r[1]=c->r[1]+0x00000010u; // 8004FD60
  return; // 8004FD64
}

// fn_8004FD68
void f_8004FD68(Ctx* __restrict c) {
  trace_call(0x8004FD68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FD68
  c->r[0]=c->lr; // 8004FD6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FD70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FD74
  c->r[31]=c->r[3]|c->r[3]; // 8004FD78
  c->lr=0x8004FD80u; f_80244520(c); // 8004FD7C
  c->r[7]=c->r[3]|c->r[3]; // 8004FD80
  c->r[9]=c->r[31]|c->r[31]; // 8004FD84
  c->r[3]=0u+0x000000E4u; // 8004FD88
  c->r[4]=c->r[13]+0xFFFF9358u; // 8004FD8C
  c->r[5]=0u+0x00000000u; // 8004FD90
  c->r[6]=0u+0x00002001u; // 8004FD94
  c->r[8]=0u+0x00000000u; // 8004FD98
  c->lr=0x8004FDA0u; f_80242DF0(c); // 8004FD9C
  c->r[4]=c->r[3]|c->r[3]; // 8004FDA0
  c->r[3]=0u+0x000000E4u; // 8004FDA4
  c->r[5]=c->r[13]+0xFFFF935Du; // 8004FDA8
  c->r[6]=0u+0x00000000u; // 8004FDAC
  c->r[7]=0u+0x00001001u; // 8004FDB0
  c->lr=0x8004FDB8u; f_80244DB0(c); // 8004FDB4
  cmps(c,0,(int32_t)c->r[3],0); // 8004FDB8
  if (crb(c,2)) { goto L_8004FDC4; } // 8004FDBC
  c->lr=0x8004FDC4u; f_8004FC80(c); // 8004FDC0
L_8004FDC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FDC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FDC8
  c->lr=c->r[0]; // 8004FDCC
  c->r[1]=c->r[1]+0x00000010u; // 8004FDD0
  return; // 8004FDD4
}

// fn_8004FDD8
void f_8004FDD8(Ctx* __restrict c) {
  trace_call(0x8004FDD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FDD8
  c->r[0]=c->lr; // 8004FDDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FDE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FDE4
  c->r[31]=c->r[3]|c->r[3]; // 8004FDE8
  c->lr=0x8004FDF0u; f_8003A6F0(c); // 8004FDEC
  c->r[8]=0u+0x80420000u; // 8004FDF0
  c->r[7]=0u+0x80410000u; // 8004FDF4
  c->r[5]=0u+0x251C0000u; // 8004FDF8
  c->r[4]=0u+0xB7B00000u; // 8004FDFC
  c->r[3]=0u+0x0E170000u; // 8004FE00
  c->r[8]=c->r[8]+0xFFFFFAF8u; // 8004FE04
  c->r[0]=c->r[3]+0xFFFFBA92u; // 8004FE08
  c->r[7]=c->r[7]+0xFFFFBE7Cu; // 8004FE0C
  c->r[5]=c->r[5]+0x0000241Eu; // 8004FE10
  c->r[4]=c->r[4]+0xFFFFDB47u; // 8004FE14
  c->r[6]=0u+0x00000000u; // 8004FE18
  W32(c->r[31]+0x00000018u,c->r[8]); // 8004FE1C
  c->r[3]=c->r[31]|c->r[31]; // 8004FE20
  W32(c->r[31]+0x00000000u,c->r[7]); // 8004FE24
  W32(c->r[31]+0x00000008u,c->r[6]); // 8004FE28
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8004FE2C
  W32(c->r[31]+0x00000010u,c->r[4]); // 8004FE30
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004FE34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FE38
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FE3C
  c->lr=c->r[0]; // 8004FE40
  c->r[1]=c->r[1]+0x00000010u; // 8004FE44
  return; // 8004FE48
}

// fn_8004FE4C
void f_8004FE4C(Ctx* __restrict c) {
  trace_call(0x8004FE4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FE4C
  c->r[0]=c->lr; // 8004FE50
  cmps(c,0,(int32_t)c->r[4],0); // 8004FE54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FE58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004FE5C
  c->r[30]=c->r[3]|c->r[3]; // 8004FE60
  c->r[31]=c->r[4]|c->r[4]; // 8004FE64
  if (crb(c,2)) { goto L_8004FEBC; } // 8004FE68
  c->r[3]=c->r[31]|c->r[31]; // 8004FE6C
  c->lr=0x8004FE74u; f_80244520(c); // 8004FE70
  c->r[7]=c->r[3]|c->r[3]; // 8004FE74
  c->r[9]=c->r[31]|c->r[31]; // 8004FE78
  c->r[3]=0u+0x000000A8u; // 8004FE7C
  c->r[4]=c->r[13]+0xFFFF9362u; // 8004FE80
  c->r[5]=0u+0x00000000u; // 8004FE84
  c->r[6]=0u+0x00002001u; // 8004FE88
  c->r[8]=0u+0x00000000u; // 8004FE8C
  c->lr=0x8004FE94u; f_80242DF0(c); // 8004FE90
  c->r[4]=c->r[3]|c->r[3]; // 8004FE94
  c->r[3]=0u+0x000000A8u; // 8004FE98
  c->r[5]=c->r[13]+0xFFFF9367u; // 8004FE9C
  c->r[6]=0u+0x00000000u; // 8004FEA0
  c->r[7]=0u+0x00001001u; // 8004FEA4
  c->lr=0x8004FEACu; f_80244DB0(c); // 8004FEA8
  cmps(c,0,(int32_t)c->r[3],0); // 8004FEAC
  if (crb(c,2)) { goto L_8004FEDC; } // 8004FEB0
  c->lr=0x8004FEB8u; f_8004FDD8(c); // 8004FEB4
  goto L_8004FEDC; // 8004FEB8
L_8004FEBC:;
  c->r[3]=0u+0x000000A8u; // 8004FEBC
  c->r[4]=c->r[13]+0xFFFF936Cu; // 8004FEC0
  c->r[5]=0u+0x00000000u; // 8004FEC4
  c->r[6]=0u+0x00001001u; // 8004FEC8
  c->lr=0x8004FED0u; f_80244D20(c); // 8004FECC
  cmps(c,0,(int32_t)c->r[3],0); // 8004FED0
  if (crb(c,2)) { goto L_8004FEDC; } // 8004FED4
  c->lr=0x8004FEDCu; f_8004FDD8(c); // 8004FED8
L_8004FEDC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 8004FEDC
  W16(c->r[3]+0x00000014u,c->r[0]); // 8004FEE0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004FEE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FEE8
  c->lr=c->r[0]; // 8004FEEC
  c->r[1]=c->r[1]+0x00000010u; // 8004FEF0
  return; // 8004FEF4
}

// fn_8004FEF8
void f_8004FEF8(Ctx* __restrict c) {
  trace_call(0x8004FEF8u);
  f_8003A810(c); return; // 8004FEF8
}

// fn_8004FEFC
void f_8004FEFC(Ctx* __restrict c) {
  trace_call(0x8004FEFCu);
  f_80038EC8(c); return; // 8004FEFC
}

// fn_8004FF00
void f_8004FF00(Ctx* __restrict c) {
  trace_call(0x8004FF00u);
  cmps(c,0,(int32_t)c->r[6],0); // 8004FF00
  if (!crb(c,2)) return; // 8004FF04
  f_8003A92C(c); return; // 8004FF08
  return; // 8004FF0C
}

// fn_8004FF10
void f_8004FF10(Ctx* __restrict c) {
  trace_call(0x8004FF10u);
  f_8003AA04(c); return; // 8004FF10
}

// fn_8004FF14
void f_8004FF14(Ctx* __restrict c) {
  trace_call(0x8004FF14u);
  c->r[6]=0u+0x00000000u; // 8004FF14
  f_8003AA90(c); return; // 8004FF18
}

// fn_8004FF1C
void f_8004FF1C(Ctx* __restrict c) {
  trace_call(0x8004FF1Cu);
  c->r[0]=c->r[4]+0x05C00000u; // 8004FF1C
  cmpu(c,0,c->r[0],0x00000802u); // 8004FF20
  if (!crb(c,2)) { goto L_8004FF30; } // 8004FF24
  c->r[3]=0u+0x00000001u; // 8004FF28
  return; // 8004FF2C
L_8004FF30:;
  c->r[3]=0u+0xD12F0000u; // 8004FF30
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 8004FF34
  c->r[0]=c->r[4]-c->r[0]; // 8004FF38
  c->r[0]=cntlz(c->r[0]); // 8004FF3C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8004FF40
  return; // 8004FF44
}

// fn_8004FF48
void f_8004FF48(Ctx* __restrict c) {
  trace_call(0x8004FF48u);
  c->r[3]=0u+0x000000A8u; // 8004FF48
  return; // 8004FF4C
}

// fn_8004FF50
void f_8004FF50(Ctx* __restrict c) {
  trace_call(0x8004FF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FF50
  c->r[0]=c->lr; // 8004FF54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FF58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FF5C
  c->r[31]=c->r[3]|c->r[3]; // 8004FF60
  c->lr=0x8004FF68u; f_8004FDD8(c); // 8004FF64
  c->r[0]=R32(c->r[31]+0x00000008u); // 8004FF68
  c->r[3]=0u+0x80420000u; // 8004FF6C
  c->r[3]=c->r[3]+0xFFFFFAB8u; // 8004FF70
  W32(c->r[31]+0x00000018u,c->r[3]); // 8004FF74
  c->r[0]=c->r[0]|0x80000000u; // 8004FF78
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004FF7C
  c->r[3]=c->r[31]|c->r[31]; // 8004FF80
  c->r[12]=R32(c->r[31]+0x00000018u); // 8004FF84
  c->r[12]=R32(c->r[12]+0x00000024u); // 8004FF88
  c->ctr=c->r[12]; // 8004FF8C
  if (true) { c->lr=0x8004FF94u; dispatch(c,c->ctr); } // 8004FF90
  c->r[3]=c->r[31]|c->r[31]; // 8004FF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FF98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FF9C
  c->lr=c->r[0]; // 8004FFA0
  c->r[1]=c->r[1]+0x00000010u; // 8004FFA4
  return; // 8004FFA8
}

// fn_8004FFAC
void f_8004FFAC(Ctx* __restrict c) {
  trace_call(0x8004FFACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FFAC
  c->r[0]=c->lr; // 8004FFB0
  cmps(c,0,(int32_t)c->r[3],0); // 8004FFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FFB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004FFBC
  c->r[30]=c->r[3]|c->r[3]; // 8004FFC0
  c->r[31]=c->r[4]|c->r[4]; // 8004FFC4
  if (crb(c,2)) { goto L_8004FFE4; } // 8004FFC8
  c->r[4]=0u+0x00000000u; // 8004FFCC
  c->lr=0x8004FFD4u; f_8003ABE0(c); // 8004FFD0
  cmps(c,0,(int32_t)c->r[31],0); // 8004FFD4
  if (!crb(c,1)) { goto L_8004FFE4; } // 8004FFD8
  c->r[3]=c->r[30]|c->r[30]; // 8004FFDC
  c->lr=0x8004FFE4u; f_80244DC0(c); // 8004FFE0
L_8004FFE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8004FFE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004FFE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FFEC
  c->lr=c->r[0]; // 8004FFF0
  c->r[1]=c->r[1]+0x00000010u; // 8004FFF4
  return; // 8004FFF8
}

// fn_8004FFFC
void f_8004FFFC(Ctx* __restrict c) {
  trace_call(0x8004FFFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FFFC
  c->r[0]=c->lr; // 80050000
  c->r[3]=0u+0x000000A8u; // 80050004
  c->r[4]=c->r[13]+0xFFFF9371u; // 80050008
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005000C
  c->r[5]=0u+0x00000000u; // 80050010
  c->r[6]=0u+0x00001001u; // 80050014
  c->lr=0x8005001Cu; f_80244D20(c); // 80050018
  cmps(c,0,(int32_t)c->r[3],0); // 8005001C
  if (crb(c,2)) { goto L_80050028; } // 80050020
  c->lr=0x80050028u; f_8004FF50(c); // 80050024
L_80050028:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050028
  c->lr=c->r[0]; // 8005002C
  c->r[1]=c->r[1]+0x00000010u; // 80050030
  return; // 80050034
}

// fn_80050038
void f_80050038(Ctx* __restrict c) {
  trace_call(0x80050038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050038
  c->r[0]=c->lr; // 8005003C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050044
  c->r[31]=c->r[3]|c->r[3]; // 80050048
  c->lr=0x80050050u; f_80244520(c); // 8005004C
  c->r[7]=c->r[3]|c->r[3]; // 80050050
  c->r[9]=c->r[31]|c->r[31]; // 80050054
  c->r[3]=0u+0x000000A8u; // 80050058
  c->r[4]=c->r[13]+0xFFFF9376u; // 8005005C
  c->r[5]=0u+0x00000000u; // 80050060
  c->r[6]=0u+0x00002001u; // 80050064
  c->r[8]=0u+0x00000000u; // 80050068
  c->lr=0x80050070u; f_80242DF0(c); // 8005006C
  c->r[4]=c->r[3]|c->r[3]; // 80050070
  c->r[3]=0u+0x000000A8u; // 80050074
  c->r[5]=c->r[13]+0xFFFF937Bu; // 80050078
  c->r[6]=0u+0x00000000u; // 8005007C
  c->r[7]=0u+0x00001001u; // 80050080
  c->lr=0x80050088u; f_80244DB0(c); // 80050084
  cmps(c,0,(int32_t)c->r[3],0); // 80050088
  if (crb(c,2)) { goto L_80050094; } // 8005008C
  c->lr=0x80050094u; f_8004FF50(c); // 80050090
L_80050094:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050094
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050098
  c->lr=c->r[0]; // 8005009C
  c->r[1]=c->r[1]+0x00000010u; // 800500A0
  return; // 800500A4
}

// fn_800500A8
void f_800500A8(Ctx* __restrict c) {
  trace_call(0x800500A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800500A8
  c->r[0]=c->lr; // 800500AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800500B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800500B4
  c->r[31]=c->r[3]|c->r[3]; // 800500B8
  c->lr=0x800500C0u; f_80038CC0(c); // 800500BC
  c->r[8]=0u+0x80420000u; // 800500C0
  c->r[7]=0u+0x80410000u; // 800500C4
  c->r[5]=0u+0xC7F80000u; // 800500C8
  c->r[4]=0u+0xA6F40000u; // 800500CC
  c->r[3]=0u+0x52D10000u; // 800500D0
  c->r[8]=c->r[8]+0xFFFFFA7Cu; // 800500D4
  c->r[0]=c->r[3]+0xFFFFDBF4u; // 800500D8
  c->r[7]=c->r[7]+0xFFFFBE8Eu; // 800500DC
  c->r[5]=c->r[5]+0xFFFFEBB9u; // 800500E0
  c->r[4]=c->r[4]+0xFFFFDE1Eu; // 800500E4
  c->r[6]=0u+0x00000000u; // 800500E8
  W32(c->r[31]+0x00000018u,c->r[8]); // 800500EC
  c->r[3]=c->r[31]|c->r[31]; // 800500F0
  W32(c->r[31]+0x00000000u,c->r[7]); // 800500F4
  W32(c->r[31]+0x00000008u,c->r[6]); // 800500F8
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800500FC
  W32(c->r[31]+0x00000010u,c->r[4]); // 80050100
  W32(c->r[31]+0x00000004u,c->r[0]); // 80050104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050108
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005010C
  c->lr=c->r[0]; // 80050110
  c->r[1]=c->r[1]+0x00000010u; // 80050114
  return; // 80050118
}

// fn_8005011C
void f_8005011C(Ctx* __restrict c) {
  trace_call(0x8005011Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005011C
  c->r[0]=c->lr; // 80050120
  cmps(c,0,(int32_t)c->r[4],0); // 80050124
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050128
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005012C
  c->r[30]=c->r[3]|c->r[3]; // 80050130
  c->r[31]=c->r[4]|c->r[4]; // 80050134
  if (crb(c,2)) { goto L_8005018C; } // 80050138
  c->r[3]=c->r[31]|c->r[31]; // 8005013C
  c->lr=0x80050144u; f_80244520(c); // 80050140
  c->r[7]=c->r[3]|c->r[3]; // 80050144
  c->r[9]=c->r[31]|c->r[31]; // 80050148
  c->r[3]=0u+0x00000060u; // 8005014C
  c->r[4]=c->r[13]+0xFFFF9380u; // 80050150
  c->r[5]=0u+0x00000000u; // 80050154
  c->r[6]=0u+0x00002001u; // 80050158
  c->r[8]=0u+0x00000000u; // 8005015C
  c->lr=0x80050164u; f_80242DF0(c); // 80050160
  c->r[4]=c->r[3]|c->r[3]; // 80050164
  c->r[3]=0u+0x00000060u; // 80050168
  c->r[5]=c->r[13]+0xFFFF9385u; // 8005016C
  c->r[6]=0u+0x00000000u; // 80050170
  c->r[7]=0u+0x00001001u; // 80050174
  c->lr=0x8005017Cu; f_80244DB0(c); // 80050178
  cmps(c,0,(int32_t)c->r[3],0); // 8005017C
  if (crb(c,2)) { goto L_800501AC; } // 80050180
  c->lr=0x80050188u; f_800500A8(c); // 80050184
  goto L_800501AC; // 80050188
L_8005018C:;
  c->r[3]=0u+0x00000060u; // 8005018C
  c->r[4]=c->r[13]+0xFFFF938Au; // 80050190
  c->r[5]=0u+0x00000000u; // 80050194
  c->r[6]=0u+0x00001001u; // 80050198
  c->lr=0x800501A0u; f_80244D20(c); // 8005019C
  cmps(c,0,(int32_t)c->r[3],0); // 800501A0
  if (crb(c,2)) { goto L_800501AC; } // 800501A4
  c->lr=0x800501ACu; f_800500A8(c); // 800501A8
L_800501AC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800501AC
  W16(c->r[3]+0x00000014u,c->r[0]); // 800501B0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800501B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800501B8
  c->lr=c->r[0]; // 800501BC
  c->r[1]=c->r[1]+0x00000010u; // 800501C0
  return; // 800501C4
}

// fn_800501C8
void f_800501C8(Ctx* __restrict c) {
  trace_call(0x800501C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800501C8
  c->r[0]=c->lr; // 800501CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800501D0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800501D4
  c->r[29]=c->r[3]|c->r[3]; // 800501D8
  c->r[30]=c->r[4]|c->r[4]; // 800501DC
  c->lr=0x800501E4u; f_80038DD8(c); // 800501E0
  c->r[31]=c->r[3]|c->r[3]; // 800501E4
  c->r[3]=c->r[30]|c->r[30]; // 800501E8
  c->r[4]=0u+0x00000000u; // 800501EC
  c->lr=0x800501F4u; f_8030BE30(c); // 800501F0
  W32(c->r[29]+0x00000050u,c->r[3]); // 800501F4
  c->r[3]=c->r[30]|c->r[30]; // 800501F8
  c->lr=0x80050200u; f_8030BD1C(c); // 800501FC
  W32(c->r[29]+0x00000054u,c->r[3]); // 80050200
  c->r[3]=c->r[30]|c->r[30]; // 80050204
  c->lr=0x8005020Cu; f_8030BD1C(c); // 80050208
  W8(c->r[29]+0x0000005Cu,c->r[3]); // 8005020C
  c->r[3]=c->r[30]|c->r[30]; // 80050210
  c->lr=0x80050218u; f_8030BD1C(c); // 80050214
  W8(c->r[29]+0x0000005Du,c->r[3]); // 80050218
  c->r[3]=c->r[30]|c->r[30]; // 8005021C
  c->lr=0x80050224u; f_8030BD1C(c); // 80050220
  W8(c->r[29]+0x0000005Eu,c->r[3]); // 80050224
  c->r[3]=c->r[31]|c->r[31]; // 80050228
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005022C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80050230
  c->lr=c->r[0]; // 80050234
  c->r[1]=c->r[1]+0x00000020u; // 80050238
  return; // 8005023C
}

// fn_80050240
void f_80050240(Ctx* __restrict c) {
  trace_call(0x80050240u);
  f_80038EC8(c); return; // 80050240
}

// fn_80050244
void f_80050244(Ctx* __restrict c) {
  trace_call(0x80050244u);
  cmps(c,0,(int32_t)c->r[6],0); // 80050244
  if (!crb(c,2)) return; // 80050248
  c->r[0]=R32(c->r[3]+0x00000054u); // 8005024C
  cmps(c,0,(int32_t)c->r[0],7); // 80050250
  if (!crb(c,0)) return; // 80050254
  c->r[4]=c->r[5]|c->r[5]; // 80050258
  c->r[3]=c->r[3]+0x00000050u; // 8005025C
  f_8003A994(c); return; // 80050260
  return; // 80050264
}

// fn_80050268
void f_80050268(Ctx* __restrict c) {
  trace_call(0x80050268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050268
  c->r[0]=c->lr; // 8005026C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050274
  c->r[31]=c->r[3]|c->r[3]; // 80050278
  c->lr=0x80050280u; f_80038F3C(c); // 8005027C
  c->r[0]=0u+0x00000000u; // 80050280
  W32(c->r[31]+0x00000050u,c->r[0]); // 80050284
  W32(c->r[31]+0x00000058u,c->r[0]); // 80050288
  W32(c->r[31]+0x00000054u,c->r[0]); // 8005028C
  W8(c->r[31]+0x0000005Cu,c->r[0]); // 80050290
  W8(c->r[31]+0x0000005Du,c->r[0]); // 80050294
  W8(c->r[31]+0x0000005Eu,c->r[0]); // 80050298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005029C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800502A0
  c->lr=c->r[0]; // 800502A4
  c->r[1]=c->r[1]+0x00000010u; // 800502A8
  return; // 800502AC
}

// fn_800502B0
void f_800502B0(Ctx* __restrict c) {
  trace_call(0x800502B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800502B0
  c->r[0]=c->lr; // 800502B4
  c->r[6]=0u+0x00000000u; // 800502B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800502BC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800502C0
  c->r[29]=c->r[3]|c->r[3]; // 800502C4
  c->r[30]=c->r[4]|c->r[4]; // 800502C8
  c->r[31]=c->r[5]|c->r[5]; // 800502CC
  c->lr=0x800502D4u; f_80038F88(c); // 800502D0
  cmps(c,0,(int32_t)c->r[31],0); // 800502D4
  if (crb(c,2)) { goto L_800502E0; } // 800502D8
  goto L_800502E4; // 800502DC
L_800502E0:;
  c->r[31]=c->r[29]|c->r[29]; // 800502E0
L_800502E4:;
  c->r[3]=c->r[31]+0x00000050u; // 800502E4
  c->r[4]=c->r[30]+0x00000050u; // 800502E8
  c->lr=0x800502F0u; f_8003AB48(c); // 800502EC
  c->r[0]=R8(c->r[30]+0x0000005Cu); // 800502F0
  W8(c->r[31]+0x0000005Cu,c->r[0]); // 800502F4
  c->r[0]=R8(c->r[30]+0x0000005Du); // 800502F8
  W8(c->r[31]+0x0000005Du,c->r[0]); // 800502FC
  c->r[0]=R8(c->r[30]+0x0000005Eu); // 80050300
  W8(c->r[31]+0x0000005Eu,c->r[0]); // 80050304
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80050308
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005030C
  c->lr=c->r[0]; // 80050310
  c->r[1]=c->r[1]+0x00000020u; // 80050314
  return; // 80050318
}

// fn_8005031C
void f_8005031C(Ctx* __restrict c) {
  trace_call(0x8005031Cu);
  c->r[3]=0u+0xD12F0000u; // 8005031C
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80050320
  c->r[0]=c->r[4]-c->r[0]; // 80050324
  c->r[0]=cntlz(c->r[0]); // 80050328
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005032C
  return; // 80050330
}

// fn_80050334
void f_80050334(Ctx* __restrict c) {
  trace_call(0x80050334u);
  c->r[3]=0u+0x00000060u; // 80050334
  return; // 80050338
}

// fn_8005033C
void f_8005033C(Ctx* __restrict c) {
  trace_call(0x8005033Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005033C
  c->r[0]=c->lr; // 80050340
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050348
  c->r[31]=c->r[3]|c->r[3]; // 8005034C
  c->lr=0x80050354u; f_800500A8(c); // 80050350
  c->r[0]=R32(c->r[31]+0x00000008u); // 80050354
  c->r[3]=0u+0x80420000u; // 80050358
  c->r[3]=c->r[3]+0xFFFFFA3Cu; // 8005035C
  W32(c->r[31]+0x00000018u,c->r[3]); // 80050360
  c->r[0]=c->r[0]|0x80000000u; // 80050364
  W32(c->r[31]+0x00000008u,c->r[0]); // 80050368
  c->r[3]=c->r[31]|c->r[31]; // 8005036C
  c->r[12]=R32(c->r[31]+0x00000018u); // 80050370
  c->r[12]=R32(c->r[12]+0x00000024u); // 80050374
  c->ctr=c->r[12]; // 80050378
  if (true) { c->lr=0x80050380u; dispatch(c,c->ctr); } // 8005037C
  c->r[3]=c->r[31]|c->r[31]; // 80050380
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050384
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050388
  c->lr=c->r[0]; // 8005038C
  c->r[1]=c->r[1]+0x00000010u; // 80050390
  return; // 80050394
}

// fn_80050398
void f_80050398(Ctx* __restrict c) {
  trace_call(0x80050398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050398
  c->r[0]=c->lr; // 8005039C
  cmps(c,0,(int32_t)c->r[3],0); // 800503A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800503A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800503A8
  c->r[30]=c->r[3]|c->r[3]; // 800503AC
  c->r[31]=c->r[4]|c->r[4]; // 800503B0
  if (crb(c,2)) { goto L_800503D4; } // 800503B4
  if (crb(c,2)) { goto L_800503C4; } // 800503B8
  c->r[4]=0u+0x00000000u; // 800503BC
  c->lr=0x800503C4u; f_802B1180(c); // 800503C0
L_800503C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800503C4
  if (!crb(c,1)) { goto L_800503D4; } // 800503C8
  c->r[3]=c->r[30]|c->r[30]; // 800503CC
  c->lr=0x800503D4u; f_80244DC0(c); // 800503D0
L_800503D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800503D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800503D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800503DC
  c->lr=c->r[0]; // 800503E0
  c->r[1]=c->r[1]+0x00000010u; // 800503E4
  return; // 800503E8
}

// fn_800503EC
void f_800503EC(Ctx* __restrict c) {
  trace_call(0x800503ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800503EC
  c->r[0]=c->lr; // 800503F0
  c->r[3]=0u+0x00000060u; // 800503F4
  c->r[4]=c->r[13]+0xFFFF938Fu; // 800503F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800503FC
  c->r[5]=0u+0x00000000u; // 80050400
  c->r[6]=0u+0x00001001u; // 80050404
  c->lr=0x8005040Cu; f_80244D20(c); // 80050408
  cmps(c,0,(int32_t)c->r[3],0); // 8005040C
  if (crb(c,2)) { goto L_80050418; } // 80050410
  c->lr=0x80050418u; f_8005033C(c); // 80050414
L_80050418:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050418
  c->lr=c->r[0]; // 8005041C
  c->r[1]=c->r[1]+0x00000010u; // 80050420
  return; // 80050424
}

// fn_80050428
void f_80050428(Ctx* __restrict c) {
  trace_call(0x80050428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050428
  c->r[0]=c->lr; // 8005042C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050434
  c->r[31]=c->r[3]|c->r[3]; // 80050438
  c->lr=0x80050440u; f_80244520(c); // 8005043C
  c->r[7]=c->r[3]|c->r[3]; // 80050440
  c->r[9]=c->r[31]|c->r[31]; // 80050444
  c->r[3]=0u+0x00000060u; // 80050448
  c->r[4]=c->r[13]+0xFFFF9394u; // 8005044C
  c->r[5]=0u+0x00000000u; // 80050450
  c->r[6]=0u+0x00002001u; // 80050454
  c->r[8]=0u+0x00000000u; // 80050458
  c->lr=0x80050460u; f_80242DF0(c); // 8005045C
  c->r[4]=c->r[3]|c->r[3]; // 80050460
  c->r[3]=0u+0x00000060u; // 80050464
  c->r[5]=c->r[13]+0xFFFF9399u; // 80050468
  c->r[6]=0u+0x00000000u; // 8005046C
  c->r[7]=0u+0x00001001u; // 80050470
  c->lr=0x80050478u; f_80244DB0(c); // 80050474
  cmps(c,0,(int32_t)c->r[3],0); // 80050478
  if (crb(c,2)) { goto L_80050484; } // 8005047C
  c->lr=0x80050484u; f_8005033C(c); // 80050480
L_80050484:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050488
  c->lr=c->r[0]; // 8005048C
  c->r[1]=c->r[1]+0x00000010u; // 80050490
  return; // 80050494
}

// fn_80050498
void f_80050498(Ctx* __restrict c) {
  trace_call(0x80050498u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050498
  c->r[0]=c->lr; // 8005049C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800504A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800504A4
  c->r[31]=c->r[3]|c->r[3]; // 800504A8
  c->lr=0x800504B0u; f_80038CC0(c); // 800504AC
  c->r[7]=0u+0x80420000u; // 800504B0
  c->r[6]=0u+0x80410000u; // 800504B4
  c->r[5]=0u+0x00000000u; // 800504B8
  c->r[4]=0u+0x20E00000u; // 800504BC
  c->r[3]=0u+0x4BF20000u; // 800504C0
  c->r[7]=c->r[7]+0xFFFFFA00u; // 800504C4
  c->r[0]=c->r[3]+0x00001828u; // 800504C8
  c->r[6]=c->r[6]+0xFFFFBE9Fu; // 800504CC
  c->r[4]=c->r[4]+0x00004D37u; // 800504D0
  W32(c->r[31]+0x00000018u,c->r[7]); // 800504D4
  c->r[3]=c->r[31]|c->r[31]; // 800504D8
  W32(c->r[31]+0x00000000u,c->r[6]); // 800504DC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800504E0
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800504E4
  W32(c->r[31]+0x00000010u,c->r[5]); // 800504E8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800504EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800504F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800504F4
  c->lr=c->r[0]; // 800504F8
  c->r[1]=c->r[1]+0x00000010u; // 800504FC
  return; // 80050500
}

// fn_80050504
void f_80050504(Ctx* __restrict c) {
  trace_call(0x80050504u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050504
  c->r[0]=c->lr; // 80050508
  cmps(c,0,(int32_t)c->r[4],0); // 8005050C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050510
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80050514
  c->r[30]=c->r[3]|c->r[3]; // 80050518
  c->r[31]=c->r[4]|c->r[4]; // 8005051C
  if (crb(c,2)) { goto L_80050574; } // 80050520
  c->r[3]=c->r[31]|c->r[31]; // 80050524
  c->lr=0x8005052Cu; f_80244520(c); // 80050528
  c->r[7]=c->r[3]|c->r[3]; // 8005052C
  c->r[9]=c->r[31]|c->r[31]; // 80050530
  c->r[3]=0u+0x00000050u; // 80050534
  c->r[4]=c->r[13]+0xFFFF939Eu; // 80050538
  c->r[5]=0u+0x00000000u; // 8005053C
  c->r[6]=0u+0x00002001u; // 80050540
  c->r[8]=0u+0x00000000u; // 80050544
  c->lr=0x8005054Cu; f_80242DF0(c); // 80050548
  c->r[4]=c->r[3]|c->r[3]; // 8005054C
  c->r[3]=0u+0x00000050u; // 80050550
  c->r[5]=c->r[13]+0xFFFF93A3u; // 80050554
  c->r[6]=0u+0x00000000u; // 80050558
  c->r[7]=0u+0x00001001u; // 8005055C
  c->lr=0x80050564u; f_80244DB0(c); // 80050560
  cmps(c,0,(int32_t)c->r[3],0); // 80050564
  if (crb(c,2)) { goto L_80050594; } // 80050568
  c->lr=0x80050570u; f_80050498(c); // 8005056C
  goto L_80050594; // 80050570
L_80050574:;
  c->r[3]=0u+0x00000050u; // 80050574
  c->r[4]=c->r[13]+0xFFFF93A8u; // 80050578
  c->r[5]=0u+0x00000000u; // 8005057C
  c->r[6]=0u+0x00001001u; // 80050580
  c->lr=0x80050588u; f_80244D20(c); // 80050584
  cmps(c,0,(int32_t)c->r[3],0); // 80050588
  if (crb(c,2)) { goto L_80050594; } // 8005058C
  c->lr=0x80050594u; f_80050498(c); // 80050590
L_80050594:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80050594
  W16(c->r[3]+0x00000014u,c->r[0]); // 80050598
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005059C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800505A0
  c->lr=c->r[0]; // 800505A4
  c->r[1]=c->r[1]+0x00000010u; // 800505A8
  return; // 800505AC
}

// fn_800505B0
void f_800505B0(Ctx* __restrict c) {
  trace_call(0x800505B0u);
  f_80038DD8(c); return; // 800505B0
}

// fn_800505B4
void f_800505B4(Ctx* __restrict c) {
  trace_call(0x800505B4u);
  f_80038EC8(c); return; // 800505B4
}

// fn_800505B8
void f_800505B8(Ctx* __restrict c) {
  trace_call(0x800505B8u);
  f_80038F3C(c); return; // 800505B8
}

// fn_800505BC
void f_800505BC(Ctx* __restrict c) {
  trace_call(0x800505BCu);
  c->r[3]=0u+0xD12F0000u; // 800505BC
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 800505C0
  c->r[0]=c->r[4]-c->r[0]; // 800505C4
  c->r[0]=cntlz(c->r[0]); // 800505C8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800505CC
  return; // 800505D0
}

// fn_800505D4
void f_800505D4(Ctx* __restrict c) {
  trace_call(0x800505D4u);
  c->r[3]=0u+0x00000050u; // 800505D4
  return; // 800505D8
}

// fn_800505DC
void f_800505DC(Ctx* __restrict c) {
  trace_call(0x800505DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800505DC
  c->r[0]=c->lr; // 800505E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800505E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800505E8
  c->r[31]=c->r[3]|c->r[3]; // 800505EC
  c->lr=0x800505F4u; f_80050498(c); // 800505F0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800505F4
  c->r[3]=0u+0x80420000u; // 800505F8
  c->r[3]=c->r[3]+0xFFFFF9C0u; // 800505FC
  W32(c->r[31]+0x00000018u,c->r[3]); // 80050600
  c->r[0]=c->r[0]|0x80000000u; // 80050604
  W32(c->r[31]+0x00000008u,c->r[0]); // 80050608
  c->r[3]=c->r[31]|c->r[31]; // 8005060C
  c->r[12]=R32(c->r[31]+0x00000018u); // 80050610
  c->r[12]=R32(c->r[12]+0x00000024u); // 80050614
  c->ctr=c->r[12]; // 80050618
  if (true) { c->lr=0x80050620u; dispatch(c,c->ctr); } // 8005061C
  c->r[3]=c->r[31]|c->r[31]; // 80050620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050624
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050628
  c->lr=c->r[0]; // 8005062C
  c->r[1]=c->r[1]+0x00000010u; // 80050630
  return; // 80050634
}

// fn_80050638
void f_80050638(Ctx* __restrict c) {
  trace_call(0x80050638u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050638
  c->r[0]=c->lr; // 8005063C
  cmps(c,0,(int32_t)c->r[3],0); // 80050640
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050644
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80050648
  c->r[30]=c->r[3]|c->r[3]; // 8005064C
  c->r[31]=c->r[4]|c->r[4]; // 80050650
  if (crb(c,2)) { goto L_80050674; } // 80050654
  if (crb(c,2)) { goto L_80050664; } // 80050658
  c->r[4]=0u+0x00000000u; // 8005065C
  c->lr=0x80050664u; f_802B1180(c); // 80050660
L_80050664:;
  cmps(c,0,(int32_t)c->r[31],0); // 80050664
  if (!crb(c,1)) { goto L_80050674; } // 80050668
  c->r[3]=c->r[30]|c->r[30]; // 8005066C
  c->lr=0x80050674u; f_80244DC0(c); // 80050670
L_80050674:;
  c->r[3]=c->r[30]|c->r[30]; // 80050674
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80050678
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005067C
  c->lr=c->r[0]; // 80050680
  c->r[1]=c->r[1]+0x00000010u; // 80050684
  return; // 80050688
}

// fn_8005068C
void f_8005068C(Ctx* __restrict c) {
  trace_call(0x8005068Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005068C
  c->r[0]=c->lr; // 80050690
  c->r[3]=0u+0x00000050u; // 80050694
  c->r[4]=c->r[13]+0xFFFF93ADu; // 80050698
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005069C
  c->r[5]=0u+0x00000000u; // 800506A0
  c->r[6]=0u+0x00001001u; // 800506A4
  c->lr=0x800506ACu; f_80244D20(c); // 800506A8
  cmps(c,0,(int32_t)c->r[3],0); // 800506AC
  if (crb(c,2)) { goto L_800506B8; } // 800506B0
  c->lr=0x800506B8u; f_800505DC(c); // 800506B4
L_800506B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800506B8
  c->lr=c->r[0]; // 800506BC
  c->r[1]=c->r[1]+0x00000010u; // 800506C0
  return; // 800506C4
}

// fn_800506C8
void f_800506C8(Ctx* __restrict c) {
  trace_call(0x800506C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800506C8
  c->r[0]=c->lr; // 800506CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800506D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800506D4
  c->r[31]=c->r[3]|c->r[3]; // 800506D8
  c->lr=0x800506E0u; f_80244520(c); // 800506DC
  c->r[7]=c->r[3]|c->r[3]; // 800506E0
  c->r[9]=c->r[31]|c->r[31]; // 800506E4
  c->r[3]=0u+0x00000050u; // 800506E8
  c->r[4]=c->r[13]+0xFFFF93B2u; // 800506EC
  c->r[5]=0u+0x00000000u; // 800506F0
  c->r[6]=0u+0x00002001u; // 800506F4
  c->r[8]=0u+0x00000000u; // 800506F8
  c->lr=0x80050700u; f_80242DF0(c); // 800506FC
  c->r[4]=c->r[3]|c->r[3]; // 80050700
  c->r[3]=0u+0x00000050u; // 80050704
  c->r[5]=c->r[13]+0xFFFF93B7u; // 80050708
  c->r[6]=0u+0x00000000u; // 8005070C
  c->r[7]=0u+0x00001001u; // 80050710
  c->lr=0x80050718u; f_80244DB0(c); // 80050714
  cmps(c,0,(int32_t)c->r[3],0); // 80050718
  if (crb(c,2)) { goto L_80050724; } // 8005071C
  c->lr=0x80050724u; f_800505DC(c); // 80050720
L_80050724:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050724
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050728
  c->lr=c->r[0]; // 8005072C
  c->r[1]=c->r[1]+0x00000010u; // 80050730
  return; // 80050734
}

// fn_80050738
void f_80050738(Ctx* __restrict c) {
  trace_call(0x80050738u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050738
  c->r[0]=c->lr; // 8005073C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050744
  c->r[31]=c->r[3]|c->r[3]; // 80050748
  c->lr=0x80050750u; f_80038CC0(c); // 8005074C
  c->r[7]=0u+0x80420000u; // 80050750
  c->r[5]=0u+0x80410000u; // 80050754
  c->r[6]=0u+0x00000000u; // 80050758
  c->r[4]=0u+0xC43D0000u; // 8005075C
  c->r[3]=0u+0xA0680000u; // 80050760
  c->r[7]=c->r[7]+0xFFFFF984u; // 80050764
  c->r[0]=c->r[3]+0x000075A1u; // 80050768
  c->r[5]=c->r[5]+0xFFFFBEB4u; // 8005076C
  c->r[4]=c->r[4]+0x00002E2Eu; // 80050770
  W32(c->r[31]+0x00000018u,c->r[7]); // 80050774
  c->r[3]=c->r[31]|c->r[31]; // 80050778
  W32(c->r[31]+0x000000A0u,c->r[6]); // 8005077C
  W32(c->r[31]+0x00000000u,c->r[5]); // 80050780
  W32(c->r[31]+0x00000008u,c->r[6]); // 80050784
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80050788
  W32(c->r[31]+0x00000010u,c->r[6]); // 8005078C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80050790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050794
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050798
  c->lr=c->r[0]; // 8005079C
  c->r[1]=c->r[1]+0x00000010u; // 800507A0
  return; // 800507A4
}

// fn_800507A8
void f_800507A8(Ctx* __restrict c) {
  trace_call(0x800507A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800507A8
  c->r[0]=c->lr; // 800507AC
  cmps(c,0,(int32_t)c->r[4],0); // 800507B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800507B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800507B8
  c->r[30]=c->r[3]|c->r[3]; // 800507BC
  c->r[31]=c->r[4]|c->r[4]; // 800507C0
  if (crb(c,2)) { goto L_80050818; } // 800507C4
  c->r[3]=c->r[31]|c->r[31]; // 800507C8
  c->lr=0x800507D0u; f_80244520(c); // 800507CC
  c->r[7]=c->r[3]|c->r[3]; // 800507D0
  c->r[9]=c->r[31]|c->r[31]; // 800507D4
  c->r[3]=0u+0x000000A4u; // 800507D8
  c->r[4]=c->r[13]+0xFFFF93BCu; // 800507DC
  c->r[5]=0u+0x00000000u; // 800507E0
  c->r[6]=0u+0x00002001u; // 800507E4
  c->r[8]=0u+0x00000000u; // 800507E8
  c->lr=0x800507F0u; f_80242DF0(c); // 800507EC
  c->r[4]=c->r[3]|c->r[3]; // 800507F0
  c->r[3]=0u+0x000000A4u; // 800507F4
  c->r[5]=c->r[13]+0xFFFF93C1u; // 800507F8
  c->r[6]=0u+0x00000000u; // 800507FC
  c->r[7]=0u+0x00001001u; // 80050800
  c->lr=0x80050808u; f_80244DB0(c); // 80050804
  cmps(c,0,(int32_t)c->r[3],0); // 80050808
  if (crb(c,2)) { goto L_80050838; } // 8005080C
  c->lr=0x80050814u; f_80050738(c); // 80050810
  goto L_80050838; // 80050814
L_80050818:;
  c->r[3]=0u+0x000000A4u; // 80050818
  c->r[4]=c->r[13]+0xFFFF93C6u; // 8005081C
  c->r[5]=0u+0x00000000u; // 80050820
  c->r[6]=0u+0x00001001u; // 80050824
  c->lr=0x8005082Cu; f_80244D20(c); // 80050828
  cmps(c,0,(int32_t)c->r[3],0); // 8005082C
  if (crb(c,2)) { goto L_80050838; } // 80050830
  c->lr=0x80050838u; f_80050738(c); // 80050834
L_80050838:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80050838
  W16(c->r[3]+0x00000014u,c->r[0]); // 8005083C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80050840
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050844
  c->lr=c->r[0]; // 80050848
  c->r[1]=c->r[1]+0x00000010u; // 8005084C
  return; // 80050850
}

// fn_80050854
void f_80050854(Ctx* __restrict c) {
  trace_call(0x80050854u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050854
  c->r[0]=c->lr; // 80050858
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005085C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80050860
  c->r[29]=c->r[3]|c->r[3]; // 80050864
  c->r[30]=c->r[4]|c->r[4]; // 80050868
  c->lr=0x80050870u; f_80038DD8(c); // 8005086C
  c->r[31]=c->r[3]|c->r[3]; // 80050870
  c->r[3]=c->r[30]|c->r[30]; // 80050874
  c->r[4]=0u+0x00000000u; // 80050878
  c->lr=0x80050880u; f_8030BE30(c); // 8005087C
  W32(c->r[29]+0x00000050u,c->r[3]); // 80050880
  c->r[0]=0u+0x00000000u; // 80050884
  c->r[3]=c->r[30]|c->r[30]; // 80050888
  W32(c->r[29]+0x00000054u,c->r[0]); // 8005088C
  c->lr=0x80050894u; f_8030BD1C(c); // 80050890
  W32(c->r[29]+0x00000058u,c->r[3]); // 80050894
  c->r[3]=c->r[30]|c->r[30]; // 80050898
  c->lr=0x800508A0u; f_8030C0A0(c); // 8005089C
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 800508A0
  c->r[3]=c->r[30]|c->r[30]; // 800508A4
  c->lr=0x800508ACu; f_8030C0A0(c); // 800508A8
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 800508AC
  c->r[3]=c->r[30]|c->r[30]; // 800508B0
  c->lr=0x800508B8u; f_8030C0A0(c); // 800508B4
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 800508B8
  c->r[3]=c->r[30]|c->r[30]; // 800508BC
  c->lr=0x800508C4u; f_8030BD1C(c); // 800508C0
  W32(c->r[29]+0x00000068u,c->r[3]); // 800508C4
  c->r[3]=c->r[30]|c->r[30]; // 800508C8
  c->lr=0x800508D0u; f_8030C0A0(c); // 800508CC
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[1]);} // 800508D0
  c->r[3]=c->r[30]|c->r[30]; // 800508D4
  c->lr=0x800508DCu; f_8030BD1C(c); // 800508D8
  W8(c->r[29]+0x00000070u,c->r[3]); // 800508DC
  c->r[3]=c->r[30]|c->r[30]; // 800508E0
  c->lr=0x800508E8u; f_8030BD1C(c); // 800508E4
  W8(c->r[29]+0x00000071u,c->r[3]); // 800508E8
  c->r[3]=c->r[30]|c->r[30]; // 800508EC
  c->lr=0x800508F4u; f_8030BD1C(c); // 800508F0
  W8(c->r[29]+0x00000072u,c->r[3]); // 800508F4
  c->r[3]=c->r[30]|c->r[30]; // 800508F8
  c->lr=0x80050900u; f_8030BD1C(c); // 800508FC
  W8(c->r[29]+0x00000073u,c->r[3]); // 80050900
  c->r[3]=c->r[30]|c->r[30]; // 80050904
  c->lr=0x8005090Cu; f_8030BD1C(c); // 80050908
  W32(c->r[29]+0x00000074u,c->r[3]); // 8005090C
  c->r[3]=c->r[30]|c->r[30]; // 80050910
  c->lr=0x80050918u; f_8030BD1C(c); // 80050914
  W32(c->r[29]+0x00000078u,c->r[3]); // 80050918
  c->r[3]=c->r[30]|c->r[30]; // 8005091C
  c->lr=0x80050924u; f_8030BD1C(c); // 80050920
  W32(c->r[29]+0x0000007Cu,c->r[3]); // 80050924
  c->r[3]=c->r[30]|c->r[30]; // 80050928
  c->lr=0x80050930u; f_8030BD1C(c); // 8005092C
  W8(c->r[29]+0x00000080u,c->r[3]); // 80050930
  c->r[3]=c->r[30]|c->r[30]; // 80050934
  c->lr=0x8005093Cu; f_8030C0A0(c); // 80050938
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[1]);} // 8005093C
  c->r[3]=c->r[30]|c->r[30]; // 80050940
  c->lr=0x80050948u; f_8030BD1C(c); // 80050944
  W8(c->r[29]+0x00000088u,c->r[3]); // 80050948
  c->r[3]=c->r[30]|c->r[30]; // 8005094C
  c->lr=0x80050954u; f_8030C0A0(c); // 80050950
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[1]);} // 80050954
  c->r[3]=c->r[30]|c->r[30]; // 80050958
  c->lr=0x80050960u; f_8030BD1C(c); // 8005095C
  W8(c->r[29]+0x00000090u,c->r[3]); // 80050960
  c->r[3]=c->r[30]|c->r[30]; // 80050964
  c->lr=0x8005096Cu; f_8030C0A0(c); // 80050968
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[1]);} // 8005096C
  c->r[3]=c->r[30]|c->r[30]; // 80050970
  c->lr=0x80050978u; f_8030BD1C(c); // 80050974
  W8(c->r[29]+0x00000098u,c->r[3]); // 80050978
  c->r[3]=c->r[30]|c->r[30]; // 8005097C
  c->lr=0x80050984u; f_8030BD1C(c); // 80050980
  W8(c->r[29]+0x00000099u,c->r[3]); // 80050984
  c->r[3]=c->r[30]|c->r[30]; // 80050988
  c->lr=0x80050990u; f_8030BD1C(c); // 8005098C
  W8(c->r[29]+0x0000009Au,c->r[3]); // 80050990
  c->r[3]=c->r[30]|c->r[30]; // 80050994
  c->lr=0x8005099Cu; f_8030BD1C(c); // 80050998
  W8(c->r[29]+0x0000009Bu,c->r[3]); // 8005099C
  c->r[3]=c->r[30]|c->r[30]; // 800509A0
  c->lr=0x800509A8u; f_8030BD1C(c); // 800509A4
  W8(c->r[29]+0x0000009Cu,c->r[3]); // 800509A8
  c->r[3]=c->r[31]|c->r[31]; // 800509AC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800509B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800509B4
  c->lr=c->r[0]; // 800509B8
  c->r[1]=c->r[1]+0x00000020u; // 800509BC
  return; // 800509C0
}

// fn_800509C4
void f_800509C4(Ctx* __restrict c) {
  trace_call(0x800509C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800509C4
  c->r[0]=c->lr; // 800509C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800509CC
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800509D0
  c->r[27]=c->r[3]|c->r[3]; // 800509D4
  c->r[28]=c->r[4]|c->r[4]; // 800509D8
  c->r[29]=c->r[5]|c->r[5]; // 800509DC
  c->r[30]=c->r[6]|c->r[6]; // 800509E0
  c->r[7]=R32(c->r[3]+0x000000A0u); // 800509E4
  cmps(c,0,(int32_t)c->r[7],0); // 800509E8
  if (!crb(c,0)) { goto L_800509FC; } // 800509EC
  c->r[0]=addc(c,~c->r[7],0x00000001u,1); // 800509F0
  W32(c->r[3]+0x000000A0u,c->r[0]); // 800509F4
  goto L_80050A0C; // 800509F8
L_800509FC:;
  c->r[0]=c->r[7]+0x00000001u; // 800509FC
  W32(c->r[3]+0x000000A0u,c->r[0]); // 80050A00
  cmps(c,0,(int32_t)c->r[0],1); // 80050A04
  if (crb(c,1)) { goto L_80050ACC; } // 80050A08
L_80050A0C:;
  c->r[3]=c->r[27]|c->r[27]; // 80050A0C
  c->r[4]=c->r[28]|c->r[28]; // 80050A10
  c->r[5]=c->r[29]|c->r[29]; // 80050A14
  c->r[6]=c->r[30]|c->r[30]; // 80050A18
  c->lr=0x80050A20u; f_802B11C0(c); // 80050A1C
  c->r[4]=R32(c->r[27]+0x00000050u); // 80050A20
  cmps(c,0,(int32_t)c->r[4],0); // 80050A24
  if (crb(c,2)) { goto L_80050ACC; } // 80050A28
  c->r[0]=0u+0x00000001u; // 80050A2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80050A30
  c->r[6]=c->r[28]|c->r[28]; // 80050A34
  c->r[7]=c->r[29]|c->r[29]; // 80050A38
  c->r[3]=R32(c->r[13]+0xFFFFE830u); // 80050A3C
  c->r[8]=c->r[30]|c->r[30]; // 80050A40
  c->r[9]=R32(c->r[27]+0x00000058u); // 80050A44
  c->r[5]=0u+0x00000000u; // 80050A48
  c->r[10]=0u+0x00000001u; // 80050A4C
  c->lr=0x80050A54u; f_80281A84(c); // 80050A50
  cmps(c,0,(int32_t)c->r[3],0); // 80050A54
  W32(c->r[27]+0x00000054u,c->r[3]); // 80050A58
  if (crb(c,2)) { goto L_80050A68; } // 80050A5C
  c->lr=0x80050A64u; f_80295B6C(c); // 80050A60
  goto L_80050ACC; // 80050A64
L_80050A68:;
  c->r[3]=R32(c->r[27]+0x00000058u); // 80050A68
  c->r[4]=c->r[30]|c->r[30]; // 80050A6C
  c->r[5]=c->r[29]|c->r[29]; // 80050A70
  c->lr=0x80050A78u; f_802C0F98(c); // 80050A74
  c->r[31]=c->r[3]|c->r[3]; // 80050A78
  c->r[3]=0u+0x00000044u; // 80050A7C
  c->r[4]=c->r[13]+0xFFFF93CBu; // 80050A80
  c->r[5]=0u+0x00000000u; // 80050A84
  c->r[6]=0u+0x00001001u; // 80050A88
  c->lr=0x80050A90u; f_80244D20(c); // 80050A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80050A90
  if (crb(c,2)) { goto L_80050AA8; } // 80050A94
  c->r[5]=R32(c->r[27]+0x00000050u); // 80050A98
  c->r[4]=c->r[31]|c->r[31]; // 80050A9C
  c->r[6]=0u+0x00000000u; // 80050AA0
  c->lr=0x80050AA8u; f_8029316C(c); // 80050AA4
L_80050AA8:;
  W32(c->r[27]+0x00000054u,c->r[3]); // 80050AA8
  c->r[4]=c->r[28]|c->r[28]; // 80050AAC
  c->r[7]=R32(c->r[27]+0x00000058u); // 80050AB0
  c->r[5]=c->r[29]|c->r[29]; // 80050AB4
  c->r[6]=c->r[30]|c->r[30]; // 80050AB8
  c->r[8]=0u+0x00000001u; // 80050ABC
  c->r[9]=0u+0x00000000u; // 80050AC0
  c->lr=0x80050AC8u; f_8027FFF4(c); // 80050AC4
  W32(c->r[27]+0x00000054u,c->r[3]); // 80050AC8
L_80050ACC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80050ACC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80050AD0
  c->lr=c->r[0]; // 80050AD4
  c->r[1]=c->r[1]+0x00000030u; // 80050AD8
  return; // 80050ADC
}

// fn_80050AE0
void f_80050AE0(Ctx* __restrict c) {
  trace_call(0x80050AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050AE0
  c->r[0]=c->lr; // 80050AE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050AE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050AEC
  c->r[31]=c->r[3]|c->r[3]; // 80050AF0
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80050AF4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80050AF8
  W32(c->r[3]+0x000000A0u,c->r[0]); // 80050AFC
  if (!crb(c,2)) { goto L_80050B20; } // 80050B00
  c->lr=0x80050B08u; f_802B11D0(c); // 80050B04
  c->r[3]=R32(c->r[31]+0x00000054u); // 80050B08
  cmps(c,0,(int32_t)c->r[3],0); // 80050B0C
  if (crb(c,2)) { goto L_80050B20; } // 80050B10
  c->lr=0x80050B18u; f_80295B7C(c); // 80050B14
  c->r[0]=0u+0x00000000u; // 80050B18
  W32(c->r[31]+0x00000054u,c->r[0]); // 80050B1C
L_80050B20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050B20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050B24
  c->lr=c->r[0]; // 80050B28
  c->r[1]=c->r[1]+0x00000010u; // 80050B2C
  return; // 80050B30
}

// fn_80050B34
void f_80050B34(Ctx* __restrict c) {
  trace_call(0x80050B34u);
  f_80038EC8(c); return; // 80050B34
}

// fn_80050B38
void f_80050B38(Ctx* __restrict c) {
  trace_call(0x80050B38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050B38
  c->r[0]=c->lr; // 80050B3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050B40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050B44
  c->r[31]=c->r[3]|c->r[3]; // 80050B48
  c->lr=0x80050B50u; f_80038F3C(c); // 80050B4C
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050B50
  c->r[4]=0u+0x00000000u; // 80050B54
  c->r[0]=0u+0x0000007Fu; // 80050B58
  {uint32_t ea=c->r[2]+0xFFFF86E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80050B5C
  c->r[3]=0u+0x00000004u; // 80050B60
  W32(c->r[31]+0x00000050u,c->r[4]); // 80050B64
  W32(c->r[31]+0x00000054u,c->r[4]); // 80050B68
  W32(c->r[31]+0x00000058u,c->r[3]); // 80050B6C
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[1]);} // 80050B70
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 80050B74
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 80050B78
  W32(c->r[31]+0x00000068u,c->r[3]); // 80050B7C
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 80050B80
  W8(c->r[31]+0x00000070u,c->r[0]); // 80050B84
  W8(c->r[31]+0x00000071u,c->r[0]); // 80050B88
  W8(c->r[31]+0x00000072u,c->r[0]); // 80050B8C
  W8(c->r[31]+0x00000073u,c->r[0]); // 80050B90
  W32(c->r[31]+0x00000074u,c->r[4]); // 80050B94
  W32(c->r[31]+0x00000078u,c->r[4]); // 80050B98
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 80050B9C
  W8(c->r[31]+0x00000080u,c->r[4]); // 80050BA0
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 80050BA4
  W8(c->r[31]+0x00000088u,c->r[4]); // 80050BA8
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 80050BAC
  W8(c->r[31]+0x00000090u,c->r[4]); // 80050BB0
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 80050BB4
  W8(c->r[31]+0x00000098u,c->r[4]); // 80050BB8
  W8(c->r[31]+0x00000099u,c->r[0]); // 80050BBC
  W8(c->r[31]+0x0000009Au,c->r[0]); // 80050BC0
  W8(c->r[31]+0x0000009Bu,c->r[0]); // 80050BC4
  W8(c->r[31]+0x0000009Cu,c->r[0]); // 80050BC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050BD0
  c->lr=c->r[0]; // 80050BD4
  c->r[1]=c->r[1]+0x00000010u; // 80050BD8
  return; // 80050BDC
}

// fn_80050BE0
void f_80050BE0(Ctx* __restrict c) {
  trace_call(0x80050BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050BE0
  c->r[0]=c->lr; // 80050BE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80050BE8
  c->r[11]=c->r[1]+0x00000020u; // 80050BEC
  c->lr=0x80050BF4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80050BF0
  c->r[29]=c->r[3]|c->r[3]; // 80050BF4
  c->r[30]=c->r[4]|c->r[4]; // 80050BF8
  c->r[31]=c->r[5]|c->r[5]; // 80050BFC
  c->r[28]=c->r[7]|c->r[7]; // 80050C00
  c->r[6]=0u+0x00000000u; // 80050C04
  c->lr=0x80050C0Cu; f_80038F88(c); // 80050C08
  cmps(c,0,(int32_t)c->r[31],0); // 80050C0C
  if (crb(c,2)) { goto L_80050C18; } // 80050C10
  goto L_80050C1C; // 80050C14
L_80050C18:;
  c->r[31]=c->r[29]|c->r[29]; // 80050C18
L_80050C1C:;
  c->r[3]=c->r[31]+0x00000050u; // 80050C1C
  c->r[4]=c->r[30]+0x00000050u; // 80050C20
  c->lr=0x80050C28u; f_8003BDD0(c); // 80050C24
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050C28
  cmps(c,0,(int32_t)c->r[28],0); // 80050C2C
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 80050C30
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050C34
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 80050C38
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050C3C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 80050C40
  c->r[0]=R32(c->r[30]+0x00000068u); // 80050C44
  W32(c->r[31]+0x00000068u,c->r[0]); // 80050C48
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050C4C
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 80050C50
  c->r[0]=R8(c->r[30]+0x00000070u); // 80050C54
  W8(c->r[31]+0x00000070u,c->r[0]); // 80050C58
  c->r[0]=R8(c->r[30]+0x00000071u); // 80050C5C
  W8(c->r[31]+0x00000071u,c->r[0]); // 80050C60
  c->r[0]=R8(c->r[30]+0x00000072u); // 80050C64
  W8(c->r[31]+0x00000072u,c->r[0]); // 80050C68
  c->r[0]=R8(c->r[30]+0x00000073u); // 80050C6C
  W8(c->r[31]+0x00000073u,c->r[0]); // 80050C70
  c->r[0]=R32(c->r[30]+0x00000074u); // 80050C74
  W32(c->r[31]+0x00000074u,c->r[0]); // 80050C78
  c->r[0]=R32(c->r[30]+0x00000078u); // 80050C7C
  W32(c->r[31]+0x00000078u,c->r[0]); // 80050C80
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 80050C84
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 80050C88
  c->r[0]=R8(c->r[30]+0x00000080u); // 80050C8C
  W8(c->r[31]+0x00000080u,c->r[0]); // 80050C90
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050C94
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 80050C98
  c->r[0]=R8(c->r[30]+0x00000088u); // 80050C9C
  W8(c->r[31]+0x00000088u,c->r[0]); // 80050CA0
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050CA4
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 80050CA8
  c->r[0]=R8(c->r[30]+0x00000090u); // 80050CAC
  W8(c->r[31]+0x00000090u,c->r[0]); // 80050CB0
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80050CB4
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 80050CB8
  c->r[0]=R8(c->r[30]+0x00000098u); // 80050CBC
  W8(c->r[31]+0x00000098u,c->r[0]); // 80050CC0
  c->r[0]=R8(c->r[30]+0x00000099u); // 80050CC4
  W8(c->r[31]+0x00000099u,c->r[0]); // 80050CC8
  c->r[0]=R8(c->r[30]+0x0000009Au); // 80050CCC
  W8(c->r[31]+0x0000009Au,c->r[0]); // 80050CD0
  c->r[0]=R8(c->r[30]+0x0000009Bu); // 80050CD4
  W8(c->r[31]+0x0000009Bu,c->r[0]); // 80050CD8
  c->r[0]=R8(c->r[30]+0x0000009Cu); // 80050CDC
  W8(c->r[31]+0x0000009Cu,c->r[0]); // 80050CE0
  if (crb(c,2)) { goto L_80050D08; } // 80050CE4
  c->r[3]=R32(c->r[29]+0x000000A0u); // 80050CE8
  cmps(c,0,(int32_t)c->r[3],0); // 80050CEC
  if (crb(c,1)) { goto L_80050D00; } // 80050CF0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80050CF4
  W32(c->r[29]+0x000000A0u,c->r[0]); // 80050CF8
  goto L_80050D08; // 80050CFC
L_80050D00:;
  c->r[0]=c->r[3]+0x00000001u; // 80050D00
  W32(c->r[29]+0x000000A0u,c->r[0]); // 80050D04
L_80050D08:;
  c->r[11]=c->r[1]+0x00000020u; // 80050D08
  c->lr=0x80050D10u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80050D0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80050D10
  c->lr=c->r[0]; // 80050D14
  c->r[1]=c->r[1]+0x00000020u; // 80050D18
  return; // 80050D1C
}

// fn_80050D20
void f_80050D20(Ctx* __restrict c) {
  trace_call(0x80050D20u);
  c->r[3]=0u+0xD12F0000u; // 80050D20
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80050D24
  c->r[0]=c->r[4]-c->r[0]; // 80050D28
  c->r[0]=cntlz(c->r[0]); // 80050D2C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80050D30
  return; // 80050D34
}

// fn_80050D38
void f_80050D38(Ctx* __restrict c) {
  trace_call(0x80050D38u);
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80050D38
  c->r[0]=0u+0x43300000u; // 80050D3C
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050D40
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 80050D44
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80050D48
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80050D4C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 80050D50
  W32(c->r[1]+0x00000008u,c->r[0]); // 80050D54
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050D58
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[0]=RF64(ea);} // 80050D5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80050D60
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050D64
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[3]);} // 80050D68
  {uint32_t ea=c->r[4]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 80050D6C
  {uint32_t ea=c->r[5]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 80050D70
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050D74
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050D78
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050D7C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[3]);} // 80050D80
  {uint32_t ea=c->r[4]+0x00000064u; c->f[4]=c->ps1[4]=RF32(ea);} // 80050D84
  {uint32_t ea=c->r[5]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80050D88
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050D8C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050D90
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050D94
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[3]);} // 80050D98
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80050D9C
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80050DA0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050DA4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050DA8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050DAC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[3]);} // 80050DB0
  c->r[6]=R8(c->r[4]+0x00000070u); // 80050DB4
  c->r[0]=R8(c->r[5]+0x00000070u); // 80050DB8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80050DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050DC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050DC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050DC8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050DCC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80050DD0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050DD4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050DD8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050DDC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80050DE0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 80050DE4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80050DE8
  W8(c->r[3]+0x00000070u,c->r[0]); // 80050DEC
  c->r[6]=R8(c->r[4]+0x00000071u); // 80050DF0
  c->r[0]=R8(c->r[5]+0x00000071u); // 80050DF4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80050DF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050DFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050E00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050E04
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050E08
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80050E0C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050E10
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050E14
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050E18
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80050E1C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[3]);} // 80050E20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80050E24
  W8(c->r[3]+0x00000071u,c->r[0]); // 80050E28
  c->r[6]=R8(c->r[4]+0x00000072u); // 80050E2C
  c->r[0]=R8(c->r[5]+0x00000072u); // 80050E30
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80050E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050E38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050E3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050E40
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050E44
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80050E48
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050E4C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050E50
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050E54
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80050E58
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[3]);} // 80050E5C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80050E60
  W8(c->r[3]+0x00000072u,c->r[0]); // 80050E64
  c->r[6]=R8(c->r[4]+0x00000073u); // 80050E68
  c->r[0]=R8(c->r[5]+0x00000073u); // 80050E6C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80050E70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050E74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050E78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050E7C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050E80
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80050E84
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050E88
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050E8C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050E90
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80050E94
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[3]);} // 80050E98
  c->r[0]=R32(c->r[1]+0x00000034u); // 80050E9C
  W8(c->r[3]+0x00000073u,c->r[0]); // 80050EA0
  {uint32_t ea=c->r[4]+0x00000084u; c->f[4]=c->ps1[4]=RF32(ea);} // 80050EA4
  {uint32_t ea=c->r[5]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 80050EA8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050EAC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050EB0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050EB4
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[3]);} // 80050EB8
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80050EBC
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80050EC0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050EC4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050EC8
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050ECC
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[3]);} // 80050ED0
  {uint32_t ea=c->r[4]+0x00000094u; c->f[4]=c->ps1[4]=RF32(ea);} // 80050ED4
  {uint32_t ea=c->r[5]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 80050ED8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050EDC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050EE0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050EE4
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[3]);} // 80050EE8
  c->r[6]=R8(c->r[4]+0x00000099u); // 80050EEC
  c->r[0]=R8(c->r[5]+0x00000099u); // 80050EF0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80050EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050EF8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050EFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050F00
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050F04
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80050F08
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050F0C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050F10
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050F14
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80050F18
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80050F1C
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80050F20
  W8(c->r[3]+0x00000099u,c->r[0]); // 80050F24
  c->r[6]=R8(c->r[4]+0x0000009Au); // 80050F28
  c->r[0]=R8(c->r[5]+0x0000009Au); // 80050F2C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80050F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050F34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050F38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050F3C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050F40
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80050F44
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050F48
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050F4C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050F50
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80050F54
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 80050F58
  c->r[0]=R32(c->r[1]+0x00000044u); // 80050F5C
  W8(c->r[3]+0x0000009Au,c->r[0]); // 80050F60
  c->r[6]=R8(c->r[4]+0x0000009Bu); // 80050F64
  c->r[0]=R8(c->r[5]+0x0000009Bu); // 80050F68
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80050F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050F70
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050F74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050F78
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050F7C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[0]); // 80050F80
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 80050F84
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80050F88
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80050F8C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80050F90
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[3]);} // 80050F94
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80050F98
  W8(c->r[3]+0x0000009Bu,c->r[0]); // 80050F9C
  c->r[4]=R8(c->r[4]+0x0000009Cu); // 80050FA0
  c->r[0]=R8(c->r[5]+0x0000009Cu); // 80050FA4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80050FA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050FAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 80050FB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 80050FB4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 80050FB8
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 80050FBC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80050FC0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80050FC4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80050FC8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80050FCC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 80050FD0
  c->r[0]=R32(c->r[1]+0x00000054u); // 80050FD4
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 80050FD8
  c->r[1]=c->r[1]+0x00000060u; // 80050FDC
  return; // 80050FE0
}

// fn_80050FE4
void f_80050FE4(Ctx* __restrict c) {
  trace_call(0x80050FE4u);
  c->r[3]=0u+0x000000A4u; // 80050FE4
  return; // 80050FE8
}

// fn_80050FEC
void f_80050FEC(Ctx* __restrict c) {
  trace_call(0x80050FECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050FEC
  c->r[0]=c->lr; // 80050FF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050FF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050FF8
  c->r[31]=c->r[3]|c->r[3]; // 80050FFC
  c->lr=0x80051004u; f_80050738(c); // 80051000
  c->r[0]=R32(c->r[31]+0x00000008u); // 80051004
  c->r[3]=0u+0x80420000u; // 80051008
  c->r[3]=c->r[3]+0xFFFFF944u; // 8005100C
  W32(c->r[31]+0x00000018u,c->r[3]); // 80051010
  c->r[0]=c->r[0]|0x80000000u; // 80051014
  W32(c->r[31]+0x00000008u,c->r[0]); // 80051018
  c->r[3]=c->r[31]|c->r[31]; // 8005101C
  c->r[12]=R32(c->r[31]+0x00000018u); // 80051020
  c->r[12]=R32(c->r[12]+0x00000024u); // 80051024
  c->ctr=c->r[12]; // 80051028
  if (true) { c->lr=0x80051030u; dispatch(c,c->ctr); } // 8005102C
  c->r[3]=c->r[31]|c->r[31]; // 80051030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051034
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051038
  c->lr=c->r[0]; // 8005103C
  c->r[1]=c->r[1]+0x00000010u; // 80051040
  return; // 80051044
}

// fn_80051048
void f_80051048(Ctx* __restrict c) {
  trace_call(0x80051048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051048
  c->r[0]=c->lr; // 8005104C
  cmps(c,0,(int32_t)c->r[3],0); // 80051050
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051054
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80051058
  c->r[30]=c->r[3]|c->r[3]; // 8005105C
  c->r[31]=c->r[4]|c->r[4]; // 80051060
  if (crb(c,2)) { goto L_80051084; } // 80051064
  if (crb(c,2)) { goto L_80051074; } // 80051068
  c->r[4]=0u+0x00000000u; // 8005106C
  c->lr=0x80051074u; f_802B1180(c); // 80051070
L_80051074:;
  cmps(c,0,(int32_t)c->r[31],0); // 80051074
  if (!crb(c,1)) { goto L_80051084; } // 80051078
  c->r[3]=c->r[30]|c->r[30]; // 8005107C
  c->lr=0x80051084u; f_80244DC0(c); // 80051080
L_80051084:;
  c->r[3]=c->r[30]|c->r[30]; // 80051084
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80051088
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005108C
  c->lr=c->r[0]; // 80051090
  c->r[1]=c->r[1]+0x00000010u; // 80051094
  return; // 80051098
}

// fn_8005109C
void f_8005109C(Ctx* __restrict c) {
  trace_call(0x8005109Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005109C
  c->r[0]=c->lr; // 800510A0
  c->r[3]=0u+0x000000A4u; // 800510A4
  c->r[4]=c->r[13]+0xFFFF93D0u; // 800510A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800510AC
  c->r[5]=0u+0x00000000u; // 800510B0
  c->r[6]=0u+0x00001001u; // 800510B4
  c->lr=0x800510BCu; f_80244D20(c); // 800510B8
  cmps(c,0,(int32_t)c->r[3],0); // 800510BC
  if (crb(c,2)) { goto L_800510C8; } // 800510C0
  c->lr=0x800510C8u; f_80050FEC(c); // 800510C4
L_800510C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800510C8
  c->lr=c->r[0]; // 800510CC
  c->r[1]=c->r[1]+0x00000010u; // 800510D0
  return; // 800510D4
}

// fn_800510D8
void f_800510D8(Ctx* __restrict c) {
  trace_call(0x800510D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800510D8
  c->r[0]=c->lr; // 800510DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800510E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800510E4
  c->r[31]=c->r[3]|c->r[3]; // 800510E8
  c->lr=0x800510F0u; f_80244520(c); // 800510EC
  c->r[7]=c->r[3]|c->r[3]; // 800510F0
  c->r[9]=c->r[31]|c->r[31]; // 800510F4
  c->r[3]=0u+0x000000A4u; // 800510F8
  c->r[4]=c->r[13]+0xFFFF93D5u; // 800510FC
  c->r[5]=0u+0x00000000u; // 80051100
  c->r[6]=0u+0x00002001u; // 80051104
  c->r[8]=0u+0x00000000u; // 80051108
  c->lr=0x80051110u; f_80242DF0(c); // 8005110C
  c->r[4]=c->r[3]|c->r[3]; // 80051110
  c->r[3]=0u+0x000000A4u; // 80051114
  c->r[5]=c->r[13]+0xFFFF93DAu; // 80051118
  c->r[6]=0u+0x00000000u; // 8005111C
  c->r[7]=0u+0x00001001u; // 80051120
  c->lr=0x80051128u; f_80244DB0(c); // 80051124
  cmps(c,0,(int32_t)c->r[3],0); // 80051128
  if (crb(c,2)) { goto L_80051134; } // 8005112C
  c->lr=0x80051134u; f_80050FEC(c); // 80051130
L_80051134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051134
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051138
  c->lr=c->r[0]; // 8005113C
  c->r[1]=c->r[1]+0x00000010u; // 80051140
  return; // 80051144
}

// fn_80051148
void f_80051148(Ctx* __restrict c) {
  trace_call(0x80051148u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051148
  c->r[0]=c->lr; // 8005114C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051150
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051154
  c->r[31]=c->r[3]|c->r[3]; // 80051158
  c->lr=0x80051160u; f_80038CC0(c); // 8005115C
  c->r[7]=0u+0x80420000u; // 80051160
  c->r[6]=0u+0x80410000u; // 80051164
  c->r[5]=0u+0x00000000u; // 80051168
  c->r[4]=0u+0x20E00000u; // 8005116C
  c->r[3]=0u+0x25260000u; // 80051170
  c->r[7]=c->r[7]+0xFFFFF908u; // 80051174
  c->r[0]=c->r[3]+0x00001773u; // 80051178
  c->r[6]=c->r[6]+0xFFFFBEC4u; // 8005117C
  c->r[4]=c->r[4]+0x00004D37u; // 80051180
  W32(c->r[31]+0x00000018u,c->r[7]); // 80051184
  c->r[3]=c->r[31]|c->r[31]; // 80051188
  W32(c->r[31]+0x00000000u,c->r[6]); // 8005118C
  W32(c->r[31]+0x00000008u,c->r[5]); // 80051190
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80051194
  W32(c->r[31]+0x00000010u,c->r[5]); // 80051198
  W32(c->r[31]+0x00000004u,c->r[0]); // 8005119C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800511A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800511A4
  c->lr=c->r[0]; // 800511A8
  c->r[1]=c->r[1]+0x00000010u; // 800511AC
  return; // 800511B0
}

// fn_800511B4
void f_800511B4(Ctx* __restrict c) {
  trace_call(0x800511B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800511B4
  c->r[0]=c->lr; // 800511B8
  cmps(c,0,(int32_t)c->r[4],0); // 800511BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800511C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800511C4
  c->r[30]=c->r[3]|c->r[3]; // 800511C8
  c->r[31]=c->r[4]|c->r[4]; // 800511CC
  if (crb(c,2)) { goto L_80051224; } // 800511D0
  c->r[3]=c->r[31]|c->r[31]; // 800511D4
  c->lr=0x800511DCu; f_80244520(c); // 800511D8
  c->r[7]=c->r[3]|c->r[3]; // 800511DC
  c->r[9]=c->r[31]|c->r[31]; // 800511E0
  c->r[3]=0u+0x00000050u; // 800511E4
  c->r[4]=c->r[13]+0xFFFF93DFu; // 800511E8
  c->r[5]=0u+0x00000000u; // 800511EC
  c->r[6]=0u+0x00002001u; // 800511F0
  c->r[8]=0u+0x00000000u; // 800511F4
  c->lr=0x800511FCu; f_80242DF0(c); // 800511F8
  c->r[4]=c->r[3]|c->r[3]; // 800511FC
  c->r[3]=0u+0x00000050u; // 80051200
  c->r[5]=c->r[13]+0xFFFF93E4u; // 80051204
  c->r[6]=0u+0x00000000u; // 80051208
  c->r[7]=0u+0x00001001u; // 8005120C
  c->lr=0x80051214u; f_80244DB0(c); // 80051210
  cmps(c,0,(int32_t)c->r[3],0); // 80051214
  if (crb(c,2)) { goto L_80051244; } // 80051218
  c->lr=0x80051220u; f_80051148(c); // 8005121C
  goto L_80051244; // 80051220
L_80051224:;
  c->r[3]=0u+0x00000050u; // 80051224
  c->r[4]=c->r[13]+0xFFFF93E9u; // 80051228
  c->r[5]=0u+0x00000000u; // 8005122C
  c->r[6]=0u+0x00001001u; // 80051230
  c->lr=0x80051238u; f_80244D20(c); // 80051234
  cmps(c,0,(int32_t)c->r[3],0); // 80051238
  if (crb(c,2)) { goto L_80051244; } // 8005123C
  c->lr=0x80051244u; f_80051148(c); // 80051240
L_80051244:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80051244
  W16(c->r[3]+0x00000014u,c->r[0]); // 80051248
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005124C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051250
  c->lr=c->r[0]; // 80051254
  c->r[1]=c->r[1]+0x00000010u; // 80051258
  return; // 8005125C
}

// fn_80051260
void f_80051260(Ctx* __restrict c) {
  trace_call(0x80051260u);
  f_80038DD8(c); return; // 80051260
}

// fn_80051264
void f_80051264(Ctx* __restrict c) {
  trace_call(0x80051264u);
  f_80038EC8(c); return; // 80051264
}

// fn_80051268
void f_80051268(Ctx* __restrict c) {
  trace_call(0x80051268u);
  f_80038F3C(c); return; // 80051268
}

// fn_8005126C
void f_8005126C(Ctx* __restrict c) {
  trace_call(0x8005126Cu);
  c->r[3]=0u+0xD12F0000u; // 8005126C
  c->r[0]=c->r[3]+0xFFFFE3CBu; // 80051270
  c->r[0]=c->r[4]-c->r[0]; // 80051274
  c->r[0]=cntlz(c->r[0]); // 80051278
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8005127C
  return; // 80051280
}

// fn_80051284
void f_80051284(Ctx* __restrict c) {
  trace_call(0x80051284u);
  c->r[3]=0u+0x00000050u; // 80051284
  return; // 80051288
}

// fn_8005128C
void f_8005128C(Ctx* __restrict c) {
  trace_call(0x8005128Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005128C
  c->r[0]=c->lr; // 80051290
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051298
  c->r[31]=c->r[3]|c->r[3]; // 8005129C
  c->lr=0x800512A4u; f_80051148(c); // 800512A0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800512A4
  c->r[3]=0u+0x80420000u; // 800512A8
  c->r[3]=c->r[3]+0xFFFFF8C8u; // 800512AC
  W32(c->r[31]+0x00000018u,c->r[3]); // 800512B0
  c->r[0]=c->r[0]|0x80000000u; // 800512B4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800512B8
  c->r[3]=c->r[31]|c->r[31]; // 800512BC
  c->r[12]=R32(c->r[31]+0x00000018u); // 800512C0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800512C4
  c->ctr=c->r[12]; // 800512C8
  if (true) { c->lr=0x800512D0u; dispatch(c,c->ctr); } // 800512CC
  c->r[3]=c->r[31]|c->r[31]; // 800512D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800512D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800512D8
  c->lr=c->r[0]; // 800512DC
  c->r[1]=c->r[1]+0x00000010u; // 800512E0
  return; // 800512E4
}

// fn_800512E8
void f_800512E8(Ctx* __restrict c) {
  trace_call(0x800512E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800512E8
  c->r[0]=c->lr; // 800512EC
  cmps(c,0,(int32_t)c->r[3],0); // 800512F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800512F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800512F8
  c->r[30]=c->r[3]|c->r[3]; // 800512FC
  c->r[31]=c->r[4]|c->r[4]; // 80051300
  if (crb(c,2)) { goto L_80051324; } // 80051304
  if (crb(c,2)) { goto L_80051314; } // 80051308
  c->r[4]=0u+0x00000000u; // 8005130C
  c->lr=0x80051314u; f_802B1180(c); // 80051310
L_80051314:;
  cmps(c,0,(int32_t)c->r[31],0); // 80051314
  if (!crb(c,1)) { goto L_80051324; } // 80051318
  c->r[3]=c->r[30]|c->r[30]; // 8005131C
  c->lr=0x80051324u; f_80244DC0(c); // 80051320
L_80051324:;
  c->r[3]=c->r[30]|c->r[30]; // 80051324
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80051328
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005132C
  c->lr=c->r[0]; // 80051330
  c->r[1]=c->r[1]+0x00000010u; // 80051334
  return; // 80051338
}

// fn_8005133C
void f_8005133C(Ctx* __restrict c) {
  trace_call(0x8005133Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005133C
  c->r[0]=c->lr; // 80051340
  c->r[3]=0u+0x00000050u; // 80051344
  c->r[4]=c->r[13]+0xFFFF93EEu; // 80051348
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005134C
  c->r[5]=0u+0x00000000u; // 80051350
  c->r[6]=0u+0x00001001u; // 80051354
  c->lr=0x8005135Cu; f_80244D20(c); // 80051358
  cmps(c,0,(int32_t)c->r[3],0); // 8005135C
  if (crb(c,2)) { goto L_80051368; } // 80051360
  c->lr=0x80051368u; f_8005128C(c); // 80051364
L_80051368:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051368
  c->lr=c->r[0]; // 8005136C
  c->r[1]=c->r[1]+0x00000010u; // 80051370
  return; // 80051374
}

// fn_80051378
void f_80051378(Ctx* __restrict c) {
  trace_call(0x80051378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051378
  c->r[0]=c->lr; // 8005137C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051384
  c->r[31]=c->r[3]|c->r[3]; // 80051388
  c->lr=0x80051390u; f_80244520(c); // 8005138C
  c->r[7]=c->r[3]|c->r[3]; // 80051390
  c->r[9]=c->r[31]|c->r[31]; // 80051394
  c->r[3]=0u+0x00000050u; // 80051398
  c->r[4]=c->r[13]+0xFFFF93F3u; // 8005139C
  c->r[5]=0u+0x00000000u; // 800513A0
  c->r[6]=0u+0x00002001u; // 800513A4
  c->r[8]=0u+0x00000000u; // 800513A8
  c->lr=0x800513B0u; f_80242DF0(c); // 800513AC
  c->r[4]=c->r[3]|c->r[3]; // 800513B0
  c->r[3]=0u+0x00000050u; // 800513B4
  c->r[5]=c->r[13]+0xFFFF93F8u; // 800513B8
  c->r[6]=0u+0x00000000u; // 800513BC
  c->r[7]=0u+0x00001001u; // 800513C0
  c->lr=0x800513C8u; f_80244DB0(c); // 800513C4
  cmps(c,0,(int32_t)c->r[3],0); // 800513C8
  if (crb(c,2)) { goto L_800513D4; } // 800513CC
  c->lr=0x800513D4u; f_8005128C(c); // 800513D0
L_800513D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800513D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800513D8
  c->lr=c->r[0]; // 800513DC
  c->r[1]=c->r[1]+0x00000010u; // 800513E0
  return; // 800513E4
}

// fn_800513E8
void f_800513E8(Ctx* __restrict c) {
  trace_call(0x800513E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800513E8
  c->r[0]=c->lr; // 800513EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800513F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800513F4
  c->r[31]=c->r[3]|c->r[3]; // 800513F8
  c->lr=0x80051400u; f_802B1168(c); // 800513FC
  c->r[7]=0u+0x80420000u; // 80051400
  c->r[6]=0u+0x80410000u; // 80051404
  c->r[5]=0u+0x00000000u; // 80051408
  c->r[4]=0u+0x149A0000u; // 8005140C
  c->r[3]=0u+0x29320000u; // 80051410
  c->r[7]=c->r[7]+0xFFFFF88Cu; // 80051414
  c->r[0]=c->r[3]+0x00005832u; // 80051418
  c->r[6]=c->r[6]+0xFFFFBEDCu; // 8005141C
  c->r[4]=c->r[4]+0xFFFFC14Au; // 80051420
  W32(c->r[31]+0x00000018u,c->r[7]); // 80051424
  c->r[3]=c->r[31]|c->r[31]; // 80051428
  W32(c->r[31]+0x00000000u,c->r[6]); // 8005142C
  W32(c->r[31]+0x00000008u,c->r[5]); // 80051430
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80051434
  W32(c->r[31]+0x00000010u,c->r[5]); // 80051438
  W32(c->r[31]+0x00000004u,c->r[0]); // 8005143C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051440
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051444
  c->lr=c->r[0]; // 80051448
  c->r[1]=c->r[1]+0x00000010u; // 8005144C
  return; // 80051450
}

// fn_80051454
void f_80051454(Ctx* __restrict c) {
  trace_call(0x80051454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051454
  c->r[0]=c->lr; // 80051458
  cmps(c,0,(int32_t)c->r[4],0); // 8005145C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051460
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80051464
  c->r[30]=c->r[3]|c->r[3]; // 80051468
  c->r[31]=c->r[4]|c->r[4]; // 8005146C
  if (crb(c,2)) { goto L_800514C4; } // 80051470
  c->r[3]=c->r[31]|c->r[31]; // 80051474
  c->lr=0x8005147Cu; f_80244520(c); // 80051478
  c->r[7]=c->r[3]|c->r[3]; // 8005147C
  c->r[9]=c->r[31]|c->r[31]; // 80051480
  c->r[3]=0u+0x00000028u; // 80051484
  c->r[4]=c->r[13]+0xFFFF93FDu; // 80051488
  c->r[5]=0u+0x00000000u; // 8005148C
  c->r[6]=0u+0x00002001u; // 80051490
  c->r[8]=0u+0x00000000u; // 80051494
  c->lr=0x8005149Cu; f_80242DF0(c); // 80051498
  c->r[4]=c->r[3]|c->r[3]; // 8005149C
  c->r[3]=0u+0x00000028u; // 800514A0
  c->r[5]=c->r[13]+0xFFFF9402u; // 800514A4
  c->r[6]=0u+0x00000000u; // 800514A8
  c->r[7]=0u+0x00001001u; // 800514AC
  c->lr=0x800514B4u; f_80244DB0(c); // 800514B0
  cmps(c,0,(int32_t)c->r[3],0); // 800514B4
  if (crb(c,2)) { goto L_800514E4; } // 800514B8
  c->lr=0x800514C0u; f_800513E8(c); // 800514BC
  goto L_800514E4; // 800514C0
L_800514C4:;
  c->r[3]=0u+0x00000028u; // 800514C4
  c->r[4]=c->r[13]+0xFFFF9407u; // 800514C8
  c->r[5]=0u+0x00000000u; // 800514CC
  c->r[6]=0u+0x00001001u; // 800514D0
  c->lr=0x800514D8u; f_80244D20(c); // 800514D4
  cmps(c,0,(int32_t)c->r[3],0); // 800514D8
  if (crb(c,2)) { goto L_800514E4; } // 800514DC
  c->lr=0x800514E4u; f_800513E8(c); // 800514E0
L_800514E4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800514E4
  W16(c->r[3]+0x00000014u,c->r[0]); // 800514E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800514EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800514F0
  c->lr=c->r[0]; // 800514F4
  c->r[1]=c->r[1]+0x00000010u; // 800514F8
  return; // 800514FC
}

// fn_80051500
void f_80051500(Ctx* __restrict c) {
  trace_call(0x80051500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051500
  c->r[0]=c->lr; // 80051504
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051508
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005150C
  c->r[31]=c->r[4]|c->r[4]; // 80051510
  c->r[30]=c->r[3]|c->r[3]; // 80051514
  c->r[3]=c->r[31]|c->r[31]; // 80051518
  c->lr=0x80051520u; f_8030BD1C(c); // 8005151C
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 80051520
  c->r[3]=c->r[31]|c->r[31]; // 80051524
  c->lr=0x8005152Cu; f_8030BD1C(c); // 80051528
  W8(c->r[30]+0x0000001Du,c->r[3]); // 8005152C
  c->r[3]=c->r[31]|c->r[31]; // 80051530
  c->lr=0x80051538u; f_8030BD1C(c); // 80051534
  W8(c->r[30]+0x0000001Eu,c->r[3]); // 80051538
  c->r[3]=c->r[31]|c->r[31]; // 8005153C
  c->lr=0x80051544u; f_8030BD1C(c); // 80051540
  W8(c->r[30]+0x0000001Fu,c->r[3]); // 80051544
  c->r[3]=c->r[31]|c->r[31]; // 80051548
  c->lr=0x80051550u; f_8030BD1C(c); // 8005154C
  W8(c->r[30]+0x00000020u,c->r[3]); // 80051550
  c->r[3]=c->r[31]|c->r[31]; // 80051554
  c->lr=0x8005155Cu; f_8030BD1C(c); // 80051558
  W8(c->r[30]+0x00000021u,c->r[3]); // 8005155C
  c->r[3]=c->r[31]|c->r[31]; // 80051560
  c->lr=0x80051568u; f_8030BD1C(c); // 80051564
  W8(c->r[30]+0x00000022u,c->r[3]); // 80051568
  c->r[3]=c->r[31]|c->r[31]; // 8005156C
  c->lr=0x80051574u; f_8030BD1C(c); // 80051570
  W8(c->r[30]+0x00000023u,c->r[3]); // 80051574
  c->r[3]=c->r[31]|c->r[31]; // 80051578
  c->lr=0x80051580u; f_8030BD1C(c); // 8005157C
  W8(c->r[30]+0x00000024u,c->r[3]); // 80051580
  c->r[3]=c->r[31]|c->r[31]; // 80051584
  c->lr=0x8005158Cu; f_8030BD1C(c); // 80051588
  W8(c->r[30]+0x00000025u,c->r[3]); // 8005158C
  c->r[3]=c->r[31]|c->r[31]; // 80051590
  c->lr=0x80051598u; f_8030BD1C(c); // 80051594
  W8(c->r[30]+0x00000026u,c->r[3]); // 80051598
  c->r[3]=c->r[31]|c->r[31]; // 8005159C
  c->lr=0x800515A4u; f_8030BD1C(c); // 800515A0
  W8(c->r[30]+0x00000027u,c->r[3]); // 800515A4
  c->r[3]=0u+0x00000000u; // 800515A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800515AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800515B0
  c->lr=c->r[0]; // 800515B4
  c->r[1]=c->r[1]+0x00000010u; // 800515B8
  return; // 800515BC
}

// fn_800515C0
void f_800515C0(Ctx* __restrict c) {
  trace_call(0x800515C0u);
  return; // 800515C0
}

// fn_800515C4
void f_800515C4(Ctx* __restrict c) {
  trace_call(0x800515C4u);
  c->r[0]=0u+0x00000000u; // 800515C4
  c->r[4]=0u+0x00000001u; // 800515C8
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 800515CC
  W8(c->r[3]+0x0000001Du,c->r[0]); // 800515D0
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 800515D4
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 800515D8
  W8(c->r[3]+0x00000020u,c->r[0]); // 800515DC
  W8(c->r[3]+0x00000021u,c->r[0]); // 800515E0
  W8(c->r[3]+0x00000022u,c->r[0]); // 800515E4
  W8(c->r[3]+0x00000023u,c->r[0]); // 800515E8
  W8(c->r[3]+0x00000024u,c->r[0]); // 800515EC
  W8(c->r[3]+0x00000025u,c->r[0]); // 800515F0
  W8(c->r[3]+0x00000026u,c->r[0]); // 800515F4
  W8(c->r[3]+0x00000027u,c->r[0]); // 800515F8
  return; // 800515FC
}

// fn_80051600
void f_80051600(Ctx* __restrict c) {
  trace_call(0x80051600u);
  cmps(c,0,(int32_t)c->r[5],0); // 80051600
  if (crb(c,2)) { goto L_8005160C; } // 80051604
  goto L_80051610; // 80051608
L_8005160C:;
  c->r[5]=c->r[3]|c->r[3]; // 8005160C
L_80051610:;
  c->r[0]=R8(c->r[4]+0x0000001Cu); // 80051610
  W8(c->r[5]+0x0000001Cu,c->r[0]); // 80051614
  c->r[0]=R8(c->r[4]+0x0000001Du); // 80051618
  W8(c->r[5]+0x0000001Du,c->r[0]); // 8005161C
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 80051620
  W8(c->r[5]+0x0000001Eu,c->r[0]); // 80051624
  c->r[0]=R8(c->r[4]+0x0000001Fu); // 80051628
  W8(c->r[5]+0x0000001Fu,c->r[0]); // 8005162C
  c->r[0]=R8(c->r[4]+0x00000020u); // 80051630
  W8(c->r[5]+0x00000020u,c->r[0]); // 80051634
  c->r[0]=R8(c->r[4]+0x00000021u); // 80051638
  W8(c->r[5]+0x00000021u,c->r[0]); // 8005163C
  c->r[0]=R8(c->r[4]+0x00000022u); // 80051640
  W8(c->r[5]+0x00000022u,c->r[0]); // 80051644
  c->r[0]=R8(c->r[4]+0x00000023u); // 80051648
  W8(c->r[5]+0x00000023u,c->r[0]); // 8005164C
  c->r[0]=R8(c->r[4]+0x00000024u); // 80051650
  W8(c->r[5]+0x00000024u,c->r[0]); // 80051654
  c->r[0]=R8(c->r[4]+0x00000025u); // 80051658
  W8(c->r[5]+0x00000025u,c->r[0]); // 8005165C
  c->r[0]=R8(c->r[4]+0x00000026u); // 80051660
  W8(c->r[5]+0x00000026u,c->r[0]); // 80051664
  c->r[0]=R8(c->r[4]+0x00000027u); // 80051668
  W8(c->r[5]+0x00000027u,c->r[0]); // 8005166C
  return; // 80051670
}

// fn_80051674
void f_80051674(Ctx* __restrict c) {
  trace_call(0x80051674u);
  c->r[3]=0u+0x00000000u; // 80051674
  return; // 80051678
}

// fn_8005167C
void f_8005167C(Ctx* __restrict c) {
  trace_call(0x8005167Cu);
  c->r[3]=0u+0x00000028u; // 8005167C
  return; // 80051680
}

// fn_80051684
void f_80051684(Ctx* __restrict c) {
  trace_call(0x80051684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051684
  c->r[0]=c->lr; // 80051688
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005168C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051690
  c->r[31]=c->r[3]|c->r[3]; // 80051694
  c->lr=0x8005169Cu; f_800513E8(c); // 80051698
  c->r[0]=R32(c->r[31]+0x00000008u); // 8005169C
  c->r[3]=0u+0x80420000u; // 800516A0
  c->r[3]=c->r[3]+0xFFFFF84Cu; // 800516A4
  W32(c->r[31]+0x00000018u,c->r[3]); // 800516A8
  c->r[0]=c->r[0]|0x80000000u; // 800516AC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800516B0
  c->r[3]=c->r[31]|c->r[31]; // 800516B4
  c->r[12]=R32(c->r[31]+0x00000018u); // 800516B8
  c->r[12]=R32(c->r[12]+0x00000024u); // 800516BC
  c->ctr=c->r[12]; // 800516C0
  if (true) { c->lr=0x800516C8u; dispatch(c,c->ctr); } // 800516C4
  c->r[3]=c->r[31]|c->r[31]; // 800516C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800516CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800516D0
  c->lr=c->r[0]; // 800516D4
  c->r[1]=c->r[1]+0x00000010u; // 800516D8
  return; // 800516DC
}

// fn_800516E0
void f_800516E0(Ctx* __restrict c) {
  trace_call(0x800516E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800516E0
  c->r[0]=c->lr; // 800516E4
  cmps(c,0,(int32_t)c->r[3],0); // 800516E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800516EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800516F0
  c->r[30]=c->r[3]|c->r[3]; // 800516F4
  c->r[31]=c->r[4]|c->r[4]; // 800516F8
  if (crb(c,2)) { goto L_80051718; } // 800516FC
  c->r[4]=0u+0x00000000u; // 80051700
  c->lr=0x80051708u; f_802B1180(c); // 80051704
  cmps(c,0,(int32_t)c->r[31],0); // 80051708
  if (!crb(c,1)) { goto L_80051718; } // 8005170C
  c->r[3]=c->r[30]|c->r[30]; // 80051710
  c->lr=0x80051718u; f_80244DC0(c); // 80051714
L_80051718:;
  c->r[3]=c->r[30]|c->r[30]; // 80051718
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005171C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051720
  c->lr=c->r[0]; // 80051724
  c->r[1]=c->r[1]+0x00000010u; // 80051728
  return; // 8005172C
}

// fn_80051730
void f_80051730(Ctx* __restrict c) {
  trace_call(0x80051730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051730
  c->r[0]=c->lr; // 80051734
  c->r[3]=0u+0x00000028u; // 80051738
  c->r[4]=c->r[13]+0xFFFF940Cu; // 8005173C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051740
  c->r[5]=0u+0x00000000u; // 80051744
  c->r[6]=0u+0x00001001u; // 80051748
  c->lr=0x80051750u; f_80244D20(c); // 8005174C
  cmps(c,0,(int32_t)c->r[3],0); // 80051750
  if (crb(c,2)) { goto L_8005175C; } // 80051754
  c->lr=0x8005175Cu; f_80051684(c); // 80051758
L_8005175C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005175C
  c->lr=c->r[0]; // 80051760
  c->r[1]=c->r[1]+0x00000010u; // 80051764
  return; // 80051768
}

// fn_8005176C
void f_8005176C(Ctx* __restrict c) {
  trace_call(0x8005176Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005176C
  c->r[0]=c->lr; // 80051770
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051778
  c->r[31]=c->r[3]|c->r[3]; // 8005177C
  c->lr=0x80051784u; f_80244520(c); // 80051780
  c->r[7]=c->r[3]|c->r[3]; // 80051784
  c->r[9]=c->r[31]|c->r[31]; // 80051788
  c->r[3]=0u+0x00000028u; // 8005178C
  c->r[4]=c->r[13]+0xFFFF9411u; // 80051790
  c->r[5]=0u+0x00000000u; // 80051794
  c->r[6]=0u+0x00002001u; // 80051798
  c->r[8]=0u+0x00000000u; // 8005179C
  c->lr=0x800517A4u; f_80242DF0(c); // 800517A0
  c->r[4]=c->r[3]|c->r[3]; // 800517A4
  c->r[3]=0u+0x00000028u; // 800517A8
  c->r[5]=c->r[13]+0xFFFF9416u; // 800517AC
  c->r[6]=0u+0x00000000u; // 800517B0
  c->r[7]=0u+0x00001001u; // 800517B4
  c->lr=0x800517BCu; f_80244DB0(c); // 800517B8
  cmps(c,0,(int32_t)c->r[3],0); // 800517BC
  if (crb(c,2)) { goto L_800517C8; } // 800517C0
  c->lr=0x800517C8u; f_80051684(c); // 800517C4
L_800517C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800517C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800517CC
  c->lr=c->r[0]; // 800517D0
  c->r[1]=c->r[1]+0x00000010u; // 800517D4
  return; // 800517D8
}

// fn_800517DC
void f_800517DC(Ctx* __restrict c) {
  trace_call(0x800517DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800517DC
  c->r[0]=c->lr; // 800517E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800517E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800517E8
  c->r[31]=c->r[3]|c->r[3]; // 800517EC
  c->lr=0x800517F4u; f_802B1168(c); // 800517F0
  c->r[7]=0u+0x80420000u; // 800517F4
  c->r[6]=0u+0x80410000u; // 800517F8
  c->r[5]=0u+0x00000000u; // 800517FC
  c->r[4]=0u+0x3D1C0000u; // 80051800
  c->r[3]=0u+0xB4150000u; // 80051804
  c->r[7]=c->r[7]+0xFFFFF810u; // 80051808
  c->r[0]=c->r[3]+0xFFFFBC1Bu; // 8005180C
  c->r[6]=c->r[6]+0xFFFFBEEDu; // 80051810
  c->r[4]=c->r[4]+0xFFFF9AAFu; // 80051814
  W32(c->r[31]+0x00000018u,c->r[7]); // 80051818
  c->r[3]=c->r[31]|c->r[31]; // 8005181C
  W32(c->r[31]+0x00000000u,c->r[6]); // 80051820
  W32(c->r[31]+0x00000008u,c->r[5]); // 80051824
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80051828
  W32(c->r[31]+0x00000010u,c->r[5]); // 8005182C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80051830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051834
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051838
  c->lr=c->r[0]; // 8005183C
  c->r[1]=c->r[1]+0x00000010u; // 80051840
  return; // 80051844
}

// fn_80051848
void f_80051848(Ctx* __restrict c) {
  trace_call(0x80051848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051848
  c->r[0]=c->lr; // 8005184C
  cmps(c,0,(int32_t)c->r[4],0); // 80051850
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051854
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80051858
  c->r[30]=c->r[3]|c->r[3]; // 8005185C
  c->r[31]=c->r[4]|c->r[4]; // 80051860
  if (crb(c,2)) { goto L_800518B8; } // 80051864
  c->r[3]=c->r[31]|c->r[31]; // 80051868
  c->lr=0x80051870u; f_80244520(c); // 8005186C
  c->r[7]=c->r[3]|c->r[3]; // 80051870
  c->r[9]=c->r[31]|c->r[31]; // 80051874
  c->r[3]=0u+0x0000004Cu; // 80051878
  c->r[4]=c->r[13]+0xFFFF941Bu; // 8005187C
  c->r[5]=0u+0x00000000u; // 80051880
  c->r[6]=0u+0x00002001u; // 80051884
  c->r[8]=0u+0x00000000u; // 80051888
  c->lr=0x80051890u; f_80242DF0(c); // 8005188C
  c->r[4]=c->r[3]|c->r[3]; // 80051890
  c->r[3]=0u+0x0000004Cu; // 80051894
  c->r[5]=c->r[13]+0xFFFF9420u; // 80051898
  c->r[6]=0u+0x00000000u; // 8005189C
  c->r[7]=0u+0x00001001u; // 800518A0
  c->lr=0x800518A8u; f_80244DB0(c); // 800518A4
  cmps(c,0,(int32_t)c->r[3],0); // 800518A8
  if (crb(c,2)) { goto L_800518D8; } // 800518AC
  c->lr=0x800518B4u; f_800517DC(c); // 800518B0
  goto L_800518D8; // 800518B4
L_800518B8:;
  c->r[3]=0u+0x0000004Cu; // 800518B8
  c->r[4]=c->r[13]+0xFFFF9425u; // 800518BC
  c->r[5]=0u+0x00000000u; // 800518C0
  c->r[6]=0u+0x00001001u; // 800518C4
  c->lr=0x800518CCu; f_80244D20(c); // 800518C8
  cmps(c,0,(int32_t)c->r[3],0); // 800518CC
  if (crb(c,2)) { goto L_800518D8; } // 800518D0
  c->lr=0x800518D8u; f_800517DC(c); // 800518D4
L_800518D8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 800518D8
  W16(c->r[3]+0x00000014u,c->r[0]); // 800518DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800518E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800518E4
  c->lr=c->r[0]; // 800518E8
  c->r[1]=c->r[1]+0x00000010u; // 800518EC
  return; // 800518F0
}

// fn_800518F4
void f_800518F4(Ctx* __restrict c) {
  trace_call(0x800518F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800518F4
  c->r[0]=c->lr; // 800518F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800518FC
  c->r[0]=0u+0x00000000u; // 80051900
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80051904
  c->r[31]=c->r[4]|c->r[4]; // 80051908
  c->r[30]=c->r[3]|c->r[3]; // 8005190C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80051910
  c->r[3]=c->r[31]|c->r[31]; // 80051914
  c->lr=0x8005191Cu; f_8030BD1C(c); // 80051918
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8005191C
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 80051920
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051924
  c->r[3]=c->r[31]|c->r[31]; // 80051928
  c->lr=0x80051930u; f_8030BD1C(c); // 8005192C
  W32(c->r[30]+0x00000020u,c->r[3]); // 80051930
  c->r[3]=c->r[31]|c->r[31]; // 80051934
  c->lr=0x8005193Cu; f_8030BD1C(c); // 80051938
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8005193C
  c->r[0]=(rotl(c->r[3],30)&0x40000000u)|(c->r[0]&~0x40000000u); // 80051940
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051944
  c->r[3]=c->r[31]|c->r[31]; // 80051948
  c->lr=0x80051950u; f_8030BD1C(c); // 8005194C
  W32(c->r[30]+0x00000024u,c->r[3]); // 80051950
  c->r[3]=c->r[31]|c->r[31]; // 80051954
  c->lr=0x8005195Cu; f_8030BD1C(c); // 80051958
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8005195C
  c->r[0]=(rotl(c->r[3],29)&0x20000000u)|(c->r[0]&~0x20000000u); // 80051960
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051964
  c->r[3]=c->r[31]|c->r[31]; // 80051968
  c->lr=0x80051970u; f_8030BD1C(c); // 8005196C
  W32(c->r[30]+0x00000028u,c->r[3]); // 80051970
  c->r[3]=c->r[31]|c->r[31]; // 80051974
  c->lr=0x8005197Cu; f_8030BD1C(c); // 80051978
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8005197C
  c->r[0]=(rotl(c->r[3],28)&0x10000000u)|(c->r[0]&~0x10000000u); // 80051980
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051984
  c->r[3]=c->r[31]|c->r[31]; // 80051988
  c->lr=0x80051990u; f_8030BD1C(c); // 8005198C
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 80051990
  c->r[3]=c->r[31]|c->r[31]; // 80051994
  c->lr=0x8005199Cu; f_8030BD1C(c); // 80051998
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8005199C
  c->r[0]=(rotl(c->r[3],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800519A0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800519A4
  c->r[3]=c->r[31]|c->r[31]; // 800519A8
  c->lr=0x800519B0u; f_8030BD1C(c); // 800519AC
  W32(c->r[30]+0x00000030u,c->r[3]); // 800519B0
  c->r[3]=c->r[31]|c->r[31]; // 800519B4
  c->lr=0x800519BCu; f_8030BD1C(c); // 800519B8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800519BC
  c->r[0]=(rotl(c->r[3],26)&0x04000000u)|(c->r[0]&~0x04000000u); // 800519C0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800519C4
  c->r[3]=c->r[31]|c->r[31]; // 800519C8
  c->lr=0x800519D0u; f_8030BD1C(c); // 800519CC
  W32(c->r[30]+0x00000034u,c->r[3]); // 800519D0
  c->r[3]=c->r[31]|c->r[31]; // 800519D4
  c->r[4]=0u+0x00000000u; // 800519D8
  c->lr=0x800519E0u; f_8030BE30(c); // 800519DC
  W32(c->r[30]+0x00000038u,c->r[3]); // 800519E0
  c->r[3]=c->r[31]|c->r[31]; // 800519E4
  c->lr=0x800519ECu; f_8030BD1C(c); // 800519E8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800519EC
  c->r[0]=(rotl(c->r[3],25)&0x02000000u)|(c->r[0]&~0x02000000u); // 800519F0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800519F4
  c->r[3]=c->r[31]|c->r[31]; // 800519F8
  c->lr=0x80051A00u; f_8030BD1C(c); // 800519FC
  W8(c->r[30]+0x0000003Cu,c->r[3]); // 80051A00
  c->r[3]=c->r[31]|c->r[31]; // 80051A04
  c->lr=0x80051A0Cu; f_8030BD1C(c); // 80051A08
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051A0C
  c->r[0]=(rotl(c->r[3],24)&0x01000000u)|(c->r[0]&~0x01000000u); // 80051A10
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051A14
  c->r[3]=c->r[31]|c->r[31]; // 80051A18
  c->lr=0x80051A20u; f_8030BD1C(c); // 80051A1C
  W8(c->r[30]+0x0000003Du,c->r[3]); // 80051A20
  c->r[3]=c->r[31]|c->r[31]; // 80051A24
  c->lr=0x80051A2Cu; f_8030BD1C(c); // 80051A28
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051A2C
  c->r[0]=(rotl(c->r[3],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 80051A30
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051A34
  c->r[3]=c->r[31]|c->r[31]; // 80051A38
  c->lr=0x80051A40u; f_8030BD1C(c); // 80051A3C
  W8(c->r[30]+0x0000003Eu,c->r[3]); // 80051A40
  c->r[3]=c->r[31]|c->r[31]; // 80051A44
  c->lr=0x80051A4Cu; f_8030BD1C(c); // 80051A48
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051A4C
  c->r[0]=(rotl(c->r[3],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 80051A50
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051A54
  c->r[3]=c->r[31]|c->r[31]; // 80051A58
  c->lr=0x80051A60u; f_8030BD1C(c); // 80051A5C
  W8(c->r[30]+0x0000003Fu,c->r[3]); // 80051A60
  c->r[3]=c->r[31]|c->r[31]; // 80051A64
  c->lr=0x80051A6Cu; f_8030BD1C(c); // 80051A68
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051A6C
  c->r[0]=(rotl(c->r[3],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 80051A70
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051A74
  c->r[3]=c->r[31]|c->r[31]; // 80051A78
  c->lr=0x80051A80u; f_8030BD1C(c); // 80051A7C
  W8(c->r[30]+0x00000040u,c->r[3]); // 80051A80
  c->r[3]=c->r[31]|c->r[31]; // 80051A84
  c->lr=0x80051A8Cu; f_8030BD1C(c); // 80051A88
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051A8C
  c->r[0]=(rotl(c->r[3],20)&0x00100000u)|(c->r[0]&~0x00100000u); // 80051A90
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051A94
  c->r[3]=c->r[31]|c->r[31]; // 80051A98
  c->lr=0x80051AA0u; f_8030BD1C(c); // 80051A9C
  W8(c->r[30]+0x00000041u,c->r[3]); // 80051AA0
  c->r[3]=c->r[31]|c->r[31]; // 80051AA4
  c->lr=0x80051AACu; f_8030BD1C(c); // 80051AA8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051AAC
  c->r[0]=(rotl(c->r[3],19)&0x00080000u)|(c->r[0]&~0x00080000u); // 80051AB0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051AB4
  c->r[3]=c->r[31]|c->r[31]; // 80051AB8
  c->lr=0x80051AC0u; f_8030BD1C(c); // 80051ABC
  W8(c->r[30]+0x00000042u,c->r[3]); // 80051AC0
  c->r[3]=c->r[31]|c->r[31]; // 80051AC4
  c->lr=0x80051ACCu; f_8030BD1C(c); // 80051AC8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051ACC
  c->r[0]=(rotl(c->r[3],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 80051AD0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051AD4
  c->r[3]=c->r[31]|c->r[31]; // 80051AD8
  c->lr=0x80051AE0u; f_8030BD1C(c); // 80051ADC
  W8(c->r[30]+0x00000043u,c->r[3]); // 80051AE0
  c->r[3]=c->r[31]|c->r[31]; // 80051AE4
  c->lr=0x80051AECu; f_8030BD1C(c); // 80051AE8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051AEC
  c->r[0]=(rotl(c->r[3],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 80051AF0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051AF4
  c->r[3]=c->r[31]|c->r[31]; // 80051AF8
  c->lr=0x80051B00u; f_8030BD1C(c); // 80051AFC
  W8(c->r[30]+0x00000044u,c->r[3]); // 80051B00
  c->r[3]=c->r[31]|c->r[31]; // 80051B04
  c->lr=0x80051B0Cu; f_8030BD1C(c); // 80051B08
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80051B0C
  c->r[0]=(rotl(c->r[3],16)&0x00010000u)|(c->r[0]&~0x00010000u); // 80051B10
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80051B14
  c->r[3]=c->r[31]|c->r[31]; // 80051B18
  c->lr=0x80051B20u; f_8030C0A0(c); // 80051B1C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 80051B20
  c->r[3]=0u+0x00000000u; // 80051B24
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80051B28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051B2C
  c->lr=c->r[0]; // 80051B30
  c->r[1]=c->r[1]+0x00000010u; // 80051B34
  return; // 80051B38
}

// fn_80051B3C
void f_80051B3C(Ctx* __restrict c) {
  trace_call(0x80051B3Cu);
  return; // 80051B3C
}

// fn_80051B40
void f_80051B40(Ctx* __restrict c) {
  trace_call(0x80051B40u);
  c->r[8]=0u+0x00000000u; // 80051B40
  {uint32_t ea=c->r[2]+0xFFFF86A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051B44
  c->r[6]=0u+0x00000001u; // 80051B48
  c->r[5]=0u+0x00000003u; // 80051B4C
  c->r[0]=c->r[8]|0x78A00000u; // 80051B50
  c->r[7]=0u+0x00000004u; // 80051B54
  c->r[4]=0u+0x00000005u; // 80051B58
  W32(c->r[3]+0x00000020u,c->r[7]); // 80051B5C
  W32(c->r[3]+0x00000024u,c->r[5]); // 80051B60
  W32(c->r[3]+0x00000028u,c->r[8]); // 80051B64
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 80051B68
  W32(c->r[3]+0x00000030u,c->r[8]); // 80051B6C
  W32(c->r[3]+0x00000034u,c->r[4]); // 80051B70
  W32(c->r[3]+0x00000038u,c->r[8]); // 80051B74
  W8(c->r[3]+0x0000003Cu,c->r[8]); // 80051B78
  W8(c->r[3]+0x0000003Du,c->r[8]); // 80051B7C
  W8(c->r[3]+0x0000003Eu,c->r[6]); // 80051B80
  W8(c->r[3]+0x0000003Fu,c->r[6]); // 80051B84
  W8(c->r[3]+0x00000040u,c->r[8]); // 80051B88
  W8(c->r[3]+0x00000041u,c->r[8]); // 80051B8C
  W8(c->r[3]+0x00000042u,c->r[8]); // 80051B90
  W8(c->r[3]+0x00000043u,c->r[6]); // 80051B94
  W8(c->r[3]+0x00000044u,c->r[8]); // 80051B98
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80051B9C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80051BA0
  return; // 80051BA4
}

// fn_80051BA8
void f_80051BA8(Ctx* __restrict c) {
  trace_call(0x80051BA8u);
  cmps(c,0,(int32_t)c->r[5],0); // 80051BA8
  if (crb(c,2)) { goto L_80051BB4; } // 80051BAC
  goto L_80051BB8; // 80051BB0
L_80051BB4:;
  c->r[5]=c->r[3]|c->r[3]; // 80051BB4
L_80051BB8:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80051BB8
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 80051BBC
  c->r[0]=R32(c->r[4]+0x00000020u); // 80051BC0
  W32(c->r[5]+0x00000020u,c->r[0]); // 80051BC4
  c->r[0]=R32(c->r[4]+0x00000024u); // 80051BC8
  W32(c->r[5]+0x00000024u,c->r[0]); // 80051BCC
  c->r[0]=R32(c->r[4]+0x00000028u); // 80051BD0
  W32(c->r[5]+0x00000028u,c->r[0]); // 80051BD4
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 80051BD8
  W32(c->r[5]+0x0000002Cu,c->r[0]); // 80051BDC
  c->r[0]=R32(c->r[4]+0x00000030u); // 80051BE0
  W32(c->r[5]+0x00000030u,c->r[0]); // 80051BE4
  c->r[0]=R32(c->r[4]+0x00000034u); // 80051BE8
  W32(c->r[5]+0x00000034u,c->r[0]); // 80051BEC
  c->r[0]=R32(c->r[4]+0x00000038u); // 80051BF0
  W32(c->r[5]+0x00000038u,c->r[0]); // 80051BF4
  c->r[0]=R8(c->r[4]+0x0000003Cu); // 80051BF8
  W8(c->r[5]+0x0000003Cu,c->r[0]); // 80051BFC
  c->r[0]=R8(c->r[4]+0x0000003Du); // 80051C00
  W8(c->r[5]+0x0000003Du,c->r[0]); // 80051C04
  c->r[0]=R8(c->r[4]+0x0000003Eu); // 80051C08
  W8(c->r[5]+0x0000003Eu,c->r[0]); // 80051C0C
  c->r[0]=R8(c->r[4]+0x0000003Fu); // 80051C10
  W8(c->r[5]+0x0000003Fu,c->r[0]); // 80051C14
  c->r[0]=R8(c->r[4]+0x00000040u); // 80051C18
  W8(c->r[5]+0x00000040u,c->r[0]); // 80051C1C
  c->r[0]=R8(c->r[4]+0x00000041u); // 80051C20
  W8(c->r[5]+0x00000041u,c->r[0]); // 80051C24
  c->r[0]=R8(c->r[4]+0x00000042u); // 80051C28
  W8(c->r[5]+0x00000042u,c->r[0]); // 80051C2C
  c->r[0]=R8(c->r[4]+0x00000043u); // 80051C30
  W8(c->r[5]+0x00000043u,c->r[0]); // 80051C34
  c->r[0]=R8(c->r[4]+0x00000044u); // 80051C38
  W8(c->r[5]+0x00000044u,c->r[0]); // 80051C3C
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051C40
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[0]);} // 80051C44
  return; // 80051C48
}

// fn_80051C4C
void f_80051C4C(Ctx* __restrict c) {
  trace_call(0x80051C4Cu);
  c->r[3]=0u+0x00000000u; // 80051C4C
  return; // 80051C50
}

// fn_80051C54
void f_80051C54(Ctx* __restrict c) {
  trace_call(0x80051C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051C54
  c->r[0]=c->lr; // 80051C58
  W32(c->r[1]+0x00000044u,c->r[0]); // 80051C5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80051C60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80051C64
  c->r[11]=c->r[1]+0x00000030u; // 80051C68
  c->lr=0x80051C70u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80051C6C
  c->r[7]=R32(c->r[4]+0x00000038u); // 80051C70
  c->r[6]=0u+0x43300000u; // 80051C74
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80051C78
  c->f[31]=c->f[1]; // 80051C7C
  c->r[0]=R32(c->r[5]+0x00000038u); // 80051C80
  c->r[29]=c->r[3]|c->r[3]; // 80051C84
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 80051C88
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 80051C8C
  {uint32_t ea=c->r[2]+0xFFFF86B0u; c->f[3]=RF64(ea);} // 80051C90
  W32(c->r[1]+0x00000008u,c->r[6]); // 80051C94
  c->r[30]=c->r[4]|c->r[4]; // 80051C98
  c->r[31]=c->r[5]|c->r[5]; // 80051C9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80051CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051CA4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80051CA8
  W32(c->r[1]+0x00000010u,c->r[6]); // 80051CAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80051CB0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 80051CB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80051CB8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80051CBC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80051CC0
  c->lr=0x80051CC8u; f_803ADC14(c); // 80051CC4
  {uint32_t ea=c->r[2]+0xFFFF868Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80051CC8
  W32(c->r[29]+0x00000038u,c->r[3]); // 80051CCC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80051CD0
  {uint32_t ea=c->r[30]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80051CD4
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80051CD8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80051CDC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80051CE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80051CE4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 80051CE8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80051CEC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80051CF0
  c->r[11]=c->r[1]+0x00000030u; // 80051CF4
  c->lr=0x80051CFCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80051CF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 80051CFC
  c->lr=c->r[0]; // 80051D00
  c->r[1]=c->r[1]+0x00000040u; // 80051D04
  return; // 80051D08
}

// fn_80051D0C
void f_80051D0C(Ctx* __restrict c) {
  trace_call(0x80051D0Cu);
  c->r[3]=0u+0x0000004Cu; // 80051D0C
  return; // 80051D10
}

// fn_80051D14
void f_80051D14(Ctx* __restrict c) {
  trace_call(0x80051D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051D14
  c->r[0]=c->lr; // 80051D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051D1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051D20
  c->r[31]=c->r[3]|c->r[3]; // 80051D24
  c->lr=0x80051D2Cu; f_800517DC(c); // 80051D28
  c->r[0]=R32(c->r[31]+0x00000008u); // 80051D2C
  c->r[3]=0u+0x80420000u; // 80051D30
  c->r[3]=c->r[3]+0xFFFFF7D0u; // 80051D34
  W32(c->r[31]+0x00000018u,c->r[3]); // 80051D38
  c->r[0]=c->r[0]|0x80000000u; // 80051D3C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80051D40
  c->r[3]=c->r[31]|c->r[31]; // 80051D44
  c->r[12]=R32(c->r[31]+0x00000018u); // 80051D48
  c->r[12]=R32(c->r[12]+0x00000024u); // 80051D4C
  c->ctr=c->r[12]; // 80051D50
  if (true) { c->lr=0x80051D58u; dispatch(c,c->ctr); } // 80051D54
  c->r[3]=c->r[31]|c->r[31]; // 80051D58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051D5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051D60
  c->lr=c->r[0]; // 80051D64
  c->r[1]=c->r[1]+0x00000010u; // 80051D68
  return; // 80051D6C
}

// fn_80051D70
void f_80051D70(Ctx* __restrict c) {
  trace_call(0x80051D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051D70
  c->r[0]=c->lr; // 80051D74
  cmps(c,0,(int32_t)c->r[3],0); // 80051D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051D7C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80051D80
  c->r[30]=c->r[3]|c->r[3]; // 80051D84
  c->r[31]=c->r[4]|c->r[4]; // 80051D88
  if (crb(c,2)) { goto L_80051DA8; } // 80051D8C
  c->r[4]=0u+0x00000000u; // 80051D90
  c->lr=0x80051D98u; f_802B1180(c); // 80051D94
  cmps(c,0,(int32_t)c->r[31],0); // 80051D98
  if (!crb(c,1)) { goto L_80051DA8; } // 80051D9C
  c->r[3]=c->r[30]|c->r[30]; // 80051DA0
  c->lr=0x80051DA8u; f_80244DC0(c); // 80051DA4
L_80051DA8:;
  c->r[3]=c->r[30]|c->r[30]; // 80051DA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80051DAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051DB0
  c->lr=c->r[0]; // 80051DB4
  c->r[1]=c->r[1]+0x00000010u; // 80051DB8
  return; // 80051DBC
}

// fn_80051DC0
void f_80051DC0(Ctx* __restrict c) {
  trace_call(0x80051DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051DC0
  c->r[0]=c->lr; // 80051DC4
  c->r[3]=0u+0x0000004Cu; // 80051DC8
  c->r[4]=c->r[13]+0xFFFF942Au; // 80051DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051DD0
  c->r[5]=0u+0x00000000u; // 80051DD4
  c->r[6]=0u+0x00001001u; // 80051DD8
  c->lr=0x80051DE0u; f_80244D20(c); // 80051DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80051DE0
  if (crb(c,2)) { goto L_80051DEC; } // 80051DE4
  c->lr=0x80051DECu; f_80051D14(c); // 80051DE8
L_80051DEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051DEC
  c->lr=c->r[0]; // 80051DF0
  c->r[1]=c->r[1]+0x00000010u; // 80051DF4
  return; // 80051DF8
}

// fn_80051DFC
void f_80051DFC(Ctx* __restrict c) {
  trace_call(0x80051DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051DFC
  c->r[0]=c->lr; // 80051E00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051E08
  c->r[31]=c->r[3]|c->r[3]; // 80051E0C
  c->lr=0x80051E14u; f_80244520(c); // 80051E10
  c->r[7]=c->r[3]|c->r[3]; // 80051E14
  c->r[9]=c->r[31]|c->r[31]; // 80051E18
  c->r[3]=0u+0x0000004Cu; // 80051E1C
  c->r[4]=c->r[13]+0xFFFF942Fu; // 80051E20
  c->r[5]=0u+0x00000000u; // 80051E24
  c->r[6]=0u+0x00002001u; // 80051E28
  c->r[8]=0u+0x00000000u; // 80051E2C
  c->lr=0x80051E34u; f_80242DF0(c); // 80051E30
  c->r[4]=c->r[3]|c->r[3]; // 80051E34
  c->r[3]=0u+0x0000004Cu; // 80051E38
  c->r[5]=c->r[13]+0xFFFF9434u; // 80051E3C
  c->r[6]=0u+0x00000000u; // 80051E40
  c->r[7]=0u+0x00001001u; // 80051E44
  c->lr=0x80051E4Cu; f_80244DB0(c); // 80051E48
  cmps(c,0,(int32_t)c->r[3],0); // 80051E4C
  if (crb(c,2)) { goto L_80051E58; } // 80051E50
  c->lr=0x80051E58u; f_80051D14(c); // 80051E54
L_80051E58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051E58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051E5C
  c->lr=c->r[0]; // 80051E60
  c->r[1]=c->r[1]+0x00000010u; // 80051E64
  return; // 80051E68
}

// fn_80051E6C
void f_80051E6C(Ctx* __restrict c) {
  trace_call(0x80051E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051E6C
  c->r[0]=c->lr; // 80051E70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051E74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051E78
  c->r[31]=c->r[3]|c->r[3]; // 80051E7C
  c->lr=0x80051E84u; f_800517DC(c); // 80051E80
  c->r[7]=0u+0x80420000u; // 80051E84
  c->r[6]=0u+0x80410000u; // 80051E88
  c->r[5]=0u+0x00000000u; // 80051E8C
  c->r[4]=0u+0x3D1C0000u; // 80051E90
  c->r[3]=0u+0xD4040000u; // 80051E94
  c->r[7]=c->r[7]+0xFFFFF794u; // 80051E98
  c->r[0]=c->r[3]+0xFFFFF8F1u; // 80051E9C
  c->r[6]=c->r[6]+0xFFFFBF02u; // 80051EA0
  c->r[4]=c->r[4]+0xFFFF9AAFu; // 80051EA4
  W32(c->r[31]+0x00000018u,c->r[7]); // 80051EA8
  c->r[3]=c->r[31]|c->r[31]; // 80051EAC
  W32(c->r[31]+0x00000000u,c->r[6]); // 80051EB0
  W32(c->r[31]+0x00000008u,c->r[5]); // 80051EB4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80051EB8
  W32(c->r[31]+0x00000010u,c->r[5]); // 80051EBC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80051EC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051EC8
  c->lr=c->r[0]; // 80051ECC
  c->r[1]=c->r[1]+0x00000010u; // 80051ED0
  return; // 80051ED4
}

// fn_80051ED8
void f_80051ED8(Ctx* __restrict c) {
  trace_call(0x80051ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051ED8
  c->r[0]=c->lr; // 80051EDC
  cmps(c,0,(int32_t)c->r[4],0); // 80051EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051EE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80051EE8
  c->r[30]=c->r[3]|c->r[3]; // 80051EEC
  c->r[31]=c->r[4]|c->r[4]; // 80051EF0
  if (crb(c,2)) { goto L_80051F48; } // 80051EF4
  c->r[3]=c->r[31]|c->r[31]; // 80051EF8
  c->lr=0x80051F00u; f_80244520(c); // 80051EFC
  c->r[7]=c->r[3]|c->r[3]; // 80051F00
  c->r[9]=c->r[31]|c->r[31]; // 80051F04
  c->r[3]=0u+0x0000004Cu; // 80051F08
  c->r[4]=c->r[13]+0xFFFF9439u; // 80051F0C
  c->r[5]=0u+0x00000000u; // 80051F10
  c->r[6]=0u+0x00002001u; // 80051F14
  c->r[8]=0u+0x00000000u; // 80051F18
  c->lr=0x80051F20u; f_80242DF0(c); // 80051F1C
  c->r[4]=c->r[3]|c->r[3]; // 80051F20
  c->r[3]=0u+0x0000004Cu; // 80051F24
  c->r[5]=c->r[13]+0xFFFF943Eu; // 80051F28
  c->r[6]=0u+0x00000000u; // 80051F2C
  c->r[7]=0u+0x00001001u; // 80051F30
  c->lr=0x80051F38u; f_80244DB0(c); // 80051F34
  cmps(c,0,(int32_t)c->r[3],0); // 80051F38
  if (crb(c,2)) { goto L_80051F68; } // 80051F3C
  c->lr=0x80051F44u; f_80051E6C(c); // 80051F40
  goto L_80051F68; // 80051F44
L_80051F48:;
  c->r[3]=0u+0x0000004Cu; // 80051F48
  c->r[4]=c->r[13]+0xFFFF9443u; // 80051F4C
  c->r[5]=0u+0x00000000u; // 80051F50
  c->r[6]=0u+0x00001001u; // 80051F54
  c->lr=0x80051F5Cu; f_80244D20(c); // 80051F58
  cmps(c,0,(int32_t)c->r[3],0); // 80051F5C
  if (crb(c,2)) { goto L_80051F68; } // 80051F60
  c->lr=0x80051F68u; f_80051E6C(c); // 80051F64
L_80051F68:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80051F68
  W16(c->r[3]+0x00000014u,c->r[0]); // 80051F6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80051F70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051F74
  c->lr=c->r[0]; // 80051F78
  c->r[1]=c->r[1]+0x00000010u; // 80051F7C
  return; // 80051F80
}

// fn_80051F84
void f_80051F84(Ctx* __restrict c) {
  trace_call(0x80051F84u);
  f_800518F4(c); return; // 80051F84
}

// fn_80051F88
void f_80051F88(Ctx* __restrict c) {
  trace_call(0x80051F88u);
  return; // 80051F88
}

// fn_80051F8C
void f_80051F8C(Ctx* __restrict c) {
  trace_call(0x80051F8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051F8C
  c->r[0]=c->lr; // 80051F90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051F94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051F98
  c->r[31]=c->r[3]|c->r[3]; // 80051F9C
  c->lr=0x80051FA4u; f_80051B40(c); // 80051FA0
  c->r[0]=0u+0x00000000u; // 80051FA4
  c->r[3]=0u+0x00000002u; // 80051FA8
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 80051FAC
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 80051FB0
  W8(c->r[31]+0x0000003Eu,c->r[0]); // 80051FB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051FB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051FBC
  c->lr=c->r[0]; // 80051FC0
  c->r[1]=c->r[1]+0x00000010u; // 80051FC4
  return; // 80051FC8
}

// fn_80051FCC
void f_80051FCC(Ctx* __restrict c) {
  trace_call(0x80051FCCu);
  c->r[3]=0u+0xB4150000u; // 80051FCC
  c->r[0]=c->r[3]+0xFFFFBC1Bu; // 80051FD0
  c->r[0]=c->r[4]-c->r[0]; // 80051FD4
  c->r[0]=cntlz(c->r[0]); // 80051FD8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80051FDC
  return; // 80051FE0
}

// fn_80051FE4
void f_80051FE4(Ctx* __restrict c) {
  trace_call(0x80051FE4u);
  f_80051C54(c); return; // 80051FE4
}

// fn_80051FE8
void f_80051FE8(Ctx* __restrict c) {
  trace_call(0x80051FE8u);
  c->r[3]=0u+0x0000004Cu; // 80051FE8
  return; // 80051FEC
}

// fn_80051FF0
void f_80051FF0(Ctx* __restrict c) {
  trace_call(0x80051FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051FF0
  c->r[0]=c->lr; // 80051FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051FFC
  c->r[31]=c->r[3]|c->r[3]; // 80052000
  c->lr=0x80052008u; f_80051E6C(c); // 80052004
  c->r[0]=R32(c->r[31]+0x00000008u); // 80052008
  c->r[3]=0u+0x80420000u; // 8005200C
  c->r[3]=c->r[3]+0xFFFFF754u; // 80052010
  W32(c->r[31]+0x00000018u,c->r[3]); // 80052014
  c->r[0]=c->r[0]|0x80000000u; // 80052018
  W32(c->r[31]+0x00000008u,c->r[0]); // 8005201C
  c->r[3]=c->r[31]|c->r[31]; // 80052020
  c->r[12]=R32(c->r[31]+0x00000018u); // 80052024
  c->r[12]=R32(c->r[12]+0x00000024u); // 80052028
  c->ctr=c->r[12]; // 8005202C
  if (true) { c->lr=0x80052034u; dispatch(c,c->ctr); } // 80052030
  c->r[3]=c->r[31]|c->r[31]; // 80052034
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052038
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005203C
  c->lr=c->r[0]; // 80052040
  c->r[1]=c->r[1]+0x00000010u; // 80052044
  return; // 80052048
}

// fn_8005204C
void f_8005204C(Ctx* __restrict c) {
  trace_call(0x8005204Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005204C
  c->r[0]=c->lr; // 80052050
  cmps(c,0,(int32_t)c->r[3],0); // 80052054
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052058
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005205C
  c->r[30]=c->r[3]|c->r[3]; // 80052060
  c->r[31]=c->r[4]|c->r[4]; // 80052064
  if (crb(c,2)) { goto L_80052088; } // 80052068
  if (crb(c,2)) { goto L_80052078; } // 8005206C
  c->r[4]=0u+0x00000000u; // 80052070
  c->lr=0x80052078u; f_802B1180(c); // 80052074
L_80052078:;
  cmps(c,0,(int32_t)c->r[31],0); // 80052078
  if (!crb(c,1)) { goto L_80052088; } // 8005207C
  c->r[3]=c->r[30]|c->r[30]; // 80052080
  c->lr=0x80052088u; f_80244DC0(c); // 80052084
L_80052088:;
  c->r[3]=c->r[30]|c->r[30]; // 80052088
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005208C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052090
  c->lr=c->r[0]; // 80052094
  c->r[1]=c->r[1]+0x00000010u; // 80052098
  return; // 8005209C
}

// fn_800520A0
void f_800520A0(Ctx* __restrict c) {
  trace_call(0x800520A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800520A0
  c->r[0]=c->lr; // 800520A4
  c->r[3]=0u+0x0000004Cu; // 800520A8
  c->r[4]=c->r[13]+0xFFFF9448u; // 800520AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800520B0
  c->r[5]=0u+0x00000000u; // 800520B4
  c->r[6]=0u+0x00001001u; // 800520B8
  c->lr=0x800520C0u; f_80244D20(c); // 800520BC
  cmps(c,0,(int32_t)c->r[3],0); // 800520C0
  if (crb(c,2)) { goto L_800520CC; } // 800520C4
  c->lr=0x800520CCu; f_80051FF0(c); // 800520C8
L_800520CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800520CC
  c->lr=c->r[0]; // 800520D0
  c->r[1]=c->r[1]+0x00000010u; // 800520D4
  return; // 800520D8
}

// fn_800520DC
void f_800520DC(Ctx* __restrict c) {
  trace_call(0x800520DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800520DC
  c->r[0]=c->lr; // 800520E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800520E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800520E8
  c->r[31]=c->r[3]|c->r[3]; // 800520EC
  c->lr=0x800520F4u; f_80244520(c); // 800520F0
  c->r[7]=c->r[3]|c->r[3]; // 800520F4
  c->r[9]=c->r[31]|c->r[31]; // 800520F8
  c->r[3]=0u+0x0000004Cu; // 800520FC
  c->r[4]=c->r[13]+0xFFFF944Du; // 80052100
  c->r[5]=0u+0x00000000u; // 80052104
  c->r[6]=0u+0x00002001u; // 80052108
  c->r[8]=0u+0x00000000u; // 8005210C
  c->lr=0x80052114u; f_80242DF0(c); // 80052110
  c->r[4]=c->r[3]|c->r[3]; // 80052114
  c->r[3]=0u+0x0000004Cu; // 80052118
  c->r[5]=c->r[13]+0xFFFF9452u; // 8005211C
  c->r[6]=0u+0x00000000u; // 80052120
  c->r[7]=0u+0x00001001u; // 80052124
  c->lr=0x8005212Cu; f_80244DB0(c); // 80052128
  cmps(c,0,(int32_t)c->r[3],0); // 8005212C
  if (crb(c,2)) { goto L_80052138; } // 80052130
  c->lr=0x80052138u; f_80051FF0(c); // 80052134
L_80052138:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052138
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005213C
  c->lr=c->r[0]; // 80052140
  c->r[1]=c->r[1]+0x00000010u; // 80052144
  return; // 80052148
}

// fn_8005214C
void f_8005214C(Ctx* __restrict c) {
  trace_call(0x8005214Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005214C
  c->r[0]=c->lr; // 80052150
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052154
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052158
  c->r[31]=c->r[3]|c->r[3]; // 8005215C
  c->lr=0x80052164u; f_800517DC(c); // 80052160
  c->r[7]=0u+0x80420000u; // 80052164
  c->r[6]=0u+0x80410000u; // 80052168
  c->r[5]=0u+0x00000000u; // 8005216C
  c->r[4]=0u+0x3D1C0000u; // 80052170
  c->r[3]=0u+0xC6500000u; // 80052174
  c->r[7]=c->r[7]+0xFFFFF718u; // 80052178
  c->r[0]=c->r[3]+0xFFFF9445u; // 8005217C
  c->r[6]=c->r[6]+0xFFFFBF19u; // 80052180
  c->r[4]=c->r[4]+0xFFFF9AAFu; // 80052184
  W32(c->r[31]+0x00000018u,c->r[7]); // 80052188
  c->r[3]=c->r[31]|c->r[31]; // 8005218C
  W32(c->r[31]+0x00000000u,c->r[6]); // 80052190
  W32(c->r[31]+0x00000008u,c->r[5]); // 80052194
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80052198
  W32(c->r[31]+0x00000010u,c->r[5]); // 8005219C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800521A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800521A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800521A8
  c->lr=c->r[0]; // 800521AC
  c->r[1]=c->r[1]+0x00000010u; // 800521B0
  return; // 800521B4
}

// fn_800521B8
void f_800521B8(Ctx* __restrict c) {
  trace_call(0x800521B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800521B8
  c->r[0]=c->lr; // 800521BC
  cmps(c,0,(int32_t)c->r[4],0); // 800521C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800521C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800521C8
  c->r[30]=c->r[3]|c->r[3]; // 800521CC
  c->r[31]=c->r[4]|c->r[4]; // 800521D0
  if (crb(c,2)) { goto L_80052228; } // 800521D4
  c->r[3]=c->r[31]|c->r[31]; // 800521D8
  c->lr=0x800521E0u; f_80244520(c); // 800521DC
  c->r[7]=c->r[3]|c->r[3]; // 800521E0
  c->r[9]=c->r[31]|c->r[31]; // 800521E4
  c->r[3]=0u+0x0000004Cu; // 800521E8
  c->r[4]=c->r[13]+0xFFFF9457u; // 800521EC
  c->r[5]=0u+0x00000000u; // 800521F0
  c->r[6]=0u+0x00002001u; // 800521F4
  c->r[8]=0u+0x00000000u; // 800521F8
  c->lr=0x80052200u; f_80242DF0(c); // 800521FC
  c->r[4]=c->r[3]|c->r[3]; // 80052200
  c->r[3]=0u+0x0000004Cu; // 80052204
  c->r[5]=c->r[13]+0xFFFF945Cu; // 80052208
  c->r[6]=0u+0x00000000u; // 8005220C
  c->r[7]=0u+0x00001001u; // 80052210
  c->lr=0x80052218u; f_80244DB0(c); // 80052214
  cmps(c,0,(int32_t)c->r[3],0); // 80052218
  if (crb(c,2)) { goto L_80052248; } // 8005221C
  c->lr=0x80052224u; f_8005214C(c); // 80052220
  goto L_80052248; // 80052224
L_80052228:;
  c->r[3]=0u+0x0000004Cu; // 80052228
  c->r[4]=c->r[13]+0xFFFF9461u; // 8005222C
  c->r[5]=0u+0x00000000u; // 80052230
  c->r[6]=0u+0x00001001u; // 80052234
  c->lr=0x8005223Cu; f_80244D20(c); // 80052238
  cmps(c,0,(int32_t)c->r[3],0); // 8005223C
  if (crb(c,2)) { goto L_80052248; } // 80052240
  c->lr=0x80052248u; f_8005214C(c); // 80052244
L_80052248:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80052248
  W16(c->r[3]+0x00000014u,c->r[0]); // 8005224C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80052250
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052254
  c->lr=c->r[0]; // 80052258
  c->r[1]=c->r[1]+0x00000010u; // 8005225C
  return; // 80052260
}

// fn_80052264
void f_80052264(Ctx* __restrict c) {
  trace_call(0x80052264u);
  f_800518F4(c); return; // 80052264
}

// fn_80052268
void f_80052268(Ctx* __restrict c) {
  trace_call(0x80052268u);
  return; // 80052268
}

// fn_8005226C
void f_8005226C(Ctx* __restrict c) {
  trace_call(0x8005226Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005226C
  c->r[0]=c->lr; // 80052270
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052278
  c->r[31]=c->r[3]|c->r[3]; // 8005227C
  c->lr=0x80052284u; f_80051B40(c); // 80052280
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80052284
  c->r[4]=0u+0x00000000u; // 80052288
  c->r[3]=0u+0x00000001u; // 8005228C
  W32(c->r[31]+0x00000028u,c->r[4]); // 80052290
  c->r[0]=c->r[0]|0x00080000u; // 80052294
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 80052298
  W8(c->r[31]+0x0000003Cu,c->r[4]); // 8005229C
  W8(c->r[31]+0x0000003Eu,c->r[4]); // 800522A0
  W8(c->r[31]+0x00000040u,c->r[3]); // 800522A4
  W8(c->r[31]+0x00000041u,c->r[4]); // 800522A8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800522AC
  W8(c->r[31]+0x00000042u,c->r[3]); // 800522B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800522B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800522B8
  c->lr=c->r[0]; // 800522BC
  c->r[1]=c->r[1]+0x00000010u; // 800522C0
  return; // 800522C4
}

// fn_800522C8
void f_800522C8(Ctx* __restrict c) {
  trace_call(0x800522C8u);
  c->r[3]=0u+0xB4150000u; // 800522C8
  c->r[0]=c->r[3]+0xFFFFBC1Bu; // 800522CC
  c->r[0]=c->r[4]-c->r[0]; // 800522D0
  c->r[0]=cntlz(c->r[0]); // 800522D4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800522D8
  return; // 800522DC
}

// fn_800522E0
void f_800522E0(Ctx* __restrict c) {
  trace_call(0x800522E0u);
  f_80051C54(c); return; // 800522E0
}

// fn_800522E4
void f_800522E4(Ctx* __restrict c) {
  trace_call(0x800522E4u);
  c->r[3]=0u+0x0000004Cu; // 800522E4
  return; // 800522E8
}

// fn_800522EC
void f_800522EC(Ctx* __restrict c) {
  trace_call(0x800522ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800522EC
  c->r[0]=c->lr; // 800522F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800522F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800522F8
  c->r[31]=c->r[3]|c->r[3]; // 800522FC
  c->lr=0x80052304u; f_8005214C(c); // 80052300
  c->r[0]=R32(c->r[31]+0x00000008u); // 80052304
  c->r[3]=0u+0x80420000u; // 80052308
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8005230C
  W32(c->r[31]+0x00000018u,c->r[3]); // 80052310
  c->r[0]=c->r[0]|0x80000000u; // 80052314
  W32(c->r[31]+0x00000008u,c->r[0]); // 80052318
  c->r[3]=c->r[31]|c->r[31]; // 8005231C
  c->r[12]=R32(c->r[31]+0x00000018u); // 80052320
  c->r[12]=R32(c->r[12]+0x00000024u); // 80052324
  c->ctr=c->r[12]; // 80052328
  if (true) { c->lr=0x80052330u; dispatch(c,c->ctr); } // 8005232C
  c->r[3]=c->r[31]|c->r[31]; // 80052330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052334
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052338
  c->lr=c->r[0]; // 8005233C
  c->r[1]=c->r[1]+0x00000010u; // 80052340
  return; // 80052344
}

// fn_80052348
void f_80052348(Ctx* __restrict c) {
  trace_call(0x80052348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052348
  c->r[0]=c->lr; // 8005234C
  cmps(c,0,(int32_t)c->r[3],0); // 80052350
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052354
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80052358
  c->r[30]=c->r[3]|c->r[3]; // 8005235C
  c->r[31]=c->r[4]|c->r[4]; // 80052360
  if (crb(c,2)) { goto L_80052384; } // 80052364
  if (crb(c,2)) { goto L_80052374; } // 80052368
  c->r[4]=0u+0x00000000u; // 8005236C
  c->lr=0x80052374u; f_802B1180(c); // 80052370
L_80052374:;
  cmps(c,0,(int32_t)c->r[31],0); // 80052374
  if (!crb(c,1)) { goto L_80052384; } // 80052378
  c->r[3]=c->r[30]|c->r[30]; // 8005237C
  c->lr=0x80052384u; f_80244DC0(c); // 80052380
L_80052384:;
  c->r[3]=c->r[30]|c->r[30]; // 80052384
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80052388
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005238C
  c->lr=c->r[0]; // 80052390
  c->r[1]=c->r[1]+0x00000010u; // 80052394
  return; // 80052398
}

// fn_8005239C
void f_8005239C(Ctx* __restrict c) {
  trace_call(0x8005239Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005239C
  c->r[0]=c->lr; // 800523A0
  c->r[3]=0u+0x0000004Cu; // 800523A4
  c->r[4]=c->r[13]+0xFFFF9466u; // 800523A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800523AC
  c->r[5]=0u+0x00000000u; // 800523B0
  c->r[6]=0u+0x00001001u; // 800523B4
  c->lr=0x800523BCu; f_80244D20(c); // 800523B8
  cmps(c,0,(int32_t)c->r[3],0); // 800523BC
  if (crb(c,2)) { goto L_800523C8; } // 800523C0
  c->lr=0x800523C8u; f_800522EC(c); // 800523C4
L_800523C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800523C8
  c->lr=c->r[0]; // 800523CC
  c->r[1]=c->r[1]+0x00000010u; // 800523D0
  return; // 800523D4
}

// fn_800523D8
void f_800523D8(Ctx* __restrict c) {
  trace_call(0x800523D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800523D8
  c->r[0]=c->lr; // 800523DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800523E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800523E4
  c->r[31]=c->r[3]|c->r[3]; // 800523E8
  c->lr=0x800523F0u; f_80244520(c); // 800523EC
  c->r[7]=c->r[3]|c->r[3]; // 800523F0
  c->r[9]=c->r[31]|c->r[31]; // 800523F4
  c->r[3]=0u+0x0000004Cu; // 800523F8
  c->r[4]=c->r[13]+0xFFFF946Bu; // 800523FC
  c->r[5]=0u+0x00000000u; // 80052400
  c->r[6]=0u+0x00002001u; // 80052404
  c->r[8]=0u+0x00000000u; // 80052408
  c->lr=0x80052410u; f_80242DF0(c); // 8005240C
  c->r[4]=c->r[3]|c->r[3]; // 80052410
  c->r[3]=0u+0x0000004Cu; // 80052414
  c->r[5]=c->r[13]+0xFFFF9470u; // 80052418
  c->r[6]=0u+0x00000000u; // 8005241C
  c->r[7]=0u+0x00001001u; // 80052420
  c->lr=0x80052428u; f_80244DB0(c); // 80052424
  cmps(c,0,(int32_t)c->r[3],0); // 80052428
  if (crb(c,2)) { goto L_80052434; } // 8005242C
  c->lr=0x80052434u; f_800522EC(c); // 80052430
L_80052434:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052434
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052438
  c->lr=c->r[0]; // 8005243C
  c->r[1]=c->r[1]+0x00000010u; // 80052440
  return; // 80052444
}

// fn_80052448
void f_80052448(Ctx* __restrict c) {
  trace_call(0x80052448u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052448
  c->r[0]=c->lr; // 8005244C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052450
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052454
  c->r[31]=c->r[3]|c->r[3]; // 80052458
  c->lr=0x80052460u; f_800517DC(c); // 8005245C
  c->r[7]=0u+0x80420000u; // 80052460
  c->r[6]=0u+0x80410000u; // 80052464
  c->r[5]=0u+0x00000000u; // 80052468
  c->r[4]=0u+0x3D1C0000u; // 8005246C
  c->r[3]=0u+0x3BD20000u; // 80052470
  c->r[7]=c->r[7]+0xFFFFF69Cu; // 80052474
  c->r[0]=c->r[3]+0xFFFFB41Du; // 80052478
  c->r[6]=c->r[6]+0xFFFFBF31u; // 8005247C
  c->r[4]=c->r[4]+0xFFFF9AAFu; // 80052480
  W32(c->r[31]+0x00000018u,c->r[7]); // 80052484
  c->r[3]=c->r[31]|c->r[31]; // 80052488
  W32(c->r[31]+0x00000000u,c->r[6]); // 8005248C
  W32(c->r[31]+0x00000008u,c->r[5]); // 80052490
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80052494
  W32(c->r[31]+0x00000010u,c->r[5]); // 80052498
  W32(c->r[31]+0x00000004u,c->r[0]); // 8005249C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800524A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800524A4
  c->lr=c->r[0]; // 800524A8
  c->r[1]=c->r[1]+0x00000010u; // 800524AC
  return; // 800524B0
}

// fn_800524B4
void f_800524B4(Ctx* __restrict c) {
  trace_call(0x800524B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800524B4
  c->r[0]=c->lr; // 800524B8
  cmps(c,0,(int32_t)c->r[4],0); // 800524BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800524C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800524C4
  c->r[30]=c->r[3]|c->r[3]; // 800524C8
  c->r[31]=c->r[4]|c->r[4]; // 800524CC
  if (crb(c,2)) { goto L_80052524; } // 800524D0
  c->r[3]=c->r[31]|c->r[31]; // 800524D4
  c->lr=0x800524DCu; f_80244520(c); // 800524D8
  c->r[7]=c->r[3]|c->r[3]; // 800524DC
  c->r[9]=c->r[31]|c->r[31]; // 800524E0
  c->r[3]=0u+0x0000004Cu; // 800524E4
  c->r[4]=c->r[13]+0xFFFF9475u; // 800524E8
  c->r[5]=0u+0x00000000u; // 800524EC
  c->r[6]=0u+0x00002001u; // 800524F0
  c->r[8]=0u+0x00000000u; // 800524F4
  c->lr=0x800524FCu; f_80242DF0(c); // 800524F8
  c->r[4]=c->r[3]|c->r[3]; // 800524FC
  c->r[3]=0u+0x0000004Cu; // 80052500
  c->r[5]=c->r[13]+0xFFFF947Au; // 80052504
  c->r[6]=0u+0x00000000u; // 80052508
  c->r[7]=0u+0x00001001u; // 8005250C
  c->lr=0x80052514u; f_80244DB0(c); // 80052510
  cmps(c,0,(int32_t)c->r[3],0); // 80052514
  if (crb(c,2)) { goto L_80052544; } // 80052518
  c->lr=0x80052520u; f_80052448(c); // 8005251C
  goto L_80052544; // 80052520
L_80052524:;
  c->r[3]=0u+0x0000004Cu; // 80052524
  c->r[4]=c->r[13]+0xFFFF947Fu; // 80052528
  c->r[5]=0u+0x00000000u; // 8005252C
  c->r[6]=0u+0x00001001u; // 80052530
  c->lr=0x80052538u; f_80244D20(c); // 80052534
  cmps(c,0,(int32_t)c->r[3],0); // 80052538
  if (crb(c,2)) { goto L_80052544; } // 8005253C
  c->lr=0x80052544u; f_80052448(c); // 80052540
L_80052544:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80052544
  W16(c->r[3]+0x00000014u,c->r[0]); // 80052548
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005254C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052550
  c->lr=c->r[0]; // 80052554
  c->r[1]=c->r[1]+0x00000010u; // 80052558
  return; // 8005255C
}

// fn_80052560
void f_80052560(Ctx* __restrict c) {
  trace_call(0x80052560u);
  f_800518F4(c); return; // 80052560
}

// fn_80052564
void f_80052564(Ctx* __restrict c) {
  trace_call(0x80052564u);
  return; // 80052564
}

// InitParam__Q44nw4r3snd6detail8SeqSoundFv
void f_80052568(Ctx* __restrict c) {
  trace_call(0x80052568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052568
  c->r[0]=c->lr; // 8005256C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052574
  c->r[31]=c->r[3]|c->r[3]; // 80052578
  c->lr=0x80052580u; f_80051B40(c); // 8005257C
  c->r[0]=0u+0x00000002u; // 80052580
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 80052584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052588
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005258C
  c->lr=c->r[0]; // 80052590
  c->r[1]=c->r[1]+0x00000010u; // 80052594
  return; // 80052598
}

// fn_8005259C
void f_8005259C(Ctx* __restrict c) {
  trace_call(0x8005259Cu);
  c->r[3]=0u+0xB4150000u; // 8005259C
  c->r[0]=c->r[3]+0xFFFFBC1Bu; // 800525A0
  c->r[0]=c->r[4]-c->r[0]; // 800525A4
  c->r[0]=cntlz(c->r[0]); // 800525A8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800525AC
  return; // 800525B0
}

// fn_800525B4
void f_800525B4(Ctx* __restrict c) {
  trace_call(0x800525B4u);
  f_80051C54(c); return; // 800525B4
}

// fn_800525B8
void f_800525B8(Ctx* __restrict c) {
  trace_call(0x800525B8u);
  c->r[3]=0u+0x0000004Cu; // 800525B8
  return; // 800525BC
}

// fn_800525C0
void f_800525C0(Ctx* __restrict c) {
  trace_call(0x800525C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800525C0
  c->r[0]=c->lr; // 800525C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800525C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800525CC
  c->r[31]=c->r[3]|c->r[3]; // 800525D0
  c->lr=0x800525D8u; f_80052448(c); // 800525D4
  c->r[0]=R32(c->r[31]+0x00000008u); // 800525D8
  c->r[3]=0u+0x80420000u; // 800525DC
  c->r[3]=c->r[3]+0xFFFFF65Cu; // 800525E0
  W32(c->r[31]+0x00000018u,c->r[3]); // 800525E4
  c->r[0]=c->r[0]|0x80000000u; // 800525E8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800525EC
  c->r[3]=c->r[31]|c->r[31]; // 800525F0
  c->r[12]=R32(c->r[31]+0x00000018u); // 800525F4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800525F8
  c->ctr=c->r[12]; // 800525FC
  if (true) { c->lr=0x80052604u; dispatch(c,c->ctr); } // 80052600
  c->r[3]=c->r[31]|c->r[31]; // 80052604
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052608
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005260C
  c->lr=c->r[0]; // 80052610
  c->r[1]=c->r[1]+0x00000010u; // 80052614
  return; // 80052618
}

// fn_8005261C
void f_8005261C(Ctx* __restrict c) {
  trace_call(0x8005261Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005261C
  c->r[0]=c->lr; // 80052620
  cmps(c,0,(int32_t)c->r[3],0); // 80052624
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052628
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005262C
  c->r[30]=c->r[3]|c->r[3]; // 80052630
  c->r[31]=c->r[4]|c->r[4]; // 80052634
  if (crb(c,2)) { goto L_80052658; } // 80052638
  if (crb(c,2)) { goto L_80052648; } // 8005263C
  c->r[4]=0u+0x00000000u; // 80052640
  c->lr=0x80052648u; f_802B1180(c); // 80052644
L_80052648:;
  cmps(c,0,(int32_t)c->r[31],0); // 80052648
  if (!crb(c,1)) { goto L_80052658; } // 8005264C
  c->r[3]=c->r[30]|c->r[30]; // 80052650
  c->lr=0x80052658u; f_80244DC0(c); // 80052654
L_80052658:;
  c->r[3]=c->r[30]|c->r[30]; // 80052658
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005265C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052660
  c->lr=c->r[0]; // 80052664
  c->r[1]=c->r[1]+0x00000010u; // 80052668
  return; // 8005266C
}

// fn_80052670
void f_80052670(Ctx* __restrict c) {
  trace_call(0x80052670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052670
  c->r[0]=c->lr; // 80052674
  c->r[3]=0u+0x0000004Cu; // 80052678
  c->r[4]=c->r[13]+0xFFFF9484u; // 8005267C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052680
  c->r[5]=0u+0x00000000u; // 80052684
  c->r[6]=0u+0x00001001u; // 80052688
  c->lr=0x80052690u; f_80244D20(c); // 8005268C
  cmps(c,0,(int32_t)c->r[3],0); // 80052690
  if (crb(c,2)) { goto L_8005269C; } // 80052694
  c->lr=0x8005269Cu; f_800525C0(c); // 80052698
L_8005269C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005269C
  c->lr=c->r[0]; // 800526A0
  c->r[1]=c->r[1]+0x00000010u; // 800526A4
  return; // 800526A8
}

// fn_800526AC
void f_800526AC(Ctx* __restrict c) {
  trace_call(0x800526ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800526AC
  c->r[0]=c->lr; // 800526B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800526B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800526B8
  c->r[31]=c->r[3]|c->r[3]; // 800526BC
  c->lr=0x800526C4u; f_80244520(c); // 800526C0
  c->r[7]=c->r[3]|c->r[3]; // 800526C4
  c->r[9]=c->r[31]|c->r[31]; // 800526C8
  c->r[3]=0u+0x0000004Cu; // 800526CC
  c->r[4]=c->r[13]+0xFFFF9489u; // 800526D0
  c->r[5]=0u+0x00000000u; // 800526D4
  c->r[6]=0u+0x00002001u; // 800526D8
  c->r[8]=0u+0x00000000u; // 800526DC
  c->lr=0x800526E4u; f_80242DF0(c); // 800526E0
  c->r[4]=c->r[3]|c->r[3]; // 800526E4
  c->r[3]=0u+0x0000004Cu; // 800526E8
  c->r[5]=c->r[13]+0xFFFF948Eu; // 800526EC
  c->r[6]=0u+0x00000000u; // 800526F0
  c->r[7]=0u+0x00001001u; // 800526F4
  c->lr=0x800526FCu; f_80244DB0(c); // 800526F8
  cmps(c,0,(int32_t)c->r[3],0); // 800526FC
  if (crb(c,2)) { goto L_80052708; } // 80052700
  c->lr=0x80052708u; f_800525C0(c); // 80052704
L_80052708:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005270C
  c->lr=c->r[0]; // 80052710
  c->r[1]=c->r[1]+0x00000010u; // 80052714
  return; // 80052718
}

// fn_8005271C
void f_8005271C(Ctx* __restrict c) {
  trace_call(0x8005271Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005271C
  c->r[0]=c->lr; // 80052720
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052728
  c->r[31]=c->r[3]|c->r[3]; // 8005272C
  c->lr=0x80052734u; f_800517DC(c); // 80052730
  c->r[7]=0u+0x80420000u; // 80052734
  c->r[6]=0u+0x80410000u; // 80052738
  c->r[5]=0u+0x00000000u; // 8005273C
  c->r[4]=0u+0x3D1C0000u; // 80052740
  c->r[3]=0u+0xBBBC0000u; // 80052744
  c->r[7]=c->r[7]+0xFFFFF620u; // 80052748
  c->r[0]=c->r[3]+0x00000E18u; // 8005274C
  c->r[6]=c->r[6]+0xFFFFBF46u; // 80052750
  c->r[4]=c->r[4]+0xFFFF9AAFu; // 80052754
  W32(c->r[31]+0x00000018u,c->r[7]); // 80052758
  c->r[3]=c->r[31]|c->r[31]; // 8005275C
  W32(c->r[31]+0x00000000u,c->r[6]); // 80052760
  W32(c->r[31]+0x00000008u,c->r[5]); // 80052764
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80052768
  W32(c->r[31]+0x00000010u,c->r[5]); // 8005276C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80052770
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052774
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052778
  c->lr=c->r[0]; // 8005277C
  c->r[1]=c->r[1]+0x00000010u; // 80052780
  return; // 80052784
}

// fn_80052788
void f_80052788(Ctx* __restrict c) {
  trace_call(0x80052788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052788
  c->r[0]=c->lr; // 8005278C
  cmps(c,0,(int32_t)c->r[4],0); // 80052790
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052794
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80052798
  c->r[30]=c->r[3]|c->r[3]; // 8005279C
  c->r[31]=c->r[4]|c->r[4]; // 800527A0
  if (crb(c,2)) { goto L_800527F8; } // 800527A4
  c->r[3]=c->r[31]|c->r[31]; // 800527A8
  c->lr=0x800527B0u; f_80244520(c); // 800527AC
  c->r[7]=c->r[3]|c->r[3]; // 800527B0
  c->r[9]=c->r[31]|c->r[31]; // 800527B4
  c->r[3]=0u+0x0000004Cu; // 800527B8
  c->r[4]=c->r[13]+0xFFFF9493u; // 800527BC
  c->r[5]=0u+0x00000000u; // 800527C0
  c->r[6]=0u+0x00002001u; // 800527C4
  c->r[8]=0u+0x00000000u; // 800527C8
  c->lr=0x800527D0u; f_80242DF0(c); // 800527CC
  c->r[4]=c->r[3]|c->r[3]; // 800527D0
  c->r[3]=0u+0x0000004Cu; // 800527D4
  c->r[5]=c->r[13]+0xFFFF9498u; // 800527D8
  c->r[6]=0u+0x00000000u; // 800527DC
  c->r[7]=0u+0x00001001u; // 800527E0
  c->lr=0x800527E8u; f_80244DB0(c); // 800527E4
  cmps(c,0,(int32_t)c->r[3],0); // 800527E8
  if (crb(c,2)) { goto L_80052818; } // 800527EC
  c->lr=0x800527F4u; f_8005271C(c); // 800527F0
  goto L_80052818; // 800527F4
L_800527F8:;
  c->r[3]=0u+0x0000004Cu; // 800527F8
  c->r[4]=c->r[13]+0xFFFF949Du; // 800527FC
  c->r[5]=0u+0x00000000u; // 80052800
  c->r[6]=0u+0x00001001u; // 80052804
  c->lr=0x8005280Cu; f_80244D20(c); // 80052808
  cmps(c,0,(int32_t)c->r[3],0); // 8005280C
  if (crb(c,2)) { goto L_80052818; } // 80052810
  c->lr=0x80052818u; f_8005271C(c); // 80052814
L_80052818:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000014u); // 80052818
  W16(c->r[3]+0x00000014u,c->r[0]); // 8005281C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80052820
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052824
  c->lr=c->r[0]; // 80052828
  c->r[1]=c->r[1]+0x00000010u; // 8005282C
  return; // 80052830
}

// fn_80052834
void f_80052834(Ctx* __restrict c) {
  trace_call(0x80052834u);
  f_800518F4(c); return; // 80052834
}

// fn_80052838
void f_80052838(Ctx* __restrict c) {
  trace_call(0x80052838u);
  return; // 80052838
}

// fn_8005283C
void f_8005283C(Ctx* __restrict c) {
  trace_call(0x8005283Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005283C
  c->r[0]=c->lr; // 80052840
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052848
  c->r[31]=c->r[3]|c->r[3]; // 8005284C
  c->lr=0x80052854u; f_80051B40(c); // 80052850
  c->r[0]=0u+0x00000000u; // 80052854
  c->r[3]=0u+0x00000001u; // 80052858
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 8005285C
  W8(c->r[31]+0x0000003Cu,c->r[0]); // 80052860
  W8(c->r[31]+0x0000003Eu,c->r[0]); // 80052864
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052868
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005286C
  c->lr=c->r[0]; // 80052870
  c->r[1]=c->r[1]+0x00000010u; // 80052874
  return; // 80052878
}

